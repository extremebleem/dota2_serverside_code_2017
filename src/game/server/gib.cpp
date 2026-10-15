
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGib::GetDataDescMap  (line 24, @0x00000000022541b0, libserver.so)
// globals: CGib::m_DataMap
datamap_t *__fastcall CGib::GetDataDescMap(CGib *const this)
{
  return &CGib::m_DataMap;
}


// CGib::AddDatadescMetadataKeys  (line 24, @0x0000000002265c50, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGib::GetEntityClass(void)
void __fastcall CGib::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGib::GetEntityClass);
}


// CGib::GetBaseMap  (line 24, @0x0000000002265c70, libserver.so)
datamap_t *__cdecl CGib::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CGib>  (line 24, @0x0000000002270220, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CGib"
// globals: `guard variable for'DataMapInit<CGib>(CGib *)::nameHolder, `guard variable for'DataMapInit<CGib>(CGib *)::dataDesc, CGib::GetEntityClass(void), CGib::m_DataMap, DataMapInit<CGib>(CGib *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGib>(CGib *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax
  char *v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  char **v13; // rax
  char *v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  char **v17; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CGib>(CGib *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGib>(CGib *)::nameHolder) != 0 )
  {
    DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGib>(CGib *)::nameHolder.m_pszBase = "CGib";
    DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGib>(CGib *)::nameHolder.m_nLenBase = 4;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGib>(CGib *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGib>(CGib *)::nameHolder,
      &_dso_handle);
  }
  CGib::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CGib>(CGib *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGib>(CGib *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CGib>(CGib *)::nameHolder.m_nLenBase + 15);
    strcpy(stpcpy(v2, DataMapInit<CGib>(CGib *)::nameHolder.m_pszBase), "BounceGibTouch");
    m_Size = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size == DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CGib>(CGib *)::dataDesc[10].fieldName = v2;
    v6 = operator new[](DataMapInit<CGib>(CGib *)::nameHolder.m_nLenBase + 15);
    strcpy(stpcpy(v6, DataMapInit<CGib>(CGib *)::nameHolder.m_pszBase), "StickyGibTouch");
    v7 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size == DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CGib>(CGib *)::dataDesc[11].fieldName = v6;
    v10 = operator new[](DataMapInit<CGib>(CGib *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v10, DataMapInit<CGib>(CGib *)::nameHolder.m_pszBase), "WaitTillLand");
    v11 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size == DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CGib>(CGib *)::dataDesc[12].fieldName = v10;
    v14 = operator new[](DataMapInit<CGib>(CGib *)::nameHolder.m_nLenBase + 9);
    strcpy(stpcpy(v14, DataMapInit<CGib>(CGib *)::nameHolder.m_pszBase), "DieThink");
    v15 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size == DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CGib>(CGib *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CGib>(CGib *)::dataDesc[13].fieldName = v14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGib>(CGib *)::dataDesc);
  }
  CGib::m_DataMap.dataNumFields = 13;
  CGib::m_DataMap.dataDesc = &DataMapInit<CGib>(CGib *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGib::m_DataMap, CGib::GetEntityClass);
  return &CGib::m_DataMap;
}


// CreateSimpleGib  (line 46, @0x00000000022723c0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<char const*>, AddToTail, AddToTailGetPtr, Allocate, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData, Element, EnsureCapacity, EnterScope, ExitScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LeafCodeInfo_t, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetValue, Spawn, V_strlen, memcpy, operator CEntityInstance*, operator CGib*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CUtlString::FreeMemoryBlock, CEntityKeyValues::SetValue, CEntityKeyValues::~CEntityKeyValues, operator delete (31 total)
// callers: CGibShooter::CreateGib, CEnvShooter::CreateGib, CGib::SpawnStickyGibs, CGib::SpawnHeadGib, CGib::SpawnSpecificGibs, CGib::SpawnRandomGibs
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow" (7 total)
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CGib *__fastcall CreateSimpleGib(const char *pModelName)
{
  CEntitySystem *v2; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // rdi
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // eax
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v10; // rax
  CEntityInstance *Entity; // rax
  __int64 v12; // rdi
  CEntityInstance *v13; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // si
  CEntitySpawnerContext<CGib> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v19; // rdi
  CEntityIdentity *v20; // rax
  CGib *m_pInstance; // r13
  CEntityIdentity *v22; // rax
  CUtlScratchMemoryPool *v23; // rdi
  CEntityKeyValues *v24; // rbx
  const char *m_pszClassname; // rdx
  unsigned __int64 v28; // rbx
  ThreadId_t v29; // r15
  uint64 v30; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v32; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v34; // rcx
  CVProfNode *m_pParent; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v37; // cx
  __int64 v38; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v39; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  unsigned __int64 m_nAllocated; // rdx
  int v42; // esi
  int v43; // r15d
  int v44; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v45; // rax
  __int64 v46; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rax
  __int64 v48; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v49; // r15
  uint16 m_flags; // ax
  void *v51; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v52; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // rdx
  __int64 v54; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v56; // rax
  __int64 v57; // rbx
  __int16 v58; // ax
  signed int v59; // r15d
  void *v60; // rax
  int v61; // ecx
  void *v62; // rcx
  unsigned __int64 v63; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  bool v73; // [rsp+24h] [rbp-13Ch]
  signed int v74; // [rsp+24h] [rbp-13Ch]
  CEntityKeyValues *i; // [rsp+28h] [rbp-138h]
  __int64 v76; // [rsp+28h] [rbp-138h]
  int v77; // [rsp+30h] [rbp-130h]
  _QWORD v78[2]; // [rsp+40h] [rbp-120h] BYREF
  LeafCodeInfo_t v79; // [rsp+50h] [rbp-110h] BYREF
  LeafCodeInfo_t v80; // [rsp+70h] [rbp-F0h] BYREF
  CEntitySpawner<CGib> gibSpawner; // [rsp+90h] [rbp-D0h] BYREF

  gibSpawner.m_modifyScope.m_pKeyValues = 0;
  gibSpawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&gibSpawner.m_modifyScope, 0);
  gibSpawner._vptr_CEntitySpawnerBase = off_40516D0;
  gibSpawner.m_scriptClassName.m_pString = 0;
  gibSpawner.m_pContext = 0;
  v2 = g_pEntitySystem;
  gibSpawner.m_pSpawnBatch = 0;
  gibSpawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v2->m_entitySpawnerData;
  gibSpawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v2);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&gibSpawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v4 = *&SpawnOriginOffset->m_flMatVal[0][2];
  gibSpawner.m_pEntityKeyValues = 0;
  *&gibSpawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v4;
  *&gibSpawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&gibSpawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  gibSpawner.m_pEntityClass = g_pEntityCGibClass;
  if ( g_pApplication != 0 )
    v5 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v5 = 0;
  gibSpawner.m_bValidateKeys = v5;
  gibSpawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*gibSpawner._vptr_CEntitySpawnerBase)(&gibSpawner);
  m_pEntityKeyValues = gibSpawner.m_pEntityKeyValues;
  if ( gibSpawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = gibSpawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( gibSpawner.m_pEntityKeyValues->m_keyHashes.m_nCount <= 0 )
    {
LABEL_60:
      if ( m_nCount == 0x7FFF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_121;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v71, v72, v69, v70) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_121:
          v79.m_szFile = "../../public/tier1/utlleanvector.h";
          v79.m_szFunction = "AddToTailGetPtr";
          v79.m_nLine = 557;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v79,
            "%s allocation count overflow",
            "AddToTailGetPtr");
        }
      }
      m_nAllocated = gibSpawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v42 = m_nCount + 1;
      if ( v42 > m_nAllocated )
      {
        LOWORD(v43) = m_nCount + 1;
        if ( v42 > 9 )
        {
          if ( m_nCount == 0x7FFF )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_114;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v67, v68, v65, v66) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_114:
              v80.m_szFile = "../../public/tier1/utlleanvector.h";
              v80.m_szFunction = "EnsureCapacity";
              v80.m_nLine = 104;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v80,
                "%s allocation count overflow",
                "EnsureCapacity");
            }
          }
          v43 = gibSpawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
          while ( 1 )
          {
            v44 = v43;
            if ( v42 <= v43 )
              break;
            if ( v43 <= 16382 )
            {
              v61 = 2 * v43;
              v43 = 8;
              if ( 2 * v44 > 7 )
                v43 = v61;
            }
            else
            {
              v43 = 0x7FFF;
            }
          }
        }
        if ( m_nAllocated > 9 )
        {
          m_pEntityKeyValues->m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                                          g_pMemAlloc,
                                                          gibSpawner.m_pEntityKeyValues->m_keyHashes.m_pElements,
                                                          4LL * v43);
          m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
        }
        else if ( v43 > 9 )
        {
          v62 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v43);
          v63 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
          if ( v63 != 0 )
          {
            m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( v63 > 9 )
              m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          m_pEntityKeyValues->m_keyHashes.m_pElements = memcpy(
                                                          v62,
                                                          m_pElements,
                                                          4LL * m_pEntityKeyValues->m_keyHashes.m_nCount);
          m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
        }
        m_pEntityKeyValues->m_keyHashes.m_nAllocated = v43;
        m_nAllocated = v43;
      }
      m_pEntityKeyValues->m_keyHashes.m_nCount = m_nCount + 1;
      if ( m_nAllocated != 0 )
      {
        v45 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          v45 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v45 = 0;
      }
      v46 = m_nCount;
      v45[m_nCount] = -926958586;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v47 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v47 = 0;
      v48 = 24 * v46;
      v49 = &v47[v46];
      v76 = v48;
      m_flags = v49->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v49->m_value.m_flags = m_flags & 0xFFFE;
      v49->m_value.m_uint64 = 0;
      v49->m_value.m_type = 30;
      if ( pModelName != 0 )
      {
        v74 = strlen(pModelName) + 1;
        v51 = CEntityVariantAllocator::Allocate(v74);
        v49->m_value.m_uint64 = v51;
        memcpy(v51, pModelName, v74);
        v49->m_value.m_flags |= 1u;
      }
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v52 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v52 = 0;
      m_pEntityKeyValues = gibSpawner.m_pEntityKeyValues;
      *(&v52->m_pAttributeName + v76) = 0;
    }
    else
    {
      v37 = gibSpawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v38 = 0;
      v6 = v37;
      while ( 1 )
      {
        if ( v37 != 0 )
        {
          v39 = (&gibSpawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v37 > 9 )
            v39 = gibSpawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v39 = 0;
        }
        if ( v39[v38] == -926958586 )
          break;
        if ( m_nCount <= ++v38 )
          goto LABEL_60;
      }
      if ( gibSpawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v53 = gibSpawner.m_pEntityKeyValues->m_keyValues.m_pElements;
        v54 = v38;
        if ( v53[v54].m_pAttributeName != 0 )
        {
LABEL_85:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v53[v54].m_pAttributeName);
LABEL_86:
          m_pEntityKeyValues = gibSpawner.m_pEntityKeyValues;
          goto LABEL_87;
        }
        v57 = &v53[v54];
      }
      else
      {
        v54 = v38;
        v53 = 0;
        v57 = v54 * 24;
        if ( *(v54 * 24 + 16) != 0 )
          goto LABEL_85;
      }
      v58 = *(v57 + 10);
      if ( (v58 & 1) != 0 )
        *(v57 + 10) = v58 & 0xFFFE;
      *v57 = 0;
      *(v57 + 8) = 30;
      if ( pModelName == 0 )
        goto LABEL_86;
      v59 = strlen(pModelName) + 1;
      v60 = CEntityVariantAllocator::Allocate(v59);
      *v57 = v60;
      memcpy(v60, pModelName, v59);
      *(v57 + 10) |= 1u;
      m_pEntityKeyValues = gibSpawner.m_pEntityKeyValues;
    }
