
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_DefendAlly::CDOTA_BotMode_DefendAlly  (line 20, @0x00000000027f70b0, libserver.so)  // inlines: CDOTA_BotMode, CEntityHandle, CHandle, operator=
void __fastcall CDOTA_BotMode_DefendAlly::CDOTA_BotMode_DefendAlly(
        CDOTA_BotMode_DefendAlly *const this,
        CDOTA_Bot *pBot)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4

  this->m_DebugStringBuffer[0] = 0;
  this->m_pBot = pBot;
  this->m_iDesireLocationFrame = 0;
  x = vec3_origin.x;
  this->m_DebugValueBuffer[0] = 0;
  this->m_hAlly.m_Index = -1;
  this->m_vDesiredLocation.x = x;
  y = vec3_origin.y;
  this->m_hTarget.m_Index = -1;
  this->m_vDesiredLocation.y = y;
  z = vec3_origin.z;
  this->_vptr_CDOTA_BotMode = off_42B7A50;  // vptr: CDOTA_BotMode_DefendAlly
  this->m_vDesiredLocation.z = z;
  this->m_fCurrentTargetScore = 0.0;
}


// CDOTA_BotMode_DefendAlly::OnStart  (line 28, @0x00000000027f5f00, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_BotMode::DoScriptOnStart
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_DefendAlly::OnStart(CDOTA_BotMode_DefendAlly *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  uint32 v8; // [rsp+0h] [rbp-20h]

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            m_pEntity = m_pInstance->m_pEntity;
            v8 = -1;
            if ( m_pEntity != 0 )
            {
              v7 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
            }
            this->m_pBot->m_hTarget.m_Index = v8;
            this->m_fCurrentTargetScore = 0.0;
          }
        }
      }
    }
  }
}


