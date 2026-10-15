
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_mempool.cpp  (line 0, @0x0000000001a67170, libserver.so)  // inlines: CUtlMemoryPool, Color, SetColor, __static_initialization_and_destruction_0
// calls: CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_atexit
// globals: g_TSPointerListNodes, UNSPECIFIED_LOGGING_COLOR, __dso_handle, CUtlMemoryPool<TSPointerListNode_t>::~CUtlMemoryPool()
void __cdecl GLOBAL__sub_I_mempool_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  CUtlMemoryPoolBase::CUtlMemoryPoolBase(
    &g_TSPointerListNodes,
    32,
    250,
    16,
    MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
    0);
  __cxa_atexit(CUtlMemoryPool<TSPointerListNode_t>::~CUtlMemoryPool, &g_TSPointerListNodes, &_dso_handle);
}


// CUtlMemoryPoolBase::SetErrorReportFunc  (line 89, @0x0000000002f7fbc0, libserver.so)
// globals: CUtlMemoryPoolBase::g_ReportFunc
void __fastcall CUtlMemoryPoolBase::SetErrorReportFunc(MemoryPoolReportFunc_t func)
{
  CUtlMemoryPoolBase::g_ReportFunc = func;
}


// CUtlMemoryPoolBase::CUtlMemoryPoolBase  (line 97, @0x0000000002f7fbd0, libserver.so)  // inlines: AlignValue<int>, CInterlockedIntT, CTSFastPushQueue_Base, LeafCodeInfo_t, ResetAllocationCounts, ThreadInterlockedExchange, operator=
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, CPlasma::GetEntityClassInternal, CBaseClientUIEntity::GetEntityClassInternal, CPointClientUIWorldPanel::GetEntityClassInternal, CPointClientUIWorldTextPanel::GetEntityClassInternal, CPointClientUIDialog::GetEntityClassInternal, ComponentUnserializerClassInfo_t::ComponentUnserializerClassInfo_t, _GLOBAL__sub_I__unity_components_01.cpp, CPointCamera::GetEntityClassInternal, CGameEntity::GetEntityClassInternal, CGameGibManager::GetEntityClassInternal, CInfoOverlayAccessor::GetEntityClassInternal (34 total)
// strings: "mempool.cpp", "CUtlMemoryPoolBase", "CUtlMemoryPoolBase: Cannot specify 0 elements to grow each time!\n"
void __fastcall CUtlMemoryPoolBase::CUtlMemoryPoolBase(
        CUtlMemoryPoolBase *const this,
        int blockSize,
        int numElements,
        int nAlignment,
        MemoryPoolGrowType_t growMode,
        const char *pszAllocOwner)
{
  unsigned __int16 v6; // ax
  int v7; // r10d
  int v8; // ecx
  int v9; // eax
  int m_BlocksPerBlob; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  LeafCodeInfo_t v13; // [rsp+0h] [rbp-30h] BYREF

  this->m_BlocksAllocated.m_value = 0;
  this->m_PeakAlloc.m_value = 0;
  this->m_FreeList.m_pPop = 0;
  this->m_FreeList.m_pPush = &this->m_FreeList.m_pPop;
  this->m_Blobs.m_pPop = 0;
  this->m_Blobs.m_pPush = &this->m_Blobs.m_pPop;
  if ( nAlignment != 0 )
  {
    v6 = nAlignment;
    v7 = nAlignment - 1;
    v8 = -nAlignment;
  }
  else
  {
    v8 = -1;
    v7 = 0;
    v6 = 1;
  }
  this->m_nAlignment = v6;
  v9 = 8;
  this->m_BlocksPerBlob = numElements;
  if ( blockSize >= 8 )
    v9 = blockSize;
  this->m_BlockSize = v8 & (v7 + v9);
  _InterlockedExchange(&this->m_PeakAlloc.m_value, 0);
  m_BlocksPerBlob = this->m_BlocksPerBlob;
  this->m_GrowMode = growMode;
  if ( pszAllocOwner == 0 )
    pszAllocOwner = "mempool.cpp";
  this->m_pszAllocOwner = pszAllocOwner;
  if ( m_BlocksPerBlob <= 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_14;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_14:
      v13.m_szFunction = "CUtlMemoryPoolBase";
      v13.m_szFile = "mempool.cpp";
      v13.m_nLine = 130;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v13,
        "CUtlMemoryPoolBase: Cannot specify 0 elements to grow each time!\n",
        v11,
        v12);
    }
  }
  this->m_NumBlobs = 0;
  _InterlockedExchange(&this->m_BlocksAllocated.m_value, 0);
}


