
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorAbilityPhase::CDOTABehaviorAbilityPhase  (line 12, @0x00000000028749d0, libserver.so)  // inlines: Action, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=
// calls: CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume
// callers: CDOTABehaviorAbility::InitialContainedAction
void __fastcall CDOTABehaviorAbilityPhase::CDOTABehaviorAbilityPhase(
        CDOTABehaviorAbilityPhase *const this,
        CDOTABaseAbility *pAbility)
{
  CountdownTimer *p_m_abilityTimer; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx

  this->_vptr_INextBotEventResponder = &off_42BAA30;
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  p_m_abilityTimer = &this->m_abilityTimer;
  *&p_m_abilityTimer[-2].m_bUseGlobalsTime = 0;
  p_m_abilityTimer[-1]._vptr_CountdownTimer = 0;
  *&p_m_abilityTimer[-4].m_bUseGlobalsTime = 0;
  p_m_abilityTimer[-3]._vptr_CountdownTimer = 0;
  *&p_m_abilityTimer[-3].m_duration.m_Value = 0;
  *&p_m_abilityTimer[-3].m_bUseGlobalsTime = 0;
  p_m_abilityTimer[-2]._vptr_CountdownTimer = 0;
  *&p_m_abilityTimer[-4].m_duration.m_Value = 0;
  p_m_abilityTimer[-1].m_bUseGlobalsTime = 0;
  *(&p_m_abilityTimer[-1].m_bUseGlobalsTime + 1) = 0;
  p_m_abilityTimer[-1].m_duration.m_Value = 0.0;
  p_m_abilityTimer[-4]._vptr_CountdownTimer = &off_42BAE58;
  CountdownTimer::CountdownTimer(p_m_abilityTimer);
  CountdownTimer::CountdownTimer(&this->m_backSwingTimer);
  this->m_hAbility.m_Index = -1;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v7 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v6 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
}


// CDOTABehaviorAbilityPhase::OnStart  (line 19, @0x00000000028754a0, libserver.so)  // inlines: ActionResult, Done, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, Invalidate, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator=<float>
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::SetCurrentActiveAbility, CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTABehaviorAbilityPhase::BeginCast, CDOTA_BaseNPC::PrimeResumePreviousMovement, CDOTABaseAbility::SpeakAbilityConcept
// strings: "Caster is no longer the acting npc.", "Cast failed."
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAbilityPhase::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAbilityPhase *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  CDOTABaseAbility *m_pInstance; // r13
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *Caster; // r15
  CDOTABaseAbility *CurrentActiveAbility; // r13

  m_pInstance = 0;
  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_hAbility.m_Index);
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[m_Index_low & 0x1FF];
      if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  Caster = CDOTABaseAbility::GetCaster(m_pInstance);
  if ( Caster == me )
  {
    CDOTA_BaseNPC::SetCurrentActiveAbility(me, m_pInstance);
    if ( this->m_backSwingTimer.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_backSwingTimer._vptr_CountdownTimer + 2))(
        &this->m_backSwingTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        -1.0);
      this->m_backSwingTimer.m_timestamp.m_Value = -1.0;
    }
    this->m_bBackswinging = 0;
    this->m_bActionLocked = 0;
    this->m_bTargetTeleported = 0;
    CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(Caster);
    if ( ((*(CurrentActiveAbility->_vptr_IHandleEntity + 251))(CurrentActiveAbility) & 0x40084) == 4 )
      CDOTA_BaseNPC::PrimeResumePreviousMovement(Caster);
    if ( CDOTABehaviorAbilityPhase::BeginCast(this, Caster) )
    {
      if ( (*(CurrentActiveAbility->_vptr_IHandleEntity + 300))(CurrentActiveAbility) == 0 )
        CDOTABaseAbility::SpeakAbilityConcept(CurrentActiveAbility, 4);
      (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, Caster, 0.0);
    }
    else
    {
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Cast failed.";
    }
  }
  else
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Caster is no longer the acting npc.";
  }
  return retstr;
}


