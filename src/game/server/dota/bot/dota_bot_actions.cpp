
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotAction::CDOTA_BotAction  (line 31, @0x00000000027eb300, libserver.so)
void __fastcall CDOTA_BotAction::CDOTA_BotAction(CDOTA_BotAction *const this, CDOTA_Bot *pBot)
{
  this->_vptr_CDOTA_BotAction = off_42B6970;
  this->m_pBot = pBot;
}


// CDOTA_BotAction_Idle::CDOTA_BotAction_Idle  (line 38, @0x00000000027eb320, libserver.so)  // inlines: CDOTA_BotAction
void __fastcall CDOTA_BotAction_Idle::CDOTA_BotAction_Idle(CDOTA_BotAction_Idle *const this, CDOTA_Bot *pBot)
{
  this->m_pBot = pBot;
  this->_vptr_CDOTA_BotAction = off_42B6EB0;
}


// CDOTA_BotAction_Idle::OnStart  (line 46, @0x0000000002804040, libserver.so)  // inlines: OnStart
// calls: CDOTA_Bot::Action_Stop
void __fastcall CDOTA_BotAction_Idle::OnStart(CDOTA_BotAction_Idle *const this)
{
  this->m_iActionFrame = gpGlobals->framecount;
  CDOTA_Bot::Action_Stop(this->m_pBot);
}


// CDOTA_BotAction_Idle::OnEnd  (line 55, @0x00000000027e0130, libserver.so)
void __fastcall CDOTA_BotAction_Idle::OnEnd(CDOTA_BotAction_Idle *const this)
{
  ;
}


// CDOTA_BotAction_Idle::Think  (line 61, @0x00000000027e0140, libserver.so)
void __fastcall CDOTA_BotAction_Idle::Think(CDOTA_BotAction_Idle *const this)
{
  ;
}


// CDOTA_BotAction_MoveTo::CDOTA_BotAction_MoveTo  (line 67, @0x00000000027f93a0, libserver.so)  // inlines: CDOTA_BotAction, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CDOTA_BotAction, ~CUtlVector
// calls: CountdownTimer::CountdownTimer, CBaseEntity::GetAbsOrigin, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTA_Bot::SetMoveAction, CDOTA_Bot_Script::Action_MoveToLocation
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_MoveTo::CDOTA_BotAction_MoveTo(
        CDOTA_BotAction_MoveTo *const this,
        CDOTA_Bot *pBot,
        const Vector *const vLocation,
        bool bAllowVisibleToEnemy)
{
  CountdownTimer *p_m_RecalcTimer; // rdi
  CDOTA_Bot *m_pBot; // rdx
  CConcreteEntityList *v9; // rsi
  uint32 m_Index; // eax
  unsigned __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  const CBaseEntity *m_pInstance; // rdi
  CGameRules *v15; // rax
  vec_t z; // xmm0_4
  float v17; // xmm0_4

  p_m_RecalcTimer = &this->m_RecalcTimer;
  p_m_RecalcTimer[-1]._vptr_CountdownTimer = pBot;
  *&p_m_RecalcTimer[-2].m_bUseGlobalsTime = off_42B6F30;
  CountdownTimer::CountdownTimer(p_m_RecalcTimer);
  m_pBot = this->m_pBot;
  this->m_vWaypoints.m_Size = 0;
  this->m_vWaypoints.m_Memory.m_pMemory = 0;
  v9 = CEntityHandle::gm_pEntityList;
  this->m_vWaypoints.m_Memory.m_nAllocationCount = 0;
  this->m_vWaypoints.m_Memory.m_nGrowSize = 0;
  this->m_hTargetUnit.m_Index = -1;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v11 = m_pBot->m_hUnit.m_Index, (v12 = v9->m_pIdentityChunks[(v11 >> 9) & 0x3F]) == 0)
    || (v13 = &v12[v11 & 0x1FF]) == 0
    || m_Index != v13->m_EHandle.m_Index
    || (m_pInstance = v13->m_pInstance, v13->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  this->m_vStart = *CBaseEntity::GetAbsOrigin(m_pInstance);
  this->m_vDestination.x = vLocation->x;
  v15 = g_pGameRules;
  this->m_vDestination.y = vLocation->y;
  z = vLocation->z;
  this->m_bTowardsUnit = 0;
  this->m_bAllowVisibleToEnemy = bAllowVisibleToEnemy;
  this->m_vDestination.z = z;
  v17 = 0.0;
  if ( v15 != 0 )
    v17 = *&v15[18].m_szQuestName[20];
  this->m_fStartTime = v17;
  this->m_bWaypointsValid = 0;
  this->m_bForceRecalculate = 0;
}


// CDOTA_BotAction_MoveTo::CDOTA_BotAction_MoveTo  (line 84, @0x00000000027f9510, libserver.so)  // inlines: CDOTA_BotAction, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CDOTA_BotAction, ~CUtlVector
// calls: CountdownTimer::CountdownTimer, CBaseEntity::GetAbsOrigin, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTA_Bot_Script::Action_MoveToUnit
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_MoveTo::CDOTA_BotAction_MoveTo(
        CDOTA_BotAction_MoveTo *const this,
        CDOTA_Bot *pBot,
        CDOTA_BaseNPC *pTargetUnit)
{
  CountdownTimer *p_m_RecalcTimer; // rdi
  CDOTA_Bot *m_pBot; // rdx
  CConcreteEntityList *v7; // rsi
  uint32 m_Index; // eax
  unsigned __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  float v16; // xmm0_4

  this->m_pBot = pBot;
  p_m_RecalcTimer = &this->m_RecalcTimer;
  *&p_m_RecalcTimer[-2].m_bUseGlobalsTime = off_42B6F30;
  CountdownTimer::CountdownTimer(p_m_RecalcTimer);
  m_pBot = this->m_pBot;
  this->m_vWaypoints.m_Size = 0;
  this->m_vWaypoints.m_Memory.m_pMemory = 0;
  v7 = CEntityHandle::gm_pEntityList;
  this->m_vWaypoints.m_Memory.m_nAllocationCount = 0;
  this->m_vWaypoints.m_Memory.m_nGrowSize = 0;
  this->m_hTargetUnit.m_Index = -1;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v9 = m_pBot->m_hUnit.m_Index, (v10 = v7->m_pIdentityChunks[(v9 >> 9) & 0x3F]) == 0)
    || (v11 = &v10[v9 & 0x1FF]) == 0
    || m_Index != v11->m_EHandle.m_Index
    || (m_pInstance = v11->m_pInstance, v11->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  this->m_vStart = *CBaseEntity::GetAbsOrigin(m_pInstance);
  this->m_vDestination = *CBaseEntity::GetAbsOrigin(pTargetUnit);
  if ( pTargetUnit != 0 && (m_pEntity = pTargetUnit->m_pEntity) != 0 )
  {
    v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v15 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTargetUnit.m_Index) = v15 | this->m_hTargetUnit.m_Index & 0x8000;
    this->m_hTargetUnit.m_Index = (v14 << 15) | this->m_hTargetUnit.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTargetUnit.m_Index = -1;
  }
  this->m_bTowardsUnit = 1;
  v16 = 0.0;
  this->m_bAllowVisibleToEnemy = 1;
  if ( g_pGameRules != 0 )
    v16 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartTime = v16;
  this->m_bWaypointsValid = 0;
  this->m_bForceRecalculate = 0;
}


