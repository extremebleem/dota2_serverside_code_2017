
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// QuaternionsAreEqual  (line 988, @0x000000000210a830, libserver.so)  // inlines: FloatsAreEqual, QuaternionsAreEqualInternal
// calls: frexpf, FloatsAreEqual
// callers: TransformHistory_t::IsIdenticalWithinTolerance
char __fastcall QuaternionsAreEqual(
        const Quaternion *const src1,
        const Quaternion *const src2,
        __m128i a3,
        float flTolerance)
{
  float v4; // r15d
  float v7; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm1_4
  float v10; // xmm0_4
  vec_t y; // xmm3_4
  vec_t v12; // xmm1_4
  __m128i v13; // xmm0
  float v14; // r14d
  float v15; // xmm0_4
  __int64 v16; // rax
  float v17; // xmm1_4
  char result; // al
  __int64 v19; // rdx
  float v20; // xmm1_4
  float v21; // xmm0_4
  __int64 v22; // rax
  float v23; // xmm1_4
  __int64 v24; // rdx
  float v25; // xmm1_4
  __int64 v26; // rdx
  float v27; // xmm1_4
  __m128i v28; // xmm5
  __m128i v29; // xmm0
  float v30; // r12d
  float v31; // xmm0_4
  float v32; // xmm3_4
  __int64 v33; // rax
  float v34; // xmm1_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm3_4
  __int64 v38; // rax
  float v39; // xmm1_4
  __int64 v40; // rdx
  float v41; // xmm1_4
  __m128i v42; // xmm6
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  float v45; // xmm1_4
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  float w; // [rsp+0h] [rbp-50h]
  float v56; // [rsp+4h] [rbp-4Ch]
  float v57; // [rsp+4h] [rbp-4Ch]
  vec_t v58; // [rsp+8h] [rbp-48h]
  float z; // [rsp+8h] [rbp-48h]
  float v60; // [rsp+8h] [rbp-48h]
  float v61; // [rsp+8h] [rbp-48h]
  float x; // [rsp+Ch] [rbp-44h]
  float xa; // [rsp+Ch] [rbp-44h]
  float xb; // [rsp+Ch] [rbp-44h]
  float xc; // [rsp+Ch] [rbp-44h]
  int exponent; // [rsp+18h] [rbp-38h] BYREF
  int v67[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  v58 = src1->x;
  x = src2->x;
  v56 = frexpf(src1->x, &exponent);
  v7 = frexpf(x, v67);
  if ( exponent <= v67[0] )
  {
    if ( exponent >= v67[0] )
    {
      if ( exponent == v67[0] && exponent < -17 )
        goto LABEL_23;
    }
    else
    {
      if ( v67[0] < -17 )
        goto LABEL_23;
      v19 = 1LL << (LOBYTE(v67[0]) - exponent);
      if ( v19 < 0 )
      {
        v48 = v19 & 1 | ((1LL << (LOBYTE(v67[0]) - exponent)) >> 1);
        v20 = v48 + v48;
      }
      else
      {
        v20 = v19;
      }
      v56 = v56 / v20;
    }
  }
  else
  {
    if ( exponent < -17 )
      goto LABEL_23;
    v8 = 1LL << (exponent - LOBYTE(v67[0]));
    if ( v8 < 0 )
    {
      v43 = (1LL << (exponent - LOBYTE(v67[0]))) & 1 | ((1LL << (exponent - LOBYTE(v67[0]))) >> 1);
      v9 = v43 + v43;
    }
    else
    {
      v9 = v8;
    }
    v7 = v7 / v9;
  }
  if ( v4 < fabs(v56 - v7) )
  {
    v10 = v58;
    y = src2->y;
    v12 = x;
    z = src2->z;
    goto LABEL_8;
  }
LABEL_23:
  xb = src2->y;
  v60 = frexpf(src1->y, &exponent);
  v21 = frexpf(xb, v67);
  if ( exponent <= v67[0] )
  {
    if ( exponent >= v67[0] )
    {
      if ( exponent == v67[0] && exponent < -17 )
        goto LABEL_52;
    }
    else
    {
      if ( v67[0] < -17 )
        goto LABEL_52;
      v24 = 1LL << (LOBYTE(v67[0]) - exponent);
      if ( v24 < 0 )
      {
        v46 = v24 & 1 | ((1LL << (LOBYTE(v67[0]) - exponent)) >> 1);
        v25 = v46 + v46;
      }
      else
      {
        v25 = v24;
      }
      v60 = v60 / v25;
    }
  }
  else
  {
    if ( exponent < -17 )
      goto LABEL_52;
    v22 = 1LL << (exponent - LOBYTE(v67[0]));
    if ( v22 < 0 )
    {
      v50 = (1LL << (exponent - LOBYTE(v67[0]))) & 1 | ((1LL << (exponent - LOBYTE(v67[0]))) >> 1);
      v23 = v50 + v50;
    }
    else
    {
      v23 = v22;
    }
    v21 = v21 / v23;
  }
  if ( v4 < fabs(v60 - v21) )
  {
    v12 = src2->x;
    z = src2->z;
    v10 = src1->x;
    y = xb;
    goto LABEL_8;
  }
LABEL_52:
  xc = src2->z;
  v61 = frexpf(src1->z, &exponent);
  v36 = frexpf(xc, v67);
  if ( exponent <= v67[0] )
  {
    if ( exponent < v67[0] )
    {
      if ( v67[0] < -17 )
        goto LABEL_62;
      v44 = 1LL << (LOBYTE(v67[0]) - exponent);
      if ( v44 < 0 )
      {
        v53 = v44 & 1 | ((1LL << (LOBYTE(v67[0]) - exponent)) >> 1);
        v45 = v53 + v53;
      }
      else
      {
        v45 = v44;
      }
      v61 = v61 / v45;
    }
    else if ( exponent == v67[0] && exponent < -17 )
    {
      goto LABEL_62;
    }
  }
  else
  {
    if ( exponent < -17 )
      goto LABEL_62;
    v38 = 1LL << (exponent - LOBYTE(v67[0]));
    if ( v38 < 0 )
    {
      v51 = (1LL << (exponent - LOBYTE(v67[0]))) & 1 | ((1LL << (exponent - LOBYTE(v67[0]))) >> 1);
      v39 = v51 + v51;
    }
    else
    {
      v39 = v38;
    }
    v36 = v36 / v39;
  }
  if ( v4 < fabs(v61 - v36) )
  {
    y = src2->y;
    v12 = src2->x;
    z = xc;
    v10 = src1->x;
    goto LABEL_8;
  }
LABEL_62:
  result = FloatsAreEqual(src1->w, src2->w, v4, v37);
  if ( result == 0 )
  {
    v12 = src2->x;
    z = src2->z;
    v10 = src1->x;
    y = src2->y;
LABEL_8:
    xa = y;
    v57 = v12;
    w = src2->w;
    *v13.m128i_i32 = frexpf(v10, &exponent);
    v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
    v15 = frexpf(-v57, v67);
    if ( exponent <= v67[0] )
    {
      if ( exponent >= v67[0] )
      {
        if ( exponent == v67[0] && exponent < -17 )
          goto LABEL_42;
      }
      else
      {
        if ( v67[0] < -17 )
          goto LABEL_42;
        v26 = 1LL << (LOBYTE(v67[0]) - exponent);
        if ( v26 < 0 )
        {
          v47 = v26 & 1 | ((1LL << (LOBYTE(v67[0]) - exponent)) >> 1);
          v27 = v47 + v47;
        }
        else
        {
          v27 = v26;
        }
        v28 = _mm_cvtsi32_si128(LODWORD(v14));
        *v28.m128i_i32 = *v28.m128i_i32 / v27;
        v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
      }
    }
    else
    {
      if ( exponent < -17 )
        goto LABEL_42;
      v16 = 1LL << (exponent - LOBYTE(v67[0]));
      if ( v16 < 0 )
      {
        v49 = (1LL << (exponent - LOBYTE(v67[0]))) & 1 | ((1LL << (exponent - LOBYTE(v67[0]))) >> 1);
        v17 = v49 + v49;
      }
      else
      {
        v17 = v16;
      }
      v15 = v15 / v17;
    }
    if ( v4 < fabs(v14 - v15) )
      return 0;
LABEL_42:
    *v29.m128i_i32 = frexpf(src1->y, &exponent);
    v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v29));
    v31 = frexpf(-xa, v67);
    if ( exponent <= v67[0] )
    {
      if ( exponent >= v67[0] )
      {
        if ( exponent == v67[0] && exponent < -17 )
          goto LABEL_48;
      }
      else
      {
        if ( v67[0] < -17 )
          goto LABEL_48;
        v40 = 1LL << (LOBYTE(v67[0]) - exponent);
        if ( v40 < 0 )
        {
          v54 = v40 & 1 | ((1LL << (LOBYTE(v67[0]) - exponent)) >> 1);
          v41 = v54 + v54;
        }
        else
        {
          v41 = v40;
        }
        v42 = _mm_cvtsi32_si128(LODWORD(v30));
        *v42.m128i_i32 = *v42.m128i_i32 / v41;
        v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v42));
      }
    }
    else
    {
      if ( exponent < -17 )
        goto LABEL_48;
      v33 = 1LL << (exponent - LOBYTE(v67[0]));
      if ( v33 < 0 )
      {
        v52 = (1LL << (exponent - LOBYTE(v67[0]))) & 1 | ((1LL << (exponent - LOBYTE(v67[0]))) >> 1);
        v34 = v52 + v52;
      }
      else
      {
        v34 = v33;
      }
      v31 = v31 / v34;
    }
    if ( v4 < fabs(v30 - v31) )
      return 0;
