
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathData::~CPathData  (line 141, @0x0000000002f04da0, libserver.so)
void __fastcall CPathData::~CPathData(CPathData *const this)
{
  this->_vptr_CPathData = off_47B0E10;  // vptr: CPathData
}


// CPathData::~CPathData  (line 141, @0x0000000002f05570, libserver.so)  // inlines: ~CPathData
// calls: operator delete
void __fastcall CPathData::~CPathData(CPathData *const this)
{
  this->_vptr_CPathData = off_47B0E10;  // vptr: CPathData
  operator delete(this);
}


// CPathData::OnPathChanged  (line 145, @0x0000000002f04db0, libserver.so)
void __fastcall CPathData::OnPathChanged(CPathData *const this)
{
  ;
}


// CPath::~CPath  (line 251, @0x0000000002f05260, libserver.so)  // inlines: ~CPathData
void __fastcall CPath::~CPath(CPath *const this)
{
  this->_vptr_CPathData = off_47B0E10;  // vptr: CPathData
}


// CPath::~CPath  (line 251, @0x0000000002f05590, libserver.so)  // inlines: ~CPath, ~CPathData
// calls: operator delete
void __fastcall CPath::~CPath(CPath *const this)
{
  this->_vptr_CPathData = off_47B0E10;  // vptr: CPathData
  operator delete(this);
}


// CPath::SetPathFollower  (line 266, @0x0000000002f04dc0, libserver.so)
void __fastcall CPath::SetPathFollower(CPath *const this, IPathFollower *pPathFollower)
{
  this->m_pPathFollower = pPathFollower;
}


// CPath::ComputeAreaCrossing  (line 385, @0x0000000002f04dd0, libserver.so)
Vector __fastcall CPath::ComputeAreaCrossing(
        const CPath *const this,
        const CNavArea *const rFromArea,
        const Vector *const vFromPos,
        const CNavArea *const rToArea,
        NavEdgeIndex edge,
        NavEdgeIndex backEdge,
        CNavOrientedPortal *pPortal)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&rToArea->m_vPathfindingPos.x;
  result.z = rToArea->m_vPathfindingPos.z;
  return result;
}


// CPathCostRecorder::~CPathCostRecorder  (line 455, @0x0000000002f06580, libserver.so)  // inlines: Purge, RemoveAll, ~CPathCostBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CPathCostRecorder::AreaTransition_t, int>::Purge, CUtlMemory<const CNavArea*, int>::Purge
void __fastcall CPathCostRecorder::~CPathCostRecorder(CPathCostRecorder *const this)
{
  bool v2; // zf
  CUtlVectorBase<const CNavArea*,CUtlMemory<const CNavArea*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_VisitedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CPathCostBase = off_47B0DB0;  // vptr: CPathCostRecorder
  this->m_VisitedAreas.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_VisitedAreas.m_Memory;
    CUtlMemory<CNavArea const*,int>::Purge(&this->m_VisitedAreas.m_Memory);
    if ( (this->m_VisitedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea const*,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_CostPairs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CostPairs.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CPathCostRecorder::AreaTransition_t,int>::Purge(&this->m_CostPairs.m_Memory),
        (this->m_CostPairs.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_NonTraversablePairs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_NonTraversablePairs.m_Size = 0;
    if ( v2 )
      goto LABEL_7;
LABEL_4:
    this->_vptr_CPathCostBase = off_47AE0B0;  // vptr: CPathCostBase
    return;
  }
  CUtlMemory<CPathCostRecorder::AreaTransition_t,int>::Purge(&this->m_CostPairs.m_Memory);
  v2 = (this->m_NonTraversablePairs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_NonTraversablePairs.m_Size = 0;
  if ( !v2 )
    goto LABEL_4;
LABEL_7:
  CUtlMemory<CPathCostRecorder::AreaTransition_t,int>::Purge(&this->m_NonTraversablePairs.m_Memory);
  if ( (this->m_NonTraversablePairs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    goto LABEL_4;
  CUtlMemory<CPathCostRecorder::AreaTransition_t,int>::Purge(&this->m_NonTraversablePairs.m_Memory);
  this->_vptr_CPathCostBase = off_47AE0B0;  // vptr: CPathCostBase
}


// CPathCostRecorder::~CPathCostRecorder  (line 455, @0x0000000002f06670, libserver.so)  // inlines: Purge, RemoveAll, ~CPathCostBase, ~CPathCostRecorder, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CPathCostRecorder::AreaTransition_t, int>::Purge, CUtlMemory<const CNavArea*, int>::Purge
void __fastcall CPathCostRecorder::~CPathCostRecorder(CPathCostRecorder *const this)
{
  bool v2; // zf
  CUtlVectorBase<const CNavArea*,CUtlMemory<const CNavArea*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_VisitedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CPathCostBase = off_47B0DB0;  // vptr: CPathCostRecorder
  this->m_VisitedAreas.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_VisitedAreas.m_Memory;
    CUtlMemory<CNavArea const*,int>::Purge(&this->m_VisitedAreas.m_Memory);
    if ( (this->m_VisitedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea const*,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_CostPairs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CostPairs.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CPathCostRecorder::AreaTransition_t,int>::Purge(&this->m_CostPairs.m_Memory),
        (this->m_CostPairs.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_NonTraversablePairs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_NonTraversablePairs.m_Size = 0;
    if ( !v2 )
      goto LABEL_4;
  }
  else
  {
    CUtlMemory<CPathCostRecorder::AreaTransition_t,int>::Purge(&this->m_CostPairs.m_Memory);
    v2 = (this->m_NonTraversablePairs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_NonTraversablePairs.m_Size = 0;
    if ( !v2 )
      goto LABEL_4;
  }
  CUtlMemory<CPathCostRecorder::AreaTransition_t,int>::Purge(&this->m_NonTraversablePairs.m_Memory);
  if ( (this->m_NonTraversablePairs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CPathCostRecorder::AreaTransition_t,int>::Purge(&this->m_NonTraversablePairs.m_Memory);
LABEL_4:
  this->_vptr_CPathCostBase = off_47AE0B0;  // vptr: CPathCostBase
  operator delete(this);
}


