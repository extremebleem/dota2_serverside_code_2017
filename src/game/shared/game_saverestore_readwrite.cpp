// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/game_saverestore_readwrite.cpp:23
class CSaveRestoreGridPrinter : public CGridStringPrinter {
public:

	CSaveRestoreGridPrinter();
	void Spew(int, LoggingVerbosity_t, const char *);
	~CSaveRestoreGridPrinter();

	// sizeof = 144
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSaveRestoreGridPrinter::Spew  (line 30, @0x00000000020a1300, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, String, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CGridStringPrinter::GetLines, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, _Unwind_Resume
// callers: CSave::FlushDetailedSpew
void __fastcall CSaveRestoreGridPrinter::Spew(
        const CSaveRestoreGridPrinter *const this,
        int nLoggingChannel,
        LoggingVerbosity_t verbosity,
        const char *pFlushPrefix)
{
  int m_Size; // r14d
  __int64 v7; // r12
  int v8; // ebx
  unsigned __int32 v9; // r15d
  const CUtlString *v10; // r14
  const char *v11; // rax
  __int64 i; // rbx
  const char *v13; // rax
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > lines; // [rsp+10h] [rbp-50h] BYREF

  lines.m_Size = 0;
  lines.m_Memory.m_pMemory = 0;
  lines.m_Memory.m_nAllocationCount = 0;
  lines.m_Memory.m_nGrowSize = 0;
  CGridStringPrinter::GetLines(this, &lines);
  m_Size = lines.m_Size;
  if ( lines.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    v9 = verbosity - 3;
    while ( 1 )
    {
      v10 = &lines.m_Memory.m_pMemory[v7];
      if ( v9 > 1 )
        break;
      if ( LoggingSystem_IsChannelEnabled(nLoggingChannel, 0) != 0 )
      {
        v11 = CUtlString::Get(v10);
        LoggingSystem_Log(nLoggingChannel, 0, "%s%s\n", pFlushPrefix, v11);
        m_Size = lines.m_Size;
        ++v8;
        ++v7;
        if ( lines.m_Size <= v8 )
          goto LABEL_9;
      }
      else
      {
LABEL_5:
        m_Size = lines.m_Size;
        ++v8;
        ++v7;
        if ( lines.m_Size <= v8 )
          goto LABEL_9;
      }
    }
    if ( LoggingSystem_IsChannelEnabled(nLoggingChannel, 1) != 0 )
    {
      v13 = CUtlString::Get(v10);
      LoggingSystem_Log(nLoggingChannel, 1, "%s%s\n", pFlushPrefix, v13);
    }
    goto LABEL_5;
  }
LABEL_9:
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    if ( *(&lines.m_Memory.m_pMemory->m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((lines.m_Memory.m_pMemory + i));
  }
  lines.m_Size = 0;
  if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&lines.m_Memory);
    if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&lines.m_Memory);
  }
}


// UTIL_FunctionToName  (line 163, @0x00000000020a1540, libserver.so)
// callers: CSave::WriteFunction
const char *__fastcall UTIL_FunctionToName(datamap_t *pMap, inputfunc_t function)
{
  int dataNumFields; // ecx
  typedescription_t *dataDesc; // rax
  typedescription_t *v4; // rcx

  if ( pMap == 0 )
    return 0;
  while ( 1 )
  {
    dataNumFields = pMap->dataNumFields;
    if ( dataNumFields > 0 )
      break;
LABEL_10:
    pMap = pMap->baseMap;
    if ( pMap == 0 )
      return 0;
  }
  dataDesc = pMap->dataDesc;
  v4 = &pMap->dataDesc[(dataNumFields - 1) + 1];
  while ( (dataDesc->flags & 0x20) == 0
       || function.__pfn != dataDesc->inputFunc.__pfn
       || function.__delta != dataDesc->inputFunc.__delta && function.__pfn != 0 )
  {
    if ( ++dataDesc == v4 )
      goto LABEL_10;
  }
  return dataDesc->fieldName;
}


// UTIL_FunctionFromName  (line 195, @0x00000000020a15b0, libserver.so)  // inlines: _V_strcmp
// calls: strcmp, Msg
// callers: CRestore::ReadFunction
// strings: "Failed to find function %s\n"
inputfunc_t __fastcall UTIL_FunctionFromName(datamap_t *pMap, const char *pName)
{
  datamap_t *v2; // r14
  int dataNumFields; // eax
  typedescription_t *dataDesc; // rbx
  __int64 v6; // r12

  v2 = pMap;
  if ( pMap != 0 )
  {
    while ( 1 )
    {
      dataNumFields = v2->dataNumFields;
      if ( dataNumFields > 0 )
        break;
LABEL_7:
      v2 = v2->baseMap;
      if ( v2 == 0 )
        goto LABEL_8;
    }
    dataDesc = v2->dataDesc;
    v6 = &v2->dataDesc[(dataNumFields - 1) + 1];
    while ( (dataDesc->flags & 0x20) == 0 || strcmp(pName, dataDesc->fieldName) != 0 )
    {
      if ( ++dataDesc == v6 )
        goto LABEL_7;
    }
    return dataDesc->inputFunc;
  }
  else
  {
LABEL_8:
    Msg("Failed to find function %s\n", pName);
    return 0LL;
  }
}


// CSave::CSave  (line 231, @0x00000000020df590, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, EnsureCapacity, ~CUtlVector, ~ISave
// calls: LoggingSystem_GetChannelVerbosity, CSave::SetDetailedSpew, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CEntity2SaveRestore::StreamEntitiesToFile, CEntity2SaveRestore::SaveGame_Finalize, SaveGlobalState, CChangeLevel::ChangeList
// globals: LOG_SAVEIO
void __fastcall CSave::CSave(CSave *const this, CSaveRestoreData *pdata)
{
  CGameSaveRestoreInfo *v3; // rax
  bool bAsync; // al
  int *v5; // rax
  __int64 v6; // rdi
  int ChannelVerbosity; // eax

  this->_vptr_ISave = &off_3FF5CB0;
  v3 = 0;
  if ( pdata != 0 )
    v3 = &pdata->CGameSaveRestoreInfo;
  this->m_pData = pdata;
  this->m_BlockStartStack.m_Size = 0;
  this->m_pGameInfo = v3;
  this->m_BlockStartStack.m_Memory.m_pMemory = 0;
  this->m_BlockStartStack.m_Memory.m_nAllocationCount = 0;
  this->m_BlockStartStack.m_Memory.m_nGrowSize = 0;
  this->m_hLogFile = 0;
  bAsync = pdata->bAsync;
  this->m_bDetailedSpew = 0;
  this->m_bPreventDetailedSpew = 0;
  this->m_pGridPrinter = 0;
  this->m_nFlushScopeDepth = 0;
  this->m_bAsync = bAsync;
  v5 = (**g_pMemAlloc)(g_pMemAlloc, 128);
  v6 = LOG_SAVEIO;
  this->m_BlockStartStack.m_Memory.m_pMemory = v5;
  this->m_BlockStartStack.m_Memory.m_nAllocationCount = 32;
  ChannelVerbosity = LoggingSystem_GetChannelVerbosity(v6);
  CSave::SetDetailedSpew(this, ChannelVerbosity == 3);
}


