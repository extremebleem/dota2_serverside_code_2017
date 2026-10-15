
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition  (line 16, @0x000000000287cd20, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorMoveTo, EventDesiredResult, IActionResult, operator=, ~CDOTABehaviorCommandListener, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorCommandListener::OnCommandMoveTo, CDOTABehaviorCommandListener::OnCommandMoveToDirection, CDOTABehaviorCommandListener::OnCommandMoveToAggressive, CDOTABehaviorCommandMoveToPositionAggressive::Update, CDOTABehaviorCreatureInvade::OnCommandMoveTo, CDOTABehaviorCreatureInvade::OnCommandMoveToAggressive, CDOTABehaviorMoveToNPCToAttack::Update, CDOTABehaviorNeutralAggroReturn::Update, CDOTABehaviorIdle::Update
void __fastcall CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition(
        CDOTABehaviorCommandMoveToPosition *const this,
        const Vector *const vPosition,
        bool bDirectional)
{
  vec_t z; // xmm0_4

  this->_vptr_INextBotEventResponder = &off_42BD490;
  this->_vptr_IContextualQuery = &off_42BD8C8;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BD930;
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
  this->m_vPosition.x = vPosition->x;
  this->m_vPosition.y = vPosition->y;
  z = vPosition->z;
  this->m_bDirectional = bDirectional;
  this->m_vPosition.z = z;
}


// CDOTABehaviorCommandMoveToPosition::OnStart  (line 24, @0x000000000287af70, libserver.so)  // inlines: ActionResult, Continue, IActionResult, Invalidate, InvalidatePath, SetDirectionalMove
// calls: CDOTA_BaseNPC::AdvanceMovementOrderTracking, CDOTABehaviorMoveTo::OnStart, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPosition::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPosition *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  bool m_bDirectional; // al
  Vector v9; // [rsp+0h] [rbp-20h]

  if ( (*(this->_vptr_INextBotEventResponder + 132))(this, this, me, priorAction) != 0 )
    CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v9, 0);
  else
    CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 1, v9, 0);
  CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
  m_bDirectional = this->m_bDirectional;
  if ( m_bDirectional != this->m_MoveTo.m_bIsDirectional )
  {
    this->m_MoveTo.m_bIsDirectional = m_bDirectional;
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  }
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


