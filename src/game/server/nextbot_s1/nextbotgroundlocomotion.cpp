// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotgroundlocomotion.cpp:509
class GroundLocomotionCollisionTraceFilter : public CTraceFilterSimple {
public:

	GroundLocomotionCollisionTraceFilter(GroundLocomotionCollisionTraceFilter &);
	GroundLocomotionCollisionTraceFilter(const GroundLocomotionCollisionTraceFilter &);
	GroundLocomotionCollisionTraceFilter(INextBot *, const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~GroundLocomotionCollisionTraceFilter();

	// vtable[2] ShouldHitEntity
	// sizeof = 72
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NextBotGroundLocomotion::NextBotGroundLocomotion  (line 40, @0x0000000002f17540, libserver.so)  // inlines: CEntityHandle, CHandle, CNavHandle, Invalidate, NetworkStateChanged, Set, operator=, operator=<float>
// calls: CLocomotionBase::CLocomotionBase, CountdownTimer::CountdownTimer, CLocomotionBase::~CLocomotionBase, _Unwind_Resume
// callers: CSimpleBot::CSimpleBot
void __fastcall NextBotGroundLocomotion::NextBotGroundLocomotion(NextBotGroundLocomotion *const this, INextBot *pBot)
{
  vec_t x; // xmm0_4

  CLocomotionBase::CLocomotionBase(this, pBot);
  this->m_hGround.m_Index = -1;
  this->_vptr_INextBotEventResponder = &off_47B24D0;
  this->m_hLadder.m_pData = 0;
  this->m_hLadder.m_pAssociatedNavMesh = 0;
  this->m_hLadderDismountGoalArea.m_pData = 0;
  this->m_hLadderDismountGoalArea.m_pAssociatedNavMesh = 0;
  CountdownTimer::CountdownTimer(&this->m_inhibitObstacleAvoidanceTimer);
  CountdownTimer::CountdownTimer(&this->m_ignorePhysicsPropTimer);
  this->m_hIgnorePhysicsProp.m_Index = -1;
  this->m_pNextBot = 0;
  this->m_hLadder.m_pData = 0;
  this->m_hLadder.m_pAssociatedNavMesh = 0;
  x = vec3_angle.x;
  this->m_bRecomputePostureOnCollision = 0;
  this->m_desiredLean.x = x;
  this->m_desiredLean.y = vec3_angle.y;
  this->m_desiredLean.z = vec3_angle.z;
  if ( this->m_ignorePhysicsPropTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ignorePhysicsPropTimer._vptr_CountdownTimer + 2))(
      &this->m_ignorePhysicsPropTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      -1.0);
    this->m_ignorePhysicsPropTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_actJump = 29;
  this->m_actJumpAcrossGap = 29;
  this->m_actLadderDismount = 35;
}


// NextBotGroundLocomotion::~NextBotGroundLocomotion  (line 58, @0x0000000002f11d70, libserver.so)
// calls: CLocomotionBase::~CLocomotionBase
void __fastcall NextBotGroundLocomotion::~NextBotGroundLocomotion(NextBotGroundLocomotion *const this)
{
  this->_vptr_INextBotEventResponder = &off_47B24D0;
  CLocomotionBase::~CLocomotionBase(this);
}


// NextBotGroundLocomotion::~NextBotGroundLocomotion  (line 58, @0x0000000002f11d90, libserver.so)  // inlines: ~NextBotGroundLocomotion
// calls: CLocomotionBase::~CLocomotionBase, operator delete
void __fastcall NextBotGroundLocomotion::~NextBotGroundLocomotion(NextBotGroundLocomotion *const this)
{
  this->_vptr_INextBotEventResponder = &off_47B24D0;
  CLocomotionBase::~CLocomotionBase(this);
  operator delete(this);
}


// NextBotGroundLocomotion::Reset  (line 64, @0x0000000002f1cc90, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, operator=, operator=<float>
// calls: CLocomotionBase::Reset
void __fastcall NextBotGroundLocomotion::Reset(NextBotGroundLocomotion *const this)
{
  NextBotCombatCharacter *v2; // rax
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t v6; // xmm0_4
  vec_t v7; // xmm0_4
  vec_t v8; // xmm0_4
  vec_t v9; // xmm0_4
  vec_t v10; // xmm0_4
  __int64 v11; // rax
  vec_t v12; // xmm0_4
  NextBotCombatCharacter *m_pNextBot; // rax
  vec_t *v14; // rax
  bool v15; // zf

  CLocomotionBase::Reset(this);
  this->m_bRecomputePostureOnCollision = 0;
  if ( this->m_ignorePhysicsPropTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ignorePhysicsPropTimer._vptr_CountdownTimer + 2))(
      &this->m_ignorePhysicsPropTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_ignorePhysicsPropTimer.m_timestamp.m_Value = -1.0;
  }
  v2 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
  this->m_flDesiredSpeed = 0.0;
  this->m_pNextBot = v2;
  this->m_hLadder.m_pData = 0;
  this->m_hLadder.m_pAssociatedNavMesh = 0;
  z = vec3_origin.z;
  this->m_bIsJumping = 0;
  x = vec3_origin.x;
  this->m_bIsJumpingAcrossGap = 0;
  this->m_vVelocity.z = z;
  y = vec3_origin.y;
  this->m_vAcceleration.z = z;
  v6 = vec3_angle.x;
  this->m_vVelocity.x = x;
  this->m_desiredLean.x = v6;
  v7 = vec3_angle.y;
  this->m_vVelocity.y = y;
  this->m_desiredLean.y = v7;
  v8 = vec3_angle.z;
  this->m_vAcceleration.x = x;
  this->m_desiredLean.z = v8;
  this->m_vAcceleration.y = y;
  this->m_hGround.m_Index = -1;
  this->m_vGroundNormal.x = 0.0;
  v9 = vec3_invalid.x;
  this->m_vGroundNormal.y = 0.0;
  this->m_vGroundSampleLastPos.x = v9;
  v10 = vec3_invalid.y;
  this->m_vGroundNormal.z = 1.0;
  this->m_vGroundSampleLastPos.y = v10;
  this->m_vGroundSampleLastPos.z = vec3_invalid.z;
  this->m_bIsClimbingUpToLedge = 0;
  this->m_bIsUsingFullFeetTrace = 0;
  this->m_vMoveVector.x = 1.0;
  this->m_vMoveVector.y = 0.0;
  this->m_vMoveVector.z = 0.0;
  v11 = (*(v2->_vptr_INextBotEventResponder + 73))(&v2->INextBot);
  this->m_vPriorPos.x = *v11;
  this->m_vPriorPos.y = *(v11 + 4);
  v12 = *(v11 + 8);
  m_pNextBot = this->m_pNextBot;
  this->m_vPriorPos.z = v12;
  v14 = (*(m_pNextBot->_vptr_INextBotEventResponder + 73))(&m_pNextBot->INextBot);
  v15 = this->m_inhibitObstacleAvoidanceTimer.m_timestamp.m_Value == -1.0;
  this->m_vLastValidPos.x = *v14;
  this->m_vLastValidPos.y = v14[1];
  this->m_vLastValidPos.z = v14[2];
  if ( !v15 )
  {
    (*(this->m_inhibitObstacleAvoidanceTimer._vptr_CountdownTimer + 2))(
      &this->m_inhibitObstacleAvoidanceTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_inhibitObstacleAvoidanceTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_flAccumApproachWeights = 0.0;
  this->m_vAccumApproachVectors = vec3_origin;
}


// NextBotGroundLocomotion::GetGravity  (line 104, @0x0000000002f112c0, libserver.so)  // inlines: GetFloat
float __fastcall NextBotGroundLocomotion::GetGravity(const NextBotGroundLocomotion *const this)
{
  return nb_locomotion_gravity.m_pParent->m_Value.m_fValue;
}


// NextBotGroundLocomotion::GetFrictionForward  (line 111, @0x0000000002f112e0, libserver.so)  // inlines: GetFloat
float __fastcall NextBotGroundLocomotion::GetFrictionForward(const NextBotGroundLocomotion *const this)
{
  return nb_locomotion_friction_forward.m_pParent->m_Value.m_fValue;
}


// NextBotGroundLocomotion::GetFrictionSideways  (line 118, @0x0000000002f11300, libserver.so)  // inlines: GetFloat
float __fastcall NextBotGroundLocomotion::GetFrictionSideways(const NextBotGroundLocomotion *const this)
{
  return nb_locomotion_friction_sideways.m_pParent->m_Value.m_fValue;
}


// NextBotGroundLocomotion::GetMaxYawRate  (line 125, @0x0000000002f11320, libserver.so)  // inlines: GetFloat
float __fastcall NextBotGroundLocomotion::GetMaxYawRate(const NextBotGroundLocomotion *const this)
{
  return nb_locomotion_yaw_rate_max.m_pParent->m_Value.m_fValue;
}


// NextBotGroundLocomotion::GetMaxAcceleration  (line 132, @0x0000000002f1dd40, libserver.so)  // inlines: GetFloat
float __fastcall NextBotGroundLocomotion::GetMaxAcceleration(const NextBotGroundLocomotion *const this)
{
  return nb_locomotion_acceleration_max.m_pParent->m_Value.m_fValue;
}


// NextBotGroundLocomotion::Update  (line 139, @0x0000000002f1cf30, libserver.so)  // inlines: DotProduct, FastSqrt, GetAbsVelocity, IsDebugFilterMatch, IsDebugging, IsLengthLessThan, Length, LengthSqr, NormalizeInPlace, Vector2D, Vector2DLength, Vector2DNormalize, VectorDivide, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+=, operator-, operator/, operator/=, operator=
// calls: CLocomotionBase::Update, NextBotGroundLocomotion::ApplyAccumulatedApproach, CBaseEntity::SetAbsVelocity, NDebugOverlay::Cross3D, NextBotManager::IsDebugFilterMatch, CBaseEntity::CalcAbsoluteVelocity
void __fastcall NextBotGroundLocomotion::Update(NextBotGroundLocomotion *const this)
{
  float v2; // xmm1_4
  __int64 v3; // rbx
  char v4; // r13
  double v5; // xmm0_8
  int (**vptr_INextBotEventResponder)(...); // rax
  vec_t y; // xmm5_4
  vec_t v8; // xmm1_4
  float x; // r12d
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm0_4
  vec_t v13; // xmm1_4
  float v14; // r15d
  __m128i x_low; // xmm2
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // ebx
  INextBot *v19; // rbx
  bool v20; // zf
  int (**v21)(...); // rax
  vec_t v22; // xmm1_4
  float v23; // xmm8_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  __m128i v27; // xmm4
  float v28; // r15d
  float v29; // xmm4_4
  float v30; // xmm3_4
  double v31; // xmm0_8
  vec_t v32; // xmm1_4
  vec_t z; // r12d
  __int64 v34; // rax
  INextBot *m_bot; // rdi
  __int64 v36; // rax
  INextBot *v37; // rdi
  __int64 v38; // rax
  vec_t v39; // xmm1_4
  double v40; // xmm0_8
  int (**v41)(...); // rax
  vec_t v42; // xmm1_4
  float v43; // xmm0_4
  vec_t v44; // xmm2_4
  vec_t v45; // xmm1_4
  vec_t v46; // xmm0_4
  float v47; // xmm0_4
  double v48; // xmm0_8
  float v49; // [rsp+10h] [rbp-90h]
  float v50; // [rsp+28h] [rbp-78h]
  float v51; // [rsp+28h] [rbp-78h]
  float v52; // [rsp+28h] [rbp-78h]
  float v53; // [rsp+2Ch] [rbp-74h]
  float v54; // [rsp+2Ch] [rbp-74h]
  float v55; // [rsp+30h] [rbp-70h]
  float v56; // [rsp+30h] [rbp-70h]
  float v57; // [rsp+30h] [rbp-70h]
  __int64 v58; // [rsp+30h] [rbp-70h]
  __int64 v59; // [rsp+30h] [rbp-70h]
  __int64 v60; // [rsp+30h] [rbp-70h]
  float m_flActualSpeed; // [rsp+38h] [rbp-68h]
  float m_curInterval; // [rsp+3Ch] [rbp-64h]
  float v63; // [rsp+3Ch] [rbp-64h]
  float v64; // [rsp+3Ch] [rbp-64h]
  double vOrigPos; // [rsp+40h] [rbp-60h]
  float vOrigPos_8; // [rsp+48h] [rbp-58h]
  Vector vNewPos; // [rsp+50h] [rbp-50h] BYREF
  Vector position; // [rsp+60h] [rbp-40h] BYREF

  CLocomotionBase::Update(this);
  m_curInterval = this->m_curInterval;
  NextBotGroundLocomotion::ApplyAccumulatedApproach(this);
  vOrigPos = (*(this->_vptr_INextBotEventResponder + 98))(this);
  vOrigPos_8 = v2;
  v3 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  if ( (*(this->_vptr_INextBotEventResponder + 127))(this) == 0 )
  {
    if ( (*(*v3 + 704LL))(v3) == 0 )
    {
      this->m_vAcceleration.x = 0.0;
      this->m_vAcceleration.y = 0.0;
      this->m_vVelocity.x = 0.0;
      this->m_vVelocity.y = 0.0;
    }
    v4 = (*(this->_vptr_INextBotEventResponder + 83))(this);
    if ( (*(*v3 + 648LL))(v3, 2) == 0 )
    {
      z = this->m_vAcceleration.z;
      if ( (*(this->_vptr_INextBotEventResponder + 83))(this) == 0 )
        this->m_vAcceleration.z = this->m_vAcceleration.z - (*(this->_vptr_INextBotEventResponder + 116))(this);
      if ( (*(this->_vptr_INextBotEventResponder + 71))(this) == 0 || this->m_vVelocity.z <= 0.0 )
      {
        (*(this->_vptr_INextBotEventResponder + 122))(this);
        if ( (*(this->_vptr_INextBotEventResponder + 83))(this) != 0 )
          this->m_vAcceleration.z = z;
      }
    }
    v5 = (*(this->_vptr_INextBotEventResponder + 98))(this);
    vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
    y = this->m_vMoveVector.y;
    *&vNewPos.x = v5;
    vNewPos.z = v8;
    x = this->m_vMoveVector.x;
    v55 = y;
    if ( vptr_INextBotEventResponder[83](this) != 0 )
    {
      v23 = this->m_vVelocity.y;
      v24 = this->m_vVelocity.z;
      v25 = ((this->m_vVelocity.x * this->m_vMoveVector.x) + (v23 * this->m_vMoveVector.y))
          + (this->m_vMoveVector.z * v24);
      v26 = ((this->m_vVelocity.x * v55) + (v23 * -x)) + (v24 * 0.0);
      v27 = LODWORD(v55);
      *v27.m128i_i32 = v55 * v26;
      v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v27));
      v29 = vec3_origin.x;
      v57 = -x * v26;
      v30 = vec3_origin.y;
      if ( v25 < 0.0 )
      {
        v49 = v25;
        v52 = this->m_vMoveVector.y;
        v54 = this->m_vMoveVector.x;
        v48 = (*(this->_vptr_INextBotEventResponder + 117))(this, v26, v25, -0.0, v30, vec3_origin.x);
        *&v48 = -*&v48;
        v29 = (v54 * v49) * *&v48;
        v30 = (v52 * v49) * *&v48;
      }
      v51 = v29;
      v53 = v30;
      v31 = (*(this->_vptr_INextBotEventResponder + 118))(this);
      *&v31 = -*&v31;
      v32 = ((v28 * *&v31) + v51) + this->m_vAcceleration.x;
      *&v31 = ((*&v31 * v57) + v53) + this->m_vAcceleration.y;
      this->m_vAcceleration.x = v32;
      this->m_vAcceleration.y = *&v31;
    }
    if ( (*(*v3 + 648LL))(v3, 1) != 0 )
    {
      this->m_vAcceleration.x = 0.0;
      m_bot = this->m_bot;
      this->m_vAcceleration.y = 0.0;
      v36 = (*(m_bot->_vptr_INextBotEventResponder + 66))(m_bot);
      if ( (*(v36 + 573) & 0x10) != 0 )
      {
        v59 = v36;
        CBaseEntity::CalcAbsoluteVelocity(v36);
        v36 = v59;
      }
      v37 = this->m_bot;
      this->m_vVelocity.x = *(v36 + 444);
      v38 = (*(v37->_vptr_INextBotEventResponder + 66))(v37);
      if ( (*(v38 + 573) & 0x10) != 0 )
      {
        v58 = v38;
        CBaseEntity::CalcAbsoluteVelocity(v38);
        v38 = v58;
      }
      this->m_vVelocity.y = *(v38 + 448);
    }
    else
    {
      v10 = (this->m_vAcceleration.x * m_curInterval) + this->m_vVelocity.x;
      v11 = (this->m_vAcceleration.y * m_curInterval) + this->m_vVelocity.y;
      this->m_vVelocity.x = v10;
      this->m_vVelocity.y = v11;
      vNewPos.x = (v10 * m_curInterval) + vNewPos.x;
      vNewPos.y = (v11 * m_curInterval) + vNewPos.y;
    }
    if ( (*(*v3 + 648LL))(v3, 2) != 0 )
    {
      this->m_vAcceleration.z = 0.0;
      v34 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
      if ( (*(v34 + 573) & 0x10) != 0 )
      {
        v60 = v34;
        CBaseEntity::CalcAbsoluteVelocity(v34);
        v34 = v60;
      }
      this->m_vVelocity.z = *(v34 + 452);
    }
    else
    {
      v12 = (this->m_vAcceleration.z * m_curInterval) + this->m_vVelocity.z;
      this->m_vVelocity.z = v12;
      vNewPos.z = (v12 * m_curInterval) + vNewPos.z;
    }
    (*(this->_vptr_INextBotEventResponder + 121))(this, &vNewPos);
    *&position.x = (*(this->_vptr_INextBotEventResponder + 98))(this);
    position.z = v13;
    v56 = v13;
    v14 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(position.x)));
    v50 = position.y;
    v63 = 1.0 / m_curInterval;
    if ( (*(*v3 + 648LL))(v3, 1) == 0 )
    {
      this->m_vVelocity.x = (v14 - *&vOrigPos) * v63;
      this->m_vVelocity.y = (v50 - *(&vOrigPos + 1)) * v63;
    }
    if ( (*(*v3 + 648LL))(v3, 2) == 0 )
      this->m_vVelocity.z = (v56 - vOrigPos_8) * v63;
    x_low = LODWORD(this->m_vVelocity.x);
    v16 = this->m_vVelocity.y;
    v17 = fsqrt((*x_low.m128i_i32 * *x_low.m128i_i32) + (v16 * v16));
    if ( v17 == 0.0 )
    {
      v64 = 0.0;
      v18 = COERCE_FLOAT(_mm_cvtsi128_si32(0));
    }
    else
    {
      *x_low.m128i_i32 = *x_low.m128i_i32 * (1.0 / v17);
      v18 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
      v64 = v16 * (1.0 / v17);
    }
    this->m_flActualSpeed = v17;
    if ( (*(this->_vptr_INextBotEventResponder + 83))(this) != 0 )
    {
      m_flActualSpeed = this->m_flActualSpeed;
      if ( m_flActualSpeed > (*(this->_vptr_INextBotEventResponder + 102))(this) )
      {
        v47 = (*(this->_vptr_INextBotEventResponder + 102))(this);
        this->m_flActualSpeed = v47;
        this->m_vVelocity.x = v18 * v47;
        this->m_vVelocity.y = v47 * v64;
      }
      if ( v4 == 0 )
      {
        this->m_vVelocity.z = 0.0;
        this->m_vAcceleration.z = 0.0;
      }
    }
    else if ( (((this->m_vVelocity.x * this->m_vVelocity.x) + (this->m_vVelocity.y * this->m_vVelocity.y))
             + (this->m_vVelocity.z * this->m_vVelocity.z)) < 1.0 )
    {
      v40 = (*(this->_vptr_INextBotEventResponder + 87))(this);
      v41 = this->_vptr_INextBotEventResponder;
      position.z = v42;
      *&position.x = v40;
      v43 = (v41[102])(this);
      v44 = position.y * v43;
      v45 = position.z * v43;
      v46 = v43 * position.x;
      this->m_vVelocity.y = v44;
      this->m_vVelocity.z = v45;
      this->m_vVelocity.x = v46;
    }
    CBaseEntity::SetAbsVelocity(this->m_pNextBot, &this->m_vVelocity);
    v19 = this->m_bot;
    this->m_vAcceleration.x = vec3_origin.x;
    v20 = (g_NextBotManager.m_debugType & 0x10) == 0;
    this->m_vAcceleration.y = vec3_origin.y;
    this->m_vAcceleration.z = vec3_origin.z;
    if ( !v20
      && (g_NextBotManager.m_debugFilterList.m_Size == 0 || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, v19))
      && (*(v19->_vptr_INextBotEventResponder + 96))(v19, 16) != 0 )
    {
      v20 = (*(this->_vptr_INextBotEventResponder + 83))(this) == 0;
      v21 = this->_vptr_INextBotEventResponder;
      if ( v20 )
      {
        *&position.x = (v21[98])(this);
        position.z = v39;
        NDebugOverlay::Cross3D(&position, 1.0, 0, 255, 255, 1, 15.0);
      }
      else
      {
        *&position.x = (v21[98])(this);
        position.z = v22;
        NDebugOverlay::Cross3D(&position, 1.0, 0, 255, 0, 1, 15.0);
      }
    }
  }
}


