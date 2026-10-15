
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// __CreateGameRules_CTeamplayRules  (line 41, @0x00000000023e21a0, libserver.so)  // inlines: memset, operator delete, operator new
// calls: memset, CTeamplayRules::CTeamplayRules, _Unwind_Resume
void __cdecl __CreateGameRules_CTeamplayRules()
{
  CTeamplayRules *v0; // rbx

  v0 = (**g_pMemAlloc)(g_pMemAlloc, 720);
  memset(v0, 0, sizeof(CTeamplayRules));
  CTeamplayRules::CTeamplayRules(v0);
}


// CTeamplayRules::CTeamplayRules  (line 43, @0x00000000023e2110, libserver.so)  // inlines: memset
// calls: CMultiplayRules::CMultiplayRules, CTeamplayRules::RecountTeams, CMultiplayRules::~CMultiplayRules, _Unwind_Resume
// callers: CSchemaClassBinding<CTeamplayRules>::ConstructInPlace, CSchemaClassBinding<CTeamplayRules>::Allocate, CSchemaClassBinding<CTeamplayRules>::AllocateAndCopyConstruct, __CreateGameRules_CTeamplayRules, CDOTAGamerules::CDOTAGamerules
// globals: team_names, team_scores, num_teams
void __fastcall CTeamplayRules::CTeamplayRules(CTeamplayRules *const this)
{
  CMultiplayRules::CMultiplayRules(this);
  this->_vptr_CGameRules = &off_40B7530;
  this->m_DisableDeathMessages = 0;
  this->m_DisableDeathPenalty = 0;
  memset(team_names, 0, sizeof(team_names));
  this->m_bSwitchTeams = 0;
  this->m_bScrambleTeams = 0;
  this->m_szTeamList[0] = 0;
  num_teams = 0;
  memset(team_scores, 0, sizeof(team_scores));
  CTeamplayRules::RecountTeams(this);
}


// CTeamplayRules::BuildGameSessionManifest  (line 63, @0x00000000023bbf40, libserver.so)
// calls: CGameRules::BuildGameSessionManifest
// callers: CDOTAGamerules::BuildGameSessionManifest
void __fastcall CTeamplayRules::BuildGameSessionManifest(
        CTeamplayRules *const this,
        const EventBuildGameSessionManifest_t *const msg)
{
  CGameRules::BuildGameSessionManifest(this, msg);
}


// CTeamplayRules::Think  (line 71, @0x00000000023c1d30, libserver.so)  // inlines: GetFloat, curtime
// calls: CMultiplayRules::Think
// callers: CDOTAGamerules::Think
// globals: num_teams, team_scores
void __fastcall CTeamplayRules::Think(CTeamplayRules *const this)
{
  float v2; // xmm0_4
  float m_fValue; // xmm1_4
  int *v4; // rax
  float v5; // xmm0_4
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm1_4
  float flTimeLimit; // [rsp+Ch] [rbp-14h]

  CMultiplayRules::Think(this);
  if ( g_fGameOver )
  {
    CMultiplayRules::Think(this);
  }
  else
  {
    v2 = 60.0 * mp_timelimit.m_pParent->m_Value.m_fValue;
    if ( v2 != 0.0 )
    {
      v6 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            flTimeLimit = 60.0 * mp_timelimit.m_pParent->m_Value.m_fValue;
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            v2 = flTimeLimit;
          }
        }
        m_flCurrentTime = v6->m_flCurrentTime;
      }
      else
      {
        m_flCurrentTime = 0.0;
      }
      if ( m_flCurrentTime >= v2 )
        goto LABEL_19;
    }
    m_fValue = fraglimit.m_pParent->m_Value.m_fValue;
    if ( m_fValue != 0.0 && num_teams > 0 )
    {
      if ( team_scores[0] >= m_fValue )
      {
LABEL_19:
        (*(this->_vptr_CGameRules + 163))(this);
        return;
      }
      v4 = &team_scores[1];
      while ( v4 != &team_scores[num_teams - 1 + 1] )
      {
        v5 = *v4++;
        if ( v5 >= m_fValue )
          goto LABEL_19;
      }
    }
  }
}


// CTeamplayRules::ClientCommand  (line 111, @0x00000000023bd480, libserver.so)  // inlines: Arg, FStrEq, _V_strcmp, operator[]
// calls: CMultiplayRules::ClientCommand
// callers: CDOTAGamerules::ClientCommand
// strings: "menuselect"
bool __fastcall CTeamplayRules::ClientCommand(
        CTeamplayRules *const this,
        CBaseEntity *pEdict,
        const CCommand *const args)
{
  bool result; // al
  char *v5; // rsi

  result = CMultiplayRules::ClientCommand(this, pEdict, args);
  if ( !result && args->m_nArgc > 0 )
  {
    v5 = args->m_ppArgv[0];
    if ( v5 == "menuselect" || strcmp(v5, "menuselect") == 0 )
      return 1;
  }
  return result;
}


