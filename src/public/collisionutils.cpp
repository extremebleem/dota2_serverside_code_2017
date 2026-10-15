
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ComputeBoxOffset  (line 42, @0x0000000002415420, libserver.so)  // inlines: FloatMakePositive, InvRSquared, Max<float>, operator[]
// callers: IntersectRayWithTriangle, ComputeIntersectionBarycentricCoordinates
float __fastcall ComputeBoxOffset(const Ray_t *const ray)
{
  float x; // xmm1_4
  float y; // xmm3_4
  float z; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm2_4

  x = ray->m_Delta.x;
  y = ray->m_Delta.y;
  z = ray->m_Delta.z;
  v4 = (fabs(ray->m_Extents.x * x) + fabs(ray->m_Extents.y * y)) + fabs(ray->m_Extents.z * z);
  v5 = ((x * x) + (y * y)) + (z * z);
  v6 = 1.0;
  if ( v5 >= 1.0 )
    v6 = 1.0 / v5;
  return (v4 * v6) + 0.001;
}


// IntersectRayWithTriangle  (line 65, @0x00000000024154b0, libserver.so)  // inlines: ComputeBoxOffset, CrossProduct, DotProduct, FloatMakePositive, VectorSubtract
// calls: ComputeBoxOffset
// callers: CNavEditor::FindLadderCorners, CNavMesh::FindNavAreaOrLadderAlongRay, CNavPoly::TestRayToVertHotspots, CNavPoly::IntersectRayWithPoly
float __fastcall IntersectRayWithTriangle(
        const Ray_t *const ray,
        const Vector *const v1,
        const Vector *const v2,
        const Vector *const v3,
        bool oneSided)
{
  float y; // xmm8_4
  float z; // xmm7_4
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm15_4
  float v14; // xmm12_4
  float v15; // xmm11_4
  float v16; // xmm10_4
  float v17; // xmm0_4
  float v18; // xmm14_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  float v21; // xmm12_4
  float result; // xmm0_4
  float v23; // xmm11_4
  float v24; // xmm8_4
  float v25; // xmm5_4
  float v26; // xmm13_4
  float v27; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // [rsp+4h] [rbp-1Ch]
  float v31; // [rsp+10h] [rbp-10h]
  float denom; // [rsp+14h] [rbp-Ch]
  float x; // [rsp+18h] [rbp-8h]
  float v34; // [rsp+18h] [rbp-8h]
  float v35; // [rsp+1Ch] [rbp-4h]
  float v36; // [rsp+1Ch] [rbp-4h]

  y = v1->y;
  z = v1->z;
  v7 = v2->x - v1->x;
  v8 = v2->y - y;
  v9 = v2->z - z;
  v10 = v3->x - v1->x;
  v11 = v3->y - y;
  v12 = v3->z - z;
  if ( oneSided )
  {
    result = -1.0;
    if ( (((((v8 * v12) - (v9 * v11)) * ray->m_Delta.x) + (((v9 * v10) - (v7 * v12)) * ray->m_Delta.y))
        + (((v7 * v11) - (v8 * v10)) * ray->m_Delta.z)) >= 0.0 )
      return result;
    x = ray->m_Delta.x;
    v13 = ray->m_Delta.z;
    v35 = ray->m_Delta.y;
  }
  else
  {
    v13 = ray->m_Delta.z;
    v35 = ray->m_Delta.y;
    x = ray->m_Delta.x;
  }
  v14 = (v35 * v12) - (v11 * v13);
  v15 = (v10 * v13) - (v12 * x);
  v16 = (v11 * x) - (v35 * v10);
  v17 = ((v7 * v14) + (v8 * v15)) + (v9 * v16);
  if ( fabs(v17) < 0.000001 )
    return -1.0;
  denom = 1.0 / v17;
  v18 = ray->m_Start.x - v1->x;
  v19 = ray->m_Start.y - y;
  v20 = ray->m_Start.z - z;
  v21 = (((v14 * v18) + (v15 * v19)) + (v16 * v20)) * (1.0 / v17);
  result = -1.0;
  if ( v21 >= 0.0 && v21 <= 1.0 )
  {
    v23 = (v9 * v19) - (v8 * v20);
    v24 = (v20 * v7) - (v9 * v18);
    v25 = (v8 * v18) - (v7 * v19);
    v26 = (((x * v23) + (v35 * v24)) + (v13 * v25)) * denom;
    if ( v26 >= 0.0 && (v21 + v26) <= 1.0 )
    {
      if ( ray->m_IsRay )
      {
        v27 = -0.0;
        v28 = 0.0;
      }
      else
      {
        v30 = v25;
        v31 = v3->z - z;
        v34 = v11;
        v36 = v3->x - v1->x;
        v28 = ComputeBoxOffset(ray);
        v10 = v36;
        v27 = -v28;
        v11 = v34;
        v12 = v31;
        v25 = v30;
      }
      v29 = (((v10 * v23) + (v24 * v11)) + (v25 * v12)) * denom;
      if ( v27 <= v29 && v29 <= (v28 + 1.0) )
      {
        result = 1.0;
        if ( v29 <= 1.0 )
          return fmaxf(0.0, v29);
        return result;
      }
      return -1.0;
    }
  }
  return result;
}


// ComputeIntersectionBarycentricCoordinates  (line 139, @0x0000000002415830, libserver.so)  // inlines: ComputeBoxOffset, CrossProduct, DotProduct, FloatMakePositive, VectorSubtract
// calls: ComputeBoxOffset
bool __fastcall ComputeIntersectionBarycentricCoordinates(
        const Ray_t *const ray,
        const Vector *const v1,
        const Vector *const v2,
        const Vector *const v3,
        float *const u,
        float *const v,
        float *t)
{
  float y; // xmm11_4
  float z; // xmm10_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm8_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm9_4
  float x; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  bool result; // al
  float v22; // xmm14_4
  float v23; // xmm0_4
  float v24; // xmm12_4
  float v25; // xmm11_4
  float v26; // xmm9_4
  float v27; // xmm7_4
  float v28; // xmm11_4
  float v29; // xmm5_4
  float v30; // xmm0_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // [rsp-18h] [rbp-24h]
  float v34; // [rsp-10h] [rbp-1Ch]
  float v35; // [rsp-Ch] [rbp-18h]
  float v36; // [rsp-8h] [rbp-14h]
  float v37; // [rsp-4h] [rbp-10h]

  y = v1->y;
  z = v1->z;
  v9 = v3->y - y;
  v10 = ray->m_Delta.y;
  v11 = v3->z - z;
  v12 = ray->m_Delta.z;
  v13 = v3->x - v1->x;
  v14 = v2->x - v1->x;
  v15 = v2->y - y;
  v16 = v2->z - z;
  v17 = (v11 * v10) - (v9 * v12);
  x = ray->m_Delta.x;
  v19 = (v12 * v13) - (v11 * x);
  v20 = (x * v9) - (v10 * v13);
  if ( fabs(((v14 * v17) + (v15 * v19)) + (v16 * v20)) < 0.000001 )
    return 0;
  v22 = 1.0 / (((v14 * v17) + (v15 * v19)) + (v16 * v20));
  v23 = ray->m_Start.x - v1->x;
  v24 = ray->m_Start.y - y;
  v25 = ray->m_Start.z - z;
  v26 = ((v17 * v23) + (v19 * v24)) + (v20 * v25);
  v27 = (v16 * v24) - (v15 * v25);
  v28 = (v25 * v14) - (v16 * v23);
  v29 = (v15 * v23) - (v14 * v24);
  *u = v26 * v22;
  *v = (((ray->m_Delta.x * v27) + (ray->m_Delta.y * v28)) + (ray->m_Delta.z * v29)) * v22;
  if ( t == 0 )
    return 1;
  v30 = 0.0;
  v31 = -0.0;
  if ( !ray->m_IsRay )
  {
    v33 = v29;
    v34 = v27;
    v35 = v11;
    v36 = v9;
    v37 = v13;
    v30 = ComputeBoxOffset(ray);
    v31 = -v30;
    v13 = v37;
    v9 = v36;
    v11 = v35;
    v27 = v34;
    v29 = v33;
  }
  v32 = (((v13 * v27) + (v28 * v9)) + (v29 * v11)) * v22;
  *t = v32;
  result = 0;
  if ( v31 <= v32 )
    return v32 <= (v30 + 1.0);
  return result;
}


// IntersectTriangleWithPlaneBarycentric  (line 189, @0x0000000002415aa0, libserver.so)  // inlines: DotProduct
int __fastcall IntersectTriangleWithPlaneBarycentric(
        const Vector *const org,
        const Vector *const edgeU,
        const Vector *const edgeV,
        const Vector4D *const plane,
        Vector2D *pIntersection)
{
  float y; // xmm4_4
  float z; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  __int64 v10; // rax
  float v11; // xmm4_4
  Vector2D *v12; // rdx
  float v13; // xmm4_4
  Vector2D *v14; // rdx
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm4_4

  y = plane->y;
  z = plane->z;
  v7 = ((org->x * plane->x) + (org->y * y)) + (org->z * z);
  v8 = ((edgeU->x * plane->x) + (edgeU->y * y)) + (edgeU->z * z);
  v9 = ((plane->x * edgeV->x) + (y * edgeV->y)) + (z * edgeV->z);
  if ( v9 == 0.0 || (pIntersection->x = 0.0, v17 = -(v7 - plane->w) / v9, pIntersection->y = v17, v17 < 0.0) )
    LODWORD(v10) = 0;
  else
    v10 = v17 <= 1.0;
  if ( v8 != 0.0 )
  {
    v11 = v7 - plane->w;
    v12 = &pIntersection[v10];
    v12->y = 0.0;
    v13 = -v11 / v8;
    v12->x = v13;
    if ( v13 >= 0.0 && v13 <= 1.0 )
    {
      if ( v10 == 1 )
      {
        LODWORD(v10) = 2;
        return v10;
      }
      LODWORD(v10) = 1;
    }
  }
  if ( v8 != v9 )
  {
    v14 = &pIntersection[v10];
    v15 = -((v7 - plane->w) + v9) / (v8 - v9);
    v16 = 1.0 - v15;
    v14->x = v15;
    v14->y = 1.0 - v15;
    if ( v15 >= 0.0 && v15 <= 1.0 && v16 >= 0.0 && v16 <= 1.0 )
      LODWORD(v10) = v10 + 1;
  }
  return v10;
}


// IsPointInBox  (line 247, @0x0000000002415c30, libserver.so)  // inlines: operator[]
// callers: UTIL_FindSpawnGroupsOriginTouches, UTIL_FindSpawnGroupsAbsBoxTouches, CBaseCombatWeapon::GetAvailableWeaponsInBox, ent_characterize, CBaseServerVehicle::GetEntryAnimForPoint, IsPointInOBB, UpdateBlockedAreaFromTrace
bool __fastcall IsPointInBox(const Vector *const pt, const Vector *const boxMin, const Vector *const boxMax)
{
  bool result; // al
  float y; // xmm0_4
  float z; // xmm0_4

  result = 0;
  if ( pt->x <= boxMax->x && boxMin->x <= pt->x )
  {
    y = pt->y;
    if ( y <= boxMax->y && boxMin->y <= y )
    {
      z = pt->z;
      if ( z <= boxMax->z )
        return boxMin->z <= z;
    }
  }
  return result;
}


// IsPointInCone  (line 269, @0x0000000002415c80, libserver.so)  // inlines: DotProduct, VectorSubtract, operator-
// calls: VectorNormalize
bool __fastcall IsPointInCone(
        const Vector *const pt,
        const Vector *const origin,
        const Vector *const axis,
        float cosAngle,
        float length)
{
  vec_t v6; // xmm2_4
  vec_t v7; // xmm4_4
  float v8; // xmm0_4
  bool result; // al
  float v10; // xmm2_4
  Vector delta; // [rsp+10h] [rbp-20h] BYREF

  v6 = pt->z - origin->z;
  v7 = pt->x - origin->x;
  delta.y = pt->y - origin->y;
  delta.z = v6;
  delta.x = v7;
  v8 = VectorNormalize(&delta);
  result = 0;
  v10 = ((delta.x * axis->x) + (delta.y * axis->y)) + (delta.z * axis->z);
  if ( cosAngle <= v10 )
    return (v10 * v8) <= length;
  return result;
}


// IsPointInOBB  (line 285, @0x0000000002415d20, libserver.so)  // inlines: VectorTransform
// calls: AngleIMatrix, VectorTransform, IsPointInBox
bool __fastcall IsPointInOBB(
        const Vector *const pt,
        const Vector *const boxOrg,
        const QAngle *const boxAngles,
        const Vector *const boxMin,
        const Vector *const boxMax)
{
  Vector ptTransformed; // [rsp+0h] [rbp-70h] BYREF
  matrix3x4_t mWorldToBox; // [rsp+10h] [rbp-60h] BYREF

  AngleIMatrix(boxAngles, boxOrg, &mWorldToBox);
  VectorTransform(&pt->x, &mWorldToBox, &ptTransformed.x);
  return IsPointInBox(&ptTransformed, boxMin, boxMax);
}


// IsBoxIntersectingBox  (line 300, @0x0000000002415d80, libserver.so)
// callers: IsBoxIntersectingShortenedRay, CGameEntitySystem::FindEntityByClassnameWithin, CFire::Update, IsBoxIntersectingRay, CFuncNavBlocker::CalculateBlocked, AddAreaIfUnique, AvoidActors::operator(), CNavPoly::IsExtentIntersectingBox
bool __fastcall IsBoxIntersectingBox(
        const Vector *const boxMin1,
        const Vector *const boxMax1,
        const Vector *const boxMin2,
        const Vector *const boxMax2)
{
  bool result; // al

  result = 0;
  if ( boxMin1->x <= boxMax2->x
    && boxMin2->x <= boxMax1->x
    && boxMin1->y <= boxMax2->y
    && boxMin2->y <= boxMax1->y
    && boxMin1->z <= boxMax2->z )
  {
    return boxMin2->z <= boxMax1->z;
  }
  return result;
}


// IsBoxIntersectingBoxExtents  (line 319, @0x0000000002415dd0, libserver.so)  // inlines: FloatMakePositive, VectorAdd, VectorSubtract
bool __fastcall IsBoxIntersectingBoxExtents(
        const Vector *const boxCenter1,
        const Vector *const boxHalfDiagonal1,
        const Vector *const boxCenter2,
        const Vector *const boxHalfDiagonal2)
{
  return (boxHalfDiagonal1->x + boxHalfDiagonal2->x) >= fabs(boxCenter1->x - boxCenter2->x)
      && (boxHalfDiagonal2->y + boxHalfDiagonal1->y) >= fabs(boxCenter1->y - boxCenter2->y)
      && (boxHalfDiagonal2->z + boxHalfDiagonal1->z) >= fabs(boxCenter1->z - boxCenter2->z);
}


// IsOBBIntersectingOBB  (line 338, @0x0000000002419380, libserver.so)
// calls: ComputeSeparatingPlane
// callers: CBaseEntity::Intersects
__int64 __fastcall IsOBBIntersectingOBB(
        const Vector *const vecOrigin1,
        const QAngle *const vecAngles1,
        const Vector *const boxMin1,
        const Vector *const boxMax1,
        const Vector *const vecOrigin2,
        const QAngle *const vecAngles2,
        float flTolerance,
        const Vector *const boxMin2,
        const Vector *const boxMax2)
{
  cplane_t plane; // [rsp+20h] [rbp-20h] BYREF

  return ComputeSeparatingPlane(
           vecOrigin1,
           vecAngles1,
           boxMin1,
           boxMax1,
           vecOrigin2,
           vecAngles2,
           flTolerance,
           boxMin2,
           boxMax2,
           &plane)
       ^ 1;
}


// IsOBBIntersectingCapsule  (line 360, @0x0000000002415e60, libserver.so)  // inlines: CGJKBoxProxy, CGJKCapsuleProxy, CGJKShapeProxy, InitFromQAngles, VectorMultiply, VectorSubtract, operator*, operator-, operator=
// calls: AngleMatrix, Distance
bool __fastcall IsOBBIntersectingCapsule(
        const Vector *const vecOrigin1,
        const QAngle *const vecAngles1,
        const Vector *const boxMin1,
        const Vector *const boxMax1,
        const Vector *const vecOrigin2,
        const QAngle *const vecAngles2,
        float flRadius,
        float flTolerance,
        const Vector *const vCenter1,
        const Vector *const vCenter2)
{
  float v12; // xmm4_4
  float v13; // xmm2_4
  vec_t y; // xmm2_4
  vec_t z; // xmm2_4
  vec_t x; // xmm2_4
  DistanceQueryResult_t query; // [rsp+20h] [rbp-160h] BYREF
  matrix3x4_t xform1; // [rsp+40h] [rbp-140h] BYREF
  matrix3x4_t xform2; // [rsp+70h] [rbp-110h] BYREF
  CGJKCapsuleProxy proxy2; // [rsp+A0h] [rbp-E0h] BYREF
  CGJKBoxProxy proxy1; // [rsp+D0h] [rbp-B0h] BYREF

  AngleMatrix(vecAngles1, vecOrigin1, &xform1);
  proxy1.m_nVertexCount = 8;
  proxy1.m_flScale = 1.0;
  v12 = boxMax1->y - boxMin1->y;
  v13 = boxMax1->z - boxMin1->z;
  proxy1.m_BoxVertices[0].x = (boxMax1->x - boxMin1->x) * 0.5;
  proxy1.m_BoxVertices[0].y = v12 * 0.5;
  proxy1.m_BoxVertices[1].x = -proxy1.m_BoxVertices[0].x;
  proxy1.m_BoxVertices[1].y = v12 * 0.5;
  proxy1.m_BoxVertices[2].x = -proxy1.m_BoxVertices[0].x;
  proxy1.m_BoxVertices[2].y = -(v12 * 0.5);
  proxy1.m_BoxVertices[3].x = proxy1.m_BoxVertices[0].x;
  proxy1.m_BoxVertices[3].y = proxy1.m_BoxVertices[2].y;
  proxy1.m_BoxVertices[4].x = proxy1.m_BoxVertices[0].x;
  proxy1.m_BoxVertices[4].y = v12 * 0.5;
  proxy1.m_BoxVertices[5].x = -proxy1.m_BoxVertices[0].x;
  proxy1.m_BoxVertices[5].y = v12 * 0.5;
  proxy1.m_BoxVertices[6].x = -proxy1.m_BoxVertices[0].x;
  proxy1.m_BoxVertices[6].y = proxy1.m_BoxVertices[2].y;
  proxy1.m_pVertexBuffer = proxy1.m_BoxVertices;
  proxy1.m_BoxVertices[0].z = v13 * 0.5;
  proxy1.m_BoxVertices[1].z = v13 * 0.5;
  proxy1.m_BoxVertices[2].z = v13 * 0.5;
  proxy1.m_BoxVertices[3].z = v13 * 0.5;
  proxy1.m_BoxVertices[4].z = -(v13 * 0.5);
  proxy1.m_BoxVertices[5].z = proxy1.m_BoxVertices[4].z;
  proxy1.m_BoxVertices[6].z = proxy1.m_BoxVertices[4].z;
  proxy1.m_BoxVertices[7].x = proxy1.m_BoxVertices[0].x;
  proxy1.m_BoxVertices[7].y = proxy1.m_BoxVertices[2].y;
  proxy1.m_BoxVertices[7].z = proxy1.m_BoxVertices[4].z;
  AngleMatrix(vecAngles2, vecOrigin2, &xform2);
  proxy2.m_vCenter[0].x = vCenter1->x;
  y = vCenter1->y;
  proxy2.m_pVertexBuffer = proxy2.m_vCenter;
  proxy2.m_vCenter[0].y = y;
  z = vCenter1->z;
  proxy2.m_nVertexCount = 2;
  proxy2.m_vCenter[0].z = z;
  x = vCenter2->x;
  proxy2.m_flScale = 1.0;
  proxy2.m_vCenter[1].x = x;
  proxy2.m_vCenter[1].y = vCenter2->y;
  proxy2.m_vCenter[1].z = vCenter2->z;
  Distance(&query, &xform1, &proxy1, &xform2, &proxy2, 32);
  return (flTolerance + flRadius) >= query.m_flDistance;
}


// IsBoxIntersectingRay  (line 385, @0x00000000024160b0, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, CmpEqSIMD<(ESIMDLevel)20u>, CmpGtSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, FindHighestSIMD3<(ESIMDLevel)20u>, FindLowestSIMD3<(ESIMDLevel)20u>, IsAllZeros<(ESIMDLevel)20u>, IsAnyNegative<(ESIMDLevel)20u>, LoadAlignedSIMD<(ESIMDLevel)20u>, LoadUnaligned3SIMD<(ESIMDLevel)20u>, MaskedAssign<(ESIMDLevel)20u>, MaxSIMD<(ESIMDLevel)20u>, MinSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, OrSIMD<(ESIMDLevel)20u>, ReciprocalEstSIMD<(ESIMDLevel)20u>, ReciprocalSIMD<(ESIMDLevel)20u>, ReciprocalSaturateSIMD, ReplicateX4<(ESIMDLevel)20u>, RotateLeft2<(ESIMDLevel)20u>, RotateLeft<(ESIMDLevel)20u>, SetWToZeroSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, XorSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_cmpeq_ps, _mm_cmpgt_ps, _mm_cmplt_ps, _mm_load_ps, _mm_loadu_ps, _mm_max_ps, _mm_min_ps, _mm_movemask_ps, _mm_mul_ps, _mm_or_ps, _mm_rcp_ps, _mm_set1_ps, _mm_shuffle_ps, _mm_sub_ps, _mm_xor_ps
// callers: IsBoxIntersectingRay
bool __fastcall IsBoxIntersectingRay(
        const Vector *const boxMin,
        const Vector *const boxMax,
        const Vector *const origin,
        const Vector *const vecDelta,
        __m128 flTolerance)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm6
  __m128 v9; // xmm8
  __m128 v10; // xmm5
  __m128 v11; // xmm7
  bool result; // al
  __m128 v13; // xmm0
  __m128 v14; // xmm4
  __m128 v15; // xmm9
  __m128 v16; // xmm0
  __m128 v17; // xmm4
  __m128 v18; // xmm1
  __m128 v19; // xmm4
  __m128 v20; // xmm2
  __m128 v21; // xmm4
  __m128 v22; // xmm0
  __m128 v23; // xmm1

  v5 = _mm_shuffle_ps(flTolerance, flTolerance, 0);
  v6 = _mm_add_ps(_mm_sub_ps(*&boxMax->x, *&origin->x), v5);
  v7 = _mm_sub_ps(_mm_sub_ps(*&boxMin->x, *&origin->x), v5);
  v8 = _mm_cmplt_ps(Four_Zeros, v7);
  v9 = _mm_cmplt_ps(v6, Four_Zeros);
  v10 = _mm_cmplt_ps(*&vecDelta->x, v7);
  v11 = _mm_cmplt_ps(v6, *&vecDelta->x);
  result = 0;
  if ( _mm_movemask_ps(_mm_and_ps(_mm_or_ps(_mm_and_ps(v8, v10), _mm_and_ps(v9, v11)), *g_SIMD_clear_wmask)) == 0 )
  {
    v13 = _mm_or_ps(_mm_and_ps(_mm_cmpeq_ps(*&vecDelta->x, Four_Zeros), Four_Epsilons), *&vecDelta->x);
    v14 = _mm_rcp_ps(v13);
    v15 = _mm_mul_ps(_mm_mul_ps(v14, v14), v13);
    v16 = _mm_or_ps(_mm_xor_ps(v8, v10), _mm_xor_ps(v11, v9));
    v17 = _mm_sub_ps(_mm_add_ps(v14, v14), v15);
    v18 = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(_mm_mul_ps(v6, v17), Four_FLT_MAX), v16), Four_FLT_MAX);
    v19 = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(_mm_mul_ps(v7, v17), Four_Negative_FLT_MAX), v16), Four_Negative_FLT_MAX);
    v20 = _mm_max_ps(v19, v18);
    v21 = _mm_min_ps(v19, v18);
    v22 = _mm_min_ps(_mm_min_ps(v20, _mm_shuffle_ps(v20, v20, 57)), _mm_shuffle_ps(v20, v20, 78));
    v23 = _mm_max_ps(_mm_max_ps(v21, _mm_shuffle_ps(v21, v21, 57)), _mm_shuffle_ps(v21, v21, 78));
    return _mm_movemask_ps(
             _mm_cmpeq_ps(
               _mm_cmplt_ps(
                 _mm_min_ps(_mm_shuffle_ps(v22, v22, 0), Four_Ones),
                 _mm_max_ps(_mm_shuffle_ps(v23, v23, 0), Four_Zeros)),
               Four_Zeros)) == 15;
  }
  return result;
}


