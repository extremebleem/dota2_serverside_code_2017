
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_lightdesc.cpp  (line 0, @0x0000000001a6d270, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_lightdesc_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// LightDesc_t::RecalculateOneOverThetaDotMinusPhiDot  (line 16, @0x00000000031b6160, libserver.so)
void __fastcall LightDesc_t::RecalculateOneOverThetaDotMinusPhiDot(LightDesc_t *const this)
{
  float v1; // xmm0_4

  v1 = this->m_ThetaDot - this->m_PhiDot;
  if ( v1 > 1.0e-10 )
    this->m_OneOverThetaDotMinusPhiDot = 1.0 / v1;
  else
    this->m_OneOverThetaDotMinusPhiDot = 1.0;
}


// LightDesc_t::RecalculateDerivedValues  (line 32, @0x00000000031b61b0, libserver.so)  // inlines: DEG2RAD, RecalculateOneOverThetaDotMinusPhiDot, operator*=, operator=
// calls: cosf
// callers: CLightComponent::ComputeLightDesc
void __fastcall LightDesc_t::RecalculateDerivedValues(LightDesc_t *const this)
{
  uint v2; // eax
  bool v3; // zf
  LightType_t m_Type; // eax
  float v5; // xmm0_4
  float v6; // xmm0_4
  vec_t v7; // xmm0_4
  vec_t v8; // xmm3_4
  float v9; // [rsp-14h] [rbp-1Ch]

  v2 = this->m_Flags & 0xFFFFFFF8;
  v3 = this->m_Attenuation0 == 0.0;
  this->m_Flags = this->m_Flags & 0xFFFFFFF0 | 8;
  if ( !v3 )
    this->m_Flags = v2 | 9;
  if ( this->m_Attenuation1 != 0.0 )
    this->m_Flags |= 2u;
  if ( this->m_Attenuation2 == 0.0 )
  {
    m_Type = this->m_Type;
    if ( this->m_Type == LightType_t::MATERIAL_LIGHT_SPOT )
      goto LABEL_7;
  }
  else
  {
    m_Type = this->m_Type;
    this->m_Flags |= 4u;
    if ( m_Type == LightType_t::MATERIAL_LIGHT_SPOT )
    {
LABEL_7:
      v5 = cosf(0.017453292 * this->m_Theta);
      this->m_ThetaDot = v5;
      v9 = v5;
      v6 = cosf(0.017453292 * this->m_Phi);
      this->m_PhiDot = v6;
      if ( (v9 - v6) <= 1.0e-10 )
        this->m_OneOverThetaDotMinusPhiDot = 1.0;
      else
        this->m_OneOverThetaDotMinusPhiDot = 1.0 / (v9 - v6);
      goto LABEL_9;
    }
  }
  this->m_ThetaDot = 1.0;
  this->m_PhiDot = 1.0;
  if ( m_Type == LightType_t::MATERIAL_LIGHT_DIRECTIONAL )
  {
    v7 = this->m_Direction.z * 2000000.0;
    v8 = this->m_Direction.x * 2000000.0;
    this->m_Position.y = this->m_Direction.y * 2000000.0;
    this->m_Position.z = v7;
    this->m_Position.x = v8;
  }
LABEL_9:
  this->m_RangeSquared = this->m_Range * this->m_Range;
}


// LightDesc_t::ComputeLightAtPointsForDirectional  (line 72, @0x00000000031b6320, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, DuplicateVector, MaddSIMD<(ESIMDLevel)20u>, MaxSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, ReplicateX4<(ESIMDLevel)20u>, _mm_add_ps, _mm_max_ps, _mm_mul_ps, _mm_set1_ps, operator*
// callers: LightDesc_t::ComputeLightAtPoints
void __fastcall LightDesc_t::ComputeLightAtPointsForDirectional(
        const LightDesc_t *const this,
        const FourVectors *const pos,
        const FourVectors *const normal,
        FourVectors *const color,
        bool DoHalfLambert,
        bool UseBounceColor)
{
  __m128 v6; // xmm1
  __m128 v7; // xmm0

  v6 = _mm_add_ps(
         _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Direction.z), LODWORD(this->m_Direction.z), 0), *&normal->gap0[32]),
         _mm_add_ps(
           _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Direction.y), LODWORD(this->m_Direction.y), 0), *&normal->gap0[16]),
           _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Direction.x), LODWORD(this->m_Direction.x), 0), *normal->gap0)));
  if ( DoHalfLambert )
  {
    v7 = _mm_add_ps(_mm_mul_ps(v6, Four_PointFives), Four_PointFives);
    if ( !UseBounceColor )
    {
LABEL_3:
      *color->gap0 = _mm_add_ps(
                       _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Color.x), LODWORD(this->m_Color.x), 0), v7),
                       *color->gap0);
      *&color->gap0[16] = _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Color.y), LODWORD(this->m_Color.y), 0), v7),
                            *&color->gap0[16]);
      *&color->gap0[32] = _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Color.z), LODWORD(this->m_Color.z), 0), v7),
                            *&color->gap0[32]);
      return;
    }
  }
  else
  {
    v7 = _mm_max_ps(Four_Zeros, v6);
    if ( !UseBounceColor )
      goto LABEL_3;
  }
  *color->gap0 = _mm_add_ps(
                   _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_BounceColor.x), LODWORD(this->m_BounceColor.x), 0), v7),
                   *color->gap0);
  *&color->gap0[16] = _mm_add_ps(
                        _mm_mul_ps(
                          _mm_shuffle_ps(LODWORD(this->m_BounceColor.y), LODWORD(this->m_BounceColor.y), 0),
                          v7),
                        *&color->gap0[16]);
  *&color->gap0[32] = _mm_add_ps(
                        _mm_mul_ps(
                          _mm_shuffle_ps(LODWORD(this->m_BounceColor.z), LODWORD(this->m_BounceColor.z), 0),
                          v7),
                        *&color->gap0[32]);
}