// CTeamplayRules::SetDefaultPlayerTeam  (line 131, @0x00000000023bb6b0, libserver.so)  // inlines: entindex
// calls: CEntityInstance::GetEntityIndex
// strings: "default", "cl_team"
const char *__fastcall CTeamplayRules::SetDefaultPlayerTeam(CTeamplayRules *const this, CBasePlayer *pPlayer)
{
  CEntityIndex v3; // r12d
  char v4; // cl
  const char *result; // rax

  v3.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
  v4 = (*(pPlayer->_vptr_IHandleEntity + 100))(pPlayer);
  result = "default";
  if ( v4 != 0 )
    return (*(*engine + 384LL))(engine, v3.m_Data, "cl_team");
  return result;
}


// CTeamplayRules::InitHUD  (line 166, @0x00000000023c9760, libserver.so)
// calls: CMultiplayRules::InitHUD, CTeamplayRules::RecountTeams
void __fastcall CTeamplayRules::InitHUD(CTeamplayRules *const this, CBasePlayer *pPlayer)
{
  (*(this->_vptr_CGameRules + 122))(this);
  CMultiplayRules::InitHUD(this, pPlayer);
  CTeamplayRules::RecountTeams(this);
}


// CTeamplayRules::ChangePlayerTeam  (line 196, @0x00000000023bafb0, libserver.so)
void __fastcall CTeamplayRules::ChangePlayerTeam(
        CTeamplayRules *const this,
        CBasePlayer *pPlayer,
        const char *pTeamName,
        bool bKill,
        bool bGib)
{
  ;
}


// CTeamplayRules::ClientDisconnected  (line 218, @0x00000000023bff60, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SetConnected, ToBasePlayer
// calls: CBaseEntity::GetTeam, CMultiplayRules::ClientDisconnected
// callers: CDOTAGamerules::ClientDisconnected
void __fastcall CTeamplayRules::ClientDisconnected(
        CTeamplayRules *const this,
        CEntityIndex nEntityIndex,
        ENetworkDisconnectionReason reason)
{
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rax
  const CBaseEntity *m_pInstance; // rbx

  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v6 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[nEntityIndex.m_Data & 0x1FF];
      if ( v7 != 0 && (v7->m_EHandle.m_Index & 0x7FFF) == nEntityIndex.m_Data )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
        {
          LODWORD(m_pInstance[3].m_flGroundChangeTime) = 1;
          if ( CBaseEntity::GetTeam(m_pInstance) != 0 )
            (*(m_pInstance->_vptr_IHandleEntity + 70))(m_pInstance, 0);
        }
      }
    }
  }
  CMultiplayRules::ClientDisconnected(this, nEntityIndex, reason);
}


// CTeamplayRules::ClientSettingsChanged  (line 240, @0x00000000023e4800, libserver.so)  // inlines: CreateEvent, GetUserID, _M_data, _V_strcmp, c_str, entindex
// calls: CMsgPlayerInfo::CMsgPlayerInfo, CEntityInstance::GetEntityIndex, strcmp, CBasePlayer::SetPlayerName, CMsgPlayerInfo::~CMsgPlayerInfo, _Unwind_Resume
// strings: "player_changename", "oldname", "newname"
void __fastcall CTeamplayRules::ClientSettingsChanged(CTeamplayRules *const this, CBasePlayer *pPlayer)
{
  unsigned __int8 (__fastcall *v3)(IVEngineServer2 *, _QWORD, _BYTE *); // r14
  CEntityIndex v4; // eax
  const char *v5; // rax
  const char *v6; // r14
  __int64 v7; // r15
  CEntityIndex v8; // eax
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, char *, __int64); // [rsp+0h] [rbp-80h]
  char *s2; // [rsp+8h] [rbp-78h]
  _BYTE v12[24]; // [rsp+10h] [rbp-70h] BYREF
  char **v13; // [rsp+28h] [rbp-58h]

  CMsgPlayerInfo::CMsgPlayerInfo(v12);
  v3 = *(*engine + 656LL);
  v4.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
  if ( v3(engine, v4.m_Data, v12) != 0 )
  {
    s2 = *v13;
    v5 = (*(pPlayer->_vptr_IHandleEntity + 106))(pPlayer);
    v6 = v5;
    if ( *v5 != 0 && strcmp(v5, s2) != 0 )
    {
      v7 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_changename", 0, 0);
      if ( v7 != 0 )
      {
        v10 = *(*v7 + 112LL);
        v8.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
        v9 = (*(*engine + 224LL))(engine, (v8.m_Data - 1));
        v10(v7, "userid", v9);
        (*(*v7 + 136LL))(v7, "oldname", v6);
        (*(*v7 + 136LL))(v7, "newname", s2);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v7, 0);
      }
      CBasePlayer::SetPlayerName(pPlayer, s2);
    }
  }
  CMsgPlayerInfo::~CMsgPlayerInfo(v12);
}