// IsBoxIntersectingRay  (line 509, @0x00000000024161f0, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, CmpEqSIMD<(ESIMDLevel)20u>, CmpGtSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, FindHighestSIMD3<(ESIMDLevel)20u>, FindLowestSIMD3<(ESIMDLevel)20u>, IsAllZeros<(ESIMDLevel)20u>, IsAnyNegative<(ESIMDLevel)20u>, LoadAlignedSIMD<(ESIMDLevel)20u>, LoadUnaligned3SIMD<(ESIMDLevel)20u>, MaskedAssign<(ESIMDLevel)20u>, MaxSIMD<(ESIMDLevel)20u>, MinSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, OrSIMD<(ESIMDLevel)20u>, ReplicateX4<(ESIMDLevel)20u>, RotateLeft2<(ESIMDLevel)20u>, RotateLeft<(ESIMDLevel)20u>, SetWToZeroSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, XorSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_cmpeq_ps, _mm_cmpgt_ps, _mm_cmplt_ps, _mm_load_ps, _mm_loadu_ps, _mm_max_ps, _mm_min_ps, _mm_movemask_ps, _mm_mul_ps, _mm_or_ps, _mm_set1_ps, _mm_shuffle_ps, _mm_sub_ps, _mm_xor_ps
bool __fastcall IsBoxIntersectingRay(
        const Vector *const boxMin,
        const Vector *const boxMax,
        const Vector *const origin,
        const Vector *const vecDelta,
        const Vector *const vecInvDelta,
        __m128 flTolerance)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm7
  __m128 v9; // xmm8
  __m128 v10; // xmm10
  __m128 v11; // xmm6
  bool result; // al
  __m128 v13; // xmm0
  __m128 v14; // xmm6
  __m128 v15; // xmm5
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm5
  __m128 v19; // xmm0
  __m128 v20; // xmm1

  v6 = _mm_sub_ps(*&boxMax->x, *&origin->x);
  v7 = _mm_sub_ps(*&boxMin->x, *&origin->x);
  v8 = _mm_cmplt_ps(Four_Zeros, v7);
  v9 = _mm_cmplt_ps(v6, Four_Zeros);
  v10 = _mm_cmplt_ps(v6, *&vecDelta->x);
  v11 = _mm_cmplt_ps(*&vecDelta->x, v7);
  result = 0;
  if ( _mm_movemask_ps(_mm_and_ps(_mm_or_ps(_mm_and_ps(v8, v11), _mm_and_ps(v9, v10)), *g_SIMD_clear_wmask)) == 0 )
  {
    v13 = _mm_shuffle_ps(flTolerance, flTolerance, 0);
    v14 = _mm_or_ps(_mm_xor_ps(v11, v8), _mm_xor_ps(v10, v9));
    v15 = _mm_xor_ps(
            _mm_and_ps(_mm_xor_ps(_mm_mul_ps(_mm_sub_ps(v7, v13), *&vecInvDelta->x), Four_Negative_FLT_MAX), v14),
            Four_Negative_FLT_MAX);
    v16 = _mm_xor_ps(
            _mm_and_ps(_mm_xor_ps(_mm_mul_ps(_mm_add_ps(v6, v13), *&vecInvDelta->x), Four_FLT_MAX), v14),
            Four_FLT_MAX);
    v17 = _mm_max_ps(v15, v16);
    v18 = _mm_min_ps(v15, v16);
    v19 = _mm_min_ps(_mm_min_ps(v17, _mm_shuffle_ps(v17, v17, 57)), _mm_shuffle_ps(v17, v17, 78));
    v20 = _mm_max_ps(_mm_max_ps(v18, _mm_shuffle_ps(v18, v18, 57)), _mm_shuffle_ps(v18, v18, 78));
    return _mm_movemask_ps(
             _mm_cmpeq_ps(
               _mm_cmplt_ps(
                 _mm_min_ps(_mm_shuffle_ps(v19, v19, 0), Four_Ones),
                 _mm_max_ps(_mm_shuffle_ps(v20, v20, 0), Four_Zeros)),
               Four_Zeros)) == 15;
  }
  return result;
}


// IsBoxIntersectingRay  (line 636, @0x0000000002416310, libserver.so)  // inlines: VectorAdd, VectorSubtract
// calls: IsBoxIntersectingBox, IsBoxIntersectingRay
// callers: IsRayIntersectingOBB
bool __fastcall IsBoxIntersectingRay(
        const Vector *const vecBoxMin,
        const Vector *const vecBoxMax,
        const Ray_t *const ray,
        __m128 flTolerance)
{
  float v4; // xmm4_4
  float v5; // xmm2_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float x; // xmm4_4
  float y; // xmm3_4
  vec_t v18; // xmm1_4
  float z; // xmm2_4
  vec_t v20; // xmm4_4
  float v21; // xmm1_4
  vec_t v22; // xmm1_4
  vec_t v23; // xmm3_4
  float v24; // xmm1_4
  vec_t v25; // xmm1_4
  vec_t v26; // xmm2_4
  Vector rayMins; // [rsp+0h] [rbp-20h] BYREF
  Vector rayMaxs; // [rsp+10h] [rbp-10h] BYREF

  if ( ray->m_IsSwept )
  {
    x = ray->m_Extents.x;
    y = ray->m_Extents.y;
    v18 = vecBoxMin->x - x;
    z = ray->m_Extents.z;
    v20 = x + vecBoxMax->x;
    rayMins.x = v18;
    v21 = vecBoxMin->y;
    rayMaxs.x = v20;
    v22 = v21 - y;
    v23 = y + vecBoxMax->y;
    rayMins.y = v22;
    v24 = vecBoxMin->z;
    rayMaxs.y = v23;
    v25 = v24 - z;
    v26 = z + vecBoxMax->z;
    rayMins.z = v25;
    rayMaxs.z = v26;
    return IsBoxIntersectingRay(&rayMins, &rayMaxs, &ray->m_Start, &ray->m_Delta, flTolerance);
  }
  else
  {
    v4 = ray->m_Start.y;
    v5 = ray->m_Start.z;
    v6 = ray->m_Extents.x;
    v7 = ray->m_Extents.y;
    v8 = ray->m_Extents.z;
    v9 = ray->m_Start.x - v6;
    v10 = v4 - v7;
    v11 = v5 - v8;
    v12 = v6 + ray->m_Start.x;
    rayMins.x = v9;
    v13 = v7 + v4;
    rayMins.y = v10;
    v14 = v8 + v5;
    rayMins.z = v11;
    rayMaxs.x = v12;
    rayMaxs.y = v13;
    rayMaxs.z = v14;
    if ( flTolerance.m128_f32[0] != 0.0 )
    {
      rayMins.x = v9 - flTolerance.m128_f32[0];
      rayMins.y = v10 - flTolerance.m128_f32[0];
      rayMins.z = v11 - flTolerance.m128_f32[0];
      rayMaxs.x = v12 + flTolerance.m128_f32[0];
      rayMaxs.y = v13 + flTolerance.m128_f32[0];
      rayMaxs.z = v14 + flTolerance.m128_f32[0];
    }
    return IsBoxIntersectingBox(vecBoxMin, vecBoxMax, &rayMins, &rayMaxs);
  }
}


// IsBoxIntersectingRay  (line 679, @0x0000000002416450, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, CmpEqSIMD<(ESIMDLevel)20u>, CmpGtSIMD<(ESIMDLevel)20u>, CmpLtSIMD<(ESIMDLevel)20u>, FindHighestSIMD3<(ESIMDLevel)20u>, FindLowestSIMD3<(ESIMDLevel)20u>, IsAllZeros<(ESIMDLevel)20u>, IsAnyNegative<(ESIMDLevel)20u>, LoadAlignedSIMD<(ESIMDLevel)20u>, MaxSIMD<(ESIMDLevel)20u>, MinSIMD<(ESIMDLevel)20u>, MulSIMD<(ESIMDLevel)20u>, OrSIMD<(ESIMDLevel)20u>, RotateLeft2<(ESIMDLevel)20u>, RotateLeft<(ESIMDLevel)20u>, SetWToZeroSIMD<(ESIMDLevel)20u>, SplatXSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_cmpeq_ps, _mm_cmpgt_ps, _mm_cmplt_ps, _mm_load_ps, _mm_max_ps, _mm_min_ps, _mm_movemask_ps, _mm_mul_ps, _mm_or_ps, _mm_shuffle_ps, _mm_sub_ps
// callers: IsBoxIntersectingShortenedRay, IsBoxIntersectingRay
bool __fastcall IsBoxIntersectingRay(
        const fltx4_0 *const inBoxMin,
        const fltx4_0 *const inBoxMax,
        const fltx4_0 *const origin,
        const fltx4_0 *const delta,
        const fltx4_0 *const invDelta,
        const fltx4_0 *const vTolerance)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm1
  bool result; // al
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm4
  __m128 v12; // xmm6
  __m128 v13; // xmm1
  __m128 v14; // xmm0

  v6 = _mm_sub_ps(*inBoxMin, *origin);
  v7 = _mm_sub_ps(*inBoxMax, *origin);
  result = 0;
  if ( _mm_movemask_ps(
         _mm_and_ps(
           _mm_or_ps(
             _mm_and_ps(_mm_cmplt_ps(v7, Four_Zeros), _mm_cmplt_ps(v7, *delta)),
             _mm_and_ps(_mm_cmplt_ps(Four_Zeros, v6), _mm_cmplt_ps(*delta, v6))),
           *g_SIMD_clear_wmask)) == 0 )
  {
    v9 = _mm_mul_ps(_mm_sub_ps(v6, *vTolerance), *invDelta);
    v10 = _mm_mul_ps(_mm_add_ps(v7, *vTolerance), *invDelta);
    v11 = _mm_min_ps(v9, v10);
    v12 = _mm_max_ps(v9, v10);
    v13 = _mm_max_ps(_mm_max_ps(v11, _mm_shuffle_ps(v11, v11, 57)), _mm_shuffle_ps(v11, v11, 78));
    v14 = _mm_min_ps(_mm_min_ps(v12, _mm_shuffle_ps(v12, v12, 57)), _mm_shuffle_ps(v12, v12, 78));
    return _mm_movemask_ps(
             _mm_cmpeq_ps(
               _mm_cmplt_ps(
                 _mm_min_ps(_mm_shuffle_ps(v14, v14, 0), Four_Ones),
                 _mm_max_ps(_mm_shuffle_ps(v13, v13, 0), Four_Zeros)),
               Four_Zeros)) == 15;
  }
  return result;
}


// IsBoxIntersectingRay  (line 729, @0x0000000002416520, libserver.so)  // inlines: AddSIMD<(ESIMDLevel)20u>, AndSIMD<(ESIMDLevel)20u>, DivSIMD<(ESIMDLevel)20u>, LoadAlignedSIMD, LoadAlignedSIMD<(ESIMDLevel)20u>, ReplicateX4<(ESIMDLevel)20u>, SetWToZeroSIMD<(ESIMDLevel)20u>, StoreAlignedSIMD<(ESIMDLevel)20u>, SubSIMD<(ESIMDLevel)20u>, _mm_add_ps, _mm_and_ps, _mm_div_ps, _mm_load_ps, _mm_set1_ps, _mm_store_ps, _mm_sub_ps
// calls: IsBoxIntersectingRay, IsBoxIntersectingBox
bool __fastcall IsBoxIntersectingRay(
        VectorAligned *boxMin,
        VectorAligned *boxMax,
        const Ray_t *const ray,
        __m128 flTolerance)
{
  __m128 v4; // xmm0
  bool v5; // zf
  __m128 v6; // xmm3
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  VectorAligned v9; // xmm3
  VectorAligned v10; // xmm2
  VectorAligned v12; // xmm1
  VectorAligned v13; // xmm2
  VectorAligned v14; // xmm0
  fltx4_0 rayStart; // [rsp+0h] [rbp-68h] BYREF
  fltx4_0 rayDelta; // [rsp+10h] [rbp-58h] BYREF
  VectorAligned vecBoxMin; // [rsp+20h] [rbp-48h] BYREF
  VectorAligned vecBoxMax; // [rsp+30h] [rbp-38h] BYREF
  VectorAligned vecRayMins; // [rsp+40h] [rbp-28h] BYREF
  VectorAligned vecRayMaxs; // [rsp+50h] [rbp-18h] BYREF

  v4 = _mm_shuffle_ps(flTolerance, flTolerance, 0);
  v5 = !ray->m_IsSwept;
  v6 = _mm_and_ps(ray->m_Start, *g_SIMD_clear_wmask);
  v7 = _mm_and_ps(ray->m_Extents, *g_SIMD_clear_wmask);
  rayStart = v6;
  if ( v5 )
  {
    v12 = _mm_add_ps(_mm_sub_ps(v6, v7), v4);
    v13 = _mm_add_ps(_mm_add_ps(v7, v6), v4);
    vecBoxMin = *boxMin;
    v14 = *boxMax;
    vecRayMins = v12;
    vecBoxMax = v14;
    vecRayMaxs = v13;
    return IsBoxIntersectingBox(&vecBoxMin, &vecBoxMax, &vecRayMins, &vecRayMaxs);
  }
  else
  {
    vecRayMaxs = v4;
    v8 = *boxMin;
    rayDelta = _mm_and_ps(*g_SIMD_clear_wmask, ray->m_Delta);
    v9 = _mm_sub_ps(v8, v7);
    v10 = _mm_add_ps(v7, *boxMax);
    vecBoxMin = v9;
    vecBoxMax = v10;
    vecRayMins = _mm_div_ps(Four_Ones, rayDelta);
    return IsBoxIntersectingRay(&vecBoxMin, &vecBoxMax, &rayStart, &rayDelta, &vecRayMins, &vecRayMaxs);
  }
}


// IntersectRayWithRay  (line 766, @0x00000000024165e0, libserver.so)  // inlines: Cross, CrossProduct, Dot, DotProduct, LengthSqr, Negate, VectorMultiply, VectorSubtract, operator*, operator+=, operator-
// calls: VectorNormalize
// callers: QuadWithParallelEdges
bool __fastcall IntersectRayWithRay(const Ray_t *const ray0, const Ray_t *const ray1, float *const t, float *const s)
{
  float y; // xmm7_4
  float z; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm6_4
  float x; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v19; // xmm12_4
  float v20; // xmm13_4
  float v21; // xmm11_4
  float v22; // xmm10_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  Vector v0; // [rsp+0h] [rbp-40h] BYREF
  Vector v1; // [rsp+10h] [rbp-30h] BYREF

  v0 = ray0->m_Delta.Vector;
  v1 = ray1->m_Delta.Vector;
  VectorNormalize(&v0);
  VectorNormalize(&v1);
  y = v0.y;
  z = v0.z;
  v10 = v1.z;
  v11 = v1.y;
  x = v1.x;
  v13 = v0.x;
  v14 = (v0.y * v1.z) - (v0.z * v1.y);
  v15 = (v0.z * v1.x) - (v1.z * v0.x);
  v16 = (v1.y * v0.x) - (v0.y * v1.x);
  v17 = ((v14 * v14) + (v15 * v15)) + (v16 * v16);
  if ( v17 == 0.0 )
  {
    *t = 0.0;
    *s = 0.0;
    return 0;
  }
  else
  {
    v19 = ray1->m_Start.y - ray0->m_Start.y;
    v20 = ray1->m_Start.x - ray0->m_Start.x;
    v21 = -((v19 * v16) - ((ray1->m_Start.z - ray0->m_Start.z) * v15));
    v22 = -(((ray1->m_Start.z - ray0->m_Start.z) * v14) - (v16 * v20));
    v23 = -((v15 * v20) - (v14 * v19));
    v24 = (((v21 * v0.x) + (v22 * v0.y)) + (v23 * v0.z)) / v17;
    *t = (((v21 * v1.x) + (v22 * v1.y)) + (v23 * v1.z)) / v17;
    *s = v24;
    v25 = *t;
    return ((v13 * *t) + ray0->m_Start.x) == ((x * v24) + ray1->m_Start.x)
        && ((y * v25) + ray0->m_Start.y) == ((v11 * v24) + ray1->m_Start.y)
        && ((z * v25) + ray0->m_Start.z) == ((v24 * v10) + ray1->m_Start.z);
  }
}


// IntersectRayWithRay  (line 829, @0x0000000002416820, libserver.so)
// callers: CNavArea::ClipRayToAreaInterior, CNavMesh::TestRayToMesh, CNavOrientedPortal::CalcClosestPointToRay
bool __fastcall IntersectRayWithRay(
        const Ray2D_t *const ray0,
        const Ray2D_t *const ray1,
        float *const t,
        float *const s)
{
  float y; // xmm2_4
  bool result; // al
  float x; // xmm4_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4

  y = ray1->m_delta.y;
  result = 0;
  x = ray1->m_delta.x;
  v7 = (ray0->m_delta.x * y) - (ray0->m_delta.y * x);
  if ( fabs(v7) >= 0.000001 )
  {
    v8 = (((ray1->m_start.x - ray0->m_start.x) * y) + ((ray0->m_start.y - ray1->m_start.y) * x)) / v7;
    *t = v8;
    v9 = ray1->m_delta.y;
    if ( fabs(ray1->m_delta.x) > fabs(v9) )
    {
      *s = ((ray0->m_start.x - ray1->m_start.x) + (v8 * ray0->m_delta.x)) / ray1->m_delta.x;
      return 1;
    }
    else
    {
      result = 1;
      *s = ((ray0->m_start.y - ray1->m_start.y) + (v8 * ray0->m_delta.y)) / v9;
    }
  }
  return result;
}


// IntersectRayWithPlane  (line 856, @0x00000000024168f0, libserver.so)  // inlines: DotProduct
// callers: CSheetSimulator::TestVertAgainstPlane
float __fastcall IntersectRayWithPlane(const Ray_t *const ray, const cplane_t *const plane)
{
  float y; // xmm4_4
  float z; // xmm3_4
  float v4; // xmm1_4
  float result; // xmm0_4

  y = plane->normal.y;
  z = plane->normal.z;
  v4 = ((ray->m_Delta.x * plane->normal.x) + (ray->m_Delta.y * y)) + (ray->m_Delta.z * z);
  result = 0.0;
  if ( v4 != 0.0 )
    return (plane->dist - (((plane->normal.x * ray->m_Start.x) + (y * ray->m_Start.y)) + (z * ray->m_Start.z)))
         * (1.0 / v4);
  return result;
}


// IntersectRayWithPlane  (line 866, @0x0000000002416970, libserver.so)  // inlines: DotProduct
float __fastcall IntersectRayWithPlane(const Vector *const org, const Vector *const dir, const cplane_t *const plane)
{
  float y; // xmm4_4
  float z; // xmm3_4
  float v5; // xmm1_4
  float result; // xmm0_4

  y = plane->normal.y;
  z = plane->normal.z;
  v5 = ((dir->x * plane->normal.x) + (dir->y * y)) + (dir->z * z);
  result = 0.0;
  if ( v5 != 0.0 )
    return (plane->dist - (((plane->normal.x * org->x) + (y * org->y)) + (z * org->z))) * (1.0 / v5);
  return result;
}


// IntersectRayWithPlane  (line 876, @0x00000000024169f0, libserver.so)  // inlines: DotProduct
float __fastcall IntersectRayWithPlane(
        const Vector *const org,
        const Vector *const dir,
        const Vector *const normal,
        float dist)
{
  float y; // xmm5_4
  float z; // xmm4_4
  float v6; // xmm1_4

  y = normal->y;
  z = normal->z;
  v6 = ((dir->x * normal->x) + (dir->y * y)) + (dir->z * z);
  if ( v6 == 0.0 )
    return 0.0;
  else
    return (dist - (((normal->x * org->x) + (y * org->y)) + (z * org->z))) * (1.0 / v6);
}


// IntersectRayWithAAPlane  (line 886, @0x0000000002416a70, libserver.so)  // inlines: operator[]
// callers: UTIL_BubbleTrail
float __fastcall IntersectRayWithAAPlane(
        const Vector *const vecStart,
        const Vector *const vecEnd,
        int nAxis,
        float flSign,
        float flDist)
{
  float v5; // xmm4_4
  float v6; // xmm2_4

  v5 = *(&vecStart->x + nAxis);
  v6 = (*(&vecEnd->x + nAxis) - v5) * flSign;
  if ( v6 == 0.0 )
    return 0.0;
  else
    return (flDist - (flSign * v5)) * (1.0 / v6);
}


