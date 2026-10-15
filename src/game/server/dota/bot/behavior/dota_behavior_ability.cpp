
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorAbility::CDOTABehaviorAbility  (line 14, @0x00000000028744d0, libserver.so)  // inlines: Action, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=
// callers: CDOTABehaviorCommandCastHere::CheckTransition
void __fastcall CDOTABehaviorAbility::CDOTABehaviorAbility(
        CDOTABehaviorAbility *const this,
        CDOTABaseAbility *pAbility)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx

  this->_vptr_INextBotEventResponder = &off_42BA0F0;
  this->_vptr_IContextualQuery = &off_42BA510;
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->m_eventResult.m_action = 0;
  this->m_eventResult.m_reason = 0;
  x = vec3_origin.x;
  this->m_parent = 0;
  this->m_child = 0;
  this->m_where.x = x;
  y = vec3_origin.y;
  this->m_buriedUnderMe = 0;
  this->m_where.y = y;
  z = vec3_origin.z;
  this->m_coveringMe = 0;
  this->m_actor = 0;
  this->m_behavior = 0;
  this->m_isStarted = 0;
  this->m_isSuspended = 0;
  this->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
  this->m_who.m_Index = -1;
  this->m_hAbility.m_Index = -1;
  this->m_where.z = z;
  this->m_bNoTarget = 1;
  this->m_nTargetType = 0;
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


// CDOTABehaviorAbility::CDOTABehaviorAbility  (line 25, @0x00000000028745d0, libserver.so)  // inlines: Action, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=
// callers: CDOTABehaviorCommandMoveToPositionToCast::Update, CDOTA_BaseNPC_Creature::ConsiderUsingAbilities
void __fastcall CDOTABehaviorAbility::CDOTABehaviorAbility(
        CDOTABehaviorAbility *const this,
        CDOTABaseAbility *pAbility,
        const Vector *const whereTo)
{
  vec_t z; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx

  this->_vptr_INextBotEventResponder = &off_42BA0F0;
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
  this->_vptr_IContextualQuery = &off_42BA510;
  this->m_who.m_Index = -1;
  this->m_hAbility.m_Index = -1;
  this->m_where.x = whereTo->x;
  this->m_where.y = whereTo->y;
  z = whereTo->z;
  this->m_bNoTarget = 0;
  this->m_nTargetType = 1;
  this->m_where.z = z;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v6 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v5 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
}


// CDOTABehaviorAbility::CDOTABehaviorAbility  (line 36, @0x00000000028746d0, libserver.so)  // inlines: Action, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=
// calls: CBaseEntity::GetAbsOrigin, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTA_BaseNPC_Creature::ConsiderUsingAbilities
void __fastcall CDOTABehaviorAbility::CDOTABehaviorAbility(
        CDOTABehaviorAbility *const this,
        CDOTABaseAbility *pAbility,
        CBaseEntity *who)
{
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  __int16 m_Index; // dx
  CEntityIdentity *v10; // rdx
  int v11; // eax
  __int16 v12; // cx

  this->_vptr_INextBotEventResponder = &off_42BA0F0;
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
  this->_vptr_IContextualQuery = &off_42BA510;
  this->m_who.m_Index = -1;
  this->m_hAbility.m_Index = -1;
  this->m_where = *CBaseEntity::GetAbsOrigin(who);
  if ( who != 0 && (m_pEntity = who->m_pEntity) != 0 )
  {
    v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v8 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    m_Index = this->m_who.m_Index;
    this->m_bNoTarget = 0;
    this->m_nTargetType = 2;
    LOWORD(this->m_who.m_Index) = v8 | m_Index & 0x8000;
    this->m_who.m_Index = (v7 << 15) | this->m_who.m_Index & 0x7FFF;
    if ( pAbility == 0 )
      goto LABEL_12;
  }
  else
  {
    this->m_who.m_Index = -1;
    this->m_bNoTarget = 0;
    this->m_nTargetType = 2;
    if ( pAbility == 0 )
      goto LABEL_12;
  }
  v10 = pAbility->m_pEntity;
  if ( v10 == 0 )
  {
LABEL_12:
    this->m_hAbility.m_Index = -1;
    return;
  }
  v11 = (v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1);
  if ( v10->m_EHandle.m_Index == -1 )
    v12 = 0x7FFF;
  else
    v12 = v10->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_hAbility.m_Index) = v12 | this->m_hAbility.m_Index & 0x8000;
  this->m_hAbility.m_Index = (v11 << 15) | this->m_hAbility.m_Index & 0x7FFF;
}


// CDOTABehaviorAbility::OnStart  (line 47, @0x0000000002872490, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, operator CBaseEntity*, operator CEntityInstance*
// calls: __dynamic_cast, CDOTALocomotor::StopMovement
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAbility::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAbility *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  char *v9; // rdx
  CDOTALocomotor *v11; // rax

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    priorAction = LOWORD(this->m_hAbility.m_Index);
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(priorAction >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      priorAction = (120LL * (priorAction & 0x1FF));
      v9 = v8 + priorAction;
      if ( v9 != 0
        && m_Index == *(v9 + 4)
        && *v9 != 0
        && __dynamic_cast(*v9, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0) != 0 )
      {
        v11 = (*(me->_vptr_IHandleEntity + 376))(me);
        CDOTALocomotor::StopMovement(v11, 0);
      }
    }
  }
  (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, priorAction, 0.0);
  return retstr;
}


