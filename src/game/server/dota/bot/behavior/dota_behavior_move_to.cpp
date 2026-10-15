
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorMoveTo::OnStart  (line 9, @0x000000000288ec20, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, operator=<float>
// callers: CDOTABehaviorCommandMoveToPositionToDropItem::OnStart, CDOTABehaviorCreatureCompanion::OnStart, CDOTABehaviorCommandMoveToItemToTake::OnStart, CDOTABehaviorCommandMoveToRuneToTake::OnStart, CDOTABehaviorCommandMoveToNPCToGive::OnStart, CDOTABehaviorCommandMoveToNPC::OnStart, CDOTABehaviorChase::OnStart, CDOTABehaviorPet::OnStart, CDOTABehaviorCommandMoveToPosition::OnStart, CDOTABehaviorCommandMoveToPositionToCast::OnStart, CDOTABehaviorCommandMoveToTargetToAttack::OnStart, CDOTABehaviorCommandMoveToTargetToCast::OnStart (14 total)
void __fastcall CDOTABehaviorMoveTo::OnStart(CDOTABehaviorMoveTo *const this)
{
  this->m_bSetAnimation = 1;
  if ( this->m_repathTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_repathTimer._vptr_CountdownTimer + 2))(&this->m_repathTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_repathTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_bUseSwimAnimations = 0;
  this->m_nRunActivity = 1502;
  this->m_flTargetDist = 0.0;
  this->m_bIsDirectional = 0;
}


// CDOTABehaviorMoveTo::OnResume  (line 21, @0x000000000288eca0, libserver.so)  // inlines: Invalidate, NetworkStateChanged, RemoveAll, Set, operator=<float>
// callers: CDOTABehaviorChase::OnResume, CDOTABehaviorCommandMoveToNPC::OnResume, CDOTABehaviorCommandMoveToTargetToAttack::OnResume, CDOTABehaviorCommandMoveToPosition::OnResume, CDOTABehaviorCommandPatrol::OnResume, CDOTABehaviorCommandMoveToPositionToDropItem::OnResume, CDOTABehaviorCommandMoveToNPCToGive::OnResume, CDOTABehaviorCommandMoveToItemToTake::OnResume, CDOTABehaviorCommandMoveToRuneToTake::OnResume, CDOTABehaviorCompanion::OnResume
void __fastcall CDOTABehaviorMoveTo::OnResume(CDOTABehaviorMoveTo *const this)
{
  if ( this->m_repathTimer.m_timestamp.m_Value == -1.0 )
  {
    this->m_path.m_Positions.m_Size = 0;
  }
  else
  {
    (*(this->m_repathTimer._vptr_CountdownTimer + 2))(&this->m_repathTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_path.m_Positions.m_Size = 0;
    this->m_repathTimer.m_timestamp.m_Value = -1.0;
  }
}


// CDOTABehaviorMoveTo::Update  (line 30, @0x000000000288eec0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetBool, GetElapsed, GetFurthestPathPoint, GetFurthestShortPathPoint, GetInt, GetTimebaseRegister, InTargetThread, Invalidate, IsElapsed, IsEnabled, IsMovementStunned, IsPathCurrentlyExhausted, IsPathEndReached, Length2DSqr, PLAT_CPU_TIME, RemoveAll, SetGroundMoveSpeed, SetLastTargetPosition, SetPlaybackRate, Square<float>, VectorSubtract, operator-, operator=, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BaseNPC::IsActionLocked, CDOTABody::GetAnimation, CDOTABody::GetAnimationSpeed, CBaseAnimating::GetBaseAnimatingController, CGridNavPath::Update, CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::IsAllowedToMove, CDOTABehaviorMoveTo::IsInWater, CDOTABody::StartAnimation, CDOTALocomotor::StopMovement, CountdownTimer::Now (26 total)
// callers: CDOTABehaviorCommandMoveToPositionToDropItem::Update, CDOTABehaviorCommandMoveToPositionToCast::Update, CDOTABehaviorChase::Update, CDOTABehaviorCommandMoveToItemToTake::UpdateTargetMissing, CDOTABehaviorCommandMoveToItemToTake::Update, CDOTABehaviorCommandMoveToNPC::UpdateTargetMissing, CDOTABehaviorCommandMoveToNPCToGive::UpdateTargetMissing, CDOTABehaviorCommandMoveToNPCToGive::Update, CDOTABehaviorCommandMoveToRuneToTake::UpdateTargetMissing, CDOTABehaviorCommandMoveToRuneToTake::Update, CDOTABehaviorCompanion::Update, CDOTABehaviorCreatureCompanion::Update (25 total)
// strings: "CDOTABehaviorMoveTo::Update"
void __fastcall CDOTABehaviorMoveTo::Update(
        CDOTABehaviorMoveTo *const this,
        IDOTABehaviorMoveTo *pMoveTo,
        CDOTA_BaseNPC *me,
        float flSpeed)
{
  int m_enabled; // r11d
  bool v8; // r15
  double v9; // xmm0_8
  int (**vptr_IDOTABehaviorMoveTo)(...); // rax
  vec_t v11; // xmm1_4
  double v12; // xmm0_8
  double v13; // xmm1_8
  double v14; // xmm2_8
  double v15; // xmm3_8
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rax
  const CDOTABody *v19; // rax
  Activity Animation; // r14d
  CDOTABody *v21; // rax
  __m128i v22; // xmm0
  unsigned int v23; // r14d
  CBaseAnimatingController *BaseAnimatingController; // rax
  const Vector *AbsOrigin; // rax
  const Vector *v26; // rax
  bool ShouldTurnAnimate; // r14
  CDOTABody *v28; // rax
  CDOTALocomotor *v29; // rax
  __int64 v30; // r14
  const Vector *v31; // rax
  Vector *v32; // rdx
  float v33; // xmm1_4
  CDOTALocomotor *v34; // rax
  float v35; // xmm1_4
  __int64 v36; // rax
  unsigned __int64 v37; // rbx
  ThreadId_t v38; // r12
  unsigned __int64 v39; // rax
  uint64 v40; // rcx
  uint64 m_numTimeBaseTicks; // rcx
  CDOTABody *v42; // rax
  char v43; // al
  float m_flTargetDist; // xmm0_4
  int m_Size; // edx
  Vector *v46; // rdx
  float v47; // xmm0_4
  float v48; // xmm1_4
  CVProfNode *m_pParent; // rax
  CDOTALocomotor *v50; // rax
  Vector *v51; // rdx
  float v52; // xmm1_4
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v54; // rax
  __int64 v55; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-58h]
  unsigned __int64 v57; // [rsp+10h] [rbp-50h]
  bool bFinishedPatha; // [rsp+1Ch] [rbp-44h]
  Activity bFinishedPathb; // [rsp+1Ch] [rbp-44h]
  Vector vTargetPos; // [rsp+20h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v8 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v57 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTABehaviorMoveTo::Update" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTABehaviorMoveTo::Update",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v54 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v54->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v57 + __rdtsc();
  }
  if ( !CDOTA_BaseNPC::IsActionLocked(me) )
  {
    v9 = (*pMoveTo->_vptr_IDOTABehaviorMoveTo)(pMoveTo, me);
    vptr_IDOTABehaviorMoveTo = pMoveTo->_vptr_IDOTABehaviorMoveTo;
    *&vTargetPos.x = v9;
    vTargetPos.z = v11;
    if ( vptr_IDOTABehaviorMoveTo[1](pMoveTo) != 0 )
    {
      v43 = CountdownTimer::Now(&this->m_repathTimer) >= this->m_repathTimer.m_timestamp.m_Value;
      if ( dota_unit_moveto_repath_on_target_move.m_pParent->m_Value.m_nValue != 0 )
      {
        m_flTargetDist = this->m_flTargetDist;
        if ( m_flTargetDist > 0.0 )
        {
          m_Size = this->m_path.m_Positions.m_Size;
          if ( m_Size > 0 && !this->m_path.m_bPartial )
          {
            v46 = &this->m_path.m_Positions.m_Memory.m_pMemory[m_Size - 1];
            v43 |= (((v46->x - vTargetPos.x) * (v46->x - vTargetPos.x))
                  + ((v46->y - vTargetPos.y) * (v46->y - vTargetPos.y))) > (m_flTargetDist * m_flTargetDist);
          }
        }
      }
      if ( v43 != 0 )
      {
        this->m_path.m_Positions.m_Size = 0;
        v47 = RandomFloat(0.2, 0.5);
        CountdownTimer::Start(&this->m_repathTimer, v47, v48);
      }
    }
    if ( this->m_path.m_Positions.m_Size <= 0 )
    {
      if ( this->m_bIsDirectional )
        CGridNavPath::BuildDirectional(&this->m_path, me, &vTargetPos);
      else
        CGridNavPath::Build(&this->m_path, me, &vTargetPos, LODWORD(this->m_flTargetDist));
    }
    else if ( *((*(me->_vptr_IHandleEntity + 376))(me) + 144) == 0
           && me->m_iIsControllableByPlayer64.m_Value != 0
           && (this->m_path.m_Positions.m_Size <= 0 || !CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(this, me)) )
    {
      CGridNavPath::Rebuild(&this->m_path, me);
    }
    *&v15 = LODWORD(flSpeed);
    v16 = 0.0;
    if ( flSpeed <= 0.0 )
    {
      *&v12 = (*(me->_vptr_IHandleEntity + 386))(me);
      flSpeed = *&v12;
    }
    *&v17 = LODWORD(flSpeed);
    if ( flSpeed == -1.0 )
    {
      flSpeed = 0.0;
      if ( !this->m_bIsDirectional )
        goto LABEL_10;
    }
    else if ( !this->m_bIsDirectional )
    {
      goto LABEL_10;
    }
    v34 = (*(me->_vptr_IHandleEntity + 376))(me, v12, v13, v14, v15, v16, v17);
    if ( !CDOTALocomotor::IsFacingLocation(v34, &vTargetPos, 0x41200000u, v35) )
    {
      *((*(me->_vptr_IHandleEntity + 376))(me) + 172) = 0;
      v36 = (*(me->_vptr_IHandleEntity + 376))(me);
      (*(*v36 + 744LL))(v36, &vTargetPos);
      goto LABEL_11;
    }
LABEL_10:
    *((*(me->_vptr_IHandleEntity + 376))(me, v12, v13, v14, v15, v16, v17) + 172) = flSpeed;
    v18 = (*(me->_vptr_IHandleEntity + 376))(me);
    *(v18 + 160) = vTargetPos;
LABEL_11:
    v19 = (*(me->_vptr_IHandleEntity + 377))(me);
    Animation = CDOTABody::GetAnimation(v19);
    v21 = (*(me->_vptr_IHandleEntity + 377))(me);
    *v22.m128i_i32 = CDOTABody::GetAnimationSpeed(v21, Animation);
    v23 = _mm_cvtsi128_si32(v22);
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(me);
    (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(
      BaseAnimatingController,
      *_mm_cvtsi32_si128(v23).m128i_i64);
    CGridNavPath::Update(&this->m_path, me);
    if ( this->m_path.m_Positions.m_Size > 0 && CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(this, me) )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(me);
      if ( (((vTargetPos.x - AbsOrigin->x) * (vTargetPos.x - AbsOrigin->x))
          + ((vTargetPos.y - AbsOrigin->y) * (vTargetPos.y - AbsOrigin->y))) >= 2.0 )
      {
        v55 = (*(me->_vptr_IHandleEntity + 376))(me);
        (*(*v55 + 744LL))(v55, &vTargetPos);
      }
    }
    goto LABEL_15;
  }
  this->m_path.m_Positions.m_Size = 0;
  v29 = (*(me->_vptr_IHandleEntity + 376))(me);
  CDOTALocomotor::StopMovement(v29, 0);
  if ( this->m_bIsDirectional )
  {
    v30 = (*(me->_vptr_IHandleEntity + 376))(me);
    if ( CountdownTimer::Now((v30 + 184)) < *(v30 + 196) )
    {
      v31 = CBaseEntity::GetAbsOrigin(me);
      CGridNavPath::Build(&this->m_path, me, v31, 0LL);
    }
  }
LABEL_15:
  if ( this->m_bSetAnimation )
  {
    bFinishedPatha = 1;
    if ( this->m_path.m_Positions.m_Size > 0 )
    {
      v26 = CBaseEntity::GetAbsOrigin(me);
      if ( this->m_path.m_bPartial
        || (v32 = &this->m_path.m_Positions.m_Memory.m_pMemory[this->m_path.m_Positions.m_Size - 1],
            v33 = v32->y - v26->y,
            (((v32->x - v26->x) * (v32->x - v26->x)) + (v33 * v33)) >= 2.0) )
      {
        if ( !this->m_path.m_bShortPathEndedEarly
          || (v51 = &this->m_path.m_ShortPath.m_Memory.m_pMemory[this->m_path.m_ShortPath.m_Size - 1],
              v52 = v51->y - v26->y,
              (((v51->x - v26->x) * (v51->x - v26->x)) + (v52 * v52)) >= 2.0) )
        {
          bFinishedPatha = 0;
        }
      }
    }
    if ( CDOTA_BaseNPC::IsAllowedToMove(me) )
    {
      ShouldTurnAnimate = 1;
      if ( bFinishedPatha )
      {
        v50 = (*(me->_vptr_IHandleEntity + 376))(me);
        ShouldTurnAnimate = CDOTALocomotor::ShouldTurnAnimate(v50);
      }
    }
    else
    {
      ShouldTurnAnimate = 0;
    }
    if ( CDOTABehaviorMoveTo::IsInWater(this, me) )
    {
      v28 = (*(me->_vptr_IHandleEntity + 377))(me);
      CDOTABody::StartAnimation(v28, !ShouldTurnAnimate ? 1688 : 1684, 0, 1.0);
    }
    else
    {
      bFinishedPathb = 1500;
      if ( ShouldTurnAnimate )
        bFinishedPathb = this->m_nRunActivity;
      v42 = (*(me->_vptr_IHandleEntity + 377))(me);
      CDOTABody::StartAnimation(v42, bFinishedPathb, 0, 1.0);
    }
  }
  if ( v8 )
  {
    v37 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v38 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v38 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v39 = __rdtsc();
    v40 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v40 - v37 + (v39 | (HIDWORD(v39) << 32));
  }
}


