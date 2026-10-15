
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTextStatsMgr::CTextStatsMgr  (line 21, @0x00000000023c9f90, libserver.so)
void __fastcall CTextStatsMgr::CTextStatsMgr(CTextStatsMgr *const this)
{
  this->m_szStatFilename[0] = 0;
}


// CTextStatsMgr::WriteFile  (line 26, @0x00000000023ca090, libserver.so)
// calls: CTextStat::GetTextStatsList
// callers: CSource2Server::Shutdown
// strings: "LOGDIR", "wt"
// globals: CTextStatFile::s_pHead
bool __fastcall CTextStatsMgr::WriteFile(CTextStatsMgr *const this, IFileSystem *pFileSys, const char *pFilename)
{
  IBaseFileSystem *v4; // rax
  CTextStatsMgr *v5; // rsi
  __int64 v7; // r14
  bool result; // al
  CTextStat *TextStatsList; // rax
  CTextStat *m_pNext; // rbx
  CTextStat *i; // r12
  CTextStatFile *j; // rbx
  IBaseFileSystem *v13; // [rsp+8h] [rbp-38h]

  v4 = &pFileSys->IBaseFileSystem;
  v5 = pFilename;
  v13 = v4;
  if ( pFilename == 0 )
    v5 = this;
  v7 = (*(v4->_vptr_IBaseFileSystem + 2))(v4, v5, "wt", "LOGDIR");
  result = 0;
  if ( v7 != 0 )
  {
    TextStatsList = CTextStat::GetTextStatsList();
    m_pNext = TextStatsList->m_pNext;
    for ( i = TextStatsList; i != m_pNext; m_pNext = m_pNext->m_pNext )
    {
      if ( m_pNext->m_pMgr == this )
        m_pNext->m_PrintFn(pFileSys, v7, m_pNext->m_pUserData);
    }
    (*(pFileSys->_vptr_IBaseFileSystem + 3))(v13, v7);
    for ( j = CTextStatFile::s_pHead; j != 0; j = j->m_pNext )
      j->m_pFn();
    return 1;
  }
  return result;
}


// CTextStatsMgr::GetStatsFilename  (line 56, @0x00000000023c9fa0, libserver.so)
// callers: CSource2Server::Shutdown
char *__fastcall CTextStatsMgr::GetStatsFilename(CTextStatsMgr *const this)
{
  return this->m_szStatFilename;
}


// CTextStatsMgr::SetStatsFilename  (line 61, @0x00000000023c9fb0, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy
// callers: CSource2Server::Shutdown
void __fastcall CTextStatsMgr::SetStatsFilename(CTextStatsMgr *const this, const char *sFilename)
{
  _V_strncpy(this, sFilename, 260);
}


// CTextStat::CTextStat  (line 72, @0x00000000023c9fc0, libserver.so)
void __fastcall CTextStat::CTextStat(CTextStat *const this)
{
  this->m_pNext = this;
  this->m_pPrev = this;
  this->m_pMgr = 0;
}


// CTextStat::CTextStat  (line 79, @0x00000000023ca1c0, libserver.so)
// calls: CTextStat::Init
void __fastcall CTextStat::CTextStat(
        CTextStat *const this,
        TextStatPrintFn printFn,
        void *pUserData,
        CTextStatsMgr *pMgr)
{
  this->m_pNext = this;
  this->m_pPrev = this;
  CTextStat::Init(this, printFn, pUserData, pMgr);
}


// CTextStat::~CTextStat  (line 86, @0x00000000023bb0f0, libserver.so)  // inlines: Term
void __fastcall CTextStat::~CTextStat(CTextStat *const this)
{
  this->m_pPrev->m_pNext = this->m_pNext;
  this->m_pNext->m_pPrev = this->m_pPrev;
  this->m_pNext = this;
  this->m_pPrev = this;
  this->m_pMgr = 0;
}


// CTextStat::Init  (line 92, @0x00000000023ca150, libserver.so)  // inlines: Term
// calls: CTextStat::GetTextStatsList
// callers: CTextStat::CTextStat, CTextStatInt::CTextStatInt
void __fastcall CTextStat::Init(CTextStat *const this, TextStatPrintFn printFn, void *pUserData, CTextStatsMgr *pMgr)
{
  CTextStat *TextStatsList; // rax
  CTextStat *m_pPrev; // rdx
  CTextStat *m_pNext; // rax

  this->m_pPrev->m_pNext = this->m_pNext;
  this->m_pNext->m_pPrev = this->m_pPrev;
  this->m_pNext = this;
  this->m_pPrev = this;
  this->m_pMgr = 0;
  this->m_pPrev = CTextStat::GetTextStatsList();
  TextStatsList = CTextStat::GetTextStatsList();
  m_pPrev = this->m_pPrev;
  m_pNext = TextStatsList->m_pNext;
  this->m_pNext = m_pNext;
  m_pNext->m_pPrev = this;
  m_pPrev->m_pNext = this;
  this->m_PrintFn = printFn;
  this->m_pUserData = pUserData;
  this->m_pMgr = pMgr;
}


