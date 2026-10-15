
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToTargetToAttack::CDOTABehaviorCommandMoveToTargetToAttack  (line 13, @0x000000000287d540, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorMoveTo, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=, ~CDOTABehaviorCommandListener, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorCommandListener::OnCommandAttack, CDOTABehaviorCommandMoveToNPC::Update, CDOTABehaviorCreatureInvade::OnCommandAttack
void __fastcall CDOTABehaviorCommandMoveToTargetToAttack::CDOTABehaviorCommandMoveToTargetToAttack(
        CDOTABehaviorCommandMoveToTargetToAttack *const this,
        CBaseEntity *pTarget,
        bool bDeny)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // si
  int v8; // eax

  this->_vptr_INextBotEventResponder = &off_42BEC50;
  this->_vptr_IContextualQuery = &off_42BF080;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BF0E8;
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
  if ( pTarget != 0 )
  {
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v7 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v8 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
  }
  this->m_bDeny = bDeny;
}


// CDOTABehaviorCommandMoveToTargetToAttack::OnStart  (line 21, @0x000000000287b2b0, libserver.so)  // inlines: ActionResult, ChangeTo, Continue, Get, GetAttackRange, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetSerialNumber, IActionResult, IndexToIdentity, Invalidate, InvalidatePath, IsListeningToEvent, IsValid, LookupEntity, Max<float>, Set, SetCommandAttackTarget, SetTargetDistance, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CEntityInstance*, operator=
// calls: CDOTA_BaseNPC::AdvanceMovementOrderTracking, operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, CDOTA_BaseNPC::SetTargetLastKnownPosition, CDOTA_BaseNPC::SetAggroTarget, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::AngerNearbyUnits, CDOTA_BaseNPC::IsEntityInRangeForAttack, CDOTALocomotor::StopMovement, CDOTABehaviorMoveTo::OnStart, CDOTA_BaseNPC::IsEntityExceptToAttack (16 total)
// strings: "Target handle NULL in OnStart"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToAttack::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToAttack *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTABehaviorIdle *v10; // rbx
  CBaseEntity *m_pInstance; // r14
  CBaseEntity *v13; // r12
  bool v14; // zf
  CBaseEntity *v15; // rsi
  float v16; // xmm1_4
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // si
  __int64 v20; // rax
  float Modifier_Constant_Highest_Internal; // xmm3_4
  __int64 v22; // rax
  float m_iAttackRange; // xmm2_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v25; // rax
  float v26; // xmm2_4
  float v27; // xmm0_4
  __int64 v28; // rax
  float v29; // xmm1_4
  float v30; // xmm0_4
  __int64 v31; // rax
  float v32; // xmm0_4
  float v33; // xmm0_4
  CDOTALocomotor *v34; // rax
  __int64 v35; // rax
  bool v36; // dl
  float v37; // xmm0_4
  float v38; // xmm0_4
  __int64 v39; // rax
  Vector v40; // [rsp+0h] [rbp-50h]
  float v41; // [rsp+Ch] [rbp-44h]
  float v42; // [rsp+Ch] [rbp-44h]
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // [rsp+10h] [rbp-40h]
  float v44; // [rsp+18h] [rbp-38h]
  float v45; // [rsp+18h] [rbp-38h]
  float v46; // [rsp+18h] [rbp-38h]
  float v47; // [rsp+18h] [rbp-38h]
  float v48; // [rsp+18h] [rbp-38h]

  CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v40, 0);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hTarget.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
      {
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance != 0 )
        {
          v13 = 0;
          v14 = !m_pInstance->m_bIsDOTANPC;
          v15 = v9->m_pInstance;
          this->m_bFailedCast = 0;
          this->m_nMovementState = 0;
          if ( !v14 )
            v13 = m_pInstance;
          CDOTA_BaseNPC::SetTargetLastKnownPosition(me, v15);
          CDOTA_BaseNPC::SetAggroTarget(me, m_pInstance);
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v19 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(me->m_hCommandAttackTarget.m_Index) = v19 | me->m_hCommandAttackTarget.m_Index & 0x8000;
            me->m_hCommandAttackTarget.m_Index = (v18 << 15) | me->m_hCommandAttackTarget.m_Index & 0x7FFF;
          }
          else
          {
            me->m_hCommandAttackTarget.m_Index = -1;
          }
          p_m_ModifierManager = &me->m_ModifierManager;
          v20 = me->m_ModifierManager.m_buffsForModifiers[71];
          if ( v20 == 0xFF )
          {
            Modifier_Constant_Highest_Internal = 0.0;
          }
          else if ( me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v20].m_Size <= 0 )
          {
            Modifier_Constant_Highest_Internal = 0.0;
          }
          else
          {
            Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                                   &me->m_ModifierManager,
                                                   modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                                   &CModifierParams::s_Default);
          }
          v22 = me->m_ModifierManager.m_buffsForModifiers[69];
          m_iAttackRange = me->m_iAttackRange;
          Modifier_Constant_Additive_Internal = 0.0;
          if ( v22 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v22].m_Size > 0 )
          {
            v41 = Modifier_Constant_Highest_Internal;
            v44 = me->m_iAttackRange;
            Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                    p_m_ModifierManager,
                                                    modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                                    &CModifierParams::s_Default);
            Modifier_Constant_Highest_Internal = v41;
            m_iAttackRange = v44;
          }
          v25 = me->m_ModifierManager.m_buffsForModifiers[70];
          v26 = m_iAttackRange + Modifier_Constant_Additive_Internal;
          v27 = 0.0;
          if ( v25 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v25].m_Size > 0 )
          {
            v42 = Modifier_Constant_Highest_Internal;
            v45 = v26;
            v27 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                    p_m_ModifierManager,
                    modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                    &CModifierParams::s_Default);
            Modifier_Constant_Highest_Internal = v42;
            v26 = v45;
          }
          if ( Modifier_Constant_Highest_Internal > (v26 + v27) )
          {
            v39 = me->m_ModifierManager.m_buffsForModifiers[71];
            v48 = 0.0;
            if ( v39 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v39].m_Size > 0 )
            {
              v48 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                      p_m_ModifierManager,
                      modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                      &CModifierParams::s_Default);
              v33 = v48;
              if ( v13 != 0 )
              {
LABEL_32:
                v14 = !this->m_bDeny;
                this->m_flTargetRange = v33 + *&v13[2].m_bNetworkQuantizeOriginAndAngles;
                if ( v14 )
                {
                  if ( (me->m_iUnitType & 1) != 0 && (v13[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
                    CDOTA_BaseNPC::AngerNearbyUnits(me);
                }
                else
                {
                  DeAggroUnitsAggroedOn(me, 0);
                }
LABEL_36:
                if ( CDOTA_BaseNPC::IsEntityInRangeForAttack(me, m_pInstance, v16)
                  || CDOTA_BaseNPC::IsEntityExceptToAttack(me, m_pInstance) )
                {
                  v34 = (*(me->_vptr_IHandleEntity + 376))(me);
                  CDOTALocomotor::StopMovement(v34, 0);
                }
                v35 = me->m_ModifierManager.m_buffsForModifiers[9];
                v36 = 0;
                if ( v35 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v35].m_Size > 0 )
                  v36 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                          p_m_ModifierManager,
                          modifierfunction::MODIFIER_PROPERTY_INVISIBILITY_LEVEL,
                          &CModifierParams::s_Default) > 0.0;
                this->m_bInvisBreak = v36;
                if ( v13 != 0 )
                {
                  this->m_bNightmareAttack = (BYTE1(v13[3].m_vecVelocity.m_Value.x) & 8) != 0;
                  this->m_bTurningToTarget = 0;
                  this->m_flTargetAngle = 0.0;
                  CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
                  v37 = *&v13[2].m_bNetworkQuantizeOriginAndAngles;
                }
                else
                {
                  this->m_bNightmareAttack = 0;
                  this->m_bTurningToTarget = 0;
                  this->m_flTargetAngle = 0.0;
                  CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
                  v37 = 0.0;
                }
                v38 = fmaxf(v48 - v37, 0.0);
                if ( v38 == this->m_MoveTo.m_flTargetDist )
                {
                  if ( me->m_iIsControllableByPlayer64.m_Value == 0 )
                  {
LABEL_47:
                    retstr->m_type = ActionResultType::CONTINUE;
                    retstr->m_action = 0;
                    retstr->m_reason = 0;
                    return retstr;
                  }
                }
                else
                {
                  this->m_MoveTo.m_flTargetDist = v38;
                  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
                  if ( me->m_iIsControllableByPlayer64.m_Value == 0 )
                    goto LABEL_47;
                }
                (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0);
                return retstr;
              }
LABEL_53:
              this->m_flTargetRange = v33 + 0.0;
              goto LABEL_36;
            }
          }
          else
          {
            v28 = me->m_ModifierManager.m_buffsForModifiers[69];
            v29 = me->m_iAttackRange;
            v30 = 0.0;
            if ( v28 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v28].m_Size > 0 )
            {
              v46 = me->m_iAttackRange;
              v30 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                      p_m_ModifierManager,
                      modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                      &CModifierParams::s_Default);
              v29 = v46;
            }
            v31 = me->m_ModifierManager.m_buffsForModifiers[70];
            v16 = v29 + v30;
            v32 = 0.0;
            if ( v31 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v31].m_Size > 0 )
            {
              v47 = v16;
              v32 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                      p_m_ModifierManager,
                      modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                      &CModifierParams::s_Default);
              v16 = v47;
            }
            v48 = (v32 + v16);
          }
          v33 = v48;
          if ( v13 != 0 )
            goto LABEL_32;
          goto LABEL_53;
        }
      }
    }
  }
  v10 = operator new(0x80u);
  CDOTABehaviorIdle::CDOTABehaviorIdle(v10);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_action = v10;
  retstr->m_reason = "Target handle NULL in OnStart";
  return retstr;
}


