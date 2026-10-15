
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Retreat::~CDOTA_BotMode_Retreat  (line 15, @0x0000000002826e20, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_Retreat::~CDOTA_BotMode_Retreat(CDOTA_BotMode_Retreat *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Retreat::~CDOTA_BotMode_Retreat  (line 15, @0x0000000002827110, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Retreat
// calls: operator delete
void __fastcall CDOTA_BotMode_Retreat::~CDOTA_BotMode_Retreat(CDOTA_BotMode_Retreat *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Retreat::GetModeType  (line 22, @0x0000000002826e00, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Retreat::GetModeType(CDOTA_BotMode_Retreat *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_RETREAT;
}


// CDOTA_BotMode_Retreat::GetDebugString  (line 38, @0x0000000002826e10, libserver.so)
const char *__fastcall CDOTA_BotMode_Retreat::GetDebugString(CDOTA_BotMode_Retreat *const this)
{
  return "Retreating";
}


// CDOTA_BotMode_Retreat_Human::~CDOTA_BotMode_Retreat_Human  (line 53, @0x0000000002827030, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Retreat
void __fastcall CDOTA_BotMode_Retreat_Human::~CDOTA_BotMode_Retreat_Human(CDOTA_BotMode_Retreat_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Retreat_Human::~CDOTA_BotMode_Retreat_Human  (line 53, @0x00000000028271f0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Retreat, ~CDOTA_BotMode_Retreat_Human
// calls: operator delete
void __fastcall CDOTA_BotMode_Retreat_Human::~CDOTA_BotMode_Retreat_Human(CDOTA_BotMode_Retreat_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Retreat_Human::OnStart  (line 61, @0x0000000002826e40, libserver.so)
void __fastcall CDOTA_BotMode_Retreat_Human::OnStart(CDOTA_BotMode_Retreat_Human *const this)
{
  ;
}


// CDOTA_BotMode_Retreat_Human::OnEnd  (line 62, @0x0000000002826e50, libserver.so)
void __fastcall CDOTA_BotMode_Retreat_Human::OnEnd(CDOTA_BotMode_Retreat_Human *const this)
{
  ;
}


// CDOTA_BotMode_Retreat_Human::Think  (line 63, @0x0000000002826e60, libserver.so)
void __fastcall CDOTA_BotMode_Retreat_Human::Think(CDOTA_BotMode_Retreat_Human *const this)
{
  ;
}


// CDOTA_BotMode_Retreat_Human::GetDesiredLocation  (line 67, @0x0000000002826e70, libserver.so)
Vector __fastcall CDOTA_BotMode_Retreat_Human::GetDesiredLocation(CDOTA_BotMode_Retreat_Human *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CDOTA_BotMode_Retreat_Human::GetDebugString  (line 70, @0x0000000002826e90, libserver.so)
// strings: "Inferred Retreating"
const char *__fastcall CDOTA_BotMode_Retreat_Human::GetDebugString(CDOTA_BotMode_Retreat_Human *const this)
{
  return "Inferred Retreating";
}