// CSave::~CSave  (line 242, @0x00000000020df000, libserver.so)  // inlines: Destruct<CCopyableUtlVector<CUtlSymbolLarge> >, Element, Purge, RemoveAll, operator[], ~CCopyableUtlVector, ~CGridStringPrinter, ~CNonThreadsafeTree, ~CSaveRestoreGridPrinter, ~CUtlMemory, ~CUtlRBTree, ~CUtlSymbolTableLargeBase, ~CUtlVector, ~CUtlVectorBase, ~ISave
// calls: CSave::FlushDetailedSpew, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::Purge, CUtlVectorBase<CUtlSymbolLarge, CUtlMemory<CUtlSymbolLarge, int> >::RemoveAll, CUtlMemory<CUtlSymbolLarge, int>::Purge, operator delete, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Purge, CUtlMemory<int, int>::Purge, CUtlMemory<CGridStringPrinter::ColumnHeader_t, int>::Purge, CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>, int>::Purge
// callers: CEntity2SaveRestore::StreamEntitiesToFile, CEntity2SaveRestore::SaveGame_Finalize, CSave::~CSave, SaveGlobalState, CChangeLevel::ChangeList
void __fastcall CSave::~CSave(CSave *const this)
{
  CSaveRestoreGridPrinter *m_pGridPrinter; // rbx
  __int64 v3; // r14
  int v4; // r12d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v5; // rsi
  bool v6; // zf
  int m_Size; // r13d
  __int64 i; // r14
  CUtlVectorBase<CUtlSymbolLarge,CUtlMemory<CUtlSymbolLarge,int> > *v9; // r12

  this->_vptr_ISave = &off_3FF5CB0;
  if ( this->m_pGridPrinter != 0 )
  {
    CSave::FlushDetailedSpew(this, "");
    m_pGridPrinter = this->m_pGridPrinter;
    if ( m_pGridPrinter != 0 )
    {
      CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&m_pGridPrinter->m_Symbols.m_Lookup);
      if ( m_pGridPrinter->m_Symbols.m_StringPools.m_Size > 0 )
      {
        v3 = 0;
        v4 = 0;
        do
        {
          ++v4;
          v5 = m_pGridPrinter->m_Symbols.m_StringPools.m_Memory.m_pMemory[v3++];
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
        }
        while ( v4 < m_pGridPrinter->m_Symbols.m_StringPools.m_Size );
      }
      v6 = (m_pGridPrinter->m_Symbols.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      m_pGridPrinter->m_Symbols.m_StringPools.m_Size = 0;
      if ( v6 )
      {
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&m_pGridPrinter->m_Symbols.m_StringPools.m_Memory);
        m_pGridPrinter->m_Symbols.m_StringPools.m_Size = 0;
        if ( (m_pGridPrinter->m_Symbols.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&m_pGridPrinter->m_Symbols.m_StringPools.m_Memory);
          if ( (m_pGridPrinter->m_Symbols.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&m_pGridPrinter->m_Symbols.m_StringPools.m_Memory);
        }
      }
      else
      {
        m_pGridPrinter->m_Symbols.m_StringPools.m_Size = 0;
      }
      CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&m_pGridPrinter->m_Symbols.m_Lookup);
      if ( (m_pGridPrinter->m_Symbols.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::Purge(&m_pGridPrinter->m_Symbols.m_Lookup.m_Elements);
      v6 = (m_pGridPrinter->m_ColumnHeaders.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      m_pGridPrinter->m_ColumnHeaders.m_Size = 0;
      if ( v6 )
      {
        CUtlMemory<CGridStringPrinter::ColumnHeader_t,int>::Purge(&m_pGridPrinter->m_ColumnHeaders.m_Memory);
        if ( (m_pGridPrinter->m_ColumnHeaders.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CGridStringPrinter::ColumnHeader_t,int>::Purge(&m_pGridPrinter->m_ColumnHeaders.m_Memory);
      }
      m_Size = m_pGridPrinter->m_Database.m_Size;
      for ( i = 24LL * m_pGridPrinter->m_Database.m_Size - 24; --m_Size >= 0; i -= 24 )
      {
        v9 = (m_pGridPrinter->m_Database.m_Memory.m_pMemory + i);
        CUtlVectorBase<CUtlSymbolLarge,CUtlMemory<CUtlSymbolLarge,int>>::RemoveAll(v9);
        if ( (v9->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CUtlSymbolLarge,int>::Purge(&v9->m_Memory);
          if ( (v9->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CUtlSymbolLarge,int>::Purge(&v9->m_Memory);
        }
      }
      v6 = (m_pGridPrinter->m_Database.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      m_pGridPrinter->m_Database.m_Size = 0;
      if ( v6 )
      {
        CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>,int>::Purge(&m_pGridPrinter->m_Database.m_Memory);
        if ( (m_pGridPrinter->m_Database.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>,int>::Purge(&m_pGridPrinter->m_Database.m_Memory);
      }
      operator delete(m_pGridPrinter);
    }
  }
  v6 = (this->m_BlockStartStack.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_BlockStartStack.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<int,int>::Purge(&this->m_BlockStartStack.m_Memory);
    if ( (this->m_BlockStartStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_BlockStartStack.m_Memory);
  }
  this->_vptr_ISave = &off_3FF3F30;
}


// CSave::~CSave  (line 242, @0x00000000020df270, libserver.so)
// calls: CSave::~CSave, operator delete
void __fastcall CSave::~CSave(CSave *const this)
{
  CSave::~CSave(this);
  operator delete(this);
}


// CSave::SetDetailedSpew  (line 251, @0x00000000020df290, libserver.so)  // inlines: CGridStringPrinter, CNonThreadsafeTree, CUtlMemory, CUtlRBTree, CUtlSymbolTableLargeBase, CUtlVector, CUtlVectorBase, Destruct<CCopyableUtlVector<CUtlSymbolLarge> >, Element, Purge, RemoveAll, ResetDbgInfo, operator[], ~CCopyableUtlVector, ~CGridStringPrinter, ~CNonThreadsafeTree, ~CSaveRestoreGridPrinter, ~CUtlMemory, ~CUtlRBTree, ~CUtlSymbolTableLargeBase, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::Purge, CUtlVectorBase<CUtlSymbolLarge, CUtlMemory<CUtlSymbolLarge, int> >::RemoveAll, CUtlMemory<CUtlSymbolLarge, int>::Purge, operator delete, operator new, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::CUtlMemory, CSave::InitGridPrinter, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Purge, CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>, int>::Purge, CUtlMemory<CGridStringPrinter::ColumnHeader_t, int>::Purge, CUtlVectorBase<CCopyableUtlVector<CUtlSymbolLarge>, CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>, int> >::~CUtlVectorBase (13 total)
// callers: CSave::CSave
void __fastcall CSave::SetDetailedSpew(CSave *const this, bool bDetailedSpew)
{
  bool m_bDetailedSpew; // al
  CSaveRestoreGridPrinter *m_pGridPrinter; // rbx
  __int64 v5; // r13
  int v6; // r12d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v7; // rsi
  bool v8; // zf
  int m_Size; // r13d
  __int64 i; // r14
  CUtlVectorBase<CUtlSymbolLarge,CUtlMemory<CUtlSymbolLarge,int> > *v11; // r12
  CSaveRestoreGridPrinter *v12; // rbx
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> >::Node_t *m_pMemory; // rax

  m_bDetailedSpew = this->m_bDetailedSpew;
  this->m_bDetailedSpew = bDetailedSpew;
  if ( m_bDetailedSpew != bDetailedSpew )
  {
    if ( bDetailedSpew )
    {
      v12 = operator new(0x90u);
      memset(v12, 0, sizeof(CSaveRestoreGridPrinter));
      CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::CUtlMemory(
        &v12->m_Symbols.m_Lookup.m_Elements,
        0,
        16);
      m_pMemory = v12->m_Symbols.m_Lookup.m_Elements.m_pMemory;
      v12->m_Symbols.m_Lookup.m_Root = -1;
      v12->m_Symbols.m_Lookup.m_NumElements = 0;
      v12->m_Symbols.m_Lookup.m_FirstFree = -1;
      v12->m_Symbols.m_Lookup.m_LastAlloc.index = -1;
      v12->m_Symbols.m_Lookup.m_pElements = m_pMemory;
      v12->m_Symbols.m_StringPools.m_Size = 0;
      v12->m_Symbols.m_StringPools.m_Memory.m_pMemory = 0;
      v12->m_Symbols.m_StringPools.m_Memory.m_nAllocationCount = 0;
      v12->m_Symbols.m_StringPools.m_Memory.m_nGrowSize = 8;
      v12->m_bUseHeaders = 0;
      v12->m_cColumnDivider = 124;
      v12->m_cHeaderDivider = 45;
      this->m_pGridPrinter = v12;
      CSave::InitGridPrinter(this);
    }
    else
    {
      m_pGridPrinter = this->m_pGridPrinter;
      if ( m_pGridPrinter != 0 )
      {
        CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&m_pGridPrinter->m_Symbols.m_Lookup);
        if ( m_pGridPrinter->m_Symbols.m_StringPools.m_Size > 0 )
        {
          v5 = 0;
          v6 = 0;
          do
          {
            ++v6;
            v7 = m_pGridPrinter->m_Symbols.m_StringPools.m_Memory.m_pMemory[v5++];
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7);
          }
          while ( v6 < m_pGridPrinter->m_Symbols.m_StringPools.m_Size );
        }
        v8 = (m_pGridPrinter->m_Symbols.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        m_pGridPrinter->m_Symbols.m_StringPools.m_Size = 0;
        if ( v8 )
        {
          CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&m_pGridPrinter->m_Symbols.m_StringPools.m_Memory);
          m_pGridPrinter->m_Symbols.m_StringPools.m_Size = 0;
          if ( (m_pGridPrinter->m_Symbols.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&m_pGridPrinter->m_Symbols.m_StringPools.m_Memory);
            if ( (m_pGridPrinter->m_Symbols.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&m_pGridPrinter->m_Symbols.m_StringPools.m_Memory);
          }
        }
        else
        {
          m_pGridPrinter->m_Symbols.m_StringPools.m_Size = 0;
        }
        CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&m_pGridPrinter->m_Symbols.m_Lookup);
        if ( (m_pGridPrinter->m_Symbols.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::Purge(&m_pGridPrinter->m_Symbols.m_Lookup.m_Elements);
        v8 = (m_pGridPrinter->m_ColumnHeaders.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        m_pGridPrinter->m_ColumnHeaders.m_Size = 0;
        if ( v8 )
        {
          CUtlMemory<CGridStringPrinter::ColumnHeader_t,int>::Purge(&m_pGridPrinter->m_ColumnHeaders.m_Memory);
          if ( (m_pGridPrinter->m_ColumnHeaders.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CGridStringPrinter::ColumnHeader_t,int>::Purge(&m_pGridPrinter->m_ColumnHeaders.m_Memory);
        }
        m_Size = m_pGridPrinter->m_Database.m_Size;
        for ( i = 24LL * m_pGridPrinter->m_Database.m_Size - 24; --m_Size >= 0; i -= 24 )
        {
          v11 = (m_pGridPrinter->m_Database.m_Memory.m_pMemory + i);
          CUtlVectorBase<CUtlSymbolLarge,CUtlMemory<CUtlSymbolLarge,int>>::RemoveAll(v11);
          if ( (v11->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CUtlSymbolLarge,int>::Purge(&v11->m_Memory);
            if ( (v11->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CUtlSymbolLarge,int>::Purge(&v11->m_Memory);
          }
        }
        v8 = (m_pGridPrinter->m_Database.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        m_pGridPrinter->m_Database.m_Size = 0;
        if ( v8 )
        {
          CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>,int>::Purge(&m_pGridPrinter->m_Database.m_Memory);
          if ( (m_pGridPrinter->m_Database.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>,int>::Purge(&m_pGridPrinter->m_Database.m_Memory);
        }
        operator delete(m_pGridPrinter);
      }
    }
  }
}


// CSave::SetPreventDetailedSpew  (line 270, @0x000000000209bba0, libserver.so)
void __fastcall CSave::SetPreventDetailedSpew(CSave *const this, bool bPreventDetailedSpew)
{
  this->m_bPreventDetailedSpew = bPreventDetailedSpew;
}


// CSave::StartLogging  (line 297, @0x000000000209bbb0, libserver.so)
void __fastcall CSave::StartLogging(CSave *const this, const char *pszLogName)
{
  this->m_hLogFile = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(
                       &g_pFullFileSystem->IBaseFileSystem,
                       pszLogName,
                       "w",
                       0);
}


// CSave::EndLogging  (line 305, @0x000000000209bbf0, libserver.so)
void __fastcall CSave::EndLogging(CSave *const this)
{
  if ( this->m_hLogFile != 0 )
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem);
  this->m_hLogFile = 0;
}


// CSave::IsLogging  (line 317, @0x00000000020a1650, libserver.so)
bool __fastcall CSave::IsLogging(CSave *const this)
{
  return this->m_hLogFile != 0;
}


// CSave::FlushDetailedSpew  (line 333, @0x00000000020a14f0, libserver.so)
// calls: CSaveRestoreGridPrinter::Spew, CGridStringPrinter::Clear
// callers: CSave::~CSave
// globals: LOG_SAVEIO
void __fastcall CSave::FlushDetailedSpew(CSave *const this, const char *pFlushPrefix)
{
  CSaveRestoreGridPrinter *m_pGridPrinter; // rdi

  m_pGridPrinter = this->m_pGridPrinter;
  if ( m_pGridPrinter != 0 )
  {
    CSaveRestoreGridPrinter::Spew(m_pGridPrinter, LOG_SAVEIO, LoggingVerbosity_t::LV_MAXIMUM, pFlushPrefix);
    CGridStringPrinter::Clear(this->m_pGridPrinter);
  }
}


// CSave::InitGridPrinter  (line 342, @0x00000000020a1660, libserver.so)
// calls: CGridStringPrinter::SetColumnHeader, CGridStringPrinter::SetColumnJustification
// callers: CSave::SetDetailedSpew
// globals: CSave::InitGridPrinter(void)::s_pColumns
void __fastcall CSave::InitGridPrinter(CSave *const this)
{
  CSaveRestoreGridPrinter *m_pGridPrinter; // rdi
  __int64 i; // rbx
  const char *v4; // rdx
  int v5; // esi

  m_pGridPrinter = this->m_pGridPrinter;
  if ( m_pGridPrinter != 0 )
  {
    for ( i = 0; i != 5; ++i )
    {
      v4 = CSave::InitGridPrinter(void)::s_pColumns[i];
      v5 = i;
      CGridStringPrinter::SetColumnHeader(m_pGridPrinter, v5, v4);
      m_pGridPrinter = this->m_pGridPrinter;
    }
    CGridStringPrinter::SetColumnJustification(m_pGridPrinter, 3, 1);
  }
}


// CSave::GetValueString  (line 365, @0x00000000020c58d0, libserver.so)  // inlines: CEntityHandle, CUtlString, Get, GetClassNameAsCStr, GetEntityIdentity, GetEntryIndex, GetInstance, GetResourceName, GetResourceName<260ul>, GetSerialNumber, IndexToIdentity, LookupEntity, ResourceGetName, String, ToCStr, V_isprint, V_strlen, V_strncpy<int>, operator CEntityInstance*
// calls: CFmtStrN<256, false>::CFmtStrN, CUtlString::operator=, CUtlString::operator+=, CUtlString::Get, strlen, _V_strncpy, __stack_chk_fail, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CSave::Log
// strings: "(%g %g %g)", "%d : %d : 'null'", "(%d %d %d %d)", "%s [%d]", "(%g %g %g %g)", "true" (13 total)
// globals: jpt_20C595F, CEntityHandle::gm_pEntityList
CUtlString __fastcall CSave::GetValueString(
        CUtlString *a1,
        const CSave *const this,
        const typedescription_t *pField,
        float *value,
        int count)
{
  fieldtype_t fieldType; // r13d
  int v9; // ebx
  float v10; // edx
  float v12; // xmm0_4
  uint32 v13; // eax
  int v14; // edx
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  int v17; // ecx
  const char *v18; // rdx
  __int64 v19; // rax
  char v20; // cl
  char v21; // dl
  int v22; // ecx
  __int64 v23; // rax
  const char **v24; // rax
  const char *v25; // rsi
  __int64 v26; // rax
  const char **v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  const char **v30; // rax
  float *v31; // rax
  float *v32; // rax
  char v33; // al
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r8
  CEntityHandle h; // [rsp+70h] [rbp-270h]
  CFmtStrN<256,false> pResourceName; // [rsp+80h] [rbp-260h] BYREF
  CFmtStrN<256,false> v38; // [rsp+190h] [rbp-150h] BYREF
  unsigned __int64 v39; // [rsp+2A8h] [rbp-38h]

  a1->m_pString = 0;
  v39 = __readfsqword(0x28u);
  fieldType = pField->fieldType;
  if ( count > 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      switch ( fieldType )
      {
        case fieldtype_t::FIELD_FLOAT:
        case fieldtype_t::FIELD_TIME:
          v12 = value[v9];
          goto LABEL_11;
        case fieldtype_t::FIELD_STRING:
          v18 = "";
          if ( *value != 0 )
            v18 = *value;
          goto LABEL_51;
        case fieldtype_t::FIELD_VECTOR:
        case fieldtype_t::FIELD_POSITION_VECTOR:
        case fieldtype_t::FIELD_QANGLE:
        case fieldtype_t::FIELD_DIRECTION_VECTOR_WORLDSPACE:
        case fieldtype_t::FIELD_QANGLE_WORLDSPACE:
          CFmtStrN<256,false>::CFmtStrN(&v38, "(%g %g %g)", value[3 * v9], value[3 * v9 + 1], value[3 * v9 + 2]);
          CUtlString::operator=(a1, v38.m_szBuf);
          goto LABEL_7;
        case fieldtype_t::FIELD_QUATERNION:
        case fieldtype_t::FIELD_QUATERNION_WORLDSPACE:
          CFmtStrN<256,false>::CFmtStrN(
            &v38,
            "(%g %g %g %g)",
            value[4 * v9],
            value[4 * v9 + 1],
            value[4 * v9 + 2],
            value[4 * v9 + 3]);
          CUtlString::operator=(a1, v38.m_szBuf);
          goto LABEL_7;
        case fieldtype_t::FIELD_INTEGER:
        case fieldtype_t::FIELD_TICK:
          v10 = value[v9];
          goto LABEL_5;
        case fieldtype_t::FIELD_BOOLEAN:
          v18 = "true";
          if ( *(value + v9) == 0 )
            v18 = "false";
          goto LABEL_51;
        case fieldtype_t::FIELD_SHORT:
          CFmtStrN<256,false>::CFmtStrN(&v38, "%d", *(value + v9));
          goto LABEL_6;
        case fieldtype_t::FIELD_CHARACTER:
          if ( v9 != 0 || count <= 1 )
            goto LABEL_71;
          v19 = 0;
          v20 = 0;
          while ( 2 )
          {
            v21 = *(value + v19);
            if ( v21 != 0 )
            {
              if ( (v21 - 32) <= 0x5Eu )
              {
                if ( count > ++v19 )
                {
                  v20 = 1;
                  continue;
                }
LABEL_30:
                if ( value != 0 )
                  v22 = strlen(value);
                else
                  v22 = 0;
                CFmtStrN<256,false>::CFmtStrN(&v38, "%s [%d]", value, v22);
                CUtlString::operator=(a1, v38.m_szBuf);
                v9 = count - 1;
                goto LABEL_7;
              }
            }
            else if ( v20 != 0 )
            {
              goto LABEL_30;
            }
            break;
          }
LABEL_71:
          v33 = *(value + v9);
          LODWORD(v10) = v33;
          if ( (v33 - 32) > 0x5Eu )
LABEL_5:
            CFmtStrN<256,false>::CFmtStrN(&v38, "%d", LODWORD(v10));
          else
            CFmtStrN<256,false>::CFmtStrN(&v38, "%d ('%c')", v33, v33);
          goto LABEL_6;
        case fieldtype_t::FIELD_COLOR32:
          CFmtStrN<256,false>::CFmtStrN(
            &v38,
            "(%d %d %d %d)",
            LOBYTE(value[v9]),
            BYTE1(value[v9]),
            BYTE2(value[v9]),
            HIBYTE(value[v9]));
          goto LABEL_6;
        case fieldtype_t::FIELD_EHANDLE:
          v13 = LODWORD(value[v9]);
          h.m_Index = v13;
          if ( v13 == -1 )
          {
            v17 = 0x1FFFF;
            v14 = 0x7FFF;
            goto LABEL_19;
          }
          if ( v13 == -2 )
          {
            v14 = 32766;
LABEL_18:
            v17 = v13 >> 15;
LABEL_19:
            CFmtStrN<256,false>::CFmtStrN(&v38, "%d : %d : 'null'", v14, v17);
            goto LABEL_6;
          }
          v14 = v13 & 0x7FFF;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v14 >> 9];
          if ( v15 == 0 )
            goto LABEL_18;
          v16 = &v15[v13 & 0x1FF];
          if ( v16 == 0 || v13 != v16->m_EHandle.m_Index || v16->m_pInstance == 0 )
            goto LABEL_18;
          m_pEntity = v16->m_pInstance->m_pEntity;
          m_pAsString = "";
          if ( m_pEntity->m_designerName.u.m_Id != 0 )
            m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
          CFmtStrN<256,false>::CFmtStrN(&v38, "%d : %d : '%s'", v14, h.m_Index >> 15, m_pAsString);
LABEL_6:
          CUtlString::operator=(a1, v38.m_szBuf);
LABEL_7:
          if ( ++v9 == count )
            return a1;
          CUtlString::operator+=(a1, " ");
          if ( count <= v9 )
            return a1;
          break;
        case fieldtype_t::FIELD_VMATRIX:
        case fieldtype_t::FIELD_VMATRIX_WORLDSPACE:
          v32 = &value[16 * v9];
          CFmtStrN<256,false>::CFmtStrN(
            &pResourceName,
            "[ (%f, %f, %f, %f), (%f, %f, %f, %f), (%f, %f, %f, %f), (%f, %f, %f, %f) ]",
            *v32,
            v32[1],
            v32[2],
            v32[3],
            v32[4],
            v32[5],
            v32[6],
            v32[7],
            v32[8],
            v32[9],
            v32[10],
            v32[11],
            v32[12],
            v32[13],
            v32[14],
            v32[15]);
          CFmtStrN<256,false>::CFmtStrN(&v38, "%s", pResourceName.m_szBuf);
          CUtlString::operator=(a1, v38.m_szBuf);
          goto LABEL_7;
        case fieldtype_t::FIELD_MATRIX3X4_WORLDSPACE:
          v31 = &value[12 * v9];
          CFmtStrN<256,false>::CFmtStrN(
            &pResourceName,
            "[ (%g, %g, %g), (%g, %g, %g), (%g, %g, %g), (%g, %g, %g) ]",
            *v31,
            v31[4],
            v31[8],
            v31[2],
            v31[5],
            v31[9],
            v31[2],
            v31[6],
            v31[10],
            v31[3],
            v31[7],
            v31[11]);
          CFmtStrN<256,false>::CFmtStrN(&v38, "%s", pResourceName.m_szBuf);
          CUtlString::operator=(a1, v38.m_szBuf);
          goto LABEL_7;
        case fieldtype_t::FIELD_INTERVAL:
          CFmtStrN<256,false>::CFmtStrN(&v38, "(%g %g)", value[2 * v9], value[2 * v9 + 1]);
          goto LABEL_6;
        case fieldtype_t::FIELD_VECTOR2D:
          CFmtStrN<256,false>::CFmtStrN(&v38, "(%g %g)", value[2 * v9], value[2 * v9 + 1]);
          CUtlString::operator=(a1, v38.m_szBuf);
          goto LABEL_7;
        case fieldtype_t::FIELD_INTEGER64:
          CFmtStrN<256,false>::CFmtStrN(&v38, "%lld", *&value[2 * v9]);
          goto LABEL_6;
        case fieldtype_t::FIELD_VECTOR4D:
          CFmtStrN<256,false>::CFmtStrN(
            &v38,
            "(%g %g %g %g)",
            value[4 * v9],
            value[4 * v9 + 1],
            value[4 * v9 + 2],
            value[4 * v9 + 3]);
          goto LABEL_6;
        case fieldtype_t::FIELD_UINT64:
          CFmtStrN<256,false>::CFmtStrN(&v38, "%llu", *&value[2 * v9]);
          goto LABEL_6;
        case fieldtype_t::FIELD_FLOAT64:
          CFmtStrN<256,false>::CFmtStrN(&v38, "%g", *&value[2 * v9]);
          goto LABEL_6;
        case fieldtype_t::FIELD_UINT:
          CFmtStrN<256,false>::CFmtStrN(&v38, "%u", LODWORD(value[v9]));
          goto LABEL_6;
        case fieldtype_t::FIELD_UTLSTRINGTOKEN:
          CFmtStrN<256,false>::CFmtStrN(&v38, "CUtlStringToken(%u)", LODWORD(value[v9]));
          goto LABEL_6;
        case fieldtype_t::FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR:
        case fieldtype_t::FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR:
          v28 = 14LL * v9;
          goto LABEL_45;
        case fieldtype_t::FIELD_HMATERIAL:
          v23 = *&value[2 * v9];
          if ( v23 == 0 )
            goto LABEL_75;
          v24 = *(v23 + 8);
          if ( v24 == 0 )
            goto LABEL_75;
          v25 = "";
          if ( *v24 != 0 )
            v25 = *v24;
          goto LABEL_61;
        case fieldtype_t::FIELD_HMODEL:
          v26 = *&value[2 * v9];
          if ( v26 == 0 )
            goto LABEL_75;
          v27 = *(v26 + 8);
          if ( v27 == 0 )
            goto LABEL_75;
          v25 = "";
          if ( *v27 != 0 )
            v25 = *v27;
          goto LABEL_61;
        case fieldtype_t::FIELD_NETWORK_QUANTIZED_VECTOR:
          v28 = 12LL * v9;
LABEL_45:
          CFmtStrN<256,false>::CFmtStrN(&v38, "(%g %g %g)", value[v28], value[v28 + 1], value[v28 + 2]);
          goto LABEL_6;
        case fieldtype_t::FIELD_NETWORK_QUANTIZED_FLOAT:
          v12 = value[2 * v9];
LABEL_11:
          CFmtStrN<256,false>::CFmtStrN(&v38, "%g", v12);
          goto LABEL_6;
        case fieldtype_t::FIELD_UTLSTRING:
          v18 = CUtlString::Get(value);
LABEL_51:
          CFmtStrN<256,false>::CFmtStrN(&v38, "%s", v18);
          goto LABEL_6;
        case fieldtype_t::FIELD_HRENDERTEXTURE:
          v29 = *&value[2 * v9];
          if ( v29 != 0 && (v30 = *(v29 + 8)) != 0 )
          {
            v25 = "";
            if ( *v30 != 0 )
              v25 = *v30;
LABEL_61:
            _V_strncpy(&pResourceName, v25, 260);
          }
          else
          {
LABEL_75:
            _V_strncpy(&pResourceName, "", 260);
          }
          CFmtStrN<256,false>::CFmtStrN(&v38, "%s", &pResourceName);
          CUtlString::operator=(a1, v38.m_szBuf);
          goto LABEL_7;
        default:
          goto LABEL_7;
      }
    }
  }
  return a1;
}


// CSave::Log  (line 748, @0x00000000020c6530, libserver.so)  // inlines: CUtlString, ComputeFieldTypeLongestString, GetNameByToken, Length, String, V_strlen, operator char const*, ~CUtlString
// calls: CUtlString::Format, CSave::GetValueString, CUtlString::operator+=, strlen, CUtlString::Get, CGridStringPrinter::NumRows, CGridStringPrinter::SetString, CUtlString::TrimRight, V_pretifynum, CUtlString::FreeMemoryBlock, __cxa_guard_acquire, CFmtStrN<256, false>::CFmtStrN (17 total)
// callers: CSave::WriteField
// strings: "(null)", "%%%d.%ds [%%s::%%s] ", "\t%s"
// globals: `guard variable for'CSave::Log(char const*,typedescription_t const*,void *,int)::nLongestString, `guard variable for'CSave::Log(char const*,typedescription_t const*,void *,int)::sFormatString, g_FieldTypeSimpleNames, tokenset_t<fieldtype_t>::GetNameByToken(fieldtype_t)::unknown, CSave::Log(char const*,typedescription_t const*,void *,int)::nLongestString, CSave::Log(char const*,typedescription_t const*,void *,int)::sFormatString
void __fastcall CSave::Log(
        CSave *const this,
        const char *pName,
        const typedescription_t *pField,
        void *value,
        int count)
{
  const char *fieldName; // rax
  const char *v9; // r8
  const char *v10; // rdx
  fieldtype_t fieldType; // ebx
  tokenset_t<fieldtype_t> *v12; // rax
  FileHandle_t m_hLogFile; // r15
  const char *v14; // rsi
  CSaveRestoreGridPrinter *m_pGridPrinter; // rdi
  int v16; // r15d
  char *v17; // rcx
  tokenset_t<fieldtype_t> *v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  int v21; // r15d
  int v22; // ebx
  tokenset_t<fieldtype_t> *v23; // rax
  const char *name; // rdi
  int v25; // eax
  const char *v26; // rax
  char *s; // [rsp+8h] [rbp-78h]
  fieldtype_t token; // [rsp+10h] [rbp-70h]
  unsigned int nLengtha; // [rsp+1Ch] [rbp-64h]
  void (__fastcall *valueb)(IBaseFileSystem *, const char *, _QWORD, FileHandle_t); // [rsp+20h] [rbp-60h]
  CUtlString *rhs; // [rsp+28h] [rbp-58h]
  CUtlString buf; // [rsp+30h] [rbp-50h] BYREF
  CUtlString val; // [rsp+40h] [rbp-40h] BYREF

  if ( this->m_hLogFile == 0 && !this->m_bDetailedSpew || this->m_bPreventDetailedSpew )
    return;
  if ( `guard variable for'CSave::Log(char const*,typedescription_t const*,void *,int)::nLongestString == 0
    && __cxa_guard_acquire(&`guard variable for'CSave::Log(char const*,typedescription_t const*,void *,int)::nLongestString) != 0 )
  {
    v21 = 0;
    v22 = 0;
    rhs = g_FieldTypeSimpleNames[0].name;
    token = g_FieldTypeSimpleNames[0].token;
    s = tokenset_t<fieldtype_t>::GetNameByToken(fieldtype_t)const::unknown;
    while ( 1 )
    {
      if ( rhs != 0 )
      {
        if ( v22 == token )
        {
          name = rhs;
LABEL_40:
          v25 = strlen(name);
          goto LABEL_41;
        }
        v23 = g_FieldTypeSimpleNames;
        while ( 1 )
        {
          ++v23;
          name = v23->name;
          if ( v23->name == 0 )
            break;
          if ( v22 == v23->token )
            goto LABEL_40;
        }
      }
      name = s;
      v25 = 0;
      if ( s != 0 )
        goto LABEL_40;
LABEL_41:
      if ( v21 < v25 )
        v21 = v25;
      if ( ++v22 == 56 )
      {
        CSave::Log(char const*,typedescription_t const*,void *,int)::nLongestString = v21;
        __cxa_guard_release(&`guard variable for'CSave::Log(char const*,typedescription_t const*,void *,int)::nLongestString);
        break;
      }
    }
  }
  if ( `guard variable for'CSave::Log(char const*,typedescription_t const*,void *,int)::sFormatString == 0
    && __cxa_guard_acquire(&`guard variable for'CSave::Log(char const*,typedescription_t const*,void *,int)::sFormatString) != 0 )
  {
    CFmtStrN<256,false>::CFmtStrN(
      &CSave::Log(char const*,typedescription_t const*,void *,int)::sFormatString,
      "%%%d.%ds [%%s::%%s] ",
      CSave::Log(char const*,typedescription_t const*,void *,int)::nLongestString,
      CSave::Log(char const*,typedescription_t const*,void *,int)::nLongestString);
    __cxa_guard_release(&`guard variable for'CSave::Log(char const*,typedescription_t const*,void *,int)::sFormatString);
  }
  fieldName = pField->fieldName;
  v9 = "(null)";
  buf.m_pString = 0;
  v10 = g_FieldTypeSimpleNames[0].name;
  fieldType = pField->fieldType;
  if ( fieldName != 0 )
    v9 = fieldName;
  if ( g_FieldTypeSimpleNames[0].name != 0 )
  {
    if ( fieldType == g_FieldTypeSimpleNames[0].token )
      goto LABEL_14;
    v12 = g_FieldTypeSimpleNames;
    while ( 1 )
    {
      ++v12;
      v10 = v12->name;
      if ( v12->name == 0 )
        break;
      if ( fieldType == v12->token )
        goto LABEL_14;
    }
  }
  v10 = tokenset_t<fieldtype_t>::GetNameByToken(fieldtype_t)const::unknown;
LABEL_14:
  CUtlString::Format(
    &buf,
    CSave::Log(char const*,typedescription_t const*,void *,int)::sFormatString.m_szBuf,
    v10,
    pName,
    v9);
  CSave::GetValueString(&val, this, pField, value, count);
  CUtlString::operator+=(&buf, &val);
  CUtlString::operator+=(&buf, "\n");
  m_hLogFile = this->m_hLogFile;
  if ( m_hLogFile != 0 )
  {
    if ( buf.m_pString != 0 )
      nLengtha = strlen(buf.m_pString) + 1;
    else
      nLengtha = 1;
    valueb = *(g_pFullFileSystem->_vptr_IBaseFileSystem + 1);
    v14 = CUtlString::Get(&buf);
    valueb(&g_pFullFileSystem->IBaseFileSystem, v14, nLengtha, m_hLogFile);
  }
  m_pGridPrinter = this->m_pGridPrinter;
  if ( m_pGridPrinter == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    {
      v26 = CUtlString::Get(&buf);
      LoggingSystem_Log(LOG_SAVERESTORE, 0, "\t%s", v26);
    }
    goto LABEL_26;
  }
  v16 = CGridStringPrinter::NumRows(m_pGridPrinter);
  CGridStringPrinter::SetString(this->m_pGridPrinter, v16, 0, pName);
  CGridStringPrinter::SetString(this->m_pGridPrinter, v16, 1, pField->fieldName);
  v17 = g_FieldTypeSimpleNames[0].name;
  if ( g_FieldTypeSimpleNames[0].name == 0 )
    goto LABEL_24;
  if ( fieldType != g_FieldTypeSimpleNames[0].token )
  {
    v18 = g_FieldTypeSimpleNames;
    while ( 1 )
    {
      ++v18;
      v17 = v18->name;
      if ( v18->name == 0 )
        break;
      if ( fieldType == v18->token )
        goto LABEL_25;
    }
LABEL_24:
    v17 = tokenset_t<fieldtype_t>::GetNameByToken(fieldtype_t)const::unknown;
  }
LABEL_25:
  CGridStringPrinter::SetString(this->m_pGridPrinter, v16, 2, v17);
  CUtlString::TrimRight(&val, " \n");
  v19 = CUtlString::Get(&val);
  CGridStringPrinter::SetString(this->m_pGridPrinter, v16, 3, v19);
  v20 = V_pretifynum(this->m_pData->size);
  CGridStringPrinter::SetString(this->m_pGridPrinter, v16, 4, v20);
LABEL_26:
  if ( val.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&val);
  if ( buf.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&buf);
}


// CSave::IsAsync  (line 796, @0x000000000209bc30, libserver.so)
bool __fastcall CSave::IsAsync(CSave *const this)
{
  return this->m_bAsync;
}


// CSave::GetWritePos  (line 803, @0x000000000209bc40, libserver.so)
int __fastcall CSave::GetWritePos(const CSave *const this)
{
  return this->m_pData->size;
}


// CSave::SetWritePos  (line 810, @0x000000000209bc50, libserver.so)  // inlines: Seek
void __fastcall CSave::SetWritePos(CSave *const this, int pos)
{
  CSaveRestoreSegment *m_pData; // rax

  m_pData = this->m_pData;
  if ( pos >= 0 && pos < m_pData->bufferSize )
  {
    m_pData->size = pos;
    m_pData->pCurrentData = &m_pData->pBaseData[pos];
  }
}


// CSave::WriteShort  (line 817, @0x00000000020a1a00, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteShort(CSave *const this, const __int16 *value, int count)
{
  CSave::BufferData(this, value, 2 * count);
}


// CSave::WriteInt  (line 824, @0x00000000020a1a10, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteInt(CSave *const this, const int *value, int count)
{
  CSave::BufferData(this, value, 4 * count);
}


// CSave::WriteUInt32  (line 829, @0x00000000020a1a20, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteUInt32(CSave *const this, const uint32 *value, int count)
{
  CSave::BufferData(this, value, 4 * count);
}


// CSave::WriteInt64  (line 834, @0x00000000020a1a30, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteInt64(CSave *const this, const int64 *value, int count)
{
  CSave::BufferData(this, value, 8 * count);
}


// CSave::WriteUInt64  (line 839, @0x00000000020a1a40, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteUInt64(CSave *const this, const uint64 *value, int count)
{
  CSave::BufferData(this, value, 8 * count);
}


// CSave::WriteBool  (line 846, @0x00000000020a1a50, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteBool(CSave *const this, const bool *value, int count)
{
  CSave::BufferData(this, value, count);
}


// CSave::WriteFloat  (line 854, @0x00000000020a1a60, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteFloat(CSave *const this, const float *value, int count)
{
  CSave::BufferData(this, value, 4 * count);
}


// CSave::WriteFloat64  (line 859, @0x00000000020a1a70, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteFloat64(CSave *const this, const float64 *value, int count)
{
  CSave::BufferData(this, value, 8 * count);
}


// CSave::WriteData  (line 867, @0x00000000020a1a80, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteData(CSave *const this, const char *pdata, int size)
{
  CSave::BufferData(this, pdata, size);
}


// CSave::WriteString  (line 874, @0x00000000020a1a90, libserver.so)  // inlines: V_strlen
// calls: strlen, CSave::BufferData
void __fastcall CSave::WriteString(CSave *const this, const char *pstring)
{
  int v4; // eax

  if ( pstring != 0 )
  {
    v4 = strlen(pstring);
    CSave::BufferData(this, pstring, v4 + 1);
  }
  else
  {
    CSave::BufferData(this, 0, 1);
  }
}


// CSave::WriteString  (line 881, @0x00000000020a1ae0, libserver.so)  // inlines: String, ToCStr, V_strlen
// calls: strlen, CSave::BufferData
void __fastcall CSave::WriteString(CSave *const this, const string_t *stringId, int count)
{
  const string_t *v3; // r13
  const string_t *v5; // rbx
  const char *v6; // rsi
  int v7; // edx
  int v8; // eax
  const char *m_Id; // [rsp-30h] [rbp-30h]

  if ( count > 0 )
  {
    v3 = &stringId[(count - 1) + 1];
    v5 = stringId;
    do
    {
      v6 = "";
      v7 = 1;
      if ( v5->u.m_Id != 0 )
      {
        m_Id = v5->u.m_Id;
        v8 = strlen(v5->u.m_pAsString);
        v6 = m_Id;
        v7 = v8 + 1;
      }
      ++v5;
      CSave::BufferData(this, v6, v7);
    }
    while ( v5 != v3 );
  }
}


// CSave::WriteString  (line 890, @0x00000000020a1b50, libserver.so)  // inlines: String, V_strlen
// calls: strlen, CSave::BufferData, CUtlString::Get
void __fastcall CSave::WriteString(CSave *const this, const CUtlString *pUtlString, int count)
{
  const CUtlString *v3; // r14
  const CUtlString *v5; // rbx
  int v6; // edx
  const char *v7; // rax
  const char *v8; // r12

  if ( count > 0 )
  {
    v3 = &pUtlString[(count - 1) + 1];
    v5 = pUtlString;
    do
    {
      v7 = CUtlString::Get(v5);
      v8 = v7;
      if ( v7 != 0 )
        v6 = strlen(v7) + 1;
      else
        v6 = 1;
      ++v5;
      CSave::BufferData(this, v8, v6);
    }
    while ( v5 != v3 );
  }
}


// CSave::WriteVector  (line 902, @0x00000000020a1bc0, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteVector(CSave *const this, const Vector *const value)
{
  CSave::BufferData(this, value, 12);
}


// CSave::WriteVector  (line 909, @0x00000000020a1bd0, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteVector(CSave *const this, const Vector *value, int count)
{
  CSave::BufferData(this, value, 12 * count);
}


// CSave::WriteVector2D  (line 914, @0x00000000020a1be0, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteVector2D(CSave *const this, const Vector2D *const value)
{
  CSave::BufferData(this, value, 8);
}


// CSave::WriteVector2D  (line 921, @0x00000000020a1bf0, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteVector2D(CSave *const this, const Vector2D *value, int count)
{
  CSave::BufferData(this, value, 8 * count);
}


// CSave::WriteQuaternion  (line 926, @0x00000000020a1c00, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteQuaternion(CSave *const this, const Quaternion *const value)
{
  CSave::BufferData(this, value, 16);
}


// CSave::WriteQuaternion  (line 933, @0x00000000020a1c10, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteQuaternion(CSave *const this, const Quaternion *value, int count)
{
  CSave::BufferData(this, value, 16 * count);
}


// CSave::WriteData  (line 941, @0x00000000020a24f0, libserver.so)  // inlines: BufferField
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteData(CSave *const this, const char *pname, int size, const char *pdata)
{
  CSave::WriteHeader(this, pname, size);
  CSave::BufferData(this, pdata, size);
}


// CSave::WriteShort  (line 948, @0x00000000020a2530, libserver.so)  // inlines: BufferField
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteShort(CSave *const this, const char *pname, const __int16 *data, int count)
{
  int v5; // r12d

  v5 = 2 * count;
  CSave::WriteHeader(this, pname, 2 * count);
  CSave::BufferData(this, data, v5);
}


// CSave::WriteInt  (line 955, @0x00000000020a2570, libserver.so)  // inlines: BufferField
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteInt(CSave *const this, const char *pname, const int *data, int count)
{
  int v5; // r12d

  v5 = 4 * count;
  CSave::WriteHeader(this, pname, 4 * count);
  CSave::BufferData(this, data, v5);
}


// CSave::WriteUInt32  (line 960, @0x00000000020a25b0, libserver.so)  // inlines: BufferField
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteUInt32(CSave *const this, const char *pname, const uint32 *data, int count)
{
  int v5; // r12d

  v5 = 4 * count;
  CSave::WriteHeader(this, pname, 4 * count);
  CSave::BufferData(this, data, v5);
}


// CSave::WriteInt64  (line 965, @0x00000000020a25f0, libserver.so)  // inlines: BufferField
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteInt64(CSave *const this, const char *pname, const int64 *data, int count)
{
  int v5; // r12d

  v5 = 8 * count;
  CSave::WriteHeader(this, pname, 8 * count);
  CSave::BufferData(this, data, v5);
}


// CSave::WriteUInt64  (line 970, @0x00000000020a2630, libserver.so)  // inlines: BufferField
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteUInt64(CSave *const this, const char *pname, const uint64 *data, int count)
{
  int v5; // r12d

  v5 = 8 * count;
  CSave::WriteHeader(this, pname, 8 * count);
  CSave::BufferData(this, data, v5);
}


// CSave::WriteBool  (line 977, @0x00000000020a2670, libserver.so)  // inlines: BufferField
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteBool(CSave *const this, const char *pname, const bool *data, int count)
{
  CSave::WriteHeader(this, pname, count);
  CSave::BufferData(this, data, count);
}


// CSave::WriteFloat  (line 985, @0x00000000020a26b0, libserver.so)  // inlines: BufferField
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteFloat(CSave *const this, const char *pname, const float *data, int count)
{
  int v5; // r12d

  v5 = 4 * count;
  CSave::WriteHeader(this, pname, 4 * count);
  CSave::BufferData(this, data, v5);
}


// CSave::WriteFloat64  (line 990, @0x00000000020a26f0, libserver.so)  // inlines: BufferField
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteFloat64(CSave *const this, const char *pname, const float64 *data, int count)
{
  int v5; // r12d

  v5 = 8 * count;
  CSave::WriteHeader(this, pname, 8 * count);
  CSave::BufferData(this, data, v5);
}


// CSave::WriteString  (line 997, @0x00000000020a2730, libserver.so)  // inlines: BufferField, V_strlen
// calls: strlen, CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteString(CSave *const this, const char *pname, const char *pdata)
{
  int v6; // r13d

  if ( pdata != 0 )
    v6 = strlen(pdata) + 1;
  else
    v6 = 1;
  CSave::WriteHeader(this, pname, v6);
  CSave::BufferData(this, pdata, v6);
}


// CSave::WriteString  (line 1004, @0x00000000020a1f30, libserver.so)  // inlines: String, ToCStr, V_strlen
// calls: strlen, CSave::WriteHeader
void __fastcall CSave::WriteString(CSave *const this, const char *pname, const string_t *stringId, int count)
{
  const string_t *v6; // rbx
  int v7; // r15d
  const string_t *v8; // r14
  int v9; // eax

  if ( count <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = stringId;
    v7 = 0;
    v8 = &stringId[(count - 1) + 1];
    do
    {
      v9 = 1;
      if ( v6->u.m_Id != 0 )
        v9 = strlen(v6->u.m_pAsString) + 1;
      ++v6;
      v7 += v9;
    }
    while ( v6 != v8 );
  }
  CSave::WriteHeader(this, pname, v7);
  (*(this->_vptr_ISave + 20))(this, stringId, count);
}


// CSave::WriteString  (line 1016, @0x00000000020a1fd0, libserver.so)  // inlines: String, V_strlen
// calls: strlen, CUtlString::Get, CSave::WriteHeader
void __fastcall CSave::WriteString(CSave *const this, const char *pname, const CUtlString *pUtlString, int count)
{
  const CUtlString *v6; // rbx
  int v7; // r12d
  const CUtlString *v8; // r13
  const char *v9; // rax

  if ( count <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = pUtlString;
    v7 = 0;
    v8 = &pUtlString[(count - 1) + 1];
    do
    {
      while ( 1 )
      {
        v9 = CUtlString::Get(v6);
        if ( v9 == 0 )
          break;
        ++v6;
        v7 += strlen(v9) + 1;
        if ( v6 == v8 )
          goto LABEL_6;
      }
      ++v6;
      ++v7;
    }
    while ( v6 != v8 );
  }
LABEL_6:
  CSave::WriteHeader(this, pname, v7);
  (*(this->_vptr_ISave + 21))(this, pUtlString, count);
}


// CSave::WriteVector  (line 1033, @0x000000000209bc70, libserver.so)
void __fastcall CSave::WriteVector(CSave *const this, const char *pname, const Vector *const value)
{
  (*(this->_vptr_ISave + 42))(this, pname, value, 1);
}


// CSave::WriteVector  (line 1040, @0x00000000020a23b0, libserver.so)
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteVector(CSave *const this, const char *pname, const Vector *value, int count)
{
  int v5; // r12d

  v5 = 12 * count;
  CSave::WriteHeader(this, pname, 12 * count);
  CSave::BufferData(this, value, v5);
}


// CSave::WriteVector2D  (line 1046, @0x000000000209bc90, libserver.so)
void __fastcall CSave::WriteVector2D(CSave *const this, const char *pname, const Vector2D *const value)
{
  (*(this->_vptr_ISave + 44))(this, pname, value, 1);
}


// CSave::WriteVector2D  (line 1053, @0x00000000020a23f0, libserver.so)
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteVector2D(CSave *const this, const char *pname, const Vector2D *value, int count)
{
  int v5; // r12d

  v5 = 8 * count;
  CSave::WriteHeader(this, pname, 8 * count);
  CSave::BufferData(this, value, v5);
}


// CSave::WriteQuaternion  (line 1060, @0x000000000209bcb0, libserver.so)
void __fastcall CSave::WriteQuaternion(CSave *const this, const char *pname, const Quaternion *const value)
{
  (*(this->_vptr_ISave + 46))(this, pname, value, 1);
}


// CSave::WriteQuaternion  (line 1067, @0x00000000020a2430, libserver.so)
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteQuaternion(CSave *const this, const char *pname, const Quaternion *value, int count)
{
  int v6; // ebx

  v6 = 16 * count;
  CSave::WriteHeader(this, pname, 16 * count);
  CSave::BufferData(this, value, v6);
}


// CSave::WriteVMatrix  (line 1076, @0x00000000020a1c20, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteVMatrix(CSave *const this, const VMatrix *value, int count)
{
  CSave::BufferData(this, value, count << 6);
}


// CSave::WriteVMatrix  (line 1083, @0x00000000020a2470, libserver.so)
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::WriteVMatrix(CSave *const this, const char *pname, const VMatrix *value, int count)
{
  int v6; // ebx

  v6 = count << 6;
  CSave::WriteHeader(this, pname, count << 6);
  CSave::BufferData(this, value, v6);
}


// CSave::WriteVMatrixWorldspace  (line 1091, @0x00000000020a1c30, libserver.so)  // inlines: PostTranslate, VMatrixOffset, operator-
// calls: CGameSaveRestoreInfo::GetLandmark, VMatrix::operator=, CSave::BufferData
void __fastcall CSave::WriteVMatrixWorldspace(CSave *const this, const VMatrix *value, int count)
{
  const VMatrix *v3; // r14
  const VMatrix *v5; // rbx
  const Vector *Landmark; // rax
  const VMatrix *v7; // rsi
  VMatrix tmp; // [rsp+0h] [rbp-68h] BYREF
  Vector v9; // 0:^4.12

  if ( count > 0 )
  {
    v3 = &value[(count - 1) + 1];
    v5 = value;
    do
    {
      Landmark = CGameSaveRestoreInfo::GetLandmark(this->m_pGameInfo);
      v7 = v5++;
      v9 = *Landmark;
      VMatrix::operator=(&tmp, v7);
      tmp.m[0][3] = tmp.m[0][3] - v9.x;
      tmp.m[1][3] = tmp.m[1][3] - v9.y;
      tmp.m[2][3] = tmp.m[2][3] - v9.z;
      CSave::BufferData(this, &tmp, 64);
    }
    while ( v5 != v3 );
  }
}


// CSave::WriteVMatrixWorldspace  (line 1103, @0x00000000020a2080, libserver.so)
// calls: CSave::WriteHeader
void __fastcall CSave::WriteVMatrixWorldspace(CSave *const this, const char *pname, const VMatrix *value, int count)
{
  CSave::WriteHeader(this, pname, count << 6);
  (*(this->_vptr_ISave + 62))(this, value, count);
}


// CSave::WriteMatrix3x4Worldspace  (line 1109, @0x00000000020a1cf0, libserver.so)  // inlines: Matrix3x4Offset, SetOrigin, operator+=, operator-
// calls: CGameSaveRestoreInfo::GetLandmark, MatrixCopy, CSave::BufferData
void __fastcall CSave::WriteMatrix3x4Worldspace(CSave *const this, const matrix3x4_t *value, int count)
{
  const matrix3x4_t *v6; // rbx
  const matrix3x4_t *v7; // rdi
  float v8; // xmm0_4
  float v9; // xmm2_4
  const Vector v10; // [rsp+4h] [rbp-6Ch]
  matrix3x4_t tmp; // [rsp+10h] [rbp-60h] BYREF

  v10 = *CGameSaveRestoreInfo::GetLandmark(this->m_pGameInfo);
  if ( count > 0 )
  {
    v6 = value;
    do
    {
      v7 = v6++;
      MatrixCopy(v7, &tmp);
      v8 = v6[-1].m_flMatVal[2][3] - v10.z;
      v9 = v6[-1].m_flMatVal[0][3] - v10.x;
      tmp.m_flMatVal[1][3] = v6[-1].m_flMatVal[1][3] - v10.y;
      tmp.m_flMatVal[2][3] = v8;
      tmp.m_flMatVal[0][3] = v9;
      CSave::BufferData(this, value, 48);
    }
    while ( v6 != &value[(count - 1) + 1] );
  }
}


// CSave::WriteMatrix3x4Worldspace  (line 1122, @0x00000000020a20c0, libserver.so)
// calls: CSave::WriteHeader
void __fastcall CSave::WriteMatrix3x4Worldspace(
        CSave *const this,
        const char *pname,
        const matrix3x4_t *value,
        int count)
{
  CSave::WriteHeader(this, pname, 48 * count);
  (*(this->_vptr_ISave + 63))(this, value, count);
}


// CSave::WriteNetworkOriginCellQuantizedVector  (line 1128, @0x00000000020d9dc0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CUtlMemory, CUtlVector, CUtlVectorBase, Element, GrowMemory, Purge, RemoveAll, operator!=, operator-=, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGameSaveRestoreInfo::GetLandmark, CSave::BufferData, CUtlMemory<Vector, int>::Grow, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CSave::WriteNetworkOriginCellQuantizedVector(
        CSave *const this,
        bool bPositionVector,
        const CNetworkOriginCellCoordQuantizedVector *value,
        int count)
{
  __int64 v6; // r12
  int m_nAllocationCount; // edx
  const CNetworkOriginCellCoordQuantizedVector *v8; // r14
  const Vector *Landmark; // rax
  int m_Size; // eax
  float x; // xmm0_4
  Vector *v12; // r12
  float y; // xmm1_4
  float z; // xmm2_4
  Vector *m_pMemory; // rsi
  CUtlVector<Vector,CUtlMemory<Vector,int> > dummy; // [rsp+20h] [rbp-50h] BYREF

  dummy.m_Size = 0;
  dummy.m_Memory.m_pMemory = 0;
  dummy.m_Memory.m_nAllocationCount = 0;
  dummy.m_Memory.m_nGrowSize = 0;
  if ( count > 0 )
  {
    v6 = 0;
    m_nAllocationCount = 0;
    v8 = &value[(count - 1) + 1];
    while ( 1 )
    {
      m_Size = v6;
      if ( v6 == m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&dummy.m_Memory, 1);
        m_Size = dummy.m_Size;
      }
      x = value->m_Value.x;
      dummy.m_Size = m_Size + 1;
      v12 = &dummy.m_Memory.m_pMemory[v6];
      v12->x = value->m_Value.x;
      y = value->m_Value.y;
      v12->y = y;
      z = value->m_Value.z;
      v12->z = z;
      if ( !bPositionVector )
        goto LABEL_4;
      if ( x != vec3_invalid.x || y != vec3_invalid.y || z != vec3_invalid.z )
        break;
      if ( ++value == v8 )
      {
LABEL_13:
        m_pMemory = dummy.m_Memory.m_pMemory;
        goto LABEL_14;
      }
LABEL_5:
      v6 = dummy.m_Size;
      m_nAllocationCount = dummy.m_Memory.m_nAllocationCount;
    }
    Landmark = CGameSaveRestoreInfo::GetLandmark(this->m_pGameInfo);
    v12->x = v12->x - Landmark->x;
    v12->y = v12->y - Landmark->y;
    v12->z = v12->z - Landmark->z;
LABEL_4:
    if ( ++value == v8 )
      goto LABEL_13;
    goto LABEL_5;
  }
  m_pMemory = 0;
LABEL_14:
  CSave::BufferData(this, m_pMemory, 12 * count);
  if ( (dummy.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&dummy.m_Memory);
    if ( (dummy.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&dummy.m_Memory);
  }
}


// CSave::WriteNetworkOriginCellQuantizedVector  (line 1149, @0x00000000020a2100, libserver.so)
// calls: CSave::WriteHeader
void __fastcall CSave::WriteNetworkOriginCellQuantizedVector(
        CSave *const this,
        bool bPositionVector,
        const char *pname,
        const CNetworkOriginCellCoordQuantizedVector *value,
        int count)
{
  CSave::WriteHeader(this, pname, 12 * count);
  (*(this->_vptr_ISave + 65))(this, bPositionVector, value, count);
}


// CSave::WriteNetworkQuantizedVector  (line 1155, @0x00000000020a1db0, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteNetworkQuantizedVector(
        CSave *const this,
        const CNetworkOriginQuantizedVector *value,
        int count)
{
  CSave::BufferData(this, value, 48 * count);
}


// CSave::WriteNetworkQuantizedVector  (line 1160, @0x00000000020a2150, libserver.so)
// calls: CSave::WriteHeader
void __fastcall CSave::WriteNetworkQuantizedVector(
        CSave *const this,
        const char *pname,
        const CNetworkOriginQuantizedVector *value,
        int count)
{
  CSave::WriteHeader(this, pname, 48 * count);
  (*(this->_vptr_ISave + 67))(this, value, count);
}


// CSave::WriteNetworkQuantizedFloat  (line 1166, @0x00000000020a1dc0, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteNetworkQuantizedFloat(CSave *const this, const CNetworkedQuantizedFloat *value, int count)
{
  CSave::BufferData(this, value, 8 * count);
}


// CSave::WriteNetworkQuantizedFloat  (line 1172, @0x00000000020a2190, libserver.so)
// calls: CSave::WriteHeader
void __fastcall CSave::WriteNetworkQuantizedFloat(
        CSave *const this,
        const char *pname,
        const CNetworkedQuantizedFloat *value,
        int count)
{
  CSave::WriteHeader(this, pname, 8 * count);
  (*(this->_vptr_ISave + 71))(this, value, count);
}


// CSave::WriteInterval  (line 1178, @0x00000000020a21e0, libserver.so)
// calls: CSave::WriteHeader
void __fastcall CSave::WriteInterval(CSave *const this, const char *pname, const interval_t *value, int count)
{
  CSave::WriteHeader(this, pname, 8 * count);
  (*(this->_vptr_ISave + 69))(this, value, count);
}


// CSave::WriteInterval  (line 1184, @0x00000000020a1dd0, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::WriteInterval(CSave *const this, const interval_t *value, int count)
{
  CSave::BufferData(this, value, 8 * count);
}


// CSave::ShouldSaveField  (line 1191, @0x00000000020a16d0, libserver.so)  // inlines: DataEmpty
// calls: Warning
// callers: CSave::WriteFields
// strings: "WARNING! Field %s is using the wrong FIELD_ type!\nFix this or you'll see a crash.\n"
// globals: gSizes
bool __fastcall CSave::ShouldSaveField(CSave *const this, const void *pData, typedescription_t *pField)
{
  __int16 flags; // ax
  __int64 fieldType; // rdx
  _DWORD *v6; // rbx
  int v7; // eax
  _BYTE *v8; // rdx
  _BYTE *v9; // rax
  int fieldSize; // eax
  __int64 v12; // rax
  __int64 fieldOffset; // rax
  ISaveRestoreOps *pSaveRestoreOps; // rdi
  __int16 v15; // ax
  datamap_t *td; // rdx
  typedescription_t *dataDesc; // r15
  unsigned __int64 v19; // r14
  int nFieldCount; // [rsp+Ch] [rbp-54h]
  SaveRestoreFieldInfo_t fieldInfo; // [rsp+10h] [rbp-50h] BYREF

  flags = pField->flags;
  if ( (flags & 2) == 0 )
    return 0;
  fieldType = pField->fieldType;
  if ( fieldType == 0 )
    return 0;
  v6 = pData;
  if ( fieldType != 11 )
  {
    if ( fieldType == 13 )
    {
      fieldSize = pField->fieldSize;
      if ( pField->fieldSizeInBytes != 4 * fieldSize )
      {
        Warning(
          "WARNING! Field %s is using the wrong FIELD_ type!\nFix this or you'll see a crash.\n",
          pField->fieldName);
        fieldSize = pField->fieldSize;
      }
      if ( fieldSize == 0 )
        return 0;
      if ( *v6 == -1 )
      {
        v12 = &v6[fieldSize - 1 + 1];
        while ( ++v6 != v12 )
        {
          if ( *v6 != -1 )
            return 1;
        }
        return 0;
      }
    }
    else if ( fieldType == 10 )
    {
      v15 = flags & 0x40;
      if ( v15 != 0 )
      {
        if ( pField->fieldSize != 1 )
          return 0;
        td = pField->td;
        if ( td == 0 || *pData == 0 )
          return 0;
      }
      else
      {
        td = pField->td;
        if ( td == 0 )
          return 0;
      }
      if ( td->baseMap == 0 )
      {
        if ( v15 != 0 )
          v6 = *pData;
        nFieldCount = pField->fieldSize - 1;
        if ( pField->fieldSize != 0 )
        {
          while ( 1 )
          {
            dataDesc = td->dataDesc;
            v19 = &td->dataDesc[td->dataNumFields];
            if ( td->dataDesc < v19 )
              break;
LABEL_41:
            --nFieldCount;
            v6 = (v6 + pField->fieldSizeInBytes);
            if ( nFieldCount == -1 )
              return 0;
            td = pField->td;
          }
          while ( !CSave::ShouldSaveField(this, v6 + dataDesc->fieldOffset, dataDesc) )
          {
            if ( v19 <= ++dataDesc )
              goto LABEL_41;
          }
          return 1;
        }
        return 0;
      }
    }
    else
    {
      v7 = gSizes[fieldType] * pField->fieldSize;
      if ( pField->fieldSizeInBytes != v7 )
      {
        Warning(
          "WARNING! Field %s is using the wrong FIELD_ type!\nFix this or you'll see a crash.\n",
          pField->fieldName);
        v7 = gSizes[pField->fieldType] * pField->fieldSize;
      }
      if ( v7 != 4 )
      {
        v8 = v6 + v7;
        if ( v6 < v8 )
        {
          v9 = v6 + 1;
          if ( *v6 != 0 )
            return 1;
          while ( v9 != v8 )
          {
            if ( *v9++ != 0 )
              return 1;
          }
        }
        return 0;
      }
      if ( *v6 == 0 )
        return 0;
    }
    return 1;
  }
  fieldOffset = pField->fieldOffset;
  fieldInfo.pField = pData;
  pSaveRestoreOps = pField->pSaveRestoreOps;
  fieldInfo.pTypeDesc = pField;
  fieldInfo.pOwner = pData - fieldOffset;
  return (*(pSaveRestoreOps->_vptr_ISaveRestoreOps + 2))(pSaveRestoreOps, &fieldInfo) == 0;
}


// CSave::WriteField  (line 1288, @0x00000000020c6940, libserver.so)
// calls: CSave::Log, CSave::WriteSingleField
// callers: CSave::WriteFields
bool __fastcall CSave::WriteField(
        CSave *const this,
        const char *pname,
        void *pData,
        datamap_t *pRootMap,
        typedescription_t *pField)
{
  CSave::Log(this, pname, pField, pData, pField->fieldSize);
  return CSave::WriteSingleField(this, pname, pData, pRootMap, pField);
}


// CSave::WriteFields  (line 1296, @0x00000000020c69a0, libserver.so)  // inlines: MoveCurPos, Rewind
// calls: CSave::ShouldSaveField, CSave::WriteField
// callers: CEntity2SaveRestore::SaveGame_Finalize
int __fastcall CSave::WriteFields(
        CSave *const this,
        const char *pname,
        const void *pBaseData,
        datamap_t *pRootMap,
        typedescription_t *pFields,
        int fieldCount)
{
  CSaveRestoreSegment *m_pData; // rax
  typedescription_t *v11; // r15
  typedescription_t *v12; // r14
  char *v13; // rbx
  CSaveRestoreSegment *v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // ebx
  CSaveRestoreSegment *v18; // rax
  int v19; // edx
  int v20; // ebx
  int size; // [rsp+Ch] [rbp-54h]
  int count[13]; // [rsp+2Ch] [rbp-34h] BYREF

  m_pData = this->m_pData;
  count[0] = -1;
  size = m_pData->size;
  (*(this->_vptr_ISave + 30))(this, pname, count, 1);
  count[0] = 0;
  if ( fieldCount > 0 )
  {
    v11 = pFields;
    v12 = &pFields[(fieldCount - 1) + 1];
    do
    {
      while ( 1 )
      {
        v13 = pBaseData + v11->fieldOffset;
        if ( CSave::ShouldSaveField(this, v13, v11) )
          break;
        if ( ++v11 == v12 )
          goto LABEL_7;
      }
      if ( !CSave::WriteField(this, pname, v13, pRootMap, v11) )
        break;
      ++count[0];
      ++v11;
    }
    while ( v11 != v12 );
  }
LABEL_7:
  v14 = this->m_pData;
  v15 = v14->size;
  v16 = v15;
  v17 = v15 - size;
  if ( v15 - size <= v15 )
    v16 = v15 - size;
  v14->size = v15 - v16;
  v14->pCurrentData -= v16;
  (*(this->_vptr_ISave + 30))(this, pname, count, 1);
  v18 = this->m_pData;
  v19 = v18->size;
  v20 = size - v19 + v17;
  v18->pCurrentData += v20;
  v18->size = v19 + v20;
  return 1;
}


// CSave::DoWriteAll  (line 1332, @0x00000000020a1930, libserver.so)
// callers: CSave::WriteAll
int __fastcall CSave::DoWriteAll(CSave *const this, const void *pLeafObject, datamap_t *pLeafMap, datamap_t *pCurMap)
{
  datamap_t *baseMap; // rcx
  int result; // eax

  baseMap = pCurMap->baseMap;
  if ( baseMap == 0 )
    return (*(this->_vptr_ISave + 6))(
             this,
             pCurMap->dataClassName,
             pLeafObject,
             pLeafMap,
             pCurMap->dataDesc,
             pCurMap->dataNumFields);
  result = CSave::DoWriteAll(this, pLeafObject, pLeafMap, baseMap);
  if ( result != 0 )
    return (*(this->_vptr_ISave + 6))(
             this,
             pCurMap->dataClassName,
             pLeafObject,
             pLeafMap,
             pCurMap->dataDesc,
             pCurMap->dataNumFields);
  return result;
}


// CSave::StartBlock  (line 1347, @0x00000000020d6cf0, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, operator[]
// calls: CSave::WriteHeader, CUtlMemory<int, int>::Grow
void __fastcall CSave::StartBlock(CSave *const this, const char *pszBlockName)
{
  int v3; // eax
  __int64 m_Size; // r12
  int v5; // edx
  int *v6; // rdx
  int v7; // [rsp+Ch] [rbp-14h]

  CSave::WriteHeader(this, pszBlockName, 0);
  v3 = (*(this->_vptr_ISave + 3))(this);
  m_Size = this->m_BlockStartStack.m_Size;
  v5 = this->m_BlockStartStack.m_Size;
  if ( m_Size == this->m_BlockStartStack.m_Memory.m_nAllocationCount )
  {
    v7 = v3;
    CUtlMemory<int,int>::Grow(&this->m_BlockStartStack.m_Memory, 1);
    v5 = this->m_BlockStartStack.m_Size;
    v3 = v7;
  }
  this->m_BlockStartStack.m_Size = v5 + 1;
  v6 = &this->m_BlockStartStack.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = v3;
}


// CSave::StartBlock  (line 1355, @0x000000000209bcd0, libserver.so)
void __fastcall CSave::StartBlock(CSave *const this)
{
  (*(this->_vptr_ISave + 7))(this, "");
}


// CSave::EndBlock  (line 1362, @0x00000000020cd9a0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::Remove, CSave::BufferData
void __fastcall CSave::EndBlock(CSave *const this)
{
  unsigned int v2; // r12d
  int v3; // esi
  int v4; // r13d
  __int16 sizeBlock[17]; // [rsp+Eh] [rbp-22h] BYREF

  v2 = (*(this->_vptr_ISave + 3))(this);
  v3 = this->m_BlockStartStack.m_Size - 1;
  v4 = this->m_BlockStartStack.m_Memory.m_pMemory[v3];
  sizeBlock[0] = v2 - v4;
  CUtlVectorBase<int,CUtlMemory<int,int>>::Remove(&this->m_BlockStartStack, v3);
  (*(this->_vptr_ISave + 4))(this, (v4 - 4));
  CSave::BufferData(this, sizeBlock, 2);
  (*(this->_vptr_ISave + 4))(this, v2);
}


// CSave::BufferString  (line 1379, @0x00000000020a1de0, libserver.so)
// calls: CSave::BufferData
void __fastcall CSave::BufferString(CSave *const this, char *pdata, int len)
{
  char c[17]; // [rsp+Fh] [rbp-11h] BYREF

  c[0] = 0;
  CSave::BufferData(this, pdata, len);
  CSave::BufferData(this, c, 1);
}


// CSave::BufferField  (line 1389, @0x00000000020a24b0, libserver.so)
// calls: CSave::WriteHeader, CSave::BufferData
void __fastcall CSave::BufferField(CSave *const this, const char *pname, int size, const char *pdata)
{
  CSave::WriteHeader(this, pname, size);
  CSave::BufferData(this, pdata, size);
}


// CSave::WriteHeader  (line 1397, @0x00000000020a1e10, libserver.so)  // inlines: FindCreateSymbol, HashString, __rord
// calls: strcmp, Warning, CSave::BufferData
// callers: CSave::WriteString, CSave::WriteVMatrixWorldspace, CSave::WriteMatrix3x4Worldspace, CSave::WriteNetworkOriginCellQuantizedVector, CSave::WriteNetworkQuantizedVector, CSave::WriteNetworkQuantizedFloat, CSave::WriteInterval, CSave::WriteTime, CSave::WriteTick, CSave::WritePositionVector, CSave::WriteVector, CSave::WriteVector2D (26 total)
// strings: "CSave::WriteHeader() size parameter exceeds 'short'!\n", "CSaveRestoreBuffer::TokenHash() is COMPLETELY FULL!"
void __fastcall CSave::WriteHeader(CSave *const this, const char *pname, int size)
{
  char v3; // dl
  CSaveRestoreSegment *m_pData; // rdi
  const char *v5; // rcx
  unsigned int v6; // eax
  int v7; // eax
  int tokenCount; // ebx
  __int64 v9; // rdx
  char **pTokens; // r14
  int v11; // r13d
  int v12; // r12d
  const char **v13; // r15
  int v16; // [rsp+14h] [rbp-4Ch]
  const char *pnamea; // [rsp+18h] [rbp-48h]
  __int16 shortSize; // [rsp+2Ch] [rbp-34h] BYREF
  __int16 hashvalue[25]; // [rsp+2Eh] [rbp-32h] BYREF

  shortSize = size;
  v3 = *pname;
  m_pData = this->m_pData;
  pnamea = pname;
  if ( *pname != 0 )
  {
    v5 = pname;
    v6 = 0;
    do
    {
      ++v5;
      pname = __ROR4__(v6, 4);
      v7 = v3;
      v3 = *v5;
      v6 = pname ^ v7;
    }
    while ( *v5 != 0 );
  }
  else
  {
    v6 = 0;
  }
  tokenCount = m_pData->tokenCount;
  v9 = v6 % tokenCount;
  if ( tokenCount <= 0 )
  {
LABEL_15:
    LOWORD(v12) = 0;
    Warning("CSaveRestoreBuffer::TokenHash() is COMPLETELY FULL!", pname, v9);
  }
  else
  {
    pTokens = m_pData->pTokens;
    v11 = v9;
    v16 = tokenCount + v9;
    while ( 1 )
    {
      v12 = v11 - tokenCount;
      if ( tokenCount > v11 )
        v12 = v11;
      v13 = &pTokens[v12];
      if ( *v13 == 0 || strcmp(pnamea, *v13) == 0 )
        break;
      if ( ++v11 == v16 )
        goto LABEL_15;
    }
    *v13 = pnamea;
  }
  hashvalue[0] = v12;
  if ( size > 0x7FFF )
    Warning("CSave::WriteHeader() size parameter exceeds 'short'!\n");
  CSave::BufferData(this, &shortSize, 2);
  CSave::BufferData(this, hashvalue, 2);
}


// CSave::BufferData  (line 1413, @0x00000000020a1990, libserver.so)  // inlines: BytesAvailable, MoveCurPos, Write, memcpy
// calls: Warning, memcpy
// callers: CSave::WriteShort, CSave::WriteInt, CSave::WriteUInt32, CSave::WriteInt64, CSave::WriteUInt64, CSave::WriteBool, CSave::WriteFloat, CSave::WriteFloat64, CSave::WriteData, CSave::WriteString, CSave::WriteVector, CSave::WriteVector2D (25 total)
// strings: "Save/Restore overflow!\n"
void __fastcall CSave::BufferData(CSave *const this, const char *pdata, int size)
{
  CSaveRestoreSegment *m_pData; // rbx

  m_pData = this->m_pData;
  if ( m_pData != 0 )
  {
    if ( size <= m_pData->bufferSize - m_pData->size )
    {
      memcpy(m_pData->pCurrentData, pdata, size);
      m_pData->pCurrentData += size;
      m_pData->size += size;
    }
    else
    {
      m_pData->size = m_pData->bufferSize;
      Warning("Save/Restore overflow!\n", pdata);
    }
  }
}


// CSave::EntityIndex  (line 1428, @0x00000000020a2810, libserver.so)
// calls: CGameSaveRestoreInfo::GetEntityIndex
// callers: CChangeLevel::ChangeList
int __fastcall CSave::EntityIndex(CSave *const this, const CEntityInstance *pEntity)
{
  return CGameSaveRestoreInfo::GetEntityIndex(this->m_pGameInfo, pEntity);
}


// CSave::EntityFlagsSet  (line 1435, @0x00000000020a2820, libserver.so)
// calls: CGameSaveRestoreInfo::NumEntities, CGameSaveRestoreInfo::GetEntityInfo
// callers: CChangeLevel::ChangeList
int __fastcall CSave::EntityFlagsSet(CSave *const this, int entityIndex, int flags)
{
  CGameSaveRestoreInfo *m_pGameInfo; // rdi
  entitytable_t *EntityInfo; // rax

  m_pGameInfo = this->m_pGameInfo;
  if ( m_pGameInfo == 0 || entityIndex < 0 || entityIndex > CGameSaveRestoreInfo::NumEntities(m_pGameInfo) )
    return 0;
  EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(this->m_pGameInfo, entityIndex);
  EntityInfo->flags |= flags;
  return CGameSaveRestoreInfo::GetEntityInfo(this->m_pGameInfo, entityIndex)->flags;
}


// CSave::WriteTime  (line 1449, @0x00000000020a2230, libserver.so)
// calls: CSave::WriteHeader, CGameSaveRestoreInfo::GetBaseTime
void __fastcall CSave::WriteTime(CSave *const this, const char *pname, const float *data, int count)
{
  const float *v7; // r14
  float v8; // xmm1_4
  float v9; // [rsp+Ch] [rbp-34h]
  float tmp[9]; // [rsp+1Ch] [rbp-24h] BYREF

  CSave::WriteHeader(this, pname, 4 * count);
  if ( count > 0 )
  {
    v7 = &data[count - 1 + 1];
    do
    {
      v8 = *data;
      if ( v8 == 0.0 )
      {
        tmp[0] = -1.7014117e38;
      }
      else if ( v8 == -3.4028235e38
             || v8 == 3.4028235e38
             || (v9 = *data, v8 = v9 - CGameSaveRestoreInfo::GetBaseTime(this->m_pGameInfo), fabs(v8) >= 0.001) )
      {
        tmp[0] = v8;
      }
      else
      {
        tmp[0] = 0.001;
      }
      ++data;
      (*(this->_vptr_ISave + 18))(this, tmp, 4);
    }
    while ( data != v7 );
  }
}


// CSave::WriteTime  (line 1482, @0x000000000209cb20, libserver.so)
// calls: CGameSaveRestoreInfo::GetBaseTime
void __fastcall CSave::WriteTime(CSave *const this, const float *data, int count)
{
  const float *v3; // r14
  const float *v5; // rbx
  float v6; // xmm1_4
  float v7; // [rsp-18h] [rbp-3Ch]
  int v8; // [rsp-8h] [rbp-2Ch] BYREF

  if ( count > 0 )
  {
    v3 = &data[count - 1 + 1];
    v5 = data;
    do
    {
      v6 = *v5;
      if ( v6 == 0.0 )
      {
        v8 = -16777217;
      }
      else if ( v6 == -3.4028235e38
             || v6 == 3.4028235e38
             || (v7 = *v5, v6 = v7 - CGameSaveRestoreInfo::GetBaseTime(this->m_pGameInfo), fabs(v6) >= 0.001) )
      {
        v8 = LODWORD(v6);
      }
      else
      {
        v8 = 981668463;
      }
      ++v5;
      (*(this->_vptr_ISave + 18))(this, &v8, 4);
    }
    while ( v5 != v3 );
  }
}


// CSave::WriteTick  (line 1510, @0x00000000020a2320, libserver.so)
// calls: CSave::WriteHeader
void __fastcall CSave::WriteTick(CSave *const this, const char *pname, const int *data, int count)
{
  CSave::WriteHeader(this, pname, 4 * count);
  (*(this->_vptr_ISave + 54))(this, data, count);
}


// CSave::WriteTick  (line 1518, @0x000000000209ccc0, libserver.so)
// calls: CGameSaveRestoreInfo::GetBaseTick
void __fastcall CSave::WriteTick(CSave *const this, const int *data, int count)
{
  int BaseTick; // eax
  int v7; // r14d
  const int *v8; // r13
  int tmp[13]; // [rsp+Ch] [rbp-34h] BYREF

  BaseTick = CGameSaveRestoreInfo::GetBaseTick(this->m_pGameInfo);
  if ( count > 0 )
  {
    v7 = BaseTick;
    v8 = &data[count - 1 + 1];
    do
    {
      if ( *data == -1 )
        tmp[0] = 2147483644;
      else
        tmp[0] = *data - v7;
      ++data;
      (*(this->_vptr_ISave + 18))(this, tmp, 4);
    }
    while ( data != v8 );
  }
}


// CSave::WritePositionVector  (line 1544, @0x000000000209f770, libserver.so)  // inlines: operator!=, operator-=
// calls: CGameSaveRestoreInfo::GetLandmark
void __fastcall CSave::WritePositionVector(CSave *const this, const char *pname, const Vector *const value)
{
  const Vector *Landmark; // rax
  const char *pnamea; // [rsp+8h] [rbp-28h]
  Vector tmp; // [rsp+10h] [rbp-20h] BYREF

  tmp = *value;
  if ( vec3_invalid.x != tmp.x || vec3_invalid.y != tmp.y || vec3_invalid.z != tmp.z )
  {
    pnamea = pname;
    Landmark = CGameSaveRestoreInfo::GetLandmark(this->m_pGameInfo);
    pname = pnamea;
    tmp.x = tmp.x - Landmark->x;
    tmp.y = tmp.y - Landmark->y;
    tmp.z = tmp.z - Landmark->z;
  }
  (*(this->_vptr_ISave + 41))(this, pname, &tmp);
}


// CSave::WritePositionVector  (line 1556, @0x000000000209f5e0, libserver.so)  // inlines: operator!=, operator-=
// calls: CGameSaveRestoreInfo::GetLandmark
void __fastcall CSave::WritePositionVector(CSave *const this, const Vector *const value)
{
  const Vector *Landmark; // rax
  Vector tmp; // [rsp+0h] [rbp-20h] BYREF

  tmp = *value;
  if ( vec3_invalid.x != tmp.x || vec3_invalid.y != tmp.y || vec3_invalid.z != tmp.z )
  {
    Landmark = CGameSaveRestoreInfo::GetLandmark(this->m_pGameInfo);
    tmp.x = tmp.x - Landmark->x;
    tmp.y = tmp.y - Landmark->y;
    tmp.z = tmp.z - Landmark->z;
  }
  (*(this->_vptr_ISave + 22))(this, &tmp);
}


// CSave::WritePositionVector  (line 1568, @0x00000000020a2370, libserver.so)
// calls: CSave::WriteHeader
void __fastcall CSave::WritePositionVector(CSave *const this, const char *pname, const Vector *value, int count)
{
  CSave::WriteHeader(this, pname, 12 * count);
  (*(this->_vptr_ISave + 56))(this, value, count);
}


// CSave::WritePositionVector  (line 1576, @0x000000000209f680, libserver.so)  // inlines: operator!=, operator-=
// calls: CGameSaveRestoreInfo::GetLandmark
void __fastcall CSave::WritePositionVector(CSave *const this, const Vector *value, int count)
{
  const Vector *v4; // r13
  Vector *v5; // rbx
  const Vector *Landmark; // rax
  float x; // [rsp-4h] [rbp-4Ch]
  Vector tmp; // [rsp+0h] [rbp-48h] BYREF

  if ( count > 0 )
  {
    v4 = &value[(count - 1) + 1];
    v5 = value;
    x = vec3_invalid.x;
    do
    {
      tmp = *v5;
      if ( x != tmp.x || vec3_invalid.y != tmp.y || vec3_invalid.z != tmp.z )
      {
        Landmark = CGameSaveRestoreInfo::GetLandmark(this->m_pGameInfo);
        tmp.x = tmp.x - Landmark->x;
        tmp.y = tmp.y - Landmark->y;
        tmp.z = tmp.z - Landmark->z;
      }
      ++v5;
      (*(this->_vptr_ISave + 18))(this, &tmp, 12);
    }
    while ( v5 != v4 );
  }
}


// CSave::WriteFunction  (line 1591, @0x00000000020a2790, libserver.so)  // inlines: BufferField
// calls: UTIL_FunctionToName, strlen, CSave::WriteHeader, CSave::BufferData, Warning
// strings: "Invalid function pointer in entity!\n", "BADFUNCTIONPOINTER"
void __fastcall CSave::WriteFunction(
        CSave *const this,
        datamap_t *pRootMap,
        const char *pname,
        inputfunc_t *data,
        int count)
{
  const char *v7; // rax
  const char *v8; // rbx
  int v9; // r13d

  v7 = UTIL_FunctionToName(pRootMap, *data);
  v8 = v7;
  if ( v7 != 0 )
  {
    v9 = strlen(v7) + 1;
  }
  else
  {
    v9 = 19;
    Warning("Invalid function pointer in entity!\n");
    v8 = "BADFUNCTIONPOINTER";
  }
  CSave::WriteHeader(this, pname, v9);
  CSave::BufferData(this, v8, v9);
}


// CSave::WriteEntityPtr  (line 1607, @0x000000000209c9d0, libserver.so)  // inlines: EntityIndex
// calls: CGameSaveRestoreInfo::GetEntityIndex
void __fastcall CSave::WriteEntityPtr(CSave *const this, const char *pname, CEntityInstance **ppEntity, int count)
{
  __int64 v6; // rbx
  int v7; // r12d
  int entityArray[1036]; // [rsp+10h] [rbp-1030h] BYREF

  if ( count > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      entityArray[v6] = CGameSaveRestoreInfo::GetEntityIndex(this->m_pGameInfo, ppEntity[v6]);
      ++v6;
    }
    while ( count > v7 && v7 <= 1023 );
  }
  (*(this->_vptr_ISave + 30))(this, pname, entityArray, count);
}


// CSave::WriteEntityPtr  (line 1620, @0x000000000209ca80, libserver.so)  // inlines: EntityIndex
// calls: CGameSaveRestoreInfo::GetEntityIndex
void __fastcall CSave::WriteEntityPtr(CSave *const this, CEntityInstance **ppEntity, int count)
{
  __int64 v5; // rbx
  int v6; // r12d
  int entityArray[1036]; // [rsp+10h] [rbp-1030h] BYREF

  if ( count > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      ++v6;
      entityArray[v5] = CGameSaveRestoreInfo::GetEntityIndex(this->m_pGameInfo, ppEntity[v5]);
      ++v5;
    }
    while ( count > v6 && v6 <= 1023 );
  }
  (*(this->_vptr_ISave + 11))(this, entityArray, count);
}


// CSave::WriteEHandle  (line 1632, @0x000000000209fd70, libserver.so)  // inlines: EntityIndex, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CGameSaveRestoreInfo::GetEntityIndex
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSave::WriteEHandle(CSave *const this, const char *pname, const CEntityHandle *pEHandle, int count)
{
  int v7; // ebx
  int *v8; // r14
  const CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  int entityArray[1036]; // [rsp+10h] [rbp-1030h] BYREF

  if ( count > 0 )
  {
    v7 = 0;
    v8 = entityArray;
    do
    {
      m_pInstance = 0;
      if ( pEHandle->m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pEHandle->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[pEHandle->m_Index & 0x1FF];
          if ( v11 != 0 && pEHandle->m_Index == v11->m_EHandle.m_Index )
            m_pInstance = v11->m_pInstance;
        }
      }
      ++v7;
      ++pEHandle;
      *v8++ = CGameSaveRestoreInfo::GetEntityIndex(this->m_pGameInfo, m_pInstance);
    }
    while ( count > v7 && v7 <= 1023 );
  }
  (*(this->_vptr_ISave + 30))(this, pname, entityArray, count);
}


// CSave::WriteEHandle  (line 1655, @0x000000000209fe70, libserver.so)  // inlines: CEntityHandle, EntityIndex, GetClassNameAsCStr, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, String, operator CEntityInstance*
// calls: CGameSaveRestoreInfo::GetEntityIndex, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "WriteEHandle to slot %d for entity %d:%s\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSave::WriteEHandle(CSave *const this, const CEntityHandle *pEHandle, int count)
{
  int v6; // ebx
  int *v7; // r13
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const char *m_pAsString; // r9
  CEntityIdentity *m_pEntity; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  int *v14; // [rsp+0h] [rbp-1050h]
  const CEntityInstance *m_pInstance; // [rsp+8h] [rbp-1048h]
  int entityArray[1036]; // [rsp+20h] [rbp-1030h] BYREF

  if ( count <= 0 )
  {
    (*(this->_vptr_ISave + 11))(this, entityArray, count);
    return;
  }
  v6 = 0;
  v14 = entityArray;
  v7 = entityArray;
  do
  {
    if ( pEHandle->m_Index + 2 <= 1
      || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pEHandle->m_Index) >> 9) & 0x3F]) == 0
      || (v9 = &v8[pEHandle->m_Index & 0x1FF]) == 0
      || pEHandle->m_Index != v9->m_EHandle.m_Index )
    {
      *v7 = CGameSaveRestoreInfo::GetEntityIndex(this->m_pGameInfo, 0);
LABEL_4:
      ++v6;
      ++pEHandle;
      ++v7;
      if ( count <= v6 )
        break;
      continue;
    }
    m_pInstance = v9->m_pInstance;
    *v7 = CGameSaveRestoreInfo::GetEntityIndex(this->m_pGameInfo, v9->m_pInstance);
    if ( m_pInstance == 0 || LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) == 0 )
      goto LABEL_4;
    m_pAsString = "";
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    LOWORD(v12) = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      LOWORD(v12) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v12 = v12;
    v13 = *v7;
    if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF) == 0xFFFFFFFF )
      v12 = 0x7FFF;
    ++v6;
    ++pEHandle;
    ++v7;
    LoggingSystem_Log(LOG_SAVERESTORE, 0, "WriteEHandle to slot %d for entity %d:%s\n", v13, v12, m_pAsString, v14);
    if ( count <= v6 )
      break;
  }
  while ( v6 <= 1023 );
  (*(this->_vptr_ISave + 11))(this, v14, count);
}


// CSave::WriteSingleField  (line 1675, @0x00000000020a2890, libserver.so)  // inlines: CResourceNameGetter, ResourceGetName, ResourceGetName<512ul>, String, V_strncpy<int>, operator ResourceHandle_t
// calls: _V_strncpy, CGameSaveRestoreInfo::AddResourceToSaveManifest, Warning, __stack_chk_fail
// callers: CSave::WriteField
// strings: "Bad field type\n"
// globals: jpt_20A28D0
bool __fastcall CSave::WriteSingleField(
        CSave *const this,
        const char *pname,
        void *pData,
        datamap_t *pRootMap,
        typedescription_t *pField)
{
  char *v6; // r12
  __int64 fieldType; // rdx
  bool result; // al
  int (**v10)(...); // rax
  __int64 fieldOffset; // rax
  ISaveRestoreOps *pSaveRestoreOps; // rdi
  int v13; // r13d
  typedescription_t *i; // r8
  int (**vptr_ISave)(...); // rax
  __int64 fieldSize; // rdx
  const char **v17; // rax
  const char *v18; // rsi
  typedescription_t *v19; // r8
  int v20; // eax
  typedescription_t *pFielda; // [rsp+8h] [rbp-258h]
  typedescription_t *pFieldb; // [rsp+8h] [rbp-258h]
  typedescription_t *pFieldc; // [rsp+8h] [rbp-258h]
  typedescription_t *pFieldd; // [rsp+8h] [rbp-258h]
  typedescription_t *pFielde; // [rsp+8h] [rbp-258h]
  typedescription_t *pFieldf; // [rsp+8h] [rbp-258h]
  SaveRestoreFieldInfo_t fieldInfo; // [rsp+10h] [rbp-250h] BYREF
  CResourceNameGetter resourceName; // [rsp+30h] [rbp-230h] BYREF
  unsigned __int64 v29; // [rsp+238h] [rbp-28h]

  v29 = __readfsqword(0x28u);
  v6 = pData;
  fieldType = pField->fieldType;
  switch ( pField->fieldType )
  {
    case fieldtype_t::FIELD_FLOAT:
      (*(this->_vptr_ISave + 35))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_STRING:
    case fieldtype_t::FIELD_SOUNDNAME:
      (*(this->_vptr_ISave + 39))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_VECTOR:
    case fieldtype_t::FIELD_QANGLE:
      (*(this->_vptr_ISave + 42))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_QUATERNION:
      (*(this->_vptr_ISave + 46))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_INTEGER:
      (*(this->_vptr_ISave + 30))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_BOOLEAN:
      (*(this->_vptr_ISave + 34))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_SHORT:
      vptr_ISave = this->_vptr_ISave;
      fieldSize = 2 * pField->fieldSize;
      goto LABEL_16;
    case fieldtype_t::FIELD_CHARACTER:
      vptr_ISave = this->_vptr_ISave;
      fieldSize = pField->fieldSize;
      goto LABEL_16;
    case fieldtype_t::FIELD_COLOR32:
      vptr_ISave = this->_vptr_ISave;
      fieldSize = 4 * pField->fieldSize;
LABEL_16:
      vptr_ISave[37](this, pField->fieldName, fieldSize, v6);
      return 1;
    case fieldtype_t::FIELD_EMBEDDED:
      if ( (pField->flags & 0x40) != 0 )
        v6 = *v6;
      pFieldb = pField;
      v13 = pField->fieldSize - 1;
      (*(this->_vptr_ISave + 7))(this, pField->fieldName, fieldType, pRootMap);
      for ( i = pFieldb; v13 != -1; v6 += pFieldc->fieldSizeInBytes )
      {
        pFieldc = i;
        --v13;
        (*(this->_vptr_ISave + 5))(this, v6, i->td);
        i = pFieldc;
      }
      goto LABEL_9;
    case fieldtype_t::FIELD_CUSTOM:
      pFielda = pField;
      (*(this->_vptr_ISave + 7))(this, pField->fieldName, fieldType, pRootMap);
      fieldInfo.pField = v6;
      fieldOffset = pFielda->fieldOffset;
      fieldInfo.pTypeDesc = pFielda;
      pSaveRestoreOps = pFielda->pSaveRestoreOps;
      fieldInfo.pOwner = &v6[-fieldOffset];
      (*pSaveRestoreOps->_vptr_ISaveRestoreOps)(pSaveRestoreOps, &fieldInfo, this);
LABEL_9:
      (*(this->_vptr_ISave + 9))(this);
      return 1;
    case fieldtype_t::FIELD_CLASSPTR:
      (*(this->_vptr_ISave + 57))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_EHANDLE:
      (*(this->_vptr_ISave + 58))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_POSITION_VECTOR:
      (*(this->_vptr_ISave + 51))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_TIME:
      (*(this->_vptr_ISave + 48))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_TICK:
      (*(this->_vptr_ISave + 49))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_FUNCTION:
      (*(this->_vptr_ISave + 52))(this, pRootMap, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_VMATRIX:
      (*(this->_vptr_ISave + 47))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_VMATRIX_WORLDSPACE:
      (*(this->_vptr_ISave + 61))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_MATRIX3X4_WORLDSPACE:
      (*(this->_vptr_ISave + 64))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_INTERVAL:
      (*(this->_vptr_ISave + 70))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_VECTOR2D:
      (*(this->_vptr_ISave + 44))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_INTEGER64:
      (*(this->_vptr_ISave + 32))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_UINT64:
      (*(this->_vptr_ISave + 33))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_FLOAT64:
      (*(this->_vptr_ISave + 36))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_UINT:
      (*(this->_vptr_ISave + 31))(this, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_UTLSTRINGTOKEN:
      LODWORD(fieldInfo.pField) = *v6;
      v10 = this->_vptr_ISave;
      goto LABEL_6;
    case fieldtype_t::FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR:
      (*(this->_vptr_ISave + 66))(this, 0, pField->fieldName, v6, pField->fieldSize);
      return 1;
    case fieldtype_t::FIELD_HMATERIAL:
    case fieldtype_t::FIELD_HMODEL:
    case fieldtype_t::FIELD_HRENDERTEXTURE:
      if ( *v6 != 0 && (v17 = *(*v6 + 8LL)) != 0 )
      {
        v18 = "";
        if ( *v17 != 0 )
          v18 = *v17;
        pFieldd = pField;
        _V_strncpy(&resourceName, v18, 512);
        v19 = pFieldd;
      }
      else
      {
        pFieldf = pField;
        _V_strncpy(&resourceName, "", 512);
        v19 = pFieldf;
      }
      pFielde = v19;
      v20 = CGameSaveRestoreInfo::AddResourceToSaveManifest(this->m_pGameInfo, resourceName.m_Buffer);
      pField = pFielde;
      LODWORD(fieldInfo.pField) = v20;
      v10 = this->_vptr_ISave;
LABEL_6:
      v10[30](this, pField->fieldName, &fieldInfo, 1);
      result = 1;
      break;
    case fieldtype_t::FIELD_NETWORK_QUANTIZED_VECTOR:
      (*(this->_vptr_ISave + 68))(this, pField->fieldName, v6, pField->fieldSize);
      result = 1;
      break;
    case fieldtype_t::FIELD_NETWORK_QUANTIZED_FLOAT:
      (*(this->_vptr_ISave + 72))(this, pField->fieldName, v6, pField->fieldSize);
      result = 1;
      break;
    case fieldtype_t::FIELD_UTLSTRING:
      (*(this->_vptr_ISave + 40))(this, pField->fieldName, v6, pField->fieldSize);
      result = 1;
      break;
    case fieldtype_t::FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR:
      (*(this->_vptr_ISave + 66))(this, 1, pField->fieldName, v6, pField->fieldSize);
      result = 1;
      break;
    default:
      Warning("Bad field type\n", pname, pData);
      result = 0;
      break;
  }
  return result;
}


// CRestore::CRestore  (line 1880, @0x00000000020c37f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, EnsureCapacity, ~CUtlVector, ~IRestore
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: SkipGlobalState, CEntity2SaveRestore::LoadAdjacentDecals, CEntity2SaveRestore::AppendTransitionResources, CEntity2SaveRestore::ExtractResourcesFromSaveGame, CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList, CEntity2SaveRestore::StreamEntitiesFromFile, CEntity2SaveRestore::LoadAdjacentEnts, CEntitySaveRestoreBlockHandler::RestoreGlobalEntity, CreateEntityTransitionList, RestoreGlobalState
void __fastcall CRestore::CRestore(CRestore *const this, CSaveRestoreData *pdata)
{
  CGameSaveRestoreInfo *v3; // rax

  this->_vptr_IRestore = &off_3FF5F30;
  v3 = 0;
  if ( pdata != 0 )
    v3 = &pdata->CGameSaveRestoreInfo;
  this->m_pData = pdata;
  this->m_BlockEndStack.m_Size = 0;
  this->m_pGameInfo = v3;
  this->m_BlockEndStack.m_Memory.m_pMemory = 0;
  this->m_BlockEndStack.m_Memory.m_nAllocationCount = 0;
  this->m_BlockEndStack.m_Memory.m_nGrowSize = 0;
  this->m_global = 0;
  this->m_precache = 1;
  this->m_BlockEndStack.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 128);
  this->m_BlockEndStack.m_Memory.m_nAllocationCount = 32;
}


// CRestore::GetReadPos  (line 1891, @0x000000000209bcf0, libserver.so)
// callers: CEntity2SaveRestore::LoadAdjacentDecals, CEntity2SaveRestore::LoadAdjacentEnts
int __fastcall CRestore::GetReadPos(const CRestore *const this)
{
  return this->m_pData->size;
}


// CRestore::SetReadPos  (line 1898, @0x000000000209bd00, libserver.so)  // inlines: Seek
void __fastcall CRestore::SetReadPos(CRestore *const this, int pos)
{
  CSaveRestoreSegment *m_pData; // rax

  m_pData = this->m_pData;
  if ( pos >= 0 && pos < m_pData->bufferSize )
  {
    m_pData->size = pos;
    m_pData->pCurrentData = &m_pData->pBaseData[pos];
  }
}


// CRestore::StringFromHeaderSymbol  (line 1905, @0x000000000209bd20, libserver.so)  // inlines: StringFromSymbol
// strings: "<<illegal>>"
const char *__fastcall CRestore::StringFromHeaderSymbol(CRestore *const this, int symbol)
{
  CSaveRestoreSegment *m_pData; // rdx
  const char *result; // rax
  const char *v4; // rdx

  m_pData = this->m_pData;
  result = "<<illegal>>";
  if ( symbol >= 0 && symbol < m_pData->tokenCount )
  {
    v4 = m_pData->pTokens[symbol];
    result = "";
    if ( v4 != 0 )
      return v4;
  }
  return result;
}


// CRestore::ReadField  (line 1915, @0x00000000020d1ca0, libserver.so)
// calls: CRestore::ReadSingleField
void __fastcall CRestore::ReadField(
        CRestore *const this,
        const SaveRestoreRecordHeader_t *const header,
        void *pDest,
        datamap_t *pRootMap,
        typedescription_t *pField)
{
  CRestore::ReadSingleField(this, header, pDest, pRootMap, pField);
}


// CRestore::ShouldReadField  (line 1922, @0x00000000020a2e90, libserver.so)
bool __fastcall CRestore::ShouldReadField(CRestore *const this, typedescription_t *pField)
{
  __int16 flags; // dx
  bool result; // al

  flags = pField->flags;
  result = 0;
  if ( (flags & 2) != 0 )
  {
    result = 1;
    if ( this->m_global != 0 )
      return !(flags & 1);
  }
  return result;
}


// CRestore::FindField  (line 1935, @0x00000000020a2ec0, libserver.so)
// calls: V_stricmp_fast
// callers: CRestore::ReadFields
typedescription_t *__fastcall CRestore::FindField(
        CRestore *const this,
        const char *pszFieldName,
        typedescription_t *pFields,
        int fieldCount,
        int *pCookie)
{
  int v8; // r15d
  int v9; // edi
  typedescription_t *v10; // r14

  if ( pszFieldName != 0 && fieldCount > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = *pCookie + 1;
      v10 = &pFields[*pCookie];
      if ( fieldCount == v9 )
        v9 = 0;
      *pCookie = v9;
      if ( V_stricmp_fast(v10->fieldName, pszFieldName) == 0 )
        return v10;
      if ( ++v8 == fieldCount )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    *pCookie = 0;
    return 0;
  }
}


// CRestore::ShouldEmptyField  (line 1961, @0x00000000020a2f70, libserver.so)
// callers: CRestore::EmptyFields
bool __fastcall CRestore::ShouldEmptyField(CRestore *const this, typedescription_t *pField)
{
  __int16 flags; // dx
  bool result; // al
  unsigned __int32 v4; // ecx

  flags = pField->flags;
  result = 0;
  if ( (flags & 2) != 0 && (this->m_global == 0 || (flags & 1) == 0) )
  {
    result = 1;
    v4 = pField->fieldType - 40;
    if ( v4 <= 0xE )
      return ((1LL << v4) & 0x4019) == 0;
  }
  return result;
}


// CRestore::EmptyFields  (line 1987, @0x00000000020a2fc0, libserver.so)  // inlines: memset
// calls: CRestore::ShouldEmptyField, Warning, memset
// strings: "WARNING! Field %s is using the wrong FIELD_ type!\nFix this or you'll see a crash.\n"
// globals: gSizes
void __fastcall CRestore::EmptyFields(
        CRestore *const this,
        void *pBaseData,
        typedescription_t *pFields,
        int fieldCount)
{
  typedescription_t *v5; // rbx
  typedescription_t *v6; // r13
  __int64 fieldOffset; // r8
  _QWORD *v8; // r15
  fieldtype_t fieldType; // eax
  int v10; // r14d
  int v11; // edx
  int v12; // esi
  SaveRestoreFieldInfo_t fieldInfo; // [rsp+20h] [rbp-50h] BYREF

  if ( fieldCount > 0 )
  {
    v5 = pFields;
    v6 = &pFields[(fieldCount - 1) + 1];
    while ( 1 )
    {
      if ( !CRestore::ShouldEmptyField(this, v5) )
        goto LABEL_5;
      fieldOffset = v5->fieldOffset;
      v8 = pBaseData + fieldOffset;
      fieldType = v5->fieldType;
      if ( v5->fieldType != fieldtype_t::FIELD_EMBEDDED )
      {
        if ( fieldType == fieldtype_t::FIELD_CUSTOM )
        {
          fieldInfo.pField = pBaseData + fieldOffset;
          fieldInfo.pTypeDesc = v5;
          fieldInfo.pOwner = pBaseData;
          (*(v5->pSaveRestoreOps->_vptr_ISaveRestoreOps + 3))(v5->pSaveRestoreOps, &fieldInfo);
        }
        else
        {
          v11 = gSizes[fieldType] * v5->fieldSize;
          if ( v5->fieldSizeInBytes != v11 )
          {
            Warning(
              "WARNING! Field %s is using the wrong FIELD_ type!\nFix this or you'll see a crash.\n",
              v5->fieldName);
            fieldType = v5->fieldType;
            v11 = gSizes[v5->fieldType] * v5->fieldSize;
          }
          v12 = 255;
          if ( fieldType != fieldtype_t::FIELD_EHANDLE )
            v12 = 0;
          memset(v8, v12, v11);
        }
        goto LABEL_5;
      }
      if ( ((v5->flags & 0x40) == 0 || (v8 = *v8) != 0) && (v10 = v5->fieldSize - 1, v5->fieldSize != 0) )
      {
        do
        {
          --v10;
          (*(this->_vptr_IRestore + 4))(this, v8, v5->td->dataDesc, v5->td->dataNumFields);
          v8 = (v8 + v5->fieldSizeInBytes);
        }
        while ( v10 != -1 );
        if ( ++v5 == v6 )
          return;
      }
      else
      {
LABEL_5:
        if ( ++v5 == v6 )
          return;
      }
    }
  }
}


// CRestore::StartBlock  (line 2042, @0x00000000020d6d60, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, operator[]
// calls: CUtlMemory<int, int>::Grow
void __fastcall CRestore::StartBlock(CRestore *const this, SaveRestoreRecordHeader_t *pHeader)
{
  int v4; // eax
  int size; // edx
  __int64 m_Size; // r12
  int v7; // r13d
  int v8; // edx
  int *v9; // rdx

  (*(this->_vptr_IRestore + 9))(this);
  v4 = (*this->_vptr_IRestore)(this);
  size = pHeader->size;
  m_Size = this->m_BlockEndStack.m_Size;
  v7 = v4 + size;
  v8 = this->m_BlockEndStack.m_Size;
  if ( m_Size == this->m_BlockEndStack.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&this->m_BlockEndStack.m_Memory, 1);
    v8 = this->m_BlockEndStack.m_Size;
  }
  this->m_BlockEndStack.m_Size = v8 + 1;
  v9 = &this->m_BlockEndStack.m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
    *v9 = v7;
}


// CRestore::StartBlock  (line 2050, @0x000000000209c8d0, libserver.so)  // inlines: V_strncpy<int>
// calls: _V_strncpy
void __fastcall CRestore::StartBlock(CRestore *const this, char *szBlockName)
{
  __int64 v4; // rax
  SaveRestoreRecordHeader_t header; // [rsp+0h] [rbp-20h] BYREF

  (*(this->_vptr_IRestore + 5))(this, &header);
  v4 = (*(this->_vptr_IRestore + 11))(this, header.symbol);
  _V_strncpy(szBlockName, v4, 32);
}


// CRestore::StartBlock  (line 2059, @0x000000000209bd60, libserver.so)
// calls: __stack_chk_fail
void __fastcall CRestore::StartBlock(CRestore *const this)
{
  char szBlockName[40]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v2; // [rsp+28h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  (*(this->_vptr_IRestore + 6))(this, szBlockName);
}


// CRestore::EndBlock  (line 2067, @0x00000000020cda20, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::Remove
void __fastcall CRestore::EndBlock(CRestore *const this)
{
  int m_Size; // eax
  CUtlVector<int,CUtlMemory<int,int> > *p_m_BlockEndStack; // rdi
  unsigned int v4; // r12d

  m_Size = this->m_BlockEndStack.m_Size;
  p_m_BlockEndStack = &this->m_BlockEndStack;
  v4 = p_m_BlockEndStack->m_Memory.m_pMemory[m_Size - 1];
  CUtlVectorBase<int,CUtlMemory<int,int>>::Remove(p_m_BlockEndStack, m_Size - 1);
  (*(this->_vptr_IRestore + 1))(this, v4);
}


// CRestore::SkipEntityData  (line 2074, @0x000000000209bda0, libserver.so)  // inlines: MoveCurPos
void __fastcall CRestore::SkipEntityData(CRestore *const this)
{
  int v1; // r12d
  int v3; // r13d
  int size; // eax
  CSaveRestoreSegment *m_pData; // rdx
  SaveRestoreRecordHeader_t header; // [rsp+0h] [rbp-30h] BYREF

  v1 = 0;
  v3 = (*(this->_vptr_IRestore + 13))(this);
  if ( v3 > 0 )
  {
    do
    {
      ++v1;
      (*(this->_vptr_IRestore + 9))(this, &header);
      size = header.size;
      m_pData = this->m_pData;
      m_pData->pCurrentData += header.size;
      m_pData->size += size;
    }
    while ( v1 != v3 );
  }
}


// CRestore::ReadFields  (line 2088, @0x00000000020d1cb0, libserver.so)  // inlines: BufferPointer, BufferSkipBytes, FindCreateSymbol, HashString, MoveCurPos, ReadField, Rewind, ShouldReadField, StringFromSymbol, __rord
// calls: strcmp, Msg, Warning, CRestore::ReadSingleField, CRestore::FindField, CRestore::BufferReadBytes
// callers: CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList
// strings: "<<illegal>>", "Expected %s found %s ( raw '%s' )! (prev: %s)\n", "Field type name may have changed or inheritance graph changed, save file is suspect\n", "CSaveRestoreBuffer::TokenHash() is COMPLETELY FULL!"
// globals: CRestore::ReadFields(char const*,void *,datamap_t *,typedescription_t *,int)::lastName
int __fastcall CRestore::ReadFields(
        CRestore *const this,
        const char *pname,
        void *pBaseData,
        datamap_t *pRootMap,
        typedescription_t *pFields,
        int fieldCount)
{
  __int64 v8; // rsi
  char v9; // dl
  CSaveRestoreSegment *m_pData; // rdi
  const char *v11; // rcx
  unsigned int v12; // eax
  int v13; // eax
  int tokenCount; // ebx
  __int64 v15; // rdx
  int v16; // r15d
  int v17; // r12d
  const char **v18; // r14
  __int16 v19; // ax
  const char *v20; // r8
  CSaveRestoreSegment *v21; // rsi
  const char *v22; // rdx
  const char *pCurrentData; // rcx
  double v24; // xmm0_8
  CSaveRestoreSegment *v25; // rax
  int size; // edx
  __int64 v27; // rcx
  int v28; // edx
  int (**vptr_IRestore)(...); // rax
  int v31; // eax
  int v32; // r14d
  int v33; // ebx
  const char *v34; // rsi
  CSaveRestoreSegment *v35; // rax
  typedescription_t *Field; // rax
  __int16 flags; // dx
  int v42; // [rsp+1Ch] [rbp-54h]
  char **pTokens; // [rsp+20h] [rbp-50h]
  SaveRestoreRecordHeader_t header; // [rsp+30h] [rbp-40h] BYREF
  int searchCookie[13]; // [rsp+3Ch] [rbp-34h] BYREF

  (*(this->_vptr_IRestore + 12))(this);
  v9 = *pname;
  m_pData = this->m_pData;
  if ( *pname != 0 )
  {
    v11 = pname;
    v12 = 0;
    do
    {
      ++v11;
      v8 = __ROR4__(v12, 4);
      v13 = v9;
      v9 = *v11;
      v12 = v8 ^ v13;
    }
    while ( *v11 != 0 );
  }
  else
  {
    v12 = 0;
  }
  tokenCount = m_pData->tokenCount;
  v15 = v12 % tokenCount;
  if ( tokenCount <= 0 )
  {
LABEL_25:
    v17 = 0;
    Warning("CSaveRestoreBuffer::TokenHash() is COMPLETELY FULL!", v8, v15);
  }
  else
  {
    v16 = v15;
    pTokens = m_pData->pTokens;
    v42 = tokenCount + v15;
    while ( 1 )
    {
      v17 = v16 - tokenCount;
      if ( tokenCount > v16 )
        v17 = v16;
      v18 = &pTokens[v17];
      if ( *v18 == 0 || strcmp(pname, *v18) == 0 )
        break;
      if ( ++v16 == v42 )
        goto LABEL_25;
    }
    v17 = v17;
    *v18 = pname;
  }
  v19 = (*(this->_vptr_IRestore + 12))(this);
  if ( v19 != v17 )
  {
    v20 = "<<illegal>>";
    v21 = this->m_pData;
    if ( CRestore::ReadFields(char const*,void *,datamap_t *,typedescription_t *,int)::lastName >= 0
      && CRestore::ReadFields(char const*,void *,datamap_t *,typedescription_t *,int)::lastName < v21->tokenCount )
    {
      v20 = v21->pTokens[CRestore::ReadFields(char const*,void *,datamap_t *,typedescription_t *,int)::lastName];
      v22 = "<<illegal>>";
      if ( v19 >= 0 )
      {
LABEL_16:
        if ( v19 < v21->tokenCount )
          v22 = v21->pTokens[v19];
LABEL_18:
        pCurrentData = v21->pCurrentData;
LABEL_19:
        *&v24 = Msg("Expected %s found %s ( raw '%s' )! (prev: %s)\n", pname, v22, pCurrentData, v20).m128_u64[0];
        Msg("Field type name may have changed or inheritance graph changed, save file is suspect\n", v24);
        v25 = this->m_pData;
        size = v25->size;
        if ( size > 3 )
        {
          v28 = size - 4;
          v27 = -4;
        }
        else
        {
          v27 = -size;
          v28 = 0;
        }
        v25->pCurrentData += v27;
        v25->size = v28;
        return 0;
      }
    }
    else
    {
      v22 = "<<illegal>>";
      if ( v19 >= 0 )
        goto LABEL_16;
    }
    pCurrentData = 0;
    if ( v21 == 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  vptr_IRestore = this->_vptr_IRestore;
  CRestore::ReadFields(char const*,void *,datamap_t *,typedescription_t *,int)::lastName = v17;
  vptr_IRestore[4](this, pBaseData, pFields, fieldCount);
  v31 = (*(this->_vptr_IRestore + 13))(this);
  searchCookie[0] = 0;
  v32 = v31;
  if ( v31 > 0 )
  {
    v33 = 0;
    do
    {
      while ( 1 )
      {
        (*(this->_vptr_IRestore + 9))(this, &header);
        v34 = "<<illegal>>";
        v35 = this->m_pData;
        if ( header.symbol < v35->tokenCount )
          v34 = v35->pTokens[header.symbol];
        Field = CRestore::FindField(this, v34, pFields, fieldCount, searchCookie);
        if ( Field == 0 )
          break;
        flags = Field->flags;
        if ( (flags & 2) == 0 || this->m_global != 0 && (flags & 1) != 0 )
          break;
        ++v33;
        CRestore::ReadSingleField(this, &header, pBaseData + Field->fieldOffset, pRootMap, Field);
        if ( v33 == v32 )
          return 1;
      }
      ++v33;
      CRestore::BufferReadBytes(this, 0, header.size);
    }
    while ( v33 != v32 );
  }
  return 1;
}


// CRestore::ReadHeader  (line 2136, @0x00000000020a3520, libserver.so)  // inlines: BufferSkipBytes
// calls: CRestore::BufferReadBytes
void __fastcall CRestore::ReadHeader(CRestore *const this, SaveRestoreRecordHeader_t *pheader)
{
  if ( pheader != 0 )
  {
    pheader->size = (*(this->_vptr_IRestore + 12))(this);
    pheader->symbol = (*(this->_vptr_IRestore + 12))(this);
  }
  else
  {
    CRestore::BufferReadBytes(this, 0, 4);
  }
}


// CRestore::ReadShort  (line 2152, @0x00000000020a3230, libserver.so)
// calls: CRestore::BufferReadBytes
__int16 __fastcall CRestore::ReadShort(CRestore *const this)
{
  __int16 tmp; // [rsp+Eh] [rbp-2h] BYREF

  tmp = 0;
  CRestore::BufferReadBytes(this, &tmp, 2);
  return tmp;
}


// CRestore::ReadInt  (line 2163, @0x00000000020a3260, libserver.so)
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadInt(CRestore *const this)
{
  int tmp; // [rsp+Ch] [rbp-4h] BYREF

  tmp = 0;
  CRestore::BufferReadBytes(this, &tmp, 4);
  return tmp;
}


// CRestore::ReadUInt32  (line 2172, @0x00000000020a3290, libserver.so)
// calls: CRestore::BufferReadBytes
uint32 __fastcall CRestore::ReadUInt32(CRestore *const this)
{
  uint32 tmp; // [rsp+Ch] [rbp-4h] BYREF

  tmp = 0;
  CRestore::BufferReadBytes(this, &tmp, 4);
  return tmp;
}


// CRestore::ReadInt64  (line 2181, @0x00000000020a32c0, libserver.so)
// calls: CRestore::BufferReadBytes
int64 __fastcall CRestore::ReadInt64(CRestore *const this)
{
  int64 tmp; // [rsp+8h] [rbp-8h] BYREF

  tmp = 0;
  CRestore::BufferReadBytes(this, &tmp, 8);
  return tmp;
}


// CRestore::ReadUInt64  (line 2190, @0x00000000020a32f0, libserver.so)
// calls: CRestore::BufferReadBytes
uint64 __fastcall CRestore::ReadUInt64(CRestore *const this)
{
  uint64 tmp; // [rsp+8h] [rbp-8h] BYREF

  tmp = 0;
  CRestore::BufferReadBytes(this, &tmp, 8);
  return tmp;
}


// CRestore::DoReadAll  (line 2204, @0x00000000020a3130, libserver.so)
// callers: CRestore::ReadAll
int __fastcall CRestore::DoReadAll(CRestore *const this, void *pLeafObject, datamap_t *pLeafMap, datamap_t *pCurMap)
{
  datamap_t *baseMap; // rcx
  int result; // eax

  baseMap = pCurMap->baseMap;
  if ( baseMap == 0 )
    return (*(this->_vptr_IRestore + 3))(
             this,
             pCurMap->dataClassName,
             pLeafObject,
             pLeafMap,
             pCurMap->dataDesc,
             pCurMap->dataNumFields);
  result = CRestore::DoReadAll(this, pLeafObject, pLeafMap, baseMap);
  if ( result != 0 )
    return (*(this->_vptr_IRestore + 3))(
             this,
             pCurMap->dataClassName,
             pLeafObject,
             pLeafMap,
             pCurMap->dataDesc,
             pCurMap->dataNumFields);
  return result;
}


// CRestore::BufferPointer  (line 2219, @0x00000000020a3190, libserver.so)
char *__fastcall CRestore::BufferPointer(CRestore *const this)
{
  CSaveRestoreSegment *m_pData; // rax

  m_pData = this->m_pData;
  if ( m_pData != 0 )
    return m_pData->pCurrentData;
  else
    return 0;
}


// CRestore::BufferReadBytes  (line 2229, @0x00000000020a31b0, libserver.so)  // inlines: BytesAvailable, MoveCurPos, Read, memcpy
// calls: memcpy, Warning
// callers: CRestore::ReadShort, CRestore::ReadInt, CRestore::ReadUInt32, CRestore::ReadInt64, CRestore::ReadUInt64, CRestore::ReadVector, CRestore::ReadVector2D, CRestore::ReadQuaternion, CRestore::ReadVMatrixWorldspace, CRestore::ReadMatrix3x4Worldspace, CRestore::ReadHeader, CRestore::ReadString (24 total)
// strings: "Restore underflow!\n"
void __fastcall CRestore::BufferReadBytes(CRestore *const this, char *pOutput, int size)
{
  CSaveRestoreSegment *m_pData; // rbx
  int v4; // eax
  int bufferSize; // ecx

  m_pData = this->m_pData;
  if ( m_pData != 0 )
  {
    v4 = m_pData->size;
    bufferSize = m_pData->bufferSize;
    if ( v4 != bufferSize )
    {
      if ( size > bufferSize - v4 )
      {
        m_pData->size = bufferSize;
        Warning("Restore underflow!\n", pOutput);
      }
      else
      {
        if ( pOutput != 0 )
        {
          memcpy(pOutput, m_pData->pCurrentData, size);
          v4 = m_pData->size;
        }
        m_pData->pCurrentData += size;
        m_pData->size = size + v4;
      }
    }
  }
}


// CRestore::BufferSkipBytes  (line 2245, @0x00000000020a41e0, libserver.so)
// calls: CRestore::BufferReadBytes
void __fastcall CRestore::BufferSkipBytes(CRestore *const this, int bytes)
{
  CRestore::BufferReadBytes(this, 0, bytes);
}


// CRestore::ReadShort  (line 2252, @0x00000000020a3810, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<short int>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadShort(CRestore *const this, __int16 *pValue, int nElems, int nBytesAvailable)
{
  int v6; // ebx

  v6 = 2 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v6 )
    {
      v6 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v6 >> 1;
    }
    CRestore::BufferReadBytes(this, pValue, v6);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v6);
    if ( v6 >= 0 )
      return v6 >> 1;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v6);
  return v6 >> 1;
}


// CRestore::ReadInt  (line 2259, @0x00000000020a3880, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<int>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadInt(CRestore *const this, int *pValue, int nElems, int nBytesAvailable)
{
  int v6; // ebx

  v6 = 4 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v6 )
    {
      v6 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v6 >> 2;
    }
    CRestore::BufferReadBytes(this, pValue, v6);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v6);
    if ( v6 >= 0 )
      return v6 >> 2;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v6);
  return v6 >> 2;
}


// CRestore::ReadUInt32  (line 2264, @0x00000000020a38f0, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<unsigned int>
// calls: CRestore::BufferReadBytes
uint32 __fastcall CRestore::ReadUInt32(CRestore *const this, uint32 *pValue, int nElems, int nBytesAvailable)
{
  int v6; // ebx

  v6 = 4 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v6 )
    {
      v6 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v6 >> 2;
    }
    CRestore::BufferReadBytes(this, pValue, v6);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v6);
    if ( v6 >= 0 )
      return v6 >> 2;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v6);
  return v6 >> 2;
}


// CRestore::ReadInt64  (line 2269, @0x00000000020a3960, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<long long int>
// calls: CRestore::BufferReadBytes
int64 __fastcall CRestore::ReadInt64(
        CRestore *const this,
        const char *pname,
        int64 *pValue,
        int nElems,
        int nBytesAvailable)
{
  int v7; // ebx

  v7 = 8 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v7 )
    {
      v7 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v7 >> 3;
    }
    CRestore::BufferReadBytes(this, pValue, v7);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v7);
    if ( v7 >= 0 )
      return v7 >> 3;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v7);
  return v7 >> 3;
}