// CTeamplayRules::DeathNotice  (line 306, @0x00000000023c10c0, libserver.so)  // inlines: CreateEvent, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, GetUserID, IndexToIdentity, IsValid, LookupEntity, entindex, operator CBaseEntity*, operator CEntityInstance*
// calls: CMultiplayRules::DeathNotice, CEntityInstance::GetEntityIndex
// strings: "player_death", "killer", "victim"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTeamplayRules::DeathNotice(
        CTeamplayRules *const this,
        CBasePlayer *pVictim,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CBasePlayer *m_pInstance; // r14
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, const char *, _QWORD); // r15
  CEntityIndex v12; // eax
  unsigned int v13; // eax
  void (__fastcall *v14)(__int64, const char *, _QWORD); // r14
  CEntityIndex v15; // eax
  unsigned int v16; // eax

  if ( !this->m_DisableDeathMessages )
  {
    m_Index = info->m_hAttacker.m_Index;
    if ( m_Index + 2 > 1
      && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F]) != 0
      && (v8 = &v7[info->m_hAttacker.m_Index & 0x1FF]) != 0
      && m_Index == v8->m_EHandle.m_Index
      && (m_pInstance = v8->m_pInstance, pVictim != 0)
      && m_pInstance != 0
      && (*(m_pInstance->_vptr_IHandleEntity + 140))(v8->m_pInstance) != 0
      && pVictim != m_pInstance
      && (*(this->_vptr_CGameRules + 114))(this, pVictim, m_pInstance) == 1 )
    {
      v10 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_death", 0, 0);
      if ( v10 != 0 )
      {
        v11 = *(*v10 + 112LL);
        v12.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
        v13 = (*(*engine + 224LL))(engine, (v12.m_Data - 1));
        v11(v10, "killer", v13);
        v14 = *(*v10 + 112LL);
        v15.m_Data = CEntityInstance::GetEntityIndex(pVictim).m_Data;
        v16 = (*(*engine + 224LL))(engine, (v15.m_Data - 1));
        v14(v10, "victim", v16);
        (*(*v10 + 112LL))(v10, "priority", 7);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v10, 0);
      }
    }
    else
    {
      CMultiplayRules::DeathNotice(this, pVictim, info);
    }
  }
}


// CTeamplayRules::PlayerKilled  (line 339, @0x00000000023c9790, libserver.so)
// calls: CMultiplayRules::PlayerKilled, CTeamplayRules::RecountTeams
void __fastcall CTeamplayRules::PlayerKilled(
        CTeamplayRules *const this,
        CBasePlayer *pVictim,
        const CTakeDamageInfo *const info)
{
  if ( !this->m_DisableDeathPenalty )
  {
    CMultiplayRules::PlayerKilled(this, pVictim, info);
    CTeamplayRules::RecountTeams(this);
  }
}


// CTeamplayRules::IsTeamplay  (line 352, @0x00000000023bafc0, libserver.so)
bool __fastcall CTeamplayRules::IsTeamplay(CTeamplayRules *const this)
{
  return 1;
}


// CTeamplayRules::FPlayerCanTakeDamage  (line 357, @0x00000000023bbf50, libserver.so)  // inlines: GetInt
// calls: CMultiplayRules::FPlayerCanTakeDamage
bool __fastcall CTeamplayRules::FPlayerCanTakeDamage(
        CTeamplayRules *const this,
        CBasePlayer *pPlayer,
        CBaseEntity *pAttacker)
{
  return (pAttacker == 0
       || (*(this->_vptr_CGameRules + 114))(this) != 1
       || friendlyfire.m_pParent->m_Value.m_nValue != 0
       || pAttacker == pPlayer)
      && CMultiplayRules::FPlayerCanTakeDamage(this, pPlayer, pAttacker);
}


