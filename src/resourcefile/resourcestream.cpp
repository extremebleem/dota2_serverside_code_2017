
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_resourcestream.cpp  (line 0, @0x0000000001a6edd0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_resourcestream_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CResourceStream::CResourceStream  (line 13, @0x00000000032683e0, libserver.so)
void __fastcall CResourceStream::CResourceStream(CResourceStream *const this)
{
  this->_vptr_CResourceStream = off_47D0ED0;
  this->m_pData = 0;
  this->m_nCommitted = 0;
  this->m_nUsed = 0;
  this->m_nAlignBits = 3;
  this->m_nMaxAlignment = 4;
}


// CResourceStreamVM::CResourceStreamVM  (line 23, @0x0000000003268670, libserver.so)  // inlines: CResourceStream, ~CResourceStream
// calls: CResourceStreamVM::ReserveVirtualMemory, _Unwind_Resume
// callers: CModelSkeletonBuilder::CompileToPermDataPointer, CModelBuilder::CompileToPermDataPointer, CreateAggregateData
void __fastcall CResourceStreamVM::CResourceStreamVM(CResourceStreamVM *const this, uint nReserveSize)
{
  this->m_pData = 0;
  this->m_nCommitted = 0;
  this->m_nUsed = 0;
  this->m_nAlignBits = 3;
  this->m_nMaxAlignment = 4;
  this->_vptr_CResourceStream = off_47D0F10;
  this->m_nReserved = 0;
  CResourceStreamVM::ReserveVirtualMemory(this, nReserveSize);
  this->m_nAlignBits = 3;
  this->m_nMaxAlignment = 4;
  this->m_nUsed = 0;
  this->m_nCommitted = 0;
  this->m_nAllocStatsId = -1;
}


// CResourceStreamVM::~CResourceStreamVM  (line 35, @0x0000000003268860, libserver.so)  // inlines: ~CResourceStream
// calls: CResourceStreamVM::ReleaseVirtualMemory
// callers: CreateAggregateData
void __fastcall CResourceStreamVM::~CResourceStreamVM(CResourceStreamVM *const this)
{
  this->_vptr_CResourceStream = off_47D0F10;
  CResourceStreamVM::ReleaseVirtualMemory(this);
  this->_vptr_CResourceStream = off_47D0ED0;
}


// CResourceStreamVM::~CResourceStreamVM  (line 35, @0x0000000003268890, libserver.so)  // inlines: ~CResourceStream, ~CResourceStreamVM
// calls: CResourceStreamVM::ReleaseVirtualMemory, operator delete
void __fastcall CResourceStreamVM::~CResourceStreamVM(CResourceStreamVM *const this)
{
  this->_vptr_CResourceStream = off_47D0F10;
  CResourceStreamVM::ReleaseVirtualMemory(this);
  this->_vptr_CResourceStream = off_47D0ED0;
  operator delete(this);
}


// CResourceStreamFixed::CResourceStreamFixed  (line 42, @0x0000000003268420, libserver.so)  // inlines: CResourceStream, V_memset, memset
// calls: memset
void __fastcall CResourceStreamFixed::CResourceStreamFixed(
        CResourceStreamFixed *const this,
        void *pPreallocatedData,
        uint nPreallocatedDataSize)
{
  this->m_pData = pPreallocatedData;
  this->m_nCommitted = nPreallocatedDataSize;
  this->m_nUsed = 0;
  this->m_nAlignBits = 3;
  this->m_nMaxAlignment = 4;
  this->_vptr_CResourceStream = off_47D0F50;
  this->m_bOwnMemory = 0;
  memset(pPreallocatedData, 0, nPreallocatedDataSize);
}


// CResourceStreamFixed::CResourceStreamFixed  (line 52, @0x0000000003268460, libserver.so)  // inlines: CResourceStream, V_memset, memset, ~CResourceStream
// calls: operator new [], memset, _Unwind_Resume
// callers: CreateSphereAggregateData, CreateBoxAggregateData
void __fastcall CResourceStreamFixed::CResourceStreamFixed(
        CResourceStreamFixed *const this,
        uint nPreallocatedDataSize)
{
  size_t v3; // r12
  uint8 *v5; // rax

  v3 = nPreallocatedDataSize;
  this->m_pData = 0;
  this->m_nCommitted = 0;
  this->m_nUsed = 0;
  this->m_nAlignBits = 3;
  this->m_nMaxAlignment = 4;
  this->_vptr_CResourceStream = off_47D0F50;
  this->m_bOwnMemory = 1;
  v5 = operator new[](nPreallocatedDataSize);
  this->m_nCommitted = nPreallocatedDataSize;
  this->m_pData = v5;
  memset(v5, 0, v3);
}


// CResourceStreamFixed::~CResourceStreamFixed  (line 61, @0x00000000032681d0, libserver.so)  // inlines: ~CResourceStream
// calls: operator delete []
// callers: CreateSphereAggregateData, CreateBoxAggregateData, CResourceStreamFixed::~CResourceStreamFixed
void __fastcall CResourceStreamFixed::~CResourceStreamFixed(CResourceStreamFixed *const this)
{
  uint8 *m_pData; // rdi

  this->_vptr_CResourceStream = off_47D0F50;
  if ( this->m_bOwnMemory )
  {
    m_pData = this->m_pData;
    if ( m_pData != 0 )
      operator delete[](m_pData);
  }
  this->m_pData = 0;
  this->m_nCommitted = 0;
  this->_vptr_CResourceStream = off_47D0ED0;
}


// CResourceStreamFixed::~CResourceStreamFixed  (line 61, @0x0000000003268220, libserver.so)
// calls: CResourceStreamFixed::~CResourceStreamFixed, operator delete
void __fastcall CResourceStreamFixed::~CResourceStreamFixed(CResourceStreamFixed *const this)
{
  CResourceStreamFixed::~CResourceStreamFixed(this);
  operator delete(this);
}


// CResourceStreamFixed::Commit  (line 73, @0x0000000003268340, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "resourcestream.cpp", "Commit", "CResourceStreamFixed: trying to write past the end of allocated memory (new commit %u, al
void __fastcall CResourceStreamFixed::Commit(CResourceStreamFixed *const this, uint nNewCommit)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  uint m_nCommitted; // r9d
  LeafCodeInfo_t v11; // [rsp+0h] [rbp-40h] BYREF

  if ( this->m_nCommitted < nNewCommit )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_6;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v4, v5, v8, v9) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_6:
      m_nCommitted = this->m_nCommitted;
      v11.m_szFile = "resourcestream.cpp";
      v11.m_szFunction = "Commit";
      v11.m_nLine = 77;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v11,
        "CResourceStreamFixed: trying to write past the end of allocated memory (new commit %u, allocated %u)\n",
        nNewCommit,
        m_nCommitted);
    }
  }
}


