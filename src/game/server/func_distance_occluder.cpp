// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_distance_occluder.cpp:24
class C_CFuncDistanceOccluder_MapInstall {
	C_CFuncDistanceOccluder_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncDistanceOccluder::GetDataDescMap  (line 10, @0x000000000221a450, libserver.so)
// globals: CFuncDistanceOccluder::m_DataMap
datamap_t *__fastcall CFuncDistanceOccluder::GetDataDescMap(CFuncDistanceOccluder *const this)
{
  return &CFuncDistanceOccluder::m_DataMap;
}


// CFuncDistanceOccluder::AddDatadescMetadataKeys  (line 10, @0x00000000022280f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncDistanceOccluder::GetEntityClass(void)
void __fastcall CFuncDistanceOccluder::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncDistanceOccluder::GetEntityClass);
}


// CFuncDistanceOccluder::GetBaseMap  (line 10, @0x0000000002228110, libserver.so)
// globals: CFuncOccluder::m_DataMap
datamap_t *__cdecl CFuncDistanceOccluder::GetBaseMap()
{
  return &CFuncOccluder::m_DataMap;
}


// DataMapInit<CFuncDistanceOccluder>  (line 10, @0x0000000002228120, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFuncDistanceOccluder"
// globals: `guard variable for'DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder, CFuncOccluder::m_DataMap, CFuncDistanceOccluder::GetEntityClass(void), CFuncDistanceOccluder::m_DataMap, DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder.m_pszBase = "CFuncDistanceOccluder";
    DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::nameHolder,
      &_dso_handle);
  }
  CFuncDistanceOccluder::m_DataMap.dataNumFields = 8;
  CFuncDistanceOccluder::m_DataMap.baseMap = &CFuncOccluder::m_DataMap;
  CFuncDistanceOccluder::m_DataMap.dataDesc = &DataMapInit<CFuncDistanceOccluder>(CFuncDistanceOccluder *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncDistanceOccluder::m_DataMap, CFuncDistanceOccluder::GetEntityClass);
  return &CFuncDistanceOccluder::m_DataMap;
}


// CFuncDistanceOccluder::YouForgotToImplementOrDeclareServerClass  (line 24, @0x000000000221a460, libserver.so)
int __fastcall CFuncDistanceOccluder::YouForgotToImplementOrDeclareServerClass(CFuncDistanceOccluder *const this)
{
  return 0;
}


// CFuncDistanceOccluder::GetServerClass  (line 24, @0x0000000002221a00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFuncDistanceOccluder::GetServerClass(CFuncDistanceOccluder *const this)
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


// CFuncDistanceOccluder::CFuncDistanceOccluder  (line 29, @0x00000000022281f0, libserver.so)  // inlines: CEntityHandle, CFuncOccluder, CHandle, CNetworkVarBase, NetworkStateChanged, ~CFuncOccluder
// calls: CBaseModelEntity::CBaseModelEntity, CBaseEntity::NetworkStateChanged, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CFuncDistanceOccluder::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFuncDistanceOccluder::CFuncDistanceOccluder(CFuncDistanceOccluder *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  int (**v3)(...); // rax

  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_4042C30;
  this->m_bStartDisabled = 0;
  this->m_flFadeStartDist.m_Value = 200.0;
  CBaseEntity::NetworkStateChanged(this, 0x484u, -1, -1);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_flFadeEndDist.m_Value = 400.0;
  vptr_IHandleEntity[22](this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v3 = this->_vptr_IHandleEntity;
  this->m_flTranslucencyLimit.m_Value = 0.0;
  v3[22](this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_hAttachedOccluder.m_Value.m_Index = -1;
}


// CFuncDistanceOccluder::Precache  (line 38, @0x000000000223cc10, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CFuncOccluder::Precache, CBaseEntity::PrecacheModel
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CFuncDistanceOccluder::Precache(
        CFuncDistanceOccluder *const this,
        const CEntityPrecacheContext *pContext)
{
  const CEntityKeyValues *m_pKeyValues; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v4; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rdi

  CFuncOccluder::Precache(this, pContext);
  m_pKeyValues = pContext->m_pKeyValues;
  v4 = pContext->m_pKeyValues->m_keyHashes.0;
  if ( *&v4 <= 0 )
  {
LABEL_15:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_16;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -1536178043 )
      goto LABEL_9;
LABEL_6:
    if ( *&v4 <= ++v6 )
      goto LABEL_15;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -1536178043 )
    goto LABEL_6;
LABEL_9:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
  {
LABEL_12:
    m_uint64 = p_m_value->m_uint64;
    if ( p_m_value->m_uint64 != 0 && *m_uint64 != 0 )
    {
      CBaseEntity::PrecacheModel(m_uint64, pContext->m_pManifest);
      return;
    }
  }
LABEL_16:
  CBaseEntity::PrecacheModel("", pContext->m_pManifest);
}


