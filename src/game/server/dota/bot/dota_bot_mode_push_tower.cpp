
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_PushTower::CDOTA_BotMode_PushTower  (line 22, @0x000000000281dc20, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_PushTower::CDOTA_BotMode_PushTower(
        CDOTA_BotMode_PushTower *const this,
        CDOTA_Bot *pBot,
        DOTA_LANE lane,
        DOTA_BOT_MODE mode)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->m_Lane = lane;
  this->m_Mode = mode;
  this->_vptr_CDOTA_BotMode = off_42B8390;
  this->m_hPotentialTarget.m_Index = -1;
}


// CDOTA_BotMode_PushTower::OnStart  (line 31, @0x0000000002818300, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, ToDOTABaseNPC, ToDOTABuilding, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_BotMode::DoScriptOnStart
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_PushTower::OnStart(CDOTA_BotMode_PushTower *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  float v8; // xmm0_4
  uint32 v9; // [rsp+0h] [rbp-20h]

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    m_Index = this->m_hPotentialTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPotentialTarget.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hPotentialTarget.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x14) != 0 )
          {
            m_pEntity = m_pInstance->m_pEntity;
            v9 = -1;
            if ( m_pEntity != 0 )
            {
              v7 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              v9 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
            }
            v8 = 0.0;
            this->m_pBot->m_hTarget.m_Index = v9;
            this->m_bAnnouncedPush = 0;
            if ( g_pGameRules != 0 )
              v8 = *&g_pGameRules[18].m_szQuestName[20];
            this->m_fStartPushTime = v8;
          }
        }
      }
    }
  }
}


