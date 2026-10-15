
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SortClusterLessFunc  (line 70, @0x0000000001eb5850, libserver.so)
bool __fastcall SortClusterLessFunc(const int *const left, const int *const right)
{
  return *left < *right;
}


// BuildWorldSpaceSurroundBoxClusterList  (line 77, @0x0000000001ebc330, libserver.so)  // inlines: CleanUpEntityClusterList, VectorAdd, VectorMultiply, __pop_heap<unsigned int*, bool (*)(int const&, int const&)>, make_heap<unsigned int*, bool (*)(int const&, int const&)>, memcpy, operator*, operator+, sort_heap<unsigned int*, bool (*)(int const&, int const&)>
// calls: CUtlMemoryPoolBase::Free, CUtlMemoryPoolBase::Alloc, std::__adjust_heap<unsigned int*, long int, unsigned int, bool (*)(int const&, int const&)>
// callers: CNetworkTransmitComponent::RecomputePVSInformation, UTIL_FindSpawnGroupsAbsBoxTouches
// globals: s_PVSInfoAllocator, SortClusterLessFunc(int const&,int const&)
void __fastcall BuildWorldSpaceSurroundBoxClusterList(
        SpawnGroupHandle_t handle,
        const Vector *const worldSpaceSurroundMins,
        const Vector *const worldSpaceSurroundMaxs,
        PVSInfo_t *pPVSInfo)
{
  IPVSManager *v8; // rdi
  int v9; // r15d
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  __int64 i; // r12
  unsigned int v14; // r8d
  unsigned int *v15; // rsi
  int v16; // ebx
  __int64 v17; // rdx
  unsigned __int16 *v18; // rax
  unsigned __int16 *m_pClusters; // rsi
  unsigned int *v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r12
  unsigned int v23; // ecx
  __int64 v24; // rbx
  unsigned int v25; // eax
  __int64 m_nClusterCount; // rdx
  __int64 __len; // [rsp+8h] [rbp-248h]
  int topnode; // [rsp+1Ch] [rbp-234h] BYREF
  unsigned int clusters[140]; // [rsp+20h] [rbp-230h] BYREF

  if ( pPVSInfo->m_nClusterCount > 4 )
  {
    CUtlMemoryPoolBase::Free(&s_PVSInfoAllocator, pPVSInfo->m_pClusters);
    pPVSInfo->m_pClusters = 0;
    pPVSInfo->m_nClusterCount = 0;
  }
  pPVSInfo->m_pClusters = 0;
  pPVSInfo->m_nClusterCount = 0;
  pPVSInfo->m_nAreaNum = 0;
  v8 = g_pPVSManager;
  pPVSInfo->m_nAreaNum2 = 0;
  topnode = -1;
  v9 = (*(v8->_vptr_IPVSManager + 1))(
         v8,
         handle,
         clusters,
         128,
         worldSpaceSurroundMins,
         worldSpaceSurroundMaxs,
         &topnode);
  v10 = (worldSpaceSurroundMins->x + worldSpaceSurroundMaxs->x) * 0.5;
  v11 = (worldSpaceSurroundMins->y + worldSpaceSurroundMaxs->y) * 0.5;
  v12 = (worldSpaceSurroundMins->z + worldSpaceSurroundMaxs->z) * 0.5;
  pPVSInfo->m_nHeadNode = topnode;
  pPVSInfo->m_vCenter[0] = v10;
  pPVSInfo->m_vCenter[1] = v11;
  pPVSInfo->m_vCenter[2] = v12;
  if ( v9 > 127 )
  {
LABEL_20:
    pPVSInfo->m_nClusterCount = -1;
  }
  else
  {
    pPVSInfo->m_pClusters = pPVSInfo->m_pClustersInline;
    if ( v9 > 15 )
    {
      v20 = &clusters[v9];
      v21 = 4LL * v9;
      if ( v21 > 7 )
      {
        __len = v21 >> 2;
        v22 = ((v21 >> 2) - 2) >> 1;
        std::__adjust_heap<unsigned int *,long,unsigned int,bool (*)(int const&,int const&)>(
          clusters,
          v22,
          __len,
          clusters[v22],
          SortClusterLessFunc);
        while ( v22 != 0 )
        {
          --v22;
          std::__adjust_heap<unsigned int *,long,unsigned int,bool (*)(int const&,int const&)>(
            clusters,
            v22,
            __len,
            clusters[v22],
            SortClusterLessFunc);
        }
        do
        {
          v23 = *--v20;
          *v20 = clusters[0];
          std::__adjust_heap<unsigned int *,long,unsigned int,bool (*)(int const&,int const&)>(
            clusters,
            0,
            v20 - clusters,
            v23,
            SortClusterLessFunc);
        }
        while ( v20 - clusters > 7 );
      }
      v24 = 0;
      while ( 1 )
      {
        v25 = clusters[v24];
        if ( v25 != -1 && (v24 == 0 || v25 != clusters[v24 - 1]) )
        {
          m_nClusterCount = pPVSInfo->m_nClusterCount;
          if ( m_nClusterCount == 4 )
          {
            m_pClusters = CUtlMemoryPoolBase::Alloc(&s_PVSInfoAllocator);
            *m_pClusters = *pPVSInfo->m_pClusters;
            m_nClusterCount = pPVSInfo->m_nClusterCount;
            pPVSInfo->m_pClusters = m_pClusters;
            v25 = clusters[v24];
          }
          else
          {
            m_pClusters = pPVSInfo->m_pClusters;
            if ( m_nClusterCount == 64 )
            {
LABEL_19:
              CUtlMemoryPoolBase::Free(&s_PVSInfoAllocator, m_pClusters);
              pPVSInfo->m_pClusters = 0;
              goto LABEL_20;
            }
          }
          pPVSInfo->m_nClusterCount = m_nClusterCount + 1;
          m_pClusters[m_nClusterCount] = v25;
        }
        if ( ++v24 == (v9 - 1) + 1LL )
          return;
      }
    }
    for ( i = 0; v9 > i; ++i )
    {
      v14 = clusters[i];
      if ( v14 != -1 )
      {
        if ( i == 0 )
        {
          v17 = pPVSInfo->m_nClusterCount;
          v16 = 0;
          if ( v17 != 4 )
            goto LABEL_13;
          goto LABEL_23;
        }
        if ( v14 != clusters[0] )
        {
          v15 = &clusters[1];
          v16 = 0;
          while ( ++v16 != i )
          {
            if ( v14 == *v15++ )
              goto LABEL_16;
          }
          v17 = pPVSInfo->m_nClusterCount;
          if ( v17 != 4 )
          {
LABEL_13:
            if ( v17 == 64 )
            {
              m_pClusters = pPVSInfo->m_pClusters;
              goto LABEL_19;
            }
            v18 = pPVSInfo->m_pClusters;
            goto LABEL_15;
          }
LABEL_23:
          v18 = CUtlMemoryPoolBase::Alloc(&s_PVSInfoAllocator);
          *v18 = *pPVSInfo->m_pClusters;
          v17 = pPVSInfo->m_nClusterCount;
          pPVSInfo->m_pClusters = v18;
LABEL_15:
          pPVSInfo->m_nClusterCount = v17 + 1;
          v18[v17] = clusters[v16];
        }
      }
LABEL_16:
      ;
    }
  }
}


// UTIL_FindSpawnGroupsOriginTouches  (line 232, @0x0000000001ebc6b0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<unsigned int>, Element, GrowMemory, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CSpawnGroupMgrGameSystem::GetSpawnGroups, IsPointInBox, CUtlMemory<unsigned int, int>::Purge, CUtlMemory<unsigned int, int>::Grow, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall UTIL_FindSpawnGroupsOriginTouches(
        const Vector *const absOrigin,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *const list)
{
  __int64 v3; // r12
  unsigned int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 m_Size; // rbx
  int v9; // eax
  unsigned int *v10; // rax
  Vector bMins; // [rsp+30h] [rbp-70h] BYREF
  Vector bMaxs; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > groups; // [rsp+50h] [rbp-50h] BYREF

  groups.m_Size = 0;
  groups.m_Memory.m_pMemory = 0;
  groups.m_Memory.m_nAllocationCount = 0;
  groups.m_Memory.m_nGrowSize = 0;
  CSpawnGroupMgrGameSystem::GetSpawnGroups(g_pSpawnGroupMgr, &groups);
  if ( groups.m_Size > 0 )
  {
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = groups.m_Memory.m_pMemory[v3];
        v5 = (*g_pPVSManager->_vptr_IPVSManager)(g_pPVSManager, v4);
        v6 = v5;
        if ( v5 != 0 )
        {
          v7 = (*(*v5 + 56LL))(v5, absOrigin);
          if ( v7 >= 0 && (*(*v6 + 160LL))(v6, v7, &bMins, &bMaxs) != 0 && IsPointInBox(absOrigin, &bMins, &bMaxs) )
          {
            m_Size = list->m_Size;
            v9 = list->m_Size;
            if ( m_Size == list->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<unsigned int,int>::Grow(&list->m_Memory, 1);
              v9 = list->m_Size;
            }
            list->m_Size = v9 + 1;
            v10 = &list->m_Memory.m_pMemory[m_Size];
            if ( v10 != 0 )
              break;
          }
        }
        if ( groups.m_Size <= ++v3 )
          goto LABEL_12;
      }
      *v10 = v4;
      ++v3;
    }
    while ( groups.m_Size > v3 );
  }
LABEL_12:
  groups.m_Size = 0;
  if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
    if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
  }
}


