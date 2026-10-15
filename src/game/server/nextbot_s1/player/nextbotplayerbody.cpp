
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// PressFireButtonReply::OnSuccess  (line 33, @0x0000000002f41860, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'INextBotPlayerInput
void __fastcall PressFireButtonReply::OnSuccess(PressFireButtonReply *const this, INextBot *pBot)
{
  const void *v2; // rax
  void (__fastcall ***v3)(_QWORD, float); // rax

  v2 = (*(pBot->_vptr_INextBotEventResponder + 66))(pBot);
  if ( v2 != 0 )
  {
    v3 = __dynamic_cast(v2, &`typeinfo for'CBaseCombatCharacter, &`typeinfo for'INextBotPlayerInput, -2);
    if ( v3 != 0 )
      (**v3)(v3, -1.0);
  }
}


// PressAltFireButtonReply::OnSuccess  (line 47, @0x0000000002f418c0, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'INextBotPlayerInput
void __fastcall PressAltFireButtonReply::OnSuccess(PressAltFireButtonReply *const this, INextBot *pBot)
{
  const void *v2; // rax
  void *v3; // rax

  v2 = (*(pBot->_vptr_INextBotEventResponder + 66))(pBot);
  if ( v2 != 0 )
  {
    v3 = __dynamic_cast(v2, &`typeinfo for'CBaseCombatCharacter, &`typeinfo for'INextBotPlayerInput, -2);
    if ( v3 != 0 )
      (*(*v3 + 32LL))(v3, -1.0);
  }
}


// PressJumpButtonReply::OnSuccess  (line 61, @0x0000000002f41920, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'INextBotPlayerInput
void __fastcall PressJumpButtonReply::OnSuccess(PressJumpButtonReply *const this, INextBot *pBot)
{
  const void *v2; // rax
  void *v3; // rax

  v2 = (*(pBot->_vptr_INextBotEventResponder + 66))(pBot);
  if ( v2 != 0 )
  {
    v3 = __dynamic_cast(v2, &`typeinfo for'CBaseCombatCharacter, &`typeinfo for'INextBotPlayerInput, -2);
    if ( v3 != 0 )
      (*(*v3 + 144LL))(v3, -1.0);
  }
}


// PlayerBody::PlayerBody  (line 72, @0x0000000002f43eb0, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, IBody, IntervalTimer, ~IBody, ~INextBotComponent, ~INextBotEventResponder
// calls: INextBotComponent::INextBotComponent, CountdownTimer::CountdownTimer, _Unwind_Resume
void __fastcall PlayerBody::PlayerBody(PlayerBody *const this, INextBot *pBot)
{
  INextBotComponent::INextBotComponent(this, pBot);
  this->m_hLookAtSubject.m_Index = -1;
  this->_vptr_INextBotEventResponder = &off_47B6810;
  CountdownTimer::CountdownTimer(&this->m_lookAtTrackingTimer);
  CountdownTimer::CountdownTimer(&this->m_lookAtExpireTimer);
  this->m_lookAtDurationTimer.m_timestamp.m_Value = -1.0;
  this->m_lookAtDurationTimer._vptr_IntervalTimer = off_3FD0350;
  this->m_headSteadyTimer._vptr_IntervalTimer = off_3FD0350;
  this->m_headSteadyTimer.m_timestamp.m_Value = -1.0;
  CountdownTimer::CountdownTimer(&this->m_anchorRepositionTimer);
  this->m_pPlayer = (*(pBot->_vptr_INextBotEventResponder + 66))(pBot);
}


// PlayerBody::~PlayerBody  (line 79, @0x0000000002f41580, libserver.so)  // inlines: ~IBody, ~INextBotComponent, ~INextBotEventResponder
void __fastcall PlayerBody::~PlayerBody(PlayerBody *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// PlayerBody::~PlayerBody  (line 79, @0x0000000002f41840, libserver.so)  // inlines: ~IBody, ~INextBotComponent, ~INextBotEventResponder, ~PlayerBody
// calls: operator delete
void __fastcall PlayerBody::~PlayerBody(PlayerBody *const this)
{
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// PlayerBody::Reset  (line 88, @0x0000000002f41ee0, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, operator=, operator=<float>
void __fastcall PlayerBody::Reset(PlayerBody *const this)
{
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  bool v5; // zf

  this->m_posture = IBody::PostureType::STAND;
  this->m_hLookAtSubject.m_Index = -1;
  this->m_pLookAtReplyWhenAimed = 0;
  z = vec3_origin.z;
  x = vec3_origin.x;
  this->m_vLookAtPos.z = z;
  y = vec3_origin.y;
  this->m_lookAtVelocity.z = z;
  this->m_vLookAtPos.x = x;
  v5 = this->m_lookAtExpireTimer.m_timestamp.m_Value == -1.0;
  this->m_vLookAtPos.y = y;
  this->m_lookAtVelocity.x = x;
  this->m_lookAtVelocity.y = y;
  if ( !v5 )
  {
    (*(this->m_lookAtExpireTimer._vptr_CountdownTimer + 2))(&this->m_lookAtExpireTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_lookAtExpireTimer.m_timestamp.m_Value = -1.0;
  }
  v5 = this->m_lookAtDurationTimer.m_timestamp.m_Value == -1.0;
  this->m_LookAtPriority = CHeadLookParams::HeadLookPriority_t::BORING;
  if ( !v5 )
  {
    (*(this->m_lookAtDurationTimer._vptr_IntervalTimer + 2))(
      &this->m_lookAtDurationTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_lookAtDurationTimer.m_timestamp.m_Value = -1.0;
  }
  v5 = this->m_headSteadyTimer.m_timestamp.m_Value == -1.0;
  this->m_bIsSightedIn = 0;
  this->m_bHasBeenSightedIn = 0;
  if ( !v5 )
  {
    (*(this->m_headSteadyTimer._vptr_IntervalTimer + 2))(&this->m_headSteadyTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_headSteadyTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_flHeadEaseInTime = 0.25;
  this->m_qPriorAngles = vec3_angle;
}


// PlayerBody::Upkeep  (line 116, @0x0000000002f42930, libserver.so)  // inlines: Color, DotProduct, Get, GetAbsVelocity, GetBool, GetElapsedTime, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, HasStarted, IndexToIdentity, Invalidate, IsDebugging, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, NormalizeInPlace, RAD2DEG, RemapVal, Set, SetColor, Start, VectorAdd, VectorMultiply, VectorSubtract, abs<float>, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator+=, operator-, operator-=, operator=, operator=<float>, operator><float>
// calls: AngleDiff, acosf, CountdownTimer::Now, VectorNormalize, VectorAngles, sin, IntervalTimer::Now, ApproachAngle, AngleNormalize, CBasePlayer::SnapEyeAngles, NextBotManager::IsDebugFilterMatch, NDebugOverlay::Circle (19 total)
// strings: "%3.2f: %s Look at SIGHTED IN\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall PlayerBody::Upkeep(PlayerBody *const this)
{
  CBasePlayer *v2; // r13
  float *v3; // rax
  __int64 v4; // rsi
  float v5; // xmm0_4
  float v6; // xmm2_4
  double v7; // xmm0_8
  char v8; // r14
  INextBot *m_bot; // rdx
  bool v10; // zf
  float *v11; // rax
  float m_Value; // xmm1_4
  float v13; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  float *v17; // rax
  vec_t v18; // xmm2_4
  vec_t v19; // xmm0_4
  __int64 v20; // rsi
  INextBot *v21; // rdx
  float v22; // xmm1_4
  INextBotReply *m_pLookAtReplyWhenAimed; // rdi
  double v24; // xmm0_8
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float m_flHeadEaseInTime; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  vec_t v31; // xmm1_4
  float v32; // xmm1_4
  bool IsDebugFilterMatch; // al
  float v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm0_4
  double v37; // xmm0_8
  vec_t v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  bool v43; // al
  float *v44; // rax
  vec_t v45; // xmm2_4
  vec_t v46; // xmm3_4
  vec_t v47; // xmm0_4
  int (**vptr_INextBotEventResponder)(...); // rax
  const Vector *v49; // rax
  int v50; // xmm0_4
  int v51; // r14d
  const Vector *v52; // rax
  float v53; // xmm0_4
  INextBot *v54; // r14
  bool v55; // al
  double v56; // xmm0_8
  char v57; // al
  double v58; // xmm0_8
  const char *v59; // r14
  float v60; // xmm0_4
  vec_t v61; // xmm0_4
  vec_t v62; // xmm2_4
  __int64 v63; // rax
  float v64; // xmm1_4
  float x; // xmm3_4
  float y; // xmm0_4
  float v67; // xmm2_4
  float v68; // xmm0_4
  float v69; // xmm1_4
  float v70; // xmm7_4
  float v71; // xmm1_4
  float v72; // xmm2_4
  vec_t v73; // xmm3_4
  vec_t v74; // xmm0_4
  vec_t v75; // xmm1_4
  double v76; // xmm0_8
  double v77; // xmm1_8
  double v78; // xmm2_8
  double v79; // xmm3_8
  double v80; // xmm4_8
  double v81; // xmm5_8
  double v82; // xmm6_8
  float v83; // [rsp+Ch] [rbp-B4h]
  __int64 errorVel; // [rsp+10h] [rbp-B0h]
  float errorVelc; // [rsp+10h] [rbp-B0h]
  float errorVelb; // [rsp+10h] [rbp-B0h]
  vec_t errorVela; // [rsp+10h] [rbp-B0h]
  INextBot *flThickness; // [rsp+18h] [rbp-A8h]
  float flThicknessb; // [rsp+18h] [rbp-A8h]
  CountdownTimer *flThicknessa; // [rsp+18h] [rbp-A8h]
  QAngle *viewAngles; // [rsp+20h] [rbp-A0h]
  float viewAnglesa; // [rsp+20h] [rbp-A0h]
  CEntityInstance *g; // [rsp+28h] [rbp-98h]
  float trackingInterval; // [rsp+30h] [rbp-90h]
  float trackingIntervala; // [rsp+30h] [rbp-90h]
  float trackingIntervalb; // [rsp+30h] [rbp-90h]
  float trackingIntervalc; // [rsp+30h] [rbp-90h]
  float v98; // [rsp+34h] [rbp-8Ch]
  float radius; // [rsp+38h] [rbp-88h]
  INextBot *radiusa; // [rsp+38h] [rbp-88h]
  float radiusb; // [rsp+38h] [rbp-88h]
  float radiusc; // [rsp+38h] [rbp-88h]
  float approachRate; // [rsp+40h] [rbp-80h]
  float approachRatea; // [rsp+40h] [rbp-80h]
  float approachRated; // [rsp+40h] [rbp-80h]
  float approachRateb; // [rsp+40h] [rbp-80h]
  float approachRatee; // [rsp+40h] [rbp-80h]
  float approachRatef; // [rsp+40h] [rbp-80h]
  float approachRateg; // [rsp+40h] [rbp-80h]
  float approachRatec; // [rsp+40h] [rbp-80h]
  float v111; // [rsp+44h] [rbp-7Ch]
  float target; // [rsp+48h] [rbp-78h]
  float targeta; // [rsp+48h] [rbp-78h]
  float flDeltaT; // [rsp+4Ch] [rbp-74h]
  float flDeltaTa; // [rsp+4Ch] [rbp-74h]
  float flDeltaTb; // [rsp+4Ch] [rbp-74h]
  Vector to; // [rsp+50h] [rbp-70h] BYREF
  QAngle desiredAngles; // [rsp+60h] [rbp-60h] BYREF
  Vector errorVector; // [rsp+70h] [rbp-50h] BYREF
  Color v120; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v121; // [rsp+88h] [rbp-38h]

  v121 = __readfsqword(0x28u);
  if ( bot_mimic.m_pParent->m_Value.m_nValue == 0 )
  {
    flDeltaT = gpGlobals->frametime;
    if ( flDeltaT >= 0.0000099999997 )
    {
      v2 = (*(this->m_bot->IBody::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
      v3 = (*(v2->_vptr_IHandleEntity + 165))(v2);
      v111 = *v3 + vec3_angle.x;
      target = v3[1] + vec3_angle.y;
      approachRate = v3[2] + vec3_angle.z;
      v5 = AngleDiff(this->m_qPriorAngles.x, target);
      if ( v5 < 0.0 )
        v5 = -v5;
      if ( v5 > (flDeltaT * nb_head_aim_steady_max_rate.m_pParent->m_Value.m_fValue) )
        goto LABEL_7;
      v39 = AngleDiff(this->m_qPriorAngles.y, v6);
      if ( v39 < 0.0 )
        v39 = -v39;
      if ( v39 > (flDeltaT * nb_head_aim_steady_max_rate.m_pParent->m_Value.m_fValue) )
      {
LABEL_7:
        *&v7 = 3212836864LL;
        if ( this->m_headSteadyTimer.m_timestamp.m_Value != -1.0 )
        {
          (*(this->m_headSteadyTimer._vptr_IntervalTimer + 2))(
            &this->m_headSteadyTimer,
            8,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL,
            -1.0);
          this->m_headSteadyTimer.m_timestamp.m_Value = -1.0;
        }
        v8 = 0;
      }
      else
      {
        *&v7 = LODWORD(this->m_headSteadyTimer.m_timestamp.m_Value);
        if ( *&v7 <= 0.0 )
        {
          *&v7 = IntervalTimer::Now(&this->m_headSteadyTimer);
          if ( *&v7 != this->m_headSteadyTimer.m_timestamp.m_Value )
          {
            radiusc = *&v7;
            (*(this->m_headSteadyTimer._vptr_IntervalTimer + 2))(
              &this->m_headSteadyTimer,
              8,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL);
            *&v7 = LODWORD(radiusc);
            this->m_headSteadyTimer.m_timestamp.m_Value = radiusc;
          }
        }
        v8 = 1;
      }
      m_bot = this->m_bot;
      if ( (g_NextBotManager.m_debugType & 2) != 0 )
      {
        radiusa = this->m_bot;
        IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, radiusa);
        m_bot = radiusa;
        if ( IsDebugFilterMatch
          && (*(radiusa->_vptr_INextBotEventResponder + 96))(radiusa, 2) != 0
          && (*(this->_vptr_INextBotEventResponder + 72))(this) != 0 )
        {
          v34 = (*(this->_vptr_INextBotEventResponder + 73))(this);
          v35 = 10.0;
          v36 = v34 / 3.0;
          if ( v36 <= 1.0 )
          {
            v35 = 0.0;
            if ( v36 >= 0.0 )
              v35 = 10.0 * v36;
          }
          radiusb = v35;
          v37 = (*(v2->_vptr_IHandleEntity + 164))(v2);
          errorVector.z = v38;
          *&errorVector.x = v37;
          NDebugOverlay::Circle(&errorVector, radiusb, 0, 255, 0, 255, 1, flDeltaT + flDeltaT);
        }
      }
      v10 = !this->m_bHasBeenSightedIn;
      this->m_qPriorAngles.x = v111;
      this->m_qPriorAngles.y = target;
      this->m_qPriorAngles.z = approachRate;
      if ( v10
        || (*&v7 = CountdownTimer::Now(&this->m_lookAtExpireTimer), *&v7 < this->m_lookAtExpireTimer.m_timestamp.m_Value) )
      {
        v11 = (*(this->_vptr_INextBotEventResponder + 68))(this, v4, m_bot, v7);
        v98 = *v11;
        radius = v11[1];
        approachRatea = v11[2];
        if ( (acosf(
                ((this->m_anchorForward.x * *v11) + (this->m_anchorForward.y * radius))
              + (this->m_anchorForward.z * approachRatea))
            * 57.295776) > nb_head_aim_resettle_angle.m_pParent->m_Value.m_fValue )
        {
          flDeltaTa = RandomFloat(COERCE_DOUBLE(1063675494), 1.1)
                    * nb_head_aim_resettle_time.m_pParent->m_Value.m_fValue;
          v40 = CountdownTimer::Now(&this->m_anchorRepositionTimer);
          v41 = flDeltaTa;
          v42 = v40 + flDeltaTa;
          if ( v42 != this->m_anchorRepositionTimer.m_timestamp.m_Value )
          {
            targeta = v42;
            (*(this->m_anchorRepositionTimer._vptr_CountdownTimer + 2))(
              &this->m_anchorRepositionTimer,
              12,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL);
            v41 = flDeltaTa;
            this->m_anchorRepositionTimer.m_timestamp.m_Value = targeta;
          }
          if ( v41 != this->m_anchorRepositionTimer.m_duration.m_Value )
          {
            flDeltaTb = v41;
            (*(this->m_anchorRepositionTimer._vptr_CountdownTimer + 2))(
              &this->m_anchorRepositionTimer,
              8,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL);
            this->m_anchorRepositionTimer.m_duration.m_Value = flDeltaTb;
          }
          this->m_anchorForward.x = v98;
          this->m_anchorForward.y = radius;
          this->m_anchorForward.z = approachRatea;
        }
        else
        {
          m_Value = this->m_anchorRepositionTimer.m_timestamp.m_Value;
          if ( m_Value <= 0.0
            || (v13 = CountdownTimer::Now(&this->m_anchorRepositionTimer),
                m_Value = this->m_anchorRepositionTimer.m_timestamp.m_Value,
                v13 >= m_Value) )
          {
            if ( m_Value != -1.0 )
            {
              (*(this->m_anchorRepositionTimer._vptr_CountdownTimer + 2))(
                &this->m_anchorRepositionTimer,
                12,
                0xFFFFFFFFLL,
                0xFFFFFFFFLL);
              this->m_anchorRepositionTimer.m_timestamp.m_Value = -1.0;
            }
            m_Index = this->m_hLookAtSubject.m_Index;
            if ( m_Index + 2 > 1
              && (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLookAtSubject.m_Index) >> 9)
                                                                       & 0x3F]) != 0 )
            {
              g = 0;
              v16 = &v15[this->m_hLookAtSubject.m_Index & 0x1FF];
              if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
              {
                g = v16->m_pInstance;
                if ( v16->m_pInstance != 0 )
                {
                  trackingInterval = (*(this->_vptr_INextBotEventResponder + 74))(this);
                  flThicknessa = &this->m_lookAtTrackingTimer;
                  if ( CountdownTimer::Now(&this->m_lookAtTrackingTimer) >= this->m_lookAtTrackingTimer.m_timestamp.m_Value )
                  {
                    if ( (*(g->_vptr_IHandleEntity + 147))(g) != 0 )
                    {
                      errorVel = (*(this->m_bot->IBody::INextBotComponent::_vptr_INextBotEventResponder + 70))(this->m_bot);
                      viewAngles = *(*errorVel + 568LL);
                      v63 = (*(g->_vptr_IHandleEntity + 147))(g);
                      *&errorVector.x = (viewAngles)(errorVel, this->m_bot, v63);
                      x = errorVector.x;
                      errorVector.z = v64;
                    }
                    else
                    {
                      *&errorVector.x = (*(g->_vptr_IHandleEntity + 62))(g);
                      errorVector.z = v64;
                      x = errorVector.x;
                    }
                    y = errorVector.y;
                    if ( (BYTE5(g[11].m_CScriptComponent) & 0x10) != 0 )
                    {
                      v83 = x;
                      errorVela = errorVector.y;
                      viewAnglesa = v64;
                      CBaseEntity::CalcAbsoluteVelocity(g);
                      x = v83;
                      y = errorVela;
                      v64 = viewAnglesa;
                    }
                    v67 = (*&g[9].m_hPrivateScope.m_hScope * trackingInterval) + y;
                    v68 = (*(&g[9].m_hPrivateScope.m_hScope + 1) * trackingInterval) + v64;
                    v69 = *(&g[9].m_pEntity + 1);
                    errorVector.y = v67 - this->m_vLookAtPos.y;
                    errorVector.z = v68 - this->m_vLookAtPos.z;
                    errorVector.x = ((v69 * trackingInterval) + x) - this->m_vLookAtPos.x;
                    trackingIntervala = VectorNormalize(&errorVector);
                    v70 = fmaxf(flDeltaT, (*(this->_vptr_INextBotEventResponder + 75))(this));
                    v71 = trackingIntervala / v70;
                    v72 = v70;
                    if ( (BYTE5(g[11].m_CScriptComponent) & 0x10) != 0 )
                    {
                      errorVelb = trackingIntervala / v70;
                      trackingIntervalc = v70;
                      CBaseEntity::CalcAbsoluteVelocity(g);
                      v71 = errorVelb;
                      v72 = trackingIntervalc;
                    }
                    v73 = (errorVector.y * v71) + *&g[9].m_hPrivateScope.m_hScope;
                    v74 = (errorVector.z * v71) + *(&g[9].m_hPrivateScope.m_hScope + 1);
                    v75 = (v71 * errorVector.x) + *(&g[9].m_pEntity + 1);
                    this->m_lookAtVelocity.y = v73;
                    this->m_lookAtVelocity.z = v74;
                    this->m_lookAtVelocity.x = v75;
                    trackingIntervalb = v72 * RandomFloat(COERCE_DOUBLE(1061997773), 1.2);
                    *&v76 = CountdownTimer::Now(flThicknessa) + trackingIntervalb;
                    if ( *&v76 != this->m_lookAtTrackingTimer.m_timestamp.m_Value )
                    {
                      errorVelc = *&v76;
                      (*(this->m_lookAtTrackingTimer._vptr_CountdownTimer + 2))(
                        flThicknessa,
                        12,
                        0xFFFFFFFFLL,
                        0xFFFFFFFFLL);
                      *&v76 = LODWORD(errorVelc);
                      this->m_lookAtTrackingTimer.m_timestamp.m_Value = errorVelc;
                    }
                    if ( trackingIntervalb != this->m_lookAtTrackingTimer.m_duration.m_Value )
                    {
                      (*(this->m_lookAtTrackingTimer._vptr_CountdownTimer + 2))(
                        flThicknessa,
                        8,
                        0xFFFFFFFFLL,
                        0xFFFFFFFFLL,
                        v76,
                        v77,
                        v78,
                        v79,
                        v80,
                        v81,
                        v82,
                        trackingIntervalb);
                      this->m_lookAtTrackingTimer.m_duration.m_Value = trackingIntervalb;
                    }
                  }
                  v61 = (this->m_lookAtVelocity.z * flDeltaT) + this->m_vLookAtPos.z;
                  v62 = (flDeltaT * this->m_lookAtVelocity.x) + this->m_vLookAtPos.x;
                  this->m_vLookAtPos.y = (this->m_lookAtVelocity.y * flDeltaT) + this->m_vLookAtPos.y;
                  this->m_vLookAtPos.z = v61;
                  this->m_vLookAtPos.x = v62;
                }
              }
            }
            else
            {
              g = 0;
            }
            v17 = (*(this->_vptr_INextBotEventResponder + 67))(this);
            v18 = this->m_vLookAtPos.x - *v17;
            v19 = this->m_vLookAtPos.z - v17[2];
            to.y = this->m_vLookAtPos.y - v17[1];
            to.x = v18;
            to.z = v19;
            VectorNormalize(&to);
            VectorAngles(&to, &desiredAngles);
            v21 = this->m_bot;
            if ( (g_NextBotManager.m_debugType & 2) != 0 )
            {
              flThickness = this->m_bot;
              v43 = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, flThickness);
              v21 = flThickness;
              if ( v43 && (*(flThickness->_vptr_INextBotEventResponder + 96))(flThickness, 2) != 0 )
              {
                v44 = (*(this->_vptr_INextBotEventResponder + 67))(this);
                v45 = (approachRatea * 100.0) + v44[2];
                v46 = (radius * 100.0) + v44[1];
                v47 = (100.0 * v98) + *v44;
                vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
                errorVector.z = v45;
                errorVector.y = v46;
                errorVector.x = v47;
                v49 = (vptr_INextBotEventResponder[67])(this);
                NDebugOverlay::Line(v49, &errorVector, 255, 255, 0, 0, flDeltaT + flDeltaT);
                v50 = 1077936128;
                if ( v8 != 0 )
                  v50 = 0x40000000;
                flThicknessb = *&v50;
                v51 = -this->m_bIsSightedIn;
                v52 = (*(this->_vptr_INextBotEventResponder + 67))(this);
                NDebugOverlay::HorzArrow(
                  v52,
                  &this->m_vLookAtPos,
                  flThicknessb,
                  v51,
                  -(g != 0),
                  255,
                  255,
                  0,
                  flDeltaT + flDeltaT);
              }
            }
            v22 = ((v98 * to.x) + (radius * to.y)) + (approachRatea * to.z);
            if ( v22 <= 0.98000002 )
            {
              this->m_bIsSightedIn = 0;
            }
            else
            {
              v10 = !this->m_bHasBeenSightedIn;
              this->m_bIsSightedIn = 1;
              if ( v10 )
              {
                this->m_bHasBeenSightedIn = 1;
                v54 = this->m_bot;
                if ( (g_NextBotManager.m_debugType & 2) != 0 )
                {
                  approachRatec = v22;
                  v55 = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot);
                  v22 = approachRatec;
                  if ( v55 )
                  {
                    v57 = (*(v54->_vptr_INextBotEventResponder + 96))(v54, 2, v56, approachRatec);
                    v22 = approachRatec;
                    if ( v57 != 0 )
                    {
                      v59 = (*(this->m_pPlayer->_vptr_IHandleEntity + 106))(this->m_pPlayer, v58, approachRatec);
                      v60 = CGlobalVarsBase::curtime(gpGlobals, 0);
                      v120._color[0] = -1;
                      v120._color[1] = 100;
                      v120._color[2] = 0;
                      v120._color[3] = -1;
                      ConColorMsg(&v120, "%3.2f: %s Look at SIGHTED IN\n", v60, v59);
                      v22 = approachRatec;
                    }
                  }
                }
              }
              m_pLookAtReplyWhenAimed = this->m_pLookAtReplyWhenAimed;
              if ( m_pLookAtReplyWhenAimed != 0 )
              {
                approachRated = v22;
                (*(m_pLookAtReplyWhenAimed->_vptr_INextBotReply + 1))(m_pLookAtReplyWhenAimed, this->m_bot, v21);
                v22 = approachRated;
                this->m_pLookAtReplyWhenAimed = 0;
              }
            }
            approachRateb = v22;
            v24 = (*(this->_vptr_INextBotEventResponder + 76))(this, v20, v21);
            v25 = *&v24;
            if ( approachRateb > 0.69999999 )
              v25 = *&v24 * sin((((((approachRateb - 0.69999999) * -0.98000002) / 0.30000001) + 1.0) * 1.5700001));
            if ( this->m_lookAtDurationTimer.m_timestamp.m_Value <= 0.0 )
            {
              v27 = 99999.898;
            }
            else
            {
              approachRatee = v25;
              v26 = IntervalTimer::Now(&this->m_lookAtDurationTimer);
              v25 = approachRatee;
              v27 = v26 - this->m_lookAtDurationTimer.m_timestamp.m_Value;
            }
            m_flHeadEaseInTime = this->m_flHeadEaseInTime;
            if ( m_flHeadEaseInTime > v27 )
            {
              if ( this->m_lookAtDurationTimer.m_timestamp.m_Value > 0.0 )
              {
                approachRateg = v25;
                v53 = IntervalTimer::Now(&this->m_lookAtDurationTimer);
                v25 = approachRateg;
                m_flHeadEaseInTime = this->m_flHeadEaseInTime;
                v29 = v53 - this->m_lookAtDurationTimer.m_timestamp.m_Value;
              }
              else
              {
                v29 = 99999.898;
              }
              v25 = v25 * (v29 / m_flHeadEaseInTime);
            }
            approachRatef = v25;
            errorVector.y = ApproachAngle(target, flDeltaT * v25, v25);
            v30 = ApproachAngle(v111, flDeltaT * (approachRatef * 0.5), approachRatef * 0.5);
            v31 = errorVector.y - vec3_angle.y;
            errorVector.x = v30 - vec3_angle.x;
            errorVector.y = v31;
            errorVector.z = 0.0 - vec3_angle.z;
            errorVector.x = AngleNormalize(errorVector.z);
            errorVector.y = AngleNormalize(v32);
            CBasePlayer::SnapEyeAngles(v2, &errorVector);
          }
        }
      }
    }
  }
}


// PlayerBody::SetPosition  (line 325, @0x0000000002f41a60, libserver.so)
// calls: CBaseEntity::SetAbsOrigin
bool __fastcall PlayerBody::SetPosition(PlayerBody *const this, const Vector *const pos)
{
  CBaseEntity::SetAbsOrigin(this->m_pPlayer, pos);
  return 1;
}


// PlayerBody::GetEyePosition  (line 333, @0x0000000002f41590, libserver.so)  // inlines: operator=
const Vector *__fastcall PlayerBody::GetEyePosition(const PlayerBody *const this)
{
  double v2; // xmm0_8
  vec_t v4; // xmm1_4

  v2 = (*(this->m_pPlayer->_vptr_IHandleEntity + 164))(this->m_pPlayer);
  this->m_vEyePos.z = v4;
  *&this->m_vEyePos.x = v2;
  return &this->m_vEyePos;
}


// PlayerBody::GetEntity  (line 341, @0x0000000002f415e0, libserver.so)
CBaseEntity *__fastcall PlayerBody::GetEntity(PlayerBody *const this)
{
  return this->m_pPlayer;
}


// PlayerBody::GetViewVector  (line 348, @0x0000000002f41a80, libserver.so)
// calls: CBasePlayer::EyeVectors
const Vector *__fastcall PlayerBody::GetViewVector(const PlayerBody *const this)
{
  Vector *p_m_vViewVector; // rbx

  p_m_vViewVector = &this->m_vViewVector;
  CBasePlayer::EyeVectors(this->m_pPlayer, &this->m_vViewVector, 0, 0);
  return p_m_vViewVector;
}


// PlayerBody::AimHeadTowards  (line 356, @0x0000000002f421a0, libserver.so)  // inlines: Color, GetFloat, IsDebugging, IsElapsed, IsLengthLessThan, LengthSqr, NetworkStateChanged, Set, SetColor, Start, VectorSubtract, curtime, operator-, operator=, operator=<float>
// calls: CountdownTimer::Now, IntervalTimer::Now, NextBotManager::IsDebugFilterMatch, ConColorMsg(Color const&,char const*,...), NDebugOverlay::Cross3D, __stack_chk_fail
// strings: "%3.2f: %s Look at '%s' rejected - bot is FL_FROZEN\n", "%3.2f: %s Look at '%s' rejected - higher priority aim in progress\n", "head not steady long enough", "head not steady", "%3.2f: %s Look at '%s' rejected. Previous aim '%s'\n", "%3.2f: %s Look at ( %g, %g, %g ) for %3.2f s, Pri = %s, Reason = %s\n"
void __fastcall PlayerBody::AimHeadTowards(
        PlayerBody *const this,
        const Vector *const vLookAtPos,
        const CHeadLookParams *const lookParams)
{
  __m128 v6; // xmm4
  CHeadLookParams::HeadLookPriority_t m_LookAtPriority; // edx
  CHeadLookParams::HeadLookPriority_t m_LookPriority; // eax
  __m128 v9; // xmm0
  float v10; // xmm4_4
  INextBotReply *m_pLookAtReplyWhenAimed; // rdi
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  float x; // xmm3_4
  float v16; // xmm1_4
  vec_t z; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm4_4
  INextBot *v20; // r14
  INextBot *m_bot; // r13
  const char *m_pReasonStr; // r12
  const char *v23; // rax
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v25; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float v27; // xmm0_4
  double v28; // xmm1_8
  double v29; // xmm2_8
  double v30; // xmm3_8
  INextBotReply *v31; // rdi
  INextBot *v32; // r13
  const char *v33; // r12
  const char *v34; // rax
  double v35; // xmm0_8
  CGlobalVars *v36; // rbx
  FnGlobalVarsWarningFunc v37; // rdx
  INextBotReply *m_pReplyWhenAimed; // rdi
  INextBot *v39; // r13
  const char *v40; // r13
  char v41; // al
  const char *v42; // r12
  const char *v43; // rax
  double v44; // xmm0_8
  CGlobalVars *v45; // rbx
  FnGlobalVarsWarningFunc v46; // rdx
  const char *v47; // r14
  CHeadLookParams::HeadLookPriority_t v48; // eax
  const char *v49; // rax
  const char *v50; // r12
  const char *v51; // rax
  double v52; // xmm0_8
  double v53; // xmm1_8
  double v54; // xmm2_8
  double v55; // xmm3_8
  double v56; // xmm4_8
  CGlobalVars *v57; // rbx
  FnGlobalVarsWarningFunc v58; // rdx
  float v59; // xmm0_4
  const char *v60; // [rsp+8h] [rbp-58h]
  double v61; // [rsp+10h] [rbp-50h]
  double v62; // [rsp+10h] [rbp-50h]
  double v63; // [rsp+18h] [rbp-48h]
  double v64; // [rsp+18h] [rbp-48h]
  float v65; // [rsp+20h] [rbp-40h]
  float v66; // [rsp+20h] [rbp-40h]
  double y; // [rsp+20h] [rbp-40h]
  double v68; // [rsp+20h] [rbp-40h]
  float flDurationf; // [rsp+28h] [rbp-38h]
  float flDuration; // [rsp+28h] [rbp-38h]
  float flDurationa; // [rsp+28h] [rbp-38h]
  float flDurationb; // [rsp+28h] [rbp-38h]
  const char *flDurationh; // [rsp+28h] [rbp-38h]
  float flDurationc; // [rsp+28h] [rbp-38h]
  const char *flDurationi; // [rsp+28h] [rbp-38h]
  float flDurationg; // [rsp+28h] [rbp-38h]
  float flDurationd; // [rsp+28h] [rbp-38h]
  const char *flDurationj; // [rsp+28h] [rbp-38h]
  double flDuratione; // [rsp+28h] [rbp-38h]
  double flDurationk; // [rsp+28h] [rbp-38h]
  Color v81; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v82; // [rsp+38h] [rbp-28h]

  v82 = __readfsqword(0x28u);
  if ( (*((*(this->_vptr_INextBotEventResponder + 100))(this) + 440) & 0x20) != 0 )
  {
    m_bot = this->m_bot;
    if ( (g_NextBotManager.m_debugType & 2) != 0
      && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
      && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 2) != 0 )
    {
      m_pReasonStr = lookParams->m_pReasonStr;
      v23 = (*(this->m_pPlayer->_vptr_IHandleEntity + 106))(this->m_pPlayer);
      m_flCurrentTime = 0.0;
      v25 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            flDurationh = v23;
            (m_pfnWarningFunc)(1, 0.0);
            v23 = flDurationh;
          }
        }
        m_flCurrentTime = v25->m_flCurrentTime;
      }
      v81._color[0] = -1;
      v81._color[1] = 0;
      v81._color[2] = 0;
      v81._color[3] = -1;
      ConColorMsg(&v81, "%3.2f: %s Look at '%s' rejected - bot is FL_FROZEN\n", m_flCurrentTime, v23, m_pReasonStr);
    }
  }
  else
  {
    v6.m128_i32[0] = LODWORD(lookParams->m_flLookDuration);
    m_LookAtPriority = this->m_LookAtPriority;
    m_LookPriority = lookParams->m_LookPriority;
    v9 = _mm_cmplt_ss(0LL, v6);
    LODWORD(v10) = _mm_andnot_ps(v9, 0x3DCCCCCDu).m128_u32[0] | v6.m128_i32[0] & v9.m128_i32[0];
    if ( m_LookAtPriority == lookParams->m_LookPriority )
    {
      flDurationd = v10;
      if ( (*(this->_vptr_INextBotEventResponder + 72))(this) == 0
        || (v59 = (*(this->_vptr_INextBotEventResponder + 73))(this),
            v10 = flDurationd,
            nb_head_aim_settle_duration.m_pParent->m_Value.m_fValue > v59) )
      {
        m_pReplyWhenAimed = lookParams->m_pReplyWhenAimed;
        if ( m_pReplyWhenAimed != 0 )
          (*(m_pReplyWhenAimed->_vptr_INextBotReply + 2))(m_pReplyWhenAimed, this->m_bot, 0);
        v39 = this->m_bot;
        if ( (g_NextBotManager.m_debugType & 2) != 0
          && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
          && (*(v39->_vptr_INextBotEventResponder + 96))(v39, 2) != 0 )
        {
          v40 = "head not steady long enough";
          v41 = (*(this->_vptr_INextBotEventResponder + 72))(this);
          v42 = lookParams->m_pReasonStr;
          if ( v41 == 0 )
            v40 = "head not steady";
          v43 = (*(this->m_pPlayer->_vptr_IHandleEntity + 106))(this->m_pPlayer);
          v44 = 0.0;
          v45 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              v46 = gpGlobals->m_pfnWarningFunc;
              if ( v46 != 0 )
              {
                flDurationj = v43;
                (v46)(1, 0.0);
                v43 = flDurationj;
              }
            }
            v44 = v45->m_flCurrentTime;
          }
          v81._color[0] = -1;
          v81._color[1] = 0;
          v81._color[2] = 0;
          v81._color[3] = -1;
          ConColorMsg(&v81, "%3.2f: %s Look at '%s' rejected. Previous aim '%s'\n", v44, v43, v42, v40);
        }
        return;
      }
      m_LookAtPriority = this->m_LookAtPriority;
      m_LookPriority = lookParams->m_LookPriority;
    }
    if ( m_LookAtPriority > m_LookPriority )
    {
      flDurationc = v10;
      v27 = CountdownTimer::Now(&this->m_lookAtExpireTimer);
      v10 = flDurationc;
      if ( v27 < this->m_lookAtExpireTimer.m_timestamp.m_Value )
      {
        v31 = lookParams->m_pReplyWhenAimed;
        if ( v31 != 0 )
          (*(v31->_vptr_INextBotReply + 2))(v31, this->m_bot, 0, v27, v28, v29, v30, flDurationc);
        v32 = this->m_bot;
        if ( (g_NextBotManager.m_debugType & 2) != 0
          && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
          && (*(v32->_vptr_INextBotEventResponder + 96))(v32, 2) != 0 )
        {
          v33 = lookParams->m_pReasonStr;
          v34 = (*(this->m_pPlayer->_vptr_IHandleEntity + 106))(this->m_pPlayer);
          v35 = 0.0;
          v36 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              v37 = gpGlobals->m_pfnWarningFunc;
              if ( v37 != 0 )
              {
                flDurationi = v34;
                (v37)(1, 0.0);
                v34 = flDurationi;
              }
            }
            v35 = v36->m_flCurrentTime;
          }
          v81._color[0] = -1;
          v81._color[1] = 0;
          v81._color[2] = 0;
          v81._color[3] = -1;
          ConColorMsg(&v81, "%3.2f: %s Look at '%s' rejected - higher priority aim in progress\n", v35, v34, v33);
        }
        return;
      }
    }
    m_pLookAtReplyWhenAimed = this->m_pLookAtReplyWhenAimed;
    if ( m_pLookAtReplyWhenAimed != 0 )
    {
      flDurationf = v10;
      (*(m_pLookAtReplyWhenAimed->_vptr_INextBotReply + 2))(m_pLookAtReplyWhenAimed, this->m_bot, 1);
      v10 = flDurationf;
    }
    flDuration = v10;
    this->m_pLookAtReplyWhenAimed = lookParams->m_pReplyWhenAimed;
    v12 = CountdownTimer::Now(&this->m_lookAtExpireTimer);
    v13 = flDuration;
    v14 = v12 + flDuration;
    if ( v14 != this->m_lookAtExpireTimer.m_timestamp.m_Value )
    {
      v66 = v14;
      (*(this->m_lookAtExpireTimer._vptr_CountdownTimer + 2))(
        &this->m_lookAtExpireTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      v13 = flDuration;
      this->m_lookAtExpireTimer.m_timestamp.m_Value = v66;
    }
    if ( v13 != this->m_lookAtExpireTimer.m_duration.m_Value )
    {
      flDurationg = v13;
      (*(this->m_lookAtExpireTimer._vptr_CountdownTimer + 2))(&this->m_lookAtExpireTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v13 = flDurationg;
      this->m_lookAtExpireTimer.m_duration.m_Value = flDurationg;
    }
    x = vLookAtPos->x;
    v16 = this->m_vLookAtPos.z - vLookAtPos->z;
    if ( ((((this->m_vLookAtPos.x - x) * (this->m_vLookAtPos.x - x))
         + ((this->m_vLookAtPos.y - vLookAtPos->y) * (this->m_vLookAtPos.y - vLookAtPos->y)))
        + (v16 * v16)) < 1.0 )
    {
      this->m_LookAtPriority = lookParams->m_LookPriority;
      return;
    }
    this->m_vLookAtPos.x = x;
    flDurationa = v13;
    this->m_vLookAtPos.y = vLookAtPos->y;
    z = vLookAtPos->z;
    this->m_hLookAtSubject.m_Index = -1;
    this->m_vLookAtPos.z = z;
    this->m_LookAtPriority = lookParams->m_LookPriority;
    v18 = IntervalTimer::Now(&this->m_lookAtDurationTimer);
    v19 = flDurationa;
    if ( v18 != this->m_lookAtDurationTimer.m_timestamp.m_Value )
    {
      v65 = v18;
      (*(this->m_lookAtDurationTimer._vptr_IntervalTimer + 2))(
        &this->m_lookAtDurationTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      v19 = flDurationa;
      this->m_lookAtDurationTimer.m_timestamp.m_Value = v65;
    }
    this->m_bHasBeenSightedIn = 0;
    v20 = this->m_bot;
    this->m_flHeadEaseInTime = lookParams->m_flEaseInTime;
    if ( (g_NextBotManager.m_debugType & 2) != 0 )
    {
      flDurationb = v19;
      if ( NextBotManager::IsDebugFilterMatch(&g_NextBotManager, v20)
        && (*(v20->_vptr_INextBotEventResponder + 96))(v20, 2) != 0 )
      {
        v47 = "INTERESTING";
        NDebugOverlay::Cross3D(vLookAtPos, 2.0, 255, 255, 100, 1, flDurationb + flDurationb);
        v48 = this->m_LookAtPriority;
        if ( v48 != CHeadLookParams::HeadLookPriority_t::INTERESTING )
        {
          if ( v48 > CHeadLookParams::HeadLookPriority_t::INTERESTING )
          {
            v47 = "IMPORTANT";
            if ( v48 == CHeadLookParams::HeadLookPriority_t::IMPORTANT )
              goto LABEL_60;
            v47 = "CRITICAL";
            if ( v48 == CHeadLookParams::HeadLookPriority_t::CRITICAL )
              goto LABEL_60;
            goto LABEL_72;
          }
          v47 = "BORING";
          if ( v48 != CHeadLookParams::HeadLookPriority_t::BORING )
LABEL_72:
            v47 = "";
        }
LABEL_60:
        v49 = lookParams->m_pReasonStr;
        v50 = "";
        v61 = flDurationb;
        v63 = vLookAtPos->z;
        if ( v49 != 0 )
          v50 = v49;
        y = vLookAtPos->y;
        flDuratione = vLookAtPos->x;
        v51 = (*(this->m_pPlayer->_vptr_IHandleEntity + 106))(this->m_pPlayer);
        v52 = 0.0;
        v53 = flDuratione;
        v54 = y;
        v55 = v63;
        v56 = v61;
        v57 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v58 = gpGlobals->m_pfnWarningFunc;
            if ( v58 != 0 )
            {
              v60 = v51;
              v62 = flDuratione;
              v64 = y;
              v68 = v55;
              flDurationk = v56;
              (v58)(1, 0.0);
              v51 = v60;
              v53 = v62;
              v54 = v64;
              v55 = v68;
              v56 = flDurationk;
            }
          }
          v52 = v57->m_flCurrentTime;
        }
        v81._color[0] = -1;
        v81._color[1] = 100;
        v81._color[2] = 0;
        v81._color[3] = -1;
        ConColorMsg(
          &v81,
          "%3.2f: %s Look at ( %g, %g, %g ) for %3.2f s, Pri = %s, Reason = %s\n",
          v52,
          v51,
          v53,
          v54,
          v55,
          v56,
          v47,
          v50);
      }
    }
  }
}


