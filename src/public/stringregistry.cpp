// Reconstructed from DWARF by pahole; not original source.

// src/public/stringregistry.cpp:27
struct StringTable_t : public CUtlDict<int, short unsigned int> {
public:

	StringTable_t();
	~StringTable_t();

	// sizeof = 40
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CStringRegistry::AddString  (line 38, @0x0000000002f4a140, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CGameEntitySystem::SortEntities, CSoundscapeSystem::AddSoundscapeFile, EventList_AddEventEntry
unsigned __int16 __fastcall CStringRegistry::AddString(
        CStringRegistry *const this,
        const char *stringText,
        int stringID)
{
  StringTable_t *m_pStringList; // rbx
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Left; // ax
  char v11; // cl
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,int,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *m_pMemory; // rax
  bool v14; // r14
  unsigned __int16 v15; // r13
  CUtlMap<char const*,int,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-40h] BYREF

  m_pStringList = this->m_pStringList;
  if ( stringText != 0 )
  {
    v6 = strlen(stringText);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, stringText);
  }
  else
  {
    v8 = 0;
  }
  m_Root = m_pStringList->m_Elements.m_Tree.m_Root;
  pCopyFrom.key = v8;
  pCopyFrom.elem = stringID;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v14 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v12 = !m_pStringList->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
             &pCopyFrom.key,
             &m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.key);
    m_pMemory = m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v12 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v11 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v11 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_6;
LABEL_9:
  v14 = v11;
LABEL_10:
  v15 = CUtlRBTree<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &m_pStringList->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &m_pStringList->m_Elements.m_Tree,
    v15,
    m_Root,
    v14);
  ++m_pStringList->m_Elements.m_Tree.m_NumElements;
  return v15;
}


// CStringRegistry::GetStringID  (line 48, @0x0000000002f495b0, libserver.so)  // inlines: Element, Find, IsIdxValid, IsValidIndex, LeftChild, RightChild, operator(), operator[]
// callers: CGameEntitySystem::CompareSpawnOrder, CSoundscapeSystem::GetSoundscapeIndex, EventListFromString
int __fastcall CStringRegistry::GetStringID(CStringRegistry *const this, const char *stringText)
{
  StringTable_t *m_pStringList; // r15
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,int,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *m_pMemory; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  int result; // eax
  __int64 v8; // rdx
  _QWORD v10[8]; // [rsp+10h] [rbp-40h] BYREF

  m_pStringList = this->m_pStringList;
  if ( stringText != 0 )
  {
    m_Root = m_pStringList->m_Elements.m_Tree.m_Root;
    v10[0] = stringText;
    if ( m_Root == 0xFFFF )
    {
      v5 = 0xFFFF;
    }
    else
    {
      m_pMemory = m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = m_Root;
          v6 = m_Root;
          if ( !m_pStringList->m_Elements.m_Tree.m_LessFunc.m_LessFunc(v10, &m_pMemory[v6].m_Data.key) )
            break;
          m_pMemory = m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[m_Root].m_Left;
          if ( m_Root == 0xFFFF )
            goto LABEL_8;
        }
        if ( !m_pStringList->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                &m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data.key,
                v10) )
          break;
        m_pMemory = m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[v6].m_Right;
        if ( m_Root == 0xFFFF )
        {
LABEL_8:
          v5 = 0xFFFF;
          m_pStringList = this->m_pStringList;
          goto LABEL_9;
        }
      }
      m_pStringList = this->m_pStringList;
    }
  }
  else
  {
    v5 = 0xFFFF;
    m_Root = -1;
  }
LABEL_9:
  result = -1;
  if ( m_pStringList->m_Elements.m_Tree.m_Elements.m_nAllocationCount > v5
    && m_Root <= m_pStringList->m_Elements.m_Tree.m_LastAlloc.index
    && m_Root != 0xFFFF )
  {
    v8 = &m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root];
    if ( m_Root != *v8 )
      return *(v8 + 16);
  }
  return result;
}


