
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack  (line 15, @0x00000000028915a0, libserver.so)  // inlines: Action, CDOTABehaviorMoveTo, CDOTA_PreviousTargetData, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=, ~CDOTABehaviorMoveTo, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToPositionAggressive::Update, CDOTABehaviorInvade::Update, CDOTABehaviorNeutralAggroReturn::Update, CDOTABehaviorTutorialRazorMoveToNPCToAttack::CDOTABehaviorTutorialRazorMoveToNPCToAttack, CDOTABehaviorIdle::Update
void __fastcall CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack(
        CDOTABehaviorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *pTarget,
        bool bAttackMove)
{
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // dx
  __int16 m_Index; // cx

  this->_vptr_INextBotEventResponder = &off_42C3F70;
  this->_vptr_IContextualQuery = &off_42C43A0;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C4408;
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
  this->m_CurrentTargetData.m_hTarget.m_Index = -1;
  CountdownTimer::CountdownTimer(&this->m_AttackDelay);
  if ( pTarget != 0 && (m_pEntity = pTarget->m_pEntity) != 0 )
  {
    v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v8 = 0x7FFF;
    else
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    m_Index = this->m_CurrentTargetData.m_hTarget.m_Index;
    this->m_bAttackMove = bAttackMove;
    LOWORD(this->m_CurrentTargetData.m_hTarget.m_Index) = v8 | m_Index & 0x8000;
    this->m_CurrentTargetData.m_hTarget.m_Index = (v7 << 15) | this->m_CurrentTargetData.m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_bAttackMove = bAttackMove;
    this->m_CurrentTargetData.m_hTarget.m_Index = -1;
  }
}


// CDOTABehaviorMoveToNPCToAttack::OnStart  (line 24, @0x0000000002890990, libserver.so)
// calls: CDOTABehaviorMoveToNPCToAttack::OnStartInternal
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorMoveToNPCToAttack::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  CDOTABehaviorMoveToNPCToAttack::OnStartInternal(retstr, this, me, priorAction);
  return retstr;
}


// CDOTABehaviorMoveToNPCToAttack::OnStartInternal  (line 29, @0x0000000002890710, libserver.so)  // inlines: ActionResult, Continue, Done, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, Invalidate, IsValid, LookupEntity, NetworkStateChanged, OnStart, Set, Start, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<float>
// calls: CDOTA_BaseNPC::GetUnitRelationshipClass, CDOTA_BaseNPC::SetTargetLastKnownPosition, CDOTA_BaseNPC::SetAggroTarget, RandomFloat, CountdownTimer::Now
// callers: CDOTABehaviorMoveToNPCToAttack::OnStart, CDOTABehaviorTutorialRazorMoveToNPCToAttack::OnStart
// strings: "Target handle NULL in OnStart"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorMoveToNPCToAttack::OnStartInternal(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  double v12; // xmm0_8
  double v13; // xmm1_8
  double v14; // xmm2_8
  bool v15; // zf
  float v16; // [rsp+8h] [rbp-28h]
  float v17; // [rsp+Ch] [rbp-24h]

  m_Index = this->m_CurrentTargetData.m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_CurrentTargetData.m_hTarget.m_Index) >> 9)
                                                            & 0x3F]) != 0
    && (v9 = &v8[this->m_CurrentTargetData.m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && (m_pInstance = v9->m_pInstance, v9->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    this->m_CurrentTargetData.m_nRelationshipClass = CDOTA_BaseNPC::GetUnitRelationshipClass(v9->m_pInstance);
    CDOTA_BaseNPC::SetTargetLastKnownPosition(me, m_pInstance);
    CDOTA_BaseNPC::SetAggroTarget(me, m_pInstance);
    v17 = RandomFloat(0.15000001, 0.25);
    *&v12 = CountdownTimer::Now(&this->m_AttackDelay) + v17;
    if ( *&v12 != this->m_AttackDelay.m_timestamp.m_Value )
    {
      v16 = *&v12;
      (*(this->m_AttackDelay._vptr_CountdownTimer + 2))(&this->m_AttackDelay, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v12 = LODWORD(v16);
      this->m_AttackDelay.m_timestamp.m_Value = v16;
    }
    *&v14 = LODWORD(v17);
    if ( v17 != this->m_AttackDelay.m_duration.m_Value )
    {
      (*(this->m_AttackDelay._vptr_CountdownTimer + 2))(
        &this->m_AttackDelay,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v12,
        v13,
        v17);
      this->m_AttackDelay.m_duration.m_Value = v17;
    }
    this->m_bInAttackPosition = 0;
    this->m_bMovingToLastKnownTargetPosition = 0;
    v15 = this->m_MoveTo.m_repathTimer.m_timestamp.m_Value == -1.0;
    this->m_bTurningToTarget = 0;
    this->m_flTargetAngle = 0.0;
    this->m_MoveTo.m_bSetAnimation = 1;
    if ( !v15 )
    {
      (*(this->m_MoveTo.m_repathTimer._vptr_CountdownTimer + 2))(
        &this->m_MoveTo.m_repathTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        -1.0,
        v13,
        v14);
      this->m_MoveTo.m_repathTimer.m_timestamp.m_Value = -1.0;
    }
    this->m_MoveTo.m_bUseSwimAnimations = 0;
    this->m_MoveTo.m_nRunActivity = 1502;
    this->m_MoveTo.m_flTargetDist = 0.0;
    this->m_MoveTo.m_bIsDirectional = 0;
    if ( me->m_iIsControllableByPlayer64.m_Value != 0 )
    {
      (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0, v13, v14);
    }
    else
    {
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
    }
    return retstr;
  }
  else
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_reason = "Target handle NULL in OnStart";
    retstr->m_action = 0;
    return retstr;
  }
}


// CDOTABehaviorMoveToNPCToAttack::OnEnd  (line 53, @0x000000000288bb60, libserver.so)
// calls: CDOTA_BaseNPC::SetAggroTarget
void __fastcall CDOTABehaviorMoveToNPCToAttack::OnEnd(
        CDOTABehaviorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  (*(me->_vptr_IHandleEntity + 447))(me, 0, nextAction);
  CDOTA_BaseNPC::SetAggroTarget(me, 0);
}


// CDOTABehaviorMoveToNPCToAttack::GetTargetPosition  (line 61, @0x000000000288cff0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetLastKnownPosition, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTABehaviorMoveToNPCToAttack::GetTargetPosition(
        CDOTABehaviorMoveToNPCToAttack *const this,
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

  if ( this->m_bMovingToLastKnownTargetPosition )
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
    m_Index = this->m_CurrentTargetData.m_hTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_CurrentTargetData.m_hTarget.m_Index) >> 9)
                                                              & 0x3F]) == 0
      || (v4 = &v3[this->m_CurrentTargetData.m_hTarget.m_Index & 0x1FF]) == 0
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


