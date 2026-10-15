
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToItemToTake::CDOTABehaviorCommandMoveToItemToTake  (line 14, @0x000000000287d370, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorMoveTo, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=, ~CDOTABehaviorCommandListener, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorCommandListener::OnPickupItem, CDOTABehaviorCreatureInvade::OnPickupItem
void __fastcall CDOTABehaviorCommandMoveToItemToTake::CDOTABehaviorCommandMoveToItemToTake(
        CDOTABehaviorCommandMoveToItemToTake *const this,
        CBaseEntity *pItem)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx

  this->_vptr_INextBotEventResponder = &off_42BC650;
  this->m_eventResult.m_type = ActionResultType::CONTINUE;
  this->_vptr_IContextualQuery = &off_42BCA80;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BCAE8;
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
  this->m_hItem.m_Index = -1;
  if ( pItem != 0 )
  {
    m_pEntity = pItem->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hItem.m_Index) = v6 | this->m_hItem.m_Index & 0x8000;
      this->m_hItem.m_Index = (v5 << 15) | this->m_hItem.m_Index & 0x7FFF;
    }
  }
}


// CDOTABehaviorCommandMoveToItemToTake::OnStart  (line 21, @0x0000000002872fc0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, ~CDOTABehaviorCommandListener
// calls: CDOTA_BaseNPC::AdvanceMovementOrderTracking, operator new, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::SetTargetLastKnownPosition, CDOTABehaviorMoveTo::OnStart, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "Target handle NULL in OnStart"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToItemToTake::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToItemToTake *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  char *v10; // r12
  Vector v12; // [rsp+0h] [rbp-20h]

  CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v12, 0);
  m_Index = this->m_hItem.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hItem.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[this->m_hItem.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && v9->m_pInstance != 0 )
  {
    CDOTA_BaseNPC::SetTargetLastKnownPosition(me, v9->m_pInstance);
    CDOTABehaviorMoveTo::OnStart(&this->m_MoveTo);
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


// CDOTABehaviorCommandMoveToItemToTake::GetTargetPosition  (line 38, @0x0000000002871630, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetLastKnownPosition, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTABehaviorCommandMoveToItemToTake::GetTargetPosition(
        CDOTABehaviorCommandMoveToItemToTake *const this,
        CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  const Vector *AbsOrigin; // rax
  __int64 v10; // [rsp+10h] [rbp-10h]
  vec_t v11; // [rsp+18h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = this->m_hItem.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hItem.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hItem.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4->m_pInstance);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  else
  {
    z = me->m_vTargetLastKnownPosition.z;
    x = me->m_vTargetLastKnownPosition.x;
    HIDWORD(v10) = LODWORD(me->m_vTargetLastKnownPosition.y);
    v11 = z;
    *&v10 = x;
    result.z = z;
    *&result.x = v10;
  }
  return result;
}


// CDOTABehaviorCommandMoveToItemToTake::UpdateTargetMissing  (line 49, @0x0000000002877540, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, GetTargetLastKnownPosition, IActionResult, Length2DSqr, VectorSubtract, operator-, ~CDOTABehaviorCommandListener
// calls: CBaseEntity::GetAbsOrigin, operator new, CountdownTimer::CountdownTimer, CDOTABehaviorMoveTo::Update, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToItemToTake::Update
// strings: "In range of the last known target position."
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToItemToTake::UpdateTargetMissing(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToItemToTake *const this,
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


// CDOTABehaviorCommandMoveToItemToTake::Update  (line 61, @0x00000000028776d0, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, Get, GetContainedItem, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, operator CDOTA_Item*, operator CEntityInstance*, ~CDOTABehaviorCommandListener
// calls: CDOTABehaviorCommandMoveToItemToTake::UpdateTargetMissing, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::PickupItem, operator new, CountdownTimer::CountdownTimer, CDOTABehaviorMoveTo::Update, CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "Done trying to pickup item!"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToItemToTake::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToItemToTake *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_Item_Physical *v11; // r15
  float (__fastcall *v12)(INextBot *, const Vector *); // r14
  const Vector *AbsOrigin; // rax
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_UnitInventory *v17; // rax
  char *v18; // rbx
  CDOTABaseAbility *m_pInstance; // rbx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTABehaviorCommandCastHere *v21; // r13

  m_Index = this->m_hItem.m_Index;
  if ( m_Index + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hItem.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[this->m_hItem.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && (v11 = v9->m_pInstance, v9->m_pInstance != 0) )
  {
    v12 = *(me->_vptr_INextBotEventResponder + 93);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9->m_pInstance);
    if ( v12(&me->INextBot, AbsOrigin) > 150.0 )
    {
      CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
      retstr->m_type = ActionResultType::CONTINUE;
      retstr->m_action = 0;
      retstr->m_reason = 0;
    }
    else
    {
      v14 = v11->m_hItem.m_Value.m_Index;
      if ( v14 + 2 > 1
        && (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_hItem.m_Value.m_Index) >> 9) & 0x3F]) != 0
        && (v16 = &v15[v11->m_hItem.m_Value.m_Index & 0x1FF]) != 0
        && v14 == v16->m_EHandle.m_Index )
      {
        m_pInstance = v16->m_pInstance;
        Inventory = CDOTA_BaseNPC::GetInventory(me);
        if ( CDOTA_UnitInventory::PickupItem(Inventory, v11)
          && m_pInstance != 0
          && (*(m_pInstance->_vptr_IHandleEntity + 357))(m_pInstance) != 0 )
        {
          v21 = operator new(0x68u);
          CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere(v21, m_pInstance);
          retstr->m_type = ActionResultType::CHANGE_TO;
          retstr->m_action = v21;
          retstr->m_reason = 0;
          return retstr;
        }
      }
      else
      {
        v17 = CDOTA_BaseNPC::GetInventory(me);
        CDOTA_UnitInventory::PickupItem(v17, v11);
      }
      v18 = operator new(0x80u);
      *(v18 + 16) = 0;
      *(v18 + 9) = 0;
      *(v18 + 10) = 0;
      *(v18 + 3) = 0;
      *(v18 + 4) = 0;
      *(v18 + 5) = 0;
      *(v18 + 6) = 0;
      *(v18 + 7) = 0;
      *(v18 + 2) = 0;
      v18[96] = 0;
      v18[97] = 0;
      *(v18 + 22) = 0;
      *v18 = &off_42C1970;
      *(v18 + 1) = &off_42C1DA0;
      CountdownTimer::CountdownTimer((v18 + 104));
      retstr->m_type = ActionResultType::CHANGE_TO;
      retstr->m_action = v18;
      retstr->m_reason = "Done trying to pickup item!";
    }
  }
  else
  {
    CDOTABehaviorCommandMoveToItemToTake::UpdateTargetMissing(retstr, this, me);
  }
  return retstr;
}


