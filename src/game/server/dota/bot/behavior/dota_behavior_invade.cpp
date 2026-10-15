
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorInvade::OnStart  (line 26, @0x0000000002892de0, libserver.so)  // inlines: ActionResult, ChangeTo, IActionResult
// calls: operator new, CDOTABehaviorCreatureInvade::CDOTABehaviorCreatureInvade, CDOTABehaviorInvade::OnStartInternal, operator delete, _Unwind_Resume
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorInvade::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorInvade *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  CDOTABehaviorCreatureInvade *v5; // r12

  if ( (me->m_iUnitType & 0x10000) == 0 || me->m_iIsControllableByPlayer64.m_Value != 0 )
  {
    CDOTABehaviorInvade::OnStartInternal(retstr, this, me, priorAction);
    return retstr;
  }
  else
  {
    v5 = operator new(0x170u);
    CDOTABehaviorCreatureInvade::CDOTABehaviorCreatureInvade(v5);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v5;
    retstr->m_reason = 0;
    return retstr;
  }
}


// CDOTABehaviorInvade::OnStartInternal  (line 35, @0x000000000288e760, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IActionResult, IndexToIdentity, Invalidate, LookupEntity, NetworkStateChanged, OnStart, Set, operator CEntityInstance*, operator=, operator=<float>, operator==<CBaseEntity>, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume, CBaseEntity::GetNextTarget
// callers: CDOTABehaviorTutorialInvade::OnStart, CDOTABehaviorRoquelaireInvade::OnStart, CDOTABehaviorCreatureInvade::OnStart, CDOTABehaviorInvade::OnStart
// strings: "No initial goal entity"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorInvade::OnStartInternal(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorInvade *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  CConcreteEntityList *v11; // rsi
  uint32 v12; // ecx
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  char *v15; // rbx
  CBaseEntity *NextTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v19; // eax
  __int16 v20; // cx

  this->m_bReachedFinalGoal = 0;
  v7 = (*(this->_vptr_INextBotEventResponder + 132))(this, me);
  if ( v7 == 0 || (v8 = *(v7 + 8)) == 0 )
  {
    this->m_goalEntity.m_Index = -1;
LABEL_9:
    v15 = operator new(0x80u);
    *(v15 + 16) = 0;
    *(v15 + 9) = 0;
    *(v15 + 10) = 0;
    *(v15 + 3) = 0;
    *(v15 + 4) = 0;
    *(v15 + 5) = 0;
    *(v15 + 6) = 0;
    *(v15 + 7) = 0;
    *(v15 + 2) = 0;
    v15[96] = 0;
    v15[97] = 0;
    *(v15 + 22) = 0;
    *v15 = &off_42C1970;
    *(v15 + 1) = &off_42C1DA0;
    CountdownTimer::CountdownTimer((v15 + 104));
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_reason = "No initial goal entity";
    retstr->m_action = v15;
    return retstr;
  }
  v9 = (*(v8 + 16) >> 15) - (*(v8 + 48) & 1);
  v10 = 0x7FFF;
  if ( *(v8 + 16) != -1 )
    v10 = *(v8 + 16) & 0x7FFF;
  v11 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_goalEntity.m_Index) = v10 | this->m_goalEntity.m_Index & 0x8000;
  v12 = (v9 << 15) | this->m_goalEntity.m_Index & 0x7FFF;
  this->m_goalEntity.m_Index = v12;
  if ( v12 + 2 <= 1 )
    goto LABEL_9;
  v13 = v11->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F];
  if ( v13 == 0 )
    goto LABEL_9;
  v14 = &v13[this->m_goalEntity.m_Index & 0x1FF];
  if ( v14 == 0 || v14->m_EHandle.m_Index != v12 || v14->m_pInstance == 0 )
    goto LABEL_9;
  NextTarget = CBaseEntity::GetNextTarget(v14->m_pInstance);
  if ( NextTarget != 0 && (m_pEntity = NextTarget->m_pEntity) != 0 )
  {
    v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v20 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_nextGoalEntity.m_Index) = v20 | this->m_nextGoalEntity.m_Index & 0x8000;
    this->m_nextGoalEntity.m_Index = (v19 << 15) | this->m_nextGoalEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_nextGoalEntity.m_Index = -1;
  }
  this->m_MoveTo.m_bSetAnimation = 1;
  if ( this->m_MoveTo.m_repathTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_MoveTo.m_repathTimer._vptr_CountdownTimer + 2))(
      &this->m_MoveTo.m_repathTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_MoveTo.m_repathTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_MoveTo.m_bUseSwimAnimations = 0;
  this->m_MoveTo.m_nRunActivity = 1502;
  this->m_MoveTo.m_flTargetDist = 0.0;
  this->m_MoveTo.m_bIsDirectional = 0;
  if ( me->m_iIsControllableByPlayer64.m_Value != 0 )
  {
    (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me);
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


// CDOTABehaviorInvade::GetTargetPosition  (line 51, @0x000000000288ce20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTABehaviorCreatureInvade::GetTargetPosition
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTABehaviorInvade::GetTargetPosition(CDOTABehaviorInvade *const this, CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rdi
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = this->m_goalEntity.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v5 = this->m_goalEntity.m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTABehaviorInvade::Update  (line 60, @0x0000000002891750, libserver.so)  // inlines: ActionResult, CEntityHandle, CHandle, ChangeTo, Continue, DotProduct, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IActionResult, IndexToIdentity, Invalidate, InvalidatePath, IsPathCurrentlyExhausted, IsValid, LookupEntity, NormalizeInPlace, RemoveAll, Set, SetInitialGoalEntity, SuspendFor, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator!, operator-, operator->, operator=
// calls: operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, CDOTABehaviorMoveTo::Update, CDOTALocomotor::StopMovement, CDOTABody::StartAnimation, CDOTA_BaseNPC::GetAutoAttackTarget, CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack, CDOTA_BaseNPC::OnGoalEntityReached, operator delete, _Unwind_Resume, CBaseEntity::GetAbsOrigin (15 total)
// callers: CDOTABehaviorTutorialInvade::Update, CDOTABehaviorRoquelaireInvade::Update, CDOTABehaviorCreatureInvade::Update
// strings: "No goal entity", "Auto attack target acquired"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorInvade::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorInvade *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v8; // rcx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTABehaviorIdle *v12; // rbx
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  float v17; // xmm0_4
  CDOTALocomotor *v18; // rax
  CDOTABody *v19; // rax
  CDOTA_BaseNPC *AutoAttackTarget; // r14
  CDOTABehaviorMoveToNPCToAttack *v21; // r12
  vec_t v22; // eax
  const Vector *AbsOrigin; // rax
  uint32 v24; // ecx
  float *p_x; // r14
  CEntityIdentity *v26; // rdx
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v28; // rdx
  const Vector *v29; // rax
  vec_t v30; // xmm0_4
  vec_t v31; // xmm1_4
  float v32; // xmm0_4
  uint32 v33; // eax
  const CBaseEntity *v34; // rdi
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rdx
  const Vector *v37; // rax
  const CBaseEntity *v38; // rdi
  float *v39; // r14
  uint32 v40; // eax
  CEntityIdentity *v41; // rdx
  CEntityIdentity *v42; // rdx
  const Vector *v43; // rax
  vec_t v44; // xmm0_4
  vec_t v45; // xmm1_4
  uint32 v46; // eax
  CConcreteEntityList *v47; // rcx
  CEntityIdentity *v48; // rdx
  CEntityIdentity *v49; // rdx
  CEntityInstance *v50; // rax
  CEntityIdentity *v51; // rdx
  int v52; // eax
  __int16 v53; // cx
  CBaseEntity *v54; // rax
  CBaseEntity *NextTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v57; // eax
  __int16 v58; // cx
  float rangeToGoal; // [rsp+Ch] [rbp-64h]
  EHANDLE hGoalEntity; // [rsp+10h] [rbp-60h] BYREF
  EHANDLE hNextGoalEntity; // [rsp+20h] [rbp-50h] BYREF
  Vector vTowardGoal; // [rsp+30h] [rbp-40h] BYREF
  Vector towardNextGoal; // [rsp+40h] [rbp-30h] BYREF

  m_Index = this->m_goalEntity.m_Index;
  v8 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(this->m_goalEntity.m_Index),
        (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v11 = &v10[m_Index_low & 0x1FF]) == 0
    || m_Index != v11->m_EHandle.m_Index
    || v11->m_pInstance == 0 )
  {
    v12 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v12);
    retstr->m_action = v12;
    retstr->m_reason = "No goal entity";
    retstr->m_type = ActionResultType::CHANGE_TO;
    return retstr;
  }
  if ( !me->m_bIsWaitingToSpawn.m_Value )
  {
    AutoAttackTarget = CDOTA_BaseNPC::GetAutoAttackTarget(me, 0, 0);
    if ( AutoAttackTarget != 0 )
    {
      v21 = operator new(0x188u);
      CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack(v21, AutoAttackTarget, 0);
      this->m_eventResult.m_type = ActionResultType::CONTINUE;
      this->m_eventResult.m_action = 0;
      this->m_eventResult.m_reason = 0;
      this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
      retstr->m_action = v21;
      retstr->m_reason = "Auto attack target acquired";
      retstr->m_type = ActionResultType::SUSPEND_FOR;
      return retstr;
    }
    v8 = CEntityHandle::gm_pEntityList;
  }
  v14 = this->m_nextGoalEntity.m_Index;
  if ( v14 + 2 > 1
    && (v15 = v8->m_pIdentityChunks[(LOWORD(this->m_nextGoalEntity.m_Index) >> 9) & 0x3F]) != 0
    && (v16 = &v15[this->m_nextGoalEntity.m_Index & 0x1FF]) != 0
    && v14 == v16->m_EHandle.m_Index )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    v24 = this->m_goalEntity.m_Index;
    p_x = &AbsOrigin->x;
    if ( v24 + 2 > 1
      && (v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F]) != 0 )
    {
      m_pInstance = 0;
      v28 = &v26[this->m_goalEntity.m_Index & 0x1FF];
      if ( v28 != 0 && v24 == v28->m_EHandle.m_Index )
        m_pInstance = v28->m_pInstance;
    }
    else
    {
      m_pInstance = 0;
    }
    v29 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v30 = v29->y - p_x[1];
    v31 = v29->x - *p_x;
    vTowardGoal.z = 0.0;
    vTowardGoal.y = v30;
    vTowardGoal.x = v31;
    v32 = VectorNormalize(&vTowardGoal);
    v33 = this->m_goalEntity.m_Index;
    v34 = 0;
    rangeToGoal = v32;
    if ( v33 + 2 > 1 )
    {
      v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F];
      if ( v35 != 0 )
      {
        v36 = &v35[this->m_goalEntity.m_Index & 0x1FF];
        if ( v36 != 0 && v33 == v36->m_EHandle.m_Index )
          v34 = v36->m_pInstance;
      }
    }
    v37 = CBaseEntity::GetAbsOrigin(v34);
    v38 = 0;
    v39 = &v37->x;
    v40 = this->m_nextGoalEntity.m_Index;
    if ( v40 + 2 > 1 )
    {
      v41 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_nextGoalEntity.m_Index) >> 9) & 0x3F];
      if ( v41 != 0 )
      {
        v42 = &v41[this->m_nextGoalEntity.m_Index & 0x1FF];
        if ( v42 != 0 && v40 == v42->m_EHandle.m_Index )
          v38 = v42->m_pInstance;
      }
    }
    v43 = CBaseEntity::GetAbsOrigin(v38);
    v44 = v43->y - v39[1];
    v45 = v43->x - *v39;
    towardNextGoal.z = 0.0;
    towardNextGoal.y = v44;
    towardNextGoal.x = v45;
    VectorNormalize(&towardNextGoal);
    if ( !me->m_bMustReachEachGoalEntity
      && (((vTowardGoal.x * towardNextGoal.x) + (vTowardGoal.y * towardNextGoal.y)) + (vTowardGoal.z * towardNextGoal.z)) <= -0.70709997
      || rangeToGoal < 300.0 )
    {
      hNextGoalEntity.m_Index = this->m_nextGoalEntity.m_Index;
      hGoalEntity.m_Index = this->m_goalEntity.m_Index;
      CDOTA_BaseNPC::OnGoalEntityReached(me, &hGoalEntity, &hNextGoalEntity);
      v46 = this->m_nextGoalEntity.m_Index;
      this->m_MoveTo.m_path.m_Positions.m_Size = 0;
      v47 = CEntityHandle::gm_pEntityList;
      this->m_goalEntity.m_Index = v46;
      if ( v46 + 2 > 1
        && (v48 = v47->m_pIdentityChunks[(LOWORD(this->m_nextGoalEntity.m_Index) >> 9) & 0x3F]) != 0
        && (v49 = &v48[this->m_nextGoalEntity.m_Index & 0x1FF]) != 0
        && v46 == v49->m_EHandle.m_Index
        && (v54 = CEntityHandle::operator CEntityInstance *(&this->m_nextGoalEntity),
            (NextTarget = CBaseEntity::GetNextTarget(v54)) != 0)
        && (m_pEntity = NextTarget->m_pEntity) != 0 )
      {
        v57 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v58 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v58 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_nextGoalEntity.m_Index) = v58 | this->m_nextGoalEntity.m_Index & 0x8000;
        this->m_nextGoalEntity.m_Index = (v57 << 15) | this->m_nextGoalEntity.m_Index & 0x7FFF;
      }
      else
      {
        this->m_nextGoalEntity.m_Index = -1;
      }
      v50 = CEntityHandle::operator CEntityInstance *(&this->m_nextGoalEntity);
      if ( v50 != 0 && (v51 = v50->m_pEntity) != 0 )
      {
        v52 = (v51->m_EHandle.m_Index >> 15) - (v51->m_flags & 1);
        v53 = 0x7FFF;
        if ( v51->m_EHandle.m_Index != -1 )
          v53 = v51->m_EHandle.m_Index & 0x7FFF;
        LOWORD(me->m_initialGoalEntity.m_Index) = v53 | me->m_initialGoalEntity.m_Index & 0x8000;
        me->m_initialGoalEntity.m_Index = (v52 << 15) | me->m_initialGoalEntity.m_Index & 0x7FFF;
      }
      else
      {
        me->m_initialGoalEntity.m_Index = -1;
      }
    }
  }
  else if ( this->m_MoveTo.m_path.m_Positions.m_Size > 0
         && CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me) )
  {
    if ( !this->m_bReachedFinalGoal )
    {
      v22 = *&this->m_goalEntity.m_Index;
      towardNextGoal.x = NAN;
      vTowardGoal.x = v22;
      CDOTA_BaseNPC::OnGoalEntityReached(me, &vTowardGoal, &towardNextGoal);
      this->m_bReachedFinalGoal = 1;
    }
  }
  else
  {
    this->m_bReachedFinalGoal = 0;
  }
  if ( (me->m_nUnitState64.m_Value & 2) != 0 )
  {
    v18 = (*(me->_vptr_IHandleEntity + 376))(me);
    CDOTALocomotor::StopMovement(v18, 0);
    v19 = (*(me->_vptr_IHandleEntity + 377))(me);
    CDOTABody::StartAnimation(v19, 0x5DCu, 0, 1.0);
  }
  else
  {
    v17 = (*(this->_vptr_INextBotEventResponder + 133))(this, me);
    CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, v17);
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorInvade::GetMoveSpeed  (line 133, @0x000000000288bbf0, libserver.so)
// callers: CDOTABehaviorCreatureInvade::GetMoveSpeed, CDOTABehaviorCreatureInvade::UpdateMoveRate
float __fastcall CDOTABehaviorInvade::GetMoveSpeed(CDOTABehaviorInvade *const this, CDOTA_BaseNPC *me)
{
  if ( (*(me->_vptr_IHandleEntity + 386))(me) < 0.0 )
    return 0.0;
  else
    return (*(me->_vptr_IHandleEntity + 386))(me);
}


