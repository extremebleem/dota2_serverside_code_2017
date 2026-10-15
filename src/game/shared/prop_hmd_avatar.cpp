// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/prop_hmd_avatar.cpp:122
class C_CPropHMDAvatar_MapInstall {
	C_CPropHMDAvatar_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// VRHandFromUseData  (line 109, @0x0000000002357680, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHMDAvatar, GetHandleEntity, GetInstance, GetSerialNumber, GetVRHandRaw, IndexToIdentity, Init, Int, IsValid, LookupEntity, ToBasePlayer, VRHandSlotFromUseData, operator CEntityInstance*, operator CPropVRHand*, operator int
// globals: CEntityHandle::gm_pEntityList
CPropVRHand *__fastcall VRHandFromUseData(const inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rbx
  int m_hScope_high; // ecx
  unsigned __int16 v4; // si
  int v5; // edi
  int v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CPropVRHand *result; // rax
  int m_int; // edi
  unsigned __int16 v11; // dx
  int v12; // ecx
  CEntityInstance *m_pInstance; // r8
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  unsigned __int16 *v17; // rcx
  int v18; // edx
  __int16 v19; // si
  CEntityIdentity *v20; // rcx
  CEntityIdentity *v21; // rcx

  pActivator = inputdata->pActivator;
  if ( inputdata->pActivator == 0 || (*(pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) == 0 )
    return 0;
  m_hScope_high = HIDWORD(pActivator[4].m_hPrivateScope.m_hScope);
  if ( m_hScope_high == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = WORD2(pActivator[4].m_hPrivateScope.m_hScope) & 0x7FFF;
    v5 = v4;
  }
  v6 = (HIDWORD(pActivator[4].m_hPrivateScope.m_hScope) >> 15 << 15) | v4 & 0x7FFF;
  if ( (v6 + 2) <= 1 )
    return 0;
  v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
  if ( v7 == 0 )
    return 0;
  v8 = &v7[v5 & 0x1FF];
  if ( v8 == 0 || v6 != v8->m_EHandle.m_Index || v8->m_pInstance == 0 )
    return 0;
  if ( inputdata->value.m_type == 5 )
    m_int = inputdata->value.m_int;
  else
    m_int = 0;
  if ( m_hScope_high == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = WORD2(pActivator[4].m_hPrivateScope.m_hScope) & 0x7FFF;
    v12 = v11;
  }
  m_pInstance = 0;
  v14 = (HIDWORD(pActivator[4].m_hPrivateScope.m_hScope) >> 15 << 15) | v11 & 0x7FFF;
  if ( (v14 + 2) > 1 )
  {
    v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
    if ( v15 != 0 )
    {
      v16 = &v15[v12 & 0x1FF];
      if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
        m_pInstance = v16->m_pInstance;
    }
  }
  result = 0;
  if ( m_int <= 3 )
  {
    v17 = (&m_pInstance[28] + 4 * m_int);
    v18 = *v17;
    if ( (*v17 + 2) > 1 )
    {
      v19 = *v17;
      v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v17 >> 9) & 0x3F];
      if ( v20 != 0 )
      {
        v21 = &v20[v19 & 0x1FF];
        if ( v21 != 0 && v18 == v21->m_EHandle.m_Index )
          return v21->m_pInstance;
      }
    }
  }
  return result;
}


// CPropHMDAvatar::YouForgotToImplementOrDeclareServerClass  (line 122, @0x000000000234ace0, libserver.so)
int __fastcall CPropHMDAvatar::YouForgotToImplementOrDeclareServerClass(CPropHMDAvatar *const this)
{
  return 0;
}


// CPropHMDAvatar::GetServerClass  (line 122, @0x0000000002351d50, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPropHMDAvatar::GetServerClass(CPropHMDAvatar *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CPropHMDAvatar::GetDataDescMap  (line 124, @0x000000000234acf0, libserver.so)
// globals: CPropHMDAvatar::m_DataMap
datamap_t *__fastcall CPropHMDAvatar::GetDataDescMap(CPropHMDAvatar *const this)
{
  return &CPropHMDAvatar::m_DataMap;
}


