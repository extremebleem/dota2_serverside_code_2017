
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_raytraceutils.cpp  (line 0, @0x0000000001a6a1a0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_raytraceutils_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// IntersectRayWithBox  (line 9, @0x00000000030dcee0, libserver.so)
// callers: IntersectRayWithBox, IntersectRayWithOBB
bool __fastcall IntersectRayWithBox(
        const Vector *const vecRayStart,
        const Vector *const vecRayDelta,
        const Vector *const boxMins,
        const Vector *const boxMaxs,
        float flTolerance,
        BoxTraceInfo_t *pTrace)
{
  __int64 v6; // rax
  int v7; // r10d
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  bool result; // al

  v6 = 0;
  v7 = -1;
  pTrace->startsolid = 1;
  pTrace->t1 = -1.0;
  pTrace->t2 = 1.0;
  do
  {
    while ( 1 )
    {
      if ( v6 > 2 )
      {
        v8 = *(&vecRayStart[-1].x + v6) - *(&boxMaxs[-1].x + v6);
        v9 = *(&vecRayDelta[-1].x + v6) + v8;
      }
      else
      {
        v8 = *(&boxMins->x + v6) - *(&vecRayStart->x + v6);
        v9 = v8 - *(&vecRayDelta->x + v6);
      }
      if ( v8 > 0.0 && v9 > 0.0 )
      {
        pTrace->startsolid = 0;
        return 0;
      }
      if ( v8 <= 0.0 && v9 <= 0.0 )
        goto LABEL_11;
      if ( v8 > 0.0 )
        pTrace->startsolid = 0;
      v10 = v8;
      if ( v8 > v9 )
      {
        v11 = v8 - v9;
        v12 = fmaxf(0.0, v10 - flTolerance);
        if ( (v12 / v11) > pTrace->t1 )
        {
          pTrace->t1 = v12 / v11;
          v7 = v6;
        }
        goto LABEL_11;
      }
      v13 = (v8 + flTolerance) / (v8 - v9);
      if ( pTrace->t2 > v13 )
        break;
LABEL_11:
      if ( ++v6 == 6 )
        goto LABEL_18;
    }
    pTrace->t2 = v13;
    if ( v7 == -1 )
      v7 = v6;
    ++v6;
  }
  while ( v6 != 6 );
LABEL_18:
  result = pTrace->startsolid;
  pTrace->hitside = v7;
  if ( !result && pTrace->t2 > pTrace->t1 )
    return pTrace->t1 >= 0.0;
  return result;
}


// IntersectRayWithOBB  (line 92, @0x00000000030dd010, libserver.so)  // inlines: VectorIRotate, VectorITransform
// calls: VectorITransform, VectorIRotate, IntersectRayWithBox
bool __fastcall IntersectRayWithOBB(
        const Vector *const vecRayStart,
        const Vector *const vecRayDelta,
        const matrix3x4_t *const matOBBToWorld,
        const Vector *const vecOBBMins,
        const Vector *const vecOBBMaxs,
        float flTolerance,
        BoxTraceInfo_t *pTrace)
{
  Vector start; // [rsp+20h] [rbp-50h] BYREF
  Vector delta; // [rsp+30h] [rbp-40h] BYREF

  VectorITransform(&vecRayStart->x, matOBBToWorld, &start.x);
  VectorIRotate(&vecRayDelta->x, matOBBToWorld, &delta.x);
  return IntersectRayWithBox(&start, &delta, vecOBBMins, vecOBBMaxs, flTolerance, pTrace);
}


// IsBoxIntersectingTriangle  (line 320, @0x00000000030dd090, libserver.so)  // inlines: AxisTestEdgeCrossX2, AxisTestEdgeCrossX3, AxisTestEdgeCrossY2, AxisTestEdgeCrossY3, AxisTestEdgeCrossZ1, AxisTestEdgeCrossZ2, Cross, CrossProduct, DotProduct, DotProductAbs, FindMinMax, FloatMakePositive, NormalizeInPlace, VectorSubtract, operator-
// calls: VectorNormalize
// local variable allocation has failed, the output may be wrong!
bool __fastcall IsBoxIntersectingTriangle(
        const Vector *const vecBoxCenter,
        const Vector *const vecBoxExtents,
        const Vector *const v1,
        const Vector *const v2,
        const Vector *const v3,
        float flTolerance)
{
  __int64 v6; // rbp
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm6_4
  float x; // xmm4_4
  float v12; // xmm7_4
  float y; // xmm9_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm7_4
  float v17; // xmm14_4
  float v18; // xmm15_4
  float z; // xmm12_4
  float v20; // xmm11_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  float v23; // xmm13_4
  float v24; // xmm12_4
  float v25; // xmm13_4
  float v26; // xmm14_4
  float v27; // xmm12_4
  float v28; // xmm14_4
  float v29; // xmm12_4
  float v30; // xmm13_4
  float v31; // xmm14_4
  float v32; // xmm13_4
  float v33; // xmm14_4
  float v34; // xmm12_4
  float v35; // xmm12_4
  float v36; // xmm14_4
  float v37; // xmm13_4
  float v38; // xmm14_4
  float v39; // xmm12_4
  float v40; // xmm13_4
  float v41; // xmm13_4
  float v42; // xmm12_4
  float v43; // xmm11_4
  float v44; // xmm2_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v51; // xmm0_4
  float v52; // xmm14_4
  float v53; // xmm12_4
  float v54; // xmm13_4
  float v55; // [rsp-18h] [rbp-58h]
  float v56; // [rsp-18h] [rbp-58h]
  float v57; // [rsp-4h] [rbp-44h]
  float flTolerancea; // [rsp+0h] [rbp-40h]
  float flToleranceb; // [rsp+0h] [rbp-40h]
  float flTolerancec; // [rsp+0h] [rbp-40h]
  float vecBoxExtents_4; // [rsp+Ch] [rbp-34h]
  float v63; // [rsp+10h] [rbp-30h]
  float v64; // [rsp+14h] [rbp-2Ch]
  float v65; // [rsp+14h] [rbp-2Ch]
  float v66; // [rsp+14h] [rbp-2Ch]
  float v67; // [rsp+18h] [rbp-28h]
  float v68; // [rsp+18h] [rbp-28h]
  float v69; // [rsp+18h] [rbp-28h]
  float vecAbsEdge; // [rsp+1Ch] [rbp-24h]
  float vecAbsEdge_4; // [rsp+20h] [rbp-20h]
  float vecAbsEdge_4a; // [rsp+20h] [rbp-20h]
  float vecAbsEdge_4b; // [rsp+20h] [rbp-20h]
  float vecAbsEdge_4c; // [rsp+20h] [rbp-20h]
  float vecAbsEdge_4d; // [rsp+20h] [rbp-20h]
  float vecAbsEdge_4e; // [rsp+20h] [rbp-20h]
  float vecAbsEdge_4f; // [rsp+20h] [rbp-20h]
  float vecAbsEdge_4g; // [rsp+20h] [rbp-20h]
  float vecAbsEdge_8; // [rsp+24h] [rbp-1Ch]
  float vecAbsEdge_8a; // [rsp+24h] [rbp-1Ch]
  float v81; // [rsp+28h] [rbp-18h] BYREF
  float v82; // [rsp+2Ch] [rbp-14h]
  __int128 vNormal; // [rsp+30h] [rbp-10h] OVERLAPPED

  v7 = v2->x - vecBoxCenter->x;
  v8 = v1->x - vecBoxCenter->x;
  v9 = v3->x - vecBoxCenter->x;
  v10 = fmaxf(v9, fmaxf(v7, v8));
  x = vecBoxExtents->x;
  v12 = vecBoxExtents->x + flTolerance;
  if ( fminf(v9, fminf(v7, v8)) > v12 )
    return 0;
  if ( -v12 > v10 )
    return 0;
  y = vecBoxCenter->y;
  v14 = v2->y - y;
  v15 = v1->y - y;
  v16 = v3->y - y;
  v17 = fmaxf(v16, fmaxf(v14, v15));
  v18 = vecBoxExtents->y;
  if ( fminf(v16, fminf(v14, v15)) > (v18 + flTolerance) || -(v18 + flTolerance) > v17 )
    return 0;
  *(&vNormal + 1) = v6;
  z = vecBoxCenter->z;
  v20 = v2->z - z;
  v21 = v1->z - z;
  v22 = v3->z - z;
  v23 = fmaxf(v22, fmaxf(v20, v21));
  vecAbsEdge_8 = vecBoxExtents->z;
  if ( fminf(v22, fminf(v20, v21)) > (vecAbsEdge_8 + flTolerance) || -(vecAbsEdge_8 + flTolerance) > v23 )
    return 0;
  v63 = v20 - v21;
  vecAbsEdge = v14 - v15;
  v64 = fabs(v14 - v15);
  v67 = fabs(v20 - v21);
  v24 = ((v20 - v21) * v15) - ((v14 - v15) * v21);
  v25 = ((v20 - v21) * v16) - ((v14 - v15) * v22);
  vecAbsEdge_4 = (vecAbsEdge_8 * v64) + (v67 * v18);
  if ( v25 > v24 )
  {
    v52 = ((vecAbsEdge_8 * v64) + (v67 * v18)) + flTolerance;
    if ( v24 > v52 )
      return 0;
    if ( -v52 > v25 )
      return 0;
  }
  else if ( v25 > (vecAbsEdge_4 + flTolerance) || -(vecAbsEdge_4 + flTolerance) > v24 )
  {
    return 0;
  }
  vecBoxExtents_4 = v7 - v8;
  flTolerancea = fabs(v7 - v8);
  v26 = (v8 * -v63) + ((v7 - v8) * v21);
  v27 = (-v63 * v9) + ((v7 - v8) * v22);
  vecAbsEdge_4a = (vecAbsEdge_8 * flTolerancea) + (v67 * x);
  if ( v27 <= v26 )
  {
    if ( v27 > (vecAbsEdge_4a + flTolerance) )
      return 0;
    if ( -(vecAbsEdge_4a + flTolerance) > v26 )
      return 0;
  }
  else if ( v26 > (vecAbsEdge_4a + flTolerance) || -(vecAbsEdge_4a + flTolerance) > v27 )
  {
    return 0;
  }
  v28 = (vecAbsEdge * v7) - (vecBoxExtents_4 * v14);
  v29 = (vecAbsEdge * v9) - (vecBoxExtents_4 * v16);
  vecAbsEdge_4b = (flTolerancea * v18) + (v64 * x);
  if ( v28 <= v29 )
  {
    if ( v28 > (vecAbsEdge_4b + flTolerance) )
      return 0;
    if ( -(vecAbsEdge_4b + flTolerance) > v29 )
      return 0;
  }
  else if ( v29 > (vecAbsEdge_4b + flTolerance) || -(vecAbsEdge_4b + flTolerance) > v28 )
  {
    return 0;
  }
  v55 = v22 - v20;
  v65 = fabs(v22 - v20);
  flToleranceb = fabs(v16 - v14);
  v30 = ((v22 - v20) * v15) - ((v16 - v14) * v21);
  v31 = ((v22 - v20) * v14) - ((v16 - v14) * v20);
  vecAbsEdge_4c = (vecAbsEdge_8 * flToleranceb) + (v65 * v18);
  if ( v31 <= v30 )
  {
    if ( v31 > (vecAbsEdge_4c + flTolerance) )
      return 0;
    if ( -(vecAbsEdge_4c + flTolerance) > v30 )
      return 0;
  }
  else if ( v30 > (vecAbsEdge_4c + flTolerance) || -(vecAbsEdge_4c + flTolerance) > v31 )
  {
    return 0;
  }
  v57 = v9 - v7;
  vecAbsEdge_4d = fabs(v9 - v7);
  v32 = (v8 * -v55) + ((v9 - v7) * v21);
  v33 = (-v55 * v7) + ((v9 - v7) * v20);
  v34 = (v65 * x) + (vecAbsEdge_8 * vecAbsEdge_4d);
  if ( v33 <= v32 )
  {
    v53 = v34 + flTolerance;
    if ( v33 > v53 )
      return 0;
    if ( -v53 > v32 )
      return 0;
  }
  else
  {
    v35 = v34 + flTolerance;
    if ( v32 > v35 || -v35 > v33 )
      return 0;
  }
  v68 = ((v16 - v14) * v8) - (v57 * v15);
  v36 = ((v16 - v14) * v9) - (v57 * v16);
  v37 = (flToleranceb * x) + (vecAbsEdge_4d * v18);
  if ( v36 <= v68 )
  {
    v54 = v37 + flTolerance;
    if ( v36 > v54 )
      return 0;
    if ( -v54 > v68 )
      return 0;
  }
  else if ( v68 > (v37 + flTolerance) || -(v37 + flTolerance) > v36 )
  {
    return 0;
  }
  v38 = v15 - v16;
  v66 = fabs(v15 - v16);
  v69 = v21 - v22;
  flTolerancec = fabs(v21 - v22);
  v39 = ((v21 - v22) * v15) - (v21 * (v15 - v16));
  v40 = ((v21 - v22) * v14) - (v20 * (v15 - v16));
  vecAbsEdge_4e = (vecAbsEdge_8 * v66) + (flTolerancec * v18);
  if ( v40 <= v39 )
  {
    if ( v40 > (vecAbsEdge_4e + flTolerance) )
      return 0;
    if ( -(vecAbsEdge_4e + flTolerance) > v39 )
      return 0;
  }
  else if ( v39 > (vecAbsEdge_4e + flTolerance) || -(vecAbsEdge_4e + flTolerance) > v40 )
  {
    return 0;
  }
  v41 = v8 - v9;
  v56 = fabs(v8 - v9);
  vecAbsEdge_4f = (v21 * (v8 - v9)) + (v8 * -v69);
  v42 = (-v69 * v7) + (v20 * (v8 - v9));
  v43 = (flTolerancec * x) + (vecAbsEdge_8 * v56);
  if ( v42 > vecAbsEdge_4f )
  {
    if ( vecAbsEdge_4f > (v43 + flTolerance) || -(v43 + flTolerance) > v42 )
      return 0;
LABEL_31:
    v44 = (v7 * v38) - (v14 * v41);
    v45 = (v9 * v38) - (v16 * v41);
    v46 = (x * v66) + (v56 * v18);
    if ( v44 <= v45 )
    {
      v51 = flTolerance + v46;
      if ( v44 <= v51 && -v51 <= v45 )
      {
LABEL_34:
        vecAbsEdge_8a = v8;
        vecAbsEdge_4g = v15;
        v81 = (vecAbsEdge * v69) - (v63 * v38);
        v82 = (v63 * v41) - (v69 * vecBoxExtents_4);
        *&vNormal = (v38 * vecBoxExtents_4) - (v41 * vecAbsEdge);
        VectorNormalize(&v81);
        v48 = ((vecAbsEdge_8a * v81) + (vecAbsEdge_4g * v82)) + (v21 * *&vNormal);
        v49 = (fabs(v81 * vecBoxExtents->x) + fabs(v82 * vecBoxExtents->y)) + fabs(*&vNormal * vecBoxExtents->z);
        if ( v48 <= v49 )
          return -v49 <= v48;
      }
    }
    else
    {
      v47 = flTolerance + v46;
      if ( v45 <= v47 && -v47 <= v44 )
        goto LABEL_34;
    }
    return 0;
  }
  if ( v42 > (v43 + flTolerance) )
    return 0;
  if ( -(v43 + flTolerance) <= vecAbsEdge_4f )
    goto LABEL_31;
  return 0;
}


// IsSphereIntersectingSphere  (line 407, @0x00000000030dd9f0, libserver.so)  // inlines: LengthSqr, VectorSubtract
bool __fastcall IsSphereIntersectingSphere(
        const Vector *const center1,
        float a2,
        float radius1,
        const Vector *const center2,
        float radius2)
{
  return ((a2 + radius1) * (a2 + radius1)) >= ((((center2->x - center1->x) * (center2->x - center1->x))
                                              + ((center2->y - center1->y) * (center2->y - center1->y)))
                                             + ((center2->z - center1->z) * (center2->z - center1->z)));
}


// IsBoxIntersectingSphere  (line 418, @0x00000000030dda40, libserver.so)  // inlines: operator[]
// callers: CGameEntitySystem::FindEntityInSphere, CGameEntitySystem::FindEntityByClassnameWithin, CGameEntitySystem::FindEntityInheritingFromWithin, CFogVolume::FindFogVolumeForPosition
bool __fastcall IsBoxIntersectingSphere(
        const Vector *const boxMin,
        const Vector *const boxMax,
        const Vector *const center,
        float radius)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm2
  float v6; // xmm0_4
  float x; // xmm1_4
  float v8; // xmm1_4
  float y; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float z; // xmm3_4
  float v13; // xmm3_4
  float v15; // xmm3_4
  float v16; // xmm2_4

  v4.m128_f32[0] = radius * radius;
  v5 = _mm_cmplt_ss(0x800000u, v4);
  LODWORD(v6) = _mm_andnot_ps(v5, 0x800000u).m128_u32[0] | v4.m128_i32[0] & v5.m128_i32[0];
  x = center->x;
  if ( boxMin->x <= center->x )
  {
    if ( x <= boxMax->x )
      v8 = 0.0;
    else
      v8 = ((boxMax->x - x) * (boxMax->x - x)) + 0.0;
  }
  else
  {
    v8 = ((x - boxMin->x) * (x - boxMin->x)) + 0.0;
  }
  y = center->y;
  v10 = boxMin->y;
  if ( v10 <= y )
  {
    v15 = boxMax->y;
    if ( y > v15 )
    {
      v16 = (v15 - y) * (v15 - y);
      z = boxMin->z;
      v8 = v8 + v16;
      v11 = center->z;
      if ( z <= v11 )
        goto LABEL_6;
      return v6 > (v8 + ((v11 - z) * (v11 - z)));
    }
  }
  else
  {
    v8 = v8 + ((y - v10) * (y - v10));
  }
  v11 = center->z;
  z = boxMin->z;
  if ( z > v11 )
    return v6 > (v8 + ((v11 - z) * (v11 - z)));
LABEL_6:
  v13 = boxMax->z;
  if ( v11 > v13 )
    v8 = v8 + ((v13 - v11) * (v13 - v11));
  return v6 > v8;
}


