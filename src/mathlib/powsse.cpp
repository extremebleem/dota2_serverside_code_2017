
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_powsse.cpp  (line 0, @0x0000000001a6ed40, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_powsse_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// Pow_FixedPoint_Exponent_SIMD  (line 13, @0x0000000003266750, libserver.so)  // inlines: AndSIMD<(ESIMDLevel)20u>, CmpEqSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, OrSIMD<(ESIMDLevel)20u>, ReciprocalEstSIMD<(ESIMDLevel)20u>, ReciprocalEstSaturateSIMD, SqrtEstSIMD<(ESIMDLevel)20u>, _mm_and_ps, _mm_cmpeq_ps, _mm_mul_ps, _mm_or_ps, _mm_rcp_ps, _mm_sqrt_ps
// callers: LightDesc_t::ComputeLightAtPoints, LightDesc_t::ComputeNonincidenceLightAtPoints
fltx4_0 __fastcall Pow_FixedPoint_Exponent_SIMD(const fltx4_0 *const x, int exponent)
{
  fltx4_0 v2; // xmm1
  fltx4_0 result; // xmm0
  int v4; // eax
  __m128 v5; // xmm2
  int v6; // eax

  v2 = *x;
  result = Four_Ones;
  v4 = abs32(exponent);
  if ( (v4 & 3) != 0 )
  {
    v5 = _mm_sqrt_ps(v2);
    if ( (v4 & 1) != 0 )
      result = _mm_sqrt_ps(v5);
    if ( (v4 & 2) != 0 )
      result = _mm_mul_ps(result, v5);
  }
  v6 = v4 >> 2;
  while ( 1 )
  {
    if ( (v6 & 1) != 0 )
      result = _mm_mul_ps(result, v2);
    v6 >>= 1;
    if ( v6 == 0 )
      break;
    v2 = _mm_mul_ps(v2, v2);
  }
  if ( exponent < 0 )
    return _mm_rcp_ps(_mm_or_ps(_mm_and_ps(_mm_cmpeq_ps(result, Four_Zeros), Four_Epsilons), result));
  return result;
}


// FastLog2  (line 59, @0x00000000032667d0, libserver.so)
// calls: floorf
// callers: FastPow
float __fastcall FastLog2(__m128i a1, float i)
{
  float v2; // xmm3_4
  float v4; // [rsp-Ch] [rbp-Ch]

  v4 = (_mm_cvtsi128_si32(a1) * 0.00000011920929) - 127.0;
  v2 = v4 - floorf(v4);
  return ((v2 - (v2 * v2)) * 0.346607) + v4;
}


// FastPow2  (line 72, @0x0000000003266830, libserver.so)
// calls: floorf
// callers: FastPow, FastPow10
float __fastcall FastPow2(float a1, float i)
{
  float v2; // xmm0_4
  float result; // xmm0_4

  v2 = floorf(a1);
  LODWORD(result) = (((a1 + 127.0) - (((a1 - v2) - ((a1 - v2) * (a1 - v2))) * 0.33971)) * 8388608.0);
  return result;
}


// FastPow  (line 84, @0x0000000003266890, libserver.so)
// calls: FastLog2, FastPow2
double __fastcall FastPow(__m128i a1, float a, float b)
{
  float v3; // xmm0_4
  double result; // xmm0_8

  if ( *a1.m128i_i32 <= 0.00000011920929 )
    return 0.0;
  v3 = FastLog2(a1, a);
  *&result = FastPow2(v3 * a, a);
  return result;
}


// FastPow10  (line 92, @0x00000000032668d0, libserver.so)
// calls: FastPow2
float __fastcall FastPow10(float a1, float i)
{
  return FastPow2(a1 * 3.321928, i);
}