// CDOTABehaviorInvade::OnDominated  (line 141, @0x000000000288c450, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorIdle, EventDesiredResult, IActionResult, TryChangeTo, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorInvade::OnDominated(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorInvade *const this,
        CDOTA_BaseNPC *me)
{
  char *v4; // rbx

  v4 = operator new(0x80u);
  *(v4 + 16) = 0;
  *(v4 + 9) = 0;
  *(v4 + 10) = 0;
  *(v4 + 3) = 0;
  *(v4 + 4) = 0;
  *(v4 + 5) = 0;
  *(v4 + 6) = 0;
  *(v4 + 7) = 0;
  *(v4 + 2) = 0;
  v4[96] = 0;
  v4[97] = 0;
  *(v4 + 22) = 0;
  *v4 = &off_42C1970;
  *(v4 + 1) = &off_42C1DA0;
  CountdownTimer::CountdownTimer((v4 + 104));
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Dominated";
  retstr->m_action = v4;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorTutorialInvade::OnStart  (line 150, @0x000000000288ea80, libserver.so)  // inlines: operator=
// calls: CDOTABehaviorInvade::OnStartInternal
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialInvade::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialInvade *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  CDOTABehaviorInvade::OnStartInternal(retstr, this, me, priorAction);
  this->m_lastSetGoalEntity.m_Index = this->m_goalEntity.m_Index;
  return retstr;
}