// CRestore::ReadUInt64  (line 2274, @0x00000000020a39d0, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<long long unsigned int>
// calls: CRestore::BufferReadBytes
uint64 __fastcall CRestore::ReadUInt64(
        CRestore *const this,
        const char *pname,
        uint64 *pValue,
        int nElems,
        int nBytesAvailable)
{
  int v7; // ebx

  v7 = 8 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v7 )
    {
      v7 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v7 >> 3;
    }
    CRestore::BufferReadBytes(this, pValue, v7);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v7);
    if ( v7 >= 0 )
      return v7 >> 3;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v7);
  return v7 >> 3;
}


// CRestore::ReadBool  (line 2281, @0x00000000020a3a40, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<bool>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadBool(CRestore *const this, bool *pValue, int nElems, int nBytesAvailable)
{
  if ( nBytesAvailable != 0 )
  {
    if ( nElems < nBytesAvailable )
    {
      CRestore::BufferReadBytes(this, pValue, nElems);
LABEL_4:
      CRestore::BufferReadBytes(this, 0, nBytesAvailable - nElems);
      return nElems;
    }
    CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
    return nBytesAvailable;
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, nElems);
    if ( nElems < 0 )
      goto LABEL_4;
    return nElems;
  }
}


// CRestore::ReadFloat  (line 2289, @0x00000000020a3ac0, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<float>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadFloat(CRestore *const this, float *pValue, int nElems, int nBytesAvailable)
{
  int v6; // ebx

  v6 = 4 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v6 )
    {
      v6 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v6 >> 2;
    }
    CRestore::BufferReadBytes(this, pValue, v6);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v6);
    if ( v6 >= 0 )
      return v6 >> 2;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v6);
  return v6 >> 2;
}