// NextBotGroundLocomotion::Approach  (line 369, @0x0000000002f1d860, libserver.so)  // inlines: VectorMultiply, VectorSubtract, operator*, operator+=, operator-
// calls: CLocomotionBase::Approach
void __fastcall NextBotGroundLocomotion::Approach(
        NextBotGroundLocomotion *const this,
        const Vector *const vRawPos,
        float a3,
        float flGoalWeight)
{
  double v6; // xmm0_8
  float y; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float x; // xmm1_4
  vec_t v11; // xmm3_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm1_4

  CLocomotionBase::Approach(this, vRawPos, flGoalWeight);
  v6 = (*(this->_vptr_INextBotEventResponder + 98))(this);
  y = vRawPos->y;
  v9 = vRawPos->z - v8;
  x = vRawPos->x;
  this->m_bRecomputePostureOnCollision = 1;
  v11 = ((y - *(&v6 + 1)) * a3) + this->m_vAccumApproachVectors.y;
  v12 = (v9 * a3) + this->m_vAccumApproachVectors.z;
  this->m_flAccumApproachWeights = a3 + this->m_flAccumApproachWeights;
  v13 = ((x - *&v6) * a3) + this->m_vAccumApproachVectors.x;
  this->m_vAccumApproachVectors.y = v11;
  this->m_vAccumApproachVectors.z = v12;
  this->m_vAccumApproachVectors.x = v13;
}


// NextBotGroundLocomotion::ApplyAccumulatedApproach  (line 380, @0x0000000002f176e0, libserver.so)  // inlines: CrossProduct, DotProduct, Min<float>, NormalizeInPlace, VectorDivide, VectorMultiply, VectorSubtract, operator*, operator+=, operator-, operator/, operator=
// calls: VectorNormalize, NextBotGroundLocomotion::DidJustJump
// callers: NextBotGroundLocomotion::Update
// local variable allocation has failed, the output may be wrong!
void __fastcall NextBotGroundLocomotion::ApplyAccumulatedApproach(NextBotGroundLocomotion *const this)
{
  double v2; // xmm0_8
  float m_flAccumApproachWeights; // xmm1_4
  int (**vptr_INextBotEventResponder)(...); // rax
  unsigned int v5; // xmm2_4
  unsigned int v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  __int64 v9; // rax
  float *v10; // rax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm1_4
  int (**v13)(...); // rax
  unsigned __int64 v14; // xmm0_8
  float x; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  vec_t v23; // xmm2_4
  vec_t v24; // xmm1_4
  vec_t v25; // xmm0_4
  float maxMovea; // [rsp+0h] [rbp-50h]
  float maxMove; // [rsp+0h] [rbp-50h]
  double v28; // [rsp+4h] [rbp-4Ch]
  float flGovernor; // [rsp+8h] [rbp-48h]
  float m_curInterval; // [rsp+Ch] [rbp-44h]
  unsigned __int64 vGroundNormal_8; // [rsp+30h] [rbp-20h] OVERLAPPED BYREF
  float v32; // [rsp+38h] [rbp-18h]

  v2 = (*(this->_vptr_INextBotEventResponder + 98))(this);
  m_curInterval = this->m_curInterval;
  v28 = v2;
  if ( m_curInterval > 0.0 )
  {
    m_flAccumApproachWeights = this->m_flAccumApproachWeights;
    if ( m_flAccumApproachWeights > 0.0 )
    {
      vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
      *&v5 = this->m_vAccumApproachVectors.y * (1.0 / m_flAccumApproachWeights);
      *&v6 = (1.0 / m_flAccumApproachWeights) * this->m_vAccumApproachVectors.x;
      v32 = this->m_vAccumApproachVectors.z * (1.0 / m_flAccumApproachWeights);
      vGroundNormal_8 = __PAIR64__(v5, v6);
      maxMovea = m_curInterval * (vptr_INextBotEventResponder[102])(this);
      v7 = VectorNormalize(&vGroundNormal_8);
      this->m_flAccumApproachWeights = 0.0;
      v8 = fminf(maxMovea, v7);
      *&v28 = (*&vGroundNormal_8 * v8) + *&v28;
      *(&v28 + 1) = (v8 * *(&vGroundNormal_8 + 1)) + *(&v28 + 1);
      this->m_vAccumApproachVectors = vec3_origin;
    }
    (*(this->_vptr_INextBotEventResponder + 98))(this);
    v9 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
    if ( (*(*v9 + 704LL))(v9) != 0 )
    {
      v10 = (*(this->m_pNextBot->_vptr_INextBotEventResponder + 73))(&this->m_pNextBot->INextBot);
      v11 = *(&v28 + 1) - v10[1];
      v12 = *&v28 - *v10;
      this->m_vMoveVector.z = 0.0;
      this->m_vMoveVector.y = v11;
      this->m_vMoveVector.x = v12;
      if ( VectorNormalize(&this->m_vMoveVector) >= 0.001 )
      {
        if ( !NextBotGroundLocomotion::DidJustJump(this)
          && (*(this->_vptr_INextBotEventResponder + 83))(this) != 0
          && (*(this->_vptr_INextBotEventResponder + 83))(this) != 0 )
        {
          v13 = this->_vptr_INextBotEventResponder;
          this->m_bIsClimbingUpToLedge = 0;
          *&v14 = (v13[85])(this);
          x = this->m_vMoveVector.x;
          vGroundNormal_8 = v14;
          *&v14 = this->m_vMoveVector.y;
          v32 = v16;
          *&v14 = -*&v14;
          v17 = *&vGroundNormal_8;
          v18 = x * v16;
          v19 = v16 * *&v14;
          *&v14 = *&v14 * *(&vGroundNormal_8 + 1);
          this->m_vMoveVector.x = v18 - (0.0 * *(&vGroundNormal_8 + 1));
          this->m_vMoveVector.y = (0.0 * v17) - v19;
          this->m_vMoveVector.z = *&v14 - (v17 * x);
          VectorNormalize(&this->m_vMoveVector);
          flGovernor = ((this->m_vVelocity.x * this->m_vMoveVector.x) + (this->m_vVelocity.y * this->m_vMoveVector.y))
                     + (this->m_vVelocity.z * this->m_vMoveVector.z);
          v20 = fminf(this->m_flDesiredSpeed, (*(this->_vptr_INextBotEventResponder + 82))(this));
          if ( v20 > flGovernor )
          {
            if ( flGovernor <= 0.0 )
              v21 = 1.0;
            else
              v21 = 1.0 - ((((flGovernor / v20) * (flGovernor / v20)) * (flGovernor / v20)) * (flGovernor / v20));
            maxMove = v20;
            v22 = (*(this->_vptr_INextBotEventResponder + 115))(this) * v21;
            if ( m_curInterval > 0.0 && ((m_curInterval * v22) + flGovernor) > maxMove )
              v22 = (maxMove - flGovernor) / m_curInterval;
            v23 = (this->m_vMoveVector.y * v22) + this->m_vAcceleration.y;
            v24 = (this->m_vMoveVector.z * v22) + this->m_vAcceleration.z;
            v25 = (v22 * this->m_vMoveVector.x) + this->m_vAcceleration.x;
            this->m_vAcceleration.y = v23;
            this->m_vAcceleration.z = v24;
            this->m_vAcceleration.x = v25;
          }
        }
      }
      else
      {
        this->m_flForwardLean = 0.0;
        this->m_flSideLean = 0.0;
      }
    }
  }
}


// NextBotGroundLocomotion::DriveTo  (line 497, @0x0000000002f1d920, libserver.so)
// calls: CLocomotionBase::DriveTo
void __fastcall NextBotGroundLocomotion::DriveTo(NextBotGroundLocomotion *const this, const Vector *const vPos)
{
  CLocomotionBase::DriveTo(this, vPos);
  this->m_bRecomputePostureOnCollision = 1;
  (*(this->_vptr_INextBotEventResponder + 121))(this, vPos);
}


// GroundLocomotionCollisionTraceFilter::~GroundLocomotionCollisionTraceFilter  (line 509, @0x0000000002f1e230, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall GroundLocomotionCollisionTraceFilter::~GroundLocomotionCollisionTraceFilter(
        GroundLocomotionCollisionTraceFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// GroundLocomotionCollisionTraceFilter::~GroundLocomotionCollisionTraceFilter  (line 509, @0x0000000002f1f3e0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~GroundLocomotionCollisionTraceFilter
