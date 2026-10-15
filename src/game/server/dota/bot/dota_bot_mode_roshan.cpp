
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Roshan::CDOTA_BotMode_Roshan  (line 23, @0x000000000281de70, libserver.so)
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_Roshan::CDOTA_BotMode_Roshan(CDOTA_BotMode_Roshan *const this, CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->m_fRoshanScore = 0.0;
  this->_vptr_CDOTA_BotMode = off_42B8790;
}


// CDOTA_BotMode_Roshan::OnStart  (line 31, @0x0000000002818190, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetBotDebugData, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetUnit, CDOTAGamerules::GetRoshan, CDOTAGamerules::GetDOTATime
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Roshan::OnStart(CDOTA_BotMode_Roshan *const this)
{
  int v2; // r13d
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v4; // r12
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v7; // eax
  CDOTAGamerules *v8; // rdi
  float DOTATime; // xmm0_4
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  int v14[12]; // [rsp+0h] [rbp-30h] BYREF

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    v2 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
    Unit = CDOTA_BotMode::GetUnit(this);
    v4 = Unit;
    if ( v2 != Unit->m_iBotDebugData.m_Value )
    {
      (*(Unit->_vptr_IHandleEntity + 22))(Unit, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v4->m_iBotDebugData.m_Value = v2;
    }
    CDOTAGamerules::GetRoshan(v14, g_pGameRules);
    if ( (v14[0] + 2) > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14[0]) >> 9) & 0x3F]) != 0
      && (v6 = &v5[v14[0] & 0x1FF]) != 0
      && v14[0] == v6->m_EHandle.m_Index
      && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
      && (v14[0] = -1, (m_pEntity = m_pInstance->m_pEntity) != 0) )
    {
      v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v14[0]) = v13 | v14[0] & 0x8000;
      v7 = (v12 << 15) | v14[0] & 0x7FFF;
      v14[0] = v7;
    }
    else
    {
      v7 = -1;
    }
    v8 = g_pGameRules;
    this->m_pBot->m_hTarget.m_Index = v7;
    DOTATime = CDOTAGamerules::GetDOTATime(v8, 0, 0, 0.0);
    this->m_bAnnouncedRosh = 0;
    this->m_fStartTime = DOTATime;
  }
}


// CDOTA_BotMode_Roshan::OnEnd  (line 47, @0x0000000002818420, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_BotMode::DoScriptOnEnd, CDOTAGamerules::GetRoshan, CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::ChatMessageRequest
// strings: "DOTA_Chat_Bot_LeaveRoshan"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Roshan::OnEnd(CDOTA_BotMode_Roshan *const this)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTA_BaseNPC *Unit; // rax
  CDOTAPlayer *v6; // r12
  CDOTA_TeamCommander *TeamCommander; // rax
  int v8[8]; // [rsp+0h] [rbp-20h] BYREF

  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
  {
    this->m_pBot->m_hTarget.m_Index = -1;
    if ( this->m_bAnnouncedRosh )
    {
      CDOTAGamerules::GetRoshan(v8, g_pGameRules);
      if ( (v8[0] + 2) > 1 )
      {
        v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8[0]) >> 9) & 0x3F];
        if ( v2 != 0 )
        {
          v3 = &v2[v8[0] & 0x1FF];
          if ( v3 != 0 && v8[0] == v3->m_EHandle.m_Index )
          {
            m_pInstance = v3->m_pInstance;
            if ( v3->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
            {
              Unit = CDOTA_BotMode::GetUnit(this);
              v6 = (*(Unit->_vptr_IHandleEntity + 413))(Unit);
              TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
              CDOTA_TeamCommander::ChatMessageRequest(TeamCommander, v6, "DOTA_Chat_Bot_LeaveRoshan", "", 1, 0);
            }
          }
        }
      }
    }
  }
}