// IsBoxIntersectingSphereExtents  (line 464, @0x00000000030ddb50, libserver.so)  // inlines: FloatMakePositive
bool __fastcall IsBoxIntersectingSphereExtents(
        const Vector *const boxCenter,
        const Vector *const boxHalfDiag,
        const Vector *const center,
        float radius)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm2
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float y; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm2_4
  float z; // xmm3_4

  v4.m128_f32[0] = radius * radius;
  v5 = _mm_cmplt_ss(0x800000u, v4);
  LODWORD(v6) = _mm_andnot_ps(v5, 0x800000u).m128_u32[0] | v4.m128_i32[0] & v5.m128_i32[0];
  v7 = fabs(center->x - boxCenter->x);
  if ( v7 <= boxHalfDiag->x )
    v8 = 0.0;
  else
    v8 = ((v7 - boxHalfDiag->x) * (v7 - boxHalfDiag->x)) + 0.0;
  y = boxHalfDiag->y;
  v10 = fabs(center->y - boxCenter->y);
  if ( v10 > y )
    v8 = v8 + ((v10 - y) * (v10 - y));
  v11 = fabs(center->z - boxCenter->z);
  z = boxHalfDiag->z;
  if ( v11 > z )
    v8 = v8 + ((v11 - z) * (v11 - z));
  return v6 > v8;
}