// CDOTABehaviorMoveTo::OnContact  (line 146, @0x000000000288ed10, libserver.so)
// calls: CGridNavPath::Rebuild
// callers: CDOTABehaviorCommandMoveToNPC::OnContact, CDOTABehaviorCommandMoveToTargetToAttack::OnContact, CDOTABehaviorCommandMoveToPosition::OnContact, CDOTABehaviorCommandPatrol::OnContact, CDOTABehaviorCommandMoveToTargetToCast::OnContact, CDOTABehaviorCommandMoveToPositionToCast::OnContact, CDOTABehaviorCommandMoveToPositionToDropItem::OnContact, CDOTABehaviorCommandMoveToNPCToGive::OnContact, CDOTABehaviorCommandMoveToItemToTake::OnContact, CDOTABehaviorCommandMoveToRuneToTake::OnContact
void __fastcall CDOTABehaviorMoveTo::OnContact(CDOTABehaviorMoveTo *const this, CDOTA_BaseNPC *me, CBaseEntity *other)
{
  CGridNavPath::Rebuild(&this->m_path, me);
}


// CDOTABehaviorMoveTo::IsPathEndReached  (line 153, @0x000000000288ed20, libserver.so)  // inlines: GetFurthestPathPoint, IsPathEndReached, Length2DSqr, VectorSubtract, operator-, operator[]
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTABehaviorCommandMoveToPosition::Update
bool __fastcall CDOTABehaviorMoveTo::IsPathEndReached(CDOTABehaviorMoveTo *const this, CDOTA_BaseNPC *me)
{
  const Vector *AbsOrigin; // rax
  Vector *v5; // rdx
  float v6; // xmm1_4

  if ( this->m_path.m_Positions.m_Size <= 0 )
    return 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  if ( this->m_path.m_bPartial )
    return 0;
  v5 = &this->m_path.m_Positions.m_Memory.m_pMemory[this->m_path.m_Positions.m_Size - 1];
  v6 = v5->y - AbsOrigin->y;
  return (((v5->x - AbsOrigin->x) * (v5->x - AbsOrigin->x)) + (v6 * v6)) < 2.0;
}


