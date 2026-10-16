
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntitySpawnerAsyncBase<CBaseEntity>::StartNewEntity  (line 96, @0x0000000001f78c40, libserver.so)  // inlines: AddRef, ApplyContextKeys, StartNewEntity
// calls: operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::CopyFrom, operator delete, _Unwind_Resume
void __fastcall CEntitySpawnerAsyncBase<CBaseEntity>::StartNewEntity(
        CEntitySpawnerAsyncBase<CBaseEntity>_0 *const this)
{
  CEntityKeyValues *v2; // rbx
  CEntitySpawnerContext<CBaseEntity> *i; // rbx

  v2 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v2);
  this->m_pEntityKeyValues = v2;
  ++v2->m_nRefCount;
  CEntityKeyValuesModifyScope::BeginModify(&this->m_modifyScope, this->m_pEntityKeyValues);
  for ( i = this->m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(this->m_pEntityKeyValues, &i->m_entityKeyValues, 0);
}


// CEntitySpawnerAsyncBase<CPointHMDAnchor>::StartNewEntity  (line 96, @0x00000000023088c0, libserver.so)  // inlines: AddRef, ApplyContextKeys, StartNewEntity
// calls: operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::CopyFrom, operator delete, _Unwind_Resume
void __fastcall CEntitySpawnerAsyncBase<CPointHMDAnchor>::StartNewEntity(
        CEntitySpawnerAsyncBase<CPointHMDAnchor> *const this)
{
  CEntityKeyValues *v2; // rbx
  CEntitySpawnerContext<CPointHMDAnchor> *i; // rbx

  v2 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v2);
  this->m_pEntityKeyValues = v2;
  ++v2->m_nRefCount;
  CEntityKeyValuesModifyScope::BeginModify(&this->m_modifyScope, this->m_pEntityKeyValues);
  for ( i = this->m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(this->m_pEntityKeyValues, &i->m_entityKeyValues, 0);
}


// CEntitySpawnerAsyncBase<CPhysicsProp>::StartNewEntity  (line 96, @0x0000000002374af0, libserver.so)  // inlines: AddRef, ApplyContextKeys, StartNewEntity
// calls: operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::CopyFrom, operator delete, _Unwind_Resume
void __fastcall CEntitySpawnerAsyncBase<CPhysicsProp>::StartNewEntity(
        CEntitySpawnerAsyncBase<CPhysicsProp> *const this)
{
  CEntityKeyValues *v2; // rbx
  CEntitySpawnerContext<CPhysicsProp> *i; // rbx

  v2 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v2);
  this->m_pEntityKeyValues = v2;
  ++v2->m_nRefCount;
  CEntityKeyValuesModifyScope::BeginModify(&this->m_modifyScope, this->m_pEntityKeyValues);
  for ( i = this->m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(this->m_pEntityKeyValues, &i->m_entityKeyValues, 0);
}


// CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::StartNewEntity  (line 96, @0x000000000255feb0, libserver.so)  // inlines: AddRef, ApplyContextKeys, StartNewEntity
// calls: operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::CopyFrom, operator delete, _Unwind_Resume
void __fastcall CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::StartNewEntity(
        CEntitySpawnerAsyncBase<CDOTA_BaseNPC>_0 *const this)
{
  CEntityKeyValues *v2; // rbx
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx

  v2 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v2);
  this->m_pEntityKeyValues = v2;
  ++v2->m_nRefCount;
  CEntityKeyValuesModifyScope::BeginModify(&this->m_modifyScope, this->m_pEntityKeyValues);
  for ( i = this->m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(this->m_pEntityKeyValues, &i->m_entityKeyValues, 0);
}


// CEntitySpawnerAsyncBase<CDOTA_Item_Physical>::StartNewEntity  (line 96, @0x00000000025cad00, libserver.so)  // inlines: AddRef, ApplyContextKeys, StartNewEntity
// calls: operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::CopyFrom, operator delete, _Unwind_Resume
void __fastcall CEntitySpawnerAsyncBase<CDOTA_Item_Physical>::StartNewEntity(
        CEntitySpawnerAsyncBase<CDOTA_Item_Physical> *const this)
{
  CEntityKeyValues *v2; // rbx
  CEntitySpawnerContext<CDOTA_Item_Physical> *i; // rbx

  v2 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v2);
  this->m_pEntityKeyValues = v2;
  ++v2->m_nRefCount;
  CEntityKeyValuesModifyScope::BeginModify(&this->m_modifyScope, this->m_pEntityKeyValues);
  for ( i = this->m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(this->m_pEntityKeyValues, &i->m_entityKeyValues, 0);
}


// CEntitySpawnerAsyncBase<CDOTA_Item>::StartNewEntity  (line 96, @0x00000000025cad80, libserver.so)  // inlines: AddRef, ApplyContextKeys, StartNewEntity
// calls: operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::CopyFrom, operator delete, _Unwind_Resume
void __fastcall CEntitySpawnerAsyncBase<CDOTA_Item>::StartNewEntity(CEntitySpawnerAsyncBase<CDOTA_Item> *const this)
{
  CEntityKeyValues *v2; // rbx
  CEntitySpawnerContext<CDOTA_Item> *i; // rbx

  v2 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v2);
  this->m_pEntityKeyValues = v2;
  ++v2->m_nRefCount;
  CEntityKeyValuesModifyScope::BeginModify(&this->m_modifyScope, this->m_pEntityKeyValues);
  for ( i = this->m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(this->m_pEntityKeyValues, &i->m_entityKeyValues, 0);
}


// CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync  (line 157, @0x0000000001f92f40, libserver.so)  // inlines: CEntityKeyValuesModifyScope, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlString, CUtlStringToken, GetClassInfo, Init, OverrideAllocator, SetToIdentity, SpawnGroupDesc_t, ~CEntitySpawnerAsyncBase
// calls: CEntityKeyValuesModifyScope::BeginModify, SetIdentityMatrix, CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::FindSpawnGroupFilter, CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase, _Unwind_Resume
// callers: Script_SpawnEntityListFromTableAsynchronous, Script_SpawnEntityGroupFromTable
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, g_pSpawnGroupMgr
void __fastcall CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync(
        CEntitySpawnerAsync<CBaseEntity>_0 *const this,
        float flTimeoutInterval,
        EntitySpawnerAsyncBehavior_t behavior,
        CEntitySpawnerContext<CBaseEntity> *pContext,
        const matrix3x4a_t *pSpawnGroupToWorld,
        ResourceManifestLoadPriority_t nManifestPriority,
        int iPriorityLoader,
        bool bManualCompletion)
{
  CEntityKeyValuesModifyScope *p_m_modifyScope; // rdi
  const char *m_pszCPPClassname; // rax
  const matrix3x4a_t *v13; // rax
  __int64 v14; // rdx
  CGameEntitySystem *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  SpawnGroupHandle_t v18; // r12d
  SpawnGroupHandle_t v19; // eax
  ILoadingSpawnGroup *m_pLoadingSpawnGroup; // rdi
  CUtlScratchMemoryPool *v21; // rax
  CUtlScratchMemoryPool *v22; // rdx
  unsigned __int64 v23; // rax
  CBaseEntity::CEntityInstanceEntityClass *v24; // rax
  char v25; // al
  int (**vptr_CEntitySpawnerBase)(...); // rax
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  CEntitySystem *v28; // rdi
  matrix3x4_t matrix; // [rsp+20h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-A0h]
  __int64 v35; // [rsp+58h] [rbp-98h]
  __int64 v36; // [rsp+60h] [rbp-90h]
  char *pFilterName; // [rsp+68h] [rbp-88h]
  const char *v38; // [rsp+70h] [rbp-80h]
  __int64 v39; // [rsp+78h] [rbp-78h]
  __int64 v40; // [rsp+80h] [rbp-70h]
  __int64 v41; // [rsp+88h] [rbp-68h]
  int v42; // [rsp+90h] [rbp-60h]
  int v43; // [rsp+94h] [rbp-5Ch]
  int v44; // [rsp+98h] [rbp-58h]
  ResourceManifestLoadPriority_t v45; // [rsp+9Ch] [rbp-54h]
  float v46; // [rsp+A0h] [rbp-50h]
  __int64 v47; // [rsp+A8h] [rbp-48h]
  char v48; // [rsp+B0h] [rbp-40h]
  bool v49; // [rsp+B1h] [rbp-3Fh]
  char v50; // [rsp+B2h] [rbp-3Eh]
  char v51; // [rsp+B3h] [rbp-3Dh]
  char v52; // [rsp+B4h] [rbp-3Ch]
  bool v53; // [rsp+B5h] [rbp-3Bh]
  char v54; // [rsp+B6h] [rbp-3Ah]

  p_m_modifyScope = &this->m_modifyScope;
  p_m_modifyScope->m_pKeyValues = 0;
  p_m_modifyScope->m_pPrevAllocator = 0;
  p_m_modifyScope[-1].m_pKeyValues = off_3FCEBB0;
  CEntityKeyValuesModifyScope::BeginModify(p_m_modifyScope, 0);
  this->m_pContext = pContext;
  this->_vptr_CEntitySpawnerBase = off_3FCEC50;  // vptr: CEntitySpawnerAsync<CBaseEntity>
  this->m_scriptClassName.m_pString = 0;
  this->m_pFilter = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  pFilterName = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = -2;
  v45 = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  v46 = 0.0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 1;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  SetIdentityMatrix(&matrix);
  v36 = 0;
  pFilterName = 0;
  v34 = 0;
  m_pszCPPClassname = g_pEntityCBaseEntityClass->m_pClassInfo->m_pszCPPClassname;
  v46 = flTimeoutInterval;
  v43 = -(behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP);
  v44 = iPriorityLoader;
  v38 = m_pszCPPClassname;
  v13 = pSpawnGroupToWorld;
  if ( pSpawnGroupToWorld == 0 )
    v13 = &g_MatrixIdentity;
  v14 = *&v13->m_flMatVal[0][0];
  v48 = 0;
  v42 = 0;
  v49 = behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY;
  *&matrix.m_flMatVal[0][0] = v14;
  v15 = g_pGameEntitySystem;
  *&matrix.m_flMatVal[0][2] = *&v13->m_flMatVal[0][2];
  *&matrix.m_flMatVal[1][0] = *&v13->m_flMatVal[1][0];
  v16 = *&v13->m_flMatVal[2][0];
  v17 = *&v13->m_flMatVal[2][2];
  this->m_behavior = behavior;
  *&matrix.m_flMatVal[2][0] = v16;
  *&matrix.m_flMatVal[2][2] = v17;
  v45 = nManifestPriority;
  v53 = bManualCompletion;
  this->m_pLoadingSpawnGroup = CGameEntitySystem::CreateLoadingSpawnGroup(v15);
  v18 = (*(*engine + 456LL))(engine, &matrix);
  if ( pFilterName != 0 )
    this->m_pFilter = CGameEntitySystem::FindSpawnGroupFilter(g_pGameEntitySystem, pFilterName);
  else
    this->m_pFilter = 0;
  v19 = v43;
  m_pLoadingSpawnGroup = this->m_pLoadingSpawnGroup;
  if ( v43 == 0 )
    v19 = v18;
  this->m_hOwnerSpawnGroup = v19;
  v21 = (*(m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 8))(m_pLoadingSpawnGroup);
  v22 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v21;
  this->m_pPrevAllocator = v22;
  if ( v18 == -1 )
  {
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v28 = g_pEntitySystem;
    this->m_hSpawnGroupHandle = ActiveSpawnGroupHandle;
    this->m_mSpawnGroupToWorld = *CEntitySystem::GetSpawnOriginOffset(v28);
  }
  else
  {
    v23 = *&matrix.m_flMatVal[0][0];
    this->m_hSpawnGroupHandle = v18;
    *&this->m_mSpawnGroupToWorld.m_flMatVal[0][0] = __PAIR128__(*&matrix.m_flMatVal[0][2], v23);
    *&this->m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&matrix.m_flMatVal[1][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&matrix.m_flMatVal[2][0];
  }
  v24 = g_pEntityCBaseEntityClass;
  this->m_pEntityKeyValues = 0;
  this->m_pEntityClass = v24;
  if ( g_pApplication != 0 )
    v25 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v25 = 0;
  this->m_bValidateKeys = v25;
  vptr_CEntitySpawnerBase = this->_vptr_CEntitySpawnerBase;
  this->m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*vptr_CEntitySpawnerBase)(this);
  if ( v18 != 0 )
    CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup(g_pSpawnGroupMgr, v18, this->m_pLoadingSpawnGroup);
}


// CEntitySpawnerAsync<CBaseEntity>::Init  (line 195, @0x000000000217fab0, libserver.so)  // inlines: CUtlStringToken, GetClassInfo, Init, OverrideAllocator, SetToIdentity, SpawnGroupDesc_t
// calls: SetIdentityMatrix, CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::FindSpawnGroupFilter, CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset
// callers: CC_Ent_Create, CSource2Server::OnLoadSessionPersisters
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CEntitySpawnerAsync<CBaseEntity>::Init(
        CEntitySpawnerAsync<CBaseEntity> *const this,
        const EntitySpawnerAsyncDesc_t<CBaseEntity> *const spawnerDesc)
{
  float m_flTimeoutInterval; // xmm0_4
  const char *m_pszCPPClassname; // rax
  const matrix3x4a_t *m_pSpawnGroupToWorld; // rax
  CGameEntitySystem *v7; // rdi
  ResourceManifestLoadPriority_t m_nManifestPriority; // edx
  __int64 v9; // rax
  uint32 m_nHashCode; // edx
  SpawnGroupHandle_t v11; // r12d
  SpawnGroupHandle_t m_hOwner; // eax
  ILoadingSpawnGroup *m_pLoadingSpawnGroup; // rdi
  CUtlScratchMemoryPool *v14; // rax
  CUtlScratchMemoryPool *v15; // rdx
  unsigned __int64 v16; // rax
  CBaseEntity::CEntityInstanceEntityClass *v17; // rax
  char v18; // al
  int (**vptr_CEntitySpawnerBase)(...); // rax
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  CEntitySystem *v21; // rdi
  SpawnGroupDesc_t desc; // [rsp+0h] [rbp-D0h] BYREF

  memset(&desc.m_pWorldName, 0, 72);
  desc.m_iPriorityLoader = -2;
  desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  desc.m_flTimeoutInterval = 0.0;
  desc.m_pSaveFileName = 0;
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_bDontSpawnEntities = 0;
  desc.m_bBlockUntilLoaded = 0;
  desc.m_bLoadStreamingData = 1;
  desc.m_bCreateNewSceneWorld = 0;
  desc.m_bManualCompletion = 0;
  desc.m_bSetActivePostLoad = 0;
  SetIdentityMatrix(&desc.m_vecWorldOffset);
  desc.m_pEntityLumpName = 0;
  desc.m_pEntityFilterName = 0;
  m_flTimeoutInterval = spawnerDesc->m_flTimeoutInterval;
  desc.m_pWorldName = 0;
  m_pszCPPClassname = g_pEntityCBaseEntityClass->m_pClassInfo->m_pszCPPClassname;
  desc.m_flTimeoutInterval = m_flTimeoutInterval;
  desc.m_pDescriptiveName = m_pszCPPClassname;
  desc.m_hOwner = spawnerDesc->m_hOwnerSpawnGroup;
  desc.m_iPriorityLoader = spawnerDesc->m_iPriorityLoader;
  m_pSpawnGroupToWorld = spawnerDesc->m_pSpawnGroupToWorld;
  if ( m_pSpawnGroupToWorld == 0 )
    m_pSpawnGroupToWorld = &g_MatrixIdentity;
  *&desc.m_vecWorldOffset.m_flMatVal[0][0] = *&m_pSpawnGroupToWorld->m_flMatVal[0][0];
  v7 = g_pGameEntitySystem;
  *&desc.m_vecWorldOffset.m_flMatVal[0][2] = *&m_pSpawnGroupToWorld->m_flMatVal[0][2];
  qmemcpy(desc.m_vecWorldOffset.m_flMatVal[1], m_pSpawnGroupToWorld->m_flMatVal[1], 24);
  m_nManifestPriority = spawnerDesc->m_nManifestPriority;
  v9 = *&m_pSpawnGroupToWorld->m_flMatVal[2][2];
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_manifestLoadPriority = m_nManifestPriority;
  LOBYTE(m_nManifestPriority) = spawnerDesc->m_bManualCompletion;
  *&desc.m_vecWorldOffset.m_flMatVal[2][2] = v9;
  LODWORD(v9) = spawnerDesc->m_behavior;
  desc.m_bManualCompletion = m_nManifestPriority;
  m_nHashCode = spawnerDesc->m_worldGroupId.m_nHashCode;
  this->m_behavior = v9;
  desc.m_bDontSpawnEntities = v9 == 2;
  desc.m_worldGroupId.m_nHashCode = m_nHashCode;
  this->m_pLoadingSpawnGroup = CGameEntitySystem::CreateLoadingSpawnGroup(v7);
  v11 = (*(*engine + 456LL))(engine, &desc);
  if ( desc.m_pEntityFilterName != 0 )
    this->m_pFilter = CGameEntitySystem::FindSpawnGroupFilter(g_pGameEntitySystem, desc.m_pEntityFilterName);
  else
    this->m_pFilter = 0;
  m_hOwner = desc.m_hOwner;
  m_pLoadingSpawnGroup = this->m_pLoadingSpawnGroup;
  if ( desc.m_hOwner == 0 )
    m_hOwner = v11;
  this->m_hOwnerSpawnGroup = m_hOwner;
  v14 = (*(m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 8))(m_pLoadingSpawnGroup);
  v15 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v14;
  this->m_pPrevAllocator = v15;
  if ( v11 == -1 )
  {
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v21 = g_pEntitySystem;
    this->m_hSpawnGroupHandle = ActiveSpawnGroupHandle;
    this->m_mSpawnGroupToWorld = *CEntitySystem::GetSpawnOriginOffset(v21);
  }
  else
  {
    v16 = *&desc.m_vecWorldOffset.m_flMatVal[0][0];
    this->m_hSpawnGroupHandle = v11;
    *&this->m_mSpawnGroupToWorld.m_flMatVal[0][0] = __PAIR128__(*&desc.m_vecWorldOffset.m_flMatVal[0][2], v16);
    *&this->m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&desc.m_vecWorldOffset.m_flMatVal[1][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&desc.m_vecWorldOffset.m_flMatVal[2][0];
  }
  v17 = g_pEntityCBaseEntityClass;
  this->m_pEntityKeyValues = 0;
  this->m_pEntityClass = v17;
  v18 = 0;
  if ( g_pApplication != 0 )
    v18 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  this->m_bValidateKeys = v18;
  vptr_CEntitySpawnerBase = this->_vptr_CEntitySpawnerBase;
  this->m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*vptr_CEntitySpawnerBase)(this);
  if ( v11 != 0 )
    CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup(g_pSpawnGroupMgr, v11, this->m_pLoadingSpawnGroup);
}


