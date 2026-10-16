
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLocomotionBase::CLocomotionBase  (line 33, @0x0000000002f33210, libserver.so)  // inlines: CNetworkVarBase, INextBotComponent, IntervalTimer, RegisterComponent, ~INextBotComponent, ~INextBotEventResponder
// calls: CountdownTimer::CountdownTimer, CLocomotionBase::Reset, _Unwind_Resume
// callers: CDOTALocomotor::CDOTALocomotor, INextBot::GetLocomotionInterface, NextBotGroundLocomotion::NextBotGroundLocomotion, PlayerLocomotion::PlayerLocomotion
void __fastcall CLocomotionBase::CLocomotionBase(CLocomotionBase *const this, INextBot *pBot)
{
  float interval_per_tick; // xmm0_4
  CountdownTimer *p_m_stillStuckTimer; // rdi

  this->_vptr_INextBotEventResponder = &off_3F7A770;
  interval_per_tick = gpGlobals->interval_per_tick;
  this->m_lastUpdateTime = 0.0;
  this->m_bot = pBot;
  this->m_curInterval = interval_per_tick;
  this->m_nextComponent = pBot->m_componentList;
  pBot->m_componentList = this;
  p_m_stillStuckTimer = &this->m_stillStuckTimer;
  *&p_m_stillStuckTimer[-4].m_duration.m_Value = &off_47B5BF0;
  *&p_m_stillStuckTimer[-1].m_duration.m_Value = off_3FD0350;
  *&p_m_stillStuckTimer[-1].m_bUseGlobalsTime = -1082130432;
  CountdownTimer::CountdownTimer(p_m_stillStuckTimer);
  this->m_moveRequestTimer.m_timestamp.m_Value = -1.0;
  this->m_moveRequestTimer._vptr_IntervalTimer = off_3FD0350;
  CLocomotionBase::Reset(this);
}


