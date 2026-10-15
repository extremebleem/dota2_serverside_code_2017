
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_color_conversion.cpp  (line 0, @0x0000000001a6a1d0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_color_conversion_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// SRGBColorToLinearColor  (line 23, @0x00000000030de440, libserver.so)  // inlines: operator*=
// calls: SrgbGammaToLinear
// callers: CLightComponent::ComputeLightDesc, CEnvSky::UpdateSceneObjects, CInfoData::QueryColor
Vector __fastcall SRGBColorToLinearColor(const Color *const color)
{
  double v1; // xmm0_8
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  unsigned int v7; // [rsp+4h] [rbp-2Ch]
  unsigned int v8[6]; // [rsp+8h] [rbp-28h]
  unsigned int v9; // [rsp+Ch] [rbp-24h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&v9 = color->_color[1] * 0.0039215689;
  *&v1 = color->_color[0] * 0.0039215689;
  *&v7 = color->_color[2] * 0.0039215689;
  v8[0] = SrgbGammaToLinear(v1, v2);
  v8[1] = SrgbGammaToLinear(COERCE_DOUBLE(v9), v3);
  result.z = SrgbGammaToLinear(COERCE_DOUBLE(v7), v4);
  *&result.x = *v8;
  return result;
}


// LinearColorToSRGBColor  (line 34, @0x00000000030de5b0, libserver.so)  // inlines: Clamp<float>, Color, SetAlpha, SetBlue, SetGreen, SetRed
// calls: SrgbLinearToGamma
Color __fastcall LinearColorToSRGBColor(const Vector *const vLinearColor)
{
  float v1; // xmm1_4
  int v3; // ebx
  float v4; // xmm0_4
  int v5; // eax
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  int v9; // eax
  float v10; // xmm0_4
  float v11; // xmm0_4
  int v12; // edx

  HIWORD(v3) = 0;
  v4 = SrgbLinearToGamma(COERCE_DOUBLE(LODWORD(vLinearColor->x)), v1);
  LOBYTE(v5) = 0;
  v6 = v4 * 255.0;
  if ( v6 >= 0.0 )
  {
    LOBYTE(v5) = -1;
    if ( v6 <= 255.0 )
      v5 = v6;
  }
  LOBYTE(v3) = v5;
  v7 = SrgbLinearToGamma(COERCE_DOUBLE(LODWORD(vLinearColor->y)), 0.0);
  LOBYTE(v9) = 0;
  v10 = v7 * 255.0;
  if ( v10 >= 0.0 )
  {
    LOBYTE(v9) = -1;
    if ( v10 <= 255.0 )
      v9 = v10;
  }
  BYTE1(v3) = v9;
  v11 = SrgbLinearToGamma(COERCE_DOUBLE(LODWORD(vLinearColor->z)), v8) * 255.0;
  if ( v11 < 0.0 )
  {
    LOBYTE(v12) = 0;
  }
  else
  {
    LOBYTE(v12) = -1;
    if ( v11 <= 255.0 )
      v12 = v11;
  }
  return ((v12 << 16) | v3 & 0xFF00FFFF | 0xFF000000);
}


// GammaToLinearFullRange  (line 45, @0x00000000030de390, libserver.so)
// calls: V_powf
float __fastcall GammaToLinearFullRange(double a1, float gamma)
{
  return V_powf(a1, 2.2);
}


// LinearToGammaFullRange  (line 50, @0x00000000030de3b0, libserver.so)
// calls: V_powf
float __fastcall LinearToGammaFullRange(double a1, float linear)
{
  return V_powf(a1, 0.45454544);
}


// SrgbGammaToLinear  (line 65, @0x00000000030de3d0, libserver.so)
// calls: V_powf
// callers: SRGBColorToLinearColor, SrgbGammaTo360Gamma
float __fastcall SrgbGammaToLinear(double a1, float flSrgbGammaValue)
{
  if ( *&a1 > 1.0 )
  {
    *&a1 = 1065353216;
    return V_powf(a1, 2.4000001);
  }
  if ( *&a1 < 0.0 )
    return 0.0;
  if ( *&a1 > 0.040449999 )
  {
    *&a1 = (*&a1 + 0.055) / 1.0549999;
    return V_powf(a1, 2.4000001);
  }
  return *&a1 / 12.92;
}


// SrgbGammaToLinearSIMD  (line 90, @0x00000000030de4d0, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, CmpLeSIMD<(ESIMDLevel)20u>, DivSIMD<(ESIMDLevel)20u>, MaskedAssign<(ESIMDLevel)20u>, MaxSIMD<(ESIMDLevel)20u>, MinSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SqrtSIMD<(ESIMDLevel)20u>, XorSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_cmple_ps, _mm_div_ps, _mm_max_ps, _mm_min_ps, _mm_mul_ps, _mm_sqrt_ps, _mm_xor_ps
fltx4_0 __fastcall SrgbGammaToLinearSIMD(const FLTX4 fl4SrgbGammaValue)
{
  __m128 v1; // xmm2
  __m128 v2; // xmm1
  __m128 v3; // xmm4
  __m128 v4; // xmm1

  v1 = _mm_min_ps(Four_Ones, _mm_max_ps(Four_Zeros, *fl4SrgbGammaValue));
  v2 = _mm_mul_ps(_mm_add_ps(xmmword_35170D0, v1), xmmword_35170E0);
  v3 = _mm_sqrt_ps(v2);
  v4 = _mm_mul_ps(_mm_mul_ps(v2, v2), _mm_mul_ps(_mm_div_ps(Four_Ones, _mm_sqrt_ps(_mm_sqrt_ps(v3))), v3));
  return _mm_xor_ps(_mm_and_ps(_mm_xor_ps(_mm_mul_ps(xmmword_35170C0, v1), v4), _mm_cmple_ps(v1, xmmword_35170F0)), v4);
}


// SrgbLinearToGamma  (line 112, @0x00000000030de540, libserver.so)
// calls: V_powf
// callers: LinearColorToSRGBColor
float __fastcall SrgbLinearToGamma(double a1, float flLinearValue)
{
  if ( *&a1 > 1.0 )
  {
    *&a1 = 1065353216;
    return (V_powf(a1, 0.41666666) * 1.0549999) - 0.055;
  }
  if ( *&a1 < 0.0 )
    return 0.0;
  if ( *&a1 > 0.0031308001 )
    return (V_powf(a1, 0.41666666) * 1.0549999) - 0.055;
  return *&a1 * 12.92;
}


// SrgbLinearToGammaSIMD  (line 157, @0x00000000030de690, libserver.so)  // inlines: AndSIMD<(ESIMDLevel)20u>, CmpLeSIMD<(ESIMDLevel)20u>, DivSIMD<(ESIMDLevel)20u>, MaskedAssign<(ESIMDLevel)20u>, MaxSIMD<(ESIMDLevel)20u>, MinSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, SqrtSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, XToTheOOTwoPointFour, XorSIMD<(ESIMDLevel)20u>, _mm_and_ps, _mm_cmple_ps, _mm_div_ps, _mm_max_ps, _mm_min_ps, _mm_mul_ps, _mm_sqrt_ps, _mm_sub_ps, _mm_xor_ps
fltx4_0 __fastcall SrgbLinearToGammaSIMD(const FLTX4 fl4LinearValue)
{
  __m128 v1; // xmm2
  __m128 v2; // xmm1
  __m128 v3; // xmm5
  __m128 v4; // xmm1
  __m128 v5; // xmm5
  __m128 v6; // xmm1
  __m128 v7; // xmm5
  __m128 v8; // xmm3
  __m128 v9; // xmm1

  v1 = _mm_min_ps(Four_Ones, _mm_max_ps(Four_Zeros, *fl4LinearValue));
  v2 = _mm_sqrt_ps(_mm_sqrt_ps(v1));
  v3 = _mm_sqrt_ps(v2);
  v4 = _mm_mul_ps(v2, v3);
  v5 = _mm_sqrt_ps(v3);
  v6 = _mm_mul_ps(v4, v5);
  v7 = _mm_sqrt_ps(v5);
  v8 = _mm_sqrt_ps(v7);
  v9 = _mm_sub_ps(
         _mm_mul_ps(
           _mm_mul_ps(_mm_mul_ps(v6, v8), _mm_div_ps(Four_Ones, _mm_mul_ps(_mm_sqrt_ps(v8), v7))),
           xmmword_3517110),
         xmmword_35170D0);
  return _mm_xor_ps(_mm_and_ps(_mm_xor_ps(_mm_mul_ps(xmmword_3517100, v1), v9), _mm_cmple_ps(v1, xmmword_3517120)), v9);
}


// X360GammaToLinear  (line 167, @0x00000000030de710, libserver.so)
// calls: floorf
float __fastcall X360GammaToLinear(float a1, float fl360GammaValue)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float flLinearValuea; // [rsp+Ch] [rbp-4h]
  float flLinearValue; // [rsp+Ch] [rbp-4h]

  v2 = 1.0;
  v3 = 1.0;
  if ( a1 > 1.0 )
    goto LABEL_2;
  v3 = 0.0;
  if ( a1 < 0.0 )
    goto LABEL_2;
  if ( a1 >= 0.3764706 )
  {
    if ( a1 < 0.75294119 )
    {
      flLinearValue = (1020.0 * a1) - 256.0;
      v7 = flLinearValue * 0.00390625;
      goto LABEL_13;
    }
    flLinearValuea = (2040.0 * a1) - 1024.0;
    v6 = floorf(flLinearValuea * 0.0078125);
    v2 = 1.0;
    v3 = (v6 + flLinearValuea) * 0.00097751711;
LABEL_2:
    v4 = v3;
    goto LABEL_3;
  }
  if ( a1 < 0.25098041 )
  {
    v4 = (a1 * 255.0) * 0.00097751711;
    goto LABEL_3;
  }
  flLinearValue = (510.0 * a1) - 64.0;
  v7 = flLinearValue * 0.001953125;
LABEL_13:
  v8 = floorf(v7);
  v2 = 1.0;
  v4 = (v8 + flLinearValue) * 0.00097751711;
LABEL_3:
  if ( v4 <= 1.0 )
    return fmaxf(0.0, v4);
  return v2;
}