// CDOTA_BotMode_PushTower::OnEnd  (line 48, @0x0000000002816490, libserver.so)  // inlines: SetTarget, operator=
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_PushTower::OnEnd(CDOTA_BotMode_PushTower *const this)
{
  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
    this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_PushTower::Think  (line 58, @0x0000000002823370, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CVProfScope, DOTAGameRules, FastSqrt, Get, GetAmountAlongLane, GetAttackTarget, GetBotByIndex, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetTeamNumber, GetUnit, IsEnabled, Length2D, Max<float>, Min<float>, NetworkStateChanged, NumCreepsWillingToTank, Set, SetBotDebugData, SetTarget, ToDOTABaseNPC, ToDOTABuilding, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator=<int>, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CEntityHandle::operator CEntityInstance*, GetLocalizableLaneName, CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::ChatMessageRequest, CDOTA_Bot::IsUsingAbility, CVProfile::ExitScope, CVProfile::EnterScope, CDOTA_Bot::IsUsingItem, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::CalculateAmountAlongLane (47 total)
// strings: "DOTA_Chat_Bot_PushTower", "CDOTA_BotMode_PushTower::Think", "modifier_backdoor_protection_active"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_BotMode_PushTower::Think(CDOTA_BotMode_PushTower *const this)
{
  int m_enabled; // edx
  bool v3; // r15
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v5; // r14
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  float v8; // xmm0_4
  const char *LocalizableLaneName; // r13
  CDOTA_BaseNPC *Unit; // rax
  CDOTAPlayer *v11; // r12
  CDOTA_TeamCommander *TeamCommander; // rax
  int v13; // r13d
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // r12
  const Vector *AbsOrigin; // r13
  DOTA_LANE m_iCurrentThinkContext; // r12d
  CDOTA_TeamCommander *v18; // rax
  int m_Value; // r12d
  CDOTA_TeamCommander *v20; // rax
  float LaneFrontAmount; // xmm0_4
  __int64 v22; // r12
  CDOTA_TeamCommander *v23; // rax
  CDOTA_Bot *v24; // rax
  DOTA_LANE v25; // r12d
  CDOTA_TeamCommander *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CEntityIdentity *v28; // rdx
  int v29; // eax
  __int16 v30; // cx
  CDOTA_Commander *v31; // rax
  CDOTA_Bot *m_pBot; // rdi
  CDOTA_BaseNPC *v33; // rax
  int OpposingTeamNumber; // eax
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // rax
  CEntityInstance *v37; // rax
  CDOTA_BaseNPC *v38; // rsi
  CDOTA_BaseNPC *v39; // rax
  int v40; // eax
  CDOTA_Bot *v41; // r12
  int v42; // r13d
  float TankRating; // xmm0_4
  float v44; // xmm1_4
  int v45; // eax
  CDOTA_Bot *v46; // r12
  float m_fCurrentLaneAmount; // r14d
  DOTA_LANE m_CurrentLane; // r13d
  CDOTA_TeamCommander *v49; // rax
  CDOTA_Bot *v50; // rdi
  DOTA_LANE v51; // r12d
  CDOTA_BaseNPC *v52; // rax
  int v53; // r13d
  CDOTA_TeamCommander *v54; // rax
  CDOTA_Bot *v55; // rdi
  CDOTA_BaseNPC *v56; // rax
  CEntityInstance *v57; // rax
  CDOTA_BaseNPC *v58; // r14
  CDOTA_BaseNPC *v59; // rax
  DOTA_LANE v60; // r13d
  int v61; // r12d
  CDOTA_TeamCommander *v62; // rax
  CDOTA_Bot *v63; // rdi
  CDOTA_BaseNPC *v64; // rax
  int (**vptr_CDOTA_BotMode)(...); // rax
  DOTA_BOT_MODE v66; // eax
  __int64 v67; // r12
  int EstimatedDamageToTarget; // eax
  const Vector *v69; // r12
  CDOTA_TeamCommander *v70; // rax
  float v71; // xmm1_4
  CDOTA_BaseNPC *v72; // rax
  int NearbyEnemiesInMode; // eax
  CDOTA_Bot *v74; // r12
  float v75; // xmm0_4
  int m_nAttackingCreeps; // r13d
  float v77; // xmm0_4
  float v78; // xmm1_4
  int v79; // eax
  float v80; // r14d
  DOTA_LANE v81; // r13d
  CDOTA_TeamCommander *v82; // rax
  CDOTA_BaseNPC *v83; // rax
  CDOTA_BaseNPC *v84; // rax
  DOTA_LANE v85; // r12d
  CDOTA_BaseNPC *v86; // rax
  int v87; // r13d
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_BaseNPC *v89; // rax
  CDOTA_TeamCommander *v90; // rax
  float v91; // xmm1_4
  __int64 i; // r12
  CDOTA_TeamCommander *v93; // rax
  CDOTA_Bot *v94; // r13
  CEntityInstance *v95; // rax
  const CBaseEntity *v96; // rdi
  CDOTA_BaseNPC *v97; // rax
  int v98; // eax
  DOTA_LANE v99; // r12d
  int v100; // r13d
  CDOTA_TeamCommander *v101; // rax
  float v102; // xmm0_4
  __m128i v103; // xmm6
  DOTA_LANE v104; // r13d
  float v105; // r12d
  CDOTA_TeamCommander *v106; // rax
  const Vector *v107; // rax
  __m128i v108; // xmm0
  DOTA_LANE v109; // r12d
  CDOTA_BaseNPC *v110; // rax
  int v111; // r13d
  CDOTA_TeamCommander *v112; // rax
  CDOTA_BaseNPC *v113; // rax
  DOTA_LANE v114; // r13d
  int v115; // r12d
  CDOTA_TeamCommander *v116; // rax
  CDOTA_Bot *v117; // rdi
  CDOTA_BaseNPC *v118; // rax
  const Vector *v119; // rax
  __int64 v120; // r12
  CEntityInstance *v121; // rax
  CDOTA_BaseNPC *v122; // r13
  CDOTA_Bot *v123; // rdi
  DOTA_LANE v124; // r12d
  CDOTA_TeamCommander *v125; // rax
  CDOTA_BaseNPC *v126; // rax
  CDOTA_BaseNPC *v127; // rax
  const Vector *v128; // rax
  int v129; // r12d
  CDOTA_BaseNPC *v130; // rax
  CEntityInstance *v131; // rax
  const Vector *v132; // rax
  __int64 v133; // xmm0_8
  vec_t z; // xmm1_4
  float v135; // [rsp+20h] [rbp-1F0h]
  float fEnemyPowerNearbyBuilding; // [rsp+24h] [rbp-1ECh]
  float fEnemyPowerNearbyBuildinga; // [rsp+24h] [rbp-1ECh]
  bool bOkayInTowerRange; // [rsp+2Bh] [rbp-1E5h]
  char iStatus; // [rsp+2Ch] [rbp-1E4h]
  float fEnemyFrontAmount; // [rsp+38h] [rbp-1D8h]
  CDOTA_BaseNPC *fEnemyFrontAmounta; // [rsp+38h] [rbp-1D8h]
  float fBuildingAmount; // [rsp+48h] [rbp-1C8h]
  float fBuildingAmounta; // [rsp+48h] [rbp-1C8h]
  int fBuildingAmountd; // [rsp+48h] [rbp-1C8h]
  CDOTA_BaseNPC *fBuildingAmountb; // [rsp+48h] [rbp-1C8h]
  float fBuildingAmounte; // [rsp+48h] [rbp-1C8h]
  float fBuildingAmountf; // [rsp+48h] [rbp-1C8h]
  CDOTA_BaseNPC *fBuildingAmountg; // [rsp+48h] [rbp-1C8h]
  __int64 fBuildingAmountc; // [rsp+48h] [rbp-1C8h]
  float fBackFromTowerAmount; // [rsp+5Ch] [rbp-1B4h] BYREF
  Vector vGatherLoc; // [rsp+60h] [rbp-1B0h] BYREF
  Vector vEnemyCreepFrontLocation; // [rsp+70h] [rbp-1A0h] BYREF
  __int128 vTargetLoc; // [rsp+80h] [rbp-190h] OVERLAPPED BYREF
  int v154; // [rsp+90h] [rbp-180h]
  int v155; // [rsp+94h] [rbp-17Ch]
  __int128 vAttackLocation; // [rsp+A0h] [rbp-170h] OVERLAPPED BYREF
  int v157; // [rsp+B0h] [rbp-160h]
  int v158; // [rsp+B4h] [rbp-15Ch]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEnemyCreepsAtEnemyLaneFront; // [rsp+C0h] [rbp-150h] BYREF
  unsigned __int64 v160; // [rsp+1D8h] [rbp-38h]
  Vector v161; // 0:kr14_12.12
  Vector LaneFrontLocation; // 0:kr20_12.12
  Vector v163; // 0:kr34_12.12
  Vector v164; // 0:kr40_12.12
  Vector v165; // 0:kr54_12.12
  Vector v166; // 0:kr80_12.12
  Vector EstimatedAttackLocation; // 0:kr94_12.12

  v160 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_PushTower::Think", 0, "Bots", 0, 4);
  if ( !CDOTA_BotMode::DoScriptThink(this) )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_hPotentialTarget);
    v5 = v4;
    if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 && (v4[43].m_iszPrivateVScripts.u.m_Id & 0x14) != 0 )
    {
      LODWORD(vAttackLocation) = -1;
      m_pEntity = v4->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v7 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(vAttackLocation) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                 | v7 & 0x7FFF;
      }
      v8 = 0.0;
      this->m_pBot->m_hTarget.m_Index = vAttackLocation;
      if ( g_pGameRules != 0 )
        v8 = *&g_pGameRules[18].m_szQuestName[20];
      if ( (v8 - this->m_fStartPushTime) > 5.0 && !this->m_bAnnouncedPush )
      {
        LocalizableLaneName = GetLocalizableLaneName(LODWORD(v4[97].m_iszPrivateVScripts.u.m_Id));
        Unit = CDOTA_BotMode::GetUnit(this);
        v11 = (*(Unit->_vptr_IHandleEntity + 413))(Unit);
        TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
        CDOTA_TeamCommander::ChatMessageRequest(
          TeamCommander,
          v11,
          "DOTA_Chat_Bot_PushTower",
          LocalizableLaneName,
          1,
          0);
        this->m_bAnnouncedPush = 1;
      }
      if ( !CDOTA_Bot::IsUsingAbility(this->m_pBot) && !CDOTA_Bot::IsUsingItem(this->m_pBot) )
      {
        v13 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
        v14 = CDOTA_BotMode::GetUnit(this);
        v15 = v14;
        if ( v13 != v14->m_iBotDebugData.m_Value )
        {
          (*(v14->_vptr_IHandleEntity + 22))(v14, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v15->m_iBotDebugData.m_Value = v13;
        }
        AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
        m_iCurrentThinkContext = v5[1].m_iCurrentThinkContext;
        v18 = CDOTA_BotMode::GetTeamCommander(this);
        CDOTA_TeamCommander::CalculateAmountAlongLane(v18, m_iCurrentThinkContext, AbsOrigin, &fBackFromTowerAmount, 0);
        LODWORD(AbsOrigin) = v5[1].m_iCurrentThinkContext;
        fBackFromTowerAmount = fBackFromTowerAmount - 0.1;
        m_Value = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
        v20 = CDOTA_BotMode::GetTeamCommander(this);
        LaneFrontAmount = CDOTA_TeamCommander::GetLaneFrontAmount(v20, m_Value, AbsOrigin, 0);
        v22 = 0;
        fBuildingAmount = fminf(fBackFromTowerAmount, LaneFrontAmount);
        while ( v22 < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size )
        {
          v23 = CDOTA_BotMode::GetTeamCommander(this);
          if ( v22 < v23->m_BotList.m_Size )
          {
            v24 = v23->m_BotList.m_Memory.m_pMemory[v22];
            if ( v24 != 0 && this->m_pBot != v24 && v24->m_CurrentLane == v5[1].m_iCurrentThinkContext )
              fBuildingAmount = fmaxf(fBuildingAmount, v24->m_fCurrentLaneAmount);
          }
          ++v22;
        }
        v25 = v5[1].m_iCurrentThinkContext;
        v26 = CDOTA_BotMode::GetTeamCommander(this);
        vGatherLoc = CDOTA_TeamCommander::CalculateLocationAlongLane(v26, v25, fBuildingAmount, 0.0, 0.0, 0);
        v27 = CDOTA_BotMode::GetUnit(this);
        LODWORD(vAttackLocation) = -1;
        if ( v27 != 0 )
        {
          v28 = v27->m_pEntity;
          if ( v28 != 0 )
          {
            v29 = (v28->m_EHandle.m_Index >> 15) - (v28->m_flags & 1);
            v30 = 0x7FFF;
            if ( v28->m_EHandle.m_Index != -1 )
              v30 = v28->m_EHandle.m_Index & 0x7FFF;
            LOWORD(vAttackLocation) = v30 | vAttackLocation & 0x8000;
            LODWORD(vAttackLocation) = (v29 << 15) | vAttackLocation & 0x7FFF;
          }
        }
        v31 = DOTACommander();
        if ( CDOTA_Commander::IsDebuggingEntity(v31, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, &vAttackLocation) )
          NDebugOverlay::Sphere(&vGatherLoc, COERCE_DOUBLE(1103626240), 0xFFu, 0xFFu, 0, 0, 0.2);
        m_pBot = this->m_pBot;
        if ( m_pBot->m_CurrentLane != v5[1].m_iCurrentThinkContext )
        {
          if ( m_pBot->m_nAttackingCreeps <= 0 )
          {
            CDOTA_Bot::SetMoveAction(m_pBot, &vGatherLoc, 0, 0);
            goto LABEL_17;
          }
          hEnemyCreepsAtEnemyLaneFront.m_Size = 0;
          hEnemyCreepsAtEnemyLaneFront.m_Memory.m_nAllocationCount = 64;
          hEnemyCreepsAtEnemyLaneFront.m_Memory.m_nGrowSize = 0x80000000;
          hEnemyCreepsAtEnemyLaneFront.m_Memory.m_pMemory = &hEnemyCreepsAtEnemyLaneFront.m_FixedMemory;
          v33 = CDOTA_BotMode::GetUnit(this);
          OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v33);
          CDOTA_Bot::FindNearbyCreeps(this->m_pBot, 700.0, OpposingTeamNumber, 1, &hEnemyCreepsAtEnemyLaneFront);
          CDOTA_Bot::FindNearbyCreeps(this->m_pBot, 700.0, 4, 1, &hEnemyCreepsAtEnemyLaneFront);
          v35 = CDOTA_BotMode::GetUnit(this);
          v36 = CBaseEntity::GetAbsOrigin(v35);
          SortEHANDLEVectorByLocation(&hEnemyCreepsAtEnemyLaneFront, v36, 0);
          if ( hEnemyCreepsAtEnemyLaneFront.m_Size > 0 )
          {
            v37 = CEntityHandle::operator CEntityInstance *(hEnemyCreepsAtEnemyLaneFront.m_Memory.m_pMemory);
            if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
              v38 = v37;
            else
              v38 = 0;
            CDOTA_Bot::SetAttackAction(this->m_pBot, v38, 0);
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreepsAtEnemyLaneFront);
            goto LABEL_17;
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreepsAtEnemyLaneFront);
        }
        if ( CDOTA_BaseNPC::FindModifierByName(v5, "modifier_backdoor_protection_active", 0) != 0 )
        {
          LODWORD(vAttackLocation) = 0;
          *(&vAttackLocation + 1) = 0;
          v157 = 0;
          v158 = 0;
          v39 = CDOTA_BotMode::GetUnit(this);
          v40 = CDOTA_BaseNPC::GetOpposingTeamNumber(v39);
          CDOTA_Bot::FindNearbyCreeps(this->m_pBot, 600.0, v40, 1, &vAttackLocation);
          v41 = this->m_pBot;
          v42 = vAttackLocation;
          TankRating = CDOTA_Bot::GetTankRating(v41);
          LOBYTE(v45) = CDOTA_Bot::NumCreepsWillingToTank(v41, TankRating, v44);
          if ( v42 <= v45 )
          {
            v51 = v5[1].m_iCurrentThinkContext;
            v52 = CDOTA_BotMode::GetUnit(this);
            v53 = CDOTA_BaseNPC::GetOpposingTeamNumber(v52);
            v54 = CDOTA_BotMode::GetTeamCommander(this);
            LaneFrontLocation = CDOTA_TeamCommander::GetLaneFrontLocation(v54, v53, v51, 0.0, 0.0);
            v55 = this->m_pBot;
            vEnemyCreepFrontLocation = LaneFrontLocation;
            if ( CDOTA_Bot::GetAvoidanceAmountForLocation(v55, &vEnemyCreepFrontLocation, 1) <= 4 )
            {
              CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul>::CUtlVectorFixedGrowableCompat(
                &hEnemyCreepsAtEnemyLaneFront,
                0);
              v56 = CDOTA_BotMode::GetUnit(this);
              FindUnitsInRadius(
                v56->m_iTeamNum.m_Value,
                &vEnemyCreepFrontLocation,
                0,
                600.0,
                &hEnemyCreepsAtEnemyLaneFront,
                2,
                2,
                0,
                1,
                0);
              if ( hEnemyCreepsAtEnemyLaneFront.m_Size > 0 )
              {
                v57 = CEntityHandle::operator CEntityInstance *(hEnemyCreepsAtEnemyLaneFront.m_Memory.m_pMemory);
                if ( v57 != 0 && BYTE3(v57[7]._vptr_IHandleEntity) != 0 )
                  v58 = v57;
                else
                  v58 = 0;
                v59 = CDOTA_BotMode::GetUnit(this);
                if ( CBaseEntity::GetDistanceToEntity(v59, v58) > 1000.0
                  || (v84 = CDOTA_BotMode::GetUnit(this),
                      (CDOTA_BotMode::GetBotTargetStatus(this, v58, v84, -1.0) & 8) != 0) )
                {
                  CDOTA_Bot::SetMoveAction(this->m_pBot, &vEnemyCreepFrontLocation, 0, 0);
                }
                else
                {
                  CDOTA_Bot::SetAttackAction(this->m_pBot, v58, 0);
                }
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreepsAtEnemyLaneFront);
                goto LABEL_50;
              }
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreepsAtEnemyLaneFront);
            }
            v60 = v5[1].m_iCurrentThinkContext;
            v61 = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
            v62 = CDOTA_BotMode::GetTeamCommander(this);
            v163 = CDOTA_TeamCommander::GetLaneFrontLocation(v62, v61, v60, 0.0, 300.0);
            v63 = this->m_pBot;
            *&vTargetLoc = v163;
            CDOTA_Bot::SetMoveAction(v63, &vTargetLoc, 0, 0);
          }
          else
          {
            v46 = this->m_pBot;
            m_fCurrentLaneAmount = v46->m_fCurrentLaneAmount;
            m_CurrentLane = v46->m_CurrentLane;
            v49 = CDOTA_BotMode::GetTeamCommander(this);
            v161 = CDOTA_TeamCommander::CalculateLocationAlongLane(
                     v49,
                     m_CurrentLane,
                     m_fCurrentLaneAmount,
                     -300.0,
                     150.0,
                     v46);
            v50 = this->m_pBot;
            *&vTargetLoc = v161;
            CDOTA_Bot::SetMoveAction(v50, &vTargetLoc, 0, 1);
          }