// CPropHMDAvatar::AddDatadescMetadataKeys  (line 124, @0x00000000023578c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPropHMDAvatar::GetEntityClass(void)
void __fastcall CPropHMDAvatar::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPropHMDAvatar::GetEntityClass);
}


// CPropHMDAvatar::GetBaseMap  (line 124, @0x00000000023578e0, libserver.so)
// globals: CPropVRTrackedObject::m_DataMap
datamap_t *__cdecl CPropHMDAvatar::GetBaseMap()
{
  return &CPropVRTrackedObject::m_DataMap;
}


// DataMapInit<CPropHMDAvatar>  (line 124, @0x00000000023578f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPropHMDAvatar"
// globals: `guard variable for'DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder, CPropVRTrackedObject::m_DataMap, CPropHMDAvatar::GetEntityClass(void), CPropHMDAvatar::m_DataMap, DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder) != 0 )
  {
    DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder.m_pszBase = "CPropHMDAvatar";
    DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::nameHolder,
      &_dso_handle);
  }
  CPropHMDAvatar::m_DataMap.dataNumFields = 4;
  CPropHMDAvatar::m_DataMap.baseMap = &CPropVRTrackedObject::m_DataMap;
  CPropHMDAvatar::m_DataMap.dataDesc = &DataMapInit<CPropHMDAvatar>(CPropHMDAvatar *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPropHMDAvatar::m_DataMap, CPropHMDAvatar::GetEntityClass);
  return &CPropHMDAvatar::m_DataMap;
}


