// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_path.cpp:762
class CShortPathProbe {
private:

	const Vector2D m_vStart;  // +0x0
	const Vector2D m_vEnd;  // +0x8
	const CDOTA_BaseNPC * m_pNPC;  // +0x10
	float m_flPathLength;  // +0x18
	float m_flGoalDist;  // +0x1c
	const ObstructionRecord_t * m_pCurrentObstruction;  // +0x8d0
	bool m_bClockwise;  // +0x8d8
	bool m_bDone;  // +0x8d9

	int m_nWindingCount;  // +0x8dc
	const bool m_bDebugDraw;  // +0x8f0

	static CUtlMemoryPool<CShortPathProbe> s_Allocator;
	bool PriorityLessFn( const &, CShortPathProbe * const &);
	CShortPathProbe(const Vector2D &, const Vector2D &, CDOTA_BaseNPC *);
	CShortPathProbe(const CShortPathProbe &);
	bool IsDone();
	float GetGoalDistance();
	float GetPathLength();
	int GetNumPathSteps();
	void GetPath(CUtlVector<Vector, CUtlMemory<Vector, int> > *, int);
	bool Advance(CUtlPriorityQueue<CShortPathProbe*, CDefUtlPriorityQueueLessFunc<CShortPathProbe*>, CUtlMemory<CShortPathProbe*, int>, CD);
	void AddStep(Vector2D);
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);
	~CShortPathProbe();

	// sizeof = 2296
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGridNavPath::CGridNavPath  (line 15, @0x0000000002673040, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Vector, ~CUtlVector
// calls: CountdownTimer::CountdownTimer, CMemAllocSystemInitialize, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition, CDOTABehaviorCommandPatrol::CDOTABehaviorCommandPatrol, CDOTABehaviorCommandMoveToRuneToTake::CDOTABehaviorCommandMoveToRuneToTake, CDOTABehaviorCommandMoveToItemToTake::CDOTABehaviorCommandMoveToItemToTake, CDOTABehaviorCommandMoveToTargetToAttack::CDOTABehaviorCommandMoveToTargetToAttack, CDOTABehaviorCommandMoveToNPC::CDOTABehaviorCommandMoveToNPC, CDOTABehaviorCommandMoveToPositionToCast::CDOTABehaviorCommandMoveToPositionToCast, CDOTABehaviorCommandMoveToPositionToDropItem::CDOTABehaviorCommandMoveToPositionToDropItem, CDOTABehaviorCommandMoveToNPCToGive::CDOTABehaviorCommandMoveToNPCToGive, CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast, CDOTABehaviorCommandMoveToPosition::Update, CDOTABehaviorCompanion::OnStart (20 total)
void __fastcall CGridNavPath::CGridNavPath(CGridNavPath *const this)
{
  CountdownTimer *p_m_SkipAheadRecheckTimer; // rdi

  this->m_Positions.m_Size = 0;
  p_m_SkipAheadRecheckTimer = &this->m_SkipAheadRecheckTimer;
  p_m_SkipAheadRecheckTimer[-1]._vptr_CountdownTimer = 0;
  p_m_SkipAheadRecheckTimer[-1].m_duration.m_Value = 0.0;
  p_m_SkipAheadRecheckTimer[-1].m_timestamp.m_Value = 0.0;
  *&p_m_SkipAheadRecheckTimer[-1].m_bUseGlobalsTime = 0;
  CountdownTimer::CountdownTimer(p_m_SkipAheadRecheckTimer);
  this->m_bPartial = 0;
  this->m_vGoalPos.x = 0.0;
  this->m_vGoalPos.y = 0.0;
  this->m_vGoalPos.z = 0.0;
  this->m_flTargetDist = 0.0;
  this->m_ShortPath.m_Size = 0;
  this->m_ShortPath.m_Memory.m_pMemory = 0;
  this->m_ShortPath.m_Memory.m_nAllocationCount = 8;
  this->m_ShortPath.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize();
  this->m_ShortPath.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                           g_pMemAlloc,
                                           12LL * this->m_ShortPath.m_Memory.m_nAllocationCount);
  this->m_nCurShortPathIndex = 0;
  this->m_flShortPathRecomputeDistance = 0.0;
  CountdownTimer::CountdownTimer(&this->m_ShortPathRecentlyComputedTimer);
  this->m_bShortPathEndedEarly = 0;
  CountdownTimer::CountdownTimer(&this->m_RebuildTimer);
  this->m_bTurningToFacePath = 0;
  this->m_bMovingAlongPathSegment = 0;
  this->m_flTurnAngleToFacePath = 0.0;
}


// CGridNavPath::LimitPathingSearchDepth  (line 30, @0x0000000002658ff0, libserver.so)  // inlines: Clamp<float>
// globals: CGridNavPath::m_flSearchDepthLimit
void __fastcall CGridNavPath::LimitPathingSearchDepth(float a1, float flLimit)
{
  float v2; // xmm1_4

  v2 = 0.0;
  if ( a1 >= 0.0 )
    v2 = fminf(1.0, a1);
  CGridNavPath::m_flSearchDepthLimit = v2;
}


