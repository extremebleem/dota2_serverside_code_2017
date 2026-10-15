
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandMoveToPositionToDropItem::CDOTABehaviorCommandMoveToPositionToDropItem  (line 13, @0x000000000287e100, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorMoveTo, CEntityHandle, CHandle, EventDesiredResult, GetEHandle, GetEntryIndex, GetSerialNumber, IActionResult, Set, operator=, ~CDOTABehaviorCommandListener, ~CGridNavPath, ~CUtlVector
// calls: CGridNavPath::CGridNavPath, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTABehaviorCommandListener::OnDropItem, CDOTABehaviorCreatureInvade::OnDropItem
void __fastcall CDOTABehaviorCommandMoveToPositionToDropItem::CDOTABehaviorCommandMoveToPositionToDropItem(
        CDOTABehaviorCommandMoveToPositionToDropItem *const this,
        const Vector *const vPosition,
        CBaseEntity *pItem)
{
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx

  this->_vptr_INextBotEventResponder = &off_42BE2D0;
  this->_vptr_IContextualQuery = &off_42BE700;
  this->_vptr_IDOTABehaviorMoveTo = &off_42BE768;
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
  this->m_hItem.m_Index = -1;
  this->m_vPosition = *vPosition;
  if ( pItem != 0 )
  {
    m_pEntity = pItem->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hItem.m_Index) = v8 | this->m_hItem.m_Index & 0x8000;
      this->m_hItem.m_Index = (v7 << 15) | this->m_hItem.m_Index & 0x7FFF;
    }
  }
}


// CDOTABehaviorCommandMoveToPositionToDropItem::OnStart  (line 21, @0x0000000002870a90, libserver.so)  // inlines: ActionResult, Continue, IActionResult
// calls: CDOTA_BaseNPC::AdvanceMovementOrderTracking, CDOTABehaviorMoveTo::OnStart
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionToDropItem::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionToDropItem *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  Vector v8; // [rsp+0h] [rbp-20h]

  CDOTA_BaseNPC::AdvanceMovementOrderTracking(me, 0, v8, 0);
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


// CDOTABehaviorCommandMoveToPositionToDropItem::Update  (line 30, @0x0000000002872b90, libserver.so)  // inlines: Action, ActionResult, CDOTABehaviorCommandListener, CDOTABehaviorIdle, ChangeTo, Continue, EventDesiredResult, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IActionResult, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, ~CDOTABehaviorCommandListener
// calls: CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::DropItemOnLocation, operator new, CountdownTimer::CountdownTimer, CDOTABehaviorMoveTo::Update, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "In Range to Drop!"
// globals: CEntityHandle::gm_pEntityList
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandMoveToPositionToDropItem::Update(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandMoveToPositionToDropItem *const this,
        CDOTA_BaseNPC *me,
        float interval)
{
  uint32 m_Index; // eax
  CDOTA_Item *m_pInstance; // r14
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_UnitInventory *Inventory; // rax
  char *v12; // rbx

  if ( (*(me->_vptr_INextBotEventResponder + 93))(&me->INextBot, &this->m_vPosition, interval) > 100.0 )
  {
    CDOTABehaviorMoveTo::Update(&this->m_MoveTo, &this->IDOTABehaviorMoveTo, me, 0.0);
    retstr->m_type = ActionResultType::CONTINUE;
    retstr->m_action = 0;
    retstr->m_reason = 0;
    return retstr;
  }
  else
  {
    m_Index = this->m_hItem.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hItem.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[this->m_hItem.m_Index & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    Inventory = CDOTA_BaseNPC::GetInventory(me);
    CDOTA_UnitInventory::DropItemOnLocation(Inventory, m_pInstance, *&this->m_vPosition.x, this->m_vPosition.z);
    v12 = operator new(0x80u);
    *(v12 + 16) = 0;
    *(v12 + 9) = 0;
    *(v12 + 10) = 0;
    *(v12 + 3) = 0;
    *(v12 + 4) = 0;
    *(v12 + 5) = 0;
    *(v12 + 6) = 0;
    *(v12 + 7) = 0;
    *(v12 + 2) = 0;
    v12[96] = 0;
    v12[97] = 0;
    *(v12 + 22) = 0;
    *v12 = &off_42C1970;
    *(v12 + 1) = &off_42C1DA0;
    CountdownTimer::CountdownTimer((v12 + 104));
    retstr->m_type = ActionResultType::CHANGE_TO;
    retstr->m_reason = "In Range to Drop!";
    retstr->m_action = v12;
    return retstr;
  }
}