// CDOTA_BotMode_Roshan::Think  (line 66, @0x0000000002824ab0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, DOTAGameRules, Get, GetAttackTarget, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, HasElement, IndexToIdentity, IsEnabled, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*=, operator+=, operator-, operator[], ~CUtlVector, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::EnterScope, CDOTAGamerules::GetDOTATime, CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::ChatMessageRequest, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTAGamerules::GetRoshan, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::GetNearbyHeroes, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find (21 total)
// strings: "CDOTA_BotMode_Roshan::Think", "DOTA_Chat_Bot_Roshan"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Roshan::Think(CDOTA_BotMode_Roshan *const this)
{
  int m_enabled; // r9d
  bool v3; // r12
  CDOTA_BaseNPC *Unit; // rax
  CDOTAPlayer *v5; // r14
  CDOTA_TeamCommander *TeamCommander; // rax
  CEntityInstance *v7; // rax
  CDOTA_Bot *m_pBot; // rdi
  __int64 v9; // r13
  int v10; // r14d
  CDOTA_TeamCommander *v11; // r15
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_Bot *v17; // rax
  CEntityIdentity *m_pEntity; // rax
  int v19; // edx
  __int16 v20; // cx
  __int64 v21; // r14
  int v22; // r13d
  int v23; // r15d
  CHandle<CBaseEntity> *v24; // rdx
  uint32 v25; // eax
  __int16 v26; // cx
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CEntityInstance *m_pInstance; // rax
  __int64 v30; // rax
  CDOTA_BaseNPC *v31; // r13
  CDOTA_BaseNPC *v32; // rax
  const Vector *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  const Vector *v35; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v37; // rax
  const Vector *v38; // rax
  vec_t v39; // xmm0_4
  vec_t v40; // xmm1_4
  CDOTA_BaseNPC *v41; // rax
  const Vector *v42; // rax
  CDOTA_Bot *v43; // rdi
  CDOTA_BaseNPC *other; // [rsp+8h] [rbp-78h]
  CDOTA_BaseNPC_Hero *pTank; // [rsp+18h] [rbp-68h]
  Vector vBackOffLocation; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAllies; // [rsp+30h] [rbp-50h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_Roshan::Think", 0, "Bots", 0, 4);
  if ( CDOTA_BotMode::DoScriptThink(this) )
    goto LABEL_4;
  if ( (CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) - this->m_fStartTime) > 5.0 )
  {
    Unit = CDOTA_BotMode::GetUnit(this);
    v5 = (*(Unit->_vptr_IHandleEntity + 413))(Unit);
    TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
    CDOTA_TeamCommander::ChatMessageRequest(TeamCommander, v5, "DOTA_Chat_Bot_Roshan", "", 1, 0);
    this->m_bAnnouncedRosh = 1;
  }
  if ( CDOTA_Bot::IsUsingAbility(this->m_pBot)
    || CDOTA_Bot::IsUsingItem(this->m_pBot)
    || (CDOTAGamerules::GetRoshan(&vBackOffLocation, g_pGameRules),
        v7 = CEntityHandle::operator CEntityInstance *(&vBackOffLocation),
        other = v7,
        v7 == 0)
    || BYTE3(v7[7]._vptr_IHandleEntity) == 0
    || (*(v7->_vptr_IHandleEntity + 408))(v7) == 0 )
  {
LABEL_4:
    if ( !v3 )
      return;
LABEL_54:
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return;
  }
  m_pBot = this->m_pBot;
  hNearbyAllies.m_Size = 0;
  hNearbyAllies.m_Memory.m_pMemory = 0;
  hNearbyAllies.m_Memory.m_nAllocationCount = 0;
  hNearbyAllies.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hNearbyAllies, 0.0);
  v9 = 0;
  v10 = 0;
  v11 = CDOTA_BotMode::GetTeamCommander(this);
  if ( v11->m_hProposedRoshanUnits.m_Size > 0 )
  {
    while ( 1 )
    {
      v12 = &v11->m_hProposedRoshanUnits.m_Memory.m_pMemory[v9];
      m_Index = v12->m_Index;
      if ( v12->m_Index + 2 > 1 )
      {
        v14 = v12->m_Index;
        v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
        if ( v15 != 0 )
        {
          v16 = &v15[v14 & 0x1FF];
          if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
          {
            pTank = v16->m_pInstance;
            if ( v16->m_pInstance != 0
              && BYTE3(v16->m_pInstance[7]._vptr_IHandleEntity) != 0
              && (pTank->m_iUnitType & 1) != 0 )
            {
              v17 = pTank->m_pBot;
              if ( v17 != 0 && (*(v17->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v17->m_pActiveBotMode) == 20 )
              {
                vBackOffLocation.x = NAN;
                m_pEntity = pTank->m_pEntity;
                if ( m_pEntity != 0 )
                {
                  v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  v20 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(vBackOffLocation.x) = v20 | LOWORD(vBackOffLocation.x) & 0x8000;
                  LODWORD(vBackOffLocation.x) = (v19 << 15) | LOWORD(vBackOffLocation.x) & 0x7FFF;
                }
                if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                       &hNearbyAllies,
                       &vBackOffLocation) >= 0 )
                  break;
              }
            }
          }
        }
      }
      ++v10;
      ++v9;
      if ( v11->m_hProposedRoshanUnits.m_Size <= v10 )
        goto LABEL_48;
    }
  }
  else
  {
LABEL_48:
    pTank = 0;
  }
  if ( hNearbyAllies.m_Size <= 0 )
  {
    v23 = 0;
  }
  else
  {
    v21 = 0;
    v22 = 0;
    v23 = 0;
    do
    {
      v24 = &hNearbyAllies.m_Memory.m_pMemory[v21];
      v25 = hNearbyAllies.m_Memory.m_pMemory[v21].m_Index;
      if ( v25 + 2 > 1 )
      {
        v26 = v24->m_Index;
        v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v24->m_Index) >> 9) & 0x3F];
        if ( v27 != 0 )
        {
          v28 = &v27[v26 & 0x1FF];
          if ( v28 != 0 && v25 == v28->m_EHandle.m_Index )
          {
            m_pInstance = v28->m_pInstance;
            if ( v28->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              v30 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
              if ( v30 != 0 )
                v23 += (*(**(v30 + 34056) + 16LL))(*(v30 + 34056)) == 20;
            }
          }
        }
      }
      ++v22;
      ++v21;
    }
    while ( hNearbyAllies.m_Size > v22 );
  }
  v31 = CEntityHandle::operator CEntityInstance *(&other->m_hAttackTarget);
  if ( CDOTA_BotMode::GetUnit(this) == v31 && pTank != CDOTA_BotMode::GetUnit(this) )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(other);
    v37 = CDOTA_BotMode::GetUnit(this);
    v38 = CBaseEntity::GetAbsOrigin(v37);
    v39 = v38->y - AbsOrigin->y;
    v40 = v38->x - AbsOrigin->x;
    vBackOffLocation.z = 0.0;
    vBackOffLocation.y = v39;
    vBackOffLocation.x = v40;
    VectorNormalize(&vBackOffLocation);
    vBackOffLocation.x = vBackOffLocation.x * 200.0;
    vBackOffLocation.y = vBackOffLocation.y * 200.0;
    vBackOffLocation.z = 200.0 * vBackOffLocation.z;
    v41 = CDOTA_BotMode::GetUnit(this);
    v42 = CBaseEntity::GetAbsOrigin(v41);
    v43 = this->m_pBot;
    vBackOffLocation.x = vBackOffLocation.x + v42->x;
    vBackOffLocation.y = vBackOffLocation.y + v42->y;
    vBackOffLocation.z = vBackOffLocation.z + v42->z;
    CDOTA_Bot::SetMoveAction(v43, &vBackOffLocation, 0, 0);
    goto LABEL_47;
  }
  v32 = CDOTA_BotMode::GetUnit(this);
  if ( !CDOTA_BaseNPC::CanAttackBoss(v32)
    || (v34 = CDOTA_BotMode::GetUnit(this), CBaseEntity::GetDistanceToEntity(v34, other) > 300.0) )
  {
    v33 = CBaseEntity::GetAbsOrigin(other);
    CDOTA_Bot::SetMoveAction(this->m_pBot, v33, 1, 0);
LABEL_47:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAllies);
    goto LABEL_4;
  }
  if ( v23 > 1 && pTank != 0 )
  {
    CDOTA_Bot::SetAttackAction(this->m_pBot, other, 0);
    goto LABEL_47;
  }
  v35 = CBaseEntity::GetAbsOrigin(other);
  CDOTA_Bot::SetMoveAction(this->m_pBot, v35, 1, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAllies);
  if ( v3 )
    goto LABEL_54;
}