// LightDesc_t::DistanceAtWhichBrightnessIsLessThan  (line 102, @0x00000000031b6400, libserver.so)  // inlines: FastSqrt, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: SolveQuadratic
float __fastcall LightDesc_t::DistanceAtWhichBrightnessIsLessThan(
        const LightDesc_t *const this,
        float a2,
        float flAmount)
{
  float v3; // xmm2_4
  char v4; // al
  float result; // xmm0_4
  float r0; // [rsp+18h] [rbp-8h] BYREF
  float r1; // [rsp+1Ch] [rbp-4h] BYREF

  v3 = fsqrt(
         ((this->m_Color.x * this->m_Color.x) + (this->m_Color.y * this->m_Color.y))
       + (this->m_Color.z * this->m_Color.z));
  if ( v3 <= 0.0 )
    return 0.0;
  v4 = SolveQuadratic(
         this->m_Attenuation2 * (a2 / v3),
         (a2 / v3) * this->m_Attenuation1,
         (this->m_Attenuation0 * (a2 / v3)) - 1.0,
         0.0,
         &r0,
         &r1);
  result = 0.0;
  if ( v4 == 0 )
    return result;
  result = r1;
  if ( r0 <= r1 )
  {
    if ( r1 >= 0.0 )
    {
      if ( r0 <= r1 )
        return result;
      return r0;
    }
    return 0.0;
  }
  result = 0.0;
  if ( r0 < 0.0 )
    return result;
  return r0;
}