// X360LinearToGamma  (line 204, @0x00000000030de860, libserver.so)
// callers: SrgbGammaTo360Gamma
float __fastcall X360LinearToGamma(float a1, float flLinearValue)
{
  float v3; // xmm0_4

  if ( a1 > 1.0 )
    return 1.0;
  if ( a1 < 0.0 )
  {
    v3 = 0.0;
  }
  else if ( a1 >= 0.12512219 )
  {
    if ( a1 < 0.50048876 )
    {
      v3 = (a1 * 1.0029413) + 0.25098041;
    }
    else
    {
      v3 = (a1 * 0.50147063) + 0.50196081;
      if ( v3 > 1.0 )
        return 1.0;
    }
  }
  else if ( a1 >= 0.062561095 )
  {
    v3 = (a1 * 2.0058825) + 0.1254902;
  }
  else
  {
    v3 = a1 * 4.011765;
  }
  if ( v3 > 1.0 )
    return 1.0;
  return fmaxf(0.0, v3);
}


// SrgbGammaTo360Gamma  (line 240, @0x00000000030de920, libserver.so)
// calls: SrgbGammaToLinear, X360LinearToGamma
float __fastcall SrgbGammaTo360Gamma(double a1, float flSrgbGammaValue)
{
  float v2; // xmm0_4
  float v3; // xmm1_4

  v2 = SrgbGammaToLinear(a1, flSrgbGammaValue);
  return X360LinearToGamma(v2, v3);
}