// CResourceStreamGrowable::CResourceStreamGrowable  (line 82, @0x00000000032684f0, libserver.so)  // inlines: CResourceStream, V_memset, memset, ~CResourceStream
// calls: operator new [], memset, _Unwind_Resume
void __fastcall CResourceStreamGrowable::CResourceStreamGrowable(
        CResourceStreamGrowable *const this,
        uint nReserveDataSize)
{
  size_t v4; // r13
  uint8 *v5; // rax

  this->m_pData = 0;
  this->m_nCommitted = 0;
  this->m_nUsed = 0;
  this->m_nAlignBits = 3;
  this->m_nMaxAlignment = 4;
  this->_vptr_CResourceStream = off_47D0F90;
  if ( nReserveDataSize != 0 )
  {
    v4 = nReserveDataSize;
    v5 = operator new[](nReserveDataSize);
    this->m_pData = v5;
    memset(v5, 0, v4);
    this->m_nCommitted = nReserveDataSize;
  }
  else
  {
    this->m_nCommitted = 0;
  }
}


// CResourceStreamGrowable::~CResourceStreamGrowable  (line 97, @0x0000000003268240, libserver.so)  // inlines: ~CResourceStream
// calls: operator delete []
void __fastcall CResourceStreamGrowable::~CResourceStreamGrowable(CResourceStreamGrowable *const this)
{
  uint8 *m_pData; // rdi

  this->_vptr_CResourceStream = off_47D0F90;
  m_pData = this->m_pData;
  if ( m_pData != 0 )
    operator delete[](m_pData);
  this->_vptr_CResourceStream = off_47D0ED0;
}


