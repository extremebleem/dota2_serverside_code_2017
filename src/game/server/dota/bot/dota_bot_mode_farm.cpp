
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Farm::CDOTA_BotMode_Farm  (line 23, @0x0000000002825aa0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[], ~CDOTA_BotMode, ~CUtlVector
// calls: CDOTA_BotMode::CDOTA_BotMode, CGameEntitySystem::FindEntityByClassname, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Bot::CreateMode, CDOTA_Bot_Hero_PhantomAssassin::CreateMode
// strings: "npc_dota_neutral_spawner"
void __fastcall CDOTA_BotMode_Farm::CDOTA_BotMode_Farm(CDOTA_BotMode_Farm *const this, CDOTA_Bot *pBot)
{
  CBaseEntity *v2; // r12
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r14
  CHandle<CBaseEntity> *v5; // rax
  CBaseEntity *EntityByClassname; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  __int64 m_Size; // r15
  int v10; // eax
  int v11; // [rsp+0h] [rbp-40h]

  v2 = 0;
  p_m_Memory = &this->m_pSpawners.m_Memory;
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->m_pSpawners.m_Size = 0;
  this->_vptr_CDOTA_BotMode = off_42B8070;
  this->m_pSpawners.m_Memory.m_pMemory = 0;
  this->m_pSpawners.m_Memory.m_nAllocationCount = 0;
  this->m_pSpawners.m_Memory.m_nGrowSize = 0;
  this->m_hPotentialTarget.m_Index = -1;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v2, "npc_dota_neutral_spawner");
    v2 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    m_pEntity = EntityByClassname->m_pEntity;
    v11 = -1;
    if ( m_pEntity != 0 )
    {
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v11 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
    }
    m_Size = this->m_pSpawners.m_Size;
    v10 = this->m_pSpawners.m_Size;
    if ( m_Size == this->m_pSpawners.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(p_m_Memory, 1);
      v10 = this->m_pSpawners.m_Size;
    }
    this->m_pSpawners.m_Size = v10 + 1;
    v5 = &this->m_pSpawners.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      v5->m_Index = v11;
  }
  this->m_PotentialTargetLane = DOTA_LANE::DOTA_LANE_NONE;
  this->m_fLaneScores[3] = 0.0;
  this->m_fLaneScores[2] = 0.0;
  this->m_fLaneScores[1] = 0.0;
}


// CDOTA_BotMode_Farm::OnStart  (line 37, @0x00000000028167f0, libserver.so)  // inlines: CEntityHandle, CHandle, SetTarget, SetTargetLane, operator=
// calls: CDOTA_BotMode::DoScriptOnStart
void __fastcall CDOTA_BotMode_Farm::OnStart(CDOTA_BotMode_Farm *const this)
{
  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    this->m_pBot->m_TargetLane = this->m_PotentialTargetLane;
    this->m_pBot->m_hTarget.m_Index = this->m_hPotentialTarget.m_Index;
    this->m_fLaneScores[3] = 0.0;
    this->m_fLaneScores[2] = 0.0;
    this->m_fLaneScores[1] = 0.0;
  }
}


// CDOTA_BotMode_Farm::OnEnd  (line 50, @0x0000000002816850, libserver.so)  // inlines: SetTarget, SetTargetLane, operator=
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_Farm::OnEnd(CDOTA_BotMode_Farm *const this)
{
  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
  {
    this->m_pBot->m_TargetLane = DOTA_LANE::DOTA_LANE_NONE;
    this->m_pBot->m_hTarget.m_Index = -1;
  }
}


