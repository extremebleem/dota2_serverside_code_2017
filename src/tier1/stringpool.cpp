
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_stringpool.cpp  (line 0, @0x0000000001a67490, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_stringpool_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// FastStrLessInsensitive  (line 22, @0x0000000002f8e3d0, libserver.so)
// calls: V_stricmp_fast
bool __fastcall FastStrLessInsensitive(const char *const *const pszLeft, const char *const *const pszRight)
{
  return V_stricmp_fast(*pszLeft, *pszRight) >> 31;
}


// StrLessSensitive  (line 27, @0x0000000002f8e3f0, libserver.so)  // inlines: _V_strcmp
// calls: strcmp
bool __fastcall StrLessSensitive(const char *const *const pszLeft, const char *const *const pszRight)
{
  return strcmp(*pszLeft, *pszRight) >> 31;
}


// CStringPool::CStringPool  (line 35, @0x0000000002f8e4d0, libserver.so)  // inlines: CThreadFastMutex, CUtlMemory, CUtlRBTree, ResetDbgInfo
// calls: CMemAllocSystemInitialize
// callers: CResponseFileParser::CResponseFileParser
// globals: StrLessSensitive(char const* const&,char const* const&), FastStrLessInsensitive(char const* const&,char const* const&)
void __fastcall CStringPool::CStringPool(CStringPool *const this, StringPoolCase_t caseSensitivity)
{
  bool (*v2)(const char *const *, const char *const *); // rax
  CUtlRBTree<char const*,short unsigned int,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,short unsigned int>,short unsigned int> >::Node_t *v4; // rax

  v2 = FastStrLessInsensitive;
  this->m_Mutex.m_ownerID = 0;
  if ( caseSensitivity != StringPoolCase_t::StringPoolCaseInsensitive )
    v2 = StrLessSensitive;
  this->m_Mutex.m_depth = 0;
  this->m_Strings.m_Elements.m_pMemory = 0;
  this->m_Strings.m_LessFunc = v2;
  this->m_Strings.m_Elements.m_nAllocationCount = 256;
  this->m_Strings.m_Elements.m_nGrowSize = 32;
  CMemAllocSystemInitialize(this, caseSensitivity);
  v4 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * this->m_Strings.m_Elements.m_nAllocationCount);
  this->m_Strings.m_Elements.m_pMemory = v4;
  this->m_Strings.m_Root = -1;
  this->m_Strings.m_NumElements = 0;
  this->m_Strings.m_FirstFree = -1;
  this->m_Strings.m_LastAlloc.index = -1;
  this->m_Strings.m_pElements = v4;
}


// CStringPool::~CStringPool  (line 43, @0x0000000002f8ef50, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlRBTree
// calls: CStringPool::FreeAll, CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int>::Purge
// callers: CResponseSystem::~CResponseSystem, CResponseFileParser::CResponseFileParser
void __fastcall CStringPool::~CStringPool(CStringPool *const this)
{
  bool v2; // zf
  uint32 m_nGrowSize; // eax

  CStringPool::FreeAll(this);
  CUtlRBTree<char const*,unsigned short,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>>::RemoveAll(&this->m_Strings);
  v2 = (this->m_Strings.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_Strings.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>::Purge(&this->m_Strings.m_Elements);
    m_nGrowSize = this->m_Strings.m_Elements.m_nGrowSize;
    this->m_Strings.m_LastAlloc.index = -1;
    if ( (m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>::Purge(&this->m_Strings.m_Elements);
  }
  else
  {
    this->m_Strings.m_LastAlloc.index = -1;
  }
}


// CStringPool::Count  (line 51, @0x0000000002f8e570, libserver.so)  // inlines: Count
unsigned int __fastcall CStringPool::Count(const CStringPool *const this)
{
  return this->m_Strings.m_NumElements;
}


// CStringPool::Find  (line 58, @0x0000000002f8edb0, libserver.so)  // inlines: CAutoLockT, IsIdxValid, IsValidIndex, LeftChild, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> >::Find, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), _Unwind_Resume
// callers: CResponseFileParser::ParseInclude
const char *__fastcall CStringPool::Find(CStringPool *const this, const char *pszValue)
{
  signed __int64 CurrentId; // rsi
  unsigned __int16 v4; // ax
  const char *m_Data; // r12
  UtlRBTreeNode_t<char const*,short unsigned int> *v6; // rdx
  const char *pszValuea; // [rsp+8h] [rbp-18h] BYREF

  pszValuea = pszValue;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_Mutex.m_ownerID && _InterlockedCompareExchange64(this, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(this, CurrentId, 0);
  }
  else
  {
    ++this->m_Mutex.m_depth;
  }
  v4 = CUtlRBTree<char const*,unsigned short,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>>::Find(
         &this->m_Strings,
         &pszValuea);
  m_Data = 0;
  if ( v4 < this->m_Strings.m_Elements.m_nAllocationCount && v4 <= this->m_Strings.m_LastAlloc.index && v4 != 0xFFFF )
  {
    v6 = &this->m_Strings.m_Elements.m_pMemory[v4];
    if ( v4 != v6->m_Left )
      m_Data = v6->m_Data;
  }
  if ( --this->m_Mutex.m_depth == 0 )
    ThreadInterlockedExchange64(this, 0);
  return m_Data;
}


// CStringPool::Allocate  (line 69, @0x0000000002f8f310, libserver.so)  // inlines: CAutoLockT, Element, FindInsertionPosition, Insert, InsertAt, LeftChild, Lock, MemAlloc_StrDupFunc, RightChild, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], strcpy, ~CAutoLockT
// calls: ThreadGetCurrentId, CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> >::Find, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), strlen, strcpy, CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> >::LinkToParent, _Unwind_Resume
// callers: CResponseFileParser::LoadFromBuffer
const char *__fastcall CStringPool::Allocate(CStringPool *const this, const char *pszValue)
{
  signed __int64 CurrentId; // rsi
  unsigned __int16 v4; // ax
  const char *m_Data; // r12
  const char *v7; // r12
  size_t v8; // rax
  char *v9; // rax
  unsigned __int16 m_Root; // r13
  unsigned __int16 m_Right; // ax
  bool v12; // r12
  bool v13; // zf
  UtlRBTreeNode_t<char const*,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v15; // ax
  char *v16; // [rsp+0h] [rbp-50h]
  const char *pszValuea; // [rsp+8h] [rbp-48h] BYREF
  char *pCopyFrom[7]; // [rsp+18h] [rbp-38h] BYREF

  pszValuea = pszValue;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_Mutex.m_ownerID && _InterlockedCompareExchange64(this, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(this, CurrentId, 0);
  }
  else
  {
    ++this->m_Mutex.m_depth;
  }
  v4 = CUtlRBTree<char const*,unsigned short,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>>::Find(
         &this->m_Strings,
         &pszValuea);
  if ( v4 == 0xFFFF )
  {
    v7 = pszValuea;
    if ( pszValuea != 0 )
    {
      v8 = strlen(pszValuea);
      v9 = (**g_pMemAlloc)(g_pMemAlloc, v8 + 1);
      v16 = strcpy(v9, v7);
    }
    else
    {
      v16 = 0;
    }
    m_Root = this->m_Strings.m_Root;
    pCopyFrom[0] = v16;
    if ( m_Root != 0xFFFF )
    {
      while ( 1 )
      {
        v13 = !this->m_Strings.m_LessFunc(pCopyFrom, &this->m_Strings.m_Elements.m_pMemory[m_Root].m_Data);
        m_pMemory = this->m_Strings.m_Elements.m_pMemory;
        if ( v13 )
        {
          m_Right = m_pMemory[m_Root].m_Right;
          v12 = 0;
          if ( m_Right == 0xFFFF )
            goto LABEL_18;
        }
        else
        {
          m_Right = m_pMemory[m_Root].m_Left;
          v12 = 1;
          if ( m_Right == 0xFFFF )
            goto LABEL_18;
        }
        m_Root = m_Right;
      }
    }
    v12 = 0;
LABEL_18:
    v15 = CUtlRBTree<char const*,unsigned short,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>>::NewNode(
            &this->m_Strings,
            pCopyFrom);
    CUtlRBTree<char const*,unsigned short,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>>::LinkToParent(
      &this->m_Strings,
      v15,
      m_Root,
      v12);
    m_Data = v16;
    ++this->m_Strings.m_NumElements;
  }
  else
  {
    m_Data = this->m_Strings.m_Elements.m_pMemory[v4].m_Data;
  }
  if ( --this->m_Mutex.m_depth == 0 )
    ThreadInterlockedExchange64(this, 0);
  return m_Data;
}


// CStringPool::FreeAll  (line 90, @0x0000000002f8ee80, libserver.so)  // inlines: FirstInorder, LeftChild, operator[]
// calls: CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> >::RemoveAll
// callers: CStringPool::~CStringPool, CResponseFileParser::LoadFromFile
void __fastcall CStringPool::FreeAll(CStringPool *const this)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<char const*,short unsigned int> *m_pMemory; // rdx
  __int64 v4; // rcx
  unsigned __int16 m_Left; // si

  m_Root = this->m_Strings.m_Root;
  if ( m_Root == 0xFFFF )
  {
    CUtlRBTree<char const*,unsigned short,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>>::RemoveAll(&this->m_Strings);
  }
  else
  {
    m_pMemory = this->m_Strings.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data);
      m_Root = CUtlRBTree<char const*,unsigned short,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_Strings,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_Strings.m_Elements.m_pMemory;
      v4 = m_Root;
    }
    CUtlRBTree<char const*,unsigned short,bool (*)(char const* const&,char const* const&),CUtlMemory<UtlRBTreeNode_t<char const*,unsigned short>,unsigned short>>::RemoveAll(&this->m_Strings);
  }
}


