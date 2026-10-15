
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMeshEdgeSplitter::~CMeshEdgeSplitter  (line 19, @0x00000000031d2fc0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMap, ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::RemoveAll, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int>::Purge, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge
// callers: CMesh::IsConvex, CMesh::SplitLongEdges
void __fastcall CMeshEdgeSplitter::~CMeshEdgeSplitter(CMeshEdgeSplitter *const this)
{
  bool v2; // zf
  uint32 m_nGrowSize; // eax
  CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t,CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_splitList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_splitList.m_heap.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_splitList.m_heap.m_Memory;
    CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t,int>::Purge(&this->m_splitList.m_heap.m_Memory);
    if ( (this->m_splitList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t,int>::Purge(p_m_Memory);
  }
  CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::RemoveAll(&this->m_heSec.m_Tree);
  v2 = (this->m_heSec.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_heSec.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&this->m_heSec.m_Tree.m_Elements);
    v2 = (this->m_heSec.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_heSec.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&this->m_heSec.m_Tree.m_Elements);
  }
  else
  {
    this->m_heSec.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::RemoveAll(&this->m_hePri.m_Tree);
  v2 = (this->m_hePri.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_hePri.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&this->m_hePri.m_Tree.m_Elements);
    m_nGrowSize = this->m_hePri.m_Tree.m_Elements.m_nGrowSize;
    this->m_hePri.m_Tree.m_LastAlloc.index = -1;
    if ( (m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>::Purge(&this->m_hePri.m_Tree.m_Elements);
  }
  else
  {
    this->m_hePri.m_Tree.m_LastAlloc.index = -1;
  }
}