// CDOTA_BotMode_Farm::Think  (line 61, @0x000000000281e800, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, Element, EnterScope, FastSqrt, Get, GetElapsed, GetInstance, GetTimebaseRegister, InTargetThread, IsEnabled, Length2D, NetworkStateChanged, NumCreepsWillingToTank, PLAT_CPU_TIME, Set, SetBotDebugData, SetTarget, SetTargetLane, Sort, ToDOTABaseNPC, V_swap<CHandle<CBaseEntity> >, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator=<int>, operator[], ~CMicroProfilerGuard, ~CUtlVector, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot::FindNearbyCreeps, V_qsort, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::SetAttackAction, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, ThreadGetCurrentId (23 total)
// strings: "CDOTA_BotMode_Farm::Think"
void __fastcall CDOTA_BotMode_Farm::Think(CDOTA_BotMode_Farm *const this)
{
  int m_enabled; // r8d
  int v3; // r14d
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_Bot *m_pBot; // r13
  DOTA_LANE m_TargetLane; // eax
  CDOTA_BaseNPC *v8; // rax
  int OpposingTeamNumber; // eax
  CHandle<CBaseEntity> *m_pMemory; // rdi
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rsi
  ThreadId_t m_TargetThreadId; // r14
  unsigned __int64 v14; // r13
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v17; // rax
  int v18; // xmm1_4
  int v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *v22; // r13
  void (__fastcall *v23)(CDOTA_Bot *, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *); // r14
  int v24; // xmm1_4
  int m_nAttackingCreeps; // r14d
  float TankRating; // xmm0_4
  float v27; // xmm1_4
  int v28; // eax
  DOTA_LANE v29; // r14d
  CDOTA_BaseNPC *v30; // rax
  int v31; // r13d
  CDOTA_TeamCommander *TeamCommander; // rax
  int (**vptr_CDOTA_BotMode)(...); // rax
  double v34; // xmm0_8
  CDOTA_Bot *v35; // rdi
  int v36; // xmm1_4
  double v37; // xmm0_8
  CDOTA_Bot *v38; // rdi
  int v39; // xmm1_4
  double v40; // xmm0_8
  CDOTA_Bot *v41; // rdi
  int v42; // xmm1_4
  __int64 v43; // r13
  int v44; // r14d
  __int64 v45; // r15
  _DWORD *v46; // rax
  int *v47; // r13
  int v48; // edx
  int v49; // [rsp+8h] [rbp-68h]
  bool VProf_63; // [rsp+Fh] [rbp-61h]
  Vector vEnemyCreepFrontLoc; // [rsp+10h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hCreeps; // [rsp+20h] [rbp-50h] BYREF
  Vector LaneFrontLocation; // 0:kr00_12.12

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_63 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v14 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Farm::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CDOTA_BotMode_Farm::Think", 0, "Bots", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v17 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v17->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v14 + __rdtsc();
  }
  if ( !CDOTA_BotMode::DoScriptThink(this)
    && !CDOTA_Bot::IsUsingAbility(this->m_pBot)
    && !CDOTA_Bot::IsUsingItem(this->m_pBot) )
  {
    this->m_pBot->m_hTarget.m_Index = this->m_hPotentialTarget.m_Index;
    this->m_pBot->m_TargetLane = this->m_PotentialTargetLane;
    v3 = (32 * this->m_PotentialTargetLane) | (*(this->_vptr_CDOTA_BotMode + 2))(this);
    Unit = CDOTA_BotMode::GetUnit(this);
    v5 = Unit;
    if ( v3 != Unit->m_iBotDebugData.m_Value )
    {
      (*(Unit->_vptr_IHandleEntity + 22))(Unit, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v5->m_iBotDebugData.m_Value = v3;
    }
    m_pBot = this->m_pBot;
    m_TargetLane = m_pBot->m_TargetLane;
    if ( m_TargetLane == DOTA_LANE::DOTA_LANE_NONE )
    {
      *&hCreeps.m_Size = (*(this->_vptr_CDOTA_BotMode + 11))(this);
      LODWORD(hCreeps.m_Memory.m_pMemory) = v19;
      v20 = CDOTA_BotMode::GetUnit(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v20);
      if ( fsqrt(
             ((AbsOrigin->x - *&hCreeps.m_Size) * (AbsOrigin->x - *&hCreeps.m_Size))
           + ((AbsOrigin->y - *(&hCreeps.m_Size + 1)) * (AbsOrigin->y - *(&hCreeps.m_Size + 1)))) <= 500.0 )
      {
        v22 = this->m_pBot;
        v23 = *(v22->_vptr_CDOTA_Bot + 9);
        *&hCreeps.m_Size = (*(this->_vptr_CDOTA_BotMode + 11))(this);
        LODWORD(hCreeps.m_Memory.m_pMemory) = v24;
        v23(v22, &hCreeps);
        goto LABEL_3;
      }
      goto LABEL_27;
    }
    if ( m_TargetLane != m_pBot->m_CurrentLane )
    {
      if ( m_pBot->m_nAttackingCreeps > 0 )
      {
        hCreeps.m_Size = 0;
        hCreeps.m_Memory.m_pMemory = 0;
        hCreeps.m_Memory.m_nAllocationCount = 0;
        hCreeps.m_Memory.m_nGrowSize = 0;
        v8 = CDOTA_BotMode::GetUnit(this);
        OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v8);
        CDOTA_Bot::FindNearbyCreeps(this->m_pBot, 500.0, OpposingTeamNumber, 1, &hCreeps);
        if ( hCreeps.m_Size > 0 )
        {
          m_pMemory = hCreeps.m_Memory.m_pMemory;
          if ( hCreeps.m_Size != 1 )
          {
            if ( hCreeps.m_Memory.m_pMemory != 0 )
            {
              V_qsort(hCreeps.m_Memory.m_pMemory, hCreeps.m_Size, 4, UnitHealthSort);
              m_pMemory = hCreeps.m_Memory.m_pMemory;
            }
            else
            {
              v49 = hCreeps.m_Size - 1;
              do
              {
                if ( v49 > 0 )
                {
                  v43 = 0;
                  v44 = 1;
                  while ( 1 )
                  {
                    v45 = v43 + 4;
                    if ( UnitHealthSort((m_pMemory + v43), (m_pMemory + v43 + 4)) < 0 )
                    {
                      v46 = (&hCreeps.m_Memory.m_pMemory->m_Index + v45);
                      v47 = (hCreeps.m_Memory.m_pMemory + v43);
                      v48 = *v47;
                      *v47 = *(&hCreeps.m_Memory.m_pMemory->m_Index + v45);
                      *v46 = v48;
                    }
                    ++v44;
                    m_pMemory = hCreeps.m_Memory.m_pMemory;
                    if ( v49 < v44 )
                      break;
                    v43 = v45;
                  }
                }
                --v49;
              }
              while ( v49 != -1 );
            }
          }
          v11 = CEntityHandle::operator CEntityInstance *(m_pMemory);
          if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
            v12 = v11;
          else
            v12 = 0;
          CDOTA_Bot::SetAttackAction(this->m_pBot, v12, 0);
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreeps);
          goto LABEL_3;
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreeps);
      }
LABEL_27:
      *&hCreeps.m_Size = (*(this->_vptr_CDOTA_BotMode + 11))(this);
      LODWORD(hCreeps.m_Memory.m_pMemory) = v18;
      CDOTA_Bot::SetMoveAction(this->m_pBot, &hCreeps, 0, 0);
      goto LABEL_3;
    }
    if ( m_pBot->m_nAttackingTowers > 0 )
    {
      if ( CDOTA_Bot::GetTankRating(this->m_pBot) < 0.69999999 )
        goto LABEL_37;
      m_pBot = this->m_pBot;
    }
    m_nAttackingCreeps = m_pBot->m_nAttackingCreeps;
    TankRating = CDOTA_Bot::GetTankRating(m_pBot);
    LOBYTE(v28) = CDOTA_Bot::NumCreepsWillingToTank(m_pBot, TankRating, v27);
    if ( m_nAttackingCreeps <= v28 )
    {
      v29 = this->m_pBot->m_TargetLane;
      v30 = CDOTA_BotMode::GetUnit(this);
      v31 = CDOTA_BaseNPC::GetOpposingTeamNumber(v30);
      TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
      LaneFrontLocation = CDOTA_TeamCommander::GetLaneFrontLocation(TeamCommander, v31, v29, 0.0, 0.0);
      vptr_CDOTA_BotMode = this->_vptr_CDOTA_BotMode;
      vEnemyCreepFrontLoc = LaneFrontLocation;
      v34 = (vptr_CDOTA_BotMode[11])(this);
      v35 = this->m_pBot;
      *&hCreeps.m_Size = v34;
      LODWORD(hCreeps.m_Memory.m_pMemory) = v36;
      if ( CDOTA_Bot::DoCreepAttackAndDeny(v35, &vEnemyCreepFrontLoc, 800.0, &hCreeps, 600.0, 600.0) == 0 )
      {
        v37 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
        v38 = this->m_pBot;
        *&hCreeps.m_Size = v37;
        LODWORD(hCreeps.m_Memory.m_pMemory) = v39;
        CDOTA_Bot::SetMoveAction(v38, &hCreeps, 0, 1);
      }
      goto LABEL_3;
    }
LABEL_37:
    v40 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    v41 = this->m_pBot;
    *&hCreeps.m_Size = v40;
    LODWORD(hCreeps.m_Memory.m_pMemory) = v42;
    CDOTA_Bot::SetMoveAction(v41, &hCreeps, 0, 1);
  }
