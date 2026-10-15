
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToNPCToGive::CDOTABehaviorCommandMoveToNPCToGive  (line 14, @0x000000000287e300, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorMoveTo, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=, ~CDOTABehaviorCommandListener, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorCommandListener::OnGiveItem, CDOTABehaviorCreatureInvade::OnGiveItem
void __fastcall CDOTABehaviorCommandMoveToNPCToGive::CDOTABehaviorCommandMoveToNPCToGive(
        CDOTABehaviorCommandMoveToNPCToGive *const this,
        CDOTA_BaseNPC *pTarget,
        CBaseEntity *pItem)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // si
  int v8; // eax
  CEntityIdentity *v9; // rdx
  int v10; // eax
  __int16 v11; // cx

  this->_vptr_INextBotEventResponder = &off_42BCFD0;
  this->_vptr_IContextualQuery = &off_42BD400;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BD468;
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
  this->m_hItem.m_Index = -1;
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
  if ( pItem != 0 )
  {
    v9 = pItem->m_pEntity;
    if ( v9 != 0 )
    {
      v10 = (v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1);
      if ( v9->m_EHandle.m_Index == -1 )
        v11 = 0x7FFF;
      else
        v11 = v9->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hItem.m_Index) = v11 | this->m_hItem.m_Index & 0x8000;
      this->m_hItem.m_Index = (v10 << 15) | this->m_hItem.m_Index & 0x7FFF;
    }
  }
}


// CDOTABehaviorCommandMoveToNPCToGive::OnStart  (line 23, @0x0000000002873380, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, ~CDOTABehaviorCommandListener
// calls: CDOTA_BaseNPC::AdvanceMovementOrderTracking, operator new, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::SetTargetLastKnownPosition, CDOTABehaviorMoveTo::OnStart, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "Target handle NULL in OnStart"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToNPCToGive::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToNPCToGive *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  char *v10; // rbx
  CBaseEntity *m_pInstance; // rsi
  Vector v13; // [rsp+0h] [rbp-20h]

  CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v13, 0);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && (m_pInstance = v9->m_pInstance, v9->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    this->m_nMovementState = 0;
    CDOTA_BaseNPC::SetTargetLastKnownPosition(me, m_pInstance);
    CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
    this->m_flRange = 150.0;
    if ( me->m_iIsControllableByPlayer64.m_Value != 0 )
    {
      (*(this->_vptr_INextBotEventResponder + 66))(retstr, this, me, 0.0);
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
  else
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
    retstr->m_reason = "Target handle NULL in OnStart";
    retstr->m_action = v10;
    return retstr;
  }
}


// CDOTABehaviorCommandMoveToNPCToGive::GetTargetPosition  (line 44, @0x00000000028719c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetLastKnownPosition, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTABehaviorCommandMoveToNPCToGive::GetTargetPosition(
        CDOTABehaviorCommandMoveToNPCToGive *const this,
        CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  __int64 v11; // [rsp+10h] [rbp-10h]
  vec_t v12; // [rsp+18h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_nMovementState == 1 )
  {
    z = me->m_vTargetLastKnownPosition.z;
    x = me->m_vTargetLastKnownPosition.x;
    HIDWORD(v11) = LODWORD(me->m_vTargetLastKnownPosition.y);
    v12 = z;
    *&v11 = x;
    result.z = z;
    *&result.x = v11;
  }
  else
  {
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  return result;
}


// CDOTABehaviorCommandMoveToNPCToGive::UpdateTargetMissing  (line 56, @0x0000000002877c00, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, GetTargetLastKnownPosition, IActionResult, Length2DSqr, VectorSubtract, operator-, ~CDOTABehaviorCommandListener
// calls: CBaseEntity::GetAbsOrigin, operator new, CountdownTimer::CountdownTimer, CDOTABehaviorMoveTo::Update, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToNPCToGive::Update
// strings: "In range of the last known target position."
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToNPCToGive::UpdateTargetMissing(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToNPCToGive *const this,
        CDOTA_BaseNPC *me)
{
  const Vector *AbsOrigin; // rax
  char *v7; // rbx
  float x; // [rsp+8h] [rbp-28h]
  float y; // [rsp+Ch] [rbp-24h]

  x = me->m_vTargetLastKnownPosition.x;
  y = me->m_vTargetLastKnownPosition.y;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  if ( (((AbsOrigin->x - x) * (AbsOrigin->x - x)) + ((AbsOrigin->y - y) * (AbsOrigin->y - y))) > 22500.0 )
  {
    this->m_nMovementState = 1;
    CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
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
    retstr->m_reason = "In range of the last known target position.";
    retstr->m_action = v7;
    return retstr;
  }
}


