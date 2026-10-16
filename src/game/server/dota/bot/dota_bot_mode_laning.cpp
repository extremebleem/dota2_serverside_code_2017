// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_laning.cpp:50
struct sDamageEvent {
	float fTimestamp;  // +0x0
	float fAmount;  // +0x4

	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Laning::CDOTA_BotMode_Laning  (line 26, @0x000000000281db90, libserver.so)  // inlines: operator=
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode, CDOTA_Bot_Hero_Axe::CreateMode, CDOTA_Bot_Hero_Kunkka::CreateMode, CDOTA_Bot_Hero_Pudge::CreateMode, CDOTA_BotMode_Laning_Pudge::CDOTA_BotMode_Laning_Pudge
void __fastcall CDOTA_BotMode_Laning::CDOTA_BotMode_Laning(CDOTA_BotMode_Laning *const this, CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->_vptr_CDOTA_BotMode = off_42B8250;  // vptr: CDOTA_BotMode_Laning
  this->m_vForceMove = vec3_origin;
}


// CDOTA_BotMode_Laning::OnStart  (line 34, @0x00000000028163e0, libserver.so)
// calls: CDOTA_BotMode::DoScriptOnStart
void __fastcall CDOTA_BotMode_Laning::OnStart(CDOTA_BotMode_Laning *const this)
{
  CDOTA_BotMode::DoScriptOnStart(this);
}


// CDOTA_BotMode_Laning::OnEnd  (line 42, @0x0000000002816430, libserver.so)
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_Laning::OnEnd(CDOTA_BotMode_Laning *const this)
{
  CDOTA_BotMode::DoScriptOnEnd(this);
}


// DamageEventSort  (line 56, @0x000000000281dbe0, libserver.so)
int __fastcall DamageEventSort(const sDamageEvent *pEvent1, const sDamageEvent *pEvent2)
{
  return 2 * (pEvent2->fTimestamp <= pEvent1->fTimestamp) - 1;
}


// CDOTA_BotMode_Laning::Think  (line 62, @0x00000000028223b0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, FastSqrt, Get, GetAggroTarget, GetAssignedLane, GetBool, GetEHandle, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, GetTargetNPC, GetTeamNumber, IsEnabled, Length2D, NetworkStateChanged, Set, SetBotDebugData, State_Get, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator!=, operator-, operator=<int>, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CDOTA_Bot::GetAssignedLane, CDOTA_BotMode::GetUnit, CVProfile::ExitScope, CDOTA_Bot::SetMoveAction, CVProfile::EnterScope, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::GetLaneFrontAmount, CDOTA_TeamCommander::CalculateLocationAlongLane, DOTACommander (41 total)
// callers: CDOTA_BotMode_Laning_Kunkka::Think
// strings: "CDOTA_BotMode_Laning::Think"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_BotMode_Laning::Think(CDOTA_BotMode_Laning *const this)
{
  int v2; // r13d
  DOTA_LANE AssignedLane; // r12d
  CDOTA_BaseNPC *Unit; // rax
  int v5; // r12d
  CDOTA_BaseNPC *v6; // r13
  int m_enabled; // r10d
  bool v8; // r13
  DOTA_LANE v9; // r15d
  int m_Value; // r14d
  CDOTA_TeamCommander *TeamCommander; // rax
  float LaneFrontAmount; // xmm0_4
  CDOTA_Bot *m_pBot; // r14
  DOTA_LANE v14; // r15d
  CDOTA_TeamCommander *v15; // rax
  CDOTA_Bot *v16; // rdi
  int m_nAttackingCreeps; // r15d
  CDOTA_BaseNPC *v18; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v20; // cx
  CDOTA_Commander *v21; // rax
  int v22; // xmm1_4
  CDOTA_TeamCommander *v23; // rax
  DOTA_LANE RoamTargetLane; // eax
  CDOTA_Bot *v25; // rdi
  DOTA_LANE m_CurrentLane; // r14d
  double v27; // xmm0_8
  CDOTA_Bot *v28; // rdi
  int v29; // xmm1_4
  CDOTA_Bot *v30; // r15
  DOTA_LANE v31; // r14d
  CDOTA_TeamCommander *v32; // rax
  CDOTA_Bot *v33; // rdi
  CDOTA_TeamCommander *v34; // rax
  const CEntityHandle *v35; // rax
  const CBaseEntity *v36; // rax
  const CBaseEntity *v37; // r14
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v39; // rax
  const Vector *v40; // rax
  float v41; // xmm1_4
  DOTA_LANE v42; // r15d
  CDOTA_BaseNPC *v43; // rax
  int OpposingTeamNumber; // r14d
  CDOTA_TeamCommander *v45; // rax
  double v46; // xmm0_8
  int v47; // xmm1_4
  CDOTA_BaseNPC *v48; // rax
  const Vector *v49; // rax
  CDOTA_Bot *v50; // rdi
  CEntityInstance *v51; // rax
  CDOTA_BaseNPC *v52; // r14
  CEntityInstance *v53; // rax
  CDOTA_BaseNPC *v54; // r15
  CDOTA_BaseNPC *v55; // rax
  CDOTA_Bot *v56; // r14
  DOTA_LANE v57; // r15d
  CDOTA_TeamCommander *v58; // rax
  double v59; // xmm0_8
  vec_t v60; // xmm1_4
  CDOTA_BaseNPC *v61; // rax
  const Vector *v62; // rax
  CDOTA_Bot *v63; // rdi
  __int64 v64; // r14
  CDOTA_BaseNPC *v65; // r15
  CDOTA_BaseNPC *v66; // rax
  CEntityInstance *v67; // rax
  int (**vptr_CDOTA_BotMode)(...); // rax
  vec_t v69; // xmm1_4
  CDOTA_BaseNPC *v70; // rax
  const Vector *v71; // rax
  CDOTA_BotAction_UseAbility *v72; // r14
  const Vector *v73; // rax
  __int64 v74; // r14
  int v75; // r15d
  CDOTA_BaseNPC *v76; // rax
  int v77; // r14d
  CHandle<CBaseEntity> *m_pMemory; // rcx
  CEntityInstance *v79; // rax
  __int64 v80; // rax
  char v81; // r14
  CDOTA_BaseNPC *v82; // rax
  int v83; // edx
  DOTA_LANE v84; // r15d
  int v85; // r14d
  CDOTA_TeamCommander *v86; // rax
  CDOTA_BaseNPC *v87; // rax
  DOTA_LANE v88; // r14d
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // r14
  CDOTA_BaseNPC *v91; // rax
  __int64 v92; // r15
  const CBaseEntity *v93; // rax
  float AttackRange; // xmm0_4
  int v95; // eax
  double v96; // xmm0_8
  CDOTA_Bot *v97; // rdi
  vec_t v98; // xmm1_4
  int (**v99)(...); // rax
  vec_t v100; // xmm1_4
  __int64 v101; // xmm0_8
  vec_t z; // xmm1_4
  CHandle<CBaseEntity> *v103; // [rsp+28h] [rbp-1D8h]
  int nNearCreepThreshold; // [rsp+30h] [rbp-1D0h]
  CDOTA_Bot *nNearCreepThresholdb; // [rsp+30h] [rbp-1D0h]
  int nNearCreepThresholda; // [rsp+30h] [rbp-1D0h]
  int nNearCreepThresholdc; // [rsp+30h] [rbp-1D0h]
  float nNearCreepThresholdd; // [rsp+30h] [rbp-1D0h]
  const Vector *iAlliedCreepsInTowerRanged; // [rsp+40h] [rbp-1C0h]
  float iAlliedCreepsInTowerRange; // [rsp+40h] [rbp-1C0h]
  __int64 iAlliedCreepsInTowerRangea; // [rsp+40h] [rbp-1C0h]
  CDOTABaseAbility *iAlliedCreepsInTowerRangeb; // [rsp+40h] [rbp-1C0h]
  int iAlliedCreepsInTowerRangec; // [rsp+40h] [rbp-1C0h]
  float ic; // [rsp+48h] [rbp-1B8h]
  float id; // [rsp+48h] [rbp-1B8h]
  CDOTA_BaseNPC *i; // [rsp+48h] [rbp-1B8h]
  const Vector *ie; // [rsp+48h] [rbp-1B8h]
  float ia; // [rsp+48h] [rbp-1B8h]
  int ib; // [rsp+48h] [rbp-1B8h]
  float ig; // [rsp+48h] [rbp-1B8h]
  const CBaseEntity *ih; // [rsp+48h] [rbp-1B8h]
  Vector vLaneFrontLocation; // [rsp+60h] [rbp-1A0h] BYREF
  Vector vAttackLoc; // [rsp+70h] [rbp-190h]
  Vector vBackOffLoc_0; // [rsp+80h] [rbp-180h] BYREF
  __int128 vBackOffLoc; // [rsp+90h] [rbp-170h] OVERLAPPED BYREF
  int v126; // [rsp+A0h] [rbp-160h]
  int v127; // [rsp+A4h] [rbp-15Ch]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hEnemyHeroes; // [rsp+B0h] [rbp-150h] BYREF
  unsigned __int64 v129; // [rsp+1C8h] [rbp-38h]
  Vector v130; // 0:kr00_12.12
  Vector v131; // 0:kr14_12.12
  Vector v132; // 0:kr34_12.12
  Vector EstimatedAttackLocation; // 0:kr40_12.12
  Vector v134; // 0:kr60_12.12

  v129 = __readfsqword(0x28u);
  if ( !CDOTA_BotMode::DoScriptThink(this) )
  {
    v2 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
    AssignedLane = CDOTA_Bot::GetAssignedLane(this->m_pBot);
    Unit = CDOTA_BotMode::GetUnit(this);
    v5 = v2 | (32 * AssignedLane);
    v6 = Unit;
    if ( v5 != Unit->m_iBotDebugData.m_Value )
    {
      (*(Unit->_vptr_IHandleEntity + 22))(Unit, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v6->m_iBotDebugData.m_Value = v5;
    }
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v8 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_Laning::Think", 0, "Bots", 0, 4);
    if ( vec3_origin.x != this->m_vForceMove.x
      || vec3_origin.y != this->m_vForceMove.y
      || vec3_origin.z != this->m_vForceMove.z )
    {
      CDOTA_Bot::SetMoveAction(this->m_pBot, &this->m_vForceMove, 1, 1);
      goto LABEL_11;
    }
    if ( CDOTA_Bot::GetAssignedLane(this->m_pBot) == DOTA_LANE::DOTA_LANE_NONE
      || CDOTA_Bot::IsUsingAbility(this->m_pBot)
      || CDOTA_Bot::IsUsingItem(this->m_pBot) )
    {
      goto LABEL_11;
    }
    if ( *&g_pGameRules[6].m_szQuestName[28] != 5 )
    {
      if ( CDOTA_Bot::GetAssignedLane(this->m_pBot) != DOTA_LANE::DOTA_LANE_NONE )
      {
        v9 = CDOTA_Bot::GetAssignedLane(this->m_pBot);
        m_Value = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
        TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
        LaneFrontAmount = CDOTA_TeamCommander::GetLaneFrontAmount(TeamCommander, m_Value, v9, 0);
        m_pBot = this->m_pBot;
        ic = LaneFrontAmount;
        v14 = CDOTA_Bot::GetAssignedLane(m_pBot);
        v15 = CDOTA_BotMode::GetTeamCommander(this);
        v130 = CDOTA_TeamCommander::CalculateLocationAlongLane(v15, v14, ic, -300.0, 300.0, m_pBot);
        v16 = this->m_pBot;
        *&vBackOffLoc = v130;
        CDOTA_Bot::SetMoveAction(v16, &vBackOffLoc, 0, 0);
      }
      goto LABEL_11;
    }
    m_nAttackingCreeps = this->m_pBot->m_nAttackingCreeps;
    v18 = CDOTA_BotMode::GetUnit(this);
    LODWORD(vBackOffLoc) = -1;
    if ( v18 != 0 )
    {
      m_pEntity = v18->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v20 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(vBackOffLoc) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v20 & 0x7FFF;
      }
    }
    v21 = DOTACommander();
    if ( CDOTA_Commander::IsDebuggingEntity(v21, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, &vBackOffLoc) )
    {
      *&vBackOffLoc = (*(this->_vptr_CDOTA_BotMode + 11))(this);
      DWORD2(vBackOffLoc) = v22;
      NDebugOverlay::Sphere(&vBackOffLoc, COERCE_DOUBLE(1103626240), 0, 0xFFu, 0, 1, 0.2);
    }
    v23 = CDOTA_BotMode::GetTeamCommander(this);
    RoamTargetLane = CDOTA_TeamCommander::GetRoamTargetLane(v23);
    v25 = this->m_pBot;
    m_CurrentLane = v25->m_CurrentLane;
    if ( RoamTargetLane == m_CurrentLane )
    {
      v34 = CDOTA_BotMode::GetTeamCommander(this);
      i = CDOTA_TeamCommander::GetRoamingUnit(v34);
      if ( i != 0 )
      {
        v35 = i->m_pBot;
        if ( v35 != 0 )
        {
          v36 = CEntityHandle::operator CEntityInstance *(v35 + 178);
          v37 = v36;
          if ( v36 != 0 && v36->m_bIsDOTANPC )
          {
            iAlliedCreepsInTowerRanged = CBaseEntity::GetAbsOrigin(v36);
            AbsOrigin = CBaseEntity::GetAbsOrigin(i);
            LODWORD(iAlliedCreepsInTowerRanged) = fsqrt(
                                                    ((AbsOrigin->x - iAlliedCreepsInTowerRanged->x)
                                                   * (AbsOrigin->x - iAlliedCreepsInTowerRanged->x))
                                                  + ((AbsOrigin->y - iAlliedCreepsInTowerRanged->y)
                                                   * (AbsOrigin->y - iAlliedCreepsInTowerRanged->y)));
            ie = CBaseEntity::GetAbsOrigin(v37);
            v39 = CDOTA_BotMode::GetUnit(this);
            v40 = CBaseEntity::GetAbsOrigin(v39);
            v41 = v40->y - ie->y;
            if ( fsqrt(((v40->x - ie->x) * (v40->x - ie->x)) + (v41 * v41)) > (*&iAlliedCreepsInTowerRanged * 0.75) )
            {
              v73 = CBaseEntity::GetAbsOrigin(v37);
              CDOTA_Bot::SetMoveAction(this->m_pBot, v73, 0, 1);
              goto LABEL_11;
            }
          }
        }
      }
      v25 = this->m_pBot;
      m_CurrentLane = v25->m_CurrentLane;
    }
    if ( m_CurrentLane != CDOTA_Bot::GetAssignedLane(v25) )
    {
      v27 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
      v28 = this->m_pBot;
      DWORD2(vBackOffLoc) = v29;
      *&vBackOffLoc = v27;
      CDOTA_Bot::SetMoveAction(v28, &vBackOffLoc, 0, m_nAttackingCreeps > 0);
      goto LABEL_11;
    }
    v30 = this->m_pBot;
    if ( v30->m_nAttackingTowers > 0
      || v30->m_nAttackingHeroes > 0 && dota_tutorial_force_bot_defend.m_pParent->m_Value.m_nValue == 0 )
    {
      v31 = v30->m_CurrentLane;
      id = v30->m_fCurrentLaneAmount;
      v32 = CDOTA_BotMode::GetTeamCommander(this);
      v131 = CDOTA_TeamCommander::CalculateLocationAlongLane(v32, v31, id, -500.0, 150.0, v30);
      v33 = this->m_pBot;
      *&vBackOffLoc = v131;
      CDOTA_Bot::SetMoveAction(v33, &vBackOffLoc, 0, 1);
      goto LABEL_11;
    }
    if ( (v30->m_iUnitType & 0x10) != 0 )
    {
      iAlliedCreepsInTowerRange = 875.0;
      ia = 1400.0;
    }
    else
    {
      iAlliedCreepsInTowerRange = 500.0;
      ia = 800.0;
    }
    v42 = CDOTA_Bot::GetAssignedLane(v30);
    v43 = CDOTA_BotMode::GetUnit(this);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v43);
    v45 = CDOTA_BotMode::GetTeamCommander(this);
    CDOTA_TeamCommander::GetLaneFrontLocation(v45, OpposingTeamNumber, v42, 0.0, 0.0);
    v46 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    DWORD2(vBackOffLoc) = v47;
    *&vBackOffLoc = v46;
    v48 = CDOTA_BotMode::GetUnit(this);
    v49 = CBaseEntity::GetAbsOrigin(v48);
    if ( CDOTA_Bot::DoCreepAttackAndDeny(this->m_pBot, v49, ia, &vBackOffLoc, iAlliedCreepsInTowerRange, 500.0) != 0 )
    {
LABEL_11:
      if ( !v8 )
        return;
      goto LABEL_12;
    }
    v50 = this->m_pBot;
    LODWORD(vBackOffLoc) = 0;
    *(&vBackOffLoc + 1) = 0;
    v126 = 0;
    v127 = 0;
    CDOTA_Bot::GetNearbyCreeps(v50, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &vBackOffLoc, 0.0);
    if ( this->m_pBot->m_nAttackingCreeps > 0 && vBackOffLoc > 0 )
    {
      iAlliedCreepsInTowerRangea = 0;
      ib = 0;
      nNearCreepThreshold = 0;
      do
      {
        v51 = CEntityHandle::operator CEntityInstance *((*(&vBackOffLoc + 1) + iAlliedCreepsInTowerRangea));
        v52 = v51;
        if ( v51 != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 )
        {
          v53 = CEntityHandle::operator CEntityInstance *(&v51[59].m_worldGroupId);
          if ( v53 == 0 || (v54 = v53, BYTE3(v53[7]._vptr_IHandleEntity) == 0) )
            v54 = 0;
          if ( CDOTA_BotMode::GetUnit(this) == v54 )
          {
            v55 = CDOTA_BotMode::GetUnit(this);
            if ( CBaseEntity::GetDistanceToEntity(v52, v55) < 100.0 )
              nNearCreepThreshold += !CDOTA_Bot::CanKillUnit(this->m_pBot, v52);
          }
        }
        ++ib;
        iAlliedCreepsInTowerRangea += 4;
      }
      while ( vBackOffLoc > ib );
      if ( nNearCreepThreshold > 1 )
      {
        v56 = this->m_pBot;
        v57 = v56->m_CurrentLane;
        ig = v56->m_fCurrentLaneAmount;
        v58 = CDOTA_BotMode::GetTeamCommander(this);
        v132 = CDOTA_TeamCommander::CalculateLocationAlongLane(v58, v57, ig, -500.0, 150.0, v56);
        v101 = *&v132.x;
        z = v132.z;
LABEL_56:
        *&vBackOffLoc_0.x = v101;
        vBackOffLoc_0.z = z;
        CDOTA_Bot::SetMoveAction(this->m_pBot, &vBackOffLoc_0, 0, 1);
LABEL_57:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vBackOffLoc);
        goto LABEL_11;
      }
    }
    v59 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    vBackOffLoc_0.z = v60;
    *&vBackOffLoc_0.x = v59;
    v61 = CDOTA_BotMode::GetUnit(this);
    v62 = CBaseEntity::GetAbsOrigin(v61);
    if ( fsqrt(
           ((v62->x - vBackOffLoc_0.x) * (v62->x - vBackOffLoc_0.x))
         + ((v62->y - vBackOffLoc_0.y) * (v62->y - vBackOffLoc_0.y))) > 550.0 )
    {
      (*(this->_vptr_CDOTA_BotMode + 11))(this);
      goto LABEL_56;
    }
    v63 = this->m_pBot;
    if ( v63->m_iDifficulty > 2 )
    {
      iAlliedCreepsInTowerRangeb = (*(v63->_vptr_CDOTA_Bot + 11))(v63);
      if ( iAlliedCreepsInTowerRangeb != 0 )
        goto LABEL_62;
      v74 = 0;
      v75 = 0;
      while ( vBackOffLoc > v74 )
      {
        ih = CEntityHandle::operator CEntityInstance *((*(&vBackOffLoc + 1) + 4 * v74));
        v76 = CDOTA_BotMode::GetUnit(this);
        if ( CBaseEntity::GetDistanceToEntity(v76, ih) < 400.0 )
          ++v75;
        ++v74;
      }
      CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul>::CUtlVectorFixedGrowableCompat(&hEnemyHeroes, 0);
      CDOTA_Bot::GetNearbyHeroes(
        this->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
        &hEnemyHeroes,
        0.0);
      v77 = 0;
      m_pMemory = hEnemyHeroes.m_Memory.m_pMemory;
      nNearCreepThresholda = hEnemyHeroes.m_Size;
      while ( 1 )
      {
        if ( v77 >= nNearCreepThresholda )
        {
          v81 = 0;
          goto LABEL_90;
        }
        v103 = m_pMemory;
        v79 = CEntityHandle::operator CEntityInstance *(m_pMemory);
        if ( v79 != 0 && BYTE3(v79[7]._vptr_IHandleEntity) != 0 && (v79[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v80 = *&v79[45].m_worldGroupId.m_nHashCode;
          if ( v80 != 0 && (*(v80 + 168) & 0x10) != 0 )
            break;
        }
        ++v77;
        m_pMemory = v103 + 1;
      }
      v81 = 1;
LABEL_90:
      v82 = CDOTA_BotMode::GetUnit(this);
      v83 = 2;
      if ( (v82->m_iAttackCapabilities.m_Value & 2) != 0 )
        v83 = v81 == 0 ? 2 : 4;
      nNearCreepThresholdc = v83;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
      if ( nNearCreepThresholdc > v75 )
      {
LABEL_62:
        CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul>::CUtlVectorFixedGrowableCompat(&hEnemyHeroes, 0);
        CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEnemyHeroes, 0.0);
        v64 = 0;
        if ( hEnemyHeroes.m_Size > 0 )
        {
          while ( 1 )
          {
            v67 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v64]);
            if ( v67 != 0 && BYTE3(v67[7]._vptr_IHandleEntity) != 0 )
              v65 = v67;
            else
              v65 = 0;
            v66 = CDOTA_BotMode::GetUnit(this);
            if ( CDOTA_BotMode::IsBotTargetStatusValid(this, v65, v66, 253, -1.0) )
            {
              EstimatedAttackLocation = CDOTA_Bot::FindEstimatedAttackLocation(this->m_pBot, v65);
              vptr_CDOTA_BotMode = this->_vptr_CDOTA_BotMode;
              vAttackLoc = EstimatedAttackLocation;
              *&vBackOffLoc_0.x = (vptr_CDOTA_BotMode[11])(this);
              vBackOffLoc_0.z = v69;
              if ( fsqrt(
                     ((EstimatedAttackLocation.x - vBackOffLoc_0.x) * (EstimatedAttackLocation.x - vBackOffLoc_0.x))
                   + ((EstimatedAttackLocation.y - vBackOffLoc_0.y) * (EstimatedAttackLocation.y - vBackOffLoc_0.y))) < 500.0 )
              {
                v70 = CDOTA_BotMode::GetUnit(this);
                v71 = CBaseEntity::GetAbsOrigin(v70);
                if ( fsqrt(
                       ((vAttackLoc.x - v71->x) * (vAttackLoc.x - v71->x))
                     + ((vAttackLoc.y - v71->y) * (vAttackLoc.y - v71->y))) < 200.0 )
                  break;
              }
            }
            if ( hEnemyHeroes.m_Size <= ++v64 )
              goto LABEL_107;
          }
          if ( iAlliedCreepsInTowerRangeb != 0 )
          {
            nNearCreepThresholdb = this->m_pBot;
            v72 = operator new(0xC0u);
            CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(
              v72,
              nNearCreepThresholdb,
              iAlliedCreepsInTowerRangeb,
              v65);
            CDOTA_Bot::PushAction(this->m_pBot, v72);
          }
          else
          {
            CDOTA_Bot::SetAttackAction(this->m_pBot, v65, 0);
          }
          goto LABEL_74;
        }
LABEL_107:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
      }
      CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul>::CUtlVectorFixedGrowableCompat(&hEnemyHeroes, 0);
      v84 = CDOTA_Bot::GetAssignedLane(this->m_pBot);
      v85 = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
      v86 = CDOTA_BotMode::GetTeamCommander(this);
      vLaneFrontLocation = CDOTA_TeamCommander::GetLaneFrontLocation(v86, v85, v84, 0.0, 0.0);
      v87 = CDOTA_BotMode::GetUnit(this);
      FindUnitsInRadius(v87->m_iTeamNum.m_Value, &vLaneFrontLocation, 0, 1000.0, &hEnemyHeroes, 1, 2, 0, 0, 0);
      v88 = CDOTA_Bot::GetAssignedLane(this->m_pBot);
      OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
      LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(OpposingTeamCommander, v88);
      v91 = CDOTA_BotMode::GetUnit(this);
      if ( CDOTA_BotMode::IsBotTargetStatusValid(this, LeadBuildingInLane, v91, 253, -1.0) && hEnemyHeroes.m_Size > 0 )
      {
        iAlliedCreepsInTowerRangec = 0;
        v92 = 0;
        do
        {
          v93 = CEntityHandle::operator CEntityInstance *(&hEnemyHeroes.m_Memory.m_pMemory[v92]);
          nNearCreepThresholdd = CBaseEntity::GetDistanceToEntity(LeadBuildingInLane, v93);
          AttackRange = CDOTA_BaseNPC::GetAttackRange(LeadBuildingInLane);
          v95 = iAlliedCreepsInTowerRangec + 1;
          if ( AttackRange <= nNearCreepThresholdd )
            v95 = iAlliedCreepsInTowerRangec;
          iAlliedCreepsInTowerRangec = v95;
          ++v92;
        }
        while ( v92 < hEnemyHeroes.m_Size );
        if ( v95 > 2 )
        {
          v134 = CDOTA_Bot::FindEstimatedAttackLocation(this->m_pBot, LeadBuildingInLane);
          v99 = this->_vptr_CDOTA_BotMode;
          vAttackLoc = v134;
          *&vBackOffLoc_0.x = (v99[11])(this);
          vBackOffLoc_0.z = v100;
          if ( fsqrt(
                 ((vAttackLoc.x - vBackOffLoc_0.x) * (vAttackLoc.x - vBackOffLoc_0.x))
               + ((vAttackLoc.y - vBackOffLoc_0.y) * (vAttackLoc.y - vBackOffLoc_0.y))) < 500.0 )
          {
            CDOTA_Bot::SetAttackAction(this->m_pBot, LeadBuildingInLane, 0);
LABEL_74:
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
            goto LABEL_57;
          }
        }
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyHeroes);
    }
    v96 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
    v97 = this->m_pBot;
    vBackOffLoc_0.z = v98;
    *&vBackOffLoc_0.x = v96;
    CDOTA_Bot::SetMoveAction(v97, &vBackOffLoc_0, 0, 1);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vBackOffLoc);
    if ( !v8 )
      return;