// CResourceStreamGrowable::~CResourceStreamGrowable  (line 97, @0x0000000003268280, libserver.so)  // inlines: ~CResourceStream, ~CResourceStreamGrowable
// calls: operator delete [], operator delete
void __fastcall CResourceStreamGrowable::~CResourceStreamGrowable(CResourceStreamGrowable *const this)
{
  uint8 *m_pData; // rdi

  this->_vptr_CResourceStream = off_47D0F90;
  m_pData = this->m_pData;
  if ( m_pData != 0 )
    operator delete[](m_pData);
  this->_vptr_CResourceStream = off_47D0ED0;
  operator delete(this);
}


// CResourceStreamGrowable::Commit  (line 103, @0x00000000032682c0, libserver.so)  // inlines: V_memcpy, V_memset, memcpy, memset
// calls: operator new [], memset, memcpy, operator delete []
void __fastcall CResourceStreamGrowable::Commit(CResourceStreamGrowable *const this, uint nNewCommit)
{
  uint v3; // r12d
  char *v4; // r13
  uint8 *m_pData; // rdi

  if ( this->m_nCommitted < nNewCommit )
  {
    v3 = (2 * nNewCommit + 63) & 0xFFFFFFC0;
    v4 = operator new[](v3);
    memset(&v4[this->m_nUsed], 0, v3 - this->m_nUsed);
    memcpy(v4, this->m_pData, this->m_nUsed);
    m_pData = this->m_pData;
    if ( m_pData != 0 )
      operator delete[](m_pData);
    this->m_pData = v4;
    this->m_nCommitted = v3;
  }
}


// CResourceStreamVM::ReserveVirtualMemory  (line 120, @0x0000000003268590, libserver.so)  // inlines: LeafCodeInfo_t
// calls: Plat_VirtualAlloc, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, Plat_GetPlatformError, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CResourceStreamVM::CResourceStreamVM, CResourceStreamVM::CloneStream
// strings: "resourcestream.cpp", "ReserveVirtualMemory", "Cannot allocate virtual address space in CResourceStreamVM::ReserveVirtualMemory, error %
void __fastcall CResourceStreamVM::ReserveVirtualMemory(CResourceStreamVM *const this, uint nAddressSize)
{
  uint v2; // esi
  uint8 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int PlatformError; // eax
  LeafCodeInfo_t v12; // [rsp+0h] [rbp-30h] BYREF

  v2 = nAddressSize + 0xFFFF;
  LOWORD(v2) = 0;
  if ( v2 < 0x10000 )
    v2 = 0x10000;
  this->m_nReserved = v2;
  while ( 1 )
  {
    v4 = Plat_VirtualAlloc(0, v2, 1, 3, 0);
    this->m_pData = v4;
    if ( v4 != 0 )
      break;
    v2 = this->m_nReserved >> 1;
    this->m_nReserved = v2;
    if ( v2 <= 0xFFFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_11;
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6, v9, v10) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_11:
        PlatformError = Plat_GetPlatformError();
        v12.m_nLine = 134;
        v12.m_szFile = "resourcestream.cpp";
        v12.m_szFunction = "ReserveVirtualMemory";
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v12,
          "Cannot allocate virtual address space in CResourceStreamVM::ReserveVirtualMemory, error %u\n",
          PlatformError);
      }
    }
  }
}