// CDOTABehaviorCommandMoveToTargetToAttack::OnEnd  (line 77, @0x0000000002870900, libserver.so)  // inlines: Set, SetCommandAttackTarget, operator=
// calls: CDOTA_BaseNPC::SetAggroTarget
void __fastcall CDOTABehaviorCommandMoveToTargetToAttack::OnEnd(
        CDOTABehaviorCommandMoveToTargetToAttack *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  (*(me->_vptr_IHandleEntity + 447))(me, 0, nextAction);
  CDOTA_BaseNPC::SetAggroTarget(me, 0);
  me->m_hCommandAttackTarget.m_Index = -1;
}


// CDOTABehaviorCommandMoveToTargetToAttack::GetTargetPosition  (line 86, @0x0000000002871b90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetLastKnownPosition, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTABehaviorCommandMoveToTargetToAttack::GetTargetPosition(
        CDOTABehaviorCommandMoveToTargetToAttack *const this,
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


// CDOTABehaviorCommandMoveToTargetToAttack::UpdateTargetMissing  (line 98, @0x000000000287b8c0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, GetTargetLastKnownPosition, IActionResult, Invalidate, InvalidatePath, Length2DSqr, SetTargetDistance, Square<float>, VectorSubtract, operator-, ~CDOTABehaviorCommandListener
// calls: CBaseEntity::GetAbsOrigin, operator new, CountdownTimer::CountdownTimer, CDOTABehaviorMoveTo::Update, CDOTABehaviorMoveTo::IsPathCurrentlyExhausted, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CDOTABehaviorMoveTo::GetFurthestPathPoint, CDOTABehaviorIdle::CDOTABehaviorIdle, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToTargetToAttack::Update
// strings: "In range of the last known target position.", "Arrived at or near the last known target position."
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToAttack::UpdateTargetMissing(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToAttack *const this,
        CDOTA_BaseNPC *me)
{
  const Vector *v6; // rax
  char *v7; // rbx
  CDOTABehaviorMoveTo *p_m_MoveTo; // r14
  const Vector *AbsOrigin; // r15
  CDOTABehaviorIdle *v11; // rbx
  float x; // [rsp+8h] [rbp-48h]
  float y; // [rsp+Ch] [rbp-44h]
  Vector FurthestPathPoint; // 0:kr00_12.12

  if ( this->m_nMovementState == 1 )
  {
    p_m_MoveTo = &this->m_MoveTo;
    if ( CDOTABehaviorMoveTo::IsPathCurrentlyExhausted(&this->m_MoveTo, me)
      && (AbsOrigin = CBaseEntity::GetAbsOrigin(me),
          FurthestPathPoint = CDOTABehaviorMoveTo::GetFurthestPathPoint(p_m_MoveTo),
          (((AbsOrigin->x - FurthestPathPoint.x) * (AbsOrigin->x - FurthestPathPoint.x))
         + ((AbsOrigin->y - FurthestPathPoint.y) * (AbsOrigin->y - FurthestPathPoint.y))) <= 57600.0) )
    {
      v11 = operator new(0x80u);
      CDOTABehaviorIdle::CDOTABehaviorIdle(v11);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v11;
      retstr->m_reason = "Arrived at or near the last known target position.";
    }
    else
    {
      if ( this->m_MoveTo.m_flTargetDist != 0.0 )
      {
        this->m_MoveTo.m_flTargetDist = 0.0;
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
      }
      CDOTABehaviorMoveTo::Update(p_m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
    }
  }
  else
  {
    x = me->m_vTargetLastKnownPosition.x;
    y = me->m_vTargetLastKnownPosition.y;
    v6 = CBaseEntity::GetAbsOrigin(me);
    if ( (this->m_flTargetRange * this->m_flTargetRange) < (((v6->x - x) * (v6->x - x)) + ((v6->y - y) * (v6->y - y))) )
    {
      CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
    }
    else
    {
      v7 = operator new(0x80u);
      *(v7 + 16) = 0;
      *(v7 + 9) = 0;
      *(v7 + 10) = 0;
      *(v7 + 3) = 0;
      *(v7 + 4) = 0;
      *(v7 + 5) = 0;
      *(v7 + 6) = 0;
      *(v7 + 7) = 0;
      *(v7 + 2) = 0;
      v7[96] = 0;
      v7[97] = 0;
      *(v7 + 22) = 0;
      *v7 = &off_42C1970;
      *(v7 + 1) = &off_42C1DA0;
      CountdownTimer::CountdownTimer((v7 + 104));
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v7;
      retstr->m_reason = "In range of the last known target position.";
    }
  }
  return retstr;
}


// CDOTABehaviorCommandMoveToTargetToAttack::Update  (line 131, @0x000000000287e790, libserver.so)  // inlines: ActionResult, CEntityHandle, CHandle, CModifierParams, ChangeTo, Continue, Get, GetAttackRange, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetSerialNumber, HasFlyMovementCapability, HasMovementCapability, IActionResult, InState, IndexToIdentity, Invalidate, InvalidatePath, IsDisarmed, IsInvulnerable, IsListeningToEvent, IsValid, LookupEntity, Max<float>, Set, SetAttacker, SetTarget, SetTargetDistance, SuspendFor, ToDOTABaseNPC, operator CEntityInstance*, operator=
// calls: CDOTABehaviorCommandMoveToTargetToAttack::UpdateTargetMissing, CDOTA_BaseNPC::IsInvisibleTo, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, operator new, CDOTABehaviorIdle::CDOTABehaviorIdle, CDOTA_BaseNPC::SetTargetLastKnownPosition, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::IsEntityInRangeForAttack, CDOTA_BaseNPC::IsActionLocked, CDOTA_BaseNPC::IsDeniable, CDOTA_BaseNPC::AttackReady (29 total)
// strings: "Lost sight of target and no movement capability.", "Target out of range and no movement capability.", "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", "Disarmed, will pursue target until I can attack.", "Reached attack moment but can't attack target.", "Reached attack moment but target is nightmared." (8 total)
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToAttack::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToAttack *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CBaseEntity *m_pInstance; // r13
  int m_iMoveCapabilities; // eax
  char v13; // r15
  bool CanEntityBeSeenByMyTeam; // al
  int v15; // eax
  CDOTABehaviorIdle *v16; // rbx
  float Modifier_Constant_Highest_Internal; // xmm3_4
  __int64 v18; // rax
  __int64 v19; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_iAttackRange; // xmm1_4
  __int64 v22; // rax
  float v23; // xmm2_4
  float v24; // xmm0_4
  __int64 v25; // rax
  float v26; // xmm0_4
  float v27; // xmm1_4
  __int64 v28; // rax
  float v29; // xmm0_4
  char m_bDeny; // r15
  __int64 v31; // rax
  char v32; // r15
  CDOTABody *v33; // rax
  __int64 v34; // rbx
  void (__fastcall *v35)(__int64, const Vector *); // r13
  const Vector *v36; // rax
  CDOTALocomotor *v37; // rax
  float v38; // xmm0_4
  float v39; // xmm0_4
  __int64 v40; // rax
  CDOTABehaviorIdle *v41; // rbx
  const Vector *AbsOrigin; // r15
  CDOTALocomotor *v43; // rax
  float CastAngle; // xmm0_4
  CDOTALocomotor *v45; // rax
  float v46; // xmm1_4
  CDOTABehaviorCommandMoveToNPC *v47; // rbx
  CDOTABehaviorIdle *v48; // rbx
  CDOTABehaviorIdle *v49; // rbx
  __int64 v50; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v52; // si
  CEntityIdentity *v53; // rax
  __int16 v54; // si
  CDOTABehaviorAttackPhase *v55; // r13
  CDOTABehaviorIdle *v56; // rbx
  Vector *target; // [rsp+8h] [rbp-E8h]
  float m_flTargetAngle; // [rsp+10h] [rbp-E0h]
  char bSameTeam; // [rsp+17h] [rbp-D9h]
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // [rsp+18h] [rbp-D8h]
  float bInvalidDenyb; // [rsp+20h] [rbp-D0h]
  float bInvalidDenyc; // [rsp+20h] [rbp-D0h]
  bool bInvalidDeny; // [rsp+20h] [rbp-D0h]
  char bInvalidDenya; // [rsp+20h] [rbp-D0h]
  float bBossRestrictedc; // [rsp+24h] [rbp-CCh]
  float bBossRestrictedd; // [rsp+24h] [rbp-CCh]
  float bBossRestrictede; // [rsp+24h] [rbp-CCh]
  float bBossRestrictedf; // [rsp+24h] [rbp-CCh]
  float bBossRestricted; // [rsp+24h] [rbp-CCh]
  bool bBossRestricteda; // [rsp+24h] [rbp-CCh]
  bool bBossRestrictedb; // [rsp+24h] [rbp-CCh]
  CBaseEntity *pEntity; // [rsp+28h] [rbp-C8h]
  CModifierParams params; // [rsp+30h] [rbp-C0h] BYREF

  (*(me->_vptr_IHandleEntity + 447))(me, 0, interval);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (pEntity = v9->m_pInstance, v9->m_pInstance == 0) )
  {
    if ( this->m_nMovementState == 0 )
      this->m_nMovementState = 2;
LABEL_7:
    CDOTABehaviorCommandMoveToTargetToAttack::UpdateTargetMissing(retstr, this, me);
    return retstr;
  }
  if ( pEntity->m_bIsDOTANPC )
  {
    m_pInstance = v9->m_pInstance;
    if ( pEntity[3].m_vecVelocity.m_Value.x < 0.0 )
      this->m_bFailedCast = 1;
  }
  else
  {
    m_pInstance = 0;
  }
  m_iMoveCapabilities = me->m_iMoveCapabilities;
  v13 = 1;
  if ( (m_iMoveCapabilities & 1) == 0 && (m_iMoveCapabilities & 2) == 0 )
    v13 = BYTE3(me->m_nUnitState64.m_Value) & 1 | ((me->m_nUnitState64.m_Value & 0x200000000LL) != 0);
  if ( m_pInstance != 0 && CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, me) )
  {
    CanEntityBeSeenByMyTeam = 1;
LABEL_18:
    if ( v13 == 0 )
    {
      v16 = operator new(0x80u);
      CDOTABehaviorIdle::CDOTABehaviorIdle(v16);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v16;
      retstr->m_reason = "Lost sight of target and no movement capability.";
      return retstr;
    }
    if ( this->m_nMovementState == 0 )
    {
      if ( CanEntityBeSeenByMyTeam || this->m_bFailedCast )
        v15 = 2;
      else
        v15 = 1;
      this->m_nMovementState = v15;
    }
    goto LABEL_7;
  }
  CanEntityBeSeenByMyTeam = CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, pEntity);
  if ( !CanEntityBeSeenByMyTeam )
    goto LABEL_18;
  if ( this->m_bFailedCast )
  {
    CanEntityBeSeenByMyTeam = 0;
    goto LABEL_18;
  }
  this->m_nMovementState = 0;
  CDOTA_BaseNPC::SetTargetLastKnownPosition(me, pEntity);
  Modifier_Constant_Highest_Internal = 0.0;
  p_m_ModifierManager = &me->m_ModifierManager;
  v18 = me->m_ModifierManager.m_buffsForModifiers[71];
  if ( v18 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v18].m_Size > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           p_m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v19 = me->m_ModifierManager.m_buffsForModifiers[69];
  Modifier_Constant_Additive_Internal = 0.0;
  m_iAttackRange = me->m_iAttackRange;
  if ( v19 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v19].m_Size > 0 )
  {
    bInvalidDenyb = Modifier_Constant_Highest_Internal;
    bBossRestrictedc = me->m_iAttackRange;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = bInvalidDenyb;
    m_iAttackRange = bBossRestrictedc;
  }
  v22 = me->m_ModifierManager.m_buffsForModifiers[70];
  v23 = m_iAttackRange + Modifier_Constant_Additive_Internal;
  v24 = 0.0;
  if ( v22 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v22].m_Size > 0 )
  {
    bInvalidDenyc = Modifier_Constant_Highest_Internal;
    bBossRestrictedd = v23;
    v24 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = bInvalidDenyc;
    v23 = bBossRestrictedd;
  }
  if ( Modifier_Constant_Highest_Internal > (v23 + v24) )
  {
    v40 = me->m_ModifierManager.m_buffsForModifiers[71];
    bBossRestricted = 0.0;
    if ( v40 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v40].m_Size > 0 )
      bBossRestricted = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                          p_m_ModifierManager,
                          modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                          &CModifierParams::s_Default);
  }
  else
  {
    v25 = me->m_ModifierManager.m_buffsForModifiers[69];
    v26 = 0.0;
    v27 = me->m_iAttackRange;
    if ( v25 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v25].m_Size > 0 )
    {
      bBossRestrictede = me->m_iAttackRange;
      v26 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v27 = bBossRestrictede;
    }
    v28 = me->m_ModifierManager.m_buffsForModifiers[70];
    m_iAttackRange = v27 + v26;
    v29 = 0.0;
    if ( v28 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v28].m_Size > 0 )
    {
      bBossRestrictedf = m_iAttackRange;
      v29 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      m_iAttackRange = bBossRestrictedf;
    }
    bBossRestricted = (v29 + m_iAttackRange);
  }
  if ( !CDOTA_BaseNPC::IsEntityInRangeForAttack(me, pEntity, m_iAttackRange)
    && !CDOTA_BaseNPC::IsEntityExceptToAttack(me, pEntity) )
  {
    if ( v13 == 0 )
    {
      v41 = operator new(0x80u);
      CDOTABehaviorIdle::CDOTABehaviorIdle(v41);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v41;
      retstr->m_reason = "Target out of range and no movement capability.";
      return retstr;
    }
  }
  else if ( !CDOTA_BaseNPC::IsActionLocked(me) )
  {
    if ( !this->m_bTurningToTarget )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
      v43 = (*(me->_vptr_IHandleEntity + 376))(me);
      CastAngle = CDOTALocomotor::GetCastAngle(v43, me, AbsOrigin);
      this->m_bTurningToTarget = 1;
      this->m_flTargetAngle = CastAngle;
    }
    m_bDeny = this->m_bDeny;
    bSameTeam = pEntity->m_iTeamNum.m_Value == me->m_iTeamNum.m_Value;
    if ( m_bDeny != 0 )
    {
      if ( m_pInstance == 0 )
        goto LABEL_65;
      bInvalidDeny = !CDOTA_BaseNPC::IsDeniable(m_pInstance);
    }
    else
    {
      if ( m_pInstance == 0 )
        goto LABEL_65;
      bInvalidDeny = 0;
    }
    bBossRestricteda = 0;
    if ( (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 0x800) != 0 )
      bBossRestricteda = !CDOTA_BaseNPC::CanAttackBoss(me);
    if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0
      || LOBYTE(m_pInstance[4].m_pfnMoveDone.__pfn) != 0
      || ((v31 = *&m_pInstance[3].m_vecVelocity.m_Value.x) & 0x100) != 0
      || (v31 & 4) != 0 && CDOTA_BaseNPC::FindModifierByName(me, "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", 0) == 0
      || bBossRestricteda
      || m_bDeny != bSameTeam
      || bInvalidDeny
      || me == m_pInstance )
    {
      v32 = 0;
      bInvalidDenya = 0;
      bBossRestrictedb = (me->m_nUnitState64.m_Value & 2) != 0;
      goto LABEL_68;
    }