// CEntitySpawnerAsync<CPointHMDAnchor>::Init  (line 195, @0x000000000231a040, libserver.so)  // inlines: CUtlStringToken, GetClassInfo, SetToIdentity, SpawnGroupDesc_t
// calls: SetIdentityMatrix, CEntitySpawnerAsyncBase<CPointHMDAnchor>::Init
// callers: CBasePlayer::Activate
void __fastcall CEntitySpawnerAsync<CPointHMDAnchor>::Init(
        CEntitySpawnerAsync<CPointHMDAnchor> *const this,
        const EntitySpawnerAsyncDesc_t<CPointHMDAnchor> *const spawnerDesc)
{
  float m_flTimeoutInterval; // xmm0_4
  const char *m_pszCPPClassname; // rax
  const matrix3x4a_t *m_pSpawnGroupToWorld; // rax
  EntitySpawnerAsyncBehavior_t m_behavior; // esi
  __int64 v8; // rax
  SpawnGroupDesc_t desc; // [rsp+0h] [rbp-C0h] BYREF

  memset(&desc.m_pWorldName, 0, 72);
  desc.m_iPriorityLoader = -2;
  desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  desc.m_flTimeoutInterval = 0.0;
  desc.m_pSaveFileName = 0;
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_bDontSpawnEntities = 0;
  desc.m_bBlockUntilLoaded = 0;
  desc.m_bLoadStreamingData = 1;
  desc.m_bCreateNewSceneWorld = 0;
  desc.m_bManualCompletion = 0;
  desc.m_bSetActivePostLoad = 0;
  SetIdentityMatrix(&desc.m_vecWorldOffset);
  desc.m_pEntityLumpName = 0;
  desc.m_pEntityFilterName = 0;
  m_flTimeoutInterval = spawnerDesc->m_flTimeoutInterval;
  desc.m_pWorldName = 0;
  m_pszCPPClassname = g_pEntityCPointHMDAnchorClass->m_pClassInfo->m_pszCPPClassname;
  desc.m_flTimeoutInterval = m_flTimeoutInterval;
  desc.m_pDescriptiveName = m_pszCPPClassname;
  desc.m_hOwner = spawnerDesc->m_hOwnerSpawnGroup;
  desc.m_iPriorityLoader = spawnerDesc->m_iPriorityLoader;
  m_pSpawnGroupToWorld = spawnerDesc->m_pSpawnGroupToWorld;
  if ( m_pSpawnGroupToWorld == 0 )
    m_pSpawnGroupToWorld = &g_MatrixIdentity;
  m_behavior = spawnerDesc->m_behavior;
  *&desc.m_vecWorldOffset.m_flMatVal[0][0] = *&m_pSpawnGroupToWorld->m_flMatVal[0][0];
  qmemcpy(desc.m_vecWorldOffset.m_flMatVal[1], m_pSpawnGroupToWorld->m_flMatVal[1], 24);
  v8 = *&m_pSpawnGroupToWorld->m_flMatVal[2][2];
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_bDontSpawnEntities = m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY;
  *&desc.m_vecWorldOffset.m_flMatVal[2][2] = v8;
  desc.m_manifestLoadPriority = spawnerDesc->m_nManifestPriority;
  desc.m_bManualCompletion = spawnerDesc->m_bManualCompletion;
  desc.m_worldGroupId.m_nHashCode = spawnerDesc->m_worldGroupId.m_nHashCode;
  CEntitySpawnerAsyncBase<CPointHMDAnchor>::Init(this, m_behavior, &desc);
}


// CEntitySpawnerAsync<CPhysicsProp>::Init  (line 195, @0x000000000237a6c0, libserver.so)  // inlines: CUtlStringToken, GetClassInfo, Init, OverrideAllocator, SetToIdentity, SpawnGroupDesc_t
// calls: SetIdentityMatrix, CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::FindSpawnGroupFilter, CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset
// callers: phys_shoot
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CEntitySpawnerAsync<CPhysicsProp>::Init(
        CEntitySpawnerAsync<CPhysicsProp> *const this,
        const EntitySpawnerAsyncDesc_t<CPhysicsProp> *const spawnerDesc)
{
  float m_flTimeoutInterval; // xmm0_4
  const char *m_pszCPPClassname; // rax
  const matrix3x4a_t *m_pSpawnGroupToWorld; // rax
  CGameEntitySystem *v7; // rdi
  ResourceManifestLoadPriority_t m_nManifestPriority; // edx
  __int64 v9; // rax
  uint32 m_nHashCode; // edx
  SpawnGroupHandle_t v11; // r12d
  SpawnGroupHandle_t m_hOwner; // eax
  ILoadingSpawnGroup *m_pLoadingSpawnGroup; // rdi
  CUtlScratchMemoryPool *v14; // rax
  CUtlScratchMemoryPool *v15; // rdx
  unsigned __int64 v16; // rax
  CPhysicsProp::CEntityInstanceEntityClass *v17; // rax
  char v18; // al
  int (**vptr_CEntitySpawnerBase)(...); // rax
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  CEntitySystem *v21; // rdi
  SpawnGroupDesc_t desc; // [rsp+0h] [rbp-D0h] BYREF

  memset(&desc.m_pWorldName, 0, 72);
  desc.m_iPriorityLoader = -2;
  desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  desc.m_flTimeoutInterval = 0.0;
  desc.m_pSaveFileName = 0;
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_bDontSpawnEntities = 0;
  desc.m_bBlockUntilLoaded = 0;
  desc.m_bLoadStreamingData = 1;
  desc.m_bCreateNewSceneWorld = 0;
  desc.m_bManualCompletion = 0;
  desc.m_bSetActivePostLoad = 0;
  SetIdentityMatrix(&desc.m_vecWorldOffset);
  desc.m_pEntityLumpName = 0;
  desc.m_pEntityFilterName = 0;
  m_flTimeoutInterval = spawnerDesc->m_flTimeoutInterval;
  desc.m_pWorldName = 0;
  m_pszCPPClassname = g_pEntityCPhysicsPropClass->m_pClassInfo->m_pszCPPClassname;
  desc.m_flTimeoutInterval = m_flTimeoutInterval;
  desc.m_pDescriptiveName = m_pszCPPClassname;
  desc.m_hOwner = spawnerDesc->m_hOwnerSpawnGroup;
  desc.m_iPriorityLoader = spawnerDesc->m_iPriorityLoader;
  m_pSpawnGroupToWorld = spawnerDesc->m_pSpawnGroupToWorld;
  if ( m_pSpawnGroupToWorld == 0 )
    m_pSpawnGroupToWorld = &g_MatrixIdentity;
  *&desc.m_vecWorldOffset.m_flMatVal[0][0] = *&m_pSpawnGroupToWorld->m_flMatVal[0][0];
  v7 = g_pGameEntitySystem;
  *&desc.m_vecWorldOffset.m_flMatVal[0][2] = *&m_pSpawnGroupToWorld->m_flMatVal[0][2];
  qmemcpy(desc.m_vecWorldOffset.m_flMatVal[1], m_pSpawnGroupToWorld->m_flMatVal[1], 24);
  m_nManifestPriority = spawnerDesc->m_nManifestPriority;
  v9 = *&m_pSpawnGroupToWorld->m_flMatVal[2][2];
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_manifestLoadPriority = m_nManifestPriority;
  LOBYTE(m_nManifestPriority) = spawnerDesc->m_bManualCompletion;
  *&desc.m_vecWorldOffset.m_flMatVal[2][2] = v9;
  LODWORD(v9) = spawnerDesc->m_behavior;
  desc.m_bManualCompletion = m_nManifestPriority;
  m_nHashCode = spawnerDesc->m_worldGroupId.m_nHashCode;
  this->m_behavior = v9;
  desc.m_bDontSpawnEntities = v9 == 2;
  desc.m_worldGroupId.m_nHashCode = m_nHashCode;
  this->m_pLoadingSpawnGroup = CGameEntitySystem::CreateLoadingSpawnGroup(v7);
  v11 = (*(*engine + 456LL))(engine, &desc);
  if ( desc.m_pEntityFilterName != 0 )
    this->m_pFilter = CGameEntitySystem::FindSpawnGroupFilter(g_pGameEntitySystem, desc.m_pEntityFilterName);
  else
    this->m_pFilter = 0;
  m_hOwner = desc.m_hOwner;
  m_pLoadingSpawnGroup = this->m_pLoadingSpawnGroup;
  if ( desc.m_hOwner == 0 )
    m_hOwner = v11;
  this->m_hOwnerSpawnGroup = m_hOwner;
  v14 = (*(m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 8))(m_pLoadingSpawnGroup);
  v15 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v14;
  this->m_pPrevAllocator = v15;
  if ( v11 == -1 )
  {
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v21 = g_pEntitySystem;
    this->m_hSpawnGroupHandle = ActiveSpawnGroupHandle;
    this->m_mSpawnGroupToWorld = *CEntitySystem::GetSpawnOriginOffset(v21);
  }
  else
  {
    v16 = *&desc.m_vecWorldOffset.m_flMatVal[0][0];
    this->m_hSpawnGroupHandle = v11;
    *&this->m_mSpawnGroupToWorld.m_flMatVal[0][0] = __PAIR128__(*&desc.m_vecWorldOffset.m_flMatVal[0][2], v16);
    *&this->m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&desc.m_vecWorldOffset.m_flMatVal[1][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&desc.m_vecWorldOffset.m_flMatVal[2][0];
  }
  v17 = g_pEntityCPhysicsPropClass;
  this->m_pEntityKeyValues = 0;
  this->m_pEntityClass = v17;
  v18 = 0;
  if ( g_pApplication != 0 )
    v18 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  this->m_bValidateKeys = v18;
  vptr_CEntitySpawnerBase = this->_vptr_CEntitySpawnerBase;
  this->m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*vptr_CEntitySpawnerBase)(this);
  if ( v11 != 0 )
    CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup(g_pSpawnGroupMgr, v11, this->m_pLoadingSpawnGroup);
}


