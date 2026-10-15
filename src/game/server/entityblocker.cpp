
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityBlocker::Create  (line 21, @0x00000000021ce0c0, libserver.so)
// calls: CBaseEntity::Create, CCollisionProperty::SetupPhysicsFromUnscaledAABB
// callers: CC_Test_Entity_Blocker, CPropDoorRotating::CreateDoorBlocker, CBaseServerVehicle::HandlePassengerExit
CEntityBlocker *__fastcall CEntityBlocker::Create(
        const Vector *const origin,
        const Vector *const mins,
        const Vector *const maxs,
        CBaseEntity *pOwner,
        bool bBlockPhysics)
{
  CBaseEntity *v8; // rax
  CEntityBlocker *v9; // rbx
  CNetworkTransmitComponent *p_m_NetworkTransmitComponent; // r15

  v8 = CBaseEntity::Create("entity_blocker", origin, &vec3_angle, pOwner);
  v9 = v8;
  if ( v8 != 0 )
  {
    p_m_NetworkTransmitComponent = &v8[1].m_NetworkTransmitComponent;
    CCollisionProperty::SetupPhysicsFromUnscaledAABB(
      &v8[1].m_NetworkTransmitComponent,
      VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED,
      4,
      mins,
      maxs);
    if ( !bBlockPhysics )
      (*(v9->m_Collision._vptr_ICollideable + 18))(p_m_NetworkTransmitComponent);
  }
  return v9;
}


// CEntityBlocker::Spawn  (line 40, @0x00000000021bb370, libserver.so)
// calls: CBaseEntity::Spawn, CBaseModelEntity::SetModelFromKeyValues
void __fastcall CEntityBlocker::Spawn(CEntityBlocker *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
}


// CEntityBlocker::Precache  (line 49, @0x00000000021de110, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CEntityBlocker::Precache(CEntityBlocker *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CC_Test_Entity_Blocker  (line 60, @0x00000000021ce150, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-
// calls: UTIL_GetCommandClient, CGameTrace::Init, CBaseEntity::GetAbsOrigin, SafeGetViewVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CEntityBlocker::Create, NDebugOverlay::Box
void __fastcall CC_Test_Entity_Blocker(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // r12
  const Vector *AbsOrigin; // rax
  const CViewVectors *ViewVectors; // rbx
  const CViewVectors *v5; // rdx
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  const CViewVectors *v9; // rbx
  const CViewVectors *v10; // rax
  const CViewVectors *v11; // rbx
  const CViewVectors *v12; // rax
  float v13; // [rsp+14h] [rbp-17Ch]
  float v14; // [rsp+14h] [rbp-17Ch]
  float v15; // [rsp+18h] [rbp-178h]
  float v16; // [rsp+18h] [rbp-178h]
  float v17; // [rsp+1Ch] [rbp-174h]
  float v18; // [rsp+1Ch] [rbp-174h]
  Vector vecForward; // [rsp+20h] [rbp-170h] BYREF
  CTraceFilterSimple v20; // [rsp+30h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+70h] [rbp-120h] BYREF
  trace_t tr; // [rsp+C0h] [rbp-D0h] BYREF

  CommandClient = UTIL_GetCommandClient();
  (*(CommandClient->_vptr_IHandleEntity + 61))(CommandClient, &vecForward, 0, 0);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v13 = vecForward.x * 256.0;
  v15 = vecForward.y * 256.0;
  v17 = 256.0 * vecForward.z;
  AbsOrigin = CBaseEntity::GetAbsOrigin(CommandClient);
  v14 = v13 + AbsOrigin->x;
  v16 = v15 + AbsOrigin->y;
  v18 = v17 + AbsOrigin->z;
  ViewVectors = SafeGetViewVectors();
  v5 = SafeGetViewVectors();
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_Start.w = 0.0;
  ray.m_Delta.x = v14 - (v14 + 0.0);
  ray.m_Delta.y = v16 - (v16 + 0.0);
  ray.m_Delta.z = (v18 - 256.0) - (v18 + 256.0);
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Extents.x = ViewVectors->m_vHullMax.x - v5->m_vHullMin.x;
  ray.m_Extents.y = ViewVectors->m_vHullMax.y - v5->m_vHullMin.y;
  v6 = ViewVectors->m_vHullMax.z - v5->m_vHullMin.z;
  ray.m_Extents.x = ray.m_Extents.x * 0.5;
  ray.m_Extents.y = ray.m_Extents.y * 0.5;
  ray.m_Extents.z = v6 * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_StartOffset.x = v5->m_vHullMin.x + ViewVectors->m_vHullMax.x;
  ray.m_StartOffset.y = v5->m_vHullMin.y + ViewVectors->m_vHullMax.y;
  v7 = v5->m_vHullMin.z + ViewVectors->m_vHullMax.z;
  ray.m_Start.x = (v14 + 0.0) + (ray.m_StartOffset.x * 0.5);
  v8 = v7 * 0.5;
  ray.m_StartOffset.x = -(ray.m_StartOffset.x * 0.5);
  ray.m_Start.y = (v16 + 0.0) + (ray.m_StartOffset.y * 0.5);
  ray.m_StartOffset.y = -(ray.m_StartOffset.y * 0.5);
  ray.m_StartOffset.z = -v8;
  ray.m_Start.z = (v18 + 256.0) + v8;
  CTraceFilterSimple::CTraceFilterSimple(&v20, CommandClient, 4, 0);
  v20.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v20, &tr);
  if ( !tr.startsolid )
  {
    v9 = SafeGetViewVectors();
    v10 = SafeGetViewVectors();
    CEntityBlocker::Create(&tr.endpos, &v10->m_vHullMin, &v9->m_vHullMax, 0, 1);
    v11 = SafeGetViewVectors();
    v12 = SafeGetViewVectors();
    NDebugOverlay::Box(&tr.endpos, &v12->m_vHullMin, &v11->m_vHullMax, 0, 255, 0, 1000.0, 64);
  }
}