LABEL_65:
    bBossRestrictedb = (me->m_nUnitState64.m_Value & 2) != 0;
    if ( (me->m_nUnitState64.m_Value & 2) != 0 )
    {
      v32 = 0;
    }
    else
    {
      v32 = 1;
      (*(me->_vptr_IHandleEntity + 447))(me, pEntity);
    }
    bInvalidDenya = 1;
LABEL_68:
    if ( !CDOTA_BaseNPC::AttackReady(me)
      || (m_flTargetAngle = this->m_flTargetAngle,
          target = CBaseEntity::GetAbsOrigin(pEntity),
          v45 = (*(me->_vptr_IHandleEntity + 376))(me),
          !CDOTALocomotor::IsFacingLocation(v45, target, LODWORD(m_flTargetAngle), v46)) )
    {
      v33 = (*(me->_vptr_IHandleEntity + 377))(me);
      CDOTABody::StartAnimation(v33, 0x5DCu, 0, 1.0);
      v34 = (*(me->_vptr_IHandleEntity + 376))(me);
      v35 = *(*v34 + 744LL);
      v36 = CBaseEntity::GetAbsOrigin(pEntity);
      v35(v34, v36);
      if ( !pEntity->m_bIsDOTANPC || *((*(pEntity->_vptr_IHandleEntity + 376))(pEntity) + 144) == 0 )
      {
        v37 = (*(me->_vptr_IHandleEntity + 376))(me);
        CDOTALocomotor::StopMovement(v37, 0);
      }
      goto LABEL_72;
    }
    if ( bSameTeam != 0
      && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
      && LOBYTE(m_pInstance[4].m_pfnMoveDone.__pfn) == 0 )
    {
      v50 = *&m_pInstance[3].m_vecVelocity.m_Value.x;
      if ( (v50 & 0x100) == 0
        && ((v50 & 4) == 0 || CDOTA_BaseNPC::FindModifierByName(me, "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL", 0) != 0) )
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
          v52 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v52 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                   | v52 & 0x7FFF;
        }
        v53 = pEntity->m_pEntity;
        if ( v53 != 0 )
        {
          v54 = 0x7FFF;
          if ( v53->m_EHandle.m_Index != -1 )
            v54 = v53->m_EHandle.m_Index & 0x7FFF;
          params.htarget.m_Index = (((v53->m_EHandle.m_Index >> 15) - (v53->m_flags & 1)) << 15) | v54 & 0x7FFF;
        }
        FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ATTACK_ALLIED, &params);
      }
    }
    if ( v32 != 0 )
    {
      if ( CDOTA_ModifierManager::GetModifier_Constant_Highest(
             p_m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_PERSISTENT_INVISIBILITY,
             &CModifierParams::s_Default) != 0.0
        || this->m_bInvisBreak
        || CDOTA_ModifierManager::GetModifier_Constant_Highest(
             p_m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_INVISIBILITY_LEVEL,
             &CModifierParams::s_Default) <= 0.0 )
      {
        if ( !this->m_bNightmareAttack && m_pInstance != 0 && (BYTE1(m_pInstance[3].m_vecVelocity.m_Value.x) & 8) != 0 )
        {
          v49 = operator new(0x80u);
          CDOTABehaviorIdle::CDOTABehaviorIdle(v49);
          retstr->m_type = ActionResultType::CHANGE_TO;
          retstr->m_action = v49;
          retstr->m_reason = "Reached attack moment but target is nightmared.";
        }
        else
        {
          v55 = operator new(0xC0u);
          CDOTABehaviorAttackPhase::CDOTABehaviorAttackPhase(v55, pEntity, this->m_bDeny, 0);
          this->m_eventResult.m_type = ActionResultType::CONTINUE;
          this->m_eventResult.m_action = 0;
          this->m_eventResult.m_reason = 0;
          this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
          retstr->m_type = ActionResultType::SUSPEND_FOR;
          retstr->m_action = v55;
          retstr->m_reason = "Beginning the attack.";
        }
      }
      else
      {
        v56 = operator new(0x80u);
        CDOTABehaviorIdle::CDOTABehaviorIdle(v56);
        retstr->m_type = ActionResultType::CHANGE_TO;
        retstr->m_action = v56;
        retstr->m_reason = "Reached attack moment but became invisible.";
      }
    }
    else if ( bBossRestrictedb && bInvalidDenya != 0 )
    {
      SendHudErrorToPlayer(106, me);
      v47 = operator new(0x160u);
      CDOTABehaviorCommandMoveToNPC::CDOTABehaviorCommandMoveToNPC(v47, m_pInstance, 1);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v47;
      retstr->m_reason = "Disarmed, will pursue target until I can attack.";
    }
    else
    {
      v48 = operator new(0x80u);
      CDOTABehaviorIdle::CDOTABehaviorIdle(v48);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v48;
      retstr->m_reason = "Reached attack moment but can't attack target.";
    }
    return retstr;
  }
  this->m_bTurningToTarget = 0;
  if ( m_pInstance != 0 )
    v38 = *&m_pInstance[2].m_bNetworkQuantizeOriginAndAngles;
  else
    v38 = 0.0;
  v39 = fmaxf(bBossRestricted - v38, 0.0);
  if ( v39 != this->m_MoveTo.m_flTargetDist )
  {
    this->m_MoveTo.m_flTargetDist = v39;
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_MoveTo.m_path.m_Positions);
  }
  CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
