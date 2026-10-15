
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorNeutralAggro::CDOTABehaviorNeutralAggro  (line 8, @0x00000000028909d0, libserver.so)  // inlines: Action, EventDesiredResult, IActionResult
// calls: CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume
// callers: CDOTABehaviorNeutralHome::Update
void __fastcall CDOTABehaviorNeutralAggro::CDOTABehaviorNeutralAggro(
        CDOTABehaviorNeutralAggro *const this,
        bool bNoLeashTime,
        bool bShortLeashTime,
        double a4,
        float a5)
{
  CountdownTimer *p_m_LeashTimer; // rdi

  p_m_LeashTimer = &this->m_LeashTimer;
  p_m_LeashTimer[-5]._vptr_CountdownTimer = &off_42C48F0;
  *&p_m_LeashTimer[-5].m_duration.m_Value = &off_42C4D10;
  *&p_m_LeashTimer[-3].m_bUseGlobalsTime = 0;
  p_m_LeashTimer[-2]._vptr_CountdownTimer = 0;
  *&p_m_LeashTimer[-2].m_duration.m_Value = 0;
  p_m_LeashTimer[-4]._vptr_CountdownTimer = 0;
  *&p_m_LeashTimer[-4].m_duration.m_Value = 0;
  *&p_m_LeashTimer[-4].m_bUseGlobalsTime = 0;
  p_m_LeashTimer[-3]._vptr_CountdownTimer = 0;
  *&p_m_LeashTimer[-3].m_duration.m_Value = 0;
  *&p_m_LeashTimer[-5].m_bUseGlobalsTime = 0;
  LOBYTE(p_m_LeashTimer[-1]._vptr_CountdownTimer) = 0;
  BYTE1(p_m_LeashTimer[-1]._vptr_CountdownTimer) = 0;
  *&p_m_LeashTimer[-2].m_bUseGlobalsTime = 0;
  *(&p_m_LeashTimer[-1]._vptr_CountdownTimer + 4) = a4;
  p_m_LeashTimer[-1].m_timestamp.m_Value = a5;
  p_m_LeashTimer[-1].m_bUseGlobalsTime = bNoLeashTime;
  *(&p_m_LeashTimer[-1].m_bUseGlobalsTime + 1) = bShortLeashTime;
  CountdownTimer::CountdownTimer(p_m_LeashTimer);
  CountdownTimer::CountdownTimer(&this->m_FleeAgainTimer);
}


// CDOTABehaviorNeutralAggro::InitialContainedAction  (line 16, @0x0000000002891540, libserver.so)
// calls: operator new, CDOTABehaviorNeutralAggroReturn::CDOTABehaviorNeutralAggroReturn, operator delete, _Unwind_Resume
Action<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralAggro::InitialContainedAction(
        CDOTABehaviorNeutralAggro *const this,
        CDOTA_BaseNPC *me)
{
  CDOTABehaviorNeutralAggroReturn *v2; // rbx
  Vector m_vHomePosition; // 0:^0.12

  m_vHomePosition = this->m_vHomePosition;
  v2 = operator new(0x160u);
  CDOTABehaviorNeutralAggroReturn::CDOTABehaviorNeutralAggroReturn(v2, *&m_vHomePosition.x, m_vHomePosition.z);
  return v2;
}


