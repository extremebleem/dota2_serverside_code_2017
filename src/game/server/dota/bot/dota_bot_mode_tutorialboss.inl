
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_TutorialBoss::~CDOTA_BotMode_TutorialBoss  (line 33, @0x0000000002868a60, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_TutorialBoss::~CDOTA_BotMode_TutorialBoss(CDOTA_BotMode_TutorialBoss *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_TutorialBoss::~CDOTA_BotMode_TutorialBoss  (line 33, @0x0000000002868bc0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_TutorialBoss
// calls: operator delete
void __fastcall CDOTA_BotMode_TutorialBoss::~CDOTA_BotMode_TutorialBoss(CDOTA_BotMode_TutorialBoss *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_TutorialBoss::GetModeType  (line 40, @0x0000000002868a00, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_TutorialBoss::GetModeType(CDOTA_BotMode_TutorialBoss *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_TUTORIAL_BOSS;
}


// CDOTA_BotMode_TutorialBoss::GetDebugString  (line 55, @0x0000000002868a10, libserver.so)
// strings: "TutorialBoss"
const char *__fastcall CDOTA_BotMode_TutorialBoss::GetDebugString(CDOTA_BotMode_TutorialBoss *const this)
{
  return "TutorialBoss";
}


