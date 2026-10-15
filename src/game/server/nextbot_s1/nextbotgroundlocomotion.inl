
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NextBotGroundLocomotion::Schema_DynamicBinding  (line 30, @0x0000000002f1d9f0, libserver.so)
// globals: NextBotGroundLocomotion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall NextBotGroundLocomotion::Schema_DynamicBinding(
        const NextBotGroundLocomotion *const this)
{
  return NextBotGroundLocomotion::s_pSchemaBinding;
}


// NextBotGroundLocomotion::GetName  (line 43, @0x0000000002f1da00, libserver.so)
// strings: "NextBotGroundLocomotion"
const char *__fastcall NextBotGroundLocomotion::GetName(NextBotGroundLocomotion *const this)
{
  return "NextBotGroundLocomotion";
}


// NextBotGroundLocomotion::GetGround  (line 199, @0x0000000002f1fb70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall NextBotGroundLocomotion::GetGround(const NextBotGroundLocomotion *const this)
{
  CBaseEntity *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hGround.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hGround.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hGround.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance;
    }
  }
  return result;
}


// NextBotGroundLocomotion::GetGroundNormal  (line 206, @0x0000000002f1da10, libserver.so)
Vector __fastcall NextBotGroundLocomotion::GetGroundNormal(const NextBotGroundLocomotion *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vGroundNormal.x;
  result.z = this->m_vGroundNormal.z;
  return result;
}


// NextBotGroundLocomotion::GetMoveVector  (line 213, @0x0000000002f1da30, libserver.so)
Vector __fastcall NextBotGroundLocomotion::GetMoveVector(const NextBotGroundLocomotion *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vMoveVector.x;
  result.z = this->m_vMoveVector.z;
  return result;
}


// NextBotGroundLocomotion::SetDesiredLean  (line 220, @0x0000000002f1da50, libserver.so)  // inlines: operator=
void __fastcall NextBotGroundLocomotion::SetDesiredLean(NextBotGroundLocomotion *const this, const QAngle *const lean)
{
  this->m_desiredLean = *lean;
}


// NextBotGroundLocomotion::GetDesiredLean  (line 227, @0x0000000002f1da80, libserver.so)
QAngle __fastcall NextBotGroundLocomotion::GetDesiredLean(const NextBotGroundLocomotion *const this)
{
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_desiredLean.x;
  result.z = this->m_desiredLean.z;
  return result;
}


// NextBotGroundLocomotion::SetDesiredSpeed  (line 234, @0x0000000002f1daa0, libserver.so)
void __fastcall NextBotGroundLocomotion::SetDesiredSpeed(NextBotGroundLocomotion *const this, float a2, float speed)
{
  this->m_flDesiredSpeed = a2;
}


// NextBotGroundLocomotion::GetDesiredSpeed  (line 241, @0x0000000002f1dab0, libserver.so)
float __fastcall NextBotGroundLocomotion::GetDesiredSpeed(const NextBotGroundLocomotion *const this)
{
  return this->m_flDesiredSpeed;
}


// NextBotGroundLocomotion::IsClimbingOrJumping  (line 248, @0x0000000002f1dac0, libserver.so)
bool __fastcall NextBotGroundLocomotion::IsClimbingOrJumping(const NextBotGroundLocomotion *const this)
{
  return this->m_bIsJumping;
}


// NextBotGroundLocomotion::IsClimbingUpToLedge  (line 255, @0x0000000002f1dad0, libserver.so)
bool __fastcall NextBotGroundLocomotion::IsClimbingUpToLedge(const NextBotGroundLocomotion *const this)
{
  return this->m_bIsClimbingUpToLedge;
}


// NextBotGroundLocomotion::IsJumpingAcrossGap  (line 262, @0x0000000002f1dae0, libserver.so)
bool __fastcall NextBotGroundLocomotion::IsJumpingAcrossGap(const NextBotGroundLocomotion *const this)
{
  return this->m_bIsJumpingAcrossGap;
}


// NextBotGroundLocomotion::IsRunning  (line 269, @0x0000000002f1daf0, libserver.so)
bool __fastcall NextBotGroundLocomotion::IsRunning(const NextBotGroundLocomotion *const this)
{
  float m_flActualSpeed; // [rsp+Ch] [rbp-4h]

  m_flActualSpeed = this->m_flActualSpeed;
  return m_flActualSpeed > ((*(this->_vptr_INextBotEventResponder + 102))(this) * 0.89999998);
}


// NextBotGroundLocomotion::Run  (line 277, @0x0000000002f1db30, libserver.so)
void __fastcall NextBotGroundLocomotion::Run(NextBotGroundLocomotion *const this)
{
  this->m_flDesiredSpeed = (*(this->_vptr_INextBotEventResponder + 102))(this);
}


// NextBotGroundLocomotion::Walk  (line 284, @0x0000000002f1db60, libserver.so)
void __fastcall NextBotGroundLocomotion::Walk(NextBotGroundLocomotion *const this)
{
  this->m_flDesiredSpeed = (*(this->_vptr_INextBotEventResponder + 103))(this);
}


