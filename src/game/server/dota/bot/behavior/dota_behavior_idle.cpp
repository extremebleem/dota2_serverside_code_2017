
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorIdle::OnStart  (line 22, @0x000000000288e5e0, libserver.so)
// calls: CDOTABehaviorIdle::OnStartInternal
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorIdle::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorIdle *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  CDOTABehaviorIdle::OnStartInternal(retstr, this, me, priorAction);
  return retstr;
}


// CDOTABehaviorIdle::GetIdleActivity  (line 27, @0x000000000288b4a0, libserver.so)
// calls: CDOTALocomotor::ShouldTurnAnimate
// callers: CDOTABehaviorTutorialIdle::GetIdleActivity
Activity __fastcall CDOTABehaviorIdle::GetIdleActivity(CDOTABehaviorIdle *const this, CDOTA_BaseNPC *me)
{
  CDOTALocomotor *v2; // rax

  v2 = (*(me->_vptr_IHandleEntity + 376))(me);
  return !CDOTALocomotor::ShouldTurnAnimate(v2) ? 1500 : 1502;
}


// CDOTABehaviorIdle::MaintainIdleActivity  (line 33, @0x000000000288b4d0, libserver.so)
// calls: CDOTALocomotor::ShouldTurnAnimate, CDOTABody::GetAnimation, CDOTABody::StartAnimation
// callers: CDOTABehaviorTutorialIdle::MaintainIdleActivity
void __fastcall CDOTABehaviorIdle::MaintainIdleActivity(CDOTABehaviorIdle *const this, CDOTA_BaseNPC *me)
{
  CDOTALocomotor *v3; // rax
  bool v4; // zf
  int (**vptr_IHandleEntity)(...); // rax
  const CDOTABody *v6; // rax
  Activity Animation; // eax
  const CDOTABody *v8; // rax
  unsigned int v9; // r12d
  const CDOTABody *v10; // rax
  CDOTABody *v11; // rax

  v3 = (*(me->_vptr_IHandleEntity + 376))(me);
  v4 = !CDOTALocomotor::ShouldTurnAnimate(v3);
  vptr_IHandleEntity = me->_vptr_IHandleEntity;
  if ( v4 )
  {
    v6 = (vptr_IHandleEntity[377])(me);
    Animation = CDOTABody::GetAnimation(v6);
    if ( Animation == 1502 )
    {
      LOBYTE(Animation) = -36;
    }
    else
    {
      v8 = (*(me->_vptr_IHandleEntity + 377))(me);
      Animation = CDOTABody::GetAnimation(v8);
    }
    v9 = Animation;
  }
  else
  {
    v10 = (vptr_IHandleEntity[377])(me);
    v9 = 1502;
    CDOTABody::GetAnimation(v10);
  }
  v11 = (*(me->_vptr_IHandleEntity + 377))(me);
  CDOTABody::StartAnimation(v11, v9, 0, 1.0);
}


// CDOTABehaviorIdle::OnStartInternal  (line 42, @0x000000000288e2f0, libserver.so)  // inlines: ActionResult, Continue, GetInt, IActionResult, NetworkStateChanged, Set, Start, State_Get, State_IsGameOver, operator=<float>
// calls: CDOTABody::GetAnimation, CDOTABody::StartAnimation, CDOTALocomotor::StopMovement, CDOTA_BaseNPC::SetIsIdle, RandomFloat, CountdownTimer::Now, CDOTA_BaseNPC::GetNextQueuedOrder, DOTA_ExecuteOrders, CDOTA_BaseNPC::AdvanceMovementOrderTracking, CDOTA_BaseNPC::UpdatePseudoQueuedOrder, CDOTA_BaseNPC::ExecuteResumePreviousMovement
// callers: CDOTABehaviorIdle::OnStart, CDOTABehaviorRoquelaireIdle::OnStart, CDOTABehaviorTutorialIdle::OnStart
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorIdle::OnStartInternal(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorIdle *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  const CDOTABody *v7; // rax
  const CDOTABody *v8; // rax
  unsigned int v9; // r14d
  CDOTABody *v10; // rax
  CDOTALocomotor *v11; // rax
  double v12; // xmm0_8
  double v13; // xmm1_8
  double v14; // xmm2_8
  CUnitOrders *NextQueuedOrder; // rax
  Vector v17; // [rsp+0h] [rbp-30h]
  float v18; // [rsp+Ch] [rbp-24h]

  v7 = (*(me->_vptr_IHandleEntity + 377))(me, this, me, priorAction);
  if ( CDOTABody::GetAnimation(v7) != 1534
    && (v8 = (*(me->_vptr_IHandleEntity + 377))(me), CDOTABody::GetAnimation(v8) != 1536)
    || me->m_bIsIllusion.m_Value )
  {
    v9 = (*(this->_vptr_INextBotEventResponder + 130))(this, me);
    v10 = (*(me->_vptr_IHandleEntity + 377))(me);
    CDOTABody::StartAnimation(v10, v9, 1, 1.0);
  }
  v11 = (*(me->_vptr_IHandleEntity + 376))(me);
  CDOTALocomotor::StopMovement(v11, 0);
  CDOTA_BaseNPC::SetIsIdle(me, 1);
  v18 = RandomFloat(
          dota_idle_rare_interval_min.m_pParent->m_Value.m_nValue,
          dota_idle_rare_interval_max.m_pParent->m_Value.m_nValue);
  *&v12 = CountdownTimer::Now(&this->m_IdleRareAnimationTime) + v18;
  if ( *&v12 != this->m_IdleRareAnimationTime.m_timestamp.m_Value )
  {
    v17.z = *&v12;
    (*(this->m_IdleRareAnimationTime._vptr_CountdownTimer + 2))(
      &this->m_IdleRareAnimationTime,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    *&v12 = LODWORD(v17.z);
    this->m_IdleRareAnimationTime.m_timestamp.m_Value = v17.z;
  }
  *&v14 = LODWORD(v18);
  if ( v18 != this->m_IdleRareAnimationTime.m_duration.m_Value )
  {
    (*(this->m_IdleRareAnimationTime._vptr_CountdownTimer + 2))(
      &this->m_IdleRareAnimationTime,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v12,
      v13,
      v18);
    this->m_IdleRareAnimationTime.m_duration.m_Value = v18;
  }
  if ( (*&g_pGameRules[6].m_szQuestName[28] - 6) > 1 )
  {
    if ( me->m_PseudoQueuedOrders.m_nOrderType != 0 )
    {
      CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v17, 0);
      CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 1);
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
      return retstr;
    }
    NextQueuedOrder = CDOTA_BaseNPC::GetNextQueuedOrder(me);
    if ( NextQueuedOrder != 0 )
    {
      DOTA_ExecuteOrders(NextQueuedOrder, 0, 0, 0);
      CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v17, 0);
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
      return retstr;
    }
    CDOTA_BaseNPC::ExecuteResumePreviousMovement(me);
    CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v17, 0);
    if ( me->m_iIsControllableByPlayer64.m_Value == 0 )
    {
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
      return retstr;
    }
  }
  (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0, v13, v14);
  return retstr;
}