// CDOTABehaviorCommandMoveToNPCToGive::Update  (line 69, @0x0000000002877d90, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, CEntityHandle, ChangeTo, Continue, EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IActionResult, IndexToIdentity, Init, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CDOTABehaviorCommandListener
// calls: CDOTABehaviorCommandMoveToNPCToGive::UpdateTargetMissing, CDOTA_BaseNPC::SetTargetLastKnownPosition, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GiveItem, operator new, CountdownTimer::CountdownTimer, CDOTABehaviorMoveTo::Update, CDOTA_BaseNPC::GetRangeToUnit, CDOTABehaviorIdle::CDOTABehaviorIdle, CDOTA_BaseNPC::IsInRangeOfShop, operator delete, _Unwind_Resume (14 total)
// strings: "Gave the item!", "Reached target and target is dead.", "Item.DropRingShop"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToNPCToGive::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToNPCToGive *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_Item *v12; // rax
  char *v13; // r12
  CEntityInstance *v14; // r12
  int v15; // ecx
  unsigned __int16 v16; // dx
  int v17; // esi
  int v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTABehaviorIdle *v21; // r12

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v8 == 0 )
    goto LABEL_5;
  v9 = &v8[this->m_hTarget.m_Index & 0x1FF];
  if ( v9 == 0 )
    goto LABEL_5;
  if ( m_Index != v9->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v9->m_pInstance;
  if ( v9->m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  if ( HIBYTE(m_pInstance[7].m_CScriptComponent) != me->m_iTeamNum.m_Value
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x200) == 0 )
  {
    this->m_hTarget.m_Index = -1;
LABEL_5:
    CDOTABehaviorCommandMoveToNPCToGive::UpdateTargetMissing(retstr, this, me);
    return retstr;
  }
  this->m_nMovementState = 0;
  CDOTA_BaseNPC::SetTargetLastKnownPosition(me, m_pInstance);
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x200) != 0 )
  {
    if ( me->m_iCurShop.m_Value != DOTA_SHOP_TYPE::DOTA_SHOP_NONE )
    {
      v12 = CEntityHandle::operator CEntityInstance *(&this->m_hItem);
      if ( v12 != 0 )
        CDOTA_BaseNPC::GiveItem(me, v12, m_pInstance, 1, -1);
      v13 = operator new(0x80u);
      *(v13 + 16) = 0;
      *(v13 + 9) = 0;
      *(v13 + 10) = 0;
      *(v13 + 3) = 0;
      *(v13 + 4) = 0;
      *(v13 + 5) = 0;
      *(v13 + 6) = 0;
      *(v13 + 7) = 0;
      *(v13 + 2) = 0;
      v13[96] = 0;
      v13[97] = 0;
      *(v13 + 22) = 0;
      *v13 = &off_42C1970;
      *(v13 + 1) = &off_42C1DA0;
      CountdownTimer::CountdownTimer((v13 + 104));
LABEL_17:
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_reason = "Gave the item!";
      retstr->m_action = v13;
      return retstr;
    }
  }
  else if ( this->m_flRange > CDOTA_BaseNPC::GetRangeToUnit(me, m_pInstance) )
  {
    if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
    {
      v21 = operator new(0x80u);
      CDOTABehaviorIdle::CDOTABehaviorIdle(v21);
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v21;
      retstr->m_reason = "Reached target and target is dead.";
      return retstr;
    }
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_hItem);
    if ( v14 != 0 )
    {
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && CDOTA_BaseNPC::IsInRangeOfShop(m_pInstance, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0) )
      {
        v15 = 3;
      }
      else
      {
        v15 = 1;
      }
      CDOTA_BaseNPC::GiveItem(me, v14, m_pInstance, v15, -1);
      if ( HIDWORD(v14[11].m_pEntity) == -1 )
      {
        v16 = 0x7FFF;
        v17 = 0x7FFF;
      }
      else
      {
        v16 = WORD2(v14[11].m_pEntity) & 0x7FFF;
        v17 = v16;
      }
      v18 = (HIDWORD(v14[11].m_pEntity) >> 15 << 15) | v16 & 0x7FFF;
      if ( (v18 + 2) > 1 )
      {
        v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9];
        if ( v19 != 0 )
        {
          v20 = &v19[v17 & 0x1FF];
          if ( v20 != 0 && v18 == v20->m_EHandle.m_Index && m_pInstance == v20->m_pInstance )
            DOTA_EmitSound(9, "Item.DropRingShop", m_pInstance);
        }
      }
    }
    v13 = operator new(0x80u);
    CDOTABehaviorIdle::CDOTABehaviorIdle(v13);
    goto LABEL_17;
  }
  CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


// CDOTABehaviorCommandMoveToNPCToGive::OnUnitTeleported  (line 134, @0x0000000002871260, libserver.so)  // inlines: EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, Set, TryContinue, operator CEntityInstance*, operator=
// globals: CEntityHandle::gm_pEntityList
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToNPCToGive::OnUnitTeleported(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToNPCToGive *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *pUnit,
        bool bLongTeleport)
{
  uint32 m_Index; // edx
  EventDesiredResult<CDOTA_BaseNPC> *result; // rax
  CBaseEntity *m_pInstance; // r9
  CEntityIdentity *v8; // rdi
  CEntityIdentity *v9; // rdi

  m_Index = this->m_hTarget.m_Index;
  result = retstr;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hTarget.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( pUnit == m_pInstance && bLongTeleport )
    this->m_hTarget.m_Index = -1;
  result->m_type = ActionResultType::CONTINUE;
  result->m_action = 0;
  result->m_reason = 0;
  result->m_priority = EventResultPriorityType::RESULT_TRY;
  return result;
}


