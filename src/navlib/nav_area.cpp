// Reconstructed from DWARF by pahole; not original source.

// src/navlib/nav_area.cpp:133
class AreaDestroyNotification {
private:

	const CNavArea & m_Area;  // +0x0
	AreaDestroyNotification(CNavArea &);
	bool operator()(CNavLadder *);
	bool operator()(CNavArea *);

	// sizeof = 8
};

// src/navlib/nav_area.cpp:534
class LadderConnectionReplacement {
private:

	LadderConnectionReplacement(CNavArea *, CNavArea *);
	bool operator()(CNavLadder *);

	// sizeof = 16
};

// src/navlib/nav_area.cpp:648
class SplitNotification {
private:

	const CUtlVectorFixed<CNavArea*, 3ul> & m_rNewAreas;  // +0x8
	SplitNotification(CNavArea *, CUtlVectorFixed<CNavArea*, 3ul> &);
	bool operator()(CNavLadder *);

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_nav_area.cpp  (line 0, @0x0000000001a6d500, libserver.so)  // inlines: CNavOpenList, CUtlMemory, CUtlPriorityQueue, CUtlVector, CUtlVectorBase, Color, SetColor, __static_initialization_and_destruction_0
// calls: operator new, CMemAllocSystemInitialize, operator delete, _Unwind_Resume
// globals: UNSPECIFIED_LOGGING_COLOR, CNavOpenList::PriorityQueueLessFunc(CNavOpenListElement const&,CNavOpenListElement const&), CNavArea::ms_pOpenList
void __cdecl GLOBAL__sub_I_nav_area_cpp()
{
  CNavOpenList *v0; // rax
  CNavOpenList *v1; // rbx
  __int64 v2; // rdi

  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  v0 = operator new(0x20u);
  v0->m_PriorityQueue.m_heap.m_Size = 0;
  v1 = v0;
  v0->m_PriorityQueue.m_heap.m_Memory.m_pMemory = 0;
  v0->m_PriorityQueue.m_heap.m_Memory.m_nAllocationCount = 4096;
  v0->m_PriorityQueue.m_heap.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize(v2);
  v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                    g_pMemAlloc,
                                                    32LL * v1->m_PriorityQueue.m_heap.m_Memory.m_nAllocationCount);
  v1->m_PriorityQueue.m_LessFunc = CNavOpenList::PriorityQueueLessFunc;
  CNavArea::ms_pOpenList = v1;
}


// CNavArea::CNavArea  (line 37, @0x00000000031e4460, libserver.so)  // inlines: CNavAttribute, CNavConnectVector, CNavFlags, CUtlVectorUltraConservative, ConnectivityChanged, Count, Free, RemoveAll, ~CNavConnectVector, ~CUtlVectorUltraConservative
// calls: CNavPoly::CNavPoly, CNavArea::UpdateFlagBottleneck, _Unwind_Resume
// callers: CNavAreaExtended::CNavAreaExtended, CNavMesh::CreateArea
// globals: CNavArea::ms_nNextID
void __fastcall CNavArea::CNavArea(CNavArea *const this, CNavMesh *const rNavMesh)
{
  uint32 v3; // eax

  CNavPoly::CNavPoly(this, rNavMesh);
  this->m_nOpenListHeapIndex = -1;
  this->_vptr_CNavPoly = &off_47CE130;
  v3 = CNavArea::ms_nNextID;
  this->m_bShouldBeDestroyed = 0;
  *(this + 328) &= 0xF0u;
  this->m_pNextHash = 0;
  this->m_nIndex = -1;
  this->m_AreaId = v3;
  this->m_AreaAttributes.m_Flags = 0;
  this->m_AttributeDynamicFlags = 0;
  this->m_bIsInGrid = 0;
  this->m_nMarker = 0;
  this->m_connect[0].m_pData = 0;
  this->m_connect[1].m_pData = 0;
  this->m_connect[2].m_pData = 0;
  this->m_connect[3].m_pData = 0;
  this->m_incomingConnect[0].m_pData = 0;
  this->m_incomingConnect[1].m_pData = 0;
  this->m_incomingConnect[2].m_pData = 0;
  this->m_incomingConnect[3].m_pData = 0;
  this->m_pLaddersAndElevators = 0;
  this->m_isBlockedFlags = 0;
  this->m_nAvoidanceObstacleHeight = 0;
  this->m_pPathParent = 0;
  this->m_nPathInEdge = -1;
  CNavArea::ms_nNextID = v3 + 1;
  CNavArea::UpdateFlagBottleneck(this);
}


// CNavArea::SetAreaIndex  (line 67, @0x00000000031e2c70, libserver.so)  // inlines: ForAllAreas<CNavArea::SetAreaIndex(int)::AreaIndexChangeNotification>, operator()
// callers: CNavMesh::DestroyArea, CNavMesh::CreateArea
// globals: CNavArea::ms_bIsReset
void __fastcall CNavArea::SetAreaIndex(CNavArea *const this, int nIndex)
{
  unsigned int m_nIndex; // r13d
  CNavMesh *m_rNavMesh; // r15
  int m_Size; // eax
  unsigned __int64 v7; // rbx
  CNavArea *v8; // rdi
  __int64 v9; // [rsp+8h] [rbp-38h]

  m_nIndex = this->m_nIndex;
  if ( m_nIndex != nIndex )
  {
    if ( !CNavArea::ms_bIsReset && m_nIndex != -1 )
    {
      m_rNavMesh = this->m_rNavMesh;
      m_Size = m_rNavMesh->m_NavAreas.m_Size;
      if ( m_Size != 0 )
      {
        v7 = 0;
        v9 = 8LL * (m_Size - 1) + 8;
        do
        {
          v8 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v7 / 8];
          v7 += 8LL;
          (*(v8->_vptr_CNavPoly + 21))(v8, m_nIndex, nIndex);
        }
        while ( v7 != v9 );
      }
    }
    this->m_nIndex = nIndex;
  }
}


// CNavArea::RemapIndices  (line 108, @0x00000000031e2770, libserver.so)
void __fastcall CNavArea::RemapIndices(
        CNavArea *const this,
        const CUtlVector<int,CUtlMemory<int,int> > *const indexRemapTable)
{
  __int64 m_nIndex; // rax

  m_nIndex = this->m_nIndex;
  if ( m_nIndex < indexRemapTable->m_Size )
    this->m_nIndex = indexRemapTable->m_Memory.m_pMemory[m_nIndex];
}


// CNavArea::IsValidArea  (line 120, @0x00000000031e2d00, libserver.so)
// callers: CNavEditor::RemoveInvalid, CNavGeneratorAAQuad::MergeGeneratedAreas, RemoveInvalidNavAreasFromVector<CNavArea>, CNavMesh::RemoveInvalidNavAreas, CNavMesh::PerformDeferredDeletion
bool __fastcall CNavArea::IsValidArea(const CNavArea *const this)
{
  return this != 0 && this->m_nIndex != -1;
}


// CNavArea::~CNavArea  (line 161, @0x00000000031e29b0, libserver.so)  // inlines: Count, ForAllAreas<AreaDestroyNotification>, ForAllLadders<AreaDestroyNotification>, Free, OnDestroyNotify, RemoveAll, operator(), ~CNavConnectVector, ~CNavLadderConnectVector, ~CUtlVectorUltraConservative, ~NavLaddersAndElevators_t
// calls: CNavLadder::Disconnect, operator delete
// callers: CNavAreaExtended::~CNavAreaExtended, CNavArea::~CNavArea
// globals: CNavArea::ms_bIsReset
void __fastcall CNavArea::~CNavArea(CNavArea *const this)
{
  CNavMesh *m_rNavMesh; // r12
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  CNavArea *v6; // rdi
  __int64 v7; // rbx
  INavEntityInterface *m_pEntityInterface; // rdi
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // r15
  CNavLadderConnectVector *v10; // r13
  IHandleEntity **v11; // rbx
  CNavConnectVector *v12; // r13
  NavLaddersAndElevators_t **v13; // rbx
  CNavConnectVector *v14; // r15
  CNavConnectVector *v15; // r15
  CNavConnectVector *v16; // r14
  CNavConnectVector *v17; // rbx
  CNavConnectVector *m_incomingConnect; // r13
  NavLaddersAndElevators_t **v19; // rbx
  CNavConnectVector *v20; // r15
  CNavConnectVector *v21; // r15
  CNavConnectVector *m_connect; // r14
  CNavConnectVector *v23; // rbx
  IHandleEntity **p_m_pElevatorEntity; // [rsp+8h] [rbp-38h]
  NavLaddersAndElevators_t **v25; // [rsp+8h] [rbp-38h]
  NavLaddersAndElevators_t **p_m_pLaddersAndElevators; // [rsp+8h] [rbp-38h]

  this->_vptr_CNavPoly = &off_47CE130;
  if ( CNavArea::ms_bIsReset || this->m_nIndex == -1 )
  {
    m_incomingConnect = this->m_incomingConnect;
    p_m_pLaddersAndElevators = &this->m_pLaddersAndElevators;
    v19 = &this->m_pLaddersAndElevators;
    v20 = &this->m_incomingConnect[3];
    do
    {
      if ( *(&v20->m_pData + v19 - p_m_pLaddersAndElevators) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        *(&v20->m_pData + v19 - p_m_pLaddersAndElevators) = 0;
      }
      --v19;
    }
    while ( m_incomingConnect != v19 );
    v21 = &this->m_connect[3];
    m_connect = this->m_connect;
    v23 = m_incomingConnect;
    do
    {
      if ( v23[-1].m_pData != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        *(&v21->m_pData + v23 - m_incomingConnect) = 0;
      }
      --v23;
    }
    while ( m_connect != v23 );
  }
  else
  {
    m_rNavMesh = this->m_rNavMesh;
    m_Size = m_rNavMesh->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v4 = 0;
      v5 = 8LL * (m_Size - 1) + 8;
      do
      {
        v6 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v4 / 8];
        if ( this != v6 )
          (*(v6->_vptr_CNavPoly + 19))(v6, this);
        v4 += 8LL;
      }
      while ( v4 != v5 );
      m_rNavMesh = this->m_rNavMesh;
    }
    if ( m_rNavMesh->m_Ladders.m_Size > 0 )
    {
      v7 = 0;
      do
        CNavLadder::Disconnect(m_rNavMesh->m_Ladders.m_Memory.m_pMemory[v7++], this);
      while ( m_rNavMesh->m_Ladders.m_Size > v7 );
      m_rNavMesh = this->m_rNavMesh;
    }
    (*(m_rNavMesh->_vptr_CNavMesh + 29))(m_rNavMesh, this);
    m_pEntityInterface = this->m_rNavMesh->m_pEntityInterface;
    if ( m_pEntityInterface != 0 )
      (*(m_pEntityInterface->_vptr_INavEntityInterface + 1))(m_pEntityInterface, this);
    m_pLaddersAndElevators = this->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators != 0 )
    {
      if ( m_pLaddersAndElevators->m_elevatorAreas.m_pData != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_pLaddersAndElevators->m_elevatorAreas.m_pData = 0;
      }
      p_m_pElevatorEntity = &m_pLaddersAndElevators->m_pElevatorEntity;
      v10 = &m_pLaddersAndElevators->m_ladders[1];
      v11 = &m_pLaddersAndElevators->m_pElevatorEntity;
      do
      {
        if ( *(&v10->m_pData + v11 - p_m_pElevatorEntity) != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          *(&v10->m_pData + v11 - p_m_pElevatorEntity) = 0;
        }
        --v11;
      }
      while ( m_pLaddersAndElevators != v11 );
      operator delete(m_pLaddersAndElevators);
    }
    v12 = this->m_incomingConnect;
    v25 = &this->m_pLaddersAndElevators;
    v13 = &this->m_pLaddersAndElevators;
    v14 = &this->m_incomingConnect[3];
    do
    {
      if ( *(&v14->m_pData + v13 - v25) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        *(&v14->m_pData + v13 - v25) = 0;
      }
      --v13;
    }
    while ( v12 != v13 );
    v15 = &this->m_connect[3];
    v16 = this->m_connect;
    v17 = v12;
    do
    {
      if ( v17[-1].m_pData != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        *(&v15->m_pData + v17 - v12) = 0;
      }
      --v17;
    }
    while ( v16 != v17 );
  }
}


// CNavArea::~CNavArea  (line 161, @0x00000000031e2c50, libserver.so)
// calls: CNavArea::~CNavArea, operator delete
void __fastcall CNavArea::~CNavArea(CNavArea *const this)
{
  CNavArea::~CNavArea(this);
  operator delete(this);
}


// CNavArea::OnDestroyNotify  (line 195, @0x00000000031e4270, libserver.so)  // inlines: ConnectivityChanged, Count, Find, FindAndRemove, Free, Remove, ShiftElementsLeft, V_memmove, memmove
// calls: CNavArea::UpdateFlagBottleneck, memmove
void __fastcall CNavArea::OnDestroyNotify(CNavArea *const this, CNavArea *pDeadArea)
{
  int v2; // eax
  int v3; // r13d
  __int64 v6; // r15
  CNavConnectVector *v7; // r14
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdi
  int m_Size; // ecx
  CNavConnect *v10; // rdx
  int v11; // eax
  CNavConnectVector *v12; // r14
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v13; // r8
  int v14; // ecx
  CNavConnect *v15; // rdx
  int v16; // eax

  v2 = 0;
  v3 = 0;
  if ( this->m_nVerts > 0 )
  {
    while ( 1 )
    {
      v6 = v2;
      v7 = &this->m_connect[v2];
      m_pData = v7->m_pData;
      if ( v7->m_pData != 0 )
      {
        m_Size = m_pData->m_Size;
        if ( m_pData->m_Size > 0 )
        {
          if ( pDeadArea == m_pData->m_Elements[0].m_pArea )
          {
            v11 = 0;
LABEL_17:
            if ( m_Size - v11 - 1 > 0 )
            {
              memmove(&m_pData->m_Elements[v11], &m_pData->m_Elements[v11 + 1], 16LL * (m_Size - v11 - 1));
              m_pData = v7->m_pData;
              m_Size = v7->m_pData->m_Size;
            }
            m_pData->m_Size = m_Size - 1;
            if ( v7->m_pData->m_Size == 0 )
            {
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
              v7->m_pData = 0;
            }
          }
          else
          {
            v10 = &m_pData->m_Elements[1];
            v11 = 0;
            while ( ++v11 != m_Size )
            {
              ++v10;
              if ( pDeadArea == v10[-1].m_pArea )
              {
                if ( v11 == -1 )
                  break;
                goto LABEL_17;
              }
            }
          }
        }
      }
      v12 = &this->m_incomingConnect[v6];
      v13 = v12->m_pData;
      if ( v12->m_pData == 0 )
        goto LABEL_14;
      v14 = v13->m_Size;
      if ( v13->m_Size <= 0 )
        goto LABEL_14;
      if ( pDeadArea == v13->m_Elements[0].m_pArea )
      {
        v16 = 0;
LABEL_22:
        if ( v14 - v16 - 1 > 0 )
        {
          memmove(&v13->m_Elements[v16], &v13->m_Elements[v16 + 1], 16LL * (v14 - v16 - 1));
          v13 = v12->m_pData;
          v14 = v12->m_pData->m_Size;
        }
        v13->m_Size = v14 - 1;
        if ( v12->m_pData->m_Size != 0 )
          goto LABEL_14;
        ++v3;
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        v12->m_pData = 0;
        v2 = v3;
        if ( v3 >= this->m_nVerts )
          break;
      }
      else
      {
        v15 = &v13->m_Elements[1];
        v16 = 0;
        while ( ++v16 != v14 )
        {
          ++v15;
          if ( pDeadArea == v15[-1].m_pArea )
          {
            if ( v16 == -1 )
              break;
            goto LABEL_22;
          }
        }
LABEL_14:
        v2 = ++v3;
        if ( v3 >= this->m_nVerts )
          break;
      }
    }
  }
  CNavArea::UpdateFlagBottleneck(this);
}


// RemoveInvalidNavAreasFromConnectVector  (line 217, @0x00000000031e2d20, libserver.so)  // inlines: Count, FastRemove, Free, IsValidArea, memcpy
// callers: CNavArea::RemoveInvalidNavAreas
void __fastcall RemoveInvalidNavAreasFromConnectVector(CNavConnectVector *const areas)
{
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  int v3; // ebx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v4; // rax
  CNavArea *m_pArea; // rdx
  __int64 m_Size; // rdx
  int v7; // edx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v8; // rdx

  m_pData = areas->m_pData;
  if ( areas->m_pData != 0 )
  {
    v3 = m_pData->m_Size - 1;
    if ( v3 >= 0 )
    {
      while ( 1 )
      {
        v4 = m_pData + 2 * v3;
        m_pArea = v4->m_Elements[0].m_pArea;
        if ( m_pArea != 0 && m_pArea->m_nIndex != -1 )
          goto LABEL_4;
        if ( m_pData != 0 )
        {
          m_Size = m_pData->m_Size;
          if ( m_Size > 0 )
          {
            v7 = m_Size - 1;
            if ( v3 != v7 )
            {
              v8 = m_pData + 2 * v7;
              v4->m_Elements[0].0 = v8->m_Elements[0].0;
              *&v4->m_Elements[0].m_nBackEdge = *&v8->m_Elements[0].m_nBackEdge;
              m_pData = areas->m_pData;
              v7 = areas->m_pData->m_Size - 1;
            }
            m_pData->m_Size = v7;
            m_pData = areas->m_pData;
            m_Size = *areas->m_pData;
          }
        }
        else
        {
          m_Size = loc_0;
        }
        if ( m_Size != 0 )
        {
LABEL_4:
          if ( --v3 == -1 )
            return;
        }
        else
        {
          --v3;
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pData, m_Size, v4->m_Elements);
          areas->m_pData = 0;
          if ( v3 == -1 )
            return;
        }
        m_pData = areas->m_pData;
      }
    }
  }
}


// CNavArea::RemoveInvalidNavAreas  (line 231, @0x00000000031e2e00, libserver.so)
// calls: RemoveInvalidNavAreasFromConnectVector
void __fastcall CNavArea::RemoveInvalidNavAreas(CNavArea *const this)
{
  int v1; // eax
  int i; // r12d
  __int64 v4; // r13

  v1 = 0;
  for ( i = 0; i < this->m_nVerts; v1 = i )
  {
    v4 = v1;
    ++i;
    RemoveInvalidNavAreasFromConnectVector(&this->m_connect[v1]);
    RemoveInvalidNavAreasFromConnectVector(&this->m_incomingConnect[v4]);
  }
}


// CNavArea::GetTotalAdjacentCount  (line 242, @0x00000000031e2e60, libserver.so)  // inlines: Count
// callers: CNavEditor::DrawEditMode, CNavEditor::CommandNavMark
int __fastcall CNavArea::GetTotalAdjacentCount(const CNavArea *const this)
{
  int m_nVerts; // r8d
  __int64 v2; // rcx
  int v3; // edx
  int result; // eax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v5; // rcx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  m_nVerts = this->m_nVerts;
  if ( m_nVerts > 0 )
  {
    v2 = 0;
    v3 = 0;
    result = 0;
    while ( 1 )
    {
      m_pData = this->m_connect[v2].m_pData;
      if ( m_pData != 0 )
      {
        v5 = this->m_incomingConnect[v2].m_pData;
        result += m_pData->m_Size;
        if ( v5 != 0 )
          goto LABEL_4;
LABEL_7:
        v2 = ++v3;
        if ( v3 >= m_nVerts )
          return result;
      }
      else
      {
        v5 = this->m_incomingConnect[v2].m_pData;
        if ( v5 == 0 )
          goto LABEL_7;
LABEL_4:
        ++v3;
        result += v5->m_Size;
        v2 = v3;
        if ( v3 >= m_nVerts )
          return result;
      }
    }
  }
  return 0;
}