// CDOTABehaviorIdle::Update  (line 88, @0x0000000002893310, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorInvade, CDOTABehaviorMoveTo, CEntityHandle, CHandle, ChangeTo, Continue, DOTAGameRules, EventDesiredResult, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInitialGoalEntity, GetInstance, GetInt, HasAttackCapability, IActionResult, IndexToIdentity, IsValid, LookupEntity, QAngle, RandomYawVector, State_Get, State_IsGameOver, SuspendFor, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, ~CGridNavPath, ~CUtlVector
// calls: CDOTAGamerules::Rules_DisableAllAI, CDOTA_BaseNPC_Creature::CalculateCreatureDesire, CDOTA_BaseNPC::GetNextQueuedOrder, DOTA_ExecuteOrders, CDOTA_BaseNPC::IsBot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetAutoAttackTarget, operator new, CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack, RandomFloat, AngleVectors, CBaseEntity::GetAbsOrigin (21 total)
// callers: CDOTABehaviorTutorialIdle::Update
// strings: "Auto attack target acquired", "Moving away as an escape."
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorIdle::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorIdle *const this,
        CDOTA_BaseNPC_Creature *me,
        double interval)
{
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CUnitOrders *NextQueuedOrder; // rax
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *AutoAttackTarget; // r13
  CDOTABehaviorMoveToNPCToAttack *v14; // r12
  CEntityInstance *v15; // rax
  double v16; // xmm0_8
  int v17; // xmm2_4
  const Vector *AbsOrigin; // rax
  float v19; // xmm2_4
  ActionResultType v20; // xmm0_4
  CDOTABehaviorCommandMoveToPosition *v21; // r12
  char *v22; // r12
  CDOTABody *v23; // rax
  float v24; // [rsp+4h] [rbp-5Ch]
  float v25; // [rsp+8h] [rbp-58h]
  float flRoamDistance; // [rsp+Ch] [rbp-54h]
  float flRoamDistancea; // [rsp+Ch] [rbp-54h]
  QAngle angles; // [rsp+10h] [rbp-50h] BYREF
  ActionResult<CDOTA_BaseNPC> AbilityResult; // [rsp+20h] [rbp-40h] BYREF

  if ( g_pGameRules != 0 && CDOTAGamerules::Rules_DisableAllAI(g_pGameRules) )
    goto LABEL_3;
  if ( (me->m_iUnitType & 0x10000) != 0
    && (me->m_iIsControllableByPlayer64.m_Value == 0 || me->m_bRunAIWhenControllableByPlayer) )
  {
    CDOTA_BaseNPC_Creature::CalculateCreatureDesire(me);
    if ( (*(me->_vptr_IHandleEntity + 497))(me) == 2 )
    {
      v15 = CEntityHandle::operator CEntityInstance *(&me->m_hForceAttackTarget);
      if ( v15 == 0 || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
      {
        v16 = (*(me->_vptr_IHandleEntity + 495))(me, me->m_pszCurrentState);
        v17 = LODWORD(v16);
        if ( *&v16 == 0.0 )
          v17 = 1143930880;
        flRoamDistance = *&v17;
        angles.y = RandomFloat(0.0, 360.0);
        angles.x = 0.0;
        angles.z = 0.0;
        AngleVectors(&angles, &AbilityResult, 0, 0);
        v24 = *&AbilityResult.m_type * flRoamDistance;
        v25 = *(&AbilityResult.m_type + 1) * flRoamDistance;
        flRoamDistancea = flRoamDistance * *&AbilityResult.m_action;
        AbsOrigin = CBaseEntity::GetAbsOrigin(me);
        v19 = flRoamDistancea + AbsOrigin->z;
        *&v20 = v24 + AbsOrigin->x;
        *(&AbilityResult.m_type + 1) = v25 + AbsOrigin->y;
        *&AbilityResult.m_action = v19;
        AbilityResult.m_type = v20;
        v21 = operator new(0x160u);
        CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition(v21, &AbilityResult, 0);
        this->m_eventResult.m_type = ActionResultType::CONTINUE;
        this->m_eventResult.m_action = 0;
        this->m_eventResult.m_reason = 0;
        this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
        retstr->m_type = ActionResultType::SUSPEND_FOR;
        retstr->m_action = v21;
        retstr->m_reason = "Moving away as an escape.";
        return retstr;
      }
    }
    else
    {
      m_Index = me->m_initialGoalEntity.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_initialGoalEntity.m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[me->m_initialGoalEntity.m_Index & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
          {
            v22 = operator new(0x160u);
            *(v22 + 16) = 0;
            *(v22 + 9) = 0;
            *(v22 + 10) = 0;
            *(v22 + 3) = 0;
            *(v22 + 4) = 0;
            *(v22 + 5) = 0;
            *(v22 + 6) = 0;
            *(v22 + 7) = 0;
            *(v22 + 2) = 0;
            v22[96] = 0;
            v22[97] = 0;
            *(v22 + 22) = 0;
            *v22 = &off_42C2BF0;
            *(v22 + 1) = &off_42C3030;
            *(v22 + 13) = &off_42C3098;
            *(v22 + 14) = &off_42BB830;
            CGridNavPath::CGridNavPath((v22 + 120));
            CountdownTimer::CountdownTimer((v22 + 296));
            *(v22 + 84) = -1;
            *(v22 + 85) = -1;
            retstr->m_type = ActionResultType::CHANGE_TO;
            retstr->m_action = v22;
            retstr->m_reason = 0;
            return retstr;
          }
        }
      }
    }
  }
  if ( (me->m_iAttackCapabilities.m_Value & 3) == 0
    || CDOTA_BaseNPC::IsBot(me)
    && ((v12 = CEntityHandle::operator CEntityInstance *(&me->m_hForceAttackTarget)) == 0
     || BYTE3(v12[7]._vptr_IHandleEntity) == 0)
    && dota_bot_disable.m_pParent->m_Value.m_nValue == 0
    || !me->m_bIdleAcquire
    || dota_idle_acquire.m_pParent->m_Value.m_nValue == 0
    && me->m_iIsControllableByPlayer64.m_Value != 0
    && !me->m_bRunAIWhenControllableByPlayer )
  {
    if ( (*&g_pGameRules[6].m_szQuestName[28] - 6) > 1 )
      goto LABEL_14;
LABEL_43:
    v23 = (*(me->_vptr_IHandleEntity + 377))(me, interval);
    CDOTABody::StartAnimation(v23, 0x5DCu, 1, 1.0);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  if ( (*&g_pGameRules[6].m_szQuestName[28] - 6) <= 1 )
    goto LABEL_43;
  AutoAttackTarget = CDOTA_BaseNPC::GetAutoAttackTarget(me, 0, 0);
  if ( AutoAttackTarget == 0 )
  {
    if ( (me->m_iUnitType & 0x10000) != 0 )
    {
      CDOTA_BaseNPC_Creature::ConsiderUsingAbilities(&AbilityResult, me, this, 0);
      if ( AbilityResult.m_type != ActionResultType::CONTINUE )
      {
        *retstr = AbilityResult;
        return retstr;
      }
    }
LABEL_14:
    (*(this->_vptr_INextBotEventResponder + 131))(this, me, interval);
    if ( me->m_PseudoQueuedOrders.m_nOrderType == 0 )
    {
      NextQueuedOrder = CDOTA_BaseNPC::GetNextQueuedOrder(me);
      if ( NextQueuedOrder != 0 )
      {
        DOTA_ExecuteOrders(NextQueuedOrder, 0, 0, 0);
        retstr->m_type = ActionResultType::CONTINUE;
        retstr->m_action = 0;
        retstr->m_reason = 0;
        return retstr;
      }
    }
LABEL_3:
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  v14 = operator new(0x188u);
  CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack(v14, AutoAttackTarget, 0);
  retstr->m_type = ActionResultType::SUSPEND_FOR;
  retstr->m_action = v14;
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->m_eventResult.m_action = 0;
  this->m_eventResult.m_reason = 0;
  this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
  retstr->m_reason = "Auto attack target acquired";
  return retstr;
}


// CDOTABehaviorIdle::OnResume  (line 163, @0x000000000288d1a0, libserver.so)  // inlines: ActionResult, Continue, GetInt, IActionResult, NetworkStateChanged, Set, Start, operator=<float>
// calls: RandomFloat, CountdownTimer::Now, CDOTABody::StartAnimation, CDOTALocomotor::StopMovement
// callers: CDOTABehaviorTutorialIdle::OnResume
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorIdle::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorIdle *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  double v7; // xmm0_8
  double v8; // xmm1_8
  double v9; // xmm2_8
  unsigned int v10; // r12d
  CDOTABody *v11; // rax
  CDOTALocomotor *v12; // rax
  float v14; // [rsp+8h] [rbp-28h]
  float v15; // [rsp+Ch] [rbp-24h]

  if ( me->m_anglediff.m_Value != 0 )
  {
    (*(me->_vptr_IHandleEntity + 22))(me, 4176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    me->m_anglediff.m_Value = 0;
  }
  v15 = RandomFloat(
          dota_idle_rare_interval_min.m_pParent->m_Value.m_nValue,
          dota_idle_rare_interval_max.m_pParent->m_Value.m_nValue);
  *&v7 = CountdownTimer::Now(&this->m_IdleRareAnimationTime) + v15;
  if ( *&v7 != this->m_IdleRareAnimationTime.m_timestamp.m_Value )
  {
    v14 = *&v7;
    (*(this->m_IdleRareAnimationTime._vptr_CountdownTimer + 2))(
      &this->m_IdleRareAnimationTime,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    *&v7 = LODWORD(v14);
    this->m_IdleRareAnimationTime.m_timestamp.m_Value = v14;
  }
  *&v9 = LODWORD(v15);
  if ( v15 != this->m_IdleRareAnimationTime.m_duration.m_Value )
  {
    (*(this->m_IdleRareAnimationTime._vptr_CountdownTimer + 2))(
      &this->m_IdleRareAnimationTime,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v7,
      v8,
      v15);
    this->m_IdleRareAnimationTime.m_duration.m_Value = v15;
  }
  v10 = (*(this->_vptr_INextBotEventResponder + 130))(this, me, v7, v8, v9);
  v11 = (*(me->_vptr_IHandleEntity + 377))(me);
  CDOTABody::StartAnimation(v11, v10, 0, 1.0);
  v12 = (*(me->_vptr_IHandleEntity + 376))(me);
  CDOTALocomotor::StopMovement(v12, 0);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorIdle::OnEnd  (line 177, @0x000000000288b600, libserver.so)  // inlines: StopFacing
// calls: CDOTA_BaseNPC::SetIsIdle
void __fastcall CDOTABehaviorIdle::OnEnd(
        CDOTABehaviorIdle *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  *((*(me->_vptr_IHandleEntity + 376))(me, me, nextAction) + 176) = 0;
  CDOTA_BaseNPC::SetIsIdle(me, 0);
}


// CDOTABehaviorIdle::OnAnimationActivityComplete  (line 184, @0x000000000288d850, libserver.so)  // inlines: EventDesiredResult, GetInt, IActionResult, IsElapsed, NetworkStateChanged, Set, Start, TryContinue, operator=<float>
// calls: CDOTABody::StartAnimation, CountdownTimer::Now, CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy, RandomFloat
// callers: CDOTABehaviorTutorialIdle::OnAnimationActivityComplete
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorIdle::OnAnimationActivityComplete(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorIdle *const this,
        CDOTA_BaseNPC *me,
        int activity)
{
  unsigned int v7; // r13d
  CDOTABody *v8; // rax
  double v10; // xmm0_8
  double v11; // xmm1_8
  float v12; // [rsp+8h] [rbp-28h]
  float v13; // [rsp+Ch] [rbp-24h]

  if ( (activity - 1500) <= 1 || activity == 1536 )
  {
    if ( activity == 1500
      && CountdownTimer::Now(&this->m_IdleRareAnimationTime) >= this->m_IdleRareAnimationTime.m_timestamp.m_Value
      && CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(me, 1501).m_Data != -1 )
    {
      v13 = RandomFloat(
              dota_idle_rare_interval_min.m_pParent->m_Value.m_nValue,
              dota_idle_rare_interval_max.m_pParent->m_Value.m_nValue);
      *&v10 = CountdownTimer::Now(&this->m_IdleRareAnimationTime) + v13;
      if ( *&v10 != this->m_IdleRareAnimationTime.m_timestamp.m_Value )
      {
        v12 = *&v10;
        (*(this->m_IdleRareAnimationTime._vptr_CountdownTimer + 2))(
          &this->m_IdleRareAnimationTime,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        *&v10 = LODWORD(v12);
        this->m_IdleRareAnimationTime.m_timestamp.m_Value = v12;
      }
      if ( v13 != this->m_IdleRareAnimationTime.m_duration.m_Value )
      {
        (*(this->m_IdleRareAnimationTime._vptr_CountdownTimer + 2))(
          &this->m_IdleRareAnimationTime,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          v10,
          v11,
          v13);
        this->m_IdleRareAnimationTime.m_duration.m_Value = v13;
      }
      v7 = 1501;
      goto LABEL_5;
    }
  }
  else if ( activity != 1534 )
  {
    goto LABEL_6;
  }
  v7 = 1500;
LABEL_5:
  v8 = (*(me->_vptr_IHandleEntity + 377))(me);
  CDOTABody::StartAnimation(v8, v7, 1, 1.0);
LABEL_6:
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorTutorialIdle::OnStart  (line 206, @0x000000000288e620, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, CDOTABehaviorRoquelaireIdle, CDOTABehaviorTutorialIdle, ChangeTo, EventDesiredResult, FStrEq, GetClassNameAsCStr, GetClassname, IActionResult, String, _V_strcmp, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, CDOTABehaviorIdle::OnStartInternal, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "npc_dota_roquelaire"
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialIdle::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialIdle *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  const char *m_pAsString; // rsi
  char *v7; // rbx

  m_pAsString = me->m_pEntity->m_designerName.u.m_pAsString;
  if ( m_pAsString != 0 && (m_pAsString == "npc_dota_roquelaire" || strcmp(m_pAsString, "npc_dota_roquelaire") == 0) )
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
    *v7 = &off_42C2750;
    *(v7 + 1) = &off_42C2B80;
    retstr->m_action = v7;
    retstr->m_reason = 0;
    return retstr;
  }
  else
  {
    CDOTABehaviorIdle::OnStartInternal(retstr, this, me, priorAction);
    return retstr;
  }
}


// CDOTABehaviorTutorialIdle::Update  (line 215, @0x0000000002893e80, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorInvade, CDOTABehaviorMoveTo, CEntityHandle, CHandle, ChangeTo, Get, GetAssignedHero, GetCompanionEntity, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IActionResult, IndexToIdentity, Init, IsValid, Length2DSqr, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, ~CGridNavPath, ~CUtlVector
// calls: CDOTABehaviorIdle::Update, CDOTA_ScriptedSpawner::GetCurrentMoveToTarget, CBaseEntity::GetAbsOrigin, operator new, CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, DOTATutorial, CDOTA_Tutorial::GetHumanPlayer, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialIdle::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialIdle *const this,
        CDOTA_BaseNPC_Creature *me,
        double interval)
{
  CDOTA_Bot *m_pBot; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_ScriptedSpawner *v10; // rdi
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CBaseEntity *CurrentMoveToTarget; // r13
  const Vector *v15; // r12
  const Vector *v16; // rax
  _QWORD *v17; // r12
  CDOTA_Tutorial *v19; // rax
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v21; // dx
  int v22; // esi
  int v23; // eax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CEntityInstance *m_pInstance; // r14
  __int64 v27; // r13
  void (__fastcall *v28)(__int64, const Vector *); // r15
  const Vector *AbsOrigin; // rax
  ActionResult<CDOTA_BaseNPC> baseresult; // [rsp+10h] [rbp-50h] BYREF

  CDOTABehaviorIdle::Update(&baseresult, this, me, interval);
  if ( baseresult.m_type != ActionResultType::CONTINUE )
    goto LABEL_18;
  m_pBot = me->m_pBot;
  if ( m_pBot != 0 && (*(m_pBot->_vptr_CDOTA_Bot + 28))(m_pBot) != 0 )
    goto LABEL_18;
  if ( me->m_bFacePlayer )
  {
    v19 = DOTATutorial();
    HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(v19);
    if ( HumanPlayer != 0 )
    {
      if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
      {
        v21 = 0x7FFF;
        v22 = 0x7FFF;
      }
      else
      {
        v21 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
        v22 = v21;
      }
      v23 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v21 & 0x7FFF;
      if ( (v23 + 2) > 1 )
      {
        v24 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v22 >> 9];
        if ( v24 != 0 )
        {
          v25 = &v24[v22 & 0x1FF];
          if ( v25 != 0 && v23 == v25->m_EHandle.m_Index )
          {
            m_pInstance = v25->m_pInstance;
            if ( v25->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              v27 = (*(me->_vptr_IHandleEntity + 376))(me);
              v28 = *(*v27 + 744LL);
              AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
              v28(v27, AbsOrigin);
            }
          }
        }
      }
    }
  }
  m_Index = me->m_hTutorialSpawner.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_18;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hTutorialSpawner.m_Index) >> 9) & 0x3F];
  if ( v8 == 0 )
    goto LABEL_18;
  v9 = &v8[me->m_hTutorialSpawner.m_Index & 0x1FF];
  if ( v9 == 0 )
    goto LABEL_18;
  if ( m_Index != v9->m_EHandle.m_Index )
    goto LABEL_18;
  v10 = v9->m_pInstance;
  if ( v9->m_pInstance == 0 )
    goto LABEL_18;
  v11 = me->m_CompanionEntity.m_Index;
  if ( v11 + 2 > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_CompanionEntity.m_Index) >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[me->m_CompanionEntity.m_Index & 0x1FF];
      if ( v13 != 0 && v11 == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
        goto LABEL_18;
    }
  }
  CurrentMoveToTarget = CDOTA_ScriptedSpawner::GetCurrentMoveToTarget(v10, me);
  if ( CurrentMoveToTarget == 0
    || (v15 = CBaseEntity::GetAbsOrigin(me),
        ((((v16 = CBaseEntity::GetAbsOrigin(CurrentMoveToTarget))->x - v15->x) * (v16->x - v15->x))
       + ((v16->y - v15->y) * (v16->y - v15->y))) < 300.0) )
  {
LABEL_18:
    *retstr = baseresult;
  }
  else
  {
    v17 = operator new(0x160u);
    memset(v17, 0, 0x160u);
    *v17 = &off_42C2BF0;
    v17[1] = &off_42C3030;
    v17[13] = &off_42C3098;
    *(v17 + 22) = 0;
    v17[14] = &off_42BB830;
    CGridNavPath::CGridNavPath((v17 + 15));
    CountdownTimer::CountdownTimer((v17 + 37));
    retstr->m_action = v17;
    *v17 = &off_42C30D0;
    v17[1] = &off_42C3510;
    *(v17 + 84) = -1;
    *(v17 + 85) = -1;
    v17[13] = &off_42C3578;
    *(v17 + 87) = -1;
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_reason = 0;
  }
  return retstr;
}


