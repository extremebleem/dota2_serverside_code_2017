
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_PhaseBoots::~CDOTA_Bot_AbilityUsage_PhaseBoots  (line 15, @0x00000000028a6790, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_PhaseBoots::~CDOTA_Bot_AbilityUsage_PhaseBoots(
        CDOTA_Bot_AbilityUsage_PhaseBoots *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C58F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_PhaseBoots::~CDOTA_Bot_AbilityUsage_PhaseBoots  (line 15, @0x00000000028a67b0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_PhaseBoots
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_PhaseBoots::~CDOTA_Bot_AbilityUsage_PhaseBoots(
        CDOTA_Bot_AbilityUsage_PhaseBoots *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C58F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


