
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// FBoxVisible  (line 30, @0x0000000002267710, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, WorldAlignMaxs, WorldAlignMins, operator=
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
__int64 __fastcall FBoxVisible(CBaseEntity *pLooker, CBaseEntity *pTarget, Vector *const vecTargetOrigin, float flSize)
{
  float v6; // xmm1_4
  const Vector *AbsOrigin; // rax
  CCollisionProperty *m_pCollision; // rdi
  float (__fastcall *v9)(IUniformRandomStream *, float, double); // r15
  unsigned int *v10; // rax
  CCollisionProperty *v11; // rdi
  double v12; // xmm1_8
  float *v13; // rax
  IUniformRandomStream *v14; // rdi
  float x; // xmm0_4
  float v16; // xmm0_4
  CCollisionProperty *v17; // rdi
  float (__fastcall *v18)(IUniformRandomStream *, float, double); // r15
  __int64 v19; // rax
  CCollisionProperty *v20; // rdi
  double v21; // xmm1_8
  __int64 v22; // rax
  IUniformRandomStream *v23; // rdi
  float y; // xmm0_4
  float v25; // xmm0_4
  CCollisionProperty *v26; // rdi
  double (__fastcall *v27)(IUniformRandomStream *, float, double); // r15
  __int64 v28; // rax
  CCollisionProperty *v29; // rdi
  double v30; // xmm1_8
  __int64 v31; // rax
  IUniformRandomStream *v32; // rdi
  float z; // xmm0_4
  double v34; // xmm0_8
  ConVar *m_pParent; // rax
  float m_fValue; // xmm1_4
  int v39; // [rsp+Ch] [rbp-1B4h]
  unsigned int v40; // [rsp+20h] [rbp-1A0h]
  unsigned int v41; // [rsp+20h] [rbp-1A0h]
  unsigned int v42; // [rsp+20h] [rbp-1A0h]
  float v43; // [rsp+24h] [rbp-19Ch]
  float vecTarget; // [rsp+30h] [rbp-190h]
  float vecTargeta; // [rsp+30h] [rbp-190h]
  float vecTarget_4; // [rsp+34h] [rbp-18Ch]
  float vecTarget_4a; // [rsp+34h] [rbp-18Ch]
  float vecTarget_8; // [rsp+38h] [rbp-188h]
  float vecTarget_8a; // [rsp+38h] [rbp-188h]
  double vecLookerOrigin; // [rsp+40h] [rbp-180h]
  CTraceFilterSimple v52; // [rsp+50h] [rbp-170h] BYREF
  Ray_t v53; // [rsp+90h] [rbp-130h] BYREF
  trace_t tr; // [rsp+E0h] [rbp-E0h] BYREF

  if ( pLooker->m_nWaterLevel.m_Value != 3 )
  {
    if ( pTarget->m_nWaterLevel.m_Value != 3 )
      goto LABEL_3;
    return 0;
  }
  if ( pTarget->m_nWaterLevel.m_Value == 0 )
    return 0;
LABEL_3:
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  vecLookerOrigin = (*(pLooker->_vptr_IHandleEntity + 164))(pLooker);
  v43 = v6;
  v39 = 5;
  while ( 1 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    m_pCollision = pTarget->m_pCollision;
    vecTarget_8 = AbsOrigin->x;
    vecTarget_4 = AbsOrigin->y;
    vecTarget = AbsOrigin->z;
    v9 = *(*random_valve + 8LL);
    if ( m_pCollision != 0 )
    {
      v10 = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision);
      v11 = pTarget->m_pCollision;
      *&v12 = *v10;
      *&v12 = *&v12 - flSize;
      if ( v11 != 0 )
      {
        v40 = LODWORD(v12);
        v13 = (*(v11->_vptr_ICollideable + 1))(v11);
        v14 = random_valve;
        x = *v13;
        *&v12 = v40;
      }
      else
      {
        v14 = random_valve;
        x = vec3_origin.x;
      }
    }
    else
    {
      v14 = random_valve;
      x = vec3_origin.x;
      *&v12 = LODWORD(vec3_origin.x);
      *&v12 = vec3_origin.x - flSize;
    }
    v16 = v9(v14, x + flSize, v12);
    v17 = pTarget->m_pCollision;
    vecTarget_8a = vecTarget_8 + v16;
    v18 = *(*random_valve + 8LL);
    if ( v17 != 0 )
    {
      v19 = (*(v17->_vptr_ICollideable + 2))(v17);
      v20 = pTarget->m_pCollision;
      *&v21 = *(v19 + 4);
      *&v21 = *&v21 - flSize;
      if ( v20 != 0 )
      {
        v41 = LODWORD(v21);
        v22 = (*(v20->_vptr_ICollideable + 1))(v20);
        v23 = random_valve;
        y = *(v22 + 4);
        *&v21 = v41;
      }
      else
      {
        v23 = random_valve;
        y = vec3_origin.y;
      }
    }
    else
    {
      v23 = random_valve;
      y = vec3_origin.y;
      *&v21 = LODWORD(y);
      *&v21 = y - flSize;
    }
    v25 = v18(v23, y + flSize, v21);
    v26 = pTarget->m_pCollision;
    vecTarget_4a = vecTarget_4 + v25;
    v27 = *(*random_valve + 8LL);
    if ( v26 != 0 )
    {
      v28 = (*(v26->_vptr_ICollideable + 2))(v26);
      v29 = pTarget->m_pCollision;
      *&v30 = *(v28 + 8);
      *&v30 = *&v30 - flSize;
      if ( v29 != 0 )
      {
        v42 = LODWORD(v30);
        v31 = (*(v29->_vptr_ICollideable + 1))(v29);
        v32 = random_valve;
        z = *(v31 + 8);
        *&v30 = v42;
      }
      else
      {
        v32 = random_valve;
        z = vec3_origin.z;
      }
    }
    else
    {
      v32 = random_valve;
      z = vec3_origin.z;
      *&v30 = LODWORD(z);
      *&v30 = z - flSize;
    }
    v34 = v27(v32, z + flSize, v30);
    *&v53.m_Start.x = vecLookerOrigin;
    m_pParent = phys_traceline_radius.m_pParent;
    v53.m_IsRay = 1;
    v53.m_Start.w = 0.0;
    memset(&v53.m_Delta.w, 0, 36);
    m_fValue = m_pParent->m_Value.m_fValue;
    vecTargeta = *&v34 + vecTarget;
    v53.m_Delta.y = vecTarget_4a - *(&vecLookerOrigin + 1);
    v53.m_flRadius = m_fValue;
    v53.m_Start.z = v43;
    v53.m_Delta.z = vecTargeta - v43;
    v53.m_Delta.x = vecTarget_8a - *&vecLookerOrigin;
    v53.m_IsSwept = (((v53.m_Delta.x * v53.m_Delta.x) + (v53.m_Delta.y * v53.m_Delta.y))
                   + (v53.m_Delta.z * v53.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&v52, pLooker, 4, 0);
    v52.m_attr.m_nInteractsWith |= 0x4041uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v53, &v52, &tr);
    if ( tr.fraction == 1.0 )
      break;
    if ( --v39 == 0 )
      return 0;
  }
  vecTargetOrigin->x = vecTarget_8a;
  vecTargetOrigin->y = vecTarget_4a;
  vecTargetOrigin->z = vecTargeta;
  return 1;
}