LABEL_87:
    v77 = -1;
    m_pInstance = 0;
    if ( m_pEntityKeyValues == 0 )
      goto LABEL_26;
    goto LABEL_5;
  }
  v77 = -1;
LABEL_5:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v73 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v32 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(v6) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v56 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v56->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    v34 = m_numTimeBaseTicks - v32;
    m_pEntityKeyValues = gibSpawner.m_pEntityKeyValues;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v34 + __rdtsc();
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = gibSpawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(gibSpawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&gibSpawner.m_modifyScope);
  m_nMode = gibSpawner.m_nMode;
  v10 = CUtlString::Get(&gibSpawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             gibSpawner.m_hSpawnGroupHandle,
             gibSpawner.m_pEntityClass,
             v10,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v13 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v77 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
    v78[0] = m_pEntity;
    v78[1] = gibSpawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      gibSpawner.m_hSpawnGroupHandle,
      1,
      v78,
      &gibSpawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v13, gibSpawner.m_pEntityKeyValues);
    if ( gibSpawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = gibSpawner.m_pContext;
    for ( i = gibSpawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v19 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v19 - 1);
        (pfn)(v19, v13, i);
      }
    }
  }
  if ( v73 )
  {
    v28 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v29 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v29 == ThreadGetCurrentId(v12) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v30 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v30 - v28 + __rdtsc();
  }
  if ( (v77 + 2) > 1 && (v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v77 >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v22 = &v20[v77 & 0x1FF];
    if ( v22 != 0 && v77 == v22->m_EHandle.m_Index )
      m_pInstance = v22->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
LABEL_26:
  v23 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  gibSpawner._vptr_CEntitySpawnerBase = off_40516B0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = gibSpawner.m_pPrevAllocator;
  if ( v23 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v23);
  }
  if ( gibSpawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&gibSpawner.m_modifyScope);
    v24 = gibSpawner.m_pEntityKeyValues;
    if ( --gibSpawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v24);
      operator delete(v24);
    }
  }
  if ( gibSpawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&gibSpawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&gibSpawner.m_modifyScope);
  return m_pInstance;
}


// CGib::Spawn  (line 53, @0x000000000225cf10, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CBaseAnimating::Spawn, CBaseModelEntity::SetModel
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CGib::Spawn(CGib *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rax

  CBaseAnimating::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -926958586 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -926958586 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
  {
LABEL_12:
    CBaseModelEntity::SetModel(this, p_m_value->m_pszString);
    return;
  }
LABEL_14:
  CBaseModelEntity::SetModel(this, 0);
}


// CGib::LimitVelocity  (line 60, @0x0000000002265c80, libserver.so)  // inlines: GetAbsVelocity, operator*=
// calls: VectorNormalize, CBaseEntity::SetAbsVelocity, CBaseEntity::CalcAbsoluteVelocity
// callers: CGib::InitGib, CGib::SpawnStickyGibs, CGib::SpawnHeadGib
void __fastcall CGib::LimitVelocity(CGib *const this)
{
  Vector vecNewVelocity; // [rsp+0h] [rbp-20h] BYREF

  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  vecNewVelocity = this->m_vecAbsVelocity;
  if ( VectorNormalize(&vecNewVelocity) > 1500.0 )
  {
    vecNewVelocity.x = vecNewVelocity.x * 1500.0;
    vecNewVelocity.y = vecNewVelocity.y * 1500.0;
    vecNewVelocity.z = 1500.0 * vecNewVelocity.z;
    CBaseEntity::SetAbsVelocity(this, &vecNewVelocity);
  }
}