// CUtlMemoryPoolBase::~CUtlMemoryPoolBase  (line 141, @0x0000000002f7fe50, libserver.so)
// calls: CUtlMemoryPoolBase::Clear
// callers: CEntityClass::~CEntityClass, ComponentUnserializerClassInfo_t::~ComponentUnserializerClassInfo_t, EntComponentInfo_t::~EntComponentInfo_t, CUtlMemoryPool<groundlink_t>::~CUtlMemoryPool, CUtlMemoryPool<touchlink_t>::~CUtlMemoryPool, CUtlMemoryPool<SoundCommand_t>::~CUtlMemoryPool, CUtlMemoryPool<CSoundPatch>::~CUtlMemoryPool, CUtlMemoryPool<CShortPathProbe>::~CUtlMemoryPool, CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> >::~CClassMemoryPool, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::~CUtlSymbolTableLargeBase, CEntitySystem::~CEntitySystem, CSchemaClassBinding<EntComponentInfo_t>::DestructInPlace (17 total)
void __fastcall CUtlMemoryPoolBase::~CUtlMemoryPoolBase(CUtlMemoryPoolBase *const this)
{
  CUtlMemoryPoolBase::Clear(this);
}


// CUtlMemoryPoolBase::ResetAllocationCounts  (line 192, @0x0000000002f7fd00, libserver.so)  // inlines: ThreadInterlockedExchange, operator=
// callers: CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> >::~CClassMemoryPool, CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> >::Clear, CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> >::~CClassMemoryPool
void __fastcall CUtlMemoryPoolBase::ResetAllocationCounts(CUtlMemoryPoolBase *const this)
{
  this->m_NumBlobs = 0;
  _InterlockedExchange(&this->m_BlocksAllocated.m_value, 0);
}


// CUtlMemoryPoolBase::Clear  (line 202, @0x0000000002f7fd20, libserver.so)  // inlines: BeginPeek, CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::InternalClear(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::FreeList_t*)::__lambda6&>, Detach, EndPeek_Detach, InternalClear, IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::FreeList_t*)::__lambda6&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateDetachedList(T*, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CUtlMemoryPoolBase::InternalClear(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::FreeList_t*)::__lambda6; T = CUtlMemoryPoolBase::CBlob; POINTER_TYPE = CUtlMemoryPoolBase::CBlob; CONTAINER_TYPE = CUtlMemoryPoolBase::CBlob; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)]::__lambda0>, IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::FreeList_t*)::__lambda6>, ResetAllocationCounts, ThreadInterlockedExchange, ThreadInterlockedExchangePointer, operator(), operator=
// calls: ThreadInterlockedExchange64
// callers: CEntityClass::~CEntityClass, ComponentUnserializerClassInfo_t::~ComponentUnserializerClassInfo_t, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::RemoveAll, EntComponentInfo_t::~EntComponentInfo_t, CUtlMemoryPoolBase::~CUtlMemoryPoolBase, CUtlMemoryPool<TSPointerListNode_t>::~CUtlMemoryPool, CUtlTSHashBase<CUtlSymbolTableLargeBaseTreeEntry_t*, 2048, CUtlSymbolTableLargeBaseTreeEntry_t*, CCThreadsafeTreeHashMethod<2048, CUtlSymbolTableLargeBaseTreeEntry_t*, true>, CThreadSpinRWLock>::RemoveAll, CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true, 2048ul>::~CUtlSymbolTableLargeBase, CSchemaClassBinding<EntComponentInfo_t>::DestructInPlace, CSchemaClassBinding<EntComponentInfo_t>::Deallocate
void __fastcall CUtlMemoryPoolBase::Clear(CUtlMemoryPoolBase *const this)
{
  volatile CUtlMemoryPoolBase::CBlob *p_m_pPop; // r14
  _QWORD *v3; // r12
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx

  p_m_pPop = &this->m_Blobs.m_pPop;
  while ( 1 )
  {
    v3 = ThreadInterlockedExchange64(p_m_pPop, 0);
    if ( v3 != 0 )
      break;
    if ( p_m_pPop == this->m_Blobs.m_pPush )
      return;
  }
  while ( 1 )
  {
    v4 = ThreadInterlockedExchange64(&this->m_FreeList.m_pPop, 0);
    if ( v4 != 0 )
      break;
    if ( this->m_FreeList.m_pPush == &this->m_FreeList.m_pPop )
      goto LABEL_7;
  }
  *ThreadInterlockedExchange64(&this->m_FreeList, &this->m_FreeList.m_pPop) = 1;
  while ( 1 )
  {
    while ( *v4 == 0 )
      ;
    if ( *v4 == 1 )
      break;
    v4 = *v4;
  }
  *v4 = 0;
LABEL_7:
  this->m_NumBlobs = 0;
  _InterlockedExchange(&this->m_BlocksAllocated.m_value, 0);
  v5 = ThreadInterlockedExchange64(&this->m_Blobs, p_m_pPop);
  v6 = v3;
  *v5 = 1;
  while ( 1 )
  {
    while ( *v6 == 0 )
      ;
    if ( *v6 == 1 )
      break;
    v6 = *v6;
  }
  *v6 = 0;
  while ( 1 )
  {
    v7 = *v3;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v3);
    if ( v7 == 0 )
      break;
    v3 = v7;
  }
}