// CDOTABehaviorMoveTo::IsPathCurrentlyExhausted  (line 160, @0x000000000288c300, libserver.so)  // inlines: GetFurthestPathPoint, GetFurthestShortPathPoint, IsPathCurrentlyExhausted, IsPathEndReached, Length2DSqr, VectorSubtract, operator-, operator[]
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, CDOTABehaviorMoveTo::Update, CDOTABehaviorMoveToNPCToAttack::Update, CDOTABehaviorInvade::Update, CDOTABehaviorTutorialInvade::Update, CDOTABehaviorRoquelaireInvade::Update
bool __fastcall CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(CDOTABehaviorMoveTo *const this, CDOTA_BaseNPC *me)
{
  const Vector *AbsOrigin; // rdx
  bool result; // al
  Vector *v5; // rax
  float v6; // xmm0_4
  float v7; // xmm1_4
  Vector *v8; // rax
  float x; // xmm0_4
  float y; // xmm1_4

  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  if ( this->m_path.m_bPartial
    || (v5 = &this->m_path.m_Positions.m_Memory.m_pMemory[this->m_path.m_Positions.m_Size - 1],
        v6 = v5->x,
        v7 = v5->y,
        result = 1,
        (((v6 - AbsOrigin->x) * (v6 - AbsOrigin->x)) + ((v7 - AbsOrigin->y) * (v7 - AbsOrigin->y))) >= 2.0) )
  {
    if ( !this->m_path.m_bShortPathEndedEarly )
      return 0;
    v8 = &this->m_path.m_ShortPath.m_Memory.m_pMemory[this->m_path.m_ShortPath.m_Size - 1];
    x = v8->x;
    y = v8->y;
    result = 1;
    if ( (((x - AbsOrigin->x) * (x - AbsOrigin->x)) + ((y - AbsOrigin->y) * (y - AbsOrigin->y))) >= 2.0 )
      return 0;
  }
  return result;
}