// CDOTA_BotAction_MoveTo::UpdateLocation  (line 102, @0x00000000027eb340, libserver.so)  // inlines: DOTAGameRules, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnit, IndexToIdentity, IsElapsed, IsValid, Length2D, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator=<float>
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Bot_Pathing::BuildPath, CountdownTimer::Now
// callers: CDOTA_Bot::SetMoveAction, CDOTA_Bot_Script::Action_MoveToLocation
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_MoveTo::UpdateLocation(
        CDOTA_BotAction_MoveTo *const this,
        const Vector *const vLocation)
{
  float v4; // xmm0_4
  bool v5; // r13
  float v6; // xmm0_4
  CDOTA_Bot *m_pBot; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  const CBaseEntity *m_pInstance; // rdi
  Vector *AbsOrigin; // rax
  bool v14; // zf
  CDOTA_Bot *v15; // rdi
  int v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // [rsp+8h] [rbp-28h]
  float v21; // [rsp+Ch] [rbp-24h]
  float v22; // [rsp+Ch] [rbp-24h]

  v4 = fsqrt(
         ((vLocation->x - this->m_vDestination.x) * (vLocation->x - this->m_vDestination.x))
       + ((vLocation->y - this->m_vDestination.y) * (vLocation->y - this->m_vDestination.y)));
  v5 = v4 > 1500.0;
  if ( v4 > 1500.0 )
  {
    v6 = 0.0;
    if ( g_pGameRules != 0 )
      v6 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_fStartTime = v6;
  }
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v9 = m_pBot->m_hUnit.m_Index, (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9) & 0x3F]) == 0)
    || (v11 = &v10[v9 & 0x1FF]) == 0
    || m_Index != v11->m_EHandle.m_Index
    || (m_pInstance = v11->m_pInstance, v11->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v14 = this->m_iResult == 2;
  this->m_vStart = *AbsOrigin;
  this->m_vDestination.x = vLocation->x;
  this->m_vDestination.y = vLocation->y;
  this->m_vDestination.z = vLocation->z;
  if ( v14 )
  {
    if ( CountdownTimer::Now(&this->m_RecalcTimer) >= this->m_RecalcTimer.m_timestamp.m_Value )
    {
      *&v16 = 5.0;
      if ( v5 )
        *&v16 = 1.0;
      v21 = *&v16;
      v17 = CountdownTimer::Now(&this->m_RecalcTimer);
      v18 = v21;
      v19 = v17 + v21;
      if ( v19 != this->m_RecalcTimer.m_timestamp.m_Value )
      {
        v20 = v19;
        (*(this->m_RecalcTimer._vptr_CountdownTimer + 2))(&this->m_RecalcTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v18 = v21;
        this->m_RecalcTimer.m_timestamp.m_Value = v20;
      }
      if ( v18 != this->m_RecalcTimer.m_duration.m_Value )
      {
        v22 = v18;
        (*(this->m_RecalcTimer._vptr_CountdownTimer + 2))(&this->m_RecalcTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_RecalcTimer.m_duration.m_Value = v22;
      }
    }
  }
  else
  {
    v15 = this->m_pBot;
    this->m_iResult = 2;
    CDOTA_Bot_Pathing::BuildPath(
      &v15->m_Pathing,
      &this->m_vStart,
      &this->m_vDestination,
      this->m_bAllowVisibleToEnemy,
      1);
  }
}


// CDOTA_BotAction_MoveTo::OnStart  (line 132, @0x00000000028032c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, OnStart, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator==
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Bot::Action_MoveTo, CDOTA_Bot_Pathing::BuildPath
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_MoveTo::OnStart(CDOTA_BotAction_MoveTo *const this)
{
  bool v2; // zf
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_Bot *v6; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *m_pBot; // rax

  v2 = !this->m_bTowardsUnit;
  this->m_iActionFrame = gpGlobals->framecount;
  if ( v2
    || (v3 = this->m_hTargetUnit.m_Index) + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[this->m_hTargetUnit.m_Index & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    m_pBot = this->m_pBot;
    this->m_iResult = 2;
    CDOTA_Bot_Pathing::BuildPath(
      &m_pBot->m_Pathing,
      &this->m_vStart,
      &this->m_vDestination,
      this->m_bAllowVisibleToEnemy,
      1);
    CDOTA_Bot::Action_MoveTo(this->m_pBot, &this->m_vDestination, -1);
  }
  else
  {
    v6 = this->m_pBot;
    m_Index = v6->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v8 = v6->m_hUnit.m_Index, (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) == 0)
      || (v10 = &v9[v8 & 0x1FF]) == 0
      || m_Index != v10->m_EHandle.m_Index
      || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    CDOTA_Bot::Action_MoveTo(this->m_pBot, AbsOrigin, -1);
  }
}


// CDOTA_BotAction_MoveTo::OnEnd  (line 151, @0x00000000027e0150, libserver.so)
void __fastcall CDOTA_BotAction_MoveTo::OnEnd(CDOTA_BotAction_MoveTo *const this)
{
  ;
}


// CDOTA_BotAction_MoveTo::Think  (line 157, @0x0000000002806210, libserver.so)  // inlines: CEntityHandle, CHandle, ClearFailedPathCount, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, GetUnit, GetUnitName, IncrementFailedPathCount, IndexToIdentity, Invalidate, IsElapsed, IsValid, Length2DSqr, LookupEntity, NetworkStateChanged, Set, Start, String, ToCStr, ToDOTABaseNPC, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator=<float>, operator==, operator[]
// calls: CDOTA_Bot::PopAction, CDOTA_Bot_Pathing::UpdateSearch, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot_Pathing::BuildPath, CountdownTimer::Now, CDOTA_Commander::IsDebuggingEntity, Warning, NDebugOverlay::Line, NDebugOverlay::Sphere, CDOTA_Bot::Action_MoveTo, CDOTA_BotAction_MoveTo::GeneratePathWaypoints (16 total)
// strings: "Failed pathfind by %s, location %2.0f %2.0f %2.0f\n"
// globals: CEntityHandle::gm_pEntityList, g_DOTACommander
void __fastcall CDOTA_BotAction_MoveTo::Think(CDOTA_BotAction_MoveTo *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *v5; // rdi
  int m_iResult; // r14d
  int updated; // eax
  bool v8; // zf
  CountdownTimer *p_m_RecalcTimer; // r12
  CDOTA_Bot *m_pBot; // rax
  CEntityInstance *v11; // rax
  const CBaseEntity *v12; // rdi
  Vector *AbsOrigin; // rax
  const CBaseEntity *v14; // rax
  float v15; // xmm0_4
  CDOTA_Bot *v16; // r12
  CEntityInstance *v17; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v19; // cx
  int v20; // eax
  CEntityInstance *v21; // rax
  const char *m_pAsString; // rsi
  CEntityInstance *v23; // rax
  CEntityInstance *v24; // rdi
  vec_t v25; // xmm1_4
  CEntityInstance *v26; // rax
  CEntityInstance *v27; // rdi
  vec_t v28; // xmm1_4
  CEntityInstance *v29; // rax
  CEntityInstance *v30; // rdi
  vec_t v31; // xmm1_4
  CDOTA_Bot *v32; // r12
  CEntityInstance *v33; // rax
  float v34; // xmm1_4
  float v35; // r13d
  Vector *v36; // r12
  const CBaseEntity *v37; // rdi
  const Vector *v38; // rax
  const CEntityHandle *p_m_hUnit; // rdi
  Vector *m_pMemory; // r12
  CEntityInstance *v41; // rax
  CEntityInstance *v42; // rdi
  __int64 v43; // r15
  double v44; // xmm0_8
  const Vector *v45; // rsi
  vec_t v46; // xmm1_4
  int v47; // r12d
  int m_Size; // edx
  __int64 v49; // r11
  int v50; // r10d
  CDOTA_Bot *v51; // rax
  int v52; // esi
  __int64 v53; // r12
  CDOTA_Bot *v54; // rax
  double z; // [rsp+8h] [rbp-58h]
  double y; // [rsp+10h] [rbp-50h]
  double x; // [rsp+18h] [rbp-48h]
  float v58; // [rsp+18h] [rbp-48h]
  Vector vLoc; // [rsp+20h] [rbp-40h] BYREF
  Vector LocationFromGrid; // 0:kr00_12.12

  if ( this->m_bTowardsUnit )
  {
    m_Index = this->m_hTargetUnit.m_Index;
    if ( m_Index + 2 <= 1 )
      goto LABEL_6;
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetUnit.m_Index) >> 9) & 0x3F];
    if ( v3 == 0 )
      goto LABEL_6;
    v4 = &v3[this->m_hTargetUnit.m_Index & 0x1FF];
    if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index || v4->m_pInstance == 0 )
      goto LABEL_6;
  }
  m_iResult = this->m_iResult;
  updated = CDOTA_Bot_Pathing::UpdateSearch(&this->m_pBot->m_Pathing, 1);
  v8 = !this->m_bForceRecalculate;
  this->m_iResult = updated;
  if ( v8 )
  {
    if ( this->m_RecalcTimer.m_timestamp.m_Value <= 0.0 )
      goto LABEL_22;
    p_m_RecalcTimer = &this->m_RecalcTimer;
    if ( CountdownTimer::Now(&this->m_RecalcTimer) < this->m_RecalcTimer.m_timestamp.m_Value )
      goto LABEL_22;
  }
  else
  {
    p_m_RecalcTimer = &this->m_RecalcTimer;
  }
  m_pBot = this->m_pBot;
  this->m_bForceRecalculate = 0;
  v11 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v11 == 0 || (v12 = v11, BYTE3(v11[7]._vptr_IHandleEntity) == 0) )
    v12 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  v8 = !this->m_bTowardsUnit;
  this->m_vStart = *AbsOrigin;
  if ( !v8 )
  {
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_hTargetUnit);
    if ( v14 != 0 )
      this->m_vDestination = *CBaseEntity::GetAbsOrigin(v14);
  }
  this->m_iResult = CDOTA_Bot_Pathing::BuildPath(
                      &this->m_pBot->m_Pathing,
                      &this->m_vStart,
                      &this->m_vDestination,
                      this->m_bAllowVisibleToEnemy,
                      1);
  v15 = CountdownTimer::Now(p_m_RecalcTimer) + 3.0;
  if ( v15 != this->m_RecalcTimer.m_timestamp.m_Value )
  {
    v58 = v15;
    (*(this->m_RecalcTimer._vptr_CountdownTimer + 2))(p_m_RecalcTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_RecalcTimer.m_timestamp.m_Value = v58;
  }
  m_iResult = 2;
  if ( this->m_RecalcTimer.m_duration.m_Value != 3.0 )
  {
    (*(this->m_RecalcTimer._vptr_CountdownTimer + 2))(p_m_RecalcTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_RecalcTimer.m_duration.m_Value = 3.0;
  }
LABEL_22:
  v16 = this->m_pBot;
  v17 = CEntityHandle::operator CEntityInstance *(&v16->m_hUnit);
  if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
  {
    vLoc.x = NAN;
    m_pEntity = v17->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v19 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(vLoc.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v19 & 0x7FFF;
    }
  }
  else
  {
    vLoc.x = NAN;
  }
  if ( !CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, &vLoc)
    && dota_bot_debug_team.m_pParent->m_Value.m_nValue != v16->m_pTeamCommander->m_eTeam )
  {
    goto LABEL_30;
  }
  if ( this->m_bWaypointsValid )
  {
    p_m_hUnit = &v16->m_hUnit;
    m_pMemory = this->m_vWaypoints.m_Memory.m_pMemory;
    v41 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v41 != 0 && BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
      v42 = v41;
    else
      v42 = 0;
    v43 = 0;
    v44 = (*(v42->_vptr_IHandleEntity + 62))(v42);
    v45 = m_pMemory;
    *&vLoc.x = v44;
    vLoc.z = v46;
    v47 = 1;
    NDebugOverlay::Line(&vLoc, v45, 0xFFu, 0xFFu, 0xFFu, 1, 0.01023);
    if ( this->m_vWaypoints.m_Size > 0 )
    {
      do
      {
        NDebugOverlay::Sphere(
          (this->m_vWaypoints.m_Memory.m_pMemory + v43),
          COERCE_DOUBLE(1103626240),
          0xC8u,
          0xC8u,
          0xC8u,
          1,
          0.01023);
        m_Size = this->m_vWaypoints.m_Size;
        v49 = v43 + 12;
        v50 = v47;
        if ( v47 - 1 < m_Size - 1 )
        {
          NDebugOverlay::Line(
            (this->m_vWaypoints.m_Memory.m_pMemory + v43),
            (this->m_vWaypoints.m_Memory.m_pMemory + v43 + 12),
            0xC8u,
            0xC8u,
            0xC8u,
            1,
            0.01023);
          m_Size = this->m_vWaypoints.m_Size;
          v50 = v47;
          v49 = v43 + 12;
        }
        ++v47;
        v43 = v49;
      }
      while ( m_Size > v50 );
    }
    if ( dota_bot_debug_path_draw.m_pParent->m_Value.m_nValue != 0 )
    {
      v51 = this->m_pBot;
      v52 = v51->m_Pathing.m_PathArray.m_Memory[0];
      if ( v52 != -1 )
      {
        v53 = 1;
        do
        {
          LocationFromGrid = CDOTA_TeamCommander::GetLocationFromGrid(v51->m_pTeamCommander, v52 >> 16, v52);
          v54 = this->m_pBot;
          vLoc = LocationFromGrid;
          vLoc.z = CDOTA_TeamCommander::GetLocationHeight(v54->m_pTeamCommander, &vLoc);
          NDebugOverlay::Sphere(&vLoc, COERCE_DOUBLE(1101004800), 0x64u, 0xFFu, 0x64u, 1, 0.01023);
          v51 = this->m_pBot;
          v52 = v51->m_Pathing.m_PathArray.m_Memory[v53++];
        }
        while ( v52 != -1 );
      }
    }
  }
  v20 = this->m_iResult;
  if ( v20 == 2 )
  {
    v29 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
      v30 = v29;
    else
      v30 = 0;
    *&vLoc.x = (*(v30->_vptr_IHandleEntity + 62))(v30);
    vLoc.z = v31;
    NDebugOverlay::Line(&vLoc, &this->m_vDestination, 0x64u, 0x64u, 0xC8u, 1, 0.01023);
    NDebugOverlay::Sphere(&this->m_vDestination, COERCE_DOUBLE(1103626240), 0x64u, 0x64u, 0xC8u, 1, 0.01023);
LABEL_30:
    v20 = this->m_iResult;
  }
  if ( v20 != 0 )
  {
    if ( v20 == 1 )
    {
      ++this->m_pBot->m_nFailedPaths;
      if ( dota_bot_failed_pathfind_warnings.m_pParent->m_Value.m_nValue != 0 )
      {
        z = this->m_vDestination.z;
        y = this->m_vDestination.y;
        x = this->m_vDestination.x;
        v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v21 == 0 || BYTE3(v21[7]._vptr_IHandleEntity) == 0 )
          v21 = 0;
        m_pAsString = "";
        if ( v21[70].m_iszPrivateVScripts.u.m_Id != 0 )
          m_pAsString = v21[70].m_iszPrivateVScripts.u.m_pAsString;
        Warning("Failed pathfind by %s, location %2.0f %2.0f %2.0f\n", m_pAsString, x, y, z);
      }
      v5 = this->m_pBot;
      if ( dota_bot_debug_team.m_pParent->m_Value.m_nValue != v5->m_pTeamCommander->m_eTeam )
        goto LABEL_7;
      v23 = CEntityHandle::operator CEntityInstance *(&v5->m_hUnit);
      if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
        v24 = v23;
      else
        v24 = 0;
      *&vLoc.x = (*(v24->_vptr_IHandleEntity + 62))(v24);
      vLoc.z = v25;
      NDebugOverlay::Line(&vLoc, &this->m_vDestination, 0xFFu, 0, 0, 1, 1.0);
      v26 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v26 != 0 && BYTE3(v26[7]._vptr_IHandleEntity) != 0 )
        v27 = v26;
      else
        v27 = 0;
      *&vLoc.x = (*(v27->_vptr_IHandleEntity + 62))(v27);
      vLoc.z = v28;
      NDebugOverlay::Sphere(&vLoc, COERCE_DOUBLE(1114636288), 0xFFu, 0, 0, 1, 1.0);
      NDebugOverlay::Sphere(&this->m_vDestination, COERCE_DOUBLE(1109393408), 0xFFu, 0, 0, 1, 1.0);
LABEL_6:
      v5 = this->m_pBot;
LABEL_7:
      CDOTA_Bot::PopAction(v5);
      return;
    }
  }
  else if ( m_iResult != 0 )
  {
    this->m_pBot->m_nFailedPaths = 0;
    CDOTA_BotAction_MoveTo::GeneratePathWaypoints(this, this->m_pBot->m_Pathing.m_PathArray.m_Memory);
    CDOTA_Bot::Action_MoveTo(this->m_pBot, this->m_vWaypoints.m_Memory.m_pMemory, -1);
    if ( this->m_RecalcTimer.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_RecalcTimer._vptr_CountdownTimer + 2))(&this->m_RecalcTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
      this->m_RecalcTimer.m_timestamp.m_Value = -1.0;
    }
    if ( !this->m_bAllowVisibleToEnemy )
      CountdownTimer::Start(&this->m_RecalcTimer, 3.0, v34);
    return;
  }
  if ( !this->m_bWaypointsValid )
    return;
  v32 = this->m_pBot;
  v33 = CEntityHandle::operator CEntityInstance *(&v32->m_hUnit);
  if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 && BYTE4(v33[55].m_iszPrivateVScripts.u.m_pAsString) != 0 )
  {
    if ( this->m_vWaypoints.m_Size > 0 )
    {
      CDOTA_Bot::Action_MoveTo(v32, this->m_vWaypoints.m_Memory.m_pMemory, -1);
      return;
    }
    goto LABEL_95;
  }
  if ( this->m_vWaypoints.m_Size <= 1 )
  {
LABEL_95:
    v35 = 625.0;
    goto LABEL_71;
  }
  v35 = 22500.0;