// IntersectRayWithBox  (line 903, @0x0000000002416ac0, libserver.so)  // inlines: Collision_ClearTrace, Init, VectorAdd, VectorMA, VectorMultiply, operator*, operator+, operator+=, operator=, operator[]
// calls: IntersectRayWithBox
// callers: CSkeletonInstance::TraceRayAgainstHitboxes, CBasePlayer::FindUseEntity, IntersectRayWithBox, IntersectRayWithOBB
_BOOL8 __fastcall IntersectRayWithBox(
        const Vector *const vecRayStart,
        const Vector *const vecRayDelta,
        const Vector *const boxMins,
        const Vector *const boxMaxs,
        float flTolerance,
        CBaseTrace *pTrace,
        float *pFractionLeftSolid)
{
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm1_4
  vec_t v15; // xmm1_4
  _BOOL4 v16; // eax
  float t1; // xmm0_4
  float t2; // xmm1_4
  _BOOL4 startsolid; // edx
  bool v20; // cc
  vec_t v21; // xmm0_4
  float v22; // xmm0_4
  vec_t v23; // xmm2_4
  vec_t v24; // xmm0_4
  vec_t v25; // xmm1_4
  float v27; // xmm0_4
  int hitside; // edx
  BoxTraceInfo_t trace; // [rsp+10h] [rbp-40h] BYREF

  pTrace->startpos = *vecRayStart;
  x = vecRayStart->x;
  pTrace->endpos.x = vecRayStart->x;
  y = vecRayStart->y;
  pTrace->endpos.y = y;
  z = vecRayStart->z;
  pTrace->endpos.z = z;
  pTrace->endpos.x = x + vecRayDelta->x;
  pTrace->endpos.y = y + vecRayDelta->y;
  v15 = z + vecRayDelta->z;
  pTrace->startsolid = 0;
  pTrace->fraction = 1.0;
  pTrace->contents = 0;
  pTrace->endpos.z = v15;
  LOBYTE(v16) = IntersectRayWithBox(vecRayStart, vecRayDelta, boxMins, boxMaxs, flTolerance, &trace);
  if ( v16 )
  {
    t1 = trace.t1;
    t2 = trace.t2;
    startsolid = trace.startsolid;
    v20 = trace.t2 <= trace.t1;
    pTrace->startsolid = trace.startsolid;
    if ( !v20 && t1 >= 0.0 )
    {
      if ( startsolid )
        t1 = 0.0;
      pTrace->fraction = t1;
      pTrace->endpos.x = (vecRayDelta->x * t1) + pTrace->startpos.x;
      pTrace->endpos.y = (vecRayDelta->y * t1) + pTrace->startpos.y;
      v27 = t1 * vecRayDelta->z;
      pTrace->contents = 1;
      pTrace->endpos.z = v27 + pTrace->startpos.z;
      pTrace->plane.normal.x = vec3_origin.x;
      pTrace->plane.normal.y = vec3_origin.y;
      hitside = trace.hitside;
      pTrace->plane.normal.z = vec3_origin.z;
      if ( hitside <= 2 )
      {
        pTrace->plane.dist = -*(&boxMins->x + hitside);
        *(&pTrace->plane.normal.x + hitside) = -1082130432;
      }
      else
      {
        hitside -= 3;
        pTrace->plane.dist = *(&boxMaxs->x + hitside);
        *(&pTrace->plane.normal.x + hitside) = 1065353216;
      }
      pTrace->plane.type = hitside;
      return v16;
    }
    if ( startsolid )
    {
      pTrace->fraction = 0.0;
      if ( pFractionLeftSolid != 0 )
        *pFractionLeftSolid = t2;
      pTrace->endpos.x = vecRayStart->x;
      pTrace->endpos.y = vecRayStart->y;
      v21 = vecRayStart->z;
      pTrace->contents = 1;
      pTrace->plane.normal.x = 1.0;
      pTrace->endpos.z = v21;
      v22 = pTrace->startpos.x;
      pTrace->plane.normal.y = 0.0;
      pTrace->plane.dist = v22;
      pTrace->plane.normal.z = 0.0;
      pTrace->plane.type = 0;
      v23 = (vecRayDelta->y * t2) + vecRayStart->y;
      v24 = (vecRayDelta->z * t2) + vecRayStart->z;
      v25 = (t2 * vecRayDelta->x) + vecRayStart->x;
      pTrace->startpos.y = v23;
      pTrace->startpos.z = v24;
      pTrace->startpos.x = v25;
      return startsolid;
    }
  }
  return 0;
}


// IntersectRayWithBox  (line 964, @0x0000000002416d20, libserver.so)  // inlines: VectorAdd, VectorSubtract, operator+, operator+=, operator-
// calls: IntersectRayWithBox
// callers: IntersectRayWithOBB
_BOOL8 __fastcall IntersectRayWithBox(
        const Ray_t *const ray,
        const Vector *const boxMins,
        const Vector *const boxMaxs,
        float flTolerance,
        CBaseTrace *pTrace,
        float *pFractionLeftSolid)
{
  _BOOL8 result; // rax
  float x; // xmm4_4
  float y; // xmm6_4
  float z; // xmm5_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm3_4
  vec_t v14; // xmm6_4
  vec_t v15; // xmm5_4
  vec_t v16; // xmm4_4
  Vector vecExpandedMins; // [rsp+0h] [rbp-30h] BYREF
  Vector vecExpandedMaxs; // [rsp+10h] [rbp-20h] BYREF

  if ( ray->m_IsRay )
    return IntersectRayWithBox(&ray->m_Start, &ray->m_Delta, boxMins, boxMaxs, flTolerance, pTrace, pFractionLeftSolid);
  x = ray->m_Extents.x;
  y = ray->m_Extents.y;
  z = ray->m_Extents.z;
  v12 = boxMins->z - z;
  v13 = boxMins->x - x;
  vecExpandedMins.y = boxMins->y - y;
  v14 = y + boxMaxs->y;
  v15 = z + boxMaxs->z;
  vecExpandedMins.z = v12;
  v16 = x + boxMaxs->x;
  vecExpandedMins.x = v13;
  vecExpandedMaxs.y = v14;
  vecExpandedMaxs.z = v15;
  vecExpandedMaxs.x = v16;
  result = IntersectRayWithBox(
             &ray->m_Start,
             &ray->m_Delta,
             &vecExpandedMins,
             &vecExpandedMaxs,
             flTolerance,
             pTrace,
             pFractionLeftSolid);
  pTrace->startpos.x = pTrace->startpos.x + ray->m_StartOffset.x;
  pTrace->startpos.y = pTrace->startpos.y + ray->m_StartOffset.y;
  pTrace->startpos.z = pTrace->startpos.z + ray->m_StartOffset.z;
  pTrace->endpos.x = pTrace->endpos.x + ray->m_StartOffset.x;
  pTrace->endpos.y = pTrace->endpos.y + ray->m_StartOffset.y;
  pTrace->endpos.z = pTrace->endpos.z + ray->m_StartOffset.z;
  return result;
}


// IntersectRayWithOBB  (line 985, @0x0000000002416e50, libserver.so)  // inlines: Collision_ClearTrace, Cross, CrossProduct, DotProduct, Init, VectorAdd, VectorITransform, VectorMultiply, VectorSubtract, VectorTransform, operator*, operator*=, operator+, operator+=, operator-, operator=, operator[]
// calls: VectorTransform, VectorITransform, IntersectRayWithBox
// callers: IntersectRayWithOBB
_BOOL8 __fastcall IntersectRayWithOBB(
        const Vector *const vecRayStart,
        const Vector *const vecRayDelta,
        const matrix3x4_t *const matOBBToWorld,
        const Vector *const vecOBBMins,
        const Vector *const vecOBBMaxs,
        float flTolerance,
        CBaseTrace *pTrace)
{
  float *v11; // r15
  float x; // xmm2_4
  float y; // xmm1_4
  float z; // xmm0_4
  vec_t v15; // xmm0_4
  float v16; // xmm11_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  __int64 v19; // rdx
  float *v20; // r10
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm11_4
  float v24; // xmm8_4
  float v25; // xmm12_4
  float v26; // xmm0_4
  float v27; // xmm13_4
  float v28; // xmm15_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm1_4
  float v33; // xmm5_4
  float v34; // xmm1_4
  float v35; // xmm3_4
  float v36; // xmm11_4
  float v37; // xmm7_4
  _BOOL4 v39; // eax
  float v40; // xmm0_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  __int64 type; // rdx
  float v44; // xmm1_4
  vec_t v45; // xmm5_4
  vec_t v46; // xmm4_4
  vec_t v47; // xmm1_4
  float v49; // [rsp+Ch] [rbp-B4h]
  float v50; // [rsp+10h] [rbp-B0h]
  _BOOL4 v52; // [rsp+28h] [rbp-98h]
  Vector vecBoxExtents; // [rsp+30h] [rbp-90h] BYREF
  Vector vecBoxCenter; // [rsp+40h] [rbp-80h] BYREF
  Vector extent; // [rsp+50h] [rbp-70h] BYREF
  Vector uextent; // [rsp+60h] [rbp-60h]
  Vector start; // [rsp+70h] [rbp-50h] BYREF
  Vector vecTemp; // [rsp+80h] [rbp-40h] BYREF

  v11 = matOBBToWorld->m_flMatVal[2];
  pTrace->startpos = *vecRayStart;
  x = vecRayStart->x;
  pTrace->endpos.x = vecRayStart->x;
  y = vecRayStart->y;
  pTrace->endpos.y = y;
  z = vecRayStart->z;
  pTrace->endpos.z = z;
  pTrace->endpos.x = x + vecRayDelta->x;
  pTrace->endpos.y = y + vecRayDelta->y;
  v15 = z + vecRayDelta->z;
  pTrace->startsolid = 0;
  pTrace->fraction = 1.0;
  pTrace->contents = 0;
  pTrace->endpos.z = v15;
  v49 = vecRayDelta->x * 0.5;
  v50 = vecRayDelta->y * 0.5;
  v16 = vecRayDelta->z;
  v17 = (vecOBBMins->z + vecOBBMaxs->z) * 0.5;
  v18 = (vecOBBMins->x + vecOBBMaxs->x) * 0.5;
  vecBoxExtents.y = (vecOBBMins->y + vecOBBMaxs->y) * 0.5;
  vecBoxExtents.z = v17;
  vecBoxExtents.x = v18;
  VectorTransform(&vecBoxExtents.x, matOBBToWorld, &vecBoxCenter.x);
  v19 = 0;
  extent.x = 0.0;
  v20 = matOBBToWorld->m_flMatVal[1];
  v21 = vecRayStart->x;
  extent.y = 0.0;
  extent.z = 0.0;
  v22 = vecRayStart->y;
  v23 = v16 * 0.5;
  v24 = vecRayStart->z;
  v25 = vecOBBMaxs->x - vecBoxExtents.x;
  v26 = vecOBBMaxs->y - vecBoxExtents.y;
  v27 = vecOBBMaxs->z - vecBoxExtents.z;
  v28 = v25;
  vecBoxExtents.x = v25;
  v29 = (v21 + v49) - vecBoxCenter.x;
  vecBoxExtents.y = v26;
  vecBoxExtents.z = v27;
  v30 = (v22 + v50) - vecBoxCenter.y;
  v31 = (v24 + v23) - vecBoxCenter.z;
  while ( 1 )
  {
    v32 = ((matOBBToWorld->m_flMatVal[0][v19] * v49) + (v20[v19] * v50)) + (v11[v19] * v23);
    v33 = ((matOBBToWorld->m_flMatVal[0][v19] * v29) + (v20[v19] * v30)) + (v11[v19] * v31);
    *(&extent.x + v19 * 4) = v32;
    v34 = fabs(v32);
    *(&uextent.x + v19 * 4) = v34;
    if ( fabs(v33) > (v34 + v28) )
      return 0;
    if ( ++v19 == 3 )
      break;
    v28 = *(&vecBoxExtents.x + v19 * 4);
  }
  v35 = (v50 * v31) - (v23 * v30);
  v36 = (v23 * v29) - (v31 * v49);
  v37 = (v30 * v49) - (v29 * v50);
  if ( fabs(
         ((matOBBToWorld->m_flMatVal[0][0] * v35) + (matOBBToWorld->m_flMatVal[1][0] * v36))
       + (matOBBToWorld->m_flMatVal[2][0] * v37)) > ((uextent.z * v26) + (uextent.y * v27)) )
    return 0;
  if ( fabs(
         ((matOBBToWorld->m_flMatVal[0][1] * v35) + (matOBBToWorld->m_flMatVal[1][1] * v36))
       + (matOBBToWorld->m_flMatVal[2][1] * v37)) > ((uextent.z * v25) + (v27 * uextent.x)) )
    return 0;
  if ( fabs(
         ((v35 * matOBBToWorld->m_flMatVal[0][2]) + (v36 * matOBBToWorld->m_flMatVal[1][2]))
       + (v37 * matOBBToWorld->m_flMatVal[2][2])) > ((v25 * uextent.y) + (v26 * uextent.x)) )
    return 0;
  VectorITransform(&vecRayStart->x, matOBBToWorld, &start.x);
  extent.x = extent.x + extent.x;
  extent.y = extent.y + extent.y;
  extent.z = extent.z + extent.z;
  v39 = IntersectRayWithBox(&start, &extent, vecOBBMins, vecOBBMaxs, flTolerance, pTrace, 0);
  if ( !v39 )
    return 0;
  v52 = v39;
  VectorTransform(&pTrace->endpos.x, matOBBToWorld, &vecTemp.x);
  v40 = vecTemp.x;
  v41 = vecTemp.y;
  v42 = vecTemp.z;
  pTrace->endpos.x = vecTemp.x;
  pTrace->endpos.y = v41;
  type = pTrace->plane.type;
  pTrace->endpos.z = v42;
  pTrace->startpos.x = vecRayStart->x;
  pTrace->startpos.y = vecRayStart->y;
  pTrace->startpos.z = vecRayStart->z;
  v44 = *(&pTrace->plane.normal.x + type);
  v45 = matOBBToWorld->m_flMatVal[0][type] * v44;
  pTrace->plane.normal.x = v45;
  v46 = v44 * matOBBToWorld->m_flMatVal[1][type];
  pTrace->plane.normal.y = v46;
  v47 = v44 * v11[type];
  pTrace->plane.type = 3;
  pTrace->plane.normal.z = v47;
  pTrace->plane.dist = ((v40 * v45) + (v41 * v46)) + (v47 * v42);
  return v52;
}


// IntersectRayWithOBB  (line 1085, @0x0000000002417350, libserver.so)  // inlines: VectorAdd, operator==
// calls: AngleMatrix, IntersectRayWithOBB, IntersectRayWithBox
// callers: IntersectRayWithOBB
_BOOL8 __fastcall IntersectRayWithOBB(
        const Vector *const vecRayOrigin,
        const Vector *const vecRayDelta,
        const Vector *const vecBoxOrigin,
        const QAngle *const angBoxRotation,
        const Vector *const vecOBBMins,
        const Vector *const vecOBBMaxs,
        float flTolerance,
        CBaseTrace *pTrace)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS NUMPAD "+" TO EXPAND]

  if ( vec3_angle.x == angBoxRotation->x && vec3_angle.y == angBoxRotation->y && vec3_angle.z == angBoxRotation->z )
  {
    y = vecBoxOrigin->y;
    z = vecOBBMins->z;
    v15 = vecBoxOrigin->x + vecOBBMaxs->x;
    vecAbsMins.x = vecOBBMins->x + vecBoxOrigin->x;
    v16 = vecOBBMins->y;
    vecAbsMaxs.x = v15;
    v17 = v16 + y;
    v18 = y + vecOBBMaxs->y;
    vecAbsMins.y = v17;
    v19 = vecBoxOrigin->z;
    vecAbsMaxs.y = v18;
    v20 = z + v19;
    v21 = v19 + vecOBBMaxs->z;
    vecAbsMins.z = v20;
    vecAbsMaxs.z = v21;
    return IntersectRayWithBox(vecRayOrigin, vecRayDelta, &vecAbsMins, &vecAbsMaxs, flTolerance, pTrace, 0);
  }
  else
  {
    AngleMatrix(angBoxRotation, vecBoxOrigin, &vecAbsMaxs);
    return IntersectRayWithOBB(vecRayOrigin, vecRayDelta, &vecAbsMaxs, vecOBBMins, vecOBBMaxs, flTolerance, pTrace);
  }
}