// CLocomotionBase::~CLocomotionBase  (line 41, @0x0000000002f2e170, libserver.so)  // inlines: ~INextBotComponent, ~INextBotEventResponder
// callers: CDOTALocomotor::~CDOTALocomotor, CDOTALocomotor::CDOTALocomotor, NextBotGroundLocomotion::~NextBotGroundLocomotion, NextBotGroundLocomotion::NextBotGroundLocomotion, PlayerLocomotion::~PlayerLocomotion, PlayerLocomotion::PlayerLocomotion
void __fastcall CLocomotionBase::~CLocomotionBase(CLocomotionBase *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// CLocomotionBase::~CLocomotionBase  (line 41, @0x0000000002f2e350, libserver.so)  // inlines: ~CLocomotionBase, ~INextBotComponent, ~INextBotEventResponder
// calls: operator delete
void __fastcall CLocomotionBase::~CLocomotionBase(CLocomotionBase *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// CLocomotionBase::Reset  (line 47, @0x0000000002f2fe40, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Reset, Set, operator=, operator=<float>
// callers: NextBotGroundLocomotion::Reset, CLocomotionBase::CLocomotionBase, PlayerLocomotion::Reset
void __fastcall CLocomotionBase::Reset(CLocomotionBase *const this)
{
  float interval_per_tick; // xmm0_4
  bool v3; // zf

  this->m_lastUpdateTime = 0.0;
  interval_per_tick = gpGlobals->interval_per_tick;
  this->m_vMotionVector.x = 1.0;
  this->m_vMotionVector.y = 0.0;
  this->m_curInterval = interval_per_tick;
  this->m_vMotionVector.z = 0.0;
  v3 = this->m_moveRequestTimer.m_timestamp.m_Value == -1.0;
  this->m_flSpeed = 0.0;
  this->m_vGroundMotionVector.x = 1.0;
  this->m_vGroundMotionVector.y = 0.0;
  this->m_vGroundMotionVector.z = 0.0;
  this->m_flGroundSpeed = 0.0;
  if ( !v3 )
  {
    (*(this->m_moveRequestTimer._vptr_IntervalTimer + 2))(&this->m_moveRequestTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_moveRequestTimer.m_timestamp.m_Value = -1.0;
  }
  v3 = this->m_stuckTimer.m_timestamp.m_Value == -1.0;
  this->m_bIsStuck = 0;
  if ( !v3 )
  {
    (*(this->m_stuckTimer._vptr_IntervalTimer + 2))(&this->m_stuckTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_stuckTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_vStuckPos = vec3_origin;
}


// CLocomotionBase::Update  (line 65, @0x0000000002f33e10, libserver.so)  // inlines: FastSqrt, IsDebugging, Length, Vector2DLength, VectorAdd, VectorDivide, VectorLength, VectorMultiply, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator/, operator=
// calls: CLocomotionBase::StuckMonitor, NextBotManager::IsDebugFilterMatch, NDebugOverlay::HorzArrow
// callers: NextBotGroundLocomotion::Update, PlayerLocomotion::Update
void __fastcall CLocomotionBase::Update(CLocomotionBase *const this)
{
  float v2; // xmm1_4
  float v3; // xmm4_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  INextBot *m_bot; // r12
  __m128i x_low; // xmm6
  __m128i y_low; // xmm7
  float v10; // r12d
  float v11; // r13d
  double v12; // xmm0_8
  int (**vptr_INextBotEventResponder)(...); // rax
  float v14; // xmm1_4
  vec_t v15; // xmm1_4
  float v16; // xmm1_4
  int (**v17)(...); // rax
  vec_t v18; // xmm1_4
  float v19; // [rsp+14h] [rbp-6Ch]
  float v20; // [rsp+18h] [rbp-68h]
  float v21; // [rsp+1Ch] [rbp-64h]
  float v22; // [rsp+1Ch] [rbp-64h]
  double v23; // [rsp+20h] [rbp-60h]
  Vector startPos; // [rsp+30h] [rbp-50h] BYREF
  double v25; // [rsp+40h] [rbp-40h]
  float v26; // [rsp+48h] [rbp-38h]
  Vector endPos; // [rsp+50h] [rbp-30h] BYREF

  CLocomotionBase::StuckMonitor(this);
  v23 = (*(this->_vptr_INextBotEventResponder + 104))(this);
  v3 = *&v23;
  v4 = *(&v23 + 1);
  v5 = fsqrt((v2 * v2) + ((v3 * v3) + (v4 * v4)));
  v6 = fsqrt((v3 * v3) + (v4 * v4));
  this->m_flSpeed = v5;
  this->m_flGroundSpeed = v6;
  if ( v5 > 10.0 )
  {
    this->m_vMotionVector.x = *&v23 * (1.0 / v5);
    this->m_vMotionVector.z = v2 * (1.0 / v5);
    this->m_vMotionVector.y = *(&v23 + 1) * (1.0 / v5);
  }
  if ( v6 > 10.0 )
  {
    this->m_vGroundMotionVector.z = 0.0;
    this->m_vGroundMotionVector.x = *&v23 / v6;
    this->m_vGroundMotionVector.y = *(&v23 + 1) / v6;
  }
  m_bot = this->m_bot;
  if ( (g_NextBotManager.m_debugType & 0x10) != 0
    && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
    && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 16) != 0 )
  {
    x_low = LODWORD(this->m_vGroundMotionVector.x);
    y_low = LODWORD(this->m_vGroundMotionVector.y);
    *x_low.m128i_i32 = *x_low.m128i_i32 * 25.0;
    *y_low.m128i_i32 = *y_low.m128i_i32 * 25.0;
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v11 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    v21 = 25.0 * this->m_vGroundMotionVector.z;
    v12 = (*(this->_vptr_INextBotEventResponder + 98))(this);
    vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
    v25 = v12;
    v26 = v14;
    endPos.y = v11 + *(&v12 + 1);
    endPos.z = v14 + v21;
    endPos.x = v10 + *&v12;
    *&startPos.x = (vptr_INextBotEventResponder[98])(this);
    startPos.z = v15;
    NDebugOverlay::HorzArrow(&startPos, &endPos, 3.0, 0x64u, 0xFFu, 0, 255, 0.1, 1);
    v19 = this->m_vMotionVector.x * 25.0;
    v20 = this->m_vMotionVector.y * 25.0;
    v22 = 25.0 * this->m_vMotionVector.z;
    v25 = (*(this->_vptr_INextBotEventResponder + 98))(this);
    v26 = v16;
    v17 = this->_vptr_INextBotEventResponder;
    endPos.y = v20 + *(&v25 + 1);
    endPos.x = v19 + *&v25;
    endPos.z = v16 + v22;
    *&startPos.x = (v17[98])(this);
    startPos.z = v18;
    NDebugOverlay::HorzArrow(&startPos, &endPos, 5.0, 0xFFu, 0xFFu, 0, 255, 0.1, 1);
  }
}


// CLocomotionBase::GetFeet  (line 97, @0x0000000002f2e180, libserver.so)
Vector __fastcall CLocomotionBase::GetFeet(const CLocomotionBase *const this)
{
  __int64 v1; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 73))(this->m_bot);
  *&result.x = *v1;
  result.z = *(v1 + 8);
  return result;
}


// CLocomotionBase::AdjustPosture  (line 106, @0x0000000002f309a0, libserver.so)  // inlines: CGameTrace, CrossProduct, EnableInteractsWith, Init, LengthSqr, NextBotTraversableTraceFilter, NormalizeInPlace, Normalized, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, VectorNormalize, CGamePhysicsQueryInterface::TraceRay
// callers: PlayerLocomotion::AdjustPosture
void __fastcall CLocomotionBase::AdjustPosture(CLocomotionBase *const this, const Vector *const vMoveGoal)
{
  __int64 v4; // r15
  float *v5; // rax
  double v6; // xmm0_8
  const CBaseEntity *v7; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  float v9; // xmm1_4
  float v10; // xmm1_4
  vec_t v11; // xmm0_4
  float y; // xmm1_4
  vec_t v13; // xmm4_4
  float v14; // xmm0_4
  __int64 v15; // rax
  float v16; // xmm12_4
  bool v17; // r14
  float v18; // xmm6_4
  float v19; // xmm11_4
  double v20; // xmm6_8
  float v21; // xmm4_4
  __int64 v22; // rax
  float v23; // xmm0_4
  float v24; // [rsp+4h] [rbp-1ECh]
  float v25; // [rsp+8h] [rbp-1E8h]
  float v26; // [rsp+8h] [rbp-1E8h]
  float flHalfSizea; // [rsp+10h] [rbp-1E0h]
  float flHalfSize; // [rsp+10h] [rbp-1E0h]
  float v29; // [rsp+14h] [rbp-1DCh]
  float v30; // [rsp+18h] [rbp-1D8h]
  float v31; // [rsp+18h] [rbp-1D8h]
  float v32; // [rsp+1Ch] [rbp-1D4h]
  float v33; // [rsp+1Ch] [rbp-1D4h]
  vec_t v34; // [rsp+1Ch] [rbp-1D4h]
  float v35; // [rsp+20h] [rbp-1D0h]
  vec_t v36; // [rsp+20h] [rbp-1D0h]
  float v37; // [rsp+24h] [rbp-1CCh]
  float x; // [rsp+24h] [rbp-1CCh]
  vec_t v39; // [rsp+24h] [rbp-1CCh]
  float v40; // [rsp+28h] [rbp-1C8h]
  float v41; // [rsp+28h] [rbp-1C8h]
  vec_t v42; // [rsp+28h] [rbp-1C8h]
  float v43; // [rsp+2Ch] [rbp-1C4h]
  float v44; // [rsp+2Ch] [rbp-1C4h]
  float v45; // [rsp+2Ch] [rbp-1C4h]
  vec_t v46; // [rsp+2Ch] [rbp-1C4h]
  float flMoveLengthb; // [rsp+30h] [rbp-1C0h]
  float flMoveLength; // [rsp+30h] [rbp-1C0h]
  float flMoveLengtha; // [rsp+30h] [rbp-1C0h]
  float flMoveLengthc; // [rsp+30h] [rbp-1C0h]
  float v51; // [rsp+34h] [rbp-1BCh]
  float v52; // [rsp+34h] [rbp-1BCh]
  INextBot *m_bot; // [rsp+38h] [rbp-1B8h]
  float v54; // [rsp+38h] [rbp-1B8h]
  double vGroundNormal; // [rsp+40h] [rbp-1B0h]
  float vGroundNormal_8; // [rsp+48h] [rbp-1A8h]
  double vFeet; // [rsp+50h] [rbp-1A0h]
  Vector vMoveDir; // [rsp+60h] [rbp-190h] BYREF
  NextBotTraversableTraceFilter_0 filter; // [rsp+70h] [rbp-180h] BYREF
  Ray_t vec; // [rsp+C0h] [rbp-130h] BYREF
  trace_t trace; // [rsp+110h] [rbp-E0h] BYREF

  v4 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  if ( (*(*v4 + 696LL))(v4, 0) != 0 || (*(*v4 + 696LL))(v4, 1) != 0 )
  {
    v51 = (*(this->_vptr_INextBotEventResponder + 99))(this);
    v5 = (*(*v4 + 776LL))(v4);
    v24 = *v5 + 0.0;
    v25 = v5[1] + 0.0;
    v52 = v51 + v5[2];
    v6 = (*(*v4 + 744LL))(v4);
    flHalfSizea = *&v6 * 0.5;
    v29 = (*(*v4 + 760LL))(v4);
    memset(&trace.m_ShapeAttributes, 0, 31);
    trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&trace);
    m_bot = this->m_bot;
    v7 = (*(m_bot->_vptr_INextBotEventResponder + 66))(m_bot);
    CTraceFilterSimple::CTraceFilterSimple(&filter, v7, 4, 0);
    filter.m_when = CLocomotionBase::TraverseWhenType::IMMEDIATELY;
    filter._vptr_CTraceFilter = off_47B2490;
    vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
    filter.m_bot = m_bot;
    vGroundNormal = (vptr_INextBotEventResponder[85])(this);
    vGroundNormal_8 = v9;
    vFeet = (*(this->_vptr_INextBotEventResponder + 98))(this);
    v54 = v10;
    v11 = vMoveGoal->z - v10;
    y = vMoveGoal->y;
    v13 = vMoveGoal->x - *&vFeet;
    vMoveDir.z = v11;
    vMoveDir.x = v13;
    vMoveDir.y = y - *(&vFeet + 1);
    flMoveLengthb = VectorNormalize(&vMoveDir);
    vec.m_Start.x = (vMoveDir.x * vGroundNormal_8) - (*(&vGroundNormal + 1) * 0.0);
    vec.m_Start.y = (*&vGroundNormal * 0.0) - (vGroundNormal_8 * -vMoveDir.y);
    vec.m_Start.z = (-vMoveDir.y * *(&vGroundNormal + 1)) - (*&vGroundNormal * vMoveDir.x);
    v14 = VectorNormalize(&vec.m_Start);
    v37 = (vec.m_Start.x * flMoveLengthb) + *&vFeet;
    v43 = (vec.m_Start.y * flMoveLengthb) + *(&vFeet + 1);
    flMoveLength = (flMoveLengthb * vec.m_Start.z) + v54;
    v15 = (*(*v4 + 792LL))(v4, v14);
    vec.m_Delta.x = v37 - *&vFeet;
    vec.m_Start.w = 0.0;
    vec.m_Delta.w = 0.0;
    vec.m_StartOffset.w = 0.0;
    vec.m_Extents.w = 0.0;
    vec.m_flRadius = 0.0;
    vec.m_Delta.z = flMoveLength - v54;
    vec.m_Delta.y = v43 - *(&vFeet + 1);
    v32 = v43 - *(&vFeet + 1);
    v30 = v37 - *&vFeet;
    v16 = (v29 + v52) * 0.5;
    vec.m_Extents.z = (v29 - v52) * 0.5;
    v17 = (((vec.m_Delta.x * vec.m_Delta.x) + ((v43 - *(&vFeet + 1)) * (v43 - *(&vFeet + 1))))
         + ((flMoveLength - v54) * (flMoveLength - v54))) != 0.0;
    vec.m_Extents.x = (flHalfSizea - v24) * 0.5;
    v18 = (flHalfSizea + v25) * 0.5;
    vec.m_Extents.y = (flHalfSizea - v25) * 0.5;
    x = vec.m_Extents.x;
    v40 = vec.m_Extents.y;
    v19 = (v24 + flHalfSizea) * 0.5;
    vec.m_IsSwept = v17;
    v44 = (vec.m_Extents.x * vec.m_Extents.x) + (vec.m_Extents.y * vec.m_Extents.y);
    vec.m_IsRay = ((vec.m_Extents.z * vec.m_Extents.z) + v44) < 0.000001;
    filter.m_attr.m_nInteractsWith |= v15;
    vec.m_Start.z = v54 + v16;
    vec.m_Start.x = *&vFeet + v19;
    flHalfSize = *(&vFeet + 1) + v18;
    vec.m_Start.y = *(&vFeet + 1) + v18;
    vec.m_StartOffset.x = -v19;
    v26 = -v18;
    vec.m_StartOffset.y = -v18;
    vec.m_StartOffset.z = -v16;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vec, &filter, &trace);
    v21 = v32;
    if ( trace.fraction < 1.0 || trace.startsolid )
    {
      v33 = v44;
      v35 = v40;
      v41 = flMoveLength - v54;
      v45 = v21;
      flMoveLengtha = v30;
      if ( (*(*v4 + 696LL))(v4, 1) == 0 )
      {
        v31 = v33;
        v34 = v35;
        v36 = x;
        v39 = v41;
        v42 = v45;
        v46 = flMoveLengtha;
        flMoveLengthc = (*(*v4 + 768LL))(v4);
        v22 = (*(*v4 + 792LL))(v4);
        vec.m_Start.w = 0.0;
        vec.m_Delta.z = v39;
        vec.m_Delta.x = v46;
        vec.m_IsSwept = v17;
        vec.m_Delta.w = 0.0;
        vec.m_StartOffset.w = 0.0;
        vec.m_Extents.w = 0.0;
        vec.m_Extents.y = v34;
        v23 = (flMoveLengthc + v52) * 0.5;
        vec.m_Delta.y = v42;
        vec.m_flRadius = 0.0;
        vec.m_Start.x = *&vFeet + v19;
        vec.m_Extents.z = (flMoveLengthc - v52) * 0.5;
        vec.m_Start.y = flHalfSize;
        vec.m_Extents.x = v36;
        vec.m_StartOffset.x = -v19;
        vec.m_StartOffset.y = v26;
        vec.m_IsRay = ((vec.m_Extents.z * vec.m_Extents.z) + v31) < 0.000001;
        vec.m_Start.z = v54 + v23;
        vec.m_StartOffset.z = -v23;
        filter.m_attr.m_nInteractsWith |= v22;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vec, &filter, &trace);
        if ( trace.fraction >= 1.0 && !trace.startsolid )
          (*(*v4 + 656LL))(v4, 1);
      }
    }
    else if ( (*(*v4 + 696LL))(v4, 1, trace.fraction, v30, x, 0.5, v32, flMoveLength - v54, v20, v40) != 0 )
    {
      (*(*v4 + 656LL))(v4, 0);
    }
  }
}


