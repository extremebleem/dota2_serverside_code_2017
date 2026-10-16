
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_tsmultimempool.cpp  (line 0, @0x0000000001a6e7b0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_tsmultimempool_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CThreadSafeMultiMemoryPool::CThreadSafeMultiMemoryPool  (line 24, @0x000000000323e020, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CThreadFastMutex, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, CopyConstruct<CThreadSafeMultiMemoryPool::MemPoolRecord_t>, Element, GrowMemory, GrowVector, InsertMultipleBefore, MemAlloc_AllocAlignedFunc, MemAlloc_FreeAlignedFunc, Purge, RemoveAll, ResetDbgInfo, SetLessFunc, operator delete, operator new, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t, int>::Grow, CThreadSafeMemoryPool::CThreadSafeMemoryPool, CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t*, int>::Grow, CUtlRBTree<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int, CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int> >::~CUtlRBTree, _Unwind_Resume, CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t, int>::Purge, CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t*, int>::Purge
// callers: _GLOBAL__sub_I_netpacketpool.cpp
// globals: CDefOps<void *>::LessFunc(void * const&,void * const&)
void __fastcall CThreadSafeMultiMemoryPool::CThreadSafeMultiMemoryPool(
        CThreadSafeMultiMemoryPool *const this,
        const CThreadSafeMultiMemoryPool::MemPoolConfig_t *pMemPoolConfig,
        int cnMemPoolConfig,
        int nGrowMode)
{
  const CThreadSafeMultiMemoryPool::MemPoolConfig_t *v5; // r12
  __int64 v6; // r14
  bool v7; // zf
  CThreadSafeMultiMemoryPool::MemPoolRecord_t *v8; // r14
  uint32 m_nBlockSizeMax; // r15d
  __int64 v10; // rax
  CThreadSafeMemoryPool *v11; // r13
  __int64 m_Size; // r14
  int v13; // eax
  int v14; // eax
  int v15; // r15d
  int v16; // r12d
  int m_nAllocationCount; // eax
  __int64 v18; // r8
  int i; // edi
  unsigned int v20; // edx
  CThreadSafeMultiMemoryPool::MemPoolRecord_t *m_pMemory; // rax
  CThreadSafeMultiMemoryPool::MemPoolRecord_t *v22; // rax
  CThreadSafeMultiMemoryPool::MemPoolRecord_t *v23; // rcx
  CThreadSafeMultiMemoryPool::MemPoolRecord_t *v24; // rsi
  CUtlVectorBase<CThreadSafeMultiMemoryPool::MemPoolRecord_t,CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-50h]
  const CThreadSafeMultiMemoryPool::MemPoolConfig_t *v27; // [rsp+18h] [rbp-38h]

  this->m_VecMemPool.m_Size = 0;
  this->m_VecMemPool.m_Memory.m_pMemory = 0;
  this->m_VecMemPool.m_Memory.m_nAllocationCount = 0;
  this->m_VecMemPool.m_Memory.m_nGrowSize = 0;
  this->m_VecMemPoolLookup.m_Size = 0;
  this->m_VecMemPoolLookup.m_Memory.m_pMemory = 0;
  this->m_VecMemPoolLookup.m_Memory.m_nAllocationCount = 0;
  this->m_VecMemPoolLookup.m_Memory.m_nGrowSize = 0;
  this->m_MapRawAllocation.m_Tree.m_Elements.m_pMemory = 0;
  this->m_MapRawAllocation.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_MapRawAllocation.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_MapRawAllocation.m_Tree.m_Root = -1;
  this->m_MapRawAllocation.m_Tree.m_NumElements = 0;
  this->m_MapRawAllocation.m_Tree.m_FirstFree = -1;
  this->m_MapRawAllocation.m_Tree.m_LastAlloc.index = -1;
  this->m_MapRawAllocation.m_Tree.m_pElements = 0;
  this->m_mutexRawAllocations.m_ownerID = 0;
  this->m_mutexRawAllocations.m_depth = 0;
  this->m_cubReallocedTotal = 0;
  this->m_MapRawAllocation.m_Tree.m_LessFunc.m_LessFunc = CDefOps<void *>::LessFunc;
  if ( cnMemPoolConfig <= 0 )
  {
    m_nBlockSizeMax = this->m_nBlockSizeMax;
    v14 = 0;
  }
  else
  {
    v5 = pMemPoolConfig;
    v27 = &pMemPoolConfig[(cnMemPoolConfig - 1) + 1];
    p_m_Memory = &this->m_VecMemPool.m_Memory;
    do
    {
      v10 = (**g_pMemAlloc)(g_pMemAlloc, 119);
      v11 = ((v10 + 23) & 0xFFFFFFFFFFFFFFF0LL);
      *(&v11[-1].m_ptslistFreeBlocks + 1) = v10;
      CThreadSafeMemoryPool::CThreadSafeMemoryPool(v11, v5->m_cubBlockSize + 4, v5->m_cubDefaultPoolSize, nGrowMode);
      m_Size = this->m_VecMemPool.m_Size;
      m_nBlockSizeMax = v5->m_cubBlockSize;
      v13 = this->m_VecMemPool.m_Size;
      if ( m_Size == this->m_VecMemPool.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t,int>::Grow(p_m_Memory, 1);
        v13 = this->m_VecMemPool.m_Size;
      }
      v6 = m_Size;
      v7 = &this->m_VecMemPool.m_Memory.m_pMemory[v6] == 0;
      v8 = &this->m_VecMemPool.m_Memory.m_pMemory[v6];
      this->m_VecMemPool.m_Size = v13 + 1;
      if ( !v7 )
      {
        v8->m_pMemPool = v11;
        v8->m_nBlockSize = m_nBlockSizeMax;
      }
      if ( m_nBlockSizeMax < this->m_nBlockSizeMax )
        m_nBlockSizeMax = this->m_nBlockSizeMax;
      ++v5;
      this->m_nBlockSizeMax = m_nBlockSizeMax;
    }
    while ( v5 != v27 );
    v14 = this->m_VecMemPoolLookup.m_Size;
  }
  v15 = m_nBlockSizeMax >> 5;
  if ( v15 != 0 )
  {
    v16 = v15 + v14;
    m_nAllocationCount = this->m_VecMemPoolLookup.m_Memory.m_nAllocationCount;
    if ( v16 > m_nAllocationCount )
      CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t *,int>::Grow(
        &this->m_VecMemPoolLookup.m_Memory,
        v16 - m_nAllocationCount);
    this->m_VecMemPoolLookup.m_Size = v16;
    if ( v15 > 0 )
    {
      v18 = 0;
      for ( i = 0; i != v15; ++i )
      {
        while ( 1 )
        {
          v20 = 32 * i + 1;
          if ( this->m_VecMemPool.m_Size > 0 )
            break;
LABEL_22:
          ++i;
          ++v18;
          if ( v15 == i )
            return;
        }
        m_pMemory = this->m_VecMemPool.m_Memory.m_pMemory;
        if ( v20 > m_pMemory->m_nBlockSize )
        {
          v22 = m_pMemory + 1;
          v23 = &v22[this->m_VecMemPool.m_Size - 1];
          while ( v22 != v23 )
          {
            v24 = v22++;
            if ( v20 <= v22[-1].m_nBlockSize )
              goto LABEL_25;
          }
          goto LABEL_22;
        }
        v24 = this->m_VecMemPool.m_Memory.m_pMemory;
LABEL_25:
        this->m_VecMemPoolLookup.m_Memory.m_pMemory[v18++] = v24;
      }
    }
  }
}


// CThreadSafeMultiMemoryPool::~CThreadSafeMultiMemoryPool  (line 82, @0x000000000323de00, libserver.so)  // inlines: CAutoLockT, IsIdxValid, IsValidIndex, LeftChild, Lock, MemAlloc_FreeAlignedFunc, Purge, RemoveAll, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator delete, operator[], ~CAutoLockT, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: ThreadGetCurrentId, CThreadSafeMemoryPool::~CThreadSafeMemoryPool, ThreadInterlockedExchange64, CUtlRBTree<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int, CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int> >::RemoveAll, CThreadFastMutex::Lock(ulong long,uint), CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int>::Purge, CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t, int>::Purge, CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t*, int>::Purge
void __fastcall CThreadSafeMultiMemoryPool::~CThreadSafeMultiMemoryPool(CThreadSafeMultiMemoryPool *const this)
{
  CThreadFastMutex *p_m_mutexRawAllocations; // r14
  signed __int64 CurrentId; // rsi
  __int64 v4; // r15
  int i; // r13d
  CThreadSafeMultiMemoryPool::MemPoolRecord_t *m_pMemory; // rax
  CThreadSafeMemoryPool *m_pMemPool; // rbx
  int m_nAllocationCount; // eax
  __int64 v9; // r13
  __int64 j; // rbx
  UtlRBTreeNode_t<CUtlMap<void*,CThreadSafeMultiMemoryPool::RawAllocation_t,int>::Node_t,int> *v11; // rdx
  bool v12; // zf

  p_m_mutexRawAllocations = &this->m_mutexRawAllocations;
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId != this->m_mutexRawAllocations.m_ownerID
    && _InterlockedCompareExchange64(p_m_mutexRawAllocations, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutexRawAllocations, CurrentId, 0);
  }
  else
  {
    ++this->m_mutexRawAllocations.m_depth;
  }
  v4 = 0;
  for ( i = 0; this->m_VecMemPool.m_Size > i; ++v4 )
  {
    m_pMemory = this->m_VecMemPool.m_Memory.m_pMemory;
    m_pMemPool = m_pMemory[v4].m_pMemPool;
    if ( m_pMemPool != 0 )
    {
      CThreadSafeMemoryPool::~CThreadSafeMemoryPool(m_pMemory[v4].m_pMemPool);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pMemPool & 0xFFFFFFFFFFFFFFF8LL) - 8));
    }
    ++i;
  }
  m_nAllocationCount = this->m_MapRawAllocation.m_Tree.m_Elements.m_nAllocationCount;
  v9 = 0;
  for ( j = 0; m_nAllocationCount > j; ++j )
  {
    if ( j < m_nAllocationCount && j <= this->m_MapRawAllocation.m_Tree.m_LastAlloc.index )
    {
      v11 = &this->m_MapRawAllocation.m_Tree.m_Elements.m_pMemory[v9];
      if ( j != v11->m_Left )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v11->m_Data.elem.m_pvMem);
        m_nAllocationCount = this->m_MapRawAllocation.m_Tree.m_Elements.m_nAllocationCount;
      }
    }
    ++v9;
  }
  if ( --this->m_mutexRawAllocations.m_depth == 0 )
    ThreadInterlockedExchange64(p_m_mutexRawAllocations, 0);
  CUtlRBTree<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int,CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>>::RemoveAll(&this->m_MapRawAllocation.m_Tree);
  v12 = (this->m_MapRawAllocation.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_MapRawAllocation.m_Tree.m_FirstFree = -1;
  if ( v12 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>::Purge(&this->m_MapRawAllocation.m_Tree.m_Elements);
    v12 = (this->m_MapRawAllocation.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_MapRawAllocation.m_Tree.m_LastAlloc.index = -1;
    if ( v12 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>::Purge(&this->m_MapRawAllocation.m_Tree.m_Elements);
  }
  else
  {
    this->m_MapRawAllocation.m_Tree.m_LastAlloc.index = -1;
  }
  v12 = (this->m_VecMemPoolLookup.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_VecMemPoolLookup.m_Size = 0;
  if ( v12 )
  {
    CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t *,int>::Purge(&this->m_VecMemPoolLookup.m_Memory);
    if ( (this->m_VecMemPoolLookup.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t *,int>::Purge(&this->m_VecMemPoolLookup.m_Memory);
  }
  v12 = (this->m_VecMemPool.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_VecMemPool.m_Size = 0;
  if ( v12 )
  {
    CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t,int>::Purge(&this->m_VecMemPool.m_Memory);
    if ( (this->m_VecMemPool.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t,int>::Purge(&this->m_VecMemPool.m_Memory);
  }
}


// CThreadSafeMultiMemoryPool::Alloc  (line 103, @0x000000000323e310, libserver.so)  // inlines: CAutoLockT, Insert, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, ~CAutoLockT
// calls: ThreadGetCurrentId, CUtlRBTree<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int, CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int> >::Insert, ThreadInterlockedExchange64, CThreadSafeMemoryPool::Alloc, CThreadFastMutex::Lock(ulong long,uint), _Unwind_Resume
// callers: GCSDK::CProtoBufMsgBase::AllocateMessageMemory, GCSDK::CNetPacket::Init, CThreadSafeMultiMemoryPool::ReAlloc
void *__fastcall CThreadSafeMultiMemoryPool::Alloc(CThreadSafeMultiMemoryPool *const this, uint32 cubAllocSize)
{
  uint32 *v4; // rax
  uint32 *v5; // r13
  signed __int64 CurrentId; // rsi
  void *v7; // r13
  _DWORD *v9; // rax
  CUtlMap<void*,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void* const&,void* const&)>::Node_t insert; // [rsp+0h] [rbp-40h] BYREF

  if ( cubAllocSize == 0 )
    return 0;
  if ( cubAllocSize <= this->m_nBlockSizeMax )
  {
    v9 = CThreadSafeMemoryPool::Alloc(
           this->m_VecMemPoolLookup.m_Memory.m_pMemory[(cubAllocSize - 1) >> 5]->m_pMemPool,
           cubAllocSize + 4);
    *v9 = cubAllocSize;
    return v9 + 1;
  }
  v4 = (**g_pMemAlloc)(g_pMemAlloc, cubAllocSize + 4);
  v5 = v4;
  if ( v4 == 0 )
    return 0;
  *v4 = cubAllocSize;
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId != this->m_mutexRawAllocations.m_ownerID
    && _InterlockedCompareExchange64(&this->m_mutexRawAllocations, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&this->m_mutexRawAllocations, CurrentId, 0);
  }
  else
  {
    ++this->m_mutexRawAllocations.m_depth;
  }
  insert.key = v5;
  insert.elem.m_pvMem = v5;
  insert.elem.m_nBlockSize = cubAllocSize;
  CUtlRBTree<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int,CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>>::Insert(
    &this->m_MapRawAllocation.m_Tree,
    &insert,
    ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  v7 = v5 + 1;
  if ( --this->m_mutexRawAllocations.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_mutexRawAllocations, 0);
  return v7;
}


// CThreadSafeMultiMemoryPool::Free  (line 136, @0x000000000323e460, libserver.so)  // inlines: CAutoLockT, Element, Find, Lock, RemoveAt, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CUtlRBTree<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int, CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int> >::Find, CUtlRBTree<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int, CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int> >::RemoveAt, CThreadSafeMemoryPool::Free, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), _Unwind_Resume
// callers: GCSDK::CProtoBufMsgBase::BAsyncSendProto, GCSDK::CProtoBufMsgBase::BAsyncSendWithPreSerializedBody, GCSDK::CProtoBufMsgBase::FreeMessageMemory, GCSDK::CNetPacket::Release, CThreadSafeMultiMemoryPool::ReAlloc
void __fastcall CThreadSafeMultiMemoryPool::Free(CThreadSafeMultiMemoryPool *const this, void *pvMem)
{
  uint32 v3; // eax
  CThreadFastMutex *p_m_mutexRawAllocations; // r13
  signed __int64 CurrentId; // rsi
  int v7; // eax
  int v8; // r12d
  CUtlMap<void*,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void* const&,void* const&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  if ( pvMem != 0 )
  {
    v3 = *(pvMem - 1);
    if ( v3 <= this->m_nBlockSizeMax )
    {
      CThreadSafeMemoryPool::Free(
        this->m_VecMemPoolLookup.m_Memory.m_pMemory[(v3 - 1) >> 5]->m_pMemPool,
        pvMem - 4,
        v3 + 4);
      return;
    }
    p_m_mutexRawAllocations = &this->m_mutexRawAllocations;
    CurrentId = ThreadGetCurrentId();
    if ( CurrentId != this->m_mutexRawAllocations.m_ownerID
      && _InterlockedCompareExchange64(p_m_mutexRawAllocations, CurrentId, 0) != 0 )
    {
      _mm_pause();
      CThreadFastMutex::Lock(p_m_mutexRawAllocations, CurrentId, 0);
    }
    else
    {
      ++this->m_mutexRawAllocations.m_depth;
    }
    search.key = pvMem - 4;
    v7 = CUtlRBTree<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int,CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>>::Find(
           &this->m_MapRawAllocation.m_Tree,
           &search);
    v8 = v7;
    if ( v7 != -1 )
    {
      (*(*g_pMemAlloc + 16LL))(
        g_pMemAlloc,
        this->m_MapRawAllocation.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem.m_pvMem);
      CUtlRBTree<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int,CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>>::RemoveAt(
        &this->m_MapRawAllocation.m_Tree,
        v8);
      if ( --this->m_mutexRawAllocations.m_depth != 0 )
        return;
LABEL_13:
      ThreadInterlockedExchange64(p_m_mutexRawAllocations, 0);
      return;
    }
    if ( --this->m_mutexRawAllocations.m_depth == 0 )
      goto LABEL_13;
  }
}


// CThreadSafeMultiMemoryPool::CubAllocSize  (line 173, @0x000000000323d8a0, libserver.so)
int __fastcall CThreadSafeMultiMemoryPool::CubAllocSize(CThreadSafeMultiMemoryPool *const this, void *pvMem)
{
  if ( pvMem != 0 )
    return *(pvMem - 1);
  else
    return -1;
}


// CThreadSafeMultiMemoryPool::Clear  (line 187, @0x000000000323dcb0, libserver.so)  // inlines: CAutoLockT, IsIdxValid, IsValidIndex, LeftChild, Lock, RemoveAll, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CThreadSafeMemoryPool::Clear, CUtlRBTree<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int, CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int> >::RemoveAll, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, _Unwind_Resume
void __fastcall CThreadSafeMultiMemoryPool::Clear(CThreadSafeMultiMemoryPool *const this)
{
  CThreadFastMutex *p_m_mutexRawAllocations; // r14
  signed __int64 CurrentId; // rsi
  __int64 v4; // r13
  int i; // ebx
  int m_nAllocationCount; // eax
  __int64 v7; // r13
  __int64 j; // rbx
  UtlRBTreeNode_t<CUtlMap<void*,CThreadSafeMultiMemoryPool::RawAllocation_t,int>::Node_t,int> *v9; // rdx

  p_m_mutexRawAllocations = &this->m_mutexRawAllocations;
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId != this->m_mutexRawAllocations.m_ownerID
    && _InterlockedCompareExchange64(p_m_mutexRawAllocations, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutexRawAllocations, CurrentId, 0);
  }
  else
  {
    ++this->m_mutexRawAllocations.m_depth;
  }
  v4 = 0;
  for ( i = 0; this->m_VecMemPool.m_Size > i; ++v4 )
  {
    CThreadSafeMemoryPool::Clear(this->m_VecMemPool.m_Memory.m_pMemory[v4].m_pMemPool);
    ++i;
  }
  m_nAllocationCount = this->m_MapRawAllocation.m_Tree.m_Elements.m_nAllocationCount;
  v7 = 0;
  for ( j = 0; m_nAllocationCount > j; ++j )
  {
    if ( j < m_nAllocationCount && j <= this->m_MapRawAllocation.m_Tree.m_LastAlloc.index )
    {
      v9 = &this->m_MapRawAllocation.m_Tree.m_Elements.m_pMemory[v7];
      if ( j != v9->m_Left )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9->m_Data.elem.m_pvMem);
        m_nAllocationCount = this->m_MapRawAllocation.m_Tree.m_Elements.m_nAllocationCount;
      }
    }
    ++v7;
  }
  CUtlRBTree<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int,CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>>::RemoveAll(&this->m_MapRawAllocation.m_Tree);
  if ( --this->m_mutexRawAllocations.m_depth == 0 )
    ThreadInterlockedExchange64(p_m_mutexRawAllocations, 0);
}


// CThreadSafeMultiMemoryPool::PrintStats  (line 207, @0x000000000323d8c0, libserver.so)  // inlines: CAutoLockT, IsIdxValid, IsValidIndex, LeftChild, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: CThreadSafeMemoryPool::PrintStats, ThreadGetCurrentId, V_pretifymem, Msg, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, _Unwind_Resume
// strings: "Raw bytes alloc'd: %s\n", "Cumulative bytes re-alloced: %s\n"
void __fastcall CThreadSafeMultiMemoryPool::PrintStats(CThreadSafeMultiMemoryPool *const this)
{
  __int64 v1; // r13
  int i; // r12d
  CThreadSafeMemoryPool *m_pMemPool; // rdi
  signed __int64 CurrentId; // rsi
  int m_nAllocationCount; // esi
  float v7; // xmm0_4
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // r8d
  UtlRBTreeNode_t<CUtlMap<void*,CThreadSafeMultiMemoryPool::RawAllocation_t,int>::Node_t,int> *v11; // rdi
  const char *v12; // rax
  const char *v13; // rax

  v1 = 0;
  for ( i = 0; this->m_VecMemPool.m_Size > i; ++i )
  {
    m_pMemPool = this->m_VecMemPool.m_Memory.m_pMemory[v1++].m_pMemPool;
    CThreadSafeMemoryPool::PrintStats(m_pMemPool);
  }
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId != this->m_mutexRawAllocations.m_ownerID
    && _InterlockedCompareExchange64(&this->m_mutexRawAllocations, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&this->m_mutexRawAllocations, CurrentId, 0);
  }
  else
  {
    ++this->m_mutexRawAllocations.m_depth;
  }
  m_nAllocationCount = this->m_MapRawAllocation.m_Tree.m_Elements.m_nAllocationCount;
  v7 = 0.0;
  if ( m_nAllocationCount > 0 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    do
    {
      if ( v9 < m_nAllocationCount && v9 <= this->m_MapRawAllocation.m_Tree.m_LastAlloc.index )
      {
        v11 = &this->m_MapRawAllocation.m_Tree.m_Elements.m_pMemory[v8];
        if ( v9 != v11->m_Left )
          v10 += v11->m_Data.elem.m_nBlockSize;
      }
      ++v9;
      ++v8;
    }
    while ( m_nAllocationCount > v9 );
    v7 = v10;
  }
  v12 = V_pretifymem(2, 1, v7);
  Msg("Raw bytes alloc'd: %s\n", v12);
  v13 = V_pretifymem(2, 1, this->m_cubReallocedTotal);
  Msg("Cumulative bytes re-alloced: %s\n", v13);
  if ( --this->m_mutexRawAllocations.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_mutexRawAllocations, 0);
}


// CThreadSafeMultiMemoryPool::CMBPoolSize  (line 227, @0x000000000323da30, libserver.so)  // inlines: CAutoLockT, IsIdxValid, IsValidIndex, LeftChild, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: CThreadSafeMemoryPool::CubTotalSize, ThreadGetCurrentId, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint)
int __fastcall CThreadSafeMultiMemoryPool::CMBPoolSize(const CThreadSafeMultiMemoryPool *const this)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r13
  signed __int64 CurrentId; // rsi
  int m_nAllocationCount; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  UtlRBTreeNode_t<CUtlMap<void*,CThreadSafeMultiMemoryPool::RawAllocation_t,int>::Node_t,int> *v8; // rdi
  unsigned __int64 v9; // r13

  if ( this->m_VecMemPool.m_Size <= 0 )
  {
    v3 = 0;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    do
      v3 += CThreadSafeMemoryPool::CubTotalSize(this->m_VecMemPool.m_Memory.m_pMemory[v2++].m_pMemPool);
    while ( v2 < this->m_VecMemPool.m_Size );
  }
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId != this->m_mutexRawAllocations.m_ownerID
    && _InterlockedCompareExchange64(&this->m_mutexRawAllocations, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&this->m_mutexRawAllocations, CurrentId, 0);
  }
  else
  {
    ++this->m_mutexRawAllocations.m_depth;
  }
  m_nAllocationCount = this->m_MapRawAllocation.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v7 < m_nAllocationCount && v7 <= this->m_MapRawAllocation.m_Tree.m_LastAlloc.index )
      {
        v8 = &this->m_MapRawAllocation.m_Tree.m_Elements.m_pMemory[v6];
        if ( v7 != v8->m_Left )
          v3 += v8->m_Data.elem.m_nBlockSize;
      }
      ++v7;
      ++v6;
    }
    while ( m_nAllocationCount > v7 );
  }
  v9 = v3 >> 20;
  if ( --this->m_mutexRawAllocations.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_mutexRawAllocations, 0);
  return v9;
}


