
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_DefendTower::CDOTA_BotMode_DefendTower  (line 21, @0x00000000027f7d20, libserver.so)  // inlines: CDOTA_BotMode, operator=
void __fastcall CDOTA_BotMode_DefendTower::CDOTA_BotMode_DefendTower(
        CDOTA_BotMode_DefendTower *const this,
        CDOTA_Bot *pBot,
        DOTA_LANE lane,
        DOTA_BOT_MODE mode)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4

  this->m_DebugStringBuffer[0] = 0;
  this->m_pBot = pBot;
  this->m_iDesireLocationFrame = 0;
  x = vec3_origin.x;
  this->m_DebugValueBuffer[0] = 0;
  this->m_Lane = lane;
  this->m_vDesiredLocation.x = x;
  y = vec3_origin.y;
  this->m_Mode = mode;
  this->m_vDesiredLocation.y = y;
  z = vec3_origin.z;
  this->_vptr_CDOTA_BotMode = off_42B7B90;
  this->m_vDesiredLocation.z = z;
  this->m_fDesire = 0.0;
}


// CDOTA_BotMode_DefendTower::OnStart  (line 31, @0x00000000027f5ea0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, SetTargetLane
// calls: CDOTA_BotMode::DoScriptOnStart
void __fastcall CDOTA_BotMode_DefendTower::OnStart(CDOTA_BotMode_DefendTower *const this)
{
  float v2; // xmm0_4

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    v2 = 0.0;
    this->m_pBot->m_TargetLane = this->m_Lane;
    this->m_bAnnouncedDefend = 0;
    if ( g_pGameRules != 0 )
      v2 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_fStartDefendTime = v2;
  }
}


// CDOTA_BotMode_DefendTower::OnEnd  (line 44, @0x00000000027f64c0, libserver.so)  // inlines: SetTargetLane
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_DefendTower::OnEnd(CDOTA_BotMode_DefendTower *const this)
{
  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
    this->m_pBot->m_TargetLane = DOTA_LANE::DOTA_LANE_NONE;
}