// LightDesc_t::ComputeLightAtPoints  (line 131, @0x00000000031b64d0, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, ApplyBinaryUpdateFunction<SubSIMD<(ESIMDLevel)20u> >, CmpGtSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, DuplicateVector, MaddSIMD<(ESIMDLevel)20u>, MaxSIMD<(ESIMDLevel)20u>, MinSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, PowSIMD, ReciprocalEstSIMD<(ESIMDLevel)20u>, ReciprocalSqrtEstSIMD<(ESIMDLevel)20u>, ReplicateX4<(ESIMDLevel)20u>, SqrtEstSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, VectorNormalizeFast, _mm_add_ps, _mm_and_ps, _mm_cmpgt_ps, _mm_cmplt_ps, _mm_max_ps, _mm_min_ps, _mm_mul_ps, _mm_rcp_ps, _mm_rsqrt_ps, _mm_set1_ps, _mm_sqrt_ps, _mm_sub_ps, operator*, operator*=, operator-=
// calls: LightDesc_t::ComputeLightAtPointsForDirectional, Pow_FixedPoint_Exponent_SIMD
void __fastcall LightDesc_t::ComputeLightAtPoints(
        const LightDesc_t *const this,
        const FourVectors *const pos,
        const FourVectors *const normal,
        FourVectors *const color,
        bool DoHalfLambert,
        bool UseBounceColor)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  LightType_t m_Type; // eax
  uint m_Flags; // esi
  __m128 v12; // xmm0
  __m128 v13; // xmm5
  __m128 v14; // xmm1
  __m128 v15; // xmm7
  __m128 v16; // xmm0
  __m128 v17; // xmm4
  __m128 v18; // xmm3
  __m128 v19; // xmm0
  __m128 v20; // xmm5
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  float m_Falloff; // xmm4_4
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  __m128 v27; // xmm0
  bool v28; // [rsp+4h] [rbp-5Ch]
  FourVectors *colora; // [rsp+8h] [rbp-58h]
  fltx4_0 dot2; // [rsp+10h] [rbp-50h]
  fltx4_0 falloff; // [rsp+20h] [rbp-40h]
  fltx4_0 strength; // [rsp+30h] [rbp-30h]
  fltx4_0 cone_falloff_scale; // [rsp+40h] [rbp-20h] BYREF

  m_Type = this->m_Type;
  if ( this->m_Type == LightType_t::MATERIAL_LIGHT_DIRECTIONAL )
  {
    LightDesc_t::ComputeLightAtPointsForDirectional(this, pos, normal, color, DoHalfLambert, UseBounceColor);
  }
  else
  {
    if ( m_Type == LightType_t::MATERIAL_LIGHT_SPOT || m_Type == LightType_t::MATERIAL_LIGHT_POINT )
    {
      v8 = _mm_sub_ps(_mm_shuffle_ps(LODWORD(this->m_Position.x), LODWORD(this->m_Position.x), 0), *pos->gap0);
      v7 = _mm_sub_ps(_mm_shuffle_ps(LODWORD(this->m_Position.y), LODWORD(this->m_Position.y), 0), *&pos->gap0[16]);
      v6 = _mm_sub_ps(_mm_shuffle_ps(LODWORD(this->m_Position.z), LODWORD(this->m_Position.z), 0), *&pos->gap0[32]);
    }
    m_Flags = this->m_Flags;
    v12 = _mm_add_ps(_mm_mul_ps(v6, v6), _mm_add_ps(_mm_mul_ps(v7, v7), _mm_mul_ps(v8, v8)));
    v13 = _mm_max_ps(Four_Ones, v12);
    if ( (m_Flags & 1) != 0 )
      v14 = _mm_shuffle_ps(LODWORD(this->m_Attenuation0), LODWORD(this->m_Attenuation0), 0);
    else
      v14 = Four_Epsilons;
    if ( (m_Flags & 2) != 0 )
      v14 = _mm_add_ps(
              v14,
              _mm_mul_ps(
                _mm_shuffle_ps(LODWORD(this->m_Attenuation1), LODWORD(this->m_Attenuation1), 0),
                _mm_sqrt_ps(v13)));
    if ( (m_Flags & 4) != 0 )
      v14 = _mm_add_ps(
              v14,
              _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Attenuation2), LODWORD(this->m_Attenuation2), 0), v13));
    v15 = _mm_rcp_ps(v14);
    if ( this->m_Range != 0.0 )
      v15 = _mm_and_ps(
              v15,
              _mm_cmplt_ps(v13, _mm_shuffle_ps(LODWORD(this->m_RangeSquared), LODWORD(this->m_RangeSquared), 0)));
    v16 = _mm_rsqrt_ps(v12);
    v17 = _mm_mul_ps(v8, v16);
    v18 = _mm_mul_ps(v7, v16);
    v19 = _mm_mul_ps(v16, v6);
    v20 = _mm_add_ps(
            _mm_mul_ps(*&normal->gap0[32], v19),
            _mm_add_ps(_mm_mul_ps(*&normal->gap0[16], v18), _mm_mul_ps(*normal->gap0, v17)));
    if ( DoHalfLambert )
      v21 = _mm_add_ps(_mm_mul_ps(v20, Four_PointFives), Four_PointFives);
    else
      v21 = _mm_max_ps(Four_Zeros, v20);
    if ( m_Type == LightType_t::MATERIAL_LIGHT_SPOT )
    {
      v22 = _mm_sub_ps(
              Four_Zeros,
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Direction.z), LODWORD(this->m_Direction.z), 0), v19),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Direction.y), LODWORD(this->m_Direction.y), 0), v18),
                  _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Direction.x), LODWORD(this->m_Direction.x), 0), v17))));
      v23 = _mm_shuffle_ps(LODWORD(this->m_PhiDot), LODWORD(this->m_PhiDot), 0);
      m_Falloff = this->m_Falloff;
      v25 = _mm_min_ps(
              _mm_mul_ps(
                _mm_shuffle_ps(
                  LODWORD(this->m_OneOverThetaDotMinusPhiDot),
                  LODWORD(this->m_OneOverThetaDotMinusPhiDot),
                  0),
                _mm_sub_ps(v22, v23)),
              Four_Ones);
      cone_falloff_scale = v25;
      if ( m_Falloff != 0.0 && m_Falloff != 1.0 )
      {
        v28 = UseBounceColor;
        colora = color;
        dot2 = v22;
        falloff = v15;
        strength = v21;
        v25 = Pow_FixedPoint_Exponent_SIMD(&cone_falloff_scale, (m_Falloff * 4.0));
        v21 = strength;
        v23 = _mm_shuffle_ps(LODWORD(this->m_PhiDot), LODWORD(this->m_PhiDot), 0);
        v15 = falloff;
        v22 = dot2;
        color = colora;
        UseBounceColor = v28;
      }
      v21 = _mm_and_ps(_mm_cmplt_ps(v23, v22), _mm_mul_ps(v25, v21));
    }
    v26 = _mm_mul_ps(v21, v15);
    if ( UseBounceColor )
    {
      *color->gap0 = _mm_add_ps(
                       _mm_mul_ps(
                         _mm_shuffle_ps(LODWORD(this->m_BounceColor.x), LODWORD(this->m_BounceColor.x), 0),
                         v26),
                       *color->gap0);
      *&color->gap0[16] = _mm_add_ps(
                            _mm_mul_ps(
                              _mm_shuffle_ps(LODWORD(this->m_BounceColor.y), LODWORD(this->m_BounceColor.y), 0),
                              v26),
                            *&color->gap0[16]);
      v27 = _mm_shuffle_ps(LODWORD(this->m_BounceColor.z), LODWORD(this->m_BounceColor.z), 0);
    }
    else
    {
      *color->gap0 = _mm_add_ps(
                       _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Color.x), LODWORD(this->m_Color.x), 0), v26),
                       *color->gap0);
      *&color->gap0[16] = _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Color.y), LODWORD(this->m_Color.y), 0), v26),
                            *&color->gap0[16]);
      v27 = _mm_shuffle_ps(LODWORD(this->m_Color.z), LODWORD(this->m_Color.z), 0);
    }
    *&color->gap0[32] = _mm_add_ps(_mm_mul_ps(v27, v26), *&color->gap0[32]);
  }
}


