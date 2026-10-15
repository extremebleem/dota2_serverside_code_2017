
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAConsumableEconItem::IsServerEconItem  (line 73, @0x0000000002e4efd0, libserver.so)
bool __fastcall CDOTAConsumableEconItem::IsServerEconItem(CDOTAConsumableEconItem *const this)
{
  return 0;
}


// CDOTAConsumableEconItem::CanUse  (line 77, @0x0000000002e4efe0, libserver.so)
ActionItemResult_t __fastcall CDOTAConsumableEconItem::CanUse(CDOTAConsumableEconItem *const this)
{
  return ActionItemResult_t::ACTION_ITEM_FAILURE;
}


// CDOTAConsumableEconItem::ApplyEffects  (line 78, @0x0000000002e4eff0, libserver.so)
ActionItemResult_t __fastcall CDOTAConsumableEconItem::ApplyEffects(CDOTAConsumableEconItem *const this)
{
  return ActionItemResult_t::ACTION_ITEM_FAILURE;
}


// CDOTAConsumableEconItem::ShouldSendServerPlayers  (line 83, @0x0000000002e4f000, libserver.so)
bool __fastcall CDOTAConsumableEconItem::ShouldSendServerPlayers(CDOTAConsumableEconItem *const this)
{
  return 0;
}


// CDOTAHeroTaunt::IsServerEconItem  (line 109, @0x0000000002e4f010, libserver.so)
bool __fastcall CDOTAHeroTaunt::IsServerEconItem(CDOTAHeroTaunt *const this)
{
  return 1;
}


// CDOTAVictoryPrediction::IsServerEconItem  (line 130, @0x0000000002e4f020, libserver.so)
bool __fastcall CDOTAVictoryPrediction::IsServerEconItem(CDOTAVictoryPrediction *const this)
{
  return 1;
}


// CDOTAHeroEconItemAbility::IsServerEconItem  (line 153, @0x0000000002e4f030, libserver.so)
bool __fastcall CDOTAHeroEconItemAbility::IsServerEconItem(CDOTAHeroEconItemAbility *const this)
{
  return 1;
}


