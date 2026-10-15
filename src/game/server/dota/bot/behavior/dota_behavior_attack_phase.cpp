
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorAttackPhase::CDOTABehaviorAttackPhase  (line 12, @0x00000000028766a0, libserver.so)  // inlines: Action, CEntityHandle, CHandle, CUtlReference, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, HSequence, IActionResult, Set, operator=
// calls: CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorMoveToNPCToAttack::Update
void __fastcall CDOTABehaviorAttackPhase::CDOTABehaviorAttackPhase(
        CDOTABehaviorAttackPhase *const this,
        CBaseEntity *pTarget,
        bool bDeny,
        bool bCastAttack)
{
  CountdownTimer *p_m_attackTimer; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx

  this->_vptr_INextBotEventResponder = &off_42BB370;
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  p_m_attackTimer = &this->m_attackTimer;
  *&p_m_attackTimer[-2].m_bUseGlobalsTime = 0;
  p_m_attackTimer[-1]._vptr_CountdownTimer = 0;
  *&p_m_attackTimer[-4].m_bUseGlobalsTime = 0;
  p_m_attackTimer[-3]._vptr_CountdownTimer = 0;
  *&p_m_attackTimer[-3].m_duration.m_Value = 0;
  *&p_m_attackTimer[-3].m_bUseGlobalsTime = 0;
  p_m_attackTimer[-2]._vptr_CountdownTimer = 0;
  *&p_m_attackTimer[-4].m_duration.m_Value = 0;
  p_m_attackTimer[-1].m_bUseGlobalsTime = 0;
  *(&p_m_attackTimer[-1].m_bUseGlobalsTime + 1) = 0;
  p_m_attackTimer[-1].m_duration.m_Value = 0.0;
  p_m_attackTimer[-4]._vptr_CountdownTimer = &off_42BB790;
  *(&p_m_attackTimer[-1].m_bUseGlobalsTime + 1) = -1;
  CountdownTimer::CountdownTimer(p_m_attackTimer);
  this->m_pRecord.m_pPrev = 0;
  this->m_pRecord.m_pNext = 0;
  this->m_pRecord.m_pObject = 0;
  this->m_pRecord.m_ThisCheck = &this->m_pRecord;
  this->m_iSequence.m_Data = -1;
  if ( pTarget != 0 && (m_pEntity = pTarget->m_pEntity) != 0 )
  {
    v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v11 = 0x7FFF;
    else
      v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v11 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v10 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  this->m_bDeny = bDeny;
  this->m_bCastAttack = bCastAttack;
}


// CDOTABehaviorAttackPhase::OnStart  (line 24, @0x0000000002873db0, libserver.so)  // inlines: ActionResult, AddRef, AddToDHead<CUtlReference<CDOTA_AttackRecord> >, AddToHead, CEntityHandle, CHandle, CModifierParams, DOTAGameRules, Done, Get, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, IActionResult, IsConsideredHero, KillRef, RemoveFromDList<CUtlReference<CDOTA_AttackRecord> >, RemoveNode, Set, SetAttackPhaseEndTime, SetAttacker, SetCastLock, SetPlaybackRate, SetTarget, ToDOTABaseNPC, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::CreateAttackRecord, FireModifierEvent, CDOTA_BaseNPC::GetCastPoint, CountdownTimer::Start, CDOTABody::GetAnimationSpeed, CDOTABody::StartAnimation, CBaseAnimating::GetBaseAnimatingController, CDOTA_BaseNPC::StartAttackAnimation, CDOTA_BaseNPC::AngerNearbyUnits, CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy, CBaseAnimating::GetSequenceCycleRate (17 total)
// strings: "NO ATTACK RECORD.", "Target handle NULL in OnStart"
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAttackPhase::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAttackPhase *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  CBaseEntity *v7; // rax
  CBaseEntity *v8; // r13
  CBaseEntity *v9; // r15
  CDOTA_AttackRecord *AttackRecord; // rax
  CUtlReference<CDOTA_AttackRecord> *p_m_pRecord; // rcx
  CDOTA_AttackRecord *v12; // rdx
  CDOTA_AttackRecord *m_pObject; // rax
  CUtlReference<CDOTA_AttackRecord> *m_pPrev; // rsi
  CUtlReference<CDOTA_AttackRecord> *m_pNext; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v17; // si
  CEntityIdentity *v18; // rdx
  __int16 v19; // si
  __int16 m_iRecord; // dx
  __m128 v21; // xmm0
  __int32 v22; // xmm2_4
  __m128 v23; // xmm0
  float v24; // xmm0_4
  CDOTABody *v25; // rax
  float AnimationSpeed; // xmm0_4
  CDOTA_AttackRecord *v27; // rdx
  unsigned int m_animation; // r13d
  CDOTABody *v29; // rax
  HSequence v30; // eax
  float m_flAnimSpeed; // xmm0_4
  CBaseAnimatingController *BaseAnimatingController; // rax
  float v33; // xmm1_4
  CDOTABody *v34; // rax
  HSequence v35; // eax
  float v36; // xmm1_4
  float v37; // xmm5_4
  float SecondsPerAttack; // xmm0_4
  __int64 v39; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  const char *v42; // r15
  CDOTABaseAbility *AbilityByName; // rax
  CUtlReference<CDOTA_AttackRecord> *v44; // rsi
  float flCycle; // [rsp+10h] [rbp-D0h]
  float flCyclea; // [rsp+10h] [rbp-D0h]
  double flCycleb; // [rsp+10h] [rbp-D0h]
  float flAttackTime; // [rsp+1Ch] [rbp-C4h]
  CModifierParams params; // [rsp+20h] [rbp-C0h] BYREF

  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  v8 = v7;
  if ( v7 == 0 )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Target handle NULL in OnStart";
    return retstr;
  }
  v9 = 0;
  if ( v7->m_bIsDOTANPC )
    v9 = v7;
  AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(me, v7, this->m_bCastAttack, 1, 0, 0, 0);
  p_m_pRecord = &this->m_pRecord;
  v12 = AttackRecord;
  m_pObject = this->m_pRecord.m_pObject;
  if ( v12 != m_pObject )
  {
    if ( m_pObject != 0 )
    {
      m_pPrev = this->m_pRecord.m_pPrev;
      if ( m_pPrev != 0 )
      {
        m_pPrev->m_pNext = this->m_pRecord.m_pNext;
        m_pNext = this->m_pRecord.m_pNext;
        if ( m_pNext != 0 )
          m_pNext->m_pPrev = this->m_pRecord.m_pPrev;
      }
      else if ( p_m_pRecord == m_pObject->m_References.m_pHead )
      {
        v44 = this->m_pRecord.m_pNext;
        m_pObject->m_References.m_pHead = v44;
        if ( v44 != 0 )
          v44->m_pPrev = 0;
      }
      this->m_pRecord.m_pPrev = 0;
      this->m_pRecord.m_pNext = 0;
    }
    this->m_pRecord.m_pObject = v12;
    if ( v12 != 0 )
    {
      this->m_pRecord.m_pNext = v12->m_References.m_pHead;
      if ( v12->m_References.m_pHead != 0 )
        v12->m_References.m_pHead->m_pPrev = p_m_pRecord;
      this->m_pRecord.m_pPrev = 0;
      v12->m_References.m_pHead = p_m_pRecord;
      m_pObject = this->m_pRecord.m_pObject;
    }
    else
    {
      m_pObject = 0;
    }
  }
  params.bCraniumBasherTested = 0;
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( me != 0 )
  {
    m_pEntity = me->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v17 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                               | v17 & 0x7FFF;
    }
  }
  v18 = v8->m_pEntity;
  if ( v18 != 0 )
  {
    v19 = 0x7FFF;
    if ( v18->m_EHandle.m_Index != -1 )
      v19 = v18->m_EHandle.m_Index & 0x7FFF;
    params.htarget.m_Index = (((v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1)) << 15) | v19 & 0x7FFF;
  }
  m_iRecord = -1;
  if ( m_pObject != 0 )
    m_iRecord = m_pObject->m_iRecord;
  params.iRecord = m_iRecord;
  FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ATTACK_START, &params);
  v21.m128_f32[0] = CDOTA_BaseNPC::GetCastPoint(me, 1);
  v22 = v21.m128_i32[0];
  flAttackTime = v21.m128_f32[0];
  v23 = _mm_cmplt_ss(0LL, v21);
  CountdownTimer::Start(
    &this->m_attackTimer,
    COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_andnot_ps(v23, 0xBF800000).m128_f32[0]) | v22 & v23.m128_i32[0]),
    -1.0);
  v24 = 0.0;
  if ( g_pGameRules != 0 )
    v24 = *&g_pGameRules[18].m_szQuestName[20];
  me->m_fAttackPhaseEndTime = v24 + flAttackTime;
  if ( v9 != 0 && me->m_bIsDOTANPC && (me->m_iUnitType & 3) != 0 && (v9[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
  {
    if ( this->m_bCastAttack )
      goto LABEL_49;
    CDOTA_BaseNPC::AngerNearbyUnits(me);
  }
  if ( !this->m_bCastAttack )
  {
    if ( this->m_pRecord.m_pObject != 0 )
      goto LABEL_31;
LABEL_50:
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "NO ATTACK RECORD.";
    return retstr;
  }
LABEL_49:
  me->m_bCastLocked = 1;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 1);
  if ( this->m_pRecord.m_pObject == 0 )
    goto LABEL_50;
LABEL_31:
  this->m_flAttackPortionPriorToTimer = 0.0;
  v25 = (*(me->_vptr_IHandleEntity + 377))(me);
  AnimationSpeed = CDOTABody::GetAnimationSpeed(v25, 1503);
  this->m_iSequence.m_Data = -1;
  this->m_flAnimSpeed = AnimationSpeed;
  if ( (*(me->_vptr_IHandleEntity + 439))(me) != 0 )
  {
    v34 = (*(me->_vptr_IHandleEntity + 377))(me);
    CDOTABody::StartAnimation(v34, 0x5DCu, 0, 1.0);
    (*(me->_vptr_IHandleEntity + 442))(me, 1503);
    v35.m_Data = CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(me, 1503).m_Data;
    this->m_iSequence = v35;
    CDOTA_BaseNPC::StartAttackAnimation(me, v35, v36);
  }
  else
  {
    v27 = this->m_pRecord.m_pObject;
    m_animation = v27->m_animation;
    if ( this->m_bCastAttack || v27->m_bAutoCastAttack )
    {
      v42 = (*(me->_vptr_IHandleEntity + 440))(me);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(me, v42, 0);
      if ( AbilityByName != 0 && v42 != 0 )
        m_animation = (*(AbilityByName->_vptr_IHandleEntity + 234))(AbilityByName);
    }
    v29 = (*(me->_vptr_IHandleEntity + 377))(me);
    v30.m_Data = CDOTABody::StartAnimation(v29, m_animation, 1, 1.0).m_Data;
    m_flAnimSpeed = this->m_flAnimSpeed;
    this->m_iSequence = v30;
    flCycle = m_flAnimSpeed;
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(me);
    (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, flCycle);
    if ( this->m_iSequence.m_Data == -1 )
      goto LABEL_51;
    CDOTA_BaseNPC::StartAttackAnimation(me, this->m_iSequence, v33);
  }
  if ( this->m_iSequence.m_Data != -1 )
  {
    flCyclea = (this->m_flAnimSpeed * CBaseAnimating::GetSequenceCycleRate(me, this->m_iSequence)) * flAttackTime;
    flCycleb = CBaseAnimating::SequenceDuration(me, this->m_iSequence) * (1.0 - flCyclea);
    v37 = _mm_movedup_pd(COERCE_UNSIGNED_INT64(1.0 / CDOTA_BaseNPC::GetHasteFactor(me) * flCycleb)).m128d_f64[0];
    this->m_flBackswingDuration = v37;
    SecondsPerAttack = CDOTA_BaseNPC::GetSecondsPerAttack(me);
    if ( (flAttackTime + this->m_flBackswingDuration) >= (SecondsPerAttack - 0.067000002) )
      this->m_flBackswingDuration = fmaxf(0.0, (SecondsPerAttack - flAttackTime) - 0.067000002);
    goto LABEL_44;
  }
LABEL_51:
  this->m_flBackswingDuration = flAttackTime;
LABEL_44:
  v39 = (*(me->_vptr_IHandleEntity + 376))(me);
  (*(*v39 + 616LL))(v39);
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  this->m_bAttackComplete = 0;
  this->m_bTargetTeleported = 0;
  vptr_INextBotEventResponder[66](retstr, this, me, 0.0);
  return retstr;
}


// CDOTABehaviorAttackPhase::Update  (line 135, @0x0000000002876100, libserver.so)  // inlines: ActionResult, ChangeTo, Continue, Done, Get, GetAttackRangeBuffer, GetEntityIdentity, GetEntryIndex, GetInstance, GetRemainingRatio, GetRemainingTime, HasStarted, IActionResult, IndexToIdentity, IsElapsed, IsValid, LookupEntity, SetPlaybackRate, SetTargetMovedOutOfRange, ToDOTABaseNPC, operator CEntityInstance*, operator><float>
// calls: CDOTA_BaseNPC::IsActionLocked, CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_BaseNPC::IsAllowedToBeAttacked, CDOTA_BaseNPC::IsInvisibleTo, CDOTABody::GetAnimationSpeed, CDOTA_BaseNPC::GetAttackRange, CDOTA_BaseNPC::IsEntityInRangeForAttack, CDOTA_BaseNPC::SetTargetLastKnownPosition, CountdownTimer::Now, operator new, CDOTABehaviorAttack::CDOTABehaviorAttack, CDOTA_BaseNPC::FindModifierByName (24 total)
// strings: "Attack phase interrupted, disarmed.", "Attack phase interrupted, target handle is NULL.", "Current ability is NULL", "Attack phase interrupted, action locked.", "Attack phase interrupted, can no longer attack target.", "Target switched teams." (11 total)
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAttackPhase::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAttackPhase *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  CDOTABaseAbility *CurrentActiveAbility; // r14
  uint32 m_Index; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *v13; // rdi
  bool IsAllowedToBeAttacked; // al
  CDOTABody *v15; // rax
  float AnimationSpeed; // xmm0_4
  float v17; // xmm1_4
  CDOTA_AttackRecord *m_pObject; // r14
  CDOTABehaviorAttack *v19; // r12
  float v20; // xmm1_4
  __int64 v21; // r12
  void (__fastcall *v22)(__int64, const Vector *); // r13
  const Vector *AbsOrigin; // rax
  CBaseAnimatingController *BaseAnimatingController; // rax
  CountdownTimer *p_m_attackTimer; // rax
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  double HasteFactor; // xmm2_8^8
  __m128d v31; // xmm1
  float v32; // [rsp+10h] [rbp-40h]
  float m_Value; // [rsp+18h] [rbp-38h]
  float flCyclePastAttackPointa; // [rsp+1Ch] [rbp-34h]
  float flCyclePastAttackPoint; // [rsp+1Ch] [rbp-34h]
  float flCyclePastAttackPointb; // [rsp+1Ch] [rbp-34h]

  CurrentActiveAbility = 0;
  if ( this->m_bCastAttack )
  {
    CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(me);
    if ( CurrentActiveAbility == 0 )
    {
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Current ability is NULL";
      return retstr;
    }
  }
  if ( (me->m_nUnitState64.m_Value & 2) != 0 )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Attack phase interrupted, disarmed.";
    return retstr;
  }
  if ( CDOTA_BaseNPC::IsActionLocked(me) )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Attack phase interrupted, action locked.";
    return retstr;
  }
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v11->m_EHandle.m_Index
    || (m_pInstance = v11->m_pInstance, v11->m_pInstance == 0) )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Attack phase interrupted, target handle is NULL.";
    return retstr;
  }
  v13 = 0;
  if ( m_pInstance->m_bIsDOTANPC )
  {
    IsAllowedToBeAttacked = CDOTA_BaseNPC::IsAllowedToBeAttacked(v11->m_pInstance);
    v13 = m_pInstance;
    if ( !IsAllowedToBeAttacked )
    {
      if ( CDOTA_BaseNPC::FindModifierByName(me, "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", 0) == 0 )
        goto LABEL_18;
      v13 = m_pInstance;
    }
  }
  if ( this->m_bTargetTeleported )
  {
LABEL_18:
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Attack phase interrupted, can no longer attack target.";
    return retstr;
  }
  if ( this->m_bDeny == (m_pInstance->m_iTeamNum.m_Value == me->m_iTeamNum.m_Value) || me->m_bAllowAllyForceAttack )
  {
    if ( v13 != 0 && CDOTA_BaseNPC::IsInvisibleTo(v13, me) )
    {
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Target became invisible.";
    }
    else
    {
      v15 = (*(me->_vptr_IHandleEntity + 377))(me);
      AnimationSpeed = CDOTABody::GetAnimationSpeed(v15, 1503);
      if ( AnimationSpeed != this->m_flAnimSpeed )
      {
        this->m_flAnimSpeed = AnimationSpeed;
        CDOTA_BaseNPC::UpdateAttackAnimSpeed(me, v17);
        flCyclePastAttackPointa = this->m_flAnimSpeed;
        BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(me);
        (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(
          BaseAnimatingController,
          flCyclePastAttackPointa);
        flCyclePastAttackPoint = CDOTA_BaseNPC::GetCastPoint(me, 1);
        p_m_attackTimer = &this->m_attackTimer;
        if ( this->m_attackTimer.m_timestamp.m_Value <= 0.0
          || (m_Value = this->m_attackTimer.m_timestamp.m_Value,
              v26 = CountdownTimer::Now(&this->m_attackTimer),
              v27 = 0.0,
              p_m_attackTimer = &this->m_attackTimer,
              (v28 = (m_Value - v26) / this->m_attackTimer.m_duration.m_Value) < 0.0) )
        {
          v27 = 1.0;
        }
        else if ( v28 <= 1.0 )
        {
          v27 = 1.0 - v28;
        }
        v29 = ((1.0 - this->m_flAttackPortionPriorToTimer) * v27) + this->m_flAttackPortionPriorToTimer;
        this->m_flAttackPortionPriorToTimer = v29;
        CountdownTimer::Start(p_m_attackTimer, flCyclePastAttackPoint * (1.0 - v29), 1.0);
        flCyclePastAttackPointb = 1.0
                                - ((CBaseAnimating::GetSequenceCycleRate(me, this->m_iSequence) * this->m_flAnimSpeed)
                                 * flCyclePastAttackPoint);
        v32 = CBaseAnimating::SequenceDuration(me, this->m_iSequence);
        HasteFactor = CDOTA_BaseNPC::GetHasteFactor(me);
        v31.m128d_f64[1] = (flCyclePastAttackPointb * v32);
        v31.m128d_f64[0] = v31.m128d_f64[1] * (1.0 / HasteFactor);
        this->m_flBackswingDuration = _mm_movedup_pd(v31).m128d_f64[0];
      }
      if ( this->m_bCastAttack )
      {
        (*(CurrentActiveAbility->_vptr_IHandleEntity + 230))(CurrentActiveAbility, &vec3_origin, 0);
        if ( !CDOTA_BaseNPC::IsEntityInRangeForCast(me, m_pInstance, v20)
          && !CDOTA_BaseNPC::IsEntityExceptToAttack(me, m_pInstance) )
        {
          retstr->m_type = ActionResultType::DONE;
          me->m_bTargetMovedOutOfRange = 1;
          retstr->m_action = 0;
          retstr->m_reason = "Attack phase interrupted, target moved out of cast range.";
          return retstr;
        }
      }
      else
      {
        CDOTA_BaseNPC::GetAttackRange(me);
        if ( !CDOTA_BaseNPC::IsEntityInRangeForAttack(me, m_pInstance, me->m_iAttackRangeBuffer)
          && !CDOTA_BaseNPC::IsEntityExceptToAttack(me, m_pInstance) )
        {
          retstr->m_type = ActionResultType::DONE;
          me->m_bTargetMovedOutOfRange = 1;
          retstr->m_action = 0;
          retstr->m_reason = "Attack phase interrupted, target moved out of attack range.";
          return retstr;
        }
      }
      CDOTA_BaseNPC::SetTargetLastKnownPosition(me, m_pInstance);
      if ( CountdownTimer::Now(&this->m_attackTimer) < this->m_attackTimer.m_timestamp.m_Value )
      {
        v21 = (*(me->_vptr_IHandleEntity + 376))(me);
        v22 = *(*v21 + 744LL);
        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
        v22(v21, AbsOrigin);
        retstr->m_type = ActionResultType::CONTINUE;
        retstr->m_action = 0;
        retstr->m_reason = 0;
      }
      else
      {
        m_pObject = this->m_pRecord.m_pObject;
        this->m_bAttackComplete = 1;
        v19 = operator new(0xB0u);
        CDOTABehaviorAttack::CDOTABehaviorAttack(
          v19,
          m_pInstance,
          m_pObject,
          this->m_bCastAttack,
          this->m_flBackswingDuration,
          this->m_flAnimSpeed);
        retstr->m_type = ActionResultType::CHANGE_TO;
        retstr->m_action = v19;
        retstr->m_reason = "Action time done";
      }
    }
  }
  else
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Target switched teams.";
  }
  return retstr;
}