LABEL_71:
  v36 = this->m_vWaypoints.m_Memory.m_pMemory;
  if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
    v37 = v33;
  else
    v37 = 0;
  v38 = CBaseEntity::GetAbsOrigin(v37);
  if ( v35 > (((v38->x - v36->x) * (v38->x - v36->x)) + ((v38->y - v36->y) * (v38->y - v36->y))) )
  {
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::Remove(&this->m_vWaypoints, 0);
    if ( this->m_vWaypoints.m_Size > 0 )
    {
      CDOTA_Bot::Action_MoveTo(this->m_pBot, this->m_vWaypoints.m_Memory.m_pMemory, -1);
      return;
    }
    goto LABEL_6;
  }
}


// CDOTA_BotAction_MoveTo::ForceAdvanceToWaypoint  (line 301, @0x00000000027fc850, libserver.so)
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Remove
// callers: CDOTA_Bot_AbilityUsage_BlinkDagger::UseAbility
void __fastcall CDOTA_BotAction_MoveTo::ForceAdvanceToWaypoint(CDOTA_BotAction_MoveTo *const this, int iWaypoint)
{
  int v3; // ebx
  CUtlVector<Vector,CUtlMemory<Vector,int> > *p_m_vWaypoints; // r14

  if ( iWaypoint > 0 )
  {
    v3 = 0;
    p_m_vWaypoints = &this->m_vWaypoints;
    if ( this->m_vWaypoints.m_Size > 0 )
    {
      do
      {
        ++v3;
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::Remove(p_m_vWaypoints, 0);
      }
      while ( v3 != iWaypoint && this->m_vWaypoints.m_Size > 0 );
    }
  }
}


