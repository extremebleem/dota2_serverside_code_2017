
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Roam::CDOTA_BotMode_Roam  (line 20, @0x000000000281dde0, libserver.so)  // inlines: CEntityHandle, CHandle, ~CDOTA_BotMode
// calls: CDOTA_BotMode::CDOTA_BotMode, CountdownTimer::CountdownTimer, _Unwind_Resume
// callers: CDOTA_Bot::CreateMode, CDOTA_Bot_Hero_Bloodseeker::CreateMode, CDOTA_Bot_Hero_BountyHunter::CreateMode, CDOTA_Bot_Hero_Riki::CreateMode
void __fastcall CDOTA_BotMode_Roam::CDOTA_BotMode_Roam(CDOTA_BotMode_Roam *const this, CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->m_hRoamTarget.m_Index = -1;
  this->_vptr_CDOTA_BotMode = off_42B8610;
  CountdownTimer::CountdownTimer(&this->m_LeftVisibilityTimer);
  this->m_fLastStartedRoamTime = 0.0;
  this->m_bAnnouncedRoam = 0;
  this->m_bLeftVisibility = 0;
}


// CDOTA_BotMode_Roam::OnStart  (line 31, @0x0000000002818530, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Invalidate, IsValid, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<float>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTAGamerules::GetDOTATime, CDOTA_BotMode::GetUnit, CDOTA_TeamCommander::SetRoamingUnit
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Roam::OnStart(CDOTA_BotMode_Roam *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  float DOTATime; // xmm0_4
  CEntityInstance *m_pInstance; // rax
  __int64 v7; // rax
  DOTA_LANE v8; // r12d
  CDOTA_BaseNPC *Unit; // rax

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    m_Index = this->m_hRoamTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRoamTarget.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hRoamTarget.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v7 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
            if ( v7 != 0 )
            {
              v8 = *(v7 + 184);
              Unit = CDOTA_BotMode::GetUnit(this);
              CDOTA_TeamCommander::SetRoamingUnit(this->m_pBot->m_pTeamCommander, Unit, v8);
            }
          }
        }
      }
    }
    if ( this->m_LeftVisibilityTimer.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_LeftVisibilityTimer._vptr_CountdownTimer + 2))(
        &this->m_LeftVisibilityTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        -1.0);
      this->m_LeftVisibilityTimer.m_timestamp.m_Value = -1.0;
    }
    this->m_bLeftVisibility = 0;
    DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    this->m_bAnnouncedRoam = 0;
    this->m_fLastStartedRoamTime = DOTATime;
  }
}


// CDOTA_BotMode_Roam::OnEnd  (line 51, @0x00000000028166e0, libserver.so)  // inlines: Set, SetTarget, operator=
// calls: CDOTA_BotMode::DoScriptOnEnd, CDOTA_TeamCommander::SetRoamingUnit, CDOTA_Bot::GetAssignedLane, GetLocalizableLaneName, CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::ChatMessageRequest
// strings: "DOTA_Chat_Bot_RoamLane"
void __fastcall CDOTA_BotMode_Roam::OnEnd(CDOTA_BotMode_Roam *const this)
{
  DOTA_LANE AssignedLane; // eax
  const char *LocalizableLaneName; // r13
  CDOTA_BaseNPC *Unit; // rax
  CDOTAPlayer *v5; // r12
  CDOTA_TeamCommander *TeamCommander; // rax

  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
  {
    CDOTA_TeamCommander::SetRoamingUnit(this->m_pBot->m_pTeamCommander, 0, DOTA_LANE::DOTA_LANE_NONE);
    this->m_pBot->m_hTarget.m_Index = -1;
    if ( this->m_bAnnouncedRoam )
    {
      AssignedLane = CDOTA_Bot::GetAssignedLane(this->m_pBot);
      LocalizableLaneName = GetLocalizableLaneName(AssignedLane);
      Unit = CDOTA_BotMode::GetUnit(this);
      v5 = (*(Unit->_vptr_IHandleEntity + 413))(Unit);
      TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
      CDOTA_TeamCommander::ChatMessageRequest(TeamCommander, v5, "DOTA_Chat_Bot_RoamLane", LocalizableLaneName, 1, 1);
    }
    this->m_hRoamTarget.m_Index = -1;
  }
}


// CDOTA_BotMode_Roam::Think  (line 69, @0x0000000002819a70, libserver.so)  // inlines: CEntityHandle, CHandle, CVProfScope, FastSqrt, Get, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnitName, IndexToIdentity, IsEnabled, IsValid, Length, LookupEntity, NetworkStateChanged, Set, SetBotDebugData, SetTarget, String, ToCStr, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator=<int>, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, CVProfile::EnterScope, CDOTAGamerules::GetDOTATime, CDOTA_BotMode::GetUnit, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::ChatMessageRequest, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::CreateHumanRequest, CDOTA_Bot::SetMoveAction (14 total)
// callers: CDOTA_BotMode_Roam_BountyHunter::Think
// strings: "CDOTA_BotMode_Roam::Think", "DOTA_Chat_Bot_Roam"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Roam::Think(CDOTA_BotMode_Roam *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const CBaseEntity *m_pInstance; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v9; // cx
  DOTA_LANE m_Id; // r15d
  const char *LocalizableLaneName; // rax
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_BaseNPC *v14; // r15
  const Vector *AbsOrigin; // r15
  const Vector *v16; // rax
  CEntityIdentity *v17; // rax
  __int16 v18; // cx
  CDOTA_TeamCommander *v19; // rax
  double v20; // xmm0_8
  CDOTA_Bot *m_pBot; // rdi
  vec_t v22; // xmm1_4
  CDOTAPlayer *pPlayer; // [rsp+0h] [rbp-50h]
  char *pszTarget; // [rsp+8h] [rbp-48h]
  int pszTargeta; // [rsp+8h] [rbp-48h]
  CDOTA_BaseNPC *pszTargetb; // [rsp+8h] [rbp-48h]
  Vector hEntity[5]; // [rsp+10h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_Roam::Think", 0, "Bots", 0, 4);
  if ( !CDOTA_BotMode::DoScriptThink(this) )
  {
    m_Index = this->m_hRoamTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRoamTarget.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hRoamTarget.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && m_pInstance[2].m_OnUser1.m_pConnections != 0 )
          {
            hEntity[0].x = NAN;
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v9 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LODWORD(hEntity[0].x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                    | v9 & 0x7FFF;
            }
            this->m_pBot->m_hTarget.m_Index = LODWORD(hEntity[0].x);
            m_Id = m_pInstance[2].m_OnUser1.m_pConnections[3].m_valueOverride.u.m_Id;
            if ( (CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) - this->m_fLastStartedRoamTime) <= 5.0
              || this->m_bAnnouncedRoam )
            {
              goto LABEL_25;
            }
            if ( m_Id != DOTA_LANE::DOTA_LANE_NONE )
            {
              LocalizableLaneName = GetLocalizableLaneName(m_Id);
            }
            else
            {
              pszTarget = "";
              if ( m_pInstance[4].m_pfnUse.__delta == 0 )
              {
LABEL_24:
                Unit = CDOTA_BotMode::GetUnit(this);
                pPlayer = (*(Unit->_vptr_IHandleEntity + 413))(Unit);
                TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
                CDOTA_TeamCommander::ChatMessageRequest(TeamCommander, pPlayer, "DOTA_Chat_Bot_Roam", pszTarget, 1, 1);
                this->m_bAnnouncedRoam = 1;
LABEL_25:
                if ( !CDOTA_Bot::IsUsingAbility(this->m_pBot) && !CDOTA_Bot::IsUsingItem(this->m_pBot) )
                {
                  pszTargeta = (32 * m_Id) | (*(this->_vptr_CDOTA_BotMode + 2))(this);
                  v14 = CDOTA_BotMode::GetUnit(this);
                  if ( pszTargeta != v14->m_iBotDebugData.m_Value )
                  {
                    (*(v14->_vptr_IHandleEntity + 22))(v14, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                    v14->m_iBotDebugData.m_Value = pszTargeta;
                  }
                  pszTargetb = CDOTA_BotMode::GetUnit(this);
                  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                  v16 = CBaseEntity::GetAbsOrigin(pszTargetb);
                  LODWORD(pszTargetb) = fsqrt(
                                          (((v16->x - AbsOrigin->x) * (v16->x - AbsOrigin->x))
                                         + ((v16->y - AbsOrigin->y) * (v16->y - AbsOrigin->y)))
                                        + ((v16->z - AbsOrigin->z) * (v16->z - AbsOrigin->z)));
                  if ( (*(this->m_pBot->_vptr_CDOTA_Bot + 18))(this->m_pBot) > *&pszTargetb )
                  {
                    hEntity[0].x = NAN;
                    v17 = m_pInstance->m_pEntity;
                    if ( v17 != 0 )
                    {
                      v18 = 0x7FFF;
                      if ( v17->m_EHandle.m_Index != -1 )
                        v18 = v17->m_EHandle.m_Index & 0x7FFF;
                      LODWORD(hEntity[0].x) = (((v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1)) << 15)
                                            | v18 & 0x7FFF;
                    }
                    v19 = CDOTA_BotMode::GetTeamCommander(this);
                    CDOTA_TeamCommander::CreateHumanRequest(v19, 1, hEntity, 0, 5.0);
                  }
                  v20 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
                  m_pBot = this->m_pBot;
                  *&hEntity[0].x = v20;
                  hEntity[0].z = v22;
                  CDOTA_Bot::SetMoveAction(m_pBot, hEntity, 0, 0);
                }
                goto LABEL_8;
              }
              LocalizableLaneName = m_pInstance[4].m_pfnUse.__delta;
            }
            pszTarget = LocalizableLaneName;
            goto LABEL_24;
          }
        }
      }
    }
  }
