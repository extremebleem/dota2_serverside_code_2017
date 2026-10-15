
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorNeutralHome::CDOTABehaviorNeutralHome  (line 9, @0x0000000002891340, libserver.so)  // inlines: Action, CDOTABehaviorMoveTo, EventDesiredResult, IActionResult, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehavior::InitialContainedAction
void __fastcall CDOTABehaviorNeutralHome::CDOTABehaviorNeutralHome(CDOTABehaviorNeutralHome *const this)
{
  this->_vptr_INextBotEventResponder = &off_42C5250;
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->_vptr_IContextualQuery = &off_42C5680;
  this->_vptr_IDOTABehaviorMoveTo = &off_42C56E8;
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
  this->m_bHomePositionSet = 0;
}


// CDOTABehaviorNeutralHome::OnStart  (line 15, @0x000000000288c8e0, libserver.so)  // inlines: ActionResult, Continue, IActionResult, Invalidate, NetworkStateChanged, OnStart, Set, SetCamped, operator=<float>
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralHome::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralHome *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  ActionResult<CDOTA_BaseNPC> *result; // rax
  bool v7; // zf
  ActionResult<CDOTA_BaseNPC> *v9; // [rsp+8h] [rbp-18h]

  result = retstr;
  this->m_MoveTo.m_bSetAnimation = 1;
  if ( this->m_MoveTo.m_repathTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_MoveTo.m_repathTimer._vptr_CountdownTimer + 2))(
      &this->m_MoveTo.m_repathTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      -1.0);
    result = retstr;
    this->m_MoveTo.m_repathTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_MoveTo.m_bUseSwimAnimations = 0;
  this->m_MoveTo.m_nRunActivity = 1502;
  this->m_MoveTo.m_flTargetDist = 0.0;
  this->m_MoveTo.m_bIsDirectional = 0;
  v7 = me->m_iIsControllableByPlayer64.m_Value == 0;
  me->m_bIsCamped = 1;
  if ( v7 )
  {
    result->m_type = ActionResultType::CONTINUE;
    result->m_action = 0;
    result->m_reason = 0;
  }
  else
  {
    v9 = result;
    (*(this->_vptr_INextBotEventResponder + 66))(result, this, me);
    return v9;
  }
  return result;
}