// VecCheckToss  (line 77, @0x0000000002267c20, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, FastSqrt, GetFloat, Init, Length, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorDivide, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator+=, operator-, operator/, operator=
// calls: CGameTrace::Init, CBaseEntity::GetLocalAngles, AngleVectors, CGamePhysicsQueryInterface::TraceRay, UTIL_TraceHull, sqrt
// callers: VecCheckToss
__m128i __fastcall VecCheckToss(
        CBaseEntity *pEntity,
        CTraceFilter *pFilter,
        Vector vecSpot1,
        Vector vecSpot2,
        float flHeightMaxRatio,
        float flGravityAdj,
        bool bRandomize,
        Vector *vecMins,
        Vector *vecMaxs)
{
  vec_t v13; // eax
  const QAngle *LocalAngles; // rax
  float v16; // xmm4_4
  CGamePhysicsQueryInterface *v17; // rdi
  __m128d v18; // xmm4
  float z; // xmm2_4
  float v20; // xmm0_4
  double v21; // xmm3_8
  float v22; // xmm6_4
  double v23; // xmm0_8
  float v24; // xmm0_4
  float v25; // xmm7_4
  vec_t y; // xmm3_4
  ConVar *m_pParent; // rax
  vec_t v28; // xmm11_4
  float v29; // xmm12_4
  float v30; // xmm0_4
  CGamePhysicsQueryInterface *v31; // rdi
  float v32; // xmm7_4
  float v33; // xmm6_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // [rsp+Ch] [rbp-1C4h]
  float v39; // [rsp+14h] [rbp-1BCh]
  float v41; // [rsp+20h] [rbp-1B0h]
  float v42; // [rsp+20h] [rbp-1B0h]
  float v43; // [rsp+20h] [rbp-1B0h]
  float time1a; // [rsp+24h] [rbp-1ACh]
  float m_fValue; // [rsp+28h] [rbp-1A8h]
  Vector vecSpot1a; // [rsp+60h] [rbp-170h] BYREF
  Vector vecApex; // [rsp+70h] [rbp-160h] BYREF
  Vector forward; // [rsp+80h] [rbp-150h] BYREF
  Vector right; // [rsp+90h] [rbp-140h] BYREF
  Ray_t ray; // [rsp+A0h] [rbp-130h] BYREF
  trace_t tr; // [rsp+F0h] [rbp-E0h] BYREF

  vecSpot1a = vecSpot1;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  m_fValue = sv_gravity.m_pParent->m_Value.m_fValue;
  if ( (vecSpot2.z - vecSpot1a.z) > 500.0 )
    goto LABEL_2;
  LocalAngles = CBaseEntity::GetLocalAngles(pEntity);
  AngleVectors(LocalAngles, &forward, &right, 0);
  if ( bRandomize )
  {
    v42 = (*(*random_valve + 8LL))(random_valve, -8.0, 8.0);
    v36 = (*(*random_valve + 8LL))(random_valve, -16.0, 16.0) + v42;
    vecSpot2.x = (right.x * v36) + vecSpot2.x;
    vecSpot2.y = (right.y * v36) + vecSpot2.y;
    vecSpot2.z = (v36 * right.z) + vecSpot2.z;
    v43 = (*(*random_valve + 8LL))(random_valve, -8.0, 8.0);
    v37 = (*(*random_valve + 8LL))(random_valve, -16.0, 16.0) + v43;
    vecSpot2.x = (forward.x * v37) + vecSpot2.x;
    vecSpot2.y = (forward.y * v37) + vecSpot2.y;
    vecSpot2.z = vecSpot2.z + (v37 * forward.z);
  }
  v16 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.w = 0.0;
  ray.m_flRadius = v16;
  ray.m_Delta.y = ((((vecSpot2.y - vecSpot1a.y) * 0.5) + vecSpot1a.y) + 0.0)
                - (((vecSpot2.y - vecSpot1a.y) * 0.5) + vecSpot1a.y);
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_Delta.x = ((((vecSpot2.x - vecSpot1a.x) * 0.5) + vecSpot1a.x) + 0.0)
                - (((vecSpot2.x - vecSpot1a.x) * 0.5) + vecSpot1a.x);
  ray.m_Delta.z = ((((vecSpot2.z - vecSpot1a.z) * 0.5) + vecSpot1a.z) + 300.0)
                - (((vecSpot2.z - vecSpot1a.z) * 0.5) + vecSpot1a.z);
  ray.m_Start.y = ((vecSpot2.y - vecSpot1a.y) * 0.5) + vecSpot1a.y;
  ray.m_Start.x = ((vecSpot2.x - vecSpot1a.x) * 0.5) + vecSpot1a.x;
  ray.m_Start.z = ((vecSpot2.z - vecSpot1a.z) * 0.5) + vecSpot1a.z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v17 = g_pPhysicsQuery;
  pFilter->m_attr.m_nInteractsWith |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(v17, &ray, pFilter, &tr);
  z = tr.endpos.z;
  if ( tr.fraction != 1.0 )
    z = tr.endpos.z - 15.0;
  if ( flHeightMaxRatio == -1.0 )
  {
    v20 = vecSpot1a.z;
  }
  else
  {
    v18.m128d_f64[1] = 0.0;
    v34 = fmaxf(vecSpot1a.z, vecSpot2.z);
    v35 = fsqrt(
            (((vecSpot2.x - vecSpot1a.x) * (vecSpot2.x - vecSpot1a.x))
           + ((vecSpot2.y - vecSpot1a.y) * (vecSpot2.y - vecSpot1a.y)))
          + ((vecSpot2.z - vecSpot1a.z) * (vecSpot2.z - vecSpot1a.z)))
        * flHeightMaxRatio;
    if ( (z - v34) > v35 )
      z = v34 + v35;
    v20 = vecSpot1a.z;
  }
  if ( v20 > z )
    goto LABEL_2;
  if ( vecSpot2.z > z )
    goto LABEL_2;
  v21 = (flGravityAdj * m_fValue) * 0.5;
  v18.m128d_f64[0] = sqrt((z - v20) / v21);
  v22 = _mm_movedup_pd(v18).m128d_f64[0];
  v23 = sqrt((z - vecSpot2.z) / v21);
  if ( v22 < 0.1 )
    goto LABEL_2;
  v24 = v23;
  v38 = flGravityAdj * m_fValue;
  v25 = 1.0 / (v24 + v22);
  y = vecSpot1a.y;
  m_pParent = phys_traceline_radius.m_pParent;
  vecApex.z = z;
  v41 = v22;
  v28 = vecSpot1a.z;
  v29 = m_pParent->m_Value.m_fValue;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_Delta.z = z - vecSpot1a.z;
  ray.m_flRadius = v29;
  ray.m_IsRay = 1;
  v39 = (vecSpot2.x - vecSpot1a.x) * v25;
  time1a = (vecSpot2.y - vecSpot1a.y) * v25;
  vecApex.x = (v22 * v39) + vecSpot1a.x;
  vecApex.y = (v22 * time1a) + vecSpot1a.y;
  ray.m_Delta.x = vecApex.x - vecSpot1a.x;
  ray.m_Delta.y = vecApex.y - vecSpot1a.y;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.x = vecSpot1a.x;
  pFilter->m_attr.m_nInteractsWith |= 0x85001uLL;
  ray.m_Start.y = y;
  ray.m_Start.z = v28;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, pFilter, &tr);
  if ( tr.fraction != 1.0 )
    goto LABEL_2;
  v30 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.Vector = vecSpot2;
  ray.m_flRadius = v30;
  ray.m_Start.w = 0.0;
  ray.m_IsRay = 1;
  ray.m_Delta.y = vecApex.y - vecSpot2.y;
  ray.m_Delta.x = vecApex.x - vecSpot2.x;
  ray.m_Delta.z = vecApex.z - vecSpot2.z;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v31 = g_pPhysicsQuery;
  pFilter->m_attr.m_nInteractsWith |= 0x5001uLL;
  CGamePhysicsQueryInterface::TraceRay(v31, &ray, pFilter, &tr);
  v32 = v38;
  v33 = v41;
  if ( tr.fraction != 1.0 )
    goto LABEL_2;
  if ( vecMins == 0
    || vecMaxs == 0
    || (UTIL_TraceHull(&vecSpot1a, &vecApex, vecMins, vecMaxs, 0x85001u, pFilter, &tr),
        v32 = v38,
        v33 = v41,
        tr.fraction >= 1.0) )
  {
    ray.m_Start.x = v39;
    ray.m_Start.y = time1a;
    ray.m_Start.z = v33 * v32;
  }
  else
  {
LABEL_2:
    v13 = vec3_origin.z;
    *&ray.m_Start.x = *&vec3_origin.x;
    ray.m_Start.z = v13;
  }
  return _mm_loadl_epi64(&ray);
}