// UTIL_FindSpawnGroupsAbsBoxTouches  (line 261, @0x0000000001ebccc0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CleanUpEntityClusterList, CopyConstruct<unsigned int>, Element, GrowMemory, PVSInfo_t, Purge, RemoveAll, VectorAdd, VectorMultiply, operator*, operator+, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: BuildWorldSpaceSurroundBoxClusterList, IsPointInBox, CUtlMemoryPoolBase::Free, CUtlMemory<unsigned int, int>::Grow, CUtlMemory<IPVS*, int>::Purge, CUtlMemory<unsigned int, int>::Purge, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNetworkTransmitComponent::CalcPhysicalSpawnGroupHandle
// globals: s_PVSInfoAllocator
void __fastcall UTIL_FindSpawnGroupsAbsBoxTouches(
        const Vector *const mins,
        const Vector *const maxs,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *const list)
{
  SpawnGroupHandle_t v3; // edi
  IPVS *v4; // r12
  __int16 m_nClusterCount; // dx
  vec_t v6; // xmm0_4
  vec_t v7; // xmm2_4
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  __int64 m_Size; // rbx
  int v12; // eax
  unsigned int *v13; // rax
  int v14; // eax
  char v15; // al
  SpawnGroupHandle_t check; // [rsp+38h] [rbp-E8h]
  int i; // [rsp+3Ch] [rbp-E4h]
  __int64 v21; // [rsp+40h] [rbp-E0h]
  Vector center; // [rsp+50h] [rbp-D0h] BYREF
  Vector bMins; // [rsp+60h] [rbp-C0h] BYREF
  Vector bMaxs; // [rsp+70h] [rbp-B0h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > groupList; // [rsp+80h] [rbp-A0h] BYREF
  CUtlVector<IPVS*,CUtlMemory<IPVS*,int> > pvsList; // [rsp+A0h] [rbp-80h] BYREF
  PVSInfo_t info; // [rsp+C0h] [rbp-60h] BYREF

  groupList.m_Size = 0;
  groupList.m_Memory.m_pMemory = 0;
  groupList.m_Memory.m_nAllocationCount = 0;
  groupList.m_Memory.m_nGrowSize = 0;
  pvsList.m_Size = 0;
  pvsList.m_Memory.m_pMemory = 0;
  pvsList.m_Memory.m_nAllocationCount = 0;
  pvsList.m_Memory.m_nGrowSize = 0;
  (*(g_pPVSManager->_vptr_IPVSManager + 17))(g_pPVSManager, &groupList, &pvsList);
  if ( groupList.m_Size > 0 )
  {
    v21 = 0;
    i = 0;
    while ( 1 )
    {
      v3 = groupList.m_Memory.m_pMemory[v21];
      check = v3;
      v4 = pvsList.m_Memory.m_pMemory[v21];
      memset(&info, 0, 28);
      BuildWorldSpaceSurroundBoxClusterList(v3, mins, maxs, &info);
      m_nClusterCount = info.m_nClusterCount;
      v6 = (mins->z + maxs->z) * 0.5;
      v7 = (mins->x + maxs->x) * 0.5;
      center.y = (mins->y + maxs->y) * 0.5;
      center.z = v6;
      center.x = v7;
      if ( info.m_nClusterCount < 0 )
        break;
      v8 = (info.m_nClusterCount - 1);
      if ( info.m_nClusterCount != 0 )
      {
        v9 = 2LL * v8;
        v10 = 2 * (v8 - v8) - 2;
        while ( (*(*v4 + 160LL))(v4, info.m_pClusters[v9 / 2], &bMins, &bMaxs) == 0
             || !IsPointInBox(&center, &bMins, &bMaxs) )
        {
          v9 -= 2LL;
          if ( v9 == v10 )
            goto LABEL_13;
        }
        goto LABEL_9;
      }
LABEL_14:
      if ( m_nClusterCount > 4 )
        CUtlMemoryPoolBase::Free(&s_PVSInfoAllocator, info.m_pClusters);
      ++i;
      ++v21;
      if ( groupList.m_Size <= i )
        goto LABEL_17;
    }
    v14 = (*(*v4 + 56LL))(v4, &center);
    if ( v14 >= 0 )
    {
      v15 = (*(*v4 + 160LL))(v4, v14, &bMins, &bMaxs);
      m_nClusterCount = info.m_nClusterCount;
      if ( v15 == 0 )
        goto LABEL_14;
      if ( IsPointInBox(&center, &bMins, &bMaxs) )
      {
LABEL_9:
        m_Size = list->m_Size;
        v12 = list->m_Size;
        if ( m_Size == list->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<unsigned int,int>::Grow(&list->m_Memory, 1);
          v12 = list->m_Size;
        }
        list->m_Size = v12 + 1;
        v13 = &list->m_Memory.m_pMemory[m_Size];
        if ( v13 != 0 )
          *v13 = check;
      }
    }
LABEL_13:
    m_nClusterCount = info.m_nClusterCount;
    goto LABEL_14;
  }
LABEL_17:
  pvsList.m_Size = 0;
  if ( (pvsList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<IPVS *,int>::Purge(&pvsList.m_Memory);
    if ( (pvsList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IPVS *,int>::Purge(&pvsList.m_Memory);
  }
  groupList.m_Size = 0;
  if ( (groupList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&groupList.m_Memory);
    if ( (groupList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&groupList.m_Memory);
  }
}


// CNetworkTransmitComponent::AddDatadescMetadataKeys  (line 329, @0x0000000001eb9b80, libserver.so)
void __fastcall CNetworkTransmitComponent::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CNetworkTransmitComponent::GetBaseMap  (line 329, @0x0000000001eb9b90, libserver.so)
datamap_t *__cdecl CNetworkTransmitComponent::GetBaseMap()
{
  return 0;
}


// DataMapInit<CNetworkTransmitComponent>  (line 329, @0x0000000001eb9ba0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_components_01.cpp
// strings: "CNetworkTransmitComponent"
// globals: `guard variable for'DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder, CNetworkTransmitComponent::m_DataMap, DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder) != 0 )
  {
    DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder.m_pszBase = "CNetworkTransmitComponent";
    DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder.m_nLenBase = 25;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::nameHolder,
      &_dso_handle);
  }
  CNetworkTransmitComponent::m_DataMap.baseMap = 0;
  CNetworkTransmitComponent::m_DataMap.dataDesc = &DataMapInit<CNetworkTransmitComponent>(CNetworkTransmitComponent *)::dataDesc[1];
  CNetworkTransmitComponent::m_DataMap.dataNumFields = 1;
  return &CNetworkTransmitComponent::m_DataMap;
}


// CNetworkTransmitComponent::CNetworkTransmitComponent  (line 334, @0x0000000001eb9c60, libserver.so)  // inlines: PVSInfo_t
// callers: CBaseEntity::CBaseEntity
void __fastcall CNetworkTransmitComponent::CNetworkTransmitComponent(CNetworkTransmitComponent *const this)
{
  this->_vptr_IEventRegisterCallback = off_3FB50F0;
  this->m_PVSInfo.m_nHeadNode = 0;
  this->m_PVSInfo.m_nClusterCount = 0;
  this->m_PVSInfo.m_nAreaNum = 0;
  this->m_pTimerEvent = 0;
  this->m_PVSInfo.m_pClusters = 0;
  this->m_PVSInfo.m_nAreaNum2 = 0;
  *&this->m_PVSInfo.m_vCenter[1] = 0;
  this->m_PVSInfo.m_vCenter[0] = 0.0;
  this->m_nStateFlags = 0;
  this->m_nTransmitStateOwnedCounter = 0;
  this->m_PhysicalSpawnGroupHandle = 0;
  this->m_bPendingStateChange = 0;
}


// CNetworkTransmitComponent::~CNetworkTransmitComponent  (line 340, @0x0000000001eb9cc0, libserver.so)  // inlines: Base, CleanUpEntityClusterList, ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~ChangeAccessorFieldPathIndexInfo_t
// calls: CUtlMemory<const OffsetIgnore_t*, int>::Purge, operator delete, CEventRegister::~CEventRegister, CUtlMemoryPoolBase::Free
// callers: CBaseEntity::CBaseEntity, CBaseEntity::~CBaseEntity
// globals: s_PVSInfoAllocator
void __fastcall CNetworkTransmitComponent::~CNetworkTransmitComponent(CNetworkTransmitComponent *const this)
{
  ChangeAccessorFieldPathIndexInfo_t *m_pChangeChangeAccessorFieldPathIndexInfo; // rbx
  int m_nAllocationCount; // edx
  uint32 m_nGrowSize; // edx
  const OffsetIgnore_t **m_pMemory; // rsi
  unsigned int v6; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::IndexType_t m_nAllocated; // ax
  CEventRegister *m_pTimerEvent; // rbx
  void (__fastcall *v9)(_QWORD *, CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t *); // rdx

  this->_vptr_IEventRegisterCallback = off_3FB50F0;
  if ( this->m_PVSInfo.m_nClusterCount > 4 )
  {
    CUtlMemoryPoolBase::Free(&s_PVSInfoAllocator, this->m_PVSInfo.m_pClusters);
    this->m_PVSInfo.m_pClusters = 0;
    this->m_PVSInfo.m_nClusterCount = 0;
  }
  m_pChangeChangeAccessorFieldPathIndexInfo = this->m_pChangeChangeAccessorFieldPathIndexInfo;
  if ( m_pChangeChangeAccessorFieldPathIndexInfo != 0 )
  {
    m_nAllocationCount = m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_nAllocationCount;
    m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Size = 0;
    if ( m_nAllocationCount < 0 )
    {
      v6 = m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_nGrowSize & 0xC0000000;
    }
    else
    {
      m_nGrowSize = m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_nGrowSize;
      m_pMemory = m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_pMemory;
      v6 = m_nGrowSize & 0xC0000000;
      if ( &m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_FixedMemory != m_pMemory )
      {
        if ( m_pMemory != 0 && v6 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_nGrowSize;
        }
        m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_pMemory = &m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_FixedMemory;
        m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_nAllocationCount = 4;
        m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
LABEL_13:
        m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount = 0;
        m_nAllocated = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocated;
        if ( m_nAllocated > 3 )
        {
          v9 = *(*g_pMemAlloc + 16LL);
          if ( m_nAllocated != 0 )
            v9(g_pMemAlloc, m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_pElements);
          else
            v9(g_pMemAlloc, 0);
        }
        m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocated = 3;
        operator delete(m_pChangeChangeAccessorFieldPathIndexInfo);
        goto LABEL_15;
      }
    }
    if ( v6 == 0 )
      CUtlMemory<OffsetIgnore_t const*,int>::Purge(&m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory);
    goto LABEL_13;
  }
LABEL_15:
  m_pTimerEvent = this->m_pTimerEvent;
  if ( m_pTimerEvent != 0 )
  {
    CEventRegister::~CEventRegister(this->m_pTimerEvent);
    operator delete(m_pTimerEvent);
  }
}


// CNetworkTransmitComponent::Init  (line 349, @0x0000000001eb9e30, libserver.so)
// callers: CBaseEntity::CBaseEntity
void __fastcall CNetworkTransmitComponent::Init(CNetworkTransmitComponent *const this, CBaseEntity *pOuter)
{
  this->m_pOuter = pOuter;
}


// CNetworkTransmitComponent::RecomputePVSInformation  (line 354, @0x0000000001ebc640, libserver.so)
// calls: CEntitySystem::GetActiveSpawnGroupHandle, BuildWorldSpaceSurroundBoxClusterList
// callers: CBaseEntity::SetTransmit, CSource2GameEntities::CheckEntities
void __fastcall CNetworkTransmitComponent::RecomputePVSInformation(
        CNetworkTransmitComponent *const this,
        CEntityIndex index)
{
  uint32 m_nStateFlags; // eax
  CCollisionProperty *m_pCollision; // rdi
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  Vector vecWorldMins; // [rsp+0h] [rbp-40h] BYREF
  Vector vecWorldMaxs; // [rsp+10h] [rbp-30h] BYREF

  m_nStateFlags = this->m_nStateFlags;
  if ( (m_nStateFlags & 0x20) != 0 )
  {
    this->m_nStateFlags = m_nStateFlags & 0xFFFFFFDF;
    m_pCollision = this->m_pOuter->m_pCollision;
    if ( m_pCollision )
    {
      (*(m_pCollision->_vptr_ICollideable + 10))(m_pCollision, &vecWorldMins, &vecWorldMaxs);
      ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
      BuildWorldSpaceSurroundBoxClusterList(ActiveSpawnGroupHandle, &vecWorldMins, &vecWorldMaxs, &this->m_PVSInfo);
    }
  }
}


// CNetworkTransmitComponent::IsInPVSOfConnectedSpawnGroup_R  (line 392, @0x0000000001ebeba0, libserver.so)  // inlines: AddToTail, BitVec_FindNextSetBit<int, false>, BuildHandle, CEntityHandle, CopyConstruct<CUtlStringToken>, DoFind, Element, Find, FindNextSetBit, FirstBitInWord, FirstBitInWordThatIsKnownToBeNonZero, GetEHandle, GetEndMask, GetEntityNameAsCStr, GetEntryIndex, GetInt, GetSerialNumber, GetStartBitMask, GrowMemory, Init, Insert, String, operator[]
// calls: CMapSpawnGroup::FindConnectionByLandmarkStringToken, CMapSpawnGroup::GetConnection, SpawnGroupConnectionInfo_t::GetSpawnGroup, CUtlMemory<CUtlStringToken, int>::Grow, CMapSpawnGroup::GetPVS, vis_info_t::IsInPVS, Msg
// callers: CNetworkTransmitComponent::IsInPVS
// strings: "accepted", "%d(%s):  %s because %f %f %f was %s final landmark\n", "not visible to", "rejected"
// globals: GetStartBitMask(int)::g_StartMask
bool __fastcall CNetworkTransmitComponent::IsInPVSOfConnectedSpawnGroup_R(
        CNetworkTransmitComponent *const this,
        CUtlHash<CUtlStringToken,bool (*)(const CUtlStringToken&,const CUtlStringToken&),unsigned int (*)(const CUtlStringToken&)> *const visited,
        const CUtlStringToken *const incomingConnectionName,
        CMapSpawnGroup_0 *pCurrent,
        CMapSpawnGroup_0 *pGoal,
        const Vector *const ourPos,
        bool bVerbose)
{
  unsigned int v9; // eax
  CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int> > *v10; // r14
  __int64 v11; // r13
  int v12; // r15d
  bool result; // al
  unsigned int v14; // eax
  signed int v15; // edx
  CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int> > *v16; // r14
  __int64 v17; // r13
  int v18; // r15d
  int m_nValue; // edx
  int v20; // r13d
  CBitVec<16> *p_m_unConnectionBits; // rbx
  const SpawnGroupConnectionInfo_t *Connection; // r15
  CMapSpawnGroup *SpawnGroup; // rax
  int v24; // r13d
  CBitVec<16> *v25; // rdx
  unsigned int v26; // eax
  unsigned int *m_Ints; // rax
  unsigned int v28; // edx
  unsigned int v29; // esi
  unsigned int v30; // eax
  CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int> > *v31; // r15
  __int64 m_Size; // r13
  CUtlStringToken *v33; // rax
  IPVS *PVS; // rax
  int v35; // eax
  bool v36; // bl
  const char *v37; // r8
  const char *v38; // rcx
  const char *m_pAsString; // rdx
  CEntityIdentity *m_pEntity; // rsi
  unsigned __int16 v41; // r9
  int v42; // eax
  int v43; // esi
  const SpawnGroupConnectionInfo_t *pEntryPoint; // [rsp+10h] [rbp-80h]
  unsigned int visiteda; // [rsp+40h] [rbp-50h]
  __int64 visitedb; // [rsp+40h] [rbp-50h]
  CUtlHash<CUtlStringToken,bool (*)(const CUtlStringToken&,const CUtlStringToken&),unsigned int (*)(const CUtlStringToken&)> *visitedc; // [rsp+40h] [rbp-50h]
  bool v52[4]; // [rsp+4Ch] [rbp-44h]
  bool v53[4]; // [rsp+4Ch] [rbp-44h]

  v9 = visited->m_KeyFunc(incomingConnectionName);
  if ( visited->m_bPowerOfTwo )
    visiteda = visited->m_ModMask & v9;
  else
    visiteda = v9 % visited->m_Buckets.m_Size;
  v10 = &visited->m_Buckets.m_Memory.m_pMemory[visiteda];
  *v52 = v10->m_Size;
  if ( v10->m_Size <= 0 )
  {
    v12 = 0;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    while ( !visited->m_CompareFunc(&v10->m_Memory.m_pMemory[v11], incomingConnectionName) )
    {
      ++v12;
      ++v11;
      if ( v12 == *v52 )
        goto LABEL_12;
    }
  }
  if ( *v52 != v12 && (v12 | (visiteda << 16)) != 0xFFFFFFFF )
    return 0;
LABEL_12:
  v14 = visited->m_KeyFunc(incomingConnectionName);
  if ( visited->m_bPowerOfTwo )
    v15 = visited->m_ModMask & v14;
  else
    v15 = v14 % visited->m_Buckets.m_Size;
  visitedb = v15;
  v16 = &visited->m_Buckets.m_Memory.m_pMemory[visitedb];
  *v53 = v16->m_Size;
  if ( v16->m_Size <= 0 )
  {
    v18 = 0;
  }
  else
  {
    v17 = 0;
    v18 = 0;
    while ( !visited->m_CompareFunc(&v16->m_Memory.m_pMemory[v17], incomingConnectionName) )
    {
      ++v18;
      ++v17;
      if ( v18 == *v53 )
        goto LABEL_47;
    }
  }
  if ( *v53 == v18 )
  {
LABEL_47:
    v31 = &visited->m_Buckets.m_Memory.m_pMemory[visitedb];
    m_Size = v31->m_Size;
    if ( m_Size == v31->m_Memory.m_nAllocationCount )
      CUtlMemory<CUtlStringToken,int>::Grow(&v31->m_Memory, 1);
    ++v31->m_Size;
    v33 = &v31->m_Memory.m_pMemory[m_Size];
    if ( v33 != 0 )
      v33->m_nHashCode = incomingConnectionName->m_nHashCode;
  }
  m_nValue = pvs_flowtype.m_pParent->m_Value.m_nValue;
  result = 1;
  if ( m_nValue != 1 )
  {
    result = 0;
    if ( m_nValue != 2 )
    {
      pEntryPoint = CMapSpawnGroup::FindConnectionByLandmarkStringToken(pCurrent, incomingConnectionName);
      if ( pEntryPoint == 0 )
        return 0;
      if ( pCurrent != pGoal )
      {
        if ( (pEntryPoint->m_unConnectionBits.m_Ints[0] & dword_47E2DE0 & GetStartBitMask(int)::g_StartMask[0]) != 0 )
        {
          _BitScanForward(
            &v20,
            pEntryPoint->m_unConnectionBits.m_Ints[0] & dword_47E2DE0 & GetStartBitMask(int)::g_StartMask[0]);
          if ( v20 != -1 )
          {
            visitedc = visited;
            p_m_unConnectionBits = &pEntryPoint->m_unConnectionBits;
            do
            {
              Connection = CMapSpawnGroup::GetConnection(pCurrent, v20);
              if ( incomingConnectionName->m_nHashCode != Connection->m_LandmarkStringToken.m_nHashCode )
              {
                SpawnGroup = SpawnGroupConnectionInfo_t::GetSpawnGroup(Connection);
                if ( SpawnGroup != 0 )
                {
                  result = CNetworkTransmitComponent::IsInPVSOfConnectedSpawnGroup_R(
                             this,
                             visitedc,
                             &Connection->m_LandmarkStringToken,
                             SpawnGroup,
                             pGoal,
                             ourPos,
                             bVerbose);
                  if ( result )
                    return result;
                }
              }
              v24 = v20 + 1;
              if ( v24 > 15 )
                return 0;
              v25 = &p_m_unConnectionBits[v24 >> 5];
              v26 = GetStartBitMask(int)::g_StartMask[v24 & 0x1F] & v25->m_Ints[0];
              if ( p_m_unConnectionBits == v25 )
              {
                v30 = dword_47E2DE0 & v26;
                if ( v30 == 0 )
                  return 0;
                _BitScanForward(&v20, v30);
              }
              else if ( v26 != 0 )
              {
                _BitScanForward(&v26, v26);
                v20 = v26 + 32 * ((4LL * (v24 >> 5)) >> 2);
              }
              else
              {
                m_Ints = v25[1].m_Ints;
                if ( p_m_unConnectionBits == &v25[1] )
                  goto LABEL_37;
                v28 = v25[1].m_Ints[0];
                if ( v28 == 0 )
                {
                  while ( p_m_unConnectionBits != ++m_Ints )
                  {
                    v28 = *m_Ints;
                    if ( *m_Ints != 0 )
                      goto LABEL_43;
                  }
LABEL_37:
                  v29 = pEntryPoint->m_unConnectionBits.m_Ints[0] & dword_47E2DE0;
                  if ( v29 == 0 )
                    return 0;
                  _BitScanForward(&v20, v29);
                  continue;
                }
LABEL_43:
                _BitScanForward(&v28, v28);
                v20 = v28 + 32 * ((m_Ints - p_m_unConnectionBits) >> 2);
              }
            }
            while ( v20 != -1 );
          }
        }
        return 0;
      }
      PVS = CMapSpawnGroup::GetPVS(pCurrent);
      if ( PVS == 0 )
        return 0;
      v35 = (*(*PVS + 56LL))(PVS, ourPos);
      result = vis_info_t::IsInPVS(&pEntryPoint->m_LandmarkPVS, v35);
      v36 = result;
      if ( bVerbose )
      {
        if ( result )
        {
          v37 = "visible to";
          v38 = "accepted";
        }
        else
        {
          v37 = "not visible to";
          v38 = "rejected";
        }
        m_pAsString = "";
        m_pEntity = this->m_pOuter->m_pEntity;
        if ( m_pEntity->m_name.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_name.u.m_pAsString;
        v41 = 0x7FFF;
        v42 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v41 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v43 = 0x7FFF;
        if ( ((v42 << 15) | v41 & 0x7FFF) != 0xFFFFFFFF )
          v43 = v41;
        Msg(
          "%d(%s):  %s because %f %f %f was %s final landmark\n",
          v43,
          m_pAsString,
          v38,
          ourPos->x,
          ourPos->y,
          ourPos->z,
          v37);
        return v36;
      }
    }
  }
  return result;
}


// CNetworkTransmitComponent::IsInPVS  (line 466, @0x0000000001ec0b40, libserver.so)  // inlines: BitVec_IsBitSet, CEntityHandle, CUtlHash, CUtlMemory, CUtlVector, CUtlVectorBase, CalcAbsolutePosition, FastSqrt, GetAbsOrigin, GetBool, GetEHandle, GetEntityNameAsCStr, GetEntryIndex, GetFloat, GetInt, GetPhysicalSpawnGroupHandle, GetSerialNumber, Init, IsInPVS, LeafCodeInfo_t, Length, Load, Purge, RemoveAll, SetGrowSize, String, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=, operator[], ~CUtlHash, ~CUtlVector
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CNetworkTransmitComponent::CalcPhysicalSpawnGroupHandle, CUtlVectorBase<CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >, CUtlMemory<CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >, int> >::SetCount, CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::SetCount, CBaseEntity::GetAbsOrigin, CSpawnGroupMgrGameSystem::Get, CMapSpawnGroup::GetConnection, SpawnGroupConnectionInfo_t::GetSpawnGroup, CNetworkTransmitComponent::IsInPVSOfConnectedSpawnGroup_R, CMapSpawnGroup::GetConnectionCount, Msg, CUtlMemory<CUtlStringToken, int>::Purge (20 total)
// callers: CSource2GameEntities::CheckEntities
// strings: "%d(%s):  rejected\n", "../../public/scenesystem/iscenesystem.h", "IsInPVS", "CheckOriginInPVS:  cluster would read past end of pvs data (cluster %d, offset %u:%u)\n"
// globals: CUtlStringTokenHashMethod::Compare(CUtlStringToken const&,CUtlStringToken const&), HashItem(CUtlStringToken const&), pvs_debugentity
// local variable allocation has failed, the output may be wrong!
bool __fastcall CNetworkTransmitComponent::IsInPVS(
        CNetworkTransmitComponent *const this,
        const CGameCheckTransmitInfo *const info)
{
  int (*v4)(...); // r14
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  __int64 v6; // rbx
  CBasePlayer *m_pRecipientPlayer; // rdi
  CBaseEntity *m_pOuter; // rax
  int m_nValue; // esi
  CEntityIdentity *m_pEntity; // rax
  int v11; // ecx
  CCheckTransmitInfo *m_pInfo; // r12
  SpawnGroupHandle_t m_SpawnGroupHandle; // r15d
  SpawnGroupHandle_t m_PhysicalSpawnGroupHandle; // r14d
  __int64 m_nClusterCount; // rax
  __int64 k; // rax
  unsigned __int16 v18; // cx
  uint32 v19; // edx
  const uint32 *v20; // rsi
  int *v21; // rbx
  int m_nClusterForLandmark; // r14d
  float v23; // xmm1_4
  CCheckTransmitInfo *v24; // r14
  int v25; // r15d
  int v26; // esi
  int v27; // ecx
  CCheckTransmitInfo *v28; // r15
  __int64 v29; // r12
  CCheckTransmitInfo *v30; // rbx
  int v31; // r15d
  unsigned int v32; // r14d
  __int64 v33; // rdi
  __int64 i; // rbx
  CBaseEntity *v35; // rdi
  CEntityIdentity *v36; // rax
  int v37; // ecx
  int j; // ebx
  const SpawnGroupConnectionInfo_t *Connection; // rax
  const SpawnGroupConnectionInfo_t *v40; // r15
  uint32 m_uVisBitsBufSize; // eax
  const uint32 *m_pVisBits; // rdx
  CMapSpawnGroup *SpawnGroup; // rax
  bool v44; // al
  const char *m_pAsString; // rdx
  CEntityIdentity *v46; // rax
  int v47; // ecx
  unsigned __int16 v48; // si
  int v49; // eax
  unsigned int v50; // ecx
  __int64 v51; // rsi
  __int64 v52; // rbx
  bool v53; // r13
  __int64 v54; // r12
  __int64 v55; // rdi
  bool v56; // zf
  Vector *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  const vis_info_t *v60; // rdi
  __int64 v61; // rsi
  int v62; // r13d
  int v63; // eax
  int v64; // r12d
  __int64 m; // rbx
  __int64 v66; // rax
  int v67; // edx
  int v68; // ecx
  int v69; // esi
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rdx
  __int64 v73; // rcx
  const vis_info_t *v74; // rdi
  __int64 v75; // rsi
  uint32 v76; // eax
  uint32 v77; // eax
  char v78; // [rsp+0h] [rbp-D0h]
  bool bVerbose; // [rsp+17h] [rbp-B9h]
  CMapSpawnGroup_0 *pGoal; // [rsp+20h] [rbp-B0h]
  CUtlHash<CUtlStringToken,bool (*)(const CUtlStringToken&,const CUtlStringToken&),unsigned int (*)(const CUtlStringToken&)> *visited; // [rsp+28h] [rbp-A8h]
  unsigned int v82; // [rsp+34h] [rbp-9Ch]
  CMapSpawnGroup_0 *pCurrentSpawnGroup; // [rsp+38h] [rbp-98h]
  CMapSpawnGroup *pCurrentSpawnGroupa; // [rsp+38h] [rbp-98h]
  bool pCurrentSpawnGroupb; // [rsp+38h] [rbp-98h]
  Vector ourPos; // [rsp+40h] [rbp-90h] BYREF
  LeafCodeInfo_t v87; // [rsp+50h] [rbp-80h] BYREF
  __int128 clientPos; // [rsp+70h] [rbp-60h] OVERLAPPED BYREF
  const char *v89; // [rsp+80h] [rbp-50h]
  bool (__fastcall *v90)(const CUtlStringToken *const, const CUtlStringToken *const); // [rsp+88h] [rbp-48h]
  uint (__fastcall *v91)(const CUtlStringToken *const); // [rsp+90h] [rbp-40h]
  char v92; // [rsp+98h] [rbp-38h]
  int v93; // [rsp+9Ch] [rbp-34h]

  v4 = *g_pPVSManager->_vptr_IPVSManager;
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  v6 = (v4)(g_pPVSManager, ActiveSpawnGroupHandle);
  if ( v6 == 0 )
    return 1;
  m_pRecipientPlayer = info->m_pRecipientPlayer;
  m_pOuter = this->m_pOuter;
  if ( m_pOuter == m_pRecipientPlayer )
    return 1;
  m_nValue = sv_pvs_entity.m_pParent->m_Value.m_nValue;
  if ( m_nValue != -1 )
  {
    m_pEntity = m_pOuter->m_pEntity;
    if ( m_pEntity == 0 )
      goto LABEL_46;
    LOWORD(v11) = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      LOWORD(v11) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LODWORD(clientPos) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
    if ( clientPos == -1 )
LABEL_46:
      v11 = 0x7FFF;
    else
      v11 = v11;
    if ( m_nValue != v11 )
      return 0;
  }
  if ( sv_pvs_random.m_pParent->m_Value.m_nValue != 0 )
    return RandomInt(1, 100) <= 5;
  if ( sv_radial_vis.m_pParent->m_Value.m_fValue > 0.0 && m_pRecipientPlayer != 0 )
  {
    *&clientPos = (*(m_pRecipientPlayer->_vptr_IHandleEntity + 164))(m_pRecipientPlayer);
    *(&clientPos + 2) = v23;
    return sv_radial_vis.m_pParent->m_Value.m_fValue >= fsqrt(
                                                          (((*&clientPos - this->m_PVSInfo.m_vCenter[0])
                                                          * (*&clientPos - this->m_PVSInfo.m_vCenter[0]))
                                                         + ((*(&clientPos + 1) - this->m_PVSInfo.m_vCenter[1])
                                                          * (*(&clientPos + 1) - this->m_PVSInfo.m_vCenter[1])))
                                                        + ((v23 - this->m_PVSInfo.m_vCenter[2])
                                                         * (v23 - this->m_PVSInfo.m_vCenter[2])));
  }
  else
  {
    m_pInfo = info->m_pInfo;
    if ( this->m_PVSInfo.m_nAreaNum2 != 0 )
    {
      if ( m_pInfo->m_AreasNetworked > 0 )
      {
        v27 = m_pInfo->m_Areas[0];
        if ( this->m_PVSInfo.m_nAreaNum != v27 && this->m_PVSInfo.m_nAreaNum2 != v27 )
        {
          v28 = m_pInfo;
          pCurrentSpawnGroup = m_pInfo;
          v29 = v6;
          v30 = v28;
          v31 = 0;
          v32 = v27;
          while ( 1 )
          {
            if ( (*(*v29 + 104LL))(v29, v32) != 0 || (*(*v29 + 104LL))(v29, v32, this->m_PVSInfo.m_nAreaNum2) != 0 )
            {
LABEL_45:
              v6 = v29;
              m_pInfo = pCurrentSpawnGroup;
              goto LABEL_14;
            }
            if ( pCurrentSpawnGroup[1].m_Connections.m_Memory.m_nGrowSize <= ++v31 )
              break;
            v32 = v30->m_Areas[1];
            if ( this->m_PVSInfo.m_nAreaNum != v32 )
            {
              v30 = (v30 + 4);
              if ( this->m_PVSInfo.m_nAreaNum2 != v32 )
                continue;
            }
            goto LABEL_45;
          }
          v6 = v29;
          m_pInfo = pCurrentSpawnGroup;
        }
      }
    }
    else if ( m_pInfo->m_AreasNetworked > 0 && this->m_PVSInfo.m_nAreaNum != m_pInfo->m_Areas[0] )
    {
      v24 = m_pInfo;
      v25 = 0;
      do
      {
        if ( (*(*v6 + 104LL))(v6) != 0 )
          break;
        if ( m_pInfo->m_AreasNetworked <= ++v25 )
          break;
        v26 = v24->m_Areas[1];
        v24 = (v24 + 4);
      }
      while ( this->m_PVSInfo.m_nAreaNum != v26 );
    }
LABEL_14:
    m_SpawnGroupHandle = m_pInfo->m_VisInfo.m_SpawnGroupHandle;
    if ( (this->m_nStateFlags & 0x40) != 0 )
      CNetworkTransmitComponent::CalcPhysicalSpawnGroupHandle(this);
    m_PhysicalSpawnGroupHandle = this->m_PhysicalSpawnGroupHandle;
    if ( m_SpawnGroupHandle != m_PhysicalSpawnGroupHandle && m_PhysicalSpawnGroupHandle != 0 )
    {
      LODWORD(clientPos) = 0;
      v90 = CUtlStringTokenHashMethod::Compare;
      v91 = HashItem;
      *(&clientPos + 1) = 0;
      v89 = 0;
      visited = &clientPos;
      CUtlVectorBase<CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>,CUtlMemory<CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>,int>>::SetCount(
        &clientPos,
        67);
      v33 = *(&clientPos + 1);
      for ( i = 0; i != 1608; i += 24 )
      {
        CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>::SetCount((i + v33), 0);
        v33 = *(&clientPos + 1);
        *(*(&clientPos + 1) + i + 20) &= 0xC0000000;
      }
      v35 = this->m_pOuter;
      v92 = 0;
      v93 = 0;
      v36 = v35->m_pEntity;
      if ( v36 == 0 )
        goto LABEL_84;
      LOWORD(v37) = 0x7FFF;
      if ( v36->m_EHandle.m_Index != -1 )
        LOWORD(v37) = v36->m_EHandle.m_Index & 0x7FFF;
      LODWORD(v87.m_szFile) = (((v36->m_EHandle.m_Index >> 15) - (v36->m_flags & 1)) << 15) | v37 & 0x7FFF;
      if ( LODWORD(v87.m_szFile) == -1 )
LABEL_84:
        v37 = 0x7FFF;
      else
        v37 = v37;
      bVerbose = v37 == pvs_debugentity.m_pParent->m_Value.m_nValue;
      if ( v37 != pvs_debugentity.m_pParent->m_Value.m_nValue
        || (ConVar::SetValue(&pvs_debugentity, -1), (v35 = this->m_pOuter) != 0) )
      {
        ourPos = *CBaseEntity::GetAbsOrigin(v35);
      }
      else
      {
        v57 = MEMORY[0x38004000000008];
        if ( *(MEMORY[0x38004000000008] + 260LL) != 0 )
          CGameSceneNode::CalcAbsolutePositionWhenDirty(MEMORY[0x38004000000008]);
        ourPos = v57[18];
      }
      pCurrentSpawnGroupa = CSpawnGroupMgrGameSystem::Get(g_pSpawnGroupMgr, m_SpawnGroupHandle);
      pGoal = CSpawnGroupMgrGameSystem::Get(g_pSpawnGroupMgr, m_PhysicalSpawnGroupHandle);
      for ( j = 0; j < CMapSpawnGroup::GetConnectionCount(pCurrentSpawnGroupa); ++j )
      {
        Connection = CMapSpawnGroup::GetConnection(pCurrentSpawnGroupa, j);
        m_nClusterForLandmark = Connection->m_nClusterForLandmark;
        v40 = Connection;
        if ( m_nClusterForLandmark >= 0 )
        {
          m_uVisBitsBufSize = m_pInfo->m_VisInfo.m_uVisBitsBufSize;
          if ( m_uVisBitsBufSize != 0 )
          {
            m_pVisBits = m_pInfo->m_VisInfo.m_pVisBits;
            if ( m_pVisBits != 0 )
            {
              v82 = m_nClusterForLandmark >> 3;
              if ( m_uVisBitsBufSize < m_nClusterForLandmark >> 3 )
              {
                v21 = &LOG_GENERAL;
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  goto LABEL_100;
                goto LABEL_91;
              }
              if ( ((1 << m_nClusterForLandmark) & m_pVisBits[m_nClusterForLandmark >> 5]) != 0 )
              {
                SpawnGroup = SpawnGroupConnectionInfo_t::GetSpawnGroup(v40);
                if ( SpawnGroup != 0 )
                {
                  v44 = CNetworkTransmitComponent::IsInPVSOfConnectedSpawnGroup_R(
                          this,
                          &clientPos,
                          &v40->m_LandmarkStringToken,
                          SpawnGroup,
                          pGoal,
                          &ourPos,
                          bVerbose);
                  if ( v44 )
                    goto LABEL_75;
                }
              }
            }
          }
        }
      }
      if ( bVerbose )
      {
        m_pAsString = "";
        v46 = this->m_pOuter->m_pEntity;
        if ( v46->m_name.u.m_Id != 0 )
          m_pAsString = v46->m_name.u.m_pAsString;
        v47 = (v46->m_EHandle.m_Index >> 15) - (v46->m_flags & 1);
        v48 = 0x7FFF;
        if ( v46->m_EHandle.m_Index != -1 )
          v48 = v46->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v87.m_szFile) = v48 | v87.m_szFile & 0x8000;
        v49 = (v47 << 15) | v87.m_szFile & 0x7FFF;
        v50 = v48;
        v51 = 0x7FFF;
        LODWORD(v87.m_szFile) = v49;
        if ( v49 != -1 )
          v51 = v50;
        Msg("%d(%s):  rejected\n", v51, m_pAsString);
      }
      v44 = 0;
LABEL_75:
      if ( clientPos > 0 )
      {
        v52 = 0;
        v53 = v44;
        v54 = 8 * (3LL * (clientPos - 1) + 3);
        do
        {
          v55 = *(&clientPos + 1) + v52;
          v56 = (*(*(&clientPos + 1) + v52 + 20) & 0xC0000000) == 0;
          *(*(&clientPos + 1) + v52) = 0;
          if ( v56 )
            CUtlMemory<CUtlStringToken,int>::Purge((v55 + 8));
          v52 += 24;
        }
        while ( v52 != v54 );
        v44 = v53;
      }
      pCurrentSpawnGroupb = v44;
      CUtlVectorBase<CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>,CUtlMemory<CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>,int>>::~CUtlVectorBase(&clientPos);
      return pCurrentSpawnGroupb;
    }
    else
    {
      m_nClusterCount = this->m_PVSInfo.m_nClusterCount;
      if ( (m_nClusterCount & 0x8000u) == 0LL )
      {
        for ( k = 2 * m_nClusterCount - 2; ; k -= 2 )
        {
          if ( k == -2 )
            return 0;
          v18 = *(this->m_PVSInfo.m_pClusters + k);
          v19 = m_pInfo->m_VisInfo.m_uVisBitsBufSize;
          if ( v19 != 0 )
          {
            v20 = m_pInfo->m_VisInfo.m_pVisBits;
            if ( v20 != 0 )
            {
              v21 = v18;
              m_nClusterForLandmark = v18 >> 3;
              if ( v19 < m_nClusterForLandmark )
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                {
                  v76 = m_pInfo->m_VisInfo.m_uVisBitsBufSize;
                  *&clientPos = "../../public/scenesystem/iscenesystem.h";
                  v89 = "IsInPVS";
                  DWORD2(clientPos) = 265;
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &clientPos,
                    "CheckOriginInPVS:  cluster would read past end of pvs data (cluster %d, offset %u:%u)\n",
                    v21,
                    m_nClusterForLandmark,
                    v76);
                }
                vis_info_t::IsInPVS(v74, v75, v72, v73);
LABEL_100:
                v77 = m_pInfo->m_VisInfo.m_uVisBitsBufSize;
                v87.m_szFile = "../../public/scenesystem/iscenesystem.h";
                v87.m_nLine = 265;
                v87.m_szFunction = "IsInPVS";
                LoggingSystem_Log(
                  *v21,
                  LoggingSeverity_t::LS_ERROR,
                  &v87,
                  "CheckOriginInPVS:  cluster would read past end of pvs data (cluster %d, offset %u:%u)\n",
                  m_nClusterForLandmark,
                  v82,
                  v77);
LABEL_91:
                vis_info_t::IsInPVS(v60, v61, v58, v59);
                v62 = clientPos;
                v64 = v63;
                for ( m = 0; v62 > m; ++m )
                {
                  v66 = *(&clientPos + 1) + 24 * m;
                  v56 = (*(v66 + 20) & 0xC0000000) == 0;
                  *v66 = 0;
                  if ( v56 )
                    CUtlMemory<CUtlStringToken,int>::Purge((v66 + 8));
                }
                CUtlVectorBase<CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>,CUtlMemory<CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>,int>>::~CUtlVectorBase(&visited->m_Buckets);
                Unwind_Resume(v64, v69, v67, v68, v70, v71, v78);
              }
              if ( ((1 << v18) & v20[v18 >> 5]) != 0 )
                return 1;
            }
          }
        }
      }
      return (*(*v6 + 96LL))(v6, this->m_PVSInfo.m_nHeadNode, &m_pInfo->m_VisInfo);
    }
  }
}


