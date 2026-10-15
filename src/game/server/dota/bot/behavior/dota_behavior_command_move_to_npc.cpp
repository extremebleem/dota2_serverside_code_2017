
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToNPC::CDOTABehaviorCommandMoveToNPC  (line 10, @0x000000000287dd10, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorMoveTo, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=, ~CDOTABehaviorCommandListener, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorCommandListener::OnCommandApproach, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorCreatureInvade::OnCommandApproach
void __fastcall CDOTABehaviorCommandMoveToNPC::CDOTABehaviorCommandMoveToNPC(
        CDOTABehaviorCommandMoveToNPC *const this,
        CDOTA_BaseNPC *pTarget,
        bool bWasAttacking)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // si
  int v8; // eax

  this->_vptr_INextBotEventResponder = &off_42BCB10;
  this->_vptr_IContextualQuery = &off_42BCF40;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BCFA8;
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->m_eventResult.m_action = 0;
  this->m_eventResult.m_reason = 0;
  this->m_parent = 0;
  this->m_child = 0;
  this->m_buriedUnderMe = 0;
  this->m_coveringMe = 0;
  this->m_actor = 0;
  this->m_behavior = 0;
  this->m_isStarted = 0;
  this->m_isSuspended = 0;
  this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  CGridNavPath::CGridNavPath(&this->m_MoveTo.m_path);
  CountdownTimer::CountdownTimer(&this->m_MoveTo.m_repathTimer);
  this->m_hTarget.m_Index = -1;
  if ( pTarget != 0 )
  {
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v7 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v8 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
  }
  this->m_bWasAttacking = bWasAttacking;
  this->m_bInRange = 0;
}


// CDOTABehaviorCommandMoveToNPC::OnStart  (line 20, @0x0000000002873580, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, ~CDOTABehaviorCommandListener
// calls: CDOTA_BaseNPC::AdvanceMovementOrderTracking, operator new, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::SetTargetLastKnownPosition, CDOTABehaviorMoveTo::OnStart, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "Target handle NULL in OnStart"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToNPC::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToNPC *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  char *v10; // rbx
  CBaseEntity *m_pInstance; // rsi
  Vector v13; // [rsp+0h] [rbp-20h]

  CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v13, 0);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && (m_pInstance = v9->m_pInstance, v9->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    this->m_nMovementState = 0;
    CDOTA_BaseNPC::SetTargetLastKnownPosition(me, m_pInstance);
    CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
    if ( me->m_iIsControllableByPlayer64.m_Value != 0 )
    {
      (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0);
      return retstr;
    }
    else
    {
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
      return retstr;
    }
  }
  else
  {
    v10 = operator new(0x80u);
    *(v10 + 16) = 0;
    *(v10 + 9) = 0;
    *(v10 + 10) = 0;
    *(v10 + 3) = 0;
    *(v10 + 4) = 0;
    *(v10 + 5) = 0;
    *(v10 + 6) = 0;
    *(v10 + 7) = 0;
    *(v10 + 2) = 0;
    v10[96] = 0;
    v10[97] = 0;
    *(v10 + 22) = 0;
    *v10 = &off_42C1970;
    *(v10 + 1) = &off_42C1DA0;
    CountdownTimer::CountdownTimer((v10 + 104));
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_reason = "Target handle NULL in OnStart";
    retstr->m_action = v10;
    return retstr;
  }
}


// CDOTABehaviorCommandMoveToNPC::GetTargetPosition  (line 38, @0x0000000002871c80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetLastKnownPosition, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTABehaviorCommandMoveToNPC::GetTargetPosition(
        CDOTABehaviorCommandMoveToNPC *const this,
        CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  __int64 v11; // [rsp+10h] [rbp-10h]
  vec_t v12; // [rsp+18h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_nMovementState != 0 )
  {
    z = me->m_vTargetLastKnownPosition.z;
    x = me->m_vTargetLastKnownPosition.x;
    HIDWORD(v11) = LODWORD(me->m_vTargetLastKnownPosition.y);
    v12 = z;
    *&v11 = x;
    result.z = z;
    *&result.x = v11;
  }
  else
  {
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  return result;
}