// CDOTABehaviorMoveTo::IsPathCurrentlyExhausted  (line 160, @0x000000000288eda0, libserver.so)
// calls: CDOTABehaviorMoveTo::IsPathCurrentlyExhausted
// callers: CDOTABehaviorCommandMoveToNPC::UpdateTargetMissing, CDOTABehaviorPet::Update_CheckForEmoteOpportunities, CDOTABehaviorCommandPatrol::Update, CDOTABehaviorCommandMoveToTargetToAttack::UpdateTargetMissing, CDOTABehaviorCommandMoveToTargetToCast::UpdateTargetMissing, CDOTABehaviorCommandMoveToPosition::Update
bool __fastcall CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(CDOTABehaviorMoveTo *const this, CDOTA_BaseNPC *me)
{
  return this->m_path.m_Positions.m_Size > 0 && CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(this, me);
}


// CDOTABehaviorMoveTo::GetFurthestPathPoint  (line 167, @0x000000000288edc0, libserver.so)  // inlines: GetFurthestPathPoint, operator[]
// callers: CDOTABehaviorCommandMoveToNPC::UpdateTargetMissing, CDOTABehaviorCommandMoveToTargetToAttack::UpdateTargetMissing, CDOTABehaviorCommandMoveToTargetToCast::UpdateTargetMissing, CDOTABehaviorCommandMoveToPosition::Update
Vector __fastcall CDOTABehaviorMoveTo::GetFurthestPathPoint(CDOTABehaviorMoveTo *const this)
{
  Vector *m_pMemory; // rdx
  int v2; // eax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pMemory = this->m_path.m_Positions.m_Memory.m_pMemory;
  v2 = this->m_path.m_Positions.m_Size - 1;
  *&result.x = *&m_pMemory[v2].x;
  result.z = m_pMemory[v2].z;
  return result;
}


