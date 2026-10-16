
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavSplice::CNavSplice  (line 32, @0x0000000002ee7230, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: _GLOBAL__sub_I__unity_nav_mesh_02.cpp
void __fastcall CNavSplice::CNavSplice(CNavSplice *const this)
{
  this->m_HotEdges.m_Size = 0;
  this->m_HotEdges.m_Memory.m_pMemory = 0;
  this->m_HotEdges.m_Memory.m_nAllocationCount = 0;
  this->m_HotEdges.m_Memory.m_nGrowSize = 0;
  this->m_PerimeterEdges.m_Size = 0;
  this->m_PerimeterEdges.m_Memory.m_pMemory = 0;
  this->m_PerimeterEdges.m_Memory.m_nAllocationCount = 0;
  this->m_PerimeterEdges.m_Memory.m_nGrowSize = 0;
  this->m_BlockedAreas.m_Size = 0;
  this->m_BlockedAreas.m_Memory.m_pMemory = 0;
  this->m_BlockedAreas.m_Memory.m_nAllocationCount = 0;
  this->m_BlockedAreas.m_Memory.m_nGrowSize = 0;
  this->m_ExpansionAreas.m_Size = 0;
  this->m_ExpansionAreas.m_Memory.m_pMemory = 0;
  this->m_ExpansionAreas.m_Memory.m_nAllocationCount = 0;
  this->m_ExpansionAreas.m_Memory.m_nGrowSize = 0;
  this->m_ExpansionAreaSources.m_Size = 0;
  this->m_ExpansionAreaSources.m_Memory.m_pMemory = 0;
  this->m_ExpansionAreaSources.m_Memory.m_nAllocationCount = 0;
  this->m_ExpansionAreaSources.m_Memory.m_nGrowSize = 0;
  this->m_ExpansionAreaDirs.m_Size = 0;
  this->m_ExpansionAreaDirs.m_Memory.m_pMemory = 0;
  this->m_ExpansionAreaDirs.m_Memory.m_nAllocationCount = 0;
  this->m_ExpansionAreaDirs.m_Memory.m_nGrowSize = 0;
  this->m_ExpansionCrossConnections.m_Size = 0;
  this->m_ExpansionCrossConnections.m_Memory.m_pMemory = 0;
  this->m_ExpansionCrossConnections.m_Memory.m_nAllocationCount = 0;
  this->m_ExpansionCrossConnections.m_Memory.m_nGrowSize = 0;
  this->m_ExpansionConnections.m_Size = 0;
  this->m_ExpansionConnections.m_Memory.m_pMemory = 0;
  this->m_ExpansionConnections.m_Memory.m_nAllocationCount = 0;
  this->m_ExpansionConnections.m_Memory.m_nGrowSize = 0;
  this->m_pBackgroundMesh = 0;
  this->m_pSpliceMesh = 0;
  this->m_pTriangulatedPoly = 0;
}


// CNavSplice::InitMeshes  (line 41, @0x0000000002ee5460, libserver.so)
void __fastcall CNavSplice::InitMeshes(CNavSplice *const this, CNavMesh *pBackgroundMesh, CNavMesh *pSpliceMesh)
{
  this->m_pBackgroundMesh = pBackgroundMesh;
  this->m_pSpliceMesh = pSpliceMesh;
}


// CNavSplice::AddHotEdge  (line 49, @0x0000000002ef2a80, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavEdge>, Element, Find, GrowMemory, operator==, operator[]
// calls: CUtlMemory<CNavEdge, int>::Grow
void __fastcall CNavSplice::AddHotEdge(CNavSplice *const this, const CNavEdge *const hotEdge)
{
  __int64 m_Size; // rbx
  int v5; // edx
  CNavEdge *m_pMemory; // rax
  int v7; // eax
  __int64 v8; // rbx
  bool v9; // zf
  CNavEdge *v10; // rbx
  __int64 v11; // rdx

  m_Size = this->m_HotEdges.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_7:
    v7 = this->m_HotEdges.m_Size;
    if ( this->m_HotEdges.m_Memory.m_nAllocationCount == m_Size )
    {
      CUtlMemory<CNavEdge,int>::Grow(&this->m_HotEdges.m_Memory, 1);
      v7 = this->m_HotEdges.m_Size;
    }
    v8 = m_Size;
    v9 = &this->m_HotEdges.m_Memory.m_pMemory[v8] == 0;
    v10 = &this->m_HotEdges.m_Memory.m_pMemory[v8];
    this->m_HotEdges.m_Size = v7 + 1;
    if ( !v9 )
    {
      v11 = *&hotEdge->m_nEdge;
      v10->m_pArea = hotEdge->m_pArea;
      *&v10->m_nEdge = v11;
    }
  }
  else
  {
    v5 = 0;
    m_pMemory = this->m_HotEdges.m_Memory.m_pMemory;
    while ( m_pMemory->m_pArea != hotEdge->m_pArea || m_pMemory->m_nEdge != hotEdge->m_nEdge )
    {
      ++v5;
      ++m_pMemory;
      if ( v5 == m_Size )
        goto LABEL_7;
    }
  }
}


// CNavSplice::ValidateHotEdges  (line 59, @0x0000000002ee5470, libserver.so)
bool __fastcall CNavSplice::ValidateHotEdges(CNavSplice *const this)
{
  return 1;
}


// CNavSplice::FindNeighborInHotEdge  (line 67, @0x0000000002ee5480, libserver.so)  // inlines: Count, GetEdgeNum
// callers: CNavSplice::NextEdge
CNavEdge __fastcall CNavSplice::FindNeighborInHotEdge(CNavSplice *const this, const CNavEdge *const srcEdge)
{
  int m_nEdge; // r10d
  int v3; // r8d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  CNavArea **m_Elements; // r9
  int i; // eax
  int m_Size; // ecx
  CNavEdge *m_pMemory; // rdx
  __int64 v9; // rcx
  CNavEdge result; // 0:rax.9

  m_nEdge = srcEdge->m_nEdge;
  if ( srcEdge->m_pArea != 0 )
  {
    v3 = 0;
    m_pData = srcEdge->m_pArea->m_connect[srcEdge->m_nEdge].m_pData;
    m_Elements = m_pData->m_Elements;
    if ( m_pData == 0 )
      goto LABEL_11;
LABEL_3:
    for ( i = m_pData->m_Size; v3 < i; i = 0 )
    {
      m_Size = this->m_HotEdges.m_Size;
      result.m_pArea = *m_Elements;
      if ( m_Size > 0 )
      {
        m_pMemory = this->m_HotEdges.m_Memory.m_pMemory;
        if ( result.m_pArea == m_pMemory->m_pArea )
        {
LABEL_12:
          result.m_nEdge = (m_nEdge + 2) % 4;
          return result;
        }
        *&result.m_nEdge = m_pMemory + 1;
        v9 = *&result.m_nEdge + 16LL * (m_Size - 1);
        while ( *&result.m_nEdge != v9 )
        {
          *&result.m_nEdge += 16LL;
          if ( result.m_pArea == *(*&result.m_nEdge - 16LL) )
            goto LABEL_12;
        }
      }
      ++v3;
      m_Elements += 2;
      if ( m_pData != 0 )
        goto LABEL_3;
LABEL_11:
      ;
    }
  }
  result.m_pArea = 0;
  result.m_nEdge = -1;
  return result;
}


