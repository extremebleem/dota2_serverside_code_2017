
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorAbilityChannel::CDOTABehaviorAbilityChannel  (line 10, @0x00000000028748a0, libserver.so)  // inlines: Action, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=
// calls: CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume
// callers: CDOTABehaviorAbilityPhase::Update
void __fastcall CDOTABehaviorAbilityChannel::CDOTABehaviorAbilityChannel(
        CDOTABehaviorAbilityChannel *const this,
        CDOTABaseAbility *pAbility,
        __m128i a3,
        float flTime)
{
  float v4; // r14d
  CountdownTimer *p_m_timer; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  p_m_timer = &this->m_timer;
  *&p_m_timer[-5].m_bUseGlobalsTime = &off_42BA590;
  p_m_timer[-2].m_duration.m_Value = 0.0;
  *&p_m_timer[-2].m_bUseGlobalsTime = 0;
  p_m_timer[-1]._vptr_CountdownTimer = 0;
  *&p_m_timer[-4].m_bUseGlobalsTime = 0;
  p_m_timer[-3]._vptr_CountdownTimer = 0;
  *&p_m_timer[-3].m_duration.m_Value = 0;
  *&p_m_timer[-3].m_bUseGlobalsTime = 0;
  p_m_timer[-2]._vptr_CountdownTimer = 0;
  *&p_m_timer[-4].m_duration.m_Value = 0;
  p_m_timer[-1].m_bUseGlobalsTime = 0;
  *(&p_m_timer[-1].m_bUseGlobalsTime + 1) = 0;
  p_m_timer[-1].m_duration.m_Value = 0.0;
  p_m_timer[-4]._vptr_CountdownTimer = &off_42BA9B0;
  CountdownTimer::CountdownTimer(p_m_timer);
  this->m_hAbility.m_Index = -1;
  this->m_hTarget.m_Index = -1;
  this->m_flAbilityChannelDuration = v4;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v10 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v9 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
  this->m_bInterrupted = 0;
}


// CDOTABehaviorAbilityChannel::OnStart  (line 20, @0x0000000002872d70, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetCursorCastTarget, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, Start, operator CEntityInstance*, operator=, operator=<float>
// calls: CDOTA_BaseNPC::SetCurrentActiveAbility, CDOTA_BaseNPC::GetCurrentActiveAbility, CountdownTimer::Now, CDOTABody::StartAnimation, CDOTABaseAbility::SetChanneling
// globals: CEntityHandle::gm_pEntityList, jpt_2872F43
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAbilityChannel::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAbilityChannel *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CDOTABaseAbility *m_pInstance; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTABaseAbility *CurrentActiveAbility; // r13
  double v12; // xmm0_8
  double v13; // xmm1_8
  double v14; // xmm2_8
  unsigned int v15; // r15d
  CDOTABody *v16; // rax
  float v18; // [rsp+8h] [rbp-38h]
  float m_flAbilityChannelDuration; // [rsp+Ch] [rbp-34h]

  m_Index = this->m_hAbility.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hAbility.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  CDOTA_BaseNPC::SetCurrentActiveAbility(me, m_pInstance);
  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(me);
  m_flAbilityChannelDuration = this->m_flAbilityChannelDuration;
  *&v12 = CountdownTimer::Now(&this->m_timer) + m_flAbilityChannelDuration;
  if ( *&v12 != this->m_timer.m_timestamp.m_Value )
  {
    v18 = *&v12;
    (*(this->m_timer._vptr_CountdownTimer + 2))(&this->m_timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v12 = LODWORD(v18);
    this->m_timer.m_timestamp.m_Value = v18;
  }
  *&v14 = LODWORD(m_flAbilityChannelDuration);
  if ( m_flAbilityChannelDuration != this->m_timer.m_duration.m_Value )
  {
    (*(this->m_timer._vptr_CountdownTimer + 2))(
      &this->m_timer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v12,
      v13,
      m_flAbilityChannelDuration);
    this->m_timer.m_duration.m_Value = m_flAbilityChannelDuration;
  }
  v15 = (*(CurrentActiveAbility->_vptr_IHandleEntity + 235))(CurrentActiveAbility, v12, v13, v14);
  if ( v15 == -1 )
  {
    switch ( CurrentActiveAbility->m_iAbilityIndex )
    {
      case 0:
        v15 = 1520;
        goto LABEL_11;
      case 1:
        v15 = 1521;
        goto LABEL_11;
      case 2:
        v15 = 1522;
        goto LABEL_11;
      case 3:
        v15 = 1523;
        goto LABEL_11;
      case 4:
        v15 = 1524;
        goto LABEL_11;
      case 5:
        v15 = 1525;
        goto LABEL_11;
      case 6:
        v15 = 1600;
        goto LABEL_11;
      default:
        break;
    }
  }
  else
  {
LABEL_11:
    v16 = (*(me->_vptr_IHandleEntity + 377))(me);
    CDOTABody::StartAnimation(v16, v15, 0, 1.0);
  }
  CDOTABaseAbility::SetChanneling(CurrentActiveAbility, 1);
  if ( LODWORD(this->m_parent[1].m_behavior) == 2 )
    this->m_hTarget.m_Index = me->m_hCursorTarget.m_Index;
  (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0);
  return retstr;
}


