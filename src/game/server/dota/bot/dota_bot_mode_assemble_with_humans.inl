
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_AssembleWithHumans::~CDOTA_BotMode_AssembleWithHumans  (line 16, @0x0000000002811f90, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_AssembleWithHumans::~CDOTA_BotMode_AssembleWithHumans(
        CDOTA_BotMode_AssembleWithHumans *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_AssembleWithHumans::~CDOTA_BotMode_AssembleWithHumans  (line 16, @0x0000000002812380, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_AssembleWithHumans
// calls: operator delete
void __fastcall CDOTA_BotMode_AssembleWithHumans::~CDOTA_BotMode_AssembleWithHumans(
        CDOTA_BotMode_AssembleWithHumans *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_AssembleWithHumans::GetModeType  (line 23, @0x0000000002811e30, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_AssembleWithHumans::GetModeType(CDOTA_BotMode_AssembleWithHumans *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_ASSEMBLE_WITH_HUMANS;
}


