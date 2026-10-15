
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Roam::~CDOTA_BotMode_Roam  (line 14, @0x0000000002826eb0, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_Roam::~CDOTA_BotMode_Roam(CDOTA_BotMode_Roam *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Roam::~CDOTA_BotMode_Roam  (line 14, @0x0000000002827130, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Roam
// calls: operator delete
void __fastcall CDOTA_BotMode_Roam::~CDOTA_BotMode_Roam(CDOTA_BotMode_Roam *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Roam::GetModeType  (line 21, @0x0000000002826ea0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Roam::GetModeType(CDOTA_BotMode_Roam *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_ROAM;
}


// CDOTA_BotMode_Roam_Human::~CDOTA_BotMode_Roam_Human  (line 55, @0x0000000002827010, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Roam
void __fastcall CDOTA_BotMode_Roam_Human::~CDOTA_BotMode_Roam_Human(CDOTA_BotMode_Roam_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
}


// CDOTA_BotMode_Roam_Human::~CDOTA_BotMode_Roam_Human  (line 55, @0x00000000028271d0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Roam, ~CDOTA_BotMode_Roam_Human
// calls: operator delete
void __fastcall CDOTA_BotMode_Roam_Human::~CDOTA_BotMode_Roam_Human(CDOTA_BotMode_Roam_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;
  operator delete(this);
}


// CDOTA_BotMode_Roam_Human::OnStart  (line 63, @0x0000000002826ed0, libserver.so)
void __fastcall CDOTA_BotMode_Roam_Human::OnStart(CDOTA_BotMode_Roam_Human *const this)
{
  ;
}


// CDOTA_BotMode_Roam_Human::OnEnd  (line 64, @0x0000000002826ee0, libserver.so)
void __fastcall CDOTA_BotMode_Roam_Human::OnEnd(CDOTA_BotMode_Roam_Human *const this)
{
  ;
}


// CDOTA_BotMode_Roam_Human::Think  (line 65, @0x0000000002826ef0, libserver.so)
void __fastcall CDOTA_BotMode_Roam_Human::Think(CDOTA_BotMode_Roam_Human *const this)
{
  ;
}


// CDOTA_BotMode_Roam_Human::CalculateDesiredLocation  (line 69, @0x0000000002826f00, libserver.so)
Vector __fastcall CDOTA_BotMode_Roam_Human::CalculateDesiredLocation(CDOTA_BotMode_Roam_Human *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


