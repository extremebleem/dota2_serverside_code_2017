
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlDict<CBuffCountTracker, int>::CUtlDict  (line 132, @0x00000000026471a0, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetCompareType, SetLessFunc
// calls: CMemAllocSystemInitialize
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// globals: StringLessThan(char const* const&,char const* const&), FastCaselessStringLessThanIgnoreSlashes(char const* const&,char const* const&), FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CUtlDict<CBuffCountTracker,int>::CUtlDict(
        CUtlDict<CBuffCountTracker,int> *const this,
        int compareType,
        int growSize,
        int initSize)
{
  CUtlRBTree<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int> >::Node_t *v6; // rax
  CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::LessFunc_t m_LessFunc; // rdx

  this->m_Elements.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_Elements.m_Tree.m_Elements.m_nAllocationCount = initSize;
  this->m_Elements.m_Tree.m_Elements.m_nGrowSize = growSize & 0x3FFFFFFF;
  if ( initSize == 0 )
  {
    this->m_Elements.m_Tree.m_Root = -1;
    this->m_Elements.m_Tree.m_NumElements = 0;
    this->m_Elements.m_Tree.m_FirstFree = -1;
    this->m_Elements.m_Tree.m_LastAlloc.index = -1;
    this->m_Elements.m_Tree.m_pElements = 0;
    if ( compareType != 2 )
    {
      if ( compareType != 1 )
      {
LABEL_4:
        this->m_Elements.m_Tree.m_LessFunc.m_LessFunc = StringLessThan;
        return;
      }
      goto LABEL_12;
    }
LABEL_10:
    this->m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThanIgnoreSlashes;
    return;
  }
  CMemAllocSystemInitialize();
  v6 = (**g_pMemAlloc)(g_pMemAlloc, 32LL * this->m_Elements.m_Tree.m_Elements.m_nAllocationCount);
  m_LessFunc = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc;
  this->m_Elements.m_Tree.m_Elements.m_pMemory = v6;
  this->m_Elements.m_Tree.m_Root = -1;
  this->m_Elements.m_Tree.m_NumElements = 0;
  this->m_Elements.m_Tree.m_FirstFree = -1;
  this->m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_Elements.m_Tree.m_pElements = v6;
  if ( compareType == 2 )
  {
    if ( m_LessFunc == 0 )
      goto LABEL_10;
  }
  else if ( compareType == 1 )
  {
    if ( m_LessFunc == 0 )
LABEL_12:
      this->m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  }
  else if ( m_LessFunc == 0 )
  {
    goto LABEL_4;
  }
}


// CUtlDict<CEconSchemaSymbol, int>::CUtlDict  (line 132, @0x0000000002ea8490, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetCompareType, SetLessFunc
// calls: CMemAllocSystemInitialize
// callers: CEconItemSchema::CEconItemSchema
// globals: StringLessThan(char const* const&,char const* const&), FastCaselessStringLessThanIgnoreSlashes(char const* const&,char const* const&), FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CUtlDict<CEconSchemaSymbol,int>::CUtlDict(
        CUtlDict<CEconSchemaSymbol,int> *const this,
        int compareType,
        int growSize,
        int initSize)
{
  CUtlRBTree<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int> >::Node_t *v6; // rax
  CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::LessFunc_t m_LessFunc; // rdx

  this->m_Elements.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_Elements.m_Tree.m_Elements.m_nAllocationCount = initSize;
  this->m_Elements.m_Tree.m_Elements.m_nGrowSize = growSize & 0x3FFFFFFF;
  if ( initSize == 0 )
  {
    this->m_Elements.m_Tree.m_Root = -1;
    this->m_Elements.m_Tree.m_NumElements = 0;
    this->m_Elements.m_Tree.m_FirstFree = -1;
    this->m_Elements.m_Tree.m_LastAlloc.index = -1;
    this->m_Elements.m_Tree.m_pElements = 0;
    if ( compareType != 2 )
    {
      if ( compareType != 1 )
      {
LABEL_4:
        this->m_Elements.m_Tree.m_LessFunc.m_LessFunc = StringLessThan;
        return;
      }
      goto LABEL_12;
    }
LABEL_10:
    this->m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThanIgnoreSlashes;
    return;
  }
  CMemAllocSystemInitialize();
  v6 = (**g_pMemAlloc)(g_pMemAlloc, 32LL * this->m_Elements.m_Tree.m_Elements.m_nAllocationCount);
  m_LessFunc = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc;
  this->m_Elements.m_Tree.m_Elements.m_pMemory = v6;
  this->m_Elements.m_Tree.m_Root = -1;
  this->m_Elements.m_Tree.m_NumElements = 0;
  this->m_Elements.m_Tree.m_FirstFree = -1;
  this->m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_Elements.m_Tree.m_pElements = v6;
  if ( compareType == 2 )
  {
    if ( m_LessFunc == 0 )
      goto LABEL_10;
  }
  else if ( compareType == 1 )
  {
    if ( m_LessFunc == 0 )
LABEL_12:
      this->m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  }
  else if ( m_LessFunc == 0 )
  {
    goto LABEL_4;
  }
}