// CGib::SpawnStickyGibs  (line 74, @0x0000000002272eb0, libserver.so)  // inlines: GetInt, QAngle, SetBloodColor, SetCollisionBounds, Vector, VectorMultiply, operator*, operator*=
// calls: CreateSimpleGib, CBaseAnimating::SetBodygroup, CBaseEntity::SetLocalOrigin, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::GetHealth, CGib::AdjustVelocityBasedOnHealth, CBaseEntity::SetAbsVelocity, CBaseEntity::SetMoveType, CCollisionProperty::SetCollisionBounds, CBaseEntity::ThinkSet, CGib::LimitVelocity
// strings: "models/stickygib.vmdl"
// globals: g_vecAttackDir, CGib::StickyGibTouch(CBaseEntity *)
void __fastcall CGib::SpawnStickyGibs(CBaseEntity *pVictim, int cGibs, double a3, float a4)
{
  int i; // r14d
  CGib *SimpleGib; // rbx
  int v7; // eax
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  int Health; // eax
  vec_t v13; // [rsp+18h] [rbp-68h]
  vec_t v14; // [rsp+1Ch] [rbp-64h]
  vec_t v15; // [rsp+1Ch] [rbp-64h]
  Vector vecNewVelocity; // [rsp+30h] [rbp-50h] BYREF
  QAngle vecAngVelocity; // [rsp+40h] [rbp-40h] BYREF

  if ( g_Language.m_pParent->m_Value.m_nValue != 1 && cGibs > 0 )
  {
    for ( i = 0; i != cGibs; ++i )
    {
      SimpleGib = CreateSimpleGib("models/stickygib.vmdl");
      v7 = (*(*random_valve + 16LL))(random_valve, 0, 2);
      CBaseAnimating::SetBodygroup(SimpleGib, 0, v7);
      if ( pVictim != 0 )
      {
        v14 = (*(*random_valve + 8LL))(random_valve, -3.0, 3.0) + a4;
        v13 = *(&a3 + 1) + (*(*random_valve + 8LL))(random_valve, -3.0, 3.0);
        vecAngVelocity.x = (*(*random_valve + 8LL))(random_valve, -3.0, 3.0) + *&a3;
        vecAngVelocity.y = v13;
        vecAngVelocity.z = v14;
        CBaseEntity::SetLocalOrigin(SimpleGib, &vecAngVelocity);
        vecNewVelocity.y = -g_vecAttackDir.y;
        vecNewVelocity.z = -g_vecAttackDir.z;
        vecNewVelocity.x = -g_vecAttackDir.x;
        v8 = (*(*random_valve + 8LL))(random_valve, -0.15000001, 0.15000001);
        vecNewVelocity.x = v8 + vecNewVelocity.x;
        v9 = (*(*random_valve + 8LL))(random_valve, -0.15000001, 0.15000001);
        vecNewVelocity.y = v9 + vecNewVelocity.y;
        v10 = (*(*random_valve + 8LL))(random_valve, -0.15000001, 0.15000001);
        vecNewVelocity.x = 900.0 * vecNewVelocity.x;
        vecNewVelocity.z = (v10 + vecNewVelocity.z) * 900.0;
        vecNewVelocity.y = 900.0 * vecNewVelocity.y;
        v15 = (*(*random_valve + 8LL))(random_valve, 250.0, 400.0);
        vecAngVelocity.x = (*(*random_valve + 8LL))(random_valve, 250.0, 400.0);
        vecAngVelocity.y = v15;
        vecAngVelocity.z = 0.0;
        CBaseEntity::SetLocalAngularVelocity(SimpleGib, &vecAngVelocity);
        SimpleGib->m_bloodColor = (*(pVictim->_vptr_IHandleEntity + 138))(pVictim);
        Health = CBaseEntity::GetHealth(pVictim);
        CGib::AdjustVelocityBasedOnHealth(SimpleGib, Health, &vecNewVelocity);
        CBaseEntity::SetAbsVelocity(SimpleGib, &vecNewVelocity);
        CBaseEntity::SetMoveType(SimpleGib, MoveType_t::MOVETYPE_FLYGRAVITY, MoveCollide_t::MOVECOLLIDE_DEFAULT);
        (*(SimpleGib->m_Collision._vptr_ICollideable + 17))(&SimpleGib->m_Collision);
        CCollisionProperty::SetCollisionBounds(&SimpleGib->m_Collision, &vec3_origin, &vec3_origin);
        SimpleGib->m_pfnTouch.__pfn = CGib::StickyGibTouch;
        SimpleGib->m_pfnTouch.__delta = 0;
        CBaseEntity::ThinkSet(SimpleGib, 0LL, 0.0, 0, 0);
      }
      CGib::LimitVelocity(SimpleGib);
    }
  }
}


