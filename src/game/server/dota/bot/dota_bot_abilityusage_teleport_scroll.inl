
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_TeleportScroll::~CDOTA_Bot_AbilityUsage_TeleportScroll  (line 15, @0x00000000028aa9b0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_TeleportScroll::~CDOTA_Bot_AbilityUsage_TeleportScroll(
        CDOTA_Bot_AbilityUsage_TeleportScroll *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C58F0;  // vptr: CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot>
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_TeleportScroll::~CDOTA_Bot_AbilityUsage_TeleportScroll  (line 15, @0x00000000028aa9d0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_TeleportScroll
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_TeleportScroll::~CDOTA_Bot_AbilityUsage_TeleportScroll(
        CDOTA_Bot_AbilityUsage_TeleportScroll *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C58F0;  // vptr: CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot>
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


