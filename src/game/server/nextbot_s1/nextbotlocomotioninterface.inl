
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLocomotionBase::Schema_DynamicBinding  (line 42, @0x0000000002868c20, libserver.so)
// calls: CLocomotionBase::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CLocomotionBase::Schema_DynamicBinding(const CLocomotionBase *const this)
{
  CLocomotionBase::Schema_VerifyBindingIsRegistered();
  return CLocomotionBase::s_pSchemaBinding;
}


// CLocomotionBase::GetName  (line 53, @0x0000000002f36590, libserver.so)
// strings: "CLocomotionBase"
const char *__fastcall CLocomotionBase::GetName(CLocomotionBase *const this)
{
  return "CLocomotionBase";
}


// CLocomotionBase::ClimbUpToLedge  (line 74, @0x0000000002868710, libserver.so)
bool __fastcall CLocomotionBase::ClimbUpToLedge(
        CLocomotionBase *const this,
        const Vector *const landingGoal,
        const Vector *const landingForward,
        const CBaseEntity *obstacle)
{
  return 1;
}


// CLocomotionBase::JumpAcrossGap  (line 75, @0x0000000002868720, libserver.so)
void __fastcall CLocomotionBase::JumpAcrossGap(
        CLocomotionBase *const this,
        const Vector *const landingGoal,
        const Vector *const landingForward)
{
  ;
}


// CLocomotionBase::Jump  (line 76, @0x0000000002868730, libserver.so)
void __fastcall CLocomotionBase::Jump(CLocomotionBase *const this)
{
  ;
}


// CLocomotionBase::Run  (line 82, @0x0000000002868740, libserver.so)
void __fastcall CLocomotionBase::Run(CLocomotionBase *const this)
{
  ;
}


// CLocomotionBase::Walk  (line 83, @0x0000000002868750, libserver.so)
void __fastcall CLocomotionBase::Walk(CLocomotionBase *const this)
{
  ;
}


// CLocomotionBase::Stop  (line 84, @0x0000000002f365a0, libserver.so)
void __fastcall CLocomotionBase::Stop(CLocomotionBase *const this)
{
  ;
}


// CLocomotionBase::SetDesiredSpeed  (line 86, @0x0000000002868760, libserver.so)
void __fastcall CLocomotionBase::SetDesiredSpeed(CLocomotionBase *const this, double a2, float flSpeed)
{
  ;
}


// CLocomotionBase::SetSpeedLimit  (line 89, @0x0000000002868770, libserver.so)
void __fastcall CLocomotionBase::SetSpeedLimit(CLocomotionBase *const this, double a2, float flSpeed)
{
  ;
}


// CLocomotionBase::GetSpeedLimit  (line 90, @0x0000000002868780, libserver.so)
float __fastcall CLocomotionBase::GetSpeedLimit(const CLocomotionBase *const this)
{
  return 1000.0;
}


// CLocomotionBase::OnLeaveGround  (line 93, @0x0000000002868790, libserver.so)
void __fastcall CLocomotionBase::OnLeaveGround(CLocomotionBase *const this, CBaseEntity *ground)
{
  ;
}


// CLocomotionBase::OnLandOnGround  (line 94, @0x00000000028687a0, libserver.so)
void __fastcall CLocomotionBase::OnLandOnGround(CLocomotionBase *const this, CBaseEntity *ground)
{
  ;
}


// CLocomotionBase::ClimbLadder  (line 100, @0x00000000028687b0, libserver.so)
void __fastcall CLocomotionBase::ClimbLadder(
        CLocomotionBase *const this,
        const CNavLadder *ladder,
        const CNavArea *dismountGoal)
{
  ;
}


// CLocomotionBase::DescendLadder  (line 101, @0x00000000028687c0, libserver.so)
void __fastcall CLocomotionBase::DescendLadder(
        CLocomotionBase *const this,
        const CNavLadder *ladder,
        const CNavArea *dismountGoal)
{
  ;
}