// CRestore::ReadFloat64  (line 2295, @0x00000000020a3b30, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<double>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadFloat64(CRestore *const this, float64 *pValue, int nElems, int nBytesAvailable)
{
  int v6; // ebx

  v6 = 8 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v6 )
    {
      v6 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v6 >> 3;
    }
    CRestore::BufferReadBytes(this, pValue, v6);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v6);
    if ( v6 >= 0 )
      return v6 >> 3;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v6);
  return v6 >> 3;
}


// CRestore::ReadData  (line 2302, @0x00000000020a3ba0, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<char>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadData(CRestore *const this, const char *pname, char *pData, int size, int nBytesAvailable)
{
  if ( nBytesAvailable != 0 )
  {
    if ( size < nBytesAvailable )
    {
      CRestore::BufferReadBytes(this, pData, size);
LABEL_4:
      CRestore::BufferReadBytes(this, 0, nBytesAvailable - size);
      return size;
    }
    CRestore::BufferReadBytes(this, pData, nBytesAvailable);
    return nBytesAvailable;
  }
  else
  {
    CRestore::BufferReadBytes(this, pData, size);
    if ( size < 0 )
      goto LABEL_4;
    return size;
  }
}


// CRestore::ReadString  (line 2309, @0x00000000020a3790, libserver.so)  // inlines: BufferPointer, BufferSkipBytes, V_strlen, V_strncpy<int>
// calls: strlen, CRestore::BufferReadBytes, _V_strncpy
void __fastcall CRestore::ReadString(CRestore *const this, char *pDest, int nSizeDest, int nBytesAvailable)
{
  CSaveRestoreSegment *m_pData; // rax
  char *pCurrentData; // r12

  m_pData = this->m_pData;
  if ( m_pData != 0 )
  {
    pCurrentData = m_pData->pCurrentData;
    if ( nBytesAvailable == 0 )
    {
      if ( pCurrentData != 0 )
        nBytesAvailable = strlen(m_pData->pCurrentData) + 1;
      else
        nBytesAvailable = 1;
    }
  }
  else
  {
    if ( nBytesAvailable == 0 )
      nBytesAvailable = 1;
    pCurrentData = 0;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable);
  _V_strncpy(pDest, pCurrentData, nSizeDest);
}


