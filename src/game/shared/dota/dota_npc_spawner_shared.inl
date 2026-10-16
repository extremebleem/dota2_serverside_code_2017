
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDotaNPCSpawner<CDOTA_BaseNPC>::~CDotaNPCSpawner  (line 27, @0x0000000002e257e0, libserver.so)  // inlines: OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString
// calls: CEntityKeyValuesModifyScope::Release, CUtlString::FreeMemoryBlock, CEntityKeyValues::~CEntityKeyValues, operator delete, CUtlScratchMemoryPool::FreeAll
// callers: CDOTA_Item_Ward_Dispenser::OnSpellStart
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CDotaNPCSpawner<CDOTA_BaseNPC>::~CDotaNPCSpawner(CDotaNPCSpawner<CDOTA_BaseNPC> *const this)
{
  CUtlScratchMemoryPool *m_pPrevAllocator; // rax
  CUtlScratchMemoryPool *v3; // rdi
  CEntityKeyValues *m_pEntityKeyValues; // r13
  int m_nEntitySpawnerDataUseCount; // ecx

  this->_vptr_CEntitySpawnerBase = off_40FBED0;  // vptr: CEntitySpawnerBase<CDOTA_BaseNPC>
  m_pPrevAllocator = this->m_pPrevAllocator;
  v3 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = m_pPrevAllocator;
  if ( v3 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v3);
  }
  if ( this->m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&this->m_modifyScope);
    m_pEntityKeyValues = this->m_pEntityKeyValues;
    if ( --m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(m_pEntityKeyValues);
      operator delete(m_pEntityKeyValues);
    }
  }
  if ( this->m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&this->m_modifyScope);
}


// CDotaNPCSpawner<CDOTA_BaseNPC>::CDotaNPCSpawner  (line 32, @0x00000000026afd50, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddNPCKeyValuesForUnit, ApplyContextKeys, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, GetEntityClass, Init, OverrideAllocator, SetValue, ~CEntitySpawner
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase, _Unwind_Resume
// callers: CDOTAPlayer::CheckForSpawningFreeCourier, CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_ObserverWard::OnSpellStart, CDOTA_Item_SentryWard::OnSpellStart
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CDotaNPCSpawner<CDOTA_BaseNPC>::CDotaNPCSpawner(
        CDotaNPCSpawner<CDOTA_BaseNPC> *const this,
        const char *pUnitName,
        CEntitySpawnerContext<CDOTA_BaseNPC> *pContext)
{
  CEntityKeyValuesModifyScope *p_m_modifyScope; // rdi
  CUtlScratchMemoryPool *v7; // rax
  CEntitySystem *v8; // rdi
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  CEntitySystem *v10; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v12; // rax
  char v13; // al
  int (**vptr_CEntitySpawnerBase)(...); // rax
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx

  p_m_modifyScope = &this->m_modifyScope;
  p_m_modifyScope[-1].m_pKeyValues = off_40FBED0;
  p_m_modifyScope->m_pKeyValues = 0;
  p_m_modifyScope->m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(p_m_modifyScope, 0);
  this->m_pContext = pContext;
  this->m_scriptClassName.m_pString = 0;
  this->_vptr_CEntitySpawnerBase = off_40FC030;  // vptr: CEntitySpawner<CDOTA_BaseNPC>
  v7 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  this->m_pSpawnBatch = 0;
  v8 = g_pEntitySystem;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  this->m_pPrevAllocator = v7;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v8->m_entitySpawnerData;
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v8);
  v10 = g_pEntitySystem;
  this->m_hSpawnGroupHandle = ActiveSpawnGroupHandle;
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(v10);
  *&this->m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  *&this->m_mSpawnGroupToWorld.m_flMatVal[0][2] = *&SpawnOriginOffset->m_flMatVal[0][2];
  *&this->m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&this->m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  v12 = *&SpawnOriginOffset->m_flMatVal[2][2];
  this->m_pEntityKeyValues = 0;
  *&this->m_mSpawnGroupToWorld.m_flMatVal[2][2] = v12;
  this->m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
  if ( g_pApplication != 0 )
    v13 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v13 = 0;
  this->m_bValidateKeys = v13;
  vptr_CEntitySpawnerBase = this->_vptr_CEntitySpawnerBase;
  this->m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*vptr_CEntitySpawnerBase)(this);
  this->_vptr_CEntitySpawnerBase = off_40FC050;  // vptr: CDotaNPCSpawner<CDOTA_BaseNPC>
  if ( pUnitName != 0 )
    CEntityKeyValues::SetValue(this->m_pEntityKeyValues, -782893907, pUnitName);
  AppendNPCKeyValues(pUnitName, this->m_pEntityKeyValues, 0);
  for ( i = this->m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(this->m_pEntityKeyValues, &i->m_entityKeyValues, 0);
}