// CDOTABehaviorNeutralAggro::Update  (line 23, @0x000000000288dd00, libserver.so)  // inlines: ActionResult, Continue, Done, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, IActionResult, IndexToIdentity, Invalidate, IsElapsed, IsValid, Length2D, LookupEntity, NetworkStateChanged, Set, SetWantsToFlee, Start, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=<float>
// calls: CBaseEntity::GetAbsOrigin, CountdownTimer::Now, CountdownTimer::Start
// strings: "Outside home range for too long", "Child has completed", "Need to check if we want to flee again"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralAggro::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralAggro *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  const Vector *AbsOrigin; // rax
  float v8; // xmm1_4
  CountdownTimer *p_m_FleeAgainTimer; // rdi
  CountdownTimer *p_m_LeashTimer; // r14
  uint32 m_Index; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  int m_iLeashType; // eax
  int v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // [rsp+8h] [rbp-28h]
  float v21; // [rsp+Ch] [rbp-24h]
  float v22; // [rsp+Ch] [rbp-24h]

  if ( this->m_child == 0 )
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_action = 0;
    retstr->m_reason = "Child has completed";
    return retstr;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v8 = (this->m_vHomePosition.y - AbsOrigin->y) * (this->m_vHomePosition.y - AbsOrigin->y);
  if ( fsqrt(((this->m_vHomePosition.x - AbsOrigin->x) * (this->m_vHomePosition.x - AbsOrigin->x)) + v8) > 400.0 )
  {
    me->m_bWantsToFlee = 0;
    p_m_LeashTimer = &this->m_LeashTimer;
    if ( this->m_LeashTimer.m_timestamp.m_Value <= 0.0 )
    {
      m_iLeashType = me->m_iLeashType;
      if ( m_iLeashType == 1 )
      {
        *&v16 = 2.0999999;
      }
      else if ( m_iLeashType == 2 )
      {
        *&v16 = 4.5999999;
      }
      else
      {
        *&v16 = 4.0;
      }
      if ( this->m_bShortLeashTime )
        *&v16 = 3.0;
      p_m_LeashTimer = &this->m_LeashTimer;
      v21 = *&v16;
      v17 = CountdownTimer::Now(&this->m_LeashTimer);
      v18 = v21;
      v19 = v17 + v21;
      if ( v19 != this->m_LeashTimer.m_timestamp.m_Value )
      {
        v20 = v19;
        (*(this->m_LeashTimer._vptr_CountdownTimer + 2))(&this->m_LeashTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v18 = v21;
        this->m_LeashTimer.m_timestamp.m_Value = v20;
      }
      if ( v18 != this->m_LeashTimer.m_duration.m_Value )
      {
        v22 = v18;
        (*(this->m_LeashTimer._vptr_CountdownTimer + 2))(&this->m_LeashTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_LeashTimer.m_duration.m_Value = v22;
      }
    }
    if ( CountdownTimer::Now(p_m_LeashTimer) >= this->m_LeashTimer.m_timestamp.m_Value || this->m_bNoLeashTime )
    {
      m_Index = me->m_hForceAttackTarget.m_Index;
      if ( m_Index + 2 <= 1
        || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hForceAttackTarget.m_Index) >> 9)
                                                                 & 0x3F]) == 0
        || (v13 = &v12[me->m_hForceAttackTarget.m_Index & 0x1FF]) == 0
        || m_Index != v13->m_EHandle.m_Index
        || v13->m_pInstance == 0
        || BYTE3(v13->m_pInstance[7]._vptr_IHandleEntity) == 0 )
      {
        retstr->m_type = ActionResultType::DONE;
        retstr->m_reason = "Outside home range for too long";
        retstr->m_action = 0;
        return retstr;
      }
    }
    goto LABEL_18;
  }
  if ( this->m_bShortLeashTime )
  {
    p_m_FleeAgainTimer = &this->m_FleeAgainTimer;
    if ( this->m_FleeAgainTimer.m_timestamp.m_Value > 0.0 )
    {
      if ( CountdownTimer::Now(p_m_FleeAgainTimer) < this->m_FleeAgainTimer.m_timestamp.m_Value )
        goto LABEL_6;
      retstr->m_type = ActionResultType::DONE;
      retstr->m_action = 0;
      retstr->m_reason = "Need to check if we want to flee again";
      return retstr;
    }
    CountdownTimer::Start(p_m_FleeAgainTimer, 3.0, v8);
  }
LABEL_6:
  if ( this->m_LeashTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_LeashTimer._vptr_CountdownTimer + 2))(&this->m_LeashTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_LeashTimer.m_timestamp.m_Value = -1.0;
  }
LABEL_18:
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