// CDOTA_BotMode_DefendAlly::OnEnd  (line 43, @0x00000000027f6550, libserver.so)  // inlines: SetTarget, operator=
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_DefendAlly::OnEnd(CDOTA_BotMode_DefendAlly *const this)
{
  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
    this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_DefendAlly::Think  (line 53, @0x0000000002809200, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, Element, EnterScope, Get, GetAction, GetBotTargetStatus, GetBotTargetStatusCore, GetElapsed, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, GetTargetNPC, GetTeamNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, IsEnabled, LookupEntity, NetworkStateChanged, PLAT_CPU_TIME, Set, SetBotDebugData, SetTarget, ToBaseModelEntity, ToDOTABaseNPC, ToDOTABotActionAttack, Top, entindex, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator->, operator=, operator=<int>, operator==<CBaseEntity>, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_BotMode::GetUnit, CBaseModelEntity::CanBeSeenByTeam, GetBotTargetStatusCore (15 total)
// strings: "CDOTA_BotMode_DefendAlly::Think"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_DefendAlly::Think(CDOTA_BotMode_DefendAlly *const this)
{
  int m_enabled; // r9d
  bool v3; // r13
  CDOTA_Bot *m_pBot; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v8; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v11; // rax
  CDOTA_Bot *v12; // r15
  CEntityInstance *v13; // r14
  int v14; // r15d
  CEntityInstance *v15; // rax
  CEntityIndex v16; // r14d
  CDOTA_BaseNPC *Unit; // rax
  int v18; // r14d
  CDOTA_BaseNPC *v19; // r15
  CDOTA_Bot *v20; // r15
  vec_t v21; // r14d
  int m_Value; // r15d
  CBaseModelEntity *v23; // rax
  int m_Size; // eax
  const CEntityHandle *v25; // r14
  CDOTA_BaseNPC *v26; // r14
  CDOTA_BaseNPC *v27; // rax
  CDOTA_Bot *v28; // r12
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rsi
  double v31; // xmm0_8
  CDOTA_Bot *v32; // rdi
  vec_t v33; // xmm1_4
  CEntityInstance *v34; // rax
  CEntityInstance *v35; // r14
  CEntityHandle v36; // [rsp+10h] [rbp-50h] BYREF
  Vector v37[5]; // [rsp+20h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v8 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_DefendAlly::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_DefendAlly::Think",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v11 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v11->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v8 + __rdtsc();
  }
  if ( !CDOTA_BotMode::DoScriptThink(this) )
  {
    m_pBot = this->m_pBot;
    LODWORD(v37[0].x) = m_pBot->m_hTarget.m_Index;
    if ( (LODWORD(v37[0].x) + 2) > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v37[0].x) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[LOWORD(v37[0].x) & 0x1FF];
        if ( v6 != 0
          && LODWORD(v37[0].x) == v6->m_EHandle.m_Index
          && v6->m_pInstance != 0
          && !CDOTA_Bot::IsUsingAbility(m_pBot)
          && !CDOTA_Bot::IsUsingItem(this->m_pBot) )
        {
          v12 = this->m_pBot;
          LODWORD(v37[0].x) = v12->m_hTarget.m_Index;
          v13 = CEntityHandle::operator CEntityInstance *(v37);
          if ( v13 != CEntityHandle::operator CEntityInstance *(&this->m_hTarget) )
            v12->m_hTarget.m_Index = this->m_hTarget.m_Index;
          v14 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
          LODWORD(v37[0].x) = this->m_pBot->m_hTarget.m_Index;
          v15 = CEntityHandle::operator CEntityInstance *(v37);
          v16.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
          Unit = CDOTA_BotMode::GetUnit(this);
          v18 = v14 | (32 * v16.m_Data);
          v19 = Unit;
          if ( v18 != Unit->m_iBotDebugData.m_Value )
          {
            (*(Unit->_vptr_IHandleEntity + 22))(Unit, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v19->m_iBotDebugData.m_Value = v18;
          }
          v20 = this->m_pBot;
          v21 = *&v20->m_hTarget.m_Index;
          v36.m_Index = LODWORD(v21);
          if ( CEntityHandle::operator CEntityInstance *(&v36)[11]._vptr_IHandleEntity != 0 )
          {
            m_Value = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
            v37[0].x = v21;
            v23 = CEntityHandle::operator CEntityInstance *(v37);
            if ( !CBaseModelEntity::CanBeSeenByTeam(v23, m_Value) )
            {
              v31 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
              v32 = this->m_pBot;
              *&v37[0].x = v31;
              v37[0].z = v33;
              CDOTA_Bot::SetMoveAction(v32, v37, 1, 1);
              goto LABEL_7;
            }
            v20 = this->m_pBot;
          }
          m_Size = v20->m_ActionStack.m_Size;
          if ( m_Size > 0 )
          {
            v25 = v20->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
            if ( v25 != 0 )
            {
              if ( (*(*&v25->m_Index + 16LL))(v25) == 3 )
              {
                v34 = CEntityHandle::operator CEntityInstance *(v25 + 5);
                if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
                  v35 = v34;
                else
                  v35 = 0;
                v20 = this->m_pBot;
                LODWORD(v37[0].x) = v20->m_hTarget.m_Index;
                if ( v35 == CEntityHandle::operator CEntityInstance *(v37) )
                  goto LABEL_7;
              }
              else
              {
                v20 = this->m_pBot;
              }
            }
          }
          v26 = CDOTA_BotMode::GetUnit(this);
          v27 = CEntityHandle::operator CEntityInstance *(&v20->m_hTarget);
          if ( v27 != 0 && v27->m_bIsDOTANPC && (GetBotTargetStatusCore(v27, v26, -1.0, 0) & 0xFD) == 0 )
          {
            v28 = this->m_pBot;
            v29 = CEntityHandle::operator CEntityInstance *(&v28->m_hTarget);
            if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
              v30 = v29;
            else
              v30 = 0;
            CDOTA_Bot::SetAttackAction(v28, v30, 0);
          }
        }
      }
    }
  }
LABEL_7:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_DefendAlly::CalculateDesiredLocation  (line 95, @0x00000000027e0230, libserver.so)  // inlines: GetTargetLoc
Vector __fastcall CDOTA_BotMode_DefendAlly::CalculateDesiredLocation(CDOTA_BotMode_DefendAlly *const this)
{
  CDOTA_Bot *m_pBot; // rax
  vec_t x; // xmm2_4
  vec_t v5[4]; // [rsp+0h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pBot = this->m_pBot;
  x = m_pBot->m_vTargetLoc.x;
  v5[1] = m_pBot->m_vTargetLoc.y;
  result.z = m_pBot->m_vTargetLoc.z;
  v5[0] = x;
  *&result.x = *v5;
  return result;
}


// CDOTA_BotMode_DefendAlly::GetDesire  (line 102, @0x0000000002801890, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, CopyConstruct<CDOTA_BaseNPC*>, Element, FastSqrt, Get, GetBotByIndex, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, GrowMemory, IndexToIdentity, IsConsideredHero, IsEnabled, IsValid, Length, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, CVProfile::EnterScope, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_BotMode_DefendAlly::GetDefendAllyScore, CUtlMemory<CDOTA_BaseNPC*, int>::Purge, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, _Unwind_Resume
// strings: "CDOTA_BotMode_DefendAlly::GetDesire"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_DefendAlly::GetDesire(CDOTA_BotMode_DefendAlly *const this)
{
  int m_enabled; // r12d
  float result; // xmm0_4
  CDOTA_Bot *m_pBot; // rsi
  CDOTA_TeamCommander *m_pTeamCommander; // rax
  __int64 v6; // r12
  int v7; // ebx
  CDOTA_Bot *v8; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // r15
  const Vector *v16; // rax
  __int64 v17; // rbx
  int v18; // r12d
  CDOTA_BaseNPC *v19; // r14
  float DefendAllyScore; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v22; // eax
  __int16 v23; // cx
  CEntityIdentity *v24; // rax
  int v25; // edx
  __int16 v26; // cx
  CDOTA_Bot *v27; // rax
  __int64 m_Size; // r15
  CDOTA_BaseNPC **v29; // rax
  CDOTA_BaseNPC *pBestAttackingEnemy; // [rsp+0h] [rbp-70h]
  bool VProf_104; // [rsp+Bh] [rbp-65h]
  float fBestDefendAllyScoreb; // [rsp+Ch] [rbp-64h]
  float fBestDefendAllyScore; // [rsp+Ch] [rbp-64h]
  float fBestDefendAllyScorea; // [rsp+Ch] [rbp-64h]
  CDOTA_BaseNPC *pAttackingEnemy; // [rsp+18h] [rbp-58h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > hNearbyAlliedUnits; // [rsp+20h] [rbp-50h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_104 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_DefendAlly::GetDesire", 0, "Bots", 0, 4);
  result = CDOTA_BotMode::GetScriptDesire(this);
  if ( result < 0.0 )
  {
    m_pBot = this->m_pBot;
    hNearbyAlliedUnits.m_Size = 0;
    hNearbyAlliedUnits.m_Memory.m_pMemory = 0;
    hNearbyAlliedUnits.m_Memory.m_nAllocationCount = 0;
    hNearbyAlliedUnits.m_Memory.m_nGrowSize = 0;
    m_pTeamCommander = m_pBot->m_pTeamCommander;
    if ( m_pTeamCommander->m_BotList.m_Size <= 0 )
      goto LABEL_38;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v6];
      if ( v8 != 0 )
      {
        m_Index = v8->m_hUnit.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v10 = v8->m_hUnit.m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 3) != 0 )
              {
                Unit = CDOTA_BotMode::GetUnit(this);
                if ( Unit == 0
                  || (AbsOrigin = CBaseEntity::GetAbsOrigin(Unit),
                      v16 = CBaseEntity::GetAbsOrigin(m_pInstance),
                      fsqrt(
                        (((v16->x - AbsOrigin->x) * (v16->x - AbsOrigin->x))
                       + ((v16->y - AbsOrigin->y) * (v16->y - AbsOrigin->y)))
                      + ((v16->z - AbsOrigin->z) * (v16->z - AbsOrigin->z))) < 3000.0) )
                {
                  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
                    && CDOTA_BotMode::GetUnit(this) != m_pInstance )
                  {
                    v27 = m_pInstance->m_pBot;
                    if ( v27 != 0
                      && (v27->m_bHuman
                       || (*(v27->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v27->m_pActiveBotMode) == 4) )
                    {
                      m_Size = hNearbyAlliedUnits.m_Size;
                      if ( hNearbyAlliedUnits.m_Size == hNearbyAlliedUnits.m_Memory.m_nAllocationCount )
                        CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&hNearbyAlliedUnits.m_Memory, 1);
                      ++hNearbyAlliedUnits.m_Size;
                      v29 = &hNearbyAlliedUnits.m_Memory.m_pMemory[m_Size];
                      if ( v29 != 0 )
                        *v29 = m_pInstance;
                    }
                  }
                }
                m_pBot = this->m_pBot;
              }
            }
          }
        }
      }
      m_pTeamCommander = m_pBot->m_pTeamCommander;
      ++v7;
      ++v6;
    }
    while ( v7 < m_pTeamCommander->m_BotList.m_Size );
    if ( hNearbyAlliedUnits.m_Size <= 0 )
      goto LABEL_38;
    v17 = 0;
    v18 = 0;
    fBestDefendAllyScore = 0.0;
    pBestAttackingEnemy = 0;
    v19 = 0;
    do
    {
      while ( 1 )
      {
        pAttackingEnemy = 0;
        DefendAllyScore = CDOTA_BotMode_DefendAlly::GetDefendAllyScore(
                            this,
                            hNearbyAlliedUnits.m_Memory.m_pMemory[v17],
                            &pAttackingEnemy);
        if ( DefendAllyScore > fBestDefendAllyScore || v19 == 0 )
          break;
        ++v18;
        ++v17;
        if ( hNearbyAlliedUnits.m_Size <= v18 )
          goto LABEL_27;
      }
      ++v18;
      fBestDefendAllyScore = DefendAllyScore;
      v19 = hNearbyAlliedUnits.m_Memory.m_pMemory[v17++];
      pBestAttackingEnemy = pAttackingEnemy;
    }
    while ( hNearbyAlliedUnits.m_Size > v18 );