// CDOTABehaviorNeutralHome::Update  (line 24, @0x0000000002890aa0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, CEntityHandle, CHandle, ClearAlertTarget, Continue, Dot, DotProduct, EventDesiredResult, FastSqrt, Get, GetAlertTarget, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInitialGoalPosition, GetInstance, IActionResult, IndexToIdentity, IsElapsed, IsValid, Length2D, LookupEntity, Set, SetCamped, SetInitialGoalPosition, SuspendFor, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=, operator==, ~CDOTABehaviorCommandListener
// calls: CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::SetReturningHome, CountdownTimer::Now, CDOTABody::StartAnimation, CDOTA_BaseNPC::GetAttackRange, CGridNav::DestroyTreesAroundPoint, CDOTABehaviorMoveTo::Update, operator new, CountdownTimer::CountdownTimer, CDOTABehaviorNeutralAggro::CDOTABehaviorNeutralAggro, CDOTA_BaseNPC::FindWakingEnemy, CDOTA_BaseNPC::AlertNearbyUnits (16 total)
// strings: "Aggroed by wanting to flee", "Aggroed by enemy proximity", "Aggroed by force attack target", "Aggroed by call to help"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralHome::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralHome *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  const Vector *AbsOrigin; // rax
  float v8; // xmm0_4
  float x; // xmm1_4
  float y; // xmm2_4
  float z; // xmm3_4
  bool v12; // zf
  __m128i x_low; // xmm5
  float v14; // r14d
  const Vector *v15; // rax
  vec_t v16; // xmm1_4
  vec_t v17; // xmm3_4
  uint32 m_Index; // eax
  bool v19; // r14
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  float v22; // xmm1_4
  CDOTA_BaseNPC *m_pInstance; // rsi
  float v24; // xmm0_4
  float v25; // xmm1_4
  uint32 v26; // eax
  CEntityIdentity *v27; // rdx
  __int64 v28; // rcx
  CEntityIdentity *v29; // rdx
  CDOTABody *v30; // rax
  unsigned int v31; // r14d
  float v32; // xmm3_4
  char *v34; // r12
  const Vector *v35; // rax
  vec_t v36; // xmm3_4
  vec_t v37; // xmm2_4
  vec_t v38; // xmm1_4
  CDOTABehaviorNeutralAggro *v39; // r12
  CDOTA_BaseNPC *WakingEnemy; // rax
  CDOTABehaviorNeutralAggro *v41; // r12
  const Vector *v42; // rax
  float v43; // xmm0_4
  __int64 v44; // rax
  CDOTABehaviorNeutralAggro *v45; // r12
  bool CanAutoAttackTarget; // al
  CDOTABehaviorNeutralAggro *v47; // r12
  float v48; // [rsp+0h] [rbp-90h]
  float v49; // [rsp+1Ch] [rbp-74h]
  float flRangec; // [rsp+20h] [rbp-70h]
  float flRange; // [rsp+20h] [rbp-70h]
  float flRangea; // [rsp+20h] [rbp-70h]
  float flRanged; // [rsp+20h] [rbp-70h]
  float flRangee; // [rsp+20h] [rbp-70h]
  float flRangeb; // [rsp+20h] [rbp-70h]
  double v56; // [rsp+30h] [rbp-60h]
  float v57; // [rsp+38h] [rbp-58h]
  double v58; // [rsp+40h] [rbp-50h]
  float v59; // [rsp+48h] [rbp-48h]
  double v60; // [rsp+50h] [rbp-40h]
  float v61; // [rsp+58h] [rbp-38h]
  Vector vForward; // [rsp+60h] [rbp-30h] BYREF
  Vector v63; // 0:xmm0_8.8,8:xmm1_4.4

  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v8 = fsqrt(
         ((this->m_vHomePosition.x - AbsOrigin->x) * (this->m_vHomePosition.x - AbsOrigin->x))
       + ((this->m_vHomePosition.y - AbsOrigin->y) * (this->m_vHomePosition.y - AbsOrigin->y)));
  if ( (me->m_nUnitState64.m_Value & 0x20000000) != 0 )
  {
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
    this->m_eventResult.m_type = ActionResultType::CONTINUE;
    this->m_eventResult.m_action = 0;
    this->m_eventResult.m_reason = 0;
    this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
    retstr->m_action = v34;
    retstr->m_reason = "Dominated";
    retstr->m_type = ActionResultType::SUSPEND_FOR;
    return retstr;
  }
  if ( me->m_bIsWaitingToSpawn.m_Value )
    goto LABEL_26;
  if ( !this->m_bHomePositionSet )
  {
    this->m_bHomePositionSet = 1;
    x = me->m_vInitialGoalPosition.x;
    y = me->m_vInitialGoalPosition.y;
    z = me->m_vInitialGoalPosition.z;
    this->m_vHomePosition.x = x;
    v12 = x == vec3_origin.x;
    this->m_vHomePosition.y = y;
    this->m_vHomePosition.z = z;
    if ( v12 && y == vec3_origin.y && z == vec3_origin.z )
    {
      flRangee = v8;
      v35 = CBaseEntity::GetAbsOrigin(me);
      v8 = flRangee;
      v36 = v35->x;
      this->m_vHomePosition.x = v35->x;
      v37 = v35->y;
      this->m_vHomePosition.y = v37;
      v38 = v35->z;
      this->m_vHomePosition.z = v38;
      me->m_vInitialGoalPosition.x = v36;
      me->m_vInitialGoalPosition.y = v37;
      me->m_vInitialGoalPosition.z = v38;
    }
    v48 = v8;
    (*(me->_vptr_IHandleEntity + 61))(me, &vForward, 0, 0);
    x_low = LODWORD(vForward.x);
    *x_low.m128i_i32 = vForward.x * 100.0;
    v14 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v49 = vForward.y * 100.0;
    flRangec = 100.0 * vForward.z;
    v15 = CBaseEntity::GetAbsOrigin(me);
    v16 = flRangec + v15->z;
    v17 = v14 + v15->x;
    v8 = v48;
    this->m_vHomeFacing.y = v49 + v15->y;
    this->m_vHomeFacing.z = v16;
    this->m_vHomeFacing.x = v17;
  }
  m_Index = me->m_hForceAttackTarget.m_Index;
  v19 = v8 <= 400.0;
  if ( m_Index + 2 <= 1
    || (v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hForceAttackTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v21 = &v20[me->m_hForceAttackTarget.m_Index & 0x1FF]) == 0
    || m_Index != v21->m_EHandle.m_Index
    || v21->m_pInstance == 0
    || BYTE3(v21->m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    if ( me->m_bWantsToFlee )
    {
      v58 = *&this->m_vHomePosition.x;
      v59 = this->m_vHomePosition.z;
      v39 = operator new(0xA8u);
      CDOTABehaviorNeutralAggro::CDOTABehaviorNeutralAggro(v39, 0, 1, v58, v59);
      this->m_eventResult.m_type = ActionResultType::CONTINUE;
      this->m_eventResult.m_action = 0;
      this->m_eventResult.m_reason = 0;
      this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
      retstr->m_type = ActionResultType::SUSPEND_FOR;
      retstr->m_action = v39;
      retstr->m_reason = "Aggroed by wanting to flee";
      return retstr;
    }
    if ( v8 > 400.0 )
    {
      me->m_bIsCamped = 0;
      CDOTA_BaseNPC::SetReturningHome(me, 1);
      if ( (me->m_iUnitType & 0x800) != 0 )
      {
        v31 = (*(me->_vptr_IHandleEntity + 414))(me);
        flRanged = CDOTA_BaseNPC::GetAttackRange(me);
        v63 = *CBaseEntity::GetAbsOrigin(me);
        CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v31, v63, flRanged, v32);
      }
      me->m_hAlertTarget.m_Index = -1;
    }
    else
    {
      flRange = v8;
      if ( (me->m_nObstructionProperties & 1) != 0 )
      {
        me->m_bIsCamped = 0;
        CDOTA_BaseNPC::SetReturningHome(me, 1);
        v22 = flRange;
      }
      else
      {
        me->m_bIsCamped = 1;
        CDOTA_BaseNPC::SetReturningHome(me, 0);
        WakingEnemy = CDOTA_BaseNPC::FindWakingEnemy(me, flRange);
        v22 = flRange;
        if ( WakingEnemy != 0 )
        {
          vForward.x = NAN;
          CDOTA_BaseNPC::AlertNearbyUnits(me, WakingEnemy, &vForward);
          v60 = *&this->m_vHomePosition.x;
          v61 = this->m_vHomePosition.z;
          v41 = operator new(0xA8u);
          CDOTABehaviorNeutralAggro::CDOTABehaviorNeutralAggro(v41, 0, 0, v60, v61);
          this->m_eventResult.m_type = ActionResultType::CONTINUE;
          this->m_eventResult.m_action = 0;
          this->m_eventResult.m_reason = 0;
          this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
          retstr->m_type = ActionResultType::SUSPEND_FOR;
          retstr->m_action = v41;
          retstr->m_reason = "Aggroed by enemy proximity";
          return retstr;
        }
      }
      flRangea = v22;
      v24 = CountdownTimer::Now(&me->m_AlertTimer);
      v25 = flRangea;
      if ( v24 < me->m_AlertTimer.m_timestamp.m_Value )
      {
        v26 = me->m_hAlertTarget.m_Index;
        m_pInstance = CEntityHandle::gm_pEntityList;
        if ( v26 + 2 > 1 )
        {
          v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(me->m_hAlertTarget.m_Index) >> 9) & 0x3F];
          if ( v27 != 0 )
          {
            v28 = me->m_hAlertTarget.m_Index & 0x1FF;
            m_pInstance = (8 * v28);
            v29 = &v27[v28];
            if ( v29 != 0 && v26 == v29->m_EHandle.m_Index )
            {
              m_pInstance = v29->m_pInstance;
              if ( v29->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                CanAutoAttackTarget = CDOTA_BaseNPC::CanAutoAttackTarget(me, m_pInstance, 0);
                v25 = flRangea;
                if ( CanAutoAttackTarget )
                {
                  vForward = this->m_vHomePosition;
                  v47 = operator new(0xA8u);
                  CDOTABehaviorNeutralAggro::CDOTABehaviorNeutralAggro(v47, 0, 0, *&vForward.x, vForward.z);
                  this->m_eventResult.m_type = ActionResultType::CONTINUE;
                  this->m_eventResult.m_action = 0;
                  this->m_eventResult.m_reason = 0;
                  this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
                  retstr->m_type = ActionResultType::SUSPEND_FOR;
                  retstr->m_action = v47;
                  retstr->m_reason = "Aggroed by call to help";
                  return retstr;
                }
              }
            }
          }
        }
      }
      if ( v25 < 50.0 )
      {
        flRangeb = v25;
        CDOTA_BaseNPC::SetReturningHome(me, 0);
        (*(me->_vptr_IHandleEntity + 61))(me, &vForward, 0, 0);
        v42 = CBaseEntity::GetAbsOrigin(me);
        v25 = flRangeb;
        v43 = (((this->m_vHomeFacing.x - v42->x) * (vForward.x * 10.0))
             + ((this->m_vHomeFacing.y - v42->y) * (vForward.y * 10.0)))
            + ((this->m_vHomeFacing.z - v42->z) * (10.0 * vForward.z));
        if ( v43 <= 0.0 )
        {
          v44 = (*(me->_vptr_IHandleEntity + 376))(me, v43, flRangeb);
          (*(*v44 + 744LL))(v44, &this->m_vHomeFacing);
          v25 = flRangeb;
        }
      }
      if ( v25 <= 2.0 )
      {
        v30 = (*(me->_vptr_IHandleEntity + 377))(me, m_pInstance);
        CDOTABody::StartAnimation(v30, 0x5DCu, 0, 1.0);
        retstr->m_type = ActionResultType::CONTINUE;
        retstr->m_action = 0;
        retstr->m_reason = 0;
        return retstr;
      }
    }
    CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