// CRestore::ReadString  (line 2321, @0x00000000020a3570, libserver.so)  // inlines: BufferPointer, BufferSkipBytes, operator=
// calls: CRestore::BufferReadBytes, CEntitySystem::AllocPooledString
int __fastcall CRestore::ReadString(CRestore *const this, string_t *pValue, int nElems, int nBytesAvailable)
{
  CSaveRestoreSegment *m_pData; // rdx
  const char *pCurrentData; // rbx
  unsigned __int64 v7; // r14
  int v9; // r12d
  UtlSymLargeId_t v13; // [rsp+20h] [rbp-40h]

  m_pData = this->m_pData;
  if ( m_pData != 0 )
  {
    pCurrentData = m_pData->pCurrentData;
    v7 = &pCurrentData[nBytesAvailable];
    if ( v7 <= pCurrentData )
    {
LABEL_14:
      v9 = 0;
      goto LABEL_11;
    }
  }
  else
  {
    pCurrentData = 0;
    v7 = nBytesAvailable;
    if ( nBytesAvailable == 0 )
      goto LABEL_14;
  }
  if ( nElems <= 0 )
    goto LABEL_14;
  v9 = 0;
  do
  {
    if ( *pCurrentData != 0 )
    {
      CEntitySystem::AllocPooledString(g_pEntitySystem, pCurrentData);
      pValue->u.m_Id = v13;
    }
    else
    {
      pValue->u.m_Id = 0;
    }
    while ( *pCurrentData != 0 )
      ++pCurrentData;
    ++pCurrentData;
    ++v9;
    ++pValue;
  }
  while ( v7 > pCurrentData && nElems > v9 );
LABEL_11:
  CRestore::BufferReadBytes(this, 0, nBytesAvailable);
  return v9;
}