// CCountedStringPool::CCountedStringPool  (line 105, @0x0000000002f8f4c0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureCount, GrowMemory, InsertMultipleBefore, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowVector, CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ShiftElementsRight, CUtlMemory<CCountedStringPool::hash_item_t, int>::Grow, _Unwind_Resume, CUtlMemory<short unsigned int, int>::Purge, CUtlMemory<CCountedStringPool::hash_item_t, int>::Purge
void __fastcall CCountedStringPool::CCountedStringPool(
        CCountedStringPool *const this,
        StringPoolCase_t caseSensitivity)
{
  CUtlVector<short unsigned int,CUtlMemory<short unsigned int,int> > *p_m_HashTable; // r13
  __int64 v5; // rdx
  int i; // eax
  int m_Size; // eax

  p_m_HashTable = &this->m_HashTable;
  this->_vptr_CCountedStringPool = off_47BF270;
  this->m_HashTable.m_Size = 0;
  this->m_HashTable.m_Memory.m_pMemory = 0;
  this->m_HashTable.m_Memory.m_nAllocationCount = 0;
  this->m_HashTable.m_Memory.m_nGrowSize = 0;
  this->m_Elements.m_Size = 0;
  this->m_Elements.m_Memory.m_pMemory = 0;
  this->m_Elements.m_Memory.m_nAllocationCount = 0;
  this->m_Elements.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<unsigned short,CUtlMemory<unsigned short,int>>::GrowVector(&this->m_HashTable, 1024);
  CUtlVectorBase<unsigned short,CUtlMemory<unsigned short,int>>::ShiftElementsRight(p_m_HashTable, 0, 1024);
  v5 = 0;
  for ( i = 0; this->m_HashTable.m_Size > i; ++v5 )
  {
    ++i;
    this->m_HashTable.m_Memory.m_pMemory[v5] = 0;
  }
  m_Size = this->m_Elements.m_Size;
  this->m_FreeListStart = 0;
  if ( m_Size == this->m_Elements.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CCountedStringPool::hash_item_t,int>::Grow(&this->m_Elements.m_Memory, 1);
    m_Size = this->m_Elements.m_Size;
  }
  this->m_Elements.m_Size = m_Size + 1;
  this->m_Elements.m_Memory.m_pMemory->m_pString = 0;
  this->m_Elements.m_Memory.m_pMemory->m_nReferenceCount = 0;
  this->m_Elements.m_Memory.m_pMemory->m_nNextElement = 0;
  this->m_caseSensitivity = caseSensitivity;
}