// PlayerBody::AimHeadTowards  (line 467, @0x0000000002f437c0, libserver.so)  // inlines: Color, Get, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetSerialNumber, IndexToIdentity, IsDebugging, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Set, SetColor, Start, String, curtime, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<float>
// calls: CountdownTimer::Now, IntervalTimer::Now, NextBotManager::IsDebugFilterMatch, ConColorMsg(Color const&,char const*,...), NDebugOverlay::Cross3D, CGlobalVarsBase::curtime, __stack_chk_fail
// strings: "%3.2f: %s Look at '%s' rejected - higher priority aim in progress\n", "%3.2f: %s Look at subject '%s' for %3.2f s, Pri = %s, Reason = %s\n", "head not steady long enough", "head not steady", "%3.2f: %s Look at '%s' rejected. Previous aim '%s'\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall PlayerBody::AimHeadTowards(
        PlayerBody *const this,
        const CBaseEntity *const rSubjectEntity,
        const CHeadLookParams *const lookParams)
{
  __m128 v6; // xmm2
  CHeadLookParams::HeadLookPriority_t m_LookPriority; // eax
  CHeadLookParams::HeadLookPriority_t m_LookAtPriority; // edx
  __m128 v9; // xmm0
  float v10; // xmm2_4
  INextBotReply *m_pLookAtReplyWhenAimed; // rdi
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v20; // eax
  __int16 v21; // cx
  vec_t v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  INextBot *v25; // r14
  float v26; // xmm0_4
  double v27; // xmm1_8
  INextBotReply *v28; // rdi
  INextBot *v29; // r13
  const char *v30; // r12
  const char *v31; // rax
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v33; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  const char *v35; // r14
  CHeadLookParams::HeadLookPriority_t v36; // eax
  const char *v37; // r12
  CEntityIdentity *v38; // rax
  const char *m_pAsString; // r13
  const char *v40; // rax
  double v41; // xmm0_8
  double v42; // xmm1_8
  CGlobalVars *v43; // rbx
  FnGlobalVarsWarningFunc v44; // rdx
  INextBotReply *m_pReplyWhenAimed; // rdi
  INextBot *m_bot; // r13
  const char *v47; // r13
  char v48; // al
  const char *m_pReasonStr; // r12
  __int64 v50; // rbx
  float v51; // xmm0_4
  float v52; // xmm0_4
  float v53; // [rsp-50h] [rbp-58h]
  const char *v54; // [rsp-50h] [rbp-58h]
  float v55; // [rsp-50h] [rbp-58h]
  float v56; // [rsp-48h] [rbp-50h]
  float v57; // [rsp-48h] [rbp-50h]
  float v58; // [rsp-48h] [rbp-50h]
  float v59; // [rsp-48h] [rbp-50h]
  const char *v60; // [rsp-48h] [rbp-50h]
  float v61; // [rsp-48h] [rbp-50h]
  float v62; // [rsp-48h] [rbp-50h]
  double v63; // [rsp-48h] [rbp-50h]
  float v64; // [rsp-48h] [rbp-50h]
  double v65; // [rsp-40h] [rbp-48h]
  Color v66; // [rsp-30h] [rbp-38h] BYREF
  unsigned __int64 v67; // [rsp-28h] [rbp-30h]

  v67 = __readfsqword(0x28u);
  v6.m128_i32[0] = LODWORD(lookParams->m_flLookDuration);
  m_LookPriority = lookParams->m_LookPriority;
  m_LookAtPriority = this->m_LookAtPriority;
  v9 = _mm_cmplt_ss(0LL, v6);
  LODWORD(v10) = _mm_andnot_ps(v9, 0x3DCCCCCDu).m128_u32[0] | v6.m128_i32[0] & v9.m128_i32[0];
  if ( m_LookAtPriority == m_LookPriority )
  {
    v64 = v10;
    if ( (*(this->_vptr_INextBotEventResponder + 72))(this) == 0
      || (v52 = (*(this->_vptr_INextBotEventResponder + 73))(this),
          v10 = v64,
          nb_head_aim_settle_duration.m_pParent->m_Value.m_fValue > v52) )
    {
      m_pReplyWhenAimed = lookParams->m_pReplyWhenAimed;
      if ( m_pReplyWhenAimed != 0 )
        (*(m_pReplyWhenAimed->_vptr_INextBotReply + 2))(m_pReplyWhenAimed, this->m_bot, 0);
      m_bot = this->m_bot;
      if ( (g_NextBotManager.m_debugType & 2) != 0
        && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
        && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 2) != 0 )
      {
        v47 = "head not steady long enough";
        v48 = (*(this->_vptr_INextBotEventResponder + 72))(this);
        m_pReasonStr = lookParams->m_pReasonStr;
        if ( v48 == 0 )
          v47 = "head not steady";
        v50 = (*(this->m_pPlayer->_vptr_IHandleEntity + 106))(this->m_pPlayer);
        v51 = CGlobalVarsBase::curtime(gpGlobals, 0);
        v66._color[0] = -1;
        v66._color[1] = 0;
        v66._color[2] = 0;
        v66._color[3] = -1;
        ConColorMsg(&v66, "%3.2f: %s Look at '%s' rejected. Previous aim '%s'\n", v50, m_pReasonStr, v47, v51);
      }
      return;
    }
    m_LookAtPriority = this->m_LookAtPriority;
    m_LookPriority = lookParams->m_LookPriority;
  }
  if ( m_LookAtPriority > m_LookPriority )
  {
    v59 = v10;
    v26 = CountdownTimer::Now(&this->m_lookAtExpireTimer);
    v10 = v59;
    if ( v26 < this->m_lookAtExpireTimer.m_timestamp.m_Value )
    {
      v28 = lookParams->m_pReplyWhenAimed;
      if ( v28 != 0 )
        (*(v28->_vptr_INextBotReply + 2))(v28, this->m_bot, 0, v26, v27, v59);
      v29 = this->m_bot;
      if ( (g_NextBotManager.m_debugType & 2) != 0
        && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
        && (*(v29->_vptr_INextBotEventResponder + 96))(v29, 2) != 0 )
      {
        v30 = lookParams->m_pReasonStr;
        v31 = (*(this->m_pPlayer->_vptr_IHandleEntity + 106))(this->m_pPlayer);
        m_flCurrentTime = 0.0;
        v33 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              v60 = v31;
              (m_pfnWarningFunc)(1, 0.0);
              v31 = v60;
            }
          }
          m_flCurrentTime = v33->m_flCurrentTime;
        }
        v66._color[0] = -1;
        v66._color[1] = 0;
        v66._color[2] = 0;
        v66._color[3] = -1;
        ConColorMsg(
          &v66,
          "%3.2f: %s Look at '%s' rejected - higher priority aim in progress\n",
          m_flCurrentTime,
          v31,
          v30);
      }
      return;
    }
  }
  m_pLookAtReplyWhenAimed = this->m_pLookAtReplyWhenAimed;
  if ( m_pLookAtReplyWhenAimed != 0 )
  {
    v56 = v10;
    (*(m_pLookAtReplyWhenAimed->_vptr_INextBotReply + 2))(m_pLookAtReplyWhenAimed, this->m_bot, 1);
    v10 = v56;
  }
  v57 = v10;
  this->m_pLookAtReplyWhenAimed = lookParams->m_pReplyWhenAimed;
  v12 = CountdownTimer::Now(&this->m_lookAtExpireTimer);
  v13 = v57;
  v14 = v12 + v57;
  if ( v14 != this->m_lookAtExpireTimer.m_timestamp.m_Value )
  {
    v55 = v14;
    (*(this->m_lookAtExpireTimer._vptr_CountdownTimer + 2))(&this->m_lookAtExpireTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v13 = v57;
    this->m_lookAtExpireTimer.m_timestamp.m_Value = v55;
  }
  if ( v13 != this->m_lookAtExpireTimer.m_duration.m_Value )
  {
    v61 = v13;
    (*(this->m_lookAtExpireTimer._vptr_CountdownTimer + 2))(&this->m_lookAtExpireTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v13 = v61;
    this->m_lookAtExpireTimer.m_duration.m_Value = v61;
  }
  m_Index = this->m_hLookAtSubject.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLookAtSubject.m_Index) >> 9) & 0x3F];
    if ( v17 != 0 )
    {
      v18 = &v17[this->m_hLookAtSubject.m_Index & 0x1FF];
      if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index )
        m_pInstance = v18->m_pInstance;
    }
  }
  if ( rSubjectEntity == m_pInstance )
  {
    this->m_LookAtPriority = lookParams->m_LookPriority;
    return;
  }
  if ( rSubjectEntity != 0 && (m_pEntity = rSubjectEntity->m_pEntity) != 0 )
  {
    v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v21 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hLookAtSubject.m_Index) = v21 | this->m_hLookAtSubject.m_Index & 0x8000;
    this->m_hLookAtSubject.m_Index = (v20 << 15) | this->m_hLookAtSubject.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hLookAtSubject.m_Index = -1;
  }
  v58 = v13;
  v65 = (*(rSubjectEntity->_vptr_IHandleEntity + 62))(rSubjectEntity);
  this->m_vLookAtPos.z = v22;
  *&this->m_vLookAtPos.x = v65;
  this->m_LookAtPriority = lookParams->m_LookPriority;
  v23 = IntervalTimer::Now(&this->m_lookAtDurationTimer);
  v24 = v58;
  if ( v23 != this->m_lookAtDurationTimer.m_timestamp.m_Value )
  {
    v53 = v23;
    (*(this->m_lookAtDurationTimer._vptr_IntervalTimer + 2))(
      &this->m_lookAtDurationTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    v24 = v58;
    this->m_lookAtDurationTimer.m_timestamp.m_Value = v53;
  }
  this->m_bHasBeenSightedIn = 0;
  v25 = this->m_bot;
  this->m_flHeadEaseInTime = lookParams->m_flEaseInTime;
  if ( (g_NextBotManager.m_debugType & 2) != 0 )
  {
    v62 = v24;
    if ( NextBotManager::IsDebugFilterMatch(&g_NextBotManager, v25)
      && (*(v25->_vptr_INextBotEventResponder + 96))(v25, 2) != 0 )
    {
      v35 = "INTERESTING";
      NDebugOverlay::Cross3D(&this->m_vLookAtPos, 2.0, 100, 100, 100, 1, v62);
      v36 = lookParams->m_LookPriority;
      if ( lookParams->m_LookPriority != CHeadLookParams::HeadLookPriority_t::INTERESTING )
      {
        if ( v36 <= CHeadLookParams::HeadLookPriority_t::INTERESTING )
        {
          v35 = "BORING";
          if ( v36 == CHeadLookParams::HeadLookPriority_t::BORING )
            goto LABEL_44;
        }
        else
        {
          v35 = "IMPORTANT";
          if ( v36 == CHeadLookParams::HeadLookPriority_t::IMPORTANT )
            goto LABEL_44;
          v35 = "CRITICAL";
          if ( v36 == CHeadLookParams::HeadLookPriority_t::CRITICAL )
            goto LABEL_44;
        }
        v35 = "";
      }
LABEL_44:
      v37 = lookParams->m_pReasonStr;
      v38 = rSubjectEntity->m_pEntity;
      m_pAsString = "";
      if ( v37 == 0 )
        v37 = "";
      if ( v38->m_designerName.u.m_Id != 0 )
        m_pAsString = v38->m_designerName.u.m_pAsString;
      v63 = v62;
      v40 = (*(this->m_pPlayer->_vptr_IHandleEntity + 106))(this->m_pPlayer);
      v41 = 0.0;
      v42 = v63;
      v43 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v44 = gpGlobals->m_pfnWarningFunc;
          if ( v44 != 0 )
          {
            v54 = v40;
            (v44)(1, 0.0);
            v40 = v54;
            v42 = v63;
          }
        }
        v41 = v43->m_flCurrentTime;
      }
      v66._color[0] = -1;
      v66._color[1] = 100;
      v66._color[2] = 0;
      v66._color[3] = -1;
      ConColorMsg(
        &v66,
        "%3.2f: %s Look at subject '%s' for %3.2f s, Pri = %s, Reason = %s\n",
        v41,
        v40,
        m_pAsString,
        v42,
        v35,
        v37);
    }
  }
}