// CDOTA_BotMode_DefendTower::Think  (line 54, @0x000000000280ef30, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CVProfScope, DOTAGameRules, FastSqrt, FindEstimatedAttackLocation, Get, GetAmountAlongLane, GetBotByIndex, GetBotTargetStatus, GetBotTargetStatusCore, GetDistanceToEntity, GetGameTime, GetInstance, GetNearbyCreeps, GetNearbyHeroes, GetNearbyUnits, GetTeamCommander, GetTeamNumber, GetUnit, IsEnabled, Length, Length2D, NetworkStateChanged, NumCreepsWillingToTank, Purge, Set, SetBotDebugData, SetTargetLane, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator-, operator=<int>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CDOTA_Bot::IsUsingAbility, CDOTA_BotMode::GetUnit, CDOTA_TeamCommander::ChatMessageRequest, CVProfile::EnterScope, CVProfile::ExitScope, CDOTA_Bot::IsUsingItem, CDOTA_TeamCommander::GetLeadBuildingInLane, CDOTA_TeamCommander::GetLeadBuildingInLaneTier, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Bot::UpdateNearbyUnits (43 total)
// strings: "DOTA_Chat_Bot_Defend", "CDOTA_BotMode_DefendTower::Think"
// globals: pszLocalizableLaneStrings
void __fastcall CDOTA_BotMode_DefendTower::Think(CDOTA_BotMode_DefendTower *const this)
{
  int m_enabled; // r11d
  bool v3; // r15
  float v4; // xmm0_4
  const char *v5; // r12
  CDOTA_BaseNPC *Unit; // rax
  CDOTAPlayer *v7; // rax
  int v8; // r13d
  CDOTA_BaseNPC *v9; // r12
  int LeadBuildingInLaneTier; // eax
  const Vector *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  CDOTA_Bot *v13; // r14
  const CHandle<CBaseEntity> *v14; // r12
  const CHandle<CBaseEntity> *v15; // r13
  CEntityInstance *v16; // rax
  char v17; // r14
  CEntityInstance *v18; // rax
  const Vector *v19; // rax
  float v20; // xmm1_4
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // rax
  float v23; // xmm1_4
  float AttackDamage; // xmm0_4
  CDOTA_Bot *v25; // rax
  CDOTA_Bot *v26; // r12
  CDOTA_TeamCommander *m_pTeamCommander; // rdx
  __m128 v28; // xmm0
  __m128 v29; // rt1
  __m128 v30; // xmm1
  __int64 v31; // r13
  CDOTA_Bot *v32; // r12
  int v33; // r14d
  CDOTA_BaseNPC *v34; // rax
  const Vector *v35; // r14
  CEntityInstance *v36; // rax
  const CBaseEntity *v37; // rdi
  const Vector *v38; // rax
  float v39; // xmm0_4
  CDOTA_Bot *m_pBot; // r12
  DOTA_LANE m_Lane; // r13d
  CDOTA_BaseNPC *v42; // rax
  int OpposingTeamNumber; // eax
  CDOTA_Bot *v44; // r14
  const CHandle<CBaseEntity> *m_pMemory; // r12
  const CHandle<CBaseEntity> *v46; // r13
  CEntityInstance *v47; // rax
  char m_CScriptComponent_high; // r14
  CEntityInstance *v49; // rax
  CHandle<CBaseEntity> *v50; // r13
  CHandle<CBaseEntity> *v51; // r12
  CEntityInstance *v52; // rax
  CDOTA_BaseNPC *v53; // rax
  const Vector *AbsOrigin; // rax
  CEntityInstance *v55; // rax
  const CBaseEntity *v56; // r12
  CDOTA_BaseNPC *v57; // rax
  const Vector *v58; // rax
  int m_Size; // eax
  CDOTA_BaseNPC *v60; // rax
  const Vector *v61; // r12
  int v62; // xmm1_4
  CDOTA_BaseNPC *v63; // rax
  int v64; // eax
  CDOTA_BaseNPC *v65; // rax
  const Vector *v66; // rax
  __int64 v67; // r14
  int v68; // r12d
  CEntityInstance *v69; // rax
  CDOTA_BaseNPC *v70; // r13
  CDOTA_BaseNPC *v71; // rax
  CDOTA_Bot *v72; // r13
  const CHandle<CBaseEntity> *v73; // r12
  CDOTA_Bot *v74; // rsi
  const CHandle<CBaseEntity> *v75; // r13
  CEntityInstance *v76; // rax
  CEntityInstance *v77; // rax
  CDOTA_BaseNPC *v78; // rax
  const Vector *v79; // rax
  const Vector *v80; // r13
  const Vector *v81; // rax
  CDOTA_BaseNPC *v82; // rdi
  CEntityInstance *v83; // rax
  CDOTA_BaseNPC *v84; // r12
  CEntityInstance *v85; // rax
  CDOTA_BaseNPC *v86; // rsi
  __int64 v87; // r13
  int v88; // r14d
  CDOTA_BaseNPC *v89; // rax
  CDOTA_Bot *v90; // rdi
  int m_nAttackingCreeps; // r13d
  float TankRating; // xmm0_4
  float v93; // xmm1_4
  int v94; // eax
  CDOTA_BaseNPC *v95; // rax
  CDOTA_BaseNPC *Fountain; // rax
  const Vector *v97; // rax
  double v98; // xmm0_8
  CDOTA_Bot *v99; // rdi
  int v100; // xmm1_4
  CDOTA_Bot *v101; // r12
  const Vector *v102; // rax
  CDOTA_Bot *v103; // rax
  int RawAvoidanceForLocation; // eax
  float v105; // xmm0_4
  int EstimatedDamageToTarget; // r12d
  CDOTA_Bot *v107; // r14
  const CHandle<CBaseEntity> *v108; // r12
  const CHandle<CBaseEntity> *v109; // r13
  CEntityInstance *v110; // rax
  char v111; // r14
  CEntityInstance *v112; // rax
  CDOTA_BaseNPC *v113; // rax
  const Vector *v114; // rax
  CEntityInstance *v115; // rax
  CDOTA_BaseNPC *v116; // rsi
  CDOTA_Bot *v117; // rdi
  float fEnemyPower; // [rsp+24h] [rbp-25Ch]
  float v119; // [rsp+28h] [rbp-258h]
  bool bDefendingInBase; // [rsp+2Fh] [rbp-251h]
  int nIncomingAllies; // [rsp+38h] [rbp-248h]
  const CEntityHandle *nIncomingAlliesa; // [rsp+38h] [rbp-248h]
  const CEntityHandle *nIncomingAlliesb; // [rsp+38h] [rbp-248h]
  const CEntityHandle *nIncomingAlliesc; // [rsp+38h] [rbp-248h]
  CDOTA_BaseNPC_Building *pTargetBuilding; // [rsp+40h] [rbp-240h]
  int pTargetBuildinga; // [rsp+40h] [rbp-240h]
  const CEntityHandle *fAlliedPower; // [rsp+48h] [rbp-238h]
  float fAlliedPowerc; // [rsp+48h] [rbp-238h]
  char fAlliedPowera; // [rsp+48h] [rbp-238h]
  float fAlliedPowerb; // [rsp+48h] [rbp-238h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hAttackingCreeps; // [rsp+50h] [rbp-230h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hAttackingCreeps_0; // [rsp+70h] [rbp-210h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyEnemyHeroes; // [rsp+90h] [rbp-1F0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEnemyHeroes; // [rsp+130h] [rbp-150h] BYREF
  unsigned __int64 v135; // [rsp+248h] [rbp-38h]
  Vector v136; // 0:kr00_12.12
  Vector v137; // 0:kr20_12.12

  v135 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_DefendTower::Think", 0, "Bots", 0, 4);
  if ( CDOTA_BotMode::DoScriptThink(this) )
    goto LABEL_8;
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  if ( (v4 - this->m_fStartDefendTime) > 5.0 && !this->m_bAnnouncedDefend )
  {
    v5 = &pszLocalizableLaneStrings[64 * this->m_Lane];
    Unit = CDOTA_BotMode::GetUnit(this);
    v7 = (*(Unit->_vptr_IHandleEntity + 413))(Unit);
    CDOTA_TeamCommander::ChatMessageRequest(this->m_pBot->m_pTeamCommander, v7, "DOTA_Chat_Bot_Defend", v5, 1, 0);
    this->m_bAnnouncedDefend = 1;
  }
  if ( CDOTA_Bot::IsUsingAbility(this->m_pBot) || CDOTA_Bot::IsUsingItem(this->m_pBot) )
    goto LABEL_8;
  v8 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
  v9 = CDOTA_BotMode::GetUnit(this);
  if ( v8 != v9->m_iBotDebugData.m_Value )
  {
    (*(v9->_vptr_IHandleEntity + 22))(v9, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v9->m_iBotDebugData.m_Value = v8;
  }
  this->m_pBot->m_TargetLane = this->m_Lane;
  pTargetBuilding = CDOTA_TeamCommander::GetLeadBuildingInLane(this->m_pBot->m_pTeamCommander, this->m_Lane);
  if ( pTargetBuilding == 0 )
  {
LABEL_8:
    if ( !v3 )
      return;
    goto LABEL_9;
  }
  LeadBuildingInLaneTier = CDOTA_TeamCommander::GetLeadBuildingInLaneTier(this->m_pBot->m_pTeamCommander, this->m_Lane);
  bDefendingInBase = LeadBuildingInLaneTier > 2;
  if ( LeadBuildingInLaneTier <= 2 )
  {
    m_pBot = this->m_pBot;
    m_Lane = pTargetBuilding->m_Lane;
    if ( m_pBot->m_CurrentLane != m_Lane )
    {
      if ( m_pBot->m_nAttackingCreeps <= 0 )
      {
        v89 = CDOTA_BotMode::GetUnit(this);
        v136 = CDOTA_TeamCommander::CalculateLocationAlongLane(
                 m_pBot->m_pTeamCommander,
                 m_Lane,
                 pTargetBuilding->m_fAmountAlongLane[v89->m_iTeamNum.m_Value != 2],
                 -1000.0,
                 300.0,
                 m_pBot);
        v90 = this->m_pBot;
        *&hAttackingCreeps_0.m_Size = v136;
        CDOTA_Bot::SetMoveAction(v90, &hAttackingCreeps_0, 0, 0);
        goto LABEL_8;
      }
      hAttackingCreeps.m_Size = 0;
      hAttackingCreeps.m_Memory.m_pMemory = 0;
      hAttackingCreeps.m_Memory.m_nAllocationCount = 0;
      hAttackingCreeps.m_Memory.m_nGrowSize = 0;
      v42 = CDOTA_BotMode::GetUnit(this);
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v42);
      CDOTA_Bot::FindNearbyCreeps(this->m_pBot, 1600.0, OpposingTeamNumber, 1, &hAttackingCreeps);
      v44 = this->m_pBot;
      hAttackingCreeps_0.m_Size = 0;
      hAttackingCreeps_0.m_Memory.m_pMemory = 0;
      hAttackingCreeps_0.m_Memory.m_nAllocationCount = 0;
      hAttackingCreeps_0.m_Memory.m_nGrowSize = 0;
      CDOTA_Bot::UpdateNearbyUnits(v44);
      m_pMemory = v44->m_NearbyCreeps.m_Memory.m_pMemory;
      v46 = &m_pMemory[2 * v44->m_NearbyCreeps.m_Size];
      for ( nIncomingAlliesa = &v44->m_hUnit; v46 != m_pMemory; m_pMemory += 2 )
      {
        v47 = CEntityHandle::operator CEntityInstance *(m_pMemory);
        if ( v47 != 0 && BYTE3(v47[7]._vptr_IHandleEntity) != 0 )
        {
          m_CScriptComponent_high = HIBYTE(v47[7].m_CScriptComponent);
          v49 = CEntityHandle::operator CEntityInstance *(nIncomingAlliesa);
          if ( v49 == 0 || BYTE3(v49[7]._vptr_IHandleEntity) == 0 )
            v49 = 0;
          if ( m_CScriptComponent_high == HIBYTE(v49[7].m_CScriptComponent) )
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
              &hAttackingCreeps_0,
              m_pMemory);
        }
      }
      if ( hAttackingCreeps.m_Size > 0 )
      {
        v50 = hAttackingCreeps.m_Memory.m_pMemory;
        v51 = &hAttackingCreeps.m_Memory.m_pMemory[hAttackingCreeps.m_Size - 1 + 1];
        while ( 1 )
        {
          v52 = CEntityHandle::operator CEntityInstance *(v50);
          if ( v52 != 0 && BYTE3(v52[7]._vptr_IHandleEntity) != 0 && (*(&v52[50].m_worldGroupId + 1) & 2) != 0 )
            break;
          if ( ++v50 == v51 )
            goto LABEL_56;
        }
        CDOTA_Bot::SetAttackAction(this->m_pBot, v52, 0);
        goto LABEL_61;
      }
LABEL_56:
      v53 = CDOTA_BotMode::GetUnit(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v53);
      SortEHANDLEVectorByLocation(&hAttackingCreeps_0, AbsOrigin, 0);
      if ( hAttackingCreeps_0.m_Size > 0 )
      {
        v55 = CEntityHandle::operator CEntityInstance *(&hAttackingCreeps_0.m_Memory.m_pMemory[hAttackingCreeps_0.m_Size
                                                                                             - 1]);
        v56 = v55;
        if ( v55 != 0 && BYTE3(v55[7]._vptr_IHandleEntity) != 0 )
        {
          v57 = CDOTA_BotMode::GetUnit(this);
          if ( CBaseEntity::GetDistanceToEntity(v57, v56) != 0.0 )
          {
            v58 = CBaseEntity::GetAbsOrigin(v56);
            CDOTA_Bot::SetMoveAction(this->m_pBot, v58, 0, 1);
LABEL_61:
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAttackingCreeps_0);
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAttackingCreeps);
            goto LABEL_8;
          }
        }
      }
      if ( hAttackingCreeps.m_Size > 0 )
      {
        v85 = CEntityHandle::operator CEntityInstance *(hAttackingCreeps.m_Memory.m_pMemory);
        if ( v85 != 0 && BYTE3(v85[7]._vptr_IHandleEntity) != 0 )
          v86 = v85;
        else
          v86 = 0;
        CDOTA_Bot::SetAttackAction(this->m_pBot, v86, 0);
        goto LABEL_61;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAttackingCreeps_0);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAttackingCreeps);
    }
  }
  hEnemyHeroes.m_Size = 0;
  hEnemyHeroes.m_Memory.m_nAllocationCount = 64;
  hEnemyHeroes.m_Memory.m_nGrowSize = 0x80000000;
  hEnemyHeroes.m_Memory.m_pMemory = &hEnemyHeroes.m_FixedMemory;
  v11 = CBaseEntity::GetAbsOrigin(pTargetBuilding);
  v12 = CDOTA_BotMode::GetUnit(this);
  FindUnitsInRadius(v12->m_iTeamNum.m_Value, v11, pTargetBuilding, 1200.0, &hEnemyHeroes, 2, 1, 0, 0, 0);
  v13 = this->m_pBot;
  CDOTA_Bot::UpdateNearbyUnits(v13);
  v14 = v13->m_NearbyHeroes.m_Memory.m_pMemory;
  v15 = &v14[2 * v13->m_NearbyHeroes.m_Size];
  for ( fAlliedPower = &v13->m_hUnit; v15 != v14; v14 += 2 )
  {
    v16 = CEntityHandle::operator CEntityInstance *(v14);
    if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
    {
      v17 = HIBYTE(v16[7].m_CScriptComponent);
      v18 = CEntityHandle::operator CEntityInstance *(fAlliedPower);
      if ( v18 == 0 || BYTE3(v18[7]._vptr_IHandleEntity) == 0 )
        v18 = 0;
      if ( v17 != HIBYTE(v18[7].m_CScriptComponent) )
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(&hEnemyHeroes, v14);
    }
  }
  v19 = CBaseEntity::GetAbsOrigin(pTargetBuilding);
  fEnemyPower = CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(this->m_pBot->m_pTeamCommander, v19, v20);
  v21 = CDOTA_BotMode::GetUnit(this);
  v22 = CBaseEntity::GetAbsOrigin(v21);
  fAlliedPowerc = CDOTA_TeamCommander::GetNearbyAlliedOffensivePower(this->m_pBot->m_pTeamCommander, v22, v23);
  AttackDamage = CDOTA_BaseNPC::GetAttackDamage(pTargetBuilding);
  v25 = this->m_pBot;
  v26 = v25;
  m_pTeamCommander = v25->m_pTeamCommander;
  v28.m128_f32[0] = (AttackDamage * 3.0) + fAlliedPowerc;
  v29.m128_i32[0] = 1065353216;
  v30 = _mm_cmplt_ss(v28, v29);
  LODWORD(v119) = _mm_andnot_ps(v30, v28).m128_u32[0] | v30.m128_i32[0] & 0x3F800000;
  if ( m_pTeamCommander->m_BotList.m_Size <= 0 )
    goto LABEL_107;
  nIncomingAllies = 0;
  v31 = 0;
  do
  {
    v32 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v31];
    if ( v32 != 0 && v32 != v25 )
    {
      v33 = (*(v32->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v32->m_pActiveBotMode);
      if ( v33 == (*(this->_vptr_CDOTA_BotMode + 2))(this) )
      {
        v34 = CDOTA_BotMode::GetUnit(this);
        v35 = CBaseEntity::GetAbsOrigin(v34);
        v36 = CEntityHandle::operator CEntityInstance *(&v32->m_hUnit);
        if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
          v37 = v36;
        else
          v37 = 0;
        v38 = CBaseEntity::GetAbsOrigin(v37);
        v39 = fsqrt(((v38->x - v35->x) * (v38->x - v35->x)) + ((v38->y - v35->y) * (v38->y - v35->y)));
        if ( v39 > 1000.0 && v39 < 3000.0 )
          ++nIncomingAllies;
      }
      v25 = this->m_pBot;
    }
    m_pTeamCommander = v25->m_pTeamCommander;
    ++v31;
    v26 = v25;
  }
  while ( m_pTeamCommander->m_BotList.m_Size > v31 );
  if ( nIncomingAllies != 0 && (fEnemyPower / v119) >= 1.0 )
  {
    m_Size = hEnemyHeroes.m_Size;
  }
  else
  {
LABEL_107:
    m_Size = hEnemyHeroes.m_Size;
    if ( hEnemyHeroes.m_Size > 0 )
    {
      v87 = 0;
      v88 = 0;
      do
      {
        hAttackingCreeps_0.m_Size = hEnemyHeroes.m_Memory.m_pMemory[v87].m_Index;
        if ( !CDOTA_TeamCommander::HasRequestActive(v26->m_pTeamCommander, 1, &hAttackingCreeps_0, 0) )
        {
          hAttackingCreeps_0.m_Size = hEnemyHeroes.m_Memory.m_pMemory[v87].m_Index;
          CDOTA_TeamCommander::CreateHumanRequest(this->m_pBot->m_pTeamCommander, 1, &hAttackingCreeps_0, 1, 3.0);
        }
        m_Size = hEnemyHeroes.m_Size;
        ++v88;
        ++v87;
        v26 = this->m_pBot;
      }
      while ( hEnemyHeroes.m_Size > v88 );
    }
  }
  if ( m_Size == 0 )
  {
    m_nAttackingCreeps = v26->m_nAttackingCreeps;
    TankRating = CDOTA_Bot::GetTankRating(v26);
    LOBYTE(v94) = CDOTA_Bot::NumCreepsWillingToTank(v26, TankRating, v93);
    if ( m_nAttackingCreeps > v94 )
    {
      if ( !bDefendingInBase )
      {
        v137 = CDOTA_TeamCommander::CalculateLocationAlongLane(
                 this->m_pBot->m_pTeamCommander,
                 this->m_pBot->m_CurrentLane,
                 this->m_pBot->m_fCurrentLaneAmount,
                 -500.0,
                 100.0,
                 this->m_pBot);
        v117 = this->m_pBot;
        *&hAttackingCreeps_0.m_Size = v137;
        CDOTA_Bot::SetMoveAction(v117, &hAttackingCreeps_0, 0, 1);
LABEL_120:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEnemyHeroes);
        if ( (hEnemyHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEnemyHeroes.m_Memory);
          if ( (hEnemyHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEnemyHeroes.m_Memory);
        }
        goto LABEL_8;
      }
      v95 = CDOTA_BotMode::GetUnit(this);
      Fountain = CDOTAGamerules::GetFountain(g_pGameRules, v95->m_iTeamNum.m_Value);
      if ( Fountain != 0 )
      {
        v97 = CBaseEntity::GetAbsOrigin(Fountain);
        CDOTA_Bot::SetMoveAction(this->m_pBot, v97, 0, 1);
        goto LABEL_120;
      }
    }
    v107 = this->m_pBot;
    hAttackingCreeps_0.m_Size = 0;
    hAttackingCreeps_0.m_Memory.m_pMemory = 0;
    hAttackingCreeps_0.m_Memory.m_nAllocationCount = 0;
    hAttackingCreeps_0.m_Memory.m_nGrowSize = 0;
    CDOTA_Bot::UpdateNearbyUnits(v107);
    v108 = v107->m_NearbyCreeps.m_Memory.m_pMemory;
    v109 = &v108[2 * v107->m_NearbyCreeps.m_Size];
    for ( nIncomingAlliesc = &v107->m_hUnit; v109 != v108; v108 += 2 )
    {
      v110 = CEntityHandle::operator CEntityInstance *(v108);
      if ( v110 != 0 && BYTE3(v110[7]._vptr_IHandleEntity) != 0 )
      {
        v111 = HIBYTE(v110[7].m_CScriptComponent);
        v112 = CEntityHandle::operator CEntityInstance *(nIncomingAlliesc);
        if ( v112 == 0 || BYTE3(v112[7]._vptr_IHandleEntity) == 0 )
          v112 = 0;
        if ( v111 != HIBYTE(v112[7].m_CScriptComponent) )
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
            &hAttackingCreeps_0,
            v108);
      }
    }
    v113 = CDOTA_BotMode::GetUnit(this);
    v114 = CBaseEntity::GetAbsOrigin(v113);
    SortEHANDLEVectorByLocation(&hAttackingCreeps_0, v114, 0);
    if ( hAttackingCreeps_0.m_Size > 0 )
    {
      v115 = CEntityHandle::operator CEntityInstance *(hAttackingCreeps_0.m_Memory.m_pMemory);
      if ( v115 != 0 && BYTE3(v115[7]._vptr_IHandleEntity) != 0 )
        v116 = v115;
      else
        v116 = 0;
      CDOTA_Bot::SetAttackAction(this->m_pBot, v116, 0);
LABEL_135:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAttackingCreeps_0);
      goto LABEL_120;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAttackingCreeps_0);
    v26 = this->m_pBot;
  }
  if ( v26->m_iDifficulty > 2
    && !bDefendingInBase
    && CDOTA_BaseNPC::IsDeniable(pTargetBuilding)
    && (pTargetBuilding->m_iUnitType & 4) != 0 )
  {
    v101 = this->m_pBot;
    v102 = CBaseEntity::GetAbsOrigin(pTargetBuilding);
    *&hAttackingCreeps.m_Size = CDOTA_Bot::FindEstimatedAttackLocation(v101, v102);
    v103 = this->m_pBot;
    *&hAttackingCreeps_0.m_Size = *&hAttackingCreeps.m_Size;
    RawAvoidanceForLocation = CDOTA_TeamCommander::GetRawAvoidanceForLocation(
                                v103->m_pTeamCommander,
                                &hAttackingCreeps_0);
    if ( RawAvoidanceForLocation <= 14 )
    {
      v105 = 4.0;
      if ( RawAvoidanceForLocation > 9 )
        v105 = 2.0;
      EstimatedDamageToTarget = CDOTA_Bot::GetEstimatedDamageToTarget(this->m_pBot, 1, pTargetBuilding, v105, 1);
      if ( EstimatedDamageToTarget > CBaseEntity::GetHealth(pTargetBuilding) )
      {
        CDOTA_Bot::SetAttackAction(this->m_pBot, pTargetBuilding, 0);
        goto LABEL_120;
      }
    }
  }
  v60 = CDOTA_BotMode::GetUnit(this);
  v61 = CBaseEntity::GetAbsOrigin(v60);
  *&hAttackingCreeps_0.m_Size = (*(this->_vptr_CDOTA_BotMode + 11))(this);
  LODWORD(hAttackingCreeps_0.m_Memory.m_pMemory) = v62;
  if ( fsqrt(
         ((*&hAttackingCreeps_0.m_Size - v61->x) * (*&hAttackingCreeps_0.m_Size - v61->x))
       + ((*(&hAttackingCreeps_0.m_Size + 1) - v61->y) * (*(&hAttackingCreeps_0.m_Size + 1) - v61->y))) > 200.0 )
  {
    v98 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    v99 = this->m_pBot;
    LODWORD(hAttackingCreeps_0.m_Memory.m_pMemory) = v100;
    *&hAttackingCreeps_0.m_Size = v98;
    CDOTA_Bot::SetMoveAction(v99, &hAttackingCreeps_0, 0, 0);
    goto LABEL_120;
  }
  if ( this->m_pBot->m_nAttackingCreeps > 0 )
  {
    hAttackingCreeps_0.m_Size = 0;
    hAttackingCreeps_0.m_Memory.m_pMemory = 0;
    hAttackingCreeps_0.m_Memory.m_nAllocationCount = 0;
    hAttackingCreeps_0.m_Memory.m_nGrowSize = 0;
    v63 = CDOTA_BotMode::GetUnit(this);
    v64 = CDOTA_BaseNPC::GetOpposingTeamNumber(v63);
    CDOTA_Bot::FindNearbyCreeps(this->m_pBot, 1600.0, v64, 1, &hAttackingCreeps_0);
    v65 = CDOTA_BotMode::GetUnit(this);
    v66 = CBaseEntity::GetAbsOrigin(v65);
    SortEHANDLEVectorByLocation(&hAttackingCreeps_0, v66, 0);
    v67 = 0;
    v68 = 0;
    if ( hAttackingCreeps_0.m_Size > 0 )
    {
      while ( 1 )
      {
        v69 = CEntityHandle::operator CEntityInstance *(&hAttackingCreeps_0.m_Memory.m_pMemory[v67]);
        v70 = v69;
        if ( v69 != 0 && BYTE3(v69[7]._vptr_IHandleEntity) != 0 )
        {
          v71 = CDOTA_BotMode::GetUnit(this);
          if ( GetBotTargetStatusCore(v70, v71, -1.0, 0) == 0 )
            break;
        }
        ++v68;
        ++v67;
        if ( hAttackingCreeps_0.m_Size <= v68 )
          goto LABEL_78;
      }
      CDOTA_Bot::SetAttackAction(this->m_pBot, v70, 0);
      goto LABEL_135;
    }
LABEL_78:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAttackingCreeps_0);
  }
  if ( (CDOTA_BotMode::GetUnit(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
  {
    CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul>::CUtlVectorFixedGrowableCompat(&hNearbyEnemyHeroes, 0);
    v72 = this->m_pBot;
    CDOTA_Bot::UpdateNearbyUnits(v72);
    v73 = v72->m_NearbyHeroes.m_Memory.m_pMemory;
    v74 = v72;
    v75 = &v73[2 * v72->m_NearbyHeroes.m_Size];
    if ( v73 != v75 )
    {
      pTargetBuildinga = 0;
      nIncomingAlliesb = &v74->m_hUnit;
      do
      {
        v76 = CEntityHandle::operator CEntityInstance *(v73);
        if ( v76 != 0 && BYTE3(v76[7]._vptr_IHandleEntity) != 0 )
        {
          fAlliedPowera = HIBYTE(v76[7].m_CScriptComponent);
          v77 = CEntityHandle::operator CEntityInstance *(nIncomingAlliesb);
          if ( v77 == 0 || BYTE3(v77[7]._vptr_IHandleEntity) == 0 )
            v77 = 0;
          if ( fAlliedPowera != HIBYTE(v77[7].m_CScriptComponent) )
          {
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
              &hNearbyEnemyHeroes,
              v73);
            ++pTargetBuildinga;
          }
        }
        v73 += 2;
      }
      while ( v75 != v73 );
      if ( pTargetBuildinga != 0 )
      {
        v78 = CDOTA_BotMode::GetUnit(this);
        v79 = CBaseEntity::GetAbsOrigin(v78);
        SortEHANDLEVectorByLocation(&hNearbyEnemyHeroes, v79, 0);
        if ( hNearbyEnemyHeroes.m_Size != 0 )
        {
          while ( 1 )
          {
            v83 = CEntityHandle::operator CEntityInstance *(hNearbyEnemyHeroes.m_Memory.m_pMemory);
            v84 = v83;
            if ( v83 != 0 && BYTE3(v83[7]._vptr_IHandleEntity) != 0 && (v83[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              v82 = CDOTA_BotMode::GetUnit(this);
              if ( v82 != 0 )
              {
                v80 = CBaseEntity::GetAbsOrigin(v82);
                v81 = CBaseEntity::GetAbsOrigin(v84);
                fAlliedPowerb = fsqrt(
                                  (((v81->x - v80->x) * (v81->x - v80->x)) + ((v81->y - v80->y) * (v81->y - v80->y)))
                                + ((v81->z - v80->z) * (v81->z - v80->z)));
                v82 = CDOTA_BotMode::GetUnit(this);
              }
              else
              {
                fAlliedPowerb = -1.0;
              }
              if ( (CDOTA_BaseNPC::GetAttackRange(v82) + 200.0) > fAlliedPowerb )
                break;
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hNearbyEnemyHeroes, 0);
            if ( hNearbyEnemyHeroes.m_Size == 0 )
              goto LABEL_113;
          }
          CDOTA_Bot::SetAttackAction(this->m_pBot, v84, 0);
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
          goto LABEL_120;
        }
      }
    }
LABEL_113:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
  if ( v3 )
LABEL_9:
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_DefendTower::CalculateDesiredLocation  (line 272, @0x00000000027f4f30, libserver.so)  // inlines: GetAmountAlongLane, GetTeamNumber, RemapValClamped, clamp<float, float>, operator!=, operator=
// calls: CDOTA_TeamCommander::GetLeadBuildingInLane, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::GetNearbyEnemyOffensivePower, CDOTA_BotMode::GetUnit, CDOTA_TeamCommander::GetNearbyAlliedOffensivePower, CDOTA_BaseNPC::GetAttackDamage, CDOTA_TeamCommander::GetLeadBuildingInLaneTier, CDOTA_TeamCommander::CalculateLocationAlongLane, CDOTA_Bot::GetAvoidanceAmountForLocation, CDOTA_Bot_Pathing::FindNearbyValidLocation, CDOTA_TeamCommander::GetLaneFrontLocation
Vector __fastcall CDOTA_BotMode_DefendTower::CalculateDesiredLocation(CDOTA_BotMode_DefendTower *const this)
{
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // rax
  CDOTA_BaseNPC *v3; // r13
  const Vector *AbsOrigin; // rax
  float v5; // xmm1_4
  __m128i v6; // xmm0
  float v7; // r12d
  CDOTA_BaseNPC *Unit; // rax
  const Vector *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  __m128 v12; // xmm1
  __m128 v13; // xmm3
  float v14; // xmm0_4
  CDOTA_Bot *m_pBot; // r12
  CDOTA_BaseNPC *v16; // rax
  int i; // r14d
  float z; // xmm1_4
  CDOTA_Bot *v19; // r15
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v23; // rax
  vec_t v24; // xmm1_4
  float fBackOffAmounta; // [rsp+Ch] [rbp-74h]
  unsigned int fBackOffAmountb; // [rsp+Ch] [rbp-74h]
  float fBackOffAmount; // [rsp+Ch] [rbp-74h]
  Vector vLocation; // [rsp+20h] [rbp-60h] BYREF
  Vector v29; // [rsp+30h] [rbp-50h]
  Vector v30; // [rsp+40h] [rbp-40h]
  Vector v31; // 0:kr14_12.12
  Vector NearbyValidLocation; // 0:kr20_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(this->m_pBot->m_pTeamCommander, this->m_Lane);
  v3 = LeadBuildingInLane;
  if ( LeadBuildingInLane == 0 )
    goto LABEL_19;
  AbsOrigin = CBaseEntity::GetAbsOrigin(LeadBuildingInLane);
  *v6.m128i_i32 = CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(this->m_pBot->m_pTeamCommander, AbsOrigin, v5);
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  Unit = CDOTA_BotMode::GetUnit(this);
  v9 = CBaseEntity::GetAbsOrigin(Unit);
  fBackOffAmounta = CDOTA_TeamCommander::GetNearbyAlliedOffensivePower(this->m_pBot->m_pTeamCommander, v9, v10);
  *&fBackOffAmountb = (CDOTA_BaseNPC::GetAttackDamage(v3) * 3.0) + fBackOffAmounta;
  v11 = (*(this->m_pBot->_vptr_CDOTA_Bot + 5))(this->m_pBot);
  v12 = fBackOffAmountb;
  v12.m128_f32[0] = *&fBackOffAmountb * v11;
  v13 = _mm_cmplt_ss(v12, 0x3F800000u);
  v14 = -((v7 / COERCE_FLOAT(_mm_andnot_ps(v13, v12).m128_u32[0] | v13.m128_i32[0] & 0x3F800000)) - 2.0);
  if ( v14 < 0.0 )
  {
    fBackOffAmount = -1000.0;
  }
  else
  {
    fBackOffAmount = -200.0;
    if ( v14 <= 1.0 )
      fBackOffAmount = (v14 * 800.0) - 1000.0;
  }
  if ( CDOTA_TeamCommander::GetLeadBuildingInLaneTier(this->m_pBot->m_pTeamCommander, this->m_Lane) > 2 )
    fBackOffAmount = fBackOffAmount * 0.5;
  if ( CDOTA_TeamCommander::GetLeadBuildingInLaneTier(this->m_pBot->m_pTeamCommander, this->m_Lane) > 2 )
  {
    v23 = CDOTA_BotMode::GetUnit(this);
    vLocation = CDOTA_TeamCommander::GetLaneFrontLocation(
                  this->m_pBot->m_pTeamCommander,
                  v23->m_iTeamNum.m_Value,
                  this->m_Lane,
                  fBackOffAmount,
                  0.0);
  }
  else
  {
    m_pBot = this->m_pBot;
    v16 = CDOTA_BotMode::GetUnit(this);
    vLocation = CDOTA_TeamCommander::CalculateLocationAlongLane(
                  m_pBot->m_pTeamCommander,
                  v3[1].m_iCurrentThinkContext,
                  *(&v3[1].m_aThinkFunctions.m_Memory + (v16->m_iTeamNum.m_Value != 2) + 5),
                  fBackOffAmount,
                  400.0,
                  m_pBot);
  }
  for ( i = 10; i != 0; --i )
  {
    if ( CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, &vLocation, 1) <= 10 )
      break;
    v19 = this->m_pBot;
    fBackOffAmount = fBackOffAmount - 100.0;
    v20 = CDOTA_BotMode::GetUnit(this);
    v31 = CDOTA_TeamCommander::CalculateLocationAlongLane(
            v19->m_pTeamCommander,
            this->m_Lane,
            *(&v3[1].m_aThinkFunctions.m_Memory + (v20->m_iTeamNum.m_Value != 2) + 5),
            fBackOffAmount,
            400.0,
            v19);
    z = v31.z;
    v30 = v31;
    vLocation = v31;
  }
  NearbyValidLocation = CDOTA_Bot_Pathing::FindNearbyValidLocation(&this->m_pBot->m_Pathing, &vLocation, z);
  v29 = NearbyValidLocation;
  if ( NearbyValidLocation.x == vec3_invalid.x && v29.y == vec3_invalid.y && NearbyValidLocation.z == vec3_invalid.z )
  {
LABEL_19:
    *&v30.x = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    v30.z = v24;
  }
  else
  {
    *&v30.x = __PAIR64__(LODWORD(v29.y), LODWORD(NearbyValidLocation.x));
    v30.z = NearbyValidLocation.z;
  }
  *&result.x = *&v30.x;
  result.z = v30.z;
  return result;
}


// CDOTA_BotMode_DefendTower::GetDesire  (line 318, @0x0000000002800c30, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, FastSqrt, GetDefendLaneDesire, GetEHandle, GetElapsed, GetEntryIndex, GetSerialNumber, GetTeamNumber, GetTimebaseRegister, HasElement, InTargetThread, IsEnabled, IsUnitInDefendLaneList, Length2D, PLAT_CPU_TIME, RemapValClamped, Set, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator-, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, ThreadGetCurrentId, CDOTA_BotMode::GetUnit, CDOTA_Bot::FindNearbyEnemiesInMode, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_TeamCommander::GetLaneFrontLocation, CBaseEntity::GetAbsOrigin, CBaseEntity::GetHealth, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume (14 total)
// strings: "CDOTA_BotMode_DefendTower::GetDesire"
float __fastcall CDOTA_BotMode_DefendTower::GetDesire(CDOTA_BotMode_DefendTower *const this)
{
  int m_enabled; // edi
  bool v3; // r13
  unsigned __int64 v5; // r12
  ThreadId_t v6; // r13
  uint64 v7; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v9; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // cx
  DOTA_LANE m_Lane; // r15d
  CDOTA_TeamCommander *m_pTeamCommander; // r14
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const Vector *AbsOrigin; // rax
  __m128i v21; // xmm0
  float v22; // r14d
  CDOTA_BaseNPC *v23; // rax
  int Health; // eax
  float v25; // xmm1_4
  float v26; // xmm0_4
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v29; // rax
  __m128i v30; // xmm6
  float fIsGankingMultiplier; // [rsp+Ch] [rbp-54h]
  float fDistToLaneFront; // [rsp+10h] [rbp-50h]
  float fDistToLaneFronta; // [rsp+10h] [rbp-50h]
  Vector vLaneFrontLocation; // [rsp+20h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v9 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_DefendTower::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_DefendTower::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v29 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v29->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v9 + __rdtsc();
  }
  fDistToLaneFront = CDOTA_BotMode::GetScriptDesire(this);
  if ( fDistToLaneFront < 0.0 )
  {
    m_pBot = this->m_pBot;
    if ( m_pBot->m_iDifficulty == 0 )
      goto LABEL_12;
    Unit = CDOTA_BotMode::GetUnit(this);
    if ( CDOTA_Bot::FindNearbyEnemiesInMode(m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, 0, Unit) > 0 )
      goto LABEL_12;
    v13 = CDOTA_BotMode::GetUnit(this);
    vLaneFrontLocation.x = NAN;
    if ( v13 != 0 )
    {
      m_pEntity = v13->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v15 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(vLaneFrontLocation.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                      | v15 & 0x7FFF;
      }
    }
    m_Lane = this->m_Lane;
    m_pTeamCommander = this->m_pBot->m_pTeamCommander;
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
           &m_pTeamCommander->m_hProposedDefendUnits[m_Lane],
           &vLaneFrontLocation) >= 0 )
    {
      v18 = CDOTA_BotMode::GetUnit(this);
      vLaneFrontLocation = CDOTA_TeamCommander::GetLaneFrontLocation(
                             m_pTeamCommander,
                             v18->m_iTeamNum.m_Value,
                             m_Lane,
                             0.0,
                             0.0);
      v19 = CDOTA_BotMode::GetUnit(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
      fDistToLaneFronta = fsqrt(
                            ((vLaneFrontLocation.x - AbsOrigin->x) * (vLaneFrontLocation.x - AbsOrigin->x))
                          + ((vLaneFrontLocation.y - AbsOrigin->y) * (vLaneFrontLocation.y - AbsOrigin->y)));
      if ( (*(this->m_pBot->_vptr_CDOTA_Bot + 13))(this->m_pBot, 1) != 0
        || (v21 = LODWORD(fDistToLaneFronta),
            *v21.m128i_i32 = (fDistToLaneFronta - 2000.0) / 8000.0,
            *v21.m128i_i32 < 0.0) )
      {
        v22 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F800000u));
      }
      else
      {
        v22 = 0.69999999;
        if ( *v21.m128i_i32 <= 1.0 )
        {
          *v21.m128i_i32 = *v21.m128i_i32 * -0.30000001;
          v30 = v21;
          *v30.m128i_i32 = *v21.m128i_i32 + 1.0;
          v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v30));
        }
      }
      if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
        fIsGankingMultiplier = 0.69999999;
      else
        fIsGankingMultiplier = 1.0;
      v23 = CDOTA_BotMode::GetUnit(this);
      Health = CBaseEntity::GetHealth(v23);
      v25 = 1.0;
      v26 = (Health - 800.0) / -400.0;
      if ( v26 >= 0.0 )
      {
        v25 = 0.60000002;
        if ( v26 <= 1.0 )
          v25 = (-0.39999998 * v26) + 1.0;
      }
      fDistToLaneFront = v25
                       * (fIsGankingMultiplier
                        * (v22 * this->m_pBot->m_pTeamCommander->m_fDefendLaneDesire[this->m_Lane]));
    }
    else
    {
LABEL_12:
      fDistToLaneFront = 0.0;
    }
  }
  if ( v3 )
  {
    v5 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v6 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v6 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v7 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v7 - v5 + __rdtsc();
  }
  return fDistToLaneFront;
}


