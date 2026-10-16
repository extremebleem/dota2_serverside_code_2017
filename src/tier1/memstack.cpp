
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_memstack.cpp  (line 0, @0x0000000001a671d0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_memstack_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// PrintStatus  (line 28, @0x0000000002f80da0, libserver.so)
// calls: CMemoryStack::PrintContents
void __fastcall PrintStatus(void *p)
{
  CMemoryStack::PrintContents(p);
}


// CMemoryStack::CMemoryStack  (line 35, @0x0000000002f806b0, libserver.so)  // inlines: CThreadFastMutex, CUtlString
// calls: CUtlString::Set
// callers: CSaveMemory::SaveAllocMemory, CEntity2SaveRestore::Finish, CEntity2SaveRestore::ReadSymbolTable, CNetworkFieldScratchData::Alloc, CNetworkFieldScratchData::Init
void __fastcall CMemoryStack::CMemoryStack(CMemoryStack *const this)
{
  CUtlString *p_m_name; // rdi

  p_m_name = &this->m_name;
  p_m_name[-8].m_pString = 0;
  p_m_name[-7].m_pString = 0;
  p_m_name[-6].m_pString = 0;
  p_m_name[-5].m_pString = 0;
  p_m_name[-4].m_pString = 0;
  LODWORD(p_m_name[-3].m_pString) = 0;
  HIDWORD(p_m_name[-3].m_pString) = 16;
  LODWORD(p_m_name[-2].m_pString) = 0;
  HIDWORD(p_m_name[-2].m_pString) = 0;
  LODWORD(p_m_name[-1].m_pString) = -1;
  p_m_name->m_pString = 0;
  CUtlString::Set(p_m_name, "unknown");
  this->m_allocMutex.m_ownerID = 0;
  this->m_allocMutex.m_depth = 0;
}


// CMemoryStack::~CMemoryStack  (line 54, @0x0000000002f80ca0, libserver.so)  // inlines: ~CUtlString
// calls: CMemoryStack::Term, CUtlString::FreeMemoryBlock
// callers: CEntity2SaveRestore::Release, CEntity2SaveRestore::Finish, CEntity2SaveRestore::ReadSymbolTable, CEntity2SaveRestore::SaveGame_Start, CEntity2SaveRestore::CEntity2SaveRestore, CNetworkFieldScratchData::Purge, CNetworkFieldScratchData::~CNetworkFieldScratchData
void __fastcall CMemoryStack::~CMemoryStack(CMemoryStack *const this)
{
  if ( this->m_pBase != 0 )
    CMemoryStack::Term(this);
  if ( this->m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_name);
}


// CMemoryStack::Init  (line 62, @0x0000000002f807e0, libserver.so)  // inlines: AlignValue<unsigned int>
// calls: CUtlString::operator=, Plat_VirtualAlloc, CMemoryStack::RegisterAllocation
// callers: CSaveMemory::SaveAllocMemory, CEntity2SaveRestore::Finish, CEntity2SaveRestore::ReadSymbolTable, CNetworkFieldScratchData::Alloc, CNetworkFieldScratchData::Init
bool __fastcall CMemoryStack::Init(
        CMemoryStack *const this,
        const char *name,
        unsigned int maxSize,
        unsigned int commitIncrement,
        unsigned int initialCommit,
        unsigned int alignment)
{
  int v11; // ecx
  int v12; // esi
  unsigned int v13; // esi
  uint8 *v14; // rax
  uint8 *m_pBase; // rdx
  uint8 *m_pNextAlloc; // rcx
  __int64 m_maxSize; // rax
  unsigned int v19; // ecx
  unsigned int v20; // r12d

  CUtlString::operator=(&this->m_name, name);
  this->m_maxSize = maxSize;
  this->m_alignment = (alignment + 3) & 0xFFFFFFFC;
  if ( commitIncrement != 0 )
  {
    v19 = (commitIncrement + 4095) & 0xFFFFF000;
    this->m_commitIncrement = v19;
    v12 = v19 - 1;
    v11 = -v19;
  }
  else
  {
    this->m_commitIncrement = 4096;
    v11 = -4096;
    v12 = 4095;
  }
  v13 = (v11 & (maxSize + v12)) + 0xFFFF;
  LOWORD(v13) = 0;
  this->m_maxSize = v13;
  v14 = Plat_VirtualAlloc(0, v13, 1, 0, 0);
  this->m_pBase = v14;
  if ( v14 != 0 )
  {
    this->m_pNextAlloc = v14;
    m_pBase = v14;
    this->m_pCommitLimit = v14;
    m_pNextAlloc = v14;
    if ( initialCommit == 0 )
    {
LABEL_5:
      m_maxSize = this->m_maxSize;
      this->m_pHighestAllocLimit = m_pNextAlloc;
      this->m_pAllocLimit = &m_pBase[m_maxSize];
      return m_pBase != 0;
    }
    v20 = -this->m_commitIncrement & (this->m_commitIncrement + initialCommit - 1);
    if ( Plat_VirtualAlloc(v14, v20, 2, 3, 0) != 0 )
    {
      this->m_pCommitLimit += v20;
      this->m_minCommit = v20;
      CMemoryStack::RegisterAllocation(this, v20);
      m_pNextAlloc = this->m_pNextAlloc;
      m_pBase = this->m_pBase;
      goto LABEL_5;
    }
    (*(*g_pMemAlloc + 280LL))(g_pMemAlloc, v20);
    return 0;
  }
  else
  {
    (*(*g_pMemAlloc + 280LL))(g_pMemAlloc, 0);
    return 0;
  }
}


// CMemoryStack::Term  (line 196, @0x0000000002f80c40, libserver.so)
// calls: CMemoryStack::FreeAll, Plat_VirtualFree
// callers: CMemoryStack::~CMemoryStack
void __fastcall CMemoryStack::Term(CMemoryStack *const this)
{
  uint8 *m_pBase; // rdi

  CMemoryStack::FreeAll(this, 1);
  m_pBase = this->m_pBase;
  if ( m_pBase != 0 )
  {
    Plat_VirtualFree(m_pBase, this->m_maxSize, 8);
    this->m_pBase = 0;
    this->m_pNextAlloc = 0;
    this->m_pCommitLimit = 0;
    this->m_pHighestAllocLimit = 0;
    this->m_maxSize = 0;
  }
}


// CMemoryStack::GetSize  (line 218, @0x0000000002f80740, libserver.so)
int __fastcall CMemoryStack::GetSize(const CMemoryStack *const this)
{
  return this->m_pCommitLimit - this->m_pBase;
}


// CMemoryStack::CommitTo  (line 229, @0x0000000002f809a0, libserver.so)  // inlines: AlignValue<unsigned char*>
// calls: Plat_VirtualAlloc, CMemoryStack::RegisterDeallocation, Plat_VirtualFree, CMemoryStack::RegisterAllocation, Warning
// callers: CSaveMemory::SaveAllocMemory, CNetworkFieldScratchData::Alloc
// strings: "ATTEMPTED TO DECOMMIT OWNED MEMORY STACK SPACE\n"
bool __fastcall CMemoryStack::CommitTo(CMemoryStack *const this, uint8 *pNextAlloc)
{
  __int64 m_commitIncrement; // rax
  uint8 *m_pCommitLimit; // rdi
  uint8 *v5; // rbx
  uint32 v6; // r15d
  __int64 v7; // r13
  bool v8; // zf
  uint8 *v10; // r14
  unsigned int v11; // ebx

  m_commitIncrement = this->m_commitIncrement;
  m_pCommitLimit = this->m_pCommitLimit;
  v5 = (-m_commitIncrement & &pNextAlloc[m_commitIncrement - 1]);
  v6 = v5 - m_pCommitLimit;
  v7 = (-m_commitIncrement & (pNextAlloc + m_commitIncrement - 1)) - m_pCommitLimit;
  if ( this->m_pAllocLimit < &m_pCommitLimit[v7] )
    goto LABEL_13;
  if ( m_pCommitLimit >= v5 )
  {
    v10 = (-m_commitIncrement & &pNextAlloc[m_commitIncrement - 1]);
    LODWORD(pNextAlloc) = m_pCommitLimit;
    if ( m_pCommitLimit > v5 )
    {
      if ( this->m_pNextAlloc <= v5
        || (Warning("ATTEMPTED TO DECOMMIT OWNED MEMORY STACK SPACE\n", m_pCommitLimit),
            pNextAlloc = this->m_pCommitLimit,
            v10 = (-this->m_commitIncrement & &this->m_pNextAlloc[this->m_commitIncrement - 1]),
            pNextAlloc > v10) )
      {
        v11 = pNextAlloc - v10;
        if ( pNextAlloc != v10 )
        {
          CMemoryStack::RegisterDeallocation(this);
          Plat_VirtualFree(v10, v11, 4);
          v8 = v10 == LODWORD(this->m_pBase);
          this->m_pCommitLimit = v10;
          if ( !v8 )
            CMemoryStack::RegisterAllocation(this, 0);
        }
      }
    }
    return 1;
  }
  if ( m_pCommitLimit != LODWORD(this->m_pBase) )
  {
    CMemoryStack::RegisterDeallocation(this);
    m_pCommitLimit = this->m_pCommitLimit;
  }
  if ( Plat_VirtualAlloc(m_pCommitLimit, v7, 2, 3, 0) != 0 )
  {
    v8 = v5 == LODWORD(this->m_pBase);
    this->m_pCommitLimit = v5;
    if ( v8 )
      return 1;
    CMemoryStack::RegisterAllocation(this, v6);
    return 1;
  }
  else
  {
LABEL_13:
    (*(*g_pMemAlloc + 280LL))(g_pMemAlloc, v7);
    return 0;
  }
}


// CMemoryStack::RegisterAllocation  (line 311, @0x0000000002f80750, libserver.so)  // inlines: GetSize
// callers: CMemoryStack::Init, CMemoryStack::CommitTo, CMemoryStack::FreeToAllocPoint
void __fastcall CMemoryStack::RegisterAllocation(CMemoryStack *const this, uint32 nIncrement)
{
  __int64 v2; // r13
  _QWORD *v4; // rax
  signed __int64 v5; // rdx

  v2 = nIncrement;
  v4 = (*(*g_pMemAlloc + 208LL))(g_pMemAlloc, &this->m_nAllocStatsId, 1);
  if ( v4 != 0 )
  {
    v5 = this->m_pCommitLimit - this->m_pBase;
    ++v4[1];
    *v4 += v5;
    if ( v2 != 0 )
    {
      v4[2] += v2;
      ++v4[3];
    }
    (*(*g_pMemAlloc + 224LL))(g_pMemAlloc, this->m_nAllocStatsId);
  }
}


// CMemoryStack::RegisterDeallocation  (line 340, @0x0000000002f80940, libserver.so)  // inlines: GetSize
// callers: CMemoryStack::CommitTo, CMemoryStack::FreeToAllocPoint, CMemoryStack::FreeAll
void __fastcall CMemoryStack::RegisterDeallocation(CMemoryStack *const this)
{
  _QWORD *v2; // rax
  signed __int64 v3; // rdx

  if ( this->m_nAllocStatsId != -1 )
  {
    v2 = (*(*g_pMemAlloc + 216LL))(g_pMemAlloc);
    if ( v2 != 0 )
    {
      v3 = this->m_pCommitLimit - this->m_pBase;
      --v2[1];
      *v2 -= v3;
      (*(*g_pMemAlloc + 224LL))(g_pMemAlloc, this->m_nAllocStatsId);
    }
    this->m_nAllocStatsId = -1;
  }
}


// CMemoryStack::FreeToAllocPoint  (line 359, @0x0000000002f80b30, libserver.so)  // inlines: AlignValue<unsigned char*>, AlignValue<unsigned int>
// calls: CMemoryStack::RegisterDeallocation, Plat_VirtualFree, CMemoryStack::RegisterAllocation
void __fastcall CMemoryStack::FreeToAllocPoint(CMemoryStack *const this, MemoryStackMark_t mark, bool bDecommit)
{
  unsigned int v4; // r12d
  uint8 *m_pBase; // rax
  uint8 *v6; // rcx
  uint8 *v7; // r15
  unsigned __int64 v8; // rax
  uint8 *v9; // r13
  uint8 *m_pCommitLimit; // rax
  unsigned int v11; // r14d

  v4 = -this->m_alignment & (this->m_alignment + mark - 1);
  m_pBase = this->m_pBase;
  v6 = &m_pBase[v4];
  if ( !__CFADD__(m_pBase, v4) )
  {
    v7 = &m_pBase[v4];
    if ( v6 < this->m_pNextAlloc )
    {
      if ( bDecommit )
      {
        v8 = &m_pBase[this->m_minCommit];
        if ( (-this->m_commitIncrement & &v6[this->m_commitIncrement - 1]) >= v8 )
          v8 = -this->m_commitIncrement & &v6[this->m_commitIncrement - 1];
        v9 = v8;
        m_pCommitLimit = this->m_pCommitLimit;
        if ( m_pCommitLimit > v9 )
        {
          v11 = m_pCommitLimit - v9;
          CMemoryStack::RegisterDeallocation(this);
          Plat_VirtualFree(v9, v11, 4);
          this->m_pCommitLimit = v9;
          if ( v4 != 0 )
            CMemoryStack::RegisterAllocation(this, 0);
        }
      }
      this->m_pNextAlloc = v7;
    }
  }
}


// CMemoryStack::FreeAll  (line 402, @0x0000000002f80be0, libserver.so)
// calls: CMemoryStack::RegisterDeallocation, Plat_VirtualFree
// callers: CMemoryStack::Term, CNetworkFieldScratchData::Purge, CNetworkFieldScratchData::~CNetworkFieldScratchData
void __fastcall CMemoryStack::FreeAll(CMemoryStack *const this, bool bDecommit)
{
  uint8 *m_pBase; // rax

  m_pBase = this->m_pBase;
  if ( m_pBase != 0 && this->m_pCommitLimit - m_pBase > 0 )
  {
    if ( bDecommit )
    {
      CMemoryStack::RegisterDeallocation(this);
      Plat_VirtualFree(this->m_pBase, this->m_pCommitLimit - this->m_pBase, 4);
      m_pBase = this->m_pBase;
      this->m_pCommitLimit = m_pBase;
    }
    this->m_pNextAlloc = m_pBase;
  }
}


// CMemoryStack::Access  (line 421, @0x0000000002f80ce0, libserver.so)
void __fastcall CMemoryStack::Access(CMemoryStack *const this, void **ppRegion, unsigned int *pBytes)
{
  *ppRegion = this->m_pBase;
  *pBytes = LODWORD(this->m_pNextAlloc) - LODWORD(this->m_pBase);
}


// CMemoryStack::PrintContents  (line 429, @0x0000000002f80d00, libserver.so)  // inlines: GetSize, GetUsed, String
// calls: CUtlString::Get, Msg
// callers: PrintStatus
// strings: "CMemoryStack %s\n", "    Total used memory:      %d KB\n", "    Total committed memory: %d KB\n", "    Max committed memory: %u KB out of %d KB\n"
void __fastcall CMemoryStack::PrintContents(const CMemoryStack *const this)
{
  uint8 *m_pHighestAllocLimit; // r12
  CUtlString *p_m_name; // rdi
  signed __int64 v4; // r12
  const char *v5; // rax
  double v6; // xmm0_8
  double v7; // xmm0_8
  double v8; // xmm0_8

  m_pHighestAllocLimit = this->m_pHighestAllocLimit;
  p_m_name = &this->m_name;
  v4 = m_pHighestAllocLimit - p_m_name[-4].m_pString;
  v5 = CUtlString::Get(p_m_name);
  *&v6 = Msg("CMemoryStack %s\n", v5).m128_u64[0];
  *&v7 = Msg("    Total used memory:      %d KB\n", ((LODWORD(this->m_pNextAlloc) - LODWORD(this->m_pBase)) / 1024), v6).m128_u64[0];
  *&v8 = Msg(
           "    Total committed memory: %d KB\n",
           ((LODWORD(this->m_pCommitLimit) - LODWORD(this->m_pBase)) / 1024),
           v7).m128_u64[0];
  Msg("    Max committed memory: %u KB out of %d KB\n", v4 >> 10, (this->m_maxSize / 1024), v8);
}