// calls: operator delete
void __fastcall GroundLocomotionCollisionTraceFilter::~GroundLocomotionCollisionTraceFilter(
        GroundLocomotionCollisionTraceFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// GroundLocomotionCollisionTraceFilter::ShouldHitEntity  (line 517, @0x0000000002f1f950, libserver.so)
// calls: CTraceFilterSimple::ShouldHitEntity
bool __fastcall GroundLocomotionCollisionTraceFilter::ShouldHitEntity(
        GroundLocomotionCollisionTraceFilter *const this,
        CBaseEntity *pServerEntity)
{
  bool ShouldHitEntity; // bl

  ShouldHitEntity = CTraceFilterSimple::ShouldHitEntity(this, pServerEntity);
  if ( ShouldHitEntity
    && pServerEntity != 0
    && (*(this->m_me->_vptr_INextBotEventResponder + 76))(this->m_me, pServerEntity) != 0 )
  {
    return 0;
  }
  return ShouldHitEntity;
}


// NextBotGroundLocomotion::DetectCollision  (line 538, @0x0000000002f14360, libserver.so)  // inlines: DidHit, DidHitNonWorldEntity, EnableInteractsWith, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GroundLocomotionCollisionTraceFilter, IndexToIdentity, Init, IsElapsed, IsValid, LengthSqr, LookupEntity, Ray_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator CEntityInstance*, operator*=
// calls: CountdownTimer::Now, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, __dynamic_cast, CTakeDamageInfo::CTakeDamageInfo, CalculateExplosiveDamageForce, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
bool __fastcall NextBotGroundLocomotion::DetectCollision(
        NextBotGroundLocomotion *const this,
        trace_t *pTrace,
        int *const nRecursionLimit,
        const Vector *const vFrom,
        const Vector *const vTo,
        const Vector *const vMins,
        const Vector *const vMaxs)
{
  float v11; // xmm0_4
  const CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  __int64 v16; // rax
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm12_4
  vec_t v23; // xmm2_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  float v26; // xmm9_4
  float v27; // xmm8_4
  float v28; // xmm7_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  bool result; // al
  CBaseEntity *m_pEnt; // rax
  CBaseEntity *v34; // r13
  void *v35; // rax
  void *v36; // r14
  char v37; // al
  void (__fastcall *v38)(CBaseEntity *, __int64); // r13
  __int64 v39; // rax
  CBaseEntity *v40; // rax
  vec_t v41; // xmm1_4
  INextBot *pAttacker; // [rsp+10h] [rbp-140h]
  CBaseEntity *pAttackera; // [rsp+10h] [rbp-140h]
  CBaseEntity *other; // [rsp+18h] [rbp-138h]
  IBody *pBody; // [rsp+20h] [rbp-130h]
  bool vTob; // [rsp+28h] [rbp-128h]
  char vToc; // [rsp+28h] [rbp-128h]
  Vector vecDir; // [rsp+30h] [rbp-120h] BYREF
  GroundLocomotionCollisionTraceFilter filter; // [rsp+40h] [rbp-110h] BYREF
  CTakeDamageInfo damageInfo; // [rsp+90h] [rbp-C0h] BYREF

  pBody = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  v11 = CountdownTimer::Now(&this->m_ignorePhysicsPropTimer);
  m_pInstance = 0;
  if ( v11 < this->m_ignorePhysicsPropTimer.m_timestamp.m_Value )
  {
    m_Index = this->m_hIgnorePhysicsProp.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hIgnorePhysicsProp.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_hIgnorePhysicsProp.m_Index & 0x1FF];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
          m_pInstance = v15->m_pInstance;
      }
    }
  }
  pAttacker = this->m_bot;
  CTraceFilterSimple::CTraceFilterSimple(&filter, m_pInstance, 4, 0);
  filter._vptr_CTraceFilter = off_47B28F0;
  filter.m_me = pAttacker;
  v16 = (*(pBody->_vptr_INextBotEventResponder + 99))(pBody);
  x = vFrom->x;
  damageInfo.m_vecDamageForce.y = 0.0;
  y = vFrom->y;
  damageInfo.m_vecDamagePosition.z = 0.0;
  z = vFrom->z;
  damageInfo.m_vecDamageDirection.x = 0.0;
  v20 = vTo->x;
  damageInfo.m_hAttacker.m_Index = 0;
  v21 = vTo->y;
  damageInfo.m_hWeapon.m_Index = 0;
  v22 = vMaxs->x;
  v23 = vTo->z - z;
  v24 = vMaxs->y;
  damageInfo.m_vecDamageForce.z = v20 - x;
  v25 = vMins->x;
  damageInfo.m_vecDamagePosition.x = v21 - y;
  v26 = vMins->y;
  damageInfo.m_vecDamagePosition.y = v23;
  v27 = vMaxs->z;
  v28 = vMins->z;
  damageInfo.m_vecDamageDirection.z = (v24 - v26) * 0.5;
  *&damageInfo.m_hInflictor.m_Index = (v27 - v28) * 0.5;
  damageInfo.m_vecDamageDirection.y = (v22 - v25) * 0.5;
  BYTE1(damageInfo.m_flDamage) = (((damageInfo.m_vecDamageForce.z * damageInfo.m_vecDamageForce.z)
                                 + (damageInfo.m_vecDamagePosition.x * damageInfo.m_vecDamagePosition.x))
                                + (v23 * v23)) != 0.0;
  v29 = (v22 + v25) * 0.5;
  LOBYTE(damageInfo.m_flDamage) = (((damageInfo.m_vecDamageDirection.y * damageInfo.m_vecDamageDirection.y)
                                  + (damageInfo.m_vecDamageDirection.z * damageInfo.m_vecDamageDirection.z))
                                 + (*&damageInfo.m_hInflictor.m_Index * *&damageInfo.m_hInflictor.m_Index)) < 0.000001;
  v30 = (v24 + v26) * 0.5;
  v31 = (v27 + v28) * 0.5;
  *&damageInfo._vptr_CTakeDamageInfo = x + v29;
  damageInfo.m_vecReportedPosition.x = -v29;
  *(&damageInfo._vptr_CTakeDamageInfo + 1) = y + v30;
  damageInfo.m_vecDamageForce.x = z + v31;
  damageInfo.m_vecReportedPosition.y = -v30;
  damageInfo.m_vecReportedPosition.z = -v31;
  filter.m_attr.m_nInteractsWith |= v16;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &damageInfo, &filter, pTrace);
  if ( pTrace->fraction < 1.0 || (result = pTrace->startsolid) )
  {
    if ( pTrace->m_ShapeAttributes.m_nEntityId != 0x8000 )
    {
      m_pEnt = pTrace->m_pEnt;
      other = m_pEnt;
      if ( m_pEnt == 0 )
        goto LABEL_13;
      if ( (*(m_pEnt->_vptr_IHandleEntity + 147))(pTrace->m_pEnt) == 0 )
      {
        result = (*(this->_vptr_INextBotEventResponder + 110))(this, other, 0);
        if ( result )
        {
          if ( *nRecursionLimit > 0 )
          {
            --*nRecursionLimit;
            pAttackera = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
            v40 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
            CTakeDamageInfo::CTakeDamageInfo(&damageInfo, v40, pAttackera, 100.0, 1, 0);
            *&vecDir.x = (*(this->_vptr_INextBotEventResponder + 106))(this);
            vecDir.z = v41;
            CalculateExplosiveDamageForce(&damageInfo, &vecDir, &pTrace->endpos, 1.0);
            CBaseEntity::TakeDamage(other, &damageInfo);
            vToc = (*(this->_vptr_INextBotEventResponder + 124))(
                     this,
                     pTrace,
                     nRecursionLimit,
                     vFrom,
                     vTo,
                     vMins,
                     vMaxs);
            CTakeDamageInfo::~CTakeDamageInfo(&damageInfo);
            return vToc;
          }
          return result;
        }
      }
    }
    other = pTrace->m_pEnt;
LABEL_13:
    if ( (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 80))(this->m_bot, other) != 0 )
      (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 7))(
        this->m_bot,
        pTrace->m_pEnt,
        pTrace);
    v34 = pTrace->m_pEnt;
    if ( v34 != 0 )
    {
      v35 = __dynamic_cast(pTrace->m_pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'INextBot, -2);
      v36 = v35;
      if ( v35 != 0 )
      {
        v37 = (*(*v35 + 640LL))(v35, this->m_pNextBot);
        if ( v37 != 0 )
        {
          vTob = v37;
          (*(*v36 + 56LL))(v36, this->m_pNextBot, 0);
          return vTob;
        }
        v34 = pTrace->m_pEnt;
      }
    }
    v38 = *(v34->_vptr_IHandleEntity + 112);
    v39 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
    v38(pTrace->m_pEnt, v39);
    return 1;
  }
  return result;
}


// NextBotGroundLocomotion::ResolveCollision  (line 599, @0x0000000002f14f30, libserver.so)  // inlines: CGameTrace, DistToSqr, DotProduct, EnableInteractsWith, GetEHandle, GetEntryIndex, GetSerialNumber, Init, IsDebugFilterMatch, IsDebugging, LengthSqr, NetworkStateChanged, NextBotTraversableTraceFilter, NormalizeInPlace, Ray_t, RnCollisionAttr_t, Set, Start, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator bool, operator*, operator*=, operator+, operator-, operator=, operator=<float>
// calls: CGameTrace::Init, NDebugOverlay::Line, __dynamic_cast, CBaseEntity::VPhysicsGetObject, CountdownTimer::Now, VectorNormalize, NextBotManager::IsDebugFilterMatch, CTraceFilterSimple::CTraceFilterSimple, UTIL_TraceHull, CGamePhysicsQueryInterface::TraceRay
Vector __fastcall NextBotGroundLocomotion::ResolveCollision(
        NextBotGroundLocomotion *const this,
        const Vector *const vFrom,
        const Vector *const vTo,
        int nRecursionLimit)
{
  __int64 v7; // r13
  float *v8; // rax
  vec_t v9; // xmm2_4
  vec_t v10; // xmm1_4
  __int64 v11; // rax
  char v12; // r14
  char i; // al
  __m128i v14; // xmm0
  __m128i v15; // xmm6
  float v16; // r14d
  char v17; // al
  double v18; // xmm0_8
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm7_4
  INextBot *v23; // r14
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  char v28; // al
  float v29; // xmm2_4
  float v30; // xmm3_4
  vec_t x; // xmm8_4
  vec_t y; // xmm7_4
  vec_t z; // xmm6_4
  float v34; // xmm1_4
  bool startsolid; // al
  CBaseEntity *m_pEnt; // rbx
  IPhysicsObject *Object; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v39; // eax
  __int16 v40; // cx
  float v41; // xmm0_4
  float v44; // xmm0_4
  bool IsDebugFilterMatch; // al
  char v46; // al
  double v47; // xmm0_8
  double v48; // xmm1_8
  double v49; // xmm2_8
  double v50; // xmm3_8
  double v51; // xmm4_8
  double v52; // xmm5_8
  INextBot *m_bot; // r14
  const CBaseEntity *v54; // rax
  uint64 v55; // rax
  INextBot *v56; // r14
  const CBaseEntity *v57; // rax
  __int64 v58; // rax
  float v59; // xmm7_4
  float v60; // xmm6_4
  float v61; // xmm5_4
  float v62; // xmm0_4
  float v63; // xmm3_4
  float v64; // xmm2_4
  float v65; // [rsp+10h] [rbp-2D0h]
  IBody::PostureType nPosture; // [rsp+14h] [rbp-2CCh]
  float pTrace; // [rsp+38h] [rbp-2A8h]
  float pTracea; // [rsp+38h] [rbp-2A8h]
  float pTraceFilter; // [rsp+40h] [rbp-2A0h]
  float pTraceFiltera; // [rsp+40h] [rbp-2A0h]
  float pTraceFilterb; // [rsp+40h] [rbp-2A0h]
  float pTraceFilterc; // [rsp+40h] [rbp-2A0h]
  float vFullMove; // [rsp+48h] [rbp-298h]
  float vFullMove_4; // [rsp+4Ch] [rbp-294h]
  float vFullMove_4a; // [rsp+4Ch] [rbp-294h]
  float vFullMove_8; // [rsp+50h] [rbp-290h]
  float vFullMove_8a; // [rsp+50h] [rbp-290h]
  float vFullMove_8c; // [rsp+50h] [rbp-290h]
  float vFullMove_8b; // [rsp+50h] [rbp-290h]
  float vFullMove_8d; // [rsp+50h] [rbp-290h]
  float vLeftToMoveb; // [rsp+58h] [rbp-288h]
  float vLeftToMove; // [rsp+58h] [rbp-288h]
  float vLeftToMovea; // [rsp+58h] [rbp-288h]
  float vLeftToMoved; // [rsp+58h] [rbp-288h]
  vec_t vLeftToMovee; // [rsp+58h] [rbp-288h]
  float vLeftToMovef; // [rsp+58h] [rbp-288h]
  float vLeftToMovec; // [rsp+58h] [rbp-288h]
  int nRecursionLimita; // [rsp+7Ch] [rbp-264h] BYREF
  Vector vMins; // [rsp+80h] [rbp-260h] BYREF
  Vector vMaxs; // [rsp+90h] [rbp-250h] BYREF
  Vector vDesiredGoal; // [rsp+A0h] [rbp-240h] BYREF
  NextBotTraversableTraceFilter crouchFilter; // [rsp+B0h] [rbp-230h] BYREF
  NextBotTraversableTraceFilter standFilter; // [rsp+100h] [rbp-1E0h] BYREF
  trace_t trace; // [rsp+150h] [rbp-190h] BYREF
  trace_t crouchTrace; // [rsp+200h] [rbp-E0h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  nRecursionLimita = nRecursionLimit;
  v7 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  if ( v7 == 0 || nRecursionLimita < 0 )
  {
    crouchTrace.startpos = *vTo;
    goto LABEL_53;
  }
  if ( this->m_bRecomputePostureOnCollision && (*(*v7 + 696LL))(v7, 0) == 0 && (*(*v7 + 696LL))(v7, 1) == 0 )
    this->m_bRecomputePostureOnCollision = 0;
  if ( this->m_bIsUsingFullFeetTrace
    || this->m_hLadder.m_pData != 0
    && this->m_hLadder.m_pAssociatedNavMesh == TheNavMesh
    && !this->m_bIsGoingUpLadder
    && (*(*v7 + 648LL))(v7, 2) != 0 )
  {
    vMins = *(*(*v7 + 776LL))(v7);
  }
  else
  {
    vLeftToMoveb = (*(this->_vptr_INextBotEventResponder + 99))(this);
    v8 = (*(*v7 + 776LL))(v7);
    v9 = v8[1] + 0.0;
    v10 = *v8 + 0.0;
    vMins.z = vLeftToMoveb + v8[2];
    vMins.y = v9;
    vMins.x = v10;
  }
  v11 = *v7;
  if ( this->m_bRecomputePostureOnCollision )
  {
    v12 = 1;
    vLeftToMovee = 0.5 * (*(v11 + 744))(v7);
    vMaxs.z = (*(*v7 + 760LL))(v7);
    vMaxs.x = vLeftToMovee;
    vMaxs.y = vLeftToMovee;
  }
  else
  {
    v12 = 0;
    vMaxs = *(*(v11 + 784))(v7);
    if ( vMins.z >= vMaxs.z )
    {
      v12 = 0;
      vMins.z = vMaxs.z - 2.0;
    }
  }
  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  nPosture = IBody::PostureType::STAND;
  vDesiredGoal = *vTo;
  for ( i = (*(this->_vptr_INextBotEventResponder + 124))(
              this,
              &trace,
              &nRecursionLimita,
              vFrom,
              &vDesiredGoal,
              &vMins,
              &vMaxs);
        ;
        i = (*(this->_vptr_INextBotEventResponder + 124))(
              this,
              &trace,
              &nRecursionLimita,
              vFrom,
              &vDesiredGoal,
              &vMins,
              &vMaxs) )
  {
    if ( i == 0 )
    {
      startsolid = trace.startsolid;
      x = vDesiredGoal.x;
      y = vDesiredGoal.y;
      z = vDesiredGoal.z;
      goto LABEL_70;
    }
    startsolid = trace.startsolid;
    if ( !trace.startsolid )
    {
      x = trace.endpos.x;
      y = trace.endpos.y;
      z = trace.endpos.z;
      if ( ((((vDesiredGoal.x - trace.endpos.x) * (vDesiredGoal.x - trace.endpos.x))
           + ((vDesiredGoal.y - trace.endpos.y) * (vDesiredGoal.y - trace.endpos.y)))
          + ((vDesiredGoal.z - trace.endpos.z) * (vDesiredGoal.z - trace.endpos.z))) < 1.0 )
        goto LABEL_61;
    }
    if ( v12 == 0 )
    {
      if ( trace.startsolid )
        break;
      goto LABEL_16;
    }
    nPosture = (*(*v7 + 664LL))(v7);
    if ( (*(trace.m_pEnt->_vptr_IHandleEntity + 153))(trace.m_pEnt) != 0
      || (*(trace.m_pEnt->_vptr_IHandleEntity + 140))(trace.m_pEnt) != 0 )
    {
      if ( nPosture != IBody::PostureType::CROUCH )
        goto LABEL_33;
      memset(&crouchTrace.m_ShapeAttributes, 0, 31);
      crouchTrace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&crouchTrace);
      m_bot = this->m_bot;
      v54 = (*(m_bot->_vptr_INextBotEventResponder + 66))(m_bot);
      CTraceFilterSimple::CTraceFilterSimple(&standFilter, v54, 4, 0);
      standFilter._vptr_CTraceFilter = off_47B2490;
      standFilter.m_bot = m_bot;
      standFilter.m_when = CLocomotionBase::TraverseWhenType::IMMEDIATELY;
      v55 = (*(*v7 + 792LL))(v7);
      UTIL_TraceHull(vFrom, &vDesiredGoal, &vMins, &vMaxs, v55, &standFilter, &crouchTrace);
      if ( crouchTrace.fraction < 1.0 )
        goto LABEL_80;
      nPosture = crouchTrace.startsolid;
    }
    else
    {
      if ( nPosture == IBody::PostureType::CROUCH )
        goto LABEL_80;
      memset(&crouchTrace.m_ShapeAttributes, 0, 31);
      crouchTrace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&crouchTrace);
      v56 = this->m_bot;
      v57 = (*(v56->_vptr_INextBotEventResponder + 66))(v56);
      CTraceFilterSimple::CTraceFilterSimple(&crouchFilter, v57, 4, 0);
      crouchFilter._vptr_CTraceFilter = off_47B2490;
      crouchFilter.m_bot = v56;
      crouchFilter.m_when = CLocomotionBase::TraverseWhenType::IMMEDIATELY;
      vFullMove_4a = (*(*v7 + 768LL))(v7);
      vFullMove_8d = vMaxs.y;
      vLeftToMovef = vMaxs.x;
      v58 = (*(*v7 + 792LL))(v7);
      v59 = vFrom->x;
      v60 = vFrom->y;
      HIDWORD(standFilter.m_attr.m_nInteractsWith) = 0;
      HIDWORD(standFilter.m_attr.m_nInteractsAs) = 0;
      *(&standFilter.m_attr.m_nObjectSetMask + 1) = 0;
      v61 = vFrom->z;
      HIDWORD(standFilter.m_pExtraShouldHitCheckFunction) = 0;
      LODWORD(standFilter.m_bot) = 0;
      *&standFilter.m_attr.m_nInteractsExclude = vDesiredGoal.x - v59;
      *(&standFilter.m_attr.m_nInteractsExclude + 1) = vDesiredGoal.y - v60;
      *&standFilter.m_attr.m_nInteractsAs = vDesiredGoal.z - v61;
      *(&standFilter.m_pPassEnt + 1) = (vFullMove_8d - vMins.y) * 0.5;
      *&standFilter.m_pExtraShouldHitCheckFunction = (vFullMove_4a - vMins.z) * 0.5;
      *&standFilter.m_pPassEnt = (vLeftToMovef - vMins.x) * 0.5;
      BYTE5(standFilter.m_bot) = (((*&standFilter.m_attr.m_nInteractsExclude * *&standFilter.m_attr.m_nInteractsExclude)
                                 + (*(&standFilter.m_attr.m_nInteractsExclude + 1)
                                  * *(&standFilter.m_attr.m_nInteractsExclude + 1)))
                                + (*&standFilter.m_attr.m_nInteractsAs * *&standFilter.m_attr.m_nInteractsAs)) != 0.0;
      v62 = (vFullMove_4a + vMins.z) * 0.5;
      *&standFilter.m_attr.m_nInteractsWith = v61 + v62;
      BYTE4(standFilter.m_bot) = (((*&standFilter.m_pPassEnt * *&standFilter.m_pPassEnt)
                                 + (*(&standFilter.m_pPassEnt + 1) * *(&standFilter.m_pPassEnt + 1)))
                                + (*&standFilter.m_pExtraShouldHitCheckFunction
                                 * *&standFilter.m_pExtraShouldHitCheckFunction)) < 0.000001;
      v63 = (vLeftToMovef + vMins.x) * 0.5;
      v64 = (vFullMove_8d + vMins.y) * 0.5;
      *&standFilter.m_attr.m_nEntityIdToIgnore = -v63;
      *&standFilter._vptr_CTraceFilter = v59 + v63;
      *(&standFilter._vptr_CTraceFilter + 1) = v60 + v64;
      *&standFilter.m_attr.m_nHierarchyId = -v64;
      *&standFilter.m_attr.m_nObjectSetMask = -v62;
      crouchFilter.m_attr.m_nInteractsWith |= v58;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &standFilter, &crouchFilter, &crouchTrace);
      if ( crouchTrace.fraction >= 1.0 && !crouchTrace.startsolid )
      {
LABEL_80:
        nPosture = IBody::PostureType::CROUCH;
        vMaxs.z = (*(*v7 + 768LL))(v7);
        goto LABEL_26;
      }
    }
    if ( nPosture == IBody::PostureType::CROUCH )
      goto LABEL_80;
