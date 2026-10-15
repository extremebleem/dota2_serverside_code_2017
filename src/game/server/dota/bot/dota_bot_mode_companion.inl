
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Companion::~CDOTA_BotMode_Companion  (line 29, @0x0000000002811f70, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_Companion::~CDOTA_BotMode_Companion(CDOTA_BotMode_Companion *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Companion::~CDOTA_BotMode_Companion  (line 29, @0x0000000002812340, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Companion
// calls: operator delete
void __fastcall CDOTA_BotMode_Companion::~CDOTA_BotMode_Companion(CDOTA_BotMode_Companion *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Companion::GetModeType  (line 36, @0x0000000002811ef0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Companion::GetModeType(CDOTA_BotMode_Companion *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_COMPANION;
}


// CDOTA_BotMode_Companion::GetDebugString  (line 51, @0x0000000002811f00, libserver.so)
const char *__fastcall CDOTA_BotMode_Companion::GetDebugString(CDOTA_BotMode_Companion *const this)
{
  return "Companion";
}


