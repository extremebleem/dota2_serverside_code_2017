
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Roshan::~CDOTA_BotMode_Roshan  (line 15, @0x0000000002826f60, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_Roshan::~CDOTA_BotMode_Roshan(CDOTA_BotMode_Roshan *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_Roshan::~CDOTA_BotMode_Roshan  (line 15, @0x0000000002827150, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Roshan
// calls: operator delete
void __fastcall CDOTA_BotMode_Roshan::~CDOTA_BotMode_Roshan(CDOTA_BotMode_Roshan *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_Roshan::GetModeType  (line 22, @0x0000000002826f20, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Roshan::GetModeType(CDOTA_BotMode_Roshan *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_ROSHAN;
}


// CDOTA_BotMode_Roshan::GetDebugValue  (line 36, @0x00000000028272d0, libserver.so)
// calls: CDOTA_BotMode::FormatDebugValue
// strings: "(%1.3f)"
const char *__fastcall CDOTA_BotMode_Roshan::GetDebugValue(CDOTA_BotMode_Roshan *const this)
{
  return CDOTA_BotMode::FormatDebugValue(this, "(%1.3f)", this->m_fRoshanScore);
}


// CDOTA_BotMode_Roshan_Human::~CDOTA_BotMode_Roshan_Human  (line 48, @0x0000000002826ff0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Roshan
void __fastcall CDOTA_BotMode_Roshan_Human::~CDOTA_BotMode_Roshan_Human(CDOTA_BotMode_Roshan_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_Roshan_Human::~CDOTA_BotMode_Roshan_Human  (line 48, @0x00000000028271b0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Roshan, ~CDOTA_BotMode_Roshan_Human
// calls: operator delete
void __fastcall CDOTA_BotMode_Roshan_Human::~CDOTA_BotMode_Roshan_Human(CDOTA_BotMode_Roshan_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_Roshan_Human::Think  (line 58, @0x0000000002826f30, libserver.so)
void __fastcall CDOTA_BotMode_Roshan_Human::Think(CDOTA_BotMode_Roshan_Human *const this)
{
  ;
}


// CDOTA_BotMode_Roshan_Human::CalculateDesiredLocation  (line 62, @0x0000000002826f40, libserver.so)
Vector __fastcall CDOTA_BotMode_Roshan_Human::CalculateDesiredLocation(CDOTA_BotMode_Roshan_Human *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