// CEntitySpawnerAsync<CDOTA_BaseNPC>::Init  (line 195, @0x000000000257d590, libserver.so)  // inlines: CUtlStringToken, GetClassInfo, Init, OverrideAllocator, SetToIdentity, SpawnGroupDesc_t
// calls: SetIdentityMatrix, CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::FindSpawnGroupFilter, CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset
// callers: CDOTAGamerules::PrecacheNextARDMHeroForPlayer, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT, CDOTAGamerules::StartCreateHeroStatues, DOTA_PrecacheUnitByNameAsync, DOTA_VScript_PrecacheUnitFromTableAsync, DOTA_VScript_CreateUnitByNameAsync, DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawnerAsync<CDOTA_BaseNPC> >, DOTA_Hero_Spawn, CDOTA_BaseNPC_Hero::CheckForCourierChange, CDOTA_BaseNPC_Hero::CheckForWardChange, CDOTA_Item_Courier::OnSpellStart, CDotaNPCSpawnerAsync<CDOTA_BaseNPC>::CDotaNPCSpawnerAsync
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CEntitySpawnerAsync<CDOTA_BaseNPC>::Init(
        CEntitySpawnerAsync<CDOTA_BaseNPC>_0 *const this,
        const EntitySpawnerAsyncDesc_t<CDOTA_BaseNPC> *const spawnerDesc)
{
  float m_flTimeoutInterval; // xmm0_4
  const char *m_pszCPPClassname; // rax
  const matrix3x4a_t *m_pSpawnGroupToWorld; // rax
  CGameEntitySystem *v7; // rdi
  ResourceManifestLoadPriority_t m_nManifestPriority; // edx
  __int64 v9; // rax
  uint32 m_nHashCode; // edx
  SpawnGroupHandle_t v11; // r12d
  SpawnGroupHandle_t m_hOwner; // eax
  ILoadingSpawnGroup *m_pLoadingSpawnGroup; // rdi
  CUtlScratchMemoryPool *v14; // rax
  CUtlScratchMemoryPool *v15; // rdx
  unsigned __int64 v16; // rax
  CDOTA_BaseNPC::CEntityInstanceEntityClass *v17; // rax
  char v18; // al
  int (**vptr_CEntitySpawnerBase)(...); // rax
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  CEntitySystem *v21; // rdi
  SpawnGroupDesc_t desc; // [rsp+0h] [rbp-D0h] BYREF

  memset(&desc.m_pWorldName, 0, 72);
  desc.m_iPriorityLoader = -2;
  desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  desc.m_flTimeoutInterval = 0.0;
  desc.m_pSaveFileName = 0;
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_bDontSpawnEntities = 0;
  desc.m_bBlockUntilLoaded = 0;
  desc.m_bLoadStreamingData = 1;
  desc.m_bCreateNewSceneWorld = 0;
  desc.m_bManualCompletion = 0;
  desc.m_bSetActivePostLoad = 0;
  SetIdentityMatrix(&desc.m_vecWorldOffset);
  desc.m_pEntityLumpName = 0;
  desc.m_pEntityFilterName = 0;
  m_flTimeoutInterval = spawnerDesc->m_flTimeoutInterval;
  desc.m_pWorldName = 0;
  m_pszCPPClassname = g_pEntityCDOTA_BaseNPCClass->m_pClassInfo->m_pszCPPClassname;
  desc.m_flTimeoutInterval = m_flTimeoutInterval;
  desc.m_pDescriptiveName = m_pszCPPClassname;
  desc.m_hOwner = spawnerDesc->m_hOwnerSpawnGroup;
  desc.m_iPriorityLoader = spawnerDesc->m_iPriorityLoader;
  m_pSpawnGroupToWorld = spawnerDesc->m_pSpawnGroupToWorld;
  if ( m_pSpawnGroupToWorld == 0 )
    m_pSpawnGroupToWorld = &g_MatrixIdentity;
  *&desc.m_vecWorldOffset.m_flMatVal[0][0] = *&m_pSpawnGroupToWorld->m_flMatVal[0][0];
  v7 = g_pGameEntitySystem;
  *&desc.m_vecWorldOffset.m_flMatVal[0][2] = *&m_pSpawnGroupToWorld->m_flMatVal[0][2];
  qmemcpy(desc.m_vecWorldOffset.m_flMatVal[1], m_pSpawnGroupToWorld->m_flMatVal[1], 24);
  m_nManifestPriority = spawnerDesc->m_nManifestPriority;
  v9 = *&m_pSpawnGroupToWorld->m_flMatVal[2][2];
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_manifestLoadPriority = m_nManifestPriority;
  LOBYTE(m_nManifestPriority) = spawnerDesc->m_bManualCompletion;
  *&desc.m_vecWorldOffset.m_flMatVal[2][2] = v9;
  LODWORD(v9) = spawnerDesc->m_behavior;
  desc.m_bManualCompletion = m_nManifestPriority;
  m_nHashCode = spawnerDesc->m_worldGroupId.m_nHashCode;
  this->m_behavior = v9;
  desc.m_bDontSpawnEntities = v9 == 2;
  desc.m_worldGroupId.m_nHashCode = m_nHashCode;
  this->m_pLoadingSpawnGroup = CGameEntitySystem::CreateLoadingSpawnGroup(v7);
  v11 = (*(*engine + 456LL))(engine, &desc);
  if ( desc.m_pEntityFilterName != 0 )
    this->m_pFilter = CGameEntitySystem::FindSpawnGroupFilter(g_pGameEntitySystem, desc.m_pEntityFilterName);
  else
    this->m_pFilter = 0;
  m_hOwner = desc.m_hOwner;
  m_pLoadingSpawnGroup = this->m_pLoadingSpawnGroup;
  if ( desc.m_hOwner == 0 )
    m_hOwner = v11;
  this->m_hOwnerSpawnGroup = m_hOwner;
  v14 = (*(m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 8))(m_pLoadingSpawnGroup);
  v15 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v14;
  this->m_pPrevAllocator = v15;
  if ( v11 == -1 )
  {
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v21 = g_pEntitySystem;
    this->m_hSpawnGroupHandle = ActiveSpawnGroupHandle;
    this->m_mSpawnGroupToWorld = *CEntitySystem::GetSpawnOriginOffset(v21);
  }
  else
  {
    v16 = *&desc.m_vecWorldOffset.m_flMatVal[0][0];
    this->m_hSpawnGroupHandle = v11;
    *&this->m_mSpawnGroupToWorld.m_flMatVal[0][0] = __PAIR128__(*&desc.m_vecWorldOffset.m_flMatVal[0][2], v16);
    *&this->m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&desc.m_vecWorldOffset.m_flMatVal[1][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&desc.m_vecWorldOffset.m_flMatVal[2][0];
  }
  v17 = g_pEntityCDOTA_BaseNPCClass;
  this->m_pEntityKeyValues = 0;
  this->m_pEntityClass = v17;
  v18 = 0;
  if ( g_pApplication != 0 )
    v18 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  this->m_bValidateKeys = v18;
  vptr_CEntitySpawnerBase = this->_vptr_CEntitySpawnerBase;
  this->m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*vptr_CEntitySpawnerBase)(this);
  if ( v11 != 0 )
    CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup(g_pSpawnGroupMgr, v11, this->m_pLoadingSpawnGroup);
}


