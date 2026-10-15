
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorDie::OnStart  (line 9, @0x000000000288d4f0, libserver.so)  // inlines: GetSequence, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTA_BaseNPC::ClearQueuedOrders, CDOTA_BaseNPC::ClearPseudoQueuedOrder, CDOTABody::StartAnimation, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::SequenceDuration, CountdownTimer::Now
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorDie::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorDie *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  CDOTABody *v7; // rax
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v9; // eax
  double v10; // xmm0_8
  double v11; // xmm1_8
  __int64 v12; // rax
  float v14; // [rsp+8h] [rbp-28h]
  float flAnimTime; // [rsp+Ch] [rbp-24h]

  CDOTA_BaseNPC::ClearQueuedOrders(me);
  CDOTA_BaseNPC::ClearPseudoQueuedOrder(me);
  v7 = (*(me->_vptr_IHandleEntity + 377))(me);
  if ( CDOTABody::StartAnimation(v7, 0x5E2u, 0, 1.0).m_Data == -1 )
  {
    flAnimTime = 2.0;
  }
  else
  {
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(me);
    v9.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
    flAnimTime = CBaseAnimating::SequenceDuration(me, v9);
  }
  *&v10 = CountdownTimer::Now(&this->m_timer) + flAnimTime;
  if ( *&v10 != this->m_timer.m_timestamp.m_Value )
  {
    v14 = *&v10;
    (*(this->m_timer._vptr_CountdownTimer + 2))(&this->m_timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v10 = LODWORD(v14);
    this->m_timer.m_timestamp.m_Value = v14;
  }
  *&v11 = LODWORD(flAnimTime);
  if ( flAnimTime != this->m_timer.m_duration.m_Value )
  {
    (*(this->m_timer._vptr_CountdownTimer + 2))(&this->m_timer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v10, flAnimTime);
    this->m_timer.m_duration.m_Value = flAnimTime;
  }
  v12 = (*(me->_vptr_IHandleEntity + 376))(me, v10, v11);
  (*(*v12 + 616LL))(v12);
  (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0);
  return retstr;
}


// CDOTABehaviorDie::Update  (line 27, @0x000000000288cb30, libserver.so)  // inlines: ActionResult, Continue, IActionResult, Invalidate, IsElapsed, NetworkStateChanged, Set, operator=<float>
// calls: CountdownTimer::Now
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorDie::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorDie *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  CountdownTimer *p_m_timer; // r14

  if ( this->m_timer.m_timestamp.m_Value > 0.0 )
  {
    p_m_timer = &this->m_timer;
    if ( CountdownTimer::Now(&this->m_timer) >= this->m_timer.m_timestamp.m_Value )
    {
      (*(me->_vptr_IHandleEntity + 387))(me);
      if ( this->m_timer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_timer._vptr_CountdownTimer + 2))(p_m_timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
        this->m_timer.m_timestamp.m_Value = -1.0;
      }
    }
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