LABEL_8:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_Roam::CalculateDesiredLocation  (line 113, @0x0000000002818660, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetLastSeenLocation, GetTarget, GetTargetNPC, IndexToIdentity, IsElapsed, IsValid, Length, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator-, operator=<float>
// calls: CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetOpposingTeamNumber, CBaseModelEntity::CanBeSeenByTeam, CountdownTimer::Now, CDOTA_BotMode::GetOpposingTeamCommander, CDOTA_TeamCommander::CalculateLocationAlongLane, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::GetBaseLocation, CBaseEntity::GetAbsOrigin
// callers: CDOTA_BotMode_Roam_BountyHunter::CalculateDesiredLocation
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Roam::CalculateDesiredLocation(CDOTA_BotMode_Roam *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *v5; // rax
  int OpposingTeamNumber; // r12d
  CDOTA_BaseNPC *v7; // rax
  CDOTA_Bot *v8; // r12
  CConcreteEntityList *v9; // rsi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  __int64 v12; // rcx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // rax
  __int64 v15; // rax
  DOTA_LANE m_CurrentLane; // r13d
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  float v18; // xmm2_4
  CDOTA_Bot *v19; // rdx
  float v20; // xmm1_4
  CDOTA_Bot *m_pBot; // r12
  CDOTA_TeamCommander *TeamCommander; // rax
  vec_t v25; // xmm1_4
  float v26; // xmm0_4
  CEntityIdentity *v27; // rsi
  const CBaseEntity *m_pInstance; // r12
  CEntityIdentity *v29; // rdx
  CDOTA_BaseNPC *Unit; // r13
  const Vector *AbsOrigin; // r12
  const Vector *v32; // rax
  float v33; // xmm1_4
  float fAmountAlongLane; // [rsp+Ch] [rbp-54h]
  float fAmountAlongLanea; // [rsp+Ch] [rbp-54h]
  Vector BaseLocation; // 0:^30.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = this->m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
        if ( v27 != 0 )
        {
          m_pInstance = 0;
          v29 = &v27[m_Index & 0x1FF];
          if ( v29 != 0 && m_Index == v29->m_EHandle.m_Index )
            m_pInstance = v29->m_pInstance;
        }
        else
        {
          m_pInstance = 0;
        }
        Unit = CDOTA_BotMode::GetUnit(this);
        if ( m_pInstance == 0 )
          goto LABEL_9;
        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
        v32 = CBaseEntity::GetAbsOrigin(Unit);
        v33 = v32->z - AbsOrigin->z;
        if ( fsqrt(
               (((v32->x - AbsOrigin->x) * (v32->x - AbsOrigin->x)) + ((v32->y - AbsOrigin->y) * (v32->y - AbsOrigin->y)))
             + (v33 * v33)) < 800.0 )
          goto LABEL_9;
      }
    }
  }
  if ( !this->m_bLeftVisibility )
  {
    v5 = CDOTA_BotMode::GetUnit(this);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v5);
    v7 = CDOTA_BotMode::GetUnit(this);
    if ( CBaseModelEntity::CanBeSeenByTeam(v7, OpposingTeamNumber) )
    {
      m_pBot = this->m_pBot;
      m_CurrentLane = m_pBot->m_CurrentLane;
      if ( m_CurrentLane == DOTA_LANE::DOTA_LANE_NONE )
      {
        TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
        BaseLocation = CDOTA_TeamCommander::GetBaseLocation(TeamCommander);
        goto LABEL_21;
      }
      fAmountAlongLane = m_pBot->m_fCurrentLaneAmount;
      OpposingTeamCommander = CDOTA_BotMode::GetTeamCommander(this);
      v19 = m_pBot;
      v18 = 300.0;
      v20 = -1000.0;
      goto LABEL_19;
    }
    if ( this->m_LeftVisibilityTimer.m_timestamp.m_Value <= 0.0 )
    {
      v26 = CountdownTimer::Now(&this->m_LeftVisibilityTimer) + 2.0;
      if ( v26 != this->m_LeftVisibilityTimer.m_timestamp.m_Value )
      {
        fAmountAlongLanea = v26;
        (*(this->m_LeftVisibilityTimer._vptr_CountdownTimer + 2))(
          &this->m_LeftVisibilityTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        this->m_LeftVisibilityTimer.m_timestamp.m_Value = fAmountAlongLanea;
      }
      if ( this->m_LeftVisibilityTimer.m_duration.m_Value != 2.0 )
      {
        (*(this->m_LeftVisibilityTimer._vptr_CountdownTimer + 2))(
          &this->m_LeftVisibilityTimer,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        this->m_LeftVisibilityTimer.m_duration.m_Value = 2.0;
      }
      goto LABEL_10;
    }
    if ( CountdownTimer::Now(&this->m_LeftVisibilityTimer) >= this->m_LeftVisibilityTimer.m_timestamp.m_Value )
LABEL_9:
      this->m_bLeftVisibility = 1;
  }
LABEL_10:
  v8 = this->m_pBot;
  v9 = CEntityHandle::gm_pEntityList;
  v10 = v8->m_hTarget.m_Index;
  if ( v10 + 2 <= 1
    || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v12 = v8->m_hTarget.m_Index & 0x1FF, v9 = (8 * v12), (v13 = &v11[v12]) == 0)
    || v10 != v13->m_EHandle.m_Index
    || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
    || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
  {
    v14 = 0;
  }
  v15 = *&v14[45].m_worldGroupId.m_nHashCode;
  if ( v15 == 0 )
  {
    *&BaseLocation.x = (*(this->_vptr_CDOTA_BotMode + 11))(this, v9);
    BaseLocation.z = v25;
    goto LABEL_21;
  }
  m_CurrentLane = *(v15 + 184);
  if ( m_CurrentLane == DOTA_LANE::DOTA_LANE_NONE || m_CurrentLane == v8->m_CurrentLane )
  {
    BaseLocation = *(v15 + 740);
    goto LABEL_21;
  }
  fAmountAlongLane = *(v15 + 204);
  OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
  v18 = 200.0;
  v19 = v8;
  v20 = -600.0;
LABEL_19:
  BaseLocation = CDOTA_TeamCommander::CalculateLocationAlongLane(
                   OpposingTeamCommander,
                   m_CurrentLane,
                   fAmountAlongLane,
                   v20,
                   v18,
                   v19);
LABEL_21:
  *&result.x = *&BaseLocation.x;
  result.z = BaseLocation.z;
  return result;
}