LABEL_50:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vAttackLocation);
          goto LABEL_17;
        }
        v64 = CDOTA_BotMode::GetUnit(this);
        iStatus = CDOTA_BotMode::GetBotTargetStatus(this, v5, v64, -1.0);
        vptr_CDOTA_BotMode = this->_vptr_CDOTA_BotMode;
        LODWORD(vTargetLoc) = 0;
        *(&vTargetLoc + 1) = 0;
        v154 = 0;
        v155 = 0;
        v66 = vptr_CDOTA_BotMode[2](this);
        CDOTA_Bot::FindNearbyTeammatesInMode(this->m_pBot, v66, 1000.0, &vTargetLoc, v5);
        if ( vTargetLoc <= 0 )
        {
          fBuildingAmounta = 0.0;
        }
        else
        {
          v67 = 0;
          fBuildingAmounta = 0.0;
          do
          {
            EstimatedDamageToTarget = CDOTA_Bot::GetEstimatedDamageToTarget(
                                        *(*(&vTargetLoc + 1) + 8 * v67++),
                                        1,
                                        v5,
                                        10.0,
                                        1);
            fBuildingAmounta = (EstimatedDamageToTarget / 10.0) + fBuildingAmounta;
          }
          while ( v67 < vTargetLoc );
        }
        if ( (CBaseEntity::GetHealth(v5) / fBuildingAmounta) < 2.0 )
        {
          v83 = CDOTA_BotMode::GetUnit(this);
          if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v83) > 5.0 && (iStatus & 0xFD) == 0 )
          {
LABEL_78:
            CDOTA_Bot::SetAttackAction(this->m_pBot, v5, 0);
            goto LABEL_74;
          }
        }
        v69 = CBaseEntity::GetAbsOrigin(v5);
        v70 = CDOTA_BotMode::GetTeamCommander(this);
        fEnemyPowerNearbyBuilding = CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(v70, v69, v71);
        v72 = CDOTA_BotMode::GetUnit(this);
        NearbyEnemiesInMode = CDOTA_Bot::FindNearbyEnemiesInMode(
                                this->m_pBot,
                                DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK,
                                1000.0,
                                0,
                                v72);
        v74 = this->m_pBot;
        if ( NearbyEnemiesInMode != 0 )
          goto LABEL_72;
        if ( v74->m_nAttackingTowers > 0 )
        {
          v75 = CDOTA_Bot::GetTankRating(this->m_pBot);
          v74 = this->m_pBot;
          if ( v75 < 0.75 )
            goto LABEL_72;
        }
        m_nAttackingCreeps = v74->m_nAttackingCreeps;
        if ( m_nAttackingCreeps > 0 )
        {
          v77 = CDOTA_Bot::GetTankRating(v74);
          LOBYTE(v79) = CDOTA_Bot::NumCreepsWillingToTank(v74, v77, v78);
          if ( m_nAttackingCreeps > v79 )
          {
            v74 = this->m_pBot;
LABEL_72:
            v80 = v74->m_fCurrentLaneAmount;
            v81 = v74->m_CurrentLane;
            v82 = CDOTA_BotMode::GetTeamCommander(this);
            v164 = CDOTA_TeamCommander::CalculateLocationAlongLane(v82, v81, v80, -500.0, 150.0, v74);
            v133 = *&v164.x;
            z = v164.z;
            goto LABEL_73;
          }
          v117 = this->m_pBot;
          LODWORD(vAttackLocation) = 0;
          *(&vAttackLocation + 1) = 0;
          v157 = 0;
          v158 = 0;
          if ( CDOTA_Bot::GetNearbyCreeps(
                 v117,
                 DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
                 &vAttackLocation,
                 0.0) > 0 )
          {
            v118 = CDOTA_BotMode::GetUnit(this);
            v119 = CBaseEntity::GetAbsOrigin(v118);
            SortEHANDLEVectorByLocation(&vAttackLocation, v119, 0);
            if ( vAttackLocation > 0 )
            {
              v120 = 0;
              while ( 1 )
              {
                v121 = CEntityHandle::operator CEntityInstance *((*(&vAttackLocation + 1) + 4 * v120));
                v122 = v121;
                if ( v121 != 0 && BYTE3(v121[7]._vptr_IHandleEntity) != 0 )
                {
                  fBuildingAmountg = CEntityHandle::operator CEntityInstance *(&v121[59].m_iszPrivateVScripts.u.m_pAsString + 1);
                  if ( CDOTA_BotMode::GetUnit(this) == fBuildingAmountg )
                  {
                    EstimatedAttackLocation = CDOTA_Bot::FindEstimatedAttackLocation(this->m_pBot, v122);
                    v123 = this->m_pBot;
                    vEnemyCreepFrontLocation = EstimatedAttackLocation;
                    if ( CDOTA_Bot::GetAvoidanceAmountForLocation(v123, &vEnemyCreepFrontLocation, 1) <= 9 )
                      break;
                  }
                }
                if ( vAttackLocation <= ++v120 )
                  goto LABEL_81;
              }
              CDOTA_Bot::SetAttackAction(this->m_pBot, v122, 1);
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vAttackLocation);
              goto LABEL_74;
            }
          }