// CDOTA_BotMode_Roshan::CalculateDesiredLocation  (line 144, @0x0000000002817bc0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTAGamerules::GetRoshan, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Roshan::CalculateDesiredLocation(CDOTA_BotMode_Roshan *const this)
{
  CConcreteEntityList *v2; // rsi
  CEntityIdentity *v3; // rdx
  __int64 v4; // rcx
  CEntityIdentity *v5; // rdx
  double v6; // xmm0_8
  vec_t v7; // xmm1_4
  const CBaseEntity *m_pInstance; // r12
  const Vector v11; // [rsp+10h] [rbp-30h]
  _DWORD v12[8]; // [rsp+20h] [rbp-20h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  CDOTAGamerules::GetRoshan(v12, g_pGameRules);
  v2 = CEntityHandle::gm_pEntityList;
  if ( (v12[0] + 2) > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12[0]) >> 9) & 0x3F]) != 0
    && (v4 = v12[0] & 0x1FF, v2 = (8 * v4), (v5 = &v3[v4]) != 0)
    && v12[0] == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC
    && (*(m_pInstance->_vptr_IHandleEntity + 408))(v5->m_pInstance) != 0 )
  {
    v11 = *CBaseEntity::GetAbsOrigin(m_pInstance);
  }
  else
  {
    v6 = (*(this->_vptr_CDOTA_BotMode + 11))(this, v2);
    *&v12[2] = v7;
    *&v11.x = v6;
    v11.z = v7;
  }
  *&result.x = *&v11.x;
  result.z = v11.z;
  return result;
}