// CResourceStreamVM::ReleaseVirtualMemory  (line 145, @0x0000000003268810, libserver.so)
// calls: CResourceStreamVM::RegisterDeallocation, Plat_VirtualFree
// callers: CResourceStreamVM::~CResourceStreamVM, CResourceStreamVM::CloneStream
void __fastcall CResourceStreamVM::ReleaseVirtualMemory(CResourceStreamVM *const this)
{
  uint8 *m_pData; // rdi

  CResourceStreamVM::RegisterDeallocation(this);
  m_pData = this->m_pData;
  if ( m_pData != 0 )
    Plat_VirtualFree(m_pData, this->m_nReserved, 8);
  this->m_pData = 0;
  this->m_nReserved = 0;
  this->m_nUsed = 0;
  this->m_nCommitted = 0;
}


// CResourceStreamVM::CloneStream  (line 165, @0x00000000032688d0, libserver.so)  // inlines: AllocateBytes, EnsureAvailable, memcpy, memset
// calls: CResourceStreamVM::ReleaseVirtualMemory, CResourceStreamVM::ReserveVirtualMemory, memcpy, memset
void __fastcall CResourceStreamVM::CloneStream(CResourceStreamVM *const this, CResourceStreamVM *const copyFromStream)
{
  __int64 v4; // rdi
  uint v5; // r13d
  uint8 *m_pData; // r14
  uint v7; // esi
  uint8 *v8; // rdi
  size_t m_nUsed; // rdx

  if ( this->m_nReserved == copyFromStream->m_nReserved )
  {
    m_nUsed = this->m_nUsed;
    if ( m_nUsed != 0 )
      memset(this->m_pData, 0, m_nUsed);
    this->m_nUsed = 0;
    v4 = 0;
  }
  else
  {
    CResourceStreamVM::ReleaseVirtualMemory(this);
    CResourceStreamVM::ReserveVirtualMemory(this, copyFromStream->m_nReserved);
    v4 = this->m_nUsed;
  }
  v5 = copyFromStream->m_nUsed;
  m_pData = copyFromStream->m_pData;
  v7 = v4 + v5;
  if ( v4 + v5 > this->m_nCommitted )
  {
    (*(this->_vptr_CResourceStream + 2))(this);
    v4 = this->m_nUsed;
    v7 = v4 + v5;
  }
  v8 = &this->m_pData[v4];
  this->m_nUsed = v7;
  memcpy(v8, m_pData, v5);
  this->m_nAlignBits = copyFromStream->m_nAlignBits;
  this->m_nMaxAlignment = copyFromStream->m_nMaxAlignment;
}


// CResourceStream::AllocateBytes  (line 192, @0x0000000003268700, libserver.so)  // inlines: EnsureAvailable
// callers: CBuilderModelInfo::FillInPermData, CModelSkeletonBuilder::FillInPermData, CModelSkeletonBuilder::CompileToPermDataPointer, CModelBuilder::FillInPermData, CModelBuilder::CompileToPermDataPointer, CMaterialDrawDescriptor::FillInPermData, CSceneObjectData::FillInPermData, CAttachment::FillInPermData, CHitBoxSet::FillInPermData, CBaseConstraint::FillInPermData, CRenderSkeleton::FillInPermData, CRenderMesh::FillInPermData (16 total)
void *__fastcall CResourceStream::AllocateBytes(CResourceStream *const this, uint numBytes)
{
  __int64 m_nUsed; // rax
  uint v5; // esi
  void *result; // rax

  m_nUsed = this->m_nUsed;
  v5 = numBytes + m_nUsed;
  if ( v5 > this->m_nCommitted )
  {
    (*(this->_vptr_CResourceStream + 2))(this);
    m_nUsed = this->m_nUsed;
    v5 = numBytes + m_nUsed;
  }
  result = &this->m_pData[m_nUsed];
  this->m_nUsed = v5;
  return result;
}


