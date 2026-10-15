
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>  (line 53, @0x00000000022dc820, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// globals: `guard variable for'InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>(PhysFrictionEffectPrecache_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>(PhysFrictionEffectPrecache_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>(PhysFrictionEffectPrecache_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>(
        PhysFrictionEffectPrecache_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>(PhysFrictionEffectPrecache_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>(PhysFrictionEffectPrecache_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>(PhysFrictionEffectPrecache_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>(PhysFrictionEffectPrecache_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>(PhysFrictionEffectPrecache_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<PhysFrictionEffectPrecache_server::CTemplateArg>(PhysFrictionEffectPrecache_server::CTemplateArg &)::s_Manifest;
}


// PhysModelParseSolidByIndex  (line 71, @0x00000000022dc870, libserver.so)  // inlines: Count, GetPtr, GetRawPtr, GetSurfaceProperties, ResolveOffset, V_strcpy_safe<512ul>, memset, operator->, operator[]
// calls: memset, CModel::GetPhysicsContainer, CUtlString::Get, _V_strncpy
// callers: PhysModelParseSolid
__int64 __fastcall PhysModelParseSolidByIndex(
        solid_t *const solid,
        CBaseEntity *pEntity,
        HModel hModel,
        int solidIndex)
{
  const CPhysAggregateData_1 *PhysicsContainer; // rdx
  int v8; // r12d
  __int64 result; // rax
  __int64 v10; // rsi
  const VPhysXBodyPart_t *v11; // r13
  uint32 m_nCount; // ecx
  __int64 m_nOffset; // rcx
  unsigned __int8 *v14; // rax
  CUtlVectorUltraConservative<const CPhysSurfaceProperties*,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  const CUtlString *p_m_name; // rdi
  const char *v17; // rax

  memset(solid, 0, sizeof(solid_t));
  solid->params.inertia = 1.0;
  solid->params.damping = 0.1;
  solid->params.rotdamping = 0.1;
  solid->params.rotInertiaLimit = 0.050000001;
  solid->params.pName = "DEFAULT";
  solid->params.dragCoefficient = 1.0;
  solid->params.enableCollisions = 1;
  if ( hModel.m_pBinding->m_pData == 0 )
  {
    PhysicsContainer = CModel::GetPhysicsContainer(0);
    if ( PhysicsContainer != 0 )
      goto LABEL_3;
    return 0;
  }
  PhysicsContainer = CModel::GetPhysicsContainer(*hModel.m_pBinding->m_pData);
  if ( PhysicsContainer == 0 )
    return 0;
LABEL_3:
  v8 = 0;
  if ( solidIndex >= 0 )
    v8 = solidIndex;
  result = 0;
  if ( PhysicsContainer->m_Parts.m_Size > v8 )
  {
    v10 = 0;
    v11 = PhysicsContainer->m_Parts.m_Memory.m_pMemory[v8];
    m_nCount = v11->m_nSurfacepropertyIndices.m_nCount;
    if ( m_nCount != 0 )
    {
      m_nOffset = v11->m_nSurfacepropertyIndices.m_nOffset;
      v14 = 0;
      if ( m_nOffset != 0 )
        v14 = &v11->m_nSurfacepropertyIndices + m_nOffset;
      v10 = *v14;
      m_nCount = *v14;
    }
    m_pData = PhysicsContainer->m_SurfaceProperties.m_pData;
    p_m_name = 0;
    if ( m_pData != 0 && m_pData->m_Size > m_nCount )
      p_m_name = &m_pData->m_Elements[v10]->m_name;
    v17 = CUtlString::Get(p_m_name);
    _V_strncpy(solid, v17, 512);
    solid->index = v8;
    solid->contents = 1;
    solid->params.mass = v11->m_flMass;
    solid->params.inertia = v11->m_flInertiaScale;
    solid->params.damping = v11->m_flLinearDamping;
    solid->params.rotdamping = v11->m_flAngularDamping;
    return 1;
  }
  return result;
}


// PhysModelParseSolid  (line 117, @0x00000000022dca00, libserver.so)  // inlines: CWeakHandle, Init
// calls: PhysModelParseSolidByIndex
// callers: CFourWheelVehiclePhysics::ParseVehicleScript
__int64 __fastcall PhysModelParseSolid(solid_t *const solid, CBaseEntity *pEntity, HModel hModel)
{
  HModel hModela; // [rsp+0h] [rbp-10h] BYREF

  hModela.m_pBinding = hModel.m_pBinding->m_pData;
  return PhysModelParseSolidByIndex(solid, pEntity, &hModela, -1);
}


// PhysDisableEntityCollisions  (line 133, @0x00000000022dca20, libserver.so)  // inlines: CEntityHandle, GetDebugName, GetEHandle, GetEntryIndex, GetHashCode, GetSerialNumber, Init, operator!=
// calls: CEntityIdentity::GetDebugName, Warning, CBaseEntity::VPhysicsWorld, CBaseEntity::CollisionRulesChanged
// callers: CInteractionManager::StartInteraction, CLogicCollisionPair::Activate, CLogicCollisionPair::InputDisableCollisions, CPhysicsEntitySolver::Spawn, CPhysMotor::Activate
void __fastcall PhysDisableEntityCollisions(CBaseEntity *pEntity0, CBaseEntity *pEntity1)
{
  uint32 m_nHashCode; // r13d
  const char *DebugName; // rax
  uint32 v6; // r12d
  const char *v7; // r14
  const char *v8; // rax
  IVPhysics2World *v9; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int64 v11; // rdx
  __int16 v12; // si
  CEntityIdentity *v13; // rcx
  __int64 v14; // rsi
  __int16 v15; // di

  if ( pEntity0 != 0 && pEntity1 != 0 )
  {
    m_nHashCode = pEntity1->m_worldGroupId.m_nHashCode;
    if ( m_nHashCode == pEntity0->m_worldGroupId.m_nHashCode )
    {
      v9 = CBaseEntity::VPhysicsWorld(pEntity0);
      m_pEntity = pEntity1->m_pEntity;
      v11 = 0xFFFFFFFFLL;
      if ( m_pEntity != 0 )
      {
        v12 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v11 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
      }
      v13 = pEntity0->m_pEntity;
      v14 = 0xFFFFFFFFLL;
      if ( v13 != 0 )
      {
        v15 = 0x7FFF;
        if ( v13->m_EHandle.m_Index != -1 )
          v15 = v13->m_EHandle.m_Index & 0x7FFF;
        v14 = (((v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1)) << 15) | v15 & 0x7FFF;
      }
      if ( (*(*v9 + 368LL))(v9, v14, v11) != 0 )
      {
        CBaseEntity::CollisionRulesChanged(pEntity0);
        CBaseEntity::CollisionRulesChanged(pEntity1);
      }
    }
    else
    {
      DebugName = CEntityIdentity::GetDebugName(pEntity1->m_pEntity);
      v6 = pEntity0->m_worldGroupId.m_nHashCode;
      v7 = DebugName;
      v8 = CEntityIdentity::GetDebugName(pEntity0->m_pEntity);
      Warning(&stru_333F690, v8, v6, v7, m_nHashCode);
    }
  }
}


// PhysEnableEntityCollisions  (line 152, @0x00000000022dd950, libserver.so)  // inlines: CEntityHandle, GetDebugName, GetEHandle, GetEntryIndex, GetHashCode, GetSerialNumber, Init, operator!=
// calls: CEntityIdentity::GetDebugName, Warning, CBaseEntity::VPhysicsWorld, CBaseEntity::CollisionRulesChanged
// callers: CInteractionManager::StopInteraction, CLogicCollisionPair::InputEnableCollisions, CPhysicsEntitySolver::UpdateOnRemove
void __fastcall PhysEnableEntityCollisions(CBaseEntity *pEntity0, CBaseEntity *pEntity1)
{
  uint32 m_nHashCode; // r13d
  const char *DebugName; // rax
  uint32 v6; // r12d
  const char *v7; // r14
  const char *v8; // rax
  IVPhysics2World *v9; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int64 v11; // rdx
  __int16 v12; // si
  CEntityIdentity *v13; // rcx
  __int64 v14; // rsi
  __int16 v15; // di

  if ( pEntity0 != 0 && pEntity1 != 0 )
  {
    m_nHashCode = pEntity1->m_worldGroupId.m_nHashCode;
    if ( m_nHashCode == pEntity0->m_worldGroupId.m_nHashCode )
    {
      v9 = CBaseEntity::VPhysicsWorld(pEntity0);
      m_pEntity = pEntity1->m_pEntity;
      v11 = 0xFFFFFFFFLL;
      if ( m_pEntity != 0 )
      {
        v12 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v11 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
      }
      v13 = pEntity0->m_pEntity;
      v14 = 0xFFFFFFFFLL;
      if ( v13 != 0 )
      {
        v15 = 0x7FFF;
        if ( v13->m_EHandle.m_Index != -1 )
          v15 = v13->m_EHandle.m_Index & 0x7FFF;
        v14 = (((v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1)) << 15) | v15 & 0x7FFF;
      }
      (*(*v9 + 376LL))(v9, v14, v11);
      CBaseEntity::CollisionRulesChanged(pEntity0);
      CBaseEntity::CollisionRulesChanged(pEntity1);
    }
    else
    {
      DebugName = CEntityIdentity::GetDebugName(pEntity1->m_pEntity);
      v6 = pEntity0->m_worldGroupId.m_nHashCode;
      v7 = DebugName;
      v8 = CEntityIdentity::GetDebugName(pEntity0->m_pEntity);
      Warning(&stru_333F690.m_ResponseContexts, v8, v6, v7, m_nHashCode);
    }
  }
}


// PhysEntityCollisionsAreDisabled  (line 168, @0x00000000022ddbb0, libserver.so)  // inlines: CEntityHandle, GetDebugName, GetEHandle, GetEntryIndex, GetHashCode, GetSerialNumber, Init, operator!=
// calls: CEntityIdentity::GetDebugName, Warning, CBaseEntity::VPhysicsWorld
// callers: EntityPhysics_CreateSolver
bool __fastcall PhysEntityCollisionsAreDisabled(CBaseEntity *pEntity0, CBaseEntity *pEntity1)
{
  uint32 m_nHashCode; // r13d
  const char *DebugName; // rax
  uint32 v6; // r14d
  const char *v7; // r15
  const char *v8; // rax
  IVPhysics2World *v9; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int64 v11; // rdx
  __int16 v12; // si
  CEntityIdentity *v13; // rcx
  __int64 v14; // rsi
  __int16 v15; // di

  m_nHashCode = pEntity1->m_worldGroupId.m_nHashCode;
  if ( m_nHashCode != pEntity0->m_worldGroupId.m_nHashCode )
  {
    DebugName = CEntityIdentity::GetDebugName(pEntity1->m_pEntity);
    v6 = pEntity0->m_worldGroupId.m_nHashCode;
    v7 = DebugName;
    v8 = CEntityIdentity::GetDebugName(pEntity0->m_pEntity);
    Warning(&stru_333F690.m_iHealth, v8, v6, v7, m_nHashCode);
  }
  v9 = CBaseEntity::VPhysicsWorld(pEntity0);
  m_pEntity = pEntity1->m_pEntity;
  v11 = 0xFFFFFFFFLL;
  if ( m_pEntity != 0 )
  {
    v12 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v11 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
  }
  v13 = pEntity0->m_pEntity;
  v14 = 0xFFFFFFFFLL;
  if ( v13 != 0 )
  {
    if ( v13->m_EHandle.m_Index == -1 )
      v15 = 0x7FFF;
    else
      v15 = v13->m_EHandle.m_Index & 0x7FFF;
    v14 = (((v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1)) << 15) | v15 & 0x7FFF;
  }
  return (*(*v9 + 384LL))(v9, v14, v11);
}


// PhysComputeSlideDirection  (line 178, @0x00000000022ddd30, libserver.so)  // inlines: DotProduct, VectorMultiply, operator*, operator-=, operator=
void __fastcall PhysComputeSlideDirection(
        IPhysicsObject *pPhysics,
        const Vector *const inputVelocity,
        const AngularImpulse *const inputAngularVelocity,
        Vector *pOutputVelocity,
        Vector *pOutputAngularVelocity,
        float minMass)
{
  __int64 i; // r15
  float z; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // r14
  float v15; // [rsp+18h] [rbp-58h]
  float angVel; // [rsp+1Ch] [rbp-54h]
  float angVel_4; // [rsp+20h] [rbp-50h]
  float angVel_8; // [rsp+24h] [rbp-4Ch]
  float x; // [rsp+28h] [rbp-48h]
  float y; // [rsp+2Ch] [rbp-44h]
  Vector normal; // [rsp+30h] [rbp-40h] BYREF

  x = inputVelocity->x;
  y = inputVelocity->y;
  angVel_8 = inputVelocity->z;
  v15 = inputAngularVelocity->x;
  angVel_4 = inputAngularVelocity->y;
  angVel = inputAngularVelocity->z;
  for ( i = (*(*pPhysics + 1872LL))(pPhysics); (*(*i + 16LL))(i) != 0; (*(*i + 96LL))(i) )
  {
    v12 = (*(*i + 24LL))(i, 1);
    if ( (*(*v12 + 1512LL))(v12) == 0 || (*(*v12 + 208LL))(v12) > minMass )
    {
      (*(*i + 48LL))(i, &normal);
      z = normal.z;
      if ( pOutputAngularVelocity != 0 )
      {
        v10 = ((v15 * normal.x) + (angVel_4 * normal.y)) + (angVel * normal.z);
        v15 = normal.x * v10;
        angVel_4 = normal.y * v10;
        angVel = v10 * normal.z;
        z = normal.z;
      }
      v11 = ((x * normal.x) + (y * normal.y)) + (angVel_8 * z);
      if ( v11 > 0.0 )
      {
        y = y - (normal.y * v11);
        x = x - (normal.x * v11);
        angVel_8 = angVel_8 - (v11 * z);
      }
    }
  }
  (*(*pPhysics + 1880LL))(pPhysics, i);
  if ( pOutputVelocity != 0 )
  {
    pOutputVelocity->x = x;
    pOutputVelocity->y = y;
    pOutputVelocity->z = angVel_8;
  }
  if ( pOutputAngularVelocity != 0 )
  {
    pOutputAngularVelocity->x = v15;
    pOutputAngularVelocity->y = angVel_4;
    pOutputAngularVelocity->z = angVel;
  }
}


// PhysHasContactWithOtherInDirection  (line 244, @0x00000000022ddf30, libserver.so)  // inlines: DotProduct
// calls: IPhysicsBody::GetGameData
// callers: RagdollSolveSeparation
bool __fastcall PhysHasContactWithOtherInDirection(IPhysicsObject *pPhysics, const Vector *const dir)
{
  void *GameData; // r13
  __int64 i; // rbx
  const IPhysicsBody *v6; // rax
  bool v7; // r12
  Vector normal; // [rsp+0h] [rbp-40h] BYREF

  GameData = IPhysicsBody::GetGameData(pPhysics);
  for ( i = (*(*pPhysics + 1872LL))(pPhysics); ; (*(*i + 96LL))(i) )
  {
    if ( (*(*i + 16LL))(i) == 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v6 = (*(*i + 24LL))(i, 1);
    if ( GameData != IPhysicsBody::GetGameData(v6) )
    {
      (*(*i + 48LL))(i, &normal);
      if ( (((normal.x * dir->x) + (normal.y * dir->y)) + (normal.z * dir->z)) > 0.0 )
        break;
    }
  }
  v7 = 1;
LABEL_7:
  (*(*pPhysics + 1880LL))(pPhysics, i);
  return v7;
}


// PhysForceClearVelocity  (line 270, @0x00000000022de010, libserver.so)
void __fastcall PhysForceClearVelocity(IPhysicsObject *pPhys)
{
  __int64 v2; // rbx

  v2 = (*(*pPhys + 1872LL))(pPhys);
  (*(*pPhys + 544LL))(pPhys, &vec3_origin);
  (*(*pPhys + 1696LL))(pPhys, &vec3_origin);
  while ( (*(*v2 + 16LL))(v2) != 0 )
  {
    (*(*v2 + 72LL))(v2);
    (*(*v2 + 96LL))(v2);
  }
  (*(*pPhys + 1880LL))(pPhys, v2);
}


// PhysFrictionEffect  (line 286, @0x00000000022de0a0, libserver.so)
// calls: VectorAngles, DispatchParticleEffect
// strings: "particles/impact_fx/impact_physics_dust.vpcf"
void __fastcall PhysFrictionEffect(
        Vector *const vecPos,
        CUtlStringToken surfaceProps,
        CUtlStringToken surfacePropsHit,
        double a4,
        vec_t a5,
        float a6,
        float energy)
{
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  float v14; // xmm4_4
  __int16 v15; // dx
  __int16 v16; // dx
  __int16 v17; // ax
  float v18; // [rsp+4h] [rbp-4Ch]
  float v19; // [rsp+4h] [rbp-4Ch]
  const CPhysSurfaceProperties *phita; // [rsp+8h] [rbp-48h]
  const CPhysSurfaceProperties *phitb; // [rsp+8h] [rbp-48h]
  Vector vecVela; // [rsp+10h] [rbp-40h] BYREF
  QAngle angDirection; // [rsp+20h] [rbp-30h] BYREF

  *&vecVela.x = a4;
  vecVela.z = a5;
  VectorAngles(&vecVela, &angDirection);
  v10 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
  v11 = (*(*v10 + 16LL))(v10, surfaceProps.m_nHashCode, 0);
  v12 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
  v13 = (*(*v12 + 16LL))(v12, surfacePropsHit.m_nHashCode, 0);
  v14 = a6;
  v15 = *(v13 + 176);
  if ( v15 == 67 )
  {
    if ( a6 >= 7840.0 )
    {
      v19 = a6;
      phitb = v13;
      DispatchParticleEffect(
        "particles/impact_fx/impact_physics_dust.vpcf",
        0,
        0,
        -1,
        *&vecPos->x,
        vecPos->z,
        *&angDirection.x,
        angDirection.z);
      v14 = v19;
      v13 = phitb;
    }
  }
  else if ( v15 == 68 && a6 >= 2250.0 )
  {
    v18 = a6;
    phita = v13;
    DispatchParticleEffect(
      "particles/impact_fx/impact_physics_dust.vpcf",
      0,
      0,
      -1,
      *&vecPos->x,
      vecPos->z,
      *&angDirection.x,
      angDirection.z);
    v13 = phita;
    v14 = v18;
  }
  if ( v14 > 25000.0 )
  {
    v16 = *(v11 + 176);
    if ( v16 == 71 || v16 == 77 )
    {
      v17 = *(v13 + 176);
      if ( v17 == 67 || v17 == 77 )
        DispatchParticleEffect(
          &stru_333F690.m_OnKilled.m_pDesc,
          0,
          0,
          -1,
          *&vecPos->x,
          vecPos->z,
          *&angDirection.x,
          angDirection.z);
    }
  }
}


// PhysSetGameFlags  (line 330, @0x00000000022de260, libserver.so)
// callers: CPhysicsProp::CreateVPhysics, CPhysicsProp::InputDisablePickup, RagdollActivate, CPhysicsProp::OnPhysGunDrop
unsigned __int16 __fastcall PhysSetGameFlags(IPhysicsObject *pPhys, unsigned __int16 gameFlags)
{
  unsigned int v3; // r12d

  v3 = (*(*pPhys + 1296LL))(pPhys) | gameFlags;
  (*(*pPhys + 1304LL))(pPhys, v3);
  return v3;
}


// PhysClearGameFlags  (line 339, @0x00000000022de2a0, libserver.so)
// callers: CPhysConstraint::Deactivate, CRagdollProp::ClearFlagsThink, CPhysicsProp::ClearFlagsThink, CPhysicsProp::InputEnablePickup
unsigned __int16 __fastcall PhysClearGameFlags(IPhysicsObject *pPhys, unsigned __int16 gameFlags)
{
  int v3; // r12d

  v3 = (*(*pPhys + 1296LL))(pPhys) & ~gameFlags;
  (*(*pPhys + 1304LL))(pPhys, v3);
  return v3;
}