// CLocomotionBase::IsAbleToAutoCenterOnLadder  (line 104, @0x00000000028687d0, libserver.so)
bool __fastcall CLocomotionBase::IsAbleToAutoCenterOnLadder(const CLocomotionBase *const this)
{
  return 0;
}


// CLocomotionBase::FaceTowards  (line 106, @0x0000000002f365b0, libserver.so)
void __fastcall CLocomotionBase::FaceTowards(CLocomotionBase *const this, const Vector *const target)
{
  ;
}


// CLocomotionBase::SetDesiredLean  (line 108, @0x00000000028687e0, libserver.so)
void __fastcall CLocomotionBase::SetDesiredLean(CLocomotionBase *const this, const QAngle *const lean)
{
  ;
}


// CLocomotionBase::IsAbleToJumpAcrossGaps  (line 190, @0x0000000002f1d950, libserver.so)
bool __fastcall CLocomotionBase::IsAbleToJumpAcrossGaps(const CLocomotionBase *const this)
{
  return 1;
}


// CLocomotionBase::IsAbleToClimb  (line 197, @0x0000000002f1d960, libserver.so)
bool __fastcall CLocomotionBase::IsAbleToClimb(const CLocomotionBase *const this)
{
  return 1;
}


// CLocomotionBase::IsAttemptingToMove  (line 204, @0x0000000002869680, libserver.so)  // inlines: GetElapsedTime
// calls: IntervalTimer::Now
bool __fastcall CLocomotionBase::IsAttemptingToMove(const CLocomotionBase *const this)
{
  return this->m_moveRequestTimer.m_timestamp.m_Value > 0.0
      && (IntervalTimer::Now(&this->m_moveRequestTimer) - this->m_moveRequestTimer.m_timestamp.m_Value) < 0.25;
}


// CLocomotionBase::IsScrambling  (line 211, @0x0000000002868e00, libserver.so)
bool __fastcall CLocomotionBase::IsScrambling(const CLocomotionBase *const this)
{
  return (*(this->_vptr_INextBotEventResponder + 83))(this) == 0
      || (*(this->_vptr_INextBotEventResponder + 71))(this) != 0
      || (*(this->_vptr_INextBotEventResponder + 91))(this);
}


// CLocomotionBase::IsClimbingOrJumping  (line 218, @0x00000000028687f0, libserver.so)
bool __fastcall CLocomotionBase::IsClimbingOrJumping(const CLocomotionBase *const this)
{
  return 0;
}


// CLocomotionBase::IsClimbingUpToLedge  (line 225, @0x0000000002868800, libserver.so)
bool __fastcall CLocomotionBase::IsClimbingUpToLedge(const CLocomotionBase *const this)
{
  return 0;
}


// CLocomotionBase::IsJumpingAcrossGap  (line 232, @0x0000000002868810, libserver.so)
bool __fastcall CLocomotionBase::IsJumpingAcrossGap(const CLocomotionBase *const this)
{
  return 0;
}


// CLocomotionBase::IsRunning  (line 239, @0x0000000002868820, libserver.so)
bool __fastcall CLocomotionBase::IsRunning(const CLocomotionBase *const this)
{
  return 0;
}


// CLocomotionBase::GetDesiredSpeed  (line 246, @0x0000000002868830, libserver.so)
float __fastcall CLocomotionBase::GetDesiredSpeed(const CLocomotionBase *const this)
{
  return 0.0;
}


// CLocomotionBase::IsOnGround  (line 253, @0x0000000002868840, libserver.so)
bool __fastcall CLocomotionBase::IsOnGround(const CLocomotionBase *const this)
{
  return 0;
}


// CLocomotionBase::GetGround  (line 260, @0x0000000002868850, libserver.so)
CBaseEntity *__fastcall CLocomotionBase::GetGround(const CLocomotionBase *const this)
{
  return 0;
}