// CRestore::ReadString  (line 2345, @0x00000000020a3660, libserver.so)  // inlines: BufferPointer, BufferSkipBytes
// calls: CUtlString::Set, CRestore::BufferReadBytes
int __fastcall CRestore::ReadString(
        CRestore *const this,
        const char *pname,
        CUtlString *pValue,
        int nElems,
        int nBytesAvailable)
{
  CSaveRestoreSegment *m_pData; // rax
  const char *pCurrentData; // rbx
  unsigned __int64 v8; // r12
  int v10; // r15d

  m_pData = this->m_pData;
  if ( m_pData != 0 )
  {
    pCurrentData = m_pData->pCurrentData;
    v8 = &pCurrentData[nBytesAvailable];
    if ( v8 <= pCurrentData )
    {
LABEL_11:
      v10 = 0;
      goto LABEL_9;
    }
  }
  else
  {
    v8 = nBytesAvailable;
    pCurrentData = 0;
    if ( nBytesAvailable == 0 )
      goto LABEL_11;
  }
  if ( nElems <= 0 )
    goto LABEL_11;
  v10 = 0;
  do
  {
    CUtlString::Set(pValue, pCurrentData);
    for ( ; *pCurrentData != 0; ++pCurrentData )
      ;
    ++pCurrentData;
    ++v10;
    ++pValue;
  }
  while ( v8 > pCurrentData && nElems > v10 );
LABEL_9:
  CRestore::BufferReadBytes(this, 0, nBytesAvailable);
  return v10;
}


