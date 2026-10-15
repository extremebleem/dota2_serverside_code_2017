
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehavior::InitialContainedAction  (line 18, @0x0000000002892e60, libserver.so)  // inlines: Action, CDOTABehaviorChase, CDOTABehaviorCommandListener, CDOTABehaviorCompanion, CDOTABehaviorIdle, CDOTABehaviorInvade, CDOTABehaviorMoveTo, CEntityHandle, CHandle, EventDesiredResult, Get, GetChaseEntity, GetEntityIdentity, GetEntryIndex, GetInitialGoalEntity, GetInstance, HasAttackCapability, HasFlyMovementCapability, HasMovementCapability, IActionResult, InState, IndexToIdentity, IsValid, LookupEntity, ShouldUseNeutralCreepBehavior, operator CBaseEntity*, operator CEntityInstance*, ~CDOTABehaviorCommandListener, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlVector
// calls: operator new, CDOTABehaviorNeutralHome::CDOTABehaviorNeutralHome, CEntityHandle::operator CEntityInstance*, CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::HasAnyActiveAbilities, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
Action<CDOTA_BaseNPC> *__fastcall CDOTABehavior::InitialContainedAction(CDOTABehavior *const this, CDOTA_BaseNPC *me)
{
  char *v2; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  bool HasAnyActiveAbilities; // al
  char *v8; // rbx
  CDOTA_BaseNPC *mea; // [rsp+8h] [rbp-28h]

  if ( (me->m_iMoveCapabilities & 3) == 0
    && (BYTE3(me->m_nUnitState64.m_Value) & 1 | ((me->m_nUnitState64.m_Value & 0x200000000LL) != 0)) == 0
    && (me->m_iAttackCapabilities.m_Value & 3) == 0 )
  {
    mea = me;
    HasAnyActiveAbilities = CDOTA_BaseNPC::HasAnyActiveAbilities(me);
    me = mea;
    if ( !HasAnyActiveAbilities && (mea->m_iUnitType & 0x20000) == 0 )
      return 0;
  }
  if ( me->m_bUseNeutralCreepBehavior && me->m_iIsControllableByPlayer64.m_Value == 0 )
  {
    v2 = operator new(0x170u);
    CDOTABehaviorNeutralHome::CDOTABehaviorNeutralHome(v2);
    return v2;
  }
  if ( (me->m_iUnitType & 0x2000) != 0 )
  {
    v2 = operator new(0x180u);
    *(v2 + 16) = 0;
    *(v2 + 9) = 0;
    *(v2 + 10) = 0;
    *(v2 + 3) = 0;
    *(v2 + 4) = 0;
    *(v2 + 5) = 0;
    *(v2 + 6) = 0;
    *(v2 + 7) = 0;
    *(v2 + 2) = 0;
    v2[96] = 0;
    v2[97] = 0;
    *(v2 + 22) = 0;
    *v2 = &off_42BFA90;
    *(v2 + 13) = &off_42BFF28;
    *(v2 + 1) = &off_42BFEC0;
    *(v2 + 14) = &off_42BB830;
    CGridNavPath::CGridNavPath((v2 + 120));
    CountdownTimer::CountdownTimer((v2 + 296));
    *(v2 + 84) = -1;
    CountdownTimer::CountdownTimer(v2 + 15);
    return v2;
  }
  m_Index = me->m_initialGoalEntity.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_initialGoalEntity.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[me->m_initialGoalEntity.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || v6->m_pInstance == 0 )
  {
    if ( CEntityHandle::operator CEntityInstance *(&me->m_hChaseEntity) != 0 )
    {
      v2 = operator new(0x180u);
      *(v2 + 16) = 0;
      *(v2 + 9) = 0;
      *(v2 + 10) = 0;
      *(v2 + 3) = 0;
      *(v2 + 4) = 0;
      *(v2 + 5) = 0;
      *(v2 + 6) = 0;
      *(v2 + 7) = 0;
      *(v2 + 2) = 0;
      v2[96] = 0;
      v2[97] = 0;
      *(v2 + 22) = 0;
      *v2 = &off_42BB850;
      *(v2 + 13) = &off_42BBCE8;
      *(v2 + 1) = &off_42BBC80;
      *(v2 + 14) = &off_42BB830;
      CGridNavPath::CGridNavPath((v2 + 120));
      CountdownTimer::CountdownTimer((v2 + 296));
      *(v2 + 84) = -1;
      CountdownTimer::CountdownTimer(v2 + 15);
    }
    else
    {
      v2 = operator new(0x80u);
      *(v2 + 16) = 0;
      *(v2 + 9) = 0;
      *(v2 + 10) = 0;
      *(v2 + 3) = 0;
      *(v2 + 4) = 0;
      *(v2 + 5) = 0;
      *(v2 + 6) = 0;
      *(v2 + 7) = 0;
      *(v2 + 2) = 0;
      v2[96] = 0;
      v2[97] = 0;
      *(v2 + 22) = 0;
      *v2 = &off_42C1970;
      *(v2 + 1) = &off_42C1DA0;
      CountdownTimer::CountdownTimer((v2 + 104));
    }
    return v2;
  }
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
  *(v8 + 1) = &off_42C3030;
  *(v8 + 13) = &off_42C3098;
  *(v8 + 14) = &off_42BB830;
  CGridNavPath::CGridNavPath((v8 + 120));
  CountdownTimer::CountdownTimer((v8 + 296));
  *(v8 + 84) = -1;
  *(v8 + 85) = -1;
  return v8;
}


