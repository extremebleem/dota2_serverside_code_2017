
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorAttack::CDOTABehaviorAttack  (line 8, @0x0000000002875e90, libserver.so)  // inlines: Action, AddRef, AddToDHead<CUtlReference<CDOTA_AttackRecord> >, AddToHead, CEntityHandle, CHandle, CUtlReference, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, KillRef, RemoveFromDList<CUtlReference<CDOTA_AttackRecord> >, RemoveNode, Set, operator=, ~CUtlReference
// calls: CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume
// callers: CDOTABehaviorAttackPhase::Update
void __fastcall CDOTABehaviorAttack::CDOTABehaviorAttack(
        CDOTABehaviorAttack *const this,
        CBaseEntity *pTarget,
        CDOTA_AttackRecord *pRecord,
        bool bCastAttack,
        float flBackswingTime,
        float flAnimSpeed)
{
  CUtlReference<CDOTA_AttackRecord> *p_m_pRecord; // r13
  CountdownTimer *p_m_backSwingTimer; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  CDOTA_AttackRecord *m_pObject; // rax
  CUtlReference<CDOTA_AttackRecord> *m_pPrev; // rdx
  CUtlReference<CDOTA_AttackRecord> *m_pNext; // rax
  CUtlReference<CDOTA_AttackRecord> *v18; // rdx

  p_m_pRecord = &this->m_pRecord;
  p_m_backSwingTimer = &this->m_backSwingTimer;
  LOBYTE(p_m_backSwingTimer[-2].m_duration.m_Value) = 0;
  *&p_m_backSwingTimer[-6].m_duration.m_Value = &off_42BAED0;
  LODWORD(p_m_backSwingTimer[-3]._vptr_CountdownTimer) = 0;
  *&p_m_backSwingTimer[-3].m_duration.m_Value = 0;
  *&p_m_backSwingTimer[-3].m_bUseGlobalsTime = 0;
  *&p_m_backSwingTimer[-5].m_duration.m_Value = 0;
  *&p_m_backSwingTimer[-5].m_bUseGlobalsTime = 0;
  p_m_backSwingTimer[-4]._vptr_CountdownTimer = 0;
  *&p_m_backSwingTimer[-4].m_duration.m_Value = 0;
  *&p_m_backSwingTimer[-4].m_bUseGlobalsTime = 0;
  p_m_backSwingTimer[-5]._vptr_CountdownTimer = 0;
  BYTE1(p_m_backSwingTimer[-2].m_duration.m_Value) = 0;
  LODWORD(p_m_backSwingTimer[-2]._vptr_CountdownTimer) = 0;
  *&p_m_backSwingTimer[-6].m_bUseGlobalsTime = &off_42BB2F0;
  p_m_backSwingTimer[-2].m_timestamp.m_Value = NAN;
  p_m_backSwingTimer[-1]._vptr_CountdownTimer = 0;
  *&p_m_backSwingTimer[-2].m_bUseGlobalsTime = 0;
  *&p_m_backSwingTimer[-1].m_duration.m_Value = 0;
  *&p_m_backSwingTimer[-1].m_bUseGlobalsTime = p_m_pRecord;
  CountdownTimer::CountdownTimer(p_m_backSwingTimer);
  if ( pTarget != 0 && (m_pEntity = pTarget->m_pEntity) != 0 )
  {
    v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v14 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v14 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v13 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  m_pObject = this->m_pRecord.m_pObject;
  if ( pRecord != m_pObject )
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
        v18 = this->m_pRecord.m_pNext;
        m_pObject->m_References.m_pHead = v18;
        if ( v18 != 0 )
          v18->m_pPrev = 0;
      }
      this->m_pRecord.m_pPrev = 0;
      this->m_pRecord.m_pNext = 0;
    }
    this->m_pRecord.m_pObject = pRecord;
    if ( pRecord != 0 )
    {
      this->m_pRecord.m_pNext = pRecord->m_References.m_pHead;
      if ( pRecord->m_References.m_pHead != 0 )
        pRecord->m_References.m_pHead->m_pPrev = p_m_pRecord;
      this->m_pRecord.m_pPrev = 0;
      pRecord->m_References.m_pHead = p_m_pRecord;
    }
  }
  this->m_bCastAttack = bCastAttack;
  this->m_flBackswingTime = flBackswingTime;
  this->m_flAnimSpeed = flAnimSpeed;
}