// CDOTABehaviorAbility::InitialContainedAction  (line 61, @0x0000000002874ae0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetCursorCastTarget, SetCursorPosition, SetCursorTargetingNothing, operator CEntityInstance*, operator=
// calls: operator new, CDOTABehaviorAbilityPhase::CDOTABehaviorAbilityPhase, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
Action<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAbility::InitialContainedAction(
        CDOTABehaviorAbility *const this,
        CDOTA_BaseNPC *me)
{
  CConcreteEntityList *v2; // r8
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  CDOTABaseAbility *m_pInstance; // r12
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTABehaviorAbilityPhase *v12; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx

  v2 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_who.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_who.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[this->m_who.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0
    && (m_pEntity = v5->m_pInstance->m_pEntity) != 0 )
  {
    v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v16 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(me->m_hCursorTarget.m_Index) = v16 | me->m_hCursorTarget.m_Index & 0x8000;
    me->m_hCursorTarget.m_Index = (v15 << 15) | me->m_hCursorTarget.m_Index & 0x7FFF;
  }
  else
  {
    me->m_hCursorTarget.m_Index = -1;
  }
  y = this->m_where.y;
  z = this->m_where.z;
  me->m_vCursorLocation.x = this->m_where.x;
  me->m_vCursorLocation.y = y;
  me->m_vCursorLocation.z = z;
  me->m_bCursorTargetingNothing = this->m_nTargetType == 0;
  m_pInstance = 0;
  v9 = this->m_hAbility.m_Index;
  if ( v9 + 2 > 1 )
  {
    v10 = v2->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_hAbility.m_Index & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  v12 = operator new(0xA8u);
  CDOTABehaviorAbilityPhase::CDOTABehaviorAbilityPhase(v12, m_pInstance);
  return v12;
}


// CDOTABehaviorAbility::Update  (line 73, @0x0000000002873780, libserver.so)  // inlines: ActionResult, Continue, Done, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, Length2DSqr, LookupEntity, ToDOTAAbility, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=
// calls: __dynamic_cast, CBaseEntity::GetAbsOrigin
// strings: "Casting complete"
// globals: `typeinfo for'Action<CDOTA_BaseNPC>, `typeinfo for'CDOTABehaviorAbilityPhase, CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorAbility::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorAbility *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  Action<CDOTA_BaseNPC> *m_child; // rdi
  _BYTE *v8; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const Vector *AbsOrigin; // rax
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  void *v17; // rax
  __int64 v18; // rax

  m_child = this->m_child;
  if ( m_child != 0 )
  {
    if ( !this->m_bNoTarget )
    {
      v8 = __dynamic_cast(m_child, &`typeinfo for'Action<CDOTA_BaseNPC>, &`typeinfo for'CDOTABehaviorAbilityPhase, 0);
      if ( v8 == 0 || v8[152] == 0 )
      {
        m_Index = this->m_who.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_who.m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[this->m_who.m_Index & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
              this->m_where = *CBaseEntity::GetAbsOrigin(v12->m_pInstance);
          }
        }
        AbsOrigin = CBaseEntity::GetAbsOrigin(me);
        if ( (((this->m_where.x - AbsOrigin->x) * (this->m_where.x - AbsOrigin->x))
            + ((this->m_where.y - AbsOrigin->y) * (this->m_where.y - AbsOrigin->y))) >= 2.0 )
        {
          v14 = this->m_hAbility.m_Index;
          if ( v14 + 2 > 1 )
          {
            v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
            if ( v15 != 0 )
            {
              v16 = &v15[this->m_hAbility.m_Index & 0x1FF];
              if ( v16 != 0 && v14 == v16->m_EHandle.m_Index && v16->m_pInstance != 0 )
              {
                v17 = __dynamic_cast(v16->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
                if ( v17 != 0 && (*(*v17 + 2416LL))(v17) != 0 )
                {
                  v18 = (*(me->_vptr_IHandleEntity + 376))(me);
                  (*(*v18 + 744LL))(v18, &this->m_where);
                }
              }
            }
          }
        }
      }
    }
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  else
  {
    retstr->m_type = ActionResultType::DONE;
    retstr->m_reason = "Casting complete";
    retstr->m_action = 0;
    return retstr;
  }
}


// CDOTABehaviorAbility::OnEnd  (line 112, @0x0000000002870720, libserver.so)  // inlines: Set, SetCursorCastTarget, SetCursorPosition, operator=
void __fastcall CDOTABehaviorAbility::OnEnd(
        CDOTABehaviorAbility *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *nextAction)
{
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4

  me->m_hCursorTarget.m_Index = -1;
  z = vec3_origin.z;
  x = vec3_origin.x;
  me->m_vCursorLocation.y = vec3_origin.y;
  me->m_vCursorLocation.z = z;
  me->m_vCursorLocation.x = x;
}