// CDotaNPCSpawnerAsync<CDOTA_BaseNPC>::~CDotaNPCSpawnerAsync  (line 58, @0x0000000002e25710, libserver.so)  // inlines: OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CUtlString
// calls: CEntityKeyValuesModifyScope::Release, CUtlString::FreeMemoryBlock, CEntityKeyValues::~CEntityKeyValues, operator delete, CUtlScratchMemoryPool::FreeAll
// callers: CDOTA_Item_Ward_Dispenser::OnSpellStart
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CDotaNPCSpawnerAsync<CDOTA_BaseNPC>::~CDotaNPCSpawnerAsync(
        CDotaNPCSpawnerAsync<CDOTA_BaseNPC> *const this)
{
  CUtlScratchMemoryPool *m_pPrevAllocator; // rax
  CUtlScratchMemoryPool *v3; // rdi
  CEntityKeyValues *m_pEntityKeyValues; // r13
  int m_nEntitySpawnerDataUseCount; // ecx

  this->_vptr_CEntitySpawnerBase = off_40FBED0;  // vptr: CEntitySpawnerBase<CDOTA_BaseNPC>
  m_pPrevAllocator = this->m_pPrevAllocator;
  v3 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = m_pPrevAllocator;
  if ( v3 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v3);
  }
  if ( this->m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&this->m_modifyScope);
    m_pEntityKeyValues = this->m_pEntityKeyValues;
    if ( --m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(m_pEntityKeyValues);
      operator delete(m_pEntityKeyValues);
    }
  }
  if ( this->m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&this->m_modifyScope);
}