// CNavSplice::NextEdge  (line 99, @0x0000000002ee5530, libserver.so)  // inlines: CrossProduct, Dot, DotProduct, GetVert, GetVertsCW, IsValid, NextCW, NormalizeInPlace, VectorSubtract, operator-
// calls: CNavSplice::FindNeighborInHotEdge, VectorNormalize
// callers: CNavSplice::CalcPerimeter
CNavEdge __fastcall CNavSplice::NextEdge(CNavSplice *const this, const CNavEdge *const curEdge)
{
  CNavArea *m_pArea; // rax
  CNavEdge NeighborInHotEdge; // rax
  CNavArea *v5; // rbx
  NavEdgeIndex m_nEdge; // r13
  CNavArea *v7; // rsi
  int v8; // edi
  int v9; // r12d
  int m_nVerts; // ecx
  float v11; // xmm7_4
  float v12; // xmm6_4
  int v13; // ecx
  float *v14; // rdi
  float *v15; // rdx
  float v16; // xmm4_4
  float v17; // xmm12_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  int v20; // ecx
  int v21; // eax
  float v22; // [rsp+Ch] [rbp-74h]
  float v23; // [rsp+10h] [rbp-70h]
  float v24; // [rsp+14h] [rbp-6Ch]
  float v25; // [rsp+18h] [rbp-68h]
  float v26; // [rsp+1Ch] [rbp-64h]
  float v27; // [rsp+20h] [rbp-60h]
  float v28; // [rsp+24h] [rbp-5Ch]
  float v29; // [rsp+28h] [rbp-58h]
  float v30; // [rsp+2Ch] [rbp-54h]
  Vector vN; // [rsp+30h] [rbp-50h] BYREF
  Vector vCurLeft; // [rsp+40h] [rbp-40h] BYREF
  CNavEdge nextEdgeOnCurArea; // [rsp+50h] [rbp-30h] BYREF
  CNavEdge result; // 0:rax.9

  m_pArea = curEdge->m_pArea;
  *&nextEdgeOnCurArea.m_nEdge = *&curEdge->m_nEdge;
  nextEdgeOnCurArea.m_pArea = m_pArea;
  nextEdgeOnCurArea.m_nEdge = (m_pArea->m_nVerts + nextEdgeOnCurArea.m_nEdge - 1) % m_pArea->m_nVerts;
  NeighborInHotEdge = CNavSplice::FindNeighborInHotEdge(this, &nextEdgeOnCurArea);
  v5 = NeighborInHotEdge.m_pArea;
  m_nEdge = NeighborInHotEdge.m_nEdge;
  if ( NeighborInHotEdge.m_pArea != 0 )
  {
    v7 = curEdge->m_pArea;
    v8 = curEdge->m_nEdge;
    v9 = NeighborInHotEdge.m_nEdge;
    m_nVerts = v7->m_nVerts;
    *&NeighborInHotEdge.m_nEdge = v7 + 12 * ((v8 + 1) % m_nVerts);
    v11 = *(*&NeighborInHotEdge.m_nEdge + 12LL);
    v12 = *(*&NeighborInHotEdge.m_nEdge + 16LL);
    v22 = *(*&NeighborInHotEdge.m_nEdge + 8LL);
    *&NeighborInHotEdge.m_nEdge = v8 % m_nVerts;
    v13 = NeighborInHotEdge.m_pArea->m_nVerts;
    v23 = v11;
    v24 = v12;
    *&NeighborInHotEdge.m_nEdge = v7 + 12 * *&NeighborInHotEdge.m_nEdge;
    v29 = *(*&NeighborInHotEdge.m_nEdge + 8LL) - v22;
    v30 = *(*&NeighborInHotEdge.m_nEdge + 12LL) - v11;
    v28 = *(*&NeighborInHotEdge.m_nEdge + 16LL) - v12;
    v14 = (NeighborInHotEdge.m_pArea + 12 * ((v9 + 1) % v13));
    v15 = (NeighborInHotEdge.m_pArea + 12 * (m_nEdge % v13));
    v26 = v15[3];
    v16 = v26 - v14[3];
    v27 = v15[4];
    v17 = v27 - v14[4];
    v25 = v15[2];
    v18 = v25 - v14[2];
    vN.x = (v30 * v17) - (v28 * v16);
    vN.y = (v28 * v18) - (v17 * v29);
    vN.z = (v16 * v29) - (v18 * v30);
    VectorNormalize(&vN);
    vCurLeft.x = (v28 * vN.y) - (v30 * vN.z);
    vCurLeft.y = (vN.z * v29) - (v28 * vN.x);
    vCurLeft.z = (v30 * vN.x) - (v29 * vN.y);
    VectorNormalize(&vCurLeft);
    v19 = (((v25 - v22) * vCurLeft.x) + ((v26 - v23) * vCurLeft.y)) + ((v27 - v24) * vCurLeft.z);
    if ( v19 >= -1.0 )
    {
      result.m_nEdge = m_nEdge;
      if ( v19 >= 1.0 )
      {
        result.m_pArea = v5;
        return result;
      }
    }
    v20 = v5->m_nVerts;
    v21 = v9 + v20 - 1;
  }
  else
  {
    v5 = curEdge->m_pArea;
    v20 = curEdge->m_pArea->m_nVerts;
    v21 = v20 + curEdge->m_nEdge - 1;
  }
  *&result.m_nEdge = v21 % v20;
  result.m_pArea = v5;
  return result;
}


// CNavSplice::BlockBackgroundMesh  (line 186, @0x0000000002ee9c20, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavArea*>, Element, GetVert, GrowMemory, operator[]
// calls: CTriangulatedPolygon::IsPointInPolygon, GetNavObstructionMgr, CNavObstructionManager::BlockArea, CUtlMemory<CNavArea*, int>::Grow
// callers: CNavSplice::CalcPerimeter
void __fastcall CNavSplice::BlockBackgroundMesh(CNavSplice *const this)
{
  int m_Size; // eax
  CNavArea *v3; // rbx
  Vector *m_vVerts; // r13
  int v5; // r14d
  CTriangulatedPolygon *m_pTriangulatedPoly; // rdi
  vec_t y; // xmm2_4
  float z; // xmm1_4
  CNavObstructionManager *NavObstructionMgr; // rax
  int v10; // r13d
  int v11; // edx
  CNavArea **v12; // rax
  CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-60h]
  CNavMesh *m_pBackgroundMesh; // [rsp+8h] [rbp-58h]
  __int64 v15; // [rsp+10h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-48h]
  Vector vTestCorner; // [rsp+20h] [rbp-40h] BYREF

  m_pBackgroundMesh = this->m_pBackgroundMesh;
  m_Size = this->m_pBackgroundMesh->m_NavAreas.m_Size;
  if ( m_Size != 0 )
  {
    v16 = 0;
    v15 = 8LL * (m_Size - 1) + 8;
    p_m_Memory = &this->m_BlockedAreas.m_Memory;
    while ( 1 )
    {
      v3 = m_pBackgroundMesh->m_NavAreas.m_Memory.m_pMemory[v16 / 8];
      if ( v3->m_nVerts > 0 )
        break;
LABEL_8:
      NavObstructionMgr = GetNavObstructionMgr();
      CNavObstructionManager::BlockArea(NavObstructionMgr, v3, -1, 0);
      v10 = this->m_BlockedAreas.m_Size;
      v11 = v10;
      if ( v10 == this->m_BlockedAreas.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CNavArea *,int>::Grow(p_m_Memory, 1);
        v11 = this->m_BlockedAreas.m_Size;
      }
      this->m_BlockedAreas.m_Size = v11 + 1;
      v12 = &this->m_BlockedAreas.m_Memory.m_pMemory[v10];
      if ( v12 != 0 )
      {
        v16 += 8LL;
        *v12 = v3;
        if ( v16 == v15 )
          return;
      }
      else
      {
LABEL_3:
        v16 += 8LL;
        if ( v16 == v15 )
          return;
      }
    }
    m_vVerts = v3->m_vVerts;
    v5 = 0;
    while ( 1 )
    {
      m_pTriangulatedPoly = this->m_pTriangulatedPoly;
      y = m_vVerts->y;
      z = m_vVerts->z;
      vTestCorner.x = m_vVerts->x;
      vTestCorner.y = y;
      vTestCorner.z = z;
      if ( !CTriangulatedPolygon::IsPointInPolygon(m_pTriangulatedPoly, &vTestCorner, z) )
        goto LABEL_3;
      ++v5;
      ++m_vVerts;
      if ( v3->m_nVerts <= v5 )
        goto LABEL_8;
    }
  }
}