LABEL_12:
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
}


// CDOTA_BotMode_Laning::CalculateDesiredLocation  (line 318, @0x00000000028202b0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Max<float>, Min<float>, NumCreepsWillingToTank, RemapValClamped, Set, clamp<float, float>, operator CEntityInstance*, operator->, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Bot::GetAssignedLane, CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::GetLaneFrontAmount, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_TeamCommander::CalculateLocationAlongLane, DOTACommander, CDOTA_Commander::IsDebuggingEntity, CDOTA_TeamCommander::GetNearbyEnemyOffensivePower, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::GetNearbyAlliedOffensivePower, FindUnitsInRadius (22 total)
// callers: CDOTA_BotMode_Laning_Pudge::CalculateDesiredLocation
// strings: "modifier_batrider_sticky_napalm"
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Laning::CalculateDesiredLocation(CDOTA_BotMode_Laning *const this)
{
  DOTA_LANE AssignedLane; // r13d
  int m_Value; // r12d
  CDOTA_TeamCommander *TeamCommander; // rax
  DOTA_LANE v5; // r13d
  CDOTA_BaseNPC *Unit; // rax
  int OpposingTeamNumber; // r12d
  CDOTA_TeamCommander *v8; // rax
  DOTA_LANE v9; // r12d
  CDOTA_TeamCommander *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v13; // cx
  CDOTA_Commander *v14; // rax
  CDOTA_TeamCommander *v15; // rax
  float v16; // xmm1_4
  __m128i v17; // xmm0
  float v18; // r12d
  CDOTA_BaseNPC *v19; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_TeamCommander *v21; // rax
  float v22; // xmm1_4
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  CDOTA_BaseNPC *v29; // rax
  __int64 v30; // r13
  int v31; // r12d
  int v32; // r15d
  const CBaseEntity *m_pInstance; // rdi
  CHandle<CBaseEntity> *v34; // rdx
  uint32 m_Index; // eax
  __int16 v36; // cx
  CEntityIdentity *v37; // rdx
  CEntityIdentity *v38; // rdx
  CDOTA_BaseNPC *v39; // rax
  __int64 v40; // r13
  int v41; // r12d
  int v42; // r14d
  const CBaseEntity *v43; // rdi
  CHandle<CBaseEntity> *v44; // rdx
  uint32 v45; // eax
  __int16 v46; // cx
  CEntityIdentity *v47; // rdx
  CEntityIdentity *v48; // rdx
  float v49; // xmm0_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  bool HasBuffThatBreaksOnDamage; // r15
  CDOTA_BaseNPC *v53; // rax
  CDOTA_Buff *ModifierByName; // rax
  bool v55; // r13
  CDOTA_Bot *m_pBot; // r12
  int m_nAttackingCreeps; // r14d
  float TankRating; // xmm0_4
  float v59; // xmm1_4
  int v60; // eax
  float v61; // xmm0_4
  float v62; // xmm6_4
  __m128 v63; // xmm0
  float v64; // r13d
  CDOTA_Bot *v65; // r12
  DOTA_LANE v66; // r14d
  CDOTA_TeamCommander *v67; // rax
  int i; // r12d
  CDOTA_Bot *v69; // r13
  DOTA_LANE v70; // r14d
  CDOTA_TeamCommander *v71; // rax
  float v74; // xmm0_4
  float fOurLaneFrontAmounta; // [rsp+34h] [rbp-2BCh]
  float fOurLaneFrontAmount; // [rsp+34h] [rbp-2BCh]
  float fAmountBack; // [rsp+3Ch] [rbp-2B4h]
  float fAmountBacka; // [rsp+3Ch] [rbp-2B4h]
  unsigned int fAmountBackc; // [rsp+3Ch] [rbp-2B4h]
  float fAmountBackb; // [rsp+3Ch] [rbp-2B4h]
  Vector vLaneFrontLocation; // [rsp+50h] [rbp-2A0h] BYREF
  Vector vDesiredLocation; // [rsp+60h] [rbp-290h] BYREF
  Vector entity; // [rsp+70h] [rbp-280h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hAlliedCreeps; // [rsp+80h] [rbp-270h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEnemyCreeps; // [rsp+1A0h] [rbp-150h] BYREF
  unsigned __int64 v86; // [rsp+2B8h] [rbp-38h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v86 = __readfsqword(0x28u);
  AssignedLane = CDOTA_Bot::GetAssignedLane(this->m_pBot);
  m_Value = CDOTA_BotMode::GetUnit(this)->m_iTeamNum.m_Value;
  TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
  fOurLaneFrontAmounta = CDOTA_TeamCommander::GetLaneFrontAmount(TeamCommander, m_Value, AssignedLane, 0);
  v5 = CDOTA_Bot::GetAssignedLane(this->m_pBot);
  Unit = CDOTA_BotMode::GetUnit(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Unit);
  v8 = CDOTA_BotMode::GetTeamCommander(this);
  fOurLaneFrontAmount = fminf(
                          fOurLaneFrontAmounta + 0.0099999998,
                          CDOTA_TeamCommander::GetLaneFrontAmount(v8, OpposingTeamNumber, v5, 0));
  v9 = CDOTA_Bot::GetAssignedLane(this->m_pBot);
  v10 = CDOTA_BotMode::GetTeamCommander(this);
  vLaneFrontLocation = CDOTA_TeamCommander::CalculateLocationAlongLane(v10, v9, fOurLaneFrontAmount, 0.0, 0.0, 0);
  v11 = CDOTA_BotMode::GetUnit(this);
  entity.x = NAN;
  if ( v11 != 0 )
  {
    m_pEntity = v11->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(entity.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
    }
  }
  v14 = DOTACommander();
  if ( CDOTA_Commander::IsDebuggingEntity(v14, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, &entity) )
    NDebugOverlay::Sphere(&vLaneFrontLocation, COERCE_DOUBLE(1103626240), 0, 0xC8u, 0, 1, 0.2);
  fAmountBack = (*(this->_vptr_CDOTA_BotMode + 16))(this);
  v15 = CDOTA_BotMode::GetTeamCommander(this);
  *v17.m128i_i32 = CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(v15, &vLaneFrontLocation, v16);
  v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  v19 = CDOTA_BotMode::GetUnit(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
  v21 = CDOTA_BotMode::GetTeamCommander(this);
  v23.m128_f32[0] = CDOTA_TeamCommander::GetNearbyAlliedOffensivePower(v21, AbsOrigin, v22);
  v24 = _mm_cmplt_ss(0x3F800000u, v23);
  LODWORD(v25) = _mm_andnot_ps(v24, 0x3F800000u).m128_u32[0] | v23.m128_i32[0] & v24.m128_i32[0];
  if ( dota_tutorial_force_bot_defend.m_pParent->m_Value.m_nValue == 0 )
  {
    v26 = v18 / v25;
    v27 = 0.0;
    v28 = (v26 - 1.0) * 0.25;
    if ( v28 >= 0.0 )
      v27 = fminf(1.0, v28);
    fAmountBack = ((700.0 - fAmountBack) * v27) + fAmountBack;
  }
  hAlliedCreeps.m_Size = 0;
  hAlliedCreeps.m_Memory.m_nAllocationCount = 64;
  hAlliedCreeps.m_Memory.m_nGrowSize = 0x80000000;
  hAlliedCreeps.m_Memory.m_pMemory = &hAlliedCreeps.m_FixedMemory;
  v29 = CDOTA_BotMode::GetUnit(this);
  FindUnitsInRadius(v29->m_iTeamNum.m_Value, &vLaneFrontLocation, 0, 700.0, &hAlliedCreeps, 1, 2, 0, 0, 0);
  if ( hAlliedCreeps.m_Size <= 0 )
  {
    v32 = 0;
  }
  else
  {
    v30 = 0;
    v31 = 0;
    v32 = 0;
    do
    {
      m_pInstance = 0;
      v34 = &hAlliedCreeps.m_Memory.m_pMemory[v30];
      m_Index = hAlliedCreeps.m_Memory.m_pMemory[v30].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v36 = v34->m_Index;
        v37 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v34->m_Index) >> 9) & 0x3F];
        if ( v37 != 0 )
        {
          v38 = &v37[v36 & 0x1FF];
          if ( v38 != 0 && m_Index == v38->m_EHandle.m_Index )
            m_pInstance = v38->m_pInstance;
        }
      }
      ++v31;
      v32 += CBaseEntity::GetHealth(m_pInstance);
      ++v30;
    }
    while ( hAlliedCreeps.m_Size > v31 );
  }
  hEnemyCreeps.m_Size = 0;
  hEnemyCreeps.m_Memory.m_nAllocationCount = 64;
  hEnemyCreeps.m_Memory.m_nGrowSize = 0x80000000;
  hEnemyCreeps.m_Memory.m_pMemory = &hEnemyCreeps.m_FixedMemory;
  v39 = CDOTA_BotMode::GetUnit(this);
  FindUnitsInRadius(v39->m_iTeamNum.m_Value, &vLaneFrontLocation, 0, 700.0, &hEnemyCreeps, 2, 2, 0, 0, 0);
  if ( hEnemyCreeps.m_Size <= 0 )
  {
    v42 = 0;
  }
  else
  {
    v40 = 0;
    v41 = 0;
    v42 = 0;
    do
    {
      v43 = 0;
      v44 = &hEnemyCreeps.m_Memory.m_pMemory[v40];
      v45 = hEnemyCreeps.m_Memory.m_pMemory[v40].m_Index;
      if ( v45 + 2 > 1 )
      {
        v46 = v44->m_Index;
        v47 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v44->m_Index) >> 9) & 0x3F];
        if ( v47 != 0 )
        {
          v48 = &v47[v46 & 0x1FF];
          if ( v48 != 0 && v45 == v48->m_EHandle.m_Index )
            v43 = v48->m_pInstance;
        }
      }
      ++v41;
      v42 += CBaseEntity::GetHealth(v43);
      ++v40;
    }
    while ( hEnemyCreeps.m_Size > v41 );
  }
  v49 = (v32 - v42);
  if ( dota_tutorial_force_bot_defend.m_pParent->m_Value.m_nValue != 0 )
  {
    v51 = -1000.0;
    v74 = (v49 - 200.0) / -1000.0;
    if ( v74 >= 0.0 )
    {
      v51 = 800.0;
      if ( v74 <= 1.0 )
        v51 = (1800.0 * v74) - 1000.0;
    }
  }
  else
  {
    v50 = (v49 - 200.0) / -1000.0;
    if ( v50 < 0.0 )
    {
      v51 = -50.0;
    }
    else
    {
      v51 = 100.0;
      if ( v50 <= 1.0 )
        v51 = (150.0 * v50) - 50.0;
    }
  }
  fAmountBacka = v51 + fAmountBack;
  HasBuffThatBreaksOnDamage = CDOTA_Bot::HasBuffThatBreaksOnDamage(this->m_pBot);
  v53 = CDOTA_BotMode::GetUnit(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v53, "modifier_batrider_sticky_napalm", 0);
  v55 = ModifierByName != 0 && (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) > 2;
  m_pBot = this->m_pBot;
  m_nAttackingCreeps = m_pBot->m_nAttackingCreeps;
  TankRating = CDOTA_Bot::GetTankRating(m_pBot);
  LOBYTE(v60) = CDOTA_Bot::NumCreepsWillingToTank(m_pBot, TankRating, v59);
  if ( m_nAttackingCreeps > v60 )
    fAmountBacka = fAmountBacka + 200.0;
  if ( v55 || (v61 = 0.0, HasBuffThatBreaksOnDamage) )
    v61 = 600.0;
  *&fAmountBackc = v61 + fAmountBacka;
  v62 = 2.0 - (*(this->m_pBot->_vptr_CDOTA_Bot + 5))(this->m_pBot);
  v63 = fAmountBackc;
  fAmountBackb = *&fAmountBackc * v62;
  v63.m128_f32[0] = fAmountBackb;
  if ( fAmountBackb >= 1000.0 )
  {
    v64 = -1000.0;
    fAmountBackb = 1000.0;
  }
  else
  {
    v64 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_xor_ps(0x80000000, v63)));
  }
  v65 = this->m_pBot;
  v66 = CDOTA_Bot::GetAssignedLane(v65);
  v67 = CDOTA_BotMode::GetTeamCommander(this);
  vDesiredLocation = CDOTA_TeamCommander::CalculateLocationAlongLane(v67, v66, fOurLaneFrontAmount, v64, 300.0, v65);
  for ( i = 10; i != 0; --i )
  {
    if ( CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, &vDesiredLocation, 1) <= 9 )
      break;
    v69 = this->m_pBot;
    fAmountBackb = fAmountBackb + 100.0;
    v70 = CDOTA_Bot::GetAssignedLane(v69);
    v71 = CDOTA_BotMode::GetTeamCommander(this);
    entity = CDOTA_TeamCommander::CalculateLocationAlongLane(v71, v70, fOurLaneFrontAmount, -fAmountBackb, 300.0, v69);
    vDesiredLocation = entity;
  }
  entity = vDesiredLocation;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreeps);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedCreeps);
  *&result.x = *&entity.x;
  result.z = entity.z;
  return result;
}


