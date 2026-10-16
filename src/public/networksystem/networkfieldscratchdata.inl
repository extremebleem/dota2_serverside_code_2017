
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNetworkFieldScratchData::~CNetworkFieldScratchData  (line 18, @0x00000000030bf200, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~INetworkFieldScratchData
// calls: CMemoryStack::FreeAll, CMemoryStack::~CMemoryStack, operator delete, CUtlMemory<CMemoryStack*, int>::Purge
void __fastcall CNetworkFieldScratchData::~CNetworkFieldScratchData(CNetworkFieldScratchData *const this)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  CMemoryStack **m_pMemory; // rax
  CMemoryStack *v6; // r12
  bool v7; // zf

  this->_vptr_INetworkFieldScratchData = off_47C3090;  // vptr: CNetworkFieldScratchData
  v2 = this->m_MemoryStacks.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 8LL * v2;
    v4 = 8 * (v2 - v2) - 8;
    do
    {
      CMemoryStack::FreeAll(this->m_MemoryStacks.m_Memory.m_pMemory[v3 / 8], 1);
      m_pMemory = this->m_MemoryStacks.m_Memory.m_pMemory;
      v6 = m_pMemory[v3 / 8];
      if ( v6 != 0 )
      {
        CMemoryStack::~CMemoryStack(m_pMemory[v3 / 8]);
        operator delete(v6);
      }
      v3 -= 8LL;
    }
    while ( v3 != v4 );
  }
  v7 = (this->m_MemoryStacks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MemoryStacks.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CMemoryStack *,int>::Purge(&this->m_MemoryStacks.m_Memory);
    v7 = (this->m_MemoryStacks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_MemoryStacks.m_Size = 0;
    if ( v7 )
    {
      CUtlMemory<CMemoryStack *,int>::Purge(&this->m_MemoryStacks.m_Memory);
      if ( (this->m_MemoryStacks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CMemoryStack *,int>::Purge(&this->m_MemoryStacks.m_Memory);
    }
  }
  else
  {
    this->m_MemoryStacks.m_Size = 0;
  }
  this->_vptr_INetworkFieldScratchData = off_47C3050;  // vptr: INetworkFieldScratchData
}


// CNetworkFieldScratchData::~CNetworkFieldScratchData  (line 18, @0x00000000030bf350, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkFieldScratchData, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~INetworkFieldScratchData
// calls: CMemoryStack::FreeAll, CMemoryStack::~CMemoryStack, operator delete, CUtlMemory<CMemoryStack*, int>::Purge
void __fastcall CNetworkFieldScratchData::~CNetworkFieldScratchData(CNetworkFieldScratchData *const this)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  CMemoryStack **m_pMemory; // rax
  CMemoryStack *v6; // r12
  bool v7; // zf

  this->_vptr_INetworkFieldScratchData = off_47C3090;  // vptr: CNetworkFieldScratchData
  v2 = this->m_MemoryStacks.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 8LL * v2;
    v4 = 8 * (v2 - v2) - 8;
    do
    {
      CMemoryStack::FreeAll(this->m_MemoryStacks.m_Memory.m_pMemory[v3 / 8], 1);
      m_pMemory = this->m_MemoryStacks.m_Memory.m_pMemory;
      v6 = m_pMemory[v3 / 8];
      if ( v6 != 0 )
      {
        CMemoryStack::~CMemoryStack(m_pMemory[v3 / 8]);
        operator delete(v6);
      }
      v3 -= 8LL;
    }
    while ( v3 != v4 );
  }
  v7 = (this->m_MemoryStacks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MemoryStacks.m_Size = 0;
  if ( v7 )
  {
    CUtlMemory<CMemoryStack *,int>::Purge(&this->m_MemoryStacks.m_Memory);
    v7 = (this->m_MemoryStacks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_MemoryStacks.m_Size = 0;
    if ( v7 )
    {
      CUtlMemory<CMemoryStack *,int>::Purge(&this->m_MemoryStacks.m_Memory);
      if ( (this->m_MemoryStacks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CMemoryStack *,int>::Purge(&this->m_MemoryStacks.m_Memory);
    }
  }
  else
  {
    this->m_MemoryStacks.m_Size = 0;
  }
  this->_vptr_INetworkFieldScratchData = off_47C3050;  // vptr: INetworkFieldScratchData
  operator delete(this);
}


// CNetworkFieldScratchData::Init  (line 28, @0x00000000030c33f0, libserver.so)  // inlines: AddToTail, CopyConstruct<CMemoryStack*>, Element, GrowMemory, LeafCodeInfo_t, operator[]
// calls: operator new, CMemoryStack::CMemoryStack, CMemoryStack::Init, CUtlMemory<CMemoryStack*, int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), operator delete, _Unwind_Resume
// strings: "CNetworkFieldScratchData.m_MemoryStacks[ 0 ]", "../public/networksystem/networkfieldscratchdata.h", "Init", "CNetworkFieldScratchData::Init failed on buffer of %u bytes."
void __fastcall CNetworkFieldScratchData::Init(
        CNetworkFieldScratchData *const this,
        uint32 unBufferSize,
        LoggingChannelID_t nLogChannel)
{
  CMemoryStack *v4; // r13
  __int64 m_Size; // r12
  int v6; // eax
  CMemoryStack **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  uint32 m_unBufferSize; // r8d
  LeafCodeInfo_t v13; // [rsp+0h] [rbp-40h] BYREF

  this->m_LoggingChannel = nLogChannel;
  this->m_unBufferSize = unBufferSize;
  v4 = operator new(0x58u);
  CMemoryStack::CMemoryStack(v4);
  if ( !CMemoryStack::Init(
          v4,
          "CNetworkFieldScratchData.m_MemoryStacks[ 0 ]",
          this->m_unBufferSize,
          0x1000u,
          0x1000u,
          0x10u) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_11;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_11:
      m_unBufferSize = this->m_unBufferSize;
      v13.m_szFile = "../public/networksystem/networkfieldscratchdata.h";
      v13.m_szFunction = "Init";
      v13.m_nLine = 34;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v13,
        "CNetworkFieldScratchData::Init failed on buffer of %u bytes.",
        m_unBufferSize);
    }
  }
  m_Size = this->m_MemoryStacks.m_Size;
  v6 = this->m_MemoryStacks.m_Size;
  if ( m_Size == this->m_MemoryStacks.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CMemoryStack *,int>::Grow(&this->m_MemoryStacks.m_Memory, 1);
    v6 = this->m_MemoryStacks.m_Size;
  }
  this->m_MemoryStacks.m_Size = v6 + 1;
  v7 = &this->m_MemoryStacks.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
    *v7 = v4;
}


// CNetworkFieldScratchData::Alloc  (line 38, @0x00000000030c30c0, libserver.so)  // inlines: AddToTail, AlignValue<unsigned int>, Alloc, CAutoLockT, CopyConstruct<CMemoryStack*>, Element, GetUsed, GrowMemory, InterlockedAssignIf<unsigned char*>, LeafCodeInfo_t, Lock, ReadVolatileMemory<unsigned char*>, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, WillAllocSucceed, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, CMemoryStack::CommitTo, operator new, CMemoryStack::CMemoryStack, CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, CMemoryStack::Init, V_pretifymem, LoggingSystem_Log, CUtlMemory<CMemoryStack*, int>::Grow (18 total)
// strings: "CNetworkFieldScratchData.m_MemoryStacks[ %d ]", "CNetworkFieldScratchData::Alloc created buffer %s of size %s\n", "../public/networksystem/networkfieldscratchdata.h", "Alloc", "CNetworkFieldScratchData::Alloc, failed to add new CMemoryStack at slot %d of size %u byt
void *__fastcall CNetworkFieldScratchData::Alloc(CNetworkFieldScratchData *const this, uint32 unAllocSize)
{
  unsigned int v4; // r14d
  CMemoryStack *v5; // rbx
  uint32 v7; // eax
  __int64 v8; // r13
  uint8 *m_pNextAlloc; // rdx
  uint8 *v10; // r12
  signed __int64 CurrentId; // rsi
  uint8 *m_pHighestAllocLimit; // rax
  bool v13; // cc
  uint32 m_unBufferSize; // edx
  __int64 m_Size; // r14
  int v16; // eax
  CMemoryStack **v17; // rax
  const char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // r12d
  int v24; // edx
  int v25; // ecx
  int v26; // esi
  int v27; // r8d
  int v28; // r9d
  signed int unMinBufferSize; // [rsp+Ch] [rbp-174h]
  LeafCodeInfo_t v30; // [rsp+10h] [rbp-170h] BYREF
  CFmtStr dbName; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v32; // [rsp+148h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v4 = this->m_MemoryStacks.m_Size - 1;
  v5 = this->m_MemoryStacks.m_Memory.m_pMemory[v4];
  if ( unAllocSize == 0 )
    return 0;
  v7 = -v5->m_alignment & (v5->m_alignment + unAllocSize - 1);
  if ( v5->m_maxSize < v7 + LODWORD(v5->m_pNextAlloc) - LODWORD(v5->m_pBase) )
  {
    v5 = operator new(0x58u);
    CMemoryStack::CMemoryStack(v5);
    m_unBufferSize = this->m_unBufferSize;
    if ( ((unAllocSize + 15) & 0xFFFFFFF0) >= m_unBufferSize )
      m_unBufferSize = (unAllocSize + 15) & 0xFFFFFFF0;
    unMinBufferSize = m_unBufferSize;
    CFmtStrN<256,false>::CFmtStrN(&dbName, "CNetworkFieldScratchData.m_MemoryStacks[ %d ]", v4);
    if ( LoggingSystem_IsChannelEnabled(this->m_LoggingChannel, 0) != 0 )
    {
      v18 = V_pretifymem(2, 1, unMinBufferSize);
      LoggingSystem_Log(
        this->m_LoggingChannel,
        0,
        "CNetworkFieldScratchData::Alloc created buffer %s of size %s\n",
        dbName.m_szBuf,
        v18);
    }
    if ( !CMemoryStack::Init(v5, dbName.m_szBuf, unMinBufferSize, 0x1000u, 0x1000u, 0x10u) )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v30.m_nLine = 56;
        v30.m_szFile = "../public/networksystem/networkfieldscratchdata.h";
        v30.m_szFunction = "Alloc";
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v30,
          "CNetworkFieldScratchData::Alloc, failed to add new CMemoryStack at slot %d of size %u bytes.",
          v4,
          unMinBufferSize);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v21, v22, v19, v20) != 0 )
        loc_0 = -559038737;
      v23 = Plat_ExitProcess(1);
      operator delete(&LOG_GENERAL);
      Unwind_Resume(v23, v26, v24, v25, v27, v28);
    }
    m_Size = this->m_MemoryStacks.m_Size;
    v16 = this->m_MemoryStacks.m_Size;
    if ( m_Size == this->m_MemoryStacks.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CMemoryStack *,int>::Grow(&this->m_MemoryStacks.m_Memory, 1);
      v16 = this->m_MemoryStacks.m_Size;
    }
    this->m_MemoryStacks.m_Size = v16 + 1;
    v17 = &this->m_MemoryStacks.m_Memory.m_pMemory[m_Size];
    if ( v17 != 0 )
      *v17 = v5;
    v7 = -v5->m_alignment & (v5->m_alignment + unAllocSize - 1);
  }
  v8 = v7;