// CDOTABehaviorAbilityPhase::BeginCast  (line 55, @0x0000000002874e90, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetAbilityData, GetAnimationIgnoresModelScale, GetCursorCastTarget, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetModelScaleAnimationRateMultiplier, GetModifier_Constant_Lowest, GetSequence, GetSerialNumber, IndexToIdentity, Invalidate, IsListeningToEvent, LookupEntity, NetworkStateChanged, Set, SetCastLock, SetInAbilityPhase, SetTarget, SetUnit, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<bool>, operator=<float>
// calls: CDOTA_BaseNPC::GetCurrentActiveAbility, FireModifierEvent, CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal, CDOTA_BaseNPC::GetCastPoint, CountdownTimer::Start, CDOTABody::IsAnimation, CBaseAnimating::SetCycle, CBaseAnimating::GetBaseAnimatingController, CDOTA_BaseNPC::StartAbilityAnimation, CDOTA_BaseNPC::UpdatePseudoQueuedOrder, CDOTABehaviorAbilityPhase::FireBeginCastEvent, CDOTABody::StartAnimation (15 total)
// callers: CDOTABehaviorAbilityPhase::OnStart, CDOTABehaviorAbilityPhase::Update
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTABehaviorAbilityPhase::BeginCast(CDOTABehaviorAbilityPhase *const this, CDOTA_BaseNPC *me)
{
  CDOTABaseAbility *CurrentActiveAbility; // rbx
  char v5; // r13
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  CEntityIdentity *v9; // rax
  __int16 v10; // cx
  uint32 m_Index; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  __int64 v14; // rax
  float v15; // xmm0_4
  unsigned int v16; // r15d
  double v17; // xmm0_8
  DOTAAbilityData_t *m_pAbilityData; // rax
  float v19; // xmm1_4
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v21; // eax
  float v22; // xmm1_4
  int v23; // eax
  float v24; // xmm1_4
  float v25; // xmm0_4
  CEntityIdentity *v26; // rdx
  __int16 v27; // cx
  CountdownTimer *p_m_backSwingTimer; // [rsp+0h] [rbp-F0h]
  float flAbilityTime; // [rsp+Ch] [rbp-E4h]
  CDOTABody *pBody; // [rsp+10h] [rbp-E0h]
  float flPlaybackRate; // [rsp+1Ch] [rbp-D4h]
  float flPlaybackRatea; // [rsp+1Ch] [rbp-D4h]
  CModifierParams params; // [rsp+30h] [rbp-C0h] BYREF

  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(me);
  v5 = (*(CurrentActiveAbility->_vptr_IHandleEntity + 264))(CurrentActiveAbility);
  if ( v5 != 0 )
  {
    if ( !CurrentActiveAbility->m_bInAbilityPhase.m_Value )
    {
      (*(CurrentActiveAbility->_vptr_IHandleEntity + 22))(CurrentActiveAbility, 817, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      CurrentActiveAbility->m_bInAbilityPhase.m_Value = 1;
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
        v8 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        params.hunit.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
      }
    }
    v9 = CurrentActiveAbility->m_pEntity;
    if ( v9 != 0 )
    {
      v10 = 0x7FFF;
      if ( v9->m_EHandle.m_Index != -1 )
        v10 = v9->m_EHandle.m_Index & 0x7FFF;
      params.ability.m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
    }
    m_Index = me->m_hCursorTarget.m_Index;
    if ( m_Index + 2 > 1
      && (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F]) != 0
      && (v13 = &v12[m_Index & 0x1FF]) != 0
      && m_Index == v13->m_EHandle.m_Index
      && v13->m_pInstance != 0
      && (v26 = v13->m_pInstance->m_pEntity) != 0 )
    {
      v27 = 0x7FFF;
      if ( v26->m_EHandle.m_Index != -1 )
        v27 = v26->m_EHandle.m_Index & 0x7FFF;
      params.htarget.m_Index = (((v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1)) << 15) | v27 & 0x7FFF;
    }
    else
    {
      params.htarget.m_Index = -1;
    }
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ABILITY_START, &params);
    v14 = me->m_ModifierManager.m_buffsForModifiers[79];
    if ( v14 == 0xFF )
    {
      flPlaybackRate = 0.0;
    }
    else if ( me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size <= 0 )
    {
      flPlaybackRate = 0.0;
    }
    else
    {
      flPlaybackRate = CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
                         &me->m_ModifierManager,
                         modifierfunction::MODIFIER_PROPERTY_CASTTIME_PERCENTAGE,
                         &CModifierParams::s_Default)
                     / 100.0;
    }
    flAbilityTime = CDOTA_BaseNPC::GetCastPoint(me, 0);
    if ( flAbilityTime <= 0.0 )
      v15 = -1.0;
    else
      v15 = flAbilityTime;
    CountdownTimer::Start(&this->m_abilityTimer, v15, -1.0);
    p_m_backSwingTimer = &this->m_backSwingTimer;
    if ( this->m_backSwingTimer.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_backSwingTimer._vptr_CountdownTimer + 2))(p_m_backSwingTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_backSwingTimer.m_timestamp.m_Value = -1.0;
    }
    pBody = (*(me->_vptr_IHandleEntity + 377))(me);
    v16 = (*(CurrentActiveAbility->_vptr_IHandleEntity + 234))(CurrentActiveAbility);
    if ( v16 == -1 )
    {
      CDOTABody::StartAnimation(pBody, 0x5DCu, 0, 1.0);
      v23 = (*(CurrentActiveAbility->_vptr_IHandleEntity + 251))(CurrentActiveAbility);
      v25 = 0.0;
      if ( (v23 & 0x8000000) == 0 )
        (*(CurrentActiveAbility->_vptr_IHandleEntity + 272))(CurrentActiveAbility, 0.0);
      CountdownTimer::Start(p_m_backSwingTimer, v25 + flAbilityTime, v24);
      goto LABEL_34;
    }
    v17 = (*(CurrentActiveAbility->_vptr_IHandleEntity + 213))(CurrentActiveAbility);
    m_pAbilityData = CurrentActiveAbility->m_pAbilityData;
    flPlaybackRatea = (flPlaybackRate + 1.0) * *&v17;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(CurrentActiveAbility, 0);
      m_pAbilityData = CurrentActiveAbility->m_pAbilityData;
    }
    if ( (*(m_pAbilityData + 377) & 0x40) != 0 )
      flPlaybackRatea = flPlaybackRatea / (1.0 / sqrt(CBaseAnimating::GetModelScale(me)));
    if ( CDOTABody::IsAnimation(pBody, v16) )
    {
      CBaseAnimating::SetCycle(me, 0.0, v19);
    }
    else if ( CDOTABody::StartAnimation(pBody, v16, 0, flPlaybackRatea).m_Data == -1 )
    {
      goto LABEL_34;
    }
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(me);
    v21.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
    CDOTA_BaseNPC::StartAbilityAnimation(me, v21, v22);