// CEntitySpawnerAsync<CDOTA_Item>::Init  (line 195, @0x00000000025d4540, libserver.so)  // inlines: CUtlStringToken, GetClassInfo, Init, OverrideAllocator, SetToIdentity, SpawnGroupDesc_t
// calls: SetIdentityMatrix, CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::FindSpawnGroupFilter, CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset
// callers: DOTA_PrecacheItemByNameAsync
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CEntitySpawnerAsync<CDOTA_Item>::Init(
        CEntitySpawnerAsync<CDOTA_Item> *const this,
        const EntitySpawnerAsyncDesc_t<CDOTA_Item> *const spawnerDesc)
{
  float m_flTimeoutInterval; // xmm0_4
  const char *m_pszCPPClassname; // rax
  const matrix3x4a_t *m_pSpawnGroupToWorld; // rax
  CGameEntitySystem *v7; // rdi
  ResourceManifestLoadPriority_t m_nManifestPriority; // edx
  __int64 v9; // rax
  uint32 m_nHashCode; // edx
  SpawnGroupHandle_t v11; // r12d
  SpawnGroupHandle_t m_hOwner; // eax
  ILoadingSpawnGroup *m_pLoadingSpawnGroup; // rdi
  CUtlScratchMemoryPool *v14; // rax
  CUtlScratchMemoryPool *v15; // rdx
  unsigned __int64 v16; // rax
  CDOTA_Item::CEntityInstanceEntityClass *v17; // rax
  char v18; // al
  int (**vptr_CEntitySpawnerBase)(...); // rax
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  CEntitySystem *v21; // rdi
  SpawnGroupDesc_t desc; // [rsp+0h] [rbp-D0h] BYREF

  memset(&desc.m_pWorldName, 0, 72);
  desc.m_iPriorityLoader = -2;
  desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  desc.m_flTimeoutInterval = 0.0;
  desc.m_pSaveFileName = 0;
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_bDontSpawnEntities = 0;
  desc.m_bBlockUntilLoaded = 0;
  desc.m_bLoadStreamingData = 1;
  desc.m_bCreateNewSceneWorld = 0;
  desc.m_bManualCompletion = 0;
  desc.m_bSetActivePostLoad = 0;
  SetIdentityMatrix(&desc.m_vecWorldOffset);
  desc.m_pEntityLumpName = 0;
  desc.m_pEntityFilterName = 0;
  m_flTimeoutInterval = spawnerDesc->m_flTimeoutInterval;
  desc.m_pWorldName = 0;
  m_pszCPPClassname = g_pEntityCDOTA_ItemClass->m_pClassInfo->m_pszCPPClassname;
  desc.m_flTimeoutInterval = m_flTimeoutInterval;
  desc.m_pDescriptiveName = m_pszCPPClassname;
  desc.m_hOwner = spawnerDesc->m_hOwnerSpawnGroup;
  desc.m_iPriorityLoader = spawnerDesc->m_iPriorityLoader;
  m_pSpawnGroupToWorld = spawnerDesc->m_pSpawnGroupToWorld;
  if ( m_pSpawnGroupToWorld == 0 )
    m_pSpawnGroupToWorld = &g_MatrixIdentity;
  *&desc.m_vecWorldOffset.m_flMatVal[0][0] = *&m_pSpawnGroupToWorld->m_flMatVal[0][0];
  v7 = g_pGameEntitySystem;
  *&desc.m_vecWorldOffset.m_flMatVal[0][2] = *&m_pSpawnGroupToWorld->m_flMatVal[0][2];
  qmemcpy(desc.m_vecWorldOffset.m_flMatVal[1], m_pSpawnGroupToWorld->m_flMatVal[1], 24);
  m_nManifestPriority = spawnerDesc->m_nManifestPriority;
  v9 = *&m_pSpawnGroupToWorld->m_flMatVal[2][2];
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_manifestLoadPriority = m_nManifestPriority;
  LOBYTE(m_nManifestPriority) = spawnerDesc->m_bManualCompletion;
  *&desc.m_vecWorldOffset.m_flMatVal[2][2] = v9;
  LODWORD(v9) = spawnerDesc->m_behavior;
  desc.m_bManualCompletion = m_nManifestPriority;
  m_nHashCode = spawnerDesc->m_worldGroupId.m_nHashCode;
  this->m_behavior = v9;
  desc.m_bDontSpawnEntities = v9 == 2;
  desc.m_worldGroupId.m_nHashCode = m_nHashCode;
  this->m_pLoadingSpawnGroup = CGameEntitySystem::CreateLoadingSpawnGroup(v7);
  v11 = (*(*engine + 456LL))(engine, &desc);
  if ( desc.m_pEntityFilterName != 0 )
    this->m_pFilter = CGameEntitySystem::FindSpawnGroupFilter(g_pGameEntitySystem, desc.m_pEntityFilterName);
  else
    this->m_pFilter = 0;
  m_hOwner = desc.m_hOwner;
  m_pLoadingSpawnGroup = this->m_pLoadingSpawnGroup;
  if ( desc.m_hOwner == 0 )
    m_hOwner = v11;
  this->m_hOwnerSpawnGroup = m_hOwner;
  v14 = (*(m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 8))(m_pLoadingSpawnGroup);
  v15 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v14;
  this->m_pPrevAllocator = v15;
  if ( v11 == -1 )
  {
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v21 = g_pEntitySystem;
    this->m_hSpawnGroupHandle = ActiveSpawnGroupHandle;
    this->m_mSpawnGroupToWorld = *CEntitySystem::GetSpawnOriginOffset(v21);
  }
  else
  {
    v16 = *&desc.m_vecWorldOffset.m_flMatVal[0][0];
    this->m_hSpawnGroupHandle = v11;
    *&this->m_mSpawnGroupToWorld.m_flMatVal[0][0] = __PAIR128__(*&desc.m_vecWorldOffset.m_flMatVal[0][2], v16);
    *&this->m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&desc.m_vecWorldOffset.m_flMatVal[1][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&desc.m_vecWorldOffset.m_flMatVal[2][0];
  }
  v17 = g_pEntityCDOTA_ItemClass;
  this->m_pEntityKeyValues = 0;
  this->m_pEntityClass = v17;
  v18 = 0;
  if ( g_pApplication != 0 )
    v18 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  this->m_bValidateKeys = v18;
  vptr_CEntitySpawnerBase = this->_vptr_CEntitySpawnerBase;
  this->m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*vptr_CEntitySpawnerBase)(this);
  if ( v11 != 0 )
    CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup(g_pSpawnGroupMgr, v11, this->m_pLoadingSpawnGroup);
}