// PlayerBody::IsHeadSteady  (line 587, @0x0000000002f415f0, libserver.so)  // inlines: HasStarted, operator><float>
bool __fastcall PlayerBody::IsHeadSteady(const PlayerBody *const this)
{
  return this->m_headSteadyTimer.m_timestamp.m_Value > 0.0;
}


// PlayerBody::GetHeadSteadyDuration  (line 594, @0x0000000002f41ea0, libserver.so)  // inlines: GetElapsedTime
// calls: IntervalTimer::Now
float __fastcall PlayerBody::GetHeadSteadyDuration(const PlayerBody *const this)
{
  float result; // xmm0_4

  result = 0.0;
  if ( this->m_headSteadyTimer.m_timestamp.m_Value > 0.0 )
    return IntervalTimer::Now(&this->m_headSteadyTimer) - this->m_headSteadyTimer.m_timestamp.m_Value;
  return result;
}


// PlayerBody::GetMaxHeadAngularVelocity  (line 602, @0x0000000002f41610, libserver.so)  // inlines: GetFloat
float __fastcall PlayerBody::GetMaxHeadAngularVelocity(const PlayerBody *const this)
{
  return nb_saccade_speed.m_pParent->m_Value.m_fValue;
}


// PlayerBody::GetHullMins  (line 609, @0x0000000002f41980, libserver.so)  // inlines: operator=
// calls: SafeGetViewVectors
const Vector *__fastcall PlayerBody::GetHullMins(const PlayerBody *const this)
{
  const CViewVectors *v2; // rax
  vec_t z; // xmm0_4
  const CViewVectors *ViewVectors; // rax

  if ( this->m_posture == IBody::PostureType::CROUCH )
  {
    ViewVectors = SafeGetViewVectors();
    this->m_vHullMins.x = ViewVectors->m_vDuckHullMin.x;
    this->m_vHullMins.y = ViewVectors->m_vDuckHullMin.y;
    z = ViewVectors->m_vDuckHullMin.z;
  }
  else
  {
    v2 = SafeGetViewVectors();
    this->m_vHullMins.x = v2->m_vHullMin.x;
    this->m_vHullMins.y = v2->m_vHullMin.y;
    z = v2->m_vHullMin.z;
  }
  this->m_vHullMins.z = z;
  return &this->m_vHullMins;
}


