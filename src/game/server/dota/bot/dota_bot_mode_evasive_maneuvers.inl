
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_EvasiveManeuvers::~CDOTA_BotMode_EvasiveManeuvers  (line 22, @0x00000000028270b0, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_EvasiveManeuvers::~CDOTA_BotMode_EvasiveManeuvers(
        CDOTA_BotMode_EvasiveManeuvers *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_EvasiveManeuvers::~CDOTA_BotMode_EvasiveManeuvers  (line 22, @0x0000000002827270, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_EvasiveManeuvers
// calls: operator delete
void __fastcall CDOTA_BotMode_EvasiveManeuvers::~CDOTA_BotMode_EvasiveManeuvers(
        CDOTA_BotMode_EvasiveManeuvers *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_EvasiveManeuvers::GetModeType  (line 29, @0x0000000002826c60, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_EvasiveManeuvers::GetModeType(CDOTA_BotMode_EvasiveManeuvers *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_EVASIVE_MANEUVERS;
}