// CDOTABehaviorTutorialInvade::GetGoalEntity  (line 158, @0x000000000288d430, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetGoalEntity, GetInitialGoalEntity, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_ScriptedSpawner::GetCurrentMoveToTarget
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CDOTABehaviorTutorialInvade::GetGoalEntity(
        CDOTABehaviorTutorialInvade *const this,
        CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  uint32 v5; // edx
  CBaseEntity *result; // rax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx

  m_Index = me->m_hTutorialSpawner.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hTutorialSpawner.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[me->m_hTutorialSpawner.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        return CDOTA_ScriptedSpawner::GetCurrentMoveToTarget(v4->m_pInstance, me);
    }
  }
  v5 = me->m_initialGoalEntity.m_Index;
  result = 0;
  if ( v5 + 2 > 1 )
  {
    m_Index_low = LOWORD(me->m_initialGoalEntity.m_Index);
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[m_Index_low & 0x1FF];
      if ( v9 != 0 && v5 == v9->m_EHandle.m_Index )
        return v9->m_pInstance;
    }
  }
  return result;
}


// CDOTABehaviorTutorialInvade::Update  (line 168, @0x0000000002891dd0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, CDOTABehaviorTutorialIdle, ChangeTo, EventDesiredResult, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IActionResult, IndexToIdentity, Invalidate, InvalidatePath, IsPathCurrentlyExhausted, IsValid, LookupEntity, RemoveAll, Set, SetInitialGoalEntity, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=, ~CDOTABehaviorCommandListener
// calls: CDOTABehaviorInvade::Update, CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, CBaseEntity::GetAbsAngles, CDOTALocomotor::ShouldTurnAnimate, CBaseEntity::GetNextTarget, operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "End of invade path reached.", "No goal entity"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialInvade::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialInvade *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  const CBaseEntity *v8; // r14
  __int64 v9; // rax
  CDOTALocomotor *v10; // rax
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rcx
  CConcreteEntityList *v13; // rsi
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rax
  int v20; // edx
  __int16 v21; // cx
  uint32 v22; // eax
  CEntityIdentity *v23; // rdx
  CBaseEntity *v24; // rdi
  CEntityIdentity *v25; // rdx
  CBaseEntity *NextTarget; // rax
  CEntityIdentity *v27; // rdx
  int v28; // eax
  __int16 v29; // cx
  uint32 v30; // eax
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  char *v33; // rbx
  char *v34; // rbx
  CEntityIdentity *v35; // rdx
  int v36; // eax
  __int16 v37; // cx
  float y; // [rsp+Ch] [rbp-44h]
  ActionResult<CDOTA_BaseNPC> baseresult; // [rsp+10h] [rbp-40h] BYREF

  CDOTABehaviorInvade::Update(&baseresult, this, me, interval);
  if ( baseresult.m_type == ActionResultType::CONTINUE )
  {
    v8 = (*(this->_vptr_INextBotEventResponder + 132))(this, me);
    if ( this->m_MoveTo.m_path.m_Positions.m_Size > 0
      && CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me) )
    {
      if ( v8 != 0 )
      {
        y = CBaseEntity::GetAbsAngles(v8)->y;
        v9 = (*(me->_vptr_IHandleEntity + 376))(me);
        (*(*v9 + 920LL))(v9, y);
      }
      v10 = (*(me->_vptr_IHandleEntity + 376))(me);
      if ( !CDOTALocomotor::ShouldTurnAnimate(v10) )
      {
        v33 = operator new(0x80u);
        *(v33 + 16) = 0;
        *(v33 + 9) = 0;
        *(v33 + 10) = 0;
        *(v33 + 3) = 0;
        *(v33 + 4) = 0;
        *(v33 + 5) = 0;
        *(v33 + 6) = 0;
        *(v33 + 7) = 0;
        *(v33 + 2) = 0;
        v33[96] = 0;
        v33[97] = 0;
        *(v33 + 22) = 0;
        *v33 = &off_42C1970;
        *(v33 + 1) = &off_42C1DA0;
        CountdownTimer::CountdownTimer((v33 + 104));
        retstr->m_type = ActionResultType::CHANGE_TO;
        retstr->m_action = v33;
        retstr->m_reason = "End of invade path reached.";
        return retstr;
      }
    }
    m_Index = this->m_lastSetGoalEntity.m_Index;
    m_pInstance = 0;
    v13 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_lastSetGoalEntity.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_lastSetGoalEntity.m_Index & 0x1FF];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
          m_pInstance = v15->m_pInstance;
      }
    }
    if ( v8 != m_pInstance )
    {
      if ( v8 == 0 )
      {
        this->m_lastSetGoalEntity.m_Index = -1;
        v34 = operator new(0x80u);
        *(v34 + 16) = 0;
        *(v34 + 9) = 0;
        *(v34 + 10) = 0;
        *(v34 + 3) = 0;
        *(v34 + 4) = 0;
        *(v34 + 5) = 0;
        *(v34 + 6) = 0;
        *(v34 + 7) = 0;
        *(v34 + 2) = 0;
        v34[96] = 0;
        v34[97] = 0;
        *(v34 + 22) = 0;
        *v34 = &off_42C1970;
        *(v34 + 1) = &off_42C1DA0;
        CountdownTimer::CountdownTimer((v34 + 104));
        *v34 = &off_42C1E10;
        *(v34 + 1) = &off_42C2240;
        retstr->m_type = ActionResultType::CHANGE_TO;
        retstr->m_action = v34;
        retstr->m_reason = "No goal entity";
        return retstr;
      }
      m_pEntity = v8->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v18 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_lastSetGoalEntity.m_Index) = v18 | this->m_lastSetGoalEntity.m_Index & 0x8000;
        this->m_lastSetGoalEntity.m_Index = (v17 << 15) | this->m_lastSetGoalEntity.m_Index & 0x7FFF;
      }
      else
      {
        this->m_lastSetGoalEntity.m_Index = -1;
      }
      this->m_MoveTo.m_path.m_Positions.m_Size = 0;
      v19 = v8->m_pEntity;
      if ( v19 != 0 )
      {
        v20 = (v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1);
        v21 = 0x7FFF;
        if ( v19->m_EHandle.m_Index != -1 )
          v21 = v19->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_goalEntity.m_Index) = v21 | this->m_goalEntity.m_Index & 0x8000;
        v22 = (v20 << 15) | this->m_goalEntity.m_Index & 0x7FFF;
        this->m_goalEntity.m_Index = v22;
        if ( v22 + 2 > 1 && (v23 = v13->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F]) != 0 )
        {
          v24 = 0;
          v25 = &v23[this->m_goalEntity.m_Index & 0x1FF];
          if ( v25 != 0 && v22 == v25->m_EHandle.m_Index )
            v24 = v25->m_pInstance;
        }
        else
        {
          v24 = 0;
        }
      }
      else
      {
        this->m_goalEntity.m_Index = -1;
        v24 = 0;
      }
      NextTarget = CBaseEntity::GetNextTarget(v24);
      if ( NextTarget != 0 && (v27 = NextTarget->m_pEntity) != 0 )
      {
        v28 = (v27->m_EHandle.m_Index >> 15) - (v27->m_flags & 1);
        v29 = 0x7FFF;
        if ( v27->m_EHandle.m_Index != -1 )
          v29 = v27->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_nextGoalEntity.m_Index) = v29 | this->m_nextGoalEntity.m_Index & 0x8000;
        this->m_nextGoalEntity.m_Index = (v28 << 15) | this->m_nextGoalEntity.m_Index & 0x7FFF;
      }
      else
      {
        this->m_nextGoalEntity.m_Index = -1;
      }
      v30 = this->m_goalEntity.m_Index;
      if ( v30 + 2 > 1
        && (v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_goalEntity.m_Index) >> 9) & 0x3F]) != 0
        && (v32 = &v31[this->m_goalEntity.m_Index & 0x1FF]) != 0
        && v30 == v32->m_EHandle.m_Index
        && v32->m_pInstance != 0
        && (v35 = v32->m_pInstance->m_pEntity) != 0 )
      {
        v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
        v37 = 0x7FFF;
        if ( v35->m_EHandle.m_Index != -1 )
          v37 = v35->m_EHandle.m_Index & 0x7FFF;
        LOWORD(me->m_initialGoalEntity.m_Index) = v37 | me->m_initialGoalEntity.m_Index & 0x8000;
        me->m_initialGoalEntity.m_Index = (v36 << 15) | me->m_initialGoalEntity.m_Index & 0x7FFF;
      }
      else
      {
        me->m_initialGoalEntity.m_Index = -1;
      }
    }
  }
  *retstr = baseresult;
  return retstr;
}