// LightDesc_t::ComputeNonincidenceLightAtPoints  (line 238, @0x00000000031b67e0, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, ApplyBinaryUpdateFunction<SubSIMD<(ESIMDLevel)20u> >, CmpGtSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, DuplicateVector, MaddSIMD<(ESIMDLevel)20u>, MaxSIMD<(ESIMDLevel)20u>, MinSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, PowSIMD, ReciprocalEstSIMD<(ESIMDLevel)20u>, ReciprocalSqrtEstSIMD<(ESIMDLevel)20u>, ReplicateX4<(ESIMDLevel)20u>, SqrtEstSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, VectorNormalizeFast, _mm_add_ps, _mm_and_ps, _mm_cmpgt_ps, _mm_cmplt_ps, _mm_max_ps, _mm_min_ps, _mm_mul_ps, _mm_rcp_ps, _mm_rsqrt_ps, _mm_set1_ps, _mm_sqrt_ps, _mm_sub_ps, operator*, operator*=, operator-=
// calls: Pow_FixedPoint_Exponent_SIMD
void __fastcall LightDesc_t::ComputeNonincidenceLightAtPoints(
        const LightDesc_t *const this,
        const FourVectors *const pos,
        FourVectors *const color,
        bool UseBounceColor)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm3
  __m128 v6; // xmm4
  LightType_t m_Type; // eax
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  uint m_Flags; // esi
  __m128 v12; // xmm7
  __m128 v13; // xmm5
  __m128 v14; // xmm5
  __m128 v15; // xmm0
  __m128 v16; // xmm4
  __m128 v17; // xmm3
  __m128 v18; // xmm0
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  float m_Falloff; // xmm4_4
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  bool v24; // [rsp+4h] [rbp-5Ch]
  FourVectors *colora; // [rsp+8h] [rbp-58h]
  fltx4_0 dot2; // [rsp+10h] [rbp-50h]
  fltx4_0 falloff; // [rsp+20h] [rbp-40h]
  fltx4_0 cone_falloff_scale; // [rsp+40h] [rbp-20h] BYREF

  m_Type = this->m_Type;
  if ( this->m_Type != LightType_t::MATERIAL_LIGHT_DIRECTIONAL )
  {
    if ( m_Type == LightType_t::MATERIAL_LIGHT_SPOT || m_Type == LightType_t::MATERIAL_LIGHT_POINT )
    {
      v6 = _mm_sub_ps(_mm_shuffle_ps(LODWORD(this->m_Position.x), LODWORD(this->m_Position.x), 0), *pos->gap0);
      v5 = _mm_sub_ps(_mm_shuffle_ps(LODWORD(this->m_Position.y), LODWORD(this->m_Position.y), 0), *&pos->gap0[16]);
      v4 = _mm_sub_ps(_mm_shuffle_ps(LODWORD(this->m_Position.z), LODWORD(this->m_Position.z), 0), *&pos->gap0[32]);
    }
    v9 = _mm_add_ps(_mm_mul_ps(v4, v4), _mm_add_ps(_mm_mul_ps(v5, v5), _mm_mul_ps(v6, v6)));
    v10 = Four_Ones;
    m_Flags = this->m_Flags;
    v12 = _mm_max_ps(Four_Ones, v9);
    if ( (m_Flags & 1) != 0 )
      v13 = _mm_shuffle_ps(LODWORD(this->m_Attenuation0), LODWORD(this->m_Attenuation0), 0);
    else
      v13 = Four_Epsilons;
    if ( (m_Flags & 2) != 0 )
      v13 = _mm_add_ps(
              v13,
              _mm_mul_ps(
                _mm_shuffle_ps(LODWORD(this->m_Attenuation1), LODWORD(this->m_Attenuation1), 0),
                _mm_sqrt_ps(v12)));
    if ( (m_Flags & 4) != 0 )
      v13 = _mm_add_ps(
              v13,
              _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Attenuation2), LODWORD(this->m_Attenuation2), 0), v12));
    v14 = _mm_rcp_ps(v13);
    if ( this->m_Range != 0.0 )
      v14 = _mm_and_ps(
              v14,
              _mm_cmplt_ps(v12, _mm_shuffle_ps(LODWORD(this->m_RangeSquared), LODWORD(this->m_RangeSquared), 0)));
    v15 = _mm_rsqrt_ps(v9);
    v16 = _mm_mul_ps(v6, v15);
    v17 = _mm_mul_ps(v5, v15);
    v18 = _mm_mul_ps(v15, v4);
    if ( m_Type == LightType_t::MATERIAL_LIGHT_SPOT )
    {
      v19 = _mm_sub_ps(
              Four_Zeros,
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Direction.z), LODWORD(this->m_Direction.z), 0), v18),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Direction.y), LODWORD(this->m_Direction.y), 0), v17),
                  _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Direction.x), LODWORD(this->m_Direction.x), 0), v16))));
      v20 = _mm_shuffle_ps(LODWORD(this->m_PhiDot), LODWORD(this->m_PhiDot), 0);
      m_Falloff = this->m_Falloff;
      v22 = _mm_min_ps(
              _mm_mul_ps(
                _mm_shuffle_ps(
                  LODWORD(this->m_OneOverThetaDotMinusPhiDot),
                  LODWORD(this->m_OneOverThetaDotMinusPhiDot),
                  0),
                _mm_sub_ps(v19, v20)),
              Four_Ones);
      cone_falloff_scale = v22;
      if ( m_Falloff != 0.0 && m_Falloff != 1.0 )
      {
        v24 = UseBounceColor;
        colora = color;
        dot2 = v19;
        falloff = v14;
        v22 = Pow_FixedPoint_Exponent_SIMD(&cone_falloff_scale, (m_Falloff * 4.0));
        v10 = Four_Ones;
        v20 = _mm_shuffle_ps(LODWORD(this->m_PhiDot), LODWORD(this->m_PhiDot), 0);
        v14 = falloff;
        v19 = dot2;
        color = colora;
        UseBounceColor = v24;
      }
      v10 = _mm_and_ps(_mm_cmplt_ps(v20, v19), _mm_mul_ps(v22, v10));
    }
    v23 = _mm_mul_ps(v10, v14);
    if ( UseBounceColor )
    {
      *color->gap0 = _mm_add_ps(
                       _mm_mul_ps(
                         _mm_shuffle_ps(LODWORD(this->m_BounceColor.x), LODWORD(this->m_BounceColor.x), 0),
                         v23),
                       *color->gap0);
      *&color->gap0[16] = _mm_add_ps(
                            _mm_mul_ps(
                              _mm_shuffle_ps(LODWORD(this->m_BounceColor.y), LODWORD(this->m_BounceColor.y), 0),
                              v23),
                            *&color->gap0[16]);
      *&color->gap0[32] = _mm_add_ps(
                            _mm_mul_ps(
                              _mm_shuffle_ps(LODWORD(this->m_BounceColor.z), LODWORD(this->m_BounceColor.z), 0),
                              v23),
                            *&color->gap0[32]);
    }
    else
    {
      *color->gap0 = _mm_add_ps(
                       _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Color.x), LODWORD(this->m_Color.x), 0), v23),
                       *color->gap0);
      *&color->gap0[16] = _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Color.y), LODWORD(this->m_Color.y), 0), v23),
                            *&color->gap0[16]);
      *&color->gap0[32] = _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps(LODWORD(this->m_Color.z), LODWORD(this->m_Color.z), 0), v23),
                            *&color->gap0[32]);
    }
  }
}


