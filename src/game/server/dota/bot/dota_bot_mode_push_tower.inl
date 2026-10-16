
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_PushTower::~CDOTA_BotMode_PushTower  (line 16, @0x0000000002826de0, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_PushTower::~CDOTA_BotMode_PushTower(CDOTA_BotMode_PushTower *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_PushTower::~CDOTA_BotMode_PushTower  (line 16, @0x00000000028270f0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_PushTower
// calls: operator delete
void __fastcall CDOTA_BotMode_PushTower::~CDOTA_BotMode_PushTower(CDOTA_BotMode_PushTower *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_PushTower::GetModeType  (line 23, @0x0000000002826d90, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_PushTower::GetModeType(CDOTA_BotMode_PushTower *const this)
{
  return this->m_Mode;
}


// CDOTA_BotMode_PushTower::GetDebugValue  (line 36, @0x0000000002826da0, libserver.so)
const char *__fastcall CDOTA_BotMode_PushTower::GetDebugValue(CDOTA_BotMode_PushTower *const this)
{
  return "";
}


// CDOTA_BotMode_PushTower::GetDebugString  (line 37, @0x0000000002827360, libserver.so)
// calls: GetLaneName, CDOTA_BotMode::FormatDebugString
const char *__fastcall CDOTA_BotMode_PushTower::GetDebugString(CDOTA_BotMode_PushTower *const this)
{
  const char *LaneName; // rax

  LaneName = GetLaneName(this->m_Lane);
  return CDOTA_BotMode::FormatDebugString(this, "Pushing %s Lane", LaneName);
}


// CDOTA_BotMode_PushTower_Human::~CDOTA_BotMode_PushTower_Human  (line 57, @0x0000000002827050, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_PushTower
void __fastcall CDOTA_BotMode_PushTower_Human::~CDOTA_BotMode_PushTower_Human(
        CDOTA_BotMode_PushTower_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_PushTower_Human::~CDOTA_BotMode_PushTower_Human  (line 57, @0x0000000002827210, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_PushTower, ~CDOTA_BotMode_PushTower_Human
// calls: operator delete
void __fastcall CDOTA_BotMode_PushTower_Human::~CDOTA_BotMode_PushTower_Human(
        CDOTA_BotMode_PushTower_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_PushTower_Human::Think  (line 67, @0x0000000002826db0, libserver.so)
void __fastcall CDOTA_BotMode_PushTower_Human::Think(CDOTA_BotMode_PushTower_Human *const this)
{
  ;
}


// CDOTA_BotMode_PushTower_Human::CalculateDesiredLocation  (line 75, @0x0000000002826dc0, libserver.so)
Vector __fastcall CDOTA_BotMode_PushTower_Human::CalculateDesiredLocation(CDOTA_BotMode_PushTower_Human *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CDOTA_BotMode_PushTower_Human::GetDebugString  (line 78, @0x00000000028273a0, libserver.so)
// calls: GetLaneName, CDOTA_BotMode::FormatDebugString
// strings: "Inferred Pushing %s Lane"
const char *__fastcall CDOTA_BotMode_PushTower_Human::GetDebugString(CDOTA_BotMode_PushTower_Human *const this)
{
  const char *LaneName; // rax

  LaneName = GetLaneName(this->m_Lane);
  return CDOTA_BotMode::FormatDebugString(this, "Inferred Pushing %s Lane", LaneName);
}


