
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast  (line 15, @0x000000000287e550, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorMoveTo, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=, ~CDOTABehaviorCommandListener, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorCommandListener::OnCastAbilityOnTarget, CDOTABehaviorCommandMoveToPosition::Update, CDOTABehaviorCreatureInvade::OnCastAbilityOnTarget, CDOTABehaviorMoveToNPCToAttack::Update, CDOTA_BaseNPC_Creature::ConsiderUsingAbilities
void __fastcall CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast(
        CDOTABehaviorCommandMoveToTargetToCast *const this,
        CDOTABaseAbility *pAbility,
        CBaseEntity *pTarget)
{
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  int v10; // eax
  __int16 v11; // cx

  this->_vptr_INextBotEventResponder = &off_42BF110;
  this->_vptr_IContextualQuery = &off_42BF540;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BF5A8;
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
  this->m_hTarget.m_Index = -1;
  this->m_hAbility.m_Index = -1;
  if ( pTarget != 0 )
  {
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v8 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v7 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
  }
  if ( pAbility != 0 )
  {
    v9 = pAbility->m_pEntity;
    if ( v9 != 0 )
    {
      v10 = (v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1);
      if ( v9->m_EHandle.m_Index == -1 )
        v11 = 0x7FFF;
      else
        v11 = v9->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v11 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v10 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
}


// CDOTABehaviorCommandMoveToTargetToCast::OnStart  (line 24, @0x000000000287bb50, libserver.so)  // inlines: ActionResult, ChangeTo, Continue, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, Invalidate, InvalidatePath, IsValid, LookupEntity, Max<float>, SetTargetDistance, ToDOTABaseNPC, operator CEntityInstance*
// calls: CDOTA_BaseNPC::AdvanceMovementOrderTracking, operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, operator delete, _Unwind_Resume, CDOTA_BaseNPC::SetCurrentActiveAbility, CDOTA_BaseNPC::SetTargetLastKnownPosition, CDOTABehaviorMoveTo::OnStart, CDOTALocomotor::StopMovement, CDOTA_BaseNPC::IsEntityInRangeForCast, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll
// strings: "Target handle NULL in OnStart", "Ability was Null after arriving at the target"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToCast::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToCast *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTABehaviorIdle *v10; // rbx
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTABehaviorIdle *v15; // rbx
  CDOTABaseAbility *m_pInstance; // r15
  CBaseEntity *v17; // rdx
  int v18; // eax
  float v19; // xmm1_4
  int v20; // r13d
  int v21; // eax
  float v22; // xmm0_4
  __m128 v23; // xmm1
  float v24; // xmm3_4
  CDOTALocomotor *v25; // rax
  Vector v26; // [rsp+0h] [rbp-50h]
  CBaseEntity *flCastRangea; // [rsp+8h] [rbp-48h]
  float flCastRange; // [rsp+8h] [rbp-48h]
  float flTargetHullRadius; // [rsp+10h] [rbp-40h]
  float m_flHullRadius; // [rsp+14h] [rbp-3Ch]
  CBaseEntity *pTarget; // [rsp+18h] [rbp-38h]

  CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v26, 0);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && (pTarget = v9->m_pInstance, v9->m_pInstance != 0) )
  {
    v12 = this->m_hAbility.m_Index;
    if ( v12 + 2 > 1
      && (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F]) != 0
      && (v14 = &v13[this->m_hAbility.m_Index & 0x1FF]) != 0
      && v12 == v14->m_EHandle.m_Index
      && (m_pInstance = v14->m_pInstance, v14->m_pInstance != 0) )
    {
      if ( pTarget->m_bIsDOTANPC )
      {
        v17 = pTarget;
        flTargetHullRadius = *&pTarget[2].m_bNetworkQuantizeOriginAndAngles;
      }
      else
      {
        v17 = 0;
        flTargetHullRadius = g_GridNav.m_flEdgeSize;
      }
      flCastRangea = v17;
      m_flHullRadius = me->m_flHullRadius;
      CDOTA_BaseNPC::SetCurrentActiveAbility(me, m_pInstance);
      this->m_nMovementState = 0;
      this->m_bFailedCast = 0;
      CDOTA_BaseNPC::SetTargetLastKnownPosition(me, pTarget);
      LODWORD(flCastRangea) = (*(m_pInstance->_vptr_IHandleEntity + 226))(m_pInstance, &vec3_origin, flCastRangea);
      v18 = flCastRangea + (*(m_pInstance->_vptr_IHandleEntity + 228))(m_pInstance);
      if ( v18 == 0.0 )
        v19 = 0.0;
      else
        v19 = (flTargetHullRadius + v18) + m_flHullRadius;
      this->m_flTargetRange = v19;
      this->m_bTurningToTarget = 0;
      this->m_flTargetAngle = 0.0;
      flCastRange = v18;
      CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
      v20 = (*(m_pInstance->_vptr_IHandleEntity + 226))(m_pInstance, &vec3_origin, 0);
      v21 = (*(m_pInstance->_vptr_IHandleEntity + 228))(m_pInstance);
      v22 = flCastRange;
      v23.m128_f32[0] = ((v21 + v20) - flTargetHullRadius) - m_flHullRadius;
      LODWORD(v24) = _mm_cmplt_ss(0, v23).m128_u32[0] & v23.m128_i32[0];
      if ( v24 != this->m_MoveTo.m_flTargetDist )
      {
        this->m_MoveTo.m_flTargetDist = v24;
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
        v22 = flCastRange;
      }
      if ( v22 == 0.0 || CDOTA_BaseNPC::IsEntityInRangeForCast(me, pTarget, v23.m128_f32[0]) )
      {
        v25 = (*(me->_vptr_IHandleEntity + 376))(me);
        CDOTALocomotor::StopMovement(v25, 0);
        if ( me->m_iIsControllableByPlayer64.m_Value != 0 )
        {
LABEL_27:
          (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0);
          return retstr;
        }
      }
      else if ( me->m_iIsControllableByPlayer64.m_Value != 0 )
      {
        goto LABEL_27;
      }
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
    }
    else
    {
      v15 = operator new(0x80u);
      CDOTABehaviorIdle::CDOTABehaviorIdle(v15);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v15;
      retstr->m_reason = "Ability was Null after arriving at the target";
    }
  }
  else
  {
    v10 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v10);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v10;
    retstr->m_reason = "Target handle NULL in OnStart";
  }
  return retstr;
}