// CNetworkTransmitComponent::SetTransmitState  (line 646, @0x0000000001eb9e40, libserver.so)  // inlines: ClearTransmitState
// callers: CEnvClock::UpdateTransmitState, CEnvCombinedLightProbeVolume::UpdateTransmitState, CEnvCubemap::UpdateTransmitState, CEnvLightProbeVolume::UpdateTransmitState, CEnvSky::UpdateTransmitState, CTonemapController2::UpdateTransmitState, CFogController::UpdateTransmitState, CLightEntity::UpdateTransmitState, CBaseEntity::UpdateTransmitState, CInfoParticleTarget::UpdateTransmitState, CInfoTarget::UpdateTransmitState, CPointCamera::UpdateTransmitState (14 total)
int __fastcall CNetworkTransmitComponent::SetTransmitState(CNetworkTransmitComponent *const this, int nFlag)
{
  int result; // eax

  result = nFlag | this->m_nStateFlags & 0xFFFFFFE3;
  this->m_nStateFlags = result;
  return result;
}


// CNetworkTransmitComponent::GetTransmitState  (line 655, @0x0000000001eb9e60, libserver.so)
// callers: CBaseEntity::GetTransmitState
int __fastcall CNetworkTransmitComponent::GetTransmitState(const CNetworkTransmitComponent *const this)
{
  return this->m_nStateFlags;
}


