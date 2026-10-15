// Reconstructed from DWARF by pahole; not original source.

// src/meshutils/meshdisjointsetpartition.cpp:131
struct VertAndBone_t {
	int nVert;  // +0x0
	int nBone;  // +0x4
	int Compare(const VertAndBone_t *);

	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_meshdisjointsetpartition.cpp  (line 0, @0x0000000001a6d410, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_meshdisjointsetpartition_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CMeshDisjointSetPartition::CMeshDisjointSetPartition  (line 14, @0x00000000031d4330, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMeshDisjointSetPartition::PartitionByConnectivity, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlMemory<CMeshDisjointSetPartition::Part_t, int>::Purge
// callers: ConvexHull3D
void __fastcall CMeshDisjointSetPartition::CMeshDisjointSetPartition(
        CMeshDisjointSetPartition *const this,
        const CMesh *const mesh)
{
  this->m_Parts.m_Size = 0;
  this->m_Parts.m_Memory.m_pMemory = 0;
  this->m_Parts.m_Memory.m_nAllocationCount = 0;
  this->m_Parts.m_Memory.m_nGrowSize = 0;
  this->m_Indices.m_Size = 0;
  this->m_Indices.m_Memory.m_pMemory = 0;
  this->m_Indices.m_Memory.m_nAllocationCount = 0;
  this->m_Indices.m_Memory.m_nGrowSize = 0;
  CMeshDisjointSetPartition::PartitionByConnectivity(this, mesh);
}


// CMeshDisjointSetPartition::PartitionSinglePiece  (line 21, @0x00000000031d3b80, libserver.so)
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<CMeshDisjointSetPartition::Part_t, CUtlMemory<CMeshDisjointSetPartition::Part_t, int> >::SetCount
bool __fastcall CMeshDisjointSetPartition::PartitionSinglePiece(
        CMeshDisjointSetPartition *const this,
        const CMesh *const mesh)
{
  __int64 v4; // rdx
  int i; // eax

  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&this->m_Indices, mesh->m_nVertexCount);
  v4 = 0;
  for ( i = 0; mesh->m_nVertexCount > i; ++v4 )
    this->m_Indices.m_Memory.m_pMemory[v4] = i++;
  CUtlVectorBase<CMeshDisjointSetPartition::Part_t,CUtlMemory<CMeshDisjointSetPartition::Part_t,int>>::SetCount(
    &this->m_Parts,
    1);
  this->m_Parts.m_Memory.m_pMemory->m_nVertexBegin = 0;
  this->m_Parts.m_Memory.m_pMemory->m_nVertexCount = this->m_Indices.m_Size;
  return 1;
}


// CMeshDisjointSetPartition::PartitionByConnectivity  (line 44, @0x00000000031d3cd0, libserver.so)  // inlines: AddToTail, CDisjointSetForest, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, FillWithValue, Find, GrowMemory, Purge, RemoveAll, Union, operator[], ~CDisjointSetForest, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::SetCount, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<CMeshDisjointSetPartition::Part_t, CUtlMemory<CMeshDisjointSetPartition::Part_t, int> >::SetCount, CUtlMemory<int, int>::Grow, CUtlMemory<int, int>::Purge, CUtlMemory<CDisjointSetForest::Node_t, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CMeshDisjointSetPartition::CMeshDisjointSetPartition
bool __fastcall CMeshDisjointSetPartition::PartitionByConnectivity(
        CMeshDisjointSetPartition *const this,
        const CMesh *const mesh)
{
  int m_nVertexCount; // ebx
  __int64 i; // rax
  __int64 v6; // r10
  int v7; // r11d
  uint32 *m_pIndices; // rax
  int v9; // r9d
  signed int v10; // r8d
  uint32 v11; // edi
  CDisjointSetForest::Node_t *m_pMemory; // rax
  int j; // ecx
  int nParent; // edx
  CDisjointSetForest::Node_t *v15; // rcx
  int v16; // esi
  int k; // esi
  int v18; // ecx
  __int64 v19; // r9
  CDisjointSetForest::Node_t *v20; // rsi
  int v21; // r12d
  CDisjointSetForest::Node_t *v22; // rsi
  __int64 v23; // r12
  CDisjointSetForest::Node_t *v24; // rdx
  int m; // esi
  int v26; // ecx
  CDisjointSetForest::Node_t *v27; // rax
  int v28; // esi
  int n; // esi
  int v30; // eax
  CDisjointSetForest::Node_t *v31; // rsi
  int v32; // r8d
  CDisjointSetForest::Node_t *v33; // rdi
  CDisjointSetForest::Node_t *v34; // rdx
  int v35; // esi
  __int64 v36; // rdx
  int ii; // eax
  int v38; // r8d
  __int64 v39; // r12
  int v40; // ebx
  int v41; // esi
  int jj; // edx
  __int64 v43; // rax
  CDisjointSetForest::Node_t *v44; // rdx
  int v45; // ecx
  int *v46; // rdx
  __int64 v47; // rax
  int *v48; // rsi
  __int64 v49; // rax
  int v50; // ecx
  int v51; // edx
  __int64 v52; // r8
  int kk; // edi
  int mm; // edx
  __int64 v55; // rax
  CDisjointSetForest::Node_t *v56; // rdx
  int v57; // ecx
  __int64 v58; // rdx
  int *v59; // rcx
  int v60; // eax
  __int64 m_Size; // r15
  int v63; // eax
  int *v64; // rax
  CDisjointSetForest forest; // [rsp+30h] [rbp-90h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > mapVertToPart; // [rsp+50h] [rbp-70h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > arrPart; // [rsp+70h] [rbp-50h] BYREF

  forest.m_Nodes.m_Memory.m_nAllocationCount = 0;
  m_nVertexCount = mesh->m_nVertexCount;
  forest.m_Nodes.m_Size = 0;
  forest.m_Nodes.m_Memory.m_pMemory = 0;
  forest.m_Nodes.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<CDisjointSetForest::Node_t,CUtlMemory<CDisjointSetForest::Node_t,int>>::SetCount(
    &forest.m_Nodes,
    m_nVertexCount);
  for ( i = 0; m_nVertexCount > i; ++i )
  {
    forest.m_Nodes.m_Memory.m_pMemory[i].nRank = 0;
    forest.m_Nodes.m_Memory.m_pMemory[i].nParent = i;
  }
  v6 = 0;
  v7 = 0;
  if ( mesh->m_nIndexCount > 2 )
  {
    do
    {
      m_pIndices = mesh->m_pIndices;
      v9 = m_pIndices[v6];
      v10 = m_pIndices[v6 + 1];
      v11 = m_pIndices[v6 + 2];
      m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
      for ( j = v9; ; j = forest.m_Nodes.m_Memory.m_pMemory[j].nParent )
      {
        nParent = forest.m_Nodes.m_Memory.m_pMemory[j].nParent;
        if ( j == nParent )
          break;
      }
      v15 = &forest.m_Nodes.m_Memory.m_pMemory[v9];
      v16 = v15->nParent;
      if ( v9 != v16 )
      {
        while ( 1 )
        {
          v15->nParent = nParent;
          m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
          v15 = &forest.m_Nodes.m_Memory.m_pMemory[v16];
          if ( v15->nParent == v16 )
            break;
          v16 = v15->nParent;
        }
      }
      for ( k = v10; ; k = m_pMemory[k].nParent )
      {
        v18 = m_pMemory[k].nParent;
        if ( k == v18 )
          break;
      }
      v19 = v10;
      v20 = &m_pMemory[v19];
      v21 = m_pMemory[v19].nParent;
      if ( v10 != v21 )
      {
        while ( 1 )
        {
          v20->nParent = v18;
          m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
          v20 = &forest.m_Nodes.m_Memory.m_pMemory[v21];
          if ( v20->nParent == v21 )
            break;
          v21 = v20->nParent;
        }
      }
      v22 = &m_pMemory[v18];
      v23 = nParent;
      if ( m_pMemory[v23].nRank > v22->nRank )
      {
        v22->nParent = nParent;
        m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
      }
      else if ( m_pMemory[nParent].nRank < v22->nRank )
      {
        m_pMemory[v23].nParent = v18;
        m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
      }
      else if ( nParent != v18 )
      {
        v22->nParent = nParent;
        ++forest.m_Nodes.m_Memory.m_pMemory[nParent].nRank;
        m_pMemory = forest.m_Nodes.m_Memory.m_pMemory;
      }
      v24 = m_pMemory;
      for ( m = v10; ; m = m_pMemory[m].nParent )
      {
        v26 = m_pMemory[m].nParent;
        if ( m == v26 )
          break;
      }
      v27 = &m_pMemory[v19];
      v28 = v27->nParent;
      if ( v10 != v28 )
      {
        while ( 1 )
        {
          v27->nParent = v26;
          v24 = forest.m_Nodes.m_Memory.m_pMemory;
          v27 = &forest.m_Nodes.m_Memory.m_pMemory[v28];
          if ( v27->nParent == v28 )
            break;
          v28 = v27->nParent;
        }
      }
      for ( n = v11; ; n = v24[n].nParent )
      {
        v30 = v24[n].nParent;
        if ( n == v30 )
          break;
      }
      v31 = &v24[v11];
      v32 = v31->nParent;
      if ( v11 != v32 )
      {
        while ( 1 )
        {
          v31->nParent = v30;
          v24 = forest.m_Nodes.m_Memory.m_pMemory;
          v31 = &forest.m_Nodes.m_Memory.m_pMemory[v32];
          if ( v31->nParent == v32 )
            break;
          v32 = v31->nParent;
        }
      }
      v33 = &v24[v26];
      v34 = &v24[v30];
      if ( v33->nRank > v34->nRank )
      {
        v34->nParent = v26;
      }
      else if ( v33->nRank < v34->nRank )
      {
        v33->nParent = v30;
      }
      else if ( v26 != v30 )
      {
        v34->nParent = v26;
        ++forest.m_Nodes.m_Memory.m_pMemory[v26].nRank;
      }
      ++v7;
      v6 += 3;
    }
    while ( mesh->m_nIndexCount / 3 > v7 );
  }
  v35 = mesh->m_nVertexCount;
  mapVertToPart.m_Size = 0;
  mapVertToPart.m_Memory.m_pMemory = 0;
  mapVertToPart.m_Memory.m_nAllocationCount = 0;
  mapVertToPart.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&mapVertToPart, v35);
  v36 = 0;
  for ( ii = 0; ii < mapVertToPart.m_Size; ++v36 )
  {
    ++ii;
    mapVertToPart.m_Memory.m_pMemory[v36] = -1;
  }
  v38 = mesh->m_nVertexCount;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  arrPart.m_Size = 0;
  arrPart.m_Memory.m_pMemory = 0;
  arrPart.m_Memory.m_nAllocationCount = 0;
  arrPart.m_Memory.m_nGrowSize = 0;
  if ( v38 > 0 )
  {
    do
    {
      for ( jj = v40; ; jj = forest.m_Nodes.m_Memory.m_pMemory[jj].nParent )
      {
        v43 = forest.m_Nodes.m_Memory.m_pMemory[jj].nParent;
        if ( jj == v43 )
          break;
      }
      v44 = &forest.m_Nodes.m_Memory.m_pMemory[v39];
      v45 = forest.m_Nodes.m_Memory.m_pMemory[v39].nParent;
      if ( v45 != v40 )
      {
        while ( 1 )
        {
          v44->nParent = v43;
          v44 = &forest.m_Nodes.m_Memory.m_pMemory[v45];
          if ( v45 == v44->nParent )
            break;
          v45 = v44->nParent;
        }
      }
      v46 = &mapVertToPart.m_Memory.m_pMemory[v43];
      v47 = *v46;
      if ( v47 < 0 )
      {
        *v46 = arrPart.m_Size;
        m_Size = arrPart.m_Size;
        v63 = arrPart.m_Size;
        if ( arrPart.m_Size == arrPart.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&arrPart.m_Memory, 1);
          v63 = arrPart.m_Size;
        }
        arrPart.m_Size = v63 + 1;
        v64 = &arrPart.m_Memory.m_pMemory[m_Size];
        if ( v64 != 0 )
          *v64 = 1;
      }
      else
      {
        ++arrPart.m_Memory.m_pMemory[v47];
      }
      ++v40;
      ++v39;
    }
    while ( mesh->m_nVertexCount > v40 );
    v41 = arrPart.m_Size;
  }
  CUtlVectorBase<CMeshDisjointSetPartition::Part_t,CUtlMemory<CMeshDisjointSetPartition::Part_t,int>>::SetCount(
    &this->m_Parts,
    v41);
  if ( arrPart.m_Size > 0 )
  {
    v48 = arrPart.m_Memory.m_pMemory;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    do
    {
      ++v50;
      this->m_Parts.m_Memory.m_pMemory[v49].m_nVertexCount = v48[v49];
      this->m_Parts.m_Memory.m_pMemory[v49].m_nVertexBegin = v51;
      v48 = arrPart.m_Memory.m_pMemory;
      v51 += arrPart.m_Memory.m_pMemory[v49++];
    }
    while ( arrPart.m_Size > v50 );
  }
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&this->m_Indices, mesh->m_nVertexCount);
  v52 = 0;
  for ( kk = 0; mesh->m_nVertexCount > kk; ++kk )
  {
    for ( mm = kk; ; mm = forest.m_Nodes.m_Memory.m_pMemory[mm].nParent )
    {
      v55 = forest.m_Nodes.m_Memory.m_pMemory[mm].nParent;
      if ( mm == v55 )
        break;
    }
    v56 = &forest.m_Nodes.m_Memory.m_pMemory[v52];
    v57 = forest.m_Nodes.m_Memory.m_pMemory[v52].nParent;
    if ( v57 != kk )
    {
      while ( 1 )
      {
        v56->nParent = v55;
        v56 = &forest.m_Nodes.m_Memory.m_pMemory[v57];
        if ( v57 == v56->nParent )
          break;
        v57 = v56->nParent;
      }
    }
    ++v52;
    v58 = mapVertToPart.m_Memory.m_pMemory[v55];
    v59 = &arrPart.m_Memory.m_pMemory[v58];
    v60 = this->m_Parts.m_Memory.m_pMemory[v58].m_nVertexCount
        + this->m_Parts.m_Memory.m_pMemory[v58].m_nVertexBegin
        - (*v59)--;
    this->m_Indices.m_Memory.m_pMemory[v60] = kk;
  }
  arrPart.m_Size = 0;
  if ( (arrPart.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<int,int>::Purge(&arrPart.m_Memory), (arrPart.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    mapVertToPart.m_Size = 0;
    if ( (mapVertToPart.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_69;
  }
  else
  {
    CUtlMemory<int,int>::Purge(&arrPart.m_Memory);
    mapVertToPart.m_Size = 0;
    if ( (mapVertToPart.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_69;
  }
  CUtlMemory<int,int>::Purge(&mapVertToPart.m_Memory);
  if ( (mapVertToPart.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<int,int>::Purge(&mapVertToPart.m_Memory);
LABEL_69:
  forest.m_Nodes.m_Size = 0;
  if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&forest.m_Nodes.m_Memory);
    if ( (forest.m_Nodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDisjointSetForest::Node_t,int>::Purge(&forest.m_Nodes.m_Memory);
  }
  return 1;
}


// VertAndBone_t::Compare  (line 135, @0x00000000031d4b90, libserver.so)
int __fastcall VertAndBone_t::Compare(const VertAndBone_t *pLeft, const VertAndBone_t *pRight)
{
  return pLeft->nBone - pRight->nBone;
}


// CMeshDisjointSetPartition::PartitionByJoints  (line 142, @0x00000000031d43d0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Compare, Element, GetVertex, GrowMemory, Purge, RemoveAll, Sort, Tail, V_swap<VertAndBone_t>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMeshDisjointSetPartition::Purge, CMesh::GetSkinningDataFields, CUtlVectorBase<VertAndBone_t, CUtlMemory<VertAndBone_t, int> >::SetCount, V_qsort, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlMemory<CMeshDisjointSetPartition::Part_t, int>::Grow, CUtlMemory<VertAndBone_t, int>::Purge, _Unwind_Resume
// callers: ConvexHull3D
// globals: VertAndBone_t::Compare(VertAndBone_t const*,VertAndBone_t const*)
bool __fastcall CMeshDisjointSetPartition::PartitionByJoints(
        CMeshDisjointSetPartition *const this,
        const CMesh *const mesh)
{
  int v4; // r13d
  __int64 v5; // rbx
  int m_nVertexCount; // esi
  CMeshVertexAttribute *m_pAttributes; // rax
  __int64 m_nOffsetFloats; // rcx
  CMeshVertexAttribute *v9; // rax
  int m_nSizeFloats; // r10d
  __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // r11
  float *v14; // rdx
  float *v15; // rdi
  float v16; // esi
  float *v17; // rdx
  unsigned __int64 v18; // rax
  float v19; // xmm1_4
  __int64 v20; // rax
  VertAndBone_t *v21; // rax
  VertAndBone_t *m_pMemory; // rdi
  unsigned __int64 v23; // rbx
  int i; // r13d
  __int64 m_Size; // rax
  CMeshDisjointSetPartition::Part_t *v26; // rax
  __int64 v27; // r15
  int v29; // eax
  unsigned int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  VertAndBone_t *v34; // rdx
  int nBone; // esi
  char *v36; // rcx
  int nVert; // edi
  int nCurrentBone; // [rsp+1Ch] [rbp-54h]
  CUtlVector<VertAndBone_t,CUtlMemory<VertAndBone_t,int> > verts; // [rsp+20h] [rbp-50h] BYREF
  __int64 SkinningDataFields; // 0:rax.8

  CMeshDisjointSetPartition::Purge(this);
  SkinningDataFields = CMesh::GetSkinningDataFields(mesh);
  v4 = SkinningDataFields;
  v5 = SkinningDataFields >> 32;
  if ( SkinningDataFields < 0 )
    return 0;
  m_nVertexCount = mesh->m_nVertexCount;
  if ( m_nVertexCount <= 0 )
    return 0;
  verts.m_Size = 0;
  verts.m_Memory.m_pMemory = 0;
  verts.m_Memory.m_nAllocationCount = 0;
  verts.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<VertAndBone_t,CUtlMemory<VertAndBone_t,int>>::SetCount(&verts, m_nVertexCount);
  m_pAttributes = mesh->m_pAttributes;
  m_nOffsetFloats = m_pAttributes[v4].m_nOffsetFloats;
  v9 = &m_pAttributes[v5];
  m_nSizeFloats = v9->m_nSizeFloats;
  if ( mesh->m_nVertexCount > 0 )
  {
    v11 = 0;
    v12 = 0;
    v13 = v9->m_nOffsetFloats;
    do
    {
      v14 = &mesh->m_pVerts[v12 * mesh->m_nVertexStrideFloats];
      v15 = &v14[v13];
      v16 = v14[v13];
      if ( m_nSizeFloats > 1 )
      {
        v17 = &v14[m_nOffsetFloats];
        v18 = 0;
        v19 = *v17;
        do
        {
          if ( v17[v18 / 4 + 1] > v19 )
          {
            v16 = v15[v18 / 4 + 1];
            v19 = v17[v18 / 4 + 1];
          }
          v18 += 4LL;
        }
        while ( v18 != 4LL * (m_nSizeFloats - 2) + 4 );
      }
      v20 = v11;
      v11 += 8;
      v21 = (verts.m_Memory.m_pMemory + v20);
      v21->nVert = v12++;
      *&v21->nBone = v16;
    }
    while ( mesh->m_nVertexCount > v12 );
  }
  if ( verts.m_Size > 1 )
  {
    m_pMemory = verts.m_Memory.m_pMemory;
    if ( verts.m_Memory.m_pMemory == 0 )
    {
      v29 = verts.m_Size - 1;
      do
      {
        v30 = v29 - 1;
        if ( v29 > 0 )
        {
          v31 = 0;
          v32 = 8LL * v30 + 8;
          while ( 1 )
          {
            v33 = v31 + 8;
            v34 = (m_pMemory + v31);
            nBone = v34->nBone;
            v36 = m_pMemory + v33;
            if ( nBone - *(&m_pMemory->nBone + v33) >= 0 )
            {
              if ( v33 == v32 )
                break;
            }
            else
            {
              nVert = v34->nVert;
              *v34 = *v36;
              *v36 = nVert;
              *(v36 + 1) = nBone;
              m_pMemory = verts.m_Memory.m_pMemory;
              if ( v33 == v32 )
                break;
            }
            v31 = v33;
          }
        }
        v29 = v30;
      }
      while ( v30 != -1 );
      goto LABEL_15;
    }
    V_qsort(verts.m_Memory.m_pMemory, verts.m_Size, 8, VertAndBone_t::Compare);
  }
  m_pMemory = verts.m_Memory.m_pMemory;
LABEL_15:
  nCurrentBone = m_pMemory->nBone - 1;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&this->m_Indices, mesh->m_nVertexCount);
  v23 = 0;
  for ( i = 0; mesh->m_nVertexCount > i; nCurrentBone = *(&verts.m_Memory.m_pMemory->nBone + v27) )
  {
    while ( 1 )
    {
      v27 = 2 * v23;
      this->m_Indices.m_Memory.m_pMemory[v23 / 4] = verts.m_Memory.m_pMemory[v23 / 4].nVert;
      if ( nCurrentBone != verts.m_Memory.m_pMemory[v23 / 4].nBone )
        break;
      ++i;
      v23 += 4LL;
      ++this->m_Parts.m_Memory.m_pMemory[this->m_Parts.m_Size - 1].m_nVertexCount;
      if ( mesh->m_nVertexCount <= i )
        goto LABEL_22;
    }
    m_Size = this->m_Parts.m_Size;
    if ( m_Size == this->m_Parts.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CMeshDisjointSetPartition::Part_t,int>::Grow(&this->m_Parts.m_Memory, 1);
      m_Size = this->m_Parts.m_Size;
    }
    v23 += 4LL;
    this->m_Parts.m_Size = m_Size + 1;
    v26 = &this->m_Parts.m_Memory.m_pMemory[m_Size];
    v26->m_nVertexBegin = i++;
    v26->m_nVertexCount = 1;
  }
LABEL_22:
  verts.m_Size = 0;
  if ( (verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<VertAndBone_t,int>::Purge(&verts.m_Memory);
    if ( (verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<VertAndBone_t,int>::Purge(&verts.m_Memory);
  }
  return 1;
}


// CMeshDisjointSetPartition::Purge  (line 206, @0x00000000031d39f0, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<int, int>::Purge, CUtlMemory<CMeshDisjointSetPartition::Part_t, int>::Purge
// callers: CMeshDisjointSetPartition::PartitionByJoints
void __fastcall CMeshDisjointSetPartition::Purge(CMeshDisjointSetPartition *const this)
{
  bool v2; // zf

  this->m_Parts.m_Size = 0;
  if ( (this->m_Parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CMeshDisjointSetPartition::Part_t,int>::Purge(&this->m_Parts.m_Memory);
  v2 = (this->m_Indices.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Indices.m_Size = 0;
  if ( v2 )
    CUtlMemory<int,int>::Purge(&this->m_Indices.m_Memory);
}


// CMeshDisjointSetPartition::Validate  (line 213, @0x00000000031d3a50, libserver.so)
void __fastcall CMeshDisjointSetPartition::Validate(CMeshDisjointSetPartition *const this, const CMesh *const mesh)
{
  ;
}


// CMeshPartition::Init  (line 285, @0x00000000031d4710, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, CrossProduct, Element, EnsureCapacity, FillWithValue, GetVertex, GetVertexCount, GetVertexPosition, GrowMemory, IsFinite, LengthSqr, Purge, RemoveAll, TriangleCount, VectorSubtract, memcpy, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::SetCount, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, Warning, memcpy, CUtlMemory<int, int>::Grow, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Found %d (out of %d) zero-area triangles\n"
void __fastcall CMeshPartition::Init(
        CMeshPartition *const this,
        CMesh *pMesh,
        CMeshDisjointSetPartition *pConnectivity)
{
  int m_nVertexCount; // esi
  __int64 v7; // rdx
  int i; // eax
  __int64 v9; // r12
  int j; // r13d
  int v11; // r14d
  uint32 m_nGrowSize; // eax
  int *m_pMemory; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r14d
  __int64 v19; // rax
  int *v20; // r8
  Vector *v21; // rdx
  float *m_pVerts; // r10
  int m_nVertexStrideFloats; // r9d
  uint32 *v24; // rdi
  __int64 v25; // rsi
  vec_t *v26; // rcx
  vec_t v27; // xmm0_4
  __m128i y_low; // xmm0
  CUtlVector<int,CUtlMemory<int,int> > *v29; // r12
  __int64 m_Size; // r13
  int *v31; // rax
  int v32; // edx
  int *v33; // rax
  int nZeroAreaTriangles; // [rsp+10h] [rbp-B0h]
  int *nZeroAreaTrianglesa; // [rsp+10h] [rbp-B0h]
  int v36; // [rsp+18h] [rbp-A8h]
  CUtlVector<int,CUtlMemory<int,int> > *v38; // [rsp+28h] [rbp-98h]
  __int64 v39; // [rsp+28h] [rbp-98h]
  int nPartIndex[4]; // [rsp+30h] [rbp-90h]
  CUtlVector<int,CUtlMemory<int,int> > mapVertexToPart; // [rsp+40h] [rbp-80h] BYREF
  Vector v[3]; // [rsp+60h] [rbp-60h] BYREF

  this->m_pConnectivity = pConnectivity;
  this->m_pSourceMesh = pMesh;
  CUtlVectorBase<CUtlVector<int,CUtlMemory<int,int>>,CUtlMemory<CUtlVector<int,CUtlMemory<int,int>>,int>>::SetCount(
    &this->m_arrPartTriangles,
    pConnectivity->m_Parts.m_Size);
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&this->m_mapMeshVertIndexToPartVertIndex, pMesh->m_nVertexCount);
  m_nVertexCount = pMesh->m_nVertexCount;
  mapVertexToPart.m_Size = 0;
  mapVertexToPart.m_Memory.m_pMemory = 0;
  mapVertexToPart.m_Memory.m_nAllocationCount = 0;
  mapVertexToPart.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&mapVertexToPart, m_nVertexCount);
  v7 = 0;
  for ( i = 0; i < mapVertexToPart.m_Size; ++v7 )
  {
    ++i;
    mapVertexToPart.m_Memory.m_pMemory[v7] = -1;
  }
  v9 = 0;
  for ( j = 0; j < pConnectivity->m_Parts.m_Size; ++v9 )
  {
    v11 = pConnectivity->m_Parts.m_Memory.m_pMemory[v9].m_nVertexCount;
    v38 = &this->m_arrPartTriangles.m_Memory.m_pMemory[v9];
    v36 = 2 * v11;
    if ( 2 * v11 > v38->m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = v38->m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          nZeroAreaTrianglesa = v38->m_Memory.m_pMemory;
          v33 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v36);
          v38->m_Memory.m_pMemory = v33;
          if ( nZeroAreaTrianglesa != 0 )
            memcpy(v33, nZeroAreaTrianglesa, 4LL * v38->m_Memory.m_nAllocationCount);
          v38->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          m_pMemory = v38->m_Memory.m_pMemory;
          v14 = *g_pMemAlloc;
          if ( m_pMemory != 0 )
            v15 = (*(v14 + 8))(g_pMemAlloc, m_pMemory, 8LL * v11);
          else
            v15 = (*v14)(g_pMemAlloc, 4LL * v36);
          v38->m_Memory.m_pMemory = v15;
        }
        v38->m_Memory.m_nAllocationCount = v36;
      }
    }
    v16 = 0;
    if ( v11 > 0 )
    {
      do
      {
        v17 = pConnectivity->m_Indices.m_Memory.m_pMemory[v16
                                                        + pConnectivity->m_Parts.m_Memory.m_pMemory[v9].m_nVertexBegin];
        mapVertexToPart.m_Memory.m_pMemory[v17] = j;
        this->m_mapMeshVertIndexToPartVertIndex.m_Memory.m_pMemory[v17] = v16++;
      }
      while ( v16 != v11 );
    }
    ++j;
  }
  if ( pMesh->m_nIndexCount > 2 )
  {
    v18 = 0;
    v39 = 0;
    nZeroAreaTriangles = 0;
    do
    {
      v19 = 0;
      v20 = mapVertexToPart.m_Memory.m_pMemory;
      v21 = v;
      m_pVerts = pMesh->m_pVerts;
      m_nVertexStrideFloats = pMesh->m_nVertexStrideFloats;
      v24 = &pMesh->m_pIndices[v39];
      do
      {
        v25 = v24[v19];
        ++v21;
        v26 = &m_pVerts[v25 * m_nVertexStrideFloats];
        v21[-1].x = *v26;
        v21[-1].y = v26[1];
        v27 = v26[2];
        LODWORD(v26) = v20[v25];
        v21[-1].z = v27;
        nPartIndex[v19++] = v26;
      }
      while ( v19 != 3 );
      y_low = LODWORD(v[1].y);
      *y_low.m128i_i32 = (((((v[1].y - v[0].y) * (v[2].z - v[0].z)) - ((v[1].z - v[0].z) * (v[2].y - v[0].y)))
                         * (((v[1].y - v[0].y) * (v[2].z - v[0].z)) - ((v[1].z - v[0].z) * (v[2].y - v[0].y))))
                        + ((((v[2].x - v[0].x) * (v[1].z - v[0].z)) - ((v[1].x - v[0].x) * (v[2].z - v[0].z)))
                         * (((v[2].x - v[0].x) * (v[1].z - v[0].z)) - ((v[1].x - v[0].x) * (v[2].z - v[0].z)))))
                       + ((((v[2].y - v[0].y) * (v[1].x - v[0].x)) - ((v[2].x - v[0].x) * (v[1].y - v[0].y)))
                        * (((v[2].y - v[0].y) * (v[1].x - v[0].x)) - ((v[2].x - v[0].x) * (v[1].y - v[0].y))));
      if ( (_mm_cvtsi128_si32(y_low) & 0x7F800000) == 0x7F800000 || *y_low.m128i_i32 <= 1.0e-10 )
      {
        ++nZeroAreaTriangles;
      }
      else
      {
        v29 = &this->m_arrPartTriangles.m_Memory.m_pMemory[nPartIndex[0]];
        m_Size = v29->m_Size;
        if ( m_Size == v29->m_Memory.m_nAllocationCount )
          CUtlMemory<int,int>::Grow(&v29->m_Memory, 1);
        ++v29->m_Size;
        v31 = &v29->m_Memory.m_pMemory[m_Size];
        if ( v31 != 0 )
          *v31 = v18;
      }
      ++v18;
      v39 += 3;
      v32 = pMesh->m_nIndexCount / 3;
    }
    while ( v18 < v32 );
    if ( nZeroAreaTriangles != 0 )
      Warning("Found %d (out of %d) zero-area triangles\n", nZeroAreaTriangles, v32);
  }
  mapVertexToPart.m_Size = 0;
  if ( (mapVertexToPart.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&mapVertexToPart.m_Memory);
    if ( (mapVertexToPart.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&mapVertexToPart.m_Memory);
  }
}


// CMeshPartition::Validate  (line 354, @0x00000000031d3a60, libserver.so)
void __fastcall CMeshPartition::Validate(CMeshPartition *const this, CMesh *pMesh)
{
  ;
}


// CMeshPartition::GetPartMesh  (line 370, @0x00000000031d3a70, libserver.so)  // inlines: GetVertex, GetVertexCount, GetVertexPosition, MapMeshVertIndexToPartVertIndex, SetVertexPosition, operator=, operator[]
// calls: CMesh::AllocateMesh
void __fastcall CMeshPartition::GetPartMesh(CMeshPartition *const this, int nMeshPart, CMesh *pPartMesh)
{
  __int64 v3; // r13
  int m_Size; // r14d
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  uint32 v10; // esi
  int v11; // edx
  float *v12; // rsi
  float *v13; // rcx

  v3 = nMeshPart;
  m_Size = this->m_arrPartTriangles.m_Memory.m_pMemory[v3].m_Size;
  CMesh::AllocateMesh(
    pPartMesh,
    this->m_pConnectivity->m_Parts.m_Memory.m_pMemory[nMeshPart].m_nVertexCount,
    3 * m_Size,
    3,
    &g_PositionAttribute,
    1);
  if ( m_Size > 0 )
  {
    v7 = 0;
    do
    {
      v8 = 0;
      v9 = 3LL * this->m_arrPartTriangles.m_Memory.m_pMemory[v3].m_Memory.m_pMemory[v7 / 4];
      do
      {
        v10 = this->m_pSourceMesh->m_pIndices[v9 + v8];
        v11 = this->m_mapMeshVertIndexToPartVertIndex.m_Memory.m_pMemory[v10];
        v12 = &this->m_pSourceMesh->m_pVerts[this->m_pSourceMesh->m_nVertexStrideFloats * v10];
        v13 = &pPartMesh->m_pVerts[v11 * pPartMesh->m_nVertexStrideFloats];
        *v13 = *v12;
        v13[1] = v12[1];
        v13[2] = v12[2];
        pPartMesh->m_pIndices[3 * v7 / 4 + v8++] = v11;
      }
      while ( v8 != 3 );
      v7 += 4LL;
    }
    while ( v7 != 4LL * (m_Size - 1) + 4 );
  }
}


// CMeshDisjointSetPartition::RemapPartVertices  (line 395, @0x00000000031d3bf0, libserver.so)  // inlines: AddToTail, CopyConstruct<Vector>, Element, GetVertex, GetVertexCount, GrowMemory, operator[]
// calls: CUtlMemory<Vector, int>::Grow
void __fastcall CMeshDisjointSetPartition::RemapPartVertices(
        const CMeshDisjointSetPartition *const this,
        int nPart,
        const CUtlVector<Vector,CUtlMemory<Vector,int> > *const sourceVerts,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *pDestVerts)
{
  const CMeshDisjointSetPartition *v4; // r8
  __int64 v5; // r9
  int v6; // r12d
  CMeshDisjointSetPartition::Part_t *m_pMemory; // rax
  int v9; // r14d
  Vector *v10; // rax
  __int64 m_Size; // r13
  Vector *v12; // r15
  int v13; // eax
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-50h]
  const CUtlVector<Vector,CUtlMemory<Vector,int> > *v15; // [rsp+8h] [rbp-48h]
  const CMeshDisjointSetPartition *v16; // [rsp+10h] [rbp-40h]
  __int64 v17; // [rsp+18h] [rbp-38h]

  v4 = this;
  v5 = 8LL * nPart;
  v6 = 0;
  m_pMemory = this->m_Parts.m_Memory.m_pMemory;
  p_m_Memory = &pDestVerts->m_Memory;
  v9 = *(&m_pMemory->m_nVertexCount + v5);
  if ( v9 > 0 )
  {
    while ( 1 )
    {
      m_Size = pDestVerts->m_Size;
      v12 = &sourceVerts->m_Memory.m_pMemory[v4->m_Indices.m_Memory.m_pMemory[v6 + *(&m_pMemory->m_nVertexBegin + v5)]];
      v13 = pDestVerts->m_Size;
      if ( m_Size == pDestVerts->m_Memory.m_nAllocationCount )
      {
        v15 = sourceVerts;
        v16 = v4;
        v17 = v5;
        CUtlMemory<Vector,int>::Grow(p_m_Memory, 1);
        v13 = pDestVerts->m_Size;
        sourceVerts = v15;
        v4 = v16;
        v5 = v17;
      }
      pDestVerts->m_Size = v13 + 1;
      v10 = &pDestVerts->m_Memory.m_pMemory[m_Size];
      if ( v10 != 0 )
      {
        *&v10->x = *&v12->x;
        v10->z = v12->z;
      }
      if ( ++v6 == v9 )
        break;
      m_pMemory = v4->m_Parts.m_Memory.m_pMemory;
    }
  }
}