// CDOTABehaviorTutorialIdle::GetIdleActivity  (line 258, @0x000000000288cbe0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTABehaviorIdle::GetIdleActivity
// globals: CEntityHandle::gm_pEntityList
Activity __fastcall CDOTABehaviorTutorialIdle::GetIdleActivity(
        CDOTABehaviorTutorialIdle *const this,
        CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  Activity result; // eax

  m_Index = me->m_hTutorialSpawner.m_Index;
  if ( m_Index + 2 <= 1 )
    return CDOTABehaviorIdle::GetIdleActivity(this, me);
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hTutorialSpawner.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return CDOTABehaviorIdle::GetIdleActivity(this, me);
  v4 = &v3[me->m_hTutorialSpawner.m_Index & 0x1FF];
  if ( v4 == 0 )
    return CDOTABehaviorIdle::GetIdleActivity(this, me);
  if ( m_Index != v4->m_EHandle.m_Index )
    return CDOTABehaviorIdle::GetIdleActivity(this, me);
  if ( v4->m_pInstance == 0 )
    return CDOTABehaviorIdle::GetIdleActivity(this, me);
  result = HIDWORD(v4->m_pInstance[16].m_CScriptComponent);
  if ( result == -1 )
    return CDOTABehaviorIdle::GetIdleActivity(this, me);
  return result;
}