// IsCircleIntersectingRectangle  (line 499, @0x00000000030ddc00, libserver.so)  // inlines: operator[]
bool __fastcall IsCircleIntersectingRectangle(
        const Vector2D *const boxMin,
        const Vector2D *const boxMax,
        const Vector2D *const center,
        float radius)
{
  __m128 v4; // xmm0
  __int32 v5; // xmm3_4
  __m128 v6; // xmm0
  float x; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float y; // xmm3_4
  float v12; // xmm3_4

  v4.m128_f32[0] = radius * radius;
  v5 = v4.m128_i32[0];
  v6 = _mm_cmplt_ss(0x800000u, v4);
  x = center->x;
  LODWORD(v8) = _mm_andnot_ps(v6, 0x800000u).m128_u32[0] | v5 & v6.m128_i32[0];
  if ( boxMin->x <= center->x )
  {
    if ( x > boxMax->x )
    {
      y = boxMin->y;
      v10 = center->y;
      v9 = ((boxMax->x - x) * (boxMax->x - x)) + 0.0;
      if ( y <= v10 )
        goto LABEL_4;
      return v8 > (v9 + ((v10 - y) * (v10 - y)));
    }
    v9 = 0.0;
  }
  else
  {
    v9 = ((x - boxMin->x) * (x - boxMin->x)) + 0.0;
  }
  v10 = center->y;
  y = boxMin->y;
  if ( y > v10 )
    return v8 > (v9 + ((v10 - y) * (v10 - y)));
LABEL_4:
  v12 = boxMax->y;
  if ( v10 > v12 )
    v9 = v9 + ((v12 - v10) * (v12 - v10));
  return v8 > v9;
}