// CDOTABehaviorCommandMoveToTargetToCast::GetTargetPosition  (line 65, @0x0000000002871aa0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetLastKnownPosition, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTABehaviorCommandMoveToTargetToCast::GetTargetPosition(
        CDOTABehaviorCommandMoveToTargetToCast *const this,
        CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_nMovementState != 0 )
  {
    result.z = me->m_vTargetLastKnownPosition.z;
    *&result.x = *&me->m_vTargetLastKnownPosition.x;
  }
  else
  {
    m_Index = this->m_hTarget.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[this->m_hTarget.m_Index & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
          m_pInstance = v7->m_pInstance;
      }
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    result.z = AbsOrigin->z;
    *&result.x = *&AbsOrigin->x;
  }
  return result;
}


// CDOTABehaviorCommandMoveToTargetToCast::DoesTargetMove  (line 77, @0x00000000028717b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: __dynamic_cast
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTABehaviorCommandMoveToTargetToCast::DoesTargetMove(
        CDOTABehaviorCommandMoveToTargetToCast *const this)
{
  uint32 m_Index; // edx
  bool result; // al
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  m_Index = this->m_hTarget.m_Index;
  result = 1;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        return __dynamic_cast(v4->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2) == 0;
    }
  }
  return result;
}


// CDOTABehaviorCommandMoveToTargetToCast::UpdateTargetMissing  (line 89, @0x000000000287bee0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetLastKnownPosition, HasFlyMovementCapability, HasMovementCapability, IActionResult, InState, IndexToIdentity, Invalidate, InvalidatePath, IsValid, Length2DSqr, LookupEntity, Max<float>, SetTargetDistance, Square<float>, ToDOTABaseNPC, VectorSubtract, operator CEntityInstance*, operator-, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, CBaseEntity::GetAbsOrigin, CDOTABehaviorMoveTo::Update, CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CDOTABehaviorMoveTo::GetFurthestPathPoint, CDOTABehaviorIdle::CDOTABehaviorIdle, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToTargetToCast::Update
// strings: "In range of the last known target position.", "Can't move.", "Arrived at or near the last known target position."
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToCast::UpdateTargetMissing(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToCast *const this,
        CDOTA_BaseNPC *me)
{
  char *v6; // rbx
  char *v8; // rbx
  const Vector *v9; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  const Vector *AbsOrigin; // r15
  CDOTABehaviorIdle *v14; // rbx
  CEntityInstance *m_pInstance; // r14
  uint32 v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  int v19; // r15d
  float v20; // xmm0_4
  CEntityInstance *v21; // rax
  float x; // [rsp+8h] [rbp-48h]
  float m_flHullRadius; // [rsp+8h] [rbp-48h]
  float flTargetHullRadiusa; // [rsp+Ch] [rbp-44h]
  float flTargetHullRadius; // [rsp+Ch] [rbp-44h]
  Vector FurthestPathPoint; // 0:kr00_12.12

  if ( (me->m_iMoveCapabilities & 3) != 0
    || (BYTE3(me->m_nUnitState64.m_Value) & 1 | ((me->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0 )
  {
    if ( this->m_nMovementState == 1 )
    {
      if ( CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me) )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(me);
        FurthestPathPoint = CDOTABehaviorMoveTo::GetFurthestPathPoint(&this->m_MoveTo);
        if ( (((AbsOrigin->x - FurthestPathPoint.x) * (AbsOrigin->x - FurthestPathPoint.x))
            + ((AbsOrigin->y - FurthestPathPoint.y) * (AbsOrigin->y - FurthestPathPoint.y))) <= 57600.0 )
        {
          v14 = operator new(0x80u);
          CDOTABehaviorIdle::CDOTABehaviorIdle(v14);
          retstr->m_type = ActionResultType::CHANGE_TO;
          retstr->m_action = v14;
          retstr->m_reason = "Arrived at or near the last known target position.";
          return retstr;
        }
      }
      if ( this->m_MoveTo.m_flTargetDist != 0.0 )
      {
        this->m_MoveTo.m_flTargetDist = 0.0;
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
      }
      goto LABEL_17;
    }
    if ( this->m_flTargetRange != 0.0 )
    {
      x = me->m_vTargetLastKnownPosition.x;
      flTargetHullRadiusa = me->m_vTargetLastKnownPosition.y;
      v9 = CBaseEntity::GetAbsOrigin(me);
      if ( (this->m_flTargetRange * this->m_flTargetRange) < (((v9->x - x) * (v9->x - x))
                                                            + ((v9->y - flTargetHullRadiusa)
                                                             * (v9->y - flTargetHullRadiusa))) )
      {
        m_Index = this->m_hAbility.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[this->m_hAbility.m_Index & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0 )
              {
                v16 = this->m_hTarget.m_Index;
                if ( v16 + 2 > 1
                  && (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9)
                                                                           & 0x3F]) != 0
                  && (v18 = &v17[this->m_hTarget.m_Index & 0x1FF]) != 0
                  && v16 == v18->m_EHandle.m_Index
                  && (v21 = v18->m_pInstance, v18->m_pInstance != 0)
                  && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
                {
                  flTargetHullRadius = *(&v21[48]._vptr_IHandleEntity + 1);
                }
                else
                {
                  flTargetHullRadius = g_GridNav.m_flEdgeSize;
                }
                m_flHullRadius = me->m_flHullRadius;
                v19 = (*(m_pInstance->_vptr_IHandleEntity + 226))(m_pInstance, &vec3_origin, 0);
                v20 = fmaxf(
                        (((*(m_pInstance->_vptr_IHandleEntity + 228))(m_pInstance) + v19) - flTargetHullRadius)
                      - m_flHullRadius,
                        0.0);
                if ( v20 != this->m_MoveTo.m_flTargetDist )
                {
                  this->m_MoveTo.m_flTargetDist = v20;
                  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
                }
              }
            }
          }
        }
LABEL_17:
        CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
        retstr->m_type = ActionResultType::CONTINUE;
        retstr->m_action = 0;
        retstr->m_reason = 0;
        return retstr;
      }
    }
    v6 = operator new(0x80u);
    *(v6 + 16) = 0;
    *(v6 + 9) = 0;
    *(v6 + 10) = 0;
    *(v6 + 3) = 0;
    *(v6 + 4) = 0;
    *(v6 + 5) = 0;
    *(v6 + 6) = 0;
    *(v6 + 7) = 0;
    *(v6 + 2) = 0;
    v6[96] = 0;
    v6[97] = 0;
    *(v6 + 22) = 0;
    *v6 = &off_42C1970;
    *(v6 + 1) = &off_42C1DA0;
    CountdownTimer::CountdownTimer((v6 + 104));
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v6;
    retstr->m_reason = "In range of the last known target position.";
  }
  else
  {
    v8 = operator new(0x80u);
    *(v8 + 16) = 0;
    *(v8 + 9) = 0;
    *(v8 + 10) = 0;
    *(v8 + 3) = 0;
    *(v8 + 4) = 0;
    *(v8 + 5) = 0;
    *(v8 + 6) = 0;
    *(v8 + 7) = 0;
    *(v8 + 2) = 0;
    v8[96] = 0;
    v8[97] = 0;
    *(v8 + 22) = 0;
    *v8 = &off_42C1970;
    *(v8 + 1) = &off_42C1DA0;
    CountdownTimer::CountdownTimer((v8 + 104));
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v8;
    retstr->m_reason = "Can't move.";
  }
  return retstr;
}


