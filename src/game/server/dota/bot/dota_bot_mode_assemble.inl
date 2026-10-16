
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Assemble::~CDOTA_BotMode_Assemble  (line 16, @0x0000000002811dc0, libserver.so)  // inlines: ~CDOTA_BotMode
void __fastcall CDOTA_BotMode_Assemble::~CDOTA_BotMode_Assemble(CDOTA_BotMode_Assemble *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_Assemble::~CDOTA_BotMode_Assemble  (line 16, @0x0000000002812260, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Assemble
// calls: operator delete
void __fastcall CDOTA_BotMode_Assemble::~CDOTA_BotMode_Assemble(CDOTA_BotMode_Assemble *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_Assemble::GetModeType  (line 23, @0x0000000002811da0, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Assemble::GetModeType(CDOTA_BotMode_Assemble *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_ASSEMBLE;
}


// CDOTA_BotMode_Assemble::GetDebugString  (line 36, @0x0000000002811db0, libserver.so)
const char *__fastcall CDOTA_BotMode_Assemble::GetDebugString(CDOTA_BotMode_Assemble *const this)
{
  return "Assembling";
}


// CDOTA_BotMode_Assemble_Human::~CDOTA_BotMode_Assemble_Human  (line 41, @0x0000000002811fa0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Assemble
void __fastcall CDOTA_BotMode_Assemble_Human::~CDOTA_BotMode_Assemble_Human(CDOTA_BotMode_Assemble_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_Assemble_Human::~CDOTA_BotMode_Assemble_Human  (line 41, @0x00000000028123a0, libserver.so)  // inlines: ~CDOTA_BotMode, ~CDOTA_BotMode_Assemble, ~CDOTA_BotMode_Assemble_Human
// calls: operator delete
void __fastcall CDOTA_BotMode_Assemble_Human::~CDOTA_BotMode_Assemble_Human(CDOTA_BotMode_Assemble_Human *const this)
{
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_Assemble_Human::OnStart  (line 49, @0x0000000002811dd0, libserver.so)
void __fastcall CDOTA_BotMode_Assemble_Human::OnStart(CDOTA_BotMode_Assemble_Human *const this)
{
  ;
}


// CDOTA_BotMode_Assemble_Human::OnEnd  (line 50, @0x0000000002811de0, libserver.so)
void __fastcall CDOTA_BotMode_Assemble_Human::OnEnd(CDOTA_BotMode_Assemble_Human *const this)
{
  ;
}


// CDOTA_BotMode_Assemble_Human::Think  (line 51, @0x0000000002811df0, libserver.so)
void __fastcall CDOTA_BotMode_Assemble_Human::Think(CDOTA_BotMode_Assemble_Human *const this)
{
  ;
}


// CDOTA_BotMode_Assemble_Human::CalculateDesiredLocation  (line 55, @0x0000000002811e00, libserver.so)
Vector __fastcall CDOTA_BotMode_Assemble_Human::CalculateDesiredLocation(CDOTA_BotMode_Assemble_Human *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CDOTA_BotMode_Assemble_Human::GetDebugString  (line 58, @0x0000000002811e20, libserver.so)
// strings: "Inferred Assembling"
const char *__fastcall CDOTA_BotMode_Assemble_Human::GetDebugString(CDOTA_BotMode_Assemble_Human *const this)
{
  return "Inferred Assembling";
}