// CDOTABehaviorMoveToNPCToAttack::Update  (line 73, @0x000000000288f6f0, libserver.so)  // inlines: ActionResult, Continue, Done, Get, GetAttackRange, GetEHandle, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetSerialNumber, GetTeamNumber, HasFlyMovementCapability, HasMovementCapability, IActionResult, InState, IndexToIdentity, IsElapsed, IsFullyCastable, IsListeningToEvent, IsNeutral, IsPathCurrentlyExhausted, IsRooted, IsSilenced, IsTrained, IsValid, LookupEntity, NetworkStateChanged, QAngle, RandomYawVector, Set, Start, SuspendFor, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator=, operator=<float>
// calls: CDOTA_BaseNPC::IsInvisibleTo, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_BaseNPC::SetTargetLastKnownPosition, CDOTA_BaseNPC::CanAutoAttackTarget, CDOTA_BaseNPC::GetAutoAttackTarget, CDOTA_BaseNPC::GetUnitRelationshipClass, CDOTA_BaseNPC::SetAggroTarget, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::IsEntityInRangeForAttack, CDOTA_BaseNPC::IsEntityExceptToAttack, CDOTABehaviorMoveTo::Update (38 total)
// strings: "Became invisible.", "Could not determine an automatic attack target", "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", "Cast my offensive spell with no target.", "Beginning the attack.", "Moving away as an escape." (7 total)
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorMoveToNPCToAttack::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC_Creature *me,
        float interval)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CConcreteEntityList *v11; // rdx
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  bool v16; // r15
  bool CanEntityBeSeenByMyTeam; // al
  uint32 v18; // eax
  CEntityIdentity *v19; // rcx
  CEntityIdentity *v20; // rcx
  __int64 v21; // rax
  bool CanAutoAttackTarget; // al
  char v23; // dl
  CDOTA_BaseNPC *AutoAttackTarget; // r15
  CEntityIdentity *m_pEntity; // rdx
  int v26; // eax
  __int16 v27; // cx
  __int64 v28; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v30; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_iAttackRange; // xmm3_4
  __int64 v33; // rax
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  __int64 v37; // rax
  float v38; // xmm0_4
  float v39; // xmm1_4
  __int64 v40; // rax
  char v41; // r9
  char v42; // r13
  bool v43; // cl
  bool v44; // al
  __int64 v45; // rax
  bool IsPathCurrentlyExhausted; // al
  bool IsActionLocked; // al
  bool v48; // cl
  const Vector *AbsOrigin; // r13
  CDOTALocomotor *v50; // rax
  float CastAngle; // xmm0_4
  CDOTABody *v52; // rax
  __int64 v53; // rbx
  void (__fastcall *v54)(__int64, const Vector *); // r13
  const Vector *v55; // rax
  CDOTALocomotor *v56; // rax
  bool IsAllowedToBeAttacked; // al
  CDOTA_Buff *ModifierByName; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  float v60; // xmm0_4
  int v61; // eax
  CDOTABaseAbility *v62; // rcx
  CDOTABehaviorCommandCastHere *v63; // r13
  const Vector *v64; // r13
  CDOTALocomotor *v65; // rax
  float v66; // xmm1_4
  CDOTABehaviorAttackPhase *v67; // r13
  float v68; // xmm1_4
  bool IsEntityInRangeForAttack; // al
  bool IsEntityExceptToAttack; // al
  uint32 v71; // eax
  __int64 v72; // rcx
  CEntityIdentity *v73; // rdx
  double v74; // xmm0_8
  int v75; // xmm2_4
  __m128i x_low; // xmm5
  float v77; // r13d
  const Vector *v78; // rax
  vec_t v79; // xmm2_4
  vec_t v80; // xmm1_4
  CDOTABehaviorCommandMoveToPosition *v81; // r13
  double v82; // xmm1_8
  double v83; // xmm2_8
  double v84; // xmm3_8
  double v85; // xmm0_8
  char v86; // al
  CEntityIdentity *v87; // rax
  CEntityIdentity *v88; // rax
  CDOTABehaviorCommandMoveToTargetToCast *v89; // r13
  float pAbilityb; // [rsp+8h] [rbp-88h]
  float pAbilityc; // [rsp+8h] [rbp-88h]
  CDOTABaseAbility *pAbility; // [rsp+8h] [rbp-88h]
  CDOTABaseAbility *pAbilitya; // [rsp+8h] [rbp-88h]
  float pAbilityd; // [rsp+8h] [rbp-88h]
  float ic; // [rsp+10h] [rbp-80h]
  float id; // [rsp+10h] [rbp-80h]
  float ie; // [rsp+10h] [rbp-80h]
  float ig; // [rsp+10h] [rbp-80h]
  char ih; // [rsp+10h] [rbp-80h]
  int i; // [rsp+10h] [rbp-80h]
  char ia; // [rsp+10h] [rbp-80h]
  float ii; // [rsp+10h] [rbp-80h]
  char ib; // [rsp+10h] [rbp-80h]
  CBaseEntity *ik; // [rsp+10h] [rbp-80h]
  char ij; // [rsp+10h] [rbp-80h]
  unsigned __int8 flRoamDistance; // [rsp+18h] [rbp-78h]
  bool flRoamDistancea; // [rsp+18h] [rbp-78h]
  bool flRoamDistanceb; // [rsp+18h] [rbp-78h]
  char flRoamDistancec; // [rsp+18h] [rbp-78h]
  char flRoamDistanced; // [rsp+18h] [rbp-78h]
  float flRoamDistancef; // [rsp+18h] [rbp-78h]
  float flRoamDistanceg; // [rsp+18h] [rbp-78h]
  float flRoamDistanceh; // [rsp+18h] [rbp-78h]
  float flRoamDistancee; // [rsp+18h] [rbp-78h]
  QAngle angles; // [rsp+20h] [rbp-70h] BYREF
  Vector forward; // [rsp+30h] [rbp-60h] BYREF
  ActionResult<CDOTA_BaseNPC> AbilityResult; // [rsp+40h] [rbp-50h] BYREF

  (*(me->_vptr_IHandleEntity + 447))(me, 0, interval);
  if ( (me->m_nUnitState64.m_Value & 2) != 0 )
  {
    m_Index = me->m_hForceAttackTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hForceAttackTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v9 = &v8[me->m_hForceAttackTarget.m_Index & 0x1FF]) == 0
      || m_Index != v9->m_EHandle.m_Index
      || v9->m_pInstance == 0
      || BYTE3(v9->m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Disarmed";
      return retstr;
    }
    v11 = CEntityHandle::gm_pEntityList;
  }
  else
  {
    v11 = CEntityHandle::gm_pEntityList;
  }
  if ( !this->m_bAttackMove )
  {
    v18 = me->m_hForceAttackTarget.m_Index;
    if ( v18 + 2 <= 1
      || (v19 = v11->m_pIdentityChunks[(LOWORD(me->m_hForceAttackTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v20 = &v19[me->m_hForceAttackTarget.m_Index & 0x1FF]) == 0
      || v18 != v20->m_EHandle.m_Index
      || v20->m_pInstance == 0
      || BYTE3(v20->m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      v21 = me->m_ModifierManager.m_buffsForModifiers[9];
      if ( v21 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v21].m_Size > 0 )
      {
        if ( CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
               &me->m_ModifierManager,
               modifierfunction::MODIFIER_PROPERTY_INVISIBILITY_LEVEL,
               &CModifierParams::s_Default) > 0.0 )
        {
          retstr->m_type = ActionResultType::DONE;
          retstr->m_action = 0;
          retstr->m_reason = "Became invisible.";
          return retstr;
        }
        v11 = CEntityHandle::gm_pEntityList;
      }
    }
  }
  v12 = this->m_CurrentTargetData.m_hTarget.m_Index;
  if ( v12 + 2 <= 1
    || (v13 = v11->m_pIdentityChunks[(LOWORD(this->m_CurrentTargetData.m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v14 = &v13[this->m_CurrentTargetData.m_hTarget.m_Index & 0x1FF]) == 0
    || v12 != v14->m_EHandle.m_Index
    || (m_pInstance = v14->m_pInstance, v14->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v16 = ((me->m_iMoveCapabilities & 3) != 0
      || (BYTE3(me->m_nUnitState64.m_Value) & 1 | ((me->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0)
     && !me->m_bHold;
  flRoamDistance = me->m_iTeamNum.m_Value;
  if ( m_pInstance == 0 || CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, me) )
  {
    CanEntityBeSeenByMyTeam = 0;
  }
  else
  {
    CanEntityBeSeenByMyTeam = 1;
    if ( flRoamDistance != 4 )
      CanEntityBeSeenByMyTeam = CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, m_pInstance);
  }
  flRoamDistancea = 0;
  if ( me->m_iIsControllableByPlayer64.m_Value != 0 )
    flRoamDistancea = !me->m_bRunAIWhenControllableByPlayer;
  if ( !CanEntityBeSeenByMyTeam )
  {
    if ( !v16 )
      goto LABEL_72;
    if ( !this->m_bMovingToLastKnownTargetPosition )
    {
      if ( m_pInstance == 0 )
        goto LABEL_72;
      if ( CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, me) )
      {
        if ( !this->m_bMovingToLastKnownTargetPosition )
          goto LABEL_72;
        v23 = 0;
LABEL_88:
        if ( this->m_MoveTo.m_path.m_Positions.m_Size > 0 )
        {
          ih = v23;
          IsPathCurrentlyExhausted = CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me);
          v23 = ih;
          if ( IsPathCurrentlyExhausted )
          {
            this->m_bMovingToLastKnownTargetPosition = 0;
            goto LABEL_72;
          }
        }
LABEL_37:
        if ( v23 != 0 )
        {
          AutoAttackTarget = CDOTA_BaseNPC::GetAutoAttackTarget(me, &this->m_CurrentTargetData, this->m_bAttackMove);
          if ( AutoAttackTarget == 0 )
          {
            if ( m_pInstance == 0 )
              goto LABEL_70;
            AutoAttackTarget = m_pInstance;
            if ( this->m_bMovingToLastKnownTargetPosition )
            {
LABEL_45:
              v28 = me->m_ModifierManager.m_buffsForModifiers[71];
              Modifier_Constant_Highest_Internal = 0.0;
              if ( v28 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v28].m_Size > 0 )
                Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                                       &me->m_ModifierManager,
                                                       modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                                       &CModifierParams::s_Default);
              v30 = me->m_ModifierManager.m_buffsForModifiers[69];
              Modifier_Constant_Additive_Internal = 0.0;
              m_iAttackRange = me->m_iAttackRange;
              if ( v30 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v30].m_Size > 0 )
              {
                pAbilityb = Modifier_Constant_Highest_Internal;
                ic = me->m_iAttackRange;
                Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                        &me->m_ModifierManager,
                                                        modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                                        &CModifierParams::s_Default);
                Modifier_Constant_Highest_Internal = pAbilityb;
                m_iAttackRange = ic;
              }
              v33 = me->m_ModifierManager.m_buffsForModifiers[70];
              v34 = m_iAttackRange + Modifier_Constant_Additive_Internal;
              v35 = 0.0;
              if ( v33 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v33].m_Size > 0 )
              {
                pAbilityc = Modifier_Constant_Highest_Internal;
                id = v34;
                v35 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                        &me->m_ModifierManager,
                        modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                        &CModifierParams::s_Default);
                Modifier_Constant_Highest_Internal = pAbilityc;
                v34 = id;
              }
              v36 = v34 + v35;
              if ( Modifier_Constant_Highest_Internal > (v34 + v35) )
              {
                v45 = me->m_ModifierManager.m_buffsForModifiers[71];
                if ( v45 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v45].m_Size > 0 )
                  CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                    &me->m_ModifierManager,
                    modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                    &CModifierParams::s_Default);
              }
              else
              {
                v37 = me->m_ModifierManager.m_buffsForModifiers[69];
                v38 = 0.0;
                v39 = me->m_iAttackRange;
                if ( v37 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v37].m_Size > 0 )
                {
                  ie = me->m_iAttackRange;
                  v38 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                          &me->m_ModifierManager,
                          modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                          &CModifierParams::s_Default);
                  v39 = ie;
                }
                v40 = me->m_ModifierManager.m_buffsForModifiers[70];
                v36 = v39 + v38;
                if ( v40 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v40].m_Size > 0 )
                {
                  ig = v36;
                  CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                    &me->m_ModifierManager,
                    modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                    &CModifierParams::s_Default);
                  v36 = ig;
                }
              }
              if ( !CDOTA_BaseNPC::IsEntityInRangeForAttack(me, AutoAttackTarget, v36)
                && !CDOTA_BaseNPC::IsEntityExceptToAttack(me, AutoAttackTarget)
                || (v44 = CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, AutoAttackTarget), v41 = 1, !v44) )
              {
                this->m_bInAttackPosition = 0;
                v41 = 0;
              }
              v42 = 0;
              if ( !flRoamDistancea )
              {
                v42 = 0;
                if ( AutoAttackTarget->m_iIsControllableByPlayer64.m_Value == 0
                  && !this->m_bInAttackPosition
                  && (me->m_iUnitType & 4) == 0 )
                {
                  flRoamDistanced = v41;
                  v60 = CountdownTimer::Now(&this->m_AttackDelay);
                  v41 = flRoamDistanced;
                  if ( v60 < this->m_AttackDelay.m_timestamp.m_Value )
                    goto LABEL_112;
                  ib = flRoamDistanced;
                  flRoamDistancee = RandomFloat(0.15000001, 0.25);
                  *&v85 = CountdownTimer::Now(&this->m_AttackDelay);
                  v41 = ib;
                  *&v85 = *&v85 + flRoamDistancee;
                  if ( *&v85 != this->m_AttackDelay.m_timestamp.m_Value )
                  {
                    pAbilityd = *&v85;
                    (*(this->m_AttackDelay._vptr_CountdownTimer + 2))(
                      &this->m_AttackDelay,
                      12,
                      0xFFFFFFFFLL,
                      0xFFFFFFFFLL);
                    *&v85 = LODWORD(pAbilityd);
                    v41 = ib;
                    this->m_AttackDelay.m_timestamp.m_Value = pAbilityd;
                  }
                  if ( flRoamDistancee != this->m_AttackDelay.m_duration.m_Value )
                  {
                    ij = v41;
                    (*(this->m_AttackDelay._vptr_CountdownTimer + 2))(
                      &this->m_AttackDelay,
                      8,
                      0xFFFFFFFFLL,
                      0xFFFFFFFFLL,
                      v85,
                      v82,
                      v83,
                      v84,
                      flRoamDistancee);
                    v41 = ij;
                    this->m_AttackDelay.m_duration.m_Value = flRoamDistancee;
                  }
                  if ( v41 != 0 )
                  {
                    this->m_bInAttackPosition = 1;
                    v42 = 0;
                  }
                  else
                  {
LABEL_112:
                    v42 = 1;
                  }
                }
              }
              v43 = 0;
              if ( (me->m_nUnitState64.m_Value & 2) == 0 )
              {
                flRoamDistancec = v41;
                IsAllowedToBeAttacked = CDOTA_BaseNPC::IsAllowedToBeAttacked(AutoAttackTarget);
                v43 = 1;
                v41 = flRoamDistancec;
                if ( !IsAllowedToBeAttacked )
                {
                  ModifierByName = CDOTA_BaseNPC::FindModifierByName(me, "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", 0);
                  v41 = flRoamDistancec;
                  v43 = ModifierByName != 0;
                }
              }
              if ( v41 != 0 )
              {
                flRoamDistanceb = v43;
                IsActionLocked = CDOTA_BaseNPC::IsActionLocked(me);
                v48 = flRoamDistanceb;
                if ( !IsActionLocked && v42 == 0 )
                {
                  if ( !this->m_bTurningToTarget )
                  {
                    AbsOrigin = CBaseEntity::GetAbsOrigin(AutoAttackTarget);
                    v50 = (*(me->_vptr_IHandleEntity + 376))(me);
                    CastAngle = CDOTALocomotor::GetCastAngle(v50, me, AbsOrigin);
                    v48 = flRoamDistanceb;
                    this->m_bTurningToTarget = 1;
                    this->m_flTargetAngle = CastAngle;
                  }
                  if ( v48
                    && ((*(me->_vptr_IHandleEntity + 447))(me, AutoAttackTarget), CDOTA_BaseNPC::AttackReady(me))
                    && (flRoamDistancef = this->m_flTargetAngle,
                        v64 = CBaseEntity::GetAbsOrigin(AutoAttackTarget),
                        v65 = (*(me->_vptr_IHandleEntity + 376))(me),
                        CDOTALocomotor::IsFacingLocation(v65, v64, LODWORD(flRoamDistancef), v66)) )
                  {
                    v67 = operator new(0xC0u);
                    CDOTABehaviorAttackPhase::CDOTABehaviorAttackPhase(v67, AutoAttackTarget, 0, 0);
                    this->m_eventResult.m_type = ActionResultType::CONTINUE;
                    this->m_eventResult.m_action = 0;
                    this->m_eventResult.m_reason = 0;
                    this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
                    retstr->m_type = ActionResultType::SUSPEND_FOR;
                    retstr->m_action = v67;
                    retstr->m_reason = "Beginning the attack.";
                  }
                  else
                  {
                    v52 = (*(me->_vptr_IHandleEntity + 377))(me);
                    CDOTABody::StartAnimation(v52, 0x5DCu, 0, 1.0);
                    v53 = (*(me->_vptr_IHandleEntity + 376))(me);
                    v54 = *(*v53 + 744LL);
                    v55 = CBaseEntity::GetAbsOrigin(AutoAttackTarget);
                    v54(v53, v55);
                    v56 = (*(me->_vptr_IHandleEntity + 376))(me);
                    CDOTALocomotor::StopMovement(v56, 0);
                    retstr->m_type = ActionResultType::CONTINUE;
                    retstr->m_action = 0;
                    retstr->m_reason = 0;
                  }
                  return retstr;
                }
              }
              this->m_bTurningToTarget = 0;