// CDOTA_BotMode_Roam::GetDesire  (line 184, @0x000000000281af90, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, Get, GetElapsed, GetInstance, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, RemapValClamped, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, ThreadGetCurrentId, CDOTA_BotMode::GetTeamCommander, CDOTA_TeamCommander::GetRoamTargetLane, CEntityHandle::operator CEntityInstance*, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CDOTA_BotMode::GetUnit, CBaseEntity::GetDistanceToEntity, RemapValClamped, _Unwind_Resume
// callers: CDOTA_BotMode_Roam_Bloodseeker::GetDesire, CDOTA_BotMode_Roam_BountyHunter::GetDesire, CDOTA_BotMode_Roam_Riki::GetDesire
// strings: "CDOTA_BotMode_Roam::GetDesire"
float __fastcall CDOTA_BotMode_Roam::GetDesire(CDOTA_BotMode_Roam *const this)
{
  int m_enabled; // r10d
  bool v3; // r13
  float result; // xmm0_4
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CDOTA_Bot *m_pBot; // rax
  CDOTA_TeamCommander *TeamCommander; // rax
  DOTA_LANE RoamTargetLane; // eax
  CDOTA_Bot *v11; // rdx
  CEntityInstance *v12; // rax
  const CBaseEntity *v13; // r14
  int v14; // r15d
  int (**vptr_CDOTA_BotMode)(...); // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v17; // rax
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v19; // rax
  __m128i v20; // xmm0
  float v21; // r15d
  float v22; // xmm1_4
  float v23; // xmm5_4
  __m128 v24; // xmm0
  __m128 v25; // xmm4
  float v26; // xmm0_4
  float fExistingTargetRoamDesireb; // [rsp+8h] [rbp-48h]
  float fExistingTargetRoamDesire; // [rsp+8h] [rbp-48h]
  double fExistingTargetRoamDesirec; // [rsp+8h] [rbp-48h]
  float fExistingTargetRoamDesirea; // [rsp+8h] [rbp-48h]
  EHANDLE hBestRoamTarget; // [rsp+10h] [rbp-40h] BYREF
  float fBestDesire[13]; // [rsp+1Ch] [rbp-34h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Roam::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_Roam::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v17 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v17->m_BudgetFlags |= 4u;
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
    if ( m_pBot->m_iDifficulty > 1u && m_pBot->m_nAttackingCreeps <= 0 && m_pBot->m_nAttackingHeroes <= 0 )
    {
      TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
      RoamTargetLane = CDOTA_TeamCommander::GetRoamTargetLane(TeamCommander);
      v11 = this->m_pBot;
      if ( RoamTargetLane != v11->m_CurrentLane
        && (*(v11->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v11->m_pActiveBotMode) != 2 )
      {
        v12 = CEntityHandle::operator CEntityInstance *(&this->m_hRoamTarget);
        v13 = v12;
        if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 || (v12[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          v13 = 0;
        if ( (*(this->_vptr_CDOTA_BotMode + 18))(this, v13) == 0 )
        {
          this->m_hRoamTarget.m_Index = -1;
          v13 = 0;
        }
        if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 3 )
        {
          if ( v13 == 0 )
            goto LABEL_23;
          goto LABEL_22;
        }
        if ( v13 == 0 )
          goto LABEL_23;
        Unit = CDOTA_BotMode::GetUnit(this);
        fExistingTargetRoamDesirec = CBaseEntity::GetDistanceToEntity(Unit, v13);
        if ( (*(this->m_pBot->_vptr_CDOTA_Bot + 18))(this->m_pBot) * 0.8 <= fExistingTargetRoamDesirec )
        {
LABEL_22:
          v14 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
          if ( v14 == (*(this->_vptr_CDOTA_BotMode + 2))(this) )
          {
            v19 = CDOTA_BotMode::GetUnit(this);
            *v20.m128i_i32 = CBaseEntity::GetDistanceToEntity(v19, v13);
            v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
            fExistingTargetRoamDesirea = (*(this->_vptr_CDOTA_BotMode + 16))(this, v13);
            v22 = (*(this->m_pBot->_vptr_CDOTA_Bot + 19))(this->m_pBot);
            if ( v22 == 1500.0 )
            {
              v24.m128_f32[0] = v21 - 1500.0;
              v25 = _mm_cmple_ss(0LL, v24);
              LODWORD(v26) = _mm_andnot_ps(v25, 0x3F800000u).m128_u32[0] | v25.m128_i32[0] & 0x3FC00000;
            }
            else
            {
              v26 = RemapValClamped(v21, v22, 1500.0, 1.0, 1.5, v23);
            }
            fExistingTargetRoamDesire = v26 * fExistingTargetRoamDesirea;
LABEL_24:
            vptr_CDOTA_BotMode = this->_vptr_CDOTA_BotMode;
            fBestDesire[0] = 0.0;
            hBestRoamTarget.m_Index = -1;
            vptr_CDOTA_BotMode[17](this, &hBestRoamTarget, fBestDesire);
            result = fBestDesire[0];
            if ( fBestDesire[0] <= fExistingTargetRoamDesire )
            {
              if ( fExistingTargetRoamDesire == 0.0 )
                this->m_hRoamTarget.m_Index = -1;
              result = fExistingTargetRoamDesire;
            }
            else
            {
              this->m_hRoamTarget = hBestRoamTarget;
            }
            goto LABEL_3;
          }
LABEL_23:
          fExistingTargetRoamDesire = 0.0;
          goto LABEL_24;
        }
      }
    }
    result = 0.0;
  }
LABEL_3:
  if ( v3 )
  {
    fExistingTargetRoamDesireb = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return fExistingTargetRoamDesireb;
  }
  return result;
}


// CDOTA_BotMode_Roam::GetRoamScore  (line 256, @0x0000000002825c30, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Clamp<float>, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Get, GetAmountAlongLane, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, GrowMemory, IndexToIdentity, IsValid, Length, LookupEntity, Max<float>, Purge, RemapValClamped, RemoveAll, Set, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BotMode::GetUnit, CBaseEntity::GetDistanceToEntity, CDOTA_BotMode::GetOpposingTeamCommander, CDOTA_TeamCommander::GetLeadBuildingInLane, CDOTA_Bot::GetNearbyHeroes, CBaseEntity::GetHealth, CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_Bot::GetStunDuration, CDOTA_Bot::HasSilence, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Bot::FindNearbyTeammatesInMode, CBaseEntity::GetAbsOrigin (25 total)
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Roam::GetRoamScore(CDOTA_BotMode_Roam *const this, CDOTA_BaseNPC_Hero *pTargetHero)
{
  CDOTA_Bot *m_pBot; // r14
  CDOTA_BaseNPC *Unit; // rax
  float DistanceToEntity; // xmm0_4
  DOTA_LANE m_CurrentLane; // ebx
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  __int64 v9; // r12
  int v10; // ebx
  bool HasSilence; // r13
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // rax
  CDOTA_Bot *v18; // r14
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v22; // cx
  __int64 v23; // rbx
  int i; // r14d
  const CBaseEntity *v25; // r15
  const Vector *AbsOrigin; // r12
  const Vector *v27; // rax
  const CEntityHandle **v28; // r12
  CEntityInstance *v29; // rax
  CEntityIdentity *v30; // rdx
  int v31; // eax
  __int16 v32; // cx
  CEntityInstance *v33; // rax
  CEntityInstance *v34; // rax
  CEntityIdentity *v35; // rdx
  int v36; // eax
  __int16 v37; // cx
  __int64 v38; // r12
  int v39; // eax
  CHandle<CBaseEntity> *v40; // rax
  int v41; // r15d
  float v42; // xmm0_4
  CDOTA_BaseNPC *v44; // rax
  CEntityIdentity *v45; // rdx
  int v46; // eax
  __int16 v47; // cx
  __int64 m_Size; // rbx
  int v49; // eax
  CHandle<CBaseEntity> *v50; // rax
  __int64 v51; // rbx
  int v52; // ecx
  CEntityInstance *v53; // rax
  const CBaseEntity *v54; // r12
  CDOTA_Bot *v55; // r14
  int v56; // eax
  bool v57; // al
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm0_4
  float v61; // xmm4_4
  float v62; // xmm0_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  float v65; // xmm3_4
  float v66; // xmm1_4
  __m128 v67; // xmm0
  __m128 v68; // xmm3
  float v69; // xmm0_4
  __m128 v70; // xmm1
  __m128 v71; // xmm3
  float v72; // xmm1_4
  float v73; // xmm0_4
  float TankRating; // xmm0_4
  float v75; // xmm1_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm2_4
  float v79; // xmm0_4
  bool HasBlink; // al
  float v81; // xmm0_4
  int v82; // eax
  __m128 v83; // xmm1
  float v84; // xmm0_4
  bool v85; // al
  float v86; // xmm0_4
  float v87; // xmm0_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  float v90; // xmm1_4
  CDOTA_Bot *v91; // rdi
  int m_iUnitType; // eax
  float v93; // xmm1_4
  float v94; // xmm0_4
  float v95; // xmm1_4
  float v96; // xmm0_4
  DOTA_LANE AssignedLane; // eax
  float v98; // xmm1_4
  float v99; // xmm1_4
  float v100; // xmm0_4
  float v101; // xmm1_4
  float v102; // xmm0_4
  int Health; // [rsp+Ch] [rbp-204h]
  CDOTA_BaseNPC_Building *pLeadBuilding; // [rsp+10h] [rbp-200h]
  CDOTA_Bot *v105; // [rsp+28h] [rbp-1E8h]
  bool bAllyHasSilence; // [rsp+37h] [rbp-1D9h]
  float fAllyHealth; // [rsp+40h] [rbp-1D0h]
  float fOutgoingStuns; // [rsp+48h] [rbp-1C8h]
  float fDistToTarget; // [rsp+50h] [rbp-1C0h]
  float fBonus; // [rsp+54h] [rbp-1BCh]
  float fBonusa; // [rsp+54h] [rbp-1BCh]
  float pTargetHerob; // [rsp+58h] [rbp-1B8h]
  float pTargetHeroc; // [rsp+58h] [rbp-1B8h]
  float pTargetHerod; // [rsp+58h] [rbp-1B8h]
  float pTargetHeroe; // [rsp+58h] [rbp-1B8h]
  float fIncomingStuns; // [rsp+68h] [rbp-1A8h]
  float fIncomingStunsa; // [rsp+68h] [rbp-1A8h]
  float fIncomingDamage; // [rsp+6Ch] [rbp-1A4h]
  float fIncomingDamageb; // [rsp+6Ch] [rbp-1A4h]
  float fIncomingDamagea; // [rsp+6Ch] [rbp-1A4h]
  CHandle<CBaseEntity> v123; // [rsp+70h] [rbp-1A0h] BYREF
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > RoamingBots; // [rsp+80h] [rbp-190h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyEnemies; // [rsp+A0h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hParticipatingAllies; // [rsp+140h] [rbp-D0h] BYREF
  unsigned __int64 v127; // [rsp+1D8h] [rbp-38h]

  v127 = __readfsqword(0x28u);
  m_pBot = pTargetHero->m_pBot;
  v105 = m_pBot;
  if ( m_pBot == 0 )
    return 0.0;
  Unit = CDOTA_BotMode::GetUnit(this);
  DistanceToEntity = CBaseEntity::GetDistanceToEntity(Unit, pTargetHero);
  m_CurrentLane = m_pBot->m_CurrentLane;
  fDistToTarget = DistanceToEntity;
  OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
  pLeadBuilding = CDOTA_TeamCommander::GetLeadBuildingInLane(OpposingTeamCommander, m_CurrentLane);
  hNearbyEnemies.m_Size = 0;
  hNearbyEnemies.m_Memory.m_nAllocationCount = 32;
  hNearbyEnemies.m_Memory.m_nGrowSize = 0x80000000;
  hNearbyEnemies.m_Memory.m_pMemory = &hNearbyEnemies.m_FixedMemory;
  CDOTA_Bot::GetNearbyHeroes(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY, &hNearbyEnemies, 1000.0);
  Health = CBaseEntity::GetHealth(pTargetHero);
  if ( hNearbyEnemies.m_Size <= 0 )
  {
    HasSilence = 0;
    fIncomingStuns = 0.0;
    fIncomingDamage = 0.0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    HasSilence = 0;
    fIncomingStuns = 0.0;
    fIncomingDamage = 0.0;
    do
    {
      while ( 1 )
      {
        v12 = &hNearbyEnemies.m_Memory.m_pMemory[v9];
        m_Index = hNearbyEnemies.m_Memory.m_pMemory[v9].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14 & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                v18 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
                if ( v18 != 0 )
                {
                  v19 = CDOTA_BotMode::GetUnit(this);
                  fIncomingDamage = CDOTA_Bot::GetEstimatedDamageToTarget(v18, 0, v19, 7.0, 7) + fIncomingDamage;
                  fIncomingStuns = CDOTA_Bot::GetStunDuration(v18, 1) + fIncomingStuns;
                  if ( !HasSilence )
                    break;
                }
              }
            }
          }
        }
        ++v10;
        ++v9;
        if ( hNearbyEnemies.m_Size <= v10 )
          goto LABEL_14;
      }
      ++v10;
      ++v9;
      HasSilence = CDOTA_Bot::HasSilence(v18, 1);
    }
    while ( hNearbyEnemies.m_Size > v10 );
  }