// CDOTABehaviorAbilityChannel::Update  (line 63, @0x00000000028739a0, libserver.so)  // inlines: ActionResult, Continue, Done, Get, GetInstance, IActionResult, IsElapsed, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::IsActionLocked, CountdownTimer::Now, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::CanCastOn
// strings: "Caster is no longer the acting npc.", "Current ability is NULL", "Channel phase interrupted.", "Channel Target went invalid."
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAbilityChannel::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAbilityChannel *const this,
        CDOTA_BaseNPC *me,
        __m128i interval)
{
  unsigned int v4; // r15d
  CDOTABaseAbility *CurrentActiveAbility; // rax
  CDOTABaseAbility *v9; // r12
  unsigned __int64 m_Value; // rax
  CEntityInstance *v12; // rax
  CBaseEntity *v13; // r14

  v4 = _mm_cvtsi128_si32(interval);
  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(me);
  v9 = CurrentActiveAbility;
  if ( CurrentActiveAbility == 0 )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Current ability is NULL";
    return retstr;
  }
  if ( me != CDOTABaseAbility::GetCaster(CurrentActiveAbility) )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Caster is no longer the acting npc.";
    return retstr;
  }
  m_Value = me->m_nUnitState64.m_Value;
  if ( (m_Value & 8) != 0 )
  {
    if ( (*(v9->_vptr_IHandleEntity + 223))(v9) == 0 )
    {
LABEL_9:
      this->m_bInterrupted = 1;
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Channel phase interrupted.";
      return retstr;
    }
    m_Value = me->m_nUnitState64.m_Value;
  }
  if ( (m_Value & 0x10) != 0 && (*(v9->_vptr_IHandleEntity + 223))(v9) != 0
    || (*(v9->_vptr_IHandleEntity + 233))(v9) == 0
    || CDOTA_BaseNPC::IsActionLocked(me) )
  {
    goto LABEL_9;
  }
  if ( CountdownTimer::Now(&this->m_timer) >= this->m_timer.m_timestamp.m_Value )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
  }
  else
  {
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    v13 = v12;
    if ( v12 == 0
      || BYTE3(v12[7]._vptr_IHandleEntity) == 0
      || ((*(v9->_vptr_IHandleEntity + 251))(v9) & 0x20000000) != 0
      || CDOTA_BaseNPC::CanCastOn(me, v13, v9) )
    {
      (*(v9->_vptr_IHandleEntity + 296))(v9, *_mm_cvtsi32_si128(v4).m128i_i64);
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
    }
    else
    {
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Channel Target went invalid.";
    }
  }
  return retstr;
}


// CDOTABehaviorAbilityChannel::OnEnd  (line 101, @0x0000000002870770, libserver.so)  // inlines: InState, IsElapsed, IsStunned
// calls: CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_BaseNPC::GatherStates, CDOTABaseAbility::EndChannel, CDOTA_BaseNPC::SetCurrentActiveAbility, CDOTA_BaseNPC::ClearPseudoQueuedOrder, CDOTA_BaseNPC::ClearQueuedOrders, CountdownTimer::Now
void __fastcall CDOTABehaviorAbilityChannel::OnEnd(
        CDOTABehaviorAbilityChannel *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  CDOTABaseAbility *CurrentActiveAbility; // r13
  bool v7; // r12

  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(me);
  CDOTA_BaseNPC::GatherStates(me);
  v7 = this->m_bInterrupted
    || CountdownTimer::Now(&this->m_timer) < this->m_timer.m_timestamp.m_Value
    || (me->m_nUnitState64.m_Value & 0x20) != 0;
  if ( CurrentActiveAbility != 0 )
    CDOTABaseAbility::EndChannel(CurrentActiveAbility, v7);
  CDOTA_BaseNPC::SetCurrentActiveAbility(me, 0);
  if ( v7 )
  {
    CDOTA_BaseNPC::ClearQueuedOrders(me);
    CDOTA_BaseNPC::ClearPseudoQueuedOrder(me);
  }
  if ( me->m_PseudoQueuedOrders.m_nOrderType != 0 && nextAction != 0 )
    CDOTA_BaseNPC::ClearPseudoQueuedOrder(me);
}


