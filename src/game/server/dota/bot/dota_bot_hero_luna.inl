
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Luna::~CDOTA_Bot_Hero_Luna  (line 18, @0x00000000028d10b0, libserver.so)
// calls: CDOTA_Bot::~CDOTA_Bot
void __fastcall CDOTA_Bot_Hero_Luna::~CDOTA_Bot_Hero_Luna(CDOTA_Bot_Hero_Luna *const this)
{
  this->_vptr_CDOTA_Bot = &off_42CDB70;
  CDOTA_Bot::~CDOTA_Bot(this);
}


// CDOTA_Bot_Hero_Luna::~CDOTA_Bot_Hero_Luna  (line 18, @0x00000000028d10d0, libserver.so)  // inlines: ~CDOTA_Bot_Hero_Luna
// calls: CDOTA_Bot::~CDOTA_Bot, operator delete
void __fastcall CDOTA_Bot_Hero_Luna::~CDOTA_Bot_Hero_Luna(CDOTA_Bot_Hero_Luna *const this)
{
  this->_vptr_CDOTA_Bot = &off_42CDB70;
  CDOTA_Bot::~CDOTA_Bot(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsage_Luna_LucentBeam::~CDOTA_Bot_AbilityUsage_Luna_LucentBeam  (line 35, @0x00000000028d0de0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Luna_LucentBeam::~CDOTA_Bot_AbilityUsage_Luna_LucentBeam(
        CDOTA_Bot_AbilityUsage_Luna_LucentBeam *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CDB10;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_Luna_LucentBeam::~CDOTA_Bot_AbilityUsage_Luna_LucentBeam  (line 35, @0x00000000028d0e00, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_Luna_LucentBeam
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_Luna_LucentBeam::~CDOTA_Bot_AbilityUsage_Luna_LucentBeam(
        CDOTA_Bot_AbilityUsage_Luna_LucentBeam *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CDB10;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsage_Luna_Eclipse::~CDOTA_Bot_AbilityUsage_Luna_Eclipse  (line 52, @0x00000000028d0d90, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Luna_Eclipse::~CDOTA_Bot_AbilityUsage_Luna_Eclipse(
        CDOTA_Bot_AbilityUsage_Luna_Eclipse *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CDB10;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_Luna_Eclipse::~CDOTA_Bot_AbilityUsage_Luna_Eclipse  (line 52, @0x00000000028d0db0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_Luna_Eclipse
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_Luna_Eclipse::~CDOTA_Bot_AbilityUsage_Luna_Eclipse(
        CDOTA_Bot_AbilityUsage_Luna_Eclipse *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CDB10;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


