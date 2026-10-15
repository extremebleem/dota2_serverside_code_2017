
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBezierHandlesForSample::CBezierHandleTangent::GetTangentPoint  (line 154, @0x000000000308e360, libserver.so)  // inlines: DEG2RAD
// calls: cos, sin
// callers: CCurveData::GetIntensity
float *__fastcall CBezierHandlesForSample::CBezierHandleTangent::GetTangentPoint(
        float *a1,
        const CBezierHandlesForSample::CBezierHandleTangent *const this)
{
  double v4; // xmm0_8
  __m128d v5; // xmm1
  float v6; // xmm2_4
  double v7; // xmm0_8
  __m128d v9; // xmm1

  v4 = cos((0.017453292 * this->m_flAngleDegrees));
  v5 = _mm_cvtps_pd(LODWORD(this->m_flWeight));
  v5.m128d_f64[0] = v5.m128d_f64[0] * v4;
  v6 = _mm_movedup_pd(v5).m128d_f64[0];
  *a1 = v6;
  v7 = sin((0.017453292 * this->m_flAngleDegrees));
  v9 = _mm_cvtps_pd(LODWORD(this->m_flWeight));
  v9.m128d_f64[0] = v9.m128d_f64[0] * v7;
  a1[1] = _mm_movedup_pd(v9).m128d_f64[0];
  return a1;
}