// CDOTA_BotMode_Roshan::GetDesire  (line 155, @0x000000000281a560, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DOTAGameRules, EnterScope, FastSqrt, Get, GetEHandle, GetElapsed, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IsEnabled, Length2D, PLAT_CPU_TIME, RemapValClamped, Set, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, ThreadGetCurrentId, CDOTA_BotMode::GetTeamCommander, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CDOTAGamerules::GetRoshan, CEntityHandle::operator CEntityInstance*, CDOTA_BotMode::GetUnit, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_TeamCommander::IsUnitInRoshanList, CBaseEntity::GetHealth (16 total)
// strings: "CDOTA_BotMode_Roshan::GetDesire"
float __fastcall CDOTA_BotMode_Roshan::GetDesire(CDOTA_BotMode_Roshan *const this)
{
  int m_enabled; // esi
  bool v3; // r13
  float result; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v9; // rax
  CEntityInstance *v10; // rax
  const CBaseEntity *v11; // r14
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_BaseNPC *v18; // rax
  int Health; // eax
  float v20; // xmm5_4
  CDOTA_BaseNPC *v21; // rax
  const Vector *AbsOrigin; // rax
  float v23; // xmm1_4
  float v24; // xmm5_4
  CEntityIdentity *v25; // rdx
  int v26; // eax
  __int16 v27; // cx
  CDOTA_TeamCommander *v28; // rax
  float fHealthMultiplier; // [rsp+4h] [rbp-4Ch]
  float fDesirea; // [rsp+8h] [rbp-48h]
  const Vector *fDesireb; // [rsp+8h] [rbp-48h]
  float fDesire; // [rsp+8h] [rbp-48h]
  CEntityHandle v33; // [rsp+10h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Roshan::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_Roshan::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v9 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v9->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  result = CDOTA_BotMode::GetScriptDesire(this);
  if ( result < 0.0 )
  {
    if ( this->m_pBot->m_iDifficulty <= 1 )
      goto LABEL_10;
    if ( !CDOTA_BotMode::GetTeamCommander(this)->m_bLateGame )
      goto LABEL_10;
    CDOTAGamerules::GetRoshan(&v33, g_pGameRules);
    v10 = CEntityHandle::operator CEntityInstance *(&v33);
    v11 = v10;
    if ( v10 == 0 )
      goto LABEL_10;
    if ( BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
      goto LABEL_10;
    Unit = CDOTA_BotMode::GetUnit(this);
    if ( CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, Unit) > 0 )
      goto LABEL_10;
    v13 = CDOTA_BotMode::GetUnit(this);
    v33.m_Index = -1;
    if ( v13 != 0 )
    {
      m_pEntity = v13->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v16 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v33.m_Index) = v16 | v33.m_Index & 0x8000;
        v33.m_Index = (v15 << 15) | v33.m_Index & 0x7FFF;
      }
    }
    TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
    if ( !CDOTA_TeamCommander::IsUnitInRoshanList(TeamCommander, &v33) )
      goto LABEL_10;
    v18 = CDOTA_BotMode::GetUnit(this);
    Health = CBaseEntity::GetHealth(v18);
    fHealthMultiplier = RemapValClamped(Health, 800.0, 200.0, 1.0, 0.60000002, v20);
    v21 = CDOTA_BotMode::GetUnit(this);
    fDesireb = CBaseEntity::GetAbsOrigin(v21);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
    v23 = AbsOrigin->y - fDesireb->y;
    LODWORD(fDesireb) = RemapValClamped(
                          fsqrt(((AbsOrigin->x - fDesireb->x) * (AbsOrigin->x - fDesireb->x)) + (v23 * v23)),
                          3000.0,
                          10000.0,
                          1.0,
                          0.69999999,
                          v24);
    fDesire = (fHealthMultiplier * CDOTA_BotMode::GetTeamCommander(this)->m_fRoshanDesire) * *&fDesireb;
    if ( fDesire >= 0.75 )
      goto LABEL_29;
    v33.m_Index = -1;
    v25 = v11->m_pEntity;
    if ( v25 != 0 )
    {
      v26 = (v25->m_EHandle.m_Index >> 15) - (v25->m_flags & 1);
      if ( v25->m_EHandle.m_Index == -1 )
        v27 = 0x7FFF;
      else
        v27 = v25->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v33.m_Index) = v27 | v33.m_Index & 0x8000;
      v33.m_Index = (v26 << 15) | v33.m_Index & 0x7FFF;
    }
    v28 = CDOTA_BotMode::GetTeamCommander(this);
    if ( CDOTA_TeamCommander::HasRequestActive(v28, 5, &v33, 0) )