// LightDesc_t::SetupOldStyleAttenuation  (line 339, @0x00000000031b6a80, libserver.so)  // inlines: operator*=
// callers: CLightComponent::ComputeLightDesc
void __fastcall LightDesc_t::SetupOldStyleAttenuation(
        LightDesc_t *const this,
        float a2,
        float fQuadraticAttn,
        float fLinearAttn,
        float fConstantAttn)
{
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4

  v5 = a2;
  if ( a2 < 0.001 )
  {
    v6 = 0.0;
    v5 = 0.0;
  }
  else
  {
    v6 = 10000.0 * a2;
  }
  if ( fQuadraticAttn < 0.001 )
  {
    fQuadraticAttn = 0.0;
    v7 = 0.0;
  }
  else
  {
    v7 = 100.0 * fQuadraticAttn;
  }
  if ( fLinearAttn < 0.001 )
  {
    fLinearAttn = 0.0;
    if ( fQuadraticAttn < 0.001 && v5 < 0.001 )
      fLinearAttn = 1.0;
  }
  this->m_Attenuation2 = v5;
  this->m_Attenuation1 = fQuadraticAttn;
  this->m_Attenuation0 = fLinearAttn;
  v8 = (v7 + v6) + fLinearAttn;
  if ( v8 > 0.0 )
  {
    this->m_Color.x = this->m_Color.x * v8;
    this->m_Color.y = this->m_Color.y * v8;
    this->m_Color.z = this->m_Color.z * v8;
    this->m_BounceColor.x = this->m_BounceColor.x * v8;
    v9 = this->m_BounceColor.y * v8;
    v10 = v8 * this->m_BounceColor.z;
    this->m_BounceColor.y = v9;
    this->m_BounceColor.z = v10;
  }
}