LABEL_81:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vAttackLocation);
        }
        bOkayInTowerRange = CDOTA_BotMode_PushTower::WillingToBeInTowerRange(this);
        v85 = v5[1].m_iCurrentThinkContext;
        v86 = CDOTA_BotMode::GetUnit(this);
        v87 = CDOTA_BaseNPC::GetOpposingTeamNumber(v86);
        OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
        fEnemyFrontAmount = CDOTA_TeamCommander::GetLaneFrontAmount(OpposingTeamCommander, v87, v85, 0);
        v89 = CDOTA_BotMode::GetUnit(this);
        v135 = *(&v5[1].m_aThinkFunctions.m_Memory + (CDOTA_BaseNPC::GetOpposingTeamNumber(v89) != 2) + 5);
        v90 = CDOTA_BotMode::GetTeamCommander(this);
        if ( (fEnemyPowerNearbyBuilding * 0.80000001) > CDOTA_TeamCommander::GetNearbyAlliedOffensivePower(
                                                          v90,
                                                          &vGatherLoc,
                                                          v91) )
        {
          for ( i = 0; i < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size; ++i )
          {
            v93 = CDOTA_BotMode::GetTeamCommander(this);
            if ( i < v93->m_BotList.m_Size )
            {
              v94 = v93->m_BotList.m_Memory.m_pMemory[i];
              if ( v94 != 0 && this->m_pBot != v94 )
              {
                fBuildingAmountd = (*(v94->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v94->m_pActiveBotMode);
                if ( fBuildingAmountd == (*(this->_vptr_CDOTA_BotMode + 2))(this) )
                {
                  fBuildingAmountb = CDOTA_BotMode::GetUnit(this);
                  v95 = CEntityHandle::operator CEntityInstance *(&v94->m_hUnit);
                  if ( v95 != 0 && BYTE3(v95[7]._vptr_IHandleEntity) != 0 )
                    v96 = v95;
                  else
                    v96 = 0;
                  if ( CBaseEntity::GetDistanceToEntity(v96, fBuildingAmountb) > 800.0 )
                  {
                    v97 = CDOTA_BotMode::GetUnit(this);
                    v98 = CDOTA_BaseNPC::GetOpposingTeamNumber(v97);
                    v99 = v5[1].m_iCurrentThinkContext;
                    fBuildingAmounte = *(&v5[1].m_aThinkFunctions.m_Memory + (v98 != 2) + 5) + 0.1;
                    v100 = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
                    v101 = CDOTA_BotMode::GetOpposingTeamCommander(this);
                    v102 = CDOTA_TeamCommander::GetLaneFrontAmount(v101, v100, v99, 0);
                    v103 = LODWORD(fBuildingAmounte);
                    v104 = v5[1].m_iCurrentThinkContext;
                    *v103.m128i_i32 = fmaxf(fBuildingAmounte, v102);
                    v105 = COERCE_FLOAT(_mm_cvtsi128_si32(v103));
                    v106 = CDOTA_BotMode::GetOpposingTeamCommander(this);
                    v165 = CDOTA_TeamCommander::CalculateLocationAlongLane(v106, v104, v105, 0.0, 300.0, 0);
                    v133 = *&v165.x;
                    z = v165.z;
                    goto LABEL_73;
                  }
                }
              }
            }
          }
        }
        if ( fEnemyFrontAmount > v135 )
        {
          v124 = v5[1].m_iCurrentThinkContext;
          v125 = CDOTA_BotMode::GetOpposingTeamCommander(this);
          vEnemyCreepFrontLocation = CDOTA_TeamCommander::CalculateLocationAlongLane(
                                       v125,
                                       v124,
                                       fEnemyFrontAmount,
                                       0.0,
                                       0.0,
                                       0);
          CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul>::CUtlVectorFixedGrowableCompat(
            &hEnemyCreepsAtEnemyLaneFront,
            0);
          v126 = CDOTA_BotMode::GetUnit(this);
          FindUnitsInRadius(
            v126->m_iTeamNum.m_Value,
            &vEnemyCreepFrontLocation,
            0,
            800.0,
            &hEnemyCreepsAtEnemyLaneFront,
            2,
            2,
            0,
            0,
            0);
          v127 = CDOTA_BotMode::GetUnit(this);
          v128 = CBaseEntity::GetAbsOrigin(v127);
          SortEHANDLEVectorByLocation(&hEnemyCreepsAtEnemyLaneFront, v128, 0);
          fBuildingAmountc = 0;
          v129 = 0;
          if ( hEnemyCreepsAtEnemyLaneFront.m_Size > 0 )
          {
            while ( 1 )
            {
              v131 = CEntityHandle::operator CEntityInstance *(&hEnemyCreepsAtEnemyLaneFront.m_Memory.m_pMemory[fBuildingAmountc]);
              if ( v131 != 0 && BYTE3(v131[7]._vptr_IHandleEntity) != 0 )
                fEnemyFrontAmounta = v131;
              else
                fEnemyFrontAmounta = 0;
              v130 = CDOTA_BotMode::GetUnit(this);
              if ( (CDOTA_BotMode::GetBotTargetStatus(this, fEnemyFrontAmounta, v130, -1.0) & 0xFD) == 0 )
              {
                *&vAttackLocation = CDOTA_Bot::FindEstimatedAttackLocation(this->m_pBot, fEnemyFrontAmounta);
                if ( bOkayInTowerRange )
                  break;
                v132 = CBaseEntity::GetAbsOrigin(v5);
                fEnemyPowerNearbyBuildinga = fsqrt(
                                               ((*&vAttackLocation - v132->x) * (*&vAttackLocation - v132->x))
                                             + ((*(&vAttackLocation + 1) - v132->y) * (*(&vAttackLocation + 1) - v132->y)));
                if ( fEnemyPowerNearbyBuildinga > CDOTA_BaseNPC::GetAttackRange(v5) )
                  break;
              }
              ++fBuildingAmountc;
              if ( hEnemyCreepsAtEnemyLaneFront.m_Size <= ++v129 )
                goto LABEL_122;
            }
            CDOTA_Bot::SetAttackAction(this->m_pBot, fEnemyFrontAmounta, 0);
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreepsAtEnemyLaneFront);
            goto LABEL_74;
          }
LABEL_122:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreepsAtEnemyLaneFront);
        }
        if ( (iStatus & 0xFD) == 0 )
        {
          *&vAttackLocation = CDOTA_Bot::FindEstimatedAttackLocation(this->m_pBot, v5);
          if ( bOkayInTowerRange )
            goto LABEL_78;
          v107 = CBaseEntity::GetAbsOrigin(v5);
          fBuildingAmountf = ((*&vAttackLocation - v107->x) * (*&vAttackLocation - v107->x))
                           + ((*(&vAttackLocation + 1) - v107->y) * (*(&vAttackLocation + 1) - v107->y));
          v108 = LODWORD(fBuildingAmountf);
          *v108.m128i_i32 = fsqrt(fBuildingAmountf);
          if ( COERCE_FLOAT(_mm_cvtsi128_si32(v108)) > CDOTA_BaseNPC::GetAttackRange(v5) )
            goto LABEL_78;
        }
        v109 = v5[1].m_iCurrentThinkContext;
        v110 = CDOTA_BotMode::GetUnit(this);
        v111 = CDOTA_BaseNPC::GetOpposingTeamNumber(v110);
        v112 = CDOTA_BotMode::GetTeamCommander(this);
        vEnemyCreepFrontLocation = CDOTA_TeamCommander::GetLaneFrontLocation(v112, v111, v109, 0.0, 0.0);
        v113 = CDOTA_BotMode::GetUnit(this);
        CDOTA_BaseNPC::GetOpposingTeamNumber(v113);
        v114 = this->m_pBot->m_CurrentLane;
        v115 = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
        v116 = CDOTA_BotMode::GetTeamCommander(this);
        v166 = CDOTA_TeamCommander::GetLaneFrontLocation(v116, v115, v114, 0.0, 300.0);
        v133 = *&v166.x;
        z = v166.z;
