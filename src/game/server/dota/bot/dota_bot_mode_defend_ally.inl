
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_DefendAlly::~CDOTA_BotMode_DefendAlly  (line 15, @0x0000000002811f30, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_DefendAlly::~CDOTA_BotMode_DefendAlly(CDOTA_BotMode_DefendAlly *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_DefendAlly::~CDOTA_BotMode_DefendAlly  (line 15, @0x00000000028122c0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_DefendAlly
// calls: operator delete
void __fastcall CDOTA_BotMode_DefendAlly::~CDOTA_BotMode_DefendAlly(CDOTA_BotMode_DefendAlly *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_DefendAlly::GetModeType  (line 22, @0x0000000002811e40, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_DefendAlly::GetModeType(CDOTA_BotMode_DefendAlly *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_DEFEND_ALLY;
}


// CDOTA_BotMode_DefendAlly::GetDebugValue  (line 36, @0x0000000002812cd0, libserver.so)
// calls: CDOTA_BotMode::FormatDebugValue
const char *__fastcall CDOTA_BotMode_DefendAlly::GetDebugValue(CDOTA_BotMode_DefendAlly *const this)
{
  return CDOTA_BotMode::FormatDebugValue(this, "(%2.2f)", this->m_fCurrentTargetScore);
}


// CDOTA_BotMode_DefendAlly_Human::~CDOTA_BotMode_DefendAlly_Human  (line 49, @0x0000000002811f60, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_DefendAlly
void __fastcall CDOTA_BotMode_DefendAlly_Human::~CDOTA_BotMode_DefendAlly_Human(
        CDOTA_BotMode_DefendAlly_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_DefendAlly_Human::~CDOTA_BotMode_DefendAlly_Human  (line 49, @0x0000000002812320, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_DefendAlly, ~CDOTA_BotMode_DefendAlly_Human
// calls: operator delete
void __fastcall CDOTA_BotMode_DefendAlly_Human::~CDOTA_BotMode_DefendAlly_Human(
        CDOTA_BotMode_DefendAlly_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_DefendAlly_Human::CalculateDesiredLocation  (line 68, @0x0000000002811e50, libserver.so)
Vector __fastcall CDOTA_BotMode_DefendAlly_Human::CalculateDesiredLocation(CDOTA_BotMode_DefendAlly_Human *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