LABEL_3:
  if ( VProf_63 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_Farm::CalculateDesiredLocation  (line 130, @0x0000000002818cc0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetAttackRange, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetTarget, GetTeamNumber, IndexToIdentity, IsListeningToEvent, LookupEntity, NumCreepsWillingToTank, operator CEntityInstance*, operator!=<CBaseEntity>, operator=
// calls: CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::GetLaneFrontLocation, CDOTA_Bot::GetTankRating, CDOTA_Bot::NumCreepsWillingToTank, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot::GetAvoidanceAmountForLocation, CDOTA_TeamCommander::CalculateLocationAlongLane, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Farm::CalculateDesiredLocation(CDOTA_BotMode_Farm *const this)
{
  CDOTA_Bot *m_pBot; // r12
  DOTA_LANE m_TargetLane; // r13d
  int m_Value; // r12d
  CDOTA_TeamCommander *TeamCommander; // rax
  CConcreteEntityList *v8; // rsi
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rdx
  vec_t v12; // xmm1_4
  int m_nAttackingCreeps; // r13d
  float TankRating; // xmm0_4
  float v15; // xmm1_4
  int v16; // eax
  int v17; // r12d
  vec_t z; // eax
  __int64 v19; // rax
  float v20; // xmm0_4
  float v21; // xmm1_4
  __int64 v22; // rax
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  DOTA_LANE v26; // r15d
  CDOTA_BaseNPC *v27; // rax
  int OpposingTeamNumber; // r13d
  CDOTA_TeamCommander *v29; // rax
  CDOTA_Bot *v30; // rdi
  CDOTA_BaseNPC *Unit; // rax
  float Modifier_Constant_Highest_Internal; // xmm1_4
  CDOTA_ModifierManager *p_m_ModifierManager; // r13
  CDOTA_BaseNPC *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_iAttackRange; // xmm2_4
  __int64 v39; // rax
  float v40; // xmm2_4
  float v41; // xmm0_4
  __int64 v42; // rax
  CDOTA_Bot *v43; // r12
  DOTA_LANE m_CurrentLane; // r13d
  CDOTA_TeamCommander *v45; // rax
  const Vector *AbsOrigin; // rax
  __int64 v47; // rdx
  float v48; // [rsp+8h] [rbp-68h]
  float v49; // [rsp+8h] [rbp-68h]
  float fDelta; // [rsp+Ch] [rbp-64h]
  float fDeltaa; // [rsp+Ch] [rbp-64h]
  float fDeltab; // [rsp+Ch] [rbp-64h]
  float fDeltac; // [rsp+Ch] [rbp-64h]
  float fDeltad; // [rsp+Ch] [rbp-64h]
  float fDeltae; // [rsp+Ch] [rbp-64h]
  Vector vDesiredLocation; // [rsp+20h] [rbp-50h] BYREF
  Vector LaneFrontLocation; // [rsp+30h] [rbp-40h]
  Vector v58; // 0:kr14_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_pBot = this->m_pBot;
  m_TargetLane = m_pBot->m_TargetLane;
  if ( m_TargetLane == DOTA_LANE::DOTA_LANE_NONE )
  {
    v8 = CEntityHandle::gm_pEntityList;
    LODWORD(vDesiredLocation.x) = m_pBot->m_hTarget.m_Index;
    if ( (LODWORD(vDesiredLocation.x) + 2) > 1
      && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vDesiredLocation.x) >> 9) & 0x3F]) != 0
      && (v10 = LOWORD(vDesiredLocation.x) & 0x1FF, v8 = (8 * v10), (v11 = &v9[v10]) != 0)
      && LODWORD(vDesiredLocation.x) == v11->m_EHandle.m_Index
      && v11->m_pInstance != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v11->m_pInstance);
      v47 = *&AbsOrigin->x;
      *&AbsOrigin = AbsOrigin->z;
      *&LaneFrontLocation.x = v47;
      LODWORD(LaneFrontLocation.z) = AbsOrigin;
    }
    else
    {
      *&LaneFrontLocation.x = (*(this->_vptr_CDOTA_BotMode + 11))(this, v8);
      LaneFrontLocation.z = v12;
    }
    goto LABEL_4;
  }
  if ( m_TargetLane != m_pBot->m_CurrentLane )
  {
    m_Value = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
    TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
    LaneFrontLocation = CDOTA_TeamCommander::GetLaneFrontLocation(TeamCommander, m_Value, m_TargetLane, -400.0, 0.0);
    goto LABEL_4;
  }
  if ( m_pBot->m_nAttackingTowers > 0 )
  {
    if ( CDOTA_Bot::GetTankRating(this->m_pBot) < 0.69999999 )
    {
LABEL_38:
      v43 = this->m_pBot;
      m_CurrentLane = v43->m_CurrentLane;
      fDeltae = v43->m_fCurrentLaneAmount;
      v45 = CDOTA_BotMode::GetTeamCommander(this);
      LaneFrontLocation = CDOTA_TeamCommander::CalculateLocationAlongLane(
                            v45,
                            m_CurrentLane,
                            fDeltae,
                            -500.0,
                            150.0,
                            v43);
      goto LABEL_4;
    }
    m_pBot = this->m_pBot;
  }
  m_nAttackingCreeps = m_pBot->m_nAttackingCreeps;
  TankRating = CDOTA_Bot::GetTankRating(m_pBot);
  LOBYTE(v16) = CDOTA_Bot::NumCreepsWillingToTank(m_pBot, TankRating, v15);
  if ( m_nAttackingCreeps > v16 )
    goto LABEL_38;
  v17 = 0;
  z = vec3_origin.z;
  *&vDesiredLocation.x = *&vec3_origin.x;
  vDesiredLocation.z = z;
  do
  {
    Unit = CDOTA_BotMode::GetUnit(this);
    Modifier_Constant_Highest_Internal = 0.0;
    p_m_ModifierManager = &Unit->m_ModifierManager;
    v34 = Unit;
    v35 = Unit->m_ModifierManager.m_buffsForModifiers[71];
    if ( v35 != 0xFF && v34->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v35].m_Size > 0 )
      Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                             p_m_ModifierManager,
                                             modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                             &CModifierParams::s_Default);
    v36 = v34->m_ModifierManager.m_buffsForModifiers[69];
    Modifier_Constant_Additive_Internal = 0.0;
    m_iAttackRange = v34->m_iAttackRange;
    if ( v36 != 0xFF && v34->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v36].m_Size > 0 )
    {
      v48 = Modifier_Constant_Highest_Internal;
      fDeltac = v34->m_iAttackRange;
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              p_m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                              &CModifierParams::s_Default);
      Modifier_Constant_Highest_Internal = v48;
      m_iAttackRange = fDeltac;
    }
    v39 = v34->m_ModifierManager.m_buffsForModifiers[70];
    v40 = m_iAttackRange + Modifier_Constant_Additive_Internal;
    v41 = 0.0;
    if ( v39 != 0xFF && v34->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v39].m_Size > 0 )
    {
      v49 = Modifier_Constant_Highest_Internal;
      fDeltad = v40;
      v41 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      Modifier_Constant_Highest_Internal = v49;
      v40 = fDeltad;
    }
    if ( Modifier_Constant_Highest_Internal <= (v41 + v40) )
    {
      v19 = v34->m_ModifierManager.m_buffsForModifiers[69];
      v20 = 0.0;
      v21 = v34->m_iAttackRange;
      if ( v19 != 0xFF && v34->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v19].m_Size > 0 )
      {
        fDelta = v34->m_iAttackRange;
        v20 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                p_m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                &CModifierParams::s_Default);
        v21 = fDelta;
      }
      v22 = v34->m_ModifierManager.m_buffsForModifiers[70];
      v23 = v21 + v20;
      v24 = 0.0;
      if ( v22 != 0xFF && v34->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v22].m_Size > 0 )
      {
        fDeltaa = v23;
        v24 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                p_m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                &CModifierParams::s_Default);
        v23 = fDeltaa;
      }
      v25 = -(v24 + v23);
    }
    else
    {
      v42 = v34->m_ModifierManager.m_buffsForModifiers[71];
      v25 = -0.0;
      if ( v42 != 0xFF && v34->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v42].m_Size > 0 )
        v25 = -CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                 p_m_ModifierManager,
                 modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                 &CModifierParams::s_Default);
    }
    v26 = this->m_pBot->m_TargetLane;
    fDeltab = v25 - v17;
    v27 = CDOTA_BotMode::GetUnit(this);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v27);
    v29 = CDOTA_BotMode::GetTeamCommander(this);
    v58 = CDOTA_TeamCommander::GetLaneFrontLocation(v29, OpposingTeamNumber, v26, fDeltab, 0.0);
    v30 = this->m_pBot;
    LaneFrontLocation = v58;
    vDesiredLocation = v58;
    if ( CDOTA_Bot::GetAvoidanceAmountForLocation(v30, &vDesiredLocation, 0) <= 9 )
      break;
    v17 += 10;
  }
  while ( v17 != 100 );
  LaneFrontLocation = vDesiredLocation;
LABEL_4:
  *&result.x = *&LaneFrontLocation.x;
  result.z = LaneFrontLocation.z;
  return result;
}


// NeutralSpawnerProximitySort  (line 174, @0x000000000281c4a0, libserver.so)
int __fastcall NeutralSpawnerProximitySort(const EHANDLE *p1, const EHANDLE *p2)
{
  return 0;
}


