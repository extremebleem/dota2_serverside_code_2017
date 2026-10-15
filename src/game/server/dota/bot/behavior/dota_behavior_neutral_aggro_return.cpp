
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorNeutralAggroReturn::CDOTABehaviorNeutralAggroReturn  (line 8, @0x0000000002891430, libserver.so)  // inlines: Action, CDOTABehaviorMoveTo, EventDesiredResult, IActionResult, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorNeutralAggro::InitialContainedAction
void __fastcall CDOTABehaviorNeutralAggroReturn::CDOTABehaviorNeutralAggroReturn(
        CDOTABehaviorNeutralAggroReturn *const this,
        double a2,
        vec_t a3)
{
  Vector vHomePositiona; // 0:^0.12

  this->_vptr_INextBotEventResponder = &off_42C4D90;
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->_vptr_IContextualQuery = &off_42C51C0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C5228;
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
  *&vHomePositiona.x = a2;
  vHomePositiona.z = a3;
  CGridNavPath::CGridNavPath(&this->m_MoveTo.m_path);
  CountdownTimer::CountdownTimer(&this->m_MoveTo.m_repathTimer);
  this->m_vHomePosition = vHomePositiona;
}


// CDOTABehaviorNeutralAggroReturn::Update  (line 14, @0x0000000002892940, libserver.so)  // inlines: ActionResult, CDOTABehaviorCommandMoveToPositionAggressive, Continue, Done, FastSqrt, IActionResult, Length2D, QAngle, RandomYawVector, SuspendFor, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: CDOTA_BaseNPC::GetAutoAttackTarget, operator new, CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack, CBaseEntity::GetAbsOrigin, CDOTABehaviorMoveTo::Update, RandomFloat, AngleVectors, CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition, operator delete, _Unwind_Resume
// strings: "Auto attack target acquired", "Flee from an invisible attacker", "Returned to home range and no attack targets found"
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralAggroReturn::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralAggroReturn *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  CDOTA_BaseNPC *AutoAttackTarget; // r14
  CDOTABehaviorMoveToNPCToAttack *v8; // r13
  const Vector *v10; // rax
  float v11; // xmm1_4
  const Vector *AbsOrigin; // rax
  vec_t v13; // xmm0_4
  vec_t v14; // xmm1_4
  CDOTABehaviorCommandMoveToPosition *v15; // r13
  float v16; // [rsp+4h] [rbp-4Ch]
  float v17; // [rsp+8h] [rbp-48h]
  float v18; // [rsp+Ch] [rbp-44h]
  QAngle angles; // [rsp+10h] [rbp-40h] BYREF
  Vector forward; // [rsp+20h] [rbp-30h] BYREF

  AutoAttackTarget = CDOTA_BaseNPC::GetAutoAttackTarget(me, 0, 0);
  if ( AutoAttackTarget != 0 )
  {
    v8 = operator new(0x188u);
    CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack(v8, AutoAttackTarget, 0);
    retstr->m_type = ActionResultType::SUSPEND_FOR;
    this->m_eventResult.m_type = ActionResultType::CONTINUE;
    this->m_eventResult.m_action = 0;
    this->m_eventResult.m_reason = 0;
    this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    retstr->m_action = v8;
    retstr->m_reason = "Auto attack target acquired";
    return retstr;
  }
  if ( me->m_bWantsToFlee )
  {
    angles.y = RandomFloat(0.0, 360.0);
    angles.x = 0.0;
    angles.z = 0.0;
    AngleVectors(&angles, &forward, 0, 0);
    v16 = forward.x * 700.0;
    v17 = forward.y * 700.0;
    v18 = 700.0 * forward.z;
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    v13 = v18 + AbsOrigin->z;
    v14 = v16 + AbsOrigin->x;
    forward.y = v17 + AbsOrigin->y;
    forward.z = v13;
    forward.x = v14;
    v15 = operator new(0x160u);
    CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition(v15, &forward, 0);
    *(&v15->m_bDirectional + 1) = 0;
    retstr->m_type = ActionResultType::SUSPEND_FOR;
    retstr->m_action = v15;
    v15->_vptr_INextBotEventResponder = &off_42BD950;
    v15->_vptr_IDOTABehaviorMoveTo = &off_42BDDF0;
    v15->_vptr_IContextualQuery = &off_42BDD88;
    retstr->m_reason = "Flee from an invisible attacker";
    this->m_eventResult.m_type = ActionResultType::CONTINUE;
    this->m_eventResult.m_action = 0;
    this->m_eventResult.m_reason = 0;
    this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    return retstr;
  }
  else
  {
    v10 = CBaseEntity::GetAbsOrigin(me);
    v11 = this->m_vHomePosition.y - v10->y;
    if ( fsqrt(((this->m_vHomePosition.x - v10->x) * (this->m_vHomePosition.x - v10->x)) + (v11 * v11)) < 400.0
      && (me->m_nObstructionProperties & 1) == 0 )
    {
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Returned to home range and no attack targets found";
      return retstr;
    }
    CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
}