LABEL_48:
    if ( FloatsAreEqual(src1->z, -z, v4, v32) != 0 )
      return FloatsAreEqual(src1->w, -w, v4, v35);
    return 0;
  }
  return result;
}


// RemapVal  (line 1275, @0x00000000028686c0, libserver.so)
float __fastcall RemapVal(float a1, float val, float A, __m128 B, float C, float D)
{
  float v6; // xmm4_4
  __m128 v8; // xmm0
  __m128 v9; // xmm1

  if ( val != A )
    return (((C - B.m128_f32[0]) * (a1 - val)) / (A - val)) + B.m128_f32[0];
  v8.m128_f32[0] = a1 - A;
  v9 = _mm_cmple_ss(0LL, v8);
  LODWORD(v6) = _mm_andnot_ps(v9, B).m128_u32[0] | LODWORD(C) & v9.m128_i32[0];
  return v6;
}


// RemapValClamped  (line 1283, @0x00000000028167b0, libserver.so)  // inlines: clamp<float, float>
// callers: CDOTA_BotMode_Roshan::GetDesire, CDOTA_BotMode_SecretShop::GetDesire, CDOTA_BotMode_Roam::GetDesire, CDOTA_BotMode_Farm::GetDesire, CDOTA_BotMode_Rune::GetRuneDesire, CDOTA_BotMode_PushTower::GetDesire, CDOTA_BotMode_Retreat::GetDesire
float __fastcall RemapValClamped(float a1, float val, float A, float B, float C, float D)
{
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4

  v6 = a1 - val;
  v7 = A - val;
  v8 = 0.0;
  v9 = v6 / v7;
  if ( v9 >= 0.0 )
    v8 = fminf(1.0, v9);
  return ((C - B) * v8) + B;
}