// CFuncDistanceOccluder::Spawn  (line 53, @0x0000000002235e40, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<CFuncDistanceOccluder*>, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddToTail, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData<QAngle>, CopyData<Vector>, Element, EnterScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, GetValue, GetValueString, InTargetThread, Init, InvokeCallbacks, IsEmpty, IsEnabled, NetworkStateChanged, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetValue, SetValue<CFuncDistanceOccluder*>, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, TempString, operator!, operator!=<CBaseEntity>, operator(), operator->, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CFuncOccluder::Spawn, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity (28 total)
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityKeyValues::sm_EmptyVariant
void __fastcall CFuncDistanceOccluder::Spawn(CFuncDistanceOccluder *const this, const CEntityKeyValues *pKeyValues)
{
  CEntitySystem *v4; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v6; // rdx
  char v7; // al
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v10; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rdx
  const Vector *AbsOrigin; // rax
  __int64 v16; // rdi
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  _DWORD *p_x; // r15
  int m_enabled; // r9d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v21; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v23; // r15
  CEntityIdentity *v24; // rax
  __int16 v25; // si
  CEntitySpawnerContext<CFuncOccluder> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v29; // rdi
  int v30; // eax
  CEntityInstance *v31; // r15
  CEntityInstance *v32; // rax
  CUtlScratchMemoryPool *v33; // rdi
  CEntityKeyValues *v34; // rbx
  const char *m_pszClassname; // rdx
  unsigned __int64 v37; // rbx
  ThreadId_t m_TargetThreadId; // r15
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v40; // rcx
  int v41; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v42; // cx
  __int64 v43; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v44; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v46; // dx
  unsigned __int64 v47; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v48; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v49; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v50; // rsi
  uint16 m_flags; // ax
  _DWORD *v52; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rbx
  int v57; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v58; // cx
  __int64 v59; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v60; // rdx
  __int16 v61; // r15
  unsigned __int64 v62; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v63; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v64; // rax
  __int64 v65; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v66; // r15
  uint16 v67; // ax
  _DWORD *v68; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v70; // rdx
  __int64 v71; // rax
  int v72; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v73; // cx
  __int64 v74; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v75; // rdx
  __int16 v76; // r15
  unsigned __int64 v77; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v78; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v79; // rax
  char *v80; // rax
  __int16 v81; // dx
  int v82; // edx
  CEntityIdentity *m_pEntity; // rcx
  __int16 v84; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v85; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v90; // rax
  bool v91; // zf
  __int16 v92; // ax
  int v93; // eax
  CEntityIdentity *v94; // rdx
  __int16 v95; // si
  __int16 v96; // ax
  _DWORD *v97; // rax
  __int64 v98; // rbx
  __int16 v99; // ax
  _DWORD *v100; // rax
  bool v101; // [rsp+18h] [rbp-108h]
  __int64 v102; // [rsp+18h] [rbp-108h]
  CEntityHandle *v103; // [rsp+20h] [rbp-100h]
  CEntityHandle *v104; // [rsp+20h] [rbp-100h]
  CEntityHandle *v105; // [rsp+20h] [rbp-100h]
  const QAngle *AbsAngles; // [rsp+28h] [rbp-F8h]
  CEntityKeyValues *i; // [rsp+28h] [rbp-F8h]
  int v108; // [rsp+30h] [rbp-F0h]
  _QWORD v109[2]; // [rsp+40h] [rbp-E0h] BYREF
  CEntitySpawner<CFuncOccluder> spawner; // [rsp+50h] [rbp-D0h] BYREF

  CFuncOccluder::Spawn(this, pKeyValues);
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_4043310;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v4 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v4->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v4);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v6 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v6;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCFuncOccluderClass;
  if ( g_pApplication != 0 )
    v7 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v7 = 0;
  spawner.m_bValidateKeys = v7;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_15:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_14;
    goto LABEL_16;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v10 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v10) == -1536178043 )
      goto LABEL_11;
