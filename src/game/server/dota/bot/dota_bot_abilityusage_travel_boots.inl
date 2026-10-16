
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_TravelBoots::~CDOTA_Bot_AbilityUsage_TravelBoots  (line 15, @0x00000000028aa960, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_TravelBoots::~CDOTA_Bot_AbilityUsage_TravelBoots(
        CDOTA_Bot_AbilityUsage_TravelBoots *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C58F0;  // vptr: CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot>
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_TravelBoots::~CDOTA_Bot_AbilityUsage_TravelBoots  (line 15, @0x00000000028aa980, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_TravelBoots
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_TravelBoots::~CDOTA_Bot_AbilityUsage_TravelBoots(
        CDOTA_Bot_AbilityUsage_TravelBoots *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C58F0;  // vptr: CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot>
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


