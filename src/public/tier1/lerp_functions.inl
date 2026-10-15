
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// LoopingLerp<float>  (line 28, @0x000000000209da00, libserver.so)
// callers: CSkeletonAnimationController::Lerp_NoCopy, CSkeletonAnimationController::Lerp_Hermite_NoCopy
float __fastcall LoopingLerp<float>(
        float flPercent,
        const float *const _flFrom,
        const float *const _flTo,
        float a4,
        float a5)
{
  float v5; // xmm2_4
  float result; // xmm0_4

  if ( fabs(a5 - a4) >= 0.5 )
  {
    if ( a5 <= a4 )
      a5 = a5 + 1.0;
    else
      a4 = a4 + 1.0;
  }
  v5 = ((a5 * flPercent) + ((1.0 - flPercent) * a4)) - ((a5 * flPercent) + ((1.0 - flPercent) * a4));
  result = v5;
  if ( v5 < 0.0 )
    return v5 + 1.0;
  return result;
}


// LoopingLerp_Hermite<float>  (line 184, @0x000000000313e4f0, libserver.so)  // inlines: Lerp_Hermite<float>, abs<float>
// callers: CAnimationOpHistory::Interpolate
float __fastcall LoopingLerp_Hermite<float>(const float *const current, float t, float *f0, float *f1, float *f2)
{
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm9_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float result; // xmm0_4
  float v14; // xmm3_4

  v5 = *f1;
  v6 = *f0;
  v7 = *f2;
  if ( fabs(*f1 - *f0) > 0.5 )
  {
    if ( v5 <= v6 )
      v5 = v5 + 1.0;
    else
      v6 = v6 + 1.0;
  }
  v8 = v7 - v5;
  if ( fabs(v7 - v5) <= 0.5 )
  {
    v9 = v5 - v6;
    goto LABEL_6;
  }
  if ( v7 <= v5 )
  {
    v7 = v7 + 1.0;
    v9 = v5 - v6;
    v8 = v7 - v5;
  }
  else
  {
    v5 = v5 + 1.0;
    v9 = v5 - v6;
    v14 = v5 - v6;
    if ( (v5 - v6) < 0.0 )
      v14 = -v9;
    if ( v14 <= 0.5 )
      goto LABEL_15;
    if ( v5 > v6 )
    {
      v9 = v5 - (v6 + 1.0);
LABEL_15:
      v8 = v7 - v5;
      goto LABEL_6;
    }
    v5 = v5 + 1.0;
    v8 = v7 - v5;
    v9 = v5 - v6;
  }
LABEL_6:
  v10 = t * (t * t);
  v11 = ((((((v10 + v10) - (3.0 * (t * t))) + 1.0) * v5) + (((-2.0 * v10) + (3.0 * (t * t))) * v7))
       + (((v10 - ((t * t) + (t * t))) + t) * v9))
      + ((v10 - (t * t)) * v8);
  v12 = v11 - v11;
  result = v12;
  if ( v12 < 0.0 )
    return v12 + 1.0;
  return result;
}