// CTextStat::Term  (line 106, @0x00000000023c9fe0, libserver.so)
void __fastcall CTextStat::Term(CTextStat *const this)
{
  this->m_pPrev->m_pNext = this->m_pNext;
  this->m_pNext->m_pPrev = this->m_pPrev;
  this->m_pNext = this;
  this->m_pPrev = this;
  this->m_pMgr = 0;
}


// CTextStat::CTextStat  (line 116, @0x00000000023ca010, libserver.so)
void __fastcall CTextStat::CTextStat(CTextStat *const this, bool bGlobalListHead)
{
  this->m_pNext = this;
  this->m_pPrev = this;
}


// CTextStat::GetTextStatsList  (line 123, @0x00000000023ca020, libserver.so)  // inlines: CTextStat
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: CTextStatsMgr::WriteFile, CTextStat::Init
// globals: `guard variable for'CTextStat::GetTextStatsList(void)::theList, CTextStat::GetTextStatsList(void)::theList, __dso_handle, CTextStat::~CTextStat()
CTextStat *__cdecl CTextStat::GetTextStatsList()
{
  if ( `guard variable for'CTextStat::GetTextStatsList(void)::theList != 0 )
    return &CTextStat::GetTextStatsList(void)::theList;
  if ( __cxa_guard_acquire(&`guard variable for'CTextStat::GetTextStatsList(void)::theList) != 0 )
  {
    CTextStat::GetTextStatsList(void)::theList.m_pNext = &CTextStat::GetTextStatsList(void)::theList;
    CTextStat::GetTextStatsList(void)::theList.m_pPrev = &CTextStat::GetTextStatsList(void)::theList;
    __cxa_guard_release(&`guard variable for'CTextStat::GetTextStatsList(void)::theList);
    __cxa_atexit(CTextStat::~CTextStat, &CTextStat::GetTextStatsList(void)::theList, &_dso_handle);
  }
  return &CTextStat::GetTextStatsList(void)::theList;
}


// CTextStat::RemoveFn  (line 130, @0x00000000023ca1e0, libserver.so)  // inlines: Term
void __fastcall CTextStat::RemoveFn(void *pUserData)
{
  *(*pUserData + 8LL) = *(pUserData + 1);
  **(pUserData + 1) = *pUserData;
  *(pUserData + 1) = pUserData;
  *pUserData = pUserData;
  *(pUserData + 2) = 0;
}


// CTextStatInt::CTextStatInt  (line 141, @0x00000000023ca210, libserver.so)  // inlines: CTextStat
// calls: CTextStat::Init
// globals: CTextStatInt::PrintFn(IFileSystem *,void *,void *)
void __fastcall CTextStatInt::CTextStatInt(
        CTextStatInt *const this,
        const char *pName,
        int initialValue,
        CTextStatsMgr *pMgr)
{
  CTextStat *p_m_Reg; // rdi

  p_m_Reg = &this->m_Reg;
  this->m_pName = pName;
  this->m_Value = initialValue;
  this->m_Reg.m_pNext = p_m_Reg;
  this->m_Reg.m_pPrev = p_m_Reg;
  this->m_Reg.m_pMgr = 0;
  CTextStat::Init(p_m_Reg, CTextStatInt::PrintFn, this, pMgr);
}


// CTextStatInt::PrintFn  (line 149, @0x00000000023bb120, libserver.so)
// strings: "%s %d\n"
void __fastcall CTextStatInt::PrintFn(IFileSystem *pFileSys, FileHandle_t hFile, void *pUserData)
{
  (*(pFileSys->_vptr_IAppSystem + 34))(pFileSys, hFile, "%s %d\n", *pUserData, *(pUserData + 2));
}


// CTextStatFile::CTextStatFile  (line 164, @0x00000000023ca250, libserver.so)
// globals: CTextStatFile::s_pHead
void __fastcall CTextStatFile::CTextStatFile(CTextStatFile *const this, TextStatFileFn fn)
{
  CTextStatFile *v2; // rax

  v2 = CTextStatFile::s_pHead;
  this->m_pFn = fn;
  this->m_pNext = v2;
  CTextStatFile::s_pHead = this;
}