// CEntitySpawnerAsync<CDOTA_Item_Physical>::Init  (line 195, @0x00000000025d4880, libserver.so)  // inlines: CUtlStringToken, GetClassInfo, Init, OverrideAllocator, SetToIdentity, SpawnGroupDesc_t
// calls: SetIdentityMatrix, CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::FindSpawnGroupFilter, CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset
// callers: CreateItemOnPositionAsync
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CEntitySpawnerAsync<CDOTA_Item_Physical>::Init(
        CEntitySpawnerAsync<CDOTA_Item_Physical> *const this,
        const EntitySpawnerAsyncDesc_t<CDOTA_Item_Physical> *const spawnerDesc)
{
  float m_flTimeoutInterval; // xmm0_4
  const char *m_pszCPPClassname; // rax
  const matrix3x4a_t *m_pSpawnGroupToWorld; // rax
  CGameEntitySystem *v7; // rdi
  ResourceManifestLoadPriority_t m_nManifestPriority; // edx
  __int64 v9; // rax
  uint32 m_nHashCode; // edx
  SpawnGroupHandle_t v11; // r12d
  SpawnGroupHandle_t m_hOwner; // eax
  ILoadingSpawnGroup *m_pLoadingSpawnGroup; // rdi
  CUtlScratchMemoryPool *v14; // rax
  CUtlScratchMemoryPool *v15; // rdx
  unsigned __int64 v16; // rax
  CDOTA_Item_Physical::CEntityInstanceEntityClass *v17; // rax
  char v18; // al
  int (**vptr_CEntitySpawnerBase)(...); // rax
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  CEntitySystem *v21; // rdi
  SpawnGroupDesc_t desc; // [rsp+0h] [rbp-D0h] BYREF

  memset(&desc.m_pWorldName, 0, 72);
  desc.m_iPriorityLoader = -2;
  desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  desc.m_flTimeoutInterval = 0.0;
  desc.m_pSaveFileName = 0;
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_bDontSpawnEntities = 0;
  desc.m_bBlockUntilLoaded = 0;
  desc.m_bLoadStreamingData = 1;
  desc.m_bCreateNewSceneWorld = 0;
  desc.m_bManualCompletion = 0;
  desc.m_bSetActivePostLoad = 0;
  SetIdentityMatrix(&desc.m_vecWorldOffset);
  desc.m_pEntityLumpName = 0;
  desc.m_pEntityFilterName = 0;
  m_flTimeoutInterval = spawnerDesc->m_flTimeoutInterval;
  desc.m_pWorldName = 0;
  m_pszCPPClassname = g_pEntityCDOTA_Item_PhysicalClass->m_pClassInfo->m_pszCPPClassname;
  desc.m_flTimeoutInterval = m_flTimeoutInterval;
  desc.m_pDescriptiveName = m_pszCPPClassname;
  desc.m_hOwner = spawnerDesc->m_hOwnerSpawnGroup;
  desc.m_iPriorityLoader = spawnerDesc->m_iPriorityLoader;
  m_pSpawnGroupToWorld = spawnerDesc->m_pSpawnGroupToWorld;
  if ( m_pSpawnGroupToWorld == 0 )
    m_pSpawnGroupToWorld = &g_MatrixIdentity;
  *&desc.m_vecWorldOffset.m_flMatVal[0][0] = *&m_pSpawnGroupToWorld->m_flMatVal[0][0];
  v7 = g_pGameEntitySystem;
  *&desc.m_vecWorldOffset.m_flMatVal[0][2] = *&m_pSpawnGroupToWorld->m_flMatVal[0][2];
  qmemcpy(desc.m_vecWorldOffset.m_flMatVal[1], m_pSpawnGroupToWorld->m_flMatVal[1], 24);
  m_nManifestPriority = spawnerDesc->m_nManifestPriority;
  v9 = *&m_pSpawnGroupToWorld->m_flMatVal[2][2];
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  desc.m_manifestLoadPriority = m_nManifestPriority;
  LOBYTE(m_nManifestPriority) = spawnerDesc->m_bManualCompletion;
  *&desc.m_vecWorldOffset.m_flMatVal[2][2] = v9;
  LODWORD(v9) = spawnerDesc->m_behavior;
  desc.m_bManualCompletion = m_nManifestPriority;
  m_nHashCode = spawnerDesc->m_worldGroupId.m_nHashCode;
  this->m_behavior = v9;
  desc.m_bDontSpawnEntities = v9 == 2;
  desc.m_worldGroupId.m_nHashCode = m_nHashCode;
  this->m_pLoadingSpawnGroup = CGameEntitySystem::CreateLoadingSpawnGroup(v7);
  v11 = (*(*engine + 456LL))(engine, &desc);
  if ( desc.m_pEntityFilterName != 0 )
    this->m_pFilter = CGameEntitySystem::FindSpawnGroupFilter(g_pGameEntitySystem, desc.m_pEntityFilterName);
  else
    this->m_pFilter = 0;
  m_hOwner = desc.m_hOwner;
  m_pLoadingSpawnGroup = this->m_pLoadingSpawnGroup;
  if ( desc.m_hOwner == 0 )
    m_hOwner = v11;
  this->m_hOwnerSpawnGroup = m_hOwner;
  v14 = (*(m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 8))(m_pLoadingSpawnGroup);
  v15 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v14;
  this->m_pPrevAllocator = v15;
  if ( v11 == -1 )
  {
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v21 = g_pEntitySystem;
    this->m_hSpawnGroupHandle = ActiveSpawnGroupHandle;
    this->m_mSpawnGroupToWorld = *CEntitySystem::GetSpawnOriginOffset(v21);
  }
  else
  {
    v16 = *&desc.m_vecWorldOffset.m_flMatVal[0][0];
    this->m_hSpawnGroupHandle = v11;
    *&this->m_mSpawnGroupToWorld.m_flMatVal[0][0] = __PAIR128__(*&desc.m_vecWorldOffset.m_flMatVal[0][2], v16);
    *&this->m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&desc.m_vecWorldOffset.m_flMatVal[1][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&desc.m_vecWorldOffset.m_flMatVal[2][0];
  }
  v17 = g_pEntityCDOTA_Item_PhysicalClass;
  this->m_pEntityKeyValues = 0;
  this->m_pEntityClass = v17;
  v18 = 0;
  if ( g_pApplication != 0 )
    v18 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  this->m_bValidateKeys = v18;
  vptr_CEntitySpawnerBase = this->_vptr_CEntitySpawnerBase;
  this->m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*vptr_CEntitySpawnerBase)(this);
  if ( v11 != 0 )
    CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup(g_pSpawnGroupMgr, v11, this->m_pLoadingSpawnGroup);
}