// CPropHMDAvatar::GetPlayerOwner  (line 133, @0x000000000234fb10, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToBasePlayer
CBasePlayer *__fastcall CPropHMDAvatar::GetPlayerOwner(const CPropHMDAvatar *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CBasePlayer *m_pInstance; // r12
  CBasePlayer *v8; // rbx

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return 0;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( v3 != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  v8 = 0;
  if ( v5->m_pInstance == 0 )
    return 0;
  if ( (*(m_pInstance->_vptr_IHandleEntity + 140))(v5->m_pInstance) != 0 )
    return m_pInstance;
  return v8;
}


// CPropHMDAvatar::AttachmentsThink  (line 139, @0x0000000002358fe0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetVRHandRaw, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator CPropVRHand*
// calls: CPropVRHand::AttachmentsThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropHMDAvatar::AttachmentsThink(CPropHMDAvatar *const this)
{
  int v1; // r12d
  CNetworkArrayBase<CHandle<CPropVRHand>,4,CPropHMDAvatar::NetworkVar_m_hVRControllers> *p_m_hVRControllers; // rbx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  v1 = 4;
  p_m_hVRControllers = &this->m_hVRControllers;
  do
  {
    if ( p_m_hVRControllers->m_Value[0].m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hVRControllers->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[p_m_hVRControllers->m_Value[0].m_Index & 0x1FF];
        if ( v4 != 0 && p_m_hVRControllers->m_Value[0].m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
          CPropVRHand::AttachmentsThink(v4->m_pInstance);
      }
    }
    p_m_hVRControllers = (p_m_hVRControllers + 4);
    --v1;
  }
  while ( v1 != 0 );
}


// CPropHMDAvatar::CPropHMDAvatar  (line 155, @0x0000000002359890, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkArrayBase, CNetworkHandleBase, CNetworkVarBase
// calls: CPropVRTrackedObject::CPropVRTrackedObject
// callers: CPropHMDAvatar::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPropHMDAvatar::CPropHMDAvatar(CPropHMDAvatar *const this)
{
  CPropVRTrackedObject::CPropVRTrackedObject(this);
  this->m_hVRControllers.m_Value[0].m_Index = -1;
  this->_vptr_IHandleEntity = &off_4099530;
  this->_vptr_IVRFlyListener = &off_4099D70;
  this->m_hVRControllers.m_Value[1].m_Index = -1;
  this->m_hVRControllers.m_Value[2].m_Index = -1;
  this->m_hVRControllers.m_Value[3].m_Index = -1;
  this->m_hCloseCaption.m_Value.m_Index = -1;
}


// CPropHMDAvatar::Precache  (line 161, @0x0000000002370270, libserver.so)
// calls: CPropVRTrackedObject::Precache, UTIL_PrecacheOther
// strings: "prop_vr_hand"
void __fastcall CPropHMDAvatar::Precache(CPropHMDAvatar *const this, const CEntityPrecacheContext *pContext)
{
  CPropVRTrackedObject::Precache(this, pContext);
  UTIL_PrecacheOther("prop_vr_hand", pContext);
}


// CPropHMDAvatar::Spawn  (line 176, @0x00000000023683d0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<CEntityHandle>, AddToTail, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CalculateModelName, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, NetworkStateChanged, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<CEntityHandle>, SetValue<QAngle>, SetValue<Vector>, SetValues, SetWorldTransform, Spawn, operator CEntityInstance*, operator CPropVRHand*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CCollisionProperty::EnableInteractsAsMask, CPropVRTrackedObject::Spawn, memcmp, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<QAngle>, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release (27 total)
// strings: "prop_vr_hand", "models/controllers/vr_controller.vmdl", "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
void __fastcall CPropHMDAvatar::Spawn(CPropHMDAvatar *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned int v4; // r15d
  CEntitySystem *v5; // rdi
  CUtlScratchMemoryPool *v6; // rax
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v8; // rax
  char v9; // al
  const char *v10; // rdx
  CEntityIdentity *m_pEntity; // rax
  __int16 v12; // cx
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // esi
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v17; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v19; // r13
  CEntityIdentity *v20; // rax
  __int16 v21; // si
  CEntitySpawnerContext<CPropVRHand> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v25; // rdi
  CEntityIdentity *v26; // rax
  CEntityIdentity *v27; // rax
  CEntityInstance *m_pInstance; // rbx
  CUtlScratchMemoryPool *v29; // rdi
  CEntityKeyValues *v30; // rbx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v33; // cx
  __int64 v34; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v35; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v36; // rdx
  __int64 v37; // rax
  const char *m_pAttributeName; // rsi
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v40; // r13
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rax
  int v47; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v48; // rax
  uint16 v49; // dx
  CEntityIdentity *v50; // rdx
  int v51; // eax
  __int16 v52; // cx
  bool v53; // [rsp+2Fh] [rbp-131h]
  CNetworkArrayBase<CHandle<CPropVRHand>,4,CPropHMDAvatar::NetworkVar_m_hVRControllers> *s1; // [rsp+38h] [rbp-128h]
  CEntityKeyValues *i; // [rsp+48h] [rbp-118h]
  int v56; // [rsp+60h] [rbp-100h]
  int v57; // [rsp+70h] [rbp-F0h]
  _QWORD v58[2]; // [rsp+80h] [rbp-E0h] BYREF
  CEntitySpawner<CPropVRHand> spawner; // [rsp+90h] [rbp-D0h] BYREF

  CCollisionProperty::EnableInteractsAsMask(&this->m_Collision, 0x400000u);
  CPropVRTrackedObject::Spawn(this, pKeyValues);
  LODWORD(spawner._vptr_CEntitySpawnerBase) = 1;
  if ( memcmp(&this->m_hLogicalControllerSlots, &spawner, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1336, 0, 0xFFFFFFFFLL);
    this->m_hLogicalControllerSlots.m_Value[0] = spawner._vptr_CEntitySpawnerBase;
  }
  LODWORD(spawner._vptr_CEntitySpawnerBase) = 0;
  if ( memcmp(&this->m_hLogicalControllerSlots + 4, &spawner, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1336, 1, 0xFFFFFFFFLL);
    this->m_hLogicalControllerSlots.m_Value[1] = spawner._vptr_CEntitySpawnerBase;
  }
  LODWORD(spawner._vptr_CEntitySpawnerBase) = 1;
  if ( memcmp(&this->m_hLiteralControllerSlots, &spawner, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1328, 0, 0xFFFFFFFFLL);
    this->m_hLiteralControllerSlots.m_Value[0] = spawner._vptr_CEntitySpawnerBase;
  }
  LODWORD(spawner._vptr_CEntitySpawnerBase) = 0;
  if ( memcmp(&this->m_hLiteralControllerSlots + 4, &spawner, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1328, 1, 0xFFFFFFFFLL);
    this->m_hLiteralControllerSlots.m_Value[1] = spawner._vptr_CEntitySpawnerBase;
  }
  v4 = 0;
  s1 = &this->m_hVRControllers;
  do
  {
    spawner._vptr_CEntitySpawnerBase = off_4099D90;
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    v5 = g_pEntitySystem;
    spawner._vptr_CEntitySpawnerBase = off_4099DB0;
    v6 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner.m_scriptClassName.m_pString = 0;
    spawner.m_pContext = 0;
    spawner.m_pSpawnBatch = 0;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v5->m_entitySpawnerData;
    spawner.m_pPrevAllocator = v6;
    spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v5);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    qmemcpy(spawner.m_mSpawnGroupToWorld.m_flMatVal[1], SpawnOriginOffset->m_flMatVal[1], 24);
    v8 = *&SpawnOriginOffset->m_flMatVal[2][2];
    spawner.m_pEntityKeyValues = 0;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v8;
    spawner.m_pEntityClass = g_pEntityCPropVRHandClass;
    if ( g_pApplication != 0 )
      v9 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v9 = 0;
    spawner.m_bValidateKeys = v9;
    spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*spawner._vptr_CEntitySpawnerBase)(&spawner);
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "prop_vr_hand");
    spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                               g_pEntitySystem,
                               "prop_vr_hand",
                               &spawner.m_scriptClassName);
    v10 = "models/controllers/vr_controller.vmdl";
    if ( v4 > 1 )
      v10 = "";
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -926958586, v10);
    CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, &vec3_origin);
    CEntityKeyValues::SetValue<QAngle>(spawner.m_pEntityKeyValues, -1164387633, &vec3_angle);
    if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
    {
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v12 = 0x7FFF;
      else
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      v57 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
      if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      {
LABEL_19:
        v56 = -1;
        goto LABEL_20;
      }
    }
    else
    {
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      v57 = -1;
      if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
        goto LABEL_19;
    }
    m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_78:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
      v40 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      m_pElements[v40] = -1104771937;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v43 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v43 = 0;
      v44 = &v43[v40];
      m_flags = v44->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v44->m_value.m_flags = m_flags & 0xFFFE;
      v44->m_value.m_uint64 = 0;
      v44->m_value.m_type = 13;
      v44->m_value.m_int = v57;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v46 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v46 = 0;
      v46[v40].m_pAttributeName = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      goto LABEL_72;
    }
    v33 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v34 = 0;
    while ( v33 == 0 )
    {
      if ( *(4 * v34) == -1104771937 )
        goto LABEL_68;
LABEL_65:
      if ( m_nCount <= ++v34 )
        goto LABEL_78;
    }
    v35 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v33 > 9 )
      v35 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    if ( v35[v34] != -1104771937 )
      goto LABEL_65;
