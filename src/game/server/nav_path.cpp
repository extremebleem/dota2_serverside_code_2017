
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathCostRecorder::StartRecord  (line 54, @0x0000000002ef1b90, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CUtlVectorBase<CPathCostRecorder::AreaTransition_t, CUtlMemory<CPathCostRecorder::AreaTransition_t, int> >::SetCount, CUtlVectorBase<const CNavArea*, CUtlMemory<const CNavArea*, int> >::SetCount
// callers: CPath::StartRecordLastFailedPath
void __fastcall CPathCostRecorder::StartRecord(
        CPathCostRecorder *const this,
        const CPathCostBase *const rCostFunc,
        const CBaseCombatCharacter *pPathingEntity,
        CNavArea *pStartArea,
        const Vector *const vStartPos,
        CNavArea *pGoalArea,
        const Vector *const vGoalPos)
{
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // si
  vec_t z; // xmm0_4

  this->m_pPathCost = rCostFunc;
  if ( pPathingEntity != 0 && (m_pEntity = pPathingEntity->m_pEntity) != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v10 = 0x7FFF;
    else
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPathingEntity.m_Index) = v10 | this->m_hPathingEntity.m_Index & 0x8000;
    this->m_hPathingEntity.m_Index = (v9 << 15) | this->m_hPathingEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPathingEntity.m_Index = -1;
  }
  this->m_pStartArea = pStartArea;
  this->m_vStartPos.x = vStartPos->x;
  this->m_vStartPos.y = vStartPos->y;
  z = vStartPos->z;
  this->m_pGoalArea = pGoalArea;
  this->m_vStartPos.z = z;
  this->m_vGoalPos = *vGoalPos;
  CUtlVectorBase<CPathCostRecorder::AreaTransition_t,CUtlMemory<CPathCostRecorder::AreaTransition_t,int>>::SetCount(
    &this->m_NonTraversablePairs,
    0);
  CUtlVectorBase<CPathCostRecorder::AreaTransition_t,CUtlMemory<CPathCostRecorder::AreaTransition_t,int>>::SetCount(
    &this->m_CostPairs,
    0);
  CUtlVectorBase<CNavArea const*,CUtlMemory<CNavArea const*,int>>::SetCount(&this->m_VisitedAreas, 0);
}


// CPathCostRecorder::StopRecord  (line 70, @0x0000000002ef19c0, libserver.so)  // inlines: AddToTail, CopyConstruct<const CNavArea*>, Element, GrowMemory, end, operator[]
// calls: CUtlVectorBase<const CNavArea*, CUtlMemory<const CNavArea*, int> >::Find, CUtlMemory<const CNavArea*, int>::Grow
// callers: CPath::EndRecordLastFailedPath, CPath::ComputePathCore
void __fastcall CPathCostRecorder::StopRecord(CPathCostRecorder *const this)
{
  CUtlVectorBase<const CNavArea*,CUtlMemory<const CNavArea*,int> >::CAllocator *p_m_Memory; // r15
  CUtlVector<const CNavArea*,CUtlMemory<const CNavArea*,int> > *p_m_VisitedAreas; // r14
  CPathCostRecorder::AreaTransition_t *m_pMemory; // rbx
  CPathCostRecorder::AreaTransition_t *i; // r13
  __int64 m_Size; // rax
  int v7; // edx
  const CNavArea **v8; // rax
  const CNavArea *m_pAreaFrom; // rdx
  CPathCostRecorder::AreaTransition_t *v10; // rbx
  CPathCostRecorder::AreaTransition_t *j; // r15
  __int64 v12; // r13
  int v13; // eax
  const CNavArea **v14; // rax
  const CNavArea *v15; // rcx
  int v16; // [rsp+8h] [rbp-38h]

  p_m_Memory = &this->m_VisitedAreas.m_Memory;
  p_m_VisitedAreas = &this->m_VisitedAreas;
  m_pMemory = this->m_NonTraversablePairs.m_Memory.m_pMemory;
  for ( i = &m_pMemory[this->m_NonTraversablePairs.m_Size]; i != m_pMemory; *v8 = m_pAreaFrom )
  {
    while ( 1 )
    {
      if ( m_pMemory->m_pAreaFrom != 0
        && CUtlVectorBase<CNavArea const*,CUtlMemory<CNavArea const*,int>>::Find(
             p_m_VisitedAreas,
             &m_pMemory->m_pAreaFrom) == -1 )
      {
        m_Size = this->m_VisitedAreas.m_Size;
        if ( m_Size == this->m_VisitedAreas.m_Memory.m_nAllocationCount )
        {
          v16 = this->m_VisitedAreas.m_Size;
          CUtlMemory<CNavArea const*,int>::Grow(p_m_Memory, 1);
          v7 = this->m_VisitedAreas.m_Size;
          m_Size = v16;
        }
        else
        {
          v7 = this->m_VisitedAreas.m_Size;
        }
        this->m_VisitedAreas.m_Size = v7 + 1;
        v8 = &this->m_VisitedAreas.m_Memory.m_pMemory[m_Size];
        if ( v8 != 0 )
          break;
      }
      if ( i == ++m_pMemory )
        goto LABEL_10;
    }
    m_pAreaFrom = m_pMemory->m_pAreaFrom;
    ++m_pMemory;
  }
LABEL_10:
  v10 = this->m_CostPairs.m_Memory.m_pMemory;
  for ( j = &v10[this->m_CostPairs.m_Size]; j != v10; *v14 = v15 )
  {
    while ( 1 )
    {
      v12 = this->m_VisitedAreas.m_Size;
      if ( v12 <= 999
        && v10->m_pAreaFrom != 0
        && CUtlVectorBase<CNavArea const*,CUtlMemory<CNavArea const*,int>>::Find(
             &this->m_VisitedAreas,
             &v10->m_pAreaFrom) == -1 )
      {
        if ( v12 == this->m_VisitedAreas.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CNavArea const*,int>::Grow(&this->m_VisitedAreas.m_Memory, 1);
          v13 = this->m_VisitedAreas.m_Size;
        }
        else
        {
          v13 = v12;
        }
        this->m_VisitedAreas.m_Size = v13 + 1;
        v14 = &this->m_VisitedAreas.m_Memory.m_pMemory[v12];
        if ( v14 != 0 )
          break;
      }
      if ( j == ++v10 )
        return;
    }
    v15 = v10->m_pAreaFrom;
    ++v10;
  }
}


// CPathCostRecorder::IsToAreaTraversable  (line 94, @0x0000000002ef1df0, libserver.so)  // inlines: AddToTail, CopyConstruct<CPathCostRecorder::AreaTransition_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CPathCostRecorder::AreaTransition_t, int>::Grow
bool __fastcall CPathCostRecorder::IsToAreaTraversable(
        const CPathCostRecorder *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  __int64 v3; // rcx
  bool v4; // r8
  const CPathCostBase *m_pPathCost; // rdi
  char v9; // al
  __int64 m_Size; // r14
  int v12; // eax
  CPathCostRecorder::AreaTransition_t *v13; // rax

  v4 = 0;
  m_pPathCost = this->m_pPathCost;
  if ( m_pPathCost == 0 )
    return v4;
  v9 = (*(m_pPathCost->_vptr_CPathCostBase + 2))(m_pPathCost, rToArea, rFromArea, v3, 0);
  v4 = 1;
  if ( v9 != 0 )
    return v4;
  m_Size = this->m_NonTraversablePairs.m_Size;
  v12 = this->m_NonTraversablePairs.m_Size;
  if ( m_Size == this->m_NonTraversablePairs.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CPathCostRecorder::AreaTransition_t,int>::Grow(&this->m_NonTraversablePairs.m_Memory, 1);
    v12 = this->m_NonTraversablePairs.m_Size;
  }
  this->m_NonTraversablePairs.m_Size = v12 + 1;
  v13 = &this->m_NonTraversablePairs.m_Memory.m_pMemory[m_Size];
  if ( v13 != 0 )
  {
    v13->m_pAreaFrom = rFromArea;
    v13->m_pAreaTo = rToArea;
    v13->m_flCost = -1.0;
  }
  return 0;
}


// CPathCostRecorder::IsNeighborReachable  (line 110, @0x0000000002ec6a40, libserver.so)
bool __fastcall CPathCostRecorder::IsNeighborReachable(
        const CPathCostRecorder *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  const CPathCostBase *m_pPathCost; // rdi

  m_pPathCost = this->m_pPathCost;
  return m_pPathCost != 0 && (*(m_pPathCost->_vptr_CPathCostBase + 3))(m_pPathCost, rToArea, rFromArea);
}


// CPathCostRecorder::AllowPathOptimization  (line 121, @0x0000000002ec6a70, libserver.so)
bool __fastcall CPathCostRecorder::AllowPathOptimization(
        const CPathCostRecorder *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  const CPathCostBase *m_pPathCost; // rdi

  m_pPathCost = this->m_pPathCost;
  return m_pPathCost != 0 && (*(m_pPathCost->_vptr_CPathCostBase + 4))(m_pPathCost, rToArea, rFromArea);
}


// CPathCostRecorder::CalcCostFloorAreas  (line 132, @0x0000000002ef1e90, libserver.so)  // inlines: AddToTail, CopyConstruct<CPathCostRecorder::AreaTransition_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CPathCostRecorder::AreaTransition_t, int>::Grow
void __fastcall CPathCostRecorder::CalcCostFloorAreas(
        const CPathCostRecorder *const this,
        PathCostResult_t *const rCostOut,
        const CNavArea *const rFromArea,
        const CNavArea *const rToArea,
        NavEdgeIndex edge,
        NavEdgeIndex backEdge,
        const Vector *pGoalPos)
{
  const CPathCostBase *m_pPathCost; // rdi
  float m_flSegmentCost; // xmm0_4
  __int64 m_Size; // r12
  int v14; // eax
  CPathCostRecorder::AreaTransition_t *v15; // rax
  float v16; // [rsp+Ch] [rbp-24h]

  m_pPathCost = this->m_pPathCost;
  if ( m_pPathCost != 0 )
  {
    (*(m_pPathCost->_vptr_CPathCostBase + 5))(m_pPathCost, rCostOut, rFromArea, rToArea, edge, backEdge, pGoalPos);
    m_flSegmentCost = rCostOut->m_flSegmentCost;
    m_Size = this->m_CostPairs.m_Size;
    v14 = this->m_CostPairs.m_Size;
    if ( m_Size != this->m_CostPairs.m_Memory.m_nAllocationCount )
      goto LABEL_3;
  }
  else
  {
    m_flSegmentCost = -1.0;
    rCostOut->m_flSegmentCost = -1.0;
    m_Size = this->m_CostPairs.m_Size;
    v14 = this->m_CostPairs.m_Size;
    if ( m_Size != this->m_CostPairs.m_Memory.m_nAllocationCount )
      goto LABEL_3;
  }
  v16 = m_flSegmentCost;
  CUtlMemory<CPathCostRecorder::AreaTransition_t,int>::Grow(&this->m_CostPairs.m_Memory, 1);
  v14 = this->m_CostPairs.m_Size;
  m_flSegmentCost = v16;
LABEL_3:
  this->m_CostPairs.m_Size = v14 + 1;
  v15 = &this->m_CostPairs.m_Memory.m_pMemory[m_Size];
  if ( v15 != 0 )
  {
    v15->m_pAreaFrom = rFromArea;
    v15->m_pAreaTo = rToArea;
    v15->m_flCost = m_flSegmentCost;
  }
}


// CPathCostRecorder::CalcCostLadder  (line 149, @0x0000000002ec6aa0, libserver.so)
void __fastcall CPathCostRecorder::CalcCostLadder(
        const CPathCostRecorder *const this,
        PathCostResult_t *const rCostOut,
        const CNavArea *const rFromArea,
        const CNavArea *const rToArea,
        const CNavLadder *const rLadder)
{
  const CPathCostBase *m_pPathCost; // rdi

  m_pPathCost = this->m_pPathCost;
  if ( m_pPathCost != 0 )
    (*(m_pPathCost->_vptr_CPathCostBase + 6))(m_pPathCost, rCostOut, rFromArea, rToArea, rLadder);
  else
    rCostOut->m_flSegmentCost = -1.0;
}


// CPathCostRecorder::CalcCostElevator  (line 165, @0x0000000002ec6ad0, libserver.so)
void __fastcall CPathCostRecorder::CalcCostElevator(
        const CPathCostRecorder *const this,
        PathCostResult_t *const rCostOut,
        const CNavArea *const rFromArea,
        const CNavArea *const rToArea,
        const IHandleEntity *const rElevatorEntity)
{
  const CPathCostBase *m_pPathCost; // rdi

  m_pPathCost = this->m_pPathCost;
  if ( m_pPathCost != 0 )
    (*(m_pPathCost->_vptr_CPathCostBase + 7))(m_pPathCost, rCostOut, rFromArea, rToArea, rElevatorEntity);
  else
    rCostOut->m_flSegmentCost = -1.0;
}


