
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// PlayerLocomotion::Schema_DynamicBinding  (line 23, @0x0000000002f46890, libserver.so)
// globals: PlayerLocomotion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall PlayerLocomotion::Schema_DynamicBinding(const PlayerLocomotion *const this)
{
  return PlayerLocomotion::s_pSchemaBinding;
}


// PlayerLocomotion::~PlayerLocomotion  (line 29, @0x0000000002f46c90, libserver.so)
// calls: CLocomotionBase::~CLocomotionBase
void __fastcall PlayerLocomotion::~PlayerLocomotion(PlayerLocomotion *const this)
{
  this->_vptr_INextBotEventResponder = &off_47B6BF0;
  CLocomotionBase::~CLocomotionBase(this);
}


// PlayerLocomotion::~PlayerLocomotion  (line 29, @0x0000000002f46cb0, libserver.so)  // inlines: ~PlayerLocomotion
// calls: CLocomotionBase::~CLocomotionBase, operator delete
void __fastcall PlayerLocomotion::~PlayerLocomotion(PlayerLocomotion *const this)
{
  this->_vptr_INextBotEventResponder = &off_47B6BF0;
  CLocomotionBase::~CLocomotionBase(this);
  operator delete(this);
}


// PlayerLocomotion::GetName  (line 36, @0x0000000002f468a0, libserver.so)
// strings: "PlayerLocomotion"
const char *__fastcall PlayerLocomotion::GetName(PlayerLocomotion *const this)
{
  return "PlayerLocomotion";
}


// PlayerLocomotion::SetDesiredLean  (line 73, @0x0000000002f468b0, libserver.so)
void __fastcall PlayerLocomotion::SetDesiredLean(PlayerLocomotion *const this, const QAngle *const lean)
{
  ;
}