// CRestore::ReadVector  (line 2370, @0x00000000020a3320, libserver.so)
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadVector(CRestore *const this, Vector *pValue)
{
  CRestore::BufferReadBytes(this, pValue, 12);
  return 1;
}


// CRestore::ReadVector  (line 2378, @0x00000000020a4160, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<Vector>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadVector(
        CRestore *const this,
        const char *pname,
        Vector *pValue,
        int nElems,
        int nBytesAvailable)
{
  int v7; // ebx
  int v8; // r13d

  v7 = 12 * nElems;
  v8 = 12 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v7 )
    {
      v8 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v8 / 0xCuLL;
    }
    CRestore::BufferReadBytes(this, pValue, v7);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v7);
    if ( v7 >= 0 )
      return v8 / 0xCuLL;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v7);
  return v8 / 0xCuLL;
}


// CRestore::ReadVector2D  (line 2383, @0x00000000020a3340, libserver.so)
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadVector2D(CRestore *const this, Vector2D *pValue)
{
  CRestore::BufferReadBytes(this, pValue, 8);
  return 1;
}


// CRestore::ReadVector2D  (line 2391, @0x00000000020a3c30, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<Vector2D>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadVector2D(
        CRestore *const this,
        const char *pname,
        Vector2D *pValue,
        int nElems,
        int nBytesAvailable)
{
  int v7; // ebx

  v7 = 8 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v7 )
    {
      v7 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v7 >> 3;
    }
    CRestore::BufferReadBytes(this, pValue, v7);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v7);
    if ( v7 >= 0 )
      return v7 >> 3;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v7);
  return v7 >> 3;
}


// CRestore::ReadQuaternion  (line 2396, @0x00000000020a3360, libserver.so)
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadQuaternion(CRestore *const this, Quaternion *pValue)
{
  CRestore::BufferReadBytes(this, pValue, 16);
  return 1;
}


// CRestore::ReadQuaternion  (line 2404, @0x00000000020a3ca0, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<Quaternion>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadQuaternion(
        CRestore *const this,
        const char *pname,
        Quaternion *pValue,
        int nElems,
        int nBytesAvailable)
{
  int v7; // ebx

  v7 = 16 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v7 )
    {
      v7 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v7 >> 4;
    }
    CRestore::BufferReadBytes(this, pValue, v7);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v7);
    if ( v7 >= 0 )
      return v7 >> 4;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v7);
  return v7 >> 4;
}


// CRestore::ReadVMatrix  (line 2410, @0x00000000020a3d10, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<VMatrix>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadVMatrix(
        CRestore *const this,
        const char *pname,
        VMatrix *pValue,
        int nElems,
        int nBytesAvailable)
{
  int v7; // ebx

  v7 = nElems << 6;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v7 )
    {
      v7 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v7 >> 6;
    }
    CRestore::BufferReadBytes(this, pValue, v7);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v7);
    if ( v7 >= 0 )
      return v7 >> 6;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v7);
  return v7 >> 6;
}


// CRestore::ReadVMatrixWorldspace  (line 2416, @0x00000000020a3380, libserver.so)  // inlines: PostTranslate, VMatrixOffset
// calls: CGameSaveRestoreInfo::GetLandmark, CRestore::BufferReadBytes, VMatrix::operator=
int __fastcall CRestore::ReadVMatrixWorldspace(
        CRestore *const this,
        const char *pname,
        VMatrix *pValue,
        int nElems,
        int nBytesAvailable)
{
  VMatrix *v8; // r13
  const Vector v10; // [rsp+4h] [rbp-7Ch]
  VMatrix tmp; // [rsp+10h] [rbp-70h] BYREF

  v10 = *CGameSaveRestoreInfo::GetLandmark(this->m_pGameInfo);
  if ( nElems > 0 )
  {
    v8 = &pValue[(nElems - 1) + 1];
    do
    {
      CRestore::BufferReadBytes(this, &tmp, 64);
      VMatrix::operator=(pValue++, &tmp);
      pValue[-1].m[0][3] = v10.x + pValue[-1].m[0][3];
      pValue[-1].m[1][3] = v10.y + pValue[-1].m[1][3];
      pValue[-1].m[2][3] = v10.z + pValue[-1].m[2][3];
    }
    while ( pValue != v8 );
  }
  return nElems;
}


// CRestore::ReadMatrix3x4Worldspace  (line 2430, @0x00000000020a3450, libserver.so)  // inlines: Matrix3x4Offset, SetOrigin, operator+=
// calls: CGameSaveRestoreInfo::GetLandmark, CRestore::BufferReadBytes, MatrixCopy
int __fastcall CRestore::ReadMatrix3x4Worldspace(
        CRestore *const this,
        const char *pname,
        matrix3x4_t *pValue,
        int nElems,
        int nBytesAvailable)
{
  matrix3x4_t *v8; // r13
  float v9; // xmm0_4
  float v10; // xmm2_4
  const Vector v12; // [rsp+4h] [rbp-6Ch]
  matrix3x4_t tmp; // [rsp+10h] [rbp-60h] BYREF

  v12 = *CGameSaveRestoreInfo::GetLandmark(this->m_pGameInfo);
  if ( nElems > 0 )
  {
    v8 = &pValue[(nElems - 1) + 1];
    do
    {
      CRestore::BufferReadBytes(this, &tmp, 48);
      MatrixCopy(&tmp, pValue++);
      v9 = v12.z + tmp.m_flMatVal[2][3];
      v10 = v12.x + tmp.m_flMatVal[0][3];
      pValue[-1].m_flMatVal[1][3] = v12.y + tmp.m_flMatVal[1][3];
      pValue[-1].m_flMatVal[2][3] = v9;
      pValue[-1].m_flMatVal[0][3] = v10;
    }
    while ( pValue != v8 );
  }
  return nElems;
}


// CRestore::ReadNetworkOriginCellQuantizedVector  (line 2444, @0x00000000020d95c0, libserver.so)  // inlines: AddMultipleToTail, BufferSkipBytes, CUtlMemory, CUtlVector, CUtlVectorBase, CellFromCoord, CellInCoord, CoordFromCell, EnsureCount, Float2Int, GetElement, GetEncoder, GetQuantizedFloatEncoderByIndex, GrowMemory, GrowVector, InsertMultipleBefore, LatchComponent, NetworkComponentChanged, NetworkStateChanged, Purge, ReadSimple<Vector>, RemoveAll, Set, VectorAdd, operator+, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<Vector, int>::Grow, CRestore::BufferReadBytes, CFmtStrN<256, false>::CFmtStrN, Warning, CUtlMemory<Vector, int>::Purge, CGameSaveRestoreInfo::GetLandmark, __stack_chk_fail, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "CNetworkOriginCellCoordQuantizedVector m_cell%c cell %d is outside of cell bounds (0->%d)
int __fastcall CRestore::ReadNetworkOriginCellQuantizedVector(
        CRestore *const this,
        bool bPositionVector,
        const char *pname,
        CNetworkOriginCellCoordQuantizedVector *pValue,
        int nElems,
        int nBytesAvailable)
{
  const Vector *Landmark; // rax
  vec_t x; // xmm6_4
  char *m_pMemory; // rsi
  int v13; // ebx
  uint16 *p_m_cellZ; // r12
  uint16 *v15; // r13
  __int64 v16; // rbx
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v20; // r15d
  int v21; // eax
  void (__fastcall ***v22)(_QWORD, uint16 *, __int64, __int64, __int64); // rdi
  int v23; // edx
  int v24; // eax
  float v25; // xmm0_4
  float v26; // xmm1_4
  __int64 v27; // rax
  float v28; // xmm0_4
  float v29; // xmm1_4
  uint16 *v30; // rdx
  void (__fastcall ***v31)(_QWORD, uint16 *, signed __int64, __int64, __int64); // rdi
  uint16 *v32; // rax
  void (__fastcall ***v33)(_QWORD, uint16 *, __int64, __int64, __int64); // rdi
  __int64 v34; // rdi
  int v35; // eax
  uint16 *v36; // rax
  unsigned __int64 j; // [rsp+0h] [rbp-200h]
  float z; // [rsp+1Ch] [rbp-1E4h]
  float basePosition; // [rsp+20h] [rbp-1E0h]
  float basePosition_4; // [rsp+24h] [rbp-1DCh]
  uint16 *basePosition_8; // [rsp+28h] [rbp-1D8h]
  __int64 v42; // [rsp+38h] [rbp-1C8h]
  uint16 *v43; // [rsp+48h] [rbp-1B8h]
  uint16 *v44; // [rsp+50h] [rbp-1B0h]
  int i; // [rsp+58h] [rbp-1A8h]
  float k; // [rsp+5Ch] [rbp-1A4h]
  float v47[4]; // [rsp+60h] [rbp-1A0h]
  CUtlVector<Vector,CUtlMemory<Vector,int> > dummy; // [rsp+70h] [rbp-190h] BYREF
  uint16 *v49; // [rsp+90h] [rbp-170h] BYREF
  uint16 *v50; // [rsp+98h] [rbp-168h]
  uint16 *v51; // [rsp+A0h] [rbp-160h]
  CFmtStrN<256,false> v52; // [rsp+B0h] [rbp-150h] BYREF
  unsigned __int64 v53; // [rsp+1C8h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  if ( bPositionVector )
    Landmark = CGameSaveRestoreInfo::GetLandmark(this->m_pGameInfo);
  else
    Landmark = &vec3_origin;
  x = Landmark->x;
  dummy.m_Size = 0;
  basePosition = x;
  z = Landmark->z;
  basePosition_4 = Landmark->y;
  dummy.m_Memory.m_pMemory = 0;
  dummy.m_Memory.m_nAllocationCount = 0;
  dummy.m_Memory.m_nGrowSize = 0;
  if ( nElems <= 0 )
  {
    m_pMemory = 0;
  }
  else
  {
    CUtlMemory<Vector,int>::Grow(&dummy.m_Memory, nElems);
    m_pMemory = dummy.m_Memory.m_pMemory;
    dummy.m_Size = nElems;
  }
  v13 = 12 * nElems;
  if ( nBytesAvailable != 0 && v13 > nBytesAvailable )
    v13 = nBytesAvailable;
  CRestore::BufferReadBytes(this, m_pMemory, v13);
  if ( nBytesAvailable > v13 )
    CRestore::BufferReadBytes(this, 0, nBytesAvailable - v13);
  p_m_cellZ = &pValue->m_cellZ;
  v42 = 0;
  i = 0;
  for ( j = v13 / 0xCuLL; dummy.m_Size > i; ++v42 )
  {
    v15 = p_m_cellZ - 8;
    v16 = 0;
    v17 = basePosition_4 + dummy.m_Memory.m_pMemory[v42].y;
    v18 = z + dummy.m_Memory.m_pMemory[v42].z;
    v47[0] = basePosition + dummy.m_Memory.m_pMemory[v42].x;
    v47[1] = v17;
    v47[2] = v18;
    for ( k = v47[0]; ; k = v47[v16] )
    {
      if ( k == *&v15[2 * v16] )
        goto LABEL_13;
      *&v15[2 * v16] = k;
      if ( v16 != 0 )
      {
        v36 = p_m_cellZ + 10;
        if ( v16 == 1 )
          v36 = p_m_cellZ + 6;
        v44 = v36;
        if ( k < 0.0 )
        {
LABEL_60:
          v20 = (k + 16384.0) / 256;
          goto LABEL_21;
        }
      }
      else
      {
        v44 = p_m_cellZ + 2;
        if ( k < 0.0 )
          goto LABEL_60;
      }
      v20 = k / 256 + 64;
LABEL_21:
      v21 = 1 << v16;
      if ( k < -16384.0 || k > 16384.0 )
      {
        if ( (p_m_cellZ[1] & v21) == 0 )
        {
          v33 = *(p_m_cellZ + 4);
          p_m_cellZ[1] |= v21;
          if ( v33 != 0 )
            (**v33)(v33, p_m_cellZ - 8, 18, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          qmemcpy(&v49, "XYZ", 3);
          CFmtStrN<256,false>::CFmtStrN(
            &v52,
            "CNetworkOriginCellCoordQuantizedVector m_cell%c cell %d is outside of cell bounds (0->%d) @(%f %f %f)\n",
            *(&v49 + v16),
            v20,
            128,
            *(p_m_cellZ - 4),
            *(p_m_cellZ - 3),
            *(p_m_cellZ - 2));
          v34 = *(p_m_cellZ + 4);
          if ( v34 != 0 )
            (*(*v34 + 8LL))(v34, v52.m_szBuf);
          else
            Warning("%s", v52.m_szBuf);
        }
        v35 = 0;
        if ( v20 >= 0 )
          v35 = v20;
        v20 = 127;
        if ( v35 <= 127 )
          v20 = v35;
        if ( k > 16384.0 )
        {
          v51 = p_m_cellZ;
          v49 = p_m_cellZ - 2;
          v43 = p_m_cellZ - 2;
          v23 = (v20 << 8) - 0x4000;
          v50 = p_m_cellZ - 1;
          basePosition_8 = p_m_cellZ - 1;
          k = 16384.0;
          *(&v49)[v16] = v20;
          v24 = abs32(v23);
          goto LABEL_28;
        }
        if ( k < -16384.0 )
        {
          v51 = p_m_cellZ;
          v49 = p_m_cellZ - 2;
          v43 = p_m_cellZ - 2;
          v23 = (v20 << 8) - 0x4000;
          v50 = p_m_cellZ - 1;
          basePosition_8 = p_m_cellZ - 1;
          k = -16384.0;
          *(&v49)[v16] = v20;
          v24 = abs32(v23);
LABEL_56:
          v25 = v24 + k;
          goto LABEL_29;
        }
      }
      else if ( (p_m_cellZ[1] & v21) != 0 && 16384.0 - fabs(k) > 1.0 )
      {
        v22 = *(p_m_cellZ + 4);
        p_m_cellZ[1] &= ~v21;
        if ( v22 != 0 )
          (**v22)(v22, p_m_cellZ - 8, 18, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      }
      v51 = p_m_cellZ;
      v49 = p_m_cellZ - 2;
      v43 = p_m_cellZ - 2;
      v23 = (v20 << 8) - 0x4000;
      v50 = p_m_cellZ - 1;
      basePosition_8 = p_m_cellZ - 1;
      *(&v49)[v16] = v20;
      v24 = abs32(v23);
      if ( k < 0.0 )
        goto LABEL_56;
LABEL_28:
      v25 = k - v24;
LABEL_29:
      v26 = 256.0;
      if ( v25 <= 256.0 )
        v26 = fmaxf(0.0, v25);
      v27 = g_pQuantizedFloatEncoders + 32LL * v44[2];
      v28 = *(v27 + 12);
      if ( v26 <= v28 )
        v28 = fmaxf(*(v27 + 8), v26);
      v29 = v23;
      v30 = p_m_cellZ + 2;
      *v44 = v28;
      *&v15[2 * v16] = v29 + v28;
      if ( v16 != 0 )
      {
        v30 = p_m_cellZ + 6;
        if ( v16 != 1 )
          v30 = p_m_cellZ + 10;
      }
      v31 = *(p_m_cellZ + 4);
      if ( v31 != 0 )
      {
        (**v31)(v31, p_m_cellZ - 8, v30 - v15, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v31 = *(p_m_cellZ + 4);
      }
      if ( v16 != 0 )
      {
        v32 = basePosition_8;
        if ( v16 != 1 )
          v32 = p_m_cellZ;
        v43 = v32;
      }
      if ( v31 != 0 )
        (**v31)(v31, p_m_cellZ - 8, v43 - v15, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
LABEL_13:
      if ( ++v16 == 3 )
        break;
    }
    ++i;
    p_m_cellZ += 28;
  }
  dummy.m_Size = 0;
  if ( (dummy.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&dummy.m_Memory);
    if ( (dummy.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&dummy.m_Memory);
  }
  return j;
}


// CRestore::ReadNetworkQuantizedFloat  (line 2460, @0x00000000020a3d80, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<CNetworkedQuantizedFloat>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadNetworkQuantizedFloat(
        CRestore *const this,
        const char *pname,
        CNetworkedQuantizedFloat *pValue,
        int nElems,
        int nBytesAvailable)
{
  int v7; // ebx

  v7 = 8 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v7 )
    {
      v7 = nBytesAvailable;
      CRestore::BufferReadBytes(this, pValue, nBytesAvailable);
      return v7 >> 3;
    }
    CRestore::BufferReadBytes(this, pValue, v7);
  }
  else
  {
    CRestore::BufferReadBytes(this, pValue, v7);
    if ( v7 >= 0 )
      return v7 >> 3;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v7);
  return v7 >> 3;
}


// CRestore::ReadNetworkQuantizedVector  (line 2465, @0x00000000020a3df0, libserver.so)  // inlines: BufferSkipBytes, CNetworkOriginQuantizedVector, CNetworkedQuantizedFloat, GetElement, GetEncoder, GetQuantizedFloatEncoderByIndex, Init<true>, LatchComponent, NetworkComponentChanged, NetworkStateChanged, ReadSimple<CNetworkOriginQuantizedVector>, Set, operator[]
// calls: FindOrCreateQuantizedFloatEncoder, CRestore::BufferReadBytes
// strings: "m_vecX", "m_vecY", "m_vecZ"
int __fastcall CRestore::ReadNetworkQuantizedVector(
        CRestore *const this,
        const char *pname,
        CNetworkOriginQuantizedVector *pValue,
        int nElems,
        int nBytesAvailable)
{
  vec_t z; // eax
  __int64 v10; // rax
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm0_4
  int v16; // eax
  unsigned __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rbx
  CNetworkedQuantizedFloat *p_m_vecY; // rax
  unsigned __int64 v21; // r14
  float v22; // xmm0_4
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  __int64 v25; // rcx
  float v26; // xmm1_4
  CNetworkedQuantizedFloat *p_m_vecZ; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  signed __int64 v29; // rdx
  int v30; // [rsp+8h] [rbp-68h]
  int v31; // [rsp+8h] [rbp-68h]
  CNetworkedQuantizedFloat *v32; // [rsp+8h] [rbp-68h]
  CNetworkOriginQuantizedVector dummy; // [rsp+10h] [rbp-60h] BYREF

  dummy.m_vecX.m_Value = 0.0;
  z = vec3_origin.z;
  *&dummy.m_Value.x = *&vec3_origin.x;
  dummy.m_Value.z = z;
  dummy.m_vecX.m_nEncoder = FindOrCreateQuantizedFloatEncoder(1, "m_vecX", 2524840829LL, 19, 4, -16384.0, 16384.0);
  v10 = g_pQuantizedFloatEncoders + 32LL * dummy.m_vecX.m_nEncoder;
  v11 = *(v10 + 12);
  if ( v11 >= 0.0 )
    v11 = fmaxf(*(v10 + 8), 0.0);
  dummy.m_vecX.m_Value = v11;
  dummy.m_vecY.m_Value = 0.0;
  dummy.m_vecY.m_nEncoder = FindOrCreateQuantizedFloatEncoder(1, "m_vecY", 2625667396LL, 19, 4, -16384.0, 16384.0);
  v12 = g_pQuantizedFloatEncoders + 32LL * dummy.m_vecY.m_nEncoder;
  v13 = *(v12 + 12);
  if ( v13 >= 0.0 )
    v13 = fmaxf(*(v12 + 8), 0.0);
  dummy.m_vecY.m_Value = v13;
  dummy.m_vecZ.m_Value = 0.0;
  dummy.m_vecZ.m_nEncoder = FindOrCreateQuantizedFloatEncoder(1, "m_vecZ", 1430821094, 19, 4, -16384.0, 16384.0);
  v14 = g_pQuantizedFloatEncoders + 32LL * dummy.m_vecZ.m_nEncoder;
  v15 = *(v14 + 12);
  if ( v15 >= 0.0 )
    v15 = fmaxf(*(v14 + 8), 0.0);
  dummy.m_vecZ.m_Value = v15;
  v16 = 48 * nElems;
  dummy.m_pStateChanged = 0;
  v17 = 48 * nElems;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v17 )
    {
      v17 = nBytesAvailable;
      CRestore::BufferReadBytes(this, &dummy, nBytesAvailable);
      goto LABEL_9;
    }
    v31 = v16;
    CRestore::BufferReadBytes(this, &dummy, v16);
    v18 = v31;
    goto LABEL_15;
  }
  v30 = v16;
  CRestore::BufferReadBytes(this, &dummy, v16);
  v18 = v30;
  if ( v30 < 0 )
LABEL_15:
    CRestore::BufferReadBytes(this, 0, nBytesAvailable - v18);
LABEL_9:
  v19 = 0;
  p_m_vecY = &pValue->m_vecY;
  v21 = v17 / 0x30;
  do
  {
    v22 = *(&dummy.m_Value.x + v19);
    if ( v22 != *(&pValue->m_Value.x + v19) )
    {
      *(&pValue->m_Value.x + v19) = v22;
      p_m_vecX = &pValue->m_vecX;
      if ( v19 != 0 )
      {
        p_m_vecX = p_m_vecY;
        if ( v19 != 1 )
          p_m_vecX = &pValue->m_vecZ;
      }
      v25 = g_pQuantizedFloatEncoders + 32LL * p_m_vecX->m_nEncoder;
      v26 = *(v25 + 12);
      if ( v22 <= v26 )
        v26 = fmaxf(*(v25 + 8), v22);
      p_m_vecX->m_Value = v26;
      *(&pValue->m_Value.x + v19) = v26;
      p_m_vecZ = &pValue->m_vecX;
      if ( v19 != 0 )
      {
        p_m_vecZ = p_m_vecY;
        if ( v19 != 1 )
          p_m_vecZ = &pValue->m_vecZ;
      }
      m_pStateChanged = pValue->m_pStateChanged;
      v29 = p_m_vecZ - pValue;
      if ( m_pStateChanged != 0 )
      {
        v32 = p_m_vecY;
        (*m_pStateChanged->_vptr_INetworkStateChangedRouter)(m_pStateChanged, pValue, v29, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        p_m_vecY = v32;
      }
    }
    ++v19;
  }
  while ( v19 != 3 );
  return v21;
}


// CRestore::ReadInterval  (line 2476, @0x00000000020a40f0, libserver.so)  // inlines: BufferSkipBytes, ReadSimple<interval_t>
// calls: CRestore::BufferReadBytes
int __fastcall CRestore::ReadInterval(
        CRestore *const this,
        const char *pname,
        interval_t *interval,
        int count,
        int nBytesAvailable)
{
  int v7; // ebx

  v7 = 8 * count;
  if ( nBytesAvailable != 0 )
  {
    if ( nBytesAvailable <= v7 )
    {
      v7 = nBytesAvailable;
      CRestore::BufferReadBytes(this, interval, nBytesAvailable);
      return v7 >> 3;
    }
    CRestore::BufferReadBytes(this, interval, v7);
  }
  else
  {
    CRestore::BufferReadBytes(this, interval, v7);
    if ( v7 >= 0 )
      return v7 >> 3;
  }
  CRestore::BufferReadBytes(this, 0, nBytesAvailable - v7);
  return v7 >> 3;
}


// CRestore::EntityFromIndex  (line 2486, @0x00000000020a41f0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CGameSaveRestoreInfo::GetEntityInfo, CGameSaveRestoreInfo::NumEntities
// callers: CRestore::ReadEntityPtr, CRestore::ReadEHandle
// globals: CEntityHandle::gm_pEntityList
CEntityInstance *__fastcall CRestore::EntityFromIndex(CRestore *const this, int entityIndex)
{
  CGameSaveRestoreInfo *m_pGameInfo; // rdi
  int i; // ebx
  entitytable_t *EntityInfo; // rax
  CEntityInstance *v7; // rdx
  uint32 m_Index; // ecx
  unsigned __int16 v10; // si
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax

  m_pGameInfo = this->m_pGameInfo;
  if ( m_pGameInfo != 0 && entityIndex >= 0 )
  {
    for ( i = 0; i < CGameSaveRestoreInfo::NumEntities(m_pGameInfo); ++i )
    {
      EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(this->m_pGameInfo, i);
      if ( EntityInfo->id == entityIndex )
      {
        m_Index = EntityInfo->hEnt.m_Index;
        v7 = 0;
        if ( m_Index + 2 > 1 )
        {
          v10 = EntityInfo->hEnt.m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
              return v12->m_pInstance;
          }
        }
        return v7;
      }
      m_pGameInfo = this->m_pGameInfo;
    }
  }
  return 0;
}