// CEntitySpawnerAsyncBase<CBaseEntity>::Init  (line 216, @0x0000000002251380, libserver.so)  // inlines: GetEntityClass, Init, OverrideAllocator
// calls: CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::FindSpawnGroupFilter, CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset
// globals: engine, CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CEntitySpawnerAsyncBase<CBaseEntity>::Init(
        CEntitySpawnerAsyncBase<CBaseEntity> *const this,
        EntitySpawnerAsyncBehavior_t behavior,
        const SpawnGroupDesc_t *const desc)
{
  ILoadingSpawnGroup *LoadingSpawnGroup; // rax
  IVEngineServer2 *v6; // rdi
  SpawnGroupHandle_t v7; // eax
  const char *m_pEntityFilterName; // rsi
  SpawnGroupHandle_t v9; // r13d
  SpawnGroupHandle_t m_hOwner; // eax
  ILoadingSpawnGroup *m_pLoadingSpawnGroup; // rdi
  CUtlScratchMemoryPool *v12; // rax
  CUtlScratchMemoryPool *v13; // rdx
  char v14; // al
  int (**vptr_CEntitySpawnerBase)(...); // rax
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  CEntitySystem *v17; // rdi

  this->m_behavior = behavior;
  LoadingSpawnGroup = CGameEntitySystem::CreateLoadingSpawnGroup(g_pGameEntitySystem);
  v6 = engine;
  this->m_pLoadingSpawnGroup = LoadingSpawnGroup;
  v7 = (*(*v6 + 456LL))(v6, desc);
  m_pEntityFilterName = desc->m_pEntityFilterName;
  v9 = v7;
  if ( m_pEntityFilterName != 0 )
    this->m_pFilter = CGameEntitySystem::FindSpawnGroupFilter(g_pGameEntitySystem, m_pEntityFilterName);
  else
    this->m_pFilter = 0;
  m_hOwner = desc->m_hOwner;
  m_pLoadingSpawnGroup = this->m_pLoadingSpawnGroup;
  if ( m_hOwner == 0 )
    m_hOwner = v9;
  this->m_hOwnerSpawnGroup = m_hOwner;
  v12 = (*(m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 8))(m_pLoadingSpawnGroup);
  v13 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v12;
  this->m_pPrevAllocator = v13;
  if ( v9 == -1 )
  {
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v17 = g_pEntitySystem;
    this->m_hSpawnGroupHandle = ActiveSpawnGroupHandle;
    this->m_mSpawnGroupToWorld = *CEntitySystem::GetSpawnOriginOffset(v17);
  }
  else
  {
    this->m_hSpawnGroupHandle = v9;
    *&this->m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&desc->m_vecWorldOffset.m_flMatVal[0][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[0][2] = *&desc->m_vecWorldOffset.m_flMatVal[0][2];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&desc->m_vecWorldOffset.m_flMatVal[1][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[1][2] = *&desc->m_vecWorldOffset.m_flMatVal[1][2];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&desc->m_vecWorldOffset.m_flMatVal[2][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[2][2] = *&desc->m_vecWorldOffset.m_flMatVal[2][2];
  }
  this->m_pEntityKeyValues = 0;
  this->m_pEntityClass = g_pEntityCBaseEntityClass;
  v14 = 0;
  if ( g_pApplication != 0 )
    v14 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  this->m_bValidateKeys = v14;
  vptr_CEntitySpawnerBase = this->_vptr_CEntitySpawnerBase;
  this->m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*vptr_CEntitySpawnerBase)(this);
  if ( v9 != 0 )
    CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup(g_pSpawnGroupMgr, v9, this->m_pLoadingSpawnGroup);
}


// CEntitySpawnerAsyncBase<CPointHMDAnchor>::Init  (line 216, @0x0000000002319e80, libserver.so)  // inlines: GetEntityClass, Init, OverrideAllocator
// calls: CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::FindSpawnGroupFilter, CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset
// callers: CEntitySpawnerAsync<CPointHMDAnchor>::Init
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CEntitySpawnerAsyncBase<CPointHMDAnchor>::Init(
        CEntitySpawnerAsyncBase<CPointHMDAnchor> *const this,
        EntitySpawnerAsyncBehavior_t behavior,
        const SpawnGroupDesc_t *const desc)
{
  SpawnGroupHandle_t v5; // eax
  const char *m_pEntityFilterName; // rsi
  SpawnGroupHandle_t v7; // r13d
  SpawnGroupHandle_t m_hOwner; // eax
  ILoadingSpawnGroup *m_pLoadingSpawnGroup; // rdi
  CUtlScratchMemoryPool *v10; // rax
  CUtlScratchMemoryPool *v11; // rdx
  char v12; // al
  int (**vptr_CEntitySpawnerBase)(...); // rax
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  CEntitySystem *v15; // rdi

  this->m_behavior = behavior;
  this->m_pLoadingSpawnGroup = CGameEntitySystem::CreateLoadingSpawnGroup(g_pGameEntitySystem);
  v5 = (*(*engine + 456LL))(engine, desc);
  m_pEntityFilterName = desc->m_pEntityFilterName;
  v7 = v5;
  if ( m_pEntityFilterName != 0 )
    this->m_pFilter = CGameEntitySystem::FindSpawnGroupFilter(g_pGameEntitySystem, m_pEntityFilterName);
  else
    this->m_pFilter = 0;
  m_hOwner = desc->m_hOwner;
  m_pLoadingSpawnGroup = this->m_pLoadingSpawnGroup;
  if ( m_hOwner == 0 )
    m_hOwner = v7;
  this->m_hOwnerSpawnGroup = m_hOwner;
  v10 = (*(m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 8))(m_pLoadingSpawnGroup);
  v11 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v10;
  this->m_pPrevAllocator = v11;
  if ( v7 == -1 )
  {
    ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
    v15 = g_pEntitySystem;
    this->m_hSpawnGroupHandle = ActiveSpawnGroupHandle;
    this->m_mSpawnGroupToWorld = *CEntitySystem::GetSpawnOriginOffset(v15);
  }
  else
  {
    this->m_hSpawnGroupHandle = v7;
    *&this->m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&desc->m_vecWorldOffset.m_flMatVal[0][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[0][2] = *&desc->m_vecWorldOffset.m_flMatVal[0][2];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&desc->m_vecWorldOffset.m_flMatVal[1][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[1][2] = *&desc->m_vecWorldOffset.m_flMatVal[1][2];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&desc->m_vecWorldOffset.m_flMatVal[2][0];
    *&this->m_mSpawnGroupToWorld.m_flMatVal[2][2] = *&desc->m_vecWorldOffset.m_flMatVal[2][2];
  }
  this->m_pEntityKeyValues = 0;
  this->m_pEntityClass = g_pEntityCPointHMDAnchorClass;
  v12 = 0;
  if ( g_pApplication != 0 )
    v12 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  this->m_bValidateKeys = v12;
  vptr_CEntitySpawnerBase = this->_vptr_CEntitySpawnerBase;
  this->m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*vptr_CEntitySpawnerBase)(this);
  if ( v7 != 0 )
    CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup(g_pSpawnGroupMgr, v7, this->m_pLoadingSpawnGroup);
}


// CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::AddSpawnGroupCompletionCallback  (line 253, @0x00000000027a7b80, libserver.so)  // inlines: CUtlDelegate, CopyFrom<FastDelegate2<unsigned int, const CUtlVector<CEntityHandle>&, void> >, FastDelegate2, SetMementoFrom
// calls: CGameEntitySystem::ListenForSpawnGroupToFinish
// callers: DOTA_PrecacheUnitByNameAsync, DOTA_VScript_PrecacheUnitFromTableAsync
__int64 __fastcall CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::AddSpawnGroupCompletionCallback(
        CEntitySpawnerAsyncBase<CDOTA_BaseNPC> *const this,
        CBaseEntity *pCompletionListener,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v6[4]; // [rsp+0h] [rbp-20h] BYREF

  v3 = a3[1];
  v4 = a3[2];
  v6[0] = *a3;
  v6[1] = v3;
  v6[2] = v4;
  return CGameEntitySystem::ListenForSpawnGroupToFinish(g_pGameEntitySystem, this, pCompletionListener, v6);
}


// CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal  (line 280, @0x0000000002573de0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, FastDelegate2, FilterSpawnGroupEntity, GetClassInfo, IsEmpty, Purge, QueueContextCallbacks, RemoveAll, SetMementoFrom, SetToIdentity, operator!, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, SetIdentityMatrix, CGameEntitySystem::ListenForEntityInSpawnGroupToFinish, CEntityKeyValues::SetValue, CUtlMemory<const CEntityKeyValues*, int>::Purge, CUtlVectorBase<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTAGamerules::PrecacheNextARDMHeroForPlayer, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT, CDOTAGamerules::StartCreateHeroStatues, DOTA_PrecacheUnitByNameAsync, DOTA_VScript_PrecacheUnitFromTableAsync, DOTA_VScript_CreateUnitByNameAsync, DOTA_Character_ScriptSpawn_Common<CDotaNPCSpawnerAsync<CDOTA_BaseNPC> >, DOTA_Hero_Spawn, CDOTA_BaseNPC_Hero::CheckForCourierChange, CDOTA_BaseNPC_Hero::CheckForWardChange
__int64 __fastcall CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal(
        CEntitySpawnerAsyncBase<CDOTA_BaseNPC>_0 *const this,
        CEntityInstance *pCompletionListener,
        __int64 *a3)
{
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  ISpawnGroupEntityFilter *m_pFilter; // rdi
  CEntityKeyValues *v10; // r12
  __int64 m_hSpawnGroupHandle; // rsi
  bool v12; // zf
  CEntityInstance *v13; // r13
  const CEntityKeyValues **v14; // rdx
  __int64 v15; // rcx
  SpawnGroupHandle_t v16; // esi
  CEntitySpawnerContext<CDOTA_BaseNPC> *m_pContext; // r15
  SpawnGroupHandle_t i; // r14d
  __int64 delta; // rcx
  const CEntityKeyValues **pfn; // rdx
  unsigned int h; // [rsp+8h] [rbp-98h]
  CEntityKeyValues *v23; // [rsp+10h] [rbp-90h] BYREF
  CEntityKeyValues *v24; // [rsp+18h] [rbp-88h] BYREF
  __int64 m_pthis; // [rsp+20h] [rbp-80h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v26; // [rsp+28h] [rbp-78h] BYREF
  matrix3x4a_t mat; // [rsp+40h] [rbp-60h] BYREF

  m_pEntityKeyValues = this->m_pEntityKeyValues;
  if ( m_pEntityKeyValues == 0 )
    return 0xFFFFFFFFLL;
  if ( this->m_pEntityClass == 0 )
  {
    CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790);
    return 0xFFFFFFFFLL;
  }
  HasValue = CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790);
  m_pszClassname = this->m_pEntityClass->m_pClassInfo->m_pszClassname;
  if ( !HasValue && m_pszClassname != 0 )
  {
    CEntityKeyValues::SetValue(this->m_pEntityKeyValues, -971301790, m_pszClassname);
    m_pszClassname = this->m_pEntityClass->m_pClassInfo->m_pszClassname;
  }
  (*(*engine + 464LL))(engine, this->m_hSpawnGroupHandle, m_pszClassname);
  CEntityKeyValuesModifyScope::Release(&this->m_modifyScope);
  m_pFilter = this->m_pFilter;
  v10 = this->m_pEntityKeyValues;
  if ( m_pFilter == 0 )
    goto LABEL_10;
  v23 = this->m_pEntityKeyValues;
  m_hSpawnGroupHandle = this->m_hSpawnGroupHandle;
  v12 = this->m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY;
  v26.m_pMemory = &v23;
  LODWORD(m_pthis) = 1;
  v24 = 0;
  *&v26.m_nAllocationCount = 0x4000000000000001LL;
  mat.m_flMatVal[0][0] = 0.0;
  *&mat.m_flMatVal[0][2] = &v24;
  *&mat.m_flMatVal[1][0] = 0x4000000000000001LL;
  (*(m_pFilter->_vptr_ISpawnGroupEntityFilter + 2))(m_pFilter, m_hSpawnGroupHandle, v12, &m_pthis, &mat);
  v10 = 0;
  v12 = LODWORD(mat.m_flMatVal[0][0]) == 1;
  mat.m_flMatVal[0][0] = 0.0;
  if ( v12 )
    v10 = v24;
  if ( (LODWORD(mat.m_flMatVal[1][1]) & 0xC0000000) != 0
    || (CUtlMemory<CEntityKeyValues const*,int>::Purge(&mat.m_flMatVal[0][2]),
        (LODWORD(mat.m_flMatVal[1][1]) & 0xC0000000) != 0) )
  {
    LODWORD(m_pthis) = 0;
    if ( (v26.m_nGrowSize & 0xC0000000) == 0 )
      goto LABEL_25;
  }
  else
  {
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&mat.m_flMatVal[0][2]);
    LODWORD(m_pthis) = 0;
    if ( (v26.m_nGrowSize & 0xC0000000) == 0 )
    {
LABEL_25:
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&v26);
      if ( (v26.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Purge(&v26);
        if ( v10 == 0 )
          return 0xFFFFFFFFLL;
        goto LABEL_10;
      }
    }
  }
  if ( v10 == 0 )
    return 0xFFFFFFFFLL;
LABEL_10:
  SetIdentityMatrix(&mat);
  v13 = (*(this->m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 9))(
          this->m_pLoadingSpawnGroup,
          this->m_hOwnerSpawnGroup,
          &mat,
          1,
          v10);
  if ( v13 == 0 )
    return 0xFFFFFFFFLL;
  v14 = a3[1];
  if ( *a3 != 0 || v14 != 0 )
  {
    m_pthis = *a3;
    v15 = a3[2];
    v26.m_pMemory = v14;
    v16 = this->m_hSpawnGroupHandle;
    *&v26.m_nAllocationCount = v15;
    h = CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
          g_pGameEntitySystem,
          v16,
          v13,
          v10,
          pCompletionListener,
          &m_pthis);
  }
  else
  {
    h = -1;
  }
  m_pContext = this->m_pContext;
  for ( i = this->m_hSpawnGroupHandle; m_pContext != 0; m_pContext = m_pContext->m_pParent )
  {
    pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
    if ( m_pContext->m_callback.m_Closure.m_pthis != 0 || pfn != 0 )
    {
      delta = m_pContext->m_callback.m_Closure.m_pFunction.__delta;
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      v26.m_pMemory = pfn;
      *&v26.m_nAllocationCount = delta;
      CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
        g_pGameEntitySystem,
        i,
        v13,
        v10,
        m_pContext->m_pCompletionListener,
        &m_pthis);
    }
  }
  return h;
}


// CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::Spawn  (line 351, @0x0000000002e26ab0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, FastDelegate2, FilterSpawnGroupEntity, GetClassInfo, IsEmpty, Purge, QueueContextCallbacks, RemoveAll, SetMementoFrom, SetToIdentity, SpawnInternal, operator!, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, SetIdentityMatrix, CGameEntitySystem::ListenForEntityInSpawnGroupToFinish, CEntityKeyValues::SetValue, CUtlMemory<const CEntityKeyValues*, int>::Purge, CUtlVectorBase<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_ObserverWard::OnSpellStart, CDOTA_Item_SentryWard::OnSpellStart
__int64 __fastcall CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::Spawn(
        CEntitySpawnerAsyncBase<CDOTA_BaseNPC> *const this,
        CEntityInstance *pCompletionListener,
        __int64 *a3)
{
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  const CEntityKeyValues **v5; // r15
  __int64 v6; // r14
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  ISpawnGroupEntityFilter *m_pFilter; // rdi
  CEntityKeyValues *v10; // r12
  __int64 m_hSpawnGroupHandle; // rsi
  bool v12; // zf
  CEntityInstance *v13; // rax
  CEntityInstance *v14; // r13
  SpawnGroupHandle_t v15; // esi
  CEntitySpawnerContext<CDOTA_BaseNPC> *m_pContext; // r15
  SpawnGroupHandle_t i; // r14d
  __int64 delta; // rcx
  const CEntityKeyValues **pfn; // rdx
  __int64 v22; // [rsp+18h] [rbp-98h]
  unsigned int v23; // [rsp+18h] [rbp-98h]
  CEntityKeyValues *v24; // [rsp+20h] [rbp-90h] BYREF
  CEntityKeyValues *v25; // [rsp+28h] [rbp-88h] BYREF
  __int64 m_pthis; // [rsp+30h] [rbp-80h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v27; // [rsp+38h] [rbp-78h] BYREF
  matrix3x4_t matrix; // [rsp+50h] [rbp-60h] BYREF

  m_pEntityKeyValues = this->m_pEntityKeyValues;
  v5 = a3[1];
  v6 = *a3;
  v22 = a3[2];
  if ( m_pEntityKeyValues == 0 )
    return 0xFFFFFFFFLL;
  if ( this->m_pEntityClass == 0 )
  {
    CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790);
    return 0xFFFFFFFFLL;
  }
  HasValue = CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790);
  m_pszClassname = this->m_pEntityClass->m_pClassInfo->m_pszClassname;
  if ( !HasValue && m_pszClassname != 0 )
  {
    CEntityKeyValues::SetValue(this->m_pEntityKeyValues, -971301790, m_pszClassname);
    m_pszClassname = this->m_pEntityClass->m_pClassInfo->m_pszClassname;
  }
  (*(*engine + 464LL))(engine, this->m_hSpawnGroupHandle, m_pszClassname);
  CEntityKeyValuesModifyScope::Release(&this->m_modifyScope);
  m_pFilter = this->m_pFilter;
  v10 = this->m_pEntityKeyValues;
  if ( m_pFilter == 0 )
    goto LABEL_10;
  v24 = this->m_pEntityKeyValues;
  m_hSpawnGroupHandle = this->m_hSpawnGroupHandle;
  v12 = this->m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY;
  v27.m_pMemory = &v24;
  LODWORD(m_pthis) = 1;
  v25 = 0;
  *&v27.m_nAllocationCount = 0x4000000000000001LL;
  matrix.m_flMatVal[0][0] = 0.0;
  *&matrix.m_flMatVal[0][2] = &v25;
  *&matrix.m_flMatVal[1][0] = 0x4000000000000001LL;
  (*(m_pFilter->_vptr_ISpawnGroupEntityFilter + 2))(m_pFilter, m_hSpawnGroupHandle, v12, &m_pthis, &matrix);
  v10 = 0;
  v12 = LODWORD(matrix.m_flMatVal[0][0]) == 1;
  matrix.m_flMatVal[0][0] = 0.0;
  if ( v12 )
    v10 = v25;
  if ( (LODWORD(matrix.m_flMatVal[1][1]) & 0xC0000000) != 0
    || (CUtlMemory<CEntityKeyValues const*,int>::Purge(&matrix.m_flMatVal[0][2]),
        (LODWORD(matrix.m_flMatVal[1][1]) & 0xC0000000) != 0) )
  {
    LODWORD(m_pthis) = 0;
    if ( (v27.m_nGrowSize & 0xC0000000) == 0 )
      goto LABEL_25;
  }
  else
  {
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&matrix.m_flMatVal[0][2]);
    LODWORD(m_pthis) = 0;
    if ( (v27.m_nGrowSize & 0xC0000000) == 0 )
    {
LABEL_25:
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&v27);
      if ( (v27.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Purge(&v27);
        if ( v10 == 0 )
          return 0xFFFFFFFFLL;
        goto LABEL_10;
      }
    }
  }
  if ( v10 == 0 )
    return 0xFFFFFFFFLL;
LABEL_10:
  SetIdentityMatrix(&matrix);
  v13 = (*(this->m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 9))(
          this->m_pLoadingSpawnGroup,
          this->m_hOwnerSpawnGroup,
          &matrix,
          1,
          v10);
  v14 = v13;
  if ( v13 == 0 )
    return 0xFFFFFFFFLL;
  if ( v6 != 0 || v5 != 0 )
  {
    v15 = this->m_hSpawnGroupHandle;
    v27.m_pMemory = v5;
    m_pthis = v6;
    *&v27.m_nAllocationCount = v22;
    v23 = CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
            g_pGameEntitySystem,
            v15,
            v13,
            v10,
            pCompletionListener,
            &m_pthis);
  }
  else
  {
    v23 = -1;
  }
  m_pContext = this->m_pContext;
  for ( i = this->m_hSpawnGroupHandle; m_pContext != 0; m_pContext = m_pContext->m_pParent )
  {
    pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
    if ( m_pContext->m_callback.m_Closure.m_pthis != 0 || pfn != 0 )
    {
      delta = m_pContext->m_callback.m_Closure.m_pFunction.__delta;
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      v27.m_pMemory = pfn;
      *&v27.m_nAllocationCount = delta;
      CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
        g_pGameEntitySystem,
        i,
        v14,
        v10,
        m_pContext->m_pCompletionListener,
        &m_pthis);
    }
  }
  return v23;
}