LABEL_5:
  while ( 1 )
  {
    m_pNextAlloc = v5->m_pNextAlloc;
    v10 = &v5->m_pNextAlloc[v8];
    if ( v10 > v5->m_pCommitLimit )
      break;
LABEL_11:
    if ( m_pNextAlloc == _InterlockedCompareExchange64(v5, v10, m_pNextAlloc) )
    {
      m_pHighestAllocLimit = v5->m_pNextAlloc;
      if ( v5->m_pHighestAllocLimit >= v5->m_pNextAlloc )
        m_pHighestAllocLimit = v5->m_pHighestAllocLimit;
      v5->m_pHighestAllocLimit = m_pHighestAllocLimit;
      return m_pNextAlloc;
    }
  }
  while ( 1 )
  {
    CurrentId = ThreadGetCurrentId();
    if ( CurrentId == v5->m_allocMutex.m_ownerID || _InterlockedCompareExchange64(&v5->m_allocMutex, CurrentId, 0) == 0 )
      break;
    _mm_pause();
    CThreadFastMutex::Lock(&v5->m_allocMutex, CurrentId, 0);
    if ( v10 > v5->m_pCommitLimit )
      goto LABEL_16;
LABEL_9:
    if ( --v5->m_allocMutex.m_depth != 0 )
      goto LABEL_5;
    ThreadInterlockedExchange64(&v5->m_allocMutex, 0);
    m_pNextAlloc = v5->m_pNextAlloc;
    v10 = &v5->m_pNextAlloc[v8];
    if ( v10 <= v5->m_pCommitLimit )
      goto LABEL_11;
  }
  v13 = v10 <= v5->m_pCommitLimit;
  ++v5->m_allocMutex.m_depth;
  if ( v13 )
    goto LABEL_9;