LABEL_68:
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v36 = m_pEntityKeyValues->m_keyValues.m_pElements;
      v37 = v34;
      m_pAttributeName = v36[v37].m_pAttributeName;
      if ( m_pAttributeName != 0 )
        goto LABEL_70;
      v47 = v57;
LABEL_89:
      v48 = &v36[v37];
      v49 = v48->m_value.m_flags;
      if ( (v49 & 1) != 0 )
        v48->m_value.m_flags = v49 & 0xFFFE;
      v48->m_value.m_uint64 = 0;
      v48->m_value.m_type = 13;
      v48->m_value.m_int = v47;
    }
    else
    {
      m_pAttributeName = *(&stru_10.m_Lock.gap0 + 3 * v34);
      v37 = v34;
      if ( m_pAttributeName == 0 )
      {
        v47 = v57;
        v36 = 0;
        goto LABEL_89;
      }
LABEL_70:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
    }
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_72:
    v56 = -1;
    if ( m_pEntityKeyValues == 0 )
    {
LABEL_45:
      LODWORD(v58[0]) = -1;
LABEL_46:
      m_pInstance = 0;
      goto LABEL_47;
    }
LABEL_20:
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v53 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    }
    if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v17 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v17,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v19 = Entity;
    if ( Entity != 0 )
    {
      v20 = Entity->m_pEntity;
      if ( v20 != 0 )
      {
        v21 = 0x7FFF;
        if ( v20->m_EHandle.m_Index != -1 )
          v21 = v20->m_EHandle.m_Index & 0x7FFF;
        v56 = (((v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1)) << 15) | v21 & 0x7FFF;
      }
      v58[0] = v20;
      v58[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v58,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v19, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v25 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v25 - 1);
          (pfn)(v25, v19, i);
        }
      }
      (*(spawner._vptr_CEntitySpawnerBase + 1))(&spawner, v19);
    }
    if ( v53 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    if ( (v56 + 2) <= 1 )
      goto LABEL_45;
    v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v56 >> 9) & 0x3F];
    if ( v26 == 0 )
      goto LABEL_45;
    v27 = &v26[v56 & 0x1FF];
    if ( v27 == 0 || v27->m_EHandle.m_Index != v56 )
      goto LABEL_45;
    m_pInstance = v27->m_pInstance;
    LODWORD(v58[0]) = -1;
    if ( m_pInstance == 0 )
      goto LABEL_46;
    v50 = m_pInstance->m_pEntity;
    if ( v50 != 0 )
    {
      v51 = (v50->m_EHandle.m_Index >> 15) - (v50->m_flags & 1);
      v52 = 0x7FFF;
      if ( v50->m_EHandle.m_Index != -1 )
        v52 = v50->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v58[0]) = v52 | v58[0] & 0x8000;
      LODWORD(v58[0]) = (v51 << 15) | v58[0] & 0x7FFF;
    }