// CGib::SpawnHeadGib  (line 125, @0x00000000022731e0, libserver.so)  // inlines: GetAbsVelocity, GetInt, SetBloodColor, ToBasePlayer, VectorSubtract, operator*=, operator-, operator=
// calls: CreateSimpleGib, CGib::Init, CBaseAnimating::SetBodygroup, CBaseEntity::SetLocalOrigin, UTIL_FindClientInPVS, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::GetHealth, CGib::AdjustVelocityBasedOnHealth, CBaseEntity::SetAbsVelocity, CGib::LimitVelocity, CBaseEntity::GetAbsOrigin, VectorNormalize (13 total)
// callers: CBaseCombatCharacter::CorpseGib
// strings: "models/gibs/hgibs.vmdl", "models/germangibs.vmdl"
void __fastcall CGib::SpawnHeadGib(CBaseEntity *pVictim)
{
  CGib *SimpleGib; // rbx
  vec_t v3; // xmm1_4
  CBaseEntity *ClientInPVS; // r14
  __m128i v5; // xmm0
  vec_t v6; // r14d
  vec_t v7; // xmm0_4
  int Health; // eax
  float v9; // xmm1_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm1_4
  vec_t v12; // [rsp+8h] [rbp-58h]
  const Vector *AbsOrigin; // [rsp+8h] [rbp-58h]
  Vector vecNewVelocity; // [rsp+10h] [rbp-50h] BYREF
  QAngle vecNewAngularVelocity; // [rsp+20h] [rbp-40h] BYREF

  if ( g_Language.m_pParent->m_Value.m_nValue == 1 )
    SimpleGib = CreateSimpleGib("models/germangibs.vmdl");
  else
    SimpleGib = CreateSimpleGib("models/gibs/hgibs.vmdl");
  CGib::Init(SimpleGib);
  CBaseAnimating::SetBodygroup(SimpleGib, 0, 0);
  if ( pVictim != 0 )
  {
    if ( (SimpleGib->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(SimpleGib);
    vecNewVelocity = SimpleGib->m_vecAbsVelocity;
    *&vecNewAngularVelocity.x = (*(pVictim->_vptr_IHandleEntity + 164))(pVictim);
    vecNewAngularVelocity.z = v3;
    CBaseEntity::SetLocalOrigin(SimpleGib, &vecNewAngularVelocity);
    ClientInPVS = UTIL_FindClientInPVS(SimpleGib);
    if ( (*(*random_valve + 16LL))(random_valve, 0, 100) <= 5 && ClientInPVS != 0 )
    {
      if ( (*(ClientInPVS->_vptr_IHandleEntity + 140))(ClientInPVS) != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(SimpleGib);
        *&vecNewAngularVelocity.x = (*(ClientInPVS->_vptr_IHandleEntity + 164))(ClientInPVS);
        vecNewAngularVelocity.z = v9;
        v10 = vecNewAngularVelocity.x - AbsOrigin->x;
        v11 = v9 - AbsOrigin->z;
        vecNewVelocity.y = vecNewAngularVelocity.y - AbsOrigin->y;
        vecNewVelocity.x = v10;
        vecNewVelocity.z = v11;
        VectorNormalize(&vecNewVelocity);
        vecNewVelocity.x = vecNewVelocity.x * 300.0;
        vecNewVelocity.y = vecNewVelocity.y * 300.0;
        vecNewVelocity.z = (300.0 * vecNewVelocity.z) + 100.0;
      }
    }
    else
    {
      *v5.m128i_i64 = (*(*random_valve + 8LL))(random_valve, 200.0, 300.0);
      v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
      v12 = (*(*random_valve + 8LL))(random_valve, -100.0, 100.0);
      v7 = (*(*random_valve + 8LL))(random_valve, -100.0, 100.0);
      vecNewVelocity.z = v6;
      vecNewVelocity.x = v7;
      vecNewVelocity.y = v12;
    }
    vecNewAngularVelocity = SimpleGib->m_vecAngVelocity;
    vecNewAngularVelocity.x = (*(*random_valve + 8LL))(random_valve, 100.0, 200.0);
    vecNewAngularVelocity.y = (*(*random_valve + 8LL))(random_valve, 100.0, 300.0);
    CBaseEntity::SetLocalAngularVelocity(SimpleGib, &vecNewAngularVelocity);
    SimpleGib->m_bloodColor = (*(pVictim->_vptr_IHandleEntity + 138))(pVictim);
    Health = CBaseEntity::GetHealth(pVictim);
    CGib::AdjustVelocityBasedOnHealth(SimpleGib, Health, &vecNewVelocity);
    CBaseEntity::SetAbsVelocity(SimpleGib, &vecNewVelocity);
  }
  CGib::LimitVelocity(SimpleGib);
}


// CGib::SetBloodColor  (line 183, @0x0000000002265d10, libserver.so)
// callers: CGibShooter::CreateGib, CEnvShooter::CreateGib
void __fastcall CGib::SetBloodColor(CGib *const this, int nBloodColor)
{
  this->m_bloodColor = nBloodColor;
}


// CGib::AdjustVelocityBasedOnHealth  (line 192, @0x0000000002265d20, libserver.so)  // inlines: operator*=
// callers: CGib::InitGib, CGib::SpawnStickyGibs, CGib::SpawnHeadGib
void __fastcall CGib::AdjustVelocityBasedOnHealth(CGib *const this, int nHealth, Vector *const vecVelocity)
{
  float v3; // xmm0_4
  vec_t v4; // xmm1_4
  vec_t v5; // xmm0_4

  v3 = 0.69999999;
  if ( nHealth < -49 && (v3 = 4.0, nHealth >= -199) )
  {
    vecVelocity->x = vecVelocity->x + vecVelocity->x;
    vecVelocity->y = vecVelocity->y + vecVelocity->y;
    vecVelocity->z = vecVelocity->z + vecVelocity->z;
  }
  else
  {
    vecVelocity->x = vecVelocity->x * v3;
    v4 = vecVelocity->y * v3;
    v5 = v3 * vecVelocity->z;
    vecVelocity->y = v4;
    vecVelocity->z = v5;
  }
}


// CGib::InitGib  (line 214, @0x0000000002265da0, libserver.so)  // inlines: RandomAngularImpulse, RandomPointInBounds, SetBloodColor, SetCollisionBounds, SetSolid, Vector, VectorMultiply, operator*, operator*=, operator=
// calls: CCollisionProperty::RandomPointInBounds, CBaseEntity::SetAbsOrigin, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::GetHealth, CGib::AdjustVelocityBasedOnHealth, CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::VPhysicsGetObject, Vector::Random, CGib::LimitVelocity, CCollisionProperty::SetCollisionBounds, CBaseEntity::SetAbsVelocity, CBaseEntity::GetAbsOrigin
// callers: CGib::SpawnSpecificGibs, CGib::SpawnRandomGibs
// globals: g_vecAttackDir
void __fastcall CGib::InitGib(
        CGib *const this,
        CBaseEntity *pVictim,
        __m128i a3,
        __m128i fMinVelocity,
        float fMaxVelocity)
{
  CCollisionProperty *m_pCollision; // rdi
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  float z; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  vec_t v15; // eax
  int Health; // eax
  IPhysicsObject *Object; // r12
  vec_t v18; // xmm2_4
  const Vector *AbsOrigin; // rax
  Vector vecOrigin; // [rsp+0h] [rbp-70h] BYREF
  Vector vNewVelocity; // [rsp+10h] [rbp-60h] BYREF
  QAngle vecNewAngularVelocity; // [rsp+20h] [rbp-50h] BYREF
  AngularImpulse angImpulse; // [rsp+30h] [rbp-40h] BYREF

  if ( pVictim != 0 )
  {
    m_pCollision = pVictim->m_pCollision;
    v8 = _mm_cvtsi128_si32(a3);
    v9 = _mm_cvtsi128_si32(fMinVelocity);
    angImpulse.x = 1.0;
    angImpulse.y = 1.0;
    angImpulse.z = 1.0;
    if ( m_pCollision != 0 )
    {
      CCollisionProperty::RandomPointInBounds(m_pCollision, &vec3_origin, &angImpulse, &vecOrigin);
      z = vecOrigin.z;
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(pVictim);
      vecOrigin.x = AbsOrigin->x;
      vecOrigin.y = AbsOrigin->y;
      z = AbsOrigin->z;
    }
    vecOrigin.z = z + 1.0;
    CBaseEntity::SetAbsOrigin(this, &vecOrigin);
    vNewVelocity.y = -g_vecAttackDir.y;
    vNewVelocity.z = -g_vecAttackDir.z;
    vNewVelocity.x = -g_vecAttackDir.x;
    v11 = (*(*random_valve + 8LL))(random_valve, -0.25, 0.25);
    vNewVelocity.x = v11 + vNewVelocity.x;
    v12 = (*(*random_valve + 8LL))(random_valve, -0.25, 0.25);
    vNewVelocity.y = v12 + vNewVelocity.y;
    v13 = (*(*random_valve + 8LL))(random_valve, -0.25, 0.25);
    vNewVelocity.z = v13 + vNewVelocity.z;
    v14 = (*(*random_valve + 8LL))(random_valve, *_mm_cvtsi32_si128(v9).m128i_i64, *_mm_cvtsi32_si128(v8).m128i_i64);
    *&vecNewAngularVelocity.x = *&this->m_vecAngVelocity.x;
    v15 = this->m_vecAngVelocity.z;
    vNewVelocity.x = vNewVelocity.x * v14;
    vecNewAngularVelocity.z = v15;
    vNewVelocity.y = vNewVelocity.y * v14;
    vNewVelocity.z = v14 * vNewVelocity.z;
    vecNewAngularVelocity.x = (*(*random_valve + 8LL))(random_valve, 100.0, 200.0);
    vecNewAngularVelocity.y = (*(*random_valve + 8LL))(random_valve, 100.0, 300.0);
    CBaseEntity::SetLocalAngularVelocity(this, &vecNewAngularVelocity);
    this->m_bloodColor = (*(pVictim->_vptr_IHandleEntity + 138))(pVictim);
    Health = CBaseEntity::GetHealth(pVictim);
    CGib::AdjustVelocityBasedOnHealth(this, Health, &vNewVelocity);
    CCollisionProperty::SetupPhysicsFromUnscaledModel(
      &this->m_Collision,
      VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
      5,
      0);
    Object = CBaseEntity::VPhysicsGetObject(this);
    if ( Object != 0 )
    {
      Vector::Random(&angImpulse, 500.0, v18);
      (*(*Object + 552LL))(Object, &vNewVelocity);
      (*(*Object + 1712LL))(Object, &angImpulse);
    }
    else
    {
      (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
      CCollisionProperty::SetCollisionBounds(&this->m_Collision, &vec3_origin, &vec3_origin);
      CBaseEntity::SetAbsVelocity(this, &vNewVelocity);
    }
  }
  CGib::LimitVelocity(this);
}


// CGib::SpawnSpecificGibs  (line 275, @0x00000000022734b0, libserver.so)
// calls: CreateSimpleGib, CGib::Init, CBaseAnimating::SetBodygroup, CGib::InitGib
void __fastcall CGib::SpawnSpecificGibs(
        CBaseEntity *pVictim,
        int nNumGibs,
        float vMinVelocity,
        float vMaxVelocity,
        const char *cModelName,
        float flLifetime)
{
  int v9; // ebx
  CGib *SimpleGib; // r15
  float v11; // xmm2_4

  v9 = 0;
  if ( nNumGibs > 0 )
  {
    do
    {
      SimpleGib = CreateSimpleGib(cModelName);
      CGib::Init(SimpleGib);
      CBaseAnimating::SetBodygroup(SimpleGib, 0, v9);
      CGib::InitGib(SimpleGib, pVictim, LODWORD(vMinVelocity), LODWORD(vMaxVelocity), v11);
      SimpleGib->m_lifeTime = flLifetime;
      if ( pVictim != 0 )
        (*(SimpleGib->_vptr_IHandleEntity + 40))(SimpleGib, pVictim);
      ++v9;
    }
    while ( v9 != nNumGibs );
  }
}


// CGib::SpawnRandomGibs  (line 302, @0x0000000002273550, libserver.so)  // inlines: GetInt
// calls: CreateSimpleGib, CGib::Init, CBaseAnimating::SetBodygroup, CGib::InitGib
// callers: CBaseCombatCharacter::CorpseGib, CBasePlayer::CheatImpulseCommands
// strings: "models/gibs/agibs.vmdl", "models/germangibs.vmdl", "models/gibs/hgibs.vmdl"
void __fastcall CGib::SpawnRandomGibs(CBaseEntity *pVictim, int cGibs, GibType_e eGibType)
{
  float v3; // xmm2_4
  int v7; // r12d
  const char *v8; // rdi
  CGib *SimpleGib; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  IUniformRandomStream *v12; // rdi
  __int64 v13; // rax
  int v14; // eax

  v7 = 0;
  if ( cGibs > 0 )
  {
    do
    {
      v8 = "models/germangibs.vmdl";
      if ( g_Language.m_pParent->m_Value.m_nValue != 1 )
      {
        if ( eGibType == GibType_e::GIB_HUMAN )
        {
          SimpleGib = CreateSimpleGib("models/gibs/hgibs.vmdl");
          CGib::Init(SimpleGib);
          v11 = 5;
          v10 = 1;
          v12 = random_valve;
          v13 = *random_valve;
          goto LABEL_5;
        }
        if ( eGibType != GibType_e::GIB_ALIEN )
        {
          SimpleGib = 0;
          goto LABEL_6;
        }
        v8 = "models/gibs/agibs.vmdl";
      }
      SimpleGib = CreateSimpleGib(v8);
      CGib::Init(SimpleGib);
      v10 = 0;
      v11 = 3;
      v12 = random_valve;
      v13 = *random_valve;
LABEL_5:
      v14 = (*(v13 + 16))(v12, v10, v11);
      CBaseAnimating::SetBodygroup(SimpleGib, 0, v14);
LABEL_6:
      ++v7;
      CGib::InitGib(SimpleGib, pVictim, 0x43960000u, 0x43C80000u, v3);
    }
    while ( v7 != cGibs );
  }
}


// CGib::WaitTillLand  (line 345, @0x000000000225ba90, libserver.so)  // inlines: FadeAndDie, Get, GetAbsVelocity, GetEntityIdentity, GetEntryIndex, GetFlame, GetInstance, GetSprite, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, curtime, operator CEntityInstance*, operator=<RenderMode_t>, operator==
// calls: CBaseEntity::IsInWorld, CBaseEntity::SetNextThink, CBaseModelEntity::SetRenderAlpha, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::ThinkSet, __dynamic_cast, CEntityFlame::SetLifetime, CBaseEntity::CalcAbsoluteVelocity, UTIL_Remove, CSprite::SetBrightness
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGib::WaitTillLand(CGib *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc v4; // rax
  double v5; // xmm0_8
  double v6; // xmm1_8
  double v7; // xmm0_8
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  uint32 m_Index; // edx
  CConcreteEntityList *v11; // r12
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityFlame *v17; // rax
  float v18; // xmm1_4
  CSprite *v19; // r13
  float m_lifeTime; // xmm1_4
  CGlobalVars *v21; // r12
  double v22; // xmm1_8
  CGlobalVars *v23; // rax
  CGlobalVars *v24; // r15
  FnGlobalVarsWarningFunc v25; // rdx
  void (__fastcall *v26)(__int64); // rax
  double v27; // xmm0_8
  double v28; // xmm0_8
  float v29; // [rsp+Ch] [rbp-34h]

  if ( CBaseEntity::IsInWorld(this) )
  {
    if ( (this->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(this);
    if ( vec3_origin.x == this->m_vecAbsVelocity.m_Value.x
      && vec3_origin.y == this->m_vecAbsVelocity.m_Value.y
      && vec3_origin.z == this->m_vecAbsVelocity.m_Value.z )
    {
      CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
      if ( this->m_nRenderMode.m_Value != RenderMode_t::kRenderTransTexture )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nRenderMode.m_Value = RenderMode_t::kRenderTransTexture;
      }
      if ( this->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS )
        (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
      CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
      v7 = 0.0;
      v8 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            (m_pfnWarningFunc)(1, 0.0);
        }
        *&v7 = LODWORD(v8->m_flCurrentTime);
      }
      *&v7 = *&v7 + this->m_lifeTime;
      CBaseEntity::SetNextThink(this, v7, v6, 0);
      CBaseEntity::ThinkSet(this, CBaseModelEntity::SUB_FadeOut, 0.0, 0, 0);
      m_Index = this->m_hSprite.m_Index;
      v11 = CEntityHandle::gm_pEntityList;
      if ( m_Index + 2 > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSprite.m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[this->m_hSprite.m_Index & 0x1FF];
          if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
          {
            v19 = __dynamic_cast(v13->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CSprite, 0);
            if ( v19 != 0 )
            {
              m_lifeTime = this->m_lifeTime;
              if ( m_lifeTime == 0.0 )
              {
                v28 = (*(*random_valve + 8LL))(random_valve, 1.0, 3.0);
                m_lifeTime = *&v28;
                this->m_lifeTime = *&v28;
              }
              v29 = m_lifeTime;
              CSprite::SetBrightness(v19, 0, m_lifeTime);
              CBaseEntity::ThinkSet(v19, CSprite::AnimateUntilDead, 0.0, 0, 0);
              v21 = gpGlobals;
              *&v22 = LODWORD(v29);
              v23 = gpGlobals;
              if ( gpGlobals != 0 )
              {
                v24 = gpGlobals;
                if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
                {
                  v25 = gpGlobals->m_pfnWarningFunc;
                  v24 = gpGlobals;
                  if ( v25 != 0 )
                  {
                    v25(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                    v24 = gpGlobals;
                    *&v22 = LODWORD(v29);
                    v23 = gpGlobals;
                  }
                }
                *&v22 = *&v22 + v21->m_flCurrentTime;
                v19->m_flDieTime = *&v22;
                if ( v23 != 0 )
                {
                  if ( !v24->m_bEnableAssertions && !v24->m_bInSimulation )
                  {
                    v26 = v24->m_pfnWarningFunc;
                    if ( v26 != 0 )
                      v26(1);
                  }
                  *&v27 = LODWORD(v24->m_flCurrentTime);
                }
                else
                {
                  v27 = 0.0;
                }
              }
              else
              {
                *&v22 = v29 + 0.0;
                v27 = 0.0;
                v19->m_flDieTime = v29 + 0.0;
              }
              CBaseEntity::SetNextThink(v19, v27, v22, 0);
              v11 = CEntityHandle::gm_pEntityList;
            }
          }
        }
      }
      v14 = this->m_hFlame.m_Index;
      if ( v14 + 2 > 1 )
      {
        v15 = v11->m_pIdentityChunks[(LOWORD(this->m_hFlame.m_Index) >> 9) & 0x3F];
        if ( v15 != 0 )
        {
          v16 = &v15[this->m_hFlame.m_Index & 0x1FF];
          if ( v16 != 0 && v14 == v16->m_EHandle.m_Index && v16->m_pInstance != 0 )
          {
            v17 = __dynamic_cast(v16->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CEntityFlame, 0);
            if ( v17 != 0 )
              CEntityFlame::SetLifetime(v17, COERCE_DOUBLE(1065353216), v18);
          }
        }
      }
    }
    else
    {
      v3 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v4 = gpGlobals->m_pfnWarningFunc;
          if ( v4 != 0 )
            v4(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        HIDWORD(v5) = 0;
        *&v5 = v3->m_flCurrentTime + 0.5;
      }
      else
      {
        *&v5 = 1056964608;
      }
      CBaseEntity::SetNextThink(this, v5, v2, 0);
    }
  }
  else
  {
    UTIL_Remove(this);
  }
}


// CGib::SUB_AllowedToFade  (line 405, @0x00000000022560d0, libserver.so)  // inlines: AI_GetSinglePlayer
// calls: CBaseEntity::VPhysicsGetObject, UTIL_GetLocalPlayer
bool __fastcall CGib::SUB_AllowedToFade(CGib *const this)
{
  IPhysicsObject *Object; // rax
  bool result; // al
  CBasePlayer *LocalPlayer; // rax

  result = 0;
  if ( CBaseEntity::VPhysicsGetObject(this) == 0
    || (Object = CBaseEntity::VPhysicsGetObject(this), ((*(*Object + 1296LL))(Object) & 4) == 0)
    && (this->m_iEFlags & 0x100000) == 0 )
  {
    if ( gpGlobals->maxClients > 1 )
      return 1;
    LocalPlayer = UTIL_GetLocalPlayer();
    if ( LocalPlayer == 0 || (*(LocalPlayer->_vptr_IHandleEntity + 264))(LocalPlayer, this) == 0 || this->m_bForceRemove )
      return 1;
  }
  return result;
}


// CGib::DieThink  (line 424, @0x000000000225b460, libserver.so)  // inlines: FadeAndDie, Get, GetEntityIdentity, GetEntryIndex, GetFlame, GetInstance, GetSprite, IndexToIdentity, IsValid, LookupEntity, curtime, operator CEntityInstance*
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, UTIL_Remove, __dynamic_cast, CSprite::SetBrightness, CEntityFlame::SetLifetime
// globals: CEntityHandle::gm_pEntityList, g_pGameRules
void __fastcall CGib::DieThink(CGib *const this)
{
  uint32 m_Index; // edx
  CConcreteEntityList *v3; // r12
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  double v9; // xmm1_8
  double v10; // xmm0_8
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc v12; // rax
  CSprite *v13; // rax
  float v14; // xmm1_4
  CBaseEntity *v15; // r13
  double v16; // xmm1_8
  CGlobalVars *v17; // r12
  CGlobalVars *v18; // rax
  CGlobalVars *v19; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  double v21; // xmm0_8
  void (__fastcall *v22)(__int64); // rax
  CEntityFlame *v23; // rax
  float v24; // xmm1_4

  m_Index = this->m_hSprite.m_Index;
  v3 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSprite.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hSprite.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
      {
        v13 = __dynamic_cast(v5->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CSprite, 0);
        v15 = v13;
        if ( v13 != 0 )
        {
          CSprite::SetBrightness(v13, 0, v14);
          CBaseEntity::ThinkSet(v15, CSprite::AnimateUntilDead, 0.0, 0, 0);
          v17 = gpGlobals;
          v18 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            v19 = gpGlobals;
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              v19 = gpGlobals;
              if ( m_pfnWarningFunc != 0 )
              {
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v19 = gpGlobals;
                v18 = gpGlobals;
              }
            }
            *&v16 = LODWORD(v17->m_flCurrentTime);
            v21 = 0.0;
            *&v16 = *&v16 + 0.0;
            v15[1].m_iHammerID = LODWORD(v16);
            if ( v18 != 0 )
            {
              if ( !v19->m_bEnableAssertions && !v19->m_bInSimulation )
              {
                v22 = v19->m_pfnWarningFunc;
                if ( v22 != 0 )
                  v22(1);
              }
              *&v21 = LODWORD(v19->m_flCurrentTime);
            }
          }
          else
          {
            v21 = 0.0;
            v15[1].m_iHammerID = 0;
          }
          CBaseEntity::SetNextThink(v15, v21, v16, 0);
          v3 = CEntityHandle::gm_pEntityList;
        }
      }
    }
  }
  v6 = this->m_hFlame.m_Index;
  if ( v6 + 2 > 1 )
  {
    v7 = v3->m_pIdentityChunks[(LOWORD(this->m_hFlame.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hFlame.m_Index & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        v23 = __dynamic_cast(v8->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CEntityFlame, 0);
        if ( v23 != 0 )
          CEntityFlame::SetLifetime(v23, COERCE_DOUBLE(1065353216), v24);
      }
    }
  }
  if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 )
  {
    UTIL_Remove(this);
  }
  else
  {
    CBaseEntity::ThinkSet(this, CBaseModelEntity::SUB_FadeOut, 0.0, 0, 0);
    v10 = 0.0;
    v11 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v12 = gpGlobals->m_pfnWarningFunc;
        if ( v12 != 0 )
          (v12)(1, 0.0);
      }
      *&v10 = LODWORD(v11->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v10, v9, 0);
  }
}