// CPathCostRecorder::DebugDraw  (line 181, @0x0000000002ef9fc0, libserver.so)  // inlines: BFSAreaCollector_t, CNavBreadthFirstSearch, CNavBreadthFirstSearch<CPathCostRecorder::DebugDraw() const::BFSAreaCollector_t>, CNavSearchHash, CUtlHashtable, CUtlMemory, CUtlVector, CUtlVectorBase, DrawPolyFilled, GetEntityIdentity, GetEntryIndex, GetNavHull, HorzArrow, IndexToIdentity, IsValid, Line, LookupEntity, Purge, RemoveAll, SetOrigin, SetToIdentity, Sphere, Vector, VectorAdd, VertexColor_t, end, operator bool, operator+, operator=<CPathCostRecorder::DebugDraw() const::BFSAreaCollector_t>, swap, swap<NavSearchAreaResult_t (*)(const std::_Any_data&, CNavArea&, NavSearchAreaInfo_t*)>, swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>, swap<std::_Any_data>, ~BFSAreaCollector_t, ~CNavBreadthFirstSearch, ~CNavSearchHash, ~CUtlHashtable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~_Function_base, ~function
// calls: CNavBreadthFirstSearch::BreadthFirstSearch, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge, CUtlMemory<const CNavArea*, int>::Purge, __stack_chk_fail, CBaseEntity::GetAbsOrigin, SetIdentityMatrix, CNavBreadthFirstSearch::~CNavBreadthFirstSearch, _Unwind_Resume
// callers: CNavEditor::Update
// globals: CEntityHandle::gm_pEntityList, std::_Function_base::_Ref_manager<CPathCostRecorder::DebugDraw(void)::BFSAreaCollector_t>::_M_manager(std::_Any_data &,std::_Any_data const&,std::_Manager_opera, std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<CPathCostRecorder::DebugDraw(void)::BFSAreaCollector_t>
void __fastcall CPathCostRecorder::DebugDraw(const CPathCostRecorder *const this)
{
  const CNavArea **m_pMemory; // rbx
  CNavArea *m_pStartArea; // r10
  const CNavArea **i; // r14
  const CNavArea *v5; // rsi
  int v6; // xmm2_4
  float v7; // xmm0_4
  float y; // xmm1_4
  float x; // xmm2_4
  float v10; // xmm0_4
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  float v12; // xmm0_4
  int v13; // xmm2_4
  void (__fastcall *v14)(ISceneViewDebugOverlays *, Vector *, CPathCostRecorder::DebugDraw::BFSAreaCollector_t *, float *, _QWORD, double); // rax
  float v15; // xmm0_4
  int v16; // xmm2_4
  void (__fastcall *v17)(ISceneViewDebugOverlays *, Vector *, CPathCostRecorder::DebugDraw::BFSAreaCollector_t *, float *, _QWORD, double); // rax
  uint32 m_Index; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CNavArea *m_pGoalArea; // rsi
  const CPathCostBase *m_pPathCost; // rax
  uint32 m_hullCategory; // edx
  float m_flHullRadius; // xmm1_4
  float m_flHullHeight; // xmm0_4
  const CNavArea **v26; // rbx
  const CNavArea **v27; // r13
  const CNavArea *v28; // rsi
  const Vector *AbsOrigin; // rax
  ISceneViewDebugOverlays *v30; // rbx
  _DWORD *p_x; // r12
  _BYTE v32[16]; // [rsp+10h] [rbp-120h] BYREF
  float v33; // [rsp+20h] [rbp-110h] BYREF
  float v34; // [rsp+24h] [rbp-10Ch]
  float v35; // [rsp+28h] [rbp-108h]
  CPathCostRecorder::DebugDraw::BFSAreaCollector_t areaCollector; // [rsp+30h] [rbp-100h] BYREF
  int v37; // [rsp+5Ch] [rbp-D4h]
  CUtlVector<const CNavArea*,CUtlMemory<const CNavArea*,int> > *__for_range; // [rsp+60h] [rbp-D0h]
  unsigned __int64 v39; // [rsp+68h] [rbp-C8h]
  CNavBreadthFirstSearch search; // [rsp+80h] [rbp-B0h] BYREF
  unsigned __int64 v41; // [rsp+F8h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  m_pMemory = this->m_VisitedAreas.m_Memory.m_pMemory;
  m_pStartArea = this->m_pStartArea;
  for ( i = &m_pMemory[this->m_VisitedAreas.m_Size]; i != m_pMemory; ++m_pMemory )
  {
    v5 = *m_pMemory;
    if ( *m_pMemory != m_pStartArea )
    {
      areaCollector.m_Areas.m_Size = 0;
      *(&areaCollector.m_Areas.m_Size + 1) = 0;
      LODWORD(areaCollector.m_Areas.m_Memory.m_pMemory) = 1086324736;
      if ( INavDrawArea::ms_pInst != 0 )
      {
        (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(
          INavDrawArea::ms_pInst,
          v5,
          4281479880LL,
          0,
          &areaCollector,
          0.0,
          -3.0);
        m_pStartArea = this->m_pStartArea;
      }
    }
  }
  if ( m_pStartArea != 0 )
  {
    areaCollector.m_Areas.m_Size = 0;
    *(&areaCollector.m_Areas.m_Size + 1) = 0;
    LODWORD(areaCollector.m_Areas.m_Memory.m_pMemory) = 1086324736;
    if ( INavDrawArea::ms_pInst != 0 )
      (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(
        INavDrawArea::ms_pInst,
        m_pStartArea,
        4291310130LL,
        0,
        &areaCollector,
        0.0,
        -3.0);
  }
  *&v6 = this->m_vGoalPos.x + 0.0;
  v7 = this->m_vGoalPos.z + 24.0;
  *(&areaCollector.m_Areas.m_Size + 1) = this->m_vGoalPos.y + 0.0;
  y = this->m_vStartPos.y;
  areaCollector.m_Areas.m_Size = v6;
  x = this->m_vStartPos.x;
  *&areaCollector.m_Areas.m_Memory.m_pMemory = v7;
  v10 = this->m_vStartPos.z + 24.0;
  v34 = y + 0.0;
  v33 = x + 0.0;
  v35 = v10;
  vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
  v32[0] = -56;
  v32[1] = -56;
  v32[2] = -56;
  v32[3] = -1;
  vptr_ISceneViewDebugOverlays[34](debugoverlay, &v33, &areaCollector, v32, 1, 3.0, 0.0);
  v12 = this->m_vStartPos.z + 24.0;
  *&v13 = this->m_vStartPos.x + 0.0;
  *(&areaCollector.m_Areas.m_Size + 1) = this->m_vStartPos.y + 0.0;
  *&areaCollector.m_Areas.m_Memory.m_pMemory = v12;
  areaCollector.m_Areas.m_Size = v13;
  v14 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
  v33 = NAN;
  v14(debugoverlay, &this->m_vStartPos, &areaCollector, &v33, 0, 0.0);
  v15 = this->m_vGoalPos.z + 24.0;
  *&v16 = this->m_vGoalPos.x + 0.0;
  *(&areaCollector.m_Areas.m_Size + 1) = this->m_vGoalPos.y + 0.0;
  *&areaCollector.m_Areas.m_Memory.m_pMemory = v15;
  areaCollector.m_Areas.m_Size = v16;
  v17 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
  v33 = NAN;
  v17(debugoverlay, &this->m_vGoalPos, &areaCollector, &v33, 0, 0.0);
  m_Index = this->m_hPathingEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPathingEntity.m_Index) >> 9) & 0x3F];
    if ( v19 != 0 )
    {
      v20 = &v19[this->m_hPathingEntity.m_Index & 0x1FF];
      if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v20->m_pInstance);
        v30 = debugoverlay;
        p_x = &AbsOrigin->x;
        v33 = NAN;
        SetIdentityMatrix(&areaCollector);
        HIDWORD(areaCollector.m_Areas.m_Memory.m_pMemory) = *p_x;
        HIDWORD(areaCollector.m_pRejectAreas) = p_x[1];
        v37 = p_x[2];
        (*(v30->_vptr_ISceneViewDebugOverlays + 18))(v30, &areaCollector, &v33, 0, 8.0, 0.0);
      }
    }
  }
  m_pGoalArea = this->m_pGoalArea;
  if ( m_pGoalArea != 0 )
  {
    m_pPathCost = this->m_pPathCost;
    if ( m_pPathCost != 0 )
    {
      areaCollector.m_Areas.m_Size = 0;
      areaCollector.m_Areas.m_Memory.m_pMemory = 0;
      areaCollector.m_Areas.m_Memory.m_nAllocationCount = 0;
      areaCollector.m_Areas.m_Memory.m_nGrowSize = 0;
      areaCollector.m_pRejectAreas = &this->m_VisitedAreas;
      m_hullCategory = m_pPathCost->m_navHull.m_hullCategory;
      __for_range = &areaCollector;
      m_flHullRadius = m_pPathCost->m_navHull.m_flHullRadius;
      memset(&search.m_SearchHash, 0, 20);
      m_flHullHeight = m_pPathCost->m_navHull.m_flHullHeight;
      search.m_funcOnSearchArea._M_functor = __PAIR128__(v39, &areaCollector);
      search._vptr_CNavBreadthFirstSearch = off_47AE210;
      search.m_NavHull.m_flHullHeight = m_flHullHeight;
      search.m_funcOnSearchArea._M_manager = std::_Function_base::_Ref_manager<CPathCostRecorder::DebugDraw(void)::BFSAreaCollector_t>::_M_manager;
      search.m_funcOnSearchArea._M_invoker = std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),std::reference_wrapper<CPathCostRecorder::DebugDraw(void)::BFSAreaCollector_t>>::_M_invoke;
      search.m_NavHull.m_hullCategory = m_hullCategory;
      search.m_SearchHash.m_nMinSize = 1024;
      search.m_SearchHash.m_bSizeLocked = 0;
      search.m_nTeamIdForBlockedCheck = -1;
      search.m_pCostFunc = 0;
      search.m_NavHull.m_flHullRadius = m_flHullRadius;
      search.m_nConnectionFlags = 29;
      CNavBreadthFirstSearch::BreadthFirstSearch(&search, m_pGoalArea, 2000.0, m_flHullRadius);
      v26 = areaCollector.m_Areas.m_Memory.m_pMemory;
      v27 = &areaCollector.m_Areas.m_Memory.m_pMemory[areaCollector.m_Areas.m_Size];
      if ( areaCollector.m_Areas.m_Memory.m_pMemory != v27 )
      {
        do
        {
          v28 = *v26;
          v33 = 0.0;
          v34 = 0.0;
          v35 = 6.0;
          if ( INavDrawArea::ms_pInst != 0 )
            (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(INavDrawArea::ms_pInst, v28, 4291348530LL, 0, &v33, 0.0, -3.0);
          ++v26;
        }
        while ( v27 != v26 );
      }
      search._vptr_CNavBreadthFirstSearch = off_47AE210;
      if ( search.m_funcOnSearchArea._M_manager != 0 )
        search.m_funcOnSearchArea._M_manager(
          &search.m_funcOnSearchArea,
          &search.m_funcOnSearchArea,
          std::_Manager_operation::__destroy_functor);
      CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(&search.m_SearchHash);
      if ( (search.m_SearchHash.m_table.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&search.m_SearchHash.m_table);
      areaCollector.m_Areas.m_Size = 0;
      if ( (areaCollector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CNavArea const*,int>::Purge(&areaCollector.m_Areas.m_Memory);
        if ( (areaCollector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CNavArea const*,int>::Purge(&areaCollector.m_Areas.m_Memory);
      }
    }
  }
}


// CPathData::CPathData  (line 248, @0x0000000002ee0150, libserver.so)  // inlines: CNetworkVarBase, IntervalTimer
// calls: CPathData::InvalidatePath
void __fastcall CPathData::CPathData(CPathData *const this)
{
  this->_vptr_CPathData = off_47B0E10;
  this->m_ageTimer.m_timestamp.m_Value = -1.0;
  this->m_ageTimer._vptr_IntervalTimer = off_3FD0350;
  CPathData::InvalidatePath(this);
}


// CPathData::InvalidatePath  (line 255, @0x0000000002ec9a80, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, operator=, operator=<float>
// callers: CPathData::CPathData, CPath::CPath, CNavPathNB::InvalidatePath, ChasePath::InvalidatePath
void __fastcall CPathData::InvalidatePath(CPathData *const this)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  __int64 v5; // xmm0_8

  this->m_bIsCursorDataDirty = 1;
  this->m_nSegmentCount = 0;
  this->m_flCursorPos = 0.0;
  this->m_cursorData.vForward.x = 1.0;
  this->m_cursorData.vForward.y = 0.0;
  this->m_cursorData.vForward.z = 0.0;
  x = vec3_origin.x;
  this->m_cursorData.flCurvature = 0.0;
  this->m_cursorData.vPos.x = x;
  y = vec3_origin.y;
  this->m_cursorData.pSegmentPrior = 0;
  this->m_cursorData.vPos.y = y;
  z = vec3_origin.z;
  this->m_PathResultStatus = CPathData::PathResult_t::NO_PATH;
  this->m_cursorData.vPos.z = z;
  v5 = 3212836864LL;
  if ( this->m_ageTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ageTimer._vptr_IntervalTimer + 2))(&this->m_ageTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_ageTimer.m_timestamp.m_Value = -1.0;
  }
  (*(this->_vptr_CPathData + 3))(this, *&v5);
}


// CPathData::InsertSegment  (line 273, @0x0000000002ee0180, libserver.so)  // inlines: operator=
// callers: CPath::ComputePathDetails, CPath::ComputeSpecialSegments
void __fastcall CPathData::InsertSegment(CPathData *const this, const CPathSegment *const rNewSegment, int i)
{
  int m_nSegmentCount; // r8d
  __int64 v4; // r14
  char *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r8
  char *v8; // rax
  __int64 v9; // r15
  char *v10; // r12
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r11
  __int64 v14; // r10
  int v15; // r9d
  char *v16; // r13
  char *v17; // r9
  int v18; // xmm0_4

  m_nSegmentCount = this->m_nSegmentCount;
  if ( m_nSegmentCount <= 254 )
  {
    if ( m_nSegmentCount > i )
    {
      v4 = m_nSegmentCount;
      v5 = this + 88 * m_nSegmentCount;
      v6 = (m_nSegmentCount - 1 - i) + 1LL;
      v7 = 0;
      v8 = v5 + 8;
      v9 = -88 * v6;
      v10 = v5 + 8;
      v11 = -88 * v4 - this;
      v12 = (v5 - 72);
      v13 = (v5 - 44);
      v14 = (v5 - 20);
      while ( 1 )
      {
        v15 = *(v5 - 20);
        v16 = v5 - 80;
        v5 -= 88;
        *v8 = v15;
        v8[4] = v5[12];
        v17 = &v10[v11];
        v10 -= 88;
        *(v8 + 2) = *&v17[v12 - 8];
        *(v8 + 3) = *&v17[v12 - 4];
        *(v8 + 4) = *&v17[v12];
        *(v8 + 3) = *(v5 + 4);
        *(v8 + 8) = *(v5 + 10);
        *(v8 + 9) = *(v13 + v7);
        *(v8 + 10) = *(v13 + v7 + 4);
        *(v8 + 11) = *(v13 + v7 + 8);
        *(v8 + 12) = *(v5 + 14);
        *(v8 + 13) = *(v5 + 15);
        *(v8 + 14) = *(v5 + 16);
        *(v8 + 15) = *(v14 + v7);
        *(v8 + 16) = *(v14 + v7 + 4);
        v18 = *(v14 + v7 + 8);
        v7 -= 88;
        *(v8 + 17) = v18;
        *(v8 + 18) = *(v5 + 20);
        v8[76] = v5[84];
        *(v8 + 20) = *(v5 + 22);
        *(v8 + 21) = *(v5 + 23);
        if ( v7 == v9 )
          break;
        v8 = v16;
      }
      m_nSegmentCount = this->m_nSegmentCount;
    }
    this->m_nSegmentCount = m_nSegmentCount + 1;
    this->m_path[i] = *rNewSegment;
  }
}


// CPathData::RemoveSegments  (line 292, @0x0000000002ee03d0, libserver.so)  // inlines: operator=
// callers: CPathOptimizerStraightener::OptimizePath, CNavPathJumpProcessLandingZone::PostProcessJump
void __fastcall CPathData::RemoveSegments(CPathData *const this, int nFirstRemove, int nLastRemove)
{
  int m_nSegmentCount; // r13d
  int v5; // edx
  int v6; // r14d
  __int64 v7; // r8
  CPathSegment *v8; // r9
  __int64 v9; // rax
  _DWORD *v10; // rsi
  CPathSegment *v11; // r8
  _DWORD *v12; // rcx
  __int64 v13; // rax
  Vector *p_vPos; // r12
  Vector *v15; // rbx
  Vector *p_vForward; // r11
  Vector *p_vPortalCenter; // r9
  Vector *v18; // r10
  Vector *v19; // r8
  int v20; // r13d

  if ( nLastRemove >= nFirstRemove && nFirstRemove >= 0 )
  {
    m_nSegmentCount = this->m_nSegmentCount;
    if ( nFirstRemove < m_nSegmentCount && nLastRemove >= 0 && nLastRemove < m_nSegmentCount )
    {
      v5 = nLastRemove + 1;
      v6 = nLastRemove - nFirstRemove + 1;
      if ( m_nSegmentCount > v5 )
      {
        v7 = v5;
        v8 = &this->m_path[v7];
        v9 = v5 - v6;
        v10 = (this + v7 * 88);
        v11 = &this->m_path[v9];
        v12 = (this + v9 * 88);
        v13 = 0;
        p_vPos = &v8->vPos;
        v15 = &v11->vPos;
        p_vForward = &v8->vForward;
        p_vPortalCenter = &v8->vPortalCenter;
        v18 = &v11->vForward;
        v19 = &v11->vPortalCenter;
        do
        {
          v20 = v10[2];
          ++v5;
          v10 += 22;
          v12 += 22;
          *(v12 - 20) = v20;
          *(v12 - 76) = *(v10 - 76);
          *(&v15->x + v13) = *(&p_vPos->x + v13);
          *(&v15->y + v13) = *(&p_vPos->y + v13);
          *(&v15->z + v13) = *(&p_vPos->z + v13);
          *(v12 - 7) = *(v10 - 7);
          *(v12 - 12) = *(v10 - 12);
          *(&v18->x + v13) = *(&p_vForward->x + v13);
          *(&v18->y + v13) = *(&p_vForward->y + v13);
          *(&v18->z + v13) = *(&p_vForward->z + v13);
          *(v12 - 8) = *(v10 - 8);
          *(v12 - 7) = *(v10 - 7);
          *(v12 - 6) = *(v10 - 6);
          *(&v19->x + v13) = *(&p_vPortalCenter->x + v13);
          *(&v19->y + v13) = *(&p_vPortalCenter->y + v13);
          *(&v19->z + v13) = *(&p_vPortalCenter->z + v13);
          v13 += 88;
          *(v12 - 2) = *(v10 - 2);
          *(v12 - 4) = *(v10 - 4);
          *v12 = *v10;
          v12[1] = v10[1];
          m_nSegmentCount = this->m_nSegmentCount;
        }
        while ( v5 < m_nSegmentCount );
      }
      this->m_nSegmentCount = m_nSegmentCount - v6;
    }
  }
}


// CPathData::MoveCursor  (line 311, @0x0000000002ee0a90, libserver.so)  // inlines: GetLength
// callers: CPathData::DrawInterpolated
__int64 __fastcall CPathData::MoveCursor(
        CPathData *const this,
        float a2,
        float flValue,
        CPathData::MoveCursorType type)
{
  float flDistanceFromStart; // xmm1_4
  int m_nSegmentCount; // eax
  __int64 result; // rax

  if ( type != CPathData::MoveCursorType::PATH_ABSOLUTE_DISTANCE )
    a2 = a2 + this->m_flCursorPos;
  flDistanceFromStart = 0.0;
  this->m_flCursorPos = a2;
  if ( a2 < 0.0 )
    goto LABEL_7;
  m_nSegmentCount = this->m_nSegmentCount;
  if ( m_nSegmentCount > 0 )
    flDistanceFromStart = this->m_path[m_nSegmentCount - 1].flDistanceFromStart;
  result = 1;
  if ( a2 > flDistanceFromStart )
  {
LABEL_7:
    this->m_flCursorPos = flDistanceFromStart;
    result = 0;
  }
  this->m_bIsCursorDataDirty = 1;
  return result;
}


// CPathData::GetPositionAlongPath  (line 341, @0x0000000002ee0af0, libserver.so)  // inlines: NextSegment, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
__m128i __fastcall CPathData::GetPositionAlongPath(
        const CPathData *const this,
        float a2,
        float flDistanceFromStart,
        CPathSegment *pSegStart)
{
  int m_nSegmentCount; // r8d
  float v5; // xmm4_4
  float v6; // xmm1_4
  __int64 v7; // rax
  int v8; // r8d
  float flLength; // xmm3_4
  float x; // xmm5_4
  float v11; // xmm2_4
  float y; // xmm6_4
  __int64 v13; // rax
  float v14; // xmm7_4
  CPathSegment *v15; // rdx
  __int64 v16; // rax
  CPathSegment *v17; // rax
  float v18; // xmm0_4
  __int64 v19; // rax
  vec_t z; // eax
  float v22; // xmm1_4
  float v23; // xmm8_4
  float v24; // xmm9_4
  __m128i v25; // [rsp+0h] [rbp-10h] BYREF

  m_nSegmentCount = this->m_nSegmentCount;
  if ( m_nSegmentCount <= 0 )
  {
    z = vec3_origin.z;
    v25.m128i_i64[0] = *&vec3_origin.x;
    *&v25.m128i_i32[2] = z;
    return _mm_loadl_epi64(&v25);
  }
  if ( pSegStart != 0 )
  {
    v5 = pSegStart->flDistanceFromStart;
    v6 = v5;
  }
  else
  {
    pSegStart = this->m_path;
    v6 = this->m_path[0].flDistanceFromStart;
    v5 = 0.0;
  }
  if ( v6 > a2 )
  {
    v25.m128i_i64[0] = *&pSegStart->vPos.x;
    return _mm_loadl_epi64(&v25);
  }
  v7 = 0x2E8BA2E8BA2E8BA3LL * ((pSegStart - this->m_path) >> 3);
  if ( v7 < 0 || (v8 = m_nSegmentCount - 1, v7 >= v8) )
  {
    v15 = pSegStart;
LABEL_17:
    v25.m128i_i64[0] = *&v15->vPos.x;
    return _mm_loadl_epi64(&v25);
  }
  flLength = pSegStart->flLength;
  x = pSegStart->vPos.x;
  v11 = v5 + flLength;
  y = pSegStart->vPos.y;
  v13 = v7 + 1;
  v14 = pSegStart->vPos.z;
  v15 = &this->m_path[v13];
  if ( (v5 + flLength) < a2 )
  {
    while ( 1 )
    {
      v16 = 0x2E8BA2E8BA2E8BA3LL * ((v15 - this->m_path) >> 3);
      if ( v16 < 0 || v8 <= v16 )
        goto LABEL_17;
      flLength = v15->flLength;
      x = v15->vPos.x;
      y = v15->vPos.y;
      v14 = v15->vPos.z;
      v17 = &this->m_path[v16 + 1];
      if ( (flLength + v11) >= a2 )
      {
        v23 = v17->vPos.y - y;
        v24 = v17->vPos.z - v14;
        v22 = v17->vPos.x - x;
        goto LABEL_14;
      }
      v11 = v15->flLength + v11;
      v15 = v17;
    }
  }
  v22 = this->m_path[v13].vPos.x - x;
  v11 = v5;
  v23 = this->m_path[v13].vPos.y - y;
  v24 = this->m_path[v13].vPos.z - v14;
LABEL_14:
  v18 = (a2 - v11) / flLength;
  this->m_vPathPos.x = (v22 * v18) + x;
  this->m_vPathPos.y = (v23 * v18) + y;
  v19 = *&this->m_vPathPos.x;
  this->m_vPathPos.z = (v18 * v24) + v14;
  v25.m128i_i64[0] = v19;
  return _mm_loadl_epi64(&v25);
}


// CPathData::GetClosestPosition  (line 401, @0x0000000002ee0d20, libserver.so)  // inlines: LengthSqr, NextSegment, VectorSubtract, operator-, operator=
// calls: CalcClosestPointOnLineSegment
__m128i __fastcall CPathData::GetClosestPosition(
        const CPathData *const this,
        const Vector *const vPos,
        CPathSegment *pStart,
        float flAlongLimit)
{
  CPathSegment *v5; // r13
  float v7; // xmm4_4
  __int64 v8; // rax
  int *p_m_nAreaIndex; // rdx
  CPathSegment *v10; // r14
  vec_t y; // xmm6_4
  vec_t z; // xmm5_4
  float v13; // xmm1_4
  int m_nSegmentCount; // edx
  CPathSegment *m_path; // [rsp+8h] [rbp-68h]
  float flCloseRangeSq; // [rsp+14h] [rbp-5Ch]
  float v18; // [rsp+18h] [rbp-58h]
  float flDistanceSoFar; // [rsp+1Ch] [rbp-54h]
  Vector vClose; // [rsp+30h] [rbp-40h] BYREF

  v5 = pStart;
  if ( pStart != 0 || (v5 = this->m_path, this != -8LL) )
  {
    v7 = 0.0;
    m_path = this->m_path;
    this->m_vClosePos = *vPos;
    flCloseRangeSq = 3.4028235e38;
    while ( flAlongLimit == 0.0 || flAlongLimit >= v7 )
    {
      m_nSegmentCount = this->m_nSegmentCount;
      if ( m_nSegmentCount <= 0 )
        break;
      v8 = 0x2E8BA2E8BA2E8BA3LL * ((v5 - m_path) >> 3);
      if ( v8 < 0 )
        break;
      v18 = flAlongLimit;
      flDistanceSoFar = v7;
      if ( v8 >= m_nSegmentCount - 1 )
        break;
      p_m_nAreaIndex = &this->m_path[v8].m_nAreaIndex;
      v10 = (p_m_nAreaIndex + 2);
      CalcClosestPointOnLineSegment(vPos, &v5->vPos, (p_m_nAreaIndex + 4), &vClose, 0);
      y = vClose.y;
      z = vClose.z;
      flAlongLimit = v18;
      v13 = (((vClose.x - vPos->x) * (vClose.x - vPos->x)) + ((vClose.y - vPos->y) * (vClose.y - vPos->y)))
          + ((vClose.z - vPos->z) * (vClose.z - vPos->z));
      if ( flCloseRangeSq > v13 )
      {
        this->m_vClosePos.x = vClose.x;
        this->m_vClosePos.y = y;
        this->m_vClosePos.z = z;
        flCloseRangeSq = v13;
      }
      v7 = flDistanceSoFar + v5->flLength;
      v5 = v10;
    }
    vClose = this->m_vClosePos;
  }
  else
  {
    vClose = *vPos;
  }
  return _mm_loadl_epi64(&vClose);
}


// CPathData::MoveCursorToClosestPosition  (line 444, @0x0000000002ee0ef0, libserver.so)  // inlines: FastSqrt, Length, LengthSqr, NextSegment, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CalcClosestPointOnLineSegment
// callers: CPathFollower::AdjustSpeed, CPathFollower::FindBlocker
void __fastcall CPathData::MoveCursorToClosestPosition(
        const CPathData *const this,
        const Vector *const vPos,
        unsigned int type,
        float flAlongLimit)
{
  CPathSegment *m_path; // r12
  float v7; // xmm4_4
  vec_t z; // xmm1_4
  __int64 v9; // rax
  int *p_m_nAreaIndex; // rdx
  CPathSegment *v11; // r14
  vec_t y; // xmm6_4
  vec_t v13; // xmm5_4
  float v14; // xmm1_4
  int m_nSegmentCount; // edx
  const CPathSegment *pSegmentPrior; // rax
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  CPathSegment *v20; // [rsp+8h] [rbp-58h]
  float flCloseRangeSq; // [rsp+14h] [rbp-4Ch]
  float v22; // [rsp+18h] [rbp-48h]
  float flDistanceSoFar; // [rsp+1Ch] [rbp-44h]
  Vector vClose; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_nSegmentCount > 0 && type <= 1 )
  {
    if ( type != 1 || (m_path = this->m_cursorData.pSegmentPrior) == 0 )
      m_path = this->m_path;
    v7 = 0.0;
    v20 = this->m_path;
    this->m_cursorData.vPos.x = vPos->x;
    flCloseRangeSq = 3.4028235e38;
    this->m_cursorData.vPos.y = vPos->y;
    z = vPos->z;
    this->m_cursorData.pSegmentPrior = m_path;
    this->m_cursorData.vPos.z = z;
    while ( flAlongLimit == 0.0 || flAlongLimit >= v7 )
    {
      m_nSegmentCount = this->m_nSegmentCount;
      if ( m_nSegmentCount <= 0 )
        break;
      v9 = 0x2E8BA2E8BA2E8BA3LL * ((m_path - v20) >> 3);
      if ( v9 < 0 )
        break;
      v22 = flAlongLimit;
      flDistanceSoFar = v7;
      if ( v9 >= m_nSegmentCount - 1 )
        break;
      p_m_nAreaIndex = &this->m_path[v9].m_nAreaIndex;
      v11 = (p_m_nAreaIndex + 2);
      CalcClosestPointOnLineSegment(vPos, &m_path->vPos, (p_m_nAreaIndex + 4), &vClose, 0);
      y = vClose.y;
      v13 = vClose.z;
      flAlongLimit = v22;
      v14 = (((vClose.x - vPos->x) * (vClose.x - vPos->x)) + ((vClose.y - vPos->y) * (vClose.y - vPos->y)))
          + ((vClose.z - vPos->z) * (vClose.z - vPos->z));
      if ( flCloseRangeSq > v14 )
      {
        this->m_cursorData.vPos.x = vClose.x;
        this->m_cursorData.vPos.y = y;
        this->m_cursorData.vPos.z = v13;
        this->m_cursorData.pSegmentPrior = m_path;
        flCloseRangeSq = v14;
      }
      v7 = flDistanceSoFar + m_path->flLength;
      m_path = v11;
    }
    pSegmentPrior = this->m_cursorData.pSegmentPrior;
    v17 = this->m_cursorData.vPos.x - pSegmentPrior->vPos.x;
    v18 = this->m_cursorData.vPos.z - pSegmentPrior->vPos.z;
    v19 = ((fsqrt(
              ((v17 * v17)
             + ((this->m_cursorData.vPos.y - pSegmentPrior->vPos.y) * (this->m_cursorData.vPos.y - pSegmentPrior->vPos.y)))
            + (v18 * v18))
          / pSegmentPrior->flLength)
         * pSegmentPrior->flLength)
        + pSegmentPrior->flDistanceFromStart;
    this->m_bIsCursorDataDirty = 1;
    this->m_flCursorPos = v19;
  }
}