LABEL_33:
    startsolid = trace.startsolid;
    if ( trace.startsolid )
      break;
LABEL_16:
    if ( --nRecursionLimita <= 0 )
    {
      x = trace.endpos.x;
      y = trace.endpos.y;
      z = trace.endpos.z;
      goto LABEL_61;
    }
    if ( trace.plane.normal.z < 0.0 )
    {
      trace.plane.normal.z = 0.0;
      VectorNormalize(&trace.plane.normal);
    }
    v14 = 0x3F800000u;
    *v14.m128i_i32 = 1.0 - trace.fraction;
    v15 = v14;
    vFullMove = vDesiredGoal.x - vFrom->x;
    pTraceFilter = vDesiredGoal.z - vFrom->z;
    *v15.m128i_i32 = (1.0 - trace.fraction) * (vDesiredGoal.y - vFrom->y);
    pTrace = vDesiredGoal.y - vFrom->y;
    vLeftToMove = (1.0 - trace.fraction) * vFullMove;
    vFullMove_8 = (1.0 - trace.fraction) * pTraceFilter;
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    v17 = (*(*v7 + 648LL))(v7, 2);
    v19 = pTraceFilter;
    v20 = pTrace;
    v21 = vFullMove;
    if ( v17 == 0 )
    {
      v65 = pTrace;
      pTracea = pTraceFilter;
      pTraceFilterb = trace.plane.normal.z;
      v44 = (*(this->_vptr_INextBotEventResponder + 108))(this, v18, v19, vFullMove);
      v19 = pTracea;
      v21 = vFullMove;
      v20 = v65;
      if ( v44 > pTraceFilterb && pTracea > 0.0 )
      {
        trace.plane.normal.z = 0.0;
        VectorNormalize(&trace.plane.normal);
        v19 = 0.0;
        v21 = vFullMove;
        v20 = v65;
      }
    }
    v22 = v16 * trace.plane.normal.y;
    v23 = this->m_bot;
    v24 = ((vLeftToMove * trace.plane.normal.x) + v22) + (vFullMove_8 * trace.plane.normal.z);
    v25 = v21 - (trace.plane.normal.x * v24);
    v26 = v20 - (trace.plane.normal.y * v24);
    v27 = v19 - (v24 * trace.plane.normal.z);
    if ( (g_NextBotManager.m_debugType & 0x10) != 0 )
    {
      if ( g_NextBotManager.m_debugFilterList.m_Size == 0
        || (pTraceFilterc = v27,
            vFullMove_8c = v26,
            vLeftToMoved = v25,
            IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot),
            v25 = vLeftToMoved,
            v26 = vFullMove_8c,
            v27 = pTraceFilterc,
            IsDebugFilterMatch) )
      {
        pTraceFiltera = v27;
        vFullMove_8a = v26;
        vLeftToMovea = v25;
        v28 = (*(v23->_vptr_INextBotEventResponder + 96))(v23, 16);
        v25 = vLeftToMovea;
        v26 = vFullMove_8a;
        v27 = pTraceFiltera;
        if ( v28 != 0 )
        {
          crouchTrace.startpos.y = (trace.plane.normal.y * 20.0) + trace.endpos.y;
          crouchTrace.startpos.z = (trace.plane.normal.z * 20.0) + trace.endpos.z;
          crouchTrace.startpos.x = (20.0 * trace.plane.normal.x) + trace.endpos.x;
          NDebugOverlay::Line(&trace.endpos, &crouchTrace.startpos, 255, 0, 150, 1, 15.0);
          v27 = pTraceFiltera;
          v26 = vFullMove_8a;
          v25 = vLeftToMovea;
        }
      }
    }
    v29 = v25 + vFrom->x;
    v30 = v26 + vFrom->y;
    x = trace.endpos.x;
    y = trace.endpos.y;
    z = trace.endpos.z;
    v34 = v27 + vFrom->z;
    if ( ((((v29 - trace.endpos.x) * (v29 - trace.endpos.x)) + ((v30 - trace.endpos.y) * (v30 - trace.endpos.y)))
        + ((v34 - trace.endpos.z) * (v34 - trace.endpos.z))) < 1.0 )
    {
      startsolid = trace.startsolid;
      goto LABEL_70;
    }
    vDesiredGoal.x = v29;
    vDesiredGoal.y = v30;
    vDesiredGoal.z = v34;
LABEL_26:
    v12 = 0;
  }
  if ( trace.m_pEnt != 0 )
  {
    if ( (*(trace.m_pEnt->_vptr_IHandleEntity + 143))(trace.m_pEnt) == 0 )
    {
      m_pEnt = trace.m_pEnt;
      if ( trace.m_pEnt != 0
        && __dynamic_cast(trace.m_pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CPhysicsProp, 0) != 0
        && __dynamic_cast(m_pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePropDoor, 0) == 0 )
      {
        Object = CBaseEntity::VPhysicsGetObject(m_pEnt);
        if ( Object != 0 && (*(*Object + 1512LL))(Object) != 0 )
        {
          if ( trace.m_pEnt != 0 && (m_pEntity = trace.m_pEnt->m_pEntity) != 0 )
          {
            v39 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v40 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v40 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hIgnorePhysicsProp.m_Index) = v40 | this->m_hIgnorePhysicsProp.m_Index & 0x8000;
            this->m_hIgnorePhysicsProp.m_Index = (v39 << 15) | this->m_hIgnorePhysicsProp.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hIgnorePhysicsProp.m_Index = -1;
          }
          v41 = CountdownTimer::Now(&this->m_ignorePhysicsPropTimer) + 1.0;
          if ( v41 != this->m_ignorePhysicsPropTimer.m_timestamp.m_Value )
          {
            vLeftToMovec = v41;
            (*(this->m_ignorePhysicsPropTimer._vptr_CountdownTimer + 2))(
              &this->m_ignorePhysicsPropTimer,
              12,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL);
            this->m_ignorePhysicsPropTimer.m_timestamp.m_Value = vLeftToMovec;
          }
          if ( this->m_ignorePhysicsPropTimer.m_duration.m_Value != 1.0 )
          {
            (*(this->m_ignorePhysicsPropTimer._vptr_CountdownTimer + 2))(
              &this->m_ignorePhysicsPropTimer,
              8,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL);
            this->m_ignorePhysicsPropTimer.m_duration.m_Value = 1.0;
          }
        }
      }
    }
    startsolid = trace.startsolid;
  }
  x = this->m_vLastValidPos.x;
  y = this->m_vLastValidPos.y;
  z = this->m_vLastValidPos.z;
LABEL_70:
  if ( !startsolid )
  {
LABEL_61:
    this->m_vLastValidPos.x = x;
    this->m_vLastValidPos.y = y;
    this->m_vLastValidPos.z = z;
  }
  if ( this->m_bRecomputePostureOnCollision )
  {
    this->m_bRecomputePostureOnCollision = 0;
    vFullMove_4 = z;
    vFullMove_8b = y;
    v46 = (*(*v7 + 696LL))(v7, nPosture);
    y = vFullMove_8b;
    z = vFullMove_4;
    if ( v46 == 0 )
    {
      (*(*v7 + 656LL))(v7, nPosture, v47, v48, v49, v50, v51, v52, vFullMove_4, vFullMove_8b);
      z = vFullMove_4;
      y = vFullMove_8b;
    }
  }
  crouchTrace.startpos.x = x;
  crouchTrace.startpos.y = y;
  crouchTrace.startpos.z = z;
LABEL_53:
  *&result.x = *&crouchTrace.startpos.x;
  result.z = crouchTrace.startpos.z;
  return result;
}


// NextBotGroundLocomotion::UpdatePosition  (line 826, @0x0000000002f12920, libserver.so)  // inlines: DistToSqr, GetBool, GetInt, LengthSqr, operator=
void __fastcall NextBotGroundLocomotion::UpdatePosition(
        NextBotGroundLocomotion *const this,
        const Vector *const vNewPos)
{
  NextBotCombatCharacter *m_pNextBot; // rax
  float v4; // xmm1_4
  float v5; // xmm0_4
  vec_t v6; // xmm1_4
  Vector vCurPos; // [rsp+8h] [rbp-58h] BYREF
  Vector vAdjustedNewPos; // [rsp+18h] [rbp-48h] BYREF
  Vector vSafePos; // [rsp+28h] [rbp-38h] BYREF
  Vector v11; // [rsp+38h] [rbp-28h]

  if ( NextBotStop.m_pParent->m_Value.m_nValue == 0 && NextBotFreeze.m_pParent->m_Value.m_nValue == 0 )
  {
    m_pNextBot = this->m_pNextBot;
    if ( (m_pNextBot->m_fFlags.m_Value & 0x20) == 0 )
    {
      vCurPos = *(*(m_pNextBot->_vptr_INextBotEventResponder + 73))(&m_pNextBot->INextBot);
      *&vAdjustedNewPos.x = (*(this->_vptr_INextBotEventResponder + 125))(this, vNewPos);
      vAdjustedNewPos.z = v4;
      v5 = (((vAdjustedNewPos.x - vCurPos.x) * (vAdjustedNewPos.x - vCurPos.x))
          + ((vAdjustedNewPos.y - vCurPos.y) * (vAdjustedNewPos.y - vCurPos.y)))
         + ((v4 - vCurPos.z) * (v4 - vCurPos.z));
      if ( v5 > 0.0 )
      {
        vSafePos = vAdjustedNewPos;
        if ( v5 > 1.0 )
        {
          *&v11.x = (*(this->_vptr_INextBotEventResponder + 123))(this, &vCurPos, &vAdjustedNewPos, 3);
          v11.z = v6;
          vSafePos = v11;
        }
        (*(this->m_pNextBot->_vptr_INextBotEventResponder + 72))(&this->m_pNextBot->INextBot, &vSafePos);
      }
    }
  }
}


