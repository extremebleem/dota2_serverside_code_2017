
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorCommandListener::OnCommandMoveTo  (line 23, @0x000000000287ce50, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition, operator delete, _Unwind_Resume
// strings: "Commanded to move to a position"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnCommandMoveTo(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos)
{
  CDOTABehaviorCommandMoveToPosition *v6; // r12

  v6 = operator new(0x160u);
  CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition(v6, pos, 0);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to move to a position";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnCommandMoveToDirection  (line 29, @0x000000000287cec0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition, operator delete, _Unwind_Resume
// strings: "Commanded to move to a position"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnCommandMoveToDirection(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos)
{
  CDOTABehaviorCommandMoveToPosition *v6; // r12

  v6 = operator new(0x160u);
  CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition(v6, pos, 1);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to move to a position";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnCommandMoveToAggressive  (line 36, @0x000000000287cf30, libserver.so)  // inlines: CDOTABehaviorCommandMoveToPositionAggressive, EventDesiredResult, IActionResult, InState, IsInvisible, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition, operator delete, _Unwind_Resume
// strings: "Commanded to move to a position aggressively"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnCommandMoveToAggressive(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos)
{
  char v6; // r13
  CDOTABehaviorCommandMoveToPosition *v7; // rbx

  v6 = me->m_nUnitState64.m_Value >> 7;
  v7 = operator new(0x160u);
  CDOTABehaviorCommandMoveToPosition::CDOTABehaviorCommandMoveToPosition(v7, pos, 0);
  *(&v7->m_bDirectional + 1) = v6 & 1;
  v7->_vptr_INextBotEventResponder = &off_42BD950;
  v7->_vptr_IContextualQuery = &off_42BDD88;
  v7->_vptr_IDOTABehaviorMoveTo = &off_42BDDF0;
  retstr->m_reason = "Commanded to move to a position aggressively";
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_action = v7;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnCommandPatrol  (line 42, @0x000000000287d130, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandPatrol::CDOTABehaviorCommandPatrol, operator delete, _Unwind_Resume
// strings: "Commanded to patrol an area"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnCommandPatrol(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos)
{
  CDOTABehaviorCommandPatrol *v6; // r12

  v6 = operator new(0x180u);
  CDOTABehaviorCommandPatrol::CDOTABehaviorCommandPatrol(v6, pos);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to patrol an area";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnCommandApproach  (line 48, @0x000000000287de80, libserver.so)  // inlines: EventDesiredResult, IActionResult, ToDOTABaseNPC, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToNPC::CDOTABehaviorCommandMoveToNPC, operator delete, _Unwind_Resume
// strings: "Commanded to chase an entity"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnCommandApproach(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *entity)
{
  CDOTA_BaseNPC *v5; // r13
  CDOTABehaviorCommandMoveToNPC *v6; // r12

  if ( entity != 0 && entity->m_bIsDOTANPC )
    v5 = entity;
  else
    v5 = 0;
  v6 = operator new(0x160u);
  CDOTABehaviorCommandMoveToNPC::CDOTABehaviorCommandMoveToNPC(v6, v5, 0);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to chase an entity";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnCommandAttack  (line 55, @0x000000000287d6b0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToTargetToAttack::CDOTABehaviorCommandMoveToTargetToAttack, operator delete, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToTargetToAttack::OnCommandAttack
// strings: "Commanded to attack an entity"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnCommandAttack(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *entity,
        bool bDeny)
{
  CDOTABehaviorCommandMoveToTargetToAttack *v8; // r12

  v8 = operator new(0x168u);
  CDOTABehaviorCommandMoveToTargetToAttack::CDOTABehaviorCommandMoveToTargetToAttack(v8, entity, bDeny);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to attack an entity";
  retstr->m_action = v8;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnCastAbilityNoTarget  (line 62, @0x0000000002877280, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere
// strings: "Commanded to cast an ability with no target"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnCastAbilityNoTarget(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        CDOTABaseAbility *ability)
{
  CDOTABehaviorCommandCastHere *v6; // r12

  v6 = operator new(0x68u);
  CDOTABehaviorCommandCastHere::CDOTABehaviorCommandCastHere(v6, ability);
  retstr->m_action = v6;
  retstr->m_reason = "Commanded to cast an ability with no target";
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnCastAbilityOnPosition  (line 69, @0x000000000287e090, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToPositionToCast::CDOTABehaviorCommandMoveToPositionToCast, operator delete, _Unwind_Resume
// strings: "Commanded to cast an ability on a position"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnCastAbilityOnPosition(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        CDOTABaseAbility *ability,
        const Vector *const pos)
{
  CDOTABehaviorCommandMoveToPositionToCast *v8; // r12

  v8 = operator new(0x168u);
  CDOTABehaviorCommandMoveToPositionToCast::CDOTABehaviorCommandMoveToPositionToCast(v8, ability, pos);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to cast an ability on a position";
  retstr->m_action = v8;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnCastAbilityOnTarget  (line 76, @0x000000000287e720, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast, operator delete, _Unwind_Resume
// strings: "Commanded to cast an ability on given entity"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnCastAbilityOnTarget(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        CDOTABaseAbility *ability,
        CBaseEntity *target)
{
  CDOTABehaviorCommandMoveToTargetToCast *v8; // r12

  v8 = operator new(0x170u);
  CDOTABehaviorCommandMoveToTargetToCast::CDOTABehaviorCommandMoveToTargetToCast(v8, ability, target);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to cast an ability on given entity";
  retstr->m_action = v8;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnDropItem  (line 83, @0x000000000287e290, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToPositionToDropItem::CDOTABehaviorCommandMoveToPositionToDropItem, operator delete, _Unwind_Resume
// strings: "Commanded to drop an item"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnDropItem(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        const Vector *const pos,
        CBaseEntity *item)
{
  CDOTABehaviorCommandMoveToPositionToDropItem *v8; // r12

  v8 = operator new(0x160u);
  CDOTABehaviorCommandMoveToPositionToDropItem::CDOTABehaviorCommandMoveToPositionToDropItem(v8, pos, item);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to drop an item";
  retstr->m_action = v8;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnGiveItem  (line 90, @0x000000000287e4d0, libserver.so)  // inlines: EventDesiredResult, IActionResult, ToDOTABaseNPC, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToNPCToGive::CDOTABehaviorCommandMoveToNPCToGive, operator delete, _Unwind_Resume
// strings: "Commanded to give an item to an npc"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnGiveItem(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *target,
        CBaseEntity *item)
{
  CDOTA_BaseNPC *v7; // r13
  CDOTABehaviorCommandMoveToNPCToGive *v8; // r12

  if ( target != 0 && target->m_bIsDOTANPC )
    v7 = target;
  else
    v7 = 0;
  v8 = operator new(0x160u);
  CDOTABehaviorCommandMoveToNPCToGive::CDOTABehaviorCommandMoveToNPCToGive(v8, v7, item);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to give an item to an npc";
  retstr->m_action = v8;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnPickupItem  (line 97, @0x000000000287d4d0, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToItemToTake::CDOTABehaviorCommandMoveToItemToTake, operator delete, _Unwind_Resume
// strings: "Commanded to pick up an item"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnPickupItem(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *item)
{
  CDOTABehaviorCommandMoveToItemToTake *v6; // r12

  v6 = operator new(0x158u);
  CDOTABehaviorCommandMoveToItemToTake::CDOTABehaviorCommandMoveToItemToTake(v6, item);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to pick up an item";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnPickupRune  (line 104, @0x000000000287d300, libserver.so)  // inlines: EventDesiredResult, IActionResult, TryChangeTo
// calls: operator new, CDOTABehaviorCommandMoveToRuneToTake::CDOTABehaviorCommandMoveToRuneToTake, operator delete, _Unwind_Resume
// strings: "Commanded to pick up a rune"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnPickupRune(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
        CDOTA_BaseNPC *me,
        CBaseEntity *rune)
{
  CDOTABehaviorCommandMoveToRuneToTake *v6; // r12

  v6 = operator new(0x158u);
  CDOTABehaviorCommandMoveToRuneToTake::CDOTABehaviorCommandMoveToRuneToTake(v6, rune);
  retstr->m_type = ActionResultType::CHANGE_TO;
  retstr->m_reason = "Commanded to pick up a rune";
  retstr->m_action = v6;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


// CDOTABehaviorCommandListener::OnStop  (line 111, @0x0000000002871170, libserver.so)  // inlines: Action, CDOTABehaviorCommandListener, CDOTABehaviorIdle, EventDesiredResult, IActionResult, TryChangeTo, ~CDOTABehaviorCommandListener
// calls: operator new, CountdownTimer::CountdownTimer, Action<CDOTA_BaseNPC>::~Action, operator delete, _Unwind_Resume
// strings: "Commanded to stop"
EventDesiredResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorCommandListener::OnStop(
        EventDesiredResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorCommandListener *const this,
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
  retstr->m_reason = "Commanded to stop";
  retstr->m_action = v4;
  retstr->m_priority = EventResultPriorityType::RESULT_IMPORTANT;
  return retstr;
}


