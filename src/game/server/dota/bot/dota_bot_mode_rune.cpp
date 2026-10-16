
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Rune::CDOTA_BotMode_Rune  (line 30, @0x000000000281dfc0, libserver.so)
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_Rune::CDOTA_BotMode_Rune(CDOTA_BotMode_Rune *const this, CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->_vptr_CDOTA_BotMode = off_42B88D0;  // vptr: CDOTA_BotMode_Rune
  this->m_iSpawner = -1;
  this->m_fRuneDesire = 0.0;
  this->m_bWaitForNextSpawn = 0;
  this->m_fNextSpawnTime = 0.0;
  this->m_fNextMoveOrder = -1000.0;
}


// CDOTA_BotMode_Rune::GetRune  (line 42, @0x000000000281e010, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::GetActiveRune_Bounty, CDOTAGamerules::GetActiveRune_Powerup
// callers: CDOTA_BotMode_Rune::GetDesire, CDOTA_BotMode_Rune::Think
CBaseEntity *__fastcall CDOTA_BotMode_Rune::GetRune(CDOTA_BotMode_Rune *const this, int iRuneSpawner)
{
  if ( iRuneSpawner < 0 )
    return 0;
  if ( iRuneSpawner > 1 )
  {
    if ( iRuneSpawner <= 5 )
      return CDOTAGamerules::GetActiveRune_Bounty(g_pGameRules, iRuneSpawner - 2);
    return 0;
  }
  return CDOTAGamerules::GetActiveRune_Powerup(g_pGameRules);
}


// CDOTA_BotMode_Rune::GetRuneSpawner  (line 61, @0x000000000281e050, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetBountyRuneSpawner, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetRuneSpawner, GetSerialNumber, IndexToIdentity, IsValid, IsValidIndex, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*, operator[]
// callers: CDOTA_BotMode_Rune::CalculateDesiredLocation, CDOTA_BotMode_Rune::GetRuneDesire, CDOTA_BotMode_Rune::GetDesire, CDOTA_BotMode_Rune::Think
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CDOTA_BotMode_Rune::GetRuneSpawner(CDOTA_BotMode_Rune *const this, int iRuneSpawner)
{
  int v2; // esi
  unsigned __int16 *v3; // rdx
  int v4; // eax
  __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CBaseEntity *result; // rax
  unsigned __int16 *v9; // rdx
  int v10; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  __int16 v15; // cx
  int v16; // edx
  CEntityIdentity *v17; // rax
  __int64 v18; // rcx
  bool v19; // zf
  CEntityIdentity *v20; // rcx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v22; // cx
  int v23; // edx
  CEntityIdentity *v24; // rax
  __int64 v25; // rcx

  if ( iRuneSpawner < 0 )
    return 0;
  if ( iRuneSpawner > 1 )
  {
    if ( iRuneSpawner <= 5 )
    {
      v2 = iRuneSpawner - 2;
      if ( v2 < *&g_pGameRules[53].m_szQuestName[112] )
      {
        v3 = (*&g_pGameRules[53].m_szQuestName[120] + 4LL * v2);
        v4 = *v3;
        if ( (*v3 + 2) > 1 )
        {
          v5 = *v3;
          v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v3 >> 9) & 0x3F];
          if ( v6 != 0 )
          {
            v7 = &v6[v5 & 0x1FF];
            if ( v7 != 0 && v4 == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
            {
              m_pEntity = v7->m_pInstance->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v22 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                v23 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v22 & 0x7FFF;
                if ( (v23 + 2) > 1 )
                {
                  v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v23 >> 9) & 0x3F];
                  if ( v24 != 0 )
                  {
                    v25 = v23 & 0x1FF;
                    v19 = &v24[v25] == 0;
                    v20 = &v24[v25];
                    result = 0;
                    if ( v19 || v23 != v20->m_EHandle.m_Index )
                      return result;
                    return v20->m_pInstance;
                  }
                }
              }
            }
          }
        }
      }
    }
    return 0;
  }
  if ( iRuneSpawner >= *&g_pGameRules[53].m_szQuestName[88] )
    return 0;
  v9 = (*&g_pGameRules[53].m_szQuestName[96] + 4LL * iRuneSpawner);
  v10 = *v9;
  if ( (*v9 + 2) <= 1 )
    return 0;
  v11 = *v9;
  v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v9 >> 9) & 0x3F];
  if ( v12 == 0 )
    return 0;
  v13 = &v12[v11 & 0x1FF];
  if ( v13 == 0 )
    return 0;
  if ( v10 != v13->m_EHandle.m_Index )
    return 0;
  if ( v13->m_pInstance == 0 )
    return 0;
  v14 = v13->m_pInstance->m_pEntity;
  if ( v14 == 0 )
    return 0;
  v15 = 0x7FFF;
  if ( v14->m_EHandle.m_Index != -1 )
    v15 = v14->m_EHandle.m_Index & 0x7FFF;
  v16 = (((v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1)) << 15) | v15 & 0x7FFF;
  if ( (v16 + 2) <= 1 )
    return 0;
  v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v16 >> 9) & 0x3F];
  if ( v17 == 0 )
    return 0;
  v18 = v16 & 0x1FF;
  v19 = &v17[v18] == 0;
  v20 = &v17[v18];
  result = 0;
  if ( !v19 && v20->m_EHandle.m_Index == v16 )
    return v20->m_pInstance;
  return result;
}