LABEL_73:
        *&vAttackLocation = v133;
        *(&vAttackLocation + 2) = z;
        CDOTA_Bot::SetMoveAction(this->m_pBot, &vAttackLocation, 0, 1);
LABEL_74:
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&vTargetLoc);
      }
    }
  }
LABEL_17:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_PushTower::CalculateDesiredLocation  (line 363, @0x00000000028163f0, libserver.so)
// calls: CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_BotMode_PushTower::CalculateDesiredLocation(CDOTA_BotMode_PushTower *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Unit = CDOTA_BotMode::GetUnit(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_BotMode_PushTower::GetDesire  (line 372, @0x00000000028245f0, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DOTAGameRules, EnterScope, FastSqrt, GetEHandle, GetElapsed, GetEntryIndex, GetSerialNumber, GetTeamNumber, GetTimebaseRegister, HasElement, InTargetThread, IsEnabled, IsUnitInPushLaneList, Length2D, PLAT_CPU_TIME, RemapValClamped, Set, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, ThreadGetCurrentId, CDOTA_BotMode::GetOpposingTeamCommander, CDOTA_TeamCommander::GetLeadBuildingInLane, CDOTA_BotMode::GetTeamCommander, CDOTA_BotMode::GetUnit, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_TeamCommander::GetLaneFrontLocation, CBaseEntity::GetAbsOrigin, RemapValClamped, CDOTAGamerules::GetGameModeEntity (17 total)
// strings: "CDOTA_BotMode_PushTower::GetDesire"
float __fastcall CDOTA_BotMode_PushTower::GetDesire(CDOTA_BotMode_PushTower *const this)
{
  int m_enabled; // esi
  bool v3; // r13
  float result; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CDOTA_Bot *m_pBot; // rax
  DOTA_LANE m_Lane; // r14d
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // r14
  CDOTA_BaseNPC *Unit; // rax
  CEntityIdentity *v13; // rdx
  int v14; // eax
  __int16 v15; // cx
  DOTA_LANE v16; // r15d
  CDOTA_TeamCommander *v17; // rax
  int m_Value; // r15d
  CDOTA_TeamCommander *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *AbsOrigin; // rax
  __m128i v22; // xmm0
  float v23; // r15d
  float v24; // xmm5_4
  CDOTABaseGameMode *GameModeEntity; // rax
  float v26; // xmm5_4
  CDOTA_BaseNPC *v27; // rax
  int Health; // eax
  float v29; // xmm5_4
  float v30; // xmm0_4
  CEntityIdentity *v31; // rdx
  int v32; // eax
  __int16 v33; // cx
  __int64 v34; // r14
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v36; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v38; // cx
  CDOTA_TeamCommander *TeamCommander; // rax
  float fDistanceMultipliera; // [rsp+Ch] [rbp-44h]
  DOTA_LANE fDistanceMultiplierb; // [rsp+Ch] [rbp-44h]
  float fDistanceMultiplierc; // [rsp+Ch] [rbp-44h]
  float fDistanceMultiplier; // [rsp+Ch] [rbp-44h]
  Vector vLaneFrontLocation; // [rsp+10h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_PushTower::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_PushTower::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v36 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v36->m_BudgetFlags |= 4u;
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
    m_pBot = this->m_pBot;
    this->m_hPotentialTarget.m_Index = -1;
    if ( m_pBot->m_iDifficulty == 0 )
      goto LABEL_9;
    m_Lane = this->m_Lane;
    OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
    LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(OpposingTeamCommander, m_Lane);
    if ( LeadBuildingInLane == 0 )
      goto LABEL_9;
    if ( !CDOTA_BotMode::GetTeamCommander(this)->m_bLateGame )
    {
      vLaneFrontLocation.x = NAN;
      m_pEntity = LeadBuildingInLane->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v38 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v38 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(vLaneFrontLocation.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                      | v38 & 0x7FFF;
      }
      TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
      if ( !CDOTA_TeamCommander::HasRequestActive(TeamCommander, 4, &vLaneFrontLocation, 0) )
        goto LABEL_9;
    }
    Unit = CDOTA_BotMode::GetUnit(this);
    vLaneFrontLocation.x = NAN;
    if ( Unit != 0 )
    {
      v13 = Unit->m_pEntity;
      if ( v13 != 0 )
      {
        v14 = (v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1);
        v15 = 0x7FFF;
        if ( v13->m_EHandle.m_Index != -1 )
          v15 = v13->m_EHandle.m_Index & 0x7FFF;
        LOWORD(vLaneFrontLocation.x) = v15 | LOWORD(vLaneFrontLocation.x) & 0x8000;
        LODWORD(vLaneFrontLocation.x) = (v14 << 15) | LOWORD(vLaneFrontLocation.x) & 0x7FFF;
      }
    }
    v16 = this->m_Lane;
    v17 = CDOTA_BotMode::GetTeamCommander(this);
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
           &v17->m_hProposedPushUnits[v16],
           &vLaneFrontLocation) >= 0 )
    {
      fDistanceMultiplierb = this->m_Lane;
      m_Value = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
      v19 = CDOTA_BotMode::GetTeamCommander(this);
      vLaneFrontLocation = CDOTA_TeamCommander::GetLaneFrontLocation(v19, m_Value, fDistanceMultiplierb, 0.0, 0.0);
      v20 = CDOTA_BotMode::GetUnit(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v20);
      fDistanceMultiplierc = ((vLaneFrontLocation.x - AbsOrigin->x) * (vLaneFrontLocation.x - AbsOrigin->x))
                           + ((vLaneFrontLocation.y - AbsOrigin->y) * (vLaneFrontLocation.y - AbsOrigin->y));
      v22 = LODWORD(fDistanceMultiplierc);
      *v22.m128i_i32 = fsqrt(fDistanceMultiplierc);
      v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
      fDistanceMultiplier = RemapValClamped(*v22.m128i_i32, 2000.0, 8000.0, 1.0, 0.5, v24);
      if ( g_pGameRules != 0 )
      {
        GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
        if ( GameModeEntity != 0 && GameModeEntity->m_bBotsAlwaysPushWithHuman )
          fDistanceMultiplier = RemapValClamped(v23, 2000.0, 12000.0, 1.0, 0.66000003, v26);
      }
      v27 = CDOTA_BotMode::GetUnit(this);
      Health = CBaseEntity::GetHealth(v27);
      v30 = RemapValClamped(Health, 800.0, 400.0, 1.0, 0.60000002, v29);
      v31 = LeadBuildingInLane->m_pEntity;
      if ( v31 != 0 )
      {
        v32 = (v31->m_EHandle.m_Index >> 15) - (v31->m_flags & 1);
        v33 = 0x7FFF;
        if ( v31->m_EHandle.m_Index != -1 )
          v33 = v31->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hPotentialTarget.m_Index) = v33 | this->m_hPotentialTarget.m_Index & 0x8000;
        this->m_hPotentialTarget.m_Index = (v32 << 15) | this->m_hPotentialTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hPotentialTarget.m_Index = -1;
      }
      v34 = this->m_Lane;
      result = (fDistanceMultiplier * CDOTA_BotMode::GetTeamCommander(this)->m_fPushLaneDesire[v34]) * v30;
    }
    else
    {
LABEL_9:
      result = 0.0;
    }
  }
  if ( v3 )
  {
    fDistanceMultipliera = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return fDistanceMultipliera;
  }
  return result;
}