LABEL_29:
      result = fDesire;
    else
LABEL_10:
      result = 0.0;
  }
  if ( v3 )
  {
    fDesirea = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return fDesirea;
  }
  return result;
}


// CDOTA_BotMode_Roshan::GetDebugColor  (line 196, @0x0000000002816390, libserver.so)
color24 __fastcall CDOTA_BotMode_Roshan::GetDebugColor(CDOTA_BotMode_Roshan *const this)
{
  return 3710332;
}


// CDOTA_BotMode_Roshan::GetDebugString  (line 206, @0x0000000002820df0, libserver.so)
// calls: V_sprintf_safe<128ul>
// strings: "Roshan - %2.2f"
const char *__fastcall CDOTA_BotMode_Roshan::GetDebugString(CDOTA_BotMode_Roshan *const this)
{
  char *m_DebugStringBuffer; // rbx

  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(this->m_DebugStringBuffer, "Roshan - %2.2f", this->m_fRoshanScore);
  return m_DebugStringBuffer;
}


// CDOTA_BotMode_Roshan_Human::CDOTA_BotMode_Roshan_Human  (line 215, @0x000000000281dea0, libserver.so)  // inlines: CDOTA_BotMode_Roshan, Invalidate, NetworkStateChanged, Set, operator=<float>, ~CDOTA_BotMode, ~CDOTA_BotMode_Roshan
// calls: CDOTA_BotMode::CDOTA_BotMode, CountdownTimer::CountdownTimer, _Unwind_Resume
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_Roshan_Human::CDOTA_BotMode_Roshan_Human(
        CDOTA_BotMode_Roshan_Human *const this,
        CDOTA_Bot *pBot)
{
  CountdownTimer *p_m_AbilityUseTimer; // r13
  __int64 v4; // xmm0_8

  p_m_AbilityUseTimer = &this->m_AbilityUseTimer;
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->m_fRoshanScore = 0.0;
  this->_vptr_CDOTA_BotMode = off_42B8830;
  CountdownTimer::CountdownTimer(p_m_AbilityUseTimer);
  CountdownTimer::CountdownTimer(&this->m_AttackTimer);
  v4 = 3212836864LL;
  if ( this->m_AbilityUseTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(p_m_AbilityUseTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_AbilityUseTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_AttackTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_AttackTimer._vptr_CountdownTimer + 2))(&this->m_AttackTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v4, -1.0);
    this->m_AttackTimer.m_timestamp.m_Value = -1.0;
  }
}