// CDOTABehaviorTutorialInvade::OnResume  (line 208, @0x000000000288c9d0, libserver.so)  // inlines: Action, ActionResult, Continue, IActionResult, Invalidate, NetworkStateChanged, OnResume, RemoveAll, Set, SuspendFor, operator=<float>
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "MoveToNPCToAttack"
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialInvade::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialInvade *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  _QWORD *v7; // r13

  if ( interruptingAction != 0
    && (*(interruptingAction->_vptr_INextBotEventResponder + 63))(interruptingAction, "MoveToNPCToAttack", me) != 0 )
  {
    v7 = operator new(0x98u);
    memset(v7, 0, 0x98u);
    *(v7 + 22) = 0;
    *v7 = &off_42C22B0;
    v7[1] = &off_42C26D0;
    CountdownTimer::CountdownTimer((v7 + 13));
    CountdownTimer::CountdownTimer((v7 + 16));
    retstr->m_type = ActionResultType::SUSPEND_FOR;
    retstr->m_action = v7;
    retstr->m_reason = 0;
    this->m_eventResult.m_type = ActionResultType::CONTINUE;
    this->m_eventResult.m_action = 0;
    this->m_eventResult.m_reason = 0;
    this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    return retstr;
  }
  else
  {
    if ( this->m_MoveTo.m_repathTimer.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_MoveTo.m_repathTimer._vptr_CountdownTimer + 2))(
        &this->m_MoveTo.m_repathTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        -1.0);
      this->m_MoveTo.m_repathTimer.m_timestamp.m_Value = -1.0;
    }
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    this->m_MoveTo.m_path.m_Positions.m_Size = 0;
    return retstr;
  }
}


// CDOTABehaviorRoquelaireInvade::OnStart  (line 226, @0x000000000288eab0, libserver.so)  // inlines: operator=
// calls: CDOTABehaviorInvade::OnStartInternal
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorRoquelaireInvade::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorRoquelaireInvade *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  this->m_bStartedLanding = 0;
  CDOTABehaviorInvade::OnStartInternal(retstr, this, me, priorAction);
  this->m_lastSetGoalEntity.m_Index = this->m_goalEntity.m_Index;
  return retstr;
}


