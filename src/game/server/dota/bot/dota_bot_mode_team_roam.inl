
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_TeamRoam::~CDOTA_BotMode_TeamRoam  (line 15, @0x0000000002868a80, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_TeamRoam::~CDOTA_BotMode_TeamRoam(CDOTA_BotMode_TeamRoam *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_TeamRoam::~CDOTA_BotMode_TeamRoam  (line 15, @0x0000000002868be0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_TeamRoam
// calls: operator delete
void __fastcall CDOTA_BotMode_TeamRoam::~CDOTA_BotMode_TeamRoam(CDOTA_BotMode_TeamRoam *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_TeamRoam::GetModeType  (line 22, @0x00000000028689f0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_TeamRoam::GetModeType(CDOTA_BotMode_TeamRoam *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_TEAM_ROAM;
}


// CDOTA_BotMode_TeamRoam::GetDebugValue  (line 36, @0x0000000002868c40, libserver.so)
// calls: CDOTA_BotMode::FormatDebugValue
const char *__fastcall CDOTA_BotMode_TeamRoam::GetDebugValue(CDOTA_BotMode_TeamRoam *const this)
{
  return CDOTA_BotMode::FormatDebugValue(this, "(%2.2f)", this->m_fCurrentTargetScore);
}