LABEL_70:
              CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
              retstr->m_type = ActionResultType::CONTINUE;
              retstr->m_action = 0;
              retstr->m_reason = 0;
              return retstr;
            }
LABEL_44:
            CDOTA_BaseNPC::SetTargetLastKnownPosition(me, AutoAttackTarget);
            goto LABEL_45;
          }
LABEL_39:
          m_pEntity = AutoAttackTarget->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v27 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_CurrentTargetData.m_hTarget.m_Index) = v27
                                                                | this->m_CurrentTargetData.m_hTarget.m_Index & 0x8000;
            this->m_CurrentTargetData.m_hTarget.m_Index = (v26 << 15)
                                                        | this->m_CurrentTargetData.m_hTarget.m_Index & 0x7FFF;
          }
          else
          {
            this->m_CurrentTargetData.m_hTarget.m_Index = -1;
          }
          this->m_CurrentTargetData.m_nRelationshipClass = CDOTA_BaseNPC::GetUnitRelationshipClass(AutoAttackTarget);
          CDOTA_BaseNPC::SetAggroTarget(me, AutoAttackTarget);
          this->m_bMovingToLastKnownTargetPosition = 0;
          goto LABEL_44;
        }
LABEL_72:
        AutoAttackTarget = CDOTA_BaseNPC::GetAutoAttackTarget(me, 0, this->m_bAttackMove);
        if ( AutoAttackTarget == 0 )
        {
          retstr->m_type = ActionResultType::DONE;
          retstr->m_action = 0;
          retstr->m_reason = "Could not determine an automatic attack target";
          return retstr;
        }
        goto LABEL_39;
      }
      this->m_bMovingToLastKnownTargetPosition = 1;
    }
    v23 = 1;
    goto LABEL_88;
  }
  if ( me->m_iTeamNum.m_Value == 4 )
  {
    if ( flRoamDistancea )
      goto LABEL_36;
    for ( i = 0; i != 3; ++i )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(me, i);
      if ( AbilityByIndex != 0 )
      {
        pAbility = AbilityByIndex;
        if ( CDOTABaseAbility::GetEffectiveLevel(AbilityByIndex) >= 0
          && (*(pAbility->_vptr_IHandleEntity + 245))(pAbility) != 0
          && CDOTABaseAbility::IsOwnersManaEnough(pAbility)
          && CDOTABaseAbility::IsOwnersGoldEnough(pAbility, -1)
          && (*(pAbility->_vptr_IHandleEntity + 311))(pAbility) != 0
          && (*(pAbility->_vptr_IHandleEntity + 312))(pAbility) != -1 )
        {
          v61 = (*(pAbility->_vptr_IHandleEntity + 312))(pAbility);
          v62 = pAbility;
          if ( v61 == 8 )
          {
            v86 = (*(pAbility->_vptr_IHandleEntity + 314))(pAbility);
            v62 = pAbility;
            if ( v86 != 0 )
            {
              (*(pAbility->_vptr_IHandleEntity + 313))(&AbilityResult, pAbility);
              v62 = pAbility;
              if ( (AbilityResult.m_type + 2) > 1 )
              {
                v87 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(AbilityResult.m_type) >> 9) & 0x3F];
                if ( v87 != 0 )
                {
                  v88 = &v87[AbilityResult.m_type & 0x1FF];
                  if ( v88 != 0
                    && AbilityResult.m_type == v88->m_EHandle.m_Index
                    && v88->m_pInstance != 0
                    && BYTE3(v88->m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  {
                    ik = v88->m_pInstance;
                    v89 = operator new(0x170u);
                    CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast(v89, pAbility, ik);
                    this->m_eventResult.m_type = ActionResultType::CONTINUE;
                    this->m_eventResult.m_action = 0;
                    this->m_eventResult.m_reason = 0;
                    this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
                    retstr->m_type = ActionResultType::SUSPEND_FOR;
                    retstr->m_action = v89;
                    retstr->m_reason = "Cast my offensive spell on a unit.";
                    return retstr;
                  }
                }
              }
            }
          }
          pAbilitya = v62;
          if ( (*(v62->_vptr_IHandleEntity + 312))(v62) == 4
            && (*(pAbilitya->_vptr_IHandleEntity + 314))(pAbilitya) != 0 )
          {
            v63 = operator new(0x68u);
            CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere(v63, pAbilitya);
            this->m_eventResult.m_type = ActionResultType::CONTINUE;
            this->m_eventResult.m_action = 0;
            this->m_eventResult.m_reason = 0;
            this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
            retstr->m_type = ActionResultType::SUSPEND_FOR;
            retstr->m_action = v63;
            retstr->m_reason = "Cast my offensive spell with no target.";
            return retstr;
          }
        }
      }
    }
    if ( (me->m_iUnitType & 0x10000) == 0 )
      goto LABEL_36;
  }
  else if ( (me->m_iUnitType & 0x10000) == 0 || flRoamDistancea )
  {
    goto LABEL_36;
  }
  if ( (me->m_nUnitState64.m_Value & 1 | ((me->m_nUnitState64.m_Value & 8) != 0)) != 0 )
    goto LABEL_36;
  CDOTA_BaseNPC_Creature::ConsiderUsingAbilities(&AbilityResult, me, this, m_pInstance);
  if ( AbilityResult.m_type != ActionResultType::CONTINUE )
  {
    *retstr = AbilityResult;
    return retstr;
  }
  if ( (*(me->_vptr_IHandleEntity + 497))(me) != 2
    || (v71 = me->m_hForceAttackTarget.m_Index, v72 = CEntityHandle::gm_pEntityList, (v73 = (v71 + 2)) > 1)
    && (v73 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hForceAttackTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v72 = 120LL * (me->m_hForceAttackTarget.m_Index & 0x1FF), (v73 = (v73 + v72)) != 0)
    && v71 == v73->m_EHandle.m_Index
    && v73->m_pInstance != 0
    && BYTE3(v73->m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
LABEL_36:
    this->m_bMovingToLastKnownTargetPosition = 0;
    CDOTA_BaseNPC::SetTargetLastKnownPosition(me, m_pInstance);
    CanAutoAttackTarget = CDOTA_BaseNPC::CanAutoAttackTarget(me, m_pInstance, 1);
    v23 = CanAutoAttackTarget;
    if ( !v16 )
    {
      ia = CanAutoAttackTarget;
      CDOTA_BaseNPC::GetAttackRange(me);
      IsEntityInRangeForAttack = CDOTA_BaseNPC::IsEntityInRangeForAttack(me, m_pInstance, v68);
      v23 = ia;
      if ( !IsEntityInRangeForAttack )
      {
        IsEntityExceptToAttack = CDOTA_BaseNPC::IsEntityExceptToAttack(me, m_pInstance);
        v23 = ia;
        if ( !IsEntityExceptToAttack )
          goto LABEL_72;
      }
    }
    goto LABEL_37;
  }
  v74 = (*(me->_vptr_IHandleEntity + 495))(me, me->m_pszCurrentState, v73, v72);
  v75 = SLODWORD(v74);
  if ( *&v74 == 0.0 )
    *&v75 = 700.0;
  flRoamDistanceg = *&v75;
  angles.y = RandomFloat(0.0, 360.0);
  angles.x = 0.0;
  angles.z = 0.0;
  AngleVectors(&angles, &forward, 0, 0);
  x_low = LODWORD(forward.x);
  *x_low.m128i_i32 = forward.x * flRoamDistanceg;
  v77 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  ii = forward.y * flRoamDistanceg;
  flRoamDistanceh = flRoamDistanceg * forward.z;
  v78 = CBaseEntity::GetAbsOrigin(me);
  v79 = flRoamDistanceh + v78->z;
  v80 = v77 + v78->x;
  forward.y = ii + v78->y;
  forward.z = v79;
  forward.x = v80;
  v81 = operator new(0x160u);
  CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition(v81, &forward, 0);
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->m_eventResult.m_action = 0;
  this->m_eventResult.m_reason = 0;
  this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
  retstr->m_type = ActionResultType::SUSPEND_FOR;
  retstr->m_action = v81;
  retstr->m_reason = "Moving away as an escape.";
  return retstr;
}