// CPathData::GetCursorData  (line 525, @0x0000000002ee1140, libserver.so)  // inlines: GetFloat, GetLength, NextSegment, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// callers: CPathData::DrawInterpolated, CPathFollower::AdjustSpeed, CPathFollower::FindBlocker
const CPathData::PathCursorData *__fastcall CPathData::GetCursorData(const CPathData *const this)
{
  int m_nSegmentCount; // eax
  float m_flCursorPos; // xmm0_4
  int v3; // r8d
  __int64 v4; // rsi
  float flCurvature; // xmm0_4
  vec_t x; // xmm0_4
  __int128 v8; // xmm3
  CPathSegment *v9; // rdx
  CPathSegment *m_path; // rax
  float flLength; // xmm2_4
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // r9
  float v15; // xmm0_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  ConVar *m_pParent; // rcx
  vec_t v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm6_4
  vec_t v23; // xmm3_4
  vec_t v24; // xmm1_4
  float v25; // xmm4_4
  float m_fValue; // xmm1_4
  float v27; // xmm0_4

  m_nSegmentCount = this->m_nSegmentCount;
  if ( m_nSegmentCount <= 0 )
  {
    this->m_cursorData.vForward.x = 1.0;
    this->m_cursorData.vForward.y = 0.0;
    this->m_cursorData.vForward.z = 0.0;
    this->m_cursorData.flCurvature = 0.0;
    this->m_cursorData.pSegmentPrior = 0;
    this->m_cursorData.vPos = vec3_origin;
    return &this->m_cursorData;
  }
  else
  {
    if ( this->m_bIsCursorDataDirty )
    {
      m_flCursorPos = this->m_flCursorPos;
      if ( m_flCursorPos < 0.000099999997 || m_nSegmentCount == 1 )
      {
        x = this->m_path[0].vPos.x;
        this->m_cursorData.pSegmentPrior = this->m_path;
        this->m_cursorData.vPos.x = x;
        this->m_cursorData.vPos.y = this->m_path[0].vPos.y;
        this->m_cursorData.vPos.z = this->m_path[0].vPos.z;
        this->m_cursorData.vForward = this->m_path[0].vForward;
        this->m_cursorData.flCurvature = this->m_path[0].flCurvature;
      }
      else
      {
        v3 = m_nSegmentCount - 1;
        v4 = m_nSegmentCount - 1;
        if ( m_flCursorPos <= (this->m_path[v4].flDistanceFromStart - 0.000099999997) )
        {
          v8 = 0;
          v9 = &this->m_path[1];
          m_path = this->m_path;
          while ( 1 )
          {
            flLength = m_path->flLength;
            v12 = v8;
            if ( (*&v8 + flLength) >= m_flCursorPos )
              break;
            v13 = 0x2E8BA2E8BA2E8BA3LL * ((v9 - this->m_path) >> 3);
            if ( v13 < 0 || v3 <= v13 )
              goto LABEL_8;
            *&v12 = *&v8 + flLength;
            v8 = v12;
            v14 = v13 + 1;
            m_path = v9;
            v9 = &this->m_path[v14];
          }
          v15 = m_flCursorPos - *&v8;
          if ( flLength <= 0.0 )
            v16 = 1.0;
          else
            v16 = v15 / flLength;
          v17 = flLength - v15;
          v18 = m_path->vPos.x;
          m_pParent = nav_path_segment_influence_radius.m_pParent;
          v20 = ((v9->vPos.z - m_path->vPos.z) * v16) + m_path->vPos.z;
          v21 = v9->vPos.x;
          this->m_cursorData.vPos.y = ((v9->vPos.y - m_path->vPos.y) * v16) + m_path->vPos.y;
          this->m_cursorData.vPos.z = v20;
          this->m_cursorData.vPos.x = ((v21 - v18) * v16) + v18;
          v22 = m_path->vForward.x;
          v23 = ((v9->vForward.y - m_path->vForward.y) * v16) + m_path->vForward.y;
          v24 = ((v9->vForward.z - m_path->vForward.z) * v16) + m_path->vForward.z;
          v25 = v9->vForward.x;
          this->m_cursorData.pSegmentPrior = m_path;
          this->m_cursorData.vForward.y = v23;
          this->m_cursorData.vForward.z = v24;
          this->m_cursorData.vForward.x = ((v25 - v22) * v16) + v22;
          m_fValue = m_pParent->m_Value.m_fValue;
          if ( m_fValue <= v15 )
          {
            if ( m_fValue > v17 )
              this->m_cursorData.flCurvature = (1.0 - (v17 / m_fValue)) * v9->flCurvature;
          }
          else
          {
            v27 = v15 / m_fValue;
            if ( m_fValue <= v17 )
              this->m_cursorData.flCurvature = (1.0 - v27) * m_path->flCurvature;
            else
              this->m_cursorData.flCurvature = ((m_path->flCurvature * (1.0 - v27))
                                              + (v9->flCurvature * (1.0 - (v17 / m_fValue))))
                                             * 0.5;
          }
        }
        else
        {
          this->m_cursorData.vPos = this->m_path[v4].vPos;
          this->m_cursorData.vForward = this->m_path[v4].vForward;
          flCurvature = this->m_path[v4].flCurvature;
          this->m_cursorData.pSegmentPrior = &this->m_path[m_nSegmentCount - 2];
          this->m_cursorData.flCurvature = flCurvature;
        }
      }
LABEL_8:
      this->m_bIsCursorDataDirty = 0;
    }
    return &this->m_cursorData;
  }
}


// CPathData::Draw  (line 628, @0x0000000002efaab0, libserver.so)  // inlines: DrawArea, FirstSegment, GetArea, GetBool, GetInt, Max<float>, NextSegment, VectorAdd, VectorMultiply, VectorSubtract, abs<float>, operator*, operator+, operator-, operator[]
// calls: NDebugOverlay::VertArrow, NDebugOverlay::HorzArrow, CNavDrawArea::DrawConnectedAreas, NDebugOverlay::Line
// globals: jpt_2EFABDF
void __fastcall CPathData::Draw(const CPathData *const this, CPathSegment *pStart, float a3, float flDuration)
{
  CPathSegment *m_path; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  CPathSegment *v8; // r12
  double v9; // xmm1_8
  __int64 x_low; // xmm0_8
  double v11; // xmm2_8
  double v12; // xmm3_8
  bool v13; // dl
  int v14; // r10d
  int v15; // r15d
  int v16; // r14d
  const Vector *p_m_vTop; // rsi
  int v18; // r10d
  const Vector *p_vPos; // r11
  float v20; // xmm2_4
  float v21; // xmm3_4
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  float v24; // [rsp+Ch] [rbp-64h]
  CPathSegment *v25; // [rsp+10h] [rbp-60h]
  bool bDrawClimbSegments; // [rsp+18h] [rbp-58h]
  bool bDrawGroundSegments; // [rsp+19h] [rbp-57h]
  bool bDrawSeg; // [rsp+1Ah] [rbp-56h]
  bool bDrawJumpSegments; // [rsp+1Bh] [rbp-55h]
  float v30; // [rsp+1Ch] [rbp-54h]
  float v31; // [rsp+1Ch] [rbp-54h]
  int b; // [rsp+20h] [rbp-50h]
  float v33; // [rsp+28h] [rbp-48h]
  int v34; // [rsp+28h] [rbp-48h]
  Vector endPos; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_nSegmentCount > 0 )
  {
    m_path = pStart;
    bDrawSeg = nav_path_draw_ladder_segments.m_pParent->m_Value.m_nValue != 0;
    bDrawJumpSegments = nav_path_draw_jump_segments.m_pParent->m_Value.m_nValue != 0;
    bDrawGroundSegments = nav_path_draw_ground_segments.m_pParent->m_Value.m_nValue != 0;
    bDrawClimbSegments = nav_path_draw_climb_segments.m_pParent->m_Value.m_nValue != 0;
    if ( pStart == 0 )
      m_path = this->m_path;
    v25 = this->m_path;
    while ( 1 )
    {
      v6 = 0x2E8BA2E8BA2E8BA3LL * ((m_path - v25) >> 3);
      if ( v6 < 0 || v6 >= this->m_nSegmentCount - 1 )
        break;
      v7 = v6 + 1;
      v8 = &this->m_path[v7];
      *&v9 = LODWORD(this->m_path[v7].vPos.y);
      x_low = LODWORD(this->m_path[v7].vPos.x);
      *&v9 = *&v9 - m_path->vPos.y;
      *&v11 = LODWORD(this->m_path[v7].vPos.z);
      *&x_low = *&x_low - m_path->vPos.x;
      *&v11 = *&v11 - m_path->vPos.z;
      if ( *&v9 < 0.0 )
        *&v9 ^= 0x80000000uLL;
      if ( *&x_low < 0.0 )
        x_low ^= 0x80000000uLL;
      HIDWORD(v12) = HIDWORD(x_low);
      *&v12 = fmaxf(*&x_low, *&v9);
      if ( *&v11 < 0.0 )
        *&v11 ^= 0x80000000uLL;
      switch ( m_path->type )
      {
        case CPathSegment::SegmentType::PATH_SEG_JUMP_DOWN:
          v13 = bDrawJumpSegments;
          v14 = 255;
          v15 = 0;
          v16 = 255;
          break;
        case CPathSegment::SegmentType::PATH_SEG_DROP_DOWN:
          v13 = bDrawJumpSegments;
          v14 = 255;
          v15 = 100;
          v16 = 255;
          break;
        case CPathSegment::SegmentType::PATH_SEG_JUMP_OVER_GAP:
          v13 = bDrawJumpSegments;
          v14 = 255;
          v15 = 255;
          v16 = 0;
          break;
        case CPathSegment::SegmentType::PATH_SEG_CLIMB_UP:
          v13 = bDrawClimbSegments;
          v14 = 255;
          v15 = 0;
          v16 = 0;
          break;
        case CPathSegment::SegmentType::PATH_SEG_LADDER_UP:
          v13 = bDrawSeg;
          v14 = 0;
          v15 = 255;
          v16 = 0;
          break;
        case CPathSegment::SegmentType::PATH_SEG_LADDER_DOWN:
          v13 = bDrawSeg;
          v14 = 0;
          v15 = 100;
          v16 = 0;
          break;
        default:
          v13 = bDrawGroundSegments;
          v14 = 0;
          v15 = 77;
          v16 = 255;
          break;
      }
      if ( v13 )
      {
        p_m_vTop = &m_path->pLadder->m_vTop;
        if ( p_m_vTop != 0 )
        {
          v30 = *&v12;
          v33 = *&v11;
          b = v14;
          NDebugOverlay::VertArrow(p_m_vTop + 1, p_m_vTop, 3.0, v16, v15, v14, 255, 1, a3);
          v18 = b;
          p_vPos = &m_path->vPos;
          v20 = v33;
          v21 = v30;
        }
        else
        {
          v24 = *&v12;
          v31 = *&v11;
          v34 = v14;
          NDebugOverlay::Line(&m_path->vPos, &this->m_path[v7].vPos, v16, v15, v14, 1, a3);
          v21 = v24;
          v20 = v31;
          v18 = v34;
          p_vPos = &m_path->vPos;
        }
        v22 = (m_path->vForward.z * 25.0) + m_path->vPos.z;
        v23 = (25.0 * m_path->vForward.x) + m_path->vPos.x;
        endPos.y = (m_path->vForward.y * 25.0) + m_path->vPos.y;
        endPos.z = v22;
        endPos.x = v23;
        if ( v21 <= v20 )
          NDebugOverlay::VertArrow(p_vPos, &endPos, 3.0, v16, v15, v18, 255, 1, a3);
        else
          NDebugOverlay::HorzArrow(p_vPos, &endPos, 3.0, v16, v15, v18, 255, 1, a3);
      }
      if ( nav_path_draw_areas.m_pParent->m_Value.m_nValue != 0 && INavDrawArea::ms_pInst != 0 )
        (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 3))(
          INavDrawArea::ms_pInst,
          TheNavMesh->m_NavAreas.m_Memory.m_pMemory[m_path->m_nAreaIndex],
          39,
          a3,
          v9,
          v11,
          v12);
      if ( nav_path_draw_connected_areas.m_pParent->m_Value.m_nValue != 0 )
      {
        CNavDrawArea::DrawConnectedAreas(TheNavMesh->m_NavAreas.m_Memory.m_pMemory[m_path->m_nAreaIndex], a3, *&v9);
        if ( this->m_nSegmentCount <= 0 )
          return;
      }
      else if ( this->m_nSegmentCount <= 0 )
      {
        return;
      }
      m_path = v8;
    }
  }
}


// CPathData::DrawInterpolated  (line 739, @0x0000000002ee1520, libserver.so)  // inlines: GetFloat
// calls: CPathData::MoveCursor, CPathData::GetCursorData, NDebugOverlay::Line
void __fastcall CPathData::DrawInterpolated(CPathData *const this, float a2, __m128i flFrom, float flTo)
{
  float v5; // r14d
  const CPathData::PathCursorData *CursorData; // rax
  float v7; // xmm1_4
  float v8; // xmm2_4
  const Vector *p_vPos; // r13
  float v10; // xmm1_4
  int v11; // ecx
  int v12; // edx
  float t; // [rsp+Ch] [rbp-34h]
  Vector vLastPos; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_nSegmentCount > 0 )
  {
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(flFrom));
    CPathData::MoveCursor(this, a2, *flFrom.m128i_i32, CPathData::MoveCursorType::PATH_ABSOLUTE_DISTANCE);
    CursorData = CPathData::GetCursorData(this);
    v8 = a2;
    p_vPos = &CursorData->vPos;
    if ( v5 > a2 )
    {
      do
      {
        vLastPos = *p_vPos;
        t = v8 + nav_path_draw_inc.m_pParent->m_Value.m_fValue;
        CPathData::MoveCursor(this, t, v7, CPathData::MoveCursorType::PATH_ABSOLUTE_DISTANCE);
        CPathData::GetCursorData(this);
        v10 = 3.0 * p_vPos[2].x;
        v11 = ((v10 + 1.0) * 255.0);
        if ( v11 > 255 )
          v11 = 255;
        if ( v11 < 0 )
          v11 = 0;
        v12 = ((1.0 - v10) * 255.0);
        if ( v12 > 255 )
          v12 = 255;
        if ( v12 < 0 )
          v12 = 0;
        NDebugOverlay::Line(&vLastPos, p_vPos, v12, v11, 0, 1, 0.1);
        v8 = t;
      }
      while ( v5 > t );
    }
  }
}


// CPath::CPath  (line 787, @0x0000000002ee1660, libserver.so)  // inlines: CNetworkVarBase, CPathData, IntervalTimer, PathCapabilities_t
// calls: CPathData::InvalidatePath
// callers: CNavEditor::UpdateSelection, CSimpleBot::CSimpleBotIntention::Reset, CSimpleBot::CSimpleBotIntention::CSimpleBotIntention, ChasePath::ChasePath
void __fastcall CPath::CPath(CPath *const this)
{
  this->_vptr_CPathData = off_47B0E10;
  this->m_ageTimer.m_timestamp.m_Value = -1.0;
  this->m_ageTimer._vptr_IntervalTimer = off_3FD0350;
  CPathData::InvalidatePath(this);
  this->_vptr_CPathData = off_47B0E50;
  this->m_pPartialPathDelegate = 0;
  this->m_PathCaps.m_pPathingEntity = 0;
  this->m_PathCaps.m_bIsDebugging = 0;
  this->m_PathCaps.m_pPathCost = 0;
  this->m_PathCaps.m_flMoverStepHeight = 1.0;
  *&this->m_PathCaps.m_flMoverCrouchHullHeight = 1065353216;
  this->m_bIncludeGoalIfPathFails = 0;
  this->m_bIncludeGoalIfOffMesh = 0;
  this->m_pOptimizer = 0;
  this->m_pJumpPostProcess = 0;
  this->m_pPathFollower = 0;
  this->m_bAllowPartialPaths = 0;
}


// CPath::OnPathChanged  (line 806, @0x0000000002ec6b00, libserver.so)
void __fastcall CPath::OnPathChanged(CPath *const this)
{
  IPathFollower *m_pPathFollower; // rdi

  m_pPathFollower = this->m_pPathFollower;
  if ( m_pPathFollower != 0 )
    (*(m_pPathFollower->_vptr_IPathFollower + 1))(m_pPathFollower);
}