// LightDesc_t::SetupNewStyleAttenuation  (line 368, @0x00000000031b6ba0, libserver.so)
// calls: SolveInverseQuadraticMonotonic, Warning
// strings: "can't solve quadratic for light %f %f\n", "light has _fifty_percent_distance of %f but no zero_percent_distance\n"
void __fastcall LightDesc_t::SetupNewStyleAttenuation(
        LightDesc_t *const this,
        __m128 a2,
        double fFiftyPercentDistance,
        double fZeroPercentDistance,
        double a5,
        double a6,
        double a7)
{
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v10; // xmm6_4
  char v11; // al
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  double v15; // xmm6_8
  float d0; // [rsp+8h] [rbp-28h]
  float v17; // [rsp+Ch] [rbp-24h]
  float v18; // [rsp+Ch] [rbp-24h]
  float v19; // [rsp+14h] [rbp-1Ch] BYREF
  float v20; // [rsp+18h] [rbp-18h] BYREF
  float v21[5]; // [rsp+1Ch] [rbp-14h] BYREF

  v7 = a2.m128_f32[0];
  v8 = *&fFiftyPercentDistance;
  if ( a2.m128_f32[0] > *&fFiftyPercentDistance )
  {
    *&v15 = _mm_unpacklo_ps(a2, a2).m128_u64[0];
    v18 = *&v15;
    Warning(
      "light has _fifty_percent_distance of %f but no zero_percent_distance\n",
      *&v15,
      fFiftyPercentDistance,
      fZeroPercentDistance,
      a5,
      a6,
      a7,
      v15,
      fFiftyPercentDistance);
    v7 = v18;
    v8 = v7 + v7;
  }
  d0 = v8;
  v17 = v7;
  v19 = 0.0;
  v20 = 1.0;
  v21[0] = 0.0;
  SolveInverseQuadraticMonotonic(0.0, 1.0, v7, 2.0, v8, 256.0, &v19, &v20, v21);
  v10 = v17;
  if ( v11 == 0 )
  {
    Warning("can't solve quadratic for light %f %f\n", v17, d0);
    v10 = v17;
  }
  v12 = (((v10 * v19) + v20) * v10) + v21[0];
  v13 = v20 * (2.0 / v12);
  v14 = (2.0 / v12) * v21[0];
  this->m_Attenuation2 = v19 * (2.0 / v12);
  this->m_Attenuation1 = v13;
  this->m_Attenuation0 = v14;
}


