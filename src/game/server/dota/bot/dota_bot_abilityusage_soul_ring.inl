
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_SoulRing::~CDOTA_Bot_AbilityUsage_SoulRing  (line 15, @0x00000000028aaa50, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_SoulRing::~CDOTA_Bot_AbilityUsage_SoulRing(
        CDOTA_Bot_AbilityUsage_SoulRing *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C58F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_SoulRing::~CDOTA_Bot_AbilityUsage_SoulRing  (line 15, @0x00000000028aaa70, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_SoulRing
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_SoulRing::~CDOTA_Bot_AbilityUsage_SoulRing(
        CDOTA_Bot_AbilityUsage_SoulRing *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C58F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