// CGib::Use  (line 483, @0x00000000022589b0, libserver.so)  // inlines: ToBasePlayer
void __fastcall CGib::Use(
        CGib *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  if ( pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(pActivator, value) != 0 )
    (*(pActivator->_vptr_IHandleEntity + 479))(pActivator, this, 1, 0);
}


// CGib::SetPhysicsAttacker  (line 496, @0x0000000002266080, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
void __fastcall CGib::SetPhysicsAttacker(CGib *const this, CBasePlayer *pEntity, float a3, float flTime)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx

  if ( pEntity != 0 && (m_pEntity = pEntity->m_pEntity) != 0 )
  {
    v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v6 = 0x7FFF;
    else
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    this->m_flLastPhysicsInfluenceTime = a3;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v6 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v5 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
    this->m_flLastPhysicsInfluenceTime = a3;
  }
}


// CGib::OnPhysGunPickup  (line 506, @0x0000000002259c00, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetPhysicsAttacker, curtime, operator=
void __fastcall CGib::OnPhysGunPickup(
        CGib *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBasePlayer *v11; // [rsp-18h] [rbp-20h]

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = pPhysGunUser;
        (m_pfnWarningFunc)(1, pPhysGunUser, reason, nVRControllerID, 0.0);
        pPhysGunUser = v11;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v9 = 0x7FFF;
    else
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v9 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v8 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
}