// CDOTABehaviorTutorialIdle::MaintainIdleActivity  (line 272, @0x000000000288d0d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTABehaviorIdle::MaintainIdleActivity, CDOTABody::GetAnimation, CDOTABody::StartAnimation
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTABehaviorTutorialIdle::MaintainIdleActivity(
        CDOTABehaviorTutorialIdle *const this,
        CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  unsigned int m_CScriptComponent_high; // r12d
  const CDOTABody *v8; // rax
  CDOTABody *v9; // rax

  m_Index = me->m_hTutorialSpawner.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hTutorialSpawner.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[me->m_hTutorialSpawner.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
      {
        m_CScriptComponent_high = HIDWORD(v6->m_pInstance[16].m_CScriptComponent);
        if ( m_CScriptComponent_high != -1 )
        {
          v8 = (*(me->_vptr_IHandleEntity + 377))(me);
          if ( m_CScriptComponent_high != CDOTABody::GetAnimation(v8) )
          {
            v9 = (*(me->_vptr_IHandleEntity + 377))(me);
            CDOTABody::StartAnimation(v9, m_CScriptComponent_high, 1, 1.0);
          }
        }
      }
    }
  }
  CDOTABehaviorIdle::MaintainIdleActivity(this, me);
}


// CDOTABehaviorTutorialIdle::OnSuspend  (line 291, @0x000000000288b580, libserver.so)  // inlines: ActionResult, Continue, IActionResult
// calls: CDOTABody::GetAnimation, CDOTABody::StartAnimation
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialIdle::OnSuspend(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialIdle *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  const CDOTABody *v6; // rax
  CDOTABody *v8; // rax

  v6 = (*(me->_vptr_IHandleEntity + 377))(me, this, me, interruptingAction);
  if ( (CDOTABody::GetAnimation(v6) - 1608) <= 1 )
  {
    v8 = (*(me->_vptr_IHandleEntity + 377))(me);
    CDOTABody::StartAnimation(v8, 0x64Au, 1, 1.0);
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorTutorialIdle::OnAnimationActivityComplete  (line 303, @0x000000000288d9d0, libserver.so)  // inlines: EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, TryContinue, operator CEntityInstance*
// calls: CDOTABehaviorIdle::OnAnimationActivityComplete, CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy, CDOTABody::StartAnimation
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialIdle::OnAnimationActivityComplete(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialIdle *const this,
        CDOTA_BaseNPC *me,
        int activity)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r15
  unsigned int v12; // r13d
  Activity v13; // r15d
  CDOTABody *v14; // rax

  m_Index = me->m_hTutorialSpawner.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hTutorialSpawner.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[me->m_hTutorialSpawner.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
      {
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance != 0 )
        {
          v12 = (*(this->_vptr_INextBotEventResponder + 130))(this, me);
          if ( *(&m_pInstance[16].m_worldGroupId + 4) != 0 )
          {
            v13 = 1608;
            if ( activity != 1500 )
              v13 = (activity - 1608) < 2 ? 1609 : 1500;
            if ( CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(me, v13).m_Data != -1 )
              v12 = v13;
          }
          else if ( (activity - 1608) <= 1 )
          {
            v12 = 1610;
            goto LABEL_14;
          }
          if ( activity == v12 )
          {
LABEL_15:
            retstr->m_type = ActionResultType::CONTINUE;
            retstr->m_action = 0;
            retstr->m_reason = 0;
            retstr->m_priority = EventResultPriorityType::RESULT_TRY;
            return retstr;
          }
LABEL_14:
          v14 = (*(me->_vptr_IHandleEntity + 377))(me);
          CDOTABody::StartAnimation(v14, v12, 1, 1.0);
          goto LABEL_15;
        }
      }
    }
  }
  CDOTABehaviorIdle::OnAnimationActivityComplete(retstr, this, me, activity);
  return retstr;
}


