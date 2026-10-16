
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_TeamRoam::CDOTA_BotMode_TeamRoam  (line 25, @0x000000000282a960, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_TeamRoam::CDOTA_BotMode_TeamRoam(CDOTA_BotMode_TeamRoam *const this, CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->m_hPotentialRoamTarget.m_Index = -1;
  this->_vptr_CDOTA_BotMode = off_42B8ED0;  // vptr: CDOTA_BotMode_TeamRoam
  this->m_fCurrentTargetScore = 0.0;
}


// CDOTA_BotMode_TeamRoam::OnStart  (line 33, @0x0000000002829c70, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetBotDebugData, SetTarget, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CEntityInstance::GetEntityIndex, CDOTA_BotMode::GetUnit
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_TeamRoam::OnStart(CDOTA_BotMode_TeamRoam *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r14
  int v6; // r13d
  int v7; // r13d
  CDOTA_BaseNPC *Unit; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v10; // cx
  float v11; // xmm0_4
  uint32 v12; // [rsp+0h] [rbp-30h]

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    m_Index = this->m_hPotentialRoamTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPotentialRoamTarget.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hPotentialRoamTarget.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v6 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
            v7 = (32 * CEntityInstance::GetEntityIndex(m_pInstance).m_Data) | v6;
            Unit = CDOTA_BotMode::GetUnit(this);
            if ( v7 != Unit->m_iBotDebugData.m_Value )
            {
              (*(Unit->_vptr_IHandleEntity + 22))(Unit, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              Unit->m_iBotDebugData.m_Value = v7;
            }
            m_pEntity = m_pInstance->m_pEntity;
            v12 = -1;
            if ( m_pEntity != 0 )
            {
              v10 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              v12 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
            }
            v11 = 0.0;
            this->m_pBot->m_hTarget.m_Index = v12;
            this->m_fCurrentTargetScore = 0.0;
            if ( g_pGameRules != 0 )
              v11 = *&g_pGameRules[18].m_szQuestName[20];
            this->m_fStartedTeamRoamTime = v11;
            this->m_bAnnouncedTeamRoam = 0;
          }
        }
      }
    }
  }
}