// CDOTA_BotMode_PushTower::WillingToBeInTowerRange  (line 420, @0x000000000281efd0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FastSqrt, Get, GetBotByIndex, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, GetTeamNumber, GetUnit, IndexToIdentity, Length, LookupEntity, ToDOTABaseNPC, ToDOTABuilding, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetAttackRange, CBaseEntity::GetAbsOrigin, CDOTA_BotMode::GetUnit, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_Bot::GetTankRating, CDOTA_BotMode::GetTeamCommander, CEntityHandle::operator CEntityInstance*, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_BotMode_PushTower::Think
// strings: "modifier_backdoor_protection_active"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BotMode_PushTower::WillingToBeInTowerRange(CDOTA_BotMode_PushTower *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  char v5; // bl
  CEntityInstance *m_pInstance; // r13
  __m128i v8; // xmm0
  float v9; // r15d
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *Unit; // rax
  __int64 v12; // r14
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_Bot *v14; // r15
  CEntityInstance *v15; // rax
  const Vector *v16; // r15
  const Vector *v17; // rax
  const Vector *v18; // r15
  const Vector *v19; // rax
  float v20; // [rsp+1Ch] [rbp-174h]
  int v21; // [rsp+28h] [rbp-168h]
  CBaseEntity *v22; // [rsp+28h] [rbp-168h]
  CDOTA_BaseNPC *v23; // [rsp+28h] [rbp-168h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hAlliedCreepsNearTower; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v25; // [rsp+158h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  m_Index = this->m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
  if ( v3 == 0 )
    return 0;
  v4 = &v3[m_Index & 0x1FF];
  if ( v4 == 0 )
    return 0;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 0;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 0;
  v5 = BYTE3(m_pInstance[7]._vptr_IHandleEntity);
  if ( v5 == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x14) == 0
    || CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_backdoor_protection_active", 0) != 0 )
  {
    return 0;
  }
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 4) != 0 )
  {
    hAlliedCreepsNearTower.m_Size = 0;
    hAlliedCreepsNearTower.m_Memory.m_nAllocationCount = 64;
    hAlliedCreepsNearTower.m_Memory.m_nGrowSize = 0x80000000;
    hAlliedCreepsNearTower.m_Memory.m_pMemory = &hAlliedCreepsNearTower.m_FixedMemory;
    *v8.m128i_i32 = CDOTA_BaseNPC::GetAttackRange(m_pInstance);
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    Unit = CDOTA_BotMode::GetUnit(this);
    FindUnitsInRadius(Unit->m_iTeamNum.m_Value, AbsOrigin, m_pInstance, v9, &hAlliedCreepsNearTower, 1, 2, 0, 0, 0);
    if ( hAlliedCreepsNearTower.m_Size <= 1 )
    {
      v12 = 0;
      if ( CDOTA_Bot::GetTankRating(this->m_pBot) <= 0.75 )
      {
        while ( v12 < CDOTA_BotMode::GetTeamCommander(this)->m_BotList.m_Size )
        {
          TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
          if ( v12 < TeamCommander->m_BotList.m_Size )
          {
            v14 = TeamCommander->m_BotList.m_Memory.m_pMemory[v12];
            if ( v14 != 0 && this->m_pBot != v14 )
            {
              v21 = (*(v14->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v14->m_pActiveBotMode);
              if ( v21 == (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode)
                && (CDOTA_Bot::GetTankRating(v14) > 0.75 || v14->m_bHuman) )
              {
                v15 = CEntityHandle::operator CEntityInstance *(&v14->m_hUnit);
                if ( v15 == 0 || (v22 = v15, BYTE3(v15[7]._vptr_IHandleEntity) == 0) )
                  v22 = 0;
                v16 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v17 = CBaseEntity::GetAbsOrigin(v22);
                v20 = fsqrt(
                        (((v17->x - v16->x) * (v17->x - v16->x)) + ((v17->y - v16->y) * (v17->y - v16->y)))
                      + ((v17->z - v16->z) * (v17->z - v16->z)));
                v23 = CDOTA_BotMode::GetUnit(this);
                v18 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v19 = CBaseEntity::GetAbsOrigin(v23);
                if ( v20 > fsqrt(
                             (((v19->x - v18->x) * (v19->x - v18->x)) + ((v19->y - v18->y) * (v19->y - v18->y)))
                           + ((v19->z - v18->z) * (v19->z - v18->z))) )
                  goto LABEL_13;
              }
            }
          }
          ++v12;
        }
        v5 = 0;
      }
    }
LABEL_13:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedCreepsNearTower);
  }
  return v5;
}