// CDOTABehaviorTutorialIdle::OnResume  (line 343, @0x000000000288d310, libserver.so)  // inlines: Action, ActionResult, IActionResult, SuspendFor
// calls: CDOTABehaviorIdle::OnResume, operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "MoveToNPCToAttack"
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialIdle::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialIdle *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  _QWORD *v8; // r12
  ActionResult<CDOTA_BaseNPC> baseresult; // [rsp+0h] [rbp-40h] BYREF

  CDOTABehaviorIdle::OnResume(&baseresult, this, me, interruptingAction);
  if ( baseresult.m_type == ActionResultType::CONTINUE
    && interruptingAction != 0
    && (*(interruptingAction->_vptr_INextBotEventResponder + 63))(interruptingAction, "MoveToNPCToAttack") != 0 )
  {
    v8 = operator new(0x98u);
    memset(v8, 0, 0x98u);
    *(v8 + 22) = 0;
    *v8 = &off_42C22B0;
    v8[1] = &off_42C26D0;
    CountdownTimer::CountdownTimer((v8 + 13));
    CountdownTimer::CountdownTimer((v8 + 16));
    retstr->m_type = ActionResultType::SUSPEND_FOR;
    retstr->m_action = v8;
    retstr->m_reason = 0;
    this->m_eventResult.m_type = ActionResultType::CONTINUE;
    this->m_eventResult.m_action = 0;
    this->m_eventResult.m_reason = 0;
    this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    return retstr;
  }
  else
  {
    *retstr = baseresult;
    return retstr;
  }
}