// IsRayIntersectingSphere  (line 534, @0x00000000030ddcd0, libserver.so)  // inlines: DistToSqr, DotProduct, LengthSqr, VectorMA, VectorSubtract
// callers: IntersectRayWithOBB
bool __fastcall IsRayIntersectingSphere(
        const Vector *const vecRayOrigin,
        const Vector *const vecRayDelta,
        const Vector *const vecCenter,
        float flRadius,
        float flTolerance)
{
  float v5; // xmm0_4
  float y; // xmm9_4
  float x; // xmm2_4
  float v8; // xmm4_4
  float z; // xmm7_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm5_4
  float v13; // xmm3_4

  v5 = flRadius + flTolerance;
  y = vecRayOrigin->y;
  x = vecRayDelta->x;
  v8 = vecRayDelta->y;
  z = vecRayOrigin->z;
  v10 = vecRayDelta->z;
  v11 = (((vecCenter->x - vecRayOrigin->x) * vecRayDelta->x) + ((vecCenter->y - y) * v8)) + ((vecCenter->z - z) * v10);
  if ( v11 <= 0.0 )
  {
    v13 = 0.0;
  }
  else
  {
    v12 = ((x * x) + (v8 * v8)) + (v10 * v10);
    if ( v11 > v12 )
      v13 = 1.0;
    else
      v13 = v11 / v12;
  }
  return (v5 * v5) >= ((((((x * v13) + vecRayOrigin->x) - vecCenter->x) * (((x * v13) + vecRayOrigin->x) - vecCenter->x))
                      + ((((v8 * v13) + y) - vecCenter->y) * (((v8 * v13) + y) - vecCenter->y)))
                     + ((((v13 * v10) + z) - vecCenter->z) * (((v13 * v10) + z) - vecCenter->z)));
}