// CUtlMemoryPoolBase::InternalClear  (line 225, @0x0000000002f7fe60, libserver.so)  // inlines: CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::InternalClear(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::FreeList_t*)::__lambda6&>, IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::FreeList_t*)::__lambda6&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateDetachedList(T*, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CUtlMemoryPoolBase::InternalClear(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::FreeList_t*)::__lambda6; T = CUtlMemoryPoolBase::CBlob; POINTER_TYPE = CUtlMemoryPoolBase::CBlob; CONTAINER_TYPE = CUtlMemoryPoolBase::CBlob; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)]::__lambda0>, IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::FreeList_t*)::__lambda6>, operator()
// callers: CClassMemoryPool<CDOTAItemDefinition, CUtlMemoryPool<CDOTAItemDefinition> >::~CClassMemoryPool, CClassMemoryPool<CHullTri, CUtlMemoryPool<CHullTri> >::Clear, CClassMemoryPool<GCSDK::CNetPacket, CUtlMemoryPool<GCSDK::CNetPacket> >::~CClassMemoryPool
void __fastcall CUtlMemoryPoolBase::InternalClear(
        CUtlMemoryPoolBase *const this,
        CUtlMemoryPoolBase::CBlob *pDetachedBlobList,
        CUtlMemoryPoolBase::FreeList_t *pDetachedFreeList)
{
  CUtlMemoryPoolBase::CBlob *m_pNext; // rbx

  if ( pDetachedBlobList != 0 )
  {
    while ( 1 )
    {
      m_pNext = pDetachedBlobList->m_pNext;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pDetachedBlobList, pDetachedFreeList);
      if ( m_pNext == 0 )
        break;
      pDetachedBlobList = m_pNext;
    }
  }
}


// CUtlMemoryPoolBase::IsAllocationWithinPool  (line 300, @0x0000000002f7fea0, libserver.so)  // inlines: AlignValue<long long int>, BeginPeek, CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::__lambda7&>, InternalGetNextPopItemFromActiveList, IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::__lambda7&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateInPlace(bool, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::__lambda7; T = CUtlMemoryPoolBase::CBlob; POINTER_TYPE = CUtlMemoryPoolBase::CBlob; CONTAINER_TYPE = CUtlMemoryPoolBase::CBlob; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)]::__lambda2>, IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::__lambda7>, IteratePeekedList<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::__lambda7&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateInPlace(bool, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::__lambda7; T = CUtlMemoryPoolBase::CBlob; POINTER_TYPE = CUtlMemoryPoolBase::CBlob; CONTAINER_TYPE = CUtlMemoryPoolBase::CBlob; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)]::__lambda2&>, ThreadInterlockedExchangePointer, operator()
// calls: ThreadInterlockedExchange64
bool __fastcall CUtlMemoryPoolBase::IsAllocationWithinPool(const CUtlMemoryPoolBase *const this, void *pMem)
{
  volatile CUtlMemoryPoolBase::CBlob *p_m_pPop; // rbx
  __int64 v5; // rax
  volatile CUtlMemoryPoolBase::CBlob *v6; // rcx
  bool result; // al
  unsigned __int64 v8; // rdx
  char v9; // r8
  unsigned __int64 m_pNext; // rdx

  p_m_pPop = &this->m_Blobs.m_pPop;
  while ( 1 )
  {
    v5 = ThreadInterlockedExchange64(p_m_pPop, 0);
    v6 = v5;
    if ( v5 != 0 )
      break;
    if ( this->m_Blobs.m_pPush == p_m_pPop )
      return 0;
  }
  v8 = v5 + 12;
  result = 0;
  v9 = 1;
  if ( v6->m_Data <= pMem )
  {
LABEL_6:
    if ( pMem < &v6->m_Data[v6->m_NumBytes] )
    {
      result = (pMem - (-this->m_nAlignment & (v8 + this->m_nAlignment - 1))) % this->m_BlockSize == 0;
      v9 = 0;
    }
  }
  while ( 1 )
  {
    m_pNext = v6->m_pNext;
    if ( v6->m_pNext != 0 )
      break;
LABEL_13:
    if ( v6 == this->m_Blobs.m_pPush )
      goto LABEL_14;
  }
  while ( v9 != 0 && m_pNext > 1 )
  {
    v6->m_pNext = 0;
    v9 = 1;
    p_m_pPop->m_pNext = v6;
    p_m_pPop = v6;
    v6 = m_pNext;
    v8 = m_pNext + 12;
    if ( v8 <= pMem )
      goto LABEL_6;
    m_pNext = v6->m_pNext;
    if ( v6->m_pNext == 0 )
      goto LABEL_13;
  }
LABEL_14:
  p_m_pPop->m_pNext = v6;
  return result;
}