// IntersectRayWithOBB  (line 1151, @0x0000000002417470, libserver.so)  // inlines: Collision_ClearTrace, ComputeSupportMap, DotProduct, FastSqrt, FloatMakePositive, GetColumn, Init, Length, MatrixGetColumn, MatrixITransformPlane, VectorAdd, VectorCopy, VectorIRotate, VectorITransform, VectorLength, VectorMA, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*=, operator+, operator+=, operator=, operator[]
// calls: IsRayIntersectingSphere, VectorITransform, VectorIRotate, IntersectRayWithOBB
// callers: CSkeletonInstance::TraceRayAgainstHitboxes, IntersectRayWithOBB
// globals: s_ExtIndices, s_MatIndices
_BOOL8 __fastcall IntersectRayWithOBB(
        const Ray_t *const ray,
        const matrix3x4_t *const matOBBToWorld,
        const Vector *const vecOBBMins,
        const Vector *const vecOBBMaxs,
        float flTolerance,
        CBaseTrace *pTrace)
{
  VectorAligned *p_m_Delta; // r15
  vec_t v12; // xmm2_4
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  vec_t v15; // xmm0_4
  float y; // xmm6_4
  float v17; // xmm2_4
  float z; // xmm5_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float x; // xmm8_4
  const matrix3x4_t *v23; // rdi
  __int64 v24; // rdx
  Vector *v25; // r10
  float v26; // xmm6_4
  float v27; // xmm5_4
  VectorAligned *p_m_Extents; // r9
  float *v29; // rax
  vec_t *v30; // r8
  vec_t *v31; // rsi
  float v32; // xmm1_4
  float v33; // xmm4_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm10_4
  float v37; // xmm13_4
  float v38; // xmm14_4
  float v39; // xmm1_4
  float *v40; // r12
  float *v41; // r11
  float v42; // xmm1_4
  float *v43; // r12
  float *v44; // rdi
  __int64 v45; // rdi
  float v46; // xmm12_4
  float v47; // xmm11_4
  __int64 v48; // r12
  __int64 v49; // r11
  vec_t v50; // xmm13_4
  float *v51; // r12
  float *v52; // r11
  float v53; // xmm1_4
  float *v54; // r15
  float *v55; // rdi
  _BOOL8 v56; // r15
  _BOOL4 v57; // r14d
  float v58; // xmm1_4
  float v59; // xmm1_4
  float v60; // xmm14_4
  float v61; // xmm1_4
  float *v62; // r15
  float *v63; // rdi
  _BOOL8 v64; // r15
  _BOOL4 v65; // r14d
  float *v66; // rdi
  float v67; // xmm1_4
  float v68; // xmm4_4
  float v69; // xmm13_4
  float v70; // xmm1_4
  float v71; // xmm4_4
  float v72; // xmm1_4
  float v73; // xmm1_4
  float v74; // xmm1_4
  float v75; // xmm4_4
  float v76; // xmm1_4
  float v77; // xmm11_4
  float v78; // xmm1_4
  int v79; // esi
  int v80; // r8d
  __int64 v81; // r9
  float v82; // xmm13_4
  float v83; // xmm6_4
  float v84; // xmm12_4
  float v85; // xmm14_4
  float v86; // xmm15_4
  float *v87; // rcx
  Vector *v88; // rdx
  float v89; // xmm14_4
  float v90; // xmm10_4
  float v91; // xmm4_4
  __int64 v92; // rax
  float v93; // xmm2_4
  int v94; // edi
  float v95; // xmm6_4
  float v96; // xmm5_4
  float v97; // xmm2_4
  float v98; // xmm8_4
  float v99; // xmm4_4
  float v100; // xmm5_4
  float v101; // xmm6_4
  Vector *v102; // rax
  float v103; // xmm3_4
  float v104; // xmm2_4
  vec_t v105; // xmm0_4
  float v106; // xmm1_4
  float v107; // xmm0_4
  float v108; // xmm0_4
  float v109; // xmm10_4
  float v110; // xmm0_4
  float v111; // xmm1_4
  float v112; // xmm2_4
  bool startsolid; // al
  vec_t v114; // xmm1_4
  float v115; // xmm0_4
  vec_t v116; // xmm1_4
  CBaseTrace *pTracea; // [rsp+0h] [rbp-240h]
  const Vector *vecOBBMinsa; // [rsp+10h] [rbp-230h]
  float *vecLocalRayEnd; // [rsp+30h] [rbp-210h]
  float vecLocalRayEnda; // [rsp+30h] [rbp-210h]
  bool v122; // [rsp+3Eh] [rbp-202h]
  bool m_IsRay; // [rsp+3Fh] [rbp-201h]
  float d1_4; // [rsp+44h] [rbp-1FCh]
  float d2_4; // [rsp+54h] [rbp-1ECh]
  Vector vecOBBCenter; // [rsp+60h] [rbp-1E0h] BYREF
  Vector vecLocalRayOrigin; // [rsp+70h] [rbp-1D0h] BYREF
  Vector vecLocalRayDirection; // [rsp+80h] [rbp-1C0h] BYREF
  float in1[4]; // [rsp+90h] [rbp-1B0h] BYREF
  float out[4]; // [rsp+A0h] [rbp-1A0h] BYREF
  cplane_t temp; // [rsp+B0h] [rbp-190h] BYREF
  float ppPlaneDist[32]; // [rsp+D0h] [rbp-170h] BYREF
  _DWORD pPlaneNormal[60]; // [rsp+150h] [rbp-F0h] BYREF

  m_IsRay = ray->m_IsRay;
  if ( m_IsRay )
    return IntersectRayWithOBB(&ray->m_Start, &ray->m_Delta, matOBBToWorld, vecOBBMins, vecOBBMaxs, flTolerance, pTrace);
  p_m_Delta = &ray->m_Delta;
  v12 = ray->m_Start.x + ray->m_StartOffset.x;
  v13 = ray->m_Start.y + ray->m_StartOffset.y;
  v14 = ray->m_Start.z + ray->m_StartOffset.z;
  pTrace->endpos.x = v12;
  pTrace->endpos.y = v13;
  pTrace->endpos.z = v14;
  pTrace->startpos.x = v12;
  pTrace->startpos.y = v13;
  pTrace->startpos.z = v14;
  pTrace->endpos.x = v12 + ray->m_Delta.x;
  pTrace->endpos.y = v13 + ray->m_Delta.y;
  v15 = v14 + ray->m_Delta.z;
  pTrace->startsolid = 0;
  pTrace->fraction = 1.0;
  pTrace->contents = 0;
  pTrace->endpos.z = v15;
  y = vecOBBMins->y;
  v17 = vecOBBMaxs->y;
  z = vecOBBMins->z;
  v19 = vecOBBMaxs->z;
  v20 = ((vecOBBMaxs->x - vecOBBMins->x) * 0.5) * ((vecOBBMaxs->x - vecOBBMins->x) * 0.5);
  vecOBBCenter.x = ((vecOBBMins->x + vecOBBMaxs->x) * 0.5) + matOBBToWorld->m_flMatVal[0][3];
  vecOBBCenter.y = ((y + v17) * 0.5) + matOBBToWorld->m_flMatVal[1][3];
  vecOBBCenter.z = ((z + v19) * 0.5) + matOBBToWorld->m_flMatVal[2][3];
  v122 = IsRayIntersectingSphere(
           &ray->m_Start,
           &ray->m_Delta,
           &vecOBBCenter,
           fsqrt((v20 + (((v17 - y) * 0.5) * ((v17 - y) * 0.5))) + (((v19 - z) * 0.5) * ((v19 - z) * 0.5)))
         + fsqrt(
             ((ray->m_Extents.x * ray->m_Extents.x) + (ray->m_Extents.y * ray->m_Extents.y))
           + (ray->m_Extents.z * ray->m_Extents.z)),
           flTolerance);
  if ( v122 )
  {
    VectorITransform(&ray->m_Start.x, matOBBToWorld, &vecLocalRayOrigin.x);
    VectorIRotate(&p_m_Delta->x, matOBBToWorld, &vecLocalRayDirection.x);
    x = vecOBBMins->x;
    v23 = matOBBToWorld;
    vecLocalRayEnd = matOBBToWorld->m_flMatVal[1];
    v24 = 0;
    v25 = pPlaneNormal;
    v26 = vecOBBMins->y;
    v27 = vecOBBMins->z;
    p_m_Extents = &ray->m_Extents;
    v29 = ppPlaneDist;
    v30 = &pPlaneNormal[1];
    v31 = &pPlaneNormal[2];
    vecOBBMinsa = vecOBBMins;
    pTracea = pTrace;
    while ( 1 )
    {
      v25->x = 0.0;
      v25->y = 0.0;
      v25->z = 0.0;
      pPlaneNormal[v24 * 4] = 1065353216;
      v32 = (fabs(matOBBToWorld->m_flMatVal[0][v24] * ray->m_Extents.x)
           + fabs(matOBBToWorld->m_flMatVal[1][v24] * ray->m_Extents.y))
          + fabs(matOBBToWorld->m_flMatVal[2][v24] * ray->m_Extents.z);
      v33 = *(&vecOBBMinsa->x + v24 * 4) - v32;
      v34 = v32 + *(&vecOBBMaxs->x + v24 * 4);
      *v29 = v33;
      v29[1] = v34;
      v35 = vecOBBMaxs->x;
      v36 = v23->m_flMatVal[0][0];
      v25[3].x = v23->m_flMatVal[0][0];
      v37 = v23->m_flMatVal[0][1];
      v30[9] = v37;
      v38 = v23->m_flMatVal[0][2];
      v31[9] = v38;
      v29[(v36 > 0.0) + 6] = v35 * v36;
      v29[(v36 <= 0.0) + 6] = v25[3].x * x;
      v39 = v25[3].y;
      v40 = &v29[(v39 > 0.0) + 6];
      v41 = &v29[(v39 <= 0.0) + 6];
      *v40 = (v39 * vecOBBMaxs->y) + *v40;
      *v41 = (v25[3].y * v26) + *v41;
      v42 = v25[3].z;
      v43 = &v29[(v42 > 0.0) + 6];
      v44 = &v29[(v42 <= 0.0) + 6];
      *v43 = (v42 * vecOBBMaxs->z) + *v43;
      *v44 = (v25[3].z * v27) + *v44;
      v45 = s_ExtIndices[v24][0];
      v29[6] = v29[6] - *(&p_m_Extents->x + v24 * 4);
      v29[7] = v29[7] + *(&p_m_Extents->x + v24 * 4);
      v46 = *(&p_m_Extents->x + v45);
      v47 = *(&p_m_Extents->x + s_ExtIndices[v24][1]);
      v25[6].y = -v38;
      v48 = s_MatIndices[v24][0];
      v25[6].z = v37;
      v49 = s_MatIndices[v24][1];
      v25[6].x = 0.0;
      v50 = -v37;
      v51 = matOBBToWorld->m_flMatVal[v48];
      v52 = matOBBToWorld->m_flMatVal[v49];
      v29[(-v38 > 0.0) + 12] = -v38 * vecOBBMaxs->y;
      v29[(-v38 <= 0.0) + 12] = v30[18] * v26;
      v53 = v31[18];
      v54 = &v29[(v53 > 0.0) + 12];
      *v54 = (v53 * vecOBBMaxs->z) + *v54;
      v55 = &v29[(v53 <= 0.0) + 12];
      v56 = v38 > 0.0;
      v57 = v38 > 0.0;
      *v55 = (v31[18] * v27) + *v55;
      v58 = (fabs(*v51) * v46) + (fabs(*v52) * v47);
      v29[12] = v29[12] - v58;
      v59 = v58 + v29[13];
      v25[9].x = v38;
      v60 = v38 * vecOBBMaxs->x;
      v25[9].y = 0.0;
      v29[13] = v59;
      v25[9].z = -v36;
      v29[v56 + 18] = v60;
      v29[1 - v57 + 18] = v25[9].x * x;
      v61 = v31[27];
      v62 = &v29[(v61 > 0.0) + 18];
      *v62 = (v61 * vecOBBMaxs->z) + *v62;
      v63 = &v29[(v61 <= 0.0) + 18];
      v64 = v50 > 0.0;
      v65 = v50 > 0.0;
      *v63 = (v31[27] * v27) + *v63;
      v66 = v29 + 24;
      v67 = v51[1];
      v68 = v52[1];
      v25[12].x = v50;
      v25[12].y = v36;
      v25[12].z = 0.0;
      v69 = v50 * vecOBBMaxs->x;
      v70 = (fabs(v67) * v46) + (fabs(v68) * v47);
      v71 = v29[18] - v70;
      v72 = v70 + v29[19];
      v29[18] = v71;
      v29[19] = v72;
      v29[v64 + 24] = v69;
      v29[1 - v65 + 24] = v25[12].x * x;
      v73 = v30[36];
      ++v24;
      ++v25;
      v29 += 2;
      v30 += 3;
      v31 += 3;
      v66[v73 > 0.0] = (v73 * vecOBBMaxs->y) + v66[v73 > 0.0];
      v66[v73 <= 0.0] = (v30[33] * v26) + v66[v73 <= 0.0];
      v74 = (fabs(v51[2]) * v46) + (fabs(v52[2]) * v47);
      v75 = v29[22] - v74;
      v76 = v74 + v29[23];
      v29[22] = v75;
      v29[23] = v76;
      if ( v24 == 3 )
        break;
      v23 = vecLocalRayEnd;
      vecLocalRayEnd += 4;
    }
    v77 = vecLocalRayOrigin.z;
    v78 = 1.0;
    v79 = 0;
    v80 = -1;
    v81 = -1;
    v82 = vecLocalRayOrigin.x;
    v83 = vecLocalRayDirection.z + vecLocalRayOrigin.z;
    v84 = vecLocalRayOrigin.y;
    v85 = vecLocalRayDirection.y;
    v86 = vecLocalRayDirection.x + vecLocalRayOrigin.x;
    pTracea->startsolid = 1;
    v87 = ppPlaneDist;
    vecLocalRayEnda = v83;
    v88 = pPlaneNormal;
    v89 = v85 + v84;
    v90 = -1.0;
    while ( 1 )
    {
      v91 = v88->y;
      v92 = 0;
      v93 = v88->z;
      v94 = 0;
      v95 = ((v82 * v88->x) + (v84 * v91)) + (v77 * v93);
      v96 = ((v88->x * v86) + (v91 * v89)) + (v93 * vecLocalRayEnda);
      v97 = -(v95 - *v87);
      v98 = v87[1];
      v99 = -(v96 - *v87);
      d1_4 = v95 - v98;
      d2_4 = v96 - v98;
      if ( v97 > 0.0 )
      {
LABEL_10:
        if ( v99 > 0.0 )
          return m_IsRay;
      }
      if ( v97 > 0.0 )
        break;
      while ( 1 )
      {
        if ( v99 > 0.0 )
          goto LABEL_12;
        if ( v92 == 1 )
          break;
LABEL_18:
        v97 = d1_4;
        v92 = 1;
        v99 = d2_4;
        v94 = 1;
        if ( d1_4 > 0.0 )
          goto LABEL_10;
      }
LABEL_21:
      ++v79;
      ++v88;
      v87 += 2;
      if ( v79 == 15 )
      {
        if ( v78 <= v90 || v90 < 0.0 )
        {
          startsolid = pTracea->startsolid;
          if ( startsolid )
          {
            v114 = pTracea->startpos.y;
            pTracea->plane.type = 0;
            v115 = pTracea->startpos.x;
            m_IsRay = startsolid;
            pTracea->endpos.y = v114;
            v116 = pTracea->startpos.z;
            pTracea->fraction = 0.0;
            pTracea->endpos.x = v115;
            pTracea->endpos.z = v116;
            pTracea->contents = 1;
            pTracea->plane.dist = v115;
            pTracea->plane.normal.x = 1.0;
            pTracea->plane.normal.y = 0.0;
            pTracea->plane.normal.z = 0.0;
          }
        }
        else
        {
          pTracea->fraction = v90;
          v102 = &pPlaneNormal[3 * v81];
          v103 = v102->x;
          v104 = v102->y;
          v105 = (ray->m_Delta.x * v90) + pTracea->startpos.x;
          temp.normal.x = v102->x;
          v106 = v102->z;
          temp.normal.y = v104;
          pTracea->endpos.x = v105;
          v107 = ray->m_Delta.y;
          temp.normal.z = v106;
          pTracea->endpos.y = (v107 * v90) + pTracea->startpos.y;
          v108 = ppPlaneDist[2 * v81 + v80];
          v109 = v90 * ray->m_Delta.z;
          pTracea->contents = 1;
          temp.dist = v108;
          pTracea->endpos.z = v109 + pTracea->startpos.z;
          if ( v80 == 0 )
          {
            temp.normal.x = -v103;
            temp.normal.y = -v104;
            temp.normal.z = -v106;
            temp.dist = -v108;
          }
          v110 = matOBBToWorld->m_flMatVal[2][3];
          v111 = matOBBToWorld->m_flMatVal[1][3];
          temp.type = 3;
          v112 = matOBBToWorld->m_flMatVal[0][3];
          in1[2] = v110;
          in1[1] = v111;
          in1[0] = v112;
          VectorIRotate(in1, matOBBToWorld, out);
          VectorIRotate(&temp.normal.x, matOBBToWorld, &pTracea->plane.normal.x);
          m_IsRay = v122;
          pTracea->plane.dist = ((((pTracea->plane.normal.x * pTracea->plane.normal.x)
                                 + (pTracea->plane.normal.y * pTracea->plane.normal.y))
                                + (pTracea->plane.normal.z * pTracea->plane.normal.z))
                               * temp.dist)
                              - (((pTracea->plane.normal.x * out[0]) + (pTracea->plane.normal.y * out[1]))
                               + (pTracea->plane.normal.z * out[2]));
        }
        return m_IsRay;
      }
    }
LABEL_12:
    if ( v97 > 0.0 )
      pTracea->startsolid = 0;
    v100 = 1.0 / (v97 - v99);
    if ( v97 <= v99 )
    {
      v78 = fminf((v97 + flTolerance) * (1.0 / (v97 - v99)), v78);
    }
    else
    {
      v101 = fmaxf(0.0, v97 - flTolerance);
      if ( (v101 * v100) > v90 )
      {
        v80 = v94;
        v81 = v79;
        v90 = v101 * v100;
      }
    }
    if ( v92 == 1 )
      goto LABEL_21;
    goto LABEL_18;
  }
  return m_IsRay;
}


// IntersectRayWithOBB  (line 1377, @0x0000000002418040, libserver.so)  // inlines: VectorAdd, operator==
// calls: AngleMatrix, IntersectRayWithOBB, IntersectRayWithBox
_BOOL8 __fastcall IntersectRayWithOBB(
        const Ray_t *const ray,
        const Vector *const vecBoxOrigin,
        const QAngle *const angBoxRotation,
        const Vector *const vecOBBMins,
        const Vector *const vecOBBMaxs,
        float flTolerance,
        CBaseTrace *pTrace)
{
  float y; // xmm2_4
  float z; // xmm4_4
  vec_t v13; // xmm3_4
  float v14; // xmm1_4
  vec_t v15; // xmm1_4
  vec_t v16; // xmm2_4
  float v17; // xmm1_4
  vec_t v18; // xmm4_4
  vec_t v19; // xmm1_4
  Vector vecWorldMins; // [rsp+20h] [rbp-60h] BYREF
  Vector vecWorldMaxs; // [rsp+30h] [rbp-50h] BYREF

  if ( vec3_angle.x == angBoxRotation->x && vec3_angle.y == angBoxRotation->y && vec3_angle.z == angBoxRotation->z )
  {
    y = vecBoxOrigin->y;
    z = vecOBBMins->z;
    v13 = vecBoxOrigin->x + vecOBBMaxs->x;
    vecWorldMins.x = vecOBBMins->x + vecBoxOrigin->x;
    v14 = vecOBBMins->y;
    vecWorldMaxs.x = v13;
    v15 = v14 + y;
    v16 = y + vecOBBMaxs->y;
    vecWorldMins.y = v15;
    v17 = vecBoxOrigin->z;
    vecWorldMaxs.y = v16;
    v18 = z + v17;
    v19 = v17 + vecOBBMaxs->z;
    vecWorldMins.z = v18;
    vecWorldMaxs.z = v19;
    return IntersectRayWithBox(ray, &vecWorldMins, &vecWorldMaxs, flTolerance, pTrace, 0);
  }
  else if ( ray->m_IsRay )
  {
    return IntersectRayWithOBB(
             &ray->m_Start,
             &ray->m_Delta,
             vecBoxOrigin,
             angBoxRotation,
             vecOBBMins,
             vecOBBMaxs,
             flTolerance,
             pTrace);
  }
  else
  {
    AngleMatrix(angBoxRotation, vecBoxOrigin, &vecWorldMaxs);
    return IntersectRayWithOBB(ray, &vecWorldMaxs, vecOBBMins, vecOBBMaxs, flTolerance, pTrace);
  }
}


// GetNonMajorAxes  (line 1402, @0x0000000002418190, libserver.so)  // inlines: FloatMakePositive
// callers: PointInQuadToBarycentric
void __fastcall GetNonMajorAxes(const Vector *const vNormal, Vector2D *const axes)
{
  float v2; // xmm1_4
  float v3; // xmm0_4

  axes->x = 0.0;
  axes->y = 1.0;
  v2 = fabs(vNormal->x);
  v3 = fabs(vNormal->y);
  if ( v2 <= v3 )
  {
    if ( v3 > fabs(vNormal->z) )
      axes->y = 2.0;
  }
  else if ( v2 > fabs(vNormal->z) )
  {
    axes->x = 1.0;
    axes->y = 2.0;
  }
}


// QuadWithParallelEdges  (line 1428, @0x0000000002418200, libserver.so)  // inlines: Init, Ray_t, VectorAligned, VectorMultiply, operator*, operator=
// calls: IntersectRayWithRay
// callers: PointInQuadToBarycentric
_BOOL8 __fastcall QuadWithParallelEdges(
        const Vector *const vecOrigin,
        const Vector *const vecU,
        float lengthU,
        const Vector *const vecV,
        float lengthV,
        const Vector *const pt,
        Vector2D *const vecUV)
{
  vec_t z; // xmm3_4
  vec_t x; // xmm5_4
  vec_t y; // xmm4_4
  vec_t v13; // xmm3_4
  vec_t v14; // xmm5_4
  float v15; // xmm4_4
  vec_t v16; // xmm3_4
  vec_t v17; // xmm5_4
  vec_t v18; // xmm4_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  vec_t v23; // xmm5_4
  vec_t v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm4_4
  vec_t v28; // xmm3_4
  vec_t v29; // xmm6_4
  vec_t v30; // xmm0_4
  _BOOL8 result; // rax
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v36; // [rsp+2Ch] [rbp-E0h] BYREF
  float v37; // [rsp+30h] [rbp-DCh] BYREF
  vec_t s; // [rsp+34h] [rbp-D8h] BYREF
  vec_t t; // [rsp+38h] [rbp-D4h]
  Ray_t rayAxis; // [rsp+3Ch] [rbp-D0h] BYREF
  Ray_t rayPt; // [rsp+8Ch] [rbp-80h]

  z = vecOrigin->z;
  rayAxis.m_Start.y = 0.0;
  x = vecOrigin->x;
  rayAxis.m_Delta.y = 0.0;
  y = vecOrigin->y;
  rayAxis.m_Start.x = z;
  v13 = vecU->z;
  s = x;
  v14 = vecU->x;
  t = y;
  rayAxis.m_Delta.x = v13;
  v15 = vecU->y;
  v16 = pt->z;
  rayAxis.m_Start.z = v14;
  v17 = pt->x;
  rayAxis.m_StartOffset.y = 0.0;
  rayAxis.m_Extents.y = 0.0;
  rayPt.m_Start.y = 0.0;
  rayPt.m_Delta.y = 0.0;
  rayPt.m_StartOffset.y = 0.0;
  rayPt.m_Extents.y = 0.0;
  rayAxis.m_Start.w = v15;
  v18 = pt->y;
  LOBYTE(rayAxis.m_Extents.w) = 1;
  *(&rayAxis.m_IsSwept + 3) = v17;
  v19 = vecV->y;
  rayPt.m_Start.x = v16;
  v20 = vecV->z;
  *(&rayAxis.m_IsSwept + 7) = v18;
  v21 = -(10.0 * lengthV);
  v22 = v19 * v21;
  LOBYTE(rayPt.m_Extents.w) = 1;
  v23 = v20 * v21;
  v24 = v21 * vecV->x;
  rayPt.m_Start.w = v22;
  rayPt.m_Delta.x = v23;
  rayPt.m_Start.z = v24;
  IntersectRayWithRay(&s, (&rayAxis.m_IsSwept + 3), &v37, &v36);
  v25 = -(lengthU * 10.0);
  rayAxis.m_Delta.y = 0.0;
  rayPt.m_Delta.y = 0.0;
  vecUV->x = v37 / lengthU;
  v26 = vecU->y;
  rayAxis.m_Delta.x = vecV->z;
  v27 = v26 * v25;
  v28 = vecU->z * v25;
  v29 = vecV->x;
  v30 = v25 * vecU->x;
  rayAxis.m_Start.w = vecV->y;
  rayAxis.m_Start.z = v29;
  rayPt.m_Start.w = v27;
  rayPt.m_Delta.x = v28;
  rayPt.m_Start.z = v30;
  IntersectRayWithRay(&s, (&rayAxis.m_IsSwept + 3), &v37, &v36);
  result = 0;
  v32 = v37 / lengthV;
  v33 = vecUV->x;
  vecUV->y = v37 / lengthV;
  if ( v33 >= 0.0 && v33 <= 1.0 && v32 >= 0.0 )
    return v32 <= 1.0;
  return result;
}


// ResolveQuadratic  (line 1471, @0x0000000002418480, libserver.so)  // inlines: FloatMakePositive, operator[]
// callers: PointInQuadToBarycentric
void __fastcall ResolveQuadratic(
        double tPlus,
        double tMinus,
        Vector axisU0,
        Vector axisU1,
        const Vector axisV0,
        int projU,
        double *const s,
        double *const t,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        Vector axisV1,
        Vector axisOrigin,
        Vector pt)
{
  __int64 v14; // rdi
  float v15; // xmm3_4
  double v16; // xmm3_8
  double v17; // xmm6_8
  __m128d v18; // xmm5
  __m128d v19; // xmm4
  double v20; // xmm6_8
  double v21; // xmm5_8
  double v22; // xmm8_8
  double v23; // xmm7_8
  double v24; // xmm4_8
  double v25; // xmm2_8
  Vector axisV0a; // [rsp+0h] [rbp-30h]
  Vector axisU1a; // [rsp+10h] [rbp-20h]
  Vector axisU0a; // [rsp+20h] [rbp-10h]

  v14 = 4LL * projU;
  axisU0a = axisU0;
  axisU1a = axisU1;
  *&axisV0a.x = *&axisV0.x;
  v15 = *(&axisU1a.x + v14);
  axisV0a.z = axisV0.z;
  v16 = v15;
  v18 = 0x3FF0000000000000uLL;
  v17 = *(&axisU0a.x + v14);
  v18.m128d_f64[0] = (1.0 - tPlus) * v17 + v16 * tPlus;
  v19 = 0x3FF0000000000000uLL;
  v19.m128d_f64[0] = (1.0 - tMinus) * v17 + v16 * tMinus;
  if ( fabs(_mm_movedup_pd(v18).m128d_f64[0]) < 0.00001 )
    v20 = -99999.0;
  else
    v20 = ((*(&pt.x + v14) - *(&axisOrigin.x + v14)) - *(&axisV0a.x + v14) * tPlus) / v18.m128d_f64[0];
  if ( fabs(_mm_movedup_pd(v19).m128d_f64[0]) < 0.00001 )
    v21 = -99999.0;
  else
    v21 = ((*(&pt.x + v14) - *(&axisOrigin.x + v14)) - *(&axisV0a.x + v14) * tMinus) / v19.m128d_f64[0];
  if ( tPlus >= 0.0 && tPlus <= 1.0 && v20 >= 0.0 && v20 <= 1.0 )
    goto LABEL_18;
  if ( tMinus >= 0.0 && tMinus <= 1.0 && v21 >= 0.0 && v21 <= 1.0 )
    goto LABEL_23;
  v22 = v20;
  if ( v20 >= 1.0 )
    v22 = v20 - 1.0;
  v23 = tPlus;
  if ( tPlus >= 1.0 )
    v23 = tPlus - 1.0;
  v24 = v21;
  if ( v21 >= 1.0 )
    v24 = v21 - 1.0;
  v25 = tMinus < 1.0 ? tMinus : tMinus - 1.0;
  if ( fmax(fabs(v23), fabs(v22)) > fmax(fabs(v25), fabs(v24)) )
  {
LABEL_23:
    *s = v21;
    *t = tMinus;
  }
  else
  {
LABEL_18:
    *s = v20;
    *t = tPlus;
  }
}