// CNavSplice::ExpandSpliceMeshTransferCrossConnetions  (line 216, @0x0000000002ee57d0, libserver.so)  // inlines: NavDirOpposite, operator[]
// callers: CNavSplice::ExpandSpliceMeshIncremental
void __fastcall CNavSplice::ExpandSpliceMeshTransferCrossConnetions(
        CNavSplice *const this,
        int nExpansionAreaSourceIndex,
        int nExpansionAreaDestIndex,
        NavDirType dir)
{
  __int64 v4; // r8
  __int32 v5; // ecx
  int v6; // eax
  CNavCrossMeshConnection *v7; // r9

  if ( this->m_ExpansionCrossConnections.m_Size > 0 )
  {
    v4 = 0;
    v5 = (dir + 2) % 4;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = &this->m_ExpansionCrossConnections.m_Memory.m_pMemory[v4];
        if ( __PAIR64__(v7->m_EdgeAB, v7->m_nIndexOnMeshB) == __PAIR64__(v5, nExpansionAreaSourceIndex) )
          break;
        ++v6;
        ++v4;
        if ( this->m_ExpansionCrossConnections.m_Size <= v6 )
          return;
      }
      v7->m_nIndexOnMeshB = nExpansionAreaDestIndex;
      ++v6;
      ++v4;
    }
    while ( this->m_ExpansionCrossConnections.m_Size > v6 );
  }
}


// CNavSplice::ExpandSpliceMeshCopyCrossConnetions  (line 239, @0x0000000002ef2b30, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavCrossMeshConnection>, Element, GrowMemory, NavDirOpposite, operator[]
// calls: CUtlMemory<CNavCrossMeshConnection, int>::Grow
// callers: CNavSplice::ExpandSpliceMeshIncremental
void __fastcall CNavSplice::ExpandSpliceMeshCopyCrossConnetions(
        CNavSplice *const this,
        int nExpansionAreaSourceIndex,
        int nExpansionAreaDestIndex,
        NavDirType dir)
{
  __int64 m_Size; // rax
  __int64 v7; // r12
  CUtlVectorBase<CNavCrossMeshConnection,CUtlMemory<CNavCrossMeshConnection,int> >::CAllocator *p_m_Memory; // r10
  int v9; // ebx
  __int32 v10; // r15d
  CNavCrossMeshConnection *m_pMemory; // r9
  CNavCrossMeshConnection *v12; // r8
  NavEdgeIndex m_EdgeAB; // cl
  int m_nIndexOnMeshA; // r8d
  CNavCrossMeshConnection *v15; // rsi
  int v16; // edi
  int v17; // [rsp+8h] [rbp-48h]
  int v18; // [rsp+Ch] [rbp-44h]
  int v19; // [rsp+10h] [rbp-40h]
  NavEdgeIndex v20; // [rsp+14h] [rbp-3Ch]
  CUtlVectorBase<CNavCrossMeshConnection,CUtlMemory<CNavCrossMeshConnection,int> >::CAllocator *v21; // [rsp+18h] [rbp-38h]

  m_Size = this->m_ExpansionCrossConnections.m_Size;
  if ( m_Size > 0 )
  {
    v7 = 0;
    p_m_Memory = &this->m_ExpansionCrossConnections.m_Memory;
    v9 = 0;
    v10 = (dir + 2) % 4;
    do
    {
      m_pMemory = this->m_ExpansionCrossConnections.m_Memory.m_pMemory;
      v12 = &m_pMemory[v7];
      if ( m_pMemory[v7].m_nIndexOnMeshB == nExpansionAreaSourceIndex )
      {
        m_EdgeAB = v12->m_EdgeAB;
        if ( m_EdgeAB == v10 )
        {
          m_nIndexOnMeshA = v12->m_nIndexOnMeshA;
          if ( m_Size == this->m_ExpansionCrossConnections.m_Memory.m_nAllocationCount )
          {
            v17 = nExpansionAreaDestIndex;
            v18 = m_Size;
            v19 = m_nIndexOnMeshA;
            v20 = m_EdgeAB;
            v21 = p_m_Memory;
            CUtlMemory<CNavCrossMeshConnection,int>::Grow(p_m_Memory, 1);
            m_pMemory = this->m_ExpansionCrossConnections.m_Memory.m_pMemory;
            nExpansionAreaDestIndex = v17;
            m_Size = v18;
            m_nIndexOnMeshA = v19;
            m_EdgeAB = v20;
            p_m_Memory = v21;
          }
          v15 = &m_pMemory[m_Size];
          v16 = this->m_ExpansionCrossConnections.m_Size + 1;
          this->m_ExpansionCrossConnections.m_Size = v16;
          if ( v15 == 0 )
          {
            m_Size = v16;
            goto LABEL_4;
          }
          v15->m_nIndexOnMeshA = m_nIndexOnMeshA;
          v15->m_nIndexOnMeshB = nExpansionAreaDestIndex;
          v15->m_EdgeAB = m_EdgeAB;
        }
      }
      m_Size = this->m_ExpansionCrossConnections.m_Size;
LABEL_4:
      ++v9;
      ++v7;
    }
    while ( v9 < m_Size );
  }
}


// CNavSplice::ExpandSpliceMeshTrimCrossConnetions  (line 260, @0x0000000002ee5850, libserver.so)
void __fastcall CNavSplice::ExpandSpliceMeshTrimCrossConnetions(
        CNavSplice *const this,
        int nExpansionAreaIndex,
        NavDirType dirForward)
{
  ;
}