// CDOTA_BotMode_DefendTower::GetDebugColor  (line 348, @0x00000000027e02a0, libserver.so)
color24 __fastcall CDOTA_BotMode_DefendTower::GetDebugColor(CDOTA_BotMode_DefendTower *const this)
{
  return 5949530;
}


// CDOTA_BotMode_DefendTower_Human::CDOTA_BotMode_DefendTower_Human  (line 360, @0x00000000027f7d90, libserver.so)  // inlines: CDOTA_BotMode, CDOTA_BotMode_DefendTower, operator=
void __fastcall CDOTA_BotMode_DefendTower_Human::CDOTA_BotMode_DefendTower_Human(
        CDOTA_BotMode_DefendTower_Human *const this,
        CDOTA_Bot *pBot,
        DOTA_LANE lane,
        DOTA_BOT_MODE mode)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4

  this->m_DebugStringBuffer[0] = 0;
  this->m_pBot = pBot;
  this->m_iDesireLocationFrame = 0;
  x = vec3_origin.x;
  this->m_DebugValueBuffer[0] = 0;
  this->m_Lane = lane;
  this->m_vDesiredLocation.x = x;
  y = vec3_origin.y;
  this->m_Mode = mode;
  this->m_vDesiredLocation.y = y;
  z = vec3_origin.z;
  this->m_fDesire = 0.0;
  this->m_vDesiredLocation.z = z;
  this->_vptr_CDOTA_BotMode = off_42B7C30;
  this->m_bPingConsideredActive = 0;
}