// CDOTABehaviorCommandMoveToTargetToCast::Update  (line 137, @0x000000000287c3c0, libserver.so)  // inlines: ActionResult, ChangeTo, Continue, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, InState, IndexToIdentity, Invalidate, InvalidatePath, IsDisarmed, IsValid, LookupEntity, Max<float>, SetCastLock, SetTargetDistance, SetTargetMovedOutOfRange, SuspendFor, ToDOTABaseNPC, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTABehaviorCommandMoveToTargetToCast::UpdateTargetMissing, CDOTA_BaseNPC::UpdatePseudoQueuedOrder, operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, operator delete, _Unwind_Resume, CDOTA_BaseNPC::SetTargetLastKnownPosition, CDOTA_BaseNPC::IsActionLocked, CBaseEntity::GetAbsOrigin, CDOTALocomotor::GetCastAngle, CDOTALocomotor::IsFacingLocation (27 total)
// strings: "Current ability is NULL", "Casting on entity", "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", "Interrupted at cast position, can't cast on target.", "Reached attack moment but can't cast-attack target.", "Interrupted at cast position, can't cast." (7 total)
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToCast::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToCast *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  CDOTABaseAbility *CurrentActiveAbility; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTABehaviorIdle *v12; // rbx
  CEntityInstance *m_pInstance; // r15
  int v14; // eax
  double v15; // xmm1_8
  bool IsActionLocked; // al
  double v17; // xmm0_8
  double v18; // xmm2_8
  CDOTALocomotor *v19; // rax
  CDOTALocomotor *v20; // rax
  float v21; // xmm1_4
  unsigned __int64 v22; // rax
  CDOTABehaviorAbility *v23; // rbx
  bool IsEntityInRangeForCast; // al
  double v25; // xmm3_8
  int v26; // r15d
  float v27; // xmm0_4
  int v28; // eax
  bool CanCastOn; // al
  bool v30; // r15
  bool v31; // cl
  char v32; // r15
  CDOTABody *v33; // rax
  __int64 v34; // r12
  void (__fastcall *v35)(__int64, const Vector *); // r13
  const Vector *AbsOrigin; // rax
  CDOTALocomotor *v37; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTABody *v39; // rax
  __int64 v40; // r12
  void (__fastcall *v41)(__int64, const Vector *); // r13
  const Vector *v42; // rax
  CDOTALocomotor *v43; // rax
  CDOTABehaviorIdle *v44; // rbx
  bool CanAttackBoss; // al
  CDOTALocomotor *v46; // rax
  float v47; // xmm1_4
  CDOTABehaviorIdle *v48; // rbx
  unsigned __int64 m_Value; // rax
  CDOTABehaviorIdle *v50; // rbx
  CDOTABehaviorAttackPhase *v51; // rbx
  float m_flTargetAngle; // [rsp+4h] [rbp-4Ch]
  float flTargetHullRadiusa; // [rsp+8h] [rbp-48h]
  float flTargetHullRadius; // [rsp+8h] [rbp-48h]
  const Vector *flTargetHullRadiusb; // [rsp+8h] [rbp-48h]
  float flCastRange; // [rsp+10h] [rbp-40h]
  unsigned int flCastRangeb; // [rsp+10h] [rbp-40h]
  const Vector *flCastRangec; // [rsp+10h] [rbp-40h]
  const Vector *flCastRanged; // [rsp+10h] [rbp-40h]
  unsigned int flCastRangee; // [rsp+10h] [rbp-40h]
  float flCastRangef; // [rsp+10h] [rbp-40h]
  bool flCastRangea; // [rsp+10h] [rbp-40h]
  bool flCastRangeh; // [rsp+10h] [rbp-40h]
  bool flCastRangeg; // [rsp+10h] [rbp-40h]
  CBaseEntity *pTarget; // [rsp+18h] [rbp-38h]
  bool pTargeta; // [rsp+18h] [rbp-38h]

  (*(me->_vptr_IHandleEntity + 447))(me, 0, interval);
  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(me);
  if ( CurrentActiveAbility == 0 )
  {
    v12 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v12);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v12;
    retstr->m_reason = "Current ability is NULL";
    return retstr;
  }
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v10 = &v9[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v10->m_EHandle.m_Index
    || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0) )
  {
    if ( this->m_nMovementState == 0 )
    {
      this->m_nMovementState = 2;
      me->m_bCastLocked = 0;
      CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
    }
    goto LABEL_8;
  }
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    pTarget = 0;
    goto LABEL_14;
  }
  if ( SBYTE3(m_pInstance[58]._vptr_IHandleEntity) < 0 )
    this->m_bFailedCast = 1;
  if ( me->m_iTeamNum.m_Value != HIBYTE(m_pInstance[7].m_CScriptComponent)
    && (CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, me)
     || !CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, m_pInstance)
     || this->m_bFailedCast) )
  {
    if ( this->m_nMovementState == 0 )
    {
      if ( SLOBYTE(m_pInstance[58]._vptr_IHandleEntity) < 0 || this->m_bFailedCast )
        v28 = 2;
      else
        v28 = 1;
      this->m_nMovementState = v28;
      me->m_bCastLocked = 0;
      CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
    }
LABEL_8:
    CDOTABehaviorCommandMoveToTargetToCast::UpdateTargetMissing(retstr, this, me);
    return retstr;
  }
  pTarget = m_pInstance;