// CLocomotionBase::Approach  (line 167, @0x0000000002f30290, libserver.so)  // inlines: NetworkStateChanged, Set, Start, operator=<float>
// calls: IntervalTimer::Now
// callers: NextBotGroundLocomotion::Approach, PlayerLocomotion::Approach
void __fastcall CLocomotionBase::Approach(
        CLocomotionBase *const this,
        const Vector *const vGoalPos,
        double a3,
        float flGoalWeight)
{
  IntervalTimer *p_m_moveRequestTimer; // r12
  float v6; // xmm0_4
  float v7; // [rsp+Ch] [rbp-14h]

  p_m_moveRequestTimer = &this->m_moveRequestTimer;
  v6 = IntervalTimer::Now(&this->m_moveRequestTimer);
  if ( v6 != this->m_moveRequestTimer.m_timestamp.m_Value )
  {
    v7 = v6;
    (*(this->m_moveRequestTimer._vptr_IntervalTimer + 2))(p_m_moveRequestTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_moveRequestTimer.m_timestamp.m_Value = v7;
  }
}


// CLocomotionBase::DriveTo  (line 175, @0x0000000002f30300, libserver.so)  // inlines: NetworkStateChanged, Set, Start, operator=<float>
// calls: IntervalTimer::Now
// callers: NextBotGroundLocomotion::DriveTo, PlayerLocomotion::DriveTo
void __fastcall CLocomotionBase::DriveTo(CLocomotionBase *const this, const Vector *const vPos)
{
  IntervalTimer *p_m_moveRequestTimer; // r12
  float v4; // xmm0_4
  float v5; // [rsp+Ch] [rbp-14h]

  p_m_moveRequestTimer = &this->m_moveRequestTimer;
  v4 = IntervalTimer::Now(&this->m_moveRequestTimer);
  if ( v4 != this->m_moveRequestTimer.m_timestamp.m_Value )
  {
    v5 = v4;
    (*(this->m_moveRequestTimer._vptr_IntervalTimer + 2))(p_m_moveRequestTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_moveRequestTimer.m_timestamp.m_Value = v5;
  }
}


// CLocomotionBase::IsPotentiallyTraversable  (line 183, @0x0000000002f30370, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, NextBotTraversableTraceFilter, NormalizeInPlace, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=, operator-
// calls: VectorNormalize, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
bool __fastcall CLocomotionBase::IsPotentiallyTraversable(
        const CLocomotionBase *const this,
        const Vector *const vFrom,
        const Vector *const vTo,
        CLocomotionBase::TraverseWhenType when,
        float *pTOut)
{
  vec_t v9; // xmm2_4
  vec_t v10; // xmm0_4
  float v11; // xmm0_4
  const CBaseEntity *v12; // rax
  INextBot *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  float x; // xmm9_4
  float y; // xmm8_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  float z; // xmm7_4
  float v23; // xmm4_4
  float v24; // xmm2_4
  vec_t v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float probeSize; // [rsp+10h] [rbp-190h]
  float probeZa; // [rsp+14h] [rbp-18Ch]
  float v33; // [rsp+18h] [rbp-188h]
  float v34; // [rsp+18h] [rbp-188h]
  INextBot *m_bot; // [rsp+18h] [rbp-188h]
  NextBotTraversableTraceFilter_0 filter; // [rsp+20h] [rbp-180h] BYREF
  Ray_t ray; // [rsp+70h] [rbp-130h] BYREF
  Vector vAlong; // [rsp+C0h] [rbp-E0h] BYREF
  float v39; // [rsp+ECh] [rbp-B4h]
  char v40; // [rsp+F8h] [rbp-A8h]
  __int64 v41; // [rsp+128h] [rbp-78h]
  __int64 v42; // [rsp+130h] [rbp-70h]
  __int64 v43; // [rsp+138h] [rbp-68h]
  int v44; // [rsp+140h] [rbp-60h]
  __int16 v45; // [rsp+144h] [rbp-5Ch]
  char v46; // [rsp+146h] [rbp-5Ah]
  char v47; // [rsp+147h] [rbp-59h]

  v33 = vTo->z - vFrom->z;
  if ( v33 > ((*(this->_vptr_INextBotEventResponder + 100))(this) + 0.1)
    && (v9 = vTo->x - vFrom->x,
        v10 = vTo->z - vFrom->z,
        vAlong.y = vTo->y - vFrom->y,
        vAlong.x = v9,
        vAlong.z = v10,
        v11 = VectorNormalize(&vAlong),
        (v34 = vAlong.z) > (*(this->_vptr_INextBotEventResponder + 108))(this, v11)) )
  {
    if ( pTOut != 0 )
      *pTOut = 0.0;
  }
  else
  {
    v41 = 0;
    v45 = 0;
    v42 = 0;
    v43 = 0;
    v46 = 0;
    v47 = 7;
    v44 = 0;
    CGameTrace::Init(&vAlong);
    m_bot = this->m_bot;
    v12 = (*(m_bot->_vptr_INextBotEventResponder + 66))(m_bot);
    CTraceFilterSimple::CTraceFilterSimple(&filter, v12, 4, 0);
    v13 = this->m_bot;
    filter._vptr_CTraceFilter = off_47B2490;
    filter.m_bot = m_bot;
    filter.m_when = when;
    v14 = (*(v13->_vptr_INextBotEventResponder + 69))(v13);
    probeSize = 0.25 * (*(*v14 + 744LL))(v14);
    probeZa = (*(this->_vptr_INextBotEventResponder + 99))(this);
    v15 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
    LODWORD(m_bot) = (*(*v15 + 768LL))(v15);
    v16 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
    v17 = (*(*v16 + 792LL))(v16);
    x = vFrom->x;
    y = vFrom->y;
    ray.m_Start.w = 0.0;
    v20 = vTo->x;
    ray.m_Delta.w = 0.0;
    v21 = vTo->y;
    ray.m_StartOffset.w = 0.0;
    z = vFrom->z;
    ray.m_Extents.w = 0.0;
    v23 = vTo->z;
    ray.m_flRadius = 0.0;
    v24 = probeSize;
    ray.m_Delta.x = v20 - x;
    ray.m_Delta.y = v21 - y;
    ray.m_Delta.z = v23 - z;
    v25 = (v24 + v24) * 0.5;
    v26 = (*&m_bot + probeZa) * 0.5;
    v27 = (v24 - v24) * 0.5;
    ray.m_Extents.x = v25;
    ray.m_Extents.y = v25;
    ray.m_Extents.z = (*&m_bot - probeZa) * 0.5;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_Start.z = z + v26;
    ray.m_Start.x = x + v27;
    ray.m_Start.y = y + v27;
    ray.m_StartOffset.x = -v27;
    ray.m_IsRay = (((v25 * v25) + (v25 * v25)) + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    ray.m_StartOffset.y = -v27;
    ray.m_StartOffset.z = -v26;
    filter.m_attr.m_nInteractsWith |= v17;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &vAlong);
    v28 = v39;
    if ( pTOut != 0 )
      *pTOut = v39;
    if ( v28 >= 1.0 )
      return v40 ^ 1;
  }
  return 0;
}


// CLocomotionBase::HasPotentialGap  (line 236, @0x0000000002f33540, libserver.so)  // inlines: NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator+=, operator-
// calls: VectorNormalize, CLocomotionBase::IsGap
// callers: CPathOptimizerNextbot::FindNextOccludedNode, CPathFollower::IsAtGoal, CPathFollower::CheckProgress
bool __fastcall CLocomotionBase::HasPotentialGap(
        const CLocomotionBase *const this,
        const Vector *const vFrom,
        const Vector *const vDesiredTo,
        float *flTGapOut)
{
  float z; // xmm0_4
  float x; // xmm3_4
  float v10; // xmm1_4
  vec_t v11; // xmm1_4
  float v12; // xmm0_4
  __int64 v13; // rax
  float v14; // xmm0_4
  __m128i x_low; // xmm7
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // r15d
  bool result; // al
  float v20; // [rsp+Ch] [rbp-74h]
  float v21; // [rsp+10h] [rbp-70h]
  float flStep; // [rsp+14h] [rbp-6Ch]
  float flLengtha; // [rsp+18h] [rbp-68h]
  float flLength; // [rsp+18h] [rbp-68h]
  float t; // [rsp+1Ch] [rbp-64h]
  float traversableFraction; // [rsp+2Ch] [rbp-54h] BYREF
  Vector vForward; // [rsp+30h] [rbp-50h] BYREF
  Vector vPos; // [rsp+40h] [rbp-40h] BYREF

  (*(this->_vptr_INextBotEventResponder + 109))(this, vFrom, vDesiredTo, 0, &traversableFraction);
  z = vFrom->z;
  x = vFrom->x;
  v10 = vDesiredTo->z;
  vForward.y = (((vDesiredTo->y - vFrom->y) * traversableFraction) + vFrom->y) - vFrom->y;
  v11 = (((v10 - z) * traversableFraction) + z) - z;
  v12 = vDesiredTo->x;
  vForward.z = v11;
  vForward.x = (((v12 - x) * traversableFraction) + x) - x;
  flLengtha = VectorNormalize(&vForward);
  v13 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  v14 = (*(*v13 + 744LL))(v13);
  x_low = LODWORD(vForward.x);
  v16 = 0.5 * v14;
  v17 = 0.0;
  *x_low.m128i_i32 = vForward.x * v16;
  flStep = v16;
  vPos = *vFrom;
  v18 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v21 = vForward.y * v16;
  flLength = flLengtha + v16;
  v20 = v16 * vForward.z;
  if ( flLength > 0.0 )
  {
    while ( 1 )
    {
      t = v17;
      result = CLocomotionBase::IsGap(this, &vPos, &vForward);
      if ( result )
        break;
      v17 = t + flStep;
      vPos.x = v18 + vPos.x;
      vPos.y = v21 + vPos.y;
      vPos.z = v20 + vPos.z;
      if ( flLength <= (t + flStep) )
        goto LABEL_7;
    }
    if ( flTGapOut != 0 )
      *flTGapOut = (t - flStep) / flLength;
  }
  else
  {
LABEL_7:
    if ( flTGapOut != 0 )
      *flTGapOut = 1.0;
    return 0;
  }
  return result;
}


// CLocomotionBase::IsGap  (line 280, @0x0000000002f332b0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, NextBotTraceFilterIgnoreActors, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=, operator+
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CLocomotionBase::HasPotentialGap, CPathFollower::JumpOverGaps
bool __fastcall CLocomotionBase::IsGap(
        const CLocomotionBase *const this,
        const Vector *const pos,
        const Vector *const forward)
{
  __int64 v3; // r15
  __int64 v6; // rax
  const CBaseEntity *v7; // rax
  float v8; // xmm0_4
  float v9; // xmm0_4
  float x; // xmm6_4
  float y; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  bool result; // al
  float v16; // [rsp+0h] [rbp-180h]
  float v17; // [rsp+8h] [rbp-178h]
  float v18; // [rsp+Ch] [rbp-174h]
  NextBotTraceFilterIgnoreActors filter; // [rsp+10h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-130h] BYREF
  trace_t ground; // [rsp+A0h] [rbp-E0h] BYREF

  v3 = 552977;
  v6 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot, pos, forward);
  if ( v6 != 0 )
    v3 = (*(*v6 + 792LL))(v6);
  memset(&ground.m_ShapeAttributes, 0, 31);
  ground.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&ground);
  v7 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
  CTraceFilterSimple::CTraceFilterSimple(&filter, v7, 4, IgnoreActorsTraceFilterFunction);
  filter._vptr_CTraceFilter = off_47B2450;
  v8 = (*(this->_vptr_INextBotEventResponder + 100))(this);
  v16 = pos->x + 0.0;
  v17 = pos->y + 0.0;
  v18 = pos->z - v8;
  v9 = (*(this->_vptr_INextBotEventResponder + 99))(this);
  x = pos->x;
  y = pos->y;
  ray.m_IsRay = 0;
  v12 = x + 0.0;
  ray.m_Start.w = 0.0;
  v13 = y + 0.0;
  ray.m_Delta.w = 0.0;
  v14 = v9 + pos->z;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_StartOffset.x = -0.0;
  ray.m_Delta.x = v16 - v12;
  ray.m_Delta.y = v17 - v13;
  ray.m_Delta.z = v18 - v14;
  ray.m_Start.x = v12 + 0.0;
  ray.m_StartOffset.y = -0.0;
  ray.m_StartOffset.z = -0.5;
  ray.m_Extents.z = 0.5;
  ray.m_Extents.x = 1.0;
  ray.m_Extents.y = 1.0;
  filter.m_attr.m_nInteractsWith |= v3;
  ray.m_Start.z = v14 + 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.y = v13 + 0.0;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &ground);
  result = 0;
  if ( ground.fraction >= 1.0 )
    return !ground.startsolid;
  return result;
}