// CPath::ComputePathDetails  (line 816, @0x0000000002ee1730, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, Count, EnableInteractsExclude, GetArea, GetCenter, GetLadders, GetNavHull, GetNavHullRadiusOrDefault, GetZ, IgnoreOneEntitySkipPlayersAndNPCs, Init, LengthSqr, NextSegment, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, UTIL_TraceHull, Vector, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-, operator=, operator[]
// calls: CNavOrientedPortal::GetCenter, CNavPoly::GetZ, CNavPoly::GetClosestPointOnPoly, CNavPoly::GetEdgeNormal, CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay, CNavMesh::GetGroundHeight, CPathData::InsertSegment, NDebugOverlay::Cross3D, NDebugOverlay::HorzArrow
// callers: CPath::AssemblePrecomputedPath
bool __fastcall CPath::ComputePathDetails(CPath *const this, const Vector *const vStartPos, int nStartSeg)
{
  int v3; // r15d
  const CPathCostBase *m_pPathCost; // rax
  float m_flHullRadius; // xmm0_4
  CPath *v6; // r11
  int m_nSegmentCount; // edx
  __int64 v8; // rax
  CNavArea **m_pMemory; // rdx
  CNavArea *v10; // r10
  char *v11; // r14
  CNavArea *v12; // r12
  int v13; // r8d
  int v14; // xmm0_4
  int v15; // xmm0_4
  vec_t v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float *v23; // r13
  CPath *v24; // r14
  float v25; // xmm4_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  const CBaseEntity *m_pPathingEntity; // r15
  float v29; // xmm0_4
  float v30; // xmm9_4
  float v31; // xmm8_4
  float *v32; // rbx
  CPath *v33; // r11
  __int64 v34; // r13
  bool v35; // zf
  unsigned int v36; // xmm9_4
  bool GroundHeight; // al
  __int64 v38; // rax
  vec_t x; // xmm0_4
  int (***v40)(...); // rax
  const CNavLadder *v41; // rdx
  int (**v42)(...); // rdx
  int (**v43)(...); // rdx
  int (**v44)(...); // rax
  NavLaddersAndElevators_t *v45; // rdi
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rcx
  int j; // esi
  int m_Size; // eax
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rdi
  __int64 v50; // rax
  NavLadderConnect v51; // rdx
  float v52; // xmm3_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  __int64 v57; // rdx
  NavLadderConnect v58; // rax
  float v59; // xmm1_4
  float v60; // xmm0_4
  float v61; // xmm2_4
  __int64 v62; // [rsp+10h] [rbp-230h]
  int i; // [rsp+20h] [rbp-220h]
  float flHullWidthEffective; // [rsp+24h] [rbp-21Ch]
  float flInc; // [rsp+2Ch] [rbp-214h]
  float v66; // [rsp+30h] [rbp-210h]
  float v67; // [rsp+34h] [rbp-20Ch]
  float flHullHeight; // [rsp+38h] [rbp-208h]
  float flStepHeight; // [rsp+4Ch] [rbp-1F4h]
  float flPushDist; // [rsp+50h] [rbp-1F0h]
  float vToOnFromArea; // [rsp+54h] [rbp-1ECh]
  float vToOnFromArea_4; // [rsp+58h] [rbp-1E8h]
  float vToOnFromArea_8; // [rsp+5Ch] [rbp-1E4h]
  __int64 v74; // [rsp+60h] [rbp-1E0h]
  float v75; // [rsp+60h] [rbp-1E0h]
  CNavPoly *v76; // [rsp+68h] [rbp-1D8h]
  float v77; // [rsp+68h] [rbp-1D8h]
  CPath *v78; // [rsp+70h] [rbp-1D0h]
  float v79; // [rsp+70h] [rbp-1D0h]
  CPath *v80; // [rsp+70h] [rbp-1D0h]
  float v81; // [rsp+78h] [rbp-1C8h]
  CPathData *v82; // [rsp+78h] [rbp-1C8h]
  float flGround; // [rsp+8Ch] [rbp-1B4h] BYREF
  Vector vToOnToArea; // [rsp+90h] [rbp-1B0h]
  Vector v85; // [rsp+A0h] [rbp-1A0h]
  Vector vStartDrop; // [rsp+B0h] [rbp-190h] BYREF
  CNavOrientedPortal portal; // [rsp+C0h] [rbp-180h] BYREF
  CGameQueryAttributes traceFilter; // [rsp+E0h] [rbp-160h] BYREF
  Vector vNewSegPos; // [rsp+110h] [rbp-130h] BYREF
  int v90; // [rsp+11Ch] [rbp-124h]
  float v91; // [rsp+120h] [rbp-120h]
  float v92; // [rsp+124h] [rbp-11Ch]
  float v93; // [rsp+128h] [rbp-118h]
  int v94; // [rsp+12Ch] [rbp-114h]
  float v95; // [rsp+130h] [rbp-110h]
  float v96; // [rsp+134h] [rbp-10Ch]
  float v97; // [rsp+138h] [rbp-108h]
  int v98; // [rsp+13Ch] [rbp-104h]
  float v99; // [rsp+140h] [rbp-100h]
  float v100; // [rsp+144h] [rbp-FCh]
  float v101; // [rsp+148h] [rbp-F8h]
  int v102; // [rsp+14Ch] [rbp-F4h]
  int v103; // [rsp+150h] [rbp-F0h]
  bool v104; // [rsp+154h] [rbp-ECh]
  bool v105; // [rsp+155h] [rbp-EBh]
  CPathSegment newSegment; // [rsp+160h] [rbp-E0h] BYREF
  __int64 v107; // [rsp+1C8h] [rbp-78h]
  __int64 v108; // [rsp+1D0h] [rbp-70h]
  __int64 v109; // [rsp+1D8h] [rbp-68h]
  int v110; // [rsp+1E0h] [rbp-60h]
  __int16 v111; // [rsp+1E4h] [rbp-5Ch]
  char v112; // [rsp+1E6h] [rbp-5Ah]
  char v113; // [rsp+1E7h] [rbp-59h]
  Vector ClosestPointOnPoly; // 0:kr14_12.12
  Vector EdgeNormal; // 0:kr20_12.12

  v3 = nStartSeg;
  m_pPathCost = this->m_PathCaps.m_pPathCost;
  if ( m_pPathCost != 0 && (m_flHullRadius = m_pPathCost->m_navHull.m_flHullRadius) >= 0.0 )
    flHullWidthEffective = m_flHullRadius + 5.0;
  else
    flHullWidthEffective = 21.0;
  v6 = this;
  flHullHeight = this->m_PathCaps.m_flMoverCrouchHullHeight;
  flStepHeight = this->m_PathCaps.m_flMoverStepHeight;
  if ( nStartSeg >= this->m_nSegmentCount )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v3 <= 0 )
      {
        v10 = 0;
        m_pMemory = TheNavMesh->m_NavAreas.m_Memory.m_pMemory;
        v8 = 0;
      }
      else
      {
        v8 = &v6->m_path[v3 - 1];
        m_pMemory = TheNavMesh->m_NavAreas.m_Memory.m_pMemory;
        v10 = m_pMemory[v6->m_path[v3 - 1].m_nAreaIndex];
      }
      v11 = v6 + 88 * v3;
      v12 = m_pMemory[*(v11 + 22)];
      *(v11 + 4) = 0;
      v13 = *(v11 + 2);
      if ( v13 != 4 )
        break;
      v14 = *(v11 + 4);
      *(v11 + 20) = 0;
      ++v3;
      v11[12] = -1;
      *(v11 + 17) = v14;
      v15 = *(v11 + 5);
      *(v11 + 10) = 0;
      *(v11 + 18) = v15;
      *(v11 + 19) = *(v11 + 6);
      if ( v6->m_nSegmentCount <= v3 )
        return 1;
    }
    if ( v13 <= 3 )
    {
      v74 = v8;
      v76 = v10;
      v78 = v6;
      *&newSegment.how = (*(v6->_vptr_CPathData + 7))(v6, v10, v8 + 8, v12, v13, v11[12], &portal);
      newSegment.vPos.x = v17;
      *(v11 + 2) = *&newSegment.how;
      *(v11 + 6) = LODWORD(newSegment.vPos.x);
      *&newSegment.how = CNavOrientedPortal::GetCenter(&portal);
      v18 = *(v11 + 5);
      *(v11 + 68) = *&newSegment.how;
      *(v11 + 19) = LODWORD(newSegment.vPos.x);
      *(v11 + 20) = 0.5 * portal.m_flWidth;
      v20 = CNavPoly::GetZ(v76, v18, v19);
      *(v11 + 6) = v20;
      vToOnFromArea = v20;
      ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(v12, (v11 + 16));
      v6 = v78;
      vToOnToArea = ClosestPointOnPoly;
      m_nSegmentCount = v78->m_nSegmentCount;
      if ( (vToOnFromArea - ClosestPointOnPoly.z) <= flStepHeight || m_nSegmentCount > 254 )
        goto LABEL_12;
      EdgeNormal = CNavPoly::GetEdgeNormal(TheNavMesh->m_NavAreas.m_Memory.m_pMemory[*(v74 + 80)], v11[8]);
      v85 = EdgeNormal;
      v21 = 0.5 * flHullWidthEffective;
      v22 = 0.0;
      v62 = v3;
      v23 = (v11 + 8);
      v24 = v78;
      i = v3;
      flInc = 0.25 * flHullWidthEffective;
      v25 = 0.0;
      v67 = v21 + v21;
      v66 = v21 - v21;
      do
      {
        flPushDist = v25;
        v79 = v22;
        v81 = v22 + v23[4];
        v75 = EdgeNormal.y * v25;
        v26 = (EdgeNormal.y * v25) + v23[3];
        vToOnFromArea_4 = EdgeNormal.x * v25;
        v27 = (EdgeNormal.x * v25) + v23[2];
        v111 = 0;
        v107 = 0;
        v77 = v26;
        vToOnFromArea_8 = v27;
        v108 = 0;
        v109 = 0;
        v112 = 0;
        v113 = 7;
        v110 = 0;
        CGameTrace::Init(&newSegment);
        m_pPathingEntity = v24->m_PathCaps.m_pPathingEntity;
        traceFilter.m_nHierarchyId = 0;
        traceFilter.m_nInteractsExclude = 0;
        traceFilter.m_nInteractsAs = 0;
        traceFilter.m_nEntityIdToIgnore = -1;
        traceFilter.m_nCollisionGroup = 3;
        traceFilter.m_nObjectSetMask = 7;
        *(&traceFilter.RnQueryShapeAttr_t + 31) = *(&traceFilter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
        traceFilter.m_nInteractsWith = 552993;
        traceFilter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(m_pPathingEntity);
        traceFilter.m_nHierarchyId = HierarchyIDFromBaseEntity(m_pPathingEntity);
        v90 = 0;
        v94 = 0;
        v98 = 0;
        traceFilter.m_nInteractsExclude |= 0xC0000uLL;
        v102 = 0;
        v103 = 0;
        v91 = (vToOnFromArea_8 + v79) - vToOnFromArea_8;
        v92 = (v77 + v79) - v77;
        v93 = (v81 - flStepHeight) - v81;
        v101 = 0.5 * flHullHeight;
        v99 = 0.5 * v67;
        v100 = 0.5 * v67;
        v105 = (((v91 * v91) + (v92 * v92)) + (v93 * v93)) != v79;
        v104 = ((((0.5 * v67) * (0.5 * v67)) + ((0.5 * v67) * (0.5 * v67))) + (v101 * v101)) < 0.000001;
        v29 = (flHullHeight + v79) * 0.5;
        vNewSegPos.x = vToOnFromArea_8 + (0.5 * v66);
        vNewSegPos.y = v77 + (0.5 * v66);
        vNewSegPos.z = v81 + v29;
        v95 = -(0.5 * v66);
        v97 = -v29;
        v96 = v95;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vNewSegPos, &traceFilter, &newSegment);
        v30 = v75;
        v31 = vToOnFromArea_4;
        if ( newSegment.vForward.z >= 1.0 )
        {
          v32 = v23;
          v33 = v24;
          v3 = i;
          v34 = v62;
          goto LABEL_25;
        }
        v25 = flPushDist + flInc;
        v22 = v79;
      }
      while ( (flPushDist + flInc) <= 75.0 );
      v32 = v23;
      v33 = v24;
      v30 = EdgeNormal.y * v25;
      v3 = i;
      v31 = EdgeNormal.x * v25;
      v34 = v62;
LABEL_25:
      v35 = !v33->m_PathCaps.m_bIsDebugging;
      *&v36 = v30 + v32[3];
      vStartDrop.x = v31 + v32[2];
      LODWORD(vStartDrop.y) = v36;
      vStartDrop.z = vToOnFromArea;
      traceFilter.m_nInteractsWith = __PAIR64__(v36, LODWORD(vStartDrop.x));
      *&traceFilter.m_nInteractsExclude = ClosestPointOnPoly.z;
      if ( !v35 )
      {
        v80 = v33;
        NDebugOverlay::Cross3D(&vStartDrop, 5.0, 255, 0, 0, 1, 5.0);
        NDebugOverlay::Cross3D(&traceFilter, 5.0, 0, 255, 0, 1, 5.0);
        NDebugOverlay::HorzArrow(&vStartDrop, &traceFilter, 5.0, 255, 100, 0, 255, 1, 5.0);
        v33 = v80;
      }
      v82 = v33;
      GroundHeight = CNavMesh::GetGroundHeight(TheNavMesh, &vStartDrop, &flGround, 0);
      v6 = v82;
      if ( GroundHeight )
      {
        m_nSegmentCount = v82->m_nSegmentCount;
        if ( vStartDrop.z > (flStepHeight + flGround)
          && (m_nSegmentCount <= 0
           || (v38 = 0x2E8BA2E8BA2E8BA3LL * ((v32 - v82->m_path) >> 3)) < 0
           || v38 >= m_nSegmentCount - 1
           || (flStepHeight + flGround) > TheNavMesh->m_NavAreas.m_Memory.m_pMemory[v82->m_path[v38 + 1].m_nAreaIndex]->m_vCenter.z) )
        {
          x = vStartDrop.x;
          ++v3;
          *(v32 + 8) = 2;
          v32[2] = x;
          v32[3] = vStartDrop.y;
          v32[4] = vStartDrop.z;
          vNewSegPos = CNavPoly::GetClosestPointOnPoly(v12, &traceFilter);
          v40 = &v82->_vptr_CPathData + 11 * v34;
          *&newSegment.vPos.x = *&vNewSegPos.x;
          *&newSegment.how = v40[1];
          *&newSegment.vPos.z = v40[3];
          v41 = v40[4];
          newSegment.vPos.z = vNewSegPos.z;
          newSegment.pLadder = v41;
          *&newSegment.type = v40[5];
          v42 = v40[6];
          newSegment.type = CPathSegment::SegmentType::PATH_SEG_ON_GROUND;
          *&newSegment.vForward.y = v42;
          *&newSegment.flLength = v40[7];
          *&newSegment.flCurvature = v40[8];
          *&newSegment.vPortalCenter.y = v40[9];
          v43 = v40[10];
          v44 = v40[11];
          *&newSegment.flPortalHalfWidth = v43;
          *&newSegment.m_nAreaIndex = v44;
          CPathData::InsertSegment(v82, &newSegment, v3);
          v6 = v82;
          m_nSegmentCount = v82->m_nSegmentCount;
        }
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    if ( v13 == 5 )
      break;
    if ( v13 == 6 )
    {
      m_pLaddersAndElevators = v10->m_pLaddersAndElevators;
      if ( m_pLaddersAndElevators != 0 )
      {
        m_pData = m_pLaddersAndElevators->m_ladders[1].m_pData;
        if ( m_pData != 0 )
        {
          v50 = 0;
          for ( j = 0; j < m_pData->m_Size; j = v50 )
          {
            v51 = m_pData->m_Elements[v50++];
            if ( v51.pLadder->m_pBottomArea == v12 )
            {
              *(v11 + 4) = v51;
              *(v11 + 4) = LODWORD(v51.pLadder->m_vTop.x);
              *(v11 + 5) = LODWORD(v51.pLadder->m_vTop.y);
              *(v11 + 6) = LODWORD(v51.pLadder->m_vTop.z);
              v52 = v51.pLadder->m_vTop.x;
              v53 = v51.pLadder->m_vTop.z - ((v51.pLadder->m_vNormal.z + v51.pLadder->m_vNormal.z) * 16.0);
              v54 = v51.pLadder->m_vNormal.x;
              *(v11 + 5) = v51.pLadder->m_vTop.y - ((v51.pLadder->m_vNormal.y + v51.pLadder->m_vNormal.y) * 16.0);
              *(v11 + 10) = 6;
              *(v11 + 6) = v53;
              *(v11 + 4) = v52 - ((v54 + v54) * 16.0);
              m_pData = m_pLaddersAndElevators->m_ladders[1].m_pData;
              if ( m_pData != 0 )
                goto LABEL_37;
              goto LABEL_47;
            }
          }
          goto LABEL_36;
        }
LABEL_35:
        j = 0;
        m_pData = 0;
        goto LABEL_36;
      }
    }
    else if ( v13 == 7 )
    {
      y = v12->m_vCenter.y;
      z = v12->m_vCenter.z;
      *(v11 + 4) = LODWORD(v12->m_vCenter.x);
      *(v11 + 5) = y;
      *(v11 + 6) = z;
    }
LABEL_11:
    m_nSegmentCount = v6->m_nSegmentCount;
LABEL_12:
    if ( m_nSegmentCount <= ++v3 )
      return 1;
  }
  v45 = v10->m_pLaddersAndElevators;
  if ( v45 == 0 )
    goto LABEL_11;
  m_pData = v45->m_ladders[0].m_pData;
  if ( v45->m_ladders[0].m_pData == 0 )
    goto LABEL_35;
  v57 = 0;
  for ( j = 0; j < m_pData->m_Size; j = v57 )
  {
    v58 = m_pData->m_Elements[v57];
    if ( v58.pLadder->m_pTopForwardArea != v12 && v58.pLadder->m_pTopLeftArea != v12 )
    {
      ++v57;
      if ( v58.pLadder->m_pTopRightArea != v12 )
        continue;
    }
    *(v11 + 4) = v58;
    v59 = ((v58.pLadder->m_vNormal.y + v58.pLadder->m_vNormal.y) * 16.0) + v58.pLadder->m_vBottom.y;
    v60 = ((v58.pLadder->m_vNormal.z + v58.pLadder->m_vNormal.z) * 16.0) + v58.pLadder->m_vBottom.z;
    v61 = ((v58.pLadder->m_vNormal.x + v58.pLadder->m_vNormal.x) * 16.0) + v58.pLadder->m_vBottom.x;
    *(v11 + 10) = 5;
    *(v11 + 5) = v59;
    *(v11 + 6) = v60;
    *(v11 + 4) = v61;
    m_pData = v45->m_ladders[0].m_pData;
    break;
  }
LABEL_36:
  if ( m_pData != 0 )
LABEL_37:
    m_Size = m_pData->m_Size;
  else
LABEL_47:
    m_Size = 0;
  if ( j != m_Size )
    goto LABEL_11;
  return 0;
}


// CPath::ComputeSpecialSegments  (line 1030, @0x0000000002ee2390, libserver.so)  // inlines: GetArea, GetBool, GetInt, GetNavHull, GetNavHullRadiusOrDefault, IsLengthGreaterThan, LengthSqr, NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=, operator[]
// calls: CNavPoly::GetClosestPointOnPoly, CNavArea::IsLineToPointWithinPortal, NDebugOverlay::Cross3D, VectorNormalize, CPathData::InsertSegment, NDebugOverlay::Line
// callers: CPath::FinishAndPostProcessPath
void __fastcall CPath::ComputeSpecialSegments(CPath *const this)
{
  const CPathCostBase *m_pPathCost; // rax
  float m_flHullRadius; // xmm0_4
  int i; // r13d
  int v5; // r12d
  int *p_m_nAreaIndex; // r15
  CPathSegment *v7; // rax
  CNavArea **m_pMemory; // rdx
  bool v9; // zf
  const CNavArea *v10; // r11
  CPathSegment *v11; // rax
  const CPathSegment *v12; // r10
  CPathSegment::SegmentType type; // eax
  int v14; // edx
  int v15; // eax
  bool IsLineToPointWithinPortal; // al
  int (***v17)(...); // rax
  int (**v18)(...); // rdx
  vec_t v19; // xmm0_4
  const CNavLadder *v20; // rdx
  int (**v21)(...); // rdx
  int (**v22)(...); // rdx
  int (**v23)(...); // rax
  float v24; // xmm0_4
  char *v25; // rax
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  vec_t v29; // xmm6_4
  vec_t v30; // xmm8_4
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rax
  const Vector *p_vPos; // r15
  vec_t v35; // xmm0_4
  int (***v36)(...); // rax
  int (**v37)(...); // rdx
  const CNavLadder *v38; // rdx
  int (**v39)(...); // rdx
  int (**v40)(...); // rdx
  int (**v41)(...); // rax
  float flHalfWidthEffective; // [rsp+10h] [rbp-120h]
  float flStepHeight; // [rsp+14h] [rbp-11Ch]
  const CPathSegment *pSegFrom; // [rsp+20h] [rbp-110h]
  const CNavArea *pAreaTo; // [rsp+28h] [rbp-108h]
  bool bFixupPortalViolations; // [rsp+32h] [rbp-FEh]
  bool bFixupGapSegments; // [rsp+33h] [rbp-FDh]
  int m_nValue; // [rsp+34h] [rbp-FCh]
  vec_t *v49; // [rsp+40h] [rbp-F0h]
  const CPathSegment *v50; // [rsp+40h] [rbp-F0h]
  const CNavArea *pAreaFrom; // [rsp+48h] [rbp-E8h]
  Vector vCloseTo; // [rsp+50h] [rbp-E0h] BYREF
  Vector vCloseFrom; // [rsp+60h] [rbp-D0h] BYREF
  Vector vLandingPos; // [rsp+70h] [rbp-C0h] BYREF
  Vector vLaunchPos_0; // [rsp+80h] [rbp-B0h]
  Vector vForward; // [rsp+90h] [rbp-A0h] BYREF
  CPathSegment newSegment; // [rsp+A0h] [rbp-90h] BYREF
  Vector ClosestPointOnPoly; // 0:kr14_12.12
  Vector v59; // 0:kr34_12.12
  Vector v60; // 0:kr40_12.12
  Vector v61; // 0:kr54_12.12

  bFixupGapSegments = nav_path_fixup_gap_segments.m_pParent->m_Value.m_nValue != 0;
  m_nValue = nav_path_fixup_climb_up_segments.m_pParent->m_Value.m_nValue;
  m_pPathCost = this->m_PathCaps.m_pPathCost;
  bFixupPortalViolations = nav_path_fixup_portal_violation_segments.m_pParent->m_Value.m_nValue != 0;
  if ( m_pPathCost != 0 )
  {
    m_flHullRadius = m_pPathCost->m_navHull.m_flHullRadius;
    if ( m_flHullRadius < 0.0 )
      flHalfWidthEffective = 21.0;
    else
      flHalfWidthEffective = m_flHullRadius + 5.0;
  }
  else
  {
    flHalfWidthEffective = 21.0;
  }
  flStepHeight = this->m_PathCaps.m_flMoverStepHeight;
  if ( this->m_nSegmentCount > 1 )
  {
    for ( i = 0; ; i = v5 )
    {
      v5 = i + 1;
      p_m_nAreaIndex = &this->m_path[i].m_nAreaIndex;
      v7 = &this->m_path[i];
      m_pMemory = TheNavMesh->m_NavAreas.m_Memory.m_pMemory;
      pAreaFrom = m_pMemory[this->m_path[i].m_nAreaIndex];
      if ( (v7->how - 5) > 2
        && (i == 0 || v7->how != NavTraverseType::GO_SAME_AREA)
        && p_m_nAreaIndex[2] <= 3
        && p_m_nAreaIndex[10] == 0 )
      {
        break;
      }
LABEL_12:
      if ( this->m_nSegmentCount - 1 <= v5 )
        return;
    }
    pAreaTo = m_pMemory[p_m_nAreaIndex[22]];
    vCloseTo = CNavPoly::GetClosestPointOnPoly(pAreaTo, &this->m_path[i].vPos);
    ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(pAreaFrom, &vCloseTo);
    v9 = !this->m_PathCaps.m_bIsDebugging;
    vCloseFrom = ClosestPointOnPoly;
    v10 = pAreaTo;
    v11 = &this->m_path[i];
    v12 = (p_m_nAreaIndex + 2);
    if ( !v9 )
    {
      NDebugOverlay::Line(&vCloseFrom, &vCloseTo, 255, 0, 255, 1, 5.0);
      v10 = pAreaTo;
      v12 = (p_m_nAreaIndex + 2);
      v11 = &this->m_path[i];
    }
    if ( i != 0
      && bFixupGapSegments
      && (((vCloseFrom.x - vCloseTo.x) * (vCloseFrom.x - vCloseTo.x))
        + ((vCloseFrom.y - vCloseTo.y) * (vCloseFrom.y - vCloseTo.y))) > ((CNavGeneratorBase::sm_flGenerationStepSize
                                                                         * 1.9)
                                                                        * (CNavGeneratorBase::sm_flGenerationStepSize
                                                                         * 1.9))
      && (v24 = fabs(vCloseTo.z - vCloseFrom.z),
          (((vCloseTo.x - vCloseFrom.x) * (vCloseTo.x - vCloseFrom.x))
         + ((vCloseTo.y - vCloseFrom.y) * (vCloseTo.y - vCloseFrom.y))) > ((v24 * 0.5) * (v24 * 0.5))) )
    {
      pSegFrom = v12;
      vLandingPos = CNavPoly::GetClosestPointOnPoly(v10, &v12->vPos);
      v59 = CNavPoly::GetClosestPointOnPoly(pAreaFrom, &vLandingPos);
      vLaunchPos_0 = v59;
      vForward.z = vLandingPos.z - v59.z;
      vForward.x = vLandingPos.x - v59.x;
      vForward.y = vLandingPos.y - v59.y;
      VectorNormalize(&vForward);
      v25 = this + 88 * i;
      v26 = vForward.x * flHalfWidthEffective;
      v27 = vForward.y * flHalfWidthEffective;
      v28 = flHalfWidthEffective * vForward.z;
      v29 = vLandingPos.z + (flHalfWidthEffective * vForward.z);
      v30 = vLandingPos.x + (vForward.x * flHalfWidthEffective);
      pSegFrom->vPos.y = vLandingPos.y + (vForward.y * flHalfWidthEffective);
      pSegFrom->vPos.z = v29;
      pSegFrom->vPos.x = v30;
      v31 = *(v25 + 1);
      newSegment.vPos.x = v59.x - v26;
      *&newSegment.how = v31;
      *&newSegment.vPos.z = *(v25 + 3);
      newSegment.pLadder = *(v25 + 4);
      *&newSegment.type = *(v25 + 5);
      *&newSegment.vForward.y = *(v25 + 6);
      *&newSegment.flLength = *(v25 + 7);
      *&newSegment.flCurvature = *(v25 + 8);
      *&newSegment.vPortalCenter.y = *(v25 + 9);
      v32 = *(v25 + 10);
      v33 = *(v25 + 11);
      *&newSegment.flPortalHalfWidth = v32;
      *&newSegment.m_nAreaIndex = v33;
      newSegment.vPos.y = v59.y - v27;
      newSegment.type = CPathSegment::SegmentType::PATH_SEG_JUMP_OVER_GAP;
      newSegment.vPos.z = v59.z - v28;
    }
    else if ( m_nValue != 0 && (vCloseTo.z - vCloseFrom.z) > flStepHeight )
    {
      p_vPos = &v12->vPos;
      v50 = v12;
      v60 = CNavPoly::GetClosestPointOnPoly(v10, &v12->vPos);
      *&newSegment.how = v60;
      v50->vPos.x = v60.x;
      v35 = *&newSegment.inEdge;
      v50->vPos.z = v60.z;
      v50->vPos.y = v35;
      v61 = CNavPoly::GetClosestPointOnPoly(pAreaFrom, p_vPos);
      v9 = !this->m_PathCaps.m_bIsDebugging;
      vForward = v61;
      if ( !v9 )
        NDebugOverlay::Cross3D(&vForward, 15.0, 255, 100, 255, 1, 3.0);
      v36 = &this->_vptr_CPathData + 11 * i;
      newSegment.vPos.x = vForward.x;
      v37 = v36[1];
      newSegment.vPos.y = vForward.y;
      *&newSegment.how = v37;
      *&newSegment.vPos.z = v36[3];
      v38 = v36[4];
      newSegment.vPos.z = vForward.z;
      newSegment.pLadder = v38;
      *&newSegment.type = v36[5];
      v39 = v36[6];
      newSegment.type = CPathSegment::SegmentType::PATH_SEG_CLIMB_UP;
      *&newSegment.vForward.y = v39;
      *&newSegment.flLength = v36[7];
      *&newSegment.flCurvature = v36[8];
      *&newSegment.vPortalCenter.y = v36[9];
      v40 = v36[10];
      v41 = v36[11];
      *&newSegment.flPortalHalfWidth = v40;
      *&newSegment.m_nAreaIndex = v41;
    }
    else
    {
      if ( i == 0 || !bFixupPortalViolations )
      {
        v14 = i + 1;
        goto LABEL_33;
      }
      type = v11->type;
      if ( type != CPathSegment::SegmentType::NUM_SEGMENT_TYPES )
      {
        v14 = i + 1;
        if ( type != CPathSegment::SegmentType::PATH_SEG_ON_GROUND )
          goto LABEL_33;
      }
      v15 = p_m_nAreaIndex[2];
      v14 = i + 1;
      if ( v15 > 3 )
        goto LABEL_33;
      v49 = v12;
      IsLineToPointWithinPortal = CNavArea::IsLineToPointWithinPortal(
                                    pAreaFrom,
                                    v10,
                                    v15,
                                    v12->inEdge,
                                    &this->m_path[i].vPos,
                                    &v12->vPos,
                                    flHalfWidthEffective);
      v14 = i + 1;
      if ( IsLineToPointWithinPortal )
        goto LABEL_33;
      v9 = !this->m_PathCaps.m_bIsDebugging;
      newSegment.vPos.x = v49[2];
      v17 = &this->_vptr_CPathData + 11 * i;
      v18 = v17[1];
      newSegment.vPos.y = v49[3];
      v19 = v49[4];
      *&newSegment.how = v18;
      *&newSegment.vPos.z = v17[3];
      v20 = v17[4];
      newSegment.vPos.z = v19;
      newSegment.pLadder = v20;
      *&newSegment.type = v17[5];
      v21 = v17[6];
      newSegment.type = CPathSegment::SegmentType::PATH_SEG_ON_GROUND;
      *&newSegment.vForward.y = v21;
      *&newSegment.flLength = v17[7];
      *&newSegment.flCurvature = v17[8];
      *&newSegment.vPortalCenter.y = v17[9];
      v22 = v17[10];
      v23 = v17[11];
      *&newSegment.flPortalHalfWidth = v22;
      *&newSegment.m_nAreaIndex = v23;
      if ( !v9 )
        NDebugOverlay::Cross3D(&newSegment.vPos, 15.0, 255, 0, 255, 1, 3.0);
    }
    CPathData::InsertSegment(this, &newSegment, v5);
    v14 = i + 2;
LABEL_33:
    v5 = v14;
    goto LABEL_12;
  }
}