// CTeamplayRules::PlayerRelationship  (line 374, @0x00000000023bafd0, libserver.so)
int __fastcall CTeamplayRules::PlayerRelationship(
        CTeamplayRules *const this,
        CBaseEntity *pPlayer,
        CBaseEntity *pTarget)
{
  if ( pPlayer == 0 || pTarget == 0 )
    return 0;
  if ( (*(pTarget->_vptr_IHandleEntity + 140))(pTarget) != 0 )
    return pPlayer->m_iTeamNum.m_Value == pTarget->m_iTeamNum.m_Value;
  return 0;
}


// CTeamplayRules::PlayerCanHearChat  (line 395, @0x00000000023bd370, libserver.so)  // inlines: GetBool, GetInt
// callers: CDOTAGamerules::PlayerCanHearChat
// local variable allocation has failed, the output may be wrong!
bool __fastcall CTeamplayRules::PlayerCanHearChat(
        CTeamplayRules *const this,
        CBasePlayer *pListener,
        CBasePlayer *pSpeaker,
        int nCustomModRules)
{
  char v5; // al
  CBasePlayer *pListenera; // [rsp+0h] [rbp-20h]
  CBasePlayer *pSpeakera; // [rsp+8h] [rbp-18h]

  if ( sv_allchat.m_pParent->m_Value.m_nValue != 0
    && (pListenera = pListener,
        pSpeakera = pSpeaker,
        v5 = (*(pSpeaker->_vptr_IHandleEntity + 139))(pSpeaker, pListener, pSpeaker, nCustomModRules),
        pSpeaker = pSpeakera,
        pListener = pListenera,
        v5 == 0) )
  {
    return (*(pListenera->_vptr_IHandleEntity + 139))(pListenera) ^ 1;
  }
  else
  {
    return (*(this->_vptr_CGameRules + 114))(this, pListener, pSpeaker, *&nCustomModRules) == 1;
  }
}


// CTeamplayRules::ShouldAutoAim  (line 410, @0x00000000023bd080, libserver.so)
bool __fastcall CTeamplayRules::ShouldAutoAim(CTeamplayRules *const this, CBasePlayer *pPlayer, CBaseEntity *pTgt)
{
  return pTgt == 0
      || (*(pTgt->_vptr_IHandleEntity + 140))(pTgt) == 0
      || (*(this->_vptr_CGameRules + 114))(this, pPlayer, pTgt) != 1;
}


// CTeamplayRules::IPointsForKill  (line 434, @0x00000000023bb030, libserver.so)
int __fastcall CTeamplayRules::IPointsForKill(CTeamplayRules *const this, CBasePlayer *pAttacker, CBasePlayer *pKilled)
{
  if ( pKilled == 0 )
    return 0;
  if ( pAttacker == 0 || pAttacker == pKilled )
    return 1;
  if ( (*(this->_vptr_CGameRules + 114))(this) == 1 )
    return -1;
  return 1;
}


// CTeamplayRules::GetTeamIndex  (line 463, @0x00000000023bb520, libserver.so)
// calls: V_stricmp_fast
// globals: num_teams, team_names
int __fastcall CTeamplayRules::GetTeamIndex(CTeamplayRules *const this, const char *pTeamName)
{
  char *v3; // r12
  int v4; // ebx

  if ( pTeamName == 0 || *pTeamName == 0 || num_teams <= 0 )
    return -1;
  v3 = team_names;
  v4 = 0;
  while ( V_stricmp_fast(v3, pTeamName) != 0 )
  {
    ++v4;
    v3 += 16;
    if ( num_teams <= v4 )
      return -1;
  }
  return v4;
}


// CTeamplayRules::GetIndexedTeamName  (line 479, @0x00000000023bb090, libserver.so)
// globals: num_teams, team_names
const char *__fastcall CTeamplayRules::GetIndexedTeamName(CTeamplayRules *const this, int teamIndex)
{
  const char *result; // rax

  result = "";
  if ( teamIndex >= 0 && teamIndex < num_teams )
    return &team_names[16 * teamIndex];
  return result;
}


// CTeamplayRules::IsValidTeam  (line 488, @0x00000000023bd0f0, libserver.so)
bool __fastcall CTeamplayRules::IsValidTeam(CTeamplayRules *const this, const char *pTeamName)
{
  bool result; // al

  result = 1;
  if ( this->m_teamLimit )
    return (*(this->_vptr_CGameRules + 118))(this, pTeamName) != -1;
  return result;
}


