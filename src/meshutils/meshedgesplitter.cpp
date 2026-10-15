
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_meshedgesplitter.cpp  (line 0, @0x0000000001a6d440, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_meshedgesplitter_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CompareHalfEdges  (line 9, @0x00000000031d4e40, libserver.so)  // inlines: operator<
bool __fastcall CompareHalfEdges(
        const CMeshEdgeSplitter::HalfEdge_t *const left,
        const CMeshEdgeSplitter::HalfEdge_t *const right)
{
  bool v2; // cf

  v2 = left->m_nVert[0] < right->m_nVert[0];
  if ( left->m_nVert[0] == right->m_nVert[0] )
    return left->m_nVert[1] < right->m_nVert[1];
  return v2;
}


// CMeshEdgeSplitter::CMeshEdgeSplitter  (line 42, @0x00000000031d5af0, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlPriorityQueue, CUtlRBTree, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ResetDbgInfo, ~CUtlMap, ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlVector, ~CUtlVectorBase
// calls: CMesh::Validate, CMeshEdgeSplitter::AddHalfEdge, CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::~CUtlRBTree, _Unwind_Resume, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge
// callers: CMesh::IsConvex, CMesh::SplitLongEdges
// globals: CompareHalfEdges(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)
void __fastcall CMeshEdgeSplitter::CMeshEdgeSplitter(CMeshEdgeSplitter *const this, CMesh *pMesh)
{
  uint v4; // ebx
  int v5; // r15d
  uint v6; // ecx
  uint32 *v7; // r12
  uint v8; // esi
  uint v9; // edx

  this->m_hePri.m_Tree.m_LessFunc.m_LessFunc = CompareHalfEdges;
  this->m_hePri.m_Tree.m_Elements.m_pMemory = 0;
  this->m_hePri.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_hePri.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_hePri.m_Tree.m_Root = -1;
  this->m_hePri.m_Tree.m_NumElements = 0;
  this->m_hePri.m_Tree.m_FirstFree = -1;
  this->m_hePri.m_Tree.m_LastAlloc.index = -1;
  this->m_hePri.m_Tree.m_pElements = 0;
  this->m_heSec.m_Tree.m_LessFunc.m_LessFunc = CompareHalfEdges;
  this->m_heSec.m_Tree.m_Elements.m_pMemory = 0;
  this->m_heSec.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_heSec.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_heSec.m_Tree.m_Root = -1;
  this->m_heSec.m_Tree.m_NumElements = 0;
  this->m_heSec.m_Tree.m_FirstFree = -1;
  this->m_heSec.m_Tree.m_LastAlloc.index = -1;
  this->m_heSec.m_Tree.m_pElements = 0;
  this->m_splitList.m_heap.m_Size = 0;
  this->m_splitList.m_heap.m_Memory.m_pMemory = 0;
  this->m_splitList.m_heap.m_Memory.m_nAllocationCount = 0;
  this->m_splitList.m_heap.m_Memory.m_nGrowSize = 0;
  this->m_splitList.m_LessFunc = 0;
  this->m_bNonManifold = 0;
  this->m_pMesh = pMesh;
  CMesh::Validate(pMesh);
  v4 = 0;
  this->m_nAllocatedIndices = pMesh->m_nIndexCount;
  this->m_nAllocatedVertices = pMesh->m_nVertexCount;
  v5 = pMesh->m_nIndexCount / 3;
  if ( v5 != 0 )
  {
    do
    {
      while ( 1 )
      {
        v7 = &pMesh->m_pIndices[3 * v4];
        v8 = *v7;
        v9 = v7[1];
        if ( *v7 == v9 )
          break;
        v6 = v7[2];
        if ( v9 == v6 || v8 == v6 )
          break;
        CMeshEdgeSplitter::AddHalfEdge(this, v8, v9, v6, v4, 2u);
        CMeshEdgeSplitter::AddHalfEdge(this, v7[1], v7[2], *v7, v4, 0);
        CMeshEdgeSplitter::AddHalfEdge(this, v7[2], *v7, v7[1], v4++, 1u);
        if ( v5 == v4 )
          return;
      }
      ++v4;
      this->m_bNonManifold = 1;
    }
    while ( v5 != v4 );
  }
}


// CMeshEdgeSplitter::NewTri  (line 69, @0x00000000031d4ee0, libserver.so)  // inlines: V_memcpy, memcpy
// calls: operator new [], memcpy
// callers: CMeshEdgeSplitter::NewTri, CMeshEdgeSplitter::SplitEdge
uint __fastcall CMeshEdgeSplitter::NewTri(CMeshEdgeSplitter *const this)
{
  CMesh *m_pMesh; // rcx
  uint v3; // ebx
  uint v4; // r13d
  int v5; // eax
  __int64 v6; // rdi
  void *v7; // rax

  m_pMesh = this->m_pMesh;
  v3 = m_pMesh->m_nIndexCount / 3;
  v4 = 3 * v3 + 3;
  if ( v4 > this->m_nAllocatedIndices )
  {
    v5 = 100;
    if ( v3 >= 0x64 )
      v5 = m_pMesh->m_nIndexCount / 3;
    v6 = (6 * v5);
    this->m_nAllocatedIndices = v6;
    v7 = operator new[](4 * v6);
    this->m_pMesh->m_pIndices = memcpy(v7, this->m_pMesh->m_pIndices, 12LL * v3);
    m_pMesh = this->m_pMesh;
  }
  m_pMesh->m_nIndexCount = v4;
  return v3;
}


// CMeshEdgeSplitter::NewTri  (line 83, @0x00000000031d4f80, libserver.so)  // inlines: GetTri
// calls: CMeshEdgeSplitter::NewTri
uint __fastcall CMeshEdgeSplitter::NewTri(CMeshEdgeSplitter *const this, uint v0, uint v1, uint v2)
{
  uint result; // eax
  uint32 *v9; // rdi

  result = CMeshEdgeSplitter::NewTri(this);
  v9 = &this->m_pMesh->m_pIndices[3 * result];
  *v9 = v0;
  v9[1] = v1;
  v9[2] = v2;
  return result;
}


// CMeshEdgeSplitter::NewVertex  (line 93, @0x00000000031d4fd0, libserver.so)  // inlines: V_memcpy, memcpy
// calls: operator new [], memcpy, operator delete []
// callers: CMeshEdgeSplitter::NewInterpolatedVertex
uint __fastcall CMeshEdgeSplitter::NewVertex(CMeshEdgeSplitter *const this)
{
  CMesh *m_pMesh; // rax
  uint m_nVertexCount; // r12d
  int v4; // eax
  CMesh *v5; // rdx
  uint v6; // eax
  int m_nVertexStrideFloats; // r14d
  void *v8; // r13
  CMesh *v9; // rdx

  m_pMesh = this->m_pMesh;
  m_nVertexCount = m_pMesh->m_nVertexCount;
  m_pMesh->m_nVertexCount = m_nVertexCount + 1;
  if ( m_nVertexCount >= this->m_nAllocatedVertices )
  {
    v4 = 100;
    v5 = this->m_pMesh;
    if ( m_nVertexCount >= 0x64 )
      v4 = m_nVertexCount;
    v6 = 2 * v4;
    this->m_nAllocatedVertices = v6;
    m_nVertexStrideFloats = v5->m_nVertexStrideFloats;
    v8 = operator new[](4LL * m_nVertexStrideFloats * v6);
    memcpy(v8, this->m_pMesh->m_pVerts, 4LL * m_nVertexCount * m_nVertexStrideFloats);
    v9 = this->m_pMesh;
    if ( v9->m_pVerts != 0 )
    {
      operator delete[](v9->m_pVerts);
      v9 = this->m_pMesh;
    }
    v9->m_pVerts = v8;
  }
  return m_nVertexCount;
}


// CMeshEdgeSplitter::NewInterpolatedVertex  (line 110, @0x00000000031d5080, libserver.so)  // inlines: GetVertex
// calls: CMeshEdgeSplitter::NewVertex
// callers: CMeshEdgeSplitter::SplitEdge
uint __fastcall CMeshEdgeSplitter::NewInterpolatedVertex(CMeshEdgeSplitter *const this, uint v0, uint v1)
{
  int m_nVertexStrideFloats; // ebx
  uint result; // eax
  CMesh *m_pMesh; // rcx
  float *m_pVerts; // rdx
  float *v10; // rdi
  float *v11; // rsi
  float *v12; // rcx
  __int64 i; // rdx

  m_nVertexStrideFloats = this->m_pMesh->m_nVertexStrideFloats;
  result = CMeshEdgeSplitter::NewVertex(this);
  m_pMesh = this->m_pMesh;
  m_pVerts = m_pMesh->m_pVerts;
  LODWORD(m_pMesh) = m_pMesh->m_nVertexStrideFloats;
  v10 = &m_pVerts[m_pMesh * result];
  v11 = &m_pVerts[m_pMesh * v0];
  v12 = &m_pVerts[m_pMesh * v1];
  for ( i = 0; m_nVertexStrideFloats > i; ++i )
    v10[i] = (v11[i] + v12[i]) * 0.5;
  return result;
}


// CMeshEdgeSplitter::AddHalfEdge  (line 126, @0x00000000031d5a50, libserver.so)  // inlines: Find, InsertIfNotFound
// calls: CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::Find, CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::InsertIfNotFound
// callers: CMeshEdgeSplitter::CMeshEdgeSplitter
void __fastcall CMeshEdgeSplitter::AddHalfEdge(
        CMeshEdgeSplitter *const this,
        uint v0,
        uint v1,
        uint v2,
        uint nTri,
        uint nOppositeIdx)
{
  unsigned int v10; // eax
  CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(const CMeshEdgeSplitter::HalfEdge_t&,const CMeshEdgeSplitter::HalfEdge_t&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  search.key.m_nVert[1] = v0;
  search.key.m_nVert[0] = v1;
  v10 = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Find(
          &this->m_hePri.m_Tree,
          &search);
  search.key.m_nVert[0] = v0;
  search.key.m_nVert[1] = v1;
  search.elem.m_nOppositeVert = v2;
  search.elem.m_nTri = nTri;
  if ( v10 != -1 )
  {
    if ( CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::InsertIfNotFound(
           &this->m_heSec.m_Tree,
           &search) != -1 )
      return;
LABEL_5:
    this->m_bNonManifold = 1;
    return;
  }
  if ( CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::InsertIfNotFound(
         &this->m_hePri.m_Tree,
         &search) == -1 )
    goto LABEL_5;
}


// CMeshEdgeSplitter::AddToSplitLists  (line 160, @0x00000000031d58e0, libserver.so)  // inlines: AddToTail, Element, GetVert, GrowMemory, Insert, Key, LengthSqr, PercolateUp, Swap, VectorSubtract, operator-, operator[]
// calls: CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Grow
// callers: CMeshEdgeSplitter::SplitEdge, CMeshEdgeSplitter::SplitLongEdges
void __fastcall CMeshEdgeSplitter::AddToSplitLists(
        CMeshEdgeSplitter *const this,
        CMeshEdgeSplitter::HalfEdgeIndex_t it)
{
  CMesh *m_pMesh; // rdx
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *v5; // rax
  float *m_pVerts; // rcx
  __int64 v7; // rdi
  float *v8; // rdx
  float *v9; // rax
  float v10; // xmm0_4
  int m_Size; // r12d
  int v12; // eax
  __int64 v13; // rcx
  CMeshEdgeSplitter::HalfEdgeWithLength_t *v14; // rax
  CMeshEdgeSplitter::HalfEdgeWithLength_t *m_pMemory; // rsi
  int v16; // edx
  CMeshEdgeSplitter::HalfEdgeWithLength_t *v17; // rax
  CMeshEdgeSplitter::HalfEdgeWithLength_t *v18; // rsi
  float m_flLengthSqr; // xmm0_4
  CMeshEdgeSplitter::HalfEdgeWithLength_t *v20; // rsi
  CMeshEdgeSplitter::HalfEdgeIndex_t m_nIndex; // edi
  CMeshEdgeSplitter::HalfEdgeWithLength_t *v22; // rcx
  float v23; // [rsp+Ch] [rbp-24h]

  m_pMesh = this->m_pMesh;
  v5 = &this->m_hePri.m_Tree.m_Elements.m_pMemory[it];
  m_pVerts = m_pMesh->m_pVerts;
  v7 = v5->m_Data.key.m_nVert[1] * m_pMesh->m_nVertexStrideFloats;
  v8 = &m_pMesh->m_pVerts[v5->m_Data.key.m_nVert[0] * m_pMesh->m_nVertexStrideFloats];
  v9 = &m_pVerts[v7];
  v10 = (((*v8 - *v9) * (*v8 - *v9)) + ((v8[1] - v9[1]) * (v8[1] - v9[1]))) + ((v8[2] - v9[2]) * (v8[2] - v9[2]));
  if ( v10 > this->m_flSplitLenSqr )
  {
    m_Size = this->m_splitList.m_heap.m_Size;
    v12 = m_Size;
    if ( m_Size == this->m_splitList.m_heap.m_Memory.m_nAllocationCount )
    {
      v23 = v10;
      CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t,int>::Grow(&this->m_splitList.m_heap.m_Memory, 1);
      v12 = this->m_splitList.m_heap.m_Size;
      v10 = v23;
    }
    v13 = m_Size;
    this->m_splitList.m_heap.m_Size = v12 + 1;
    v14 = &this->m_splitList.m_heap.m_Memory.m_pMemory[v13];
    v14->m_flLengthSqr = v10;
    v14->m_nIndex = it;
    if ( m_Size < this->m_splitList.m_heap.m_Size && m_Size != 0 )
    {
      m_pMemory = this->m_splitList.m_heap.m_Memory.m_pMemory;
      v16 = (m_Size + 1) / 2 - 1;
      v17 = &m_pMemory[v16];
      v18 = &m_pMemory[v13];
      m_flLengthSqr = v17->m_flLengthSqr;
      if ( v17->m_flLengthSqr <= v18->m_flLengthSqr )
      {
        while ( 1 )
        {
          m_nIndex = v17->m_nIndex;
          *v17 = *v18;
          v22 = &this->m_splitList.m_heap.m_Memory.m_pMemory[v13];
          v22->m_flLengthSqr = m_flLengthSqr;
          v22->m_nIndex = m_nIndex;
          if ( v16 == 0 )
            break;
          v20 = this->m_splitList.m_heap.m_Memory.m_pMemory;
          v13 = v16;
          v17 = &v20[(v16 + 1) / 2 - 1];
          v18 = &v20[v13];
          m_flLengthSqr = v17->m_flLengthSqr;
          if ( v17->m_flLengthSqr > v18->m_flLengthSqr )
            break;
          v16 = (v16 + 1) / 2 - 1;
        }
      }
    }
  }
}


// CMeshEdgeSplitter::ClearSplitLists  (line 210, @0x00000000031d5110, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge
void __fastcall CMeshEdgeSplitter::ClearSplitLists(CMeshEdgeSplitter *const this)
{
  bool v1; // zf

  v1 = (this->m_splitList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_splitList.m_heap.m_Size = 0;
  if ( v1 )
    CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t,int>::Purge(&this->m_splitList.m_heap.m_Memory);
}


// CMeshEdgeSplitter::SplitLongEdges  (line 226, @0x00000000031d5fb0, libserver.so)  // inlines: ClearSplitLists, Element, FastRemove, FirstInorder, LeftChild, NextInorder, PercolateDown, Purge, RemoveAll, RemoveAtHead, Swap, memcpy, operator[]
// calls: CMeshEdgeSplitter::AddToSplitLists, CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::NextInorder, CMeshEdgeSplitter::SplitEdge, Warning, CMesh::Validate, Msg, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge, sqrtf
// callers: CMesh::SplitLongEdges
// strings: "Found max edge length %g. Skipping SplitLongEdges, as that'll take too long to split.\n", "Splitting huge triangles (%d verts,%d tris) -> (%d verts,%d tris), %d splits\n"
void __fastcall CMeshEdgeSplitter::SplitLongEdges(CMeshEdgeSplitter *const this, float a2, float flMaxLength)
{
  unsigned int m_Root; // ecx
  CMesh *m_pMesh; // rax
  int m_nVertexCount; // r13d
  int m_nIndexCount; // r12d
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *m_pMemory; // rdx
  CMeshEdgeSplitter::HalfEdgeIndex_t m_Left; // ebx
  int m_Size; // eax
  int v11; // ebx
  CMeshEdgeSplitter::HalfEdgeWithLength_t *v12; // rdx
  float m_flLengthSqr; // xmm1_4
  __int64 m_nIndex; // rsi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // edx
  CMeshEdgeSplitter::HalfEdgeWithLength_t *v19; // rdi
  CMeshEdgeSplitter::HalfEdgeWithLength_t *v20; // rax
  float v21; // xmm0_4
  CMeshEdgeSplitter::HalfEdgeIndex_t v22; // r10d
  CMeshEdgeSplitter::HalfEdgeWithLength_t *v23; // rax
  int v24; // eax
  CMesh *v25; // rax
  int v26; // ecx
  int v27; // r8d
  float flMaxLengtha; // [rsp+Ch] [rbp-24h]

  this->m_splitList.m_heap.m_Size = 0;
  if ( (this->m_splitList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    flMaxLengtha = a2;
    CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t,int>::Purge(&this->m_splitList.m_heap.m_Memory);
    a2 = flMaxLengtha;
  }
  m_Root = this->m_hePri.m_Tree.m_Root;
  m_pMesh = this->m_pMesh;
  m_nVertexCount = m_pMesh->m_nVertexCount;
  m_nIndexCount = m_pMesh->m_nIndexCount;
  this->m_flSplitLenSqr = a2 * a2;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_hePri.m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left == -1 )
    {
      m_Left = m_Root;
    }
    else
    {
      while ( m_pMemory[m_Left].m_Left != -1 )
        m_Left = m_pMemory[m_Left].m_Left;
    }
    do
    {
      CMeshEdgeSplitter::AddToSplitLists(this, m_Left);
      m_Left = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::NextInorder(
                 &this->m_hePri.m_Tree,
                 m_Left);
    }
    while ( m_Left != -1 );
  }
  m_Size = this->m_splitList.m_heap.m_Size;
  v11 = 0;
  if ( m_Size > 0 )
  {
    v12 = this->m_splitList.m_heap.m_Memory.m_pMemory;
    v11 = 0;
    m_flLengthSqr = v12->m_flLengthSqr;
    m_nIndex = v12->m_nIndex;
    if ( v12->m_flLengthSqr < 1.0e10 )
    {
      while ( 1 )
      {
        v15 = m_Size - 1;
        if ( v15 != 0 )
          *v12 = v12[v15];
        v16 = 0;
        v17 = this->m_splitList.m_heap.m_Size - 1;
        this->m_splitList.m_heap.m_Size = v17;
        if ( v17 / 2 > 0 )
          break;
LABEL_26:
        ++v11;
        CMeshEdgeSplitter::SplitEdge(this, m_nIndex);
        m_Size = this->m_splitList.m_heap.m_Size;
        if ( m_Size <= 0 )
          goto LABEL_29;
        v12 = this->m_splitList.m_heap.m_Memory.m_pMemory;
        m_flLengthSqr = v12->m_flLengthSqr;
        m_nIndex = v12->m_nIndex;
        if ( v12->m_flLengthSqr >= 1.0e10 )
          goto LABEL_28;
      }
      while ( 1 )
      {
        v24 = 2 * v16 + 2;
        v18 = 2 * v16 + 1;
        if ( v17 <= v18 )
        {
          v18 = v16;
          if ( v17 <= v24 )
            goto LABEL_16;
        }
        else
        {
          if ( this->m_splitList.m_heap.m_Memory.m_pMemory[v18].m_flLengthSqr <= this->m_splitList.m_heap.m_Memory.m_pMemory[v16].m_flLengthSqr )
            v18 = v16;
          if ( v17 <= v24 )
          {
LABEL_16:
            if ( v16 == v18 )
              goto LABEL_26;
            goto LABEL_17;
          }
        }
        if ( this->m_splitList.m_heap.m_Memory.m_pMemory[v24].m_flLengthSqr > this->m_splitList.m_heap.m_Memory.m_pMemory[v18].m_flLengthSqr )
          v18 = 2 * v16 + 2;
        if ( v16 == v18 )
          goto LABEL_26;
LABEL_17:
        v19 = this->m_splitList.m_heap.m_Memory.m_pMemory;
        v20 = &v19[v16];
        v21 = v20->m_flLengthSqr;
        v22 = v20->m_nIndex;
        *v20 = v19[v18];
        v23 = &this->m_splitList.m_heap.m_Memory.m_pMemory[v18];
        v23->m_flLengthSqr = v21;
        v23->m_nIndex = v22;
        if ( v17 / 2 <= v18 )
          goto LABEL_26;
        v16 = v18;
      }
    }
LABEL_28:
    Warning(
      "Found max edge length %g. Skipping SplitLongEdges, as that'll take too long to split.\n",
      m_nIndex,
      fsqrt(m_flLengthSqr));
  }
LABEL_29:
  CMesh::Validate(this->m_pMesh);
  v25 = this->m_pMesh;
  v26 = v25->m_nVertexCount;
  v27 = v25->m_nIndexCount;
  if ( v26 != m_nVertexCount || v27 != m_nIndexCount )
    Msg(
      "Splitting huge triangles (%d verts,%d tris) -> (%d verts,%d tris), %d splits\n",
      m_nVertexCount,
      m_nIndexCount / 3,
      v26,
      v27,
      v11);
}


// CMeshEdgeSplitter::SplitEdge  (line 299, @0x00000000031d5f20, libserver.so)  // inlines: Element, Find, Key, NewInterpolatedVertex, operator[]
// calls: CMeshEdgeSplitter::NewInterpolatedVertex, CMeshEdgeSplitter::SplitEdge, CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::Find
// callers: CMeshEdgeSplitter::SplitLongEdges
void __fastcall CMeshEdgeSplitter::SplitEdge(CMeshEdgeSplitter *const this, CMeshEdgeSplitter::HalfEdgeIndex_t itEdge)
{
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *v4; // rax
  uint v5; // r12d
  uint v6; // r13d
  uint v7; // r15d
  CMeshEdgeSplitter::HalfEdgeIndex_t v8; // eax
  CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(const CMeshEdgeSplitter::HalfEdge_t&,const CMeshEdgeSplitter::HalfEdge_t&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  v4 = &this->m_hePri.m_Tree.m_Elements.m_pMemory[itEdge];
  v5 = v4->m_Data.key.m_nVert[0];
  v6 = v4->m_Data.key.m_nVert[1];
  v7 = CMeshEdgeSplitter::NewInterpolatedVertex(this, v5, v6);
  CMeshEdgeSplitter::SplitEdge(this, &this->m_hePri, itEdge, v7);
  search.key.m_nVert[1] = v5;
  search.key.m_nVert[0] = v6;
  v8 = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Find(
         &this->m_heSec.m_Tree,
         &search);
  if ( v8 != -1 )
    CMeshEdgeSplitter::SplitEdge(this, &this->m_heSec, v8, v7);
}


// CMeshEdgeSplitter::SplitEdge  (line 316, @0x00000000031d5cf0, libserver.so)  // inlines: Element, FreeNode, GetOppositeVertIt, GetTri, HalfEdgeData_t, HalfEdge_t, Insert, Key, NewTri, RemoveAt, SetLeftChild, SetRightChild, operator[]
// calls: CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::Unlink, CMeshEdgeSplitter::NewTri, CMeshEdgeSplitter::ReplaceHalfEdgeTri, CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::Insert, CMeshEdgeSplitter::AddToSplitLists
// callers: CMeshEdgeSplitter::SplitEdge
void __fastcall CMeshEdgeSplitter::SplitEdge(
        CMeshEdgeSplitter *const this,
        CMeshEdgeSplitter::HalfEdgeMap *const refMap,
        CMeshEdgeSplitter::HalfEdgeIndex_t itEdge,
        uint nVertCenter)
{
  __int64 v4; // r15
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *v8; // rax
  uint m_nTri; // r12d
  uint32 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  uint v13; // r15d
  uint32 *v14; // rax
  CMeshEdgeSplitter::HalfEdgeIndex_t v15; // eax
  unsigned int v16; // eax
  uint v17; // [rsp+8h] [rbp-68h]
  CMeshEdgeSplitter::HalfEdge_t he; // [rsp+10h] [rbp-60h]
  CMeshEdgeSplitter::HalfEdgeIndex_t itNewEdge0a; // [rsp+28h] [rbp-48h]
  unsigned int itNewEdge0; // [rsp+28h] [rbp-48h]
  uint itNewEdge3; // [rsp+2Ch] [rbp-44h]
  CMeshEdgeSplitter::HalfEdgeIndex_t itNewEdge3a; // [rsp+2Ch] [rbp-44h]
  CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(const CMeshEdgeSplitter::HalfEdge_t&,const CMeshEdgeSplitter::HalfEdge_t&)>::Node_t newTri[4]; // [rsp+30h] [rbp-40h] BYREF

  v4 = itEdge;
  v8 = &refMap->m_Tree.m_Elements.m_pMemory[v4];
  m_nTri = v8->m_Data.elem.m_nTri;
  he.m_nVert[0] = v8->m_Data.key.m_nVert[0];
  itNewEdge3 = v8->m_Data.key.m_nVert[1];
  if ( itEdge != -1 )
  {
    CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Unlink(
      &refMap->m_Tree,
      itEdge);
    refMap->m_Tree.m_Elements.m_pMemory[v4].m_Left = itEdge;
    refMap->m_Tree.m_Elements.m_pMemory[v4].m_Right = refMap->m_Tree.m_FirstFree;
    --refMap->m_Tree.m_NumElements;
    refMap->m_Tree.m_FirstFree = itEdge;
  }
  v10 = &this->m_pMesh->m_pIndices[3 * m_nTri];
  if ( he.m_nVert[0] == *v10 )
  {
    v11 = 1;
    v12 = 2;
  }
  else if ( he.m_nVert[0] == v10[1] )
  {
    v11 = 2;
    v12 = 0;
  }
  else
  {
    if ( he.m_nVert[0] != v10[2] )
      return;
    v11 = 0;
    v12 = 1;
  }
  v13 = v10[v12];
  v10[v11] = nVertCenter;
  itNewEdge0a = CMeshEdgeSplitter::NewTri(this);
  v14 = &this->m_pMesh->m_pIndices[3 * itNewEdge0a];
  v14[1] = itNewEdge3;
  *v14 = nVertCenter;
  v14[2] = v13;
  newTri[0].key.m_nVert[0] = itNewEdge0a;
  newTri[0].key.m_nVert[1] = nVertCenter;
  CMeshEdgeSplitter::ReplaceHalfEdgeTri(this, ((v13 << 32) | itNewEdge3), m_nTri, newTri);
  newTri[0].key.m_nVert[0] = m_nTri;
  newTri[0].key.m_nVert[1] = nVertCenter;
  CMeshEdgeSplitter::ReplaceHalfEdgeTri(this, (v13 | (*&he << 32)), m_nTri, newTri);
  newTri[0].key.m_nVert[0] = nVertCenter;
  newTri[0].elem.m_nOppositeVert = v13;
  newTri[0].key.m_nVert[1] = itNewEdge3;
  newTri[0].elem.m_nTri = itNewEdge0a;
  v17 = itNewEdge0a;
  itNewEdge0 = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Insert(
                 &refMap->m_Tree,
                 newTri,
                 ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  newTri[0].key.m_nVert[0] = v13;
  newTri[0].key.m_nVert[1] = nVertCenter;
  newTri[0].elem.m_nOppositeVert = itNewEdge3;
  newTri[0].elem.m_nTri = v17;
  v15 = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Insert(
          &this->m_hePri.m_Tree,
          newTri,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  CMeshEdgeSplitter::AddToSplitLists(this, v15);
  newTri[0].key.m_nVert[0] = nVertCenter;
  newTri[0].key.m_nVert[1] = v13;
  newTri[0].elem.m_nTri = m_nTri;
  newTri[0].elem.m_nOppositeVert = he.m_nVert[0];
  CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Insert(
    &this->m_heSec.m_Tree,
    newTri,
    ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  newTri[0].key.m_nVert[1] = nVertCenter;
  newTri[0].elem.m_nTri = m_nTri;
  newTri[0].elem.m_nOppositeVert = v13;
  newTri[0].key.m_nVert[0] = he.m_nVert[0];
  v16 = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Insert(
          &refMap->m_Tree,
          newTri,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  if ( refMap == this )
  {
    itNewEdge3a = v16;
    CMeshEdgeSplitter::AddToSplitLists(refMap, itNewEdge0);
    CMeshEdgeSplitter::AddToSplitLists(refMap, itNewEdge3a);
  }
}


// CMeshEdgeSplitter::IsBorderVertex  (line 362, @0x00000000031d5850, libserver.so)
// calls: CMeshEdgeSplitter::IsBorderVertex
bool __fastcall CMeshEdgeSplitter::IsBorderVertex(CMeshEdgeSplitter *const this, uint nVertex)
{
  CMeshEdgeSplitter::HalfEdgeMap *p_m_heSec; // r13

  p_m_heSec = &this->m_heSec;
  return CMeshEdgeSplitter::IsBorderVertex(nVertex, &this->m_hePri, &this->m_heSec)
      || CMeshEdgeSplitter::IsBorderVertex(nVertex, p_m_heSec, &this->m_hePri);
}


// CMeshEdgeSplitter::HasBorderEdges  (line 369, @0x00000000031d54d0, libserver.so)  // inlines: Element, Find, FirstInorder, Key, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::Find
bool __fastcall CMeshEdgeSplitter::HasBorderEdges(CMeshEdgeSplitter *const this)
{
  unsigned int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *m_pMemory; // rdx
  __int64 v4; // rax
  unsigned int m_Left; // esi
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *v6; // rax
  unsigned int v7; // edx
  CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(const CMeshEdgeSplitter::HalfEdge_t&,const CMeshEdgeSplitter::HalfEdge_t&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  m_Root = this->m_hePri.m_Tree.m_Root;
  if ( m_Root == -1 )
    return 0;
  m_pMemory = this->m_hePri.m_Tree.m_Elements.m_pMemory;
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
    v6 = &m_pMemory[v4];
    v7 = v6->m_Data.key.m_nVert[0];
    LODWORD(v6) = v6->m_Data.key.m_nVert[1];
    search.key.m_nVert[1] = v7;
    search.key.m_nVert[0] = v6;
    if ( CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Find(
           &this->m_heSec.m_Tree,
           &search) == -1 )
      break;
    m_Root = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::NextInorder(
               &this->m_hePri.m_Tree,
               m_Root);
    if ( m_Root == -1 )
      return 0;
    m_pMemory = this->m_hePri.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
  }
  return 1;
}


// CMeshEdgeSplitter::IsBorderVertex  (line 384, @0x00000000031d5790, libserver.so)  // inlines: Element, Find, Key, operator[]
// calls: CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::Find
// callers: CMeshEdgeSplitter::IsBorderVertex
bool __fastcall CMeshEdgeSplitter::IsBorderVertex(
        uint nVertex,
        const CMeshEdgeSplitter::HalfEdgeMap *const hePri,
        const CMeshEdgeSplitter::HalfEdgeMap *const heSec)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *v8; // rdx
  unsigned int v9; // eax
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *v10; // rcx
  CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(const CMeshEdgeSplitter::HalfEdge_t&,const CMeshEdgeSplitter::HalfEdge_t&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  search.key.m_nVert[0] = nVertex;
  search.key.m_nVert[1] = 0;
  v6 = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Find(
         &hePri->m_Tree,
         &search,
         FindCondition_t::MATCH_OR_GREATER);
  if ( v6 == -1 )
    return 0;
  v7 = v6;
  v8 = &hePri->m_Tree.m_Elements.m_pMemory[v7];
  v9 = v8->m_Data.key.m_nVert[1];
  if ( nVertex != v8->m_Data.key.m_nVert[0] )
    return 0;
  while ( 1 )
  {
    search.key.m_nVert[0] = v9;
    search.key.m_nVert[1] = nVertex;
    if ( CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Find(
           &heSec->m_Tree,
           &search) == -1 )
      break;
    v10 = &hePri->m_Tree.m_Elements.m_pMemory[v7];
    v9 = v10->m_Data.key.m_nVert[1];
    if ( nVertex != v10->m_Data.key.m_nVert[0] )
      return 0;
  }
  return 1;
}


// CMeshEdgeSplitter::FindFirstPrimaryHalfEdgeOfVertex  (line 409, @0x00000000031d58b0, libserver.so)  // inlines: Find
// calls: CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::Find
CMeshEdgeSplitter::HalfEdgeIndex_t __fastcall CMeshEdgeSplitter::FindFirstPrimaryHalfEdgeOfVertex(
        CMeshEdgeSplitter *const this,
        uint nVertex)
{
  CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(const CMeshEdgeSplitter::HalfEdge_t&,const CMeshEdgeSplitter::HalfEdge_t&)>::Node_t search; // [rsp+0h] [rbp-10h] BYREF

  search.key.m_nVert[0] = nVertex;
  search.key.m_nVert[1] = 0;
  return CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Find(
           &this->m_hePri.m_Tree,
           &search,
           FindCondition_t::MATCH_OR_GREATER);
}


// CMeshEdgeSplitter::FindNextPrimaryHalfEdge  (line 415, @0x00000000031d5590, libserver.so)  // inlines: NextInorder
// calls: CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::NextInorder
CMeshEdgeSplitter::HalfEdgeIndex_t __fastcall CMeshEdgeSplitter::FindNextPrimaryHalfEdge(
        CMeshEdgeSplitter *const this,
        CMeshEdgeSplitter::HalfEdgeIndex_t hei)
{
  return CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::NextInorder(
           &this->m_hePri.m_Tree,
           hei);
}


// CMeshEdgeSplitter::GetInvalidPrimaryHalfEdge  (line 421, @0x00000000031d5140, libserver.so)
CMeshEdgeSplitter::HalfEdgeIndex_t __fastcall CMeshEdgeSplitter::GetInvalidPrimaryHalfEdge(
        CMeshEdgeSplitter *const this)
{
  return -1;
}


// CMeshEdgeSplitter::GetMinPrimaryHalfEdgeAngle  (line 428, @0x00000000031d5640, libserver.so)
// calls: CMeshEdgeSplitter::GetMinHalfEdgeAngle
// callers: CMesh::IsConvex
float __fastcall CMeshEdgeSplitter::GetMinPrimaryHalfEdgeAngle(
        CMeshEdgeSplitter *const this,
        float a2,
        float flAngleOfBorderEdge)
{
  return CMeshEdgeSplitter::GetMinHalfEdgeAngle(this, &this->m_hePri, &this->m_heSec, a2);
}


// CMeshEdgeSplitter::GetMinSecondaryHalfEdgeAngle  (line 433, @0x00000000031d5660, libserver.so)
// calls: CMeshEdgeSplitter::GetMinHalfEdgeAngle
float __fastcall CMeshEdgeSplitter::GetMinSecondaryHalfEdgeAngle(
        CMeshEdgeSplitter *const this,
        float a2,
        float flAngleOfBorderEdge)
{
  return CMeshEdgeSplitter::GetMinHalfEdgeAngle(this, &this->m_heSec, &this->m_hePri, a2);
}


// CMeshEdgeSplitter::GetMinHalfEdgeAngle  (line 438, @0x00000000031d55a0, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, operator[]
// calls: CMeshEdgeSplitter::GetHalfEdgeAngle, CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::NextInorder
// callers: CMeshEdgeSplitter::GetMinPrimaryHalfEdgeAngle, CMeshEdgeSplitter::GetMinSecondaryHalfEdgeAngle
float __fastcall CMeshEdgeSplitter::GetMinHalfEdgeAngle(
        CMeshEdgeSplitter *const this,
        const CMeshEdgeSplitter::HalfEdgeMap *const hePri,
        const CMeshEdgeSplitter::HalfEdgeMap *const heSec,
        float flAngleOfBorderEdge)
{
  CMeshEdgeSplitter::HalfEdgeIndex_t m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *m_pMemory; // rcx
  CMeshEdgeSplitter::HalfEdgeIndex_t m_Left; // edx

  m_Root = hePri->m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = hePri->m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( m_pMemory[m_Left].m_Left != -1 )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    do
    {
      CMeshEdgeSplitter::GetHalfEdgeAngle(this, hePri, heSec, m_Root, flAngleOfBorderEdge);
      m_Root = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::NextInorder(
                 &hePri->m_Tree,
                 m_Root);
    }
    while ( m_Root != -1 );
  }
  return 6.2831855;
}


// CMeshEdgeSplitter::GetPrimaryHalfEdgeAngle  (line 451, @0x00000000031d5420, libserver.so)
// calls: CMeshEdgeSplitter::GetHalfEdgeAngle
float __fastcall CMeshEdgeSplitter::GetPrimaryHalfEdgeAngle(
        CMeshEdgeSplitter *const this,
        CMeshEdgeSplitter::HalfEdgeIndex_t it,
        float a3,
        float flAngleOfBorderEdge)
{
  return CMeshEdgeSplitter::GetHalfEdgeAngle(this, &this->m_hePri, &this->m_heSec, it, a3);
}


// CMeshEdgeSplitter::GetSecondaryHalfEdgeAngle  (line 457, @0x00000000031d5440, libserver.so)
// calls: CMeshEdgeSplitter::GetHalfEdgeAngle
float __fastcall CMeshEdgeSplitter::GetSecondaryHalfEdgeAngle(
        CMeshEdgeSplitter *const this,
        CMeshEdgeSplitter::HalfEdgeIndex_t it,
        float a3,
        float flAngleOfBorderEdge)
{
  return CMeshEdgeSplitter::GetHalfEdgeAngle(this, &this->m_heSec, &this->m_hePri, it, a3);
}


// CMeshEdgeSplitter::GetHalfEdgeAngle  (line 463, @0x00000000031d5190, libserver.so)  // inlines: CrossProduct, DotProduct, Element, FastSqrt, Find, GetVert, Key, Length, Sign, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator[]
// calls: CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::Find, atan2f
// callers: CMeshEdgeSplitter::GetPrimaryHalfEdgeAngle, CMeshEdgeSplitter::GetSecondaryHalfEdgeAngle, CMeshEdgeSplitter::GetMinHalfEdgeAngle
float __fastcall CMeshEdgeSplitter::GetHalfEdgeAngle(
        CMeshEdgeSplitter *const this,
        const CMeshEdgeSplitter::HalfEdgeMap *const hePri,
        const CMeshEdgeSplitter::HalfEdgeMap *const heSec,
        CMeshEdgeSplitter::HalfEdgeIndex_t it,
        float flReturnIfBorderEdge)
{
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *v7; // rcx
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  uint m_nOppositeVert; // r14d
  unsigned int v11; // eax
  CMesh *m_pMesh; // rdx
  uint v13; // esi
  float *m_pVerts; // rax
  float *v15; // rcx
  float v16; // xmm6_4
  float v17; // xmm1_4
  float v18; // xmm5_4
  float *v19; // rcx
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float *v23; // rcx
  float *v24; // rax
  float v25; // xmm11_4
  float v26; // xmm7_4
  float v27; // xmm2_4
  float v28; // xmm9_4
  float v29; // xmm0_4
  float v30; // xmm10_4
  float v31; // xmm1_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm8_4
  float v36; // xmm6_4
  float v37; // xmm9_4
  float v38; // xmm5_4
  float v39; // xmm7_4
  float v40; // xmm1_4
  float v41; // xmm10_4
  float v42; // xmm11_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm3_4
  float v47; // xmm0_4
  __m128 v48; // xmm2
  __m128 v49; // xmm3
  __int32 v50; // [rsp+4h] [rbp-4Ch]
  CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(const CMeshEdgeSplitter::HalfEdge_t&,const CMeshEdgeSplitter::HalfEdge_t&)>::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  v7 = &hePri->m_Tree.m_Elements.m_pMemory[it];
  v8 = v7->m_Data.key.m_nVert[0];
  v9 = v7->m_Data.key.m_nVert[1];
  m_nOppositeVert = v7->m_Data.elem.m_nOppositeVert;
  search.key.m_nVert[1] = v8;
  search.key.m_nVert[0] = v9;
  v11 = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Find(
          &heSec->m_Tree,
          &search);
  if ( v11 == -1 )
    return flReturnIfBorderEdge;
  m_pMesh = this->m_pMesh;
  v13 = heSec->m_Tree.m_Elements.m_pMemory[v11].m_Data.elem.m_nOppositeVert;
  m_pVerts = m_pMesh->m_pVerts;
  LODWORD(m_pMesh) = m_pMesh->m_nVertexStrideFloats;
  v15 = &m_pVerts[m_pMesh * v8];
  v16 = *v15;
  v17 = v15[1];
  v18 = v15[2];
  v19 = &m_pVerts[m_pMesh * v9];
  v20 = *v19;
  v21 = v19[1];
  v22 = v19[2];
  v23 = &m_pVerts[m_pMesh * m_nOppositeVert];
  v24 = &m_pVerts[v13 * m_pMesh];
  if ( v13 == m_nOppositeVert )
    return flReturnIfBorderEdge;
  v25 = *v23 - v16;
  v26 = v23[2] - v18;
  v27 = v16 - v20;
  v28 = v23[1] - v17;
  v29 = v17 - v21;
  v30 = v16 - *v24;
  v31 = v17 - v24[1];
  v32 = v29;
  v33 = v18 - v22;
  v34 = v18 - v24[2];
  v35 = (v27 * v26) - (v25 * v33);
  v36 = (v32 * v25) - (v27 * v28);
  v37 = (v28 * v33) - (v26 * v32);
  v38 = (v32 * v30) - (v27 * v31);
  v39 = (v27 * v34) - (v30 * v33);
  v40 = (v31 * v33) - (v34 * v32);
  v41 = (v35 * v40) - (v37 * v39);
  v42 = (v37 * v38) - (v36 * v40);
  v43 = (v36 * v39) - (v35 * v38);
  v44 = ((v27 * v43) + (v32 * v42)) + (v33 * v41);
  v45 = 0.0;
  if ( fabs(v44) >= 1.0e-12 )
  {
    v50 = LODWORD(v44);
    v47 = atan2f(fsqrt(((v43 * v43) + (v42 * v42)) + (v41 * v41)), ((v40 * v37) + (v39 * v35)) + (v38 * v36));
    v48.m128_i32[0] = v50;
    v49 = _mm_cmple_ss(0, v48);
    return COERCE_FLOAT(_mm_andnot_ps(v49, 0xBF800000).m128_u32[0] | v49.m128_i32[0] & 0x3F800000) * v47;
  }
  return v45;
}


// CMeshEdgeSplitter::FindHalfEdge  (line 501, @0x00000000031d5680, libserver.so)  // inlines: Element, Find, Key, NextInorder, operator!=, operator[]
// calls: CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::Find, CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::NextInorder
// callers: CMeshEdgeSplitter::ReplaceHalfEdgeTri
CMeshEdgeSplitter::HalfEdgeIndex_t __fastcall CMeshEdgeSplitter::FindHalfEdge(
        CMeshEdgeSplitter *const this,
        const CMeshEdgeSplitter::HalfEdgeMap *const heMap,
        const CMeshEdgeSplitter::HalfEdge_t he,
        uint nTri)
{
  CMeshEdgeSplitter::HalfEdgeIndex_t result; // eax
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *m_pMemory; // r12
  unsigned int v9; // r14d
  unsigned __int64 v10; // r15
  UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int>::Node_t,unsigned int> *v11; // rdx
  CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(const CMeshEdgeSplitter::HalfEdge_t&,const CMeshEdgeSplitter::HalfEdge_t&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  search.key = he;
  result = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Find(
             &heMap->m_Tree,
             &search);
  if ( result != -1 )
  {
    m_pMemory = heMap->m_Tree.m_Elements.m_pMemory;
    if ( m_pMemory[result].m_Data.elem.m_nTri != nTri )
    {
      v9 = he.m_nVert[0];
      v10 = HIDWORD(*&he);
      while ( 1 )
      {
        result = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::NextInorder(
                   &heMap->m_Tree,
                   result);
        v11 = &m_pMemory[result];
        if ( v9 != v11->m_Data.key.m_nVert[0] || v11->m_Data.key.m_nVert[1] != v10 )
          break;
        if ( result == -1 || v11->m_Data.elem.m_nTri == nTri )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CMeshEdgeSplitter::ReplaceHalfEdgeTri  (line 519, @0x00000000031d5710, libserver.so)  // inlines: Element, operator[]
// calls: CMeshEdgeSplitter::FindHalfEdge
// callers: CMeshEdgeSplitter::SplitEdge
void __fastcall CMeshEdgeSplitter::ReplaceHalfEdgeTri(
        CMeshEdgeSplitter *const this,
        const CMeshEdgeSplitter::HalfEdge_t he,
        uint nWasTri,
        const CMeshEdgeSplitter::HalfEdgeData_t *const newTri)
{
  CMeshEdgeSplitter::HalfEdgeIndex_t HalfEdge; // eax
  CMeshEdgeSplitter::HalfEdgeIndex_t v9; // eax

  HalfEdge = CMeshEdgeSplitter::FindHalfEdge(this, &this->m_hePri, he, nWasTri);
  if ( HalfEdge == -1 )
  {
    v9 = CMeshEdgeSplitter::FindHalfEdge(this, &this->m_heSec, he, nWasTri);
    if ( v9 != -1 )
      this->m_heSec.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem = *newTri;
  }
  else
  {
    this->m_hePri.m_Tree.m_Elements.m_pMemory[HalfEdge].m_Data.elem = *newTri;
  }
}


// CMeshEdgeSplitter::GetOppositeVertIt  (line 541, @0x00000000031d5150, libserver.so)
int __fastcall CMeshEdgeSplitter::GetOppositeVertIt(
        CMeshEdgeSplitter *const this,
        const CMeshEdgeSplitter::HalfEdge_t he,
        const uint32 *pTri)
{
  int result; // eax

  result = 2;
  if ( *pTri != he.m_nVert[0] )
  {
    if ( pTri[1] == he.m_nVert[0] )
      return 0;
    else
      return 2 * (pTri[2] == he.m_nVert[0]) - 1;
  }
  return result;
}


// CMeshEdgeSplitter::GetTri  (line 565, @0x00000000031d5460, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int, CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int>, unsigned int> >::Find
int __fastcall CMeshEdgeSplitter::GetTri(CMeshEdgeSplitter *const this, const CMeshEdgeSplitter::HalfEdge_t he)
{
  unsigned int v4; // eax
  int result; // eax
  CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(const CMeshEdgeSplitter::HalfEdge_t&,const CMeshEdgeSplitter::HalfEdge_t&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  search.key = he;
  v4 = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Find(
         &this->m_hePri.m_Tree,
         &search);
  if ( v4 != -1 )
    return this->m_hePri.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem.m_nTri;
  search.key = he;
  result = CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int,CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t,CMeshEdgeSplitter::HalfEdgeData_t,unsigned int,bool (*)(CMeshEdgeSplitter::HalfEdge_t const&,CMeshEdgeSplitter::HalfEdge_t const&)>::Node_t,unsigned int>,unsigned int>>::Find(
             &this->m_heSec.m_Tree,
             &search);
  if ( result != -1 )
    return this->m_heSec.m_Tree.m_Elements.m_pMemory[result].m_Data.elem.m_nTri;
  return result;
}


// CMeshEdgeSplitter::Validate  (line 589, @0x00000000031d5180, libserver.so)
void __fastcall CMeshEdgeSplitter::Validate(CMeshEdgeSplitter *const this)
{
  ;
}