// CUtlMemoryPoolBase::AddNewBlob  (line 331, @0x0000000002f7ffa0, libserver.so)  // inlines: AlignValue<char*>, Push, ThreadInterlockedExchangePointer
// calls: ThreadInterlockedExchange64
// callers: CUtlMemoryPoolBase::Alloc
CUtlMemoryPoolBase::FreeList_t *__fastcall CUtlMemoryPoolBase::AddNewBlob(CUtlMemoryPoolBase *const this)
{
  MemoryPoolGrowType_t m_GrowMode; // eax
  int m_NumBlobs; // r13d
  int v4; // r13d
  int v5; // r15d
  int v6; // r13d
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rbx
  CUtlMemoryPoolBase::FreeList_t *v10; // rbx
  CUtlMemoryPoolBase::FreeList_t *newBlob; // [rsp+8h] [rbp-38h]

  m_GrowMode = this->m_GrowMode;
  if ( m_GrowMode == MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW )
  {
    v4 = 1;
  }
  else
  {
    m_NumBlobs = this->m_NumBlobs;
    if ( m_GrowMode == MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_NONE && m_NumBlobs != 0 )
      return 0;
    v4 = m_NumBlobs + 1;
  }
  v5 = 1;
  v6 = this->m_BlocksPerBlob * v4;
  v7 = v6 * this->m_BlockSize;
  v8 = (**g_pMemAlloc)(g_pMemAlloc, this->m_nAlignment - 1 + v7 + 15);
  *(v8 + 8) = v7;
  v9 = v8;
  *v8 = 0;
  *ThreadInterlockedExchange64(&this->m_Blobs, v8) = v8;
  newBlob = (-this->m_nAlignment & (v9 + this->m_nAlignment + 11));
  v10 = newBlob;
  if ( v6 > 1 )
  {
    do
    {
      ++v5;
      v10 = (v10 + this->m_BlockSize);
      v10->pNext = 0;
      *ThreadInterlockedExchange64(&this->m_FreeList, v10) = v10;
    }
    while ( v5 != v6 );
  }
  ++this->m_NumBlobs;
  return newBlob;
}


// CUtlMemoryPoolBase::Alloc  (line 422, @0x0000000002f800b0, libserver.so)  // inlines: AssignIf, BeginPeek, BeginPeek_Lock, EndPeek_Pop, EndPeek_Replace, EndPeek_Unlock, GetRaw, InternalGetNextPopItemFromActiveList, Pop, ThreadInterlockedAssignIf, ThreadInterlockedAssignPointerIf, ThreadInterlockedCompareExchange64, ThreadInterlockedExchangePointer, ThreadInterlockedIncrement, operator++
// calls: ThreadInterlockedExchange64, CUtlMemoryPoolBase::AddNewBlob
// callers: BuildWorldSpaceSurroundBoxClusterList, CEntityDataInstantiator<touchlink_t>::CreateDataObject, CEntityDataInstantiator<groundlink_t>::CreateDataObject, CBaseEntity::AddEntityToGroundList, CBaseEntity::PhysicsMarkEntityAsTouched, CSoundControllerImp::SoundCreate, CSoundControllerImp::RestoreSoundPatch, CSoundControllerImp::CommandAdd, CShortPathProbe::Advance, CGridNavPath::ComputeShortPath, CDOTAItemSchema::CreateEconItemDefinition, CUtlMemoryPoolBase::AllocZero (23 total)
void *__fastcall CUtlMemoryPoolBase::Alloc(CUtlMemoryPoolBase *const this)
{
  volatile CUtlMemoryPoolBase::FreeList_t *p_m_pPop; // r13
  volatile CUtlMemoryPoolBase::FreeList_t *v3; // rdx
  CUtlMemoryPoolBase::FreeList_t *v4; // rsi
  CTSFastPushQueue *p_m_Blobs; // r14
  volatile CUtlMemoryPoolBase::CBlob *v6; // r12
  __int64 v7; // rax
  volatile CUtlMemoryPoolBase::CBlob *v8; // r15
  volatile CUtlMemoryPoolBase::FreeList_t *pNext; // rcx
  signed __int32 v10; // edx
  volatile int m_value; // eax
  signed __int32 i; // edx
  volatile CUtlMemoryPoolBase::FreeList_t *v14; // rax
  CUtlMemoryPoolBase::CBlob *v15; // rdx
  CUtlMemoryPoolBase::CBlob *pTempLockMem; // [rsp+8h] [rbp-38h] BYREF

  p_m_pPop = &this->m_FreeList.m_pPop;
  do
  {
    v3 = ThreadInterlockedExchange64(p_m_pPop, 0);
    v4 = v3;
    if ( v3 != 0 )
    {
LABEL_11:
      if ( v3 != _InterlockedCompareExchange64(&this->m_FreeList, p_m_pPop, v3) )
      {
        while ( 1 )
        {
          pNext = v3->pNext;
          if ( v3->pNext != 0 )
            break;
          if ( v3 == this->m_FreeList.m_pPush )
            goto LABEL_11;
        }
        v3->pNext = 0;
        this->m_FreeList.m_pPop = pNext;
      }
      goto LABEL_14;
    }
  }
  while ( this->m_FreeList.m_pPush != p_m_pPop );
  if ( this->m_GrowMode != MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_NONE || this->m_NumBlobs == 0 )
  {
    p_m_Blobs = &this->m_Blobs;
    pTempLockMem = 0;
    v6 = &this->m_Blobs.m_pPop;
    while ( 1 )
    {
      v7 = ThreadInterlockedExchange64(&this->m_Blobs.m_pPop, 0);
      if ( v7 != 0 )
        break;
      if ( this->m_Blobs.m_pPush == v6 && v6 == _InterlockedCompareExchange64(p_m_Blobs, &pTempLockMem, v6) )
      {
        this->m_Blobs.m_pPop = 0;
        v8 = 0;
        goto LABEL_20;
      }
    }
    v8 = v7;
LABEL_20:
    while ( 1 )
    {
      v4 = ThreadInterlockedExchange64(p_m_pPop, 0);
      if ( v4 != 0 )
        break;
      if ( this->m_FreeList.m_pPush == p_m_pPop )
      {
        v4 = CUtlMemoryPoolBase::AddNewBlob(this);
        goto LABEL_26;
      }
    }
LABEL_23:
    if ( v4 != _InterlockedCompareExchange64(&this->m_FreeList, p_m_pPop, v4) )
    {
      while ( 1 )
      {
        v14 = v4->pNext;
        if ( v4->pNext != 0 )
          break;
        if ( v4 == this->m_FreeList.m_pPush )
          goto LABEL_23;
      }
      v4->pNext = 0;
      this->m_FreeList.m_pPop = v14;
    }
LABEL_26:
    if ( v8 != 0 )
    {
      this->m_Blobs.m_pPop = v8;
    }
    else
    {
LABEL_32:
      if ( &pTempLockMem != _InterlockedCompareExchange64(p_m_Blobs, v6, &pTempLockMem) )
      {
        while ( 1 )
        {
          v15 = pTempLockMem;
          if ( pTempLockMem != 0 )
            break;
          if ( this->m_Blobs.m_pPush == &pTempLockMem )
            goto LABEL_32;
        }
        pTempLockMem = 0;
        this->m_Blobs.m_pPop = v15;
      }
    }
    if ( v4 != 0 )
    {
LABEL_14:
      v10 = _InterlockedExchangeAdd(&this->m_BlocksAllocated.m_value, 1u);
      m_value = this->m_PeakAlloc.m_value;
      for ( i = v10 + 1; i > m_value; m_value = this->m_PeakAlloc.m_value )
        _InterlockedCompareExchange(&this->m_PeakAlloc.m_value, i, m_value);
      return v4;
    }
  }
  return 0;
}


