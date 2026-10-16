
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_DefendTower::~CDOTA_BotMode_DefendTower  (line 15, @0x0000000002811f40, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_DefendTower::~CDOTA_BotMode_DefendTower(CDOTA_BotMode_DefendTower *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_DefendTower::~CDOTA_BotMode_DefendTower  (line 15, @0x00000000028122e0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_DefendTower
// calls: operator delete
void __fastcall CDOTA_BotMode_DefendTower::~CDOTA_BotMode_DefendTower(CDOTA_BotMode_DefendTower *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_DefendTower::GetModeType  (line 22, @0x0000000002811e70, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_DefendTower::GetModeType(CDOTA_BotMode_DefendTower *const this)
{
  return this->m_Mode;
}


// CDOTA_BotMode_DefendTower::GetDebugString  (line 35, @0x0000000002812c60, libserver.so)
// calls: CDOTA_BotMode::FormatDebugString
// strings: "Defending %s Tower"
// globals: pszLaneStrings
const char *__fastcall CDOTA_BotMode_DefendTower::GetDebugString(CDOTA_BotMode_DefendTower *const this)
{
  return CDOTA_BotMode::FormatDebugString(this, "Defending %s Tower", &pszLaneStrings[64 * this->m_Lane]);
}


// CDOTA_BotMode_DefendTower::GetDebugValue  (line 36, @0x0000000002811e80, libserver.so)
const char *__fastcall CDOTA_BotMode_DefendTower::GetDebugValue(CDOTA_BotMode_DefendTower *const this)
{
  return "";
}


// CDOTA_BotMode_DefendTower_Human::~CDOTA_BotMode_DefendTower_Human  (line 50, @0x0000000002811f50, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_DefendTower
void __fastcall CDOTA_BotMode_DefendTower_Human::~CDOTA_BotMode_DefendTower_Human(
        CDOTA_BotMode_DefendTower_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_DefendTower_Human::~CDOTA_BotMode_DefendTower_Human  (line 50, @0x0000000002812300, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_DefendTower, ~CDOTA_BotMode_DefendTower_Human
// calls: operator delete
void __fastcall CDOTA_BotMode_DefendTower_Human::~CDOTA_BotMode_DefendTower_Human(
        CDOTA_BotMode_DefendTower_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_DefendTower_Human::Think  (line 60, @0x0000000002811e90, libserver.so)
void __fastcall CDOTA_BotMode_DefendTower_Human::Think(CDOTA_BotMode_DefendTower_Human *const this)
{
  ;
}


// CDOTA_BotMode_DefendTower_Human::CalculateDesiredLocation  (line 64, @0x0000000002811ea0, libserver.so)
Vector __fastcall CDOTA_BotMode_DefendTower_Human::CalculateDesiredLocation(
        CDOTA_BotMode_DefendTower_Human *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CDOTA_BotMode_DefendTower_Human::GetDebugString  (line 66, @0x0000000002812c90, libserver.so)
// calls: CDOTA_BotMode::FormatDebugString
// strings: "Inferred Defending %s Tower- %1.3f"
// globals: pszLaneStrings
const char *__fastcall CDOTA_BotMode_DefendTower_Human::GetDebugString(CDOTA_BotMode_DefendTower_Human *const this)
{
  return CDOTA_BotMode::FormatDebugString(
           this,
           "Inferred Defending %s Tower- %1.3f",
           &pszLaneStrings[64 * this->m_Lane],
           this->m_fDesire);
}