// RemapValClamped  (line 1283, @0x0000000002869810, libserver.so)  // inlines: clamp<float, float>
float __fastcall RemapValClamped(float a1, float val, float A, __m128 B, float C, float D)
{
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  float result; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm5_4

  if ( val == A )
  {
    v6.m128_f32[0] = a1 - A;
    v7 = _mm_cmple_ss(0LL, v6);
    LODWORD(result) = _mm_andnot_ps(v7, B).m128_u32[0] | LODWORD(C) & v7.m128_i32[0];
  }
  else
  {
    v9 = A - val;
    v10 = a1 - val;
    v11 = 0.0;
    v12 = v10 / v9;
    if ( v12 >= 0.0 )
      v11 = fminf(1.0, v12);
    return ((C - B.m128_f32[0]) * v11) + B.m128_f32[0];
  }
  return result;
}


// CDefOps<int>::LessFunc  (line 1408, @0x0000000001eb3150, libserver.so)
bool __fastcall CDefOps<int>::LessFunc(const int *const lhs, const int *const rhs)
{
  return *lhs < *rhs;
}


// CDefOps<FlattenedSerializerHandle_t__*>::LessFunc  (line 1408, @0x0000000001ec1550, libserver.so)
bool __fastcall CDefOps<FlattenedSerializerHandle_t__ *>::LessFunc(
        FlattenedSerializerHandle_t__ *const *const lhs,
        FlattenedSerializerHandle_t__ *const *const rhs)
{
  return *lhs < *rhs;
}


// CDefOps<unsigned int>::LessFunc  (line 1408, @0x0000000001efd0b0, libserver.so)
bool __fastcall CDefOps<unsigned int>::LessFunc(const unsigned int *const lhs, const unsigned int *const rhs)
{
  return *lhs < *rhs;
}


// CDefOps<CUtlStringToken>::LessFunc  (line 1408, @0x0000000001f72450, libserver.so)  // inlines: operator<
bool __fastcall CDefOps<CUtlStringToken>::LessFunc(const CUtlStringToken *const lhs, const CUtlStringToken *const rhs)
{
  return lhs->m_nHashCode < rhs->m_nHashCode;
}


// CDefOps<IPhysAggregateInstance*>::LessFunc  (line 1408, @0x0000000001f72460, libserver.so)
bool __fastcall CDefOps<IPhysAggregateInstance *>::LessFunc(
        IPhysAggregateInstance *const *const lhs,
        IPhysAggregateInstance *const *const rhs)
{
  return *lhs < *rhs;
}


// CDefOps<CUtlSymbol>::LessFunc  (line 1408, @0x0000000001f724d0, libserver.so)
bool __fastcall CDefOps<CUtlSymbol>::LessFunc(const CUtlSymbol *const lhs, const CUtlSymbol *const rhs)
{
  return lhs->m_Id < rhs->m_Id;
}