// IntersectInfiniteRayWithSphere  (line 594, @0x00000000030dddd0, libserver.so)  // inlines: DotProduct, LengthSqr, VectorSubtract
// calls: sqrtf
// callers: IntersectRayWithSphere
bool __fastcall IntersectInfiniteRayWithSphere(
        const Vector *const vecRayOrigin,
        const Vector *const vecRayDelta,
        const Vector *const vecSphereCenter,
        float flRadius,
        float *pT1,
        float *pT2)
{
  float x; // xmm2_4
  float y; // xmm7_4
  float z; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  bool result; // al
  float v14; // xmm2_4
  float v15; // xmm6_4
  float v16; // xmm0_4

  x = vecRayDelta->x;
  y = vecRayDelta->y;
  z = vecRayDelta->z;
  v9 = vecRayOrigin->x - vecSphereCenter->x;
  v10 = vecRayOrigin->y - vecSphereCenter->y;
  v11 = vecRayOrigin->z - vecSphereCenter->z;
  v12 = ((x * x) + (y * y)) + (z * z);
  if ( v12 == 0.0 )
  {
    *pT2 = 0.0;
    *pT1 = 0.0;
    return (flRadius * flRadius) >= (((v9 * v9) + (v10 * v10)) + (v11 * v11));
  }
  else
  {
    result = 0;
    v14 = (((x * v9) + (y * v10)) + (z * v11)) + (((x * v9) + (y * v10)) + (z * v11));
    v15 = (v14 * v14) - ((4.0 * v12) * ((((v9 * v9) + (v10 * v10)) + (v11 * v11)) - (flRadius * flRadius)));
    if ( v15 >= 0.0 )
    {
      v16 = fsqrt(v15);
      result = 1;
      *pT1 = (-v14 - v16) * (0.5 / v12);
      *pT2 = (v16 - v14) * (0.5 / v12);
    }
  }
  return result;
}