// CLocomotionBase::IsEntityTraversable  (line 321, @0x0000000002f2f090, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CEntityIdentity::ClassMatches, __dynamic_cast
// strings: "prop_door*", "func_door*", "func_brush"
bool __fastcall CLocomotionBase::IsEntityTraversable(
        const CLocomotionBase *const this,
        CBaseEntity *pObstacle,
        CLocomotionBase::TraverseWhenType when)
{
  char v6; // r12
  _DWORD *v7; // rax
  bool v9; // al
  float m_Value; // edx

  v6 = (*(pObstacle->_vptr_IHandleEntity + 143))(pObstacle);
  if ( v6 != 0 )
    return 0;
  if ( CEntityIdentity::ClassMatches(pObstacle->m_pEntity, "prop_door*")
    || CEntityIdentity::ClassMatches(pObstacle->m_pEntity, "func_door*") )
  {
    v7 = __dynamic_cast(pObstacle, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePropDoor, 0);
    return v7 == 0 || v7[449] != 2;
  }
  v9 = CEntityIdentity::ClassMatches(pObstacle->m_pEntity, "func_brush");
  if ( v9 )
  {
    m_Value = pObstacle[1].m_flCreateTime.m_Value;
    if ( m_Value >= 0.0 )
    {
      if ( SLODWORD(m_Value) <= 1 )
        return v9;
      if ( LODWORD(m_Value) == 2 )
        return v6;
    }
  }
  if ( when == CLocomotionBase::TraverseWhenType::IMMEDIATELY )
    return v6;
  return (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 78))(this->m_bot, pObstacle);
}