// CDOTABehaviorRoquelaireInvade::Update  (line 238, @0x0000000002892350, libserver.so)  // inlines: Action, ActionResult, Approach, CDOTABehaviorCommandListener, CDOTABehaviorIdle, CDOTABehaviorRoquelaireIdle, CDOTABehaviorTutorialIdle, CEntityHandle, ChangeTo, EventDesiredResult, FastSqrt, GetAssignedHero, GetBool, GetDistanceToEntity, GetEntryIndex, GetFloat, GetFlyHeight, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IActionResult, IndexToIdentity, Init, IsPathCurrentlyExhausted, Length, Length2DSqr, LookupEntity, NetworkStateChanged, Set, SetFlyHeight, ShouldSetAnimation, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=<float>, ~CDOTABehaviorCommandListener
// calls: CDOTABehaviorInvade::Update, CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, operator new, CountdownTimer::CountdownTimer, DOTATutorial, CDOTA_Tutorial::GetHumanPlayer, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTABody::StartAnimation, CBaseEntity::GetAbsOrigin (19 total)
// strings: "End of invade path reached.", "modifier_rooted"
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorRoquelaireInvade::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorRoquelaireInvade *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  const CBaseEntity *v8; // rax
  const CBaseEntity *v9; // r15
  double v10; // xmm0_8
  double v11; // xmm1_8
  double v12; // xmm2_8
  double v13; // xmm3_8
  double v14; // xmm4_8
  double v15; // xmm5_8
  char *v16; // r12
  CDOTA_Tutorial *v17; // rax
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v19; // dx
  int v20; // esi
  int v21; // eax
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  CDOTABody *v27; // rax
  const Vector *AbsOrigin; // rax
  const Vector *v29; // r14
  const Vector *v30; // rax
  CEntityInstance *m_pInstance; // rdi
  const Vector *v32; // rax
  float v33; // xmm1_4
  float v34; // xmm0_4
  CDOTA_Tutorial *v35; // rax
  CBaseEntity *NearestRoquelairePerch; // rax
  char v37; // cl
  const Vector *v38; // [rsp+0h] [rbp-90h]
  _BYTE v39[5]; // [rsp+Bh] [rbp-85h]
  float flTargetHeight; // [rsp+Ch] [rbp-84h]
  ActionResult<CDOTA_BaseNPC> baseresult; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  CDOTABehaviorInvade::Update(&baseresult, this, me, interval);
  if ( baseresult.m_type != ActionResultType::CONTINUE )
  {
LABEL_2:
    *retstr = baseresult;
    return retstr;
  }
  v8 = (*(this->_vptr_INextBotEventResponder + 132))(this, me);
  v9 = v8;
  v39[4] = 0;
  *v39 = me != 0 && v8 != 0;
  if ( v39[0] != 0 )
  {
    flTargetHeight = CBaseEntity::GetAbsOrigin(v8)->z;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    *&v39[1] = flTargetHeight - GetGroundHeight(AbsOrigin, me);
  }
  if ( this->m_MoveTo.m_path.m_Positions.m_Size <= 0
    || !CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me) )
  {
    if ( dota_tutorial_roquelaire_keepdistance.m_pParent->m_Value.m_nValue != 0 && !this->m_bStartedLanding )
    {
      v17 = DOTATutorial();
      HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(v17);
      if ( HumanPlayer != 0 )
      {
        if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
        {
          v19 = 0x7FFF;
          v20 = 0x7FFF;
        }
        else
        {
          v19 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
          v20 = v19;
        }
        v21 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v19 & 0x7FFF;
        if ( (v21 + 2) > 1
          && (v22 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v20 >> 9]) != 0
          && (v23 = &v22[v20 & 0x1FF]) != 0
          && v21 == v23->m_EHandle.m_Index
          && (m_pInstance = v23->m_pInstance, v23->m_pInstance != 0)
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && (v38 = CBaseEntity::GetAbsOrigin(m_pInstance),
              v32 = CBaseEntity::GetAbsOrigin(me),
              v33 = v32->z - v38->z,
              (v34 = fsqrt((((v32->x - v38->x) * (v32->x - v38->x)) + ((v32->y - v38->y) * (v32->y - v38->y))) + (v33 * v33))) >= 400.0) )
        {
          if ( v34 > 900.0 )
          {
            CDOTA_BaseNPC::RemoveModifierByName(me, "modifier_rooted");
            v35 = DOTATutorial();
            NearestRoquelairePerch = CDOTA_Tutorial::GetNearestRoquelairePerch(v35);
            v37 = v39[0];
            if ( NearestRoquelairePerch != 0 )
            {
              v9 = NearestRoquelairePerch;
              v37 = me != 0;
            }
            v39[0] = v37;
          }
        }
        else
        {
          KeyValues::KeyValues(&kv, "modifier_rooted");
          KeyValues::SetFloat(&kv, "duration", v24);
          CDOTA_BaseNPC::AddNewModifier(me, me, 0, "modifier_rooted", &kv, 0);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
    v25 = *(&me[1]._vptr_IHandleEntity + 1);
    if ( (*&v39[1] - v25) > 5.0 )
    {
      *&v39[1] = v25 + 5.0;
    }
    else if ( (*&v39[1] - v25) < -5.0 )
    {
      *&v39[1] = v25 - 5.0;
    }
    if ( v25 != *&v39[1] )
    {
      (*(me->_vptr_IHandleEntity + 22))(me, 4508, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      HIDWORD(me[1]._vptr_IHandleEntity) = *&v39[1];
    }
    v26 = 0.0;
    if ( v39[0] != 0 )
    {
      v29 = CBaseEntity::GetAbsOrigin(me);
      v30 = CBaseEntity::GetAbsOrigin(v9);
      v26 = ((v30->x - v29->x) * (v30->x - v29->x)) + ((v30->y - v29->y) * (v30->y - v29->y));
    }
    if ( (roquelaire_land_distance.m_pParent->m_Value.m_fValue * roquelaire_land_distance.m_pParent->m_Value.m_fValue) > v26
      && !this->m_bStartedLanding )
    {
      this->m_bStartedLanding = 1;
      this->m_MoveTo.m_bSetAnimation = 0;
      v27 = (*(me->_vptr_IHandleEntity + 377))(me);
      CDOTABody::StartAnimation(v27, 0x64Fu, 1, 1.0);
    }
    goto LABEL_2;
  }
  if ( *&v39[1] != *(&me[1]._vptr_IHandleEntity + 1) )
  {
    (*(me->_vptr_IHandleEntity + 22))(me, 4508, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v10, v11, v12, v13, v14, v15, *&v39[1]);
    HIDWORD(me[1]._vptr_IHandleEntity) = *&v39[1];
  }
  v16 = operator new(0x80u);
  *(v16 + 16) = 0;
  *(v16 + 9) = 0;
  *(v16 + 10) = 0;
  *(v16 + 3) = 0;
  *(v16 + 4) = 0;
  *(v16 + 5) = 0;
  *(v16 + 6) = 0;
  *(v16 + 7) = 0;
  *(v16 + 2) = 0;
  v16[96] = 0;
  v16[97] = 0;
  *(v16 + 22) = 0;
  *v16 = &off_42C1970;
  *(v16 + 1) = &off_42C1DA0;
  CountdownTimer::CountdownTimer((v16 + 104));
  retstr->m_type = ActionResultType::CHANGE_TO;
  *v16 = &off_42C2750;
  *(v16 + 1) = &off_42C2B80;
  retstr->m_action = v16;
  retstr->m_reason = "End of invade path reached.";
  return retstr;
}


// CDOTABehaviorRoquelaireInvade::OnAnimationActivityComplete  (line 316, @0x000000000288b420, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryContinue
// calls: CDOTABody::StartAnimation
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorRoquelaireInvade::OnAnimationActivityComplete(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorRoquelaireInvade *const this,
        CDOTA_BaseNPC *me,
        int activity)
{
  CDOTABody *v6; // rax

  if ( this->m_bStartedLanding && (activity - 1615) <= 1 )
  {
    v6 = (*(me->_vptr_IHandleEntity + 377))(me);
    CDOTABody::StartAnimation(v6, 0x650u, 0, 1.0);
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorCreatureInvade::CDOTABehaviorCreatureInvade  (line 328, @0x0000000002892c40, libserver.so)  // inlines: Action, CDOTABehaviorInvade, CDOTABehaviorMoveTo, CEntityHandle, CHandle, EventDesiredResult, IActionResult, QAngle, RandomYawVector, VectorMultiply, operator*, operator=, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, RandomFloat, AngleVectors, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CDOTABehaviorInvade::~CDOTABehaviorInvade, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorInvade::OnStart
void __fastcall CDOTABehaviorCreatureInvade::CDOTABehaviorCreatureInvade(CDOTABehaviorCreatureInvade *const this)
{
  float x; // xmm1_4
  vec_t v3; // xmm0_4
  QAngle angles; // [rsp+0h] [rbp-40h] BYREF
  Vector forward; // [rsp+10h] [rbp-30h] BYREF

  this->_vptr_INextBotEventResponder = &off_42C2BF0;
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->_vptr_IContextualQuery = &off_42C3030;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C3098;
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
  this->_vptr_INextBotEventResponder = &off_42C3A90;
  this->_vptr_IContextualQuery = &off_42C3ED0;
  this->m_goalEntity.m_Index = -1;
  this->m_nextGoalEntity.m_Index = -1;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C3F38;
  angles.x = 0.0;
  angles.y = RandomFloat(0.0, 360.0);
  angles.z = 0.0;
  AngleVectors(&angles, &forward, 0, 0);
  this->m_vTargetJitter.z = 0.0;
  x = forward.x;
  this->m_flMoveRate = 1.0;
  v3 = 200.0 * forward.y;
  this->m_vTargetJitter.x = x * 200.0;
  this->m_vTargetJitter.y = v3;
}


// CDOTABehaviorCreatureInvade::~CDOTABehaviorCreatureInvade  (line 337, @0x000000000288c720, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorInvade, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCreatureInvade::~CDOTABehaviorCreatureInvade(CDOTABehaviorCreatureInvade *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C2BF0;
  this->_vptr_IContextualQuery = &off_42C3030;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C3098;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  if ( v2 )
  {
    p_m_Memory = &this->m_MoveTo.m_path.m_ShortPath.m_Memory;
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
    if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MoveTo.m_path.m_Positions.m_Size = 0;
  if ( !v2
    || (CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory),
        (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    Action<CDOTA_BaseNPC>::~Action(this);
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory);
    Action<CDOTA_BaseNPC>::~Action(this);
  }
}


// CDOTABehaviorCreatureInvade::~CDOTABehaviorCreatureInvade  (line 337, @0x000000000288c800, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTABehaviorCreatureInvade, ~CDOTABehaviorInvade, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Action<CDOTA_BaseNPC>::~Action, operator delete, CUtlMemory<Vector, int>::Purge
void __fastcall CDOTABehaviorCreatureInvade::~CDOTABehaviorCreatureInvade(CDOTABehaviorCreatureInvade *const this)
{
  bool v2; // zf
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_INextBotEventResponder = &off_42C2BF0;
  this->_vptr_IContextualQuery = &off_42C3030;
  this->m_MoveTo.m_path.m_ShortPath.m_Size = 0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C3098;
  this->m_MoveTo._vptr_CDOTABehaviorMoveTo = &off_42BB830;
  if ( v2 )
  {
    p_m_Memory = &this->m_MoveTo.m_path.m_ShortPath.m_Memory;
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_ShortPath.m_Memory);
    if ( (this->m_MoveTo.m_path.m_ShortPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MoveTo.m_path.m_Positions.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory);
    if ( (this->m_MoveTo.m_path.m_Positions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&this->m_MoveTo.m_path.m_Positions.m_Memory);
  }
  Action<CDOTA_BaseNPC>::~Action(this);
  operator delete(this);
}


// CDOTABehaviorCreatureInvade::OnStart  (line 343, @0x000000000288ebe0, libserver.so)
// calls: CDOTABehaviorInvade::OnStartInternal, CDOTABehaviorCreatureInvade::UpdateJitter
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  CDOTABehaviorInvade::OnStartInternal(retstr, this, me, priorAction);
  CDOTABehaviorCreatureInvade::UpdateJitter(this, me);
  return retstr;
}


// CDOTABehaviorCreatureInvade::Update  (line 352, @0x00000000028945a0, libserver.so)
// calls: CDOTABehaviorInvade::Update, CDOTABehaviorCreatureInvade::UpdateJitter, CDOTABehaviorCreatureInvade::UpdateMoveRate
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  __int64 v7; // r14

  v7 = (*(this->_vptr_INextBotEventResponder + 132))(this, me);
  CDOTABehaviorInvade::Update(retstr, this, me, interval);
  if ( v7 != (*(this->_vptr_INextBotEventResponder + 132))(this, me) )
    CDOTABehaviorCreatureInvade::UpdateJitter(this, me);
  CDOTABehaviorCreatureInvade::UpdateMoveRate(this, me);
  return retstr;
}


// CDOTABehaviorCreatureInvade::UpdateJitter  (line 366, @0x000000000288eae0, libserver.so)  // inlines: ClassMatches, QAngle, RandomYawVector, VectorMultiply, operator*, operator=
// calls: CEntityIdentity::ClassMatches, RandomFloat, AngleVectors
// callers: CDOTABehaviorCreatureInvade::OnStart, CDOTABehaviorCreatureInvade::Update
// strings: "path_corner"
void __fastcall CDOTABehaviorCreatureInvade::UpdateJitter(CDOTABehaviorCreatureInvade *const this, CDOTA_BaseNPC *me)
{
  __int64 v3; // rax
  __int64 v4; // r12
  float v5; // xmm1_4
  vec_t v6; // xmm2_4
  __m128 v7; // xmm0
  __int32 v8; // xmm1_4
  __m128 v9; // xmm0
  float v10; // [rsp+Ch] [rbp-34h]
  QAngle angles; // [rsp+10h] [rbp-30h] BYREF
  Vector forward; // [rsp+20h] [rbp-20h] BYREF

  v3 = (*(this->_vptr_INextBotEventResponder + 132))(this, me);
  v4 = v3;
  if ( v3 != 0 && CEntityIdentity::ClassMatches(*(v3 + 8), "path_corner") )
  {
    *v7.m128_u64 = (*(*v4 + 688LL))(v4);
    v8 = v7.m128_i32[0];
    v9 = _mm_cmple_ss(0LL, v7);
    LODWORD(v5) = _mm_andnot_ps(v9, 0x43480000u).m128_u32[0] | v8 & v9.m128_i32[0];
  }
  else
  {
    v5 = 200.0;
  }
  v10 = RandomFloat(0.0, v5);
  angles.y = RandomFloat(0.0, 360.0);
  angles.x = 0.0;
  angles.z = 0.0;
  AngleVectors(&angles, &forward, 0, 0);
  this->m_vTargetJitter.z = 0.0;
  v6 = v10 * forward.y;
  this->m_vTargetJitter.x = forward.x * v10;
  this->m_vTargetJitter.y = v6;
}


// CDOTABehaviorCreatureInvade::UpdateMoveRate  (line 385, @0x0000000002894250, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Clamp<float>, Dot, DotProduct, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, NormalizeInPlace, ToDOTABaseNPC, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*=, operator+=, operator-, operator[], ~CUtlVector
// calls: CBaseEntity::GetAbsOrigin, FindUnitsInRadius, VectorNormalize, CDOTABehaviorInvade::GetMoveSpeed, Bias, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTABehaviorCreatureInvade::Update
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTABehaviorCreatureInvade::UpdateMoveRate(CDOTABehaviorCreatureInvade *const this, CDOTA_BaseNPC *me)
{
  const Vector *AbsOrigin; // rax
  __int64 v4; // rdx
  int m_Value; // edi
  __int64 v6; // r12
  int v7; // ebx
  int v8; // r14d
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  const CBaseEntity *m_pInstance; // r13
  const Vector *v15; // rax
  __m128i v16; // xmm2
  __m128i v17; // xmm6
  float v18; // r12d
  float v19; // ebx
  float v20; // xmm1_4
  float MoveSpeed; // xmm0_4
  float v22; // xmm1_4
  __m128 v23; // xmm2
  __m128 v24; // xmm0
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v29; // [rsp+28h] [rbp-88h]
  float v30; // [rsp+2Ch] [rbp-84h]
  Vector vCurrentPos; // [rsp+30h] [rbp-80h] BYREF
  Vector vTargetPos; // [rsp+40h] [rbp-70h]
  Vector vTargetDir; // [rsp+50h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-50h] BYREF

  if ( (me->m_iUnitType & 0x10000) == 0 || LOBYTE(me[1].m_NetworkTransmitComponent.m_PVSInfo.m_nClusterCount) == 0 )
  {
    this->m_flMoveRate = 1.0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    v4 = *&AbsOrigin->x;
    entities.m_Size = 0;
    m_Value = me->m_iTeamNum.m_Value;
    *&vCurrentPos.x = v4;
    *&AbsOrigin = AbsOrigin->z;
    entities.m_Memory.m_pMemory = 0;
    LODWORD(vCurrentPos.z) = AbsOrigin;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    FindUnitsInRadius(m_Value, &vCurrentPos, me, 600.0, &entities, 1, 51, 0, 0, 0);
    vCurrentPos.z = 0.0;
    if ( entities.m_Size > 0 )
    {
      v6 = 0;
      v7 = 0;
      v8 = 0;
      do
      {
        while ( 1 )
        {
          v9 = &entities.m_Memory.m_pMemory[v6];
          m_Index = entities.m_Memory.m_pMemory[v6].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v11 = v9->m_Index;
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
            if ( v12 != 0 )
            {
              v13 = &v12[v11 & 0x1FF];
              if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
              {
                m_pInstance = v13->m_pInstance;
                if ( v13->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(v13->m_pInstance) != 0 )
                {
                  break;
                }
              }
            }
          }
          ++v7;
          ++v6;
          if ( entities.m_Size <= v7 )
            goto LABEL_14;
        }
        v15 = CBaseEntity::GetAbsOrigin(m_pInstance);
        ++v7;
        ++v8;
        ++v6;
        v29 = v29 + v15->x;
        v30 = v30 + v15->y;
      }
      while ( entities.m_Size > v7 );
LABEL_14:
      if ( v8 != 0 )
      {
        v16 = 0x3F800000u;
        v17 = LODWORD(v29);
        *v17.m128i_i32 = v29 * (1.0 / v8);
        *v16.m128i_i32 = (1.0 / v8) * v30;
        v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
        v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
        *&vTargetPos.x = (*(this->_vptr_INextBotEventResponder + 130))(this, me);
        vTargetDir.z = v20 - vCurrentPos.z;
        vTargetDir.y = vTargetPos.y - vCurrentPos.y;
        vTargetDir.x = vTargetPos.x - vCurrentPos.x;
        VectorNormalize(&vTargetDir);
        MoveSpeed = CDOTABehaviorInvade::GetMoveSpeed(this, me);
        v22 = (((v18 - vCurrentPos.x) * vTargetDir.x) + ((v19 - vCurrentPos.y) * vTargetDir.y))
            + ((0.0 - vCurrentPos.z) * vTargetDir.z);
        if ( v22 < 0.0 )
        {
          v23.m128_f32[0] = -v22 / MoveSpeed;
          if ( v23.m128_f32[0] < 0.0 )
          {
            v25 = 0.0;
          }
          else
          {
            v24 = _mm_cmpge_ss(0x3F800000u, v23);
            LODWORD(v25) = _mm_andnot_ps(v24, 0x3F800000u).m128_u32[0] | v23.m128_i32[0] & v24.m128_i32[0];
          }
          v26 = 1.0 - Bias(0.2, v25);
          if ( v26 < 0.25 )
            v27 = 0.25;
          else
            v27 = fminf(1.0, v26);
          this->m_flMoveRate = v27;
        }
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTABehaviorCreatureInvade::GetMoveSpeed  (line 435, @0x000000000288bc40, libserver.so)
// calls: CDOTABehaviorInvade::GetMoveSpeed
float __fastcall CDOTABehaviorCreatureInvade::GetMoveSpeed(CDOTABehaviorCreatureInvade *const this, CDOTA_BaseNPC *me)
{
  float m_flMoveRate; // [rsp+Ch] [rbp-4h]

  m_flMoveRate = this->m_flMoveRate;
  return CDOTABehaviorInvade::GetMoveSpeed(this, me) * m_flMoveRate;
}


// CDOTABehaviorCreatureInvade::GetTargetPosition  (line 442, @0x000000000288ceb0, libserver.so)  // inlines: VectorAdd, operator+
// calls: CDOTABehaviorInvade::GetTargetPosition
Vector __fastcall CDOTABehaviorCreatureInvade::GetTargetPosition(
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me)
{
  float v5[8]; // [rsp+20h] [rbp-20h]
  Vector TargetPosition; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  TargetPosition = CDOTABehaviorInvade::GetTargetPosition(this, me);
  result.z = TargetPosition.z + this->m_vTargetJitter.z;
  v5[1] = TargetPosition.y + this->m_vTargetJitter.y;
  v5[0] = TargetPosition.x + this->m_vTargetJitter.x;
  *&result.x = *v5;
  return result;
}


// CDOTABehaviorCreatureInvade::OnCommandMoveTo  (line 450, @0x000000000288b630, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition, operator delete, _Unwind_Resume
// strings: "Commanded to move to a position"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnCommandMoveTo(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos)
{
  CDOTABehaviorCommandMoveToPosition *v6; // r12

  v6 = operator new(0x160u);
  CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition(v6, pos, 0);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to move to a position";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnCommandMoveToAggressive  (line 457, @0x000000000288b6a0, libserver.so)  // inlines: CDOTABehaviorCommandMoveToPositionAggressive, EventDesiredResult, IActionResult, InState, IsInvisible, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition, operator delete, _Unwind_Resume
// strings: "Commanded to move to a position aggressively"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnCommandMoveToAggressive(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos)
{
  char v6; // r13
  CDOTABehaviorCommandMoveToPosition *v7; // rbx

  v6 = me->m_nUnitState64.m_Value >> 7;
  v7 = operator new(0x160u);
  CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition(v7, pos, 0);
  *(&v7->m_bDirectional + 1) = v6 & 1;
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_action = v7;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  v7->_vptr_INextBotEventResponder = &off_42BD950;
  v7->_vptr_IDOTABehaviorMoveTo = &off_42BDDF0;
  retstr->m_reason = "Commanded to move to a position aggressively";
  v7->_vptr_IContextualQuery = &off_42BDD88;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnCommandApproach  (line 464, @0x000000000288b750, libserver.so)  // inlines: EventDesiredResult, IActionResult, ToDOTABaseNPC, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToNPC::CDOTABehaviorCommandMoveToNPC, operator delete, _Unwind_Resume
// strings: "Commanded to chase an entity"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnCommandApproach(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *entity)
{
  CDOTA_BaseNPC *v5; // r13
  CDOTABehaviorCommandMoveToNPC *v6; // r12

  if ( entity != 0 && entity->m_bIsDOTANPC )
    v5 = entity;
  else
    v5 = 0;
  v6 = operator new(0x160u);
  CDOTABehaviorCommandMoveToNPC::CDOTABehaviorCommandMoveToNPC(v6, v5, 0);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to chase an entity";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnCommandAttack  (line 471, @0x000000000288b7d0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToTargetToAttack::CDOTABehaviorCommandMoveToTargetToAttack, operator delete, _Unwind_Resume
// strings: "Commanded to attack an entity"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnCommandAttack(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *entity,
        bool bDeny)
{
  CDOTABehaviorCommandMoveToTargetToAttack *v8; // r12

  v8 = operator new(0x168u);
  CDOTABehaviorCommandMoveToTargetToAttack::CDOTABehaviorCommandMoveToTargetToAttack(v8, entity, bDeny);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to attack an entity";
  retstr->m_action = v8;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnCastAbilityNoTarget  (line 478, @0x000000000288b840, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere, operator delete, _Unwind_Resume
// strings: "Commanded to cast an ability with no target"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnCastAbilityNoTarget(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        CDOTABaseAbility *ability)
{
  CDOTABehaviorCommandCastHere *v6; // r12

  v6 = operator new(0x68u);
  CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere(v6, ability);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to cast an ability with no target";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnCastAbilityOnPosition  (line 485, @0x000000000288b8b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToPositionToCast::CDOTABehaviorCommandMoveToPositionToCast, operator delete, _Unwind_Resume
// strings: "Commanded to cast an ability on a position"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnCastAbilityOnPosition(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        CDOTABaseAbility *ability,
        const Vector *const pos)
{
  CDOTABehaviorCommandMoveToPositionToCast *v8; // r12

  v8 = operator new(0x168u);
  CDOTABehaviorCommandMoveToPositionToCast::CDOTABehaviorCommandMoveToPositionToCast(v8, ability, pos);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to cast an ability on a position";
  retstr->m_action = v8;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnCastAbilityOnTarget  (line 492, @0x000000000288b920, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast, operator delete, _Unwind_Resume
// strings: "Commanded to cast an ability on given entity"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnCastAbilityOnTarget(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        CDOTABaseAbility *ability,
        CBaseEntity *target)
{
  CDOTABehaviorCommandMoveToTargetToCast *v8; // r12

  v8 = operator new(0x170u);
  CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast(v8, ability, target);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to cast an ability on given entity";
  retstr->m_action = v8;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnDropItem  (line 499, @0x000000000288b990, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToPositionToDropItem::CDOTABehaviorCommandMoveToPositionToDropItem, operator delete, _Unwind_Resume
// strings: "Commanded to drop an item"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnDropItem(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos,
        CBaseEntity *item)
{
  CDOTABehaviorCommandMoveToPositionToDropItem *v8; // r12

  v8 = operator new(0x160u);
  CDOTABehaviorCommandMoveToPositionToDropItem::CDOTABehaviorCommandMoveToPositionToDropItem(v8, pos, item);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to drop an item";
  retstr->m_action = v8;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnGiveItem  (line 506, @0x000000000288ba00, libserver.so)  // inlines: EventDesiredResult, IActionResult, ToDOTABaseNPC, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToNPCToGive::CDOTABehaviorCommandMoveToNPCToGive, operator delete, _Unwind_Resume
// strings: "Commanded to give an item to an npc"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnGiveItem(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *target,
        CBaseEntity *item)
{
  CDOTA_BaseNPC *v7; // r13
  CDOTABehaviorCommandMoveToNPCToGive *v8; // r12

  if ( target != 0 && target->m_bIsDOTANPC )
    v7 = target;
  else
    v7 = 0;
  v8 = operator new(0x160u);
  CDOTABehaviorCommandMoveToNPCToGive::CDOTABehaviorCommandMoveToNPCToGive(v8, v7, item);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to give an item to an npc";
  retstr->m_action = v8;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnPickupItem  (line 513, @0x000000000288ba80, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToItemToTake::CDOTABehaviorCommandMoveToItemToTake, operator delete, _Unwind_Resume
// strings: "Commanded to pick up an item"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnPickupItem(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *item)
{
  CDOTABehaviorCommandMoveToItemToTake *v6; // r12

  v6 = operator new(0x158u);
  CDOTABehaviorCommandMoveToItemToTake::CDOTABehaviorCommandMoveToItemToTake(v6, item);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to pick up an item";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnPickupRune  (line 520, @0x000000000288baf0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToRuneToTake::CDOTABehaviorCommandMoveToRuneToTake, operator delete, _Unwind_Resume
// strings: "Commanded to pick up a rune"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnPickupRune(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *rune)
{
  CDOTABehaviorCommandMoveToRuneToTake *v6; // r12

  v6 = operator new(0x158u);
  CDOTABehaviorCommandMoveToRuneToTake::CDOTABehaviorCommandMoveToRuneToTake(v6, rune);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to pick up a rune";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCreatureInvade::OnStop  (line 527, @0x000000000288c540, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorIdle, EventDesiredResult, IActionResult, TryChangeTo, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "Commanded to stop"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCreatureInvade::OnStop(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCreatureInvade *const this,
        CDOTA_BaseNPC *me)
{
  char *v4; // rbx

  v4 = operator new(0x80u);
  *(v4 + 16) = 0;
  *(v4 + 9) = 0;
  *(v4 + 10) = 0;
  *(v4 + 3) = 0;
  *(v4 + 4) = 0;
  *(v4 + 5) = 0;
  *(v4 + 6) = 0;
  *(v4 + 7) = 0;
  *(v4 + 2) = 0;
  v4[96] = 0;
  v4[97] = 0;
  *(v4 + 22) = 0;
  *v4 = &off_42C1970;
  *(v4 + 1) = &off_42C1DA0;
  CountdownTimer::CountdownTimer((v4 + 104));
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to stop";
  retstr->m_action = v4;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