// CNetworkTransmitComponent::DispatchUpdateTransmitState  (line 660, @0x0000000001eb9e70, libserver.so)
// callers: CBaseEntity::DispatchUpdateTransmitState
// globals: g_nInsideDispatchUpdateTransmitState
int __fastcall CNetworkTransmitComponent::DispatchUpdateTransmitState(
        CNetworkTransmitComponent *const this,
        CBaseEntity *pBaseEntity)
{
  int result; // eax

  if ( this->m_nTransmitStateOwnedCounter != 0 )
    return this->m_nStateFlags;
  ++g_nInsideDispatchUpdateTransmitState;
  result = (*(pBaseEntity->_vptr_IHandleEntity + 64))(pBaseEntity);
  --g_nInsideDispatchUpdateTransmitState;
  return result;
}


// CNetworkTransmitComponent::IsInsideDispatchUpdateTransmitState  (line 672, @0x0000000001eb9ea0, libserver.so)
// globals: g_nInsideDispatchUpdateTransmitState
bool __fastcall CNetworkTransmitComponent::IsInsideDispatchUpdateTransmitState(
        const CNetworkTransmitComponent *const this)
{
  return g_nInsideDispatchUpdateTransmitState > 0;
}


// CNetworkTransmitComponent::IncrementTransmitStateOwnedCounter  (line 679, @0x0000000001eb9ec0, libserver.so)
// callers: CGameSceneNode::ForceParentToBeNetworked, CGameSceneNode::StartHierarchicalAttachment, CRopeKeyframe::SetAttachmentPoint
void __fastcall CNetworkTransmitComponent::IncrementTransmitStateOwnedCounter(CNetworkTransmitComponent *const this)
{
  ++this->m_nTransmitStateOwnedCounter;
}