// CDOTABehaviorCommandMoveToNPC::UpdateTargetMissing  (line 50, @0x0000000002877990, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, GetTargetLastKnownPosition, IActionResult, Length2DSqr, Square<float>, VectorSubtract, operator-, ~CDOTABehaviorCommandListener
// calls: CBaseEntity::GetAbsOrigin, operator new, CountdownTimer::CountdownTimer, CDOTABehaviorMoveTo::Update, CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, CDOTABehaviorMoveTo::GetFurthestPathPoint, CDOTABehaviorIdle::CDOTABehaviorIdle, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToNPC::Update
// strings: "In range of the last known target position.", "Arrived at or near the last known target position."
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToNPC::UpdateTargetMissing(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToNPC *const this,
        CDOTA_BaseNPC *me)
{
  const Vector *v6; // rax
  char *v7; // rbx
  CDOTABehaviorMoveTo *p_m_MoveTo; // r14
  const Vector *AbsOrigin; // r15
  CDOTABehaviorIdle *v11; // rbx
  float x; // [rsp+8h] [rbp-48h]
  float y; // [rsp+Ch] [rbp-44h]
  Vector FurthestPathPoint; // 0:kr00_12.12

  if ( this->m_nMovementState == 1 )
  {
    p_m_MoveTo = &this->m_MoveTo;
    if ( CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me)
      && (AbsOrigin = CBaseEntity::GetAbsOrigin(me),
          FurthestPathPoint = CDOTABehaviorMoveTo::GetFurthestPathPoint(p_m_MoveTo),
          (((AbsOrigin->x - FurthestPathPoint.x) * (AbsOrigin->x - FurthestPathPoint.x))
         + ((AbsOrigin->y - FurthestPathPoint.y) * (AbsOrigin->y - FurthestPathPoint.y))) <= 57600.0) )
    {
      v11 = operator new(0x80u);
      CDOTABehaviorIdle::CDOTABehaviorIdle(v11);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v11;
      retstr->m_reason = "Arrived at or near the last known target position.";
    }
    else
    {
      CDOTABehaviorMoveTo::Update(p_m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
    }
  }
  else
  {
    x = me->m_vTargetLastKnownPosition.x;
    y = me->m_vTargetLastKnownPosition.y;
    v6 = CBaseEntity::GetAbsOrigin(me);
    if ( (me->m_flFollowRange * me->m_flFollowRange) < (((v6->x - x) * (v6->x - x)) + ((v6->y - y) * (v6->y - y))) )
    {
      CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
    }
    else
    {
      v7 = operator new(0x80u);
      *(v7 + 16) = 0;
      *(v7 + 9) = 0;
      *(v7 + 10) = 0;
      *(v7 + 3) = 0;
      *(v7 + 4) = 0;
      *(v7 + 5) = 0;
      *(v7 + 6) = 0;
      *(v7 + 7) = 0;
      *(v7 + 2) = 0;
      v7[96] = 0;
      v7[97] = 0;
      *(v7 + 22) = 0;
      *v7 = &off_42C1970;
      *(v7 + 1) = &off_42C1DA0;
      CountdownTimer::CountdownTimer((v7 + 104));
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v7;
      retstr->m_reason = "In range of the last known target position.";
    }
  }
  return retstr;
}