// EncodeRGBM  (line 250, @0x00000000030de930, libserver.so)  // inlines: Clamp<float>, Max<float>, VectorMaximum
// calls: ceilf, sqrtf
float *__fastcall EncodeRGBM(float *a1, const Vector *const vLinear)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm2_4
  float y; // xmm4_4
  float z; // xmm3_4
  float x; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float vLineara; // [rsp+8h] [rbp-18h]

  v3 = fsqrt(vLinear->x) * 0.16666667;
  if ( v3 < 0.0 )
    v4 = 0.0;
  else
    v4 = fminf(1.0, v3);
  *a1 = v4;
  v5 = fsqrt(vLinear->y) * 0.16666667;
  if ( v5 < 0.0 )
    v6 = 0.0;
  else
    v6 = fminf(1.0, v5);
  a1[1] = v6;
  v7 = 0.16666667 * fsqrt(vLinear->z);
  if ( v7 < 0.0 )
    v8 = 0.0;
  else
    v8 = fminf(1.0, v7);
  a1[2] = v8;
  y = vLinear->y;
  z = vLinear->z;
  x = vLinear->x;
  if ( y > z )
  {
    if ( x > y )
      goto LABEL_9;
LABEL_18:
    x = vLinear->y;
    if ( y <= 0.16666667 )
      goto LABEL_10;
LABEL_19:
    a1[3] = x;
    vLineara = v8;
    v13 = ceilf(x * 255.0) / 255.0;
    v12 = 1.0;
    v8 = vLineara;
    if ( v13 < 0.0 )
    {
      v12 = 1.0 / 0.0;
      v13 = 0.0;
    }
    else if ( v13 <= 1.0 )
    {
      v12 = 1.0 / v13;
    }
    else
    {
      v13 = 1.0;
    }
    goto LABEL_11;
  }
  if ( x <= z )
  {
    x = vLinear->z;
    if ( y > z )
      goto LABEL_18;
  }