// CDOTA_BotAction_MoveTo::GeneratePathWaypoints  (line 311, @0x0000000002805d40, libserver.so)  // inlines: AddToTail, CopyConstruct<Vector>, DotProduct, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[]
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CDOTA_Bot::GetTankRating, CDOTA_Bot_Pathing::IsPathClear, CDOTA_TeamCommander::GetLocationFromGrid, CDOTA_Bot::GetAvoidanceAmountForGrid, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Remove, CUtlMemory<Vector, int>::Grow
// callers: CDOTA_BotAction_MoveTo::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_MoveTo::GeneratePathWaypoints(
        CDOTA_BotAction_MoveTo *const this,
        const int *pPathArray)
{
  int v3; // esi
  int v4; // r8d
  const int *v5; // r12
  __int64 v6; // r14
  int v7; // ebx
  int v8; // r13d
  __int64 v9; // r13
  int v10; // eax
  Vector *v11; // rax
  int AvoidanceAmountForGrid; // eax
  __int64 v13; // r14
  __int64 v14; // r12
  int v15; // ebx
  Vector *m_pMemory; // rax
  int v17; // ebx
  Vector *v18; // rax
  int v19; // eax
  Vector *v20; // rax
  CEntityInstance *v21; // rax
  const CBaseEntity *v22; // rdi
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *m_pBot; // rdx
  Vector *v25; // rbx
  uint32 m_Index; // eax
  unsigned __int16 v27; // cx
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *v31; // rax
  __int64 m_Size; // rbx
  int v33; // eax
  Vector *v34; // rax
  CUtlVector<Vector,CUtlMemory<Vector,int> > *p_m_vWaypoints; // [rsp+10h] [rbp-60h]
  float fTankRating; // [rsp+18h] [rbp-58h]
  int iLastAddedWaypoint; // [rsp+1Ch] [rbp-54h]
  int iLastAddedWaypointa; // [rsp+1Ch] [rbp-54h]
  float v39; // [rsp+20h] [rbp-50h]
  float pPathArrayb; // [rsp+28h] [rbp-48h]
  Vector v42; // 0:kr00_12.12
  Vector v43; // 0:kr14_12.12
  Vector LocationFromGrid; // 0:kr20_12.12

  if ( *pPathArray == -1 )
  {
    this->m_iResult = 1;
    this->m_bWaypointsValid = 0;
  }
  else
  {
    this->m_bWaypointsValid = 1;
    if ( pPathArray[1] == -1 )
    {
      LocationFromGrid = CDOTA_TeamCommander::GetLocationFromGrid(
                           this->m_pBot->m_pTeamCommander,
                           *pPathArray >> 16,
                           *pPathArray);
      m_Size = this->m_vWaypoints.m_Size;
      v33 = m_Size;
      if ( m_Size == this->m_vWaypoints.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&this->m_vWaypoints.m_Memory, 1);
        v33 = this->m_vWaypoints.m_Size;
      }
      this->m_vWaypoints.m_Size = v33 + 1;
      v34 = &this->m_vWaypoints.m_Memory.m_pMemory[m_Size];
      if ( v34 != 0 )
        *v34 = LocationFromGrid;
    }
    else
    {
      p_m_vWaypoints = &this->m_vWaypoints;
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&this->m_vWaypoints);
      fTankRating = CDOTA_Bot::GetTankRating(this->m_pBot);
      v3 = *pPathArray;
      if ( *pPathArray == -1 || (v4 = pPathArray[1]) == -1 )
      {
        v13 = 0;
      }
      else
      {
        v5 = pPathArray;
        v6 = 4;
        v7 = 1;
        v8 = 0;
        iLastAddedWaypoint = 0;
        do
        {
          if ( CDOTA_Bot_Pathing::IsPathClear(
                 &this->m_pBot->m_Pathing,
                 v3 >> 16,
                 v3,
                 v4 >> 16,
                 v4,
                 (v8 + 10),
                 this->m_bAllowVisibleToEnemy,
                 0) )
          {
            ++v7;
            v3 = pPathArray[iLastAddedWaypoint];
            if ( v3 == -1 )
              goto LABEL_14;
          }
          else
          {
            v42 = CDOTA_TeamCommander::GetLocationFromGrid(
                    this->m_pBot->m_pTeamCommander,
                    *(pPathArray + v6 - 4) >> 16,
                    *(pPathArray + v6 - 4));
            v9 = this->m_vWaypoints.m_Size;
            v10 = v9;
            if ( v9 == this->m_vWaypoints.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<Vector,int>::Grow(&this->m_vWaypoints.m_Memory, 1);
              v10 = this->m_vWaypoints.m_Size;
            }
            this->m_vWaypoints.m_Size = v10 + 1;
            v11 = &this->m_vWaypoints.m_Memory.m_pMemory[v9];
            if ( v11 != 0 )
              *v11 = v42;
            iLastAddedWaypoint = v7++ - 1;
            AvoidanceAmountForGrid = CDOTA_Bot::GetAvoidanceAmountForGrid(this->m_pBot, fTankRating, *v5 >> 16, *v5, 0);
            v3 = *v5;
            v8 = AvoidanceAmountForGrid;
            if ( *v5 == -1 )
            {
LABEL_14:
              v13 = 4LL * v7 - 4;
              goto LABEL_15;
            }
          }
          v6 = v5++ + 8LL - pPathArray;
          v4 = v5[1];
        }
        while ( v4 != -1 );
        v13 = v6 - 4;
      }
LABEL_15:
      v43 = CDOTA_TeamCommander::GetLocationFromGrid(
              this->m_pBot->m_pTeamCommander,
              *(pPathArray + v13) >> 16,
              *(pPathArray + v13));
      v14 = this->m_vWaypoints.m_Size;
      v15 = v14;
      if ( v14 == this->m_vWaypoints.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<Vector,int>::Grow(&this->m_vWaypoints.m_Memory, 1);
        v15 = this->m_vWaypoints.m_Size;
      }
      m_pMemory = this->m_vWaypoints.m_Memory.m_pMemory;
      v17 = v15 + 1;
      this->m_vWaypoints.m_Size = v17;
      v18 = &m_pMemory[v14];
      if ( v18 != 0 )
      {
        *v18 = v43;
        v17 = this->m_vWaypoints.m_Size;
      }
      v19 = v17;
      if ( this->m_vWaypoints.m_Memory.m_nAllocationCount == v17 )
      {
        CUtlMemory<Vector,int>::Grow(&this->m_vWaypoints.m_Memory, 1);
        v19 = this->m_vWaypoints.m_Size;
      }
      this->m_vWaypoints.m_Size = v19 + 1;
      v20 = &this->m_vWaypoints.m_Memory.m_pMemory[v17];
      if ( v20 != 0 )
      {
        *&v20->x = *&this->m_vDestination.x;
        v20->z = this->m_vDestination.z;
      }
      v21 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v22 = v21;
      else
        v22 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
      pPathArrayb = AbsOrigin->x - this->m_vStart.x;
      v39 = AbsOrigin->y - this->m_vStart.y;
      *&iLastAddedWaypointa = AbsOrigin->z - this->m_vStart.z;
      while ( this->m_vWaypoints.m_Size > 1 )
      {
        m_pBot = this->m_pBot;
        v25 = this->m_vWaypoints.m_Memory.m_pMemory;
        m_Index = m_pBot->m_hUnit.m_Index;
        if ( m_Index + 2 <= 1
          || (v27 = m_pBot->m_hUnit.m_Index,
              (v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v27 >> 9) & 0x3F]) == 0)
          || (v29 = &v28[v27 & 0x1FF]) == 0
          || m_Index != v29->m_EHandle.m_Index
          || (m_pInstance = v29->m_pInstance, v29->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        v31 = CBaseEntity::GetAbsOrigin(m_pInstance);
        if ( ((((v31->x - v25->x) * pPathArrayb) + ((v31->y - v25->y) * v39))
            + ((v31->z - v25->z) * *&iLastAddedWaypointa)) < 0.0 )
          break;
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::Remove(p_m_vWaypoints, 0);
      }
    }
  }
}