// CDOTABehaviorCommandMoveToNPC::Update  (line 82, @0x000000000287d880, libserver.so)  // inlines: ActionResult, ChangeTo, Continue, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, InState, IndexToIdentity, IsDisarmed, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABehaviorCommandMoveToNPC::UpdateTargetMissing, CDOTA_BaseNPC::IsInvisibleTo, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_BaseNPC::SetTargetLastKnownPosition, CDOTA_BaseNPC::GetRangeToUnit, CDOTA_BaseNPC::GetAttackRange, CDOTA_BaseNPC::IsEntityExceptToAttack, CDOTALocomotor::StopMovement, operator new, CDOTABehaviorCommandMoveToTargetToAttack::CDOTABehaviorCommandMoveToTargetToAttack, CDOTABehaviorMoveTo::Update, CDOTA_BaseNPC::FindModifierByName (19 total)
// strings: "Disarmed and previously following, have reached the target and now begin the attack", "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", "Reached target and target is dead."
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToNPC::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToNPC *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  bool IsInvisibleTo; // r15
  float m_flFollowRange; // xmm1_4
  double v14; // xmm0_8
  CDOTALocomotor *v15; // rax
  unsigned __int64 m_Value; // rax
  CDOTABehaviorCommandMoveToTargetToAttack *v17; // rbx
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  CUnitOrders *NextQueuedOrder; // rax
  CDOTABody *v22; // rax
  CDOTABehaviorIdle *v23; // rbx
  bool HasQueuedOrders; // al
  float flTargetSpeed; // [rsp+0h] [rbp-40h]
  float v26; // [rsp+4h] [rbp-3Ch]
  float v27; // [rsp+4h] [rbp-3Ch]
  float flSpeed; // [rsp+8h] [rbp-38h]
  float flSpeeda; // [rsp+8h] [rbp-38h]
  float flSpeedb; // [rsp+8h] [rbp-38h]
  float flRangeToTarget; // [rsp+Ch] [rbp-34h]

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    if ( this->m_nMovementState == 0 )
      this->m_nMovementState = 2;
    goto LABEL_7;
  }
  IsInvisibleTo = CDOTA_BaseNPC::IsInvisibleTo(v9->m_pInstance, me);
  if ( (IsInvisibleTo || !CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, m_pInstance)) && !me->m_bCanFollowUnseenUnits )
  {
    if ( this->m_nMovementState == 0 )
      this->m_nMovementState = 2 - !IsInvisibleTo;
LABEL_7:
    CDOTABehaviorCommandMoveToNPC::UpdateTargetMissing(retstr, this, me);
    return retstr;
  }
  this->m_nMovementState = 0;
  CDOTA_BaseNPC::SetTargetLastKnownPosition(me, m_pInstance);
  flRangeToTarget = CDOTA_BaseNPC::GetRangeToUnit(me, m_pInstance);
  m_flFollowRange = 200.0;
  if ( (m_pInstance->m_iUnitType & 0x200) == 0 )
    m_flFollowRange = me->m_flFollowRange;
  if ( m_pInstance->m_iTeamNum.m_Value != me->m_iTeamNum.m_Value && this->m_bWasAttacking )
    m_flFollowRange = CDOTA_BaseNPC::GetAttackRange(me);
  if ( this->m_bInRange )
  {
    if ( flRangeToTarget > (m_flFollowRange + 30.0) )
      this->m_bInRange = 0;
  }
  else if ( m_flFollowRange > flRangeToTarget )
  {
    this->m_bInRange = 1;
  }
  flSpeed = m_flFollowRange;
  if ( CDOTA_BaseNPC::IsEntityExceptToAttack(me, m_pInstance) )
  {
    this->m_bInRange = 1;
  }
  else if ( !this->m_bInRange )
  {
    v26 = flSpeed;
    flSpeeda = (*(me->_vptr_IHandleEntity + 386))(me);
    v18 = (*(m_pInstance->_vptr_IHandleEntity + 386))(m_pInstance);
    v19 = flSpeeda;
    v20 = v26;
    if ( flSpeeda > v18 && (m_pInstance->m_nObstructionProperties & 1) != 0 )
    {
      flTargetSpeed = v18;
      v27 = flSpeeda;
      flSpeedb = v20;
      HasQueuedOrders = CDOTA_BaseNPC::HasQueuedOrders(me);
      v19 = v27;
      if ( !HasQueuedOrders )
      {
        if ( (flSpeedb + 50.0) <= flRangeToTarget )
        {
          if ( (flSpeedb + 150.0) > flRangeToTarget )
            v19 = ((v27 - flTargetSpeed) * ((flSpeedb - 50.0) / 100.0)) + flTargetSpeed;
        }
        else
        {
          v19 = flTargetSpeed;
        }
      }
    }
    CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, v19);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  v15 = (*(me->_vptr_IHandleEntity + 376))(me, v14, COERCE_DOUBLE(LODWORD(flSpeed)));
  CDOTALocomotor::StopMovement(v15, 0);
  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
  {
    if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0
      || m_pInstance->m_bIsWaitingToSpawn.m_Value
      || ((m_Value = m_pInstance->m_nUnitState64.m_Value) & 0x100) != 0
      || (m_Value & 4) != 0
      && CDOTA_BaseNPC::FindModifierByName(me, "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", 0) == 0
      || me == m_pInstance
      || m_pInstance->m_iTeamNum.m_Value == me->m_iTeamNum.m_Value
      || (me->m_nUnitState64.m_Value & 2) != 0
      || !this->m_bWasAttacking )
    {
      if ( CDOTA_BaseNPC::HasQueuedOrders(me) && me->m_PseudoQueuedOrders.m_nOrderType == 0 )
      {
        NextQueuedOrder = CDOTA_BaseNPC::GetNextQueuedOrder(me);
        DOTA_ExecuteOrders(NextQueuedOrder, 0, 0, 0);
      }
      v22 = (*(me->_vptr_IHandleEntity + 377))(me);
      CDOTABody::StartAnimation(v22, 0x5DCu, 0, 1.0);
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
    }
    else
    {
      v17 = operator new(0x168u);
      CDOTABehaviorCommandMoveToTargetToAttack::CDOTABehaviorCommandMoveToTargetToAttack(v17, m_pInstance, 0);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v17;
      retstr->m_reason = "Disarmed and previously following, have reached the target and now begin the attack";
    }
  }
  else
  {
    v23 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v23);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v23;
    retstr->m_reason = "Reached target and target is dead.";
  }
  return retstr;
}


// CDOTABehaviorCommandMoveToNPC::OnUnitTeleported  (line 211, @0x0000000002871410, libserver.so)  // inlines: EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, TryContinue, operator CEntityInstance*, operator=
// calls: CDOTA_BaseNPC::CanEntityBeSeenByMyTeam
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToNPC::OnUnitTeleported(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToNPC *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  CBaseEntity *m_pInstance; // r10
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rsi
  CEntityIdentity *v10; // rsi
  CBaseEntity *v12; // rsi

  m_pInstance = 0;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hTarget.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  if ( pUnit == m_pInstance )
  {
    if ( pUnit != 0 && pUnit->m_bIsDOTANPC )
    {
      v12 = pUnit;
      if ( !bLongTeleport )
      {
LABEL_11:
        if ( this->m_nMovementState != 0 || CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, v12) )
          goto LABEL_7;
        goto LABEL_13;
      }
    }
    else
    {
      v12 = 0;
      if ( !bLongTeleport )
        goto LABEL_11;
    }
    if ( (me->m_iUnitType & 0x100) == 0 )
      this->m_hTarget.m_Index = -1;
    if ( this->m_nMovementState != 0 )
      goto LABEL_7;
LABEL_13:
    this->m_nMovementState = 2;
  }
LABEL_7:
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