// LightDesc_t::IsDirectionWithinLightCone  (line 395, @0x00000000031b6cc0, libserver.so)  // inlines: Dot, DotProduct
bool __fastcall LightDesc_t::IsDirectionWithinLightCone(const LightDesc_t *const this, const Vector *const rdir)
{
  bool result; // al

  result = 1;
  if ( this->m_Type == LightType_t::MATERIAL_LIGHT_SPOT )
    return (((rdir->x * this->m_Direction.x) + (rdir->y * this->m_Direction.y)) + (rdir->z * this->m_Direction.z)) >= this->m_PhiDot;
  return result;
}


// LightDesc_t::BuildShadowFrustumForSpotlight  (line 407, @0x00000000031b6d00, libserver.so)
// calls: VectorVectorsFLU, CFrustum::BuildFrustumFromVectors
void __fastcall LightDesc_t::BuildShadowFrustumForSpotlight(
        const LightDesc_t *const this,
        float a2,
        float flFarPlane,
        CFrustum *pFrustumOut)
{
  float m_Range; // xmm1_4
  Vector vFwd; // [rsp+10h] [rbp-60h] BYREF
  Vector vLeft; // [rsp+20h] [rbp-50h] BYREF
  Vector vUp; // [rsp+30h] [rbp-40h] BYREF

  vFwd = this->m_Direction;
  VectorVectorsFLU(&vFwd, &vLeft, &vUp);
  m_Range = a2;
  if ( a2 == 0.0 )
    m_Range = this->m_Range;
  CFrustum::BuildFrustumFromVectors(
    pFrustumOut,
    &this->m_Position,
    1.0,
    m_Range,
    this->m_Phi + this->m_Phi,
    1.0,
    &vFwd,
    &vLeft,
    &vUp);
}