// CStringRegistry::GetNumStrings  (line 59, @0x0000000002f496c0, libserver.so)
// callers: CSoundscapeSystem::AddSoundscapeFile, CSoundscapeSystem::InitGlobalSoundscapes, CSoundscapeSystem::ReloadSoundscapes, CSoundscapeSystem::ActiveSpawnGroupChanged
int __fastcall CStringRegistry::GetNumStrings(const CStringRegistry *const this)
{
  if ( this->m_pStringList != 0 )
    return this->m_pStringList->m_Elements.m_Tree.m_NumElements;
  else
    return 0;
}


// CStringRegistry::GetStringText  (line 70, @0x0000000002f49840, libserver.so)  // inlines: Element, First, FirstInorder, GetElementName, LeftChild, Next, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CSoundscapeSystem::AddSoundscapeFile
const char *__fastcall CStringRegistry::GetStringText(CStringRegistry *const this, int stringID)
{
  StringTable_t *m_pStringList; // r12
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<char const*,int,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *m_pMemory; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,int,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *v6; // rdx
  unsigned __int16 m_Left; // cx

  m_pStringList = this->m_pStringList;
  m_Root = this->m_pStringList->m_Elements.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return 0;
  m_pMemory = m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory;
  v6 = &m_pMemory[m_Root];
  m_Left = v6->m_Left;
  if ( v6->m_Left != 0xFFFF )
  {
    while ( 1 )
    {
      v6 = &m_pMemory[m_Left];
      if ( v6->m_Left == 0xFFFF )
        break;
      m_Left = v6->m_Left;
    }
    m_Root = m_Left;
  }
  while ( v6->m_Data.elem != stringID )
  {
    m_Root = CUtlRBTree<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
               &m_pStringList->m_Elements.m_Tree,
               m_Root);
    if ( m_Root == 0xFFFF )
      return 0;
    v6 = &m_pMemory[m_Root];
  }
  return v6->m_Data.key;
}


// CStringRegistry::GetStringForKey  (line 87, @0x0000000002f496e0, libserver.so)  // inlines: GetElementName, IsIdxValid, IsValidIndex, LeftChild, operator[]
// callers: CSoundscapeSystem::PrintDebugInfo, EventList_NameForIndex
const char *__fastcall CStringRegistry::GetStringForKey(CStringRegistry *const this, unsigned __int16 key)
{
  StringTable_t *m_pStringList; // rdx
  const char *result; // rax
  __int64 v4; // rdx

  m_pStringList = this->m_pStringList;
  result = 0;
  if ( key < this->m_pStringList->m_Elements.m_Tree.m_Elements.m_nAllocationCount
    && key <= m_pStringList->m_Elements.m_Tree.m_LastAlloc.index
    && key != 0xFFFF )
  {
    v4 = &m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory[key];
    if ( key != *v4 )
      return *(v4 + 8);
  }
  return result;
}


// CStringRegistry::GetIDForKey  (line 98, @0x0000000002f49720, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild, operator[]
// callers: CSoundscapeSystem::PrintDebugInfo
int __fastcall CStringRegistry::GetIDForKey(CStringRegistry *const this, unsigned __int16 key)
{
  StringTable_t *m_pStringList; // rdx
  int result; // eax
  __int64 v4; // rdx

  m_pStringList = this->m_pStringList;
  result = 0;
  if ( key < this->m_pStringList->m_Elements.m_Tree.m_Elements.m_nAllocationCount
    && key <= m_pStringList->m_Elements.m_Tree.m_LastAlloc.index
    && key != 0xFFFF )
  {
    v4 = &m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory[key];
    if ( key != *v4 )
      return *(v4 + 16);
  }
  return result;
}


// CStringRegistry::ClearStrings  (line 109, @0x0000000002f498f0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, RemoveAll, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll
// callers: CSoundscapeSystem::CleanupSoundscape, CSoundscapeSystem::InitGlobalSoundscapes, CSoundscapeSystem::GameShutdown, CSoundscapeSystem::InitForSpawnGroup, EventList_Free
void __fastcall CStringRegistry::ClearStrings(CStringRegistry *const this)
{
  StringTable_t *m_pStringList; // r12
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<char const*,int,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *m_pMemory; // rcx
  __int64 v4; // rax
  unsigned __int16 m_Left; // si

  m_pStringList = this->m_pStringList;
  m_Root = this->m_pStringList->m_Elements.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory;
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
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &m_pStringList->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&m_pStringList->m_Elements.m_Tree);
}


