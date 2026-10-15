
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToPositionToCast::CDOTABehaviorCommandMoveToPositionToCast  (line 13, @0x000000000287df00, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorMoveTo, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=, ~CDOTABehaviorCommandListener, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorCommandListener::OnCastAbilityOnPosition, CDOTABehaviorCommandMoveToPosition::Update, CDOTABehaviorCreatureInvade::OnCastAbilityOnPosition, CDOTA_BaseNPC_Creature::ConsiderUsingAbilities
void __fastcall CDOTABehaviorCommandMoveToPositionToCast::CDOTABehaviorCommandMoveToPositionToCast(
        CDOTABehaviorCommandMoveToPositionToCast *const this,
        CDOTABaseAbility *pAbility,
        const Vector *const vPosition)
{
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx

  this->_vptr_INextBotEventResponder = &off_42BDE10;
  this->_vptr_IContextualQuery = &off_42BE240;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BE2A8;
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
  this->m_hAbility.m_Index = -1;
  this->m_vPosition = *vPosition;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v8 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v7 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
}


// CDOTABehaviorCommandMoveToPositionToCast::OnStart  (line 21, @0x000000000287b060, libserver.so)  // inlines: ActionResult, Continue, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, Invalidate, InvalidatePath, IsValid, LookupEntity, Max<float>, SetTargetDistance, operator CEntityInstance*
// calls: CDOTA_BaseNPC::AdvanceMovementOrderTracking, CDOTA_BaseNPC::SetCurrentActiveAbility, CDOTABehaviorMoveTo::OnStart, CDOTA_BaseNPC::GetCurrentActiveAbility, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionToCast::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionToCast *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CDOTABaseAbility *m_pInstance; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTABaseAbility *CurrentActiveAbility; // rax
  CDOTABaseAbility *v12; // r14
  int v13; // r15d
  __m128 v14; // xmm1
  float v15; // xmm2_4
  Vector v17; // [rsp+0h] [rbp-40h]

  CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v17, 0);
  m_Index = this->m_hAbility.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hAbility.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  CDOTA_BaseNPC::SetCurrentActiveAbility(me, m_pInstance);
  CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(me);
  v12 = CurrentActiveAbility;
  if ( CurrentActiveAbility != 0 )
  {
    v13 = (*(CurrentActiveAbility->_vptr_IHandleEntity + 226))(CurrentActiveAbility, &this->m_vPosition, 0, 0.0);
    v14.m128_f32[0] = ((*(v12->_vptr_IHandleEntity + 228))(v12) + v13) - g_GridNav.m_flEdgeSize;
    LODWORD(v15) = _mm_cmplt_ss(0LL, v14).m128_u32[0] & v14.m128_i32[0];
    if ( v15 != this->m_MoveTo.m_flTargetDist )
    {
      this->m_MoveTo.m_flTargetDist = v15;
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
    }
  }
  this->m_bTurningToTarget = 0;
  this->m_flTargetAngle = 0.0;
  if ( me->m_iIsControllableByPlayer64.m_Value != 0 )
  {
    (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0);
  }
  else
  {
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
  }
  return retstr;
}