// CDOTABehaviorAttack::OnStart  (line 21, @0x0000000002872550, libserver.so)  // inlines: ActionResult, Done, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetCastLock, Start, operator CBaseEntity*, operator CEntityInstance*, operator=<float>
// calls: CDOTA_BaseNPC::PerformAttack, CountdownTimer::Now, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// strings: "Target handle NULL in OnStart"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAttack::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAttack *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CBaseEntity *m_pInstance; // rdx
  double v12; // xmm0_8
  double v13; // xmm1_8
  double v14; // xmm2_8
  bool v15; // zf
  float v16; // [rsp+8h] [rbp-28h]
  float m_flBackswingTime; // [rsp+Ch] [rbp-24h]

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance) == 0 )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_reason = "Target handle NULL in OnStart";
    retstr->m_action = 0;
    return retstr;
  }
  CDOTA_BaseNPC::PerformAttack(me, this->m_pRecord.m_pObject, m_pInstance, 0, 0, 1, 0);
  m_flBackswingTime = this->m_flBackswingTime;
  *&v12 = CountdownTimer::Now(&this->m_backSwingTimer) + m_flBackswingTime;
  if ( *&v12 != this->m_backSwingTimer.m_timestamp.m_Value )
  {
    v16 = *&v12;
    (*(this->m_backSwingTimer._vptr_CountdownTimer + 2))(&this->m_backSwingTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v12 = LODWORD(v16);
    this->m_backSwingTimer.m_timestamp.m_Value = v16;
  }
  *&v14 = LODWORD(m_flBackswingTime);
  if ( m_flBackswingTime != this->m_backSwingTimer.m_duration.m_Value )
  {
    (*(this->m_backSwingTimer._vptr_CountdownTimer + 2))(
      &this->m_backSwingTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v12,
      v13,
      m_flBackswingTime);
    v15 = !this->m_bCastAttack;
    this->m_backSwingTimer.m_duration.m_Value = m_flBackswingTime;
    if ( v15 )
      goto LABEL_11;
LABEL_13:
    me->m_bCastLocked = 0;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
    goto LABEL_11;
  }
  if ( this->m_bCastAttack )
    goto LABEL_13;
LABEL_11:
  (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0, v13, v14);
  return retstr;
}