// IntersectRayWithSphere  (line 646, @0x00000000030ddf30, libserver.so)
// calls: IntersectInfiniteRayWithSphere
// callers: AvoidActors::operator()
bool __fastcall IntersectRayWithSphere(
        const Vector *const vecRayOrigin,
        const Vector *const vecRayDelta,
        const Vector *const vecSphereCenter,
        float flRadius,
        float *pT1,
        float *pT2)
{
  bool result; // al
  float v9; // xmm2_4

  result = IntersectInfiniteRayWithSphere(vecRayOrigin, vecRayDelta, vecSphereCenter, flRadius, pT1, pT2);
  if ( result )
  {
    if ( *pT1 > 1.0 )
      return 0;
    v9 = *pT2;
    if ( *pT2 < 0.0 )
    {
      return 0;
    }
    else
    {
      if ( *pT1 < 0.0 )
      {
        *pT1 = 0.0;
        v9 = *pT2;
      }
      if ( v9 > 1.0 )
        *pT2 = 1.0;
    }
  }
  return result;
}


// IntersectRayWithSpherePrecise  (line 678, @0x00000000030ddfa0, libserver.so)  // inlines: DistToSqr, Dot, DotProduct, LengthSqr, Normalized, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: VectorNormalize, sqrtf
__int64 __fastcall IntersectRayWithSpherePrecise(
        const Vector *const vRayOrigin,
        const Vector *const vRayDelta,
        const Vector *const vCenter,
        float flRadius,
        Vector *pOutIntersection)
{
  __int64 v5; // rbp
  float x; // xmm4_4
  float v7; // xmm0_4
  float y; // xmm9_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float z; // xmm8_4
  float v12; // xmm5_4
  __int64 result; // rax
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm11_4
  float v20; // xmm10_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  vec_t v23; // xmm1_4
  vec_t v24; // xmm11_4
  float v25; // [rsp-8h] [rbp-38h]
  float vRayDelta_4; // [rsp+Ch] [rbp-24h]
  Vector v28; // [rsp+18h] [rbp-18h] BYREF
  __int64 v29; // [rsp+28h] [rbp-8h]

  x = vRayOrigin->x;
  v7 = flRadius * flRadius;
  y = vRayOrigin->y;
  v9 = vCenter->x;
  v10 = vCenter->y;
  z = vRayOrigin->z;
  v12 = vCenter->z;
  if ( v7 < ((((vRayOrigin->x - v9) * (vRayOrigin->x - v9)) + ((y - v10) * (y - v10))) + ((z - v12) * (z - v12))) )
  {
    v14 = vRayDelta->x;
    result = 0;
    v15 = vRayDelta->y;
    v16 = vRayDelta->z;
    v17 = ((v14 * v14) + (v15 * v15)) + (v16 * v16);
    if ( v17 >= 0.0000099999997 )
    {
      v18 = ((((v9 * v14) + (v10 * v15)) + (v12 * v16)) - (((x * v14) + (y * v15)) + (z * v16))) / v17;
      if ( v18 >= 0.0 && v18 <= 1.0 )
      {
        v19 = (v14 * v18) + x;
        v20 = (v15 * v18) + y;
        v21 = (v18 * v16) + z;
        v22 = (((v19 - v9) * (v19 - v9)) + ((v20 - v10) * (v20 - v10))) + ((v21 - v12) * (v21 - v12));
        if ( v22 <= v7 )
        {
          result = 1;
          if ( pOutIntersection != 0 )
          {
            v29 = v5;
            v25 = fsqrt(v7 - v22);
            vRayDelta_4 = v21;
            v28 = *vRayDelta;
            VectorNormalize(&v28);
            v23 = vRayDelta_4 - (v28.z * v25);
            v24 = v19 - (v28.x * v25);
            pOutIntersection->y = v20 - (v28.y * v25);
            pOutIntersection->x = v24;
            pOutIntersection->z = v23;
            return 1;
          }
        }
      }
    }
  }
  else
  {
    if ( pOutIntersection != 0 )
    {
      pOutIntersection->x = x;
      pOutIntersection->y = vRayOrigin->y;
      pOutIntersection->z = vRayOrigin->z;
    }
    return 1;
  }
  return result;
}