// CPath::ComputePathTrivialCore  (line 1162, @0x0000000002ee2b90, libserver.so)  // inlines: GetZ, NormalizeInPlace, SetArea, SetPrevArea, VectorSubtract, operator-, operator=
// calls: CNavMesh::GetNearestNavArea, CNavPoly::GetZ, VectorNormalize
__int64 __fastcall CPath::ComputePathTrivialCore(
        CPath *const this,
        const Vector *const vStartPos,
        const Vector *const vGoalPos,
        __int64 a4,
        float a5)
{
  CNavArea *NearestNavArea; // r14
  CNavArea *v9; // r15
  float v10; // xmm2_4
  vec_t v11; // xmm0_4
  float v12; // xmm2_4
  vec_t v13; // xmm0_4
  float y; // xmm1_4
  float x; // xmm2_4
  vec_t v16; // xmm1_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm0_4
  float v19; // xmm0_4
  vec_t v20; // xmm1_4
  int (**vptr_CPathData)(...); // rax
  vec_t v22; // xmm1_4
  vec_t z; // xmm1_4
  NavHull_t navHulla; // [rsp+0h] [rbp-40h]
  NavHull_t v27; // 0:kr00_12.12

  *&navHulla.m_hullCategory = a4;
  navHulla.m_flHullHeight = a5;
  this->m_PathResultStatus = CPathData::PathResult_t::NO_PATH;
  this->m_nSegmentCount = 0;
  *&v27.m_hullCategory = a4;
  v27.m_flHullHeight = a5;
  NearestNavArea = CNavMesh::GetNearestNavArea(TheNavMesh, vStartPos, v27, 4, 10000.0);
  if ( NearestNavArea != 0 && (v9 = CNavMesh::GetNearestNavArea(TheNavMesh, vGoalPos, navHulla, 4, 10000.0)) != 0 )
  {
    this->m_nSegmentCount = 2;
    this->m_path[0].m_nPrevAreaIndex = -1;
    this->m_path[0].m_nAreaIndex = NearestNavArea->m_nIndex;
    this->m_path[0].vPos.x = vStartPos->x;
    this->m_path[0].vPos.y = vStartPos->y;
    v11 = CNavPoly::GetZ(NearestNavArea, vStartPos->y, v10);
    this->m_path[0].pLadder = 0;
    this->m_path[0].vPos.z = v11;
    this->m_path[0].how = NavTraverseType::NUM_TRAVERSE_TYPES;
    this->m_path[0].inEdge = -1;
    this->m_path[0].type = CPathSegment::SegmentType::PATH_SEG_ON_GROUND;
    this->m_path[1].m_nPrevAreaIndex = NearestNavArea->m_nIndex;
    this->m_path[1].m_nAreaIndex = v9->m_nIndex;
    this->m_path[1].vPos.x = vGoalPos->x;
    this->m_path[1].vPos.y = vGoalPos->y;
    v13 = CNavPoly::GetZ(v9, vGoalPos->y, v12);
    y = this->m_path[1].vPos.y;
    x = this->m_path[1].vPos.x;
    this->m_path[1].vPos.z = v13;
    v16 = y - this->m_path[0].vPos.y;
    this->m_path[1].pLadder = 0;
    v17 = x - this->m_path[0].vPos.x;
    this->m_path[1].how = NavTraverseType::NUM_TRAVERSE_TYPES;
    v18 = v13 - this->m_path[0].vPos.z;
    this->m_path[1].inEdge = -1;
    this->m_path[0].vForward.y = v16;
    this->m_path[0].vForward.x = v17;
    this->m_path[1].type = CPathSegment::SegmentType::PATH_SEG_ON_GROUND;
    this->m_path[0].vForward.z = v18;
    v19 = VectorNormalize(&this->m_path[0].vForward);
    v20 = this->m_path[0].vForward.x;
    vptr_CPathData = this->_vptr_CPathData;
    this->m_path[0].flLength = v19;
    this->m_path[1].vForward.x = v20;
    v22 = this->m_path[0].vForward.y;
    this->m_path[0].flDistanceFromStart = 0.0;
    this->m_path[1].vForward.y = v22;
    z = this->m_path[0].vForward.z;
    this->m_path[0].flCurvature = 0.0;
    this->m_path[1].vForward.z = z;
    this->m_path[1].flLength = 0.0;
    this->m_path[1].flDistanceFromStart = v19;
    this->m_path[1].flCurvature = 0.0;
    this->m_PathResultStatus = CPathData::PathResult_t::PATH_COMPLETE_TO_GOAL;
    vptr_CPathData[3](this);
    return 1;
  }
  else
  {
    (*(this->_vptr_CPathData + 3))(this);
    return 0;
  }
}


// CPath::GetNearestNavAreaAndGroundHeight  (line 1223, @0x0000000002ee2dc0, libserver.so)  // inlines: GetZ
// calls: CNavMesh::GetNearestNavArea, CNavPoly::GetZ, CNavMesh::GetGroundHeight
// callers: CPath::GetStartAreaAndPos, CPath::ComputePathPosToPosCore, CPath::ComputePathToPosCore, CPath::ComputePathMultiGoalCore
CNavArea *__fastcall CPath::GetNearestNavAreaAndGroundHeight(
        const Vector *const vPos,
        __int64 a2,
        float *pGroundHeight,
        float a4)
{
  CNavArea *NearestNavArea; // rax
  float v7; // xmm2_4
  CNavArea *v8; // rbx
  NavHull_t v11; // 0:kr00_12.12

  *&v11.m_hullCategory = a2;
  v11.m_flHullHeight = a4;
  NearestNavArea = CNavMesh::GetNearestNavArea(TheNavMesh, vPos, v11, 12, 200.0);
  v8 = NearestNavArea;
  if ( pGroundHeight == 0 )
    return v8;
  if ( NearestNavArea != 0 )
  {
    *pGroundHeight = CNavPoly::GetZ(NearestNavArea, vPos->y, v7);
    return v8;
  }
  CNavMesh::GetGroundHeight(TheNavMesh, vPos, pGroundHeight, 0);
  return v8;
}


// CPath::GetStartAreaAndPos  (line 1254, @0x0000000002ee2e60, libserver.so)  // inlines: GetNavHull, operator=
// calls: CBaseEntity::GetAbsOrigin, CPath::GetNearestNavAreaAndGroundHeight, NavHull_t::NavHullAny
// callers: CPath::GetStartAreaAndPos, CPath::ComputePathWithOpenGoalCore, CPath::ComputePathToPosCore, CPath::ComputePathToEntityCore, CPath::ComputePathInDirectionCore, CPath::ComputePathMultiGoalCore
void __fastcall CPath::GetStartAreaAndPos(
        CPath *const this,
        const PathCapabilities_t *const rPathCaps,
        CNavArea **ppStartAreaOut,
        Vector *pStartPosOut)
{
  int (**vptr_CPathData)(...); // rdi
  const CBaseCombatCharacter *v8; // rax
  float *v9; // rax
  float m_flHullHeight; // xmm0_4
  float m_flHullRadius; // xmm1_4
  uint32 m_hullCategory; // eax
  NavHull_t v13; // 0:kr00_12.12

  vptr_CPathData = this->_vptr_CPathData;
  if ( vptr_CPathData == 0 )
  {
    rPathCaps->m_pPathingEntity = 0;
    *ppStartAreaOut = vec3_invalid;
    vptr_CPathData = this->_vptr_CPathData;
  }
  *ppStartAreaOut = *CBaseEntity::GetAbsOrigin(vptr_CPathData);
  v8 = (*(*this->_vptr_CPathData + 361))(this->_vptr_CPathData);
  if ( v8 != 0 )
  {
    rPathCaps->m_pPathingEntity = v8;
  }
  else
  {
    v9 = *&this->m_path[0].vPos.x;
    if ( v9 != 0 )
    {
      m_flHullHeight = v9[4];
      m_flHullRadius = v9[3];
      m_hullCategory = *(v9 + 2);
    }
    else
    {
      v13 = NavHull_t::NavHullAny();
      m_hullCategory = v13.m_hullCategory;
      m_flHullHeight = v13.m_flHullHeight;
      m_flHullRadius = v13.m_flHullRadius;
    }
    rPathCaps->m_pPathingEntity = CPath::GetNearestNavAreaAndGroundHeight(
                                    ppStartAreaOut,
                                    __SPAIR64__(LODWORD(m_flHullRadius), m_hullCategory),
                                    0,
                                    m_flHullHeight);
  }
}


// CPath::GetStartAreaAndPos  (line 1254, @0x0000000002ee2f40, libserver.so)
// calls: CPath::GetStartAreaAndPos
void __fastcall CPath::GetStartAreaAndPos(
        CPath *const this,
        const PathCapabilities_t *const rPathCaps,
        CNavArea **ppStartAreaOut,
        Vector *pStartPosOut)
{
  if ( ppStartAreaOut != 0 && pStartPosOut != 0 )
    CPath::GetStartAreaAndPos(rPathCaps, ppStartAreaOut, pStartPosOut, pStartPosOut);
}


// CPath::ComputePathToEntityCore  (line 1280, @0x0000000002ef70b0, libserver.so)  // inlines: GetStartAreaAndPos, GetTeamNumber
// calls: CBaseEntity::GetAbsOrigin, CPath::GetStartAreaAndPos, CPath::ComputePathCore, CPath::ComputePathToPosCore
// callers: CPathFollower::UpdatePathAndFollow, CPathFollowerDirect::UpdatePathAndFollow
bool __fastcall CPath::ComputePathToEntityCore(
        CPath *const this,
        const PathCapabilities_t *const rPathCaps,
        const CBaseEntity *const rTarget,
        const CPathCostBase *const rCostFunc)
{
  const CBaseCombatCharacter *m_pPathingEntity; // r13
  const CPathCostBase *v8; // r15
  __int64 v9; // rax
  const CNavArea *v10; // rbx
  CNavArea *pStartArea; // [rsp+28h] [rbp-58h] BYREF
  Vector vTargetPos; // [rsp+30h] [rbp-50h] BYREF
  Vector vStartPos; // [rsp+40h] [rbp-40h] BYREF

  m_pPathingEntity = rPathCaps->m_pPathingEntity;
  if ( rPathCaps->m_pPathingEntity == 0 )
  {
LABEL_6:
    (*(this->_vptr_CPathData + 2))(this, rPathCaps, rTarget, rCostFunc);
    return 0;
  }
  v8 = rCostFunc;
  vTargetPos = *CBaseEntity::GetAbsOrigin(rTarget);
  v9 = (*(rTarget->_vptr_IHandleEntity + 148))(rTarget);
  if ( v9 != 0 )
  {
    v10 = (*(*v9 + 2888LL))(v9);
    if ( v10 != 0 )
    {
      CPath::GetStartAreaAndPos(rPathCaps, &pStartArea, &vStartPos, rCostFunc);
      rCostFunc = pStartArea;
      if ( pStartArea != 0 )
        return CPath::ComputePathCore(
                 this,
                 rPathCaps,
                 &vStartPos,
                 pStartArea,
                 &vTargetPos,
                 v10,
                 m_pPathingEntity->m_iTeamNum.m_Value,
                 v8);
    }
    goto LABEL_6;
  }
  return CPath::ComputePathToPosCore(this, rPathCaps, &vTargetPos, v8);
}


// CPath::ComputePathPosToPosCore  (line 1320, @0x0000000002ef6f00, libserver.so)  // inlines: GetNavHull, GetTeamNumber
// calls: CPath::GetNearestNavAreaAndGroundHeight, CPath::ComputePathCore
// callers: CNavEditor::UpdateSelection
bool __fastcall CPath::ComputePathPosToPosCore(
        CPath *const this,
        const PathCapabilities_t *const rPathCaps,
        const Vector *const vStartPos,
        const Vector *const vGoalPos,
        const CPathCostBase *const rCostFunc)
{
  __int64 v9; // rax
  float m_flHullHeight; // xmm0_4
  CNavArea *NearestNavAreaAndGroundHeight; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r8
  int nTeamId; // edx
  const CNavArea *pGoalArea; // [rsp+18h] [rbp-58h]
  Vector vGoalOnGround; // [rsp+20h] [rbp-50h] BYREF
  NavHull_t navHull; // [rsp+30h] [rbp-40h]

  v9 = *&vGoalPos->x;
  m_flHullHeight = rCostFunc->m_navHull.m_flHullHeight;
  navHull.m_flHullRadius = rCostFunc->m_navHull.m_flHullRadius;
  *&vGoalOnGround.x = v9;
  *&v9 = vGoalPos->z;
  navHull.m_flHullHeight = m_flHullHeight;
  LODWORD(vGoalOnGround.z) = v9;
  navHull.m_hullCategory = rCostFunc->m_navHull.m_hullCategory;
  pGoalArea = CPath::GetNearestNavAreaAndGroundHeight(
                vGoalPos,
                *&navHull.m_hullCategory,
                &vGoalOnGround.z,
                m_flHullHeight);
  NearestNavAreaAndGroundHeight = CPath::GetNearestNavAreaAndGroundHeight(
                                    vStartPos,
                                    *&navHull.m_hullCategory,
                                    0,
                                    navHull.m_flHullHeight);
  if ( NearestNavAreaAndGroundHeight != 0 )
  {
    nTeamId = -1;
    if ( rPathCaps->m_pPathingEntity != 0 )
      nTeamId = rPathCaps->m_pPathingEntity->m_iTeamNum.m_Value;
    return CPath::ComputePathCore(
             this,
             rPathCaps,
             vStartPos,
             NearestNavAreaAndGroundHeight,
             &vGoalOnGround,
             pGoalArea,
             nTeamId,
             rCostFunc);
  }
  else
  {
    (*(this->_vptr_CPathData + 2))(this, v14, v12, v13, v15, pGoalArea);
    return 0;
  }
}


// CPath::ComputePathToPosCore  (line 1339, @0x0000000002ef6fd0, libserver.so)  // inlines: GetNavHull, GetStartAreaAndPos, GetTeamNumber
// calls: CPath::GetNearestNavAreaAndGroundHeight, CPath::GetStartAreaAndPos, CPath::ComputePathCore
// callers: CPath::ComputePathToEntityCore, CSimpleBotRoam::Update, CPathFollower::UpdatePathAndFollow, CPathFollowerDirect::UpdatePathAndFollow
bool __fastcall CPath::ComputePathToPosCore(
        CPath *const this,
        const PathCapabilities_t *const rPathCaps,
        const Vector *const vGoalPos,
        const CPathCostBase *const rCostFunc)
{
  __int64 v8; // rdx
  float m_flHullHeight; // xmm0_4
  CNavArea *NearestNavAreaAndGroundHeight; // rax
  __int64 v11; // rdx
  Vector *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  CNavArea *v15; // r9
  const CBaseCombatCharacter *m_pPathingEntity; // r15
  CNavArea *v18; // [rsp+10h] [rbp-80h]
  CNavArea *pStartArea; // [rsp+28h] [rbp-68h] BYREF
  Vector vGoalOnGround; // [rsp+30h] [rbp-60h] BYREF
  Vector vStartPos; // [rsp+40h] [rbp-50h] BYREF
  __int64 v22; // [rsp+50h] [rbp-40h]
  float v23; // [rsp+58h] [rbp-38h]

  v8 = *&vGoalPos->x;
  m_flHullHeight = rCostFunc->m_navHull.m_flHullHeight;
  HIDWORD(v22) = LODWORD(rCostFunc->m_navHull.m_flHullRadius);
  *&vGoalOnGround.x = v8;
  *&v8 = vGoalPos->z;
  v23 = m_flHullHeight;
  LODWORD(vGoalOnGround.z) = v8;
  LODWORD(v22) = rCostFunc->m_navHull.m_hullCategory;
  NearestNavAreaAndGroundHeight = CPath::GetNearestNavAreaAndGroundHeight(
                                    vGoalPos,
                                    v22,
                                    &vGoalOnGround.z,
                                    m_flHullHeight);
  m_pPathingEntity = rPathCaps->m_pPathingEntity;
  if ( rPathCaps->m_pPathingEntity != 0 )
  {
    v18 = NearestNavAreaAndGroundHeight;
    CPath::GetStartAreaAndPos(rPathCaps, &pStartArea, &vStartPos, v12);
    v12 = pStartArea;
    v15 = v18;
    if ( pStartArea != 0 )
      return CPath::ComputePathCore(
               this,
               rPathCaps,
               &vStartPos,
               pStartArea,
               &vGoalOnGround,
               v18,
               m_pPathingEntity->m_iTeamNum.m_Value,
               rCostFunc);
  }
  (*(this->_vptr_CPathData + 2))(this, v13, v11, v12, v14, v15);
  return 0;
}