LABEL_27:
    if ( pBestAttackingEnemy != 0 && v19 != 0 )
    {
      m_pEntity = v19->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v23 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hAlly.m_Index) = v23 | this->m_hAlly.m_Index & 0x8000;
        this->m_hAlly.m_Index = (v22 << 15) | this->m_hAlly.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hAlly.m_Index = -1;
      }
      v24 = pBestAttackingEnemy->m_pEntity;
      if ( v24 != 0 )
      {
        v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
        v26 = 0x7FFF;
        if ( v24->m_EHandle.m_Index != -1 )
          v26 = v24->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTarget.m_Index) = v26 | this->m_hTarget.m_Index & 0x8000;
        this->m_hTarget.m_Index = (v25 << 15) | this->m_hTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hTarget.m_Index = -1;
      }
      this->m_fCurrentTargetScore = fBestDefendAllyScore;
      result = fBestDefendAllyScore;
    }
    else
    {
LABEL_38:
      result = 0.0;
    }
    hNearbyAlliedUnits.m_Size = 0;
    if ( (hNearbyAlliedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      fBestDefendAllyScorea = result;
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&hNearbyAlliedUnits.m_Memory);
      result = fBestDefendAllyScorea;
      if ( (hNearbyAlliedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&hNearbyAlliedUnits.m_Memory);
        result = fBestDefendAllyScorea;
      }
    }
  }
  if ( VProf_104 )
  {
    fBestDefendAllyScoreb = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return fBestDefendAllyScoreb;
  }
  return result;
}


