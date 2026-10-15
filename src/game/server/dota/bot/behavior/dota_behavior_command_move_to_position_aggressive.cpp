
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToPositionAggressive::Update  (line 8, @0x000000000287fb20, libserver.so)  // inlines: ActionResult, IActionResult, SuspendFor
// calls: CDOTA_BaseNPC::GetAutoAttackTarget, operator new, CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack, CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition, CDOTABehaviorCommandMoveToPosition::Update, operator delete, _Unwind_Resume
// strings: "Auto attack target acquired", "Went Invisible while attack moving."
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionAggressive::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionAggressive *const this,
        CDOTA_BaseNPC_Creature *me,
        float interval)
{
  CDOTA_BaseNPC *AutoAttackTarget; // r14
  CDOTABehaviorMoveToNPCToAttack *v8; // r13
  vec_t v10; // xmm1_4
  CDOTABehaviorCommandMoveToPosition *v11; // r13
  Vector vPosition; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_bStartedInvisible || SLOBYTE(me->m_nUnitState64.m_Value) >= 0 )
  {
    AutoAttackTarget = CDOTA_BaseNPC::GetAutoAttackTarget(me, 0, 1);
    if ( AutoAttackTarget != 0 )
    {
      v8 = operator new(0x188u);
      CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack(v8, AutoAttackTarget, 1);
      this->m_eventResult.m_type = ActionResultType::CONTINUE;
      this->m_eventResult.m_action = 0;
      this->m_eventResult.m_reason = 0;
      this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
      retstr->m_type = ActionResultType::SUSPEND_FOR;
      retstr->m_action = v8;
      retstr->m_reason = "Auto attack target acquired";
    }
    else
    {
      CDOTABehaviorCommandMoveToPosition::Update(retstr, this, me, interval);
    }
    return retstr;
  }
  else
  {
    *&vPosition.x = (*(this->_vptr_INextBotEventResponder + 130))(this, me, interval);
    vPosition.z = v10;
    v11 = operator new(0x160u);
    CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition(v11, &vPosition, 0);
    this->m_eventResult.m_type = ActionResultType::CONTINUE;
    this->m_eventResult.m_action = 0;
    this->m_eventResult.m_reason = 0;
    this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    retstr->m_action = v11;
    retstr->m_reason = "Went Invisible while attack moving.";
    retstr->m_type = ActionResultType::SUSPEND_FOR;
    return retstr;
  }
}