// CPath::ComputePathCore  (line 1365, @0x0000000002ef6cf0, libserver.so)  // inlines: AssembleAndPostProcessPrecomputedPath, EndRecordLastFailedPath, GetInt
// calls: NavAreaBuildPath, CEntityInstance::GetEntityIndex, CPath::AssemblePrecomputedPath, CPath::FinishAndPostProcessPath, CPath::StartRecordLastFailedPath, CPathCostRecorder::StopRecord
// callers: CPath::ComputePathPosToPosCore, CPath::ComputePathToPosCore, CPath::ComputePathToEntityCore, CPath::ComputePathInDirectionCore
// globals: CPath::m_pLastFailedPath
bool __fastcall CPath::ComputePathCore(
        CPath *const this,
        const PathCapabilities_t *const rPathCaps,
        const Vector *const vStartPos,
        CNavArea *const rStartArea,
        const Vector *const vGoalPos,
        const CNavArea *pGoalArea,
        int nTeamId,
        const CPathCostBase *const rCostFunc)
{
  float m_flMaxPathLength; // xmm0_4
  const CUtlDelegate<bool(const CNavArea&)> *pClosestDelegate; // rax
  char v15; // r11
  CEntityIndex v16; // eax
  CNavArea *v17; // r15
  bool result; // al
  bool v19; // r14
  char v20; // [rsp+28h] [rbp-58h]
  int m_nValue; // [rsp+2Ch] [rbp-54h]
  char v22; // [rsp+2Ch] [rbp-54h]
  bool pGoalAreab; // [rsp+38h] [rbp-48h]
  CNavArea *pClosestArea; // [rsp+48h] [rbp-38h] BYREF

  this->m_PathCaps = *rPathCaps;
  (*(this->_vptr_CPathData + 2))(this);
  m_flMaxPathLength = this->m_flMaxPathLength;
  pClosestDelegate = this->m_pPartialPathDelegate;
  pClosestArea = 0;
  v15 = NavAreaBuildPath(
          rStartArea,
          pGoalArea,
          vStartPos,
          vGoalPos,
          rCostFunc,
          &pClosestArea,
          m_flMaxPathLength,
          pClosestDelegate,
          nTeamId,
          0,
          0);
  if ( v15 == 0 )
  {
    m_nValue = nav_path_record_enable.m_pParent->m_Value.m_nValue;
    if ( m_nValue < 0
      || rPathCaps->m_pPathingEntity != 0
      && (v20 = v15,
          v16.m_Data = CEntityInstance::GetEntityIndex(rPathCaps->m_pPathingEntity).m_Data,
          v15 = v20,
          m_nValue == v16.m_Data) )
    {
      v22 = v15;
      CPath::StartRecordLastFailedPath(
        this,
        rCostFunc,
        rPathCaps->m_pPathingEntity,
        rStartArea,
        vStartPos,
        pGoalArea,
        vGoalPos);
      v15 = v22;
      if ( CPath::m_pLastFailedPath != 0 )
      {
        NavAreaBuildPath(
          rStartArea,
          pGoalArea,
          vStartPos,
          vGoalPos,
          CPath::m_pLastFailedPath,
          &pClosestArea,
          this->m_flMaxPathLength,
          this->m_pPartialPathDelegate,
          nTeamId,
          0,
          0);
        v15 = v22;
        if ( CPath::m_pLastFailedPath != 0 )
        {
          CPathCostRecorder::StopRecord(CPath::m_pLastFailedPath);
          v15 = v22;
        }
      }
    }
  }
  v17 = pClosestArea;
  result = 0;
  if ( pClosestArea != 0 )
  {
    pGoalAreab = v15;
    v19 = CPath::AssemblePrecomputedPath(this, vStartPos, rStartArea, vGoalPos, pClosestArea, rCostFunc, v15, 0);
    if ( v19 || this->m_PathResultStatus == CPathData::PathResult_t::PATH_PARTIAL )
      CPath::FinishAndPostProcessPath(this, vStartPos, vGoalPos, v17, pGoalAreab, rCostFunc);
    return v19;
  }
  return result;
}


// CPath::ComputePathMultiGoalCore  (line 1411, @0x0000000002ef72d0, libserver.so)  // inlines: GetNavHull, GetStartAreaAndPos, GetTeamNumber, operator=
// calls: CPath::GetStartAreaAndPos, CPath::GetNearestNavAreaAndGroundHeight, NavAreaBuildPath, CPath::AssemblePrecomputedPath, CPath::FinishAndPostProcessPath
bool __fastcall CPath::ComputePathMultiGoalCore(
        CPath *const this,
        const PathCapabilities_t *const rPathCaps,
        const Vector *pGoalPositions,
        int nGoalPoints,
        const CPathCostBase *const rCostFunc)
{
  Vector *v10; // rcx
  const CPathCostBase *v11; // r14
  int v12; // r12d
  CPath *v13; // r15
  __int64 v14; // rax
  CNavArea *NearestNavAreaAndGroundHeight; // rax
  CNavArea *v16; // r13
  bool v17; // al
  bool v19; // [rsp+37h] [rbp-B9h]
  const CBaseCombatCharacter *pPathingEntity; // [rsp+40h] [rbp-B0h]
  float flMaxPathLengthRemaining; // [rsp+50h] [rbp-A0h]
  CNavArea *pStartArea; // [rsp+60h] [rbp-90h]
  bool vPos; // [rsp+68h] [rbp-88h]
  CNavArea *pPrevArea; // [rsp+70h] [rbp-80h] BYREF
  CNavArea *pClosestAreaThisSegment; // [rsp+78h] [rbp-78h] BYREF
  Vector vStartPos; // [rsp+80h] [rbp-70h] BYREF
  Vector vPrevPos; // [rsp+90h] [rbp-60h] BYREF
  Vector vGoalOnGround; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-40h]
  float m_flHullHeight; // [rsp+B8h] [rbp-38h]

  this->m_PathCaps = *rPathCaps;
  (*(this->_vptr_CPathData + 2))(this);
  v19 = nGoalPoints <= 0 || pGoalPositions == 0;
  if ( v19 )
    return 0;
  pPathingEntity = rPathCaps->m_pPathingEntity;
  if ( rPathCaps->m_pPathingEntity == 0 )
    return 0;
  flMaxPathLengthRemaining = this->m_flMaxPathLength;
  CPath::GetStartAreaAndPos(rPathCaps, &pPrevArea, &vStartPos, v10);
  pStartArea = pPrevArea;
  if ( pPrevArea == 0 )
    return 0;
  v11 = rCostFunc;
  v12 = 0;
  v13 = this;
  vPrevPos = vStartPos;
  while ( 1 )
  {
    v14 = *&pGoalPositions->x;
    HIDWORD(v30) = LODWORD(v11->m_navHull.m_flHullRadius);
    *&vGoalOnGround.x = v14;
    *&v14 = pGoalPositions->z;
    m_flHullHeight = v11->m_navHull.m_flHullHeight;
    LODWORD(vGoalOnGround.z) = v14;
    LODWORD(v30) = v11->m_navHull.m_hullCategory;
    NearestNavAreaAndGroundHeight = CPath::GetNearestNavAreaAndGroundHeight(
                                      &vGoalOnGround,
                                      v30,
                                      &vGoalOnGround.z,
                                      m_flHullHeight);
    v16 = NearestNavAreaAndGroundHeight;
    if ( NearestNavAreaAndGroundHeight == 0 )
      break;
    pClosestAreaThisSegment = 0;
    if ( NavAreaBuildPath(
           pStartArea,
           NearestNavAreaAndGroundHeight,
           &vPrevPos,
           &vGoalOnGround,
           v11,
           &pClosestAreaThisSegment,
           flMaxPathLengthRemaining,
           v13->m_pPartialPathDelegate,
           pPathingEntity->m_iTeamNum.m_Value,
           0,
           0) == 0 )
      break;
    v17 = CPath::AssemblePrecomputedPath(v13, &vPrevPos, pStartArea, &vGoalOnGround, v16, v11, 1, v12 != 0);
    if ( !v17 )
      break;
    ++v12;
    ++pGoalPositions;
    vPrevPos = vGoalOnGround;
    if ( nGoalPoints <= v12 )
    {
      vPos = v17;
      CPath::FinishAndPostProcessPath(v13, &vStartPos, &vPrevPos, v16, 1, v11);
      return vPos;
    }
    pStartArea = v16;
  }
  return v19;
}


// CPath::ComputePathInDirectionCore  (line 1474, @0x0000000002ef71b0, libserver.so)  // inlines: GetStartAreaAndPos, GetTeamNumber, Normalized, VectorAdd, VectorMultiply, operator*, operator+
// calls: CPath::GetStartAreaAndPos, VectorNormalize, CPath::ComputePathCore
bool __fastcall CPath::ComputePathInDirectionCore(
        CPath *const this,
        const PathCapabilities_t *const rPathCaps,
        const Vector *const vGoalDir,
        const CPathCostBase *const rCostFunc)
{
  const CBaseCombatCharacter *m_pPathingEntity; // r13
  vec_t z; // eax
  CNavArea *pStartArea; // [rsp+28h] [rbp-58h] BYREF
  Vector vStartPos; // [rsp+30h] [rbp-50h] BYREF
  Vector vGoalPos; // [rsp+40h] [rbp-40h] BYREF

  m_pPathingEntity = rPathCaps->m_pPathingEntity;
  if ( rPathCaps->m_pPathingEntity != 0
    && (CPath::GetStartAreaAndPos(rPathCaps, &pStartArea, &vStartPos, rCostFunc), pStartArea != 0)
    && this->m_flMaxPathLength >= 0.0 )
  {
    z = vGoalDir->z;
    *&vGoalPos.x = *&vGoalDir->x;
    vGoalPos.z = z;
    VectorNormalize(&vGoalPos);
    vGoalPos.y = (vGoalPos.y * 56755.84) + vStartPos.y;
    vGoalPos.z = (vGoalPos.z * 56755.84) + vStartPos.z;
    vGoalPos.x = (56755.84 * vGoalPos.x) + vStartPos.x;
    return CPath::ComputePathCore(
             this,
             rPathCaps,
             &vStartPos,
             pStartArea,
             &vGoalPos,
             0,
             m_pPathingEntity->m_iTeamNum.m_Value,
             rCostFunc);
  }
  else
  {
    (*(this->_vptr_CPathData + 2))(this, rPathCaps, vGoalDir);
    return 0;
  }
}


// CPath::ComputePathWithOpenGoalCore  (line 1506, @0x0000000002ef3d50, libserver.so)  // inlines: AddArea, AddToClosedList, AddToTail, CNavHandle, CNavOpenListElement, Construct<CNavOpenListElement>, Cross, DrawPolyOutline, Element, FastRemove, Get, GetArea, GetCenter, GetElevatorEntity, GetFloat, GetOpenList, GetStartAreaAndPos, GrowMemory, HorzArrow, Insert, IsClosed, IsInCurrentNavMesh, IsLengthGreaterThan, LengthSqr, Line, Mark, NavPathUpdateAreaParentAndCostAndOpenList, NavPathUpdateStartAreaCostAndAddToOpenList, PercolateDown, PercolateUp, PopElement, RemoveAtHead, RevaluateElement, SetCostSoFar, SetIndex, SetOrigin, SetPathLengthSoFar, SetPathParentArea, SetPathfindingPos, SetToIdentity, SetTotalCost, Sphere, StartAreaCost, Swap, Text, TraverseCost, UpdateAreaCost, VectorAdd, VectorDivide, VectorSubtract, VertexColor_t, memcpy, operator(), operator+, operator-, operator/, operator=, operator[]
// calls: CPath::GetStartAreaAndPos, CNavArea::ClearSearchLists, CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement, int>, CNavOpenList::SetHeapEntryIndex_t>::Insert, CNavAdjacencyList::CollectAdjacentAreas, V_sprintf_safe<256ul>, CNavArea::GetOpenListCost, CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement, int>, CNavOpenList::SetHeapEntryIndex_t>::PercolateDown, CUtlPriorityQueue<CNavOpenListElement, CDefUtlPriorityQueueLessFunc<CNavOpenListElement>, CUtlMemory<CNavOpenListElement, int>, CNavOpenList::SetHeapEntryIndex_t>::PercolateUp, Warning, CPath::AssemblePrecomputedPath, SetIdentityMatrix, CUtlMemory<CNavOpenListElement, int>::Grow (14 total)
// strings: "%0.2f", "ComputePathWithOpenGoal - Doesn't support m_bIncludeGoalIfPathFails.  Forcing off.\n"
// write access to const memory has been detected, the output may be wrong!
bool __fastcall CPath::ComputePathWithOpenGoalCore(
        CPath *const this,
        const PathCapabilities_t *const rPathCaps,
        const CPathCostBase *const rCostFunc,
        const PathOpenGoalSelectorFunc *const rGoalSelectorFunc)
{
  Vector *v5; // rcx
  float y; // xmm1_4
  float z; // xmm0_4
  void (__fastcall *v8)(ISceneViewDebugOverlays *, matrix3x4_t *, CNavAdjacencyList *, PathCostResult_t *, __int64, double); // rax
  CNavOpenList *v9; // r14
  CNavArea *v10; // rax
  CNavOpenList *v11; // r15
  vec_t x; // xmm2_4
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  char v15; // dl
  CNavArea *m_rNavMesh; // rax
  int m_Size; // r14d
  CNavOpenListElement *m_pMemory; // rax
  CNavOpenListElement *v19; // rax
  CNavOpenListElement *v20; // rdx
  CNavArea *m_pData; // rax
  CNavOpenListElement *v22; // rdx
  int v23; // r13d
  int v24; // r12d
  int v25; // ebx
  CNavOpenListElement *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rsi
  CNavOpenListElement *v29; // rax
  CNavArea *v30; // r9
  const CNavMesh *m_pAssociatedNavMesh; // rdi
  float m_flTotalCost; // xmm2_4
  float v33; // xmm1_4
  float m_flPathLengthSoFar; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rsi
  CNavMesh *v38; // rax
  CNavArea *v39; // rcx
  CNavOpenListElement *v40; // rdx
  int v41; // r14d
  bool v42; // zf
  CNavArea *v43; // rax
  int v44; // r15d
  NavAdjInfo_t *m_AdjAreas; // r12
  float m_flMaxPathLength; // xmm1_4
  int how; // edx
  float v48; // xmm2_4
  float v49; // xmm1_4
  void (__fastcall *v50)(ISceneViewDebugOverlays *, matrix3x4_t *, Vector *, _BYTE *, __int64); // r11
  void (__fastcall *v51)(ISceneViewDebugOverlays *, Vector *, Vector *, matrix3x4_t *, __int64, float, double); // r11
  float v52; // xmm1_4
  float v53; // xmm0_4
  void (__fastcall *v54)(ISceneViewDebugOverlays *, Vector *, matrix3x4_t *, _BYTE *, __int64, double); // rax
  float v55; // xmm0_4
  float v56; // xmm2_4
  void (__fastcall *v57)(ISceneViewDebugOverlays *, matrix3x4_t *, _QWORD, char *, _BYTE *, double, double); // rax
  int m_nOpenListHeapIndex; // r13d
  vec_t v59; // xmm0_4
  vec_t v60; // xmm2_4
  void (__fastcall *v61)(ISceneViewDebugOverlays *, matrix3x4_t *, _BYTE *, __int64, float, double); // rax
  char v62; // cl
  NavEdgeIndex nInEdge; // dl
  char v64; // al
  const CNavMesh *v65; // r14
  int v66; // edx
  int v67; // eax
  __int64 v68; // r13
  __int64 v69; // rcx
  CNavOpenListElement *v70; // rax
  CNavOpenListElement *v71; // rax
  CNavOpenListElement *v72; // rcx
  CNavArea *v73; // rax
  CNavArea *v74; // rax
  CNavArea *pArea; // rbx
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  __int64 v77; // rax
  vec_t v78; // xmm2_4
  vec_t v79; // xmm1_4
  int v81; // ebx
  __int64 v82; // r13
  int v83; // r15d
  __int64 v84; // r14
  CNavOpenListElement *v85; // rsi
  CNavOpenListElement *v86; // rax
  CNavArea *v87; // r9
  const CNavMesh *v88; // rdi
  float v89; // xmm2_4
  float v90; // xmm1_4
  float v91; // xmm0_4
  CNavArea *v92; // rsi
  CNavOpenListElement *v93; // rax
  CNavOpenListElement *v94; // r14
  CNavMesh *v95; // rax
  CNavOpenListElement *v96; // r13
  __m128i v97; // xmm7
  float v98; // xmm0_4
  float v99; // xmm1_4
  int v100; // r14d
  ISceneViewDebugOverlays *v101; // rbx
  CNavArea *pGoalArea; // [rsp+48h] [rbp-7F8h]
  CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t> *p_m_PriorityQueue; // [rsp+58h] [rbp-7E8h]
  CNavMesh *i; // [rsp+60h] [rbp-7E0h]
  int ia; // [rsp+60h] [rbp-7E0h]
  float ic; // [rsp+60h] [rbp-7E0h]
  int ib; // [rsp+60h] [rbp-7E0h]
  float m_flCostSoFar; // [rsp+68h] [rbp-7D8h]
  float m_fValue; // [rsp+6Ch] [rbp-7D4h]
  CNavArea *flNewTotalCost; // [rsp+70h] [rbp-7D0h]
  float flNewTotalCosta; // [rsp+70h] [rbp-7D0h]
  CNavArea *flNewTotalCostb; // [rsp+70h] [rbp-7D0h]
  float flNewTotalCostc; // [rsp+70h] [rbp-7D0h]
  int pCurArea; // [rsp+80h] [rbp-7C0h]
  CNavArea *pCurAreaa; // [rsp+80h] [rbp-7C0h]
  _BYTE v119[3]; // [rsp+90h] [rbp-7B0h] BYREF
  char v120; // [rsp+93h] [rbp-7ADh]
  CNavArea *pStartArea; // [rsp+98h] [rbp-7A8h] BYREF
  Vector vStartPos; // [rsp+A0h] [rbp-7A0h] BYREF
  PathCostResult_t costResult; // [rsp+B0h] [rbp-790h] BYREF
  matrix3x4_t vGoalPos; // [rsp+C0h] [rbp-780h] BYREF
  CNavAdjacencyList adjacencyList; // [rsp+F0h] [rbp-750h] BYREF
  char visBuffer[256]; // [rsp+700h] [rbp-140h] BYREF
  unsigned __int64 v127; // [rsp+808h] [rbp-38h]

  v127 = __readfsqword(0x28u);
  this->m_PathCaps = *rPathCaps;
  (*(this->_vptr_CPathData + 2))(this);
  if ( rPathCaps->m_pPathingEntity == 0 )
    return 0;
  CPath::GetStartAreaAndPos(rPathCaps, &pStartArea, &vStartPos, v5);
  if ( pStartArea == 0 )
    return 0;
  m_fValue = nav_path_debug_compute_with_open_goal.m_pParent->m_Value.m_fValue;
  if ( m_fValue > 0.0 )
  {
    y = pStartArea->m_vCenter.y;
    z = pStartArea->m_vCenter.z;
    vGoalPos.m_flMatVal[0][0] = pStartArea->m_vCenter.x;
    *&adjacencyList.m_nAdjAreaCount = vGoalPos.m_flMatVal[0][0] + 0.0;
    *&vGoalPos.m_flMatVal[0][1] = __PAIR64__(LODWORD(z), LODWORD(y));
    *(&adjacencyList.m_nAdjAreaCount + 1) = y + 0.0;
    *&adjacencyList.m_AdjAreas[0].pArea = z + 150.0;
    v8 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
    costResult.m_flSegmentCost = -2.3686737e38;
    v8(debugoverlay, &vGoalPos, &adjacencyList, &costResult, 1, m_fValue);
  }
  v9 = CNavArea::ms_pOpenList;
  CNavArea::ClearSearchLists();
  v10 = pStartArea;
  v11 = v9;
  v13 = pStartArea->m_vCenter.y;
  v14 = pStartArea->m_vCenter.z;
  costResult.m_vPos.x = pStartArea->m_vCenter.x;
  x = costResult.m_vPos.x;
  costResult.m_flSegmentCost = 0.0;
  costResult.m_vPos.y = v13;
  costResult.m_vPos.z = v14;
  v15 = *(pStartArea + 328);
  pStartArea->m_nPathInEdge = -1;
  v10->m_pPathParent = 0;
  v10->m_vPathfindingPos.x = x;
  v10->m_vPathfindingPos.y = v13;
  v10->m_vPathfindingPos.z = v14;
  *(v10 + 328) = v15 & 0xF0 | 4;
  *&adjacencyList.m_nAdjAreaCount = v10;
  m_rNavMesh = v10->m_rNavMesh;
  adjacencyList.m_AdjAreas[0].pLadder = 0;
  adjacencyList.m_AdjAreas[0].how = NavTraverseType::GO_NORTH;
  adjacencyList.m_AdjAreas[0].pArea = m_rNavMesh;
  CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t>::Insert(
    &v9->m_PriorityQueue,
    &adjacencyList);
  pGoalArea = 0;
LABEL_6:
  m_Size = v11->m_PriorityQueue.m_heap.m_Size;
  if ( v11->m_PriorityQueue.m_heap.m_Size <= 0 )
    goto LABEL_79;
  do
  {
    m_pMemory = v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
    m_flCostSoFar = m_pMemory->m_flCostSoFar;
    flNewTotalCost = m_pMemory->m_pNavArea.m_pData;
    i = m_pMemory->m_pNavArea.m_pAssociatedNavMesh;
    if ( TheNavMesh != i
      || flNewTotalCost == 0
      || (flNewTotalCost->m_nOpenListHeapIndex = -1,
          m_Size = v11->m_PriorityQueue.m_heap.m_Size,
          v11->m_PriorityQueue.m_heap.m_Size > 0) )
    {
      if ( --m_Size != 0 )
      {
        v19 = v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
        v20 = &v19[m_Size];
        v19->m_pNavArea.m_pData = v20->m_pNavArea.m_pData;
        v19->m_pNavArea.m_pAssociatedNavMesh = v20->m_pNavArea.m_pAssociatedNavMesh;
        *&v19->m_flTotalCost = *&v20->m_flTotalCost;
        *&v19->m_flPathLengthSoFar = *&v20->m_flPathLengthSoFar;
        m_Size = v11->m_PriorityQueue.m_heap.m_Size - 1;
      }
      v11->m_PriorityQueue.m_heap.m_Size = m_Size;
      if ( m_Size > 0 )
      {
        m_pData = 0;
        v22 = v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
        if ( v22->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
          m_pData = v22->m_pNavArea.m_pData;
        m_pData->m_nOpenListHeapIndex = 0;
        m_Size = v11->m_PriorityQueue.m_heap.m_Size;
      }
    }
    pCurArea = m_Size / 2;
    if ( m_Size / 2 > 0 )
    {
      v23 = 0;
      v24 = m_Size;
      while ( 1 )
      {
        v41 = 2 * v23 + 2;
        v25 = 2 * v23 + 1;
        if ( v24 <= v25 )
        {
          v25 = v23;
          if ( v24 <= v41 )
            goto LABEL_17;
        }
        else
        {
          if ( !v11->m_PriorityQueue.m_LessFunc(
                  &v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v23],
                  &v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v25]) )
            v25 = v23;
          if ( v24 <= v41 )
          {
LABEL_17:
            if ( v23 == v25 )
              break;
            goto LABEL_18;
          }
        }
        if ( v11->m_PriorityQueue.m_LessFunc(
               &v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v25],
               &v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v41]) )
        {
          v25 = 2 * v23 + 2;
        }
        if ( v23 == v25 )
          break;
LABEL_18:
        v26 = v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory;
        v27 = v25;
        v28 = v23;
        v29 = &v26[v28];
        v30 = v26[v28].m_pNavArea.m_pData;
        m_pAssociatedNavMesh = v26[v28].m_pNavArea.m_pAssociatedNavMesh;
        m_flTotalCost = v26[v28].m_flTotalCost;
        v29->m_pNavArea.m_pData = v26[v27].m_pNavArea.m_pData;
        v33 = v26[v28].m_flCostSoFar;
        m_flPathLengthSoFar = v26[v28].m_flPathLengthSoFar;
        v29->m_pNavArea.m_pAssociatedNavMesh = v26[v27].m_pNavArea.m_pAssociatedNavMesh;
        *&v29->m_flTotalCost = *&v26[v27].m_flTotalCost;
        v29->m_flPathLengthSoFar = v26[v27].m_flPathLengthSoFar;
        v35 = 0;
        v36 = &v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v27];
        *v36 = v30;
        *(v36 + 8) = m_pAssociatedNavMesh;
        *(v36 + 16) = m_flTotalCost;
        *(v36 + 20) = v33;
        *(v36 + 24) = m_flPathLengthSoFar;
        v37 = &v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v28];
        v38 = TheNavMesh;
        if ( *(v37 + 8) == TheNavMesh )
          v35 = *v37;
        *(v35 + 188) = v23;
        v39 = 0;
        v40 = &v11->m_PriorityQueue.m_heap.m_Memory.m_pMemory[v27];
        if ( v38 == v40->m_pNavArea.m_pAssociatedNavMesh )
          v39 = v40->m_pNavArea.m_pData;
        v39->m_nOpenListHeapIndex = v25;
        if ( pCurArea <= v25 )
          goto LABEL_32;
        v23 = v25;
      }
    }
    v38 = TheNavMesh;