// CCountedStringPool::~CCountedStringPool  (line 124, @0x0000000002f8f260, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CCountedStringPool::FreeAll, CUtlMemory<CCountedStringPool::hash_item_t, int>::Purge, CUtlMemory<short unsigned int, int>::Purge
// callers: CCountedStringPool::~CCountedStringPool
void __fastcall CCountedStringPool::~CCountedStringPool(CCountedStringPool *const this)
{
  bool v2; // zf

  this->_vptr_CCountedStringPool = off_47BF270;
  CCountedStringPool::FreeAll(this);
  v2 = (this->m_Elements.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Elements.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CCountedStringPool::hash_item_t,int>::Purge(&this->m_Elements.m_Memory),
        (this->m_Elements.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_HashTable.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_HashTable.m_Size = 0;
    if ( !v2 )
      return;
  }
  else
  {
    CUtlMemory<CCountedStringPool::hash_item_t,int>::Purge(&this->m_Elements.m_Memory);
    v2 = (this->m_HashTable.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_HashTable.m_Size = 0;
    if ( !v2 )
      return;
  }
  CUtlMemory<unsigned short,int>::Purge(&this->m_HashTable.m_Memory);
  if ( (this->m_HashTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned short,int>::Purge(&this->m_HashTable.m_Memory);
}


// CCountedStringPool::~CCountedStringPool  (line 124, @0x0000000002f8f2f0, libserver.so)
// calls: CCountedStringPool::~CCountedStringPool, operator delete
void __fastcall CCountedStringPool::~CCountedStringPool(CCountedStringPool *const this)
{
  CCountedStringPool::~CCountedStringPool(this);
  operator delete(this);
}


// CCountedStringPool::FreeAll  (line 129, @0x0000000002f8f170, libserver.so)  // inlines: AddToTail, GrowMemory, RemoveAll
// calls: operator delete [], CUtlMemory<CCountedStringPool::hash_item_t, int>::Grow
// callers: CUtlFilenameSymbolTable::RemoveAll, CCountedStringPool::~CCountedStringPool, CCountedStringPool::RestoreFromBuffer
void __fastcall CCountedStringPool::FreeAll(CCountedStringPool *const this)
{
  __int64 v1; // rdx
  int i; // eax
  int m_Size; // r11d
  __int64 v5; // r12
  int v6; // r13d
  char *m_pString; // rdi
  int m_nAllocationCount; // r8d
  int v9; // eax

  v1 = 0;
  for ( i = 0; this->m_HashTable.m_Size > i; ++v1 )
  {
    ++i;
    this->m_HashTable.m_Memory.m_pMemory[v1] = 0;
  }
  m_Size = this->m_Elements.m_Size;
  v5 = 0;
  v6 = 0;
  this->m_FreeListStart = 0;
  if ( m_Size > 0 )
  {
    do
    {
      m_pString = this->m_Elements.m_Memory.m_pMemory[v5].m_pString;
      if ( m_pString != 0 )
      {
        operator delete[](m_pString);
        this->m_Elements.m_Memory.m_pMemory[v5].m_pString = 0;
        this->m_Elements.m_Memory.m_pMemory[v5].m_nReferenceCount = 0;
        this->m_Elements.m_Memory.m_pMemory[v5].m_nNextElement = 0;
      }
      ++v6;
      ++v5;
    }
    while ( this->m_Elements.m_Size > v6 );
  }
  m_nAllocationCount = this->m_Elements.m_Memory.m_nAllocationCount;
  this->m_Elements.m_Size = 0;
  if ( m_nAllocationCount != 0 )
  {
    v9 = 1;
  }
  else
  {
    CUtlMemory<CCountedStringPool::hash_item_t,int>::Grow(&this->m_Elements.m_Memory, 1);
    v9 = this->m_Elements.m_Size + 1;
  }
  this->m_Elements.m_Size = v9;
  this->m_Elements.m_Memory.m_pMemory->m_pString = 0;
  this->m_Elements.m_Memory.m_pMemory->m_nReferenceCount = 0;
  this->m_Elements.m_Memory.m_pMemory->m_nNextElement = 0;
}


// CCountedStringPool::Hash  (line 161, @0x0000000002f8e580, libserver.so)  // inlines: HashStringFastCaseless
// calls: HashString, MurmurHash2LowerCase
// callers: CCountedStringPool::FindStringHandle, CCountedStringPool::DereferenceString, CCountedStringPool::ReferenceStringHandle
unsigned int __fastcall CCountedStringPool::Hash(const CCountedStringPool *const this, const char *pszKey)
{
  if ( this->m_caseSensitivity != StringPoolCase_t::StringPoolCaseInsensitive )
    return HashString(pszKey);
  else
    return MurmurHash2LowerCase(pszKey, 0x3501A674u);
}


// CCountedStringPool::FindStringHandle  (line 170, @0x0000000002f8e5b0, libserver.so)  // inlines: operator[]
// calls: CCountedStringPool::Hash, V_stricmp_fast
// callers: CUtlFilenameSymbolTable::FindFileName, CUtlFilenameSymbolTable::FindOrAddFileName, CCountedStringPool::FindString
unsigned __int16 __fastcall CCountedStringPool::FindStringHandle(
        const CCountedStringPool *const this,
        const char *pIntrinsic)
{
  unsigned __int16 m_nNextElement; // r12
  CCountedStringPool::hash_item_t *m_pMemory; // rax
  __int64 v6; // rbx

  if ( pIntrinsic == 0 )
    return 0;
  m_nNextElement = this->m_HashTable.m_Memory.m_pMemory[CCountedStringPool::Hash(this, pIntrinsic) & 0x3FF];
  if ( m_nNextElement == 0 )
    return 0;
  m_pMemory = this->m_Elements.m_Memory.m_pMemory;
  while ( 1 )
  {
    v6 = m_nNextElement;
    if ( V_stricmp_fast(pIntrinsic, m_pMemory[v6].m_pString) == 0 )
      break;
    m_pMemory = this->m_Elements.m_Memory.m_pMemory;
    m_nNextElement = m_pMemory[v6].m_nNextElement;
    if ( m_nNextElement == 0 )
      return 0;
  }
  return m_nNextElement;
}


// CCountedStringPool::FindString  (line 194, @0x0000000002f8e630, libserver.so)  // inlines: operator[]
// calls: CCountedStringPool::FindStringHandle
const char *__fastcall CCountedStringPool::FindString(const CCountedStringPool *const this, const char *pIntrinsic)
{
  if ( pIntrinsic != 0 )
    return this->m_Elements.m_Memory.m_pMemory[CCountedStringPool::FindStringHandle(this, pIntrinsic)].m_pString;
  else
    return 0;
}


// CCountedStringPool::ReferenceStringHandle  (line 203, @0x0000000002f8efc0, libserver.so)  // inlines: AddToTail, GrowMemory, V_strlen, _V_strcpy, operator[], strcpy
// calls: CCountedStringPool::Hash, V_stricmp_fast, strlen, operator new [], strcpy, CUtlMemory<CCountedStringPool::hash_item_t, int>::Grow
// callers: CUtlFilenameSymbolTable::FindOrAddFileName, CCountedStringPool::ReferenceString
unsigned __int16 __fastcall CCountedStringPool::ReferenceStringHandle(
        CCountedStringPool *const this,
        const char *pIntrinsic)
{
  unsigned __int16 result; // ax
  __int64 v5; // r14
  unsigned __int16 m_nNextElement; // r12
  CCountedStringPool::hash_item_t *m_pMemory; // rdx
  unsigned __int64 v8; // rbx
  int m_Size; // r12d
  int v10; // eax
  __int64 v11; // rbx
  CCountedStringPool::hash_item_t *v12; // rax
  int v13; // eax
  char *v14; // rax
  CCountedStringPool::hash_item_t *v15; // rbx
  unsigned __int8 m_nReferenceCount; // dl

  result = 0;
  if ( pIntrinsic != 0 )
  {
    v5 = CCountedStringPool::Hash(this, pIntrinsic) & 0x3FF;
    m_nNextElement = this->m_HashTable.m_Memory.m_pMemory[v5];
    if ( m_nNextElement != 0 )
    {
      m_pMemory = this->m_Elements.m_Memory.m_pMemory;
      while ( 1 )
      {
        v8 = m_nNextElement;
        if ( V_stricmp_fast(pIntrinsic, m_pMemory[v8].m_pString) == 0 )
          break;
        m_pMemory = this->m_Elements.m_Memory.m_pMemory;
        m_nNextElement = m_pMemory[v8].m_nNextElement;
        if ( m_nNextElement == 0 )
          goto LABEL_6;
      }
      v15 = &this->m_Elements.m_Memory.m_pMemory[v8];
      result = m_nNextElement;
      m_nReferenceCount = v15->m_nReferenceCount;
      if ( m_nReferenceCount != 0xFF )
        v15->m_nReferenceCount = m_nReferenceCount + 1;
    }
    else
    {
LABEL_6:
      LOWORD(m_Size) = this->m_FreeListStart;
      if ( m_Size != 0 )
      {
        v11 = m_Size;
        v12 = &this->m_Elements.m_Memory.m_pMemory[v11];
        this->m_FreeListStart = v12->m_nNextElement;
      }
      else
      {
        m_Size = this->m_Elements.m_Size;
        v10 = m_Size;
        if ( m_Size == this->m_Elements.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CCountedStringPool::hash_item_t,int>::Grow(&this->m_Elements.m_Memory, 1);
          v10 = this->m_Elements.m_Size;
        }
        v11 = m_Size;
        this->m_Elements.m_Size = v10 + 1;
        v12 = &this->m_Elements.m_Memory.m_pMemory[v11];
      }
      v12->m_nReferenceCount = 1;
      this->m_Elements.m_Memory.m_pMemory[v11].m_nNextElement = this->m_HashTable.m_Memory.m_pMemory[v5];
      this->m_HashTable.m_Memory.m_pMemory[v5] = m_Size;
      v13 = strlen(pIntrinsic);
      v14 = operator new[](v13 + 1);
      this->m_Elements.m_Memory.m_pMemory[v11].m_pString = strcpy(v14, pIntrinsic);
      return m_Size;
    }
  }
  return result;
}


// CCountedStringPool::ReferenceString  (line 253, @0x0000000002f8f130, libserver.so)  // inlines: operator[]
// calls: CCountedStringPool::ReferenceStringHandle
const char *__fastcall CCountedStringPool::ReferenceString(CCountedStringPool *const this, const char *pIntrinsic)
{
  if ( pIntrinsic != 0 )
    return this->m_Elements.m_Memory.m_pMemory[CCountedStringPool::ReferenceStringHandle(this, pIntrinsic)].m_pString;
  else
    return 0;
}


// CCountedStringPool::DereferenceString  (line 261, @0x0000000002f8e670, libserver.so)  // inlines: operator[]
// calls: CCountedStringPool::Hash, V_stricmp_fast, operator delete []
void __fastcall CCountedStringPool::DereferenceString(CCountedStringPool *const this, const char *pIntrinsic)
{
  unsigned __int16 v4; // r15
  CCountedStringPool::hash_item_t *m_pMemory; // rax
  __int64 v6; // r14
  CCountedStringPool::hash_item_t *v7; // rcx
  unsigned __int8 m_nReferenceCount; // si
  unsigned __int16 m_nNextElement; // cx
  unsigned __int64 v10; // rbx
  bool v11; // zf
  unsigned __int16 v12; // cx
  CCountedStringPool::hash_item_t *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-38h]

  if ( pIntrinsic == 0 )
    return;
  v14 = (CCountedStringPool::Hash(this, pIntrinsic) % this->m_HashTable.m_Size);
  v4 = this->m_HashTable.m_Memory.m_pMemory[v14];
  if ( v4 == 0 )
    return;
  m_pMemory = this->m_Elements.m_Memory.m_pMemory;
  v6 = 0;
  while ( 1 )
  {
    v10 = v4;
    v11 = V_stricmp_fast(pIntrinsic, m_pMemory[v10].m_pString) == 0;
    m_pMemory = this->m_Elements.m_Memory.m_pMemory;
    if ( v11 )
      break;
    m_nNextElement = m_pMemory[v10].m_nNextElement;
    if ( m_nNextElement == 0 )
      return;
LABEL_7:
    v6 = v4;
    v4 = m_nNextElement;
  }
  v7 = &m_pMemory[v10];
  m_nReferenceCount = m_pMemory[v10].m_nReferenceCount;
  if ( m_nReferenceCount == 0xFF
    || (v7->m_nReferenceCount = m_nReferenceCount - 1,
        m_pMemory = this->m_Elements.m_Memory.m_pMemory,
        v7 = &m_pMemory[v10],
        m_pMemory[v10].m_nReferenceCount != 0) )
  {
    m_nNextElement = v7->m_nNextElement;
    if ( m_nNextElement == 0 )
      return;
    goto LABEL_7;
  }
  v12 = v7->m_nNextElement;
  if ( v6 != 0 )
    m_pMemory[v6].m_nNextElement = v12;
  else
    this->m_HashTable.m_Memory.m_pMemory[v14] = v12;
  v13 = &this->m_Elements.m_Memory.m_pMemory[v10];
  if ( v13->m_pString != 0 )
  {
    operator delete[](v13->m_pString);
    v13 = &this->m_Elements.m_Memory.m_pMemory[v10];
  }
  v13->m_pString = 0;
  this->m_Elements.m_Memory.m_pMemory[v10].m_nReferenceCount = 0;
  this->m_Elements.m_Memory.m_pMemory[v10].m_nNextElement = this->m_FreeListStart;
  this->m_FreeListStart = v4;
}


// CCountedStringPool::HandleToString  (line 310, @0x0000000002f8e7b0, libserver.so)  // inlines: operator[]
// callers: CUtlFilenameSymbolTable::String
const char *__fastcall CCountedStringPool::HandleToString(
        const CCountedStringPool *const this,
        unsigned __int16 handle)
{
  return this->m_Elements.m_Memory.m_pMemory[handle].m_pString;
}


// CCountedStringPool::SpewStrings  (line 315, @0x0000000002f8e7d0, libserver.so)  // inlines: operator[]
// calls: Msg
// callers: CUtlFilenameSymbolTable::SpewStrings
// strings: "EMPTY - ok for slot zero only!", "String %d: ref:%d %s\n", "\n%d total counted strings."
void __fastcall CCountedStringPool::SpewStrings(const CCountedStringPool *const this)
{
  int m_Size; // esi
  __int64 v3; // r12
  int v4; // ebx
  __int64 v5; // rsi
  CCountedStringPool::hash_item_t *v6; // rax
  const char *m_pString; // rcx

  m_Size = this->m_Elements.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = v4;
      v6 = &this->m_Elements.m_Memory.m_pMemory[v3];
      m_pString = v6->m_pString;
      if ( v6->m_pString == 0 )
        m_pString = "EMPTY - ok for slot zero only!";
      ++v4;
      ++v3;
      Msg("String %d: ref:%d %s\n", v5, v6->m_nReferenceCount, m_pString);
      m_Size = this->m_Elements.m_Size;
    }
    while ( m_Size > v4 );
  }
  Msg("\n%d total counted strings.", m_Size);
}


// CCountedStringPool::SaveToBuffer  (line 359, @0x0000000002f8e850, libserver.so)  // inlines: IsValid, LowLevelByteSwap<int>, LowLevelByteSwap<short unsigned int>, PeekPut, PutInt, PutType<int>, PutType<short unsigned int>, PutTypeBin<int>, PutTypeBin<short unsigned int>, PutTypeBin<unsigned char>, PutUnsignedChar, PutUnsignedShort, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, strlen, CUtlBuffer::PutString
// callers: CUtlFilenameSymbolTable::SaveToBuffer
// strings: "%hu"
bool __fastcall CCountedStringPool::SaveToBuffer(const CCountedStringPool *const this, CUtlBuffer *const buffer)
{
  bool result; // al
  unsigned __int16 m_FreeListStart; // r13
  int m_Size; // r13d
  __int64 i; // r13
  unsigned __int16 *m_pMemory; // rax
  unsigned __int16 v9; // r14
  int v10; // eax
  int v11; // r13d
  __int64 v12; // r13
  int v13; // r14d
  unsigned __int8 m_nReferenceCount; // r15
  const char *m_pString; // r15
  const char *v16; // rsi
  CCountedStringPool::hash_item_t *v17; // rax
  int v18; // eax
  int m_Put; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int8 *v22; // rdx
  unsigned __int8 *v23; // rdx
  int v24; // eax
  unsigned __int8 *v25; // rdx
  unsigned __int8 *v26; // rdx
  unsigned __int8 *v27; // rdx
  unsigned __int8 *v28; // rdx
  unsigned __int16 v29; // [rsp+20h] [rbp-40h]
  unsigned __int16 m_nNextElement; // [rsp+22h] [rbp-3Eh]
  int v31; // [rsp+28h] [rbp-38h]
  __int16 v32; // [rsp+2Ch] [rbp-34h]
  __int16 v33; // [rsp+2Ch] [rbp-34h]
  int v34; // [rsp+2Ch] [rbp-34h]
  __int16 v35; // [rsp+2Ch] [rbp-34h]
  int v36; // [rsp+2Ch] [rbp-34h]

  result = 1;
  if ( this->m_Elements.m_Size <= 1 )
    return result;
  if ( (buffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buffer, "%d", 827347779);
  }
  else if ( CUtlBuffer::CheckPut(buffer, 4) )
  {
    if ( (*&buffer->m_Byteswap & 1) != 0 )
    {
      m_Put = buffer->m_Put;
      v26 = &buffer->m_Memory.m_pMemory[m_Put - buffer->m_nOffset];
      if ( v26 != 0 )
      {
        *v26 = 1129533489;
        m_Put = buffer->m_Put;
      }
    }
    else
    {
      *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = 827347779;
      m_Put = buffer->m_Put;
    }
    buffer->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(buffer);
    m_FreeListStart = this->m_FreeListStart;
    if ( (buffer->m_Flags & 1) != 0 )
      goto LABEL_5;
    goto LABEL_39;
  }
  m_FreeListStart = this->m_FreeListStart;
  if ( (buffer->m_Flags & 1) != 0 )
  {
LABEL_5:
    CUtlBuffer::Printf(buffer, "%hu", m_FreeListStart);
    goto LABEL_6;
  }
LABEL_39:
  if ( CUtlBuffer::CheckPut(buffer, 2) )
  {
    if ( (*&buffer->m_Byteswap & 1) != 0 )
    {
      v20 = buffer->m_Put;
      v27 = &buffer->m_Memory.m_pMemory[v20 - buffer->m_nOffset];
      if ( v27 != 0 )
      {
        LOBYTE(v35) = HIBYTE(m_FreeListStart);
        HIBYTE(v35) = m_FreeListStart;
        *v27 = v35;
        v20 = buffer->m_Put;
      }
    }
    else
    {
      *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = m_FreeListStart;
      v20 = buffer->m_Put;
    }
    buffer->m_Put = v20 + 2;
    CUtlBuffer::AddNullTermination(buffer);
    m_Size = this->m_HashTable.m_Size;
    if ( (buffer->m_Flags & 1) != 0 )
      goto LABEL_7;
    goto LABEL_43;
  }
LABEL_6:
  m_Size = this->m_HashTable.m_Size;
  if ( (buffer->m_Flags & 1) != 0 )
  {
LABEL_7:
    CUtlBuffer::Printf(buffer, "%d", m_Size);
    goto LABEL_8;
  }
LABEL_43:
  if ( CUtlBuffer::CheckPut(buffer, 4) )
  {
    if ( (*&buffer->m_Byteswap & 1) != 0 )
    {
      v21 = buffer->m_Put;
      v25 = &buffer->m_Memory.m_pMemory[v21 - buffer->m_nOffset];
      if ( v25 != 0 )
      {
        LOBYTE(v34) = HIBYTE(m_Size);
        BYTE1(v34) = BYTE2(m_Size);
        BYTE2(v34) = BYTE1(m_Size);
        HIBYTE(v34) = m_Size;
        *v25 = v34;
        v21 = buffer->m_Put;
      }
    }
    else
    {
      *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = m_Size;
      v21 = buffer->m_Put;
    }
    buffer->m_Put = v21 + 4;
    CUtlBuffer::AddNullTermination(buffer);
  }
LABEL_8:
  for ( i = 0; this->m_HashTable.m_Size > i; ++i )
  {
    while ( 1 )
    {
      m_pMemory = this->m_HashTable.m_Memory.m_pMemory;
      v9 = m_pMemory[i];
      if ( (buffer->m_Flags & 1) == 0 )
        break;
      CUtlBuffer::Printf(buffer, "%hu", v9);
LABEL_11:
      if ( this->m_HashTable.m_Size <= ++i )
        goto LABEL_17;
    }
    v29 = m_pMemory[i];
    if ( !CUtlBuffer::CheckPut(buffer, 2) )
      goto LABEL_11;
    if ( (*&buffer->m_Byteswap & 1) != 0 )
    {
      v10 = buffer->m_Put;
      v22 = &buffer->m_Memory.m_pMemory[v10 - buffer->m_nOffset];
      if ( v22 != 0 )
      {
        LOBYTE(v32) = HIBYTE(v29);
        HIBYTE(v32) = v29;
        *v22 = v32;
        v10 = buffer->m_Put;
      }
    }
    else
    {
      *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v9;
      v10 = buffer->m_Put;
    }
    buffer->m_Put = v10 + 2;
    CUtlBuffer::AddNullTermination(buffer);
  }
LABEL_17:
  v11 = this->m_Elements.m_Size;
  if ( (buffer->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(buffer, "%d", v11);
  }
  else
  {
    v31 = this->m_Elements.m_Size;
    if ( CUtlBuffer::CheckPut(buffer, 4) )
    {
      if ( (*&buffer->m_Byteswap & 1) != 0 )
      {
        v24 = buffer->m_Put;
        v28 = &buffer->m_Memory.m_pMemory[v24 - buffer->m_nOffset];
        if ( v28 != 0 )
        {
          LOBYTE(v36) = HIBYTE(v31);
          BYTE1(v36) = BYTE2(v31);
          BYTE2(v36) = BYTE1(v31);
          HIBYTE(v36) = v31;
          *v28 = v36;
          v24 = buffer->m_Put;
        }
      }
      else
      {
        *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = v11;
        v24 = buffer->m_Put;
      }
      buffer->m_Put = v24 + 4;
      CUtlBuffer::AddNullTermination(buffer);
    }
  }
  v12 = 1;
  v13 = 1;
  if ( this->m_Elements.m_Size <= 1 )
    return buffer->m_Error == 0;
  while ( 1 )
  {
    v17 = this->m_Elements.m_Memory.m_pMemory;
    if ( (buffer->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(buffer, "%hu", v17[v12].m_nNextElement);
    }
    else
    {
      m_nNextElement = v17[v12].m_nNextElement;
      if ( CUtlBuffer::CheckPut(buffer, 2) )
      {
        if ( (*&buffer->m_Byteswap & 1) != 0 )
        {
          v18 = buffer->m_Put;
          v23 = &buffer->m_Memory.m_pMemory[v18 - buffer->m_nOffset];
          if ( v23 != 0 )
          {
            LOBYTE(v33) = HIBYTE(m_nNextElement);
            HIBYTE(v33) = m_nNextElement;
            *v23 = v33;
            v18 = buffer->m_Put;
          }
        }
        else
        {
          *&buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = m_nNextElement;
          v18 = buffer->m_Put;
        }
        buffer->m_Put = v18 + 2;
        CUtlBuffer::AddNullTermination(buffer);
      }
    }
    m_nReferenceCount = this->m_Elements.m_Memory.m_pMemory[v12].m_nReferenceCount;
    if ( (buffer->m_Flags & 1) != 0 )
    {
      CUtlBuffer::Printf(buffer, "%hu", m_nReferenceCount);
    }
    else if ( CUtlBuffer::CheckPut(buffer, 1) )
    {
      buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = m_nReferenceCount;
      ++buffer->m_Put;
      CUtlBuffer::AddNullTermination(buffer);
    }
    m_pString = this->m_Elements.m_Memory.m_pMemory[v12].m_pString;
    if ( strlen(m_pString) > 0x3FF )
      break;
    v16 = "";
    if ( m_pString != 0 )
      v16 = m_pString;
    ++v13;
    ++v12;
    CUtlBuffer::PutString(buffer, v16);
    if ( this->m_Elements.m_Size <= v13 )
      return buffer->m_Error == 0;
  }
  return 0;
}


// CCountedStringPool::RestoreFromBuffer  (line 396, @0x0000000002f8f630, libserver.so)  // inlines: AddMultipleToTail, GetInt, GetType<int>, GetType<short unsigned int>, GetTypeBin<int>, GetTypeBin<short unsigned int>, GetTypeBin<unsigned char>, GetTypeText<int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, GrowMemory, GrowVector, InsertMultipleBefore, IsValid, LowLevelByteSwap<int>, LowLevelByteSwap<short unsigned int>, MemAlloc_StrDupFunc, PeekGet, RemoveMultipleFromTail, SetCount, StringToNumber<int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<short unsigned int>, V_memcpy, memcpy, operator[], strcpy
// calls: CUtlBuffer::CheckArbitraryPeekGet, V_strtoi64, CCountedStringPool::FreeAll, CUtlBuffer::CheckGet, V_strtoui64, CUtlBuffer::GetString, strcpy, CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowVector, CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ShiftElementsRight, CUtlMemory<CCountedStringPool::hash_item_t, int>::Grow, __stack_chk_fail
// callers: CUtlFilenameSymbolTable::RestoreFromBuffer
bool __fastcall CCountedStringPool::RestoreFromBuffer(CCountedStringPool *const this, CUtlBuffer *const buffer)
{
  bool result; // al
  int v5; // r12d
  int v6; // eax
  bool v7; // al
  unsigned __int16 v8; // dx
  int v9; // r12d
  int m_Size; // r14d
  int v11; // r13d
  unsigned __int64 v12; // r14
  __int64 v13; // r13
  bool v14; // al
  unsigned __int16 v15; // dx
  unsigned __int16 *v16; // r12
  bool v17; // al
  int v18; // eax
  unsigned __int16 v19; // dx
  int m_Get; // edx
  int v21; // eax
  int v22; // edx
  unsigned __int8 *v23; // rdx
  unsigned __int8 *v24; // rax
  int v25; // edx
  int v26; // r12d
  int v27; // r13d
  int m_nAllocationCount; // eax
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  CCountedStringPool::hash_item_t *v31; // r14
  bool v32; // al
  unsigned __int16 v33; // dx
  CCountedStringPool::hash_item_t *v34; // r14
  bool v35; // al
  unsigned __int8 v36; // dl
  CCountedStringPool::hash_item_t *v37; // r14
  char *v38; // rax
  bool v39; // al
  int v40; // eax
  int v41; // edx
  bool v42; // al
  int v43; // eax
  bool v44; // al
  int v45; // edx
  int v46; // eax
  unsigned __int8 v47; // al
  int v48; // edx
  unsigned __int8 *v49; // rdx
  int v50; // r13d
  int v51; // r12d
  int v52; // r13d
  unsigned __int8 *v53; // rdx
  unsigned __int8 *v54; // rax
  unsigned __int8 *v55; // rax
  int v56; // [rsp+18h] [rbp-468h]
  int v57; // [rsp+18h] [rbp-468h]
  int v58; // [rsp+20h] [rbp-460h]
  __int64 v59; // [rsp+20h] [rbp-460h]
  int v60; // [rsp+30h] [rbp-450h] BYREF
  int nIncrement; // [rsp+34h] [rbp-44Ch] BYREF
  unsigned __int8 *v62; // [rsp+38h] [rbp-448h] BYREF
  char tempString[1032]; // [rsp+40h] [rbp-440h] BYREF
  unsigned __int64 v64; // [rsp+448h] [rbp-38h]

  v64 = __readfsqword(0x28u);
  if ( (buffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
    {
      v62 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
      v5 = v62;
      v6 = V_strtoi64(v62, &v62, 10);
      v60 = v6;
      if ( v62 != v5 )
        buffer->m_Get += v62 - v5;
      if ( v6 == 827347779 )
        goto LABEL_8;
    }
    return 0;
  }
  result = CUtlBuffer::CheckGet(buffer, 4);
  if ( result )
  {
    if ( (*&buffer->m_Byteswap & 1) != 0 )
    {
      m_Get = buffer->m_Get;
      v24 = &buffer->m_Memory.m_pMemory[m_Get - buffer->m_nOffset];
      if ( v24 == 0 )
        v24 = &v60;
      LODWORD(v62) = v60;
      LOBYTE(v62) = v24[3];
      BYTE1(v62) = v24[2];
      BYTE2(v62) = v24[1];
      BYTE3(v62) = *v24;
      v21 = v62;
    }
    else
    {
      m_Get = buffer->m_Get;
      v21 = *&buffer->m_Memory.m_pMemory[m_Get - buffer->m_nOffset];
    }
    buffer->m_Get = m_Get + 4;
    if ( v21 == 827347779 )
    {
LABEL_8:
      CCountedStringPool::FreeAll(this);
      if ( (buffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        v7 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement);
        v8 = 0;
        if ( v7 )
        {
          v62 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
          v51 = v62;
          LOWORD(v60) = V_strtoui64(v62, &v62, 10);
          v8 = v60;
          if ( v62 != v51 )
            buffer->m_Get += v62 - v51;
        }
      }
      else
      {
        v42 = CUtlBuffer::CheckGet(buffer, 2);
        v8 = 0;
        if ( v42 )
        {
          if ( (*&buffer->m_Byteswap & 1) != 0 )
          {
            v43 = buffer->m_Get;
            v53 = &buffer->m_Memory.m_pMemory[v43 - buffer->m_nOffset];
            if ( v53 == 0 )
              v53 = &v60;
            LOWORD(v62) = v60;
            LOBYTE(v62) = v53[1];
            BYTE1(v62) = *v53;
            v8 = v62;
          }
          else
          {
            v43 = buffer->m_Get;
            v8 = *&buffer->m_Memory.m_pMemory[v43 - buffer->m_nOffset];
          }
          buffer->m_Get = v43 + 2;
        }
      }
      this->m_FreeListStart = v8;
      if ( (buffer->m_Flags & 1) != 0 )
      {
        v9 = 0;
        nIncrement = 128;
        if ( CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
        {
          v62 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
          v50 = v62;
          v60 = V_strtoi64(v62, &v62, 10);
          v9 = v60;
          if ( v62 != v50 )
            buffer->m_Get += v62 - v50;
        }
      }
      else
      {
        v9 = 0;
        if ( CUtlBuffer::CheckGet(buffer, 4) )
        {
          if ( (*&buffer->m_Byteswap & 1) != 0 )
          {
            v41 = buffer->m_Get;
            v54 = &buffer->m_Memory.m_pMemory[v41 - buffer->m_nOffset];
            if ( v54 == 0 )
              v54 = &v60;
            LODWORD(v62) = v60;
            LOBYTE(v62) = v54[3];
            BYTE1(v62) = v54[2];
            BYTE2(v62) = v54[1];
            BYTE3(v62) = *v54;
            v9 = v62;
          }
          else
          {
            v41 = buffer->m_Get;
            v9 = *&buffer->m_Memory.m_pMemory[v41 - buffer->m_nOffset];
          }
          buffer->m_Get = v41 + 4;
        }
      }
      m_Size = this->m_HashTable.m_Size;
      v11 = v9 - m_Size;
      if ( v9 - m_Size > 0 )
      {
        CUtlVectorBase<unsigned short,CUtlMemory<unsigned short,int>>::GrowVector(&this->m_HashTable, v11);
        CUtlVectorBase<unsigned short,CUtlMemory<unsigned short,int>>::ShiftElementsRight(
          &this->m_HashTable,
          m_Size,
          v11);
      }
      else if ( v9 != m_Size )
      {
        this->m_HashTable.m_Size = v9;
      }
      if ( v9 > 0 )
      {
        v12 = 0;
        v13 = 2LL * (v9 - 1) + 2;
        while ( 1 )
        {
          v16 = &this->m_HashTable.m_Memory.m_pMemory[v12 / 2];
          if ( (buffer->m_Flags & 1) != 0 )
            break;
          v17 = CUtlBuffer::CheckGet(buffer, 2);
          v15 = 0;
          if ( v17 )
          {
            if ( (*&buffer->m_Byteswap & 1) != 0 )
            {
              v18 = buffer->m_Get;
              v22 = v18 - buffer->m_nOffset;
              LOWORD(v62) = v60;
              v23 = &buffer->m_Memory.m_pMemory[v22];
              if ( v23 == 0 )
                v23 = &v60;
              LOBYTE(v62) = v23[1];
              BYTE1(v62) = *v23;
              v19 = v62;
            }
            else
            {
              v18 = buffer->m_Get;
              v19 = *&buffer->m_Memory.m_pMemory[v18 - buffer->m_nOffset];
            }
            v12 += 2LL;
            buffer->m_Get = v18 + 2;
            *v16 = v19;
            if ( v12 == v13 )
              goto LABEL_24;
          }
          else
          {
LABEL_18:
            v12 += 2LL;
            *v16 = v15;
            if ( v12 == v13 )
              goto LABEL_24;
          }
        }
        nIncrement = 128;
        v14 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement);
        v15 = 0;
        if ( v14 )
        {
          v62 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
          v58 = v62;
          LOWORD(v60) = V_strtoui64(v62, &v62, 10);
          v15 = v60;
          if ( v62 != v58 )
            buffer->m_Get += v62 - v58;
        }
        goto LABEL_18;
      }
LABEL_24:
      if ( (buffer->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        if ( !CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement) )
          return buffer->m_Error == 0;
        v62 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
        v52 = v62;
        v60 = V_strtoi64(v62, &v62, 10);
        v26 = v60;
        if ( v62 != v52 )
          buffer->m_Get += v62 - v52;
      }
      else
      {
        if ( !CUtlBuffer::CheckGet(buffer, 4) )
          return buffer->m_Error == 0;
        if ( (*&buffer->m_Byteswap & 1) != 0 )
        {
          v25 = buffer->m_Get;
          v55 = &buffer->m_Memory.m_pMemory[v25 - buffer->m_nOffset];
          if ( v55 == 0 )
            v55 = &v60;
          LODWORD(v62) = v60;
          LOBYTE(v62) = v55[3];
          BYTE1(v62) = v55[2];
          BYTE2(v62) = v55[1];
          BYTE3(v62) = *v55;
          v26 = v62;
        }
        else
        {
          v25 = buffer->m_Get;
          v26 = *&buffer->m_Memory.m_pMemory[v25 - buffer->m_nOffset];
        }
        buffer->m_Get = v25 + 4;
      }
      if ( v26 > 1 )
      {
        v27 = v26 + this->m_Elements.m_Size - 1;
        m_nAllocationCount = this->m_Elements.m_Memory.m_nAllocationCount;
        if ( v27 > m_nAllocationCount )
          CUtlMemory<CCountedStringPool::hash_item_t,int>::Grow(&this->m_Elements.m_Memory, v27 - m_nAllocationCount);
        this->m_Elements.m_Size = v27;
        v29 = (v26 - 2) + 2LL;
        v30 = 16;
        v59 = 16 * v29;
        v31 = this->m_Elements.m_Memory.m_pMemory + 1;
        if ( (buffer->m_Flags & 1) == 0 )
          goto LABEL_53;
LABEL_48:
        nIncrement = 128;
        v32 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement);
        v33 = 0;
        if ( v32 )
        {
          v62 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
          v56 = v62;
          LOWORD(v60) = V_strtoui64(v62, &v62, 10);
          v33 = v60;
          if ( v62 != v56 )
            buffer->m_Get += v62 - v56;
        }
        while ( 1 )
        {
          v31->m_nNextElement = v33;
          v34 = &this->m_Elements.m_Memory.m_pMemory[v30 / 0x10];
          if ( (buffer->m_Flags & 1) != 0 )
          {
            nIncrement = 128;
            v35 = CUtlBuffer::CheckArbitraryPeekGet(buffer, 0, &nIncrement);
            v36 = 0;
            if ( v35 )
            {
              v62 = &buffer->m_Memory.m_pMemory[buffer->m_Get - buffer->m_nOffset];
              v57 = v62;
              v47 = V_strtoui64(v62, &v62, 10);
              if ( v62 != v57 )
                buffer->m_Get += v62 - v57;
              v36 = v47;
            }
          }
          else
          {
            v44 = CUtlBuffer::CheckGet(buffer, 1);
            v36 = 0;
            if ( v44 )
            {
              v45 = buffer->m_Get;
              v46 = v45 + 1;
              v36 = buffer->m_Memory.m_pMemory[v45 - buffer->m_nOffset];
              buffer->m_Get = v46;
            }
          }
          v34->m_nReferenceCount = v36;
          CUtlBuffer::GetString(buffer, tempString, 1024);
          v37 = &this->m_Elements.m_Memory.m_pMemory[v30 / 0x10];
          v30 += 16LL;
          v38 = (**g_pMemAlloc)(g_pMemAlloc, strlen(tempString) + 1);
          v37->m_pString = strcpy(v38, tempString);
          if ( v30 == v59 )
            break;
          v31 = &this->m_Elements.m_Memory.m_pMemory[v30 / 0x10];
          if ( (buffer->m_Flags & 1) != 0 )
            goto LABEL_48;
LABEL_53:
          v39 = CUtlBuffer::CheckGet(buffer, 2);
          v33 = 0;
          if ( v39 )
          {
            if ( (*&buffer->m_Byteswap & 1) != 0 )
            {
              v40 = buffer->m_Get;
              v48 = v40 - buffer->m_nOffset;
              LOWORD(v62) = v60;
              v49 = &buffer->m_Memory.m_pMemory[v48];
              if ( v49 == 0 )
                v49 = &v60;
              LOBYTE(v62) = v49[1];
              BYTE1(v62) = *v49;
              v33 = v62;
            }
            else
            {
              v40 = buffer->m_Get;
              v33 = *&buffer->m_Memory.m_pMemory[v40 - buffer->m_nOffset];
            }
            buffer->m_Get = v40 + 2;
          }
        }
      }
      return buffer->m_Error == 0;
    }
    return 0;
  }
  return result;
}