// CNavSplice::ExpandSpliceMeshIncremental  (line 267, @0x0000000002ef2c40, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavArea*>, Element, FixupZ, GetCorner, GetEdgeDir, GetVert, GetVertsCW, GetZ, GrowMemory, IsOverlappingPoint, NavCornerNextCW, NavDirNextCCW, NavDirNextCW, operator=, operator[]
// calls: CNavPoly::IsOverlappingPoint, CNavPoly::GetZ, CNavPoly::SetCorners, CNavMesh::OnEditCreateNotify, CNavSplice::ExpandSpliceMeshTransferCrossConnetions, CNavSplice::ExpandSpliceMeshCopyCrossConnetions, CUtlMemory<CNavArea*, int>::Grow
// callers: CNavSplice::ExpandSpliceMesh
bool __fastcall CNavSplice::ExpandSpliceMeshIncremental(CNavSplice *const this)
{
  CNavEdge *v2; // rax
  int m_nVerts; // esi
  __int64 v4; // rdx
  vec_t v5; // xmm2_4
  vec_t v6; // xmm1_4
  __int64 v7; // rdx
  float v8; // xmm1_4
  vec_t v9; // xmm0_4
  __int64 v10; // r13
  CNavArea *v11; // rbx
  CNavArea *v12; // r12
  bool IsOverlappingPoint; // al
  char z_low; // r13
  vec_t *v15; // rsi
  float y; // xmm1_4
  vec_t v17; // xmm5_4
  vec_t *v18; // rcx
  vec_t v19; // xmm3_4
  float x; // xmm2_4
  vec_t *v21; // rcx
  vec_t *v22; // rdx
  vec_t v23; // xmm7_4
  vec_t v24; // xmm6_4
  vec_t v25; // xmm7_4
  vec_t v26; // xmm6_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float z; // xmm2_4
  float v31; // xmm2_4
  vec_t v32; // xmm0_4
  CNavMesh *m_pSpliceMesh; // rdi
  CNavArea *v34; // r13
  __int64 m_Size; // rax
  bool v36; // r11
  int v37; // edx
  CNavArea **v38; // rax
  __int64 v39; // rax
  int v40; // edx
  CNavArea **v41; // rax
  CNavArea *v42; // r13
  __int64 v43; // rdx
  bool v44; // r11
  int v45; // ecx
  CNavArea **v46; // rdx
  __int64 v47; // rdx
  int v48; // ecx
  CNavArea **v49; // rdx
  int v51; // [rsp+4h] [rbp-FCh]
  int v52; // [rsp+4h] [rbp-FCh]
  Vector *vC1; // [rsp+10h] [rbp-F0h]
  bool vC1a; // [rsp+10h] [rbp-F0h]
  bool vC1b; // [rsp+10h] [rbp-F0h]
  bool v56; // [rsp+18h] [rbp-E8h]
  bool v57; // [rsp+18h] [rbp-E8h]
  bool v58; // [rsp+18h] [rbp-E8h]
  int v59; // [rsp+18h] [rbp-E8h]
  int v60; // [rsp+18h] [rbp-E8h]
  int itHotEdges; // [rsp+1Ch] [rbp-E4h]
  NavDirType itHotEdgesa; // [rsp+1Ch] [rbp-E4h]
  NavCornerType startCorner[2]; // [rsp+20h] [rbp-E0h]
  NavDirType startCornera; // [rsp+20h] [rbp-E0h]
  Vector vE0; // [rsp+30h] [rbp-D0h] BYREF
  Vector vE1; // [rsp+40h] [rbp-C0h] BYREF
  Vector vForwardLeft; // [rsp+50h] [rbp-B0h] BYREF
  Vector vForwardCenterLeft; // [rsp+60h] [rbp-A0h] BYREF
  Vector vForwardCenterRight; // [rsp+70h] [rbp-90h] BYREF
  Vector vForwardRight; // [rsp+80h] [rbp-80h] BYREF
  Vector vBackLeft; // [rsp+90h] [rbp-70h] BYREF
  Vector vBackCenterLeft; // [rsp+A0h] [rbp-60h] BYREF
  Vector vBackCenterRight; // [rsp+B0h] [rbp-50h] BYREF
  Vector vBackRight; // [rsp+C0h] [rbp-40h] BYREF

  *startCorner = 0;
  itHotEdges = 0;
  if ( this->m_HotEdges.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v2 = (this->m_HotEdges.m_Memory.m_pMemory + *startCorner);
    vC1 = v2;
    m_nVerts = v2->m_pArea->m_nVerts;
    v4 = v2->m_pArea + 12 * ((v2->m_nEdge + 1) % m_nVerts);
    v5 = *(v4 + 8);
    v6 = *(v4 + 12);
    vE0.z = *(v4 + 16);
    LODWORD(v2) = v2->m_nEdge;
    vE0.x = v5;
    vE0.y = v6;
    v7 = *&vC1->x + 12LL * (v2 % m_nVerts);
    LODWORD(v2) = this->m_ExpansionAreas.m_Size;
    v8 = *(v7 + 12);
    v9 = *(v7 + 16);
    vE1.x = *(v7 + 8);
    vE1.y = v8;
    vE1.z = v9;
    if ( v2 > 0 )
      break;
LABEL_12:
    ++itHotEdges;
    *startCorner += 16LL;
    if ( this->m_HotEdges.m_Size <= itHotEdges )
      return 0;
  }
  v10 = 0;
  while ( 1 )
  {
    v11 = this->m_ExpansionAreas.m_Memory.m_pMemory[v10];
    v12 = this->m_ExpansionAreaSources.m_Memory.m_pMemory[v10];
    if ( CNavPoly::IsOverlappingPoint(v11, &vE0, v8) )
    {
      IsOverlappingPoint = CNavPoly::IsOverlappingPoint(v11, &vE1, v8);
      if ( IsOverlappingPoint )
        break;
    }
    if ( this->m_ExpansionAreas.m_Size <= ++v10 )
      goto LABEL_12;
  }
  z_low = LOBYTE(vC1->z);
  itHotEdgesa = z_low;
  startCornera = (z_low + 1) % 4;
  v15 = (v11 + 12 * startCornera);
  y = v15[3];
  v17 = v15[4];
  v18 = (v11 + 12 * ((startCornera + 3) & 3));
  vForwardLeft.x = v15[2];
  vForwardLeft.y = y;
  vForwardLeft.z = v17;
  v19 = v18[3];
  x = v18[4];
  vForwardRight.x = v18[2];
  v21 = (v11 + 12 * ((((((startCornera + 3) & 3) + 3) & 3) + 3) & 3));
  vForwardRight.y = v19;
  v22 = (v11 + 12 * ((((startCornera + 3) & 3) + 3) & 3));
  vForwardRight.z = x;
  v23 = v21[3];
  v24 = v21[4];
  vBackLeft.x = v21[2];
  vBackLeft.y = v23;
  vBackLeft.z = v24;
  v25 = v22[3];
  v26 = v22[4];
  vBackRight.x = v22[2];
  vBackRight.y = v25;
  vBackRight.z = v26;
  vForwardCenterLeft = vForwardLeft;
  vForwardCenterRight = vForwardRight;
  if ( z_low == 1 )
  {
LABEL_11:
    y = vE0.y;
    x = vE1.y;
    vForwardCenterLeft.y = vE0.y;
    vForwardCenterRight.y = vE1.y;
    goto LABEL_16;
  }
  if ( z_low <= 1 )
  {
    if ( z_low != 0 )
      goto LABEL_16;
  }
  else if ( z_low != 2 )
  {
    if ( z_low != 3 )
      goto LABEL_16;
    goto LABEL_11;
  }
  x = vE1.x;
  vForwardCenterLeft.x = vE0.x;
  vForwardCenterRight.x = vE1.x;
LABEL_16:
  vC1a = IsOverlappingPoint;
  vForwardCenterLeft.z = CNavPoly::GetZ(v11, y, x);
  vForwardCenterRight.z = CNavPoly::GetZ(v11, vForwardCenterRight.y, v28);
  v29 = vBackLeft.y;
  vBackCenterLeft = vBackLeft;
  vBackCenterRight = vBackRight;
  z = vBackRight.z;
  if ( z_low == 1 )
  {
LABEL_38:
    v29 = vE0.y;
    z = vE1.y;
    vBackCenterLeft.y = vE0.y;
    vBackCenterRight.y = vE1.y;
    goto LABEL_20;
  }
  if ( z_low <= 1 )
  {
    if ( z_low != 0 )
      goto LABEL_20;
LABEL_40:
    z = vE1.x;
    vBackCenterLeft.x = vE0.x;
    vBackCenterRight.x = vE1.x;
    goto LABEL_20;
  }
  if ( z_low == 2 )
    goto LABEL_40;
  if ( z_low == 3 )
    goto LABEL_38;
LABEL_20:
  vBackCenterLeft.z = CNavPoly::GetZ(v11, v29, z);
  v32 = CNavPoly::GetZ(v11, vBackCenterRight.y, v31);
  m_pSpliceMesh = this->m_pSpliceMesh;
  vBackCenterRight.z = v32;
  v34 = (*(m_pSpliceMesh->_vptr_CNavMesh + 4))(m_pSpliceMesh);
  CNavPoly::SetCorners(v34, startCornera, &vForwardLeft, &vForwardCenterLeft, &vBackCenterLeft, &vBackLeft);
  (*(v34->_vptr_CNavPoly + 27))(v34, v11, 0);
  m_Size = this->m_ExpansionAreas.m_Size;
  v36 = vC1a;
  v37 = this->m_ExpansionAreas.m_Size;
  if ( m_Size == this->m_ExpansionAreas.m_Memory.m_nAllocationCount )
  {
    v60 = this->m_ExpansionAreas.m_Size;
    CUtlMemory<CNavArea *,int>::Grow(&this->m_ExpansionAreas.m_Memory, 1);
    v37 = this->m_ExpansionAreas.m_Size;
    m_Size = v60;
    v36 = vC1a;
  }
  this->m_ExpansionAreas.m_Size = v37 + 1;
  v38 = &this->m_ExpansionAreas.m_Memory.m_pMemory[m_Size];
  if ( v38 != 0 )
    *v38 = v34;
  v39 = this->m_ExpansionAreaSources.m_Size;
  v40 = this->m_ExpansionAreaSources.m_Size;
  if ( v39 == this->m_ExpansionAreaSources.m_Memory.m_nAllocationCount )
  {
    v59 = this->m_ExpansionAreaSources.m_Size;
    vC1b = v36;
    CUtlMemory<CNavArea *,int>::Grow(&this->m_ExpansionAreaSources.m_Memory, 1);
    v40 = this->m_ExpansionAreaSources.m_Size;
    v39 = v59;
    v36 = vC1b;
  }
  this->m_ExpansionAreaSources.m_Size = v40 + 1;
  v41 = &this->m_ExpansionAreaSources.m_Memory.m_pMemory[v39];
  if ( v41 != 0 )
    *v41 = v12;
  v56 = v36;
  (*(this->m_pSpliceMesh->_vptr_CNavMesh + 28))(this->m_pSpliceMesh, v34);
  CNavMesh::OnEditCreateNotify(this->m_pSpliceMesh, v34);
  CNavSplice::ExpandSpliceMeshTransferCrossConnetions(this, v11->m_nIndex, v34->m_nIndex, startCornera);
  CNavSplice::ExpandSpliceMeshCopyCrossConnetions(this, v11->m_nIndex, v34->m_nIndex, itHotEdgesa);
  v42 = (*(this->m_pSpliceMesh->_vptr_CNavMesh + 4))(this->m_pSpliceMesh);
  CNavPoly::SetCorners(v42, startCornera, &vForwardCenterRight, &vForwardRight, &vBackRight, &vBackCenterRight);
  (*(v42->_vptr_CNavPoly + 27))(v42, v11, 0);
  v43 = this->m_ExpansionAreas.m_Size;
  v44 = v56;
  v45 = this->m_ExpansionAreas.m_Size;
  if ( v43 == this->m_ExpansionAreas.m_Memory.m_nAllocationCount )
  {
    v52 = this->m_ExpansionAreas.m_Size;
    CUtlMemory<CNavArea *,int>::Grow(&this->m_ExpansionAreas.m_Memory, 1);
    v45 = this->m_ExpansionAreas.m_Size;
    v43 = v52;
    v44 = v56;
  }
  this->m_ExpansionAreas.m_Size = v45 + 1;
  v46 = &this->m_ExpansionAreas.m_Memory.m_pMemory[v43];
  if ( v46 != 0 )
    *v46 = v42;
  v47 = this->m_ExpansionAreaSources.m_Size;
  v48 = this->m_ExpansionAreaSources.m_Size;
  if ( v47 == this->m_ExpansionAreaSources.m_Memory.m_nAllocationCount )
  {
    v51 = this->m_ExpansionAreaSources.m_Size;
    v58 = v44;
    CUtlMemory<CNavArea *,int>::Grow(&this->m_ExpansionAreaSources.m_Memory, 1);
    v48 = this->m_ExpansionAreaSources.m_Size;
    v47 = v51;
    v44 = v58;
  }
  this->m_ExpansionAreaSources.m_Size = v48 + 1;
  v49 = &this->m_ExpansionAreaSources.m_Memory.m_pMemory[v47];
  if ( v49 != 0 )
    *v49 = v12;
  v57 = v44;
  (*(this->m_pSpliceMesh->_vptr_CNavMesh + 28))(this->m_pSpliceMesh, v42);
  CNavMesh::OnEditCreateNotify(this->m_pSpliceMesh, v42);
  CNavSplice::ExpandSpliceMeshTransferCrossConnetions(this, v11->m_nIndex, v42->m_nIndex, ((itHotEdgesa + 3) % 4));
  CNavSplice::ExpandSpliceMeshCopyCrossConnetions(this, v11->m_nIndex, v42->m_nIndex, itHotEdgesa);
  CNavPoly::SetCorners(v11, startCornera, &vForwardCenterLeft, &vForwardCenterRight, &vE1, &vE0);
  return v57;
}