LABEL_47:
    if ( memcmp(s1, v58, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1344, v4, 0xFFFFFFFFLL);
      s1->m_Value[0].m_Index = v58[0];
    }
    (*(m_pInstance->_vptr_IHandleEntity + 264))(m_pInstance, v4, this);
    v29 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner._vptr_CEntitySpawnerBase = off_4099D90;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
    if ( v29 == &g_pEntitySystem->m_entitySpawnerData )
    {
      m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
      if ( m_nEntitySpawnerDataUseCount == 1 )
        CUtlScratchMemoryPool::FreeAll(v29);
    }
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      v30 = spawner.m_pEntityKeyValues;
      if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(v30);
        operator delete(v30);
      }
    }
    if ( spawner.m_scriptClassName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
    ++v4;
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    s1 = (s1 + 4);
  }
  while ( v4 != 4 );
}


// CPropHMDAvatar::UpdateOnRemove  (line 231, @0x000000000234f0f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator CPropVRHand*
// calls: CBaseAnimating::UpdateOnRemove, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropHMDAvatar::UpdateOnRemove(CPropHMDAvatar *const this)
{
  int v1; // r12d
  CNetworkArrayBase<CHandle<CPropVRHand>,4,CPropHMDAvatar::NetworkVar_m_hVRControllers> *p_m_hVRControllers; // rbx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  v1 = 4;
  CBaseAnimating::UpdateOnRemove(this);
  p_m_hVRControllers = &this->m_hVRControllers;
  do
  {
    if ( p_m_hVRControllers->m_Value[0].m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hVRControllers->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[p_m_hVRControllers->m_Value[0].m_Index & 0x1FF];
        if ( v5 != 0 && p_m_hVRControllers->m_Value[0].m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
          UTIL_Remove(v5->m_pInstance);
      }
    }
    p_m_hVRControllers = (p_m_hVRControllers + 4);
    --v1;
  }
  while ( v1 != 0 );
}


// CPropHMDAvatar::UpdateTransmitState  (line 248, @0x000000000234b870, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPropHMDAvatar::UpdateTransmitState(CPropHMDAvatar *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPropHMDAvatar::UpdateTrackingData  (line 256, @0x000000000235a670, libserver.so)
// calls: CPropVRTrackedObject::UpdateTrackingData
void __fastcall CPropHMDAvatar::UpdateTrackingData(
        CPropHMDAvatar *const this,
        bool bTeleport,
        const HandInfo_t *pHandInfo,
        bool bActive)
{
  CPropVRTrackedObject::UpdateTrackingData(this, bTeleport, pHandInfo, bActive);
}