// CNetworkTransmitComponent::DecrementTransmitStateOwnedCounter  (line 685, @0x0000000001eb9ed0, libserver.so)
// callers: CGameSceneNode::ForceParentToBeNetworked, CGameSceneNode::EndHierarchicalAttachment, CRopeKeyframe::SetAttachmentPoint
void __fastcall CNetworkTransmitComponent::DecrementTransmitStateOwnedCounter(CNetworkTransmitComponent *const this)
{
  --this->m_nTransmitStateOwnedCounter;
}


// CNetworkTransmitComponent::CalcPhysicalSpawnGroupHandle  (line 691, @0x0000000001ebd0c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetSpawnGroupHandle, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: UTIL_FindSpawnGroupsAbsBoxTouches, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Find, CBodyComponent::GetRenderBoundsWorldSpace, CUtlMemory<unsigned int, int>::Purge, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNetworkTransmitComponent::IsInPVS, CBaseEntity::GetPhysicalSpawnGroupHandle
void __fastcall CNetworkTransmitComponent::CalcPhysicalSpawnGroupHandle(CNetworkTransmitComponent *const this)
{
  uint32 m_nStateFlags; // eax
  CBaseEntity *m_pOuter; // rax
  CCollisionProperty *m_pCollision; // rdi
  SpawnGroupHandle_t m_PhysicalSpawnGroupHandle; // r15d
  CEntityIdentity *m_pEntity; // r12
  SpawnGroupHandle_t m_hSpawnGroup; // edx
  int v8; // eax
  SpawnGroupHandle_t prev; // [rsp+8h] [rbp-78h] BYREF
  unsigned int src; // [rsp+Ch] [rbp-74h] BYREF
  Vector vecWorldMins; // [rsp+10h] [rbp-70h] BYREF
  Vector vecWorldMaxs; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > list; // [rsp+30h] [rbp-50h] BYREF

  m_nStateFlags = this->m_nStateFlags;
  if ( (m_nStateFlags & 0x40) == 0 )
    return;
  this->m_nStateFlags = m_nStateFlags & 0xFFFFFFBF;
  m_pOuter = this->m_pOuter;
  if ( m_pOuter != 0 )
  {
    m_pCollision = m_pOuter->m_pCollision;
    if ( m_pCollision == 0 )
      return;
    (*(m_pCollision->_vptr_ICollideable + 10))(m_pCollision, &vecWorldMins, &vecWorldMaxs);
  }
  else
  {
    CBodyComponent::GetRenderBoundsWorldSpace(0x38004000000000LL, &vecWorldMins, &vecWorldMaxs);
  }
  m_PhysicalSpawnGroupHandle = this->m_PhysicalSpawnGroupHandle;
  list.m_Size = 0;
  list.m_Memory.m_pMemory = 0;
  list.m_Memory.m_nAllocationCount = 0;
  prev = m_PhysicalSpawnGroupHandle;
  list.m_Memory.m_nGrowSize = 0;
  UTIL_FindSpawnGroupsAbsBoxTouches(&vecWorldMins, &vecWorldMaxs, &list);
  if ( list.m_Size > 0 && CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::Find(&list, &prev) == -1 )
  {
    if ( m_PhysicalSpawnGroupHandle == 0 )
    {
      m_pEntity = this->m_pOuter->m_pEntity;
      if ( m_pEntity != 0 )
      {
        src = m_pEntity->m_hSpawnGroup != -1;
        if ( CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::Find(&list, &src) != 0 )
        {
          m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
LABEL_16:
          this->m_PhysicalSpawnGroupHandle = m_hSpawnGroup;
          goto LABEL_7;
        }
      }
      else
      {
        src = 1;
        v8 = CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::Find(&list, &src);
        m_hSpawnGroup = 0;
        if ( v8 != 0 )
          goto LABEL_16;
      }
    }
    this->m_PhysicalSpawnGroupHandle = *list.m_Memory.m_pMemory;
  }
LABEL_7:
  list.m_Size = 0;
  if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&list.m_Memory);
    if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&list.m_Memory);
  }
}


// CNetworkTransmitComponent::AddChangeAccessorPath  (line 750, @0x0000000001ebd270, libserver.so)  // inlines: AddChangeAccessorPath, AddToTail, AddToTailGetPtr, AlignedByteArrayExplicit_t, AlignedByteArray_t, Base, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ChangeAccessorFieldPathIndexInfo_t, ChangeAccessorFieldPathIndex_t, CopyConstruct<const OffsetIgnore_t*>, Element, EnsureCapacity, FindChangeAccessorPath, GetChangeAccessorFieldPathIndexInfo, GetNetworkSerializer, GrowMemory, IgnoreCache_t, LeafCodeInfo_t, Purge, V_memset, memcpy, memset, operator[], ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: operator new, Plat_IsInDebugSessionRaw, CUtlMemory<const OffsetIgnore_t*, int>::Grow, memcpy, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlMemory<const OffsetIgnore_t*, int>::Purge, CUtlLeanVectorFixedGrowableBase<unsigned int, 3u, short int>::Purge, operator delete, _Unwind_Resume
// callers: CBaseEntity::AddChangeAccessorPath
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
ChangeAccessorFieldPathIndex_t __fastcall CNetworkTransmitComponent::AddChangeAccessorPath(
        CNetworkTransmitComponent *const this,
        CEntityInstance *pInstance,
        const CFieldPath *const path)
{
  ChangeAccessorFieldPathIndexInfo_t *m_pChangeChangeAccessorFieldPathIndexInfo; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t v7; // r15d
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::IndexType_t m_nAllocated; // dx
  __int64 i; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t *m_pElements; // rdi
  ChangeAccessorFieldPathIndex_t result; // ax
  __int64 v12; // rax
  __int64 m_nCount; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rsi
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::IndexType_t v16; // ax
  int v17; // ecx
  int v18; // ebx
  int v19; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t *v20; // rdx
  __int64 m_Size; // rbx
  int v22; // edx
  ChangeAccessorFieldPathIndex_t v23; // r12
  const OffsetIgnore_t **v24; // rdx
  ChangeAccessorFieldPathIndexInfo_t *v25; // rax
  const OffsetIgnore_t **p_m_FixedMemory; // r15
  ChangeAccessorFieldPathIndex_t *m_FieldPaths; // rax
  ChangeAccessorFieldPathIndex_t *v28; // rdx
  int v29; // eax
  void *v30; // rcx
  unsigned __int64 v31; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  int v37; // ebx
  int v38; // edx
  int v39; // ecx
  int v40; // esi
  int v41; // r8d
  int v42; // r9d
  LeafCodeInfo_t v43; // [rsp+0h] [rbp-50h] BYREF

  m_pChangeChangeAccessorFieldPathIndexInfo = this->m_pChangeChangeAccessorFieldPathIndexInfo;
  if ( m_pChangeChangeAccessorFieldPathIndexInfo == 0 )
  {
    v25 = operator new(0xF0u);
    p_m_FixedMemory = &v25->m_OffsetsToIgnoreForPaths.m_Memory.m_FixedMemory;
    m_pChangeChangeAccessorFieldPathIndexInfo = v25;
    v25->m_ChangeAccessorFieldPathIdList.m_nCount = 0;
    v25->m_ChangeAccessorFieldPathIdList.m_nAllocated = 3;
    v25->m_pBaseOffsetToIgnore = 0;
    v25->m_OffsetsToIgnoreForPaths.m_Size = 0;
    v25->m_OffsetsToIgnoreForPaths.m_Memory.m_pMemory = 0;
    v25->m_OffsetsToIgnoreForPaths.m_Memory.m_nAllocationCount = 4;
    v25->m_OffsetsToIgnoreForPaths.m_Memory.m_nGrowSize = 0x80000000;
    if ( ((v25 + 48) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
      __debugbreak();
    m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_pMemory = p_m_FixedMemory;
    m_FieldPaths = m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_FieldPaths;
    do
    {
      ++m_FieldPaths;
      m_FieldPaths[-1].m_Value = -1;
    }
    while ( m_FieldPaths != &m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_nCount );
    *m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_Offsets = -1;
    m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_nCount = 0;
    m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_nFirstElement = 0;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_Offsets[4] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_Offsets[8] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_Offsets[12] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_FieldPaths[0].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_FieldPaths[4].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_FieldPaths[8].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_FieldPaths[12].m_Value = -1;
    v28 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_FieldPaths;
    do
    {
      ++v28;
      v28[-1].m_Value = -1;
    }
    while ( v28 != &m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_nCount );
    m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_nCount = 0;
    m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_nFirstElement = 0;
    *m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_Offsets = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_Offsets[4] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_Offsets[8] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_Offsets[12] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_FieldPaths[0].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_FieldPaths[4].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_FieldPaths[8].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_FieldPaths[12].m_Value = -1;
    this->m_pChangeChangeAccessorFieldPathIndexInfo = m_pChangeChangeAccessorFieldPathIndexInfo;
  }
  v7 = (*(*g_pFlattenedSerializers + 360LL))(g_pFlattenedSerializers, path);
  if ( m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount > 0 )
  {
    m_nAllocated = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocated;
    for ( i = 0; m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount > i; ++i )
    {
      result.m_Value = i;
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocAllocated + 1);
        if ( m_nAllocated > 3 )
          m_pElements = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_pElements;
        if ( v7 == m_pElements[i] )
          return result;
      }
      else if ( v7 == *(4 * i) )
      {
        return result;
      }
    }
  }
  v12 = (*(*g_pFlattenedSerializers + 288LL))(
          g_pFlattenedSerializers,
          pInstance->m_pEntity->m_pClass->m_hNetworkSerializer,
          path);
  m_nCount = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount;
  v14 = v12;
  if ( m_nCount == 0x7FFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v43.m_szFile = "../../public/tier1/utlleanvector.h";
      v43.m_szFunction = "AddToTailGetPtr";
      v43.m_nLine = 557;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v43,
        "%s allocation count overflow",
        "AddToTailGetPtr");
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v35, v36, v33, v34) != 0 )
      loc_0 = -559038737;
    v37 = Plat_ExitProcess(1);
    if ( (m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<OffsetIgnore_t const*,int>::Purge(&m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory);
    CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)3,short>::Purge(&m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList);
    operator delete(m_pChangeChangeAccessorFieldPathIndexInfo);
    Unwind_Resume(v37, v40, v38, v39, v41, v42, v43.m_szFile);
  }
  v15 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocated;
  v16 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount;
  v17 = m_nCount + 1;
  if ( v17 > v15 )
  {
    LOWORD(v18) = m_nCount + 1;
    if ( v17 > 3 )
    {
      v18 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocated;
      while ( 1 )
      {
        v19 = v18;
        if ( v17 <= v18 )
          break;
        if ( v18 <= 16382 )
        {
          v29 = 2 * v18;
          v18 = 8;
          if ( 2 * v19 > 7 )
            v18 = v29;
        }
        else
        {
          v18 = 0x7FFF;
        }
      }
    }
    if ( v15 > 3 )
    {
      m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                                                                                 g_pMemAlloc,
                                                                                                 m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_pElements,
                                                                                                 4LL * v18);
      v16 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount;
    }
    else
    {
      v16 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount;
      if ( v18 > 3 )
      {
        v30 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v18);
        v31 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocated;
        if ( v31 != 0 )
        {
          v32 = (&m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocAllocated + 1);
          if ( v31 > 3 )
            v32 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_pElements;
        }
        else
        {
          v32 = 0;
        }
        m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_pElements = memcpy(
                                                                                                   v30,
                                                                                                   v32,
                                                                                                   4LL
                                                                                                 * m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount);
        v16 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount;
      }
    }
    m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocated = v18;
    v15 = v18;
  }
  if ( v15 != 0 )
  {
    v20 = (&m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocAllocated + 1);
    if ( v15 > 3 )
      v20 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_pElements;
  }
  else
  {
    v20 = 0;
  }
  m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount = v16 + 1;
  v20[m_nCount] = v7;
  m_Size = m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Size;
  v22 = m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Size;
  v23.m_Value = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount - 1;
  if ( m_Size == m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<OffsetIgnore_t const*,int>::Grow(
      &m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory,
      1);
    v22 = m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Size;
  }
  m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Size = v22 + 1;
  v24 = &m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_pMemory[m_Size];
  if ( v24 != 0 )
    *v24 = v14;
  return v23;
}