// CDOTA_BotMode_PushTower::GetDebugColor  (line 463, @0x0000000002816340, libserver.so)
color24 __fastcall CDOTA_BotMode_PushTower::GetDebugColor(CDOTA_BotMode_PushTower *const this)
{
  return 5921480;
}


// CDOTA_BotMode_PushTower_Human::CDOTA_BotMode_PushTower_Human  (line 474, @0x000000000281dc70, libserver.so)  // inlines: CDOTA_BotMode_PushTower, CEntityHandle, CHandle
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_PushTower_Human::CDOTA_BotMode_PushTower_Human(
        CDOTA_BotMode_PushTower_Human *const this,
        CDOTA_Bot *pBot,
        DOTA_LANE lane,
        DOTA_BOT_MODE mode)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->m_Lane = lane;
  this->m_Mode = mode;
  this->m_hPotentialTarget.m_Index = -1;
  this->_vptr_CDOTA_BotMode = off_42B8430;
  this->m_hTarget.m_Index = -1;
  this->m_bPingConsideredActive = 0;
  this->m_fLastDamageToBuilding = 0.0;
}


// CDOTA_BotMode_PushTower_Human::OnStart  (line 482, @0x0000000002817d50, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_PushTower_Human::OnStart(CDOTA_BotMode_PushTower_Human *const this)
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