LABEL_72:
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorCommandMoveToTargetToAttack::OnCancelAttack  (line 283, @0x0000000002871d60, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorIdle, EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, TryChangeTo, TryContinue, operator CEntityInstance*, operator==, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToAttack::OnCancelAttack(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToAttack *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pTarget)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  char *v10; // r12

  if ( this->m_isSuspended
    && (pTarget == 0
     || (m_Index = this->m_hTarget.m_Index) + 2 > 1
     && (m_Index_low = LOWORD(this->m_hTarget.m_Index),
         (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
     && (v8 = &v7[m_Index_low & 0x1FF]) != 0
     && m_Index == v8->m_EHandle.m_Index
     && pTarget == v8->m_pInstance) )
  {
    v10 = operator new(0x80u);
    *(v10 + 16) = 0;
    *(v10 + 9) = 0;
    *(v10 + 10) = 0;
    *(v10 + 3) = 0;
    *(v10 + 4) = 0;
    *(v10 + 5) = 0;
    *(v10 + 6) = 0;
    *(v10 + 7) = 0;
    *(v10 + 2) = 0;
    v10[96] = 0;
    v10[97] = 0;
    *(v10 + 22) = 0;
    *v10 = &off_42C1970;
    *(v10 + 1) = &off_42C1DA0;
    CountdownTimer::CountdownTimer((v10 + 104));
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_action = v10;
    retstr->m_reason = 0;
    retstr->m_priority = EventResultPriorityType::RESULT_TRY;
    return retstr;
  }
  else
  {
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    retstr->m_priority = EventResultPriorityType::RESULT_TRY;
    return retstr;
  }
}


// CDOTABehaviorCommandMoveToTargetToAttack::OnCommandAttack  (line 296, @0x000000000287d720, libserver.so)  // inlines: EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Highest, IActionResult, InState, IndexToIdentity, IsListeningToEvent, IsNightmared, IsValid, LookupEntity, ToDOTABaseNPC, TryToSustain, operator CEntityInstance*
// calls: CDOTABehaviorCommandListener::OnCommandAttack, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToAttack::OnCommandAttack(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToAttack *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *goal,
        bool bDeny)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rsi
  CEntityIdentity *v9; // rsi
  CBaseEntity *m_pInstance; // rax
  __int64 v12; // rax
  bool v13; // si
  float Modifier_Constant_Highest_Internal; // xmm0_4
  CBaseEntity *goala; // [rsp+8h] [rbp-18h]

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( goal == m_pInstance )
  {
    v12 = me->m_ModifierManager.m_buffsForModifiers[9];
    v13 = 0;
    if ( v12 != 0xFF && me->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v12].m_Size > 0 )
    {
      goala = goal;
      Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                             &me->m_ModifierManager,
                                             modifierfunction::MODIFIER_PROPERTY_INVISIBILITY_LEVEL,
                                             &CModifierParams::s_Default);
      goal = goala;
      v13 = Modifier_Constant_Highest_Internal > 0.0;
    }
    this->m_bInvisBreak = v13;
    if ( goal != 0 )
    {
      this->m_bNightmareAttack = (*&goal[3].m_vecVelocity.m_Value.x & 0x800LL) != 0;
      this->m_bNightmareAttack &= 1u;
    }
    retstr->m_type = ActionResultType::SUSTAIN;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
    return retstr;
  }
  else
  {
    CDOTABehaviorCommandListener::OnCommandAttack(retstr, this, me, goal, bDeny);
    return retstr;
  }
}