// CGib::OnPhysGunDrop  (line 514, @0x0000000002259d00, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetPhysicsAttacker, curtime, operator=
void __fastcall CGib::OnPhysGunDrop(
        CGib *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunDrop_t Reason,
        int nVRControllerID)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBasePlayer *v11; // [rsp-18h] [rbp-20h]

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = pPhysGunUser;
        (m_pfnWarningFunc)(1, pPhysGunUser, Reason, nVRControllerID, 0.0);
        pPhysGunUser = v11;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v9 = 0x7FFF;
    else
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v9 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v8 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
}


// CGib::HasPhysicsAttacker  (line 521, @0x0000000002259e00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBasePlayer*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBasePlayer *__fastcall CGib::HasPhysicsAttacker(CGib *const this, double a2, float dt)
{
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v5; // rbx
  uint32 m_Index; // edx
  CBasePlayer *result; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v11; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = LODWORD(a2);
        (m_pfnWarningFunc)(1, a2, 0.0);
        LODWORD(a2) = v11;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  if ( this->m_flLastPhysicsInfluenceTime < (m_flCurrentTime - *&a2) )
    return 0;
  m_Index = this->m_hPhysicsAttacker.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsAttacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hPhysicsAttacker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        return v9->m_pInstance;
    }
  }
  return result;
}


// CGib::BounceGibTouch  (line 534, @0x000000000225b700, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetAbsVelocity, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, entindex, operator*, operator+
// calls: CGameTrace::Init, CBaseEntity::VPhysicsGetObject, CBaseEntity::SetAbsVelocity, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles, CBaseEntity::SetLocalAngularVelocity, UTIL_IsLowViolence, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_BloodDecalTrace, CBaseEntity::CalcAbsoluteVelocity (14 total)
void __fastcall CGib::BounceGibTouch(CGib *const this, CBaseEntity *pOther)
{
  vec_t v3; // xmm1_4
  vec_t v4; // xmm0_4
  __int64 v5; // rax
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm2_4
  vec_t v8; // xmm6_4
  vec_t v9; // xmm5_4
  float m_fValue; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  Materials m_material; // r12d
  CEntityIndex v14; // eax
  float v15; // xmm1_4
  float volume; // [rsp+Ch] [rbp-164h]
  CTraceFilterSimple v17; // [rsp+10h] [rbp-160h] BYREF
  QAngle angles; // [rsp+50h] [rbp-120h] BYREF
  int v19; // [rsp+5Ch] [rbp-114h]
  float v20; // [rsp+60h] [rbp-110h]
  float v21; // [rsp+64h] [rbp-10Ch]
  float v22; // [rsp+68h] [rbp-108h]
  int v23; // [rsp+6Ch] [rbp-104h]
  int v24; // [rsp+70h] [rbp-100h]
  int v25; // [rsp+74h] [rbp-FCh]
  int v26; // [rsp+78h] [rbp-F8h]
  int v27; // [rsp+7Ch] [rbp-F4h]
  int v28; // [rsp+80h] [rbp-F0h]
  int v29; // [rsp+84h] [rbp-ECh]
  int v30; // [rsp+88h] [rbp-E8h]
  int v31; // [rsp+8Ch] [rbp-E4h]
  float v32; // [rsp+90h] [rbp-E0h]
  char v33; // [rsp+94h] [rbp-DCh]
  bool v34; // [rsp+95h] [rbp-DBh]
  trace_t tr; // [rsp+A0h] [rbp-D0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  if ( CBaseEntity::VPhysicsGetObject(this) == 0 )
  {
    if ( (this->m_fFlags.m_Value & 1) != 0 )
    {
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      v3 = this->m_vecAbsVelocity.m_Value.z * 0.89999998;
      v4 = 0.89999998 * this->m_vecAbsVelocity.m_Value.x;
      angles.y = this->m_vecAbsVelocity.m_Value.y * 0.89999998;
      angles.z = v3;
      angles.x = v4;
      CBaseEntity::SetAbsVelocity(this, &angles);
      v5 = *&CBaseEntity::GetLocalAngles(this)->x;
      angles.z = 0.0;
      angles.y = *(&v5 + 1);
      angles.x = 0.0;
      CBaseEntity::SetLocalAngles(this, &angles);
      CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
    }
    else
    {
      if ( !UTIL_IsLowViolence() && this->m_cBloodDecals > 0 && this->m_bloodColor != -1 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        v7 = AbsOrigin->z + 8.0;
        v8 = AbsOrigin->x + 0.0;
        v9 = AbsOrigin->y + 0.0;
        m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        v22 = (v7 - 24.0) - v7;
        v32 = m_fValue;
        v21 = (v9 + 0.0) - v9;
        v19 = 0;
        v23 = 0;
        v27 = 0;
        v31 = 0;
        v30 = 0;
        v20 = (v8 + 0.0) - v8;
        v29 = 0;
        v28 = 0;
        v26 = 0;
        v25 = 0;
        v24 = 0;
        angles.x = v8;
        angles.y = v9;
        angles.z = v7;
        v33 = 1;
        v34 = (((v20 * v20) + (v21 * v21)) + (v22 * v22)) != 0.0;
        CTraceFilterSimple::CTraceFilterSimple(&v17, this, 4, 0);
        v17.m_attr.m_nInteractsWith |= 0x7001uLL;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &angles, &v17, &tr);
        UTIL_BloodDecalTrace(&tr, this->m_bloodColor);
        --this->m_cBloodDecals;
      }
      if ( this->m_material != 10 && (*(*random_valve + 16LL))(random_valve, 0, 2) == 0 )
      {
        if ( (this->m_iEFlags & 0x1000) != 0 )
          CBaseEntity::CalcAbsoluteVelocity(this);
        v11 = fabs(this->m_vecAbsVelocity.m_Value.z) / 450.0;
        v12 = 0.80000001;
        if ( v11 <= 1.0 )
          v12 = v11 * 0.800000011920929;
        m_material = this->m_material;
        volume = v12;
        v14.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        CBreakable::MaterialSoundRandom(v14, m_material, volume, v15);
      }
    }
  }
}