// CLocomotionBase::IsAreaTraversable  (line 369, @0x0000000002f2e700, libserver.so)  // inlines: GetTeamNumber
// calls: CNavArea::IsBlocked
bool __fastcall CLocomotionBase::IsAreaTraversable(const CLocomotionBase *const this, const CNavArea *baseArea)
{
  __int64 v3; // rax

  v3 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
  return !CNavArea::IsBlocked(baseArea, *(v3 + 383), 0);
}


// CLocomotionBase::ClearStuckStatus  (line 376, @0x0000000002f30830, libserver.so)  // inlines: IsDebugging, NetworkStateChanged, Set, Start, curtime, operator=, operator=<float>
// calls: IntervalTimer::Now, NextBotManager::IsDebugFilterMatch, DevMsg(char const*,...)
// strings: "%3.2f: ClearStuckStatus: %s %s\n"
void __fastcall CLocomotionBase::ClearStuckStatus(CLocomotionBase *const this, const char *pReasonString)
{
  vec_t v4; // xmm1_4
  float v5; // xmm0_4
  INextBot *m_bot; // r12
  const char *v7; // rax
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v9; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float v11; // [rsp+8h] [rbp-38h]
  const char *v12; // [rsp+8h] [rbp-38h]
  double v13; // [rsp+10h] [rbp-30h]

  if ( this->m_bIsStuck )
  {
    this->m_bIsStuck = 0;
    (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 11))(this->m_bot);
  }
  v13 = (*(this->_vptr_INextBotEventResponder + 98))(this);
  this->m_vStuckPos.z = v4;
  *&this->m_vStuckPos.x = v13;
  v5 = IntervalTimer::Now(&this->m_stuckTimer);
  if ( v5 != this->m_stuckTimer.m_timestamp.m_Value )
  {
    v11 = v5;
    (*(this->m_stuckTimer._vptr_IntervalTimer + 2))(&this->m_stuckTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_stuckTimer.m_timestamp.m_Value = v11;
  }
  m_bot = this->m_bot;
  if ( (g_NextBotManager.m_debugType & 0x10) != 0
    && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
    && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 16) != 0 )
  {
    v7 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 97))(this->m_bot);
    m_flCurrentTime = 0.0;
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v12 = v7;
          (m_pfnWarningFunc)(1, 0.0);
          v7 = v12;
        }
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    DevMsg("%3.2f: ClearStuckStatus: %s %s\n", m_flCurrentTime, v7, pReasonString);
  }
}