// CDOTA_BotMode_DefendAlly::GetDefendAllyScore  (line 158, @0x00000000028014b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, Purge, RemapValClamped, RemoveAll, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::IsAboutToDie, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_Bot::GetStunDuration, CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_BotMode::GetUnit, CBaseEntity::GetHealth, CDOTA_Bot::GetSlowDuration, CUtlMemory<CDOTA_Bot*, int>::Purge, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotMode_DefendAlly::GetDesire
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_DefendAlly::GetDefendAllyScore(
        CDOTA_BotMode_DefendAlly *const this,
        CDOTA_BaseNPC *pAlly,
        CDOTA_BaseNPC **ppAttacker)
{
  bool IsAboutToDie; // al
  float result; // xmm0_4
  CDOTA_Bot *m_pBot; // rdi
  __int64 v7; // rbx
  CDOTA_BaseNPC *v8; // r14
  CDOTA_Bot *v9; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float StunDuration; // xmm0_4
  CDOTA_BaseNPC *Unit; // rax
  float EstimatedDamageToTarget; // xmm0_4
  float v17; // xmm0_4
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm0_4
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  float v23; // xmm1_4
  float fMostEstimatedDamage; // [rsp+1Ch] [rbp-64h]
  float v27; // [rsp+20h] [rbp-60h]
  float fBaselineDesire; // [rsp+24h] [rbp-5Ch]
  float fBaselineDesirea; // [rsp+24h] [rbp-5Ch]
  float fTotalEstimatedDamgeToAlly; // [rsp+28h] [rbp-58h]
  float fTotalEstimatedDamgeToAllya; // [rsp+28h] [rbp-58h]
  float fEstimatedDamageToAlly; // [rsp+2Ch] [rbp-54h]
  float fEstimatedDamageToAllya; // [rsp+2Ch] [rbp-54h]
  float fEstimatedDamageToAllyb; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > hAttackingEnemies; // [rsp+30h] [rbp-50h] BYREF

  IsAboutToDie = CDOTA_Bot::IsAboutToDie(this->m_pBot);
  result = 0.0;
  if ( !IsAboutToDie )
  {
    m_pBot = this->m_pBot;
    hAttackingEnemies.m_Size = 0;
    hAttackingEnemies.m_Memory.m_pMemory = 0;
    hAttackingEnemies.m_Memory.m_nAllocationCount = 0;
    hAttackingEnemies.m_Memory.m_nGrowSize = 0;
    CDOTA_Bot::FindNearbyEnemiesInMode(m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1500.0, &hAttackingEnemies, pAlly);
    if ( hAttackingEnemies.m_Size <= 0 )
      goto LABEL_29;
    v7 = 0;
    v8 = 0;
    fMostEstimatedDamage = 0.0;
    fBaselineDesire = 0.0;
    fTotalEstimatedDamgeToAlly = 0.0;
    do
    {
      while ( 1 )
      {
        v9 = hAttackingEnemies.m_Memory.m_pMemory[v7];
        m_Index = v9->m_hUnit.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_hUnit.m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v9->m_hUnit.m_Index & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( hAttackingEnemies.m_Size <= ++v7 )
          goto LABEL_15;
      }
      StunDuration = CDOTA_Bot::GetStunDuration(v9, 1);
      fEstimatedDamageToAlly = CDOTA_Bot::GetEstimatedDamageToTarget(
                                 hAttackingEnemies.m_Memory.m_pMemory[v7],
                                 1,
                                 pAlly,
                                 StunDuration + 5.0,
                                 7);
      v27 = CDOTA_Bot::GetStunDuration(hAttackingEnemies.m_Memory.m_pMemory[v7], 1);
      Unit = CDOTA_BotMode::GetUnit(this);
      EstimatedDamageToTarget = CDOTA_Bot::GetEstimatedDamageToTarget(
                                  hAttackingEnemies.m_Memory.m_pMemory[v7],
                                  1,
                                  Unit,
                                  v27 + 5.0,
                                  7);
      if ( fEstimatedDamageToAlly > fMostEstimatedDamage )
        fMostEstimatedDamage = fEstimatedDamageToAlly;
      else
        m_pInstance = v8;
      ++v7;
      v8 = m_pInstance;
      fTotalEstimatedDamgeToAlly = fTotalEstimatedDamgeToAlly + fEstimatedDamageToAlly;
      fBaselineDesire = EstimatedDamageToTarget + fBaselineDesire;
    }
    while ( hAttackingEnemies.m_Size > v7 );
LABEL_15:
    if ( v8 != 0 )
    {
      v17 = (fTotalEstimatedDamgeToAlly / CBaseEntity::GetHealth(pAlly)) - 0.5;
      fEstimatedDamageToAllya = 0.0;
      if ( v17 >= 0.0 )
      {
        fEstimatedDamageToAllya = 1.0;
        if ( v17 <= 1.0 )
          fEstimatedDamageToAllya = v17 + 0.0;
      }
      v18 = CDOTA_BotMode::GetUnit(this);
      v19 = (fBaselineDesire / CBaseEntity::GetHealth(v18)) - 0.5;
      if ( v19 < 0.0 )
      {
        fTotalEstimatedDamgeToAllya = 1.0;
      }
      else
      {
        fTotalEstimatedDamgeToAllya = 0.0;
        if ( v19 <= 1.0 )
          fTotalEstimatedDamgeToAllya = 1.0 - v19;
      }
      v20.m128_f32[0] = CDOTA_Bot::GetStunDuration(this->m_pBot, 1);
      v21 = _mm_cmplt_ss(0x3DCCCCCDu, v20);
      LODWORD(fBaselineDesirea) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v21, 0x3F000000u).m128_f32[0])
                                | v21.m128_i32[0] & 0x3F4CCCCD;
      v22.m128_f32[0] = CDOTA_Bot::GetSlowDuration(this->m_pBot, 1);
      v23 = COERCE_FLOAT(_mm_cmplt_ss(0x3DCCCCCDu, v22).m128_u32[0] & 0x3E4CCCCD) + fBaselineDesirea;
      if ( ppAttacker != 0 )
        *ppAttacker = v8;
      result = (fEstimatedDamageToAllya * v23) * fTotalEstimatedDamgeToAllya;
    }
    else
    {
LABEL_29:
      result = 0.0;
    }
    hAttackingEnemies.m_Size = 0;
    if ( (hAttackingEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      fEstimatedDamageToAllyb = result;
      CUtlMemory<CDOTA_Bot *,int>::Purge(&hAttackingEnemies.m_Memory);
      result = fEstimatedDamageToAllyb;
      if ( (hAttackingEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_Bot *,int>::Purge(&hAttackingEnemies.m_Memory);
        return fEstimatedDamageToAllyb;
      }
    }
  }
  return result;
}