LABEL_32:
    v42 = v38 == i;
    v43 = 0;
    if ( v42 )
      v43 = flNewTotalCost;
    pCurAreaa = v43;
    v43->m_nMarker = CNavArea::ms_nMasterMarker;
    CNavAdjacencyList::CollectAdjacentAreas(&adjacencyList, v43);
    if ( adjacencyList.m_nAdjAreaCount <= 0 )
      goto LABEL_6;
    p_m_PriorityQueue = &v11->m_PriorityQueue;
    v44 = 0;
    m_AdjAreas = adjacencyList.m_AdjAreas;
    do
    {
      pArea = m_AdjAreas->pArea;
      if ( m_AdjAreas->pArea->m_nMarker != CNavArea::ms_nMasterMarker || pArea->m_nOpenListHeapIndex >= 0 )
      {
        m_flMaxPathLength = this->m_flMaxPathLength;
        if ( m_flMaxPathLength <= 0.0
          || ((((pArea->m_vCenter.x - vStartPos.x) * (pArea->m_vCenter.x - vStartPos.x))
             + ((pArea->m_vCenter.y - vStartPos.y) * (pArea->m_vCenter.y - vStartPos.y)))
            + ((pArea->m_vCenter.z - vStartPos.z) * (pArea->m_vCenter.z - vStartPos.z))) <= (m_flMaxPathLength
                                                                                           * m_flMaxPathLength) )
        {
          if ( (*(rCostFunc->_vptr_CPathCostBase + 2))(rCostFunc, m_AdjAreas->pArea, pCurAreaa) == 0 )
          {
            costResult.m_flSegmentCost = -1.0;
            goto LABEL_61;
          }
          how = m_AdjAreas->how;
          if ( how <= 3 )
          {
            (*(rCostFunc->_vptr_CPathCostBase + 5))(
              rCostFunc,
              &costResult,
              pCurAreaa,
              m_AdjAreas->pArea,
              how,
              m_AdjAreas->nInEdge,
              0);
          }
          else if ( how > 6 )
          {
            m_pLaddersAndElevators = pCurAreaa->m_pLaddersAndElevators;
            if ( m_pLaddersAndElevators != 0 && how == 7 && m_pLaddersAndElevators->m_pElevatorEntity != 0 )
              (*(rCostFunc->_vptr_CPathCostBase + 7))(rCostFunc, &costResult, pCurAreaa, m_AdjAreas->pArea);
          }
          else if ( m_AdjAreas->pLadder != 0 )
          {
            (*(rCostFunc->_vptr_CPathCostBase + 6))(rCostFunc, &costResult, pCurAreaa, m_AdjAreas->pArea);
          }
          if ( costResult.m_flSegmentCost >= 0.0 )
          {
            flNewTotalCosta = costResult.m_flSegmentCost + m_flCostSoFar;
            if ( m_fValue > 0.0 )
            {
              v48 = pCurAreaa->m_vCenter.z;
              v49 = pCurAreaa->m_vCenter.x;
              vGoalPos.m_flMatVal[0][1] = pCurAreaa->m_vCenter.y;
              vGoalPos.m_flMatVal[0][2] = v48;
              vGoalPos.m_flMatVal[0][0] = v49;
              v50 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
              memset(v119, 100, sizeof(v119));
              v120 = -1;
              v50(debugoverlay, &vGoalPos, &pCurAreaa->m_vPathfindingPos, v119, 1);
              v51 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 34);
              vGoalPos.m_flMatVal[0][0] = -3.0358524e38;
              v51(debugoverlay, &pCurAreaa->m_vPathfindingPos, &costResult.m_vPos, &vGoalPos, 1, 3.0, m_fValue);
              v52 = pArea->m_vCenter.z;
              v53 = pArea->m_vCenter.x;
              vGoalPos.m_flMatVal[0][1] = pArea->m_vCenter.y;
              vGoalPos.m_flMatVal[0][2] = v52;
              vGoalPos.m_flMatVal[0][0] = v53;
              v54 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
              memset(v119, 100, sizeof(v119));
              v120 = -1;
              v54(debugoverlay, &costResult.m_vPos, &vGoalPos, v119, 1, m_fValue);
              V_sprintf_safe<256ul>(visBuffer, "%0.2f", flNewTotalCosta);
              v55 = (pCurAreaa->m_vPathfindingPos.z + costResult.m_vPos.z) * 0.5;
              v56 = (pCurAreaa->m_vPathfindingPos.x + costResult.m_vPos.x) * 0.5;
              vGoalPos.m_flMatVal[0][1] = (pCurAreaa->m_vPathfindingPos.y + costResult.m_vPos.y) * 0.5;
              vGoalPos.m_flMatVal[0][2] = v55;
              vGoalPos.m_flMatVal[0][0] = v56;
              v57 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 25);
              v119[0] = -1;
              v119[1] = -1;
              v119[2] = -1;
              v120 = -1;
              v57(debugoverlay, &vGoalPos, 0, visBuffer, v119, 0.0, m_fValue);
            }
            if ( pArea->m_nOpenListHeapIndex < 0 || flNewTotalCosta < CNavArea::GetOpenListCost(pArea) )
            {
              if ( m_fValue > 0.0 )
              {
                V_sprintf_safe<256ul>(visBuffer, "%0.3f", flNewTotalCosta);
                m_nOpenListHeapIndex = pArea->m_nOpenListHeapIndex;
                if ( m_nOpenListHeapIndex >= 0 )
                {
                  v59 = pArea->m_vCenter.x;
                  v60 = pArea->m_vCenter.y;
                  vGoalPos.m_flMatVal[0][2] = pArea->m_vCenter.z;
                  *&vGoalPos.m_flMatVal[0][0] = __PAIR64__(LODWORD(v60), LODWORD(v59));
                  v61 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 28);
                  v119[0] = -1;
                  v119[1] = 50;
                  v119[2] = -1;
                  v120 = -1;
                  v61(debugoverlay, &vGoalPos, v119, 1, 10.0, m_fValue);
                  m_nOpenListHeapIndex = pArea->m_nOpenListHeapIndex;
LABEL_51:
                  v62 = m_AdjAreas->how;
                  nInEdge = m_AdjAreas->nInEdge;
                  pArea->m_pPathParent = pCurAreaa;
                  v64 = *(pArea + 328);
                  pArea->m_nPathInEdge = nInEdge;
                  *(pArea + 328) = v62 & 0xF | v64 & 0xF0;
                  pArea->m_vPathfindingPos = costResult.m_vPos;
                  if ( m_nOpenListHeapIndex >= 0 )
                  {
                    v77 = &p_m_PriorityQueue->m_heap.m_Memory.m_pMemory[m_nOpenListHeapIndex];
                    *(v77 + 16) = flNewTotalCosta;
                    *(v77 + 20) = flNewTotalCosta;
                    *(v77 + 24) = 0;
                    if ( CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t>::PercolateDown(
                           p_m_PriorityQueue,
                           m_nOpenListHeapIndex) == m_nOpenListHeapIndex
                      && m_nOpenListHeapIndex < p_m_PriorityQueue->m_heap.m_Size )
                    {
                      CUtlPriorityQueue<CNavOpenListElement,CDefUtlPriorityQueueLessFunc<CNavOpenListElement>,CUtlMemory<CNavOpenListElement,int>,CNavOpenList::SetHeapEntryIndex_t>::PercolateUp(
                        p_m_PriorityQueue,
                        m_nOpenListHeapIndex);
                    }
                  }
                  else
                  {
                    v65 = pArea->m_rNavMesh;
                    v66 = p_m_PriorityQueue->m_heap.m_Size;
                    v67 = p_m_PriorityQueue->m_heap.m_Size;
                    if ( p_m_PriorityQueue->m_heap.m_Size == p_m_PriorityQueue->m_heap.m_Memory.m_nAllocationCount )
                    {
                      ib = p_m_PriorityQueue->m_heap.m_Size;
                      CUtlMemory<CNavOpenListElement,int>::Grow(&p_m_PriorityQueue->m_heap.m_Memory, 1);
                      v67 = p_m_PriorityQueue->m_heap.m_Size;
                      v66 = ib;
                    }
                    v68 = v66;
                    v69 = v66;
                    p_m_PriorityQueue->m_heap.m_Size = v67 + 1;
                    v70 = &p_m_PriorityQueue->m_heap.m_Memory.m_pMemory[v69];
                    if ( v70 != 0 )
                    {
                      v70->m_pNavArea.m_pData = 0;
                      v70->m_pNavArea.m_pAssociatedNavMesh = 0;
                      v70->m_flTotalCost = 0.0;
                      v70->m_flCostSoFar = 0.0;
                      v70->m_flPathLengthSoFar = 0.0;
                      v71 = &p_m_PriorityQueue->m_heap.m_Memory.m_pMemory[v69];
                    }
                    else
                    {
                      v71 = 0;
                    }
                    v71->m_pNavArea.m_pData = pArea;
                    v71->m_pNavArea.m_pAssociatedNavMesh = v65;
                    v71->m_flTotalCost = flNewTotalCosta;
                    *&v71->m_flCostSoFar = LODWORD(flNewTotalCosta);
                    v72 = &p_m_PriorityQueue->m_heap.m_Memory.m_pMemory[v69];
                    v73 = 0;
                    if ( v72->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
                      v73 = v72->m_pNavArea.m_pData;
                    v73->m_nOpenListHeapIndex = v66;
                    if ( p_m_PriorityQueue->m_heap.m_Size > v66 && v66 != 0 )
                    {
                      flNewTotalCostb = pArea;
                      v81 = v66;
                      ia = v44;
                      while ( 1 )
                      {
                        v82 = v68;
                        v83 = (v81 + 1) / 2 - 1;
                        v84 = v83;
                        if ( p_m_PriorityQueue->m_LessFunc(
                               &p_m_PriorityQueue->m_heap.m_Memory.m_pMemory[v82],
                               &p_m_PriorityQueue->m_heap.m_Memory.m_pMemory[v84]) )
                        {
                          break;
                        }
                        v85 = p_m_PriorityQueue->m_heap.m_Memory.m_pMemory;
                        v86 = &v85[v84];
                        v87 = v85[v83].m_pNavArea.m_pData;
                        v88 = v85[v84].m_pNavArea.m_pAssociatedNavMesh;
                        v89 = v85[v84].m_flTotalCost;
                        v86->m_pNavArea.m_pData = v85[v82].m_pNavArea.m_pData;
                        v90 = v85[v84].m_flCostSoFar;
                        v91 = v85[v84].m_flPathLengthSoFar;
                        v86->m_pNavArea.m_pAssociatedNavMesh = v85[v82].m_pNavArea.m_pAssociatedNavMesh;
                        *&v86->m_flTotalCost = *&v85[v82].m_flTotalCost;
                        v86->m_flPathLengthSoFar = v85[v82].m_flPathLengthSoFar;
                        v92 = 0;
                        v93 = &p_m_PriorityQueue->m_heap.m_Memory.m_pMemory[v82];
                        v93->m_pNavArea.m_pData = v87;
                        v93->m_pNavArea.m_pAssociatedNavMesh = v88;
                        v93->m_flTotalCost = v89;
                        v93->m_flCostSoFar = v90;
                        v93->m_flPathLengthSoFar = v91;
                        v94 = &p_m_PriorityQueue->m_heap.m_Memory.m_pMemory[v84];
                        v95 = TheNavMesh;
                        if ( v94->m_pNavArea.m_pAssociatedNavMesh == TheNavMesh )
                          v92 = v94->m_pNavArea.m_pData;
                        v92->m_nOpenListHeapIndex = v83;
                        v96 = &p_m_PriorityQueue->m_heap.m_Memory.m_pMemory[v82];
                        if ( v95 == v96->m_pNavArea.m_pAssociatedNavMesh )
                        {
                          v96->m_pNavArea.m_pData->m_nOpenListHeapIndex = v81;
                          if ( (v81 + 1) / 2 == 1 )
                            break;
                        }
                        else
                        {
                          HIDWORD(stru_10.m_pIdentityChunks[20]) = v81;
                          if ( (v81 + 1) / 2 == 1 )
                            break;
                        }
                        v81 = (v81 + 1) / 2 - 1;
                        v68 = v83;
                      }
                      pArea = flNewTotalCostb;
                      v44 = ia;
                    }
                  }
                  if ( rGoalSelectorFunc->_M_manager == 0 )
                    std::__throw_bad_function_call();
                  v74 = rGoalSelectorFunc->_M_invoker(rGoalSelectorFunc, pGoalArea, pArea);
                  pGoalArea = v74;
                  if ( pArea == v74 && m_fValue > 0.0 )
                  {
                    v97 = 0x42480000u;
                    *v97.m128i_i32 = v74->m_vCenter.z + 50.0;
                    v98 = v74->m_vCenter.y;
                    v99 = v74->m_vCenter.x + 0.0;
                    memset(v119, 100, 2);
                    v100 = _mm_cvtsi128_si32(v97);
                    v119[2] = -1;
                    ic = v99;
                    v120 = -1;
                    v101 = debugoverlay;
                    flNewTotalCostc = v98 + 0.0;
                    SetIdentityMatrix(&vGoalPos);
                    LODWORD(vGoalPos.m_flMatVal[2][3]) = v100;
                    vGoalPos.m_flMatVal[0][3] = ic;
                    vGoalPos.m_flMatVal[1][3] = flNewTotalCostc;
                    (*(v101->_vptr_ISceneViewDebugOverlays + 18))(v101, &vGoalPos, v119, 1, 10.0, m_fValue);
                  }
                  goto LABEL_61;
                }
                if ( INavDrawArea::ms_pInst == 0 )
                  goto LABEL_51;
                (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
                  INavDrawArea::ms_pInst,
                  pArea,
                  4294927460LL,
                  1,
                  &vec3_origin,
                  m_fValue,
                  0.0);
              }
              m_nOpenListHeapIndex = pArea->m_nOpenListHeapIndex;
              goto LABEL_51;
            }
          }
        }
      }
LABEL_61:
      ++v44;
      ++m_AdjAreas;
    }
    while ( adjacencyList.m_nAdjAreaCount > v44 );
    v11 = p_m_PriorityQueue;
    m_Size = p_m_PriorityQueue->m_heap.m_Size;
  }
  while ( p_m_PriorityQueue->m_heap.m_Size > 0 );
LABEL_79:
  if ( pGoalArea == 0 )
  {
    this->m_PathResultStatus = CPathData::PathResult_t::NO_PATH;
    return 0;
  }
  if ( this->m_bIncludeGoalIfPathFails )
    Warning("ComputePathWithOpenGoal - Doesn't support m_bIncludeGoalIfPathFails.  Forcing off.\n");
  v78 = pGoalArea->m_vCenter.y;
  v79 = pGoalArea->m_vCenter.z;
  vGoalPos.m_flMatVal[0][0] = pGoalArea->m_vCenter.x;
  *&vGoalPos.m_flMatVal[0][1] = __PAIR64__(LODWORD(v79), LODWORD(v78));
  return CPath::AssemblePrecomputedPath(this, &vStartPos, pStartArea, &vGoalPos, pGoalArea, rCostFunc, 1, 0);
}