// CResourceStreamVM::Commit  (line 201, @0x0000000003268990, libserver.so)  // inlines: LeafCodeInfo_t
// calls: CResourceStreamVM::RegisterDeallocation, Plat_VirtualAlloc, CResourceStreamVM::RegisterAllocation, Warning, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "--------------------WARNING----------------------\n", "--  Increase the size of the resource stream   --\n", "--  Need %d bytes, but only have %d bytes\n", "resourcestream.cpp", "Commit", "Failed trying to Commit %u bytes, used %u bytes, reserved %u bytes\n"
void __fastcall CResourceStreamVM::Commit(CResourceStreamVM *const this, uint nNewCommit)
{
  uint v2; // r12d
  double v4; // xmm0_8
  double v5; // xmm0_8
  double v6; // xmm0_8
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  uint m_nReserved; // eax
  uint m_nUsed; // r9d
  LeafCodeInfo_t v18; // [rsp+10h] [rbp-40h] BYREF

  v2 = nNewCommit;
  if ( this->m_nReserved < nNewCommit )
  {
    v4 = Warning("--------------------WARNING----------------------\n");
    v5 = Warning("--------------------WARNING----------------------\n", v4);
    v6 = Warning("--------------------WARNING----------------------\n", v5);
    Warning("--  Increase the size of the resource stream   --\n", v6);
    v7 = Warning("--  Need %d bytes, but only have %d bytes\n", v2, this->m_nReserved);
    v8 = Warning("--------------------WARNING----------------------\n", v7);
    v9 = Warning("--------------------WARNING----------------------\n", v8);
    Warning("--------------------WARNING----------------------\n", v9);
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
      goto LABEL_6;
    m_nReserved = this->m_nReserved;
    v18.m_nLine = 214;
    m_nUsed = this->m_nUsed;
    v18.m_szFile = "resourcestream.cpp";
    goto LABEL_11;
  }
  if ( nNewCommit > this->m_nCommitted )
  {
    CResourceStreamVM::RegisterDeallocation(this);
    v2 += 0xFFFF;
    LOWORD(v2) = 0;
    if ( Plat_VirtualAlloc(&this->m_pData[this->m_nCommitted], v2 - this->m_nCommitted, 2, 3, 0) == 0 )
    {
      while ( 1 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          m_nReserved = this->m_nReserved;
          v18.m_nLine = 224;
          m_nUsed = this->m_nUsed;
          v18.m_szFile = "resourcestream.cpp";
LABEL_11:
          v18.m_szFunction = "Commit";
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v18,
            "Failed trying to Commit %u bytes, used %u bytes, reserved %u bytes\n",
            v2,
            m_nUsed,
            m_nReserved);
        }
LABEL_6:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v12, v13, v10, v11, v14, v15) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
    }
    this->m_nCommitted = v2;
    CResourceStreamVM::RegisterAllocation(this);
  }
}


// CResourceStreamVM::RegisterAllocation  (line 233, @0x0000000003268740, libserver.so)
// callers: CResourceStreamVM::Commit
void __fastcall CResourceStreamVM::RegisterAllocation(CResourceStreamVM *const this)
{
  _QWORD *v2; // rax
  __int64 m_nCommitted; // rdx
  __int64 v4; // rdx
  _QWORD *v5; // rdi

  v2 = (*(*g_pMemAlloc + 208LL))(g_pMemAlloc, &this->m_nAllocStatsId, 1);
  if ( v2 != 0 )
  {
    m_nCommitted = this->m_nCommitted;
    ++v2[1];
    *v2 += m_nCommitted;
    v4 = this->m_nCommitted;
    ++v2[3];
    v5 = g_pMemAlloc;
    v2[2] += v4;
    (*(*v5 + 224LL))(v5, this->m_nAllocStatsId);
  }
}