// CNavSplice::ExpandSpliceMesh  (line 393, @0x0000000002ef3370, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavArea*>, CopyConstruct<CNavCrossMeshConnection>, CopyConstruct<CNavSplice::ExpansionConnection>, CopyConstruct<NavDirType>, Count, Element, GetEdgeDir, GetVert, GetVertsCW, GrowMemory, IsOverlappingPoint, NavDirOpposite, operator=, operator[]
// calls: CNavPoly::IsOverlappingPoint, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, GetNavObstructionMgr, CNavObstructionManager::BlockArea, CNavMesh::OnEditCreateNotify, CNavPoly::SetCorners, CNavArea::ConnectTo, CNavArea::IsConnectedOnAny, Msg, CNavSplice::ExpandSpliceMeshIncremental, CNavMesh::MergeNavMesh, CUtlMemory<CNavSplice::ExpansionConnection, int>::Grow (15 total)
// callers: CNavSplice::CalcPerimeter
bool __fastcall CNavSplice::ExpandSpliceMesh(CNavSplice *const this)
{
  CNavSplice *v1; // r15
  CNavSplice *v2; // r14
  CNavMesh *m_pBackgroundMesh; // r15
  char *v4; // rax
  int v5; // ecx
  char *v6; // rdi
  __int64 v7; // rdx
  vec_t v8; // xmm2_4
  vec_t v9; // xmm1_4
  float *v10; // rdx
  float v11; // xmm1_4
  int v12; // xmm0_4
  int m_Size; // eax
  unsigned __int64 v14; // rbx
  CNavSplice *v15; // rax
  CNavMesh *v16; // r14
  CNavSplice *v17; // r15
  CNavArea *v18; // r12
  CNavObstructionManager *NavObstructionMgr; // rax
  CNavArea *v20; // r13
  __int64 v21; // rax
  int v22; // edx
  CNavArea **v23; // rax
  __int64 v24; // r13
  int v25; // eax
  CNavArea **v26; // rax
  __int64 v27; // r12
  int v28; // eax
  NavDirType *v29; // rax
  int v30; // eax
  int v31; // r13d
  CNavArea **m_pMemory; // rdx
  const CNavArea *v33; // r12
  __int64 v34; // r14
  int v35; // ebx
  __int64 v36; // rax
  int v37; // edx
  CNavSplice::ExpansionConnection *v38; // rax
  __int64 v39; // rbx
  int v40; // r13d
  __int64 v41; // r12
  int32 m_nIndex; // r8d
  int32 v43; // ecx
  int v44; // eax
  __int64 v45; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  int v47; // ecx
  CNavArea *m_pArea; // rbx
  int v49; // r12d
  int itExpansionAreas; // [rsp+Ch] [rbp-B4h]
  int itExpansionAreasa; // [rsp+Ch] [rbp-B4h]
  CUtlMemory<NavDirType,int> *p_m_Memory; // [rsp+10h] [rbp-B0h]
  CUtlMemory<NavDirType,int> *v54; // [rsp+10h] [rbp-B0h]
  NavAreaVector *p_m_ExpansionAreas; // [rsp+18h] [rbp-A8h]
  int32 src; // [rsp+20h] [rbp-A0h]
  __int64 v57; // [rsp+28h] [rbp-98h]
  int32 v58; // [rsp+28h] [rbp-98h]
  int pExpansionArea; // [rsp+30h] [rbp-90h]
  const CNavArea *pExpansionAreaa; // [rsp+30h] [rbp-90h]
  char vPos; // [rsp+38h] [rbp-88h]
  NavDirType hotEdgeDir; // [rsp+40h] [rbp-80h]
  CUtlVectorBase<CNavArea*,CUtlMemory<CNavArea*,int> > *v63; // [rsp+48h] [rbp-78h]
  const CNavArea *pExpansionAreaSource; // [rsp+50h] [rbp-70h]
  int pExpansionAreaSourcea; // [rsp+50h] [rbp-70h]
  __int64 v66; // [rsp+58h] [rbp-68h]
  __int64 v67; // [rsp+58h] [rbp-68h]
  __int64 v68; // [rsp+58h] [rbp-68h]
  CNavArea *v69; // [rsp+68h] [rbp-58h] BYREF
  Vector vE0; // [rsp+70h] [rbp-50h] BYREF
  CNavArea *pBackgroundNeighborArea; // [rsp+80h] [rbp-40h] BYREF
  int v72; // [rsp+88h] [rbp-38h]

  v1 = this;
  v57 = 0;
  pExpansionArea = 0;
  if ( this->m_HotEdges.m_Size > 0 )
  {
    v2 = this;
    p_m_ExpansionAreas = &this->m_ExpansionAreas;
    do
    {
      m_pBackgroundMesh = v2->m_pBackgroundMesh;
      v4 = &v2->m_HotEdges.m_Memory.m_pMemory[v57];
      v63 = v4;
      v5 = *(*v4 + 104LL);
      hotEdgeDir = v4[8];
      v6 = v4;
      v7 = *v4 + 12LL * ((hotEdgeDir + 1) % v5);
      v8 = *(v7 + 8);
      v9 = *(v7 + 12);
      vE0.z = *(v7 + 16);
      LODWORD(v4) = v4[8];
      vE0.x = v8;
      vE0.y = v9;
      v10 = (*v6 + 12LL * (v4 % v5));
      v11 = v10[3];
      v12 = *(v10 + 4);
      *&pBackgroundNeighborArea = v10[2];
      *(&pBackgroundNeighborArea + 1) = v11;
      v72 = v12;
      m_Size = m_pBackgroundMesh->m_NavAreas.m_Size;
      if ( m_Size != 0 )
      {
        v14 = 0;
        v66 = 8LL * (m_Size - 1) + 8;
        p_m_Memory = &v2->m_ExpansionAreaDirs.m_Memory;
        v15 = v2;
        v16 = m_pBackgroundMesh;
        v17 = v15;
        do
        {
          while ( 1 )
          {
            v18 = v16->m_NavAreas.m_Memory.m_pMemory[v14 / 8];
            if ( CNavPoly::IsOverlappingPoint(v18, &vE0, v11)
              && CNavPoly::IsOverlappingPoint(v18, &pBackgroundNeighborArea, v11) )
            {
              v69 = v18;
              if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(p_m_ExpansionAreas, &v69) == -1 )
              {
                NavObstructionMgr = GetNavObstructionMgr();
                CNavObstructionManager::BlockArea(NavObstructionMgr, v18, -1, 0);
                v20 = (*(v17->m_pSpliceMesh->_vptr_CNavMesh + 4))(v17->m_pSpliceMesh);
                (*(v17->m_pSpliceMesh->_vptr_CNavMesh + 28))(v17->m_pSpliceMesh, v20);
                CNavMesh::OnEditCreateNotify(v17->m_pSpliceMesh, v20);
                CNavPoly::SetCorners(v20, v18);
                (*(v20->_vptr_CNavPoly + 27))(v20, v18, 0);
                v21 = v17->m_ExpansionAreas.m_Size;
                v22 = v17->m_ExpansionAreas.m_Size;
                if ( v21 == v17->m_ExpansionAreas.m_Memory.m_nAllocationCount )
                {
                  itExpansionAreasa = v17->m_ExpansionAreas.m_Size;
                  CUtlMemory<CNavArea *,int>::Grow(&v17->m_ExpansionAreas.m_Memory, 1);
                  v22 = v17->m_ExpansionAreas.m_Size;
                  v21 = itExpansionAreasa;
                }
                v17->m_ExpansionAreas.m_Size = v22 + 1;
                v23 = &v17->m_ExpansionAreas.m_Memory.m_pMemory[v21];
                if ( v23 != 0 )
                  *v23 = v20;
                CNavArea::ConnectTo(v20, *&v63->m_Size, (SLOBYTE(v63->m_Memory.m_pMemory) + 2) % 4, -1, 1);
                CNavArea::ConnectTo(*&v63->m_Size, v20, v63->m_Memory.m_pMemory, -1, 1);
                v24 = v17->m_ExpansionAreaSources.m_Size;
                v25 = v17->m_ExpansionAreaSources.m_Size;
                if ( v24 == v17->m_ExpansionAreaSources.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CNavArea *,int>::Grow(&v17->m_ExpansionAreaSources.m_Memory, 1);
                  v25 = v17->m_ExpansionAreaSources.m_Size;
                }
                v17->m_ExpansionAreaSources.m_Size = v25 + 1;
                v26 = &v17->m_ExpansionAreaSources.m_Memory.m_pMemory[v24];
                if ( v26 != 0 )
                  *v26 = v18;
                v27 = v17->m_ExpansionAreaDirs.m_Size;
                v28 = v17->m_ExpansionAreaDirs.m_Size;
                if ( v27 == v17->m_ExpansionAreaDirs.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<NavDirType,int>::Grow(p_m_Memory, 1);
                  v28 = v17->m_ExpansionAreaDirs.m_Size;
                }
                v17->m_ExpansionAreaDirs.m_Size = v28 + 1;
                v29 = &v17->m_ExpansionAreaDirs.m_Memory.m_pMemory[v27];
                if ( v29 != 0 )
                  break;
              }
            }
            v14 += 8LL;
            if ( v14 == v66 )
              goto LABEL_21;
          }
          v14 += 8LL;
          *v29 = hotEdgeDir;
        }
        while ( v14 != v66 );
LABEL_21:
        v2 = v17;
      }
      ++pExpansionArea;
      ++v57;
    }
    while ( v2->m_HotEdges.m_Size > pExpansionArea );
    v1 = v2;
  }
  v30 = v1->m_ExpansionAreas.m_Size;
  v31 = 0;
  v67 = 0;
  if ( v30 <= 0 )
    goto LABEL_52;
  do
  {
    m_pMemory = v1->m_ExpansionAreas.m_Memory.m_pMemory;
    v33 = m_pMemory[v67];
    if ( v30 <= 0 )
      goto LABEL_52;
    v34 = 0;
    while ( 1 )
    {
      v35 = v34;
      if ( CNavArea::IsConnectedOnAny(v33, m_pMemory[v34], 0, 0, 0) )
      {
        v36 = v1->m_ExpansionConnections.m_Size;
        v37 = v1->m_ExpansionConnections.m_Size;
        if ( v36 == v1->m_ExpansionConnections.m_Memory.m_nAllocationCount )
        {
          pExpansionAreaSourcea = v1->m_ExpansionConnections.m_Size;
          CUtlMemory<CNavSplice::ExpansionConnection,int>::Grow(&v1->m_ExpansionConnections.m_Memory, 1);
          v37 = v1->m_ExpansionConnections.m_Size;
          v36 = pExpansionAreaSourcea;
        }
        v1->m_ExpansionConnections.m_Size = v37 + 1;
        v38 = &v1->m_ExpansionConnections.m_Memory.m_pMemory[v36];
        if ( v38 != 0 )
          break;
      }
      v30 = v1->m_ExpansionAreas.m_Size;
      if ( v30 <= ++v34 )
        goto LABEL_34;
LABEL_28:
      m_pMemory = v1->m_ExpansionAreas.m_Memory.m_pMemory;
    }
    v38->m_nIndexA = v31;
    ++v34;
    v38->m_nIndexB = v35;
    v30 = v1->m_ExpansionAreas.m_Size;
    if ( v30 > v34 )
      goto LABEL_28;
LABEL_34:
    ++v67;
    ++v31;
  }
  while ( v30 > v31 );
  if ( v30 > 0 )
  {
    v54 = 0;
    itExpansionAreas = 0;
    do
    {
      v39 = 0;
      pExpansionAreaa = *(v1->m_ExpansionAreas.m_Memory.m_pMemory + v54);
      pExpansionAreaSource = *(v1->m_ExpansionAreaSources.m_Memory.m_pMemory + v54);
      do
      {
        v40 = 0;
        v68 = v39;
        vPos = (v39 + 2) & 3;
        while ( 1 )
        {
          m_pData = pExpansionAreaSource->m_connect[v68].m_pData;
          v47 = m_pData != 0 ? m_pData->m_Size : 0;
          if ( v40 >= v47 )
            break;
          m_pArea = m_pData->m_Elements[v40].m_pArea;
          pBackgroundNeighborArea = m_pArea;
          v49 = CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(
                  &v1->m_BlockedAreas,
                  &pBackgroundNeighborArea);
          if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(
                 &v1->m_ExpansionAreaSources,
                 &pBackgroundNeighborArea) == -1
            && v49 == -1 )
          {
            v41 = v1->m_ExpansionCrossConnections.m_Size;
            m_nIndex = m_pArea->m_nIndex;
            v43 = pExpansionAreaa->m_nIndex;
            v44 = v1->m_ExpansionCrossConnections.m_Size;
            if ( v41 == v1->m_ExpansionCrossConnections.m_Memory.m_nAllocationCount )
            {
              src = pExpansionAreaa->m_nIndex;
              v58 = m_pArea->m_nIndex;
              CUtlMemory<CNavCrossMeshConnection,int>::Grow(&v1->m_ExpansionCrossConnections.m_Memory, 1);
              v44 = v1->m_ExpansionCrossConnections.m_Size;
              v43 = src;
              m_nIndex = v58;
            }
            v1->m_ExpansionCrossConnections.m_Size = v44 + 1;
            v45 = &v1->m_ExpansionCrossConnections.m_Memory.m_pMemory[v41];
            if ( v45 != 0 )
            {
              *v45 = m_nIndex;
              *(v45 + 4) = v43;
              *(v45 + 8) = vPos;
            }
          }
          else
          {
            Msg("here");
          }
          ++v40;
        }
        v39 = v68 + 1;
      }
      while ( v68 != 3 );
      ++itExpansionAreas;
      v54 = (v54 + 8);
    }
    while ( v1->m_ExpansionAreas.m_Size > itExpansionAreas );
  }