// CDOTA_BotMode_Rune::OnStart  (line 80, @0x0000000002817600, libserver.so)  // inlines: NetworkStateChanged, Set, SetBotDebugData, SetRuneDibs, State_Get, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetTeamCommander, CDOTA_BotMode::GetUnit, CDOTAGamerules::GetDOTATime
void __fastcall CDOTA_BotMode_Rune::OnStart(CDOTA_BotMode_Rune *const this)
{
  __int64 m_iSpawner; // r12
  CDOTA_Bot *m_pBot; // r14
  CDOTA_TeamCommander *TeamCommander; // rax
  int v5; // r14d
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v7; // r12
  float m_fRuneDesire; // [rsp+Ch] [rbp-24h]

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    if ( *&g_pGameRules[6].m_szQuestName[28] != 4 )
    {
      m_iSpawner = this->m_iSpawner;
      m_pBot = this->m_pBot;
      m_fRuneDesire = this->m_fRuneDesire;
      TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
      TeamCommander->m_pRuneDibsBot.m_Memory[m_iSpawner] = m_pBot;
      TeamCommander->m_fRuneDibsDesire.m_Memory[m_iSpawner] = m_fRuneDesire;
    }
    v5 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
    Unit = CDOTA_BotMode::GetUnit(this);
    v7 = Unit;
    if ( v5 != Unit->m_iBotDebugData.m_Value )
    {
      (*(Unit->_vptr_IHandleEntity + 22))(Unit, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v7->m_iBotDebugData.m_Value = v5;
    }
    this->m_fNextMoveOrder = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
  }
}


// CDOTA_BotMode_Rune::OnEnd  (line 95, @0x00000000028164f0, libserver.so)  // inlines: SetRuneDibs
// calls: CDOTA_BotMode::DoScriptOnEnd, CDOTA_BotMode::GetTeamCommander
void __fastcall CDOTA_BotMode_Rune::OnEnd(CDOTA_BotMode_Rune *const this)
{
  __int64 m_iSpawner; // r12
  __int64 v3; // r12
  CDOTA_TeamCommander *TeamCommander; // rax

  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
  {
    m_iSpawner = this->m_iSpawner;
    if ( this->m_pBot == CDOTA_BotMode::GetTeamCommander(this)->m_pRuneDibsBot.m_Memory[m_iSpawner] )
    {
      v3 = this->m_iSpawner;
      TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
      TeamCommander->m_pRuneDibsBot.m_Memory[v3] = 0;
      TeamCommander->m_fRuneDibsDesire.m_Memory[v3] = 0.0;
    }
  }
}