// CDOTABehaviorCommandMoveToTargetToAttack::OnUnitTeleported  (line 318, @0x0000000002871520, libserver.so)  // inlines: EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, TryContinue, operator CEntityInstance*, operator=
// calls: CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_BaseNPC::SetAggroTarget
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToTargetToAttack::OnUnitTeleported(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToTargetToAttack *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  CBaseEntity *m_pInstance; // r10
  uint32 m_Index; // eax
  unsigned __int16 v9; // r11
  CEntityIdentity *v10; // rsi
  CEntityIdentity *v11; // rsi
  CBaseEntity *v13; // rsi

  m_pInstance = 0;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v9 = this->m_hTarget.m_Index;
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
    if ( pUnit != 0 && pUnit->m_bIsDOTANPC )
      v13 = pUnit;
    else
      v13 = 0;
    if ( bLongTeleport )
    {
      this->m_hTarget.m_Index = -1;
      CDOTA_BaseNPC::SetAggroTarget(me, 0);
      if ( this->m_nMovementState != 0 )
        goto LABEL_7;
    }
    else if ( this->m_nMovementState != 0 || CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(me, v13) )
    {
      goto LABEL_7;
    }
    this->m_nMovementState = 2;
  }
LABEL_7:
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  retstr->m_priority = EventResultPriorityType::RESULT_TRY;
  return retstr;
}