// CUtlMemoryPoolBase::AllocZero  (line 515, @0x0000000002f80280, libserver.so)  // inlines: V_memset, memset
// calls: CUtlMemoryPoolBase::Alloc, memset
void *__fastcall CUtlMemoryPoolBase::AllocZero(CUtlMemoryPoolBase *const this)
{
  void *v2; // rax
  void *v3; // rbx
  size_t m_BlockSize; // rdx

  v2 = CUtlMemoryPoolBase::Alloc(this);
  v3 = v2;
  if ( v2 != 0 )
  {
    m_BlockSize = this->m_BlockSize;
    if ( (m_BlockSize & 0x80000000) != 0LL )
      __debugbreak();
    memset(v2, 0, m_BlockSize);
  }
  return v3;
}


// CUtlMemoryPoolBase::Free  (line 529, @0x0000000002f802c0, libserver.so)  // inlines: Push, ThreadInterlockedDecrement, ThreadInterlockedExchangePointer, operator--
// calls: ThreadInterlockedExchange64
// callers: CNetworkTransmitComponent::~CNetworkTransmitComponent, BuildWorldSpaceSurroundBoxClusterList, UTIL_FindSpawnGroupsAbsBoxTouches, CEntityDataInstantiator<touchlink_t>::DestroyDataObject, CEntityDataInstantiator<groundlink_t>::DestroyDataObject, CBaseEntity::PhysicsRemoveToucher, CBaseEntity::PhysicsRemoveGround, CBaseEntity::PhysicsRemoveGroundList, CBaseEntity::PhysicsRemoveTouchedList, CSoundControllerImp::SoundDestroy, CSoundPatch::operator delete, CSoundControllerImp::ProcessCommand (21 total)
void __fastcall CUtlMemoryPoolBase::Free(CUtlMemoryPoolBase *const this, void *memBlock)
{
  if ( memBlock != 0 )
  {
    _InterlockedSub(&this->m_BlocksAllocated.m_value, 1u);
    *memBlock = 0;
    *ThreadInterlockedExchange64(&this->m_FreeList, memBlock) = memBlock;
  }
}