// CDOTABehaviorMoveToNPCToAttack::OnCancelAttack  (line 307, @0x000000000288cc50, libserver.so)  // inlines: EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, TryContinue, TryDone, operator CEntityInstance*, operator==
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorMoveToNPCToAttack::OnCancelAttack(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pTarget)
{
  EventDesiredResult<CDOTA_BaseNPC> *result; // rax
  uint32 m_Index; // edx
  unsigned __int16 v6; // di
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rsi

  result = retstr;
  if ( pTarget == 0
    || (m_Index = this->m_CurrentTargetData.m_hTarget.m_Index) + 2 > 1
    && (v6 = this->m_CurrentTargetData.m_hTarget.m_Index,
        (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F]) != 0)
    && (v8 = &v7[v6 & 0x1FF]) != 0
    && m_Index == v8->m_EHandle.m_Index
    && pTarget == v8->m_pInstance )
  {
    result->m_type = ActionResultType::DONE;
    result->m_action = 0;
    result->m_reason = 0;
    result->m_priority = EventResultPriorityType::RESULT_TRY;
  }
  else
  {
    result->m_type = ActionResultType::CONTINUE;
    result->m_action = 0;
    result->m_reason = 0;
    result->m_priority = EventResultPriorityType::RESULT_TRY;
  }
  return result;
}