// CStringRegistry::~CStringRegistry  (line 119, @0x0000000002f499a0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[], ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~StringTable_t
// calls: CUtlRBTree<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int>::Purge, operator delete
// callers: CGameEntitySystem::SortEntities, CSoundscapeSystem::GameShutdown, CSoundscapeSystem::~CSoundscapeSystem, CSoundscapeSystem::PostSpawnGroupUnload
void __fastcall CStringRegistry::~CStringRegistry(CStringRegistry *const this)
{
  StringTable_t *m_pStringList; // r12
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<char const*,int,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *m_pMemory; // rsi
  __int64 v4; // rax
  unsigned __int16 m_Left; // cx

  m_pStringList = this->m_pStringList;
  if ( this->m_pStringList != 0 )
  {
    m_Root = m_pStringList->m_Elements.m_Tree.m_Root;
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory;
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
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory[v4].m_Data.key);
        m_Root = CUtlRBTree<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   &m_pStringList->m_Elements.m_Tree,
                   m_Root);
        if ( m_Root == 0xFFFF )
          break;
        v4 = m_Root;
      }
    }
    CUtlRBTree<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&m_pStringList->m_Elements.m_Tree);
    CUtlRBTree<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&m_pStringList->m_Elements.m_Tree);
    if ( (m_pStringList->m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&m_pStringList->m_Elements.m_Tree.m_Elements);
    operator delete(m_pStringList);
  }
}


// CStringRegistry::CStringRegistry  (line 129, @0x0000000002f49760, libserver.so)  // inlines: CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetCompareType, SetLessFunc, StringTable_t
// calls: operator new
// callers: CGameEntitySystem::SortEntities, CSoundscapeSystem::CSoundscapeSystem, CSoundscapeSystem::InitForSpawnGroup, _GLOBAL__sub_I_eventlist.cpp
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CStringRegistry::CStringRegistry(CStringRegistry *const this)
{
  StringTable_t *v2; // rax

  v2 = operator new(0x28u);
  v2->m_Elements.m_Tree.m_FirstFree = -1;
  v2->m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  v2->m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  v2->m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  v2->m_Elements.m_Tree.m_Root = -1;
  v2->m_Elements.m_Tree.m_NumElements = 0;
  v2->m_Elements.m_Tree.m_LastAlloc.index = -1;
  v2->m_Elements.m_Tree.m_pElements = 0;
  v2->m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_pStringList = v2;
}


// CStringRegistry::First  (line 135, @0x0000000002f497d0, libserver.so)  // inlines: First, FirstInorder, LeftChild, operator[]
// callers: CSoundscapeSystem::PrintDebugInfo
unsigned __int16 __fastcall CStringRegistry::First(const CStringRegistry *const this)
{
  unsigned __int16 result; // ax
  UtlRBTreeNode_t<CUtlMap<char const*,int,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *m_pMemory; // rcx
  unsigned __int16 m_Left; // dx

  result = this->m_pStringList->m_Elements.m_Tree.m_Root;
  if ( result != 0xFFFF )
  {
    m_pMemory = this->m_pStringList->m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[result].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      return m_Left;
    }
  }
  return result;
}


// CStringRegistry::Next  (line 140, @0x0000000002f49830, libserver.so)  // inlines: Next, NextInorder
// calls: CUtlRBTree<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CSoundscapeSystem::PrintDebugInfo
unsigned __int16 __fastcall CStringRegistry::Next(const CStringRegistry *const this, unsigned __int16 key)
{
  return CUtlRBTree<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
           &this->m_pStringList->m_Elements.m_Tree,
           key);
}


// CStringRegistry::InvalidIndex  (line 145, @0x0000000002f49820, libserver.so)
// callers: CSoundscapeSystem::PrintDebugInfo
unsigned __int16 __fastcall CStringRegistry::InvalidIndex(const CStringRegistry *const this)
{
  return -1;
}