// CNetworkTransmitComponent::ValidateChangeOffset  (line 767, @0x0000000001ebf9f0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, Base, CAutoLockT, CFieldPath, CFlattenedSerializerSpewFunc_Log, CThreadFastMutex, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlRBTree, CUtlVectorBase, CUtlVectorFixedGrowable, ChangeAccessorFieldPathIndexInfo_t, ChangeAccessorFieldPathIndex_t, Clear, Element, Find, FindInsertionPosition, GetChangeAccessorFieldPathIndexInfo, GetPathData, IgnoreCache_t, Insert, InsertAt, IsUsingFixedPaths, LeafCodeInfo_t, LeftChild, Lock, Path_RemoveAll, Path_SetCount, Purge, ResetDbgInfo, RightChild, SetPtr, String, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, V_memcpy, V_memset, memcpy, memset, operator!=, operator=, operator[], ~CAutoLockT, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlString
// calls: CFieldPath::ToString, CUtlString::FreeMemoryBlock, CUtlString::Clear, __memcpy_chk, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), CUtlRBTree<FlattenedSerializerHandle_t__*, short unsigned int, bool (*)(FlattenedSerializerHandle_t__* const&, FlattenedSerializerHandle_t__* const&), CUtlMemory<UtlRBTreeNode_t<FlattenedSerializerHandle_t__*, short unsigned int>, short unsigned int> >::NewNode (24 total)
// callers: CNetworkTransmitComponent::StateChanged
// strings: "SV:  Couldn't resolve offset %d in %s at path (%d = '%s')\n", "SV:     %d:  '%s'\n", "SV:  All %d paths:\n", "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)" (8 total)
// globals: `guard variable for'CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed, `guard variable for'CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex, CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex, CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed, CDefOps<FlattenedSerializerHandle_t__ *>::LessFunc(FlattenedSerializerHandle_t__ * const&,FlattenedSerializerHandle_t__ * const&), __dso_handle, CUtlRBTree<FlattenedSerializerHandle_t__ *,ushort,bool (*)(FlattenedSerializerHandle_t__ * const&,FlattenedSerializerHandle_t__ * const&),CUtlMemory<UtlRBTreeNo
bool __fastcall CNetworkTransmitComponent::ValidateChangeOffset(
        CNetworkTransmitComponent *const this,
        FlattenedSerializerHandle_t handle,
        const char *pClassName,
        VarChangeInfo_t *const change,
        CUtlString *const resolvedPath)
{
  ChangeAccessorFieldPathIndexInfo_t *m_pChangeChangeAccessorFieldPathIndexInfo; // r12
  char *vptr_IFlattenedSerializerSpewFunc; // r12
  __int64 m_Value; // rax
  unsigned __int64 m_nAllocated; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t *m_pElements; // rdx
  char *m_pString; // rbx
  const char *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r13
  int v18; // ebx
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  const char *v25; // rax
  signed __int64 CurrentId; // rsi
  __int64 m_Root; // rbx
  UtlRBTreeNode_t<FlattenedSerializerHandle_t__*,short unsigned int> *m_pMemory; // rax
  __int64 v29; // rbx
  unsigned __int16 v30; // r13
  unsigned __int16 m_Left; // ax
  bool v32; // bl
  unsigned __int16 v33; // ax
  ChangeAccessorFieldPathIndexInfo_t *v34; // rax
  const OffsetIgnore_t **p_m_FixedMemory; // r15
  ChangeAccessorFieldPathIndex_t *m_FieldPaths; // rax
  ChangeAccessorFieldPathIndex_t *v37; // rax
  char v39; // [rsp+1Fh] [rbp-A1h]
  FlattenedSerializerHandle_t handlea; // [rsp+28h] [rbp-98h] BYREF
  CFieldPath path; // [rsp+30h] [rbp-90h] BYREF
  CUtlString v42[2]; // [rsp+50h] [rbp-70h] BYREF
  int16 v43; // [rsp+60h] [rbp-60h]
  char v44; // [rsp+62h] [rbp-5Eh]
  CFlattenedSerializerSpewFunc_Log spewMsg; // [rsp+70h] [rbp-50h] BYREF
  const char *v46; // [rsp+80h] [rbp-40h]

  handlea = handle;
  m_pChangeChangeAccessorFieldPathIndexInfo = this->m_pChangeChangeAccessorFieldPathIndexInfo;
  if ( m_pChangeChangeAccessorFieldPathIndexInfo == 0 )
  {
    v34 = operator new(0xF0u);
    p_m_FixedMemory = &v34->m_OffsetsToIgnoreForPaths.m_Memory.m_FixedMemory;
    m_pChangeChangeAccessorFieldPathIndexInfo = v34;
    v34->m_ChangeAccessorFieldPathIdList.m_nCount = 0;
    v34->m_ChangeAccessorFieldPathIdList.m_nAllocated = 3;
    v34->m_pBaseOffsetToIgnore = 0;
    v34->m_OffsetsToIgnoreForPaths.m_Size = 0;
    v34->m_OffsetsToIgnoreForPaths.m_Memory.m_pMemory = 0;
    v34->m_OffsetsToIgnoreForPaths.m_Memory.m_nAllocationCount = 4;
    v34->m_OffsetsToIgnoreForPaths.m_Memory.m_nGrowSize = 0x80000000;
    if ( ((v34 + 48) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
      __debugbreak();
    m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_pMemory = p_m_FixedMemory;
    m_FieldPaths = m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_FieldPaths;
    do
    {
      ++m_FieldPaths;
      m_FieldPaths[-1].m_Value = -1;
    }
    while ( m_FieldPaths != &m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_nCount );
    m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_nCount = 0;
    m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_nFirstElement = 0;
    *m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_Offsets = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_Offsets[4] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_Offsets[8] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_Offsets[12] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_FieldPaths[0].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_FieldPaths[4].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_FieldPaths[8].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore.m_FieldPaths[12].m_Value = -1;
    v37 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_FieldPaths;
    do
    {
      ++v37;
      v37[-1].m_Value = -1;
    }
    while ( v37 != &m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_nCount );
    m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_nCount = 0;
    m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_nFirstElement = 0;
    *m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_Offsets = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_Offsets[4] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_Offsets[8] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_Offsets[12] = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_FieldPaths[0].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_FieldPaths[4].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_FieldPaths[8].m_Value = -1;
    *&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore.m_FieldPaths[12].m_Value = -1;
    this->m_pChangeChangeAccessorFieldPathIndexInfo = m_pChangeChangeAccessorFieldPathIndexInfo;
  }
  path.m_bUsingExternalPaths = 0;
  path.m_nCount = 0;
  v39 = (*(*g_pFlattenedSerializers + 280LL))(
          g_pFlattenedSerializers,
          handlea,
          m_pChangeChangeAccessorFieldPathIndexInfo,
          change,
          &path);
  if ( v39 != 0 )
  {
    CFieldPath::ToString(&path);
    vptr_IFlattenedSerializerSpewFunc = spewMsg._vptr_IFlattenedSerializerSpewFunc;
    if ( resolvedPath->m_pString != 0 )
      CUtlString::FreeMemoryBlock(resolvedPath);
    resolvedPath->m_pString = vptr_IFlattenedSerializerSpewFunc;
    return v39;
  }
  CUtlString::Clear(resolvedPath);
  m_Value = change->m_nRootPathIndex.m_Value;
  if ( m_Value != 0xFFFF )
  {
    m_nAllocated = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocated;
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 3 )
        m_pElements = (&m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocAllocated + 1);
      else
        m_pElements = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    m_pString = v42;
    (*(*g_pFlattenedSerializers + 368LL))(v42, g_pFlattenedSerializers, m_pElements[m_Value]);
    path.m_bUsingExternalPaths = 0;
    if ( v43 <= 6 )
    {
      path.m_nCount = v43;
      if ( v43 > 0 )
      {
        if ( v44 != 0 )
          m_pString = v42[0].m_pString;
        __memcpy_chk(&path, m_pString, 2LL * v43, 24);
      }
      goto LABEL_16;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      spewMsg._vptr_IFlattenedSerializerSpewFunc = "../../public/tier2/fieldpath.h";
      v46 = "Path_SetCount";
      LODWORD(spewMsg.m_pfnLog) = 442;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &spewMsg,
        "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
        6);
    }
    goto LABEL_32;
  }
  if ( path.m_bUsingExternalPaths )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      spewMsg._vptr_IFlattenedSerializerSpewFunc = "../../public/tier2/fieldpath.h";
      v46 = "Path_RemoveAll";
      LODWORD(spewMsg.m_pfnLog) = 487;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &spewMsg,
        "Path_RemoveAll failed for read only CFieldPath");
    }
LABEL_32:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v23, v24, v21, v22) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
  }
  path.m_nCount = 0;
LABEL_16:
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    CFieldPath::ToString(&path);
    v15 = CUtlString::Get(&spewMsg);
    LoggingSystem_Log(
      LOG_SERVER,
      2,
      "SV:  Couldn't resolve offset %d in %s at path (%d = '%s')\n",
      (2 * *(change + 1)) >> 1,
      pClassName,
      change->m_nRootPathIndex.m_Value,
      v15);
    if ( spewMsg._vptr_IFlattenedSerializerSpewFunc != 0 )
      CUtlString::FreeMemoryBlock(&spewMsg);
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    LoggingSystem_Log(
      LOG_SERVER,
      2,
      "SV:  All %d paths:\n",
      m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount);
  if ( m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount > 0 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      while ( 1 )
      {
        v20 = m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocated;
        if ( v20 != 0 )
          v19 = v20 > 3
              ? m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_pElements
              : (&m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocAllocated + 1);
        else
          v19 = 0;
        (*(*g_pFlattenedSerializers + 368LL))(&spewMsg, g_pFlattenedSerializers, v19[v17]);
        if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
        {
          CFieldPath::ToString(&spewMsg);
          v25 = CUtlString::Get(v42);
          LoggingSystem_Log(LOG_SERVER, 2, "SV:     %d:  '%s'\n", v18, v25);
          if ( v42[0].m_pString != 0 )
            break;
        }
        ++v18;
        ++v17;
        if ( m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount <= v18 )
          goto LABEL_39;
      }
      ++v18;
      ++v17;
      CUtlString::FreeMemoryBlock(v42);
    }
    while ( m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount > v18 );
  }
LABEL_39:
  if ( `guard variable for'CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed == 0
    && __cxa_guard_acquire(&`guard variable for'CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed) != 0 )
  {
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Root = -1;
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_NumElements = 0;
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_FirstFree = -1;
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_LastAlloc.index = -1;
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_LessFunc = CDefOps<FlattenedSerializerHandle_t__ *>::LessFunc;
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_pMemory = 0;
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_nAllocationCount = 0;
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_nGrowSize = 0;
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_pElements = 0;
    __cxa_guard_release(&`guard variable for'CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed);
    __cxa_atexit(
      CUtlRBTree<FlattenedSerializerHandle_t__ *,unsigned short,bool (*)(FlattenedSerializerHandle_t__ * const&,FlattenedSerializerHandle_t__ * const&),CUtlMemory<UtlRBTreeNode_t<FlattenedSerializerHandle_t__ *,unsigned short>,unsigned short>>::~CUtlRBTree,
      &CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed,
      &_dso_handle);
  }
  if ( `guard variable for'CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex == 0
    && __cxa_guard_acquire(&`guard variable for'CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex) != 0 )
  {
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex.m_ownerID = 0;
    CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex.m_depth = 0;
    __cxa_guard_release(&`guard variable for'CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex);
  }
  CurrentId = ThreadGetCurrentId(v16);
  if ( CurrentId == CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex.m_ownerID
    || _InterlockedCompareExchange64(
         &CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex,
         CurrentId,
         0) == 0 )
  {
    ++CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex.m_depth;
  }
  else
  {
    _mm_pause();
    CThreadFastMutex::Lock(
      &CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex,
      CurrentId,
      0);
  }
  m_Root = CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Root;
  if ( CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Root == 0xFFFF )
    goto LABEL_58;
  m_pMemory = CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_pMemory;
  do
  {
    while ( 1 )
    {
      v29 = m_Root;
      if ( !CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_LessFunc(
              &handlea,
              &m_pMemory[v29].m_Data) )
        break;
      m_pMemory = CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_pMemory;
      m_Root = CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_pMemory[v29].m_Left;
      if ( m_Root == 0xFFFF )
        goto LABEL_50;
    }
    if ( !CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_LessFunc(
            &CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_pMemory[v29].m_Data,
            &handlea) )
      goto LABEL_60;
    m_pMemory = CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_pMemory;
    m_Root = CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_pMemory[v29].m_Right;
  }
  while ( m_Root != 0xFFFF );
LABEL_50:
  v30 = CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Root;
  if ( CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Root == 0xFFFF )
  {
LABEL_58:
    v30 = -1;
    v32 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_LessFunc(
             &handlea,
             &CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_pMemory[v30].m_Data) )
      {
        m_Left = CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_pMemory[v30].m_Left;
        v32 = 1;
      }
      else
      {
        m_Left = CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_Elements.m_pMemory[v30].m_Right;
        v32 = 0;
      }
      if ( m_Left == 0xFFFF )
        break;
      v30 = m_Left;
    }
  }
  v33 = CUtlRBTree<FlattenedSerializerHandle_t__ *,unsigned short,bool (*)(FlattenedSerializerHandle_t__ * const&,FlattenedSerializerHandle_t__ * const&),CUtlMemory<UtlRBTreeNode_t<FlattenedSerializerHandle_t__ *,unsigned short>,unsigned short>>::NewNode(
          &CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed,
          &handlea);
  CUtlRBTree<FlattenedSerializerHandle_t__ *,unsigned short,bool (*)(FlattenedSerializerHandle_t__ * const&,FlattenedSerializerHandle_t__ * const&),CUtlMemory<UtlRBTreeNode_t<FlattenedSerializerHandle_t__ *,unsigned short>,unsigned short>>::LinkToParent(
    &CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed,
    v33,
    v30,
    v32);
  spewMsg._vptr_IFlattenedSerializerSpewFunc = off_3FB41D0;
  ++CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::spewed.m_NumElements;
  spewMsg.m_pfnLog = 0;
  (*(*g_pFlattenedSerializers + 240LL))(g_pFlattenedSerializers, handlea, &spewMsg, 0, 0);
LABEL_60:
  if ( --CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex.m_depth == 0 )
    ThreadInterlockedExchange64(
      &CNetworkTransmitComponent::ValidateChangeOffset(FlattenedSerializerHandle_t__ *,char const*,VarChangeInfo_t &,CUtlString &)::s_spewMutex,
      0);
  return v39;
}