// CPropHMDAvatar::GetDefaultModel  (line 281, @0x000000000234ad00, libserver.so)
const char *__fastcall CPropHMDAvatar::GetDefaultModel(const CPropHMDAvatar *const this)
{
  return "";
}


// CPropHMDAvatar::ScriptGetVRHand  (line 287, @0x000000000234f050, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CPropHMDAvatar::ScriptGetVRHand(CPropHMDAvatar *const this, int nHandID)
{
  HSCRIPT result; // rax
  CHandle<CPropVRHand> *v3; // rcx
  uint32 m_Index; // edx
  __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CEntityInstance *m_pInstance; // rbx

  if ( nHandID > 3 )
    return 0;
  result = 0;
  v3 = &this->m_hVRControllers.m_Value[nHandID];
  m_Index = v3->m_Index;
  if ( v3->m_Index + 2 > 1 )
  {
    v5 = v3->m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v7->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CPropHMDAvatar::UpdateLogicalHand  (line 297, @0x000000000236fcb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetVRHandRaw, GetVRHandSlotLogical, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator CPropVRHand*
// calls: memcmp, CPropVRHand::SwapLogicalAttachmentsWith
// callers: CPropHMDAvatar::SwapLogicalHands, vr_swap_logical_hands
// globals: CEntityHandle::gm_pEntityList
CPropVRHand *__fastcall CPropHMDAvatar::UpdateLogicalHand(
        CPropHMDAvatar *const this,
        eLogicalHandType nLogicalHand,
        vr_controller_slots_t nSlotID)
{
  int v3; // eax
  __int64 v6; // rbx
  CNetworkArrayBase<int,2,CPropHMDAvatar::NetworkVar_m_hLogicalControllerSlots> *p_m_hLogicalControllerSlots; // r12
  CPropVRHand *m_pInstance; // rdi
  CHandle<CPropVRHand> *v9; // rcx
  uint32 m_Index; // edx
  __int16 v11; // si
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  CHandle<CPropVRHand> *v14; // rdx
  CPropVRHand *v15; // rsi
  uint32 v16; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CHandle<CPropVRHand> *v20; // rcx
  CPropVRHand *result; // rax
  uint32 v22; // edx
  __int16 v23; // si
  CEntityIdentity *v24; // rcx
  CEntityIdentity *v25; // rcx
  bool v26; // [rsp+Bh] [rbp-45h]
  eLogicalHandType nOtherLogicalHand; // [rsp+Ch] [rbp-44h]
  _DWORD s2[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = 0;
  v6 = nSlotID;
  if ( nLogicalHand <= eLogicalHandType::LOGICAL_HAND_TYPE_OFF_HAND )
    v3 = this->m_hLogicalControllerSlots.m_Value[nLogicalHand];
  if ( nSlotID != v3 )
  {
    nOtherLogicalHand = nLogicalHand == eLogicalHandType::LOGICAL_HAND_TYPE_PRIMARY_HAND;
    p_m_hLogicalControllerSlots = &this->m_hLogicalControllerSlots;
    s2[0] = nSlotID;
    v26 = nSlotID == vr_controller_slots_t::VRCONTROLLER_SLOT_HAND0;
    if ( memcmp(&this->m_hLogicalControllerSlots + 4 * nLogicalHand, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1336, nLogicalHand, 0xFFFFFFFFLL);
      this->m_hLogicalControllerSlots.m_Value[nLogicalHand] = v6;
    }
    s2[0] = v26;
    if ( memcmp(p_m_hLogicalControllerSlots + 4 * nOtherLogicalHand, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1336, nOtherLogicalHand, 0xFFFFFFFFLL);
      this->m_hLogicalControllerSlots.m_Value[nOtherLogicalHand] = v26;
    }
    m_pInstance = 0;
    v9 = &this->m_hVRControllers.m_Value[v6];
    m_Index = v9->m_Index;
    if ( v9->m_Index + 2 > 1 )
    {
      v11 = v9->m_Index;
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[v11 & 0x1FF];
        if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
          m_pInstance = v13->m_pInstance;
      }
    }
    v14 = &this->m_hVRControllers.m_Value[v26];
    v15 = 0;
    v16 = v14->m_Index;
    if ( v14->m_Index + 2 > 1 )
    {
      v17 = v14->m_Index;
      v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
      if ( v18 != 0 )
      {
        v19 = &v18[v17 & 0x1FF];
        if ( v19 != 0 && v16 == v19->m_EHandle.m_Index )
          v15 = v19->m_pInstance;
      }
    }
    CPropVRHand::SwapLogicalAttachmentsWith(m_pInstance, v15);
  }
  if ( v6 > 3 )
    return 0;
  v20 = &this->m_hVRControllers.m_Value[v6];
  result = 0;
  v22 = v20->m_Index;
  if ( v20->m_Index + 2 > 1 )
  {
    v23 = v20->m_Index;
    v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F];
    if ( v24 != 0 )
    {
      v25 = &v24[v23 & 0x1FF];
      if ( v25 != 0 && v22 == v25->m_EHandle.m_Index )
        return v25->m_pInstance;
    }
  }
  return result;
}


// CPropHMDAvatar::SwapLogicalHands  (line 318, @0x000000000236ff00, libserver.so)
// calls: CPropHMDAvatar::UpdateLogicalHand
void __fastcall CPropHMDAvatar::SwapLogicalHands(CPropHMDAvatar *const this)
{
  CPropHMDAvatar::UpdateLogicalHand(
    this,
    eLogicalHandType::LOGICAL_HAND_TYPE_PRIMARY_HAND,
    this->m_hLogicalControllerSlots.m_Value[1]);
}


// vr_swap_logical_hands  (line 327, @0x000000000236ff20, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHMDAvatar, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, SwapLogicalHands
// calls: UTIL_GetCommandClient, CPropHMDAvatar::UpdateLogicalHand
void __fastcall vr_swap_logical_hands(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  CommandClient = UTIL_GetCommandClient(ctx);
  if ( CommandClient != 0 )
  {
    if ( CommandClient->m_hPropHMDAvatar.m_Value.m_Index == -1 )
    {
      v3 = 0x7FFF;
      v4 = 0x7FFF;
    }
    else
    {
      v3 = CommandClient->m_hPropHMDAvatar.m_Value.m_Index & 0x7FFF;
      v4 = v3;
    }
    v5 = (CommandClient->m_hPropHMDAvatar.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
    if ( (v5 + 2) > 1 )
    {
      v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v6 != 0 )
      {
        v7 = &v6[v4 & 0x1FF];
        if ( v7 != 0 && v5 == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
          CPropHMDAvatar::UpdateLogicalHand(
            v7->m_pInstance,
            eLogicalHandType::LOGICAL_HAND_TYPE_PRIMARY_HAND,
            SHIDWORD(v7->m_pInstance[27].m_CScriptComponent));
      }
    }
  }
}


// CPropHMDAvatar::Activate  (line 343, @0x000000000234c230, libserver.so)
// calls: CBaseAnimating::Activate
void __fastcall CPropHMDAvatar::Activate(CPropHMDAvatar *const this, ActivateType_t activateType)
{
  CBaseAnimating::Activate(this, activateType);
}


// CPropHMDAvatar::GetVRHandRaw  (line 465, @0x00000000023579c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator CPropVRHand*
// callers: CBasePlayer::ReceiveClientMsg_DevPaletteVisibilityChangedEvent, CPointValueRemapper::UpdateInternal, CTrackedControllerManager::NotifyVRFlyNoclipChanged
// globals: CEntityHandle::gm_pEntityList
CPropVRHand *__fastcall CPropHMDAvatar::GetVRHandRaw(
        CPropHMDAvatar *const this,
        vr_controller_slots_t nControllerSlotID)
{
  CPropVRHand *result; // rax
  CHandle<CPropVRHand> *v3; // rcx
  uint32 m_Index; // edx
  __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  if ( nControllerSlotID > vr_controller_slots_t::VRCONTROLLER_SLOT_PUCK1 )
    return 0;
  result = 0;
  v3 = &this->m_hVRControllers.m_Value[nControllerSlotID];
  m_Index = v3->m_Index;
  if ( v3->m_Index + 2 > 1 )
  {
    v5 = v3->m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        return v7->m_pInstance;
    }
  }
  return result;
}


// CPropHMDAvatar::GetVRHandLiteral  (line 476, @0x0000000002357a30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetVRHandRaw, GetVRHandSlotLiteral, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator CPropVRHand*
// globals: CEntityHandle::gm_pEntityList
CPropVRHand *__fastcall CPropHMDAvatar::GetVRHandLiteral(CPropHMDAvatar *const this, eLiteralHandType nLiteralHand)
{
  __int64 v2; // rdx
  CHandle<CPropVRHand> *v3; // rcx
  CPropVRHand *result; // rax
  uint32 m_Index; // edx
  __int16 v6; // si
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  v2 = 0;
  if ( nLiteralHand > eLiteralHandType::LITERAL_HAND_TYPE_LEFT
    || (result = 0, (v2 = this->m_hLiteralControllerSlots.m_Value[nLiteralHand]) <= 3) )
  {
    v3 = &this->m_hVRControllers.m_Value[v2];
    result = 0;
    m_Index = v3->m_Index;
    if ( v3->m_Index + 2 > 1 )
    {
      v6 = v3->m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v6 & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          return v8->m_pInstance;
      }
    }
  }
  return result;
}


// CPropHMDAvatar::GetVRHandLogical  (line 484, @0x0000000002357ab0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetVRHandRaw, GetVRHandSlotLogical, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator CPropVRHand*
// globals: CEntityHandle::gm_pEntityList
CPropVRHand *__fastcall CPropHMDAvatar::GetVRHandLogical(CPropHMDAvatar *const this, eLogicalHandType nLogicalHand)
{
  __int64 v2; // rdx
  CHandle<CPropVRHand> *v3; // rcx
  CPropVRHand *result; // rax
  uint32 m_Index; // edx
  __int16 v6; // si
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  v2 = 0;
  if ( nLogicalHand > eLogicalHandType::LOGICAL_HAND_TYPE_OFF_HAND
    || (result = 0, (v2 = this->m_hLogicalControllerSlots.m_Value[nLogicalHand]) <= 3) )
  {
    v3 = &this->m_hVRControllers.m_Value[v2];
    result = 0;
    m_Index = v3->m_Index;
    if ( v3->m_Index + 2 > 1 )
    {
      v6 = v3->m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v6 & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          return v8->m_pInstance;
      }
    }
  }
  return result;
}