// CGib::StickyGibTouch  (line 586, @0x000000000225cb30, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetAbsVelocity, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, curtime, operator*, operator+
// calls: CGameTrace::Init, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_BloodDecalTrace, VectorAngles, CBaseEntity::SetLocalAngles, CBaseEntity::SetAbsVelocity, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetMoveType (13 total)
// local variable allocation has failed, the output may be wrong!
void __fastcall CGib::StickyGibTouch(CGib *const this, CBaseEntity *pOther)
{
  double v4; // xmm1_8
  CGlobalVars *v5; // r12
  double v6; // xmm0_8
  double v7; // xmm1_8
  const Vector *AbsOrigin; // rax
  QAngle *v9; // rax
  float m_fValue; // xmm4_4
  float v11; // xmm2_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v13; // r12
  double v14; // xmm0_8
  FnGlobalVarsWarningFunc v15; // rax
  float v16; // [rsp+4h] [rbp-17Ch]
  float v17; // [rsp+4h] [rbp-17Ch]
  float v18; // [rsp+8h] [rbp-178h]
  float v19; // [rsp+8h] [rbp-178h]
  float v20; // [rsp+Ch] [rbp-174h]
  float v21; // [rsp+Ch] [rbp-174h]
  __int128 vecForward; // [rsp+10h] [rbp-170h] OVERLAPPED BYREF
  QAngle angles; // [rsp+50h] [rbp-130h] BYREF
  int v24; // [rsp+5Ch] [rbp-124h]
  float v25; // [rsp+60h] [rbp-120h]
  float v26; // [rsp+64h] [rbp-11Ch]
  float v27; // [rsp+68h] [rbp-118h]
  int v28; // [rsp+6Ch] [rbp-114h]
  int v29; // [rsp+70h] [rbp-110h]
  int v30; // [rsp+74h] [rbp-10Ch]
  int v31; // [rsp+78h] [rbp-108h]
  int v32; // [rsp+7Ch] [rbp-104h]
  int v33; // [rsp+80h] [rbp-100h]
  int v34; // [rsp+84h] [rbp-FCh]
  int v35; // [rsp+88h] [rbp-F8h]
  int v36; // [rsp+8Ch] [rbp-F4h]
  float v37; // [rsp+90h] [rbp-F0h]
  char v38; // [rsp+94h] [rbp-ECh]
  bool v39; // [rsp+95h] [rbp-EBh]
  trace_t tr; // [rsp+A0h] [rbp-E0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v6) = 0;
    *&v6 = v5->m_flCurrentTime + 10.0;
  }
  else
  {
    *&v6 = 1092616192;
  }
  CBaseEntity::SetNextThink(this, v6, v4, 0);
  if ( (*(pOther->_vptr_IHandleEntity + 143))(pOther) != 0 )
  {
    v13 = gpGlobals;
    v14 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v15 = gpGlobals->m_pfnWarningFunc;
        if ( v15 != 0 )
          (v15)(1, 0.0);
      }
      *&v14 = LODWORD(v13->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v14, v7, 0);
  }
  else
  {
    if ( (this->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(this);
    v16 = this->m_vecAbsVelocity.m_Value.x * 32.0;
    v18 = this->m_vecAbsVelocity.m_Value.y * 32.0;
    v20 = 32.0 * this->m_vecAbsVelocity.m_Value.z;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v17 = v16 + AbsOrigin->x;
    v19 = v18 + AbsOrigin->y;
    v21 = v20 + AbsOrigin->z;
    v9 = CBaseEntity::GetAbsOrigin(this);
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    v24 = 0;
    v28 = 0;
    v37 = m_fValue;
    v32 = 0;
    v36 = 0;
    v25 = v17 - v9->x;
    v26 = v19 - v9->y;
    v11 = v21 - v9->z;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v27 = v11;
    v38 = 1;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v39 = (((v25 * v25) + (v26 * v26)) + (v11 * v11)) != 0.0;
    angles = *v9;
    CTraceFilterSimple::CTraceFilterSimple(&vecForward, this, 4, 0);
    *(&vecForward + 1) |= 0x7001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &angles, &vecForward, &tr);
    UTIL_BloodDecalTrace(&tr, this->m_bloodColor);
    *(&vecForward + 1) = -tr.plane.normal.y;
    *(&vecForward + 2) = -tr.plane.normal.z;
    *&vecForward = -tr.plane.normal.x;
    VectorAngles(&vecForward, &angles);
    CBaseEntity::SetLocalAngles(this, &angles);
    CBaseEntity::SetAbsVelocity(this, &vec3_origin);
    CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  }
}


// CGib::Init  (line 616, @0x0000000002266120, libserver.so)  // inlines: AddSolidFlags, NetworkStateChanged, Set, SetCollisionGroup, SetSolid, curtime, operator=<RenderFx_t>, operator=<RenderMode_t>
// calls: CBaseEntity::SetMoveType, CBaseEntity::SetFriction, CBaseModelEntity::SetRenderAlpha, CBaseEntity::SetDamageOptions, CCollisionProperty::SetSolidFlags, CCollisionProperty::SetCollisionGroup, CBaseEntity::SetNextThink
// callers: CGibShooter::CreateGib, CEnvShooter::CreateGib, CGib::Init, CGib::SpawnHeadGib, CGib::SpawnSpecificGibs, CGib::SpawnRandomGibs
// globals: CGib::BounceGibTouch(CBaseEntity *)
void __fastcall CGib::Init(CGib *const this)
{
  float v2; // xmm1_4
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v6; // xmm0_8

  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_FLYGRAVITY, MoveCollide_t::MOVECOLLIDE_FLY_BOUNCE);
  CBaseEntity::SetFriction(this, COERCE_DOUBLE(1057803469), v2);
  CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
  if ( this->m_nRenderMode.m_Value != RenderMode_t::kRenderNormal )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRenderMode.m_Value = RenderMode_t::kRenderNormal;
  }
  if ( this->m_nRenderFX.m_Value != RenderFx_t::kRenderFxNone )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 814, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRenderFX.m_Value = RenderFx_t::kRenderFxNone;
  }
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  CCollisionProperty::SetSolidFlags(&this->m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 5);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v6) = 0;
    *&v6 = v4->m_flCurrentTime + 4.0;
  }
  else
  {
    *&v6 = 1082130432;
  }
  CBaseEntity::SetNextThink(this, v6, v3, 0);
  this->m_lifeTime = 25.0;
  this->m_pfnTouch.__pfn = CGib::BounceGibTouch;
  this->m_pfnTouch.__delta = 0;
  this->m_bForceRemove = 0;
  this->m_material = 10;
  this->m_cBloodDecals = 5;
}


// CGib::Init  (line 654, @0x00000000022662b0, libserver.so)  // inlines: curtime
// calls: CGib::Init, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CGib::Init(CGib *const this, float a2, float flLifetime)
{
  double v4; // xmm1_8
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CGib::Init(this);
  this->m_lifeTime = a2;
  CBaseEntity::ThinkSet(this, CBaseModelEntity::SUB_FadeOut, 0.0, 0, 0);
  v5 = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v5 = LODWORD(v6->m_flCurrentTime);
  }
  *&v5 = *&v5 + this->m_lifeTime;
  CBaseEntity::SetNextThink(this, v5, v4, 0);
}


