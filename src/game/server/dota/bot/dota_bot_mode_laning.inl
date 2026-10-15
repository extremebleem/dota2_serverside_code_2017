
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Laning::~CDOTA_BotMode_Laning  (line 15, @0x0000000002826d10, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_Laning::~CDOTA_BotMode_Laning(CDOTA_BotMode_Laning *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Laning::~CDOTA_BotMode_Laning  (line 15, @0x00000000028270d0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Laning
// calls: operator delete
void __fastcall CDOTA_BotMode_Laning::~CDOTA_BotMode_Laning(CDOTA_BotMode_Laning *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Laning::GetModeType  (line 22, @0x0000000002826cf0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Laning::GetModeType(CDOTA_BotMode_Laning *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_LANING;
}


// CDOTA_BotMode_Laning::GetDebugString  (line 42, @0x0000000002826d00, libserver.so)
const char *__fastcall CDOTA_BotMode_Laning::GetDebugString(CDOTA_BotMode_Laning *const this)
{
  return "Laning";
}


// CDOTA_BotMode_Laning_Human::~CDOTA_BotMode_Laning_Human  (line 50, @0x0000000002827070, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Laning
void __fastcall CDOTA_BotMode_Laning_Human::~CDOTA_BotMode_Laning_Human(CDOTA_BotMode_Laning_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Laning_Human::~CDOTA_BotMode_Laning_Human  (line 50, @0x0000000002827230, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Laning, ~CDOTA_BotMode_Laning_Human
// calls: operator delete
void __fastcall CDOTA_BotMode_Laning_Human::~CDOTA_BotMode_Laning_Human(CDOTA_BotMode_Laning_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Laning_Human::OnStart  (line 58, @0x0000000002826d30, libserver.so)
void __fastcall CDOTA_BotMode_Laning_Human::OnStart(CDOTA_BotMode_Laning_Human *const this)
{
  ;
}


// CDOTA_BotMode_Laning_Human::OnEnd  (line 59, @0x0000000002826d40, libserver.so)
void __fastcall CDOTA_BotMode_Laning_Human::OnEnd(CDOTA_BotMode_Laning_Human *const this)
{
  ;
}


// CDOTA_BotMode_Laning_Human::Think  (line 60, @0x0000000002826d50, libserver.so)
void __fastcall CDOTA_BotMode_Laning_Human::Think(CDOTA_BotMode_Laning_Human *const this)
{
  ;
}


// CDOTA_BotMode_Laning_Human::CalculateDesiredLocation  (line 64, @0x0000000002826d60, libserver.so)
Vector __fastcall CDOTA_BotMode_Laning_Human::CalculateDesiredLocation(CDOTA_BotMode_Laning_Human *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CDOTA_BotMode_Laning_Human::GetDebugString  (line 67, @0x0000000002826d80, libserver.so)
// strings: "Inferred Laning"
const char *__fastcall CDOTA_BotMode_Laning_Human::GetDebugString(CDOTA_BotMode_Laning_Human *const this)
{
  return "Inferred Laning";
}