// CDOTABehavior::OnStart  (line 42, @0x000000000288c1e0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorDie, ChangeTo, EventDesiredResult, IActionResult
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "I died"
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehavior::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehavior *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  char *v7; // rbx

  if ( (*(me->_vptr_IHandleEntity + 408))(me, this, me, priorAction) != 0 )
  {
    (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0);
    return retstr;
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
    *v7 = &off_42C0B90;
    *(v7 + 1) = &off_42C0FB0;
    CountdownTimer::CountdownTimer((v7 + 104));
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_reason = "I died";
    retstr->m_action = v7;
    return retstr;
  }
}


// CDOTABehavior::Update  (line 52, @0x000000000288bcf0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorGameEnd, ChangeTo, Continue, EventDesiredResult, IActionResult, State_Get, State_IsGameOver
// calls: CDOTA_BaseNPC::UpdateAggressiveStance, operator new
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehavior::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehavior *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  Action<CDOTA_BaseNPC> *v6; // rax

  CDOTA_BaseNPC::UpdateAggressiveStance(me);
  if ( (*&g_pGameRules[6].m_szQuestName[28] - 6) <= 1 )
  {
    v6 = operator new(0x68u);
    retstr->m_type = ActionResultType::CHANGE_TO;
    v6->m_eventResult.m_type = ActionResultType::CONTINUE;
    v6->m_eventResult.m_action = 0;
    v6->m_eventResult.m_reason = 0;
    v6->m_parent = 0;
    v6->m_child = 0;
    v6->m_buriedUnderMe = 0;
    v6->m_coveringMe = 0;
    v6->m_actor = 0;
    v6->m_behavior = 0;
    v6->m_isStarted = 0;
    v6->m_isSuspended = 0;
    v6->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    v6->_vptr_INextBotEventResponder = &off_42C1030;
    v6->_vptr_IContextualQuery = &off_42C1450;
    retstr->m_action = v6;
  }
  else
  {
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
  }
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehavior::OnKilled  (line 64, @0x000000000288c110, libserver.so)  // inlines: Action, CDOTABehaviorDie, EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "I died"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehavior::OnKilled(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehavior *const this,
        CDOTA_BaseNPC *me,
        const CTakeDamageInfo *const info)
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
  *v5 = &off_42C0B90;
  *(v5 + 1) = &off_42C0FB0;
  CountdownTimer::CountdownTimer((v5 + 104));
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "I died";
  retstr->m_action = v5;
  retstr->m_priority = EventResultPriorityType::RESULT_CRITICAL;
  return retstr;
}