LABEL_14:
  hParticipatingAllies.m_Size = 0;
  hParticipatingAllies.m_Memory.m_nAllocationCount = 32;
  hParticipatingAllies.m_Memory.m_nGrowSize = 0x80000000;
  hParticipatingAllies.m_Memory.m_pMemory = &hParticipatingAllies.m_FixedMemory;
  CDOTA_Bot::GetNearbyHeroes(v105, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hParticipatingAllies, 1600.0);
  v20 = CDOTA_BotMode::GetUnit(this);
  RoamingBots.m_Size = -1;
  if ( v20 != 0 )
  {
    m_pEntity = v20->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v22 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      RoamingBots.m_Size = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v22 & 0x7FFF;
    }
  }
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
         &hParticipatingAllies,
         &RoamingBots) == -1 )
  {
    v44 = CDOTA_BotMode::GetUnit(this);
    RoamingBots.m_Size = -1;
    if ( v44 != 0 )
    {
      v45 = v44->m_pEntity;
      if ( v45 != 0 )
      {
        v46 = (v45->m_EHandle.m_Index >> 15) - (v45->m_flags & 1);
        v47 = 0x7FFF;
        if ( v45->m_EHandle.m_Index != -1 )
          v47 = v45->m_EHandle.m_Index & 0x7FFF;
        LOWORD(RoamingBots.m_Size) = v47 | RoamingBots.m_Size & 0x8000;
        RoamingBots.m_Size = (v46 << 15) | RoamingBots.m_Size & 0x7FFF;
      }
    }
    m_Size = hParticipatingAllies.m_Size;
    v49 = hParticipatingAllies.m_Size;
    if ( hParticipatingAllies.m_Size == hParticipatingAllies.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hParticipatingAllies.m_Memory, 1);
      v49 = hParticipatingAllies.m_Size;
    }
    hParticipatingAllies.m_Size = v49 + 1;
    v50 = &hParticipatingAllies.m_Memory.m_pMemory[m_Size];
    if ( v50 != 0 )
      v50->m_Index = RoamingBots.m_Size;
  }
  RoamingBots.m_Size = 0;
  RoamingBots.m_Memory.m_pMemory = 0;
  RoamingBots.m_Memory.m_nAllocationCount = 0;
  RoamingBots.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::FindNearbyTeammatesInMode(this->m_pBot, DOTA_BOT_MODE::DOTA_BOT_MODE_ROAM, -1.0, &RoamingBots, pTargetHero);
  v23 = 0;
  for ( i = 0; RoamingBots.m_Size > i; ++v23 )
  {
    v33 = CEntityHandle::operator CEntityInstance *(&RoamingBots.m_Memory.m_pMemory[v23]->m_hUnit);
    if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
      v25 = v33;
    else
      v25 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTargetHero);
    v27 = CBaseEntity::GetAbsOrigin(v25);
    if ( (fDistToTarget
        - fsqrt(
            (((v27->x - AbsOrigin->x) * (v27->x - AbsOrigin->x)) + ((v27->y - AbsOrigin->y) * (v27->y - AbsOrigin->y)))
          + ((v27->z - AbsOrigin->z) * (v27->z - AbsOrigin->z)))) > 1000.0 )
      goto LABEL_50;
    v28 = &RoamingBots.m_Memory.m_pMemory[v23];
    v29 = CEntityHandle::operator CEntityInstance *(&RoamingBots.m_Memory.m_pMemory[v23]->m_hUnit);
    if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
    {
      v123.m_Index = -1;
      v30 = v29->m_pEntity;
      if ( v30 != 0 )
      {
        v31 = (v30->m_EHandle.m_Index >> 15) - (v30->m_flags & 1);
        v32 = 0x7FFF;
        if ( v30->m_EHandle.m_Index != -1 )
          v32 = v30->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v123.m_Index) = v32 | v123.m_Index & 0x8000;
        v123.m_Index = (v31 << 15) | v123.m_Index & 0x7FFF;
      }
    }
    else
    {
      v123.m_Index = -1;
    }
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&hParticipatingAllies, &v123) == -1 )
    {
      v34 = CEntityHandle::operator CEntityInstance *(*v28 + 39);
      if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
      {
        v123.m_Index = -1;
        v35 = v34->m_pEntity;
        if ( v35 != 0 )
        {
          v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
          v37 = 0x7FFF;
          if ( v35->m_EHandle.m_Index != -1 )
            v37 = v35->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v123.m_Index) = v37 | v123.m_Index & 0x8000;
          v123.m_Index = (v36 << 15) | v123.m_Index & 0x7FFF;
        }
      }
      else
      {
        v123.m_Index = -1;
      }
      v38 = hParticipatingAllies.m_Size;
      v39 = hParticipatingAllies.m_Size;
      if ( hParticipatingAllies.m_Size == hParticipatingAllies.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hParticipatingAllies.m_Memory, 1);
        v39 = hParticipatingAllies.m_Size;
      }
      hParticipatingAllies.m_Size = v39 + 1;
      v40 = &hParticipatingAllies.m_Memory.m_pMemory[v38];
      if ( v40 != 0 )
        v40->m_Index = v123.m_Index;
    }
    ++i;
  }
  if ( CDOTA_BotMode::GetTeamCommander(this)->m_bLateGame )
  {
    v41 = hParticipatingAllies.m_Size;
    goto LABEL_66;
  }
  v41 = hParticipatingAllies.m_Size;
  if ( v105->m_CurrentLane != DOTA_LANE::DOTA_LANE_MIDDLE )
  {
    if ( hParticipatingAllies.m_Size > 3 )
      goto LABEL_50;
LABEL_66:
    if ( v41 <= 0 )
    {
      v52 = v41;
      bAllyHasSilence = 0;
      fAllyHealth = 0.0;
      fOutgoingStuns = 0.0;
      fBonus = 0.0;
    }
    else
    {
      v51 = 0;
      bAllyHasSilence = 0;
      fAllyHealth = 0.0;
      fOutgoingStuns = 0.0;
      fBonus = 0.0;
      do
      {
        while ( 1 )
        {
          v53 = CEntityHandle::operator CEntityInstance *(&hParticipatingAllies.m_Memory.m_pMemory[v51]);
          v54 = v53;
          if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
          {
            v55 = *&v53[45].m_worldGroupId.m_nHashCode;
            if ( v55 != 0 )
            {
              fBonus = CDOTA_Bot::GetEstimatedDamageToTarget(
                         *&v53[45].m_worldGroupId.m_nHashCode,
                         1,
                         pTargetHero,
                         7.0,
                         7)
                     + fBonus;
              fOutgoingStuns = CDOTA_Bot::GetStunDuration(v55, 1) + fOutgoingStuns;
              v56 = CBaseEntity::GetHealth(v54);
              v41 = hParticipatingAllies.m_Size;
              fAllyHealth = v56 + fAllyHealth;
              if ( !bAllyHasSilence )
                break;
            }
          }
          ++v51;
          v52 = v41;
          if ( v41 <= v51 )
            goto LABEL_74;
        }
        v57 = CDOTA_Bot::HasSilence(v55, 1);
        v41 = hParticipatingAllies.m_Size;
        bAllyHasSilence = v57;
        ++v51;
        v52 = hParticipatingAllies.m_Size;
      }
      while ( hParticipatingAllies.m_Size > v51 );
    }
LABEL_74:
    v58 = 1.0;
    if ( HasSilence )
      v58 = 0.5;
    v59 = fOutgoingStuns * v58;
    v60 = 1.0;
    if ( bAllyHasSilence )
      v60 = 0.5;
    v61 = fIncomingStuns * v60;
    v62 = 7.0 - (v59 / hNearbyEnemies.m_Size);
    v63 = 0.0;
    if ( v62 >= 0.0 )
      v63 = v62 / 7.0;
    v64 = 0.0;
    v65 = 7.0 - (v61 / v52);
    if ( v65 >= 0.0 )
      v64 = v65 / 7.0;
    v66 = v63 * fIncomingDamage;
    v67.m128_f32[0] = (v64 * fBonus) / Health;
    if ( v67.m128_f32[0] < 0.0 )
    {
      v69 = 0.0;
    }
    else
    {
      v68 = _mm_cmpge_ss(0x40000000u, v67);
      LODWORD(v69) = _mm_andnot_ps(v68, 0x40000000u).m128_u32[0] | v67.m128_i32[0] & v68.m128_i32[0];
    }
    v70.m128_f32[0] = v66 / fAllyHealth;
    if ( v70.m128_f32[0] < 0.2 )
    {
      v72 = 0.2;
    }
    else
    {
      v71 = _mm_cmpge_ss(0x40000000u, v70);
      LODWORD(v72) = _mm_andnot_ps(v71, 0x40000000u).m128_u32[0] | v70.m128_i32[0] & v71.m128_i32[0];
    }
    fIncomingStunsa = 0.0;
    v73 = ((v69 - v72) - 0.30000001) / 1.0999999;
    if ( v73 >= 0.0 )
    {
      fIncomingStunsa = 0.89999998;
      if ( v73 <= 1.0 )
        fIncomingStunsa = (v73 * 0.89999998) + 0.0;
    }
    if ( pLeadBuilding != 0 )
    {
      TankRating = CDOTA_Bot::GetTankRating(this->m_pBot);
      v76 = CDOTA_Bot::GetTowerAvoidanceCost(this->m_pBot, TankRating, v75) / 30.0;
      if ( v76 < 0.0 )
      {
        v77 = -0.2;
      }
      else
      {
        v77 = -1.1;
        if ( v76 <= 1.0 )
          v77 = -((0.89999998 * v76) + 0.0) - 0.2;
      }
      v78 = 0.0;
      v79 = ((v105->m_fCurrentLaneAmount - pLeadBuilding->m_fAmountAlongLane[pTargetHero->m_iTeamNum.m_Value != 2]) - 0.2)
          / -0.1;
      if ( v79 >= 0.0 )
        v78 = fminf(1.0, v79);
      fBonusa = ((v78 * v77) + 0.2) + 1.0;
    }
    else
    {
      fBonusa = 1.0;
    }
    HasBlink = CDOTA_Bot::HasBlink(pTargetHero->m_pBot, 1);
    v81 = 0.0;
    if ( HasBlink )
      v81 = -0.2;
    pTargetHerob = v81 + fBonusa;
    v82 = (*(this->m_pBot->_vptr_CDOTA_Bot + 19))(this->m_pBot);
    if ( v82 == 3000.0 )
    {
      v83.m128_f32[0] = fDistToTarget - 3000.0;
      LODWORD(v84) = _mm_cmple_ss(0, v83).m128_u32[0] & 0xBE4CCCCD;
    }
    else
    {
      v101 = (fDistToTarget - 3000.0) / (v82 - 3000.0);
      v84 = 0.0;
      if ( v101 >= 0.0 )
      {
        v84 = -0.2;
        if ( v101 <= 1.0 )
          v84 = (-0.2 * v101) + 0.0;
      }
    }
    pTargetHeroc = v84 + pTargetHerob;
    v85 = CDOTA_Bot::HasBlink(this->m_pBot, 1);
    v86 = 0.0;
    if ( v85 )
      v86 = 0.2;
    pTargetHerod = v86 + pTargetHeroc;
    v87 = ((CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) - this->m_fLastStartedRoamTime) - 20.0) / 100.0;
    if ( v87 < 0.0 )
    {
      v88 = -0.2;
    }
    else
    {
      v88 = 0.10000001;
      if ( v87 <= 1.0 )
        v88 = (0.30000001 * v87) - 0.2;
    }
    v89 = 0.0;
    v90 = v88 + pTargetHerod;
    v91 = this->m_pBot;
    m_iUnitType = v91->m_iUnitType;
    if ( (m_iUnitType & 0x40) != 0 )
      v89 = 0.2;
    v93 = v90 + v89;
    v94 = 0.0;
    if ( (m_iUnitType & 0x10) != 0 )
      v94 = -0.5;
    v95 = v93 + v94;
    v96 = 0.0;
    if ( (v105->m_iUnitType & 0x10) != 0 )
      v96 = 0.1;
    pTargetHeroe = v96 + v95;
    AssignedLane = CDOTA_Bot::GetAssignedLane(v91);
    v98 = 0.0;
    if ( AssignedLane == DOTA_LANE::DOTA_LANE_MIDDLE )
    {
      v102 = (CDOTA_BotMode::GetUnit(this)->m_iCurrentLevel.m_Value - 1.0) * 0.25;
      if ( v102 < 0.0 )
      {
        v98 = -0.60000002;
      }
      else
      {
        v98 = -0.30000001;
        if ( v102 <= 1.0 )
          v98 = (0.30000001 * v102) - 0.60000002;
      }
    }
    v99 = v98 + pTargetHeroe;
    v100 = 0.1;
    if ( v99 >= 0.1 )
      v100 = fminf(1.0, v99);
    v42 = v100 * fIncomingStunsa;
    goto LABEL_51;
  }
  if ( hParticipatingAllies.m_Size <= 2 )
    goto LABEL_66;