// CNetworkTransmitComponent::LatchSettings  (line 847, @0x0000000001eb9ee0, libserver.so)  // inlines: GetBool, GetInt
// calls: __cxa_guard_acquire, ConVarRef::IsValid, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CSource2Server::GameFrame
// strings: "sv_networkvar_perfieldtracking", "sv_usenetworkvars", "sv_networkvar_validate"
// globals: `guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_usenetworkvars, `guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_perfieldtracking, `guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_validate, CNetworkTransmitComponent::LatchSettings(void)::sv_usenetworkvars, CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_perfieldtracking, CNetworkTransmitComponent::s_bUseNetworkVars, CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_validate, CNetworkTransmitComponent::s_bNetworkVarPerFieldTracking (10 total)
void __cdecl CNetworkTransmitComponent::LatchSettings()
{
  bool IsValid; // al
  bool v1; // dl
  bool v2; // al
  bool v3; // dl
  bool v4; // al
  bool v5; // dl

  if ( `guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_usenetworkvars == 0
    && __cxa_guard_acquire(&`guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_usenetworkvars) != 0 )
  {
    ConVarRef::ConVarRef(&CNetworkTransmitComponent::LatchSettings(void)::sv_usenetworkvars, "sv_usenetworkvars");
    __cxa_guard_release(&`guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_usenetworkvars);
  }
  if ( `guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_perfieldtracking == 0
    && __cxa_guard_acquire(&`guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_perfieldtracking) != 0 )
  {
    ConVarRef::ConVarRef(
      &CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_perfieldtracking,
      "sv_networkvar_perfieldtracking");
    __cxa_guard_release(&`guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_perfieldtracking);
  }
  if ( `guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_validate == 0
    && __cxa_guard_acquire(&`guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_validate) != 0 )
  {
    ConVarRef::ConVarRef(
      &CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_validate,
      "sv_networkvar_validate");
    __cxa_guard_release(&`guard variable for'CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_validate);
  }
  IsValid = ConVarRef::IsValid(&CNetworkTransmitComponent::LatchSettings(void)::sv_usenetworkvars);
  v1 = 0;
  if ( IsValid )
    v1 = CNetworkTransmitComponent::LatchSettings(void)::sv_usenetworkvars.m_pConVarState->m_Value.m_nValue != 0;
  CNetworkTransmitComponent::s_bUseNetworkVars = v1;
  v2 = ConVarRef::IsValid(&CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_perfieldtracking);
  v3 = 0;
  if ( v2 )
    v3 = CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_perfieldtracking.m_pConVarState->m_Value.m_nValue != 0;
  CNetworkTransmitComponent::s_bNetworkVarPerFieldTracking = v3;
  v4 = ConVarRef::IsValid(&CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_validate);
  v5 = 0;
  if ( v4 )
    v5 = CNetworkTransmitComponent::LatchSettings(void)::sv_networkvar_validate.m_pConVarState->m_Value.m_nValue != 0;
  CNetworkTransmitComponent::s_bNetworkVarValidate = v5;
  CNetworkTransmitComponent::s_nWatchTransmitEntity = sv_watchtransmit.m_pParent->m_Value.m_nValue;
}


// ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::Lookup  (line 881, @0x0000000001eba0a0, libserver.so)  // inlines: FirstBitInWordThatIsKnownToBeNonZero, _mm_and_si128, _mm_cmpeq_epi16, _mm_movemask_epi8, _mm_set1_epi16, _mm_set_epi16
// callers: CNetworkTransmitComponent::StateChanged
bool __fastcall ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::Lookup(
        const ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t *const this,
        uint32 unOffset,
        ChangeAccessorFieldPathIndex_t nFieldPathIndex)
{
  int m_nCount; // eax
  __int64 v4; // r8
  int v5; // r8d
  int v6; // eax
  const ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t *v7; // r8
  __m128i v8; // xmm2
  __m128i v9; // xmm3
  const __m128i *v10; // rax
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  ChangeAccessorFieldPathIndex_t *m_FieldPaths; // rcx
  int i; // esi
  signed int v15; // edx

  m_nCount = this->m_nCount;
  v4 = 32;
  if ( m_nCount <= 0xF )
  {
    v5 = m_nCount + 14;
    v6 = m_nCount + 7;
    if ( v6 >= 0 )
      v5 = v6;
    v4 = 16LL * (v5 >> 3);
  }
  v7 = (this + v4);
  v8 = _mm_cvtsi32_si128(unOffset);
  v9 = _mm_cvtsi32_si128(nFieldPathIndex.m_Value);
  v10 = this;
  v11 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v8, v8), 0);
  v12 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v9, v9), 0);
  m_FieldPaths = this->m_FieldPaths;
  if ( this >= v7 )
    return 0;
  for ( i = 0; ; i += 8 )
  {
    v15 = _mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi16(_mm_load_si128(m_FieldPaths), v12), _mm_cmpeq_epi16(_mm_load_si128(v10), v11)));
    if ( v15 != 0 )
      break;
    ++v10;
    m_FieldPaths += 8;
    if ( v7 <= v10 )
      return 0;
  }
  _BitScanForward(&v15, v15);
  this->m_nFirstElement = i + (v15 >> 1);
  return 1;
}


// ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::Cache  (line 930, @0x0000000001eba150, libserver.so)
void __fastcall ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::Cache(
        ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t *const this,
        uint32 unOffset,
        ChangeAccessorFieldPathIndex_t nFieldPathIndex)
{
  int m_nCount; // ecx
  int v4; // ecx
  int v5; // eax
  ChangeAccessorFieldPathIndex_t *v6; // rax
  ChangeAccessorFieldPathIndex_t *v7; // rax

  m_nCount = this->m_nCount;
  if ( m_nCount <= 0xF )
  {
    v7 = &this->m_Offsets[m_nCount];
    this->m_nFirstElement = m_nCount;
    this->m_nCount = m_nCount + 1;
    v7->m_Value = unOffset;
    v7[16].m_Value = nFieldPathIndex.m_Value;
  }
  else
  {
    v4 = m_nCount - 1;
    v5 = this->m_nFirstElement - 1;
    if ( v5 < 0 )
      v5 = v4;
    this->m_nFirstElement = v5;
    v6 = &this->m_Offsets[v5];
    v6->m_Value = unOffset;
    v6[16].m_Value = nFieldPathIndex.m_Value;
  }
}


// CNetworkTransmitComponent::StateChanged  (line 953, @0x0000000001ec0310, libserver.so)  // inlines: Base, CUtlString, Cache, DescribeVarChangeInfo, Element, GetClassNameAsCStr, GetEHandle, GetEntryIndex, GetNetworkSerializer, IsNetworked, LookupOffsetsToIgnoreForPath, SetChangeInfo, SetChangeInfoSerialNumber, ShouldIgnore, String, VarChangeInfo_t, operator!=, operator==, operator[], ~CUtlString
// calls: CEntityInstance::GetEntityIndex, CNetworkTransmitComponent::GetChangeAccessorFieldPathIndexInfo, CUtlString::operator+=, CUtlString::Format, CFieldPath::ToString, CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CUtlString::FreeMemoryBlock, CNetworkTransmitComponent::ValidateChangeOffset, LoggingSystem_IsChannelEnabled, ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::Lookup, LoggingSystem_Log (15 total)
// callers: CBaseEntity::NetworkStateChanged, CBaseModelEntity::CBaseModelEntity, CBaseAnimating::CBaseAnimating, CBreakableProp::CBreakableProp, CRagdollProp::CRagdollProp, CPropVehicleDriveable::CPropVehicleDriveable
// strings: "changed ", "%u[%d]", " path(%u = '%s/')", " (resolved to '%s')", "SV:  %d/%s ignored %d\n", "SV:  %d/%s %s\n"
// globals: CNetworkTransmitComponent::s_bUseNetworkVars, CNetworkTransmitComponent::s_bNetworkVarPerFieldTracking, CNetworkTransmitComponent::s_nWatchTransmitEntity, CNetworkTransmitComponent::s_bNetworkVarValidate
void __fastcall CNetworkTransmitComponent::StateChanged(
        CNetworkTransmitComponent *const this,
        CEntityInstance *pInstance,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  CEntityIdentity *m_pEntity; // rdx
  uint32 m_flags; // eax
  CEventRegister *m_pTimerEvent; // rax
  uint32 m_nStateFlags; // eax
  int v12; // r13d
  bool v13; // r14
  CEntityIndex v14; // eax
  ChangeAccessorFieldPathIndexInfo_t *v15; // rax
  int16 v16; // cx
  ChangeAccessorFieldPathIndexInfo_t *v17; // r13
  int16 m_Value; // r8
  const OffsetIgnore_t *m_pBaseOffsetToIgnore; // rdi
  ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t *p_m_ShouldIgnore; // rax
  uint32 v21; // r10d
  CSharedEdictChangeInfo *v22; // rax
  CSharedEdictChangeInfo *v23; // roff
  uint32 v24; // ecx
  unsigned __int16 m_nChangeInfos; // dx
  VarChangeInfo_t v26; // rcx
  char *v27; // r15
  unsigned __int64 m_nAllocated; // rax
  __int64 v29; // rax
  const char *v30; // rax
  CEntityClass *m_pClass; // rax
  FlattenedSerializerHandle_t m_hNetworkSerializer; // rsi
  const char *v33; // rax
  ChangeAccessorFieldPathIndex_t v34; // dx
  CEntityIdentity *v35; // rax
  const char *m_pAsString; // r13
  CEntityIndex v37; // eax
  CEntityClass *v38; // rax
  FlattenedSerializerHandle_t v39; // rsi
  CUtlHashtable<short unsigned int,empty_t,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,empty_t>,int> >::handle_t v40; // eax
  char v41; // di
  int m_nCount; // esi
  __int64 v43; // rdx
  int v44; // esi
  bool v45; // al
  char *v46; // rax
  char *v47; // r9
  __int64 v48; // rdi
  __int64 v49; // rax
  unsigned __int16 v50; // dx
  const char *v51; // r13
  const char *v52; // r15
  CEntityIdentity *v53; // rax
  CEntityIndex v54; // eax
  CNetworkTransmitComponent *v55; // [rsp+8h] [rbp-1C8h]
  int16 nFieldPathIndexb; // [rsp+10h] [rbp-1C0h]
  int16 nFieldPathIndex; // [rsp+10h] [rbp-1C0h]
  int16 nFieldPathIndexa; // [rsp+10h] [rbp-1C0h]
  int16 nFieldPathIndexc; // [rsp+10h] [rbp-1C0h]
  __int16 nArrayIndexc; // [rsp+18h] [rbp-1B8h]
  int16 nArrayIndexd; // [rsp+18h] [rbp-1B8h]
  int16 nArrayIndexa; // [rsp+18h] [rbp-1B8h]
  ChangeAccessorFieldPathIndex_t nArrayIndexb; // [rsp+18h] [rbp-1B8h]
  int16 nArrayIndexe; // [rsp+18h] [rbp-1B8h]
  VarChangeInfo_t change; // [rsp+20h] [rbp-1B0h] BYREF
  CUtlString out; // [rsp+30h] [rbp-1A0h] BYREF
  CUtlString rhs; // [rsp+40h] [rbp-190h] BYREF
  CUtlString v68; // [rsp+50h] [rbp-180h] BYREF
  CUtlString resolvedPath; // [rsp+60h] [rbp-170h] BYREF
  CFmtStrN<256,false> v70; // [rsp+80h] [rbp-150h] BYREF
  unsigned __int64 v71; // [rsp+198h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  m_pEntity = pInstance->m_pEntity;
  m_flags = m_pEntity->m_flags;
  if ( (m_flags & 0x300) != 0 )
    return;
  if ( (m_flags & 0x800) != 0 )
  {
    if ( (m_flags & 0x40) == 0 )
      return;
  }
  else if ( m_pEntity->m_EHandle.m_Index == -1 || (m_pEntity->m_EHandle.m_Index & 0x7FFF) > 0x3FFF )
  {
    return;
  }
  m_pTimerEvent = this->m_pTimerEvent;
  if ( m_pTimerEvent != 0 && m_pTimerEvent->m_bRegistered )
  {
    this->m_bPendingStateChange = 1;
    return;
  }
  m_nStateFlags = this->m_nStateFlags;
  if ( (m_nStateFlags & 2) != 0 )
    return;
  if ( !CNetworkTransmitComponent::s_bUseNetworkVars || !CNetworkTransmitComponent::s_bNetworkVarPerFieldTracking )
  {
    this->m_nStateFlags = m_nStateFlags | 2;
    return;
  }
  v12 = CNetworkTransmitComponent::s_nWatchTransmitEntity;
  v13 = 0;
  if ( CNetworkTransmitComponent::s_nWatchTransmitEntity != -2 )
  {
    nFieldPathIndexb = nPathIndex.m_Value;
    nArrayIndexc = nArrayIndex;
    v14.m_Data = CEntityInstance::GetEntityIndex(pInstance).m_Data;
    nPathIndex.m_Value = nFieldPathIndexb;
    LOWORD(nArrayIndex) = nArrayIndexc;
    v13 = v12 == v14.m_Data;
  }
  nFieldPathIndex = nPathIndex.m_Value;
  nArrayIndexd = nArrayIndex;
  v55 = &this->m_pChangeChangeAccessorFieldPathIndexInfo;
  v15 = CNetworkTransmitComponent::GetChangeAccessorFieldPathIndexInfo(&this->m_pChangeChangeAccessorFieldPathIndexInfo);
  v16 = nArrayIndexd;
  v17 = v15;
  m_Value = nFieldPathIndex;
  if ( nLocalOffset > 0xFFFF )
    goto LABEL_16;
  v34.m_Value = nFieldPathIndex;
  nArrayIndexb.m_Value = nFieldPathIndex;
  nFieldPathIndexa = v16;
  if ( ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::Lookup(&v15->m_ShouldIgnore, nLocalOffset, v34) )
    goto LABEL_49;
  v45 = ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::Lookup(&v17->m_ShouldNotIgnore, nLocalOffset, nArrayIndexb);
  m_Value = nArrayIndexb.m_Value;
  v16 = nFieldPathIndexa;
  if ( !v45 )
  {
LABEL_16:
    if ( m_Value == -1 )
      m_pBaseOffsetToIgnore = v17->m_pBaseOffsetToIgnore;
    else
      m_pBaseOffsetToIgnore = v17->m_OffsetsToIgnoreForPaths.m_Memory.m_pMemory[m_Value];
    if ( m_pBaseOffsetToIgnore != 0 && nLocalOffset <= m_pBaseOffsetToIgnore->m_unMaxOffset )
    {
      nFieldPathIndexc = m_Value;
      nArrayIndexe = v16;
      v40 = CUtlHashtable<unsigned short,empty_t,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,empty_t>,int>>::Find(
              &m_pBaseOffsetToIgnore->m_OffsetHashtable,
              nLocalOffset);
      v16 = nArrayIndexe;
      m_Value = nFieldPathIndexc;
      if ( v40 != -1 )
      {
        p_m_ShouldIgnore = &v17->m_ShouldIgnore;
        v41 = 1;
        goto LABEL_60;
      }
    }
    p_m_ShouldIgnore = &v17->m_ShouldNotIgnore;
    if ( nLocalOffset <= 0xFFFF )
    {
      v41 = 0;
LABEL_60:
      m_nCount = p_m_ShouldIgnore->m_nCount;
      v43 = m_nCount;
      if ( m_nCount <= 0xF )
      {
        p_m_ShouldIgnore->m_nFirstElement = m_nCount;
        p_m_ShouldIgnore->m_nCount = m_nCount + 1;
      }
      else
      {
        v44 = m_nCount - 1;
        LODWORD(v43) = p_m_ShouldIgnore->m_nFirstElement - 1;
        if ( v43 < 0 )
          LODWORD(v43) = v44;
        p_m_ShouldIgnore->m_nFirstElement = v43;
        v43 = v43;
      }
      p_m_ShouldIgnore->m_Offsets[v43] = nLocalOffset;
      p_m_ShouldIgnore->m_FieldPaths[v43].m_Value = m_Value;
      if ( v41 == 0 )
        goto LABEL_21;
LABEL_49:
      if ( v13 && LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      {
        v35 = pInstance->m_pEntity;
        m_pAsString = "";
        if ( v35->m_designerName.u.m_Id != 0 )
          m_pAsString = v35->m_designerName.u.m_pAsString;
        v37.m_Data = CEntityInstance::GetEntityIndex(pInstance).m_Data;
        LoggingSystem_Log(LOG_SERVER, 1, "SV:  %d/%s ignored %d\n", v37.m_Data, m_pAsString, nLocalOffset);
      }
      return;
    }
  }
LABEL_21:
  v21 = this->m_nStateFlags;
  v22 = g_pSharedChangeInfo;
  v23 = g_pSharedChangeInfo;
  _mm_prefetch(g_pSharedChangeInfo, 1);
  this->m_nStateFlags = v21 | 1;
  *(&change + 7) &= ~0x80u;
  change.m_nArrayIndex = v16;
  nArrayIndexa = v16;
  change.m_nRootPathIndex.m_Value = m_Value;
  v24 = nLocalOffset & 0x7FFFFFFF | *(&change + 1) & 0x80000000;
  *(&change + 1) = v24;
  if ( this->m_Accessor.m_iChangeInfoSerialNumber != v23->m_iSerialNumber )
  {
    m_nChangeInfos = v22->m_nChangeInfos;
    if ( m_nChangeInfos == 100 )
    {
LABEL_78:
      this->m_Accessor.m_iChangeInfoSerialNumber = 0;
      this->m_nStateFlags = v21 | 3;
    }
    else
    {
      this->m_Accessor.m_iChangeInfo = m_nChangeInfos;
      ++v22->m_nChangeInfos;
      this->m_Accessor.m_iChangeInfoSerialNumber = v22->m_iSerialNumber;
      v26 = change;
      v27 = v22 + 168 * this->m_Accessor.m_iChangeInfo;
      *(v27 + 42) = 1;
      *(v27 + 2) = v26;
      if ( v17 == 0 )
        v17 = CNetworkTransmitComponent::GetChangeAccessorFieldPathIndexInfo(v55);
      *(v27 + 1) = v17;
    }
    goto LABEL_26;
  }
  v46 = v22 + 168 * this->m_Accessor.m_iChangeInfo;
  v47 = v46 + 8;
  v48 = *(v46 + 42);
  if ( v48 == 0 )
  {
LABEL_85:
    *(v47 + 40) = v48 + 1;
    *&v47[8 * v48 + 8] = change;
LABEL_26:
    if ( v13 )
    {
      if ( v17 == 0 )
        v17 = CNetworkTransmitComponent::GetChangeAccessorFieldPathIndexInfo(v55);
      out.m_pString = 0;
      CUtlString::operator+=(&out, "changed ");
      rhs.m_pString = 0;
      if ( change.m_nArrayIndex < 0 )
        CUtlString::Format(&rhs, "%u", (2 * *(&change + 1)) >> 1);
      else
        CUtlString::Format(&rhs, "%u[%d]", (2 * *(&change + 1)) >> 1, change.m_nArrayIndex);
      if ( change.m_nRootPathIndex.m_Value != -1 )
      {
        m_nAllocated = v17->m_ChangeAccessorFieldPathIdList.m_nAllocated;
        if ( m_nAllocated != 0 )
          v29 = m_nAllocated <= 3
              ? (&v17->m_ChangeAccessorFieldPathIdList.m_nAllocAllocated + 1)
              : v17->m_ChangeAccessorFieldPathIdList.m_pElements;
        else
          v29 = 0;
        (*(*g_pFlattenedSerializers + 368LL))(
          &resolvedPath,
          g_pFlattenedSerializers,
          *(v29 + 4LL * change.m_nRootPathIndex.m_Value));
        CFieldPath::ToString(&resolvedPath);
        v30 = CUtlString::Get(&v68);
        CFmtStrN<256,false>::CFmtStrN(&v70, " path(%u = '%s/')", change.m_nRootPathIndex.m_Value, v30);
        CUtlString::operator+=(&rhs, v70.m_szBuf);
        if ( v68.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v68);
      }
      CUtlString::operator+=(&out, &rhs);
      if ( rhs.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&rhs);
      if ( CNetworkTransmitComponent::s_bNetworkVarValidate )
      {
        m_pClass = pInstance->m_pEntity->m_pClass;
        m_hNetworkSerializer = m_pClass->m_hNetworkSerializer;
        resolvedPath.m_pString = 0;
        if ( CNetworkTransmitComponent::ValidateChangeOffset(
               this,
               m_hNetworkSerializer,
               m_pClass->m_pClassInfo->m_pszCPPClassname,
               &change,
               &resolvedPath) )
        {
          v33 = CUtlString::Get(&resolvedPath);
          CFmtStrN<256,false>::CFmtStrN(&v70, " (resolved to '%s')", v33);
          CUtlString::operator+=(&out, v70.m_szBuf);
        }
        if ( resolvedPath.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&resolvedPath);
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      {
        v51 = "";
        v52 = CUtlString::Get(&out);
        v53 = pInstance->m_pEntity;
        if ( v53->m_designerName.u.m_Id != 0 )
          v51 = v53->m_designerName.u.m_pAsString;
        v54.m_Data = CEntityInstance::GetEntityIndex(pInstance).m_Data;
        LoggingSystem_Log(LOG_SERVER, 1, "SV:  %d/%s %s\n", v54.m_Data, v51, v52);
      }
      if ( out.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&out);
    }
    else if ( CNetworkTransmitComponent::s_bNetworkVarValidate )
    {
      v38 = pInstance->m_pEntity->m_pClass;
      v39 = v38->m_hNetworkSerializer;
      resolvedPath.m_pString = 0;
      CNetworkTransmitComponent::ValidateChangeOffset(
        this,
        v39,
        v38->m_pClassInfo->m_pszCPPClassname,
        &change,
        &resolvedPath);
      if ( resolvedPath.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&resolvedPath);
    }
    return;
  }
  v49 = (v46 + 16);
  if ( v49 != &change )
  {
    v50 = 0;
    while ( ((v24 ^ *(v49 + 4)) & 0x7FFFFFFF) != 0 || *v49 != m_Value || nArrayIndexa != *(v49 + 2) )
    {
      if ( ++v50 >= v48 )
      {
        if ( v48 == 19 )
          goto LABEL_78;
        goto LABEL_85;
      }
      v49 = &v47[8 * v50 + 8];
      if ( v49 == &change )
        return;
    }
  }
}


// CNetworkTransmitComponent::SetUpdateInterval  (line 1156, @0x0000000001eba1a0, libserver.so)
// calls: CEventRegister::StopUpdates, CEventRegister::~CEventRegister, operator delete, CEventRegister::SetUpdateInterval, operator new, CEventRegister::CEventRegister, CEventRegister::Init, _Unwind_Resume
void __fastcall CNetworkTransmitComponent::SetUpdateInterval(
        CNetworkTransmitComponent *const this,
        float a2,
        float val)
{
  CEventRegister *m_pTimerEvent; // rdi
  CEventRegister *v5; // r12
  CEventRegister *v6; // r12

  m_pTimerEvent = this->m_pTimerEvent;
  if ( a2 == 0.0 )
  {
    if ( m_pTimerEvent != 0 )
    {
      CEventRegister::StopUpdates(m_pTimerEvent);
      v5 = this->m_pTimerEvent;
      if ( v5 != 0 )
      {
        CEventRegister::~CEventRegister(this->m_pTimerEvent);
        operator delete(v5);
      }
      this->m_pTimerEvent = 0;
    }
  }
  else
  {
    if ( m_pTimerEvent == 0 )
    {
      v6 = operator new(0x20u);
      CEventRegister::CEventRegister(v6);
      this->m_pTimerEvent = v6;
      CEventRegister::Init(v6, &g_NetworkPropertyEventMgr, this);
      m_pTimerEvent = this->m_pTimerEvent;
    }
    CEventRegister::SetUpdateInterval(m_pTimerEvent, val);
  }
}


// CNetworkTransmitComponent::FireEvent  (line 1180, @0x0000000001eb5990, libserver.so)  // inlines: SetChangeInfoSerialNumber
void __fastcall CNetworkTransmitComponent::FireEvent(CNetworkTransmitComponent *const this)
{
  if ( this->m_bPendingStateChange )
  {
    this->m_nStateFlags |= 3u;
    this->m_bPendingStateChange = 0;
    this->m_Accessor.m_iChangeInfoSerialNumber = 0;
  }
}