// PlayerBody::GetHullMaxs  (line 628, @0x0000000002f419f0, libserver.so)  // inlines: operator=
// calls: SafeGetViewVectors
const Vector *__fastcall PlayerBody::GetHullMaxs(const PlayerBody *const this)
{
  const CViewVectors *v2; // rax
  vec_t z; // xmm0_4
  const CViewVectors *ViewVectors; // rax

  if ( this->m_posture == IBody::PostureType::CROUCH )
  {
    ViewVectors = SafeGetViewVectors();
    this->m_vHullMaxs.x = ViewVectors->m_vDuckHullMax.x;
    this->m_vHullMaxs.y = ViewVectors->m_vDuckHullMax.y;
    z = ViewVectors->m_vDuckHullMax.z;
  }
  else
  {
    v2 = SafeGetViewVectors();
    this->m_vHullMaxs.x = v2->m_vHullMax.x;
    this->m_vHullMaxs.y = v2->m_vHullMax.y;
    z = v2->m_vHullMax.z;
  }
  this->m_vHullMaxs.z = z;
  return &this->m_vHullMaxs;
}


// PlayerBody::GetSolidMask  (line 644, @0x0000000002f41630, libserver.so)
uint64 __fastcall PlayerBody::GetSolidMask(const PlayerBody *const this)
{
  CBasePlayer *m_pPlayer; // rdi

  m_pPlayer = this->m_pPlayer;
  if ( m_pPlayer != 0 )
    return (*(m_pPlayer->_vptr_IHandleEntity + 540))(m_pPlayer, 0);
  else
    return 552977;
}


