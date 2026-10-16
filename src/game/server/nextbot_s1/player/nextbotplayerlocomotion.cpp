
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// PlayerLocomotion::PlayerLocomotion  (line 23, @0x0000000002f459d0, libserver.so)
// calls: CLocomotionBase::CLocomotionBase, CountdownTimer::CountdownTimer, PlayerLocomotion::Reset, CLocomotionBase::~CLocomotionBase, _Unwind_Resume
void __fastcall PlayerLocomotion::PlayerLocomotion(PlayerLocomotion *const this, INextBot *pBot)
{
  CLocomotionBase::CLocomotionBase(this, pBot);
  this->_vptr_INextBotEventResponder = &off_47B6BF0;
  CountdownTimer::CountdownTimer(&this->m_jumpTimer);
  CountdownTimer::CountdownTimer(&this->m_ladderTimer);
  this->m_player = 0;
  PlayerLocomotion::Reset(this);
}


// PlayerLocomotion::Reset  (line 32, @0x0000000002f458f0, libserver.so)  // inlines: Invalidate, NetworkStateChanged, Set, operator=<float>
// calls: CLocomotionBase::Reset
// callers: PlayerLocomotion::PlayerLocomotion
void __fastcall PlayerLocomotion::Reset(PlayerLocomotion *const this)
{
  CBasePlayer *v2; // rax
  bool v3; // zf

  v2 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
  this->m_bIsJumping = 0;
  this->m_player = v2;
  v3 = this->m_ladderTimer.m_timestamp.m_Value == -1.0;
  this->m_bIsClimbingUpToLedge = 0;
  this->m_bIsJumpingAcrossGap = 0;
  this->m_bHasLeftTheGround = 0;
  this->m_flDesiredSpeed = 0.0;
  this->m_ladderState = PlayerLocomotion::LadderState::NO_LADDER;
  this->m_ladderInfo = 0;
  this->m_ladderDismountGoal = 0;
  if ( !v3 )
  {
    (*(this->m_ladderTimer._vptr_CountdownTimer + 2))(&this->m_ladderTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ladderTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_flSpeedLimitMin = 0.0;
  this->m_flSpeedLimitMax = 10000000.0;
  this->m_flFacingEaseInTime = 0.25;
  CLocomotionBase::Reset(this);
}


// PlayerLocomotion::TraverseLadder  (line 57, @0x0000000002f45330, libserver.so)
// calls: PlayerLocomotion::DismountLadderBottom, PlayerLocomotion::ApproachAscendingLadder, PlayerLocomotion::ApproachDescendingLadder, PlayerLocomotion::AscendLadder, PlayerLocomotion::DescendLadder, PlayerLocomotion::DismountLadderTop, CBaseEntity::SetMoveType
// callers: PlayerLocomotion::Update
// globals: jpt_2F4535B
bool __fastcall PlayerLocomotion::TraverseLadder(PlayerLocomotion *const this)
{
  char v2; // r12
  bool result; // al
  INextBot *m_bot; // rdi
  CBaseEntity *v5; // rax

  switch ( this->m_ladderState )
  {
    case PlayerLocomotion::LadderState::APPROACHING_ASCENDING_LADDER:
      this->m_ladderState = PlayerLocomotion::ApproachAscendingLadder(this);
      result = 1;
      break;
    case PlayerLocomotion::LadderState::APPROACHING_DESCENDING_LADDER:
      this->m_ladderState = PlayerLocomotion::ApproachDescendingLadder(this);
      result = 1;
      break;
    case PlayerLocomotion::LadderState::ASCENDING_LADDER:
      this->m_ladderState = PlayerLocomotion::AscendLadder(this);
      result = 1;
      break;
    case PlayerLocomotion::LadderState::DESCENDING_LADDER:
      this->m_ladderState = PlayerLocomotion::DescendLadder(this);
      result = 1;
      break;
    case PlayerLocomotion::LadderState::DISMOUNTING_LADDER_TOP:
      this->m_ladderState = PlayerLocomotion::DismountLadderTop(this);
      result = 1;
      break;
    case PlayerLocomotion::LadderState::DISMOUNTING_LADDER_BOTTOM:
      v2 = 1;
      this->m_ladderState = PlayerLocomotion::DismountLadderBottom(this);
      goto LABEL_3;
    default:
      m_bot = this->m_bot;
      v2 = 0;
      this->m_ladderInfo = 0;
      if ( *((*(m_bot->_vptr_INextBotEventResponder + 66))(m_bot) + 341) == 9 )
      {
        v5 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
        CBaseEntity::SetMoveType(v5, MoveType_t::MOVETYPE_WALK, MoveCollide_t::MOVECOLLIDE_DEFAULT);
      }
LABEL_3:
      result = v2;
      break;
  }
  return result;
}


// PlayerLocomotion::ApproachAscendingLadder  (line 102, @0x0000000002f44390, libserver.so)  // inlines: IsDebugging, NetworkStateChanged, Set, Start, entindex, operator=<float>
// calls: CountdownTimer::Now, NextBotManager::IsDebugFilterMatch, CEntityInstance::GetEntityIndex, NDebugOverlay::EntityText
// callers: PlayerLocomotion::TraverseLadder
// strings: "Approach ascending ladder"
PlayerLocomotion::LadderState __fastcall PlayerLocomotion::ApproachAscendingLadder(PlayerLocomotion *const this)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  PlayerLocomotion::LadderState result; // eax
  float v5; // r12d
  float v6; // xmm1_4
  __int64 v7; // rdx
  INextBot *m_bot; // r12
  const CEntityInstance *v9; // rax
  CEntityIndex v10; // eax
  float z; // [rsp+Ch] [rbp-34h]
  float v12; // [rsp+Ch] [rbp-34h]

  if ( this->m_ladderInfo != 0 )
  {
    (*(this->_vptr_INextBotEventResponder + 98))(this);
    z = this->m_ladderInfo->m_vTop.z;
    if ( v2 >= (z - (*(this->_vptr_INextBotEventResponder + 99))(this)) )
    {
      v3 = CountdownTimer::Now(&this->m_ladderTimer) + 2.0;
      if ( v3 != this->m_ladderTimer.m_timestamp.m_Value )
      {
        v12 = v3;
        (*(this->m_ladderTimer._vptr_CountdownTimer + 2))(&this->m_ladderTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_ladderTimer.m_timestamp.m_Value = v12;
      }
      if ( this->m_ladderTimer.m_duration.m_Value == 2.0 )
        return PlayerLocomotion::LadderState::DISMOUNTING_LADDER_TOP;
      (*(this->m_ladderTimer._vptr_CountdownTimer + 2))(&this->m_ladderTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_ladderTimer.m_duration.m_Value = 2.0;
      return PlayerLocomotion::LadderState::DISMOUNTING_LADDER_TOP;
    }
    (*(this->_vptr_INextBotEventResponder + 98))(this);
    v5 = this->m_ladderInfo->m_vBottom.z;
    if ( (v5 - (*(this->_vptr_INextBotEventResponder + 100))(this)) < v6 )
    {
      (*(this->_vptr_INextBotEventResponder + 93))(this, &this->m_ladderInfo->m_vBottom);
      (*(this->_vptr_INextBotEventResponder + 66))(this, &this->m_ladderInfo->m_vBottom, 10000000.0);
      v7 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
      result = PlayerLocomotion::LadderState::ASCENDING_LADDER;
      if ( *(v7 + 341) != 9 )
      {
        m_bot = this->m_bot;
        if ( (g_NextBotManager.m_debugType & 0x10) != 0
          && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
          && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 16) != 0 )
        {
          v9 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
          v10.m_Data = CEntityInstance::GetEntityIndex(v9).m_Data;
          NDebugOverlay::EntityText(v10, 0, "Approach ascending ladder", 0.1, 255, 255, 255, 255);
          return PlayerLocomotion::LadderState::APPROACHING_ASCENDING_LADDER;
        }
        else
        {
          return PlayerLocomotion::LadderState::APPROACHING_ASCENDING_LADDER;
        }
      }
      return result;
    }
  }
  return PlayerLocomotion::LadderState::NO_LADDER;
}


// PlayerLocomotion::ApproachDescendingLadder  (line 143, @0x0000000002f445f0, libserver.so)  // inlines: DotProduct, IsDebugging, NetworkStateChanged, NormalizeInPlace, Set, Start, VectorAdd, VectorMultiply, VectorSubtract, entindex, operator*, operator+, operator-, operator=, operator=<float>
// calls: CountdownTimer::Now, VectorNormalize, NextBotManager::IsDebugFilterMatch, CEntityInstance::GetEntityIndex, NDebugOverlay::EntityText
// callers: PlayerLocomotion::TraverseLadder
// strings: "Approach descending ladder"
PlayerLocomotion::LadderState __fastcall PlayerLocomotion::ApproachDescendingLadder(PlayerLocomotion *const this)
{
  PlayerLocomotion::LadderState result; // eax
  float v3; // xmm1_4
  float v4; // xmm0_4
  const CNavLadder *m_ladderInfo; // r12
  __int64 v6; // rax
  float v7; // xmm0_4
  const CNavLadder *v8; // rax
  float v9; // xmm1_4
  const CNavLadder *v10; // rax
  float y; // xmm3_4
  float x; // xmm1_4
  float z; // xmm2_4
  bool v14; // cc
  float v15; // xmm3_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm1_4
  __int64 v18; // rdx
  INextBot *m_bot; // r12
  double v20; // xmm0_8
  int (**vptr_INextBotEventResponder)(...); // rax
  float v22; // xmm1_4
  __m128i v23; // xmm7
  float v24; // r12d
  float v25; // xmm1_4
  vec_t v26; // xmm4_4
  vec_t v27; // xmm3_4
  float v28; // xmm2_4
  const CEntityInstance *v29; // rax
  CEntityIndex v30; // eax
  float mountPoint; // [rsp+8h] [rbp-68h]
  float mountPointa; // [rsp+8h] [rbp-68h]
  float mountPoint_4; // [rsp+Ch] [rbp-64h]
  float mountPoint_4b; // [rsp+Ch] [rbp-64h]
  float mountPoint_4a; // [rsp+Ch] [rbp-64h]
  float mountPoint_4c; // [rsp+Ch] [rbp-64h]
  Vector to; // [rsp+20h] [rbp-50h] BYREF
  Vector moveGoal; // [rsp+30h] [rbp-40h] BYREF
  double v39; // [rsp+40h] [rbp-30h]
  float v40; // [rsp+48h] [rbp-28h]
  double v41; // [rsp+50h] [rbp-20h]
  float v42; // [rsp+58h] [rbp-18h]

  result = PlayerLocomotion::LadderState::NO_LADDER;
  if ( this->m_ladderInfo != 0 )
  {
    (*(this->_vptr_INextBotEventResponder + 98))(this);
    mountPoint_4 = this->m_ladderInfo->m_vBottom.z;
    if ( ((*(this->_vptr_INextBotEventResponder + 100))(this) + mountPoint_4) < v3 )
    {
      m_ladderInfo = this->m_ladderInfo;
      v6 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
      v7 = (*(*v6 + 744LL))(v6) * 0.25;
      v8 = this->m_ladderInfo;
      mountPoint = (m_ladderInfo->m_vNormal.x * v7) + v8->m_vTop.x;
      mountPoint_4b = (m_ladderInfo->m_vNormal.y * v7) + v8->m_vTop.y;
      v41 = (*(this->_vptr_INextBotEventResponder + 98))(this);
      v42 = v9;
      to.z = 0.0;
      to.y = mountPoint_4b - *(&v41 + 1);
      to.x = mountPoint - *&v41;
      if ( VectorNormalize(&to) < 10.0 )
      {
        v20 = (*(this->_vptr_INextBotEventResponder + 106))(this);
        vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
        v39 = v20;
        v40 = v22;
        v23 = LODWORD(v20);
        *v23.m128i_i32 = *&v20 * 100.0;
        mountPoint_4c = v22 * 100.0;
        mountPointa = *(&v20 + 1) * 100.0;
        v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
        v41 = (vptr_INextBotEventResponder[98])(this);
        v42 = v25;
        moveGoal.y = mountPointa + *(&v41 + 1);
        moveGoal.z = v25 + mountPoint_4c;
        moveGoal.x = v24 + *&v41;
      }
      else
      {
        v10 = this->m_ladderInfo;
        y = v10->m_vNormal.y;
        x = v10->m_vNormal.x;
        z = v10->m_vNormal.z;
        v14 = (((to.x * x) + (to.y * y)) + (to.z * z)) >= 0.0;
        v15 = y * 100.0;
        if ( v14 )
        {
          v16 = (z * 100.0) + v10->m_vTop.z;
          v17 = (x * 100.0) + v10->m_vTop.x;
          moveGoal.y = v15 + v10->m_vTop.y;
          moveGoal.z = v16;
          moveGoal.x = v17;
        }
        else
        {
          v26 = v10->m_vTop.y - v15;
          v27 = v10->m_vTop.z - (z * 100.0);
          v28 = v10->m_vTop.x;
          moveGoal.y = v26;
          moveGoal.z = v27;
          moveGoal.x = v28 - (x * 100.0);
        }
      }
      (*(this->_vptr_INextBotEventResponder + 93))(this, &moveGoal);
      (*(this->_vptr_INextBotEventResponder + 66))(this, &moveGoal, 10000000.0);
      v18 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
      result = PlayerLocomotion::LadderState::DESCENDING_LADDER;
      if ( *(v18 + 341) != 9 )
      {
        m_bot = this->m_bot;
        if ( (g_NextBotManager.m_debugType & 0x10) != 0
          && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
          && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 16) != 0 )
        {
          v29 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
          v30.m_Data = CEntityInstance::GetEntityIndex(v29).m_Data;
          NDebugOverlay::EntityText(v30, 0, "Approach descending ladder", 0.1, 255, 255, 255, 255);
          return PlayerLocomotion::LadderState::APPROACHING_DESCENDING_LADDER;
        }
        else
        {
          return PlayerLocomotion::LadderState::APPROACHING_DESCENDING_LADDER;
        }
      }
    }
    else
    {
      v4 = CountdownTimer::Now(&this->m_ladderTimer) + 2.0;
      if ( v4 != this->m_ladderTimer.m_timestamp.m_Value )
      {
        mountPoint_4a = v4;
        (*(this->m_ladderTimer._vptr_CountdownTimer + 2))(&this->m_ladderTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_ladderTimer.m_timestamp.m_Value = mountPoint_4a;
      }
      if ( this->m_ladderTimer.m_duration.m_Value == 2.0 )
      {
        return PlayerLocomotion::LadderState::DISMOUNTING_LADDER_BOTTOM;
      }
      else
      {
        (*(this->m_ladderTimer._vptr_CountdownTimer + 2))(&this->m_ladderTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_ladderTimer.m_duration.m_Value = 2.0;
        return PlayerLocomotion::LadderState::DISMOUNTING_LADDER_BOTTOM;
      }
    }
  }
  return result;
}


// PlayerLocomotion::AscendLadder  (line 221, @0x0000000002f449f0, libserver.so)  // inlines: CHeadLookParams, IsDebugging, NetworkStateChanged, Set, Start, VectorAdd, VectorMultiply, entindex, operator*, operator+, operator=<float>
// calls: CountdownTimer::Now, NextBotManager::IsDebugFilterMatch, CEntityInstance::GetEntityIndex, NDebugOverlay::EntityText
// callers: PlayerLocomotion::TraverseLadder
// strings: "Ascend"
PlayerLocomotion::LadderState __fastcall PlayerLocomotion::AscendLadder(PlayerLocomotion *const this)
{
  PlayerLocomotion::LadderState v1; // r12d
  const CNavLadder *m_ladderInfo; // rax
  vec_t v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  INextBot *m_bot; // rdi
  __int64 v9; // rax
  void (__fastcall *v10)(__int64, Vector *, double *); // rcx
  INextBot *v11; // r12
  const CEntityInstance *v12; // rax
  CEntityIndex v13; // eax
  float v14; // [rsp+14h] [rbp-5Ch]
  float v15; // [rsp+18h] [rbp-58h]
  float v16; // [rsp+1Ch] [rbp-54h]
  float v17; // [rsp+1Ch] [rbp-54h]
  Vector goal; // [rsp+30h] [rbp-40h] BYREF
  double v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  const char *v21; // [rsp+50h] [rbp-20h]
  char v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+5Ch] [rbp-14h]

  v1 = PlayerLocomotion::LadderState::NO_LADDER;
  if ( this->m_ladderInfo != 0 )
  {
    if ( *((*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot) + 341) == 9 )
    {
      (*(this->_vptr_INextBotEventResponder + 98))(this);
      m_ladderInfo = this->m_ladderInfo;
      if ( v5 < m_ladderInfo->m_vTop.z )
      {
        v14 = (0.0 - m_ladderInfo->m_vNormal.x) * 100.0;
        v15 = (0.0 - m_ladderInfo->m_vNormal.y) * 100.0;
        v16 = (2.0 - m_ladderInfo->m_vNormal.z) * 100.0;
        v19 = (*(this->_vptr_INextBotEventResponder + 98))(this);
        *&v20 = v7;
        m_bot = this->m_bot;
        goal.y = v15 + *(&v19 + 1);
        goal.z = v16 + v7;
        goal.x = v14 + *&v19;
        v9 = (*(m_bot->_vptr_INextBotEventResponder + 69))(m_bot);
        v10 = *(*v9 + 552LL);
        v21 = "Ladder";
        v19 = 5.238690037323582e-11;
        v20 = 0;
        v22 = 1;
        v23 = 1048576000;
        v10(v9, &goal, &v19);
        (*(this->_vptr_INextBotEventResponder + 66))(this, &goal, 10000000.0);
        v11 = this->m_bot;
        if ( (g_NextBotManager.m_debugType & 0x10) != 0
          && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
          && (*(v11->_vptr_INextBotEventResponder + 96))(v11, 16) != 0 )
        {
          v1 = PlayerLocomotion::LadderState::ASCENDING_LADDER;
          v12 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
          v13.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
          NDebugOverlay::EntityText(v13, 0, "Ascend", 0.1, 255, 255, 255, 255);
        }
        else
        {
          return PlayerLocomotion::LadderState::ASCENDING_LADDER;
        }
      }
      else
      {
        v6 = CountdownTimer::Now(&this->m_ladderTimer) + 2.0;
        if ( v6 != this->m_ladderTimer.m_timestamp.m_Value )
        {
          v17 = v6;
          (*(this->m_ladderTimer._vptr_CountdownTimer + 2))(&this->m_ladderTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_ladderTimer.m_timestamp.m_Value = v17;
        }
        v1 = PlayerLocomotion::LadderState::DISMOUNTING_LADDER_TOP;
        if ( this->m_ladderTimer.m_duration.m_Value != 2.0 )
        {
          (*(this->m_ladderTimer._vptr_CountdownTimer + 2))(&this->m_ladderTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_ladderTimer.m_duration.m_Value = 2.0;
        }
      }
    }
    else
    {
      this->m_ladderInfo = 0;
    }
  }
  return v1;
}


// PlayerLocomotion::DescendLadder  (line 260, @0x0000000002f44cb0, libserver.so)  // inlines: CHeadLookParams, IsDebugging, NetworkStateChanged, Set, Start, VectorAdd, VectorMultiply, entindex, operator*, operator+, operator=<float>
// calls: CountdownTimer::Now, NextBotManager::IsDebugFilterMatch, CEntityInstance::GetEntityIndex, NDebugOverlay::EntityText
// callers: PlayerLocomotion::TraverseLadder
// strings: "Descend"
PlayerLocomotion::LadderState __fastcall PlayerLocomotion::DescendLadder(PlayerLocomotion *const this)
{
  PlayerLocomotion::LadderState v1; // r12d
  float v4; // xmm1_4
  __int64 v5; // rax
  float v6; // xmm0_4
  const CNavLadder *m_ladderInfo; // rax
  float v8; // xmm1_4
  INextBot *m_bot; // rdi
  __int64 v10; // rax
  void (__fastcall *v11)(__int64, Vector *, double *); // rcx
  INextBot *v12; // r12
  const CEntityInstance *v13; // rax
  CEntityIndex v14; // eax
  float v15; // [rsp+14h] [rbp-5Ch]
  float v16; // [rsp+18h] [rbp-58h]
  float v17; // [rsp+18h] [rbp-58h]
  float z; // [rsp+1Ch] [rbp-54h]
  float v19; // [rsp+1Ch] [rbp-54h]
  float v20; // [rsp+1Ch] [rbp-54h]
  Vector goal; // [rsp+30h] [rbp-40h] BYREF
  double v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  const char *v24; // [rsp+50h] [rbp-20h]
  char v25; // [rsp+58h] [rbp-18h]
  int v26; // [rsp+5Ch] [rbp-14h]

  v1 = PlayerLocomotion::LadderState::NO_LADDER;
  if ( this->m_ladderInfo != 0 )
  {
    if ( *((*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot) + 341) == 9 )
    {
      (*(this->_vptr_INextBotEventResponder + 98))(this);
      v16 = v4;
      z = this->m_ladderInfo->m_vBottom.z;
      v5 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 68))(this->m_bot);
      if ( ((*(*v5 + 792LL))(v5) + z) < v16 )
      {
        m_ladderInfo = this->m_ladderInfo;
        v15 = (m_ladderInfo->m_vNormal.x + 0.0) * 100.0;
        v19 = (m_ladderInfo->m_vNormal.z - 2.0) * 100.0;
        v17 = (m_ladderInfo->m_vNormal.y + 0.0) * 100.0;
        v22 = (*(this->_vptr_INextBotEventResponder + 98))(this);
        *&v23 = v8;
        m_bot = this->m_bot;
        goal.y = v17 + *(&v22 + 1);
        goal.z = v19 + v8;
        goal.x = v15 + *&v22;
        v10 = (*(m_bot->_vptr_INextBotEventResponder + 69))(m_bot);
        v11 = *(*v10 + 552LL);
        v24 = "Ladder";
        v22 = 5.238690037323582e-11;
        v23 = 0;
        v25 = 1;
        v26 = 1048576000;
        v11(v10, &goal, &v22);
        (*(this->_vptr_INextBotEventResponder + 66))(this, &goal, 10000000.0);
        v12 = this->m_bot;
        if ( (g_NextBotManager.m_debugType & 0x10) != 0
          && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
          && (*(v12->_vptr_INextBotEventResponder + 96))(v12, 16) != 0 )
        {
          v1 = PlayerLocomotion::LadderState::DESCENDING_LADDER;
          v13 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
          v14.m_Data = CEntityInstance::GetEntityIndex(v13).m_Data;
          NDebugOverlay::EntityText(v14, 0, "Descend", 0.1, 255, 255, 255, 255);
        }
        else
        {
          return PlayerLocomotion::LadderState::DESCENDING_LADDER;
        }
      }
      else
      {
        v6 = CountdownTimer::Now(&this->m_ladderTimer) + 2.0;
        if ( v6 != this->m_ladderTimer.m_timestamp.m_Value )
        {
          v20 = v6;
          (*(this->m_ladderTimer._vptr_CountdownTimer + 2))(&this->m_ladderTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_ladderTimer.m_timestamp.m_Value = v20;
        }
        v1 = PlayerLocomotion::LadderState::DISMOUNTING_LADDER_BOTTOM;
        if ( this->m_ladderTimer.m_duration.m_Value != 2.0 )
        {
          (*(this->m_ladderTimer._vptr_CountdownTimer + 2))(&this->m_ladderTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_ladderTimer.m_duration.m_Value = 2.0;
        }
      }
    }
    else
    {
      this->m_ladderInfo = 0;
    }
  }
  return v1;
}


// PlayerLocomotion::DismountLadderTop  (line 299, @0x0000000002f44fb0, libserver.so)  // inlines: CHeadLookParams, GetCenter, IsDebugging, IsElapsed, NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, entindex, operator*, operator+, operator-
// calls: CountdownTimer::Now, VectorNormalize, NextBotManager::IsDebugFilterMatch, CEntityInstance::GetEntityIndex, NDebugOverlay::EntityText, NDebugOverlay::HorzArrow
// callers: PlayerLocomotion::TraverseLadder
// strings: "Ladder dismount", "Dismount top"
PlayerLocomotion::LadderState __fastcall PlayerLocomotion::DismountLadderTop(PlayerLocomotion *const this)
{
  __int64 v2; // r12
  const CNavArea *m_ladderDismountGoal; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int (**vptr_INextBotEventResponder)(...); // rax
  double v7; // xmm0_8
  vec_t v8; // xmm1_4
  float v9; // xmm0_4
  __m128i x_low; // xmm3
  float v11; // r13d
  float *v12; // rax
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  void (__fastcall *v15)(__int64, Vector *, _DWORD *); // rax
  INextBot *m_bot; // r12
  INextBot *v17; // rdi
  __int64 v18; // rax
  const CNavArea *v19; // rdx
  PlayerLocomotion::LadderState result; // eax
  char v21; // al
  const CEntityInstance *v22; // rax
  CEntityIndex v23; // eax
  const CNavArea *v24; // rax
  vec_t x; // xmm0_4
  vec_t v26; // xmm2_4
  int (**v27)(...); // rax
  vec_t v28; // xmm1_4
  float flDistToMoveTarget; // [rsp+14h] [rbp-9Ch]
  float v30; // [rsp+18h] [rbp-98h]
  float v31; // [rsp+1Ch] [rbp-94h]
  Vector vMoveTarget; // [rsp+20h] [rbp-90h] BYREF
  Vector vMyPos; // [rsp+30h] [rbp-80h]
  Vector vToMoveTarget; // [rsp+40h] [rbp-70h] BYREF
  Vector vLookPos; // [rsp+50h] [rbp-60h] BYREF
  Vector startPos; // [rsp+60h] [rbp-50h] BYREF
  _DWORD endPos[4]; // [rsp+70h] [rbp-40h] BYREF
  const char *v38; // [rsp+80h] [rbp-30h]
  char v39; // [rsp+88h] [rbp-28h]
  int v40; // [rsp+8Ch] [rbp-24h]

  if ( this->m_ladderInfo == 0 || CountdownTimer::Now(&this->m_ladderTimer) >= this->m_ladderTimer.m_timestamp.m_Value )
    goto LABEL_7;
  v2 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  m_ladderDismountGoal = this->m_ladderDismountGoal;
  y = m_ladderDismountGoal->m_vCenter.y;
  z = m_ladderDismountGoal->m_vCenter.z;
  vMoveTarget.x = m_ladderDismountGoal->m_vCenter.x;
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  vMoveTarget.y = y;
  vMoveTarget.z = z;
  v7 = (vptr_INextBotEventResponder[98])(this);
  vToMoveTarget.z = 0.0;
  *&vMyPos.x = v7;
  vMyPos.z = v8;
  vToMoveTarget.y = vMoveTarget.y - *(&v7 + 1);
  vToMoveTarget.x = vMoveTarget.x - *&v7;
  v9 = VectorNormalize(&vToMoveTarget);
  x_low = LODWORD(vToMoveTarget.x);
  flDistToMoveTarget = v9;
  *x_low.m128i_i32 = vToMoveTarget.x * 100.0;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v30 = vToMoveTarget.y * 100.0;
  v31 = 100.0 * vToMoveTarget.z;
  v12 = (*(*v2 + 536LL))(v2);
  v13 = v30 + v12[1];
  v14 = v31 + v12[2];
  vLookPos.x = v11 + *v12;
  vLookPos.y = v13;
  vLookPos.z = v14;
  v15 = *(*v2 + 552LL);
  v38 = "Ladder dismount";
  endPos[0] = 4;
  endPos[1] = 1036831949;
  *&endPos[2] = 0;
  v39 = 1;
  v40 = 1048576000;
  v15(v2, &vLookPos, endPos);
  (*(this->_vptr_INextBotEventResponder + 66))(this, &vMoveTarget, 10000000.0);
  m_bot = this->m_bot;
  if ( (g_NextBotManager.m_debugType & 0x10) != 0 )
  {
    if ( NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot) )
    {
      v21 = (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 16);
      v17 = this->m_bot;
      if ( v21 == 0 )
        goto LABEL_5;
      v22 = (*(v17->_vptr_INextBotEventResponder + 66))(v17);
      v23.m_Data = CEntityInstance::GetEntityIndex(v22).m_Data;
      NDebugOverlay::EntityText(v23, 0, "Dismount top", 0.1, 255, 255, 255, 255);
      v24 = this->m_ladderDismountGoal;
      x = v24->m_vCenter.x;
      v26 = v24->m_vCenter.y;
      endPos[2] = LODWORD(v24->m_vCenter.z);
      v27 = this->_vptr_INextBotEventResponder;
      *endPos = x;
      *&endPos[1] = v26;
      *&startPos.x = (v27[98])(this);
      startPos.z = v28;
      NDebugOverlay::HorzArrow(&startPos, endPos, 5.0, 0xFFu, 0xFFu, 0, 255, 0.1, 1);
    }
    v17 = this->m_bot;
  }
  else
  {
    v17 = this->m_bot;
  }
LABEL_5:
  v18 = (*(v17->_vptr_INextBotEventResponder + 66))(v17);
  v19 = (*(*v18 + 2888LL))(v18);
  result = PlayerLocomotion::LadderState::DISMOUNTING_LADDER_TOP;
  if ( v19 == this->m_ladderDismountGoal && flDistToMoveTarget < 10.0 )
  {
LABEL_7:
    this->m_ladderInfo = 0;
    return PlayerLocomotion::LadderState::NO_LADDER;
  }
  return result;
}


// PlayerLocomotion::DismountLadderBottom  (line 342, @0x0000000002f452b0, libserver.so)  // inlines: IsElapsed
// calls: CountdownTimer::Now, CBaseEntity::SetMoveType
// callers: PlayerLocomotion::TraverseLadder
PlayerLocomotion::LadderState __fastcall PlayerLocomotion::DismountLadderBottom(PlayerLocomotion *const this)
{
  CBaseEntity *v3; // rax

  if ( this->m_ladderInfo != 0 && CountdownTimer::Now(&this->m_ladderTimer) < this->m_ladderTimer.m_timestamp.m_Value )
  {
    if ( *((*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot) + 341) == 9 )
    {
      v3 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
      CBaseEntity::SetMoveType(v3, MoveType_t::MOVETYPE_WALK, MoveCollide_t::MOVECOLLIDE_DEFAULT);
      this->m_ladderInfo = 0;
    }
  }
  else
  {
    this->m_ladderInfo = 0;
  }
  return PlayerLocomotion::LadderState::NO_LADDER;
}


// PlayerLocomotion::Update  (line 362, @0x0000000002f45a30, libserver.so)  // inlines: CHeadLookParams, GetAbsVelocity, NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: PlayerLocomotion::TraverseLadder, VectorNormalize, CLocomotionBase::Update, CBaseEntity::SetAbsVelocity, CBaseEntity::CalcAbsoluteVelocity
// strings: "Facing impending jump/climb"
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerLocomotion::Update(PlayerLocomotion *const this)
{
  void (__fastcall *v2)(PlayerLocomotion *const); // r12
  double v3; // xmm0_8
  int v4; // xmm1_4
  vec_t v5; // xmm1_4
  float v6; // xmm0_4
  __m128i x_low; // xmm3
  float v8; // r12d
  __int64 v9; // rax
  INextBot *m_bot; // rdi
  float v11; // xmm1_4
  __int64 v12; // rax
  void (__fastcall *v13)(__int64, Vector *, __int128 *); // rcx
  __int64 v14; // rax
  bool v15; // zf
  CBaseEntity *v16; // rax
  float v17; // xmm0_4
  int (**v18)(...); // rax
  float v19; // xmm0_4
  int (**vptr_INextBotEventResponder)(...); // rax
  float v21; // [rsp+4h] [rbp-5Ch]
  float v22; // [rsp+8h] [rbp-58h]
  __int64 v23; // [rsp+8h] [rbp-58h]
  Vector vToLanding; // [rsp+10h] [rbp-50h] BYREF
  Vector vLookPos; // [rsp+20h] [rbp-40h] BYREF
  __int128 vVel; // [rsp+30h] [rbp-30h] OVERLAPPED BYREF
  const char *v27; // [rsp+40h] [rbp-20h]
  char v28; // [rsp+48h] [rbp-18h]
  int v29; // [rsp+4Ch] [rbp-14h]

  if ( !PlayerLocomotion::TraverseLadder(this) && (this->m_bIsJumpingAcrossGap || this->m_bIsClimbingUpToLedge) )
  {
    v2 = *(this->_vptr_INextBotEventResponder + 115);
    (*(this->_vptr_INextBotEventResponder + 102))(this);
    v2(this);
    v3 = (*(this->_vptr_INextBotEventResponder + 98))(this);
    vToLanding.z = 0.0;
    *&vVel = v3;
    *&v3 = this->m_vLandingGoal.y;
    DWORD2(vVel) = v4;
    v5 = this->m_vLandingGoal.x - *&vVel;
    vToLanding.y = *&v3 - *(&vVel + 1);
    vToLanding.x = v5;
    v6 = VectorNormalize(&vToLanding);
    if ( this->m_bHasLeftTheGround )
    {
      x_low = LODWORD(vToLanding.x);
      *x_low.m128i_i32 = vToLanding.x * 100.0;
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
      v21 = vToLanding.y * 100.0;
      v22 = 100.0 * vToLanding.z;
      v9 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
      *&vVel = (*(*v9 + 1312LL))(v9);
      m_bot = this->m_bot;
      *(&vVel + 2) = v11;
      vLookPos.y = v21 + *(&vVel + 1);
      vLookPos.x = v8 + *&vVel;
      vLookPos.z = v11 + v22;
      v12 = (*(m_bot->_vptr_INextBotEventResponder + 69))(m_bot);
      v13 = *(*v12 + 552LL);
      vVel = 0x3E80000000000004uLL;
      v27 = "Facing impending jump/climb";
      v28 = 1;
      v29 = 1048576000;
      v13(v12, &vLookPos, &vVel);
      if ( (*(this->_vptr_INextBotEventResponder + 83))(this) != 0 )
      {
        vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
        this->m_bIsClimbingUpToLedge = 0;
        this->m_bIsJumpingAcrossGap = 0;
        vptr_INextBotEventResponder[115](this, 0.0);
      }
    }
    else
    {
      if ( (*(this->_vptr_INextBotEventResponder + 71))(this, v6) == 0 )
        (*(this->_vptr_INextBotEventResponder + 70))(this);
      v14 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
      if ( (*(v14 + 573) & 0x10) != 0 )
      {
        v23 = v14;
        CBaseEntity::CalcAbsoluteVelocity(v14);
        v14 = v23;
      }
      v15 = !this->m_bIsJumpingAcrossGap;
      *&vVel = *(v14 + 444);
      DWORD2(vVel) = *(v14 + 452);
      if ( !v15 )
      {
        v17 = (*(this->_vptr_INextBotEventResponder + 102))(this);
        v18 = this->_vptr_INextBotEventResponder;
        *&vVel = v17 * vToLanding.x;
        v19 = (v18[102])(this);
        *(&vVel + 1) = v19 * vToLanding.y;
      }
      v16 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
      CBaseEntity::SetAbsVelocity(v16, &vVel);
      if ( (*(this->_vptr_INextBotEventResponder + 83))(this) == 0 )
        this->m_bHasLeftTheGround = 1;
    }
    (*(this->_vptr_INextBotEventResponder + 66))(this, &this->m_vLandingGoal, 1.0);
  }
  CLocomotionBase::Update(this);
}


// PlayerLocomotion::AdjustPosture  (line 428, @0x0000000002f45d00, libserver.so)
// calls: CLocomotionBase::AdjustPosture
void __fastcall PlayerLocomotion::AdjustPosture(PlayerLocomotion *const this, const Vector *const vMoveGoal)
{
  __int64 v4; // rbx

  v4 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  if ( (*(*v4 + 696LL))(v4, 0) != 0 || (*(*v4 + 696LL))(v4, 1) != 0 )
    CLocomotionBase::AdjustPosture(this, vMoveGoal);
}


// PlayerLocomotion::Approach  (line 443, @0x0000000002f45d70, libserver.so)  // inlines: CrossProduct, Dot, DotProduct, DotProduct2D, FastSqrt, GetBool, GetInt, GetMoveType, IsDebugging, IsOnLadder, Length, NormalizeInPlace, Vector2DLength, Vector2DNormalize, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator/=
// calls: CLocomotionBase::Approach, __dynamic_cast, CBasePlayer::EyeVectors, NextBotManager::IsDebugFilterMatch, DevMsg(char const*,...), CBaseEntity::GetAbsOrigin, NDebugOverlay::HorzArrow, NDebugOverlay::Line, CalcClosestPointOnLine, VectorNormalize
// strings: "PlayerLocomotion::Approach: No INextBotPlayerInput\n "
// globals: `typeinfo for'INextBotPlayerInput
void __fastcall PlayerLocomotion::Approach(
        PlayerLocomotion *const this,
        const Vector *const vPos,
        double a3,
        float flGoalWeight)
{
  INextBot *m_bot; // r12
  __int64 *v7; // r12
  float v8; // xmm0_4
  float y; // xmm0_4
  vec_t v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  double v14; // xmm4_8
  float v15; // xmm0_4
  double v16; // xmm3_8
  INextBot *v17; // r13
  bool IsDebugFilterMatch; // al
  double v19; // xmm0_8
  double v20; // xmm1_8
  double v21; // xmm3_8
  char v22; // al
  const Vector *AbsOrigin; // rax
  CBasePlayer *m_player; // rdi
  vec_t v25; // xmm0_4
  vec_t v26; // xmm1_4
  const Vector *v27; // rax
  INextBot *v28; // r13
  const Vector *v29; // rax
  CBasePlayer *v30; // rdi
  vec_t v31; // xmm0_4
  float v32; // xmm1_4
  const Vector *v33; // rax
  vec_t v34; // xmm1_4
  INextBot *v35; // r13
  const Vector *v36; // rax
  CBasePlayer *v37; // rdi
  vec_t v38; // xmm1_4
  vec_t v39; // xmm2_4
  const Vector *v40; // rax
  INextBot *v41; // r13
  bool v42; // al
  double v43; // xmm0_8
  double v44; // xmm1_8
  double v45; // xmm3_8
  char v46; // al
  const Vector *v47; // rax
  CBasePlayer *v48; // rdi
  vec_t v49; // xmm0_4
  float v50; // xmm1_4
  const Vector *v51; // rax
  char v52; // al
  double v53; // xmm1_8
  const CNavLadder *m_ladderInfo; // r13
  vec_t v55; // xmm1_4
  const CNavLadder *v56; // rax
  vec_t v57; // xmm2_4
  vec_t v58; // xmm0_4
  const CNavLadder *v59; // rax
  float v60; // xmm1_4
  float x; // xmm4_4
  float z; // xmm2_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  __int64 v65; // rax
  __int64 v66; // rax
  float v67; // [rsp+8h] [rbp-88h]
  float v68; // [rsp+Ch] [rbp-84h]
  float v69; // [rsp+Ch] [rbp-84h]
  int v70; // [rsp+Ch] [rbp-84h]
  float goalDistance; // [rsp+10h] [rbp-80h]
  float goalDistancea; // [rsp+10h] [rbp-80h]
  float goalDistanceb; // [rsp+10h] [rbp-80h]
  float goalDistancec; // [rsp+10h] [rbp-80h]
  int goalDistanced; // [rsp+10h] [rbp-80h]
  float forward; // [rsp+14h] [rbp-7Ch]
  float forward_4; // [rsp+18h] [rbp-78h]
  float forward_4a; // [rsp+18h] [rbp-78h]
  float v79; // [rsp+1Ch] [rbp-74h]
  float v80; // [rsp+1Ch] [rbp-74h]
  float v81; // [rsp+1Ch] [rbp-74h]
  Vector forward3D; // [rsp+20h] [rbp-70h] BYREF
  Vector posOnLadder; // [rsp+30h] [rbp-60h] BYREF
  Vector alongLadder; // [rsp+40h] [rbp-50h] BYREF
  Vector away; // [rsp+50h] [rbp-40h] BYREF
  Vector endPos; // [rsp+60h] [rbp-30h] BYREF

  CLocomotionBase::Approach(this, vPos, COERCE_DOUBLE(1065353216), flGoalWeight);
  (*(this->_vptr_INextBotEventResponder + 114))(this, vPos);
  m_bot = this->m_bot;
  if ( (g_NextBotManager.m_debugType & 0x10) != 0 )
  {
    if ( NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
      && (*(m_bot->_vptr_INextBotEventResponder + 96))(m_bot, 16) != 0 )
    {
      *&endPos.x = (*(this->_vptr_INextBotEventResponder + 98))(this);
      endPos.z = v34;
      NDebugOverlay::Line(&endPos, vPos, 0xFFu, 0xFFu, 0, 1, 0.1);
    }
    m_bot = this->m_bot;
    if ( m_bot == 0 )
      goto LABEL_24;
  }
  else if ( m_bot == 0 )
  {
LABEL_24:
    DevMsg("PlayerLocomotion::Approach: No INextBotPlayerInput\n ");
    return;
  }
  v7 = __dynamic_cast(m_bot, &`typeinfo for'INextBot, &`typeinfo for'INextBotPlayerInput, -2);
  if ( v7 == 0 )
    goto LABEL_24;
  CBasePlayer::EyeVectors(this->m_player, &forward3D, 0, 0);
  v8 = fsqrt((forward3D.x * forward3D.x) + (forward3D.y * forward3D.y));
  if ( v8 == 0.0 )
  {
    v79 = 0.0;
    forward = 0.0;
    forward_4 = -0.0;
  }
  else
  {
    forward = forward3D.x * (1.0 / v8);
    v79 = forward3D.y * (1.0 / v8);
    forward_4 = -forward;
  }
  *&endPos.x = (*(this->_vptr_INextBotEventResponder + 98))(this);
  y = vPos->y;
  endPos.z = v10;
  v11 = y - endPos.y;
  v12 = vPos->x - endPos.x;
  v13 = fsqrt((v12 * v12) + (v11 * v11));
  if ( v13 == 0.0 )
  {
    v15 = 0.0;
    v14 = 0.0;
  }
  else
  {
    HIDWORD(v14) = 0;
    *&v14 = v12 * (1.0 / v13);
    v15 = v11 * (1.0 / v13);
  }
  *&v16 = LODWORD(forward);
  *&v16 = (forward * *&v14) + (v79 * v15);
  *&v14 = (*&v14 * v79) + (v15 * forward_4);
  if ( this->m_player->m_MoveType.m_Value == MoveType_t::MOVETYPE_LADDER
    && (v67 = *&v14,
        v68 = *&v16,
        goalDistanceb = v13,
        v52 = (*(this->_vptr_INextBotEventResponder + 90))(this),
        v13 = goalDistanceb,
        *&v16 = LODWORD(v68),
        *&v14 = LODWORD(v67),
        v52 != 0)
    && (this->m_ladderState - 3) <= 1 )
  {
    (*(*v7 + 80))(v7, -1.0, v53, goalDistanceb, v68, v67);
    m_ladderInfo = this->m_ladderInfo;
    if ( m_ladderInfo != 0 )
    {
      *&endPos.x = (*(this->_vptr_INextBotEventResponder + 98))(this);
      endPos.z = v55;
      CalcClosestPointOnLine(&endPos, &m_ladderInfo->m_vBottom, &m_ladderInfo->m_vTop, &posOnLadder, 0);
      v56 = this->m_ladderInfo;
      v57 = v56->m_vTop.x - v56->m_vBottom.x;
      v58 = v56->m_vTop.z - v56->m_vBottom.z;
      alongLadder.y = v56->m_vTop.y - v56->m_vBottom.y;
      alongLadder.x = v57;
      alongLadder.z = v58;
      VectorNormalize(&alongLadder);
      v59 = this->m_ladderInfo;
      v60 = v59->m_vNormal.y;
      x = v59->m_vNormal.x;
      z = v59->m_vNormal.z;
      v69 = (alongLadder.x * v60) - (alongLadder.y * x);
      forward_4a = (x * alongLadder.z) - (alongLadder.x * z);
      v80 = (alongLadder.y * z) - (alongLadder.z * v60);
      *&endPos.x = (*(this->_vptr_INextBotEventResponder + 98))(this);
      endPos.z = v63;
      goalDistancec = v80;
      away.x = endPos.x - posOnLadder.x;
      away.y = endPos.y - posOnLadder.y;
      away.z = v63 - posOnLadder.z;
      v81 = (((endPos.x - posOnLadder.x) * v80) + ((endPos.y - posOnLadder.y) * forward_4a))
          + ((v63 - posOnLadder.z) * v69);
      v64 = VectorNormalize(&away);
      v65 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot, v64);
      if ( v81 > (((*(*v65 + 744LL))(v65) * 0.25) + 5.0) )
      {
        v66 = *v7;
        if ( (((goalDistancec * away.x) + (forward_4a * away.y)) + (v69 * away.z)) <= 0.0 )
          (*(v66 + 128))(v7, -1.0);
        else
          (*(v66 + 112))(v7, -1.0);
      }
    }
  }
  else
  {
    if ( NextBotPlayerMoveDirect.m_pParent->m_Value.m_nValue != 0 && v13 > 0.25 )
    {
      v70 = LODWORD(v14);
      goalDistanced = LODWORD(v16);
      (*(*v7 + 192))(v7, v16, v14);
      LODWORD(v14) = v70;
      LODWORD(v16) = goalDistanced;
    }
    if ( *&v16 > 0.25 )
    {
      goalDistance = *&v14;
      (*(*v7 + 80))(v7, -1.0);
      v17 = this->m_bot;
      *&v14 = goalDistance;
      if ( (g_NextBotManager.m_debugType & 0x10) != 0 )
      {
        IsDebugFilterMatch = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot);
        *&v14 = goalDistance;
        if ( IsDebugFilterMatch )
        {
          v22 = (*(v17->_vptr_INextBotEventResponder + 96))(v17, 16, v19, v20, -0.25, v21, goalDistance);
          *&v14 = goalDistance;
          if ( v22 != 0 )
          {
            AbsOrigin = CBaseEntity::GetAbsOrigin(this->m_player);
            m_player = this->m_player;
            v25 = (v79 * 50.0) + AbsOrigin->y;
            v26 = (50.0 * forward) + AbsOrigin->x;
            endPos.z = AbsOrigin->z + 0.0;
            endPos.y = v25;
            endPos.x = v26;
            v27 = CBaseEntity::GetAbsOrigin(m_player);
            NDebugOverlay::HorzArrow(v27, &endPos, 15.0, 0, 0xFFu, 0, 255, 0.1, 1);
            *&v14 = goalDistance;
          }
        }
      }
    }
    else if ( *&v16 < -0.25 )
    {
      goalDistancea = *&v14;
      (*(*v7 + 96))(v7, -1.0);
      v41 = this->m_bot;
      *&v14 = goalDistancea;
      if ( (g_NextBotManager.m_debugType & 0x10) != 0 )
      {
        v42 = NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot);
        *&v14 = goalDistancea;
        if ( v42 )
        {
          v46 = (*(v41->_vptr_INextBotEventResponder + 96))(v41, 16, v43, v44, -0.25, v45, goalDistancea);
          *&v14 = goalDistancea;
          if ( v46 != 0 )
          {
            v47 = CBaseEntity::GetAbsOrigin(this->m_player);
            v48 = this->m_player;
            v49 = v47->y - (v79 * 50.0);
            v50 = v47->x;
            endPos.z = v47->z;
            endPos.y = v49;
            endPos.x = v50 - (forward * 50.0);
            v51 = CBaseEntity::GetAbsOrigin(v48);
            NDebugOverlay::HorzArrow(v51, &endPos, 15.0, 0xFFu, 0, 0, 255, 0.1, 1);
            *&v14 = goalDistancea;
          }
        }
      }
    }
    if ( *&v14 <= -0.25 )
    {
      (*(*v7 + 112))(v7, -1.0);
      v28 = this->m_bot;
      if ( (g_NextBotManager.m_debugType & 0x10) != 0
        && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
        && (*(v28->_vptr_INextBotEventResponder + 96))(v28, 16) != 0 )
      {
        v29 = CBaseEntity::GetAbsOrigin(this->m_player);
        v30 = this->m_player;
        v31 = v29->y - (forward_4 * 50.0);
        v32 = v29->x;
        endPos.z = v29->z;
        endPos.y = v31;
        endPos.x = v32 - (v79 * 50.0);
        v33 = CBaseEntity::GetAbsOrigin(v30);
        NDebugOverlay::HorzArrow(v33, &endPos, 15.0, 0xFFu, 0, 0xFFu, 255, 0.1, 1);
      }
    }
    else if ( *&v14 >= 0.25 )
    {
      (*(*v7 + 128))(v7, -1.0);
      v35 = this->m_bot;
      if ( (g_NextBotManager.m_debugType & 0x10) != 0
        && NextBotManager::IsDebugFilterMatch(&g_NextBotManager, this->m_bot)
        && (*(v35->_vptr_INextBotEventResponder + 96))(v35, 16) != 0 )
      {
        v36 = CBaseEntity::GetAbsOrigin(this->m_player);
        v37 = this->m_player;
        v38 = (forward_4 * 50.0) + v36->y;
        v39 = (50.0 * v79) + v36->x;
        endPos.z = v36->z + 0.0;
        endPos.y = v38;
        endPos.x = v39;
        v40 = CBaseEntity::GetAbsOrigin(v37);
        NDebugOverlay::HorzArrow(v40, &endPos, 15.0, 0, 0xFFu, 0xFFu, 255, 0.1, 1);
      }
    }
  }
  if ( (*(this->_vptr_INextBotEventResponder + 78))(this) == 0 )
    (*(*v7 + 176))(v7, -1.0);
  if ( NextBotFreeze.m_pParent->m_Value.m_nValue != 0 )
  {
    (*(*v7 + 88))(v7);
    (*(*v7 + 104))(v7);
    (*(*v7 + 120))(v7);
    (*(*v7 + 136))(v7);
    (*(*v7 + 184))(v7);
  }
}


// PlayerLocomotion::DriveTo  (line 593, @0x0000000002f46750, libserver.so)
// calls: CLocomotionBase::DriveTo
void __fastcall PlayerLocomotion::DriveTo(PlayerLocomotion *const this, const Vector *const pos)
{
  CLocomotionBase::DriveTo(this, pos);
  (*(this->_vptr_INextBotEventResponder + 66))(this, pos, 1.0);
}


// PlayerLocomotion::IsClimbPossible  (line 602, @0x0000000002f45470, libserver.so)
// calls: CPathFollower::IsDiscontinuityAhead, CBaseEntity::VPhysicsGetObject, __dynamic_cast
// callers: PlayerLocomotion::ClimbUpToLedge
bool __fastcall PlayerLocomotion::IsClimbPossible(
        const PlayerLocomotion *const this,
        INextBot *pMe,
        const CBaseEntity *pObstacle)
{
  const CPathFollower *v5; // rax
  IPhysicsObject *Object; // rax

  v5 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 85))(this->m_bot, pMe);
  if ( v5 == 0 )
    return 1;
  if ( CPathFollower::IsDiscontinuityAhead(v5, this->m_bot, CPathSegment::SegmentType::PATH_SEG_CLIMB_UP, 75.0) != 0 )
    return 1;
  if ( pObstacle == 0 )
    return 1;
  if ( (*(pObstacle->_vptr_IHandleEntity + 143))(pObstacle) != 0 )
    return 1;
  Object = CBaseEntity::VPhysicsGetObject(pObstacle);
  if ( Object != 0 && (*(*Object + 1512LL))(Object) != 0 )
    return 1;
  if ( __dynamic_cast(pObstacle, &`typeinfo for'CBaseEntity, &`typeinfo for'CBreakableProp, 0) != 0 )
    return 1;
  else
    return *((*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 68))(this->m_bot) + 64);
}


