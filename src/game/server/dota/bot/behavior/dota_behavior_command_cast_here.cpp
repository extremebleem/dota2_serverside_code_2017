
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere  (line 15, @0x00000000028771b0, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=
// callers: CDOTABehaviorCommandListener::OnCastAbilityNoTarget, CDOTABehaviorCommandMoveToItemToTake::Update, CDOTABehaviorCommandMoveToPosition::Update, CDOTABehaviorCreatureInvade::OnCastAbilityNoTarget, CDOTABehaviorMoveToNPCToAttack::Update, CDOTA_BaseNPC_Creature::ConsiderUsingAbilities
void __fastcall CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere(
        CDOTABehaviorCommandCastHere *const this,
        CDOTABaseAbility *pAbility)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  this->_vptr_INextBotEventResponder = &off_42BBD10;
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
  this->_vptr_IContextualQuery = &off_42BC130;
  this->m_hAbility.m_Index = -1;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v4 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v3 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
}


// CDOTABehaviorCommandCastHere::OnStart  (line 22, @0x00000000028774d0, libserver.so)
// calls: CDOTA_BaseNPC::AdvanceMovementOrderTracking, CDOTABehaviorCommandCastHere::CheckTransition
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandCastHere::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandCastHere *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  Vector v8; // [rsp+0h] [rbp-20h]

  CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v8, 0);
  CDOTABehaviorCommandCastHere::CheckTransition(retstr, this, me);
  return retstr;
}


// CDOTABehaviorCommandCastHere::Update  (line 32, @0x0000000002877520, libserver.so)
// calls: CDOTABehaviorCommandCastHere::CheckTransition
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandCastHere::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandCastHere *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  CDOTABehaviorCommandCastHere::CheckTransition(retstr, this, me);
  return retstr;
}


// CDOTABehaviorCommandCastHere::OnResume  (line 39, @0x0000000002870fb0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, EventDesiredResult, IActionResult, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandCastHere::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandCastHere *const this,
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


// CDOTABehaviorCommandCastHere::OnEnd  (line 46, @0x0000000002870760, libserver.so)
// calls: CDOTA_BaseNPC::SetCurrentActiveAbility
void __fastcall CDOTABehaviorCommandCastHere::OnEnd(
        CDOTABehaviorCommandCastHere *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  CDOTA_BaseNPC::SetCurrentActiveAbility(me, 0);
}


// CDOTABehaviorCommandCastHere::CheckTransition  (line 53, @0x00000000028772e0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, SuspendFor, operator CEntityInstance*, ~CDOTABehaviorCommandListener
// calls: CDOTA_BaseNPC::IsActionLocked, operator new, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::SetCurrentActiveAbility, CDOTABehaviorAbility::CDOTABehaviorAbility, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// callers: CDOTABehaviorCommandCastHere::OnStart, CDOTABehaviorCommandCastHere::Update
// strings: "Current ability is NULL"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandCastHere::CheckTransition(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandCastHere *const this,
        CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  char *v9; // r12
  CDOTABaseAbility *m_pInstance; // r14
  CDOTABehaviorAbility *v12; // r13

  if ( CDOTA_BaseNPC::IsActionLocked(me) )
  {
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  else
  {
    m_Index = this->m_hAbility.m_Index;
    if ( m_Index + 2 > 1
      && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F]) != 0
      && (v8 = &v7[this->m_hAbility.m_Index & 0x1FF]) != 0
      && m_Index == v8->m_EHandle.m_Index
      && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0) )
    {
      CDOTA_BaseNPC::SetCurrentActiveAbility(me, v8->m_pInstance);
      v12 = operator new(0x80u);
      CDOTABehaviorAbility::CDOTABehaviorAbility(v12, m_pInstance);
      retstr->m_type = ActionResultType::SUSPEND_FOR;
      this->m_eventResult.m_type = ActionResultType::CONTINUE;
      this->m_eventResult.m_action = 0;
      this->m_eventResult.m_reason = 0;
      this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
      retstr->m_action = v12;
      retstr->m_reason = 0;
      return retstr;
    }
    else
    {
      v9 = operator new(0x80u);
      *(v9 + 16) = 0;
      *(v9 + 9) = 0;
      *(v9 + 10) = 0;
      *(v9 + 3) = 0;
      *(v9 + 4) = 0;
      *(v9 + 5) = 0;
      *(v9 + 6) = 0;
      *(v9 + 7) = 0;
      *(v9 + 2) = 0;
      v9[96] = 0;
      v9[97] = 0;
      *(v9 + 22) = 0;
      *v9 = &off_42C1970;
      *(v9 + 1) = &off_42C1DA0;
      CountdownTimer::CountdownTimer((v9 + 104));
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_reason = "Current ability is NULL";
      retstr->m_action = v9;
      return retstr;
    }
  }
}