// PointInQuadToBarycentric  (line 1546, @0x00000000024186d0, libserver.so)  // inlines: Cross, CrossProduct, Dot, DotProduct, FloatMakePositive, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=, operator[]
// calls: VectorNormalize, GetNonMajorAxes, QuadWithParallelEdges, ResolveQuadratic, sqrt
// callers: CTriangulatedPolygon::ComputeTextureCoordinateForPoint
QuadBarycentricRetval_t __fastcall PointInQuadToBarycentric(
        const Vector *const v1,
        const Vector *const v2,
        const Vector *const v3,
        const Vector *const v4,
        const Vector *const point,
        Vector2D *const uv)
{
  float x; // xmm14_4
  float v10; // xmm5_4
  float y; // xmm7_4
  float z; // xmm0_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm15_4
  float v16; // xmm4_4
  float v17; // xmm9_4
  float v18; // xmm8_4
  float v19; // xmm2_4
  vec_t v20; // xmm3_4
  vec_t v21; // xmm2_4
  float v22; // xmm10_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm7_4
  float v28; // xmm6_4
  char v29; // r13
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  float v34; // xmm5_4
  __int64 v35; // rax
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm8_4
  float v39; // xmm1_4
  float v40; // xmm10_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  double v43; // xmm7_8^8
  double v44; // xmm6_8^8
  float v45; // xmm0_4
  float v46; // xmm8_4
  double v47; // xmm1_8
  double v48; // xmm0_8
  double v49; // xmm2_8
  double v50; // xmm3_8
  __int64 v51; // rax
  double v52; // xmm0_8
  float v53; // xmm0_4
  float v54; // xmm4_4
  float v55; // xmm0_4
  float v57; // [rsp+30h] [rbp-150h]
  float lengthV; // [rsp+34h] [rbp-14Ch]
  float lengthV_4; // [rsp+38h] [rbp-148h]
  float v60; // [rsp+3Ch] [rbp-144h]
  float lengthU; // [rsp+40h] [rbp-140h]
  float v64; // [rsp+50h] [rbp-130h]
  float negB; // [rsp+68h] [rbp-118h]
  float A; // [rsp+70h] [rbp-110h]
  Vector2D projAxes; // [rsp+80h] [rbp-100h] BYREF
  double s; // [rsp+90h] [rbp-F0h] BYREF
  double t; // [rsp+98h] [rbp-E8h] BYREF
  Vector vNormal; // [rsp+A0h] [rbp-E0h] BYREF
  Vector vecUAvg; // [rsp+B0h] [rbp-D0h] BYREF
  Vector vecVAvg; // [rsp+C0h] [rbp-C0h] BYREF
  Vector axisU[2]; // [rsp+D0h] [rbp-B0h]
  Vector axisV[2]; // [rsp+F0h] [rbp-90h]
  Vector axisUNorm[2]; // [rsp+110h] [rbp-70h] BYREF
  Vector axisVNorm[2]; // [rsp+130h] [rbp-50h] BYREF
  Vector lengthU_4; // 0:^44.12
  Vector v80; // 0:^58.12

  x = v2->x;
  v10 = v1->x;
  y = v2->y;
  z = v2->z;
  v13 = v3->x;
  v14 = v3->y;
  v15 = v3->z;
  axisUNorm[0].x = v2->x - v1->x;
  v16 = v1->y;
  v17 = v4->x;
  axisU[0].x = axisUNorm[0].x;
  v18 = v4->y;
  lengthU_4.x = axisUNorm[0].x;
  v19 = v4->z;
  v20 = z - v1->z;
  axisUNorm[0].y = y - v16;
  axisUNorm[0].z = v20;
  axisU[0].y = y - v16;
  lengthU_4.y = y - v16;
  axisU[0].z = v20;
  lengthU_4.z = v20;
  lengthV_4 = v15 - v19;
  axisUNorm[1].x = v13 - v17;
  axisUNorm[1].y = v14 - v18;
  axisUNorm[1].z = lengthV_4;
  axisU[1].x = v13 - v17;
  v64 = v13 - v17;
  v21 = v19 - v1->z;
  axisU[1].y = v14 - v18;
  axisU[1].z = lengthV_4;
  axisVNorm[0].x = v17 - v10;
  axisVNorm[0].y = v18 - v16;
  axisVNorm[0].z = v21;
  axisV[0].x = v17 - v10;
  v80.x = v17 - v10;
  axisV[0].y = v18 - v16;
  v80.y = v18 - v16;
  axisV[0].z = v21;
  v80.z = v21;
  axisVNorm[1].x = v13 - x;
  axisV[1].x = v13 - x;
  axisVNorm[1].y = v14 - y;
  axisVNorm[1].z = v15 - z;
  axisV[1].y = v14 - y;
  negB = v14 - y;
  axisV[1].z = v15 - z;
  A = v15 - z;
  lengthU = VectorNormalize(axisUNorm);
  v60 = VectorNormalize(&axisUNorm[1]);
  lengthV = VectorNormalize(axisVNorm);
  v57 = VectorNormalize(&axisVNorm[1]);
  v22 = v13 - x;
  v23 = v80.z;
  v24 = v80.x;
  v25 = lengthU_4.y;
  if ( (((axisUNorm[0].x * axisUNorm[1].x) + (axisUNorm[0].y * axisUNorm[1].y)) + (axisUNorm[0].z * axisUNorm[1].z)) <= 0.99000001
    || fabs(lengthU - v60) >= 0.1 )
  {
    if ( (((axisVNorm[0].x * axisVNorm[1].x) + (axisVNorm[0].y * axisVNorm[1].y)) + (axisVNorm[0].z * axisVNorm[1].z)) > 0.99000001 )
    {
      axisV[0] = lengthU_4;
      v26 = v80.x;
      v29 = 1;
      axisV[1].z = lengthV_4;
      v27 = v80.z;
      axisU[0] = v80;
      v24 = lengthU_4.x;
      v28 = lengthU_4.y;
      v25 = v80.y;
      v23 = lengthU_4.z;
      axisV[1].x = v64;
      axisV[1].y = v14 - v18;
      axisU[1].x = v22;
      axisU[1].y = negB;
      axisU[1].z = A;
    }
    else
    {
      v26 = lengthU_4.x;
      v27 = lengthU_4.z;
      v28 = v80.y;
      v29 = 0;
    }
    vNormal.x = (v25 * v23) - (v27 * v28);
    vNormal.y = (v27 * v24) - (v23 * v26);
    vNormal.z = (v26 * v28) - (v24 * v25);
    GetNonMajorAxes(&vNormal, &projAxes);
    v32 = projAxes.x;
    v33 = 4LL * v32;
    v34 = *(&axisU[0].x + v33);
    v35 = 4LL * projAxes.y;
    v36 = *(&axisU[0].x + v35);
    if ( fabs(v36) <= fabs(v34) )
    {
      v37 = *(&axisU[0].x + projAxes.y);
    }
    else
    {
      projAxes.x = projAxes.y;
      v33 = 4LL * projAxes.y;
      v34 = v36;
      projAxes.y = v32;
      v32 = 4LL * v32;
      v37 = *(&axisU[0].x + v32);
      v35 = v32;
    }
    v38 = *(&axisV[0].x + v33);
    s = 0.0;
    v39 = *(&axisV[0].x + v35);
    t = 0.0;
    v40 = *(&point->x + v35);
    v41 = *(&axisU[1].x + v35);
    v42 = *(&axisU[1].x + v33);
    v43 = (v38 * v37);
    v44 = (v39 * v34);
    v45 = ((v38 * v37) - (v39 * v34)) - (v38 * v41);
    v46 = *(&point->x + v33);
    v47 = (v45 + (v39 * v42));
    v48 = ((((*(&v1->x + v35) * v34) - (v34 * v40)) - (*(&v1->x + v33) * v37)) + (v37 * v46));
    v49 = v48 - (*(&v1->x + v35) * v42) + (v42 * v40) + (*(&v1->x + v33) * v41) - (v41 * v46) + v43 - v44;
    if ( v47 > -0.1 && v47 < 0.1 )
    {
      vecUAvg.y = (axisUNorm[0].y + axisUNorm[1].y) * 0.5;
      vecUAvg.z = (axisUNorm[0].z + axisUNorm[1].z) * 0.5;
      vecUAvg.x = (axisUNorm[0].x + axisUNorm[1].x) * 0.5;
      vecVAvg.y = (axisVNorm[0].y + axisVNorm[1].y) * 0.5;
      vecVAvg.z = (axisVNorm[0].z + axisVNorm[1].z) * 0.5;
      vecVAvg.x = (axisVNorm[0].x + axisVNorm[1].x) * 0.5;
      LODWORD(v51) = QuadWithParallelEdges(
                       v1,
                       &vecUAvg,
                       (lengthU + v60) * 0.5,
                       &vecVAvg,
                       0.5 * (lengthV + v57),
                       point,
                       uv);
    }
    else
    {
      v50 = v49 * v49 - 4.0 * v47 * v48;
      if ( v50 >= 0.0 )
      {
        v52 = sqrt(v50);
        ResolveQuadratic(
          (v52 + v49) / (v47 + v47),
          (v49 - v52) / (v47 + v47),
          axisU[0],
          axisU[1],
          axisV[0],
          projAxes.x,
          &s,
          &t,
          v32,
          v30,
          v31,
          axisV[1],
          *v1,
          *point);
        if ( v29 != 0 )
        {
          v53 = t;
          v54 = s;
        }
        else
        {
          v53 = s;
          v54 = t;
        }
        uv->x = v53;
        uv->y = v54;
        LODWORD(v51) = 0;
        if ( v53 >= 0.0 && v53 <= 1.0 )
        {
          v55 = uv->y;
          if ( v55 >= 0.0 )
            return v55 <= 1.0;
        }
      }
      else
      {
        uv->x = -99999.0;
        LODWORD(v51) = 2;
        uv->y = -99999.0;
      }
    }
  }
  else
  {
    LODWORD(v51) = QuadWithParallelEdges(v1, axisUNorm, lengthU, axisVNorm, lengthV, point, uv);
  }
  return v51;
}


// PointInQuadFromBarycentric  (line 1732, @0x0000000002418f40, libserver.so)  // inlines: VectorLerp, operator[]
void __fastcall PointInQuadFromBarycentric(
        const Vector *const v1,
        const Vector *const v2,
        const Vector *const v3,
        const Vector *const v4,
        const Vector2D *const uv,
        Vector *const point)
{
  float y; // xmm6_4
  float x; // xmm8_4
  float v8; // xmm7_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm0_4

  y = uv->y;
  x = v2->x;
  v8 = uv->x;
  v9 = ((v4->x - v1->x) * y) + v1->x;
  v10 = ((v4->y - v1->y) * y) + v1->y;
  v11 = ((v4->z - v1->z) * y) + v1->z;
  v12 = v3->x;
  v13 = (((v3->z - v2->z) * y) + v2->z) - v11;
  point->y = (((((v3->y - v2->y) * y) + v2->y) - v10) * uv->x) + v10;
  point->z = (v13 * v8) + v11;
  point->x = (((((v12 - x) * y) + x) - v9) * v8) + v9;
}


// TexCoordInQuadFromBarycentric  (line 1748, @0x0000000002419010, libserver.so)  // inlines: Vector2DLerp, operator[]
// callers: CTriangulatedPolygon::ComputeTextureCoordinateForPoint
void __fastcall TexCoordInQuadFromBarycentric(
        const Vector2D *const v1,
        const Vector2D *const v2,
        const Vector2D *const v3,
        const Vector2D *const v4,
        const Vector2D *const uv,
        Vector2D *const texCoord)
{
  float y; // xmm4_4
  float x; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4

  y = uv->y;
  x = v2->x;
  v8 = uv->x;
  v9 = ((v4->x - v1->x) * y) + v1->x;
  v10 = ((v4->y - v1->y) * y) + v1->y;
  v11 = v3->x;
  texCoord->y = (((((v3->y - v2->y) * y) + v2->y) - v10) * uv->x) + v10;
  texCoord->x = (((((v11 - x) * y) + x) - v9) * v8) + v9;
}


// ComputePointFromBarycentric  (line 1766, @0x00000000024190a0, libserver.so)  // inlines: VectorMA, VectorSubtract
void __fastcall ComputePointFromBarycentric(
        const Vector *const v0,
        const Vector *const v1,
        const Vector *const v2,
        float u,
        float v,
        Vector *const pt)
{
  float y; // xmm7_4
  float z; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm5_4
  float x; // xmm8_4
  float v11; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  vec_t v14; // xmm4_4
  vec_t v15; // xmm3_4
  float v16; // xmm2_4

  y = v0->y;
  z = v0->z;
  v8 = v1->y - y;
  v9 = v2->y - y;
  x = v0->x;
  v11 = v1->z - z;
  v12 = v2->z - z;
  v13 = v2->x;
  v14 = ((v1->x - x) * u) + x;
  pt->x = v14;
  v15 = (v8 * u) + v0->y;
  pt->y = v15;
  v16 = (v11 * u) + v0->z;
  pt->x = ((v13 - x) * v) + v14;
  pt->y = (v9 * v) + v15;
  pt->z = v16 + (v12 * v);
}


// ComputePointFromBarycentric  (line 1776, @0x0000000002419140, libserver.so)  // inlines: Vector2DMA, Vector2DSubtract
void __fastcall ComputePointFromBarycentric(
        const Vector2D *const v0,
        const Vector2D *const v1,
        const Vector2D *const v2,
        float u,
        float v,
        Vector2D *const pt)
{
  float y; // xmm3_4
  float x; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  vec_t v11; // xmm3_4
  float v12; // xmm2_4

  y = v0->y;
  x = v0->x;
  v8 = v1->y - y;
  v9 = v2->y - y;
  v10 = v2->x;
  v11 = ((v1->x - x) * u) + x;
  pt->x = v11;
  v12 = (v8 * u) + v0->y;
  pt->x = ((v10 - x) * v) + v11;
  pt->y = v12 + (v9 * v);
}


// ComputeCenterMatrix  (line 1791, @0x0000000002414280, libserver.so)  // inlines: MatrixSetColumn, SetColumn, VectorAdd, VectorRotate, operator*=, operator+=
// calls: AngleMatrix, VectorRotate
// callers: ComputeSeparatingPlane, IsRayIntersectingOBB
void __fastcall ComputeCenterMatrix(
        const Vector *const origin,
        const QAngle *const angles,
        const Vector *const mins,
        const Vector *const maxs,
        matrix3x4_t *const matrix)
{
  vec_t v7; // xmm1_4
  vec_t v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  Vector centroid; // [rsp+0h] [rbp-30h] BYREF
  Vector worldCentroid; // [rsp+10h] [rbp-20h] BYREF

  v7 = (mins->y + maxs->y) * 0.5;
  v8 = (mins->z + maxs->z) * 0.5;
  centroid.x = (mins->x + maxs->x) * 0.5;
  centroid.y = v7;
  centroid.z = v8;
  AngleMatrix(angles, matrix);
  VectorRotate(&centroid.x, matrix, &worldCentroid.x);
  v9 = worldCentroid.z + origin->z;
  v10 = worldCentroid.x + origin->x;
  matrix->m_flMatVal[1][3] = worldCentroid.y + origin->y;
  matrix->m_flMatVal[2][3] = v9;
  matrix->m_flMatVal[0][3] = v10;
}