// CGridNavPath::BuildDirectional  (line 44, @0x000000000267a700, libserver.so)  // inlines: AddToTail, CopyConstruct<Vector>, Element, GrowMemory, NetworkStateChanged, Set, Start, operator=, operator=<float>, operator[]
// calls: CBaseEntity::GetAbsOrigin, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CountdownTimer::Now, CUtlMemory<Vector, int>::Grow
// callers: CGridNavPath::Rebuild, CDOTABehaviorMoveTo::Update
void __fastcall CGridNavPath::BuildDirectional(
        CGridNavPath *const this,
        CDOTA_BaseNPC *pNPC,
        const Vector *const vGoal)
{
  vec_t z; // xmm0_4
  float v6; // xmm0_4
  __int64 m_Size; // r13
  int v8; // eax
  Vector *v9; // rax
  __int64 v10; // r13
  int v11; // eax
  Vector *v12; // rax
  float v13; // [rsp+Ch] [rbp-24h]

  CBaseEntity::GetAbsOrigin(pNPC);
  this->m_vGoalPos.x = vGoal->x;
  this->m_vGoalPos.y = vGoal->y;
  z = vGoal->z;
  this->m_flTargetDist = 0.0;
  this->m_bDirectional = 1;
  this->m_vGoalPos.z = z;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_Positions);
  this->m_nCurPositionIndex = 0;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_ShortPath);
  this->m_nCurShortPathIndex = 0;
  this->m_bShortPathEndedEarly = 0;
  this->m_bTurningToFacePath = 0;
  this->m_bMovingAlongPathSegment = 0;
  v6 = CountdownTimer::Now(&this->m_RebuildTimer) + 0.2;
  if ( v6 != this->m_RebuildTimer.m_timestamp.m_Value )
  {
    v13 = v6;
    (*(this->m_RebuildTimer._vptr_CountdownTimer + 2))(&this->m_RebuildTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_RebuildTimer.m_timestamp.m_Value = v13;
  }
  if ( this->m_RebuildTimer.m_duration.m_Value == 0.2 )
  {
    m_Size = this->m_Positions.m_Size;
    v8 = this->m_Positions.m_Size;
    if ( m_Size != this->m_Positions.m_Memory.m_nAllocationCount )
      goto LABEL_5;
  }
  else
  {
    (*(this->m_RebuildTimer._vptr_CountdownTimer + 2))(&this->m_RebuildTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Size = this->m_Positions.m_Size;
    this->m_RebuildTimer.m_duration.m_Value = 0.2;
    v8 = m_Size;
    if ( m_Size != this->m_Positions.m_Memory.m_nAllocationCount )
      goto LABEL_5;
  }
  CUtlMemory<Vector,int>::Grow(&this->m_Positions.m_Memory, 1);
  v8 = this->m_Positions.m_Size;
LABEL_5:
  this->m_Positions.m_Size = v8 + 1;
  v9 = &this->m_Positions.m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
  {
    *&v9->x = *&vGoal->x;
    v9->z = vGoal->z;
  }
  v10 = this->m_ShortPath.m_Size;
  v11 = this->m_ShortPath.m_Size;
  if ( v10 == this->m_ShortPath.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<Vector,int>::Grow(&this->m_ShortPath.m_Memory, 1);
    v11 = this->m_ShortPath.m_Size;
  }
  this->m_ShortPath.m_Size = v11 + 1;
  v12 = &this->m_ShortPath.m_Memory.m_pMemory[v10];
  if ( v12 != 0 )
  {
    *&v12->x = *&vGoal->x;
    v12->z = vGoal->z;
  }
  this->m_bPartial = 0;
}


// CGridNavPath::Build  (line 69, @0x000000000268e000, libserver.so)  // inlines: AddToTail, Base, CEntityHandle, CHandle, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<Vector>, Element, FStrEq, GetBool, GetEHandle, GetEntryIndex, GetFurthestPathPoint, GetInt, GetSerialNumber, GridPosToWorldCenterX, GridPosToWorldCenterY, GrowMemory, HasFlyMovementCapability, HasMovementCapability, InState, Length2DSqr, NetworkStateChanged, Purge, Purge_FixedGrowable, RemoveAll, Set, SetDestinationVector, Start, VectorSubtract, WorldToGridPosX, WorldToGridPosY, _V_strcmp, operator-, operator=, operator=<float>, operator[], ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: Plat_FloatTime, CBaseEntity::GetAbsOrigin, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CountdownTimer::Now, CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, CGridNav::SetPositionBlocked2x2, CGridNavPath::TrySkipAhead, CGridNavPath::ComputeShortPath, floorf, CGridNav::BuildPath, CUtlMemory<Vector, int>::Grow (19 total)
// callers: CGridNavPath::Rebuild, CGridNavPath::Update, CDOTABehaviorMoveTo::Update
// strings: "map tree", "Pathing took %.4fms (%.0f %.0f) -> (%.0f %.0f)\n"
void __fastcall CGridNavPath::Build(
        CGridNavPath *const this,
        CDOTA_BaseNPC *pNPC,
        const Vector *const vGoal,
        __m128i flTargetDist)
{
  float v6; // r12d
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm3_4
  vec_t y; // xmm2_4
  vec_t z; // xmm0_4
  float v12; // xmm0_4
  float m_flEdgeSize; // xmm7_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // cx
  float m_flCollisionPadding; // r12d
  ObstructionRelationshipClass_t v17; // eax
  __int64 v18; // rsi
  vec_t v19; // eax
  IntersectionRecord_t *m_pMemory; // rax
  IntersectionRecord_t *v21; // rdx
  const ObstructionRecord_t *m_pObsRec; // r12
  CObstructionObject *m_pObstructionObject; // rdi
  const char *v24; // rax
  float v25; // xmm0_4
  float v26; // xmm1_4
  int m_nValue; // eax
  float v28; // xmm3_4
  bool v29; // r12
  __int64 m_Size; // r12
  int v31; // eax
  Vector *v32; // rax
  float v33; // xmm3_4
  int v34; // r13d
  float v35; // xmm2_4
  __int64 v36; // r13
  float v37; // xmm0_4
  Vector *v38; // rax
  int v39; // r12d
  Vector *v40; // rax
  __int64 v41; // r13
  int v42; // eax
  int v43; // edx
  Vector *v44; // rax
  Vector *v45; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t *m_Data; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t v47; // cl
  __int64 v48; // r12
  int v49; // eax
  Vector *v50; // rax
  uint32 v51; // eax
  __int64 v52; // r12
  int v53; // eax
  Vector *v54; // rax
  __int64 v55; // r12
  int v56; // eax
  Vector *v57; // rax
  Vector *v58; // r12
  float v59; // xmm1_4
  Vector *v60; // r12
  vec_t *v61; // rax
  vec_t v62; // xmm1_4
  vec_t v63; // xmm0_4
  double v64; // xmm0_8
  float v65; // xmm0_4
  uint32 v66; // eax
  void (__fastcall *v67)(_QWORD *, CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t *, double); // rdx
  bool bTreeFound; // [rsp+2Bh] [rbp-305h]
  float m_flOffsetX; // [rsp+2Ch] [rbp-304h]
  int nGoalGridPosYa; // [rsp+30h] [rbp-300h]
  __int64 nGoalGridPosY; // [rsp+30h] [rbp-300h]
  float nGoalGridPosX; // [rsp+34h] [rbp-2FCh]
  float vAdjustedGoal; // [rsp+38h] [rbp-2F8h]
  float v74; // [rsp+4Ch] [rbp-2E4h]
  double flGridNavPath_startTime; // [rsp+50h] [rbp-2E0h]
  int nStartGridPosX; // [rsp+58h] [rbp-2D8h]
  float v77; // [rsp+60h] [rbp-2D0h]
  float v78; // [rsp+64h] [rbp-2CCh]
  float v79; // [rsp+68h] [rbp-2C8h]
  float v80; // [rsp+68h] [rbp-2C8h]
  float v81; // [rsp+68h] [rbp-2C8h]
  float v82; // [rsp+6Ch] [rbp-2C4h]
  float v83; // [rsp+6Ch] [rbp-2C4h]
  float v84; // [rsp+6Ch] [rbp-2C4h]
  float v85; // [rsp+6Ch] [rbp-2C4h]
  int entity; // [rsp+70h] [rbp-2C0h]
  Vector vTreePos; // [rsp+80h] [rbp-2B0h] BYREF
  GridNavDirectionVec_t dirPath; // [rsp+90h] [rbp-2A0h] BYREF
  CollisionResultList_t intersectionRecords; // [rsp+160h] [rbp-1D0h] BYREF
  unsigned __int64 v90; // [rsp+2F8h] [rbp-38h]

  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(flTargetDist));
  v90 = __readfsqword(0x28u);
  flGridNavPath_startTime = Plat_FloatTime();
  if ( (pNPC->m_iMoveCapabilities & 3) == 0
    && (BYTE3(pNPC->m_nUnitState64.m_Value) & 1 | ((pNPC->m_nUnitState64.m_Value & 0x200000000LL) != 0)) == 0 )
  {
    return;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(pNPC);
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  this->m_vGoalPos.x = vGoal->x;
  v74 = x;
  v77 = y;
  this->m_vGoalPos.y = vGoal->y;
  z = vGoal->z;
  this->m_flTargetDist = v6;
  this->m_bDirectional = 0;
  this->m_vGoalPos.z = z;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_Positions);
  this->m_nCurPositionIndex = 0;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_ShortPath);
  this->m_nCurShortPathIndex = 0;
  this->m_bShortPathEndedEarly = 0;
  this->m_bTurningToFacePath = 0;
  this->m_bMovingAlongPathSegment = 0;
  v12 = CountdownTimer::Now(&this->m_RebuildTimer) + 2.0;
  if ( v12 != this->m_RebuildTimer.m_timestamp.m_Value )
  {
    v82 = v12;
    (*(this->m_RebuildTimer._vptr_CountdownTimer + 2))(&this->m_RebuildTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_RebuildTimer.m_timestamp.m_Value = v82;
  }
  if ( this->m_RebuildTimer.m_duration.m_Value != 2.0 )
  {
    (*(this->m_RebuildTimer._vptr_CountdownTimer + 2))(&this->m_RebuildTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_RebuildTimer.m_duration.m_Value = 2.0;
  }
  if ( g_GridNav.m_bLoaded )
  {
    if ( (pNPC->m_iMoveCapabilities & 2) != 0
      || (BYTE3(pNPC->m_nUnitState64.m_Value) & 1 | ((pNPC->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0 )
    {
      m_Size = this->m_Positions.m_Size;
      v31 = this->m_Positions.m_Size;
      if ( m_Size == this->m_Positions.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&this->m_Positions.m_Memory, 1);
        v31 = this->m_Positions.m_Size;
      }
      this->m_Positions.m_Size = v31 + 1;
      v32 = &this->m_Positions.m_Memory.m_pMemory[m_Size];
      if ( v32 != 0 )
      {
        *&v32->x = *&vGoal->x;
        v32->z = vGoal->z;
      }
      this->m_bPartial = 0;
      CGridNavPath::TrySkipAhead(this, pNPC);
      CGridNavPath::ComputeShortPath(this, pNPC, 0);
    }
    else
    {
      intersectionRecords.m_Size = 0;
      intersectionRecords.m_Memory.m_nAllocationCount = 16;
      intersectionRecords.m_Memory.m_nGrowSize = 0x80000000;
      entity = -1;
      m_flEdgeSize = g_GridNav.m_flEdgeSize;
      intersectionRecords.m_Memory.m_pMemory = &intersectionRecords.m_Memory.m_FixedMemory;
      m_pEntity = pNPC->m_pEntity;
      v78 = m_flEdgeSize;
      if ( m_pEntity != 0 )
      {
        v15 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        entity = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
      }
      m_flCollisionPadding = pNPC->m_flCollisionPadding;
      v17 = (*(pNPC->_vptr_IHandleEntity + 454))(pNPC);
      CGridNav::PrepareObstructionManager(&g_GridNav, 0.0, 0, 0x10u, v17, m_flCollisionPadding);
      LODWORD(vTreePos.x) = entity;
      CGridNav::CheckForCollisions(&g_GridNav, vGoal, &intersectionRecords, &vTreePos, 0);
      nGoalGridPosX = vGoal->x;
      vAdjustedGoal = vGoal->y;
      v19 = vec3_origin.z;
      *&vTreePos.x = *&vec3_origin.x;
      vTreePos.z = v19;
      if ( intersectionRecords.m_Size <= 0 )
      {
        bTreeFound = 0;
        v29 = 0;
      }
      else
      {
        m_pMemory = intersectionRecords.m_Memory.m_pMemory;
        v21 = &intersectionRecords.m_Memory.m_pMemory[(intersectionRecords.m_Size - 1) + 1];
        while ( 1 )
        {
          m_pObsRec = m_pMemory->m_pObsRec;
          if ( m_pObsRec->m_ObsType == 1 && (m_pObsRec->m_ObjectProperties & 0x20) != 0 )
            break;
          if ( ++m_pMemory == v21 )
            goto LABEL_31;
        }
        m_pObstructionObject = m_pObsRec->m_pObstructionObject;
        if ( m_pObstructionObject != 0
          && ((v24 = (*(m_pObstructionObject->_vptr_CObstructionObject + 5))(m_pObstructionObject, v18, v21)) == "map tree"
           || strcmp(v24, "map tree") == 0) )
        {
          v25 = (m_pObsRec->m_fYMin + m_pObsRec->m_fYMax) * 0.5;
          v26 = (m_pObsRec->m_fXMin + m_pObsRec->m_fXMax) * 0.5;
          m_nValue = dota_path_remove_goal_tree.m_pParent->m_Value.m_nValue;
          vTreePos.z = 0.0;
          vTreePos.y = v25;
          v28 = v25 - vGoal->y;
          vTreePos.x = v26;
          if ( (((v26 - vGoal->x) * (v26 - vGoal->x)) + (v28 * v28)) < 0.0099999998 )
          {
            v29 = 1;
            nGoalGridPosX = v26 - (v78 * 0.5);
            vAdjustedGoal = v25 - (v78 * 0.5);
LABEL_25:
            CGridNav::SetPositionBlocked2x2(&g_GridNav, &vTreePos, 0);
            bTreeFound = 1;
            goto LABEL_32;
          }
          if ( m_nValue != 0 )
          {
            v29 = 0;
            goto LABEL_25;
          }
          bTreeFound = 0;
          v29 = 0;
        }
        else
        {
LABEL_31:
          bTreeFound = 0;
          v29 = 0;
        }
      }
LABEL_32:
      v33 = g_GridNav.m_flEdgeSize;
      v83 = v33;
      m_flOffsetX = g_GridNav.m_flOffsetX;
      v79 = 0.5 * v33;
      nStartGridPosX = floorf(((v74 - m_flOffsetX) + (0.5 * v33)) / v33);
      nGoalGridPosYa = SLODWORD(g_GridNav.m_flOffsetY);
      v34 = floorf(((v77 - *&nGoalGridPosYa) + v79) / v83);
      HIDWORD(nGoalGridPosY) = floorf(((nGoalGridPosX - m_flOffsetX) + v79) / v83);
      LODWORD(nGoalGridPosY) = floorf(((vAdjustedGoal - *&nGoalGridPosYa) + v79) / v83);
      if ( __PAIR64__(nStartGridPosX, v34) != nGoalGridPosY )
      {
        dirPath.0 = 13369344;
        this->m_bPartial = CGridNav::BuildPath(
                             &g_GridNav,
                             nStartGridPosX,
                             v34,
                             SHIDWORD(nGoalGridPosY),
                             nGoalGridPosY,
                             &dirPath,
                             this->m_flTargetDist,
                             v29,
                             pNPC,
                             -1,
                             0) == 1;
        if ( bTreeFound )
          CGridNav::SetPositionBlocked2x2(&g_GridNav, &vTreePos, 1);
        v35 = v34;
        v36 = this->m_Positions.m_Size;
        v37 = g_GridNav.m_flEdgeSize;
        v80 = (v35 * v37) + g_GridNav.m_flOffsetY;
        v84 = (v37 * nStartGridPosX) + g_GridNav.m_flOffsetX;
        if ( v36 == this->m_Positions.m_Memory.m_nAllocationCount )
          CUtlMemory<Vector,int>::Grow(&this->m_Positions.m_Memory, 1);
        v38 = this->m_Positions.m_Memory.m_pMemory;
        v39 = this->m_Positions.m_Size + 1;
        this->m_Positions.m_Size = v39;
        v40 = &v38[v36];
        if ( v40 != 0 )
        {
          v40->z = 0.0;
          v40->x = v84;
          v40->y = v80;
          v39 = this->m_Positions.m_Size;
        }
        if ( dirPath.m_nCount > 0 )
        {
          v41 = 0;
          while ( 1 )
          {
            if ( dirPath.m_nAllocated != 0 )
            {
              m_Data = dirPath.m_FixedAlloc.m_Data;
              if ( dirPath.m_nAllocated >= 0xCD )
                m_Data = dirPath.m_pElements;
            }
            else
            {
              m_Data = 0;
            }
            v47 = m_Data[v41];
            if ( v47 <= 7u )
            {
              if ( ((1LL << v47) & 0x83) != 0 )
              {
                v80 = v80 + v78;
              }
              else if ( ((1LL << v47) & 0x38) != 0 )
              {
                v80 = v80 - v78;
              }
            }
            if ( v47 == 0 )
              goto LABEL_43;
            if ( v47 > 3u )
              break;
            v42 = v39;
            v84 = v84 + v78;
            if ( this->m_Positions.m_Memory.m_nAllocationCount == v39 )
            {
LABEL_57:
              CUtlMemory<Vector,int>::Grow(&this->m_Positions.m_Memory, 1);
              v42 = this->m_Positions.m_Size;
            }
LABEL_44:
            v43 = v42 + 1;
            v44 = this->m_Positions.m_Memory.m_pMemory;
            this->m_Positions.m_Size = v43;
            v45 = &v44[v39];
            if ( v45 != 0 )
            {
              v45->z = 0.0;
              v45->x = v84;
              v45->y = v80;
              v39 = this->m_Positions.m_Size;
            }
            else
            {
              v39 = v43;
            }
            if ( dirPath.m_nCount <= ++v41 )
              goto LABEL_83;
          }
          if ( (v47 - 5) <= 2u )
            v84 = v84 - v78;
LABEL_43:
          v42 = v39;
          if ( this->m_Positions.m_Memory.m_nAllocationCount == v39 )
            goto LABEL_57;
          goto LABEL_44;
        }
LABEL_83:
        v58 = &this->m_Positions.m_Memory.m_pMemory[v39 - 1];
        v59 = g_GridNav.m_flEdgeSize;
        v85 = v59;
        v81 = 0.5 * v59;
        if ( HIDWORD(nGoalGridPosY) == floorf(((v58->x - g_GridNav.m_flOffsetX) + (0.5 * v59)) / v59)
          && nGoalGridPosY == floorf(((v58->y - g_GridNav.m_flOffsetY) + v81) / v85) )
        {
          CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::AddToTail(&this->m_Positions, vGoal);
        }
        CGridNavPath::TrySkipAhead(this, pNPC);
        CGridNavPath::ComputeShortPath(this, pNPC, 0);
        if ( CDOTA_BaseNPC::IsAllowedToMove(pNPC) )
        {
          v60 = &this->m_ShortPath.m_Memory.m_pMemory[this->m_nCurShortPathIndex];
          v61 = (*(pNPC->_vptr_IHandleEntity + 376))(pNPC);
          v62 = v60->y;
          v63 = v60->z;
          v61[37] = v60->x;
          v61[38] = v62;
          v61[39] = v63;
        }
        v64 = Plat_FloatTime();
        if ( dota_path_report_time.m_pParent->m_Value.m_nValue != 0 )
        {
          v64 = v64 - flGridNavPath_startTime;
          if ( v64 > 0.00001 )
          {
            v65 = v64 * 1000.0;
            *&v64 = Msg(
                      "Pathing took %.4fms (%.0f %.0f) -> (%.0f %.0f)\n",
                      v65,
                      v74,
                      v77,
                      this->m_vGoalPos.x,
                      this->m_vGoalPos.y).m128_u64[0];
          }
        }
        dirPath.m_nCount = 0;
        if ( dirPath.m_nAllocated > 0xCC )
        {
          v67 = *(*g_pMemAlloc + 16LL);
          if ( dirPath.m_nAllocated != 0 )
            v67(g_pMemAlloc, dirPath.m_pElements, v64);
          else
            v67(g_pMemAlloc, 0, v64);
        }
        intersectionRecords.m_Size = 0;
        dirPath.m_nAllocated = 204;
        v66 = intersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
        if ( intersectionRecords.m_Memory.m_nAllocationCount >= 0
          && intersectionRecords.m_Memory.m_pMemory != &intersectionRecords.m_Memory.m_FixedMemory )
        {
          if ( intersectionRecords.m_Memory.m_pMemory != 0 && v66 == 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v64);
          return;
        }
        if ( v66 != 0 )
          return;
LABEL_79:
        CUtlMemory<IntersectionRecord_t,int>::Purge(&intersectionRecords.m_Memory);
        return;
      }
      v48 = this->m_Positions.m_Size;
      v49 = this->m_Positions.m_Size;
      if ( v48 == this->m_Positions.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&this->m_Positions.m_Memory, 1);
        v49 = this->m_Positions.m_Size;
      }
      this->m_Positions.m_Size = v49 + 1;
      v50 = &this->m_Positions.m_Memory.m_pMemory[v48];
      if ( v50 != 0 )
      {
        *&v50->x = *&vGoal->x;
        v50->z = vGoal->z;
      }
      this->m_bPartial = 0;
      CGridNavPath::ComputeShortPath(this, pNPC, 0);
      if ( bTreeFound )
        CGridNav::SetPositionBlocked2x2(&g_GridNav, &vTreePos, 1);
      intersectionRecords.m_Size = 0;
      v51 = intersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
      if ( intersectionRecords.m_Memory.m_nAllocationCount < 0
        || intersectionRecords.m_Memory.m_pMemory == &intersectionRecords.m_Memory.m_FixedMemory )
      {
        if ( v51 != 0 )
          return;
        goto LABEL_79;
      }
      if ( intersectionRecords.m_Memory.m_pMemory != 0 && v51 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
  }
  else
  {
    v52 = this->m_Positions.m_Size;
    v53 = this->m_Positions.m_Size;
    if ( v52 == this->m_Positions.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<Vector,int>::Grow(&this->m_Positions.m_Memory, 1);
      v53 = this->m_Positions.m_Size;
    }
    this->m_Positions.m_Size = v53 + 1;
    v54 = &this->m_Positions.m_Memory.m_pMemory[v52];
    if ( v54 != 0 )
    {
      *&v54->x = *&vGoal->x;
      v54->z = vGoal->z;
    }
    v55 = this->m_ShortPath.m_Size;
    v56 = this->m_ShortPath.m_Size;
    if ( v55 == this->m_ShortPath.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<Vector,int>::Grow(&this->m_ShortPath.m_Memory, 1);
      v56 = this->m_ShortPath.m_Size;
    }
    this->m_ShortPath.m_Size = v56 + 1;
    v57 = &this->m_ShortPath.m_Memory.m_pMemory[v55];
    if ( v57 != 0 )
    {
      *&v57->x = *&vGoal->x;
      v57->z = vGoal->z;
    }
    this->m_bPartial = 0;
  }
}


// CGridNavPath::Rebuild  (line 259, @0x000000000268ede0, libserver.so)  // inlines: IsElapsed
// calls: CountdownTimer::Now, CGridNavPath::Build, CGridNavPath::BuildDirectional
// callers: CDOTABehaviorInvade::OnContact, CDOTABehaviorNeutralHome::OnContact, CDOTABehaviorMoveToNPCToAttack::OnContact, CDOTABehaviorNeutralAggroReturn::OnContact, CDOTABehaviorMoveTo::OnContact, CDOTABehaviorMoveTo::Update
void __fastcall CGridNavPath::Rebuild(CGridNavPath *const this, CDOTA_BaseNPC *pNPC)
{
  if ( CountdownTimer::Now(&this->m_RebuildTimer) >= this->m_RebuildTimer.m_timestamp.m_Value
    && this->m_nCurPositionIndex < this->m_Positions.m_Size )
  {
    if ( this->m_bDirectional )
      CGridNavPath::BuildDirectional(this, pNPC, &this->m_vGoalPos);
    else
      CGridNavPath::Build(this, pNPC, &this->m_vGoalPos, LODWORD(this->m_flTargetDist));
  }
}


// CGridNavPath::Update  (line 280, @0x000000000268ee50, libserver.so)  // inlines: Color, FastSqrt, GetFurthestPathPoint, GetModifier_Percentage_Multiplicative, GetTurnRate, HasFlyMovementCapability, InState, IsElapsed, IsListeningToEvent, Length2D, Length2DSqr, SetColor, Tail, UTIL_AngleDiff, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=, operator[]
// calls: CDOTA_BaseNPC::IsAllowedToMove, CDOTA_BaseNPC::ShouldDrawPath, GetPositionOnGround, NDebugOverlay::Line, NDebugOverlay::Sphere, CountdownTimer::Now, UTIL_VecToYaw, CBaseEntity::GetAbsAngles, AngleDiff, CDOTALocomotor::StopMovement, CGridNavPath::ComputePathLength, CGridNavPath::ComputeShortPath (17 total)
// callers: CDOTABehaviorMoveTo::Update
void __fastcall CGridNavPath::Update(CGridNavPath *const this, CDOTA_BaseNPC *pNPC)
{
  __int64 v4; // rax
  INextBot *v5; // r14
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rdx
  int v9; // edx
  Vector *v10; // rsi
  float v11; // xmm3_4
  __int64 v12; // rcx
  float x; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  __int64 v17; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  __int64 v19; // rax
  int v20; // r14d
  int m_Size; // edx
  __int64 v22; // r13
  const Vector *v23; // rdi
  bool v24; // cc
  __int64 v25; // r14
  int i; // r13d
  unsigned int v27; // ecx
  int v28; // eax
  __int64 m_nCurPositionIndex; // rsi
  float v30; // xmm0_4
  int m_nCurShortPathIndex; // r12d
  Vector *v32; // rcx
  __int64 v33; // rdx
  Vector *v34; // rax
  float y; // xmm1_4
  float v36; // xmm1_4
  __int64 v37; // rax
  const QAngle *AbsAngles; // rax
  float v39; // xmm2_4
  float v40; // xmm1_4
  float m_flTurnAngleToFacePath; // xmm0_4
  CDOTALocomotor *v42; // rax
  float v43; // xmm0_4
  int v44; // edx
  Vector *m_pMemory; // rax
  float *p_x; // rsi
  float *v47; // rax
  float v48; // xmm1_4
  __int64 v49; // rax
  CDOTALocomotor *v50; // rax
  float v51; // xmm1_4
  float angles; // [rsp+10h] [rbp-C0h]
  float anglesa; // [rsp+10h] [rbp-C0h]
  float flYawToTarget; // [rsp+18h] [rbp-B8h]
  float flYawToTargeta; // [rsp+18h] [rbp-B8h]
  Vector vCurPos; // [rsp+20h] [rbp-B0h] BYREF
  Vector vShortTarget; // [rsp+30h] [rbp-A0h] BYREF
  Vector vToShortTarget; // [rsp+40h] [rbp-90h] BYREF
  CDOTA_TurnData turnData; // [rsp+50h] [rbp-80h] BYREF
  Color traversedPathColor; // [rsp+80h] [rbp-50h]
  Color remainingPathColor; // [rsp+90h] [rbp-40h]
  unsigned __int64 v62; // [rsp+98h] [rbp-38h]
  Vector PositionOnGround; // 0:kr20_12.12
  Vector v64; // 0:kr34_12.12

  v62 = __readfsqword(0x28u);
  if ( this->m_nCurPositionIndex >= this->m_Positions.m_Size || this->m_nCurShortPathIndex >= this->m_ShortPath.m_Size )
  {
    v4 = (*(pNPC->_vptr_IHandleEntity + 376))(pNPC);
    (*(*v4 + 616LL))(v4);
    this->m_bTurningToFacePath = 0;
    this->m_bMovingAlongPathSegment = 0;
    return;
  }
  v5 = &pNPC->INextBot;
  v6 = (*(pNPC->_vptr_INextBotEventResponder + 73))(&pNPC->INextBot);
  v7 = (pNPC->m_iMoveCapabilities & 2) == 0;
  v8 = *v6;
  LODWORD(v6) = *(v6 + 8);
  *&vCurPos.x = v8;
  LODWORD(vCurPos.z) = v6;
  if ( v7
    && (BYTE3(pNPC->m_nUnitState64.m_Value) & 1 | ((pNPC->m_nUnitState64.m_Value & 0x200000000LL) != 0)) == 0
    && g_GridNav.m_bLoaded )
  {
    if ( this->m_bPartial && (m_nCurPositionIndex = this->m_nCurPositionIndex) >= this->m_Positions.m_Size / 2 )
    {
      m_pMemory = this->m_Positions.m_Memory.m_pMemory;
      p_x = &m_pMemory[m_nCurPositionIndex].x;
      angles = vCurPos.y;
      v47 = &m_pMemory[this->m_Positions.m_Size - 1].x;
      flYawToTarget = vCurPos.x;
      if ( (15.0 * g_GridNav.m_flEdgeSize) > (fsqrt(
                                                ((*p_x - vCurPos.x) * (*p_x - vCurPos.x))
                                              + ((p_x[1] - vCurPos.y) * (p_x[1] - vCurPos.y)))
                                            + fsqrt(
                                                ((*v47 - *p_x) * (*v47 - *p_x))
                                              + ((v47[1] - p_x[1]) * (v47[1] - p_x[1])))) )
      {
        CGridNavPath::Build(this, pNPC, &this->m_vGoalPos, LODWORD(this->m_flTargetDist));
        this->m_bTurningToFacePath = 0;
        this->m_bMovingAlongPathSegment = 0;
      }
    }
    else
    {
      flYawToTarget = vCurPos.x;
      angles = vCurPos.y;
    }
    if ( CountdownTimer::Now(&this->m_SkipAheadRecheckTimer) >= this->m_SkipAheadRecheckTimer.m_timestamp.m_Value
      && CGridNavPath::TrySkipAhead(this, pNPC) )
    {
      CGridNavPath::ComputeShortPath(this, pNPC, 0);
    }
    v30 = CountdownTimer::Now(&this->m_ShortPathRecentlyComputedTimer);
    m_nCurShortPathIndex = this->m_nCurShortPathIndex;
    if ( v30 >= this->m_ShortPathRecentlyComputedTimer.m_timestamp.m_Value )
    {
      v43 = CGridNavPath::ComputePathLength(this, &vCurPos, &this->m_ShortPath, m_nCurShortPathIndex);
      if ( this->m_flShortPathRecomputeDistance >= v43 || v43 < 0.5 )
      {
        CGridNavPath::ComputeShortPath(this, pNPC, 0);
        m_nCurShortPathIndex = this->m_nCurShortPathIndex;
      }
    }
    v32 = this->m_ShortPath.m_Memory.m_pMemory;
    v33 = m_nCurShortPathIndex;
    v34 = &v32[v33];
    y = v32[v33].y;
    vShortTarget.x = v32[v33].x;
    vShortTarget.y = y;
    vShortTarget.z = v32[v33].z;
    v16 = ((vShortTarget.x - flYawToTarget) * (vShortTarget.x - flYawToTarget)) + ((y - angles) * (y - angles));
    if ( v16 < 1.9599999 )
    {
      if ( this->m_ShortPath.m_Size - 1 <= m_nCurShortPathIndex )
      {
        v44 = this->m_nCurPositionIndex;
        if ( v44 < this->m_Positions.m_Size - 1 )
        {
          this->m_nCurPositionIndex = v44 + 1;
          CGridNavPath::TrySkipAhead(this, pNPC);
          CGridNavPath::ComputeShortPath(this, pNPC, 0);
          v34 = &this->m_ShortPath.m_Memory.m_pMemory[this->m_nCurShortPathIndex];
        }
      }
      else
      {
        this->m_bTurningToFacePath = 0;
        this->m_nCurShortPathIndex = m_nCurShortPathIndex + 1;
        v34 = &v32[v33 + 1];
        this->m_bMovingAlongPathSegment = 0;
      }
      v36 = v34->y;
      vShortTarget.x = v34->x;
      vShortTarget.y = v36;
      vShortTarget.z = v34->z;
      if ( (((vShortTarget.x - flYawToTarget) * (vShortTarget.x - flYawToTarget)) + ((v36 - angles) * (v36 - angles))) < 0.25 )
        goto LABEL_10;
      goto LABEL_35;
    }
  }
  else
  {
    v9 = this->m_nCurShortPathIndex;
    v10 = this->m_ShortPath.m_Memory.m_pMemory;
    v11 = vCurPos.y;
    v12 = v9;
    x = v10[v12].x;
    v14 = v10[v12].y;
    vShortTarget.z = v10[v12].z;
    v15 = vCurPos.x;
    vShortTarget.x = x;
    vShortTarget.y = v14;
    v16 = ((x - vCurPos.x) * (x - vCurPos.x)) + ((v14 - vCurPos.y) * (v14 - vCurPos.y));
    if ( v16 >= 1.9599999 )
    {
      angles = vCurPos.y;
      flYawToTarget = vCurPos.x;
    }
    else
    {
      angles = vCurPos.y;
      flYawToTarget = vCurPos.x;
      if ( v9 < this->m_ShortPath.m_Size - 1 )
      {
        this->m_nCurShortPathIndex = v9 + 1;
        v48 = v10[v12 + 1].y;
        vShortTarget.x = v10[v12 + 1].x;
        vShortTarget.y = v48;
        vShortTarget.z = v10[v12 + 1].z;
        v16 = ((vShortTarget.x - v15) * (vShortTarget.x - v15)) + ((v48 - v11) * (v48 - v11));
      }
    }
  }
  if ( v16 >= 0.25 )
  {
LABEL_35:
    v37 = (*(pNPC->_vptr_IHandleEntity + 376))(pNPC);
    (*(*v37 + 744LL))(v37, &vShortTarget);
    if ( !this->m_bMovingAlongPathSegment )
    {
      vToShortTarget.y = vShortTarget.y - angles;
      vToShortTarget.x = vShortTarget.x - flYawToTarget;
      vToShortTarget.z = vShortTarget.z - vCurPos.z;
      UTIL_VecToYaw(&vToShortTarget);
      AbsAngles = CBaseEntity::GetAbsAngles(pNPC);
      v40 = fabs(AngleDiff(AbsAngles->y, v39));
      if ( this->m_bTurningToFacePath )
      {
        m_flTurnAngleToFacePath = this->m_flTurnAngleToFacePath;
      }
      else
      {
        v49 = pNPC->m_ModifierManager.m_buffsForModifiers[110];
        if ( v49 != 0xFF && pNPC->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v49].m_Size > 0 )
        {
          flYawToTargeta = v40;
          CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal(
            &pNPC->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_TURN_RATE_PERCENTAGE,
            &CModifierParams::s_Default);
          v40 = flYawToTargeta;
        }
        anglesa = v40;
        v50 = (*(pNPC->_vptr_IHandleEntity + 376))(pNPC);
        CDOTALocomotor::GetTurnData(v50, &turnData, v51);
        v40 = anglesa;
        if ( turnData.m_flImmediateMovementAngle < anglesa )
        {
          m_flTurnAngleToFacePath = turnData.m_flFullTurnMovementAngle;
          if ( anglesa < 180.0 )
            m_flTurnAngleToFacePath = ((turnData.m_flFullTurnMovementAngle - turnData.m_flImmediateMovementAngle)
                                     * ((anglesa - turnData.m_flImmediateMovementAngle)
                                      / (180.0 - turnData.m_flImmediateMovementAngle)))
                                    + turnData.m_flImmediateMovementAngle;
          this->m_flTurnAngleToFacePath = m_flTurnAngleToFacePath;
        }
        else
        {
          this->m_flTurnAngleToFacePath = anglesa;
          m_flTurnAngleToFacePath = anglesa;
        }
        this->m_bTurningToFacePath = 1;
      }
      if ( m_flTurnAngleToFacePath >= v40 )
        this->m_bMovingAlongPathSegment = 1;
    }
  }
LABEL_10:
  if ( CDOTA_BaseNPC::IsAllowedToMove(pNPC)
    && (this->m_bMovingAlongPathSegment || (*(pNPC->_vptr_IHandleEntity + 434))(pNPC) == 0) )
  {
    v17 = (*(pNPC->_vptr_IHandleEntity + 376))(pNPC);
    (*(*v17 + 528LL))(v17, &vShortTarget, 1.0);
    this->m_bTurningToFacePath = 0;
  }
  else
  {
    v42 = (*(pNPC->_vptr_IHandleEntity + 376))(pNPC);
    CDOTALocomotor::StopMovement(v42, 0);
    this->m_bMovingAlongPathSegment = 0;
  }
  if ( CDOTA_BaseNPC::ShouldDrawPath(pNPC) )
  {
    vptr_INextBotEventResponder = pNPC->_vptr_INextBotEventResponder;
    traversedPathColor._color[0] = -1;
    traversedPathColor._color[1] = -1;
    traversedPathColor._color[2] = -1;
    traversedPathColor._color[3] = -1;
    remainingPathColor._color[0] = -1;
    remainingPathColor._color[1] = 127;
    remainingPathColor._color[2] = -1;
    remainingPathColor._color[3] = -1;
    v19 = (vptr_INextBotEventResponder[73])(v5);
    v20 = this->m_nCurShortPathIndex;
    *&vToShortTarget.x = *v19;
    m_Size = this->m_ShortPath.m_Size;
    vToShortTarget.z = *(v19 + 8);
    if ( v20 < m_Size )
    {
      v22 = v20;
      do
      {
        ++v20;
        v23 = &this->m_ShortPath.m_Memory.m_pMemory[v22++];
        *&turnData.m_flMaxTurnSpeed = GetPositionOnGround(v23, pNPC);
        NDebugOverlay::Line(&vToShortTarget, &turnData, 0xFFu, 0, 0, 1, 0.01023);
        NDebugOverlay::Sphere(&turnData, &vec3_angle, 4.0, 0xFFu, 0, 0, 128, 0.01023, 1);
        m_Size = this->m_ShortPath.m_Size;
        vToShortTarget = *&turnData.m_flMaxTurnSpeed;
      }
      while ( m_Size > v20 );
    }
    *&turnData.m_flMaxTurnSpeed = GetPositionOnGround(&this->m_ShortPath.m_Memory.m_pMemory[m_Size - 1], pNPC);
    NDebugOverlay::Sphere(&turnData, &vec3_angle, 16.0, 0xFFu, 0, 0, 128, 0.01023, 1);
    PositionOnGround = GetPositionOnGround(this->m_Positions.m_Memory.m_pMemory, pNPC);
    v24 = this->m_Positions.m_Size <= 1;
    *&turnData.m_flMaxTurnSpeed = PositionOnGround;
    vToShortTarget = PositionOnGround;
    if ( !v24 )
    {
      v25 = 1;
      for ( i = 0; ; ++i )
      {
        v64 = GetPositionOnGround(&this->m_Positions.m_Memory.m_pMemory[v25], pNPC);
        v24 = this->m_nCurPositionIndex <= i;
        v27 = 255;
        *&turnData.m_flMaxTurnSpeed = v64;
        if ( v24 )
          v27 = 127;
        ++v25;
        NDebugOverlay::Line(&vToShortTarget, &turnData, 0xFFu, v27, 0xFFu, 1, 0.01023);
        v28 = this->m_Positions.m_Size;
        vToShortTarget.x = turnData.m_flMaxTurnSpeed;
        vToShortTarget.y = turnData.m_flTurnAcceleration;
        vToShortTarget.z = turnData.m_flTurnDeceleration;
        if ( v28 - 1 <= i + 1 )
          break;
      }
    }
  }
}


// CGridNavPath::ComputePathLength  (line 460, @0x0000000002659020, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// callers: CGridNavPath::TrySkipAhead, CGridNavPath::Update
float __fastcall CGridNavPath::ComputePathLength(
        CGridNavPath *const this,
        const Vector *const vMyPos,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const path,
        int nStartIndex)
{
  int m_Size; // edi
  float result; // xmm0_4
  float x; // xmm1_4
  float y; // xmm2_4
  Vector *m_pMemory; // rsi
  float *p_x; // rax
  float v10; // xmm4_4
  float v11; // xmm3_4
  __int64 v12; // [rsp-8h] [rbp-8h]

  m_Size = path->m_Size;
  if ( nStartIndex >= path->m_Size )
    return 0.0;
  result = 0.0;
  x = vMyPos->x;
  y = vMyPos->y;
  m_pMemory = path->m_Memory.m_pMemory;
  p_x = &m_pMemory[nStartIndex].x;
  while ( 1 )
  {
    v10 = *p_x;
    p_x += 3;
    v11 = *(p_x - 2);
    *(&v12 - 1) = ((v10 - x) * (v10 - x)) + ((v11 - y) * (v11 - y));
    result = result + fsqrt(*(&v12 - 1));
    if ( p_x == &m_pMemory[(m_Size - 1 - nStartIndex) + 1 + nStartIndex] )
      break;
    x = v10;
    y = v11;
  }
  return result;
}


// TestCollision  (line 474, @0x0000000002658260, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, GetEHandle, GetEntryIndex, GetSerialNumber, Length2DSqr, RemoveAll, Set, VectorSubtract, operator-, operator[]
// calls: CGridNav::CheckForCollisionsWithLine, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, sqrtf
// callers: TestCollision, CGridNavPath::TrySkipAhead, CGridNavPath::ComputeShortPathGoal, CShortPathProbe::Advance, CGridNavPath::ComputeShortPath
// globals: `guard variable for'TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords, TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords, __dso_handle, CUtlVectorFixedGrowable<IntersectionRecord_t,16ul>::~CUtlVectorFixedGrowable()
bool __fastcall TestCollision(
        const Vector *const v1,
        const Vector *const v2,
        float *outDistance,
        const ObstructionRecord_t **const outObstruction,
        CDOTA_BaseNPC *pIgnoreNPC,
        int nObcheckFlags)
{
  uint32 v10; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v12; // si
  IntersectionRecord_t *m_pMemory; // r9
  IntersectionType_t m_RecordType; // r8d
  const ObstructionRecord_t *m_pObsRec; // r14
  IntersectionRecord_t *v16; // rax
  float v17; // xmm3_4
  char v18; // cl
  IntersectionRecord_t *v19; // rdx
  bool result; // al
  int v21; // eax
  int nObcheckFlagsa; // [rsp+4h] [rbp-4Ch]
  CDOTA_BaseNPC *pIgnoreNPCa; // [rsp+8h] [rbp-48h]
  EHANDLE ignoreHandle; // [rsp+20h] [rbp-30h] BYREF

  if ( outDistance != 0 )
    *outDistance = 0.0;
  if ( `guard variable for'TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords == 0 )
  {
    nObcheckFlagsa = nObcheckFlags;
    pIgnoreNPCa = pIgnoreNPC;
    v21 = __cxa_guard_acquire(&`guard variable for'TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords);
    pIgnoreNPC = pIgnoreNPCa;
    nObcheckFlags = nObcheckFlagsa;
    if ( v21 != 0 )
    {
      TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Size = 0;
      TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Memory.m_pMemory = &TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Memory.m_FixedMemory;
      TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Memory.m_nAllocationCount = 16;
      TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Memory.m_nGrowSize = 0x80000000;
      __cxa_guard_release(&`guard variable for'TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords);
      __cxa_atexit(
        CUtlVectorFixedGrowable<IntersectionRecord_t,16ul>::~CUtlVectorFixedGrowable,
        &TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords,
        &_dso_handle);
      nObcheckFlags = nObcheckFlagsa;
      pIgnoreNPC = pIgnoreNPCa;
    }
  }
  v10 = -1;
  TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Size = 0;
  if ( pIgnoreNPC != 0 )
  {
    m_pEntity = pIgnoreNPC->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v12 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v10 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
    }
  }
  ignoreHandle.m_Index = v10;
  CGridNav::CheckForCollisionsWithLine(
    &g_GridNav,
    v1,
    v2,
    &TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords,
    &ignoreHandle.m_Index,
    nObcheckFlags);
  if ( TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Size <= 0 )
    return 0;
  m_pMemory = TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Memory.m_pMemory;
  m_RecordType = TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Memory.m_pMemory->m_RecordType;
  if ( TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Memory.m_pMemory->m_RecordType != IntersectionType_t::cEndPoint1IsContained )
  {
    m_pObsRec = 0;
    v16 = TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Memory.m_pMemory
        + 1;
    v17 = 0.0;
    v18 = 0;
    v19 = &TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Memory.m_pMemory[(TestCollision(Vector const&,Vector const&,float *,ObstructionRecord_t const*&,CDOTA_BaseNPC *,int)::intersectionRecords.m_Size - 1) + 1];
    do
    {
      if ( (m_RecordType - 1) > 1
        || v17 <= (((m_pMemory->m_IntersectionPoint.X - v1->x) * (m_pMemory->m_IntersectionPoint.X - v1->x))
                 + ((m_pMemory->m_IntersectionPoint.Y - v1->y) * (m_pMemory->m_IntersectionPoint.Y - v1->y)))
        && v18 != 0 )
      {
        if ( v16 == v19 )
          goto LABEL_18;
      }
      else
      {
        m_pObsRec = m_pMemory->m_pObsRec;
        v17 = ((m_pMemory->m_IntersectionPoint.X - v1->x) * (m_pMemory->m_IntersectionPoint.X - v1->x))
            + ((m_pMemory->m_IntersectionPoint.Y - v1->y) * (m_pMemory->m_IntersectionPoint.Y - v1->y));
        v18 = 1;
        if ( v16 == v19 )
        {
LABEL_18:
          result = 0;
          if ( v18 == 0 )
            return result;
          goto LABEL_21;
        }
      }
      m_pMemory = v16++;
      m_RecordType = v16[-1].m_RecordType;
    }
    while ( m_RecordType != IntersectionType_t::cEndPoint1IsContained );
  }
  m_pObsRec = m_pMemory->m_pObsRec;
  v17 = 0.0;
LABEL_21:
  if ( outDistance != 0 )
    *outDistance = fsqrt(v17);
  *outObstruction = m_pObsRec;
  return 1;
}


// CGridNavPath::TrySkipAhead  (line 527, @0x00000000026590b0, libserver.so)  // inlines: FastSqrt, Length2D, NetworkStateChanged, Set, Start, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=<float>, operator[]
// calls: RandomFloat, CountdownTimer::Now, CBaseEntity::GetAbsOrigin, CGridNavPath::ComputePathLength, GetCommonObstructionManagerFlagsForNPC, CGridNav::PrepareObstructionManager, TestCollision
// callers: CGridNavPath::Build, CGridNavPath::Update
bool __fastcall CGridNavPath::TrySkipAhead(CGridNavPath *const this, CDOTA_BaseNPC *pNPC)
{
  CGridNavPath *v3; // rbx
  CountdownTimer *p_m_SkipAheadRecheckTimer; // r13
  double v5; // xmm0_8
  double v6; // xmm1_8
  bool result; // al
  int v8; // eax
  bool v9; // zf
  ObstructionRelationshipClass_t v10; // eax
  int m_nCurPositionIndex; // edx
  int m_Size; // r13d
  int v13; // r14d
  CDOTA_BaseNPC *v14; // rax
  CGridNavPath *v15; // r12
  __int64 v16; // rbx
  CDOTA_BaseNPC *v17; // r15
  Vector *m_pMemory; // rsi
  float *p_x; // rax
  const Vector *v20; // rsi
  float v21; // xmm0_4
  float v22; // xmm1_4
  int nOriginalPositionIndex; // [rsp+4h] [rbp-5Ch]
  const Vector *vCurPosition; // [rsp+10h] [rbp-50h]
  float flCurShortPathLen; // [rsp+18h] [rbp-48h]
  float flCurShortPathLena; // [rsp+18h] [rbp-48h]
  float flSkipAheadRecheckInterval; // [rsp+1Ch] [rbp-44h]
  float flSkipAheadRecheckIntervalb; // [rsp+1Ch] [rbp-44h]
  float flSkipAheadRecheckIntervala; // [rsp+1Ch] [rbp-44h]
  int nAllFlags; // [rsp+20h] [rbp-40h] BYREF
  int nNoneFlags; // [rsp+24h] [rbp-3Ch] BYREF
  const ObstructionRecord_t *pRecord; // [rsp+28h] [rbp-38h] BYREF

  v3 = this;
  p_m_SkipAheadRecheckTimer = &this->m_SkipAheadRecheckTimer;
  flSkipAheadRecheckInterval = RandomFloat(1.0, 1.2);
  *&v5 = CountdownTimer::Now(p_m_SkipAheadRecheckTimer) + flSkipAheadRecheckInterval;
  if ( *&v5 != v3->m_SkipAheadRecheckTimer.m_timestamp.m_Value )
  {
    flCurShortPathLena = *&v5;
    (*(v3->m_SkipAheadRecheckTimer._vptr_CountdownTimer + 2))(p_m_SkipAheadRecheckTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v5 = LODWORD(flCurShortPathLena);
    v3->m_SkipAheadRecheckTimer.m_timestamp.m_Value = flCurShortPathLena;
  }
  if ( flSkipAheadRecheckInterval != v3->m_SkipAheadRecheckTimer.m_duration.m_Value )
  {
    (*(v3->m_SkipAheadRecheckTimer._vptr_CountdownTimer + 2))(
      p_m_SkipAheadRecheckTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v5,
      v6,
      flSkipAheadRecheckInterval);
    v3->m_SkipAheadRecheckTimer.m_duration.m_Value = flSkipAheadRecheckInterval;
  }
  result = 0;
  if ( dota_path_disable_skip_ahead.m_pParent->m_Value.m_nValue == 0 )
  {
    nOriginalPositionIndex = v3->m_nCurPositionIndex;
    if ( nOriginalPositionIndex != v3->m_Positions.m_Size - 1 )
    {
      vCurPosition = CBaseEntity::GetAbsOrigin(pNPC);
      flCurShortPathLen = CGridNavPath::ComputePathLength(v3, vCurPosition, &v3->m_ShortPath, v3->m_nCurShortPathIndex);
      GetCommonObstructionManagerFlagsForNPC(pNPC, &nAllFlags, &nNoneFlags);
      v8 = nNoneFlags;
      v9 = pNPC->m_iIsControllableByPlayer64.m_Value == 0;
      nNoneFlags |= 0x11u;
      if ( v9 )
        nNoneFlags = v8 | 0x811;
      flSkipAheadRecheckIntervalb = pNPC->m_flCollisionPadding;
      v10 = (*(pNPC->_vptr_IHandleEntity + 454))(pNPC);
      CGridNav::PrepareObstructionManager(
        &g_GridNav,
        pNPC->m_flHullRadius,
        nAllFlags,
        nNoneFlags,
        v10,
        flSkipAheadRecheckIntervalb);
      m_nCurPositionIndex = v3->m_nCurPositionIndex;
      m_Size = v3->m_Positions.m_Size;
      v13 = m_nCurPositionIndex + 1;
      if ( m_nCurPositionIndex + 1 < v3->m_Positions.m_Size )
      {
        v14 = pNPC;
        v15 = v3;
        v16 = v13;
        v17 = v14;
        while ( 1 )
        {
          m_pMemory = v15->m_Positions.m_Memory.m_pMemory;
          p_x = &m_pMemory[m_nCurPositionIndex].x;
          v20 = &m_pMemory[v16];
          v21 = v20->x - *p_x;
          v22 = v20->y - p_x[1];
          pRecord = 0;
          flSkipAheadRecheckIntervala = fsqrt((v21 * v21) + (v22 * v22)) + flCurShortPathLen;
          if ( flSkipAheadRecheckIntervala > 1800.0 )
            break;
          if ( TestCollision(vCurPosition, v20, 0, &pRecord, v17, 11) )
          {
            ++v13;
            ++v16;
            m_nCurPositionIndex = v15->m_nCurPositionIndex;
            if ( v13 == m_Size )
              break;
          }
          else
          {
            v15->m_nCurPositionIndex = v13;
            m_nCurPositionIndex = v13++;
            ++v16;
            flCurShortPathLen = flSkipAheadRecheckIntervala;
            if ( v13 == m_Size )
              break;
          }
        }
        m_Size = v15->m_Positions.m_Size;
        v3 = v15;
      }
      if ( m_Size - 2 == m_nCurPositionIndex )
      {
        m_nCurPositionIndex = m_Size - 1;
        v3->m_nCurPositionIndex = m_Size - 1;
      }
      return nOriginalPositionIndex != m_nCurPositionIndex;
    }
  }
  return result;
}


// ComputeObstacleCenter  (line 606, @0x0000000002659360, libserver.so)
// callers: CGridNavPath::ComputeShortPathGoal
Vector __fastcall ComputeObstacleCenter(const ObstructionRecord_t *pObsRec)
{
  uint8 m_ObsType; // al
  float m_fY; // xmm0_4
  float m_fYMin; // xmm1_4
  float v6; // xmm0_4
  __int64 v7; // [rsp+0h] [rbp-10h]
  int v8; // [rsp+8h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_ObsType = pObsRec->m_ObsType;
  if ( m_ObsType == 1 )
  {
    m_fYMin = pObsRec->m_fYMin;
    v8 = 0;
    v6 = (pObsRec->m_fXMin + pObsRec->m_fXMax) * 0.5;
    *(&v7 + 1) = (m_fYMin + pObsRec->m_fYMax) * 0.5;
    result.z = 0.0;
    *&v7 = v6;
    *&result.x = v7;
  }
  else if ( m_ObsType == 2 )
  {
    m_fY = pObsRec->m_fY;
    v8 = 0;
    result.z = 0.0;
    *&result.x = __PAIR64__(LODWORD(m_fY), LODWORD(pObsRec->m_fX));
  }
  else
  {
    v8 = 0;
    *&result.x = 0;
    result.z = 0.0;
  }
  return result;
}


// CGridNavPath::ComputeShortPathGoal  (line 625, @0x0000000002659410, libserver.so)  // inlines: FastSqrt, Length2D, Max<float>, Min<double>, Square<float>, Vector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=, operator[]
// calls: CBaseEntity::GetAbsOrigin, TestCollision, ComputeObstacleCenter, CDOTA_BaseNPC::ShouldUseCollisionPaddingWithUnit, sqrtf
// callers: CGridNavPath::ComputeShortPath
void __fastcall CGridNavPath::ComputeShortPathGoal(
        CGridNavPath *const this,
        Vector *pShortGoal,
        float *pflShortGoalRange,
        CDOTA_BaseNPC *pNPC)
{
  const Vector *AbsOrigin; // rax
  int m_Size; // edx
  float v8; // xmm0_4
  float y; // xmm1_4
  int m_nCurPositionIndex; // eax
  float v11; // xmm4_4
  __int64 v12; // r13
  Vector *v13; // rax
  float v14; // xmm3_4
  float v15; // xmm2_4
  bool v16; // al
  Vector *m_pMemory; // rax
  vec_t *p_x; // rax
  Vector *v19; // rax
  int v20; // edx
  const ObstructionRecord_t *v21; // rdi
  vec_t *v22; // rax
  float v23; // xmm0_4
  bool v24; // zf
  float v25; // xmm1_4
  uint8 m_ObsType; // al
  float v27; // xmm2_4
  float v28; // xmm0_4
  Vector *v29; // rax
  CObstructionObject *m_pObstructionObject; // rbx
  float m_fRadius; // xmm1_4
  float v32; // xmm0_4
  bool ShouldUseCollisionPaddingWithUnit; // al
  int kInitialPositionIndex; // [rsp+10h] [rbp-60h]
  float x; // [rsp+14h] [rbp-5Ch]
  float flDistFromCenter; // [rsp+18h] [rbp-58h]
  float flDistFromCentera; // [rsp+18h] [rbp-58h]
  float flObstructionRadius; // [rsp+1Ch] [rbp-54h]
  float flObstructionRadiusa; // [rsp+1Ch] [rbp-54h]
  const ObstructionRecord_t *obstruction; // [rsp+28h] [rbp-48h] BYREF
  Vector vObstructionCenter; // [rsp+30h] [rbp-40h] BYREF

  obstruction = 0;
  *pflShortGoalRange = pNPC->m_flHullRadius + 1.0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pNPC);
  m_Size = this->m_Positions.m_Size;
  v8 = AbsOrigin->x;
  y = AbsOrigin->y;
  m_nCurPositionIndex = this->m_nCurPositionIndex;
  kInitialPositionIndex = m_nCurPositionIndex;
  if ( m_nCurPositionIndex < this->m_Positions.m_Size )
  {
    v11 = 0.0;
    v12 = -1;
    while ( 1 )
    {
      v13 = &this->m_Positions.m_Memory.m_pMemory[m_nCurPositionIndex];
      v14 = v13->x;
      v15 = v13->y;
      vObstructionCenter.z = 0.0;
      vObstructionCenter.x = v14;
      vObstructionCenter.y = v15;
      x = v14;
      flDistFromCenter = v15;
      flObstructionRadius = v11 + fsqrt(((v8 - v14) * (v8 - v14)) + ((y - v15) * (y - v15)));
      v16 = TestCollision(&vObstructionCenter, &vObstructionCenter, 0, &obstruction, pNPC, 2);
      v11 = flObstructionRadius;
      if ( v16 )
      {
        m_Size = this->m_Positions.m_Size;
        m_nCurPositionIndex = this->m_nCurPositionIndex + 1;
        this->m_nCurPositionIndex = m_nCurPositionIndex;
        if ( m_Size <= m_nCurPositionIndex )
          goto LABEL_8;
      }
      else
      {
        v12 = this->m_nCurPositionIndex;
        if ( flObstructionRadius >= 700.0 )
        {
          v29 = &this->m_Positions.m_Memory.m_pMemory[v12];
          pShortGoal->x = v29->x;
          pShortGoal->y = v29->y;
          pShortGoal->z = v29->z;
          return;
        }
        m_Size = this->m_Positions.m_Size;
        m_nCurPositionIndex = v12 + 1;
        this->m_nCurPositionIndex = v12 + 1;
        if ( m_Size <= v12 + 1 )
        {
LABEL_8:
          if ( v12 != kInitialPositionIndex && v12 > 0 )
          {
            m_pMemory = this->m_Positions.m_Memory.m_pMemory;
            this->m_nCurPositionIndex = v12;
            p_x = &m_pMemory[v12].x;
            pShortGoal->x = *p_x;
            pShortGoal->y = p_x[1];
            pShortGoal->z = p_x[2];
            return;
          }
          break;
        }
      }
      v8 = x;
      y = flDistFromCenter;
    }
  }
  v19 = this->m_Positions.m_Memory.m_pMemory;
  v20 = m_Size - 1;
  this->m_nCurPositionIndex = v20;
  v21 = obstruction;
  v22 = &v19[v20].x;
  v23 = *v22;
  v24 = obstruction == 0;
  pShortGoal->x = *v22;
  v25 = v22[1];
  pShortGoal->y = v25;
  pShortGoal->z = v22[2];
  if ( !v24 )
  {
    m_ObsType = v21->m_ObsType;
    if ( m_ObsType == 2 )
    {
      vObstructionCenter = ComputeObstacleCenter(v21);
      m_pObstructionObject = obstruction->m_pObstructionObject;
      m_fRadius = obstruction->m_fRadius;
      v32 = fsqrt(
              ((pShortGoal->x - vObstructionCenter.x) * (pShortGoal->x - vObstructionCenter.x))
            + ((pShortGoal->y - vObstructionCenter.y) * (pShortGoal->y - vObstructionCenter.y)));
      if ( m_pObstructionObject != 0 && (m_pObstructionObject->m_nObstructionProperties & 0x10) != 0 )
      {
        flDistFromCentera = v32;
        flObstructionRadiusa = obstruction->m_fRadius;
        ShouldUseCollisionPaddingWithUnit = CDOTA_BaseNPC::ShouldUseCollisionPaddingWithUnit(
                                              pNPC,
                                              &m_pObstructionObject[-86].m_pObstructionRecord);
        m_fRadius = flObstructionRadiusa;
        v32 = flDistFromCentera;
        if ( ShouldUseCollisionPaddingWithUnit )
          m_fRadius = flObstructionRadiusa
                    + (pNPC->m_flCollisionPadding + *&m_pObstructionObject[10].m_nObstructionProperties);
      }
      *pflShortGoalRange = fmaxf(0.0, (m_fRadius - v32) + 3.0) + *pflShortGoalRange;
    }
    else if ( m_ObsType == 1 )
    {
      v27 = fmin(fabs(v23 - v21->m_fXMin), fabs(v23 - v21->m_fXMax));
      v28 = fmin(fabs(v25 - v21->m_fYMin), fabs(v25 - v21->m_fYMax));
      *pflShortGoalRange = fmaxf(0.0, fsqrt((v27 * v27) + (v28 * v28))) + *pflShortGoalRange;
    }
  }
}


// TestCollision  (line 697, @0x00000000026584b0, libserver.so)  // inlines: Vector
// calls: TestCollision
// callers: CShortPathProbe::GetPath, CShortPathProbe::Advance, CGridNavPath::ComputeShortPath
bool __fastcall TestCollision(
        const Vector2D *const v1,
        const Vector2D *const v2,
        float *outDistance,
        const ObstructionRecord_t **const outObstruction,
        CDOTA_BaseNPC *pIgnoreNPC,
        int nObcheckFlags)
{
  vec_t y; // xmm0_4
  vec_t x; // xmm2_4
  vec_t v8; // xmm1_4
  Vector a; // [rsp+0h] [rbp-20h] BYREF
  Vector b; // [rsp+10h] [rbp-10h] BYREF

  y = v1->y;
  a.x = v1->x;
  x = v2->x;
  v8 = v2->y;
  a.y = y;
  b.x = x;
  b.y = v8;
  a.z = 0.0;
  b.z = 0.0;
  return TestCollision(&a, &b, outDistance, outObstruction, pIgnoreNPC, 11);
}


// GetCollisionPoint  (line 710, @0x0000000002654210, libserver.so)  // inlines: DistTo, FastSqrt, Length, Lerp<Vector2D>, Vector2D, Vector2DAdd, Vector2DLength, Vector2DMultiply, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// callers: CShortPathProbe::Advance
const Vector2D *__fastcall GetCollisionPoint(
        const Vector2D *const v1,
        const Vector2D *const v2,
        float flDist,
        float *a4)
{
  const Vector2D *result; // rax
  float x; // xmm3_4
  float y; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm0_4

  result = v1;
  x = v2->x;
  y = v2->y;
  v7 = *a4;
  v8 = a4[1];
  v9 = fsqrt(((v2->x - v7) * (v2->x - v7)) + ((y - v8) * (y - v8)));
  if ( v9 < 0.1 )
  {
    v1->x = v7;
    v1->y = a4[1];
  }
  else
  {
    v10 = flDist - 1.0;
    if ( v10 >= 0.1 )
    {
      v11 = v10 / v9;
      v1->x = ((v7 - x) * v11) + x;
      v1->y = ((v8 - y) * v11) + v2->y;
    }
    else
    {
      v1->x = x;
      v1->y = v2->y;
    }
  }
  return result;
}


// DrawCulledPoint  (line 734, @0x00000000026542c0, libserver.so)
// calls: GetPositionOnGround, NDebugOverlay::Sphere
// callers: CShortPathProbe::Advance
void __fastcall DrawCulledPoint(Vector2D vPos, CDOTA_BaseNPC *pNPC, CDOTA_BaseNPC *a3, double a4, float a5)
{
  Vector vPos3d; // [rsp+10h] [rbp-10h] BYREF

  vPos3d = GetPositionOnGround(*(&pNPC->_vptr_IHandleEntity + 1), a5, a3);
  NDebugOverlay::Sphere(&vPos3d, &vec3_angle, 8.0, 0xFFu, 0xFFu, 0, 128, 0.5, 1);
}


// DrawCollision  (line 740, @0x0000000002656c60, libserver.so)  // inlines: DistTo, FastSqrt, Length, Lerp<Vector2D>, Vector2DAdd, Vector2DLength, Vector2DMultiply, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: GetPositionOnGround, NDebugOverlay::Sphere
// callers: CShortPathProbe::Advance
void __fastcall DrawCollision(
        Vector2D vPos,
        Vector2D vNext,
        float flDist,
        CDOTA_BaseNPC *pNPC,
        float *a5,
        CDOTA_BaseNPC *a6)
{
  float v9; // xmm1_4
  float v10; // xmm2_4
  float flDista; // [rsp+8h] [rbp-48h]
  Vector vCollide3d; // [rsp+20h] [rbp-30h] BYREF

  flDista = vPos.x;
  GetPositionOnGround(*(&pNPC->_vptr_IHandleEntity + 1), flDist, a6);
  v9 = a5[1];
  v10 = fsqrt(
          ((*&pNPC->_vptr_IHandleEntity - *a5) * (*&pNPC->_vptr_IHandleEntity - *a5))
        + ((*(&pNPC->_vptr_IHandleEntity + 1) - v9) * (*(&pNPC->_vptr_IHandleEntity + 1) - v9)));
  vCollide3d = GetPositionOnGround(
                 ((v9 - *(&pNPC->_vptr_IHandleEntity + 1)) * (flDista / v10)) + *(&pNPC->_vptr_IHandleEntity + 1),
                 v10,
                 a6);
  NDebugOverlay::Sphere(&vCollide3d, &vec3_angle, 4.0, 0xFFu, 0, 0, 128, 0.5, 1);
}


// CShortPathProbe::PriorityLessFn  (line 782, @0x000000000269d100, libserver.so)
bool __fastcall CShortPathProbe::PriorityLessFn(CShortPathProbe *const *const lhs, CShortPathProbe *const *const rhs)
{
  bool result; // al

  result = (*lhs)->m_bDone;
  if ( result == (*rhs)->m_bDone )
    return ((*lhs)->m_flPathLength + (*lhs)->m_flGoalDist) > ((*rhs)->m_flPathLength + (*rhs)->m_flGoalDist);
  return result;
}


// CShortPathProbe::CShortPathProbe  (line 810, @0x00000000026b7d30, libserver.so)  // inlines: AddMultipleToTail, AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<Vector2D>, GrowMemory, GrowVector, InsertMultipleBefore, Purge, Vector2D, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: Plat_IsInDebugSessionRaw, CUtlMemory<Vector2D, int>::Grow, CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 16ul, int> >::~CUtlVectorBase, CUtlVectorBase<Vector2D, CUtlMemoryFixedGrowable<Vector2D, 256ul, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlMemory<Vector2D, int>::Purge
// callers: CShortPathProbe::Advance
void __fastcall CShortPathProbe::CShortPathProbe(CShortPathProbe *const this, const CShortPathProbe *const rOther)
{
  Vector2D *p_m_FixedMemory; // r13
  float m_flGoalDist; // xmm0_4
  __int64 m_Size; // r15
  bool m_bClockwise; // al
  int v8; // r14d
  Vector2D *m_pMemory; // r13
  Vector2D *v10; // r13
  int v11; // r12d
  __int64 v12; // r14
  int v13; // eax
  int v14; // r15d
  __int64 v15; // r14
  __int64 v16; // rax
  Vector2D *v17; // rdx
  int m_nAllocationCount; // eax
  __int64 v19; // r15
  __int64 v20; // rax
  Vector2D *v21; // rdx
  int v22; // [rsp+Ch] [rbp-44h]
  CUtlVectorBase<Vector2D,CUtlMemoryFixedGrowable<Vector2D,256ul,int> >::CAllocator *p_m_Memory; // [rsp+18h] [rbp-38h]

  p_m_FixedMemory = &this->m_path.m_Memory.m_FixedMemory;
  this->m_vStart = rOther->m_vStart;
  this->m_vEnd = rOther->m_vEnd;
  this->m_pNPC = rOther->m_pNPC;
  p_m_Memory = &this->m_path.m_Memory;
  this->m_flPathLength = rOther->m_flPathLength;
  m_flGoalDist = rOther->m_flGoalDist;
  this->m_path.m_Size = 0;
  this->m_path.m_Memory.m_pMemory = 0;
  this->m_flGoalDist = m_flGoalDist;
  this->m_path.m_Memory.m_nAllocationCount = 256;
  this->m_path.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 56) & 3) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_path.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_splitPoints.m_Size = 0;
  this->m_splitPoints.m_Memory.m_pMemory = 0;
  this->m_splitPoints.m_Memory.m_nAllocationCount = 16;
  this->m_splitPoints.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 80) & 3) != 0 && Plat_IsInDebugSessionRaw(this) != 0 )
    __debugbreak();
  this->m_splitPoints.m_Memory.m_pMemory = &this->m_splitPoints.m_Memory.m_FixedMemory;
  m_Size = this->m_path.m_Size;
  this->m_pCurrentObstruction = rOther->m_pCurrentObstruction;
  m_bClockwise = rOther->m_bClockwise;
  this->m_bDone = 0;
  this->m_nWindingCount = 0;
  this->m_bClockwise = m_bClockwise;
  this->m_vMajorAxisTangent.x = rOther->m_vMajorAxisTangent.x;
  this->m_vMajorAxisTangent.y = rOther->m_vMajorAxisTangent.y;
  this->m_vMajorAxisNormal.x = rOther->m_vMajorAxisNormal.x;
  this->m_vMajorAxisNormal.y = rOther->m_vMajorAxisNormal.y;
  this->m_bDebugDraw = rOther->m_bDebugDraw;
  v8 = rOther->m_path.m_Size;
  m_pMemory = rOther->m_path.m_Memory.m_pMemory;
  if ( v8 != 0 )
  {
    v22 = v8 + m_Size;
    m_nAllocationCount = this->m_path.m_Memory.m_nAllocationCount;
    if ( v8 + m_Size > m_nAllocationCount )
      CUtlMemory<Vector2D,int>::Grow(p_m_Memory, v22 - m_nAllocationCount);
    this->m_path.m_Size = v22;
    if ( m_pMemory != 0 && v8 > 0 )
    {
      v19 = m_Size;
      v20 = 0;
      do
      {
        v21 = &this->m_path.m_Memory.m_pMemory[v19];
        if ( v21 != 0 )
        {
          v21->x = m_pMemory[v20].x;
          v21->y = m_pMemory[v20].y;
        }
        ++v20;
        ++v19;
      }
      while ( v8 > v20 );
    }
  }
  v10 = rOther->m_splitPoints.m_Memory.m_pMemory;
  v11 = rOther->m_splitPoints.m_Size;
  v12 = this->m_splitPoints.m_Size;
  if ( v11 != 0 )
  {
    v13 = this->m_splitPoints.m_Memory.m_nAllocationCount;
    v14 = v11 + v12;
    if ( v11 + v12 > v13 )
      CUtlMemory<Vector2D,int>::Grow(&this->m_splitPoints.m_Memory, v14 - v13);
    this->m_splitPoints.m_Size = v14;
    if ( v10 != 0 && v11 > 0 )
    {
      v15 = v12;
      v16 = 0;
      do
      {
        v17 = &this->m_splitPoints.m_Memory.m_pMemory[v15];
        if ( v17 != 0 )
        {
          v17->x = v10[v16].x;
          v17->y = v10[v16].y;
        }
        ++v16;
        ++v15;
      }
      while ( v11 > v16 );
    }
  }
}


// CShortPathProbe::GetPath  (line 832, @0x00000000026b16f0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<Vector2D>, CopyConstruct<Vector>, DistToSqr, Element, EnsureCapacity, GetBool, GetInt, GrowMemory, LengthSqr, Purge, Remove, RemoveAll, Tail, Vector2D, Vector2DSubtract, memcpy, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlMemory<Vector, int>::Grow, CUtlMemory<Vector2D, int>::Purge, CUtlMemory<Vector2D, int>::Grow, TestCollision, memcpy, _Unwind_Resume
// callers: CGridNavPath::ComputeShortPath
void __fastcall CShortPathProbe::GetPath(
        CShortPathProbe *const this,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *outPath,
        int nPathSteps)
{
  int m_Size; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  Vector *v8; // rax
  __int64 v9; // r12
  Vector2D *v10; // rax
  vec_t y; // xmm0_4
  vec_t x; // xmm1_4
  int v13; // eax
  Vector2D *m_pMemory; // rax
  Vector2D *v15; // r13
  int v16; // r9d
  int v17; // ebx
  Vector2D *v18; // rax
  Vector2D *v19; // rdi
  CDOTA_BaseNPC *m_pNPC; // r8
  bool v21; // r15
  __int64 v22; // r12
  Vector2D *v23; // rax
  int v24; // ebx
  __int64 v25; // r13
  const Vector2D *v26; // rdi
  int v27; // r12d
  Vector2D *v28; // r13
  int v29; // ebx
  Vector2D *v30; // rax
  int v31; // edx
  Vector2D *v32; // r12
  int v33; // edx
  Vector2D *v34; // rax
  int v35; // ebx
  uint32 m_nGrowSize; // eax
  Vector *v37; // rsi
  int v38; // edx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // r13
  Vector *v41; // rax
  __int64 v42; // r12
  vec_t v43; // r15d
  int v44; // eax
  Vector2D *v45; // rax
  Vector *v46; // r12
  Vector *v47; // rax
  float outObstruction; // [rsp+20h] [rbp-70h]
  int nLastClearPointIndex; // [rsp+28h] [rbp-68h]
  int ib; // [rsp+2Ch] [rbp-64h]
  int i; // [rsp+2Ch] [rbp-64h]
  unsigned int ia; // [rsp+2Ch] [rbp-64h]
  Vector2D p; // [rsp+30h] [rbp-60h] BYREF
  const ObstructionRecord_t *pObstruction; // [rsp+38h] [rbp-58h] BYREF
  CUtlVector<Vector2D,CUtlMemory<Vector2D,int> > smoothPath; // [rsp+40h] [rbp-50h] BYREF

  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(outPath);
  m_Size = this->m_path.m_Size;
  if ( m_Size == 0 )
    return;
  if ( m_Size <= nPathSteps )
    nPathSteps = this->m_path.m_Size;
  if ( dota_path_disable_straightener.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( nPathSteps > 0 )
    {
      v6 = 0;
      v7 = 8LL * (nPathSteps - 1) + 8;
      do
      {
        v9 = outPath->m_Size;
        v10 = &this->m_path.m_Memory.m_pMemory[v6 / 8];
        y = v10->y;
        x = v10->x;
        v13 = outPath->m_Size;
        if ( v9 == outPath->m_Memory.m_nAllocationCount )
        {
          outObstruction = x;
          *&ib = y;
          CUtlMemory<Vector,int>::Grow(&outPath->m_Memory, 1);
          v13 = outPath->m_Size;
          x = outObstruction;
          y = *&ib;
        }
        outPath->m_Size = v13 + 1;
        v8 = &outPath->m_Memory.m_pMemory[v9];
        if ( v8 != 0 )
        {
          v8->x = x;
          v8->y = y;
          v8->z = 0.0;
        }
        v6 += 8LL;
      }
      while ( v6 != v7 );
    }
    return;
  }
  m_pMemory = this->m_path.m_Memory.m_pMemory;
  smoothPath.m_Memory.m_pMemory = 0;
  smoothPath.m_Memory.m_nAllocationCount = 0;
  v15 = &m_pMemory[nPathSteps - 1];
  smoothPath.m_Memory.m_nGrowSize = 0;
  CUtlMemory<Vector2D,int>::Grow(&smoothPath.m_Memory, 1);
  v17 = 1;
  v18 = smoothPath.m_Memory.m_pMemory;
  smoothPath.m_Size = 1;
  if ( smoothPath.m_Memory.m_pMemory != 0 )
  {
    smoothPath.m_Memory.m_pMemory->x = v15->x;
    v17 = smoothPath.m_Size;
    v18->y = v15->y;
  }
  nLastClearPointIndex = nPathSteps - 2;
  if ( nPathSteps - 2 > 0 )
  {
    while ( 1 )
    {
      v19 = this->m_path.m_Memory.m_pMemory;
      m_pNPC = this->m_pNPC;
      p = smoothPath.m_Memory.m_pMemory[v17 - 1];
      if ( !TestCollision(v19, &p, 0, &pObstruction, m_pNPC, v16) )
      {
        v17 = smoothPath.m_Size;
        goto LABEL_36;
      }
      v21 = smoothPath.m_Size <= 1;
      if ( nLastClearPointIndex <= 1 )
      {
        v27 = smoothPath.m_Size;
        v23 = this->m_path.m_Memory.m_pMemory;
        v25 = nLastClearPointIndex;
      }
      else
      {
        v22 = 0;
        v23 = this->m_path.m_Memory.m_pMemory;
        v24 = nLastClearPointIndex - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v25 = ++v22;
            i = v22;
            v26 = &v23[v22];
            if ( v21 || (((v26->x - p.x) * (v26->x - p.x)) + ((v26->y - p.y) * (v26->y - p.y))) <= 90000.0 || v24 <= 4 )
              break;
            if ( --v24 == 0 )
            {
LABEL_28:
              v27 = smoothPath.m_Size;
              v25 = nLastClearPointIndex;
              goto LABEL_29;
            }
          }
          if ( !TestCollision(v26, &p, 0, &pObstruction, this->m_pNPC, v16) )
            break;
          --v24;
          v23 = this->m_path.m_Memory.m_pMemory;
          if ( v24 == 0 )
            goto LABEL_28;
        }
        v27 = smoothPath.m_Size;
        v23 = this->m_path.m_Memory.m_pMemory;
        nLastClearPointIndex = i;
      }
LABEL_29:
      if ( v21 )
        goto LABEL_32;
      if ( TestCollision(&v23[v25], &smoothPath.m_Memory.m_pMemory[v27 - 2], 0, &pObstruction, this->m_pNPC, v16) )
        break;
      v27 = smoothPath.m_Size - 1;
      v45 = this->m_path.m_Memory.m_pMemory;
      smoothPath.m_Size = v27;
      v29 = v27;
      v28 = &v45[v25];
      if ( v27 == smoothPath.m_Memory.m_nAllocationCount )
      {
LABEL_55:
        CUtlMemory<Vector2D,int>::Grow(&smoothPath.m_Memory, 1);
        v29 = smoothPath.m_Size;
      }
LABEL_33:
      v17 = v29 + 1;
      smoothPath.m_Size = v17;
      v30 = &smoothPath.m_Memory.m_pMemory[v27];
      if ( v30 != 0 )
      {
        v30->x = v28->x;
        v17 = smoothPath.m_Size;
        v30->y = v28->y;
      }
      if ( --nLastClearPointIndex <= 0 )
        goto LABEL_36;
    }
    v27 = smoothPath.m_Size;
    v23 = this->m_path.m_Memory.m_pMemory;
LABEL_32:
    v28 = &v23[v25];
    v29 = v27;
    if ( v27 == smoothPath.m_Memory.m_nAllocationCount )
      goto LABEL_55;
    goto LABEL_33;
  }
LABEL_36:
  v31 = v17;
  v32 = this->m_path.m_Memory.m_pMemory;
  if ( smoothPath.m_Memory.m_nAllocationCount == v17 )
  {
    CUtlMemory<Vector2D,int>::Grow(&smoothPath.m_Memory, 1);
    v31 = smoothPath.m_Size;
  }
  v33 = v31 + 1;
  smoothPath.m_Size = v33;
  v34 = &smoothPath.m_Memory.m_pMemory[v17];
  if ( v34 != 0 )
  {
    v34->x = v32->x;
    v35 = smoothPath.m_Size;
    v34->y = v32->y;
  }
  else
  {
    v35 = v33;
  }
  if ( v35 > outPath->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = outPath->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        v46 = outPath->m_Memory.m_pMemory;
        v47 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v35);
        outPath->m_Memory.m_pMemory = v47;
        if ( v46 != 0 )
          memcpy(v47, v46, 12LL * outPath->m_Memory.m_nAllocationCount);
        outPath->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v37 = outPath->m_Memory.m_pMemory;
        if ( v37 != 0 )
          outPath->m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v37, 12LL * v35);
        else
          outPath->m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v35);
      }
      outPath->m_Memory.m_nAllocationCount = v35;
      v35 = smoothPath.m_Size;
    }
  }
  v38 = v35 - 1;
  if ( v35 - 1 >= 0 )
  {
    v39 = 8LL * v38;
    v40 = 8 * (v38 - v38) - 8;
    do
    {
      v42 = outPath->m_Size;
      v43 = smoothPath.m_Memory.m_pMemory[v39 / 8].x;
      ia = LODWORD(smoothPath.m_Memory.m_pMemory[v39 / 8].y);
      v44 = v42;
      if ( v42 == outPath->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&outPath->m_Memory, 1);
        v44 = outPath->m_Size;
      }
      outPath->m_Size = v44 + 1;
      v41 = &outPath->m_Memory.m_pMemory[v42];
      if ( v41 != 0 )
      {
        v41->x = v43;
        *&v41->y = ia;
      }
      v39 -= 8LL;
    }
    while ( v39 != v40 );
  }
  smoothPath.m_Size = 0;
  if ( (smoothPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector2D,int>::Purge(&smoothPath.m_Memory);
    if ( (smoothPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector2D,int>::Purge(&smoothPath.m_Memory);
  }
}


// CShortPathProbe::Advance  (line 903, @0x00000000026b8070, libserver.so)  // inlines: AddToTail, Alloc, CopyConstruct<Vector2D>, DistToSqr, Dot, DotProduct2D, DrawSplitPoint, Element, FastSqrt, GetFloat, GrowMemory, Insert, Length, LengthSqr, NormalizeInPlace, PercolateDown, PercolateUp, RevaluateElement, Swap, Tail, TestCollision, Vector, Vector2D, Vector2DDivide, Vector2DLength, Vector2DMultiply, Vector2DNormalize, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator new, operator(), operator*, operator-, operator/, operator/=, operator=, operator[]
// calls: CGridNav::AdvanceAroundObstruction, TestCollision, GetCollisionPoint, CShortPathProbe::AddStep, CUtlPriorityQueue<CShortPathProbe*, CDefUtlPriorityQueueLessFunc<CShortPathProbe*>, CUtlMemory<CShortPathProbe*, int>, CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe*> >::RevaluateElement, GetPositionOnGround, NDebugOverlay::Sphere, CUtlMemoryPoolBase::Alloc, CShortPathProbe::CShortPathProbe, CUtlPriorityQueue<CShortPathProbe*, CDefUtlPriorityQueueLessFunc<CShortPathProbe*>, CUtlMemory<CShortPathProbe*, int>, CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe*> >::Insert, DrawCulledPoint, DrawCollision (16 total)
// callers: CGridNavPath::ComputeShortPath
// globals: CShortPathProbe::s_Allocator
bool __fastcall CShortPathProbe::Advance(
        CShortPathProbe *const this,
        CUtlPriorityQueue<CShortPathProbe*,CDefUtlPriorityQueueLessFunc<CShortPathProbe*>,CUtlMemory<CShortPathProbe*,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe*> > *pQueue)
{
  int v2; // r9d
  char m_bDone; // r13
  const ObstructionRecord_t *m_pCurrentObstruction; // rcx
  Vector2D *v7; // rax
  vec_t y; // xmm0_4
  int v9; // r9d
  double v10; // xmm1_8
  bool v11; // dl
  float m_fValue; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  __int64 x_low; // xmm1_8
  float v17; // xmm4_4
  float v18; // xmm10_4
  float v19; // xmm9_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v23; // xmm2_4
  int v24; // r9d
  float v25; // xmm2_4
  double v26; // xmm1_8
  float v27; // xmm2_4
  Vector2D *v29; // rax
  vec_t v30; // xmm4_4
  unsigned int *v31; // rdx
  float v32; // xmm0_4
  Vector2D *v33; // rax
  float v34; // xmm0_4
  __int64 v35; // r14
  int v36; // eax
  Vector2D *v37; // rax
  CShortPathProbe *v38; // rax
  CShortPathProbe *v39; // r14
  bool m_bClockwise; // al
  __int64 v42; // r14
  int v43; // r15d
  int v44; // r12d
  CShortPathProbe **v45; // rcx
  CShortPathProbe **v46; // rdx
  CShortPathProbe *v47; // rsi
  int v48; // edx
  bool v49; // al
  CDOTA_BaseNPC *v50; // rsi
  Vector2D *p_m_vEnd; // r15
  float v53; // xmm2_4
  vec_t x; // xmm2_4
  vec_t v55; // xmm1_4
  __int64 m_Size; // r14
  bool v57; // zf
  int v58; // eax
  Vector2D *v59; // rax
  CShortPathProbe *v60; // rax
  CShortPathProbe *v61; // r15
  int v62; // r14d
  __int64 v63; // r12
  CShortPathProbe **m_pMemory; // rax
  CShortPathProbe **v65; // r15
  CShortPathProbe *v66; // rcx
  __int64 v67; // r15
  float v68; // xmm8_4
  float v69; // xmm7_4
  float v70; // xmm3_4
  float v71; // xmm8_4
  float v72; // xmm7_4
  float v73; // xmm2_4
  CDOTA_BaseNPC *v74; // rdx
  CDOTA_BaseNPC *m_pNPC; // rdx
  Vector2D y_low; // xmm0_8
  int v77; // eax
  bool v78; // sf
  CDOTA_BaseNPC *v79; // r8
  CDOTA_BaseNPC *v80; // rsi
  int outDistance; // [rsp+10h] [rbp-90h]
  vec_t outDistancea; // [rsp+10h] [rbp-90h]
  float outDistanceb; // [rsp+10h] [rbp-90h]
  char bCrossingMajorAxis; // [rsp+18h] [rbp-88h]
  int bCrossingMajorAxisa; // [rsp+18h] [rbp-88h]
  vec_t bCrossingMajorAxisb; // [rsp+18h] [rbp-88h]
  float bCrossingMajorAxisc; // [rsp+18h] [rbp-88h]
  float flCollisionDist; // [rsp+2Ch] [rbp-74h] BYREF
  Vector2D vCurPos; // [rsp+30h] [rbp-70h] BYREF
  Vector2D vNextPos; // [rsp+40h] [rbp-60h] BYREF
  const ObstructionRecord_t *pNextObstruction; // [rsp+48h] [rbp-58h] BYREF
  const ObstructionRecord_t *pInsideObstruction; // [rsp+50h] [rbp-50h] BYREF
  Vector position; // [rsp+60h] [rbp-40h] BYREF
  Vector2D v94; // 0:xmm0_8.8
  Vector2D v95; // 0:xmm0_8.8
  Vector2D v96; // 0:xmm1_8.8
  Vector2D v97; // 0:xmm1_8.8

  m_bDone = this->m_bDone;
  if ( m_bDone != 0 )
    return 0;
  m_pCurrentObstruction = this->m_pCurrentObstruction;
  v7 = &this->m_path.m_Memory.m_pMemory[this->m_path.m_Size - 1];
  vCurPos.x = v7->x;
  y = v7->y;
  pNextObstruction = 0;
  vCurPos.y = y;
  flCollisionDist = 0.0;
  if ( m_pCurrentObstruction == 0 )
  {
    p_m_vEnd = &this->m_vEnd;
    if ( TestCollision(&vCurPos, &this->m_vEnd, &flCollisionDist, &pNextObstruction, this->m_pNPC, v2) )
    {
      if ( this->m_bDebugDraw )
      {
        m_pNPC = this->m_pNPC;
        position.x = this->m_vEnd.x;
        position.y = this->m_vEnd.y;
        pInsideObstruction = vCurPos;
        DrawCollision(LODWORD(flCollisionDist), v97, v53, &pInsideObstruction, &position.x, m_pNPC);
      }
      x = vCurPos.x;
      v55 = vCurPos.y;
      if ( flCollisionDist > 1.0 )
      {
        GetCollisionPoint(&position, &vCurPos, flCollisionDist, p_m_vEnd);
        outDistancea = position.x;
        bCrossingMajorAxisb = position.y;
        CShortPathProbe::AddStep(this, v95, &position.x);
        CUtlPriorityQueue<CShortPathProbe *,CDefUtlPriorityQueueLessFunc<CShortPathProbe *>,CUtlMemory<CShortPathProbe *,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe *>>::RevaluateElement(
          pQueue,
          0);
        x = outDistancea;
        v55 = bCrossingMajorAxisb;
      }
      m_Size = this->m_splitPoints.m_Size;
      v57 = m_Size == this->m_splitPoints.m_Memory.m_nAllocationCount;
      this->m_pCurrentObstruction = pNextObstruction;
      v58 = m_Size;
      if ( v57 )
      {
        outDistanceb = v55;
        bCrossingMajorAxisc = x;
        CUtlMemory<Vector2D,int>::Grow(&this->m_splitPoints.m_Memory, 1);
        v58 = this->m_splitPoints.m_Size;
        v55 = outDistanceb;
        x = bCrossingMajorAxisc;
      }
      this->m_splitPoints.m_Size = v58 + 1;
      v59 = &this->m_splitPoints.m_Memory.m_pMemory[m_Size];
      if ( v59 != 0 )
      {
        v59->x = x;
        v59->y = v55;
      }
      v60 = CUtlMemoryPoolBase::Alloc(&CShortPathProbe::s_Allocator);
      v61 = v60;
      if ( v60 != 0 )
        CShortPathProbe::CShortPathProbe(v60, this);
      v61->m_bClockwise = !this->m_bClockwise;
      v62 = pQueue->m_heap.m_Size;
      if ( pQueue->m_heap.m_Size == pQueue->m_heap.m_Memory.m_nAllocationCount )
        CUtlMemory<CShortPathProbe *,int>::Grow(&pQueue->m_heap.m_Memory, 1);
      v63 = v62;
      ++pQueue->m_heap.m_Size;
      pQueue->m_heap.m_Memory.m_pMemory[v62] = v61;
      if ( pQueue->m_heap.m_Size > v62 && v62 != 0 )
      {
        while ( 1 )
        {
          v62 = (v62 + 1) / 2 - 1;
          v67 = v62;
          if ( pQueue->m_LessFunc(&pQueue->m_heap.m_Memory.m_pMemory[v63], &pQueue->m_heap.m_Memory.m_pMemory[v67]) )
            break;
          m_pMemory = pQueue->m_heap.m_Memory.m_pMemory;
          v65 = &m_pMemory[v67];
          v66 = *v65;
          *v65 = m_pMemory[v63];
          pQueue->m_heap.m_Memory.m_pMemory[v63] = v66;
          if ( v62 == 0 )
            break;
          v63 = v62;
        }
      }
      return m_bDone;
    }
    position.x = this->m_vEnd.x;
    y_low = LODWORD(this->m_vEnd.y);
    position.y = this->m_vEnd.y;
    goto LABEL_81;
  }
  CGridNav::AdvanceAroundObstruction(&vNextPos, &g_GridNav, &vCurPos, m_pCurrentObstruction, this->m_bClockwise);
  v11 = 0;
  m_fValue = dota_short_path_backtracking_limit.m_pParent->m_Value.m_fValue;
  v13 = this->m_vStart.y;
  v14 = vNextPos.x - this->m_vStart.x;
  v15 = vNextPos.y - v13;
  if ( m_fValue > 0.0 )
  {
    x_low = LODWORD(this->m_vMajorAxisTangent.x);
    *&x_low = (*&x_low * v14) + (this->m_vMajorAxisTangent.y * v15);
    *&v10 = x_low ^ 0x80000000LL;
    v11 = *&v10 > m_fValue;
  }
  v17 = dota_short_path_sidetracking_limit.m_pParent->m_Value.m_fValue;
  if ( v17 <= 0.0
    || (*&v10 = COERCE_UNSIGNED_INT(fabs((this->m_vMajorAxisNormal.x * v14) + (this->m_vMajorAxisNormal.y * v15))),
        *&v10 <= v17) )
  {
    if ( !v11 )
    {
      v18 = this->m_vMajorAxisNormal.x;
      v19 = this->m_vMajorAxisNormal.y;
      v20 = (v14 * v18) + (v15 * v19);
      v21 = ((vCurPos.x - this->m_vStart.x) * v18) + ((vCurPos.y - v13) * v19);
      if ( (v21 < -0.001 || v21 > 0.001) && (v20 * v21) < 0.0 )
      {
        v68 = vNextPos.x - vCurPos.x;
        v69 = vNextPos.y - vCurPos.y;
        v70 = fsqrt((v68 * v68) + (v69 * v69));
        if ( v70 == 0.0 )
        {
          v72 = 0.0;
          v71 = 0.0;
        }
        else
        {
          v71 = v68 * (1.0 / v70);
          v72 = v69 * (1.0 / v70);
        }
        bCrossingMajorAxis = 1;
        v73 = 1.0 / ((v18 * v71) + (v19 * v72));
        vNextPos.x = vCurPos.x - ((v71 * v21) * v73);
        vNextPos.y = vCurPos.y - ((v21 * v72) * v73);
      }
      else
      {
        bCrossingMajorAxis = 0;
      }
      if ( TestCollision(&vCurPos, &vNextPos, &flCollisionDist, &pNextObstruction, this->m_pNPC, v9) )
      {
        if ( this->m_pCurrentObstruction == pNextObstruction )
        {
          v79 = this->m_pNPC;
          position.x = vCurPos.x;
          pInsideObstruction = 0;
          position.y = vCurPos.y;
          position.z = 0.0;
          TestCollision(&position, &position, 0, &pInsideObstruction, v79, 2);
          this->m_bDone = 1;
          CUtlPriorityQueue<CShortPathProbe *,CDefUtlPriorityQueueLessFunc<CShortPathProbe *>,CUtlMemory<CShortPathProbe *,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe *>>::RevaluateElement(
            pQueue,
            0);
        }
        else
        {
          if ( this->m_bDebugDraw )
          {
            v74 = this->m_pNPC;
            position.x = vNextPos.x;
            position.y = vNextPos.y;
            pInsideObstruction = vCurPos;
            DrawCollision(LODWORD(flCollisionDist), v96, v23, &pInsideObstruction, &position.x, v74);
          }
          if ( flCollisionDist > 1.0 )
          {
            GetCollisionPoint(&pInsideObstruction, &vCurPos, flCollisionDist, &vNextPos);
            *&position.x = pInsideObstruction;
            CShortPathProbe::AddStep(this, HIDWORD(pInsideObstruction), &position.x);
            CUtlPriorityQueue<CShortPathProbe *,CDefUtlPriorityQueueLessFunc<CShortPathProbe *>,CUtlMemory<CShortPathProbe *,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe *>>::RevaluateElement(
              pQueue,
              0);
          }
          this->m_pCurrentObstruction = pNextObstruction;
        }
        return m_bDone;
      }
      position.x = vNextPos.x;
      position.y = vNextPos.y;
      CShortPathProbe::AddStep(this, LODWORD(vNextPos.y), &position.x);
      if ( bCrossingMajorAxis == 0 )
        goto LABEL_86;
      if ( this->m_bDebugDraw )
      {
        position = GetPositionOnGround(vNextPos.y, v25, this->m_pNPC);
        NDebugOverlay::Sphere(&position, &vec3_angle, 16.0, 0, 0xFFu, 0, 128, 0.5, 1);
      }
      if ( TestCollision(&vNextPos, &this->m_vEnd, &flCollisionDist, &pNextObstruction, this->m_pNPC, v24) )
      {
        if ( this->m_pCurrentObstruction != pNextObstruction )
        {
          v27 = 1.0;
          if ( flCollisionDist > 1.0 )
          {
            GetCollisionPoint(&pInsideObstruction, &vNextPos, flCollisionDist, &this->m_vEnd);
            v29 = this->m_splitPoints.m_Memory.m_pMemory;
            v30 = *(&pInsideObstruction + 1);
            v31 = &v29[this->m_splitPoints.m_Size];
            if ( v29 != v31 )
            {
              v94 = LODWORD(v29->x);
              v30 = *(&pInsideObstruction + 1);
              v94.x = ((v32 - *&pInsideObstruction) * (v32 - *&pInsideObstruction))
                    + ((v29->y - *(&pInsideObstruction + 1)) * (v29->y - *(&pInsideObstruction + 1)));
              if ( v94.x < 1.0 )
                return 0;
              v33 = v29 + 1;
              while ( v33 != v31 )
              {
                v94 = LODWORD(v33->x);
                ++v33;
                v94.x = ((v34 - *&pInsideObstruction) * (v34 - *&pInsideObstruction))
                      + ((v33[-1].y - *(&pInsideObstruction + 1)) * (v33[-1].y - *(&pInsideObstruction + 1)));
                if ( v94.x < 1.0 )
                  return 0;
              }
            }
            LODWORD(position.x) = pInsideObstruction;
            position.y = v30;
            CShortPathProbe::AddStep(this, v94, &position.x);
            CUtlPriorityQueue<CShortPathProbe *,CDefUtlPriorityQueueLessFunc<CShortPathProbe *>,CUtlMemory<CShortPathProbe *,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe *>>::RevaluateElement(
              pQueue,
              0);
            v35 = this->m_splitPoints.m_Size;
            v36 = this->m_splitPoints.m_Size;
            if ( v35 == this->m_splitPoints.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<Vector2D,int>::Grow(&this->m_splitPoints.m_Memory, 1);
              v36 = this->m_splitPoints.m_Size;
            }
            this->m_splitPoints.m_Size = v36 + 1;
            v37 = &this->m_splitPoints.m_Memory.m_pMemory[v35];
            if ( v37 != 0 )
              *v37 = pInsideObstruction;
            this->m_pCurrentObstruction = pNextObstruction;
            v38 = CUtlMemoryPoolBase::Alloc(&CShortPathProbe::s_Allocator);
            v39 = v38;
            if ( v38 != 0 )
              CShortPathProbe::CShortPathProbe(v38, this);
            m_bClockwise = this->m_bClockwise;
            *&position.x = v39;
            v39->m_bClockwise = !m_bClockwise;
            CUtlPriorityQueue<CShortPathProbe *,CDefUtlPriorityQueueLessFunc<CShortPathProbe *>,CUtlMemory<CShortPathProbe *,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe *>>::Insert(
              pQueue,
              &position);
            return 0;
          }
        }
        v77 = this->m_nWindingCount + 1;
        v78 = this->m_nWindingCount < 0;
        this->m_nWindingCount = v77;
        if ( v78 ^ __OFSUB__(v77, 1) | (v77 == 1) )
          return 0;
        if ( this->m_bDebugDraw )
        {
          v80 = this->m_pNPC;
          position.x = vNextPos.x;
          position.y = vNextPos.y;
          DrawCulledPoint(LODWORD(vNextPos.y), &position, v80, v26, v27);
        }
        this->m_bDone = 1;
LABEL_86:
        CUtlPriorityQueue<CShortPathProbe *,CDefUtlPriorityQueueLessFunc<CShortPathProbe *>,CUtlMemory<CShortPathProbe *,int>,CDefUtlPriorityQueueSetIndexFunc<CShortPathProbe *>>::RevaluateElement(
          pQueue,
          0);
        return 0;
      }
      position.x = this->m_vEnd.x;
      y_low = LODWORD(this->m_vEnd.y);
      position.y = this->m_vEnd.y;
LABEL_81:
      m_bDone = 1;
      CShortPathProbe::AddStep(this, y_low, &position.x);
      this->m_pCurrentObstruction = 0;
      this->m_bDone = 1;
      return m_bDone;
    }
  }
  if ( this->m_bDebugDraw )
  {
    v50 = this->m_pNPC;
    position.x = vNextPos.x;
    position.y = vNextPos.y;
    DrawCulledPoint(0, &position, v50, v10, v15);
  }
  this->m_bDone = 1;
  v42 = 0;
  v43 = pQueue->m_heap.m_Size;
  bCrossingMajorAxisa = pQueue->m_heap.m_Size / 2;
  if ( bCrossingMajorAxisa <= 0 )
    return m_bDone;
  while ( 1 )
  {
    v48 = 2 * v42 + 2;
    v44 = 2 * v42 + 1;
    if ( v43 > v44 )
      break;
    v44 = v42;
    if ( v43 > v48 )
      goto LABEL_50;
LABEL_43:
    if ( v42 == v44 )
      goto LABEL_53;
LABEL_44:
    v45 = pQueue->m_heap.m_Memory.m_pMemory;
    v46 = &v45[v42];
    v47 = *v46;
    *v46 = v45[v44];
    pQueue->m_heap.m_Memory.m_pMemory[v44] = v47;
    if ( bCrossingMajorAxisa <= v44 )
      return 0;
    v42 = v44;
  }
  v49 = pQueue->m_LessFunc(&pQueue->m_heap.m_Memory.m_pMemory[v42], &pQueue->m_heap.m_Memory.m_pMemory[v44]);
  v48 = 2 * v42 + 2;
  if ( !v49 )
    v44 = v42;
  if ( v43 <= v48 )
    goto LABEL_43;
LABEL_50:
  outDistance = v48;
  if ( pQueue->m_LessFunc(&pQueue->m_heap.m_Memory.m_pMemory[v44], &pQueue->m_heap.m_Memory.m_pMemory[v48]) )
    v44 = outDistance;
  if ( v42 != v44 )
    goto LABEL_44;
LABEL_53:
  if ( v42 != 0 )
    return 0;
  return m_bDone;
}


// CShortPathProbe::AddStep  (line 1082, @0x00000000026b13d0, libserver.so)  // inlines: AddToTail, Clamp<float>, CopyConstruct<Vector2D>, DistTo, Dot, DotProduct2D, DrawPathStep, Element, FastSqrt, Forward, GetFloat, GrowMemory, Length, NormalizeInPlace, Normalized, Tail, Vector2D, Vector2DLength, Vector2DNormalize, Vector2DSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator/=, operator[]
// calls: GetPositionOnGround, NDebugOverlay::Line, CBaseEntity::EntityToWorldTransform, VectorNormalize, CUtlMemory<Vector2D, int>::Grow
// callers: CShortPathProbe::Advance
void __fastcall CShortPathProbe::AddStep(CShortPathProbe *const this, Vector2D vNext, float *a3)
{
  int m_Size; // edx
  Vector2D *m_pMemory; // rax
  __int64 v7; // r13
  bool v8; // zf
  int v9; // edx
  float *v10; // rax
  CDOTA_BaseNPC *m_pNPC; // r13
  Vector2D *v12; // rax
  const matrix3x4_t *v13; // rax
  vec_t v14; // xmm2_4
  vec_t v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  Vector2D *v19; // rax
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float y; // [rsp+8h] [rbp-48h]
  float x; // [rsp+Ch] [rbp-44h]
  Vector origin; // [rsp+10h] [rbp-40h] BYREF
  Vector target; // [rsp+20h] [rbp-30h] BYREF

  if ( this->m_bDebugDraw )
  {
    m_pNPC = this->m_pNPC;
    v12 = &this->m_path.m_Memory.m_pMemory[this->m_path.m_Size - 1];
    y = v12->x;
    x = v12->y;
    origin = GetPositionOnGround(a3[1], v12->x, m_pNPC);
    target = GetPositionOnGround(x, y, m_pNPC);
    NDebugOverlay::Line(&origin, &target, 0xFFu, 0xFFu, 0xFFu, 1, 0.5);
  }
  m_Size = this->m_path.m_Size;
  m_pMemory = this->m_path.m_Memory.m_pMemory;
  v7 = m_Size - 1;
  v8 = m_Size == this->m_path.m_Memory.m_nAllocationCount;
  this->m_flPathLength = fsqrt(
                           ((m_pMemory[v7].x - *a3) * (m_pMemory[v7].x - *a3))
                         + ((m_pMemory[v7].y - a3[1]) * (m_pMemory[v7].y - a3[1])))
                       + this->m_flPathLength;
  if ( v8 )
  {
    CUtlMemory<Vector2D,int>::Grow(&this->m_path.m_Memory, 1);
    m_Size = this->m_path.m_Size;
    m_pMemory = this->m_path.m_Memory.m_pMemory;
  }
  v9 = m_Size + 1;
  this->m_path.m_Size = v9;
  if ( &m_pMemory[v7] != -8LL )
  {
    m_pMemory[v7 + 1].x = *a3;
    m_pMemory[v7 + 1].y = a3[1];
    v9 = this->m_path.m_Size;
    m_pMemory = this->m_path.m_Memory.m_pMemory;
  }
  v10 = &m_pMemory[v9 - 1];
  this->m_flGoalDist = fsqrt(
                         ((*v10 - this->m_vEnd.x) * (*v10 - this->m_vEnd.x))
                       + ((v10[1] - this->m_vEnd.y) * (v10[1] - this->m_vEnd.y)));
  if ( v9 == 2 )
  {
    v13 = CBaseEntity::EntityToWorldTransform(this->m_pNPC);
    v14 = v13->m_flMatVal[1][0];
    v15 = v13->m_flMatVal[0][0];
    target.z = v13->m_flMatVal[2][0];
    target.y = v14;
    target.x = v15;
    VectorNormalize(&target);
    v16 = fsqrt((target.x * target.x) + (target.y * target.y));
    if ( v16 == 0.0 )
    {
      v17 = 0.0;
      v18 = 0.0;
    }
    else
    {
      v18 = target.x * (1.0 / v16);
      v17 = (1.0 / v16) * target.y;
    }
    v19 = this->m_path.m_Memory.m_pMemory;
    v20 = v19[1].x - v19->x;
    v21 = v19[1].y - v19->y;
    v22 = fsqrt((v20 * v20) + (v21 * v21));
    if ( v22 == 0.0 )
    {
      v23 = 0.0;
      v24 = 0.0;
    }
    else
    {
      v24 = v20 * (1.0 / v22);
      v23 = v21 * (1.0 / v22);
    }
    v25 = (((v18 * v24) + (v23 * v17)) * 0.5) + 0.5;
    v26 = 1.0;
    if ( v25 >= 0.0 )
    {
      v26 = 0.0;
      if ( v25 <= 1.0 )
        v26 = 1.0 - v25;
    }
    this->m_flPathLength = this->m_flPathLength + (v26 * dota_short_path_reversal_penalty.m_pParent->m_Value.m_fValue);
  }
}


// CShortPathProbe::operator delete  (line 1105, @0x00000000026a8640, libserver.so)  // inlines: Free
// calls: CUtlMemoryPoolBase::Free, _Unwind_Resume, __cxa_call_unexpected
// callers: CShortPathProbe::Advance, CGridNavPath::ComputeShortPath
// globals: CShortPathProbe::s_Allocator
void __fastcall CShortPathProbe::operator delete(void *p)
{
  CUtlMemoryPoolBase::Free(&CShortPathProbe::s_Allocator, p);
}


// CGridNavPath::ComputeShortPath  (line 1121, @0x000000000268d120, libserver.so)  // inlines: AddToTail, AlignedByteArrayExplicit_t, AlignedByteArray_t, Alloc, CShortPathProbe, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlPriorityQueue, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, ComputeShortPathLength, CopyConstruct<Vector2D>, CopyConstruct<Vector>, DistTo, DrawGoalSphere, Element, FastSqrt, Free, GetBool, GetInt, GrowMemory, Insert, Length, Length2D, NetworkStateChanged, NormalizeInPlace, PercolateUp, Purge, Purge_FixedGrowable, RemoveAll, Set, SetLessFunc, Start, Swap, Tail, TestCollision, V_swap<Vector*>, V_swap<int>, V_swap<unsigned int>, Vector, Vector2D, Vector2DLength, Vector2DNormalize, Vector2DSubtract, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator delete, operator new, operator(), operator-, operator/=, operator=, operator=<float>, operator[], ~CShortPathProbe, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlPriorityQueue, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, RandomFloat, CountdownTimer::Now, GetCommonObstructionManagerFlagsForNPC, CGridNav::PrepareObstructionManager, CBaseEntity::GetAbsOrigin, CGridNavPath::ComputeShortPathGoal, TestCollision, CUtlMemoryPoolBase::Alloc, CShortPathProbe::Advance, GetPositionOnGround, NDebugOverlay::Sphere (29 total)
// callers: CGridNavPath::Build, CGridNavPath::Update
// strings: "Allocated %d probes for a path from Vector( %.2f, %.2f, 0.f ) to Vector( %.2f, %.2f, 0.f 
// globals: CShortPathProbe::PriorityLessFn(CShortPathProbe* const&,CShortPathProbe* const&), CShortPathProbe::s_Allocator
// local variable allocation has failed, the output may be wrong!
void __fastcall CGridNavPath::ComputeShortPath(CGridNavPath *const this, CDOTA_BaseNPC *pNPC, int nFlags)
{
  CountdownTimer *p_m_RebuildTimer; // r12
  double v5; // xmm0_8
  double v6; // xmm1_8
  double v7; // xmm2_8
  double v8; // xmm3_8
  double v9; // xmm0_8
  double v10; // xmm1_8
  double v11; // xmm2_8
  double v12; // xmm3_8
  double v13; // xmm4_8
  double v14; // xmm5_8
  ObstructionRelationshipClass_t v15; // eax
  const Vector *AbsOrigin; // rax
  float v17; // xmm2_4
  __int64 v18; // kr10_8
  const Vector *v19; // rax
  __int64 m_Size; // r13
  int v21; // r12d
  Vector *m_pMemory; // rdx
  int v23; // r12d
  Vector *v24; // rdx
  Vector *v25; // r13
  int v26; // eax
  Vector *v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rdi
  _DWORD *v30; // r14
  char *v31; // r12
  ConVar *m_pParent; // rax
  int m_nValue; // edi
  bool v34; // al
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  __int64 v41; // r12
  int v42; // eax
  float *v43; // rax
  int v44; // r13d
  int v45; // eax
  __int64 v46; // r12
  int v47; // r14d
  int v48; // r12d
  int v49; // r15d
  CShortPathProbe *v50; // r13
  CShortPathProbe *v51; // rdi
  float m_flGoalDist; // xmm0_4
  bool v53; // al
  float v54; // xmm0_4
  int v55; // esi
  __int64 v56; // r13
  int v57; // r12d
  __int64 v58; // r14
  float m_flCollisionPadding; // r12d
  ObstructionRelationshipClass_t v60; // eax
  int v61; // r9d
  __int64 v62; // rax
  int v63; // r12d
  Vector *v64; // rdi
  __int64 v65; // r13
  uint32 m_nGrowSize; // eax
  Vector *v67; // rax
  float v68; // xmm2_4
  int v69; // esi
  float v70; // xmm3_4
  Vector *v71; // rax
  Vector *v72; // rdx
  __int64 v73; // rcx
  float v74; // xmm0_4
  float v75; // xmm1_4
  uint32 v76; // eax
  uint32 v77; // edx
  Vector *v78; // rax
  Vector *v79; // rdx
  __int64 *v80; // r14
  __int64 v81; // rdx
  __int64 v82; // r12
  __int64 v83; // r14
  const Vector *v84; // rax
  char v85; // [rsp+Fh] [rbp-C1h]
  CUtlVector<Vector,CUtlMemory<Vector,int> > *outPath; // [rsp+10h] [rbp-C0h]
  float y; // [rsp+24h] [rbp-ACh]
  float x; // [rsp+30h] [rbp-A0h]
  float m_flPathLength; // [rsp+34h] [rbp-9Ch]
  float pShortGoal; // [rsp+40h] [rbp-90h]
  float pShortGoala; // [rsp+40h] [rbp-90h]
  float flRelaitonshipRadiusAdjustment; // [rsp+48h] [rbp-88h]
  float flRelaitonshipRadiusAdjustmenta; // [rsp+48h] [rbp-88h]
  float flRelaitonshipRadiusAdjustmentc; // [rsp+48h] [rbp-88h]
  float flRelaitonshipRadiusAdjustmentb; // [rsp+48h] [rbp-88h]
  const Vector *flRelaitonshipRadiusAdjustmentd; // [rsp+48h] [rbp-88h]
  int nAllFlags; // [rsp+5Ch] [rbp-74h] BYREF
  const ObstructionRecord_t *pObstruction; // [rsp+60h] [rbp-70h] BYREF
  CUtlMemory<Vector,int> v101; // [rsp+68h] [rbp-68h] BYREF
  __int128 v3dGoal; // [rsp+80h] [rbp-50h] OVERLAPPED BYREF
  int v103; // [rsp+90h] [rbp-40h]
  int v104; // [rsp+94h] [rbp-3Ch]
  bool (__fastcall *v105)(CShortPathProbe *const *const, CShortPathProbe *const *const); // [rsp+98h] [rbp-38h]

  p_m_RebuildTimer = &this->m_RebuildTimer;
  this->m_nCurShortPathIndex = 0;
  outPath = &this->m_ShortPath;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_ShortPath);
  this->m_bShortPathEndedEarly = 0;
  this->m_bTurningToFacePath = 0;
  this->m_bMovingAlongPathSegment = 0;
  flRelaitonshipRadiusAdjustment = RandomFloat(2.0, 2.5);
  *&v5 = CountdownTimer::Now(p_m_RebuildTimer) + flRelaitonshipRadiusAdjustment;
  if ( *&v5 != this->m_RebuildTimer.m_timestamp.m_Value )
  {
    pShortGoal = *&v5;
    (*(this->m_RebuildTimer._vptr_CountdownTimer + 2))(p_m_RebuildTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v5 = LODWORD(pShortGoal);
    this->m_RebuildTimer.m_timestamp.m_Value = pShortGoal;
  }
  if ( flRelaitonshipRadiusAdjustment != this->m_RebuildTimer.m_duration.m_Value )
  {
    (*(this->m_RebuildTimer._vptr_CountdownTimer + 2))(
      p_m_RebuildTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v5,
      v6,
      v7,
      v8,
      flRelaitonshipRadiusAdjustment);
    this->m_RebuildTimer.m_duration.m_Value = flRelaitonshipRadiusAdjustment;
  }
  flRelaitonshipRadiusAdjustmenta = RandomFloat(0.5, 1.0);
  *&v9 = CountdownTimer::Now(&this->m_ShortPathRecentlyComputedTimer) + flRelaitonshipRadiusAdjustmenta;
  if ( *&v9 != this->m_ShortPathRecentlyComputedTimer.m_timestamp.m_Value )
  {
    pShortGoala = *&v9;
    (*(this->m_ShortPathRecentlyComputedTimer._vptr_CountdownTimer + 2))(
      &this->m_ShortPathRecentlyComputedTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    *&v9 = LODWORD(pShortGoala);
    this->m_ShortPathRecentlyComputedTimer.m_timestamp.m_Value = pShortGoala;
  }
  if ( flRelaitonshipRadiusAdjustmenta != this->m_ShortPathRecentlyComputedTimer.m_duration.m_Value )
  {
    (*(this->m_ShortPathRecentlyComputedTimer._vptr_CountdownTimer + 2))(
      &this->m_ShortPathRecentlyComputedTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      flRelaitonshipRadiusAdjustmenta);
    this->m_ShortPathRecentlyComputedTimer.m_duration.m_Value = flRelaitonshipRadiusAdjustmenta;
  }
  if ( (nFlags & 1) != 0 || pNPC->m_iIsControllableByPlayer64.m_Value != 0 )
  {
    GetCommonObstructionManagerFlagsForNPC(pNPC, &pObstruction, &v3dGoal);
    v85 = 0;
    LODWORD(v3dGoal) = v3dGoal | 1;
  }
  else
  {
    GetCommonObstructionManagerFlagsForNPC(pNPC, &pObstruction, &v3dGoal);
    v85 = 1;
    LODWORD(v3dGoal) = v3dGoal | 0x801;
  }
  flRelaitonshipRadiusAdjustmentc = pNPC->m_flCollisionPadding;
  v15 = (*(pNPC->_vptr_IHandleEntity + 454))(pNPC);
  CGridNav::PrepareObstructionManager(
    &g_GridNav,
    pNPC->m_flHullRadius,
    pObstruction,
    v3dGoal,
    v15,
    flRelaitonshipRadiusAdjustmentc);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pNPC);
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  CGridNavPath::ComputeShortPathGoal(this, &v3dGoal, &pObstruction, pNPC);
  v18 = v3dGoal;
  if ( dota_unit_short_path_search_debug.m_pParent->m_Value.m_nValue != 0
    && pNPC->m_iIsControllableByPlayer64.m_Value != 0 )
  {
    *&v3dGoal = GetPositionOnGround(*(&v3dGoal + 1), v17, pNPC);
    NDebugOverlay::Sphere(&v3dGoal, &vec3_angle, 24.0, 0, 0xFFu, 0xFFu, 128, 0.5, 1);
  }
  pObstruction = 0;
  *&v3dGoal = x;
  *(&v3dGoal + 4) = LODWORD(y);
  if ( TestCollision(&v3dGoal, &v3dGoal, 0, &pObstruction, pNPC, 2) )
  {
    this->m_bShortPathEndedEarly = 1;
    v19 = CBaseEntity::GetAbsOrigin(pNPC);
    m_Size = this->m_ShortPath.m_Size;
    v21 = this->m_ShortPath.m_Size;
    if ( m_Size == this->m_ShortPath.m_Memory.m_nAllocationCount )
    {
      flRelaitonshipRadiusAdjustmentd = v19;
      CUtlMemory<Vector,int>::Grow(&this->m_ShortPath.m_Memory, 1);
      v21 = this->m_ShortPath.m_Size;
      v19 = flRelaitonshipRadiusAdjustmentd;
    }
    m_pMemory = this->m_ShortPath.m_Memory.m_pMemory;
    v23 = v21 + 1;
    this->m_ShortPath.m_Size = v23;
    v24 = &m_pMemory[m_Size];
    if ( v24 != 0 )
    {
      *&v24->x = *&v19->x;
      v24->z = v19->z;
      v23 = this->m_ShortPath.m_Size;
    }
    v25 = &this->m_Positions.m_Memory.m_pMemory[this->m_Positions.m_Size - 1];
    v26 = v23;
    if ( this->m_ShortPath.m_Memory.m_nAllocationCount == v23 )
    {
      CUtlMemory<Vector,int>::Grow(&this->m_ShortPath.m_Memory, 1);
      v26 = this->m_ShortPath.m_Size;
    }
    this->m_ShortPath.m_Size = v26 + 1;
    v27 = &this->m_ShortPath.m_Memory.m_pMemory[v23];
    if ( v27 != 0 )
    {
      *&v27->x = *&v25->x;
      v27->z = v25->z;
    }
    return;
  }
  LODWORD(v3dGoal) = 0;
  *(&v3dGoal + 1) = 0;
  v103 = 0;
  v104 = 0;
  v105 = CShortPathProbe::PriorityLessFn;
  v28 = CUtlMemoryPoolBase::Alloc(&CShortPathProbe::s_Allocator);
  v30 = v28;
  if ( v28 != 0 )
  {
    v31 = (v28 + 14);
    *v28 = x;
    v28[3] = HIDWORD(v18);
    *(v28 + 1) = y;
    v28[2] = v18;
    v28[8] = 0;
    *(v28 + 5) = 0;
    v28[12] = 256;
    *(v28 + 2) = pNPC;
    v28[13] = 0x80000000;
    if ( ((v28 + 56) & 3) != 0 && Plat_IsInDebugSessionRaw(v29) != 0 )
      __debugbreak();
    *(v30 + 5) = v31;
    v30[526] = 0;
    *(v30 + 264) = 0;
    v30[530] = 16;
    v30[531] = 0x80000000;
    if ( ((v30 + 80) & 3) != 0 && Plat_IsInDebugSessionRaw(v29) != 0 )
      __debugbreak();
    m_pParent = dota_unit_short_path_search_debug.m_pParent;
    *(v30 + 264) = v30 + 532;
    *(v30 + 282) = 0;
    *(v30 + 2264) = 0;
    *(v30 + 2265) = 0;
    v30[567] = 0;
    m_nValue = m_pParent->m_Value.m_nValue;
    v34 = 0;
    if ( m_nValue != 0 )
      v34 = pNPC->m_iIsControllableByPlayer64.m_Value != 0;
    v35 = *(v30 + 2);
    *(v30 + 2288) = v34;
    v36 = v35 - *v30;
    v37 = *(v30 + 3) - *(v30 + 1);
    *(v30 + 568) = v36;
    *(v30 + 569) = v37;
    v38 = 0.0;
    v39 = fsqrt((v36 * v36) + (v37 * v37));
    if ( v39 == 0.0 )
    {
      v40 = -0.0;
      v30[569] = 0;
    }
    else
    {
      v54 = v37 * (1.0 / v39);
      v38 = v36 * (1.0 / v39);
      *(v30 + 569) = v54;
      v40 = -v54;
    }
    *(v30 + 568) = v38;
    *(v30 + 570) = v40;
    v41 = v30[8];
    *(v30 + 571) = v38;
    v42 = v41;
    if ( v41 == v30[12] )
    {
      CUtlMemory<Vector2D,int>::Grow((v30 + 10), 1);
      v42 = v30[8];
    }
    v30[8] = v42 + 1;
    v43 = (*(v30 + 5) + 8 * v41);
    if ( v43 != 0 )
    {
      *v43 = x;
      v43[1] = y;
    }
    v30[6] = 0;
    *(v30 + 7) = fsqrt(((*&v18 - x) * (*&v18 - x)) + ((*(&v18 + 1) - y) * (*(&v18 + 1) - y)));
  }
  v44 = v3dGoal;
  v45 = v3dGoal;
  if ( v3dGoal == v103 )
  {
    CUtlMemory<CShortPathProbe *,int>::Grow((&v3dGoal + 8), 1);
    v45 = v3dGoal;
  }
  v46 = v44;
  LODWORD(v3dGoal) = v45 + 1;
  *(*(&v3dGoal + 1) + 8LL * v44) = v30;
  if ( v3dGoal > v44 && v44 != 0 )
  {
    while ( 1 )
    {
      v82 = 8 * v46;
      v44 = (v44 + 1) / 2 - 1;
      v83 = 8LL * v44;
      if ( v105((v82 + *(&v3dGoal + 1)), (*(&v3dGoal + 1) + v83)) )
        break;
      v80 = (*(&v3dGoal + 1) + v83);
      v81 = *v80;
      *v80 = *(*(&v3dGoal + 1) + v82);
      *(*(&v3dGoal + 1) + v82) = v81;
      if ( v44 == 0 )
        break;
      v46 = v44;
    }
  }
  v47 = dota_short_path_iteration_limit.m_pParent->m_Value.m_nValue;
  if ( v47 <= 0 )
  {
    this->m_bShortPathEndedEarly = 1;
    v84 = CBaseEntity::GetAbsOrigin(pNPC);
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::AddToTail(outPath, v84);
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::AddToTail(
      outPath,
      &this->m_Positions.m_Memory.m_pMemory[this->m_Positions.m_Size - 1]);
    goto LABEL_55;
  }
  v48 = 0;
  flRelaitonshipRadiusAdjustmentb = 0.0;
  v49 = 0;
  v50 = 0;
  m_flPathLength = 0.0;
  v51 = **(&v3dGoal + 1);
  do
  {
    if ( v50 == 0 )
    {
      flRelaitonshipRadiusAdjustmentb = v51->m_flGoalDist;
      m_flPathLength = v51->m_flPathLength;
      goto LABEL_46;
    }
    m_flGoalDist = v51->m_flGoalDist;
    if ( flRelaitonshipRadiusAdjustmentb > m_flGoalDist
      && ((0.050000001 * v51->m_flPathLength) > (v51->m_flPathLength - m_flPathLength)
       || (flRelaitonshipRadiusAdjustmentb - m_flGoalDist) > 40.0) )
    {
      flRelaitonshipRadiusAdjustmentb = v51->m_flGoalDist;
      m_flPathLength = v51->m_flPathLength;
LABEL_46:
      v49 = v51->m_path.m_Size;
      v50 = v51;
    }
    v53 = CShortPathProbe::Advance(v51, &v3dGoal);
    v51 = **(&v3dGoal + 1);
    if ( *(**(&v3dGoal + 1) + 2265LL) != 0 )
      break;
    ++v48;
  }
  while ( v48 != v47 );
  if ( v53 )
  {
    CShortPathProbe::GetPath(v51, outPath, v51->m_path.m_Size);
  }
  else
  {
    this->m_bShortPathEndedEarly = 1;
    CShortPathProbe::GetPath(v50, outPath, v49);
  }
LABEL_55:
  v55 = v3dGoal;
  if ( v3dGoal > 20 )
  {
    DevMsg(
      "Allocated %d probes for a path from Vector( %.2f, %.2f, 0.f ) to Vector( %.2f, %.2f, 0.f )\n",
      x,
      y,
      *&v18,
      *(&v18 + 1));
    v55 = v3dGoal;
  }
  v56 = 0;
  v57 = 0;
  if ( v55 > 0 )
  {
    do
    {
      v58 = *(*(&v3dGoal + 1) + v56);
      if ( v58 != 0 )
      {
        *(v58 + 2104) = 0;
        CUtlMemory<Vector2D,int>::ConvertToExternalMemory((v58 + 2112), (v58 + 2128), 16, 0, 1, 0x3FFFFFFFu);
        if ( (*(v58 + 2124) & 0xC0000000) == 0 )
          CUtlMemory<Vector2D,int>::Purge((v58 + 2112));
        *(v58 + 32) = 0;
        CUtlMemory<Vector2D,int>::ConvertToExternalMemory((v58 + 40), (v58 + 56), 256, 0, 1, 0x3FFFFFFFu);
        if ( (*(v58 + 52) & 0xC0000000) == 0 )
          CUtlMemory<Vector2D,int>::Purge((v58 + 40));
        CUtlMemoryPoolBase::Free(&CShortPathProbe::s_Allocator, v58);
      }
      ++v57;
      v56 += 8;
    }
    while ( v57 < v3dGoal );
  }
  if ( v85 != 0
    && (GetCommonObstructionManagerFlagsForNPC(pNPC, &nAllFlags, &pObstruction),
        LODWORD(pObstruction) = pObstruction | 1,
        nAllFlags |= 0x800u,
        m_flCollisionPadding = pNPC->m_flCollisionPadding,
        v60 = (*(pNPC->_vptr_IHandleEntity + 454))(pNPC),
        CGridNav::PrepareObstructionManager(
          &g_GridNav,
          pNPC->m_flHullRadius,
          nAllFlags,
          pObstruction,
          v60,
          m_flCollisionPadding),
        this->m_ShortPath.m_Size > 1) )
  {
    v62 = 0;
    v63 = 1;
    while ( 1 )
    {
      v64 = this->m_ShortPath.m_Memory.m_pMemory;
      v65 = v62 + 12;
      pObstruction = 0;
      if ( TestCollision((v64 + v62), (&v64[1] + v62), 0, &pObstruction, pNPC, v61) )
        break;
      if ( this->m_ShortPath.m_Size <= ++v63 )
        goto LABEL_81;
      v62 = v65;
    }
    m_nGrowSize = this->m_ShortPath.m_Memory.m_nGrowSize;
    this->m_ShortPath.m_Memory.m_nGrowSize = 0;
    v101.m_nGrowSize = m_nGrowSize;
    v67 = this->m_ShortPath.m_Memory.m_pMemory;
    this->m_ShortPath.m_Memory.m_pMemory = 0;
    v101.m_pMemory = v67;
    LODWORD(v67) = this->m_ShortPath.m_Memory.m_nAllocationCount;
    this->m_ShortPath.m_Memory.m_nAllocationCount = 0;
    v101.m_nAllocationCount = v67;
    LODWORD(v67) = this->m_ShortPath.m_Size;
    this->m_ShortPath.m_Size = 0;
    LODWORD(pObstruction) = v67;
    CGridNavPath::ComputeShortPath(this, pNPC, nFlags | 1);
    v68 = 0.0;
    v69 = this->m_ShortPath.m_Size;
    v70 = 1.5 * fsqrt(((*&v18 - x) * (*&v18 - x)) + ((*(&v18 + 1) - y) * (*(&v18 + 1) - y)));
    if ( v69 > 1 )
    {
      v71 = this->m_ShortPath.m_Memory.m_pMemory;
      v68 = 0.0;
      v72 = v71 + 1;
      v73 = &v71[(v69 - 2) + 1];
      while ( 1 )
      {
        v74 = v71[1].x - v71->x;
        v75 = v71[1].y - v71->y;
        v71 = v72;
        v68 = v68 + fsqrt((v74 * v74) + (v75 * v75));
        if ( v72 == v73 )
          break;
        ++v72;
      }
    }
    if ( v68 > v70 || this->m_bShortPathEndedEarly )
    {
      v76 = this->m_ShortPath.m_Memory.m_nGrowSize;
      this->m_bShortPathEndedEarly = 1;
      v77 = v101.m_nGrowSize;
      v101.m_nGrowSize = v76;
      v78 = this->m_ShortPath.m_Memory.m_pMemory;
      this->m_ShortPath.m_Memory.m_nGrowSize = v77;
      v79 = v101.m_pMemory;
      v101.m_pMemory = v78;
      LODWORD(v78) = this->m_ShortPath.m_Memory.m_nAllocationCount;
      this->m_ShortPath.m_Memory.m_pMemory = v79;
      LODWORD(v79) = v101.m_nAllocationCount;
      v101.m_nAllocationCount = v78;
      LODWORD(v78) = pObstruction;
      this->m_ShortPath.m_Memory.m_nAllocationCount = v79;
      LODWORD(pObstruction) = v69;
      this->m_ShortPath.m_Size = v78;
    }
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&pObstruction);
    if ( (v101.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&v101);
      if ( (v101.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&v101);
    }
    LODWORD(v3dGoal) = 0;
    if ( (v104 & 0xC0000000) == 0 )
    {
      CUtlMemory<CShortPathProbe *,int>::Purge((&v3dGoal + 8));
      if ( (v104 & 0xC0000000) == 0 )
LABEL_80:
        CUtlMemory<CShortPathProbe *,int>::Purge((&v3dGoal + 8));
    }
  }
  else
  {
LABEL_81:
    LODWORD(v3dGoal) = 0;
    if ( (v104 & 0xC0000000) == 0 )
    {
      CUtlMemory<CShortPathProbe *,int>::Purge((&v3dGoal + 8));
      if ( (v104 & 0xC0000000) == 0 )
        goto LABEL_80;
    }
  }
}


// dota_path_repro  (line 1287, @0x00000000026579f0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, Vector, atoi, operator CBaseEntity*, operator=
// calls: UTIL_GetCommandClient, strtol, RandomFloat, Msg, CBaseEntity::SetDebugBits, FindClearSpaceForUnit, CDOTA_BaseNPC::Interrupt, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, CDOTA_BaseNPC::MoveToPosition
// strings: "<%.2f %.2f %.2f> -> <%.2f %.2f %.2f>\n"
// globals: jpt_2657B40
void __fastcall dota_path_repro(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // rbx
  unsigned __int16 v5; // cx
  int v6; // esi
  int v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // rbx
  int v11; // r12d
  __m128i v12; // xmm0
  vec_t v13; // r14d
  double v14; // xmm0_8
  double v15; // xmm1_8
  double v16; // xmm3_8
  double v17; // xmm4_8
  int v18; // xmm8_4
  int v19; // xmm9_4
  int v20; // xmm6_4
  vec_t v21; // xmm7_4
  double v22; // rax
  int v23; // xmm2_4
  double v24; // rax
  float v25; // xmm2_4
  const QAngle *AbsAngles; // rax
  Vector v27; // [rsp+0h] [rbp-60h]
  QAngle angles; // [rsp+30h] [rbp-30h] BYREF
  Vector v29; // 0:xmm0_8.8,8:xmm1_4.4

  CommandClient = UTIL_GetCommandClient();
  v4 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    if ( v4[1].m_iMaxHealth.m_Value == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = v4[1].m_iMaxHealth.m_Value & 0x7FFF;
      v6 = v5;
    }
    v7 = (v4[1].m_iMaxHealth.m_Value >> 15 << 15) | v5 & 0x7FFF;
    LODWORD(angles.x) = v7;
    if ( (v7 + 2) > 1 )
    {
      v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
      if ( v8 != 0 )
      {
        v9 = &v8[v6 & 0x1FF];
        if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && args->m_nArgc == 2 )
          {
            v11 = strtol(args->m_ppArgv[1], 0, 10);
            *v12.m128i_i32 = RandomFloat(0.0, 360.0);
            v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
            switch ( abs32(v11) )
            {
              case 1u:
                v14 = -179.4342956542969;
                v15 = -1256.7685546875;
                v16 = -747.6875;
                v17 = 421.53125;
                v18 = -996337512;
                v19 = -1020039378;
                v20 = 1137886208;
                v21 = -747.6875;
                break;
              case 2u:
                v14 = 8288.0;
                v15 = -8224.0;
                v16 = 8292.0;
                v17 = -8220.390625;
                v18 = -973045760;
                v19 = 1174503424;
                v20 = -973049456;
                v21 = 8292.0;
                break;
              case 3u:
                v14 = -5856.0;
                v15 = -5280.0;
                v16 = -6506.43994140625;
                v17 = -7204.12939453125;
                v18 = -979042304;
                v19 = -977862656;
                v20 = -975101687;
                v21 = -6506.4399;
                break;
              case 4u:
                v14 = 3260.90625;
                v15 = -3773.46875;
                v16 = 2976.4375;
                v17 = -2416.0;
                v18 = -982788224;
                v19 = 1162595968;
                v20 = -988348416;
                v21 = 2976.4375;
                break;
              case 5u:
                v14 = 1632.0;
                v15 = 4320.0;
                v16 = 1568.0;
                v17 = 4832.0;
                v18 = 1166475264;
                v19 = 1154220032;
                v20 = 1167523840;
                v21 = 1568.0;
                break;
              case 6u:
                v14 = 742.96875;
                v15 = -3222.375;
                v16 = -262.28125;
                v17 = -3211.8125;
                v18 = -985045504;
                v19 = 1144634880;
                v20 = -985088768;
                v21 = -262.28125;
                break;
              default:
                v14 = 4000.0;
                v15 = -6112.0;
                v16 = 4128.0;
                v17 = -7072.0;
                v18 = -977338368;
                v19 = 1165623296;
                v20 = -975372288;
                v21 = 4128.0;
                break;
            }
            if ( v11 >= 0 )
            {
              v22 = v16;
              v23 = v18;
              v16 = v14;
              v18 = v20;
              v14 = v22;
              v20 = v23;
              v24 = v17;
              v25 = *&v19;
              v17 = v15;
              v19 = LODWORD(v21);
              v15 = v24;
              v21 = v25;
            }
            v27.x = v21;
            *&v27.y = __PAIR64__(v18, v20);
            Msg("<%.2f %.2f %.2f> -> <%.2f %.2f %.2f>\n", v14, v15, 0.0, v16, v17);
            CBaseEntity::SetDebugBits(m_pInstance, 0x20000u);
            v29.z = 0.0;
            *&v29.x = __PAIR64__(v18, v19);
            FindClearSpaceForUnit(m_pInstance, v29, 1);
            CDOTA_BaseNPC::Interrupt(m_pInstance);
            AbsAngles = CBaseEntity::GetAbsAngles(m_pInstance);
            *&angles.x = *&AbsAngles->x;
            *&AbsAngles = AbsAngles->z;
            angles.y = v13;
            LODWORD(angles.z) = AbsAngles;
            CBaseEntity::SetAbsAngles(m_pInstance, &angles);
            CDOTA_BaseNPC::MoveToPosition(m_pInstance, v27);
          }
        }
      }
    }
  }
}