LABEL_34:
    me->m_bCastLocked = 1;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 1);
    CDOTABehaviorAbilityPhase::FireBeginCastEvent(this, me, CurrentActiveAbility);
  }
  return v5;
}


// CDOTABehaviorAbilityPhase::FireBeginCastEvent  (line 135, @0x0000000002874c70, libserver.so)  // inlines: CEntityHandle, CreateEvent, Get, GetAbilityName, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTAPlayer
// calls: CDOTABaseAbility::GetCursorTarget
// callers: CDOTABehaviorAbilityPhase::BeginCast
// strings: "dota_player_begin_cast", "<NoAbilityName>", "abilityname", "dota_non_player_begin_cast"
void __fastcall CDOTABehaviorAbilityPhase::FireBeginCastEvent(
        CDOTABehaviorAbilityPhase *const this,
        CDOTA_BaseNPC *me,
        CDOTABaseAbility *pCurrentAbility)
{
  unsigned __int16 v5; // dx
  int v6; // esi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CBaseEntity *CursorTarget; // rax
  CEntityInstance *m_pInstance; // r13
  CBaseEntity *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, char *, _QWORD); // r15
  unsigned int v16; // eax
  const char *v17; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax

  if ( me == 0
    || (*(me->_vptr_IHandleEntity + 408))(me) != 0
    || ((*(pCurrentAbility->_vptr_IHandleEntity + 251))(pCurrentAbility) & 0x100000) != 0 )
  {
    if ( me->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = me->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v6 = v5;
    }
    v7 = (me->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
    if ( v7 + 2 <= 1
      || (v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9]) == 0
      || (v9 = &v8[v6 & 0x1FF]) == 0
      || v7 != v9->m_EHandle.m_Index
      || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
      || (*(m_pInstance->_vptr_IHandleEntity + 140))(v9->m_pInstance) == 0 )
    {
      CursorTarget = CDOTABaseAbility::GetCursorTarget(pCurrentAbility);
      (*(pCurrentAbility->_vptr_IHandleEntity + 219))(pCurrentAbility, CursorTarget);
      return;
    }
    v12 = CDOTABaseAbility::GetCursorTarget(pCurrentAbility);
    if ( (*(pCurrentAbility->_vptr_IHandleEntity + 219))(pCurrentAbility, v12) == 0 )
    {
      v13 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_player_begin_cast", 0, 0);
      v14 = v13;
      if ( v13 != 0 )
      {
        v15 = *(*v13 + 112LL);
        v16 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
        v15(v14, "PlayerID", v16);
      }
      else
      {
        v14 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_non_player_begin_cast", 0, 0);
        if ( v14 == 0 )
          return;
      }
      v17 = "<NoAbilityName>";
      m_pAbilityData = pCurrentAbility->m_pAbilityData;
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v17 = m_pszAbilityName;
      }
      (*(*v14 + 136LL))(v14, "abilityname", v17);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v14, 1);
    }
  }
}


