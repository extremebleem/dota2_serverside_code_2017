
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Rune::~CDOTA_BotMode_Rune  (line 15, @0x0000000002826fd0, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_Rune::~CDOTA_BotMode_Rune(CDOTA_BotMode_Rune *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Rune::~CDOTA_BotMode_Rune  (line 15, @0x0000000002827190, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Rune
// calls: operator delete
void __fastcall CDOTA_BotMode_Rune::~CDOTA_BotMode_Rune(CDOTA_BotMode_Rune *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Rune::GetModeType  (line 22, @0x0000000002826f80, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Rune::GetModeType(CDOTA_BotMode_Rune *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_RUNE;
}


// CDOTA_BotMode_Rune::GetDebugString  (line 39, @0x00000000028273e0, libserver.so)
// calls: CDOTA_BotMode::FormatDebugString
// strings: "Going for Rune - %s (%2.2f)"
const char *__fastcall CDOTA_BotMode_Rune::GetDebugString(CDOTA_BotMode_Rune *const this)
{
  char *v1; // rdx

  v1 = "Bottom";
  if ( this->m_iSpawner != 0 )
    v1 = "Top";
  return CDOTA_BotMode::FormatDebugString(this, "Going for Rune - %s (%2.2f)", v1, this->m_fRuneDesire);
}


// CDOTA_BotMode_Rune::GetDebugValue  (line 40, @0x0000000002827300, libserver.so)
// calls: CDOTA_BotMode::FormatDebugValue
const char *__fastcall CDOTA_BotMode_Rune::GetDebugValue(CDOTA_BotMode_Rune *const this)
{
  return CDOTA_BotMode::FormatDebugValue(this, "(%2.2f)", this->m_fRuneDesire);
}