// CDOTA_BotMode_DefendTower_Human::OnStart  (line 368, @0x00000000027e02b0, libserver.so)  // inlines: SetTargetLane
void __fastcall CDOTA_BotMode_DefendTower_Human::OnStart(CDOTA_BotMode_DefendTower_Human *const this)
{
  this->m_pBot->m_TargetLane = this->m_Lane;
}


// CDOTA_BotMode_DefendTower_Human::OnEnd  (line 375, @0x00000000027e02d0, libserver.so)  // inlines: SetTargetLane
void __fastcall CDOTA_BotMode_DefendTower_Human::OnEnd(CDOTA_BotMode_DefendTower_Human *const this)
{
  this->m_pBot->m_TargetLane = DOTA_LANE::DOTA_LANE_NONE;
}


// CDOTA_BotMode_DefendTower_Human::GetDesire  (line 382, @0x00000000027e1360, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, ToDOTABaseNPC, ToDOTABuilding
// calls: CDOTA_TeamCommander::GetLeadBuildingInLane, CDOTA_TeamCommander::HasRequestActive
float __fastcall CDOTA_BotMode_DefendTower_Human::GetDesire(CDOTA_BotMode_DefendTower_Human *const this)
{
  CDOTA_TeamCommander *m_pTeamCommander; // rdi
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  bool HasRequestActive; // al
  EHANDLE hEntity; // [rsp+0h] [rbp-20h] BYREF

  m_pTeamCommander = this->m_pBot->m_pTeamCommander;
  if ( !m_pTeamCommander->m_bLateGame )
    return 0.0;
  LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(m_pTeamCommander, this->m_Lane);
  if ( LeadBuildingInLane == 0 || !LeadBuildingInLane->m_bIsDOTANPC || (LeadBuildingInLane->m_iUnitType & 0x14) == 0 )
    return 0.0;
  m_pEntity = LeadBuildingInLane->m_pEntity;
  hEntity.m_Index = -1;
  if ( m_pEntity != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    hEntity.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
  }
  HasRequestActive = CDOTA_TeamCommander::HasRequestActive(this->m_pBot->m_pTeamCommander, 3, &hEntity, 0);
  if ( this->m_pBot->m_CurrentLane != this->m_Lane )
  {
    if ( HasRequestActive )
    {
LABEL_12:
      this->m_bPingConsideredActive = 1;
      return 0.89999998;
    }
    this->m_bPingConsideredActive = 0;
    return 0.0;
  }
  if ( HasRequestActive )
    goto LABEL_12;
  if ( !this->m_bPingConsideredActive )
    return 0.0;
  return 0.89999998;
}