// CDOTA_BotMode_PushTower_Human::OnEnd  (line 489, @0x0000000002816350, libserver.so)  // inlines: SetTarget, operator=
void __fastcall CDOTA_BotMode_PushTower_Human::OnEnd(CDOTA_BotMode_PushTower_Human *const this)
{
  this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_PushTower_Human::OnDidDamage  (line 496, @0x0000000002817450, libserver.so)  // inlines: DOTAGameRules, GetGameTime, ToDOTABaseNPC, ToDOTABuilding
void __fastcall CDOTA_BotMode_PushTower_Human::OnDidDamage(
        CDOTA_BotMode_PushTower_Human *const this,
        CDOTA_BaseNPC *pTarget,
        CDOTABaseAbility *pInflictor,
        int iAmount)
{
  float v4; // xmm0_4

  if ( pTarget != 0
    && pTarget->m_bIsDOTANPC
    && (pTarget->m_iUnitType & 0x14) != 0
    && pTarget[1].m_iCurrentThinkContext == this->m_Lane )
  {
    v4 = 0.0;
    if ( g_pGameRules != 0 )
      v4 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_fLastDamageToBuilding = v4;
  }
}


// CDOTA_BotMode_PushTower_Human::OnAttacked  (line 508, @0x0000000002817e30, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABuilding, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_PushTower_Human::OnAttacked(
        CDOTA_BotMode_PushTower_Human *const this,
        const CDOTA_AttackRecord *pRecord)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  float v6; // xmm0_4

  m_Index = pRecord->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pRecord->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[pRecord->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x14) != 0
          && LODWORD(m_pInstance[97].m_iszPrivateVScripts.u.m_Id) == this->m_Lane )
        {
          v6 = 0.0;
          if ( g_pGameRules != 0 )
            v6 = *&g_pGameRules[18].m_szQuestName[20];
          this->m_fLastDamageToBuilding = v6;
        }
      }
    }
  }
}


// CDOTA_BotMode_PushTower_Human::GetDesire  (line 519, @0x00000000028176e0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, Set, ToDOTABaseNPC, ToDOTABuilding, operator=
// calls: CDOTA_BotMode::GetOpposingTeamCommander, CDOTA_TeamCommander::GetLeadBuildingInLane, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::HasRequestActive, CDOTAGamerules::GetGameModeEntity, CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::IsEntityInRange
float __fastcall CDOTA_BotMode_PushTower_Human::GetDesire(CDOTA_BotMode_PushTower_Human *const this)
{
  DOTA_LANE m_Lane; // r12d
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // rax
  CDOTA_BaseNPC *v5; // r12
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  CDOTA_TeamCommander *TeamCommander; // rax
  bool HasRequestActive; // al
  CDOTABaseGameMode *GameModeEntity; // rax
  CDOTA_BaseNPC *Unit; // rax
  float v12; // xmm1_4
  float v13; // xmm0_4
  CEntityIdentity *v14; // rax
  int v15; // edx
  __int16 v16; // cx
  EHANDLE hEntity; // [rsp+0h] [rbp-30h] BYREF

  m_Lane = this->m_Lane;
  OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
  LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(OpposingTeamCommander, m_Lane);
  v5 = LeadBuildingInLane;
  if ( LeadBuildingInLane == 0 || !LeadBuildingInLane->m_bIsDOTANPC || (LeadBuildingInLane->m_iUnitType & 0x14) == 0 )
    return 0.0;
  m_pEntity = LeadBuildingInLane->m_pEntity;
  hEntity.m_Index = -1;
  if ( m_pEntity != 0 )
  {
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    hEntity.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
  }
  TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
  HasRequestActive = CDOTA_TeamCommander::HasRequestActive(TeamCommander, 4, &hEntity, 0);
  if ( this->m_pBot->m_CurrentLane == this->m_Lane )
  {
    if ( !HasRequestActive )
      goto LABEL_11;
  }
  else if ( !HasRequestActive )
  {
    this->m_bPingConsideredActive = 0;
    goto LABEL_11;
  }
  this->m_bPingConsideredActive = 1;
LABEL_11:
  if ( g_pGameRules == 0
    || (GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules)) == 0
    || !GameModeEntity->m_bBotsAlwaysPushWithHuman
    || (Unit = CDOTA_BotMode::GetUnit(this), !CDOTA_BaseNPC::IsEntityInRange(v5, Unit, 1000.0, v12)) )
  {
    if ( this->m_bPingConsideredActive )
      goto LABEL_19;
    v13 = 0.0;
    if ( g_pGameRules != 0 )
      v13 = *&g_pGameRules[18].m_szQuestName[20];
    if ( (v13 - this->m_fLastDamageToBuilding) < 5.0 )
      goto LABEL_19;
    return 0.0;
  }
  this->m_bPingConsideredActive = 1;
LABEL_19:
  v14 = v5->m_pEntity;
  if ( v14 != 0 )
  {
    v15 = (v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1);
    if ( v14->m_EHandle.m_Index == -1 )
      v16 = 0x7FFF;
    else
      v16 = v14->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v16 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v15 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    return 0.89999998;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
    return 0.89999998;
  }
}