// CDOTA_BotMode_Roshan_Human::OnStart  (line 223, @0x0000000002817ab0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTAGamerules::GetRoshan
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Roshan_Human::OnStart(CDOTA_BotMode_Roshan_Human *const this)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  uint32 v8[8]; // [rsp+0h] [rbp-20h] BYREF

  CDOTAGamerules::GetRoshan(v8, g_pGameRules);
  if ( v8[0] + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8[0]) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[v8[0] & 0x1FF];
      if ( v3 != 0 && v8[0] == v3->m_EHandle.m_Index )
      {
        m_pInstance = v3->m_pInstance;
        if ( v3->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (*(m_pInstance->_vptr_IHandleEntity + 408))(v3->m_pInstance) != 0 )
        {
          v8[0] = -1;
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v7 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v8[0]) = v7 | v8[0] & 0x8000;
            v8[0] = (v6 << 15) | v8[0] & 0x7FFF;
          }
          this->m_pBot->m_hTarget.m_Index = v8[0];
        }
      }
    }
  }
}


// CDOTA_BotMode_Roshan_Human::OnEnd  (line 234, @0x00000000028163a0, libserver.so)  // inlines: SetTarget, operator=
void __fastcall CDOTA_BotMode_Roshan_Human::OnEnd(CDOTA_BotMode_Roshan_Human *const this)
{
  this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_Roshan_Human::GetDesire  (line 241, @0x000000000281a920, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, FastSqrt, Get, GetAggroTarget, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, Length, LookupEntity, RemapValClamped, Set, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTAGamerules::GetRoshan, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::HasRequestActive, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Roshan_Human::GetDesire(CDOTA_BotMode_Roshan_Human *const this)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  float result; // xmm0_4
  const CBaseEntity *m_pInstance; // rbx
  CEntityIdentity *m_pEntity; // rax
  __int16 v7; // cx
  CDOTA_TeamCommander *TeamCommander; // rax
  float v9; // xmm1_4
  float v10; // xmm4_4
  CDOTA_BaseNPC *v11; // r12
  const Vector *AbsOrigin; // rbx
  const Vector *v13; // rax
  CDOTA_BaseNPC *Unit; // rax
  CEntityInstance *v15; // rax
  float v16; // [rsp+8h] [rbp-48h]
  EHANDLE hEntity; // [rsp+10h] [rbp-40h] BYREF
  int iRequestCount[12]; // [rsp+20h] [rbp-30h] BYREF

  CDOTAGamerules::GetRoshan(iRequestCount, g_pGameRules);
  if ( (iRequestCount[0] + 2) <= 1 )
    return 0.0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(iRequestCount[0]) >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0.0;
  v3 = &v2[iRequestCount[0] & 0x1FF];
  if ( v3 == 0 )
    return 0.0;
  if ( iRequestCount[0] != v3->m_EHandle.m_Index )
    return 0.0;
  m_pInstance = v3->m_pInstance;
  if ( v3->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return 0.0;
  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v3->m_pInstance) != 0 )
  {
    Unit = CDOTA_BotMode::GetUnit(this);
    v15 = CEntityHandle::operator CEntityInstance *(&Unit->m_hAggroTarget);
    if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 && v15 == m_pInstance )
      return 0.89999998;
  }
  iRequestCount[0] = 0;
  m_pEntity = m_pInstance->m_pEntity;
  hEntity.m_Index = -1;
  if ( m_pEntity != 0 )
  {
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    hEntity.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
  }
  TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
  if ( !CDOTA_TeamCommander::HasRequestActive(TeamCommander, 5, &hEntity, iRequestCount) )
    return 0.0;
  v9 = (iRequestCount[0] - 1.0) * 0.5;
  if ( v9 < 0.0 )
  {
    v10 = 4000.0;
  }
  else
  {
    v10 = 8000.0;
    if ( v9 <= 1.0 )
      v10 = (v9 * 4000.0) + 4000.0;
  }
  v16 = v10;
  v11 = CDOTA_BotMode::GetUnit(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v13 = CBaseEntity::GetAbsOrigin(v11);
  result = 0.0;
  if ( v16 > fsqrt(
               (((v13->x - AbsOrigin->x) * (v13->x - AbsOrigin->x)) + ((v13->y - AbsOrigin->y) * (v13->y - AbsOrigin->y)))
             + ((v13->z - AbsOrigin->z) * (v13->z - AbsOrigin->z))) )
    return 0.89999998;
  return result;
}