// LightDesc_t::CalculateBounds  (line 424, @0x00000000031b6da0, libserver.so)  // inlines: DEG2RAD, Init, VectorAdd, VectorMax, VectorMin, VectorMultiply, VectorSubtract, fpmax, fpmin, operator*, operator+, operator-, operator=
// calls: VectorVectorsFLU, tanf
// callers: CLightComponent::UpdateLightObject
bool __fastcall LightDesc_t::CalculateBounds(
        const LightDesc_t *const this,
        Vector *const vMinBounds,
        Vector *const vMaxBounds)
{
  LightType_t m_Type; // eax
  float v8; // xmm0_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm3_4
  vec_t v11; // xmm2_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  float v14; // xmm0_4
  float x; // xmm6_4
  Vector *v16; // rax
  float y; // xmm5_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float z; // xmm2_4
  float v22; // xmm8_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm5_4
  float v26; // xmm1_4
  float v27; // xmm7_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm11_4
  float v31; // xmm2_4
  float v32; // xmm6_4
  float v33; // xmm0_4
  float v34; // xmm10_4
  float v35; // xmm5_4
  float v36; // xmm9_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  vec_t v41; // xmm1_4
  vec_t v42; // xmm0_4
  float m_Range; // [rsp+Ch] [rbp-84h]
  Vector vLeft; // [rsp+10h] [rbp-80h] BYREF
  Vector vUp; // [rsp+20h] [rbp-70h] BYREF
  Vector pnts[5]; // [rsp+30h] [rbp-60h] BYREF
  int v47; // [rsp+6Ch] [rbp-24h] BYREF

  m_Type = this->m_Type;
  if ( this->m_Type == LightType_t::MATERIAL_LIGHT_SPOT )
  {
    VectorVectorsFLU(&this->m_Direction, &vLeft, &vUp);
    m_Range = this->m_Range;
    v14 = tanf(0.017453292 * this->m_Phi);
    x = this->m_Direction.x;
    v16 = pnts;
    y = this->m_Direction.y;
    v18 = v14 * m_Range;
    v19 = this->m_Position.y;
    pnts[0].x = this->m_Position.x;
    v20 = m_Range * this->m_Direction.z;
    z = this->m_Position.z;
    v22 = vLeft.x * v18;
    pnts[0].y = v19;
    v23 = (x * m_Range) + pnts[0].x;
    v24 = vLeft.y;
    vMinBounds->x = 3.4028235e38;
    v25 = (y * m_Range) + v19;
    pnts[0].z = z;
    v26 = v20 + z;
    v27 = v24 * v18;
    v28 = vUp.x * v18;
    v29 = vUp.y * v18;
    v30 = v23 - v22;
    v31 = vUp.z * v18;
    v32 = v23 + v22;
    v33 = v18 * vLeft.z;
    v34 = v25 - v27;
    v35 = v25 + v27;
    v36 = v26 - v33;
    v37 = v26 + v33;
    pnts[1].x = v30 - v28;
    pnts[3].x = v30 + v28;
    pnts[2].x = v32 - v28;
    pnts[1].y = v34 - v29;
    pnts[3].y = v34 + v29;
    pnts[4].x = v32 + v28;
    pnts[2].y = v35 - v29;
    pnts[1].z = v36 - v31;
    pnts[3].z = v36 + v31;
    pnts[4].y = v35 + v29;
    pnts[2].z = v37 - v31;
    pnts[4].z = v37 + v31;
    vMinBounds->y = 3.4028235e38;
    vMinBounds->z = 3.4028235e38;
    vMaxBounds->x = -3.4028235e38;
    vMaxBounds->y = -3.4028235e38;
    vMaxBounds->z = -3.4028235e38;
    do
    {
      v38 = v16->x;
      ++v16;
      v39 = v16[-1].y;
      vMinBounds->x = fminf(v38, vMinBounds->x);
      vMinBounds->y = fminf(v39, vMinBounds->y);
      v40 = v16[-1].z;
      vMinBounds->z = fminf(v40, vMinBounds->z);
      v41 = fmaxf(v39, vMaxBounds->y);
      v42 = fmaxf(v40, vMaxBounds->z);
      vMaxBounds->x = fmaxf(v38, vMaxBounds->x);
      vMaxBounds->y = v41;
      vMaxBounds->z = v42;
    }
    while ( v16 != &v47 );
    return 1;
  }
  else if ( m_Type == LightType_t::MATERIAL_LIGHT_ENVIRONMENT_PROBE || m_Type == LightType_t::MATERIAL_LIGHT_POINT )
  {
    v8 = this->m_Range;
    v9 = this->m_Position.z - v8;
    v10 = this->m_Position.x - v8;
    vMinBounds->y = this->m_Position.y - v8;
    vMinBounds->z = v9;
    vMinBounds->x = v10;
    v11 = this->m_Position.y + v8;
    v12 = this->m_Position.z + v8;
    v13 = v8 + this->m_Position.x;
    vMaxBounds->y = v11;
    vMaxBounds->z = v12;
    vMaxBounds->x = v13;
    return 1;
  }
  else
  {
    return 0;
  }
}


// LightDesc_t::SetPointLightSourceShape  (line 467, @0x00000000031b7070, libserver.so)
void __fastcall LightDesc_t::SetPointLightSourceShape(LightDesc_t *const this)
{
  this->m_Shape = LightSourceShape_t::LIGHT_SOURCE_SHAPE_SPHERE;
  this->m_flLightSourceDim0 = 0.0;
  this->m_flLightSourceDim1 = 0.0;
}


// LightDesc_t::SetSphereLightSourceShape  (line 474, @0x00000000031b7090, libserver.so)
void __fastcall LightDesc_t::SetSphereLightSourceShape(LightDesc_t *const this, float a2, float flSphereRadius)
{
  this->m_Shape = LightSourceShape_t::LIGHT_SOURCE_SHAPE_SPHERE;
  this->m_flLightSourceDim0 = a2;
  this->m_flLightSourceDim1 = 0.0;
}


// LightDesc_t::SetSphereLightSourceShapeForDirectionalLight  (line 481, @0x00000000031b70b0, libserver.so)  // inlines: DEG2RAD
// calls: tanf
void __fastcall LightDesc_t::SetSphereLightSourceShapeForDirectionalLight(
        LightDesc_t *const this,
        float a2,
        float flAngularRadiusInDegrees)
{
  float v4; // xmm0_4

  this->m_Shape = LightSourceShape_t::LIGHT_SOURCE_SHAPE_SPHERE;
  v4 = tanf(a2 * 0.017453292);
  this->m_flLightSourceDim1 = 0.0;
  this->m_flLightSourceDim0 = v4;
}