// CDOTA_BotMode_DefendAlly::GetDebugColor  (line 209, @0x00000000027e0270, libserver.so)
color24 __fastcall CDOTA_BotMode_DefendAlly::GetDebugColor(CDOTA_BotMode_DefendAlly *const this)
{
  return 11812095;
}


// CDOTA_BotMode_DefendAlly::GetDebugString  (line 220, @0x00000000027f9940, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: V_sprintf_safe<128ul>
// strings: "Defending ally - %s from %s"
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotMode_DefendAlly::GetDebugString(CDOTA_BotMode_DefendAlly *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax
  CDOTA_Bot *m_pBot; // rsi
  const char *m_pAsString; // rcx
  uint32 v7; // edx
  unsigned __int16 v8; // r9
  CEntityIdentity *v9; // rsi
  CEntityIdentity *v10; // rsi
  const char *v11; // rdx
  char *m_DebugStringBuffer; // rbx
  CEntityInstance *v14; // rdx

  m_Index = this->m_hAlly.m_Index;
  if ( m_Index + 2 <= 1
    || (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAlly.m_Index) >> 9) & 0x3F]) == 0
    || (v3 = &v2[this->m_hAlly.m_Index & 0x1FF]) == 0
    || m_Index != v3->m_EHandle.m_Index
    || (m_pInstance = v3->m_pInstance, v3->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    m_pInstance = 0;
  }
  m_pBot = this->m_pBot;
  m_pAsString = "NULL";
  v7 = m_pBot->m_hTarget.m_Index;
  if ( v7 + 2 > 1 )
  {
    v8 = m_pBot->m_hTarget.m_Index;
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[v8 & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
      {
        v14 = v10->m_pInstance;
        if ( v10->m_pInstance != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
        {
          m_pAsString = "";
          if ( v14[70].m_iszPrivateVScripts.u.m_Id != 0 )
            m_pAsString = v14[70].m_iszPrivateVScripts.u.m_pAsString;
        }
      }
    }
  }
  if ( m_pInstance != 0 )
  {
    v11 = "";
    if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
      v11 = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
  }
  else
  {
    v11 = "NULL";
  }
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(this->m_DebugStringBuffer, "Defending ally - %s from %s", v11, m_pAsString);
  return m_DebugStringBuffer;
}


// CDOTA_BotMode_DefendAlly_Human::CDOTA_BotMode_DefendAlly_Human  (line 232, @0x00000000027f7130, libserver.so)  // inlines: CDOTA_BotMode, CDOTA_BotMode_DefendAlly, CEntityHandle, CHandle, Invalidate, NetworkStateChanged, Set, operator=, operator=<float>, ~CDOTA_BotMode, ~CDOTA_BotMode_DefendAlly
// calls: CountdownTimer::CountdownTimer, _Unwind_Resume
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_DefendAlly_Human::CDOTA_BotMode_DefendAlly_Human(
        CDOTA_BotMode_DefendAlly_Human *const this,
        CDOTA_Bot *pBot)
{
  CountdownTimer *p_m_AbilityUseTimer; // r13
  vec_t x; // xmm0_4
  vec_t z; // xmm0_4
  double v6; // xmm0_8
  __int64 v7; // xmm1_8

  p_m_AbilityUseTimer = &this->m_AbilityUseTimer;
  this->m_pBot = pBot;
  this->m_DebugStringBuffer[0] = 0;
  this->m_iDesireLocationFrame = 0;
  this->m_DebugValueBuffer[0] = 0;
  this->CDOTA_BotMode_DefendAlly::m_hAlly.m_Index = -1;
  this->CDOTA_BotMode_DefendAlly::m_hTarget.m_Index = -1;
  x = vec3_origin.x;
  this->m_fCurrentTargetScore = 0.0;
  this->m_vDesiredLocation.x = x;
  this->m_vDesiredLocation.y = vec3_origin.y;
  z = vec3_origin.z;
  this->_vptr_CDOTA_BotMode = off_42B7AF0;  // vptr: CDOTA_BotMode_DefendAlly_Human
  this->m_vDesiredLocation.z = z;
  CountdownTimer::CountdownTimer(&this->m_AbilityUseTimer);
  CountdownTimer::CountdownTimer(&this->m_AttackTimer);
  v7 = 3212836864LL;
  this->m_hAlly.m_Index = -1;
  this->m_hTarget.m_Index = -1;
  if ( this->m_AbilityUseTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(p_m_AbilityUseTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_AbilityUseTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_AttackTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_AttackTimer._vptr_CountdownTimer + 2))(
      &this->m_AttackTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v6,
      *&v7,
      -1.0);
    this->m_AttackTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_iAttackCount = 0;
}