// CDOTA_BotMode_Rune::Think  (line 108, @0x0000000002821b80, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, FastSqrt, Get, GetEHandle, GetElapsed, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GetTimebaseRegister, InTargetThread, IsEnabled, Length2D, Max<float>, Min<float>, PLAT_CPU_TIME, QAngle, RandomYawVector, Set, SetRuneDibs, State_Get, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator+, operator-, operator->, ~CMicroProfilerGuard, ~CUtlVector, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_BotMode_Rune::GetRuneDesire, CDOTA_BotMode::GetTeamCommander, CDOTA_BotMode_Rune::GetRuneSpawner, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::SetMoveAction, ThreadGetCurrentId (29 total)
// strings: "CDOTA_BotMode_Rune::Think"
void __fastcall CDOTA_BotMode_Rune::Think(CDOTA_BotMode_Rune *const this)
{
  int m_enabled; // r8d
  bool v3; // r13
  int m_iSpawner; // esi
  __int64 v5; // r14
  __int64 v6; // r14
  CBaseEntity *RuneSpawner; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // r15
  const CBaseEntity *v12; // rax
  const Vector *v13; // rax
  CDOTA_Bot *m_pBot; // r15
  CDOTA_TeamCommander *TeamCommander; // rax
  double v16; // xmm0_8
  CDOTA_Bot *v17; // rdi
  vec_t v18; // xmm1_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v20; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v23; // rax
  const CBaseEntity *v24; // rax
  const Vector *v25; // r15
  CDOTA_BaseNPC *v26; // rax
  CDOTA_TeamCommander *v27; // rax
  CHandle<CBaseEntity> *m_pMemory; // r15
  CEntityInstance *v29; // rax
  __int64 v30; // rax
  double v31; // xmm0_8
  CDOTA_Bot *v32; // rdi
  vec_t v33; // xmm1_4
  const CBaseEntity *v34; // rax
  const Vector *v35; // r14
  const Vector *v36; // rax
  float v37; // xmm1_4
  CDOTA_Bot *v38; // r14
  CEntityIdentity *v39; // rdx
  int v40; // eax
  __int16 v41; // cx
  CDOTA_BotAction_PickUpRune *v42; // r15
  __m128i v43; // xmm0
  float v44; // r14d
  vec_t v45; // xmm0_4
  double v46; // xmm0_8
  float v47; // xmm1_4
  CDOTA_Bot *v48; // rdi
  float v49; // xmm0_4
  float m_fNextSpawnTime; // xmm1_4
  float v51; // xmm0_4
  float v52; // [rsp+4h] [rbp-11Ch]
  int pHeroes; // [rsp+8h] [rbp-118h]
  float pHeroesa; // [rsp+8h] [rbp-118h]
  float pRunea; // [rsp+10h] [rbp-110h]
  CBaseEntity *pRune; // [rsp+10h] [rbp-110h]
  float pRuneb; // [rsp+10h] [rbp-110h]
  float flNowc; // [rsp+18h] [rbp-108h]
  float flNow; // [rsp+18h] [rbp-108h]
  CHandle<CBaseEntity> *flNowa; // [rsp+18h] [rbp-108h]
  float flNowb; // [rsp+18h] [rbp-108h]
  EHANDLE hSpawner; // [rsp+20h] [rbp-100h] BYREF
  QAngle angles; // [rsp+30h] [rbp-F0h] BYREF
  Vector vLoc; // [rsp+40h] [rbp-E0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hAlliedHeroes; // [rsp+50h] [rbp-D0h] BYREF
  unsigned __int64 v66; // [rsp+E8h] [rbp-38h]

  v66 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v20 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Rune::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CDOTA_BotMode_Rune::Think", 0, "Bots", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v23 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v23->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v20 + __rdtsc();
  }
  if ( CDOTA_BotMode::DoScriptThink(this) )
    goto LABEL_3;
  if ( CDOTA_Bot::IsUsingAbility(this->m_pBot) )
    goto LABEL_3;
  if ( CDOTA_Bot::IsUsingItem(this->m_pBot) )
    goto LABEL_3;
  m_iSpawner = this->m_iSpawner;
  if ( m_iSpawner == -1 )
    goto LABEL_3;
  this->m_fRuneDesire = CDOTA_BotMode_Rune::GetRuneDesire(this, m_iSpawner);
  v5 = this->m_iSpawner;
  if ( this->m_pBot != CDOTA_BotMode::GetTeamCommander(this)->m_pRuneDibsBot.m_Memory[v5] )
  {
    v6 = this->m_iSpawner;
    flNowc = this->m_fRuneDesire;
    if ( CDOTA_BotMode::GetTeamCommander(this)->m_fRuneDibsDesire.m_Memory[v6] > flNowc )
      goto LABEL_3;
  }
  RuneSpawner = CDOTA_BotMode_Rune::GetRuneSpawner(this, this->m_iSpawner);
  hSpawner.m_Index = -1;
  if ( RuneSpawner != 0 )
  {
    m_pEntity = RuneSpawner->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hSpawner.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
  }
  Unit = CDOTA_BotMode::GetUnit(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
  v12 = CEntityHandle::operator CEntityInstance *(&hSpawner);
  v13 = CBaseEntity::GetAbsOrigin(v12);
  flNow = fsqrt(((v13->x - AbsOrigin->x) * (v13->x - AbsOrigin->x)) + ((v13->y - AbsOrigin->y) * (v13->y - AbsOrigin->y)));
  if ( *&g_pGameRules[6].m_szQuestName[28] != 4 )
  {
    m_pBot = this->m_pBot;
    pRunea = this->m_fRuneDesire;
    pHeroes = this->m_iSpawner;
    TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
    TeamCommander->m_pRuneDibsBot.m_Memory[pHeroes] = m_pBot;
    TeamCommander->m_fRuneDibsDesire.m_Memory[pHeroes] = pRunea;
  }
  if ( flNow > 500.0
    || (v24 = CEntityHandle::operator CEntityInstance *(&hSpawner),
        v25 = CBaseEntity::GetAbsOrigin(v24),
        v26 = CDOTA_BotMode::GetUnit(this),
        !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, v26->m_iTeamNum.m_Value, v25, 0.0)) )
  {
    v16 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    v17 = this->m_pBot;
    vLoc.z = v18;
    *&vLoc.x = v16;
    CDOTA_Bot::SetMoveAction(v17, &vLoc, 0, 0);
    goto LABEL_3;
  }
  pRune = CDOTA_BotMode_Rune::GetRune(this, this->m_iSpawner);
  if ( pRune == 0 )
    goto LABEL_45;
  v27 = CDOTA_BotMode::GetTeamCommander(this);
  if ( !CDOTA_TeamCommander::AreAnyHumansOnTeam(v27) )
  {
LABEL_38:
    v34 = CEntityHandle::operator CEntityInstance *(&hSpawner);
    v35 = CBaseEntity::GetAbsOrigin(v34);
    v36 = CBaseEntity::GetAbsOrigin(pRune);
    v37 = v36->y - v35->y;
    if ( fsqrt(((v36->x - v35->x) * (v36->x - v35->x)) + (v37 * v37)) < 100.0 )
    {
      vLoc.x = NAN;
      v38 = this->m_pBot;
      v39 = pRune->m_pEntity;
      if ( v39 != 0 )
      {
        v40 = (v39->m_EHandle.m_Index >> 15) - (v39->m_flags & 1);
        v41 = 0x7FFF;
        if ( v39->m_EHandle.m_Index != -1 )
          v41 = v39->m_EHandle.m_Index & 0x7FFF;
        LOWORD(vLoc.x) = v41 | LOWORD(vLoc.x) & 0x8000;
        LODWORD(vLoc.x) = (v40 << 15) | LOWORD(vLoc.x) & 0x7FFF;
      }
      v42 = operator new(0x18u);
      CDOTA_BotAction_PickUpRune::CDOTA_BotAction_PickUpRune(v42, v38, &vLoc);
      CDOTA_Bot::SetAction(this->m_pBot, v42);
      goto LABEL_44;
    }
LABEL_45:
    if ( !this->m_bWaitForNextSpawn )
      goto LABEL_3;
    flNowb = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
    v43 = 0x42800000u;
    *v43.m128i_i32 = 64.0 * (this->m_fNextSpawnTime - flNowb);
    if ( *v43.m128i_i32 < 200.0 )
    {
      v43 = 0x43480000u;
    }
    else
    {
      v44 = 1000.0;
      if ( *v43.m128i_i32 > 1000.0 )
        goto LABEL_48;
    }
    v44 = COERCE_FLOAT(_mm_cvtsi128_si32(v43));
LABEL_48:
    if ( (this->m_fNextSpawnTime + 3.0) > flNowb )
    {
      if ( flNowb >= this->m_fNextMoveOrder )
      {
        v45 = RandomFloat(0.0, 360.0);
        angles.x = 0.0;
        angles.y = v45;
        angles.z = 0.0;
        AngleVectors(&angles, &vLoc, 0, 0);
        pRuneb = v44 * vLoc.x;
        pHeroesa = v44 * vLoc.y;
        v52 = v44 * vLoc.z;
        v46 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
        angles.z = v47;
        *&angles.x = v46;
        v48 = this->m_pBot;
        vLoc.y = pHeroesa + *(&v46 + 1);
        vLoc.z = v47 + v52;
        vLoc.x = pRuneb + *&v46;
        CDOTA_Bot::SetMoveAction(v48, &vLoc, 0, 1);
        v49 = RandomFloat(0.5, 1.0);
        m_fNextSpawnTime = this->m_fNextSpawnTime;
        v51 = v49 + flNowb;
        this->m_fNextMoveOrder = v51;
        if ( m_fNextSpawnTime > flNowb )
          this->m_fNextMoveOrder = fminf(v51, m_fNextSpawnTime);
      }
      goto LABEL_3;
    }
LABEL_44:
    this->m_bWaitForNextSpawn = 0;
    goto LABEL_3;
  }
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul>::CUtlVectorFixedGrowableCompat(&hAlliedHeroes, 0);
  CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hAlliedHeroes, 0.0);
  if ( hAlliedHeroes.m_Size <= 0 )
  {
LABEL_37:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes);
    goto LABEL_38;
  }
  m_pMemory = hAlliedHeroes.m_Memory.m_pMemory;
  flNowa = &hAlliedHeroes.m_Memory.m_pMemory[hAlliedHeroes.m_Size - 1 + 1];
  while ( 1 )
  {
    v29 = CEntityHandle::operator CEntityInstance *(m_pMemory);
    if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 && (v29[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      v30 = *&v29[45].m_worldGroupId.m_nHashCode;
      if ( v30 != 0 && *(v30 + 176) != 0 )
        break;
    }
    if ( ++m_pMemory == flNowa )
      goto LABEL_37;
  }
  v31 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
  v32 = this->m_pBot;
  vLoc.z = v33;
  *&vLoc.x = v31;
  CDOTA_Bot::SetMoveAction(v32, &vLoc, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedHeroes);
LABEL_3:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_Rune::CalculateDesiredLocation  (line 191, @0x000000000281e2b0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator->
// calls: CDOTA_BotMode_Rune::GetRuneSpawner, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Rune::CalculateDesiredLocation(CDOTA_BotMode_Rune *const this)
{
  int m_iSpawner; // esi
  CBaseEntity *RuneSpawner; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  int v5; // eax
  CEntityIdentity *v6; // rdx
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v8; // rdx
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_iSpawner = this->m_iSpawner;
  if ( m_iSpawner == -1 )
  {
    *&result.x = (*(this->_vptr_CDOTA_BotMode + 11))(this);
  }
  else
  {
    RuneSpawner = CDOTA_BotMode_Rune::GetRuneSpawner(this, m_iSpawner);
    if ( RuneSpawner == 0 )
      goto LABEL_12;
    m_pEntity = RuneSpawner->m_pEntity;
    if ( m_pEntity == 0 )
      goto LABEL_12;
    v4 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v5 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    if ( (v5 + 2) > 1 && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) != 0 )
    {
      m_pInstance = 0;
      v8 = &v6[v5 & 0x1FF];
      if ( v8 != 0 && v5 == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
    else
    {
LABEL_12:
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  return result;
}


// CDOTA_BotMode_Rune::GetDesire  (line 204, @0x0000000002821460, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CVProfScope, DOTAGameRules, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetRuneDibsDesire, GetTeamNumber, IndexToIdentity, IsEnabled, Length2D, LookupEntity, Purge, RemoveAll, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CEntityInstance*, operator-, operator->, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, CVProfile::EnterScope, CDOTA_BotMode_Rune::GetRune, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_Bot::FindNearbyEnemiesInMode, CUtlMemory<CDOTA_Bot*, int>::Purge, CDOTA_BotMode_Rune::GetRuneSpawner, FindUnitsInRadius, CDOTAFogOfWarSystem::IsLocationVisible, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (18 total)
// strings: "CDOTA_BotMode_Rune::GetDesire"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Rune::GetDesire(CDOTA_BotMode_Rune *const this)
{
  int m_enabled; // edi
  float result; // xmm0_4
  int v4; // ebx
  CBaseEntity *Rune; // r12
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v8; // rax
  CDOTA_Bot *v9; // rax
  CDOTA_Bot *m_pBot; // rdi
  CBaseEntity *RuneSpawner; // r14
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // rbx
  const Vector *v14; // rax
  float y; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // r12
  const Vector *v19; // rbx
  CDOTA_BaseNPC *v20; // rax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  uint32 m_Index; // r12d
  const CBaseEntity *m_pInstance; // rdi
  unsigned int v24; // r13d
  CEntityIdentity *v25; // rax
  CEntityIdentity *v26; // rax
  const Vector *v27; // r14
  CDOTA_BaseNPC *v28; // rax
  const CBaseEntity *v29; // rdi
  CEntityIdentity *v30; // rax
  CEntityIdentity *v31; // rax
  const Vector *v32; // r12
  const Vector *v33; // rax
  CDOTAGamerules *v34; // rdi
  float v35; // ebx
  float m_fRuneDesire; // xmm0_4
  __int64 m_iSpawner; // rbx
  float v38; // ebx
  __int64 v39; // r12
  int iBestSpawner; // [rsp+18h] [rbp-1A8h]
  float fBestDesire; // [rsp+1Ch] [rbp-1A4h]
  int iSpawner; // [rsp+30h] [rbp-190h]
  float fOurDistance; // [rsp+34h] [rbp-18Ch]
  CBaseEntity *pSpawner; // [rsp+38h] [rbp-188h]
  bool VProf_206; // [rsp+47h] [rbp-179h]
  float __for_endb; // [rsp+48h] [rbp-178h]
  CHandle<CBaseEntity> *__for_end; // [rsp+48h] [rbp-178h]
  float __for_enda; // [rsp+48h] [rbp-178h]
  EHANDLE hEnemyHero; // [rsp+50h] [rbp-170h] BYREF
  CUtlMemory<CDOTA_Bot*,int> v50; // [rsp+58h] [rbp-168h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEnemyHeroes; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 v52; // [rsp+188h] [rbp-38h]

  v52 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_206 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_Rune::GetDesire", 0, "Bots", 0, 4);
  result = CDOTA_BotMode::GetScriptDesire(this);
  if ( result < 0.0 )
  {
    v4 = 0;
    if ( this->m_pBot->m_iDifficulty <= 0 )
      goto LABEL_12;
    while ( 1 )
    {
      Rune = CDOTA_BotMode_Rune::GetRune(this, v4);
      if ( Rune != 0 )
      {
        Unit = CDOTA_BotMode::GetUnit(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
        v8 = CBaseEntity::GetAbsOrigin(Rune);
        if ( fsqrt(((v8->x - AbsOrigin->x) * (v8->x - AbsOrigin->x)) + ((v8->y - AbsOrigin->y) * (v8->y - AbsOrigin->y))) <= 400.0 )
          break;
      }
      if ( ++v4 == 6 )
        goto LABEL_11;
    }
    m_pBot = this->m_pBot;
    hEnemyHero.m_Index = 0;
    v50.m_pMemory = 0;
    v50.m_nAllocationCount = 0;
    v50.m_nGrowSize = 0;
    CDOTA_Bot::FindNearbyEnemiesInMode(m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1600.0, &hEnemyHero, 0);
    if ( hEnemyHero.m_Index > 0 )
    {
      hEnemyHero.m_Index = 0;
      if ( (v50.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_Bot *,int>::Purge(&v50);
        if ( (v50.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CDOTA_Bot *,int>::Purge(&v50);
      }
      goto LABEL_12;
    }
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&hEnemyHero);
LABEL_11:
    v9 = this->m_pBot;
    if ( v9->m_nAttackingCreeps > 0 )
      goto LABEL_12;
    if ( (*(v9->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v9->m_pActiveBotMode) != 7 )
    {
      iSpawner = 0;
      fBestDesire = 0.0;
      iBestSpawner = -1;
      while ( 1 )
      {
        RuneSpawner = CDOTA_BotMode_Rune::GetRuneSpawner(this, iSpawner);
        pSpawner = RuneSpawner;
        if ( RuneSpawner != 0 )
        {
          v12 = CDOTA_BotMode::GetUnit(this);
          v13 = CBaseEntity::GetAbsOrigin(v12);
          v14 = CBaseEntity::GetAbsOrigin(RuneSpawner);
          y = v14->y;
          v16 = v14->x - v13->x;
          hEnemyHeroes.m_Size = 0;
          v17 = y - v13->y;
          hEnemyHeroes.m_Memory.m_nAllocationCount = 64;
          hEnemyHeroes.m_Memory.m_nGrowSize = 0x80000000;
          hEnemyHeroes.m_Memory.m_pMemory = &hEnemyHeroes.m_FixedMemory;
          fOurDistance = fsqrt((v16 * v16) + (v17 * v17));
          v18 = CDOTA_BotMode::GetUnit(this);
          v19 = CBaseEntity::GetAbsOrigin(RuneSpawner);
          v20 = CDOTA_BotMode::GetUnit(this);
          FindUnitsInRadius(v20->m_iTeamNum.m_Value, v19, v18, 1000.0, &hEnemyHeroes, 2, 1, 0, 0, 0);
          m_pMemory = hEnemyHeroes.m_Memory.m_pMemory;
          __for_end = &hEnemyHeroes.m_Memory.m_pMemory[hEnemyHeroes.m_Size];
          if ( hEnemyHeroes.m_Memory.m_pMemory == __for_end )
          {
LABEL_44:
            __for_enda = CDOTA_BotMode_Rune::GetRuneDesire(this, iSpawner);
            if ( CDOTA_BotMode::GetTeamCommander(this)->m_fRuneDibsDesire.m_Memory[iSpawner] < __for_enda
              && fBestDesire < __for_enda )
            {
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
              fBestDesire = __for_enda;
              iBestSpawner = iSpawner;
              goto LABEL_36;
            }
          }
          else
          {
            while ( 1 )
            {
              m_Index = m_pMemory->m_Index;
              m_pInstance = 0;
              v24 = m_pMemory->m_Index + 2;
              hEnemyHero.m_Index = m_pMemory->m_Index;
              if ( v24 > 1 )
              {
                v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEnemyHero.m_Index) >> 9) & 0x3F];
                if ( v25 != 0 )
                {
                  v26 = &v25[hEnemyHero.m_Index & 0x1FF];
                  if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
                    m_pInstance = v26->m_pInstance;
                }
              }
              v27 = CBaseEntity::GetAbsOrigin(m_pInstance);
              v28 = CDOTA_BotMode::GetUnit(this);
              if ( CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, v28->m_iTeamNum.m_Value, v27, 0.0) )
              {
                v29 = 0;
                if ( v24 > 1 )
                {
                  v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hEnemyHero.m_Index) >> 9) & 0x3F];
                  if ( v30 != 0 )
                  {
                    v31 = &v30[hEnemyHero.m_Index & 0x1FF];
                    if ( v31 != 0 && m_Index == v31->m_EHandle.m_Index )
                      v29 = v31->m_pInstance;
                  }
                }
                v32 = CBaseEntity::GetAbsOrigin(v29);
                v33 = CBaseEntity::GetAbsOrigin(pSpawner);
                if ( fOurDistance > fsqrt(((v33->x - v32->x) * (v33->x - v32->x)) + ((v33->y - v32->y)
                                                                                   * (v33->y - v32->y))) )
                  break;
              }
              if ( __for_end == ++m_pMemory )
                goto LABEL_44;
            }
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
        }
LABEL_36:
        if ( ++iSpawner == 6 )
        {
          this->m_fRuneDesire = fBestDesire;
          this->m_iSpawner = iBestSpawner;
          v34 = g_pGameRules;
          v35 = *&g_pGameRules[54].m_szQuestName[96];
          this->m_fNextSpawnTime = v35;
          this->m_bWaitForNextSpawn = (v35 - CDOTAGamerules::GetDOTATime(v34, 0, 0, 0.0)) < 10.0;
          goto LABEL_38;
        }
      }
    }
    m_iSpawner = this->m_iSpawner;
    if ( this->m_pBot == CDOTA_BotMode::GetTeamCommander(this)->m_pRuneDibsBot.m_Memory[m_iSpawner]
      || (v38 = this->m_fRuneDesire,
          v39 = this->m_iSpawner,
          v38 >= CDOTA_BotMode::GetTeamCommander(this)->m_fRuneDibsDesire.m_Memory[v39]) )
    {
      m_fRuneDesire = this->m_fRuneDesire;
      if ( m_fRuneDesire > 25.0 )
        goto LABEL_47;
      if ( m_fRuneDesire > 15.0 )
        goto LABEL_54;
      if ( m_fRuneDesire > 5.0 )
        goto LABEL_42;
    }
    else
    {
LABEL_38:
      m_fRuneDesire = this->m_fRuneDesire;
    }
    if ( m_fRuneDesire <= 25.0 )
    {
      if ( m_fRuneDesire <= 15.0 )
      {
        if ( m_fRuneDesire > 5.0 )
        {
LABEL_42:
          result = 0.5;
          goto LABEL_4;
        }
LABEL_12:
        result = 0.0;
        goto LABEL_4;
      }
LABEL_54:
      result = 0.75;
      goto LABEL_4;
    }
LABEL_47:
    result = 0.89999998;
  }
LABEL_4:
  if ( VProf_206 )
  {
    __for_endb = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return __for_endb;
  }
  return result;
}


// CDOTA_BotMode_Rune::GetRuneDesire  (line 318, @0x000000000281f360, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, DOTAGameRules, FastSqrt, Get, GetBotByIndex, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetManaPercent, GetModeDesire, GetRuneStatus, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, Length2D, LookupEntity, RemapValClamped, Set, State_Get, State_IsAfter, State_IsAfterGameInProgress, State_IsBefore, State_IsBeforePreGame, State_Order, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator!, operator-, operator->, ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BotMode_Rune::GetRuneSpawner, CEntityHandle::operator CEntityInstance*, CDOTA_BotMode::GetTeamCommander, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemInInventory, CBaseEntity::GetAbsOrigin, CBaseEntity::GetHealth, CDOTA_TeamCommander::GetPotentialDamage, CDOTA_Bot::GetNearbyHeroes, RemapValClamped, CDOTA_Bot::IsDangerouslyLow (18 total)
// callers: CDOTA_BotMode_Rune::GetDesire, CDOTA_BotMode_Rune::Think
// strings: "item_bottle"
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING, CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Rune::GetRuneDesire(CDOTA_BotMode_Rune *const this, int iSpawner)
{
  __int64 v4; // rax
  int v5; // eax
  CBaseEntity *RuneSpawner; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  __int64 v9; // rbx
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_Bot *v11; // r13
  CDOTA_BaseNPC *Unit; // rax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  __int64 v17; // rbx
  DOTA_RUNE_STATUS v18; // r15d
  const CBaseEntity *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *AbsOrigin; // rax
  float v22; // xmm0_4
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // r13
  CDOTA_TeamCommander *v25; // rax
  float PotentialDamage; // xmm0_4
  __m128 v27; // xmm0
  CDOTA_BaseNPC *v28; // rax
  CDOTA_UnitInventory *v29; // rax
  CDOTA_Item *ItemInInventory; // rax
  float v31; // xmm0_4
  CDOTA_Bot *m_pBot; // rdi
  CHandle<CBaseEntity> *m_pMemory; // rcx
  CHandle<CBaseEntity> *v34; // rax
  CHandle<CBaseEntity> *v35; // rdi
  uint32 m_Index; // edx
  __int16 v37; // si
  CEntityIdentity *v38; // rcx
  CEntityIdentity *v39; // rcx
  CEntityInstance *m_pInstance; // rdx
  __int64 v41; // rdx
  unsigned int v42; // ecx
  __int64 v43; // rax
  CDOTA_BaseNPC *v44; // rbx
  __int64 v45; // r14
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r14
  CDOTA_BaseNPC *v49; // rax
  float v50; // xmm5_4
  float v51; // xmm0_4
  float v52; // xmm0_4
  float v53; // xmm0_4
  float v54; // xmm0_4
  __m128 v55; // rt1
  CDOTA_BaseNPC *v56; // rax
  float fBottleFactor; // [rsp+Ch] [rbp-114h]
  float fExistsFactor; // [rsp+10h] [rbp-110h]
  float fVeryCloseFactor; // [rsp+14h] [rbp-10Ch]
  float fTimeFactor; // [rsp+18h] [rbp-108h]
  float fDistanceFactor; // [rsp+1Ch] [rbp-104h]
  float fTypeFactor; // [rsp+20h] [rbp-100h]
  float fTypeFactora; // [rsp+20h] [rbp-100h]
  float fDangerFactor; // [rsp+24h] [rbp-FCh]
  float fDangerFactora; // [rsp+24h] [rbp-FCh]
  float fHumanFactor; // [rsp+28h] [rbp-F8h]
  EHANDLE hRuneSpawner; // [rsp+30h] [rbp-F0h] BYREF
  Vector vSpawnerLoc; // [rsp+40h] [rbp-E0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyAlliedHeroes; // [rsp+50h] [rbp-D0h] BYREF
  unsigned __int64 v70; // [rsp+E8h] [rbp-38h]

  v70 = __readfsqword(0x28u);
  v4 = *&g_pGameRules[6].m_szQuestName[28];
  if ( v4 <= 0xA )
  {
    v5 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v4];
    if ( dword_491AD10 > v5 )
      return 0.0;
  }
  else
  {
    v5 = 0;
    if ( dword_491AD10 > 0 )
      return 0.0;
  }
  if ( dword_491AD14 < v5 || iSpawner <= 1 && CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0) < 90.0 )
    return 0.0;
  RuneSpawner = CDOTA_BotMode_Rune::GetRuneSpawner(this, iSpawner);
  hRuneSpawner.m_Index = -1;
  if ( RuneSpawner != 0 )
  {
    m_pEntity = RuneSpawner->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hRuneSpawner.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
    }
  }
  v9 = 0;
  if ( CEntityHandle::operator CEntityInstance *(&hRuneSpawner) == 0 )
    return 0.0;
  while ( v9 < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size )
  {
    TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
    if ( v9 < TeamCommander->m_BotList.m_Size )
    {
      v11 = TeamCommander->m_BotList.m_Memory.m_pMemory[v9];
      if ( v11 != 0 && v11->m_bHuman )
      {
        Unit = CDOTA_BotMode::GetUnit(this);
        if ( (*(Unit->_vptr_IHandleEntity + 408))(Unit) != 0 )
        {
          v13 = CEntityHandle::operator CEntityInstance *(&v11->m_hUnit);
          if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
            v14 = v13;
          else
            v14 = 0;
          Inventory = CDOTA_BaseNPC::GetInventory(v14);
          if ( CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_bottle", 1, 0, -1) != 0 )
          {
            fHumanFactor = -20.0;
            goto LABEL_27;
          }
        }
      }
    }
    ++v9;
  }
  fHumanFactor = 0.0;
LABEL_27:
  v17 = iSpawner;
  v18 = CDOTA_BotMode::GetTeamCommander(this)->m_iRuneStatus.m_Memory[iSpawner];
  if ( v18 == DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING )
  {
    fExistsFactor = -2.5;
  }
  else if ( v18 == DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_AVAILABLE )
  {
    fExistsFactor = 5.0;
  }
  else
  {
    fExistsFactor = 0.0;
  }
  v19 = CEntityHandle::operator CEntityInstance *(&hRuneSpawner);
  vSpawnerLoc = *CBaseEntity::GetAbsOrigin(v19);
  v20 = CDOTA_BotMode::GetUnit(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v20);
  fTypeFactor = fsqrt(
                  ((vSpawnerLoc.x - AbsOrigin->x) * (vSpawnerLoc.x - AbsOrigin->x))
                + ((vSpawnerLoc.y - AbsOrigin->y) * (vSpawnerLoc.y - AbsOrigin->y)));
  if ( (v18 & 0xFFFFFFFD) != 0 )
  {
    v22 = (fTypeFactor - 400.0) / 3600.0;
    if ( v22 < 0.0 )
    {
      fDistanceFactor = 12.0;
    }
    else
    {
      fDistanceFactor = -14.0;
      if ( v22 <= 1.0 )
        fDistanceFactor = (v22 * -26.0) + 12.0;
    }
    fTimeFactor = 0.0;
    goto LABEL_35;
  }
  v52 = fabs(*&g_pGameRules[54].m_szQuestName[96] - CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0)) / 10.0;
  if ( v52 < 0.0 )
  {
    fTimeFactor = 5.0;
    goto LABEL_74;
  }
  fTimeFactor = 0.0;
  if ( (v52 > 1.0 || (fTimeFactor = (v52 * -5.0) + 5.0) == 0.0) && v18 == DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING )
    return 0.0;
LABEL_74:
  v53 = (fTypeFactor - 400.0) / 11600.0;
  if ( v53 < 0.0 )
  {
    fDistanceFactor = 12.0;
  }
  else
  {
    fDistanceFactor = -10.0;
    if ( v53 <= 1.0 )
      fDistanceFactor = (v53 * -22.0) + 12.0;
  }
LABEL_35:
  v23 = CDOTA_BotMode::GetUnit(this);
  fDangerFactor = CBaseEntity::GetHealth(v23);
  v24 = CDOTA_BotMode::GetUnit(this);
  v25 = CDOTA_BotMode::GetTeamCommander(this);
  PotentialDamage = CDOTA_TeamCommander::GetPotentialDamage(v25, v24, 1500.0, &vSpawnerLoc);
  if ( fDangerFactor == 0.0 )
  {
    v27.m128_f32[0] = PotentialDamage - 0.0;
    LODWORD(fDangerFactora) = _mm_cmple_ss(0, v27).m128_u32[0] & 0xC1200000;
  }
  else
  {
    v51 = PotentialDamage / fDangerFactor;
    fDangerFactora = 0.0;
    if ( v51 >= 0.0 )
    {
      fDangerFactora = -10.0;
      if ( v51 <= 1.0 )
        fDangerFactora = (v51 * -10.0) + 0.0;
    }
  }
  v28 = CDOTA_BotMode::GetUnit(this);
  v29 = CDOTA_BaseNPC::GetInventory(v28);
  ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(v29, "item_bottle", 1, 0, -1);
  if ( ItemInInventory != 0 )
  {
    v31 = 0.0;
    if ( LODWORD(ItemInInventory[1]._vptr_IHandleEntity) != -1 )
    {
LABEL_39:
      fBottleFactor = v31;
      goto LABEL_40;
    }
    v54 = ItemInInventory->m_iCurrentCharges.m_Value * 0.25;
    if ( v54 < 0.0 )
    {
      fBottleFactor = 10.0;
    }
    else
    {
      fBottleFactor = 0.0;
      if ( v54 <= 1.0 )
      {
        v31 = (v54 * -10.0) + 10.0;
        goto LABEL_39;
      }
    }
  }
  else
  {
    fBottleFactor = 0.0;
  }
LABEL_40:
  fVeryCloseFactor = 0.0;
  if ( v18 == DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_AVAILABLE )
  {
    if ( CDOTA_BotMode::GetTeamCommander(this)->m_fRuneDibsDesire.m_Memory[v17] == 0.0 )
    {
      v55.m128_i32[0] = 1140457472;
      LODWORD(fVeryCloseFactor) = _mm_cmplt_ss(LODWORD(fTypeFactor), v55).m128_u32[0] & 0x41700000;
    }
    else
    {
      fVeryCloseFactor = 0.0;
    }
  }
  m_pBot = this->m_pBot;
  hNearbyAlliedHeroes.m_Size = 0;
  hNearbyAlliedHeroes.m_Memory.m_nAllocationCount = 32;
  hNearbyAlliedHeroes.m_Memory.m_nGrowSize = 0x80000000;
  hNearbyAlliedHeroes.m_Memory.m_pMemory = &hNearbyAlliedHeroes.m_FixedMemory;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hNearbyAlliedHeroes, 0.0);
  if ( hNearbyAlliedHeroes.m_Size > 0 )
  {
    m_pMemory = hNearbyAlliedHeroes.m_Memory.m_pMemory;
    v34 = hNearbyAlliedHeroes.m_Memory.m_pMemory + 1;
    v35 = &hNearbyAlliedHeroes.m_Memory.m_pMemory[hNearbyAlliedHeroes.m_Size - 1 + 1];
    while ( 1 )
    {
      m_Index = m_pMemory->m_Index;
      if ( m_pMemory->m_Index + 2 > 1
        && (v37 = m_pMemory->m_Index,
            (v38 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F]) != 0)
        && (v39 = &v38[v37 & 0x1FF]) != 0
        && m_Index == v39->m_EHandle.m_Index
        && (m_pInstance = v39->m_pInstance, v39->m_pInstance != 0)
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && (v41 = *&m_pInstance[45].m_worldGroupId.m_nHashCode) != 0
        && *(v41 + 176) != 0 )
      {
        m_pMemory = v34;
        fHumanFactor = fHumanFactor - 15.0;
        if ( v34 == v35 )
          break;
      }
      else
      {
        m_pMemory = v34;
        if ( v34 == v35 )
          break;
      }
      ++v34;
    }
  }
  v42 = CDOTA_BotMode::GetTeamCommander(this)->m_iRuneTypes.m_Memory[v17] + 2;
  if ( v42 <= 6 )
  {
    v43 = 1LL << v42;
    if ( ((1LL << v42) & 0x35) != 0 )
    {
      if ( (this->m_pBot->m_iUnitType & 0x30) != 0 )
      {
        fTypeFactora = 5.0;
        goto LABEL_65;
      }
    }
    else
    {
      if ( (v43 & 8) != 0 )
      {
        if ( fTypeFactor >= 400.0
          || this->m_pBot->m_fModeDesires[4] < 0.75
          || (v56 = CDOTA_BotMode::GetUnit(this),
              fTypeFactora = 30.0,
              CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 800.0, 0, v56) <= 0) )
        {
          fTypeFactora = 0.0;
        }
        goto LABEL_65;
      }
      if ( (v43 & 0x40) != 0 )
      {
        v44 = CDOTA_BotMode::GetUnit(this);
        v45 = 100LL * CBaseEntity::GetHealth(v44);
        v46 = (*(v44->_vptr_IHandleEntity + 156))(v44);
        v47 = 1;
        if ( v46 > 0 )
          v47 = v46;
        v48 = v45 / v47;
        v49 = CDOTA_BotMode::GetUnit(this);
        fTypeFactora = RemapValClamped(
                         (((100.0 * v49->m_flMana.m_Value) / v49->m_flMaxMana.m_Value) + v48),
                         200.0,
                         0.0,
                         -4.0,
                         5.0,
                         v50);
        if ( CDOTA_Bot::IsDangerouslyLow(this->m_pBot) || CDOTA_Bot::IsAboutToDie(this->m_pBot) )
          fTypeFactora = fTypeFactora + 2.5;
        goto LABEL_65;
      }
    }
  }
  fTypeFactora = 0.0;
LABEL_65:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAlliedHeroes);
  return ((((((fExistsFactor + fTimeFactor) + fDistanceFactor) + fDangerFactora) + fBottleFactor) + fTypeFactora)
        + fVeryCloseFactor)
       + fHumanFactor;
}


// CDOTA_BotMode_Rune::GetDebugColor  (line 453, @0x00000000028163c0, libserver.so)
color24 __fastcall CDOTA_BotMode_Rune::GetDebugColor(CDOTA_BotMode_Rune *const this)
{
  return 6619135;
}


