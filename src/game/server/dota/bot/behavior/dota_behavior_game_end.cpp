
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTABehaviorGameEnd::OnStart  (line 8, @0x000000000288b360, libserver.so)  // inlines: ActionResult, Continue, IActionResult
// calls: CDOTA_BaseNPC::ClearQueuedOrders, CDOTA_BaseNPC::ClearPseudoQueuedOrder
ActionResult<CDOTA_BaseNPC> *__fastcall CDOTABehaviorGameEnd::OnStart(
        ActionResult<CDOTA_BaseNPC> *__return_ptr retstr,
        CDOTABehaviorGameEnd *const this,
        CDOTA_BaseNPC *me,
        Action<CDOTA_BaseNPC> *priorAction)
{
  __int64 v6; // rax

  CDOTA_BaseNPC::ClearQueuedOrders(me);
  CDOTA_BaseNPC::ClearPseudoQueuedOrder(me);
  v6 = (*(me->_vptr_IHandleEntity + 376))(me);
  (*(*v6 + 616LL))(v6);
  retstr->m_type = ActionResultType::CONTINUE;
  retstr->m_action = 0;
  retstr->m_reason = 0;
  return retstr;
}