// VecCheckToss  (line 210, @0x00000000022686d0, libserver.so)
// calls: CTraceFilterSimple::CTraceFilterSimple, VecCheckToss
// callers: CBaseCombatCharacter::Weapon_Drop
__m128i __fastcall VecCheckToss(
        CBaseEntity *pEntity,
        bool bRandomize,
        Vector *vecMins,
        Vector *vecMaxs,
        double a5,
        vec_t a6,
        double a7,
        vec_t a8,
        float a9,
        float flHeightMaxRatio,
        float flGravityAdj)
{
  CTraceFilterSimple traceFilter; // [rsp+50h] [rbp-70h] BYREF
  Vector vecSpot2a; // 0:^20.12
  Vector vecSpot1a; // 0:^30.12

  *&vecSpot1a.x = a5;
  vecSpot1a.z = a6;
  *&vecSpot2a.x = a7;
  vecSpot2a.z = a8;
  CTraceFilterSimple::CTraceFilterSimple(&traceFilter, pEntity, 4, 0);
  return VecCheckToss(pEntity, &traceFilter, vecSpot1a, vecSpot2a, a9, flHeightMaxRatio, bRandomize, vecMins, vecMaxs);
}


// VecCheckThrow  (line 223, @0x0000000002268790, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, FastSqrt, GetFloat, Init, Length, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator*=, operator+, operator-
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
__m128i __fastcall VecCheckThrow(
        CBaseEntity *pEdict,
        const Vector *const vecSpot1,
        Vector *vecMins,
        Vector *vecMaxs,
        double a5,
        vec_t a6,
        float a7,
        float flSpeed,
        float flGravityAdj)
{
  float y; // xmm7_4
  float z; // xmm11_4
  __m128d v13; // xmm10
  float v14; // xmm3_4
  float x; // xmm14_4
  float v16; // xmm13_4
  float v17; // xmm12_4
  float m_fValue; // xmm2_4
  float v19; // xmm6_4
  vec_t v20; // eax
  float v22; // xmm10_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  __m128d v28; // xmm2
  float v29; // xmm11_4
  float v30; // xmm10_4
  float v31; // xmm9_4
  float v32; // xmm3_4
  float v33; // xmm14_4
  float v34; // xmm4_4
  float v35; // xmm15_4
  float v36; // xmm13_4
  float v37; // xmm12_4
  float v38; // xmm12_4
  float v39; // xmm14_4
  float v40; // xmm13_4
  float v45; // [rsp+2Ch] [rbp-1B4h]
  float v46; // [rsp+2Ch] [rbp-1B4h]
  float v47; // [rsp+30h] [rbp-1B0h]
  float v48; // [rsp+30h] [rbp-1B0h]
  float v49; // [rsp+34h] [rbp-1ACh]
  float v50; // [rsp+38h] [rbp-1A8h]
  float v51; // [rsp+3Ch] [rbp-1A4h]
  float v52; // [rsp+44h] [rbp-19Ch]
  float v53; // [rsp+48h] [rbp-198h]
  float v54; // [rsp+4Ch] [rbp-194h]
  CTraceFilterSimple v55; // [rsp+70h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+B0h] [rbp-130h] BYREF
  trace_t tr; // [rsp+100h] [rbp-E0h] BYREF
  Vector v59; // 0:^20.12

  v59.z = a6;
  y = vecSpot1->y;
  z = vecSpot1->z;
  *&v59.x = a5;
  v45 = *&a5 - vecSpot1->x;
  v47 = *(&a5 + 1) - y;
  v53 = vecSpot1->x + (0.5 * v45);
  v52 = y + (0.5 * (*(&a5 + 1) - y));
  v13.m128d_f64[1] = ((0.5 * (a6 - z)) + z);
  v49 = fsqrt(((v45 * v45) + ((*(&a5 + 1) - y) * (*(&a5 + 1) - y))) + ((a6 - z) * (a6 - z))) / a7;
  v50 = a6 - z;
  v51 = flSpeed * sv_gravity.m_pParent->m_Value.m_fValue;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  v13.m128d_f64[0] = v13.m128d_f64[1] + v51 * 0.5 * (v49 * 0.5) * (v49 * 0.5);
  v14 = _mm_movedup_pd(v13).m128d_f64[0];
  v54 = v14;
  CGameTrace::Init(&tr);
  x = vecSpot1->x;
  v16 = vecSpot1->y;
  v17 = vecSpot1->z;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = m_fValue;
  ray.m_Delta.y = v52 - v16;
  ray.m_Delta.z = v54 - v17;
  ray.m_Delta.x = v53 - x;
  ray.m_IsRay = 1;
  ray.m_Start.x = x;
  ray.m_Start.y = v16;
  ray.m_Start.z = v17;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v55, pEdict, 4, 0);
  v55.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v55, &tr);
  v19 = v45;
  if ( tr.fraction != 1.0 )
    goto LABEL_2;
  v46 = v47;
  v48 = v19;
  v22 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.w = 0.0;
  ray.m_Delta.y = v52 - v59.y;
  ray.m_flRadius = v22;
  ray.m_Delta.z = v54 - v59.z;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_Delta.x = v53 - v59.x;
  ray.m_IsRay = 1;
  ray.m_Start.Vector = v59;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v55, pEdict, 4, 0);
  v55.m_attr.m_nInteractsWith |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v55, &tr);
  v23 = v51;
  v24 = v49;
  v25 = v48;
  v26 = v46;
  v27 = v50;
  if ( tr.fraction != 1.0 )
    goto LABEL_2;
  if ( vecMins == 0 )
    goto LABEL_7;
  if ( vecMaxs == 0 )
    goto LABEL_7;
  v29 = vecSpot1->x;
  v30 = vecSpot1->y;
  ray.m_Start.w = 0.0;
  v31 = vecSpot1->z;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_Delta.x = v53 - v29;
  ray.m_Delta.y = v52 - v30;
  v32 = vecMins->y;
  v33 = vecMins->x;
  ray.m_Delta.z = v54 - v31;
  v34 = vecMins->z;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v35 = vecMaxs->x;
  v36 = vecMaxs->y;
  v37 = vecMaxs->z;
  ray.m_Extents.x = (vecMaxs->x - v33) * 0.5;
  ray.m_Extents.y = (v36 - v32) * 0.5;
  ray.m_Extents.z = (v37 - v34) * 0.5;
  v38 = (v37 + v34) * 0.5;
  v39 = (v33 + v35) * 0.5;
  v40 = (v36 + v32) * 0.5;
  ray.m_Start.z = v31 + v38;
  ray.m_Start.x = v29 + v39;
  ray.m_Start.y = v30 + v40;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_StartOffset.x = -v39;
  ray.m_StartOffset.y = -v40;
  ray.m_StartOffset.z = -v38;
  CTraceFilterSimple::CTraceFilterSimple(&v55, pEdict, 4, 0);
  v55.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v55, &tr);
  v23 = v51;
  v24 = v49;
  v25 = v48;
  v26 = v46;
  v27 = v50;
  if ( tr.fraction >= 1.0 )
  {
LABEL_7:
    ray.m_Start.x = v25 * (1.0 / v24);
    ray.m_Start.y = v26 * (1.0 / v24);
    v28.m128d_f64[1] = ((1.0 / v24) * v27);
    v28.m128d_f64[0] = v28.m128d_f64[1] + (v24 * v23) * 0.5;
    ray.m_Start.z = _mm_movedup_pd(v28).m128d_f64[0];
  }
  else
  {
LABEL_2:
    v20 = vec3_origin.z;
    *&ray.m_Start.x = *&vec3_origin.x;
    ray.m_Start.z = v20;
  }
  return _mm_loadl_epi64(&ray);
}