// NextBotGroundLocomotion::Stop  (line 291, @0x0000000002f1db90, libserver.so)
void __fastcall NextBotGroundLocomotion::Stop(NextBotGroundLocomotion *const this)
{
  this->m_flDesiredSpeed = 0.0;
}


// NextBotGroundLocomotion::GetStepHeight  (line 298, @0x0000000002f1dba0, libserver.so)
float __fastcall NextBotGroundLocomotion::GetStepHeight(const NextBotGroundLocomotion *const this)
{
  return 18.0;
}


// NextBotGroundLocomotion::GetMaxJumpHeight  (line 305, @0x0000000002f1dbb0, libserver.so)
float __fastcall NextBotGroundLocomotion::GetMaxJumpHeight(const NextBotGroundLocomotion *const this)
{
  return 180.0;
}


// NextBotGroundLocomotion::GetDeathDropHeight  (line 312, @0x0000000002f1dbc0, libserver.so)
float __fastcall NextBotGroundLocomotion::GetDeathDropHeight(const NextBotGroundLocomotion *const this)
{
  return 200.0;
}


// NextBotGroundLocomotion::GetRunSpeed  (line 319, @0x0000000002f1dbd0, libserver.so)
float __fastcall NextBotGroundLocomotion::GetRunSpeed(const NextBotGroundLocomotion *const this)
{
  return 150.0;
}


// NextBotGroundLocomotion::GetWalkSpeed  (line 326, @0x0000000002f1dbe0, libserver.so)
float __fastcall NextBotGroundLocomotion::GetWalkSpeed(const NextBotGroundLocomotion *const this)
{
  return 75.0;
}


// NextBotGroundLocomotion::IsUsingLadder  (line 333, @0x0000000002f1dbf0, libserver.so)  // inlines: operator bool
bool __fastcall NextBotGroundLocomotion::IsUsingLadder(const NextBotGroundLocomotion *const this)
{
  return this->m_hLadder.m_pData != 0 && this->m_hLadder.m_pAssociatedNavMesh == TheNavMesh;
}


// NextBotGroundLocomotion::IsAscendingOrDescendingLadder  (line 340, @0x0000000002f1dc20, libserver.so)
bool __fastcall NextBotGroundLocomotion::IsAscendingOrDescendingLadder(const NextBotGroundLocomotion *const this)
{
  return (*(this->_vptr_INextBotEventResponder + 90))(this);
}


// NextBotGroundLocomotion::GetVelocity  (line 361, @0x0000000002f1dc40, libserver.so)
Vector __fastcall NextBotGroundLocomotion::GetVelocity(const NextBotGroundLocomotion *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vVelocity.x;
  result.z = this->m_vVelocity.z;
  return result;
}


// NextBotGroundLocomotion::OnMoveToSuccess  (line 368, @0x0000000002f1dc60, libserver.so)  // inlines: operator=
void __fastcall NextBotGroundLocomotion::OnMoveToSuccess(NextBotGroundLocomotion *const this)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  this->m_vVelocity.x = vec3_origin.x;
  this->m_vVelocity.y = y;
  this->m_vVelocity.z = z;
  this->m_vAcceleration.x = x;
  this->m_vAcceleration.y = y;
  this->m_vAcceleration.z = z;
}


// NextBotGroundLocomotion::OnMoveToFailure  (line 377, @0x0000000002f1dcb0, libserver.so)  // inlines: operator=
void __fastcall NextBotGroundLocomotion::OnMoveToFailure(NextBotGroundLocomotion *const this, MoveToFailureType reason)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  this->m_vVelocity.x = vec3_origin.x;
  this->m_vVelocity.y = y;
  this->m_vVelocity.z = z;
  this->m_vAcceleration.x = x;
  this->m_vAcceleration.y = y;
  this->m_vAcceleration.z = z;
}


// NextBotGroundLocomotion::ResolveActorCollisions  (line 386, @0x0000000002f1dd00, libserver.so)
Vector __fastcall NextBotGroundLocomotion::ResolveActorCollisions(
        NextBotGroundLocomotion *const this,
        const Vector *const vPos)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vPos->x;
  result.z = vPos->z;
  return result;
}


// NextBotGroundLocomotion::OnStandingOnNonWorldEntity  (line 393, @0x0000000002f1dd20, libserver.so)
bool __fastcall NextBotGroundLocomotion::OnStandingOnNonWorldEntity(
        NextBotGroundLocomotion *const this,
        CBaseEntity *const rEntity)
{
  return 0;
}


// NextBotGroundLocomotion::CalcClimbUpToLedgeActivity  (line 400, @0x0000000002f1dd30, libserver.so)
__int64 __fastcall NextBotGroundLocomotion::CalcClimbUpToLedgeActivity(
        NextBotGroundLocomotion *const this,
        double a2,
        float flLedgeHeight,
        float *pLedgeErrorOut)
{
  return 33;
}