// CreateRagGib  (line 663, @0x0000000002271840, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddToTail, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData<QAngle>, CopyData<Vector>, Element, EnterScope, ExitScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, operator CEntityInstance*, operator CRagGib*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, Msg, CUtlString::FreeMemoryBlock, CEntityKeyValues::SetValue, CEntityKeyValues::~CEntityKeyValues (28 total)
// callers: CGibShooter::SpawnGib
// strings: "**Can't create ragdoll gib!\n", "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CRagGib *__fastcall CreateRagGib(
        const char *szModel,
        const Vector *const vecOrigin,
        const QAngle *const vecAngles,
        const Vector *const vecForce,
        float flFadeTime,
        bool bShouldIgnite)
{
  CEntitySystem *v7; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rdi
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // r10d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v15; // rax
  CEntityInstance *Entity; // rax
  __int64 v17; // rdi
  CEntityInstance *v18; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v20; // si
  CEntitySpawnerContext<CRagGib> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v24; // rdi
  CConcreteEntityList *v25; // rsi
  CEntityIdentity *v26; // rax
  __int64 v27; // rcx
  CEntityIdentity *v28; // rax
  CRagGib *m_pInstance; // rbx
  CUtlScratchMemoryPool *v30; // rdi
  CEntityKeyValues *v31; // r13
  const char *m_pszClassname; // rdx
  unsigned __int64 v35; // rbx
  ThreadId_t v36; // r15
  uint64 v37; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v39; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v41; // rcx
  CVProfNode *m_pParent; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v44; // cx
  __int64 v45; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v46; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v48; // r15
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v51; // rax
  __int64 v52; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // r15
  uint16 m_flags; // ax
  vec_t *v55; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v56; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rbx
  int v60; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v61; // cx
  __int64 v62; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v63; // rdx
  __int16 v64; // r15
  unsigned __int64 v65; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v66; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v67; // rax
  __int64 v68; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // r15
  uint16 v70; // ax
  vec_t *v71; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v72; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rbx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v77; // rax
  __int16 v78; // ax
  vec_t *v79; // rax
  __int16 v80; // ax
  vec_t *v81; // rax
  __int64 v82; // rax
  __int64 v83; // r13
  void (__fastcall *v84)(__int64, _QWORD, _QWORD, double, double); // r15
  double v85; // xmm0_8
  bool v86; // [rsp+27h] [rbp-119h]
  CEntityKeyValues *i; // [rsp+48h] [rbp-F8h]
  __int64 v93; // [rsp+48h] [rbp-F8h]
  CConcreteEntityList *v94; // [rsp+48h] [rbp-F8h]
  int v95; // [rsp+50h] [rbp-F0h]
  _QWORD v96[2]; // [rsp+60h] [rbp-E0h] BYREF
  CEntitySpawner<CRagGib> spawner; // [rsp+70h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_4051F70;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v7 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v7->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v7);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v9 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v9;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCRagGibClass;
  if ( g_pApplication != 0 )
    v10 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v10 = 0;
  spawner.m_bValidateKeys = v10;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_59:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v48 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
    m_pElements[v48] = -467664362;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v51 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v51 = 0;
    v52 = v48;
    v53 = &v51[v52];
    v93 = v52 * 24;
    m_flags = v51[v52].m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v53->m_value.m_flags = m_flags & 0xFFFE;
    v53->m_value.m_uint64 = 0;
    v53->m_value.m_type = 3;
    v55 = CEntityVariantAllocator::Allocate(0xCu);
    v53->m_value.m_uint64 = v55;
    *v55 = vecOrigin->x;
    v55[1] = vecOrigin->y;
    v55[2] = vecOrigin->z;
    v53->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v56 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v56 = 0;
    *(&v56->m_pAttributeName + v93) = 0;
  }
  else
  {
    v44 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v45 = 0;
    while ( 1 )
    {
      if ( v44 != 0 )
      {
        v46 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v44 > 9 )
          v46 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v46 = 0;
      }
      if ( v46[v45] == -467664362 )
        break;
      if ( m_nCount <= ++v45 )
        goto LABEL_59;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v57 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v58 = v45;
      v59 = &v57[v58];
      if ( v57[v58].m_pAttributeName != 0 )
      {
LABEL_71:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v57[v58].m_pAttributeName);
        goto LABEL_72;
      }
    }
    else
    {
      v58 = v45;
      v57 = 0;
      v59 = v58 * 24;
      if ( *(v58 * 24 + 16) != 0 )
        goto LABEL_71;
    }
    v78 = *(v59 + 10);
    if ( (v78 & 1) != 0 )
      *(v59 + 10) = v78 & 0xFFFE;
    *v59 = 0;
    *(v59 + 8) = 3;
    v79 = CEntityVariantAllocator::Allocate(0xCu);
    *v59 = v79;
    *v79 = vecOrigin->x;
    v79[1] = vecOrigin->y;
    v79[2] = vecOrigin->z;
    *(v59 + 10) |= 1u;
  }
LABEL_72:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
LABEL_4:
    v95 = -1;
    goto LABEL_5;
  }
  v60 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v60 > 0 )
  {
    v61 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v62 = 0;
    while ( 1 )
    {
      if ( v61 != 0 )
      {
        v63 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v61 > 9 )
          v63 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v63 = 0;
      }
      if ( v63[v62] == -1164387633 )
        break;
      if ( v60 <= ++v62 )
        goto LABEL_81;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v73 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v74 = v62;
      v75 = &v73[v74];
      if ( v73[v74].m_pAttributeName != 0 )
      {
LABEL_93:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v73[v74].m_pAttributeName);
LABEL_94:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_95;
      }
    }
    else
    {
      v74 = v62;
      v73 = 0;
      v75 = v74 * 24;
      if ( *(v74 * 24 + 16) != 0 )
        goto LABEL_93;
    }
    v80 = *(v75 + 10);
    if ( (v80 & 1) != 0 )
      *(v75 + 10) = v80 & 0xFFFE;
    *v75 = 0;
    *(v75 + 8) = 39;
    v81 = CEntityVariantAllocator::Allocate(0xCu);
    *v75 = v81;
    *v81 = vecAngles->x;
    v81[1] = vecAngles->y;
    v81[2] = vecAngles->z;
    *(v75 + 10) |= 1u;
    goto LABEL_94;
  }
LABEL_81:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v64 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
  v65 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
  if ( v65 != 0 )
  {
    if ( v65 <= 9 )
      v66 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    else
      v66 = m_pEntityKeyValues->m_keyHashes.m_pElements;
  }
  else
  {
    v66 = 0;
  }
  v66[v64] = -1164387633;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v67 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v67 = 0;
  v68 = v64;
  v69 = &v67[v68];
  v94 = (v68 * 24);
  v70 = v67[v68].m_value.m_flags;
  if ( (v70 & 1) != 0 )
    v69->m_value.m_flags = v70 & 0xFFFE;
  v69->m_value.m_uint64 = 0;
  v69->m_value.m_type = 39;
  v71 = CEntityVariantAllocator::Allocate(0xCu);
  v69->m_value.m_uint64 = v71;
  *v71 = vecAngles->x;
  v71[1] = vecAngles->y;
  v71[2] = vecAngles->z;
  v69->m_value.m_flags |= 1u;
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v72 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v72 = 0;
  v25 = v94;
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  *(&v94->m_pIdentityChunks[1] + v72) = 0;
LABEL_95:
  v95 = -1;
  if ( m_pEntityKeyValues == 0 )
  {
LABEL_25:
    Msg("**Can't create ragdoll gib!\n", v25);
    m_pInstance = 0;
    goto LABEL_26;
  }
LABEL_5:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v86 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v39 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(v11) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v77 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v77->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    v41 = m_numTimeBaseTicks - v39;
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v41 + __rdtsc();
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v15 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v15,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v18 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v20 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v95 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v20 & 0x7FFF;
    }
    v96[0] = m_pEntity;
    v96[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v96,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v18, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v24 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v24 - 1);
        (pfn)(v24, v18, i);
      }
    }
  }
  if ( v86 )
  {
    v35 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v36 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v36 == ThreadGetCurrentId(v17) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v37 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v37 - v35 + __rdtsc();
  }
  v25 = CEntityHandle::gm_pEntityList;
  if ( (v95 + 2) <= 1 )
    goto LABEL_25;
  v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v95 >> 9) & 0x3F];
  if ( v26 == 0 )
    goto LABEL_25;
  v27 = v95 & 0x1FF;
  v25 = (8 * v27);
  v28 = &v26[v27];
  if ( v28 == 0 )
    goto LABEL_25;
  if ( v95 != v28->m_EHandle.m_Index )
    goto LABEL_25;
  m_pInstance = v28->m_pInstance;
  if ( v28->m_pInstance == 0 )
    goto LABEL_25;
  if ( bShouldIgnite )
  {
    v82 = (*(m_pInstance->_vptr_IHandleEntity + 43))(m_pInstance);
    v83 = v82;
    if ( v82 != 0 )
    {
      v84 = *(*v82 + 1912LL);
      v85 = (*(*random_valve + 8LL))(random_valve, 8.0, 12.0);
      v84(v83, 0, 0, v85, 0.0);
    }
  }
  CRagGib::Init(m_pInstance, szModel, vecOrigin, vecForce, flFadeTime);
LABEL_26:
  v30 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_4051F50;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v30 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v30);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v31 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v31);
      operator delete(v31);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_pInstance;
}


// CRagGib::Init  (line 689, @0x0000000002266350, libserver.so)  // inlines: AddSolidFlags, SetCollisionGroup, SetSolid
// calls: CBaseModelEntity::SetModel, UTIL_SetSize, UTIL_SetOrigin, CCollisionProperty::SetCollisionGroup, CCollisionProperty::SetSolidFlags, CBaseModelEntity::SUB_StartFadeOut
// callers: CreateRagGib
void __fastcall CRagGib::Init(
        CRagGib *const this,
        const char *szModel,
        const Vector *const vecOrigin,
        const Vector *const vecForce,
        float flFadeTime)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  float v9; // xmm1_4

  p_m_Collision = &this->m_Collision;
  CBaseModelEntity::SetModel(this, szModel);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 2);
  UTIL_SetSize(this, &vec3_origin, &vec3_origin);
  UTIL_SetOrigin(this, vecOrigin, 0);
  CCollisionProperty::SetCollisionGroup(p_m_Collision, 5);
  if ( (*(this->_vptr_IHandleEntity + 236))(this, vecForce) == 0 )
  {
    CCollisionProperty::SetSolidFlags(p_m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
    (*(this->m_Collision._vptr_ICollideable + 17))(p_m_Collision);
    if ( flFadeTime > 0.0 )
      CBaseModelEntity::SUB_StartFadeOut(this, flFadeTime, v9, 1);
  }
}