// CDefOps<const flexsettinghdr_t*>::LessFunc  (line 1408, @0x000000000217a840, libserver.so)
bool __fastcall CDefOps<flexsettinghdr_t const*>::LessFunc(
        const flexsettinghdr_t *const *const lhs,
        const flexsettinghdr_t *const *const rhs)
{
  return *lhs < *rhs;
}


// CDefOps<CEntityIndex>::LessFunc  (line 1408, @0x000000000227b630, libserver.so)  // inlines: operator<
bool __fastcall CDefOps<CEntityIndex>::LessFunc(const CEntityIndex *const lhs, const CEntityIndex *const rhs)
{
  return lhs->m_Data < rhs->m_Data;
}


// CDefOps<CBaseEntity*>::LessFunc  (line 1408, @0x00000000023047e0, libserver.so)
bool __fastcall CDefOps<CBaseEntity *>::LessFunc(CBaseEntity *const *const lhs, CBaseEntity *const *const rhs)
{
  return *lhs < *rhs;
}


// CDefOps<CHandle<CBaseEntity> >::LessFunc  (line 1408, @0x000000000233a250, libserver.so)  // inlines: operator<
bool __fastcall CDefOps<CHandle<CBaseEntity>>::LessFunc(
        const CHandle<CBaseEntity> *const lhs,
        const CHandle<CBaseEntity> *const rhs)
{
  return lhs->m_Index < rhs->m_Index;
}


// CDefOps<itemid_t>::LessFunc  (line 1408, @0x00000000025529b0, libserver.so)  // inlines: operator<
bool __fastcall CDefOps<itemid_t>::LessFunc(const itemid_t *const lhs, const itemid_t *const rhs)
{
  return lhs->m_Data < rhs->m_Data;
}


// CDefOps<EEvent>::LessFunc  (line 1408, @0x00000000025529c0, libserver.so)
bool __fastcall CDefOps<EEvent>::LessFunc(const EEvent *const lhs, const EEvent *const rhs)
{
  return *lhs < *rhs;
}


// CDefOps<DOTAAbilityData_t*>::LessFunc  (line 1408, @0x00000000025529d0, libserver.so)
bool __fastcall CDefOps<DOTAAbilityData_t *>::LessFunc(
        DOTAAbilityData_t *const *const lhs,
        DOTAAbilityData_t *const *const rhs)
{
  return *lhs < *rhs;
}


// CDefOps<void*>::LessFunc  (line 1408, @0x0000000002e4fa80, libserver.so)
bool __fastcall CDefOps<void *>::LessFunc(void *const *const lhs, void *const *const rhs)
{
  return *lhs < *rhs;
}


// CDefOps<item_definition_index_t>::LessFunc  (line 1408, @0x0000000002ea1fd0, libserver.so)  // inlines: operator<
bool __fastcall CDefOps<item_definition_index_t>::LessFunc(
        const item_definition_index_t *const lhs,
        const item_definition_index_t *const rhs)
{
  return lhs->m_Data < rhs->m_Data;
}


// CDefOps<CUtlSymbolLarge>::LessFunc  (line 1408, @0x00000000030beee0, libserver.so)  // inlines: operator<
bool __fastcall CDefOps<CUtlSymbolLarge>::LessFunc(const CUtlSymbolLarge *const lhs, const CUtlSymbolLarge *const rhs)
{
  return lhs->u.m_Id < rhs->u.m_Id;
}


// CDefOps<GCSDK::SOID_t>::LessFunc  (line 1408, @0x0000000003217340, libserver.so)  // inlines: operator<
bool __fastcall CDefOps<GCSDK::SOID_t>::LessFunc(const GCSDK::SOID_t *const lhs, const GCSDK::SOID_t *const rhs)
{
  GCSDK::SOID_t::Type_t m_type; // edx
  GCSDK::SOID_t::Type_t v3; // ecx
  bool result; // al

  m_type = rhs->m_type;
  v3 = lhs->m_type;
  result = v3 < m_type;
  if ( v3 == m_type )
    return lhs->m_id < rhs->m_id;
  return result;
}


// CDefOps<float>::LessFunc  (line 1408, @0x00000000032592e0, libserver.so)
bool __fastcall CDefOps<float>::LessFunc(const float *const lhs, const float *const rhs)
{
  return *rhs > *lhs;
}


// QuinticInterpolatingPolynomial  (line 2467, @0x0000000003267460, libserver.so)
float __fastcall QuinticInterpolatingPolynomial(float a1, float t)
{
  return ((a1 * a1) * a1) * ((((6.0 * a1) - 15.0) * a1) + 10.0);
}