// CLocomotionBase::StuckMonitor  (line 398, @0x0000000002f33710, libserver.so)  // inlines: IsDebugging, IsElapsed, IsGreaterThen, NetworkStateChanged, QAngle, Set, Start, VectorAdd, curtime, operator+, operator=, operator=<float>
// calls: IntervalTimer::Now, CountdownTimer::Now, NextBotManager::IsDebugFilterMatch, NDebugOverlay::Cross3D, NDebugOverlay::Line, DevMsg(char const*,...), NDebugOverlay::Circle
// callers: CLocomotionBase::Update
// strings: "UN-STUCK", "%3.2f: %s STUCK at position( %3.2f, %3.2f, %3.2f )\n", "%3.2f: %s STILL STUCK\n"
void __fastcall CLocomotionBase::StuckMonitor(CLocomotionBase *const this)
{
  INextBot *m_bot; // rdi
  INextBot *v3; // r14
  INextBot *v4; // r14
  float v5; // xmm0_4
  double v6; // xmm0_8
  vec_t v7; // xmm1_4
  float v8; // xmm0_4
  double v9; // xmm0_8
  INextBot *v10; // r13
  vec_t v11; // xmm1_4
  bool v12; // zf
  float v13; // xmm0_4
  INextBot *v14; // r12
  __int64 v15; // rax
  vec_t v16; // xmm1_4
  const char *v17; // rax
  double v18; // xmm0_8
  double v19; // xmm1_8
  double v20; // xmm2_8
  double v21; // xmm3_8
  CGlobalVars *v22; // r13
  FnGlobalVarsWarningFunc v23; // rdx
  vec_t v24; // xmm0_4
  vec_t v25; // xmm3_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  vec_t v28; // xmm2_4
  const char *v29; // rax
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v31; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float y; // xmm3_4
  vec_t v34; // xmm1_4
  vec_t v35; // xmm2_4
  const char *v36; // [rsp+10h] [rbp-60h]
  double z; // [rsp+18h] [rbp-58h]
  double v38; // [rsp+18h] [rbp-58h]
  double v39; // [rsp+20h] [rbp-50h]
  float v40; // [rsp+28h] [rbp-48h]
  float v41; // [rsp+28h] [rbp-48h]
  float v42; // [rsp+28h] [rbp-48h]
  double x; // [rsp+28h] [rbp-48h]
  double v44; // [rsp+28h] [rbp-48h]
  float v45; // [rsp+28h] [rbp-48h]
  const char *v46; // [rsp+28h] [rbp-48h]
  Vector position; // [rsp+30h] [rbp-40h] BYREF
  Vector origin; // [rsp+40h] [rbp-30h] BYREF

  if ( (IntervalTimer::Now(&this->m_moveRequestTimer) - this->m_moveRequestTimer.m_timestamp.m_Value) > 0.25 )
  {
    v6 = (*(this->_vptr_INextBotEventResponder + 98))(this);
    *&origin.x = v6;
    origin.z = v7;
    this->m_vStuckPos.z = v7;
    this->m_vStuckPos.x = *&v6;
    this->m_vStuckPos.y = origin.y;
  }
  else
  {
    m_bot = this->m_bot;
    if ( this->m_bIsStuck )
    {
      if ( (*(m_bot->_vptr_INextBotEventResponder + 91))(m_bot, &this->m_vStuckPos, 100.0) != 0 )
      {
        (*(this->_vptr_INextBotEventResponder + 112))(this, "UN-STUCK");
      }
      else if ( CountdownTimer::Now(&this->m_stillStuckTimer) >= this->m_stillStuckTimer.m_timestamp.m_Value )
      {
        v13 = CountdownTimer::Now(&this->m_stillStuckTimer) + 1.0;
        if ( v13 != this->m_stillStuckTimer.m_timestamp.m_Value )
        {
          v45 = v13;
          (*(this->m_stillStuckTimer._vptr_CountdownTimer + 2))(
            &this->m_stillStuckTimer,
            12,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL);
          this->m_stillStuckTimer.m_timestamp.m_Value = v45;
        }
        if ( this->m_stillStuckTimer.m_duration.m_Value != 1.0 )
        {
          (*(this->m_stillStuckTimer._vptr_CountdownTimer + 2))(&this->m_stillStuckTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_stillStuckTimer.m_duration.m_Value = 1.0;
        }
        v14 = this->m_bot;
        if ( (g_NextBotManager.m_debugType & 0x10) != 0 )
        {
          if ( NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
            && (*(v14->_vptr_INextBotEventResponder + 96))(v14, 16) != 0 )
          {
            v29 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 97))(this->m_bot);
            m_flCurrentTime = 0.0;
            v31 = gpGlobals;
            if ( gpGlobals != 0 )
            {
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                if ( m_pfnWarningFunc != 0 )
                {
                  v46 = v29;
                  (m_pfnWarningFunc)(1, 0.0);
                  v29 = v46;
                }
              }
              m_flCurrentTime = v31->m_flCurrentTime;
            }
            DevMsg("%3.2f: %s STILL STUCK\n", m_flCurrentTime, v29);
            y = this->m_vStuckPos.y;
            origin.y = 0.0;
            origin.z = 0.0;
            v34 = this->m_vStuckPos.x + 0.0;
            v35 = this->m_vStuckPos.z + 5.0;
            origin.x = -90.0;
            position.x = v34;
            position.y = y + 0.0;
            position.z = v35;
            NDebugOverlay::Circle(&position, &origin, 5.0, 0xFFu, 0, 0, 255, 1.0, 1);
          }
          v14 = this->m_bot;
        }
        (*(v14->_vptr_INextBotEventResponder + 10))(v14);
      }
      return;
    }
    if ( (*(m_bot->_vptr_INextBotEventResponder + 91))(m_bot, &this->m_vStuckPos, 100.0) == 0 )
    {
      v3 = this->m_bot;
      if ( (g_NextBotManager.m_debugType & 0x10) != 0
        && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
        && (*(v3->_vptr_INextBotEventResponder + 96))(v3, 16) != 0 )
      {
        v15 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
        *&origin.x = (*(*v15 + 496LL))(v15);
        origin.z = v16;
        NDebugOverlay::Line(&origin, &this->m_vStuckPos, 0xFFu, 0, 0xFFu, 1, 0.1);
      }
      v40 = (*(this->_vptr_INextBotEventResponder + 80))(this);
      if ( (IntervalTimer::Now(&this->m_stuckTimer) - this->m_stuckTimer.m_timestamp.m_Value) > (100.0
                                                                                               / ((v40 * 0.1) + 0.1)) )
      {
        this->m_bIsStuck = 1;
        v4 = this->m_bot;
        if ( (g_NextBotManager.m_debugType & 0x100) != 0
          && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
          && (*(v4->_vptr_INextBotEventResponder + 96))(v4, 256) != 0 )
        {
          z = this->m_vStuckPos.z;
          v39 = this->m_vStuckPos.y;
          x = this->m_vStuckPos.x;
          v17 = (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 97))(this->m_bot);
          v18 = 0.0;
          v19 = x;
          v20 = v39;
          v21 = z;
          v22 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              v23 = gpGlobals->m_pfnWarningFunc;
              if ( v23 != 0 )
              {
                v36 = v17;
                v38 = x;
                v44 = v21;
                (v23)(1, 0.0);
                v17 = v36;
                v19 = v38;
                v20 = v39;
                v21 = v44;
              }
            }
            v18 = v22->m_flCurrentTime;
          }
          DevMsg("%3.2f: %s STUCK at position( %3.2f, %3.2f, %3.2f )\n", v18, v17, v19, v20, v21);
          v24 = this->m_vStuckPos.z + 15.0;
          v25 = this->m_vStuckPos.x + 0.0;
          position.y = this->m_vStuckPos.y + 0.0;
          position.z = v24;
          origin.y = 0.0;
          origin.z = 0.0;
          position.x = v25;
          origin.x = -90.0;
          NDebugOverlay::Circle(&position, &origin, 3.0, 0xFFu, 0xFFu, 0, 255, 1.0, 1);
          v26 = this->m_vStuckPos.z;
          v27 = this->m_vStuckPos.y;
          origin.y = 0.0;
          origin.z = 0.0;
          v28 = this->m_vStuckPos.x + 0.0;
          position.z = v26 + 5.0;
          origin.x = -90.0;
          position.y = v27 + 0.0;
          position.x = v28;
          NDebugOverlay::Circle(&position, &origin, 5.0, 0xFFu, 0, 0, 255, 10000000.0, 1);
        }
        v5 = IntervalTimer::Now(&this->m_stuckTimer);
        if ( v5 != this->m_stuckTimer.m_timestamp.m_Value )
        {
          v42 = v5;
          (*(this->m_stuckTimer._vptr_IntervalTimer + 2))(&this->m_stuckTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_stuckTimer.m_timestamp.m_Value = v42;
        }
        (*(this->m_bot->INextBotComponent::_vptr_INextBotEventResponder + 10))(this->m_bot);
      }
      return;
    }
    v9 = (*(this->_vptr_INextBotEventResponder + 98))(this);
    *&origin.x = v9;
    v10 = this->m_bot;
    origin.z = v11;
    this->m_vStuckPos.z = v11;
    v12 = (g_NextBotManager.m_debugType & 0x10) == 0;
    this->m_vStuckPos.x = *&v9;
    this->m_vStuckPos.y = origin.y;
    if ( !v12
      && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, v10)
      && (*(v10->_vptr_INextBotEventResponder + 96))(v10, 16) != 0 )
    {
      NDebugOverlay::Cross3D(&this->m_vStuckPos, 3.0, 0xFFu, 0, 0xFFu, 1, 3.0);
    }
  }
  v8 = IntervalTimer::Now(&this->m_stuckTimer);
  if ( v8 != this->m_stuckTimer.m_timestamp.m_Value )
  {
    v41 = v8;
    (*(this->m_stuckTimer._vptr_IntervalTimer + 2))(&this->m_stuckTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_stuckTimer.m_timestamp.m_Value = v41;
  }
}