// PlayerLocomotion::ClimbUpToLedge  (line 642, @0x0000000002f45520, libserver.so)  // inlines: operator=
// calls: PlayerLocomotion::IsClimbPossible
bool __fastcall PlayerLocomotion::ClimbUpToLedge(
        PlayerLocomotion *const this,
        const Vector *const landingGoal,
        const Vector *const landingForward,
        const CBaseEntity *obstacle)
{
  bool result; // al
  vec_t z; // xmm0_4
  bool v8; // [rsp+Ch] [rbp-14h]

  result = PlayerLocomotion::IsClimbPossible(this, this->m_bot, obstacle);
  if ( result )
  {
    v8 = result;
    (*(this->_vptr_INextBotEventResponder + 70))(this);
    this->m_bIsClimbingUpToLedge = 1;
    this->m_vLandingGoal.x = landingGoal->x;
    this->m_vLandingGoal.y = landingGoal->y;
    z = landingGoal->z;
    this->m_bHasLeftTheGround = 0;
    this->m_vLandingGoal.z = z;
    return v8;
  }
  return result;
}


// PlayerLocomotion::JumpAcrossGap  (line 660, @0x0000000002f41660, libserver.so)  // inlines: CHeadLookParams, operator=
// strings: "Looking forward while jumping a gap"
void __fastcall PlayerLocomotion::JumpAcrossGap(
        PlayerLocomotion *const this,
        const Vector *const landingGoal,
        const Vector *const landingForward)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  void (__fastcall *v7)(__int64 *, const Vector *const, _DWORD *); // rcx
  vec_t z; // xmm0_4
  _DWORD v9[2]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v10; // [rsp+8h] [rbp-28h]
  const char *v11; // [rsp+10h] [rbp-20h]
  char v12; // [rsp+18h] [rbp-18h]
  int v13; // [rsp+1Ch] [rbp-14h]

  (*(this->_vptr_INextBotEventResponder + 70))(this, landingGoal, landingForward);
  v5 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  v6 = *v5;
  v11 = "Looking forward while jumping a gap";
  v9[0] = 4;
  v9[1] = 1065353216;
  v10 = 0;
  v7 = *(v6 + 552);
  v12 = 1;
  v13 = 1048576000;
  v7(v5, landingGoal, v9);
  this->m_bIsJumpingAcrossGap = 1;
  this->m_vLandingGoal.x = landingGoal->x;
  this->m_vLandingGoal.y = landingGoal->y;
  z = landingGoal->z;
  this->m_bHasLeftTheGround = 0;
  this->m_vLandingGoal.z = z;
}


