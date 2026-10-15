
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// PlayerBody::Schema_DynamicBinding  (line 55, @0x0000000002f46780, libserver.so)
// globals: PlayerBody::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall PlayerBody::Schema_DynamicBinding(const PlayerBody *const this)
{
  return PlayerBody::s_pSchemaBinding;
}


// PlayerBody::IsHeadAimingOnTarget  (line 146, @0x0000000002f46790, libserver.so)
bool __fastcall PlayerBody::IsHeadAimingOnTarget(const PlayerBody *const this)
{
  return this->m_bIsSightedIn;
}


// PlayerBody::StartActivity  (line 160, @0x0000000002f467a0, libserver.so)
bool __fastcall PlayerBody::StartActivity(PlayerBody *const this, Activity act, unsigned int flags)
{
  return 0;
}


// PlayerBody::GetActivity  (line 168, @0x0000000002f467b0, libserver.so)
Activity __fastcall PlayerBody::GetActivity(const PlayerBody *const this)
{
  return -1;
}


// PlayerBody::IsActivity  (line 175, @0x0000000002f467c0, libserver.so)
bool __fastcall PlayerBody::IsActivity(const PlayerBody *const this, Activity act)
{
  return 0;
}


// PlayerBody::HasActivityType  (line 182, @0x0000000002f467d0, libserver.so)
bool __fastcall PlayerBody::HasActivityType(const PlayerBody *const this, unsigned int flags)
{
  return 0;
}


// PlayerBody::SetDesiredPosture  (line 189, @0x0000000002f467e0, libserver.so)
void __fastcall PlayerBody::SetDesiredPosture(PlayerBody *const this, IBody::PostureType posture)
{
  this->m_posture = posture;
}


// PlayerBody::GetDesiredPosture  (line 196, @0x0000000002f467f0, libserver.so)
IBody::PostureType __fastcall PlayerBody::GetDesiredPosture(const PlayerBody *const this)
{
  return this->m_posture;
}


// PlayerBody::IsDesiredPosture  (line 203, @0x0000000002f46800, libserver.so)
bool __fastcall PlayerBody::IsDesiredPosture(const PlayerBody *const this, IBody::PostureType posture)
{
  return posture == this->m_posture;
}


// PlayerBody::IsInDesiredPosture  (line 210, @0x0000000002f46810, libserver.so)
bool __fastcall PlayerBody::IsInDesiredPosture(const PlayerBody *const this)
{
  return 1;
}


// PlayerBody::GetActualPosture  (line 217, @0x0000000002f46820, libserver.so)
IBody::PostureType __fastcall PlayerBody::GetActualPosture(const PlayerBody *const this)
{
  return this->m_posture;
}


// PlayerBody::IsActualPosture  (line 224, @0x0000000002f46830, libserver.so)
bool __fastcall PlayerBody::IsActualPosture(const PlayerBody *const this, IBody::PostureType posture)
{
  return posture == this->m_posture;
}


// PlayerBody::IsPostureMobile  (line 231, @0x0000000002f46840, libserver.so)
bool __fastcall PlayerBody::IsPostureMobile(const PlayerBody *const this)
{
  return 1;
}


// PlayerBody::IsPostureChanging  (line 238, @0x0000000002f46850, libserver.so)
bool __fastcall PlayerBody::IsPostureChanging(const PlayerBody *const this)
{
  return 0;
}


// PlayerBody::SetArousal  (line 245, @0x0000000002f46860, libserver.so)
void __fastcall PlayerBody::SetArousal(PlayerBody *const this, IBody::ArousalType arousal)
{
  this->m_arousal = arousal;
}


// PlayerBody::GetArousal  (line 252, @0x0000000002f46870, libserver.so)
IBody::ArousalType __fastcall PlayerBody::GetArousal(const PlayerBody *const this)
{
  return this->m_arousal;
}


// PlayerBody::IsArousal  (line 259, @0x0000000002f46880, libserver.so)
bool __fastcall PlayerBody::IsArousal(const PlayerBody *const this, IBody::ArousalType arousal)
{
  return arousal == this->m_arousal;
}


// PlayerBody::GetHullWidth  (line 266, @0x0000000002f46bc0, libserver.so)
// calls: SafeGetViewVectors
float __fastcall PlayerBody::GetHullWidth(const PlayerBody *const this)
{
  float x; // [rsp+Ch] [rbp-4h]

  x = SafeGetViewVectors()->m_vHullMax.x;
  return x - SafeGetViewVectors()->m_vHullMin.x;
}


// PlayerBody::GetHullHeight  (line 273, @0x0000000002f46d20, libserver.so)
float __fastcall PlayerBody::GetHullHeight(const PlayerBody *const this)
{
  int (**vptr_INextBotEventResponder)(...); // rax

  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  if ( this->m_posture == IBody::PostureType::CROUCH )
    return (vptr_INextBotEventResponder[96])();
  else
    return (vptr_INextBotEventResponder[95])();
}


// PlayerBody::GetStandHullHeight  (line 285, @0x0000000002f46bf0, libserver.so)
// calls: SafeGetViewVectors
float __fastcall PlayerBody::GetStandHullHeight(const PlayerBody *const this)
{
  float z; // [rsp+Ch] [rbp-4h]

  z = SafeGetViewVectors()->m_vHullMax.z;
  return z - SafeGetViewVectors()->m_vHullMin.z;
}


// PlayerBody::GetCrouchHullHeight  (line 292, @0x0000000002f46c20, libserver.so)
// calls: SafeGetViewVectors
float __fastcall PlayerBody::GetCrouchHullHeight(const PlayerBody *const this)
{
  float z; // [rsp+Ch] [rbp-4h]

  z = SafeGetViewVectors()->m_vDuckHullMax.z;
  return z - SafeGetViewVectors()->m_vDuckHullMin.z;
}