// CDOTA_BotAction_Attack::CDOTA_BotAction_Attack  (line 372, @0x00000000027eb570, libserver.so)  // inlines: CDOTA_BotAction, CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CDOTA_BotAction
// calls: CBaseEntity::GetAbsOrigin, _Unwind_Resume
// callers: CDOTA_Bot::SetAttackAction, CDOTA_BotMode_Item::Think, CDOTA_Bot_Script::Action_AttackUnit
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_BotAction_Attack::CDOTA_BotAction_Attack(
        CDOTA_BotAction_Attack *const this,
        CDOTA_Bot *pBot,
        EHANDLE hTarget,
        bool bOnce)
{
  uint32 v5; // eax
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const CBaseEntity *m_pInstance; // rdi

  this->m_hTarget.m_Index = -1;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_BotAction = off_42B6FB0;
  v5 = **&hTarget.m_Index;
  this->m_bOnce = bOnce;
  this->m_hTarget.m_Index = v5;
  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v8 = &v7[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  this->m_vStartPos = *CBaseEntity::GetAbsOrigin(m_pInstance);
}


// CDOTA_BotAction_Attack::OnStart  (line 383, @0x0000000002804420, libserver.so)  // inlines: DOTAGameRules, Get, GetBotTargetStatusCore, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnit, IndexToIdentity, IsBotTargetStatusValidCore, IsValid, LookupEntity, OnStart, ToDOTAAbility, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::PopAction, __dynamic_cast, CDOTA_Bot::Action_Attack, GetBotTargetStatusCore
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_Attack::OnStart(CDOTA_BotAction_Attack *const this)
{
  CConcreteEntityList *v2; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  void *v7; // rax
  float v8; // xmm0_4
  uint32 v9; // eax
  CBaseEntity *v10; // rsi
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_Bot *m_pBot; // rax
  uint32 v14; // esi
  unsigned __int16 v15; // dx
  CEntityIdentity *v16; // rax
  CEntityIdentity *v17; // rax
  CDOTA_BaseNPC *v18; // rsi

  v2 = CEntityHandle::gm_pEntityList;
  this->m_iActionFrame = gpGlobals->framecount;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_24;
  v4 = v2->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    goto LABEL_24;
  v5 = &v4[this->m_hTarget.m_Index & 0x1FF];
  if ( v5 == 0 )
    goto LABEL_24;
  if ( m_Index != v5->m_EHandle.m_Index )
    goto LABEL_24;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    goto LABEL_24;
  if ( m_pInstance->m_bIsDOTANPC )
  {
    m_pBot = this->m_pBot;
    v14 = m_pBot->m_hUnit.m_Index;
    if ( v14 + 2 <= 1
      || (v15 = m_pBot->m_hUnit.m_Index, (v16 = v2->m_pIdentityChunks[(v15 >> 9) & 0x3F]) == 0)
      || (v17 = &v16[v15 & 0x1FF]) == 0
      || v14 != v17->m_EHandle.m_Index
      || (v18 = v17->m_pInstance, v17->m_pInstance == 0)
      || !v18->m_bIsDOTANPC )
    {
      v18 = 0;
    }
    if ( (GetBotTargetStatusCore(m_pInstance, v18, -1.0, 0) & 0x1D) == 0 )
      goto LABEL_10;
LABEL_24:
    CDOTA_Bot::PopAction(this->m_pBot);
    return;
  }
  v7 = __dynamic_cast(m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  if ( v7 == 0 || (*(*v7 + 1784LL))(v7) == 0 )
    goto LABEL_24;
LABEL_10:
  v8 = 0.0;
  if ( g_pGameRules != 0 )
    v8 = *&g_pGameRules[18].m_szQuestName[20];
  v9 = this->m_hTarget.m_Index;
  v10 = 0;
  this->m_fStartTime = v8;
  if ( v9 + 2 > 1 )
  {
    v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v12 = &v11[this->m_hTarget.m_Index & 0x1FF];
      if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
        v10 = v12->m_pInstance;
    }
  }
  CDOTA_Bot::Action_Attack(this->m_pBot, v10, -1);
}


// CDOTA_BotAction_Attack::OnEnd  (line 412, @0x00000000027e0160, libserver.so)
void __fastcall CDOTA_BotAction_Attack::OnEnd(CDOTA_BotAction_Attack *const this)
{
  ;
}


// CDOTA_BotAction_Attack::Think  (line 418, @0x00000000027ee1b0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, GetUnit, IndexToIdentity, IsHero, IsIdle, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTA_Bot::PopAction, CEntityHandle::operator CEntityInstance*, CDOTA_Commander::IsDebuggingEntity, NDebugOverlay::Sphere, NDebugOverlay::Line
// globals: CEntityHandle::gm_pEntityList, g_DOTACommander
void __fastcall CDOTA_BotAction_Attack::Think(CDOTA_BotAction_Attack *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *v5; // r12
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rax
  CEntityInstance *v8; // r12
  CDOTA_Bot *m_pBot; // r13
  CEntityInstance *v10; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v12; // cx
  unsigned int v13; // r13d
  vec_t v14; // xmm1_4
  double v15; // xmm0_8
  CDOTA_Bot *v16; // rdi
  vec_t v17; // xmm1_4
  CEntityInstance *v18; // rax
  CEntityInstance *v19; // rdi
  vec_t v20; // xmm1_4
  Vector origin; // [rsp+0h] [rbp-40h] BYREF
  Vector entity[4]; // [rsp+10h] [rbp-30h] BYREF

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0
    && (*(v4->m_pInstance->_vptr_IHandleEntity + 139))(v4->m_pInstance) != 0 )
  {
    if ( this->m_iActionFrame != gpGlobals->framecount
      && (v5 = this->m_pBot, (v6 = CEntityHandle::operator CEntityInstance *(&v5->m_hUnit)) != 0)
      && BYTE3(v6[7]._vptr_IHandleEntity) != 0
      && BYTE4(v6[55].m_iszPrivateVScripts.u.m_pAsString) != 0 )
    {
      CDOTA_Bot::PopAction(v5);
    }
    else
    {
      v7 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
      v8 = v7;
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
      {
        m_pBot = this->m_pBot;
        v10 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
        if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
        {
          entity[0].x = NAN;
          m_pEntity = v10->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v12 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LODWORD(entity[0].x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                 | v12 & 0x7FFF;
          }
        }
        else
        {
          entity[0].x = NAN;
        }
        if ( CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, entity)
          || m_pBot->m_pTeamCommander->m_eTeam == dota_bot_debug_team.m_pParent->m_Value.m_nValue )
        {
          v13 = (v8[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 ? 100 : 20;
          *&entity[0].x = (*(v8->_vptr_IHandleEntity + 62))(v8);
          entity[0].z = v14;
          NDebugOverlay::Sphere(entity, COERCE_DOUBLE(1103626240), 0xFFu, v13, v13, 1, 0.01023);
          v15 = (*(v8->_vptr_IHandleEntity + 62))(v8);
          v16 = this->m_pBot;
          *&entity[0].x = v15;
          entity[0].z = v17;
          v18 = CEntityHandle::operator CEntityInstance *(&v16->m_hUnit);
          if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
            v19 = v18;
          else
            v19 = 0;
          *&origin.x = (*(v19->_vptr_IHandleEntity + 62))(v19);
          origin.z = v20;
          NDebugOverlay::Line(&origin, entity, 0xFFu, v13, v13, 1, 0.01023);
        }
      }
    }
  }
  else
  {
    CDOTA_Bot::PopAction(this->m_pBot);
  }
}


// CDOTA_BotAction_Attack::OnAttacked  (line 444, @0x00000000027e52c0, libserver.so)
// calls: CDOTA_Bot::PopAction
void __fastcall CDOTA_BotAction_Attack::OnAttacked(
        CDOTA_BotAction_Attack *const this,
        const CDOTA_AttackRecord *pRecord)
{
  if ( this->m_bOnce )
    CDOTA_Bot::PopAction(this->m_pBot);
}


// CDOTA_BotAction_AttackMove::CDOTA_BotAction_AttackMove  (line 456, @0x00000000027eb640, libserver.so)  // inlines: CDOTA_BotAction, operator=
// callers: CDOTA_Bot_Script::Action_AttackMove
void __fastcall CDOTA_BotAction_AttackMove::CDOTA_BotAction_AttackMove(
        CDOTA_BotAction_AttackMove *const this,
        CDOTA_Bot *pBot,
        const Vector *const vLoc)
{
  this->m_pBot = pBot;
  this->_vptr_CDOTA_BotAction = off_42B7030;
  this->m_vLoc = *vLoc;
}


// CDOTA_BotAction_AttackMove::OnStart  (line 464, @0x0000000002804950, libserver.so)  // inlines: OnStart
// calls: CDOTA_Bot::Action_AttackMove
void __fastcall CDOTA_BotAction_AttackMove::OnStart(CDOTA_BotAction_AttackMove *const this)
{
  this->m_iActionFrame = gpGlobals->framecount;
  CDOTA_Bot::Action_AttackMove(this->m_pBot, &this->m_vLoc);
}


// CDOTA_BotAction_AttackMove::Think  (line 473, @0x00000000027ee470, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, GetUnit, IndexToIdentity, IsIdle, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Commander::IsDebuggingEntity, CDOTA_Bot::PopAction, NDebugOverlay::Sphere, CEntityHandle::operator CEntityInstance*, NDebugOverlay::Line
// globals: CEntityHandle::gm_pEntityList, g_DOTACommander
void __fastcall CDOTA_BotAction_AttackMove::Think(CDOTA_BotAction_AttackMove *const this)
{
  CDOTA_Bot *m_pBot; // r12
  uint32 m_Index; // edx
  CConcreteEntityList *v4; // rsi
  unsigned int v5; // eax
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CEntityInstance *v11; // rax
  CEntityInstance *v12; // rdi
  vec_t v13; // xmm1_4
  CEntityInstance *v14; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v16; // cx
  Vector entity[4]; // [rsp+0h] [rbp-30h] BYREF

  m_pBot = this->m_pBot;
  if ( this->m_iActionFrame == gpGlobals->framecount )
  {
    m_Index = m_pBot->m_hUnit.m_Index;
    v4 = CEntityHandle::gm_pEntityList;
    v5 = m_Index + 2;
  }
  else
  {
    m_Index = m_pBot->m_hUnit.m_Index;
    v4 = CEntityHandle::gm_pEntityList;
    v5 = m_Index + 2;
    if ( m_Index + 2 <= 1
      || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v7 = &v6[m_pBot->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v7->m_EHandle.m_Index
      || (m_pInstance = v7->m_pInstance) == 0
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    if ( BYTE4(m_pInstance[55].m_iszPrivateVScripts.u.m_pAsString) != 0 )
    {
      CDOTA_Bot::PopAction(m_pBot);
      return;
    }
  }
  if ( v5 > 1
    && (v9 = v4->m_pIdentityChunks[(LOWORD(m_pBot->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v10 = &v9[m_pBot->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v10->m_EHandle.m_Index
    && (v14 = v10->m_pInstance) != 0
    && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
  {
    entity[0].x = NAN;
    m_pEntity = v14->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(entity[0].x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
    }
  }
  else
  {
    entity[0].x = NAN;
  }
  if ( CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, entity)
    || m_pBot->m_pTeamCommander->m_eTeam == dota_bot_debug_team.m_pParent->m_Value.m_nValue )
  {
    NDebugOverlay::Sphere(&this->m_vLoc, COERCE_DOUBLE(1103626240), 0xFFu, 0x64u, 0x64u, 1, 0.01023);
    v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v11 == 0 || (v12 = v11, BYTE3(v11[7]._vptr_IHandleEntity) == 0) )
      v12 = 0;
    *&entity[0].x = (*(v12->_vptr_IHandleEntity + 62))(v12);
    entity[0].z = v13;
    NDebugOverlay::Line(entity, &this->m_vLoc, 0xFFu, 0x64u, 0x64u, 1, 0.01023);
  }
}


// CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility  (line 490, @0x00000000027eb680, libserver.so)  // inlines: CDOTA_BotAction, CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// callers: CDOTA_Bot_Script::Action_UseAbility, CDOTA_BotMode_TutorialBoss::Think, CDOTABehaviorTutorialRazorMoveToNPCToAttack::OnInjured, CDOTA_Bot_AbilityUsage_AncientJanggo::UseAbility, CDOTA_Bot_AbilityUsage_ArcaneBoots::UseAbility, CDOTA_Bot_AbilityUsage_Armlet::UseAbility, CDOTA_Bot_AbilityUsage_BlackKingBar::UseAbility, CDOTA_Bot_AbilityUsage_BladeMail::UseAbility, CDOTA_Bot_AbilityUsage_Bottle::UseAbility, CDOTA_Bot_AbilityUsage_Buckler::UseAbility, CDOTA_Bot_AbilityUsage_Butterfly::UseAbility, CDOTA_Bot_AbilityUsage_Cheese::UseAbility (61 total)
void __fastcall CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(
        CDOTA_BotAction_UseAbility *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // cx

  this->m_pBot = pBot;
  this->_vptr_CDOTA_BotAction = off_42B70B0;
  this->m_hAbility.m_Index = -1;
  this->m_hTarget.m_Index = -1;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v5 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v4 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
  this->m_iUseAbilityType = 0;
}


// CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility  (line 499, @0x00000000027eb700, libserver.so)  // inlines: CDOTA_BotAction, CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CDOTA_BotAction
// calls: CBaseEntity::GetAbsOrigin, _Unwind_Resume
// callers: CDOTA_BotMode_Laning::Think, CDOTA_Bot_Script::Action_UseAbilityOnEntity, CDOTA_Bot_AbilityUsage_AbyssalBlade::UseAbility, CDOTA_Bot_AbilityUsage_DiffusalBlade::UseAbility, CDOTA_Bot_AbilityUsage_Cyclone::UseAbility, CDOTA_Bot_AbilityUsage_EtherealBlade::UseAbility, CDOTA_Bot_AbilityUsage_Dagon::UseAbility, CDOTA_Bot_AbilityUsage_Flask::UseAbility, CDOTA_Bot_AbilityUsage_Clarity::UseAbility, CDOTA_Bot_AbilityUsage_HeavensHalberd::UseAbility, CDOTA_Bot_AbilityUsage_MedallionOfCourage::UseAbility, CDOTA_Bot_AbilityUsage_HandOfMidas::UseAbility (82 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(
        CDOTA_BotAction_UseAbility *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility,
        CDOTA_BaseNPC *pTarget)
{
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // di
  CEntityIdentity *v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  uint32 m_Index; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  const CBaseEntity *m_pInstance; // rdi

  this->m_pBot = pBot;
  this->_vptr_CDOTA_BotAction = off_42B70B0;
  this->m_hAbility.m_Index = -1;
  this->m_hTarget.m_Index = -1;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v7 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v6 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
  if ( pTarget != 0 )
  {
    v8 = pTarget->m_pEntity;
    if ( v8 != 0 )
    {
      v9 = (v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1);
      v10 = 0x7FFF;
      if ( v8->m_EHandle.m_Index != -1 )
        v10 = v8->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v10 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v9 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
  }
  this->m_iUseAbilityType = 1;
  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v13 = &v12[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v13->m_EHandle.m_Index
    || (m_pInstance = v13->m_pInstance, v13->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  this->m_vStartPos = *CBaseEntity::GetAbsOrigin(m_pInstance);
}


// CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility  (line 511, @0x00000000027eb870, libserver.so)  // inlines: CDOTA_BotAction, CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// callers: CDOTA_BotAction_DispenseWard::CDOTA_BotAction_DispenseWard, CDOTA_Bot_Script::Action_UseAbilityOnLocation, CDOTA_Bot_AbilityUsage_BlinkDagger::UseAbility, CDOTA_Bot_AbilityUsage_VeilOfDischord::UseAbility, CDOTA_Bot_AbilityUsage_ObserverWard::UseAbility, CDOTA_Bot_AbilityUsage_TeleportScroll::UseAbility, CDOTA_Bot_AbilityUsage_TravelBoots::UseAbility, CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes::UseAbility, CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite::UseAbility, CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::UseAbility, CDOTA_Bot_AbilityUsage_Dazzle_Weave::UseAbility, CDOTA_Bot_AbilityUsage_DeathProphet_Silence::UseAbility (39 total)
void __fastcall CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(
        CDOTA_BotAction_UseAbility *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility,
        const Vector *const vLocation)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // si
  vec_t z; // xmm0_4

  this->m_pBot = pBot;
  this->_vptr_CDOTA_BotAction = off_42B70B0;
  this->m_hAbility.m_Index = -1;
  this->m_hTarget.m_Index = -1;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v6 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v5 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
  this->m_vTarget.x = vLocation->x;
  this->m_vTarget.y = vLocation->y;
  z = vLocation->z;
  this->m_iUseAbilityType = 2;
  this->m_vTarget.z = z;
}


// CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility  (line 521, @0x00000000027eb910, libserver.so)  // inlines: CDOTA_BotAction, CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// callers: CDOTA_Bot_Script::Action_UseAbilityOnTree, CDOTA_Bot_AbilityUsage_Tango::UseAbility
void __fastcall CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(
        CDOTA_BotAction_UseAbility *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility,
        int iTree)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // si

  this->m_pBot = pBot;
  this->_vptr_CDOTA_BotAction = off_42B70B0;
  this->m_hAbility.m_Index = -1;
  this->m_hTarget.m_Index = -1;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v6 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v5 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
  }
  this->m_iTreeTarget = iTree;
  this->m_iUseAbilityType = 3;
}


// CDOTA_BotAction_UseAbility::OnStart  (line 531, @0x00000000028051a0, libserver.so)  // inlines: Get, GetAbility, GetBotTargetStatusCore, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, InState, IndexToIdentity, IsFullyCastable, IsSilenced, IsTrained, IsValid, LookupEntity, OnStart, ToDOTAAbility, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::PopAction, __dynamic_cast, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::Action_UseAbilityOnTree, GetBotTargetStatusCore, CDOTA_Bot::Action_UseAbilityOnEntity, CDOTA_Bot::Action_UseAbilityOnLocation, CDOTA_Bot::Action_UseAbility
// callers: CDOTA_BotAction_DispenseWard::OnStart
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_UseAbility::OnStart(CDOTA_BotAction_UseAbility *const this)
{
  CConcreteEntityList *v2; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // r12
  CDOTA_Bot *m_pBot; // r15
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // rax
  void *v11; // rdi
  CEntityInstance *v12; // rax
  char v13; // dl
  CEntityInstance *v14; // rcx
  int (**vptr_IHandleEntity)(...); // rax
  int m_iUseAbilityType; // eax
  CDOTABaseAbility *v17; // rax
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // r15
  CDOTA_Bot *v20; // r13
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // rsi
  CDOTABaseAbility *v23; // rax
  CDOTABaseAbility *v24; // rax

  v2 = CEntityHandle::gm_pEntityList;
  this->m_iActionFrame = gpGlobals->framecount;
  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = v2->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_hAbility.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || v5->m_pInstance == 0
    || (v6 = __dynamic_cast(v5->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0),
        v7 = v6,
        v6 == 0)
    || CDOTABaseAbility::GetEffectiveLevel(v6) < 0
    || (*(v7->_vptr_IHandleEntity + 245))(v7) == 0
    || !CDOTABaseAbility::IsOwnersManaEnough(v7)
    || !CDOTABaseAbility::IsOwnersGoldEnough(v7, -1) )
  {
    CDOTA_Bot::PopAction(this->m_pBot);
    return;
  }
  m_pBot = this->m_pBot;
  v9 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 && (v9[58]._vptr_IHandleEntity & 0x10) != 0 )
    goto LABEL_15;
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  if ( v10 != 0 )
    v11 = __dynamic_cast(v10, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  else
    v11 = 0;
  if ( (*(*v11 + 1784LL))(v11) == 0 )
  {
    m_pBot = this->m_pBot;
    v12 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v12 != 0 )
    {
      v13 = BYTE3(v12[7]._vptr_IHandleEntity);
      if ( v13 != 0 )
      {
        v14 = v12;
        if ( (v12[58]._vptr_IHandleEntity & 8) != 0 )
          goto LABEL_15;
      }
      else
      {
        v14 = 0;
      }
      if ( (v14[58]._vptr_IHandleEntity & 0x20) != 0 )
      {
LABEL_15:
        CDOTA_Bot::PopAction(m_pBot);
        return;
      }
      if ( v13 != 0 )
        vptr_IHandleEntity = v12[58]._vptr_IHandleEntity;
      else
        BYTE1(vptr_IHandleEntity) = 0;
    }
    else
    {
      BYTE1(vptr_IHandleEntity) = 0;
    }
    if ( (BYTE1(vptr_IHandleEntity) & 8) == 0 )
      goto LABEL_26;
    goto LABEL_15;
  }
LABEL_26:
  m_iUseAbilityType = this->m_iUseAbilityType;
  if ( m_iUseAbilityType == 1 )
  {
    v18 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
      v19 = v18;
    else
      v19 = 0;
    v20 = this->m_pBot;
    v21 = CEntityHandle::operator CEntityInstance *(&v20->m_hUnit);
    if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
      v22 = v21;
    else
      v22 = 0;
    if ( v19 != 0 )
    {
      if ( (GetBotTargetStatusCore(v19, v22, -1.0, 0) & 0x9B) == 0 )
      {
        v23 = __dynamic_cast(v7, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
        CDOTA_Bot::Action_UseAbilityOnEntity(this->m_pBot, v23, v19);
        return;
      }
      v20 = this->m_pBot;
    }
    CDOTA_Bot::PopAction(v20);
  }
  else if ( m_iUseAbilityType <= 1 )
  {
    if ( m_iUseAbilityType == 0 )
      CDOTA_Bot::Action_UseAbility(this->m_pBot, v7);
  }
  else if ( m_iUseAbilityType == 2 )
  {
    v24 = __dynamic_cast(v7, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    CDOTA_Bot::Action_UseAbilityOnLocation(this->m_pBot, v24, &this->m_vTarget);
  }
  else if ( m_iUseAbilityType == 3 )
  {
    v17 = __dynamic_cast(v7, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    CDOTA_Bot::Action_UseAbilityOnTree(this->m_pBot, v17, this->m_iTreeTarget);
  }
}


// CDOTA_BotAction_UseAbility::OnEnd  (line 572, @0x00000000027e0170, libserver.so)
void __fastcall CDOTA_BotAction_UseAbility::OnEnd(CDOTA_BotAction_UseAbility *const this)
{
  ;
}


// CDOTA_BotAction_UseAbility::Think  (line 578, @0x00000000027ee700, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetAbility, GetBinaryObject, GetEHandle, GetEntryIndex, GetInstance, GetInt, GetItem, GetSerialNumber, GetUnit, InState, IsFinished, IsIdle, IsSilenced, Set, ToDOTAAbility, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator=
// calls: CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_Bot::PopAction, CDOTA_Commander::IsDebuggingEntity, NDebugOverlay::Sphere, NDebugOverlay::Line
// globals: g_DOTACommander
void __fastcall CDOTA_BotAction_UseAbility::Think(CDOTA_BotAction_UseAbility *const this)
{
  CDOTA_Bot *m_pBot; // r13
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // rax
  void *v5; // r15
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rdx
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rdi
  CDOTABaseAbility *CurrentActiveAbility; // r13
  CEntityInstance *v11; // rax
  CDOTABaseAbility *v12; // rax
  CEntityInstance *v13; // rax
  char v14; // dl
  CEntityInstance *v15; // rcx
  int (**vptr_IHandleEntity)(...); // rax
  int m_iUseAbilityType; // eax
  CDOTA_Bot *v18; // r14
  CEntityInstance *v19; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v21; // cx
  vec_t z; // eax
  int v23; // eax
  __int64 v24; // rax
  CDOTA_BinaryObject *v25; // rdi
  vec_t v26; // xmm1_4
  CEntityInstance *v27; // rax
  CEntityInstance *v28; // r14
  void *v29; // rax
  char v30; // al
  EHANDLE *p_m_hAbility; // rdi
  unsigned int v32; // r15d
  void *v33; // rax
  char v34; // al
  EHANDLE *v35; // rdi
  unsigned int v36; // r12d
  void *v37; // rax
  CEntityInstance *v38; // rax
  CEntityInstance *v39; // rdi
  vec_t v40; // xmm1_4
  __int64 m_iTreeTarget; // rax
  CDOTA_BinaryObject *v42; // rax
  CEntityInstance *v43; // rax
  CEntityInstance *v44; // rax
  unsigned int b; // [rsp+Ch] [rbp-54h]
  Vector vTarget; // [rsp+10h] [rbp-50h] BYREF
  Vector entity[5]; // [rsp+20h] [rbp-40h] BYREF

  m_pBot = this->m_pBot;
  if ( this->m_iActionFrame != gpGlobals->framecount )
  {
    v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
      v3 = 0;
    if ( BYTE4(v3[55].m_iszPrivateVScripts.u.m_pAsString) != 0 )
      goto LABEL_27;
  }
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  if ( v4 == 0 )
    goto LABEL_27;
  v5 = __dynamic_cast(v4, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  if ( v5 == 0 )
    goto LABEL_27;
  v6 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v6 == 0 || (v7 = v6, BYTE3(v6[7]._vptr_IHandleEntity) == 0) )
    v7 = 0;
  if ( (v7[58]._vptr_IHandleEntity & 0x10) != 0 )
    goto LABEL_27;
  if ( (*(*v5 + 1784LL))(v5) == 0 )
  {
    m_pBot = this->m_pBot;
    v13 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v13 != 0 )
    {
      v14 = BYTE3(v13[7]._vptr_IHandleEntity);
      if ( v14 != 0 )
      {
        v15 = v13;
        if ( (v13[58]._vptr_IHandleEntity & 8) != 0 )
          goto LABEL_27;
      }
      else
      {
        v15 = 0;
      }
      if ( (v15[58]._vptr_IHandleEntity & 0x20) != 0 )
        goto LABEL_27;
      if ( v14 != 0 )
        vptr_IHandleEntity = v13[58]._vptr_IHandleEntity;
      else
        BYTE1(vptr_IHandleEntity) = 0;
    }
    else
    {
      BYTE1(vptr_IHandleEntity) = 0;
    }
    if ( (BYTE1(vptr_IHandleEntity) & 8) == 0 )
      goto LABEL_12;
LABEL_27:
    CDOTA_Bot::PopAction(m_pBot);
    return;
  }
LABEL_12:
  if ( this->m_iActionFrame != gpGlobals->framecount )
  {
    v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
      v9 = v8;
    else
      v9 = 0;
    CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(v9);
    v11 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
    v12 = v11 != 0 ? __dynamic_cast(v11, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0) : 0LL;
    if ( CurrentActiveAbility != v12 )
      goto LABEL_19;
  }
  m_iUseAbilityType = this->m_iUseAbilityType;
  if ( m_iUseAbilityType != 1 )
  {
    if ( m_iUseAbilityType != 3 )
      goto LABEL_33;
    m_iTreeTarget = this->m_iTreeTarget;
    if ( m_iTreeTarget >= 0 && m_iTreeTarget < g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size )
    {
      v42 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[m_iTreeTarget];
      if ( v42 != 0 && v42->m_bActive )
        goto LABEL_33;
    }
LABEL_19:
    CDOTA_Bot::PopAction(this->m_pBot);
    return;
  }
  v43 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  if ( v43 == 0 || BYTE3(v43[7]._vptr_IHandleEntity) == 0 || (*(v43->_vptr_IHandleEntity + 408))(v43) == 0 )
    goto LABEL_19;
LABEL_33:
  v18 = this->m_pBot;
  v19 = CEntityHandle::operator CEntityInstance *(&v18->m_hUnit);
  if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
  {
    entity[0].x = NAN;
    m_pEntity = v19->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v21 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(entity[0].x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v21 & 0x7FFF;
    }
  }
  else
  {
    entity[0].x = NAN;
  }
  if ( CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, entity)
    || v18->m_pTeamCommander->m_eTeam == dota_bot_debug_team.m_pParent->m_Value.m_nValue )
  {
    z = vec3_origin.z;
    *&vTarget.x = *&vec3_origin.x;
    vTarget.z = z;
    v23 = this->m_iUseAbilityType;
    if ( v23 == 1 )
    {
      v44 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
      if ( v44 == 0 )
      {
        v25 = 0;
        goto LABEL_48;
      }
    }
    else
    {
      if ( v23 > 1 )
      {
        if ( v23 == 2 )
        {
          vTarget = this->m_vTarget;
          goto LABEL_49;
        }
        if ( v23 != 3
          || (v24 = this->m_iTreeTarget) < 0
          || v24 >= g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size
          || (v25 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[v24]) == 0 )
        {
LABEL_49:
          v27 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
          v28 = v27;
          if ( v27 != 0 )
          {
            v29 = __dynamic_cast(v27, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
            if ( v29 != 0 )
            {
              v30 = (*(*v29 + 1784LL))(v29);
              p_m_hAbility = &this->m_hAbility;
              if ( v30 != 0 )
              {
                v32 = 100;
                v28 = CEntityHandle::operator CEntityInstance *(p_m_hAbility);
                goto LABEL_54;
              }
              v28 = CEntityHandle::operator CEntityInstance *(p_m_hAbility);
            }
          }
          v32 = 255;
LABEL_54:
          if ( v28 != 0 )
          {
            v33 = __dynamic_cast(v28, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
            if ( v33 != 0 )
            {
              v34 = (*(*v33 + 1784LL))(v33);
              v35 = &this->m_hAbility;
              if ( v34 != 0 )
              {
                v36 = 255;
                v28 = CEntityHandle::operator CEntityInstance *(v35);
LABEL_59:
                if ( v28 != 0
                  && (v37 = __dynamic_cast(v28, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0)) != 0
                  && (*(*v37 + 1784LL))(v37) != 0 )
                {
                  b = 100;
                }
                else
                {
                  b = 255;
                }
                NDebugOverlay::Sphere(&vTarget, COERCE_DOUBLE(1103626240), v32, v36, b, 1, 0.01023);
                v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
                  v39 = v38;
                else
                  v39 = 0;
                *&entity[0].x = (*(v39->_vptr_IHandleEntity + 62))(v39);
                entity[0].z = v40;
                NDebugOverlay::Line(entity, &vTarget, v32, v36, b, 1, 0.01023);
                return;
              }
              v28 = CEntityHandle::operator CEntityInstance *(v35);
            }
          }
          v36 = 100;
          goto LABEL_59;
        }
LABEL_48:
        *&entity[0].x = (*(v25->_vptr_IHandleEntity + 62))(v25);
        entity[0].z = v26;
        vTarget = entity[0];
        goto LABEL_49;
      }
      if ( v23 != 0 )
        goto LABEL_49;
      v44 = CEntityHandle::operator CEntityInstance *(&v18->m_hUnit);
      if ( v44 == 0 )
      {
LABEL_84:
        v25 = 0;
        goto LABEL_48;
      }
    }
    v25 = v44;
    if ( BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
      goto LABEL_48;
    goto LABEL_84;
  }
}


// CDOTA_BotAction_UseAbility::OnAbilityExecuted  (line 674, @0x00000000027e5460, libserver.so)  // inlines: FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: strcmp, CDOTA_Bot::InvalidateCurrentPath, CDOTA_Bot::PopAction
// strings: "item_tpscroll", "item_travel_boots"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_UseAbility::OnAbilityExecuted(
        CDOTA_BotAction_UseAbility *const this,
        CDOTABaseAbility *pAbility,
        CBaseEntity *pTarget)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  m_pAbilityData = pAbility->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0
      && (m_pszAbilityName == "item_tpscroll"
       || strcmp(m_pAbilityData->m_pszAbilityName, "item_tpscroll") == 0
       || m_pszAbilityName == "item_travel_boots"
       || strcmp(m_pszAbilityName, "item_travel_boots") == 0) )
    {
      CDOTA_Bot::InvalidateCurrentPath(this->m_pBot);
    }
  }
  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hAbility.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && pAbility == v9->m_pInstance )
        CDOTA_Bot::PopAction(this->m_pBot);
    }
  }
}


// CDOTA_BotAction_UseAbility::ShouldBeQueued  (line 692, @0x00000000027e1940, libserver.so)  // inlines: Get, GetAbility, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, operator CBaseEntity*, operator CEntityInstance*
// calls: __dynamic_cast, CDOTABaseAbility::LoadAbilityData
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BotAction_UseAbility::ShouldBeQueued(CDOTA_BotAction_UseAbility *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTABaseAbility *v5; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  CDOTABaseAbility *v7; // [rsp+8h] [rbp-18h]

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[this->m_hAbility.m_Index & 0x1FF];
  if ( v3 == 0 )
    return 0;
  if ( m_Index != v3->m_EHandle.m_Index )
    return 0;
  if ( v3->m_pInstance == 0 )
    return 0;
  v5 = __dynamic_cast(v3->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  if ( v5 == 0 )
    return 0;
  m_pAbilityData = v5->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    v7 = v5;
    CDOTABaseAbility::LoadAbilityData(v5, 0);
    m_pAbilityData = v7->m_pAbilityData;
  }
  return ((m_pAbilityData->m_iAbilityBehavior >> 7) ^ 1) & 1;
}


// CDOTA_BotAction_DispenseWard::CDOTA_BotAction_DispenseWard  (line 700, @0x00000000027eb990, libserver.so)
// calls: CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility
// callers: CDOTA_Bot_AbilityUsage_WardDispenser::UseAbility
void __fastcall CDOTA_BotAction_DispenseWard::CDOTA_BotAction_DispenseWard(
        CDOTA_BotAction_DispenseWard *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility,
        const Vector *const vLocation,
        bool bObserverWard)
{
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(this, pBot, pAbility, vLocation);
  this->m_bObserverWard = bObserverWard;
  this->_vptr_CDOTA_BotAction = off_42B7130;
}


// CDOTA_BotAction_DispenseWard::OnStart  (line 706, @0x0000000002805530, libserver.so)  // inlines: Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BotAction_UseAbility::OnStart, __dynamic_cast, CDOTABaseAbility::GetCaster, CDOTA_Bot::Action_UseAbilityOnEntity
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_DispenseWard::OnStart(CDOTA_BotAction_DispenseWard *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // r12
  CDOTA_BaseNPC *Caster; // rax

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hAbility.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0
    && (v5 = __dynamic_cast(v4->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0),
        v6 = v5,
        v5 != 0)
    && this->m_bObserverWard != v5->m_bToggleState.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(v5);
    CDOTA_Bot::Action_UseAbilityOnEntity(this->m_pBot, v6, Caster);
  }
  else
  {
    CDOTA_BotAction_UseAbility::OnStart(this);
  }
}