// CDOTABehaviorMoveTo::IsInWater  (line 173, @0x000000000288edf0, libserver.so)  // inlines: GetMapDataForSpawnGroup, GetSpawnGroupHandle
// calls: CWorldGameSystem::GetWorldInfoForSpawnGroup, CBaseEntity::GetAbsOrigin
// callers: CDOTABehaviorPet::Update_CheckForEmoteOpportunities, CDOTABehaviorMoveTo::Update
bool __fastcall CDOTABehaviorMoveTo::IsInWater(CDOTABehaviorMoveTo *const this, CDOTA_BaseNPC *me)
{
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // esi
  __int64 m_mapDataHandle; // r13
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  void (__fastcall *v8)(IDotaMapUtils *, __int64, float, float); // r15
  const Vector *AbsOrigin; // rax
  float v10; // xmm0_4
  bool result; // al
  float flWaterHeight; // [rsp+Ch] [rbp-34h]

  m_pEntity = me->m_pEntity;
  if ( m_pEntity != 0 )
    m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
  else
    m_hSpawnGroup = 0;
  m_mapDataHandle = -1;
  WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, m_hSpawnGroup);
  if ( WorldInfoForSpawnGroup != 0 )
    m_mapDataHandle = WorldInfoForSpawnGroup->m_mapDataHandle;
  v8 = *(*g_pDotaMapUtils + 136LL);
  flWaterHeight = CBaseEntity::GetAbsOrigin(me)->y;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v8(g_pDotaMapUtils, m_mapDataHandle, AbsOrigin->x, flWaterHeight);
  result = 0;
  if ( this->m_bUseSwimAnimations )
    return (v10 - 12.0) > CBaseEntity::GetAbsOrigin(me)->z;
  return result;
}