// CDOTA_BotMode_Roshan_Human::GetDebugString  (line 270, @0x0000000002820e30, libserver.so)  // inlines: GetRemainingTime, HasStarted, operator><float>
// calls: CountdownTimer::Now, V_sprintf_safe<128ul>
// strings: "Inferred Roshan - (%2.2f %2.2f)"
const char *__fastcall CDOTA_BotMode_Roshan_Human::GetDebugString(CDOTA_BotMode_Roshan_Human *const this)
{
  double v2; // xmm1_8
  double v3; // xmm0_8
  float v4; // xmm0_4
  char *m_DebugStringBuffer; // rbx
  double v7; // [rsp-20h] [rbp-28h]
  float m_Value; // [rsp-14h] [rbp-1Ch]
  float v9; // [rsp-14h] [rbp-1Ch]

  if ( this->m_AttackTimer.m_timestamp.m_Value <= 0.0 )
  {
    v2 = 0.0;
  }
  else
  {
    m_Value = this->m_AttackTimer.m_timestamp.m_Value;
    v2 = (m_Value - CountdownTimer::Now(&this->m_AttackTimer));
  }
  v3 = 0.0;
  v9 = this->m_AbilityUseTimer.m_timestamp.m_Value;
  if ( v9 > 0.0 )
  {
    v7 = v2;
    v4 = CountdownTimer::Now(&this->m_AbilityUseTimer);
    v2 = v7;
    v3 = (v9 - v4);
  }
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(m_DebugStringBuffer, "Inferred Roshan - (%2.2f %2.2f)", v3, v2);
  return m_DebugStringBuffer;
}


