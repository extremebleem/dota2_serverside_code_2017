
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_Urn::~CDOTA_Bot_AbilityUsage_Urn  (line 15, @0x00000000028aa910, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Urn::~CDOTA_Bot_AbilityUsage_Urn(CDOTA_Bot_AbilityUsage_Urn *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C58F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_Urn::~CDOTA_Bot_AbilityUsage_Urn  (line 15, @0x00000000028aa930, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_Urn
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_Urn::~CDOTA_Bot_AbilityUsage_Urn(CDOTA_Bot_AbilityUsage_Urn *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C58F0;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