// CResourceStreamVM::RegisterDeallocation  (line 247, @0x00000000032687b0, libserver.so)
// callers: CResourceStreamVM::ReleaseVirtualMemory, CResourceStreamVM::Commit
void __fastcall CResourceStreamVM::RegisterDeallocation(CResourceStreamVM *const this)
{
  _QWORD *v2; // rax
  __int64 m_nCommitted; // rdx

  if ( this->m_nAllocStatsId != -1 )
  {
    v2 = (*(*g_pMemAlloc + 216LL))(g_pMemAlloc);
    if ( v2 != 0 )
    {
      m_nCommitted = this->m_nCommitted;
      --v2[1];
      *v2 -= m_nCommitted;
      (*(*g_pMemAlloc + 224LL))(g_pMemAlloc, this->m_nAllocStatsId);
    }
  }
}


// CResourceStream::Align  (line 265, @0x0000000003268b40, libserver.so)  // inlines: AllocateBytes, EnsureAvailable, LeafCodeInfo_t, V_memset, memset
// calls: memset, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CBuilderModelInfo::FillInPermData, CModelSkeletonBuilder::FillInPermData, CModelSkeletonBuilder::CompileToPermDataPointer, CModelBuilder::FillInPermData, CModelBuilder::CompileToPermDataPointer, CMaterialDrawDescriptor::FillInPermData, CSceneObjectData::FillInPermData, CAttachment::FillInPermData, CHitBoxSet::FillInPermData, CBaseConstraint::FillInPermData, CRenderSkeleton::FillInPermData, CRenderMesh::FillInPermData (16 total)
// strings: "resourcestream.cpp", "Align", "Wrong alignment %d\n"
void __fastcall CResourceStream::Align(CResourceStream *const this, uint nAlignment, int nOffset)
{
  uint v3; // eax
  uint m_nMaxAlignment; // ecx
  __int64 m_nUsed; // rdi
  int v8; // edx
  int v9; // r12d
  uint v10; // esi
  uint8 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  LeafCodeInfo_t v18; // [rsp+0h] [rbp-30h] BYREF

  v3 = nAlignment - 1;
  m_nMaxAlignment = this->m_nMaxAlignment;
  if ( nAlignment >= m_nMaxAlignment )
    m_nMaxAlignment = nAlignment;
  this->m_nMaxAlignment = m_nMaxAlignment;
  if ( (nAlignment & v3) != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_13;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13, v16, v17) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_13:
      v18.m_szFile = "resourcestream.cpp";
      v18.m_szFunction = "Align";
      v18.m_nLine = 270;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v18, "Wrong alignment %d\n", nAlignment);
    }
  }
  m_nUsed = this->m_nUsed;
  v8 = v3 & (nOffset - m_nUsed);
  v9 = v8;
  if ( v8 > 0 )
  {
    v10 = v8 + m_nUsed;
    if ( (v8 + m_nUsed) > this->m_nCommitted )
    {
      (*(this->_vptr_CResourceStream + 2))(this);
      m_nUsed = this->m_nUsed;
      v10 = v9 + m_nUsed;
    }
    v11 = &this->m_pData[m_nUsed];
    this->m_nUsed = v10;
    memset(v11, 0, v9);
  }
}


// CResourceStream::PrintStats  (line 286, @0x0000000003268c20, libserver.so)
// calls: Msg
// strings: "ResourceFile: %d/%d @%p align %u\n"
void __fastcall CResourceStream::PrintStats(CResourceStream *const this)
{
  Msg("ResourceFile: %d/%d @%p align %u\n", this->m_nUsed, this->m_nCommitted, this->m_pData, this->m_nAlignBits);
}


// CResourceStream::ClearStats  (line 291, @0x0000000003268c50, libserver.so)
void __fastcall CResourceStream::ClearStats(CResourceStream *const this)
{
  ;
}