// CDOTABehaviorCommandMoveToPositionToCast::Update  (line 40, @0x0000000002876800, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, IActionResult, InState, IsFullyCastable, IsSilenced, IsTrained, Length2DSqr, SetCastLock, SuspendFor, VectorSubtract, operator-, ~CDOTABehaviorCommandListener
// calls: CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_BaseNPC::IsActionLocked, CDOTALocomotor::IsFacingLocation, CDOTABaseAbility::GetEffectiveLevel, operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, CDOTA_BaseNPC::IsPositionInRange, CDOTA_BaseNPC::UpdatePseudoQueuedOrder, CDOTABehaviorMoveTo::Update, CBaseEntity::GetAbsOrigin, CDOTABody::StartAnimation, CDOTALocomotor::StopMovement (20 total)
// strings: "Interrupted at cast position, ability is not fully castable", "Current ability is NULL", "Interrupted at cast position, silenced or not enough mana.", "In range to cast on position"
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionToCast::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionToCast *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  CDOTABaseAbility *CurrentActiveAbility; // rax
  CDOTABaseAbility *v8; // r12
  float v9; // xmm3_4
  float m_flTargetAngle; // xmm0_4
  CDOTALocomotor *v11; // rax
  float v12; // xmm1_4
  unsigned __int64 m_Value; // rax
  CDOTABehaviorIdle *v14; // rbx
  const Vector *AbsOrigin; // rax
  float v17; // xmm1_4
  CDOTABody *v18; // rax
  __int64 v19; // rax
  CDOTALocomotor *v20; // rax
  CDOTALocomotor *v21; // rax
  CDOTABehaviorIdle *v22; // rbx
  char *v23; // rbx
  CDOTABehaviorAbility *v24; // rbx
  Vector v25; // [rsp+0h] [rbp-40h]
  float flBaseCastRange; // [rsp+Ch] [rbp-34h]
  float flBaseCastRangea; // [rsp+Ch] [rbp-34h]

  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(me);
  v8 = CurrentActiveAbility;
  if ( CurrentActiveAbility == 0 )
  {
    v22 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v22);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v22;
    retstr->m_reason = "Current ability is NULL";
    return retstr;
  }
  flBaseCastRange = (*(CurrentActiveAbility->_vptr_IHandleEntity + 226))(CurrentActiveAbility, &this->m_vPosition, 0);
  (*(v8->_vptr_IHandleEntity + 228))(v8);
  if ( (flBaseCastRange == 0.0 || CDOTA_BaseNPC::IsPositionInRange(me, v25, v9)) && !CDOTA_BaseNPC::IsActionLocked(me) )
  {
    if ( this->m_bTurningToTarget )
    {
      m_flTargetAngle = this->m_flTargetAngle;
    }
    else
    {
      v21 = (*(me->_vptr_IHandleEntity + 376))(me);
      m_flTargetAngle = CDOTALocomotor::GetCastAngle(v21, me, &this->m_vPosition);
      this->m_bTurningToTarget = 1;
      this->m_flTargetAngle = m_flTargetAngle;
    }
    flBaseCastRangea = m_flTargetAngle;
    v11 = (*(me->_vptr_IHandleEntity + 376))(me);
    if ( !CDOTALocomotor::IsFacingLocation(v11, &this->m_vPosition, LODWORD(flBaseCastRangea), v12) )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(me);
      v17 = AbsOrigin->y - this->m_vPosition.y;
      if ( (((AbsOrigin->x - this->m_vPosition.x) * (AbsOrigin->x - this->m_vPosition.x)) + (v17 * v17)) >= 2.0 )
      {
        v18 = (*(me->_vptr_IHandleEntity + 377))(me);
        CDOTABody::StartAnimation(v18, 0x5DCu, 0, 1.0);
        v19 = (*(me->_vptr_IHandleEntity + 376))(me);
        (*(*v19 + 744LL))(v19, &this->m_vPosition);
        v20 = (*(me->_vptr_IHandleEntity + 376))(me);
        CDOTALocomotor::StopMovement(v20, 0);
        me->m_bCastLocked = 1;
        CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
        retstr->m_type = ActionResultType::CONTINUE;
        retstr->m_action = 0;
        retstr->m_reason = 0;
        return retstr;
      }
    }
    m_Value = me->m_nUnitState64.m_Value;
    if ( (m_Value & 8) != 0 )
    {
      if ( (*(v8->_vptr_IHandleEntity + 223))(v8) == 0 )
      {
LABEL_22:
        v23 = operator new(0x80u);
        *(v23 + 16) = 0;
        *(v23 + 9) = 0;
        *(v23 + 10) = 0;
        *(v23 + 3) = 0;
        *(v23 + 4) = 0;
        *(v23 + 5) = 0;
        *(v23 + 6) = 0;
        *(v23 + 7) = 0;
        *(v23 + 2) = 0;
        v23[96] = 0;
        v23[97] = 0;
        *(v23 + 22) = 0;
        *v23 = &off_42C1970;
        *(v23 + 1) = &off_42C1DA0;
        CountdownTimer::CountdownTimer((v23 + 104));
        retstr->m_type = ActionResultType::CHANGE_TO;
        retstr->m_action = v23;
        retstr->m_reason = "Interrupted at cast position, silenced or not enough mana.";
        return retstr;
      }
      m_Value = me->m_nUnitState64.m_Value;
    }
    if ( (m_Value & 0x10) != 0 && (*(v8->_vptr_IHandleEntity + 223))(v8) != 0 )
      goto LABEL_22;
    if ( CDOTABaseAbility::GetEffectiveLevel(v8) >= 0
      && (*(v8->_vptr_IHandleEntity + 245))(v8) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(v8)
      && CDOTABaseAbility::IsOwnersGoldEnough(v8, -1) )
    {
      v24 = operator new(0x80u);
      CDOTABehaviorAbility::CDOTABehaviorAbility(v24, v8, &this->m_vPosition);
      retstr->m_action = v24;
      this->m_eventResult.m_type = ActionResultType::CONTINUE;
      this->m_eventResult.m_action = 0;
      this->m_eventResult.m_reason = 0;
      this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
      retstr->m_type = ActionResultType::SUSPEND_FOR;
      retstr->m_reason = "In range to cast on position";
    }
    else
    {
      v14 = operator new(0x80u);
      CDOTABehaviorIdle::CDOTABehaviorIdle(v14);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v14;
      retstr->m_reason = "Interrupted at cast position, ability is not fully castable";
    }
  }
  else
  {
    this->m_bTurningToTarget = 0;
    me->m_bCastLocked = 0;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
    CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
  }
  return retstr;
}


// CDOTABehaviorCommandMoveToPositionToCast::OnResume  (line 103, @0x0000000002871090, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, EventDesiredResult, IActionResult, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionToCast::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionToCast *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  char *v5; // rbx

  v5 = operator new(0x80u);
  *(v5 + 16) = 0;
  *(v5 + 9) = 0;
  *(v5 + 10) = 0;
  *(v5 + 3) = 0;
  *(v5 + 4) = 0;
  *(v5 + 5) = 0;
  *(v5 + 6) = 0;
  *(v5 + 7) = 0;
  *(v5 + 2) = 0;
  v5[96] = 0;
  v5[97] = 0;
  *(v5 + 22) = 0;
  *v5 = &off_42C1970;
  *(v5 + 1) = &off_42C1DA0;
  CountdownTimer::CountdownTimer((v5 + 104));
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_action = v5;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorCommandMoveToPositionToCast::OnEnd  (line 110, @0x0000000002870850, libserver.so)  // inlines: SetCastLock
// calls: CDOTA_BaseNPC::UpdatePseudoQueuedOrder, CDOTA_BaseNPC::SetCurrentActiveAbility
void __fastcall CDOTABehaviorCommandMoveToPositionToCast::OnEnd(
        CDOTABehaviorCommandMoveToPositionToCast *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  me->m_bCastLocked = 0;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
  CDOTA_BaseNPC::SetCurrentActiveAbility(me, 0);
}


