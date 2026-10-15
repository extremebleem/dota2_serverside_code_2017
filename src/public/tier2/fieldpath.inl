
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder  (line 661, @0x0000000001b2c920, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
void __fastcall CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder(CFieldPathHuffmanEncoder *const this)
{
  CFieldPathHuffmanEncoder::INode *m_pRoot; // rdi
  bool v3; // zf

  m_pRoot = this->m_pRoot;
  if ( m_pRoot != 0 )
    (*(m_pRoot->_vptr_INode + 1))(m_pRoot);
  v3 = (this->m_FixedTree.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_FixedTree.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CFieldPathHuffmanEncoder::composed_t,int>::Purge(&this->m_FixedTree.m_Memory);
    if ( (this->m_FixedTree.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFieldPathHuffmanEncoder::composed_t,int>::Purge(&this->m_FixedTree.m_Memory);
  }
  v3 = (this->m_Frequencies.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_OpCodeToHuffmanLookup.m_Size = 0;
  this->m_Frequencies.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<int,int>::Purge(&this->m_Frequencies.m_Memory);
    if ( (this->m_Frequencies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_Frequencies.m_Memory);
  }
}


// CFieldPathHuffmanEncoder::INode::~INode  (line 732, @0x0000000003129910, libserver.so)
void __fastcall CFieldPathHuffmanEncoder::INode::~INode(CFieldPathHuffmanEncoder::INode *const this)
{
  this->_vptr_INode = off_47C4F10;
}


// CFieldPathHuffmanEncoder::INode::~INode  (line 732, @0x00000000031299d0, libserver.so)  // inlines: ~INode
// calls: operator delete
void __fastcall CFieldPathHuffmanEncoder::INode::~INode(CFieldPathHuffmanEncoder::INode *const this)
{
  this->_vptr_INode = off_47C4F10;
  operator delete(this);
}


// CFieldPathHuffmanEncoder::InternalNode::~InternalNode  (line 747, @0x0000000003129920, libserver.so)  // inlines: ~INode
void __fastcall CFieldPathHuffmanEncoder::InternalNode::~InternalNode(
        CFieldPathHuffmanEncoder::InternalNode *const this)
{
  CFieldPathHuffmanEncoder::INode *left; // rdi
  CFieldPathHuffmanEncoder::INode *right; // rdi

  this->_vptr_INode = off_47C4F50;
  left = this->left;
  if ( left != 0 )
    (*(left->_vptr_INode + 1))(left);
  right = this->right;
  if ( right != 0 )
    (*(right->_vptr_INode + 1))(right);
  this->_vptr_INode = off_47C4F10;
}


// CFieldPathHuffmanEncoder::InternalNode::~InternalNode  (line 747, @0x0000000003129a50, libserver.so)  // inlines: ~INode, ~InternalNode
// calls: operator delete
void __fastcall CFieldPathHuffmanEncoder::InternalNode::~InternalNode(
        CFieldPathHuffmanEncoder::InternalNode *const this)
{
  CFieldPathHuffmanEncoder::INode *left; // rdi
  CFieldPathHuffmanEncoder::INode *right; // rdi

  this->_vptr_INode = off_47C4F50;
  left = this->left;
  if ( left != 0 )
    (*(left->_vptr_INode + 1))(left);
  right = this->right;
  if ( right != 0 )
    (*(right->_vptr_INode + 1))(right);
  this->_vptr_INode = off_47C4F10;
  operator delete(this);
}


// CFieldPathHuffmanEncoder::InternalNode::IsLeafNode  (line 753, @0x0000000003129970, libserver.so)
bool __fastcall CFieldPathHuffmanEncoder::InternalNode::IsLeafNode(
        const CFieldPathHuffmanEncoder::InternalNode *const this)
{
  return 0;
}


// CFieldPathHuffmanEncoder::LeafNode::~LeafNode  (line 756, @0x00000000031299c0, libserver.so)  // inlines: ~INode
void __fastcall CFieldPathHuffmanEncoder::LeafNode::~LeafNode(CFieldPathHuffmanEncoder::LeafNode *const this)
{
  this->_vptr_INode = off_47C4F10;
}


// CFieldPathHuffmanEncoder::LeafNode::~LeafNode  (line 756, @0x00000000031299f0, libserver.so)  // inlines: ~INode, ~LeafNode
// calls: operator delete
void __fastcall CFieldPathHuffmanEncoder::LeafNode::~LeafNode(CFieldPathHuffmanEncoder::LeafNode *const this)
{
  this->_vptr_INode = off_47C4F10;
  operator delete(this);
}


// CFieldPathHuffmanEncoder::LeafNode::IsLeafNode  (line 762, @0x0000000003129980, libserver.so)
bool __fastcall CFieldPathHuffmanEncoder::LeafNode::IsLeafNode(const CFieldPathHuffmanEncoder::LeafNode *const this)
{
  return 1;
}


// CFieldPathHuffmanEncoder::INodeLessFunc  (line 765, @0x0000000003129990, libserver.so)
bool __fastcall CFieldPathHuffmanEncoder::INodeLessFunc(
        CFieldPathHuffmanEncoder::INode *const *const lhs,
        CFieldPathHuffmanEncoder::INode *const *const rhs)
{
  bool result; // al
  CFieldPathHuffmanEncoder::INode *v3; // rdx
  int f; // esi

  result = 1;
  v3 = *rhs;
  f = (*rhs)->f;
  if ( (*lhs)->f <= f )
  {
    result = 0;
    if ( (*lhs)->f >= f )
      return (*lhs)->slot < v3->slot;
  }
  return result;
}