// CUtlMemoryPoolBase::Size  (line 588, @0x0000000002f802f0, libserver.so)  // inlines: BeginPeek, CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::Size() const::__lambda8&>, InternalGetNextPopItemFromActiveList, IterateInPlace<CUtlMemoryPoolBase::Size() const::__lambda8&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateInPlace(bool, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CUtlMemoryPoolBase::Size() const::__lambda8; T = CUtlMemoryPoolBase::CBlob; POINTER_TYPE = CUtlMemoryPoolBase::CBlob; CONTAINER_TYPE = CUtlMemoryPoolBase::CBlob; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)]::__lambda2>, IterateInPlace<CUtlMemoryPoolBase::Size() const::__lambda8>, IteratePeekedList<CUtlMemoryPoolBase::Size() const::__lambda8&, CTSFastPushQueue_Base<T, POINTER_TYPE, CONTAINER_TYPE, LINKED_LIST_PTR>::IterateInPlace(bool, ITERATION_FUNCTOR&&) [with ITERATION_FUNCTOR = CUtlMemoryPoolBase::Size() const::__lambda8; T = CUtlMemoryPoolBase::CBlob; POINTER_TYPE = CUtlMemoryPoolBase::CBlob; CONTAINER_TYPE = CUtlMemoryPoolBase::CBlob; POINTER_TYPE* volatile CONTAINER_TYPE::* LINKED_LIST_PTR = ((CUtlMemoryPoolBase::CBlob* volatile CUtlMemoryPoolBase::CBlob::*)&CUtlMemoryPoolBase::CBlob::m_pNext)]::__lambda2&>, ThreadInterlockedExchangePointer, operator()
// calls: ThreadInterlockedExchange64
int __fastcall CUtlMemoryPoolBase::Size(const CUtlMemoryPoolBase *const this)
{
  volatile CUtlMemoryPoolBase::CBlob *p_m_pPop; // rbx
  volatile CUtlMemoryPoolBase::CBlob *v3; // rax
  int v5; // esi
  int v6; // ecx
  unsigned __int64 m_pNext; // rdx

  p_m_pPop = &this->m_Blobs.m_pPop;
  while ( 1 )
  {
    v3 = ThreadInterlockedExchange64(p_m_pPop, 0);
    if ( v3 != 0 )
      break;
    if ( this->m_Blobs.m_pPush == p_m_pPop )
      return 0;
  }
  v5 = 0;
  while ( 1 )
  {
    v6 = v5 + v3->m_NumBytes;
    v5 = v6;
    while ( 1 )
    {
      m_pNext = v3->m_pNext;
      if ( v3->m_pNext != 0 )
        break;
      if ( v3 == this->m_Blobs.m_pPush )
        goto LABEL_11;
    }
    if ( m_pNext <= 1 )
      break;
    v3->m_pNext = 0;
    p_m_pPop->m_pNext = v3;
    p_m_pPop = v3;
    v3 = m_pNext;
  }
LABEL_11:
  p_m_pPop->m_pNext = v3;
  return v6;
}


// CUtlScratchMemoryPool::CUtlScratchMemoryPool  (line 606, @0x0000000002f80370, libserver.so)
// callers: CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::CreateSpawnGroupEntitiesFromSaveRestoreData, CGameEntitySystem::CreateSpawnGroupEntities, CEntitySystem::CEntitySystem
void __fastcall CUtlScratchMemoryPool::CUtlScratchMemoryPool(CUtlScratchMemoryPool *const this)
{
  this->m_pFirstBlock = 0;
  this->m_nBlockSize = 0;
  this->m_bSearchAllBlocks = 0;
}


// CUtlScratchMemoryPool::CUtlScratchMemoryPool  (line 618, @0x0000000002f80390, libserver.so)  // inlines: Init
// callers: CSkeletonInstance::CalcAnimationState, CDOTAGameManager::CDOTAGameManager, CEntityKeyValues::CEntityKeyValues, CEntitySystem::CEntitySystem, _GLOBAL__sub_I_response_system.cpp, CAnimationDecodeContext::Init, CModelBuilder::AppendFlexControllersFromOldData, CModelBuilder::CreateRemappingTableForMeshFromOldData
void __fastcall CUtlScratchMemoryPool::CUtlScratchMemoryPool(
        CUtlScratchMemoryPool *const this,
        int nBlockSize,
        void *pExternalMem,
        bool bSearchAllBlocks)
{
  this->m_pFirstBlock = 0;
  this->m_nBlockSize = nBlockSize;
  this->m_bSearchAllBlocks = bSearchAllBlocks;
  if ( pExternalMem != 0 )
  {
    this->m_pFirstBlock = pExternalMem;
    *pExternalMem = 0;
    this->m_pFirstBlock->m_bSkipDeallocation = 1;
    this->m_pFirstBlock->m_nBytesFree = nBlockSize - 16;
  }
}


// CUtlScratchMemoryPool::~CUtlScratchMemoryPool  (line 627, @0x0000000002f80680, libserver.so)
// calls: CUtlScratchMemoryPool::FreeAll
// callers: CSkeletonInstance::CalcAnimationState, CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::CreateSpawnGroupEntitiesFromSaveRestoreData, CLoadingSpawnGroup::Release, CGameEntitySystem::CreateSpawnGroupEntities, CDOTAGameManager::CDOTAGameManager, CDOTAGameManager::~CDOTAGameManager, CEntityKeyValues::~CEntityKeyValues, CEntitySystem::~CEntitySystem, CEntitySystem::CEntitySystem, CAnimationDecodeContext::Shutdown, CModelBuilder::AppendFlexControllersFromOldData (13 total)
void __fastcall CUtlScratchMemoryPool::~CUtlScratchMemoryPool(CUtlScratchMemoryPool *const this)
{
  CUtlScratchMemoryPool::FreeAll(this);
}