// CNavArea::GetBackEdgeIndex  (line 254, @0x00000000031e2ee0, libserver.so)  // inlines: Clamp<float>, Dot, DotProduct, FastSqrt, GetVertIndexCCWForEdge, GetVertIndexCWForEdge, GetVertXY, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*=, operator-, operator-=
// calls: CNavPoly::GetEdgeNormalXY
// callers: CNavArea::GetEdgePairWithMaximumOverlap, CNavMesh::GetNavAreaWithLargestPortal
NavEdgeIndex __fastcall CNavArea::GetBackEdgeIndex(
        const CNavArea *const this,
        const CNavArea *const rArea,
        NavEdgeIndex nEdge,
        float *overlap)
{
  float *v5; // rax
  float *v6; // rax
  float v7; // xmm8_4
  float v8; // xmm2_4
  float v9; // xmm7_4
  int m_nVerts; // esi
  vec_t x; // xmm3_4
  vec_t y; // xmm4_4
  float v13; // xmm6_4
  const CNavArea *v14; // rax
  const CNavArea *v15; // rdx
  const CNavArea *v17; // r14
  int v18; // r15d
  vec_t *p_y; // r13
  float v20; // xmm6_4
  float v21; // xmm1_4
  float *v22; // rax
  float v23; // xmm5_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // [rsp-14h] [rbp-8Ch]
  float v28; // [rsp-10h] [rbp-88h]
  float v29; // [rsp-Ch] [rbp-84h]
  float overlapa; // [rsp+0h] [rbp-78h]
  NavEdgeIndex overlap_7; // [rsp+7h] [rbp-71h]
  float v33; // [rsp+Ch] [rbp-6Ch]
  float v34; // [rsp+10h] [rbp-68h]
  float v35; // [rsp+14h] [rbp-64h]
  float v36; // [rsp+18h] [rbp-60h]
  float v37; // [rsp+18h] [rbp-60h]
  float v38; // [rsp+1Ch] [rbp-5Ch]
  float v39; // [rsp+1Ch] [rbp-5Ch]
  Vector EdgeNormalXY; // 0:kr00_12.12
  Vector v41; // 0:kr14_12.12

  *overlap = 0.0;
  v5 = (this + 12 * nEdge);
  v34 = v5[3];
  v33 = v5[2];
  v6 = (this + 12 * ((nEdge + 1) % this->m_nVerts));
  v36 = v6[3];
  v38 = v6[2];
  EdgeNormalXY = CNavPoly::GetEdgeNormalXY(this, nEdge);
  overlap_7 = -1;
  v7 = v38 - v33;
  v8 = 0.0;
  v9 = v36 - v34;
  m_nVerts = rArea->m_nVerts;
  x = EdgeNormalXY.x;
  y = EdgeNormalXY.y;
  v13 = fsqrt(((v7 * v7) + (v9 * v9)) + 0.0);
  if ( m_nVerts > 0 )
  {
    if ( ((((rArea->m_vVerts[0].x - v33) * EdgeNormalXY.x) + ((rArea->m_vVerts[0].y - v34) * EdgeNormalXY.y))
        + (EdgeNormalXY.z * 0.0)) > 0.0 )
    {
LABEL_8:
      overlap_7 = -1;
      if ( m_nVerts > 0 )
      {
        overlapa = v13;
        v17 = rArea;
        v18 = 0;
        p_y = &rArea->m_vVerts[(m_nVerts - 1)].y;
        v29 = 1.0 / v13;
        v28 = v7 * (1.0 / v13);
        v27 = v9 * (1.0 / v13);
        do
        {
          v35 = v8;
          v37 = y;
          v39 = x;
          v41 = CNavPoly::GetEdgeNormalXY(rArea, v18);
          x = v39;
          y = v37;
          v8 = v35;
          if ( (((v41.x * v39) + (v41.y * v37)) + (v41.z * EdgeNormalXY.z)) <= v35 )
          {
            v20 = (0.0 * v29) * 0.0;
            v21 = (((v17->m_vVerts[0].x - v33) * v28) + ((v17->m_vVerts[0].y - v34) * v27)) + v20;
            v22 = (rArea + 12 * ((v18 + 1) % rArea->m_nVerts));
            v23 = 0.0;
            v24 = (((v22[2] - v33) * v28) + ((v22[3] - v34) * v27)) + v20;
            if ( v21 >= 0.0 )
              v23 = fminf(overlapa, v21);
            v25 = 0.0;
            if ( v35 <= v24 )
              v25 = fminf(overlapa, v24);
            v26 = fabs(v23 - v25);
            if ( v26 > *overlap )
            {
              *overlap = v26;
              overlap_7 = v18;
            }
          }
          v17 = (v17 + 12);
          ++v18;
        }
        while ( v17 != p_y );
      }
    }
    else
    {
      v14 = rArea;
      while ( v14 != (rArea + 12 * (m_nVerts - 1)) )
      {
        v15 = v14;
        v14 = (v14 + 12);
        if ( ((((v15->m_vVerts[1].x - v33) * EdgeNormalXY.x) + ((v15->m_vVerts[1].y - v34) * EdgeNormalXY.y))
            + (EdgeNormalXY.z * 0.0)) > 0.0 )
          goto LABEL_8;
      }
      return -1;
    }
  }
  return overlap_7;
}


// CNavArea::GetEdgePairWithMaximumOverlap  (line 323, @0x00000000031e31f0, libserver.so)
// calls: CNavArea::GetBackEdgeIndex
void __fastcall CNavArea::GetEdgePairWithMaximumOverlap(
        CNavArea *const this,
        CNavArea *const rArea,
        NavEdgeIndex *const nEdge,
        NavEdgeIndex *const nBackEdge)
{
  NavEdgeIndex v7; // r14
  NavEdgeIndex BackEdgeIndex; // al
  float bestOverlap; // [rsp+Ch] [rbp-44h]
  float overlap[13]; // [rsp+1Ch] [rbp-34h] BYREF

  *nBackEdge = -1;
  *nEdge = -1;
  if ( SLOBYTE(this->m_nVerts) > 0 )
  {
    v7 = 0;
    bestOverlap = 0.0;
    do
    {
      BackEdgeIndex = CNavArea::GetBackEdgeIndex(this, rArea, v7, overlap);
      if ( overlap[0] > bestOverlap )
      {
        bestOverlap = overlap[0];
        *nEdge = v7;
        *nBackEdge = BackEdgeIndex;
      }
      ++v7;
    }
    while ( v7 < SLOBYTE(this->m_nVerts) );
  }
}


// CNavArea::ConnectTo  (line 343, @0x00000000031e4900, libserver.so)  // inlines: AddToTail, Alloc, ComputeOrientedPortal, ConnectivityChanged, Count, EnsureCapacity, Find, FindAndRemove, Free, GetSize, Indices, NavDirOpposite, Realloc, Remove, ShiftElementsLeft, V_memmove, memmove
// calls: CNavPoly::GetZDeltaAtEdgeToPoly, CNavPoly::ComputeOrientedPortal, CNavArea::AddIncomingConnection, CNavArea::UpdateFlagBottleneck, Warning, memmove
// callers: CNavEditor::EditCreateNavArea, JumpConnector::TryToConnect, CNavGenerator::SplitAreasUnderOverhangs, CNavGeneratorAAQuad::FixCornerOnCornerAreas, CNavGeneratorAAQuad::ConnectAreaEdge, CNavMesh::StitchAreaIntoMesh<CNavGeneratorAAQuad::StitchGeneratedAreas()::IncrementallyGeneratedAreas>, CNavGeneratorAAQuad::ConnectGeneratedAreas, CNavGeneratorAAQuad::StitchGeneratedAreas, CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary, CNavGenerator::StichAndRemoveJumpAreas, CNavSplice::ExpandSpliceMesh, CNavEditor::CommandNavConnect (22 total)
// strings: "Error: Nav areas are too far apart vertically to connect! Max climb distance is 180!\n"
void __fastcall CNavArea::ConnectTo(
        CNavArea *const this,
        CNavArea *const rArea,
        NavEdgeIndex nEdge,
        NavEdgeIndex nBackEdge,
        bool bRestrictPortalWidth)
{
  int v7; // r10d
  __int64 v10; // r11
  int v11; // r13d
  CNavConnectVector *v12; // r9
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  int m_Size; // edx
  CNavConnect *v15; // rax
  CNavConnect *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r8
  CNavConnectVector *v21; // r9
  double v22; // xmm0_8
  int v23; // r15d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v24; // rsi
  unsigned __int64 v25; // rax
  int v26; // r8d
  NavEdgeIndex v27; // r10
  _DWORD **v28; // r9
  __int64 v29; // r11
  _DWORD *v30; // rdx
  _DWORD *v31; // rax
  CNavConnectVector *v32; // r13
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v33; // rdi
  int v34; // esi
  CNavConnect *v35; // rdx
  int v36; // eax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v37; // rdx
  int v38; // ecx
  CNavConnect *v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v42; // rax
  __int64 v43; // [rsp+8h] [rbp-78h]
  __int64 v44; // [rsp+10h] [rbp-70h]
  __int64 *v45; // [rsp+10h] [rbp-70h]
  CNavConnectVector *v46; // [rsp+18h] [rbp-68h]
  NavEdgeIndex v47; // [rsp+18h] [rbp-68h]
  int v48; // [rsp+18h] [rbp-68h]
  int nEdgea; // [rsp+20h] [rbp-60h]
  int nEdgeb; // [rsp+20h] [rbp-60h]
  NavEdgeIndex nEdgec; // [rsp+20h] [rbp-60h]
  float flZFromThisa; // [rsp+28h] [rbp-58h]
  unsigned __int64 flZFromThis; // [rsp+28h] [rbp-58h]
  NavEdgeIndex flZFromThisb; // [rsp+28h] [rbp-58h]
  NavEdgeIndex flZFromThisc; // [rsp+28h] [rbp-58h]
  CNavOrientedPortal portalConnect; // [rsp+30h] [rbp-50h] BYREF

  if ( rArea != this )
  {
    v7 = nEdge;
    v10 = nEdge;
    LOBYTE(v11) = nBackEdge;
    v12 = &this->m_connect[nEdge];
    m_pData = v12->m_pData;
    if ( v12->m_pData != 0 )
    {
      m_Size = m_pData->m_Size;
      if ( m_pData->m_Size != 0 )
      {
        if ( rArea == m_pData->m_Elements[0].m_pArea )
          return;
        v15 = &m_pData->m_Elements[1];
        v16 = &v15[m_Size - 1];
        while ( v15 != v16 )
        {
          ++v15;
          if ( rArea == v15[-1].m_pArea )
            return;
        }
      }
    }
    v44 = v10;
    v46 = v12;
    nEdgea = v7;
    flZFromThisa = CNavPoly::GetZDeltaAtEdgeToPoly(this, rArea);
    *&v22 = CNavPoly::GetZDeltaAtEdgeToPoly(rArea, this);
    if ( flZFromThisa > 180.0 || (v21 = v46, *&v22 < -180.0) )
    {
      Warning(
        "Error: Nav areas are too far apart vertically to connect! Max climb distance is 180!\n",
        v19,
        v17,
        v18,
        v20,
        v21,
        v22);
      return;
    }
    if ( nBackEdge == -1 )
      v11 = (nEdgea + 2) % 4;
    v23 = v11;
    CNavPoly::ComputeOrientedPortal(this, rArea, nEdgea, v11, -1.0, &portalConnect);
    if ( !bRestrictPortalWidth || portalConnect.m_flWidth > CNavOrientedPortal::ms_flMinAllowedWidth )
    {
      v24 = v46->m_pData;
      if ( v46->m_pData != 0 )
      {
        v43 = v44;
        v45 = v46;
        v47 = nEdgea;
        nEdgeb = v24->m_Size;
        flZFromThis = 16LL * (v24->m_Size + 1) + 8;
        v25 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc);
        v26 = nEdgeb;
        v27 = v47;
        v28 = v45;
        v29 = v43;
        if ( flZFromThis > v25 )
        {
          v48 = nEdgeb;
          nEdgec = v27;
          v41 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, *v45, flZFromThis);
          v28 = v45;
          v30 = v41;
          v26 = v48;
          v29 = v43;
          v27 = nEdgec;
          *v45 = v41;
        }
        else
        {
          v30 = *v45;
        }
      }
      else
      {
        v42 = (**g_pMemAlloc)(g_pMemAlloc, 24);
        v28 = v46;
        v26 = 0;
        v27 = nEdgea;
        v29 = v44;
        v46->m_pData = v42;
        v42->m_Size = 0;
        v30 = v46->m_pData;
      }
      v31 = &v30[4 * v26];
      *(v31 + 16) = v11;
      v32 = &this->m_incomingConnect[v29];
      *(v31 + 1) = rArea;
      ++**v28;
      v33 = v32->m_pData;
      if ( v32->m_pData != 0 )
      {
        v34 = v33->m_Size;
        if ( v33->m_Size > 0 )
        {
          if ( rArea == v33->m_Elements[0].m_pArea )
          {
            v36 = 0;
LABEL_34:
            if ( v34 - v36 - 1 > 0 )
            {
              flZFromThisb = v27;
              memmove(&v33->m_Elements[v36], &v33->m_Elements[v36 + 1], 16LL * (v34 - v36 - 1));
              v33 = v32->m_pData;
              v27 = flZFromThisb;
              v34 = v32->m_pData->m_Size;
            }
            v33->m_Size = v34 - 1;
            if ( v32->m_pData->m_Size == 0 )
            {
              flZFromThisc = v27;
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
              v32->m_pData = 0;
              v27 = flZFromThisc;
            }
          }
          else
          {
            v35 = &v33->m_Elements[1];
            v36 = 0;
            while ( ++v36 != v34 )
            {
              ++v35;
              if ( rArea == v35[-1].m_pArea )
              {
                if ( v36 == -1 )
                  break;
                goto LABEL_34;
              }
            }
          }
        }
      }
      v37 = rArea->m_connect[v23].m_pData;
      if ( v37 != 0 )
      {
        v38 = v37->m_Size;
        if ( v37->m_Size > 0 )
        {
          if ( this == v37->m_Elements[0].m_pArea )
          {
LABEL_30:
            CNavArea::UpdateFlagBottleneck(this);
            return;
          }
          v39 = &v37->m_Elements[1];
          v40 = 0;
          while ( ++v40 != v38 )
          {
            ++v39;
            if ( this == v39[-1].m_pArea )
            {
              if ( v40 != -1 )
                goto LABEL_30;
              break;
            }
          }
        }
      }
      CNavArea::AddIncomingConnection(rArea, this, v23, v27);
      goto LABEL_30;
    }
  }
}


// CNavArea::ConnectTo  (line 416, @0x00000000031e5590, libserver.so)  // inlines: ConnectivityChanged
// calls: CNavArea::Disconnect, CNavArea::AddLadderUp, CNavArea::UpdateFlagBottleneck, CNavArea::AddLadderDown
// callers: CNavEditor::CommandNavConnect, CNavArea::MergeAdjacentConnections, CNavArea::SplitArea, CNavArea::SplitArea_Old
void __fastcall CNavArea::ConnectTo(CNavArea *const this, CNavLadder *pLadder)
{
  vec_t center; // [rsp+Ch] [rbp-14h]

  center = (pLadder->m_vTop.z + pLadder->m_vBottom.z) * 0.5;
  CNavArea::Disconnect(this, pLadder);
  if ( this->m_vCenter.z > center )
    CNavArea::AddLadderDown(this, pLadder);
  else
    CNavArea::AddLadderUp(this, pLadder);
  CNavArea::UpdateFlagBottleneck(this);
}


// CNavArea::Disconnect  (line 435, @0x00000000031e54e0, libserver.so)  // inlines: Count
// calls: CNavArea::Disconnect
// callers: CNavGenerator::RemoveOrthogonalConnectionsForArea, CNavObstacleMgr::MergeEdgeRecursive
void __fastcall CNavArea::Disconnect(CNavArea *const this, NavEdgeIndex nEdge)
{
  int v3; // r13d
  CNavArea *v4; // r12
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  CNavArea *m_pArea; // r15
  int nEdgea; // [rsp+Ch] [rbp-34h]

  v3 = 0;
  v4 = this;
  for ( nEdgea = nEdge; this->m_nVerts > v3; v4 = (v4 + 8) )
  {
    while ( nEdge != -1 )
    {
      if ( nEdgea == v3 )
        goto LABEL_9;
LABEL_4:
      ++v3;
      v4 = (v4 + 8);
      if ( this->m_nVerts <= v3 )
        return;
    }
    m_pData = v4->m_connect[0].m_pData;
    if ( m_pData == 0 )
      goto LABEL_4;
    do
    {
      if ( m_pData->m_Size == 0 )
        goto LABEL_4;
      m_pArea = m_pData->m_Elements[0].m_pArea;
      CNavArea::Disconnect(this, m_pArea);
      CNavArea::Disconnect(m_pArea, this);
LABEL_9:
      m_pData = v4->m_connect[0].m_pData;
    }
    while ( m_pData != 0 );
    ++v3;
  }
}


// CNavArea::Disconnect  (line 453, @0x00000000031e52b0, libserver.so)  // inlines: ConnectivityChanged, Count, Find, FindAndRemove, Free, Remove, ShiftElementsLeft, V_memmove, memmove
// calls: CNavArea::UpdateFlagBottleneck, memmove, CNavArea::IsConnectedOnAny, CNavArea::AddIncomingConnection
// callers: CNavGenerator::SplitAreasUnderOverhangs, CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary, CNavGeneratorAAQuad::FixConnections, CNavEditor::CommandNavDisconnect, CNavArea::Disconnect, CNavArea::MergeAdjacentConnections
void __fastcall CNavArea::Disconnect(CNavArea *const this, CNavArea *pArea)
{
  int v2; // r15d
  CNavArea *v3; // r13
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rcx
  int m_Size; // r8d
  char *v8; // rax
  int v9; // edx
  char *m_Elements; // rdi
  int v11; // esi
  __int64 v12; // r14
  NavEdgeIndex v13; // dl
  CNavConnectVector *v14; // r14
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v15; // rdi
  int v16; // ecx
  CNavConnect *v17; // rdx
  int v18; // eax

  v2 = 0;
  v3 = this;
  if ( this->m_nVerts > 0 )
  {
    while ( 1 )
    {
      m_pData = v3->m_connect[0].m_pData;
      if ( m_pData == 0 )
        goto LABEL_8;
      m_Size = m_pData->m_Size;
      if ( m_pData->m_Size <= 0 )
        goto LABEL_8;
      if ( pArea != m_pData->m_Elements[0].m_pArea )
      {
        v8 = &m_pData->m_Elements[1];
        v9 = 0;
        while ( ++v9 != m_Size )
        {
          m_Elements = v8;
          v8 += 16;
          if ( pArea == *(v8 - 2) )
          {
            if ( v9 == -1 )
              goto LABEL_8;
            v11 = v9;
            goto LABEL_12;
          }
        }
        goto LABEL_8;
      }
      m_Elements = m_pData->m_Elements;
      v11 = 0;
LABEL_12:
      v12 = m_Elements[8];
      if ( m_Size - v11 - 1 > 0 )
      {
        memmove(m_Elements, &m_pData->m_Elements[v11 + 1], 16LL * (m_Size - v11 - 1));
        m_pData = v3->m_connect[0].m_pData;
        m_Size = m_pData->m_Size;
      }
      m_pData->m_Size = m_Size - 1;
      if ( v3->m_connect[0].m_pData->m_Size == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        v3->m_connect[0].m_pData = 0;
      }
      if ( CNavArea::IsConnectedOnAny(pArea, this, 0, 0, 0) )
      {
        v13 = v2++;
        v3 = (v3 + 8);
        CNavArea::AddIncomingConnection(this, pArea, v13, v12);
        if ( this->m_nVerts <= v2 )
          break;
      }
      else
      {
        v14 = &pArea->m_incomingConnect[v12];
        v15 = v14->m_pData;
        if ( v14->m_pData != 0 && (v16 = v15->m_Size, v15->m_Size > 0) )
        {
          if ( this != v15->m_Elements[0].m_pArea )
          {
            v17 = &v15->m_Elements[1];
            v18 = 0;
            while ( ++v18 != v16 )
            {
              ++v17;
              if ( this == v17[-1].m_pArea )
              {
                if ( v18 == -1 )
                  goto LABEL_8;
                goto LABEL_27;
              }
            }
            goto LABEL_8;
          }
          v18 = 0;
LABEL_27:
          if ( v16 - v18 - 1 > 0 )
          {
            memmove(&v15->m_Elements[v18], &v15->m_Elements[v18 + 1], 16LL * (v16 - v18 - 1));
            v15 = v14->m_pData;
            v16 = v14->m_pData->m_Size;
          }
          v15->m_Size = v16 - 1;
          if ( v14->m_pData->m_Size != 0 )
            goto LABEL_8;
          ++v2;
          v3 = (v3 + 8);
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          v14->m_pData = 0;
          if ( this->m_nVerts <= v2 )
            break;
        }
        else
        {
LABEL_8:
          ++v2;
          v3 = (v3 + 8);
          if ( this->m_nVerts <= v2 )
            break;
        }
      }
    }
  }
  CNavArea::UpdateFlagBottleneck(this);
}