// PlayerLocomotion::GetDesiredLean  (line 74, @0x0000000002f46b70, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'PlayerLocomotion::GetDesiredLean(void)::junk, PlayerLocomotion::GetDesiredLean(void)::junk
QAngle __fastcall PlayerLocomotion::GetDesiredLean(const PlayerLocomotion *const this)
{
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( `guard variable for'PlayerLocomotion::GetDesiredLean(void)::junk == 0
    && __cxa_guard_acquire(&`guard variable for'PlayerLocomotion::GetDesiredLean(void)::junk) != 0 )
  {
    __cxa_guard_release(&`guard variable for'PlayerLocomotion::GetDesiredLean(void)::junk);
  }
  *&result.x = *&PlayerLocomotion::GetDesiredLean(void)const::junk.x;
  result.z = PlayerLocomotion::GetDesiredLean(void)const::junk.z;
  return result;
}


// PlayerLocomotion::GetStepHeight  (line 142, @0x0000000002f468c0, libserver.so)
float __fastcall PlayerLocomotion::GetStepHeight(const PlayerLocomotion *const this)
{
  return 18.0;
}


// PlayerLocomotion::GetMaxJumpHeight  (line 149, @0x0000000002f468d0, libserver.so)
float __fastcall PlayerLocomotion::GetMaxJumpHeight(const PlayerLocomotion *const this)
{
  return 57.0;
}


// PlayerLocomotion::GetDeathDropHeight  (line 156, @0x0000000002f468e0, libserver.so)
float __fastcall PlayerLocomotion::GetDeathDropHeight(const PlayerLocomotion *const this)
{
  return 200.0;
}


// PlayerLocomotion::GetRunSpeed  (line 163, @0x0000000002f468f0, libserver.so)  // inlines: MaxSpeed
float __fastcall PlayerLocomotion::GetRunSpeed(const PlayerLocomotion *const this)
{
  return this->m_player->m_flMaxspeed.m_Value;
}


// PlayerLocomotion::GetWalkSpeed  (line 170, @0x0000000002f46910, libserver.so)  // inlines: MaxSpeed
float __fastcall PlayerLocomotion::GetWalkSpeed(const PlayerLocomotion *const this)
{
  return 0.5 * this->m_player->m_flMaxspeed.m_Value;
}


// PlayerLocomotion::Run  (line 177, @0x0000000002f46930, libserver.so)
void __fastcall PlayerLocomotion::Run(PlayerLocomotion *const this)
{
  this->m_flDesiredSpeed = (*(this->_vptr_INextBotEventResponder + 102))(this);
}


// PlayerLocomotion::Walk  (line 184, @0x0000000002f46960, libserver.so)
void __fastcall PlayerLocomotion::Walk(PlayerLocomotion *const this)
{
  this->m_flDesiredSpeed = (*(this->_vptr_INextBotEventResponder + 103))(this);
}


// PlayerLocomotion::Stop  (line 191, @0x0000000002f46990, libserver.so)
void __fastcall PlayerLocomotion::Stop(PlayerLocomotion *const this)
{
  this->m_flDesiredSpeed = 0.0;
}


// PlayerLocomotion::IsRunning  (line 198, @0x0000000002f469a0, libserver.so)
bool __fastcall PlayerLocomotion::IsRunning(const PlayerLocomotion *const this)
{
  return 1;
}


// PlayerLocomotion::SetDesiredSpeed  (line 205, @0x0000000002f469b0, libserver.so)
void __fastcall PlayerLocomotion::SetDesiredSpeed(PlayerLocomotion *const this, float a2, float speed)
{
  this->m_flDesiredSpeed = a2;
}


// PlayerLocomotion::GetDesiredSpeed  (line 212, @0x0000000002f469c0, libserver.so)
float __fastcall PlayerLocomotion::GetDesiredSpeed(const PlayerLocomotion *const this)
{
  float m_flDesiredSpeed; // xmm1_4
  float result; // xmm0_4

  m_flDesiredSpeed = this->m_flDesiredSpeed;
  result = this->m_flSpeedLimitMax;
  if ( m_flDesiredSpeed <= result )
    return fmaxf(this->m_flSpeedLimitMin, m_flDesiredSpeed);
  return result;
}


// PlayerLocomotion::SetMinimumSpeedLimit  (line 219, @0x0000000002f469f0, libserver.so)
void __fastcall PlayerLocomotion::SetMinimumSpeedLimit(PlayerLocomotion *const this, float a2, float limit)
{
  this->m_flSpeedLimitMin = a2;
}


// PlayerLocomotion::SetMaximumSpeedLimit  (line 226, @0x0000000002f46a00, libserver.so)
void __fastcall PlayerLocomotion::SetMaximumSpeedLimit(PlayerLocomotion *const this, float a2, float limit)
{
  this->m_flSpeedLimitMax = a2;
}


// PlayerLocomotion::IsOnGround  (line 233, @0x0000000002f46ce0, libserver.so)
// calls: CBaseEntity::GetGroundEntity
bool __fastcall PlayerLocomotion::IsOnGround(const PlayerLocomotion *const this)
{
  return CBaseEntity::GetGroundEntity(this->m_player) != 0;
}


// PlayerLocomotion::GetGround  (line 240, @0x0000000002f46d00, libserver.so)
// calls: CBaseEntity::GetGroundEntity
CBaseEntity *__fastcall PlayerLocomotion::GetGround(const PlayerLocomotion *const this)
{
  return CBaseEntity::GetGroundEntity(this->m_player);
}


// PlayerLocomotion::GetGroundNormal  (line 247, @0x0000000002f46b00, libserver.so)  // inlines: Vector
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'PlayerLocomotion::GetGroundNormal(void)::up, PlayerLocomotion::GetGroundNormal(void)::up
Vector __fastcall PlayerLocomotion::GetGroundNormal(const PlayerLocomotion *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( `guard variable for'PlayerLocomotion::GetGroundNormal(void)::up == 0
    && __cxa_guard_acquire(&`guard variable for'PlayerLocomotion::GetGroundNormal(void)::up) != 0 )
  {
    PlayerLocomotion::GetGroundNormal(void)const::up.x = 0.0;
    PlayerLocomotion::GetGroundNormal(void)const::up.y = 0.0;
    PlayerLocomotion::GetGroundNormal(void)const::up.z = 1.0;
    __cxa_guard_release(&`guard variable for'PlayerLocomotion::GetGroundNormal(void)::up);
  }
  *&result.x = *&PlayerLocomotion::GetGroundNormal(void)const::up.x;
  result.z = PlayerLocomotion::GetGroundNormal(void)const::up.z;
  return result;
}


// PlayerLocomotion::IsAbleToAutoCenterOnLadder  (line 256, @0x0000000002f46a10, libserver.so)
bool __fastcall PlayerLocomotion::IsAbleToAutoCenterOnLadder(const PlayerLocomotion *const this)
{
  char v2; // al
  bool v3; // dl

  v2 = (*(this->_vptr_INextBotEventResponder + 90))(this);
  v3 = 0;
  if ( v2 != 0 )
    return (this->m_ladderState - 3) <= 1;
  return v3;
}


// PlayerLocomotion::IsUsingLadder  (line 263, @0x0000000002f46a50, libserver.so)
bool __fastcall PlayerLocomotion::IsUsingLadder(const PlayerLocomotion *const this)
{
  return this->m_ladderState != PlayerLocomotion::LadderState::NO_LADDER;
}


// PlayerLocomotion::GetFeet  (line 270, @0x0000000002f46ad0, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall PlayerLocomotion::GetFeet(const PlayerLocomotion *const this)
{
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsOrigin = CBaseEntity::GetAbsOrigin(this->m_player);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// PlayerLocomotion::GetVelocity  (line 277, @0x0000000002f46c50, libserver.so)  // inlines: GetAbsVelocity
// calls: CBaseEntity::CalcAbsoluteVelocity
Vector __fastcall PlayerLocomotion::GetVelocity(const PlayerLocomotion *const this)
{
  CBasePlayer *m_player; // rbx
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_player = this->m_player;
  if ( (m_player->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this->m_player);
  *&result.x = *&m_player->m_vecAbsVelocity.m_Value.x;
  result.z = m_player->m_vecAbsVelocity.m_Value.z;
  return result;
}


// PlayerLocomotion::IsAscendingOrDescendingLadder  (line 284, @0x0000000002f46a70, libserver.so)
bool __fastcall PlayerLocomotion::IsAscendingOrDescendingLadder(const PlayerLocomotion *const this)
{
  return (this->m_ladderState - 3) <= 3;
}