LABEL_16:
  if ( CMemoryStack::CommitTo(v5, v10) )
    goto LABEL_9;
  if ( --v5->m_allocMutex.m_depth == 0 )
    ThreadInterlockedExchange64(&v5->m_allocMutex, 0);
  return 0;
}


// CNetworkFieldScratchData::Purge  (line 66, @0x00000000030bf150, libserver.so)  // inlines: Element, FastRemove, memcpy, operator[]
// calls: CMemoryStack::~CMemoryStack, operator delete, CMemoryStack::FreeAll
void __fastcall CNetworkFieldScratchData::Purge(CNetworkFieldScratchData *const this)
{
  int v2; // r13d
  CMemoryStack **m_pMemory; // rax
  __int64 i; // r12
  CMemoryStack *v5; // r14
  int m_Size; // edx
  int v7; // edx

  v2 = this->m_MemoryStacks.m_Size - 1;
  if ( v2 >= 0 )
  {
    m_pMemory = this->m_MemoryStacks.m_Memory.m_pMemory;
    for ( i = v2; ; --i )
    {
      CMemoryStack::FreeAll(m_pMemory[i], 0);
      if ( v2 == 0 )
        break;
      m_pMemory = this->m_MemoryStacks.m_Memory.m_pMemory;
      v5 = m_pMemory[i];
      if ( v5 != 0 )
      {
        CMemoryStack::~CMemoryStack(m_pMemory[i]);
        operator delete(v5);
        m_pMemory = this->m_MemoryStacks.m_Memory.m_pMemory;
      }
      m_Size = this->m_MemoryStacks.m_Size;
      if ( m_Size > 0 )
      {
        v7 = m_Size - 1;
        if ( v2 != v7 )
        {
          m_pMemory[i] = m_pMemory[v7];
          v7 = this->m_MemoryStacks.m_Size - 1;
          m_pMemory = this->m_MemoryStacks.m_Memory.m_pMemory;
        }
        this->m_MemoryStacks.m_Size = v7;
      }
      --v2;
    }
  }
}


// CNetworkFieldScratchData::LoggingChannel  (line 79, @0x00000000030bed00, libserver.so)
LoggingChannelID_t __fastcall CNetworkFieldScratchData::LoggingChannel(const CNetworkFieldScratchData *const this)
{
  return this->m_LoggingChannel;
}