// CUtlScratchMemoryPool::Init  (line 632, @0x0000000002f803d0, libserver.so)
// callers: CGameEntitySystem::CreateLoadingSpawnGroup, CGameEntitySystem::CreateSpawnGroupEntitiesFromSaveRestoreData, CGameEntitySystem::CreateSpawnGroupEntities, CEntitySystem::Init
void __fastcall CUtlScratchMemoryPool::Init(
        CUtlScratchMemoryPool *const this,
        int nBlockSize,
        void *pExternalMem,
        bool bSearchAllBlocks)
{
  this->m_pFirstBlock = 0;
  this->m_nBlockSize = nBlockSize;
  this->m_bSearchAllBlocks = bSearchAllBlocks;
  if ( pExternalMem != 0 )
  {
    this->m_pFirstBlock = pExternalMem;
    *pExternalMem = 0;
    this->m_pFirstBlock->m_bSkipDeallocation = 1;
    this->m_pFirstBlock->m_nBytesFree = nBlockSize - 16;
  }
}


// CUtlScratchMemoryPool::AllocAligned  (line 665, @0x0000000002f80500, libserver.so)  // inlines: GetAllocPtr, GetBlockUsableBytes
// calls: CUtlScratchMemoryPool::AddNewBlock
// callers: CDOTABaseAbility::LoadAbilityDataSpecial, CDOTABaseAbility::ProcessAbilityData, CDOTAGameManager::SetupItemSymbolsAndDictionary, CDOTAGameManager::SetupCustomItemSymbolsAndDictionary, CVariantBase<CEntityVariantAllocator>::CopyData, CVariantBase<CEntityVariantAllocator>::CopyData<Vector>, CVariantBase<CEntityVariantAllocator>::CopyData<Vector4D>, CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>, CVariantBase<CEntityVariantAllocator>::CopyData<Quaternion>, CEntityVariantAllocator::Allocate, CEntityKeyValues::SetTargetNameForConnection, CEntityKeyValues::SetValueOverrideForConnection (25 total)
void *__fastcall CUtlScratchMemoryPool::AllocAligned(
        CUtlScratchMemoryPool *const this,
        int nSizeInBytes,
        int nAlignment)
{
  CUtlScratchMemoryPool::MemoryBlock_t *m_pFirstBlock; // rax
  int v4; // edx
  int v5; // ecx
  int v7; // edx

  if ( nSizeInBytes == 0 )
    return 0;
  m_pFirstBlock = this->m_pFirstBlock;
  if ( this->m_pFirstBlock == 0 )
    return CUtlScratchMemoryPool::AddNewBlock(this, nSizeInBytes);
  v4 = -nAlignment;
  v5 = v4 & m_pFirstBlock->m_nBytesFree;
  if ( nSizeInBytes > v5 )
  {
    if ( this->m_bSearchAllBlocks )
    {
      while ( 1 )
      {
        m_pFirstBlock = m_pFirstBlock->m_pNext;
        if ( m_pFirstBlock == 0 )
          break;
        v5 = v4 & m_pFirstBlock->m_nBytesFree;
        if ( nSizeInBytes <= v5 )
          goto LABEL_9;
      }
    }
    return CUtlScratchMemoryPool::AddNewBlock(this, nSizeInBytes);
  }
LABEL_9:
  v7 = this->m_nBlockSize - 16 - v5;
  m_pFirstBlock->m_nBytesFree = v5 - nSizeInBytes;
  return &m_pFirstBlock[1] + v7;
}