LABEL_52:
  while ( CNavSplice::ExpandSpliceMeshIncremental(v1) )
    ;
  CNavMesh::MergeNavMesh(v1->m_pBackgroundMesh, v1->m_pSpliceMesh, &v1->m_ExpansionCrossConnections);
  return 0;
}


// CNavSplice::CalcPerimeter  (line 498, @0x0000000002ef39d0, libserver.so)  // inlines: AddToTail, CopyConstruct<CNavEdge>, DistToSqr, Element, GetVert, GetVertsCW, GrowMemory, LengthSqr, operator!=, operator=, operator[]
// calls: CNavSplice::NextEdge, CUtlMemory<CNavEdge, int>::Grow, operator new, CTriangulatedPolygon::CTriangulatedPolygon, CNavSplice::BlockBackgroundMesh, CNavSplice::ExpandSpliceMesh, __stack_chk_fail, operator delete, _Unwind_Resume
void __fastcall CNavSplice::CalcPerimeter(CNavSplice *const this)
{
  int m_Size; // r15d
  CNavEdge *m_pMemory; // rdx
  CNavArea *m_pArea; // r12
  NavEdgeIndex m_nEdge; // r14
  CNavEdge *v6; // rcx
  CNavEdge v7; // rax
  int v8; // edx
  int v9; // edx
  void *v10; // rsp
  unsigned __int64 v11; // r13
  __int64 v12; // r9
  int v13; // esi
  int v14; // r12d
  CNavEdge *v15; // rax
  int m_nVerts; // edi
  float *v17; // rdx
  float v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  _DWORD *v21; // rdx
  __int64 v22; // rax
  int v23; // xmm3_4
  int v24; // xmm4_4
  int v25; // xmm5_4
  float *v26; // rdx
  float *v27; // rdx
  _DWORD *v28; // rax
  float v29; // xmm0_4
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  float v33; // xmm0_4
  CTriangulatedPolygon *v34; // r14
  CUtlVectorBase<CNavEdge,CUtlMemory<CNavEdge,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-68h]
  CNavEdge v36; // [rsp+10h] [rbp-60h] BYREF
  CNavEdge curEdge; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  if ( this->m_HotEdges.m_Size != 0 )
  {
    m_Size = this->m_PerimeterEdges.m_Size;
    if ( m_Size == 0 )
    {
      m_pMemory = this->m_HotEdges.m_Memory.m_pMemory;
      p_m_Memory = &this->m_PerimeterEdges.m_Memory;
      m_pArea = m_pMemory->m_pArea;
      m_nEdge = m_pMemory->m_nEdge;
      curEdge.m_pArea = m_pMemory->m_pArea;
      curEdge.m_nEdge = m_nEdge;
      while ( 1 )
      {
        v8 = m_Size;
        if ( this->m_PerimeterEdges.m_Memory.m_nAllocationCount == m_Size )
        {
          CUtlMemory<CNavEdge,int>::Grow(p_m_Memory, 1);
          v8 = this->m_PerimeterEdges.m_Size;
        }
        this->m_PerimeterEdges.m_Size = v8 + 1;
        v6 = &this->m_PerimeterEdges.m_Memory.m_pMemory[m_Size];
        if ( v6 != 0 )
          *v6 = curEdge;
        v7 = CNavSplice::NextEdge(this, &curEdge);
        *&v7.m_nEdge = *&v7.m_nEdge;
        v36 = v7;
        curEdge.m_pArea = v7.m_pArea;
        curEdge.m_nEdge = v7.m_nEdge;
        if ( m_pArea == v7.m_pArea && m_nEdge == v7.m_nEdge )
          break;
        m_Size = this->m_PerimeterEdges.m_Size;
      }
      v9 = this->m_PerimeterEdges.m_Size;
      v10 = alloca(((24LL * v9 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      v11 = &v36 & 0xFFFFFFFFFFFFFFEFLL;
      if ( v9 <= 0 )
      {
        v14 = 0;
      }
      else
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        do
        {
          v15 = &this->m_PerimeterEdges.m_Memory.m_pMemory[v12];
          m_nVerts = v15->m_pArea->m_nVerts;
          v17 = (v15->m_pArea + 12 * ((v15->m_nEdge + 1) % m_nVerts));
          v18 = v17[2];
          v19 = v17[3];
          v20 = v17[4];
          v21 = (v15->m_pArea + 12 * (v15->m_nEdge % m_nVerts));
          v22 = 0;
          v23 = v21[2];
          v24 = v21[3];
          v25 = v21[4];
          if ( v14 != 0 )
          {
            v22 = 12LL * v14;
            v26 = (v11 + v22 - 12);
            if ( ((((v18 - *v26) * (v18 - *v26)) + ((v19 - v26[1]) * (v19 - v26[1]))) + ((v20 - v26[2]) * (v20 - v26[2]))) > 1.0 )
            {
              v27 = (v11 + v22);
              ++v14;
              v22 += 12;
              *v27 = v18;
              v27[1] = v19;
              v27[2] = v20;
            }
          }
          v28 = (v11 + v22);
          ++v13;
          ++v14;
          *v28 = v23;
          ++v12;
          v28[1] = v24;
          v28[2] = v25;
        }
        while ( this->m_PerimeterEdges.m_Size > v13 );
        v29 = 0.0;
        v30 = v11 + 12LL * (v14 - 1) + 12;
        v31 = &v36 & 0xFFFFFFFFFFFFFFEFLL;
        do
        {
          v29 = v29 + *(v31 + 8);
          v31 += 12LL;
        }
        while ( v31 != v30 );
        v32 = &v36 & 0xFFFFFFFFFFFFFFEFLL;
        v33 = v29 / v14;
        do
        {
          *(v32 + 8) = v33;
          v32 += 12LL;
        }
        while ( v32 != v30 );
      }
      v34 = operator new(0x268u);
      CTriangulatedPolygon::CTriangulatedPolygon(v34, (&v36 & 0xFFFFFFFFFFFFFFEFLL), 0, v14);
      this->m_pTriangulatedPoly = v34;
      CNavSplice::BlockBackgroundMesh(this);
      CNavSplice::ExpandSpliceMesh(this);
    }
  }
}


// CNavSplice::DrawPerimeter  (line 571, @0x0000000002ee5860, libserver.so)  // inlines: DistToSqr, GetVert, GetVertsCW, LengthSqr, VectorAdd, operator+, operator=, operator[]
// calls: NDebugOverlay::Line, __stack_chk_fail
void __fastcall CNavSplice::DrawPerimeter(CNavSplice *const this)
{
  int m_Size; // eax
  void *v2; // rsp
  float *v3; // rbx
  __int64 v4; // r11
  int v5; // r10d
  int v6; // ecx
  float v7; // xmm2_4
  __int64 v8; // rax
  float *v9; // rdx
  float *v10; // rax
  float *v11; // rax
  CNavEdge *v12; // rax
  int m_nVerts; // esi
  float *v14; // rdx
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  _DWORD *v18; // rdx
  int v19; // xmm7_4
  int v20; // xmm8_4
  int v21; // xmm9_4
  float v22; // xmm1_4
  __int64 v23; // r13
  float v24; // xmm4_4
  vec_t v25; // xmm3_4
  vec_t v26; // xmm0_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  float v29; // [rsp+8h] [rbp-58h]
  float v30; // [rsp+Ch] [rbp-54h]
  Vector origin; // [rsp+10h] [rbp-50h] BYREF
  Vector target; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-28h]

  v33 = __readfsqword(0x28u);
  m_Size = this->m_PerimeterEdges.m_Size;
  if ( m_Size != 0 )
  {
    v2 = alloca(((24LL * m_Size + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    v3 = (&origin & 0xFFFFFFFFFFFFFFEFLL);
    if ( m_Size > 0 )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = 1.0;
      while ( 1 )
      {
        v12 = &this->m_PerimeterEdges.m_Memory.m_pMemory[v4];
        m_nVerts = v12->m_pArea->m_nVerts;
        v14 = (v12->m_pArea + 12 * ((v12->m_nEdge + 1) % m_nVerts));
        v15 = v14[2];
        v16 = v14[3];
        v17 = v14[4];
        v18 = (v12->m_pArea + 12 * (v12->m_nEdge % m_nVerts));
        v19 = v18[2];
        v20 = v18[3];
        v21 = v18[4];
        if ( v6 == 0 )
          break;
        v8 = 3LL * v6;
        v9 = &v3[v8 - 3];
        if ( ((((v15 - *v9) * (v15 - *v9)) + ((v16 - v9[1]) * (v16 - v9[1]))) + ((v17 - v9[2]) * (v17 - v9[2]))) > 1.0 )
          goto LABEL_6;
LABEL_7:
        v11 = &v3[v8];
        ++v5;
        ++v6;
        *v11 = v19;
        ++v4;
        *(v11 + 1) = v20;
        *(v11 + 2) = v21;
        if ( this->m_PerimeterEdges.m_Size <= v5 )
        {
          v22 = 0.0;
          v23 = &v3[3 * (v6 - 2) + 3];
          do
          {
            v24 = v3[3];
            v25 = v3[4] + v22;
            v26 = v3[5] + v7;
            v3 += 3;
            target.y = v25;
            target.z = v26;
            target.x = v24 + v22;
            v27 = *(v3 - 2);
            v29 = v7;
            v28 = *(v3 - 3);
            v30 = v22;
            origin.z = v7 + *(v3 - 1);
            origin.y = v27 + v22;
            origin.x = v28 + v22;
            NDebugOverlay::Line(&origin, &target, 0xC8u, 0xC8u, 0xC8u, 0, v22);
            v22 = v30;
            v7 = v29;
          }
          while ( v3 != v23 );
          return;
        }
      }
      v8 = 0;
LABEL_6:
      v10 = &v3[v8];
      ++v6;
      *v10 = v15;
      v10[1] = v16;
      v10[2] = v17;
      v8 = 3LL * v6;
      goto LABEL_7;
    }
  }
}


// CNavSplice::DrawHotEdges  (line 605, @0x0000000002ee5aa0, libserver.so)  // inlines: DrawArea, GetVert, GetVertsCW, VectorAdd, operator+, operator[]
// calls: NDebugOverlay::Line
void __fastcall CNavSplice::DrawHotEdges(CNavSplice *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  float v4; // xmm1_4
  CNavEdge *v5; // rax
  CNavArea *m_pArea; // r14
  NavEdgeIndex m_nEdge; // r15
  int m_nVerts; // ecx
  float *v9; // rdx
  float v10; // xmm2_4
  float v11; // xmm0_4
  float *v12; // rax
  float v13; // xmm6_4
  float v14; // xmm5_4
  vec_t v15; // xmm4_4
  float v16; // [rsp+1Ch] [rbp-54h]
  float v17; // [rsp+1Ch] [rbp-54h]
  Vector v18; // [rsp+20h] [rbp-50h] BYREF
  Vector v19; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_HotEdges.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    v4 = 0.0;
    do
    {
      v5 = &this->m_HotEdges.m_Memory.m_pMemory[v2];
      m_pArea = v5->m_pArea;
      m_nEdge = v5->m_nEdge;
      if ( INavDrawArea::ms_pInst != 0 )
      {
        v16 = v4;
        (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 3))(INavDrawArea::ms_pInst, m_pArea, 39, -1.0);
        v4 = v16;
      }
      m_nVerts = m_pArea->m_nVerts;
      ++v3;
      v17 = v4;
      ++v2;
      v9 = (m_pArea + 12 * ((m_nEdge + 1) % m_nVerts));
      v10 = v9[3];
      v11 = v9[4];
      v12 = (m_pArea + 12 * (m_nEdge % m_nVerts));
      v13 = v12[2];
      v18.x = v9[2] + v4;
      v14 = v12[3];
      v18.y = v10 + v4;
      v15 = v12[4] + 2.0;
      v18.z = v11 + 2.0;
      v19.z = v15;
      v19.y = v14 + v4;
      v19.x = v13 + v4;
      NDebugOverlay::Line(&v18, &v19, 0xC8u, 0xC8u, 0xC8u, 1, v4);
      v4 = v17;
    }
    while ( this->m_HotEdges.m_Size > v3 );
  }
}