// CDotaNPCSpawnerAsync<CDOTA_BaseNPC>::CDotaNPCSpawnerAsync  (line 63, @0x0000000002e2a700, libserver.so)  // inlines: AddKeyValue<char const*>, AddNPCKeyValuesForUnit, AddToTail, Allocate, ApplyContextKeys, Base, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlString, CopyData, Element, EntitySpawnerAsyncDesc_t, FindKeyHash, Free, SetValue, V_strlen, memcpy, operator=, operator[], ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, strlen, CEntityVariantAllocator::Allocate, memcpy, Warning, CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase, _Unwind_Resume
// callers: CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_ObserverWard::OnSpellStart, CDOTA_Item_SentryWard::OnSpellStart
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall CDotaNPCSpawnerAsync<CDOTA_BaseNPC>::CDotaNPCSpawnerAsync(
        CDotaNPCSpawnerAsync<CDOTA_BaseNPC> *const this,
        const char *pUnitName,
        CDotaNPCSpawnerContext *pContext,
        EntitySpawnerAsyncBehavior_t behavior,
        ResourceManifestLoadPriority_t nManifestPriority,
        int iPriorityLoader,
        float flTimeoutInterval,
        bool bManualCreation)
{
  CEntityKeyValuesModifyScope *p_m_modifyScope; // rdi
  CEntityKeyValues *m_pEntityKeyValues; // r12
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // r12
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v18; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v22; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // r14
  __int64 v24; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // r14
  uint16 m_flags; // ax
  void *v27; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r12
  __int16 v32; // ax
  signed int v33; // r14d
  void *v34; // rax
  bool v35; // zf
  signed int v38; // [rsp+Ch] [rbp-64h]
  EntitySpawnerAsyncDesc_t<CDOTA_BaseNPC> spawnerDesc; // [rsp+10h] [rbp-60h] BYREF

  p_m_modifyScope = &this->m_modifyScope;
  p_m_modifyScope[-1].m_pKeyValues = off_40FBED0;
  p_m_modifyScope->m_pKeyValues = 0;
  p_m_modifyScope->m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(p_m_modifyScope, 0);
  this->_vptr_CEntitySpawnerBase = off_40FBF10;  // vptr: CEntitySpawnerAsync<CDOTA_BaseNPC>
  this->m_scriptClassName.m_pString = 0;
  this->m_pContext = pContext;
  spawnerDesc.m_pSpawnGroupToWorld = 0;
  this->m_pFilter = 0;
  spawnerDesc.m_worldGroupId.m_nHashCode = 0;
  spawnerDesc.m_hOwnerSpawnGroup = -(behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP);
  spawnerDesc.m_behavior = behavior;
  spawnerDesc.m_flTimeoutInterval = flTimeoutInterval;
  spawnerDesc.m_pContext = pContext;
  spawnerDesc.m_nManifestPriority = nManifestPriority;
  spawnerDesc.m_iPriorityLoader = iPriorityLoader;
  spawnerDesc.m_bManualCompletion = bManualCreation;
  CEntitySpawnerAsync<CDOTA_BaseNPC>::Init(this, &spawnerDesc);
  m_pEntityKeyValues = this->m_pEntityKeyValues;
  this->_vptr_CEntitySpawnerBase = off_40FBF30;  // vptr: CDotaNPCSpawnerAsync<CDOTA_BaseNPC>
  if ( pUnitName == 0 || m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_3;
  m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v18 = 0;
    while ( 1 )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      if ( m_pElements[v18] == -782893907 )
        break;
      if ( m_nCount <= ++v18 )
        goto LABEL_14;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v29 = m_pEntityKeyValues->m_keyValues.m_pElements;
      v30 = v18;
      if ( v29[v30].m_pAttributeName != 0 )
      {
LABEL_26:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v29[v30].m_pAttributeName);
LABEL_27:
        m_pEntityKeyValues = this->m_pEntityKeyValues;
        goto LABEL_3;
      }
      v31 = &v29[v30];
    }
    else
    {
      v29 = 0;
      v31 = 24 * v18;
      v35 = *(&stru_10.m_Lock.gap0 + 3 * v18) == 0;
      v30 = v18;
      if ( !v35 )
        goto LABEL_26;
    }
    v32 = *(v31 + 10);
    if ( (v32 & 1) != 0 )
      *(v31 + 10) = v32 & 0xFFFE;
    *v31 = 0;
    *(v31 + 8) = 30;
    v33 = strlen(pUnitName) + 1;
    v34 = CEntityVariantAllocator::Allocate(v33);
    *v31 = v34;
    memcpy(v34, pUnitName, v33);
    *(v31 + 10) |= 1u;
    goto LABEL_27;
  }
LABEL_14:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
  LOWORD(v20) = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
  v21 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
  if ( v21 != 0 )
  {
    if ( v21 <= 9 )
      v22 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    else
      v22 = m_pEntityKeyValues->m_keyHashes.m_pElements;
  }
  else
  {
    v22 = 0;
  }
  v20 = v20;
  v22[v20] = -782893907;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v23 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v23 = 0;
  v24 = v20;
  v25 = &v23[v24];
  m_flags = v25->m_value.m_flags;
  if ( (m_flags & 1) != 0 )
    v25->m_value.m_flags = m_flags & 0xFFFE;
  v25->m_value.m_uint64 = 0;
  v25->m_value.m_type = 30;
  v38 = strlen(pUnitName) + 1;
  v27 = CEntityVariantAllocator::Allocate(v38);
  v25->m_value.m_uint64 = v27;
  memcpy(v27, pUnitName, v38);
  v25->m_value.m_flags |= 1u;
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v28 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v28 = 0;
  v28[v24].m_pAttributeName = 0;
  m_pEntityKeyValues = this->m_pEntityKeyValues;
LABEL_3:
  AppendNPCKeyValues(pUnitName, m_pEntityKeyValues, 0);
  for ( i = this->m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(this->m_pEntityKeyValues, &i->m_entityKeyValues, 0);
}