// CDOTABehaviorMoveToNPCToAttack::OnDeAggro  (line 317, @0x000000000288cf10, libserver.so)  // inlines: EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, Set, TryContinue, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_BaseNPC::SetAggroTarget, CDOTA_BaseNPC::GetAutoAttackTarget
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorMoveToNPCToAttack::OnDeAggro(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pTarget)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  if ( pTarget != 0 && me != 0 )
  {
    m_Index = this->m_CurrentTargetData.m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      m_Index_low = LOWORD(this->m_CurrentTargetData.m_hTarget.m_Index);
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[m_Index_low & 0x1FF];
        if ( v10 != 0
          && m_Index == v10->m_EHandle.m_Index
          && pTarget == v10->m_pInstance
          && ((me->m_iUnitType & 0x800) == 0 || CDOTA_BaseNPC::GetAutoAttackTarget(me, 0, 1) != 0) )
        {
          this->m_CurrentTargetData.m_hTarget.m_Index = -1;
          CDOTA_BaseNPC::SetAggroTarget(me, 0);
        }
      }
    }
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorMoveToNPCToAttack::OnUnitTeleported  (line 339, @0x000000000288ccf0, libserver.so)  // inlines: EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, TryContinue, operator CEntityInstance*, operator=
// calls: CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_BaseNPC::SetAggroTarget
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorMoveToNPCToAttack::OnUnitTeleported(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  CBaseEntity *m_pInstance; // r10
  uint32 m_Index; // eax
  unsigned __int16 v9; // di
  CEntityIdentity *v10; // rsi
  CEntityIdentity *v11; // rsi
  CBaseEntity *v13; // rsi
  CBaseEntity *pUnita; // [rsp+0h] [rbp-20h]
  CDOTA_BaseNPC *mea; // [rsp+8h] [rbp-18h]
  CDOTA_BaseNPC *meb; // [rsp+8h] [rbp-18h]

  m_pInstance = 0;
  m_Index = this->m_CurrentTargetData.m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v9 = this->m_CurrentTargetData.m_hTarget.m_Index;
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[v9 & 0x1FF];
      if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  if ( pUnit == m_pInstance )
  {
    if ( bLongTeleport )
    {
      pUnita = pUnit;
      this->m_CurrentTargetData.m_hTarget.m_Index = -1;
      meb = me;
      CDOTA_BaseNPC::SetAggroTarget(me, 0);
      pUnit = pUnita;
      me = meb;
    }
    if ( pUnit != 0 && pUnit->m_bIsDOTANPC )
      v13 = pUnit;
    else
      v13 = 0;
    mea = me;
    if ( !CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, v13) && !this->m_bMovingToLastKnownTargetPosition )
    {
      this->m_CurrentTargetData.m_hTarget.m_Index = -1;
      CDOTA_BaseNPC::SetAggroTarget(mea, 0);
    }
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


// CDOTABehaviorTutorialRazorMoveToNPCToAttack::CDOTABehaviorTutorialRazorMoveToNPCToAttack  (line 366, @0x0000000002892be0, libserver.so)
// calls: CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack, CountdownTimer::CountdownTimer, CDOTABehaviorMoveToNPCToAttack::~CDOTABehaviorMoveToNPCToAttack, _Unwind_Resume
void __fastcall CDOTABehaviorTutorialRazorMoveToNPCToAttack::CDOTABehaviorTutorialRazorMoveToNPCToAttack(
        CDOTABehaviorTutorialRazorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *pTarget,
        bool bAttackMove)
{
  CDOTABehaviorMoveToNPCToAttack::CDOTABehaviorMoveToNPCToAttack(this, pTarget, bAttackMove);
  this->_vptr_INextBotEventResponder = &off_42C4430;
  this->_vptr_IContextualQuery = &off_42C4860;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C48C8;
  CountdownTimer::CountdownTimer(&this->m_PlasmaFieldDelay);
}


// CDOTABehaviorTutorialRazorMoveToNPCToAttack::OnStart  (line 370, @0x00000000028909b0, libserver.so)
// calls: CDOTABehaviorMoveToNPCToAttack::OnStartInternal
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialRazorMoveToNPCToAttack::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialRazorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  CDOTABehaviorMoveToNPCToAttack::OnStartInternal(retstr, this, me, priorAction);
  return retstr;
}