// CRestore::ReadEntityPtr  (line 2505, @0x00000000020a42a0, libserver.so)  // inlines: memset
// calls: CRestore::EntityFromIndex, memset
int __fastcall CRestore::ReadEntityPtr(
        CRestore *const this,
        const char *pname,
        CEntityInstance **ppEntity,
        int count,
        int nBytesAvailable)
{
  unsigned __int64 v7; // r15
  int v10; // [rsp+Ch] [rbp-1034h]
  int entityArray[1036]; // [rsp+10h] [rbp-1030h] BYREF

  v10 = (*(this->_vptr_IRestore + 24))(this, entityArray, count, nBytesAvailable);
  if ( v10 > 0 )
  {
    v7 = 0;
    do
    {
      ppEntity[v7 / 4] = CRestore::EntityFromIndex(this, entityArray[v7 / 4]);
      v7 += 4LL;
    }
    while ( v7 != 4LL * (v10 - 1) + 4 );
  }
  if ( count > v10 )
    memset(&ppEntity[v10], 0, 8LL * (count - v10));
  return v10;
}


// CRestore::ReadEHandle  (line 2527, @0x00000000020a4370, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, V_memset, memset, operator=
// calls: CRestore::EntityFromIndex, memset
int __fastcall CRestore::ReadEHandle(
        CRestore *const this,
        const char *pname,
        CEntityHandle *pEHandle,
        int count,
        int nBytesAvailable)
{
  int v6; // eax
  int v7; // r13d
  int *v8; // r15
  CEntityHandle *v9; // r14
  int *v10; // r12
  CEntityIdentity *m_pEntity; // rcx
  int v12; // eax
  __int16 v13; // si
  __int16 m_Index; // cx
  CEntityInstance *v15; // rax
  int entityArray[1036]; // [rsp+10h] [rbp-1030h] BYREF

  v6 = (*(this->_vptr_IRestore + 24))(this, entityArray, count, nBytesAvailable);
  v7 = v6;
  if ( v6 > 0 )
  {
    v8 = entityArray;
    v9 = pEHandle;
    v10 = &entityArray[v6 - 1 + 1];
    do
    {
      while ( 1 )
      {
        v15 = CRestore::EntityFromIndex(this, *v8);
        if ( v15 != 0 )
        {
          m_pEntity = v15->m_pEntity;
          if ( m_pEntity != 0 )
            break;
        }
        ++v8;
        v9->m_Index = -1;
        ++v9;
        if ( v8 == v10 )
          goto LABEL_9;
      }
      v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      m_Index = v9->m_Index;
      ++v8;
      ++v9;
      LOWORD(v9[-1].m_Index) = v13 | m_Index & 0x8000;
      v9[-1].m_Index = (v12 << 15) | v9[-1].m_Index & 0x7FFF;
    }
    while ( v8 != v10 );
  }
LABEL_9:
  if ( count > v7 )
    memset(&pEHandle[v7], 255, 4LL * (count - v7));
  return v7;
}


// CRestore::ReadSingleField  (line 2551, @0x00000000020d1630, libserver.so)  // inlines: FindExistingResourceByName, Init, ThreadInterlockedIncrement, operator++, operator=
// calls: CGameSaveRestoreInfo::LookupResourceFromSaveManifest, CStrongHandle<ResourceBindingVoid_t>::Shutdown, Warning
// callers: CRestore::ReadField, CRestore::ReadFields
// strings: "Bad field type\n", "Attempted to restore FIELD_EMBEDDEDBYREF %s but there is no destination memory\n"
// globals: jpt_20D1662
void __fastcall CRestore::ReadSingleField(
        CRestore *const this,
        const SaveRestoreRecordHeader_t *const header,
        void *pDest,
        datamap_t *pRootMap,
        typedescription_t *pField)
{
  CStrongHandle<ResourceBindingVoid_t> *m_pBinding; // r12
  __int64 fieldType; // rdx
  int v9; // r13d
  int v10; // eax
  int size; // edx
  ISaveRestoreOps *pSaveRestoreOps; // rdi
  unsigned int v13; // r13d
  __int64 v14; // rcx
  int (**vptr_IRestore)(...); // rax
  CGameSaveRestoreInfo *m_pGameInfo; // rdi
  __int64 v17; // rbx
  const char *v18; // r14
  datamap_t *td; // r15
  IResourceSystem *v20; // r13
  CStrongHandle<ResourceBindingVoid_t> v21; // rsi
  void (__fastcall *v22)(CRestore *const, _QWORD); // r12
  int v23; // eax
  typedescription_t *pFielda; // [rsp+0h] [rbp-60h]
  typedescription_t *pFieldb; // [rsp+0h] [rbp-60h]
  typedescription_t *headera; // [rsp+8h] [rbp-58h]
  typedescription_t *headerc; // [rsp+8h] [rbp-58h]
  CStrongHandle<ResourceBindingVoid_t> *hashcode; // [rsp+10h] [rbp-50h] BYREF
  char *v31; // [rsp+18h] [rbp-48h]
  typedescription_t *v32; // [rsp+20h] [rbp-40h]

  m_pBinding = pDest;
  fieldType = pField->fieldType;
  switch ( pField->fieldType )
  {
    case fieldtype_t::FIELD_FLOAT:
      (*(this->_vptr_IRestore + 29))(this, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_STRING:
    case fieldtype_t::FIELD_SOUNDNAME:
      (*(this->_vptr_IRestore + 32))(this, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_VECTOR:
    case fieldtype_t::FIELD_QANGLE:
      (*(this->_vptr_IRestore + 34))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_QUATERNION:
      (*(this->_vptr_IRestore + 36))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_INTEGER:
    case fieldtype_t::FIELD_COLOR32:
      (*(this->_vptr_IRestore + 24))(this, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_BOOLEAN:
      (*(this->_vptr_IRestore + 28))(this, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_SHORT:
      (*(this->_vptr_IRestore + 23))(this, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_CHARACTER:
      (*(this->_vptr_IRestore + 31))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_EMBEDDED:
      if ( (pField->flags & 0x40) != 0 && (m_pBinding = m_pBinding->m_pBinding) == 0 )
      {
        pFieldb = pField;
        v22 = *(this->_vptr_IRestore + 1);
        v23 = (*this->_vptr_IRestore)(this, header, fieldType, pRootMap);
        v22(this, v23 + header->size);
        Warning("Attempted to restore FIELD_EMBEDDEDBYREF %s but there is no destination memory\n", pFieldb->fieldName);
      }
      else
      {
        v9 = pField->fieldSize - 1;
        if ( pField->fieldSize != 0 )
        {
          do
          {
            headera = pField;
            --v9;
            (*(this->_vptr_IRestore + 2))(this, m_pBinding, pField->td, pRootMap);
            pField = headera;
            m_pBinding = (m_pBinding + headera->fieldSizeInBytes);
          }
          while ( v9 != -1 );
        }
      }
      break;
    case fieldtype_t::FIELD_CUSTOM:
      pFielda = pField;
      v10 = (*this->_vptr_IRestore)(this, header, fieldType, pRootMap);
      hashcode = m_pBinding;
      size = header->size;
      pSaveRestoreOps = pFielda->pSaveRestoreOps;
      v32 = pFielda;
      v13 = v10 + size;
      v31 = m_pBinding - pFielda->fieldOffset;
      (*(pSaveRestoreOps->_vptr_ISaveRestoreOps + 1))(pSaveRestoreOps, &hashcode, this);
      (*(this->_vptr_IRestore + 1))(this, v13);
      break;
    case fieldtype_t::FIELD_CLASSPTR:
      (*(this->_vptr_IRestore + 40))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_EHANDLE:
      (*(this->_vptr_IRestore + 41))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_POSITION_VECTOR:
      (*(this->_vptr_IRestore + 39))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_TIME:
      (*(this->_vptr_IRestore + 37))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_TICK:
      (*(this->_vptr_IRestore + 38))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_FUNCTION:
      (*(this->_vptr_IRestore + 21))(this, pRootMap, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_VMATRIX:
      (*(this->_vptr_IRestore + 42))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_VMATRIX_WORLDSPACE:
      (*(this->_vptr_IRestore + 43))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_MATRIX3X4_WORLDSPACE:
      (*(this->_vptr_IRestore + 44))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_INTERVAL:
      (*(this->_vptr_IRestore + 47))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_VECTOR2D:
      (*(this->_vptr_IRestore + 35))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_INTEGER64:
      (*(this->_vptr_IRestore + 26))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_UINT64:
      (*(this->_vptr_IRestore + 27))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_FLOAT64:
      (*(this->_vptr_IRestore + 30))(this, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_UINT:
      (*(this->_vptr_IRestore + 25))(this, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_UTLSTRINGTOKEN:
      (*(this->_vptr_IRestore + 24))(this, &hashcode, 1, header->size);
      LODWORD(m_pBinding->m_pBinding) = hashcode;
      break;
    case fieldtype_t::FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR:
      (*(this->_vptr_IRestore + 45))(this, 0, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_HMATERIAL:
    case fieldtype_t::FIELD_HMODEL:
    case fieldtype_t::FIELD_HRENDERTEXTURE:
      v14 = header->size;
      headerc = pField;
      vptr_IRestore = this->_vptr_IRestore;
      LODWORD(hashcode) = -1;
      vptr_IRestore[24](this, &hashcode, 1, v14);
      m_pGameInfo = this->m_pGameInfo;
      v17 = 0;
      v18 = CGameSaveRestoreInfo::LookupResourceFromSaveManifest(m_pGameInfo, hashcode);
      td = headerc->td;
      v20 = g_pResourceSystem;
      if ( (*(*g_pResourceSystem + 448LL))(g_pResourceSystem, v18) != 0 )
        v17 = (*(*v20 + 256LL))(v20, v18, td, 0);
      if ( m_pBinding->m_pBinding != 0 )
        CStrongHandle<ResourceBindingVoid_t>::Shutdown(m_pBinding);
      m_pBinding->m_pBinding = v17;
      if ( v17 != 0 )
      {
        v21.m_pBinding = v17;
        if ( (*(v17 + 16) & 0x20) != 0 )
        {
          (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v17, 2, m_pBinding);
          v21.m_pBinding = m_pBinding->m_pBinding;
        }
        _InterlockedAdd(&v21.m_pBinding->m_nRefCount.m_value, 1u);
      }
      break;
    case fieldtype_t::FIELD_NETWORK_QUANTIZED_VECTOR:
      (*(this->_vptr_IRestore + 46))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_NETWORK_QUANTIZED_FLOAT:
      (*(this->_vptr_IRestore + 48))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_UTLSTRING:
      (*(this->_vptr_IRestore + 33))(this, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    case fieldtype_t::FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR:
      (*(this->_vptr_IRestore + 45))(this, 1, pField->fieldName, m_pBinding, pField->fieldSize, header->size);
      break;
    default:
      Warning("Bad field type\n", header, pDest);
      break;
  }
}


// CRestore::ReadTime  (line 2774, @0x000000000209cc00, libserver.so)
// calls: CGameSaveRestoreInfo::GetBaseTime
int __fastcall CRestore::ReadTime(
        CRestore *const this,
        const char *pname,
        float *pValue,
        int count,
        int nBytesAvailable)
{
  int result; // eax
  int v10; // ecx
  float *v11; // rdx
  float v12; // xmm1_4
  float baseTime; // [rsp+Ch] [rbp-24h]

  baseTime = CGameSaveRestoreInfo::GetBaseTime(this->m_pGameInfo);
  result = (*(this->_vptr_IRestore + 29))(this, pValue, count, nBytesAvailable);
  v10 = result - 1;
  v11 = &pValue[result - 1];
  if ( result - 1 >= 0 )
  {
    while ( 1 )
    {
      v12 = *v11;
      if ( v12 == -1.7014117e38 )
      {
        *v11 = 0.0;
LABEL_5:
        --v10;
        --v11;
        if ( v10 == -1 )
          return result;
      }
      else
      {
        if ( v12 == -3.4028235e38 || v12 == 3.4028235e38 )
          goto LABEL_5;
        --v10;
        --v11;
        v11[1] = v12 + baseTime;
        if ( v10 == -1 )
          return result;
      }
    }
  }
  return result;
}


// CRestore::ReadTick  (line 2790, @0x000000000209cd50, libserver.so)
// calls: CGameSaveRestoreInfo::GetBaseTick
int __fastcall CRestore::ReadTick(CRestore *const this, const char *pname, int *pValue, int count, int nBytesAvailable)
{
  int v9; // ebx
  int result; // eax
  int v11; // ecx
  int *v12; // rdx
  int v13; // esi

  v9 = CGameSaveRestoreInfo::GetBaseTick(this->m_pGameInfo) + 1;
  result = (*(this->_vptr_IRestore + 24))(this, pValue, count, nBytesAvailable);
  v11 = result - 1;
  v12 = &pValue[result - 1];
  if ( result - 1 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 == 2147483644 )
          break;
        --v11;
        --v12;
        v12[1] = v9 + v13;
        if ( v11 == -1 )
          return result;
      }
      --v11;
      *v12-- = -1;
    }
    while ( v11 != -1 );
  }
  return result;
}


// CRestore::ReadPositionVector  (line 2819, @0x000000000209be10, libserver.so)
int __fastcall CRestore::ReadPositionVector(CRestore *const this, Vector *pValue)
{
  return (*(this->_vptr_IRestore + 39))(this, "position", pValue, 1, 12);
}


// CRestore::ReadPositionVector  (line 2826, @0x000000000209f4e0, libserver.so)  // inlines: operator!=, operator+=
// calls: CGameSaveRestoreInfo::GetLandmark
int __fastcall CRestore::ReadPositionVector(
        CRestore *const this,
        const char *pname,
        Vector *pValue,
        int count,
        int nBytesAvailable)
{
  int result; // eax
  int v10; // ecx
  Vector *v11; // rdx
  float z; // xmm1_4
  float x; // xmm0_4
  float y; // xmm2_4
  const Vector v15; // [rsp+0h] [rbp-30h]

  v15 = *CGameSaveRestoreInfo::GetLandmark(this->m_pGameInfo);
  result = (*(this->_vptr_IRestore + 34))(this, pname, pValue, count, nBytesAvailable);
  v10 = result - 1;
  if ( result - 1 >= 0 )
  {
    v11 = &pValue[v10];
    do
    {
      while ( 1 )
      {
        x = v11->x;
        y = v11->y;
        if ( v11->x == vec3_invalid.x )
          break;
        z = v11->z;
LABEL_4:
        --v10;
        --v11;
        v11[1].x = x + v15.x;
        v11[1].y = y + v15.y;
        v11[1].z = z + v15.z;
        if ( v10 == -1 )
          return result;
      }
      z = v11->z;
      if ( y != vec3_invalid.y || z != vec3_invalid.z )
        goto LABEL_4;
      --v10;
      --v11;
    }
    while ( v10 != -1 );
  }
  return result;
}


// CRestore::ReadFunction  (line 2842, @0x00000000020a3710, libserver.so)  // inlines: BufferPointer, BufferSkipBytes
// calls: CRestore::BufferReadBytes, UTIL_FunctionFromName
int __fastcall CRestore::ReadFunction(
        CRestore *const this,
        datamap_t *pMap,
        inputfunc_t *pValue,
        int count,
        int nBytesAvailable)
{
  CSaveRestoreSegment *m_pData; // rax
  const char *pCurrentData; // r12

  m_pData = this->m_pData;
  if ( m_pData != 0 )
    pCurrentData = m_pData->pCurrentData;
  else
    pCurrentData = 0;
  CRestore::BufferReadBytes(this, 0, nBytesAvailable);
  if ( *pCurrentData != 0 )
  {
    *pValue = UTIL_FunctionFromName(pMap, pCurrentData);
  }
  else
  {
    pValue->__pfn = 0;
    pValue->__delta = 0;
  }
  return 0;
}