// NextBotGroundLocomotion::UpdateGroundConstraint  (line 859, @0x0000000002f17ae0, libserver.so)  // inlines: CGameTrace, DotProduct, EnableInteractsWith, GetEHandle, GetEntryIndex, GetSerialNumber, Init, IsDebugFilterMatch, IsDebugging, LengthSqr, NextBotTraceFilterIgnoreActors, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-=, operator=
// calls: NextBotGroundLocomotion::DidJustJump, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetGroundEntity, CGlobalVarsBase::curtime, DevMsg(char const*,...), INextBot::IsDebugging, CBaseEntity::SetGroundEntity, NextBotManager::IsDebugFilterMatch, NDebugOverlay::Line
// strings: "%3.2f: Inside ground, ( %.0f, %.0f, %.0f )\n", "%3.2f: NextBotGroundLocomotion - Too steep to stand here\n"
// globals: IgnoreActorsTraceFilterFunction(CBaseEntity *,ulong long)
void __fastcall NextBotGroundLocomotion::UpdateGroundConstraint(NextBotGroundLocomotion *const this)
{
  __int64 v2; // r12
  double v3; // xmm0_8
  __int64 v4; // r12
  float *v5; // rax
  float *v6; // rax
  float v7; // xmm9_4
  float v8; // xmm8_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  double v11; // xmm0_8
  double v12; // xmm1_8
  double v13; // xmm2_8
  INextBot *v14; // r12
  void (__fastcall *v15)(INextBot *, CBaseEntity *); // r13
  CBaseEntity *v16; // rax
  int (**v17)(...); // rax
  INextBot *m_bot; // r12
  float v19; // xmm0_4
  vec_t x; // xmm0_4
  float v21; // xmm4_4
  vec_t y; // xmm0_4
  float v23; // xmm3_4
  vec_t z; // xmm0_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  float v27; // xmm1_4
  float v28; // xmm5_4
  int (**vptr_INextBotEventResponder)(...); // rax
  float v30; // xmm0_4
  double v31; // xmm0_8
  double v32; // xmm1_8
  double v33; // xmm2_8
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm4_4
  float v37; // xmm1_4
  INextBot *v38; // rdi
  float v39; // xmm0_4
  float v40; // xmm5_4
  vec_t v41; // xmm1_4
  bool IsDebugging; // al
  __m128 v43; // xmm2
  __m128 z_low; // xmm1
  char v45; // al
  CBaseEntity *m_pEnt; // rsi
  char v47; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v49; // eax
  __int16 v50; // cx
  float v51; // xmm0_4
  __m128i x_low; // xmm7
  float v53; // r13d
  __m128i y_low; // xmm7
  float v55; // r14d
  int (**v56)(...); // rax
  float v57; // xmm1_4
  vec_t v58; // xmm1_4
  CBaseEntity *GroundEntity; // rax
  float flHalfWidth; // [rsp+8h] [rbp-1A8h]
  float flHullHeight; // [rsp+Ch] [rbp-1A4h]
  float v62; // [rsp+10h] [rbp-1A0h]
  float v63; // [rsp+18h] [rbp-198h]
  double v64; // [rsp+18h] [rbp-198h]
  float v65; // [rsp+20h] [rbp-190h]
  double v66; // [rsp+20h] [rbp-190h]
  unsigned int v67; // [rsp+20h] [rbp-190h]
  float v68; // [rsp+28h] [rbp-188h]
  float v69; // [rsp+28h] [rbp-188h]
  double v70; // [rsp+28h] [rbp-188h]
  float v71; // [rsp+28h] [rbp-188h]
  unsigned int v72; // [rsp+28h] [rbp-188h]
  float v73; // [rsp+28h] [rbp-188h]
  Vector origin; // [rsp+30h] [rbp-180h] BYREF
  double v75; // [rsp+40h] [rbp-170h]
  float v76; // [rsp+48h] [rbp-168h]
  NextBotTraceFilterIgnoreActors filter; // [rsp+50h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+90h] [rbp-120h] BYREF
  trace_t ground; // [rsp+E0h] [rbp-D0h] BYREF

  if ( NextBotGroundLocomotion::DidJustJump(this) || (*(this->_vptr_INextBotEventResponder + 91))(this) != 0 )
  {
    this->m_bIsUsingFullFeetTrace = 0;
    return;
  }
  v2 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  if ( v2 != 0 )
  {
    v3 = (*(*v2 + 744LL))(v2);
    flHalfWidth = *&v3 * 0.5;
    flHullHeight = (*(this->_vptr_INextBotEventResponder + 99))(this);
    v68 = (*(this->_vptr_INextBotEventResponder + 99))(this);
    memset(&ground.m_ShapeAttributes, 0, 31);
    ground.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&ground);
    CTraceFilterSimple::CTraceFilterSimple(&filter, this->m_pNextBot, 4, IgnoreActorsTraceFilterFunction);
    filter._vptr_CTraceFilter = off_47B2450;
    v4 = (*(*v2 + 792LL))(v2);
    v5 = (*(this->m_pNextBot->_vptr_INextBotEventResponder + 73))(&this->m_pNextBot->INextBot);
    v62 = *v5 + 0.0;
    v63 = v5[1] + 0.0;
    v65 = v5[2] - (v68 + 0.0099999998);
    v69 = (*(this->_vptr_INextBotEventResponder + 99))(this);
    v6 = (*(this->m_pNextBot->_vptr_INextBotEventResponder + 73))(&this->m_pNextBot->INextBot);
    v7 = *v6 + 0.0;
    v8 = v6[1] + 0.0;
    v9 = (v69 + 0.001) + v6[2];
    ray.m_Delta.x = v62 - v7;
    ray.m_Start.w = 0.0;
    ray.m_Delta.y = v63 - v8;
    ray.m_Delta.w = 0.0;
    ray.m_StartOffset.w = 0.0;
    ray.m_Extents.w = 0.0;
    ray.m_Delta.z = v65 - v9;
    ray.m_flRadius = 0.0;
    ray.m_Extents.z = flHullHeight * 0.5;
    v10 = (flHalfWidth - flHalfWidth) * 0.5;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_Extents.x = (flHalfWidth + flHalfWidth) * 0.5;
    ray.m_Extents.y = ray.m_Extents.x;
    ray.m_Start.x = v7 + v10;
    ray.m_Start.y = v8 + v10;
    ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.x * ray.m_Extents.x))
                 + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    ray.m_Start.z = v9 + ((flHullHeight + 0.0) * 0.5);
    ray.m_StartOffset.x = -v10;
    ray.m_StartOffset.y = -v10;
    ray.m_StartOffset.z = -((flHullHeight + 0.0) * 0.5);
    filter.m_attr.m_nInteractsWith |= v4;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &ground);
    v13 = 0.0;
    if ( ground.startsolid )
    {
      m_bot = this->m_bot;
      if ( (g_NextBotManager.m_debugType & 0x10) != 0
        && (g_NextBotManager.m_debugFilterList.m_Size == 0
         || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot))
        && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 16, v11, v12, v13) != 0
        && gpGlobals->framecount == 60 * (gpGlobals->framecount / 60) )
      {
        v64 = *((*(this->m_pNextBot->_vptr_INextBotEventResponder + 73))(&this->m_pNextBot->INextBot) + 8);
        v66 = *((*(this->m_pNextBot->_vptr_INextBotEventResponder + 73))(&this->m_pNextBot->INextBot) + 4);
        v70 = *(*(this->m_pNextBot->_vptr_INextBotEventResponder + 73))(&this->m_pNextBot->INextBot);
        v19 = CGlobalVarsBase::curtime(gpGlobals, 0);
        DevMsg("%3.2f: Inside ground, ( %.0f, %.0f, %.0f )\n", v19, v70, v66, v64);
      }
    }
    else if ( ground.fraction < 1.0 )
    {
      x = ground.endpos.x;
      v21 = ground.plane.normal.x;
      this->m_bIsUsingFullFeetTrace = 0;
      this->m_vGroundSampleLastPos.x = x;
      y = ground.endpos.y;
      v23 = ground.plane.normal.y;
      this->m_vGroundNormal.x = v21;
      this->m_vGroundSampleLastPos.y = y;
      z = ground.endpos.z;
      v25 = this->m_vVelocity.x;
      this->m_vGroundNormal.y = v23;
      v26 = this->m_vVelocity.y;
      this->m_vGroundSampleLastPos.z = z;
      v27 = ground.plane.normal.z;
      v28 = this->m_vVelocity.z;
      vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
      this->m_vGroundNormal.z = ground.plane.normal.z;
      v71 = v27;
      v30 = ((v21 * v25) + (v23 * v26)) + (v27 * v28);
      this->m_vVelocity.x = v25 - (v21 * v30);
      this->m_vVelocity.y = v26 - (v23 * v30);
      this->m_vVelocity.z = v28 - (v30 * v27);
      *&v31 = (vptr_INextBotEventResponder[108])(this);
      *&v32 = LODWORD(v71);
      v33 = 0.0;
      if ( *&v31 <= v71 )
      {
        if ( ground.m_pEnt != 0 && (*(ground.m_pEnt->_vptr_IHandleEntity + 143))(ground.m_pEnt, *&v31, v71, 0.0) == 0 )
        {
          if ( (*(this->_vptr_INextBotEventResponder + 126))(this, ground.m_pEnt) != 0 )
            return;
          (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 7))(
            this->m_bot,
            ground.m_pEnt,
            &ground);
        }
        (*(this->m_pNextBot->_vptr_INextBotEventResponder + 72))(
          &this->m_pNextBot->INextBot,
          &ground.endpos,
          v31,
          v32,
          v33);
        v45 = (*(this->_vptr_INextBotEventResponder + 83))(this);
        m_pEnt = ground.m_pEnt;
        v47 = v45;
        if ( v45 == 0
          || (GroundEntity = CBaseEntity::GetGroundEntity(this->m_pNextBot),
              m_pEnt = ground.m_pEnt,
              GroundEntity != ground.m_pEnt) )
        {
          CBaseEntity::SetGroundEntity(this->m_pNextBot, m_pEnt);
          if ( ground.m_pEnt != 0 && (m_pEntity = ground.m_pEnt->m_pEntity) != 0 )
          {
            v49 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v50 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v50 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hGround.m_Index) = v50 | this->m_hGround.m_Index & 0x8000;
            this->m_hGround.m_Index = (v49 << 15) | this->m_hGround.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hGround.m_Index = -1;
          }
          this->m_bIsJumping = 0;
          this->m_bIsJumpingAcrossGap = 0;
          if ( v47 == 0 )
            (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 6))(this->m_bot);
        }
      }
      else
      {
        if ( ((this->m_vVelocity.x * ground.plane.normal.x) + (this->m_vVelocity.y * ground.plane.normal.y)) <= 0.0 )
        {
          (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 7))(
            this->m_bot,
            ground.m_pEnt,
            &ground);
          LODWORD(v33) = 0;
        }
        v34 = this->m_vGroundNormal.x;
        v72 = LODWORD(v33);
        v35 = this->m_vAcceleration.x;
        v36 = this->m_vAcceleration.y;
        v37 = this->m_vAcceleration.z;
        v38 = this->m_bot;
        v39 = ((v34 * v35) + (this->m_vGroundNormal.y * v36)) + (this->m_vGroundNormal.z * v37);
        v40 = this->m_vGroundNormal.y * v39;
        v41 = v37 - (v39 * this->m_vGroundNormal.z);
        this->m_vAcceleration.x = v35 - (v34 * v39);
        this->m_vAcceleration.y = v36 - v40;
        this->m_vAcceleration.z = v41;
        IsDebugging = INextBot::IsDebugging(v38, 0x10u);
        v43 = v72;
        if ( IsDebugging )
        {
          v67 = v72;
          v51 = CGlobalVarsBase::curtime(gpGlobals, 0);
          DevMsg("%3.2f: NextBotGroundLocomotion - Too steep to stand here\n", v51);
          x_low = LODWORD(ground.plane.normal.x);
          *x_low.m128i_i32 = ground.plane.normal.x * 20.0;
          v53 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
          y_low = LODWORD(ground.plane.normal.y);
          *y_low.m128i_i32 = ground.plane.normal.y * 20.0;
          v55 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
          v73 = 20.0 * ground.plane.normal.z;
          v75 = (*(this->_vptr_INextBotEventResponder + 98))(this);
          v56 = this->_vptr_INextBotEventResponder;
          v76 = v57;
          ray.m_Start.y = v55 + *(&v75 + 1);
          ray.m_Start.x = v53 + *&v75;
          ray.m_Start.z = v57 + v73;
          *&origin.x = (v56[98])(this);
          origin.z = v58;
          NDebugOverlay::Line(&origin, &ray.m_Start, 255, 150, 0, 1, 5.0);
          v43 = v67;
        }
        z_low = LODWORD(this->m_vVelocity.z);
        this->m_vAcceleration.z = fminf(v43.m128_f32[0], this->m_vAcceleration.z);
        LODWORD(this->m_vVelocity.z) = _mm_andnot_ps(_mm_cmplt_ss(v43, z_low), z_low).m128_u32[0];
      }
    }
    else if ( (*(this->_vptr_INextBotEventResponder + 83))(this, 1.0, v12, 0.0) != 0 )
    {
      v14 = this->m_bot;
      v15 = *(v14->_vptr_INextBotEventResponder + 5);
      v16 = CBaseEntity::GetGroundEntity(this->m_pNextBot);
      v15(v14, v16);
      if ( (*(this->_vptr_INextBotEventResponder + 72))(this) == 0
        && (*(this->_vptr_INextBotEventResponder + 73))(this) == 0 )
      {
        v17 = this->_vptr_INextBotEventResponder;
        this->m_bIsUsingFullFeetTrace = 1;
        this->m_vAcceleration.z = this->m_vAcceleration.z - (v17[116])(this);
      }
    }
  }
}