// CLocomotionBase::GetGroundNormal  (line 267, @0x0000000002868860, libserver.so)
Vector __fastcall CLocomotionBase::GetGroundNormal(const CLocomotionBase *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CLocomotionBase::GetGroundSpeed  (line 274, @0x0000000002868880, libserver.so)
float __fastcall CLocomotionBase::GetGroundSpeed(const CLocomotionBase *const this)
{
  return this->m_flGroundSpeed;
}


// CLocomotionBase::GetGroundMotionVector  (line 281, @0x0000000002868890, libserver.so)
Vector __fastcall CLocomotionBase::GetGroundMotionVector(const CLocomotionBase *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vGroundMotionVector.x;
  result.z = this->m_vGroundMotionVector.z;
  return result;
}


// CLocomotionBase::IsUsingLadder  (line 288, @0x00000000028688b0, libserver.so)
bool __fastcall CLocomotionBase::IsUsingLadder(const CLocomotionBase *const this)
{
  return 0;
}


// CLocomotionBase::IsAscendingOrDescendingLadder  (line 295, @0x00000000028688c0, libserver.so)
bool __fastcall CLocomotionBase::IsAscendingOrDescendingLadder(const CLocomotionBase *const this)
{
  return 0;
}


// CLocomotionBase::GetDesiredLean  (line 302, @0x00000000028688d0, libserver.so)
QAngle __fastcall CLocomotionBase::GetDesiredLean(const CLocomotionBase *const this)
{
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_angle.x;
  result.z = vec3_angle.z;
  return result;
}


// CLocomotionBase::GetStepHeight  (line 309, @0x0000000002f365c0, libserver.so)
float __fastcall CLocomotionBase::GetStepHeight(const CLocomotionBase *const this)
{
  return 0.0;
}


// CLocomotionBase::GetMaxJumpHeight  (line 316, @0x0000000002f365d0, libserver.so)
float __fastcall CLocomotionBase::GetMaxJumpHeight(const CLocomotionBase *const this)
{
  return 0.0;
}


// CLocomotionBase::GetDeathDropHeight  (line 323, @0x0000000002f365e0, libserver.so)
float __fastcall CLocomotionBase::GetDeathDropHeight(const CLocomotionBase *const this)
{
  return 0.0;
}


// CLocomotionBase::GetRunSpeed  (line 330, @0x00000000028688f0, libserver.so)
float __fastcall CLocomotionBase::GetRunSpeed(const CLocomotionBase *const this)
{
  return 0.0;
}


// CLocomotionBase::GetWalkSpeed  (line 337, @0x0000000002868900, libserver.so)
float __fastcall CLocomotionBase::GetWalkSpeed(const CLocomotionBase *const this)
{
  return 0.0;
}


// CLocomotionBase::GetVelocity  (line 344, @0x0000000002868910, libserver.so)
Vector __fastcall CLocomotionBase::GetVelocity(const CLocomotionBase *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CLocomotionBase::GetSpeed  (line 351, @0x0000000002868930, libserver.so)
float __fastcall CLocomotionBase::GetSpeed(const CLocomotionBase *const this)
{
  return this->m_flSpeed;
}


// CLocomotionBase::GetMotionVector  (line 358, @0x0000000002868940, libserver.so)
Vector __fastcall CLocomotionBase::GetMotionVector(const CLocomotionBase *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vMotionVector.x;
  result.z = this->m_vMotionVector.z;
  return result;
}


// CLocomotionBase::GetTraversableSlopeLimit  (line 365, @0x0000000002868960, libserver.so)
float __fastcall CLocomotionBase::GetTraversableSlopeLimit(const CLocomotionBase *const this)
{
  return 0.60000002;
}


// CLocomotionBase::GetStuckDuration  (line 379, @0x00000000028696e0, libserver.so)  // inlines: GetElapsedTime
// calls: IntervalTimer::Now
float __fastcall CLocomotionBase::GetStuckDuration(const CLocomotionBase *const this)
{
  float result; // xmm0_4

  result = 0.0;
  if ( this->m_bIsStuck )
  {
    if ( this->m_stuckTimer.m_timestamp.m_Value <= 0.0 )
      return 99999.898;
    else
      return IntervalTimer::Now(&this->m_stuckTimer) - this->m_stuckTimer.m_timestamp.m_Value;
  }
  return result;
}