// CDOTABehaviorTutorialRazorMoveToNPCToAttack::OnInjured  (line 375, @0x000000000288e060, libserver.so)  // inlines: EventDesiredResult, Get, GetAttacker, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IActionResult, IndexToIdentity, IsElapsed, IsValid, LookupEntity, Set, ToDOTABaseNPC, TryContinue, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CountdownTimer::Now, CDOTA_BaseNPC::GetAbilityByIndex, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume, CountdownTimer::Start, CDOTA_BaseNPC::GetUnitRelationshipClass, CDOTA_BaseNPC::SetAggroTarget
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorTutorialRazorMoveToNPCToAttack::OnInjured(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorTutorialRazorMoveToNPCToAttack *const this,
        CDOTA_BaseNPC *me,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_Bot *m_pBot; // r14
  CDOTABaseAbility *AbilityByIndex; // r15
  CDOTA_BotAction_UseAbility *v14; // r12
  CEntityInstance *m_pInstance; // r14
  uint32 v16; // edx
  CEntityIdentity *v17; // rax
  CEntityIdentity *v18; // rax
  CEntityInstance *v19; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // cx

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(info->m_hAttacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v10 = &v9[m_Index_low & 0x1FF]) == 0
    || m_Index != v10->m_EHandle.m_Index
    || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
LABEL_5:
    if ( this->m_PlasmaFieldDelay.m_timestamp.m_Value <= 0.0 )
      goto LABEL_6;
    goto LABEL_7;
  }
  v16 = this->m_CurrentTargetData.m_hTarget.m_Index;
  if ( v16 + 2 > 1 )
  {
    v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_CurrentTargetData.m_hTarget.m_Index) >> 9)
                                                         & 0x3F];
    if ( v17 != 0 )
    {
      v18 = &v17[this->m_CurrentTargetData.m_hTarget.m_Index & 0x1FF];
      if ( v18 != 0 && v16 == v18->m_EHandle.m_Index )
      {
        v19 = v18->m_pInstance;
        if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 && (v19[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        {
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v22 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_CurrentTargetData.m_hTarget.m_Index) = v22
                                                                | this->m_CurrentTargetData.m_hTarget.m_Index & 0x8000;
            this->m_CurrentTargetData.m_hTarget.m_Index = (v21 << 15)
                                                        | this->m_CurrentTargetData.m_hTarget.m_Index & 0x7FFF;
          }
          else
          {
            this->m_CurrentTargetData.m_hTarget.m_Index = -1;
          }
          this->m_CurrentTargetData.m_nRelationshipClass = CDOTA_BaseNPC::GetUnitRelationshipClass(m_pInstance);
          CDOTA_BaseNPC::SetAggroTarget(me, m_pInstance);
          this->m_bMovingToLastKnownTargetPosition = 0;
        }
      }
    }
  }
  if ( this->m_PlasmaFieldDelay.m_timestamp.m_Value <= 0.0 )
  {
    CountdownTimer::Start(&this->m_PlasmaFieldDelay, 1.0, 0.0);
    goto LABEL_5;
  }
LABEL_7:
  if ( CountdownTimer::Now(&this->m_PlasmaFieldDelay) >= this->m_PlasmaFieldDelay.m_timestamp.m_Value )
  {
    m_pBot = me->m_pBot;
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(me, 0);
    v14 = operator new(0xC0u);
    CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v14, m_pBot, AbilityByIndex);
    CDOTA_Bot::PushAction(me->m_pBot, v14);
  }
LABEL_6:
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