// NextBotGroundLocomotion::ClimbUpToLedge  (line 1016, @0x0000000002f15ed0, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, GetBool, GetInt, Init, LengthSqr, NextBotTraversableTraceFilter, NormalizeInPlace, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, V_swap<float>, Vector, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, curtime, operator*, operator*=, operator+, operator+=, operator-, operator=
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, NDebugOverlay::SweptBox, VectorNormalize, VectorAngles, CBaseEntity::SetAbsAngles, INextBot::IsDebugging, CBaseEntity::GetGroundEntity, NDebugOverlay::Cross3D, NDebugOverlay::Line, NDebugOverlay::HorzArrow (14 total)
// strings: "%3.2f: Can't find climb surface normal.\n"
bool __fastcall NextBotGroundLocomotion::ClimbUpToLedge(
        NextBotGroundLocomotion *const this,
        const Vector *const vLandingGoal,
        const Vector *const vLandingForward,
        const CBaseEntity *pObstacle)
{
  __int64 v8; // rax
  float z; // r12d
  __int64 v10; // r15
  double v11; // xmm0_8
  int (**vptr_INextBotEventResponder)(...); // rax
  float v13; // xmm1_4
  float v14; // xmm0_4
  int (**v15)(...); // rax
  float v16; // r12d
  double v17; // xmm0_8
  float v18; // xmm1_4
  INextBot *m_bot; // r12
  const CBaseEntity *v20; // rax
  int (**v21)(...); // rax
  double v22; // xmm0_8
  vec_t x; // xmm2_4
  vec_t v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  __int64 v27; // r12
  float v28; // xmm1_4
  float v29; // xmm5_4
  float v30; // xmm9_4
  float v31; // xmm5_4
  float v32; // xmm7_4
  float v33; // xmm1_4
  float v34; // xmm4_4
  float v35; // xmm0_4
  int m_nValue; // eax
  float v37; // xmm2_4
  float v38; // xmm6_4
  float y; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  float v43; // xmm1_4
  int v44; // xmm3_4
  __int64 v45; // r12
  float *v46; // rax
  float v47; // xmm6_4
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm7_4
  float v51; // xmm10_4
  float v52; // xmm9_4
  float v53; // xmm0_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm0_4
  float v57; // xmm1_4
  int v58; // r9d
  const Vector *v59; // rax
  vec_t v60; // xmm6_4
  float v61; // xmm2_4
  float v62; // xmm0_4
  float v63; // xmm1_4
  int (**v64)(...); // rax
  INextBot *v65; // r12
  void (__fastcall *v66)(INextBot *, CBaseEntity *); // r13
  CBaseEntity *GroundEntity; // rax
  vec_t v68; // xmm2_4
  vec_t v69; // xmm1_4
  vec_t v70; // xmm0_4
  double v71; // xmm0_8
  vec_t v72; // xmm1_4
  vec_t v73; // xmm1_4
  vec_t v74; // xmm2_4
  vec_t v75; // xmm3_4
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v77; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  char m_bIsClimbingUpToLedge; // [rsp+30h] [rbp-330h]
  float flBackup; // [rsp+40h] [rbp-320h]
  unsigned int climbActivity; // [rsp+50h] [rbp-310h]
  float flMaxBackup; // [rsp+54h] [rbp-30Ch]
  float ray; // [rsp+58h] [rbp-308h]
  float v84; // [rsp+60h] [rbp-300h]
  float *v85; // [rsp+60h] [rbp-300h]
  int v86; // [rsp+60h] [rbp-300h]
  float maxsa; // [rsp+68h] [rbp-2F8h]
  float maxsb; // [rsp+68h] [rbp-2F8h]
  float maxs; // [rsp+68h] [rbp-2F8h]
  Vector *maxsc; // [rsp+68h] [rbp-2F8h]
  float pTrace; // [rsp+70h] [rbp-2F0h]
  float pTracea; // [rsp+70h] [rbp-2F0h]
  float pTraceb; // [rsp+70h] [rbp-2F0h]
  float pTracec; // [rsp+70h] [rbp-2F0h]
  float ra; // [rsp+78h] [rbp-2E8h]
  int rb; // [rsp+78h] [rbp-2E8h]
  int r; // [rsp+78h] [rbp-2E8h]
  float flHullWidth; // [rsp+7Ch] [rbp-2E4h]
  float flHeightError; // [rsp+8Ch] [rbp-2D4h] BYREF
  double v100; // [rsp+90h] [rbp-2D0h]
  float v101; // [rsp+98h] [rbp-2C8h]
  Vector vHullBottom; // [rsp+A0h] [rbp-2C0h] BYREF
  Vector vHullTop; // [rsp+B0h] [rbp-2B0h] BYREF
  double v104; // [rsp+C0h] [rbp-2A0h]
  float v105; // [rsp+C8h] [rbp-298h]
  Vector vLedgePos; // [rsp+D0h] [rbp-290h] BYREF
  double v107; // [rsp+E0h] [rbp-280h]
  vec_t v108; // [rsp+E8h] [rbp-278h]
  Vector vLedgeNormal; // [rsp+F0h] [rbp-270h] BYREF
  QAngle angles; // [rsp+100h] [rbp-260h] BYREF
  Vector flStartPos; // [rsp+110h] [rbp-250h] BYREF
  Vector start; // [rsp+120h] [rbp-240h] BYREF
  NextBotTraversableTraceFilter filter; // [rsp+130h] [rbp-230h] BYREF
  Ray_t v114; // [rsp+180h] [rbp-1E0h] BYREF
  trace_t v115; // [rsp+1D0h] [rbp-190h] BYREF
  trace_t upResult; // [rsp+280h] [rbp-E0h] BYREF

  if ( nb_locomotion_debug_climb.m_pParent->m_Value.m_nValue != 0 )
  {
    v71 = (*(this->_vptr_INextBotEventResponder + 98))(this);
    upResult.startpos.z = v72;
    *&upResult.startpos.x = v71;
    NDebugOverlay::Cross3D(&upResult.startpos, 5.0, 0, 255, 0, 1, 10.0);
    NDebugOverlay::Cross3D(vLandingGoal, 5.0, 0, 255, 0, 1, 10.0);
    *&upResult.startpos.x = (*(this->_vptr_INextBotEventResponder + 98))(this);
    upResult.startpos.z = v73;
    NDebugOverlay::Line(&upResult.startpos, vLandingGoal, 0, 255, 0, 1, 10.0);
    v74 = (vLandingForward->y * 10.0) + vLandingGoal->y;
    v75 = (vLandingForward->x * 10.0) + vLandingGoal->x;
    upResult.startpos.z = (vLandingForward->z * 10.0) + vLandingGoal->z;
    upResult.startpos.y = v74;
    upResult.startpos.x = v75;
    NDebugOverlay::HorzArrow(vLandingGoal, &upResult.startpos, 2.0, 0, 255, 0, 255, 1, 10.0);
  }
  if ( (*(this->_vptr_INextBotEventResponder + 83))(this) == 0 )
    return 0;
  m_bIsClimbingUpToLedge = this->m_bIsClimbingUpToLedge;
  if ( m_bIsClimbingUpToLedge != 0 )
    return 0;
  v8 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  z = vLandingGoal->z;
  v10 = v8;
  v11 = (*(this->_vptr_INextBotEventResponder + 98))(this);
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  v100 = v11;
  v101 = v13;
  flHeightError = 0.0;
  climbActivity = vptr_INextBotEventResponder[128](this, &flHeightError, z - v13);
  flHullWidth = (*(*v10 + 744LL))(v10);
  v14 = (*(this->_vptr_INextBotEventResponder + 99))(this);
  v15 = this->_vptr_INextBotEventResponder;
  vHullBottom.x = -1.0;
  v16 = vLandingGoal->z;
  vHullBottom.y = -1.0;
  vHullBottom.z = v14 + 0.1;
  v17 = (v15[98])(this);
  vHullTop.x = 1.0;
  v104 = v17;
  v105 = v18;
  vHullTop.y = 1.0;
  vHullTop.z = v16 - v18;
  if ( vHullBottom.z > (v16 - v18) )
  {
    vHullTop.z = vHullBottom.z;
    vHullBottom.z = v16 - v18;
  }
  memset(&v115.m_ShapeAttributes, 0, 31);
  v115.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&v115);
  m_bot = this->m_bot;
  v20 = (*(m_bot->_vptr_INextBotEventResponder + 66))(m_bot);
  CTraceFilterSimple::CTraceFilterSimple(&filter, v20, 4, 0);
  filter.m_bot = m_bot;
  filter._vptr_CTraceFilter = off_47B2490;
  v21 = this->_vptr_INextBotEventResponder;
  v115.startsolid = 1;
  filter.m_when = CLocomotionBase::TraverseWhenType::IMMEDIATELY;
  flMaxBackup = flHullWidth * 3.0;
  v22 = (v21[98])(this);
  x = vLandingGoal->x;
  v108 = v24;
  vLedgePos.z = v24;
  v107 = v22;
  *&v22 = vLandingGoal->y;
  vLedgePos.x = x;
  v25 = 0.0;
  vLedgePos.y = *&v22;
  if ( (flHullWidth * 3.0) < 0.0 )
  {
    v25 = 0.0;
  }
  else
  {
    v26 = 0.5;
    while ( v115.startsolid || v115.fraction >= 1.0 )
    {
      flBackup = v25;
      ray = v26;
      v27 = (*(*v10 + 792LL))(v10);
      ra = vLandingForward->x * (10.0 * flHullWidth);
      maxsa = vLandingForward->y * (10.0 * flHullWidth);
      pTrace = (10.0 * flHullWidth) * vLandingForward->z;
      *&v114.m_Start.x = (*(this->_vptr_INextBotEventResponder + 98))(this);
      v114.m_Start.z = v28;
      upResult.endpos.x = 0.0;
      v29 = vLandingForward->x;
      upResult.plane.normal.y = 0.0;
      upResult.fraction = 0.0;
      *(&upResult.startsolid + 1) = 0;
      LODWORD(upResult.m_pSurfaceProperties) = 0;
      v30 = vLedgePos.x - (v29 * flBackup);
      v31 = vLandingForward->y * flBackup;
      upResult.endpos.y = (ra + v114.m_Start.x) - v30;
      v32 = vLedgePos.z - (flBackup * vLandingForward->z);
      upResult.endpos.z = (maxsa + v114.m_Start.y) - (vLedgePos.y - v31);
      upResult.plane.normal.x = (v28 + pTrace) - v32;
      *(&upResult.contents + 1) = (vHullTop.y - vHullBottom.y) * ray;
      BYTE5(upResult.m_pSurfaceProperties) = (((upResult.endpos.y * upResult.endpos.y)
                                             + (upResult.endpos.z * upResult.endpos.z))
                                            + (upResult.plane.normal.x * upResult.plane.normal.x)) != 0.0;
      *&upResult.contents = (vHullTop.x - vHullBottom.x) * ray;
      *&upResult.startsolid = (vHullTop.z - vHullBottom.z) * ray;
      v33 = (vHullBottom.y + vHullTop.y) * ray;
      upResult.plane.dist = -v33;
      upResult.startpos.y = (vLedgePos.y - v31) + v33;
      BYTE4(upResult.m_pSurfaceProperties) = (((*&upResult.contents * *&upResult.contents)
                                             + (*(&upResult.contents + 1) * *(&upResult.contents + 1)))
                                            + (*&upResult.startsolid * *&upResult.startsolid)) < 0.000001;
      filter.m_attr.m_nInteractsWith |= v27;
      v34 = (vHullTop.x + vHullBottom.x) * ray;
      v35 = (vHullTop.z + vHullBottom.z) * ray;
      upResult.plane.normal.z = -v34;
      *&upResult.plane.type = -v35;
      upResult.startpos.x = v30 + v34;
      upResult.startpos.z = v32 + v35;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &upResult, &filter, &v115);
      v26 = ray;
      vLedgeNormal.x = v115.plane.normal.x;
      m_nValue = nb_locomotion_debug_climb.m_pParent->m_Value.m_nValue;
      vLedgeNormal.y = v115.plane.normal.y;
      v37 = flBackup;
      vLedgeNormal.z = v115.plane.normal.z;
      v38 = 10.0 * flHullWidth;
      if ( m_nValue != 0 )
      {
        rb = -v115.startsolid;
        v84 = vLandingForward->x * (10.0 * flHullWidth);
        maxsb = vLandingForward->y * v38;
        pTracea = v38 * vLandingForward->z;
        *&v114.m_Start.x = (*(this->_vptr_INextBotEventResponder + 98))(this);
        y = vLandingForward->y;
        v114.m_Start.z = v40;
        upResult.startpos.x = v84 + v114.m_Start.x;
        v41 = vLandingForward->z * flBackup;
        upResult.startpos.y = maxsb + v114.m_Start.y;
        v42 = flBackup * vLandingForward->x;
        upResult.startpos.z = pTracea + v40;
        start.y = vLedgePos.y - (y * flBackup);
        start.z = vLedgePos.z - v41;
        start.x = vLedgePos.x - v42;
        NDebugOverlay::SweptBox(&start, &upResult.startpos, &vHullBottom, &vHullTop, &vec3_angle, rb, 255, 0, 255, 15.0);
        v26 = ray;
        v37 = flBackup;
      }
      v25 = v37 + (flHullWidth * v26);
      if ( flMaxBackup < v25 )
        goto LABEL_33;
    }
  }
  if ( flMaxBackup >= v25 && (v115.fraction < 1.0 || v115.startsolid) )
  {
    vLedgeNormal.z = 0.0;
    VectorNormalize(&vLedgeNormal);
    memset(&upResult.m_ShapeAttributes, 0, 31);
    upResult.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&upResult);
    if ( flMaxBackup < 0.0 )
    {
      v62 = vLedgeNormal.z;
      v63 = vLedgeNormal.y;
      v61 = vLedgeNormal.x;
    }
    else
    {
      v43 = 0.0;
      *&v44 = 0.5;
      do
      {
        maxs = v43;
        r = v44;
        v45 = (*(*v10 + 792LL))(v10);
        v85 = (*(*v10 + 784LL))(v10);
        pTraceb = (*(this->_vptr_INextBotEventResponder + 99))(this);
        v46 = (*(*v10 + 776LL))(v10);
        v47 = vLandingGoal->z;
        v48 = (vLedgeNormal.y * maxs) + vLedgePos.y;
        v49 = (vLedgeNormal.x * maxs) + vLedgePos.x;
        v50 = (vLedgeNormal.z * maxs) + vLedgePos.z;
        v51 = *v46 + 0.0;
        v52 = v46[1] + 0.0;
        v53 = (pTraceb + 0.1) + v46[2];
        v114.m_Delta.y = v48 - v48;
        v114.m_Delta.x = v49 - v49;
        v114.m_Start.w = 0.0;
        v114.m_Delta.w = 0.0;
        v114.m_Delta.z = v47 - v50;
        v114.m_StartOffset.w = 0.0;
        v114.m_Extents.w = 0.0;
        v114.m_flRadius = 0.0;
        v114.m_IsSwept = (((v114.m_Delta.x * v114.m_Delta.x) + (v114.m_Delta.y * v114.m_Delta.y))
                        + (v114.m_Delta.z * v114.m_Delta.z)) != 0.0;
        v114.m_Extents.x = *v85 - v51;
        v114.m_Extents.y = v85[1] - v52;
        v54 = v85[2];
        v114.m_Extents.x = v114.m_Extents.x * *&r;
        v114.m_Extents.y = v114.m_Extents.y * *&r;
        v114.m_Extents.z = (v54 - v53) * *&r;
        v114.m_IsRay = (((v114.m_Extents.x * v114.m_Extents.x) + (v114.m_Extents.y * v114.m_Extents.y))
                      + (v114.m_Extents.z * v114.m_Extents.z)) < 0.000001;
        v114.m_StartOffset.x = v51 + *v85;
        v114.m_StartOffset.y = v52 + v85[1];
        v55 = v53 + v85[2];
        filter.m_attr.m_nInteractsWith |= v45;
        v114.m_Start.x = v49 + (v114.m_StartOffset.x * *&r);
        v56 = v55 * *&r;
        v114.m_Start.y = v48 + (v114.m_StartOffset.y * *&r);
        v114.m_Start.z = v50 + v56;
        v114.m_StartOffset.x = -(v114.m_StartOffset.x * *&r);
        v114.m_StartOffset.y = -(v114.m_StartOffset.y * *&r);
        v114.m_StartOffset.z = -v56;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v114, &filter, &upResult);
        v44 = r;
        v57 = maxs;
        if ( nb_locomotion_debug_climb.m_pParent->m_Value.m_nValue != 0 )
        {
          v58 = 255;
          if ( upResult.fraction >= 1.0 )
            v58 = -upResult.startsolid;
          pTracec = maxs;
          v86 = v58;
          maxsc = (*(*v10 + 784LL))(v10);
          v59 = (*(*v10 + 776LL))(v10);
          v114.m_Start.y = (vLedgeNormal.y * pTracec) + vLedgePos.y;
          v60 = vLandingGoal->z;
          v114.m_Start.x = (vLedgeNormal.x * pTracec) + vLedgePos.x;
          v114.m_Start.z = v60;
          start.y = (v115.plane.normal.y * pTracec) + vLedgePos.y;
          start.x = (v115.plane.normal.x * pTracec) + vLedgePos.x;
          start.z = (v115.plane.normal.z * pTracec) + vLedgePos.z;
          NDebugOverlay::SweptBox(&start, &v114.m_Start, v59, maxsc, &vec3_angle, v86, 0, 255, 255, 15.0);
          v44 = r;
          v57 = pTracec;
        }
        if ( upResult.fraction >= 1.0 && !upResult.startsolid )
        {
          v61 = vLedgeNormal.x;
          v62 = vLedgeNormal.z;
          vLedgePos.x = (v57 * vLedgeNormal.x) + vLedgePos.x;
          vLedgePos.y = (v57 * vLedgeNormal.y) + vLedgePos.y;
          vLedgePos.z = (v57 * vLedgeNormal.z) + vLedgePos.z;
          v63 = vLedgeNormal.y;
          goto LABEL_29;
        }
        v43 = v57 + (0.25 * flHullWidth);
      }
      while ( flMaxBackup >= v43 );
      v62 = vLedgeNormal.z;
      v63 = vLedgeNormal.y;
      v61 = vLedgeNormal.x;
    }