// IsSphereIntersectingCone  (line 724, @0x00000000030de210, libserver.so)  // inlines: DotProduct, FastSqrt, Length, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-
bool __fastcall IsSphereIntersectingCone(
        const Vector *const sphereCenter,
        __m128i sphereRadius,
        const Vector *const coneOrigin,
        const Vector *const coneNormal,
        float coneSine,
        float coneCosine)
{
  float v6; // eax
  float x; // xmm9_4
  float v8; // xmm12_4
  float v9; // xmm15_4
  float y; // xmm8_4
  float v11; // xmm11_4
  float z; // xmm7_4
  float v13; // xmm14_4
  float v14; // xmm10_4
  float v15; // xmm13_4
  float v16; // xmm4_4
  float v17; // xmm6_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm14_4
  float v22; // xmm13_4
  float v23; // xmm3_4
  __int64 v25; // [rsp+0h] [rbp-8h]

  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(sphereRadius));
  x = coneNormal->x;
  v8 = coneOrigin->x;
  v9 = sphereCenter->x;
  y = coneNormal->y;
  v11 = coneOrigin->y;
  z = coneNormal->z;
  v13 = sphereCenter->y;
  v14 = coneOrigin->z;
  v15 = sphereCenter->z;
  v16 = sphereCenter->x - (coneOrigin->x - ((*sphereRadius.m128i_i32 / coneSine) * coneNormal->x));
  v17 = v13 - (v11 - ((*sphereRadius.m128i_i32 / coneSine) * y));
  v18 = v15 - (v14 - ((*sphereRadius.m128i_i32 / coneSine) * z));
  v19 = (v16 * v16) + (v17 * v17);
  v20 = ((v16 * coneNormal->x) + (v17 * y)) + (v18 * z);
  *(&v25 - 1) = v19 + (v18 * v18);
  if ( v20 < (fsqrt(*(&v25 - 1)) * coneCosine) )
    return 0;
  v21 = v13 - v11;
  v22 = v15 - v14;
  *(&v25 - 1) = (((v9 - v8) * (v9 - v8)) + (v21 * v21)) + (v22 * v22);
  v23 = fsqrt(*(&v25 - 1));
  return -((((v9 - v8) * x) + (v21 * y)) + (v22 * z)) < (coneSine * v23) || v6 >= v23;
}