// CDOTA_BotMode_Laning::GetBaseAmountBackFromLane  (line 405, @0x000000000281edb0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRangedAttacker, IsValid, LookupEntity, Purge, RemapValClamped, RemoveAll, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BotMode::GetUnit, CDOTA_Bot::GetNearbyHeroes, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Laning::GetBaseAmountBackFromLane(CDOTA_BotMode_Laning *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  float result; // xmm0_4
  CDOTA_Bot *m_pBot; // rdi
  CHandle<CBaseEntity> *m_pMemory; // rcx
  int v6; // r9d
  CHandle<CBaseEntity> *v7; // rax
  CHandle<CBaseEntity> *v8; // r8
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rdx
  float v12; // xmm1_4
  float v13; // [rsp+Ch] [rbp-B4h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyEnemyHeroes; // [rsp+10h] [rbp-B0h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp-18h]

  v15 = __readfsqword(0x28u);
  Unit = CDOTA_BotMode::GetUnit(this);
  result = 350.0;
  if ( (Unit->m_iAttackCapabilities.m_Value & 2) != 0 )
    return result;
  m_pBot = this->m_pBot;
  hNearbyEnemyHeroes.m_Size = 0;
  hNearbyEnemyHeroes.m_Memory.m_nAllocationCount = 32;
  hNearbyEnemyHeroes.m_Memory.m_nGrowSize = 0x80000000;
  hNearbyEnemyHeroes.m_Memory.m_pMemory = &hNearbyEnemyHeroes.m_FixedMemory;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemyHeroes, 800.0);
  if ( hNearbyEnemyHeroes.m_Size <= 0 )
  {
LABEL_20:
    result = 200.0;
    goto LABEL_17;
  }
  m_pMemory = hNearbyEnemyHeroes.m_Memory.m_pMemory;
  v6 = 0;
  v7 = hNearbyEnemyHeroes.m_Memory.m_pMemory + 1;
  v8 = &hNearbyEnemyHeroes.m_Memory.m_pMemory[hNearbyEnemyHeroes.m_Size - 1 + 1];
  while ( 1 )
  {
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[m_pMemory->m_Index & 0x1FF];
        if ( v10 != 0 && m_pMemory->m_Index == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            break;
        }
      }
    }
    m_pMemory = v7;
    if ( v7 == v8 )
      goto LABEL_14;