// CUtlDict<int, int>::~CUtlDict  (line 138, @0x0000000002181310, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge
void __fastcall CUtlDict<int,int>::~CUtlDict(CUtlDict<int,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
  if ( (this->m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_Elements.m_Tree.m_Elements);
}


// CUtlDict<float, int>::~CUtlDict  (line 138, @0x00000000021ba7c0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge
void __fastcall CUtlDict<float,int>::~CUtlDict(CUtlDict<float,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
  CUtlRBTree<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
  if ( (this->m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,float,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_Elements.m_Tree.m_Elements);
}


// CUtlDict<CUserMessageInstrumentation, int>::~CUtlDict  (line 138, @0x0000000002250f70, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge
void __fastcall CUtlDict<CUserMessageInstrumentation,int>::~CUtlDict(
        CUtlDict<CUserMessageInstrumentation,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  __int64 v4; // rax
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
  CUtlRBTree<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
  if ( (this->m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_Elements.m_Tree.m_Elements);
}


// CUtlDict<CBuffCountTracker, int>::~CUtlDict  (line 138, @0x000000000264f5e0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge
void __fastcall CUtlDict<CBuffCountTracker,int>::~CUtlDict(CUtlDict<CBuffCountTracker,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
  CUtlRBTree<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
  if ( (this->m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_Elements.m_Tree.m_Elements);
}


// CUtlDict<CUserMessageInstrumentation, int>::RemoveAll  (line 295, @0x0000000002250ea0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, RemoveAll, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::RemoveAll
// callers: CSource2Server::WriteNetDebugInfo, CSource2Server::Init, CSource2Server::GameFrame
void __fastcall CUtlDict<CUserMessageInstrumentation,int>::RemoveAll(
        CUtlDict<CUserMessageInstrumentation,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  __int64 v4; // rax
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUserMessageInstrumentation,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::RemoveAll(&this->m_Elements.m_Tree);
}


// CUtlDict<CScriptConsoleCommand*, int>::Purge  (line 309, @0x0000000001f9b4b0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CScriptConvarAccessor::~CScriptConvarAccessor
void __fastcall CUtlDict<CScriptConsoleCommand *,int>::Purge(CUtlDict<CScriptConsoleCommand*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<ConVar*, int>::Purge  (line 309, @0x0000000001f9b6f0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CScriptConvarAccessor::~CScriptConvarAccessor
void __fastcall CUtlDict<ConVar *,int>::Purge(CUtlDict<ConVar*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,ConVar*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CAnimDebugMgr::DebugSeqInfo_t, int>::Purge  (line 309, @0x0000000002097940, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CAnimDebugMgr::Spew, CAnimDebugMgr::~CAnimDebugMgr
void __fastcall CUtlDict<CAnimDebugMgr::DebugSeqInfo_t,int>::Purge(
        CUtlDict<CAnimDebugMgr::DebugSeqInfo_t,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  __int64 v4; // rax
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAnimDebugMgr::DebugSeqInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<int, int>::Purge  (line 309, @0x0000000002116c80, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CGameEventManager::Reset, CGameEventManager::CGameEventManager, CGameEventManager::~CGameEventManager, CDecalEmitterSystem::Clear, CDecalEmitterSystem::~CDecalEmitterSystem, CDOTAGameManager::DestroyAddOnGameKeyValues, CDOTAGameManager::DestroyGameKeyValues, CDOTAGameManager::CDOTAGameManager, CDOTAGameManager::~CDOTAGameManager, ParseChallengeQuests, CEconItemSchema::CEconItemSchema, CChoreoScene::CChoreoScene (13 total)
void __fastcall CUtlDict<int,int>::Purge(CUtlDict<int,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int>::Purge  (line 309, @0x0000000002116f90, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CGameEntitySystem::~CGameEntitySystem, CGameEntitySystem::CGameEntitySystem
void __fastcall CUtlDict<CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int>::Purge(
        CUtlDict<CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  __int64 v4; // rax
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<bool, int>::Purge  (line 309, @0x0000000002117430, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: EntityListCompletion
void __fastcall CUtlDict<bool,int>::Purge(CUtlDict<bool,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<GameEventRegister_t*, int>::Purge  (line 309, @0x0000000002117840, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: RegisterGameEventMessages
void __fastcall CUtlDict<GameEventRegister_t *,int>::Purge(CUtlDict<GameEventRegister_t*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,GameEventRegister_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,GameEventRegister_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CEntityHandle, int>::Purge  (line 309, @0x0000000002118820, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CEntitySaveRestoreBlockHandler::ReleaseGlobalEntityDatabase, CEntitySaveRestoreBlockHandler::~CEntitySaveRestoreBlockHandler, CEntitySaveRestoreBlockHandler::BuildGlobalEntityDatabase, CreateEntityTransitionList
void __fastcall CUtlDict<CEntityHandle,int>::Purge(CUtlDict<CEntityHandle,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<char const*, int>::Purge  (line 309, @0x000000000211a1d0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses, CDOTAGameManager::CDOTAGameManager, CDOTAGameManager::DestroyKeyValuesFiles, CDOTAGameManager::~CDOTAGameManager
void __fastcall CUtlDict<char const*,int>::Purge(CUtlDict<char const*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<ServerClass*, int>::Purge  (line 309, @0x000000000211a370, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses
void __fastcall CUtlDict<ServerClass *,int>::Purge(CUtlDict<ServerClass*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,ServerClass*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<FileWeaponInfo_t*, int>::Purge  (line 309, @0x000000000213c1c0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CWeaponScriptParser::~CWeaponScriptParser
void __fastcall CUtlDict<FileWeaponInfo_t *,int>::Purge(CUtlDict<FileWeaponInfo_t*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<ConceptHistory_t, int>::Purge  (line 309, @0x0000000002180900, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CAI_Expresser::~CAI_Expresser, CAI_Expresser::CAI_Expresser
void __fastcall CUtlDict<ConceptHistory_t,int>::Purge(CUtlDict<ConceptHistory_t,int> *const this)
{
  int m_Root; // ebx
  __int64 v3; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    v3 = m_Root;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v3 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v3].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v3 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CDecalEmitterSystem::DecalEntry, int>::Purge  (line 309, @0x00000000021ebf80, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CDecalEmitterSystem::CDecalEmitterSystem, CDecalEmitterSystem::Clear, CDecalEmitterSystem::~CDecalEmitterSystem
void __fastcall CUtlDict<CDecalEmitterSystem::DecalEntry,int>::Purge(
        CUtlDict<CDecalEmitterSystem::DecalEntry,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  __int64 v4; // rax
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<BasicGameStatsRecord_t, short unsigned int>::Purge  (line 309, @0x0000000002280ed0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::Purge
// callers: BasicGameStats_t::Clear, CBaseGameStats::Clear, CBaseGameStats::~CBaseGameStats, CBaseGameStats::LoadFromFile
void __fastcall CUtlDict<BasicGameStatsRecord_t,unsigned short>::Purge(
        CUtlDict<BasicGameStatsRecord_t,short unsigned int> *const this)
{
  unsigned __int16 m_Root; // bx
  __int64 v3; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *m_pMemory; // rcx
  unsigned __int16 m_Left; // si

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    v3 = m_Root;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v3 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v3].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v3 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<const flexsettinghdr_t*, int>::Purge  (line 309, @0x00000000023b6820, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CFlexSceneFileManager::Shutdown, CFlexSceneFileManager::~CFlexSceneFileManager
void __fastcall CUtlDict<flexsettinghdr_t const*,int>::Purge(CUtlDict<const flexsettinghdr_t*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,const flexsettinghdr_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<ELanguage, int>::Purge  (line 309, @0x00000000024afbe0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CChatLanguageAnalyzer::~CChatLanguageAnalyzer, CChatLanguageAnalyzer::BInit
void __fastcall CUtlDict<ELanguage,int>::Purge(CUtlDict<ELanguage,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CSmartPtr<CEmoteMap::IFunction, CRefCountAccessor>, int>::Purge  (line 309, @0x0000000002580d20, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CDOTAGamerules::~CDOTAGamerules, CDOTAGamerules::CDOTAGamerules
void __fastcall CUtlDict<CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int>::Purge(
        CUtlDict<CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<unsigned int, int>::Purge  (line 309, @0x00000000026b7ab0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: ParseChallengeQuests, CDOTAItemSchema::~CDOTAItemSchema
void __fastcall CUtlDict<unsigned int,int>::Purge(CUtlDict<unsigned int,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CEconLootListDefinition, int>::Purge  (line 309, @0x0000000002e5deb0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CEconItemSchema::PurgeLootLists, CEconItemSchema::~CEconItemSchema, CEconItemSchema::BInitSchema, CEconItemSchema::Reset, CEconItemSchema::CEconItemSchema
void __fastcall CUtlDict<CEconLootListDefinition,int>::Purge(CUtlDict<CEconLootListDefinition,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  __int64 v4; // rax
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<customizable_courier_t*, int>::Purge  (line 309, @0x0000000002e5f990, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CDOTAItemSchema::BInitItems, CDOTAItemSchema::~CDOTAItemSchema
void __fastcall CUtlDict<customizable_courier_t *,int>::Purge(CUtlDict<customizable_courier_t*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CEconSchemaSymbol, int>::Purge  (line 309, @0x0000000002e60d60, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CEconItemSchema::~CEconItemSchema, CEconItemSchema::BInitArmoryData, CEconItemSchema::CEconItemSchema
void __fastcall CUtlDict<CEconSchemaSymbol,int>::Purge(CUtlDict<CEconSchemaSymbol,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<item_definition_index_t, int>::Purge  (line 309, @0x0000000002e63680, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CDOTAItemSchema::BInitItems, CDOTAItemSchema::~CDOTAItemSchema
void __fastcall CUtlDict<item_definition_index_t,int>::Purge(CUtlDict<item_definition_index_t,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CUtlVector<CItemLevelingDefinition, CUtlMemory<CItemLevelingDefinition, int> >*, int>::Purge  (line 309, @0x0000000002eae090, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CEconItemSchema::Reset, CEconItemSchema::CEconItemSchema
void __fastcall CUtlDict<CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int>::Purge(
        CUtlDict<CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int> >*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition>*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<AchievementAward_t*, int>::Purge  (line 309, @0x0000000002eaeda0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, AchievementAward_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, AchievementAward_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, AchievementAward_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, AchievementAward_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, AchievementAward_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, AchievementAward_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CEconItemSchema::CEconItemSchema
void __fastcall CUtlDict<AchievementAward_t *,int>::Purge(CUtlDict<AchievementAward_t*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,AchievementAward_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,AchievementAward_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CEconItemSetDefinition*, int>::Purge  (line 309, @0x0000000002eaee70, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CEconItemSchema::ItemTesting_DiscardAllTestItemSets, CEconItemSchema::BInitItemSets, CEconItemSchema::Reset, CEconItemSchema::CEconItemSchema
void __fastcall CUtlDict<CEconItemSetDefinition *,int>::Purge(CUtlDict<CEconItemSetDefinition*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<EventGroup, int>::Purge  (line 309, @0x0000000003075d70, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CChoreoChannel::ReconcileCloseCaption
void __fastcall CUtlDict<EventGroup,int>::Purge(CUtlDict<EventGroup,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<ResponseGroup, short int>::Purge  (line 309, @0x00000000030fea70, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::Purge
// callers: CResponseSystem::CResponseSystem, CResponseSystem::~CResponseSystem
void __fastcall CUtlDict<ResponseGroup,short>::Purge(CUtlDict<ResponseGroup,short int> *const this)
{
  __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rcx
  __int64 v4; // rax
  __int16 m_Left; // si

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<Criteria, short int>::Purge  (line 309, @0x00000000030fed40, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::Purge
// callers: CResponseSystem::CResponseSystem, CResponseSystem::~CResponseSystem
void __fastcall CUtlDict<Criteria,short>::Purge(CUtlDict<Criteria,short int> *const this)
{
  __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rdx
  __int64 v4; // rcx
  __int16 m_Left; // si

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CResponseSystem::Enumeration, short int>::Purge  (line 309, @0x00000000030feff0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::Purge
// callers: CResponseSystem::CResponseSystem, CResponseSystem::~CResponseSystem
void __fastcall CUtlDict<CResponseSystem::Enumeration,short>::Purge(
        CUtlDict<CResponseSystem::Enumeration,short int> *const this)
{
  __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rcx
  __int64 v4; // rax
  __int16 m_Left; // si

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CAttachment, int>::Purge  (line 309, @0x000000000315a580, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CRenderMesh::~CRenderMesh
void __fastcall CUtlDict<CAttachment,int>::Purge(CUtlDict<CAttachment,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  __int64 v4; // rax
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CHitBoxSet, int>::Purge  (line 309, @0x000000000315a740, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CRenderMesh::~CRenderMesh
void __fastcall CUtlDict<CHitBoxSet,int>::Purge(CUtlDict<CHitBoxSet,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rcx
  __int64 v4; // rax
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CNavArea*, int>::Purge  (line 309, @0x00000000031f1e80, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CNavMesh::CommandNavMergeMesh
void __fastcall CUtlDict<CNavArea *,int>::Purge(CUtlDict<CNavArea*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CNavArea*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v4; // rcx
  int m_Left; // esi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v4].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CScriptConsoleCommand*, int>::PurgeAndDeleteElements  (line 324, @0x0000000001f9b410, libserver.so)  // inlines: Element, FirstInorder, Key, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CScriptConvarAccessor::CleanupCommands
void __fastcall CUtlDict<CScriptConsoleCommand *,int>::PurgeAndDeleteElements(
        CUtlDict<CScriptConsoleCommand*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v4; // r13
  int m_Left; // ecx
  __int64 v6; // r13
  CUtlMap<char const*,CScriptConsoleCommand*,int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // rdi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      v6 = v4;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v6].m_Data.key);
      elem = this->m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
      if ( elem != 0 )
        (*(elem->_vptr_ICommandCallback + 2))(elem);
      m_Root = CUtlRBTree<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<ConVar*, int>::PurgeAndDeleteElements  (line 324, @0x0000000001f9b650, libserver.so)  // inlines: Element, FirstInorder, Key, LeftChild, NextInorder, Purge, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge
// callers: CScriptConvarAccessor::CleanupCommands
void __fastcall CUtlDict<ConVar *,int>::PurgeAndDeleteElements(CUtlDict<ConVar*,int> *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,ConVar*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v4; // r13
  int m_Left; // ecx
  __int64 v6; // r13
  CUtlMap<char const*,ConVar*,int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // rdi

  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      v6 = v4;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v6].m_Data.key);
      elem = this->m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
      if ( elem != 0 )
        (*(elem->_vptr_ConCommandBase + 1))(elem);
      m_Root = CUtlRBTree<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Elements.m_Tree);
}


// CUtlDict<CScriptConsoleCommand*, int>::Insert  (line 344, @0x0000000001fa40c0, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CScriptConvarAccessor::RegisterCommand
int __fastcall CUtlDict<CScriptConsoleCommand *,int>::Insert(
        CUtlDict<CScriptConsoleCommand*,int> *const this,
        const char *pName,
        CScriptConsoleCommand *const *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  CScriptConsoleCommand *v9; // rdx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,CScriptConsoleCommand*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<ConVar*, int>::Insert  (line 344, @0x0000000001fa5720, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CScriptConvarAccessor::RegisterConvar
int __fastcall CUtlDict<ConVar *,int>::Insert(
        CUtlDict<ConVar*,int> *const this,
        const char *pName,
        ConVar *const *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  ConVar *v9; // rdx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,ConVar*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,ConVar*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<CInstancedResponseSystem*, int>::Insert  (line 344, @0x000000000209a170, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: PrecacheCustomResponseSystem, FindOrCreateCustomResponseSystem
int __fastcall CUtlDict<CInstancedResponseSystem *,int>::Insert(
        CUtlDict<CInstancedResponseSystem*,int> *const this,
        const char *pName,
        CInstancedResponseSystem *const *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  CInstancedResponseSystem *v9; // rdx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,CInstancedResponseSystem*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<bool, int>::Insert  (line 344, @0x0000000002120000, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: EntityListCompletion
int __fastcall CUtlDict<bool,int>::Insert(CUtlDict<bool,int> *const this, const char *pName, const bool *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  bool v9; // dl
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<int, int>::Insert  (line 344, @0x0000000002120580, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CGameEventManager::RegisterEvent, CBasePlayerAnimState::CalcSequenceIndex, CDecalEmitterSystem::LoadDecalsFromScript, ParseChallengeQuests, CChoreoScene::operator=, CChoreoScene::GetTimeZoom, CChoreoScene::SetTimeZoom
int __fastcall CUtlDict<int,int>::Insert(CUtlDict<int,int> *const this, const char *pName, const int *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  int v9; // edx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<CEntityHandle, int>::Insert  (line 344, @0x00000000021210b0, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CEntitySaveRestoreBlockHandler::BuildGlobalEntityDatabase
int __fastcall CUtlDict<CEntityHandle,int>::Insert(
        CUtlDict<CEntityHandle,int> *const this,
        const char *pName,
        const CEntityHandle *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  uint32 m_Index; // eax
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  pCopyFrom.key = v8;
  m_Index = element->m_Index;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem.m_Index = m_Index;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<char const*, int>::Insert  (line 344, @0x0000000002124270, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses, CDOTAGameManager::AddCountries
int __fastcall CUtlDict<char const*,int>::Insert(
        CUtlDict<char const*,int> *const this,
        const char *pName,
        const char *const *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  const char *v9; // rdx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<FileWeaponInfo_t*, int>::Insert  (line 344, @0x000000000213ca30, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CWeaponScriptParser::ReadWeaponDataFromFileForSlot
int __fastcall CUtlDict<FileWeaponInfo_t *,int>::Insert(
        CUtlDict<FileWeaponInfo_t*,int> *const this,
        const char *pName,
        FileWeaponInfo_t *const *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  FileWeaponInfo_t *v9; // rdx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,FileWeaponInfo_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,FileWeaponInfo_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<CDecalEmitterSystem::DecalEntry, int>::Insert  (line 344, @0x00000000021ed830, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, DecalEntry, Element, FindInsertionPosition, GrowMemory, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, Purge, RemoveAll, RightChild, operator(), operator=, operator[], strcpy, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~DecalEntry, ~Node_t
// calls: strlen, strcpy, CUtlMemory<int, int>::Grow, CUtlRBTree<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDecalEmitterSystem::LoadDecalsFromScript
int __fastcall CUtlDict<CDecalEmitterSystem::DecalEntry,int>::Insert(
        CUtlDict<CDecalEmitterSystem::DecalEntry,int> *const this,
        const char *pName,
        const CDecalEmitterSystem::DecalEntry *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  int m_Size; // eax
  unsigned __int64 v10; // rbx
  int m_nAllocationCount; // edx
  __int64 v12; // r12
  int *v13; // rax
  int v14; // eax
  int *v15; // r14
  int m_Root; // r12d
  bool v17; // bl
  int m_Right; // eax
  bool v19; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  int v21; // r14d
  __int64 v23; // [rsp+10h] [rbp-60h]
  CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t v24[2]; // [rsp+20h] [rbp-50h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v24[0].key = v8;
  m_Size = element->indices.m_Size;
  v24[0].elem.indices.m_Size = 0;
  v24[0].elem.indices.m_Memory.m_pMemory = 0;
  v24[0].elem.indices.m_Memory.m_nAllocationCount = 0;
  v24[0].elem.indices.m_Memory.m_nGrowSize = 0;
  if ( m_Size > 0 )
  {
    v10 = 0;
    m_nAllocationCount = 0;
    v12 = 0;
    v23 = 4LL * (m_Size - 1) + 4;
    while ( 1 )
    {
      v14 = v12;
      v15 = &element->indices.m_Memory.m_pMemory[v10 / 4];
      if ( v12 == m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&v24[0].elem.indices.m_Memory, 1);
        v14 = v24[0].elem.indices.m_Size;
      }
      v24[0].elem.indices.m_Size = v14 + 1;
      v13 = &v24[0].elem.indices.m_Memory.m_pMemory[v12];
      if ( v13 != 0 )
        *v13 = *v15;
      v10 += 4LL;
      if ( v10 == v23 )
        break;
      v12 = v24[0].elem.indices.m_Size;
      m_nAllocationCount = v24[0].elem.indices.m_Memory.m_nAllocationCount;
    }
  }
  m_Root = this->m_Elements.m_Tree.m_Root;
  v17 = 0;
  if ( m_Root != -1 )
  {
    while ( 1 )
    {
      v19 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              v24,
              &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v19 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v17 = 0;
        if ( m_Right == -1 )
          break;
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v17 = 1;
        if ( m_Right == -1 )
          break;
      }
      m_Root = m_Right;
    }
  }
  v21 = CUtlRBTree<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          v24);
  CUtlRBTree<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v21,
    m_Root,
    v17);
  v24[0].elem.indices.m_Size = 0;
  ++this->m_Elements.m_Tree.m_NumElements;
  if ( (v24[0].elem.indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&v24[0].elem.indices.m_Memory);
    if ( (v24[0].elem.indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&v24[0].elem.indices.m_Memory);
  }
  return v21;
}


// CUtlDict<const flexsettinghdr_t*, int>::Insert  (line 344, @0x00000000023ba1c0, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CFlexSceneFileManager::FindSceneFile
int __fastcall CUtlDict<flexsettinghdr_t const*,int>::Insert(
        CUtlDict<const flexsettinghdr_t*,int> *const this,
        const char *pName,
        const flexsettinghdr_t *const *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  const flexsettinghdr_t *v9; // rdx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,const flexsettinghdr_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,const flexsettinghdr_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,flexsettinghdr_t const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<ELanguage, int>::Insert  (line 344, @0x00000000024b2990, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CChatLanguageAnalyzer::BInit
int __fastcall CUtlDict<ELanguage,int>::Insert(
        CUtlDict<ELanguage,int> *const this,
        const char *pName,
        const ELanguage *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  ELanguage v9; // edx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ELanguage,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<CSmartPtr<CEmoteMap::IFunction, CRefCountAccessor>, int>::Insert  (line 344, @0x0000000002589390, libserver.so)  // inlines: AddRef, AddRef<CEmoteMap::IFunction>, CSmartPtr, DoAddRef, DoRelease, Element, FindInsertionPosition, Increment, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, Release, Release<CEmoteMap::IFunction>, RightChild, ThreadInterlockedIncrement, operator(), operator=, operator[], strcpy, ~CSmartPtr, ~Node_t
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, CRefCountServiceBase<true, CRefMT>::DoRelease, _Unwind_Resume
// callers: CEmoteMap::AddFunction
int __fastcall CUtlDict<CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int>::Insert(
        CUtlDict<CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int> *const this,
        const char *pName,
        const CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor> *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  CEmoteMap::IFunction *m_pObj; // rbx
  int m_Root; // r13d
  int m_Right; // eax
  bool v12; // bl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  int v15; // r14d
  CEmoteMap::IFunction *v16; // rbx
  CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  m_pObj = element->m_pObj;
  pCopyFrom.elem.m_pObj = 0;
  pCopyFrom.key = v8;
  if ( m_pObj != 0 )
  {
    _InterlockedAdd(&m_pObj->m_iRefs, 1u);
    pCopyFrom.elem.m_pObj = m_pObj;
  }
  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    while ( 1 )
    {
      v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &pCopyFrom,
              &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v13 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v12 = 0;
        if ( m_Right == -1 )
          goto LABEL_11;
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v12 = 1;
        if ( m_Right == -1 )
          goto LABEL_11;
      }
      m_Root = m_Right;
    }
  }
  v12 = 0;
LABEL_11:
  v15 = CUtlRBTree<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v15,
    m_Root,
    v12);
  v16 = pCopyFrom.elem.m_pObj;
  ++this->m_Elements.m_Tree.m_NumElements;
  if ( v16 == 0 || _InterlockedSub(&v16->m_iRefs, 1u) != 0 || (*(v16->_vptr_CRefCountServiceBase + 2))(v16) == 0 )
    return v15;
  (*(v16->_vptr_CRefCountServiceBase + 1))(v16);
  return v15;
}


// CUtlDict<unsigned int, int>::Insert  (line 344, @0x00000000026ba160, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: ParseChallengeQuests, CDOTAItemSchema::BInitSchema
int __fastcall CUtlDict<unsigned int,int>::Insert(
        CUtlDict<unsigned int,int> *const this,
        const char *pName,
        const unsigned int *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  unsigned int v9; // edx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<CEconItemSetDefinition*, int>::Insert  (line 344, @0x0000000002eb8fc0, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CEconItemSchema::ItemTest_CreateTestItemSet
int __fastcall CUtlDict<CEconItemSetDefinition *,int>::Insert(
        CUtlDict<CEconItemSetDefinition*,int> *const this,
        const char *pName,
        CEconItemSetDefinition *const *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  CEconItemSetDefinition *v9; // rdx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,CEconItemSetDefinition*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconItemSetDefinition *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<CUtlVector<CItemLevelingDefinition, CUtlMemory<CItemLevelingDefinition, int> >*, int>::Insert  (line 344, @0x0000000002eba800, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CEconItemSchema::BInitItemLevels
int __fastcall CUtlDict<CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int>::Insert(
        CUtlDict<CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int> >*,int> *const this,
        const char *pName,
        CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int> > *const *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int> > *v9; // rdx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition>*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int> >*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CUtlVector<CItemLevelingDefinition,CUtlMemory<CItemLevelingDefinition,int>> *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<CEconSchemaSymbol, int>::Insert  (line 344, @0x0000000002ebad80, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator=, operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CEconItemSchema::BInitArmoryData
int __fastcall CUtlDict<CEconSchemaSymbol,int>::Insert(
        CUtlDict<CEconSchemaSymbol,int> *const this,
        const char *pName,
        const CEconSchemaSymbol *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  UtlSymLargeId_t m_Id; // rax
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  pCopyFrom.key = v8;
  m_Id = element->u.m_Id;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem.u.m_Id = m_Id;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconSchemaSymbol,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<EventGroup, int>::Insert  (line 344, @0x0000000003077520, libserver.so)  // inlines: CUtlMemory, CUtlRBTree, Element, EventGroup, FindInsertionPosition, FirstInorder, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, Purge, ResetDbgInfo, RightChild, operator(), operator=, operator[], strcpy, ~CUtlMemory, ~CUtlRBTree, ~EventGroup, ~Node_t
// calls: strlen, strcpy, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::RemoveAll, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::Insert, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int>::Purge, CUtlRBTree<CChoreoEvent*, short unsigned int, bool (*)(CChoreoEvent* const&, CChoreoEvent* const&), CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int> >::~CUtlRBTree, _Unwind_Resume
// callers: CChoreoChannel::ReconcileCloseCaption
// globals: ChoreEventStartTimeLessFunc(CChoreoEvent * const&,CChoreoEvent * const&)
int __fastcall CUtlDict<EventGroup,int>::Insert(
        CUtlDict<EventGroup,int> *const this,
        const char *pName,
        const EventGroup *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  int m_Root; // ebx
  UtlRBTreeNode_t<CChoreoEvent*,short unsigned int> *m_pMemory; // rdx
  unsigned __int16 m_Left; // cx
  int v12; // r13d
  bool v13; // bl
  int m_Right; // eax
  bool v15; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v16; // rax
  int v17; // r15d
  CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-60h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  pCopyFrom.elem.timeSortedEvents.m_FirstFree = -1;
  pCopyFrom.elem.timeSortedEvents.m_NumElements = 0;
  pCopyFrom.elem.timeSortedEvents.m_LessFunc = ChoreEventStartTimeLessFunc;
  pCopyFrom.elem.timeSortedEvents.m_Elements.m_pMemory = 0;
  pCopyFrom.elem.timeSortedEvents.m_Elements.m_nAllocationCount = 0;
  pCopyFrom.elem.timeSortedEvents.m_Elements.m_nGrowSize = 0;
  pCopyFrom.elem.timeSortedEvents.m_Root = -1;
  pCopyFrom.elem.timeSortedEvents.m_LastAlloc.index = -1;
  pCopyFrom.elem.timeSortedEvents.m_pElements = 0;
  pCopyFrom.key = v8;
  CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::RemoveAll(&pCopyFrom.elem.timeSortedEvents);
  m_Root = element->timeSortedEvents.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = element->timeSortedEvents.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    while ( 1 )
    {
      CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::Insert(
        &pCopyFrom.elem.timeSortedEvents,
        &m_pMemory[m_Root].m_Data,
        ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      m_Root = CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::NextInorder(
                 &element->timeSortedEvents,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = element->timeSortedEvents.m_Elements.m_pMemory;
    }
  }
  v12 = this->m_Elements.m_Tree.m_Root;
  v13 = 0;
  if ( v12 != -1 )
  {
    while ( 1 )
    {
      v15 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &pCopyFrom,
              &this->m_Elements.m_Tree.m_Elements.m_pMemory[v12].m_Data) == 0;
      v16 = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v15 )
      {
        m_Right = v16[v12].m_Right;
        v13 = 0;
        if ( m_Right == -1 )
          break;
      }
      else
      {
        m_Right = v16[v12].m_Left;
        v13 = 1;
        if ( m_Right == -1 )
          break;
      }
      v12 = m_Right;
    }
  }
  v17 = CUtlRBTree<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,EventGroup,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v17,
    v12,
    v13);
  ++this->m_Elements.m_Tree.m_NumElements;
  CUtlRBTree<CChoreoEvent *,unsigned short,bool (*)(CChoreoEvent * const&,CChoreoEvent * const&),CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>>::RemoveAll(&pCopyFrom.elem.timeSortedEvents);
  pCopyFrom.elem.timeSortedEvents.m_FirstFree = -1;
  if ( (pCopyFrom.elem.timeSortedEvents.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>::Purge(&pCopyFrom.elem.timeSortedEvents.m_Elements);
    pCopyFrom.elem.timeSortedEvents.m_LastAlloc.index = -1;
    if ( (pCopyFrom.elem.timeSortedEvents.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CChoreoEvent *,unsigned short>,unsigned short>::Purge(&pCopyFrom.elem.timeSortedEvents.m_Elements);
  }
  return v17;
}


// CUtlDict<Criteria, short int>::Insert  (line 344, @0x0000000003100840, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, RightChild, operator(), operator[], strcpy, ~Node_t
// calls: strlen, strcpy, Criteria::Criteria, Criteria::operator=, CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::LinkToParent, Criteria::~Criteria, _Unwind_Resume, __stack_chk_fail
// callers: CResponseSystem::CopyCriteriaFrom
__int16 __fastcall CUtlDict<Criteria,short>::Insert(
        CUtlDict<Criteria,short int> *const this,
        const char *pName,
        const Criteria *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // r15
  __int16 m_Root; // r13
  __int16 m_Right; // ax
  bool v11; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rax
  __int16 v13; // r15
  bool v15; // bl
  CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  Criteria::Criteria(&pCopyFrom.elem);
  pCopyFrom.key = v8;
  Criteria::operator=(&pCopyFrom.elem, element);
  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    while ( 1 )
    {
      v11 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &pCopyFrom,
              &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v11 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v15 = 0;
        if ( m_Right == -1 )
          goto LABEL_9;
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v15 = 1;
        if ( m_Right == -1 )
          goto LABEL_9;
      }
      m_Root = m_Right;
    }
  }
  v15 = 0;
LABEL_9:
  v13 = CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v13,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  Criteria::~Criteria(&pCopyFrom.elem);
  return v13;
}


// CUtlDict<CResponseSystem::Enumeration, short int>::Insert  (line 344, @0x000000000310ae20, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::LinkToParent
// callers: CResponseFileParser::ParseEnumeration
__int16 __fastcall CUtlDict<CResponseSystem::Enumeration,short>::Insert(
        CUtlDict<CResponseSystem::Enumeration,short int> *const this,
        const char *pName,
        const CResponseSystem::Enumeration *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  __int16 m_Root; // r12
  __int16 m_Left; // ax
  char v11; // cl
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rax
  bool v14; // r14
  __int16 v15; // r13
  CUtlMap<char const*,CResponseSystem::Enumeration,short int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-40h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.key = v8;
  pCopyFrom.elem = LODWORD(element->value);
  if ( m_Root == -1 )
  {
    m_Root = -1;
    v14 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v12 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v12 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v11 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v11 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v14 = v11;
LABEL_10:
  v15 = CUtlRBTree<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseSystem::Enumeration,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v15,
    m_Root,
    v14);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v15;
}


// CUtlDict<CNavArea*, int>::Insert  (line 344, @0x00000000031f25c0, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CNavMesh::CommandNavMergeMesh
int __fastcall CUtlDict<CNavArea *,int>::Insert(
        CUtlDict<CNavArea*,int> *const this,
        const char *pName,
        CNavArea *const *const element)
{
  size_t v6; // rax
  char *v7; // rax
  char *v8; // rax
  CNavArea *v9; // rdx
  int m_Root; // r13d
  int m_Left; // eax
  char v12; // cl
  bool v13; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CNavArea*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v15; // bl
  int v16; // r14d
  CUtlMap<char const*,CNavArea*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v6 = strlen(pName);
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6 + 1);
    v8 = strcpy(v7, pName);
  }
  else
  {
    v8 = 0;
  }
  v9 = *element;
  pCopyFrom.key = v8;
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = v9;
  if ( m_Root == -1 )
  {
    v15 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v13 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v12 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v12 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v15 = v12;
LABEL_10:
  v16 = CUtlRBTree<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CNavArea *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v16,
    m_Root,
    v15);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v16;
}


// CUtlDict<BasicGameStatsRecord_t, short unsigned int>::Insert  (line 351, @0x0000000002283730, libserver.so)  // inlines: BasicGameStatsRecord_t, Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, RightChild, V_memset, memset, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int, CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: BasicGameStats_t::FindOrAddRecordForMap
unsigned __int16 __fastcall CUtlDict<BasicGameStatsRecord_t,unsigned short>::Insert(
        CUtlDict<BasicGameStatsRecord_t,short unsigned int> *const this,
        const char *pName)
{
  size_t v4; // rax
  char *v5; // rax
  char *v6; // rax
  unsigned __int16 m_Root; // r13
  unsigned __int16 m_Right; // ax
  char v9; // cl
  bool v10; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v12; // r14
  bool v14; // bl
  CUtlMap<char const*,BasicGameStatsRecord_t,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-50h] BYREF

  if ( pName != 0 )
  {
    v4 = strlen(pName);
    v5 = (**g_pMemAlloc)(g_pMemAlloc, v4 + 1);
    v6 = strcpy(v5, pName);
  }
  else
  {
    v6 = 0;
  }
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem.m_bSteam = 1;
  pCopyFrom.elem.m_bCyberCafe = 0;
  pCopyFrom.elem.m_nDeaths = 0;
  memset(&pCopyFrom.elem, 0, 32);
  pCopyFrom.key = v6;
  if ( m_Root != 0xFFFF )
  {
    while ( 1 )
    {
      v10 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &pCopyFrom,
              &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v10 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v9 = 0;
        if ( m_Right == 0xFFFF )
        {
LABEL_9:
          v14 = v9;
          goto LABEL_10;
        }
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v9 = 1;
        if ( m_Right == 0xFFFF )
          goto LABEL_9;
      }
      m_Root = m_Right;
    }
  }
  m_Root = -1;
  v14 = 0;
LABEL_10:
  v12 = CUtlRBTree<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,BasicGameStatsRecord_t,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v12,
    m_Root,
    v14);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v12;
}


// CUtlDict<int, int>::Insert  (line 351, @0x000000000258ec50, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CDOTAGameManager::SetupGameKeyValues
int __fastcall CUtlDict<int,int>::Insert(CUtlDict<int,int> *const this, const char *pName)
{
  size_t v4; // rax
  char *v5; // rax
  char *v6; // rax
  int m_Root; // r13d
  int m_Left; // eax
  char v9; // cl
  bool v10; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v12; // bl
  int v13; // r14d
  CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v4 = strlen(pName);
    v5 = (**g_pMemAlloc)(g_pMemAlloc, v4 + 1);
    v6 = strcpy(v5, pName);
  }
  else
  {
    v6 = 0;
  }
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.key = v6;
  if ( m_Root == -1 )
  {
    v12 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v10 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v10 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v9 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v9 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v12 = v9;
LABEL_10:
  v13 = CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v13,
    m_Root,
    v12);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v13;
}


// CUtlDict<CBuffCountTracker, int>::Insert  (line 351, @0x000000000264f440, libserver.so)  // inlines: CBuffCountTracker, Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, RightChild, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlRBTree<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: IncrementBuffTracker
int __fastcall CUtlDict<CBuffCountTracker,int>::Insert(CUtlDict<CBuffCountTracker,int> *const this, const char *pName)
{
  size_t v4; // rax
  char *v5; // rax
  char *v6; // rax
  int m_Root; // r13d
  int m_Left; // eax
  char v9; // cl
  bool v10; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v12; // bl
  int v13; // r14d
  CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-30h] BYREF

  if ( pName != 0 )
  {
    v4 = strlen(pName);
    v5 = (**g_pMemAlloc)(g_pMemAlloc, v4 + 1);
    v6 = strcpy(v5, pName);
  }
  else
  {
    v6 = 0;
  }
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.elem.iCount = 0;
  pCopyFrom.elem.iCountFoW = 0;
  pCopyFrom.key = v6;
  if ( m_Root == -1 )
  {
    v12 = 0;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v10 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v10 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v9 = 1;
    if ( m_Left == -1 )
      goto LABEL_9;
LABEL_6:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v9 = 0;
  if ( m_Left != -1 )
    goto LABEL_6;
LABEL_9:
  v12 = v9;
LABEL_10:
  v13 = CUtlRBTree<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v13,
    m_Root,
    v12);
  ++this->m_Elements.m_Tree.m_NumElements;
  return v13;
}


// CUtlDict<CEconLootListDefinition, int>::Insert  (line 351, @0x0000000002ebbc40, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, RightChild, operator(), operator[], strcpy, ~Node_t
// calls: strlen, strcpy, CEconLootListDefinition::CEconLootListDefinition, CUtlRBTree<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, CEconLootListDefinition::~CEconLootListDefinition, _Unwind_Resume
// callers: CEconItemSchema::BInitLootLists
int __fastcall CUtlDict<CEconLootListDefinition,int>::Insert(
        CUtlDict<CEconLootListDefinition,int> *const this,
        const char *pName)
{
  size_t v4; // rax
  char *v5; // rax
  char *v6; // r12
  int m_Root; // r12d
  int m_Right; // eax
  bool v9; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v12; // r14
  int v13; // [rsp+Ch] [rbp-104h]
  CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+10h] [rbp-100h] BYREF

  if ( pName != 0 )
  {
    v4 = strlen(pName);
    v5 = (**g_pMemAlloc)(g_pMemAlloc, v4 + 1);
    v6 = strcpy(v5, pName);
  }
  else
  {
    v6 = 0;
  }
  CEconLootListDefinition::CEconLootListDefinition(&pCopyFrom.elem);
  pCopyFrom.key = v6;
  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    while ( 1 )
    {
      v9 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
             &pCopyFrom,
             &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v9 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v12 = 0;
        if ( m_Right == -1 )
          goto LABEL_9;
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v12 = 1;
        if ( m_Right == -1 )
          goto LABEL_9;
      }
      m_Root = m_Right;
    }
  }
  v12 = 0;
LABEL_9:
  v13 = CUtlRBTree<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEconLootListDefinition,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v13,
    m_Root,
    v12);
  ++this->m_Elements.m_Tree.m_NumElements;
  CEconLootListDefinition::~CEconLootListDefinition(&pCopyFrom.elem);
  return v13;
}


// CUtlDict<Criteria, short int>::Insert  (line 351, @0x000000000310ace0, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, RightChild, operator(), operator[], strcpy, ~Node_t
// calls: strlen, strcpy, Criteria::Criteria, CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CUtlRBTree<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::LinkToParent, Criteria::~Criteria, _Unwind_Resume, __stack_chk_fail
// callers: CResponseFileParser::ParseOneCriterion
__int16 __fastcall CUtlDict<Criteria,short>::Insert(CUtlDict<Criteria,short int> *const this, const char *pName)
{
  size_t v4; // rax
  char *v5; // rax
  char *v6; // rbx
  __int16 m_Root; // r13
  __int16 m_Right; // ax
  bool v9; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rax
  __int16 v11; // r15
  bool v13; // bl
  CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( pName != 0 )
  {
    v4 = strlen(pName);
    v5 = (**g_pMemAlloc)(g_pMemAlloc, v4 + 1);
    v6 = strcpy(v5, pName);
  }
  else
  {
    v6 = 0;
  }
  Criteria::Criteria(&pCopyFrom.elem);
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.key = v6;
  if ( m_Root != -1 )
  {
    while ( 1 )
    {
      v9 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
             &pCopyFrom,
             &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v9 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v13 = 0;
        if ( m_Right == -1 )
          goto LABEL_9;
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v13 = 1;
        if ( m_Right == -1 )
          goto LABEL_9;
      }
      m_Root = m_Right;
    }
  }
  v13 = 0;
LABEL_9:
  v11 = CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short,CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Node_t,short>,short>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v11,
    m_Root,
    v13);
  ++this->m_Elements.m_Tree.m_NumElements;
  Criteria::~Criteria(&pCopyFrom.elem);
  return v11;
}


// CUtlDict<CAttachment, int>::Insert  (line 351, @0x000000000315ba10, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, RightChild, operator(), operator[], strcpy, ~CAttachment, ~CUtlString, ~Node_t
// calls: strlen, strcpy, CAttachment::CAttachment, CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, CUtlString::FreeMemoryBlock, CAttachment::~CAttachment, _Unwind_Resume
// callers: CRenderMesh::FindOrAddAttachment, LoadUtlDict<CAttachment>
int __fastcall CUtlDict<CAttachment,int>::Insert(CUtlDict<CAttachment,int> *const this, const char *pName)
{
  size_t v4; // rax
  char *v5; // rax
  char *v6; // rbx
  int m_Root; // r14d
  int m_Right; // eax
  bool v9; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  int v11; // eax
  bool v12; // cl
  CUtlString *m_vInfluenceOffsets; // rbx
  int v14; // r15d
  char v16; // bl
  CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-C0h] BYREF

  if ( pName != 0 )
  {
    v4 = strlen(pName);
    v5 = (**g_pMemAlloc)(g_pMemAlloc, v4 + 1);
    v6 = strcpy(v5, pName);
  }
  else
  {
    v6 = 0;
  }
  CAttachment::CAttachment(&pCopyFrom.elem);
  m_Root = this->m_Elements.m_Tree.m_Root;
  pCopyFrom.key = v6;
  if ( m_Root != -1 )
  {
    while ( 1 )
    {
      v9 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
             &pCopyFrom,
             &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v9 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v16 = 0;
        if ( m_Right == -1 )
          goto LABEL_9;
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v16 = 1;
        if ( m_Right == -1 )
          goto LABEL_9;
      }
      m_Root = m_Right;
    }
  }
  v16 = 0;
LABEL_9:
  v11 = CUtlRBTree<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  v12 = v16;
  m_vInfluenceOffsets = pCopyFrom.elem.m_vInfluenceOffsets;
  v14 = v11;
  CUtlRBTree<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CAttachment,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v11,
    m_Root,
    v12);
  ++this->m_Elements.m_Tree.m_NumElements;
  do
  {
    --m_vInfluenceOffsets;
    if ( m_vInfluenceOffsets->m_pString != 0 )
      CUtlString::FreeMemoryBlock(m_vInfluenceOffsets);
  }
  while ( m_vInfluenceOffsets != pCopyFrom.elem.m_influenceNames );
  if ( pCopyFrom.elem.m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&pCopyFrom.elem.m_name);
  return v14;
}


// CUtlDict<CHitBoxSet, int>::Insert  (line 351, @0x000000000315c140, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, Node_t, Purge, RightChild, operator(), operator[], strcpy, ~CHitBoxSet, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~Node_t
// calls: strlen, strcpy, CHitBoxSet::CHitBoxSet, CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, CUtlString::FreeMemoryBlock, CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::RemoveAll, CUtlMemory<CHitBox, int>::Purge, CHitBoxSet::~CHitBoxSet, _Unwind_Resume
// callers: CRenderMesh::FindOrAddHitBoxSet, LoadUtlDict<CHitBoxSet>
int __fastcall CUtlDict<CHitBoxSet,int>::Insert(CUtlDict<CHitBoxSet,int> *const this, const char *pName)
{
  size_t v4; // rax
  char *v5; // rax
  char *v6; // r12
  int m_Root; // r12d
  int m_Right; // eax
  bool v9; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  int v11; // r15d
  bool v13; // r14
  CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-70h] BYREF

  if ( pName != 0 )
  {
    v4 = strlen(pName);
    v5 = (**g_pMemAlloc)(g_pMemAlloc, v4 + 1);
    v6 = strcpy(v5, pName);
  }
  else
  {
    v6 = 0;
  }
  CHitBoxSet::CHitBoxSet(&pCopyFrom.elem);
  pCopyFrom.key = v6;
  m_Root = this->m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    while ( 1 )
    {
      v9 = this->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
             &pCopyFrom,
             &this->m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
      m_pMemory = this->m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v9 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v13 = 0;
        if ( m_Right == -1 )
          goto LABEL_9;
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v13 = 1;
        if ( m_Right == -1 )
          goto LABEL_9;
      }
      m_Root = m_Right;
    }
  }
  v13 = 0;
LABEL_9:
  v11 = CUtlRBTree<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CHitBoxSet,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_Elements.m_Tree,
    v11,
    m_Root,
    v13);
  ++this->m_Elements.m_Tree.m_NumElements;
  if ( pCopyFrom.elem.m_SourceFilename.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&pCopyFrom.elem.m_SourceFilename);
  CUtlVectorBase<CHitBox,CUtlMemory<CHitBox,int>>::RemoveAll(&pCopyFrom.elem.m_HitBoxes);
  if ( (pCopyFrom.elem.m_HitBoxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHitBox,int>::Purge(&pCopyFrom.elem.m_HitBoxes.m_Memory);
    if ( (pCopyFrom.elem.m_HitBoxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHitBox,int>::Purge(&pCopyFrom.elem.m_HitBoxes.m_Memory);
  }
  if ( pCopyFrom.elem.m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&pCopyFrom.elem.m_name);
  return v11;
}


// CUtlDict<int, int>::HasElement  (line 375, @0x000000000257b540, libserver.so)  // inlines: Find, IsIdxValid, IsValidIndex, LeftChild
// calls: CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find
// callers: CDOTAGameManager::SetupGameKeyValues
bool __fastcall CUtlDict<int,int>::HasElement(const CUtlDict<int,int> *const this, const char *pName)
{
  bool v2; // bl
  int v4; // eax
  int m_Left; // ecx
  CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  v2 = 0;
  if ( pName != 0 )
  {
    search.key = pName;
    v4 = CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
           &this->m_Elements.m_Tree,
           &search);
    if ( v4 >= 0LL
      && v4 < this->m_Elements.m_Tree.m_Elements.m_nAllocationCount
      && v4 <= this->m_Elements.m_Tree.m_LastAlloc.index )
    {
      m_Left = -1;
      if ( v4 != -1 )
        m_Left = this->m_Elements.m_Tree.m_Elements.m_pMemory[v4].m_Left;
      return v4 != m_Left;
    }
  }
  return v2;
}