// CDOTA_BotMode_TeamRoam::OnEnd  (line 52, @0x00000000028278d0, libserver.so)  // inlines: SetTarget, operator=
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_TeamRoam::OnEnd(CDOTA_BotMode_TeamRoam *const this)
{
  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
    this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_TeamRoam::Think  (line 62, @0x0000000002865f40, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, DOTAGameRules, FastSqrt, Get, GetAggroTarget, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetLastSeenLocation, GetSerialNumber, GetTarget, GetTargetNPC, GetTeamNumber, GetUnitName, IsEnabled, Length2D, Purge, Set, SetTarget, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::IsUsingAbility, CVProfile::ExitScope, CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::ChatMessageRequest, CVProfile::EnterScope, CDOTA_Bot::IsUsingItem, CDOTA_Bot::GetNearbyCreeps, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation (21 total)
// strings: "DOTA_Chat_Bot_TeamRoam", "CDOTA_BotMode_TeamRoam::Think"
void __fastcall CDOTA_BotMode_TeamRoam::Think(CDOTA_BotMode_TeamRoam *const this)
{
  int m_enabled; // edi
  bool v3; // r13
  CDOTA_Bot *m_pBot; // r14
  CEntityInstance *v5; // rax
  float v6; // xmm0_4
  const char *m_pAsString; // r14
  CDOTA_BaseNPC *Unit; // rax
  CDOTAPlayer *v9; // r15
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_Bot *v11; // rdi
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // rax
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // r15
  CEntityInstance *v16; // rax
  CEntityInstance *v17; // rax
  CBaseModelEntity *v18; // r15
  __int64 v19; // rax
  int v20; // xmm1_4
  double v21; // xmm0_8
  CDOTA_Bot *v22; // rdi
  int v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  CEntityIdentity *m_pEntity; // rax
  int v26; // edx
  __int16 v27; // cx
  CDOTA_TeamCommander *v28; // rax
  CEntityIdentity *v29; // rax
  int v30; // edx
  __int16 v31; // cx
  CDOTA_TeamCommander *v32; // rax
  double v33; // xmm1_8
  float v34; // [rsp+8h] [rbp-58h]
  float v35; // [rsp+Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyCreeps; // [rsp+10h] [rbp-50h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_TeamRoam::Think", 0, "Bots", 0, 4);
  if ( !CDOTA_BotMode::DoScriptThink(this) )
  {
    m_pBot = this->m_pBot;
    v5 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    {
      v6 = 0.0;
      if ( g_pGameRules != 0 )
        v6 = *&g_pGameRules[18].m_szQuestName[20];
      if ( (v6 - this->m_fStartedTeamRoamTime) > 5.0 && !this->m_bAnnouncedTeamRoam )
      {
        m_pAsString = "";
        if ( v5[70].m_iszPrivateVScripts.u.m_Id != 0 )
          m_pAsString = v5[70].m_iszPrivateVScripts.u.m_pAsString;
        Unit = CDOTA_BotMode::GetUnit(this);
        v9 = (*(Unit->_vptr_IHandleEntity + 413))(Unit);
        TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
        CDOTA_TeamCommander::ChatMessageRequest(TeamCommander, v9, "DOTA_Chat_Bot_TeamRoam", m_pAsString, 1, 0);
        this->m_bAnnouncedTeamRoam = 1;
        m_pBot = this->m_pBot;
      }
      if ( !CDOTA_Bot::IsUsingAbility(m_pBot) && !CDOTA_Bot::IsUsingItem(this->m_pBot) )
      {
        this->m_pBot->m_hTarget.m_Index = this->m_hPotentialRoamTarget.m_Index;
        v11 = this->m_pBot;
        if ( v11->m_nAttackingCreeps <= 0 )
        {
LABEL_25:
          hEnemyCreeps.m_Size = v11->m_hTarget.m_Index;
          v17 = CEntityHandle::operator CEntityInstance *(&hEnemyCreeps);
          v18 = v17;
          if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 && (v17[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v19 = *&v17[45].m_worldGroupId.m_nHashCode;
            if ( v19 != 0 )
            {
              v34 = *(v19 + 740);
              v35 = *(v19 + 744);
              *&hEnemyCreeps.m_Size = (*(this->_vptr_CDOTA_BotMode + 11))(this);
              LODWORD(hEnemyCreeps.m_Memory.m_pMemory) = v20;
              if ( fsqrt(
                     ((*&hEnemyCreeps.m_Size - v34) * (*&hEnemyCreeps.m_Size - v34))
                   + ((*(&hEnemyCreeps.m_Size + 1) - v35) * (*(&hEnemyCreeps.m_Size + 1) - v35))) < 200.0 )
              {
                v24 = CDOTA_BotMode::GetUnit(this);
                if ( CBaseModelEntity::CanBeSeenByTeam(v18, v24->m_iTeamNum.m_Value) )
                {
                  hEnemyCreeps.m_Size = -1;
                  m_pEntity = v18->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    v27 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(hEnemyCreeps.m_Size) = v27 | hEnemyCreeps.m_Size & 0x8000;
                    hEnemyCreeps.m_Size = (v26 << 15) | hEnemyCreeps.m_Size & 0x7FFF;
                  }
                  v28 = CDOTA_BotMode::GetTeamCommander(this);
                  if ( !CDOTA_TeamCommander::HasRequestActive(v28, 1, &hEnemyCreeps, 0) )
                  {
                    hEnemyCreeps.m_Size = -1;
                    v29 = v18->m_pEntity;
                    if ( v29 != 0 )
                    {
                      v30 = (v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1);
                      v31 = 0x7FFF;
                      if ( v29->m_EHandle.m_Index != -1 )
                        v31 = v29->m_EHandle.m_Index & 0x7FFF;
                      LOWORD(hEnemyCreeps.m_Size) = v31 | hEnemyCreeps.m_Size & 0x8000;
                      hEnemyCreeps.m_Size = (v30 << 15) | hEnemyCreeps.m_Size & 0x7FFF;
                    }
                    v32 = CDOTA_BotMode::GetTeamCommander(this);
                    CDOTA_TeamCommander::CreateHumanRequest(v32, 1, &hEnemyCreeps, 1, COERCE_DOUBLE(1077936128), v33);
                  }
                }
              }
            }
          }
          v21 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
          v22 = this->m_pBot;
          *&hEnemyCreeps.m_Size = v21;
          LODWORD(hEnemyCreeps.m_Memory.m_pMemory) = v23;
          CDOTA_Bot::SetMoveAction(v22, &hEnemyCreeps, 0, 1);
          goto LABEL_11;
        }
        hEnemyCreeps.m_Size = 0;
        hEnemyCreeps.m_Memory.m_pMemory = 0;
        hEnemyCreeps.m_Memory.m_nAllocationCount = 0;
        hEnemyCreeps.m_Memory.m_nGrowSize = 0;
        CDOTA_Bot::GetNearbyCreeps(v11, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEnemyCreeps, 0.0);
        v12 = CDOTA_BotMode::GetUnit(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
        SortEHANDLEVectorByLocation(&hEnemyCreeps, AbsOrigin, 0);
        v14 = CEntityHandle::operator CEntityInstance *(hEnemyCreeps.m_Memory.m_pMemory);
        v15 = v14;
        if ( v14 == 0
          || BYTE3(v14[7]._vptr_IHandleEntity) == 0
          || (v16 = CEntityHandle::operator CEntityInstance *(&v14[59].m_worldGroupId)) == 0
          || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
        {
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEnemyCreeps);
          if ( (hEnemyCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEnemyCreeps.m_Memory);
            if ( (hEnemyCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEnemyCreeps.m_Memory);
          }
          v11 = this->m_pBot;
          goto LABEL_25;
        }
        CDOTA_Bot::SetAttackAction(this->m_pBot, v15, 0);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEnemyCreeps);
        if ( (hEnemyCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEnemyCreeps.m_Memory);
          if ( (hEnemyCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEnemyCreeps.m_Memory);
        }
      }
    }
  }
LABEL_11:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_TeamRoam::GetDesire  (line 117, @0x0000000002829df0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// strings: "CDOTA_BotMode_TeamRoam::GetDesire"
float __fastcall CDOTA_BotMode_TeamRoam::GetDesire(CDOTA_BotMode_TeamRoam *const this)
{
  int m_enabled; // eax
  bool v3; // r12
  __m128 v4; // xmm0
  float result; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v7; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v10; // rax
  float v11; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v7 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_TeamRoam::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_TeamRoam::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v10 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v10->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v7 + __rdtsc();
  }
  v4.m128_f32[0] = CDOTA_BotMode::GetScriptDesire(this);
  LODWORD(result) = _mm_cmple_ss(0LL, v4).m128_u32[0] & v4.m128_i32[0];
  if ( v3 )
  {
    v11 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v11;
  }
  return result;
}


// CDOTA_BotMode_TeamRoam::CalculateDesiredLocation  (line 157, @0x000000000284e3e0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Get, GetAction, GetBotByIndex, GetDestination, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetInstance, GetLastSeenLocation, GetSerialNumber, GetTarget, GetUnit, GrowMemory, Length, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABotActionMoveTo, Top, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator-, operator->, operator==<CBaseEntity>, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BotMode::GetTeamCommander, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot::GetOffensivePower, SortEHANDLEVectorByLocation, CDOTA_BotMode::GetUnit, VectorNormalize, CDOTA_BotMode_TeamRoam::FindHiddenLocationNearby, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTAFogOfWarSystem::IsLocationVisible (13 total)
Vector __fastcall CDOTA_BotMode_TeamRoam::CalculateDesiredLocation(CDOTA_BotMode_TeamRoam *const this)
{
  const CBaseEntity *v2; // rax
  __int64 v3; // rbx
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_Bot *v5; // r13
  CEntityInstance *v6; // r14
  CEntityInstance *v7; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  __int64 m_Size; // r13
  int v12; // eax
  vec_t *p_m_Index; // rax
  CEntityInstance *v14; // rax
  const CBaseEntity *v15; // rbx
  vec_t v16; // xmm1_4
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *Unit; // rax
  CHandle<CBaseEntity> *m_pMemory; // r15
  CEntityInstance *v22; // rax
  int v23; // r14d
  __int64 v24; // r13
  const Vector *v25; // r14
  const Vector *v26; // rax
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rbx
  const CBaseEntity *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  char v31; // si
  const CBaseEntity *v32; // rax
  vec_t z; // xmm1_4
  vec_t x; // xmm0_4
  CDOTA_Bot *m_pBot; // rax
  int v36; // edx
  vec_t *v37; // rbx
  CDOTA_BaseNPC *v38; // rax
  const Vector *v39; // rax
  vec_t v40; // xmm2_4
  vec_t v41; // xmm0_4
  vec_t v42; // xmm1_4
  float v43; // xmm3_4
  vec_t v44; // xmm1_4
  vec_t v45; // xmm0_4
  CDOTA_BaseNPC *v46; // rax
  int OpposingTeamNumber; // eax
  vec_t v48; // xmm1_4
  vec_t v49; // xmm0_4
  CEntityInstance *v50; // [rsp+10h] [rbp-E0h]
  CDOTA_BaseNPC *v51; // [rsp+18h] [rbp-D8h]
  float fTargetOffensivePower; // [rsp+24h] [rbp-CCh]
  CDOTA_Bot *v53; // [rsp+28h] [rbp-C8h]
  int nHeroesAtFront; // [rsp+38h] [rbp-B8h]
  float fAssembledOffensivePower; // [rsp+3Ch] [rbp-B4h]
  char bAtFront; // [rsp+40h] [rbp-B0h]
  Vector vToTarget; // [rsp+60h] [rbp-90h] BYREF
  Vector vBaseWaitLocation; // [rsp+70h] [rbp-80h] BYREF
  Vector vHiddenWaitLocation; // [rsp+80h] [rbp-70h] BYREF
  Vector v60; // [rsp+90h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hAlliesRoamingToOurTarget; // [rsp+A0h] [rbp-50h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hPotentialRoamTarget);
  if ( v2 != 0 )
    CBaseEntity::GetAbsOrigin(v2);
  hAlliesRoamingToOurTarget.m_Size = 0;
  v3 = 0;
  hAlliesRoamingToOurTarget.m_Memory.m_pMemory = 0;
  hAlliesRoamingToOurTarget.m_Memory.m_nAllocationCount = 0;
  hAlliesRoamingToOurTarget.m_Memory.m_nGrowSize = 0;
  while ( v3 < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size )
  {
    TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
    if ( v3 < TeamCommander->m_BotList.m_Size )
    {
      v5 = TeamCommander->m_BotList.m_Memory.m_pMemory[v3];
      if ( v5 != 0 && (*(v5->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v5->m_pActiveBotMode) == 16 )
      {
        LODWORD(v60.x) = this->m_pBot->m_hTarget.m_Index;
        LODWORD(vHiddenWaitLocation.x) = v5->m_hTarget.m_Index;
        v6 = CEntityHandle::operator CEntityInstance *(&vHiddenWaitLocation);
        if ( v6 == CEntityHandle::operator CEntityInstance *(&v60) )
        {
          v7 = CEntityHandle::operator CEntityInstance *(&v5->m_hUnit);
          if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
          {
            v60.x = NAN;
            m_pEntity = v7->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v10 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(v60.x) = v10 | LOWORD(v60.x) & 0x8000;
              LODWORD(v60.x) = (v9 << 15) | LOWORD(v60.x) & 0x7FFF;
            }
            m_Size = hAlliesRoamingToOurTarget.m_Size;
            v12 = hAlliesRoamingToOurTarget.m_Size;
            if ( hAlliesRoamingToOurTarget.m_Size != hAlliesRoamingToOurTarget.m_Memory.m_nAllocationCount )
              goto LABEL_17;
LABEL_20:
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hAlliesRoamingToOurTarget.m_Memory, 1);
            v12 = hAlliesRoamingToOurTarget.m_Size;
          }
          else
          {
            m_Size = hAlliesRoamingToOurTarget.m_Size;
            v60.x = NAN;
            v12 = hAlliesRoamingToOurTarget.m_Size;
            if ( hAlliesRoamingToOurTarget.m_Size == hAlliesRoamingToOurTarget.m_Memory.m_nAllocationCount )
              goto LABEL_20;
          }
LABEL_17:
          hAlliesRoamingToOurTarget.m_Size = v12 + 1;
          p_m_Index = &hAlliesRoamingToOurTarget.m_Memory.m_pMemory[m_Size].m_Index;
          if ( p_m_Index != 0 )
            *p_m_Index = v60.x;
        }
      }
    }
    ++v3;
  }
  if ( hAlliesRoamingToOurTarget.m_Size != 0
    && (LODWORD(v60.x) = this->m_pBot->m_hTarget.m_Index,
        v14 = CEntityHandle::operator CEntityInstance *(&v60),
        v15 = v14,
        v14 != 0)
    && BYTE3(v14[7]._vptr_IHandleEntity) != 0
    && (v14[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
    && (v53 = *&v14[45].m_worldGroupId.m_nHashCode) != 0 )
  {
    fTargetOffensivePower = CDOTA_Bot::GetOffensivePower(v53);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
    SortEHANDLEVectorByLocation(&hAlliesRoamingToOurTarget, AbsOrigin, 0);
    Unit = CDOTA_BotMode::GetUnit(this);
    m_pMemory = hAlliesRoamingToOurTarget.m_Memory.m_pMemory;
    v51 = Unit;
    v22 = CEntityHandle::operator CEntityInstance *(hAlliesRoamingToOurTarget.m_Memory.m_pMemory);
    v23 = hAlliesRoamingToOurTarget.m_Size;
    v50 = v22;
    if ( hAlliesRoamingToOurTarget.m_Size <= 0 )
    {
      bAtFront = 0;
      nHeroesAtFront = 0;
      fAssembledOffensivePower = 0.0;
    }
    else
    {
      v24 = 0;
      nHeroesAtFront = 0;
      bAtFront = 0;
      fAssembledOffensivePower = 0.0;
      while ( 1 )
      {
        v27 = CEntityHandle::operator CEntityInstance *(&m_pMemory[v24]);
        v28 = v27;
        if ( v27 != 0
          && BYTE3(v27[7]._vptr_IHandleEntity) != 0
          && (v27[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && *&v27[45].m_worldGroupId.m_nHashCode != 0 )
        {
          v29 = CEntityHandle::operator CEntityInstance *(m_pMemory);
          if ( v29 == 0
            || (v25 = CBaseEntity::GetAbsOrigin(v29),
                v26 = CBaseEntity::GetAbsOrigin(v28),
                fsqrt(
                  (((v26->x - v25->x) * (v26->x - v25->x)) + ((v26->y - v25->y) * (v26->y - v25->y)))
                + ((v26->z - v25->z) * (v26->z - v25->z))) < 500.0) )
          {
            ++nHeroesAtFront;
            v30 = CDOTA_BotMode::GetUnit(this);
            v31 = bAtFront;
            if ( v30 == v28 )
              v31 = 1;
            bAtFront = v31;
            fAssembledOffensivePower = CDOTA_Bot::GetOffensivePower(v28->m_pBot) + fAssembledOffensivePower;
          }
          v23 = hAlliesRoamingToOurTarget.m_Size;
        }
        if ( v23 <= ++v24 )
          break;
        m_pMemory = hAlliesRoamingToOurTarget.m_Memory.m_pMemory;
      }
    }
    if ( (fAssembledOffensivePower > fTargetOffensivePower || nHeroesAtFront == v23) && bAtFront != 0 )
    {
      z = v53->m_vLastSeenLoc.z;
      x = v53->m_vLastSeenLoc.x;
      v60.y = v53->m_vLastSeenLoc.y;
      v60.z = z;
      v60.x = x;
    }
    else if ( v51 == v50 )
    {
      m_pBot = this->m_pBot;
      v36 = m_pBot->m_ActionStack.m_Size;
      if ( v36 <= 0 )
        goto LABEL_52;
      v37 = m_pBot->m_ActionStack.m_Memory.m_pMemory[v36 - 1];
      if ( v37 == 0 )
        goto LABEL_52;
      if ( (*(*v37 + 16LL))(v37) == 2
        && (v44 = v37[20],
            v45 = v37[18],
            v60.y = v37[19],
            v60.z = v44,
            v60.x = v45,
            v46 = CDOTA_BotMode::GetUnit(this),
            OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v46),
            !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, OpposingTeamNumber, &v60, 0.0)) )
      {
        v48 = v37[20];
        v49 = v37[18];
        v60.y = v37[19];
        v60.z = v48;
        v60.x = v49;
      }
      else
      {
LABEL_52:
        v38 = CDOTA_BotMode::GetUnit(this);
        v39 = CBaseEntity::GetAbsOrigin(v38);
        v40 = v53->m_vLastSeenLoc.x - v39->x;
        v41 = v53->m_vLastSeenLoc.z - v39->z;
        vToTarget.y = v53->m_vLastSeenLoc.y - v39->y;
        vToTarget.x = v40;
        vToTarget.z = v41;
        VectorNormalize(&vToTarget);
        v42 = v53->m_vLastSeenLoc.z - (vToTarget.z * 1000.0);
        v43 = v53->m_vLastSeenLoc.x;
        vBaseWaitLocation.y = v53->m_vLastSeenLoc.y - (vToTarget.y * 1000.0);
        vBaseWaitLocation.z = v42;
        vBaseWaitLocation.x = v43 - (vToTarget.x * 1000.0);
        if ( CDOTA_BotMode_TeamRoam::FindHiddenLocationNearby(this, &vBaseWaitLocation, 1000.0, &vHiddenWaitLocation) != 0 )
          v60 = vHiddenWaitLocation;
        else
          v60 = vBaseWaitLocation;
      }
    }
    else
    {
      v32 = CEntityHandle::operator CEntityInstance *(hAlliesRoamingToOurTarget.m_Memory.m_pMemory);
      v60 = *CBaseEntity::GetAbsOrigin(v32);
    }
  }
  else
  {
    *&v60.x = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    v60.z = v16;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliesRoamingToOurTarget);
  *&result.x = *&v60.x;
  result.z = v60.z;
  return result;
}


// CDOTA_BotMode_TeamRoam::FindHiddenLocationNearby  (line 251, @0x000000000284e0c0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Clamp<int>, CopyConstruct<sGridLocation>, Element, GetGridCountX, GetGridCountY, GetGridFromLocation, GetGridSizeX, GetGridSizeY, GetLocationFromGrid, GrowMemory, Purge, Random, RemoveAll, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BotMode::GetTeamCommander, DOTACommander, CDOTA_Commander::GetGridFromLocation, CDOTA_TeamCommander::IsGridVisibleToEnemy, RandomInt, CDOTA_Commander::GetLocationFromGrid, CUtlMemory<sGridLocation, int>::Grow, CUtlMemory<sGridLocation, int>::Purge, _Unwind_Resume
// callers: CDOTA_BotMode_TeamRoam::CalculateDesiredLocation
__int64 __fastcall CDOTA_BotMode_TeamRoam::FindHiddenLocationNearby(
        CDOTA_BotMode_TeamRoam *const this,
        const Vector *const vBaseLocation,
        float fRadius,
        Vector *vHiddenLocation)
{
  CDOTA_Commander *v6; // rax
  int v7; // ebx
  CDOTA_Commander *v8; // rax
  int v9; // r13d
  CDOTA_Commander *v10; // rax
  const Vector *v11; // rsi
  int v12; // r12d
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // r14d
  int v19; // eax
  int v20; // r13d
  int i; // ebx
  CDOTA_TeamCommander *TeamCommander; // rax
  __int64 m_Size; // r13
  int v24; // eax
  sGridLocation *v25; // rax
  sGridLocation *v26; // rax
  int x; // ebx
  int v28; // r12d
  CDOTA_Commander *v29; // rax
  unsigned int v30; // ebx
  vec_t v31; // xmm0_4
  int y; // [rsp+10h] [rbp-80h]
  int v35; // [rsp+14h] [rbp-7Ch]
  int iBaseX; // [rsp+28h] [rbp-68h] BYREF
  int iBaseY; // [rsp+2Ch] [rbp-64h] BYREF
  __int64 v39; // [rsp+30h] [rbp-60h]
  CUtlVector<sGridLocation,CUtlMemory<sGridLocation,int> > gridLocations; // [rsp+40h] [rbp-50h] BYREF
  Vector LocationFromGrid; // 0:kr00_12.12

  CDOTA_BotMode::GetTeamCommander(this);
  v6 = DOTACommander();
  v7 = ((fRadius / ((v6->m_vWorldBounds[1].x - v6->m_vWorldBounds[0].x) / v6->m_iGridCount[0])) + 0.5);
  CDOTA_BotMode::GetTeamCommander(this);
  v8 = DOTACommander();
  v9 = ((fRadius / ((v8->m_vWorldBounds[1].y - v8->m_vWorldBounds[0].y) / v8->m_iGridCount[1])) + 0.5);
  CDOTA_BotMode::GetTeamCommander(this);
  v10 = DOTACommander();
  v11 = vBaseLocation;
  v12 = 0;
  CDOTA_Commander::GetGridFromLocation(v10, v11, &iBaseX, &iBaseY);
  CDOTA_BotMode::GetTeamCommander(this);
  v13 = DOTACommander()->m_iGridCount[0] - 1;
  if ( iBaseX - v7 >= 0 )
  {
    if ( iBaseX - v7 <= v13 )
      v13 = iBaseX - v7;
    v12 = v13;
  }
  CDOTA_BotMode::GetTeamCommander(this);
  v35 = 0;
  v14 = DOTACommander()->m_iGridCount[0] - 1;
  v15 = iBaseX + v7;
  if ( v15 >= 0 )
  {
    if ( v14 <= v15 )
      v15 = v14;
    v35 = v15;
  }
  CDOTA_BotMode::GetTeamCommander(this);
  y = 0;
  v16 = DOTACommander()->m_iGridCount[1] - 1;
  v17 = iBaseY - v9;
  if ( iBaseY - v9 >= 0 )
  {
    if ( v16 <= v17 )
      v17 = v16;
    y = v17;
  }
  v18 = 0;
  CDOTA_BotMode::GetTeamCommander(this);
  v19 = DOTACommander()->m_iGridCount[1] - 1;
  v20 = iBaseY + v9;
  if ( v20 >= 0 )
  {
    v18 = v20;
    if ( v19 <= v20 )
      v18 = v19;
  }
  gridLocations.m_Size = 0;
  gridLocations.m_Memory.m_pMemory = 0;
  gridLocations.m_Memory.m_nAllocationCount = 0;
  gridLocations.m_Memory.m_nGrowSize = 0;
  if ( v12 > v35 )
    goto LABEL_32;
  do
  {
    for ( i = y; i <= v18; v25->x = v12 )
    {
      while ( 1 )
      {
        TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
        if ( !CDOTA_TeamCommander::IsGridVisibleToEnemy(TeamCommander, v12, i, 0.0) )
        {
          m_Size = gridLocations.m_Size;
          v24 = gridLocations.m_Size;
          if ( gridLocations.m_Size == gridLocations.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<sGridLocation,int>::Grow(&gridLocations.m_Memory, 1);
            v24 = gridLocations.m_Size;
          }
          gridLocations.m_Size = v24 + 1;
          v25 = &gridLocations.m_Memory.m_pMemory[m_Size];
          if ( v25 != 0 )
            break;
        }
        if ( ++i > v18 )
          goto LABEL_25;
      }
      v25->y = i++;
    }
LABEL_25:
    ++v12;
  }
  while ( v12 <= v35 );
  if ( gridLocations.m_Size <= 0 )
  {
LABEL_32:
    v30 = 0;
  }
  else
  {
    v26 = &gridLocations.m_Memory.m_pMemory[RandomInt(0, (gridLocations.m_Size - 1))];
    x = v26->x;
    v28 = v26->y;
    CDOTA_BotMode::GetTeamCommander(this);
    v29 = DOTACommander();
    LocationFromGrid = CDOTA_Commander::GetLocationFromGrid(v29, x, v28);
    v39 = *&LocationFromGrid.x;
    v30 = 1;
    vHiddenLocation->x = LocationFromGrid.x;
    v31 = *(&v39 + 1);
    vHiddenLocation->z = LocationFromGrid.z;
    vHiddenLocation->y = v31;
  }
  gridLocations.m_Size = 0;
  if ( (gridLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<sGridLocation,int>::Purge(&gridLocations.m_Memory);
    if ( (gridLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sGridLocation,int>::Purge(&gridLocations.m_Memory);
  }
  return v30;
}


// CDOTA_BotMode_TeamRoam::GetDebugColor  (line 289, @0x00000000028276a0, libserver.so)
color24 __fastcall CDOTA_BotMode_TeamRoam::GetDebugColor(CDOTA_BotMode_TeamRoam *const this)
{
  return &stru_288CF0;
}


// CDOTA_BotMode_TeamRoam::GetDebugString  (line 300, @0x0000000002840ed0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: V_sprintf_safe<128ul>
// strings: "Team Roam - %s (%2.2f)"
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotMode_TeamRoam::GetDebugString(CDOTA_BotMode_TeamRoam *const this)
{
  const char *m_pAsString; // rdx
  CDOTA_Bot *m_pBot; // rcx
  uint32 m_Index; // eax
  unsigned __int16 v4; // si
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  char *m_DebugStringBuffer; // rbx
  CEntityInstance *m_pInstance; // rax

  m_pAsString = "NULL";
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = m_pBot->m_hTarget.m_Index;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_pAsString = "";
          if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
            m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
        }
      }
    }
  }
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(this->m_DebugStringBuffer, "Team Roam - %s (%2.2f)", m_pAsString, this->m_fCurrentTargetScore);
  return m_DebugStringBuffer;
}