// CNavArea::Disconnect  (line 482, @0x00000000031e4600, libserver.so)  // inlines: ConnectivityChanged, Count, Find, FindAndRemove, Free, GetLadders, Remove, ShiftElementsLeft, V_memmove, memmove
// calls: CNavArea::UpdateFlagBottleneck, memmove
// callers: CNavArea::OnDestroyNotify, CNavEditor::CommandNavDisconnect, CNavArea::AddLadderUp, CNavArea::AddLadderDown, CNavArea::ConnectTo, CNavLadder::ConnectGeneratedLadder
void __fastcall CNavArea::Disconnect(CNavArea *const this, CNavLadder *pLadder)
{
  int i; // r12d
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  CNavLadderConnectVector *v6; // r13
  int *m_pData; // r8
  int m_Size; // ecx
  int *v9; // rdx
  int v10; // eax

  for ( i = 0; i != 2; ++i )
  {
    m_pLaddersAndElevators = this->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators != 0 )
    {
      v6 = &m_pLaddersAndElevators->m_ladders[i];
      m_pData = v6->m_pData;
      if ( v6->m_pData != 0 )
      {
        m_Size = *m_pData;
        if ( *m_pData > 0 )
        {
          if ( pLadder == *(m_pData + 1) )
          {
            v10 = 0;
LABEL_12:
            if ( m_Size - v10 - 1 > 0 )
            {
              memmove(&m_pData[2 * v10 + 2], &m_pData[2 * v10 + 4], 8LL * (m_Size - v10 - 1));
              m_pData = v6->m_pData;
              m_Size = v6->m_pData->m_Size;
            }
            *m_pData = m_Size - 1;
            if ( v6->m_pData->m_Size == 0 )
            {
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
              v6->m_pData = 0;
            }
          }
          else
          {
            v9 = v6->m_pData;
            v10 = 0;
            while ( ++v10 != m_Size )
            {
              v9 += 2;
              if ( pLadder == *(v9 + 1) )
              {
                if ( v10 == -1 )
                  break;
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
  }
  CNavArea::UpdateFlagBottleneck(this);
}


// CNavArea::AddLadderUp  (line 500, @0x00000000031e46f0, libserver.so)  // inlines: AddToTail, Alloc, CNavConnectVector, CNavLadderConnectVector, CUtlVectorUltraConservative, Count, EnsureCapacity, GetSize, NavLaddersAndElevators_t, Realloc
// calls: CNavArea::Disconnect, operator new
// callers: CNavArea::ConnectTo, CNavLadder::ConnectGeneratedLadder
void __fastcall CNavArea::AddLadderUp(CNavArea *const this, CNavLadder *pLadder)
{
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  __int64 m_pData; // rax
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v8; // rax
  NavLaddersAndElevators_t *v9; // rax

  CNavArea::Disconnect(this, pLadder);
  m_pLaddersAndElevators = this->m_pLaddersAndElevators;
  if ( m_pLaddersAndElevators == 0 )
  {
    v9 = operator new(0x20u);
    v9->m_ladders[0].m_pData = 0;
    m_pLaddersAndElevators = v9;
    v9->m_ladders[1].m_pData = 0;
    v9->m_elevatorAreas.m_pData = 0;
    this->m_pLaddersAndElevators = v9;
  }
  if ( m_pLaddersAndElevators->m_ladders[0].m_pData != 0 )
  {
    v5 = *m_pLaddersAndElevators->m_ladders[0].m_pData;
    v6 = 8LL * (v5 + 1) + 8;
    if ( v6 > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
    {
      m_pData = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pLaddersAndElevators->m_ladders[0].m_pData, v6);
      m_pLaddersAndElevators->m_ladders[0].m_pData = m_pData;
    }
    else
    {
      m_pData = m_pLaddersAndElevators->m_ladders[0].m_pData;
    }
  }
  else
  {
    v5 = 0;
    v8 = (**g_pMemAlloc)(g_pMemAlloc, 16);
    m_pLaddersAndElevators->m_ladders[0].m_pData = v8;
    v8->m_Size = 0;
    m_pData = m_pLaddersAndElevators->m_ladders[0].m_pData;
  }
  *(m_pData + 8 * v5 + 8) = pLadder;
  ++m_pLaddersAndElevators->m_ladders[0].m_pData->m_Size;
}


// CNavArea::AddLadderDown  (line 517, @0x00000000031e47f0, libserver.so)  // inlines: AddToTail, Alloc, CNavConnectVector, CNavLadderConnectVector, CUtlVectorUltraConservative, Count, EnsureCapacity, GetSize, NavLaddersAndElevators_t, Realloc
// calls: CNavArea::Disconnect, operator new
// callers: CNavArea::ConnectTo, CNavLadder::ConnectGeneratedLadder
void __fastcall CNavArea::AddLadderDown(CNavArea *const this, CNavLadder *pLadder)
{
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rbx
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  __int64 m_Size; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v9; // rax
  NavLaddersAndElevators_t *v10; // rax

  CNavArea::Disconnect(this, pLadder);
  m_pLaddersAndElevators = this->m_pLaddersAndElevators;
  if ( m_pLaddersAndElevators == 0 )
  {
    v10 = operator new(0x20u);
    v10->m_ladders[0].m_pData = 0;
    m_pLaddersAndElevators = v10;
    v10->m_ladders[1].m_pData = 0;
    v10->m_elevatorAreas.m_pData = 0;
    this->m_pLaddersAndElevators = v10;
  }
  m_pData = m_pLaddersAndElevators->m_ladders[1].m_pData;
  if ( m_pData != 0 )
  {
    m_Size = m_pData->m_Size;
    v7 = 8LL * (m_Size + 1) + 8;
    if ( v7 > (*(*g_pMemAlloc + 128LL))(g_pMemAlloc) )
    {
      v8 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pLaddersAndElevators->m_ladders[1].m_pData, v7);
      m_pLaddersAndElevators->m_ladders[1].m_pData = v8;
    }
    else
    {
      v8 = m_pLaddersAndElevators->m_ladders[1].m_pData;
    }
  }
  else
  {
    m_Size = 0;
    v9 = (**g_pMemAlloc)(g_pMemAlloc, 16);
    m_pLaddersAndElevators->m_ladders[1].m_pData = v9;
    v9->m_Size = 0;
    v8 = m_pLaddersAndElevators->m_ladders[1].m_pData;
  }
  *(v8 + 8 * m_Size + 8) = pLadder;
  ++m_pLaddersAndElevators->m_ladders[1].m_pData->m_Size;
}


// CNavArea::MergeAdjacentConnections  (line 569, @0x00000000031e5d30, libserver.so)  // inlines: AddToTail, Begin, CNavConnectInOnlyIterator, CNavConnectOutIterator, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<CNavArea*>, Count, Element, ForAllLadders<LadderConnectionReplacement>, GetAdjacentAreas, GetArea, GetEdgeIndex, GetLadders, GrowMemory, Indices, Next, operator(), operator[], ~CUtlVectorFixedGrowable
// calls: CNavConnectOutIterator::Next, CNavArea::ConnectTo, CNavArea::Disconnect, CUtlMemory<CNavArea*, int>::Grow, CUtlVectorBase<CNavArea*, CUtlMemoryFixedGrowable<CNavArea*, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CNavGeneratorAAQuad::MergeNavAreaInDirectionForArea, CNavArea::MergeEdit
void __fastcall CNavArea::MergeAdjacentConnections(CNavArea *const this, CNavArea *const rAdjArea)
{
  const CNavArea *m_rArea; // r9
  int m_nVerts; // r8d
  int m_nEdge; // eax
  int m_nCurArea; // edi
  CNavArea *m_pArea; // rsi
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *i; // rdx
  int v8; // ecx
  const CNavArea *v9; // rdi
  __int64 m_Size; // r13
  int v11; // r8d
  CNavArea *v12; // rbx
  int v13; // edx
  int v14; // edx
  CNavArea **v15; // rax
  int v16; // eax
  int v17; // esi
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rcx
  int v19; // edx
  int v20; // ecx
  int j; // ebx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v22; // rax
  int v23; // r12d
  CNavConnectVector *v24; // r14
  CNavArea *v25; // r15
  int v26; // edx
  int v27; // edx
  CNavArea **v28; // rax
  int v29; // eax
  CNavArea *v30; // r13
  int v31; // ecx
  int k; // ebx
  int *v33; // rax
  int v34; // r12d
  NavEdgeIndex v35; // r14
  CNavConnectVector *v36; // r15
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m; // rax
  int v38; // edx
  int n; // r14d
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  CNavLadderConnectVector *v41; // r12
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v42; // rax
  int v43; // r13d
  int v44; // ebx
  __int64 v45; // rsi
  int v46; // ecx
  CNavMesh *m_rNavMesh; // rdx
  CNavLadder *v48; // rax
  __int64 v49; // [rsp+10h] [rbp-280h]
  CUtlMemory<CNavArea*,int> *v50; // [rsp+18h] [rbp-278h]
  CNavConnectOutIterator iterOut; // [rsp+30h] [rbp-260h] BYREF
  CUtlVectorFixedGrowable<CNavArea*,64ul> areasConnectedToAdjacentArea; // [rsp+40h] [rbp-250h] BYREF
  unsigned __int64 v55; // [rsp+258h] [rbp-38h]

  iterOut.m_rArea = rAdjArea;
  v55 = __readfsqword(0x28u);
  iterOut.m_nEdge = 0;
  iterOut.m_nCurArea = -1;
  CNavConnectOutIterator::Next(&iterOut);
  m_rArea = iterOut.m_rArea;
  m_nVerts = iterOut.m_rArea->m_nVerts;
LABEL_2:
  m_nEdge = iterOut.m_nEdge;
  while ( m_nEdge != m_nVerts )
  {
    m_nCurArea = iterOut.m_nCurArea;
    m_pArea = m_rArea->m_connect[m_nEdge].m_pData->m_Elements[iterOut.m_nCurArea].m_pArea;
    if ( this == m_pArea )
    {
      for ( i = m_rArea->m_connect[m_nEdge].m_pData; ; i = m_rArea->m_connect[m_nEdge].m_pData )
      {
LABEL_9:
        v8 = -1;
        if ( i != 0 )
          v8 = i->m_Size - 1;
        if ( m_nCurArea < v8 )
          break;
        iterOut.m_nCurArea = -1;
        iterOut.m_nEdge = ++m_nEdge;
        if ( m_nEdge == m_nVerts )
          goto LABEL_13;
        m_nCurArea = -1;
      }
      iterOut.m_nCurArea = m_nCurArea + 1;
      goto LABEL_2;
    }
    CNavArea::ConnectTo(this, m_pArea, m_nEdge, -1, 1);
    m_rArea = iterOut.m_rArea;
    m_nEdge = iterOut.m_nEdge;
    m_nVerts = iterOut.m_rArea->m_nVerts;
    if ( iterOut.m_nEdge != m_nVerts )
    {
      m_nCurArea = iterOut.m_nCurArea;
      i = iterOut.m_rArea->m_connect[SLOBYTE(iterOut.m_nEdge)].m_pData;
      goto LABEL_9;
    }
    m_nVerts = iterOut.m_nEdge;
  }
LABEL_13:
  CNavArea::Disconnect(this, rAdjArea);
  areasConnectedToAdjacentArea.m_Size = 0;
  areasConnectedToAdjacentArea.m_Memory.m_nAllocationCount = 64;
  areasConnectedToAdjacentArea.m_Memory.m_nGrowSize = 0x80000000;
  areasConnectedToAdjacentArea.m_Memory.m_pMemory = &areasConnectedToAdjacentArea.m_Memory.m_FixedMemory;
  iterOut.m_rArea = rAdjArea;
  iterOut.m_nEdge = 0;
  iterOut.m_nCurArea = -1;
  CNavConnectOutIterator::Next(&iterOut);
  v9 = iterOut.m_rArea;
  m_Size = areasConnectedToAdjacentArea.m_Size;
  v11 = iterOut.m_rArea->m_nVerts;
  while ( v11 != iterOut.m_nEdge )
  {
    v12 = v9->m_connect[SLOBYTE(iterOut.m_nEdge)].m_pData->m_Elements[iterOut.m_nCurArea].m_pArea;
    v13 = m_Size;
    if ( areasConnectedToAdjacentArea.m_Memory.m_nAllocationCount == m_Size )
    {
      CUtlMemory<CNavArea *,int>::Grow(&areasConnectedToAdjacentArea.m_Memory, 1);
      v13 = areasConnectedToAdjacentArea.m_Size;
    }
    v14 = v13 + 1;
    areasConnectedToAdjacentArea.m_Size = v14;
    v15 = &areasConnectedToAdjacentArea.m_Memory.m_pMemory[m_Size];
    if ( v15 != 0 )
    {
      *v15 = v12;
      m_Size = areasConnectedToAdjacentArea.m_Size;
    }
    else
    {
      m_Size = v14;
    }
    v9 = iterOut.m_rArea;
    v16 = iterOut.m_nEdge;
    v17 = iterOut.m_nCurArea;
    v11 = iterOut.m_rArea->m_nVerts;
    if ( iterOut.m_nEdge == v11 )
      break;
    while ( 1 )
    {
      m_pData = iterOut.m_rArea->m_connect[v16].m_pData;
      v19 = -1;
      if ( m_pData != 0 )
        v19 = m_pData->m_Size - 1;
      if ( v17 < v19 )
        break;
      iterOut.m_nCurArea = -1;
      iterOut.m_nEdge = ++v16;
      if ( v16 == v11 )
        goto LABEL_28;
      v17 = -1;
    }
    iterOut.m_nCurArea = v17 + 1;
  }
LABEL_28:
  v20 = rAdjArea->m_nVerts;
  if ( v20 != 0 )
  {
    for ( j = 0; j != v20; ++j )
    {
      v22 = rAdjArea->m_incomingConnect[j].m_pData;
      if ( v22 != 0 && v22->m_Size > 0 )
      {
        v23 = 0;
        goto LABEL_34;
      }
    }
    v23 = -1;
  }
  else
  {
    v23 = -1;
    j = 0;
  }
LABEL_34:
  while ( v20 != j )
  {
    while ( 2 )
    {
      v24 = &rAdjArea->m_incomingConnect[j];
      v25 = v24->m_pData->m_Elements[v23].m_pArea;
      v26 = m_Size;
      if ( areasConnectedToAdjacentArea.m_Memory.m_nAllocationCount == m_Size )
      {
        CUtlMemory<CNavArea *,int>::Grow(&areasConnectedToAdjacentArea.m_Memory, 1);
        v26 = areasConnectedToAdjacentArea.m_Size;
      }
      v27 = v26 + 1;
      areasConnectedToAdjacentArea.m_Size = v27;
      v28 = &areasConnectedToAdjacentArea.m_Memory.m_pMemory[m_Size];
      if ( v28 != 0 )
      {
        *v28 = v25;
        m_Size = areasConnectedToAdjacentArea.m_Size;
      }
      else
      {
        m_Size = v27;
      }
      v20 = rAdjArea->m_nVerts;
      if ( v20 != j )
      {
        while ( 1 )
        {
          v29 = -1;
          if ( v24->m_pData != 0 )
            v29 = v24->m_pData->m_Size - 1;
          if ( v29 > v23 )
            break;
          if ( v20 == ++j )
          {
            v23 = -1;
            goto LABEL_34;
          }
          v23 = -1;
          v24 = &rAdjArea->m_incomingConnect[j];
        }
        ++v23;
        if ( v20 != j )
          continue;
        goto LABEL_47;
      }
      break;
    }
  }
LABEL_47:
  if ( m_Size != 0 )
  {
    v50 = 0;
    v49 = 8LL * (m_Size - 1) + 8;
    do
    {
      v30 = *(areasConnectedToAdjacentArea.m_Memory.m_pMemory + v50);
      if ( v30 != rAdjArea && v30 != this )
      {
        v31 = v30->m_nVerts;
        if ( v31 != 0 )
        {
          for ( k = 0; k != v31; ++k )
          {
            v33 = v30->m_connect[k].m_pData;
            if ( v33 != 0 && *v33 > 0 )
            {
              v34 = 0;
              goto LABEL_58;
            }
          }
LABEL_70:
          v34 = -1;
        }
        else
        {
          v34 = -1;
          k = 0;
        }
LABEL_58:
        while ( k != v31 )
        {
          v35 = k;
          v36 = &v30->m_connect[k];
          m = v36->m_pData;
          if ( rAdjArea != v36->m_pData->m_Elements[v34].m_pArea )
            goto LABEL_63;
          CNavArea::Disconnect(v30, rAdjArea);
          CNavArea::Disconnect(v30, this);
          if ( v30->m_nVerts == k )
            v35 = -1;
          CNavArea::ConnectTo(v30, this, v35, -1, 1);
          v31 = v30->m_nVerts;
          if ( v31 == k )
          {
            v31 = k;
          }
          else
          {
            for ( m = v36->m_pData; ; m = v30->m_connect[k].m_pData )
            {
LABEL_63:
              v38 = -1;
              if ( m != 0 )
                v38 = m->m_Size - 1;
              if ( v34 < v38 )
                break;
              if ( v31 == ++k )
                goto LABEL_70;
              v34 = -1;
            }
            ++v34;
          }
        }
      }
      v50 = (v50 + 8);
    }
    while ( v50 != v49 );
  }
  for ( n = 0; n != 2; ++n )
  {
    m_pLaddersAndElevators = rAdjArea->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators != 0 )
    {
      v41 = &m_pLaddersAndElevators->m_ladders[n];
      v42 = v41->m_pData;
      if ( v41->m_pData != 0 )
      {
        v43 = v42->m_Size;
        if ( v42->m_Size != 0 )
        {
          v44 = 0;
          while ( 1 )
          {
            CNavArea::ConnectTo(this, v42->m_Elements[v44++].pLadder);
            if ( v44 == v43 )
              break;
            v42 = v41->m_pData;
          }
        }
      }
    }
  }
  v45 = 0;
  v46 = 0;
  m_rNavMesh = this->m_rNavMesh;
  if ( m_rNavMesh->m_Ladders.m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v48 = m_rNavMesh->m_Ladders.m_Memory.m_pMemory[v45];
        if ( rAdjArea == v48->m_pTopForwardArea )
          v48->m_pTopForwardArea = this;
        if ( rAdjArea == v48->m_pTopRightArea )
          v48->m_pTopRightArea = this;
        if ( rAdjArea == v48->m_pTopLeftArea )
          v48->m_pTopLeftArea = this;
        if ( rAdjArea == v48->m_pTopBehindArea )
          v48->m_pTopBehindArea = this;
        if ( rAdjArea == v48->m_pBottomArea )
          break;
        ++v46;
        ++v45;
        if ( v46 >= m_rNavMesh->m_Ladders.m_Size )
          goto LABEL_97;
      }
      v48->m_pBottomArea = this;
      ++v46;
      ++v45;
    }
    while ( v46 < m_rNavMesh->m_Ladders.m_Size );
  }
LABEL_97:
  CUtlVectorBase<CNavArea *,CUtlMemoryFixedGrowable<CNavArea *,64ul,int>>::~CUtlVectorBase(&areasConnectedToAdjacentArea);
}


// CNavArea::SplitEditWrapper_Old  (line 669, @0x00000000031e73d0, libserver.so)  // inlines: Vector, operator=
// calls: CNavArea::SplitArea_Old
// callers: splitX, splitY, Subdivider::SubdivideY, Subdivider::SubdivideX, nav_subdivide, CNavGenerator::SplitAreasUnderOverhangs, CNavGeneratorAAQuad::ReduceToComponentAreas
__int64 __fastcall CNavArea::SplitEditWrapper_Old(
        CNavArea *const this,
        bool bSplitAlongX,
        __m128i flSplitEdge,
        CNavArea **ppAreaAlphaOut,
        CNavArea **ppAreaBetaOut)
{
  vec_t v5; // xmm2_4
  vec_t v6; // xmm1_4
  Vector vCutNorm; // [rsp+0h] [rbp-18h] BYREF

  v5 = 0.0;
  v6 = 1.0;
  if ( !bSplitAlongX )
  {
    v5 = 1.0;
    v6 = 0.0;
  }
  vCutNorm.x = v5;
  vCutNorm.y = v6;
  vCutNorm.z = 0.0;
  return CNavArea::SplitArea_Old(this, &vCutNorm, flSplitEdge, ppAreaAlphaOut, ppAreaBetaOut);
}


// CNavArea::SplitArea_Old  (line 680, @0x00000000031e6dc0, libserver.so)  // inlines: AddToSet, AddToTail, CopyConstruct<CNavArea*>, Count, Element, ForAllLadders<SplitNotification>, GetBool, GetInt, GetLadders, GrowMemory, Indices, IsInSet, Purge, RemoveAll, RemoveFromSet, _Function_base, _M_init_functor, function<CNavArea::SplitArea_Old(const Vector&, float, CNavArea**, CNavArea**)::__lambda6, void>, operator(), operator==, operator[], ~CUtlVectorBase, ~CUtlVectorFixed, ~_Function_base, ~function
// calls: operator new, CNavPoly::SplitByPlane_Old, CNavArea::FinishSplitEdit, CNavArea::ConnectTo, CNavMesh::IsGenerating, CNavPoly::CalcDistanceSquaredToPoint, CNavLadder::OnSplit, CNavMesh::OnEditCreateNotify, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::FindAndRemove, __cxa_guard_acquire, ConVarRef::ConVarRef (18 total)
// callers: CNavArea::SplitEditWrapper_Old
// strings: "nav_split_place_on_ground"
// globals: `guard variable for'CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::nav_split_place_on_ground, std::_Function_handler<CNavPoly * ()(void),CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::{lambda(void)#1}>::_M_invoke(std::_Any_data const, std::_Function_base::_Base_manager<CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::{lambda(void)#1}>::_M_manager(std::_Any_data &,std::_Any_, CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::nav_split_place_on_ground
__int64 __fastcall CNavArea::SplitArea_Old(
        CNavArea *const this,
        const Vector *const vCutNorm,
        __m128i flCutPlaneD,
        CNavArea **ppAreaAlphaOut,
        CNavArea **ppAreaBetaOut)
{
  float v5; // r13d
  bool v7; // bl
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  CNavArea *v11; // r15
  CNavArea *v12; // r14
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  int v15; // ebx
  CNavLadder *pLadder; // r12
  __int64 v17; // rbx
  CNavMesh *m_rNavMesh; // r12
  CNavMesh *v19; // rbx
  CNavMesh *v20; // rcx
  __int64 v21; // r12
  int v22; // eax
  CNavArea **v23; // rax
  __int64 v24; // r12
  int v25; // eax
  CNavArea **v26; // rax
  CNavLadderConnectVector *v30; // [rsp+20h] [rbp-D8h]
  int nLadderDir; // [rsp+28h] [rbp-D0h]
  int m_Size; // [rsp+2Ch] [rbp-CCh]
  float flAlphaDistance; // [rsp+30h] [rbp-C8h]
  CNavPoly *pPolyAlpha; // [rsp+40h] [rbp-B8h] BYREF
  CNavPoly *pPolyBeta; // [rsp+48h] [rbp-B0h] BYREF
  CNavArea *src; // [rsp+50h] [rbp-A8h] BYREF
  CNavArea *v37; // [rsp+58h] [rbp-A0h] BYREF
  CNavArea *v38; // [rsp+60h] [rbp-98h] BYREF
  Vector vLadderPos; // [rsp+68h] [rbp-90h] BYREF
  FuncPolyFactory_t funcPolyFactory; // [rsp+78h] [rbp-80h] BYREF
  CUtlVectorFixed<CNavArea*,3ul> vecNewAreas; // [rsp+98h] [rbp-60h] BYREF
  unsigned __int64 v42; // [rsp+C0h] [rbp-38h]

  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(flCutPlaneD));
  v42 = __readfsqword(0x28u);
  if ( `guard variable for'CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::nav_split_place_on_ground == 0
    && __cxa_guard_acquire(&`guard variable for'CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::nav_split_place_on_ground) != 0 )
  {
    ConVarRef::ConVarRef(
      &CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::nav_split_place_on_ground,
      "nav_split_place_on_ground");
    __cxa_guard_release(&`guard variable for'CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::nav_split_place_on_ground);
  }
  v7 = vCutNorm->x == 0.0 && vCutNorm->y == 1.0 && vCutNorm->z == 0.0;
  v8 = operator new(8u);
  *v8 = this;
  funcPolyFactory._M_functor._M_unused._M_object = v8;
  funcPolyFactory._M_invoker = std::_Function_handler<CNavPoly * ()(void),CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::{lambda(void)#1}>::_M_invoke;
  funcPolyFactory._M_manager = std::_Function_base::_Base_manager<CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::{lambda(void)#1}>::_M_manager;
  if ( CNavPoly::SplitByPlane_Old(this, vCutNorm, v5, &funcPolyFactory, &pPolyAlpha, &pPolyBeta) )
  {
    v11 = pPolyAlpha;
    v12 = pPolyBeta;
    if ( v7 )
    {
      CNavArea::FinishSplitEdit(this, pPolyAlpha, NavDirType::SOUTH);
      CNavArea::FinishSplitEdit(this, v12, NavDirType::NORTH);
      CNavArea::ConnectTo(v11, v12, 2, -1, 1);
      CNavArea::ConnectTo(v12, v11, 0, -1, 1);
    }
    else
    {
      CNavArea::FinishSplitEdit(this, pPolyAlpha, NavDirType::EAST);
      CNavArea::FinishSplitEdit(this, v12, NavDirType::WEST);
      CNavArea::ConnectTo(v11, v12, 1, -1, 1);
      CNavArea::ConnectTo(v12, v11, 3, -1, 1);
    }
    if ( !CNavMesh::IsGenerating(this->m_rNavMesh)
      && CNavArea::SplitArea_Old(Vector const&,float,CNavArea**,CNavArea**)::nav_split_place_on_ground.m_pConVarState->m_Value.m_nValue != 0 )
    {
      CNavMesh::PlaceVertOnGround(this->m_rNavMesh, v11, -1, 0.0);
      CNavMesh::PlaceVertOnGround(this->m_rNavMesh, v12, -1, 0.0);
    }
    for ( nLadderDir = 0; nLadderDir != 2; ++nLadderDir )
    {
      m_pLaddersAndElevators = this->m_pLaddersAndElevators;
      if ( m_pLaddersAndElevators != 0 )
      {
        v30 = &m_pLaddersAndElevators->m_ladders[nLadderDir];
        m_pData = v30->m_pData;
        if ( v30->m_pData != 0 )
        {
          m_Size = m_pData->m_Size;
          if ( m_pData->m_Size != 0 )
          {
            v15 = 0;
            while ( 1 )
            {
              pLadder = m_pData->m_Elements[v15].pLadder;
              vLadderPos = pLadder->m_vTop;
              flAlphaDistance = CNavPoly::CalcDistanceSquaredToPoint(v11, &vLadderPos);
              if ( CNavPoly::CalcDistanceSquaredToPoint(v12, &vLadderPos) > flAlphaDistance )
              {
                CNavArea::ConnectTo(v11, pLadder);
                if ( ++v15 == m_Size )
                  break;
              }
              else
              {
                CNavArea::ConnectTo(v12, pLadder);
                if ( ++v15 == m_Size )
                  break;
              }
              m_pData = v30->m_pData;
            }
          }
        }
      }
    }
    v17 = 0;
    *vecNewAreas.m_Memory.m_Memory.m_Data = v11;
    vecNewAreas.m_Size = 2;
    *&vecNewAreas.m_Memory.m_Memory.m_Data[8] = v12;
    m_rNavMesh = this->m_rNavMesh;
    if ( m_rNavMesh->m_Ladders.m_Size > 0 )
    {
      do
        CNavLadder::OnSplit(m_rNavMesh->m_Ladders.m_Memory.m_pMemory[v17++], this, &vecNewAreas);
      while ( v17 < m_rNavMesh->m_Ladders.m_Size );
    }
    if ( ppAreaAlphaOut != 0 )
      *ppAreaAlphaOut = v11;
    if ( ppAreaBetaOut != 0 )
      *ppAreaBetaOut = v12;
    CNavMesh::OnEditCreateNotify(this->m_rNavMesh, v11);
    CNavMesh::OnEditCreateNotify(this->m_rNavMesh, v12);
    v19 = this->m_rNavMesh;
    src = this;
    if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v19->m_SelectionSet.m_SetAreas, &src) != -1 )
    {
      v38 = v11;
      if ( v11 != 0
        && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v19->m_SelectionSet.m_SetAreas, &v38) == -1 )
      {
        v24 = v19->m_SelectionSet.m_SetAreas.m_Size;
        v25 = v19->m_SelectionSet.m_SetAreas.m_Size;
        if ( v24 == v19->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&v19->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v25 = v19->m_SelectionSet.m_SetAreas.m_Size;
        }
        v19->m_SelectionSet.m_SetAreas.m_Size = v25 + 1;
        v26 = &v19->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v24];
        if ( v26 != 0 )
          *v26 = v38;
        v19 = this->m_rNavMesh;
      }
      *&vLadderPos.x = v12;
      if ( v12 != 0
        && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v19->m_SelectionSet.m_SetAreas, &vLadderPos) == -1 )
      {
        v21 = v19->m_SelectionSet.m_SetAreas.m_Size;
        v22 = v19->m_SelectionSet.m_SetAreas.m_Size;
        if ( v21 == v19->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea *,int>::Grow(&v19->m_SelectionSet.m_SetAreas.m_Memory, 1);
          v22 = v19->m_SelectionSet.m_SetAreas.m_Size;
        }
        v19->m_SelectionSet.m_SetAreas.m_Size = v22 + 1;
        v23 = &v19->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[v21];
        if ( v23 != 0 )
          *v23 = *&vLadderPos.x;
        v19 = this->m_rNavMesh;
      }
    }
    (*(v19->_vptr_CNavMesh + 25))(v19, this);
    v20 = this->m_rNavMesh;
    v37 = this;
    CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&v20->m_SelectionSet.m_SetAreas, &v37);
    (*(this->m_rNavMesh->_vptr_CNavMesh + 5))(this->m_rNavMesh, this);
    vecNewAreas.m_Size = 0;
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  if ( funcPolyFactory._M_manager != 0 )
    funcPolyFactory._M_manager(&funcPolyFactory, &funcPolyFactory, std::_Manager_operation::__destroy_functor);
  return v9;
}


// SplitEdge_CompareConnections  (line 789, @0x00000000031e3280, libserver.so)
void __fastcall SplitEdge_CompareConnections(
        const CNavArea *pArea0New,
        const CNavArea *pArea1New,
        const CNavArea *pArea0Old,
        const CNavArea *pArea1Old)
{
  ;
}


// CNavArea::SplitEditWrapperAxisAligned  (line 837, @0x00000000031e6cc0, libserver.so)  // inlines: Dot, DotProduct, Vector
// calls: CNavArea::SplitArea
// callers: CNavEditor::CommandNavSplitAA
__int64 __fastcall CNavArea::SplitEditWrapperAxisAligned(
        CNavArea *const this,
        bool bSplitAlongX,
        float flSplitEdge,
        CNavArea **ppAreaAlphaOut,
        CNavArea **ppAreaBetaOut)
{
  float v7; // xmm1_4
  CNavArea *v8; // rax
  Vector vCutNorm; // [rsp+10h] [rbp-40h] BYREF
  CNavArea *pAreas[3]; // [rsp+20h] [rbp-30h] BYREF

  if ( bSplitAlongX )
  {
    vCutNorm.x = 0.0;
    vCutNorm.y = 1.0;
  }
  else
  {
    vCutNorm.x = 1.0;
    vCutNorm.y = 0.0;
  }
  vCutNorm.z = 0.0;
  if ( CNavArea::SplitArea(this, &vCutNorm, flSplitEdge, 0, pAreas, 1) <= 1 )
    return 0;
  v7 = ((pAreas[0]->m_vCenter.x * vCutNorm.x) + (vCutNorm.y * pAreas[0]->m_vCenter.y))
     + (vCutNorm.z * pAreas[0]->m_vCenter.z);
  v8 = pAreas[flSplitEdge > v7];
  if ( ppAreaAlphaOut != 0 )
    *ppAreaAlphaOut = pAreas[flSplitEdge <= v7];
  if ( ppAreaBetaOut != 0 )
    *ppAreaBetaOut = v8;
  return 1;
}


// CNavArea::SplitArea  (line 904, @0x00000000031e64b0, libserver.so)  // inlines: AddToSet, AddToTail, CSplitInfo_t, CUtlVectorBase, CUtlVectorFixed, CopyConstruct<CNavArea*>, Count, Dot, DotProduct, Element, ForAllLadders<SplitNotification>, GetBool, GetInt, GetLadders, GrowMemory, Indices, IsInSet, Purge, RemoveAll, RemoveFromSet, _Function_base, _M_init_functor, function<CNavArea::SplitArea(const Vector&, float, bool, CNavArea**, bool)::__lambda7, void>, memset, operator(), operator[], ~CUtlVectorBase, ~CUtlVectorFixed, ~_Function_base, ~function
// calls: operator new, CNavPoly::SplitByPlane, CNavMesh::IsGenerating, CNavMesh::PlaceVertOnGround, CNavMesh::OnEditCreateNotify, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::Find, CNavArea::ConnectTo, CNavArea::ConnectSplitEdge, CNavPoly::CalcDistanceSquaredToPoint, CNavLadder::OnSplit, CUtlMemory<CNavArea*, int>::Grow, __cxa_guard_acquire (18 total)
// callers: CNavObstacleMgr::SplitEdge, CNavEditor::CommandNavSplit, CNavArea::SplitEditWrapperAxisAligned
// strings: "nav_split_place_on_ground"
// globals: `guard variable for'CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::nav_split_place_on_ground, std::_Function_handler<CNavPoly * ()(void),CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::{lambda(void)#1}>::_M_invoke(std::_Any_data const&), std::_Function_base::_Base_manager<CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::{lambda(void)#1}>::_M_manager(std::_Any_data &,std::_Any_data , CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::nav_split_place_on_ground
__int64 __fastcall CNavArea::SplitArea(
        CNavArea *const this,
        const Vector *const vCutNorm,
        float flCutPlaneD,
        bool bDestoryOriginal,
        CNavArea **ppAreasOut,
        bool bAAQuadMode)
{
  CNavPoly::CSplitInfo_t *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r12
  CNavArea *v9; // rbx
  CNavMesh *m_rNavMesh; // rdi
  CNavMesh *v11; // r13
  __int64 m_Size; // rbx
  int v13; // eax
  CNavArea **v14; // rax
  CNavPoly::CSplitInfo_t *v15; // r14
  CNavArea *v16; // r13
  CNavPoly::CSplitInfo_t *v17; // r12
  int i; // ebx
  int m_nVerts; // esi
  int v20; // ecx
  __int64 v21; // rax
  int v22; // edx
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  int *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r14
  float v27; // xmm0_4
  __int64 v28; // rax
  __int64 j; // rdx
  CNavArea *v30; // rcx
  __int64 v31; // rbx
  CNavMesh *v32; // r12
  CNavGeneratorBase *m_pGenerator; // r12
  float x; // xmm0_4
  __int64 v35; // rbx
  __int64 v36; // rcx
  CNavArea *v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // ebx
  CNavMesh *v41; // rdi
  int nLadderDir; // [rsp+24h] [rbp-14Ch]
  CNavPoly::CSplitInfo_t *splitInfoOut; // [rsp+30h] [rbp-140h]
  CNavLadder *pLadder; // [rsp+38h] [rbp-138h]
  int src; // [rsp+40h] [rbp-130h]
  int v51; // [rsp+48h] [rbp-128h]
  int nNumNewAreas; // [rsp+4Ch] [rbp-124h]
  __int64 flClosestNewAreaDist; // [rsp+58h] [rbp-118h]
  float flClosestNewAreaDista; // [rsp+58h] [rbp-118h]
  CNavArea *v56; // [rsp+60h] [rbp-110h] BYREF
  CNavArea *v57; // [rsp+68h] [rbp-108h] BYREF
  Vector vLadderPos; // [rsp+70h] [rbp-100h] BYREF
  CNavPoly *pPolys[3]; // [rsp+80h] [rbp-F0h] BYREF
  CNavArea *pSplitAreas[3]; // [rsp+A0h] [rbp-D0h]
  CNavPoly::CSplitInfo_t splitInfo[3]; // [rsp+C0h] [rbp-B0h] BYREF
  int v62; // [rsp+E4h] [rbp-8Ch] BYREF
  FuncPolyFactory_t funcPolyFactory; // [rsp+F0h] [rbp-80h] BYREF
  CUtlVectorFixed<CNavArea*,3ul> vecNewAreas; // [rsp+110h] [rbp-60h] BYREF
  unsigned __int64 v65; // [rsp+138h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  if ( `guard variable for'CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::nav_split_place_on_ground == 0
    && __cxa_guard_acquire(&`guard variable for'CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::nav_split_place_on_ground) != 0 )
  {
    ConVarRef::ConVarRef(
      &CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::nav_split_place_on_ground,
      "nav_split_place_on_ground");
    __cxa_guard_release(&`guard variable for'CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::nav_split_place_on_ground);
  }
  v6 = splitInfo;
  do
  {
    *v6->nVertsInSrc = -1;
    ++v6;
    *v6[-1].nInternalEdgeOtherEdge = -1;
  }
  while ( v6 != &v62 );
  funcPolyFactory._M_manager = 0;
  v7 = operator new(8u);
  *v7 = this;
  funcPolyFactory._M_functor._M_unused._M_object = v7;
  funcPolyFactory._M_invoker = std::_Function_handler<CNavPoly * ()(void),CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::{lambda(void)#1}>::_M_invoke;
  funcPolyFactory._M_manager = std::_Function_base::_Base_manager<CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::{lambda(void)#1}>::_M_manager;
  nNumNewAreas = CNavPoly::SplitByPlane(this, vCutNorm, flCutPlaneD, &funcPolyFactory, pPolys, splitInfo, bAAQuadMode);
  if ( nNumNewAreas == 1 )
  {
    v39 = 1;
  }
  else
  {
    if ( nNumNewAreas > 0 )
    {
      v8 = 0;
      do
      {
        while ( 1 )
        {
          v9 = pPolys[v8];
          m_rNavMesh = this->m_rNavMesh;
          pSplitAreas[v8] = v9;
          (*(m_rNavMesh->_vptr_CNavMesh + 28))(m_rNavMesh, v9);
          if ( !CNavMesh::IsGenerating(this->m_rNavMesh)
            && CNavArea::SplitArea(Vector const&,float,bool,CNavArea**,bool)::nav_split_place_on_ground.m_pConVarState->m_Value.m_nValue != 0 )
          {
            CNavMesh::PlaceVertOnGround(this->m_rNavMesh, v9, -1, 0.0);
          }
          CNavMesh::OnEditCreateNotify(this->m_rNavMesh, v9);
          v11 = this->m_rNavMesh;
          v56 = this;
          if ( CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v11->m_SelectionSet.m_SetAreas, &v56) != -1 )
          {
            v57 = v9;
            if ( v9 != 0
              && CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::Find(&v11->m_SelectionSet.m_SetAreas, &v57) == -1 )
            {
              m_Size = v11->m_SelectionSet.m_SetAreas.m_Size;
              v13 = v11->m_SelectionSet.m_SetAreas.m_Size;
              if ( m_Size == v11->m_SelectionSet.m_SetAreas.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CNavArea *,int>::Grow(&v11->m_SelectionSet.m_SetAreas.m_Memory, 1);
                v13 = v11->m_SelectionSet.m_SetAreas.m_Size;
              }
              v11->m_SelectionSet.m_SetAreas.m_Size = v13 + 1;
              v14 = &v11->m_SelectionSet.m_SetAreas.m_Memory.m_pMemory[m_Size];
              if ( v14 != 0 )
                break;
            }
          }
          if ( nNumNewAreas <= ++v8 )
            goto LABEL_18;
        }
        ++v8;
        *v14 = v57;
      }
      while ( nNumNewAreas > v8 );
LABEL_18:
      v15 = splitInfo;
      flClosestNewAreaDist = 0;
      do
      {
        v16 = pSplitAreas[flClosestNewAreaDist];
        (*(v16->_vptr_CNavPoly + 27))(v16, this, 0);
        v17 = v15;
        for ( i = 0; ; ++i )
        {
          m_nVerts = v16->m_nVerts;
          if ( i >= m_nVerts )
            break;
          v20 = v17->nVertsInSrc[0];
          v21 = v17->nInternalEdgeOtherPoly[0];
          v22 = v15->nVertsInSrc[(i + 1) % m_nVerts];
          if ( v21 == -1 )
          {
            if ( v20 == -1 )
              CNavArea::ConnectSplitEdge(v16, i, this, (v22 + this->m_nVerts - 1) % this->m_nVerts, 0);
            else
              CNavArea::ConnectSplitEdge(v16, i, this, v20, v22 != -1);
          }
          else
          {
            CNavArea::ConnectTo(v16, pSplitAreas[v21], i, v17->nInternalEdgeOtherEdge[0], 0);
          }
          v17 = (v17 + 1);
        }
        ++flClosestNewAreaDist;
        ++v15;
      }
      while ( nNumNewAreas > flClosestNewAreaDist );
    }
    for ( nLadderDir = 0; nLadderDir != 2; ++nLadderDir )
    {
      m_pLaddersAndElevators = this->m_pLaddersAndElevators;
      if ( m_pLaddersAndElevators != 0 )
      {
        splitInfoOut = &m_pLaddersAndElevators->m_ladders[nLadderDir];
        v24 = *splitInfoOut->nVertsInSrc;
        if ( *splitInfoOut->nVertsInSrc != 0 )
        {
          v51 = *v24;
          if ( *v24 != 0 )
          {
            src = 0;
            while ( 1 )
            {
              pLadder = *&v24[2 * src + 2];
              vLadderPos = pLadder->m_vTop;
              if ( nNumNewAreas <= 0 )
              {
                v26 = -1;
              }
              else
              {
                v25 = 0;
                v26 = -1;
                flClosestNewAreaDista = 3.4028235e38;
                do
                {
                  v27 = CNavPoly::CalcDistanceSquaredToPoint(pSplitAreas[v25], &vLadderPos);
                  if ( flClosestNewAreaDista > v27 )
                  {
                    flClosestNewAreaDista = v27;
                    v26 = v25;
                  }
                  ++v25;
                }
                while ( nNumNewAreas > v25 );
              }
              CNavArea::ConnectTo(pSplitAreas[v26], pLadder);
              if ( ++src == v51 )
                break;
              v24 = *splitInfoOut->nVertsInSrc;
            }
          }
        }
      }
    }
    vecNewAreas.m_Size = 0;
    if ( nNumNewAreas > 0 )
    {
      v28 = 0;
      for ( j = 0; ; j = vecNewAreas.m_Size )
      {
        vecNewAreas.m_Size = j + 1;
        v30 = pSplitAreas[v28++];
        *&vecNewAreas.m_Memory.m_Memory.m_Data[8 * j] = v30;
        if ( nNumNewAreas <= v28 )
          break;
      }
    }
    v31 = 0;
    v32 = this->m_rNavMesh;
    if ( v32->m_Ladders.m_Size > 0 )
    {
      do
        CNavLadder::OnSplit(v32->m_Ladders.m_Memory.m_pMemory[v31++], this, &vecNewAreas);
      while ( v31 < v32->m_Ladders.m_Size );
    }
    if ( bAAQuadMode )
    {
      m_pGenerator = this->m_rNavMesh->m_pGenerator;
      if ( m_pGenerator != 0 )
      {
        x = vCutNorm->x;
        if ( (vCutNorm->x == 1.0 || vCutNorm->y == 1.0) && nNumNewAreas > 0 )
        {
          v35 = 0;
          while ( 1 )
          {
            v37 = pSplitAreas[v35];
            v36 = x == 1.0
                ? 2
                * (flCutPlaneD <= (((vCutNorm->y * v37->m_vCenter.y) + v37->m_vCenter.x)
                                 + (vCutNorm->z * v37->m_vCenter.z)))
                + 1
                : 2
                * (flCutPlaneD > (((x * v37->m_vCenter.x) + (v37->m_vCenter.y * vCutNorm->y))
                                + (vCutNorm->z * v37->m_vCenter.z)));
            (*(m_pGenerator->_vptr_CNavGeneratorBase + 6))(m_pGenerator, this, v37, v36);
            if ( nNumNewAreas <= ++v35 )
              break;
            x = vCutNorm->x;
          }
        }
      }
    }
    if ( bDestoryOriginal )
    {
      (*(this->m_rNavMesh->_vptr_CNavMesh + 25))(this->m_rNavMesh, this);
      v41 = this->m_rNavMesh;
      *&vLadderPos.x = this;
      CUtlVectorBase<CNavArea *,CUtlMemory<CNavArea *,int>>::FindAndRemove(&v41->m_SelectionSet.m_SetAreas, &vLadderPos);
      (*(this->m_rNavMesh->_vptr_CNavMesh + 5))(this->m_rNavMesh, this);
    }
    if ( ppAreasOut != 0 && nNumNewAreas > 0 )
    {
      v38 = 0;
      do
      {
        ppAreasOut[v38] = pSplitAreas[v38];
        ++v38;
      }
      while ( nNumNewAreas > v38 );
    }
    v39 = nNumNewAreas;
    vecNewAreas.m_Size = 0;
  }
  if ( funcPolyFactory._M_manager != 0 )
    funcPolyFactory._M_manager(&funcPolyFactory, &funcPolyFactory, std::_Manager_operation::__destroy_functor);
  return v39;
}


// CNavArea::GeometryChanged  (line 1065, @0x00000000031e7c10, libserver.so)
// calls: CNavPoly::GeometryChanged, CNavArea::UpdateFlagBottleneck, CNavArea::UpdateFlagUnderWater
void __fastcall CNavArea::GeometryChanged(CNavArea *const this)
{
  CNavPoly::GeometryChanged(this);
  CNavArea::UpdateFlagBottleneck(this);
  CNavArea::UpdateFlagUnderWater(this);
}


// CNavArea::ConnectivityChanged  (line 1074, @0x00000000031e4260, libserver.so)
// calls: CNavArea::UpdateFlagBottleneck
// callers: CNavArea::Load
void __fastcall CNavArea::ConnectivityChanged(CNavArea *const this)
{
  CNavArea::UpdateFlagBottleneck(this);
}


// CNavArea::IsConnectedToLadder  (line 1081, @0x00000000031e3290, libserver.so)  // inlines: Count, Indices
// callers: CNavDrawLadder::DrawLadder
bool __fastcall CNavArea::IsConnectedToLadder(
        const CNavArea *const this,
        const CNavLadder *pLadder,
        CNavLadder::LadderDirectionType dir)
{
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rcx
  bool result; // al
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v6; // rax
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v7; // rdx

  m_pLaddersAndElevators = this->m_pLaddersAndElevators;
  result = 0;
  if ( m_pLaddersAndElevators != 0 )
  {
    m_pData = m_pLaddersAndElevators->m_ladders[dir].m_pData;
    if ( m_pData != 0 && m_pData->m_Size != 0 )
    {
      if ( m_pData->m_Elements[0].pLadder == pLadder )
      {
        return 1;
      }
      else
      {
        v6 = m_pData;
        v7 = m_pData + (m_pData->m_Size - 1);
        while ( v6 != v7 )
        {
          ++v6;
          if ( v6->m_Elements[0].pLadder == pLadder )
            return 1;
        }
        return 0;
      }
    }
  }
  return result;
}


// CNavArea::IsConnectedOnEdge  (line 1099, @0x00000000031e32f0, libserver.so)  // inlines: Count, Indices
// callers: JumpConnector::TryToConnect, CNavGenerator::SplitAreasUnderOverhangs, CNavGeneratorAAQuad::CreateObstacleTopAreaIfNecessary, CNavGenerator::StichAndRemoveJumpAreas, CNavGeneratorAAQuad::FixConnections, CNavArea::FinishSplitEdit, CNavArea::ConnectSplitEdge, CNavArea::CalcBoundaryEdges
bool __fastcall CNavArea::IsConnectedOnEdge(const CNavArea *const this, const CNavArea *pArea, NavEdgeIndex nEdge)
{
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  int m_Size; // edx
  CNavConnect *v5; // rax
  CNavConnect *v6; // rdx

  if ( pArea != this )
  {
    m_pData = this->m_connect[nEdge].m_pData;
    if ( m_pData == 0 )
      return 0;
    m_Size = m_pData->m_Size;
    if ( m_pData->m_Size == 0 )
      return 0;
    if ( pArea != m_pData->m_Elements[0].m_pArea )
    {
      v5 = &m_pData->m_Elements[1];
      v6 = &v5[m_Size - 1];
      while ( v5 != v6 )
      {
        ++v5;
        if ( pArea == v5[-1].m_pArea )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}


// CNavArea::IsConnectedOnAny  (line 1121, @0x00000000031e3350, libserver.so)  // inlines: Count, Indices, operator++
// callers: CNavPathCostCore::IsToAreaTraversable, CNavDrawArea::DrawAreaConnection, std::_Function_handler<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*), CNavDrawArea::DrawConnectedAreas(const CNavArea&, float)::__lambda12>::_M_invoke, CollectAdjacentAreas, CNavSplice::ExpandSpliceMesh, CNavEditor::CommandNavDisconnect, CNavArea::Disconnect
bool __fastcall CNavArea::IsConnectedOnAny(
        const CNavArea *const this,
        const CNavArea *pArea,
        bool bCheckLadders,
        NavEdgeIndex *pEdgeOut,
        NavEdgeIndex *pBackEdgeOut)
{
  int m_nVerts; // r12d
  __int64 v6; // rax
  NavEdgeIndex i; // r11
  CNavConnectVector *v8; // rbx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // r9
  int m_Size; // r10d
  CNavConnect *v11; // r9
  int v12; // eax
  bool result; // al
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rdi
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v15; // rdx
  const CNavArea **pLadder; // rax
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v17; // rcx
  const CNavArea **v18; // rax
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v19; // rax
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v20; // rcx
  NavLadderConnect v21; // rdx

  if ( pEdgeOut != 0 )
    *pEdgeOut = -1;
  if ( pBackEdgeOut != 0 )
    *pBackEdgeOut = -1;
  if ( pArea == this )
    return 1;
  m_nVerts = this->m_nVerts;
  if ( m_nVerts > 0 )
  {
    v6 = 0;
    for ( i = 0; i < m_nVerts; v6 = ++i )
    {
      v8 = &this->m_connect[v6];
      m_pData = v8->m_pData;
      if ( v8->m_pData != 0 )
      {
        m_Size = m_pData->m_Size;
        if ( m_pData->m_Size != 0 )
        {
          if ( pArea == m_pData->m_Elements[0].m_pArea )
          {
            v12 = 0;
LABEL_37:
            if ( pEdgeOut != 0 )
              *pEdgeOut = i;
            if ( pBackEdgeOut != 0 )
              *pBackEdgeOut = v8->m_pData->m_Elements[v12].m_nBackEdge;
            return 1;
          }
          v11 = &m_pData->m_Elements[1];
          v12 = 0;
          while ( ++v12 != m_Size )
          {
            ++v11;
            if ( pArea == v11[-1].m_pArea )
              goto LABEL_37;
          }
        }
      }
    }
  }
  result = 0;
  if ( bCheckLadders )
  {
    m_pLaddersAndElevators = this->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators != 0 )
    {
      v15 = m_pLaddersAndElevators->m_ladders[0].m_pData;
      if ( m_pLaddersAndElevators->m_ladders[0].m_pData != 0 && v15->m_Size != 0 )
      {
        pLadder = v15->m_Elements[0].pLadder;
        if ( pLadder[7] == pArea || pLadder[4] == pArea || pLadder[5] == pArea || pLadder[6] == pArea )
          return 1;
        v17 = v15 + (v15->m_Size - 1);
        while ( v15 != v17 )
        {
          v18 = v15->m_Elements[1].pLadder;
          if ( v18[7] != pArea && v18[4] != pArea && v18[5] != pArea )
          {
            ++v15;
            if ( v18[6] != pArea )
              continue;
          }
          return 1;
        }
      }
      v19 = m_pLaddersAndElevators->m_ladders[1].m_pData;
      if ( v19 != 0 && v19->m_Size != 0 )
      {
        if ( v19->m_Elements[0].pLadder->m_pBottomArea == pArea )
          return 1;
        v20 = v19 + (v19->m_Size - 1);
        while ( v19 != v20 )
        {
          v21 = v19->m_Elements[1];
          ++v19;
          if ( v21.pLadder->m_pBottomArea == pArea )
            return 1;
        }
      }
      return 0;
    }
  }
  return result;
}


// CNavArea::ComputeGroundHeightChange  (line 1193, @0x00000000031e34e0, libserver.so)  // inlines: GetCenter, VectorAdd, operator+
// calls: CNavPoly::GetClosestPointOnPoly, CNavMesh::GetSimpleGroundHeight
float __fastcall CNavArea::ComputeGroundHeightChange(const CNavArea *const this, const CNavArea *const rArea)
{
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t v6; // xmm2_4
  vec_t v7; // xmm0_4
  vec_t y; // xmm1_4
  const CNavMesh *m_rNavMesh; // rdi
  bool SimpleGroundHeight; // al
  float result; // xmm0_4
  const CNavMesh *v12; // rdi
  bool v13; // al
  float flToZ; // [rsp+18h] [rbp-58h] BYREF
  float flFromZ; // [rsp+1Ch] [rbp-54h] BYREF
  Vector vCloseTo; // [rsp+20h] [rbp-50h]
  Vector vCloseFrom; // [rsp+30h] [rbp-40h]
  Vector vPos; // [rsp+40h] [rbp-30h] BYREF
  Vector ClosestPointOnPoly; // 0:kr00_12.12

  z = this->m_vCenter.z;
  x = this->m_vCenter.x;
  vPos.y = this->m_vCenter.y;
  vPos.z = z;
  vPos.x = x;
  ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(rArea, &vPos);
  v6 = rArea->m_vCenter.x;
  *&vCloseTo.x = *&ClosestPointOnPoly.x;
  v7 = rArea->m_vCenter.z;
  vCloseTo.z = ClosestPointOnPoly.z;
  y = rArea->m_vCenter.y;
  vPos.x = v6;
  vPos.y = y;
  vPos.z = v7;
  vCloseFrom = CNavPoly::GetClosestPointOnPoly(this, &vPos);
  m_rNavMesh = this->m_rNavMesh;
  vPos.y = ClosestPointOnPoly.y + 0.0;
  vPos.z = ClosestPointOnPoly.z + 18.0;
  vPos.x = ClosestPointOnPoly.x + 0.0;
  SimpleGroundHeight = CNavMesh::GetSimpleGroundHeight(m_rNavMesh, &vPos, &flToZ, 0);
  result = 0.0;
  if ( SimpleGroundHeight )
  {
    v12 = this->m_rNavMesh;
    vPos.y = vCloseFrom.y + 0.0;
    vPos.z = vCloseFrom.z + 18.0;
    vPos.x = vCloseFrom.x + 0.0;
    v13 = CNavMesh::GetSimpleGroundHeight(v12, &vPos, &flFromZ, 0);
    result = 0.0;
    if ( v13 )
      return flToZ - flFromZ;
  }
  return result;
}


// CNavArea::AddIncomingConnection  (line 1216, @0x00000000031e3630, libserver.so)  // inlines: AddToTail, Alloc, Count, EnsureCapacity, Find, GetSize, Realloc
// callers: CNavArea::ConnectTo, CNavArea::Disconnect, CNavMesh::PostLoadNavMesh
void __fastcall CNavArea::AddIncomingConnection(
        CNavArea *const this,
        CNavArea *const rSource,
        NavEdgeIndex nEdge,
        NavEdgeIndex nBackEdge)
{
  CNavConnectVector *v4; // r15
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  __int64 m_Size; // rbx
  int *v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  NavEdgeIndex v12; // cl
  __int64 v13; // rax
  __int64 v14; // rbx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v15; // rax

  v4 = &this->m_incomingConnect[nEdge];
  m_pData = v4->m_pData;
  if ( v4->m_pData != 0 )
  {
    m_Size = m_pData->m_Size;
    if ( m_Size > 0 )
    {
      if ( rSource == m_pData->m_Elements[0].m_pArea )
        return;
      v8 = &m_pData->m_Elements[1];
      v9 = 0;
      while ( ++v9 != m_Size )
      {
        v8 += 4;
        if ( rSource == *(v8 - 2) )
        {
          if ( v9 == -1 )
            break;
          return;
        }
      }
    }
    v10 = 16LL * (m_Size + 1) + 8;
    v11 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc);
    v12 = nBackEdge;
    if ( v10 > v11 )
    {
      v13 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v4->m_pData, v10);
      v12 = nBackEdge;
      v4->m_pData = v13;
    }
    else
    {
      v13 = v4->m_pData;
    }
  }
  else
  {
    m_Size = 0;
    v15 = (**g_pMemAlloc)(g_pMemAlloc, 24);
    v12 = nBackEdge;
    v4->m_pData = v15;
    v15->m_Size = 0;
    v13 = v4->m_pData;
  }
  v14 = v13 + 16 * m_Size;
  *(v14 + 8) = rSource;
  *(v14 + 16) = v12;
  ++v4->m_pData->m_Size;
}


// CNavArea::FinishSplitEdit  (line 1227, @0x00000000031e4ca0, libserver.so)  // inlines: Count, Indices, NavDirOpposite
// calls: CNavPoly::IsOverlappingY, CNavPoly::IsOverlappingX, CNavArea::ConnectTo, CNavArea::IsConnectedOnEdge
// callers: CNavArea::SplitArea_Old
void __fastcall CNavArea::FinishSplitEdit(CNavArea *const this, CNavArea *pNewArea, NavDirType ignoreEdge)
{
  CNavArea *v3; // r14
  float v5; // xmm1_4
  char v6; // r14
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int m_Size; // r12d
  int v9; // r13d
  __int64 v10; // rax
  CNavArea *m_pArea; // rbx
  int v12; // r13d
  CNavConnectVector *v13; // rbx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  CNavArea *v17; // r12
  CNavGeneratorBase *m_pGenerator; // rdi
  int v20; // [rsp+14h] [rbp-4Ch]
  int v22; // [rsp+20h] [rbp-40h]
  NavEdgeIndex v23[4]; // [rsp+24h] [rbp-3Ch]
  CNavArea *pNewAreaa; // [rsp+28h] [rbp-38h]

  v3 = pNewArea;
  (*(pNewArea->_vptr_CNavPoly + 27))(pNewArea, this, 0);
  *v23 = 0;
  if ( this->m_nVerts <= 0 )
    goto LABEL_34;
  pNewAreaa = v3;
  v6 = 0;
  do
  {
    if ( *v23 != ignoreEdge )
    {
      m_pData = this->m_connect[*v23].m_pData;
      if ( m_pData != 0 )
      {
        m_Size = m_pData->m_Size;
        if ( m_pData->m_Size != 0 )
        {
          v20 = *v23 + 2;
          v22 = (*v23 + 2) % 4;
          v9 = 0;
          while ( 1 )
          {
            v10 = v9;
            m_pArea = m_pData->m_Elements[v10].m_pArea;
            if ( v6 == 1 )
              goto LABEL_9;
            if ( v6 > 1 )
            {
              if ( v6 != 2 )
              {
                if ( v6 != 3 )
                  goto LABEL_10;
LABEL_9:
                if ( !CNavPoly::IsOverlappingY(pNewAreaa, m_pData->m_Elements[v10].m_pArea, v5) )
                  goto LABEL_10;
                goto LABEL_16;
              }
            }
            else if ( v6 != 0 )
            {
              goto LABEL_10;
            }
            if ( !CNavPoly::IsOverlappingX(pNewAreaa, m_pData->m_Elements[v10].m_pArea, v5) )
              goto LABEL_10;
LABEL_16:
            CNavArea::ConnectTo(pNewAreaa, m_pArea, v23[0], -1, 1);
            if ( !CNavArea::IsConnectedOnEdge(m_pArea, this, v22) )
            {
LABEL_10:
              if ( ++v9 == m_Size )
                goto LABEL_18;
              goto LABEL_11;
            }
            ++v9;
            CNavArea::ConnectTo(m_pArea, pNewAreaa, v22, -1, 1);
            if ( v9 == m_Size )
              goto LABEL_18;
LABEL_11:
            m_pData = this->m_connect[*v23].m_pData;
          }
        }
      }
      v20 = *v23 + 2;
LABEL_18:
      v12 = 0;
      v13 = &this->m_incomingConnect[*v23];
      v14 = v13->m_pData;
      while ( 1 )
      {
        if ( v14 != 0 )
          v15 = v14->m_Size;
        else
          v15 = 0;
        if ( v12 >= v15 )
          goto LABEL_32;
        v16 = v12;
        v17 = v14->m_Elements[v16].m_pArea;
        if ( v6 == 1 )
          goto LABEL_21;
        if ( v6 > 1 )
          break;
        if ( v6 == 0 )
          goto LABEL_30;
LABEL_23:
        ++v12;
      }
      if ( v6 == 2 )
      {
LABEL_30:
        if ( !CNavPoly::IsOverlappingX(pNewAreaa, v14->m_Elements[v16].m_pArea, v5) )
          goto LABEL_22;
      }
      else
      {
        if ( v6 != 3 )
          goto LABEL_23;
LABEL_21:
        if ( !CNavPoly::IsOverlappingY(pNewAreaa, v14->m_Elements[v16].m_pArea, v5) )
        {
LABEL_22:
          v14 = v13->m_pData;
          goto LABEL_23;
        }
      }
      CNavArea::ConnectTo(v17, pNewAreaa, v20 % 4, -1, 1);
      goto LABEL_22;
    }
LABEL_32:
    *v23 = ++v6;
  }
  while ( v6 < this->m_nVerts );
  v3 = pNewAreaa;
LABEL_34:
  (*(this->m_rNavMesh->_vptr_CNavMesh + 28))(this->m_rNavMesh, v3);
  m_pGenerator = this->m_rNavMesh->m_pGenerator;
  if ( m_pGenerator != 0 )
    (*(m_pGenerator->_vptr_CNavGeneratorBase + 6))(m_pGenerator, this, v3, ignoreEdge);
}


// CNavArea::ConnectSplitEdge  (line 1313, @0x00000000031e4f70, libserver.so)  // inlines: ComputeOrientedPortal, Count, Indices
// calls: CNavArea::ConnectTo, CNavArea::IsConnectedOnEdge, CNavPoly::ComputeOrientedPortal
// callers: CNavArea::SplitArea
void __fastcall CNavArea::ConnectSplitEdge(
        CNavArea *const this,
        NavEdgeIndex nNewAreaEdge,
        CNavArea *const rSrcArea,
        NavEdgeIndex nSrcAreaEdge,
        bool bEdgeComplete)
{
  CNavConnectVector *v6; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int v8; // r15d
  NavEdgeIndex m_nBackEdge; // r14
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v10; // rax
  CNavConnect *m_Elements; // r14
  CNavArea *m_pArea; // r13
  CNavConnectVector *v13; // r14
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v14; // rcx
  int v15; // r13d
  int v16; // ebx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v17; // rdx
  CNavConnect *v18; // r10
  CNavArea *v19; // r9
  __int64 nSrcAreaEdgea; // [rsp+8h] [rbp-88h]
  CNavConnectVector *v23; // [rsp+28h] [rbp-68h]
  CNavConnect *v24; // [rsp+28h] [rbp-68h]
  int m_Size; // [rsp+30h] [rbp-60h]
  CNavArea *v26; // [rsp+30h] [rbp-60h]
  CNavOrientedPortal portalConnect; // [rsp+40h] [rbp-50h] BYREF

  nSrcAreaEdgea = nSrcAreaEdge;
  v6 = &rSrcArea->m_connect[nSrcAreaEdge];
  m_pData = v6->m_pData;
  v23 = v6;
  if ( v6->m_pData != 0 )
  {
    m_Size = m_pData->m_Size;
    if ( m_pData->m_Size != 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        v10 = m_pData + 2 * v8;
        m_Elements = v10->m_Elements;
        m_pArea = v10->m_Elements[0].m_pArea;
        if ( bEdgeComplete
          || (CNavPoly::ComputeOrientedPortal(
                this,
                v10->m_Elements[0].m_pArea,
                nNewAreaEdge,
                v10->m_Elements[0].m_nBackEdge,
                -1.0,
                &portalConnect),
              portalConnect.m_flWidth > CNavOrientedPortal::ms_flMinAllowedWidth) )
        {
          CNavArea::ConnectTo(this, m_pArea, nNewAreaEdge, m_Elements->m_nBackEdge, 0);
          m_nBackEdge = m_Elements->m_nBackEdge;
          if ( CNavArea::IsConnectedOnEdge(m_pArea, rSrcArea, m_nBackEdge) )
            CNavArea::ConnectTo(m_pArea, this, m_nBackEdge, nNewAreaEdge, 0);
          if ( ++v8 == m_Size )
            break;
        }
        else if ( ++v8 == m_Size )
        {
          break;
        }
        m_pData = v23->m_pData;
      }
    }
  }
  v13 = &rSrcArea->m_incomingConnect[nSrcAreaEdgea];
  v14 = v13->m_pData;
  if ( v13->m_pData != 0 )
  {
    v15 = v14->m_Size;
    if ( v14->m_Size != 0 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = v14 + 2 * v16;
        v18 = v17->m_Elements;
        v19 = v17->m_Elements[0].m_pArea;
        if ( bEdgeComplete
          || (v24 = v17->m_Elements,
              v26 = v17->m_Elements[0].m_pArea,
              CNavPoly::ComputeOrientedPortal(
                this,
                v19,
                nNewAreaEdge,
                v17->m_Elements[0].m_nBackEdge,
                -1.0,
                &portalConnect),
              v19 = v26,
              v18 = v24,
              portalConnect.m_flWidth > CNavOrientedPortal::ms_flMinAllowedWidth) )
        {
          ++v16;
          CNavArea::ConnectTo(v19, this, v18->m_nBackEdge, nNewAreaEdge, 0);
          if ( v16 == v15 )
            return;
        }
        else if ( ++v16 == v15 )
        {
          return;
        }
        v14 = v13->m_pData;
      }
    }
  }
}


// CNavArea::SpliceEdit  (line 1385, @0x00000000031e5180, libserver.so)
// calls: CNavPoly::SpliceWithPoly, CNavArea::ConnectTo, CNavMesh::OnEditCreateNotify
// callers: CNavEditor::CommandNavSplice
CNavArea *__fastcall CNavArea::SpliceEdit(CNavArea *const this, CNavArea *const rOtherArea)
{
  CNavArea *v4; // rbx
  int nEdgeThisToSplice; // [rsp+10h] [rbp-30h] BYREF
  int nEdgeSpliceToThis; // [rsp+14h] [rbp-2Ch] BYREF
  int nEdgeSpliceToOther; // [rsp+18h] [rbp-28h] BYREF
  int nEdgeOtherToSplice[9]; // [rsp+1Ch] [rbp-24h] BYREF

  v4 = (*(this->m_rNavMesh->_vptr_CNavMesh + 4))(this->m_rNavMesh);
  if ( v4 == 0 )
    return 0;
  if ( CNavPoly::SpliceWithPoly(
         this,
         rOtherArea,
         v4,
         &nEdgeThisToSplice,
         &nEdgeSpliceToThis,
         &nEdgeSpliceToOther,
         nEdgeOtherToSplice) )
  {
    CNavArea::ConnectTo(this, v4, nEdgeThisToSplice, -1, 1);
    CNavArea::ConnectTo(v4, this, nEdgeSpliceToThis, -1, 1);
    CNavArea::ConnectTo(v4, rOtherArea, nEdgeSpliceToOther, -1, 1);
    CNavArea::ConnectTo(rOtherArea, v4, nEdgeOtherToSplice[0], -1, 1);
    (*(this->m_rNavMesh->_vptr_CNavMesh + 28))(this->m_rNavMesh, v4);
    CNavMesh::OnEditCreateNotify(this->m_rNavMesh, v4);
    (*(v4->_vptr_CNavPoly + 27))(v4, this, rOtherArea);
    return v4;
  }
  else
  {
    (*(this->m_rNavMesh->_vptr_CNavMesh + 5))(this->m_rNavMesh, v4);
    return 0;
  }
}


// CNavArea::MergeEdit  (line 1416, @0x00000000031e6430, libserver.so)
// calls: CNavPoly::MergeWithPoly, CNavArea::MergeAdjacentConnections, CNavMesh::OnEditCreateNotify
// callers: CNavEditor::CommandNavMerge
bool __fastcall CNavArea::MergeEdit(CNavArea *const this, CNavArea *const rAdjArea)
{
  bool result; // al
  bool v5; // [rsp+Ch] [rbp-14h]

  result = CNavPoly::MergeWithPoly(this, rAdjArea);
  if ( result )
  {
    v5 = result;
    CNavArea::MergeAdjacentConnections(this, rAdjArea);
    (*(this->_vptr_CNavPoly + 27))(this, rAdjArea, 0);
    (*(this->m_rNavMesh->_vptr_CNavMesh + 25))(this->m_rNavMesh, rAdjArea);
    (*(this->m_rNavMesh->_vptr_CNavMesh + 5))(this->m_rNavMesh, rAdjArea);
    CNavMesh::OnEditCreateNotify(this->m_rNavMesh, this);
    return v5;
  }
  return result;
}


// CNavArea::InheritAttributes  (line 1438, @0x00000000031e26b0, libserver.so)  // inlines: AddAttributes, AddFlags, SetAttributes, operator|
void __fastcall CNavArea::InheritAttributes(CNavArea *const this, const CNavArea *pFirst, const CNavArea *pSecond)
{
  uint64 m_Flags; // rax

  if ( pFirst != 0 )
  {
    m_Flags = pFirst->m_AreaAttributes.m_Flags;
    if ( pSecond != 0 )
      this->m_AreaAttributes.m_Flags = pSecond->m_AreaAttributes.m_Flags | m_Flags;
    else
      this->m_AreaAttributes.m_Flags |= m_Flags;
  }
}


// CNavArea::FindOutgoingConnectionEdgeIndex  (line 1452, @0x00000000031e3740, libserver.so)  // inlines: Count, Indices
int __fastcall CNavArea::FindOutgoingConnectionEdgeIndex(CNavArea *const this, const CNavArea *pArea)
{
  int m_nVerts; // r9d
  int result; // eax
  int v4; // r8d
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int m_Size; // ecx
  CNavConnect *v7; // rdx
  CNavConnect *v8; // rcx

  m_nVerts = this->m_nVerts;
  result = -1;
  if ( m_nVerts > 0 )
  {
    result = 0;
    v4 = 0;
    do
    {
      m_pData = this->m_connect[result].m_pData;
      if ( m_pData != 0 )
      {
        m_Size = m_pData->m_Size;
        if ( m_pData->m_Size != 0 )
        {
          if ( m_pData->m_Elements[0].m_pArea == pArea )
            return result;
          v7 = &m_pData->m_Elements[1];
          v8 = &v7[m_Size - 1];
          while ( v7 != v8 )
          {
            ++v7;
            if ( v7[-1].m_pArea == pArea )
              return result;
          }
        }
      }
      result = ++v4;
    }
    while ( v4 < m_nVerts );
    return -1;
  }
  return result;
}


// CNavArea::GetRandomAdjacentArea  (line 1470, @0x00000000031e37c0, libserver.so)  // inlines: Count
// calls: RandomInt
CNavArea *__fastcall CNavArea::GetRandomAdjacentArea(const CNavArea *const this)
{
  CNavConnectVector *v1; // rbx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax

  v1 = &this->m_connect[RandomInt(0, 3)];
  m_pData = v1->m_pData;
  if ( v1->m_pData != 0 && m_pData->m_Size > 0 )
    return v1->m_pData->m_Elements[RandomInt(0, (m_pData->m_Size - 1))].m_pArea;
  else
    return 0;
}


// CNavArea::IsLineToPointWithinPortal  (line 1485, @0x00000000031e3820, libserver.so)  // inlines: ComputeOrientedPortal, Count, GetNextEdgeIndexCCW, GetNextEdgeIndexCW, IsEdgeConnectedOut
// calls: CNavPoly::ComputeOrientedPortal, CNavOrientedPortal::ExpandPortal, CNavOrientedPortal::TestLineToPortalXY
// callers: CPath::ComputeSpecialSegments
bool __fastcall CNavArea::IsLineToPointWithinPortal(
        const CNavArea *const this,
        const CNavArea *const rToArea,
        NavEdgeIndex edge,
        NavEdgeIndex backEdge,
        const Vector *const vSegFrom,
        const Vector *const vSegTo,
        float flMargin)
{
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  float v10; // xmm1_4
  float v11; // xmm2_4
  float flExpansionRight; // [rsp+8h] [rbp-48h]
  CNavOrientedPortal navPortal; // [rsp+10h] [rbp-40h] BYREF

  m_pData = this->m_connect[((edge + 1) % this->m_nVerts)].m_pData;
  if ( m_pData != 0 && m_pData->m_Size > 0 )
    v10 = flMargin;
  else
    v10 = 0.0;
  flExpansionRight = v10;
  CNavPoly::ComputeOrientedPortal(this, rToArea, edge, backEdge, -1.0, &navPortal);
  CNavOrientedPortal::ExpandPortal(&navPortal, flExpansionRight, v11);
  return CNavOrientedPortal::TestLineToPortalXY(&navPortal, vSegFrom, vSegTo, flMargin);
}


// CNavArea::ClipRayToAreaInterior  (line 1511, @0x00000000031e3910, libserver.so)  // inlines: Dot, DotProduct2D, FastSqrt, GetVert, GetVertIndexCCWForEdge, Init, Length, NormalizeInPlace, NormalizeInPlaceSafe, Ray2D_t, Vector2D, Vector2DLength, Vector2DNormalize, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator/=, operator=
// calls: IntersectRayWithRay, Warning
// callers: CNavMesh::TestRayToMesh
// strings: "CNavMesh::TestRayToMesh - Ray intersection failure... precision error?\n"
void __fastcall CNavArea::ClipRayToAreaInterior(
        const CNavArea *const this,
        const Vector2D *const vStart,
        const Vector2D *const vEnd,
        float *pTOut,
        Vector *pExitNormalOut)
{
  float y; // xmm6_4
  float x; // xmm0_4
  float v8; // xmm6_4
  int m_nVerts; // ecx
  float v10; // xmm1_4
  float v11; // xmm1_4
  int v12; // r15d
  float *v13; // rax
  float v14; // xmm4_4
  float v15; // xmm2_4
  float *v16; // rax
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float vClosestEdgeNormal; // [rsp+14h] [rbp-7Ch]
  float v26; // [rsp+20h] [rbp-70h]
  float flClosestEdgeIntersectionT; // [rsp+24h] [rbp-6Ch]
  float v28; // [rsp+28h] [rbp-68h]
  float v29; // [rsp+2Ch] [rbp-64h]
  float t; // [rsp+38h] [rbp-58h] BYREF
  float s; // [rsp+3Ch] [rbp-54h] BYREF
  Ray2D_t ray; // [rsp+40h] [rbp-50h] BYREF
  Ray2D_t edgeRay; // [rsp+50h] [rbp-40h] BYREF

  y = vEnd->y;
  x = vStart->x;
  ray.m_start.y = vStart->y;
  v8 = y - ray.m_start.y;
  m_nVerts = this->m_nVerts;
  v10 = vEnd->x;
  ray.m_start.x = x;
  v11 = v10 - x;
  ray.m_delta.y = v8;
  ray.m_delta.x = v11;
  if ( m_nVerts > 0 )
  {
    v12 = 0;
    flClosestEdgeIntersectionT = 3.4028235e38;
    while ( 1 )
    {
      v13 = (this + 12 * ((v12 + 1) % m_nVerts));
      v14 = v13[2];
      v15 = v13[3];
      v16 = (this + 12 * v12);
      v17 = v16[3];
      v18 = v16[2] - v14;
      if ( ((v11 * (v15 - v17)) + (v8 * v18)) <= 0.00000011920929 )
        goto LABEL_3;
      v28 = v15 - v17;
      edgeRay.m_start.x = v14;
      edgeRay.m_start.y = v15;
      edgeRay.m_delta.x = v18;
      v29 = v18;
      edgeRay.m_delta.y = v17 - v15;
      if ( !IntersectRayWithRay(&ray, &edgeRay, &t, &s) )
        break;
      if ( flClosestEdgeIntersectionT > t )
      {
        v26 = v29;
        vClosestEdgeNormal = v28;
        flClosestEdgeIntersectionT = t;
      }
      m_nVerts = this->m_nVerts;
      if ( m_nVerts <= ++v12 )
        goto LABEL_10;
LABEL_4:
      v11 = ray.m_delta.x;
      v8 = ray.m_delta.y;
    }
    Warning("CNavMesh::TestRayToMesh - Ray intersection failure... precision error?\n");
    m_nVerts = this->m_nVerts;
LABEL_3:
    if ( m_nVerts <= ++v12 )
      goto LABEL_10;
    goto LABEL_4;
  }
  flClosestEdgeIntersectionT = 3.4028235e38;
LABEL_10:
  if ( pTOut != 0 )
    *pTOut = flClosestEdgeIntersectionT;
  if ( pExitNormalOut != 0 )
  {
    v19 = 0.0;
    v20 = fsqrt((vClosestEdgeNormal * vClosestEdgeNormal) + (v26 * v26));
    if ( v20 == 0.0 )
    {
      v22 = 1.0;
    }
    else
    {
      v21 = 1.0 / v20;
      v22 = vClosestEdgeNormal * (1.0 / v20);
      v19 = v21 * v26;
    }
    pExitNormalOut->x = v22;
    pExitNormalOut->y = v19;
    pExitNormalOut->z = 0.0;
  }
}


// CNavArea::Validate  (line 1560, @0x00000000031e25f0, libserver.so)
void __fastcall CNavArea::Validate(const CNavArea *const this)
{
  ;
}


// CNavArea::ClearSearchLists  (line 1567, @0x00000000031e3b40, libserver.so)  // inlines: Element, FastRemove, Get, GetArea, IsInCurrentNavMesh, MakeNewMarker, PercolateDown, RemoveAll, RemoveAtHead, SetIndex, Swap, memcpy, operator(), operator[]
// callers: CPath::ComputePathWithOpenGoalCore, NavAreaBuildPath
// globals: CNavArea::ms_nMasterMarker, CNavArea::ms_pOpenList
// write access to const memory has been detected, the output may be wrong!
void __cdecl CNavArea::ClearSearchLists()
{
  unsigned int v0; // eax
  CNavOpenList *v1; // r15
  int m_Size; // r14d
  int v3; // r8d
  CNavOpenListElement *m_pMemory; // rax
  int v5; // r8d
  CNavOpenListElement *v6; // rax
  CNavOpenListElement *v7; // r8
  CNavArea *m_pData; // rax
  CNavOpenListElement *v9; // rdx
  int v10; // r13d
  int v11; // r12d
  int v12; // ebx
  CNavOpenListElement *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  CNavOpenListElement *v16; // rax
  CNavArea *v17; // r9
  const CNavMesh *m_pAssociatedNavMesh; // rdi
  float m_flTotalCost; // xmm2_4
  float m_flCostSoFar; // xmm1_4
  float m_flPathLengthSoFar; // xmm0_4
  CNavArea *v22; // rcx
  CNavOpenListElement *v23; // rax
  CNavOpenListElement *v24; // rsi
  CNavMesh *v25; // rax
  CNavOpenListElement *v26; // rdx
  int v27; // r14d
  CNavArea *v28; // rax
  int v29; // [rsp+Ch] [rbp-34h]

  v0 = 1;
  v1 = CNavArea::ms_pOpenList;
  if ( CNavArea::ms_nMasterMarker != -1 )
    v0 = CNavArea::ms_nMasterMarker + 1;
  CNavArea::ms_nMasterMarker = v0;
LABEL_4:
  m_Size = v1->m_PriorityQueue.m_heap.m_Size;
LABEL_5:
  if ( m_Size <= 0 )
    return;
  do
  {
    v3 = m_Size;
    m_pMemory = v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
    if ( m_pMemory->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh
      && (v28 = m_pMemory->m_pNavArea.m_pData) != 0
      && (v28->m_nOpenListHeapIndex = -1, v3 = v1->m_PriorityQueue.m_heap.m_Size, v1->m_PriorityQueue.m_heap.m_Size <= 0) )
    {
      m_Size = v1->m_PriorityQueue.m_heap.m_Size;
    }
    else
    {
      v5 = v3 - 1;
      if ( v5 != 0 )
      {
        v6 = v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
        v7 = &v6[v5];
        v6->m_pNavArea.m_pData = v7->m_pNavArea.m_pData;
        v6->m_pNavArea.m_pAssociatedNavMesh = v7->m_pNavArea.m_pAssociatedNavMesh;
        *&v6->m_flTotalCost = *&v7->m_flTotalCost;
        *&v6->m_flPathLengthSoFar = *&v7->m_flPathLengthSoFar;
        v5 = v1->m_PriorityQueue.m_heap.m_Size - 1;
      }
      v1->m_PriorityQueue.m_heap.m_Size = v5;
      m_Size = v5;
      if ( v5 > 0 )
      {
        m_pData = 0;
        v9 = v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
        if ( v9->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
          m_pData = v9->m_pNavArea.m_pData;
        m_pData->m_nOpenListHeapIndex = 0;
        m_Size = v1->m_PriorityQueue.m_heap.m_Size;
      }
    }
    v29 = m_Size / 2;
    if ( m_Size / 2 <= 0 )
      goto LABEL_5;
    v10 = 0;
    v11 = m_Size;
    while ( 1 )
    {
      v27 = 2 * v10 + 2;
      v12 = 2 * v10 + 1;
      if ( v12 >= v11 )
      {
        v12 = v10;
        if ( v27 >= v11 )
          goto LABEL_16;
LABEL_26:
        if ( v1->m_PriorityQueue.m_LessFunc(
               &v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v12],
               &v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v27]) )
        {
          v12 = 2 * v10 + 2;
        }
        goto LABEL_16;
      }
      if ( !v1->m_PriorityQueue.m_LessFunc(
              &v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v10],
              &v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v12]) )
        v12 = v10;
      if ( v27 < v11 )
        goto LABEL_26;
LABEL_16:
      if ( v10 == v12 )
        goto LABEL_4;
      v13 = v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
      v14 = v12;
      v15 = v10;
      v16 = &v13[v15];
      v17 = v13[v15].m_pNavArea.m_pData;
      m_pAssociatedNavMesh = v13[v15].m_pNavArea.m_pAssociatedNavMesh;
      m_flTotalCost = v13[v15].m_flTotalCost;
      v16->m_pNavArea.m_pData = v13[v14].m_pNavArea.m_pData;
      m_flCostSoFar = v13[v15].m_flCostSoFar;
      m_flPathLengthSoFar = v13[v15].m_flPathLengthSoFar;
      v16->m_pNavArea.m_pAssociatedNavMesh = v13[v14].m_pNavArea.m_pAssociatedNavMesh;
      *&v16->m_flTotalCost = *&v13[v14].m_flTotalCost;
      v16->m_flPathLengthSoFar = v13[v14].m_flPathLengthSoFar;
      v22 = 0;
      v23 = &v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v14];
      v23->m_pNavArea.m_pData = v17;
      v23->m_pNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
      v23->m_flTotalCost = m_flTotalCost;
      v23->m_flCostSoFar = m_flCostSoFar;
      v23->m_flPathLengthSoFar = m_flPathLengthSoFar;
      v24 = &v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v15];
      v25 = TheNavMesh;
      if ( v24->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
        v22 = v24->m_pNavArea.m_pData;
      v22->m_nOpenListHeapIndex = v10;
      v26 = &v1->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v14];
      if ( v25 == v26->m_pNavArea.m_pAssociatedNavMesh )
        break;
      HIDWORD(stru_10.m_pIdentityChunks[20]) = v12;
      if ( v29 <= v12 )
        goto LABEL_30;
LABEL_21:
      v10 = v12;
    }
    v26->m_pNavArea.m_pData->m_nOpenListHeapIndex = v12;
    if ( v29 > v12 )
      goto LABEL_21;