LABEL_14:
  this->m_nMovementState = 0;
  CDOTA_BaseNPC::SetTargetLastKnownPosition(me, m_pInstance);
  flCastRange = (*(CurrentActiveAbility->_vptr_IHandleEntity + 226))(CurrentActiveAbility, &vec3_origin, pTarget);
  v14 = (*(CurrentActiveAbility->_vptr_IHandleEntity + 228))(CurrentActiveAbility);
  *&v15 = v14 + flCastRange;
  if ( flCastRange != 0.0
    && (*&flCastRangee = v14 + flCastRange,
        IsEntityInRangeForCast = CDOTA_BaseNPC::IsEntityInRangeForCast(me, m_pInstance, *&v15),
        *&v15 = flCastRangee,
        !IsEntityInRangeForCast)
    || (flCastRangeb = LODWORD(v15),
        IsActionLocked = CDOTA_BaseNPC::IsActionLocked(me),
        *&v15 = flCastRangeb,
        IsActionLocked) )
  {
    this->m_bTurningToTarget = 0;
    v25 = 0.0;
    if ( *&v15 != 0.0 )
    {
      me->m_bCastLocked = 0;
      CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
    }
    if ( pTarget != 0 )
      flTargetHullRadius = *&pTarget[2].m_bNetworkQuantizeOriginAndAngles;
    else
      flTargetHullRadius = g_GridNav.m_flEdgeSize;
    flCastRangef = me->m_flHullRadius;
    v26 = (*(CurrentActiveAbility->_vptr_IHandleEntity + 226))(
            CurrentActiveAbility,
            &vec3_origin,
            pTarget,
            v17,
            v15,
            v18,
            v25);
    v27 = fmaxf(
            (((*(CurrentActiveAbility->_vptr_IHandleEntity + 228))(CurrentActiveAbility) + v26) - flTargetHullRadius)
          - flCastRangef,
            0.0);
    if ( v27 != this->m_MoveTo.m_flTargetDist )
    {
      this->m_MoveTo.m_flTargetDist = v27;
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
    }
    CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  if ( !this->m_bTurningToTarget )
  {
    flCastRangec = CBaseEntity::GetAbsOrigin(m_pInstance);
    v19 = (*(me->_vptr_IHandleEntity + 376))(me);
    *&v17 = CDOTALocomotor::GetCastAngle(v19, me, flCastRangec);
    this->m_bTurningToTarget = 1;
    this->m_flTargetAngle = *&v17;
  }
  if ( ((*(CurrentActiveAbility->_vptr_IHandleEntity + 251))(CurrentActiveAbility, v17, v15) & 0x20000) != 0 )
  {
    CanCastOn = CDOTA_BaseNPC::CanCastOn(me, m_pInstance, CurrentActiveAbility);
    v30 = 0;
    v31 = CanCastOn;
    if ( (pTarget[2].m_hEffectEntity.m_Value.m_Index & 0x800) != 0 )
    {
      flCastRangeg = CanCastOn;
      CanAttackBoss = CDOTA_BaseNPC::CanAttackBoss(me);
      v31 = flCastRangeg;
      v30 = !CanAttackBoss;
    }
    if ( (LOBYTE(pTarget[3].m_vecVelocity.m_Value.x) & 4) != 0
      && (flCastRangeh = v31,
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(me, "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", 0),
          v31 = flCastRangeh,
          ModifierByName == 0)
      || v30
      || !v31 )
    {
      v32 = 0;
      flCastRangea = (me->m_nUnitState64.m_Value & 2) != 0;
    }
    else
    {
      v32 = 0;
      flCastRangea = (me->m_nUnitState64.m_Value & 2) != 0;
      if ( (me->m_nUnitState64.m_Value & 2) == 0 )
      {
        v32 = 1;
        (*(me->_vptr_IHandleEntity + 447))(me, pTarget);
      }
    }
    if ( !CDOTA_BaseNPC::AttackReady(me)
      || (m_flTargetAngle = this->m_flTargetAngle,
          flTargetHullRadiusb = CBaseEntity::GetAbsOrigin(pTarget),
          v46 = (*(me->_vptr_IHandleEntity + 376))(me),
          !CDOTALocomotor::IsFacingLocation(v46, flTargetHullRadiusb, LODWORD(m_flTargetAngle), v47)) )
    {
      v33 = (*(me->_vptr_IHandleEntity + 377))(me);
      CDOTABody::StartAnimation(v33, 0x5DCu, 0, 1.0);
      v34 = (*(me->_vptr_IHandleEntity + 376))(me);
      v35 = *(*v34 + 744LL);
      AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
      v35(v34, AbsOrigin);
      v37 = (*(me->_vptr_IHandleEntity + 376))(me);
      CDOTALocomotor::StopMovement(v37, 0);
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
      return retstr;
    }
    if ( v32 == 0 )
    {
      if ( flCastRangea )
        SendHudErrorToPlayer(106, me);
      v48 = operator new(0x80u);
      CDOTABehaviorIdle::CDOTABehaviorIdle(v48);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v48;
      retstr->m_reason = "Reached attack moment but can't cast-attack target.";
      return retstr;
    }
    m_Value = me->m_nUnitState64.m_Value;
    if ( (m_Value & 8) != 0 )
    {
      if ( (*(CurrentActiveAbility->_vptr_IHandleEntity + 223))(CurrentActiveAbility) == 0 )
      {
LABEL_71:
        v50 = operator new(0x80u);
        CDOTABehaviorIdle::CDOTABehaviorIdle(v50);
        retstr->m_type = ActionResultType::CHANGE_TO;
        retstr->m_action = v50;
        retstr->m_reason = "Interrupted at cast position, can't cast.";
        return retstr;
      }
      m_Value = me->m_nUnitState64.m_Value;
    }
    if ( ((m_Value & 0x10) == 0 || (*(CurrentActiveAbility->_vptr_IHandleEntity + 223))(CurrentActiveAbility) == 0)
      && CDOTABaseAbility::IsOwnersManaEnough(CurrentActiveAbility) )
    {
      me->m_bTargetMovedOutOfRange = 0;
      v51 = operator new(0xC0u);
      CDOTABehaviorAttackPhase::CDOTABehaviorAttackPhase(v51, pTarget, 0, 1);
      retstr->m_type = ActionResultType::SUSPEND_FOR;
      this->m_eventResult.m_type = ActionResultType::CONTINUE;
      this->m_eventResult.m_action = 0;
      this->m_eventResult.m_reason = 0;
      this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
      retstr->m_action = v51;
      retstr->m_reason = "Beginning a cast attack.";
      return retstr;
    }
    goto LABEL_71;
  }
  flTargetHullRadiusa = this->m_flTargetAngle;
  flCastRanged = CBaseEntity::GetAbsOrigin(m_pInstance);
  v20 = (*(me->_vptr_IHandleEntity + 376))(me);
  if ( CDOTALocomotor::IsFacingLocation(v20, flCastRanged, LODWORD(flTargetHullRadiusa), v21) )
  {
    pTargeta = CDOTA_BaseNPC::CanCastOn(me, m_pInstance, CurrentActiveAbility);
    v22 = me->m_nUnitState64.m_Value;
    if ( (v22 & 8) != 0 )
    {
      if ( (*(CurrentActiveAbility->_vptr_IHandleEntity + 223))(CurrentActiveAbility) == 0 )
        goto LABEL_62;
      v22 = me->m_nUnitState64.m_Value;
    }
    if ( ((v22 & 0x10) == 0 || (*(CurrentActiveAbility->_vptr_IHandleEntity + 223))(CurrentActiveAbility) == 0)
      && CDOTABaseAbility::IsOwnersManaEnough(CurrentActiveAbility)
      && pTargeta )
    {
      me->m_bTargetMovedOutOfRange = 0;
      v23 = operator new(0x80u);
      CDOTABehaviorAbility::CDOTABehaviorAbility(v23, CurrentActiveAbility, m_pInstance);
      retstr->m_type = ActionResultType::SUSPEND_FOR;
      this->m_eventResult.m_type = ActionResultType::CONTINUE;
      this->m_eventResult.m_action = 0;
      this->m_eventResult.m_reason = 0;
      this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
      retstr->m_action = v23;
      retstr->m_reason = "Casting on entity";
      return retstr;
    }
LABEL_62:
    v44 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v44);
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v44;
    retstr->m_reason = "Interrupted at cast position, can't cast on target.";
    return retstr;
  }
  v39 = (*(me->_vptr_IHandleEntity + 377))(me);
  CDOTABody::StartAnimation(v39, 0x5DCu, 0, 1.0);
  v40 = (*(me->_vptr_IHandleEntity + 376))(me);
  v41 = *(*v40 + 744LL);
  v42 = CBaseEntity::GetAbsOrigin(m_pInstance);
  v41(v40, v42);
  if ( pTarget == 0 || *((*(pTarget->_vptr_IHandleEntity + 376))(pTarget) + 144) == 0 )
  {
    v43 = (*(me->_vptr_IHandleEntity + 376))(me);
    CDOTALocomotor::StopMovement(v43, 0);
  }
  me->m_bCastLocked = 1;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorCommandMoveToTargetToCast::OnResume  (line 313, @0x0000000002872090, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::SetCurrentActiveAbility, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToCast::OnResume(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToCast *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *interruptingAction)
{
  char *v5; // rbx
  uint32 m_Index; // eax
  CDOTABaseAbility *m_pInstance; // rdi
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx

  if ( me->m_bTargetMovedOutOfRange )
  {
    m_Index = this->m_hAbility.m_Index;
    m_pInstance = 0;
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
    CDOTA_BaseNPC::SetCurrentActiveAbility(me, m_pInstance);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  else
  {
    v5 = operator new(0x80u);
    *(v5 + 16) = 0;
    *(v5 + 9) = 0;
    *(v5 + 10) = 0;
    *(v5 + 3) = 0;
    *(v5 + 4) = 0;
    *(v5 + 5) = 0;
    *(v5 + 6) = 0;
    *(v5 + 7) = 0;
    *(v5 + 2) = 0;
    v5[96] = 0;
    v5[97] = 0;
    *(v5 + 22) = 0;
    *v5 = &off_42C1970;
    *(v5 + 1) = &off_42C1DA0;
    CountdownTimer::CountdownTimer((v5 + 104));
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v5;
    retstr->m_reason = 0;
    return retstr;
  }
}


// CDOTABehaviorCommandMoveToTargetToCast::OnEnd  (line 331, @0x0000000002870880, libserver.so)  // inlines: SetCastLock
// calls: CDOTA_BaseNPC::SetCurrentActiveAbility, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
void __fastcall CDOTABehaviorCommandMoveToTargetToCast::OnEnd(
        CDOTABehaviorCommandMoveToTargetToCast *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  CDOTA_BaseNPC::SetCurrentActiveAbility(me, 0);
  (*(me->_vptr_IHandleEntity + 447))(me, 0);
  me->m_bCastLocked = 0;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(me, 0);
}


// CDOTABehaviorCommandMoveToTargetToCast::OnUnitTeleported  (line 341, @0x0000000002871300, libserver.so)  // inlines: EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, TryContinue, operator CEntityInstance*, operator=
// calls: CDOTA_BaseNPC::CanEntityBeSeenByMyTeam
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToCast::OnUnitTeleported(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToCast *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  CBaseEntity *m_pInstance; // r10
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rsi
  CEntityIdentity *v10; // rsi
  CBaseEntity *v12; // rsi
  int m_nMovementState; // esi

  m_pInstance = 0;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hTarget.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  if ( pUnit == m_pInstance )
  {
    if ( pUnit != 0 && pUnit->m_bIsDOTANPC )
    {
      v12 = pUnit;
      if ( !bLongTeleport )
      {
LABEL_11:
        if ( this->m_nMovementState != 0 || CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, v12) )
          goto LABEL_7;
LABEL_16:
        this->m_nMovementState = 2;
        goto LABEL_7;
      }
    }
    else
    {
      v12 = 0;
      if ( !bLongTeleport )
        goto LABEL_11;
    }
    m_nMovementState = this->m_nMovementState;
    this->m_hTarget.m_Index = -1;
    if ( m_nMovementState != 0 )
      goto LABEL_7;
    goto LABEL_16;
  }
LABEL_7:
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


