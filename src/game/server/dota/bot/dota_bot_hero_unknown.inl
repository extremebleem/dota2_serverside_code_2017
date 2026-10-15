
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Unknown::~CDOTA_Bot_Hero_Unknown  (line 16, @0x0000000002813cf0, libserver.so)
// calls: CDOTA_Bot::~CDOTA_Bot
void __fastcall CDOTA_Bot_Hero_Unknown::~CDOTA_Bot_Hero_Unknown(CDOTA_Bot_Hero_Unknown *const this)
{
  this->_vptr_CDOTA_Bot = &off_42B74F0;
  CDOTA_Bot::~CDOTA_Bot(this);
}


// CDOTA_Bot_Hero_Unknown::~CDOTA_Bot_Hero_Unknown  (line 16, @0x0000000002813d10, libserver.so)  // inlines: ~CDOTA_Bot_Hero_Unknown
// calls: CDOTA_Bot::~CDOTA_Bot, operator delete
void __fastcall CDOTA_Bot_Hero_Unknown::~CDOTA_Bot_Hero_Unknown(CDOTA_Bot_Hero_Unknown *const this)
{
  this->_vptr_CDOTA_Bot = &off_42B74F0;
  CDOTA_Bot::~CDOTA_Bot(this);
  operator delete(this);
}


// CDOTA_Bot_Unit_GenericMinion::~CDOTA_Bot_Unit_GenericMinion  (line 26, @0x00000000028f0ef0, libserver.so)
// calls: CDOTA_Bot::~CDOTA_Bot
void __fastcall CDOTA_Bot_Unit_GenericMinion::~CDOTA_Bot_Unit_GenericMinion(CDOTA_Bot_Unit_GenericMinion *const this)
{
  this->_vptr_CDOTA_Bot = &off_42D1A30;
  CDOTA_Bot::~CDOTA_Bot(this);
}


// CDOTA_Bot_Unit_GenericMinion::~CDOTA_Bot_Unit_GenericMinion  (line 26, @0x00000000028f0f10, libserver.so)  // inlines: ~CDOTA_Bot_Unit_GenericMinion
// calls: CDOTA_Bot::~CDOTA_Bot, operator delete
void __fastcall CDOTA_Bot_Unit_GenericMinion::~CDOTA_Bot_Unit_GenericMinion(CDOTA_Bot_Unit_GenericMinion *const this)
{
  this->_vptr_CDOTA_Bot = &off_42D1A30;
  CDOTA_Bot::~CDOTA_Bot(this);
  operator delete(this);
}


// CDOTA_Bot_Unit_GenericMinion::GetInitialMode  (line 33, @0x00000000028efce0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_Bot_Unit_GenericMinion::GetInitialMode(CDOTA_Bot_Unit_GenericMinion *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_NONE;
}


// CDOTA_BotMode_GenericMinion::~CDOTA_BotMode_GenericMinion  (line 41, @0x00000000028efe80, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_GenericMinion::~CDOTA_BotMode_GenericMinion(CDOTA_BotMode_GenericMinion *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_GenericMinion::~CDOTA_BotMode_GenericMinion  (line 41, @0x00000000028effa0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_GenericMinion
// calls: operator delete
void __fastcall CDOTA_BotMode_GenericMinion::~CDOTA_BotMode_GenericMinion(CDOTA_BotMode_GenericMinion *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_GenericMinion::GetModeType  (line 47, @0x00000000028efcf0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_GenericMinion::GetModeType(CDOTA_BotMode_GenericMinion *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_MINION;
}


// CDOTA_BotMode_GenericMinion::OnStart  (line 49, @0x00000000028efd00, libserver.so)
void __fastcall CDOTA_BotMode_GenericMinion::OnStart(CDOTA_BotMode_GenericMinion *const this)
{
  ;
}


// CDOTA_BotMode_GenericMinion::OnEnd  (line 50, @0x00000000028efd10, libserver.so)
void __fastcall CDOTA_BotMode_GenericMinion::OnEnd(CDOTA_BotMode_GenericMinion *const this)
{
  ;
}


// CDOTA_BotMode_GenericMinion::GetDebugString  (line 55, @0x00000000028efd20, libserver.so)
// strings: "Minion"
const char *__fastcall CDOTA_BotMode_GenericMinion::GetDebugString(CDOTA_BotMode_GenericMinion *const this)
{
  return "Minion";
}


// CDOTA_BotModeMinionNone::~CDOTA_BotModeMinionNone  (line 63, @0x00000000028efea0, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotModeMinionNone::~CDOTA_BotModeMinionNone(CDOTA_BotModeMinionNone *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotModeMinionNone::~CDOTA_BotModeMinionNone  (line 63, @0x00000000028effc0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotModeMinionNone
// calls: operator delete
void __fastcall CDOTA_BotModeMinionNone::~CDOTA_BotModeMinionNone(CDOTA_BotModeMinionNone *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotModeMinionNone::GetModeType  (line 69, @0x00000000028efd30, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotModeMinionNone::GetModeType(CDOTA_BotModeMinionNone *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_NONE;
}


// CDOTA_BotModeMinionNone::OnStart  (line 71, @0x00000000028efd40, libserver.so)
void __fastcall CDOTA_BotModeMinionNone::OnStart(CDOTA_BotModeMinionNone *const this)
{
  ;
}


// CDOTA_BotModeMinionNone::OnEnd  (line 72, @0x00000000028efd50, libserver.so)
void __fastcall CDOTA_BotModeMinionNone::OnEnd(CDOTA_BotModeMinionNone *const this)
{
  ;
}


// CDOTA_BotModeMinionNone::Think  (line 73, @0x00000000028efd60, libserver.so)
void __fastcall CDOTA_BotModeMinionNone::Think(CDOTA_BotModeMinionNone *const this)
{
  ;
}


// CDOTA_BotModeMinionNone::GetDesire  (line 75, @0x00000000028efd70, libserver.so)
float __fastcall CDOTA_BotModeMinionNone::GetDesire(CDOTA_BotModeMinionNone *const this)
{
  return 1.0;
}


// CDOTA_BotModeMinionNone::GetDebugString  (line 77, @0x00000000028efd80, libserver.so)
// strings: "Minion"
const char *__fastcall CDOTA_BotModeMinionNone::GetDebugString(CDOTA_BotModeMinionNone *const this)
{
  return "Minion";
}


// CDOTA_BotModeMinionNone::GetDebugColor  (line 78, @0x00000000028efd90, libserver.so)
color24 __fastcall CDOTA_BotModeMinionNone::GetDebugColor(CDOTA_BotModeMinionNone *const this)
{
  return 11812095;
}


// CDOTA_BotModeMinionNone::CalculateDesiredLocation  (line 80, @0x00000000028efda0, libserver.so)
Vector __fastcall CDOTA_BotModeMinionNone::CalculateDesiredLocation(CDOTA_BotModeMinionNone *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