// CDOTA_BotAction_PickUpRune::CDOTA_BotAction_PickUpRune  (line 726, @0x00000000027eb9c0, libserver.so)  // inlines: CDOTA_BotAction, CEntityHandle, CHandle, operator=
// callers: CDOTA_BotMode_Rune::Think, CDOTA_Bot_Script::Action_PickUpRune
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_BotAction_PickUpRune::CDOTA_BotAction_PickUpRune(
        CDOTA_BotAction_PickUpRune *const this,
        CDOTA_Bot *pBot,
        EHANDLE hTarget)
{
  this->m_hTarget.m_Index = -1;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_BotAction = off_42B71B0;
  this->m_hTarget.m_Index = **&hTarget.m_Index;
}


// CDOTA_BotAction_PickUpRune::OnStart  (line 734, @0x00000000028057b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, OnStart, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTA_Bot::PopAction, CDOTA_Bot::Action_PickUpRune
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_PickUpRune::OnStart(CDOTA_BotAction_PickUpRune *const this)
{
  CConcreteEntityList *v1; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  v1 = CEntityHandle::gm_pEntityList;
  this->m_iActionFrame = gpGlobals->framecount;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = v1->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    CDOTA_Bot::Action_PickUpRune(this->m_pBot, v4->m_pInstance);
  }
  else
  {
    CDOTA_Bot::PopAction(this->m_pBot);
  }
}