// CDOTABehaviorAbilityPhase::UpdateBackswing  (line 178, @0x00000000028709e0, libserver.so)  // inlines: ActionResult, Continue, Done, IActionResult, IsElapsed
// calls: CDOTA_BaseNPC::IsActionLocked, CountdownTimer::Now
// strings: "Backswing interrupted, action locked.", "Done with backswing."
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAbilityPhase::UpdateBackswing(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAbilityPhase *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  if ( CDOTA_BaseNPC::IsActionLocked(me) )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_reason = "Backswing interrupted, action locked.";
    retstr->m_action = 0;
    return retstr;
  }
  else if ( CountdownTimer::Now(&this->m_backSwingTimer) >= this->m_backSwingTimer.m_timestamp.m_Value )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_reason = "Done with backswing.";
    retstr->m_action = 0;
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


// CDOTABehaviorAbilityPhase::Update  (line 193, @0x0000000002875670, libserver.so)  // inlines: ActionResult, CEntityHandle, CHandle, CModifierParams, ChangeTo, Continue, Done, Get, GetCursorCastTarget, GetEHandle, GetEntryIndex, GetInstance, GetSequence, GetSerialNumber, IActionResult, IsElapsed, NetworkStateChanged, Reset, Set, SetCastLock, SetInAbilityPhase, SetTarget, SetTargetMovedOutOfRange, SetUnit, ToDOTABaseNPC, operator CBaseEntity*, operator=, operator=<bool>, operator=<float>
// calls: CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTABaseAbility::IsOwnersManaEnough, CDOTA_BaseNPC::IsActionLocked, CountdownTimer::Now, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_BaseNPC::IsInvisibleTo, CDOTA_BaseNPC::CanCastOn, CDOTA_BaseNPC::SetCurrentActiveAbility, CDOTA_BaseNPC::SetTargetLastKnownPosition, FireModifierEvent, CDOTA_BaseNPC::UpdatePseudoQueuedOrder (22 total)
// strings: "Ability phase cast interrupted.", "Current ability is NULL", "Ability phase interrupted, target is no longer valid or went out of range.", "No backswing.", "Cast restart failed.", "Cast Point reached. Performing CHANNEL Time"
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAbilityPhase::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAbilityPhase *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  CDOTABaseAbility *CurrentActiveAbility; // r14
  unsigned __int64 m_Value; // rax
  float v10; // xmm0_4
  CBaseEntity *v11; // rax
  CDOTA_BaseNPC *v12; // r15
  float v13; // xmm0_4
  CEntityInstance *v14; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v16; // edx
  __int16 v17; // si
  CEntityIdentity *v18; // rdx
  int v19; // ecx
  __int16 v20; // si
  CEntityIdentity *v21; // rax
  int v22; // edx
  __int16 v23; // cx
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v25; // eax
  __m128i v26; // xmm0
  float v27; // r15d
  float v28; // xmm1_4
  CDOTABehaviorAbilityChannel *v29; // r12
  float v30; // xmm1_4
  float v31; // xmm1_4
  CBaseEntity *flChannelTime; // [rsp+0h] [rbp-D0h]
  float flChannelTimea; // [rsp+0h] [rbp-D0h]
  bool bFoWVisible; // [rsp+Ch] [rbp-C4h]
  float bFoWVisiblea; // [rsp+Ch] [rbp-C4h]
  CModifierParams params; // [rsp+10h] [rbp-C0h] BYREF

  if ( this->m_bBackswinging )
  {
    (*(this->_vptr_INextBotEventResponder + 130))(interval);
    return retstr;
  }
  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(me);
  if ( CurrentActiveAbility == 0 )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Current ability is NULL";
    return retstr;
  }
  m_Value = me->m_nUnitState64.m_Value;
  if ( (m_Value & 8) != 0 )
  {
    if ( (*(CurrentActiveAbility->_vptr_IHandleEntity + 223))(CurrentActiveAbility) == 0 )
    {
LABEL_6:
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Ability phase cast interrupted.";
      return retstr;
    }
    m_Value = me->m_nUnitState64.m_Value;
  }
  if ( (m_Value & 0x10) != 0 && (*(CurrentActiveAbility->_vptr_IHandleEntity + 223))(CurrentActiveAbility) != 0
    || (*(CurrentActiveAbility->_vptr_IHandleEntity + 233))(CurrentActiveAbility) == 0
    || !CDOTABaseAbility::IsOwnersManaEnough(CurrentActiveAbility)
    || CurrentActiveAbility->m_bHidden.m_Value
    && (*(CurrentActiveAbility->_vptr_IHandleEntity + 218))(CurrentActiveAbility) == 0
    || (me->m_nUnitState64.m_Value & 1) != 0
    && ((*(CurrentActiveAbility->_vptr_IHandleEntity + 251))(CurrentActiveAbility) & 0x80000) != 0 )
  {
    goto LABEL_6;
  }
  if ( CDOTA_BaseNPC::IsActionLocked(me) )
  {
    if ( !this->m_bActionLocked )
    {
      this->m_bActionLocked = 1;
      if ( CurrentActiveAbility->m_bInAbilityPhase.m_Value )
      {
        (*(CurrentActiveAbility->_vptr_IHandleEntity + 22))(CurrentActiveAbility, 817, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        CurrentActiveAbility->m_bInAbilityPhase.m_Value = 0;
      }
      (*(CurrentActiveAbility->_vptr_IHandleEntity + 265))(CurrentActiveAbility);
      me->m_bCastLocked = 0;
      CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 1);
    }
    v10 = CountdownTimer::Now(&this->m_abilityTimer) + this->m_abilityTimer.m_duration.m_Value;
    if ( v10 != this->m_abilityTimer.m_timestamp.m_Value )
    {
      bFoWVisiblea = v10;
      (*(this->m_abilityTimer._vptr_CountdownTimer + 2))(&this->m_abilityTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_abilityTimer.m_timestamp.m_Value = bFoWVisiblea;
    }
LABEL_16:
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  if ( this->m_bActionLocked )
  {
    this->m_bActionLocked = 0;
    if ( !CDOTABehaviorAbilityPhase::BeginCast(this, me) )
    {
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Cast restart failed.";
      return retstr;
    }
  }
  if ( LODWORD(this->m_parent[1].m_behavior) != 2 )
    goto LABEL_39;
  params.ability.m_Index = me->m_hCursorTarget.m_Index;
  flChannelTime = CEntityHandle::operator CEntityInstance *(&params.ability);
  v11 = CEntityHandle::operator CEntityInstance *(&params.ability);
  v12 = v11;
  if ( v11 == 0 || !v11->m_bIsDOTANPC )
  {
    if ( !CDOTA_BaseNPC::CanCastOn(me, flChannelTime, CurrentActiveAbility) )
      goto LABEL_31;
    v12 = 0;
    goto LABEL_36;
  }
  bFoWVisible = CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, v11);
  if ( !CDOTA_BaseNPC::IsInvisibleTo(v12, me) )
  {
    if ( !CDOTA_BaseNPC::CanCastOn(me, flChannelTime, CurrentActiveAbility) || !bFoWVisible )
      goto LABEL_31;
LABEL_36:
    if ( this->m_bTargetTeleported )
      goto LABEL_31;
    v13 = (*(CurrentActiveAbility->_vptr_IHandleEntity + 226))(CurrentActiveAbility, &vec3_origin, v12);
    if ( v13 != 0.0 )
    {
      (*(CurrentActiveAbility->_vptr_IHandleEntity + 230))(CurrentActiveAbility, &vec3_origin, v12, v13);
      if ( !CDOTA_BaseNPC::IsEntityInRangeForCast(me, flChannelTime, v31) )
      {
        me->m_bTargetMovedOutOfRange = 1;
        goto LABEL_31;
      }
    }
    CDOTA_BaseNPC::SetTargetLastKnownPosition(me, flChannelTime);
LABEL_39:
    if ( CountdownTimer::Now(&this->m_abilityTimer) >= this->m_abilityTimer.m_timestamp.m_Value )
    {
      params.ability.m_Index = me->m_hCursorTarget.m_Index;
      v14 = CEntityHandle::operator CEntityInstance *(&params.ability);
      if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
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
          v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v17 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(params.hunit.m_Index) = v17 | params.hunit.m_Index & 0x8000;
          params.hunit.m_Index = (v16 << 15) | params.hunit.m_Index & 0x7FFF;
        }
        v18 = CurrentActiveAbility->m_pEntity;
        if ( v18 != 0 )
        {
          v19 = (v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1);
          v20 = 0x7FFF;
          if ( v18->m_EHandle.m_Index != -1 )
            v20 = v18->m_EHandle.m_Index & 0x7FFF;
          LOWORD(params.ability.m_Index) = v20 | params.ability.m_Index & 0x8000;
          params.ability.m_Index = (v19 << 15) | params.ability.m_Index & 0x7FFF;
        }
        v21 = v14->m_pEntity;
        if ( v21 != 0 )
        {
          v22 = (v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1);
          v23 = 0x7FFF;
          if ( v21->m_EHandle.m_Index != -1 )
            v23 = v21->m_EHandle.m_Index & 0x7FFF;
          LOWORD(params.htarget.m_Index) = v23 | params.htarget.m_Index & 0x8000;
          params.htarget.m_Index = (v22 << 15) | params.htarget.m_Index & 0x7FFF;
        }
        else
        {
          params.htarget.m_Index = -1;
        }
        FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_SPELL_TARGET_READY, &params);
      }
      if ( CurrentActiveAbility->m_bInAbilityPhase.m_Value )
      {
        (*(CurrentActiveAbility->_vptr_IHandleEntity + 22))(CurrentActiveAbility, 817, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        CurrentActiveAbility->m_bInAbilityPhase.m_Value = 0;
      }
      me->m_bCastLocked = 0;
      CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
      CDOTABaseAbility::CastAbility(CurrentActiveAbility);
      if ( (CurrentActiveAbility->m_pEntity->m_flags & 0x200) == 0 )
      {
        flChannelTimea = (*(CurrentActiveAbility->_vptr_IHandleEntity + 225))(CurrentActiveAbility);
        if ( flChannelTimea > 0.0 )
        {
          v29 = operator new(0x90u);
          CDOTABehaviorAbilityChannel::CDOTABehaviorAbilityChannel(
            v29,
            CurrentActiveAbility,
            LODWORD(flChannelTimea),
            v30);
          retstr->m_type = ActionResultType::CHANGE_TO;
          retstr->m_action = v29;
          retstr->m_reason = "Cast Point reached. Performing CHANNEL Time";
          return retstr;
        }
      }
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(me);
      v25.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
      *v26.m128i_i32 = CDOTA_BaseNPC::GetRemainingSequenceDuration(me, v25);
      v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
      if ( ((*(CurrentActiveAbility->_vptr_IHandleEntity + 251))(CurrentActiveAbility) & 0x8000000) != 0 )
        v27 = 0.0;
      this->m_bBackswinging = 1;
      CDOTA_BaseNPC::SetCurrentActiveAbility(me, 0);
      if ( this->m_backSwingTimer.m_timestamp.m_Value <= 0.0 )
        CountdownTimer::Start(&this->m_backSwingTimer, v27, v28);
      if ( CountdownTimer::Now(&this->m_backSwingTimer) >= this->m_backSwingTimer.m_timestamp.m_Value )
      {
        retstr->m_type = ActionResultType::DONE;
        retstr->m_action = 0;
        retstr->m_reason = "No backswing.";
        return retstr;
      }
    }
    goto LABEL_16;
  }
  CDOTA_BaseNPC::CanCastOn(me, flChannelTime, CurrentActiveAbility);