// CDOTA_BotMode_DefendAlly_Human::OnStart  (line 241, @0x00000000027e1860, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_DefendAlly_Human::OnStart(CDOTA_BotMode_DefendAlly_Human *const this)
{
  uint32 m_Index; // edx
  uint32 v2; // eax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  __int64 v9; // [rsp-8h] [rbp-8h]

  m_Index = this->m_hTarget.m_Index;
  v2 = -1;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    *(&v9 - 4) = -1;
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      *(&v9 - 8) = v8 | *(&v9 - 2) & 0x8000;
      v2 = (v7 << 15) | *(&v9 - 2) & 0x7FFF;
    }
    this->m_pBot->m_hTarget.m_Index = v2;
  }
  else
  {
    this->m_pBot->m_hTarget.m_Index = -1;
  }
}


// CDOTA_BotMode_DefendAlly_Human::OnEnd  (line 248, @0x00000000027e0280, libserver.so)  // inlines: SetTarget, operator=
void __fastcall CDOTA_BotMode_DefendAlly_Human::OnEnd(CDOTA_BotMode_DefendAlly_Human *const this)
{
  this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_DefendAlly_Human::Think  (line 256, @0x00000000027f58c0, libserver.so)  // inlines: CEntityHandle, CHandle, DotProduct, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, IndexToIdentity, Invalidate, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator bool, operator-, operator->, operator=, operator=<float>
// calls: CountdownTimer::Now, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, VectorNormalize, CDOTALocomotor::GetAverageVelocityOverTime
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_DefendAlly_Human::Think(CDOTA_BotMode_DefendAlly_Human *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CountdownTimer *p_m_AttackTimer; // r12
  float v6; // xmm0_4
  float m_Value; // xmm1_4
  EHANDLE *p_m_hTarget; // r14
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // r12
  const CBaseEntity *v11; // rax
  const Vector *v12; // rax
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  CDOTALocomotor *v16; // rax
  float v17; // xmm1_4
  CEntityInstance *v18; // rax
  float v19; // xmm0_4
  __int64 v20; // xmm0_8
  float v21; // [rsp+Ch] [rbp-44h]
  Vector vToTarget; // [rsp+10h] [rbp-40h] BYREF
  Vector vMovement; // [rsp+20h] [rbp-30h] BYREF

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index )
  {
    p_m_hTarget = &this->m_hTarget;
    Unit = CDOTA_BotMode::GetUnit(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
    v11 = CEntityHandle::operator CEntityInstance *(p_m_hTarget);
    v12 = CBaseEntity::GetAbsOrigin(v11);
    v13 = v12->x - AbsOrigin->x;
    v14 = v12->y - AbsOrigin->y;
    vToTarget.z = 0.0;
    vToTarget.x = v13;
    vToTarget.y = v14;
    VectorNormalize(&vToTarget);
    v15 = CDOTA_BotMode::GetUnit(this);
    v16 = (*(v15->_vptr_IHandleEntity + 376))(v15);
    v20 = *&CDOTALocomotor::GetAverageVelocityOverTime(v16, v17).x;
    vMovement.z = 0.0;
    *&vMovement.x = v20;
    VectorNormalize(&vMovement);
    if ( (((vToTarget.x * vMovement.x) + (vToTarget.y * vMovement.y)) + (vToTarget.z * vMovement.z)) <= 0.80000001 )
      goto LABEL_15;
    p_m_AttackTimer = &this->m_AttackTimer;
    v19 = CountdownTimer::Now(&this->m_AttackTimer) + 2.0;
    if ( v19 != this->m_AttackTimer.m_timestamp.m_Value )
    {
      v21 = v19;
      (*(this->m_AttackTimer._vptr_CountdownTimer + 2))(&this->m_AttackTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_AttackTimer.m_timestamp.m_Value = v21;
    }
    if ( this->m_AttackTimer.m_duration.m_Value == 2.0 )
    {
LABEL_15:
      p_m_AttackTimer = &this->m_AttackTimer;
    }
    else
    {
      (*(this->m_AttackTimer._vptr_CountdownTimer + 2))(&this->m_AttackTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_AttackTimer.m_duration.m_Value = 2.0;
    }
    v18 = CEntityHandle::operator CEntityInstance *(p_m_hTarget);
    if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 && (v18[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      this->m_hAlly.m_Index = *(*&v18[45].m_worldGroupId.m_nHashCode + 712LL);
  }
  else
  {
    p_m_AttackTimer = &this->m_AttackTimer;
  }
  if ( CountdownTimer::Now(p_m_AttackTimer) >= this->m_AttackTimer.m_timestamp.m_Value )
  {
    v6 = CountdownTimer::Now(&this->m_AbilityUseTimer);
    m_Value = this->m_AbilityUseTimer.m_timestamp.m_Value;
    if ( v6 >= m_Value )
    {
      if ( m_Value != -1.0 )
      {
        (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(&this->m_AbilityUseTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_AbilityUseTimer.m_timestamp.m_Value = -1.0;
      }
      if ( this->m_AttackTimer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_AttackTimer._vptr_CountdownTimer + 2))(p_m_AttackTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_AttackTimer.m_timestamp.m_Value = -1.0;
      }
      this->m_iAttackCount = 0;
      this->m_hTarget.m_Index = -1;
    }
  }
}


// CDOTA_BotMode_DefendAlly_Human::OnDidDamage  (line 289, @0x00000000027e3c00, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, Start, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<float>
// calls: CountdownTimer::Now, CountdownTimer::Start
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_DefendAlly_Human::OnDidDamage(
        CDOTA_BotMode_DefendAlly_Human *const this,
        CDOTA_BaseNPC *pTarget,
        CDOTABaseAbility *pInflictor,
        int iAmount)
{
  float v4; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  float v12; // xmm0_4
  float v13; // [rsp-1Ch] [rbp-1Ch]

  if ( pInflictor == 0 || iAmount <= 149 )
    return;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hTarget.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
      {
        if ( pTarget != v8->m_pInstance )
        {
          if ( v8->m_pInstance != 0 )
            return;
          if ( pTarget == 0 )
            goto LABEL_21;
          goto LABEL_8;
        }
LABEL_17:
        CountdownTimer::Start(&this->m_AbilityUseTimer, 2.0, v4);
        return;
      }
    }
  }
  if ( pTarget == 0 )
    goto LABEL_17;
LABEL_8:
  m_pEntity = pTarget->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v11 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v11 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v10 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    goto LABEL_12;
  }
LABEL_21:
  this->m_hTarget.m_Index = -1;
LABEL_12:
  v12 = CountdownTimer::Now(&this->m_AbilityUseTimer) + 2.0;
  if ( v12 != this->m_AbilityUseTimer.m_timestamp.m_Value )
  {
    v13 = v12;
    (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(&this->m_AbilityUseTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_AbilityUseTimer.m_timestamp.m_Value = v13;
  }
  if ( this->m_AbilityUseTimer.m_duration.m_Value != 2.0 )
  {
    (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(&this->m_AbilityUseTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_AbilityUseTimer.m_duration.m_Value = 2.0;
  }
}


// CDOTA_BotMode_DefendAlly_Human::OnAbilityExecuted  (line 312, @0x00000000027e22c0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Invalidate, IsValid, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<float>
// calls: CountdownTimer::Now
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_DefendAlly_Human::OnAbilityExecuted(
        CDOTA_BotMode_DefendAlly_Human *const this,
        CDOTABaseAbility *pAbility,
        CBaseEntity *pTarget)
{
  uint32 m_Index; // ecx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CountdownTimer *p_m_AbilityUseTimer; // r12
  CEntityIdentity *m_pEntity; // rax
  int v10; // edx
  __int16 v11; // cx
  float v12; // xmm0_4
  float v13; // [rsp+Ch] [rbp-24h]

  if ( pTarget != 0 && pTarget->m_bIsDOTANPC && (pTarget[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
  {
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 > 1
      && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
      && (v7 = &v6[this->m_hTarget.m_Index & 0x1FF]) != 0
      && m_Index == v7->m_EHandle.m_Index
      && pTarget == v7->m_pInstance )
    {
      p_m_AbilityUseTimer = &this->m_AbilityUseTimer;
    }
    else
    {
      p_m_AbilityUseTimer = &this->m_AbilityUseTimer;
      if ( this->m_AbilityUseTimer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(&this->m_AbilityUseTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_AbilityUseTimer.m_timestamp.m_Value = -1.0;
      }
      if ( this->m_AttackTimer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_AttackTimer._vptr_CountdownTimer + 2))(&this->m_AttackTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_AttackTimer.m_timestamp.m_Value = -1.0;
      }
      this->m_iAttackCount = 0;
    }
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v11 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v10 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
    v12 = CountdownTimer::Now(p_m_AbilityUseTimer) + 2.0;
    if ( v12 != this->m_AbilityUseTimer.m_timestamp.m_Value )
    {
      v13 = v12;
      (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(p_m_AbilityUseTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_AbilityUseTimer.m_timestamp.m_Value = v13;
    }
    if ( this->m_AbilityUseTimer.m_duration.m_Value != 2.0 )
    {
      (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(p_m_AbilityUseTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_AbilityUseTimer.m_duration.m_Value = 2.0;
    }
  }
}


// CDOTA_BotMode_DefendAlly_Human::OnAttacked  (line 331, @0x00000000027e2670, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Invalidate, IsValid, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<float>
// calls: CountdownTimer::Now
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_DefendAlly_Human::OnAttacked(
        CDOTA_BotMode_DefendAlly_Human *const this,
        const CDOTA_AttackRecord *pRecord)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 v8; // esi
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CountdownTimer *p_m_AttackTimer; // r12
  CEntityIdentity *m_pEntity; // rax
  int v13; // edx
  __int16 v14; // cx
  float v15; // xmm0_4
  float v16; // [rsp-2Ch] [rbp-2Ch]

  m_Index = pRecord->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(pRecord->m_hTarget.m_Index);
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v6 = &v4[m_Index_low & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v8 = this->m_hTarget.m_Index;
          if ( v8 + 2 > 1
            && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
            && (v10 = &v9[this->m_hTarget.m_Index & 0x1FF]) != 0
            && v8 == v10->m_EHandle.m_Index
            && m_pInstance == v10->m_pInstance )
          {
            ++this->m_iAttackCount;
            p_m_AttackTimer = &this->m_AttackTimer;
          }
          else
          {
            if ( this->m_AbilityUseTimer.m_timestamp.m_Value != -1.0 )
            {
              (*(this->m_AbilityUseTimer._vptr_CountdownTimer + 2))(
                &this->m_AbilityUseTimer,
                12,
                0xFFFFFFFFLL,
                0xFFFFFFFFLL);
              this->m_AbilityUseTimer.m_timestamp.m_Value = -1.0;
            }
            p_m_AttackTimer = &this->m_AttackTimer;
            if ( this->m_AttackTimer.m_timestamp.m_Value != -1.0 )
            {
              (*(this->m_AttackTimer._vptr_CountdownTimer + 2))(&this->m_AttackTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_AttackTimer.m_timestamp.m_Value = -1.0;
            }
            this->m_iAttackCount = 0;
          }
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v14 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hTarget.m_Index) = v14 | this->m_hTarget.m_Index & 0x8000;
            this->m_hTarget.m_Index = (v13 << 15) | this->m_hTarget.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hTarget.m_Index = -1;
          }
          v15 = CountdownTimer::Now(p_m_AttackTimer) + 2.0;
          if ( v15 != this->m_AttackTimer.m_timestamp.m_Value )
          {
            v16 = v15;
            (*(this->m_AttackTimer._vptr_CountdownTimer + 2))(p_m_AttackTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_AttackTimer.m_timestamp.m_Value = v16;
          }
          if ( this->m_AttackTimer.m_duration.m_Value != 2.0 )
          {
            (*(this->m_AttackTimer._vptr_CountdownTimer + 2))(p_m_AttackTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_AttackTimer.m_duration.m_Value = 2.0;
          }
        }
      }
    }
  }
}


// CDOTA_BotMode_DefendAlly_Human::GetDesire  (line 354, @0x00000000027e20e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsElapsed, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CountdownTimer::Now
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_DefendAlly_Human::GetDesire(CDOTA_BotMode_DefendAlly_Human *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rsi
  uint32 v6; // eax
  __int16 v7; // di
  CEntityIdentity *v8; // rdx
  float result; // xmm0_4
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // r12

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    m_pInstance = 0;
  }
  v6 = this->m_hAlly.m_Index;
  if ( v6 + 2 <= 1 )
    return 0.0;
  v7 = this->m_hAlly.m_Index;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAlly.m_Index) >> 9) & 0x3F];
  if ( v8 == 0 )
    return 0.0;
  result = 0.0;
  v10 = &v8[v7 & 0x1FF];
  if ( v10 != 0 && v6 == v10->m_EHandle.m_Index )
  {
    v11 = v10->m_pInstance;
    if ( v10->m_pInstance != 0
      && BYTE3(v11[7]._vptr_IHandleEntity) != 0
      && (v11[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && m_pInstance != 0 )
    {
      if ( (*(**(*&m_pInstance[45].m_worldGroupId.m_nHashCode + 34056LL) + 16LL))(*(*&m_pInstance[45].m_worldGroupId.m_nHashCode
                                                                                  + 34056LL)) == 2
        && (*(**(*&v11[45].m_worldGroupId.m_nHashCode + 34056LL) + 16LL))(
             *(*&v11[45].m_worldGroupId.m_nHashCode + 34056LL),
             0.0,
             0.0) == 4
        && (this->m_AbilityUseTimer.m_timestamp.m_Value > 0.0
         && CountdownTimer::Now(&this->m_AbilityUseTimer) < this->m_AbilityUseTimer.m_timestamp.m_Value
         || this->m_AttackTimer.m_timestamp.m_Value > 0.0
         && CountdownTimer::Now(&this->m_AttackTimer) < this->m_AttackTimer.m_timestamp.m_Value
         && this->m_iAttackCount > 1) )
      {
        return 0.75;
      }
      else
      {
        return 0.0;
      }
    }
  }
  return result;
}


// CDOTA_BotMode_DefendAlly_Human::GetDebugString  (line 382, @0x00000000027f9ab0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: V_sprintf_safe<128ul>
// strings: "Inferred Ally Defense - %s from %s"
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotMode_DefendAlly_Human::GetDebugString(CDOTA_BotMode_DefendAlly_Human *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rdx
  uint32 v5; // eax
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CEntityInstance *v8; // rax
  const char *m_pAsString; // rcx
  const char *v10; // rdx
  char *m_DebugStringBuffer; // rbx

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v3 = &v2[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v3->m_EHandle.m_Index
    || (m_pInstance = v3->m_pInstance) == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v5 = this->m_hAlly.m_Index;
  if ( v5 + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAlly.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hAlly.m_Index & 0x1FF]) == 0
    || v5 != v7->m_EHandle.m_Index
    || (v8 = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(v8[7]._vptr_IHandleEntity) == 0 )
  {
    v8 = 0;
  }
  m_pAsString = "NULL";
  if ( m_pInstance == 0 || (m_pAsString = "", m_pInstance[70].m_iszPrivateVScripts.u.m_Id == 0) )
  {
    if ( v8 != 0 )
      goto LABEL_14;
LABEL_18:
    v10 = "NULL";
    goto LABEL_16;
  }
  m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v8 == 0 )
    goto LABEL_18;
LABEL_14:
  v10 = "";
  if ( v8[70].m_iszPrivateVScripts.u.m_Id != 0 )
    v10 = v8[70].m_iszPrivateVScripts.u.m_pAsString;
LABEL_16:
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(this->m_DebugStringBuffer, "Inferred Ally Defense - %s from %s", v10, m_pAsString);
  return m_DebugStringBuffer;
}


