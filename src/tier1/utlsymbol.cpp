// Reconstructed from DWARF by pahole; not original source.

// src/tier1/utlsymbol.cpp:56
class CCleanupUtlSymbolTable {
	~CCleanupUtlSymbolTable();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_utlsymbol.cpp  (line 0, @0x0000000001a673f0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// calls: __cxa_atexit
// globals: __dso_handle, UNSPECIFIED_LOGGING_COLOR, g_CleanupSymbolTable, CCleanupUtlSymbolTable::~CCleanupUtlSymbolTable()
void __cdecl GLOBAL__sub_I_utlsymbol_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  __cxa_atexit(CCleanupUtlSymbolTable::~CCleanupUtlSymbolTable, &g_CleanupSymbolTable, &_dso_handle);
}


// CUtlSymbol::Initialize  (line 37, @0x0000000002f89530, libserver.so)  // inlines: CThreadMutex, CThreadRWLock, CUtlSymbolTableMT, ~CThreadEvent, ~CThreadMutex
// calls: operator new, CUtlSymbolTable::CUtlSymbolTable, pthread_mutexattr_init, pthread_mutexattr_settype, pthread_mutex_init, CThreadEvent::CThreadEvent(bool), operator delete, _Unwind_Resume, pthread_mutex_destroy, CUtlSymbolTable::~CUtlSymbolTable, CThreadSyncObject::~CThreadSyncObject()
// callers: CUtlSymbol::CurrTable, CUtlSymbol::String, CUtlSymbol::CUtlSymbol
// globals: CUtlSymbol::Initialize(void)::symbolsInitialized, CUtlSymbol::s_pSymbolTable
void __cdecl CUtlSymbol::Initialize()
{
  char *v0; // rbx

  if ( !CUtlSymbol::Initialize(void)::symbolsInitialized )
  {
    v0 = operator new(0x1A0u);
    CUtlSymbolTable::CUtlSymbolTable(v0, 0, 32, 0);
    pthread_mutexattr_init(v0 + 30);
    pthread_mutexattr_settype(v0 + 30, 1);
    pthread_mutex_init(v0 + 2, v0 + 30);
    CThreadEvent::CThreadEvent((v0 + 144), 0);
    CThreadEvent::CThreadEvent((v0 + 272), 1);
    *(v0 + 100) = 0;
    *(v0 + 101) = 0;
    *(v0 + 102) = 0;
    CUtlSymbol::s_pSymbolTable = v0;
    CUtlSymbol::Initialize(void)::symbolsInitialized = 1;
  }
}


// CCleanupUtlSymbolTable::~CCleanupUtlSymbolTable  (line 59, @0x0000000002f89d00, libserver.so)  // inlines: ~CThreadEvent, ~CThreadMutex, ~CThreadRWLock, ~CUtlSymbolTableMT
// calls: CThreadSyncObject::~CThreadSyncObject(), pthread_mutex_destroy, CUtlSymbolTable::~CUtlSymbolTable, operator delete
// globals: CUtlSymbol::s_pSymbolTable
void __fastcall CCleanupUtlSymbolTable::~CCleanupUtlSymbolTable(CCleanupUtlSymbolTable *const this)
{
  CUtlSymbolTable *v1; // rbx

  v1 = CUtlSymbol::s_pSymbolTable;
  if ( CUtlSymbol::s_pSymbolTable != 0 )
  {
    CUtlSymbol::s_pSymbolTable[3].m_Lookup.m_pElements = &off_4094AA0;
    CThreadSyncObject::~CThreadSyncObject(&v1[3].m_Lookup.m_pElements);
    v1[1].m_StringPools.m_Memory.m_pMemory = &off_4094AA0;
    CThreadSyncObject::~CThreadSyncObject(&v1[1].m_StringPools.m_Memory);
    pthread_mutex_destroy(&v1[1]);
    CUtlSymbolTable::~CUtlSymbolTable(v1);
    operator delete(v1);
  }
  CUtlSymbol::s_pSymbolTable = 0;
}


// CUtlSymbol::CurrTable  (line 68, @0x0000000002f89630, libserver.so)
// calls: CUtlSymbol::Initialize
// globals: CUtlSymbol::s_pSymbolTable
CUtlSymbolTableMT *__cdecl CUtlSymbol::CurrTable()
{
  CUtlSymbol::Initialize();
  return CUtlSymbol::s_pSymbolTable;
}


// CUtlSymbol::CUtlSymbol  (line 79, @0x0000000002f89930, libserver.so)  // inlines: AddString, CurrTable
// calls: CUtlSymbol::Initialize, CThreadRWLock::LockForWrite(void), CUtlSymbolTable::AddString, CThreadRWLock::UnlockWrite(void)
// callers: CResourcePrecacher::RemoveResource, CResourcePrecacher::AddResource, CVScriptGameSystem::FetchCachedScriptScope, AsyncCaption_t::LoadFromFile_Internal, AsyncCaption_t::LoadFromFile, CDOTA_BaseNPC::CDOTA_BaseNPCIntention::Reset, CDOTA_BaseNPC::CDOTA_BaseNPCIntention::CDOTA_BaseNPCIntention, CSimpleBot::CSimpleBotIntention::Reset, CSimpleBot::CSimpleBotIntention::CSimpleBotIntention
// globals: CUtlSymbol::s_pSymbolTable
void __fastcall CUtlSymbol::CUtlSymbol(CUtlSymbol *const this, const char *pStr)
{
  CUtlSymbolTable *v4; // r12
  CThreadRWLock *v5; // rbx
  UtlSymId_t v6[24]; // [rsp+0h] [rbp-30h] BYREF

  CUtlSymbol::Initialize();
  v4 = CUtlSymbol::s_pSymbolTable;
  v5 = &CUtlSymbol::s_pSymbolTable[1];
  CThreadRWLock::LockForWrite(&CUtlSymbol::s_pSymbolTable[1]);
  CUtlSymbolTable::AddString(v6, v4, pStr);
  CThreadRWLock::UnlockWrite(v5);
  this->m_Id = v6[0];
}


// CUtlSymbol::String  (line 84, @0x0000000002f89650, libserver.so)  // inlines: CUtlSymbol, CurrTable, Lock, LockForRead, String, Unlock, UnlockRead
// calls: CUtlSymbol::Initialize, pthread_mutex_lock, CThreadRWLock::WaitForRead(void), pthread_mutex_unlock, CUtlSymbolTable::String, CThreadEvent::Set(void)
// callers: Action<CDOTA_BaseNPC>::InvokeOnEnd, Action<CDOTA_BaseNPC>::InvokeOnSuspend, Action<CDOTA_BaseNPC>::ApplyResult, Action<CDOTA_BaseNPC>::InvokeOnStart, Action<CDOTA_BaseNPC>::InvokeOnResume, Behavior<CDOTA_BaseNPC>::Update, Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult, Action<CDOTA_BaseNPC>::OnMoveToSuccess, Action<CDOTA_BaseNPC>::OnStuck, Action<CDOTA_BaseNPC>::OnUnStuck, Action<CDOTA_BaseNPC>::OnPostureChanged (82 total)
// globals: CUtlSymbol::s_pSymbolTable
const char *__fastcall CUtlSymbol::String(const CUtlSymbol *const this)
{
  UtlSymId_t m_Id; // r13
  CUtlSymbolTable *v2; // rbx
  CThreadRWLock *v3; // r12
  char *v4; // r13
  int v5; // eax
  CUtlSymbol id; // [rsp+0h] [rbp-30h] BYREF

  m_Id = this->m_Id;
  CUtlSymbol::Initialize();
  v2 = CUtlSymbol::s_pSymbolTable;
  v3 = &CUtlSymbol::s_pSymbolTable[1];
  pthread_mutex_lock(&CUtlSymbol::s_pSymbolTable[1]);
  if ( *&v2[5].m_Lookup.m_LessFunc.gap0 != 0 )
    CThreadRWLock::WaitForRead(v3);
  ++*(&v2[5].m_Lookup.m_LessFunc + 1);
  pthread_mutex_unlock(v3);
  id.m_Id = m_Id;
  v4 = CUtlSymbolTable::String(v2, &id.m_Id);
  pthread_mutex_lock(v3);
  v5 = *(&v2[5].m_Lookup.m_LessFunc + 1);
  *(&v2[5].m_Lookup.m_LessFunc + 1) = v5 - 1;
  if ( v5 == 1 && *&v2[5].m_Lookup.m_LessFunc.gap0 != 0 )
    CThreadEvent::Set(&v2[1].m_StringPools.m_Memory);
  pthread_mutex_unlock(v3);
  return v4;
}


// CUtlSymbol::DisableStaticSymbolTable  (line 89, @0x0000000002f88d60, libserver.so)
// globals: CUtlSymbol::s_bAllowStaticSymbolTable
void __cdecl CUtlSymbol::DisableStaticSymbolTable()
{
  CUtlSymbol::s_bAllowStaticSymbolTable = 0;
}


// CUtlSymbol::operator==  (line 98, @0x0000000002f89700, libserver.so)
// calls: CUtlSymbol::String, strcmp
bool __fastcall CUtlSymbol::operator==(const CUtlSymbol *const this, const char *pStr)
{
  bool result; // al
  const char *v4; // rax

  result = 0;
  if ( this->m_Id != 0xFFFF )
  {
    v4 = CUtlSymbol::String(this);
    return strcmp(v4, pStr) == 0;
  }
  return result;
}


// CUtlSymbolTable::StringFromIndex  (line 119, @0x0000000002f88d70, libserver.so)  // inlines: DecoratedStringFromIndex, operator[]
const char *__fastcall CUtlSymbolTable::StringFromIndex(
        const CUtlSymbolTable *const this,
        const CUtlSymbolTable::CStringPoolIndex *const index)
{
  return &this->m_StringPools.m_Memory.m_pMemory[index->m_iPool]->m_Data[index->m_iOffset + 2];
}


// CUtlSymbolTable::CUtlSymbolTable  (line 197, @0x0000000002f89490, libserver.so)  // inlines: CTree, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, ResetDbgInfo
// calls: CMemAllocSystemInitialize
// callers: vprof_MakeNameFromTwoStrings, _GLOBAL__sub_I__unity_source_files_01.cpp, CCustomGameEventManager::CCustomGameEventManager, CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::CreateGameSystem, SkipGlobalState, CSaveRestoreFileSystem::CSaveRestoreFileSystem, ExtractKeyValueFromField, CGameEventManager::CGameEventManager, CDecalEmitterSystem::CDecalEmitterSystem, _GLOBAL__sub_I__unity_base_06.cpp, CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::CreateGameSystem, MissingSceneWarning (38 total)
void __fastcall CUtlSymbolTable::CUtlSymbolTable(
        CUtlSymbolTable *const this,
        int growSize,
        int initSize,
        bool caseInsensitive)
{
  __int64 v4; // rsi
  CUtlRBTree<CUtlSymbolTable::CStringPoolIndex,short unsigned int,CUtlSymbolTable::CLess,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex,short unsigned int>,short unsigned int> >::Node_t *v5; // rax

  v4 = growSize & 0x3FFFFFFF;
  v5 = 0;
  this->m_Lookup.m_Elements.m_pMemory = 0;
  this->m_Lookup.m_Elements.m_nAllocationCount = initSize;
  this->m_Lookup.m_Elements.m_nGrowSize = v4;
  if ( initSize != 0 )
  {
    CMemAllocSystemInitialize(this, v4);
    v5 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * this->m_Lookup.m_Elements.m_nAllocationCount);
    this->m_Lookup.m_Elements.m_pMemory = v5;
  }
  this->m_bInsensitive = caseInsensitive;
  this->m_Lookup.m_Root = -1;
  this->m_Lookup.m_NumElements = 0;
  this->m_Lookup.m_FirstFree = -1;
  this->m_Lookup.m_LastAlloc.index = -1;
  this->m_Lookup.m_pElements = v5;
  this->m_StringPools.m_Size = 0;
  this->m_StringPools.m_Memory.m_pMemory = 0;
  this->m_StringPools.m_Memory.m_nAllocationCount = 0;
  this->m_StringPools.m_Memory.m_nGrowSize = 8;
}