// CPropHMDAvatar::GetVRHandSlotLiteral  (line 492, @0x0000000002357b30, libserver.so)
vr_controller_slots_t __fastcall CPropHMDAvatar::GetVRHandSlotLiteral(
        CPropHMDAvatar *const this,
        eLiteralHandType nLiteralHand)
{
  vr_controller_slots_t result; // eax

  result = vr_controller_slots_t::VRCONTROLLER_SLOT_HAND0;
  if ( nLiteralHand <= eLiteralHandType::LITERAL_HAND_TYPE_LEFT )
    return this->m_hLiteralControllerSlots.m_Value[nLiteralHand];
  return result;
}


// CPropHMDAvatar::GetVRHandSlotLogical  (line 503, @0x0000000002357b50, libserver.so)
vr_controller_slots_t __fastcall CPropHMDAvatar::GetVRHandSlotLogical(
        CPropHMDAvatar *const this,
        eLogicalHandType nLogicalHand)
{
  vr_controller_slots_t result; // eax

  result = vr_controller_slots_t::VRCONTROLLER_SLOT_HAND0;
  if ( nLogicalHand <= eLogicalHandType::LOGICAL_HAND_TYPE_OFF_HAND )
    return this->m_hLogicalControllerSlots.m_Value[nLogicalHand];
  return result;
}