// CDOTABehaviorCommandMoveToPosition::Update  (line 43, @0x000000000287f3e0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorInvade, CDOTABehaviorMoveTo, CEntityHandle, CHandle, ChangeTo, Continue, EventDesiredResult, Get, GetDesiredCastLocation, GetInitialGoalEntity, GetInstance, GetMotionControlStartPosition, IActionResult, Invalidate, InvalidatePath, Length2DSqr, SetDirectionalMove, SuspendFor, UpdateCurrentOrderDestination, VectorSubtract, operator CBaseEntity*, operator-, operator=, ~CGridNavPath, ~CUtlVector
// calls: CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, CDOTABehaviorMoveTo::Update, CDOTA_BaseNPC_Creature::CalculateCreatureDesire, CEntityHandle::operator CEntityInstance*, operator new, CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, CDOTABehaviorMoveTo::IsPathEndReached, CBaseEntity::GetAbsOrigin, CDOTABehaviorIdle::CDOTABehaviorIdle, CDOTALocomotor::MotionControllersIgnoreIntermediateMovement, DestinationPassed (26 total)
// callers: CDOTABehaviorCommandMoveToPositionAggressive::Update
// strings: "Reached path end", "Destination passed via motion controller.", "Exhausted path near path end", "Cast my offensive spell with no target.", "Cast my escape spell on a unit.", "Cast my escape spell on a position."
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPosition::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPosition *const this,
        CDOTA_BaseNPC_Creature *me,
        float interval)
{
  char *v8; // rbx
  const Vector *v9; // rax
  float v10; // xmm1_4
  CDOTABehaviorIdle *v11; // rbx
  CDOTALocomotor *v12; // rax
  __int64 v13; // rax
  vec_t v14; // xmm0_4
  vec_t v15; // xmm2_4
  Vector *AbsOrigin; // rax
  CDOTABehaviorIdle *v17; // rbx
  const Vector *v18; // r15
  CDOTABehaviorIdle *v19; // rbx
  CDOTABaseAbility *DesiredEscapeAbility; // r15
  float v21; // edx
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v23; // xmm2_4
  int v24; // xmm0_4
  CDOTALocomotor *v25; // rax
  float CastAngle; // xmm0_4
  int (**v27)(...); // rax
  int v28; // xmm1_4
  vec_t v29; // xmm3_4
  CDOTALocomotor *v30; // rax
  float v31; // xmm1_4
  CDOTABehaviorCommandCastHere *v32; // rbx
  CBaseEntity *m_pDesiredNPCTarget; // r14
  CDOTABehaviorCommandMoveToTargetToCast *v34; // rbx
  const CUnitOrders *QueuedOrder; // r15
  int m_nOrderType; // eax
  bool v37; // dl
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  __int64 v40; // rax
  int z_low; // xmm0_4
  vec_t x; // xmm2_4
  CDOTABehaviorCommandMoveToPositionToCast *v43; // rbx
  float flTargetAngle; // [rsp+8h] [rbp-58h]
  Vector vPathEndPos; // [rsp+10h] [rbp-50h] BYREF
  Vector vStart; // [rsp+20h] [rbp-40h]

  if ( (*(this->_vptr_INextBotEventResponder + 132))(this, interval) == 0
    && *((*(me->_vptr_IHandleEntity + 376))(me) + 244) != 0 )
  {
    v12 = (*(me->_vptr_IHandleEntity + 376))(me);
    if ( CDOTALocomotor::MotionControllersIgnoreIntermediateMovement(v12) )
    {
      v13 = (*(me->_vptr_IHandleEntity + 376))(me);
      v14 = *(v13 + 240);
      v15 = *(v13 + 232);
      vStart.y = *(v13 + 236);
      vStart.z = v14;
      vStart.x = v15;
      AbsOrigin = CBaseEntity::GetAbsOrigin(me);
      if ( DestinationPassed(*AbsOrigin, vStart, this->m_vPosition) != 0 )
      {
        v17 = operator new(0x80u);
        CDOTABehaviorIdle::CDOTABehaviorIdle(v17);
        retstr->m_type = ActionResultType::CHANGE_TO;
        retstr->m_action = v17;
        retstr->m_reason = "Destination passed via motion controller.";
        return retstr;
      }
    }
  }
  if ( CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me) )
  {
    if ( CDOTABehaviorMoveTo::IsPathEndReached(&this->m_MoveTo, me) )
    {
      if ( me->m_PseudoQueuedOrders.m_nOrderType != 0
        || (QueuedOrder = CDOTA_BaseNPC::PeekNextQueuedOrder(me)) == 0
        || ((*(this->_vptr_INextBotEventResponder + 132))(this) != 0
         || (m_nOrderType = QueuedOrder->m_nOrderType) != 28 && m_nOrderType != 1)
        && ((*(this->_vptr_INextBotEventResponder + 132))(this) == 0 || QueuedOrder->m_nOrderType != 3) )
      {
        v9 = CBaseEntity::GetAbsOrigin(me);
        v10 = this->m_vPosition.y - v9->y;
        if ( (((this->m_vPosition.x - v9->x) * (this->m_vPosition.x - v9->x)) + (v10 * v10)) >= 2.0 )
        {
          v40 = (*(me->_vptr_IHandleEntity + 376))(me);
          (*(*v40 + 744LL))(v40, &this->m_vPosition);
        }
        v11 = operator new(0x80u);
        CDOTABehaviorIdle::CDOTABehaviorIdle(v11);
        retstr->m_type = ActionResultType::CHANGE_TO;
        retstr->m_action = v11;
        retstr->m_reason = "Reached path end";
        return retstr;
      }
      this->m_vPosition.x = QueuedOrder->m_vPosition.x;
      this->m_vPosition.y = QueuedOrder->m_vPosition.y;
      this->m_vPosition.z = QueuedOrder->m_vPosition.z;
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
      v37 = QueuedOrder->m_nOrderType == 28;
      if ( v37 != this->m_MoveTo.m_bIsDirectional )
      {
        this->m_MoveTo.m_bIsDirectional = v37;
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
      }
      CDOTA_BaseNPC::GetNextQueuedOrder(me);
      y = this->m_vPosition.y;
      z = this->m_vPosition.z;
      me->m_vCurrentMovementOrderDestination.x = this->m_vPosition.x;
      me->m_vCurrentMovementOrderDestination.y = y;
      me->m_vCurrentMovementOrderDestination.z = z;
    }
    else
    {
      v18 = CBaseEntity::GetAbsOrigin(me);
      vPathEndPos = CDOTABehaviorMoveTo::GetFurthestPathPoint(&this->m_MoveTo);
      if ( (((v18->x - vPathEndPos.x) * (v18->x - vPathEndPos.x)) + ((v18->y - vPathEndPos.y) * (v18->y - vPathEndPos.y))) <= 57600.0 )
      {
        v19 = operator new(0x80u);
        CDOTABehaviorIdle::CDOTABehaviorIdle(v19);
        retstr->m_type = ActionResultType::CHANGE_TO;
        retstr->m_action = v19;
        retstr->m_reason = "Exhausted path near path end";
        return retstr;
      }
    }
  }
  if ( (me->m_iUnitType & 0x10000) != 0
    && me->m_iIsControllableByPlayer64.m_Value == 0
    && (*(me->_vptr_IHandleEntity + 408))(me) != 0 )
  {
    CDOTA_BaseNPC_Creature::CalculateCreatureDesire(me);
    if ( (*(me->_vptr_IHandleEntity + 497))(me) == 2 )
    {
      DesiredEscapeAbility = CDOTA_BaseNPC_Creature::GetDesiredEscapeAbility(me);
      if ( DesiredEscapeAbility != 0 )
      {
        v21 = *&me->m_nCurrentCastBehavior;
        switch ( LODWORD(v21) )
        {
          case 8:
            m_pDesiredNPCTarget = me->m_pDesiredNPCTarget;
            v34 = operator new(0x170u);
            CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast(
              v34,
              DesiredEscapeAbility,
              m_pDesiredNPCTarget);
            this->m_eventResult.m_type = ActionResultType::CONTINUE;
            this->m_eventResult.m_action = 0;
            this->m_eventResult.m_reason = 0;
            this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
            retstr->m_type = ActionResultType::SUSPEND_FOR;
            retstr->m_action = v34;
            retstr->m_reason = "Cast my escape spell on a unit.";
            return retstr;
          case 0x10:
            z_low = LODWORD(me->m_vDesiredCastLocation.z);
            x = me->m_vDesiredCastLocation.x;
            vPathEndPos.y = me->m_vDesiredCastLocation.y;
            LODWORD(vPathEndPos.z) = z_low;
            vPathEndPos.x = x;
            v43 = operator new(0x168u);
            CDOTABehaviorCommandMoveToPositionToCast::CDOTABehaviorCommandMoveToPositionToCast(
              v43,
              DesiredEscapeAbility,
              &vPathEndPos);
            this->m_eventResult.m_type = ActionResultType::CONTINUE;
            this->m_eventResult.m_action = 0;
            this->m_eventResult.m_reason = 0;
            this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
            retstr->m_type = ActionResultType::SUSPEND_FOR;
            retstr->m_action = v43;
            retstr->m_reason = "Cast my escape spell on a position.";
            return retstr;
          case 4:
            vptr_IHandleEntity = me->_vptr_IHandleEntity;
            v23 = me->m_vDesiredCastLocation.x;
            v24 = LODWORD(me->m_vDesiredCastLocation.z);
            vPathEndPos.y = me->m_vDesiredCastLocation.y;
            vPathEndPos.x = v23;
            LODWORD(vPathEndPos.z) = v24;
            v25 = (vptr_IHandleEntity[376])(me);
            CastAngle = CDOTALocomotor::GetCastAngle(v25, me, &vPathEndPos);
            v27 = me->_vptr_IHandleEntity;
            flTargetAngle = CastAngle;
            v28 = LODWORD(me->m_vDesiredCastLocation.z);
            v29 = me->m_vDesiredCastLocation.x;
            vPathEndPos.y = me->m_vDesiredCastLocation.y;
            LODWORD(vPathEndPos.z) = v28;
            vPathEndPos.x = v29;
            v30 = (v27[376])(me);
            if ( CDOTALocomotor::IsFacingLocation(v30, &vPathEndPos, LODWORD(flTargetAngle), v31) )
            {
              v32 = operator new(0x68u);
              CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere(v32, DesiredEscapeAbility);
              this->m_eventResult.m_type = ActionResultType::CONTINUE;
              this->m_eventResult.m_action = 0;
              this->m_eventResult.m_reason = 0;
              this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
              retstr->m_type = ActionResultType::SUSPEND_FOR;
              retstr->m_action = v32;
              retstr->m_reason = "Cast my offensive spell with no target.";
              return retstr;
            }
            break;
          default:
            break;
        }
      }
    }
    else if ( CEntityHandle::operator CEntityInstance *(&me->m_initialGoalEntity) != 0 )
    {
      v8 = operator new(0x160u);
      *(v8 + 16) = 0;
      *(v8 + 9) = 0;
      *(v8 + 10) = 0;
      *(v8 + 3) = 0;
      *(v8 + 4) = 0;
      *(v8 + 5) = 0;
      *(v8 + 6) = 0;
      *(v8 + 7) = 0;
      *(v8 + 2) = 0;
      v8[96] = 0;
      v8[97] = 0;
      *(v8 + 22) = 0;
      *v8 = &off_42C2BF0;
      *(v8 + 13) = &off_42C3098;
      *(v8 + 1) = &off_42C3030;
      *(v8 + 14) = &off_42BB830;
      CGridNavPath::CGridNavPath((v8 + 120));
      CountdownTimer::CountdownTimer((v8 + 296));
      *(v8 + 84) = -1;
      *(v8 + 85) = -1;
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v8;
      retstr->m_reason = 0;
      return retstr;
    }
  }
  CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