LABEL_6:
    ++v7;
  }
  m_pMemory = v7;
  v6 -= ((*(&m_pInstance[50].m_worldGroupId + 1) & 2) == 0) - 1;
  if ( v7 != v8 )
    goto LABEL_6;
LABEL_14:
  v12 = v6 / 3.0;
  if ( v12 < 0.0 )
    goto LABEL_20;
  result = 400.0;
  if ( v12 <= 1.0 )
    result = (v12 * 200.0) + 200.0;
LABEL_17:
  hNearbyEnemyHeroes.m_Size = 0;
  if ( (hNearbyEnemyHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    v13 = result;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemyHeroes.m_Memory);
    result = v13;
    if ( (hNearbyEnemyHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemyHeroes.m_Memory);
      return v13;
    }
  }
  return result;
}


// CDOTA_BotMode_Laning::GetDebugColor  (line 434, @0x0000000002816330, libserver.so)
color24 __fastcall CDOTA_BotMode_Laning::GetDebugColor(CDOTA_BotMode_Laning *const this)
{
  return &stru_C8C8C8;
}


// CDOTA_BotMode_Laning::GetDesire  (line 445, @0x0000000002819300, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetBool, GetElapsed, GetInt, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, ThreadGetCurrentId, CDOTA_BotMode::GetTeamCommander, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CDOTA_Bot::FindNearbyEnemiesInMode, _Unwind_Resume
// strings: "CDOTA_BotMode_Laning::GetDesire"
float __fastcall CDOTA_BotMode_Laning::GetDesire(CDOTA_BotMode_Laning *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  float result; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v9; // rax
  float v10; // [rsp+Ch] [rbp-34h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Laning::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_Laning::GetDesire",
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
    result = 1.0;
    if ( dota_tutorial_force_bot_defend.m_pParent->m_Value.m_nValue == 0 )
    {
      if ( CDOTA_BotMode::GetTeamCommander(this)->m_bLateGame
        || CDOTA_Bot::FindNearbyEnemiesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 800.0, 0, 0) > 0 )
      {
        result = 0.0;
      }
      else
      {
        result = 0.25;
      }
    }
  }
  if ( v3 )
  {
    v10 = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return v10;
  }
  return result;
}


// CDOTA_BotMode_Laning_Human::GetDesire  (line 468, @0x00000000028164c0, libserver.so)
// calls: CDOTA_BotMode::GetTeamCommander
float __fastcall CDOTA_BotMode_Laning_Human::GetDesire(CDOTA_BotMode_Laning_Human *const this)
{
  CDOTA_TeamCommander *TeamCommander; // rax
  float result; // xmm0_4

  TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
  result = 0.0;
  if ( !TeamCommander->m_bLateGame )
    return 0.34999999;
  return result;
}