LABEL_9:
  if ( x > 0.16666667 )
    goto LABEL_19;
LABEL_10:
  v12 = 5.9302325;
  v13 = 0.16862746;
LABEL_11:
  a1[3] = v13;
  v14 = *a1 * v12;
  if ( v14 < 0.0 )
    v15 = 0.0;
  else
    v15 = fminf(1.0, v14);
  *a1 = v15;
  v16 = a1[1] * v12;
  if ( v16 < 0.0 )
  {
    v17 = v8 * v12;
    a1[1] = 0.0;
    if ( v17 >= 0.0 )
      goto LABEL_15;
  }
  else
  {
    v17 = v8 * v12;
    a1[1] = fminf(1.0, v16);
    if ( v17 >= 0.0 )
    {
LABEL_15:
      a1[2] = fminf(1.0, v17);
      return a1;
    }
  }
  a1[2] = 0.0;
  return a1;
}


// DecodeRGBM  (line 268, @0x00000000030dec00, libserver.so)  // inlines: Square<Vector>, VectorMultiply, operator*
Vector __fastcall DecodeRGBM(const Vector4D *const vRGBM)
{
  float w; // xmm3_4
  float v2; // xmm0_4
  float v5[4]; // [rsp+0h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  w = vRGBM->w;
  v2 = ((vRGBM->y * 6.0) * w) * ((vRGBM->y * 6.0) * w);
  result.z = ((6.0 * vRGBM->z) * w) * ((6.0 * vRGBM->z) * w);
  v5[0] = ((vRGBM->x * 6.0) * w) * ((vRGBM->x * 6.0) * w);
  v5[1] = v2;
  *&result.x = *v5;
  return result;
}