// ComputeSeparatingPlane  (line 1844, @0x0000000002414330, libserver.so)  // inlines: ComputeAbsMatrix, DotProduct, FloatMakePositive, GetColumn, MatrixColumnDotProduct, MatrixGetColumn, MatrixRowDotProduct, VectorCopy, operator=
// calls: ConcatTransforms, CrossProduct
// callers: ComputeSeparatingPlane, IsRayIntersectingOBB
__int64 __fastcall ComputeSeparatingPlane(
        const matrix3x4_t *const worldToBox1,
        const matrix3x4_t *const box2ToWorld,
        const Vector *const box1Size,
        const Vector *const box2Size,
        float tolerance,
        cplane_t *pPlane)
{
  __m128 v11; // xmm9
  __m128 v12; // xmm7
  float y; // xmm2_4
  float x; // xmm1_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  __m128i x_low; // xmm15
  float z; // xmm3_4
  float v19; // xmm14_4
  __m128i v20; // xmm4
  __m128 v21; // xmm10
  __m128i v22; // xmm13
  __m128 v23; // xmm13
  __m128i v24; // xmm15
  unsigned int v25; // edx
  __m128i v26; // xmm15
  __m128i v27; // xmm13
  __m128i v28; // xmm15
  unsigned int v29; // edx
  __m128i v30; // xmm15
  __m128 v31; // xmm15
  __m128i v32; // xmm12
  __m128i v33; // xmm15
  __m128i v34; // xmm13
  __m128i v35; // xmm12
  __m128i v36; // xmm13
  __m128i v37; // xmm13
  __m128i v38; // xmm12
  __m128i v39; // xmm13
  __m128i v40; // xmm13
  __m128i v41; // xmm12
  __m128i v42; // xmm13
  __m128i v43; // xmm13
  __m128i v44; // xmm12
  __m128i v45; // xmm13
  __m128i v46; // xmm13
  __m128i v47; // xmm15
  __m128i v48; // xmm13
  __m128i v49; // xmm13
  __m128i v50; // xmm15
  __m128i v51; // xmm13
  __m128 v52; // xmm15
  __m128i v53; // xmm13
  __m128i v54; // xmm15
  __m128i v55; // xmm12
  __m128i v56; // xmm7
  __m128i v57; // xmm7
  __m128i v58; // xmm9
  __int64 result; // rax
  __m128i v60; // xmm10
  vec_t v61; // xmm0_4
  vec_t v62; // xmm1_4
  vec_t v63; // xmm2_4
  vec_t v64; // xmm2_4
  vec_t v65; // xmm0_4
  vec_t v66; // xmm2_4
  vec_t v67; // xmm0_4
  __m128i v68; // xmm13
  __m128i v69; // xmm12
  __m128i v70; // xmm13
  vec_t v71; // xmm0_4
  vec_t v72; // xmm1_4
  vec_t v73; // xmm2_4
  vec_t v74; // xmm2_4
  vec_t v75; // xmm0_4
  vec_t v76; // xmm0_4
  vec_t v77; // xmm1_4
  vec_t v78; // xmm2_4
  float v79; // [rsp+4h] [rbp-ACh]
  float v80; // [rsp+10h] [rbp-A0h]
  float v81; // [rsp+14h] [rbp-9Ch]
  float v82; // [rsp+2Ch] [rbp-84h]
  Vector tmp; // [rsp+40h] [rbp-70h] BYREF
  matrix3x4_t box2ToBox1; // [rsp+50h] [rbp-60h] BYREF

  ConcatTransforms(worldToBox1, box2ToWorld, &box2ToBox1);
  v11 = LODWORD(box2ToBox1.m_flMatVal[0][1]);
  v12 = LODWORD(box2ToBox1.m_flMatVal[0][0]);
  y = box2Size->y;
  x = box2Size->x;
  v15 = fabs(box2ToBox1.m_flMatVal[0][1]);
  v16 = fabs(box2ToBox1.m_flMatVal[0][0]);
  x_low = LODWORD(box2Size->x);
  z = box2Size->z;
  v19 = fabs(box2ToBox1.m_flMatVal[0][2]);
  v20 = LODWORD(box1Size->x);
  v21 = LODWORD(box2ToBox1.m_flMatVal[1][3]);
  v22 = _mm_and_ps(LODWORD(box2ToBox1.m_flMatVal[0][3]), 0x7FFFFFFFu);
  *v22.m128i_i32 = *v22.m128i_i32 + tolerance;
  *x_low.m128i_i32 = (((*x_low.m128i_i32 * v16) + (y * v15)) + (z * v19)) + *v20.m128i_i32;
  if ( _mm_cvtsi128_si32(v22) > _mm_cvtsi128_si32(x_low) )
  {
    pPlane->normal.x = worldToBox1->m_flMatVal[0][0];
    pPlane->normal.y = worldToBox1->m_flMatVal[0][1];
    pPlane->normal.z = worldToBox1->m_flMatVal[0][2];
    return 1;
  }
  v23 = _mm_and_ps(LODWORD(box2ToBox1.m_flMatVal[1][0]), 0x7FFFFFFFu);
  v80 = v23.m128_f32[0];
  v82 = box1Size->y;
  v24 = _mm_and_ps(LODWORD(box2ToBox1.m_flMatVal[1][3]), 0x7FFFFFFFu);
  *v24.m128i_i32 = *v24.m128i_i32 + tolerance;
  v25 = _mm_cvtsi128_si32(v24);
  v26 = v23;
  *v26.m128i_i32 = (((v23.m128_f32[0] * x) + (fabs(box2ToBox1.m_flMatVal[1][1]) * y))
                  + (fabs(box2ToBox1.m_flMatVal[1][2]) * z))
                 + v82;
  if ( v25 > _mm_cvtsi128_si32(v26) )
  {
    result = 1;
    pPlane->normal.x = worldToBox1->m_flMatVal[1][0];
    pPlane->normal.y = worldToBox1->m_flMatVal[1][1];
    pPlane->normal.z = worldToBox1->m_flMatVal[1][2];
    return result;
  }
  v27 = _mm_and_ps(LODWORD(box2ToBox1.m_flMatVal[2][0]), 0x7FFFFFFFu);
  v79 = *v27.m128i_i32;
  v81 = box1Size->z;
  v28 = _mm_and_ps(LODWORD(box2ToBox1.m_flMatVal[2][3]), 0x7FFFFFFFu);
  *v28.m128i_i32 = *v28.m128i_i32 + tolerance;
  v29 = _mm_cvtsi128_si32(v28);
  v30 = v27;
  *v30.m128i_i32 = (((*v27.m128i_i32 * x) + (fabs(box2ToBox1.m_flMatVal[2][1]) * y))
                  + (fabs(box2ToBox1.m_flMatVal[2][2]) * z))
                 + v81;
  if ( v29 > _mm_cvtsi128_si32(v30) )
  {
    pPlane->normal.x = worldToBox1->m_flMatVal[2][0];
    pPlane->normal.y = worldToBox1->m_flMatVal[2][1];
    pPlane->normal.z = worldToBox1->m_flMatVal[2][2];
    return 1;
  }
  v31 = LODWORD(box2ToBox1.m_flMatVal[0][3]);
  v31.m128_f32[0] = ((box2ToBox1.m_flMatVal[0][3] * box2ToBox1.m_flMatVal[0][0])
                   + (box2ToBox1.m_flMatVal[1][0] * box2ToBox1.m_flMatVal[1][3]))
                  + (box2ToBox1.m_flMatVal[2][3] * box2ToBox1.m_flMatVal[2][0]);
  v32 = LODWORD(box1Size->x);
  v33 = _mm_and_ps(v31, 0x7FFFFFFFu);
  *v33.m128i_i32 = *v33.m128i_i32 + tolerance;
  *v32.m128i_i32 = (((*v20.m128i_i32 * v16) + (v82 * v80)) + (v81 * *v27.m128i_i32)) + x;
  if ( _mm_cvtsi128_si32(v33) > _mm_cvtsi128_si32(v32) )
  {
    v64 = box2ToWorld->m_flMatVal[1][0];
    v65 = box2ToWorld->m_flMatVal[0][0];
    pPlane->normal.z = box2ToWorld->m_flMatVal[2][0];
    pPlane->normal.y = v64;
    pPlane->normal.x = v65;
    return 1;
  }
  v34 = LODWORD(box2ToBox1.m_flMatVal[0][3]);
  *v34.m128i_i32 = ((box2ToBox1.m_flMatVal[0][3] * box2ToBox1.m_flMatVal[0][1])
                  + (box2ToBox1.m_flMatVal[1][1] * box2ToBox1.m_flMatVal[1][3]))
                 + (box2ToBox1.m_flMatVal[2][3] * box2ToBox1.m_flMatVal[2][1]);
  v35 = LODWORD(box1Size->x);
  v36 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v34) & 0x7FFFFFFF);
  *v36.m128i_i32 = *v36.m128i_i32 + tolerance;
  *v35.m128i_i32 = (((*v20.m128i_i32 * v15) + (v82 * fabs(box2ToBox1.m_flMatVal[1][1])))
                  + (v81 * fabs(box2ToBox1.m_flMatVal[2][1])))
                 + y;
  if ( _mm_cvtsi128_si32(v36) > _mm_cvtsi128_si32(v35) )
  {
    v66 = box2ToWorld->m_flMatVal[1][1];
    v67 = box2ToWorld->m_flMatVal[0][1];
    pPlane->normal.z = box2ToWorld->m_flMatVal[2][1];
    pPlane->normal.y = v66;
    pPlane->normal.x = v67;
    return 1;
  }
  v37 = LODWORD(box2ToBox1.m_flMatVal[0][3]);
  *v37.m128i_i32 = ((box2ToBox1.m_flMatVal[0][3] * box2ToBox1.m_flMatVal[0][2])
                  + (box2ToBox1.m_flMatVal[1][2] * box2ToBox1.m_flMatVal[1][3]))
                 + (box2ToBox1.m_flMatVal[2][3] * box2ToBox1.m_flMatVal[2][2]);
  v38 = LODWORD(box1Size->x);
  v39 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v37) & 0x7FFFFFFF);
  *v39.m128i_i32 = *v39.m128i_i32 + tolerance;
  *v38.m128i_i32 = (((*v20.m128i_i32 * v19) + (v82 * fabs(box2ToBox1.m_flMatVal[1][2])))
                  + (v81 * fabs(box2ToBox1.m_flMatVal[2][2])))
                 + z;
  if ( _mm_cvtsi128_si32(v39) > _mm_cvtsi128_si32(v38) )
  {
    v74 = box2ToWorld->m_flMatVal[1][2];
    v75 = box2ToWorld->m_flMatVal[0][2];
    pPlane->normal.z = box2ToWorld->m_flMatVal[2][2];
    pPlane->normal.y = v74;
    pPlane->normal.x = v75;
    return 1;
  }
  if ( v16 < 0.99900001 )
  {
    v68 = LODWORD(box2ToBox1.m_flMatVal[2][3]);
    *v68.m128i_i32 = (box2ToBox1.m_flMatVal[2][3] * box2ToBox1.m_flMatVal[1][0])
                   - (box2ToBox1.m_flMatVal[2][0] * box2ToBox1.m_flMatVal[1][3]);
    v69 = LODWORD(v82);
    v70 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v68) & 0x7FFFFFFF);
    *v70.m128i_i32 = *v70.m128i_i32 + tolerance;
    *v69.m128i_i32 = (((v82 * v79) + (v81 * v80)) + (y * v19)) + (z * v15);
    if ( _mm_cvtsi128_si32(v70) > _mm_cvtsi128_si32(v69) )
    {
      v71 = box2ToWorld->m_flMatVal[2][0];
      v72 = box2ToWorld->m_flMatVal[1][0];
      v73 = box2ToWorld->m_flMatVal[0][0];
LABEL_34:
      tmp.x = v73;
      tmp.y = v72;
      tmp.z = v71;
      CrossProduct(worldToBox1, &tmp.x, &pPlane->normal.x);
      return 1;
    }
  }
  if ( v15 < 0.99900001 )
  {
    v40 = LODWORD(box2ToBox1.m_flMatVal[2][3]);
    *v40.m128i_i32 = (box2ToBox1.m_flMatVal[2][3] * box2ToBox1.m_flMatVal[1][1])
                   - (box2ToBox1.m_flMatVal[2][1] * box2ToBox1.m_flMatVal[1][3]);
    v41 = LODWORD(v82);
    v42 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v40) & 0x7FFFFFFF);
    *v42.m128i_i32 = *v42.m128i_i32 + tolerance;
    *v41.m128i_i32 = (((v82 * fabs(box2ToBox1.m_flMatVal[2][1])) + (v81 * fabs(box2ToBox1.m_flMatVal[1][1]))) + (x * v19))
                   + (z * v16);
    if ( _mm_cvtsi128_si32(v42) > _mm_cvtsi128_si32(v41) )
    {
      v71 = box2ToWorld->m_flMatVal[2][1];
      v72 = box2ToWorld->m_flMatVal[1][1];
      v73 = box2ToWorld->m_flMatVal[0][1];
      goto LABEL_34;
    }
  }
  if ( v19 < 0.99900001 )
  {
    v43 = LODWORD(box2ToBox1.m_flMatVal[2][3]);
    *v43.m128i_i32 = (box2ToBox1.m_flMatVal[2][3] * box2ToBox1.m_flMatVal[1][2])
                   - (box2ToBox1.m_flMatVal[2][2] * box2ToBox1.m_flMatVal[1][3]);
    v44 = LODWORD(v82);
    v45 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v43) & 0x7FFFFFFF);
    *v45.m128i_i32 = *v45.m128i_i32 + tolerance;
    *v44.m128i_i32 = (((v82 * fabs(box2ToBox1.m_flMatVal[2][2])) + (v81 * fabs(box2ToBox1.m_flMatVal[1][2]))) + (x * v15))
                   + (y * v16);
    if ( _mm_cvtsi128_si32(v45) > _mm_cvtsi128_si32(v44) )
    {
      v71 = box2ToWorld->m_flMatVal[2][2];
      v72 = box2ToWorld->m_flMatVal[1][2];
      v73 = box2ToWorld->m_flMatVal[0][2];
      goto LABEL_34;
    }
  }
  if ( v80 < 0.99900001 )
  {
    v46 = LODWORD(box2ToBox1.m_flMatVal[2][0]);
    v47 = LODWORD(v79);
    *v46.m128i_i32 = (box2ToBox1.m_flMatVal[2][0] * box2ToBox1.m_flMatVal[0][3])
                   - (box2ToBox1.m_flMatVal[2][3] * box2ToBox1.m_flMatVal[0][0]);
    v48 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v46) & 0x7FFFFFFF);
    *v48.m128i_i32 = *v48.m128i_i32 + tolerance;
    *v47.m128i_i32 = (((v79 * *v20.m128i_i32) + (v81 * v16)) + (fabs(box2ToBox1.m_flMatVal[1][2]) * y))
                   + (fabs(box2ToBox1.m_flMatVal[1][1]) * z);
    if ( _mm_cvtsi128_si32(v48) > _mm_cvtsi128_si32(v47) )
    {
      v76 = box2ToWorld->m_flMatVal[2][0];
      v77 = box2ToWorld->m_flMatVal[1][0];
      v78 = box2ToWorld->m_flMatVal[0][0];
LABEL_39:
      tmp.x = v78;
      tmp.y = v77;
      tmp.z = v76;
      CrossProduct(worldToBox1->m_flMatVal[1], &tmp.x, &pPlane->normal.x);
      return 1;
    }
  }
  if ( fabs(box2ToBox1.m_flMatVal[1][1]) < 0.99900001 )
  {
    v49 = LODWORD(box2ToBox1.m_flMatVal[2][1]);
    *&v50 = fabs(box2ToBox1.m_flMatVal[2][1]);
    *v49.m128i_i32 = (box2ToBox1.m_flMatVal[2][1] * box2ToBox1.m_flMatVal[0][3])
                   - (box2ToBox1.m_flMatVal[2][3] * box2ToBox1.m_flMatVal[0][1]);
    v51 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v49) & 0x7FFFFFFF);
    *v51.m128i_i32 = *v51.m128i_i32 + tolerance;
    *v50.m128i_i32 = (((fabs(box2ToBox1.m_flMatVal[2][1]) * *v20.m128i_i32) + (v81 * v15))
                    + (fabs(box2ToBox1.m_flMatVal[1][2]) * x))
                   + (v80 * z);
    if ( _mm_cvtsi128_si32(v51) > _mm_cvtsi128_si32(v50) )
    {
      v76 = box2ToWorld->m_flMatVal[2][1];
      v77 = box2ToWorld->m_flMatVal[1][1];
      v78 = box2ToWorld->m_flMatVal[0][1];
      goto LABEL_39;
    }
  }
  if ( fabs(box2ToBox1.m_flMatVal[1][2]) < 0.99900001 )
  {
    v52 = LODWORD(box2ToBox1.m_flMatVal[2][2]);
    v52.m128_f32[0] = (box2ToBox1.m_flMatVal[2][2] * box2ToBox1.m_flMatVal[0][3])
                    - (box2ToBox1.m_flMatVal[2][3] * box2ToBox1.m_flMatVal[0][2]);
    *&v53 = fabs(box2ToBox1.m_flMatVal[2][2]);
    v54 = _mm_and_ps(v52, 0x7FFFFFFFu);
    *v54.m128i_i32 = *v54.m128i_i32 + tolerance;
    *v53.m128i_i32 = (((fabs(box2ToBox1.m_flMatVal[2][2]) * *v20.m128i_i32) + (v81 * v19))
                    + (fabs(box2ToBox1.m_flMatVal[1][1]) * x))
                   + (v80 * y);
    if ( _mm_cvtsi128_si32(v54) > _mm_cvtsi128_si32(v53) )
    {
      v76 = box2ToWorld->m_flMatVal[2][2];
      v77 = box2ToWorld->m_flMatVal[1][2];
      v78 = box2ToWorld->m_flMatVal[0][2];
      goto LABEL_39;
    }
  }
  if ( v79 < 0.99900001 )
  {
    v12.m128_f32[0] = (box2ToBox1.m_flMatVal[0][0] * box2ToBox1.m_flMatVal[1][3])
                    - (box2ToBox1.m_flMatVal[1][0] * box2ToBox1.m_flMatVal[0][3]);
    v55 = LODWORD(v80);
    v56 = _mm_and_ps(v12, 0x7FFFFFFFu);
    *v56.m128i_i32 = *v56.m128i_i32 + tolerance;
    *v55.m128i_i32 = (((v80 * *v20.m128i_i32) + (v16 * v82)) + (fabs(box2ToBox1.m_flMatVal[2][2]) * y))
                   + (fabs(box2ToBox1.m_flMatVal[2][1]) * z);
    if ( _mm_cvtsi128_si32(v56) > _mm_cvtsi128_si32(v55) )
    {
      v61 = box2ToWorld->m_flMatVal[2][0];
      v62 = box2ToWorld->m_flMatVal[1][0];
      v63 = box2ToWorld->m_flMatVal[0][0];
      goto LABEL_25;
    }
  }
  if ( fabs(box2ToBox1.m_flMatVal[2][1]) < 0.99900001 )
  {
    *&v57 = fabs(box2ToBox1.m_flMatVal[1][1]);
    v11.m128_f32[0] = (box2ToBox1.m_flMatVal[0][1] * box2ToBox1.m_flMatVal[1][3])
                    - (box2ToBox1.m_flMatVal[1][1] * box2ToBox1.m_flMatVal[0][3]);
    v58 = _mm_and_ps(v11, 0x7FFFFFFFu);
    *v58.m128i_i32 = *v58.m128i_i32 + tolerance;
    *v57.m128i_i32 = (((fabs(box2ToBox1.m_flMatVal[1][1]) * *v20.m128i_i32) + (v15 * v82))
                    + (fabs(box2ToBox1.m_flMatVal[2][2]) * x))
                   + (z * v79);
    if ( _mm_cvtsi128_si32(v58) > _mm_cvtsi128_si32(v57) )
    {
      v61 = box2ToWorld->m_flMatVal[2][1];
      v62 = box2ToWorld->m_flMatVal[1][1];
      v63 = box2ToWorld->m_flMatVal[0][1];
      goto LABEL_25;
    }
  }
  result = 0;
  if ( fabs(box2ToBox1.m_flMatVal[2][2]) < 0.99900001 )
  {
    result = 0;
    v21.m128_f32[0] = (box2ToBox1.m_flMatVal[1][3] * box2ToBox1.m_flMatVal[0][2])
                    - (box2ToBox1.m_flMatVal[0][3] * box2ToBox1.m_flMatVal[1][2]);
    v60 = _mm_and_ps(v21, 0x7FFFFFFFu);
    *v60.m128i_i32 = *v60.m128i_i32 + tolerance;
    *v20.m128i_i32 = (((*v20.m128i_i32 * fabs(box2ToBox1.m_flMatVal[1][2])) + (v82 * v19))
                    + (x * fabs(box2ToBox1.m_flMatVal[2][1])))
                   + (y * v79);
    if ( _mm_cvtsi128_si32(v60) > _mm_cvtsi128_si32(v20) )
    {
      v61 = box2ToWorld->m_flMatVal[2][2];
      v62 = box2ToWorld->m_flMatVal[1][2];
      v63 = box2ToWorld->m_flMatVal[0][2];
LABEL_25:
      tmp.x = v63;
      tmp.y = v62;
      tmp.z = v61;
      CrossProduct(worldToBox1->m_flMatVal[2], &tmp.x, &pPlane->normal.x);
      return 1;
    }
  }
  return result;
}


// ComputeSeparatingPlane  (line 2134, @0x00000000024191a0, libserver.so)  // inlines: ComputeCenterIMatrix, MatrixSetColumn, SetColumn, VectorAdd, VectorRotate, VectorSubtract, operator*=, operator-=
// calls: AngleIMatrix, VectorRotate, ComputeCenterMatrix, ComputeSeparatingPlane
// callers: IsOBBIntersectingOBB, IsRayIntersectingOBB
__int64 __fastcall ComputeSeparatingPlane(
        const Vector *const org1,
        const QAngle *const angles1,
        const Vector *const min1,
        const Vector *const max1,
        const Vector *const org2,
        const QAngle *const angles2,
        float tolerance,
        const Vector *const min2,
        const Vector *const max2,
        cplane_t *pPlane)
{
  float v11; // xmm2_4
  vec_t v12; // xmm6_4
  vec_t v13; // xmm5_4
  vec_t v14; // xmm4_4
  vec_t v15; // xmm3_4
  float v19; // [rsp+Ch] [rbp-D4h]
  float v21; // [rsp+18h] [rbp-C8h]
  float v22; // [rsp+1Ch] [rbp-C4h]
  Vector box1Size; // [rsp+30h] [rbp-B0h] BYREF
  Vector box2Size; // [rsp+40h] [rbp-A0h] BYREF
  matrix3x4_t worldToBox1; // [rsp+50h] [rbp-90h] BYREF
  matrix3x4_t box2ToWorld; // [rsp+80h] [rbp-60h] BYREF

  v19 = (min1->x + max1->x) * -0.5;
  v21 = (min1->y + max1->y) * -0.5;
  v22 = (min1->z + max1->z) * -0.5;
  AngleIMatrix(angles1, &worldToBox1);
  VectorRotate(&org1->x, &worldToBox1, &box2ToWorld);
  worldToBox1.m_flMatVal[1][3] = v21 - box2ToWorld.m_flMatVal[0][1];
  worldToBox1.m_flMatVal[2][3] = v22 - box2ToWorld.m_flMatVal[0][2];
  worldToBox1.m_flMatVal[0][3] = v19 - box2ToWorld.m_flMatVal[0][0];
  ComputeCenterMatrix(org2, angles2, min2, max2, &box2ToWorld);
  v11 = max2->z - min2->z;
  v12 = (max1->y - min1->y) * 0.5;
  v13 = (max1->z - min1->z) * 0.5;
  v14 = (max2->x - min2->x) * 0.5;
  v15 = (max2->y - min2->y) * 0.5;
  box1Size.x = (max1->x - min1->x) * 0.5;
  box1Size.y = v12;
  box1Size.z = v13;
  box2Size.x = v14;
  box2Size.y = v15;
  box2Size.z = v11 * 0.5;
  return ComputeSeparatingPlane(&worldToBox1, &box2ToWorld, &box1Size, &box2Size, tolerance, pPlane);
}