LABEL_8:
    if ( m_nCount <= ++v10 )
      goto LABEL_15;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v10] != -1536178043 )
    goto LABEL_8;
LABEL_11:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v12 = pKeyValues->m_keyValues.m_pElements;
  else
    v12 = 0;
  p_m_value = &v12[v10].m_value;
  m_uint64 = 0;
  if ( p_m_value->m_type == 30 )
LABEL_14:
    m_uint64 = p_m_value->m_uint64;
LABEL_16:
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -926958586, m_uint64);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  p_x = &AbsOrigin->x;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
LABEL_17:
    v108 = -1;
    goto LABEL_18;
  }
  v41 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v41 <= 0 )
  {
LABEL_63:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v46 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    v47 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( v47 != 0 )
    {
      if ( v47 <= 9 )
        v48 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        v48 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v48 = 0;
    }
    v48[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -467664362;
    v103 = v46;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v49 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v49 = 0;
    v102 = v103;
    v50 = &v49[v103];
    v104 = v50;
    m_flags = v50->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v50->m_value.m_flags = m_flags & 0xFFFE;
    v50->m_value.m_uint64 = 0;
    v50->m_value.m_type = 3;
    v52 = CEntityVariantAllocator::Allocate(0xCu);
    *&v104->m_Index = v52;
    *v52 = *p_x;
    v52[1] = p_x[1];
    v52[2] = p_x[2];
    *(&v104[2].m_Parts + 1) |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v53 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v53 = 0;
    v53[v102].m_pAttributeName = 0;
  }
  else
  {
    v42 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v43 = 0;
    while ( 1 )
    {
      if ( v42 != 0 )
      {
        v44 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v42 > 9 )
          v44 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v44 = 0;
      }
      if ( v44[v43] == -467664362 )
        break;
      if ( v41 <= ++v43 )
        goto LABEL_63;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v54 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v55 = v43;
      v56 = &v54[v55];
      if ( v54[v55].m_pAttributeName != 0 )
        goto LABEL_75;
LABEL_145:
      v96 = *(v56 + 10);
      if ( (v96 & 1) != 0 )
        *(v56 + 10) = v96 & 0xFFFE;
      *v56 = 0;
      *(v56 + 8) = 3;
      v97 = CEntityVariantAllocator::Allocate(0xCu);
      *v56 = v97;
      *v97 = *p_x;
      v97[1] = p_x[1];
      v97[2] = p_x[2];
      *(v56 + 10) |= 1u;
    }
    else
    {
      v54 = 0;
      v56 = 24 * v43;
      v91 = *(&stru_10.m_Lock.gap0 + 3 * v43) == 0;
      v55 = v43;
      if ( v91 )
        goto LABEL_145;
LABEL_75:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v54[v55].m_pAttributeName);
    }
  }
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_17;
  v57 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v57 <= 0 )
  {
LABEL_85:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v61 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    v62 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( v62 != 0 )
    {
      if ( v62 <= 9 )
        v63 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        v63 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v63 = 0;
    }
    v63[v61] = -1164387633;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v64 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v64 = 0;
    v65 = v61;
    v66 = &v64[v65];
    v105 = (v65 * 24);
    v67 = v64[v65].m_value.m_flags;
    if ( (v67 & 1) != 0 )
      v66->m_value.m_flags = v67 & 0xFFFE;
    v66->m_value.m_uint64 = 0;
    v66->m_value.m_type = 39;
    v68 = CEntityVariantAllocator::Allocate(0xCu);
    v66->m_value.m_uint64 = v68;
    *v68 = LODWORD(AbsAngles->x);
    v68[1] = LODWORD(AbsAngles->y);
    v68[2] = LODWORD(AbsAngles->z);
    v66->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v69 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v69 = 0;
    *(&v105[4].m_Index + v69) = 0;
  }
  else
  {
    v58 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v59 = 0;
    while ( 1 )
    {
      if ( v58 != 0 )
      {
        v60 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v58 > 9 )
          v60 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v60 = 0;
      }
      if ( v60[v59] == -1164387633 )
        break;
      if ( v57 <= ++v59 )
        goto LABEL_85;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v70 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v71 = v59;
      if ( v70[v71].m_pAttributeName != 0 )
        goto LABEL_97;
      v98 = &v70[v71];
LABEL_149:
      v99 = *(v98 + 10);
      if ( (v99 & 1) != 0 )
        *(v98 + 10) = v99 & 0xFFFE;
      *v98 = 0;
      *(v98 + 8) = 39;
      v100 = CEntityVariantAllocator::Allocate(0xCu);
      *v98 = v100;
      *v100 = LODWORD(AbsAngles->x);
      v100[1] = LODWORD(AbsAngles->y);
      v100[2] = LODWORD(AbsAngles->z);
      *(v98 + 10) |= 1u;
    }
    else
    {
      v70 = 0;
      v98 = 24 * v59;
      v91 = *(&stru_10.m_Lock.gap0 + 3 * v59) == 0;
      v71 = v59;
      if ( v91 )
        goto LABEL_149;
LABEL_97:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v70[v71].m_pAttributeName);
    }
  }
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_17;
  v72 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v72 <= 0 )
  {
LABEL_107:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v76 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    v77 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( v77 != 0 )
    {
      if ( v77 <= 9 )
        v78 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        v78 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v78 = 0;
    }
    v78[v76] = 1166161001;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v79 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v79 = 0;
    v16 = 24LL * v76;
    v80 = v79 + v16;
    v81 = *(v80 + 5);
    if ( (v81 & 1) != 0 )
      *(v80 + 5) = v81 & 0xFFFE;
    *v80 = 0;
    *(v80 + 4) = 13;
    v82 = -1;
    if ( this != 0 )
    {
      m_pEntity = this->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v84 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v84 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v82 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v84 & 0x7FFF;
        LODWORD(v109[0]) = v82;
      }
    }
    *v80 = v82;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v85 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v85 = 0;
    *(&v85->m_pAttributeName + v16) = 0;
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
  else
  {
    v73 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v74 = 0;
    v16 = v73;
    while ( 1 )
    {
      if ( v73 != 0 )
      {
        v75 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v73 > 9 )
          v75 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v75 = 0;
      }
      if ( v75[v74] == 1166161001 )
        break;
      if ( v72 <= ++v74 )
        goto LABEL_107;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v86 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v87 = v74;
      v88 = &v86[v87];
      if ( v86[v87].m_pAttributeName != 0 )
        goto LABEL_124;
LABEL_136:
      v92 = *(v88 + 10);
      if ( (v92 & 1) != 0 )
        *(v88 + 10) = v92 & 0xFFFE;
      *v88 = 0;
      *(v88 + 8) = 13;
      v93 = -1;
      if ( this != 0 )
      {
        v94 = this->m_pEntity;
        if ( v94 != 0 )
        {
          v95 = 0x7FFF;
          if ( v94->m_EHandle.m_Index != -1 )
            v95 = v94->m_EHandle.m_Index & 0x7FFF;
          v93 = (((v94->m_EHandle.m_Index >> 15) - (v94->m_flags & 1)) << 15) | v95 & 0x7FFF;
          LODWORD(v109[0]) = v93;
        }
      }
      *v88 = v93;
    }
    else
    {
      v86 = 0;
      v88 = 24 * v74;
      v91 = *(&stru_10.m_Lock.gap0 + 3 * v74) == 0;
      v87 = v74;
      if ( v91 )
        goto LABEL_136;
LABEL_124:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v86[v87].m_pAttributeName);
    }
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
  v108 = -1;
  if ( m_pEntityKeyValues != 0 )
  {
LABEL_18:
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v101 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      v37 = __rdtsc();
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      if ( m_TargetThreadId == ThreadGetCurrentId(v16) )
      {
        m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
        if ( m_pCurNode->m_pszName != "Spawn" )
        {
          m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
          g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
        }
        v90 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
        v90->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      v40 = m_numTimeBaseTicks - v37;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v40 + __rdtsc();
    }
    if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v21 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v21,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v23 = Entity;
    if ( Entity != 0 )
    {
      v24 = Entity->m_pEntity;
      if ( v24 != 0 )
      {
        v25 = 0x7FFF;
        if ( v24->m_EHandle.m_Index != -1 )
          v25 = v24->m_EHandle.m_Index & 0x7FFF;
        v108 = (((v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1)) << 15) | v25 & 0x7FFF;
      }
      v109[0] = v24;
      v109[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v109,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v23, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v29 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v29 - 1);
          (pfn)(v29, v23, i);
        }
      }
    }
    if ( v101 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    v30 = v108;
  }
  else
  {
    v30 = -1;
  }
  LODWORD(v109[0]) = v30;
  v31 = CEntityHandle::operator CEntityInstance *(&this->m_hAttachedOccluder.m_Value);
  if ( v31 != CEntityHandle::operator CEntityInstance *(v109) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hAttachedOccluder.m_Value.m_Index = v109[0];
  }
  v32 = CEntityHandle::operator CEntityInstance *(&this->m_hAttachedOccluder.m_Value);
  (*(v32->_vptr_IHandleEntity + 40))(v32, this);
  v33 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_40432F0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v33 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v33);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v34 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v34);
      operator delete(v34);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// CFuncDistanceOccluder::UpdateOnRemove  (line 67, @0x0000000002220190, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseModelEntity::UpdateOnRemove, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFuncDistanceOccluder::UpdateOnRemove(CFuncDistanceOccluder *const this)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  CBaseModelEntity::UpdateOnRemove(this);
  m_Index = this->m_hAttachedOccluder.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachedOccluder.m_Value.m_Index) >> 9)
                                                        & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hAttachedOccluder.m_Value.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  UTIL_Remove(m_pInstance);
}


