
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_tsmempool.cpp  (line 0, @0x0000000001a6e8d0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_tsmempool_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CThreadSafeMemoryPool::CThreadSafeMemoryPool  (line 29, @0x00000000032472d0, libserver.so)  // inlines: CInterlockedIntT, CTSListBase, CThreadSpinRWLock, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, memset, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator new, _Unwind_Resume, CUtlMemory<CThreadSafeMemoryPool::BlockSet_t, int>::Purge
// callers: CThreadSafeMultiMemoryPool::CThreadSafeMultiMemoryPool
void __fastcall CThreadSafeMemoryPool::CThreadSafeMemoryPool(
        CThreadSafeMemoryPool *const this,
        int blockSize,
        int numElements,
        int growMode)
{
  CTSListBase *v8; // rax

  this->m_threadRWLock.m_nWriters.m_value = 0;
  this->m_threadRWLock.m_lockInfo.m_i128 = 0u;
  *&this->m_threadRWLock.m_nWriters.m_value = 0;
  *(&this->m_threadRWLock.m_nWriters + 1) = 0;
  this->m_cBlocksInUse.m_value = 0;
  this->m_vecBlockSets.m_Size = 0;
  this->m_vecBlockSets.m_Memory.m_pMemory = 0;
  this->m_vecBlockSets.m_Memory.m_nAllocationCount = 0;
  this->m_vecBlockSets.m_Memory.m_nGrowSize = 0;
  v8 = operator new(0x10u);
  v8->m_Head.value.Next = 0;
  *(&v8->m_Head.value64x128 + 1) = 0;
  this->m_ptslistFreeBlocks = v8;
  if ( (blockSize & 0xF) != 0 )
    blockSize += ((blockSize >> 31) >> 28) - ((blockSize + ((blockSize >> 31) >> 28)) & 0xF) + 16;
  this->m_nGrowMode = growMode;
  this->m_cubBlockSize = blockSize;
  this->m_nGrowSize = numElements;
  this->m_cubAllocated = 0;
}


// CThreadSafeMemoryPool::~CThreadSafeMemoryPool  (line 50, @0x00000000032473d0, libserver.so)  // inlines: AssignIf, CRWLockAutoWrite, Detach, LockForWrite, MemAlloc_FreeAlignedFunc, Purge, RemoveAll, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, operator++, ~CRWLockAutoWrite, ~CTSListBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: ThreadGetCurrentId, CThreadSpinRWLock::SpinLockForWrite(ulong long), operator delete, CThreadSpinRWLock::UnlockWrite(void), CUtlMemory<CThreadSafeMemoryPool::BlockSet_t, int>::Purge
// callers: CThreadSafeMultiMemoryPool::~CThreadSafeMultiMemoryPool
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
void __fastcall CThreadSafeMemoryPool::~CThreadSafeMemoryPool(CThreadSafeMemoryPool *const this)
{
  __int64 CurrentId; // rsi
  __int64 v3; // r12
  int i; // ebx
  uint8 *m_pubBlockSet; // rax
  CTSListBase *m_ptslistFreeBlocks; // rdi
  unsigned __int64 v7; // rcx
  TSLHead_t m_Head; // rt0
  bool v9; // zf
  __int128 v10; // rt0

  CurrentId = ThreadGetCurrentId();
  _InterlockedAdd(&this->m_threadRWLock.m_nWriters.m_value, 1u);
  if ( this->m_threadRWLock.m_lockInfo.m_nReaders > 0
    || this->m_threadRWLock.m_lockInfo.m_writerId != 0 && CurrentId != this->m_threadRWLock.m_lockInfo.m_writerId
    || (v10 = 0u, _InterlockedCompareExchange128(this, 0, CurrentId, &v10) == 0) )
  {
    _mm_pause();
    CThreadSpinRWLock::SpinLockForWrite(&this->m_threadRWLock, CurrentId);
  }
  v3 = 0;
  for ( i = 0; this->m_vecBlockSets.m_Size > i; ++v3 )
  {
    m_pubBlockSet = this->m_vecBlockSets.m_Memory.m_pMemory[v3].m_pubBlockSet;
    if ( m_pubBlockSet != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pubBlockSet & 0xFFFFFFFFFFFFFFF8LL) - 8));
    ++i;
  }
  m_ptslistFreeBlocks = this->m_ptslistFreeBlocks;
  v7 = 0;
  if ( m_ptslistFreeBlocks != 0 )
  {
    do
    {
      _mm_pause();
      if ( m_ptslistFreeBlocks->m_Head.value.Next == 0 )
        break;
      v7 = *(&m_ptslistFreeBlocks->m_Head.value64x128 + 1) & 0xFFFF0000LL | v7 & 0xFFFFFFFF00000000LL;
      m_Head = m_ptslistFreeBlocks->m_Head;
    }
    while ( _InterlockedCompareExchange128(m_ptslistFreeBlocks, v7, 0, &m_Head) == 0 );
    operator delete(m_ptslistFreeBlocks);
  }
  CThreadSpinRWLock::UnlockWrite(&this->m_threadRWLock);
  v9 = (this->m_vecBlockSets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecBlockSets.m_Size = 0;
  if ( v9 )
  {
    CUtlMemory<CThreadSafeMemoryPool::BlockSet_t,int>::Purge(&this->m_vecBlockSets.m_Memory);
    if ( (this->m_vecBlockSets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CThreadSafeMemoryPool::BlockSet_t,int>::Purge(&this->m_vecBlockSets.m_Memory);
  }
}


// CThreadSafeMemoryPool::Clear  (line 65, @0x00000000032475d0, libserver.so)  // inlines: AssignIf, CRWLockAutoWrite, LockForWrite, ThreadInterlockedAssignIf128, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, operator++, ~CRWLockAutoWrite
// calls: ThreadGetCurrentId, CThreadSpinRWLock::SpinLockForWrite(ulong long), CThreadSafeMemoryPool::ClearNoLock, CThreadSpinRWLock::UnlockWrite(void), _Unwind_Resume
// callers: CThreadSafeMultiMemoryPool::Clear
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
void __fastcall CThreadSafeMemoryPool::Clear(CThreadSafeMemoryPool *const this)
{
  __int64 CurrentId; // rsi
  __int128 v3; // rt0

  CurrentId = ThreadGetCurrentId();
  _InterlockedAdd(&this->m_threadRWLock.m_nWriters.m_value, 1u);
  if ( this->m_threadRWLock.m_lockInfo.m_nReaders > 0
    || this->m_threadRWLock.m_lockInfo.m_writerId != 0 && CurrentId != this->m_threadRWLock.m_lockInfo.m_writerId
    || (v3 = 0u, _InterlockedCompareExchange128(this, 0, CurrentId, &v3) == 0) )
  {
    _mm_pause();
    CThreadSpinRWLock::SpinLockForWrite(&this->m_threadRWLock, CurrentId);
  }
  CThreadSafeMemoryPool::ClearNoLock(this);
  CThreadSpinRWLock::UnlockWrite(&this->m_threadRWLock);
}


// CThreadSafeMemoryPool::ClearNoLock  (line 75, @0x0000000003247520, libserver.so)  // inlines: Detach, MemAlloc_FreeAlignedFunc, RemoveAll, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedExchange, ThreadPause, operator=
// callers: CThreadSafeMemoryPool::Clear, CThreadSafeMemoryPool::Free
void __fastcall CThreadSafeMemoryPool::ClearNoLock(CThreadSafeMemoryPool *const this)
{
  __int64 v2; // r12
  int i; // ebx
  uint8 *m_pubBlockSet; // rax
  CTSListBase *m_ptslistFreeBlocks; // rsi
  unsigned __int64 v6; // rcx
  TSLHead_t m_Head; // rt0

  v2 = 0;
  for ( i = 0; this->m_vecBlockSets.m_Size > i; ++v2 )
  {
    m_pubBlockSet = this->m_vecBlockSets.m_Memory.m_pMemory[v2].m_pubBlockSet;
    if ( m_pubBlockSet != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((m_pubBlockSet & 0xFFFFFFFFFFFFFFF8LL) - 8));
    ++i;
  }
  m_ptslistFreeBlocks = this->m_ptslistFreeBlocks;
  v6 = 0;
  do
  {
    _mm_pause();
    if ( m_ptslistFreeBlocks->m_Head.value.Next == 0 )
      break;
    v6 = *(&m_ptslistFreeBlocks->m_Head.value64x128 + 1) & 0xFFFF0000LL | v6 & 0xFFFFFFFF00000000LL;
    m_Head = m_ptslistFreeBlocks->m_Head;
  }
  while ( _InterlockedCompareExchange128(m_ptslistFreeBlocks, v6, 0, &m_Head) == 0 );
  this->m_cubAllocated = 0;
  _InterlockedExchange(&this->m_cBlocksInUse.m_value, 0);
  this->m_vecBlockSets.m_Size = 0;
}


// CThreadSafeMemoryPool::Alloc  (line 91, @0x0000000003247b60, libserver.so)
// calls: CThreadSafeMemoryPool::Alloc
void *__fastcall CThreadSafeMemoryPool::Alloc(CThreadSafeMemoryPool *const this)
{
  return CThreadSafeMemoryPool::Alloc(this, this->m_cubBlockSize);
}


// CThreadSafeMemoryPool::Alloc  (line 100, @0x00000000032478b0, libserver.so)  // inlines: AddToTail, AssignIf, CRWLockAutoWrite, CopyConstruct<CThreadSafeMemoryPool::BlockSet_t>, Element, GrowMemory, LockForWrite, MemAlloc_AllocAlignedFunc, Pop, Push, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, operator++, operator[], ~CRWLockAutoWrite
// calls: CThreadSpinRWLock::LockForRead(void), CThreadSpinRWLock::UnlockRead(void), ThreadGetCurrentId, CThreadSpinRWLock::SpinLockForWrite(ulong long), CThreadSpinRWLock::UnlockWrite(void), CUtlMemory<CThreadSafeMemoryPool::BlockSet_t, int>::Grow, _Unwind_Resume
// callers: CThreadSafeMultiMemoryPool::Alloc, CThreadSafeMemoryPool::Alloc
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
void *__fastcall CThreadSafeMemoryPool::Alloc(CThreadSafeMemoryPool *const this, unsigned int amount)
{
  int v2; // r12d
  unsigned int v3; // r14d
  CTSListBase *m_ptslistFreeBlocks; // rsi
  __int64 v6; // rdx
  signed __int64 *Next; // rdi
  unsigned __int64 v8; // rcx
  __int128 v9; // rt0
  signed __int64 *v10; // rbx
  __int64 CurrentId; // rax
  int m_nGrowMode; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  uint8 *v16; // rbx
  CTSListBase *v17; // rsi
  TSLHead_t m_Head; // rax
  TSLHead_t v19; // rt0
  __int64 m_Size; // rbx
  int v21; // eax
  __int64 v22; // rbx
  bool v23; // zf
  CThreadSafeMemoryPool::BlockSet_t *v24; // rbx
  __int128 v25; // rt0
  CUtlVectorBase<CThreadSafeMemoryPool::BlockSet_t,CUtlMemory<CThreadSafeMemoryPool::BlockSet_t,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-50h]
  int cAttempts; // [rsp+Ch] [rbp-44h]
  uint8 *pBlob; // [rsp+10h] [rbp-40h]
  size_t cubBlob; // [rsp+18h] [rbp-38h]

  cAttempts = 999;
  p_m_Memory = &this->m_vecBlockSets.m_Memory;
  while ( 1 )
  {
    CThreadSpinRWLock::LockForRead(&this->m_threadRWLock);
    m_ptslistFreeBlocks = this->m_ptslistFreeBlocks;
    v6 = *(&m_ptslistFreeBlocks->m_Head.value64x128 + 1);
    if ( m_ptslistFreeBlocks->m_Head.value.Next != 0 )
    {
      Next = m_ptslistFreeBlocks->m_Head.value.Next;
      v8 = v3;
      do
      {
        v8 = (v6 - 1) | v8 & 0xFFFFFFFF00000000LL;
        *&v9 = Next;
        *(&v9 + 1) = v6;
        if ( _InterlockedCompareExchange128(m_ptslistFreeBlocks, v8, *Next, &v9) != 0 )
        {
          v10 = Next;
          CThreadSpinRWLock::UnlockRead(&this->m_threadRWLock);
          _InterlockedAdd(&this->m_cBlocksInUse.m_value, 1u);
          return v10;
        }
        _mm_pause();
        Next = m_ptslistFreeBlocks->m_Head.value.Next;
        v6 = *(&m_ptslistFreeBlocks->m_Head.value64x128 + 1);
      }
      while ( m_ptslistFreeBlocks->m_Head.value.Next != 0 );
      v3 = v8;
    }
    CThreadSpinRWLock::UnlockRead(&this->m_threadRWLock);
    CurrentId = ThreadGetCurrentId();
    _InterlockedAdd(&this->m_threadRWLock.m_nWriters.m_value, 1u);
    if ( this->m_threadRWLock.m_lockInfo.m_nReaders > 0
      || this->m_threadRWLock.m_lockInfo.m_writerId != 0 && CurrentId != this->m_threadRWLock.m_lockInfo.m_writerId
      || (v25 = 0u, _InterlockedCompareExchange128(this, 0, CurrentId, &v25) == 0) )
    {
      _mm_pause();
      CThreadSpinRWLock::SpinLockForWrite(&this->m_threadRWLock, CurrentId);
    }
    if ( this->m_ptslistFreeBlocks->m_Head.value.Depth > 0 )
      goto LABEL_24;
    cubBlob = this->m_cubBlockSize * this->m_nGrowSize;
    m_nGrowMode = this->m_nGrowMode;
    if ( m_nGrowMode == 1 )
    {
      cubBlob *= this->m_vecBlockSets.m_Size + 1;
      if ( cubBlob == 0 )
        break;
      goto LABEL_15;
    }
    if ( m_nGrowMode == 0 && this->m_vecBlockSets.m_Size == 1 || this->m_cubBlockSize * this->m_nGrowSize == 0 )
      break;
LABEL_15:
    v14 = (**g_pMemAlloc)(g_pMemAlloc, cubBlob + 23);
    LODWORD(v15) = v2;
    pBlob = ((v14 + 23) & 0xFFFFFFFFFFFFFFF0LL);
    *(pBlob - 1) = v14;
    v16 = pBlob;
    if ( &pBlob[cubBlob] > pBlob )
    {
      do
      {
        v17 = this->m_ptslistFreeBlocks;
        v15 = v15;
        while ( 1 )
        {
          m_Head = v17->m_Head;
          v15 = (*(&v17->m_Head.value64x128 + 1) + 65537) | v15 & 0xFFFFFFFF00000000LL;
          *v16 = v17->m_Head.value.Next;
          v19 = m_Head;
          if ( _InterlockedCompareExchange128(v17, v15, v16, &v19) != 0 )
            break;
          _mm_pause();
        }
        v16 += this->m_cubBlockSize;
      }
      while ( &pBlob[cubBlob] > v16 );
      v2 = v15;
    }
    m_Size = this->m_vecBlockSets.m_Size;
    this->m_cubAllocated += cubBlob;
    if ( m_Size == this->m_vecBlockSets.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CThreadSafeMemoryPool::BlockSet_t,int>::Grow(p_m_Memory, 1);
      v21 = this->m_vecBlockSets.m_Size;
    }
    else
    {
      v21 = m_Size;
    }
    v22 = m_Size;
    v23 = &this->m_vecBlockSets.m_Memory.m_pMemory[v22] == 0;
    v24 = &this->m_vecBlockSets.m_Memory.m_pMemory[v22];
    this->m_vecBlockSets.m_Size = v21 + 1;
    if ( !v23 )
    {
      v24->m_pubBlockSet = pBlob;
      v24->m_cubAllocated = cubBlob;
    }
LABEL_24:
    CThreadSpinRWLock::UnlockWrite(&this->m_threadRWLock);
    if ( --cAttempts == 0 )
      return 0;
  }
  CThreadSpinRWLock::UnlockWrite(&this->m_threadRWLock);
  return 0;
}


// CThreadSafeMemoryPool::Free  (line 162, @0x0000000003247760, libserver.so)
// calls: CThreadSafeMemoryPool::Free
void __fastcall CThreadSafeMemoryPool::Free(CThreadSafeMemoryPool *const this, void *pMem)
{
  CThreadSafeMemoryPool::Free(this, pMem, this->m_cubBlockSize);
}


// CThreadSafeMemoryPool::Free  (line 171, @0x0000000003247660, libserver.so)  // inlines: AssignIf, CRWLockAutoWrite, LockForWrite, Push, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, operator++, operator--, operator==, ~CRWLockAutoWrite
// calls: CThreadSpinRWLock::LockForRead(void), CThreadSpinRWLock::UnlockRead(void), ThreadGetCurrentId, CThreadSpinRWLock::SpinLockForWrite(ulong long), CThreadSafeMemoryPool::ClearNoLock, CThreadSpinRWLock::UnlockWrite(void), _Unwind_Resume
// callers: CThreadSafeMultiMemoryPool::Free, CThreadSafeMemoryPool::Free
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
void __fastcall CThreadSafeMemoryPool::Free(CThreadSafeMemoryPool *const this, void *pMem, int cubAlloc)
{
  CTSListBase *m_ptslistFreeBlocks; // rdi
  unsigned __int64 v6; // rcx
  TSLHead_t m_Head; // rax
  TSLHead_t v8; // rt0
  __int64 CurrentId; // rsi
  __int128 v10; // rt0

  CThreadSpinRWLock::LockForRead(&this->m_threadRWLock);
  m_ptslistFreeBlocks = this->m_ptslistFreeBlocks;
  v6 = 0;
  while ( 1 )
  {
    m_Head = m_ptslistFreeBlocks->m_Head;
    v6 = (*(&m_ptslistFreeBlocks->m_Head.value64x128 + 1) + 65537) | v6 & 0xFFFFFFFF00000000LL;
    *pMem = m_ptslistFreeBlocks->m_Head.value.Next;
    v8 = m_Head;
    if ( _InterlockedCompareExchange128(m_ptslistFreeBlocks, v6, pMem, &v8) != 0 )
      break;
    _mm_pause();
  }
  _InterlockedSub(&this->m_cBlocksInUse.m_value, 1u);
  CThreadSpinRWLock::UnlockRead(&this->m_threadRWLock);
  if ( this->m_cBlocksInUse.m_value == 0 && this->m_cubAllocated > 0x4FFFFF && this->m_vecBlockSets.m_Size > 9 )
  {
    CurrentId = ThreadGetCurrentId();
    _InterlockedAdd(&this->m_threadRWLock.m_nWriters.m_value, 1u);
    if ( this->m_threadRWLock.m_lockInfo.m_nReaders > 0
      || this->m_threadRWLock.m_lockInfo.m_writerId != 0 && CurrentId != this->m_threadRWLock.m_lockInfo.m_writerId
      || (v10 = 0u, _InterlockedCompareExchange128(this, 0, CurrentId, &v10) == 0) )
    {
      _mm_pause();
      CThreadSpinRWLock::SpinLockForWrite(&this->m_threadRWLock, CurrentId);
    }
    if ( this->m_cBlocksInUse.m_value == 0 )
      CThreadSafeMemoryPool::ClearNoLock(this);
    CThreadSpinRWLock::UnlockWrite(&this->m_threadRWLock);
  }
}


// CThreadSafeMemoryPool::PrintStats  (line 201, @0x0000000003247770, libserver.so)  // inlines: AssignIf, CRWLockAutoWrite, LockForWrite, ThreadInterlockedAssignIf128, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, operator int, operator++, ~CRWLockAutoWrite
// calls: ThreadGetCurrentId, CThreadSpinRWLock::SpinLockForWrite(ulong long), V_pretifymem, Msg, CThreadSpinRWLock::UnlockWrite(void), _Unwind_Resume
// callers: CThreadSafeMultiMemoryPool::PrintStats
// strings: "Block size: %-11s Alloc'd: %8d Num blobs: %5d (%s)\n"
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
void __fastcall CThreadSafeMemoryPool::PrintStats(CThreadSafeMemoryPool *const this)
{
  __int64 CurrentId; // rsi
  signed __int64 m_cubAllocated; // rax
  volatile int m_value; // r12d
  float v5; // xmm0_4
  const char *v6; // r14
  int m_Size; // r13d
  const char *v8; // rax
  __int128 v9; // rt0
  size_t v10; // rdx

  CurrentId = ThreadGetCurrentId();
  _InterlockedAdd(&this->m_threadRWLock.m_nWriters.m_value, 1u);
  if ( this->m_threadRWLock.m_lockInfo.m_nReaders > 0
    || this->m_threadRWLock.m_lockInfo.m_writerId != 0 && CurrentId != this->m_threadRWLock.m_lockInfo.m_writerId
    || (v9 = 0u, _InterlockedCompareExchange128(this, 0, CurrentId, &v9) == 0) )
  {
    _mm_pause();
    CThreadSpinRWLock::SpinLockForWrite(&this->m_threadRWLock, CurrentId);
  }
  m_cubAllocated = this->m_cubAllocated;
  m_value = this->m_cBlocksInUse.m_value;
  if ( m_cubAllocated < 0 )
  {
    v10 = this->m_cubAllocated & 1 | (this->m_cubAllocated >> 1);
    v5 = v10 + v10;
  }
  else
  {
    v5 = m_cubAllocated;
  }
  v6 = V_pretifymem(2, 1, v5);
  m_Size = this->m_vecBlockSets.m_Size;
  v8 = V_pretifymem(2, 1, this->m_cubBlockSize);
  Msg("Block size: %-11s Alloc'd: %8d Num blobs: %5d (%s)\n", v8, m_value, m_Size, v6);
  CThreadSpinRWLock::UnlockWrite(&this->m_threadRWLock);
}


// CThreadSafeMemoryPool::CubTotalSize  (line 213, @0x0000000003247880, libserver.so)
// callers: CThreadSafeMultiMemoryPool::CMBPoolSize
size_t __fastcall CThreadSafeMemoryPool::CubTotalSize(CThreadSafeMemoryPool *const this)
{
  return this->m_cubAllocated;
}


// CThreadSafeMemoryPool::CubSizeInUse  (line 222, @0x0000000003247890, libserver.so)  // inlines: operator*
// callers: CThreadSafeMultiMemoryPool::CMBPoolSizeInUse
size_t __fastcall CThreadSafeMemoryPool::CubSizeInUse(CThreadSafeMemoryPool *const this)
{
  return this->m_cubBlockSize * this->m_cBlocksInUse.m_value;
}


// CThreadSafeMemoryPool::Count  (line 231, @0x00000000032478a0, libserver.so)  // inlines: operator int
// callers: CThreadSafeMultiMemoryPool::Count
int __fastcall CThreadSafeMemoryPool::Count(CThreadSafeMemoryPool *const this)
{
  return this->m_cBlocksInUse.m_value;
}