LABEL_30:
    m_Size = v1->m_PriorityQueue.m_heap.m_Size;
  }
  while ( v1->m_PriorityQueue.m_heap.m_Size > 0 );
}


// CNavArea::GetOpenListCost  (line 1577, @0x00000000031e3dd0, libserver.so)
// callers: CPath::ComputePathWithOpenGoalCore, NavAreaBuildPath
// globals: CNavArea::ms_pOpenList
float __fastcall CNavArea::GetOpenListCost(const CNavArea *const this)
{
  __int64 m_nOpenListHeapIndex; // rax

  m_nOpenListHeapIndex = this->m_nOpenListHeapIndex;
  if ( m_nOpenListHeapIndex < 0 )
    return -1.0;
  else
    return CNavArea::ms_pOpenList->m_PriorityQueue.m_heap.m_Memory.m_pMemory[m_nOpenListHeapIndex].m_flCostSoFar;
}


// CNavArea::IsBlocked  (line 1589, @0x00000000031e3e10, libserver.so)  // inlines: HasAnyFlags, HasAttributes, IsBlockedAnyRaw, IsBlockedRaw
// calls: __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CBaseCombatCharacter::IsAreaTraversable, CNavDrawArea::DrawArea_Internal, CNavObstructionManager::UnblockArea, CNavObstructionManager::UpdateBlockedArea, CNavObstructionManager::CheckAreaFloor, CNavEditor::CommandNavSelectBlockedAreas, NavAreaBuildPath, CNavBreadthFirstSearch::IncludeInSearch, CNavEditor::DrawEditMode, CLocomotionBase::IsAreaTraversable, CNavMesh::GetNavArea, CNavMesh::GetNearestNav
// strings: "nav_blockers_can_affect_flow"
// globals: `guard variable for'CNavArea::IsBlocked(int,bool)::nav_blockers_can_affect_flow, CNavArea::IsBlocked(int,bool)::nav_blockers_can_affect_flow
bool __fastcall CNavArea::IsBlocked(const CNavArea *const this, int teamID, bool bFlowComputation)
{
  uint32 m_AttributeDynamicFlags; // edx
  bool result; // al
  uint8 m_isBlockedFlags; // al

  if ( `guard variable for'CNavArea::IsBlocked(int,bool)::nav_blockers_can_affect_flow == 0
    && __cxa_guard_acquire(&`guard variable for'CNavArea::IsBlocked(int,bool)::nav_blockers_can_affect_flow) != 0 )
  {
    ConVarRef::ConVarRef(
      &CNavArea::IsBlocked(int,bool)const::nav_blockers_can_affect_flow,
      "nav_blockers_can_affect_flow");
    __cxa_guard_release(&`guard variable for'CNavArea::IsBlocked(int,bool)::nav_blockers_can_affect_flow);
  }
  if ( !bFlowComputation
    || ((m_AttributeDynamicFlags = this->m_AttributeDynamicFlags) & 4) == 0
    || (result = 0,
        CNavArea::IsBlocked(int,bool)const::nav_blockers_can_affect_flow.m_pConVarState->m_Value.m_nValue != 0)
    && (m_AttributeDynamicFlags & 2) != 0 )
  {
    if ( teamID == -1 )
    {
      return this->m_isBlockedFlags != 0;
    }
    else
    {
      result = 1;
      if ( (CNavConfig::ms_TeamBlockerAttributes[teamID] & this->m_AreaAttributes.m_Flags) == 0 )
      {
        m_isBlockedFlags = this->m_isBlockedFlags;
        if ( (teamID & 1) != 0 )
          return (m_isBlockedFlags & 2) != 0;
        else
          return m_isBlockedFlags & 1;
      }
    }
  }
  return result;
}


// CNavArea::ShiftAreaAndLadders  (line 1614, @0x00000000031e3f20, libserver.so)  // inlines: Count, GetLadders, Indices, ShiftPoly, operator+=
// calls: CNavLadder::Shift
// callers: nav_shift, CNavEditor::CommandNavEndShiftXY, CNavMesh::ShiftMesh
void __fastcall CNavArea::ShiftAreaAndLadders(CNavArea *const this, const Vector *const vOffset)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  float *i; // rax
  float v7; // xmm0_4
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  CNavLadderConnectVector *v9; // r14
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  int m_Size; // r13d
  int v12; // ebx
  __int64 v13; // rcx
  int nLadderDir; // [rsp+Ch] [rbp-34h]

  v3 = 0;
  for ( i = this; v3 < this->m_nVerts; i[1] = i[1] + vOffset->z )
  {
    v7 = i[2];
    v3 = (v3 + 1);
    i += 3;
    *(i - 1) = v7 + vOffset->x;
    *i = *i + vOffset->y;
  }
  (*this->_vptr_CNavPoly)(this, vOffset, v2, v3);
  for ( nLadderDir = 0; nLadderDir != 2; ++nLadderDir )
  {
    m_pLaddersAndElevators = this->m_pLaddersAndElevators;
    if ( m_pLaddersAndElevators != 0 )
    {
      v9 = &m_pLaddersAndElevators->m_ladders[nLadderDir];
      m_pData = v9->m_pData;
      if ( v9->m_pData != 0 )
      {
        m_Size = m_pData->m_Size;
        if ( m_pData->m_Size != 0 )
        {
          v12 = 0;
          while ( 1 )
          {
            v13 = v12++;
            CNavLadder::Shift(m_pData->m_Elements[v13].pLadder, vOffset);
            if ( v12 == m_Size )
              break;
            m_pData = v9->m_pData;
          }
        }
      }
    }
  }
}


// CNavArea::UpdateFlagBottleneck  (line 1634, @0x00000000031e4000, libserver.so)  // inlines: AddAttributesDynamic, Count, IsEdgeConnected, RemoveAttributesDynamic
// calls: CNavPoly::GetEdgeLength
// callers: CNavArea::ConnectivityChanged, CNavArea::OnDestroyNotify, CNavArea::CNavArea, CNavArea::Disconnect, CNavArea::ConnectTo, CNavArea::GeometryChanged
void __fastcall CNavArea::UpdateFlagBottleneck(CNavArea *const this)
{
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v3; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v4; // rcx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v5; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v6; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v7; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v8; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v9; // rdx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v10; // rdx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v11; // rdx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v12; // rdx
  NavEdgeIndex v13; // si
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v14; // rdx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v15; // rax
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v16; // rdx
  float flNarrow; // [rsp+Ch] [rbp-14h]

  if ( this->m_nVerts <= 3 )
    goto LABEL_6;
  m_pData = this->m_connect[0].m_pData;
  if ( m_pData == 0 || m_pData->m_Size <= 0 )
  {
    v4 = this->m_incomingConnect[0].m_pData;
    if ( (v4 == 0 || v4->m_Size <= 0)
      && ((v9 = this->m_connect[1].m_pData) != 0 && v9->m_Size > 0
       || (v14 = this->m_incomingConnect[1].m_pData) != 0 && v14->m_Size > 0) )
    {
      v10 = this->m_connect[2].m_pData;
      if ( v10 == 0 || v10->m_Size <= 0 )
      {
        v11 = this->m_incomingConnect[2].m_pData;
        if ( (v11 == 0 || v11->m_Size <= 0)
          && ((v12 = this->m_connect[3].m_pData) != 0 && v12->m_Size > 0
           || (v16 = this->m_incomingConnect[3].m_pData) != 0 && v16->m_Size > 0) )
        {
          flNarrow = 2.0999999 * CNavGeneratorBase::sm_flGenerationStepSize;
          if ( flNarrow > CNavPoly::GetEdgeLength(this, 1) )
            goto LABEL_22;
          v13 = 3;
          goto LABEL_33;
        }
      }
    }
    if ( (m_pData == 0 || m_pData->m_Size <= 0) && (v4 == 0 || v4->m_Size <= 0) )
      goto LABEL_6;
  }
  v3 = this->m_connect[1].m_pData;
  if ( v3 != 0 && v3->m_Size > 0 )
    goto LABEL_6;
  v5 = this->m_incomingConnect[1].m_pData;
  if ( v5 != 0 && v5->m_Size > 0 )
    goto LABEL_6;
  v6 = this->m_connect[2].m_pData;
  if ( v6 == 0 || v6->m_Size <= 0 )
  {
    v15 = this->m_incomingConnect[2].m_pData;
    if ( v15 == 0 || v15->m_Size <= 0 )
      goto LABEL_6;
  }
  v7 = this->m_connect[3].m_pData;
  if ( v7 != 0 && v7->m_Size > 0 )
    goto LABEL_6;
  v8 = this->m_incomingConnect[3].m_pData;
  if ( v8 != 0 && v8->m_Size > 0 )
    goto LABEL_6;
  flNarrow = 2.0999999 * CNavGeneratorBase::sm_flGenerationStepSize;
  if ( flNarrow <= CNavPoly::GetEdgeLength(this, 0) )
  {
    v13 = 2;
LABEL_33:
    if ( flNarrow > CNavPoly::GetEdgeLength(this, v13) )
      goto LABEL_22;
LABEL_6:
    this->m_AttributeDynamicFlags &= ~0x20u;
    return;
  }
LABEL_22:
  this->m_AttributeDynamicFlags |= 0x20u;
}


// CNavArea::UpdateFlagUnderWater  (line 1673, @0x00000000031e5610, libserver.so)  // inlines: AddAttributesDynamic, GetCenter, RemoveAttributesDynamic
// calls: CNavMesh::GetGroundHeight
// callers: CNavArea::GeometryChanged
void __fastcall CNavArea::UpdateFlagUnderWater(CNavArea *const this)
{
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  const CNavMesh *m_rNavMesh; // rdi
  INavPhysicsInterface *m_pPhysicsInterface; // rdi
  Vector vPos; // [rsp+0h] [rbp-20h] BYREF

  z = this->m_vCenter.z;
  x = this->m_vCenter.x;
  vPos.y = this->m_vCenter.y;
  m_rNavMesh = this->m_rNavMesh;
  vPos.z = z;
  vPos.x = x;
  if ( CNavMesh::GetGroundHeight(m_rNavMesh, &vPos, &vPos.z, 0)
    && (m_pPhysicsInterface = this->m_rNavMesh->m_pPhysicsInterface, vPos.z = vPos.z + 1.0, m_pPhysicsInterface != 0)
    && ((*(m_pPhysicsInterface->_vptr_INavPhysicsInterface + 4))(m_pPhysicsInterface, &vPos, 114688) & 0x1C000) != 0 )
  {
    this->m_AttributeDynamicFlags |= 0x10u;
  }
  else
  {
    this->m_AttributeDynamicFlags &= ~0x10u;
  }
}


// CNavArea::GetNavDataProperties  (line 1690, @0x00000000031e7410, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], ~CUtlString
// calls: CNavConfig::NavAttributeToName, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
// callers: CNavAreaExtended::GetNavDataProperties
// strings: "NavAttributes"
void __fastcall CNavArea::GetNavDataProperties(
        const CNavArea *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pOutPropertyNames,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pOutPropertyValues)
{
  int v5; // ebx
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 m_Size; // r15
  int v9; // eax
  CUtlString *v10; // r15
  const char *v11; // rax
  __int64 v12; // r15
  int v13; // eax
  CUtlString *v14; // r15
  const char *v15; // rax
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-68h]
  const char *pAttributeName; // [rsp+20h] [rbp-50h]
  CUtlString v20[8]; // [rsp+30h] [rbp-40h] BYREF

  v5 = 0;
  v6 = (*(this->_vptr_CNavPoly + 5))(this);
  p_m_Memory = &pOutPropertyValues->m_Memory;
  do
  {
    while ( 1 )
    {
      v7 = 1LL << v5;
      if ( (v6 & (1LL << v5)) != 0 && (v7 & this->m_AreaAttributes.m_Flags) != 0 )
      {
        pAttributeName = CNavConfig::NavAttributeToName(v7);
        if ( pAttributeName != 0 )
        {
          v20[0].m_pString = 0;
          CUtlString::Set(v20, "NavAttributes");
          m_Size = pOutPropertyNames->m_Size;
          v9 = pOutPropertyNames->m_Size;
          if ( m_Size == pOutPropertyNames->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CUtlString,int>::Grow(&pOutPropertyNames->m_Memory, 1);
            v9 = pOutPropertyNames->m_Size;
          }
          pOutPropertyNames->m_Size = v9 + 1;
          v10 = &pOutPropertyNames->m_Memory.m_pMemory[m_Size];
          if ( v10 != 0 )
          {
            v10->m_pString = 0;
            v11 = CUtlString::Get(v20);
            CUtlString::Set(v10, v11);
          }
          if ( v20[0].m_pString != 0 )
            CUtlString::FreeMemoryBlock(v20);
          v20[0].m_pString = 0;
          CUtlString::Set(v20, pAttributeName);
          v12 = pOutPropertyValues->m_Size;
          v13 = pOutPropertyValues->m_Size;
          if ( v12 == pOutPropertyValues->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
            v13 = pOutPropertyValues->m_Size;
          }
          pOutPropertyValues->m_Size = v13 + 1;
          v14 = &pOutPropertyValues->m_Memory.m_pMemory[v12];
          if ( v14 != 0 )
          {
            v14->m_pString = 0;
            v15 = CUtlString::Get(v20);
            CUtlString::Set(v14, v15);
          }
          if ( v20[0].m_pString != 0 )
            break;
        }
      }
      if ( ++v5 == 64 )
        return;
    }
    ++v5;
    CUtlString::FreeMemoryBlock(v20);
  }
  while ( v5 != 64 );
}


// CNavArea::SetNavDataProperty  (line 1717, @0x00000000031e26f0, libserver.so)  // inlines: AddAttributes, AddFlags
// calls: V_stricmp_fast, CNavConfig::NameToNavAttribute
// callers: CNavAreaExtended::SetNavDataProperty
// strings: "NavAttributes"
void __fastcall CNavArea::SetNavDataProperty(
        CNavArea *const this,
        const char *pPropertyName,
        const char *pPropertyValue)
{
  if ( V_stricmp_fast(pPropertyName, "NavAttributes") == 0 )
    this->m_AreaAttributes.m_Flags |= CNavConfig::NameToNavAttribute(pPropertyValue).m_Flags;
}


// CNavArea::IsAbleToMergeWith  (line 1728, @0x00000000031e2730, libserver.so)  // inlines: IsValidArea
bool __fastcall CNavArea::IsAbleToMergeWith(const CNavArea *const this, const CNavArea *const rOtherArea)
{
  bool result; // al

  result = 0;
  if ( rOtherArea != 0 && rOtherArea->m_nIndex != -1 && (this->m_AreaAttributes.m_Flags & 0x2000) == 0 )
    return ((rOtherArea->m_AreaAttributes.m_Flags >> 13) ^ 1) & 1;
  return result;
}


// CNavArea::SaveToSelectedSet  (line 1741, @0x00000000031e2640, libserver.so)  // inlines: operator&
// calls: KeyValues::SetUint64
// callers: CNavAreaExtended::SaveToSelectedSet
void __fastcall CNavArea::SaveToSelectedSet(const CNavArea *const this, KeyValues *pAreaKey)
{
  __int64 v4; // rax

  v4 = (*(this->_vptr_CNavPoly + 5))(this);
  KeyValues::SetUint64(pAreaKey, "Attributes", this->m_AreaAttributes.m_Flags & v4);
}


// CNavArea::RestoreFromSelectedSet  (line 1749, @0x00000000031e2670, libserver.so)  // inlines: SetAttributes, operator&
// calls: KeyValues::GetUint64
// callers: CNavAreaExtended::RestoreFromSelectedSet
void __fastcall CNavArea::RestoreFromSelectedSet(CNavArea *const this, KeyValues *pAreaKey)
{
  uint64 Uint64; // r12

  Uint64 = KeyValues::GetUint64(pAreaKey, "Attributes", 0);
  this->m_AreaAttributes.m_Flags = (*(this->_vptr_CNavPoly + 5))(this) & Uint64;
}


// CNavArea::BuildFromNavGen  (line 1785, @0x00000000031e56c0, libserver.so)  // inlines: AddToTail, Alloc, Clear, Count, CountNonDummy, EnsureCapacity, Get, GetSize, Realloc, SetClearance, Vector, end, operator[]
// calls: CNavPoly::SetCorners
// callers: CNavMesh::BuildFromNavGen
void __fastcall CNavArea::BuildFromNavGen(
        CNavArea *const this,
        const CUtlVector<VecDouble3,CUtlMemory<VecDouble3,int> > *const verts,
        const CNavGenPoly *const poly)
{
  CNavArea *v3; // r9
  __int64 v5; // r12
  CNavGenPolyConnList *m_pConnections; // rdx
  int m_Size; // r15d
  int *v8; // rax
  int *v9; // rsi
  CNavGenPolyConn *v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  CNavArea *v13; // r8
  int (**vptr_CNavPoly)(...); // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rbx
  __int64 v20; // r12
  CNavGenPolyConn *v21; // rax
  int (**v22)(...); // rsi
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // r11
  uint32 v26; // ecx
  char v27; // r10
  __int64 v28; // rax
  __int64 v29; // r11
  void (__fastcall **v30)(CNavArea *); // rax
  int (**v31)(...); // rsi
  int (**v32)(...); // rax
  VecDouble3 *m_pMemory; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  double *p_x; // rdx
  double v37; // xmm2_8
  vec_t v38; // xmm0_4
  vec_t v39; // xmm1_4
  double *v40; // rdx
  double v41; // xmm3_8
  vec_t v42; // xmm0_4
  vec_t v43; // xmm1_4
  double *v44; // rax
  vec_t v45; // xmm0_4
  vec_t v46; // xmm1_4
  vec_t v47; // xmm4_4
  VecDouble3 *v48; // rax
  __int64 v49; // r10
  __int64 v50; // r8
  __int64 v51; // rcx
  double *v52; // rdx
  double v53; // xmm5_8
  vec_t v54; // xmm0_4
  vec_t v55; // xmm1_4
  double *v56; // rdx
  double v57; // xmm6_8
  vec_t v58; // xmm0_4
  vec_t v59; // xmm1_4
  double *v60; // rdx
  double v61; // xmm7_8
  vec_t v62; // xmm0_4
  vec_t v63; // xmm1_4
  double *v64; // rax
  vec_t v65; // xmm0_4
  vec_t v66; // xmm1_4
  vec_t v67; // xmm2_4
  int (**v68)(...); // rax
  NavEdgeIndex nEdge; // [rsp+7h] [rbp-99h]
  CNavArea *v70; // [rsp+8h] [rbp-98h]
  CNavArea *v71; // [rsp+10h] [rbp-90h]
  int v72; // [rsp+10h] [rbp-90h]
  CNavArea *v73; // [rsp+10h] [rbp-90h]
  int nBackEdge; // [rsp+18h] [rbp-88h]
  CNavArea *nBackEdgea; // [rsp+18h] [rbp-88h]
  CNavArea *v76; // [rsp+20h] [rbp-80h]
  uint32 m_AreaId; // [rsp+20h] [rbp-80h]
  int m_nOtherEdge; // [rsp+20h] [rbp-80h]
  CNavArea *v79; // [rsp+20h] [rbp-80h]
  CNavArea *thisa; // [rsp+28h] [rbp-78h]
  int thisb; // [rsp+28h] [rbp-78h]
  CNavArea *thisd; // [rsp+28h] [rbp-78h]
  uint32 thise; // [rsp+28h] [rbp-78h]
  CNavArea *thisg; // [rsp+28h] [rbp-78h]
  Vector nwCorner; // [rsp+30h] [rbp-70h] BYREF
  Vector v0; // [rsp+40h] [rbp-60h] BYREF
  Vector v1; // [rsp+50h] [rbp-50h] BYREF
  Vector v2; // [rsp+60h] [rbp-40h] BYREF

  v3 = this;
  if ( poly->m_nVertex == 3 )
  {
    m_pMemory = verts->m_Memory.m_pMemory;
    v34 = poly->m_aVertexIndices[1];
    v35 = poly->m_aVertexIndices[0];
    p_x = &m_pMemory[poly->m_aVertexIndices[2]].x;
    v37 = *p_x;
    v38 = p_x[2];
    v39 = p_x[1];
    v2.z = v38;
    v40 = &m_pMemory[v34].x;
    *&v37 = v37;
    v2.y = v39;
    v2.x = *&v37;
    v41 = *v40;
    v42 = v40[2];
    v43 = v40[1];
    v44 = &m_pMemory[v35].x;
    v1.y = v43;
    *&v41 = v41;
    v1.z = v42;
    v1.x = *&v41;
    v45 = v44[2];
    v46 = v44[1];
    v47 = *v44;
    v0.y = v46;
    v0.x = v47;
    v0.z = v45;
    CNavPoly::SetCorners(v3, &v0, &v1, &v2);
    v3 = this;
  }
  else if ( poly->m_nVertex == 4 )
  {
    v48 = verts->m_Memory.m_pMemory;
    v49 = poly->m_aVertexIndices[2];
    v50 = poly->m_aVertexIndices[0];
    v51 = poly->m_aVertexIndices[1];
    v52 = &v48[poly->m_aVertexIndices[3]].x;
    v53 = *v52;
    v54 = v52[2];
    v55 = v52[1];
    v2.z = v54;
    v56 = &v48[v49].x;
    *&v53 = v53;
    v2.y = v55;
    v2.x = *&v53;
    v57 = *v56;
    v58 = v56[2];
    v59 = v56[1];
    v1.z = v58;
    v60 = &v48[v51].x;
    *&v57 = v57;
    v1.y = v59;
    v1.x = *&v57;
    v61 = *v60;
    v62 = v60[2];
    v63 = v60[1];
    v64 = &v48[v50].x;
    v0.y = v63;
    *&v61 = v61;
    v0.z = v62;
    v0.x = *&v61;
    v65 = v64[2];
    v66 = v64[1];
    v67 = *v64;
    nwCorner.y = v66;
    nwCorner.x = v67;
    nwCorner.z = v65;
    CNavPoly::SetCorners(this, &nwCorner, &v0, &v1, &v2);
    v3 = this;
  }
  v5 = 0;
  nEdge = 0;
  if ( v3->m_nVerts > 0 )
  {
    while ( 1 )
    {
      m_pConnections = poly->m_pConnections;
      m_Size = m_pConnections->m_nEdgeCons[v5].m_Size;
      v8 = m_pConnections->m_nEdgeCons[v5].m_Memory.m_pMemory;
      v9 = &v8[m_Size];
      if ( v8 != v9 )
        break;
      v13 = &v3->m_connect[v5];
      v11 = 0;
      vptr_CNavPoly = v13->_vptr_CNavPoly;
      if ( v13->_vptr_CNavPoly != 0 )
        goto LABEL_9;
LABEL_12:
      if ( m_Size > 0 )
      {
        v18 = 4LL * (m_Size - 1) + 4;
        v19 = 0;
        v20 = v5;
        do
        {
          while ( 1 )
          {
            v21 = &poly->m_pConnections->m_AllCons.m_Memory.m_pMemory[poly->m_pConnections->m_nEdgeCons[v20].m_Memory.m_pMemory[v19 / 4]];
            if ( !v21->m_bDummyConnection
              && v3->m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v21->m_nOtherPoly]->m_AreaId != v3->m_AreaId )
            {
              break;
            }
            v19 += 4LL;
            if ( v19 == v18 )
              goto LABEL_21;
          }
          v22 = v13->_vptr_CNavPoly;
          if ( v13->_vptr_CNavPoly != 0 )
          {
            v70 = v3;
            v71 = v13;
            nBackEdge = v21->m_nOtherEdge;
            m_AreaId = v3->m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v21->m_nOtherPoly]->m_AreaId;
            thisb = *v22;
            v23 = 16LL * (*v22 + 1) + 8;
            v24 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc);
            v25 = thisb;
            v26 = m_AreaId;
            v27 = nBackEdge;
            v13 = v71;
            v3 = v70;
            if ( v23 > v24 )
            {
              v31 = v71->_vptr_CNavPoly;
              v72 = thisb;
              thisd = v13;
              v28 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v31, v23);
              v13 = thisd;
              v25 = v72;
              v3 = v70;
              v27 = nBackEdge;
              thisd->_vptr_CNavPoly = v28;
              v26 = m_AreaId;
            }
            else
            {
              v28 = v71->_vptr_CNavPoly;
            }
          }
          else
          {
            m_nOtherEdge = v21->m_nOtherEdge;
            v73 = v3;
            nBackEdgea = v13;
            thise = v3->m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v21->m_nOtherPoly]->m_AreaId;
            v32 = (**g_pMemAlloc)(g_pMemAlloc, 24);
            v13 = nBackEdgea;
            v25 = 0;
            v26 = thise;
            v27 = m_nOtherEdge;
            v3 = v73;
            nBackEdgea->_vptr_CNavPoly = v32;
            *v32 = 0;
            v28 = nBackEdgea->_vptr_CNavPoly;
          }
          v19 += 4LL;
          v29 = v28 + 16 * v25;
          *(v29 + 8) = v26;
          *(v29 + 16) = v27;
          ++*v13->_vptr_CNavPoly;
        }
        while ( v19 != v18 );
      }
LABEL_21:
      v5 = ++nEdge;
      if ( nEdge >= v3->m_nVerts )
        goto LABEL_22;
    }
    v10 = m_pConnections->m_AllCons.m_Memory.m_pMemory;
    v11 = 0;
    do
    {
      v12 = *v8++;
      v11 += v10[v12].m_bDummyConnection;
    }
    while ( v9 != v8 );
    v13 = &v3->m_connect[v5];
    vptr_CNavPoly = v13->_vptr_CNavPoly;
    if ( v13->_vptr_CNavPoly == 0 )
    {
      if ( v11 != 0 )
      {
        v79 = v3;
        thisg = &v3->m_connect[v5];
        v68 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * v11 + 8);
        v13 = thisg;
        v3 = v79;
        thisg->_vptr_CNavPoly = v68;
        *v68 = 0;
      }
      goto LABEL_12;
    }
LABEL_9:
    if ( v11 > *vptr_CNavPoly )
    {
      v76 = v3;
      thisa = v13;
      v15 = 16LL * v11 + 8;
      v16 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc);
      v13 = thisa;
      v3 = v76;
      if ( v15 > v16 )
      {
        v17 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, thisa->_vptr_CNavPoly, v15);
        v13 = thisa;
        v3 = v76;
        thisa->_vptr_CNavPoly = v17;
      }
    }
    goto LABEL_12;
  }
LABEL_22:
  v3->m_AreaAttributes.m_Flags = 0;
  v3->m_nGenIndex = poly->m_nGenInfo;
  v30 = v3->_vptr_CNavPoly;
  v3->m_flClearance = poly->m_flClearance;
  (*v30)(v3);
}


// CNavArea::CalcBoundaryEdges  (line 1880, @0x00000000031e5c00, libserver.so)  // inlines: Count, Indices
// calls: CNavArea::IsConnectedOnEdge
// callers: CNavMesh::PostLoadNavMesh
void __fastcall CNavArea::CalcBoundaryEdges(CNavArea *const this)
{
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rax
  CNavConnect *m_Elements; // r14
  char v4; // r15
  __int64 v5; // rbx
  int m_nVerts; // [rsp+0h] [rbp-30h]
  int nEdge; // [rsp+4h] [rbp-2Ch]

  this->m_nBoundaryEdges = 0;
  nEdge = 0;
  m_nVerts = this->m_nVerts;
  if ( m_nVerts > 0 )
  {
    do
    {
      m_pData = this->m_connect[nEdge].m_pData;
      if ( m_pData == 0 || m_pData->m_Size == 0 )
        goto LABEL_12;
      m_Elements = m_pData->m_Elements;
      v4 = 0;
      v5 = &m_pData->m_Elements[(m_pData->m_Size - 1) + 1];
      do
      {
        if ( m_Elements->m_pArea != 0 && CNavArea::IsConnectedOnEdge(m_Elements->m_pArea, this, m_Elements->m_nBackEdge) )
          v4 = 1;
        ++m_Elements;
      }
      while ( m_Elements != v5 );
      if ( v4 == 0 )
LABEL_12:
        this->m_nBoundaryEdges |= 1 << nEdge;
      ++nEdge;
    }
    while ( nEdge != m_nVerts );
  }
}


// NextIndex  (line 1910, @0x00000000031e5cd0, libserver.so)
int __fastcall NextIndex(const CNavArea *const rArea, int nIndex, int nDir)
{
  return (nDir + rArea->m_nVerts + nIndex) % rArea->m_nVerts;
}


// VertForEdge  (line 1915, @0x00000000031e5cf0, libserver.so)
int __fastcall VertForEdge(const CNavArea *const rArea, int nEdge, int nDir)
{
  if ( nDir <= 0 )
    return nEdge;
  else
    return (nEdge + 1) % rArea->m_nVerts;
}


// EdgeForVert  (line 1920, @0x00000000031e5d10, libserver.so)
int __fastcall EdgeForVert(const CNavArea *const rArea, int nVert, int nDir)
{
  if ( nDir <= 0 )
    return (nVert + rArea->m_nVerts - 1) % rArea->m_nVerts;
  return nVert;
}


// FindBoundaryEdgeAroundVert  (line 1927, @0x00000000031e7600, libserver.so)  // inlines: CUtlKeyValuePair<unsigned int>, Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int>, Count, DistTo, DoInsert<unsigned int>, DoLookup<unsigned int>, FastSqrt, Find, GetVert, HasElement, Indices, Insert, Length, NextIndex, VectorLength, VectorSubtract, VertForEdge, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator(), operator[]
// calls: CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoInsertUnconstructed, CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoLookup<unsigned int>, CNavPoly::GetEdgeNormalXY
// callers: FindBoundaryVert
Vector __fastcall FindBoundaryEdgeAroundVert(
        const Vector *const vV,
        const CNavArea *const rArea,
        int nEdge,
        int nDir,
        CNavMarkHash *const rMarkHash)
{
  int m_nBoundaryEdges; // eax
  CNavConnectVector *v7; // r15
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  unsigned __int64 m_Size; // rcx
  int v10; // r12d
  int inserted; // eax
  __int64 v12; // rax
  int v13; // esi
  int v14; // edx
  float *v15; // rdx
  unsigned int *v16; // rax
  const CNavArea *v17; // rbx
  CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> >::handle_t *v18; // r10
  unsigned int m_AreaId; // r14d
  unsigned int v20; // edx
  unsigned int v21; // r11d
  int v22; // eax
  int v25; // edx
  int v26; // eax
  unsigned int v28; // [rsp+4h] [rbp-6Ch]
  unsigned int pPreviousInChain; // [rsp+8h] [rbp-68h]
  CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> >::handle_t *pPreviousInChaina; // [rsp+8h] [rbp-68h]
  CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> >::handle_t *v31; // [rsp+10h] [rbp-60h]
  unsigned int v32; // [rsp+10h] [rbp-60h]
  CNavMarkHash *v33; // [rsp+18h] [rbp-58h]
  CNavMarkHash *v34; // [rsp+18h] [rbp-58h]
  Vector EdgeNormalXY; // 0:^30.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_nBoundaryEdges = rArea->m_nBoundaryEdges;
  if ( _bittest(&m_nBoundaryEdges, nEdge) )
  {
    EdgeNormalXY = CNavPoly::GetEdgeNormalXY(rArea, nEdge);
    goto LABEL_17;
  }
  v7 = &rArea->m_connect[nEdge];
  m_pData = v7->m_pData;
  if ( v7->m_pData == 0 || (m_Size = m_pData->m_Size) == 0 )
  {
LABEL_16:
    EdgeNormalXY = vec3_invalid;
    goto LABEL_17;
  }
  v10 = 0;
  while ( 1 )
  {
    v16 = (m_pData + 2 * v10);
    v17 = *(v16 + 1);
    v18 = v16 + 2;
    if ( v17 == 0 )
      goto LABEL_10;
    m_AreaId = v17->m_AreaId;
    v20 = 33 * (((4097 * m_AreaId + 2127912214) >> 19) ^ (4097 * m_AreaId + 2127912214) ^ 0xC761C23C);
    v21 = ((9 * ((v20 - 369570787) ^ ((v20 + 374761393) << 9)) - 42973499) >> 16)
        ^ (9 * ((v20 - 369570787) ^ ((v20 + 374761393) << 9)) - 42973499)
        ^ 0xB55A4F09;
    if ( rMarkHash->m_nUsed == 0 )
      break;
    v28 = m_Size;
    pPreviousInChaina = v16 + 2;
    v32 = ((9 * ((v20 - 369570787) ^ ((v20 + 374761393) << 9)) - 42973499) >> 16)
        ^ (9 * ((v20 - 369570787) ^ ((v20 + 374761393) << 9)) - 42973499)
        ^ 0xB55A4F09;
    v34 = rMarkHash;
    v22 = CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::DoLookup<unsigned int>(
            rMarkHash,
            m_AreaId,
            v21,
            m_Size);
    rMarkHash = v34;
    v21 = v32;
    v18 = pPreviousInChaina;
    m_Size = v28;
    if ( v22 == -1 )
      break;
    if ( ++v10 == v28 )
      goto LABEL_16;
LABEL_11:
    m_pData = v7->m_pData;
  }
  pPreviousInChain = m_Size;
  v31 = v18;
  v33 = rMarkHash;
  inserted = CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::DoInsertUnconstructed(
               rMarkHash,
               v21,
               1);
  rMarkHash = v33;
  m_Size = pPreviousInChain;
  v12 = &v33->m_table.m_pMemory[inserted];
  if ( v12 != -4 )
    *(v12 + 4) = m_AreaId;
  v13 = *(v31 + 8);
  v14 = v13;
  if ( nDir > 0 )
    v14 = (v13 + 1) % v17->m_nVerts;
  v15 = (v17 + 12 * v14);
  if ( fsqrt(
         (((v15[2] - vV->x) * (v15[2] - vV->x)) + ((v15[3] - vV->y) * (v15[3] - vV->y)))
       + ((v15[4] - vV->z) * (v15[4] - vV->z))) >= 1.0 )
  {
LABEL_10:
    if ( ++v10 == m_Size )
      goto LABEL_16;
    goto LABEL_11;
  }
  v25 = (nDir + v13 + v17->m_nVerts) % v17->m_nVerts;
  v26 = v17->m_nBoundaryEdges;
  if ( _bittest(&v26, v25) )
    EdgeNormalXY = CNavPoly::GetEdgeNormalXY(v17, v25);
  else
    EdgeNormalXY = FindBoundaryEdgeAroundVert(vV, v17, v25, nDir, v33);
LABEL_17:
  *&result.x = *&EdgeNormalXY.x;
  result.z = EdgeNormalXY.z;
  return result;
}


// FindBoundaryVert  (line 1966, @0x00000000031e7860, libserver.so)  // inlines: CUtlHashtable, CUtlMemory, FastSqrt, GetVert, Length, MarkInvalid, NextIndex, Normalized, Purge, RemoveAll, VectorAdd, VectorLength, VertForEdge, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator!=, operator+, ~CUtlHashtable, ~CUtlMemory
// calls: CNavPoly::GetEdgeNormal, FindBoundaryEdgeAroundVert, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge, VectorNormalize, _Unwind_Resume
// callers: CNavArea::CalcBoundaryVerts
Vector __fastcall FindBoundaryVert(CNavArea *const rArea, int nEdge, int nDir)
{
  int m_nVerts; // r8d
  int v6; // r13d
  int v7; // edx
  float *v8; // rax
  vec_t v9; // xmm0_4
  vec_t v10; // xmm2_4
  float v11; // xmm1_4
  vec_t v12; // eax
  int m_nUsed; // ecx
  int v14; // edx
  CUtlHashtableEntry<unsigned int,empty_t> *v15; // rax
  float z; // xmm1_4
  Vector vVertOnThis; // [rsp+20h] [rbp-80h] BYREF
  Vector vEdgeNormalThis; // [rsp+30h] [rbp-70h]
  Vector vEdgeNormalOther; // [rsp+40h] [rbp-60h]
  Vector vec; // [rsp+50h] [rbp-50h] BYREF
  CNavMarkHash navMarkHash; // [rsp+60h] [rbp-40h] BYREF
  Vector BoundaryEdgeAroundVert; // 0:kr14_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_nVerts = rArea->m_nVerts;
  v6 = (nDir + nEdge + m_nVerts) % m_nVerts;
  v7 = nEdge;
  if ( nDir > 0 )
    v7 = (nEdge + 1) % m_nVerts;
  v8 = (rArea + 12 * v7);
  v9 = v8[4];
  v10 = v8[2];
  vVertOnThis.y = v8[3];
  vVertOnThis.z = v9;
  vVertOnThis.x = v10;
  vEdgeNormalThis = CNavPoly::GetEdgeNormal(rArea, nEdge);
  memset(&navMarkHash, 0, 20);
  navMarkHash.m_nMinSize = 32;
  navMarkHash.m_bSizeLocked = 0;
  BoundaryEdgeAroundVert = FindBoundaryEdgeAroundVert(&vVertOnThis, rArea, v6, nDir, &navMarkHash);
  z = BoundaryEdgeAroundVert.z;
  vEdgeNormalOther = BoundaryEdgeAroundVert;
  if ( BoundaryEdgeAroundVert.x == vec3_invalid.x && BoundaryEdgeAroundVert.y == vec3_invalid.y )
  {
    if ( BoundaryEdgeAroundVert.z == vec3_invalid.z )
      goto LABEL_6;
  }
  else
  {
    z = vEdgeNormalOther.z;
  }
  v11 = z + vEdgeNormalThis.z;
  if ( fsqrt(
         (((vEdgeNormalThis.x + BoundaryEdgeAroundVert.x) * (vEdgeNormalThis.x + BoundaryEdgeAroundVert.x))
        + ((BoundaryEdgeAroundVert.y + vEdgeNormalThis.y) * (BoundaryEdgeAroundVert.y + vEdgeNormalThis.y)))
       + (v11 * v11)) <= 0.00000011920929 )
  {
LABEL_6:
    v12 = vec3_origin.z;
    *&vec.x = *&vec3_origin.x;
    vec.z = v12;
    goto LABEL_7;
  }
  vec.x = vEdgeNormalThis.x + BoundaryEdgeAroundVert.x;
  vec.y = BoundaryEdgeAroundVert.y + vEdgeNormalThis.y;
  vec.z = v11;
  VectorNormalize(&vec);
LABEL_7:
  m_nUsed = navMarkHash.m_nUsed;
  if ( navMarkHash.m_nUsed != 0 )
  {
    v14 = navMarkHash.m_table.m_nAllocationCount - 1;
    v15 = &navMarkHash.m_table.m_pMemory[navMarkHash.m_table.m_nAllocationCount - 1];
    if ( navMarkHash.m_table.m_nAllocationCount - 1 >= 0 )
    {
      do
      {
        if ( v15->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v15->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v14;
        --v15;
      }
      while ( v14 != -1 );
    }
    navMarkHash.m_nUsed = 0;
  }
  if ( (navMarkHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>::Purge(&navMarkHash.m_table);
  *&result.x = *&vec.x;
  result.z = vec.z;
  return result;
}


// CNavArea::CalcBoundaryVerts  (line 1992, @0x00000000031e7ac0, libserver.so)  // inlines: VertForEdge, operator=
// calls: FindBoundaryVert
// callers: CNavMesh::PostLoadNavMesh
void __fastcall CNavArea::CalcBoundaryVerts(CNavArea *const this)
{
  CNavArea *v2; // rax
  int v3; // edx
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int m_nVerts; // ecx
  CNavArea *v8; // r13
  int v9; // r12d
  int v10; // ecx
  int m_nBoundaryEdges; // eax
  int v12; // r14d
  int v13; // ecx
  __int64 v14; // kr20_8
  Vector BoundaryVert; // 0:kr14_12.12

  if ( this->m_nVerts > 0 )
  {
    v2 = this;
    v3 = 0;
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    do
    {
      v2->m_vBoundaryVerts[0].x = x;
      ++v3;
      v2 = (v2 + 12);
      *(&v2->m_rNavMesh + 1) = y;
      *&v2->m_nHullSupport = z;
      m_nVerts = this->m_nVerts;
    }
    while ( m_nVerts > v3 );
    if ( m_nVerts > 0 )
    {
      v8 = this;
      v9 = 1;
      do
      {
        while ( 1 )
        {
          m_nBoundaryEdges = this->m_nBoundaryEdges;
          v12 = v9 - 1;
          if ( _bittest(&m_nBoundaryEdges, v9 - 1) )
            break;
          v10 = v9;
          v8 = (v8 + 12);
          ++v9;
          if ( this->m_nVerts <= v10 )
            return;
        }
        v8 = (v8 + 12);
        *&v8->m_rNavMesh = FindBoundaryVert(this, v12, -1);
        BoundaryVert = FindBoundaryVert(this, v12, 1);
        v13 = v9;
        v14 = v9++;
        this->m_vBoundaryVerts[(v14 % this->m_nVerts)] = BoundaryVert;
      }
      while ( this->m_nVerts > v13 );
    }
  }
}