// CUtlSymbolTable::~CUtlSymbolTable  (line 202, @0x0000000002f89420, libserver.so)  // inlines: Purge, RemoveAll, ~CTree, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::RemoveAll, CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int>::Purge, CUtlMemory<CUtlSymbolTable::StringPool_t*, int>::Purge
// callers: CUtlStringMap<IGameSystem::FactoryInfo_t, CUtlSymbolTable>::~CUtlStringMap, CCustomGameEventManager::~CCustomGameEventManager, CBreakModelsPrecached::~CBreakModelsPrecached, SkipGlobalState, CGameSaveRestoreInfo::~CGameSaveRestoreInfo, CSaveRestoreFileSystem::~CSaveRestoreFileSystem, CSaveRestoreFileSystem::CSaveRestoreFileSystem, CEntity2SaveRestore::LoadAdjacentEnts, CGameEventManager::CGameEventManager, CGameEventManager::~CGameEventManager, CDecalEmitterSystem::~CDecalEmitterSystem, CModelBuilder::~CModelBuilder (42 total)
void __fastcall CUtlSymbolTable::~CUtlSymbolTable(CUtlSymbolTable *const this)
{
  bool v2; // zf

  CUtlSymbolTable::RemoveAll(this);
  v2 = (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_StringPools.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlSymbolTable::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
    if ( (this->m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSymbolTable::StringPool_t *,int>::Purge(&this->m_StringPools.m_Memory);
  }
  CUtlRBTree<CUtlSymbolTable::CStringPoolIndex,unsigned short,CUtlSymbolTable::CLess,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex,unsigned short>,unsigned short>>::Purge(&this->m_Lookup);
  if ( (this->m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex,unsigned short>,unsigned short>::Purge(&this->m_Lookup.m_Elements);
}


// CUtlSymbolTable::Find  (line 209, @0x0000000002f89330, libserver.so)  // inlines: CStringPoolIndex, CUtlSymbol, HashStringFastCaseless
// calls: HashString, CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int> >::Find, MurmurHash2LowerCase
// callers: IGameSystem::DestroyGameSystem, IGameSystem::Add, IGameSystem::InitAllSystems, CCustomGameEventManager::FindCustomEventInfo, CCustomGameEventManager::FindOrCreateCustomEventInfo, GetBreakableInfoForProp, PropBreakablePrecacheAll, ExtractKeyValueFromField, CGameEventManager::LoadEventsFromFile, GlobalEntity_GetIndex, GetGordonPrecriminalState, GlobalEntity_Add (47 total)
unsigned __int16 *__fastcall CUtlSymbolTable::Find(
        unsigned __int16 *a1,
        const CUtlSymbolTable *const this,
        const char *pString)
{
  bool v4; // zf
  unsigned __int16 v6; // ax
  CUtlSymbolTable::CStringPoolIndex search; // [rsp+0h] [rbp-20h] BYREF

  if ( pString != 0 )
  {
    v4 = !this->m_bInsensitive;
    this->m_pUserSearchString = pString;
    if ( v4 )
      v6 = HashString(pString);
    else
      v6 = MurmurHash2LowerCase(pString, 0x3501A674u);
    this->m_nUserSearchStringHash = v6;
    search.m_iPool = -1;
    search.m_iOffset = -1;
    *a1 = CUtlRBTree<CUtlSymbolTable::CStringPoolIndex,unsigned short,CUtlSymbolTable::CLess,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex,unsigned short>,unsigned short>>::Find(
            &this->m_Lookup,
            &search);
    return a1;
  }
  else
  {
    *a1 = -1;
    return a1;
  }
}


// CUtlSymbolTable::FindPoolWithSpace  (line 232, @0x0000000002f88d90, libserver.so)
// callers: CUtlSymbolTable::AddString
int __fastcall CUtlSymbolTable::FindPoolWithSpace(const CUtlSymbolTable *const this, int len)
{
  int result; // eax
  int m_Size; // r8d
  CUtlSymbolTable::StringPool_t **m_pMemory; // rcx
  _DWORD **v5; // rcx
  _DWORD *v6; // rdi

  result = -1;
  m_Size = this->m_StringPools.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_StringPools.m_Memory.m_pMemory;
    if ( len <= (*m_pMemory)->m_TotalLen - (*m_pMemory)->m_SpaceUsed )
    {
      return 0;
    }
    else
    {
      v5 = (m_pMemory + 1);
      result = 0;
      while ( ++result != m_Size )
      {
        v6 = *v5++;
        if ( *v6 - v6[1] >= len )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CUtlSymbolTable::AddString  (line 252, @0x0000000002f89740, libserver.so)  // inlines: AddToTail, CUtlSymbol, CopyConstruct<CUtlSymbolTable::StringPool_t*>, Element, GrowMemory, HashStringFastCaseless, Insert, InsertAt, IsValid, V_strlen, memcpy, operator[]
// calls: CUtlSymbolTable::Find, strlen, CUtlSymbolTable::FindPoolWithSpace, MurmurHash2LowerCase, memcpy, CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int> >::FindInsertionPosition, CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int> >::LinkToParent, HashString, CUtlMemory<CUtlSymbolTable::StringPool_t*, int>::Grow
// callers: vprof_MakeNameFromTwoStrings, IGameSystem::InitAllSystems, CCustomGameEventManager::FindOrCreateCustomEventInfo, CSpeechScriptBridge::TranslateSymbol, CSpeechScriptBridge::MapOldToNewQuery, CRuleScriptBridge::AddCriterionFromScript, PropBreakablePrecacheAll, CSaveRestoreFileSystem::AddString, CSaveRestoreFileSystem::Open, CSaveRestoreFileSystem::CSaveRestoreFileSystem, ExtractKeyValueFromField, CGameEventManager::LoadEventsFromFile (58 total)
unsigned __int16 *__fastcall CUtlSymbolTable::AddString(
        unsigned __int16 *a1,
        CUtlSymbolTable *const this,
        const char *pString)
{
  int v7; // eax
  int PoolWithSpace; // eax
  int m_Size; // r13d
  __int64 v10; // r14
  __int16 v11; // ax
  CUtlSymbolTable::StringPool_t *v12; // r14
  char *v13; // rdi
  unsigned __int16 v14; // r13
  unsigned __int16 v15; // r12
  int v16; // r13d
  __int64 v17; // rsi
  CUtlSymbolTable::StringPool_t *v18; // rax
  int v19; // edx
  CUtlSymbolTable::StringPool_t **v20; // rdx
  int iStringOffset; // [rsp+0h] [rbp-70h]
  CUtlSymbolTable::StringPool_t *iStringOffseta; // [rsp+0h] [rbp-70h]
  int lenString; // [rsp+8h] [rbp-68h]
  signed int lenDecorated; // [rsp+Ch] [rbp-64h]
  bool leftchild; // [rsp+1Eh] [rbp-52h] BYREF
  bool isDuplicate; // [rsp+1Fh] [rbp-51h] BYREF
  CUtlSymbol id; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 parent; // [rsp+2Eh] [rbp-42h] BYREF
  CUtlSymbolTable::CStringPoolIndex index; // [rsp+30h] [rbp-40h] BYREF

  if ( pString != 0 )
  {
    CUtlSymbolTable::Find(&id.m_Id, this, pString);
    if ( id.m_Id == 0xFFFF )
    {
      v7 = strlen(pString);
      lenDecorated = (v7 + 4) & 0xFFFFFFFE;
      lenString = v7 + 1;
      PoolWithSpace = CUtlSymbolTable::FindPoolWithSpace(this, lenDecorated);
      LOWORD(m_Size) = PoolWithSpace;
      if ( PoolWithSpace == -1 )
      {
        if ( (lenDecorated + 12LL) > 0x800 )
        {
          v16 = lenDecorated;
          v17 = lenDecorated + 12;
        }
        else
        {
          v16 = 2036;
          v17 = 2048;
        }
        v18 = (**g_pMemAlloc)(g_pMemAlloc, v17);
        v18->m_TotalLen = v16;
        v18->m_SpaceUsed = 0;
        m_Size = this->m_StringPools.m_Size;
        v19 = m_Size;
        if ( m_Size == this->m_StringPools.m_Memory.m_nAllocationCount )
        {
          iStringOffseta = v18;
          CUtlMemory<CUtlSymbolTable::StringPool_t *,int>::Grow(&this->m_StringPools.m_Memory, 1);
          v19 = this->m_StringPools.m_Size;
          v18 = iStringOffseta;
        }
        v10 = m_Size;
        this->m_StringPools.m_Size = v19 + 1;
        v20 = &this->m_StringPools.m_Memory.m_pMemory[v10];
        if ( v20 != 0 )
          *v20 = v18;
      }
      else
      {
        v10 = PoolWithSpace;
      }
      if ( this->m_bInsensitive )
        v11 = MurmurHash2LowerCase(pString, 0x3501A674u);
      else
        v11 = HashString(pString);
      v12 = this->m_StringPools.m_Memory.m_pMemory[v10];
      iStringOffset = v12->m_SpaceUsed;
      v13 = v12 + iStringOffset;
      *(v13 + 4) = v11;
      memcpy(v13 + 10, pString, lenString);
      index.m_iPool = m_Size;
      v12->m_SpaceUsed += lenDecorated;
      index.m_iOffset = iStringOffset;
      CUtlRBTree<CUtlSymbolTable::CStringPoolIndex,unsigned short,CUtlSymbolTable::CLess,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex,unsigned short>,unsigned short>>::FindInsertionPosition(
        &this->m_Lookup,
        &index,
        0,
        &parent,
        &leftchild,
        &isDuplicate);
      LOBYTE(v12) = leftchild;
      v14 = parent;
      v15 = CUtlRBTree<CUtlSymbolTable::CStringPoolIndex,unsigned short,CUtlSymbolTable::CLess,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex,unsigned short>,unsigned short>>::NewNode(
              &this->m_Lookup,
              &index);
      CUtlRBTree<CUtlSymbolTable::CStringPoolIndex,unsigned short,CUtlSymbolTable::CLess,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex,unsigned short>,unsigned short>>::LinkToParent(
        &this->m_Lookup,
        v15,
        v14,
        v12);
      ++this->m_Lookup.m_NumElements;
      *a1 = v15;
    }
    else
    {
      *a1 = id.m_Id;
    }
  }
  else
  {
    *a1 = -1;
  }
  return a1;
}


// CUtlSymbolTable::String  (line 313, @0x0000000002f88df0, libserver.so)  // inlines: DecoratedStringFromIndex, Element, IsValid, StringFromIndex, operator[]
// callers: vprof_MakeNameFromTwoStrings, IGameSystem::LoopInitAllSystems, IGameSystem::Add, CSpeechScriptBridge::TranslateSymbol, CRuleScriptBridge::ResponseQueryToScript, CSaveRestoreFileSystem::DirectoryExtract, CSaveRestoreFileSystem::Compress, CSaveRestoreFileSystem::Close, CSaveRestoreFileSystem::Uncompress, CSaveRestoreFileSystem::DirectoryCount, CSaveRestoreFileSystem::DirectoryClear, CSaveRestoreFileSystem::WriteSaveDirectoryToDisk (61 total)
char *__fastcall CUtlSymbolTable::String(const CUtlSymbolTable *const this, unsigned __int16 *id)
{
  __int64 v2; // rdx
  char *result; // rax

  v2 = *id;
  result = "";
  if ( v2 != 0xFFFF )
    return &this->m_StringPools.m_Memory.m_pMemory[this->m_Lookup.m_Elements.m_pMemory[v2].m_Data.m_iPool]->m_Data[this->m_Lookup.m_Elements.m_pMemory[v2].m_Data.m_iOffset + 2];
  return result;
}


// CUtlSymbolTable::RemoveAll  (line 327, @0x0000000002f893c0, libserver.so)  // inlines: RemoveAll
// calls: CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int> >::Purge
// callers: CCustomGameEventManager::GameShutdown, CEntity2SaveRestore::ExtractResourcesFromSaveGame, CGameEventManager::Reset, CDecalEmitterSystem::Clear, CGlobalState::Reset, CPrecacheGameSystem::GameDeactivate, CDOTAGameManager::DestroyGameKeyValues, CDOTAGameManager::ReloadPortraitData, CUtlSymbolTable::~CUtlSymbolTable, CAppSystemDict::~CAppSystemDict, CAppSystemDict::RebuildSystemDictionary, CCompressedResourceManifest::RemoveAll (13 total)
void __fastcall CUtlSymbolTable::RemoveAll(CUtlSymbolTable *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CUtlSymbolTable::StringPool_t *v4; // rsi

  CUtlRBTree<CUtlSymbolTable::CStringPoolIndex,unsigned short,CUtlSymbolTable::CLess,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex,unsigned short>,unsigned short>>::Purge(&this->m_Lookup);
  if ( this->m_StringPools.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_StringPools.m_Memory.m_pMemory[v2++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4);
    }
    while ( this->m_StringPools.m_Size > v3 );
  }
  this->m_StringPools.m_Size = 0;
}


// CUtlFilenameSymbolTable::FindOrAddFileName  (line 343, @0x0000000002f88f70, libserver.so)  // inlines: AssignIf, FileNameHandleInternal_t, LockForWrite, ThreadInterlockedAssignIf128, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, V_ExtractFilePath<long unsigned int>, V_strlen, V_strncpy<long unsigned int>, operator++
// calls: CUtlFilenameSymbolTable::FindFileName, _V_strncpy, V_RemoveDotSlashes, _V_ExtractFilePath, ThreadGetCurrentId, CThreadSpinRWLock::SpinLockForWrite(ulong long), CCountedStringPool::FindStringHandle, CCountedStringPool::ReferenceStringHandle, CThreadSpinRWLock::UnlockWrite(void), __stack_chk_fail
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
FileNameHandle_t __fastcall CUtlFilenameSymbolTable::FindOrAddFileName(
        CUtlFilenameSymbolTable *const this,
        const char *pFileName)
{
  FileNameHandle_t result; // eax
  char *v4; // rdx
  int v5; // ecx
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 CurrentId; // rsi
  CThreadSpinRWLock *p_m_lock; // r14
  int v10; // eax
  FileNameHandle_t v11; // r13d
  unsigned __int16 v12; // r13
  int v13; // eax
  ThreadId_t m_writerId; // rax
  __int128 v15; // rt0
  unsigned __int16 StringHandle; // [rsp+4h] [rbp-64Ch]
  char fn[512]; // [rsp+10h] [rbp-640h] BYREF
  char basepath[512]; // [rsp+210h] [rbp-440h] BYREF
  char filename[520]; // [rsp+410h] [rbp-240h] BYREF
  unsigned __int64 v21; // [rsp+618h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  result = 0;
  if ( pFileName != 0 )
  {
    result = CUtlFilenameSymbolTable::FindFileName(this, pFileName);
    if ( result == 0 )
    {
      _V_strncpy(fn, pFileName, 512);
      V_RemoveDotSlashes(fn, 47);
      _V_ExtractFilePath(fn, basepath, 512);
      v4 = basepath;
      do
      {
        v5 = *v4;
        v4 += 4;
        v6 = ~v5 & (v5 - 16843009) & 0x80808080;
      }
      while ( v6 == 0 );
      if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
      {
        LOBYTE(v6) = (~v5 & (v5 - 16843009) & 0x80808080) >> 16;
        LODWORD(v4) = v4 + 2;
      }
      _V_strncpy(filename, &fn[v4 - (__CFADD__(v6, v6) + 3) - basepath], 512);
      CurrentId = ThreadGetCurrentId(v7);
      p_m_lock = &this->m_lock;
      _InterlockedAdd(&this->m_lock.m_nWriters.m_value, 1u);
      if ( this->m_lock.m_lockInfo.m_nReaders > 0
        || (m_writerId = this->m_lock.m_lockInfo.m_writerId) != 0 && CurrentId != m_writerId
        || (v15 = 0u, _InterlockedCompareExchange128(p_m_lock, 0, CurrentId, &v15) == 0) )
      {
        _mm_pause();
        CThreadSpinRWLock::SpinLockForWrite(p_m_lock, CurrentId);
      }
      StringHandle = CCountedStringPool::FindStringHandle(&this->m_StringPool, basepath);
      LOWORD(v10) = CCountedStringPool::FindStringHandle(&this->m_StringPool, filename);
      v11 = (v10 << 16) | StringHandle;
      if ( StringHandle == 0 || v10 == 0 )
      {
        v12 = CCountedStringPool::ReferenceStringHandle(&this->m_StringPool, basepath);
        LOWORD(v13) = CCountedStringPool::ReferenceStringHandle(&this->m_StringPool, filename);
        v11 = (v13 << 16) | v12;
      }
      CThreadSpinRWLock::UnlockWrite(p_m_lock);
      return v11;
    }
  }
  return result;
}


// CUtlFilenameSymbolTable::FindFileName  (line 391, @0x0000000002f88e30, libserver.so)  // inlines: V_ExtractFilePath<long unsigned int>, V_strlen, V_strncpy<long unsigned int>
// calls: _V_strncpy, V_RemoveDotSlashes, _V_ExtractFilePath, CThreadSpinRWLock::LockForRead(void), CCountedStringPool::FindStringHandle, CThreadSpinRWLock::UnlockRead(void), __stack_chk_fail
// callers: CUtlFilenameSymbolTable::FindOrAddFileName
FileNameHandle_t __fastcall CUtlFilenameSymbolTable::FindFileName(
        const CUtlFilenameSymbolTable *const this,
        const char *pFileName)
{
  unsigned __int16 StringHandle; // r13
  int v4; // eax
  CThreadSpinRWLock *p_m_lock; // rdi
  __int16 v6; // r12
  FileNameHandle_t v7; // ebx
  char fn[512]; // [rsp+10h] [rbp-640h] BYREF
  char basepath[512]; // [rsp+210h] [rbp-440h] BYREF
  char filename[520]; // [rsp+410h] [rbp-240h] BYREF
  unsigned __int64 v12; // [rsp+618h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  if ( pFileName == 0 )
    return 0;
  _V_strncpy(fn, pFileName, 512);
  V_RemoveDotSlashes(fn, 47);
  _V_ExtractFilePath(fn, basepath, 512);
  _V_strncpy(filename, &fn[strlen(basepath)], 512);
  CThreadSpinRWLock::LockForRead(&this->m_lock);
  StringHandle = CCountedStringPool::FindStringHandle(&this->m_StringPool, basepath);
  LOWORD(v4) = CCountedStringPool::FindStringHandle(&this->m_StringPool, filename);
  p_m_lock = &this->m_lock;
  v6 = v4;
  v7 = StringHandle | (v4 << 16);
  CThreadSpinRWLock::UnlockRead(p_m_lock);
  if ( StringHandle == 0 )
    return 0;
  if ( v6 != 0 )
    return v7;
  else
    return 0;
}


// CUtlFilenameSymbolTable::String  (line 431, @0x0000000002f89160, libserver.so)  // inlines: V_strncat<int>, V_strncpy<int>
// calls: CThreadSpinRWLock::LockForRead(void), CCountedStringPool::HandleToString, CThreadSpinRWLock::UnlockRead(void), _V_strncpy, _V_strncat
bool __fastcall CUtlFilenameSymbolTable::String(
        CUtlFilenameSymbolTable *const this,
        const FileNameHandle_t *const handle,
        char *buf,
        int buflen)
{
  CThreadSpinRWLock *p_m_lock; // r15
  const char *v9; // rbx
  const char *path; // [rsp+8h] [rbp-38h]

  *buf = 0;
  if ( handle == 0 )
    return 0;
  p_m_lock = &this->m_lock;
  CThreadSpinRWLock::LockForRead(&this->m_lock);
  path = CCountedStringPool::HandleToString(&this->m_StringPool, *handle);
  v9 = CCountedStringPool::HandleToString(&this->m_StringPool, *(handle + 1));
  CThreadSpinRWLock::UnlockRead(p_m_lock);
  if ( v9 == 0 || path == 0 )
    return 0;
  _V_strncpy(buf, path, buflen);
  _V_strncat(buf, v9, buflen, 0xFFFFFFFFLL);
  return 1;
}


// CUtlFilenameSymbolTable::RemoveAll  (line 457, @0x0000000002f89210, libserver.so)
// calls: CCountedStringPool::FreeAll
void __fastcall CUtlFilenameSymbolTable::RemoveAll(CUtlFilenameSymbolTable *const this)
{
  CCountedStringPool::FreeAll(&this->m_StringPool);
}


// CUtlFilenameSymbolTable::SpewStrings  (line 462, @0x0000000002f89220, libserver.so)
// calls: CThreadSpinRWLock::LockForRead(void), CCountedStringPool::SpewStrings, CThreadSpinRWLock::UnlockRead(void)
void __fastcall CUtlFilenameSymbolTable::SpewStrings(CUtlFilenameSymbolTable *const this)
{
  CThreadSpinRWLock *p_m_lock; // rbx

  p_m_lock = &this->m_lock;
  CThreadSpinRWLock::LockForRead(&this->m_lock);
  CCountedStringPool::SpewStrings(&this->m_StringPool);
  CThreadSpinRWLock::UnlockRead(p_m_lock);
}


// CUtlFilenameSymbolTable::SaveToBuffer  (line 469, @0x0000000002f89250, libserver.so)
// calls: CThreadSpinRWLock::LockForRead(void), CCountedStringPool::SaveToBuffer, CThreadSpinRWLock::UnlockRead(void)
bool __fastcall CUtlFilenameSymbolTable::SaveToBuffer(CUtlFilenameSymbolTable *const this, CUtlBuffer *const buffer)
{
  CUtlFilenameSymbolTable *v3; // r12
  CThreadSpinRWLock *p_m_lock; // rbx

  v3 = this;
  p_m_lock = &this->m_lock;
  CThreadSpinRWLock::LockForRead(&this->m_lock);
  LOBYTE(v3) = CCountedStringPool::SaveToBuffer(&v3->m_StringPool, buffer);
  CThreadSpinRWLock::UnlockRead(p_m_lock);
  return v3;
}


// CUtlFilenameSymbolTable::RestoreFromBuffer  (line 478, @0x0000000002f892a0, libserver.so)  // inlines: AssignIf, LockForWrite, ThreadInterlockedAssignIf128, ThreadInterlockedIncrement, ThreadPause, TryLockForWrite, operator++
// calls: ThreadGetCurrentId, CThreadSpinRWLock::SpinLockForWrite(ulong long), CCountedStringPool::RestoreFromBuffer, CThreadSpinRWLock::UnlockWrite(void)
// globals: CThreadSpinRWLock::TryLockForWrite(ulong long)::oldValue
bool __fastcall CUtlFilenameSymbolTable::RestoreFromBuffer(
        CUtlFilenameSymbolTable *const this,
        CUtlBuffer *const buffer)
{
  CThreadSpinRWLock *p_m_lock; // r12
  __int64 CurrentId; // rsi
  ThreadId_t m_writerId; // rax
  __int128 v8; // rt0
  bool bResult; // [rsp+Ch] [rbp-24h]

  p_m_lock = &this->m_lock;
  CurrentId = ThreadGetCurrentId(this);
  _InterlockedAdd(&this->m_lock.m_nWriters.m_value, 1u);
  if ( this->m_lock.m_lockInfo.m_nReaders > 0
    || (m_writerId = this->m_lock.m_lockInfo.m_writerId) != 0 && CurrentId != m_writerId
    || (v8 = 0u, _InterlockedCompareExchange128(p_m_lock, 0, CurrentId, &v8) == 0) )
  {
    _mm_pause();
    CThreadSpinRWLock::SpinLockForWrite(p_m_lock, CurrentId);
  }
  bResult = CCountedStringPool::RestoreFromBuffer(&this->m_StringPool, buffer);
  CThreadSpinRWLock::UnlockWrite(p_m_lock);
  return bResult;
}