LABEL_50:
  v42 = 0.0;
LABEL_51:
  RoamingBots.m_Size = 0;
  if ( (RoamingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    fIncomingDamagea = v42;
    CUtlMemory<CDOTA_Bot *,int>::Purge(&RoamingBots.m_Memory);
    v42 = fIncomingDamagea;
    if ( (RoamingBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Bot *,int>::Purge(&RoamingBots.m_Memory);
      v42 = fIncomingDamagea;
    }
  }
  fIncomingDamageb = v42;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hParticipatingAllies);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
  return fIncomingDamageb;
}


// CDOTA_BotMode_Roam::FindBestRoamTarget  (line 408, @0x0000000002817fd0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPCHero, operator CEntityInstance*, operator=, operator[]
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BotMode_Roam::FindBestRoamTarget(
        CDOTA_BotMode_Roam *const this,
        EHANDLE *phTarget,
        float *pScore)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // r14
  int v7; // r15d
  CConcreteEntityList *v8; // r9
  CHandle<CDOTA_BaseNPC_Hero> *v9; // rsi
  uint32 m_Index; // eax
  __int16 v11; // di
  CEntityIdentity *v12; // rsi
  __int64 v13; // rdi
  CEntityIdentity *v14; // rsi
  CEntityInstance *m_pInstance; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  float v19; // xmm0_4
  CDOTA_BaseNPC_Hero *pBestTarget; // [rsp+10h] [rbp-40h]
  float fBestTargetScore; // [rsp+1Ch] [rbp-34h]

  if ( g_HeroList.m_hHeroList.m_Size <= 0 )
  {
    fBestTargetScore = 0.0;
    if ( phTarget == 0 )
      goto LABEL_16;
    goto LABEL_22;
  }
  v6 = 0;
  v7 = 0;
  pBestTarget = 0;
  fBestTargetScore = 0.0;
  do
  {
    v8 = CEntityHandle::gm_pEntityList;
    v9 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v6];
    m_Index = v9->m_Index;
    if ( v9->m_Index + 2 <= 1
      || (v11 = v9->m_Index,
          (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F]) == 0)
      || (v13 = v11 & 0x1FF, v8 = (8 * v13), (v14 = &v12[v13]) == 0)
      || m_Index != v14->m_EHandle.m_Index
      || (m_pInstance = v14->m_pInstance, v14->m_pInstance == 0)
      || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    {
      m_pInstance = 0;
    }
    if ( (*(this->_vptr_CDOTA_BotMode + 18))(this, m_pInstance, pScore, v3, v4, v8) != 0 )
    {
      v19 = (*(this->_vptr_CDOTA_BotMode + 16))(this, m_pInstance);
      if ( v19 > fBestTargetScore )
      {
        pBestTarget = m_pInstance;
        fBestTargetScore = v19;
      }
    }
    ++v7;
    ++v6;
  }
  while ( v7 < g_HeroList.m_hHeroList.m_Size );
  if ( phTarget != 0 )
  {
    if ( pBestTarget != 0 )
    {
      m_pEntity = pBestTarget->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v18 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(phTarget->m_Index) = v18 | phTarget->m_Index & 0x8000;
        phTarget->m_Index = (v17 << 15) | phTarget->m_Index & 0x7FFF;
        goto LABEL_16;
      }
    }