// CDOTA_BotAction_PickUpRune::Think  (line 749, @0x00000000027eed70, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsIdle, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator->, operator==<CBaseEntity>
// calls: CDOTA_Bot::PopAction, CEntityHandle::operator CEntityInstance*, CDOTA_Commander::IsDebuggingEntity, CBaseEntity::GetAbsOrigin, NDebugOverlay::Sphere, NDebugOverlay::Line
// globals: CEntityHandle::gm_pEntityList, g_DOTACommander
void __fastcall CDOTA_BotAction_PickUpRune::Think(CDOTA_BotAction_PickUpRune *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // r12
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rdx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  const CBaseEntity *v10; // rax
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v12; // rax
  const Vector *v13; // r13
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rdi
  vec_t v16; // xmm1_4
  Vector entity[4]; // [rsp+0h] [rbp-30h] BYREF

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || v4->m_pInstance == 0 )
  {
    m_pBot = this->m_pBot;
    goto LABEL_6;
  }
  if ( this->m_iActionFrame != gpGlobals->framecount )
  {
    m_pBot = this->m_pBot;
    v6 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      v7 = v6;
    else
      v7 = 0;
    if ( BYTE4(v7[55].m_iszPrivateVScripts.u.m_pAsString) == 0 )
      goto LABEL_14;
LABEL_6:
    CDOTA_Bot::PopAction(m_pBot);
    return;
  }
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
LABEL_14:
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
  {
    entity[0].x = NAN;
    m_pEntity = v6->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(entity[0].x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
  }
  else
  {
    entity[0].x = NAN;
  }
  if ( CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, entity) )
  {
    v10 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    NDebugOverlay::Sphere(AbsOrigin, COERCE_DOUBLE(1103626240), 0xC8u, 0xC8u, 0x64u, 1, 0.01023);
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    v13 = CBaseEntity::GetAbsOrigin(v12);
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
      v15 = v14;
    else
      v15 = 0;
    *&entity[0].x = (*(v15->_vptr_IHandleEntity + 62))(v15);
    entity[0].z = v16;
    NDebugOverlay::Line(entity, v13, 0xC8u, 0xC8u, 0x64u, 1, 0.01023);
  }
}