// CDOTABehaviorAttackPhase::OnEnd  (line 234, @0x0000000002872930, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetAttackPhaseEndTime, SetAttacker, SetCastLock, SetTarget, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: FireModifierEvent, CDOTA_BaseNPC::EndAttackAnimation, GetAttackRecordsManager, CDOTA_AttackRecordManager::RemoveRecord, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTABehaviorAttackPhase::OnEnd(
        CDOTABehaviorAttackPhase *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  CEntityIdentity *m_pEntity; // rax
  __int16 v6; // cx
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_AttackRecord *m_pObject; // r13
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CEntityIdentity *v12; // rdx
  __int16 v13; // cx
  CModifierParams params; // [rsp+0h] [rbp-B0h] BYREF

  me->m_fAttackPhaseEndTime = 0.0;
  if ( !this->m_bAttackComplete )
  {
    m_pEntity = me->m_pEntity;
    params.bCraniumBasherTested = 0;
    params.ability.m_Index = -1;
    params.fDamage = 0.0;
    params.fOriginalDamage = 0.0;
    params.bTooltip = 0;
    params.nActivity = -1;
    params.nTooltipParam = 0;
    params.bIgnoreInvis = 0;
    params.bNoCooldown = 0;
    params.bReincarnate = 0;
    params.bDoNotConsume = 0;
    params.fDistance = 0.0;
    params.inflictor.m_Index = -1;
    params.nDamageflags = 0;
    params.nDamageCategory = 0;
    memset(&params.pOrb, 0, 24);
    params.bHeartRegenApplied = 0;
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[this->m_hTarget.m_Index & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        {
          v12 = v9->m_pInstance->m_pEntity;
          if ( v12 != 0 )
          {
            v13 = 0x7FFF;
            if ( v12->m_EHandle.m_Index != -1 )
              v13 = v12->m_EHandle.m_Index & 0x7FFF;
            params.htarget.m_Index = (((v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1)) << 15) | v13 & 0x7FFF;
          }
        }
      }
    }
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ATTACK_FINISHED, &params);
    CDOTA_BaseNPC::EndAttackAnimation(me, 0);
    m_pObject = this->m_pRecord.m_pObject;
    AttackRecordsManager = GetAttackRecordsManager();
    CDOTA_AttackRecordManager::RemoveRecord(AttackRecordsManager, m_pObject);
    if ( this->m_bCastAttack )
    {
      me->m_bCastLocked = 0;
      CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
    }
  }
}


// CDOTABehaviorAttackPhase::OnUnitTeleported  (line 261, @0x0000000002871850, libserver.so)  // inlines: EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, TryContinue, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAttackPhase::OnUnitTeleported(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAttackPhase *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  EventDesiredResult<CDOTA_BaseNPC> *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v7; // rdi
  CEntityIdentity *v8; // rdi

  result = retstr;
  if ( bLongTeleport )
  {
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[this->m_hTarget.m_Index & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && pUnit == v8->m_pInstance && v8->m_pInstance != 0 )
          this->m_bTargetTeleported = 1;
      }
    }
  }
  result->m_type = ActionResultType::CONTINUE;
  result->m_action = 0;
  result->m_reason = 0;
  result->m_priority = EventResultPriorityType::RESULT_TRY;
  return result;
}