LABEL_22:
    phTarget->m_Index = -1;
  }
LABEL_16:
  if ( pScore != 0 )
    *pScore = fBestTargetScore;
}


// CDOTA_BotMode_Roam::IsValidRoamTarget  (line 434, @0x0000000002818ba0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTimeSinceLastSeen, HasBeenSeenIn, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BotMode::GetUnit, CDOTA_BotMode::IsBotTargetStatusValid
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BotMode_Roam::IsValidRoamTarget(CDOTA_BotMode_Roam *const this, CDOTA_BaseNPC_Hero *pTargetHero)
{
  int v4; // r13d
  CDOTA_BaseNPC *Unit; // rax
  bool result; // al
  CDOTA_Bot *m_pBot; // rdx
  float v8; // xmm0_4
  uint32 m_Index; // edi
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx

  v4 = (*(this->m_pBot->_vptr_CDOTA_Bot + 19))(this->m_pBot);
  Unit = CDOTA_BotMode::GetUnit(this);
  result = CDOTA_BotMode::IsBotTargetStatusValid(this, pTargetHero, Unit, 241, v4);
  if ( result )
  {
    m_pBot = pTargetHero->m_pBot;
    if ( m_pBot != 0 )
    {
      if ( m_pBot->m_CurrentLane != this->m_pBot->m_CurrentLane
        || (m_Index = this->m_hRoamTarget.m_Index, result = 0, m_Index + 2 > 1)
        && (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRoamTarget.m_Index) >> 9) & 0x3F]) != 0
        && (v11 = &v10[this->m_hRoamTarget.m_Index & 0x1FF]) != 0
        && m_Index == v11->m_EHandle.m_Index
        && pTargetHero == v11->m_pInstance )
      {
        v8 = 0.0;
        if ( g_pGameRules != 0 )
          v8 = *&g_pGameRules[18].m_szQuestName[20];
        return (v8 - m_pBot->m_fLastSeen) < 10.0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// CDOTA_BotMode_Roam::GetDebugColor  (line 455, @0x0000000002816380, libserver.so)
color24 __fastcall CDOTA_BotMode_Roam::GetDebugColor(CDOTA_BotMode_Roam *const this)
{
  return 3973375;
}


// CDOTA_BotMode_Roam::GetDebugString  (line 466, @0x0000000002820c20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTargetNPC, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::GetTargetBot, GetLaneName, V_sprintf_safe<128ul>
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotMode_Roam::GetDebugString(CDOTA_BotMode_Roam *const this)
{
  const char *m_pAsString; // r12
  CDOTA_Bot *m_pBot; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_Bot *TargetBot; // rax
  char *LaneName; // rdx
  CDOTA_Bot *v9; // rax
  char *m_DebugStringBuffer; // rbx
  CEntityInstance *m_pInstance; // rax

  m_pAsString = "NULL";
  m_pBot = this->m_pBot;
  m_Index = m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pBot->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[m_pBot->m_hTarget.m_Index & 0x1FF];
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
  TargetBot = CDOTA_Bot::GetTargetBot(m_pBot);
  LaneName = "None";
  if ( TargetBot != 0 )
  {
    v9 = CDOTA_Bot::GetTargetBot(this->m_pBot);
    LaneName = GetLaneName(v9->m_CurrentLane);
  }
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(m_DebugStringBuffer, "Roaming towards lane %s - target %s", LaneName, m_pAsString);
  return m_DebugStringBuffer;
}


// CDOTA_BotMode_Roam::GetDebugValue  (line 475, @0x0000000002817a30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotMode_Roam::GetDebugValue(CDOTA_BotMode_Roam *const this)
{
  const char *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rdx

  result = "";
  m_Index = this->m_hRoamTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRoamTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hRoamTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
        {
          return m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
        }
      }
    }
  }
  return result;
}