// IsRayIntersectingOBB  (line 2156, @0x00000000024193b0, libserver.so)  // inlines: CrossProduct, DotProduct, DotProductAbs, FloatMakePositive, Init, MatrixSetColumn, Ray_t, SetColumn, VectorAbs, VectorAdd, VectorAligned, VectorIRotate, VectorMA, VectorRotate, VectorSubtract, VectorTransform, operator*=, operator-, operator=, operator==
// calls: ComputeCenterMatrix, SetIdentityMatrix, ComputeSeparatingPlane, IsBoxIntersectingRay, AngleIMatrix, VectorTransform, VectorRotate, VectorNormalize, VectorIRotate
bool __fastcall IsRayIntersectingOBB(
        const Ray_t *const ray,
        const Vector *const org,
        const QAngle *const angles,
        const Vector *const mins,
        const Vector *const maxs)
{
  _BOOL4 v8; // r12d
  float v9; // xmm2_4
  float v10; // xmm4_4
  vec_t v11; // xmm4_4
  vec_t v12; // xmm3_4
  float v13; // xmm2_4
  float y; // xmm1_4
  float z; // xmm3_4
  vec_t v17; // xmm2_4
  float v18; // xmm0_4
  vec_t v19; // xmm0_4
  vec_t v20; // xmm1_4
  float v21; // xmm0_4
  vec_t v22; // xmm3_4
  vec_t v23; // xmm0_4
  vec_t v24; // xmm1_4
  vec_t v25; // xmm3_4
  vec_t v26; // xmm1_4
  vec_t v27; // xmm2_4
  bool m_IsRay; // al
  bool m_IsSwept; // al
  float v30; // xmm13_4
  __m128i v31; // xmm4
  __m128i v32; // xmm3
  float v33; // xmm9_4
  float v34; // xmm8_4
  float v35; // xmm12_4
  __m128 v36; // xmm2
  __m128 v37; // xmm15
  __m128i y_low; // xmm14
  float v39; // xmm12_4
  float v40; // xmm11_4
  float v41; // xmm14_4
  __m128 v42; // xmm15
  float v43; // xmm3_4
  float v44; // xmm7_4
  float v45; // xmm6_4
  float v46; // [rsp+28h] [rbp-138h]
  float v47; // [rsp+2Ch] [rbp-134h]
  float v48; // [rsp+2Ch] [rbp-134h]
  float vecRayCentera; // [rsp+30h] [rbp-130h]
  float vecRayCenter; // [rsp+30h] [rbp-130h]
  float vecRayCenter_4; // [rsp+34h] [rbp-12Ch]
  float vecRayCenter_8; // [rsp+38h] [rbp-128h]
  float flTolerance; // [rsp+40h] [rbp-120h]
  float flTolerancea; // [rsp+40h] [rbp-120h]
  Vector box1Size; // [rsp+50h] [rbp-110h] BYREF
  Vector box2Size; // [rsp+60h] [rbp-100h] BYREF
  Vector vecRayDirection; // [rsp+70h] [rbp-F0h] BYREF
  Vector vecAbsRayDirBox2; // [rsp+80h] [rbp-E0h] BYREF
  cplane_t plane; // [rsp+90h] [rbp-D0h] BYREF
  Vector vecWorldMins; // [rsp+B0h] [rbp-B0h] BYREF
  float v61; // [rsp+BCh] [rbp-A4h]
  float v62; // [rsp+CCh] [rbp-94h]
  float v63; // [rsp+DCh] [rbp-84h]
  Vector vecWorldMaxs; // [rsp+E0h] [rbp-80h] BYREF
  float v65; // [rsp+ECh] [rbp-74h]
  float v66; // [rsp+F0h] [rbp-70h] BYREF
  float v67; // [rsp+F4h] [rbp-6Ch]
  float v68; // [rsp+F8h] [rbp-68h]
  float v69; // [rsp+FCh] [rbp-64h]
  float x; // [rsp+100h] [rbp-60h]
  float v71; // [rsp+104h] [rbp-5Ch]
  float v72; // [rsp+108h] [rbp-58h]
  float v73; // [rsp+10Ch] [rbp-54h]
  vec_t v74; // [rsp+110h] [rbp-50h]
  vec_t v75; // [rsp+114h] [rbp-4Ch]
  vec_t v76; // [rsp+118h] [rbp-48h]
  int v77; // [rsp+11Ch] [rbp-44h]
  bool v78; // [rsp+124h] [rbp-3Ch]
  bool v79; // [rsp+125h] [rbp-3Bh]

  if ( vec3_angle.x == angles->x && vec3_angle.y == angles->y && vec3_angle.z == angles->z )
  {
    y = org->y;
    z = mins->z;
    v17 = org->x + maxs->x;
    vecWorldMins.x = mins->x + org->x;
    v18 = mins->y;
    vecWorldMaxs.x = v17;
    v19 = v18 + y;
    v20 = y + maxs->y;
    vecWorldMins.y = v19;
    v21 = org->z;
    vecWorldMaxs.y = v20;
    v22 = z + v21;
    v23 = v21 + maxs->z;
    vecWorldMins.z = v22;
    vecWorldMaxs.z = v23;
    LOBYTE(v8) = IsBoxIntersectingRay(&vecWorldMins, &vecWorldMaxs, ray, 0LL);
  }
  else
  {
    LOBYTE(v8) = ray->m_IsRay;
    if ( v8 )
    {
      AngleIMatrix(angles, org, &vecWorldMins);
      v65 = 0.0;
      v69 = 0.0;
      v73 = 0.0;
      v77 = 0;
      VectorTransform(&ray->m_Start.x, &vecWorldMins, &vecWorldMaxs.x);
      VectorRotate(&ray->m_Delta.x, &vecWorldMins, &v66);
      v73 = 0.0;
      v26 = vec3_origin.z;
      v77 = 0;
      v27 = vec3_origin.y;
      v72 = v26;
      m_IsRay = ray->m_IsRay;
      v71 = v27;
      x = vec3_origin.x;
      v74 = vec3_origin.x;
      v75 = v27;
      v78 = m_IsRay;
      m_IsSwept = ray->m_IsSwept;
      v76 = v26;
      v79 = m_IsSwept;
      LOBYTE(v8) = IsBoxIntersectingRay(mins, maxs, &vecWorldMaxs, 0);
    }
    else if ( ray->m_IsSwept )
    {
      ComputeCenterMatrix(org, angles, mins, maxs, &vecWorldMaxs);
      v47 = -((ray->m_Delta.x * 0.5) + ray->m_Start.x);
      vecRayCentera = -((ray->m_Delta.y * 0.5) + ray->m_Start.y);
      flTolerance = -((0.5 * ray->m_Delta.z) + ray->m_Start.z);
      SetIdentityMatrix(&vecWorldMins);
      v62 = vecRayCentera;
      v9 = ray->m_Delta.x;
      v63 = flTolerance;
      v10 = maxs->x;
      v61 = v47;
      v11 = (v10 - mins->x) * 0.5;
      v12 = (maxs->y - mins->y) * 0.5;
      box1Size.x = (fabs(v9) * 0.5) + ray->m_Extents.x;
      v13 = fabs(ray->m_Delta.y);
      box2Size.x = v11;
      box2Size.y = v12;
      box1Size.y = (v13 * 0.5) + ray->m_Extents.y;
      box1Size.z = (fabs(ray->m_Delta.z) * 0.5) + ray->m_Extents.z;
      box2Size.z = (maxs->z - mins->z) * 0.5;
      if ( ComputeSeparatingPlane(&vecWorldMins, &vecWorldMaxs, &box1Size, &box2Size, 0.0, &plane) == 0 )
      {
        vecRayDirection = ray->m_Delta.Vector;
        VectorNormalize(&vecRayDirection);
        v46 = v65 - ray->m_Start.x;
        v48 = v69 - ray->m_Start.y;
        vecRayCenter_8 = v73 - ray->m_Start.z;
        VectorIRotate(&vecRayDirection.x, &vecWorldMaxs, &vecAbsRayDirBox2.x);
        vecRayCenter_4 = ray->m_Extents.x;
        v30 = (x * vecRayDirection.y) - (v66 * vecRayDirection.z);
        vecRayCenter = ray->m_Extents.y;
        v31 = _mm_and_ps(LODWORD(vecAbsRayDirBox2.y), 0x7FFFFFFFu);
        v32 = _mm_and_ps(LODWORD(vecAbsRayDirBox2.z), 0x7FFFFFFFu);
        v33 = ray->m_Extents.z;
        v34 = fabs(vecAbsRayDirBox2.x);
        v35 = (vecWorldMaxs.x * vecRayDirection.z) - (x * vecRayDirection.x);
        flTolerancea = (v66 * vecRayDirection.x) - (vecWorldMaxs.x * vecRayDirection.y);
        v36 = LODWORD(v46);
        v37 = LODWORD(v46);
        v37.m128_f32[0] = ((v46 * v30) + (v48 * v35)) + (vecRayCenter_8 * flTolerancea);
        y_low = LODWORD(box2Size.y);
        *y_low.m128i_i32 = ((box2Size.y * *v32.m128i_i32) + (box2Size.z * *v31.m128i_i32))
                         + ((fabs(v30 * vecRayCenter_4) + fabs(v35 * vecRayCenter)) + fabs(flTolerancea * v33));
        if ( _mm_cvtsi128_si32(_mm_and_ps(v37, 0x7FFFFFFFu)) <= _mm_cvtsi128_si32(y_low) )
        {
          v39 = (v71 * vecRayDirection.y) - (v67 * vecRayDirection.z);
          v40 = (vecWorldMaxs.y * vecRayDirection.z) - (v71 * vecRayDirection.x);
          v41 = (v67 * vecRayDirection.x) - (vecWorldMaxs.y * vecRayDirection.y);
          v42 = LODWORD(v46);
          v42.m128_f32[0] = ((v46 * v39) + (v48 * v40)) + (vecRayCenter_8 * v41);
          *v32.m128i_i32 = ((*v32.m128i_i32 * box2Size.x) + (box2Size.z * v34))
                         + ((fabs(v39 * vecRayCenter_4) + fabs(v40 * vecRayCenter)) + fabs(v41 * v33));
          if ( _mm_cvtsi128_si32(_mm_and_ps(v42, 0x7FFFFFFFu)) <= _mm_cvtsi128_si32(v32) )
          {
            v43 = (v72 * vecRayDirection.y) - (v68 * vecRayDirection.z);
            v44 = (vecRayDirection.z * vecWorldMaxs.z) - (v72 * vecRayDirection.x);
            v45 = (vecRayDirection.x * v68) - (vecRayDirection.y * vecWorldMaxs.z);
            v36.m128_f32[0] = ((v46 * v43) + (v48 * v44)) + (vecRayCenter_8 * v45);
            *v31.m128i_i32 = ((*v31.m128i_i32 * box2Size.x) + (v34 * box2Size.y))
                           + ((fabs(v43 * vecRayCenter_4) + fabs(v44 * vecRayCenter)) + fabs(v45 * v33));
            LOBYTE(v8) = _mm_cvtsi128_si32(_mm_and_ps(v36, 0x7FFFFFFFu)) <= _mm_cvtsi128_si32(v31);
          }
        }
      }
    }
    else
    {
      v24 = -ray->m_Extents.z;
      v25 = -ray->m_Extents.x;
      vecWorldMins.y = -ray->m_Extents.y;
      vecWorldMins.x = v25;
      vecWorldMins.z = v24;
      return ComputeSeparatingPlane(
               &ray->m_Start,
               &vec3_angle,
               &vecWorldMins,
               &ray->m_Extents,
               org,
               angles,
               0.0,
               mins,
               maxs,
               &vecWorldMaxs)
           ^ 1;
    }
  }
  return v8;
}


// CalcClosestPointOnTriangle  (line 2292, @0x0000000002419b20, libserver.so)  // inlines: DotProduct, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// callers: CNavPoly::GetClosestPointOnPoly, CNavPoly::GetClosestPointOnPoly2D, CalcClosestPointOnPoly, CNavPoly::CalcDistanceSquaredToPoint
Vector __fastcall CalcClosestPointOnTriangle(
        const Vector *const P,
        const Vector *const v0,
        const Vector *const v1,
        const Vector *const v2)
{
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm8_4
  float v7; // xmm10_4
  float v8; // xmm14_4
  float v9; // xmm9_4
  float v10; // xmm13_4
  float v11; // xmm12_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm11_4
  float v17; // xmm14_4
  float v18; // xmm13_4
  float v19; // xmm12_4
  float v20; // xmm5_4
  float v21; // xmm14_4
  float v22; // xmm12_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm12_4
  float v26; // xmm11_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm5_4
  float v33; // xmm2_4
  float v34; // [rsp+0h] [rbp-48h]
  float v35; // [rsp+4h] [rbp-44h]
  float v36; // [rsp+8h] [rbp-40h]
  float z; // [rsp+Ch] [rbp-3Ch]
  float y; // [rsp+10h] [rbp-38h]
  float x; // [rsp+14h] [rbp-34h]
  float v40; // [rsp+18h] [rbp-30h]
  float v41; // [rsp+1Ch] [rbp-2Ch]
  float v42; // [rsp+20h] [rbp-28h]
  float v43; // [rsp+24h] [rbp-24h]
  Vector v45; // 0:^38.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  y = v1->y;
  x = v1->x;
  v4 = v0->y;
  z = v1->z;
  v5 = v0->z;
  v35 = v2->y;
  v6 = v0->x;
  v7 = v1->x - v0->x;
  v8 = P->x;
  v9 = y - v4;
  v10 = P->y;
  v42 = z - v5;
  v36 = v2->x;
  v40 = v35 - v4;
  v34 = v2->z;
  v11 = P->z;
  v41 = v2->x - v0->x;
  v43 = v34 - v5;
  v12 = ((v7 * (P->x - v0->x)) + ((y - v4) * (v10 - v4))) + ((z - v5) * (v11 - v5));
  v13 = (((P->x - v0->x) * v41) + ((v10 - v4) * (v35 - v4))) + ((v11 - v5) * (v34 - v5));
  if ( v12 <= 0.0 && v13 <= 0.0 )
  {
    v45 = *v0;
LABEL_10:
    *&result.x = *&v45.x;
    result.z = v45.z;
    return result;
  }
  v14 = ((v7 * (v8 - x)) + (v9 * (v10 - y))) + (v42 * (v11 - z));
  v15 = (((v8 - x) * v41) + ((v10 - y) * v40)) + ((v11 - z) * v43);
  if ( v14 >= 0.0 && v14 >= v15 )
  {
    *&result.x = *&v1->x;
    result.z = v1->z;
  }
  else
  {
    v16 = (v12 * v15) - (v13 * v14);
    if ( v16 <= 0.0 && v12 >= 0.0 && v14 <= 0.0 )
    {
      v29 = v12 / (v12 - v14);
      v45.x = (v7 * v29) + v6;
      v45.y = (v9 * v29) + v4;
      v45.z = (v29 * v42) + v5;
      goto LABEL_10;
    }
    v17 = v8 - v36;
    v18 = v10 - v35;
    v19 = v11 - v34;
    v20 = ((v7 * v17) + (v9 * v18)) + (v42 * v19);
    v21 = ((v17 * v41) + (v18 * v40)) + (v19 * v43);
    if ( v21 < 0.0 || v21 < v20 )
    {
      v22 = (v13 * v20) - (v12 * v21);
      if ( v22 > 0.0 || v13 < 0.0 || v21 > 0.0 )
      {
        v23 = (v14 * v21) - (v15 * v20);
        if ( v23 > 0.0 || (v31 = v15 - v14) < 0.0 || (v32 = v20 - v21) < 0.0 )
        {
          v24 = (v23 + v22) + v16;
          v25 = v22 * (1.0 / v24);
          v26 = v16 * (1.0 / v24);
          v45.x = (v41 * v26) + ((v7 * v25) + v6);
          v45.y = (v40 * v26) + ((v9 * v25) + v4);
          v45.z = (v26 * v43) + ((v25 * v42) + v5);
        }
        else
        {
          v33 = v31 / (v32 + v31);
          v45.x = ((v36 - x) * v33) + x;
          v45.y = ((v35 - y) * v33) + y;
          v45.z = ((v34 - z) * v33) + z;
        }
      }
      else
      {
        v30 = v13 / (v13 - v21);
        v45.x = (v41 * v30) + v6;
        v45.y = (v40 * v30) + v4;
        v45.z = (v30 * v43) + v5;
      }
      goto LABEL_10;
    }
    *&result.x = *&v2->x;
    result.z = v2->z;
  }
  return result;
}


// OBBHasFullyContainedIntersectionWithQuad  (line 2347, @0x0000000002419f60, libserver.so)  // inlines: Dot, DotProduct, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
__int64 __fastcall OBBHasFullyContainedIntersectionWithQuad(
        const Vector *const vOBBExtent1_Scaled,
        const Vector *const vOBBExtent2_Scaled,
        const Vector *const vOBBExtent3_Scaled,
        const Vector *const ptOBBCenter,
        const Vector *const vQuadNormal,
        float fQuadPlaneDist,
        const Vector *const ptQuadCenter,
        float fQuadExtent1Length,
        float fQuadExtent2Length,
        const Vector *const vQuadExtent1_Normalized,
        const Vector *const vQuadExtent2_Normalized)
{
  Vector *v11; // rax
  float x; // xmm12_4
  float v13; // xmm8_4
  float v14; // xmm15_4
  float v15; // xmm14_4
  float v16; // xmm5_4
  float v17; // xmm13_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm10_4
  float v21; // xmm15_4
  float v22; // xmm9_4
  float v23; // xmm3_4
  float v24; // xmm14_4
  float v25; // xmm11_4
  float v26; // xmm4_4
  float v27; // xmm13_4
  float *v28; // rdx
  float v29; // xmm11_4
  float v30; // xmm12_4
  float v31; // xmm6_4
  float v32; // xmm14_4
  float v33; // xmm8_4
  float v34; // xmm13_4
  float v35; // xmm7_4
  vec_t v36; // xmm8_4
  float v37; // xmm5_4
  float v38; // xmm7_4
  float v39; // xmm6_4
  float v40; // xmm3_4
  __int64 v41; // rax
  int v42; // esi
  Vector *v44; // rsi
  char v45; // r8
  __int64 v46; // rax
  int v47; // r12d
  int v48; // r15d
  __int64 v49; // r11
  bool v50; // zf
  int *v51; // rdi
  float v52; // xmm5_4
  float v53; // xmm0_4
  Vector *v54; // r15
  __int64 v55; // r11
  float v56; // xmm3_4
  float v57; // xmm5_4
  Vector *v58; // r11
  float v59; // xmm0_4
  float v60; // xmm3_4
  float v61; // xmm6_4
  float v62; // xmm0_4
  vec_t v63; // xmm4_4
  float v64; // xmm3_4
  float v65; // xmm5_4
  Vector *v66; // rax
  float v67; // xmm5_4
  float v68; // xmm4_4
  float v69; // xmm3_4
  float z; // [rsp+4h] [rbp-18Ch]
  float y; // [rsp+8h] [rbp-188h]
  float v72; // [rsp+Ch] [rbp-184h]
  float v73; // [rsp+10h] [rbp-180h]
  float v74; // [rsp+18h] [rbp-178h]
  int iAxisCrossings[3]; // [rsp+20h] [rbp-170h] BYREF
  _BYTE v76[4]; // [rsp+2Ch] [rbp-164h] BYREF
  float fDists[8]; // [rsp+30h] [rbp-160h] BYREF
  int iSides[8]; // [rsp+50h] [rbp-140h]
  Vector ptOBB[8]; // [rsp+70h] [rbp-120h] BYREF
  Vector ptPlaneIntersections[12]; // [rsp+D0h] [rbp-C0h] BYREF

  v11 = ptOBB;
  x = ptOBBCenter->x;
  v13 = vOBBExtent2_Scaled->x;
  v14 = ptOBBCenter->x - vOBBExtent1_Scaled->x;
  v74 = vOBBExtent1_Scaled->x;
  y = ptOBBCenter->y;
  v15 = y - vOBBExtent1_Scaled->y;
  v73 = vOBBExtent1_Scaled->y;
  z = ptOBBCenter->z;
  v16 = vOBBExtent3_Scaled->x;
  v17 = z - vOBBExtent1_Scaled->z;
  v18 = vOBBExtent2_Scaled->z;
  v72 = vOBBExtent1_Scaled->z;
  v19 = vOBBExtent2_Scaled->y;
  v20 = v14 - vOBBExtent2_Scaled->x;
  v21 = v14 + vOBBExtent2_Scaled->x;
  v22 = v15 - v19;
  v23 = vOBBExtent3_Scaled->z;
  v24 = v15 + v19;
  v25 = v17 - v18;
  v26 = vOBBExtent3_Scaled->y;
  v27 = v17 + v18;
  ptOBB[0].x = v20 - vOBBExtent3_Scaled->x;
  v28 = fDists;
  ptOBB[0].y = v22 - v26;
  ptOBB[0].z = v25 - v23;
  ptOBB[1].x = v20 + v16;
  ptOBB[1].y = v22 + v26;
  ptOBB[1].z = v25 + v23;
  v29 = v74 + x;
  ptOBB[2].x = v16 + v21;
  ptOBB[3].x = v21 - v16;
  v30 = (z + v72) - v18;
  ptOBB[2].y = v26 + v24;
  v31 = v18 + (z + v72);
  ptOBB[3].y = v24 - v26;
  v32 = v29 - v13;
  v33 = v13 + v29;
  ptOBB[2].z = v23 + v27;
  ptOBB[3].z = v27 - v23;
  ptOBB[4].x = v32 - v16;
  v34 = (y + v73) - v19;
  ptOBB[6].x = v16 + v33;
  v35 = v19 + (y + v73);
  ptOBB[5].x = v32 + v16;
  v36 = v33 - v16;
  v37 = vQuadNormal->z;
  ptOBB[7].x = v36;
  ptOBB[5].y = v34 + v26;
  ptOBB[6].y = v26 + v35;
  ptOBB[4].y = v34 - v26;
  ptOBB[7].y = v35 - v26;
  v38 = vQuadNormal->x;
  ptOBB[6].z = v23 + v31;
  ptOBB[7].z = v31 - v23;
  v39 = vQuadNormal->y;
  ptOBB[4].z = v30 - v23;
  ptOBB[5].z = v30 + v23;
  do
  {
    v40 = v11->x;
    ++v11;
    *v28++ = (((v40 * v38) + (v11[-1].y * v39)) + (v11[-1].z * v37)) - fQuadPlaneDist;
  }
  while ( v11 != ptPlaneIntersections );
  v41 = 0;
  v42 = 0;
  do
  {
    while ( fDists[v41] > 0.0 )
    {
      iSides[v41++] = 1;
      v42 |= 1u;
      if ( v41 == 8 )
        goto LABEL_7;
    }
    iSides[v41++] = 2;
    v42 |= 2u;
  }
  while ( v41 != 8 );
LABEL_7:
  if ( v42 != 3 )
    return 0;
  v44 = ptOBB;
  v45 = 1;
  v46 = 0;
  v47 = 0;
  do
  {
    if ( iSides[v46] != 2 )
      goto LABEL_10;
    v48 = v46 & 4;
    v49 = (v46 ^ 4);
    iAxisCrossings[1] = v48 + (v45 & 3);
    v50 = iSides[v49] == 1;
    iAxisCrossings[2] = v48 + ((v45 - 2) & 3);
    v51 = &iAxisCrossings[1];
    if ( !v50 )
    {
LABEL_13:
      if ( v51 == v76 )
        goto LABEL_10;
      goto LABEL_14;
    }
    while ( 1 )
    {
      v52 = fDists[v49];
      v53 = fDists[v46];
      v54 = &ptOBB[v49];
      v55 = v47++;
      v56 = v52 - v53;
      v57 = v52 / (v52 - v53);
      v58 = &ptPlaneIntersections[v55];
      v59 = -v53 / v56;
      v60 = v54->y * v59;
      v61 = v54->z * v59;
      v62 = v59 * v54->x;
      v63 = (v44->y * v57) + v60;
      v64 = v44->z * v57;
      v65 = v57 * v44->x;
      v58->y = v63;
      v58->z = v64 + v61;
      v58->x = v65 + v62;
      if ( v51 == v76 )
        break;
LABEL_14:
      LODWORD(v49) = *v51++;
      v49 = v49;
      if ( iSides[v49] != 1 )
        goto LABEL_13;
    }
LABEL_10:
    ++v46;
    ++v45;
    ++v44;
  }
  while ( v46 != 8 );
  if ( v47 == 0 )
    return 1;
  v66 = ptPlaneIntersections;
  while ( 1 )
  {
    v67 = v66->x - ptQuadCenter->x;
    v68 = v66->y - ptQuadCenter->y;
    v69 = v66->z - ptQuadCenter->z;
    if ( fabs(
           ((v67 * vQuadExtent1_Normalized->x) + (v68 * vQuadExtent1_Normalized->y))
         + (v69 * vQuadExtent1_Normalized->z)) > fQuadExtent1Length
      || fabs(
           ((v67 * vQuadExtent2_Normalized->x) + (v68 * vQuadExtent2_Normalized->y))
         + (v69 * vQuadExtent2_Normalized->z)) > fQuadExtent2Length )
    {
      break;
    }
    if ( ++v66 == &ptPlaneIntersections[(v47 - 1) + 1] )
      return 1;
  }
  return 0;
}


