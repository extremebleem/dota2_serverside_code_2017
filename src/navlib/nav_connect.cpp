
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_connect.cpp  (line 0, @0x0000000001a6d5a0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_nav_connect_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CNavNeighborIterator::Next  (line 15, @0x00000000031e7da0, libserver.so)  // inlines: Count, GetElevatorAreas, GetLadders
// callers: NavAreaBuildPath
bool __fastcall CNavNeighborIterator::Next(CNavNeighborIterator *const this)
{
  CNavNeighborIterator::SearchWhere m_SearchWhere; // eax
  const CNavConnectVector *m_pFloorList; // rdx
  int v3; // eax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  CNavArea *m_rNavArea; // rdx
  NavEdgeIndex v6; // al
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v7; // rdx
  int v8; // ecx
  CNavArea *m_pArea; // rax
  CNavArea *v10; // rdx
  int v11; // eax
  NavLaddersAndElevators_t *v12; // rdx
  bool result; // al
  NavLaddersAndElevators_t *v14; // rdx
  int v15; // ecx
  __int64 m_nSearchIndex; // r8
  bool v17; // cc
  int m_nLadderTopDir; // ecx
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  int v20; // edx
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v21; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v22; // rax
  CNavLadder *pLadder; // rax
  CNavArea *m_pBottomArea; // rax
  int v25; // r8d
  CNavLadder *v26; // rdx
  int v27; // ecx
  CNavArea *m_pTopLeftArea; // rdx

  m_SearchWhere = this->m_SearchWhere;
  do
  {
    if ( m_SearchWhere == CNavNeighborIterator::SearchWhere::SEARCH_LADDERS )
      goto LABEL_18;
    if ( m_SearchWhere == CNavNeighborIterator::SearchWhere::SEARCH_ELEVATORS )
      goto LABEL_14;
  }
  while ( m_SearchWhere != CNavNeighborIterator::SearchWhere::SEARCH_FLOOR );
  while ( 1 )
  {
    m_pFloorList = this->m_pFloorList;
    v3 = this->m_nSearchIndex + 1;
    this->m_nSearchIndex = v3;
    m_pData = m_pFloorList->m_pData;
    if ( m_pData != 0 )
    {
      if ( v3 < m_pData->m_Size )
        goto LABEL_30;
    }
    else if ( v3 < 0 )
    {
LABEL_30:
      v22 = m_pData + 2 * v3;
      this->m_Info.pArea = v22->m_Elements[0].0;
      this->m_Info.how = this->m_nEdgeIndex;
      this->m_Info.nInEdge = v22->m_Elements[0].m_nBackEdge;
      return 1;
    }
    m_rNavArea = this->m_rNavArea;
    v6 = this->m_nEdgeIndex + 1;
    this->m_nEdgeIndex = v6;
    if ( v6 >= m_rNavArea->m_nVerts )
      break;
    this->m_nSearchIndex = -1;
    this->m_pFloorList = &m_rNavArea->m_connect[v6];
  }
  if ( m_rNavArea->m_pLaddersAndElevators == 0 )
    return 0;
  this->m_nSearchIndex = -1;
  this->m_SearchWhere = CNavNeighborIterator::SearchWhere::SEARCH_LADDERS;
  this->m_bLadderUp = 1;
  this->m_nLadderTopDir = 3;
LABEL_18:
  result = this->m_bLadderUp;
  if ( !result )
  {
LABEL_25:
    m_pLaddersAndElevators = this->m_rNavArea->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators == 0 )
      goto LABEL_28;
    v20 = this->m_nSearchIndex + 1;
    this->m_nSearchIndex = v20;
    v21 = m_pLaddersAndElevators->m_ladders[1].m_pData;
    if ( v21 != 0 )
    {
      if ( v21->m_Size <= v20 )
        goto LABEL_28;
    }
    else if ( v20 >= 0 )
    {
LABEL_28:
      this->m_nSearchIndex = -1;
      this->m_SearchWhere = CNavNeighborIterator::SearchWhere::SEARCH_ELEVATORS;
LABEL_14:
      while ( 1 )
      {
        v10 = this->m_rNavArea;
        v11 = this->m_nSearchIndex + 1;
        this->m_nSearchIndex = v11;
        v12 = v10->m_pLaddersAndElevators;
        if ( v12 == 0 || v12->m_pElevatorEntity == 0 )
          break;
        v7 = v12->m_elevatorAreas.m_pData;
        v8 = v7 != 0 ? v7->m_Size : 0;
        if ( v11 >= v8 )
          break;
        m_pArea = v7->m_Elements[v11].m_pArea;
        this->m_Info.nInEdge = -1;
        this->m_Info.pLadder = 0;
        this->m_Info.how = NavTraverseType::GO_ELEVATOR;
        this->m_Info.pArea = m_pArea;
      }
      return 0;
    }
    pLadder = v21->m_Elements[v20].pLadder;
    this->m_Info.pLadder = pLadder;
    m_pBottomArea = pLadder->m_pBottomArea;
    this->m_Info.how = NavTraverseType::GO_LADDER_DOWN;
    this->m_Info.nInEdge = -1;
    this->m_Info.pArea = m_pBottomArea;
    return 1;
  }
  while ( 1 )
  {
    v14 = this->m_rNavArea->m_pLaddersAndElevators;
    if ( v14 != 0 )
    {
      v15 = -1;
      m_nSearchIndex = this->m_nSearchIndex;
      if ( v14->m_ladders[0].m_pData != 0 )
        v15 = v14->m_ladders[0].m_pData->m_Size - 1;
      v17 = m_nSearchIndex < v15;
      m_nLadderTopDir = this->m_nLadderTopDir;
      if ( v17 )
        break;
      if ( m_nLadderTopDir <= 2 )
        goto LABEL_38;
    }
    this->m_bLadderUp = 0;
    result = this->m_bLadderUp;
    this->m_nSearchIndex = -1;
    if ( !result )
      goto LABEL_25;
  }
  if ( m_nLadderTopDir > 2 )
  {
    v25 = m_nSearchIndex + 1;
    this->m_nLadderTopDir = 0;
    this->m_nSearchIndex = v25;
    v26 = v14->m_ladders[0].m_pData->m_Elements[v25].pLadder;
    this->m_Info.pLadder = v26;
LABEL_36:
    this->m_Info.pArea = v26->m_pTopForwardArea;
    goto LABEL_37;
  }
LABEL_38:
  v27 = m_nLadderTopDir + 1;
  this->m_nLadderTopDir = v27;
  v26 = v14->m_ladders[0].m_pData->m_Elements[m_nSearchIndex].pLadder;
  this->m_Info.pLadder = v26;
  if ( v27 == 0 )
    goto LABEL_36;
  if ( v27 == 1 )
    m_pTopLeftArea = v26->m_pTopLeftArea;
  else
    m_pTopLeftArea = v26->m_pTopRightArea;
  this->m_Info.pArea = m_pTopLeftArea;
LABEL_37:
  this->m_Info.how = NavTraverseType::GO_LADDER_UP;
  this->m_Info.nInEdge = -1;
  return result;
}