// PlayerLocomotion::Jump  (line 674, @0x0000000002f42080, libserver.so)  // inlines: NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now, __dynamic_cast
// globals: `typeinfo for'INextBotPlayerInput
void __fastcall PlayerLocomotion::Jump(PlayerLocomotion *const this)
{
  CountdownTimer *p_m_jumpTimer; // r12
  float v3; // xmm0_4
  INextBot *m_bot; // rdi
  void *v5; // rax
  float v6; // [rsp+Ch] [rbp-14h]

  p_m_jumpTimer = &this->m_jumpTimer;
  this->m_bIsJumping = 1;
  v3 = CountdownTimer::Now(&this->m_jumpTimer) + 0.5;
  if ( v3 != this->m_jumpTimer.m_timestamp.m_Value )
  {
    v6 = v3;
    (*(this->m_jumpTimer._vptr_CountdownTimer + 2))(p_m_jumpTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_jumpTimer.m_timestamp.m_Value = v6;
  }
  if ( this->m_jumpTimer.m_duration.m_Value == 0.5 )
  {
    m_bot = this->m_bot;
    if ( m_bot == 0 )
      return;
  }
  else
  {
    (*(this->m_jumpTimer._vptr_CountdownTimer + 2))(p_m_jumpTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_bot = this->m_bot;
    this->m_jumpTimer.m_duration.m_Value = 0.5;
    if ( m_bot == 0 )
      return;
  }
  v5 = __dynamic_cast(m_bot, &`typeinfo for'INextBot, &`typeinfo for'INextBotPlayerInput, -2);
  if ( v5 != 0 )
    (*(*v5 + 144LL))(v5, -1.0);
}


// PlayerLocomotion::IsClimbingOrJumping  (line 688, @0x0000000002f41b40, libserver.so)  // inlines: IsElapsed
// calls: CountdownTimer::Now
bool __fastcall PlayerLocomotion::IsClimbingOrJumping(const PlayerLocomotion *const this)
{
  bool m_bIsJumping; // bl

  m_bIsJumping = this->m_bIsJumping;
  if ( m_bIsJumping
    && CountdownTimer::Now(&this->m_jumpTimer) >= this->m_jumpTimer.m_timestamp.m_Value
    && (*(this->_vptr_INextBotEventResponder + 83))(this) != 0 )
  {
    this->m_bIsJumping = 0;
    return 0;
  }
  return m_bIsJumping;
}


// PlayerLocomotion::IsClimbingUpToLedge  (line 704, @0x0000000002f41710, libserver.so)
bool __fastcall PlayerLocomotion::IsClimbingUpToLedge(const PlayerLocomotion *const this)
{
  return this->m_bIsClimbingUpToLedge;
}


// PlayerLocomotion::IsJumpingAcrossGap  (line 711, @0x0000000002f41720, libserver.so)
bool __fastcall PlayerLocomotion::IsJumpingAcrossGap(const PlayerLocomotion *const this)
{
  return this->m_bIsJumpingAcrossGap;
}


// PlayerLocomotion::ClimbLadder  (line 718, @0x0000000002f41730, libserver.so)
void __fastcall PlayerLocomotion::ClimbLadder(
        PlayerLocomotion *const this,
        const CNavLadder *ladder,
        const CNavArea *dismountGoal)
{
  this->m_ladderInfo = ladder;
  this->m_ladderState = PlayerLocomotion::LadderState::APPROACHING_ASCENDING_LADDER;
  this->m_ladderDismountGoal = dismountGoal;
}


// PlayerLocomotion::DescendLadder  (line 732, @0x0000000002f41750, libserver.so)
void __fastcall PlayerLocomotion::DescendLadder(
        PlayerLocomotion *const this,
        const CNavLadder *ladder,
        const CNavArea *dismountGoal)
{
  this->m_ladderInfo = ladder;
  this->m_ladderState = PlayerLocomotion::LadderState::APPROACHING_DESCENDING_LADDER;
  this->m_ladderDismountGoal = dismountGoal;
}


// PlayerLocomotion::FaceTowards  (line 746, @0x0000000002f41770, libserver.so)  // inlines: CHeadLookParams, Vector
// strings: "Body facing"
void __fastcall PlayerLocomotion::FaceTowards(PlayerLocomotion *const this, const Vector *const target)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  double v6; // xmm0_8
  vec_t x; // xmm2_4
  vec_t v8; // xmm1_4
  __int64 v9; // rax
  void (__fastcall *v10)(__int64 *, Vector *, _DWORD *); // rax
  Vector vLookPos; // [rsp+0h] [rbp-60h] BYREF
  double v12; // [rsp+10h] [rbp-50h]
  vec_t v13; // [rsp+18h] [rbp-48h]
  _DWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  const char *v16; // [rsp+30h] [rbp-30h]
  char v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+3Ch] [rbp-24h]

  v4 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 69))(this->m_bot);
  if ( v4 != 0 )
  {
    v5 = (*(this->m_bot->CLocomotionBase::INextBotComponent::_vptr_INextBotEventResponder + 66))(this->m_bot);
    v6 = (*(*v5 + 1312LL))(v5);
    x = target->x;
    v12 = v6;
    *&v6 = target->y;
    vLookPos.x = x;
    vLookPos.y = *&v6;
    *&v6 = this->m_flFacingEaseInTime;
    vLookPos.z = v8;
    v9 = *v4;
    v13 = v8;
    v14[0] = 0;
    v14[1] = 1036831949;
    v15 = 0;
    v10 = *(v9 + 552);
    v16 = "Body facing";
    v17 = 0;
    v18 = LODWORD(v6);
    v10(v4, &vLookPos, v14);
  }
}