// CDOTABehaviorAttack::Update  (line 42, @0x0000000002873b80, libserver.so)  // inlines: ActionResult, Continue, Done, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetRemainingTime, IActionResult, IndexToIdentity, IsElapsed, IsValid, LookupEntity, SetPlaybackRate, operator CEntityInstance*
// calls: CDOTA_BaseNPC::IsActionLocked, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTABody::GetAnimationSpeed, CountdownTimer::Now, CDOTA_BaseNPC::UpdateAttackAnimSpeed, CBaseAnimating::GetBaseAnimatingController, CountdownTimer::Start, CDOTA_BaseNPC::SetTargetLastKnownPosition, CBaseEntity::GetAbsOrigin
// strings: "Target no longer valid", "Attack backswing interrupted, action locked.", "Done Attacking - Backswing"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAttack::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAttack *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CBaseEntity *m_pInstance; // r14
  CDOTABody *v12; // rax
  float AnimationSpeed; // xmm0_4
  float m_flAnimSpeed; // xmm1_4
  CountdownTimer *p_m_backSwingTimer; // r13
  CDOTA_BaseNPC *v16; // rdi
  CBaseAnimatingController *BaseAnimatingController; // rax
  float m_Value; // r14d
  float v19; // xmm0_4
  float v20; // xmm1_4
  __int64 v21; // r15
  const Vector *AbsOrigin; // rax
  float v23; // [rsp+4h] [rbp-3Ch]
  float flNewAnimSpeedRatioa; // [rsp+8h] [rbp-38h]
  void (__fastcall *flNewAnimSpeedRatio)(__int64, const Vector *); // [rsp+8h] [rbp-38h]

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && (m_pInstance = v9->m_pInstance, v9->m_pInstance != 0) )
  {
    if ( CDOTA_BaseNPC::IsActionLocked(me) )
    {
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Attack backswing interrupted, action locked.";
    }
    else
    {
      if ( CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, m_pInstance) )
      {
        CDOTA_BaseNPC::SetTargetLastKnownPosition(me, m_pInstance);
        v21 = (*(me->_vptr_IHandleEntity + 376))(me);
        flNewAnimSpeedRatio = *(*v21 + 744LL);
        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
        flNewAnimSpeedRatio(v21, AbsOrigin);
      }
      v12 = (*(me->_vptr_IHandleEntity + 377))(me);
      AnimationSpeed = CDOTABody::GetAnimationSpeed(v12, 1503);
      m_flAnimSpeed = this->m_flAnimSpeed;
      if ( AnimationSpeed == m_flAnimSpeed )
      {
        p_m_backSwingTimer = &this->m_backSwingTimer;
      }
      else
      {
        this->m_flAnimSpeed = AnimationSpeed;
        flNewAnimSpeedRatioa = AnimationSpeed / m_flAnimSpeed;
        CDOTA_BaseNPC::UpdateAttackAnimSpeed(me, m_flAnimSpeed);
        v16 = me;
        p_m_backSwingTimer = &this->m_backSwingTimer;
        v23 = this->m_flAnimSpeed;
        BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v16);
        (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, v23);
        m_Value = this->m_backSwingTimer.m_timestamp.m_Value;
        v19 = CountdownTimer::Now(&this->m_backSwingTimer);
        CountdownTimer::Start(&this->m_backSwingTimer, (m_Value - v19) / flNewAnimSpeedRatioa, v20);
      }
      if ( CountdownTimer::Now(p_m_backSwingTimer) >= this->m_backSwingTimer.m_timestamp.m_Value )
      {
        retstr->m_type = ActionResultType::DONE;
        retstr->m_action = 0;
        retstr->m_reason = "Done Attacking - Backswing";
      }
      else
      {
        retstr->m_type = ActionResultType::CONTINUE;
        retstr->m_action = 0;
        retstr->m_reason = 0;
      }
    }
  }
  else
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Target no longer valid";
  }
  return retstr;
}


// CDOTABehaviorAttack::OnEnd  (line 79, @0x0000000002872710, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetRemainingTime, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetAttacker, SetTarget, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CountdownTimer::Now, FireModifierEvent, CDOTA_BaseNPC::EndAttackAnimation
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTABehaviorAttack::OnEnd(
        CDOTABehaviorAttack *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  __int16 v10; // cx
  float m_Value; // [rsp+Ch] [rbp-A4h]
  CModifierParams params; // [rsp+10h] [rbp-A0h] BYREF

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
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    }
  }
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hTarget.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        v9 = v8->m_pInstance->m_pEntity;
        if ( v9 != 0 )
        {
          if ( v9->m_EHandle.m_Index == -1 )
            v10 = 0x7FFF;
          else
            v10 = v9->m_EHandle.m_Index & 0x7FFF;
          params.htarget.m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
        }
      }
    }
  }
  m_Value = this->m_backSwingTimer.m_timestamp.m_Value;
  params.fAttackTimeRemaining = m_Value - CountdownTimer::Now(&this->m_backSwingTimer);
  FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ATTACK_FINISHED, &params);
  CDOTA_BaseNPC::EndAttackAnimation(me, 0);
}