LABEL_31:
  if ( CurrentActiveAbility->m_bInAbilityPhase.m_Value )
  {
    (*(CurrentActiveAbility->_vptr_IHandleEntity + 22))(CurrentActiveAbility, 817, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CurrentActiveAbility->m_bInAbilityPhase.m_Value = 0;
  }
  (*(CurrentActiveAbility->_vptr_IHandleEntity + 265))(CurrentActiveAbility);
  CDOTA_BaseNPC::SetCurrentActiveAbility(me, 0);
  retstr->m_type = ActionResultType::DONE;
  retstr->m_action = 0;
  retstr->m_reason = "Ability phase interrupted, target is no longer valid or went out of range.";
  return retstr;
}


// CDOTABehaviorAbilityPhase::OnEnd  (line 355, @0x0000000002870f20, libserver.so)  // inlines: NetworkStateChanged, Set, SetCastLock, SetInAbilityPhase, operator=<bool>
// calls: CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_BaseNPC::UpdatePseudoQueuedOrder, CDOTA_BaseNPC::SetCurrentActiveAbility
void __fastcall CDOTABehaviorAbilityPhase::OnEnd(
        CDOTABehaviorAbilityPhase *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  CDOTABaseAbility *CurrentActiveAbility; // rax
  int (**vptr_IHandleEntity)(...); // rdx
  CDOTABaseAbility *pCurrentAbility; // [rsp+8h] [rbp-18h]

  if ( !this->m_bActionLocked )
  {
    CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(me);
    if ( CurrentActiveAbility != 0 && CurrentActiveAbility->m_bInAbilityPhase.m_Value )
    {
      pCurrentAbility = CurrentActiveAbility;
      (*(CurrentActiveAbility->_vptr_IHandleEntity + 22))(CurrentActiveAbility, 817, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      vptr_IHandleEntity = pCurrentAbility->_vptr_IHandleEntity;
      pCurrentAbility->m_bInAbilityPhase.m_Value = 0;
      vptr_IHandleEntity[265](pCurrentAbility);
    }
    me->m_bCastLocked = 0;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
  }
  CDOTA_BaseNPC::SetCurrentActiveAbility(me, 0);
}


// CDOTABehaviorAbilityPhase::OnUnitTeleported  (line 381, @0x00000000028718e0, libserver.so)  // inlines: CEntityHandle, CHandle, EventDesiredResult, Get, GetCursorCastTarget, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, LookupEntity, TryContinue, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAbilityPhase::OnUnitTeleported(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAbilityPhase *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  EventDesiredResult<CDOTA_BaseNPC> *result; // rax
  uint32 m_Index; // edx
  CConcreteEntityList *v7; // r9
  CEntityIdentity *v8; // rdi
  CEntityIdentity *v9; // rdi
  __int64 v10; // [rsp-8h] [rbp-8h]

  result = retstr;
  if ( bLongTeleport )
  {
    if ( LODWORD(this->m_parent[1].m_behavior) == 2 )
    {
      m_Index = me->m_hCursorTarget.m_Index;
      v7 = CEntityHandle::gm_pEntityList;
      *(&v10 - 4) = m_Index;
      if ( m_Index + 2 > 1 )
      {
        v8 = v7->m_pIdentityChunks[(*(&v10 - 8) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[*(&v10 - 2) & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && pUnit == v9->m_pInstance && v9->m_pInstance != 0 )
            this->m_bTargetTeleported = 1;
        }
      }
    }
    result->m_type = ActionResultType::CONTINUE;
    result->m_action = 0;
    result->m_reason = 0;
    result->m_priority = EventResultPriorityType::RESULT_TRY;
  }
  else
  {
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  }
  return result;
}