LABEL_29:
    v114.m_Start.x = -v61;
    v114.m_Start.y = -v63;
    v114.m_Start.z = -v62;
    VectorAngles(&v114.m_Start, &angles);
    CBaseEntity::SetAbsAngles(this->m_pNextBot, &angles);
    flStartPos = vLedgePos;
    v64 = this->_vptr_INextBotEventResponder;
    flStartPos.z = vLedgePos.z + flHeightError;
    v64[67](this, &flStartPos);
    if ( INextBot::IsDebugging(&this->m_pNextBot->INextBot, 4u) )
    {
      v114.m_Start.y = (vLedgeNormal.y * 25.0) + vLedgePos.y;
      v114.m_Start.z = (vLedgeNormal.z * 25.0) + vLedgePos.z;
      v114.m_Start.x = (25.0 * vLedgeNormal.x) + vLedgePos.x;
      NDebugOverlay::HorzArrow(&vLedgePos, &v114.m_Start, 2.0, 255, 255, 0, 255, 1, 15.0);
      *&v114.m_Start.x = 0xBF80000000000000LL;
      v114.m_Start.z = 0.0;
      start.x = 1.0;
      start.y = 0.0;
      start.z = 0.0;
      NDebugOverlay::Circle(&vLedgePos, &start, &v114.m_Start, 3.0, 255, 0, 0, 255, 1, 15.0);
    }
    m_bIsClimbingUpToLedge = (*(*v10 + 616LL))(v10, climbActivity, 11);
    if ( m_bIsClimbingUpToLedge != 0 )
    {
      this->m_bIsJumping = 1;
      this->m_bIsClimbingUpToLedge = 1;
      this->m_vLedgeJumpGoalPos.x = vLandingGoal->x;
      this->m_vLedgeJumpGoalPos.y = vLandingGoal->y;
      this->m_vLedgeJumpGoalPos.z = vLandingGoal->z;
      (*(*v10 + 656LL))(v10, 1);
      v65 = this->m_bot;
      v66 = *(v65->_vptr_INextBotEventResponder + 5);
      GroundEntity = CBaseEntity::GetGroundEntity(this->m_pNextBot);
      v66(v65, GroundEntity);
      return m_bIsClimbingUpToLedge;
    }
    return 0;
  }
LABEL_33:
  if ( INextBot::IsDebugging(&this->m_pNextBot->INextBot, 4u) )
  {
    m_flCurrentTime = 0.0;
    v77 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v77->m_flCurrentTime;
    }
    DevMsg("%3.2f: Can't find climb surface normal.\n", m_flCurrentTime);
  }
  v68 = vec3_origin.x;
  v69 = vec3_origin.y;
  v70 = vec3_origin.z;
  this->m_vVelocity.x = vec3_origin.x;
  this->m_vVelocity.y = v69;
  this->m_vVelocity.z = v70;
  this->m_vAcceleration.x = v68;
  this->m_vAcceleration.y = v69;
  this->m_vAcceleration.z = v70;
  return m_bIsClimbingUpToLedge;
}


// NextBotGroundLocomotion::JumpAcrossGap  (line 1172, @0x0000000002f125d0, libserver.so)  // inlines: NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: VectorNormalize, CBaseEntity::GetGroundEntity, sqrt
void __fastcall NextBotGroundLocomotion::JumpAcrossGap(
        NextBotGroundLocomotion *const this,
        const Vector *const vLandingGoal,
        const Vector *const vLandingForward)
{
  __int64 v5; // rax
  double v6; // xmm0_8
  float z; // xmm2_4
  vec_t v8; // xmm1_4
  float v9; // xmm2_4
  float x; // xmm1_4
  float v11; // xmm0_4
  __m128d v12; // xmm0
  float v13; // xmm1_4
  float y; // xmm3_4
  vec_t v15; // xmm2_4
  INextBot *m_bot; // r12
  vec_t v17; // xmm1_4
  vec_t v18; // xmm0_4
  NextBotCombatCharacter *m_pNextBot; // rdi
  vec_t v20; // xmm0_4
  void (__fastcall *v21)(INextBot *, CBaseEntity *); // r13
  CBaseEntity *GroundEntity; // rax
  float flRange; // [rsp+8h] [rbp-48h]
  float flLaunchVel; // [rsp+Ch] [rbp-44h]
  float flLaunchVela; // [rsp+Ch] [rbp-44h]
  float flLaunchVelb; // [rsp+Ch] [rbp-44h]
  Vector vToGoal; // [rsp+10h] [rbp-40h] BYREF
  Vector vAhead; // [rsp+20h] [rbp-30h] BYREF

  if ( (*(this->_vptr_INextBotEventResponder + 83))(this, vLandingGoal, vLandingForward) != 0 )
  {
    v5 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
    if ( v5 == 0 || (*(*v5 + 616LL))(v5, this->m_actJumpAcrossGap, 0) != 0 )
    {
      v6 = (*(this->_vptr_INextBotEventResponder + 98))(this);
      z = vLandingGoal->z;
      *&vAhead.x = v6;
      *&v6 = vLandingGoal->y;
      v9 = z - v8;
      vAhead.z = v8;
      x = vLandingGoal->x;
      vToGoal.z = 0.0;
      flLaunchVel = v9;
      vToGoal.y = *&v6 - vAhead.y;
      vToGoal.x = x - vAhead.x;
      flRange = VectorNormalize(&vToGoal);
      flLaunchVela = fminf(flRange * 0.89999998, flLaunchVel);
      v11 = (*(this->_vptr_INextBotEventResponder + 116))(this);
      v12.m128d_f64[1] = (flRange / 0.70709997);
      v12.m128d_f64[0] = v12.m128d_f64[1] / sqrt((((flRange - flLaunchVela) + (flRange - flLaunchVela)) / v11));
      vAhead.y = vToGoal.y + 0.0;
      vAhead.x = vToGoal.x + 0.0;
      v13 = _mm_movedup_pd(v12).m128d_f64[0];
      flLaunchVelb = v13;
      vAhead.z = vToGoal.z + 1.0;
      VectorNormalize(&vAhead);
      this->m_bIsJumping = 1;
      this->m_bIsJumpingAcrossGap = 1;
      y = vAhead.y;
      this->m_bIsClimbingUpToLedge = 0;
      v15 = vAhead.z * flLaunchVelb;
      m_bot = this->m_bot;
      this->m_vAcceleration.x = vec3_origin.x;
      v17 = flLaunchVelb * vAhead.x;
      v18 = vec3_origin.y;
      this->m_vVelocity.y = y * flLaunchVelb;
      m_pNextBot = this->m_pNextBot;
      this->m_vAcceleration.y = v18;
      v20 = vec3_origin.z;
      this->m_vVelocity.x = v17;
      this->m_vVelocity.z = v15;
      this->m_vAcceleration.z = v20;
      v21 = *(m_bot->_vptr_INextBotEventResponder + 5);
      GroundEntity = CBaseEntity::GetGroundEntity(m_pNextBot);
      v21(m_bot, GroundEntity);
    }
  }
}


// NextBotGroundLocomotion::Jump  (line 1227, @0x0000000002f127f0, libserver.so)
// calls: CBaseEntity::GetGroundEntity, sqrtf
void __fastcall NextBotGroundLocomotion::Jump(NextBotGroundLocomotion *const this)
{
  __int64 v2; // rax
  vec_t v3; // xmm0_4
  INextBot *m_bot; // r12
  NextBotCombatCharacter *m_pNextBot; // rdi
  void (__fastcall *v6)(INextBot *, CBaseEntity *); // r13
  CBaseEntity *GroundEntity; // rax
  float v8; // [rsp+Ch] [rbp-24h]

  if ( (*(this->_vptr_INextBotEventResponder + 83))(this) != 0 )
  {
    v2 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
    if ( v2 == 0 || (*(*v2 + 616LL))(v2, this->m_actJump, 0) != 0 )
    {
      v8 = (*(this->_vptr_INextBotEventResponder + 116))(this);
      v3 = fsqrt((v8 + v8) * (*(this->_vptr_INextBotEventResponder + 100))(this));
      m_bot = this->m_bot;
      this->m_vVelocity.z = v3;
      this->m_bIsJumping = 1;
      m_pNextBot = this->m_pNextBot;
      this->m_bIsClimbingUpToLedge = 0;
      v6 = *(m_bot->_vptr_INextBotEventResponder + 5);
      GroundEntity = CBaseEntity::GetGroundEntity(m_pNextBot);
      v6(m_bot, GroundEntity);
    }
  }
}


// NextBotGroundLocomotion::IsOnGround  (line 1255, @0x0000000002f11dc0, libserver.so)
// calls: CBaseEntity::GetGroundEntity
bool __fastcall NextBotGroundLocomotion::IsOnGround(const NextBotGroundLocomotion *const this)
{
  return CBaseEntity::GetGroundEntity(this->m_pNextBot) != 0;
}


// NextBotGroundLocomotion::OnLeaveGround  (line 1262, @0x0000000002f14050, libserver.so)  // inlines: IsDebugFilterMatch, IsDebugging, Set, curtime, operator=
// calls: CBaseEntity::SetGroundEntity, DevMsg(char const*,...), NextBotManager::IsDebugFilterMatch
// strings: "%3.2f: NextBotGroundLocomotion::OnLeaveGround\n"
void __fastcall NextBotGroundLocomotion::OnLeaveGround(NextBotGroundLocomotion *const this, CBaseEntity *ground)
{
  INextBot *m_bot; // rbx
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::SetGroundEntity(this->m_pNextBot, 0);
  this->m_hGround.m_Index = -1;
  m_bot = this->m_bot;
  if ( (g_NextBotManager.m_debugType & 0x10) != 0
    && (g_NextBotManager.m_debugFilterList.m_Size == 0 || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, m_bot))
    && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 16) != 0 )
  {
    m_flCurrentTime = 0.0;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    DevMsg("%3.2f: NextBotGroundLocomotion::OnLeaveGround\n", m_flCurrentTime);
  }
}


// NextBotGroundLocomotion::OnLandOnGround  (line 1275, @0x0000000002f13fa0, libserver.so)  // inlines: IsDebugFilterMatch, IsDebugging, curtime
// calls: DevMsg(char const*,...), NextBotManager::IsDebugFilterMatch
// strings: "%3.2f: NextBotGroundLocomotion::GetBot()->OnLandOnGround\n"
void __fastcall NextBotGroundLocomotion::OnLandOnGround(NextBotGroundLocomotion *const this, CBaseEntity *ground)
{
  INextBot *m_bot; // rbx
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_bot = this->m_bot;
  if ( (g_NextBotManager.m_debugType & 0x10) != 0
    && (g_NextBotManager.m_debugFilterList.m_Size == 0 || NextBotManager::IsDebugFilterMatch(&g_NextBotManager, m_bot))
    && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 16) != 0 )
  {
    m_flCurrentTime = 0.0;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v4->m_flCurrentTime;
    }
    DevMsg("%3.2f: NextBotGroundLocomotion::GetBot()->OnLandOnGround\n", m_flCurrentTime);
  }
}


// NextBotGroundLocomotion::GetSpeedLimit  (line 1285, @0x0000000002f128d0, libserver.so)
float __fastcall NextBotGroundLocomotion::GetSpeedLimit(const NextBotGroundLocomotion *const this)
{
  __int64 v2; // rax
  char v3; // al
  float result; // xmm0_4

  v2 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  v3 = (*(*v2 + 696LL))(v2, 0);
  result = 100000000.0;
  if ( v3 == 0 )
    return (*(this->_vptr_INextBotEventResponder + 102))(this, 100000000.0) * 0.75;
  return result;
}


// NextBotGroundLocomotion::ClimbLadder  (line 1299, @0x0000000002f12bf0, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator CNavLadder*, operator*, operator+, operator=
void __fastcall NextBotGroundLocomotion::ClimbLadder(
        NextBotGroundLocomotion *const this,
        const CNavLadder *pLadder,
        const CNavArea *pDismountGoalArea)
{
  CNavLadder *m_pData; // rax
  const CNavMesh *m_rNavMesh; // rax
  const CNavMesh *v6; // rax
  INextBot *m_bot; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  float v10; // xmm0_4
  CNavLadder *v11; // rdx
  float v12; // xmm0_4
  INextBot *v13; // rdi
  vec_t v14; // xmm2_4
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  vec_t v17; // xmm0_4
  int (**vptr_INextBotEventResponder)(...); // rax
  Vector vMountSpot; // [rsp+0h] [rbp-20h] BYREF

  m_pData = 0;
  if ( this->m_hLadder.m_pAssociatedNavMesh == TheNavMesh )
    m_pData = this->m_hLadder.m_pData;
  if ( pLadder != m_pData || !this->m_bIsGoingUpLadder )
  {
    m_rNavMesh = 0;
    this->m_hLadder.m_pData = pLadder;
    if ( pLadder != 0 )
      m_rNavMesh = pLadder->m_rNavMesh;
    this->m_hLadder.m_pAssociatedNavMesh = m_rNavMesh;
    this->m_hLadderDismountGoalArea.m_pData = pDismountGoalArea;
    if ( pDismountGoalArea != 0 )
      v6 = pDismountGoalArea->m_rNavMesh;
    else
      v6 = 0;
    m_bot = this->m_bot;
    this->m_hLadderDismountGoalArea.m_pAssociatedNavMesh = v6;
    this->m_bIsGoingUpLadder = 1;
    v8 = (*(m_bot->_vptr_INextBotEventResponder + 69))(m_bot);
    v9 = v8;
    if ( v8 != 0 )
    {
      v10 = (*(*v8 + 744LL))(v8);
      v11 = this->m_hLadder.m_pData;
      v12 = v10 * 0.75;
      v13 = this->m_bot;
      v14 = (v11->m_vNormal.y * v12) + v11->m_vBottom.y;
      v15 = (v11->m_vNormal.z * v12) + v11->m_vBottom.z;
      v16 = (v12 * v11->m_vNormal.x) + v11->m_vBottom.x;
      vMountSpot.y = v14;
      vMountSpot.z = v15;
      vMountSpot.x = v16;
      v17 = *((*(v13->_vptr_INextBotEventResponder + 73))(v13) + 8);
      vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
      vMountSpot.z = v17;
      vptr_INextBotEventResponder[121](this, &vMountSpot);
      (*(*v9 + 616LL))(v9, 33, 2);
    }
  }
}