// CNavAdjacencyList::CollectAdjacentAreas  (line 157, @0x00000000031e8000, libserver.so)  // inlines: Begin, CNavConnectOutIterator, Count, GetArea, GetBackEdgeIndex, GetConnect, GetLadders, Indices, Next
// callers: CPath::ComputePathWithOpenGoalCore
void __fastcall CNavAdjacencyList::CollectAdjacentAreas(CNavAdjacencyList *const this, CNavArea *pArea)
{
  int m_nVerts; // r9d
  int i; // eax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int v5; // r8d
  int m_nAdjAreaCount; // r9d
  CNavConnectVector *v7; // rdx
  __int64 v8; // r11
  char *v9; // rbx
  int v10; // r12d
  __int64 v11; // r12
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v12; // rcx
  int v13; // edx
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rcx
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v15; // rax
  int m_Size; // r10d
  int v17; // edx
  _QWORD *p_x; // rax
  __int64 v19; // r9
  int v20; // r8d
  char *v21; // r11
  __int64 v22; // r9
  int v23; // r8d
  char *v24; // r11
  __int64 v25; // r9
  int v26; // r8d
  char *v27; // r11
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v28; // rdx
  int v29; // r10d
  int v30; // eax
  NavLadderConnect v31; // rsi
  int v32; // edx
  CNavArea *m_pBottomArea; // r9
  NavLadderConnect *v34; // r8

  this->m_nAdjAreaCount = 0;
  m_nVerts = pArea->m_nVerts;
  if ( m_nVerts != 0 )
  {
    for ( i = 0; i != m_nVerts; ++i )
    {
      m_pData = pArea->m_connect[i].m_pData;
      if ( m_pData != 0 && m_pData->m_Size > 0 )
      {
        v5 = 0;
        goto LABEL_7;
      }
    }
    v5 = -1;
  }
  else
  {
    v5 = -1;
    i = 0;
  }
LABEL_7:
  while ( m_nVerts != i )
  {
LABEL_8:
    m_nAdjAreaCount = this->m_nAdjAreaCount;
    if ( this->m_nAdjAreaCount > 63 )
      break;
    v7 = &pArea->m_connect[i];
    v8 = v5;
    v9 = this + 24 * m_nAdjAreaCount;
    *(v9 + 1) = v7->m_pData->m_Elements[v8].m_pArea;
    v10 = -1;
    if ( pArea->m_nVerts != i )
      v10 = i;
    *(v9 + 6) = v10;
    v11 = 0;
    if ( pArea->m_nVerts != i )
      v11 = &v7->m_pData->m_Elements[v8];
    this->m_AdjAreas[m_nAdjAreaCount].nInEdge = *(v11 + 8);
    *(v9 + 2) = 0;
    this->m_nAdjAreaCount = m_nAdjAreaCount + 1;
    m_nVerts = pArea->m_nVerts;
    if ( m_nVerts != i )
    {
      while ( 1 )
      {
        v12 = v7->m_pData;
        v13 = -1;
        if ( v12 != 0 )
          v13 = v12->m_Size - 1;
        if ( v13 > v5 )
          break;
        if ( m_nVerts == ++i )
        {
          v5 = -1;
          goto LABEL_7;
        }
        v5 = -1;
        v7 = &pArea->m_connect[i];
      }
      ++v5;
      if ( m_nVerts != i )
        goto LABEL_8;
      break;
    }
  }
  m_pLaddersAndElevators = pArea->m_pLaddersAndElevators;
  if ( m_pLaddersAndElevators != 0 )
  {
    v15 = m_pLaddersAndElevators->m_ladders[0].m_pData;
    if ( m_pLaddersAndElevators->m_ladders[0].m_pData == 0 )
      goto LABEL_37;
    m_Size = v15->m_Size;
    if ( v15->m_Size == 0 )
      goto LABEL_37;
    v17 = 0;
    while ( 1 )
    {
      p_x = &v15->m_Elements[v17].pLadder->m_vTop.x;
      v19 = p_x[4];
      if ( v19 != 0 )
      {
        v20 = this->m_nAdjAreaCount;
        if ( this->m_nAdjAreaCount <= 63 )
        {
          v21 = this + 24 * v20;
          *(v21 + 1) = v19;
          this->m_AdjAreas[this->m_nAdjAreaCount].how = NavTraverseType::GO_LADDER_UP;
          v21[28] = -1;
          *(v21 + 2) = p_x;
          this->m_nAdjAreaCount = v20 + 1;
        }
      }
      v22 = p_x[5];
      if ( v22 != 0 )
      {
        v23 = this->m_nAdjAreaCount;
        if ( this->m_nAdjAreaCount <= 63 )
        {
          v24 = this + 24 * v23;
          *(v24 + 1) = v22;
          *(v24 + 6) = 5;
          v24[28] = -1;
          *(v24 + 2) = p_x;
          this->m_nAdjAreaCount = v23 + 1;
        }
      }
      v25 = p_x[6];
      if ( v25 != 0 )
      {
        v26 = this->m_nAdjAreaCount;
        if ( this->m_nAdjAreaCount <= 63 )
        {
          v27 = this + 24 * v26;
          *(v27 + 1) = v25;
          *(v27 + 6) = 5;
          v27[28] = -1;
          *(v27 + 2) = p_x;
          this->m_nAdjAreaCount = v26 + 1;
        }
      }
      if ( ++v17 == m_Size )
        break;
      v15 = m_pLaddersAndElevators->m_ladders[0].m_pData;
    }
    m_pLaddersAndElevators = pArea->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators != 0 )
    {
LABEL_37:
      v28 = m_pLaddersAndElevators->m_ladders[1].m_pData;
      if ( v28 != 0 )
      {
        v29 = v28->m_Size;
        if ( v28->m_Size != 0 )
        {
          v30 = 0;
          while ( 1 )
          {
            v31 = v28->m_Elements[v30];
            v32 = this->m_nAdjAreaCount;
            if ( this->m_nAdjAreaCount <= 63 )
            {
              m_pBottomArea = v31.pLadder->m_pBottomArea;
              if ( m_pBottomArea != 0 )
              {
                v34 = (this + 24 * v32);
                v34[1].pLadder = m_pBottomArea;
                v34[3].m_nId = 6;
                BYTE4(v34[3].pLadder) = -1;
                v34[2] = v31;
                this->m_nAdjAreaCount = v32 + 1;
              }
            }
            if ( ++v30 == v29 )
              break;
            v28 = m_pLaddersAndElevators->m_ladders[1].m_pData;
          }
        }
      }
    }
  }
}


