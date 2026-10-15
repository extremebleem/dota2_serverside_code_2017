
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathCostBase::~CPathCostBase  (line 51, @0x0000000002f04c20, libserver.so)
void __fastcall CPathCostBase::~CPathCostBase(CPathCostBase *const this)
{
  this->_vptr_CPathCostBase = off_47AE0B0;
}


// CPathCostBase::~CPathCostBase  (line 51, @0x0000000002f05530, libserver.so)  // inlines: ~CPathCostBase
// calls: operator delete
void __fastcall CPathCostBase::~CPathCostBase(CPathCostBase *const this)
{
  this->_vptr_CPathCostBase = off_47AE0B0;
  operator delete(this);
}


// CPathCostBase::IsToAreaTraversable  (line 63, @0x0000000002f04c30, libserver.so)
bool __fastcall CPathCostBase::IsToAreaTraversable(
        const CPathCostBase *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  return 1;
}


// CNavShortestPathCost::~CNavShortestPathCost  (line 139, @0x0000000002f04d20, libserver.so)  // inlines: ~CPathCostBase
void __fastcall CNavShortestPathCost::~CNavShortestPathCost(CNavShortestPathCost *const this)
{
  this->_vptr_CPathCostBase = off_47AE0B0;
}


// CNavShortestPathCost::~CNavShortestPathCost  (line 139, @0x0000000002f05550, libserver.so)  // inlines: ~CNavShortestPathCost, ~CPathCostBase
// calls: operator delete
void __fastcall CNavShortestPathCost::~CNavShortestPathCost(CNavShortestPathCost *const this)
{
  this->_vptr_CPathCostBase = off_47AE0B0;
  operator delete(this);
}


// CNavShortestPathCost::IsNeighborReachable  (line 148, @0x0000000002f05890, libserver.so)
// calls: CNavPoly::GetZDeltaAtEdgeToPoly
bool __fastcall CNavShortestPathCost::IsNeighborReachable(
        const CNavShortestPathCost *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  double v6; // xmm0_8

  *&v6 = CNavPoly::GetZDeltaAtEdgeToPoly(rFromArea, rToArea);
  return (*(this->_vptr_CPathCostBase + 8))(this, rToArea, rFromArea, 1.0, v6) >= 0.0;
}


// CNavShortestPathCost::AllowPathOptimization  (line 155, @0x0000000002f04c40, libserver.so)
bool __fastcall CNavShortestPathCost::AllowPathOptimization(
        const CNavShortestPathCost *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  return 1;
}


// CNavShortestPathCost::FloorAreaCost  (line 169, @0x0000000002f04c50, libserver.so)
void __fastcall CNavShortestPathCost::FloorAreaCost(
        const CNavShortestPathCost *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea,
        float flLength,
        float flEdgeDeltaZ)
{
  ;
}


// CNavShortestPathCost::LadderCost  (line 176, @0x0000000002f04c60, libserver.so)
float __fastcall CNavShortestPathCost::LadderCost(
        const CNavShortestPathCost *const this,
        const CNavLadder *const rLadder,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  return rLadder->m_flLength;
}


// CNavShortestPathCost::ElevatorCost  (line 183, @0x0000000002f04c70, libserver.so)
float __fastcall CNavShortestPathCost::ElevatorCost(
        const CNavShortestPathCost *const this,
        const IHandleEntity *const rElevatorEntity,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  return rToArea->m_vCenter.z - rFromArea->m_vCenter.z;
}


// CNavShortestPathCost::CalcCostFloorAreas  (line 200, @0x0000000002f05c30, libserver.so)  // inlines: FastSqrt, GetCenter, GetPosOnToArea, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CNavPoly::ComputeOrientedPortal, CNavOrientedPortal::CalcClosestPointToRay, CNavPoly::GetZDeltaAtEdgeToPoly
void __fastcall CNavShortestPathCost::CalcCostFloorAreas(
        const CNavShortestPathCost *const this,
        PathCostResult_t *const rCostOut,
        const CNavArea *const rFromArea,
        const CNavArea *const rToArea,
        NavEdgeIndex edge,
        NavEdgeIndex backEdge,
        const Vector *pGoalPos)
{
  float m_flHullRadius; // xmm0_4
  double v12; // xmm2_8
  double v13; // xmm0_8
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  unsigned int flLength; // [rsp+0h] [rbp-90h]
  double flLengtha; // [rsp+0h] [rbp-90h]
  Vector vFromPos; // [rsp+10h] [rbp-80h] BYREF
  Vector vToPos; // [rsp+20h] [rbp-70h] BYREF
  Vector vRayEnd; // [rsp+30h] [rbp-60h] BYREF
  CNavOrientedPortal pPortalOut; // [rsp+40h] [rbp-50h] BYREF

  m_flHullRadius = this->m_navHull.m_flHullRadius;
  vFromPos = rFromArea->m_vPathfindingPos;
  CNavPoly::ComputeOrientedPortal(rFromArea, rToArea, edge, backEdge, m_flHullRadius, &pPortalOut);
  if ( pGoalPos != 0 )
  {
    vRayEnd = *pGoalPos;
  }
  else
  {
    z = rToArea->m_vCenter.z;
    x = rToArea->m_vCenter.x;
    vRayEnd.y = rToArea->m_vCenter.y;
    vRayEnd.z = z;
    vRayEnd.x = x;
  }
  CNavOrientedPortal::CalcClosestPointToRay(&pPortalOut, &vFromPos, &vRayEnd, &vToPos);
  *&flLength = (((vFromPos.x - vToPos.x) * (vFromPos.x - vToPos.x)) + ((vFromPos.y - vToPos.y) * (vFromPos.y - vToPos.y)))
             + ((vFromPos.z - vToPos.z) * (vFromPos.z - vToPos.z));
  *&v12 = flLength;
  *&v12 = fsqrt(*&flLength);
  flLengtha = v12;
  *&v13 = CNavPoly::GetZDeltaAtEdgeToPoly(rFromArea, rToArea);
  rCostOut->m_flSegmentCost = (*(this->_vptr_CPathCostBase + 8))(this, rToArea, rFromArea, flLengtha, v13);
  rCostOut->m_vPos = vToPos;
}