// NextBotGroundLocomotion::DescendLadder  (line 1325, @0x0000000002f12d40, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator CNavLadder*, operator*, operator+, operator-, operator=
// calls: UTIL_VecToYaw, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles
void __fastcall NextBotGroundLocomotion::DescendLadder(
        NextBotGroundLocomotion *const this,
        const CNavLadder *pLadder,
        const CNavArea *pDismountGoalArea)
{
  CNavLadder *m_pData; // rax
  const CNavMesh *m_rNavMesh; // rax
  const CNavMesh *v6; // rax
  INextBot *m_bot; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  float v10; // xmm0_4
  CNavLadder *v11; // rdx
  float v12; // xmm0_4
  INextBot *v13; // rdi
  vec_t v14; // xmm2_4
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  vec_t v17; // xmm0_4
  int (**vptr_INextBotEventResponder)(...); // rax
  CNavLadder *v19; // rax
  float y; // xmm2_4
  float x; // xmm3_4
  const QAngle *LocalAngles; // rax
  NextBotCombatCharacter *m_pNextBot; // rdi
  float flLadderYaw; // [rsp+Ch] [rbp-44h]
  Vector vMountSpot; // [rsp+10h] [rbp-40h] BYREF
  QAngle angles; // [rsp+20h] [rbp-30h] BYREF

  m_pData = 0;
  if ( this->m_hLadder.m_pAssociatedNavMesh == TheNavMesh )
    m_pData = this->m_hLadder.m_pData;
  if ( pLadder != m_pData || this->m_bIsGoingUpLadder )
  {
    m_rNavMesh = 0;
    this->m_hLadder.m_pData = pLadder;
    if ( pLadder != 0 )
      m_rNavMesh = pLadder->m_rNavMesh;
    this->m_hLadder.m_pAssociatedNavMesh = m_rNavMesh;
    this->m_hLadderDismountGoalArea.m_pData = pDismountGoalArea;
    if ( pDismountGoalArea != 0 )
      v6 = pDismountGoalArea->m_rNavMesh;
    else
      v6 = 0;
    m_bot = this->m_bot;
    this->m_hLadderDismountGoalArea.m_pAssociatedNavMesh = v6;
    this->m_bIsGoingUpLadder = 0;
    v8 = (*(m_bot->_vptr_INextBotEventResponder + 69))(m_bot);
    v9 = v8;
    if ( v8 != 0 )
    {
      v10 = (*(*v8 + 744LL))(v8);
      v11 = this->m_hLadder.m_pData;
      v12 = v10 * 0.75;
      v13 = this->m_bot;
      v14 = (v11->m_vNormal.y * v12) + v11->m_vTop.y;
      v15 = (v11->m_vNormal.z * v12) + v11->m_vTop.z;
      v16 = (v12 * v11->m_vNormal.x) + v11->m_vTop.x;
      vMountSpot.y = v14;
      vMountSpot.z = v15;
      vMountSpot.x = v16;
      v17 = *((*(v13->_vptr_INextBotEventResponder + 73))(v13) + 8);
      vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
      vMountSpot.z = v17;
      vptr_INextBotEventResponder[121](this, &vMountSpot);
      v19 = this->m_hLadder.m_pData;
      y = v19->m_vNormal.y;
      x = v19->m_vNormal.x;
      angles.z = -v19->m_vNormal.z;
      angles.y = -y;
      angles.x = -x;
      flLadderYaw = UTIL_VecToYaw(&angles);
      LocalAngles = CBaseEntity::GetLocalAngles(this->m_pNextBot);
      m_pNextBot = this->m_pNextBot;
      *&angles.x = *&LocalAngles->x;
      *&LocalAngles = LocalAngles->z;
      angles.y = flLadderYaw;
      LODWORD(angles.z) = LocalAngles;
      CBaseEntity::SetLocalAngles(m_pNextBot, &angles);
      (*(*v9 + 616LL))(v9, 34, 2);
    }
  }
}


// NextBotGroundLocomotion::TraverseLadder  (line 1358, @0x0000000002f11de0, libserver.so)  // inlines: GetCenter, VectorAdd, VectorMultiply, VectorSubtract, operator bool, operator*, operator+, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorAngles, CBaseEntity::SetAbsAngles, CNavPoly::GetClosestPointOnPoly
bool __fastcall NextBotGroundLocomotion::TraverseLadder(NextBotGroundLocomotion *const this)
{
  __int64 v2; // r13
  bool result; // al
  CNavLadder *m_pData; // rax
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  CNavLadder *v8; // rax
  float v9; // xmm0_4
  const Vector *AbsOrigin; // rax
  CNavLadder *v11; // rax
  float y; // xmm2_4
  float x; // xmm3_4
  CNavLadder *v14; // rax
  __m128i v15; // xmm0
  float v16; // r12d
  float v17; // xmm1_4
  void (__fastcall *v18)(NextBotGroundLocomotion *const, Vector *); // rdx
  CNavArea *v19; // rax
  vec_t z; // xmm1_4
  vec_t v21; // xmm0_4
  vec_t v22; // xmm2_4
  vec_t v23; // xmm1_4
  vec_t v24; // xmm0_4
  double v25; // xmm0_8
  CNavArea *v26; // rdx
  vec_t v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // [rsp+8h] [rbp-68h]
  vec_t v30; // [rsp+8h] [rbp-68h]
  float v31; // [rsp+8h] [rbp-68h]
  float flDismountZ; // [rsp+Ch] [rbp-64h]
  vec_t flDismountZa; // [rsp+Ch] [rbp-64h]
  float flDismountZb; // [rsp+Ch] [rbp-64h]
  float flDismountZc; // [rsp+Ch] [rbp-64h]
  Vector vFloor; // [rsp+20h] [rbp-50h] BYREF
  QAngle anglesLadder; // [rsp+30h] [rbp-40h] BYREF
  Vector vForward; // [rsp+40h] [rbp-30h] BYREF
  Vector ClosestPointOnPoly; // 0:kr00_12.12

  v2 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  if ( v2 == 0 || this->m_hLadder.m_pData == 0 || this->m_hLadder.m_pAssociatedNavMesh != TheNavMesh )
    return 0;
  if ( (*(*v2 + 640LL))(v2, this->m_actLadderDismount) == 0 )
  {
    (*(this->_vptr_INextBotEventResponder + 98))(this);
    m_pData = this->m_hLadder.m_pData;
    v6 = (v5 - m_pData->m_vBottom.z) / (m_pData->m_vTop.z - m_pData->m_vBottom.z);
    v29 = ((m_pData->m_vTop.x - m_pData->m_vBottom.x) * v6) + m_pData->m_vBottom.x;
    flDismountZ = ((m_pData->m_vTop.y - m_pData->m_vBottom.y) * v6) + m_pData->m_vBottom.y;
    v7 = (*(*v2 + 744LL))(v2);
    v8 = this->m_hLadder.m_pData;
    v9 = v7 * 0.75;
    v30 = v29 + (v8->m_vNormal.x * v9);
    flDismountZa = flDismountZ + (v9 * v8->m_vNormal.y);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this->m_pNextBot);
    *&vFloor.x = *&AbsOrigin->x;
    *&AbsOrigin = AbsOrigin->z;
    vFloor.x = v30;
    vFloor.y = flDismountZa;
    LODWORD(vFloor.z) = AbsOrigin;
    (*(this->_vptr_INextBotEventResponder + 121))(this, &vFloor);
    v11 = this->m_hLadder.m_pData;
    y = v11->m_vNormal.y;
    x = v11->m_vNormal.x;
    vForward.z = -v11->m_vNormal.z;
    vForward.y = -y;
    vForward.x = -x;
    VectorAngles(&vForward, &anglesLadder);
    CBaseEntity::SetAbsAngles(this->m_pNextBot, &anglesLadder);
  }
  if ( this->m_bIsGoingUpLadder )
  {
    ClosestPointOnPoly = CNavPoly::GetClosestPointOnPoly(
                           this->m_hLadderDismountGoalArea.m_pData,
                           &this->m_hLadder.m_pData->m_vTop);
    v14 = this->m_hLadder.m_pData;
    vFloor = ClosestPointOnPoly;
    flDismountZb = fmaxf(ClosestPointOnPoly.z, v14->m_vTop.z);
    *v15.m128i_i64 = (*(*v2 + 760LL))(v2);
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    *&anglesLadder.x = (*(this->_vptr_INextBotEventResponder + 98))(this);
    anglesLadder.z = v17;
    if ( v16 <= (flDismountZb - v17) )
    {
      (*(this->_vptr_INextBotEventResponder + 93))(this, this->m_hLadder.m_pData);
    }
    else
    {
      if ( (*(*v2 + 640LL))(v2, this->m_actLadderDismount) == 0 )
        (*(*v2 + 616LL))(v2, this->m_actLadderDismount, 3);
      v18 = *(this->_vptr_INextBotEventResponder + 93);
      v19 = this->m_hLadderDismountGoalArea.m_pData;
      z = v19->m_vCenter.z;
      v21 = v19->m_vCenter.x;
      vForward.y = v19->m_vCenter.y;
      vForward.z = z;
      vForward.x = v21;
      v18(this, &vForward);
    }
    goto LABEL_12;
  }
  (*(this->_vptr_INextBotEventResponder + 93))(this, &this->m_hLadder.m_pData->m_vBottom);
  v25 = (*(this->_vptr_INextBotEventResponder + 98))(this);
  v26 = this->m_hLadderDismountGoalArea.m_pData;
  vForward.z = v27;
  *&vForward.x = v25;
  v31 = v27;
  flDismountZc = v26->m_vCenter.z;
  v28 = (*(this->_vptr_INextBotEventResponder + 99))(this);
  result = 0;
  if ( (v28 + flDismountZc) <= v31 )
  {
LABEL_12:
    v22 = vec3_origin.x;
    v23 = vec3_origin.y;
    v24 = vec3_origin.z;
    this->m_vVelocity.x = vec3_origin.x;
    this->m_vVelocity.y = v23;
    this->m_vVelocity.z = v24;
    this->m_vAcceleration.x = v22;
    this->m_vAcceleration.y = v23;
    this->m_vAcceleration.z = v24;
    return 1;
  }
  this->m_hLadder.m_pData = 0;
  this->m_hLadder.m_pAssociatedNavMesh = 0;
  return result;
}


// NextBotGroundLocomotion::DidJustJump  (line 1437, @0x0000000002f17680, libserver.so)  // inlines: GetAbsVelocity
// calls: CBaseEntity::CalcAbsoluteVelocity
// callers: NextBotGroundLocomotion::ApplyAccumulatedApproach, NextBotGroundLocomotion::UpdateGroundConstraint
bool __fastcall NextBotGroundLocomotion::DidJustJump(const NextBotGroundLocomotion *const this)
{
  char v2; // al
  bool v3; // dl
  NextBotCombatCharacter *m_pNextBot; // rbx

  v2 = (*(this->_vptr_INextBotEventResponder + 71))(this);
  v3 = 0;
  if ( v2 != 0 )
  {
    m_pNextBot = this->m_pNextBot;
    if ( (m_pNextBot->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(m_pNextBot);
    return m_pNextBot->m_vecAbsVelocity.m_Value.z > 0.0;
  }
  return v3;
}


// NextBotGroundLocomotion::FaceTowards  (line 1444, @0x0000000002f12180, libserver.so)  // inlines: UTIL_AngleDiff, VectorSubtract, operator-
// calls: CBaseEntity::GetLocalAngles, UTIL_VecToYaw, AngleDiff, CBaseEntity::SetLocalAngles
void __fastcall NextBotGroundLocomotion::FaceTowards(NextBotGroundLocomotion *const this, const Vector *const vTarget)
{
  double v4; // xmm0_8
  float y; // xmm2_4
  float v6; // xmm1_4
  vec_t v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float flDesiredYaw; // [rsp+4h] [rbp-4Ch]
  float flAngleDiff; // [rsp+8h] [rbp-48h]
  float m_curInterval; // [rsp+Ch] [rbp-44h]
  QAngle curAngles; // [rsp+10h] [rbp-40h] BYREF
  double v14; // [rsp+20h] [rbp-30h]
  float v15; // [rsp+28h] [rbp-28h]
  Vector vForward; // [rsp+30h] [rbp-20h] BYREF

  m_curInterval = this->m_curInterval;
  curAngles = *CBaseEntity::GetLocalAngles(this->m_pNextBot);
  v4 = (*(this->_vptr_INextBotEventResponder + 98))(this);
  y = vTarget->y;
  v14 = v4;
  *&v4 = vTarget->z;
  v15 = v6;
  *&v4 = *&v4 - v6;
  v7 = vTarget->x - *&v14;
  vForward.y = y - *(&v14 + 1);
  vForward.z = *&v4;
  vForward.x = v7;
  flDesiredYaw = UTIL_VecToYaw(&vForward);
  flAngleDiff = AngleDiff(curAngles.y, v8);
  v9 = m_curInterval * (*(this->_vptr_INextBotEventResponder + 119))(this);
  if ( -v9 > flAngleDiff )
  {
    curAngles.y = curAngles.y - v9;
  }
  else if ( flAngleDiff > v9 )
  {
    curAngles.y = v9 + curAngles.y;
  }
  else
  {
    curAngles.y = flDesiredYaw;
  }
  CBaseEntity::SetLocalAngles(this->m_pNextBot, &curAngles);
}


// NextBotGroundLocomotion::OnAnimationActivityComplete  (line 1474, @0x0000000002f12b60, libserver.so)  // inlines: operator bool, operator=
// calls: CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles
void __fastcall NextBotGroundLocomotion::OnAnimationActivityComplete(
        NextBotGroundLocomotion *const this,
        Activity activity)
{
  const QAngle *AbsAngles; // rax
  NextBotCombatCharacter *m_pNextBot; // rdi
  QAngle angles; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_hLadder.m_pData != 0
    && this->m_hLadder.m_pAssociatedNavMesh == TheNavMesh
    && this->m_actLadderDismount == activity )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(this->m_pNextBot);
    m_pNextBot = this->m_pNextBot;
    *&angles.x = *&AbsAngles->x;
    *&AbsAngles = AbsAngles->z;
    angles.x = 0.0;
    LODWORD(angles.z) = AbsAngles;
    CBaseEntity::SetAbsAngles(m_pNextBot, &angles);
    this->m_hLadder.m_pData = 0;
    this->m_hLadder.m_pAssociatedNavMesh = 0;
  }
}