// CDOTABehaviorTutorialVictory::OnStart  (line 362, @0x000000000288db30, libserver.so)  // inlines: ActionResult, Continue, Done, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, Invalidate, IsValid, LookupEntity, NetworkStateChanged, Set, Start, operator CEntityInstance*, operator=<float>
// calls: CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy, RandomFloat, CountdownTimer::Now
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialVictory::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialVictory *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  double v10; // xmm0_8
  double v11; // xmm1_8
  double v12; // xmm2_8
  float v13; // [rsp+8h] [rbp-28h]
  float v14; // [rsp+Ch] [rbp-24h]

  m_Index = me->m_hTutorialSpawner.m_Index;
  if ( m_Index + 2 > 1
    && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hTutorialSpawner.m_Index) >> 9) & 0x3F]) != 0
    && (v8 = &v7[me->m_hTutorialSpawner.m_Index & 0x1FF]) != 0
    && m_Index == v8->m_EHandle.m_Index
    && v8->m_pInstance != 0
    && *(&v8->m_pInstance[16].m_worldGroupId + 5) != 0
    && CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(me, 1591).m_Data != -1 )
  {
    v14 = RandomFloat(0.0, 0.5);
    *&v10 = CountdownTimer::Now(&this->m_StartAnimationTime) + v14;
    if ( *&v10 != this->m_StartAnimationTime.m_timestamp.m_Value )
    {
      v13 = *&v10;
      (*(this->m_StartAnimationTime._vptr_CountdownTimer + 2))(
        &this->m_StartAnimationTime,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      *&v10 = LODWORD(v13);
      this->m_StartAnimationTime.m_timestamp.m_Value = v13;
    }
    *&v12 = LODWORD(v14);
    if ( v14 != this->m_StartAnimationTime.m_duration.m_Value )
    {
      (*(this->m_StartAnimationTime._vptr_CountdownTimer + 2))(
        &this->m_StartAnimationTime,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v10,
        v11,
        v14);
      this->m_StartAnimationTime.m_duration.m_Value = v14;
    }
    if ( this->m_FinishAnimationTime.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_FinishAnimationTime._vptr_CountdownTimer + 2))(
        &this->m_FinishAnimationTime,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        -1.0,
        v11,
        v12);
      this->m_FinishAnimationTime.m_timestamp.m_Value = -1.0;
    }
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  else
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
}