// CTeamplayRules::TeamWithFewestPlayers  (line 496, @0x00000000023c9450, libserver.so)  // inlines: memset
// calls: UTIL_PlayerByIndex, CBaseEntity::TeamID
// globals: num_teams, team_names
const char *__fastcall CTeamplayRules::TeamWithFewestPlayers(CTeamplayRules *const this)
{
  int v2; // ebx
  CBasePlayer *v3; // rax
  __int64 (__fastcall *v4)(CTeamplayRules *const, const char *); // r15
  const char *v5; // rax
  int v6; // eax
  int *v7; // rdi
  int v8; // r8d
  int *v9; // rdx
  const char *result; // rax
  const char *v11; // rcx
  int teamCount[44]; // [rsp+0h] [rbp-B0h] BYREF

  v2 = 1;
  memset(teamCount, 0, 0x80u);
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      v3 = UTIL_PlayerByIndex(v2);
      if ( v3 != 0 )
      {
        v4 = *(this->_vptr_CGameRules + 118);
        v5 = CBaseEntity::TeamID(v3);
        v6 = v4(this, v5);
        if ( v6 >= 0 )
          ++teamCount[v6];
      }
      ++v2;
    }
    while ( gpGlobals->maxClients >= v2 );
  }
  if ( num_teams <= 0 )
    return 0;
  v7 = teamCount;
  v8 = 32;
  v9 = &teamCount[1];
  result = 0;
  v11 = team_names;
  while ( 1 )
  {
    if ( *v7 < v8 )
    {
      result = v11;
      v8 = *v7;
    }
    v11 += 16;
    v7 = v9;
    if ( v9 == &teamCount[num_teams - 1 + 1] )
      break;
    ++v9;
  }
  return result;
}


// CTeamplayRules::RecountTeams  (line 534, @0x00000000023c9540, libserver.so)  // inlines: V_strncpy<int>, V_strncpy<long unsigned int>, memset
// calls: _V_strncpy, strtok, UTIL_PlayerByIndex, CBaseEntity::TeamID, __stack_chk_fail
// callers: CTeamplayRules::InitHUD, CTeamplayRules::PlayerKilled, CTeamplayRules::CTeamplayRules
// globals: num_teams, team_names, team_scores
void __fastcall CTeamplayRules::RecountTeams(CTeamplayRules *const this)
{
  char *v2; // rax
  char *v3; // rbx
  char *v4; // rax
  CEntityIndex v5; // ebx
  CBasePlayer *v6; // rax
  CBasePlayer *v7; // r14
  const char *v8; // r13
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdi
  int tm; // [rsp+4h] [rbp-24Ch]
  __int64 v14; // [rsp+8h] [rbp-248h]
  char szTeamlist[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v16; // [rsp+218h] [rbp-38h]

  num_teams = 0;
  v16 = __readfsqword(0x28u);
  _V_strncpy(szTeamlist, this->m_szTeamList, 512);
  v2 = strtok(szTeamlist, ";");
  v3 = v2;
  if ( v2 != 0 && *v2 != 0 )
  {
    do
    {
      if ( (*(this->_vptr_CGameRules + 118))(this, v3) < 0 )
      {
        _V_strncpy(&team_names[16 * num_teams], v3, 16);
        ++num_teams;
      }
      v4 = strtok(0, ";");
      v3 = v4;
    }
    while ( v4 != 0 && *v4 != 0 );
  }
  if ( num_teams <= 1 )
  {
    num_teams = 0;
    this->m_teamLimit = 0;
  }
  v5.m_Data = 1;
  memset(team_scores, 0, sizeof(team_scores));
  if ( gpGlobals->maxClients > 0 )
  {
    while ( 1 )
    {
      v6 = UTIL_PlayerByIndex(v5);
      v7 = v6;
      if ( v6 == 0 )
        goto LABEL_13;
      v8 = CBaseEntity::TeamID(v6);
      v9 = (*(this->_vptr_CGameRules + 118))(this, v8);
      v10 = v9;
      if ( v9 >= 0 )
        goto LABEL_12;
      if ( this->m_teamLimit )
        goto LABEL_13;
      v11 = num_teams;
      tm = num_teams;
      v12 = num_teams++;
      v14 = v11;
      team_scores[v11] = 0;
      _V_strncpy(&team_names[16 * v12], v8, 16);
      v10 = v14;
      if ( tm >= 0 )
      {
LABEL_12:
        team_scores[v10] += v7->m_iFrags;
LABEL_13:
        if ( gpGlobals->maxClients < ++v5.m_Data )
          return;
      }
      else if ( gpGlobals->maxClients < ++v5.m_Data )
      {
        return;
      }
    }
  }
}


