
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlMap<unsigned int, CTonemapController2*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::~CUtlMap  (line 42, @0x0000000001ef92c0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int, CUtlMap<unsigned int, CTonemapController2*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::~CUtlMap(
        CUtlMap<unsigned int,CTonemapController2*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *const this)
{
  CUtlRBTree<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_Tree);
  if ( (this->m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_Tree.m_Elements);
}


// CUtlMap<CUtlSymbol, AsyncCaption_t*, short unsigned int, bool (*)(const CUtlSymbol&, const CUtlSymbol&)>::~CUtlMap  (line 42, @0x000000000241df70, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, AsyncCaption_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::~CUtlMap(
        CUtlMap<CUtlSymbol,AsyncCaption_t*,short unsigned int,bool (*)(const CUtlSymbol&,const CUtlSymbol&)> *const this)
{
  CUtlRBTree<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_Tree);
  if ( (this->m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,AsyncCaption_t *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_Tree.m_Elements);
}


// CUtlMap<itemid_t, CEconItem*, short unsigned int, bool (*)(const itemid_t&, const itemid_t&)>::~CUtlMap  (line 42, @0x00000000025782a0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int, CUtlMap<itemid_t, CEconItem*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::~CUtlMap(
        CUtlMap<itemid_t,CEconItem*,short unsigned int,bool (*)(const itemid_t&,const itemid_t&)> *const this)
{
  CUtlRBTree<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short,CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_Tree);
  if ( (this->m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t,CEconItem *,unsigned short,bool (*)(itemid_t const&,itemid_t const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_Tree.m_Elements);
}


// CUtlMap<float, int, int, CDefLess<float> >::~CUtlMap  (line 42, @0x0000000002814840, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int, CUtlMap<float, int, int, CDefLess<float> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int>, int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int>, int>::Purge
void __fastcall CUtlMap<float,int,int,CDefLess<float>>::~CUtlMap(CUtlMap<float,int,int,CDefLess<float> > *const this)
{
  bool v2; // zf
  uint32 m_nGrowSize; // eax

  CUtlRBTree<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int,CUtlMap<float,int,int,CDefLess<float>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int>,int>>::RemoveAll(&this->m_Tree);
  v2 = (this->m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int>,int>::Purge(&this->m_Tree.m_Elements);
    m_nGrowSize = this->m_Tree.m_Elements.m_nGrowSize;
    this->m_Tree.m_LastAlloc.index = -1;
    if ( (m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int>,int>::Purge(&this->m_Tree.m_Elements);
  }
  else
  {
    this->m_Tree.m_LastAlloc.index = -1;
  }
}


// CUtlMap<int, GCSDK::CSOIDNameInfo, short unsigned int, bool (*)(int const&, int const&)>::~CUtlMap  (line 42, @0x0000000003242450, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int, CUtlMap<int, GCSDK::CSOIDNameInfo>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::~CUtlMap(
        CUtlMap<int,GCSDK::CSOIDNameInfo,short unsigned int,bool (*)(int const&,int const&)> *const this)
{
  CUtlRBTree<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_Tree);
  if ( (this->m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,GCSDK::CSOIDNameInfo,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_Tree.m_Elements);
}


// CUtlMap<unsigned int, void (CResponseFileParser::*)(), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Insert  (line 199, @0x0000000003105f40, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)()>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)()>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CResponseFileParser::BuildDispatchTables
__int64 __fastcall CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
        CUtlMap<unsigned int,void (CResponseFileParser::*)(),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *const this,
        const CUtlMap<unsigned int,void (CResponseFileParser::*)(),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t *const key,
        const const struct {void (*__pfn)(CResponseFileParser *);__int64 __delta;} *const insert)
{
  unsigned __int16 m_Root; // r13
  void (*pfn)(CResponseFileParser *); // rax
  __int64 delta; // rdx
  unsigned __int16 m_Left; // ax
  char v8; // cl
  bool v9; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)()>::Node_t,short unsigned int> *m_pMemory; // rax
  bool v11; // bl
  unsigned int v12; // eax
  unsigned int v13; // r14d
  CUtlMap<unsigned int,void (CResponseFileParser::*)(),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t node; // [rsp+0h] [rbp-40h] BYREF

  node.key = key;
  m_Root = this->m_Tree.m_Root;
  pfn = insert->__pfn;
  delta = insert->__delta;
  node.elem.__pfn = pfn;
  node.elem.__delta = delta;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v11 = 0;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v9 = this->m_Tree.m_LessFunc.m_LessFunc(&node, &this->m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Tree.m_Elements.m_pMemory;
    if ( v9 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v8 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_7;
LABEL_4:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v8 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_4;
LABEL_7:
  v11 = v8;
LABEL_8:
  LOWORD(v12) = CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                  &this->m_Tree,
                  &node);
  v13 = v12;
  CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(void),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_Tree,
    v12,
    m_Root,
    v11);
  ++this->m_Tree.m_NumElements;
  return v13;
}


// CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Insert  (line 199, @0x0000000003106010, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CResponseFileParser::BuildDispatchTables
__int64 __fastcall CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
        CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *const this,
        const CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t *const key,
        const const struct {void (*__pfn)(CResponseFileParser *, Rule *);__int64 __delta;} *const insert)
{
  unsigned __int16 m_Root; // r13
  void (*pfn)(CResponseFileParser *, Rule *); // rax
  __int64 delta; // rdx
  unsigned __int16 m_Left; // ax
  char v8; // cl
  bool v9; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&)>::Node_t,short unsigned int> *m_pMemory; // rax
  bool v11; // bl
  unsigned int v12; // eax
  unsigned int v13; // r14d
  CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule&),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t node; // [rsp+0h] [rbp-40h] BYREF

  node.key = key;
  m_Root = this->m_Tree.m_Root;
  pfn = insert->__pfn;
  delta = insert->__delta;
  node.elem.__pfn = pfn;
  node.elem.__delta = delta;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v11 = 0;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v9 = this->m_Tree.m_LessFunc.m_LessFunc(&node, &this->m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Tree.m_Elements.m_pMemory;
    if ( v9 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v8 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_7;
LABEL_4:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v8 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_4;
LABEL_7:
  v11 = v8;
LABEL_8:
  LOWORD(v12) = CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                  &this->m_Tree,
                  &node);
  v13 = v12;
  CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(Rule &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_Tree,
    v12,
    m_Root,
    v11);
  ++this->m_Tree.m_NumElements;
  return v13;
}


// CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Insert  (line 199, @0x00000000031060e0, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*)>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CResponseFileParser::BuildDispatchTables
__int64 __fastcall CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
        CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse&,ResponseGroup&,ResponseParams*),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *const this,
        const CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse&,ResponseGroup&,ResponseParams*),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t *const key,
        const const struct {void (*__pfn)(CResponseFileParser *, ParserResponse *, ResponseGroup *, ResponseParams *);__int64 __delta;} *const insert)
{
  unsigned __int16 m_Root; // r13
  void (*pfn)(CResponseFileParser *, ParserResponse *, ResponseGroup *, ResponseParams *); // rax
  __int64 delta; // rdx
  unsigned __int16 m_Left; // ax
  char v8; // cl
  bool v9; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse&,ResponseGroup&,ResponseParams*)>::Node_t,short unsigned int> *m_pMemory; // rax
  bool v11; // bl
  unsigned int v12; // eax
  unsigned int v13; // r14d
  CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse&,ResponseGroup&,ResponseParams*),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t node; // [rsp+0h] [rbp-40h] BYREF

  node.key = key;
  m_Root = this->m_Tree.m_Root;
  pfn = insert->__pfn;
  delta = insert->__delta;
  node.elem.__pfn = pfn;
  node.elem.__delta = delta;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v11 = 0;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v9 = this->m_Tree.m_LessFunc.m_LessFunc(&node, &this->m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Tree.m_Elements.m_pMemory;
    if ( v9 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v8 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_7;
LABEL_4:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v8 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_4;
LABEL_7:
  v11 = v8;
LABEL_8:
  LOWORD(v12) = CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                  &this->m_Tree,
                  &node);
  v13 = v12;
  CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(ParserResponse &,ResponseGroup &,ResponseParams *),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_Tree,
    v12,
    m_Root,
    v11);
  ++this->m_Tree.m_NumElements;
  return v13;
}


// CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>::Insert  (line 199, @0x00000000031061b0, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::Node_t, short unsigned int, CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&)>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CResponseFileParser::BuildDispatchTables
__int64 __fastcall CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Insert(
        CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup&,ResponseParams&),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *const this,
        const CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup&,ResponseParams&),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t *const key,
        const const struct {void (*__pfn)(CResponseFileParser *, const char *, ResponseGroup *, ResponseParams *);__int64 __delta;} *const insert)
{
  unsigned __int16 m_Root; // r13
  void (*pfn)(CResponseFileParser *, const char *, ResponseGroup *, ResponseParams *); // rax
  __int64 delta; // rdx
  unsigned __int16 m_Left; // ax
  char v8; // cl
  bool v9; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup&,ResponseParams&)>::Node_t,short unsigned int> *m_pMemory; // rax
  bool v11; // bl
  unsigned int v12; // eax
  unsigned int v13; // r14d
  CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup&,ResponseParams&),short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t node; // [rsp+0h] [rbp-40h] BYREF

  node.key = key;
  m_Root = this->m_Tree.m_Root;
  pfn = insert->__pfn;
  delta = insert->__delta;
  node.elem.__pfn = pfn;
  node.elem.__delta = delta;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v11 = 0;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v9 = this->m_Tree.m_LessFunc.m_LessFunc(&node, &this->m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
    m_pMemory = this->m_Tree.m_Elements.m_pMemory;
    if ( v9 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v8 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_7;
LABEL_4:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v8 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_4;
LABEL_7:
  v11 = v8;
LABEL_8:
  LOWORD(v12) = CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                  &this->m_Tree,
                  &node);
  v13 = v12;
  CUtlRBTree<CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,void (CResponseFileParser::*)(char const*,ResponseGroup &,ResponseParams &),unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_Tree,
    v12,
    m_Root,
    v11);
  ++this->m_Tree.m_NumElements;
  return v13;
}


// CUtlMap<int, CHeroLoadout, short unsigned int, bool (*)(int const&, int const&)>::Insert  (line 207, @0x0000000002e65a50, libserver.so)  // inlines: CHeroLoadout, Element, FindInsertionPosition, Insert, InsertAt, LeftChild, Node_t, ResetPredictedItems, RightChild, V_memset, itemid_t, memset, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CDOTAPlayerInventory::RemoveItemFromLoadout
CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::IndexType_t __fastcall CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Insert(
        CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)> *const this,
        const CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t *const key)
{
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::Node_t *p_elem; // rax
  unsigned __int16 m_Root; // r14
  unsigned __int16 m_Right; // ax
  char v6; // cl
  bool v7; // zf
  UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v9; // r13
  bool v11; // r12
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::Node_t node; // [rsp+0h] [rbp-130h] BYREF

  p_elem = &node.elem;
  do
  {
    *&p_elem->key = 0;
    p_elem = (p_elem + 8);
  }
  while ( p_elem != node.elem.m_pPredictedEconItemViews );
  m_Root = this->m_Tree.m_Root;
  memset(&node.elem, 0, 257);
  node.elem.m_nPredictedItemRefCount = 0;
  node.key = *key;
  if ( m_Root != 0xFFFF )
  {
    while ( 1 )
    {
      v7 = this->m_Tree.m_LessFunc.m_LessFunc(&node, &this->m_Tree.m_Elements.m_pMemory[m_Root].m_Data) == 0;
      m_pMemory = this->m_Tree.m_Elements.m_pMemory;
      if ( v7 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v6 = 0;
        if ( m_Right == 0xFFFF )
        {
LABEL_9:
          v11 = v6;
          goto LABEL_10;
        }
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v6 = 1;
        if ( m_Right == 0xFFFF )
          goto LABEL_9;
      }
      m_Root = m_Right;
    }
  }
  m_Root = -1;
  v11 = 0;
LABEL_10:
  v9 = CUtlRBTree<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
         &this->m_Tree,
         &node);
  CUtlRBTree<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_Tree,
    v9,
    m_Root,
    v11);
  ++this->m_Tree.m_NumElements;
  return v9;
}


// CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>::Find  (line 237, @0x000000000217f4e0, libserver.so)  // inlines: ConceptHistory_t, Element, Find, LeftChild, Node_t, RightChild, operator(), operator[], ~ConceptHistory_t, ~Node_t
// calls: CRR_Response::CRR_Response, CRR_Response::~CRR_Response, _Unwind_Resume, __stack_chk_fail
// callers: CAI_Expresser::CanSpeakConcept, CAI_Expresser::GetTimeSpokeConcept, CAI_Expresser::ClearSpokeConcept
CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::IndexType_t __fastcall CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Find(
        const CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)> *const this,
        const CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::KeyType_t *const key)
{
  CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::IndexType_t m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  unsigned __int64 v6; // rbx
  CUtlMap<char const*,ConceptHistory_t,int,bool (*)(char const* const&,char const* const&)>::Node_t dummyNode; // [rsp+0h] [rbp-200h] BYREF
  unsigned __int64 v9; // [rsp+1D8h] [rbp-28h]

  dummyNode.elem.timeSpoken = -1.0;
  v9 = __readfsqword(0x28u);
  CRR_Response::CRR_Response(&dummyNode.elem.m_response);
  m_Root = this->m_Tree.m_Root;
  dummyNode.key = *key;
  if ( m_Root == -1 )
  {
LABEL_7:
    m_Root = -1;
  }
  else
  {
    m_pMemory = this->m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = m_Root;
        if ( this->m_Tree.m_LessFunc.m_LessFunc(&dummyNode, &m_pMemory[v6].m_Data) == 0 )
          break;
        m_pMemory = this->m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == -1 )
          goto LABEL_7;
      }
      if ( this->m_Tree.m_LessFunc.m_LessFunc(&this->m_Tree.m_Elements.m_pMemory[v6].m_Data, &dummyNode) == 0 )
        break;
      m_pMemory = this->m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v6].m_Right;
      if ( m_Root == -1 )
        goto LABEL_7;
    }
  }
  CRR_Response::~CRR_Response(&dummyNode.elem.m_response);
  return m_Root;
}