// CUtlScratchMemoryPool::AddNewBlock  (line 724, @0x0000000002f80410, libserver.so)  // inlines: GetBlockUsableBytes, MemAlloc_AllocAlignedFunc
// callers: CUtlScratchMemoryPool::AllocAligned
void *__fastcall CUtlScratchMemoryPool::AddNewBlock(CUtlScratchMemoryPool *const this, int nSizeInBytes)
{
  __int64 v4; // rax
  CUtlScratchMemoryPool::MemoryBlock_t *v5; // rax
  void *result; // rax
  __int64 v7; // rax
  CUtlScratchMemoryPool::MemoryBlock_t *v8; // rax
  int m_nBlockSize; // edx

  if ( this->m_nBlockSize >> 1 >= nSizeInBytes )
  {
    if ( this->m_nBlockSize != 0 )
    {
      v7 = (**g_pMemAlloc)(g_pMemAlloc, this->m_nBlockSize + 23LL);
      *(((v7 + 23) & 0xFFFFFFFFFFFFFFF0LL) - 8) = v7;
      v8 = ((v7 + 23) & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v8 = 0;
    }
    v8->m_bSkipDeallocation = 0;
    v8->m_pNext = this->m_pFirstBlock;
    m_nBlockSize = this->m_nBlockSize;
    this->m_pFirstBlock = v8;
    result = &v8[1];
    *(result - 2) = m_nBlockSize - 16 - nSizeInBytes;
  }
  else
  {
    if ( nSizeInBytes == -16 )
    {
      v5 = 0;
    }
    else
    {
      v4 = (**g_pMemAlloc)(g_pMemAlloc, nSizeInBytes + 39LL);
      *(((v4 + 23) & 0xFFFFFFFFFFFFFFF0LL) - 8) = v4;
      v5 = ((v4 + 23) & 0xFFFFFFFFFFFFFFF0LL);
    }
    v5->m_bSkipDeallocation = 0;
    v5->m_nBytesFree = 0;
    if ( this->m_pFirstBlock != 0 )
    {
      v5->m_pNext = this->m_pFirstBlock->m_pNext;
      this->m_pFirstBlock->m_pNext = v5;
    }
    else
    {
      v5->m_pNext = 0;
      this->m_pFirstBlock = v5;
    }
    return &v5[1];
  }
  return result;
}


// CUtlScratchMemoryPool::GetCurrentAllocPoint  (line 763, @0x0000000002f80570, libserver.so)  // inlines: GetFirstBytesFree
// callers: CEntitySystem::AddComponentFieldUnserializer
UtlScratchMemoryPoolMark_t __fastcall CUtlScratchMemoryPool::GetCurrentAllocPoint(
        const CUtlScratchMemoryPool *const this)
{
  UtlScratchMemoryPoolMark_t result; // 0:rax.12

  result.m_pBlock = this->m_pFirstBlock;
  if ( this->m_pFirstBlock != 0 )
    result.m_nBytesFree = *(result.m_pBlock + 2);
  else
    result.m_nBytesFree = 0;
  return result;
}


// CUtlScratchMemoryPool::FreeToAllocPoint  (line 778, @0x0000000002f80590, libserver.so)  // inlines: MemAlloc_FreeAlignedFunc
// callers: CEntitySystem::AddComponentFieldUnserializer
void __fastcall CUtlScratchMemoryPool::FreeToAllocPoint(
        CUtlScratchMemoryPool *const this,
        UtlScratchMemoryPoolMark_t mark)
{
  int m_nBytesFree; // r15d
  CUtlScratchMemoryPool::MemoryBlock_t *m_pBlock; // r12
  CUtlScratchMemoryPool::MemoryBlock_t *m_pFirstBlock; // rax
  CUtlScratchMemoryPool::MemoryBlock_t *m_pNext; // rbx

  m_nBytesFree = mark.m_nBytesFree;
  m_pBlock = mark.m_pBlock;
  m_pFirstBlock = this->m_pFirstBlock;
  if ( mark.m_pBlock != this->m_pFirstBlock )
  {
    while ( 1 )
    {
      m_pNext = m_pFirstBlock->m_pNext;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pFirstBlock & 0xFFFFFFFFFFFFFFF8LL) - 8));
      this->m_pFirstBlock = m_pNext;
      if ( m_pBlock == m_pNext )
        break;
      m_pFirstBlock = m_pNext;
    }
    m_pFirstBlock = m_pBlock;
  }
  if ( m_pFirstBlock != 0 )
    m_pFirstBlock->m_nBytesFree = m_nBytesFree;
}


// CUtlScratchMemoryPool::FreeAll  (line 811, @0x0000000002f80600, libserver.so)  // inlines: GetBlockUsableBytes, MemAlloc_FreeAlignedFunc
// callers: CEntitySpawnerBase<CDevtestHierarchyChild>::~CEntitySpawnerBase, CDevtestHierarchy2::Spawn, CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase, CEntitySpawnerBase<CTriggerMultiple>::~CEntitySpawnerBase, CreateTriggerInternal, CScriptEntityIterator::CreateByClassname, Script_PrecacheEntityFromTable, Script_SpawnEntityFromTableSynchronous, CBreakableProp::SetEnableMotionPosition, CEntitySpawnerBase<CWorld>::~CEntitySpawnerBase, CreateWorldEntity, CBaseEntity::Create (112 total)
void __fastcall CUtlScratchMemoryPool::FreeAll(CUtlScratchMemoryPool *const this)
{
  CUtlScratchMemoryPool::MemoryBlock_t *m_pFirstBlock; // rax
  CUtlScratchMemoryPool::MemoryBlock_t *v3; // r12
  CUtlScratchMemoryPool::MemoryBlock_t *m_pNext; // rbx

  m_pFirstBlock = this->m_pFirstBlock;
  if ( this->m_pFirstBlock != 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      m_pNext = m_pFirstBlock->m_pNext;
      if ( m_pFirstBlock->m_bSkipDeallocation )
      {
        m_pFirstBlock->m_pNext = 0;
        v3 = m_pFirstBlock;
        if ( m_pNext == 0 )
        {
LABEL_7:
          this->m_pFirstBlock = v3;
          if ( v3 != 0 )
            v3->m_nBytesFree = this->m_nBlockSize - 16;
          return;
        }
      }
      else
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pFirstBlock & 0xFFFFFFFFFFFFFFF8LL) - 8));
        if ( m_pNext == 0 )
          goto LABEL_7;
      }
      m_pFirstBlock = m_pNext;
    }
  }
}