// RayHasFullyContainedIntersectionWithQuad  (line 2441, @0x000000000241a510, libserver.so)  // inlines: Dot, DotProduct, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
_BOOL8 __fastcall RayHasFullyContainedIntersectionWithQuad(
        const Ray_t *const ray,
        const Vector *const vQuadNormal,
        float fQuadPlaneDist,
        const Vector *const ptQuadCenter,
        const Vector *const vQuadExtent1_Normalized,
        float fQuadExtent1Length,
        const Vector *const vQuadExtent2_Normalized,
        float fQuadExtent2Length)
{
  _BOOL8 result; // rax
  float y; // xmm6_4
  float x; // xmm11_4
  float v12; // xmm10_4
  float v13; // xmm3_4
  vec_t v14; // xmm9_4
  float z; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm5_4
  __int64 v20; // r9
  float v21; // xmm4_4
  int v22; // ebx
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm3_4
  float v26; // xmm11_4
  float v27; // xmm8_4
  float v28; // xmm7_4
  float v29; // xmm6_4
  Vector *v30; // rsi
  float v31; // xmm3_4
  int v32; // r9d
  float v33; // xmm12_4
  Vector *v34; // rsi
  float v35; // xmm11_4
  float v36; // xmm10_4
  float v37; // xmm4_4
  vec_t v38; // xmm3_4
  vec_t v39; // xmm9_4
  int v40; // ebx
  Vector *v41; // rsi
  __int64 v42; // r9
  float v43; // xmm3_4
  int v44; // esi
  int *v45; // r13
  float *v46; // rdx
  __int64 v47; // rcx
  char v48; // r10
  float *p_x; // rdi
  __int64 i; // rax
  int v51; // ebx
  int v52; // r11d
  int *j; // r9
  __int64 v54; // rbx
  float v55; // xmm5_4
  float v56; // xmm4_4
  Vector *v57; // rax
  float v58; // xmm5_4
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm0_4
  float v62; // xmm5_4
  float v63; // xmm3_4
  __int64 v64; // rbx
  __int64 v65; // r11
  float *v66; // rbx
  Vector *v67; // r11
  float v68; // xmm5_4
  float v69; // xmm0_4
  float v70; // xmm3_4
  float v71; // xmm6_4
  float v72; // xmm0_4
  vec_t v73; // xmm4_4
  float v74; // xmm3_4
  float v75; // xmm5_4
  __int64 k; // rax
  int v77; // r9d
  _BOOL8 v78; // r10
  _BOOL8 v79; // rbx
  float v80; // xmm5_4
  float v81; // xmm0_4
  float v82; // xmm3_4
  Vector *v83; // r10
  __int64 v84; // rdi
  Vector *v85; // r9
  Vector *v86; // rdi
  float v87; // xmm5_4
  float v88; // xmm0_4
  float v89; // xmm3_4
  float v90; // xmm6_4
  float v91; // xmm0_4
  vec_t v92; // xmm4_4
  float v93; // xmm3_4
  float v94; // xmm5_4
  __int64 v95; // rax
  __int64 v96; // rsi
  Vector *v97; // rax
  float v98; // xmm0_4
  Vector *v99; // rcx
  float v100; // xmm4_4
  float v101; // xmm0_4
  float v102; // xmm6_4
  float v103; // xmm5_4
  float v104; // xmm0_4
  vec_t v105; // xmm6_4
  float v106; // xmm3_4
  float v107; // xmm4_4
  const Vector *ptQuadCentera; // [rsp+20h] [rbp-348h]
  Vector *v110; // [rsp+50h] [rbp-318h]
  int iSideMask; // [rsp+58h] [rbp-310h]
  int iSideMask_4; // [rsp+5Ch] [rbp-30Ch]
  int iAxisCrossings[3]; // [rsp+68h] [rbp-300h] BYREF
  int v114; // [rsp+74h] [rbp-2F4h] BYREF
  float fDists[2][8]; // [rsp+78h] [rbp-2F0h] BYREF
  int iSides[2][8]; // [rsp+B8h] [rbp-2B0h] BYREF
  Vector ptEndPoints[2]; // [rsp+F8h] [rbp-270h] BYREF
  float v118; // [rsp+110h] [rbp-258h]
  float v119; // [rsp+114h] [rbp-254h]
  float v120; // [rsp+118h] [rbp-250h]
  float v121; // [rsp+11Ch] [rbp-24Ch]
  float v122; // [rsp+120h] [rbp-248h]
  float v123; // [rsp+124h] [rbp-244h]
  float v124; // [rsp+128h] [rbp-240h]
  float v125; // [rsp+12Ch] [rbp-23Ch]
  float v126; // [rsp+130h] [rbp-238h]
  float v127; // [rsp+134h] [rbp-234h]
  float v128; // [rsp+138h] [rbp-230h]
  float v129; // [rsp+13Ch] [rbp-22Ch]
  float v130; // [rsp+140h] [rbp-228h]
  float v131; // [rsp+144h] [rbp-224h]
  float v132; // [rsp+148h] [rbp-220h]
  float v133; // [rsp+14Ch] [rbp-21Ch]
  float v134; // [rsp+150h] [rbp-218h]
  float v135; // [rsp+154h] [rbp-214h]
  _BYTE v136[96]; // [rsp+158h] [rbp-210h] BYREF
  Vector ptPlaneIntersections[32]; // [rsp+1B8h] [rbp-1B0h] BYREF

  result = ray->m_IsRay;
  if ( result )
  {
    if ( ray->m_IsSwept )
    {
      y = ray->m_Start.y;
      x = vQuadNormal->x;
      ptEndPoints[0].x = ray->m_Start.x;
      v12 = vQuadNormal->y;
      ptEndPoints[0].y = y;
      v13 = ray->m_Delta.x;
      v14 = ray->m_Delta.y + y;
      z = vQuadNormal->z;
      v16 = ray->m_Delta.z;
      ptEndPoints[0].z = ray->m_Start.z;
      ptEndPoints[1].y = v14;
      ptEndPoints[1].x = v13 + ptEndPoints[0].x;
      ptEndPoints[1].z = v16 + ptEndPoints[0].z;
      v17 = (((ptEndPoints[0].x * x) + (y * v12)) + (ptEndPoints[0].z * z)) - fQuadPlaneDist;
      v18 = ((((v13 + ptEndPoints[0].x) * x) + (v14 * v12)) + ((v16 + ptEndPoints[0].z) * z)) - fQuadPlaneDist;
      if ( v17 <= 0.0 )
      {
        v95 = 1;
        v96 = 0;
      }
      else
      {
        if ( v18 > 0.0 )
          return 0;
        v95 = 0;
        v17 = v18;
        v96 = 1;
        v18 = (((ptEndPoints[0].x * x) + (y * v12)) + (ptEndPoints[0].z * z)) - fQuadPlaneDist;
      }
      if ( v18 < 0.0 )
        return 0;
      v97 = &ptEndPoints[v95];
      v98 = 1.0 / (v18 - v17);
      v99 = &ptEndPoints[v96];
      v100 = v17 * v98;
      v101 = v98 * v18;
      v102 = v99->y * v101;
      v103 = v99->z * v101;
      v104 = v101 * v99->x;
      v105 = v102 - (v97->y * v100);
      v106 = v97->z * v100;
      v107 = v100 * v97->x;
      ptPlaneIntersections[0].y = v105;
      ptPlaneIntersections[0].z = v103 - v106;
      ptPlaneIntersections[0].x = v104 - v107;
    }
    else
    {
      v55 = ray->m_Start.y;
      v56 = ray->m_Start.z;
      if ( fabs((((vQuadNormal->x * ray->m_Start.x) + (vQuadNormal->y * v55)) + (vQuadNormal->z * v56)) - fQuadPlaneDist) >= 0.000001 )
        return 0;
      ptPlaneIntersections[0].x = ray->m_Start.x;
      ptPlaneIntersections[0].y = v55;
      ptPlaneIntersections[0].z = v56;
    }
    v44 = 1;
LABEL_34:
    v57 = ptPlaneIntersections;
    while ( 1 )
    {
      v58 = v57->x - ptQuadCenter->x;
      v59 = v57->y - ptQuadCenter->y;
      v60 = v57->z - ptQuadCenter->z;
      if ( fabs(
             ((v58 * vQuadExtent1_Normalized->x) + (v59 * vQuadExtent1_Normalized->y))
           + (v60 * vQuadExtent1_Normalized->z)) > fQuadExtent1Length )
        break;
      if ( fabs(
             ((v58 * vQuadExtent2_Normalized->x) + (v59 * vQuadExtent2_Normalized->y))
           + (v60 * vQuadExtent2_Normalized->z)) > fQuadExtent2Length )
        return 0;
      if ( ++v57 == &ptPlaneIntersections[(v44 - 1) + 1] )
        return 1;
    }
    return 0;
  }
  v19 = ray->m_Start.x;
  v20 = 0;
  v21 = ray->m_Start.y;
  v22 = 0;
  v23 = ray->m_Extents.x;
  v24 = ray->m_Extents.y;
  v25 = ray->m_Start.z;
  v26 = ray->m_Extents.z;
  iSideMask_4 = 0;
  ptEndPoints[0].x = ray->m_Start.x - v23;
  ptEndPoints[0].y = v21 - v24;
  ptEndPoints[1].y = v21 - v24;
  ptEndPoints[1].x = ptEndPoints[0].x;
  ptEndPoints[1].z = v25 + v26;
  v118 = ptEndPoints[0].x;
  v120 = v25 + v26;
  v121 = ptEndPoints[0].x;
  v27 = vQuadNormal->x;
  v124 = v19 + v23;
  v125 = v21 - v24;
  v127 = v19 + v23;
  v128 = v21 - v24;
  v28 = vQuadNormal->z;
  v129 = v25 + v26;
  v130 = v19 + v23;
  v132 = v25 + v26;
  v29 = vQuadNormal->y;
  v30 = ptEndPoints;
  v133 = v19 + v23;
  ptEndPoints[0].z = v25 - v26;
  v119 = v21 + v24;
  v122 = v21 + v24;
  v123 = v25 - v26;
  v126 = v25 - v26;
  v131 = v21 + v24;
  v134 = v21 + v24;
  v135 = v25 - v26;
  do
  {
    while ( 1 )
    {
      v31 = (((v30->x * v27) + (v30->y * v29)) + (v30->z * v28)) - fQuadPlaneDist;
      fDists[0][v20] = v31;
      if ( v31 <= 0.0 )
        break;
      ++v30;
      iSides[0][v20] = 1;
      v22 |= 1u;
      ++v20;
      if ( v30 == v136 )
        goto LABEL_10;
    }
    ++v30;
    iSides[0][v20] = 2;
    v22 |= 2u;
    ++v20;
  }
  while ( v30 != v136 );
LABEL_10:
  iSideMask = v22;
  if ( !ray->m_IsSwept )
  {
    v32 = v22;
    if ( v22 != 3 )
      return result;
    goto LABEL_20;
  }
  v33 = ray->m_Delta.x;
  v34 = ptEndPoints;
  v35 = ray->m_Delta.y;
  v36 = ray->m_Delta.z;
  do
  {
    v37 = v34->y;
    ++v34;
    v38 = v34[-1].z + v36;
    v39 = v34[-1].x + v33;
    v34[7].y = v37 + v35;
    v34[7].z = v38;
    v34[7].x = v39;
  }
  while ( v34 != v136 );
  v40 = 0;
  v41 = ptEndPoints;
  v42 = 0;
  do
  {
    while ( 1 )
    {
      v43 = (((v41[8].x * v27) + (v41[8].y * v29)) + (v41[8].z * v28)) - fQuadPlaneDist;
      fDists[1][v42] = v43;
      if ( v43 <= 0.0 )
        break;
      iSides[1][v42] = 1;
      ++v41;
      v40 |= 1u;
      ++v42;
      if ( v136 == v41 )
        goto LABEL_19;
    }
    iSides[1][v42] = 2;
    ++v41;
    v40 |= 2u;
    ++v42;
  }
  while ( v136 != v41 );
LABEL_19:
  v32 = iSideMask;
  iSideMask_4 = v40;
  if ( (iSideMask | v40) == 3 )
  {
LABEL_20:
    v44 = 0;
    v45 = iSides[0];
    ptQuadCentera = ptQuadCenter;
    v46 = fDists[0];
    v47 = 0;
    v110 = ptEndPoints;
    if ( v32 == 3 )
      goto LABEL_23;
    while ( 1 )
    {
      v110 += 8;
      v46 += 8;
      v45 += 8;
      if ( v47 == 1 )
        break;
      v47 = 1;
      if ( iSideMask_4 == 3 )
      {
LABEL_23:
        v48 = 1;
        p_x = &v110->x;
        for ( i = 0; i != 8; ++i )
        {
          if ( v45[i] == 2 )
          {
            v51 = i & 4;
            v52 = i ^ 4;
            iAxisCrossings[1] = v51 + (v48 & 3);
            iAxisCrossings[2] = v51 + ((v48 - 2) & 3);
            for ( j = &iAxisCrossings[1]; ; ++j )
            {
              v54 = 8LL * v47 + v52;
              if ( iSides[0][v54] == 1 )
              {
                v61 = v46[i];
                v62 = fDists[0][v54];
                v63 = v62 - v61;
                v64 = 96LL * v47 + 12LL * v52;
                v65 = v44++;
                v66 = (&ptEndPoints[0].x + v64);
                v67 = &ptPlaneIntersections[v65];
                v68 = v62 * (1.0 / (v62 - v61));
                v69 = -v61 * (1.0 / v63);
                v70 = v66[1] * v69;
                v71 = v66[2] * v69;
                v72 = v69 * *v66;
                v73 = (p_x[1] * v68) + v70;
                v74 = p_x[2] * v68;
                v75 = v68 * *p_x;
                v67->y = v73;
                v67->z = v74 + v71;
                v67->x = v75 + v72;
              }
              if ( j == &v114 )
                break;
              v52 = *j;
            }
          }
          ++v48;
          p_x += 3;
        }
      }
    }
    ptQuadCenter = ptQuadCentera;
    if ( ray->m_IsSwept )
    {
      for ( k = 0; k != 8; ++k )
      {
        v77 = iSides[0][k];
        if ( v77 != iSides[1][k] )
        {
          v78 = v77 == 1;
          v79 = v77 != 1;
          v80 = fDists[v79][k];
          v81 = fDists[v78][k];
          v82 = v80 - v81;
          v83 = &ptEndPoints[8 * v78 + k];
          v84 = v44;
          v85 = &ptEndPoints[8 * v79 + k];
          ++v44;
          v86 = &ptPlaneIntersections[v84];
          v87 = v80 * (1.0 / (v80 - v81));
          v88 = -v81 * (1.0 / v82);
          v89 = v85->y * v88;
          v90 = v85->z * v88;
          v91 = v88 * v85->x;
          v92 = (v83->y * v87) + v89;
          v93 = v83->z * v87;
          v94 = v87 * v83->x;
          v86->y = v92;
          v86->z = v93 + v90;
          v86->x = v94 + v91;
        }
      }
    }
    if ( v44 == 0 )
      return 1;
    goto LABEL_34;
  }
  return result;
}


// LineCircleIntersection  (line 2649, @0x000000000241ae50, libserver.so)  // inlines: Dot, DotProduct2D, FastSqrt, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// callers: IntersectRayWithAACylinder
bool __fastcall LineCircleIntersection(
        const Vector2D *const center,
        const float radius,
        const Vector2D *const vLinePt,
        const Vector2D *const vLineDir,
        float *fIntersection1,
        float *fIntersection2)
{
  bool result; // al
  float v7; // xmm2_4
  float v8; // xmm3_4
  float y; // xmm6_4
  float v10; // xmm4_4
  __m128 x_low; // xmm1
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  __m128 v16; // xmm3
  float v17; // xmm1_4
  __m128 v18; // xmm5
  __m128 v19; // xmm0
  unsigned __int32 v20; // xmm0_4
  __int64 v21; // [rsp-8h] [rbp-8h]

  result = 0;
  x_low = LODWORD(vLineDir->x);
  v7 = vLinePt->x - center->x;
  v8 = vLinePt->y - center->y;
  y = vLineDir->y;
  v10 = (x_low.m128_f32[0] * x_low.m128_f32[0]) + (y * y);
  x_low.m128_f32[0] = ((x_low.m128_f32[0] * v7) + (y * v8)) + ((x_low.m128_f32[0] * v7) + (y * v8));
  v12 = ((v7 * v7) + (v8 * v8)) - (radius * radius);
  v13 = (x_low.m128_f32[0] * x_low.m128_f32[0]) - ((4.0 * v10) * v12);
  if ( v13 >= -0.000001 )
  {
    *(&v21 - 1) = v13;
    v14 = fsqrt(*(&v21 - 1));
    v15 = 1.0 / (v10 + v10);
    v16 = _mm_xor_ps(0x80000000, x_low);
    v16.m128_f32[0] = (v16.m128_f32[0] - v14) * v15;
    v17 = (v14 - x_low.m128_f32[0]) * v15;
    if ( v13 >= 0.000001 )
    {
      *fIntersection1 = v16.m128_f32[0];
      *fIntersection2 = v17;
      return 1;
    }
    else
    {
      v18.m128_i32[0] = 0;
      if ( v10 == 0.0 )
      {
        v20 = 0;
      }
      else
      {
        v19 = _mm_cmplt_ss(v16, v18);
        v20 = _mm_andnot_ps(v19, v16).m128_u32[0] | LODWORD(v17) & v19.m128_i32[0];
      }
      *fIntersection2 = v20;
      *fIntersection1 = v20;
      return v12 < 0.0;
    }
  }
  return result;
}


// IntersectRayWithAACylinder  (line 2711, @0x000000000241af70, libserver.so)  // inlines: Collision_ClearTrace, FloatMakePositive, IntersectRayWithAAPlane, VectorAdd, VectorMA, VectorSubtract, operator+, operator+=, operator-, operator=
// calls: LineCircleIntersection, CalcClosestPointOnLineSegment, VectorNormalize
__int64 __fastcall IntersectRayWithAACylinder(
        const Ray_t *const ray,
        const Vector *const center,
        float radius,
        float height,
        CBaseTrace *pTrace)
{
  float v8; // xmm1_4
  float x; // xmm4_4
  float y; // xmm3_4
  float z; // xmm2_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  unsigned int v18; // eax
  float v19; // xmm0_4
  float v21; // xmm4_4
  vec_t v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  vec_t v25; // xmm0_4
  vec_t v26; // xmm2_4
  float v27; // xmm2_4
  float halfHeight; // [rsp+10h] [rbp-80h]
  float flLeaveFrac; // [rsp+14h] [rbp-7Ch]
  float flEnterFrac; // [rsp+18h] [rbp-78h]
  unsigned int v31; // [rsp+1Ch] [rbp-74h]
  float flCircleEnterFrac; // [rsp+28h] [rbp-68h] BYREF
  float flCircleLeaveFrac; // [rsp+2Ch] [rbp-64h] BYREF
  Vector vStart; // [rsp+30h] [rbp-60h] BYREF
  Vector collisionCenter; // [rsp+40h] [rbp-50h] BYREF
  Vector vLineA; // [rsp+50h] [rbp-40h] BYREF
  Vector vLineB; // [rsp+60h] [rbp-30h] BYREF

  pTrace->startpos.x = ray->m_Start.x;
  v8 = height * 0.5;
  pTrace->startpos.y = ray->m_Start.y;
  pTrace->startpos.z = ray->m_Start.z;
  x = ray->m_Start.x;
  pTrace->endpos.x = ray->m_Start.x;
  y = ray->m_Start.y;
  pTrace->endpos.y = y;
  z = ray->m_Start.z;
  pTrace->endpos.z = z;
  pTrace->endpos.x = x + ray->m_Delta.x;
  pTrace->endpos.y = y + ray->m_Delta.y;
  v12 = z + ray->m_Delta.z;
  pTrace->startsolid = 0;
  pTrace->fraction = 1.0;
  pTrace->contents = 0;
  pTrace->endpos.z = v12;
  v13 = ray->m_Start.y - center->y;
  v14 = ray->m_Start.z - center->z;
  vStart.x = ray->m_Start.x - center->x;
  vStart.y = v13;
  v15 = ray->m_Delta.z;
  vStart.z = v14;
  if ( fabs(v15) >= 0.00000001 )
  {
    v21 = (v15 + v14) - v14;
    if ( v21 == 0.0 )
    {
      v17 = 0.0;
      v16 = 0.0;
    }
    else
    {
      v16 = (v8 - v14) * (1.0 / v21);
      v17 = (-v8 - v14) * (1.0 / v21);
      if ( v16 <= v17 )
      {
        v27 = v16;
        v16 = v17;
        v17 = v27;
      }
    }
    if ( v16 < 0.0 || v17 > 1.0 )
      return 0;
  }
  else
  {
    if ( -v8 > v14 || v14 > v8 )
      return 0;
    v16 = 1.0;
    v17 = 0.0;
  }
  halfHeight = v8;
  flLeaveFrac = v16;
  flEnterFrac = v17;
  LOBYTE(v18) = LineCircleIntersection(
                  &vec3_origin,
                  radius,
                  &vStart,
                  &ray->m_Delta,
                  &flCircleEnterFrac,
                  &flCircleLeaveFrac);
  if ( v18 == 0 )
    return 0;
  if ( flCircleLeaveFrac < 0.0 )
    return 0;
  if ( flCircleEnterFrac > 1.0 )
    return 0;
  v19 = fmaxf(flCircleEnterFrac, flEnterFrac);
  if ( v19 > fminf(flCircleLeaveFrac, flLeaveFrac) )
    return 0;
  v31 = v18;
  pTrace->endpos.x = (ray->m_Delta.x * v19) + ray->m_Start.x;
  pTrace->endpos.y = (ray->m_Delta.y * v19) + ray->m_Start.y;
  v22 = (ray->m_Delta.z * v19) + ray->m_Start.z;
  pTrace->fraction = v19;
  pTrace->contents = 1;
  pTrace->endpos.z = v22;
  v23 = center->z;
  v24 = center->x;
  vLineB.y = center->y;
  vLineB.x = v24;
  vLineB.z = v23 - halfHeight;
  vLineA.z = halfHeight + v23;
  vLineA.x = v24 + 0.0;
  vLineA.y = vLineB.y + 0.0;
  CalcClosestPointOnLineSegment(&pTrace->endpos, &vLineA, &vLineB, &collisionCenter, 0);
  v25 = pTrace->endpos.z - collisionCenter.z;
  v26 = pTrace->endpos.x - collisionCenter.x;
  pTrace->plane.normal.y = pTrace->endpos.y - collisionCenter.y;
  pTrace->plane.normal.z = v25;
  pTrace->plane.normal.x = v26;
  VectorNormalize(&pTrace->plane.normal);
  return v31;
}


// CalcClosestPointOnOBB  (line 2789, @0x000000000241b270, libserver.so)  // inlines: Clamp<float>, TransformVector, TransformVectorByInverse, VectorITransform, VectorTransform
// calls: VectorITransform, VectorTransform
// callers: Script_CalcClosestPointOnEntityOBB
Vector __fastcall CalcClosestPointOnOBB(
        const matrix3x4_t *const xform,
        const Vector *const vHalfExtent,
        const Vector *const vPoint)
{
  float v5; // xmm1_4
  float y; // xmm4_4
  float v7; // xmm1_4
  float z; // xmm1_4
  float v9; // xmm0_4
  Vector vClosest; // [rsp+10h] [rbp-40h] BYREF
  __int64 out; // [rsp+20h] [rbp-30h] BYREF
  float v14; // [rsp+28h] [rbp-28h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  VectorITransform(&vPoint->x, xform, &out);
  v5 = -vHalfExtent->x;
  if ( v5 <= *&out )
    v5 = fminf(vHalfExtent->x, *&out);
  y = vHalfExtent->y;
  vClosest.x = v5;
  v7 = -y;
  if ( -y <= *(&out + 1) )
    v7 = fminf(y, *(&out + 1));
  vClosest.y = v7;
  z = vHalfExtent->z;
  v9 = -z;
  if ( -z <= v14 )
    v9 = fminf(z, v14);
  vClosest.z = v9;
  VectorTransform(&vClosest.x, xform, &out);
  *&result.x = out;
  result.z = v14;
  return result;
}