// CDOTA_BotAction_PickUpItem::CDOTA_BotAction_PickUpItem  (line 766, @0x00000000027eb9e0, libserver.so)  // inlines: CDOTA_BotAction, CEntityHandle, CHandle, operator=
// callers: CDOTA_BotMode_Item::Think, CDOTA_Bot_Script::Action_PickUpItem
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_BotAction_PickUpItem::CDOTA_BotAction_PickUpItem(
        CDOTA_BotAction_PickUpItem *const this,
        CDOTA_Bot *pBot,
        EHANDLE hTarget)
{
  this->m_hTarget.m_Index = -1;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_BotAction = off_42B7230;
  this->m_hTarget.m_Index = **&hTarget.m_Index;
}


// CDOTA_BotAction_PickUpItem::OnStart  (line 774, @0x0000000002805a10, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, OnStart, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTA_Bot::PopAction, CDOTA_Bot::Action_PickUpItem
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_PickUpItem::OnStart(CDOTA_BotAction_PickUpItem *const this)
{
  CConcreteEntityList *v1; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // rdi
  EHANDLE hItem; // [rsp+0h] [rbp-10h] BYREF

  v1 = CEntityHandle::gm_pEntityList;
  this->m_iActionFrame = gpGlobals->framecount;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = v1->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    m_pBot = this->m_pBot;
    hItem.m_Index = m_Index;
    CDOTA_Bot::Action_PickUpItem(m_pBot, &hItem);
  }
  else
  {
    CDOTA_Bot::PopAction(this->m_pBot);
  }
}


// CDOTA_BotAction_PickUpItem::Think  (line 789, @0x00000000027eefc0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsIdle, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator->, operator==<CBaseEntity>
// calls: CDOTA_Bot::PopAction, CEntityHandle::operator CEntityInstance*, CDOTA_Commander::IsDebuggingEntity, CBaseEntity::GetAbsOrigin, NDebugOverlay::Sphere, NDebugOverlay::Line
// globals: CEntityHandle::gm_pEntityList, g_DOTACommander
void __fastcall CDOTA_BotAction_PickUpItem::Think(CDOTA_BotAction_PickUpItem *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // r12
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rdx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  const CBaseEntity *v10; // rax
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v12; // rax
  const Vector *v13; // r13
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rdi
  vec_t v16; // xmm1_4
  Vector entity[4]; // [rsp+0h] [rbp-30h] BYREF

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || v4->m_pInstance == 0 )
  {
    m_pBot = this->m_pBot;
    goto LABEL_6;
  }
  if ( this->m_iActionFrame != gpGlobals->framecount )
  {
    m_pBot = this->m_pBot;
    v6 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      v7 = v6;
    else
      v7 = 0;
    if ( BYTE4(v7[55].m_iszPrivateVScripts.u.m_pAsString) == 0 )
      goto LABEL_14;
LABEL_6:
    CDOTA_Bot::PopAction(m_pBot);
    return;
  }
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
LABEL_14:
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
  {
    entity[0].x = NAN;
    m_pEntity = v6->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(entity[0].x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
  }
  else
  {
    entity[0].x = NAN;
  }
  if ( CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, entity) )
  {
    v10 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    NDebugOverlay::Sphere(AbsOrigin, COERCE_DOUBLE(1103626240), 0xC8u, 0xC8u, 0x64u, 1, 0.01023);
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    v13 = CBaseEntity::GetAbsOrigin(v12);
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
      v15 = v14;
    else
      v15 = 0;
    *&entity[0].x = (*(v15->_vptr_IHandleEntity + 62))(v15);
    entity[0].z = v16;
    NDebugOverlay::Line(entity, v13, 0xC8u, 0xC8u, 0x64u, 1, 0.01023);
  }
}


// CDOTA_BotAction_DropItem::CDOTA_BotAction_DropItem  (line 806, @0x00000000027eba00, libserver.so)  // inlines: CDOTA_BotAction, CEntityHandle, CHandle, operator=
// callers: CDOTA_BotMode_Retreat::Think, CDOTA_BotMode_Item::Think, CDOTA_Bot_Script::Action_DropItem
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_BotAction_DropItem::CDOTA_BotAction_DropItem(
        CDOTA_BotAction_DropItem *const this,
        CDOTA_Bot *pBot,
        EHANDLE hTarget,
        const Vector *const vLocation)
{
  this->m_hTarget.m_Index = -1;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_BotAction = off_42B72B0;
  this->m_hTarget.m_Index = **&hTarget.m_Index;
  this->m_vLocation = *vLocation;
}


// CDOTA_BotAction_DropItem::OnStart  (line 815, @0x0000000002805cb0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, OnStart, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTA_Bot::PopAction, CDOTA_Bot::Action_DropItem
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotAction_DropItem::OnStart(CDOTA_BotAction_DropItem *const this)
{
  CConcreteEntityList *v1; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  Vector *p_m_vLocation; // rdx
  CDOTA_Bot *m_pBot; // rdi
  EHANDLE hItem; // [rsp+0h] [rbp-10h] BYREF

  v1 = CEntityHandle::gm_pEntityList;
  this->m_iActionFrame = gpGlobals->framecount;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = v1->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    p_m_vLocation = &this->m_vLocation;
    m_pBot = this->m_pBot;
    hItem.m_Index = m_Index;
    CDOTA_Bot::Action_DropItem(m_pBot, &hItem, p_m_vLocation);
  }
  else
  {
    CDOTA_Bot::PopAction(this->m_pBot);
  }
}


// CDOTA_BotAction_DropItem::Think  (line 830, @0x00000000027ef210, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsIdle, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator->, operator==<CBaseEntity>
// calls: CDOTA_Bot::PopAction, CEntityHandle::operator CEntityInstance*, CDOTA_Commander::IsDebuggingEntity, CBaseEntity::GetAbsOrigin, NDebugOverlay::Sphere, NDebugOverlay::Line
// globals: CEntityHandle::gm_pEntityList, g_DOTACommander
void __fastcall CDOTA_BotAction_DropItem::Think(CDOTA_BotAction_DropItem *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_Bot *m_pBot; // r12
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rdx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  const CBaseEntity *v10; // rax
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v12; // rax
  const Vector *v13; // r13
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rdi
  vec_t v16; // xmm1_4
  Vector entity[4]; // [rsp+0h] [rbp-30h] BYREF

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || v4->m_pInstance == 0 )
  {
    m_pBot = this->m_pBot;
    goto LABEL_6;
  }
  if ( this->m_iActionFrame != gpGlobals->framecount )
  {
    m_pBot = this->m_pBot;
    v6 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      v7 = v6;
    else
      v7 = 0;
    if ( BYTE4(v7[55].m_iszPrivateVScripts.u.m_pAsString) == 0 )
      goto LABEL_14;
LABEL_6:
    CDOTA_Bot::PopAction(m_pBot);
    return;
  }
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
LABEL_14:
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
  {
    entity[0].x = NAN;
    m_pEntity = v6->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(entity[0].x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
  }
  else
  {
    entity[0].x = NAN;
  }
  if ( CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, entity) )
  {
    v10 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    NDebugOverlay::Sphere(AbsOrigin, COERCE_DOUBLE(1103626240), 0xC8u, 0xC8u, 0x64u, 1, 0.01023);
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    v13 = CBaseEntity::GetAbsOrigin(v12);
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
      v15 = v14;
    else
      v15 = 0;
    *&entity[0].x = (*(v15->_vptr_IHandleEntity + 62))(v15);
    entity[0].z = v16;
    NDebugOverlay::Line(entity, v13, 0xC8u, 0xC8u, 0x64u, 1, 0.01023);
  }
}