// CNavShortestPathCost::CalcCostLadder  (line 213, @0x0000000002f04c80, libserver.so)  // inlines: operator=
void __fastcall CNavShortestPathCost::CalcCostLadder(
        const CNavShortestPathCost *const this,
        PathCostResult_t *const rCostOut,
        const CNavArea *const rFromArea,
        const CNavArea *const rToArea,
        const CNavLadder *const rLadder)
{
  rCostOut->m_vPos = rLadder->m_vTop;
  rCostOut->m_flSegmentCost = (*(this->_vptr_CPathCostBase + 9))(this, rLadder, rToArea, rFromArea);
}


// CNavShortestPathCost::CalcCostElevator  (line 221, @0x0000000002f04cd0, libserver.so)  // inlines: GetCenter, operator=
void __fastcall CNavShortestPathCost::CalcCostElevator(
        const CNavShortestPathCost *const this,
        PathCostResult_t *const rCostOut,
        const CNavArea *const rFromArea,
        const CNavArea *const rToArea,
        const IHandleEntity *const rElevatorEntity)
{
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4

  y = rToArea->m_vCenter.y;
  z = rToArea->m_vCenter.z;
  rCostOut->m_vPos.x = rToArea->m_vCenter.x;
  rCostOut->m_vPos.y = y;
  rCostOut->m_vPos.z = z;
  rCostOut->m_flSegmentCost = (*(this->_vptr_CPathCostBase + 10))(this, rElevatorEntity, rToArea, rFromArea);
}


// CNavPathCostCore::~CNavPathCostCore  (line 267, @0x0000000002f05270, libserver.so)  // inlines: ~CNavShortestPathCost, ~CPathCostBase
void __fastcall CNavPathCostCore::~CNavPathCostCore(CNavPathCostCore *const this)
{
  this->_vptr_CPathCostBase = off_47AE0B0;
}


// CNavPathCostCore::~CNavPathCostCore  (line 267, @0x0000000002f055b0, libserver.so)  // inlines: ~CNavPathCostCore, ~CNavShortestPathCost, ~CPathCostBase
// calls: operator delete
void __fastcall CNavPathCostCore::~CNavPathCostCore(CNavPathCostCore *const this)
{
  this->_vptr_CPathCostBase = off_47AE0B0;
  operator delete(this);
}


// CNavPathCostCore::AllowPathOptimization  (line 291, @0x0000000002f04d30, libserver.so)
bool __fastcall CNavPathCostCore::AllowPathOptimization(
        const CNavPathCostCore *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  return ((rFromArea->m_AreaAttributes.m_Flags >> 7) ^ 1) & 1;
}


// CNavPathCostCore::LadderCost  (line 301, @0x0000000002f04d50, libserver.so)  // inlines: LadderCost
float __fastcall CNavPathCostCore::LadderCost(
        const CNavPathCostCore *const this,
        const CNavLadder *const rLadder,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  if ( this->m_bAllowLadders )
    return rLadder->m_flLength;
  else
    return -1.0;
}


// CNavPathCostCore::FloorAreaCost  (line 306, @0x0000000002f05bb0, libserver.so)  // inlines: CanSupportHull
float __fastcall CNavPathCostCore::FloorAreaCost(
        const CNavPathCostCore *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea,
        float flLength,
        float flEdgeDeltaZ)
{
  float m_flMaxDropDown; // xmm2_4
  float m_flMaxClimbUp; // xmm2_4

  if ( (rToArea->m_nHullSupport & this->m_navHull.m_hullCategory) == 0 )
    return -1.0;
  m_flMaxDropDown = this->m_flMaxDropDown;
  if ( m_flMaxDropDown > 0.0 && -m_flMaxDropDown > flEdgeDeltaZ )
    return -1.0;
  m_flMaxClimbUp = this->m_flMaxClimbUp;
  if ( m_flMaxClimbUp > 0.0 && flEdgeDeltaZ > m_flMaxClimbUp )
    return -1.0;
  if ( SLOBYTE(rFromArea->m_AreaAttributes.m_Flags) < 0 )
    return flLength + (((this->m_flAvoidanceAreaDistScale - 1.0) * flLength) + this->m_flAvoidanceAreaCost);
  return flLength;
}


// CNavPathCostCore::IsToAreaTraversable  (line 345, @0x0000000002f05da0, libserver.so)  // inlines: IsEmpty
// calls: CNavArea::IsConnectedOnAny
bool __fastcall CNavPathCostCore::IsToAreaTraversable(
        const CNavPathCostCore *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  uint64 m_Flags; // rax

  m_Flags = this->m_DisallowedAttributes.m_Flags;
  if ( m_Flags != 0 && (m_Flags & rToArea->m_AreaAttributes.m_Flags) != 0 )
    return 0;
  if ( this->m_bRequiresBidirectional )
    return CNavArea::IsConnectedOnAny(rToArea, rFromArea, 1, 0, 0);
  return 1;
}


