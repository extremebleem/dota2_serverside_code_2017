
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Ward::~CDOTA_BotMode_Ward  (line 15, @0x0000000002868a40, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_Ward::~CDOTA_BotMode_Ward(CDOTA_BotMode_Ward *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Ward::~CDOTA_BotMode_Ward  (line 15, @0x0000000002868ba0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Ward
// calls: operator delete
void __fastcall CDOTA_BotMode_Ward::~CDOTA_BotMode_Ward(CDOTA_BotMode_Ward *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Ward::GetModeType  (line 22, @0x0000000002868a20, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Ward::GetModeType(CDOTA_BotMode_Ward *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_WARD;
}


// CDOTA_BotMode_Ward::GetDebugString  (line 37, @0x0000000002868a30, libserver.so)
// strings: "Warding"
const char *__fastcall CDOTA_BotMode_Ward::GetDebugString(CDOTA_BotMode_Ward *const this)
{
  return "Warding";
}