// CDOTA_BotMode_Roam_Human::GetDesire  (line 485, @0x000000000281a270, libserver.so)  // inlines: DotProduct, Get, GetAggroTarget, GetBotByIndex, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_BotMode::GetTeamCommander, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::CalculateAmountAlongLane, CDOTALocomotor::GetAverageVelocityOverTime, CDOTA_BotMode::GetOpposingTeamCommander, CEntityHandle::operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Roam_Human::GetDesire(CDOTA_BotMode_Roam_Human *const this)
{
  int v1; // r14d
  CDOTA_BaseNPC *Unit; // rax
  uint32 m_Index; // edx
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CEntityInstance *v9; // r13
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_TeamCommander *TeamCommander; // rax
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // r13
  CDOTA_TeamCommander *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  const Vector *v17; // r13
  CDOTA_TeamCommander *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTALocomotor *v20; // rax
  float v21; // xmm1_4
  int v22; // r14d
  int v23; // r14d
  __int64 v24; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  const CEntityHandle *v26; // rdi
  CEntityInstance *v27; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v29; // eax
  __int16 v30; // cx
  CEntityInstance *m_pInstance; // rax
  float fAmount; // [rsp+0h] [rbp-40h] BYREF
  float fBotDist; // [rsp+4h] [rbp-3Ch] BYREF
  float fMidDist; // [rsp+8h] [rbp-38h] BYREF
  float fTopDist; // [rsp+Ch] [rbp-34h] BYREF
  Vector vVelocity; // [rsp+10h] [rbp-30h]

  if ( !CDOTA_BotMode::GetTeamCommander(this)->m_bLateGame )
  {
    Unit = CDOTA_BotMode::GetUnit(this);
    m_Index = Unit->m_hAggroTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v6 = Unit->m_hAggroTarget.m_Index,
          (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F]) == 0)
      || (v8 = &v7[v6 & 0x1FF]) == 0
      || m_Index != v8->m_EHandle.m_Index
      || (m_pInstance = v8->m_pInstance) == 0
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      if ( this->m_pBot->m_CurrentLane != DOTA_LANE::DOTA_LANE_NONE )
        goto LABEL_8;
      v10 = CDOTA_BotMode::GetUnit(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
      TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
      CDOTA_TeamCommander::CalculateAmountAlongLane(
        TeamCommander,
        DOTA_LANE::DOTA_LANE_BOTTOM,
        AbsOrigin,
        &fAmount,
        &fBotDist);
      v13 = CDOTA_BotMode::GetUnit(this);
      v14 = CBaseEntity::GetAbsOrigin(v13);
      v15 = CDOTA_BotMode::GetTeamCommander(this);
      CDOTA_TeamCommander::CalculateAmountAlongLane(v15, DOTA_LANE::DOTA_LANE_MIDDLE, v14, &fAmount, &fMidDist);
      v16 = CDOTA_BotMode::GetUnit(this);
      v17 = CBaseEntity::GetAbsOrigin(v16);
      v18 = CDOTA_BotMode::GetTeamCommander(this);
      CDOTA_TeamCommander::CalculateAmountAlongLane(v18, DOTA_LANE::DOTA_LANE_TOP, v17, &fAmount, &fTopDist);
      v19 = CDOTA_BotMode::GetUnit(this);
      v20 = (*(v19->_vptr_IHandleEntity + 376))(v19);
      vVelocity = CDOTALocomotor::GetAverageVelocityOverTime(v20, v21);
      LOBYTE(v1) = (((-0.70709997 * vVelocity.x) + (0.70709997 * vVelocity.y)) + (vVelocity.z * 0.0)) > 0.0;
      v22 = v1 << 31 >> 31;
      v23 = fTopDist <= fBotDist ? v22 + 2 : v22 + 3;
      v24 = 0;
      v9 = 0;
      while ( v24 < CDOTA_BotMode::GetOpposingTeamCommander(this)->m_BotList.m_Size )
      {
        OpposingTeamCommander = CDOTA_BotMode::GetOpposingTeamCommander(this);
        if ( v24 < OpposingTeamCommander->m_BotList.m_Size )
        {
          v26 = OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v24];
          if ( v26 != 0 && v23 == v26[46].m_Index )
          {
            v27 = CEntityHandle::operator CEntityInstance *(v26 + 39);
            v9 = v27;
            if ( v27 == 0 || BYTE3(v27[7]._vptr_IHandleEntity) == 0 )
              v9 = 0;
          }
        }
        ++v24;
      }
      if ( v9 == 0 )
      {
LABEL_8:
        v9 = 0;
      }
      else
      {
        m_pEntity = v9->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v29 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v30 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v30 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hRoamTarget.m_Index) = v30 | this->m_hRoamTarget.m_Index & 0x8000;
          this->m_hRoamTarget.m_Index = (v29 << 15) | this->m_hRoamTarget.m_Index & 0x7FFF;
          return 0.75;
        }
      }
      this->m_hRoamTarget.m_Index = -1;
      if ( v9 != 0 )
        return 0.75;
    }
  }
  return 0.0;
}