// CUtlMap<int, CHeroLoadout, short unsigned int, bool (*)(int const&, int const&)>::Find  (line 237, @0x0000000002e597f0, libserver.so)  // inlines: CHeroLoadout, Element, Find, LeftChild, Node_t, ResetPredictedItems, RightChild, V_memset, itemid_t, memset, operator(), operator[]
// callers: CDOTAPlayerInventory::HasHero, CDOTAPlayerInventory::GetItemInLoadout, CDOTAPlayerInventory::RemoveItemFromLoadout
CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::IndexType_t __fastcall CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Find(
        const CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)> *const this,
        const CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t *const key)
{
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::Node_t *p_elem; // rax
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::IndexType_t m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int64 v6; // rbx
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::Node_t dummyNode; // [rsp+0h] [rbp-130h] BYREF

  p_elem = &dummyNode.elem;
  do
  {
    *&p_elem->key = 0;
    p_elem = (p_elem + 8);
  }
  while ( p_elem != dummyNode.elem.m_pPredictedEconItemViews );
  m_Root = this->m_Tree.m_Root;
  memset(&dummyNode.elem, 0, 257);
  dummyNode.elem.m_nPredictedItemRefCount = 0;
  dummyNode.key = *key;
  if ( m_Root == 0xFFFF )
    return -1;
  m_pMemory = this->m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = m_Root;
      if ( this->m_Tree.m_LessFunc.m_LessFunc(&dummyNode, &m_pMemory[v6].m_Data) == 0 )
        break;
      m_pMemory = this->m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == 0xFFFF )
        return -1;
    }
    if ( this->m_Tree.m_LessFunc.m_LessFunc(&this->m_Tree.m_Elements.m_pMemory[v6].m_Data, &dummyNode) == 0 )
      break;
    m_pMemory = this->m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v6].m_Right;
    if ( m_Root == 0xFFFF )
      return -1;
  }
  return m_Root;
}


// CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::Find  (line 237, @0x0000000003108820, libserver.so)  // inlines: Element, Find, LeftChild, Node_t, RightChild, operator(), operator[], ~Node_t
// calls: Criteria::Criteria, Criteria::~Criteria, _Unwind_Resume, __stack_chk_fail
// callers: CResponseFileParser::ParseOneCriterion
CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::IndexType_t __fastcall CUtlMap<char const*,Criteria,short,bool (*)(char const* const&,char const* const&)>::Find(
        const CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)> *const this,
        const CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::KeyType_t *const key)
{
  CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::IndexType_t m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *m_pMemory; // rax
  __int64 v6; // rbx
  CUtlMap<char const*,Criteria,short int,bool (*)(char const* const&,char const* const&)>::Node_t dummyNode; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  Criteria::Criteria(&dummyNode.elem);
  m_Root = this->m_Tree.m_Root;
  dummyNode.key = *key;
  if ( m_Root == -1 )
  {
LABEL_7:
    m_Root = -1;
  }
  else
  {
    m_pMemory = this->m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = m_Root << 6;
        if ( this->m_Tree.m_LessFunc.m_LessFunc(&dummyNode, &m_pMemory->m_Data + v6) == 0 )
          break;
        m_pMemory = this->m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == -1 )
          goto LABEL_7;
      }
      if ( this->m_Tree.m_LessFunc.m_LessFunc(&this->m_Tree.m_Elements.m_pMemory->m_Data + v6, &dummyNode) == 0 )
        break;
      m_pMemory = this->m_Tree.m_Elements.m_pMemory;
      m_Root = *(&m_pMemory->m_Right + v6);
      if ( m_Root == -1 )
        goto LABEL_7;
    }
  }
  Criteria::~Criteria(&dummyNode.elem);
  return m_Root;
}