// CThreadSafeMultiMemoryPool::CMBPoolSizeInUse  (line 246, @0x000000000323db40, libserver.so)  // inlines: CAutoLockT, IsIdxValid, IsValidIndex, LeftChild, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: CThreadSafeMemoryPool::CubSizeInUse, ThreadGetCurrentId, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint)
int __fastcall CThreadSafeMultiMemoryPool::CMBPoolSizeInUse(const CThreadSafeMultiMemoryPool *const this)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r13
  signed __int64 CurrentId; // rsi
  int m_nAllocationCount; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  UtlRBTreeNode_t<CUtlMap<void*,CThreadSafeMultiMemoryPool::RawAllocation_t,int>::Node_t,int> *v8; // rdi
  unsigned __int64 v9; // r13

  if ( this->m_VecMemPool.m_Size <= 0 )
  {
    v3 = 0;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    do
      v3 += CThreadSafeMemoryPool::CubSizeInUse(this->m_VecMemPool.m_Memory.m_pMemory[v2++].m_pMemPool);
    while ( v2 < this->m_VecMemPool.m_Size );
  }
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId != this->m_mutexRawAllocations.m_ownerID
    && _InterlockedCompareExchange64(&this->m_mutexRawAllocations, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&this->m_mutexRawAllocations, CurrentId, 0);
  }
  else
  {
    ++this->m_mutexRawAllocations.m_depth;
  }
  m_nAllocationCount = this->m_MapRawAllocation.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v7 < m_nAllocationCount && v7 <= this->m_MapRawAllocation.m_Tree.m_LastAlloc.index )
      {
        v8 = &this->m_MapRawAllocation.m_Tree.m_Elements.m_pMemory[v6];
        if ( v7 != v8->m_Left )
          v3 += v8->m_Data.elem.m_nBlockSize;
      }
      ++v7;
      ++v6;
    }
    while ( m_nAllocationCount > v7 );
  }
  v9 = v3 >> 20;
  if ( --this->m_mutexRawAllocations.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_mutexRawAllocations, 0);
  return v9;
}


