
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Attack::~CDOTA_BotMode_Attack  (line 15, @0x0000000002811f20, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_Attack::~CDOTA_BotMode_Attack(CDOTA_BotMode_Attack *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Attack::~CDOTA_BotMode_Attack  (line 15, @0x00000000028122a0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Attack
// calls: operator delete
void __fastcall CDOTA_BotMode_Attack::~CDOTA_BotMode_Attack(CDOTA_BotMode_Attack *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Attack::GetModeType  (line 22, @0x0000000002811ec0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Attack::GetModeType(CDOTA_BotMode_Attack *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK;
}


// CDOTA_BotMode_Attack_Human::~CDOTA_BotMode_Attack_Human  (line 52, @0x0000000002811f80, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Attack
void __fastcall CDOTA_BotMode_Attack_Human::~CDOTA_BotMode_Attack_Human(CDOTA_BotMode_Attack_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Attack_Human::~CDOTA_BotMode_Attack_Human  (line 52, @0x0000000002812360, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Attack, ~CDOTA_BotMode_Attack_Human
// calls: operator delete
void __fastcall CDOTA_BotMode_Attack_Human::~CDOTA_BotMode_Attack_Human(CDOTA_BotMode_Attack_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Attack_Human::CalculateDesiredLocation  (line 70, @0x0000000002811ed0, libserver.so)
Vector __fastcall CDOTA_BotMode_Attack_Human::CalculateDesiredLocation(CDOTA_BotMode_Attack_Human *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