// CDOTABehaviorTutorialVictory::Update  (line 379, @0x000000000288d660, libserver.so)  // inlines: ActionResult, Continue, Done, IActionResult, Invalidate, IsElapsed, NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now, RandomFloat, CDOTABody::StartAnimation
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialVictory::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialVictory *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  float v8; // xmm0_4
  float m_Value; // xmm1_4
  float v10; // xmm0_4
  CDOTABody *v11; // rax
  float v12; // [rsp-28h] [rbp-30h]
  float v13; // [rsp-24h] [rbp-2Ch]

  if ( this->m_FinishAnimationTime.m_timestamp.m_Value <= 0.0
    || CountdownTimer::Now(&this->m_FinishAnimationTime) < this->m_FinishAnimationTime.m_timestamp.m_Value )
  {
    if ( this->m_StartAnimationTime.m_timestamp.m_Value > 0.0 )
    {
      v8 = CountdownTimer::Now(&this->m_StartAnimationTime);
      m_Value = this->m_StartAnimationTime.m_timestamp.m_Value;
      if ( v8 >= m_Value )
      {
        if ( m_Value != -1.0 )
        {
          (*(this->m_StartAnimationTime._vptr_CountdownTimer + 2))(
            &this->m_StartAnimationTime,
            12,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          this->m_StartAnimationTime.m_timestamp.m_Value = -1.0;
        }
        v13 = RandomFloat(2.0, 4.0);
        v10 = CountdownTimer::Now(&this->m_FinishAnimationTime) + v13;
        if ( v10 != this->m_FinishAnimationTime.m_timestamp.m_Value )
        {
          v12 = v10;
          (*(this->m_FinishAnimationTime._vptr_CountdownTimer + 2))(
            &this->m_FinishAnimationTime,
            12,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          this->m_FinishAnimationTime.m_timestamp.m_Value = v12;
        }
        if ( v13 != this->m_FinishAnimationTime.m_duration.m_Value )
        {
          (*(this->m_FinishAnimationTime._vptr_CountdownTimer + 2))(
            &this->m_FinishAnimationTime,
            8,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          this->m_FinishAnimationTime.m_duration.m_Value = v13;
        }
        v11 = (*(me->_vptr_IHandleEntity + 377))(me);
        CDOTABody::StartAnimation(v11, 0x6AEu, 1, 1.0);
      }
    }
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  else
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
}


// CDOTABehaviorRoquelaireIdle::OnStart  (line 398, @0x000000000288e600, libserver.so)
// calls: CDOTABehaviorIdle::OnStartInternal
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorRoquelaireIdle::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorRoquelaireIdle *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  CDOTABehaviorIdle::OnStartInternal(retstr, this, me, priorAction);
  return retstr;
}


// CDOTABehaviorRoquelaireIdle::GetIdleActivity  (line 403, @0x000000000288b350, libserver.so)
Activity __fastcall CDOTABehaviorRoquelaireIdle::GetIdleActivity(
        CDOTABehaviorRoquelaireIdle *const this,
        CDOTA_BaseNPC *me)
{
  return 1616;
}


// CDOTABehaviorRoquelaireIdle::Update  (line 408, @0x00000000028938f0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorInvade, CDOTABehaviorMoveTo, CDOTABehaviorTutorialInvade, CEntityHandle, CHandle, ChangeTo, Continue, Get, GetAssignedHero, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IActionResult, IndexToIdentity, Init, IsValid, Length2DSqr, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, WorldSpaceAABB, operator CBaseEntity*, operator CEntityInstance*, operator-, ~CGridNavPath, ~CUtlVector
// calls: DOTATutorial, CDOTA_Tutorial::GetHumanPlayer, CBaseEntity::GetAbsOrigin, CCollisionProperty::CollisionAABBToWorldAABB, Frustum_t::Frustum_t, GeneratePerspectiveFrustum, Frustum_t::Intersects, CDOTABody::StartAnimation, CDOTA_Tutorial::GetNearestRoquelairePerch, CEntityHandle::operator CEntityInstance*, CDOTA_ScriptedSpawner::SetNPCWaypoint, operator new (20 total)
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorRoquelaireIdle::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorRoquelaireIdle *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_Tutorial *v9; // rax
  CDOTAPlayer *v10; // r14
  const Vector *v11; // rax
  __int64 v12; // rax
  const QAngle *v13; // rax
  CDOTABody *v14; // rax
  CDOTA_Tutorial *v16; // rax
  CBaseEntity *NearestRoquelairePerch; // rax
  CBaseEntity *v18; // r13
  const Vector *v19; // rax
  CDOTA_ScriptedSpawner *v20; // rax
  _QWORD *v21; // rbx
  CBaseEntity *CurrentMoveToTarget; // r13
  const Vector *AbsOrigin; // r14
  const Vector *v24; // rax
  CDOTA_Tutorial *v25; // rax
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v27; // dx
  int v28; // esi
  int v29; // eax
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  __int64 v32; // rax
  CEntityInstance *m_pInstance; // r14
  __int64 v34; // r15
  const Vector *v35; // rax
  float x; // [rsp+8h] [rbp-1B8h]
  float y; // [rsp+Ch] [rbp-1B4h]
  __int128 vecCameraPos; // [rsp+18h] [rbp-1A8h] OVERLAPPED BYREF
  int v39; // [rsp+28h] [rbp-198h]
  Vector vecWorldMins; // [rsp+30h] [rbp-190h] BYREF
  Vector vecWorldMaxs; // [rsp+40h] [rbp-180h] BYREF
  Frustum_t viewFrustum; // [rsp+50h] [rbp-170h] BYREF

  m_Index = me->m_hTutorialSpawner.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hTutorialSpawner.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[me->m_hTutorialSpawner.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        CurrentMoveToTarget = CDOTA_ScriptedSpawner::GetCurrentMoveToTarget(v8->m_pInstance, me);
        if ( CurrentMoveToTarget != 0 )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(me);
          v24 = CBaseEntity::GetAbsOrigin(CurrentMoveToTarget);
          if ( (((v24->x - AbsOrigin->x) * (v24->x - AbsOrigin->x)) + ((v24->y - AbsOrigin->y) * (v24->y - AbsOrigin->y))) >= 300.0 )
          {
            v21 = operator new(0x168u);
            memset(v21, 0, 0x168u);
            *v21 = &off_42C2BF0;
            v21[1] = &off_42C3030;
            v21[13] = &off_42C3098;
            *(v21 + 22) = 0;
            v21[14] = &off_42BB830;
            CGridNavPath::CGridNavPath((v21 + 15));
            CountdownTimer::CountdownTimer((v21 + 37));
            goto LABEL_13;
          }
          if ( !me->m_bFacePlayer )
            goto LABEL_26;
          v25 = DOTATutorial();
          HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(v25);
          if ( HumanPlayer != 0 )
          {
            if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
            {
              v27 = 0x7FFF;
              v28 = 0x7FFF;
            }
            else
            {
              v27 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v28 = v27;
            }
            v29 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v27 & 0x7FFF;
            *viewFrustum.planes[0].gap0 = v29;
            if ( (v29 + 2) > 1 )
            {
              v30 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v28 >> 9];
              if ( v30 != 0 )
              {
                v31 = &v30[v28 & 0x1FF];
                if ( v31 != 0 && v29 == v31->m_EHandle.m_Index )
                {
                  m_pInstance = v31->m_pInstance;
                  if ( v31->m_pInstance != 0
                    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v34 = (*(me->_vptr_IHandleEntity + 376))(me);
                    *&vecCameraPos = *(*v34 + 744LL);
                    v35 = CBaseEntity::GetAbsOrigin(m_pInstance);
                    (vecCameraPos)(v34, v35);
                  }
                }
              }
            }
          }
          if ( !me->m_bFacePlayer )
          {
LABEL_26:
            *&vecCameraPos = CBaseEntity::GetAbsAngles(CurrentMoveToTarget)->y;
            v32 = (*(me->_vptr_IHandleEntity + 376))(me);
            (*(*v32 + 920LL))(v32, *&vecCameraPos);
          }
        }
      }
    }
  }
  v9 = DOTATutorial();
  v10 = CDOTA_Tutorial::GetHumanPlayer(v9);
  if ( v10 != 0 )
  {
    v11 = CBaseEntity::GetAbsOrigin(me);
    x = v11->x;
    y = v11->y;
    v12 = *&CBaseEntity::GetAbsOrigin(v10)->x;
    v39 = 1150140416;
    *(&vecCameraPos + 1) = v12;
    CCollisionProperty::CollisionAABBToWorldAABB(
      &me->m_Collision,
      &me->m_Collision.m_vecMins.m_Value,
      &me->m_Collision.m_vecMaxs.m_Value,
      &vecWorldMins,
      &vecWorldMaxs);
    Frustum_t::Frustum_t(&viewFrustum);
    *&vecCameraPos = v10->m_flAspectRatio.m_Value;
    v13 = (*(v10->_vptr_IHandleEntity + 165))(v10);
    GeneratePerspectiveFrustum((&vecCameraPos + 8), v13, 7.0, 2500.0, 67.0, *&vecCameraPos, &viewFrustum);
    if ( !Frustum_t::Intersects(&viewFrustum, &vecWorldMins, &vecWorldMaxs) )
    {
      v16 = DOTATutorial();
      NearestRoquelairePerch = CDOTA_Tutorial::GetNearestRoquelairePerch(v16);
      v18 = NearestRoquelairePerch;
      if ( NearestRoquelairePerch != 0 )
      {
        v19 = CBaseEntity::GetAbsOrigin(NearestRoquelairePerch);
        if ( (((x - v19->x) * (x - v19->x)) + ((y - v19->y) * (y - v19->y))) > 100.0 )
        {
          v20 = CEntityHandle::operator CEntityInstance *(&me->m_hTutorialSpawner);
          if ( v20 != 0 )
          {
            CDOTA_ScriptedSpawner::SetNPCWaypoint(v20, v18);
            v21 = operator new(0x168u);
            memset(v21, 0, 0x168u);
            *v21 = &off_42C2BF0;
            v21[1] = &off_42C3030;
            v21[13] = &off_42C3098;
            *(v21 + 22) = 0;
            v21[14] = &off_42BB830;
            CGridNavPath::CGridNavPath((v21 + 15));
            CountdownTimer::CountdownTimer((v21 + 37));
LABEL_13:
            *(v21 + 84) = -1;
            *v21 = &off_42C35B0;
            v21[1] = &off_42C39F0;
            *(v21 + 85) = -1;
            *(v21 + 87) = -1;
            v21[13] = &off_42C3A58;
            retstr->m_type = ActionResultType::CHANGE_TO;
            retstr->m_action = v21;
            retstr->m_reason = 0;
            return retstr;
          }
        }
      }
    }
  }
  v14 = (*(me->_vptr_IHandleEntity + 377))(me);
  CDOTABody::StartAnimation(v14, 0x650u, 0, 1.0);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorRoquelaireIdle::OnAnimationActivityComplete  (line 497, @0x000000000288b3c0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
// calls: CDOTABody::StartAnimation
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorRoquelaireIdle::OnAnimationActivityComplete(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorRoquelaireIdle *const this,
        CDOTA_BaseNPC *me,
        int activity)
{
  CDOTABody *v5; // rax

  if ( !this->m_isSuspended )
  {
    v5 = (*(me->_vptr_IHandleEntity + 377))(me);
    CDOTABody::StartAnimation(v5, 0x650u, 0, 1.0);
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