// CDOTA_BotMode_Roam_Human::GetDebugString  (line 541, @0x0000000002820d00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: GetLaneName, V_sprintf_safe<128ul>
// strings: "InferredRoaming towards lane %s - target %s"
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_BotMode_Roam_Human::GetDebugString(CDOTA_BotMode_Roam_Human *const this)
{
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rax
  const char *m_pAsString; // r12
  __int64 v5; // rcx
  bool v6; // zf
  CEntityIdentity *v7; // rcx
  CEntityInstance *v8; // rax
  __int64 v9; // rax
  char *LaneName; // rdx
  char *m_DebugStringBuffer; // rbx
  CEntityInstance *m_pInstance; // rdx

  m_Index = this->m_hRoamTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRoamTarget.m_Index) >> 9) & 0x3F]) != 0 )
  {
    m_pAsString = "NULL";
    v5 = this->m_hRoamTarget.m_Index & 0x1FF;
    v6 = &v3[v5] == 0;
    v7 = &v3[v5];
    v8 = 0;
    if ( !v6 && m_Index == v7->m_EHandle.m_Index )
    {
      m_pInstance = v7->m_pInstance;
      if ( v7->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        v8 = v7->m_pInstance;
        m_pAsString = "";
        if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
          m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
      }
    }
  }
  else
  {
    m_pAsString = "NULL";
    v8 = 0;
  }
  v9 = *&v8[45].m_worldGroupId.m_nHashCode;
  LaneName = "None";
  if ( v9 != 0 )
    LaneName = GetLaneName(*(v9 + 184));
  m_DebugStringBuffer = this->m_DebugStringBuffer;
  V_sprintf_safe<128ul>(m_DebugStringBuffer, "InferredRoaming towards lane %s - target %s", LaneName, m_pAsString);
  return m_DebugStringBuffer;
}