// CPath::AssemblePrecomputedPath  (line 1667, @0x0000000002ee2f70, libserver.so)  // inlines: GetPathParentAreaHow, SetArea, SetPrevArea, operator=
// calls: CPath::ComputePathDetails, CNavPoly::ContainsPoint
// callers: CPath::ComputePathWithOpenGoalCore, CPath::ComputePathCore, CPath::ComputePathMultiGoalCore
bool __fastcall CPath::AssemblePrecomputedPath(
        CPath *const this,
        const Vector *const vStartPos,
        CNavArea *pStartArea,
        const Vector *const vGoalPos,
        CNavArea *const rEndArea,
        const CPathCostBase *const rCostFunc,
        bool bPathResult,
        bool bAppendToExistingPath)
{
  CNavArea *v10; // rax
  int v11; // r14d
  CPathData::PathResult_t v12; // eax
  int m_nSegmentCount; // edx
  int v14; // eax
  int v15; // eax
  int *v16; // rcx
  CNavArea *m_pPathParent; // rsi
  int m_nIndex; // r9d
  char *v19; // rsi
  NavEdgeIndex m_nPathInEdge; // di
  char *v21; // rax
  bool v23; // al
  CNavArea *rEndAreaa; // [rsp+8h] [rbp-38h]

  if ( rEndArea != 0 )
  {
    if ( rEndArea == pStartArea )
    {
      v11 = 1;
      if ( !bPathResult )
      {
LABEL_7:
        v12 = CPathData::PathResult_t::PATH_PARTIAL;
LABEL_8:
        this->m_PathResultStatus = v12;
        goto LABEL_9;
      }
    }
    else
    {
      v10 = rEndArea;
      v11 = 1;
      do
      {
        v10 = v10->m_pPathParent;
        if ( v10 == 0 )
          break;
        ++v11;
      }
      while ( pStartArea != v10 );
      if ( !bPathResult )
        goto LABEL_7;
    }
  }
  else
  {
    v11 = 0;
    v12 = CPathData::PathResult_t::NO_PATH;
    if ( !bPathResult )
      goto LABEL_8;
  }
  rEndAreaa = rEndArea;
  v23 = CNavPoly::ContainsPoint(rEndArea, vGoalPos);
  rEndArea = rEndAreaa;
  this->m_PathResultStatus = 2 - v23;
LABEL_9:
  if ( !bAppendToExistingPath )
  {
    v14 = 255;
    m_nSegmentCount = 0;
    if ( v11 < 255 )
      v14 = v11;
    if ( v14 > 0 )
      goto LABEL_13;
    return 0;
  }
  m_nSegmentCount = this->m_nSegmentCount;
  v14 = 255 - m_nSegmentCount;
  if ( 255 - m_nSegmentCount > v11 )
    v14 = v11;
  if ( v14 <= 0 )
    return 0;
LABEL_13:
  v15 = m_nSegmentCount + v14;
  this->m_nSegmentCount = v15;
  if ( m_nSegmentCount < v15 && rEndArea != 0 )
  {
    v16 = &this->_vptr_CPathData + 22 * v15 + 1;
    while ( 1 )
    {
      m_pPathParent = rEndArea->m_pPathParent;
      --v15;
      m_nIndex = -1;
      if ( m_pPathParent != 0 )
        m_nIndex = m_pPathParent->m_nIndex;
      *v16 = m_nIndex;
      *(v16 - 1) = rEndArea->m_nIndex;
      if ( m_nSegmentCount >= v15 )
        break;
      v16 -= 22;
      v19 = this + 88 * v15;
      *(v19 + 2) = *(rEndArea + 328) & 0xF;
      m_nPathInEdge = rEndArea->m_nPathInEdge;
      *(v19 + 10) = 0;
      v19[84] = 1;
      v19[12] = m_nPathInEdge;
      rEndArea = rEndArea->m_pPathParent;
      if ( rEndArea == 0 )
        goto LABEL_22;
    }
    v21 = this + 88 * m_nSegmentCount;
    *(v21 + 2) = 4;
    v21[12] = -1;
    *(v21 + 10) = 0;
    v21[84] = 0;
    *(v21 + 4) = LODWORD(vStartPos->x);
    *(v21 + 5) = LODWORD(vStartPos->y);
    *(v21 + 6) = LODWORD(vStartPos->z);
  }
LABEL_22:
  if ( CPath::ComputePathDetails(this, vStartPos, m_nSegmentCount) )
    return bPathResult;
  (*(this->_vptr_CPathData + 2))(this);
  return 0;
}


// CPath::FinishAndPostProcessPath  (line 1747, @0x0000000002ee3780, libserver.so)  // inlines: DistTo, FastSqrt, Length, Max<float>, NormalizeInPlace, SetArea, SetPrevArea, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: VectorNormalize, CPath::ComputeSpecialSegments, CPath::Optimize, CPath::PostProcess, CNavPoly::GetClosestPointOnPoly, CNavPoly::ContainsPoint
// callers: CPath::ComputePathCore, CPath::ComputePathMultiGoalCore
void __fastcall CPath::FinishAndPostProcessPath(
        CPath *const this,
        const Vector *const vStartPos,
        const Vector *const vGoalPos,
        CNavArea *const rEndArea,
        bool bPathResult,
        const CPathCostBase *const rCostFunc)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm1_4
  float m_flMaxPathLength; // xmm7_4
  float v14; // xmm4_4
  int m_nSegmentCount; // esi
  CPath *v16; // rax
  int i; // edx
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float *v21; // rdx
  float v22; // xmm0_4
  CNavArea *m_pPathParent; // rdx
  int m_nIndex; // eax
  float *v25; // rdx
  char *v26; // rax
  bool v27; // al
  float v28; // [rsp+0h] [rbp-60h]
  float v29; // [rsp+4h] [rbp-5Ch]
  float v30; // [rsp+8h] [rbp-58h]
  float v31; // [rsp+Ch] [rbp-54h]
  float v32; // [rsp+10h] [rbp-50h]
  float v33; // [rsp+14h] [rbp-4Ch]
  float vGoalPosa; // [rsp+18h] [rbp-48h]
  const Vector *vGoalPosb; // [rsp+18h] [rbp-48h]
  Vector vToDesired; // [rsp+30h] [rbp-30h] BYREF
  Vector ClosestPointOnPoly; // 0:kr00_12.12

  if ( bPathResult )
  {
    if ( !this->m_bIncludeGoalIfOffMesh )
    {
      vGoalPosb = vGoalPos;
      v27 = CNavPoly::ContainsPoint(rEndArea, vGoalPos);
      vGoalPos = vGoalPosb;
      if ( !v27 )
        goto LABEL_17;
    }
LABEL_3:
    x = vGoalPos->x;
    y = vGoalPos->y;
    z = vGoalPos->z;
    goto LABEL_4;
  }
  if ( this->m_bIncludeGoalIfPathFails )
    goto LABEL_3;
LABEL_17:
  ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(rEndArea, vGoalPos);
  z = ClosestPointOnPoly.z;
  x = ClosestPointOnPoly.x;
  y = ClosestPointOnPoly.y;
LABEL_4:
  m_flMaxPathLength = this->m_flMaxPathLength;
  v14 = 0.0;
  if ( m_flMaxPathLength > 0.0 )
  {
    m_nSegmentCount = this->m_nSegmentCount;
    if ( m_nSegmentCount > 0 )
    {
      v16 = this;
      for ( i = 0; i != m_nSegmentCount; ++i )
      {
        if ( i != 0 )
        {
          v18 = v16->m_path[0].vPos.x - *&v16[-1].m_PathCaps.m_pPathingEntity;
          v19 = v16->m_path[0].vPos.y - *(&v16[-1].m_PathCaps.m_pPathingEntity + 1);
          v20 = v16->m_path[0].vPos.z - *&v16[-1].m_PathCaps.m_bIsDebugging;
        }
        else
        {
          v18 = vStartPos->x - this->m_path[0].vPos.x;
          v19 = vStartPos->y - this->m_path[0].vPos.y;
          v20 = vStartPos->z - this->m_path[0].vPos.z;
        }
        v16 = (v16 + 88);
        v14 = v14 + fsqrt(((v18 * v18) + (v19 * v19)) + (v20 * v20));
      }
    }
    v29 = x;
    v31 = y;
    v33 = z;
    v21 = (this + 88 * m_nSegmentCount - 88);
    v28 = fmaxf(1.0, m_flMaxPathLength - v14);
    v30 = v21[4];
    v32 = v21[5];
    vGoalPosa = v21[6];
    vToDesired.x = x - v30;
    vToDesired.y = y - v32;
    vToDesired.z = z - vGoalPosa;
    v22 = VectorNormalize(&vToDesired);
    z = v33;
    y = v31;
    x = v29;
    if ( v22 > v28 )
    {
      x = (vToDesired.x * v28) + v30;
      y = (vToDesired.y * v28) + v32;
      z = (vToDesired.z * v28) + vGoalPosa;
    }
  }
  m_pPathParent = rEndArea->m_pPathParent;
  m_nIndex = -1;
  if ( m_pPathParent != 0 )
    m_nIndex = m_pPathParent->m_nIndex;
  this->m_path[this->m_nSegmentCount].m_nPrevAreaIndex = m_nIndex;
  this->m_path[this->m_nSegmentCount].m_nAreaIndex = rEndArea->m_nIndex;
  v25 = (this + 88 * this->m_nSegmentCount);
  v25[4] = x;
  v25[5] = y;
  v25[6] = z;
  LODWORD(v25) = this->m_nSegmentCount;
  v26 = this + 88 * v25;
  *(v26 + 4) = 0;
  *(v26 + 2) = 8;
  v26[12] = -1;
  *(v26 + 10) = 0;
  v26[84] = 1;
  this->m_nSegmentCount = v25 + 1;
  CPath::ComputeSpecialSegments(this);
  CPath::Optimize(this, rCostFunc);
  CPath::PostProcess(this);
  (*(this->_vptr_CPathData + 3))(this);
}


// CPath::FinishComputePathWrapper  (line 1801, @0x0000000002ec7730, libserver.so)
// callers: CNavEditor::UpdateSelection, CNavPathNB::FinishComputePathWrapper
bool __fastcall CPath::FinishComputePathWrapper(CPath *const this, bool bFullPath)
{
  bool result; // al

  result = 1;
  if ( !bFullPath )
  {
    result = this->m_bAllowPartialPaths;
    if ( !result || this->m_PathResultStatus != CPathData::PathResult_t::PATH_PARTIAL )
    {
      (*(this->_vptr_CPathData + 2))(this);
      return 0;
    }
  }
  return result;
}


// CPath::Optimize  (line 1816, @0x0000000002ee31b0, libserver.so)  // inlines: GetBool, GetInt
// callers: CPath::FinishAndPostProcessPath
void __fastcall CPath::Optimize(CPath *const this, const CPathCostBase *const rCostFunc)
{
  CPathOptimizer *m_pOptimizer; // rax

  m_pOptimizer = this->m_pOptimizer;
  if ( m_pOptimizer != 0 && nav_path_optimize_enable.m_pParent->m_Value.m_nValue != 0 )
    (*m_pOptimizer->_vptr_CPathOptimizer)(this->m_pOptimizer, this, rCostFunc);
}


// CPath::PostProcess  (line 1826, @0x0000000002ee31f0, libserver.so)  // inlines: Dot, DotProduct2D, FastSqrt, Length, NetworkStateChanged, NormalizeInPlace, Set, Start, Vector2DLength, Vector2DNormalize, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator/=, operator=, operator=<float>
// calls: IntervalTimer::Now, VectorNormalize
// callers: CPath::FinishAndPostProcessPath
void __fastcall CPath::PostProcess(CPath *const this)
{
  IntervalTimer *p_m_ageTimer; // rbx
  float v3; // xmm0_4
  int m_nSegmentCount; // eax
  Vector *p_vForward; // rdx
  float v6; // xmm4_4
  int v7; // r13d
  Vector *p_vPos; // rsi
  Vector *v9; // r14
  int v10; // r15d
  CPathSegment *m_path; // rbx
  float v12; // xmm1_4
  Vector *v13; // rcx
  float x; // xmm0_4
  int v15; // r9d
  __int64 v16; // rax
  int v17; // r8d
  vec_t v18; // xmm0_4
  vec_t v19; // xmm3_4
  int v20; // ecx
  __int64 v21; // rax
  const CNavLadder **p_pLadder; // rsi
  CNavPathJumpProcess *m_pJumpPostProcess; // rdi
  CPath *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  CPathSegment *v28; // rax
  int v29; // edx
  float *p_flCurvature; // rax
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  float v34; // xmm14_4
  float v35; // xmm11_4
  float v36; // xmm12_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // [rsp+8h] [rbp-458h]
  float flDistanceSoFar; // [rsp+10h] [rbp-450h]
  Vector *v45; // [rsp+18h] [rbp-448h]
  Vector *v46; // [rsp+20h] [rbp-440h]
  Vector *v47; // [rsp+28h] [rbp-438h]
  float v48; // [rsp+28h] [rbp-438h]
  int remap[268]; // [rsp+30h] [rbp-430h]

  p_m_ageTimer = &this->m_ageTimer;
  v3 = IntervalTimer::Now(&this->m_ageTimer);
  if ( v3 != this->m_ageTimer.m_timestamp.m_Value )
  {
    v48 = v3;
    (*(this->m_ageTimer._vptr_IntervalTimer + 2))(p_m_ageTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ageTimer.m_timestamp.m_Value = v48;
  }
  m_nSegmentCount = this->m_nSegmentCount;
  if ( m_nSegmentCount == 0 )
    return;
  if ( m_nSegmentCount == 1 )
  {
    this->m_path[0].flLength = 0.0;
    this->m_path[0].flDistanceFromStart = 0.0;
    this->m_path[0].flCurvature = 0.0;
    this->m_path[0].vForward = vec3_origin;
    return;
  }
  if ( m_nSegmentCount <= 0 )
  {
LABEL_38:
    this->m_nSegmentCount = 0;
    v20 = 0;
    v29 = 1;
    goto LABEL_14;
  }
  p_vForward = &this->m_path[0].vForward;
  v6 = 0.0;
  v7 = 0;
  p_vPos = &this->m_path[1].vPos;
  v9 = &this->m_path[0].vForward;
  v10 = 1;
  m_path = this->m_path;
  v12 = 0.0;
  v13 = &this->m_path[0].vPos;
  do
  {
    v17 = v10 - 1;
    if ( m_nSegmentCount - 1 <= v10 - 1 )
    {
      x = v9[1].x;
      v15 = v10;
LABEL_8:
      v16 = v7++;
      remap[v16] = v17;
      goto LABEL_9;
    }
    v43 = v6;
    flDistanceSoFar = v12;
    v45 = p_vPos;
    v18 = p_vPos->z - v13->z;
    v46 = v13;
    v19 = p_vPos->x - v13->x;
    v47 = p_vForward;
    p_vForward->y = p_vPos->y - v13->y;
    p_vForward->z = v18;
    p_vForward->x = v19;
    x = VectorNormalize(v9);
    p_vForward = v47;
    v9[1].x = x;
    v13 = v46;
    p_vPos = v45;
    v15 = v10;
    v12 = flDistanceSoFar;
    v17 = v10 - 1;
    v6 = v43;
    if ( x > 0.00000011920929 )
      goto LABEL_8;
LABEL_9:
    v9[1].y = v12;
    ++v10;
    p_vPos = (p_vPos + 88);
    m_nSegmentCount = this->m_nSegmentCount;
    v13 = (v13 + 88);
    p_vForward = (p_vForward + 88);
    v9 = (v9 + 88);
    v12 = v12 + x;
  }
  while ( m_nSegmentCount > v15 );
  if ( v7 == 0 )
    goto LABEL_38;
  v24 = this;
  v25 = 0;
  v26 = 0;
  do
  {
    v27 = remap[v25];
    if ( v27 != v25 )
    {
      v28 = &this->m_path[v27];
      v24->m_path[0].how = v28->how;
      v24->m_path[0].inEdge = v28->inEdge;
      m_path[v26].vPos.x = v28->vPos.x;
      m_path[v26].vPos.y = v28->vPos.y;
      m_path[v26].vPos.z = v28->vPos.z;
      v24->m_path[0].pLadder = v28->pLadder;
      v24->m_path[0].type = v28->type;
      m_path[v26].vForward.x = v28->vForward.x;
      m_path[v26].vForward.y = v28->vForward.y;
      m_path[v26].vForward.z = v28->vForward.z;
      v24->m_path[0].flLength = v28->flLength;
      v24->m_path[0].flDistanceFromStart = v28->flDistanceFromStart;
      v24->m_path[0].flCurvature = v28->flCurvature;
      m_path[v26].vPortalCenter.x = v28->vPortalCenter.x;
      m_path[v26].vPortalCenter.y = v28->vPortalCenter.y;
      m_path[v26].vPortalCenter.z = v28->vPortalCenter.z;
      v24->m_path[0].flPortalHalfWidth = v28->flPortalHalfWidth;
      v24->m_path[0].bAllowOptimize = v28->bAllowOptimize;
      v24->m_path[0].m_nAreaIndex = v28->m_nAreaIndex;
      v24->m_path[0].m_nPrevAreaIndex = v28->m_nPrevAreaIndex;
    }
    ++v26;
    ++v25;
    v24 = (v24 + 88);
  }
  while ( v26 != (v7 - 1) + 1LL );
  this->m_nSegmentCount = v7;
  if ( v7 <= 2 )
  {
    v20 = 0;
    v29 = 1;
  }
  else
  {
    v29 = 1;
    p_flCurvature = &this->m_path[1].flCurvature;
    do
    {
      if ( *(p_flCurvature - 6) != 0 )
      {
        *p_flCurvature = 0.0;
      }
      else
      {
        v31 = *(p_flCurvature - 27);
        v32 = *(p_flCurvature - 26);
        v33 = fsqrt((v31 * v31) + (v32 * v32));
        if ( v33 == v6 )
        {
          v36 = -0.0;
          v34 = v6;
          v35 = v6;
        }
        else
        {
          v34 = (1.0 / v33) * v32;
          v35 = v31 * (1.0 / v33);
          v36 = -v34;
        }
        v37 = *(p_flCurvature - 5);
        v38 = *(p_flCurvature - 4);
        v39 = fsqrt((v37 * v37) + (v38 * v38));
        if ( v39 == v6 )
        {
          v40 = v6;
          v41 = v6;
        }
        else
        {
          v40 = v38 * (1.0 / v39);
          v41 = v37 * (1.0 / v39);
        }
        v42 = (1.0 - ((v41 * v35) + (v34 * v40))) * 0.5;
        if ( v6 > ((v41 * v36) + (v40 * v35)) )
          v42 = -v42;
        *p_flCurvature = v42;
      }
      ++v29;
      p_flCurvature += 22;
    }
    while ( v29 != v7 - 1 );
    v20 = v7 - 2;
  }
LABEL_14:
  this->m_path[0].flCurvature = 0.0;
  v21 = v29;
  p_pLadder = &this->m_path[v21].pLadder;
  *(p_pLadder + 3) = LODWORD(this->m_path[v20].vForward.x);
  *(p_pLadder + 4) = LODWORD(this->m_path[v20].vForward.y);
  *(p_pLadder + 20) = LODWORD(this->m_path[v20].vForward.z);
  this->m_path[v21].flCurvature = 0.0;
  m_pJumpPostProcess = this->m_pJumpPostProcess;
  if ( m_pJumpPostProcess != 0 && this->m_PathCaps.m_pPathCost != 0 )
    (*m_pJumpPostProcess->_vptr_CNavPathJumpProcess)(m_pJumpPostProcess, this);
}


// CPath::StartRecordLastFailedPath  (line 1935, @0x0000000002ef1c90, libserver.so)  // inlines: CEntityHandle, CHandle, CPathCostBase, CPathCostRecorder, CUtlMemory, CUtlVector, CUtlVectorBase, NavHullAny
// calls: CPathCostRecorder::StartRecord, operator new, NavHull_t::NavHull_t, operator delete, _Unwind_Resume
// callers: CPath::ComputePathCore
// globals: CPath::m_pLastFailedPath
void __fastcall CPath::StartRecordLastFailedPath(
        CPath *const this,
        const CPathCostBase *const rCostFunc,
        const CBaseCombatCharacter *pPathingEntity,
        CNavArea *pStartArea,
        const Vector *const vStartPos,
        CNavArea *pGoalArea,
        const Vector *const vGoalPos)
{
  CPathCostRecorder *v11; // rdi
  CPathCostRecorder *v12; // rbx
  float v13; // xmm2_4
  uint32 m_hullCategory; // eax
  float m_flHullHeight; // xmm0_4
  float m_flHullRadius; // xmm1_4
  NavHull_t v18; // [rsp+10h] [rbp-40h] BYREF

  v11 = CPath::m_pLastFailedPath;
  if ( CPath::m_pLastFailedPath == 0 )
  {
    v12 = operator new(0xA0u);
    NavHull_t::NavHull_t(&v18, -1.0, v13, 7u);
    m_hullCategory = v18.m_hullCategory;
    v12->m_pPathCost = 0;
    v11 = v12;
    m_flHullHeight = v18.m_flHullHeight;
    v12->m_hPathingEntity.m_Index = -1;
    m_flHullRadius = v18.m_flHullRadius;
    v12->m_pStartArea = 0;
    v12->m_navHull.m_flHullHeight = m_flHullHeight;
    v12->m_navHull.m_hullCategory = m_hullCategory;
    v12->_vptr_CPathCostBase = off_47B0DB0;
    v12->m_navHull.m_flHullRadius = m_flHullRadius;
    v12->m_pGoalArea = 0;
    v12->m_NonTraversablePairs.m_Size = 0;
    v12->m_NonTraversablePairs.m_Memory.m_pMemory = 0;
    v12->m_NonTraversablePairs.m_Memory.m_nAllocationCount = 0;
    v12->m_NonTraversablePairs.m_Memory.m_nGrowSize = 0;
    v12->m_CostPairs.m_Size = 0;
    v12->m_CostPairs.m_Memory.m_pMemory = 0;
    v12->m_CostPairs.m_Memory.m_nAllocationCount = 0;
    v12->m_CostPairs.m_Memory.m_nGrowSize = 0;
    v12->m_VisitedAreas.m_Size = 0;
    v12->m_VisitedAreas.m_Memory.m_pMemory = 0;
    v12->m_VisitedAreas.m_Memory.m_nAllocationCount = 0;
    v12->m_VisitedAreas.m_Memory.m_nGrowSize = 0;
    CPath::m_pLastFailedPath = v12;
  }
  CPathCostRecorder::StartRecord(v11, rCostFunc, pPathingEntity, pStartArea, vStartPos, pGoalArea, vGoalPos);
}


// CPath::EndRecordLastFailedPath  (line 1947, @0x0000000002ef1b60, libserver.so)
// calls: CPathCostRecorder::StopRecord
// globals: CPath::m_pLastFailedPath
void __fastcall CPath::EndRecordLastFailedPath(CPath *const this)
{
  if ( CPath::m_pLastFailedPath != 0 )
    CPathCostRecorder::StopRecord(CPath::m_pLastFailedPath);
}