// CFuncDistanceOccluder::InputEnable  (line 74, @0x000000000221e830, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState
void __fastcall CFuncDistanceOccluder::InputEnable(CFuncDistanceOccluder *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CFuncDistanceOccluder::InputDisable  (line 80, @0x000000000221aec0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CFuncDistanceOccluder::InputDisable(CFuncDistanceOccluder *const this, inputdata_t *const inputdata)
{
  CBaseEntity::AddEffects(this, 32);
}


// CFuncDistanceOccluder::InputSetFadeStartDistance  (line 86, @0x000000000221e600, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFuncDistanceOccluder::InputSetFadeStartDistance(
        CFuncDistanceOccluder *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flFadeStartDist.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeStartDist.m_Value = v4;
  }
}


// CFuncDistanceOccluder::InputSetFadeEndDistance  (line 92, @0x000000000221e680, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFuncDistanceOccluder::InputSetFadeEndDistance(
        CFuncDistanceOccluder *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flFadeEndDist.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeEndDist.m_Value = v4;
  }
}


// CFuncDistanceOccluder::InputSetTranslucencyLimit  (line 98, @0x00000000022282b0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFuncDistanceOccluder::InputSetTranslucencyLimit(
        CFuncDistanceOccluder *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm1_4
  float m_Value; // xmm0_4
  int v5; // xmm1_4
  float v6; // [rsp+Ch] [rbp-14h]
  float v7; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  m_Value = this->m_flTranslucencyLimit.m_Value;
  if ( m_float64 == m_Value )
  {
    v5 = 1065353216;
    if ( m_Value > 1.0 )
    {
LABEL_5:
      v6 = *&v5;
      (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flTranslucencyLimit.m_Value = v6;
      return;
    }
  }
  else
  {
    v7 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = v7;
    this->m_flTranslucencyLimit.m_Value = v7;
    v5 = 1065353216;
    if ( v7 > 1.0 )
      goto LABEL_5;
  }
  v5 = 0;
  if ( m_Value < 0.0 )
    goto LABEL_5;
}