// CThreadSafeMultiMemoryPool::Count  (line 266, @0x000000000323dc50, libserver.so)
// calls: CThreadSafeMemoryPool::Count
int __fastcall CThreadSafeMultiMemoryPool::Count(CThreadSafeMultiMemoryPool *const this)
{
  __int64 v2; // rbx
  int v3; // r13d

  if ( this->m_VecMemPool.m_Size <= 0 )
    return 0;
  v2 = 0;
  v3 = 0;
  do
    v3 += CThreadSafeMemoryPool::Count(this->m_VecMemPool.m_Memory.m_pMemory[v2++].m_pMemPool);
  while ( this->m_VecMemPool.m_Size > v2 );
  return v3;
}


// CThreadSafeMultiMemoryPool::ReAlloc  (line 283, @0x000000000323e5e0, libserver.so)  // inlines: CAutoLockT, CubAllocSize, Element, Find, Insert, Lock, RemoveAt, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, V_memcpy, memcpy, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), CUtlRBTree<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int, CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int> >::Find, CUtlRBTree<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int, CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int> >::RemoveAt, CUtlRBTree<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int, CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int> >::Insert, ThreadInterlockedExchange64, CThreadSafeMultiMemoryPool::Alloc, memcpy, CThreadSafeMultiMemoryPool::Free, _Unwind_Resume
void *__fastcall CThreadSafeMultiMemoryPool::ReAlloc(
        CThreadSafeMultiMemoryPool *const this,
        void *pvMem,
        uint32 cubAlloc)
{
  char *v3; // r14
  uint32 v6; // r15d
  CThreadFastMutex *p_m_mutexRawAllocations; // r15
  signed __int64 CurrentId; // rsi
  uint32 *v9; // r13
  uint32 *v10; // rax
  void *v12; // rax
  void *v13; // r13
  __int64 v14; // rax
  int iRawAllocation; // [rsp+4h] [rbp-7Ch]
  CThreadFastMutex *generated_id_291; // [rsp+8h] [rbp-78h]
  CUtlMap<void*,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void* const&,void* const&)>::Node_t search; // [rsp+10h] [rbp-70h] BYREF
  CUtlMap<void*,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void* const&,void* const&)>::Node_t insert; // [rsp+30h] [rbp-50h] BYREF

  v3 = pvMem;
  if ( pvMem != 0 )
  {
    v6 = *(pvMem - 1);
    if ( cubAlloc <= v6 )
      return v3;
    if ( this->m_nBlockSizeMax < v6 )
      goto LABEL_4;
LABEL_16:
    if ( cubAlloc > this->m_VecMemPoolLookup.m_Memory.m_pMemory[(v6 - 1) >> 5]->m_nBlockSize )
    {
      v12 = CThreadSafeMultiMemoryPool::Alloc(this, cubAlloc);
      v13 = v12;
      if ( v12 != 0 )
      {
        this->m_cubReallocedTotal += v6;
        memcpy(v12, v3, v6);
        CThreadSafeMultiMemoryPool::Free(this, v3);
        return v13;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      *(pvMem - 1) = cubAlloc;
    }
    return v3;
  }
  v6 = -1;
  if ( this->m_nBlockSizeMax == -1 )
    goto LABEL_16;
LABEL_4:
  p_m_mutexRawAllocations = &this->m_mutexRawAllocations;
  generated_id_291 = &this->m_mutexRawAllocations;
  CurrentId = ThreadGetCurrentId();
  if ( CurrentId == this->m_mutexRawAllocations.m_ownerID
    || _InterlockedCompareExchange64(p_m_mutexRawAllocations, CurrentId, 0) == 0 )
  {
    ++this->m_mutexRawAllocations.m_depth;
  }
  else
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_291, CurrentId, 0);
  }
  v9 = (v3 - 4);
  search.key = v3 - 4;
  iRawAllocation = CUtlRBTree<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int,CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>>::Find(
                     &this->m_MapRawAllocation.m_Tree,
                     &search);
  if ( iRawAllocation == -1 )
  {
    v3 = 0;
  }
  else
  {
    v10 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v3 - 4, cubAlloc + 4);
    v3 = v10;
    if ( v10 != 0 )
    {
      *v10 = cubAlloc;
      if ( v10 == v9 )
      {
        v14 = iRawAllocation;
        this->m_MapRawAllocation.m_Tree.m_Elements.m_pMemory[v14].m_Data.elem.m_pvMem = v9;
        this->m_MapRawAllocation.m_Tree.m_Elements.m_pMemory[v14].m_Data.elem.m_nBlockSize = cubAlloc;
      }
      else
      {
        CUtlRBTree<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int,CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>>::RemoveAt(
          &this->m_MapRawAllocation.m_Tree,
          iRawAllocation);
        insert.key = v3;
        insert.elem.m_pvMem = v3;
        insert.elem.m_nBlockSize = cubAlloc;
        CUtlRBTree<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int,CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>>::Insert(
          &this->m_MapRawAllocation.m_Tree,
          &insert,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      }
      v3 += 4;
    }
    else
    {
      CUtlRBTree<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int,CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<void *,CThreadSafeMultiMemoryPool::RawAllocation_t,int,bool (*)(void * const&,void * const&)>::Node_t,int>,int>>::RemoveAt(
        &this->m_MapRawAllocation.m_Tree,
        iRawAllocation);
    }
  }
  if ( --this->m_mutexRawAllocations.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_291, 0);
  return v3;
}