LABEL_26:
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  v56 = *&this->m_vHomePosition.x;
  v57 = this->m_vHomePosition.z;
  v45 = operator new(0xA8u);
  CDOTABehaviorNeutralAggro::CDOTABehaviorNeutralAggro(v45, !v19, 0, v56, v57);
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->m_eventResult.m_action = 0;
  this->m_eventResult.m_reason = 0;
  this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
  retstr->m_action = v45;
  retstr->m_reason = "Aggroed by force attack target";
  retstr->m_type = ActionResultType::SUSPEND_FOR;
  return retstr;
}


// CDOTABehaviorNeutralHome::OnEnd  (line 130, @0x000000000288bb90, libserver.so)  // inlines: SetCamped
// calls: CDOTA_BaseNPC::SetReturningHome
void __fastcall CDOTABehaviorNeutralHome::OnEnd(
        CDOTABehaviorNeutralHome *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  me->m_bIsCamped = 0;
  CDOTA_BaseNPC::SetReturningHome(me, 0);
}


// CDOTABehaviorNeutralHome::OnSuspend  (line 138, @0x000000000288bbb0, libserver.so)  // inlines: ActionResult, Continue, IActionResult, SetCamped
// calls: CDOTA_BaseNPC::SetReturningHome
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralHome::OnSuspend(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralHome *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  me->m_bIsCamped = 0;
  CDOTA_BaseNPC::SetReturningHome(me, 0);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorNeutralHome::OnResume  (line 147, @0x000000000288c3d0, libserver.so)  // inlines: ActionResult, Continue, IActionResult, Invalidate, NetworkStateChanged, OnResume, RemoveAll, Set, operator=<float>
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralHome::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralHome *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  if ( this->m_MoveTo.m_repathTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_MoveTo.m_repathTimer._vptr_CountdownTimer + 2))(
      &this->m_MoveTo.m_repathTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_MoveTo.m_repathTimer.m_timestamp.m_Value = -1.0;
  }
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  this->m_MoveTo.m_path.m_Positions.m_Size = 0;
  return retstr;
}


// CDOTABehaviorNeutralHome::OnDominated  (line 155, @0x000000000288c630, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorIdle, EventDesiredResult, IActionResult, TryChangeTo, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorNeutralHome::OnDominated(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorNeutralHome *const this,
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