// CDOTA_BotMode_Farm::GetDesire  (line 192, @0x000000000281cce0, libserver.so)  // inlines: CEntityHandle, CHandle, CVProfScope, Element, FastSqrt, Get, GetAction, GetActiveModeDesire, GetBotByIndex, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFarmLaneDesire, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsEnabled, IsKnownToBeClearedByTeam, IsValid, Length2D, Length2DSqr, LookupEntity, RemapValClamped, Set, ToDOTABaseNPC, Top, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator-, operator=, operator[], ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, CVProfile::EnterScope, CDOTA_BotMode::GetUnit, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_BotMode_Farm::GetFarmDesire, CDOTA_BotMode::GetTeamCommander, CDOTA_Bot::GetAssignedLane, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_TeamCommander::GetLaneFrontLocation, CBaseEntity::GetAbsOrigin (20 total)
// callers: CDOTA_BotMode_Farm_PhantomAssassin::GetDesire
// strings: "CDOTA_BotMode_Farm::GetDesire", "modifier_persistent_invisibility"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Farm::GetDesire(CDOTA_BotMode_Farm *const this)
{
  bool v2; // r15
  float result; // xmm0_4
  CDOTA_BaseNPC *Unit; // rax
  __int64 v5; // rbx
  int v6; // r14d
  CDOTA_TeamCommander *v7; // rax
  CDOTA_Bot *v8; // rdi
  DOTA_LANE AssignedLane; // r12d
  CDOTA_BaseNPC *v10; // rax
  DOTA_LANE v11; // r14d
  CDOTA_BaseNPC *v12; // rax
  int OpposingTeamNumber; // ebx
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // rax
  float v17; // xmm5_4
  float v18; // ebx
  __m128i v19; // xmm0
  float v20; // xmm0_4
  __int64 i; // rbx
  CDOTA_TeamCommander *v22; // rax
  CDOTA_Bot *v23; // r12
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // rax
  int v26; // eax
  __int64 v27; // r12
  CDOTA_TeamCommander *v28; // rax
  CDOTA_Bot *v29; // rbx
  int m_Size; // eax
  CDOTA_BotAction *v31; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v33; // rdx
  CEntityIdentity *v34; // rdx
  const Vector *v35; // r14
  CEntityInstance *v36; // rax
  const CBaseEntity *v37; // rdi
  const Vector *v38; // rax
  const Vector *v39; // rbx
  CDOTA_TeamCommander *v40; // rax
  float v41; // xmm1_4
  __m128i v42; // xmm0
  CDOTA_TeamCommander *v43; // rax
  const Vector *v44; // rax
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  const Vector *v46; // rax
  __m128 v47; // xmm0
  __m128i v48; // xmm1
  float v49; // r12d
  __m128 v50; // xmm4
  CDOTA_BaseNPC *v51; // rax
  const Vector *v52; // rbx
  const Vector *v53; // rax
  float v54; // xmm1_4
  float v55; // xmm2_4
  float v56; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  __int16 v58; // cx
  uint32 v59; // eax
  __m128i v60; // xmm2
  DOTA_LANE iBestLane; // [rsp+8h] [rbp-98h]
  float fSideFactor; // [rsp+10h] [rbp-90h]
  float fSideFactora; // [rsp+10h] [rbp-90h]
  float fDesire; // [rsp+14h] [rbp-8Ch]
  float fBestDesire; // [rsp+18h] [rbp-88h]
  DOTA_NEUTRAL_TYPE iNeutralFarmingLevel; // [rsp+1Ch] [rbp-84h]
  float pSpawner; // [rsp+20h] [rbp-80h]
  const CBaseEntity *pSpawnera; // [rsp+20h] [rbp-80h]
  __int64 nSpawnerIter; // [rsp+30h] [rbp-70h]
  float v70; // [rsp+38h] [rbp-68h]
  CDOTA_BotMode_Farm *v71; // [rsp+38h] [rbp-68h]
  EHANDLE hBestSpawner; // [rsp+40h] [rbp-60h] BYREF
  Vector BaseLocation; // [rsp+50h] [rbp-50h]
  Vector vLaneFrontLocation; // [rsp+60h] [rbp-40h]

  v2 = g_VProfCurrentProfile.m_enabled != 0;
  if ( g_VProfCurrentProfile.m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_Farm::GetDesire", 0, "Bots", 0, 4);
  result = CDOTA_BotMode::GetScriptDesire(this);
  if ( result < 0.0 )
  {
    Unit = CDOTA_BotMode::GetUnit(this);
    if ( CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, Unit) <= 0
      && this->m_pBot->m_nAttackingHeroes <= 0 )
    {
      if ( SLOBYTE(CDOTA_BotMode::GetUnit(this)->m_nUnitState64.m_Value) >= 0
        || (v10 = CDOTA_BotMode::GetUnit(this),
            CDOTA_BaseNPC::FindModifierByName(v10, "modifier_persistent_invisibility", 0) != 0) )
      {
        fDesire = CDOTA_BotMode_Farm::GetFarmDesire(this);
        hBestSpawner.m_Index = -1;
        if ( CDOTA_BotMode::GetTeamCommander(this)->m_bLateGame )
        {
          v71 = this;
          v11 = DOTA_LANE::DOTA_LANE_TOP;
          fBestDesire = 0.0;
          iBestLane = DOTA_LANE::DOTA_LANE_NONE;
          do
          {
            v12 = CDOTA_BotMode::GetUnit(this);
            OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v12);
            TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
            vLaneFrontLocation = CDOTA_TeamCommander::GetLaneFrontLocation(
                                   TeamCommander,
                                   OpposingTeamNumber,
                                   v11,
                                   0.0,
                                   0.0);
            v15 = CDOTA_BotMode::GetUnit(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
            pSpawner = fsqrt(
                         ((vLaneFrontLocation.x - AbsOrigin->x) * (vLaneFrontLocation.x - AbsOrigin->x))
                       + ((vLaneFrontLocation.y - AbsOrigin->y) * (vLaneFrontLocation.y - AbsOrigin->y)));
            v18 = 1.0;
            if ( (*(this->m_pBot->_vptr_CDOTA_Bot + 13))(this->m_pBot, 1) == 0 )
            {
              *v19.m128i_i32 = RemapValClamped(pSpawner, 3000.0, 10000.0, 1.0, 0.25, v17);
              v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
            }
            v20 = (v18 * CDOTA_BotMode::GetTeamCommander(this)->m_fFarmLaneDesire[v11]) * fDesire;
            v71->m_fLaneScores[1] = v20;
            if ( v20 > fBestDesire )
            {
              for ( i = 0; i < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size; ++i )
              {
                v22 = CDOTA_BotMode::GetTeamCommander(this);
                if ( i < v22->m_BotList.m_Size )
                {
                  v23 = v22->m_BotList.m_Memory.m_pMemory[i];
                  if ( v23 != 0
                    && this->m_pBot != v23
                    && (*(v23->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v23->m_pActiveBotMode) == 17
                    && v23->m_TargetLane == v11
                    && v23->m_fModeDesires[(*(v23->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v23->m_pActiveBotMode)] >= fDesire )
                  {
                    goto LABEL_33;
                  }
                }
              }
              iBestLane = v11;
              fBestDesire = v71->m_fLaneScores[1];
            }
LABEL_33:
            v71 = (v71 + 4);
            ++v11;
          }
          while ( v11 != DOTA_LANE::DOTA_LANE_MAX );
        }
        else
        {
          v5 = 0;
          v6 = 0;
          while ( v5 < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size )
          {
            v7 = CDOTA_BotMode::GetTeamCommander(this);
            if ( v5 < v7->m_BotList.m_Size )
            {
              v8 = v7->m_BotList.m_Memory.m_pMemory[v5];
              if ( v8 != 0 )
              {
                AssignedLane = CDOTA_Bot::GetAssignedLane(v8);
                v6 += AssignedLane == CDOTA_Bot::GetAssignedLane(this->m_pBot);
              }
            }
            ++v5;
          }
          fBestDesire = 0.0;
          iBestLane = DOTA_LANE::DOTA_LANE_NONE;
          if ( v6 == 1 )
          {
            this->m_hPotentialTarget.m_Index = -1;
            result = 0.0;
            this->m_PotentialTargetLane = DOTA_LANE::DOTA_LANE_NONE;
            goto LABEL_4;
          }
        }
        iNeutralFarmingLevel = CDOTA_BotMode_Farm::GetNeutralFarmingLevel(this);
        if ( iNeutralFarmingLevel >= DOTA_NEUTRAL_TYPE::DOTA_NEUTRAL_EASY )
        {
          v24 = CDOTA_BotMode::GetUnit(this);
          v25 = CBaseEntity::GetAbsOrigin(v24);
          SortEHANDLEVectorByLocation(&this->m_pSpawners, v25, 0);
          if ( this->m_pSpawners.m_Size > 0 )
          {
            nSpawnerIter = 0;
            do
            {
              pSpawnera = CEntityHandle::operator CEntityInstance *(&this->m_pSpawners.m_Memory.m_pMemory[nSpawnerIter]);
              if ( iNeutralFarmingLevel >= pSpawnera[1].m_ResponseContexts.m_Size )
              {
                v27 = 0;
                if ( *(&pSpawnera[1].m_aThinkFunctions.m_Memory.m_pMemory
                     + (CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value != 2)) == 0 )
                {
                  while ( v27 < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size )
                  {
                    v28 = CDOTA_BotMode::GetTeamCommander(this);
                    if ( v27 < v28->m_BotList.m_Size )
                    {
                      v29 = v28->m_BotList.m_Memory.m_pMemory[v27];
                      if ( v29 != 0 && this->m_pBot != v29 )
                      {
                        m_Size = v29->m_ActionStack.m_Size;
                        if ( m_Size > 0 )
                        {
                          v31 = v29->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
                          if ( v31 != 0 )
                          {
                            m_Index = v29->m_hUnit.m_Index;
                            if ( m_Index + 2 > 1 )
                            {
                              v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v29->m_hUnit.m_Index) >> 9)
                                                                                   & 0x3F];
                              if ( v33 != 0 )
                              {
                                v34 = &v33[v29->m_hUnit.m_Index & 0x1FF];
                                if ( v34 != 0
                                  && m_Index == v34->m_EHandle.m_Index
                                  && v34->m_pInstance != 0
                                  && BYTE3(v34->m_pInstance[7]._vptr_IHandleEntity) != 0
                                  && ((*(v31->_vptr_CDOTA_BotAction + 2))(v31) == 4 || v29->m_bHuman) )
                                {
                                  v35 = CBaseEntity::GetAbsOrigin(pSpawnera);
                                  v36 = CEntityHandle::operator CEntityInstance *(&v29->m_hUnit);
                                  if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
                                    v37 = v36;
                                  else
                                    v37 = 0;
                                  v38 = CBaseEntity::GetAbsOrigin(v37);
                                  if ( fsqrt(
                                         ((v38->x - v35->x) * (v38->x - v35->x))
                                       + ((v38->y - v35->y) * (v38->y - v35->y))) < 500.0 )
                                    goto LABEL_37;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    ++v27;
                  }
                  v39 = CBaseEntity::GetAbsOrigin(pSpawnera);
                  v40 = CDOTA_BotMode::GetTeamCommander(this);
                  *v42.m128i_i32 = CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(v40, v39, v41);
                  LODWORD(v39) = _mm_cvtsi128_si32(v42);
                  v43 = CDOTA_BotMode::GetTeamCommander(this);
                  BaseLocation = CDOTA_TeamCommander::GetBaseLocation(v43);
                  v44 = CBaseEntity::GetAbsOrigin(pSpawnera);
                  fSideFactor = ((v44->y - BaseLocation.y) * (v44->y - BaseLocation.y))
                              + ((v44->x - BaseLocation.x) * (v44->x - BaseLocation.x));
                  OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
                  vLaneFrontLocation = CDOTA_TeamCommander::GetBaseLocation(OpposingTeamCommander);
                  v46 = CBaseEntity::GetAbsOrigin(pSpawnera);
                  v48 = _mm_cvtsi32_si128(v39);
                  *v48.m128i_i32 = (*v48.m128i_i32 - 500.0) / 1500.0;
                  if ( *v48.m128i_i32 < 0.0 )
                  {
                    v49 = 1.0;
                  }
                  else
                  {
                    v49 = 0.39999998;
                    if ( *v48.m128i_i32 <= 1.0 )
                    {
                      *v48.m128i_i32 = *v48.m128i_i32 * -0.60000002;
                      v60 = v48;
                      *v60.m128i_i32 = *v48.m128i_i32 + 1.0;
                      v49 = COERCE_FLOAT(_mm_cvtsi128_si32(v60));
                    }
                  }
                  v47.m128_f32[0] = ((v46->x - vLaneFrontLocation.x) * (v46->x - vLaneFrontLocation.x))
                                  + ((v46->y - vLaneFrontLocation.y) * (v46->y - vLaneFrontLocation.y));
                  v50 = _mm_cmplt_ss(LODWORD(fSideFactor), v47);
                  LODWORD(fSideFactora) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v50, 0x3F000000u).m128_f32[0])
                                        | v50.m128_i32[0] & 0x3F800000;
                  v51 = CDOTA_BotMode::GetUnit(this);
                  v52 = CBaseEntity::GetAbsOrigin(v51);
                  v53 = CBaseEntity::GetAbsOrigin(pSpawnera);
                  v54 = v53->y - v52->y;
                  v55 = 1.0;
                  v56 = (fsqrt(((v53->x - v52->x) * (v53->x - v52->x)) + (v54 * v54)) - 2000.0) / 10000.0;
                  if ( v56 >= 0.0 )
                  {
                    v55 = 0.0;
                    if ( v56 <= 1.0 )
                      v55 = 1.0 - v56;
                  }
                  if ( (((v49 * fDesire) * fSideFactora) * v55) > fBestDesire )
                  {
                    m_pEntity = pSpawnera->m_pEntity;
                    if ( m_pEntity != 0 )
                    {
                      v58 = 0x7FFF;
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v58 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      fBestDesire = ((v49 * fDesire) * fSideFactora) * v55;
                      iBestLane = DOTA_LANE::DOTA_LANE_NONE;
                      hBestSpawner.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                           | v58 & 0x7FFF;
                    }
                    else
                    {
                      hBestSpawner.m_Index = -1;
                      fBestDesire = ((v49 * fDesire) * fSideFactora) * v55;
                      iBestLane = DOTA_LANE::DOTA_LANE_NONE;
                    }
                  }
                }
              }
LABEL_37:
              v26 = nSpawnerIter++;
            }
            while ( this->m_pSpawners.m_Size > v26 + 1 );
          }
        }
        if ( CEntityHandle::operator CEntityInstance *(&hBestSpawner) != 0 )
        {
          this->m_PotentialTargetLane = DOTA_LANE::DOTA_LANE_NONE;
          v59 = hBestSpawner.m_Index;
          this->m_fLaneScores[0] = fBestDesire;
          result = fBestDesire;
          this->m_hPotentialTarget.m_Index = v59;
          goto LABEL_4;
        }
        this->m_hPotentialTarget.m_Index = -1;
        if ( iBestLane != DOTA_LANE::DOTA_LANE_NONE )
        {
          result = fBestDesire;
          this->m_PotentialTargetLane = iBestLane;
          goto LABEL_4;
        }
        this->m_PotentialTargetLane = DOTA_LANE::DOTA_LANE_NONE;
      }
    }
    result = 0.0;
  }
LABEL_4:
  if ( v2 )
  {
    v70 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v70;
  }
  return result;
}


// CDOTA_BotMode_Farm::GetFarmDesire  (line 339, @0x000000000281c4b0, libserver.so)  // inlines: CEntityHandle, CHandle, Clamp<float>, Get, GetBotByIndex, GetInstance, GetTarget, GetTeamNumber, GetUnit, Max<int>, RemapValClamped, String, ToCStr, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator->, operator==<CBaseEntity>
// calls: CDOTA_BotMode::GetOwningHero, CDOTA_BaseNPC_Hero::GetNextItemToPurchase, CDOTA_Bot::WantsToSaveForBuyback, GetItemCost, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BotMode::GetTeamCommander, CDOTA_Bot::GetAssignedLane, CDOTA_Bot::IsPushingIntoBase, CDOTA_BotMode::GetOpposingTeamCommander, CDOTA_BotMode::GetUnit (15 total)
// callers: CDOTA_BotMode_Farm::GetDesire
float __fastcall CDOTA_BotMode_Farm::GetFarmDesire(CDOTA_BotMode_Farm *const this)
{
  CDOTA_BaseNPC_Hero *OwningHero; // rax
  CDOTA_BaseNPC_Hero *v3; // r12
  sLoadoutItem *NextItemToPurchase; // r13
  int v5; // r14d
  float v6; // xmm0_4
  int m_iUnitType; // edx
  int iFlags; // edx
  const char *m_Id; // rdi
  int v10; // r14d
  int v11; // eax
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  uint32 m_Index; // r13d
  const CBaseEntity *v17; // rax
  int v18; // r13d
  __int64 v19; // r13
  int i; // r12d
  CDOTA_TeamCommander *v21; // rax
  CDOTA_Bot *v22; // rdi
  DOTA_LANE AssignedLane; // r14d
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_Bot *v25; // rdx
  CDOTA_TeamCommander *v26; // rax
  CDOTA_Bot *v27; // rax
  __int64 v28; // r13
  int j; // r12d
  CDOTA_TeamCommander *v30; // rax
  CDOTA_Bot *v31; // rdx
  CDOTA_TeamCommander *v32; // rax
  CDOTA_Bot *v33; // rdx
  CDOTA_TeamCommander *v34; // rax
  CDOTA_Bot *v35; // rax
  __int64 v36; // r12
  int v37; // r14d
  CDOTA_TeamCommander *v38; // rax
  CDOTA_Bot *v39; // r13
  CEntityInstance *v40; // rax
  __int64 k; // r12
  CDOTA_TeamCommander *v42; // rax
  CDOTA_Bot *v43; // r15
  CEntityInstance *v44; // rax
  CEntityInstance *v45; // rax
  CBaseModelEntity *v46; // rdi
  __m128 v47; // xmm1
  float v48; // xmm0_4
  __m128 v49; // xmm0
  float result; // xmm0_4
  int DeathGoldCost; // r14d
  int v52; // r14d
  int v53; // r14d
  float v54; // xmm1_4
  int Health; // eax
  float v56; // xmm1_4
  float v57; // xmm0_4
  float v58; // [rsp+4h] [rbp-5Ch]
  int iTeam; // [rsp+8h] [rbp-58h]
  float fDesire; // [rsp+Ch] [rbp-54h]
  CEntityHandle v61; // [rsp+10h] [rbp-50h] BYREF
  CEntityHandle v62; // [rsp+20h] [rbp-40h] BYREF

  OwningHero = CDOTA_BotMode::GetOwningHero(this);
  v3 = OwningHero;
  if ( OwningHero == 0 )
    return 0.0;
  NextItemToPurchase = CDOTA_BaseNPC_Hero::GetNextItemToPurchase(OwningHero, 0);
  if ( NextItemToPurchase == 0 )
    return 0.0;
  v5 = 0;
  if ( !CDOTA_Bot::WantsToSaveForBuyback(this->m_pBot) )
  {
LABEL_4:
    v6 = 0.40000001;
    m_iUnitType = this->m_pBot->m_iUnitType;
    if ( (m_iUnitType & 0x20) != 0 || (v6 = 0.30000001, (m_iUnitType & 0x10) == 0) )
    {
      iFlags = NextItemToPurchase->iFlags;
      if ( (iFlags & 2) == 0 )
        goto LABEL_7;
    }
    else
    {
      iFlags = NextItemToPurchase->iFlags;
      v6 = 0.5;
      if ( (iFlags & 2) == 0 )
      {
LABEL_7:
        if ( (iFlags & 4) != 0 )
          v6 = v6 + 0.1;
        if ( (iFlags & 8) != 0 )
          v6 = v6 + 0.050000001;
        m_Id = "";
        if ( NextItemToPurchase->name.u.m_Id != 0 )
          m_Id = NextItemToPurchase->name.u.m_Id;
        fDesire = v6;
        v10 = GetItemCost(m_Id) + v5;
        v11 = (*(v3->_vptr_IHandleEntity + 397))(v3);
        if ( v10 - v11 < 0 || v10 == v11 )
        {
          v14 = fDesire + 0.0;
          v15 = -0.5;
        }
        else
        {
          v12 = (v11 - 4000.0) / -3000.0;
          if ( v12 < 0.0 )
          {
            v13 = 0.15000001;
          }
          else
          {
            v13 = 0.0;
            if ( v12 <= 1.0 )
              v13 = (-0.15000001 * v12) + 0.15000001;
          }
          v14 = fDesire + v13;
          v15 = 0.0;
        }
        v58 = v15 + v14;
        m_Index = this->m_pBot->m_hTarget.m_Index;
        v61.m_Index = m_Index;
        if ( CEntityHandle::operator CEntityInstance *(&v61) == 0
          || (v62.m_Index = m_Index,
              v17 = CEntityHandle::operator CEntityInstance *(&v62),
              (v18 = CBaseEntity::GetHealth(v17)) > CDOTA_BaseNPC::GetAverageTrueAttackDamage(v3, 0)) )
        {
          Health = CBaseEntity::GetHealth(v3);
          v56 = 1.0;
          v57 = (Health - 500.0) / -300.0;
          if ( v57 >= 0.0 )
          {
            v56 = 0.60000002;
            if ( v57 <= 1.0 )
              v56 = (-0.39999998 * v57) + 1.0;
          }
          v58 = v56 * v58;
        }
        if ( !CDOTA_BotMode::GetTeamCommander(this)->m_bLateGame )
        {
          v19 = 0;
          for ( i = 0; i < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size; ++i )
          {
            TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
            v25 = 0;
            if ( i < TeamCommander->m_BotList.m_Size )
              v25 = TeamCommander->m_BotList.m_Memory.m_pMemory[v19];
            if ( this->m_pBot != v25 )
            {
              v21 = CDOTA_BotMode::GetTeamCommander(this);
              v22 = 0;
              if ( i < v21->m_BotList.m_Size )
                v22 = v21->m_BotList.m_Memory.m_pMemory[v19];
              AssignedLane = CDOTA_Bot::GetAssignedLane(v22);
              if ( AssignedLane == CDOTA_Bot::GetAssignedLane(this->m_pBot) )
              {
                v26 = CDOTA_BotMode::GetTeamCommander(this);
                v27 = i < v26->m_BotList.m_Size ? v26->m_BotList.m_Memory.m_pMemory[v19] : 0LL;
                if ( (v27->m_iUnitType & 0x30) != 0 )
                {
                  v58 = 0.0;
                  break;
                }
              }
            }
            ++v19;
          }
          v28 = 0;
          for ( j = 0; j < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size; ++j )
          {
            v32 = CDOTA_BotMode::GetTeamCommander(this);
            v33 = 0;
            if ( j < v32->m_BotList.m_Size )
              v33 = v32->m_BotList.m_Memory.m_pMemory[v28];
            if ( this->m_pBot != v33 )
            {
              v30 = CDOTA_BotMode::GetTeamCommander(this);
              v31 = 0;
              if ( j < v30->m_BotList.m_Size )
                v31 = v30->m_BotList.m_Memory.m_pMemory[v28];
              if ( (*(v31->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v31->m_pActiveBotMode) == 17 )
              {
                v34 = CDOTA_BotMode::GetTeamCommander(this);
                v35 = j < v34->m_BotList.m_Size ? v34->m_BotList.m_Memory.m_pMemory[v28] : 0LL;
                if ( v35->m_TargetLane == DOTA_LANE::DOTA_LANE_NONE )
                {
                  v58 = 0.0;
                  goto LABEL_51;
                }
              }
            }
            ++v28;
          }
          v58 = v58 * 0.75;
        }
LABEL_51:
        v36 = 0;
        v37 = 0;
        while ( v36 < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size )
        {
          v38 = CDOTA_BotMode::GetTeamCommander(this);
          if ( v36 < v38->m_BotList.m_Size )
          {
            v39 = v38->m_BotList.m_Memory.m_pMemory[v36];
            if ( v39 != 0 )
            {
              v40 = CEntityHandle::operator CEntityInstance *(&v39->m_hUnit);
              if ( v40 != 0 && BYTE3(v40[7]._vptr_IHandleEntity) != 0 && (v40[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                v37 -= !CDOTA_Bot::IsPushingIntoBase(v39) - 1;
            }
          }
          ++v36;
        }
        for ( k = 0; k < CDOTA_BotMode::GetOpposingTeamCommander(this)->m_BotList.m_Size; ++k )
        {
          v42 = CDOTA_BotMode::GetTeamCommander(this);
          if ( k < v42->m_BotList.m_Size )
          {
            v43 = v42->m_BotList.m_Memory.m_pMemory[k];
            if ( v43 != 0 )
            {
              v44 = CEntityHandle::operator CEntityInstance *(&v43->m_hUnit);
              if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 && (v44[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                iTeam = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
                v45 = CEntityHandle::operator CEntityInstance *(&v43->m_hUnit);
                if ( v45 != 0 && BYTE3(v45[7]._vptr_IHandleEntity) != 0 )
                  v46 = v45;
                else
                  v46 = 0;
                if ( CBaseModelEntity::CanBeSeenByTeam(v46, iTeam) )
                  v37 -= !CDOTA_Bot::IsPushingIntoBase(v43) - 1;
              }
            }
          }
        }
        v47 = 0x3F800000u;
        v48 = v37 / 3.0;
        if ( v48 >= 0.0 )
        {
          v47 = 0x3E800000u;
          if ( v48 <= 1.0 )
          {
            v47 = 0xBF400000;
            v47.m128_f32[0] = (-0.75 * v48) + 1.0;
          }
        }
        v47.m128_f32[0] = v47.m128_f32[0] * v58;
        if ( v47.m128_f32[0] >= 0.0 )
        {
          v49 = _mm_cmplt_ss(0x3F666666u, v47);
          LODWORD(result) = _mm_andnot_ps(v49, v47).m128_u32[0] | v49.m128_i32[0] & 0x3F666666;
          return result;
        }
        return 0.0;
      }
    }
    v6 = v6 + 0.2;
    goto LABEL_7;
  }
  DeathGoldCost = CDOTA_BaseNPC_Hero::GetDeathGoldCost(v3);
  v52 = CDOTA_BaseNPC_Hero::GetBuybackCost(v3) + DeathGoldCost;
  v53 = v52 - (*(v3->_vptr_IHandleEntity + 397))(v3);
  if ( v53 <= 0 )
  {
    v5 = -v53;
    goto LABEL_4;
  }
  v54 = v53 / 3000.0;
  if ( v54 < 0.0 )
    return 0.75;
  result = 0.5;
  if ( v54 <= 1.0 )
    return (v54 * -0.25) + 0.75;
  return result;
}


// CDOTA_BotMode_Farm::GetFarmLaneScore  (line 464, @0x0000000002820ef0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetAmountAlongLane, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, IndexToIdentity, Length2D, LookupEntity, Purge, RemapValClamped, RemoveAll, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CEntityInstance*, operator-, operator==, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::IsLaneBeingFarmed, CDOTA_TeamCommander::IsLaneBeingPushed, CDOTA_TeamCommander::IsLaneBeingDefended, CDOTA_BotMode::GetOpposingTeamCommander, CDOTA_TeamCommander::GetLeadBuildingInLane, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_BotMode::GetUnit, CUtlMemory<CDOTA_Bot*, int>::Purge, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_TeamCommander::GetLaneFrontAmount, CDOTA_TeamCommander::GetLaneFrontLocation (22 total)
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Farm::GetFarmLaneScore(CDOTA_BotMode_Farm *const this, DOTA_LANE lane)
{
  CDOTA_Bot *m_pBot; // rbx
  CDOTA_TeamCommander *TeamCommander; // rax
  float result; // xmm0_4
  CDOTA_TeamCommander *v7; // rax
  CDOTA_TeamCommander *v8; // rax
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_Bot *v10; // rdi
  __int64 v11; // rbx
  int v12; // r12d
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  CDOTA_BaseNPC *v17; // rax
  int OpposingTeamNumber; // ebx
  CDOTA_TeamCommander *v19; // rax
  __m128i v20; // xmm0
  float v21; // ebx
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  int v24; // r12d
  CDOTA_TeamCommander *v25; // rax
  CDOTA_Bot *v26; // rdi
  float v27; // xmm0_4
  CDOTA_BaseNPC *v28; // rax
  int v29; // eax
  float v30; // xmm1_4
  float v31; // xmm0_4
  CDOTA_BaseNPC *v32; // rax
  const Vector *AbsOrigin; // rax
  float v34; // xmm0_4
  float v35; // xmm1_4
  CDOTA_TeamCommander *v36; // rax
  float v37; // xmm1_4
  __m128i v38; // xmm0
  float v39; // r14d
  float OffensivePower; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  int AvoidanceAmountForLocation; // eax
  float v44; // xmm0_4
  float v45; // xmm1_4
  CDOTA_BaseNPC_Building *fLaneScore; // [rsp+28h] [rbp-88h]
  float fLaneScorea; // [rsp+28h] [rbp-88h]
  float fLaneScoreb; // [rsp+28h] [rbp-88h]
  float fLaneScorec; // [rsp+28h] [rbp-88h]
  float fLaneScored; // [rsp+28h] [rbp-88h]
  float fLaneScoree; // [rsp+28h] [rbp-88h]
  float fLaneScoref; // [rsp+28h] [rbp-88h]
  float fLaneScoreg; // [rsp+28h] [rbp-88h]
  Vector vLaneFrontLocation; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > AttackingEnemies; // [rsp+40h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hCreeps; // [rsp+60h] [rbp-50h] BYREF
  Vector LaneFrontLocation; // 0:kr00_12.12

  m_pBot = this->m_pBot;
  TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
  if ( CDOTA_TeamCommander::IsLaneBeingFarmed(TeamCommander, lane, m_pBot) )
    return 0.0;
  v7 = CDOTA_BotMode::GetTeamCommander(this);
  if ( CDOTA_TeamCommander::IsLaneBeingPushed(v7, lane) )
    return 0.0;
  v8 = CDOTA_BotMode::GetTeamCommander(this);
  if ( CDOTA_TeamCommander::IsLaneBeingDefended(v8, lane) )
    return 0.0;
  OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
  fLaneScore = CDOTA_TeamCommander::GetLeadBuildingInLane(OpposingTeamCommander, lane);
  if ( fLaneScore == 0 )
    return 0.0;
  v10 = this->m_pBot;
  AttackingEnemies.m_Size = 0;
  AttackingEnemies.m_Memory.m_pMemory = 0;
  AttackingEnemies.m_Memory.m_nAllocationCount = 0;
  AttackingEnemies.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::FindNearbyEnemiesInMode(v10, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, &AttackingEnemies, 0);
  v11 = 0;
  v12 = 0;
  if ( AttackingEnemies.m_Size > 0 )
  {
    while ( 1 )
    {
      Unit = CDOTA_BotMode::GetUnit(this);
      m_pInstance = 0;
      hCreeps.m_Size = AttackingEnemies.m_Memory.m_pMemory[v11]->m_hTarget.m_Index;
      if ( (hCreeps.m_Size + 2) > 1 )
      {
        v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hCreeps.m_Size) >> 9) & 0x3F];
        if ( v15 != 0 )
        {
          v16 = &v15[hCreeps.m_Size & 0x1FF];
          if ( v16 != 0 && hCreeps.m_Size == v16->m_EHandle.m_Index )
            m_pInstance = v16->m_pInstance;
        }
      }
      if ( Unit == m_pInstance )
        break;
      ++v12;
      ++v11;
      if ( AttackingEnemies.m_Size <= v12 )
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    v17 = CDOTA_BotMode::GetUnit(this);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v17);
    v19 = CDOTA_BotMode::GetOpposingTeamCommander(this);
    *v20.m128i_i32 = CDOTA_TeamCommander::GetLaneFrontAmount(v19, OpposingTeamNumber, lane, 0);
    v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
    v22 = CDOTA_BotMode::GetUnit(this);
    fLaneScoreb = fLaneScore->m_fAmountAlongLane[CDOTA_BaseNPC::GetOpposingTeamNumber(v22) != 2];
    v23 = CDOTA_BotMode::GetUnit(this);
    v24 = CDOTA_BaseNPC::GetOpposingTeamNumber(v23);
    v25 = CDOTA_BotMode::GetOpposingTeamCommander(this);
    LaneFrontLocation = CDOTA_TeamCommander::GetLaneFrontLocation(v25, v24, lane, 0.0, 0.0);
    v26 = this->m_pBot;
    vLaneFrontLocation = LaneFrontLocation;
    if ( !CDOTA_Bot::CanEasilyBeKilled(v26, &vLaneFrontLocation) && !CDOTA_Bot::IsDangerouslyLow(this->m_pBot) )
    {
      v27 = (v21 - fLaneScoreb) + (v21 - fLaneScoreb);
      if ( v27 < 0.0 )
      {
        fLaneScorec = 0.44999999;
      }
      else
      {
        fLaneScorec = 2.95;
        if ( v27 <= 1.0 )
          fLaneScorec = ((v27 * 2.5) + 0.0) + 0.44999999;
      }
      hCreeps.m_Size = 0;
      hCreeps.m_Memory.m_pMemory = 0;
      hCreeps.m_Memory.m_nAllocationCount = 0;
      hCreeps.m_Memory.m_nGrowSize = 0;
      v28 = CDOTA_BotMode::GetUnit(this);
      v29 = CDOTA_BaseNPC::GetOpposingTeamNumber(v28);
      FindUnitsInRadius(v29, &vLaneFrontLocation, 0, 800.0, &hCreeps, 1, 2, 0, 0, 0);
      v30 = 0.0;
      v31 = hCreeps.m_Size / 10.0;
      if ( v31 >= 0.0 )
      {
        v30 = 1.0;
        if ( v31 <= 1.0 )
          v30 = v31 + 0.0;
      }
      fLaneScored = v30 + fLaneScorec;
      v32 = CDOTA_BotMode::GetUnit(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v32);
      v34 = (fsqrt(
               ((AbsOrigin->x - vLaneFrontLocation.x) * (AbsOrigin->x - vLaneFrontLocation.x))
             + ((AbsOrigin->y - vLaneFrontLocation.y) * (AbsOrigin->y - vLaneFrontLocation.y)))
           - 500.0)
          / 4500.0;
      if ( v34 < 0.0 )
      {
        v35 = 0.75;
      }
      else
      {
        v35 = 0.0;
        if ( v34 <= 1.0 )
          v35 = (-0.75 * v34) + 0.75;
      }
      fLaneScoree = v35 + fLaneScored;
      v36 = CDOTA_BotMode::GetTeamCommander(this);
      *v38.m128i_i32 = CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(v36, &vLaneFrontLocation, v37);
      v39 = COERCE_FLOAT(_mm_cvtsi128_si32(v38));
      OffensivePower = CDOTA_Bot::GetOffensivePower(this->m_pBot);
      v41 = 0.0;
      v42 = (v39 - OffensivePower) / 2000.0;
      if ( v42 >= 0.0 )
      {
        v41 = -2.0;
        if ( v42 <= 1.0 )
          v41 = (-2.0 * v42) + 0.0;
      }
      fLaneScoref = v41 + fLaneScoree;
      AvoidanceAmountForLocation = CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, &vLaneFrontLocation, 1);
      v44 = 0.0;
      v45 = AvoidanceAmountForLocation / 15.0;
      if ( v45 >= 0.0 )
      {
        v44 = -3.0;
        if ( v45 <= 1.0 )
          v44 = (-3.0 * v45) + 0.0;
      }
      fLaneScoreg = v44 + fLaneScoref;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreeps);
      result = fLaneScoreg;
      goto LABEL_17;
    }
  }
  result = 0.0;
LABEL_17:
  AttackingEnemies.m_Size = 0;
  if ( (AttackingEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    fLaneScorea = result;
    CUtlMemory<CDOTA_Bot *,int>::Purge(&AttackingEnemies.m_Memory);
    result = fLaneScorea;
    if ( (AttackingEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Bot *,int>::Purge(&AttackingEnemies.m_Memory);
      return fLaneScorea;
    }
  }
  return result;
}


// CDOTA_BotMode_Farm::GetNeutralFarmingLevel  (line 521, @0x000000000281cbc0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: CDOTA_Bot::GetTankRating, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetAverageTrueAttackDamage
// callers: CDOTA_BotMode_Farm::GetDesire
DOTA_NEUTRAL_TYPE __fastcall CDOTA_BotMode_Farm::GetNeutralFarmingLevel(CDOTA_BotMode_Farm *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  int AverageTrueAttackDamage; // eax
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  DOTA_NEUTRAL_TYPE result; // eax
  float fTankRating; // [rsp+Ch] [rbp-14h]
  float fTankRatinga; // [rsp+Ch] [rbp-14h]

  fTankRating = CDOTA_Bot::GetTankRating(this->m_pBot);
  Unit = CDOTA_BotMode::GetUnit(this);
  AverageTrueAttackDamage = CDOTA_BaseNPC::GetAverageTrueAttackDamage(Unit, 0);
  v4 = 0.0;
  v5 = AverageTrueAttackDamage / 150.0;
  if ( v5 >= 0.0 )
  {
    v4 = 0.2;
    if ( v5 <= 1.0 )
      v4 = (0.2 * v5) + 0.0;
  }
  fTankRatinga = fTankRating + v4;
  v6 = (*(this->m_pBot->_vptr_CDOTA_Bot + 14))(this->m_pBot) / 0.60000002;
  if ( v6 < 0.0 )
  {
    v7 = 0.0;
  }
  else if ( v6 <= 1.0 )
  {
    v7 = (v6 * 0.30000001) + 0.0;
  }
  else
  {
    v7 = 0.30000001;
  }
  v8 = v7 + fTankRatinga;
  if ( v8 < 0.30000001 )
    return DOTA_NEUTRAL_TYPE::DOTA_NEUTRAL_NONE;
  result = DOTA_NEUTRAL_TYPE::DOTA_NEUTRAL_EASY;
  if ( v8 >= 0.44999999 )
  {
    LOBYTE(result) = 1;
    if ( v8 >= 0.60000002 )
      return (v8 >= 0.80000001) + 2;
  }
  return result;
}


// CDOTA_BotMode_Farm::GetDebugColor  (line 541, @0x0000000002816300, libserver.so)
color24 __fastcall CDOTA_BotMode_Farm::GetDebugColor(CDOTA_BotMode_Farm *const this)
{
  return 51200;
}


// CDOTA_BotMode_Farm::GetDebugString  (line 552, @0x0000000002820be0, libserver.so)
// calls: GetLaneName, V_sprintf_safe<128ul>
// strings: "Farm - %s"
const char *__fastcall CDOTA_BotMode_Farm::GetDebugString(CDOTA_BotMode_Farm *const this)
{
  char *m_DebugStringBuffer; // rbx
  const char *LaneName; // rax

  m_DebugStringBuffer = this->m_DebugStringBuffer;
  LaneName = GetLaneName(this->m_pBot->m_TargetLane);
  V_sprintf_safe<128ul>(m_DebugStringBuffer, "Farm - %s", LaneName);
  return m_DebugStringBuffer;
}


// CDOTA_BotMode_Farm_Human::GetDesire  (line 561, @0x0000000002817ed0, libserver.so)  // inlines: Get, GetAggroTarget, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CDOTA_BaseNPC::GetOpposingTeamNumber
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Farm_Human::GetDesire(CDOTA_BotMode_Farm_Human *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  uint32 m_Index; // edx
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  float result; // xmm0_4
  CEntityInstance *m_pInstance; // r12
  int m_CScriptComponent_high; // r12d
  CDOTA_BaseNPC *v10; // rax
  int OpposingTeamNumber; // eax

  Unit = CDOTA_BotMode::GetUnit(this);
  m_Index = Unit->m_hAggroTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = Unit->m_hAggroTarget.m_Index, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) != 0)
    && (v6 = &v5[v4 & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    if ( HIBYTE(m_pInstance[7].m_CScriptComponent) == 4 )
    {
      return 0.75;
    }
    else if ( CDOTA_BotMode::GetTeamCommander(this)->m_bLateGame
           && SLOBYTE(m_pInstance[43].m_iszPrivateVScripts.u.m_Id) < 0 )
    {
      m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
      v10 = CDOTA_BotMode::GetUnit(this);
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v10);
      result = 0.0;
      if ( OpposingTeamNumber == m_CScriptComponent_high )
        return 0.5;
    }
    else
    {
      return 0.0;
    }
  }
  else
  {
    CDOTA_BotMode::GetTeamCommander(this);
    return 0.0;
  }
  return result;
}


