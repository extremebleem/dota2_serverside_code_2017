// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_team_commander.cpp:2183
struct sOffset {
	int x;  // +0x0
	int y;  // +0x4

	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_TeamCommander::Init  (line 45, @0x0000000002833720, libserver.so)
// callers: CDOTA_Commander::Init
void __fastcall CDOTA_TeamCommander::Init(CDOTA_TeamCommander *const this, DOTATeam_t eTeam)
{
  CDOTA_TeamCommander *v2; // rax
  int v3; // edx

  v2 = this;
  v3 = 4;
  this->m_eTeam = eTeam;
  do
  {
    v2->m_fPushLaneDesire[0] = 0.0;
    v2 = (v2 + 4);
    v2->m_fPushLaneDesire[3] = 0.0;
    v2->m_fPushLaneRawDesire[3] = 0.0;
    v2->m_fDefendLaneDesire[3] = 0.0;
    v2->m_fDefendLaneUrgencyDesire[3] = 0.0;
    v2->m_fPushLaneConvenienceDesire[3] = 0.0;
    v2->m_fDefendLanePowerDesire[3] = 0.0;
    --v3;
  }
  while ( v3 != 0 );
  this->m_iLastSeenRoshanHealth = -1;
  this->m_fRoshanDesire = 0.0;
  this->m_bCreatedLobbyBots = 0;
  this->m_fGoodLuckFlavorTextTime = 0.0;
  this->m_fTeamfightFlavorTextTime = 0.0;
  this->m_fCongratulateHeroFlavorTextTime = 0.0;
  this->m_fLastAliveHeroHistorySnapshotTime = 0.0;
  this->m_iAliveHeroHistoryIndex = 0;
  this->m_iAliveHeroHistory[0] = 0;
  this->m_iAliveHeroHistory[1] = 0;
  this->m_iAliveHeroHistory[2] = 0;
  this->m_iAliveHeroHistory[3] = 0;
  this->m_iAliveHeroHistory[4] = 0;
}


// Script_GetBot  (line 80, @0x000000000282c1e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: DOTACommander, CDOTA_Commander::GetBotRunningScript, CDOTA_Bot_Script::GetScriptHandle
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __cdecl Script_GetBot()
{
  CDOTA_Commander *v0; // rax
  CDOTA_Commander *v1; // rax
  CDOTA_Bot *BotRunningScript; // rax
  uint32 m_Index; // edx
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  CEntityInstance *m_pInstance; // rax

  v0 = DOTACommander();
  if ( CDOTA_Commander::GetBotRunningScript(v0) == 0 )
    return 0;
  v1 = DOTACommander();
  BotRunningScript = CDOTA_Commander::GetBotRunningScript(v1);
  m_Index = BotRunningScript->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = BotRunningScript->m_hUnit.m_Index,
        (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) != 0)
    && (v6 = &v5[v4 & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance) != 0
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return CDOTA_Bot_Script::GetScriptHandle(0);
  }
}


// Script_GetTeam  (line 85, @0x0000000002827940, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
int __cdecl Script_GetTeam()
{
  CDOTA_Commander *v0; // rax

  v0 = DOTACommander();
  return CDOTA_Commander::GetTeamRunningScript(v0);
}


// Script_GetTeamMember  (line 90, @0x000000000282c370, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetNthPlayerIDOnTeam, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_Bot_Script::GetScriptHandle
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall Script_GetTeamMember(int nTeam, int nPlayer)
{
  int NthPlayerIDOnTeam; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  int v7[8]; // [rsp+0h] [rbp-20h] BYREF

  NthPlayerIDOnTeam = CDOTA_PlayerResource::GetNthPlayerIDOnTeam(g_pDOTAPlayerResource, nTeam, nPlayer);
  if ( NthPlayerIDOnTeam >= 0
    && (CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v7, g_pDOTAPlayerResource, NthPlayerIDOnTeam), (v7[0] + 2) > 1)
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7[0]) >> 9) & 0x3F]) != 0
    && (v4 = &v3[v7[0] & 0x1FF]) != 0
    && v7[0] == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return 0;
  }
}


// Script_GetScriptDirectory  (line 104, @0x0000000002827960, libserver.so)  // inlines: GetScriptDirectory, GetTeamCommander, String
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CUtlString::Get
const char *__cdecl Script_GetScriptDirectory()
{
  CDOTA_Commander *v0; // rax
  DOTATeam_t TeamRunningScript; // ebx
  CDOTA_Commander *v3; // rax
  const CUtlString *p_m_GoodGuys; // rdi
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v0 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v0);
  if ( (TeamRunningScript - 2) > 1 )
    return "";
  v3 = DOTACommander();
  p_m_GoodGuys = &v3->m_GoodGuys;
  p_m_BadGuys = &v3->m_BadGuys;
  if ( TeamRunningScript != DOTATeam_t::DOTA_TEAM_FIRST )
    p_m_GoodGuys = p_m_BadGuys;
  return CUtlString::Get(p_m_GoodGuys + 461);
}


// Script_GetNumCouriers  (line 114, @0x0000000002827c90, libserver.so)  // inlines: GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
int __cdecl Script_GetNumCouriers()
{
  CDOTA_Commander *v0; // rax
  DOTATeam_t TeamRunningScript; // eax
  unsigned int v2; // edx
  DOTATeam_t v3; // ebx
  int result; // eax
  CDOTA_Commander *v5; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v0 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v0);
  v2 = TeamRunningScript - 2;
  v3 = TeamRunningScript;
  result = -1;
  if ( v2 <= 1 )
  {
    v5 = DOTACommander();
    p_m_GoodGuys = &v5->m_GoodGuys;
    p_m_BadGuys = &v5->m_BadGuys;
    if ( v3 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    return p_m_GoodGuys->m_hCouriers.m_Size;
  }
  return result;
}


// Script_GetCourier  (line 124, @0x000000000282c4e0, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamCommander, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_Bot_Script::GetScriptHandle
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall Script_GetCourier(int nCourier)
{
  __int64 v1; // r12
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // ebx
  CDOTA_Commander *v4; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // rax

  v1 = nCourier;
  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  if ( (TeamRunningScript - 2) > 1 )
    return 0;
  v4 = DOTACommander();
  p_m_GoodGuys = &v4->m_GoodGuys;
  p_m_BadGuys = &v4->m_BadGuys;
  if ( TeamRunningScript != DOTATeam_t::DOTA_TEAM_FIRST )
    p_m_GoodGuys = p_m_BadGuys;
  v7 = &p_m_GoodGuys->m_hCouriers.m_Memory.m_pMemory[v1];
  m_Index = v7->m_Index;
  if ( v7->m_Index + 2 > 1
    && (v9 = v7->m_Index,
        (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F]) != 0)
    && (v11 = &v10[v9 & 0x1FF]) != 0
    && m_Index == v11->m_EHandle.m_Index
    && (m_pInstance = v11->m_pInstance, v11->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return 0;
  }
}


// Script_GetCourierState  (line 138, @0x0000000002856a80, libserver.so)  // inlines: Get, GetBaseNPC, GetCourierState, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: ToBotScript, __dynamic_cast
// globals: CEntityHandle::gm_pEntityList
int __fastcall Script_GetCourierState(HSCRIPT hCourier)
{
  CDOTA_Bot_Script *v1; // rax
  uint32 m_Index; // edx
  unsigned __int16 v3; // cx
  CEntityIdentity *v4; // rax
  CEntityIdentity *v5; // rax
  CEntityInstance *m_pInstance; // rdi
  _DWORD *v8; // rax

  v1 = ToBotScript(hCourier, 0);
  if ( v1 != 0
    && (m_Index = v1->m_hBaseNPC.m_Index) + 2 > 1
    && (v3 = v1->m_hBaseNPC.m_Index, (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v3 >> 9) & 0x3F]) != 0)
    && (v5 = &v4[v3 & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (v8 = __dynamic_cast(m_pInstance, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Courier, 0)) != 0 )
  {
    return v8[1128];
  }
  else
  {
    return -1;
  }
}


// Script_IsPlayerBot  (line 151, @0x0000000002827df0, libserver.so)
// calls: CDOTA_PlayerResource::IsFakeClient
bool __fastcall Script_IsPlayerBot(int nPlayerID)
{
  return CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, nPlayerID);
}


// Script_IsTeamPlayer  (line 156, @0x0000000002827ea0, libserver.so)
// calls: CDOTA_PlayerResource::IsValidTeamPlayer
bool __fastcall Script_IsTeamPlayer(int nPlayerID)
{
  return CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, nPlayerID);
}


// Script_GetTeamForPlayer  (line 161, @0x0000000002827ec0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeam
int __fastcall Script_GetTeamForPlayer(int nPlayerID)
{
  return CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nPlayerID);
}


// Script_GetTeamPlayers  (line 166, @0x0000000002841f00, libserver.so)  // inlines: CVariantBase, TakeOwnership, ~CVariantBase
// calls: DOTACommander, CDOTA_Commander::GetActiveScriptVM, CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetTeam, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
__int64 *__fastcall Script_GetTeamPlayers(__int64 *a1, int nTeamNumber)
{
  CDOTA_Commander *v4; // rax
  IScriptVM *ActiveScriptVM; // rax
  __int64 v6; // rax
  unsigned int v7; // r13d
  int v8; // ebx
  CDOTA_Commander *v9; // rax
  IScriptVM *v10; // rax
  __int64 v11; // rdx
  void (__fastcall *v12)(IScriptVM *, __int64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r8
  __int64 varTable_8; // [rsp+8h] [rbp-48h]
  CVariantBase<CVariantDefaultAllocator> v16; // [rsp+10h] [rbp-40h] BYREF

  *(a1 + 4) = 0;
  *(a1 + 5) = 0;
  *a1 = 0;
  v4 = DOTACommander();
  ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v4);
  (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, a1);
  v6 = *a1;
  v7 = 0;
  v8 = 0;
  varTable_8 = v6;
  do
  {
    while ( !CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v8)
         || CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v8) != nTeamNumber )
    {
      if ( ++v8 == 64 )
        goto LABEL_6;
    }
    v9 = DOTACommander();
    v10 = CDOTA_Commander::GetActiveScriptVM(v9);
    v11 = *v10;
    v16.m_int = v8;
    v16.m_flags = 0;
    v12 = *(v11 + 248);
    v16.m_type = 5;
    v12(v10, varTable_8, v7, &v16);
    ++v8;
    ++v7;
    CVariantBase<CVariantDefaultAllocator>::Free(&v16);
  }
  while ( v8 != 64 );
LABEL_6:
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  return a1;
}


// Script_GetOpposingTeam  (line 187, @0x00000000028279c0, libserver.so)  // inlines: GetOpposingTeamNumber, GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
int __cdecl Script_GetOpposingTeam()
{
  CDOTA_Commander *v0; // rax
  DOTATeam_t TeamRunningScript; // eax
  int v2; // edx
  DOTATeam_t v3; // ebx
  CDOTA_Commander *v4; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v0 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v0);
  v2 = -1;
  v3 = TeamRunningScript;
  if ( (TeamRunningScript - 2) <= 1 )
  {
    v4 = DOTACommander();
    p_m_GoodGuys = &v4->m_GoodGuys;
    p_m_BadGuys = &v4->m_BadGuys;
    if ( v3 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    return (p_m_GoodGuys->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
  }
  return v2;
}


// Script_GetGameMode  (line 197, @0x0000000002827730, libserver.so)  // inlines: GetGameMode
int __cdecl Script_GetGameMode()
{
  return *&g_pGameRules[6].m_szQuestName[68];
}


// Script_SelectHero  (line 202, @0x0000000002828470, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTA_PlayerResource::GetSelectedHeroID, DevWarning(char const*,...), CDOTAGamerules::HeroPickState_IsPlayerIDInControl, DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::SetSelectedHeroID
// strings: "SelectHero called when not in hero selection!\n", "SelectHero called for player %d when they do not have hero pick control!\n", "SelectHero called for player %d when they are not on the script's team!\n", "SelectHero called for player %d, which has already selected hero %d!\n"
void __fastcall Script_SelectHero(int nPlayerID, const char *pszHeroName)
{
  bool IsPlayerIDInControl; // al
  const char *v5; // rdi
  __int64 v6; // rsi
  CDOTA_Commander *v7; // rax
  DOTATeam_t TeamRunningScript; // r14d
  int SelectedHeroID; // eax

  if ( CDOTA_PlayerResource::GetSelectedHeroID(g_pDOTAPlayerResource, nPlayerID) > 0 )
  {
    SelectedHeroID = CDOTA_PlayerResource::GetSelectedHeroID(g_pDOTAPlayerResource, nPlayerID);
    DevWarning("SelectHero called for player %d, which has already selected hero %d!\n", nPlayerID, SelectedHeroID);
  }
  else
  {
    if ( *&g_pGameRules[6].m_szQuestName[28] != 2 )
    {
      DevWarning("SelectHero called when not in hero selection!\n");
      return;
    }
    IsPlayerIDInControl = CDOTAGamerules::HeroPickState_IsPlayerIDInControl(g_pGameRules, nPlayerID);
    v5 = "SelectHero called for player %d when they do not have hero pick control!\n";
    v6 = nPlayerID;
    if ( !IsPlayerIDInControl )
      goto LABEL_7;
    v7 = DOTACommander();
    TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v7);
    if ( TeamRunningScript != CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nPlayerID) )
    {
      v5 = "SelectHero called for player %d when they are not on the script's team!\n";
      v6 = nPlayerID;
LABEL_7:
      DevWarning(v5, v6);
      return;
    }
    CDOTA_PlayerResource::SetSelectedHeroID(g_pDOTAPlayerResource, nPlayerID, pszHeroName);
  }
}


// Script_GetSelectedHeroName  (line 231, @0x0000000002827f10, libserver.so)
// calls: CDOTA_PlayerResource::GetSelectedHeroName
const char *__fastcall Script_GetSelectedHeroName(int nPlayerID)
{
  return CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, nPlayerID);
}


// Script_IsPlayerInHeroSelectionControl  (line 236, @0x0000000002827ee0, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::HeroPickState_IsPlayerIDInControl
bool __fastcall Script_IsPlayerInHeroSelectionControl(int nPlayerID)
{
  return *&g_pGameRules[6].m_szQuestName[28] == 2
      && CDOTAGamerules::HeroPickState_IsPlayerIDInControl(g_pGameRules, nPlayerID);
}


// Script_GetHeroPickState  (line 241, @0x0000000002827750, libserver.so)  // inlines: HeroPickState_Get
int __cdecl Script_GetHeroPickState()
{
  return *&g_pGameRules[6].m_szQuestName[32];
}


// Script_IsInCMBanPhase  (line 246, @0x0000000002827f30, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::CM_IsInBanPhase
bool __cdecl Script_IsInCMBanPhase()
{
  return CDOTAGamerules::CM_IsInBanPhase(g_pGameRules);
}


// Script_IsInCMPickPhase  (line 251, @0x0000000002827f50, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::CM_IsInSelectPhase
bool __cdecl Script_IsInCMPickPhase()
{
  return CDOTAGamerules::CM_IsInSelectPhase(g_pGameRules);
}


// Script_GetCMPhaseTimeRemaining  (line 256, @0x0000000002827f70, libserver.so)  // inlines: CM_GetPhaseTimeRemaining, DOTAGameRules, GetRemainingTime
// calls: CountdownTimer::Now
float __cdecl Script_GetCMPhaseTimeRemaining()
{
  float v1; // [rsp+Ch] [rbp-4h]

  v1 = *&g_pGameRules[9].m_szQuestName[28];
  return v1 - CountdownTimer::Now(&g_pGameRules[9].m_szQuestName[16]);
}


// Script_GetCMCaptain  (line 261, @0x0000000002827fb0, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTAGamerules::CM_GetCaptain
int __cdecl Script_GetCMCaptain()
{
  CDOTA_Commander *v0; // rax
  DOTATeam_t TeamRunningScript; // eax

  v0 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v0);
  return CDOTAGamerules::CM_GetCaptain(g_pGameRules, TeamRunningScript);
}


// Script_SetCMCaptain  (line 266, @0x0000000002827fe0, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTAGamerules::CM_SetCaptain
void __fastcall Script_SetCMCaptain(int nPlayerID)
{
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // eax

  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  CDOTAGamerules::CM_SetCaptain(g_pGameRules, TeamRunningScript, nPlayerID);
}


// Script_IsCMBannedHero  (line 271, @0x0000000002828020, libserver.so)
// calls: CDOTAGamerules::CM_IsBannedHero
bool __fastcall Script_IsCMBannedHero(const char *pszHeroName)
{
  return CDOTAGamerules::CM_IsBannedHero(g_pGameRules, pszHeroName);
}


// Script_IsCMPickedHero  (line 276, @0x0000000002828040, libserver.so)
// calls: CDOTAGamerules::CM_IsSelectedHero
bool __fastcall Script_IsCMPickedHero(int nTeam, const char *pszHeroName)
{
  return CDOTAGamerules::CM_IsSelectedHero(g_pGameRules, nTeam, pszHeroName);
}


// Script_CMBanHero  (line 281, @0x0000000002828060, libserver.so)
// calls: CDOTAGamerules::CM_AddBannedHero
void __fastcall Script_CMBanHero(const char *pszHeroName)
{
  CDOTAGamerules::CM_AddBannedHero(g_pGameRules, pszHeroName);
}


// Script_CMPickHero  (line 286, @0x0000000002828080, libserver.so)
// calls: CDOTAGamerules::CM_AddSelectedHero
void __fastcall Script_CMPickHero(const char *pszHeroName)
{
  CDOTAGamerules::CM_AddSelectedHero(g_pGameRules, pszHeroName);
}


// Script_GetRuneType  (line 291, @0x0000000002827d40, libserver.so)  // inlines: GetRuneType, GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
int __fastcall Script_GetRuneType(int nRune)
{
  __int64 v1; // r12
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // eax
  unsigned int v4; // edx
  DOTATeam_t v5; // ebx
  int result; // eax
  CDOTA_Commander *v7; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v1 = nRune;
  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  v4 = TeamRunningScript - 2;
  v5 = TeamRunningScript;
  result = -1;
  if ( v4 <= 1 )
  {
    v7 = DOTACommander();
    p_m_GoodGuys = &v7->m_GoodGuys;
    p_m_BadGuys = &v7->m_BadGuys;
    if ( v5 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    return p_m_GoodGuys->m_iRuneTypes.m_Memory[v1];
  }
  return result;
}


// Script_GetRuneStatus  (line 301, @0x0000000002827d90, libserver.so)  // inlines: GetRuneStatus, GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
DOTA_RUNE_STATUS __fastcall Script_GetRuneStatus(int nRune)
{
  __int64 v1; // r12
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // eax
  unsigned int v4; // edx
  DOTATeam_t v5; // ebx
  DOTA_RUNE_STATUS result; // eax
  CDOTA_Commander *v7; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v1 = nRune;
  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  v4 = TeamRunningScript - 2;
  v5 = TeamRunningScript;
  result = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_UNKNOWN;
  if ( v4 <= 1 )
  {
    v7 = DOTACommander();
    p_m_GoodGuys = &v7->m_GoodGuys;
    p_m_BadGuys = &v7->m_BadGuys;
    if ( v5 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    return p_m_GoodGuys->m_iRuneStatus.m_Memory[v1];
  }
  return result;
}


// Script_GetRuneSpawnLocation  (line 312, @0x000000000282a6e0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetBountyRuneSpawner, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetRuneSpawner, GetSerialNumber, IndexToIdentity, IsValidIndex, LookupEntity, Set, operator CEntityInstance*, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall Script_GetRuneSpawnLocation(int nRune)
{
  int v1; // edi
  CEntityInstance *v2; // rax
  CEntityIdentity *v3; // rdx
  __int16 v4; // cx
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *v10; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v12; // cx
  int v13; // eax
  CEntityIdentity *v14; // rdx
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( nRune <= 1 )
  {
    if ( nRune < 0 )
      goto LABEL_11;
    if ( nRune >= *&g_pGameRules[53].m_szQuestName[88] )
      goto LABEL_11;
    v10 = CEntityHandle::operator CEntityInstance *((*&g_pGameRules[53].m_szQuestName[96] + 4LL * nRune));
    if ( v10 == 0 )
      goto LABEL_11;
    m_pEntity = v10->m_pEntity;
    if ( m_pEntity == 0 )
      goto LABEL_11;
    v12 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v13 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
    if ( (v13 + 2) <= 1 )
      goto LABEL_11;
    v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 >> 9) & 0x3F];
    if ( v14 == 0 )
      goto LABEL_11;
    v7 = &v14[v13 & 0x1FF];
    if ( v7 == 0 || v7->m_EHandle.m_Index != v13 )
      goto LABEL_11;
  }
  else
  {
    v1 = nRune - 2;
    if ( v1 >= *&g_pGameRules[53].m_szQuestName[112] )
      goto LABEL_11;
    v2 = CEntityHandle::operator CEntityInstance *((*&g_pGameRules[53].m_szQuestName[120] + 4LL * v1));
    if ( v2 == 0 )
      goto LABEL_11;
    v3 = v2->m_pEntity;
    if ( v3 == 0 )
      goto LABEL_11;
    v4 = 0x7FFF;
    if ( v3->m_EHandle.m_Index != -1 )
      v4 = v3->m_EHandle.m_Index & 0x7FFF;
    v5 = (((v3->m_EHandle.m_Index >> 15) - (v3->m_flags & 1)) << 15) | v4 & 0x7FFF;
    if ( (v5 + 2) <= 1 )
      goto LABEL_11;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 == 0 )
      goto LABEL_11;
    v7 = &v6[v5 & 0x1FF];
    if ( v7 == 0 || v5 != v7->m_EHandle.m_Index )
      goto LABEL_11;
  }
  if ( v7->m_pInstance == 0 )
  {
LABEL_11:
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
    return result;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7->m_pInstance);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// Script_GetRuneTimeSinceSeen  (line 334, @0x0000000002827ce0, libserver.so)  // inlines: GetRuneTimeSinceSeen, GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
float __fastcall Script_GetRuneTimeSinceSeen(int nRune)
{
  __int64 v1; // r12
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // eax
  float result; // xmm0_4
  DOTATeam_t v5; // ebx
  CDOTA_Commander *v6; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v1 = nRune;
  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  result = -1.0;
  v5 = TeamRunningScript;
  if ( (TeamRunningScript - 2) <= 1 )
  {
    v6 = DOTACommander();
    p_m_GoodGuys = &v6->m_GoodGuys;
    p_m_BadGuys = &v6->m_BadGuys;
    if ( v5 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    return p_m_GoodGuys->m_fLastSeenRuneTime.m_Memory[v1];
  }
  return result;
}


// Script_IsItemPurchasedFromSecretShop  (line 344, @0x00000000028280a0, libserver.so)
// calls: IsPurchasedFromSecretShop
bool __fastcall Script_IsItemPurchasedFromSecretShop(const char *pszItemName)
{
  return IsPurchasedFromSecretShop(pszItemName);
}


// Script_IsItemPurchasedFromSideShop  (line 349, @0x0000000002827930, libserver.so)
// calls: IsPurchasedFromSideShop
bool __fastcall Script_IsItemPurchasedFromSideShop(const char *pszItemName)
{
  return IsPurchasedFromSideShop(pszItemName);
}


// Script_GetItemStockCount  (line 354, @0x00000000028280b0, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetNPCRunningScript, CDOTA_Commander::GetTeamRunningScript, CDOTAGamerules::GetItemStockCount
int __fastcall Script_GetItemStockCount(const char *pszItemName)
{
  CDOTA_Commander *v2; // rax
  CDOTA_BaseNPC *NPCRunningScript; // rax
  int v4; // r12d
  CDOTA_Commander *v5; // rax
  DOTATeam_t TeamRunningScript; // eax

  v2 = DOTACommander();
  NPCRunningScript = CDOTA_Commander::GetNPCRunningScript(v2);
  v4 = (*(NPCRunningScript->_vptr_IHandleEntity + 414))(NPCRunningScript);
  v5 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v5);
  return CDOTAGamerules::GetItemStockCount(g_pGameRules, TeamRunningScript, pszItemName, v4);
}


// Script_GetShopLocation  (line 359, @0x0000000002828370, libserver.so)
// calls: CDOTAGamerules::GetShop, CBaseEntity::GetAbsOrigin
Vector __fastcall Script_GetShopLocation(int nTeam, int nShop)
{
  CBaseEntity *Shop; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Shop = CDOTAGamerules::GetShop(g_pGameRules, nTeam, nShop);
  if ( Shop != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(Shop);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  else
  {
    result.z = vec3_origin.z;
    *&result.x = *&vec3_origin.x;
  }
  return result;
}


// Script_UnitToUnitDistance  (line 368, @0x0000000002856b30, libserver.so)  // inlines: FastSqrt, Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: ToBotScript, CBaseEntity::GetAbsOrigin, DevWarning(char const*,...)
// strings: "GetUnitToUnitDistance called with invalid unit 1\n", "GetUnitToUnitDistance called with invalid unit 2\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall Script_UnitToUnitDistance(HSCRIPT hUnit1, HSCRIPT hUnit2)
{
  CDOTA_Bot_Script *v3; // rbx
  CDOTA_Bot_Script *v4; // rax
  uint32 m_Index; // edx
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // r12
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  const CBaseEntity *v14; // rdi
  const Vector *v15; // rax

  v3 = ToBotScript(hUnit1, 0);
  v4 = ToBotScript(hUnit2, 0);
  if ( v3 != 0 )
  {
    if ( v4 != 0 )
    {
      m_Index = v4->m_hBaseNPC.m_Index;
      if ( m_Index + 2 <= 1
        || (v6 = v4->m_hBaseNPC.m_Index, (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F]) == 0)
        || (v8 = &v7[v6 & 0x1FF]) == 0
        || m_Index != v8->m_EHandle.m_Index
        || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      v11 = v3->m_hBaseNPC.m_Index;
      if ( v11 + 2 <= 1
        || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_hBaseNPC.m_Index) >> 9) & 0x3F]) == 0
        || (v13 = &v12[v3->m_hBaseNPC.m_Index & 0x1FF]) == 0
        || v11 != v13->m_EHandle.m_Index
        || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
        || !v14->m_bIsDOTANPC )
      {
        v14 = 0;
      }
      v15 = CBaseEntity::GetAbsOrigin(v14);
      return fsqrt(((v15->x - AbsOrigin->x) * (v15->x - AbsOrigin->x)) + ((v15->y - AbsOrigin->y)
                                                                        * (v15->y - AbsOrigin->y)));
    }
    else
    {
      DevWarning("GetUnitToUnitDistance called with invalid unit 2\n");
      return 0.0;
    }
  }
  else
  {
    DevWarning("GetUnitToUnitDistance called with invalid unit 1\n");
    return 0.0;
  }
}


// Script_UnitToLocationDistance  (line 388, @0x0000000002856cb0, libserver.so)  // inlines: FastSqrt, Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: ToBotScript, CBaseEntity::GetAbsOrigin, DevWarning(char const*,...)
// strings: "GetUnitToLocationDistance called with invalid unit\n"
// globals: CEntityHandle::gm_pEntityList
float __fastcall Script_UnitToLocationDistance(HSCRIPT hUnit, double a2)
{
  CDOTA_Bot_Script *v2; // rax
  uint32 m_Index; // edx
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax

  v2 = ToBotScript(hUnit, 0);
  if ( v2 != 0 )
  {
    m_Index = v2->m_hBaseNPC.m_Index;
    if ( m_Index + 2 <= 1
      || (v4 = v2->m_hBaseNPC.m_Index, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) == 0)
      || (v6 = &v5[v4 & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    return fsqrt(
             ((AbsOrigin->x - *&a2) * (AbsOrigin->x - *&a2))
           + ((AbsOrigin->y - *(&a2 + 1)) * (AbsOrigin->y - *(&a2 + 1))));
  }
  else
  {
    DevWarning("GetUnitToLocationDistance called with invalid unit\n");
    return 0.0;
  }
}


// Script_DebugDrawLine  (line 401, @0x0000000002828100, libserver.so)
// calls: NDebugOverlay::Line
void __fastcall Script_DebugDrawLine(
        unsigned int r,
        unsigned int g,
        unsigned int b,
        double a4,
        vec_t a5,
        double a6,
        vec_t a7)
{
  Vector vEnda; // [rsp+0h] [rbp-20h] BYREF
  Vector vStarta; // [rsp+10h] [rbp-10h] BYREF

  *&vStarta.x = a4;
  vStarta.z = a5;
  *&vEnda.x = a6;
  vEnda.z = a7;
  NDebugOverlay::Line(&vStarta, &vEnda, r, g, b, 1, 0.01023);
}


// Script_DebugDrawCircle  (line 406, @0x0000000002828150, libserver.so)
// calls: NDebugOverlay::Circle
void __fastcall Script_DebugDrawCircle(
        unsigned int r,
        unsigned int g,
        unsigned int b,
        double a4,
        vec_t a5,
        float a6,
        float fRadius)
{
  Vector vCentera; // [rsp+0h] [rbp-10h] BYREF

  vCentera.z = a5;
  *&vCentera.x = a4;
  NDebugOverlay::Circle(&vCentera, a6, r, g, b, 255, 1, 0.01023);
}


// Script_DebugDrawText  (line 411, @0x0000000002828190, libserver.so)
// calls: NDebugOverlay::ScreenText
void __fastcall Script_DebugDrawText(float x, float y, const char *pszText, __int64 r, __int64 g, __int64 b)
{
  NDebugOverlay::ScreenText(x, y, pszText, r, g, b, 255, 0.01023);
}


// Script_Min  (line 416, @0x0000000002827770, libserver.so)  // inlines: Min<float>
float __fastcall Script_Min(float a1, float fA, float fB)
{
  return fminf(a1, fA);
}


// Script_Max  (line 421, @0x0000000002827780, libserver.so)  // inlines: Max<float>
float __fastcall Script_Max(float a1, float fA, float fB)
{
  return fmaxf(a1, fA);
}


// Script_Clamp  (line 426, @0x0000000002827790, libserver.so)
float __fastcall Script_Clamp(float a1, float fValue, float fMin, float fMax)
{
  if ( a1 > fMin )
    return fMin;
  else
    return fmaxf(fValue, a1);
}


// Script_DotaTime  (line 431, @0x00000000028281b0, libserver.so)
// calls: CDOTAGamerules::GetDOTATime
float __cdecl Script_DotaTime()
{
  return CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
}


// Script_GameTime  (line 436, @0x00000000028277b0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
float __cdecl Script_GameTime()
{
  float result; // xmm0_4

  result = 0.0;
  if ( g_pGameRules != 0 )
    return *&g_pGameRules[18].m_szQuestName[20];
  return result;
}


// Script_RealTime  (line 441, @0x0000000002827890, libserver.so)
// calls: Plat_FloatTime
float __cdecl Script_RealTime()
{
  return Plat_FloatTime();
}


// Script_GetGameState  (line 446, @0x00000000028277d0, libserver.so)  // inlines: State_Get
int __cdecl Script_GetGameState()
{
  return *&g_pGameRules[6].m_szQuestName[28];
}


// Script_GetGameStateTimeRemaining  (line 451, @0x00000000028277f0, libserver.so)  // inlines: DOTAGameRules
float __cdecl Script_GetGameStateTimeRemaining()
{
  return *&g_pGameRules[6].m_szQuestName[36] - *&g_pGameRules[18].m_szQuestName[20];
}


// Script_GetPushLaneDesire  (line 456, @0x0000000002827a20, libserver.so)  // inlines: GetPushLaneDesire, GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
float __fastcall Script_GetPushLaneDesire(int nLane)
{
  __int64 v1; // r12
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // eax
  float result; // xmm0_4
  DOTATeam_t v5; // ebx
  CDOTA_Commander *v6; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v1 = nLane;
  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  result = -1.0;
  v5 = TeamRunningScript;
  if ( (TeamRunningScript - 2) <= 1 )
  {
    v6 = DOTACommander();
    p_m_GoodGuys = &v6->m_GoodGuys;
    p_m_BadGuys = &v6->m_BadGuys;
    if ( v5 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    return p_m_GoodGuys->m_fPushLaneDesire[v1];
  }
  return result;
}


// Script_GetDefendLaneDesire  (line 466, @0x0000000002827a80, libserver.so)  // inlines: GetDefendLaneDesire, GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
float __fastcall Script_GetDefendLaneDesire(int nLane)
{
  __int64 v1; // r12
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // eax
  float result; // xmm0_4
  DOTATeam_t v5; // ebx
  CDOTA_Commander *v6; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v1 = nLane;
  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  result = -1.0;
  v5 = TeamRunningScript;
  if ( (TeamRunningScript - 2) <= 1 )
  {
    v6 = DOTACommander();
    p_m_GoodGuys = &v6->m_GoodGuys;
    p_m_BadGuys = &v6->m_BadGuys;
    if ( v5 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    return p_m_GoodGuys->m_fDefendLaneDesire[v1];
  }
  return result;
}


// Script_GetFarmLaneDesire  (line 476, @0x0000000002827ae0, libserver.so)  // inlines: GetFarmLaneDesire, GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
float __fastcall Script_GetFarmLaneDesire(int nLane)
{
  __int64 v1; // r12
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // eax
  float result; // xmm0_4
  DOTATeam_t v5; // ebx
  CDOTA_Commander *v6; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v1 = nLane;
  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  result = -1.0;
  v5 = TeamRunningScript;
  if ( (TeamRunningScript - 2) <= 1 )
  {
    v6 = DOTACommander();
    p_m_GoodGuys = &v6->m_GoodGuys;
    p_m_BadGuys = &v6->m_BadGuys;
    if ( v5 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    return p_m_GoodGuys->m_fFarmLaneDesire[v1];
  }
  return result;
}


// Script_GetRoamDesire  (line 486, @0x0000000002827b40, libserver.so)  // inlines: GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
float __cdecl Script_GetRoamDesire()
{
  CDOTA_Commander *v0; // rax
  DOTATeam_t TeamRunningScript; // eax
  float result; // xmm0_4
  DOTATeam_t v3; // ebx
  CDOTA_Commander *v4; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v0 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v0);
  result = -1.0;
  v3 = TeamRunningScript;
  if ( (TeamRunningScript - 2) <= 1 )
  {
    v4 = DOTACommander();
    p_m_GoodGuys = &v4->m_GoodGuys;
    p_m_BadGuys = &v4->m_BadGuys;
    if ( v3 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    return p_m_GoodGuys->m_fRoamDesire;
  }
  return result;
}


// Script_GetRoamTarget  (line 496, @0x000000000282c420, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetRoamTarget, GetTeamCommander, IndexToIdentity, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_Bot_Script::GetScriptHandle
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __cdecl Script_GetRoamTarget()
{
  CDOTA_Commander *v0; // rax
  DOTATeam_t TeamRunningScript; // ebx
  CDOTA_Commander *v2; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rax

  v0 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v0);
  if ( (TeamRunningScript - 2) > 1 )
    return 0;
  v2 = DOTACommander();
  p_m_GoodGuys = &v2->m_GoodGuys;
  p_m_BadGuys = &v2->m_BadGuys;
  if ( TeamRunningScript != DOTATeam_t::DOTA_TEAM_FIRST )
    p_m_GoodGuys = p_m_BadGuys;
  m_Index = p_m_GoodGuys->m_hRoamTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F]) != 0
    && (v7 = &v6[m_Index & 0x1FF]) != 0
    && m_Index == v7->m_EHandle.m_Index
    && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return 0;
  }
}


// Script_GetRoshanDesire  (line 510, @0x0000000002827ba0, libserver.so)  // inlines: GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
float __cdecl Script_GetRoshanDesire()
{
  CDOTA_Commander *v0; // rax
  DOTATeam_t TeamRunningScript; // eax
  float result; // xmm0_4
  DOTATeam_t v3; // ebx
  CDOTA_Commander *v4; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax

  v0 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v0);
  result = -1.0;
  v3 = TeamRunningScript;
  if ( (TeamRunningScript - 2) <= 1 )
  {
    v4 = DOTACommander();
    p_m_GoodGuys = &v4->m_GoodGuys;
    p_m_BadGuys = &v4->m_BadGuys;
    if ( v3 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    return p_m_GoodGuys->m_fRoshanDesire;
  }
  return result;
}


// Script_GetWorldBounds  (line 520, @0x0000000002842030, libserver.so)  // inlines: CVariantBase, TakeOwnership, Vector2D, ~CVariantBase
// calls: DOTACommander, CDOTA_Commander::GetActiveScriptVM, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
ScriptVariant_t __cdecl Script_GetWorldBounds()
{
  uint64 v0; // rdi
  uint64 v1; // rbx
  CDOTA_Commander *v2; // rax
  IScriptVM *ActiveScriptVM; // rax
  __int64 v4; // r13
  CDOTA_Commander *v5; // rax
  int x_low; // r12d
  CDOTA_Commander *v7; // rax
  CDOTA_Commander *v8; // rax
  IScriptVM *v9; // rax
  void (__fastcall *v10)(IScriptVM *, __int64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r8
  CDOTA_Commander *v11; // rax
  IScriptVM *v12; // rax
  void (__fastcall *v13)(IScriptVM *, __int64, __int64, CVariantBase<CVariantDefaultAllocator> *); // r8
  CDOTA_Commander *v14; // rax
  IScriptVM *v15; // rax
  void (__fastcall *v16)(IScriptVM *, __int64, __int64, CVariantBase<CVariantDefaultAllocator> *); // r8
  CDOTA_Commander *v17; // rax
  IScriptVM *v18; // rax
  void (__fastcall *v19)(IScriptVM *, __int64, __int64, CVariantBase<CVariantDefaultAllocator> *); // r8
  int vMax; // [rsp+4h] [rbp-3Ch]
  int vMax_4; // [rsp+8h] [rbp-38h]
  int y_low; // [rsp+Ch] [rbp-34h]
  CVariantBase<CVariantDefaultAllocator> v23; // [rsp+10h] [rbp-30h] BYREF
  ScriptVariant_t result; // 0:rax.12

  v1 = v0;
  *(v0 + 8) = 0;
  *(v0 + 10) = 0;
  *v0 = 0;
  v2 = DOTACommander();
  ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v2);
  (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, v1);
  v4 = *v1;
  v5 = DOTACommander();
  x_low = LODWORD(v5->m_vWorldBounds[0].x);
  y_low = LODWORD(v5->m_vWorldBounds[0].y);
  v7 = DOTACommander();
  vMax_4 = LODWORD(v7->m_vWorldBounds[1].x);
  vMax = LODWORD(v7->m_vWorldBounds[1].y);
  v8 = DOTACommander();
  v9 = CDOTA_Commander::GetActiveScriptVM(v8);
  v10 = *(*v9 + 248LL);
  v23.m_int = x_low;
  v23.m_type = 1;
  v23.m_flags = 0;
  v10(v9, v4, 0, &v23);
  CVariantBase<CVariantDefaultAllocator>::Free(&v23);
  v11 = DOTACommander();
  v12 = CDOTA_Commander::GetActiveScriptVM(v11);
  v13 = *(*v12 + 248LL);
  v23.m_type = 1;
  v23.m_flags = 0;
  v23.m_int = y_low;
  v13(v12, v4, 1, &v23);
  CVariantBase<CVariantDefaultAllocator>::Free(&v23);
  v14 = DOTACommander();
  v15 = CDOTA_Commander::GetActiveScriptVM(v14);
  v16 = *(*v15 + 248LL);
  v23.m_type = 1;
  v23.m_flags = 0;
  v23.m_int = vMax_4;
  v16(v15, v4, 2, &v23);
  CVariantBase<CVariantDefaultAllocator>::Free(&v23);
  v17 = DOTACommander();
  v18 = CDOTA_Commander::GetActiveScriptVM(v17);
  v19 = *(*v18 + 248LL);
  v23.m_type = 1;
  v23.m_flags = 0;
  v23.m_int = vMax;
  v19(v18, v4, 3, &v23);
  CVariantBase<CVariantDefaultAllocator>::Free(&v23);
  if ( *(v1 + 8) == 31 )
    *(v1 + 8) = 36;
  result.m_uint64 = v1;
  return result;
}


// Script_IsLocationPassable  (line 539, @0x00000000028281d0, libserver.so)
// calls: DOTACommander, CDOTA_Commander::IsLocationPassable
bool __fastcall Script_IsLocationPassable(const Vector *const vLocation)
{
  CDOTA_Commander *v2; // rax

  v2 = DOTACommander();
  return CDOTA_Commander::IsLocationPassable(v2, vLocation);
}


// Script_GetHeightLevel  (line 544, @0x0000000002828200, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetLocationHeightLevel
int __fastcall Script_GetHeightLevel(const Vector *const vLocation)
{
  CDOTA_Commander *v2; // rax

  v2 = DOTACommander();
  return CDOTA_Commander::GetLocationHeightLevel(v2, vLocation);
}


// Script_GetNeutralSpawners  (line 549, @0x0000000002843590, libserver.so)  // inlines: CVariantBase, CopyData, CopyData<Vector>, DOTAGameRules, Element, Get, GetInstance, TakeOwnership, operator[], ~CVariantBase
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_Commander::GetActiveScriptVM, CDOTAGamerules::GetNeutralSpawners, CDOTAGamerules::GetAncientSpawners, CEntityHandle::operator CEntityInstance*, CFmtStrN<256, false>::CFmtStrN, CVariantBase<CVariantDefaultAllocator>::Free, CBaseEntity::GetAbsOrigin, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, _Unwind_Resume, __stack_chk_fail
// strings: "basic_%d", "ancient_%d", "basic_enemy_%d", "ancient_enemy_%d"
ScriptVariant_t __cdecl Script_GetNeutralSpawners()
{
  CVariantBase<CVariantDefaultAllocator> *v0; // rdi
  CVariantBase<CVariantDefaultAllocator> *v1; // r15
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // ebx
  CDOTA_Commander *v4; // rax
  IScriptVM *ActiveScriptVM; // rax
  const CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *NeutralSpawners; // r13
  const CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *AncientSpawners; // r14
  const CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v8; // r15
  const CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v9; // r15
  __int64 v10; // rbx
  const CBaseEntity *v11; // r12
  CDOTA_Commander *v12; // rax
  IScriptVM *v13; // r13
  CDOTA_Commander *v14; // rax
  IScriptVM *v15; // r13
  void (__fastcall *v16)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r14
  const Vector *AbsOrigin; // r12
  CVariantBase<CVariantDefaultAllocator> *pDest; // [rsp+18h] [rbp-208h]
  const CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > **v19; // [rsp+38h] [rbp-1E8h]
  void (__fastcall *iTableIndex_0)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // [rsp+40h] [rbp-1E0h]
  uint64 m_uint64; // [rsp+48h] [rbp-1D8h]
  unsigned int iTableIndex; // [rsp+5Ch] [rbp-1C4h]
  ScriptVariant_t varTable; // [rsp+60h] [rbp-1C0h] BYREF
  CVariantBase<CVariantDefaultAllocator> v24; // [rsp+70h] [rbp-1B0h] BYREF
  CVariantBase<CVariantDefaultAllocator> v25; // [rsp+80h] [rbp-1A0h] BYREF
  _QWORD v26[4]; // [rsp+90h] [rbp-190h] BYREF
  const CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pNeutralEnemySpawners; // [rsp+B0h] [rbp-170h]
  const char *v28; // [rsp+B8h] [rbp-168h]
  const CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pAncientEnemySpawners; // [rsp+C0h] [rbp-160h]
  const char *v30; // [rsp+C8h] [rbp-158h]
  CFmtStrN<256,false> v31; // [rsp+D0h] [rbp-150h] BYREF
  unsigned __int64 v32; // [rsp+1E8h] [rbp-38h]
  ScriptVariant_t result; // 0:rax.12

  v1 = v0;
  pDest = v0;
  v32 = __readfsqword(0x28u);
  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  if ( (TeamRunningScript - 2) <= 1 )
  {
    varTable.m_type = 0;
    varTable.m_flags = 0;
    varTable.m_uint64 = 0;
    v4 = DOTACommander();
    ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v4);
    (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, &varTable);
    m_uint64 = varTable.m_uint64;
    NeutralSpawners = CDOTAGamerules::GetNeutralSpawners(g_pGameRules, TeamRunningScript);
    AncientSpawners = CDOTAGamerules::GetAncientSpawners(g_pGameRules, TeamRunningScript);
    v8 = CDOTAGamerules::GetNeutralSpawners(g_pGameRules, ((TeamRunningScript == DOTATeam_t::DOTA_TEAM_FIRST) + 2));
    pAncientEnemySpawners = CDOTAGamerules::GetAncientSpawners(
                              g_pGameRules,
                              ((TeamRunningScript == DOTATeam_t::DOTA_TEAM_FIRST) + 2));
    v26[1] = "basic_%d";
    v26[3] = "ancient_%d";
    v19 = v26;
    v28 = "basic_enemy_%d";
    v30 = "ancient_enemy_%d";
    pNeutralEnemySpawners = v8;
    v9 = NeutralSpawners;
    v26[0] = NeutralSpawners;
    v26[2] = AncientSpawners;
    iTableIndex = 0;
    while ( 1 )
    {
      if ( v9->m_Size > 0 )
      {
        v10 = 0;
        do
        {
          v11 = CEntityHandle::operator CEntityInstance *(&v9->m_Memory.m_pMemory[v10]);
          if ( v11 != 0 )
          {
            v12 = DOTACommander();
            v13 = CDOTA_Commander::GetActiveScriptVM(v12);
            iTableIndex_0 = *(*v13 + 248LL);
            CFmtStrN<256,false>::CFmtStrN(&v31, v19[1], v10);
            v24.m_type = 0;
            v24.m_flags = 0;
            CVariantBase<CVariantDefaultAllocator>::Free(&v24);
            v24.m_type = 30;
            v24.m_uint64 = v31.m_szBuf;
            iTableIndex_0(v13, m_uint64, iTableIndex, &v24);
            CVariantBase<CVariantDefaultAllocator>::Free(&v24);
            v14 = DOTACommander();
            v15 = CDOTA_Commander::GetActiveScriptVM(v14);
            v16 = *(*v15 + 248LL);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
            v25.m_type = 0;
            v25.m_flags = 0;
            CVariantBase<CVariantDefaultAllocator>::Free(&v25);
            v25.m_uint64 = AbsOrigin;
            v25.m_type = 3;
            v16(v15, m_uint64, iTableIndex + 1, &v25);
            CVariantBase<CVariantDefaultAllocator>::Free(&v25);
            iTableIndex += 2;
          }
          ++v10;
        }
        while ( v10 < v9->m_Size );
      }
      v19 += 2;
      if ( v19 == &v31 )
        break;
      v9 = *v19;
    }
    if ( varTable.m_type == 31 )
      varTable.m_type = 36;
    pDest->m_type = 0;
    pDest->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varTable, pDest);
    CVariantBase<CVariantDefaultAllocator>::Free(&varTable);
  }
  else
  {
    v1->m_uint64 = 0;
    v1->m_type = 0;
    v1->m_flags = 0;
  }
  result.m_uint64 = pDest;
  return result;
}


// Script_GetUnitPotentialValue  (line 600, @0x0000000002856d80, libserver.so)  // inlines: Get, GetBaseNPC, GetInstance, GetTeamCommander, ToDOTABaseNPC, operator CBaseEntity*
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, ToBotScript, CEntityHandle::operator CEntityInstance*, CDOTA_TeamCommander::GetUnitPotentialValue
__int64 __fastcall Script_GetUnitPotentialValue(HSCRIPT hUnit, double a2, vec_t a3, float a4, float fRadius)
{
  CDOTA_Commander *v6; // rax
  DOTATeam_t TeamRunningScript; // ebx
  CDOTA_Bot_Script *v9; // rax
  CEntityInstance *v10; // rax
  CDOTA_Commander *v11; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  Vector vLocationa; // [rsp+10h] [rbp-20h] BYREF

  *&vLocationa.x = a2;
  vLocationa.z = a3;
  v6 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v6);
  if ( (TeamRunningScript - 2) > 1 )
    return 0;
  v9 = ToBotScript(hUnit, 0);
  if ( v9 == 0 )
    return 0;
  v10 = CEntityHandle::operator CEntityInstance *(&v9->m_hBaseNPC);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    return 0;
  v11 = DOTACommander();
  p_m_GoodGuys = &v11->m_GoodGuys;
  p_m_BadGuys = &v11->m_BadGuys;
  if ( TeamRunningScript != DOTATeam_t::DOTA_TEAM_FIRST )
    p_m_GoodGuys = p_m_BadGuys;
  return CDOTA_TeamCommander::GetUnitPotentialValue(p_m_GoodGuys, &vLocationa, 0, a4);
}


// Script_IsCourierAvailable  (line 614, @0x0000000002827e10, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_PlayerResource::GetNumCouriersForTeam, CDOTA_PlayerResource::GetNthCourierForTeam
bool __cdecl Script_IsCourierAvailable()
{
  CDOTA_Commander *v0; // rax
  DOTATeam_t TeamRunningScript; // r12d
  int NumCouriersForTeam; // r14d
  int v4; // ebx
  CDOTA_Unit_Courier *NthCourierForTeam; // rax

  v0 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v0);
  if ( (TeamRunningScript - 2) > 1 )
    return 0;
  NumCouriersForTeam = CDOTA_PlayerResource::GetNumCouriersForTeam(g_pDOTAPlayerResource, TeamRunningScript);
  if ( NumCouriersForTeam <= 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    NthCourierForTeam = CDOTA_PlayerResource::GetNthCourierForTeam(g_pDOTAPlayerResource, v4, TeamRunningScript);
    if ( NthCourierForTeam != 0 && NthCourierForTeam->m_nCourierState.m_Value == CourierState_t::COURIER_STATE_IDLE )
      break;
    if ( ++v4 == NumCouriersForTeam )
      return 0;
  }
  return 1;
}


// Script_GetTreeLocation  (line 633, @0x0000000002828550, libserver.so)  // inlines: GetBinaryObject, operator[]
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall Script_GetTreeLocation(int nTree)
{
  CDOTA_BinaryObject *v3; // rdi
  const Vector *AbsOrigin; // rax
  vec_t z; // [rsp+18h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( nTree >= 0
    && nTree < g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size
    && (v3 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[nTree]) != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  else
  {
    z = vec3_origin.z;
    result.z = z;
    *&result.x = *&vec3_origin.x;
  }
  return result;
}


// Script_GetTower  (line 642, @0x000000000282c0e0, libserver.so)
// calls: CDOTAGamerules::GetTeamTower, CDOTA_Bot_Script::GetScriptHandle
HSCRIPT __fastcall Script_GetTower(int nTeam, int nTower)
{
  CDOTA_BaseNPC_Tower *TeamTower; // rax

  TeamTower = CDOTAGamerules::GetTeamTower(g_pGameRules, nTeam, nTower);
  if ( TeamTower != 0 )
    return CDOTA_Bot_Script::GetScriptHandle(TeamTower->m_pBotScript);
  else
    return 0;
}


// Script_GetBarracks  (line 651, @0x000000000282c120, libserver.so)
// calls: CDOTAGamerules::GetTeamBarracks, CDOTA_Bot_Script::GetScriptHandle
HSCRIPT __fastcall Script_GetBarracks(int nTeam, int nBarracks)
{
  CDOTA_BaseNPC_Building *TeamBarracks; // rax

  TeamBarracks = CDOTAGamerules::GetTeamBarracks(g_pGameRules, nTeam, nBarracks);
  if ( TeamBarracks != 0 )
    return CDOTA_Bot_Script::GetScriptHandle(TeamBarracks->m_pBotScript);
  else
    return 0;
}


// Script_GetShrine  (line 660, @0x000000000282c160, libserver.so)
// calls: CDOTAGamerules::GetTeamShrine, CDOTA_Bot_Script::GetScriptHandle
HSCRIPT __fastcall Script_GetShrine(int nTeam, int nShrine)
{
  CDOTA_BaseNPC_Building *TeamShrine; // rax

  TeamShrine = CDOTAGamerules::GetTeamShrine(g_pGameRules, nTeam, nShrine);
  if ( TeamShrine != 0 )
    return CDOTA_Bot_Script::GetScriptHandle(TeamShrine->m_pBotScript);
  else
    return 0;
}


// Script_GetShrineCooldown  (line 669, @0x0000000002856e30, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABuilding, operator CBaseEntity*, operator CEntityInstance*
// calls: ToBotScript, __dynamic_cast, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCooldownTimeRemaining
// strings: "filler_ability"
// globals: CEntityHandle::gm_pEntityList
float __fastcall Script_GetShrineCooldown(HSCRIPT hShrine)
{
  CDOTA_Bot_Script *v1; // rax
  uint32 m_Index; // edx
  unsigned __int16 v3; // cx
  CEntityIdentity *v4; // rax
  CEntityIdentity *v5; // rax
  CEntityInstance *m_pInstance; // rdi
  CDOTA_BaseNPC *v8; // rdi
  CDOTABaseAbility *AbilityByName; // rax

  v1 = ToBotScript(hShrine, 0);
  if ( v1 != 0
    && (m_Index = v1->m_hBaseNPC.m_Index) + 2 > 1
    && (v3 = v1->m_hBaseNPC.m_Index, (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v3 >> 9) & 0x3F]) != 0)
    && (v5 = &v4[v3 & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x14) != 0
    && (v8 = __dynamic_cast(m_pInstance, &`typeinfo for'CDOTA_BaseNPC_Building, &`typeinfo for'CDOTA_BaseNPC_Healer, 0)) != 0
    && (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v8, "filler_ability", 0)) != 0 )
  {
    return CDOTABaseAbility::GetCooldownTimeRemaining(AbilityByName);
  }
  else
  {
    return -1.0;
  }
}


// Script_IsShrineHealing  (line 686, @0x0000000002856ef0, libserver.so)  // inlines: Get, GetBaseNPC, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABuilding, operator CBaseEntity*, operator CEntityInstance*
// calls: ToBotScript, __dynamic_cast, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_filler_heal_aura"
// globals: CEntityHandle::gm_pEntityList
float __fastcall Script_IsShrineHealing(HSCRIPT hShrine)
{
  CDOTA_Bot_Script *v1; // rax
  uint32 m_Index; // edx
  unsigned __int16 v3; // cx
  CEntityIdentity *v4; // rax
  float result; // xmm0_4
  CEntityIdentity *v6; // rax
  CEntityInstance *m_pInstance; // rdi
  CDOTA_BaseNPC *v8; // rax
  CDOTA_Buff *ModifierByName; // rax

  v1 = ToBotScript(hShrine, 0);
  if ( v1 == 0 )
    return -1.0;
  m_Index = v1->m_hBaseNPC.m_Index;
  if ( m_Index + 2 <= 1 )
    return -1.0;
  v3 = v1->m_hBaseNPC.m_Index;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v3 >> 9) & 0x3F];
  if ( v4 == 0 )
    return -1.0;
  result = -1.0;
  v6 = &v4[v3 & 0x1FF];
  if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
  {
    m_pInstance = v6->m_pInstance;
    if ( v6->m_pInstance != 0
      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x14) != 0 )
    {
      v8 = __dynamic_cast(m_pInstance, &`typeinfo for'CDOTA_BaseNPC_Building, &`typeinfo for'CDOTA_BaseNPC_Healer, 0);
      result = -1.0;
      if ( v8 != 0 )
      {
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(v8, "modifier_filler_heal_aura", 0);
        result = 0.0;
        if ( ModifierByName != 0 )
          return 1.0;
      }
    }
  }
  return result;
}


// Script_GetAncient  (line 699, @0x000000000282c1a0, libserver.so)
// calls: CDOTAGamerules::GetFort, CDOTA_Bot_Script::GetScriptHandle
HSCRIPT __fastcall Script_GetAncient(int nTeam)
{
  CDOTA_BaseNPC_Building *Fort; // rax

  Fort = CDOTAGamerules::GetFort(g_pGameRules, nTeam);
  if ( Fort != 0 )
    return CDOTA_Bot_Script::GetScriptHandle(Fort->m_pBotScript);
  else
    return 0;
}


// Script_GetUnitList  (line 708, @0x000000000284a250, libserver.so)  // inlines: CVariantBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamCommander, IndexToIdentity, IsValid, LookupEntity, TakeOwnership, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_Commander::GetActiveScriptVM, CDOTA_TeamCommander::GetUnitList, CDOTA_Bot_Script::GetScriptHandle, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
CVariantBase<CVariantDefaultAllocator> *__fastcall Script_GetUnitList(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTA_TeamCommander::TeamCommanderUnitList_t nListType)
{
  CDOTA_Commander *v4; // rax
  DOTATeam_t TeamRunningScript; // ebx
  CDOTA_Commander *v7; // rax
  IScriptVM *ActiveScriptVM; // rax
  CDOTA_Commander *v9; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *UnitList; // rax
  CHandle<CBaseEntity> *m_pMemory; // rbx
  unsigned int v14; // r12d
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_Commander *v18; // rax
  IScriptVM *v19; // r13
  void (__fastcall *v20)(IScriptVM *, _QWORD, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r15
  HSCRIPT ScriptHandle; // rax
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::const_iterator __for_end; // [rsp+28h] [rbp-58h]
  ScriptVariant_t varTable; // [rsp+30h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v25[4]; // [rsp+40h] [rbp-40h] BYREF

  v4 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v4);
  if ( (TeamRunningScript - 2) <= 1 )
  {
    varTable.m_uint64 = 0;
    varTable.m_type = 0;
    varTable.m_flags = 0;
    v7 = DOTACommander();
    ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v7);
    (*(*ActiveScriptVM + 360LL))(ActiveScriptVM);
    v9 = DOTACommander();
    p_m_GoodGuys = &v9->m_GoodGuys;
    p_m_BadGuys = &v9->m_BadGuys;
    if ( TeamRunningScript != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    UnitList = CDOTA_TeamCommander::GetUnitList(p_m_GoodGuys, nListType);
    m_pMemory = UnitList->m_Memory.m_pMemory;
    __for_end = &m_pMemory[UnitList->m_Size];
    if ( m_pMemory != __for_end )
    {
      v14 = 0;
      do
      {
        while ( 1 )
        {
          if ( m_pMemory->m_Index + 2 > 1 )
          {
            v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
            if ( v15 != 0 )
            {
              v16 = &v15[m_pMemory->m_Index & 0x1FF];
              if ( v16 != 0 && m_pMemory->m_Index == v16->m_EHandle.m_Index )
              {
                m_pInstance = v16->m_pInstance;
                if ( v16->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  break;
              }
            }
          }
          if ( __for_end == ++m_pMemory )
            goto LABEL_16;
        }
        v18 = DOTACommander();
        v19 = CDOTA_Commander::GetActiveScriptVM(v18);
        v20 = *(*v19 + 248LL);
        ScriptHandle = CDOTA_Bot_Script::GetScriptHandle(m_pInstance[45].m_CScriptComponent);
        v25[0].m_type = 31;
        v25[0].m_flags = 0;
        v25[0].m_uint64 = ScriptHandle;
        v20(v19, 0, v14, v25);
        ++m_pMemory;
        ++v14;
        CVariantBase<CVariantDefaultAllocator>::Free(v25);
      }
      while ( __for_end != m_pMemory );
    }
LABEL_16:
    a1->m_type = 0;
    a1->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varTable, a1);
    CVariantBase<CVariantDefaultAllocator>::Free(&varTable);
  }
  else
  {
    a1->m_uint64 = 0;
    a1->m_type = 0;
    a1->m_flags = 0;
  }
  return a1;
}


// Script_GetLaneFrontAmount  (line 736, @0x0000000002827c00, libserver.so)  // inlines: GetLaneFrontAmount, GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript
float __fastcall Script_GetLaneFrontAmount(int nTeam, int nLane, bool bIgnoreTowers)
{
  __int64 v3; // r14
  CDOTA_Commander *v6; // rax
  DOTATeam_t TeamRunningScript; // eax
  float result; // xmm0_4
  DOTATeam_t v9; // ebx
  CDOTA_Commander *v10; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  _BOOL8 v13; // rax
  __int64 v14; // rax

  v3 = nLane;
  v6 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v6);
  result = -1.0;
  v9 = TeamRunningScript;
  if ( (TeamRunningScript - 2) <= 1 )
  {
    v10 = DOTACommander();
    p_m_GoodGuys = &v10->m_GoodGuys;
    p_m_BadGuys = &v10->m_BadGuys;
    if ( v9 != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    v13 = nTeam != 2;
    if ( bIgnoreTowers )
      v14 = v3 + 4 * v13 + 220;
    else
      v14 = v3 + 4 * v13 + 228;
    return *(&p_m_GoodGuys->_vptr_CDOTA_TeamCommander + v14 + 1);
  }
  return result;
}


// Script_GetLaneFrontLocation  (line 746, @0x00000000028386d0, libserver.so)  // inlines: GetLaneFrontAmount, GetLaneFrontLocation, GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_TeamCommander::CalculateLocationAlongLane
__m128i __fastcall Script_GetLaneFrontLocation(int nTeam, DOTA_LANE nLane, float a3, float fDeltaFromFront)
{
  CDOTA_Commander *v6; // rax
  DOTATeam_t TeamRunningScript; // ebx
  vec_t z; // eax
  CDOTA_Commander *v10; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  __int64 v13; // xmm0_8
  __int32 v14; // xmm1_4
  __m128i v16; // [rsp+20h] [rbp-40h] BYREF
  __int32 v17; // [rsp+38h] [rbp-28h]

  v6 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v6);
  if ( (TeamRunningScript - 2) <= 1 )
  {
    v10 = DOTACommander();
    p_m_GoodGuys = &v10->m_GoodGuys;
    p_m_BadGuys = &v10->m_BadGuys;
    if ( TeamRunningScript != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    v13 = CDOTA_TeamCommander::CalculateLocationAlongLane(
            p_m_GoodGuys,
            nLane,
            p_m_GoodGuys->m_LaneFrontTowersAmounts[nTeam != 2][nLane],
            a3,
            0.0,
            0).m128i_u64[0];
    v17 = v14;
    v16.m128i_i64[0] = v13;
    v16.m128i_i32[2] = v14;
  }
  else
  {
    z = vec3_origin.z;
    v16.m128i_i64[0] = *&vec3_origin.x;
    *&v16.m128i_i32[2] = z;
  }
  return _mm_loadl_epi64(&v16);
}


// Script_GetLocationAlongLane  (line 756, @0x00000000028385f0, libserver.so)  // inlines: GetTeamCommander
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_TeamCommander::CalculateLocationAlongLane
__m128i __fastcall Script_GetLocationAlongLane(DOTA_LANE nLane, float a2, float fAmount)
{
  CDOTA_Commander *v4; // rax
  DOTATeam_t TeamRunningScript; // ebx
  vec_t z; // eax
  CDOTA_Commander *v8; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  __int32 v11; // xmm1_4
  __m128i v13; // [rsp+20h] [rbp-20h] BYREF

  v4 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v4);
  if ( (TeamRunningScript - 2) <= 1 )
  {
    v8 = DOTACommander();
    p_m_GoodGuys = &v8->m_GoodGuys;
    p_m_BadGuys = &v8->m_BadGuys;
    if ( TeamRunningScript != DOTATeam_t::DOTA_TEAM_FIRST )
      p_m_GoodGuys = p_m_BadGuys;
    v13.m128i_i64[0] = CDOTA_TeamCommander::CalculateLocationAlongLane(p_m_GoodGuys, nLane, a2, 0.0, 0.0, 0).m128i_u64[0];
    v13.m128i_i32[2] = v11;
  }
  else
  {
    z = vec3_origin.z;
    v13.m128i_i64[0] = *&vec3_origin.x;
    *&v13.m128i_i32[2] = z;
  }
  return _mm_loadl_epi64(&v13);
}


// Script_GetDroppedItemList  (line 766, @0x00000000028439a0, libserver.so)  // inlines: CEntityHandle, CHandle, CVariantBase, CopyData<Vector>, DOTAGameRules, Get, GetContainedItem, GetDroppedItem, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TakeOwnership, operator CBaseEntity*, operator CDOTA_Item*, operator CEntityInstance*, ~CVariantBase
// calls: DOTACommander, CDOTA_Commander::GetTeamRunningScript, CDOTA_Commander::GetActiveScriptVM, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible, CDOTABaseAbility::GetBotScript, CDOTABaseAbility_BotScript::GetScriptHandle, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
ScriptVariant_t __cdecl Script_GetDroppedItemList()
{
  CVariantBase<CVariantDefaultAllocator> *v0; // rdi
  CVariantBase<CVariantDefaultAllocator> *v1; // rbx
  CDOTA_Commander *v2; // rax
  DOTATeam_t TeamRunningScript; // r14d
  CDOTA_Commander *v4; // rax
  IScriptVM *ActiveScriptVM; // rax
  CGameRules *v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rdi
  uint32 m_nHashCode; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_Commander *v15; // rax
  IScriptVM *v16; // r15
  CDOTABaseAbility_BotScript *BotScript; // rax
  HSCRIPT ScriptHandle; // rax
  CDOTA_Commander *v19; // rax
  IScriptVM *v20; // r15
  CDOTABaseAbility *v21; // rcx
  CVariantBase<CVariantDefaultAllocator> *pDest; // [rsp+10h] [rbp-90h]
  CDOTABaseAbility *v23; // [rsp+18h] [rbp-88h]
  CDOTABaseAbility *v24; // [rsp+18h] [rbp-88h]
  void (__fastcall *nColumn_0)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // [rsp+20h] [rbp-80h]
  uint64 m_uint64; // [rsp+28h] [rbp-78h]
  unsigned int nColumn; // [rsp+34h] [rbp-6Ch]
  Vector vItemLoc; // [rsp+40h] [rbp-60h] BYREF
  ScriptVariant_t varTable; // [rsp+50h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v30; // [rsp+60h] [rbp-40h] BYREF
  ScriptVariant_t result; // 0:rax.12

  v1 = v0;
  pDest = v0;
  v2 = DOTACommander();
  TeamRunningScript = CDOTA_Commander::GetTeamRunningScript(v2);
  if ( (TeamRunningScript - 2) <= 1 )
  {
    varTable.m_uint64 = 0;
    varTable.m_type = 0;
    varTable.m_flags = 0;
    v4 = DOTACommander();
    ActiveScriptVM = CDOTA_Commander::GetActiveScriptVM(v4);
    (*(*ActiveScriptVM + 360LL))(ActiveScriptVM, &varTable);
    m_uint64 = varTable.m_uint64;
    v6 = g_pGameRules;
    if ( *&g_pGameRules[55].m_szQuestName[80] > 0 )
    {
      v7 = 0;
      nColumn = 0;
      do
      {
        v8 = *(*&v6[55].m_szQuestName[88] + 4 * v7);
        v30.m_int = v8;
        if ( (v8 + 2) > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v30.m_uint) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[LOWORD(v30.m_float) & 0x1FF];
            if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
            {
              m_pInstance = v10->m_pInstance;
              if ( v10->m_pInstance != 0 )
              {
                m_nHashCode = m_pInstance[25].m_worldGroupId.m_nHashCode;
                if ( m_nHashCode + 2 > 1 )
                {
                  v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pInstance[25].m_worldGroupId.m_nHashCode) >> 9)
                                                                       & 0x3F];
                  if ( v13 != 0 )
                  {
                    v14 = &v13[m_pInstance[25].m_worldGroupId.m_nHashCode & 0x1FF];
                    if ( v14 != 0 && m_nHashCode == v14->m_EHandle.m_Index )
                    {
                      v23 = v14->m_pInstance;
                      if ( v14->m_pInstance != 0 )
                      {
                        vItemLoc = *CBaseEntity::GetAbsOrigin(m_pInstance);
                        if ( CDOTAFogOfWarSystem::IsLocationVisible(
                               &g_DOTAFogOfWarSystem,
                               TeamRunningScript,
                               &vItemLoc,
                               0.0) )
                        {
                          v15 = DOTACommander();
                          v16 = CDOTA_Commander::GetActiveScriptVM(v15);
                          nColumn_0 = *(*v16 + 248LL);
                          BotScript = CDOTABaseAbility::GetBotScript(v23);
                          ScriptHandle = CDOTABaseAbility_BotScript::GetScriptHandle(BotScript);
                          v30.m_type = 31;
                          v30.m_flags = 0;
                          v30.m_uint64 = ScriptHandle;
                          nColumn_0(v16, m_uint64, nColumn, &v30);
                          CVariantBase<CVariantDefaultAllocator>::Free(&v30);
                          v19 = DOTACommander();
                          v20 = CDOTA_Commander::GetActiveScriptVM(v19);
                          v21 = *(*v20 + 248LL);
                          v30.m_type = 0;
                          v30.m_flags = 0;
                          v24 = v21;
                          CVariantBase<CVariantDefaultAllocator>::Free(&v30);
                          v30.m_type = 3;
                          v30.m_uint64 = &vItemLoc;
                          (v24)(v20, m_uint64, nColumn + 1, &v30);
                          CVariantBase<CVariantDefaultAllocator>::Free(&v30);
                          nColumn += 2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v6 = g_pGameRules;
        ++v7;
      }
      while ( *&g_pGameRules[55].m_szQuestName[80] > v7 );
    }
    if ( varTable.m_type == 31 )
      varTable.m_type = 36;
    pDest->m_type = 0;
    pDest->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varTable, pDest);
    CVariantBase<CVariantDefaultAllocator>::Free(&varTable);
  }
  else
  {
    v1->m_uint64 = 0;
    v1->m_type = 0;
    v1->m_flags = 0;
  }
  result.m_uint64 = pDest;
  return result;
}


// Script_GetRoshanKillTime  (line 805, @0x0000000002828230, libserver.so)
// calls: GetRoshanSpawner
float __cdecl Script_GetRoshanKillTime()
{
  CDOTA_RoshanSpawner *RoshanSpawner; // rax

  RoshanSpawner = GetRoshanSpawner();
  if ( RoshanSpawner != 0 )
    return RoshanSpawner->m_fRoshanKillTime;
  else
    return -1.0;
}


// CDOTA_TeamCommander::OnBotScriptDetails  (line 815, @0x0000000002862d60, libserver.so)  // inlines: SteamInternal_ModuleContext, SteamUGC
// calls: SteamInternal_ContextInit, CDOTA_TeamCommander::InitScripting, __stack_chk_fail
// callers: CDOTA_TeamCommander::OnBotScriptDetails
// globals: SteamInternal_ModuleContext(void)::s_CallbackCounterAndContext
void __fastcall CDOTA_TeamCommander::OnBotScriptDetails(
        CDOTA_TeamCommander *const this,
        SteamUGCQueryCompleted_t *pResult,
        bool bError)
{
  __int64 v5; // rax
  __int64 v6; // rax
  uint32 unTimeStamp; // [rsp+4h] [rbp-275Ch] BYREF
  uint64 ulSizeOnDisk; // [rsp+8h] [rbp-2758h] BYREF
  char szFolder[272]; // [rsp+10h] [rbp-2750h] BYREF
  SteamUGCDetails_t details; // [rsp+120h] [rbp-2640h] BYREF
  unsigned __int64 v11; // [rsp+2748h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  v5 = SteamInternal_ContextInit(&SteamInternal_ModuleContext(void)::s_CallbackCounterAndContext);
  if ( (*(**(v5 + 112) + 32LL))(*(v5 + 112), pResult->m_handle, 0, &details) != 0 )
  {
    unTimeStamp = 0;
    v6 = SteamInternal_ContextInit(&SteamInternal_ModuleContext(void)::s_CallbackCounterAndContext);
    (*(**(v6 + 112) + 472LL))(*(v6 + 112), details.m_nPublishedFileId, &ulSizeOnDisk, szFolder, 260, &unTimeStamp);
    CDOTA_TeamCommander::InitScripting(this, szFolder);
  }
}


// CDOTA_TeamCommander::OnBotScriptDetails  (line 815, @0x0000000002862e20, libserver.so)
// calls: CDOTA_TeamCommander::OnBotScriptDetails
void __fastcall CDOTA_TeamCommander::OnBotScriptDetails(
        CDOTA_TeamCommander *const this,
        SteamUGCQueryCompleted_t *pResult,
        bool bError)
{
  if ( !bError && pResult->m_eResult == EResult::k_EResultOK && pResult->m_unNumResultsReturned != 0 )
    CDOTA_TeamCommander::OnBotScriptDetails(this, pResult, 0);
}


// CDOTA_TeamCommander::InitScripting  (line 835, @0x0000000002858510, libserver.so)  // inlines: AddParameterType, CVariantBase, ClearScriptModules, DOTAGameRules, RegisterInstance<CDOTA_TeamCommander>, RemoveAllParameters, ScriptDeduceFunctionSignature<CVariantBase<CVariantDefaultAllocator> >, ScriptDeduceFunctionSignature<CVariantBase<CVariantDefaultAllocator>, int>, ScriptDeduceFunctionSignature<DOTA_RUNE_STATUS, int>, ScriptDeduceFunctionSignature<HSCRIPT__*, int, int>, ScriptDeduceFunctionSignature<HSCRIPT__*, int>, ScriptDeduceFunctionSignature<HSCRIPT__*>, ScriptDeduceFunctionSignature<Vector, float>, ScriptDeduceFunctionSignature<Vector, int, float>, ScriptDeduceFunctionSignature<Vector, int, int, float>, ScriptDeduceFunctionSignature<Vector, int, int>, ScriptDeduceFunctionSignature<Vector, int>, ScriptDeduceFunctionSignature<bool, char const*>, ScriptDeduceFunctionSignature<bool, const Vector&>, ScriptDeduceFunctionSignature<bool, int, char const*>, ScriptDeduceFunctionSignature<bool, int>, ScriptDeduceFunctionSignature<bool>, ScriptDeduceFunctionSignature<char const*, int>, ScriptDeduceFunctionSignature<char const*>, ScriptDeduceFunctionSignature<float, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<float, HSCRIPT__*, Vector>, ScriptDeduceFunctionSignature<float, HSCRIPT__*>, ScriptDeduceFunctionSignature<float, float, float, float, float, float>, ScriptDeduceFunctionSignature<float, float, float, float>, ScriptDeduceFunctionSignature<float, float, float>, ScriptDeduceFunctionSignature<float, int, int, bool>, ScriptDeduceFunctionSignature<float, int>, ScriptDeduceFunctionSignature<float>, ScriptDeduceFunctionSignature<int, HSCRIPT__*, Vector, float>, ScriptDeduceFunctionSignature<int, HSCRIPT__*>, ScriptDeduceFunctionSignature<int, char const*>, ScriptDeduceFunctionSignature<int, const Vector&>, ScriptDeduceFunctionSignature<int, int, int>, ScriptDeduceFunctionSignature<int, int>, ScriptDeduceFunctionSignature<int>, ScriptDeduceFunctionSignature<void, Vector, Vector, int, int, int>, ScriptDeduceFunctionSignature<void, Vector, float, int, int, int>, ScriptDeduceFunctionSignature<void, char const*>, ScriptDeduceFunctionSignature<void, float, float, char const*, int, int, int>, ScriptDeduceFunctionSignature<void, int, char const*>, ScriptDeduceFunctionSignature<void, int>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, Set, SetDescription, SetFunctionName, SetReturnType, SetScriptName, SetValue, SteamInternal_ModuleContext, SteamUGC, ~CVariantBase
// calls: CUtlString::operator=, CFmtStrN<256, false>::CFmtStrN, GetScriptDesc<CDOTA_TeamCommander>, CVariantBase<CVariantDefaultAllocator>::Free, GetScriptDesc<CDOTA_Bot_Script>, GetScriptDesc<CDOTABaseAbility_BotScript>, CDOTA_TeamCommander::LoadHeroSelectionScript, CDOTA_TeamCommander::LoadTeamLevelDesiresScript, __cxa_guard_acquire, __cxa_guard_release, CDOTAGamerules::GetLobbyForGame, CDOTALobby::GetBotScript (17 total)
// callers: CDOTA_TeamCommander::OnBotScriptDetails, CDOTA_TeamCommander::GameInit
// strings: "BotTeamCommander%d", "Get the bot on which script is currently being run.", "Script_GetBot", "Get the team on which script is currently being run.", "Script_GetTeam", "Get a member of a team." (40 total)
// globals: `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding, CDOTA_TeamCommander::InitScripting(char const*)::binding, CNonMemberScriptBinding0<HSCRIPT__ * (*)(void),HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDefaultAllocat, Script_GetBot(void), CNonMemberScriptBinding0<int (*)(void),int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDefaultAllocator> *), Script_GetTeam(void), CNonMemberScriptBinding2<HSCRIPT__ * (*)(int,int),HSCRIPT__ *,int,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDef, Script_GetTeamMember(int,int) (20 total)
void __fastcall CDOTA_TeamCommander::InitScripting(CDOTA_TeamCommander *const this, const char *pszScriptDirectory)
{
  IScriptVM *v3; // rax
  DOTATeam_t m_eTeam; // edx
  IScriptVM *m_pBotScriptVM; // r13
  __int64 (__fastcall *v6)(IScriptVM *, ScriptClassDesc_t *, CDOTA_TeamCommander *const); // rbx
  ScriptClassDesc_t *Script; // rax
  uint64 v8; // rax
  void (__fastcall *v9)(IScriptVM *, _QWORD, char *, uint64 *); // r8
  void (__fastcall *v10)(IScriptVM *, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v11; // rax
  void (__fastcall *v12)(IScriptVM *, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v13; // rax
  IScriptVM *v14; // rdi
  IScriptVM *v15; // rdi
  IScriptVM *v16; // rdi
  IScriptVM *v17; // rdi
  IScriptVM *v18; // rdi
  IScriptVM *v19; // rdi
  IScriptVM *v20; // rdi
  IScriptVM *v21; // rdi
  IScriptVM *v22; // rdi
  IScriptVM *v23; // rdi
  IScriptVM *v24; // rdi
  IScriptVM *v25; // rdi
  IScriptVM *v26; // rdi
  IScriptVM *v27; // rdi
  IScriptVM *v28; // rdi
  IScriptVM *v29; // rdi
  IScriptVM *v30; // rdi
  IScriptVM *v31; // rdi
  IScriptVM *v32; // rdi
  IScriptVM *v33; // rdi
  IScriptVM *v34; // rdi
  IScriptVM *v35; // rdi
  IScriptVM *v36; // rdi
  IScriptVM *v37; // rdi
  IScriptVM *v38; // rdi
  IScriptVM *v39; // rdi
  IScriptVM *v40; // rdi
  IScriptVM *v41; // rdi
  IScriptVM *v42; // rdi
  IScriptVM *v43; // rdi
  IScriptVM *v44; // rdi
  IScriptVM *v45; // rdi
  IScriptVM *v46; // rdi
  IScriptVM *v47; // rdi
  IScriptVM *v48; // rdi
  IScriptVM *v49; // rdi
  IScriptVM *v50; // rdi
  IScriptVM *v51; // rdi
  IScriptVM *v52; // rdi
  IScriptVM *v53; // rdi
  IScriptVM *v54; // rdi
  IScriptVM *v55; // rdi
  IScriptVM *v56; // rdi
  IScriptVM *v57; // rdi
  IScriptVM *v58; // rdi
  IScriptVM *v59; // rdi
  IScriptVM *v60; // rdi
  IScriptVM *v61; // rdi
  IScriptVM *v62; // rdi
  IScriptVM *v63; // rdi
  IScriptVM *v64; // rdi
  IScriptVM *v65; // rdi
  IScriptVM *v66; // rdi
  IScriptVM *v67; // rdi
  IScriptVM *v68; // rdi
  IScriptVM *v69; // rdi
  IScriptVM *v70; // rdi
  IScriptVM *v71; // rdi
  IScriptVM *v72; // rdi
  IScriptVM *v73; // rdi
  IScriptVM *v74; // rdi
  IScriptVM *v75; // rdi
  IScriptVM *v76; // rdi
  IScriptVM *v77; // rdi
  IScriptVM *v78; // rdi
  IScriptVM *v79; // rdi
  IScriptVM *v80; // rdi
  IScriptVM *v81; // rdi
  IScriptVM *v82; // rdi
  IScriptVM *v83; // rdi
  IScriptVM *v84; // rdi
  IScriptVM *v85; // rdi
  IScriptVM *v86; // rdi
  IScriptVM *v87; // rdi
  IScriptVM *v88; // rdi
  IScriptVM *v89; // rdi
  IScriptVM *v90; // rdi
  IScriptVM *v91; // rdi
  IScriptVM *v92; // rdi
  IScriptVM *v93; // rdi
  IScriptVM *v94; // rdi
  IScriptVM *v95; // rdi
  IScriptVM *v96; // rdi
  IScriptVM *v97; // rdi
  IScriptVM *v98; // rdi
  IScriptVM *v99; // rdi
  IScriptVM *v100; // rdi
  IScriptVM *v101; // rdi
  IScriptVM *v102; // rdi
  IScriptVM *v103; // rdi
  IScriptVM *v104; // rdi
  IScriptVM *v105; // rdi
  IScriptVM *v106; // rdi
  IScriptVM *v107; // rdi
  IScriptVM *v108; // rdi
  IScriptVM *v109; // rdi
  IScriptVM *v110; // rdi
  IScriptVM *v111; // rdi
  IScriptVM *v112; // rdi
  IScriptVM *v113; // rdi
  IScriptVM *v114; // rdi
  IScriptVM *v115; // rdi
  IScriptVM *v116; // rdi
  IScriptVM *v117; // rdi
  IScriptVM *v118; // rdi
  IScriptVM *v119; // rdi
  IScriptVM *v120; // rdi
  IScriptVM *v121; // rdi
  IScriptVM *v122; // rdi
  IScriptVM *v123; // rdi
  IScriptVM *v124; // rdi
  IScriptVM *v125; // rdi
  IScriptVM *v126; // rdi
  IScriptVM *v127; // rdi
  IScriptVM *v128; // rdi
  IScriptVM *v129; // rdi
  IScriptVM *v130; // rdi
  IScriptVM *v131; // rdi
  IScriptVM *v132; // rdi
  IScriptVM *v133; // rdi
  IScriptVM *v134; // rdi
  IScriptVM *v135; // rdi
  IScriptVM *v136; // rdi
  IScriptVM *v137; // rdi
  IScriptVM *v138; // rdi
  IScriptVM *v139; // rdi
  IScriptVM *v140; // rdi
  IScriptVM *v141; // rdi
  IScriptVM *v142; // rdi
  IScriptVM *v143; // rdi
  IScriptVM *v144; // rdi
  IScriptVM *v145; // rdi
  IScriptVM *v146; // rdi
  IScriptVM *v147; // rdi
  IScriptVM *v148; // rdi
  IScriptVM *v149; // rdi
  IScriptVM *v150; // rdi
  IScriptVM *v151; // rdi
  IScriptVM *v152; // rdi
  IScriptVM *v153; // rdi
  IScriptVM *v154; // rdi
  IScriptVM *v155; // rdi
  IScriptVM *v156; // rdi
  IScriptVM *v157; // rdi
  IScriptVM *v158; // rdi
  IScriptVM *v159; // rdi
  IScriptVM *v160; // rdi
  IScriptVM *v161; // rdi
  IScriptVM *v162; // rdi
  IScriptVM *v163; // rdi
  IScriptVM *v164; // rdi
  IScriptVM *v165; // rdi
  IScriptVM *v166; // rdi
  IScriptVM *v167; // rdi
  IScriptVM *v168; // rdi
  IScriptVM *v169; // rdi
  IScriptVM *v170; // rdi
  IScriptVM *v171; // rdi
  IScriptVM *v172; // rdi
  IScriptVM *v173; // rdi
  IScriptVM *v174; // rdi
  IScriptVM *v175; // rdi
  IScriptVM *v176; // rdi
  IScriptVM *v177; // rdi
  IScriptVM *v178; // rdi
  IScriptVM *v179; // rdi
  IScriptVM *v180; // rdi
  IScriptVM *v181; // rdi
  IScriptVM *v182; // rdi
  IScriptVM *v183; // rdi
  IScriptVM *v184; // rdi
  IScriptVM *v185; // rdi
  IScriptVM *v186; // rdi
  IScriptVM *v187; // rdi
  IScriptVM *v188; // rdi
  IScriptVM *v189; // rdi
  IScriptVM *v190; // rdi
  IScriptVM *v191; // rdi
  IScriptVM *v192; // rdi
  IScriptVM *v193; // rdi
  IScriptVM *v194; // rdi
  IScriptVM *v195; // rdi
  IScriptVM *v196; // rdi
  IScriptVM *v197; // rdi
  IScriptVM *v198; // rdi
  IScriptVM *v199; // rdi
  IScriptVM *v200; // rdi
  IScriptVM *v201; // rdi
  IScriptVM *v202; // rdi
  IScriptVM *v203; // rdi
  IScriptVM *v204; // rdi
  IScriptVM *v205; // rdi
  IScriptVM *v206; // rdi
  IScriptVM *v207; // rdi
  IScriptVM *v208; // rdi
  IScriptVM *v209; // rdi
  IScriptVM *v210; // rdi
  IScriptVM *v211; // rdi
  IScriptVM *v212; // rdi
  IScriptVM *v213; // rdi
  IScriptVM *v214; // rdi
  IScriptVM *v215; // rdi
  IScriptVM *v216; // rdi
  IScriptVM *v217; // rdi
  IScriptVM *v218; // rdi
  IScriptVM *v219; // rdi
  IScriptVM *v220; // rdi
  IScriptVM *v221; // rdi
  IScriptVM *v222; // rdi
  IScriptVM *v223; // rdi
  IScriptVM *v224; // rdi
  IScriptVM *v225; // rdi
  IScriptVM *v226; // rdi
  IScriptVM *v227; // rdi
  IScriptVM *v228; // rdi
  IScriptVM *v229; // rdi
  IScriptVM *v230; // rdi
  IScriptVM *v231; // rdi
  IScriptVM *v232; // rdi
  IScriptVM *v233; // rdi
  IScriptVM *v234; // rdi
  IScriptVM *v235; // rdi
  IScriptVM *v236; // rdi
  IScriptVM *v237; // rdi
  IScriptVM *v238; // rdi
  IScriptVM *v239; // rdi
  IScriptVM *v240; // rdi
  IScriptVM *v241; // rdi
  IScriptVM *v242; // rdi
  IScriptVM *v243; // rdi
  IScriptVM *v244; // rdi
  IScriptVM *v245; // rdi
  IScriptVM *v246; // rdi
  IScriptVM *v247; // rdi
  IScriptVM *v248; // rdi
  IScriptVM *v249; // rdi
  IScriptVM *v250; // rdi
  IScriptVM *v251; // rdi
  IScriptVM *v252; // rdi
  IScriptVM *v253; // rdi
  IScriptVM *v254; // rdi
  IScriptVM *v255; // rdi
  IScriptVM *v256; // rdi
  IScriptVM *v257; // rdi
  IScriptVM *v258; // rdi
  IScriptVM *v259; // rdi
  IScriptVM *v260; // rdi
  IScriptVM *v261; // rdi
  IScriptVM *v262; // rdi
  IScriptVM *v263; // rdi
  IScriptVM *v264; // rdi
  IScriptVM *v265; // rdi
  IScriptVM *v266; // rdi
  IScriptVM *v267; // rdi
  IScriptVM *v268; // rdi
  IScriptVM *v269; // rdi
  IScriptVM *v270; // rdi
  IScriptVM *v271; // rdi
  IScriptVM *v272; // rdi
  IScriptVM *v273; // rdi
  IScriptVM *v274; // rdi
  IScriptVM *v275; // rdi
  IScriptVM *v276; // rdi
  IScriptVM *v277; // rdi
  IScriptVM *v278; // rdi
  IScriptVM *v279; // rdi
  IScriptVM *v280; // rdi
  IScriptVM *v281; // rdi
  IScriptVM *v282; // rdi
  IScriptVM *v283; // rdi
  IScriptVM *v284; // rdi
  IScriptVM *v285; // rdi
  IScriptVM *v286; // rdi
  IScriptVM *v287; // rdi
  IScriptVM *v288; // rdi
  IScriptVM *v289; // rdi
  IScriptVM *v290; // rdi
  IScriptVM *v291; // rdi
  IScriptVM *v292; // rdi
  IScriptVM *v293; // rdi
  IScriptVM *v294; // rdi
  IScriptVM *v295; // rdi
  IScriptVM *v296; // rdi
  IScriptVM *v297; // rdi
  IScriptVM *v298; // rdi
  IScriptVM *v299; // rdi
  IScriptVM *v300; // rdi
  IScriptVM *v301; // rdi
  IScriptVM *v302; // rdi
  IScriptVM *v303; // rdi
  IScriptVM *v304; // rdi
  IScriptVM *v305; // rdi
  IScriptVM *v306; // rdi
  IScriptVM *v307; // rdi
  IScriptVM *v308; // rdi
  IScriptVM *v309; // rdi
  IScriptVM *v310; // rdi
  IScriptVM *v311; // rdi
  IScriptVM *v312; // rdi
  IScriptVM *v313; // rdi
  IScriptVM *v314; // rdi
  IScriptVM *v315; // rdi
  IScriptVM *v316; // rdi
  IScriptVM *v317; // rdi
  IScriptVM *v318; // rdi
  IScriptVM *v319; // rdi
  IScriptVM *v320; // rdi
  IScriptVM *v321; // rdi
  IScriptVM *v322; // rdi
  IScriptVM *v323; // rdi
  IScriptVM *v324; // rdi
  IScriptVM *v325; // rdi
  IScriptVM *v326; // rdi
  IScriptVM *v327; // rdi
  IScriptVM *v328; // rdi
  IScriptVM *v329; // rdi
  IScriptVM *v330; // rdi
  IScriptVM *v331; // rdi
  IScriptVM *v332; // rdi
  IScriptVM *v333; // rdi
  IScriptVM *v334; // rdi
  IScriptVM *v335; // rdi
  IScriptVM *v336; // rdi
  IScriptVM *v337; // rdi
  IScriptVM *v338; // rdi
  IScriptVM *v339; // rdi
  IScriptVM *v340; // rdi
  IScriptVM *v341; // rdi
  IScriptVM *v342; // rdi
  IScriptVM *v343; // rdi
  IScriptVM *v344; // rdi
  IScriptVM *v345; // rdi
  IScriptVM *v346; // rdi
  IScriptVM *v347; // rdi
  IScriptVM *v348; // rdi
  const CDOTALobby *LobbyForGame; // rax
  uint64 BotScript; // rax
  __int64 v351; // rbx
  __int64 (__fastcall *v352)(__int64, __int64); // r13
  __int64 v353; // rax
  __int64 v354; // rax
  SteamAPICall_t v355; // rax
  IFileSystem *v356; // rdi
  SteamAPICall_t hDetailsCall; // [rsp+8h] [rbp-158h]
  uint64 ulBotScriptUGC; // [rsp+10h] [rbp-150h] BYREF
  __int16 v359; // [rsp+18h] [rbp-148h]
  __int16 v360; // [rsp+1Ah] [rbp-146h]
  CFmtStrN<256,false> pszPath; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v362; // [rsp+138h] [rbp-28h]

  v362 = __readfsqword(0x28u);
  if ( pszScriptDirectory != 0 )
  {
    CUtlString::operator=(&this->m_sScriptDirectory, pszScriptDirectory);
    goto LABEL_3;
  }
  LobbyForGame = CDOTAGamerules::GetLobbyForGame(g_pGameRules);
  if ( LobbyForGame == 0 )
  {
    if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(
           &g_pFullFileSystem->IBaseFileSystem,
           "scripts\\vscripts\\bots",
           "GAME") == 0 )
      return;
    v356 = g_pFullFileSystem;
    goto LABEL_252;
  }
  BotScript = CDOTALobby::GetBotScript(LobbyForGame, this->m_eTeam);
  ulBotScriptUGC = BotScript;
  if ( BotScript == 0 )
    return;
  if ( BotScript == 1 )
  {
    v356 = g_pFullFileSystem;
LABEL_252:
    (*(v356->_vptr_IAppSystem + 23))(v356, "scripts\\vscripts\\bots", "GAME", &pszPath, 260, 0, 0);
    CUtlString::operator=(&this->m_sScriptDirectory, &pszPath);
LABEL_3:
    v3 = (*(*g_pScriptManager + 88LL))(g_pScriptManager, 1);
    m_eTeam = this->m_eTeam;
    this->m_pBotScriptVM = v3;
    CFmtStrN<256,false>::CFmtStrN(&pszPath, "BotTeamCommander%d", m_eTeam);
    m_pBotScriptVM = this->m_pBotScriptVM;
    v6 = *(*m_pBotScriptVM + 184LL);
    Script = GetScriptDesc<CDOTA_TeamCommander>(this);
    v8 = v6(m_pBotScriptVM, Script, this);
    v9 = *(*m_pBotScriptVM + 240LL);
    v359 = 31;
    v360 = 0;
    ulBotScriptUGC = v8;
    v9(m_pBotScriptVM, 0, pszPath.m_szBuf, &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v10 = *(*this->m_pBotScriptVM + 176LL);
    v11 = GetScriptDesc<CDOTA_Bot_Script>(0);
    v10(this->m_pBotScriptVM, v11);
    v12 = *(*this->m_pBotScriptVM + 176LL);
    v13 = GetScriptDesc<CDOTABaseAbility_BotScript>(0);
    v12(this->m_pBotScriptVM, v13);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v14 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get the bot on which script is cu"
                                                                                       "rrently being run.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetBot";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetBot";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<HSCRIPT__ * (*)(void),HSCRIPT__ *>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetBot;
    (*(*v14 + 168LL))(v14, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v15 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get the team on which script is c"
                                                                                       "urrently being run.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetTeam";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetTeam";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<int (*)(void),int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetTeam;
    (*(*v15 + 168LL))(v15, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v16 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get a member of a team.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetTeamMember";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetTeamMember";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(int,int),HSCRIPT__ *,int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetTeamMember;
    (*(*v16 + 168LL))(v16, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v17 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get the directory from which bot "
                                                                                       "scripts are being run.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetScriptDirectory";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetScriptDirectory";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<char const* (*)(void),char const*>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetScriptDirectory;
    (*(*v17 + 168LL))(v17, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v18 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the number of couriers on the team.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetNumCouriers";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetNumCouriers";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<int (*)(void),int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetNumCouriers;
    (*(*v18 + 168LL))(v18, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v19 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets a specific courier.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetCourier";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetCourier";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<HSCRIPT__ * (*)(int),HSCRIPT__ *,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetCourier;
    (*(*v19 + 168LL))(v19, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v20 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets a specific courier.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetCourierState";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetCourierState";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<int (*)(HSCRIPT__ *),int,HSCRIPT__ *>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetCourierState;
    (*(*v20 + 168LL))(v20, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v21 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Asks if a specific Player ID is a bot.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsPlayerBot";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsPlayerBot";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(int),bool,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsPlayerBot;
    (*(*v21 + 168LL))(v21, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v22 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Asks if a specific Player ID is a"
                                                                                       " member of Radiant or Dire.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsTeamPlayer";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsTeamPlayer";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(int),bool,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsTeamPlayer;
    (*(*v22 + 168LL))(v22, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v23 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the team of the specified player.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetTeamForPlayer";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetTeamForPlayer";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<int (*)(int),int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetTeamForPlayer;
    (*(*v23 + 168LL))(v23, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v24 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets a list of Player IDs for the"
                                                                                       " specified team.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetTeamPlayers";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetTeamPlayers";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<CVariantBase<CVariantDefaultAllocator> (*)(int),CVariantBase<CVariantDefaultAllocator>,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 32;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetTeamPlayers;
    (*(*v24 + 168LL))(v24, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v25 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the team that you're fighting against.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetOpposingTeam";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetOpposingTeam";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<int (*)(void),int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetOpposingTeam;
    (*(*v25 + 168LL))(v25, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v26 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get a random int within a range";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "RandomInt";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "RandomInt";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<int (*)(int,int),int,int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = &RandomInt;
    (*(*v26 + 168LL))(v26, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v27 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get a random float within a range";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "RandomFloat";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "RandomFloat";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(float,float),float,float,float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = &RandomFloat;
    (*(*v27 + 168LL))(v27, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v28 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get a random 2D vector of the specified length.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "RandomVector";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "RandomYawVector";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<Vector (*)(float),Vector,float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = RandomYawVector;
    (*(*v28 + 168LL))(v28, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v29 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Rolls a number from 1 to 100 and "
                                                                                       "returns true if the roll is less "
                                                                                       "than or equal to the number specified";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "RollPercentage";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "RollPercentage";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(int),bool,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = RollPercentage;
    (*(*v29 + 168LL))(v29, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v30 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get the cost of an item by name.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetItemCost";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "GetItemCost";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<int (*)(char const*),int,char const*>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = GetItemCost;
    (*(*v30 + 168LL))(v30, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v31 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Can the named item can be purchas"
                                                                                       "ed from the secret shop?";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsItemPurchasedFromSecretShop";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsItemPurchasedFromSecretShop";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(char const*),bool,char const*>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsItemPurchasedFromSecretShop;
    (*(*v31 + 168LL))(v31, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v32 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Can the named item can be purchas"
                                                                                       "ed from the side shop?";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsItemPurchasedFromSideShop";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsItemPurchasedFromSideShop";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(char const*),bool,char const*>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsItemPurchasedFromSideShop;
    (*(*v32 + 168LL))(v32, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v33 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get the current stock count for the named item.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetItemStockCount";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetItemStockCount";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<int (*)(char const*),int,char const*>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetItemStockCount;
    (*(*v33 + 168LL))(v33, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v34 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get location for the specified shop.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetShopLocation";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetShopLocation";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<Vector (*)(int,int),Vector,int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetShopLocation;
    (*(*v34 + 168LL))(v34, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v35 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get the distance between two units.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetUnitToUnitDistance";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_UnitToUnitDistance";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(HSCRIPT__ *,HSCRIPT__ *),float,HSCRIPT__ *,HSCRIPT__ *>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_UnitToUnitDistance;
    (*(*v35 + 168LL))(v35, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v36 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get the distance between a unit and a location.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetUnitToLocationDistance";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_UnitToLocationDistance";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(HSCRIPT__ *,Vector),float,HSCRIPT__ *,Vector>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_UnitToLocationDistance;
    (*(*v36 + 168LL))(v36, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v37 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Draws a line for one frame";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "DebugDrawLine";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_DebugDrawLine";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding5<void (*)(Vector,Vector,int,int,int),void,Vector,Vector,int,int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[2] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[3] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[4] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_DebugDrawLine;
    (*(*v37 + 168LL))(v37, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v38 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Draws a circle for one frame";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "DebugDrawCircle";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_DebugDrawCircle";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding5<void (*)(Vector,float,int,int,int),void,Vector,float,int,int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[2] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[3] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[4] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_DebugDrawCircle;
    (*(*v38 + 168LL))(v38, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v39 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Draws text for one frame";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "DebugDrawText";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_DebugDrawText";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding6<void (*)(float,float,char const*,int,int,int),void,float,float,char const*,int,int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[2] = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[3] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[4] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[5] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_DebugDrawText;
    (*(*v39 + 168LL))(v39, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v40 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Returns the smaller of the two supplied values.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "Min";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_Min";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(float,float),float,float,float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_Min;
    (*(*v40 + 168LL))(v40, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v41 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Returns the smaller of the two supplied values.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "Max";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_Max";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(float,float),float,float,float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_Max;
    (*(*v41 + 168LL))(v41, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v42 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Clamps the value between the two "
                                                                                       "supplied values.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "Clamp";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_Clamp";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding3<float (*)(float,float,float),float,float,float,float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[2] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_Clamp;
    (*(*v42 + 168LL))(v42, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v43 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the game time -- matches the"
                                                                                       " in-game clock.  Pauses with game pause.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "DotaTime";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_DotaTime";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_DotaTime;
    (*(*v43 + 168LL))(v43, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v44 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the time since the hero pick"
                                                                                       "ing phase started.  Pauses with game pause.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GameTime";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GameTime";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GameTime;
    (*(*v44 + 168LL))(v44, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v45 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the real-world time since th"
                                                                                       "e app has started.  Does not paus"
                                                                                       "e with game pause.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "RealTime";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_RealTime";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_RealTime;
    (*(*v45 + 168LL))(v45, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v46 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the current state of the game.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetGameState";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetGameState";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<int (*)(void),int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetGameState;
    (*(*v46 + 168LL))(v46, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v47 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets how much time is remaining i"
                                                                                       "n the current game state.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetGameStateTimeRemaining";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetGameStateTimeRemaining";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetGameStateTimeRemaining;
    (*(*v47 + 168LL))(v47, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v48 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the game mode type.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetGameMode";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetGameMode";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<int (*)(void),int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetGameMode;
    (*(*v48 + 168LL))(v48, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v49 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the current phase of hero picking.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetHeroPickState";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetHeroPickState";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<int (*)(void),int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetHeroPickState;
    (*(*v49 + 168LL))(v49, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v50 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Is this player allowed to current"
                                                                                       "ly allowed to select a hero?";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsPlayerInHeroSelectionControl";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsPlayerInHeroSelectionControl";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(int),bool,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsPlayerInHeroSelectionControl;
    (*(*v50 + 168LL))(v50, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v51 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Selects a hero for a player.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "SelectHero";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_SelectHero";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(int,char const*),void,int,char const*>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_SelectHero;
    (*(*v51 + 168LL))(v51, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v52 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the name of the hero selected by a player.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetSelectedHeroName";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetSelectedHeroName";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<char const* (*)(int),char const*,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetSelectedHeroName;
    (*(*v52 + 168LL))(v52, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v53 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Is Captain's Mode in Ban phase?";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsInCMBanPhase";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsInCMBanPhase";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<bool (*)(void),bool>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsInCMBanPhase;
    (*(*v53 + 168LL))(v53, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v54 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Is Captain's Mode in Pick phase?";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsInCMPickPhase";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsInCMPickPhase";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<bool (*)(void),bool>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsInCMPickPhase;
    (*(*v54 + 168LL))(v54, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v55 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get the amount of time remaining "
                                                                                       "in the current Captain's Mode phase.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetCMPhaseTimeRemaining";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetCMPhaseTimeRemaining";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetCMPhaseTimeRemaining;
    (*(*v55 + 168LL))(v55, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v56 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets player ID of the Captain's Mode captain.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetCMCaptain";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetCMCaptain";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<int (*)(void),int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetCMCaptain;
    (*(*v56 + 168LL))(v56, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v57 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Sets a player to be Captain's Mode captain.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "SetCMCaptain";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_SetCMCaptain";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(int),void,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_SetCMCaptain;
    (*(*v57 + 168LL))(v57, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v58 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Has the named hero been banned in"
                                                                                       " Captain's Mode?";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsCMBannedHero";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsCMBannedHero";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(char const*),bool,char const*>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsCMBannedHero;
    (*(*v58 + 168LL))(v58, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v59 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Has the named hero been picked in"
                                                                                       " Captain's Mode?";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsCMPickedHero";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsCMPickedHero";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<bool (*)(int,char const*),bool,int,char const*>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsCMPickedHero;
    (*(*v59 + 168LL))(v59, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v60 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Ban a hero in Captain's mode by name.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "CMBanHero";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_CMBanHero";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_CMBanHero;
    (*(*v60 + 168LL))(v60, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v61 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Pick a hero in Captain's mode by name.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "CMPickHero";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_CMPickHero";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 30;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_CMPickHero;
    (*(*v61 + 168LL))(v61, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v62 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the type of the specified rune, if known.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetRuneType";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetRuneType";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<int (*)(int),int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetRuneType;
    (*(*v62 + 168LL))(v62, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v63 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the status of the specified rune.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetRuneStatus";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetRuneStatus";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<DOTA_RUNE_STATUS (*)(int),DOTA_RUNE_STATUS,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetRuneStatus;
    (*(*v63 + 168LL))(v63, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v64 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the spawn location of the specified rune.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetRuneSpawnLocation";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetRuneSpawnLocation";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<Vector (*)(int),Vector,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetRuneSpawnLocation;
    (*(*v64 + 168LL))(v64, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v65 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the time since we've seen th"
                                                                                       "e specified rune.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetRuneTimeSinceSeen";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetRuneTimeSinceSeen";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<float (*)(int),float,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetRuneTimeSinceSeen;
    (*(*v65 + 168LL))(v65, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v66 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the team-wide desire to push a lane.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetPushLaneDesire";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetPushLaneDesire";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<float (*)(int),float,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetPushLaneDesire;
    (*(*v66 + 168LL))(v66, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v67 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the team-wide desire to defend a lane.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetDefendLaneDesire";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetDefendLaneDesire";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<float (*)(int),float,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetDefendLaneDesire;
    (*(*v67 + 168LL))(v67, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v68 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the team-wide desire to farm a lane.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetFarmLaneDesire";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetFarmLaneDesire";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<float (*)(int),float,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetFarmLaneDesire;
    (*(*v68 + 168LL))(v68, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v69 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the team-wide desire to roam to a target.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetRoamDesire";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetRoamDesire";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetRoamDesire;
    (*(*v69 + 168LL))(v69, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v70 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the target of the team-wide roam desire.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetRoamTarget";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetRoamTarget";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<HSCRIPT__ * (*)(void),HSCRIPT__ *>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetRoamTarget;
    (*(*v70 + 168LL))(v70, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v71 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the team-wide desire to kill Roshan.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetRoshanDesire";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetRoshanDesire";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetRoshanDesire;
    (*(*v71 + 168LL))(v71, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v72 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the minimum and maximum boun"
                                                                                       "ds of the world.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetWorldBounds";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetWorldBounds";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<CVariantBase<CVariantDefaultAllocator> (*)(void),CVariantBase<CVariantDefaultAllocator>>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 32;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetWorldBounds;
    (*(*v72 + 168LL))(v72, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v73 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Can the specified location curren"
                                                                                       "tly be pathed through.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsLocationPassable";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsLocationPassable";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(Vector const&),bool,Vector const&>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsLocationPassable;
    (*(*v73 + 168LL))(v73, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v74 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get the height level (1 through 5"
                                                                                       ") of the specified location.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetHeightLevel";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetHeightLevel";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<int (*)(Vector const&),int,Vector const&>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetHeightLevel;
    (*(*v74 + 168LL))(v74, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v75 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Get the location of all neutral s"
                                                                                       "pawners, and what side of the river they're on.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetNeutralSpawners";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetNeutralSpawners";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<CVariantBase<CVariantDefaultAllocator> (*)(void),CVariantBase<CVariantDefaultAllocator>>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 32;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetNeutralSpawners;
    (*(*v75 + 168LL))(v75, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v76 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the 0-255 potential-value lo"
                                                                                       "cation of a hero at the specified"
                                                                                       " location and radius.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetUnitPotentialValue";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetUnitPotentialValue";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding3<int (*)(HSCRIPT__ *,Vector,float),int,HSCRIPT__ *,Vector,float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[2] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetUnitPotentialValue;
    (*(*v76 + 168LL))(v76, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v77 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Asks if a courier is available to use.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsCourierAvailable";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsCourierAvailable";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<bool (*)(void),bool>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsCourierAvailable;
    (*(*v77 + 168LL))(v77, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v78 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the location of the specified tree.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetTreeLocation";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetTreeLocation";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<Vector (*)(int),Vector,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetTreeLocation;
    (*(*v78 + 168LL))(v78, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v79 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the specified tower on the specified team.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetTower";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetTower";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(int,int),HSCRIPT__ *,int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetTower;
    (*(*v79 + 168LL))(v79, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v80 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the specified barracks on th"
                                                                                       "e specified team.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetBarracks";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetBarracks";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(int,int),HSCRIPT__ *,int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetBarracks;
    (*(*v80 + 168LL))(v80, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v81 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the specified shrine on the specified team.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetShrine";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetShrine";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(int,int),HSCRIPT__ *,int,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetShrine;
    (*(*v81 + 168LL))(v81, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v82 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the ancient on the specified team.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetAncient";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetAncient";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<HSCRIPT__ * (*)(int),HSCRIPT__ *,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetAncient;
    (*(*v82 + 168LL))(v82, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v83 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the healing cooldown of the "
                                                                                       "specified shrine.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetShrineCooldown";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetShrineCooldown";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<float (*)(HSCRIPT__ *),float,HSCRIPT__ *>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetShrineCooldown;
    (*(*v83 + 168LL))(v83, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v84 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets whether the Shrine is active"
                                                                                       "ly healing or not.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "IsShrineHealing";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_IsShrineHealing";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<float (*)(HSCRIPT__ *),float,HSCRIPT__ *>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 31;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_IsShrineHealing;
    (*(*v84 + 168LL))(v84, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v85 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets a list of visible units.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetUnitList";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetUnitList";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding1<CVariantBase<CVariantDefaultAllocator> (*)(int),CVariantBase<CVariantDefaultAllocator>,int>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 32;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetUnitList;
    (*(*v85 + 168LL))(v85, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v86 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the lane front amount (0.0 -"
                                                                                       " 1.0) of the specified team's cre"
                                                                                       "eps along the specified lane.  Op"
                                                                                       "tionally can ignore towers for fr"
                                                                                       "ont calculation.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetLaneFrontAmount";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetLaneFrontAmount";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding3<float (*)(int,int,bool),float,int,int,bool>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[2] = 6;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetLaneFrontAmount;
    (*(*v86 + 168LL))(v86, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v87 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Gets the location of the lane fro"
                                                                                       "nt for the specified team and lan"
                                                                                       "e.  Always ignores towers.  Has a"
                                                                                       " third parameter for a distance d"
                                                                                       "elta from the front.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetLaneFrontLocation";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetLaneFrontLocation";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding3<Vector (*)(int,int,float),Vector,int,int,float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[2] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetLaneFrontLocation;
    (*(*v87 + 168LL))(v87, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v88 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Calculates the location of the sp"
                                                                                       "ecified amount (0.0 - 1.0) along "
                                                                                       "the specified lane.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetLocationAlongLane";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetLocationAlongLane";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding2<Vector (*)(int,float),Vector,int,float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 3;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 2;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetLocationAlongLane;
    (*(*v88 + 168LL))(v88, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v89 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Returns the array of items that w"
                                                                                       "e can see that have been dropped on the ground.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetDroppedItemList";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetDroppedItemList";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<CVariantBase<CVariantDefaultAllocator> (*)(void),CVariantBase<CVariantDefaultAllocator>>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 32;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetDroppedItemList;
    (*(*v89 + 168LL))(v89, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v90 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Returns the last time that Roshan was killed.";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "GetRoshanKillTime";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "Script_GetRoshanKillTime";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = Script_GetRoshanKillTime;
    (*(*v90 + 168LL))(v90, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v91 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Linearly remaps X from A,B to C,D";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "RemapVal";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "RemapVal";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding5<float (*)(float,float,float,float,float),float,float,float,float,float,float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[2] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[3] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[4] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = RemapVal;
    (*(*v91 + 168LL))(v91, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    if ( `guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding) != 0 )
    {
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 29;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = -1;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 0;
      CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pPackedParameterNames = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::InitScripting(char const*)::binding);
    }
    v92 = this->m_pBotScriptVM;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nOptionalParameters = 0;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszDescription = "Linearly remaps X from A,B to C,D"
                                                                                       ", clamping to C,D";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszScriptName = "RemapValClamped";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_pszFunction = "RemapValClamped";
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pfnBinding = CNonMemberScriptBinding5<float (*)(float,float,float,float,float),float,float,float,float,float,float>::Call;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ReturnType = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[0] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[1] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[2] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[3] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_ParameterTypes[4] = 1;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_desc.m_nNumParameters = 5;
    CDOTA_TeamCommander::InitScripting(char const*)::binding.m_pFunction = RemapValClamped;
    (*(*v92 + 168LL))(v92, &CDOTA_TeamCommander::InitScripting(char const*)::binding);
    v93 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v93 + 240LL))(v93, 0, "BOT_MODE_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v94 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v94 + 240LL))(v94, 0, "BOT_MODE_LANING", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v95 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v95 + 240LL))(v95, 0, "BOT_MODE_ATTACK", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v96 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v96 + 240LL))(v96, 0, "BOT_MODE_ROAM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v97 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v97 + 240LL))(v97, 0, "BOT_MODE_RETREAT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v98 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v98 + 240LL))(v98, 0, "BOT_MODE_SECRET_SHOP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v99 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 6;
    (*(*v99 + 240LL))(v99, 0, "BOT_MODE_SIDE_SHOP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v100 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 7;
    (*(*v100 + 240LL))(v100, 0, "BOT_MODE_RUNE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v101 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 8;
    (*(*v101 + 240LL))(v101, 0, "BOT_MODE_PUSH_TOWER_TOP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v102 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 9;
    (*(*v102 + 240LL))(v102, 0, "BOT_MODE_PUSH_TOWER_MID", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v103 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 10;
    (*(*v103 + 240LL))(v103, 0, "BOT_MODE_PUSH_TOWER_BOT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v104 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 11;
    (*(*v104 + 240LL))(v104, 0, "BOT_MODE_DEFEND_TOWER_TOP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v105 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 12;
    (*(*v105 + 240LL))(v105, 0, "BOT_MODE_DEFEND_TOWER_MID", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v106 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 13;
    (*(*v106 + 240LL))(v106, 0, "BOT_MODE_DEFEND_TOWER_BOT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v107 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 14;
    (*(*v107 + 240LL))(v107, 0, "BOT_MODE_ASSEMBLE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v108 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 15;
    (*(*v108 + 240LL))(v108, 0, "BOT_MODE_ASSEMBLE_WITH_HUMANS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v109 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 16;
    (*(*v109 + 240LL))(v109, 0, "BOT_MODE_TEAM_ROAM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v110 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 17;
    (*(*v110 + 240LL))(v110, 0, "BOT_MODE_FARM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v111 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 18;
    (*(*v111 + 240LL))(v111, 0, "BOT_MODE_DEFEND_ALLY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v112 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 19;
    (*(*v112 + 240LL))(v112, 0, "BOT_MODE_EVASIVE_MANEUVERS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v113 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 20;
    (*(*v113 + 240LL))(v113, 0, "BOT_MODE_ROSHAN", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v114 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 21;
    (*(*v114 + 240LL))(v114, 0, "BOT_MODE_ITEM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v115 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 22;
    (*(*v115 + 240LL))(v115, 0, "BOT_MODE_WARD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v116 = this->m_pBotScriptVM;
    v359 = 1;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v116 + 240LL))(v116, 0, "BOT_ACTION_DESIRE_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v117 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 1;
    LODWORD(ulBotScriptUGC) = 1036831949;
    (*(*v117 + 240LL))(v117, 0, "BOT_ACTION_DESIRE_VERYLOW", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v118 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 1;
    LODWORD(ulBotScriptUGC) = 1048576000;
    (*(*v118 + 240LL))(v118, 0, "BOT_ACTION_DESIRE_LOW", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v119 = this->m_pBotScriptVM;
    v359 = 1;
    LODWORD(ulBotScriptUGC) = 1056964608;
    (*(*v119 + 240LL))(v119, 0, "BOT_ACTION_DESIRE_MODERATE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v120 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 1;
    LODWORD(ulBotScriptUGC) = 1061158912;
    (*(*v120 + 240LL))(v120, 0, "BOT_ACTION_DESIRE_HIGH", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v121 = this->m_pBotScriptVM;
    v359 = 1;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1063675494;
    (*(*v121 + 240LL))(v121, 0, "BOT_ACTION_DESIRE_VERYHIGH", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v122 = this->m_pBotScriptVM;
    v359 = 1;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1065353216;
    (*(*v122 + 240LL))(v122, 0, "BOT_ACTION_DESIRE_ABSOLUTE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v123 = this->m_pBotScriptVM;
    v359 = 1;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v123 + 240LL))(v123, 0, "BOT_MODE_DESIRE_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v124 = this->m_pBotScriptVM;
    v359 = 1;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1036831949;
    (*(*v124 + 240LL))(v124, 0, "BOT_MODE_DESIRE_VERYLOW", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v125 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 1;
    LODWORD(ulBotScriptUGC) = 1048576000;
    (*(*v125 + 240LL))(v125, 0, "BOT_MODE_DESIRE_LOW", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v126 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 1;
    LODWORD(ulBotScriptUGC) = 1056964608;
    (*(*v126 + 240LL))(v126, 0, "BOT_MODE_DESIRE_MODERATE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v127 = this->m_pBotScriptVM;
    v359 = 1;
    LODWORD(ulBotScriptUGC) = 1061158912;
    (*(*v127 + 240LL))(v127, 0, "BOT_MODE_DESIRE_HIGH", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v128 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 1;
    LODWORD(ulBotScriptUGC) = 1063675494;
    (*(*v128 + 240LL))(v128, 0, "BOT_MODE_DESIRE_VERYHIGH", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v129 = this->m_pBotScriptVM;
    v359 = 1;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1065353216;
    (*(*v129 + 240LL))(v129, 0, "BOT_MODE_DESIRE_ABSOLUTE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v130 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v130 + 240LL))(v130, 0, "DAMAGE_TYPE_PHYSICAL", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v131 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v131 + 240LL))(v131, 0, "DAMAGE_TYPE_MAGICAL", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v132 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v132 + 240LL))(v132, 0, "DAMAGE_TYPE_PURE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v133 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 7;
    (*(*v133 + 240LL))(v133, 0, "DAMAGE_TYPE_ALL", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v134 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v134 + 240LL))(v134, 0, "DIFFICULTY_INVALID", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v135 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v135 + 240LL))(v135, 0, "DIFFICULTY_PASSIVE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v136 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v136 + 240LL))(v136, 0, "DIFFICULTY_EASY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v137 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v137 + 240LL))(v137, 0, "DIFFICULTY_MEDIUM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v138 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v138 + 240LL))(v138, 0, "DIFFICULTY_HARD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v139 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v139 + 240LL))(v139, 0, "DIFFICULTY_UNFAIR", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v140 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = -1;
    (*(*v140 + 240LL))(v140, 0, "PURCHASE_ITEM_SUCCESS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v141 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 82;
    (*(*v141 + 240LL))(v141, 0, "PURCHASE_ITEM_OUT_OF_STOCK", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v142 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 78;
    (*(*v142 + 240LL))(v142, 0, "PURCHASE_ITEM_DISALLOWED_ITEM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v143 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 63;
    (*(*v143 + 240LL))(v143, 0, "PURCHASE_ITEM_INSUFFICIENT_GOLD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v144 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 67;
    (*(*v144 + 240LL))(v144, 0, "PURCHASE_ITEM_NOT_AT_HOME_SHOP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v145 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 66;
    (*(*v145 + 240LL))(v145, 0, "PURCHASE_ITEM_NOT_AT_SIDE_SHOP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v146 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 62;
    (*(*v146 + 240LL))(v146, 0, "PURCHASE_ITEM_NOT_AT_SECRET_SHOP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v147 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 33;
    (*(*v147 + 240LL))(v147, 0, "PURCHASE_ITEM_INVALID_ITEM_NAME", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v148 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v148 + 240LL))(v148, 0, "GAMEMODE_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v149 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v149 + 240LL))(v149, 0, "GAMEMODE_AP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v150 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v150 + 240LL))(v150, 0, "GAMEMODE_CM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v151 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v151 + 240LL))(v151, 0, "GAMEMODE_RD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v152 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v152 + 240LL))(v152, 0, "GAMEMODE_SD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v153 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v153 + 240LL))(v153, 0, "GAMEMODE_AR", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v154 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 8;
    (*(*v154 + 240LL))(v154, 0, "GAMEMODE_REVERSE_CM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v155 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 11;
    (*(*v155 + 240LL))(v155, 0, "GAMEMODE_MO", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v156 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 16;
    (*(*v156 + 240LL))(v156, 0, "GAMEMODE_CD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v157 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 18;
    (*(*v157 + 240LL))(v157, 0, "GAMEMODE_ABILITY_DRAFT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v158 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 20;
    (*(*v158 + 240LL))(v158, 0, "GAMEMODE_ARDM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v159 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 21;
    (*(*v159 + 240LL))(v159, 0, "GAMEMODE_1V1MID", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v160 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 22;
    (*(*v160 + 240LL))(v160, 0, "GAMEMODE_ALL_DRAFT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v161 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v161 + 240LL))(v161, 0, "TEAM_RADIANT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v162 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v162 + 240LL))(v162, 0, "TEAM_DIRE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v163 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v163 + 240LL))(v163, 0, "TEAM_NEUTRAL", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v164 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v164 + 240LL))(v164, 0, "TEAM_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v165 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v165 + 240LL))(v165, 0, "LANE_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v166 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v166 + 240LL))(v166, 0, "LANE_TOP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v167 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v167 + 240LL))(v167, 0, "LANE_MID", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v168 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v168 + 240LL))(v168, 0, "LANE_BOT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v169 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v169 + 240LL))(v169, 0, "GAME_STATE_INIT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v170 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v170 + 240LL))(v170, 0, "GAME_STATE_WAIT_FOR_PLAYERS_TO_LOAD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v171 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v171 + 240LL))(v171, 0, "GAME_STATE_HERO_SELECTION", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v172 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v172 + 240LL))(v172, 0, "GAME_STATE_STRATEGY_TIME", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v173 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v173 + 240LL))(v173, 0, "GAME_STATE_PRE_GAME", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v174 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v174 + 240LL))(v174, 0, "GAME_STATE_GAME_IN_PROGRESS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v175 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 6;
    (*(*v175 + 240LL))(v175, 0, "GAME_STATE_POST_GAME", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v176 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 7;
    (*(*v176 + 240LL))(v176, 0, "GAME_STATE_DISCONNECT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v177 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 8;
    (*(*v177 + 240LL))(v177, 0, "GAME_STATE_TEAM_SHOWCASE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v178 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 9;
    (*(*v178 + 240LL))(v178, 0, "GAME_STATE_CUSTOM_GAME_SETUP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v179 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 10;
    (*(*v179 + 240LL))(v179, 0, "GAME_STATE_WAIT_FOR_MAP_TO_LOAD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v180 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 11;
    (*(*v180 + 240LL))(v180, 0, "GAME_STATE_LAST", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v181 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v181 + 240LL))(v181, 0, "HEROPICK_STATE_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v182 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v182 + 240LL))(v182, 0, "HEROPICK_STATE_AP_SELECT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v183 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v183 + 240LL))(v183, 0, "HEROPICK_STATE_SD_SELECT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v184 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v184 + 240LL))(v184, 0, "HEROPICK_STATE_CM_INTRO", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v185 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 6;
    (*(*v185 + 240LL))(v185, 0, "HEROPICK_STATE_CM_CAPTAINPICK", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v186 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 7;
    (*(*v186 + 240LL))(v186, 0, "HEROPICK_STATE_CM_BAN1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v187 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 8;
    (*(*v187 + 240LL))(v187, 0, "HEROPICK_STATE_CM_BAN2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v188 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 9;
    (*(*v188 + 240LL))(v188, 0, "HEROPICK_STATE_CM_BAN3", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v189 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 10;
    (*(*v189 + 240LL))(v189, 0, "HEROPICK_STATE_CM_BAN4", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v190 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 11;
    (*(*v190 + 240LL))(v190, 0, "HEROPICK_STATE_CM_BAN5", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v191 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 12;
    (*(*v191 + 240LL))(v191, 0, "HEROPICK_STATE_CM_BAN6", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v192 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 13;
    (*(*v192 + 240LL))(v192, 0, "HEROPICK_STATE_CM_BAN7", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v193 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 14;
    (*(*v193 + 240LL))(v193, 0, "HEROPICK_STATE_CM_BAN8", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v194 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 15;
    (*(*v194 + 240LL))(v194, 0, "HEROPICK_STATE_CM_BAN9", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v195 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 16;
    (*(*v195 + 240LL))(v195, 0, "HEROPICK_STATE_CM_BAN10", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v196 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 17;
    (*(*v196 + 240LL))(v196, 0, "HEROPICK_STATE_CM_SELECT1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v197 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 18;
    (*(*v197 + 240LL))(v197, 0, "HEROPICK_STATE_CM_SELECT2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v198 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 19;
    (*(*v198 + 240LL))(v198, 0, "HEROPICK_STATE_CM_SELECT3", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v199 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 20;
    (*(*v199 + 240LL))(v199, 0, "HEROPICK_STATE_CM_SELECT4", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v200 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 21;
    (*(*v200 + 240LL))(v200, 0, "HEROPICK_STATE_CM_SELECT5", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v201 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 22;
    (*(*v201 + 240LL))(v201, 0, "HEROPICK_STATE_CM_SELECT6", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v202 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 23;
    (*(*v202 + 240LL))(v202, 0, "HEROPICK_STATE_CM_SELECT7", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v203 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 24;
    (*(*v203 + 240LL))(v203, 0, "HEROPICK_STATE_CM_SELECT8", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v204 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 25;
    (*(*v204 + 240LL))(v204, 0, "HEROPICK_STATE_CM_SELECT9", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v205 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 26;
    (*(*v205 + 240LL))(v205, 0, "HEROPICK_STATE_CM_SELECT10", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v206 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 27;
    (*(*v206 + 240LL))(v206, 0, "HEROPICK_STATE_CM_PICK", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v207 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 28;
    (*(*v207 + 240LL))(v207, 0, "HEROPICK_STATE_AR_SELECT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v208 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 29;
    (*(*v208 + 240LL))(v208, 0, "HEROPICK_STATE_MO_SELECT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v209 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 30;
    (*(*v209 + 240LL))(v209, 0, "HEROPICK_STATE_FH_SELECT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v210 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 31;
    (*(*v210 + 240LL))(v210, 0, "HEROPICK_STATE_CD_INTRO", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v211 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 32;
    (*(*v211 + 240LL))(v211, 0, "HEROPICK_STATE_CD_CAPTAINPICK", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v212 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 33;
    (*(*v212 + 240LL))(v212, 0, "HEROPICK_STATE_CD_BAN1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v213 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 34;
    (*(*v213 + 240LL))(v213, 0, "HEROPICK_STATE_CD_BAN2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v214 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 35;
    (*(*v214 + 240LL))(v214, 0, "HEROPICK_STATE_CD_BAN3", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v215 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 36;
    (*(*v215 + 240LL))(v215, 0, "HEROPICK_STATE_CD_BAN4", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v216 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 37;
    (*(*v216 + 240LL))(v216, 0, "HEROPICK_STATE_CD_BAN5", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v217 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 38;
    (*(*v217 + 240LL))(v217, 0, "HEROPICK_STATE_CD_BAN6", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v218 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 39;
    (*(*v218 + 240LL))(v218, 0, "HEROPICK_STATE_CD_SELECT1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v219 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 40;
    (*(*v219 + 240LL))(v219, 0, "HEROPICK_STATE_CD_SELECT2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v220 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 41;
    (*(*v220 + 240LL))(v220, 0, "HEROPICK_STATE_CD_SELECT3", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v221 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 42;
    (*(*v221 + 240LL))(v221, 0, "HEROPICK_STATE_CD_SELECT4", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v222 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 43;
    (*(*v222 + 240LL))(v222, 0, "HEROPICK_STATE_CD_SELECT5", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v223 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 44;
    (*(*v223 + 240LL))(v223, 0, "HEROPICK_STATE_CD_SELECT6", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v224 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 45;
    (*(*v224 + 240LL))(v224, 0, "HEROPICK_STATE_CD_SELECT7", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v225 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 46;
    (*(*v225 + 240LL))(v225, 0, "HEROPICK_STATE_CD_SELECT8", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v226 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 47;
    (*(*v226 + 240LL))(v226, 0, "HEROPICK_STATE_CD_SELECT9", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v227 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 48;
    (*(*v227 + 240LL))(v227, 0, "HEROPICK_STATE_CD_SELECT10", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v228 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 49;
    (*(*v228 + 240LL))(v228, 0, "HEROPICK_STATE_CD_PICK", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v229 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 50;
    (*(*v229 + 240LL))(v229, 0, "HEROPICK_STATE_BD_SELECT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v230 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 51;
    (*(*v230 + 240LL))(v230, 0, "HERO_PICK_STATE_ABILITY_DRAFT_SELECT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v231 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 52;
    (*(*v231 + 240LL))(v231, 0, "HERO_PICK_STATE_ARDM_SELECT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v232 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 53;
    (*(*v232 + 240LL))(v232, 0, "HEROPICK_STATE_ALL_DRAFT_SELECT", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v233 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 55;
    (*(*v233 + 240LL))(v233, 0, "HEROPICK_STATE_SELECT_PENALTY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v234 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = -1;
    (*(*v234 + 240LL))(v234, 0, "RUNE_INVALID", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v235 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v235 + 240LL))(v235, 0, "RUNE_DOUBLEDAMAGE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v236 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v236 + 240LL))(v236, 0, "RUNE_HASTE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v237 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v237 + 240LL))(v237, 0, "RUNE_ILLUSION", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v238 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v238 + 240LL))(v238, 0, "RUNE_INVISIBILITY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v239 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v239 + 240LL))(v239, 0, "RUNE_REGENERATION", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v240 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v240 + 240LL))(v240, 0, "RUNE_BOUNTY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v241 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 6;
    (*(*v241 + 240LL))(v241, 0, "RUNE_ARCANE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v242 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v242 + 240LL))(v242, 0, "RUNE_STATUS_UNKNOWN", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v243 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v243 + 240LL))(v243, 0, "RUNE_STATUS_AVAILABLE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v244 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v244 + 240LL))(v244, 0, "RUNE_STATUS_MISSING", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v245 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v245 + 240LL))(v245, 0, "RUNE_POWERUP_1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v246 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v246 + 240LL))(v246, 0, "RUNE_POWERUP_2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v247 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v247 + 240LL))(v247, 0, "RUNE_BOUNTY_1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v248 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v248 + 240LL))(v248, 0, "RUNE_BOUNTY_2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v249 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v249 + 240LL))(v249, 0, "RUNE_BOUNTY_3", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v250 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v250 + 240LL))(v250, 0, "RUNE_BOUNTY_4", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v251 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = -1;
    (*(*v251 + 240LL))(v251, 0, "ITEM_SLOT_TYPE_INVALID", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v252 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v252 + 240LL))(v252, 0, "ITEM_SLOT_TYPE_MAIN", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v253 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v253 + 240LL))(v253, 0, "ITEM_SLOT_TYPE_BACKPACK", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v254 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v254 + 240LL))(v254, 0, "ITEM_SLOT_TYPE_STASH", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v255 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v255 + 240LL))(v255, 0, "BOT_ACTION_TYPE_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v256 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v256 + 240LL))(v256, 0, "BOT_ACTION_TYPE_IDLE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v257 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v257 + 240LL))(v257, 0, "BOT_ACTION_TYPE_MOVE_TO", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v258 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v258 + 240LL))(v258, 0, "BOT_ACTION_TYPE_ATTACK", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v259 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v259 + 240LL))(v259, 0, "BOT_ACTION_TYPE_ATTACKMOVE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v260 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v260 + 240LL))(v260, 0, "BOT_ACTION_TYPE_USE_ABILITY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v261 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 6;
    (*(*v261 + 240LL))(v261, 0, "BOT_ACTION_TYPE_PICK_UP_RUNE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v262 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 7;
    (*(*v262 + 240LL))(v262, 0, "BOT_ACTION_TYPE_PICK_UP_ITEM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v263 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 8;
    (*(*v263 + 240LL))(v263, 0, "BOT_ACTION_TYPE_DROP_ITEM", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v264 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v264 + 240LL))(v264, 0, "TOWER_TOP_1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v265 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v265 + 240LL))(v265, 0, "TOWER_TOP_2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v266 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v266 + 240LL))(v266, 0, "TOWER_TOP_3", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v267 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v267 + 240LL))(v267, 0, "TOWER_MID_1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v268 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v268 + 240LL))(v268, 0, "TOWER_MID_2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v269 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v269 + 240LL))(v269, 0, "TOWER_MID_3", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v270 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 6;
    (*(*v270 + 240LL))(v270, 0, "TOWER_BOT_1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v271 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 7;
    (*(*v271 + 240LL))(v271, 0, "TOWER_BOT_2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v272 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 8;
    (*(*v272 + 240LL))(v272, 0, "TOWER_BOT_3", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v273 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 9;
    (*(*v273 + 240LL))(v273, 0, "TOWER_BASE_1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v274 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 10;
    (*(*v274 + 240LL))(v274, 0, "TOWER_BASE_2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v275 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v275 + 240LL))(v275, 0, "BARRACKS_TOP_MELEE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v276 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v276 + 240LL))(v276, 0, "BARRACKS_TOP_RANGED", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v277 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v277 + 240LL))(v277, 0, "BARRACKS_MID_MELEE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v278 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v278 + 240LL))(v278, 0, "BARRACKS_MID_RANGED", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v279 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v279 + 240LL))(v279, 0, "BARRACKS_BOT_MELEE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v280 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v280 + 240LL))(v280, 0, "BARRACKS_BOT_RANGED", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v281 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v281 + 240LL))(v281, 0, "SHRINE_BASE_1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v282 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v282 + 240LL))(v282, 0, "SHRINE_BASE_2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v283 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v283 + 240LL))(v283, 0, "SHRINE_BASE_3", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v284 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v284 + 240LL))(v284, 0, "SHRINE_BASE_4", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v285 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v285 + 240LL))(v285, 0, "SHRINE_BASE_5", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v286 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v286 + 240LL))(v286, 0, "SHRINE_JUNGLE_1", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v287 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 6;
    (*(*v287 + 240LL))(v287, 0, "SHRINE_JUNGLE_2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v288 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v288 + 240LL))(v288, 0, "UNIT_LIST_ALL", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v289 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v289 + 240LL))(v289, 0, "UNIT_LIST_ALLIES", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v290 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v290 + 240LL))(v290, 0, "UNIT_LIST_ALLIED_HEROES", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v291 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v291 + 240LL))(v291, 0, "UNIT_LIST_ALLIED_CREEPS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v292 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v292 + 240LL))(v292, 0, "UNIT_LIST_ALLIED_WARDS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v293 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v293 + 240LL))(v293, 0, "UNIT_LIST_ENEMIES", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v294 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 6;
    (*(*v294 + 240LL))(v294, 0, "UNIT_LIST_ENEMY_HEROES", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v295 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 7;
    (*(*v295 + 240LL))(v295, 0, "UNIT_LIST_ENEMY_CREEPS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v296 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 8;
    (*(*v296 + 240LL))(v296, 0, "UNIT_LIST_ENEMY_WARDS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v297 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 9;
    (*(*v297 + 240LL))(v297, 0, "UNIT_LIST_NEUTRAL_CREEPS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v298 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v298 + 240LL))(v298, 0, "COURIER_STATE_IDLE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v299 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v299 + 240LL))(v299, 0, "COURIER_STATE_AT_BASE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v300 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v300 + 240LL))(v300, 0, "COURIER_STATE_MOVING", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v301 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v301 + 240LL))(v301, 0, "COURIER_STATE_DELIVERING_ITEMS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v302 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v302 + 240LL))(v302, 0, "COURIER_STATE_RETURNING_TO_BASE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v303 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v303 + 240LL))(v303, 0, "COURIER_STATE_DEAD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v304 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v304 + 240LL))(v304, 0, "COURIER_ACTION_RETURN", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v305 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v305 + 240LL))(v305, 0, "COURIER_ACTION_SECRET_SHOP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v306 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v306 + 240LL))(v306, 0, "COURIER_ACTION_RETURN_STASH_ITEMS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v307 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 3;
    (*(*v307 + 240LL))(v307, 0, "COURIER_ACTION_TAKE_STASH_ITEMS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v308 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v308 + 240LL))(v308, 0, "COURIER_ACTION_TRANSFER_ITEMS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v309 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v309 + 240LL))(v309, 0, "COURIER_ACTION_BURST", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v310 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 6;
    (*(*v310 + 240LL))(v310, 0, "COURIER_ACTION_TAKE_AND_TRANSFER_ITEMS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v311 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v311 + 240LL))(v311, 0, "ABILITY_TARGET_TEAM_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v312 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v312 + 240LL))(v312, 0, "ABILITY_TARGET_TEAM_FRIENDLY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v313 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v313 + 240LL))(v313, 0, "ABILITY_TARGET_TEAM_ENEMY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v314 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v314 + 240LL))(v314, 0, "ABILITY_TARGET_TYPE_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v315 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v315 + 240LL))(v315, 0, "ABILITY_TARGET_TYPE_HERO", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v316 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v316 + 240LL))(v316, 0, "ABILITY_TARGET_TYPE_CREEP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v317 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v317 + 240LL))(v317, 0, "ABILITY_TARGET_TYPE_BUILDING", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v318 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 16;
    (*(*v318 + 240LL))(v318, 0, "ABILITY_TARGET_TYPE_COURIER", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v319 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 32;
    (*(*v319 + 240LL))(v319, 0, "ABILITY_TARGET_TYPE_OTHER", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v320 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 64;
    (*(*v320 + 240LL))(v320, 0, "ABILITY_TARGET_TYPE_TREE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v321 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 18;
    (*(*v321 + 240LL))(v321, 0, "ABILITY_TARGET_TYPE_BASIC", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v322 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 55;
    (*(*v322 + 240LL))(v322, 0, "ABILITY_TARGET_TYPE_ALL", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v323 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v323 + 240LL))(v323, 0, "ABILITY_TARGET_FLAG_NONE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v324 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v324 + 240LL))(v324, 0, "ABILITY_TARGET_FLAG_RANGED_ONLY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v325 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v325 + 240LL))(v325, 0, "ABILITY_TARGET_FLAG_MELEE_ONLY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v326 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 8;
    (*(*v326 + 240LL))(v326, 0, "ABILITY_TARGET_FLAG_DEAD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v327 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 16;
    (*(*v327 + 240LL))(v327, 0, "ABILITY_TARGET_FLAG_MAGIC_IMMUNE_ENEMIES", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v328 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 32;
    (*(*v328 + 240LL))(v328, 0, "ABILITY_TARGET_FLAG_NOT_MAGIC_IMMUNE_ALLIES", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v329 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 64;
    (*(*v329 + 240LL))(v329, 0, "ABILITY_TARGET_FLAG_INVULNERABLE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v330 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 128;
    (*(*v330 + 240LL))(v330, 0, "ABILITY_TARGET_FLAG_FOW_VISIBLE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v331 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 256;
    (*(*v331 + 240LL))(v331, 0, "ABILITY_TARGET_FLAG_NO_INVIS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v332 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 512;
    (*(*v332 + 240LL))(v332, 0, "ABILITY_TARGET_FLAG_NOT_ANCIENTS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v333 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 1024;
    (*(*v333 + 240LL))(v333, 0, "ABILITY_TARGET_FLAG_PLAYER_CONTROLLED", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v334 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 2048;
    (*(*v334 + 240LL))(v334, 0, "ABILITY_TARGET_FLAG_NOT_DOMINATED", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v335 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 4096;
    (*(*v335 + 240LL))(v335, 0, "ABILITY_TARGET_FLAG_NOT_SUMMONED", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v336 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0x2000;
    (*(*v336 + 240LL))(v336, 0, "ABILITY_TARGET_FLAG_NOT_ILLUSIONS", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v337 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0x4000;
    (*(*v337 + 240LL))(v337, 0, "ABILITY_TARGET_FLAG_NOT_ATTACK_IMMUNE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v338 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0x8000;
    (*(*v338 + 240LL))(v338, 0, "ABILITY_TARGET_FLAG_MANA_ONLY", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v339 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0x10000;
    (*(*v339 + 240LL))(v339, 0, "ABILITY_TARGET_FLAG_CHECK_DISABLE_HELP", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v340 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 0x20000;
    (*(*v340 + 240LL))(v340, 0, "ABILITY_TARGET_FLAG_NOT_CREEP_HERO", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v341 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0x40000;
    (*(*v341 + 240LL))(v341, 0, "ABILITY_TARGET_FLAG_OUT_OF_WORLD", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v342 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0x80000;
    (*(*v342 + 240LL))(v342, 0, "ABILITY_TARGET_FLAG_NOT_NIGHTMARED", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v360 = 0;
    v343 = this->m_pBotScriptVM;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0x100000;
    (*(*v343 + 240LL))(v343, 0, "ABILITY_TARGET_FLAG_PREFER_ENEMIES", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v344 = this->m_pBotScriptVM;
    v360 = 0;
    v359 = 5;
    LODWORD(ulBotScriptUGC) = 0;
    (*(*v344 + 240LL))(v344, 0, "SHOP_HOME", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v345 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 1;
    (*(*v345 + 240LL))(v345, 0, "SHOP_SIDE", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v346 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 2;
    (*(*v346 + 240LL))(v346, 0, "SHOP_SECRET", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v347 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 4;
    (*(*v347 + 240LL))(v347, 0, "SHOP_SIDE2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    v348 = this->m_pBotScriptVM;
    v359 = 5;
    v360 = 0;
    LODWORD(ulBotScriptUGC) = 5;
    (*(*v348 + 240LL))(v348, 0, "SHOP_SECRET2", &ulBotScriptUGC);
    CVariantBase<CVariantDefaultAllocator>::Free(&ulBotScriptUGC);
    CDOTA_TeamCommander::LoadHeroSelectionScript(this, 0);
    CDOTA_TeamCommander::LoadTeamLevelDesiresScript(this, 0);
    (*(*this->m_pBotScriptVM + 80LL))(
      this->m_pBotScriptVM,
      "\t\tif g_reloadState == nil then \t\t\tg_reloadState = {} \t\t\tfor k, v in pairs( package.loaded ) do \t\t\t\tg_r"
      "eloadState[k] = v \t\t\tend \t\telse \t\t\tfor k, v in pairs( package.loaded ) do \t\t\t\tif g_reloadState[k] == n"
      "il then \t\t\t\t\tpackage.loaded[k] = nil \t\t\t\tend \t\t\tend \t\tend",
      1);
    return;
  }
  if ( *(SteamInternal_ContextInit(&SteamInternal_ModuleContext(void)::s_CallbackCounterAndContext) + 112) != 0 )
  {
    v351 = *(SteamInternal_ContextInit(&SteamInternal_ModuleContext(void)::s_CallbackCounterAndContext) + 112);
    v352 = *(*v351 + 24LL);
    v353 = SteamInternal_ContextInit(&SteamInternal_ModuleContext(void)::s_CallbackCounterAndContext);
    v354 = (*(**(v353 + 112) + 16LL))(*(v353 + 112), &ulBotScriptUGC, 1);
    v355 = v352(v351, v354);
    if ( this->m_hBotScriptDetailsCallback.m_hAPICall != 0 )
    {
      hDetailsCall = v355;
      SteamAPI_UnregisterCallResult(&this->m_hBotScriptDetailsCallback);
      v355 = hDetailsCall;
    }
    this->m_hBotScriptDetailsCallback.m_hAPICall = v355;
    this->m_hBotScriptDetailsCallback.m_pObj = this;
    this->m_hBotScriptDetailsCallback.m_Func.__pfn = CDOTA_TeamCommander::OnBotScriptDetails;
    this->m_hBotScriptDetailsCallback.m_Func.__delta = 0;
    if ( v355 != 0 )
      SteamAPI_RegisterCallResult(&this->m_hBotScriptDetailsCallback, v355);
  }
}


// CDOTA_TeamCommander::ShutdownScripting  (line 1292, @0x0000000002833810, libserver.so)
void __fastcall CDOTA_TeamCommander::ShutdownScripting(CDOTA_TeamCommander *const this)
{
  (*(*g_pScriptManager + 96LL))(g_pScriptManager, this->m_pBotScriptVM);
  this->m_pBotScriptVM = 0;
  this->m_hHeroSelectionScriptScope = 0;
  this->m_hTeamLevelDesiresScriptScope = 0;
}


// CDOTA_TeamCommander::ClearScriptModules  (line 1304, @0x0000000002833860, libserver.so)
// strings: "\t\tif g_reloadState == nil then \t\t\tg_reloadState = {} \t\t\tfor k, v in pairs( packag
void __fastcall CDOTA_TeamCommander::ClearScriptModules(CDOTA_TeamCommander *const this)
{
  (*(*this->m_pBotScriptVM + 80LL))(
    this->m_pBotScriptVM,
    "\t\tif g_reloadState == nil then \t\t\tg_reloadState = {} \t\t\tfor k, v in pairs( package.loaded ) do \t\t\t\tg_rel"
    "oadState[k] = v \t\t\tend \t\telse \t\t\tfor k, v in pairs( package.loaded ) do \t\t\t\tif g_reloadState[k] == nil t"
    "hen \t\t\t\t\tpackage.loaded[k] = nil \t\t\t\tend \t\t\tend \t\tend",
    1);
}


// CDOTA_TeamCommander::ReloadScripts  (line 1324, @0x000000000283e3d0, libserver.so)  // inlines: ClearScriptModules, GetBotByIndex
// calls: CDOTA_Bot::ReloadScripts, CDOTA_TeamCommander::LoadHeroSelectionScript, CDOTA_TeamCommander::LoadTeamLevelDesiresScript
// callers: dota_bot_reload_scripts
// strings: "\t\tif g_reloadState == nil then \t\t\tg_reloadState = {} \t\t\tfor k, v in pairs( packag
void __fastcall CDOTA_TeamCommander::ReloadScripts(CDOTA_TeamCommander *const this)
{
  IScriptVM *m_pBotScriptVM; // rdi
  __int64 v3; // r13
  int v4; // r12d
  CDOTA_Bot *v5; // rdi

  m_pBotScriptVM = this->m_pBotScriptVM;
  if ( m_pBotScriptVM != 0 )
  {
    v3 = 0;
    v4 = 0;
    (*(*m_pBotScriptVM + 48LL))(m_pBotScriptVM);
    (*(*this->m_pBotScriptVM + 80LL))(
      this->m_pBotScriptVM,
      "\t\tif g_reloadState == nil then \t\t\tg_reloadState = {} \t\t\tfor k, v in pairs( package.loaded ) do \t\t\t\tg_r"
      "eloadState[k] = v \t\t\tend \t\telse \t\t\tfor k, v in pairs( package.loaded ) do \t\t\t\tif g_reloadState[k] == n"
      "il then \t\t\t\t\tpackage.loaded[k] = nil \t\t\t\tend \t\t\tend \t\tend",
      1);
    if ( this->m_BotList.m_Size > 0 )
    {
      do
      {
        ++v4;
        v5 = this->m_BotList.m_Memory.m_pMemory[v3++];
        CDOTA_Bot::ReloadScripts(v5);
      }
      while ( v4 < this->m_BotList.m_Size );
    }
    CDOTA_TeamCommander::LoadHeroSelectionScript(this, 1);
    CDOTA_TeamCommander::LoadTeamLevelDesiresScript(this, 1);
  }
}


// CDOTA_TeamCommander::LoadHeroSelectionScript  (line 1344, @0x000000000283e2b0, libserver.so)  // inlines: String
// calls: CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CDOTA_TeamCommander::LoadScript, __stack_chk_fail
// callers: CDOTA_TeamCommander::ReloadScripts, CDOTA_TeamCommander::InitScripting
// strings: "%s\\hero_selection.lua"
void __fastcall CDOTA_TeamCommander::LoadHeroSelectionScript(CDOTA_TeamCommander *const this, bool bReload)
{
  const char *v4; // rax
  CFmtStrN<256,false> v5; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v6; // [rsp+118h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  v4 = CUtlString::Get(&this->m_sScriptDirectory);
  CFmtStrN<256,false>::CFmtStrN(&v5, "%s\\hero_selection.lua", v4);
  CDOTA_TeamCommander::LoadScript(
    this,
    v5.m_szBuf,
    "HeroSelectionScriptScope",
    &this->m_hHeroSelectionScriptScope,
    bReload);
}


// CDOTA_TeamCommander::LoadTeamLevelDesiresScript  (line 1349, @0x000000000283e340, libserver.so)  // inlines: String
// calls: CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CDOTA_TeamCommander::LoadScript, __stack_chk_fail
// callers: CDOTA_TeamCommander::ReloadScripts, CDOTA_TeamCommander::InitScripting
// strings: "%s\\team_desires.lua", "TeamDesiresScriptScope"
void __fastcall CDOTA_TeamCommander::LoadTeamLevelDesiresScript(CDOTA_TeamCommander *const this, bool bReload)
{
  const char *v4; // rax
  CFmtStrN<256,false> v5; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v6; // [rsp+118h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  v4 = CUtlString::Get(&this->m_sScriptDirectory);
  CFmtStrN<256,false>::CFmtStrN(&v5, "%s\\team_desires.lua", v4);
  CDOTA_TeamCommander::LoadScript(
    this,
    v5.m_szBuf,
    "TeamDesiresScriptScope",
    &this->m_hTeamLevelDesiresScriptScope,
    bReload);
}


// CDOTA_TeamCommander::LoadScript  (line 1356, @0x0000000002833890, libserver.so)  // inlines: SetTeamRunningScript
// calls: DOTACommander, Warning
// callers: CDOTA_TeamCommander::LoadHeroSelectionScript, CDOTA_TeamCommander::LoadTeamLevelDesiresScript
// strings: "Failed to compile script '%s'!\n", "Failed to run script '%s'!\n", "Attempt to set bot script prior to bot VM being created!\n"
bool __fastcall CDOTA_TeamCommander::LoadScript(
        CDOTA_TeamCommander *const this,
        const char *pszScriptFile,
        const char *pszScopeName,
        HSCRIPT *pScriptScope,
        bool bRecreateScope)
{
  bool result; // al
  IScriptVM *m_pBotScriptVM; // rdi
  DOTATeam_t m_eTeam; // r14d
  CDOTA_Commander *v13; // rax
  HSCRIPT v14; // rsi
  bool v15; // r14
  HSCRIPT hScript[7]; // [rsp+8h] [rbp-38h] BYREF

  result = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(
             &g_pFullFileSystem->IBaseFileSystem,
             pszScriptFile,
             "GAME");
  if ( !result )
    return result;
  m_pBotScriptVM = this->m_pBotScriptVM;
  if ( m_pBotScriptVM == 0 )
  {
    Warning("Attempt to set bot script prior to bot VM being created!\n");
    return 0;
  }
  if ( (*(*m_pBotScriptVM + 464LL))(m_pBotScriptVM, pszScriptFile, "GAME", hScript) != 0 )
  {
    Warning("Failed to compile script '%s'!\n", pszScriptFile);
    return 0;
  }
  if ( bRecreateScope )
  {
    if ( *pScriptScope != 0 )
    {
      (*(*this->m_pBotScriptVM + 136LL))(this->m_pBotScriptVM);
      *pScriptScope = 0;
    }
  }
  else if ( *pScriptScope != 0 )
  {
    goto LABEL_9;
  }
  *pScriptScope = (*(*this->m_pBotScriptVM + 120LL))(this->m_pBotScriptVM, pszScopeName, 0);
LABEL_9:
  m_eTeam = this->m_eTeam;
  v13 = DOTACommander();
  v14 = hScript[0];
  v13->m_eTeamRunningScript = m_eTeam;
  v15 = (*(*this->m_pBotScriptVM + 104LL))(this->m_pBotScriptVM, v14, *pScriptScope, 1) != -1;
  (*(*this->m_pBotScriptVM + 96LL))(this->m_pBotScriptVM, hScript[0]);
  if ( !v15 )
  {
    (*(*this->m_pBotScriptVM + 136LL))(this->m_pBotScriptVM, *pScriptScope);
    Warning("Failed to run script '%s'!\n", pszScriptFile);
  }
  DOTACommander()->m_eTeamRunningScript = DOTATeam_t::DOTA_TEAM_NOTEAM;
  return v15;
}


// CDOTA_TeamCommander::RunScriptFunction  (line 1404, @0x0000000002833a30, libserver.so)  // inlines: SetTeamRunningScript
// calls: Plat_FloatTime, DOTACommander, Msg
// callers: CDOTA_TeamCommander::DoBotScriptHeroSelection, CDOTA_TeamCommander::UpdateHeroSelections, CDOTA_TeamCommander::DoBotScriptUpdatePushLaneDesires, CDOTA_TeamCommander::DoBotScriptUpdateDefendLaneDesires, CDOTA_TeamCommander::DoBotScriptUpdateFarmLaneDesires, CDOTA_TeamCommander::DoBotScriptUpdateRoshanDesire, CDOTA_TeamCommander::DoBotScriptLaneAssignments, CDOTA_TeamCommander::DoBotScriptUpdateRoamDesire
// strings: "Script function hero selection took %2.3fms\n"
bool __fastcall CDOTA_TeamCommander::RunScriptFunction(
        CDOTA_TeamCommander *const this,
        const char *pszFunctionName,
        HSCRIPT hScriptScope,
        ScriptVariant_t *pArg,
        ScriptVariant_t *pResult)
{
  IScriptVM *m_pBotScriptVM; // rdi
  __int64 v9; // r12
  double v10; // xmm0_8
  DOTATeam_t m_eTeam; // r15d
  double v12; // xmm0_8
  bool result; // al
  float v14; // xmm0_4
  double v15; // [rsp+8h] [rbp-40h]

  if ( hScriptScope == 0 )
    return 0;
  m_pBotScriptVM = this->m_pBotScriptVM;
  if ( m_pBotScriptVM == 0 )
    return 0;
  v9 = (*(*m_pBotScriptVM + 144LL))(m_pBotScriptVM, pszFunctionName, hScriptScope, 0);
  if ( v9 == 0 )
    return 0;
  v10 = Plat_FloatTime();
  m_eTeam = this->m_eTeam;
  v15 = v10;
  DOTACommander()->m_eTeamRunningScript = m_eTeam;
  (*(*this->m_pBotScriptVM + 160LL))(this->m_pBotScriptVM, v9, pArg, pArg != 0, pResult, 0, 1);
  (*(*this->m_pBotScriptVM + 152LL))(this->m_pBotScriptVM, v9);
  DOTACommander()->m_eTeamRunningScript = DOTATeam_t::DOTA_TEAM_NOTEAM;
  v12 = Plat_FloatTime();
  result = 1;
  v14 = (v12 - v15) * 1000.0;
  if ( v14 > 2.0 )
  {
    Msg("Script function hero selection took %2.3fms\n", v14);
    return 1;
  }
  return result;
}


// CDOTA_TeamCommander::DoBotScriptHeroSelection  (line 1439, @0x0000000002833b80, libserver.so)
// calls: CDOTA_TeamCommander::RunScriptFunction
bool __fastcall CDOTA_TeamCommander::DoBotScriptHeroSelection(CDOTA_TeamCommander *const this)
{
  return CDOTA_TeamCommander::RunScriptFunction(this, "Think", this->m_hHeroSelectionScriptScope, 0, 0);
}


// CDOTA_TeamCommander::DoBotScriptLaneAssignments  (line 1444, @0x0000000002842cf0, libserver.so)  // inlines: CVariantBase, Int, operator int, ~CVariantBase
// calls: CDOTA_TeamCommander::RunScriptFunction, CDOTA_PlayerResource::GetNthPlayerIDOnTeam, CDOTA_TeamCommander::GetBotByPlayerID, CDOTA_Bot::SetAssignedLane, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_TeamCommander::UpdateLaneAssignments
// strings: "UpdateLaneAssignments"
bool __fastcall CDOTA_TeamCommander::DoBotScriptLaneAssignments(CDOTA_TeamCommander *const this)
{
  HSCRIPT m_hHeroSelectionScriptScope; // rdx
  bool v3; // r15
  uint64 m_uint64; // r14
  unsigned int v5; // ebx
  IScriptVM *m_pBotScriptVM; // rdi
  int NthPlayerIDOnTeam; // eax
  CDOTA_Bot *BotByPlayerID; // rax
  DOTA_LANE m_float; // esi
  ScriptVariant_t retval; // [rsp+10h] [rbp-50h] BYREF
  ScriptVariant_t lane; // [rsp+20h] [rbp-40h] BYREF

  retval.m_type = 0;
  m_hHeroSelectionScriptScope = this->m_hHeroSelectionScriptScope;
  retval.m_flags = 0;
  retval.m_uint64 = 0;
  v3 = CDOTA_TeamCommander::RunScriptFunction(this, "UpdateLaneAssignments", m_hHeroSelectionScriptScope, 0, &retval);
  if ( v3 )
  {
    m_uint64 = retval.m_uint64;
    v5 = 0;
    do
    {
      m_pBotScriptVM = this->m_pBotScriptVM;
      lane.m_type = 0;
      lane.m_flags = 0;
      lane.m_uint64 = 0;
      (*(*m_pBotScriptVM + 320LL))(m_pBotScriptVM, m_uint64, v5++, &lane);
      NthPlayerIDOnTeam = CDOTA_PlayerResource::GetNthPlayerIDOnTeam(g_pDOTAPlayerResource, this->m_eTeam, v5);
      BotByPlayerID = CDOTA_TeamCommander::GetBotByPlayerID(this, NthPlayerIDOnTeam);
      if ( BotByPlayerID != 0 )
      {
        if ( lane.m_type == 1 )
        {
          m_float = lane.m_float;
        }
        else
        {
          m_float = lane.m_int;
          if ( lane.m_type == 34 )
            m_float = lane.m_float64;
        }
        CDOTA_Bot::SetAssignedLane(BotByPlayerID, m_float);
      }
      CVariantBase<CVariantDefaultAllocator>::Free(&lane);
    }
    while ( v5 != 5 );
    (*(*this->m_pBotScriptVM + 344LL))(this->m_pBotScriptVM, &retval);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&retval);
  return v3;
}


// CDOTA_TeamCommander::DoBotScriptUpdatePushLaneDesires  (line 1474, @0x0000000002842250, libserver.so)  // inlines: CVariantBase, Float, operator float, ~CVariantBase
// calls: CDOTA_TeamCommander::RunScriptFunction, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_TeamCommander::UpdatePushLaneDesires
// strings: "UpdatePushLaneDesires"
bool __fastcall CDOTA_TeamCommander::DoBotScriptUpdatePushLaneDesires(CDOTA_TeamCommander *const this)
{
  HSCRIPT m_hTeamLevelDesiresScriptScope; // rdx
  bool v3; // r12
  IScriptVM *m_pBotScriptVM; // rdi
  float m_float; // xmm0_4
  bool v6; // zf
  float m_float64; // xmm0_4
  float v8; // xmm0_4
  IScriptVM *v9; // rdi
  uint64 m_uint64; // [rsp+8h] [rbp-78h]
  ScriptVariant_t retval; // [rsp+10h] [rbp-70h] BYREF
  ScriptVariant_t top; // [rsp+20h] [rbp-60h] BYREF
  ScriptVariant_t mid; // [rsp+30h] [rbp-50h] BYREF
  ScriptVariant_t bot; // [rsp+40h] [rbp-40h] BYREF

  retval.m_type = 0;
  m_hTeamLevelDesiresScriptScope = this->m_hTeamLevelDesiresScriptScope;
  retval.m_flags = 0;
  retval.m_uint64 = 0;
  v3 = CDOTA_TeamCommander::RunScriptFunction(this, "UpdatePushLaneDesires", m_hTeamLevelDesiresScriptScope, 0, &retval);
  if ( v3 )
  {
    m_pBotScriptVM = this->m_pBotScriptVM;
    top.m_type = 0;
    top.m_flags = 0;
    top.m_uint64 = 0;
    mid.m_type = 0;
    mid.m_flags = 0;
    bot.m_type = 0;
    mid.m_uint64 = 0;
    bot.m_flags = 0;
    bot.m_uint64 = 0;
    m_uint64 = retval.m_uint64;
    (*(*m_pBotScriptVM + 320LL))(m_pBotScriptVM, retval.m_uint64, 0);
    (*(*this->m_pBotScriptVM + 320LL))(this->m_pBotScriptVM, m_uint64, 1, &mid);
    (*(*this->m_pBotScriptVM + 320LL))(this->m_pBotScriptVM, m_uint64, 2, &bot);
    m_float = top.m_float;
    if ( top.m_type == 34 )
      m_float = top.m_float64;
    v6 = mid.m_type == 34;
    this->m_fPushLaneDesire[1] = m_float;
    m_float64 = mid.m_float;
    if ( v6 )
      m_float64 = mid.m_float64;
    v6 = bot.m_type == 34;
    this->m_fPushLaneDesire[2] = m_float64;
    v8 = bot.m_float;
    if ( v6 )
      v8 = bot.m_float64;
    v9 = this->m_pBotScriptVM;
    this->m_fPushLaneDesire[3] = v8;
    (*(*v9 + 344LL))(v9, &retval);
    CVariantBase<CVariantDefaultAllocator>::Free(&bot);
    CVariantBase<CVariantDefaultAllocator>::Free(&mid);
    CVariantBase<CVariantDefaultAllocator>::Free(&top);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&retval);
  return v3;
}


// CDOTA_TeamCommander::DoBotScriptUpdateDefendLaneDesires  (line 1502, @0x0000000002842430, libserver.so)  // inlines: CVariantBase, Float, operator float, ~CVariantBase
// calls: CDOTA_TeamCommander::RunScriptFunction, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_TeamCommander::UpdateDefendLaneDesires
// strings: "UpdateDefendLaneDesires"
bool __fastcall CDOTA_TeamCommander::DoBotScriptUpdateDefendLaneDesires(CDOTA_TeamCommander *const this)
{
  HSCRIPT m_hTeamLevelDesiresScriptScope; // rdx
  bool v3; // r12
  IScriptVM *m_pBotScriptVM; // rdi
  float m_float; // xmm0_4
  bool v6; // zf
  float m_float64; // xmm0_4
  float v8; // xmm0_4
  IScriptVM *v9; // rdi
  uint64 m_uint64; // [rsp+8h] [rbp-78h]
  ScriptVariant_t retval; // [rsp+10h] [rbp-70h] BYREF
  ScriptVariant_t top; // [rsp+20h] [rbp-60h] BYREF
  ScriptVariant_t mid; // [rsp+30h] [rbp-50h] BYREF
  ScriptVariant_t bot; // [rsp+40h] [rbp-40h] BYREF

  retval.m_type = 0;
  m_hTeamLevelDesiresScriptScope = this->m_hTeamLevelDesiresScriptScope;
  retval.m_flags = 0;
  retval.m_uint64 = 0;
  v3 = CDOTA_TeamCommander::RunScriptFunction(
         this,
         "UpdateDefendLaneDesires",
         m_hTeamLevelDesiresScriptScope,
         0,
         &retval);
  if ( v3 )
  {
    mid.m_type = 0;
    m_pBotScriptVM = this->m_pBotScriptVM;
    top.m_type = 0;
    top.m_flags = 0;
    top.m_uint64 = 0;
    mid.m_flags = 0;
    mid.m_uint64 = 0;
    bot.m_type = 0;
    bot.m_flags = 0;
    bot.m_uint64 = 0;
    m_uint64 = retval.m_uint64;
    (*(*m_pBotScriptVM + 320LL))(m_pBotScriptVM, retval.m_uint64, 0);
    (*(*this->m_pBotScriptVM + 320LL))(this->m_pBotScriptVM, m_uint64, 1, &mid);
    (*(*this->m_pBotScriptVM + 320LL))(this->m_pBotScriptVM, m_uint64, 2, &bot);
    m_float = top.m_float;
    if ( top.m_type == 34 )
      m_float = top.m_float64;
    v6 = mid.m_type == 34;
    this->m_fDefendLaneDesire[1] = m_float;
    m_float64 = mid.m_float;
    if ( v6 )
      m_float64 = mid.m_float64;
    v6 = bot.m_type == 34;
    this->m_fDefendLaneDesire[2] = m_float64;
    v8 = bot.m_float;
    if ( v6 )
      v8 = bot.m_float64;
    v9 = this->m_pBotScriptVM;
    this->m_fDefendLaneDesire[3] = v8;
    (*(*v9 + 344LL))(v9, &retval);
    CVariantBase<CVariantDefaultAllocator>::Free(&bot);
    CVariantBase<CVariantDefaultAllocator>::Free(&mid);
    CVariantBase<CVariantDefaultAllocator>::Free(&top);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&retval);
  return v3;
}


// CDOTA_TeamCommander::DoBotScriptUpdateFarmLaneDesires  (line 1530, @0x0000000002842620, libserver.so)  // inlines: CVariantBase, Float, operator float, ~CVariantBase
// calls: CDOTA_TeamCommander::RunScriptFunction, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_TeamCommander::UpdateFarmLaneDesires
// strings: "UpdateFarmLaneDesires"
bool __fastcall CDOTA_TeamCommander::DoBotScriptUpdateFarmLaneDesires(CDOTA_TeamCommander *const this)
{
  HSCRIPT m_hTeamLevelDesiresScriptScope; // rdx
  bool v3; // r12
  IScriptVM *m_pBotScriptVM; // rdi
  float m_float; // xmm0_4
  bool v6; // zf
  float m_float64; // xmm0_4
  float v8; // xmm0_4
  IScriptVM *v9; // rdi
  uint64 m_uint64; // [rsp+8h] [rbp-78h]
  ScriptVariant_t retval; // [rsp+10h] [rbp-70h] BYREF
  ScriptVariant_t top; // [rsp+20h] [rbp-60h] BYREF
  ScriptVariant_t mid; // [rsp+30h] [rbp-50h] BYREF
  ScriptVariant_t bot; // [rsp+40h] [rbp-40h] BYREF

  retval.m_type = 0;
  m_hTeamLevelDesiresScriptScope = this->m_hTeamLevelDesiresScriptScope;
  retval.m_flags = 0;
  retval.m_uint64 = 0;
  v3 = CDOTA_TeamCommander::RunScriptFunction(this, "UpdateFarmLaneDesires", m_hTeamLevelDesiresScriptScope, 0, &retval);
  if ( v3 )
  {
    m_pBotScriptVM = this->m_pBotScriptVM;
    top.m_type = 0;
    top.m_flags = 0;
    top.m_uint64 = 0;
    mid.m_type = 0;
    mid.m_flags = 0;
    bot.m_type = 0;
    mid.m_uint64 = 0;
    bot.m_flags = 0;
    bot.m_uint64 = 0;
    m_uint64 = retval.m_uint64;
    (*(*m_pBotScriptVM + 320LL))(m_pBotScriptVM, retval.m_uint64, 0);
    (*(*this->m_pBotScriptVM + 320LL))(this->m_pBotScriptVM, m_uint64, 1, &mid);
    (*(*this->m_pBotScriptVM + 320LL))(this->m_pBotScriptVM, m_uint64, 2, &bot);
    m_float = top.m_float;
    if ( top.m_type == 34 )
      m_float = top.m_float64;
    v6 = mid.m_type == 34;
    this->m_fFarmLaneDesire[1] = m_float;
    m_float64 = mid.m_float;
    if ( v6 )
      m_float64 = mid.m_float64;
    v6 = bot.m_type == 34;
    this->m_fFarmLaneDesire[2] = m_float64;
    v8 = bot.m_float;
    if ( v6 )
      v8 = bot.m_float64;
    v9 = this->m_pBotScriptVM;
    this->m_fFarmLaneDesire[3] = v8;
    (*(*v9 + 344LL))(v9, &retval);
    CVariantBase<CVariantDefaultAllocator>::Free(&bot);
    CVariantBase<CVariantDefaultAllocator>::Free(&mid);
    CVariantBase<CVariantDefaultAllocator>::Free(&top);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&retval);
  return v3;
}


// CDOTA_TeamCommander::DoBotScriptUpdateRoamDesire  (line 1558, @0x0000000002856fd0, libserver.so)  // inlines: CVariantBase, Float, Get, GetBaseNPC, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Set, ToDOTABaseNPC, operator CBaseEntity*, operator float, operator=, ~CVariantBase
// calls: CDOTA_TeamCommander::RunScriptFunction, CEntityHandle::operator CEntityInstance*, CVariantBase<CVariantDefaultAllocator>::Free, ToBotScript, _Unwind_Resume
// callers: CDOTA_TeamCommander::UpdateRoamDesire
// strings: "UpdateRoamDesire"
bool __fastcall CDOTA_TeamCommander::DoBotScriptUpdateRoamDesire(CDOTA_TeamCommander *const this)
{
  HSCRIPT m_hTeamLevelDesiresScriptScope; // rdx
  bool v3; // r12
  IScriptVM *m_pBotScriptVM; // rdi
  CDOTA_Bot_Script *v5; // rax
  float m_float; // xmm0_4
  CEntityInstance *v7; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  uint64 m_uint64; // [rsp+8h] [rbp-68h]
  ScriptVariant_t retval; // [rsp+10h] [rbp-60h] BYREF
  ScriptVariant_t desire; // [rsp+20h] [rbp-50h] BYREF
  ScriptVariant_t target; // [rsp+30h] [rbp-40h] BYREF

  retval.m_type = 0;
  m_hTeamLevelDesiresScriptScope = this->m_hTeamLevelDesiresScriptScope;
  retval.m_flags = 0;
  retval.m_uint64 = 0;
  v3 = CDOTA_TeamCommander::RunScriptFunction(this, "UpdateRoamDesire", m_hTeamLevelDesiresScriptScope, 0, &retval);
  if ( !v3 )
    goto LABEL_9;
  desire.m_uint64 = 0;
  m_pBotScriptVM = this->m_pBotScriptVM;
  target.m_flags = 0;
  target.m_uint64 = 0;
  desire.m_type = 0;
  desire.m_flags = 0;
  target.m_type = 0;
  m_uint64 = retval.m_uint64;
  (*(*m_pBotScriptVM + 320LL))(m_pBotScriptVM, retval.m_uint64, 0, &desire);
  (*(*this->m_pBotScriptVM + 320LL))(this->m_pBotScriptVM, m_uint64, 1, &target);
  v5 = 0;
  if ( target.m_type != 0 )
  {
    v5 = ToBotScript(target.m_hScript, this->m_pBotScriptVM);
    m_float = desire.m_float;
    if ( desire.m_type != 34 )
      goto LABEL_4;
  }
  else
  {
    m_float = desire.m_float;
    if ( desire.m_type != 34 )
      goto LABEL_4;
  }
  m_float = desire.m_float64;
LABEL_4:
  this->m_fRoamDesire = m_float;
  if ( v5 != 0
    && (v7 = CEntityHandle::operator CEntityInstance *(&v5->m_hBaseNPC)) != 0
    && BYTE3(v7[7]._vptr_IHandleEntity) != 0
    && (m_pEntity = v7->m_pEntity) != 0 )
  {
    v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v11 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hRoamTarget.m_Index) = v11 | this->m_hRoamTarget.m_Index & 0x8000;
    this->m_hRoamTarget.m_Index = (v10 << 15) | this->m_hRoamTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hRoamTarget.m_Index = -1;
  }
  (*(*this->m_pBotScriptVM + 344LL))(this->m_pBotScriptVM, &retval);
  CVariantBase<CVariantDefaultAllocator>::Free(&target);
  CVariantBase<CVariantDefaultAllocator>::Free(&desire);
LABEL_9:
  CVariantBase<CVariantDefaultAllocator>::Free(&retval);
  return v3;
}


// CDOTA_TeamCommander::DoBotScriptUpdateRoshanDesire  (line 1585, @0x0000000002842c50, libserver.so)  // inlines: CVariantBase, Float, Free, operator float, ~CVariantBase
// calls: CDOTA_TeamCommander::RunScriptFunction, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_TeamCommander::UpdateRoshanDesire
// strings: "UpdateRoshanDesire"
bool __fastcall CDOTA_TeamCommander::DoBotScriptUpdateRoshanDesire(CDOTA_TeamCommander *const this)
{
  HSCRIPT m_hTeamLevelDesiresScriptScope; // rdx
  bool result; // al
  float m_float; // xmm0_4
  bool v5; // [rsp+Ch] [rbp-24h]
  ScriptVariant_t retval; // [rsp+10h] [rbp-20h] BYREF

  retval.m_type = 0;
  m_hTeamLevelDesiresScriptScope = this->m_hTeamLevelDesiresScriptScope;
  retval.m_flags = 0;
  retval.m_uint64 = 0;
  result = CDOTA_TeamCommander::RunScriptFunction(
             this,
             "UpdateRoshanDesire",
             m_hTeamLevelDesiresScriptScope,
             0,
             &retval);
  if ( result )
  {
    m_float = retval.m_float;
    if ( retval.m_type == 34 )
      m_float = retval.m_float64;
    this->m_fRoshanDesire = m_float;
  }
  if ( (retval.m_flags & 1) != 0 )
  {
    v5 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, retval.m_uint64);
    return v5;
  }
  return result;
}


// CDOTA_TeamCommander::Shutdown  (line 1600, @0x0000000002868010, libserver.so)  // inlines: SetSize
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount
// callers: CDOTA_Commander::Shutdown
void __fastcall CDOTA_TeamCommander::Shutdown(CDOTA_TeamCommander *const this)
{
  __int64 v1; // rbx
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *v2; // r13
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *v3; // r12

  v1 = 0;
  v2 = this->m_PotentialLocationGrid[0];
  v3 = this->m_PotentialLocationGrid[1];
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&this->m_AvoidanceGrid, 0);
  do
  {
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::SetCount(&v2[v1], 0);
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::SetCount(&v3[v1++], 0);
  }
  while ( v1 != 24 );
}


// CDOTA_TeamCommander::GameInit  (line 1613, @0x0000000002862e40, libserver.so)  // inlines: Invalidate, NetworkStateChanged, RemoveAll, Set, operator=<float>
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTAGamerules::GetHeroSelectionTime, RandomFloat, CDOTA_TeamCommander::InitScripting
// callers: CDOTA_Commander::GameInit
void __fastcall CDOTA_TeamCommander::GameInit(CDOTA_TeamCommander *const this, const EventGameInit_t *const msg)
{
  __int64 v3; // rbx
  float HeroSelectionTime; // xmm0_4

  this->m_RoamTargetLane = DOTA_LANE::DOTA_LANE_NONE;
  if ( this->m_LaneFrontUpdate.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_LaneFrontUpdate._vptr_CountdownTimer + 2))(&this->m_LaneFrontUpdate, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_LaneFrontUpdate.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_AvoidanceGridTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_AvoidanceGridTimer._vptr_CountdownTimer + 2))(
      &this->m_AvoidanceGridTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_AvoidanceGridTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_EnemyVisibilityGridTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_EnemyVisibilityGridTimer._vptr_CountdownTimer + 2))(
      &this->m_EnemyVisibilityGridTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_EnemyVisibilityGridTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_LaneStatusTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_LaneStatusTimer._vptr_CountdownTimer + 2))(&this->m_LaneStatusTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_LaneStatusTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_ChatThrottleTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ChatThrottleTimer._vptr_CountdownTimer + 2))(&this->m_ChatThrottleTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ChatThrottleTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_pRuneDibsBot.m_Memory[0] = 0;
  v3 = 0;
  this->m_fRuneDibsDesire.m_Memory[0] = 0.0;
  this->m_iRuneStatus.m_Memory[0] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING;
  this->m_iRuneTypes.m_Memory[0] = -1;
  this->m_fLastSeenRuneTime.m_Memory[0] = 0.0;
  this->m_pRuneDibsBot.m_Memory[1] = 0;
  this->m_fRuneDibsDesire.m_Memory[1] = 0.0;
  this->m_iRuneStatus.m_Memory[1] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING;
  this->m_iRuneTypes.m_Memory[1] = -1;
  this->m_fLastSeenRuneTime.m_Memory[1] = 0.0;
  this->m_nLastUnitsCollectTick = -1;
  this->m_RequestList.m_Size = 0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hCouriers);
  do
  {
    HeroSelectionTime = CDOTAGamerules::GetHeroSelectionTime(g_pGameRules);
    this->m_fHeroSelectionTimes[v3++] = RandomFloat(30.0, HeroSelectionTime);
  }
  while ( v3 != 24 );
  this->m_bLateGame = 0;
  this->m_bCreatedLobbyBots = 0;
  this->m_fGoodLuckFlavorTextTime = 0.0;
  this->m_fTeamfightFlavorTextTime = 0.0;
  this->m_fCongratulateHeroFlavorTextTime = 0.0;
  this->m_fLastAliveHeroHistorySnapshotTime = 0.0;
  this->m_iAliveHeroHistoryIndex = 0;
  this->m_iAliveHeroHistory[0] = 0;
  this->m_iAliveHeroHistory[1] = 0;
  this->m_iAliveHeroHistory[2] = 0;
  this->m_iAliveHeroHistory[3] = 0;
  this->m_iAliveHeroHistory[4] = 0;
  CDOTA_TeamCommander::InitScripting(this, 0);
}


// CDOTA_TeamCommander::GameShutdown  (line 1664, @0x0000000002833ba0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemoveAll, ShutdownScripting, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::SetBot
// callers: CDOTA_Commander::GameShutdown
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_TeamCommander::GameShutdown(
        CDOTA_TeamCommander *const this,
        const EventGameShutdown_t *const msg)
{
  CDOTA_Bot **m_pMemory; // r12
  CDOTA_Bot **v4; // r13
  unsigned __int16 *v5; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  m_pMemory = this->m_BotList.m_Memory.m_pMemory;
  v4 = &m_pMemory[this->m_BotList.m_Size];
  while ( v4 != m_pMemory )
  {
    v5 = *m_pMemory;
    m_Index = (*m_pMemory)->m_hUnit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5[78] >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v5[78] & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            CDOTA_BaseNPC::SetBot(m_pInstance, 0);
        }
      }
    }
    ++m_pMemory;
    (*(*v5 + 16LL))(v5);
  }
  this->m_BotList.m_Size = 0;
  (*(*g_pScriptManager + 96LL))(g_pScriptManager, this->m_pBotScriptVM);
  this->m_pBotScriptVM = 0;
  this->m_hHeroSelectionScriptScope = 0;
  this->m_hTeamLevelDesiresScriptScope = 0;
}


// CDOTA_TeamCommander::ActiveSpawnGroupChanged  (line 1687, @0x0000000002868070, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, FillWithValue, Get, GetEHandle, GetEntryIndex, GetGameMode, GetGridCountX, GetGridCountY, GetInstance, GetLaneNode, GetSerialNumber, IsAddOnGame, Length2D, Set, SetSize, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator+=, operator-, operator/=, operator=, operator==<CBaseEntity>
// calls: DOTACommander, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::FillWithValue, CUtlString::Get, V_stricmp_fast, CEntityHandle::operator CEntityInstance*, GetLaneBuildingName, CGameEntitySystem::FindEntityByName, GetLaneNodeName, CBaseEntity::GetAbsOrigin, FindSpawnEntityForTeam (14 total)
// callers: CDOTA_Commander::ActiveSpawnGroupChanged
// strings: "Map is missing lane node '%s', this will cause bot issues.\n", "Map is missing building '%s', this will cause bot issues.\n"
void __fastcall CDOTA_TeamCommander::ActiveSpawnGroupChanged(
        CDOTA_TeamCommander *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  int v3; // ebx
  CDOTA_Commander *v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *v7; // rbx
  float *m_fNextPotentialLocationTick; // r12
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> > *v9; // r14
  int v10; // kr00_4
  CDOTA_Commander *v11; // rax
  int v12; // kr04_4
  CDOTA_Commander *v13; // rax
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> > *v14; // rdi
  bool v15; // r13
  CDOTA_TeamCommander *v16; // r12
  const char *v17; // rax
  int v18; // eax
  CEntityHandle *v19; // r14
  int i; // ebx
  CEntityIdentity *m_pEntity; // rdx
  int v22; // eax
  __int16 v23; // cx
  const char *LaneBuildingName; // r15
  CBaseEntity *EntityByName; // rax
  CEntityHandle *v26; // r14
  CEntityIdentity *v27; // rdx
  int v28; // eax
  __int16 v29; // cx
  const char *LaneNodeName; // r15
  CBaseEntity *v31; // rax
  CEntityHandle *v32; // r13
  const CBaseEntity *v33; // rbx
  const CBaseEntity *v34; // rdx
  unsigned int v35; // r12d
  CEntityInstance *v36; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v38; // rax
  CDOTA_TeamCommander *v39; // rcx
  int v40; // ebx
  const CBaseEntity *v41; // rax
  const Vector *v42; // rax
  vec_t v43; // xmm0_4
  CDOTA_TeamCommander *v44; // [rsp+8h] [rbp-68h]
  CEntityHandle *v45; // [rsp+10h] [rbp-60h]
  CDOTA_TeamCommander *thisa; // [rsp+18h] [rbp-58h]
  CDOTA_TeamCommander *thisb; // [rsp+18h] [rbp-58h]
  CDOTA_TeamCommander *thisc; // [rsp+18h] [rbp-58h]
  const EventActiveSpawnGroupChanged_t *msgb; // [rsp+20h] [rbp-50h]
  int fTotalLaneLength; // [rsp+28h] [rbp-48h]
  DOTA_LANE fTotalLaneLengtha; // [rsp+28h] [rbp-48h]
  CEntityInstance *fTotalLaneLengthb; // [rsp+28h] [rbp-48h]
  float fTotalLaneLengthc; // [rsp+28h] [rbp-48h]
  unsigned __int8 src[4]; // [rsp+30h] [rbp-40h] BYREF

  v3 = DOTACommander()->m_iGridCount[0];
  v4 = DOTACommander();
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&this->m_AvoidanceGrid, v4->m_iGridCount[1] * v3);
  if ( this->m_AvoidanceGrid.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      ++v6;
      this->m_AvoidanceGrid.m_Memory.m_pMemory[v5++] = 0;
    }
    while ( v6 < this->m_AvoidanceGrid.m_Size );
  }
  thisa = this;
  v7 = this->m_PotentialLocationGrid[0];
  fTotalLaneLength = 24;
  m_fNextPotentialLocationTick = this->m_fNextPotentialLocationTick;
  do
  {
    *m_fNextPotentialLocationTick = 0.0;
    v9 = v7 + 24;
    ++m_fNextPotentialLocationTick;
    m_fNextPotentialLocationTick[23] = 0.0;
    v10 = DOTACommander()->m_iGridCount[0];
    v11 = DOTACommander();
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::SetCount(
      v7,
      (v10 / 2 + 1) * (v11->m_iGridCount[1] / 2) + 1);
    v12 = DOTACommander()->m_iGridCount[0];
    v13 = DOTACommander();
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::SetCount(
      v7 + 24,
      (v12 / 2 + 1) * (v13->m_iGridCount[1] / 2) + 1);
    v14 = v7;
    src[0] = 0;
    ++v7;
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(v14, src);
    src[0] = 0;
    CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(v9, src);
    --fTotalLaneLength;
  }
  while ( fTotalLaneLength != 0 );
  v15 = 0;
  v16 = thisa;
  v17 = CUtlString::Get(&msg->m_SpawnGroupName);
  if ( V_stricmp_fast(v17, "dota") == 0 )
  {
    v18 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v18 != 15 )
      v15 = v18 != 19;
  }
  fTotalLaneLengtha = DOTA_LANE::DOTA_LANE_TOP;
  thisb = thisa->m_LaneNodes[1];
  msgb = v16->m_Buildings[1];
  do
  {
    v19 = msgb;
    for ( i = 0; i != 8; ++i )
    {
      LaneBuildingName = GetLaneBuildingName(v16->m_eTeam, fTotalLaneLengtha, i);
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, LaneBuildingName, 0, 0, 0, 0);
      if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
      {
        v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v23 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v19->m_Index) = v23 | v19->m_Index & 0x8000;
        v19->m_Index = (v22 << 15) | v19->m_Index & 0x7FFF;
      }
      else
      {
        v19->m_Index = -1;
      }
      if ( v15
        && CEntityHandle::operator CEntityInstance *(v19) == 0
        && *LaneBuildingName != 0
        && LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      {
        LoggingSystem_Log(
          LOG_SERVER,
          2,
          "Map is missing building '%s', this will cause bot issues.\n",
          LaneBuildingName);
      }
      ++v19;
    }
    v26 = thisb;
    LOBYTE(i) = 0;
    do
    {
      LaneNodeName = GetLaneNodeName(v16->m_eTeam, fTotalLaneLengtha, i);
      v31 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, LaneNodeName, 0, 0, 0, 0);
      if ( v31 != 0 && (v27 = v31->m_pEntity) != 0 )
      {
        v28 = (v27->m_EHandle.m_Index >> 15) - (v27->m_flags & 1);
        v29 = 0x7FFF;
        if ( v27->m_EHandle.m_Index != -1 )
          v29 = v27->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v26->m_Index) = v29 | v26->m_Index & 0x8000;
        v26->m_Index = (v28 << 15) | v26->m_Index & 0x7FFF;
      }
      else
      {
        v26->m_Index = -1;
      }
      if ( v15
        && CEntityHandle::operator CEntityInstance *(v26) == 0
        && *LaneNodeName != 0
        && LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      {
        LoggingSystem_Log(LOG_SERVER, 2, "Map is missing lane node '%s', this will cause bot issues.\n", LaneNodeName);
      }
      ++i;
      ++v26;
    }
    while ( i != 9 );
    ++fTotalLaneLengtha;
    thisb = (thisb + 36);
    msgb = (msgb + 32);
  }
  while ( fTotalLaneLengtha != DOTA_LANE::DOTA_LANE_MAX );
  v44 = v16;
  v45 = &v16->m_LaneNodes[1][1];
  thisc = 0;
  do
  {
    v32 = v45;
    *src = v45[-1];
    fTotalLaneLengthb = CEntityHandle::operator CEntityInstance *(src);
    *src = v45->m_Index;
    v33 = CEntityHandle::operator CEntityInstance *(src);
    if ( v33 != 0 && (v34 = fTotalLaneLengthb, fTotalLaneLengthb != 0) )
    {
      fTotalLaneLengthc = 1.0;
      v35 = 0;
      while ( 1 )
      {
        ++v35;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v34);
        v38 = CBaseEntity::GetAbsOrigin(v33);
        fTotalLaneLengthc = fsqrt(
                              ((v38->x - AbsOrigin->x) * (v38->x - AbsOrigin->x))
                            + ((v38->y - AbsOrigin->y) * (v38->y - AbsOrigin->y)))
                          + fTotalLaneLengthc;
        if ( v35 > 8 )
          *src = -1;
        else
          *src = v32->m_Index;
        ++v32;
        v36 = CEntityHandle::operator CEntityInstance *(src);
        if ( v36 == 0 )
          break;
        v34 = v33;
        v33 = v36;
      }
    }
    else
    {
      fTotalLaneLengthc = 1.0;
    }
    v39 = thisc;
    thisc = (thisc + 4);
    v45 += 9;
    *(&v39->m_LaneLengths[1] + v44) = fTotalLaneLengthc;
  }
  while ( thisc != &stru_C );
  v40 = 5;
  v44->m_vBaseLocation = vec3_origin;
  do
  {
    FindSpawnEntityForTeam(src, v44->m_eTeam);
    v41 = CEntityHandle::operator CEntityInstance *(src);
    if ( v41 != 0 )
    {
      v42 = CBaseEntity::GetAbsOrigin(v41);
      v44->m_vBaseLocation.x = v44->m_vBaseLocation.x + v42->x;
      v44->m_vBaseLocation.y = v44->m_vBaseLocation.y + v42->y;
      v44->m_vBaseLocation.z = v44->m_vBaseLocation.z + v42->z;
    }
    --v40;
  }
  while ( v40 != 0 );
  v44->m_vBaseLocation.x = v44->m_vBaseLocation.x * 0.2;
  v43 = 0.2 * v44->m_vBaseLocation.z;
  v44->m_vBaseLocation.y = v44->m_vBaseLocation.y * 0.2;
  v44->m_vBaseLocation.z = v43;
}


// CDOTA_TeamCommander::GetOpposingTeamCommander  (line 1769, @0x0000000002833ca0, libserver.so)  // inlines: GetOpposingTeamNumber, GetTeamCommander
// calls: DOTACommander
// callers: CDOTA_Bot::FindClosestBuilding, CDOTA_Bot::GetOpposingTeamCommander, CDOTA_Bot::ConsiderBuyback, CDOTA_BotMode::GetOpposingTeamCommander, CDOTA_Bot::DrawDebug, CDOTA_Bot::UpdateEstimatedDamage, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::IsDangerouslyLow, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_Bot_AbilityUsage_BlinkDagger::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_BlackKingBar::GetCurrentUsageDesire (35 total)
CDOTA_TeamCommander *__fastcall CDOTA_TeamCommander::GetOpposingTeamCommander(CDOTA_TeamCommander *const this)
{
  if ( this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST )
    return &DOTACommander()->m_BadGuys;
  else
    return &DOTACommander()->m_GoodGuys;
}


// CDOTA_TeamCommander::RegisterUnit  (line 1776, @0x0000000002863180, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_Bot*>, Element, GetBool, GetInt, GrowMemory, SetBotDifficulty, operator[]
// calls: CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::Find, CreateBotForUnit, CDOTA_Bot::Init, CDOTA_TeamCommander::GetRequestedBotDifficulty, CDOTA_BaseNPC::SetBot, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CUtlMemory<CDOTA_Bot*, int>::Grow
// callers: CDOTA_Commander::RegisterUnit
void __fastcall CDOTA_TeamCommander::RegisterUnit(CDOTA_TeamCommander *const this, CDOTA_BaseNPC *pUnit)
{
  CDOTA_Bot *BotForUnit; // rax
  CDOTA_Bot *v5; // r12
  int v6; // eax
  __int64 m_Size; // r14
  int v8; // eax
  CDOTA_Bot **v9; // rax
  CDOTA_UnitInventory *Inventory; // r13
  int i; // ebx
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Bot *src; // [rsp+8h] [rbp-28h] BYREF

  src = pUnit->m_pBot;
  if ( CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::Find(&this->m_BotList, &src) == -1 )
  {
    BotForUnit = CreateBotForUnit(pUnit, dota_tutorial_game.m_pParent->m_Value.m_nValue != 0);
    v5 = BotForUnit;
    if ( BotForUnit != 0 )
    {
      CDOTA_Bot::Init(BotForUnit);
      v6 = (*(pUnit->_vptr_IHandleEntity + 414))(pUnit);
      v5->m_iDifficulty = CDOTA_TeamCommander::GetRequestedBotDifficulty(this, v6);
      CDOTA_BaseNPC::SetBot(pUnit, v5);
      m_Size = this->m_BotList.m_Size;
      v8 = this->m_BotList.m_Size;
      if ( m_Size == this->m_BotList.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTA_Bot *,int>::Grow(&this->m_BotList.m_Memory, 1);
        v8 = this->m_BotList.m_Size;
      }
      this->m_BotList.m_Size = v8 + 1;
      v9 = &this->m_BotList.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        *v9 = v5;
      Inventory = CDOTA_BaseNPC::GetInventory(pUnit);
      if ( Inventory != 0 )
      {
        for ( i = 0; i != 17; ++i )
        {
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
          if ( ItemInSlot != 0 )
            (*(v5->_vptr_CDOTA_Bot + 26))(v5, ItemInSlot, 1);
        }
      }
    }
  }
}


// CDOTA_TeamCommander::UnregisterUnit  (line 1808, @0x0000000002841ce0, libserver.so)  // inlines: Element, FindAndRemove, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CDOTA_BaseNPC::SetBot, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::Find, memmove, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot
// callers: CDOTA_Commander::UnregisterUnitFromTeam
void __fastcall CDOTA_TeamCommander::UnregisterUnit(CDOTA_TeamCommander *const this, CDOTA_BaseNPC *pUnit)
{
  CDOTA_Bot *v4; // r12
  int v5; // eax
  int m_Size; // edx
  CDOTA_Bot **v7; // rsi
  CDOTA_BaseNPC *v8; // rdi
  int v9; // ebx
  CDOTA_UnitInventory *Inventory; // r13
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Bot *pBot; // [rsp+8h] [rbp-28h] BYREF

  pBot = pUnit->m_pBot;
  v4 = pBot;
  CDOTA_BaseNPC::SetBot(pUnit, 0);
  if ( pBot != 0 )
  {
    v5 = CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::Find(&this->m_BotList, &pBot);
    if ( v5 != -1 )
    {
      m_Size = this->m_BotList.m_Size;
      if ( m_Size - v5 - 1 > 0 )
      {
        v7 = &this->m_BotList.m_Memory.m_pMemory[v5 + 1];
        memmove(v7 - 1, v7, 8LL * (this->m_BotList.m_Size - v5 - 1));
        m_Size = this->m_BotList.m_Size;
      }
      this->m_BotList.m_Size = m_Size - 1;
    }
    v8 = pUnit;
    v9 = 0;
    Inventory = CDOTA_BaseNPC::GetInventory(v8);
    if ( Inventory != 0 )
    {
      do
      {
        ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v9);
        if ( ItemInSlot != 0 )
          (*(v4->_vptr_CDOTA_Bot + 26))(v4, ItemInSlot, 0);
        ++v9;
      }
      while ( v9 != 17 );
    }
    (*(v4->_vptr_CDOTA_Bot + 2))(v4);
  }
}


// CDOTA_TeamCommander::GetBotByPlayerID  (line 1837, @0x0000000002833cd0, libserver.so)  // inlines: end
// calls: CDOTA_Bot::GetPlayerID
// callers: CDOTA_TeamCommander::DoBotScriptLaneAssignments
CDOTA_Bot *__fastcall CDOTA_TeamCommander::GetBotByPlayerID(CDOTA_TeamCommander *const this, int nPlayerID)
{
  CDOTA_Bot **m_pMemory; // rbx
  CDOTA_Bot **v4; // r13
  CDOTA_Bot *v5; // r12

  m_pMemory = this->m_BotList.m_Memory.m_pMemory;
  v4 = &m_pMemory[this->m_BotList.m_Size];
  if ( m_pMemory == v4 )
    return 0;
  while ( 1 )
  {
    v5 = *m_pMemory;
    if ( CDOTA_Bot::GetPlayerID(*m_pMemory) == nPlayerID )
      break;
    if ( v4 == ++m_pMemory )
      return 0;
  }
  return v5;
}


// CDOTA_TeamCommander::Think  (line 1850, @0x0000000002866bd0, libserver.so)  // inlines: AccumulateExecutionTime, CVProfCounter, CVProfScope, ClearExecutionTime, DOTAGameRules, GetBotByIndex, GetNextBotCount, Increment, IsEnabled, IsGamePaused, State_Get, State_IsBefore, State_IsBeforeGameInProgress, State_Order, ~CVProfScope
// calls: CDOTA_Bot::ClearExecutionTime, Plat_FloatTime, CDOTA_TeamCommander::UpdateLaneAssignments, CDOTA_TeamCommander::UpdateHeroSelections, CDOTA_TeamCommander::UpdateDisabledBots, CDOTA_TeamCommander::UpdateGlyphUsage, CDOTA_TeamCommander::UpdateCourierBoostUsage, CDOTA_TeamCommander::CalculateLaneFronts, CDOTA_TeamCommander::UpdatePotentialLocationGrid, CDOTA_TeamCommander::UpdateAvoidanceGrid, CDOTA_TeamCommander::UpdateRequests, CDOTA_TeamCommander::UpdateIncomingStuns (34 total)
// callers: CDOTA_Commander::FrameUpdatePostEntityThink
// strings: "NumberOfEntities", "CDOTA_TeamCommander::Think"
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING, `guard variable for'CDOTA_TeamCommander::Think(void)::_counter, CDOTA_TeamCommander::Think(void)::_counter, __dso_handle, CVProfCounter::~CVProfCounter()
void __fastcall CDOTA_TeamCommander::Think(CDOTA_TeamCommander *const this)
{
  __int64 v1; // r13
  int i; // r12d
  CDOTA_Bot *v4; // rdi
  int v5; // ecx
  CDOTAGamerules *v6; // rdi
  int m_enabled; // r9d
  bool v8; // r15
  __int64 m_Value; // rdx
  int v10; // eax
  double v11; // xmm0_8
  float v12; // xmm1_4
  CDOTAGamerules *v13; // rdi
  float *v14; // rax
  __int64 v15; // r13
  int v16; // r12d
  CDOTABaseGameMode *GameModeEntity; // rax
  bool v18; // zf
  double v19; // [rsp+8h] [rbp-38h]

  v1 = 0;
  for ( i = 0; i < this->m_BotList.m_Size; ++i )
  {
    v4 = this->m_BotList.m_Memory.m_pMemory[v1++];
    CDOTA_Bot::ClearExecutionTime(v4);
  }
  v5 = (this->m_iCurExecutionTime + 1) % 30;
  this->m_iCurExecutionTime = v5;
  this->m_fExecutionTime[v5] = 0.0;
  v19 = Plat_FloatTime();
  v6 = g_pGameRules;
  if ( g_pGameRules == 0 || g_pGameRules[19].m_szQuestName[29] == 0 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v8 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::Think", 0, "Bots", 0, 4);
      v6 = g_pGameRules;
    }
    m_Value = v6->m_nGameState.m_Value;
    v10 = 0;
    if ( m_Value <= 0xA )
      v10 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[m_Value];
    if ( dword_491AD14 > v10 || CDOTAGamerules::GetDOTATime(v6, 0, 0, 0.0) < 15.0 )
      CDOTA_TeamCommander::UpdateLaneAssignments(this);
    CDOTA_TeamCommander::UpdateHeroSelections(this);
    CDOTA_TeamCommander::UpdateDisabledBots(this);
    CDOTA_TeamCommander::UpdateGlyphUsage(this);
    CDOTA_TeamCommander::UpdateCourierBoostUsage(this);
    CDOTA_TeamCommander::CalculateLaneFronts(this);
    CDOTA_TeamCommander::UpdatePotentialLocationGrid(this);
    CDOTA_TeamCommander::UpdateAvoidanceGrid(this);
    CDOTA_TeamCommander::UpdateRequests(this);
    CDOTA_TeamCommander::UpdateIncomingStuns(this);
    CDOTA_TeamCommander::UpdateRuneVision(this);
    CDOTA_TeamCommander::UpdatePushLaneDesires(this);
    CDOTA_TeamCommander::UpdateDefendLaneDesires(this);
    CDOTA_TeamCommander::UpdateFarmLaneDesires(this);
    CDOTA_TeamCommander::UpdateRoamDesire(this);
    CDOTA_TeamCommander::UpdateRoshanDesire(this);
    CDOTA_TeamCommander::UpdateItemsDesire(this);
    CDOTA_TeamCommander::CLaningSpeech::Think(&this->m_LaningSpeech, this);
    CDOTA_TeamCommander::FlavorTextThink(this);
    v11 = Plat_FloatTime();
    v12 = v19;
    v13 = g_pGameRules;
    v14 = (this + 4 * this->m_iCurExecutionTime);
    *&v11 = v11 - v12;
    v14[928] = *&v11 + v14[928];
    if ( CDOTAGamerules::IsBotThinkingEnabled(v13) && this->m_BotList.m_Size > 0 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        (*(this->m_BotList.m_Memory.m_pMemory[v15]->_vptr_CDOTA_Bot + 3))(this->m_BotList.m_Memory.m_pMemory[v15]);
        ++v16;
        ++v15;
      }
      while ( v16 < this->m_BotList.m_Size );
    }
    if ( g_pGameRules != 0
      && (GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules)) != 0
      && GameModeEntity->m_bOverrideBotLateGame )
    {
      this->m_bLateGame = GameModeEntity->m_bBotsInLateGame;
    }
    else if ( CDOTA_TeamCommander::GetOpposingTeamOffensivePower(this, 1) > 4000.0
           || CDOTA_TeamCommander::GetTeamOffensivePower(this, 1) > 4000.0 )
    {
      v18 = `guard variable for'CDOTA_TeamCommander::Think(void)::_counter == 0;
      this->m_bLateGame = 1;
      if ( !v18 )
      {
LABEL_20:
        *CDOTA_TeamCommander::Think(void)::_counter.m_pCounter += g_NextBotManager.m_botList.m_ElementCount;
        if ( v8 )
          CVProfile::ExitScope(&g_VProfCurrentProfile);
        return;
      }
LABEL_24:
      if ( __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::Think(void)::_counter) != 0 )
      {
        CDOTA_TeamCommander::Think(void)::_counter.m_pCounter = CVProfile::FindOrCreateCounter(
                                                                  &g_VProfCurrentProfile,
                                                                  "NumberOfEntities",
                                                                  CounterGroup_t::COUNTER_GROUP_TELEMETRY);
        __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::Think(void)::_counter);
        __cxa_atexit(CVProfCounter::~CVProfCounter, &CDOTA_TeamCommander::Think(void)::_counter, &_dso_handle);
      }
      goto LABEL_20;
    }
    if ( `guard variable for'CDOTA_TeamCommander::Think(void)::_counter != 0 )
      goto LABEL_20;
    goto LABEL_24;
  }
}


// CDOTA_TeamCommander::AccumulateExecutionTime  (line 1923, @0x0000000002833d40, libserver.so)
void __fastcall CDOTA_TeamCommander::AccumulateExecutionTime(CDOTA_TeamCommander *const this, float a2, float fTime)
{
  float *v3; // rax

  v3 = (this + 4 * this->m_iCurExecutionTime);
  v3[928] = a2 + v3[928];
}


// CDOTA_TeamCommander::ClearExecutionTime  (line 1928, @0x0000000002833d70, libserver.so)
void __fastcall CDOTA_TeamCommander::ClearExecutionTime(CDOTA_TeamCommander *const this)
{
  int v1; // ecx

  v1 = (this->m_iCurExecutionTime + 1) % 30;
  this->m_iCurExecutionTime = v1;
  this->m_fExecutionTime[v1] = 0.0;
}


// CDOTA_TeamCommander::GetExecutionTime  (line 1934, @0x0000000002833dc0, libserver.so)
float __fastcall CDOTA_TeamCommander::GetExecutionTime(CDOTA_TeamCommander *const this)
{
  float *m_fExecutionTime; // rax
  int *p_m_iCurExecutionTime; // rdi
  float result; // xmm0_4

  m_fExecutionTime = this->m_fExecutionTime;
  p_m_iCurExecutionTime = &this->m_iCurExecutionTime;
  result = 0.0;
  if ( m_fExecutionTime != p_m_iCurExecutionTime )
  {
    do
      result = result + *m_fExecutionTime++;
    while ( p_m_iCurExecutionTime != m_fExecutionTime );
    return result / 30.0;
  }
  return result;
}


// CDOTA_TeamCommander::GetTeamOffensivePower  (line 1948, @0x0000000002833e00, libserver.so)  // inlines: GetBotByIndex
// calls: CDOTA_Bot::GetRawOffensivePower, CDOTA_Bot::GetOffensivePower
// callers: CDOTA_TeamCommander::CLaningSpeech::Think, CDOTA_TeamCommander::BuildDebugString, CDOTA_TeamCommander::Think
float __fastcall CDOTA_TeamCommander::GetTeamOffensivePower(CDOTA_TeamCommander *const this, bool bRaw)
{
  float v2; // xmm1_4
  __int64 v5; // r12
  int v6; // ebx
  float RawOffensivePower; // xmm0_4
  CDOTA_Bot *v8; // rdi
  float v10; // [rsp-24h] [rbp-2Ch]

  v2 = 0.0;
  if ( this->m_BotList.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    v2 = 0.0;
    do
    {
      v8 = this->m_BotList.m_Memory.m_pMemory[v5];
      if ( v8 != 0 )
      {
        v10 = v2;
        if ( bRaw )
          RawOffensivePower = CDOTA_Bot::GetRawOffensivePower(v8);
        else
          RawOffensivePower = CDOTA_Bot::GetOffensivePower(v8);
        v2 = v10 + RawOffensivePower;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < this->m_BotList.m_Size );
  }
  return v2;
}


// CDOTA_TeamCommander::GetOpposingTeamOffensivePower  (line 1967, @0x0000000002833e90, libserver.so)  // inlines: GetBotByIndex, GetOtherTeamCommander
// calls: DOTACommander, CDOTA_Bot::GetRawOffensivePower, CDOTA_Bot::GetOffensivePower
// callers: CDOTA_Bot::WantsToSaveForBuyback, CDOTA_TeamCommander::CLaningSpeech::Think, CDOTA_TeamCommander::UpdatePushLaneDesires, CDOTA_TeamCommander::Think
float __fastcall CDOTA_TeamCommander::GetOpposingTeamOffensivePower(CDOTA_TeamCommander *const this, bool bRaw)
{
  DOTATeam_t m_eTeam; // ebx
  CDOTA_Commander *v4; // rax
  float v5; // xmm1_4
  CDOTA_TeamCommander *p_m_BadGuys; // r13
  CDOTA_TeamCommander *p_m_GoodGuys; // rax
  __int64 v8; // r12
  int v9; // ebx
  float RawOffensivePower; // xmm0_4
  CDOTA_Bot *v11; // rdi
  float fPower; // [rsp+Ch] [rbp-24h]

  m_eTeam = this->m_eTeam;
  v4 = DOTACommander();
  v5 = 0.0;
  p_m_BadGuys = &v4->m_BadGuys;
  p_m_GoodGuys = &v4->m_GoodGuys;
  if ( m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST )
    p_m_BadGuys = p_m_GoodGuys;
  if ( p_m_BadGuys->m_BotList.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    v5 = 0.0;
    do
    {
      v11 = p_m_BadGuys->m_BotList.m_Memory.m_pMemory[v8];
      if ( v11 != 0 )
      {
        fPower = v5;
        if ( bRaw )
          RawOffensivePower = CDOTA_Bot::GetRawOffensivePower(v11);
        else
          RawOffensivePower = CDOTA_Bot::GetOffensivePower(v11);
        v5 = fPower + RawOffensivePower;
      }
      ++v9;
      ++v8;
    }
    while ( v9 < p_m_BadGuys->m_BotList.m_Size );
  }
  return v5;
}


// CDOTA_TeamCommander::UpdateUnitLists  (line 1987, @0x0000000002849920, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetOpposingTeamNumber, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsEnabled, LookupEntity, Set, ToDOTABaseNPC, end, operator CEntityInstance*, operator[], ~CVProfScope
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, __cxa_guard_acquire, FindUnitsInRadius, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible, DOTACommander, CEntityHandle::operator CEntityInstance*, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CVProfile::ExitScope, CVProfile::EnterScope, __cxa_guard_release, __cxa_atexit (14 total)
// callers: CDOTA_TeamCommander::GetUnitList
// strings: "CDOTA_TeamCommander::UpdateUnitLists"
// globals: `guard variable for'CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits, CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits, CEntityHandle::gm_pEntityList, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
void __fastcall CDOTA_TeamCommander::UpdateUnitLists(CDOTA_TeamCommander *const this)
{
  int m_enabled; // r12d
  CHandle<CBaseEntity> *m_pMemory; // r12
  uint32 m_Index; // eax
  unsigned int v5; // edx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CBaseEntity *m_pInstance; // r13
  const Vector *AbsOrigin; // rax
  bool IsLocationVisible; // al
  unsigned __int8 m_Value; // cl
  bool v12; // r14
  DOTATeam_t m_eTeam; // eax
  __int64 v14; // r13
  EHANDLE *v15; // rax
  __int64 v16; // r13
  int v17; // eax
  EHANDLE *v18; // rax
  __int64 v19; // r12
  CDOTA_Commander *v20; // r14
  EHANDLE *v21; // rax
  const CBaseEntity *v22; // rax
  const CBaseEntity *v23; // r13
  const Vector *v24; // rax
  CEntityIdentity *m_pEntity; // rax
  int v26; // edx
  __int16 v27; // cx
  __int64 v28; // r13
  int v29; // eax
  __int64 v30; // r15
  EHANDLE *v31; // rax
  __int64 v32; // r15
  int v33; // eax
  EHANDLE *v34; // rax
  uint32 v35; // eax
  __int64 v36; // r14
  EHANDLE *v37; // rax
  __int64 v38; // r13
  __int64 m_Size; // r14
  int v40; // eax
  EHANDLE *v41; // rax
  __int64 v42; // r14
  int v43; // eax
  EHANDLE *v44; // rax
  uint32 v45; // eax
  __int64 v46; // r15
  int v47; // eax
  EHANDLE *v48; // rax
  bool VProf_1989; // [rsp+2Fh] [rbp-71h]
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // [rsp+48h] [rbp-58h]
  CHandle<CBaseEntity> *__for_end; // [rsp+58h] [rbp-48h]
  EHANDLE hUnit; // [rsp+60h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_1989 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::UpdateUnitLists", 0, "Bots", 0, 4);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllUnits);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllAlliedUnits);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllAlliedHeroes);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllAlliedCreeps);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllAlliedWards);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllEnemyUnits);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllEnemyHeroes);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllEnemyCreeps);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllEnemyWards);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllNeutralCreeps);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_ThinkerUnits);
  if ( `guard variable for'CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits) != 0 )
  {
    CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits.m_Size = 0;
    CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits.m_Memory.m_pMemory = 0;
    CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits.m_Memory.m_nAllocationCount = 0;
    CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits.m_Memory.m_nGrowSize = 0;
    __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits);
    __cxa_atexit(
      CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
      &CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits,
      &_dso_handle);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits);
  FindUnitsInRadius(
    this->m_eTeam,
    &vec3_origin,
    0,
    -1.0,
    &CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits,
    3,
    55,
    80,
    0,
    0);
  m_pMemory = CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits.m_Memory.m_pMemory;
  __for_end = &CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits.m_Memory.m_pMemory[CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits.m_Size];
  if ( CDOTA_TeamCommander::UpdateUnitLists(void)::vecAllUnits.m_Memory.m_pMemory != __for_end )
  {
    p_m_Memory = &this->m_AllUnits.m_Memory;
    while ( 1 )
    {
      m_Index = m_pMemory->m_Index;
      v5 = m_pMemory->m_Index + 2;
      hUnit.m_Index = m_pMemory->m_Index;
      if ( v5 <= 1 )
        goto LABEL_8;
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hUnit.m_Index) >> 9) & 0x3F];
      if ( v6 == 0 )
        goto LABEL_8;
      v7 = &v6[hUnit.m_Index & 0x1FF];
      if ( v7 == 0 )
        goto LABEL_8;
      if ( m_Index != v7->m_EHandle.m_Index )
        goto LABEL_8;
      m_pInstance = v7->m_pInstance;
      if ( v7->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
        goto LABEL_8;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v7->m_pInstance);
      IsLocationVisible = CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, this->m_eTeam, AbsOrigin, 0.0);
      m_Value = m_pInstance->m_iTeamNum.m_Value;
      v12 = IsLocationVisible;
      m_eTeam = this->m_eTeam;
      if ( m_eTeam == m_Value )
      {
        m_Size = this->m_AllUnits.m_Size;
        v40 = this->m_AllUnits.m_Size;
        if ( m_Size == this->m_AllUnits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(p_m_Memory, 1);
          v40 = this->m_AllUnits.m_Size;
        }
        this->m_AllUnits.m_Size = v40 + 1;
        v41 = &this->m_AllUnits.m_Memory.m_pMemory[m_Size];
        if ( v41 != 0 )
          v41->m_Index = hUnit.m_Index;
        v42 = this->m_AllAlliedUnits.m_Size;
        v43 = this->m_AllAlliedUnits.m_Size;
        if ( v42 == this->m_AllAlliedUnits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_AllAlliedUnits.m_Memory, 1);
          v43 = this->m_AllAlliedUnits.m_Size;
        }
        this->m_AllAlliedUnits.m_Size = v43 + 1;
        v44 = &this->m_AllAlliedUnits.m_Memory.m_pMemory[v42];
        if ( v44 != 0 )
          v44->m_Index = hUnit.m_Index;
        v45 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index;
        if ( (v45 & 1) != 0 )
        {
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
            &this->m_AllAlliedHeroes,
            &hUnit);
          v45 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index;
        }
        if ( (v45 & 0x80u) != 0 )
        {
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
            &this->m_AllAlliedCreeps,
            &hUnit);
          v45 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index;
        }
        if ( (v45 & 0x20000) != 0 )
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
            &this->m_AllAlliedWards,
            &hUnit);
        goto LABEL_8;
      }
      if ( (m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2 == m_Value )
      {
        if ( v12 || (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
        {
          v30 = this->m_AllUnits.m_Size;
          if ( v30 == this->m_AllUnits.m_Memory.m_nAllocationCount )
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(p_m_Memory, 1);
          ++this->m_AllUnits.m_Size;
          v31 = &this->m_AllUnits.m_Memory.m_pMemory[v30];
          if ( v31 != 0 )
            v31->m_Index = hUnit.m_Index;
          v32 = this->m_AllEnemyUnits.m_Size;
          v33 = this->m_AllEnemyUnits.m_Size;
          if ( v32 == this->m_AllEnemyUnits.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_AllEnemyUnits.m_Memory, 1);
            v33 = this->m_AllEnemyUnits.m_Size;
          }
          this->m_AllEnemyUnits.m_Size = v33 + 1;
          v34 = &this->m_AllEnemyUnits.m_Memory.m_pMemory[v32];
          if ( v34 != 0 )
            v34->m_Index = hUnit.m_Index;
          if ( (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
          {
            v46 = this->m_AllEnemyHeroes.m_Size;
            v47 = this->m_AllEnemyHeroes.m_Size;
            if ( v46 == this->m_AllEnemyHeroes.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_AllEnemyHeroes.m_Memory, 1);
              v47 = this->m_AllEnemyHeroes.m_Size;
            }
            this->m_AllEnemyHeroes.m_Size = v47 + 1;
            v48 = &this->m_AllEnemyHeroes.m_Memory.m_pMemory[v46];
            if ( v48 != 0 )
              v48->m_Index = hUnit.m_Index;
          }
          if ( v12 )
          {
            v35 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index;
            if ( (v35 & 0x80u) != 0 )
            {
              v36 = this->m_AllEnemyCreeps.m_Size;
              if ( v36 == this->m_AllEnemyCreeps.m_Memory.m_nAllocationCount )
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_AllEnemyCreeps.m_Memory, 1);
              ++this->m_AllEnemyCreeps.m_Size;
              v37 = &this->m_AllEnemyCreeps.m_Memory.m_pMemory[v36];
              if ( v37 != 0 )
                v37->m_Index = hUnit.m_Index;
              v35 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index;
            }
            if ( (v35 & 0x20000) != 0 )
            {
              v38 = this->m_AllEnemyWards.m_Size;
              if ( v38 == this->m_AllEnemyWards.m_Memory.m_nAllocationCount )
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_AllEnemyWards.m_Memory, 1);
              ++this->m_AllEnemyWards.m_Size;
              v18 = &this->m_AllEnemyWards.m_Memory.m_pMemory[v38];
              if ( v18 != 0 )
                goto LABEL_26;
            }
          }
        }
LABEL_8:
        if ( __for_end == ++m_pMemory )
          break;
      }
      else
      {
        if ( !v12 || m_Value != 4 )
          goto LABEL_8;
        v14 = this->m_AllUnits.m_Size;
        if ( v14 == this->m_AllUnits.m_Memory.m_nAllocationCount )
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(p_m_Memory, 1);
        ++this->m_AllUnits.m_Size;
        v15 = &this->m_AllUnits.m_Memory.m_pMemory[v14];
        if ( v15 != 0 )
          v15->m_Index = hUnit.m_Index;
        v16 = this->m_AllNeutralCreeps.m_Size;
        v17 = this->m_AllNeutralCreeps.m_Size;
        if ( v16 == this->m_AllNeutralCreeps.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_AllNeutralCreeps.m_Memory, 1);
          v17 = this->m_AllNeutralCreeps.m_Size;
        }
        this->m_AllNeutralCreeps.m_Size = v17 + 1;
        v18 = &this->m_AllNeutralCreeps.m_Memory.m_pMemory[v16];
        if ( v18 == 0 )
          goto LABEL_8;
LABEL_26:
        ++m_pMemory;
        v18->m_Index = hUnit.m_Index;
        if ( __for_end == m_pMemory )
          break;
      }
    }
  }
  v19 = 0;
  v20 = DOTACommander();
  if ( v20->m_Thinkers.m_Size > 0 )
  {
    do
    {
      v22 = CEntityHandle::operator CEntityInstance *(&v20->m_Thinkers.m_Memory.m_pMemory[v19]);
      v23 = v22;
      if ( v22 != 0 )
      {
        if ( this->m_eTeam == v22->m_iTeamNum.m_Value
          || (v24 = CBaseEntity::GetAbsOrigin(v22),
              CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, this->m_eTeam, v24, 0.0)) )
        {
          hUnit.m_Index = -1;
          m_pEntity = v23->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v27 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(hUnit.m_Index) = v27 | hUnit.m_Index & 0x8000;
            hUnit.m_Index = (v26 << 15) | hUnit.m_Index & 0x7FFF;
          }
          v28 = this->m_ThinkerUnits.m_Size;
          v29 = this->m_ThinkerUnits.m_Size;
          if ( v28 == this->m_ThinkerUnits.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_ThinkerUnits.m_Memory, 1);
            v29 = this->m_ThinkerUnits.m_Size;
          }
          this->m_ThinkerUnits.m_Size = v29 + 1;
          v21 = &this->m_ThinkerUnits.m_Memory.m_pMemory[v28];
          if ( v21 != 0 )
            v21->m_Index = hUnit.m_Index;
        }
      }
      ++v19;
    }
    while ( v20->m_Thinkers.m_Size > v19 );
  }
  if ( VProf_1989 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_TeamCommander::GetUnitList  (line 2065, @0x000000000284a120, libserver.so)
// calls: CDOTA_TeamCommander::UpdateUnitLists
// callers: CDOTA_BotMode_Attack::FindPotentialAttackTarget, CDOTA_Bot::UpdateMinionList, CDOTA_Bot::UpdateNearbyUnits, CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidLocation, Script_GetUnitList, CDOTA_TeamCommander::UpdateAvoidanceGrid
// globals: jpt_284A15A
CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *__fastcall CDOTA_TeamCommander::GetUnitList(
        CDOTA_TeamCommander *const this,
        CDOTA_TeamCommander::TeamCommanderUnitList_t eList)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *result; // rax
  CDOTA_TeamCommander::TeamCommanderUnitList_t eLista; // [rsp+Ch] [rbp-14h]

  if ( this->m_nLastUnitsCollectTick < gpGlobals->tickcount )
  {
    eLista = eList;
    CDOTA_TeamCommander::UpdateUnitLists(this);
    eList = eLista;
    this->m_nLastUnitsCollectTick = gpGlobals->tickcount;
  }
  switch ( eList )
  {
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ALL:
      result = &this->m_AllUnits;
      break;
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ALLIES:
      result = &this->m_AllAlliedUnits;
      break;
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ALLIED_HEROES:
      result = &this->m_AllAlliedHeroes;
      break;
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ALLIED_CREEPS:
      result = &this->m_AllAlliedCreeps;
      break;
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ALLIED_WARDS:
      result = &this->m_AllAlliedWards;
      break;
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ENEMIES:
      result = &this->m_AllEnemyUnits;
      break;
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ENEMY_HEROES:
      result = &this->m_AllEnemyHeroes;
      break;
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ENEMY_CREEPS:
      result = &this->m_AllEnemyCreeps;
      break;
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ENEMY_WARDS:
      result = &this->m_AllEnemyWards;
      break;
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_NEUTRAL_CREEPS:
      result = &this->m_AllNeutralCreeps;
      break;
    case CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_THINKERS:
      result = &this->m_ThinkerUnits;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// CDOTA_TeamCommander::RemoveFromUnitsLists  (line 2095, @0x0000000002844da0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetOpposingTeamNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndFastRemove
// callers: CDOTA_Commander::UnregisterUnitFromTeam
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_TeamCommander::RemoveFromUnitsLists(
        CDOTA_TeamCommander *const this,
        const CHandle<CBaseEntity> *hUnit)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r13
  unsigned __int8 m_CScriptComponent_high; // cl
  DOTATeam_t m_eTeam; // eax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_AllAlliedWards; // rdi
  int m_Id; // eax
  int v11; // eax

  if ( hUnit->m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hUnit->m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[hUnit->m_Index & 0x1FF];
      if ( v4 != 0 && hUnit->m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
            &this->m_AllUnits,
            hUnit);
          m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
          m_eTeam = this->m_eTeam;
          if ( m_eTeam == m_CScriptComponent_high )
          {
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
              &this->m_AllAlliedUnits,
              hUnit);
            m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
            if ( (m_Id & 1) != 0 )
            {
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
                &this->m_AllAlliedHeroes,
                hUnit);
              m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
            }
            if ( (m_Id & 0x80u) != 0 )
            {
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
                &this->m_AllAlliedCreeps,
                hUnit);
              m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
            }
            p_m_AllAlliedWards = &this->m_AllAlliedWards;
            if ( (m_Id & 0x20000) != 0 )
              goto LABEL_12;
          }
          else if ( m_CScriptComponent_high == (m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2 )
          {
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
              &this->m_AllEnemyUnits,
              hUnit);
            v11 = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
            if ( (v11 & 1) != 0 )
            {
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
                &this->m_AllEnemyHeroes,
                hUnit);
              v11 = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
            }
            if ( (v11 & 0x80u) != 0 )
            {
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
                &this->m_AllEnemyCreeps,
                hUnit);
              v11 = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
            }
            p_m_AllAlliedWards = &this->m_AllEnemyWards;
            if ( (v11 & 0x20000) != 0 )
              goto LABEL_12;
          }
          else if ( m_CScriptComponent_high == 4 )
          {
            p_m_AllAlliedWards = &this->m_AllNeutralCreeps;
LABEL_12:
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
              p_m_AllAlliedWards,
              hUnit);
          }
        }
      }
    }
  }
}


// CDOTA_TeamCommander::IsLocationVisibleToEnemy  (line 2127, @0x0000000002833f40, libserver.so)  // inlines: GetOpposingTeamNumber
// calls: CDOTAFogOfWarSystem::IsLocationVisible
bool __fastcall CDOTA_TeamCommander::IsLocationVisibleToEnemy(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc,
        float a3,
        float fRadius)
{
  return CDOTAFogOfWarSystem::IsLocationVisible(
           &g_DOTAFogOfWarSystem,
           (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2,
           vLoc,
           a3);
}


// CDOTA_TeamCommander::IsGridVisibleToEnemy  (line 2134, @0x0000000002833f70, libserver.so)  // inlines: GetLocationFromGrid, GetOpposingTeamNumber, IsLocationVisibleToEnemy
// calls: DOTACommander, CDOTA_Commander::GetLocationFromGrid, CDOTAFogOfWarSystem::IsLocationVisible
// callers: CDOTA_Bot_Pathing::IsPathClear, CDOTA_Bot_Pathing::GenerateClearPath, CDOTA_TeamCommander::DrawDebugGrid, CDOTA_TeamCommander::DrawDebugGridMinimap, CDOTA_Bot_Pathing::UpdateSearch, CDOTA_BotMode_TeamRoam::FindHiddenLocationNearby
bool __fastcall CDOTA_TeamCommander::IsGridVisibleToEnemy(
        CDOTA_TeamCommander *const this,
        int iGridX,
        int iGridY,
        float fRadius)
{
  CDOTA_Commander *v7; // rax
  bool v8; // zf
  Vector vLocation; // [rsp+10h] [rbp-40h] BYREF
  __int64 v12; // [rsp+20h] [rbp-30h]
  Vector LocationFromGrid; // 0:kr00_12.12

  v7 = DOTACommander();
  LocationFromGrid = CDOTA_Commander::GetLocationFromGrid(v7, iGridX, iGridY);
  v8 = this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST;
  v12 = *&LocationFromGrid.x;
  vLocation = LocationFromGrid;
  return CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, v8 + 2, &vLocation, fRadius);
}


// CDOTA_TeamCommander::IsLocationPassable  (line 2141, @0x0000000002834350, libserver.so)
// calls: DOTACommander, CDOTA_Commander::IsLocationPassable
// callers: CDOTA_BotMode_EvasiveManeuvers::CalculateDesiredLocation, CDOTA_Bot_AbilityUsage_ForceStaff::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureLaningLocation
bool __fastcall CDOTA_TeamCommander::IsLocationPassable(CDOTA_TeamCommander *const this, const Vector *const vLoc)
{
  CDOTA_Commander *v3; // rax

  v3 = DOTACommander();
  return CDOTA_Commander::IsLocationPassable(v3, vLoc);
}


// CDOTA_TeamCommander::IsGridPassable  (line 2148, @0x0000000002834380, libserver.so)
// calls: DOTACommander, CDOTA_Commander::IsGridPassable
// callers: CDOTA_Bot::FindAvoidLocation
bool __fastcall CDOTA_TeamCommander::IsGridPassable(CDOTA_TeamCommander *const this, int gridX, int gridY)
{
  CDOTA_Commander *v5; // rax

  v5 = DOTACommander();
  return CDOTA_Commander::IsGridPassable(v5, gridX, gridY);
}


// CDOTA_TeamCommander::GetLocationHeightLevel  (line 2155, @0x00000000028343b0, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetLocationHeightLevel
int __fastcall CDOTA_TeamCommander::GetLocationHeightLevel(CDOTA_TeamCommander *const this, const Vector *const vLoc)
{
  CDOTA_Commander *v3; // rax

  v3 = DOTACommander();
  return CDOTA_Commander::GetLocationHeightLevel(v3, vLoc);
}


// CDOTA_TeamCommander::GetGridHeightLevel  (line 2162, @0x00000000028343e0, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetGridHeightLevel
// callers: CDOTA_Bot_AbilityUsage_Tango::GetCurrentUsageDesire
int __fastcall CDOTA_TeamCommander::GetGridHeightLevel(CDOTA_TeamCommander *const this, int gridX, int gridY)
{
  CDOTA_Commander *v5; // rax

  v5 = DOTACommander();
  return CDOTA_Commander::GetGridHeightLevel(v5, gridX, gridY);
}


// CDOTA_TeamCommander::GetLocationHeight  (line 2169, @0x0000000002834410, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetLocationHeight
// callers: CDOTA_BotAction_MoveTo::Think
float __fastcall CDOTA_TeamCommander::GetLocationHeight(CDOTA_TeamCommander *const this, const Vector *const vLoc)
{
  CDOTA_Commander *v3; // rax

  v3 = DOTACommander();
  return CDOTA_Commander::GetLocationHeight(v3, vLoc);
}


// CDOTA_TeamCommander::GetGridHeight  (line 2176, @0x0000000002834440, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetGridHeight
float __fastcall CDOTA_TeamCommander::GetGridHeight(CDOTA_TeamCommander *const this, int gridX, int gridY)
{
  CDOTA_Commander *v5; // rax

  v5 = DOTACommander();
  return CDOTA_Commander::GetGridHeight(v5, gridX, gridY);
}


// SortOfRandomFloat  (line 2220, @0x0000000002834470, libserver.so)
// globals: SortOfRandomFloat(void)::s_iIndex, s_SortOfRandomNumbers
float __cdecl SortOfRandomFloat()
{
  float result; // xmm0_4

  result = s_SortOfRandomNumbers[(SortOfRandomFloat(void)::s_iIndex + 1) % 127];
  SortOfRandomFloat(void)::s_iIndex = (SortOfRandomFloat(void)::s_iIndex + 1) % 127;
  return result;
}


// CDOTA_TeamCommander::UpdatePotentialLocationGrid  (line 2232, @0x0000000002844f60, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CVProfScope, CopyConstruct<Vector>, DOTAGameRules, DotProduct, Element, FastRSqrt, FastRSqrtFast, Get, GetBotByIndex, GetGameTime, GetGridCountX, GetGridCountY, GetGridFromLocation, GetGridSizeX, GetGridSizeY, GetInstance, GetLocationFromGrid, GetLocationInfoFast, GetOpposingTeamCommander, GetOpposingTeamNumber, GetTeamCommander, GetTeamMapping, GetTimeSinceLastSeen, GetUnit, GrowMemory, InitializeSortOfRandomNumbers, IsEnabled, IsGridPassable, SortOfRandomFloat, State_Get, State_IsBefore, State_IsBeforeGameInProgress, State_Order, ToDOTABaseNPC, Vector, VectorNormalizeFast, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, operator CBaseEntity*, operator-, operator[], ~CUtlVectorFixedGrowable, ~CVProfScope
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible, RandomFloat, CDOTAFogOfWarSystem::GetFoW, DOTACommander, FoW_TeamNumberToFoWIndex, CFoW::GetGridUnitsClamped, CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::FillWithValue, CDOTA_Commander::GetGridFromLocation, CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 32ul, int> >::~CUtlVectorBase, CVProfile::ExitScope (18 total)
// callers: CDOTA_TeamCommander::Think
// strings: "CDOTA_TeamCommander::UpdatePotentialLocationGrid"
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING, InitializeSortOfRandomNumbers(void)::s_bInitialized, s_SortOfRandomNumbers, mainOffsets, bAngle, iDecay, SortOfRandomFloat(void)::s_iIndex
void __fastcall CDOTA_TeamCommander::UpdatePotentialLocationGrid(CDOTA_TeamCommander *const this)
{
  __int64 v2; // rdx
  int v3; // eax
  int m_enabled; // r14d
  int m_Size; // r13d
  __int64 v6; // r12
  int v7; // ebx
  CDOTA_Bot *v8; // r13
  const CEntityHandle *p_m_hUnit; // r13
  CEntityInstance *v10; // rax
  const CBaseEntity *v11; // rdi
  const Vector *AbsOrigin; // rax
  CEntityInstance *v13; // rax
  const CBaseEntity *v14; // rdi
  __int64 v15; // r13
  const Vector *v16; // r14
  int v17; // eax
  Vector *v18; // rax
  float *v19; // rbx
  int v20; // ebx
  CDOTA_Commander *v21; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  CDOTA_Commander *v24; // rax
  CDOTA_Commander *v25; // rax
  float *m_fNextPotentialLocationTick; // r14
  __int64 v27; // rbx
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *v28; // r13
  float v29; // xmm1_4
  int v30; // r12d
  CDOTA_Commander *v31; // rax
  CDOTA_TeamCommander *v32; // rdx
  CDOTA_TeamCommander *v33; // rax
  const CEntityHandle *v34; // rax
  CEntityInstance *v35; // rax
  const CBaseEntity *v36; // r12
  CDOTA_Commander *v37; // rax
  CDOTA_Commander *v38; // rax
  CDOTA_Commander *v39; // rax
  float v40; // xmm0_4
  int v41; // r12d
  CDOTA_Commander *v42; // rax
  float v43; // xmm0_4
  int v44; // eax
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *v45; // rdx
  __int64 v46; // r12
  float v47; // xmm0_4
  __int64 v48; // r15
  __int64 v49; // rbx
  Vector *v50; // r12
  int v51; // r14d
  int v52; // r13d
  CDOTA_Commander *v53; // rax
  __int64 v54; // r13
  int v55; // r14d
  CDOTA_Commander *v56; // rax
  float v57; // xmm4_4
  float v58; // xmm3_4
  float v59; // xmm2_4
  float v60; // xmm5_4
  float v61; // xmm1_4
  char v62; // al
  unsigned __int8 v63; // dl
  unsigned __int8 *v64; // rcx
  unsigned __int8 v65; // al
  CDOTA_Commander *v66; // rax
  float v67; // xmm0_4
  CDOTA_Commander *v68; // rax
  unsigned __int8 *m_pMemory; // [rsp+10h] [rbp-310h]
  bool VProf_2237; // [rsp+23h] [rbp-2FDh]
  int v71; // [rsp+24h] [rbp-2FCh]
  unsigned int iFoWTeam; // [rsp+2Ch] [rbp-2F4h]
  int v73; // [rsp+30h] [rbp-2F0h]
  __int64 v74; // [rsp+30h] [rbp-2F0h]
  unsigned __int8 *v75; // [rsp+38h] [rbp-2E8h]
  int xGridFoW; // [rsp+40h] [rbp-2E0h]
  unsigned int iFoWTeamEnemy; // [rsp+50h] [rbp-2D0h]
  __int64 iFoWTeamEnemya; // [rsp+50h] [rbp-2D0h]
  int gridY; // [rsp+58h] [rbp-2C8h]
  int v80; // [rsp+5Ch] [rbp-2C4h]
  float v81; // [rsp+5Ch] [rbp-2C4h]
  int v82; // [rsp+60h] [rbp-2C0h]
  int v83; // [rsp+68h] [rbp-2B8h]
  float v84; // [rsp+68h] [rbp-2B8h]
  int v85; // [rsp+6Ch] [rbp-2B4h]
  float v86; // [rsp+6Ch] [rbp-2B4h]
  CFoW *pFoW; // [rsp+70h] [rbp-2B0h]
  int v88; // [rsp+78h] [rbp-2A8h]
  float v89; // [rsp+78h] [rbp-2A8h]
  int iGridCountY; // [rsp+7Ch] [rbp-2A4h]
  CDOTA_Bot *pBot; // [rsp+80h] [rbp-2A0h]
  int iReadBuffer; // [rsp+88h] [rbp-298h]
  float x; // [rsp+8Ch] [rbp-294h]
  int xa; // [rsp+8Ch] [rbp-294h]
  const Vector *fAverageGridSizeb; // [rsp+90h] [rbp-290h]
  float fAverageGridSize; // [rsp+90h] [rbp-290h]
  unsigned __int8 *fAverageGridSizea; // [rsp+90h] [rbp-290h]
  float iNeighborYa; // [rsp+98h] [rbp-288h]
  int iNeighborY; // [rsp+98h] [rbp-288h]
  int iNeighborX; // [rsp+9Ch] [rbp-284h]
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *v101; // [rsp+A0h] [rbp-280h]
  float iUnit; // [rsp+A8h] [rbp-278h]
  int nGridXMin; // [rsp+B8h] [rbp-268h] BYREF
  int nGridYMin; // [rsp+BCh] [rbp-264h] BYREF
  int nGridXMax; // [rsp+C0h] [rbp-260h] BYREF
  int nGridYMax; // [rsp+C4h] [rbp-25Ch] BYREF
  int iUnitX; // [rsp+C8h] [rbp-258h] BYREF
  int iUnitY; // [rsp+CCh] [rbp-254h] BYREF
  Vector src; // [rsp+D0h] [rbp-250h] BYREF
  Vector vDirections[9]; // [rsp+E0h] [rbp-240h] BYREF
  CUtlVectorFixedGrowable<Vector,32ul> vVisibleAllyLocations; // [rsp+150h] [rbp-1D0h] BYREF
  unsigned __int64 v112; // [rsp+2E8h] [rbp-38h]

  v112 = __readfsqword(0x28u);
  v2 = *&g_pGameRules[6].m_szQuestName[28];
  v3 = 0;
  if ( v2 <= 0xA )
    v3 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v2];
  if ( dword_491AD14 <= v3 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    VProf_2237 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::UpdatePotentialLocationGrid", 0, "Bots", 0, 4);
    m_Size = this->m_BotList.m_Size;
    vDirections[0].x = -0.70709997;
    vDirections[0].y = 0.70709997;
    vDirections[0].z = 0.0;
    vDirections[1].x = 0.0;
    vDirections[1].y = 1.0;
    vDirections[1].z = 0.0;
    vDirections[2].x = 0.70709997;
    vDirections[2].y = 0.70709997;
    vDirections[2].z = 0.0;
    vDirections[3].x = -1.0;
    vDirections[3].y = 0.0;
    vDirections[3].z = 0.0;
    vDirections[4].x = 0.0;
    vDirections[4].y = 0.0;
    vDirections[4].z = 0.0;
    vDirections[5].x = 1.0;
    vDirections[5].y = 0.0;
    vDirections[5].z = 0.0;
    vDirections[6].x = -0.70709997;
    vDirections[6].y = -0.70709997;
    vDirections[6].z = 0.0;
    vDirections[7].x = 0.0;
    vDirections[7].y = -1.0;
    vDirections[7].z = 0.0;
    vDirections[8].x = 0.70709997;
    vDirections[8].y = -0.70709997;
    vDirections[8].z = 0.0;
    vVisibleAllyLocations.m_Size = 0;
    vVisibleAllyLocations.m_Memory.m_nAllocationCount = 32;
    vVisibleAllyLocations.m_Memory.m_nGrowSize = 0x80000000;
    vVisibleAllyLocations.m_Memory.m_pMemory = &vVisibleAllyLocations.m_Memory.m_FixedMemory;
    if ( m_Size > 0 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = this->m_BotList.m_Memory.m_pMemory[v6];
        if ( v8 != 0 )
        {
          p_m_hUnit = &v8->m_hUnit;
          v10 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
          if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
            v11 = v10;
          else
            v11 = 0;
          AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
          if ( CDOTAFogOfWarSystem::IsLocationVisible(
                 &g_DOTAFogOfWarSystem,
                 (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2,
                 AbsOrigin,
                 0.0) )
          {
            v13 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
            if ( v13 == 0 || (v14 = v13, BYTE3(v13[7]._vptr_IHandleEntity) == 0) )
              v14 = 0;
            v15 = vVisibleAllyLocations.m_Size;
            v16 = CBaseEntity::GetAbsOrigin(v14);
            v17 = vVisibleAllyLocations.m_Size;
            if ( vVisibleAllyLocations.m_Size == vVisibleAllyLocations.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<Vector,int>::Grow(&vVisibleAllyLocations.m_Memory, 1);
              v17 = vVisibleAllyLocations.m_Size;
            }
            vVisibleAllyLocations.m_Size = v17 + 1;
            v18 = &vVisibleAllyLocations.m_Memory.m_pMemory[v15];
            if ( v18 != 0 )
            {
              *&v18->x = *&v16->x;
              v18->z = v16->z;
            }
          }
        }
        ++v7;
        ++v6;
      }
      while ( v7 < this->m_BotList.m_Size );
    }
    if ( InitializeSortOfRandomNumbers(void)::s_bInitialized == 0 )
    {
      InitializeSortOfRandomNumbers(void)::s_bInitialized = 1;
      v19 = s_SortOfRandomNumbers;
      do
        *v19++ = RandomFloat(0.0, 1.0);
      while ( v19 != &unk_4C310BC );
    }
    pFoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
    v20 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
    v21 = DOTACommander();
    p_m_GoodGuys = &v21->m_GoodGuys;
    p_m_BadGuys = &v21->m_BadGuys;
    if ( v20 != 2 )
      p_m_GoodGuys = p_m_BadGuys;
    iFoWTeamEnemy = FoW_TeamNumberToFoWIndex((p_m_GoodGuys->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2);
    iFoWTeam = FoW_TeamNumberToFoWIndex(this->m_eTeam);
    v24 = DOTACommander();
    CFoW::GetGridUnitsClamped(pFoW, v24->m_vWorldBounds, &nGridXMin, &nGridYMin);
    v25 = DOTACommander();
    CFoW::GetGridUnitsClamped(pFoW, &v25->m_vWorldBounds[1], &nGridXMax, &nGridYMax);
    v88 = nGridXMax;
    v85 = nGridXMin;
    v83 = DOTACommander()->m_iGridCount[0];
    v82 = nGridYMax;
    v80 = nGridYMin;
    m_fNextPotentialLocationTick = this->m_fNextPotentialLocationTick;
    v27 = 0;
    v28 = this->m_PotentialLocationGrid[1];
    v73 = DOTACommander()->m_iGridCount[1];
    gridY = nGridYMin;
    xGridFoW = nGridXMin;
    v101 = this->m_PotentialLocationGrid[0];
    do
    {
      v29 = 0.0;
      if ( g_pGameRules != 0 )
        v29 = *&g_pGameRules[18].m_szQuestName[20];
      if ( *m_fNextPotentialLocationTick <= v29 )
      {
        v30 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
        v31 = DOTACommander();
        v32 = &v31->m_GoodGuys;
        v33 = &v31->m_BadGuys;
        if ( v30 != 2 )
          v32 = v33;
        if ( v32->m_BotList.m_Size > v27 )
        {
          v34 = v32->m_BotList.m_Memory.m_pMemory[v27];
          pBot = v34;
          if ( v34 != 0 )
          {
            v35 = CEntityHandle::operator CEntityInstance *(v34 + 39);
            v36 = v35;
            if ( v35 != 0 && BYTE3(v35[7]._vptr_IHandleEntity) != 0 )
            {
              iReadBuffer = *(m_fNextPotentialLocationTick + 24);
              if ( (*(v35->_vptr_IHandleEntity + 408))(v35) != 0 )
              {
                fAverageGridSizeb = CBaseEntity::GetAbsOrigin(v36);
                v37 = DOTACommander();
                CDOTA_Commander::GetGridFromLocation(v37, fAverageGridSizeb, &iUnitX, &iUnitY);
                iUnitX /= 2;
                iUnitY /= 2;
                v38 = DOTACommander();
                *&fAverageGridSizeb = (v38->m_vWorldBounds[1].x - v38->m_vWorldBounds[0].x) / v38->m_iGridCount[0];
                v39 = DOTACommander();
                fAverageGridSize = *&fAverageGridSizeb
                                 + ((v39->m_vWorldBounds[1].y - v39->m_vWorldBounds[0].y) / v39->m_iGridCount[1]);
                if ( g_pGameRules != 0 )
                  x = *&g_pGameRules[18].m_szQuestName[20];
                else
                  x = 0.0;
                iNeighborYa = RandomFloat(0.89999998, 1.1);
                v40 = (*(v36->_vptr_IHandleEntity + 386))(v36);
                *(m_fNextPotentialLocationTick + 24) = iReadBuffer == 0;
                *m_fNextPotentialLocationTick = (iNeighborYa * (fAverageGridSize / v40)) + x;
                v41 = DOTACommander()->m_iGridCount[0];
                v42 = DOTACommander();
                v43 = 0.0;
                iGridCountY = v42->m_iGridCount[1] / 2;
                if ( g_pGameRules != 0 )
                  v43 = *&g_pGameRules[18].m_szQuestName[20];
                if ( (v43 - pBot->m_fLastSeen) >= 2.0 )
                {
                  LOBYTE(src.x) = 0;
                  v71 = v41 / 2;
                  v46 = v27;
                  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(
                    &this->m_PotentialLocationGrid[iReadBuffer == 0][v46],
                    &src);
                  m_pMemory = this->m_PotentialLocationGrid[iReadBuffer][v46].m_Memory.m_pMemory;
                  v75 = this->m_PotentialLocationGrid[iReadBuffer == 0][v46].m_Memory.m_pMemory;
                  if ( v71 > 0 )
                  {
                    xa = 0;
                    v47 = v73;
                    v74 = 0;
                    v84 = ((v88 - v85) + (v88 - v85)) / v83;
                    iFoWTeamEnemya = iFoWTeamEnemy;
                    v89 = ((v82 - v80) + (v82 - v80)) / v47;
                    v86 = gridY;
                    v81 = xGridFoW;
                    do
                    {
                      if ( iGridCountY > 0 )
                      {
                        v48 = 0;
                        fAverageGridSizea = &m_pMemory[v74];
                        do
                        {
                          if ( *fAverageGridSizea != 0 )
                          {
                            if ( (pFoW->m_VisibleBits[iFoWTeamEnemya].m_Memory.m_pMemory[((v48 * v89) + v86)
                                                                                       + pFoW->m_nGridYUnits
                                                                                       * ((xa * v84) + v81)]
                                & 0x4000) != 0 )
                            {
                              v75[v74 + v48] = 0;
                            }
                            else
                            {
                              v49 = 0;
                              v50 = vDirections;
                              do
                              {
                                iNeighborX = mainOffsets[v49].x + xa;
                                iNeighborY = mainOffsets[v49].y + v48;
                                if ( v49 == 4
                                  || (v51 = 2 * (mainOffsets[v49].y + v48),
                                      v52 = 2 * (mainOffsets[v49].x + xa),
                                      v53 = DOTACommander(),
                                      CDOTA_Commander::IsGridPassable(v53, v52, v51)) )
                                {
                                  if ( !bAngle[v49]
                                    || ((v66 = DOTACommander(),
                                         CDOTA_Commander::IsGridPassable(v66, 2 * iNeighborX, 2 * v48))
                                     || (v68 = DOTACommander(),
                                         CDOTA_Commander::IsGridPassable(v68, 2 * xa, 2 * iNeighborY)))
                                    && (!bAngle[v49]
                                     || (v67 = s_SortOfRandomNumbers[(SortOfRandomFloat(void)::s_iIndex + 1) % 127],
                                         SortOfRandomFloat(void)::s_iIndex = (SortOfRandomFloat(void)::s_iIndex + 1)
                                                                           % 127,
                                         v67 <= 0.41)) )
                                  {
                                    if ( (pFoW->m_VisibleBits[iFoWTeam].m_Memory.m_pMemory[((iNeighborY * v89) + v86)
                                                                                         + pFoW->m_nGridYUnits
                                                                                         * ((iNeighborX * v84) + v81)]
                                        & 0x4000) == 0 )
                                    {
                                      if ( vVisibleAllyLocations.m_Size <= 0 )
                                      {
LABEL_85:
                                        v62 = 0;
                                      }
                                      else
                                      {
                                        v54 = 0;
                                        v55 = 0;
                                        while ( 1 )
                                        {
                                          v56 = DOTACommander();
                                          src = CDOTA_Commander::GetLocationFromGrid(
                                                  v56,
                                                  2 * iNeighborX,
                                                  2 * iNeighborY);
                                          v57 = vVisibleAllyLocations.m_Memory.m_pMemory[v54].x - src.x;
                                          v58 = vVisibleAllyLocations.m_Memory.m_pMemory[v54].y - src.y;
                                          v59 = vVisibleAllyLocations.m_Memory.m_pMemory[v54].z - src.z;
                                          iUnit = (((v57 * v57) + 0.00000011920929) + (v58 * v58)) + (v59 * v59);
                                          v60 = 1.0 / fsqrt(iUnit);
                                          v61 = (0.5 * v60) * (3.0 - ((iUnit * v60) * v60));
                                          if ( (((v50->x * (v57 * v61)) + ((v58 * v61) * v50->y))
                                              + ((v61 * v59) * v50->z)) > 0.70709997 )
                                            break;
                                          ++v55;
                                          ++v54;
                                          if ( vVisibleAllyLocations.m_Size <= v55 )
                                            goto LABEL_85;
                                        }
                                        v62 = 5;
                                      }
                                      v63 = 48;
                                      v64 = &v75[iNeighborY + iGridCountY * iNeighborX];
                                      if ( *v64 >= 0x30u )
                                        v63 = *v64;
                                      v65 = *fAverageGridSizea + v62 - LOBYTE(iDecay[v49]);
                                      if ( v63 >= v65 )
                                        v65 = v63;
                                      *v64 = v65;
                                    }
                                  }
                                }
                                ++v49;
                                ++v50;
                              }
                              while ( v49 != 9 );
                            }
                          }
                          ++fAverageGridSizea;
                          ++v48;
                        }
                        while ( iGridCountY > v48 );
                      }
                      ++xa;
                      v74 += iGridCountY;
                    }
                    while ( xa != v71 );
                  }
                  CUtlVectorBase<Vector,CUtlMemoryFixedGrowable<Vector,32ul,int>>::~CUtlVectorBase(&vVisibleAllyLocations);
                  if ( VProf_2237 )
                    goto LABEL_47;
                  return;
                }
                LOBYTE(src.x) = 0;
                CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(v101, &src);
                LOBYTE(src.x) = 0;
                CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(v28, &src);
                v44 = iUnitY + iUnitX * iGridCountY;
                v45 = &this->m_PotentialLocationGrid[iReadBuffer == 0][v27];
                if ( v44 < v45->m_Size )
                  v45->m_Memory.m_pMemory[v44] = -1;
              }
              else
              {
                LOBYTE(src.x) = 0;
                CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(v101, &src);
                LOBYTE(src.x) = 0;
                CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int>>::FillWithValue(v28, &src);
              }
            }
          }
        }
      }
      ++v27;
      ++m_fNextPotentialLocationTick;
      ++v28;
      ++v101;
    }
    while ( v27 != 24 );
    CUtlVectorBase<Vector,CUtlMemoryFixedGrowable<Vector,32ul,int>>::~CUtlVectorBase(&vVisibleAllyLocations);
    if ( VProf_2237 )
LABEL_47:
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
}


// CDOTA_TeamCommander::GetPotentialLocationValues  (line 2439, @0x00000000028344c0, libserver.so)  // inlines: Clamp<int>, GetGridCountX, GetGridCountY, GetGridFromLocation, GetGridSizeX, GetGridSizeY, V_memset, memset, sq
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation
// callers: CDOTA_Bot::IsAboutToDie, CDOTA_TeamCommander::GetPotentialDamage, CDOTA_TeamCommander::GetNearbyEnemyOffensivePower, CDOTA_TeamCommander::GetUnitPotentialValue
void __fastcall CDOTA_TeamCommander::GetPotentialLocationValues(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc,
        float fRadius,
        int *values)
{
  __int64 v4; // rax
  CDOTA_Commander *v7; // rax
  CDOTA_Commander *v8; // rax
  CDOTA_Commander *v9; // rax
  int v10; // kr04_4
  CDOTA_Commander *v11; // rax
  int v12; // r9d
  float v13; // xmm2_4
  int v14; // kr00_4
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // edi
  int v19; // r8d
  int v20; // esi
  int v21; // esi
  int v22; // r11d
  int v23; // r13d
  int v24; // edi
  __int64 v25; // r15
  int v26; // ecx
  int v27; // r9d
  __int64 v28; // r10
  int v29; // r14d
  int v30; // r8d
  int v31; // edi
  __int64 v32; // rsi
  __int64 i; // rax
  int v34; // edx
  float v35; // [rsp+0h] [rbp-110h]
  float fRadiusSqr; // [rsp+4h] [rbp-10Ch]
  float fGridSizeX; // [rsp+8h] [rbp-108h]
  float fGridSizeYb; // [rsp+Ch] [rbp-104h]
  int fGridSizeY; // [rsp+Ch] [rbp-104h]
  int iCenterX; // [rsp+18h] [rbp-F8h] BYREF
  int iCenterY; // [rsp+1Ch] [rbp-F4h] BYREF
  uint8 *pPotentialLocations[24]; // [rsp+20h] [rbp-F0h]

  v4 = 0;
  memset(values, 0, 0x60u);
  do
  {
    pPotentialLocations[v4] = this->m_PotentialLocationGrid[this->m_iPotentialLocationBuffer[v4]][v4].m_Memory.m_pMemory;
    ++v4;
  }
  while ( v4 != 24 );
  v7 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v7, vLoc, &iCenterX, &iCenterY);
  v35 = fRadius;
  iCenterX /= 2;
  fRadiusSqr = fRadius * fRadius;
  iCenterY /= 2;
  v8 = DOTACommander();
  fGridSizeX = ((v8->m_vWorldBounds[1].x - v8->m_vWorldBounds[0].x) / v8->m_iGridCount[0])
             + ((v8->m_vWorldBounds[1].x - v8->m_vWorldBounds[0].x) / v8->m_iGridCount[0]);
  v9 = DOTACommander();
  fGridSizeYb = ((v9->m_vWorldBounds[1].y - v9->m_vWorldBounds[0].y) / v9->m_iGridCount[1])
              + ((v9->m_vWorldBounds[1].y - v9->m_vWorldBounds[0].y) / v9->m_iGridCount[1]);
  v10 = DOTACommander()->m_iGridCount[0];
  v11 = DOTACommander();
  v12 = 0;
  v13 = fGridSizeYb;
  v14 = v11->m_iGridCount[1];
  v15 = v10 / 2 - 1;
  v16 = v14 / 2;
  v17 = (v35 / fGridSizeX);
  v18 = (v35 / fGridSizeYb);
  if ( iCenterX - v17 >= 0 )
  {
    v12 = iCenterX - v17;
    if ( iCenterX - v17 > v15 )
      v12 = v10 / 2 - 1;
  }
  v19 = 0;
  v20 = iCenterX + v17;
  if ( v20 >= 0 )
  {
    if ( v20 <= v15 )
      v15 = v20;
    v19 = v15;
  }
  v21 = v16 - 1;
  v22 = 0;
  if ( iCenterY - v18 >= 0 )
  {
    v22 = iCenterY - v18;
    if ( iCenterY - v18 > v21 )
      v22 = v16 - 1;
  }
  v23 = 0;
  v24 = iCenterY + v18;
  if ( v24 >= 0 )
  {
    if ( v24 <= v21 )
      v21 = v24;
    v23 = v21;
  }
  if ( v12 <= v19 )
  {
    v25 = v16;
    v26 = v12 * v16;
    v27 = v12 - iCenterX;
    fGridSizeY = v22 - iCenterY;
    v28 = v26 + v22;
    v29 = v19 + 1 - iCenterX;
    v30 = 1 - iCenterY + v23;
    do
    {
      if ( v22 <= v23 )
      {
        v31 = fGridSizeY;
        v32 = v28;
        do
        {
          if ( (fRadiusSqr + 0.1) > (((v31 * v13) * (v31 * v13)) + ((v27 * fGridSizeX) * (v27 * fGridSizeX))) )
          {
            for ( i = 0; i != 24; ++i )
            {
              v34 = values[i];
              if ( pPotentialLocations[i][v32] >= v34 )
                v34 = pPotentialLocations[i][v32];
              values[i] = v34;
            }
          }
          ++v31;
          ++v32;
        }
        while ( v31 != v30 );
      }
      ++v27;
      v28 += v25;
    }
    while ( v27 != v29 );
  }
}


// CDOTA_TeamCommander::GetPotentialDamage  (line 2494, @0x0000000002834780, libserver.so)  // inlines: GetBotByIndex, GetOpposingTeamCommander, GetOpposingTeamNumber, GetTeamCommander, operator==
// calls: CDOTA_TeamCommander::GetPotentialLocationValues, DOTACommander, CDOTA_Bot::GetEstimatedDamageToTarget, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Bot::CanEasilyBeKilled, CDOTA_BotMode_Rune::GetRuneDesire, CDOTA_BotMode_SideShop::GetDesire
__int64 __fastcall CDOTA_TeamCommander::GetPotentialDamage(
        CDOTA_TeamCommander *const this,
        CDOTA_BaseNPC *pTarget,
        float fRadius,
        Vector *vLoc)
{
  Vector *AbsOrigin; // rax
  __int64 v6; // rbx
  unsigned int v7; // r12d
  CDOTA_TeamCommander *v8; // rax
  CDOTA_Bot *v9; // rdi
  int v10; // eax
  float fRadiusa; // [rsp+4h] [rbp-ACh]
  Vector vActualLocation; // [rsp+10h] [rbp-A0h] BYREF
  int values[36]; // [rsp+20h] [rbp-90h] BYREF

  if ( vec3_origin.x == vLoc->x && vec3_origin.y == vLoc->y && vec3_origin.z == vLoc->z )
  {
    fRadiusa = fRadius;
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    fRadius = fRadiusa;
  }
  else
  {
    AbsOrigin = vLoc;
  }
  v6 = 0;
  v7 = 0;
  vActualLocation = *AbsOrigin;
  CDOTA_TeamCommander::GetPotentialLocationValues(this, &vActualLocation, fRadius, values);
  do
  {
    while ( 1 )
    {
      v8 = this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST ? &DOTACommander()->m_BadGuys : &DOTACommander()->m_GoodGuys;
      if ( v8->m_BotList.m_Size > v6 )
      {
        v9 = v8->m_BotList.m_Memory.m_pMemory[v6];
        if ( v9 != 0 )
          break;
      }
      if ( ++v6 == 24 )
        return v7;
    }
    v10 = values[v6++] * CDOTA_Bot::GetEstimatedDamageToTarget(v9, 1, pTarget, 3.0, 7);
    v7 += v10 / 255;
  }
  while ( v6 != 24 );
  return v7;
}


// CDOTA_TeamCommander::GetNearbyEnemyOffensivePower  (line 2516, @0x00000000028348f0, libserver.so)  // inlines: GetBotByIndex, GetOpposingTeamCommander, GetOpposingTeamNumber, GetTeamCommander
// calls: CDOTA_TeamCommander::GetPotentialLocationValues, DOTACommander, CDOTA_Bot::GetOffensivePower
// callers: CDOTA_BotMode_DefendTower::CalculateDesiredLocation, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Farm::GetDesire, CDOTA_BotMode_Laning::CalculateDesiredLocation, CDOTA_BotMode_Farm::GetFarmLaneScore, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_Ward::GetDesire, CDOTA_TeamCommander::UpdateFarmLaneDesires, CDOTA_TeamCommander::UpdateRoshanDesire, CDOTA_TeamCommander::UpdateRoamDesire
float __fastcall CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc,
        float a3,
        float fRadius)
{
  __int64 v5; // rbx
  CDOTA_TeamCommander *v6; // rax
  CDOTA_Bot *v7; // rdi
  float OffensivePower; // xmm0_4
  float v9; // xmm1_4
  float fPower; // [rsp+Ch] [rbp-84h]
  int values[32]; // [rsp+10h] [rbp-80h] BYREF

  v5 = 0;
  CDOTA_TeamCommander::GetPotentialLocationValues(this, vLoc, a3, values);
  fPower = 0.0;
  do
  {
    while ( 1 )
    {
      v6 = this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST ? &DOTACommander()->m_BadGuys : &DOTACommander()->m_GoodGuys;
      if ( v6->m_BotList.m_Size > v5 )
      {
        v7 = v6->m_BotList.m_Memory.m_pMemory[v5];
        if ( v7 != 0 )
          break;
      }
      if ( ++v5 == 24 )
        return fPower;
    }
    OffensivePower = CDOTA_Bot::GetOffensivePower(v7);
    v9 = values[v5++];
    fPower = ((OffensivePower * v9) / 255.0) + fPower;
  }
  while ( v5 != 24 );
  return fPower;
}


// CDOTA_TeamCommander::IsUnitPotentiallyNearby  (line 2537, @0x0000000002834b60, libserver.so)
// calls: CDOTA_TeamCommander::GetUnitPotentialValue
bool __fastcall CDOTA_TeamCommander::IsUnitPotentiallyNearby(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc,
        CDOTA_BaseNPC *pUnit,
        float fRadius)
{
  return CDOTA_TeamCommander::GetUnitPotentialValue(this, vLoc, pUnit, fRadius) > 0;
}


// CDOTA_TeamCommander::GetUnitPotentialValue  (line 2544, @0x00000000028349b0, libserver.so)  // inlines: Get, GetBotByIndex, GetEntityIdentity, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetOpposingTeamNumber, GetTeamCommander, GetUnit, IndexToIdentity, IsValid, Length2DSqr, LookupEntity, ToDOTABaseNPC, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CBaseModelEntity::CanBeSeenByTeam, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::GetPotentialLocationValues, DOTACommander
// callers: CDOTA_TeamCommander::IsUnitPotentiallyNearby, CDOTA_TeamCommander::UpdatePushLaneDesires, Script_GetUnitPotentialValue
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_TeamCommander::GetUnitPotentialValue(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc,
        CDOTA_BaseNPC *pUnit,
        float fRadius)
{
  const Vector *AbsOrigin; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  __int64 result; // rax
  const Vector *v11; // rsi
  __int64 v12; // rbx
  CDOTA_TeamCommander *v13; // rax
  CDOTA_Bot *v14; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *m_pInstance; // rax
  int values[36]; // [rsp+10h] [rbp-90h] BYREF

  if ( CBaseModelEntity::CanBeSeenByTeam(pUnit, this->m_eTeam) )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pUnit);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    result = 0;
    if ( (fRadius * fRadius) > (((x - vLoc->x) * (x - vLoc->x)) + ((y - vLoc->y) * (y - vLoc->y))) )
      return 255;
  }
  else
  {
    v11 = vLoc;
    v12 = 0;
    CDOTA_TeamCommander::GetPotentialLocationValues(this, v11, fRadius, values);
    do
    {
      if ( values[v12] > 0 )
      {
        v13 = this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST ? &DOTACommander()->m_BadGuys : &DOTACommander()->m_GoodGuys;
        if ( v12 < v13->m_BotList.m_Size )
        {
          v14 = v13->m_BotList.m_Memory.m_pMemory[v12];
          if ( v14 != 0 )
          {
            m_Index = v14->m_hUnit.m_Index;
            if ( m_Index + 2 <= 1
              || (v16 = v14->m_hUnit.m_Index,
                  (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v16 >> 9) & 0x3F]) == 0)
              || (v18 = &v17[v16 & 0x1FF]) == 0
              || m_Index != v18->m_EHandle.m_Index
              || (m_pInstance = v18->m_pInstance, v18->m_pInstance == 0)
              || !m_pInstance->m_bIsDOTANPC )
            {
              m_pInstance = 0;
            }
            if ( pUnit == m_pInstance )
              return values[v12];
          }
        }
      }
      ++v12;
    }
    while ( v12 != 24 );
    return 0;
  }
  return result;
}


// CDOTA_TeamCommander::GetNearbyAlliedOffensivePower  (line 2572, @0x0000000002834b70, libserver.so)  // inlines: FastSqrt, Get, GetBotByIndex, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsConsideredHero, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Bot::GetOffensivePower
// callers: CDOTA_BotMode_DefendTower::CalculateDesiredLocation, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Laning::CalculateDesiredLocation, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_Ward::GetDesire
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_TeamCommander::GetNearbyAlliedOffensivePower(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc,
        float a3,
        float fRadius)
{
  __int64 v6; // r14
  int v7; // ebx
  CDOTA_Bot *v8; // rax
  uint32 m_Index; // ecx
  unsigned __int16 v10; // dx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  const CBaseEntity *m_pInstance; // r15
  const Vector *AbsOrigin; // rax
  CDOTA_Bot *m_pConnections; // rdi
  float OffensivePower; // xmm0_4
  float fNearbyHeroFirepower; // [rsp+8h] [rbp-38h]

  if ( this->m_BotList.m_Size <= 0 )
    return 0.0;
  v6 = 0;
  v7 = 0;
  fNearbyHeroFirepower = 0.0;
  do
  {
    v8 = this->m_BotList.m_Memory.m_pMemory[v6];
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
            if ( v12->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 3) != 0 )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(v12->m_pInstance);
              if ( a3 > fsqrt(
                          ((AbsOrigin->x - vLoc->x) * (AbsOrigin->x - vLoc->x))
                        + ((AbsOrigin->y - vLoc->y) * (AbsOrigin->y - vLoc->y))) )
              {
                m_pConnections = m_pInstance[2].m_OnUser1.m_pConnections;
                OffensivePower = 0.0;
                if ( m_pConnections != 0 )
                  OffensivePower = CDOTA_Bot::GetOffensivePower(m_pConnections);
                fNearbyHeroFirepower = OffensivePower + fNearbyHeroFirepower;
              }
            }
          }
        }
      }
    }
    ++v7;
    ++v6;
  }
  while ( v7 < this->m_BotList.m_Size );
  return fNearbyHeroFirepower;
}


// CDOTA_TeamCommander::UpdateAvoidanceGrid  (line 2593, @0x000000000284a480, libserver.so)  // inlines: CVProfScope, Clamp<int>, FillWithValue, Get, GetAcquisitionRange, GetBotByIndex, GetEntityIdentity, GetEntryIndex, GetGridCountX, GetGridCountY, GetGridFromLocation, GetGridSizeX, GetGridSizeY, GetInstance, GetLocationFromGrid, GetNPCAttackTarget, GetOpposingTeamCommander, GetOpposingTeamNumber, GetTeamCommander, GetTeamNumber, GetUnit, IndexToIdentity, IsConsideredHero, IsElapsed, IsEnabled, IsValid, Length2DSqr, LookupEntity, ToDOTABaseNPC, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CVProfScope
// calls: CountdownTimer::Now, CDOTAGamerules::GetFountain, CVProfile::EnterScope, RandomFloat, CountdownTimer::Start, DOTACommander, CDOTAGamerules::GetNumTowers, CDOTAGamerules::GetTower, CBaseEntity::GetAbsOrigin, CDOTA_Commander::GetGridFromLocation, CDOTA_BaseNPC::GetAttackRange, CDOTA_Commander::GetLocationFromGrid (19 total)
// callers: CDOTA_TeamCommander::Think
// strings: "CDOTA_TeamCommander::UpdateAvoidanceGrid"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_TeamCommander::UpdateAvoidanceGrid(CDOTA_TeamCommander *const this)
{
  int m_enabled; // ebx
  float v2; // xmm0_4
  float v3; // xmm1_4
  __int64 v4; // rdx
  int i; // eax
  CDOTA_Commander *v6; // rax
  CDOTA_Commander *v7; // rax
  CDOTA_BaseNPC_Tower *Tower; // rax
  CDOTA_BaseNPC_Tower *v9; // r12
  const Vector *AbsOrigin; // rbx
  CDOTA_Commander *v11; // rax
  float v12; // xmm0_4
  int v13; // ebx
  int v14; // ecx
  int v15; // edx
  int v16; // esi
  int v17; // eax
  int v18; // r14d
  int v19; // ecx
  int v20; // eax
  __int64 v21; // r13
  int v22; // r15d
  CDOTA_Commander *v23; // rax
  const Vector *v24; // rax
  CDOTA_Commander *v25; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  __int64 m; // r14
  int v29; // r12d
  CDOTA_Commander *v30; // rax
  CDOTA_TeamCommander *v31; // rdx
  CDOTA_TeamCommander *v32; // rax
  int v33; // r12d
  CDOTA_Commander *v34; // rax
  CDOTA_TeamCommander *v35; // rdx
  CDOTA_TeamCommander *v36; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *UnitList; // rax
  int m_Size; // r13d
  CEntityInstance *v39; // rax
  CEntityInstance *v40; // rbx
  CDOTA_BaseNPC *Fountain; // rax
  const CBaseEntity *v42; // r12
  const Vector *v43; // rbx
  CDOTA_Commander *v44; // rax
  int v45; // ebx
  int v46; // ecx
  int v47; // esi
  int v48; // edx
  int v49; // eax
  int v50; // r14d
  int v51; // ecx
  int v52; // eax
  int v53; // r15d
  CDOTA_Commander *v54; // rax
  const Vector *v55; // rax
  CDOTA_Buff *BuffByIndex; // r13
  vec_t v57; // xmm1_4
  CDOTA_Commander *v58; // rax
  float v59; // xmm0_4
  int v60; // r14d
  int v61; // ecx
  int v62; // esi
  int v63; // edx
  int v64; // eax
  int v65; // ecx
  int v66; // r15d
  int v67; // eax
  int v68; // ebx
  __int64 v69; // r12
  CDOTA_Commander *v70; // rax
  __int64 v71; // rax
  int v72; // r12d
  CDOTA_Commander *v73; // rax
  CDOTA_TeamCommander *v74; // rdx
  CDOTA_TeamCommander *v75; // rax
  CDOTA_Bot *v76; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v78; // rdx
  CEntityIdentity *v79; // rax
  CEntityInstance *m_pInstance; // r12
  const Vector *v81; // rbx
  CDOTA_Commander *v82; // rax
  float v83; // xmm0_4
  int v84; // ebx
  int v85; // ecx
  int v86; // edx
  int v87; // esi
  int v88; // eax
  int v89; // r15d
  int v90; // ecx
  int v91; // eax
  __int64 v92; // r13
  CDOTA_Commander *v93; // rax
  const Vector *v94; // rax
  int *v95; // rcx
  int v96; // eax
  int v97; // esi
  int v98; // edx
  DOTATeam_t m_eTeam; // esi
  CEntityInstance *v100; // rax
  const Vector *v101; // r12
  CDOTA_Commander *v102; // rax
  int v103; // r12d
  float v104; // xmm0_4
  int v105; // ecx
  int v106; // edx
  int v107; // esi
  int v108; // eax
  int v109; // r15d
  int v110; // ecx
  int v111; // eax
  __int64 v112; // r14
  CDOTA_Commander *v113; // rax
  const Vector *v114; // rax
  _DWORD *v115; // rdx
  int v116; // eax
  int *v117; // [rsp+18h] [rbp-118h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pAllUnits; // [rsp+28h] [rbp-108h]
  int *pY; // [rsp+30h] [rbp-100h]
  DOTA_LANE lane; // [rsp+38h] [rbp-F8h]
  DOTA_LANE lanea[2]; // [rsp+38h] [rbp-F8h]
  float laneb; // [rsp+38h] [rbp-F8h]
  float j; // [rsp+40h] [rbp-F0h]
  int ja; // [rsp+40h] [rbp-F0h]
  float jb; // [rsp+40h] [rbp-F0h]
  int kc; // [rsp+48h] [rbp-E8h]
  float k; // [rsp+48h] [rbp-E8h]
  unsigned int ka; // [rsp+48h] [rbp-E8h]
  __int64 kb; // [rsp+48h] [rbp-E8h]
  bool VProf_2601; // [rsp+53h] [rbp-DDh]
  float flGridSizeY; // [rsp+54h] [rbp-DCh]
  float flGridSizeX; // [rsp+58h] [rbp-D8h]
  int nGridCountX; // [rsp+5Ch] [rbp-D4h]
  __int64 v134; // [rsp+60h] [rbp-D0h]
  __int64 v135; // [rsp+60h] [rbp-D0h]
  int v136; // [rsp+60h] [rbp-D0h]
  __int64 v137; // [rsp+60h] [rbp-D0h]
  int v138; // [rsp+60h] [rbp-D0h]
  int v139; // [rsp+68h] [rbp-C8h]
  int v140[2]; // [rsp+68h] [rbp-C8h]
  int v141; // [rsp+68h] [rbp-C8h]
  int v142; // [rsp+68h] [rbp-C8h]
  int v143; // [rsp+68h] [rbp-C8h]
  __int64 v144; // [rsp+70h] [rbp-C0h]
  int v145; // [rsp+78h] [rbp-B8h]
  unsigned __int64 v146; // [rsp+78h] [rbp-B8h]
  int v147; // [rsp+78h] [rbp-B8h]
  __int64 v148; // [rsp+78h] [rbp-B8h]
  int v149; // [rsp+78h] [rbp-B8h]
  int nGridCountY; // [rsp+88h] [rbp-A8h]
  float fRadiusSqre; // [rsp+8Ch] [rbp-A4h]
  int fRadiusSqr; // [rsp+8Ch] [rbp-A4h]
  float fRadiusSqrf; // [rsp+8Ch] [rbp-A4h]
  int fRadiusSqra; // [rsp+8Ch] [rbp-A4h]
  float fRadiusSqrg; // [rsp+8Ch] [rbp-A4h]
  float fRadiusSqrb; // [rsp+8Ch] [rbp-A4h]
  int fRadiusSqrc; // [rsp+8Ch] [rbp-A4h]
  int fRadiusSqrd; // [rsp+8Ch] [rbp-A4h]
  int iCenterX_0; // [rsp+98h] [rbp-98h] BYREF
  int iCenterY_0; // [rsp+9Ch] [rbp-94h] BYREF
  Vector vAvoidLocation; // [rsp+A0h] [rbp-90h] BYREF
  Vector LocationFromGrid; // [rsp+B0h] [rbp-80h]
  Vector v164; // [rsp+C0h] [rbp-70h]
  Vector v165; // [rsp+D0h] [rbp-60h]
  Vector iCenterX; // [rsp+E0h] [rbp-50h] OVERLAPPED BYREF
  Vector iCenterY; // [rsp+F0h] [rbp-40h] OVERLAPPED BYREF
  Vector v168; // 0:kr14_12.12

  if ( (this->m_AvoidanceGridTimer.m_timestamp.m_Value <= 0.0
     || CountdownTimer::Now(&this->m_AvoidanceGridTimer) >= this->m_AvoidanceGridTimer.m_timestamp.m_Value)
    && CDOTAGamerules::GetFountain(g_pGameRules, this->m_eTeam) != 0 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    VProf_2601 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::UpdateAvoidanceGrid", 0, "Bots", 0, 4);
    fRadiusSqre = RandomFloat(0.40000001, 0.60000002);
    v2 = (*(*engine + 96LL))(engine);
    CountdownTimer::Start(&this->m_AvoidanceGridTimer, v2 * fRadiusSqre, v3);
    v4 = 0;
    for ( i = 0; i < this->m_AvoidanceGrid.m_Size; ++v4 )
    {
      ++i;
      this->m_AvoidanceGrid.m_Memory.m_pMemory[v4] = 0;
    }
    nGridCountX = DOTACommander()->m_iGridCount[0];
    nGridCountY = DOTACommander()->m_iGridCount[1];
    v6 = DOTACommander();
    flGridSizeX = (v6->m_vWorldBounds[1].x - v6->m_vWorldBounds[0].x) / v6->m_iGridCount[0];
    v7 = DOTACommander();
    fRadiusSqr = 0;
    v144 = 4LL * nGridCountY;
    flGridSizeY = (v7->m_vWorldBounds[1].y - v7->m_vWorldBounds[0].y) / v7->m_iGridCount[1];
    while ( fRadiusSqr < CDOTAGamerules::GetNumTowers(g_pGameRules) )
    {
      Tower = CDOTAGamerules::GetTower(g_pGameRules, fRadiusSqr);
      v9 = Tower;
      if ( Tower != 0 && (*(Tower->_vptr_IHandleEntity + 408))(Tower) != 0 && this->m_eTeam != v9->m_iTeamNum.m_Value )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
        v11 = DOTACommander();
        CDOTA_Commander::GetGridFromLocation(v11, AbsOrigin, &iCenterX, &iCenterY);
        v12 = CDOTA_BaseNPC::GetAttackRange(v9) + 300.0;
        v13 = 0;
        v14 = ((v12 / flGridSizeX) + 0.5);
        j = v12 * v12;
        v15 = ((v12 / flGridSizeY) + 0.5);
        v16 = LODWORD(iCenterX.x) - v14;
        if ( LODWORD(iCenterX.x) - v14 >= 0 )
        {
          if ( v16 > nGridCountX )
            v16 = nGridCountX;
          v13 = v16;
        }
        v145 = 0;
        v17 = v14 + LODWORD(iCenterX.x);
        if ( v14 + LODWORD(iCenterX.x) >= 0 )
        {
          if ( v17 > nGridCountX )
            v17 = nGridCountX;
          v145 = v17;
        }
        v18 = 0;
        v19 = LODWORD(iCenterY.x) - v15;
        if ( LODWORD(iCenterY.x) - v15 >= 0 )
        {
          if ( v19 > nGridCountY )
            v19 = nGridCountY;
          v18 = v19;
        }
        v139 = 0;
        v20 = v15 + LODWORD(iCenterY.x);
        if ( v15 + LODWORD(iCenterY.x) >= 0 )
        {
          if ( v20 > nGridCountY )
            v20 = nGridCountY;
          v139 = v20;
        }
        if ( v13 < v145 )
        {
          v134 = 4 * (v13 * nGridCountY + v18);
          do
          {
            if ( v18 <= v139 )
            {
              v21 = v134;
              v22 = v18;
              do
              {
                v23 = DOTACommander();
                LocationFromGrid = CDOTA_Commander::GetLocationFromGrid(v23, v13, v22);
                v24 = CBaseEntity::GetAbsOrigin(v9);
                if ( j > (((v24->x - LocationFromGrid.x) * (v24->x - LocationFromGrid.x))
                        + ((v24->y - LocationFromGrid.y) * (v24->y - LocationFromGrid.y))) )
                {
                  lane = v9->m_Lane;
                  kc = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
                  v25 = DOTACommander();
                  p_m_GoodGuys = &v25->m_GoodGuys;
                  p_m_BadGuys = &v25->m_BadGuys;
                  if ( kc != 2 )
                    p_m_GoodGuys = p_m_BadGuys;
                  if ( v9 == CDOTA_TeamCommander::GetLeadBuildingInLane(p_m_GoodGuys, lane) )
                    *(this->m_AvoidanceGrid.m_Memory.m_pMemory + v21) |= 0x100u;
                  else
                    *(this->m_AvoidanceGrid.m_Memory.m_pMemory + v21) |= 0x200u;
                }
                ++v22;
                v21 += 4;
              }
              while ( v22 <= v139 );
            }
            ++v13;
            v134 += v144;
          }
          while ( v13 != v145 );
        }
      }
      ++fRadiusSqr;
    }
    for ( m = 0; ; ++m )
    {
      v29 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
      v30 = DOTACommander();
      v31 = &v30->m_GoodGuys;
      v32 = &v30->m_BadGuys;
      if ( v29 != 2 )
        v31 = v32;
      if ( m >= v31->m_BotList.m_Size )
        break;
      v33 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
      v34 = DOTACommander();
      v35 = &v34->m_GoodGuys;
      v36 = &v34->m_BadGuys;
      if ( v33 != 2 )
        v35 = v36;
      if ( m < v35->m_BotList.m_Size && v35->m_BotList.m_Memory.m_pMemory[m] != 0 )
      {
        v72 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
        v73 = DOTACommander();
        v74 = &v73->m_GoodGuys;
        v75 = &v73->m_BadGuys;
        if ( v72 != 2 )
          v74 = v75;
        v76 = 0;
        if ( m < v74->m_BotList.m_Size )
          v76 = v74->m_BotList.m_Memory.m_pMemory[m];
        m_Index = v76->m_hUnit.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v78 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v76->m_hUnit.m_Index) >> 9) & 0x3F];
          if ( v78 != 0 )
          {
            v79 = &v78[v76->m_hUnit.m_Index & 0x1FF];
            if ( v79 != 0 && m_Index == v79->m_EHandle.m_Index )
            {
              m_pInstance = v79->m_pInstance;
              if ( v79->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0
                && CBaseModelEntity::CanBeSeenByTeam(m_pInstance, this->m_eTeam)
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
              {
                v81 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v82 = DOTACommander();
                CDOTA_Commander::GetGridFromLocation(v82, v81, &iCenterX, &iCenterY);
                if ( (*(&m_pInstance[50].m_worldGroupId + 1) & 2) != 0 )
                  v83 = CDOTA_BaseNPC::GetAttackRange(m_pInstance) + 200.0;
                else
                  v83 = CDOTA_BaseNPC::GetAttackRange(m_pInstance) + 500.0;
                v84 = 0;
                v85 = ((v83 / flGridSizeX) + 0.5);
                jb = v83 * v83;
                v86 = ((v83 / flGridSizeY) + 0.5);
                v87 = LODWORD(iCenterX.x) - v85;
                if ( LODWORD(iCenterX.x) - v85 >= 0 )
                {
                  if ( v87 > nGridCountX )
                    v87 = nGridCountX;
                  v84 = v87;
                }
                v149 = 0;
                v88 = v85 + LODWORD(iCenterX.x);
                if ( v85 + LODWORD(iCenterX.x) >= 0 )
                {
                  if ( v88 > nGridCountX )
                    v88 = nGridCountX;
                  v149 = v88;
                }
                v89 = 0;
                v90 = LODWORD(iCenterY.x) - v86;
                if ( LODWORD(iCenterY.x) - v86 >= 0 )
                {
                  if ( v90 > nGridCountY )
                    v90 = nGridCountY;
                  v89 = v90;
                }
                v142 = 0;
                v91 = v86 + LODWORD(iCenterY.x);
                if ( v86 + LODWORD(iCenterY.x) >= 0 )
                {
                  if ( v91 > nGridCountY )
                    v91 = nGridCountY;
                  v142 = v91;
                }
                if ( v84 < v149 )
                {
                  v137 = 4 * (v89 + (v84 * nGridCountY));
                  do
                  {
                    if ( v89 <= v142 )
                    {
                      v92 = v137;
                      fRadiusSqrc = v89;
                      do
                      {
                        v93 = DOTACommander();
                        v164 = CDOTA_Commander::GetLocationFromGrid(v93, v84, fRadiusSqrc);
                        v94 = CBaseEntity::GetAbsOrigin(m_pInstance);
                        if ( jb > (((v94->x - v164.x) * (v94->x - v164.x)) + ((v94->y - v164.y) * (v94->y - v164.y))) )
                        {
                          v95 = (this->m_AvoidanceGrid.m_Memory.m_pMemory + v92);
                          v96 = 240;
                          v97 = *v95;
                          v98 = (*v95 & 0xF0) >> 4;
                          if ( v98 != 15 )
                            v96 = 16 * (v98 + 1);
                          LOBYTE(v97) = v97 & 0xF;
                          *v95 = v97;
                          *(this->m_AvoidanceGrid.m_Memory.m_pMemory + v92) |= v96;
                        }
                        ++fRadiusSqrc;
                        v92 += 4;
                      }
                      while ( fRadiusSqrc <= v142 );
                    }
                    ++v84;
                    v137 += v144;
                  }
                  while ( v84 != v149 );
                }
              }
            }
          }
        }
      }
    }
    UnitList = CDOTA_TeamCommander::GetUnitList(this, CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ALL);
    m_Size = UnitList->m_Size;
    pAllUnits = UnitList;
    if ( UnitList->m_Size > 0 )
    {
      v146 = 0;
      do
      {
        v39 = CEntityHandle::operator CEntityInstance *(&pAllUnits->m_Memory.m_pMemory[v146 / 4]);
        v40 = v39;
        if ( v39 != 0
          && BYTE3(v39[7]._vptr_IHandleEntity) != 0
          && (*(v39->_vptr_IHandleEntity + 408))(v39) != 0
          && SLOBYTE(v40[43].m_iszPrivateVScripts.u.m_Id) < 0 )
        {
          m_eTeam = this->m_eTeam;
          if ( m_eTeam != HIBYTE(v40[7].m_CScriptComponent) && CBaseModelEntity::CanBeSeenByTeam(v40, m_eTeam) )
          {
            v100 = CEntityHandle::operator CEntityInstance *(&v40[59].m_iszPrivateVScripts.u.m_pAsString + 1);
            if ( v100 == 0 || BYTE3(v100[7]._vptr_IHandleEntity) == 0 )
            {
              v101 = CBaseEntity::GetAbsOrigin(v40);
              v102 = DOTACommander();
              CDOTA_Commander::GetGridFromLocation(v102, v101, &iCenterX, &iCenterY);
              v103 = 0;
              v104 = SHIDWORD(v40[47].m_CScriptComponent) + 300.0;
              v105 = ((v104 / flGridSizeX) + 0.5);
              laneb = v104 * v104;
              v106 = ((v104 / flGridSizeY) + 0.5);
              v107 = LODWORD(iCenterX.x) - v105;
              if ( LODWORD(iCenterX.x) - v105 >= 0 )
              {
                if ( v107 > nGridCountX )
                  v107 = nGridCountX;
                v103 = v107;
              }
              v143 = 0;
              v108 = v105 + LODWORD(iCenterX.x);
              if ( v105 + LODWORD(iCenterX.x) >= 0 )
              {
                if ( v108 > nGridCountX )
                  v108 = nGridCountX;
                v143 = v108;
              }
              v109 = 0;
              v110 = LODWORD(iCenterY.x) - v106;
              if ( LODWORD(iCenterY.x) - v106 >= 0 )
              {
                if ( v110 > nGridCountY )
                  v110 = nGridCountY;
                v109 = v110;
              }
              v138 = 0;
              v111 = v106 + LODWORD(iCenterY.x);
              if ( v106 + LODWORD(iCenterY.x) >= 0 )
              {
                if ( v111 > nGridCountY )
                  v111 = nGridCountY;
                v138 = v111;
              }
              if ( v103 < v143 )
              {
                kb = 4 * (v109 + (v103 * nGridCountY));
                do
                {
                  if ( v109 < v138 )
                  {
                    v112 = kb;
                    fRadiusSqrd = v109;
                    do
                    {
                      v113 = DOTACommander();
                      v165 = CDOTA_Commander::GetLocationFromGrid(v113, v103, fRadiusSqrd);
                      v114 = CBaseEntity::GetAbsOrigin(v40);
                      if ( laneb > (((v114->x - v165.x) * (v114->x - v165.x)) + ((v114->y - v165.y) * (v114->y - v165.y))) )
                      {
                        v115 = (this->m_AvoidanceGrid.m_Memory.m_pMemory + v112);
                        v116 = *v115 & 0xF;
                        *v115 &= 0xFFFFFFF0;
                        *(this->m_AvoidanceGrid.m_Memory.m_pMemory + v112) |= (v116 != 15) + v116;
                      }
                      ++fRadiusSqrd;
                      v112 += 4;
                    }
                    while ( fRadiusSqrd != v138 );
                  }
                  ++v103;
                  kb += v144;
                }
                while ( v103 != v143 );
              }
            }
          }
        }
        v146 += 4LL;
      }
      while ( v146 != 4LL * (m_Size - 1) + 4 );
    }
    Fountain = CDOTAGamerules::GetFountain(g_pGameRules, (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2);
    v42 = Fountain;
    if ( Fountain != 0 )
    {
      fRadiusSqrf = CDOTA_BaseNPC::GetAttackRange(Fountain) + 500.0;
      v43 = CBaseEntity::GetAbsOrigin(v42);
      v44 = DOTACommander();
      CDOTA_Commander::GetGridFromLocation(v44, v43, &vAvoidLocation, &iCenterY);
      v45 = 0;
      v46 = ((fRadiusSqrf / flGridSizeX) + 0.5);
      k = fRadiusSqrf * fRadiusSqrf;
      v47 = LODWORD(vAvoidLocation.x) - v46;
      v48 = ((fRadiusSqrf / flGridSizeY) + 0.5);
      if ( LODWORD(vAvoidLocation.x) - v46 >= 0 )
      {
        if ( v47 > nGridCountX )
          v47 = nGridCountX;
        v45 = v47;
      }
      fRadiusSqra = 0;
      v49 = v46 + LODWORD(vAvoidLocation.x);
      if ( v46 + LODWORD(vAvoidLocation.x) >= 0 )
      {
        if ( v49 > nGridCountX )
          v49 = nGridCountX;
        fRadiusSqra = v49;
      }
      v50 = 0;
      v51 = LODWORD(iCenterY.x) - v48;
      if ( LODWORD(iCenterY.x) - v48 >= 0 )
      {
        if ( v51 > nGridCountY )
          v51 = nGridCountY;
        v50 = v51;
      }
      v147 = 0;
      v52 = v48 + LODWORD(iCenterY.x);
      if ( v48 + LODWORD(iCenterY.x) >= 0 )
      {
        if ( v52 > nGridCountY )
          v52 = nGridCountY;
        v147 = v52;
      }
      if ( v45 < fRadiusSqra )
      {
        v135 = 4 * (v50 + (v45 * nGridCountY));
        do
        {
          if ( v50 < v147 )
          {
            v53 = v50;
            *v140 = v135;
            do
            {
              v54 = DOTACommander();
              v168 = CDOTA_Commander::GetLocationFromGrid(v54, v45, v53);
              iCenterX = v168;
              v55 = CBaseEntity::GetAbsOrigin(v42);
              if ( k > (((v55->x - v168.x) * (v55->x - v168.x)) + ((v55->y - v168.y) * (v55->y - v168.y))) )
                *(this->m_AvoidanceGrid.m_Memory.m_pMemory + *v140) |= 0x400u;
              *v140 += 4LL;
              ++v53;
            }
            while ( v53 != v147 );
          }
          ++v45;
          v135 += v144;
        }
        while ( v45 != fRadiusSqra );
      }
    }
    if ( m_Size > 0 )
    {
      *lanea = 0;
      v117 = (4LL * (m_Size - 1) + 4);
      do
      {
        pY = CEntityHandle::operator CEntityInstance *((pAllUnits->m_Memory.m_pMemory + *lanea));
        if ( pY != 0 && *(pY + 339) != 0 && pY[780] > 0 )
        {
          ja = 0;
          do
          {
            BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex((pY + 776), ja, 0);
            if ( BuffByIndex != 0
              && BuffByIndex->m_iTeam != this->m_eTeam
              && (*(BuffByIndex->_vptr_CDOTA_Buff + 81))(BuffByIndex) != 0 )
            {
              for ( ka = 0; ka < (*(BuffByIndex->_vptr_CDOTA_Buff + 74))(BuffByIndex); ++ka )
              {
                fRadiusSqrg = (*(BuffByIndex->_vptr_CDOTA_Buff + 78))(BuffByIndex, ka);
                *&vAvoidLocation.x = (*(BuffByIndex->_vptr_CDOTA_Buff + 75))(BuffByIndex, ka);
                vAvoidLocation.z = v57;
                v58 = DOTACommander();
                CDOTA_Commander::GetGridFromLocation(v58, &vAvoidLocation, &iCenterX_0, &iCenterY_0);
                v59 = fRadiusSqrg;
                v60 = 0;
                fRadiusSqrb = v59 * v59;
                v61 = ((v59 / flGridSizeX) + 0.5);
                v62 = iCenterX_0 - v61;
                v63 = ((v59 / flGridSizeY) + 0.5);
                if ( iCenterX_0 - v61 >= 0 )
                {
                  if ( v62 > nGridCountX )
                    v62 = nGridCountX;
                  v60 = v62;
                }
                v136 = 0;
                v64 = v61 + iCenterX_0;
                if ( v61 + iCenterX_0 >= 0 )
                {
                  if ( v64 > nGridCountX )
                    v64 = nGridCountX;
                  v136 = v64;
                }
                v141 = 0;
                v65 = iCenterY_0 - v63;
                if ( iCenterY_0 - v63 >= 0 )
                {
                  if ( v65 > nGridCountY )
                    v65 = nGridCountY;
                  v141 = v65;
                }
                v66 = 0;
                v67 = v63 + iCenterY_0;
                if ( v63 + iCenterY_0 >= 0 )
                {
                  if ( v67 > nGridCountY )
                    v67 = nGridCountY;
                  v66 = v67;
                }
                if ( v60 < v136 )
                {
                  v148 = 4 * (v60 * nGridCountY + v141);
                  do
                  {
                    v68 = v141;
                    if ( v141 < v66 )
                    {
                      v69 = v148;
                      do
                      {
                        while ( 1 )
                        {
                          v70 = DOTACommander();
                          iCenterY = CDOTA_Commander::GetLocationFromGrid(v70, v60, v68);
                          if ( fRadiusSqrb > (((vAvoidLocation.x - iCenterY.x) * (vAvoidLocation.x - iCenterY.x))
                                            + ((vAvoidLocation.y - iCenterY.y) * (vAvoidLocation.y - iCenterY.y))) )
                          {
                            if ( (*(BuffByIndex->_vptr_CDOTA_Buff + 79))(BuffByIndex) != 0 )
                              *(this->m_AvoidanceGrid.m_Memory.m_pMemory + v69) |= 0x800u;
                            if ( (*(BuffByIndex->_vptr_CDOTA_Buff + 80))(BuffByIndex) != 0 )
                              break;
                          }
                          ++v68;
                          v69 += 4;
                          if ( v68 == v66 )
                            goto LABEL_121;
                        }
                        v71 = v69;
                        ++v68;
                        v69 += 4;
                        *(this->m_AvoidanceGrid.m_Memory.m_pMemory + v71) |= 0x1000u;
                      }
                      while ( v68 != v66 );
                    }
LABEL_121:
                    ++v60;
                    v148 += v144;
                  }
                  while ( v60 != v136 );
                }
              }
            }
            ++ja;
          }
          while ( ja < pY[780] );
        }
        *lanea += 4LL;
      }
      while ( *lanea != v117 );
    }
    if ( VProf_2601 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
}


// CDOTA_TeamCommander::GetRawAvoidanceForLocation  (line 2840, @0x00000000028351e0, libserver.so)  // inlines: GetGridCountY, GetGridFromLocation, operator[]
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation
// callers: CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Retreat::FindNearbyHealingAura, CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::GetCurrentUsageDesire
int __fastcall CDOTA_TeamCommander::GetRawAvoidanceForLocation(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc)
{
  CDOTA_Commander *v4; // rax
  int iGridX; // [rsp+8h] [rbp-18h] BYREF
  int iGridY[5]; // [rsp+Ch] [rbp-14h] BYREF

  v4 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v4, vLoc, &iGridX, iGridY);
  return this->m_AvoidanceGrid.m_Memory.m_pMemory[iGridY[0] + DOTACommander()->m_iGridCount[1] * iGridX];
}


// CDOTA_TeamCommander::GetRawAvoidanceForGrid  (line 2851, @0x0000000002835240, libserver.so)  // inlines: GetGridCountX, GetGridCountY, operator[]
// calls: DOTACommander
// callers: CDOTA_Bot_Pathing::UpdateSearch
int __fastcall CDOTA_TeamCommander::GetRawAvoidanceForGrid(CDOTA_TeamCommander *const this, int iGridX, int iGridY)
{
  if ( iGridX < 0
    || iGridX >= DOTACommander()->m_iGridCount[0]
    || iGridY < 0
    || iGridY >= DOTACommander()->m_iGridCount[1] )
  {
    return 0;
  }
  else
  {
    return this->m_AvoidanceGrid.m_Memory.m_pMemory[DOTACommander()->m_iGridCount[1] * iGridX + iGridY];
  }
}


// CDOTA_TeamCommander::InTowerAvoidanceLocation  (line 2861, @0x00000000028352b0, libserver.so)  // inlines: GetGridCountY, GetGridFromLocation, operator[]
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation
bool __fastcall CDOTA_TeamCommander::InTowerAvoidanceLocation(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc)
{
  CDOTA_Commander *v4; // rax
  int iGridX; // [rsp+8h] [rbp-18h] BYREF
  int iGridY[5]; // [rsp+Ch] [rbp-14h] BYREF

  v4 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v4, vLoc, &iGridX, iGridY);
  return (this->m_AvoidanceGrid.m_Memory.m_pMemory[iGridY[0] + DOTACommander()->m_iGridCount[1] * iGridX] & 0x100) != 0;
}


// CDOTA_TeamCommander::InTowerAvoidanceGrid  (line 2872, @0x0000000002835310, libserver.so)  // inlines: GetGridCountX, GetGridCountY, operator[]
// calls: DOTACommander
// callers: CDOTA_Bot::GetAvoidanceAmountForGrid, CDOTA_Bot_Pathing::FindTotalAvoidanceForPath
bool __fastcall CDOTA_TeamCommander::InTowerAvoidanceGrid(CDOTA_TeamCommander *const this, int iGridX, int iGridY)
{
  return iGridX >= 0
      && iGridX < DOTACommander()->m_iGridCount[0]
      && iGridY >= 0
      && iGridY < DOTACommander()->m_iGridCount[1]
      && (this->m_AvoidanceGrid.m_Memory.m_pMemory[DOTACommander()->m_iGridCount[1] * iGridX + iGridY] & 0x100) != 0;
}


// CDOTA_TeamCommander::InInnerTowerAvoidanceLocation  (line 2882, @0x0000000002835380, libserver.so)  // inlines: GetGridCountY, GetGridFromLocation, operator[]
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation
bool __fastcall CDOTA_TeamCommander::InInnerTowerAvoidanceLocation(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc)
{
  CDOTA_Commander *v4; // rax
  int iGridX; // [rsp+8h] [rbp-18h] BYREF
  int iGridY[5]; // [rsp+Ch] [rbp-14h] BYREF

  v4 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v4, vLoc, &iGridX, iGridY);
  return (this->m_AvoidanceGrid.m_Memory.m_pMemory[iGridY[0] + DOTACommander()->m_iGridCount[1] * iGridX] & 0x200) != 0;
}


// CDOTA_TeamCommander::InInnerTowerAvoidanceGrid  (line 2893, @0x00000000028353e0, libserver.so)  // inlines: GetGridCountX, GetGridCountY, operator[]
// calls: DOTACommander
// callers: CDOTA_Bot::GetAvoidanceAmountForGrid, CDOTA_Bot_Pathing::FindTotalAvoidanceForPath
bool __fastcall CDOTA_TeamCommander::InInnerTowerAvoidanceGrid(CDOTA_TeamCommander *const this, int iGridX, int iGridY)
{
  return iGridX >= 0
      && iGridX < DOTACommander()->m_iGridCount[0]
      && iGridY >= 0
      && iGridY < DOTACommander()->m_iGridCount[1]
      && (this->m_AvoidanceGrid.m_Memory.m_pMemory[DOTACommander()->m_iGridCount[1] * iGridX + iGridY] & 0x200) != 0;
}


// CDOTA_TeamCommander::InFountainAvoidanceLocation  (line 2903, @0x0000000002835450, libserver.so)  // inlines: GetGridCountY, GetGridFromLocation, operator[]
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation
bool __fastcall CDOTA_TeamCommander::InFountainAvoidanceLocation(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc)
{
  CDOTA_Commander *v4; // rax
  int iGridX; // [rsp+8h] [rbp-18h] BYREF
  int iGridY[5]; // [rsp+Ch] [rbp-14h] BYREF

  v4 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v4, vLoc, &iGridX, iGridY);
  return (this->m_AvoidanceGrid.m_Memory.m_pMemory[iGridY[0] + DOTACommander()->m_iGridCount[1] * iGridX] & 0x400) != 0;
}


// CDOTA_TeamCommander::InFountainAvoidanceGrid  (line 2914, @0x00000000028354b0, libserver.so)  // inlines: GetGridCountX, GetGridCountY, operator[]
// calls: DOTACommander
// callers: CDOTA_Bot::GetAvoidanceAmountForGrid, CDOTA_Bot_Pathing::FindTotalAvoidanceForPath
bool __fastcall CDOTA_TeamCommander::InFountainAvoidanceGrid(CDOTA_TeamCommander *const this, int iGridX, int iGridY)
{
  return iGridX >= 0
      && iGridX < DOTACommander()->m_iGridCount[0]
      && iGridY >= 0
      && iGridY < DOTACommander()->m_iGridCount[1]
      && (this->m_AvoidanceGrid.m_Memory.m_pMemory[DOTACommander()->m_iGridCount[1] * iGridX + iGridY] & 0x400) != 0;
}


// CDOTA_TeamCommander::InEffectAvoidanceLocation  (line 2924, @0x0000000002835520, libserver.so)  // inlines: GetGridCountY, GetGridFromLocation, operator[]
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation
bool __fastcall CDOTA_TeamCommander::InEffectAvoidanceLocation(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc,
        bool bPhysical)
{
  CDOTA_Commander *v6; // rax
  int iGridX; // [rsp+8h] [rbp-28h] BYREF
  int iGridY[9]; // [rsp+Ch] [rbp-24h] BYREF

  v6 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v6, vLoc, &iGridX, iGridY);
  return ((!bPhysical ? 2048 : 4096)
        & this->m_AvoidanceGrid.m_Memory.m_pMemory[iGridY[0] + DOTACommander()->m_iGridCount[1] * iGridX]) != 0;
}


// CDOTA_TeamCommander::InEffectAvoidanceGrid  (line 2936, @0x0000000002835590, libserver.so)  // inlines: GetGridCountX, GetGridCountY, operator[]
// calls: DOTACommander
bool __fastcall CDOTA_TeamCommander::InEffectAvoidanceGrid(
        CDOTA_TeamCommander *const this,
        int iGridX,
        int iGridY,
        bool bPhysical)
{
  return iGridX >= 0
      && iGridX < DOTACommander()->m_iGridCount[0]
      && iGridY >= 0
      && iGridY < DOTACommander()->m_iGridCount[1]
      && ((!bPhysical ? 2048 : 4096)
        & this->m_AvoidanceGrid.m_Memory.m_pMemory[DOTACommander()->m_iGridCount[1] * iGridX + iGridY]) != 0;
}


// CDOTA_TeamCommander::NumCreepAvoidanceLocation  (line 2947, @0x0000000002835620, libserver.so)  // inlines: GetGridCountY, GetGridFromLocation, operator[]
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation
int __fastcall CDOTA_TeamCommander::NumCreepAvoidanceLocation(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc)
{
  CDOTA_Commander *v4; // rax
  int iGridX; // [rsp+8h] [rbp-18h] BYREF
  int iGridY[5]; // [rsp+Ch] [rbp-14h] BYREF

  v4 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v4, vLoc, &iGridX, iGridY);
  return this->m_AvoidanceGrid.m_Memory.m_pMemory[iGridY[0] + DOTACommander()->m_iGridCount[1] * iGridX] & 0xF;
}


// CDOTA_TeamCommander::NumCreepAvoidanceGrid  (line 2958, @0x0000000002835680, libserver.so)  // inlines: GetGridCountX, GetGridCountY, operator[]
// calls: DOTACommander
// callers: CDOTA_Bot::GetAvoidanceAmountForGrid
int __fastcall CDOTA_TeamCommander::NumCreepAvoidanceGrid(CDOTA_TeamCommander *const this, int iGridX, int iGridY)
{
  if ( iGridX < 0
    || iGridX >= DOTACommander()->m_iGridCount[0]
    || iGridY < 0
    || iGridY >= DOTACommander()->m_iGridCount[1] )
  {
    return 0;
  }
  else
  {
    return this->m_AvoidanceGrid.m_Memory.m_pMemory[DOTACommander()->m_iGridCount[1] * iGridX + iGridY] & 0xF;
  }
}


// CDOTA_TeamCommander::NumHeroAvoidanceLocation  (line 2968, @0x00000000028356f0, libserver.so)  // inlines: GetGridCountY, GetGridFromLocation, operator[]
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation
int __fastcall CDOTA_TeamCommander::NumHeroAvoidanceLocation(CDOTA_TeamCommander *const this, const Vector *const vLoc)
{
  CDOTA_Commander *v4; // rax
  int iGridX; // [rsp+8h] [rbp-18h] BYREF
  int iGridY[5]; // [rsp+Ch] [rbp-14h] BYREF

  v4 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v4, vLoc, &iGridX, iGridY);
  return (this->m_AvoidanceGrid.m_Memory.m_pMemory[iGridY[0] + DOTACommander()->m_iGridCount[1] * iGridX] & 0xF0) >> 4;
}


// CDOTA_TeamCommander::NumHeroAvoidanceGrid  (line 2979, @0x0000000002835750, libserver.so)  // inlines: GetGridCountX, GetGridCountY, operator[]
// calls: DOTACommander
// callers: CDOTA_Bot::GetAvoidanceAmountForGrid
int __fastcall CDOTA_TeamCommander::NumHeroAvoidanceGrid(CDOTA_TeamCommander *const this, int iGridX, int iGridY)
{
  if ( iGridX < 0
    || iGridX >= DOTACommander()->m_iGridCount[0]
    || iGridY < 0
    || iGridY >= DOTACommander()->m_iGridCount[1] )
  {
    return 0;
  }
  else
  {
    return (this->m_AvoidanceGrid.m_Memory.m_pMemory[DOTACommander()->m_iGridCount[1] * iGridX + iGridY] & 0xF0) >> 4;
  }
}


// CDOTA_TeamCommander::OnSpawn  (line 2989, @0x0000000002835ec0, libserver.so)  // inlines: GetBotByIndex, GetGridCountY, GetGridFromLocation, GetOpposingTeamCommander, GetOpposingTeamNumber, GetTeamCommander, GetTeamNumber, operator[]
// calls: CDOTAGamerules::GetFountain, DOTACommander, CDOTA_TeamCommander::GetBaseLocation, CDOTA_Commander::GetGridFromLocation, CDOTA_Bot::ClearActions
// callers: CDOTA_Commander::OnSpawn
void __fastcall CDOTA_TeamCommander::OnSpawn(CDOTA_TeamCommander *const this, CDOTA_BaseNPC *pUnit)
{
  DOTATeam_t m_eTeam; // eax
  __int64 v5; // r14
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *p_m_Memory; // rbx
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_Commander *v9; // rax
  int v10; // eax
  CDOTA_Bot *m_pBot; // rdi
  int iLocX; // [rsp+28h] [rbp-48h] BYREF
  int iLocY; // [rsp+2Ch] [rbp-44h] BYREF
  Vector BaseLocation; // [rsp+30h] [rbp-40h] BYREF

  if ( CDOTAGamerules::GetFountain(g_pGameRules, pUnit->m_iTeamNum.m_Value) != 0 )
  {
    m_eTeam = this->m_eTeam;
    if ( m_eTeam != pUnit->m_iTeamNum.m_Value )
    {
      v5 = 0;
      p_m_Memory = &this->m_PotentialLocationGrid[0][0].m_Memory;
      while ( 1 )
      {
        if ( m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST )
          p_m_BadGuys = &DOTACommander()->m_BadGuys;
        else
          p_m_BadGuys = &DOTACommander()->m_GoodGuys;
        if ( p_m_BadGuys->m_BotList.m_Size <= v5 )
        {
          if ( pUnit->m_pBot != 0 )
            goto LABEL_5;
        }
        else if ( pUnit->m_pBot != p_m_BadGuys->m_BotList.m_Memory.m_pMemory[v5] )
        {
LABEL_5:
          ++v5;
          p_m_Memory = (p_m_Memory + 24);
          if ( v5 == 24 )
            break;
          goto LABEL_6;
        }
        if ( this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST )
          p_m_GoodGuys = &DOTACommander()->m_BadGuys;
        else
          p_m_GoodGuys = &DOTACommander()->m_GoodGuys;
        ++v5;
        p_m_Memory = (p_m_Memory + 24);
        BaseLocation = CDOTA_TeamCommander::GetBaseLocation(p_m_GoodGuys);
        v9 = DOTACommander();
        CDOTA_Commander::GetGridFromLocation(v9, &BaseLocation, &iLocX, &iLocY);
        iLocX /= 2;
        iLocY /= 2;
        v10 = DOTACommander()->m_iGridCount[1] / 2;
        *(*&p_m_Memory[-2].m_nAllocationCount + iLocY + v10 * iLocX) = -1;
        *(*&p_m_Memory[34].m_nAllocationCount + iLocY + iLocX * v10) = -1;
        if ( v5 == 24 )
          break;
LABEL_6:
        m_eTeam = this->m_eTeam;
      }
    }
  }
  m_pBot = pUnit->m_pBot;
  if ( m_pBot != 0 )
    CDOTA_Bot::ClearActions(m_pBot, 1, 1);
}


// CDOTA_TeamCommander::OnDeath  (line 3023, @0x000000000284f420, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, GrowMemory, Purge, RemoveAll, Reset, entindex, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetIncomingCourier, CDOTA_BaseNPC::FindAbilityByName, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Commander::OnDeath
// strings: "courier_return_to_base"
void __fastcall CDOTA_TeamCommander::OnDeath(CDOTA_TeamCommander *const this, CDOTA_BaseNPC *pUnit)
{
  CDOTA_Bot *m_pBot; // rdi
  CDOTA_Unit_Courier *IncomingCourier; // rax
  const CEntityInstance *v5; // r12
  CDOTABaseAbility *AbilityByName; // r14
  vec_t z; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CEntityIndex v9; // r12d
  CUnitOrders newOrders; // [rsp+0h] [rbp-60h] BYREF

  if ( pUnit != 0 )
  {
    m_pBot = pUnit->m_pBot;
    if ( m_pBot != 0 )
    {
      IncomingCourier = CDOTA_Bot::GetIncomingCourier(m_pBot);
      v5 = IncomingCourier;
      if ( IncomingCourier != 0 )
      {
        newOrders.m_nUnits.m_Size = 0;
        memset(&newOrders.m_nUnits.m_Memory, 0, 28);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(IncomingCourier, "courier_return_to_base", 0);
        newOrders.m_nOrderSequenceNumber = 0;
        newOrders.m_nIssuerPlayerIndex = -1;
        newOrders.m_vPosition.x = vec3_origin.x;
        newOrders.m_vPosition.y = vec3_origin.y;
        z = vec3_origin.z;
        vptr_IHandleEntity = pUnit->_vptr_IHandleEntity;
        newOrders.m_bQueue = 0;
        newOrders.m_vPosition.z = z;
        newOrders.m_nIssuerPlayerIndex = vptr_IHandleEntity[414](pUnit);
        v9.m_Data = CEntityInstance::GetEntityIndex(v5).m_Data;
        CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
        newOrders.m_nUnits.m_Size = 1;
        if ( newOrders.m_nUnits.m_Memory.m_pMemory != 0 )
          newOrders.m_nUnits.m_Memory.m_pMemory->m_Data = v9.m_Data;
        newOrders.m_nOrderType = 8;
        newOrders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(AbilityByName);
        DOTA_ExecuteOrders(&newOrders, 1, 0, 0);
        newOrders.m_nUnits.m_Size = 0;
        if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
          if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
        }
      }
    }
  }
}


// CDOTA_TeamCommander::OnHeroKill  (line 3048, @0x000000000283ace0, libserver.so)  // inlines: GetGameTime, GetTeamNumber
// calls: CDOTA_TeamCommander::AreAnyHumansOnTeam, CDOTA_TeamCommander::CountAliveHeroes, RandomFloat
// callers: CDOTA_Commander::OnHeroKill
void __fastcall CDOTA_TeamCommander::OnHeroKill(
        CDOTA_TeamCommander *const this,
        CDOTA_BaseNPC_Hero *pKillerHero,
        CDOTA_BaseNPC_Hero *pVictimHero)
{
  CDOTA_Bot *m_pBot; // rax
  float v5; // [rsp-1Ch] [rbp-1Ch]

  if ( pKillerHero != 0 && pVictimHero != 0 )
  {
    m_pBot = pKillerHero->m_pBot;
    if ( m_pBot != 0
      && m_pBot->m_bHuman
      && this->m_eTeam == pKillerHero->m_iTeamNum.m_Value
      && pKillerHero->m_iMultipleKillCount > 1
      && CDOTA_TeamCommander::AreAnyHumansOnTeam(this)
      && CDOTA_TeamCommander::CountAliveHeroes(this) > 4
      && RandomFloat(0.0, 1.0) <= 0.30000001 )
    {
      v5 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_fCongratulateHeroFlavorTextTime = RandomFloat(5.0, 10.0) + v5;
    }
  }
}


// CDOTA_TeamCommander::OnCourierCreated  (line 3078, @0x0000000002847580, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CDOTA_Commander::OnCourierCreated
void __fastcall CDOTA_TeamCommander::OnCourierCreated(CDOTA_TeamCommander *const this, CDOTA_BaseNPC *pCourier)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __int64 m_Size; // r12
  int v6; // eax
  CHandle<CBaseEntity> *v7; // rax
  int v8; // [rsp+0h] [rbp-20h]

  v8 = -1;
  if ( pCourier != 0 )
  {
    m_pEntity = pCourier->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  m_Size = this->m_hCouriers.m_Size;
  v6 = this->m_hCouriers.m_Size;
  if ( m_Size == this->m_hCouriers.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hCouriers.m_Memory, 1);
    v6 = this->m_hCouriers.m_Size;
  }
  this->m_hCouriers.m_Size = v6 + 1;
  v7 = &this->m_hCouriers.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
    v7->m_Index = v8;
}


// CDOTA_TeamCommander::OnRunePickup  (line 3085, @0x00000000028357d0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetRuneSpawner, GetSerialNumber, GetSpawner, IndexToIdentity, IsValidIndex, LookupEntity, Set, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible, CEntityHandle::operator CEntityInstance*
// callers: CDOTA_Commander::OnRunePickup
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_TeamCommander::OnRunePickup(CDOTA_TeamCommander *const this, CDOTA_Item_Rune *pRune)
{
  const Vector *AbsOrigin; // rax
  unsigned int v5; // esi
  int v6; // eax
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // r8
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CEntityInstance *v11; // rcx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v16; // cx
  unsigned __int16 v17; // [rsp+10h] [rbp-20h]

  AbsOrigin = CBaseEntity::GetAbsOrigin(pRune);
  if ( !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, this->m_eTeam, AbsOrigin, 0.0) )
    return;
  if ( *&g_pGameRules[53].m_szQuestName[88] > 0 )
  {
    v14 = CEntityHandle::operator CEntityInstance *(*&g_pGameRules[53].m_szQuestName[96]);
    v17 = -1;
    if ( v14 != 0 )
    {
      m_pEntity = v14->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v16 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v6 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
        v17 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
        v5 = v6 + 2;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v17 = -1;
  }
  v5 = 1;
  v6 = -1;
LABEL_5:
  m_Index = pRune->m_hRuneSpawner.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  v11 = 0;
  if ( v5 > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v17 >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[v17 & 0x1FF];
      if ( v13 != 0 && v6 == v13->m_EHandle.m_Index )
        v11 = v13->m_pInstance;
    }
  }
  this->m_iRuneStatus.m_Memory[m_pInstance != v11] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING;
}


// CDOTA_TeamCommander::OnRuneSpawn  (line 3096, @0x0000000002835980, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: CDOTA_Commander::OnRuneSpawn
void __fastcall CDOTA_TeamCommander::OnRuneSpawn(CDOTA_TeamCommander *const this)
{
  CGameRules *v1; // rax
  float v2; // xmm0_4

  this->m_iRuneTypes.m_Memory[0] = -1;
  this->m_iRuneStatus.m_Memory[0] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_AVAILABLE;
  v1 = g_pGameRules;
  v2 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_iRuneTypes.m_Memory[1] = -1;
  this->m_iRuneStatus.m_Memory[1] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_AVAILABLE;
  this->m_fLastSeenRuneTime.m_Memory[0] = v2;
  this->m_fLastSeenRuneTime.m_Memory[1] = *&v1[18].m_szQuestName[20];
}


// CDOTA_TeamCommander::ChatMessageRequest  (line 3110, @0x0000000002865be0, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_BotChat_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, DOTAGameRules, FindGameEvent<CDOTAUserMsg_BotChat_t>, FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>, GetFloat, IsElapsed, NetworkStateChanged, PostEvent<CDOTAUserMsg_BotChat_t>, SendUserMessage<CDOTAUserMsg_BotChat_t>, Set, Start, assign, length, operator=<float>, set_has_message, set_has_player_id, set_has_target, set_message, set_player_id, set_target, set_team_only, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_BotChat_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CountdownTimer::Now, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CBaseEntity::GetTeam, CRecipientFilter::RemoveRecipientsNotOnTeam, CDOTAUserMsg_BotChat::CDOTAUserMsg_BotChat, strlen, std::string::assign(char const*,ulong), CDOTAUserMsg_BotChat::~CDOTAUserMsg_BotChat, CRecipientFilter::~CRecipientFilter, __stack_chk_fail (13 total)
// callers: CDOTA_BotMode_Attack::OnStart, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Roam::OnEnd, CDOTA_BotMode_Retreat::OnStart, CDOTA_BotMode_Roshan::OnEnd, CDOTA_BotMode_Roam::Think, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_Roshan::Think, CDOTA_BotMode_TeamRoam::Think, CDOTA_TeamCommander::CommanderChatMessageRequest, CDOTA_TeamCommander::UpdateGlyphUsage
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>(bool)::s_hEvent
void __fastcall CDOTA_TeamCommander::ChatMessageRequest(
        CDOTA_TeamCommander *const this,
        CDOTAPlayer *pPlayer,
        const char *pszMessage,
        const char *pszTarget,
        bool bTeamOnly,
        bool bImportant)
{
  double v11; // xmm0_8
  double v12; // xmm1_8
  CTeam *Team; // rax
  size_t v14; // rax
  size_t v15; // rax
  __int64 v16; // r13
  IGameEventSystem *v17; // rbx
  void (__fastcall *v18)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r14
  float v19; // [rsp+Ch] [rbp-1B4h]
  const CountdownTimer *p_m_ChatThrottleTimer; // [rsp+10h] [rbp-1B0h]
  float m_fValue; // [rsp+18h] [rbp-1A8h]
  _QWORD v22[2]; // [rsp+20h] [rbp-1A0h] BYREF
  int v23; // [rsp+30h] [rbp-190h]
  std::string *v24; // [rsp+38h] [rbp-188h]
  int v25; // [rsp+40h] [rbp-180h]
  bool v26; // [rsp+44h] [rbp-17Ch]
  std::string *v27; // [rsp+48h] [rbp-178h]
  CReliableBroadcastRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v29; // [rsp+188h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  if ( g_pGameRules != 0 && pPlayer != 0 )
  {
    if ( bImportant )
    {
      p_m_ChatThrottleTimer = &this->m_ChatThrottleTimer;
    }
    else
    {
      p_m_ChatThrottleTimer = &this->m_ChatThrottleTimer;
      if ( this->m_ChatThrottleTimer.m_timestamp.m_Value > 0.0
        && CountdownTimer::Now(&this->m_ChatThrottleTimer) < this->m_ChatThrottleTimer.m_timestamp.m_Value )
      {
        return;
      }
    }
    m_fValue = dota_bot_chat_throttle_duration.m_pParent->m_Value.m_fValue;
    *&v11 = CountdownTimer::Now(p_m_ChatThrottleTimer) + m_fValue;
    if ( *&v11 != this->m_ChatThrottleTimer.m_timestamp.m_Value )
    {
      v19 = *&v11;
      (*(this->m_ChatThrottleTimer._vptr_CountdownTimer + 2))(p_m_ChatThrottleTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v11 = LODWORD(v19);
      this->m_ChatThrottleTimer.m_timestamp.m_Value = v19;
    }
    if ( m_fValue != this->m_ChatThrottleTimer.m_duration.m_Value )
    {
      (*(this->m_ChatThrottleTimer._vptr_CountdownTimer + 2))(
        p_m_ChatThrottleTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v11,
        v12,
        m_fValue);
      this->m_ChatThrottleTimer.m_duration.m_Value = m_fValue;
    }
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    if ( bTeamOnly )
    {
      Team = CBaseEntity::GetTeam(pPlayer);
      CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, Team);
    }
    CDOTAUserMsg_BotChat::CDOTAUserMsg_BotChat(v22);
    v22[0] = off_42B8D70;
    v25 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
    v26 = bTeamOnly;
    v23 |= 0xBu;
    v14 = strlen(pszMessage);
    std::string::assign(v24, pszMessage, v14);
    v23 |= 4u;
    v15 = strlen(pszTarget);
    std::string::assign(v27, pszTarget, v15);
    v16 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>(bool)::s_hEvent;
    v17 = g_pGameEventSystem;
    v18 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_BotChat_t>(bool)::s_hEvent);
    v18(v17, 0, 0, &filter, v16, v22, 48);
    v22[0] = &off_42B8BF0;
    CDOTAUserMsg_BotChat::~CDOTAUserMsg_BotChat(v22);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CDOTA_TeamCommander::CommanderChatMessageRequest  (line 3134, @0x0000000002866400, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_Bot*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, IndexToIdentity, IsRealHero, IsValid, LookupEntity, Purge, Random, RemoveAll, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayer, CEntityHandle::operator CEntityInstance*, RandomInt, CDOTA_TeamCommander::ChatMessageRequest, CUtlMemory<CDOTA_Bot*, int>::Purge, CUtlMemory<CDOTA_Bot*, int>::Grow, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_TeamCommander::GoodLuckFlavorTextThink, CDOTA_TeamCommander::TeamfightFlavorTextThink, CDOTA_TeamCommander::CongratulateFlavorTextThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_TeamCommander::CommanderChatMessageRequest(
        CDOTA_TeamCommander *const this,
        const char *pszMessage,
        const char *pszTarget,
        bool bTeamOnly,
        bool bImportant)
{
  CDOTA_Bot **m_pMemory; // r12
  CDOTA_Bot **v6; // r13
  CDOTA_Bot *v7; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // rax
  int m_Size; // eax
  CDOTA_Bot **v13; // rax
  int v14; // eax
  CDOTAPlayer *Player; // rax
  int v21; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > vecPotentialBots; // [rsp+30h] [rbp-50h] BYREF

  m_pMemory = this->m_BotList.m_Memory.m_pMemory;
  vecPotentialBots.m_Size = 0;
  v6 = &m_pMemory[this->m_BotList.m_Size];
  vecPotentialBots.m_Memory.m_pMemory = 0;
  vecPotentialBots.m_Memory.m_nAllocationCount = 0;
  vecPotentialBots.m_Memory.m_nGrowSize = 0;
  if ( m_pMemory == v6 )
    goto LABEL_32;
  do
  {
    while ( 1 )
    {
      v7 = *m_pMemory;
      if ( *m_pMemory != 0 )
      {
        m_Index = v7->m_hUnit.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_hUnit.m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[v7->m_hUnit.m_Index & 0x1FF];
            if ( v10 != 0
              && m_Index == v10->m_EHandle.m_Index
              && v10->m_pInstance != 0
              && BYTE3(v10->m_pInstance[7]._vptr_IHandleEntity) != 0
              && CDOTA_Bot::GetPlayer(*m_pMemory) != 0
              && !v7->m_bHuman )
            {
              v11 = CEntityHandle::operator CEntityInstance *(&v7->m_hUnit);
              if ( v11 == 0 || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
                v11 = 0;
              if ( (v11[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(v11[71].m_pEntity) == 0 )
              {
                m_Size = vecPotentialBots.m_Size;
                v21 = vecPotentialBots.m_Size;
                if ( vecPotentialBots.m_Size == vecPotentialBots.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CDOTA_Bot *,int>::Grow(&vecPotentialBots.m_Memory, 1);
                  m_Size = vecPotentialBots.m_Size;
                }
                vecPotentialBots.m_Size = m_Size + 1;
                v13 = &vecPotentialBots.m_Memory.m_pMemory[v21];
                if ( v13 != 0 )
                  break;
              }
            }
          }
        }
      }
      if ( v6 == ++m_pMemory )
        goto LABEL_21;
    }
    ++m_pMemory;
    *v13 = v7;
  }
  while ( v6 != m_pMemory );
LABEL_21:
  if ( vecPotentialBots.m_Size == 0 )
  {
LABEL_32:
    if ( (vecPotentialBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Bot *,int>::Purge(&vecPotentialBots.m_Memory);
      if ( (vecPotentialBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_26;
    }
  }
  else
  {
    v14 = RandomInt(0, (vecPotentialBots.m_Size - 1));
    Player = CDOTA_Bot::GetPlayer(vecPotentialBots.m_Memory.m_pMemory[v14]);
    CDOTA_TeamCommander::ChatMessageRequest(this, Player, pszMessage, pszTarget, bTeamOnly, bImportant);
    if ( (vecPotentialBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Bot *,int>::Purge(&vecPotentialBots.m_Memory);
      if ( (vecPotentialBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_26:
        CUtlMemory<CDOTA_Bot *,int>::Purge(&vecPotentialBots.m_Memory);
    }
  }
}


// CDOTA_TeamCommander::GetLocationFromGrid  (line 3161, @0x00000000028359e0, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetLocationFromGrid
// callers: CDOTA_Bot::FindAvoidLocation, CDOTA_BotAction_MoveTo::GeneratePathWaypoints, CDOTA_BotAction_MoveTo::Think
Vector __fastcall CDOTA_TeamCommander::GetLocationFromGrid(CDOTA_TeamCommander *const this, int x, int y)
{
  CDOTA_Commander *v5; // rax

  v5 = DOTACommander();
  return CDOTA_Commander::GetLocationFromGrid(v5, x, y);
}


// CDOTA_TeamCommander::GetGridFromLocation  (line 3168, @0x0000000002835a10, libserver.so)
// calls: DOTACommander, CDOTA_Commander::GetGridFromLocation
// callers: CDOTA_Bot::GetAvoidanceAmountForLocation, CDOTA_Bot::FindAvoidLocation
void __fastcall CDOTA_TeamCommander::GetGridFromLocation(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc,
        int *pX,
        int *pY)
{
  CDOTA_Commander *v7; // rax

  v7 = DOTACommander();
  CDOTA_Commander::GetGridFromLocation(v7, vLoc, pX, pY);
}


// CDOTA_TeamCommander::GetGridSizeX  (line 3175, @0x0000000002835a50, libserver.so)  // inlines: GetGridSizeX
// calls: DOTACommander
// callers: CDOTA_Bot::FindAvoidLocation
float __fastcall CDOTA_TeamCommander::GetGridSizeX(CDOTA_TeamCommander *const this)
{
  CDOTA_Commander *v1; // rax

  v1 = DOTACommander();
  return (v1->m_vWorldBounds[1].x - v1->m_vWorldBounds[0].x) / v1->m_iGridCount[0];
}


// CDOTA_TeamCommander::GetGridSizeY  (line 3182, @0x0000000002835a80, libserver.so)  // inlines: GetGridSizeY
// calls: DOTACommander
// callers: CDOTA_Bot::FindAvoidLocation
float __fastcall CDOTA_TeamCommander::GetGridSizeY(CDOTA_TeamCommander *const this)
{
  CDOTA_Commander *v1; // rax

  v1 = DOTACommander();
  return (v1->m_vWorldBounds[1].y - v1->m_vWorldBounds[0].y) / v1->m_iGridCount[1];
}


// CDOTA_TeamCommander::GetGridCountX  (line 3189, @0x0000000002835ab0, libserver.so)
// calls: DOTACommander
// callers: CDOTA_Bot::GetAvoidanceAmountForGrid, CDOTA_Bot::FindAvoidLocation
int __fastcall CDOTA_TeamCommander::GetGridCountX(CDOTA_TeamCommander *const this)
{
  return DOTACommander()->m_iGridCount[0];
}


// CDOTA_TeamCommander::GetGridCountY  (line 3196, @0x0000000002835ad0, libserver.so)
// calls: DOTACommander
// callers: CDOTA_Bot::GetAvoidanceAmountForGrid, CDOTA_Bot::FindAvoidLocation
int __fastcall CDOTA_TeamCommander::GetGridCountY(CDOTA_TeamCommander *const this)
{
  return DOTACommander()->m_iGridCount[1];
}


// CDOTA_TeamCommander::FindCurrentLane  (line 3203, @0x0000000002835c00, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::FindClosestLane
// callers: CDOTA_Bot::UpdateCurrentLane
void __fastcall CDOTA_TeamCommander::FindCurrentLane(
        CDOTA_TeamCommander *const this,
        CDOTA_BaseNPC *pUnit,
        DOTA_LANE *pLane,
        float *pAmt)
{
  const Vector *AbsOrigin; // rax

  AbsOrigin = CBaseEntity::GetAbsOrigin(pUnit);
  CDOTA_TeamCommander::FindClosestLane(this, AbsOrigin, 1200.0, pLane, pAmt);
}


// CDOTA_TeamCommander::CalculateAmountAlongLane  (line 3213, @0x000000000282a2b0, libserver.so)  // inlines: CEntityHandle, CHandle, DotProduct, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLaneNode, IndexToIdentity, Length2D, Length2DSqr, LookupEntity, Normalized, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator-
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, VectorNormalize, sqrtf
// callers: CDOTA_TeamCommander::CalculateAmountAlongLane, CDOTA_TeamCommander::FindClosestLane, CDOTA_BotMode_SideShop::GetDesire, CDOTA_TeamCommander::CalculateLaneFronts
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_TeamCommander::CalculateAmountAlongLane(
        CDOTA_TeamCommander *const this,
        DOTA_LANE lane,
        const Vector *const vLoc,
        float *pAmountAlongLane,
        float *pDistanceToLane)
{
  __int64 v7; // rbx
  const CBaseEntity *v8; // r13
  const CBaseEntity *v9; // r12
  int v10; // ebx
  const Vector *AbsOrigin; // r15
  const Vector *v12; // rax
  const Vector *v13; // rax
  const Vector *v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm6_4
  float v18; // xmm5_4
  const Vector *v19; // rax
  float v20; // xmm5_4
  float v21; // xmm1_4
  vec_t v22; // ecx
  unsigned int v23; // eax
  CEntityIdentity *v24; // rax
  CEntityIdentity *v25; // rax
  const CBaseEntity *m_pInstance; // rax
  float v27; // xmm6_4
  float v28; // xmm0_4
  const Vector *v29; // rax
  __int64 lanea; // [rsp+8h] [rbp-98h]
  float fDistanceAlongLane; // [rsp+34h] [rbp-6Ch]
  vec_t *p_m_Index; // [rsp+38h] [rbp-68h]
  float fDistanceToLane; // [rsp+40h] [rbp-60h]
  float v37; // [rsp+44h] [rbp-5Ch]
  float v38; // [rsp+48h] [rbp-58h]
  float v39; // [rsp+4Ch] [rbp-54h]
  float v40; // [rsp+4Ch] [rbp-54h]
  float vStartToLoc; // [rsp+50h] [rbp-50h]
  float vStartToLoca; // [rsp+50h] [rbp-50h]
  float vStartToLoc_4; // [rsp+54h] [rbp-4Ch]
  float vStartToLoc_4a; // [rsp+54h] [rbp-4Ch]
  float vStartToLoc_8; // [rsp+58h] [rbp-48h]
  float vStartToLoc_8a; // [rsp+58h] [rbp-48h]
  float vStartToLoc_8b; // [rsp+58h] [rbp-48h]
  float fCurDistanceAlongLane; // [rsp+5Ch] [rbp-44h]
  Vector v49[5]; // [rsp+60h] [rbp-40h] BYREF

  v7 = lane;
  lanea = lane;
  LODWORD(v49[0].x) = this->m_LaneNodes[v7][0].m_Index;
  v8 = CEntityHandle::operator CEntityInstance *(v49);
  LODWORD(v49[0].x) = this->m_LaneNodes[v7][1].m_Index;
  v9 = CEntityHandle::operator CEntityInstance *(v49);
  if ( v9 != 0 && v8 != 0 )
  {
    fDistanceAlongLane = 0.0;
    p_m_Index = &this->m_LaneNodes[v7][2].m_Index;
    v10 = 1;
    fDistanceToLane = 1.0e10;
    fCurDistanceAlongLane = 0.0;
    while ( 1 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
      v12 = CBaseEntity::GetAbsOrigin(v9);
      v37 = v12->x - AbsOrigin->x;
      vStartToLoc_8 = v12->y - AbsOrigin->y;
      v38 = v12->z - AbsOrigin->z;
      v13 = CBaseEntity::GetAbsOrigin(v8);
      v39 = vLoc->x - v13->x;
      vStartToLoc = vLoc->y - v13->y;
      vStartToLoc_4 = vLoc->z - v13->z;
      v14 = CBaseEntity::GetAbsOrigin(v9);
      v15 = vStartToLoc_8;
      v16 = v39;
      v17 = vStartToLoc;
      v18 = fsqrt((v37 * v37) + (v15 * v15)) + fCurDistanceAlongLane;
      if ( (((v37 * v39) + (vStartToLoc_8 * vStartToLoc)) + (v38 * vStartToLoc_4)) < 0.0 )
      {
        vStartToLoc_8b = v18;
        v29 = CBaseEntity::GetAbsOrigin(v8);
        v20 = vStartToLoc_8b;
        v21 = ((v29->x - vLoc->x) * (v29->x - vLoc->x)) + ((v29->y - vLoc->y) * (v29->y - vLoc->y));
      }
      else if ( ((((vLoc->x - v14->x) * v37) + ((vLoc->y - v14->y) * vStartToLoc_8)) + ((vLoc->z - v14->z) * v38)) <= 0.0 )
      {
        v40 = v18;
        vStartToLoca = vStartToLoc_4;
        vStartToLoc_4a = v17;
        vStartToLoc_8a = v16;
        v49[0].x = v37;
        v49[0].z = v38;
        v49[0].y = v15;
        VectorNormalize(v49);
        v20 = v40;
        v28 = ((vStartToLoc_8a * v49[0].x) + (vStartToLoc_4a * v49[0].y)) + (vStartToLoca * v49[0].z);
        fCurDistanceAlongLane = v28 + fCurDistanceAlongLane;
        v21 = ((vStartToLoc_8a - (v49[0].x * v28)) * (vStartToLoc_8a - (v49[0].x * v28)))
            + ((vStartToLoc_4a - (v49[0].y * v28)) * (vStartToLoc_4a - (v49[0].y * v28)));
      }
      else
      {
        fCurDistanceAlongLane = v18;
        v19 = CBaseEntity::GetAbsOrigin(v9);
        v20 = fCurDistanceAlongLane;
        v21 = ((v19->x - vLoc->x) * (v19->x - vLoc->x)) + ((v19->y - vLoc->y) * (v19->y - vLoc->y));
      }
      if ( fDistanceToLane <= v21 )
      {
        v21 = fDistanceToLane;
        fCurDistanceAlongLane = fDistanceAlongLane;
      }
      if ( ++v10 > 8 )
        break;
      v22 = *p_m_Index;
      v23 = *p_m_Index + 2;
      v49[0].x = *p_m_Index;
      if ( v23 <= 1 )
        break;
      v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v49[0].x) >> 9) & 0x3F];
      if ( v24 == 0 )
        break;
      v25 = &v24[LOWORD(v49[0].x) & 0x1FF];
      if ( v25 == 0 )
        break;
      if ( LODWORD(v22) != v25->m_EHandle.m_Index )
        break;
      ++p_m_Index;
      m_pInstance = v25->m_pInstance;
      if ( m_pInstance == 0 )
        break;
      v27 = fCurDistanceAlongLane;
      v8 = v9;
      fDistanceToLane = v21;
      fCurDistanceAlongLane = v20;
      v9 = m_pInstance;
      fDistanceAlongLane = v27;
    }
  }
  else
  {
    v21 = 1.0e10;
    fCurDistanceAlongLane = 0.0;
  }
  *pAmountAlongLane = fCurDistanceAlongLane / this->m_LaneLengths[lanea];
  if ( pDistanceToLane != 0 )
    *pDistanceToLane = fsqrt(v21);
}


// CDOTA_TeamCommander::CalculateAmountAlongLane  (line 3213, @0x0000000002835af0, libserver.so)
// calls: CDOTA_TeamCommander::CalculateAmountAlongLane
// callers: CDOTA_Commander::ActiveSpawnGroupChanged, CDOTA_BotMode_Roam_Human::GetDesire, CDOTA_BotMode_PushTower::Think
void __fastcall CDOTA_TeamCommander::CalculateAmountAlongLane(
        CDOTA_TeamCommander *const this,
        DOTA_LANE lane,
        const Vector *const vLoc,
        float *pAmountAlongLane,
        float *pDistanceToLane)
{
  if ( lane != DOTA_LANE::DOTA_LANE_NONE )
  {
    CDOTA_TeamCommander::CalculateAmountAlongLane(this, lane, vLoc, pAmountAlongLane, pDistanceToLane);
  }
  else
  {
    *pAmountAlongLane = 0.0;
    if ( pDistanceToLane != 0 )
      *pDistanceToLane = 0.0;
  }
}


// CDOTA_TeamCommander::CalculateLocationAlongLane  (line 3293, @0x0000000002837e40, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLaneNode, GetUnit, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator*, operator+, operator-, operator->, operator=
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_TeamCommander::FindLeastOccupiedLocationInOBB, RandomFloat
// callers: CDOTA_BotMode_DefendTower::CalculateDesiredLocation, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Roam::CalculateDesiredLocation, CDOTA_BotMode_Farm::CalculateDesiredLocation, CDOTA_BotMode_Laning::CalculateDesiredLocation, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_PushTower::Think, Script_GetLocationAlongLane, CDOTA_TeamCommander::GetLaneFrontLocation, Script_GetLaneFrontLocation, CDOTA_TeamCommander::CLaningSpeech::Think, CDOTA_TeamCommander::UpdateFarmLaneDesires (14 total)
// globals: CEntityHandle::gm_pEntityList
__m128i __fastcall CDOTA_TeamCommander::CalculateLocationAlongLane(
        CDOTA_TeamCommander *const this,
        DOTA_LANE lane,
        float fAmountAlongLane,
        float fDistanceDelta,
        float fWidthOffsetRange,
        CDOTA_Bot *pBotForAvoidance)
{
  __int64 v8; // rdx
  uint32 m_Index; // eax
  float v10; // xmm6_4
  uint32 v11; // ecx
  CConcreteEntityList *v12; // rdx
  CEntityIdentity *v13; // rdi
  CEntityIdentity *v14; // rdi
  unsigned int v15; // ebx
  CHandle<CBaseEntity> *v16; // r12
  __int16 v17; // di
  int v18; // esi
  CEntityIdentity *v19; // rsi
  CEntityIdentity *v20; // rsi
  CEntityIdentity *v22; // rsi
  CEntityIdentity *v23; // rsi
  CEntityInstance *v24; // rax
  const CBaseEntity *v25; // rdi
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v30; // rdi
  float *p_x; // r15
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx
  const Vector *v34; // rax
  float v35; // xmm1_4
  float v36; // xmm0_4
  uint32 v37; // edx
  const CBaseEntity *v38; // rax
  const Vector *v39; // r12
  const CBaseEntity *v40; // rax
  const Vector *v41; // rax
  const CBaseEntity *v42; // rax
  const Vector *v43; // rax
  vec_t v44; // xmm2_4
  vec_t v45; // xmm0_4
  const CBaseEntity *v46; // rax
  const Vector *v47; // r12
  const CBaseEntity *v48; // rax
  const Vector *v49; // rax
  vec_t v50; // xmm1_4
  vec_t v51; // xmm0_4
  EHANDLE *p_m_hUnit; // r14
  CEntityInstance *v53; // rax
  const CBaseEntity *v54; // rdi
  const Vector *v55; // rax
  float v56; // xmm2_4
  float v57; // xmm3_4
  float v58; // xmm0_4
  float v59; // xmm0_4
  float y; // [rsp+0h] [rbp-D0h]
  float v61; // [rsp+4h] [rbp-CCh]
  float vForwardVariation; // [rsp+14h] [rbp-BCh]
  float vForwardVariationb; // [rsp+14h] [rbp-BCh]
  float vForwardVariationa; // [rsp+14h] [rbp-BCh]
  float vForwardVariationc; // [rsp+14h] [rbp-BCh]
  float fNodeDistAlongLane; // [rsp+18h] [rbp-B8h]
  float fNodeDistAlongLaneb; // [rsp+18h] [rbp-B8h]
  __int64 fNodeDistAlongLanea; // [rsp+18h] [rbp-B8h]
  float fNodeDistAlongLanec; // [rsp+18h] [rbp-B8h]
  float fAmountAlongSegment; // [rsp+1Ch] [rbp-B4h]
  float fAmountAlongSegmenta; // [rsp+1Ch] [rbp-B4h]
  float fAmountAlongSegmentb; // [rsp+1Ch] [rbp-B4h]
  EHANDLE hNode; // [rsp+30h] [rbp-A0h] BYREF
  EHANDLE hNextNode; // [rsp+40h] [rbp-90h] BYREF
  Vector vTargetLoc; // [rsp+50h] [rbp-80h] BYREF
  Vector vBackwardsDir; // [rsp+60h] [rbp-70h] BYREF
  Vector vHeight; // [rsp+70h] [rbp-60h] BYREF
  Vector vWidth; // [rsp+80h] [rbp-50h] BYREF
  __m128i v80; // [rsp+90h] [rbp-40h] BYREF

  v8 = lane;
  m_Index = this->m_LaneNodes[v8][0].m_Index;
  v10 = fAmountAlongLane * this->m_LaneLengths[lane];
  hNode.m_Index = m_Index;
  v11 = m_Index + 2;
  vForwardVariation = fDistanceDelta + v10;
  hNextNode.m_Index = this->m_LaneNodes[v8][1].m_Index;
  v12 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1 )
  {
LABEL_11:
    v80.m128i_i64[0] = 0;
    v80.m128i_i32[2] = 0;
    return _mm_loadl_epi64(&v80);
  }
  v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hNode.m_Index) >> 9) & 0x3F];
  if ( v13 == 0
    || (v14 = &v13[hNode.m_Index & 0x1FF]) == 0
    || m_Index != v14->m_EHandle.m_Index
    || vForwardVariation >= 0.0 )
  {
    v15 = 1;
    v16 = &this->m_LaneNodes[lane][2];
    for ( fNodeDistAlongLane = 0.0; ; fNodeDistAlongLane = fNodeDistAlongLane + v36 )
    {
      if ( m_Index == -1 )
      {
        v18 = 63;
        v17 = 0x7FFF;
      }
      else
      {
        v17 = hNode.m_Index & 0x7FFF;
        v18 = (hNode.m_Index & 0x7FFF) >> 9;
      }
      v19 = v12->m_pIdentityChunks[v18];
      if ( v19 == 0 )
        goto LABEL_11;
      v20 = &v19[v17 & 0x1FF];
      if ( v20 == 0 || m_Index != v20->m_EHandle.m_Index )
        goto LABEL_11;
      if ( hNextNode.m_Index + 2 <= 1 )
        goto LABEL_20;
      v22 = v12->m_pIdentityChunks[(LOWORD(hNextNode.m_Index) >> 9) & 0x3F];
      if ( v22 == 0 )
        goto LABEL_20;
      v23 = &v22[hNextNode.m_Index & 0x1FF];
      if ( v23 == 0 || hNextNode.m_Index != v23->m_EHandle.m_Index )
        goto LABEL_20;
      m_pInstance = 0;
      if ( v11 > 1 )
      {
        v27 = v12->m_pIdentityChunks[(LOWORD(hNode.m_Index) >> 9) & 0x3F];
        if ( v27 != 0 )
        {
          v28 = &v27[hNode.m_Index & 0x1FF];
          if ( v28 != 0 )
          {
            if ( v28->m_EHandle.m_Index == m_Index )
              m_pInstance = v28->m_pInstance;
          }
          else
          {
            m_pInstance = 0;
          }
        }
      }
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      v30 = 0;
      p_x = &AbsOrigin->x;
      if ( hNextNode.m_Index + 2 > 1 )
      {
        v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hNextNode.m_Index) >> 9) & 0x3F];
        if ( v32 != 0 )
        {
          v33 = &v32[hNextNode.m_Index & 0x1FF];
          if ( v33 != 0 && hNextNode.m_Index == v33->m_EHandle.m_Index )
            v30 = v33->m_pInstance;
        }
      }
      v34 = CBaseEntity::GetAbsOrigin(v30);
      v35 = v34->y - p_x[1];
      v36 = fsqrt(((v34->x - *p_x) * (v34->x - *p_x)) + (v35 * v35));
      if ( vForwardVariation >= fNodeDistAlongLane && (fNodeDistAlongLane + v36) > vForwardVariation )
        break;
      m_Index = hNextNode.m_Index;
      ++v15;
      v37 = -1;
      hNode.m_Index = hNextNode.m_Index;
      if ( v15 <= 8 )
        v37 = v16->m_Index;
      v11 = hNextNode.m_Index + 2;
      ++v16;
      hNextNode.m_Index = v37;
      v12 = CEntityHandle::gm_pEntityList;
      if ( m_Index + 2 <= 1 )
        goto LABEL_11;
    }
    fAmountAlongSegment = (vForwardVariation - fNodeDistAlongLane) / v36;
    v38 = CEntityHandle::operator CEntityInstance *(&hNode);
    v39 = CBaseEntity::GetAbsOrigin(v38);
    v40 = CEntityHandle::operator CEntityInstance *(&hNextNode);
    v41 = CBaseEntity::GetAbsOrigin(v40);
    vForwardVariationb = (v41->x - v39->x) * fAmountAlongSegment;
    fNodeDistAlongLaneb = (v41->y - v39->y) * fAmountAlongSegment;
    fAmountAlongSegmenta = (v41->z - v39->z) * fAmountAlongSegment;
    v42 = CEntityHandle::operator CEntityInstance *(&hNode);
    v43 = CBaseEntity::GetAbsOrigin(v42);
    v44 = vForwardVariationb + v43->x;
    v45 = fAmountAlongSegmenta + v43->z;
    vTargetLoc.y = fNodeDistAlongLaneb + v43->y;
    vTargetLoc.x = v44;
    vTargetLoc.z = v45;
    fNodeDistAlongLanea = *&vec3_origin.x;
    vForwardVariationa = vec3_origin.z;
    if ( fWidthOffsetRange > 0.0 )
    {
      v46 = CEntityHandle::operator CEntityInstance *(&hNextNode);
      v47 = CBaseEntity::GetAbsOrigin(v46);
      v48 = CEntityHandle::operator CEntityInstance *(&hNode);
      v49 = CBaseEntity::GetAbsOrigin(v48);
      v50 = v49->x - v47->x;
      v51 = v49->y - v47->y;
      vBackwardsDir.z = 0.0;
      vBackwardsDir.x = v50;
      vBackwardsDir.y = v51;
      VectorNormalize(&vBackwardsDir);
      if ( pBotForAvoidance == 0 )
      {
        v61 = -vBackwardsDir.x;
        y = vBackwardsDir.y;
        v58 = RandomFloat(-fWidthOffsetRange, fWidthOffsetRange);
        fNodeDistAlongLanec = (vBackwardsDir.x * v58) * 0.25;
        fAmountAlongSegmentb = (vBackwardsDir.y * v58) * 0.25;
        vForwardVariationc = 0.25 * (v58 * vBackwardsDir.z);
        v59 = RandomFloat(-fWidthOffsetRange, fWidthOffsetRange);
        *&fNodeDistAlongLanea = fNodeDistAlongLanec + (y * v59);
        *(&fNodeDistAlongLanea + 1) = (v61 * v59) + fAmountAlongSegmentb;
        vForwardVariationa = (v59 * 0.0) + vForwardVariationc;
        goto LABEL_51;
      }
      vWidth.y = -vBackwardsDir.x * fWidthOffsetRange;
      vWidth.z = 0.0 * fWidthOffsetRange;
      vWidth.x = vBackwardsDir.y * fWidthOffsetRange;
      vHeight.x = (vBackwardsDir.x * fWidthOffsetRange) * 0.25;
      vHeight.z = (fWidthOffsetRange * vBackwardsDir.z) * 0.25;
      vHeight.y = 0.25 * (vBackwardsDir.y * fWidthOffsetRange);
      *v80.m128i_i8 = CDOTA_TeamCommander::FindLeastOccupiedLocationInOBB(
                        this,
                        &vTargetLoc,
                        &vHeight,
                        &vWidth,
                        pBotForAvoidance);
      vForwardVariationa = *&v80.m128i_i32[2];
      fNodeDistAlongLanea = v80.m128i_i64[0];
    }
    if ( pBotForAvoidance != 0 )
    {
      p_m_hUnit = &pBotForAvoidance->m_hUnit;
      v53 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
        v54 = v53;
      else
        v54 = 0;
      v55 = CBaseEntity::GetAbsOrigin(v54);
      v56 = *(&fNodeDistAlongLanea + 1) + vTargetLoc.y;
      v57 = *&fNodeDistAlongLanea + vTargetLoc.x;
      if ( fsqrt(
             (((*&fNodeDistAlongLanea + vTargetLoc.x) - v55->x) * ((*&fNodeDistAlongLanea + vTargetLoc.x) - v55->x))
           + (((*(&fNodeDistAlongLanea + 1) + vTargetLoc.y) - v55->y)
            * ((*(&fNodeDistAlongLanea + 1) + vTargetLoc.y) - v55->y))) < 150.0 )
      {
        v24 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
        if ( v24 == 0 || BYTE3(v24[7]._vptr_IHandleEntity) == 0 )
        {
          v25 = 0;
          goto LABEL_22;
        }
        goto LABEL_21;
      }
LABEL_52:
      v80.m128i_i64[0] = __PAIR64__(LODWORD(v56), LODWORD(v57));
      *&v80.m128i_i32[2] = vForwardVariationa + vTargetLoc.z;
      return _mm_loadl_epi64(&v80);
    }
LABEL_51:
    v57 = *&fNodeDistAlongLanea + vTargetLoc.x;
    v56 = *(&fNodeDistAlongLanea + 1) + vTargetLoc.y;
    goto LABEL_52;
  }
LABEL_20:
  v24 = CEntityHandle::operator CEntityInstance *(&hNode);
LABEL_21:
  v25 = v24;
LABEL_22:
  *v80.m128i_i8 = *CBaseEntity::GetAbsOrigin(v25);
  return _mm_loadl_epi64(&v80);
}


// CDOTA_TeamCommander::FindClosestLane  (line 3375, @0x0000000002835b20, libserver.so)  // inlines: CalculateAmountAlongLane
// calls: CDOTA_TeamCommander::CalculateAmountAlongLane
// callers: CDOTAPlayer::SendChatWheelMessage, CDOTA_Bot::Think, CDOTA_TeamCommander::FindCurrentLane, CDOTA_TeamCommander::BuildDebugString, CDOTA_TeamCommander::CalculateLaneFronts
void __fastcall CDOTA_TeamCommander::FindClosestLane(
        CDOTA_TeamCommander *const this,
        const Vector *const vLoc,
        float fMaxDist,
        DOTA_LANE *pLane,
        float *pAmountAlongLane)
{
  DOTA_LANE v8; // r12d
  DOTA_LANE v9; // r15d
  float fBestAmoungAlongLane; // [rsp+14h] [rbp-5Ch]
  float fBestLaneDistance; // [rsp+28h] [rbp-48h]
  float fAmountAlongLane; // [rsp+38h] [rbp-38h] BYREF
  float fDistanceToLane[13]; // [rsp+3Ch] [rbp-34h] BYREF

  *pLane = DOTA_LANE::DOTA_LANE_NONE;
  if ( pAmountAlongLane != 0 )
    *pAmountAlongLane = 0.0;
  v8 = DOTA_LANE::DOTA_LANE_TOP;
  v9 = DOTA_LANE::DOTA_LANE_NONE;
  fBestAmoungAlongLane = 0.0;
  fBestLaneDistance = 100000000.0;
  do
  {
    CDOTA_TeamCommander::CalculateAmountAlongLane(this, v8, vLoc, &fAmountAlongLane, fDistanceToLane);
    if ( fMaxDist > fDistanceToLane[0] && fBestLaneDistance > fDistanceToLane[0] )
    {
      v9 = v8;
      fBestLaneDistance = fDistanceToLane[0];
      fBestAmoungAlongLane = fAmountAlongLane;
    }
    ++v8;
  }
  while ( v8 != DOTA_LANE::DOTA_LANE_MAX );
  if ( v9 != DOTA_LANE::DOTA_LANE_NONE )
  {
    *pLane = v9;
    if ( pAmountAlongLane != 0 )
      *pAmountAlongLane = fBestAmoungAlongLane;
  }
}


// CDOTA_TeamCommander::GetLaneFrontAmount  (line 3412, @0x0000000002835c50, libserver.so)
// callers: CDOTA_BotMode_Laning::CalculateDesiredLocation, CDOTA_BotMode_Farm::GetFarmLaneScore, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_PushTower::Think
float __fastcall CDOTA_TeamCommander::GetLaneFrontAmount(
        CDOTA_TeamCommander *const this,
        int iTeam,
        DOTA_LANE lane,
        bool bIgnoreTowers)
{
  _BOOL8 v4; // rax
  __int64 v5; // rax

  v4 = iTeam != 2;
  if ( bIgnoreTowers )
    v5 = lane + 4 * v4 + 220;
  else
    v5 = lane + 4 * v4 + 228;
  return *(&this->_vptr_CDOTA_TeamCommander + v5 + 1);
}


// CDOTA_TeamCommander::GetLaneFrontLocation  (line 3422, @0x0000000002838690, libserver.so)  // inlines: GetLaneFrontAmount
// calls: CDOTA_TeamCommander::CalculateLocationAlongLane
// callers: CDOTA_BotMode_DefendTower::CalculateDesiredLocation, CDOTA_Commander::DrawDebug, CDOTA_BotMode_DefendTower::GetDesire, CDOTA_BotMode_Farm::CalculateDesiredLocation, CDOTA_BotMode_Farm::GetDesire, CDOTA_BotMode_Farm::Think, CDOTA_BotMode_Farm::GetFarmLaneScore, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_PushTower::GetDesire
__m128i __fastcall CDOTA_TeamCommander::GetLaneFrontLocation(
        CDOTA_TeamCommander *const this,
        int iTeam,
        DOTA_LANE lane,
        float fDelta,
        float fWidthOffsetRange)
{
  return CDOTA_TeamCommander::CalculateLocationAlongLane(
           this,
           lane,
           this->m_LaneFrontTowersAmounts[iTeam != 2][lane],
           fDelta,
           fWidthOffsetRange,
           0);
}


// CDOTA_TeamCommander::LaneDistanceToAmount  (line 3429, @0x0000000002835c90, libserver.so)
float __fastcall CDOTA_TeamCommander::LaneDistanceToAmount(
        CDOTA_TeamCommander *const this,
        DOTA_LANE lane,
        float a3,
        float fDistance)
{
  return a3 / this->m_LaneLengths[lane];
}


// CDOTA_TeamCommander::LaneAmountToDistance  (line 3436, @0x0000000002835cb0, libserver.so)
float __fastcall CDOTA_TeamCommander::LaneAmountToDistance(
        CDOTA_TeamCommander *const this,
        DOTA_LANE lane,
        float a3,
        float fAmount)
{
  return a3 * this->m_LaneLengths[lane];
}


// CDOTA_TeamCommander::GetLeadBuildingInLane  (line 3443, @0x0000000002835cd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_BotMode_DefendTower_Human::GetDesire, CDOTA_Bot::FindClosestBuilding, CDOTA_BotMode_DefendTower::CalculateDesiredLocation, CDOTA_BotMode_Assemble::CalculateDesiredLocation, CDOTA_Bot::UpdateEstimatedDamage, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_PushTower_Human::GetDesire, CDOTA_BotMode_Farm::GetFarmLaneScore, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_PushTower::GetDesire, CDOTA_BotMode_Roam::GetRoamScore (19 total)
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC_Building *__fastcall CDOTA_TeamCommander::GetLeadBuildingInLane(
        CDOTA_TeamCommander *const this,
        DOTA_LANE lane)
{
  int v2; // r12d
  CHandle<CBaseEntity> *v3; // rbx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC_Building *m_pInstance; // r13

  if ( lane == DOTA_LANE::DOTA_LANE_NONE )
    return 0;
  v2 = 8;
  v3 = this->m_Buildings[lane];
  do
  {
    if ( v3->m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[v3->m_Index & 0x1FF];
        if ( v5 != 0 && v3->m_Index == v5->m_EHandle.m_Index )
        {
          m_pInstance = v5->m_pInstance;
          if ( v5->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 408))(v5->m_pInstance) != 0 )
            return m_pInstance;
        }
      }
    }
    ++v3;
    --v2;
  }
  while ( v2 != 0 );
  return 0;
}


// CDOTA_TeamCommander::GetLeadBuildingInLaneTier  (line 3463, @0x00000000028292d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_TeamCommander::GetLeadBuildingInLaneTier, CDOTA_TeamCommander::UpdateDefendLaneDesires, CDOTA_TeamCommander::UpdatePushLaneDesires
// globals: CEntityHandle::gm_pEntityList, CDOTA_TeamCommander::GetLeadBuildingInLaneTier(DOTA_LANE)::tierMapping
int __fastcall CDOTA_TeamCommander::GetLeadBuildingInLaneTier(CDOTA_TeamCommander *const this, DOTA_LANE lane)
{
  CHandle<CBaseEntity> *v2; // rbx
  int i; // r12d
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  v2 = this->m_Buildings[lane];
  for ( i = 0; i != 8; ++i )
  {
    if ( v2->m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v2->m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[v2->m_Index & 0x1FF];
        if ( v5 != 0
          && v2->m_Index == v5->m_EHandle.m_Index
          && v5->m_pInstance != 0
          && (*(v5->m_pInstance->_vptr_IHandleEntity + 408))(v5->m_pInstance) != 0 )
        {
          return CDOTA_TeamCommander::GetLeadBuildingInLaneTier(DOTA_LANE)::tierMapping[i];
        }
      }
    }
    ++v2;
  }
  return 5;
}


// CDOTA_TeamCommander::GetLeadBuildingInLaneTier  (line 3463, @0x0000000002835da0, libserver.so)
// calls: CDOTA_TeamCommander::GetLeadBuildingInLaneTier
// callers: CDOTA_Bot::IsPushingIntoBase, CDOTA_BotMode_DefendTower::CalculateDesiredLocation, CDOTA_BotMode_DefendTower::Think
int __fastcall CDOTA_TeamCommander::GetLeadBuildingInLaneTier(CDOTA_TeamCommander *const this, DOTA_LANE lane)
{
  if ( lane != DOTA_LANE::DOTA_LANE_NONE )
    return CDOTA_TeamCommander::GetLeadBuildingInLaneTier(this, lane);
  else
    return 0;
}


// CDOTA_TeamCommander::GetLaneNode  (line 3485, @0x0000000002835dc0, libserver.so)  // inlines: CEntityHandle, CHandle
uint32 *__fastcall CDOTA_TeamCommander::GetLaneNode(
        uint32 *a1,
        CDOTA_TeamCommander *const this,
        DOTA_LANE lane,
        unsigned int iNode)
{
  uint32 *result; // rax

  result = a1;
  if ( iNode > 8 )
    *a1 = -1;
  else
    *a1 = this->m_LaneNodes[lane][iNode].m_Index;
  return result;
}


// CDOTA_TeamCommander::GetBaseLocation  (line 3496, @0x0000000002835e00, libserver.so)  // inlines: VectorAdd, VectorDivide, operator+, operator/
// calls: CDOTAGamerules::GetFountain, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Bot::GetMostRecentLane, CDOTA_BotMode_Assemble::CalculateDesiredLocation, CDOTA_BotMode_Assemble::Think, CDOTA_Bot::ConsiderCourierUsage, CDOTA_BotMode_Roam::CalculateDesiredLocation, CDOTA_BotMode_Retreat::Think, CDOTA_BotMode_Farm::GetDesire, CDOTA_BotMode_Retreat::CalculateDesiredLocation, CDOTA_BotMode_Retreat::GetDesire, CDOTA_TeamCommander::OnSpawn, CDOTA_TeamCommander::IsInBase, CDOTA_TeamCommander::UpdateRoamDesire (16 total)
Vector __fastcall CDOTA_TeamCommander::GetBaseLocation(CDOTA_TeamCommander *const this)
{
  CDOTA_BaseNPC *Fountain; // rax
  const Vector *AbsOrigin; // rax
  vec_t v4; // xmm1_4
  float v5; // xmm0_4
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  __int64 v10; // [rsp+10h] [rbp-20h]
  vec_t v11; // [rsp+18h] [rbp-18h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Fountain = CDOTAGamerules::GetFountain(g_pGameRules, this->m_eTeam);
  if ( Fountain != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(Fountain);
    v4 = (this->m_vBaseLocation.z + AbsOrigin->z) * 0.5;
    v5 = (this->m_vBaseLocation.x + AbsOrigin->x) * 0.5;
    *(&v10 + 1) = (this->m_vBaseLocation.y + AbsOrigin->y) * 0.5;
    v11 = v4;
    *&v10 = v5;
  }
  else
  {
    z = this->m_vBaseLocation.z;
    x = this->m_vBaseLocation.x;
    HIDWORD(v10) = LODWORD(this->m_vBaseLocation.y);
    v11 = z;
    *&v10 = x;
  }
  *&result.x = v10;
  result.z = v11;
  return result;
}


// CDOTA_TeamCommander::IsInBase  (line 3507, @0x00000000028360a0, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_TeamCommander::GetBaseLocation
// callers: CDOTA_TeamCommander::IsOurLanePushedIntoBase
bool __fastcall CDOTA_TeamCommander::IsInBase(CDOTA_TeamCommander *const this, const Vector *const vLoc)
{
  Vector BaseLocation; // 0:kr00_12.12

  BaseLocation = CDOTA_TeamCommander::GetBaseLocation(this);
  return fsqrt(
           ((BaseLocation.x - vLoc->x) * (BaseLocation.x - vLoc->x))
         + ((BaseLocation.y - vLoc->y) * (BaseLocation.y - vLoc->y))) < 4500.0;
}


// CDOTA_TeamCommander::IsLaneBeingDefended  (line 3514, @0x0000000002836100, libserver.so)  // inlines: GetBotByIndex
// calls: GetLaneDefendMode
// callers: CDOTA_BotMode_Farm::GetFarmLaneScore
bool __fastcall CDOTA_TeamCommander::IsLaneBeingDefended(CDOTA_TeamCommander *const this, DOTA_LANE lane)
{
  __int64 v4; // rbx
  CDOTA_Bot *v5; // rax
  int v6; // r12d

  v4 = 0;
  if ( this->m_BotList.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = this->m_BotList.m_Memory.m_pMemory[v4];
    if ( v5 != 0 )
    {
      v6 = (*(v5->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v5->m_pActiveBotMode);
      if ( v6 == GetLaneDefendMode(lane) )
        break;
    }
    if ( this->m_BotList.m_Size <= ++v4 )
      return 0;
  }
  return 1;
}


// CDOTA_TeamCommander::IsLaneBeingPushed  (line 3533, @0x0000000002836190, libserver.so)  // inlines: GetBotByIndex
// calls: GetLanePushMode
// callers: CDOTA_BotMode_Farm::GetFarmLaneScore
bool __fastcall CDOTA_TeamCommander::IsLaneBeingPushed(CDOTA_TeamCommander *const this, DOTA_LANE lane)
{
  __int64 v4; // rbx
  CDOTA_Bot *v5; // rax
  int v6; // r12d

  v4 = 0;
  if ( this->m_BotList.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = this->m_BotList.m_Memory.m_pMemory[v4];
    if ( v5 != 0 )
    {
      v6 = (*(v5->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v5->m_pActiveBotMode);
      if ( v6 == GetLanePushMode(lane) )
        break;
    }
    if ( this->m_BotList.m_Size <= ++v4 )
      return 0;
  }
  return 1;
}


// CDOTA_TeamCommander::IsLaneBeingFarmed  (line 3552, @0x0000000002836220, libserver.so)  // inlines: GetBotByIndex
// callers: CDOTA_BotMode_Farm::GetFarmLaneScore
bool __fastcall CDOTA_TeamCommander::IsLaneBeingFarmed(
        CDOTA_TeamCommander *const this,
        DOTA_LANE lane,
        CDOTA_Bot *pExcludeBot)
{
  int v4; // r14d
  __int64 v5; // r12
  CDOTA_Bot *v6; // rbx
  bool v7; // r13

  v4 = 0;
  v5 = 0;
  if ( this->m_BotList.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = this->m_BotList.m_Memory.m_pMemory[v5];
    v7 = v6 != 0 && pExcludeBot != v6;
    if ( v7
      && (*(v6->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v6->m_pActiveBotMode) == 17
      && v6->m_TargetLane == lane )
    {
      break;
    }
    ++v4;
    ++v5;
    if ( v4 >= this->m_BotList.m_Size )
      return 0;
  }
  return v7;
}


// CDOTA_TeamCommander::IsOurLanePushedIntoBase  (line 3569, @0x00000000028362c0, libserver.so)  // inlines: GetLaneFrontAmount
// calls: CDOTA_TeamCommander::GetLeadBuildingInLane, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::IsInBase
// callers: CDOTA_Bot::ConsiderBuyback, CDOTA_TeamCommander::UpdateGlyphUsage
bool __fastcall CDOTA_TeamCommander::IsOurLanePushedIntoBase(CDOTA_TeamCommander *const this, DOTA_LANE lane)
{
  __int64 v2; // r12
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // rax
  const Vector *AbsOrigin; // rax
  bool result; // al

  v2 = lane;
  LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(this, lane);
  if ( LeadBuildingInLane == 0 )
    return 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(LeadBuildingInLane);
  result = CDOTA_TeamCommander::IsInBase(this, AbsOrigin);
  if ( !result || this->m_LaneFrontTowersAmounts[this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST][v2] >= 0.30000001 )
    return 0;
  return result;
}


// FindBestTypeBot  (line 3584, @0x0000000002836330, libserver.so)
// callers: CDOTA_TeamCommander::UpdateLaneAssignments
// globals: jpt_2836373
CDOTA_Bot *__fastcall FindBestTypeBot(
        CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > *const botList,
        int iType,
        int iThreshold,
        bool bFindWorst)
{
  unsigned __int64 v4; // r8
  CDOTA_Bot *result; // rax
  bool v7; // cl
  int iSoloDesire; // r9d

  if ( botList->m_Size > 0 )
  {
    v4 = 0;
    result = 0;
    v7 = !bFindWorst;
    while ( 2 )
    {
      switch ( iType )
      {
        case 0:
          iSoloDesire = botList->m_Memory.m_pMemory[v4 / 8]->m_laningInfo.iSoloDesire;
          goto LABEL_5;
        case 1:
          iSoloDesire = botList->m_Memory.m_pMemory[v4 / 8]->m_laningInfo.iRequiresBabysit;
          goto LABEL_5;
        case 2:
          iSoloDesire = botList->m_Memory.m_pMemory[v4 / 8]->m_laningInfo.iProvidesBabysit;
          goto LABEL_5;
        case 3:
          iSoloDesire = botList->m_Memory.m_pMemory[v4 / 8]->m_laningInfo.iSurvivalRating;
          goto LABEL_5;
        case 4:
          iSoloDesire = botList->m_Memory.m_pMemory[v4 / 8]->m_laningInfo.iRequiresFarm;
          if ( iSoloDesire >= iThreshold )
            goto LABEL_12;
          goto LABEL_6;
        case 5:
          iSoloDesire = botList->m_Memory.m_pMemory[v4 / 8]->m_laningInfo.iProvidesSetup;
          goto LABEL_5;
        case 6:
          iSoloDesire = botList->m_Memory.m_pMemory[v4 / 8]->m_laningInfo.iRequiresSetup;
          goto LABEL_5;
        default:
          iSoloDesire = 0;
LABEL_5:
          if ( iSoloDesire >= iThreshold )
          {
LABEL_12:
            if ( v7 )
              goto LABEL_8;
          }
LABEL_6:
          if ( iSoloDesire <= iThreshold && bFindWorst )
          {
LABEL_8:
            iThreshold = iSoloDesire;
            result = botList->m_Memory.m_pMemory[v4 / 8];
          }
          v4 += 8LL;
          if ( v4 == 8LL * (botList->m_Size - 1) + 8 )
            return result;
          continue;
      }
    }
  }
  return 0;
}


// CDOTA_TeamCommander::UpdateLaneAssignments  (line 3616, @0x00000000028632c0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_Bot*>, Element, Get, GetBotByIndex, GetInstance, GetUnit, GrowMemory, ToDOTABaseNPC, operator CBaseEntity*, operator[], ~CUtlVector
// calls: CDOTA_TeamCommander::DoBotScriptLaneAssignments, CUtlMemory<CDOTA_Bot*, int>::Grow, CDOTA_Bot::SetAssignedLane, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::FindAndFastRemove, CDOTA_Bot::GetMostRecentLane, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::AddToTail, FindBestTypeBot, CEntityHandle::operator CEntityInstance*, _Unwind_Resume
// callers: CDOTA_TeamCommander::Think
void __fastcall CDOTA_TeamCommander::UpdateLaneAssignments(CDOTA_TeamCommander *const this)
{
  int m_Size; // r10d
  bool v3; // zf
  __int64 v4; // r14
  int v5; // ebx
  CDOTA_Bot **v6; // rax
  int v7; // eax
  __int64 v8; // r12
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // r12
  int m; // ebx
  __int64 v16; // r12
  int n; // ebx
  __int64 v18; // r12
  int ii; // ebx
  __int64 v20; // r12
  int i; // ebx
  DOTA_LANE MostRecentLane; // eax
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > *p_hardLaneBots; // rax
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > *p_easyLaneBots; // r12
  __int64 v25; // rbx
  DOTA_LANE m_ForcedLane; // eax
  __int64 v27; // r14
  int v28; // eax
  CDOTA_Bot **v29; // rax
  CDOTA_Bot *BestTypeBot; // rax
  int v31; // ebx
  __int64 v32; // r13
  __int64 v33; // rbx
  int v34; // r12d
  int v35; // edx
  CDOTA_Bot **v36; // rax
  CDOTA_Bot **v37; // r14
  int v38; // eax
  __int64 v39; // r14
  int v40; // eax
  __int64 v41; // r14
  int v42; // eax
  bool v43; // r13
  bool v44; // r14
  int j; // r12d
  int v46; // r8d
  int v47; // ebx
  __int64 v48; // r12
  int k; // ebx
  CDOTA_Bot **v50; // r13
  CEntityInstance *v51; // rax
  __int64 v52; // r14
  int v53; // eax
  CDOTA_Bot **v54; // rax
  __int64 v55; // r14
  int v56; // eax
  CDOTA_Bot *v57; // rax
  __int64 v58; // rbx
  int v59; // eax
  CDOTA_Bot **v60; // rax
  CDOTA_Bot *v61; // rax
  __int64 v62; // rbx
  int v63; // eax
  CDOTA_Bot **v64; // rax
  __int64 v65; // rbx
  int v66; // eax
  CDOTA_Bot **v67; // rax
  CDOTA_Bot **p_pMostFarmBot; // rbx
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > *v69; // r13
  CDOTA_Bot **v70; // rax
  CDOTA_Bot **v71; // rax
  CEntityInstance *v72; // rax
  CDOTA_Bot **v73; // r12
  CDOTA_Bot **v74; // rax
  CEntityInstance *v75; // rax
  CDOTA_Bot **p_pProvidesBabysitBot; // r12
  CDOTA_Bot **src; // [rsp+38h] [rbp-158h]
  int v78; // [rsp+40h] [rbp-150h]
  int v79; // [rsp+40h] [rbp-150h]
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > *bEasyOpenToFarm; // [rsp+48h] [rbp-148h]
  bool bEasyOpenToFarma; // [rsp+48h] [rbp-148h]
  DOTA_LANE hardLane; // [rsp+50h] [rbp-140h]
  DOTA_LANE lane; // [rsp+54h] [rbp-13Ch]
  CDOTA_Bot *pBot; // [rsp+58h] [rbp-138h]
  CDOTA_Bot *pNeedsMidSoloBot; // [rsp+68h] [rbp-128h] BYREF
  CDOTA_Bot *pNeedsBabysitBot; // [rsp+70h] [rbp-120h] BYREF
  CDOTA_Bot *pEasyLaneBot; // [rsp+78h] [rbp-118h] BYREF
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > easyLaneBots; // [rsp+80h] [rbp-110h] BYREF
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > midLaneBots; // [rsp+A0h] [rbp-F0h] BYREF
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > hardLaneBots; // [rsp+C0h] [rbp-D0h] BYREF
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > unassignedBots; // [rsp+E0h] [rbp-B0h] BYREF
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > needFarmBots; // [rsp+100h] [rbp-90h] BYREF
  CDOTA_Bot *pMostFarmBot; // [rsp+120h] [rbp-70h] BYREF
  CUtlMemory<CDOTA_Bot*,int> v94; // [rsp+128h] [rbp-68h] BYREF
  CDOTA_Bot *pProvidesBabysitBot; // [rsp+140h] [rbp-50h] BYREF
  CUtlMemory<CDOTA_Bot*,int> v96; // [rsp+148h] [rbp-48h] BYREF

  if ( CDOTA_TeamCommander::DoBotScriptLaneAssignments(this) )
    return;
  m_Size = this->m_BotList.m_Size;
  v3 = this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST;
  easyLaneBots.m_Size = 0;
  easyLaneBots.m_Memory.m_pMemory = 0;
  easyLaneBots.m_Memory.m_nAllocationCount = 0;
  easyLaneBots.m_Memory.m_nGrowSize = 0;
  midLaneBots.m_Size = 0;
  midLaneBots.m_Memory.m_pMemory = 0;
  lane = 2 * v3 + 1;
  midLaneBots.m_Memory.m_nAllocationCount = 0;
  midLaneBots.m_Memory.m_nGrowSize = 0;
  hardLane = 2 * !v3 + 1;
  hardLaneBots.m_Size = 0;
  hardLaneBots.m_Memory.m_pMemory = 0;
  hardLaneBots.m_Memory.m_nAllocationCount = 0;
  hardLaneBots.m_Memory.m_nGrowSize = 0;
  unassignedBots.m_Size = 0;
  unassignedBots.m_Memory.m_pMemory = 0;
  unassignedBots.m_Memory.m_nAllocationCount = 0;
  unassignedBots.m_Memory.m_nGrowSize = 0;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      pBot = this->m_BotList.m_Memory.m_pMemory[v4];
      if ( pBot != 0 )
      {
        v8 = unassignedBots.m_Size;
        v9 = unassignedBots.m_Size;
        if ( unassignedBots.m_Size == unassignedBots.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CDOTA_Bot *,int>::Grow(&unassignedBots.m_Memory, 1);
          v9 = unassignedBots.m_Size;
        }
        unassignedBots.m_Size = v9 + 1;
        v6 = &unassignedBots.m_Memory.m_pMemory[v8];
        if ( v6 != 0 )
          *v6 = pBot;
      }
      v7 = this->m_BotList.m_Size;
      ++v5;
      ++v4;
    }
    while ( v5 < v7 );
    if ( v7 > 0 )
    {
      v20 = 0;
      for ( i = 0; i < v7; ++i )
      {
        pProvidesBabysitBot = this->m_BotList.m_Memory.m_pMemory[v20];
        if ( pProvidesBabysitBot != 0 && pProvidesBabysitBot->m_bHuman )
        {
          CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(
            &unassignedBots,
            &pProvidesBabysitBot);
          MostRecentLane = CDOTA_Bot::GetMostRecentLane(pProvidesBabysitBot);
          if ( lane == MostRecentLane )
          {
            CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&easyLaneBots, &pProvidesBabysitBot);
          }
          else if ( MostRecentLane == DOTA_LANE::DOTA_LANE_MIDDLE )
          {
            CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&midLaneBots, &pProvidesBabysitBot);
          }
          else if ( hardLane == MostRecentLane )
          {
            CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&hardLaneBots, &pProvidesBabysitBot);
          }
          v7 = this->m_BotList.m_Size;
        }
        ++v20;
      }
      if ( v7 > 0 )
      {
        p_hardLaneBots = &hardLaneBots;
        p_easyLaneBots = &hardLaneBots;
        if ( lane == DOTA_LANE::DOTA_LANE_TOP )
          p_easyLaneBots = &easyLaneBots;
        if ( lane == DOTA_LANE::DOTA_LANE_BOTTOM )
          p_hardLaneBots = &easyLaneBots;
        v25 = 0;
        bEasyOpenToFarm = p_hardLaneBots;
        src = &p_hardLaneBots->m_Memory;
        do
        {
          while ( 1 )
          {
            pProvidesBabysitBot = this->m_BotList.m_Memory.m_pMemory[v25];
            if ( pProvidesBabysitBot == 0 )
              goto LABEL_43;
            if ( pProvidesBabysitBot->m_bHuman )
              goto LABEL_43;
            m_ForcedLane = pProvidesBabysitBot->m_ForcedLane;
            if ( m_ForcedLane == DOTA_LANE::DOTA_LANE_NONE )
              goto LABEL_43;
            if ( m_ForcedLane == DOTA_LANE::DOTA_LANE_MIDDLE )
            {
              v27 = midLaneBots.m_Size;
              v28 = midLaneBots.m_Size;
              if ( midLaneBots.m_Size == midLaneBots.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CDOTA_Bot *,int>::Grow(&midLaneBots.m_Memory, 1);
                v28 = midLaneBots.m_Size;
              }
              midLaneBots.m_Size = v28 + 1;
              v29 = &midLaneBots.m_Memory.m_pMemory[v27];
              if ( v29 == 0 )
                goto LABEL_52;
              goto LABEL_51;
            }
            if ( m_ForcedLane != DOTA_LANE::DOTA_LANE_BOTTOM )
              break;
            v41 = bEasyOpenToFarm->m_Size;
            v42 = bEasyOpenToFarm->m_Size;
            if ( v41 == bEasyOpenToFarm->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_Bot *,int>::Grow(src, 1);
              v42 = bEasyOpenToFarm->m_Size;
            }
            bEasyOpenToFarm->m_Size = v42 + 1;
            v29 = &bEasyOpenToFarm->m_Memory.m_pMemory[v41];
            if ( v29 != 0 )
LABEL_51:
              *v29 = pProvidesBabysitBot;
LABEL_52:
            CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(
              &unassignedBots,
              &pProvidesBabysitBot);
            if ( ++v25 >= this->m_BotList.m_Size )
              goto LABEL_53;
          }
          if ( m_ForcedLane == DOTA_LANE::DOTA_LANE_TOP )
          {
            v39 = p_easyLaneBots->m_Size;
            v40 = p_easyLaneBots->m_Size;
            if ( v39 == p_easyLaneBots->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_Bot *,int>::Grow(&p_easyLaneBots->m_Memory, 1);
              v40 = p_easyLaneBots->m_Size;
            }
            p_easyLaneBots->m_Size = v40 + 1;
            v29 = &p_easyLaneBots->m_Memory.m_pMemory[v39];
            if ( v29 == 0 )
              goto LABEL_52;
            goto LABEL_51;
          }
LABEL_43:
          ++v25;
        }
        while ( v25 < this->m_BotList.m_Size );
      }
    }
  }
LABEL_53:
  pNeedsMidSoloBot = FindBestTypeBot(&unassignedBots, 0, 2, 0);
  if ( pNeedsMidSoloBot != 0 && midLaneBots.m_Size == 0 )
  {
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&midLaneBots, &pNeedsMidSoloBot);
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pNeedsMidSoloBot);
  }
  BestTypeBot = FindBestTypeBot(&unassignedBots, 1, 2, 0);
  v31 = easyLaneBots.m_Size;
  pNeedsBabysitBot = BestTypeBot;
  if ( BestTypeBot == 0 )
    goto LABEL_138;
  if ( easyLaneBots.m_Size == 0 )
  {
    pProvidesBabysitBot = FindBestTypeBot(&unassignedBots, 2, 1, 0);
    if ( pProvidesBabysitBot == 0 )
      goto LABEL_139;
    v69 = &easyLaneBots;
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&easyLaneBots, &pNeedsBabysitBot);
    goto LABEL_137;
  }
  if ( easyLaneBots.m_Size == 1 )
  {
    if ( FindBestTypeBot(&easyLaneBots, 2, 1, 0) == 0 )
    {
LABEL_197:
      if ( (*easyLaneBots.m_Memory.m_pMemory)->m_laningInfo.iRequiresBabysit > 1 )
      {
        pProvidesBabysitBot = FindBestTypeBot(&unassignedBots, 2, 1, 0);
        if ( pProvidesBabysitBot != 0 )
        {
          CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&easyLaneBots, &pProvidesBabysitBot);
          CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(
            &unassignedBots,
            &pProvidesBabysitBot);
        }
      }
LABEL_139:
      if ( hardLaneBots.m_Size != 1 )
        goto LABEL_61;
LABEL_140:
      if ( (*hardLaneBots.m_Memory.m_pMemory)->m_laningInfo.iRequiresBabysit > 1 )
      {
        pProvidesBabysitBot = FindBestTypeBot(&unassignedBots, 2, 1, 0);
        if ( pProvidesBabysitBot != 0 )
        {
          CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&hardLaneBots, &pProvidesBabysitBot);
          CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(
            &unassignedBots,
            &pProvidesBabysitBot);
        }
      }
      goto LABEL_61;
    }
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&easyLaneBots, &pNeedsBabysitBot);
    goto LABEL_204;
  }
  if ( hardLaneBots.m_Size == 1 )
  {
    if ( FindBestTypeBot(&hardLaneBots, 2, 2, 0) == 0 )
      goto LABEL_140;
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&hardLaneBots, &pNeedsBabysitBot);
LABEL_204:
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pNeedsBabysitBot);
    v31 = easyLaneBots.m_Size;
    goto LABEL_138;
  }
  if ( hardLaneBots.m_Size == 0 )
  {
    pProvidesBabysitBot = FindBestTypeBot(&unassignedBots, 2, 2, 0);
    if ( pProvidesBabysitBot != 0 )
    {
      v69 = &hardLaneBots;
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&hardLaneBots, &pNeedsBabysitBot);
LABEL_137:
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(v69, &pProvidesBabysitBot);
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pNeedsBabysitBot);
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pProvidesBabysitBot);
      v31 = easyLaneBots.m_Size;
    }
LABEL_138:
    if ( v31 != 1 )
      goto LABEL_139;
    goto LABEL_197;
  }
LABEL_61:
  needFarmBots.m_Size = 0;
  needFarmBots.m_Memory.m_pMemory = 0;
  needFarmBots.m_Memory.m_nAllocationCount = 0;
  needFarmBots.m_Memory.m_nGrowSize = 0;
  if ( unassignedBots.m_Size <= 0 )
  {
    LODWORD(v33) = 0;
  }
  else
  {
    v32 = 0;
    v33 = 0;
    v34 = 0;
    do
    {
      v37 = &unassignedBots.m_Memory.m_pMemory[v32];
      if ( unassignedBots.m_Memory.m_pMemory[v32]->m_laningInfo.iRequiresFarm > 0 )
      {
        v38 = v33;
        if ( needFarmBots.m_Memory.m_nAllocationCount == v33 )
        {
          CUtlMemory<CDOTA_Bot *,int>::Grow(&needFarmBots.m_Memory, 1);
          v38 = needFarmBots.m_Size;
        }
        v35 = v38 + 1;
        needFarmBots.m_Size = v38 + 1;
        v36 = &needFarmBots.m_Memory.m_pMemory[v33];
        if ( v36 != 0 )
        {
          *v36 = *v37;
          v33 = needFarmBots.m_Size;
        }
        else
        {
          v33 = v35;
        }
      }
      ++v34;
      ++v32;
    }
    while ( unassignedBots.m_Size > v34 );
  }
  bEasyOpenToFarma = 0;
  if ( easyLaneBots.m_Size <= 1 )
    bEasyOpenToFarma = FindBestTypeBot(&easyLaneBots, 4, 2, 0) == 0;
  v43 = 0;
  if ( midLaneBots.m_Size <= 0 )
    v43 = FindBestTypeBot(&midLaneBots, 4, 2, 0) == 0;
  v44 = 0;
  if ( hardLaneBots.m_Size <= 1 )
    v44 = FindBestTypeBot(&hardLaneBots, 4, 2, 0) == 0;
  for ( j = 1; v33 > 0 && j != 0; j = v46 )
  {
    if ( bEasyOpenToFarma )
    {
      pMostFarmBot = FindBestTypeBot(&needFarmBots, 4, 2, 0);
      if ( pMostFarmBot != 0 )
      {
        v65 = easyLaneBots.m_Size;
        v66 = easyLaneBots.m_Size;
        if ( easyLaneBots.m_Size == easyLaneBots.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CDOTA_Bot *,int>::Grow(&easyLaneBots.m_Memory, 1);
          v66 = easyLaneBots.m_Size;
        }
        easyLaneBots.m_Size = v66 + 1;
        v67 = &easyLaneBots.m_Memory.m_pMemory[v65];
        if ( v67 != 0 )
          *v67 = pMostFarmBot;
        p_pMostFarmBot = &pMostFarmBot;
        goto LABEL_132;
      }
      pProvidesBabysitBot = FindBestTypeBot(&needFarmBots, 3, 2, 1);
      if ( pProvidesBabysitBot != 0 )
      {
        p_pMostFarmBot = &pProvidesBabysitBot;
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&easyLaneBots, &pProvidesBabysitBot);
LABEL_132:
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, p_pMostFarmBot);
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&needFarmBots, p_pMostFarmBot);
        v46 = j;
        bEasyOpenToFarma = 0;
        goto LABEL_88;
      }
    }
    v46 = 0;
LABEL_88:
    if ( v43 )
    {
      v79 = v46;
      v61 = FindBestTypeBot(&needFarmBots, 0, 1, 0);
      v46 = v79;
      pProvidesBabysitBot = v61;
      if ( v61 != 0 )
      {
        v62 = midLaneBots.m_Size;
        v63 = midLaneBots.m_Size;
        if ( midLaneBots.m_Size == midLaneBots.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CDOTA_Bot *,int>::Grow(&midLaneBots.m_Memory, 1);
          v63 = midLaneBots.m_Size;
        }
        midLaneBots.m_Size = v63 + 1;
        v64 = &midLaneBots.m_Memory.m_pMemory[v62];
        if ( v64 != 0 )
          *v64 = pProvidesBabysitBot;
        v43 = 0;
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(
          &unassignedBots,
          &pProvidesBabysitBot);
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&needFarmBots, &pProvidesBabysitBot);
        v46 = j;
      }
    }
    if ( v44 )
    {
      v78 = v46;
      v57 = FindBestTypeBot(&needFarmBots, 3, 1, 0);
      v46 = v78;
      pProvidesBabysitBot = v57;
      if ( v57 != 0 )
      {
        v58 = hardLaneBots.m_Size;
        v59 = hardLaneBots.m_Size;
        if ( hardLaneBots.m_Size == hardLaneBots.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CDOTA_Bot *,int>::Grow(&hardLaneBots.m_Memory, 1);
          v59 = hardLaneBots.m_Size;
        }
        hardLaneBots.m_Size = v59 + 1;
        v60 = &hardLaneBots.m_Memory.m_pMemory[v58];
        if ( v60 != 0 )
          *v60 = pProvidesBabysitBot;
        v44 = 0;
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(
          &unassignedBots,
          &pProvidesBabysitBot);
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&needFarmBots, &pProvidesBabysitBot);
        v46 = j;
      }
    }
    LODWORD(v33) = needFarmBots.m_Size;
  }
  v47 = midLaneBots.m_Size;
  if ( midLaneBots.m_Size != 0 || (pProvidesBabysitBot = FindBestTypeBot(&unassignedBots, 0, 0, 0)) == 0 )
  {
    if ( easyLaneBots.m_Size == 0 )
      goto LABEL_151;
  }
  else
  {
    if ( midLaneBots.m_Memory.m_nAllocationCount == 0 )
    {
      CUtlMemory<CDOTA_Bot *,int>::Grow(&midLaneBots.m_Memory, 1);
      v47 = midLaneBots.m_Size;
    }
    midLaneBots.m_Size = v47 + 1;
    if ( midLaneBots.m_Memory.m_pMemory != 0 )
      *midLaneBots.m_Memory.m_pMemory = pProvidesBabysitBot;
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pProvidesBabysitBot);
    if ( easyLaneBots.m_Size == 0 )
    {
LABEL_151:
      pProvidesBabysitBot = FindBestTypeBot(&unassignedBots, 3, 2, 1);
      if ( pProvidesBabysitBot != 0 )
      {
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&easyLaneBots, &pProvidesBabysitBot);
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(
          &unassignedBots,
          &pProvidesBabysitBot);
      }
    }
  }
  if ( hardLaneBots.m_Size == 0 )
  {
    pProvidesBabysitBot = FindBestTypeBot(&unassignedBots, 3, 0, 0);
    if ( pProvidesBabysitBot != 0 )
    {
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&hardLaneBots, &pProvidesBabysitBot);
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pProvidesBabysitBot);
    }
  }
  LODWORD(pMostFarmBot) = 0;
  v94.m_pMemory = 0;
  v94.m_nAllocationCount = 0;
  v94.m_nGrowSize = 0;
  LODWORD(pProvidesBabysitBot) = 0;
  v96.m_pMemory = 0;
  v96.m_nAllocationCount = 0;
  v96.m_nGrowSize = 0;
  if ( unassignedBots.m_Size > 0 )
  {
    v48 = 0;
    for ( k = 0; unassignedBots.m_Size > k; ++k )
    {
      v50 = &unassignedBots.m_Memory.m_pMemory[v48];
      v51 = CEntityHandle::operator CEntityInstance *(&unassignedBots.m_Memory.m_pMemory[v48]->m_hUnit);
      if ( v51 != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 && (*(&v51[50].m_worldGroupId + 1) & 2) == 0 )
      {
        v55 = pProvidesBabysitBot;
        v56 = pProvidesBabysitBot;
        if ( pProvidesBabysitBot == v96.m_nAllocationCount )
        {
          CUtlMemory<CDOTA_Bot *,int>::Grow(&v96, 1);
          v56 = pProvidesBabysitBot;
        }
        LODWORD(pProvidesBabysitBot) = v56 + 1;
        v54 = &v96.m_pMemory[v55];
        if ( v54 == 0 )
          goto LABEL_107;
      }
      else
      {
        v52 = pMostFarmBot;
        v53 = pMostFarmBot;
        if ( pMostFarmBot == v94.m_nAllocationCount )
        {
          CUtlMemory<CDOTA_Bot *,int>::Grow(&v94, 1);
          v53 = pMostFarmBot;
        }
        LODWORD(pMostFarmBot) = v53 + 1;
        v54 = &v94.m_pMemory[v52];
        if ( v54 == 0 )
          goto LABEL_107;
      }
      *v54 = *v50;
LABEL_107:
      ++v48;
    }
  }
  if ( hardLaneBots.m_Size == 1 )
  {
    v75 = CEntityHandle::operator CEntityInstance *(&(*hardLaneBots.m_Memory.m_pMemory)->m_hUnit);
    if ( v75 == 0 || BYTE3(v75[7]._vptr_IHandleEntity) == 0 )
      v75 = 0;
    p_pProvidesBabysitBot = &pProvidesBabysitBot;
    if ( (*(&v75[50].m_worldGroupId + 1) & 2) == 0 )
      p_pProvidesBabysitBot = &pMostFarmBot;
    pEasyLaneBot = FindBestTypeBot(p_pProvidesBabysitBot, 3, 0, 0);
    if ( pEasyLaneBot != 0 )
    {
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&hardLaneBots, &pEasyLaneBot);
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(p_pProvidesBabysitBot, &pEasyLaneBot);
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pEasyLaneBot);
    }
  }
  v10 = easyLaneBots.m_Size;
  v11 = easyLaneBots.m_Size;
  if ( easyLaneBots.m_Size == 1 )
  {
    v72 = CEntityHandle::operator CEntityInstance *(&(*easyLaneBots.m_Memory.m_pMemory)->m_hUnit);
    if ( v72 == 0 || BYTE3(v72[7]._vptr_IHandleEntity) == 0 )
      v72 = 0;
    v73 = &pProvidesBabysitBot;
    if ( (*(&v72[50].m_worldGroupId + 1) & 2) == 0 )
      v73 = &pMostFarmBot;
    pEasyLaneBot = FindBestTypeBot(v73, 3, 2, 1);
    if ( pEasyLaneBot != 0 )
    {
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::AddToTail(&easyLaneBots, &pEasyLaneBot);
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(v73, &pEasyLaneBot);
      CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pEasyLaneBot);
      v10 = easyLaneBots.m_Size;
      v11 = easyLaneBots.m_Size;
      goto LABEL_12;
    }
    v11 = 1;
  }
  else
  {
LABEL_12:
    if ( v10 > 1 )
      goto LABEL_13;
  }
  if ( unassignedBots.m_Size > 0 )
  {
    do
    {
      pEasyLaneBot = *unassignedBots.m_Memory.m_pMemory;
      if ( pEasyLaneBot != 0 )
      {
        if ( v11 == easyLaneBots.m_Memory.m_nAllocationCount )
          CUtlMemory<CDOTA_Bot *,int>::Grow(&easyLaneBots.m_Memory, 1);
        ++easyLaneBots.m_Size;
        v74 = &easyLaneBots.m_Memory.m_pMemory[v11];
        if ( v74 != 0 )
          *v74 = pEasyLaneBot;
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pEasyLaneBot);
        v10 = easyLaneBots.m_Size;
      }
      v11 = v10;
    }
    while ( v10 <= 1 && unassignedBots.m_Size > 0 );
  }
LABEL_13:
  v12 = midLaneBots.m_Size;
  if ( midLaneBots.m_Size <= 0 && unassignedBots.m_Size > 0 )
  {
    do
    {
      pEasyLaneBot = *unassignedBots.m_Memory.m_pMemory;
      if ( pEasyLaneBot != 0 )
      {
        if ( v12 == midLaneBots.m_Memory.m_nAllocationCount )
          CUtlMemory<CDOTA_Bot *,int>::Grow(&midLaneBots.m_Memory, 1);
        ++midLaneBots.m_Size;
        v70 = &midLaneBots.m_Memory.m_pMemory[v12];
        if ( v70 != 0 )
          *v70 = pEasyLaneBot;
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pEasyLaneBot);
        v12 = midLaneBots.m_Size;
      }
    }
    while ( v12 <= 0 && unassignedBots.m_Size > 0 );
  }
  v13 = hardLaneBots.m_Size;
  if ( hardLaneBots.m_Size <= 1 && unassignedBots.m_Size > 0 )
  {
    do
    {
      pEasyLaneBot = *unassignedBots.m_Memory.m_pMemory;
      if ( pEasyLaneBot != 0 )
      {
        if ( v13 == hardLaneBots.m_Memory.m_nAllocationCount )
          CUtlMemory<CDOTA_Bot *,int>::Grow(&hardLaneBots.m_Memory, 1);
        ++hardLaneBots.m_Size;
        v71 = &hardLaneBots.m_Memory.m_pMemory[v13];
        if ( v71 != 0 )
          *v71 = pEasyLaneBot;
        CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::FindAndFastRemove(&unassignedBots, &pEasyLaneBot);
        v13 = hardLaneBots.m_Size;
      }
    }
    while ( v13 <= 1 && unassignedBots.m_Size > 0 );
  }
  v14 = 0;
  for ( m = 0; easyLaneBots.m_Size > m; ++v14 )
  {
    CDOTA_Bot::SetAssignedLane(easyLaneBots.m_Memory.m_pMemory[v14], lane);
    ++m;
  }
  v16 = 0;
  for ( n = 0; midLaneBots.m_Size > n; ++v16 )
  {
    CDOTA_Bot::SetAssignedLane(midLaneBots.m_Memory.m_pMemory[v16], DOTA_LANE::DOTA_LANE_MIDDLE);
    ++n;
  }
  v18 = 0;
  for ( ii = 0; hardLaneBots.m_Size > ii; ++v18 )
  {
    CDOTA_Bot::SetAssignedLane(hardLaneBots.m_Memory.m_pMemory[v18], hardLane);
    ++ii;
  }
  CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&pProvidesBabysitBot);
  CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&pMostFarmBot);
  CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&needFarmBots);
  CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&unassignedBots);
  CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&hardLaneBots);
  CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&midLaneBots);
  CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&easyLaneBots);
}


// DamageEventSort  (line 3980, @0x0000000002827810, libserver.so)
int __fastcall DamageEventSort(const sDamageEvent *pEvent1, const sDamageEvent *pEvent2)
{
  return 2 * (pEvent2->fTimestamp <= pEvent1->fTimestamp) - 1;
}


// CDOTA_TeamCommander::DoCreepHealthAnalysis  (line 3985, @0x00000000028671e0, libserver.so)  // inlines: AddToTail, AlignedByteArrayExplicit_t, AlignedByteArray_t, CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, CUtlVectorFixedGrowableCompat, CVProfScope, Construct<sCreepHealthInfo>, CopyConstruct<sDamageEvent>, CopyConstruct<sHealthTime>, DOTAGameRules, DamageEventSort, Element, FastSqrt, Get, GetAggroTarget, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetModifier_Constant_Additive, GetProjectileSpeed, GetSerialNumber, GrowMemory, IsEnabled, IsListeningToEvent, Length, Length2D, Max<float>, Purge, RemoveAll, Set, Sort, ToDOTABaseNPC, V_swap<sDamageEvent>, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator[], sCreepHealthInfo, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CVProfile::EnterScope, Plat_FloatTime, FindUnitsInRadius, SortEHANDLEVectorByHealth, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::AddVectorToTail<CUtlMemory<CHandle<CBaseEntity>, int> >, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange, GetUnitCombatProficiency, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::GetAttackAnimationPoint (27 total)
// callers: CDOTA_Bot::DoCreepAttackAndDeny
// strings: "CDOTA_TeamCommander::DoCreepDeathAnalysis"
// globals: DamageEventSort(sDamageEvent const*,sDamageEvent const*)
void __fastcall CDOTA_TeamCommander::DoCreepHealthAnalysis(
        CDOTA_TeamCommander *const this,
        const Vector *const vLocation,
        __m128i fRadius,
        CUtlVector<sCreepHealthInfo,CUtlMemory<sCreepHealthInfo,int> > *pCreepHealthInfo)
{
  float v6; // r13d
  int m_enabled; // edi
  DOTATeam_t m_eTeam; // edi
  DOTATeam_t v9; // edi
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // r13
  __int64 v12; // r14
  int v13; // r12d
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rbx
  CEntityInstance *v16; // rax
  const Vector *AbsOrigin; // r15
  const Vector *v18; // rax
  float UnitCombatProficiency; // xmm0_4
  const Vector *v20; // r15
  const Vector *v21; // rax
  float v22; // xmm2_4
  float z; // xmm1_4
  float v24; // xmm0_4
  __int64 m_Id_low; // rax
  __m128i v26; // xmm0
  float v27; // r15d
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float AttackAnimationPoint; // xmm0_4
  __int64 m_Size; // r15
  int v31; // eax
  sDamageEvent *v32; // rax
  float SecondsPerAttack; // xmm0_4
  __int64 v34; // r15
  int v35; // eax
  sDamageEvent *v36; // rax
  float v37; // xmm0_4
  __int64 v38; // rbx
  int v39; // eax
  sDamageEvent *v40; // rax
  CEntityIdentity *m_pEntity; // rax
  int v42; // edx
  __int16 v43; // cx
  __int64 v44; // r15
  int v45; // r14d
  const Vector *v46; // rax
  float m_iMoveSpeed; // xmm0_4
  __int64 v48; // rbx
  int v49; // eax
  sDamageEvent *v50; // rax
  CDOTA_TrackingProjectileInfo *v51; // rbx
  const CEntityHandle *m_pAttackRecord; // rdi
  CEntityInstance *v53; // rax
  CEntityInstance *v54; // r12
  int Health; // eax
  __int64 v56; // rdi
  int v57; // ebx
  int v58; // eax
  __int64 v59; // rbx
  sCreepHealthInfo *v60; // r12
  sCreepHealthInfo *v61; // rbx
  CEntityIdentity *v62; // rax
  int v63; // edx
  __int16 v64; // cx
  CGameRules *v65; // rax
  int v66; // r14d
  int v67; // eax
  __int64 v68; // r12
  __m128i v69; // xmm2
  int v70; // r13d
  int v71; // eax
  int *v72; // rax
  __int64 k; // r13
  __int64 v74; // rax
  __int64 v75; // r12
  sDamageEvent *v76; // rax
  float v77; // xmm0_4
  float v78; // r15d
  int v79; // eax
  int v80; // eax
  unsigned int v81; // r8d
  __int64 j; // rdx
  sDamageEvent *v83; // rsi
  sDamageEvent *v84; // rcx
  float fTimestamp; // xmm0_4
  float fAmount; // xmm1_4
  bool VProf_3990; // [rsp+37h] [rbp-379h]
  __int64 v88; // [rsp+40h] [rbp-370h]
  float fArmorDamageReduction; // [rsp+50h] [rbp-360h]
  int i; // [rsp+60h] [rbp-350h]
  float fTravelTime; // [rsp+64h] [rbp-34Ch]
  float fTravelTimea; // [rsp+64h] [rbp-34Ch]
  float fTravelTimeb; // [rsp+64h] [rbp-34Ch]
  float fAttackStart; // [rsp+68h] [rbp-348h]
  float fAttackStarta; // [rsp+68h] [rbp-348h]
  float fAttackStartb; // [rsp+68h] [rbp-348h]
  float fAttackStartc; // [rsp+68h] [rbp-348h]
  float fAttackStartd; // [rsp+68h] [rbp-348h]
  sDamageEvent e; // [rsp+6Ch] [rbp-344h] BYREF
  CUtlVector<CDOTA_TrackingProjectileInfo*,CUtlMemory<CDOTA_TrackingProjectileInfo*,int> > projectileList; // [rsp+80h] [rbp-330h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hAlliedCreeps; // [rsp+A0h] [rbp-310h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hCreeps; // [rsp+140h] [rbp-270h] BYREF
  CUtlVectorFixedGrowableCompat<sDamageEvent,32ul> damageEvents; // [rsp+260h] [rbp-150h] BYREF
  unsigned __int64 v105; // [rsp+378h] [rbp-38h]

  v105 = __readfsqword(0x28u);
  if ( pCreepHealthInfo != 0 )
  {
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(fRadius));
    m_enabled = g_VProfCurrentProfile.m_enabled;
    VProf_3990 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::DoCreepDeathAnalysis", 0, "Bots", 0, 4);
    Plat_FloatTime();
    m_eTeam = this->m_eTeam;
    hCreeps.m_Size = 0;
    hCreeps.m_Memory.m_nAllocationCount = 64;
    hCreeps.m_Memory.m_nGrowSize = 0x80000000;
    hCreeps.m_Memory.m_pMemory = &hCreeps.m_FixedMemory;
    FindUnitsInRadius(m_eTeam, vLocation, 0, v6, &hCreeps, 2, 2, 0, 0, 0);
    v9 = this->m_eTeam;
    hAlliedCreeps.m_Size = 0;
    hAlliedCreeps.m_Memory.m_nAllocationCount = 32;
    hAlliedCreeps.m_Memory.m_nGrowSize = 0x80000000;
    hAlliedCreeps.m_Memory.m_pMemory = &hAlliedCreeps.m_FixedMemory;
    FindUnitsInRadius(v9, vLocation, 0, v6, &hAlliedCreeps, 1, 2, 0, 0, 0);
    SortEHANDLEVectorByHealth(&hCreeps);
    SortEHANDLEVectorByHealth(&hAlliedCreeps);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddVectorToTail<CUtlMemory<CHandle<CBaseEntity>,int>>(
      &hCreeps,
      &hAlliedCreeps);
    damageEvents.m_Size = 0;
    damageEvents.m_Memory.m_nAllocationCount = 32;
    damageEvents.m_Memory.m_nGrowSize = 0x80000000;
    damageEvents.m_Memory.m_pMemory = &damageEvents.m_FixedMemory;
    if ( hCreeps.m_Size > 0 )
    {
      v88 = 0;
      i = 0;
      while ( 1 )
      {
        v10 = CEntityHandle::operator CEntityInstance *(&hCreeps.m_Memory.m_pMemory[v88]);
        v11 = v10;
        if ( v10 != 0 && v10->m_bIsDOTANPC )
          break;
LABEL_42:
        ++i;
        ++v88;
        if ( hCreeps.m_Size <= i )
          goto LABEL_43;
      }
      damageEvents.m_Size = 0;
      fArmorDamageReduction = 1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v10, 1);
      if ( hCreeps.m_Size > 0 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          v14 = CEntityHandle::operator CEntityInstance *(&hCreeps.m_Memory.m_pMemory[v12]);
          v15 = v14;
          if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
          {
            v16 = CEntityHandle::operator CEntityInstance *(&v14[59].m_worldGroupId);
            if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 && v11 == v16 )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
              v18 = CBaseEntity::GetAbsOrigin(v15);
              e.fTimestamp = fsqrt(
                               (((v18->x - AbsOrigin->x) * (v18->x - AbsOrigin->x))
                              + ((v18->y - AbsOrigin->y) * (v18->y - AbsOrigin->y)))
                             + ((v18->z - AbsOrigin->z) * (v18->z - AbsOrigin->z)));
              if ( (CDOTA_BaseNPC::GetAttackRange(v15) + 50.0) > e.fTimestamp )
              {
                e.fTimestamp = (*(v15->_vptr_IHandleEntity + 416))(v15) * fArmorDamageReduction;
                UnitCombatProficiency = GetUnitCombatProficiency(HIDWORD(v15[50].m_pEntity), v11->m_iCombatClassDefend);
                fAttackStart = *&v15[60].m_worldGroupId.m_nHashCode;
                e.fTimestamp = e.fTimestamp * UnitCombatProficiency;
                if ( fAttackStart == 0.0 )
                {
                  if ( g_pGameRules != 0 )
                    fAttackStart = *&g_pGameRules[18].m_szQuestName[20];
                  else
                    fAttackStart = 0.0;
                }
                if ( (*(&v15[50].m_worldGroupId + 1) & 2) != 0 )
                {
                  v20 = CBaseEntity::GetAbsOrigin(v11);
                  v21 = CBaseEntity::GetAbsOrigin(v15);
                  v22 = v21->y - v20->y;
                  z = v21->z;
                  v24 = (v21->x - v20->x) * (v21->x - v20->x);
                  m_Id_low = LOBYTE(v15[67].m_iszPrivateVScripts.u.m_Id);
                  v26 = COERCE_UNSIGNED_INT((v24 + (v22 * v22)) + ((z - v20->z) * (z - v20->z)));
                  fTravelTime = SLODWORD(v15[48].m_iszPrivateVScripts.u.m_Id);
                  *v26.m128i_i32 = fsqrt(*v26.m128i_i32);
                  v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
                  if ( m_Id_low == 0xFF || *(*&v15[65].m_worldGroupId.m_nHashCode + 24 * m_Id_low) <= 0 )
                    Modifier_Constant_Additive_Internal = 0.0;
                  else
                    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                            &v15[64].m_worldGroupId,
                                                            modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
                                                            &CModifierParams::s_Default);
                  fTravelTimea = v27 / (Modifier_Constant_Additive_Internal + fTravelTime);
                }
                else
                {
                  fTravelTimea = 0.0;
                }
                AttackAnimationPoint = CDOTA_BaseNPC::GetAttackAnimationPoint(v15);
                m_Size = damageEvents.m_Size;
                v31 = damageEvents.m_Size;
                fAttackStarta = fTravelTimea + (fAttackStart + AttackAnimationPoint);
                if ( damageEvents.m_Size == damageEvents.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<sDamageEvent,int>::Grow(&damageEvents.m_Memory, 1);
                  v31 = damageEvents.m_Size;
                }
                damageEvents.m_Size = v31 + 1;
                v32 = &damageEvents.m_Memory.m_pMemory[m_Size];
                if ( v32 != 0 )
                {
                  v32->fTimestamp = fAttackStarta;
                  v32->fAmount = e.fTimestamp;
                }
                SecondsPerAttack = CDOTA_BaseNPC::GetSecondsPerAttack(v15);
                v34 = damageEvents.m_Size;
                v35 = damageEvents.m_Size;
                fAttackStartb = fAttackStarta + SecondsPerAttack;
                if ( damageEvents.m_Size == damageEvents.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<sDamageEvent,int>::Grow(&damageEvents.m_Memory, 1);
                  v35 = damageEvents.m_Size;
                }
                damageEvents.m_Size = v35 + 1;
                v36 = &damageEvents.m_Memory.m_pMemory[v34];
                if ( v36 != 0 )
                {
                  v36->fTimestamp = fAttackStartb;
                  v36->fAmount = e.fTimestamp;
                }
                v37 = CDOTA_BaseNPC::GetSecondsPerAttack(v15);
                v38 = damageEvents.m_Size;
                v39 = damageEvents.m_Size;
                fAttackStartc = fAttackStartb + v37;
                if ( damageEvents.m_Size == damageEvents.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<sDamageEvent,int>::Grow(&damageEvents.m_Memory, 1);
                  v39 = damageEvents.m_Size;
                }
                damageEvents.m_Size = v39 + 1;
                v40 = &damageEvents.m_Memory.m_pMemory[v38];
                if ( v40 != 0 )
                {
                  v40->fTimestamp = fAttackStartc;
                  v40->fAmount = e.fTimestamp;
                }
              }
            }
          }
          ++v13;
          ++v12;
        }
        while ( hCreeps.m_Size > v13 );
      }
      projectileList.m_Memory.m_pMemory = 0;
      projectileList.m_Memory.m_nAllocationCount = 0;
      projectileList.m_Memory.m_nGrowSize = 0;
      projectileList.m_Size = 0;
      m_pEntity = v11->m_pEntity;
      e.fAmount = NAN;
      if ( m_pEntity != 0 )
      {
        v42 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v43 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v43 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(e.fAmount) = v43 | LOWORD(e.fAmount) & 0x8000;
        LODWORD(e.fAmount) = (v42 << 15) | LOWORD(e.fAmount) & 0x7FFF;
      }
      CDOTA_ProjectileManager::GetTrackingProjectilesOnTarget(&g_DOTAProjectileManager, &e.fAmount, &projectileList);
      if ( projectileList.m_Size > 0 )
      {
        v44 = 0;
        v45 = 0;
        do
        {
          v51 = projectileList.m_Memory.m_pMemory[v44];
          if ( v51 != 0 )
          {
            m_pAttackRecord = v51->m_pAttackRecord;
            if ( m_pAttackRecord != 0 )
            {
              v53 = CEntityHandle::operator CEntityInstance *(m_pAttackRecord + 2);
              v54 = v53;
              if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
              {
                e.fTimestamp = (*(v53->_vptr_IHandleEntity + 416))(v53);
                e.fTimestamp = e.fTimestamp * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v11, 1));
                fTravelTimeb = e.fTimestamp
                             * GetUnitCombatProficiency(HIDWORD(v54[50].m_pEntity), v11->m_iCombatClassDefend);
                if ( g_pGameRules != 0 )
                  e.fTimestamp = *&g_pGameRules[18].m_szQuestName[20];
                else
                  e.fTimestamp = 0.0;
                v46 = CBaseEntity::GetAbsOrigin(v11);
                fAttackStartd = ((v51->m_vLocation.x - v46->x) * (v51->m_vLocation.x - v46->x))
                              + ((v51->m_vLocation.y - v46->y) * (v51->m_vLocation.y - v46->y));
                m_iMoveSpeed = v51->m_iMoveSpeed;
                v48 = damageEvents.m_Size;
                v49 = damageEvents.m_Size;
                e.fTimestamp = (fsqrt(fAttackStartd) / m_iMoveSpeed) + e.fTimestamp;
                if ( damageEvents.m_Size == damageEvents.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<sDamageEvent,int>::Grow(&damageEvents.m_Memory, 1);
                  v49 = damageEvents.m_Size;
                }
                damageEvents.m_Size = v49 + 1;
                v50 = &damageEvents.m_Memory.m_pMemory[v48];
                if ( v50 != 0 )
                {
                  v50->fTimestamp = e.fTimestamp;
                  v50->fAmount = fTravelTimeb;
                }
              }
            }
          }
          ++v45;
          ++v44;
        }
        while ( projectileList.m_Size > v45 );
      }
      if ( damageEvents.m_Size > 1 )
      {
        if ( damageEvents.m_Memory.m_pMemory != 0 )
        {
          V_qsort(damageEvents.m_Memory.m_pMemory, damageEvents.m_Size, 8, DamageEventSort);
        }
        else
        {
          v80 = damageEvents.m_Size - 1;
          do
          {
            v81 = v80 - 1;
            if ( v80 > 0 )
            {
              for ( j = 0; ; ++j )
              {
                v83 = &damageEvents.m_Memory.m_pMemory[j + 1];
                v84 = &damageEvents.m_Memory.m_pMemory[j];
                fTimestamp = damageEvents.m_Memory.m_pMemory[j].fTimestamp;
                if ( v83->fTimestamp > fTimestamp )
                {
                  fAmount = v84->fAmount;
                  *v84 = *v83;
                  v83->fTimestamp = fTimestamp;
                  v83->fAmount = fAmount;
                }
                if ( 8LL * v81 + 8 == j * 8 + 8 )
                  break;
              }
            }
            --v80;
          }
          while ( v81 != -1 );
        }
      }
      Health = CBaseEntity::GetHealth(v11);
      v57 = pCreepHealthInfo->m_Size;
      e.fTimestamp = Health;
      v58 = pCreepHealthInfo->m_Size;
      if ( pCreepHealthInfo->m_Size == pCreepHealthInfo->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<sCreepHealthInfo,int>::Grow(&pCreepHealthInfo->m_Memory, 1);
        v58 = pCreepHealthInfo->m_Size;
      }
      pCreepHealthInfo->m_Size = v58 + 1;
      v59 = v57;
      v60 = &pCreepHealthInfo->m_Memory.m_pMemory[v59];
      if ( v60 != 0 )
      {
        v60->hCreep.m_Index = -1;
        v60->healthValues.m_Size = 0;
        v60->healthValues.m_Memory.m_pMemory = 0;
        v60->healthValues.m_Memory.m_nAllocationCount = 64;
        v60->healthValues.m_Memory.m_nGrowSize = 0x80000000;
        if ( ((v60 + 32) & 3) != 0 && Plat_IsInDebugSessionRaw(v56) != 0 )
          __debugbreak();
        v60->healthValues.m_Memory.m_pMemory = &v60->healthValues.m_Memory.m_FixedMemory;
        v61 = &pCreepHealthInfo->m_Memory.m_pMemory[v59];
        v62 = v11->m_pEntity;
        if ( v62 != 0 )
        {
LABEL_73:
          v63 = (v62->m_EHandle.m_Index >> 15) - (v62->m_flags & 1);
          v64 = 0x7FFF;
          if ( v62->m_EHandle.m_Index != -1 )
            v64 = v62->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v61->hCreep.m_Index) = v64 | v61->hCreep.m_Index & 0x8000;
          v61->hCreep.m_Index = (v63 << 15) | v61->hCreep.m_Index & 0x7FFF;
          v65 = g_pGameRules;
          if ( g_pGameRules != 0 )
            goto LABEL_76;
          goto LABEL_102;
        }
      }
      else
      {
        v62 = v11->m_pEntity;
        v61 = 0;
        if ( v62 != 0 )
          goto LABEL_73;
      }
      v61->hCreep.m_Index = -1;
      v65 = g_pGameRules;
      if ( g_pGameRules != 0 )
      {
LABEL_76:
        v66 = *&v65[18].m_szQuestName[20];
LABEL_77:
        v67 = CBaseEntity::GetHealth(v11);
        v68 = v61->healthValues.m_Size;
        *v69.m128i_i32 = v67;
        v70 = _mm_cvtsi128_si32(v69);
        v71 = v61->healthValues.m_Size;
        if ( v68 == v61->healthValues.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<sHealthTime,int>::Grow(&v61->healthValues.m_Memory, 1);
          v71 = v61->healthValues.m_Size;
        }
        v61->healthValues.m_Size = v71 + 1;
        v72 = &v61->healthValues.m_Memory.m_pMemory[v68];
        if ( v72 != 0 )
        {
          *v72 = v70;
          v72[1] = v66;
        }
        for ( k = 0; damageEvents.m_Size > k; ++k )
        {
          v75 = v61->healthValues.m_Size;
          v76 = &damageEvents.m_Memory.m_pMemory[k];
          v77 = fmaxf(0.0, v76->fAmount);
          v78 = v76->fTimestamp;
          v79 = v61->healthValues.m_Size;
          e.fTimestamp = e.fTimestamp - v77;
          if ( v75 == v61->healthValues.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<sHealthTime,int>::Grow(&v61->healthValues.m_Memory, 1);
            v79 = v61->healthValues.m_Size;
          }
          v61->healthValues.m_Size = v79 + 1;
          v74 = &v61->healthValues.m_Memory.m_pMemory[v75];
          if ( v74 != 0 )
          {
            *(v74 + 4) = v78;
            *v74 = e.fTimestamp;
          }
          if ( e.fTimestamp <= 0.0 )
            break;
        }
        projectileList.m_Size = 0;
        if ( (projectileList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CDOTA_TrackingProjectileInfo *,int>::Purge(&projectileList.m_Memory);
          if ( (projectileList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CDOTA_TrackingProjectileInfo *,int>::Purge(&projectileList.m_Memory);
        }
        goto LABEL_42;
      }
LABEL_102:
      v66 = 0;
      goto LABEL_77;
    }
LABEL_43:
    Plat_FloatTime();
    CUtlVectorBase<sDamageEvent,CUtlMemory<sDamageEvent,int>>::~CUtlVectorBase(&damageEvents);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAlliedCreeps);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreeps);
    if ( VProf_3990 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
}


// CDOTA_TeamCommander::IsUnitInRoshanList  (line 4088, @0x0000000002844d30, libserver.so)  // inlines: DOTAGameRules, HasElement
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTAGamerules::GetRoshan, CDOTA_TeamCommander::HasRequestActive
// callers: CDOTA_BotMode_Roshan::GetDesire
__int64 __fastcall CDOTA_TeamCommander::IsUnitInRoshanList(
        CDOTA_TeamCommander *const this,
        const CHandle<CBaseEntity> *hUnit)
{
  __int64 result; // rax
  EHANDLE hEntity; // [rsp+0h] [rbp-20h] BYREF

  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
         &this->m_hProposedRoshanUnits,
         hUnit) >= 0 )
    return 1;
  CDOTAGamerules::GetRoshan(&hEntity, g_pGameRules);
  LOBYTE(result) = CDOTA_TeamCommander::HasRequestActive(this, 5, &hEntity, 0);
  return result;
}


// CDOTA_TeamCommander::SetIncomingStun  (line 4095, @0x0000000002864640, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<sIncomingStun>, DOTAGameRules, Element, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, GrowMemory, Set, operator=, operator[], sIncomingStun
// calls: CUtlMemory<sIncomingStun, int>::Grow
// callers: CDOTA_Bot_AbilityUsage_AbyssalBlade::UseAbility, CDOTA_Bot_AbilityUsage_Axe_BerserkersCall::UseAbility, CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::UseAbility, CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::UseAbility, CDOTA_Bot_AbilityUsage_Pudge_Dismember::UseAbility, CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::UseAbility, CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile::UseAbility, CDOTA_Bot_AbilityUsage_Sven_StormBolt::UseAbility, CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::UseAbility, CDOTA_Bot_AbilityUsage_Tiny_Toss::UseAbility
void __fastcall CDOTA_TeamCommander::SetIncomingStun(
        CDOTA_TeamCommander *const this,
        CDOTA_BaseNPC *pTarget,
        float a3,
        float fDuration)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  float v7; // xmm1_4
  __int64 m_Size; // r12
  float v9; // xmm0_4
  int v10; // eax
  sIncomingStun *v11; // rax
  float v12; // [rsp+Ch] [rbp-24h]
  int newStun; // [rsp+10h] [rbp-20h]

  newStun = -1;
  if ( pTarget != 0 )
  {
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      newStun = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
  }
  v7 = 0.0;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20];
  m_Size = this->m_IncomingStuns.m_Size;
  v9 = a3 + v7;
  v10 = this->m_IncomingStuns.m_Size;
  if ( m_Size == this->m_IncomingStuns.m_Memory.m_nAllocationCount )
  {
    v12 = v9;
    CUtlMemory<sIncomingStun,int>::Grow(&this->m_IncomingStuns.m_Memory, 1);
    v10 = this->m_IncomingStuns.m_Size;
    v9 = v12;
  }
  this->m_IncomingStuns.m_Size = v10 + 1;
  v11 = &this->m_IncomingStuns.m_Memory.m_pMemory[m_Size];
  if ( v11 != 0 )
  {
    v11->fExpireTime = v9;
    v11->hTarget.m_Index = newStun;
  }
}


// CDOTA_TeamCommander::HasIncomingStun  (line 4106, @0x0000000002836470, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==
// callers: CDOTA_Bot_AbilityUsage_BlinkDagger::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_BlackKingBar::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DiffusalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Cyclone::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sheepstick::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetBloodrageScore, CDOTA_Bot_AbilityUsage_Axe_BerserkersCall::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::GetCurrentUsageDesire (32 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_TeamCommander::HasIncomingStun(
        CDOTA_TeamCommander *const this,
        CDOTA_Bot *pAskingBot,
        CDOTA_BaseNPC *pTarget)
{
  bool result; // al
  int m_Size; // ecx
  sIncomingStun *m_pMemory; // rax
  __int64 v6; // r9
  CDOTA_BaseNPC *m_pInstance; // rdi
  CEntityIdentity *v8; // rsi
  CEntityIdentity *v9; // rsi

  result = 0;
  if ( pAskingBot->m_iDifficulty > 2 )
  {
    m_Size = this->m_IncomingStuns.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_IncomingStuns.m_Memory.m_pMemory;
      v6 = &m_pMemory[(m_Size - 1) + 1];
      while ( 1 )
      {
        m_pInstance = 0;
        if ( m_pMemory->hTarget.m_Index + 2 > 1 )
        {
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->hTarget.m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[m_pMemory->hTarget.m_Index & 0x1FF];
            if ( v9 != 0 && m_pMemory->hTarget.m_Index == v9->m_EHandle.m_Index )
              m_pInstance = v9->m_pInstance;
          }
        }
        if ( pTarget == m_pInstance )
          break;
        if ( ++m_pMemory == v6 )
          return 0;
      }
      return 1;
    }
  }
  return result;
}


// CDOTA_TeamCommander::IsMovementImpaired  (line 4123, @0x0000000002836510, libserver.so)
// calls: CDOTA_BaseNPC::IsMovementImpaired
// callers: CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare::GetCurrentUsageDesire
bool __fastcall CDOTA_TeamCommander::IsMovementImpaired(
        CDOTA_TeamCommander *const this,
        CDOTA_Bot *pAskingBot,
        CDOTA_BaseNPC *pTarget)
{
  return pAskingBot->m_iDifficulty > 2 && CDOTA_BaseNPC::IsMovementImpaired(pTarget);
}


// CDOTA_TeamCommander::UpdateRuneVision  (line 4134, @0x0000000002836540, libserver.so)  // inlines: CEntityHandle, CHandle, CVProfScope, DOTAGameRules, Get, GetBountyRuneSpawner, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetRuneSpawner, GetSerialNumber, IndexToIdentity, IsEnabled, IsValid, IsValidIndex, Length2DSqr, LookupEntity, Set, VectorSubtract, operator CEntityInstance*, operator!, operator-, operator->, ~CVProfScope
// calls: CEntityHandle::operator CEntityInstance*, CVProfile::EnterScope, CVProfile::ExitScope, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible, CDOTAGamerules::GetDOTATime, CDOTAGamerules::GetActiveRune_Powerup, CDOTAGamerules::GetActiveRune_Bounty, CDOTA_Item_Rune::GetRuneType, _Unwind_Resume
// callers: CDOTA_TeamCommander::Think
// strings: "CDOTA_TeamCommander::UpdateRuneVision"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_TeamCommander::UpdateRuneVision(CDOTA_TeamCommander *const this)
{
  int m_enabled; // ebx
  CGameRules *v3; // rbx
  int v4; // r12d
  CEntityInstance *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  CEntityInstance *v8; // rax
  CEntityIdentity *v9; // rdx
  __int16 v10; // cx
  int v11; // r12d
  CEntityInstance *v12; // rax
  CEntityIdentity *v13; // rdx
  __int16 v14; // cx
  CEntityInstance *v15; // rax
  CEntityIdentity *v16; // rdx
  __int16 v17; // cx
  CEntityInstance *v18; // rax
  CEntityIdentity *v19; // rdx
  __int16 v20; // cx
  CEntityInstance *v21; // rax
  CEntityIdentity *v22; // rdx
  __int16 v23; // cx
  uint32 m_Index; // edx
  CHandle<CBaseEntity> *v25; // rax
  unsigned __int16 v26; // si
  int v27; // ecx
  CEntityIdentity *v28; // rcx
  CEntityIdentity *v29; // rcx
  __int64 j; // rax
  CHandle<CBaseEntity> *v31; // r12
  __int64 i; // rbx
  const CBaseEntity *v33; // rax
  const Vector *AbsOrigin; // rax
  bool IsLocationVisible; // al
  CDOTAGamerules *v36; // rdi
  int v37; // eax
  CBaseEntity *ActiveRune_Powerup; // rax
  const CDOTA_Item_Rune *v39; // rbx
  const Vector *v40; // rax
  __int64 v41; // rbx
  DOTA_RUNE_STATUS *v42; // r12
  const Vector *v43; // r12
  const CBaseEntity *v44; // rax
  const Vector *v45; // rax
  float v46; // xmm1_4
  CGameRules *v47; // rax
  CGameRules *v48; // rax
  bool VProf_4136; // [rsp+17h] [rbp-69h]
  bool bSpawnerVisible[16]; // [rsp+20h] [rbp-60h]
  CHandle<CBaseEntity> hSpawners[6]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v52; // [rsp+48h] [rbp-38h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_4136 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::UpdateRuneVision", 0, "Bots", 0, 4);
  v3 = g_pGameRules;
  v4 = *&g_pGameRules[53].m_szQuestName[88];
  if ( v4 <= 0 )
  {
    hSpawners[0].m_Index = -1;
  }
  else
  {
    v5 = CEntityHandle::operator CEntityInstance *(*&g_pGameRules[53].m_szQuestName[96]);
    hSpawners[0].m_Index = -1;
    if ( v5 != 0 )
    {
      m_pEntity = v5->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v7 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hSpawners[0].m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
      }
    }
  }
  if ( v4 <= 1 )
  {
    hSpawners[1].m_Index = -1;
  }
  else
  {
    v8 = CEntityHandle::operator CEntityInstance *((*&v3[53].m_szQuestName[96] + 4LL));
    hSpawners[1].m_Index = -1;
    if ( v8 != 0 )
    {
      v9 = v8->m_pEntity;
      if ( v9 != 0 )
      {
        v10 = 0x7FFF;
        if ( v9->m_EHandle.m_Index != -1 )
          v10 = v9->m_EHandle.m_Index & 0x7FFF;
        hSpawners[1].m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
      }
    }
  }
  v11 = *&v3[53].m_szQuestName[112];
  if ( v11 <= 0 )
  {
    hSpawners[2].m_Index = -1;
  }
  else
  {
    v12 = CEntityHandle::operator CEntityInstance *(*&v3[53].m_szQuestName[120]);
    hSpawners[2].m_Index = -1;
    if ( v12 != 0 )
    {
      v13 = v12->m_pEntity;
      if ( v13 != 0 )
      {
        v14 = 0x7FFF;
        if ( v13->m_EHandle.m_Index != -1 )
          v14 = v13->m_EHandle.m_Index & 0x7FFF;
        hSpawners[2].m_Index = (((v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1)) << 15) | v14 & 0x7FFF;
      }
    }
  }
  if ( v11 <= 1 )
  {
    hSpawners[3].m_Index = -1;
  }
  else
  {
    v15 = CEntityHandle::operator CEntityInstance *((*&v3[53].m_szQuestName[120] + 4LL));
    hSpawners[3].m_Index = -1;
    if ( v15 != 0 )
    {
      v16 = v15->m_pEntity;
      if ( v16 != 0 )
      {
        v17 = 0x7FFF;
        if ( v16->m_EHandle.m_Index != -1 )
          v17 = v16->m_EHandle.m_Index & 0x7FFF;
        hSpawners[3].m_Index = (((v16->m_EHandle.m_Index >> 15) - (v16->m_flags & 1)) << 15) | v17 & 0x7FFF;
      }
    }
  }
  if ( v11 <= 2 )
  {
    hSpawners[4].m_Index = -1;
  }
  else
  {
    v18 = CEntityHandle::operator CEntityInstance *((*&v3[53].m_szQuestName[120] + 8LL));
    hSpawners[4].m_Index = -1;
    if ( v18 != 0 )
    {
      v19 = v18->m_pEntity;
      if ( v19 != 0 )
      {
        v20 = 0x7FFF;
        if ( v19->m_EHandle.m_Index != -1 )
          v20 = v19->m_EHandle.m_Index & 0x7FFF;
        hSpawners[4].m_Index = (((v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1)) << 15) | v20 & 0x7FFF;
      }
    }
  }
  if ( v11 <= 3 )
  {
    hSpawners[5].m_Index = -1;
  }
  else
  {
    v21 = CEntityHandle::operator CEntityInstance *((*&v3[53].m_szQuestName[120] + 12LL));
    hSpawners[5].m_Index = -1;
    if ( v21 != 0 )
    {
      v22 = v21->m_pEntity;
      if ( v22 != 0 )
      {
        v23 = 0x7FFF;
        if ( v22->m_EHandle.m_Index != -1 )
          v23 = v22->m_EHandle.m_Index & 0x7FFF;
        hSpawners[5].m_Index = (((v22->m_EHandle.m_Index >> 15) - (v22->m_flags & 1)) << 15) | v23 & 0x7FFF;
      }
    }
  }
  m_Index = hSpawners[0].m_Index;
  if ( hSpawners[0].m_Index + 2 > 1 )
  {
    v25 = hSpawners;
    do
    {
      if ( m_Index == -1 )
      {
        v27 = 63;
        v26 = 0x7FFF;
      }
      else
      {
        v26 = v25->m_Index & 0x7FFF;
        v27 = v26 >> 9;
      }
      v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v27];
      if ( v28 == 0 )
        break;
      v29 = &v28[v26 & 0x1FF];
      if ( v29 == 0 || m_Index != v29->m_EHandle.m_Index || v29->m_pInstance == 0 )
        break;
      if ( ++v25 == &v52 )
      {
        v31 = hSpawners;
        for ( i = 0; i != 6; ++i )
        {
          while ( 1 )
          {
            v33 = CEntityHandle::operator CEntityInstance *(v31);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v33);
            IsLocationVisible = CDOTAFogOfWarSystem::IsLocationVisible(
                                  &g_DOTAFogOfWarSystem,
                                  this->m_eTeam,
                                  AbsOrigin,
                                  0.0);
            v36 = g_pGameRules;
            bSpawnerVisible[i] = IsLocationVisible;
            if ( CDOTAGamerules::GetDOTATime(v36, 0, 0, 0.0) % 120 <= 0 )
              break;
            ++i;
            ++v31;
            if ( i == 6 )
              goto LABEL_68;
          }
          v37 = 5;
          if ( i < 2 )
            v37 = -1;
          ++v31;
          this->m_iRuneStatus.m_Memory[i] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_UNKNOWN;
          this->m_iRuneTypes.m_Memory[i] = v37;
        }
LABEL_68:
        ActiveRune_Powerup = CDOTAGamerules::GetActiveRune_Powerup(g_pGameRules);
        v39 = ActiveRune_Powerup;
        if ( ActiveRune_Powerup != 0
          && (v40 = CBaseEntity::GetAbsOrigin(ActiveRune_Powerup),
              CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, this->m_eTeam, v40, 0.0)) )
        {
          v43 = CBaseEntity::GetAbsOrigin(v39);
          v44 = CEntityHandle::operator CEntityInstance *(&hSpawners[0]);
          v45 = CBaseEntity::GetAbsOrigin(v44);
          v46 = v45->y - v43->y;
          if ( (((v45->x - v43->x) * (v45->x - v43->x)) + (v46 * v46)) >= 10000.0 )
          {
            this->m_iRuneTypes.m_Memory[1] = CDOTA_Item_Rune::GetRuneType(v39);
            v48 = g_pGameRules;
            this->m_iRuneStatus.m_Memory[1] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_AVAILABLE;
            this->m_iRuneStatus.m_Memory[0] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING;
            this->m_fLastSeenRuneTime.m_Memory[1] = *&v48[18].m_szQuestName[20];
          }
          else
          {
            this->m_iRuneTypes.m_Memory[0] = CDOTA_Item_Rune::GetRuneType(v39);
            v47 = g_pGameRules;
            this->m_iRuneStatus.m_Memory[0] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_AVAILABLE;
            this->m_iRuneStatus.m_Memory[1] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING;
            this->m_fLastSeenRuneTime.m_Memory[0] = *&v47[18].m_szQuestName[20];
          }
        }
        else
        {
          if ( bSpawnerVisible[0] )
            this->m_iRuneStatus.m_Memory[0] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING;
          if ( bSpawnerVisible[1] )
            this->m_iRuneStatus.m_Memory[1] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING;
        }
        v41 = 0;
        v42 = &this->m_iRuneStatus.m_Memory[2];
        do
        {
          if ( bSpawnerVisible[v41 + 2] )
          {
            if ( CDOTAGamerules::GetActiveRune_Bounty(g_pGameRules, v41) != 0 )
            {
              *v42 = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_AVAILABLE;
              v42[6] = *&g_pGameRules[18].m_szQuestName[20];
            }
            else
            {
              *v42 = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING;
            }
          }
          ++v41;
          ++v42;
        }
        while ( v41 != 4 );
        if ( VProf_4136 )
          CVProfile::ExitScope(&g_VProfCurrentProfile);
        return;
      }
      m_Index = v25->m_Index;
    }
    while ( v25->m_Index + 2 > 1 );
  }
  for ( j = 0; j != 6; ++j )
  {
    this->m_iRuneTypes.m_Memory[j] = -1;
    this->m_iRuneStatus.m_Memory[j] = DOTA_RUNE_STATUS::DOTA_RUNE_STATUS_MISSING;
  }
  if ( VProf_4136 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_TeamCommander::CreateHumanRequest  (line 4259, @0x0000000002864950, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<sBotHumanRequest>, CountdownTimer, Element, GrowMemory, Invalidate, NetworkStateChanged, Set, Start, operator=, operator=<float>, operator[], sBotHumanRequest
// calls: CountdownTimer::CountdownTimer, CountdownTimer::Now, CUtlMemory<sBotHumanRequest, int>::Grow
// callers: CDOTA_Commander::HandlePing
void __fastcall CDOTA_TeamCommander::CreateHumanRequest(
        CDOTA_TeamCommander *const this,
        int iRequestType,
        Vector *vLocation,
        bool bRemovePrevious,
        double fDuration,
        double a6)
{
  __int64 v9; // r13
  int v10; // r12d
  sBotHumanRequest *v11; // r14
  double v12; // xmm0_8
  __int64 m_Size; // r12
  int v14; // eax
  sBotHumanRequest *v15; // rax
  const Vector *v16; // [rsp+0h] [rbp-70h]
  Vector *v17; // [rsp+0h] [rbp-70h]
  float v18; // [rsp+0h] [rbp-70h]
  float fDurationa; // [rsp+Ch] [rbp-64h]
  sBotHumanRequest newRequest; // [rsp+10h] [rbp-60h] BYREF

  fDurationa = *&fDuration;
  if ( bRemovePrevious && this->m_RequestList.m_Size > 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = &this->m_RequestList.m_Memory.m_pMemory[v9];
      if ( v11->iRequestType == iRequestType && v11->Timer.m_timestamp.m_Value != -1.0 )
      {
        v16 = vLocation;
        (*(v11->Timer._vptr_CountdownTimer + 2))(&v11->Timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, fDuration, a6, -1.0);
        v11->Timer.m_timestamp.m_Value = -1.0;
        vLocation = v16;
      }
      ++v10;
      ++v9;
    }
    while ( this->m_RequestList.m_Size > v10 );
  }
  v17 = vLocation;
  CountdownTimer::CountdownTimer(&newRequest.Timer);
  newRequest.vLocation = *v17;
  *&v12 = CountdownTimer::Now(&newRequest.Timer) + fDurationa;
  if ( *&v12 != newRequest.Timer.m_timestamp.m_Value )
  {
    v18 = *&v12;
    (*(newRequest.Timer._vptr_CountdownTimer + 2))(&newRequest.Timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v12 = LODWORD(v18);
    newRequest.Timer.m_timestamp.m_Value = v18;
  }
  if ( fDurationa != newRequest.Timer.m_duration.m_Value )
  {
    (*(newRequest.Timer._vptr_CountdownTimer + 2))(&newRequest.Timer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v12, fDurationa);
    newRequest.Timer.m_duration.m_Value = fDurationa;
  }
  m_Size = this->m_RequestList.m_Size;
  v14 = this->m_RequestList.m_Size;
  if ( m_Size == this->m_RequestList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<sBotHumanRequest,int>::Grow(&this->m_RequestList.m_Memory, 1);
    v14 = this->m_RequestList.m_Size;
  }
  this->m_RequestList.m_Size = v14 + 1;
  v15 = &this->m_RequestList.m_Memory.m_pMemory[m_Size];
  if ( v15 != 0 )
  {
    v15->Timer._vptr_CountdownTimer = off_3FF42F0;
    v15->iRequestType = iRequestType;
    v15->vLocation = newRequest.vLocation;
    v15->hEntity.m_Index = -1;
    v15->Timer.m_duration.m_Value = newRequest.Timer.m_duration.m_Value;
    v15->Timer.m_timestamp.m_Value = newRequest.Timer.m_timestamp.m_Value;
    v15->Timer.m_bUseGlobalsTime = newRequest.Timer.m_bUseGlobalsTime;
  }
}


// CDOTA_TeamCommander::CreateHumanRequest  (line 4284, @0x0000000002864730, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<sBotHumanRequest>, CountdownTimer, Element, GrowMemory, Invalidate, NetworkStateChanged, Set, Start, operator=, operator=<float>, operator[], sBotHumanRequest
// calls: CountdownTimer::CountdownTimer, CountdownTimer::Now, CUtlMemory<sBotHumanRequest, int>::Grow
// callers: CDOTA_Commander::HandlePing, CDOTA_BotMode_Attack::GetDesire, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Roam::Think, CDOTA_BotMode_TeamRoam::Think, CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::UseAbility, CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam::UseAbility, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_SandKing_Epicenter::UseAbility, CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::UseAbility, CDOTA_Bot_AbilityUsage_Tidehunter_Ravage::UseAbility
void __fastcall CDOTA_TeamCommander::CreateHumanRequest(
        CDOTA_TeamCommander *const this,
        int iRequestType,
        uint32 *hEntity,
        bool bRemovePrevious,
        double fDuration,
        double a6)
{
  __int64 v9; // r13
  int v10; // r12d
  sBotHumanRequest *v11; // r14
  double v12; // xmm0_8
  __int64 m_Size; // r12
  int v14; // eax
  sBotHumanRequest *v15; // rax
  uint32 *v16; // [rsp+0h] [rbp-70h]
  uint32 *v17; // [rsp+0h] [rbp-70h]
  float v18; // [rsp+0h] [rbp-70h]
  float fDurationa; // [rsp+Ch] [rbp-64h]
  sBotHumanRequest newRequest; // [rsp+10h] [rbp-60h] BYREF

  fDurationa = *&fDuration;
  if ( bRemovePrevious && this->m_RequestList.m_Size > 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = &this->m_RequestList.m_Memory.m_pMemory[v9];
      if ( v11->iRequestType == iRequestType && v11->Timer.m_timestamp.m_Value != -1.0 )
      {
        v16 = hEntity;
        (*(v11->Timer._vptr_CountdownTimer + 2))(&v11->Timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, fDuration, a6, -1.0);
        v11->Timer.m_timestamp.m_Value = -1.0;
        hEntity = v16;
      }
      ++v10;
      ++v9;
    }
    while ( this->m_RequestList.m_Size > v10 );
  }
  v17 = hEntity;
  CountdownTimer::CountdownTimer(&newRequest.Timer);
  newRequest.vLocation = vec3_origin;
  newRequest.hEntity.m_Index = *v17;
  *&v12 = CountdownTimer::Now(&newRequest.Timer) + fDurationa;
  if ( *&v12 != newRequest.Timer.m_timestamp.m_Value )
  {
    v18 = *&v12;
    (*(newRequest.Timer._vptr_CountdownTimer + 2))(&newRequest.Timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v12 = LODWORD(v18);
    newRequest.Timer.m_timestamp.m_Value = v18;
  }
  if ( fDurationa != newRequest.Timer.m_duration.m_Value )
  {
    (*(newRequest.Timer._vptr_CountdownTimer + 2))(&newRequest.Timer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v12, fDurationa);
    newRequest.Timer.m_duration.m_Value = fDurationa;
  }
  m_Size = this->m_RequestList.m_Size;
  v14 = this->m_RequestList.m_Size;
  if ( m_Size == this->m_RequestList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<sBotHumanRequest,int>::Grow(&this->m_RequestList.m_Memory, 1);
    v14 = this->m_RequestList.m_Size;
  }
  this->m_RequestList.m_Size = v14 + 1;
  v15 = &this->m_RequestList.m_Memory.m_pMemory[m_Size];
  if ( v15 != 0 )
  {
    v15->Timer._vptr_CountdownTimer = off_3FF42F0;
    v15->iRequestType = iRequestType;
    v15->vLocation = newRequest.vLocation;
    v15->hEntity.m_Index = newRequest.hEntity.m_Index;
    v15->Timer.m_duration.m_Value = newRequest.Timer.m_duration.m_Value;
    v15->Timer.m_timestamp.m_Value = newRequest.Timer.m_timestamp.m_Value;
    v15->Timer.m_bUseGlobalsTime = newRequest.Timer.m_bUseGlobalsTime;
  }
}


// CDOTA_TeamCommander::UpdateRequests  (line 4308, @0x0000000002836c70, libserver.so)  // inlines: Element, IsElapsed, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CountdownTimer::Now, memmove
// callers: CDOTA_TeamCommander::Think
void __fastcall CDOTA_TeamCommander::UpdateRequests(CDOTA_TeamCommander *const this)
{
  int v2; // ebx
  sBotHumanRequest *v3; // r13
  float v4; // xmm0_4
  int m_Size; // eax
  int v6; // eax

  v2 = 0;
  if ( this->m_RequestList.m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v3 = &this->m_RequestList.m_Memory.m_pMemory[v2];
        v4 = CountdownTimer::Now(&v3->Timer);
        m_Size = this->m_RequestList.m_Size;
        if ( v4 >= v3->Timer.m_timestamp.m_Value )
          break;
        if ( ++v2 >= m_Size )
          return;
      }
      if ( m_Size - v2 - 1 > 0 )
      {
        memmove(
          &this->m_RequestList.m_Memory.m_pMemory[v2],
          &this->m_RequestList.m_Memory.m_pMemory[v2 + 1],
          48LL * (m_Size - v2 - 1));
        m_Size = this->m_RequestList.m_Size;
      }
      v6 = m_Size - 1;
      this->m_RequestList.m_Size = v6;
    }
    while ( v2 < v6 );
  }
}


// CDOTA_TeamCommander::UpdateHeroSelections  (line 4324, @0x00000000028370e0, libserver.so)  // inlines: DOTAGameRules, DoBotScriptHeroSelection, GetGameMode, GetInstance, GetInt, GetLobby, IndexToIdentity, Instance, IsAllDraftGameMode, IsAllDraftVariation, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: CDOTAGamerules::ShouldFillEmptySlotsWithBots, GDOTAGCClientSystem, CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::IsFakeClient, CDOTA_PlayerResource::GetSelectedHeroID, __dynamic_cast, CBaseEntity::ClearFlags, CBaseEntity::AddFlag, DOTACommander, CDOTA_Commander::GetUnusedBotName, CDOTA_TeamCommander::RunScriptFunction (19 total)
// callers: CDOTA_TeamCommander::Think
void __fastcall CDOTA_TeamCommander::UpdateHeroSelections(CDOTA_TeamCommander *const this)
{
  int v2; // r15d
  int v3; // r13d
  bool v4; // cc
  char v5; // al
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rdx
  CBaseEntity *v8; // rax
  CBaseEntity *v9; // r14
  int (**vptr_IHandleEntity)(...); // rdx
  __int64 (__fastcall *v11)(IVEngineServer2 *, const char *); // r14
  CDOTA_Commander *v12; // rax
  const char *v13; // rax
  int v14; // eax
  int v15; // r14d
  int v16; // r13d
  DOTATeam_t m_eTeam; // esi
  _BOOL4 v18; // r13d
  int v19; // r13d
  CEntityIdentity *v20; // rcx
  CEntityIdentity *v21; // rdx
  CBaseEntity *v22; // r15
  __int64 (__fastcall *v23)(IVEngineServer2 *, const char *); // r14
  CDOTA_Commander *v24; // rax
  const char *UnusedBotName; // rax
  int v26; // eax
  float v27; // xmm0_4
  int v28; // eax
  char bUnpickedHumans; // [rsp+10h] [rbp-50h]
  const CDOTALobby *pLobby; // [rsp+20h] [rbp-40h]
  int fTimeUntilPickingEnds; // [rsp+2Ch] [rbp-34h]
  int fTimeUntilPickingEndsa; // [rsp+2Ch] [rbp-34h]
  float fTimeUntilPickingEndsb; // [rsp+2Ch] [rbp-34h]

  if ( *&g_pGameRules[6].m_szQuestName[28] == 2 && CDOTAGamerules::ShouldFillEmptySlotsWithBots(g_pGameRules) )
  {
    if ( GDOTAGCClientSystem() != 0 )
    {
      pLobby = *(GDOTAGCClientSystem() + 260);
      if ( pLobby != 0 && !this->m_bCreatedLobbyBots && CDOTAGamerules::ShouldFillEmptySlotsWithBots(g_pGameRules) )
      {
        m_eTeam = this->m_eTeam;
        v18 = m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST;
        fTimeUntilPickingEndsa = 5 * v18 + 5;
        v19 = 5 * v18;
        while ( 1 )
        {
          if ( CDOTALobby::GetBotDifficulty(pLobby, m_eTeam) != DOTABotDifficulty::BOT_DIFFICULTY_INVALID )
          {
            CDOTA_PlayerResource::SetRequestedBotSlot(g_pDOTAPlayerResource, v19);
            v23 = *(*engine + 376LL);
            v24 = DOTACommander();
            UnusedBotName = CDOTA_Commander::GetUnusedBotName(v24);
            v26 = v23(engine, UnusedBotName);
            if ( v26 <= 0x7FFE
              && (v20 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v26 >> 9]) != 0
              && (v21 = &v20[v26 & 0x1FF]) != 0
              && v26 == (v21->m_EHandle.m_Index & 0x7FFF)
              && v21->m_pInstance != 0 )
            {
              v22 = __dynamic_cast(v21->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTAPlayer, 0);
              CDOTA_PlayerResource::SetRequestedBotSlot(g_pDOTAPlayerResource, -1);
              if ( v22 != 0 )
              {
                CBaseEntity::ClearFlags(v22);
                CBaseEntity::AddFlag(v22, 384);
                (*(v22->_vptr_IHandleEntity + 400))(v22, 1);
                (*(v22->_vptr_IHandleEntity + 70))(v22, this->m_eTeam);
              }
            }
            else
            {
              CDOTA_PlayerResource::SetRequestedBotSlot(g_pDOTAPlayerResource, -1);
            }
          }
          if ( ++v19 >= fTimeUntilPickingEndsa )
            break;
          m_eTeam = this->m_eTeam;
        }
        this->m_bCreatedLobbyBots = 1;
      }
    }
    else
    {
      pLobby = 0;
    }
    v2 = 0;
    fTimeUntilPickingEnds = 0;
    v3 = 0;
    bUnpickedHumans = 0;
    do
    {
      if ( CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v2) )
      {
        v3 += CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v2) == 2;
        fTimeUntilPickingEnds += CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v2) == 3;
        if ( !CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, v2) )
        {
          v4 = CDOTA_PlayerResource::GetSelectedHeroID(g_pDOTAPlayerResource, v2) <= 0;
          v5 = bUnpickedHumans;
          if ( v4 )
            v5 = 1;
          bUnpickedHumans = v5;
        }
      }
      ++v2;
    }
    while ( v2 != 24 );
    if ( CDOTAGamerules::ShouldFillEmptySlotsWithBots(g_pGameRules) && pLobby == 0 && v3 + fTimeUntilPickingEnds <= 9 )
    {
      do
      {
        v11 = *(*engine + 376LL);
        v12 = DOTACommander();
        v13 = CDOTA_Commander::GetUnusedBotName(v12);
        v14 = v11(engine, v13);
        if ( v14 > 0x7FFE )
          break;
        v6 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v14 >> 9];
        if ( v6 == 0 )
          break;
        v7 = &v6[v14 & 0x1FF];
        if ( v7 == 0 )
          break;
        if ( v14 != (v7->m_EHandle.m_Index & 0x7FFF) )
          break;
        if ( v7->m_pInstance == 0 )
          break;
        v8 = __dynamic_cast(v7->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTAPlayer, 0);
        v9 = v8;
        if ( v8 == 0 )
          break;
        CBaseEntity::ClearFlags(v8);
        CBaseEntity::AddFlag(v9, 384);
        (*(v9->_vptr_IHandleEntity + 400))(v9, 1);
        vptr_IHandleEntity = v9->_vptr_IHandleEntity;
        if ( v3 > 4 )
        {
          vptr_IHandleEntity[70](v9, 3);
          ++fTimeUntilPickingEnds;
        }
        else
        {
          ++v3;
          vptr_IHandleEntity[70](v9, 2);
        }
      }
      while ( v3 + fTimeUntilPickingEnds <= 9 );
    }
    if ( !CDOTA_TeamCommander::RunScriptFunction(this, "Think", this->m_hHeroSelectionScriptScope, 0, 0) )
    {
      v15 = 0;
      v16 = 0;
      while ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v15) != this->m_eTeam )
      {
LABEL_29:
        if ( ++v15 == 64 )
          return;
      }
      if ( CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, v15)
        && !CDOTA_PlayerResource::HasSelectedHero(g_pDOTAPlayerResource, v15) )
      {
        fTimeUntilPickingEndsb = *&g_pGameRules[6].m_szQuestName[36] - *&g_pGameRules[18].m_szQuestName[20];
        v27 = CDOTAGamerules::GetHeroSelectionTime(g_pGameRules) - fTimeUntilPickingEndsb;
        v28 = *&g_pGameRules[6].m_szQuestName[68];
        if ( v28 == 3 || v28 == 22 )
        {
          if ( CDOTAGamerules::HeroPickState_IsPlayerIDInControl(g_pGameRules, v15) )
          {
            v28 = *&g_pGameRules[6].m_szQuestName[68];
            goto LABEL_52;
          }
        }
        else if ( bUnpickedHumans == 0 || v27 > this->m_fHeroSelectionTimes[v16] )
        {
LABEL_52:
          if ( v28 == 3 || v28 == 22 )
          {
            if ( RandomInt(0, dota_bot_pick_odds.m_pParent->m_Value.m_nValue) == 1 )
            {
              CDOTA_TeamCommander::MakeHeroSelection(this, v15);
              return;
            }
          }
          else
          {
            CDOTA_TeamCommander::MakeHeroSelection(this, v15);
          }
        }
      }
      ++v16;
      goto LABEL_29;
    }
  }
}


// CDOTA_TeamCommander::UpdateDisabledBots  (line 4470, @0x000000000284b660, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, FStrEq, Get, GetBotByIndex, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamNumber, GetSerialNumber, GetString, GetUnit, GetUnitName, GrowMemory, HasElement, Set, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, _V_strcmp, operator CBaseEntity*, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, DOTACommander, CDOTA_Commander::ReplaceDisconnectedWithBots, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetConnectionState, CDOTA_PlayerResource::IsFakeClient, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, strcmp, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::AddToTail, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CDOTA_TeamCommander::Think
// strings: "FCVAR_NEVER_AS_STRING"
void __fastcall CDOTA_TeamCommander::UpdateDisabledBots(CDOTA_TeamCommander *const this)
{
  CDOTA_TeamCommander *v1; // r15
  CDOTA_Commander *v2; // rax
  int v3; // r12d
  CEntityInstance *v4; // rax
  int v5; // eax
  CDOTA_Bot **v6; // r14
  __int64 v7; // r13
  CEntityInstance *v8; // rcx
  CEntityIdentity *v9; // rdx
  int v10; // eax
  __int16 v11; // cx
  CDOTA_Bot *v12; // r12
  CEntityInstance *v13; // rax
  __int64 v14; // r12
  int v15; // ebx
  const CEntityHandle *v16; // rdi
  char *m_pszString; // r14
  CEntityInstance *v18; // rax
  CEntityInstance *v19; // r13
  const char *m_pAsString; // rdi
  __int64 v21; // rax
  int m_Size; // eax
  CDOTA_Bot **v23; // r12
  CEntityInstance *v24; // rsi
  CEntityIdentity *m_pEntity; // rsi
  int v26; // eax
  __int16 v27; // di
  CDOTA_Bot *v28; // r15
  CEntityInstance *v29; // rax
  const CEntityHandle *v30; // rdi
  CEntityInstance *v31; // rax
  CEntityIdentity *v32; // rdx
  int v33; // eax
  __int16 v34; // cx
  __int64 v35; // rbx
  int v36; // eax
  CEntityHandle *v37; // rax
  int v38; // r12d
  __int64 v39; // r14
  CDOTA_Bot **v40; // rbx
  CDOTA_Bot *v41; // r12
  CEntityInstance *v42; // rax
  CDOTA_Bot **v43; // r13
  CEntityInstance *v44; // rcx
  CEntityIdentity *v45; // rdx
  int v46; // eax
  __int16 v47; // cx
  CDOTA_Bot *v48; // r12
  CEntityInstance *v49; // rax
  CEntityIdentity *v50; // rcx
  int v51; // eax
  __int16 v52; // si
  const CEntityHandle *p_m_hUnit; // rdi
  CEntityInstance *v54; // rax
  CEntityIdentity *v55; // rdx
  int v56; // eax
  __int16 v57; // cx
  const CEntityHandle *v58; // rdi
  CEntityIdentity *v59; // rdx
  int v60; // eax
  __int16 v61; // cx
  __int64 v62; // r13
  int v63; // eax
  CEntityHandle *v64; // rax
  CUtlMemory<CHandle<CBaseEntity>,int> *p_m_Memory; // [rsp+0h] [rbp-80h]
  __int64 v66; // [rsp+8h] [rbp-78h]
  CDOTA_Bot **m_pMemory; // [rsp+10h] [rbp-70h]
  CDOTA_TeamCommander *v68; // [rsp+18h] [rbp-68h]
  int v69; // [rsp+20h] [rbp-60h]
  __int64 v70; // [rsp+20h] [rbp-60h]
  int i; // [rsp+28h] [rbp-58h]
  __int64 ia; // [rsp+28h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hDisabledBots; // [rsp+30h] [rbp-50h]
  CEntityHandle v74[16]; // [rsp+40h] [rbp-40h] BYREF

  v1 = this;
  p_m_hDisabledBots = &this->m_hDisabledBots;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hDisabledBots);
  if ( g_pDOTAPlayerResource != 0 )
  {
    v2 = DOTACommander();
    if ( !CDOTA_Commander::ReplaceDisconnectedWithBots(v2) )
    {
      v3 = 0;
      p_m_Memory = &v1->m_hDisabledBots.m_Memory;
      do
      {
        if ( (v1->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2 == CDOTA_PlayerResource::GetTeam(
                                                                   g_pDOTAPlayerResource,
                                                                   v3)
          && CDOTA_PlayerResource::GetConnectionState(g_pDOTAPlayerResource, v3) != DOTAConnectionState_t::DOTA_CONNECTION_STATE_CONNECTED
          && !CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, v3) )
        {
          CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v74, g_pDOTAPlayerResource, v3);
          v4 = CEntityHandle::operator CEntityInstance *(v74);
          if ( v4 != 0
            && BYTE3(v4[7]._vptr_IHandleEntity) != 0
            && (v4[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && (v21 = *&v4[45].m_worldGroupId.m_nHashCode, ia = v21, v21 != 0) )
          {
            if ( *(v21 + 176) != 0 )
            {
              m_Size = v1->m_BotList.m_Size;
              if ( m_Size > 0 )
              {
                v69 = v3;
                v68 = v1;
                v66 = (m_Size - 1);
                m_pMemory = v1->m_BotList.m_Memory.m_pMemory;
                v23 = m_pMemory;
                while ( 1 )
                {
                  v28 = *v23;
                  if ( *v23 != 0 )
                  {
                    v29 = CEntityHandle::operator CEntityInstance *(&v28->m_hUnit);
                    if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
                      v24 = v29;
                    else
                      v24 = 0;
                    if ( (v24[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && !v28->m_bHuman && v28->m_iDifficulty != 4 )
                    {
                      if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
                      {
                        v74[0].m_Index = -1;
                        m_pEntity = v29->m_pEntity;
                        if ( m_pEntity != 0 )
                        {
                          v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                          v27 = 0x7FFF;
                          if ( m_pEntity->m_EHandle.m_Index != -1 )
                            v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                          LOWORD(v74[0].m_Index) = v27 | v74[0].m_Index & 0x8000;
                          v74[0].m_Index = (v26 << 15) | v74[0].m_Index & 0x7FFF;
                        }
                      }
                      else
                      {
                        v74[0].m_Index = -1;
                      }
                      if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                             p_m_hDisabledBots,
                             v74) < 0
                        && v28->m_iUnitType == *(ia + 168) )
                      {
                        break;
                      }
                    }
                  }
                  if ( ++v23 == &m_pMemory[v66 + 1] )
                  {
                    v38 = v69;
                    v1 = v68;
                    v39 = ia;
                    v70 = &m_pMemory[v66 + 1];
                    v40 = m_pMemory;
                    i = v38;
                    do
                    {
                      v41 = *v40;
                      if ( *v40 != 0 )
                      {
                        v42 = CEntityHandle::operator CEntityInstance *(&v41->m_hUnit);
                        if ( v42 != 0
                          && BYTE3(v42[7]._vptr_IHandleEntity) != 0
                          && (v42[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                          && !v41->m_bHuman
                          && v41->m_iDifficulty != 4 )
                        {
                          if ( BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
                          {
                            v74[0].m_Index = -1;
                            v50 = v42->m_pEntity;
                            if ( v50 != 0 )
                            {
                              v51 = (v50->m_EHandle.m_Index >> 15) - (v50->m_flags & 1);
                              v52 = 0x7FFF;
                              if ( v50->m_EHandle.m_Index != -1 )
                                v52 = v50->m_EHandle.m_Index & 0x7FFF;
                              LOWORD(v74[0].m_Index) = v52 | v74[0].m_Index & 0x8000;
                              v74[0].m_Index = (v51 << 15) | v74[0].m_Index & 0x7FFF;
                            }
                          }
                          else
                          {
                            v74[0].m_Index = -1;
                          }
                          if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                                 p_m_hDisabledBots,
                                 v74) < 0
                            && (v41->m_iUnitType & *(v39 + 168)) != 0 )
                          {
                            p_m_hUnit = &v41->m_hUnit;
                            v3 = i;
                            v54 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
                            if ( v54 == 0 )
                              goto LABEL_121;
                            goto LABEL_112;
                          }
                        }
                      }
                      ++v40;
                    }
                    while ( v40 != v70 );
                    v43 = m_pMemory;
                    while ( 1 )
                    {
                      v48 = *v43;
                      if ( *v43 != 0 )
                      {
                        v49 = CEntityHandle::operator CEntityInstance *(&v48->m_hUnit);
                        if ( v49 != 0 && BYTE3(v49[7]._vptr_IHandleEntity) != 0 )
                          v44 = v49;
                        else
                          v44 = 0;
                        if ( (v44[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && !v48->m_bHuman && v48->m_iDifficulty != 4 )
                        {
                          if ( v49 != 0 && BYTE3(v49[7]._vptr_IHandleEntity) != 0 )
                          {
                            v74[0].m_Index = -1;
                            v45 = v49->m_pEntity;
                            if ( v45 != 0 )
                            {
                              v46 = (v45->m_EHandle.m_Index >> 15) - (v45->m_flags & 1);
                              v47 = 0x7FFF;
                              if ( v45->m_EHandle.m_Index != -1 )
                                v47 = v45->m_EHandle.m_Index & 0x7FFF;
                              LOWORD(v74[0].m_Index) = v47 | v74[0].m_Index & 0x8000;
                              v74[0].m_Index = (v46 << 15) | v74[0].m_Index & 0x7FFF;
                            }
                          }
                          else
                          {
                            v74[0].m_Index = -1;
                          }
                          if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                                 p_m_hDisabledBots,
                                 v74) < 0 )
                            break;
                        }
                      }
                      if ( v70 == ++v43 )
                        goto LABEL_77;
                    }
                    v58 = &v48->m_hUnit;
                    v3 = i;
                    v54 = CEntityHandle::operator CEntityInstance *(v58);
                    if ( v54 != 0 )
                      goto LABEL_112;
                    goto LABEL_121;
                  }
                }
                v3 = v69;
                v54 = CEntityHandle::operator CEntityInstance *(&v28->m_hUnit);
                v1 = v68;
                if ( v54 != 0 )
                {
LABEL_112:
                  if ( BYTE3(v54[7]._vptr_IHandleEntity) == 0 )
                  {
LABEL_121:
                    v74[0].m_Index = -1;
                    goto LABEL_117;
                  }
                  v74[0].m_Index = -1;
                  v55 = v54->m_pEntity;
                  if ( v55 != 0 )
                  {
                    v56 = (v55->m_EHandle.m_Index >> 15) - (v55->m_flags & 1);
                    v57 = 0x7FFF;
                    if ( v55->m_EHandle.m_Index != -1 )
                      v57 = v55->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(v74[0].m_Index) = v57 | v74[0].m_Index & 0x8000;
                    v74[0].m_Index = (v56 << 15) | v74[0].m_Index & 0x7FFF;
                  }
                }
                else
                {
                  v74[0].m_Index = -1;
                }
LABEL_117:
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
                  p_m_hDisabledBots,
                  v74);
              }
            }
          }
          else
          {
            v5 = v1->m_BotList.m_Size;
            if ( v5 > 0 )
            {
              v6 = v1->m_BotList.m_Memory.m_pMemory;
              i = v3;
              v7 = &v6[(v5 - 1) + 1];
              while ( 1 )
              {
                v12 = *v6;
                if ( *v6 != 0 )
                {
                  v13 = CEntityHandle::operator CEntityInstance *(&v12->m_hUnit);
                  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
                    v8 = v13;
                  else
                    v8 = 0;
                  if ( (v8[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && !v12->m_bHuman && v12->m_iDifficulty != 4 )
                  {
                    if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
                    {
                      v74[0].m_Index = -1;
                      v9 = v13->m_pEntity;
                      if ( v9 != 0 )
                      {
                        v10 = (v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1);
                        v11 = 0x7FFF;
                        if ( v9->m_EHandle.m_Index != -1 )
                          v11 = v9->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(v74[0].m_Index) = v11 | v74[0].m_Index & 0x8000;
                        v74[0].m_Index = (v10 << 15) | v74[0].m_Index & 0x7FFF;
                      }
                    }
                    else
                    {
                      v74[0].m_Index = -1;
                    }
                    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                           p_m_hDisabledBots,
                           v74) < 0 )
                      break;
                  }
                }
                if ( ++v6 == v7 )
                {
LABEL_77:
                  v3 = i;
                  goto LABEL_4;
                }
              }
              v30 = &v12->m_hUnit;
              v3 = i;
              v31 = CEntityHandle::operator CEntityInstance *(v30);
              if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
              {
                v74[0].m_Index = -1;
                v32 = v31->m_pEntity;
                if ( v32 != 0 )
                {
                  v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
                  v34 = 0x7FFF;
                  if ( v32->m_EHandle.m_Index != -1 )
                    v34 = v32->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(v74[0].m_Index) = v34 | v74[0].m_Index & 0x8000;
                  v74[0].m_Index = (v33 << 15) | v74[0].m_Index & 0x7FFF;
                }
              }
              else
              {
                v74[0].m_Index = -1;
              }
              v35 = v1->m_hDisabledBots.m_Size;
              v36 = v1->m_hDisabledBots.m_Size;
              if ( v35 == v1->m_hDisabledBots.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(p_m_Memory, 1);
                v36 = v1->m_hDisabledBots.m_Size;
              }
              v1->m_hDisabledBots.m_Size = v36 + 1;
              v37 = &v1->m_hDisabledBots.m_Memory.m_pMemory[v35];
              if ( v37 != 0 )
                v37->m_Index = v74[0];
            }
          }
        }
LABEL_4:
        ++v3;
      }
      while ( v3 != 64 );
      if ( v1->m_BotList.m_Size > 0 )
      {
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = v1->m_BotList.m_Memory.m_pMemory[v14];
          if ( v16 != 0 )
          {
            m_pszString = "FCVAR_NEVER_AS_STRING";
            if ( (dota_bot_disable_test.m_nFlags & 0x1000) == 0 )
            {
              m_pszString = dota_bot_disable_test.m_pParent->m_Value.m_pszString;
              if ( m_pszString == 0 )
                m_pszString = "";
            }
            v18 = CEntityHandle::operator CEntityInstance *(v16 + 39);
            v19 = v18;
            if ( v18 == 0 || BYTE3(v18[7]._vptr_IHandleEntity) == 0 )
              v18 = 0;
            m_pAsString = v18[70].m_iszPrivateVScripts.u.m_pAsString;
            if ( m_pAsString == 0 )
              m_pAsString = "";
            if ( m_pszString == m_pAsString || strcmp(m_pAsString, m_pszString) == 0 )
            {
              if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
              {
                v74[0].m_Index = -1;
                v59 = v19->m_pEntity;
                if ( v59 != 0 )
                {
                  v60 = (v59->m_EHandle.m_Index >> 15) - (v59->m_flags & 1);
                  v61 = 0x7FFF;
                  if ( v59->m_EHandle.m_Index != -1 )
                    v61 = v59->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(v74[0].m_Index) = v61 | v74[0].m_Index & 0x8000;
                  v74[0].m_Index = (v60 << 15) | v74[0].m_Index & 0x7FFF;
                }
              }
              else
              {
                v74[0].m_Index = -1;
              }
              v62 = v1->m_hDisabledBots.m_Size;
              v63 = v1->m_hDisabledBots.m_Size;
              if ( v62 == v1->m_hDisabledBots.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v1->m_hDisabledBots.m_Memory, 1);
                v63 = v1->m_hDisabledBots.m_Size;
              }
              v1->m_hDisabledBots.m_Size = v63 + 1;
              v64 = &v1->m_hDisabledBots.m_Memory.m_pMemory[v62];
              if ( v64 != 0 )
                v64->m_Index = v74[0];
            }
          }
          ++v15;
          ++v14;
        }
        while ( v15 < v1->m_BotList.m_Size );
      }
    }
  }
}


// CDOTA_TeamCommander::UpdateGlyphUsage  (line 4574, @0x00000000028669c0, libserver.so)  // inlines: CUtlSymbolLarge, DOTAGameRules, Get, GetBotByIndex, GetEntityName, GetGameTime, GetInstance, GetUnit, String, ToCStr, ToDOTABaseNPC, _V_strstr, operator CBaseEntity*, strstr
// calls: CDOTAGamerules::GetGlyphCooldown, CDOTA_TeamCommander::GetLeadBuildingInLane, CDOTA_TeamCommander::IsOurLanePushedIntoBase, strstr, CDOTA_BaseNPC::GetEstimatedTimeUntilDeath, CEntityHandle::operator CEntityInstance*, CDOTA_TeamCommander::ChatMessageRequest, CDOTAGamerules::Glyph
// callers: CDOTA_TeamCommander::Think
// strings: "tower1", "DOTA_Chat_Bot_SuggestGlyph"
void __fastcall CDOTA_TeamCommander::UpdateGlyphUsage(CDOTA_TeamCommander *const this)
{
  float GlyphCooldown; // xmm0_4
  float v3; // xmm1_4
  int m_Size; // edx
  CDOTA_Bot **m_pMemory; // rax
  CDOTA_Bot **v6; // rax
  CDOTA_Bot **v7; // rdx
  CDOTA_Bot *v8; // r14
  char v9; // r15
  CDOTA_TeamCommander *v10; // r13
  DOTA_LANE v11; // ebx
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // r14
  const char *m_pAsString; // rdi
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rdi
  CDOTAPlayer *v16; // rax
  CDOTA_Bot *pTeamBot; // [rsp+8h] [rbp-38h]

  if ( this->m_bLateGame )
  {
    GlyphCooldown = CDOTAGamerules::GetGlyphCooldown(g_pGameRules, this->m_eTeam);
    v3 = 0.0;
    if ( g_pGameRules != 0 )
      v3 = *&g_pGameRules[18].m_szQuestName[20];
    if ( v3 > GlyphCooldown )
    {
      m_Size = this->m_BotList.m_Size;
      if ( m_Size <= 0 )
      {
        v9 = 0;
        pTeamBot = 0;
      }
      else
      {
        m_pMemory = this->m_BotList.m_Memory.m_pMemory;
        if ( (*m_pMemory)->m_bHuman )
        {
          v6 = m_pMemory + 1;
          v7 = &v6[m_Size - 1];
          while ( v6 != v7 )
          {
            v8 = *v6++;
            if ( !v8->m_bHuman )
            {
              pTeamBot = v8;
              v9 = 1;
              goto LABEL_12;
            }
          }
          v9 = 1;
          pTeamBot = 0;
        }
        else
        {
          pTeamBot = *m_pMemory;
          v9 = 0;
        }
      }
LABEL_12:
      v10 = this;
      v11 = DOTA_LANE::DOTA_LANE_TOP;
      while ( 1 )
      {
        LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(this, v11);
        if ( LeadBuildingInLane != 0
          && (CDOTA_TeamCommander::IsOurLanePushedIntoBase(this, v11) && v10->m_fDefendLaneUrgencyDesire[1] > 0.89999998
           || (m_pAsString = LeadBuildingInLane->m_pEntity->m_name.u.m_pAsString) != 0
           && strstr(m_pAsString, "tower1") != 0)
          && CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(LeadBuildingInLane) < 5.0 )
        {
          break;
        }
        ++v11;
        v10 = (v10 + 4);
        if ( v11 == DOTA_LANE::DOTA_LANE_MAX )
          return;
      }
      if ( v9 != 0 )
      {
        if ( pTeamBot != 0 )
        {
          v14 = CEntityHandle::operator CEntityInstance *(&pTeamBot->m_hUnit);
          if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
            v15 = v14;
          else
            v15 = 0;
          v16 = (*(v15->_vptr_IHandleEntity + 413))(v15);
          CDOTA_TeamCommander::ChatMessageRequest(this, v16, "DOTA_Chat_Bot_SuggestGlyph", "", 1, 0);
        }
      }
      else
      {
        CDOTAGamerules::Glyph(g_pGameRules, this->m_eTeam);
      }
    }
  }
}


// CDOTA_TeamCommander::UpdateCourierBoostUsage  (line 4626, @0x000000000284ef90, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CEntityHandle, CHandle, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<CEntityIndex>, Element, Get, GetBotByIndex, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsFullyCastable, IsTrained, LookupEntity, Purge, RemoveAll, Reset, ToDOTABaseNPC, end, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_TeamCommander::AreAnyHumansOnTeam, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Bot::GetPlayerID, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders (18 total)
// callers: CDOTA_TeamCommander::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_TeamCommander::UpdateCourierBoostUsage(CDOTA_TeamCommander *const this)
{
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CHandle<CBaseEntity> *v3; // r14
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v8; // r12
  const Vector *AbsOrigin; // rax
  int m_Size; // edx
  __int64 v11; // rax
  CDOTA_Bot *v12; // rdi
  int PlayerID; // eax
  CEntityIndex v14; // eax
  __int64 v15; // r13
  int v16; // eax
  CEntityIndex *v17; // rax
  int32 m_Data; // [rsp+2Ch] [rbp-1B4h]
  EHANDLE hCourier; // [rsp+40h] [rbp-1A0h]
  CUnitOrders newOrders; // [rsp+50h] [rbp-190h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hNearbyEnemies; // [rsp+90h] [rbp-150h] BYREF
  unsigned __int64 v22; // [rsp+1A8h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( !CDOTA_TeamCommander::AreAnyHumansOnTeam(this) )
  {
    m_pMemory = this->m_hCouriers.m_Memory.m_pMemory;
    v3 = &m_pMemory[this->m_hCouriers.m_Size];
    if ( m_pMemory != v3 )
    {
      while ( 1 )
      {
        hCourier.m_Index = m_pMemory->m_Index;
        if ( m_pMemory->m_Index + 2 <= 1 )
          goto LABEL_4;
        v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hCourier.m_Index) >> 9) & 0x3F];
        if ( v4 == 0 )
          goto LABEL_4;
        v5 = &v4[hCourier.m_Index & 0x1FF];
        if ( v5 == 0 )
          goto LABEL_4;
        if ( m_pMemory->m_Index != v5->m_EHandle.m_Index )
          goto LABEL_4;
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance == 0 )
          goto LABEL_4;
        if ( !m_pInstance->m_bIsDOTANPC )
          goto LABEL_4;
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "courier_burst", 0);
        v8 = AbilityByName;
        if ( AbilityByName == 0
          || CDOTABaseAbility::GetEffectiveLevel(AbilityByName) < 0
          || (*(v8->_vptr_IHandleEntity + 245))(v8) == 0
          || !CDOTABaseAbility::IsOwnersManaEnough(v8)
          || !CDOTABaseAbility::IsOwnersGoldEnough(v8, -1) )
        {
          goto LABEL_4;
        }
        hNearbyEnemies.m_Size = 0;
        hNearbyEnemies.m_Memory.m_nAllocationCount = 64;
        hNearbyEnemies.m_Memory.m_nGrowSize = 0x80000000;
        hNearbyEnemies.m_Memory.m_pMemory = &hNearbyEnemies.m_FixedMemory;
        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
        FindUnitsInRadius(this->m_eTeam, AbsOrigin, m_pInstance, 700.0, &hNearbyEnemies, 2, 1, 128, 0, 0);
        if ( hNearbyEnemies.m_Size != 0 )
        {
          m_Size = this->m_BotList.m_Size;
          if ( m_Size > 0 )
          {
            v11 = 0;
            while ( 1 )
            {
              v12 = this->m_BotList.m_Memory.m_pMemory[v11];
              if ( v12 != 0 && !v12->m_bHuman )
                break;
              if ( m_Size <= ++v11 )
                goto LABEL_22;
            }
            PlayerID = CDOTA_Bot::GetPlayerID(v12);
            if ( PlayerID != -1 )
            {
              newOrders.m_nIssuerPlayerIndex = PlayerID;
              newOrders.m_nUnits.m_Size = 0;
              memset(&newOrders.m_nUnits.m_Memory, 0, 28);
              newOrders.m_nOrderSequenceNumber = 0;
              newOrders.m_vPosition = vec3_origin;
              newOrders.m_bQueue = 0;
              v14.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
              v15 = newOrders.m_nUnits.m_Size;
              m_Data = v14.m_Data;
              v16 = newOrders.m_nUnits.m_Size;
              if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
                v16 = newOrders.m_nUnits.m_Size;
              }
              newOrders.m_nUnits.m_Size = v16 + 1;
              v17 = &newOrders.m_nUnits.m_Memory.m_pMemory[v15];
              if ( v17 != 0 )
                v17->m_Data = m_Data;
              newOrders.m_nOrderType = 8;
              newOrders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(v8);
              DOTA_ExecuteOrders(&newOrders, 1, 0, 0);
              newOrders.m_nUnits.m_Size = 0;
              if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
                if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
              }
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hNearbyEnemies);
              if ( (hNearbyEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemies.m_Memory);
                if ( (hNearbyEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemies.m_Memory);
              }
              goto LABEL_4;
            }
          }
        }
LABEL_22:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hNearbyEnemies);
        if ( (hNearbyEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0
          && (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemies.m_Memory),
              (hNearbyEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0) )
        {
          ++m_pMemory;
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hNearbyEnemies.m_Memory);
          if ( v3 == m_pMemory )
            return;
        }
        else
        {
LABEL_4:
          if ( v3 == ++m_pMemory )
            return;
        }
      }
    }
  }
}


// GetRoleString  (line 4678, @0x0000000002836d20, libserver.so)
// strings: "Stun Support", "Pure Support", "Push Support", "Hard Carry", "Semi Carry", "Ganker" (7 total)
// globals: jpt_2836D3D
const char *__fastcall GetRoleString(int iRole)
{
  const char *result; // rax

  switch ( iRole )
  {
    case 1:
      result = "Tank";
      break;
    case 2:
      result = "Stun Support";
      break;
    case 4:
      result = "Pure Support";
      break;
    case 8:
      result = "Push Support";
      break;
    case 16:
      result = "Hard Carry";
      break;
    case 32:
      result = "Semi Carry";
      break;
    case 64:
      result = "Ganker";
      break;
    default:
      result = "";
      break;
  }
  return result;
}


// CDOTA_TeamCommander::GetRequestedBotDifficulty  (line 4696, @0x0000000002836dc0, libserver.so)  // inlines: GetInt, GetLobby
// calls: GDOTAGCClientSystem, CDOTALobby::GetBotDifficulty, __cxa_guard_acquire, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CDOTA_TeamCommander::MakeHeroSelection, CDOTA_TeamCommander::RegisterUnit, CDOTA_BaseNPC_Hero::UpdateBotDifficulty
// strings: "dota_bot_practice_difficulty"
// globals: `guard variable for'CDOTA_TeamCommander::GetRequestedBotDifficulty(int)::dota_bot_practice_difficulty, CDOTA_TeamCommander::GetRequestedBotDifficulty(int)::dota_bot_practice_difficulty
int __fastcall CDOTA_TeamCommander::GetRequestedBotDifficulty(CDOTA_TeamCommander *const this, int iPlayerID)
{
  int m_nValue; // r12d
  const CDOTALobby *v4; // rdi

  if ( (*(*engine + 160LL))(engine, iPlayerID) != 0 )
  {
    m_nValue = 3;
  }
  else
  {
    if ( `guard variable for'CDOTA_TeamCommander::GetRequestedBotDifficulty(int)::dota_bot_practice_difficulty == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_TeamCommander::GetRequestedBotDifficulty(int)::dota_bot_practice_difficulty) != 0 )
    {
      ConVarRef::ConVarRef(
        &CDOTA_TeamCommander::GetRequestedBotDifficulty(int)::dota_bot_practice_difficulty,
        "dota_bot_practice_difficulty");
      __cxa_guard_release(&`guard variable for'CDOTA_TeamCommander::GetRequestedBotDifficulty(int)::dota_bot_practice_difficulty);
    }
    m_nValue = CDOTA_TeamCommander::GetRequestedBotDifficulty(int)::dota_bot_practice_difficulty.m_pConVarState->m_Value.m_nValue;
  }
  if ( GDOTAGCClientSystem() != 0 && (v4 = *(GDOTAGCClientSystem() + 260)) != 0 )
    return CDOTALobby::GetBotDifficulty(v4, this->m_eTeam);
  else
    return m_nValue;
}


// CDOTA_TeamCommander::SelectHero  (line 4714, @0x0000000002836e90, libserver.so)  // inlines: State_Get, State_IsBefore, State_IsBeforePreGame, State_Order
// calls: CDOTA_PlayerResource::GetSelectedHeroID, CDOTA_PlayerResource::SetSelectedHeroID, CDOTA_PlayerResource::GetHeroSpawnGroup, CDOTA_PlayerResource::GetPlayer, DOTA_Hero_Spawn
// callers: CDOTAGamerules::CreateDemoPlayers, CDOTA_TeamCommander::MakeHeroSelection
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTA_TeamCommander::SelectHero(
        CDOTA_TeamCommander *const this,
        int iPlayerID,
        const char *pszHeroName)
{
  __int64 v5; // rdx
  int v6; // eax
  CDOTAPlayer *Player; // rax

  if ( CDOTA_PlayerResource::GetSelectedHeroID(g_pDOTAPlayerResource, iPlayerID) <= 0 )
  {
    CDOTA_PlayerResource::SetSelectedHeroID(g_pDOTAPlayerResource, iPlayerID, pszHeroName);
    v5 = *&g_pGameRules[6].m_szQuestName[28];
    v6 = 0;
    if ( v5 <= 0xA )
      v6 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v5];
    if ( dword_491AD10 <= v6 && CDOTA_PlayerResource::GetHeroSpawnGroup(g_pDOTAPlayerResource, iPlayerID) == 0 )
    {
      Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, iPlayerID);
      DOTA_Hero_Spawn(pszHeroName, Player, 0);
    }
  }
}


// CDOTA_TeamCommander::MakeHeroSelection  (line 4733, @0x0000000002836f40, libserver.so)  // inlines: DOTAGameRules, GetString
// calls: CSplitString::CSplitString, DOTAGameManager, CDOTAGameManager::GetHeroIDByName, CDOTA_PlayerResource::GetSelectedHeroID, CDOTA_TeamCommander::SelectHero, CSplitString::~CSplitString, Warning, CDOTA_TeamCommander::GetRequestedBotDifficulty, CDOTAGamerules::SelectSmartRandomHero, CDOTAGameManager::GetHeroUnitNameByID, CDOTAGamerules::MakeRandomHeroSelection, _Unwind_Resume
// callers: CDOTAGamerules::CreateDemoPlayers, CDOTA_TeamCommander::UpdateHeroSelections
// strings: "FCVAR_NEVER_AS_STRING", "dota_bot_force_pick: unrecognized hero name '%s'\n"
void __fastcall CDOTA_TeamCommander::MakeHeroSelection(CDOTA_TeamCommander *const this, int iPlayerID)
{
  char *m_pszString; // rsi
  __int64 v3; // r15
  const char *v4; // r14
  CDOTAGameManager *v5; // rax
  int HeroIDByName; // r12d
  int v7; // ebx
  int RequestedBotDifficulty; // eax
  int v9; // r12d
  CDOTAGameManager *v10; // rax
  const char *HeroUnitNameByID; // rax
  int i; // [rsp+1Ch] [rbp-54h]
  CSplitString forcelist; // [rsp+20h] [rbp-50h] BYREF

  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (dota_bot_force_pick.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( dota_bot_force_pick.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = dota_bot_force_pick.m_pParent->m_Value.m_pszString;
  }
  CSplitString::CSplitString(&forcelist, m_pszString, ",");
  if ( forcelist.m_Size > 0 )
  {
    v3 = 0;
    i = 0;
    do
    {
      v4 = forcelist.m_Memory.m_pMemory[v3];
      v5 = DOTAGameManager();
      HeroIDByName = CDOTAGameManager::GetHeroIDByName(v5, v4);
      if ( HeroIDByName == -1 )
      {
        Warning("dota_bot_force_pick: unrecognized hero name '%s'\n", v4);
      }
      else
      {
        v7 = 0;
        while ( HeroIDByName != CDOTA_PlayerResource::GetSelectedHeroID(g_pDOTAPlayerResource, v7) )
        {
          if ( ++v7 == 24 )
          {
            CDOTA_TeamCommander::SelectHero(this, iPlayerID, v4);
            goto LABEL_11;
          }
        }
      }
      ++i;
      ++v3;
    }
    while ( forcelist.m_Size > i );
  }
  RequestedBotDifficulty = CDOTA_TeamCommander::GetRequestedBotDifficulty(this, iPlayerID);
  v9 = CDOTAGamerules::SelectSmartRandomHero(g_pGameRules, iPlayerID, 2 * (RequestedBotDifficulty < 2) + 1, 0, 0);
  v10 = DOTAGameManager();
  HeroUnitNameByID = CDOTAGameManager::GetHeroUnitNameByID(v10, v9);
  if ( HeroUnitNameByID != 0 )
    CDOTA_TeamCommander::SelectHero(this, iPlayerID, HeroUnitNameByID);
  else
    CDOTAGamerules::MakeRandomHeroSelection(g_pGameRules, iPlayerID, 1, -1, 0);
LABEL_11:
  CSplitString::~CSplitString(&forcelist);
}


// CDOTA_TeamCommander::UpdatePushLaneDesires  (line 4786, @0x000000000284bfe0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CVProfScope, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, FastSqrt, Get, GetActiveModeDesire, GetAmountAlongLane, GetBotByIndex, GetEHandle, GetEntryIndex, GetGameTime, GetHealthPercent, GetInstance, GetLaneFrontAmount, GetLaneFrontLocation, GetLeadBuildingInLaneTier, GetOpposingTeamCommander, GetOpposingTeamNumber, GetSerialNumber, GetTeamCommander, GetTimeSinceLastSeen, GetUnit, GrowMemory, HasBeenSeenIn, IsElapsed, IsEnabled, LaneAmountToDistance, Length, Length2D, Max<float>, Min<float>, RemapValClamped, Set, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator-, operator->, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_TeamCommander::DoBotScriptUpdatePushLaneDesires, DOTACommander, CDOTA_TeamCommander::GetLeadBuildingInLane, CDOTA_TeamCommander::CalculateLocationAlongLane, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::GetLeadBuildingInLaneTier, CDOTA_TeamCommander::HasRequestActive, GetLanePushMode, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CDOTAGamerules::GetGameModeEntity, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll (32 total)
// callers: CDOTA_TeamCommander::Think
// strings: "CDOTA_TeamCommander::UpdatePushLaneDesires"
// globals: jpt_284CC11
void __fastcall CDOTA_TeamCommander::UpdatePushLaneDesires(CDOTA_TeamCommander *const this)
{
  int m_enabled; // edx
  DOTA_LANE v3; // r15d
  int v4; // r12d
  CDOTA_Commander *v5; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // r14
  DOTATeam_t m_eTeam; // eax
  _BOOL8 v10; // rdx
  int v11; // r12d
  CDOTA_Commander *v12; // rax
  CDOTA_TeamCommander *v13; // rdi
  CDOTA_TeamCommander *v14; // rax
  unsigned __int64 v15; // xmm0_8
  bool v16; // zf
  vec_t v17; // xmm1_4
  vec_t v18; // xmm1_4
  Vector *AbsOrigin; // rax
  int v20; // r12d
  CDOTA_Commander *v21; // rax
  CDOTA_TeamCommander *v22; // rdi
  CDOTA_TeamCommander *v23; // rax
  int LeadBuildingInLaneTier; // eax
  CEntityIdentity *m_pEntity; // rax
  int v26; // edx
  __int16 v27; // cx
  __int64 v28; // r13
  int v29; // r12d
  CDOTA_Bot *v30; // rax
  int v31; // r12d
  __int64 v32; // r13
  CEntityInstance *v33; // rax
  __int64 v34; // rax
  float v35; // xmm1_4
  float v36; // xmm0_4
  __m128 v37; // xmm0
  __m128 v38; // xmm6
  float v39; // xmm0_4
  float v40; // xmm0_4
  __m128 v41; // xmm2
  float v42; // xmm0_4
  __m128 v43; // xmm0
  float v44; // r12d
  float v45; // xmm2_4
  float v46; // xmm0_4
  __m128i v47; // xmm3
  CDOTABaseGameMode *GameModeEntity; // rax
  CDOTAGamerules *v49; // rdi
  CDOTABaseGameMode *v50; // rax
  int m_nBotMaxPushTier; // eax
  CGameRules *v52; // r14
  int v53; // r12d
  DOTATeam_t v54; // edi
  __int64 v55; // r12
  CDOTA_BaseNPC *v56; // rax
  CDOTA_BaseNPC *v57; // r13
  float v58; // xmm0_4
  float v59; // xmm0_4
  __int64 v60; // r12
  int v61; // eax
  __int64 v62; // rcx
  float v63; // xmm1_4
  float v64; // xmm0_4
  float v65; // xmm0_4
  __int64 v66; // r13
  int v67; // r12d
  CDOTA_Commander *v68; // rax
  CDOTA_TeamCommander *v69; // rdx
  CDOTA_TeamCommander *v70; // rax
  int v71; // r12d
  CDOTA_Commander *v72; // rax
  CDOTA_TeamCommander *v73; // rdx
  CDOTA_TeamCommander *v74; // rax
  CDOTA_Bot *v75; // r12
  CEntityInstance *v76; // rax
  CEntityInstance *v77; // rdi
  CEntityInstance *v78; // rax
  CBaseModelEntity *v79; // rdi
  float v80; // xmm0_4
  CEntityInstance *v81; // rax
  CDOTA_BaseNPC *v82; // rdx
  float v83; // xmm0_4
  __m128 v84; // xmm0
  __int64 v85; // r13
  int v86; // r12d
  int m_Size; // eax
  CEntityInstance *v88; // rdi
  CEntityInstance *v89; // rax
  CEntityIdentity *v90; // rdx
  int v91; // eax
  __int16 v92; // cx
  __int64 v93; // r14
  int v94; // eax
  EHANDLE *v95; // rax
  CDOTA_Bot *v96; // r14
  const CEntityHandle *p_m_hUnit; // r14
  CEntityInstance *v98; // rax
  int v99; // r13d
  const CBaseEntity *v100; // rax
  const Vector *v101; // rax
  int v102; // r12d
  CEntityInstance *v103; // rax
  CDOTA_Bot *v104; // r14
  int v105; // r13d
  CEntityInstance *v106; // rax
  const CBaseEntity *v107; // rdi
  const Vector *v108; // rax
  CEntityInstance *v109; // rax
  CEntityIdentity *v110; // rdx
  int v111; // eax
  __int16 v112; // cx
  __int64 v113; // r13
  int v114; // eax
  EHANDLE *v115; // rax
  int v116; // esi
  int v117; // r12d
  float v118; // xmm3_4
  int v119; // xmm2_4
  float v120; // xmm1_4
  __m128 v121; // xmm1
  __m128 v122; // xmm4
  float v123; // xmm1_4
  float v124; // xmm2_4
  float v125; // xmm0_4
  int v126; // r14d
  CEntityInstance *v127; // rax
  const CBaseEntity *v128; // rdi
  const Vector *v129; // rax
  CEntityInstance *v130; // rax
  CEntityIdentity *v131; // rdx
  int v132; // eax
  __int16 v133; // cx
  __int64 v134; // r13
  int v135; // eax
  EHANDLE *v136; // rax
  int v137; // esi
  const CBaseEntity *v138; // rax
  CDOTA_Bot *m_pConnections; // r13
  const Vector *v140; // rax
  float v141; // xmm0_4
  float v142; // xmm2_4
  float v143; // xmm5_4
  float v144; // xmm1_4
  float v145; // xmm2_4
  int v146; // r13d
  int v147; // r12d
  __int64 v148; // r14
  CEntityInstance *v149; // rax
  __int64 v150; // rax
  float v151; // xmm2_4
  __m128 v152; // xmm0
  __m128 v153; // xmm1
  CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane> *v154; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v155; // [rsp+30h] [rbp-240h]
  bool VProf_4788; // [rsp+3Bh] [rbp-235h]
  int iTier; // [rsp+3Ch] [rbp-234h]
  CDOTA_TeamCommander *v158; // [rsp+48h] [rbp-228h]
  int nHumansInMode; // [rsp+58h] [rbp-218h]
  float fBaseDesireThreshold; // [rsp+5Ch] [rbp-214h]
  float fDesireThreshold; // [rsp+68h] [rbp-208h]
  float fDesiredPowerDelta; // [rsp+70h] [rbp-200h]
  bool bHasHumanRequest; // [rsp+77h] [rbp-1F9h]
  float fEnemyOffensivePower; // [rsp+78h] [rbp-1F8h]
  float fEnemyOffensivePowera; // [rsp+78h] [rbp-1F8h]
  float fEnemyOffensivePowerb; // [rsp+78h] [rbp-1F8h]
  float fClosestDistToFront; // [rsp+7Ch] [rbp-1F4h]
  float fClosestDistToFronta; // [rsp+7Ch] [rbp-1F4h]
  float fClosestDistToFrontb; // [rsp+7Ch] [rbp-1F4h]
  float AverageTrueAttackDamage; // [rsp+84h] [rbp-1ECh]
  float v171; // [rsp+84h] [rbp-1ECh]
  float fDistanceFactor; // [rsp+88h] [rbp-1E8h]
  int fDistanceFactorg; // [rsp+88h] [rbp-1E8h]
  float fDistanceFactora; // [rsp+88h] [rbp-1E8h]
  float fDistanceFactorb; // [rsp+88h] [rbp-1E8h]
  DOTATeam_t fDistanceFactorc; // [rsp+88h] [rbp-1E8h]
  float fDistanceFactorh; // [rsp+88h] [rbp-1E8h]
  float fDistanceFactord; // [rsp+88h] [rbp-1E8h]
  float fDistanceFactore; // [rsp+88h] [rbp-1E8h]
  float fDistanceFactorf; // [rsp+88h] [rbp-1E8h]
  EHANDLE hEntity; // [rsp+90h] [rbp-1E0h] BYREF
  int iRequestCount; // [rsp+9Ch] [rbp-1D4h] BYREF
  Vector vEnemyCreepLaneFrontLocation; // [rsp+A0h] [rbp-1D0h]
  Vector vOurLaneFrontLocation; // [rsp+B0h] [rbp-1C0h] BYREF
  Vector vLeadBuildingLocation; // [rsp+C0h] [rbp-1B0h] BYREF
  Vector v186; // [rsp+D0h] [rbp-1A0h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,16ul> hProposedPushUnits; // [rsp+E0h] [rbp-190h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,16ul> hCandidatePushUnits; // [rsp+140h] [rbp-130h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hCreepsAtFront; // [rsp+1A0h] [rbp-D0h] BYREF
  unsigned __int64 v190; // [rsp+238h] [rbp-38h]

  v190 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_4788 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::UpdatePushLaneDesires", 0, "Bots", 0, 4);
  if ( CDOTA_TeamCommander::DoBotScriptUpdatePushLaneDesires(this) )
    goto LABEL_57;
  v158 = this;
  v3 = DOTA_LANE::DOTA_LANE_TOP;
  v155 = &this->m_hProposedPushUnits[1];
  do
  {
    v4 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
    v5 = DOTACommander();
    p_m_GoodGuys = &v5->m_GoodGuys;
    p_m_BadGuys = &v5->m_BadGuys;
    if ( v4 != 2 )
      p_m_GoodGuys = p_m_BadGuys;
    LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(p_m_GoodGuys, v3);
    if ( LeadBuildingInLane != 0 )
    {
      m_eTeam = this->m_eTeam;
      v10 = m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST;
      v11 = (m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
      fDistanceFactor = this->m_LaneFrontCreepsAmounts[v10][v3];
      fClosestDistToFront = fabs(fDistanceFactor - LeadBuildingInLane->m_fAmountAlongLane[v10]) * v158->m_LaneLengths[1];
      v12 = DOTACommander();
      v13 = &v12->m_GoodGuys;
      v14 = &v12->m_BadGuys;
      if ( v11 != 2 )
        v13 = v14;
      v15 = CDOTA_TeamCommander::CalculateLocationAlongLane(v13, v3, fDistanceFactor, 0.0, 0.0, 0).m128i_u64[0];
      v16 = this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST;
      *&vEnemyCreepLaneFrontLocation.x = v15;
      vEnemyCreepLaneFrontLocation.z = v17;
      *&v186.x = CDOTA_TeamCommander::CalculateLocationAlongLane(
                   this,
                   v3,
                   this->m_LaneFrontTowersAmounts[!v16][v3],
                   0.0,
                   0.0,
                   0).m128i_u64[0];
      v186.z = v18;
      vOurLaneFrontLocation = v186;
      AbsOrigin = CBaseEntity::GetAbsOrigin(LeadBuildingInLane);
      v16 = this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST;
      vLeadBuildingLocation = *AbsOrigin;
      v20 = v16 + 2;
      v21 = DOTACommander();
      v22 = &v21->m_GoodGuys;
      v23 = &v21->m_BadGuys;
      if ( v20 != 2 )
        v22 = v23;
      LeadBuildingInLaneTier = CDOTA_TeamCommander::GetLeadBuildingInLaneTier(v22, v3);
      hEntity.m_Index = -1;
      iTier = LeadBuildingInLaneTier;
      m_pEntity = LeadBuildingInLane->m_pEntity;
      iRequestCount = 0;
      if ( m_pEntity != 0 )
      {
        v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v27 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(hEntity.m_Index) = v27 | hEntity.m_Index & 0x8000;
        hEntity.m_Index = (v26 << 15) | hEntity.m_Index & 0x7FFF;
      }
      bHasHumanRequest = CDOTA_TeamCommander::HasRequestActive(this, 4, &hEntity, &iRequestCount);
      if ( this->m_BotList.m_Size <= 0 )
      {
        nHumansInMode = 0;
      }
      else
      {
        nHumansInMode = 0;
        v28 = 0;
        v29 = 0;
        do
        {
          v30 = this->m_BotList.m_Memory.m_pMemory[v28];
          if ( v30->m_bHuman )
          {
            fDistanceFactorg = (*(v30->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v30->m_pActiveBotMode);
            nHumansInMode += fDistanceFactorg == GetLanePushMode(v3);
          }
          ++v29;
          ++v28;
        }
        while ( v29 < this->m_BotList.m_Size );
      }
      v54 = this->m_eTeam;
      hCreepsAtFront.m_Memory.m_pMemory = &hCreepsAtFront.m_FixedMemory;
      hCreepsAtFront.m_Size = 0;
      hCreepsAtFront.m_Memory.m_nAllocationCount = 32;
      hCreepsAtFront.m_Memory.m_nGrowSize = 0x80000000;
      FindUnitsInRadius(v54, &vOurLaneFrontLocation, 0, 1200.0, &hCreepsAtFront, 1, 2, 0, 0, 0);
      if ( hCreepsAtFront.m_Size <= 0 )
        goto LABEL_69;
      v55 = 0;
      fDistanceFactora = 0.0;
      do
      {
        v56 = CEntityHandle::operator CEntityInstance *(&hCreepsAtFront.m_Memory.m_pMemory[v55]);
        v57 = v56;
        if ( v56 != 0 && v56->m_bIsDOTANPC )
        {
          AverageTrueAttackDamage = CDOTA_BaseNPC::GetAverageTrueAttackDamage(v56, 0);
          v171 = AverageTrueAttackDamage * CDOTA_BaseNPC::GetAttacksPerSecond(v57);
          fDistanceFactora = (v171 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(LeadBuildingInLane, 1)))
                           + fDistanceFactora;
        }
        ++v55;
      }
      while ( hCreepsAtFront.m_Size > v55 );
      v58 = (fDistanceFactora - 100.0) / -90.0;
      if ( v58 < 0.0 )
      {
        fEnemyOffensivePower = 1.0;
      }
      else
      {
        if ( v58 > 1.0 )
        {
LABEL_69:
          fEnemyOffensivePower = 0.80000001;
          goto LABEL_70;
        }
        fEnemyOffensivePower = (v58 * -0.19999999) + 1.0;
      }
LABEL_70:
      v59 = (fClosestDistToFront - 5000.0) / 5000.0;
      fDistanceFactorb = 1.0;
      if ( v59 >= 0.0 )
      {
        fDistanceFactorb = 0.69999999;
        if ( v59 <= 1.0 )
          fDistanceFactorb = (-0.30000001 * v59) + 1.0;
      }
      v60 = 100LL * CBaseEntity::GetHealth(LeadBuildingInLane);
      v61 = (*(LeadBuildingInLane->_vptr_IHandleEntity + 156))(LeadBuildingInLane);
      v62 = 1;
      if ( v61 > 0 )
        v62 = v61;
      v63 = 1.0;
      v64 = ((v60 / v62) - 10.0) / 30.0;
      if ( v64 >= 0.0 )
      {
        v63 = 0.89999998;
        if ( v64 <= 1.0 )
          v63 = (-0.10000002 * v64) + 1.0;
      }
      v65 = (fEnemyOffensivePower * fDistanceFactorb) * v63;
      if ( bHasHumanRequest )
      {
        v152.m128_f32[0] = v65 * 1.5;
        v153 = _mm_cmplt_ss(0x3F400000u, v152);
        LODWORD(v158->m_fPushLaneRawDesire[1]) = _mm_andnot_ps(v153, 0x3F400000u).m128_u32[0]
                                               | v152.m128_i32[0] & v153.m128_i32[0];
      }
      else
      {
        v158->m_fPushLaneRawDesire[1] = v65;
      }
      v66 = 0;
      fClosestDistToFronta = 0.0;
      while ( 1 )
      {
        v67 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
        v68 = DOTACommander();
        v69 = &v68->m_GoodGuys;
        v70 = &v68->m_BadGuys;
        if ( v67 != 2 )
          v69 = v70;
        if ( v66 >= v69->m_BotList.m_Size )
          break;
        v71 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
        v72 = DOTACommander();
        v73 = &v72->m_GoodGuys;
        v74 = &v72->m_BadGuys;
        if ( v71 != 2 )
          v73 = v74;
        if ( v66 < v73->m_BotList.m_Size )
        {
          v75 = v73->m_BotList.m_Memory.m_pMemory[v66];
          if ( v75 != 0 )
          {
            v76 = CEntityHandle::operator CEntityInstance *(&v75->m_hUnit);
            if ( v76 != 0 && BYTE3(v76[7]._vptr_IHandleEntity) != 0 )
              v77 = v76;
            else
              v77 = 0;
            if ( (*(v77->_vptr_IHandleEntity + 408))(v77) != 0 )
            {
              fEnemyOffensivePowera = CDOTA_Bot::GetOffensivePower(v75);
              fDistanceFactorc = this->m_eTeam;
              v78 = CEntityHandle::operator CEntityInstance *(&v75->m_hUnit);
              if ( v78 != 0 && BYTE3(v78[7]._vptr_IHandleEntity) != 0 )
                v79 = v78;
              else
                v79 = 0;
              if ( CBaseModelEntity::CanBeSeenByTeam(v79, fDistanceFactorc) )
                goto LABEL_105;
              v80 = 0.0;
              if ( g_pGameRules != 0 )
                v80 = *&g_pGameRules[18].m_szQuestName[20];
              if ( (v80 - v75->m_fLastSeen) < 5.0 )
              {
LABEL_105:
                fDistanceFactord = 1.0;
                v83 = (fsqrt(
                         ((v75->m_vLastSeenLoc.x - vOurLaneFrontLocation.x)
                        * (v75->m_vLastSeenLoc.x - vOurLaneFrontLocation.x))
                       + ((v75->m_vLastSeenLoc.y - vOurLaneFrontLocation.y)
                        * (v75->m_vLastSeenLoc.y - vOurLaneFrontLocation.y)))
                     - 1000.0)
                    / 5000.0;
                if ( v83 >= 0.0 )
                {
                  fDistanceFactord = 0.10000002;
                  if ( v83 <= 1.0 )
                    fDistanceFactord = (-0.89999998 * v83) + 1.0;
                }
                if ( (*(v75->_vptr_CDOTA_Bot + 13))(v75, 1) != 0 )
                {
                  v84 = _mm_cmplt_ss(0x3F400000u, LODWORD(fDistanceFactord));
                  LODWORD(fDistanceFactord) = _mm_andnot_ps(v84, 0x3F400000u).m128_u32[0]
                                            | LODWORD(fDistanceFactord) & v84.m128_i32[0];
                }
                fClosestDistToFronta = (fDistanceFactord * fEnemyOffensivePowera) + fClosestDistToFronta;
              }
              else
              {
                v81 = CEntityHandle::operator CEntityInstance *(&v75->m_hUnit);
                if ( v81 == 0 || (v82 = v81, BYTE3(v81[7]._vptr_IHandleEntity) == 0) )
                  v82 = 0;
                fDistanceFactorh = CDOTA_TeamCommander::GetUnitPotentialValue(this, &vLeadBuildingLocation, v82, 1000.0)
                                 * 0.5;
                fClosestDistToFronta = ((CDOTA_Bot::GetOffensivePower(v75) * fDistanceFactorh) / 255.0)
                                     + fClosestDistToFronta;
              }
            }
          }
        }
        ++v66;
      }
      fDesiredPowerDelta = 0.85000002 * CDOTA_TeamCommander::GetOpposingTeamOffensivePower(this, 0);
      switch ( iTier )
      {
        case 2:
          fDesiredPowerDelta = fDesiredPowerDelta * 1.1;
          break;
        case 3:
          fDesiredPowerDelta = fDesiredPowerDelta * 1.3;
          break;
        case 4:
          fDesiredPowerDelta = fDesiredPowerDelta * 1.2;
          break;
        case 5:
          fDesiredPowerDelta = fDesiredPowerDelta * 1.6;
          break;
        case 6:
          fDesiredPowerDelta = fDesiredPowerDelta * 1.4;
          break;
        default:
          break;
      }
      v85 = 0;
      v86 = 0;
      hProposedPushUnits.m_Memory.m_pMemory = &hProposedPushUnits.m_FixedMemory;
      hCandidatePushUnits.m_Memory.m_pMemory = &hCandidatePushUnits.m_FixedMemory;
      fEnemyOffensivePowerb = -fClosestDistToFronta;
      m_Size = this->m_BotList.m_Size;
      hProposedPushUnits.m_Size = 0;
      hProposedPushUnits.m_Memory.m_nAllocationCount = 16;
      hProposedPushUnits.m_Memory.m_nGrowSize = 0x80000000;
      hCandidatePushUnits.m_Size = 0;
      hCandidatePushUnits.m_Memory.m_nAllocationCount = 16;
      hCandidatePushUnits.m_Memory.m_nGrowSize = 0x80000000;
      if ( m_Size > 0 )
      {
        do
        {
          v96 = this->m_BotList.m_Memory.m_pMemory[v85];
          if ( v96 != 0 )
          {
            p_m_hUnit = &v96->m_hUnit;
            v98 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
            if ( v98 != 0 && BYTE3(v98[7]._vptr_IHandleEntity) != 0 )
              v88 = v98;
            else
              v88 = 0;
            if ( (*(v88->_vptr_IHandleEntity + 408))(v88) != 0 )
            {
              v89 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
              if ( v89 != 0 && BYTE3(v89[7]._vptr_IHandleEntity) != 0 )
              {
                hEntity.m_Index = -1;
                v90 = v89->m_pEntity;
                if ( v90 != 0 )
                {
                  v91 = (v90->m_EHandle.m_Index >> 15) - (v90->m_flags & 1);
                  v92 = 0x7FFF;
                  if ( v90->m_EHandle.m_Index != -1 )
                    v92 = v90->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(hEntity.m_Index) = v92 | hEntity.m_Index & 0x8000;
                  hEntity.m_Index = (v91 << 15) | hEntity.m_Index & 0x7FFF;
                }
              }
              else
              {
                hEntity.m_Index = -1;
              }
              v93 = hCandidatePushUnits.m_Size;
              v94 = hCandidatePushUnits.m_Size;
              if ( hCandidatePushUnits.m_Size == hCandidatePushUnits.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hCandidatePushUnits.m_Memory, 1);
                v94 = hCandidatePushUnits.m_Size;
              }
              hCandidatePushUnits.m_Size = v94 + 1;
              v95 = &hCandidatePushUnits.m_Memory.m_pMemory[v93];
              if ( v95 != 0 )
                v95->m_Index = hEntity.m_Index;
            }
          }
          ++v86;
          ++v85;
        }
        while ( v86 < this->m_BotList.m_Size );
      }
      SortEHANDLEVectorByLocation(&hCandidatePushUnits, &vOurLaneFrontLocation, 0);
      v99 = hCandidatePushUnits.m_Size;
      if ( hCandidatePushUnits.m_Size <= 0 )
      {
        fClosestDistToFrontb = 99999.898;
      }
      else
      {
        v100 = CEntityHandle::operator CEntityInstance *(hCandidatePushUnits.m_Memory.m_pMemory);
        v101 = CBaseEntity::GetAbsOrigin(v100);
        v99 = hCandidatePushUnits.m_Size;
        fClosestDistToFrontb = fsqrt(
                                 (((v101->x - vOurLaneFrontLocation.x) * (v101->x - vOurLaneFrontLocation.x))
                                + ((v101->y - vOurLaneFrontLocation.y) * (v101->y - vOurLaneFrontLocation.y)))
                               + ((v101->z - vOurLaneFrontLocation.z) * (v101->z - vOurLaneFrontLocation.z)));
        if ( hCandidatePushUnits.m_Size > 0 )
        {
          v102 = 0;
          do
          {
            v103 = CEntityHandle::operator CEntityInstance *(&hCandidatePushUnits.m_Memory.m_pMemory[v102]);
            if ( v103 != 0 && BYTE3(v103[7]._vptr_IHandleEntity) != 0 )
            {
              v104 = *&v103[45].m_worldGroupId.m_nHashCode;
              if ( v104 != 0 )
              {
                v105 = (*(v104->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v104->m_pActiveBotMode);
                if ( v105 == GetLanePushMode(v3) )
                {
                  v106 = CEntityHandle::operator CEntityInstance *(&v104->m_hUnit);
                  if ( v106 == 0 || (v107 = v106, BYTE3(v106[7]._vptr_IHandleEntity) == 0) )
                    v107 = 0;
                  v108 = CBaseEntity::GetAbsOrigin(v107);
                  if ( (fsqrt(
                          ((v108->x - vOurLaneFrontLocation.x) * (v108->x - vOurLaneFrontLocation.x))
                        + ((v108->y - vOurLaneFrontLocation.y) * (v108->y - vOurLaneFrontLocation.y)))
                      - fClosestDistToFrontb) < 2000.0 )
                  {
                    fEnemyOffensivePowerb = CDOTA_Bot::GetOffensivePower(v104) + fEnemyOffensivePowerb;
                    v109 = CEntityHandle::operator CEntityInstance *(&v104->m_hUnit);
                    if ( v109 != 0 && BYTE3(v109[7]._vptr_IHandleEntity) != 0 )
                    {
                      hEntity.m_Index = -1;
                      v110 = v109->m_pEntity;
                      if ( v110 != 0 )
                      {
                        v111 = (v110->m_EHandle.m_Index >> 15) - (v110->m_flags & 1);
                        v112 = 0x7FFF;
                        if ( v110->m_EHandle.m_Index != -1 )
                          v112 = v110->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(hEntity.m_Index) = v112 | hEntity.m_Index & 0x8000;
                        hEntity.m_Index = (v111 << 15) | hEntity.m_Index & 0x7FFF;
                      }
                    }
                    else
                    {
                      hEntity.m_Index = -1;
                    }
                    v113 = hProposedPushUnits.m_Size;
                    v114 = hProposedPushUnits.m_Size;
                    if ( hProposedPushUnits.m_Size == hProposedPushUnits.m_Memory.m_nAllocationCount )
                    {
                      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hProposedPushUnits.m_Memory, 1);
                      v114 = hProposedPushUnits.m_Size;
                    }
                    hProposedPushUnits.m_Size = v114 + 1;
                    v115 = &hProposedPushUnits.m_Memory.m_pMemory[v113];
                    if ( v115 != 0 )
                      v115->m_Index = hEntity.m_Index;
                    v116 = v102--;
                    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
                      &hCandidatePushUnits,
                      v116);
                  }
                }
                v99 = hCandidatePushUnits.m_Size;
              }
            }
            ++v102;
          }
          while ( v99 > v102 );
        }
      }
      fBaseDesireThreshold = 0.89999998;
      if ( bHasHumanRequest )
        fBaseDesireThreshold = 1.0;
      if ( v99 > 0 )
      {
        v117 = 0;
        do
        {
          v138 = CEntityHandle::operator CEntityInstance *(&hCandidatePushUnits.m_Memory.m_pMemory[v117]);
          if ( v138 != 0 && v138->m_bIsDOTANPC )
          {
            m_pConnections = v138[2].m_OnUser1.m_pConnections;
            if ( m_pConnections != 0 )
            {
              v140 = CBaseEntity::GetAbsOrigin(v138);
              v141 = fsqrt(
                       ((v140->x - vOurLaneFrontLocation.x) * (v140->x - vOurLaneFrontLocation.x))
                     + ((v140->y - vOurLaneFrontLocation.y) * (v140->y - vOurLaneFrontLocation.y)));
              if ( bHasHumanRequest )
              {
                v118 = -0.050000012;
                v119 = 1064514355;
              }
              else
              {
                v118 = -0.14999998;
                v119 = 1062836634;
              }
              v120 = fDesiredPowerDelta - 1200.0;
              if ( fDesiredPowerDelta == (fDesiredPowerDelta - 1200.0) )
              {
                v121.m128_f32[0] = fEnemyOffensivePowerb - fDesiredPowerDelta;
                v122 = _mm_cmple_ss(0, v121);
                LODWORD(v123) = _mm_andnot_ps(v122, 0x3F800000u).m128_u32[0] | v119 & v122.m128_i32[0];
              }
              else
              {
                v142 = fEnemyOffensivePowerb - v120;
                v143 = fDesiredPowerDelta - v120;
                v144 = 0.0;
                v145 = v142 / v143;
                if ( v145 >= 0.0 )
                  v144 = fminf(1.0, v145);
                v123 = (v144 * v118) + 1.0;
              }
              v124 = 0.0;
              v125 = (v141 - fClosestDistToFrontb) / 2000.0;
              if ( v125 >= 0.0 )
                v124 = fminf(1.0, v125);
              fDesireThreshold = ((v124 * v118) + 1.0) * (v123 * fBaseDesireThreshold);
              fDistanceFactore = m_pConnections->m_fModeDesires[(*(m_pConnections->m_pActiveBotMode->_vptr_CDOTA_BotMode
                                                                 + 2))(m_pConnections->m_pActiveBotMode)];
              v126 = (*(m_pConnections->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pConnections->m_pActiveBotMode);
              if ( v126 == GetLanePushMode(v3) )
                fDistanceFactore = CDOTA_Bot::GetSecondaryModeDesire(m_pConnections);
              if ( fDesireThreshold >= fDistanceFactore )
              {
                v127 = CEntityHandle::operator CEntityInstance *(&m_pConnections->m_hUnit);
                if ( v127 != 0 && BYTE3(v127[7]._vptr_IHandleEntity) != 0 )
                  v128 = v127;
                else
                  v128 = 0;
                v129 = CBaseEntity::GetAbsOrigin(v128);
                fDistanceFactorf = fminf(
                                     fClosestDistToFrontb,
                                     fsqrt(
                                       ((v129->x - vOurLaneFrontLocation.x) * (v129->x - vOurLaneFrontLocation.x))
                                     + ((v129->y - vOurLaneFrontLocation.y) * (v129->y - vOurLaneFrontLocation.y))));
                fEnemyOffensivePowerb = CDOTA_Bot::GetOffensivePower(m_pConnections) + fEnemyOffensivePowerb;
                v130 = CEntityHandle::operator CEntityInstance *(&m_pConnections->m_hUnit);
                if ( v130 != 0 && BYTE3(v130[7]._vptr_IHandleEntity) != 0 )
                {
                  hEntity.m_Index = -1;
                  v131 = v130->m_pEntity;
                  if ( v131 != 0 )
                  {
                    v132 = (v131->m_EHandle.m_Index >> 15) - (v131->m_flags & 1);
                    v133 = 0x7FFF;
                    if ( v131->m_EHandle.m_Index != -1 )
                      v133 = v131->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(hEntity.m_Index) = v133 | hEntity.m_Index & 0x8000;
                    hEntity.m_Index = (v132 << 15) | hEntity.m_Index & 0x7FFF;
                  }
                }
                else
                {
                  hEntity.m_Index = -1;
                }
                v134 = hProposedPushUnits.m_Size;
                v135 = hProposedPushUnits.m_Size;
                if ( hProposedPushUnits.m_Size == hProposedPushUnits.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hProposedPushUnits.m_Memory, 1);
                  v135 = hProposedPushUnits.m_Size;
                }
                hProposedPushUnits.m_Size = v135 + 1;
                v136 = &hProposedPushUnits.m_Memory.m_pMemory[v134];
                if ( v136 != 0 )
                  v136->m_Index = hEntity.m_Index;
                v137 = v117--;
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
                  &hCandidatePushUnits,
                  v137);
                fClosestDistToFrontb = fDistanceFactorf;
              }
            }
          }
          ++v117;
        }
        while ( hCandidatePushUnits.m_Size > v117 );
      }
      SortEHANDLEVectorByLocation(&hProposedPushUnits, &vOurLaneFrontLocation, 1);
      v146 = hProposedPushUnits.m_Size;
      v147 = hProposedPushUnits.m_Size - 1;
      if ( hProposedPushUnits.m_Size - 1 >= 0 && hProposedPushUnits.m_Size > 3 )
      {
        v148 = v147;
        do
        {
          v149 = CEntityHandle::operator CEntityInstance *(&hProposedPushUnits.m_Memory.m_pMemory[v148]);
          if ( v149 != 0 && BYTE3(v149[7]._vptr_IHandleEntity) != 0 )
          {
            v150 = *&v149[45].m_worldGroupId.m_nHashCode;
            if ( v150 != 0 && *(v150 + 180) <= 1 )
            {
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
                &hProposedPushUnits,
                v147);
              v146 = hProposedPushUnits.m_Size;
            }
          }
          if ( --v147 == -1 )
            break;
          --v148;
        }
        while ( v146 > 3 );
        v31 = v146 - 1;
        if ( v146 - 1 >= 0 && v146 > 4 )
        {
          v32 = v31;
          do
          {
            v33 = CEntityHandle::operator CEntityInstance *(&hProposedPushUnits.m_Memory.m_pMemory[v32]);
            if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
            {
              v34 = *&v33[45].m_worldGroupId.m_nHashCode;
              if ( v34 != 0 && *(v34 + 180) <= 2 )
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
                  &hProposedPushUnits,
                  v31);
            }
            if ( --v31 < 0 )
              break;
            --v32;
          }
          while ( hProposedPushUnits.m_Size > 4 );
        }
      }
      v35 = 1.0;
      v36 = (fClosestDistToFrontb - 2000.0) / 6000.0;
      if ( v36 >= 0.0 )
      {
        v35 = 0.69999999;
        if ( v36 <= 1.0 )
          v35 = (-0.30000001 * v36) + 1.0;
      }
      if ( fDesiredPowerDelta == -250.0 )
      {
        v37.m128_f32[0] = fEnemyOffensivePowerb + 250.0;
        v38 = _mm_cmple_ss(0, v37);
        LODWORD(v39) = _mm_andnot_ps(v38, 0x3F800000u).m128_u32[0] | v38.m128_i32[0] & 0x3E99999A;
      }
      else
      {
        v151 = (fEnemyOffensivePowerb - fDesiredPowerDelta) / (-250.0 - fDesiredPowerDelta);
        v39 = 1.0;
        if ( v151 >= 0.0 )
        {
          v39 = 0.30000001;
          if ( v151 <= 1.0 )
            v39 = (v151 * -0.69999999) + 1.0;
        }
      }
      v40 = v39 * v35;
      v41 = 0x3F800000u;
      v158->m_fPushLaneConvenienceDesire[1] = v40;
      v42 = v40 * v158->m_fPushLaneRawDesire[1];
      if ( nHumansInMode != 0 )
        v41 = 0x3F99999Au;
      v41.m128_f32[0] = v41.m128_f32[0] * v42;
      v43 = _mm_cmplt_ss(v41, 0x3F570A3Du);
      v44 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_or_ps(_mm_andnot_ps(v43, 0x3F570A3Du), _mm_and_ps(v41, v43))));
      if ( iRequestCount > 0 )
      {
        v45 = 0.83999997;
        v46 = (iRequestCount - 1.0) * 0.5;
        if ( v46 >= 0.0 )
        {
          v45 = 0.95999998;
          if ( v46 <= 1.0 )
            v45 = (0.12 * v46) + 0.83999997;
        }
        v47 = _mm_cvtsi32_si128(LODWORD(v44));
        *v47.m128i_i32 = fmaxf(*v47.m128i_i32, v45);
        v44 = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
      }
      if ( nHumansInMode != 0 )
      {
        if ( g_pGameRules != 0 )
        {
          GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
          if ( GameModeEntity != 0 && GameModeEntity->m_bBotsAlwaysPushWithHuman && v44 <= 0.95999998 )
          {
            v49 = g_pGameRules;
            v44 = 0.95999998;
          }
          else
          {
            v49 = g_pGameRules;
          }
        }
        else
        {
          v49 = 0;
        }
      }
      else
      {
        v49 = g_pGameRules;
      }
      v158->m_fPushLaneDesire[1] = v44;
      if ( v49 != 0 )
      {
        v50 = CDOTAGamerules::GetGameModeEntity(v49);
        if ( v50 != 0 )
        {
          m_nBotMaxPushTier = v50->m_nBotMaxPushTier;
          if ( m_nBotMaxPushTier >= 0 && m_nBotMaxPushTier < iTier )
            v158->m_fPushLaneDesire[1] = 0.0;
        }
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(v155);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddVectorToTail<CUtlMemory<CHandle<CBaseEntity>,int>>(
        v155,
        &hProposedPushUnits);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCandidatePushUnits);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hProposedPushUnits);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreepsAtFront);
    }
    ++v155;
    ++v3;
    v158 = (v158 + 4);
  }
  while ( v3 != DOTA_LANE::DOTA_LANE_MAX );
  v52 = g_pGameRules;
  v53 = 9 * (this->m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST);
  if ( *&g_pGameRules[19].m_szQuestName[84] > 0.0 )
  {
    if ( CountdownTimer::Now(&g_pGameRules[19].m_szQuestName[72]) < *&v52[19].m_szQuestName[84] )
      goto LABEL_57;
    v52 = g_pGameRules;
  }
  v154 = &v52[19].m_szQuestName[96];
  LOBYTE(vLeadBuildingLocation.x) = (255.0 * this->m_fPushLaneRawDesire[1]);
  if ( LOBYTE(vLeadBuildingLocation.x) != v52[19].m_szQuestName[v53 + 96] )
  {
    CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set(
      v154,
      v53,
      &vLeadBuildingLocation);
    v52 = g_pGameRules;
    v154 = &g_pGameRules[19].m_szQuestName[96];
  }
  LOBYTE(vLeadBuildingLocation.x) = (255.0 * this->m_fPushLaneConvenienceDesire[1]);
  if ( LOBYTE(vLeadBuildingLocation.x) != v52[19].m_szQuestName[v53 + 97] )
  {
    CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set(
      v154,
      v53 + 1,
      &vLeadBuildingLocation);
    v52 = g_pGameRules;
    v154 = &g_pGameRules[19].m_szQuestName[96];
  }
  LOBYTE(vLeadBuildingLocation.x) = (255.0 * this->m_fPushLaneDesire[1]);
  if ( LOBYTE(vLeadBuildingLocation.x) != v52[19].m_szQuestName[v53 + 98] )
  {
    CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set(
      v154,
      v53 + 2,
      &vLeadBuildingLocation);
    v52 = g_pGameRules;
    v154 = &g_pGameRules[19].m_szQuestName[96];
  }
  LOBYTE(vLeadBuildingLocation.x) = (255.0 * this->m_fPushLaneRawDesire[2]);
  if ( LOBYTE(vLeadBuildingLocation.x) != v52[19].m_szQuestName[v53 + 99] )
  {
    CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set(
      v154,
      v53 + 3,
      &vLeadBuildingLocation);
    v52 = g_pGameRules;
    v154 = &g_pGameRules[19].m_szQuestName[96];
  }
  LOBYTE(vLeadBuildingLocation.x) = (255.0 * this->m_fPushLaneConvenienceDesire[2]);
  if ( LOBYTE(vLeadBuildingLocation.x) != v52[19].m_szQuestName[v53 + 100] )
  {
    CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set(
      v154,
      v53 + 4,
      &vLeadBuildingLocation);
    v52 = g_pGameRules;
    v154 = &g_pGameRules[19].m_szQuestName[96];
  }
  LOBYTE(vLeadBuildingLocation.x) = (255.0 * this->m_fPushLaneDesire[2]);
  if ( LOBYTE(vLeadBuildingLocation.x) != v52[19].m_szQuestName[v53 + 101] )
  {
    CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set(
      v154,
      v53 + 5,
      &vLeadBuildingLocation);
    v52 = g_pGameRules;
    v154 = &g_pGameRules[19].m_szQuestName[96];
  }
  LOBYTE(vLeadBuildingLocation.x) = (255.0 * this->m_fPushLaneRawDesire[3]);
  if ( LOBYTE(vLeadBuildingLocation.x) != v52[19].m_szQuestName[v53 + 102] )
  {
    CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set(
      v154,
      v53 + 6,
      &vLeadBuildingLocation);
    v52 = g_pGameRules;
    v154 = &g_pGameRules[19].m_szQuestName[96];
  }
  LOBYTE(vLeadBuildingLocation.x) = (255.0 * this->m_fPushLaneConvenienceDesire[3]);
  if ( LOBYTE(vLeadBuildingLocation.x) != v52[19].m_szQuestName[v53 + 103] )
  {
    CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set(
      v154,
      v53 + 7,
      &vLeadBuildingLocation);
    v52 = g_pGameRules;
    v154 = &g_pGameRules[19].m_szQuestName[96];
  }
  LOBYTE(vLeadBuildingLocation.x) = (255.0 * this->m_fPushLaneDesire[3]);
  if ( LOBYTE(vLeadBuildingLocation.x) != v52[19].m_szQuestName[v53 + 104] )
    CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugPushLane>::Set(
      v154,
      v53 + 8,
      &vLeadBuildingLocation);
LABEL_57:
  if ( VProf_4788 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_TeamCommander::UpdateDefendLaneDesires  (line 5092, @0x0000000002848550, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CVProfScope, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, FastSqrt, Get, GetActiveModeDesire, GetAmountAlongLane, GetBotByIndex, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetLaneFrontAmount, GetLaneFrontLocation, GetLeadBuildingInLaneTier, GetOpposingTeamCommander, GetOpposingTeamNumber, GetSerialNumber, GetTeamCommander, GetTeamNumber, GetTimeSinceLastSeen, GetUnit, GrowMemory, IsElapsed, IsEnabled, LaneAmountToDistance, Length2D, Max<float>, Min<float>, RemapValClamped, Set, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator-, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_TeamCommander::DoBotScriptUpdateDefendLaneDesires, CDOTA_TeamCommander::GetLeadBuildingInLane, CDOTA_TeamCommander::HasRequestActive, GetLaneDefendMode, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::AddVectorToTail<CUtlMemory<CHandle<CBaseEntity>, int> >, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CountdownTimer::Now, CVProfile::ExitScope, CDOTA_TeamCommander::CalculateLocationAlongLane, CDOTA_TeamCommander::GetLeadBuildingInLaneTier, CBaseEntity::GetHealth (30 total)
// callers: CDOTA_TeamCommander::Think
// strings: "CDOTA_TeamCommander::UpdateDefendLaneDesires"
// globals: jpt_2848EAF
void __fastcall CDOTA_TeamCommander::UpdateDefendLaneDesires(CDOTA_TeamCommander *const this)
{
  int m_enabled; // r10d
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // rax
  CEntityIdentity *m_pEntity; // rax
  int v5; // edx
  __int16 v6; // cx
  __int64 v7; // r13
  int v8; // r12d
  CDOTA_Bot *v9; // rax
  int v10; // r14d
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  bool m_bLateGame; // al
  float v16; // xmm1_4
  float v17; // xmm1_4
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  CGameRules *v27; // r14
  int v28; // r12d
  __int64 v29; // rax
  __m128 v30; // xmm0
  vec_t v31; // xmm1_4
  DOTATeam_t m_eTeam; // edi
  __int64 v33; // r14
  int v34; // r13d
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // r12
  __int64 v37; // r12
  int v38; // r13d
  CDOTA_Commander *v39; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  int v42; // r13d
  CDOTA_Commander *v43; // rax
  CDOTA_TeamCommander *v44; // rdx
  CDOTA_TeamCommander *v45; // rax
  CDOTA_Bot *v46; // r13
  CEntityInstance *v47; // rax
  DOTATeam_t v48; // r15d
  CEntityInstance *v49; // rax
  CBaseModelEntity *v50; // rdi
  float v51; // xmm0_4
  const Vector *AbsOrigin; // r15
  CEntityInstance *v53; // rax
  const CBaseEntity *v54; // rdi
  const Vector *v55; // rax
  float v56; // xmm0_4
  CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane> *v57; // rdi
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm0_4
  int m_Size; // edi
  __int64 v62; // r13
  int v63; // r12d
  CEntityIdentity *v64; // rdx
  int v65; // eax
  __int16 v66; // cx
  __int64 v67; // r14
  int v68; // eax
  CHandle<CBaseEntity> *v69; // rax
  CDOTA_Bot *v70; // r14
  const CEntityHandle *p_m_hUnit; // r14
  CEntityInstance *v72; // rax
  CEntityInstance *v73; // rax
  const Vector *v74; // rax
  int v75; // r13d
  __m128 v76; // xmm1
  __m128 v77; // xmm7
  float OffensivePower; // xmm0_4
  CEntityIdentity *v79; // rax
  int v80; // edx
  __int16 v81; // cx
  int v82; // esi
  CEntityInstance *v83; // rax
  const CBaseEntity *v84; // r12
  CDOTA_Bot *v85; // r14
  const Vector *v86; // r15
  const Vector *v87; // rax
  __m128i v88; // xmm0
  __m128 v89; // xmm1
  float v90; // xmm1_4
  int v91; // r15d
  float v92; // xmm4_4
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v93; // [rsp+30h] [rbp-290h]
  CDOTA_TeamCommander *v94; // [rsp+38h] [rbp-288h]
  bool bHasHumanRequest; // [rsp+48h] [rbp-278h]
  int nHumansInMode; // [rsp+50h] [rbp-270h]
  bool VProf_5094; // [rsp+56h] [rbp-26Ah]
  bool bInBase; // [rsp+57h] [rbp-269h]
  float fArrivalSlackTime; // [rsp+58h] [rbp-268h]
  int iTier; // [rsp+5Ch] [rbp-264h]
  int iTiera; // [rsp+5Ch] [rbp-264h]
  float fTimeUntilDestruction; // [rsp+60h] [rbp-260h]
  float fTimeUntilDestructiona; // [rsp+60h] [rbp-260h]
  DOTA_LANE iLane; // [rsp+64h] [rbp-25Ch]
  float fNetOffensivePower; // [rsp+68h] [rbp-258h]
  int fNetOffensivePowera; // [rsp+68h] [rbp-258h]
  float fDesireThreshold; // [rsp+6Ch] [rbp-254h]
  float fDesireThresholda; // [rsp+6Ch] [rbp-254h]
  float fDesireThresholdb; // [rsp+6Ch] [rbp-254h]
  CDOTA_BaseNPC_Building *pLeadBuilding; // [rsp+70h] [rbp-250h]
  float fCreepDPSb; // [rsp+78h] [rbp-248h]
  float fCreepDPSc; // [rsp+78h] [rbp-248h]
  float fCreepDPS; // [rsp+78h] [rbp-248h]
  float fCreepDPSa; // [rsp+78h] [rbp-248h]
  float fTimeToArrival; // [rsp+7Ch] [rbp-244h]
  float fTimeToArrivalb; // [rsp+7Ch] [rbp-244h]
  float fTimeToArrivala; // [rsp+7Ch] [rbp-244h]
  CHandle<CBaseEntity> v118; // [rsp+80h] [rbp-240h] BYREF
  int iRequestCount; // [rsp+8Ch] [rbp-234h] BYREF
  Vector vLaneFrontLocation; // [rsp+90h] [rbp-230h] BYREF
  Vector v121; // [rsp+A0h] [rbp-220h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,16ul> hCandidateDefendUnits; // [rsp+B0h] [rbp-210h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,16ul> hProposedDefendUnits; // [rsp+110h] [rbp-1B0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hCreeps; // [rsp+170h] [rbp-150h] BYREF
  unsigned __int64 v125; // [rsp+288h] [rbp-38h]

  v125 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_5094 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::UpdateDefendLaneDesires", 0, "Bots", 0, 4);
  if ( !CDOTA_TeamCommander::DoBotScriptUpdateDefendLaneDesires(this) )
  {
    v94 = this;
    v93 = &this->m_hProposedDefendUnits[1];
    for ( iLane = DOTA_LANE::DOTA_LANE_TOP; iLane != DOTA_LANE::DOTA_LANE_MAX; ++iLane )
    {
      LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(this, iLane);
      pLeadBuilding = LeadBuildingInLane;
      if ( LeadBuildingInLane != 0 )
      {
        vLaneFrontLocation.x = NAN;
        iRequestCount = 0;
        m_pEntity = LeadBuildingInLane->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v6 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(vLaneFrontLocation.x) = v6 | LOWORD(vLaneFrontLocation.x) & 0x8000;
          LODWORD(vLaneFrontLocation.x) = (v5 << 15) | LOWORD(vLaneFrontLocation.x) & 0x7FFF;
        }
        bHasHumanRequest = CDOTA_TeamCommander::HasRequestActive(this, 3, &vLaneFrontLocation, &iRequestCount);
        if ( this->m_BotList.m_Size <= 0 )
        {
          nHumansInMode = 0;
        }
        else
        {
          nHumansInMode = 0;
          v7 = 0;
          v8 = 0;
          do
          {
            v9 = this->m_BotList.m_Memory.m_pMemory[v7];
            if ( v9->m_bHuman )
            {
              v10 = (*(v9->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v9->m_pActiveBotMode);
              nHumansInMode += v10 == GetLaneDefendMode(iLane);
            }
            ++v8;
            ++v7;
          }
          while ( v8 < this->m_BotList.m_Size );
        }
        v29 = iLane + 4LL * (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST);
        v30 = LODWORD(this->m_LaneFrontCreepsAmounts[0][v29]);
        v30.m128_f32[0] = (v30.m128_f32[0]
                         - pLeadBuilding->m_fAmountAlongLane[this->m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST])
                        * v94->m_LaneLengths[1];
        LODWORD(fTimeUntilDestruction) = _mm_andnot_ps(_mm_cmplt_ss(v30, 0LL), v30).m128_u32[0];
        *&v121.x = CDOTA_TeamCommander::CalculateLocationAlongLane(
                     this,
                     iLane,
                     this->m_LaneFrontTowersAmounts[0][v29],
                     0.0,
                     0.0,
                     0).m128i_u64[0];
        v121.z = v31;
        vLaneFrontLocation = v121;
        iTier = CDOTA_TeamCommander::GetLeadBuildingInLaneTier(this, iLane);
        bInBase = iTier > 2;
        CBaseEntity::GetHealth(pLeadBuilding);
        m_eTeam = this->m_eTeam;
        hCreeps.m_Size = 0;
        hCreeps.m_Memory.m_nAllocationCount = 64;
        hCreeps.m_Memory.m_nGrowSize = 0x80000000;
        hCreeps.m_Memory.m_pMemory = &hCreeps.m_FixedMemory;
        FindUnitsInRadius(m_eTeam, &vLaneFrontLocation, 0, 800.0, &hCreeps, 3, 2, 0, 0, 0);
        if ( hCreeps.m_Size <= 0 )
        {
          fTimeToArrival = 0.0;
        }
        else
        {
          fTimeToArrival = 0.0;
          v33 = 0;
          v34 = 0;
          do
          {
            v35 = CEntityHandle::operator CEntityInstance *(&hCreeps.m_Memory.m_pMemory[v33]);
            v36 = v35;
            if ( v35 != 0 && v35->m_bIsDOTANPC )
            {
              fCreepDPSb = CDOTA_BaseNPC::GetAverageTrueAttackDamage(v35, 0);
              fCreepDPSc = fCreepDPSb * CDOTA_BaseNPC::GetAttacksPerSecond(v36);
              fCreepDPS = fCreepDPSc * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pLeadBuilding, 1));
              if ( this->m_eTeam == v36->m_iTeamNum.m_Value )
              {
                CBaseEntity::GetHealth(v36);
                fTimeToArrival = fTimeToArrival - fCreepDPS;
              }
              else
              {
                fTimeToArrival = fTimeToArrival + fCreepDPS;
              }
            }
            ++v34;
            ++v33;
          }
          while ( hCreeps.m_Size > v34 );
        }
        fNetOffensivePowera = 0;
        v37 = 0;
        fCreepDPSa = 0.0;
        while ( 1 )
        {
          v38 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
          v39 = DOTACommander();
          p_m_GoodGuys = &v39->m_GoodGuys;
          p_m_BadGuys = &v39->m_BadGuys;
          if ( v38 != 2 )
            p_m_GoodGuys = p_m_BadGuys;
          if ( v37 >= p_m_GoodGuys->m_BotList.m_Size )
            break;
          v42 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
          v43 = DOTACommander();
          v44 = &v43->m_GoodGuys;
          v45 = &v43->m_BadGuys;
          if ( v42 != 2 )
            v44 = v45;
          if ( v37 < v44->m_BotList.m_Size )
          {
            v46 = v44->m_BotList.m_Memory.m_pMemory[v37];
            if ( v46 != 0 )
            {
              v47 = CEntityHandle::operator CEntityInstance *(&v46->m_hUnit);
              if ( v47 != 0
                && BYTE3(v47[7]._vptr_IHandleEntity) != 0
                && iLane == v46->m_CurrentLane
                && (*(v47->_vptr_IHandleEntity + 408))(v47) != 0 )
              {
                v48 = this->m_eTeam;
                v49 = CEntityHandle::operator CEntityInstance *(&v46->m_hUnit);
                if ( v49 != 0 && BYTE3(v49[7]._vptr_IHandleEntity) != 0 )
                  v50 = v49;
                else
                  v50 = 0;
                if ( CBaseModelEntity::CanBeSeenByTeam(v50, v48) )
                  goto LABEL_71;
                v51 = 0.0;
                if ( g_pGameRules != 0 )
                  v51 = *&g_pGameRules[18].m_szQuestName[20];
                if ( (v51 - v46->m_fLastSeen) < 5.0 )
                {
LABEL_71:
                  ++fNetOffensivePowera;
                  AbsOrigin = CBaseEntity::GetAbsOrigin(pLeadBuilding);
                  v53 = CEntityHandle::operator CEntityInstance *(&v46->m_hUnit);
                  if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
                    v54 = v53;
                  else
                    v54 = 0;
                  v55 = CBaseEntity::GetAbsOrigin(v54);
                  fDesireThreshold = 1.0;
                  v56 = (fsqrt(
                           ((v55->x - AbsOrigin->x) * (v55->x - AbsOrigin->x))
                         + ((v55->y - AbsOrigin->y) * (v55->y - AbsOrigin->y)))
                       - 1000.0)
                      / 3000.0;
                  if ( v56 >= 0.0 )
                  {
                    fDesireThreshold = 0.5;
                    if ( v56 <= 1.0 )
                      fDesireThreshold = (-0.5 * v56) + 1.0;
                  }
                  fTimeToArrival = ((CDOTA_Bot::GetEstimatedDamageToTarget(v46, 1, pLeadBuilding, 10.0, 1)
                                   * fDesireThreshold)
                                  / 10.0)
                                 + fTimeToArrival;
                  fCreepDPSa = CDOTA_Bot::GetOffensivePower(v46) + fCreepDPSa;
                }
              }
            }
          }
          ++v37;
        }
        switch ( iTier )
        {
          case 2:
            fArrivalSlackTime = 10.0;
            fTimeToArrival = fTimeToArrival * 1.3;
            goto LABEL_101;
          case 3:
            fArrivalSlackTime = 20.0;
            fTimeToArrival = fTimeToArrival + fTimeToArrival;
            goto LABEL_101;
          case 4:
            fArrivalSlackTime = 25.0;
            fTimeToArrival = fTimeToArrival * 4.0;
            goto LABEL_101;
          case 5:
            fArrivalSlackTime = 35.0;
            fTimeToArrival = fTimeToArrival * 5.0;
            goto LABEL_101;
          case 6:
            fArrivalSlackTime = 45.0;
            fTimeToArrival = fTimeToArrival * 8.0;
            goto LABEL_106;
          default:
            fArrivalSlackTime = 5.0;
LABEL_101:
            if ( bHasHumanRequest )
              fArrivalSlackTime = 35.0;
LABEL_106:
            v58 = fNetOffensivePowera / 3.0;
            if ( v58 < 0.0 )
            {
              v59 = 50.0;
            }
            else
            {
              v59 = 300.0;
              if ( v58 <= 1.0 )
                v59 = (250.0 * v58) + 50.0;
            }
            fDesireThresholda = fTimeUntilDestruction / v59;
            if ( fTimeToArrival <= 0.0 )
              v60 = 9999.9004;
            else
              v60 = CBaseEntity::GetHealth(pLeadBuilding) / fTimeToArrival;
            m_Size = this->m_BotList.m_Size;
            v62 = 0;
            v63 = 0;
            hCandidateDefendUnits.m_Memory.m_pMemory = &hCandidateDefendUnits.m_FixedMemory;
            fTimeUntilDestructiona = v60 + fDesireThresholda;
            hCandidateDefendUnits.m_Size = 0;
            hCandidateDefendUnits.m_Memory.m_nAllocationCount = 16;
            hCandidateDefendUnits.m_Memory.m_nGrowSize = 0x80000000;
            hProposedDefendUnits.m_Size = 0;
            hProposedDefendUnits.m_Memory.m_nAllocationCount = 16;
            hProposedDefendUnits.m_Memory.m_nGrowSize = 0x80000000;
            hProposedDefendUnits.m_Memory.m_pMemory = &hProposedDefendUnits.m_FixedMemory;
            if ( m_Size > 0 )
            {
              do
              {
                v70 = this->m_BotList.m_Memory.m_pMemory[v62];
                if ( v70 != 0 )
                {
                  p_m_hUnit = &v70->m_hUnit;
                  v72 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
                  if ( v72 != 0
                    && BYTE3(v72[7]._vptr_IHandleEntity) != 0
                    && (*(v72->_vptr_IHandleEntity + 408))(v72) != 0 )
                  {
                    v73 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
                    if ( v73 != 0 && BYTE3(v73[7]._vptr_IHandleEntity) != 0 )
                    {
                      v118.m_Index = -1;
                      v64 = v73->m_pEntity;
                      if ( v64 != 0 )
                      {
                        v65 = (v64->m_EHandle.m_Index >> 15) - (v64->m_flags & 1);
                        v66 = 0x7FFF;
                        if ( v64->m_EHandle.m_Index != -1 )
                          v66 = v64->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(v118.m_Index) = v66 | v118.m_Index & 0x8000;
                        v118.m_Index = (v65 << 15) | v118.m_Index & 0x7FFF;
                      }
                    }
                    else
                    {
                      v118.m_Index = -1;
                    }
                    v67 = hCandidateDefendUnits.m_Size;
                    v68 = hCandidateDefendUnits.m_Size;
                    if ( hCandidateDefendUnits.m_Size == hCandidateDefendUnits.m_Memory.m_nAllocationCount )
                    {
                      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hCandidateDefendUnits.m_Memory, 1);
                      v68 = hCandidateDefendUnits.m_Size;
                    }
                    hCandidateDefendUnits.m_Size = v68 + 1;
                    v69 = &hCandidateDefendUnits.m_Memory.m_pMemory[v67];
                    if ( v69 != 0 )
                      v69->m_Index = v118.m_Index;
                  }
                }
                ++v63;
                ++v62;
              }
              while ( v63 < this->m_BotList.m_Size );
            }
            v74 = CBaseEntity::GetAbsOrigin(pLeadBuilding);
            SortEHANDLEVectorByLocation(&hCandidateDefendUnits, v74, 0);
            *&iTiera = -fCreepDPSa;
            if ( hCandidateDefendUnits.m_Size <= 0 )
            {
              fNetOffensivePower = -fCreepDPSa;
            }
            else
            {
              fNetOffensivePower = -fCreepDPSa;
              v75 = 0;
              do
              {
                v83 = CEntityHandle::operator CEntityInstance *(&hCandidateDefendUnits.m_Memory.m_pMemory[v75]);
                v84 = v83;
                if ( v83 != 0 && BYTE3(v83[7]._vptr_IHandleEntity) != 0 )
                {
                  v85 = *&v83[45].m_worldGroupId.m_nHashCode;
                  if ( v85 != 0 )
                  {
                    v86 = CBaseEntity::GetAbsOrigin(pLeadBuilding);
                    v87 = CBaseEntity::GetAbsOrigin(v84);
                    fTimeToArrivalb = ((v87->x - v86->x) * (v87->x - v86->x)) + ((v87->y - v86->y) * (v87->y - v86->y));
                    v88 = LODWORD(fTimeToArrivalb);
                    *v88.m128i_i32 = fsqrt(fTimeToArrivalb);
                    fTimeToArrivala = COERCE_FLOAT(_mm_cvtsi128_si32(v88)) / (*(v84->_vptr_IHandleEntity + 386))(v84);
                    if ( (*(v85->_vptr_CDOTA_Bot + 13))(v85, 1) != 0 )
                    {
                      v89 = _mm_cmpge_ss(0x40800000u, LODWORD(fTimeToArrivala));
                      LODWORD(fTimeToArrivala) = _mm_andnot_ps(v89, 0x40800000u).m128_u32[0]
                                               | LODWORD(fTimeToArrivala) & v89.m128_i32[0];
                    }
                    if ( fCreepDPSa == (0.5 * *&iTiera) )
                    {
                      v76.m128_f32[0] = fNetOffensivePower - fCreepDPSa;
                      v77 = _mm_cmple_ss(0LL, v76);
                      LODWORD(fDesireThresholdb) = _mm_andnot_ps(v77, 0x3F59999Au).m128_u32[0]
                                                 | v77.m128_i32[0] & 0x3E19999A;
                    }
                    else
                    {
                      fDesireThresholdb = 0.85000002;
                      v90 = (fNetOffensivePower - (0.5 * *&iTiera)) / (fCreepDPSa - (0.5 * *&iTiera));
                      if ( v90 >= 0.0 )
                      {
                        fDesireThresholdb = 0.14999998;
                        if ( v90 <= 1.0 )
                          fDesireThresholdb = (v90 * -0.70000005) + 0.85000002;
                      }
                    }
                    if ( !this->m_bLateGame )
                      fDesireThresholdb = fDesireThresholdb - 0.30000001;
                    if ( (fTimeUntilDestructiona + fArrivalSlackTime) > fTimeToArrivala
                      && (bInBase
                       || (v91 = (*(v85->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v85->m_pActiveBotMode)) == GetLaneDefendMode(iLane)
                       || fDesireThresholdb >= v85->m_fModeDesires[(*(v85->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v85->m_pActiveBotMode)]) )
                    {
                      OffensivePower = CDOTA_Bot::GetOffensivePower(v85);
                      v118.m_Index = -1;
                      v79 = v84->m_pEntity;
                      fNetOffensivePower = OffensivePower + fNetOffensivePower;
                      if ( v79 != 0 )
                      {
                        v80 = (v79->m_EHandle.m_Index >> 15) - (v79->m_flags & 1);
                        v81 = 0x7FFF;
                        if ( v79->m_EHandle.m_Index != -1 )
                          v81 = v79->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(v118.m_Index) = v81 | v118.m_Index & 0x8000;
                        v118.m_Index = (v80 << 15) | v118.m_Index & 0x7FFF;
                      }
                      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
                        &hProposedDefendUnits,
                        &v118);
                      v82 = v75--;
                      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
                        &hCandidateDefendUnits,
                        v82);
                    }
                  }
                }
                ++v75;
              }
              while ( hCandidateDefendUnits.m_Size > v75 );
            }
            if ( bInBase )
            {
              v12 = -1200.0;
              v11 = -5000.0;
            }
            else
            {
              v11 = -1200.0;
              v12 = 0.0;
            }
            v13 = 0.0;
            v14 = (fTimeUntilDestructiona - 40.0) / -30.0;
            if ( v14 >= 0.0 )
            {
              v13 = 1.0;
              if ( v14 <= 1.0 )
                v13 = v14 + 0.0;
            }
            m_bLateGame = this->m_bLateGame;
            v16 = 0.60000002;
            if ( m_bLateGame )
              v16 = 1.0;
            v17 = v16 * v13;
            v94->m_fDefendLaneUrgencyDesire[1] = v17;
            if ( v12 == v11 )
            {
              v18.m128_f32[0] = fNetOffensivePower - v11;
              v19 = _mm_cmple_ss(0LL, v18);
              LODWORD(v20) = _mm_andnot_ps(v19, 0x3F800000u).m128_u32[0] | v19.m128_i32[0] & 0x3E99999A;
            }
            else
            {
              v92 = (fNetOffensivePower - v12) / (v11 - v12);
              if ( v92 < 0.0 )
              {
                v20 = 1.0;
              }
              else
              {
                v20 = 0.30000001;
                if ( v92 <= 1.0 )
                  v20 = (v92 * -0.69999999) + 1.0;
              }
            }
            v94->m_fDefendLanePowerDesire[1] = v20;
            v21 = v20 * v17;
            if ( nHumansInMode != 0 )
              v22 = 1.2;
            else
              v22 = 1.0;
            v23 = fminf(v21 * v22, 0.85000002);
            if ( iRequestCount > 0 )
            {
              v24 = (iRequestCount - 1.0) * 0.5;
              if ( v24 < 0.0 )
              {
                v25 = 0.83999997;
              }
              else
              {
                v25 = 0.95999998;
                if ( v24 <= 1.0 )
                  v25 = (0.12 * v24) + 0.83999997;
              }
              v23 = fmaxf(v23, v25);
            }
            v26 = 0.75;
            if ( m_bLateGame )
              v26 = 1.0;
            v94->m_fDefendLaneDesire[1] = v23 * v26;
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(v93);
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddVectorToTail<CUtlMemory<CHandle<CBaseEntity>,int>>(
              v93,
              &hProposedDefendUnits);
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hProposedDefendUnits);
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCandidateDefendUnits);
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCreeps);
            break;
        }
      }
      v94 = (v94 + 4);
      ++v93;
    }
    v27 = g_pGameRules;
    v28 = 9 * (this->m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST);
    if ( *&g_pGameRules[19].m_szQuestName[84] > 0.0 )
    {
      if ( CountdownTimer::Now(&g_pGameRules[19].m_szQuestName[72]) < *&v27[19].m_szQuestName[84] )
        goto LABEL_38;
      v27 = g_pGameRules;
    }
    v57 = &v27[19].m_szQuestName[114];
    LOBYTE(vLaneFrontLocation.x) = (255.0 * this->m_fDefendLaneUrgencyDesire[1]);
    if ( LOBYTE(vLaneFrontLocation.x) != v27[19].m_szQuestName[v28 + 114] )
    {
      CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set(
        v57,
        v28,
        &vLaneFrontLocation);
      v27 = g_pGameRules;
      v57 = &g_pGameRules[19].m_szQuestName[114];
    }
    LOBYTE(vLaneFrontLocation.x) = (255.0 * this->m_fDefendLanePowerDesire[1]);
    if ( LOBYTE(vLaneFrontLocation.x) != v27[19].m_szQuestName[v28 + 115] )
    {
      CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set(
        v57,
        v28 + 1,
        &vLaneFrontLocation);
      v27 = g_pGameRules;
      v57 = &g_pGameRules[19].m_szQuestName[114];
    }
    LOBYTE(vLaneFrontLocation.x) = (255.0 * this->m_fDefendLaneDesire[1]);
    if ( LOBYTE(vLaneFrontLocation.x) != v27[19].m_szQuestName[v28 + 116] )
    {
      CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set(
        v57,
        v28 + 2,
        &vLaneFrontLocation);
      v27 = g_pGameRules;
      v57 = &g_pGameRules[19].m_szQuestName[114];
    }
    LOBYTE(vLaneFrontLocation.x) = (255.0 * this->m_fDefendLaneUrgencyDesire[2]);
    if ( LOBYTE(vLaneFrontLocation.x) != v27[19].m_szQuestName[v28 + 117] )
    {
      CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set(
        v57,
        v28 + 3,
        &vLaneFrontLocation);
      v27 = g_pGameRules;
      v57 = &g_pGameRules[19].m_szQuestName[114];
    }
    LOBYTE(vLaneFrontLocation.x) = (255.0 * this->m_fDefendLanePowerDesire[2]);
    if ( LOBYTE(vLaneFrontLocation.x) != v27[19].m_szQuestName[v28 + 118] )
    {
      CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set(
        v57,
        v28 + 4,
        &vLaneFrontLocation);
      v27 = g_pGameRules;
      v57 = &g_pGameRules[19].m_szQuestName[114];
    }
    LOBYTE(vLaneFrontLocation.x) = (255.0 * this->m_fDefendLaneDesire[2]);
    if ( LOBYTE(vLaneFrontLocation.x) != v27[19].m_szQuestName[v28 + 119] )
    {
      CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set(
        v57,
        v28 + 5,
        &vLaneFrontLocation);
      v27 = g_pGameRules;
      v57 = &g_pGameRules[19].m_szQuestName[114];
    }
    LOBYTE(vLaneFrontLocation.x) = (255.0 * this->m_fDefendLaneUrgencyDesire[3]);
    if ( LOBYTE(vLaneFrontLocation.x) != v27[19].m_szQuestName[v28 + 120] )
    {
      CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set(
        v57,
        v28 + 6,
        &vLaneFrontLocation);
      v27 = g_pGameRules;
      v57 = &g_pGameRules[19].m_szQuestName[114];
    }
    LOBYTE(vLaneFrontLocation.x) = (255.0 * this->m_fDefendLanePowerDesire[3]);
    if ( LOBYTE(vLaneFrontLocation.x) != v27[19].m_szQuestName[v28 + 121] )
    {
      CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set(
        v57,
        v28 + 7,
        &vLaneFrontLocation);
      v27 = g_pGameRules;
      v57 = &g_pGameRules[19].m_szQuestName[114];
    }
    LOBYTE(vLaneFrontLocation.x) = (255.0 * this->m_fDefendLaneDesire[3]);
    if ( LOBYTE(vLaneFrontLocation.x) != v27[19].m_szQuestName[v28 + 122] )
      CNetworkArrayBase<unsigned char,18,CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>::Set(
        v57,
        v28 + 8,
        &vLaneFrontLocation);
  }
LABEL_38:
  if ( VProf_5094 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_TeamCommander::UpdateFarmLaneDesires  (line 5296, @0x0000000002842800, libserver.so)  // inlines: CVProfScope, DOTAGameRules, Get, GetAmountAlongLane, GetLaneFrontAmount, GetOpposingTeamCommander, GetOpposingTeamNumber, GetTeamCommander, IsElapsed, IsEnabled, NetworkStateChanged, RemapValClamped, Set, clamp<float, float>, operator CEntityInstance*, ~CVProfScope
// calls: CDOTA_TeamCommander::DoBotScriptUpdateFarmLaneDesires, CDOTA_TeamCommander::GetLeadBuildingInLane, DOTACommander, CDOTA_TeamCommander::CalculateLocationAlongLane, CDOTA_TeamCommander::GetNearbyEnemyOffensivePower, CountdownTimer::Now, CVProfile::ExitScope, CVProfile::EnterScope, _Unwind_Resume
// callers: CDOTA_TeamCommander::Think
// strings: "CDOTA_TeamCommander::UpdateFarmLaneDesires"
void __fastcall CDOTA_TeamCommander::UpdateFarmLaneDesires(CDOTA_TeamCommander *const this)
{
  int m_enabled; // edx
  CDOTA_TeamCommander *v3; // r14
  DOTA_LANE i; // r12d
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // r15
  int v6; // r13d
  CDOTA_Commander *v7; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  CDOTA_BaseNPC_Building *v10; // r13
  unsigned __int64 v11; // xmm0_8
  bool v12; // zf
  float v13; // xmm1_4
  __int64 v14; // rax
  float v15; // r13d
  float NearbyEnemyOffensivePower; // xmm0_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  CGameRules *v23; // r13
  int v24; // r12d
  int v25; // r15d
  int (**vptr_CGameRules)(...); // rdi
  CGameRules *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r14
  int v30; // r15d
  int (**v31)(...); // rdi
  CGameRules *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  int v35; // ebx
  int (**v36)(...); // rdi
  float v37; // [rsp+4h] [rbp-4Ch]
  bool VProf_5298; // [rsp+Bh] [rbp-45h]
  float v39; // [rsp+Ch] [rbp-44h]
  Vector vLaneFrontLocation; // [rsp+10h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_5298 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::UpdateFarmLaneDesires", 0, "Bots", 0, 4);
  if ( !CDOTA_TeamCommander::DoBotScriptUpdateFarmLaneDesires(this) )
  {
    v3 = this;
    for ( i = DOTA_LANE::DOTA_LANE_TOP; i != DOTA_LANE::DOTA_LANE_MAX; ++i )
    {
      LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(this, i);
      v6 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
      v7 = DOTACommander();
      p_m_GoodGuys = &v7->m_GoodGuys;
      p_m_BadGuys = &v7->m_BadGuys;
      if ( v6 != 2 )
        p_m_GoodGuys = p_m_BadGuys;
      v10 = CDOTA_TeamCommander::GetLeadBuildingInLane(p_m_GoodGuys, i);
      if ( v10 != 0 && LeadBuildingInLane != 0 )
      {
        v39 = this->m_LaneFrontCreepsAmounts[this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST][i];
        v11 = CDOTA_TeamCommander::CalculateLocationAlongLane(this, i, v39, 0.0, 0.0, 0).m128i_u64[0];
        v12 = this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST;
        *&vLaneFrontLocation.x = v11;
        vLaneFrontLocation.z = v13;
        v14 = !v12 + 1168LL;
        v15 = *(&v10->m_pEntity + v14 + 1);
        v37 = *(&LeadBuildingInLane->m_pEntity + v14 + 1);
        NearbyEnemyOffensivePower = CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(
                                      this,
                                      &vLaneFrontLocation,
                                      3000.0,
                                      v13);
        v17 = 1.0;
        v18 = (((v39 - v37) / (v15 - v37)) - 0.2) / 0.69999999;
        if ( v18 >= 0.0 )
        {
          v17 = 0.5;
          if ( v18 <= 1.0 )
            v17 = (-0.5 * v18) + 1.0;
        }
        v19 = 1.0;
        v20 = (NearbyEnemyOffensivePower - 500.0) / 1500.0;
        if ( v20 >= 0.0 )
        {
          v19 = 0.39999998;
          if ( v20 <= 1.0 )
            v19 = (-0.60000002 * v20) + 1.0;
        }
        v21 = 1.0;
        v22 = ((v15 - v39) - 0.2) / -0.17;
        if ( v22 >= 0.0 )
        {
          v21 = 0.5;
          if ( v22 <= 1.0 )
            v21 = (-0.5 * v22) + 1.0;
        }
        v3->m_fFarmLaneDesire[1] = (v17 * v19) * v21;
      }
      v3 = (v3 + 4);
    }
    v23 = g_pGameRules;
    v24 = 3 * (this->m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST);
    if ( *&g_pGameRules[19].m_szQuestName[84] > 0.0 )
    {
      if ( CountdownTimer::Now(&g_pGameRules[19].m_szQuestName[72]) < *&v23[19].m_szQuestName[84] )
        goto LABEL_22;
      v23 = g_pGameRules;
    }
    v25 = (255.0 * this->m_fFarmLaneDesire[1]);
    if ( v25 != v23[19].m_szQuestName[v24 + 132] )
    {
      vptr_CGameRules = v23[5]._vptr_CGameRules;
      if ( vptr_CGameRules == 0 || (*(vptr_CGameRules[1] + 49) & 4) != 0 )
      {
        v27 = v23;
      }
      else
      {
        (*(*vptr_CGameRules + 22))(vptr_CGameRules, 2876, v24, *v23[5].m_szQuestName);
        v27 = g_pGameRules;
      }
      v23[19].m_szQuestName[v24 + 132] = v25;
      v23 = v27;
    }
    v28 = (v24 + 1);
    v29 = v28;
    v30 = (255.0 * this->m_fFarmLaneDesire[2]);
    if ( v30 != v23[19].m_szQuestName[v28 + 132] )
    {
      v31 = v23[5]._vptr_CGameRules;
      if ( v31 == 0 || (*(v31[1] + 49) & 4) != 0 )
      {
        v32 = v23;
      }
      else
      {
        (*(*v31 + 22))(v31, 2876, v28, *v23[5].m_szQuestName);
        v32 = g_pGameRules;
      }
      v23[19].m_szQuestName[v29 + 132] = v30;
      v23 = v32;
    }
    v33 = (v24 + 2);
    v34 = v33;
    v35 = (255.0 * this->m_fFarmLaneDesire[3]);
    if ( v35 != v23[19].m_szQuestName[v33 + 132] )
    {
      v36 = v23[5]._vptr_CGameRules;
      if ( v36 != 0 && (*(v36[1] + 49) & 4) == 0 )
        (*(*v36 + 22))(v36, 2876, v33, *v23[5].m_szQuestName);
      v23[19].m_szQuestName[v34 + 132] = v35;
    }
  }
LABEL_22:
  if ( VProf_5298 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_TeamCommander::UpdateRoamDesire  (line 5339, @0x00000000028571e0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, FastSqrt, Get, GetActiveModeDesire, GetAmountAlongLane, GetBotByIndex, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetGameTime, GetHero, GetInstance, GetLastSeenLocation, GetOpposingTeamCommander, GetOpposingTeamNumber, GetSerialNumber, GetTargetNPC, GetTeamCommander, GetTeamNumber, GetTimeSinceLastSeen, GetUnit, GrowMemory, HasBeenSeenIn, IsElapsed, IsEnabled, Length, Length2D, Max<float>, Min<float>, NetworkStateChanged, RemapValClamped, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlVector, ~CVProfScope
// calls: CDOTA_TeamCommander::DoBotScriptUpdateRoamDesire, CEntityHandle::operator CEntityInstance*, CBaseModelEntity::CanBeSeenByTeam, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::GetNearbyEnemyOffensivePower, CDOTA_TeamCommander::HasRequestActive, DOTACommander, CDOTA_TeamCommander::GetLeadBuildingInLane, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::SetCount, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CountdownTimer::Now (20 total)
// callers: CDOTA_TeamCommander::Think
// strings: "CDOTA_TeamCommander::UpdateRoamDesire"
void __fastcall CDOTA_TeamCommander::UpdateRoamDesire(CDOTA_TeamCommander *const this)
{
  int m_enabled; // r10d
  bool v3; // zf
  DOTATeam_t m_eTeam; // r12d
  CEntityInstance *v5; // rax
  CBaseModelEntity *v6; // rbx
  float v7; // xmm0_4
  const Vector *AbsOrigin; // rax
  float v9; // xmm1_4
  float NearbyEnemyOffensivePower; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v12; // edx
  __int16 v13; // cx
  bool HasRequestActive; // al
  DOTA_LANE v15; // r14d
  int v16; // r12d
  CDOTA_Commander *v17; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdi
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // rax
  float v21; // xmm0_4
  float v22; // xmm4_4
  int v23; // edx
  int v24; // ecx
  float v25; // xmm1_4
  int v26; // eax
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  int v32; // r12d
  CEntityIdentity *v33; // rdx
  __int16 v34; // cx
  __int64 m_Size; // r14
  int v36; // eax
  CHandle<CBaseEntity> *v37; // rax
  CEntityInstance *v38; // rax
  const CBaseEntity *v39; // r15
  const Vector *v40; // r14
  const Vector *v41; // rax
  CDOTA_Bot *v42; // r15
  CEntityInstance *v43; // rax
  const CEntityHandle *p_m_hUnit; // r15
  CEntityInstance *v45; // rax
  float v46; // xmm0_4
  float v47; // xmm3_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm2_4
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm2_4
  CEntityIdentity *v54; // rax
  int v55; // edx
  __int16 v56; // cx
  int v57; // ebx
  unsigned __int64 v58; // rax
  int32 v59; // r12d
  CDOTAGamerules *v60; // rbx
  int v61; // r15d
  int v62; // r15d
  int v63; // r15d
  int v64; // r14d
  _BOOL8 v65; // r14
  int v66; // r12d
  int v67; // esi
  CEntityInstance *v68; // rax
  CEntityInstance *v69; // r14
  const Vector *v70; // r15
  const Vector *v71; // rax
  __m128i v72; // xmm0
  __m128i v73; // xmm7
  float v74; // r15d
  float OffensivePower; // xmm0_4
  float v76; // xmm1_4
  float v77; // xmm2_4
  int v78; // r12d
  __m128i v79; // xmm0
  float v80; // r14d
  CDOTA_Commander *v81; // rax
  CDOTA_TeamCommander *v82; // rdi
  CDOTA_TeamCommander *v83; // rax
  float v84; // xmm0_4
  float fNearbyEnemyOffensivePower; // [rsp+8h] [rbp-A8h]
  float fPositionFactor; // [rsp+Ch] [rbp-A4h]
  CGlowHelperSceneObject *m_p; // [rsp+20h] [rbp-90h]
  float fProposedOffensivePower; // [rsp+28h] [rbp-88h]
  __int64 v89; // [rsp+30h] [rbp-80h]
  float v90; // [rsp+38h] [rbp-78h]
  int i; // [rsp+3Ch] [rbp-74h]
  bool VProf_5341; // [rsp+42h] [rbp-6Eh]
  bool bHasRequestActive; // [rsp+43h] [rbp-6Dh]
  float fClosestProposedUnitDist; // [rsp+44h] [rbp-6Ch]
  float fClosestProposedUnitDistb; // [rsp+44h] [rbp-6Ch]
  float fClosestProposedUnitDista; // [rsp+44h] [rbp-6Ch]
  __int64 fThresholdDist; // [rsp+48h] [rbp-68h]
  float fThresholdDista; // [rsp+48h] [rbp-68h]
  float fThresholdDistc; // [rsp+48h] [rbp-68h]
  float fThresholdDistb; // [rsp+48h] [rbp-68h]
  int v101; // [rsp+50h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hProposedRoamUnits; // [rsp+60h] [rbp-50h] BYREF
  Vector BaseLocation; // 0:kr00_12.12
  Vector v104; // 0:kr14_12.12

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_5341 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::UpdateRoamDesire", 0, "Bots", 0, 4);
  if ( !CDOTA_TeamCommander::DoBotScriptUpdateRoamDesire(this) )
  {
    this->m_fRoamDesire = 0.0;
    v3 = !this->m_bLateGame;
    this->m_hRoamTarget.m_Index = -1;
    this->m_vRoamTargetLoc = vec3_origin;
    if ( !v3 )
    {
      m_eTeam = this->m_eTeam;
      if ( g_HeroList.m_hHeroList.m_Size > 0 )
      {
        v89 = 0;
        i = 0;
        while ( 1 )
        {
          v5 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[v89]);
          v6 = v5;
          if ( v5 != 0
            && (v5[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && *&v5[45].m_worldGroupId.m_nHashCode != 0
            && m_eTeam != HIBYTE(v5[7].m_CScriptComponent) )
          {
            if ( (*(v5->_vptr_IHandleEntity + 408))(v5) != 0 )
            {
              v3 = !CBaseModelEntity::CanBeSeenByTeam(v6, this->m_eTeam);
              m_p = v6[1].m_Glow.m_pDepthStencilSceneObject.m_p;
              if ( !v3 )
                break;
              v7 = 0.0;
              if ( g_pGameRules != 0 )
                v7 = *&g_pGameRules[18].m_szQuestName[20];
              if ( (v7 - *(v6[1].m_Glow.m_pDepthStencilSceneObject.m_p + 176)) < 10.0 )
                break;
            }
LABEL_80:
            m_eTeam = this->m_eTeam;
          }
          ++i;
          ++v89;
          if ( i >= g_HeroList.m_hHeroList.m_Size )
            goto LABEL_82;
        }
        AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
        NearbyEnemyOffensivePower = CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(this, AbsOrigin, 2000.0, v9);
        hProposedRoamUnits.m_Size = -1;
        m_pEntity = v6->m_pEntity;
        fNearbyEnemyOffensivePower = NearbyEnemyOffensivePower;
        if ( m_pEntity != 0 )
        {
          v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v13 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(hProposedRoamUnits.m_Size) = v13 | hProposedRoamUnits.m_Size & 0x8000;
          hProposedRoamUnits.m_Size = (v12 << 15) | hProposedRoamUnits.m_Size & 0x7FFF;
        }
        HasRequestActive = CDOTA_TeamCommander::HasRequestActive(this, 0, &hProposedRoamUnits, 0);
        hProposedRoamUnits.m_Size = 0;
        bHasRequestActive = HasRequestActive;
        hProposedRoamUnits.m_Memory.m_pMemory = 0;
        hProposedRoamUnits.m_Memory.m_nAllocationCount = 0;
        hProposedRoamUnits.m_Memory.m_nGrowSize = 0;
        v15 = *(m_p + 46);
        if ( v15 == DOTA_LANE::DOTA_LANE_NONE )
        {
LABEL_79:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hProposedRoamUnits);
          goto LABEL_80;
        }
        v16 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
        v17 = DOTACommander();
        p_m_GoodGuys = &v17->m_GoodGuys;
        p_m_BadGuys = &v17->m_BadGuys;
        if ( v16 != 2 )
          p_m_GoodGuys = p_m_BadGuys;
        LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(p_m_GoodGuys, v15);
        if ( LeadBuildingInLane == 0 )
        {
          fThresholdDistc = *(m_p + 185);
          fClosestProposedUnitDistb = *(m_p + 186);
          BaseLocation = CDOTA_TeamCommander::GetBaseLocation(this);
          v78 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
          v79 = COERCE_UNSIGNED_INT(
                  ((BaseLocation.x - fThresholdDistc) * (BaseLocation.x - fThresholdDistc))
                + ((BaseLocation.y - fClosestProposedUnitDistb) * (BaseLocation.y - fClosestProposedUnitDistb)));
          fThresholdDistb = *(m_p + 186);
          *v79.m128i_i32 = fsqrt(*v79.m128i_i32);
          v80 = COERCE_FLOAT(_mm_cvtsi128_si32(v79));
          fClosestProposedUnitDista = *(m_p + 185);
          v81 = DOTACommander();
          v82 = &v81->m_GoodGuys;
          v83 = &v81->m_BadGuys;
          if ( v78 != 2 )
            v82 = v83;
          v104 = CDOTA_TeamCommander::GetBaseLocation(v82);
          v84 = ((v80
                - fsqrt(
                    ((v104.x - fClosestProposedUnitDista) * (v104.x - fClosestProposedUnitDista))
                  + ((v104.y - fThresholdDistb) * (v104.y - fThresholdDistb))))
               + 3000.0)
              / 6000.0;
          if ( v84 < 0.0 )
          {
            fPositionFactor = 0.5;
          }
          else
          {
            fPositionFactor = 1.0;
            if ( v84 <= 1.0 )
              fPositionFactor = (v84 * 0.5) + 0.5;
          }
          goto LABEL_35;
        }
        v21 = *(m_p + 51);
        if ( this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST )
        {
          v22 = LeadBuildingInLane->m_fAmountAlongLane[1];
          v23 = 3;
          v24 = 1;
        }
        else
        {
          v22 = LeadBuildingInLane->m_fAmountAlongLane[0];
          v23 = 1;
          v24 = 3;
        }
        v25 = v21 - 0.40000001;
        v26 = *(m_p + 46);
        if ( v23 == v26 )
        {
          v27 = v25 / 0.20000002;
          if ( v27 >= 0.0 )
          {
LABEL_29:
            v28 = 1.0;
            if ( v27 > 1.0 )
            {
LABEL_30:
              v29 = v21 - v22;
              v30 = 0.0;
              if ( v29 >= 0.0 )
              {
                v31 = (v29 - 0.40000001) / -0.30000001;
                if ( v31 < 0.0 )
                {
                  v30 = 0.34999999;
                }
                else if ( v31 <= 1.0 )
                {
                  v30 = (-0.34999999 * v31) + 0.34999999;
                }
              }
              fPositionFactor = v28 + v30;
LABEL_35:
              if ( this->m_BotList.m_Size > 0 )
              {
                fThresholdDist = 0;
                v32 = 0;
                fClosestProposedUnitDist = 99999.898;
                while ( 1 )
                {
                  v42 = this->m_BotList.m_Memory.m_pMemory[fThresholdDist];
                  if ( v42 != 0 )
                  {
                    if ( (*(v42->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v42->m_pActiveBotMode) == 16 )
                    {
                      v43 = CEntityHandle::operator CEntityInstance *(&v42->m_hTarget);
                      if ( v43 != 0 && BYTE3(v43[7]._vptr_IHandleEntity) != 0 && v43 == v6 )
                        break;
                    }
                    if ( v42->m_fModeDesires[(*(v42->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v42->m_pActiveBotMode)] <= 0.75 )
                      break;
                  }
LABEL_48:
                  ++fThresholdDist;
                  if ( ++v32 >= this->m_BotList.m_Size )
                    goto LABEL_100;
                }
                p_m_hUnit = &v42->m_hUnit;
                v45 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
                if ( v45 != 0 && BYTE3(v45[7]._vptr_IHandleEntity) != 0 )
                {
                  v101 = -1;
                  v33 = v45->m_pEntity;
                  if ( v33 != 0 )
                  {
                    v34 = 0x7FFF;
                    if ( v33->m_EHandle.m_Index != -1 )
                      v34 = v33->m_EHandle.m_Index & 0x7FFF;
                    v101 = (((v33->m_EHandle.m_Index >> 15) - (v33->m_flags & 1)) << 15) | v34 & 0x7FFF;
                  }
                  m_Size = hProposedRoamUnits.m_Size;
                  v36 = hProposedRoamUnits.m_Size;
                  if ( hProposedRoamUnits.m_Size == hProposedRoamUnits.m_Memory.m_nAllocationCount )
                  {
LABEL_58:
                    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hProposedRoamUnits.m_Memory, 1);
                    v36 = hProposedRoamUnits.m_Size;
                  }
                }
                else
                {
                  m_Size = hProposedRoamUnits.m_Size;
                  v101 = -1;
                  v36 = hProposedRoamUnits.m_Size;
                  if ( hProposedRoamUnits.m_Size == hProposedRoamUnits.m_Memory.m_nAllocationCount )
                    goto LABEL_58;
                }
                hProposedRoamUnits.m_Size = v36 + 1;
                v37 = &hProposedRoamUnits.m_Memory.m_pMemory[m_Size];
                if ( v37 != 0 )
                  v37->m_Index = v101;
                v38 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
                if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
                  v39 = v38;
                else
                  v39 = 0;
                v40 = CBaseEntity::GetAbsOrigin(v6);
                v41 = CBaseEntity::GetAbsOrigin(v39);
                fClosestProposedUnitDist = fminf(
                                             fClosestProposedUnitDist,
                                             fsqrt(
                                               (((v41->x - v40->x) * (v41->x - v40->x))
                                              + ((v41->y - v40->y) * (v41->y - v40->y)))
                                             + ((v41->z - v40->z) * (v41->z - v40->z))));
                goto LABEL_48;
              }
              fClosestProposedUnitDist = 99999.898;
LABEL_100:
              if ( hProposedRoamUnits.m_Size <= 0 )
              {
                fProposedOffensivePower = 0.0;
              }
              else
              {
                v66 = 0;
                fProposedOffensivePower = 0.0;
                do
                {
                  fThresholdDista = 4000.0;
                  if ( !bHasRequestActive )
                    fThresholdDista = 2000.0;
                  v68 = CEntityHandle::operator CEntityInstance *(&hProposedRoamUnits.m_Memory.m_pMemory[v66]);
                  v69 = v68;
                  if ( v68 != 0 && BYTE3(v68[7]._vptr_IHandleEntity) != 0 && *&v68[45].m_worldGroupId.m_nHashCode != 0 )
                  {
                    v70 = CBaseEntity::GetAbsOrigin(v6);
                    v71 = CBaseEntity::GetAbsOrigin(v69);
                    v90 = (((v71->x - v70->x) * (v71->x - v70->x)) + ((v71->y - v70->y) * (v71->y - v70->y)))
                        + ((v71->z - v70->z) * (v71->z - v70->z));
                    v72 = LODWORD(v90);
                    *v72.m128i_i32 = fsqrt(v90);
                    v73 = v72;
                    *v73.m128i_i32 = *v72.m128i_i32 - fClosestProposedUnitDist;
                    v74 = COERCE_FLOAT(_mm_cvtsi128_si32(v73));
                    if ( (*v72.m128i_i32 - fClosestProposedUnitDist) > fThresholdDista )
                    {
                      v67 = v66--;
                      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
                        &hProposedRoamUnits,
                        v67);
                    }
                    else
                    {
                      OffensivePower = CDOTA_Bot::GetOffensivePower(*&v69[45].m_worldGroupId.m_nHashCode);
                      v76 = (v74 - 1000.0) / 4000.0;
                      if ( v76 < 0.0 )
                      {
                        v77 = 1.0;
                      }
                      else
                      {
                        v77 = 0.19999999;
                        if ( v76 <= 1.0 )
                          v77 = (-0.80000001 * v76) + 1.0;
                      }
                      fProposedOffensivePower = (v77 * OffensivePower) + fProposedOffensivePower;
                    }
                  }
                  ++v66;
                }
                while ( hProposedRoamUnits.m_Size > v66 );
              }
              v46 = ((fProposedOffensivePower / fNearbyEnemyOffensivePower) - 2.0) / -1.5;
              if ( v46 < 0.0 )
              {
                v47 = 0.94999999;
              }
              else
              {
                v47 = 0.0;
                if ( v46 <= 1.0 )
                  v47 = (-0.94999999 * v46) + 0.94999999;
              }
              v48 = 1.0;
              v49 = (fClosestProposedUnitDist - 3000.0) / 4000.0;
              if ( v49 >= 0.0 )
              {
                v48 = 0.69999999;
                if ( v49 <= 1.0 )
                  v48 = (-0.30000001 * v49) + 1.0;
              }
              v50 = 0.0;
              if ( (*(m_p + 168) & 0x10) != 0 )
                v50 = 0.30000001;
              v51 = ((v47 * v48) * fPositionFactor) + v50;
              v52 = 0.0;
              if ( bHasRequestActive )
                v52 = 0.5;
              v53 = v52 + v51;
              if ( v53 > this->m_fRoamDesire )
              {
                this->m_fRoamOffensivePowerFactor = v47;
                this->m_fRoamDesire = v53;
                this->m_fRoamDistanceFactor = v48;
                this->m_fRoamPositionFactor = fPositionFactor;
                v54 = v6->m_pEntity;
                if ( v54 != 0 )
                {
                  v55 = (v54->m_EHandle.m_Index >> 15) - (v54->m_flags & 1);
                  v56 = 0x7FFF;
                  if ( v54->m_EHandle.m_Index != -1 )
                    v56 = v54->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(this->m_hRoamTarget.m_Index) = v56 | this->m_hRoamTarget.m_Index & 0x8000;
                  this->m_hRoamTarget.m_Index = (v55 << 15) | this->m_hRoamTarget.m_Index & 0x7FFF;
                }
                else
                {
                  this->m_hRoamTarget.m_Index = -1;
                }
                this->m_vRoamTargetLoc = *CBaseEntity::GetAbsOrigin(v6);
                if ( &this->m_hProposedRoamUnits != &hProposedRoamUnits )
                {
                  v57 = hProposedRoamUnits.m_Size;
                  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::SetCount(
                    &this->m_hProposedRoamUnits,
                    hProposedRoamUnits.m_Size);
                  if ( v57 > 0 )
                  {
                    v58 = 0;
                    do
                    {
                      this->m_hProposedRoamUnits.m_Memory.m_pMemory[v58 / 4].m_Index = hProposedRoamUnits.m_Memory.m_pMemory[v58 / 4].m_Index;
                      v58 += 4LL;
                    }
                    while ( v58 != 4LL * (v57 - 1) + 4 );
                  }
                }
              }
              goto LABEL_79;
            }
LABEL_122:
            v28 = (0.69999999 * v27) + 0.30000001;
            goto LABEL_30;
          }
        }
        else if ( v24 == v26 )
        {
          v27 = v25 / 0.40000001;
          if ( v27 >= 0.0 )
          {
            v28 = 1.0;
            if ( v27 > 1.0 )
              goto LABEL_30;
            goto LABEL_122;
          }
        }
        else
        {
          v27 = v25 / 0.29999998;
          if ( v27 >= 0.0 )
            goto LABEL_29;
        }
        v28 = 0.30000001;
        goto LABEL_30;
      }
LABEL_82:
      v59 = 4 * (m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST);
      v60 = g_pGameRules;
      if ( *&g_pGameRules[19].m_szQuestName[84] > 0.0 )
      {
        if ( CountdownTimer::Now(&g_pGameRules[19].m_szQuestName[72]) < v60->m_BotDebugTimer.m_timestamp.m_Value )
          goto LABEL_95;
        v60 = g_pGameRules;
      }
      v61 = (255.0 * this->m_fRoamOffensivePowerFactor);
      if ( v61 != v60->m_BotDebugRoam.m_Value[v59] )
      {
        CDOTAGamerules::NetworkStateChanged(v60, 0xB42u, v59);
        v60->m_BotDebugRoam.m_Value[v59] = v61;
        v60 = g_pGameRules;
      }
      v62 = (255.0 * this->m_fRoamDistanceFactor);
      if ( v62 != *(&v60->_vptr_CGameRules + v59 + 2883) )
      {
        CDOTAGamerules::NetworkStateChanged(v60, 0xB42u, v59 + 1);
        *(&v60->_vptr_CGameRules + v59 + 2883) = v62;
        v60 = g_pGameRules;
      }
      v63 = (255.0 * this->m_fRoamPositionFactor);
      if ( v63 != *(&v60->_vptr_CGameRules + v59 + 2884) )
      {
        CDOTAGamerules::NetworkStateChanged(v60, 0xB42u, v59 + 2);
        *(&v60->_vptr_CGameRules + v59 + 2884) = v63;
        v60 = g_pGameRules;
      }
      v64 = (255.0 * this->m_fRoamDesire);
      if ( v64 != *(&v60->_vptr_CGameRules + v59 + 2885) )
      {
        CDOTAGamerules::NetworkStateChanged(v60, 0xB42u, v59 + 3);
        *(&v60->_vptr_CGameRules + v59 + 2885) = v64;
        v60 = g_pGameRules;
      }
      v65 = this->m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST;
      if ( memcmp(&v60->m_hBotDebugRoamTarget + 4 * v65, &this->m_hRoamTarget, 4u) != 0 )
      {
        CDOTAGamerules::NetworkStateChanged(v60, 0xB4Cu, v65);
        v60->m_hBotDebugRoamTarget.m_Value[v65].m_Index = this->m_hRoamTarget.m_Index;
      }
    }
  }
LABEL_95:
  if ( VProf_5341 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// RoshanTankSort  (line 5486, @0x0000000002829870, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth, CDOTA_Bot::GetTankRating, CDOTA_BaseNPC::GetArmorForDamageType
// callers: CDOTA_TeamCommander::UpdateRoshanDesire
// globals: CEntityHandle::gm_pEntityList
int __fastcall RoshanTankSort(const EHANDLE *p1, const EHANDLE *p2)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v7; // eax
  unsigned __int64 v8; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  int result; // eax
  CDOTA_BaseNPC *v12; // r12
  __m128i v13; // xmm0
  int Health; // edx
  float TankRating; // [rsp+Ch] [rbp-14h]
  float ArmorForDamageType; // [rsp+Ch] [rbp-14h]

  m_Index = p1->m_Index;
  if ( p1->m_Index + 2 <= 1
    || (m_Index_low = LOWORD(p1->m_Index),
        (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v5 = &v4[m_Index_low & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = p2->m_Index;
  if ( p2->m_Index + 2 <= 1 )
    return -1;
  v8 = LOWORD(p2->m_Index);
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F];
  if ( v9 == 0 )
    return -1;
  v10 = &v9[v8 & 0x1FF];
  if ( v10 == 0 )
    return -1;
  if ( v7 != v10->m_EHandle.m_Index )
    return -1;
  v12 = v10->m_pInstance;
  if ( v10->m_pInstance == 0 || !v12->m_bIsDOTANPC || m_pInstance == 0 || m_pInstance->m_pBot == 0 || v12->m_pBot == 0 )
    return -1;
  if ( CBaseEntity::GetHealth(m_pInstance) > 999 || (Health = CBaseEntity::GetHealth(v12), result = 1, Health <= 1000) )
  {
    if ( CBaseEntity::GetHealth(m_pInstance) > 1000 && CBaseEntity::GetHealth(v12) <= 999 )
      return -1;
    TankRating = CDOTA_Bot::GetTankRating(m_pInstance->m_pBot);
    if ( TankRating == CDOTA_Bot::GetTankRating(v12->m_pBot) )
    {
      ArmorForDamageType = CDOTA_BaseNPC::GetArmorForDamageType(m_pInstance, 1);
      if ( CDOTA_BaseNPC::GetArmorForDamageType(v12, 1) > ArmorForDamageType )
        return -1;
    }
    else
    {
      *v13.m128i_i32 = CDOTA_Bot::GetTankRating(m_pInstance->m_pBot);
      if ( COERCE_FLOAT(_mm_cvtsi128_si32(v13)) > CDOTA_Bot::GetTankRating(v12->m_pBot) )
        return -1;
    }
    return 1;
  }
  return result;
}


// CDOTA_TeamCommander::UpdateRoshanDesire  (line 5510, @0x0000000002847640, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, CUtlVectorFixedGrowableCompat, CVProfScope, CanBeSeenByTeam, ConvertToExternalMemory, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, FastSqrt, Get, GetActiveModeDesire, GetBotByIndex, GetEHandle, GetEntryIndex, GetInstance, GetLaneFrontAmount, GetSerialNumber, GetUnit, GrowMemory, IsElapsed, IsEnabled, IsExternallyAllocated, Length2D, Min<float>, NetworkStateChanged, Purge, Purge_FixedGrowable, RemapValClamped, RemoveAll, Set, Sort, ToDOTABaseNPC, V_swap<CHandle<CBaseEntity> >, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_TeamCommander::DoBotScriptUpdateRoshanDesire, CVProfile::EnterScope, CDOTAGamerules::GetRoshan, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::CanBeSeenByTeam, CDOTA_TeamCommander::HasRequestActive, CVProfile::ExitScope, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, CDOTA_Bot::GetEstimatedDamageToTarget (26 total)
// callers: CDOTA_TeamCommander::Think
// strings: "CDOTA_TeamCommander::UpdateRoshanDesire"
// globals: RoshanTankSort(CHandle<CBaseEntity> const*,CHandle<CBaseEntity> const*)
void __fastcall CDOTA_TeamCommander::UpdateRoshanDesire(CDOTA_TeamCommander *const this)
{
  int m_enabled; // edx
  CEntityInstance *v2; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // cx
  __int64 v6; // rbx
  int m_Size; // eax
  CDOTA_Bot *v8; // rax
  __int64 v9; // r13
  int m_nAllocationCount; // r15d
  __int64 v11; // rbx
  int v12; // r12d
  CEntityIdentity *v13; // rdx
  int v14; // eax
  __int16 v15; // cx
  int v16; // eax
  CHandle<CBaseEntity> *v17; // rax
  CEntityInstance *v18; // rax
  const Vector *AbsOrigin; // rax
  AlignedByteArray_t<16ul,CHandle<CBaseEntity> > *p_m_FixedMemory; // rax
  signed __int64 v21; // rcx
  __int64 v22; // r13
  CEntityInstance *v23; // rax
  const CBaseEntity *v24; // rbx
  const Vector *v25; // r12
  const Vector *v26; // rax
  __int64 v27; // r12
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemoryFixedGrowable<CHandle<CBaseEntity>,16ul,int> >::CAllocator *p_m_Memory; // r14
  float v29; // xmm0_4
  float v30; // xmm0_4
  CEntityIdentity *v31; // rax
  int v32; // edx
  __int16 v33; // cx
  __int64 v34; // r15
  int v35; // eax
  CEntityHandle *v36; // rax
  float v37; // xmm0_4
  __int64 i; // rax
  int v39; // r15d
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemoryFixedGrowable<CHandle<CBaseEntity>,16ul,int> >::CAllocator *v40; // rbx
  unsigned int v41; // eax
  uint32 m_nGrowSize; // eax
  unsigned int v43; // eax
  int v44; // eax
  int Health; // eax
  int v46; // r14d
  CHandle<CBaseEntity> *m_pMemory; // rdi
  __m128i v48; // xmm3
  float v49; // ebx
  const Vector *v50; // rax
  float v51; // xmm1_4
  float NearbyEnemyOffensivePower; // xmm0_4
  float v53; // xmm5_4
  _BOOL8 v54; // r13
  float *v55; // rax
  float v56; // xmm8_4
  __m128 v57; // xmm4
  float v58; // xmm2_4
  __m128 v59; // xmm6
  float v60; // xmm2_4
  __m128 v61; // xmm0
  __m128 v62; // xmm2
  float v63; // xmm2_4
  __m128 v64; // xmm0
  float v65; // xmm2_4
  __m128 v66; // xmm4
  __m128 v67; // xmm0
  float v68; // xmm4_4
  float v69; // xmm4_4
  __m128 v70; // xmm5
  float v71; // xmm5_4
  float v72; // xmm0_4
  float m_fRoshanDesire; // xmm4_4
  CDOTAGamerules *v74; // r12
  int v75; // r14d
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemoryFixedGrowable<CHandle<CBaseEntity>,16ul,int> >::CAllocator *v76; // rbx
  unsigned int v77; // eax
  uint32 v78; // eax
  unsigned int v79; // eax
  int v80; // eax
  float v81; // xmm0_4
  float v82; // xmm5_4
  float v83; // xmm0_4
  int v84; // r14d
  __int64 v85; // rbx
  int v86; // r12d
  __int64 v87; // r13
  CHandle<CBaseEntity> *v88; // rdx
  _DWORD *v89; // rax
  _DWORD *v90; // rbx
  int nHumansInMode; // [rsp+18h] [rbp-4B8h]
  bool bHumanRequestActive; // [rsp+1Eh] [rbp-4B2h]
  bool VProf_5512; // [rsp+1Fh] [rbp-4B1h]
  float fDistanceToRosh; // [rsp+20h] [rbp-4B0h]
  CDOTA_BaseNPC *v95; // [rsp+30h] [rbp-4A0h]
  float fDPSToRoshan; // [rsp+38h] [rbp-498h]
  float v97; // [rsp+3Ch] [rbp-494h]
  float v98; // [rsp+3Ch] [rbp-494h]
  CDOTA_Bot *m_pConnections; // [rsp+40h] [rbp-490h]
  CEntityHandle v101; // [rsp+50h] [rbp-480h] BYREF
  float kRoshanKillWindows[12]; // [rsp+60h] [rbp-470h]
  float fRoshanDamageInWindow[12]; // [rsp+90h] [rbp-440h] BYREF
  float fCandidateAlliedOffensivePower[12]; // [rsp+C0h] [rbp-410h] BYREF
  float fTankRatings[12]; // [rsp+F0h] [rbp-3E0h] BYREF
  CUtlVectorFixedGrowable<CHandle<CBaseEntity>,16ul> hCandidateRoshanUnitsInWindow[9]; // [rsp+120h] [rbp-3B0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,16ul> hCandidateRoshanUnits; // [rsp+440h] [rbp-90h] BYREF
  unsigned __int64 v108; // [rsp+498h] [rbp-38h]

  v108 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_5512 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::UpdateRoshanDesire", 0, "Bots", 0, 4);
  if ( CDOTA_TeamCommander::DoBotScriptUpdateRoshanDesire(this) )
  {
LABEL_4:
    if ( VProf_5512 )
      goto LABEL_5;
    return;
  }
  CDOTAGamerules::GetRoshan(&v101, g_pGameRules);
  v2 = CEntityHandle::operator CEntityInstance *(&v101);
  v95 = v2;
  if ( v2 == 0 || BYTE3(v2[7]._vptr_IHandleEntity) == 0 || (*(v2->_vptr_IHandleEntity + 408))(v2) == 0 )
  {
    this->m_fRoshanDesire = 0.0;
    this->m_iLastSeenRoshanHealth = -1;
    goto LABEL_4;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hProposedRoshanUnits);
  if ( CBaseModelEntity::CanBeSeenByTeam(v95, this->m_eTeam) )
  {
    Health = CBaseEntity::GetHealth(v95);
LABEL_84:
    this->m_iLastSeenRoshanHealth = Health;
    goto LABEL_12;
  }
  if ( this->m_iLastSeenRoshanHealth == -1 )
  {
    Health = (*(v95->_vptr_IHandleEntity + 156))(v95);
    goto LABEL_84;
  }
LABEL_12:
  hCandidateRoshanUnitsInWindow[0].m_Size = -1;
  m_pEntity = v95->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(hCandidateRoshanUnitsInWindow[0].m_Size) = v5 | hCandidateRoshanUnitsInWindow[0].m_Size & 0x8000;
    hCandidateRoshanUnitsInWindow[0].m_Size = (v4 << 15) | hCandidateRoshanUnitsInWindow[0].m_Size & 0x7FFF;
  }
  bHumanRequestActive = CDOTA_TeamCommander::HasRequestActive(this, 5, hCandidateRoshanUnitsInWindow, 0);
  if ( this->m_BotList.m_Size <= 0 )
  {
    hCandidateRoshanUnits.m_Memory.m_nAllocationCount = 16;
    hCandidateRoshanUnits.m_Size = 0;
    hCandidateRoshanUnits.m_Memory.m_nGrowSize = 0x80000000;
    hCandidateRoshanUnits.m_Memory.m_pMemory = &hCandidateRoshanUnits.m_FixedMemory;
    nHumansInMode = 0;
  }
  else
  {
    nHumansInMode = 0;
    v6 = 0;
    do
    {
      v8 = this->m_BotList.m_Memory.m_pMemory[v6];
      if ( v8->m_bHuman )
        nHumansInMode += (*(v8->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v8->m_pActiveBotMode) == 20;
      ++v6;
      m_Size = this->m_BotList.m_Size;
    }
    while ( m_Size > v6 );
    hCandidateRoshanUnits.m_Memory.m_nAllocationCount = 16;
    hCandidateRoshanUnits.m_Memory.m_nGrowSize = 0x80000000;
    hCandidateRoshanUnits.m_Size = 0;
    hCandidateRoshanUnits.m_Memory.m_pMemory = &hCandidateRoshanUnits.m_FixedMemory;
    if ( m_Size > 0 )
    {
      v9 = 0;
      m_nAllocationCount = 16;
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        v18 = CEntityHandle::operator CEntityInstance *(&this->m_BotList.m_Memory.m_pMemory[v9]->m_hUnit);
        if ( v18 == 0 || BYTE3(v18[7]._vptr_IHandleEntity) == 0 )
          break;
        hCandidateRoshanUnitsInWindow[0].m_Size = -1;
        v13 = v18->m_pEntity;
        if ( v13 != 0 )
        {
          v14 = (v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1);
          v15 = 0x7FFF;
          if ( v13->m_EHandle.m_Index != -1 )
            v15 = v13->m_EHandle.m_Index & 0x7FFF;
          LOWORD(hCandidateRoshanUnitsInWindow[0].m_Size) = v15 | hCandidateRoshanUnitsInWindow[0].m_Size & 0x8000;
          hCandidateRoshanUnitsInWindow[0].m_Size = (v14 << 15) | hCandidateRoshanUnitsInWindow[0].m_Size & 0x7FFF;
        }
        v16 = v11;
        if ( v11 == m_nAllocationCount )
          goto LABEL_36;
LABEL_29:
        hCandidateRoshanUnits.m_Size = v16 + 1;
        v17 = &hCandidateRoshanUnits.m_Memory.m_pMemory[v11];
        if ( v17 != 0 )
          v17->m_Index = hCandidateRoshanUnitsInWindow[0].m_Size;
        ++v12;
        ++v9;
        if ( v12 >= this->m_BotList.m_Size )
          goto LABEL_38;
        v11 = hCandidateRoshanUnits.m_Size;
        m_nAllocationCount = hCandidateRoshanUnits.m_Memory.m_nAllocationCount;
      }
      hCandidateRoshanUnitsInWindow[0].m_Size = -1;
      v16 = v11;
      if ( v11 != m_nAllocationCount )
        goto LABEL_29;
LABEL_36:
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hCandidateRoshanUnits.m_Memory, 1);
      v16 = hCandidateRoshanUnits.m_Size;
      goto LABEL_29;
    }
  }
LABEL_38:
  AbsOrigin = CBaseEntity::GetAbsOrigin(v95);
  SortEHANDLEVectorByLocation(&hCandidateRoshanUnits, AbsOrigin, 0);
  kRoshanKillWindows[0] = 5.0;
  kRoshanKillWindows[1] = 10.0;
  kRoshanKillWindows[2] = 15.0;
  kRoshanKillWindows[3] = 20.0;
  kRoshanKillWindows[4] = 25.0;
  kRoshanKillWindows[5] = 30.0;
  p_m_FixedMemory = &hCandidateRoshanUnitsInWindow[0].m_Memory.m_FixedMemory;
  kRoshanKillWindows[6] = 35.0;
  kRoshanKillWindows[7] = 40.0;
  kRoshanKillWindows[8] = 45.0;
  memset(fRoshanDamageInWindow, 0, 36);
  memset(fCandidateAlliedOffensivePower, 0, 36);
  do
  {
    *&p_m_FixedMemory[-1].m_Data[40] = 0;
    v21 = p_m_FixedMemory - hCandidateRoshanUnitsInWindow;
    *(hCandidateRoshanUnitsInWindow + v21 - 16) = p_m_FixedMemory;
    p_m_FixedMemory = (p_m_FixedMemory + 88);
    *(hCandidateRoshanUnitsInWindow + v21 - 8) = 16;
    *(hCandidateRoshanUnitsInWindow + v21 - 4) = 0x80000000;
  }
  while ( p_m_FixedMemory != &hCandidateRoshanUnits.m_Memory.m_nAllocationCount );
  memset(fTankRatings, 0, 36);
  if ( hCandidateRoshanUnits.m_Size <= 0 )
  {
    v37 = 0.0;
    goto LABEL_62;
  }
  v22 = 0;
  do
  {
    while ( 1 )
    {
      v23 = CEntityHandle::operator CEntityInstance *(&hCandidateRoshanUnits.m_Memory.m_pMemory[v22]);
      v24 = v23;
      if ( v23 != 0
        && BYTE3(v23[7]._vptr_IHandleEntity) != 0
        && *&v23[45].m_worldGroupId.m_nHashCode != 0
        && (*(v23->_vptr_IHandleEntity + 408))(v23) != 0 )
      {
        break;
      }
LABEL_60:
      if ( hCandidateRoshanUnits.m_Size <= ++v22 )
        goto LABEL_61;
    }
    v25 = CBaseEntity::GetAbsOrigin(v95);
    v26 = CBaseEntity::GetAbsOrigin(v24);
    fDistanceToRosh = fsqrt(((v26->x - v25->x) * (v26->x - v25->x)) + ((v26->y - v25->y) * (v26->y - v25->y)));
    v97 = (*(v24->_vptr_IHandleEntity + 386))(v24);
    m_pConnections = v24[2].m_OnUser1.m_pConnections;
    if ( !m_pConnections->m_bHuman
      && m_pConnections->m_fModeDesires[(*(m_pConnections->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pConnections->m_pActiveBotMode)] < 0.89999998
      || (*(m_pConnections->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pConnections->m_pActiveBotMode) == 20 )
    {
      v27 = 0;
      fDPSToRoshan = CDOTA_Bot::GetEstimatedDamageToTarget(m_pConnections, 1, v95, 10.0, 1) / 10.0;
      p_m_Memory = &hCandidateRoshanUnitsInWindow[0].m_Memory;
      v98 = 0.80000001 * (fDistanceToRosh / v97);
      do
      {
        v29 = kRoshanKillWindows[v27] - v98;
        if ( v29 > 0.0 )
        {
          fRoshanDamageInWindow[v27] = (v29 * fDPSToRoshan) + fRoshanDamageInWindow[v27];
          v30 = CDOTA_Bot::GetOffensivePower(m_pConnections) + fCandidateAlliedOffensivePower[v27];
          v101.m_Index = -1;
          fCandidateAlliedOffensivePower[v27] = v30;
          v31 = v24->m_pEntity;
          if ( v31 != 0 )
          {
            v32 = (v31->m_EHandle.m_Index >> 15) - (v31->m_flags & 1);
            v33 = 0x7FFF;
            if ( v31->m_EHandle.m_Index != -1 )
              v33 = v31->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v101.m_Index) = v33 | v101.m_Index & 0x8000;
            v101.m_Index = (v32 << 15) | v101.m_Index & 0x7FFF;
          }
          v34 = *&p_m_Memory[-1].m_FixedMemory.m_Data[56];
          v35 = *&p_m_Memory[-1].m_FixedMemory.m_Data[56];
          if ( v34 == p_m_Memory->m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(p_m_Memory, 1);
            v35 = *&p_m_Memory[-1].m_FixedMemory.m_Data[56];
          }
          *&p_m_Memory[-1].m_FixedMemory.m_Data[56] = v35 + 1;
          v36 = &p_m_Memory->m_pMemory[v34];
          if ( v36 != 0 )
            v36->m_Index = v101.m_Index;
          fTankRatings[v27] = CDOTA_Bot::GetTankRating(m_pConnections) + fTankRatings[v27];
        }
        ++v27;
        p_m_Memory = (p_m_Memory + 88);
      }
      while ( v27 != 9 );
      goto LABEL_60;
    }
    ++v22;
  }
  while ( hCandidateRoshanUnits.m_Size > v22 );
LABEL_61:
  v37 = fRoshanDamageInWindow[0];
LABEL_62:
  for ( i = 0; ; v37 = fRoshanDamageInWindow[i] )
  {
    v39 = i;
    if ( v37 > this->m_iLastSeenRoshanHealth && fTankRatings[i] >= 0.80000001 )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddVectorToTail<CUtlMemoryFixedGrowable<CHandle<CBaseEntity>,16ul,int>>(
        &this->m_hProposedRoshanUnits,
        &hCandidateRoshanUnitsInWindow[i]);
      goto LABEL_86;
    }
    if ( ++i == 9 )
      break;
  }
  if ( !bHumanRequestActive )
  {
    this->m_fRoshanDesire = 0.0;
    v40 = &hCandidateRoshanUnitsInWindow[8].m_Memory;
    do
    {
      v44 = v40->m_nAllocationCount;
      *&v40[-1].m_FixedMemory.m_Data[56] = 0;
      if ( v44 >= 0 )
      {
        v41 = v40->m_nGrowSize & 0xC0000000;
        if ( &v40->m_FixedMemory != v40->m_pMemory )
        {
          if ( v40->m_pMemory != 0 && v41 == 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          m_nGrowSize = v40->m_nGrowSize;
          v40->m_pMemory = &v40->m_FixedMemory;
          v40->m_nAllocationCount = 16;
          v43 = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
          v40->m_nGrowSize = v43;
          v41 = v43 & 0xC0000000;
        }
      }
      else
      {
        v41 = v40->m_nGrowSize & 0xC0000000;
      }
      if ( v41 == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(v40);
      v40 = (v40 - 88);
    }
    while ( v40 != &fCandidateAlliedOffensivePower[4] );
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCandidateRoshanUnits);
    goto LABEL_4;
  }
  v39 = -1;
LABEL_86:
  v46 = this->m_hProposedRoshanUnits.m_Size;
  if ( v46 > 1 )
  {
    m_pMemory = this->m_hProposedRoshanUnits.m_Memory.m_pMemory;
    if ( m_pMemory != 0 )
    {
      V_qsort(m_pMemory, v46, 4, RoshanTankSort);
    }
    else
    {
      v84 = v46 - 1;
      do
      {
        if ( v84 > 0 )
        {
          v85 = 0;
          v86 = 1;
          while ( 1 )
          {
            v87 = v85 + 4;
            if ( RoshanTankSort(
                   (this->m_hProposedRoshanUnits.m_Memory.m_pMemory + v85),
                   (this->m_hProposedRoshanUnits.m_Memory.m_pMemory + v85 + 4)) < 0 )
            {
              v88 = this->m_hProposedRoshanUnits.m_Memory.m_pMemory;
              v89 = (&v88->m_Index + v87);
              v90 = (&v88->m_Index + v85);
              LODWORD(v88) = *v90;
              *v90 = *v89;
              *v89 = v88;
            }
            if ( ++v86 > v84 )
              break;
            v85 = v87;
          }
        }
        --v84;
      }
      while ( v84 != -1 );
    }
  }
  v48 = _mm_cvtsi32_si128(0x43160000u);
  *v48.m128i_i32 = *v48.m128i_i32 * kRoshanKillWindows[v39];
  v49 = COERCE_FLOAT(_mm_cvtsi128_si32(v48));
  v50 = CBaseEntity::GetAbsOrigin(v95);
  NearbyEnemyOffensivePower = CDOTA_TeamCommander::GetNearbyEnemyOffensivePower(this, v50, v49, v51);
  v53 = fCandidateAlliedOffensivePower[v39];
  v54 = this->m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST;
  v55 = (this + 16 * v54);
  v57 = *(v55 + 223);
  v56 = 1.0;
  v57.m128_f32[0] = ((v57.m128_f32[0] + v55[224]) + fminf(v55[223], v55[224])) / 3.0;
  v58 = (v39 - 2.0) / 7.0;
  if ( v58 >= 0.0 )
  {
    v56 = 0.39999998;
    if ( v58 <= 1.0 )
      v56 = (v58 * -0.60000002) + 1.0;
  }
  v59 = 0x3F800000u;
  v57.m128_f32[0] = (v57.m128_f32[0] - 0.69999999) * -2.0;
  if ( v57.m128_f32[0] >= 0.0 )
  {
    v59 = 0x3F333333u;
    if ( v57.m128_f32[0] <= 1.0 )
    {
      v57.m128_f32[0] = v57.m128_f32[0] * -0.30000001;
      v59 = v57;
      v59.m128_f32[0] = v57.m128_f32[0] + 1.0;
    }
  }
  v60 = 0.5 * v53;
  if ( v53 == (0.5 * v53) )
  {
    v61.m128_f32[0] = NearbyEnemyOffensivePower - v53;
    v62 = _mm_cmple_ss(0LL, v61);
    LODWORD(v63) = _mm_andnot_ps(v62, 0x3F800000u).m128_u32[0] | v62.m128_i32[0] & 0x3F19999A;
  }
  else
  {
    v81 = NearbyEnemyOffensivePower - v60;
    v82 = v53 - v60;
    v63 = 1.0;
    v83 = v81 / v82;
    if ( v83 >= 0.0 )
    {
      v63 = 0.60000002;
      if ( v83 <= 1.0 )
        v63 = (-0.39999998 * v83) + 1.0;
    }
  }
  v59.m128_f32[0] = v59.m128_f32[0] * v56;
  v64 = v59;
  v64.m128_f32[0] = v59.m128_f32[0] * v63;
  v65 = 1.0;
  if ( bHumanRequestActive )
    v65 = 1.4;
  v64.m128_f32[0] = v64.m128_f32[0] * v65;
  v66 = _mm_cmplt_ss(v64, 0x3F666666u);
  v67 = _mm_or_ps(_mm_andnot_ps(v66, 0x3F666666u), _mm_and_ps(v64, v66));
  v68 = 1.0;
  if ( nHumansInMode != 0 )
    v68 = 1.2;
  v67.m128_f32[0] = v67.m128_f32[0] * v68;
  v69 = 2.0;
  v70 = _mm_cmplt_ss(v67, 0x3F666666u);
  LODWORD(v71) = _mm_andnot_ps(v70, 0x3F666666u).m128_u32[0] | v67.m128_i32[0] & v70.m128_i32[0];
  v72 = (this->m_iLastSeenRoshanHealth - 400.0) / 1600.0;
  if ( v72 >= 0.0 )
  {
    v69 = 1.0;
    if ( v72 <= 1.0 )
      v69 = 2.0 - v72;
  }
  m_fRoshanDesire = fminf(v69 * v71, 0.89999998);
  this->m_fRoshanDesire = m_fRoshanDesire;
  v74 = g_pGameRules;
  if ( *&g_pGameRules[19].m_szQuestName[84] <= 0.0 )
  {
LABEL_107:
    v75 = (m_fRoshanDesire * 255.0);
    if ( v75 != v74->m_BotDebugRoshan.m_Value[v54] )
    {
      CDOTAGamerules::NetworkStateChanged(v74, 0xB54u, v54);
      v74->m_BotDebugRoshan.m_Value[v54] = v75;
    }
  }
  else if ( CountdownTimer::Now(&g_pGameRules[19].m_szQuestName[72]) >= v74->m_BotDebugTimer.m_timestamp.m_Value )
  {
    m_fRoshanDesire = this->m_fRoshanDesire;
    v74 = g_pGameRules;
    goto LABEL_107;
  }
  v76 = &hCandidateRoshanUnitsInWindow[8].m_Memory;
  do
  {
    v80 = v76->m_nAllocationCount;
    *&v76[-1].m_FixedMemory.m_Data[56] = 0;
    if ( v80 >= 0 )
    {
      v77 = v76->m_nGrowSize & 0xC0000000;
      if ( &v76->m_FixedMemory != v76->m_pMemory )
      {
        if ( v76->m_pMemory != 0 && v77 == 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        v78 = v76->m_nGrowSize;
        v76->m_pMemory = &v76->m_FixedMemory;
        v76->m_nAllocationCount = 16;
        v79 = v78 & 0x3FFFFFFF | 0x80000000;
        v76->m_nGrowSize = v79;
        v77 = v79 & 0xC0000000;
      }
    }
    else
    {
      v77 = v76->m_nGrowSize & 0xC0000000;
    }
    if ( v77 == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(v76);
    v76 = (v76 - 88);
  }
  while ( v76 != &fCandidateAlliedOffensivePower[4] );
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCandidateRoshanUnits);
  if ( VProf_5512 )
LABEL_5:
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_TeamCommander::UpdateItemsDesire  (line 5647, @0x0000000002864b70, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CVProfScope, CopyConstruct<CHandle<CBaseEntity> >, CopyConstruct<sItemPickupInfo>, DOTAGameRules, Element, FStrEq, FastSqrt, Get, GetAbilityName, GetBotByIndex, GetContainedItem, GetDroppedItem, GetEHandle, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetOpposingTeamCommander, GetOpposingTeamNumber, GetOwnerEntity, GetPlayerOwnerID, GetSerialNumber, GetTeamCommander, GetTeamNumber, GetUnit, GrowMemory, IndexToIdentity, Init, IsEnabled, Length2D, LookupEntity, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CDOTA_Item*, operator!=<CBaseEntity>, operator-, operator->, operator=, operator[], sItemPickupInfo, ~CUtlVector, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible, FindUnitsInRadius, SortEHANDLEVectorByLocation, CDOTA_BaseNPC_Hero::HasAnyAvailableInventorySpace, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CVProfile::EnterScope, CVProfile::ExitScope, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CDOTA_BaseNPC_Hero::IsItemSellable, CDOTAGamerules::IsInRangeOfFountain (20 total)
// callers: CDOTA_TeamCommander::Think
// strings: "item_cheese", "item_rapier", "item_gem", "CDOTA_TeamCommander::UpdateItemsDesire"
void __fastcall CDOTA_TeamCommander::UpdateItemsDesire(CDOTA_TeamCommander *const this)
{
  int m_enabled; // ecx
  CGameRules *v3; // rax
  CEntityInstance *v4; // rax
  const CBaseEntity *v5; // rbx
  Vector *AbsOrigin; // rax
  DOTATeam_t m_eTeam; // esi
  DOTATeam_t v8; // edi
  __int64 v9; // r12
  int v10; // ebx
  __int64 v11; // r15
  CHandle<CBaseEntity> *v12; // rax
  CHandle<CBaseEntity> *v13; // r14
  CEntityInstance *v14; // rax
  __int64 m_Size; // r15
  unsigned __int16 v16; // dx
  int v17; // esi
  uint32 v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  char v21; // bl
  const char **p_m_pszAbilityName; // rdx
  char *v23; // rax
  const char *v24; // rsi
  bool v25; // r8
  float v26; // xmm0_4
  float v27; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v29; // edx
  __int16 v30; // cx
  __int64 v31; // rbx
  CEntityInstance *v32; // rax
  CDOTA_Bot *v33; // r14
  const CEntityHandle *p_m_hUnit; // r15
  CEntityInstance *v35; // rax
  CDOTA_BaseNPC_Hero *v36; // r12
  const Vector *v37; // rax
  const CBaseEntity *v38; // rax
  const Vector *v39; // rax
  CEntityInstance *v40; // rax
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rbx
  bool v44; // zf
  sItemPickupInfo *v45; // rbx
  unsigned __int16 v46; // cx
  int v47; // esi
  int v48; // eax
  CDOTA_BaseNPC_Hero *m_pInstance; // rdx
  CEntityIdentity *v50; // rcx
  CEntityIdentity *v51; // rcx
  int m_Value; // r15d
  const Vector *v53; // rdx
  int m_iUnitType; // eax
  CEntityInstance *v55; // rax
  CEntityInstance *v56; // rdi
  int v57; // r15d
  CEntityIdentity *v58; // rdx
  int v59; // eax
  __int16 v60; // cx
  const Vector *v61; // rdx
  __int64 i; // r12
  int v63; // r14d
  CDOTA_Commander *v64; // rax
  CDOTA_TeamCommander *p_m_GoodGuys; // rdx
  CDOTA_TeamCommander *p_m_BadGuys; // rax
  int v67; // r14d
  CDOTA_Commander *v68; // rax
  CDOTA_TeamCommander *v69; // rdx
  CDOTA_TeamCommander *v70; // rax
  int v71; // r14d
  CDOTA_Commander *v72; // rax
  CDOTA_TeamCommander *v73; // rdx
  CDOTA_TeamCommander *v74; // rax
  CDOTA_Bot *v75; // rdi
  __int64 v76; // r12
  int v77; // ebx
  CEntityInstance *v78; // rax
  CDOTA_Bot *v79; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  bool VProf_5649; // [rsp+1Fh] [rbp-181h]
  CDOTA_Bot *pBestBot; // [rsp+40h] [rbp-160h]
  float fContainerAge; // [rsp+48h] [rbp-158h]
  bool bWantsToPickUp; // [rsp+4Ch] [rbp-154h]
  bool v85; // [rsp+4Eh] [rbp-152h]
  bool v86; // [rsp+54h] [rbp-14Ch]
  bool v87; // [rsp+55h] [rbp-14Bh]
  bool IsLocationVisible; // [rsp+57h] [rbp-149h]
  CDOTA_Item_Physical *pItemContainer; // [rsp+58h] [rbp-148h]
  float fDist; // [rsp+70h] [rbp-130h]
  float fDista; // [rsp+70h] [rbp-130h]
  CDOTA_Item *pItem; // [rsp+80h] [rbp-120h]
  __int64 v93; // [rsp+88h] [rbp-118h]
  int iUrgency; // [rsp+90h] [rbp-110h]
  int nDroppedItemIter; // [rsp+94h] [rbp-10Ch]
  char bWantsToDestroy; // [rsp+98h] [rbp-108h]
  Vector vItemLoc; // [rsp+B0h] [rbp-F0h] BYREF
  sItemPickupInfo info; // [rsp+C0h] [rbp-E0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAllies; // [rsp+D0h] [rbp-D0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemies; // [rsp+F0h] [rbp-B0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,16ul> hNearbyHeroes; // [rsp+110h] [rbp-90h] BYREF
  unsigned __int64 v102; // [rsp+168h] [rbp-38h]

  v102 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_5649 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::UpdateItemsDesire", 0, "Bots", 0, 4);
    v3 = g_pGameRules;
    if ( g_pGameRules == 0 )
    {
      CVProfile::ExitScope(&g_VProfCurrentProfile);
      return;
    }
  }
  else
  {
    v3 = g_pGameRules;
    if ( g_pGameRules == 0 )
      return;
  }
  this->m_ItemPickupInfos.m_Size = 0;
  if ( *&v3[55].m_szQuestName[80] <= 0 )
    goto LABEL_155;
  v93 = 0;
  nDroppedItemIter = 0;
  while ( 2 )
  {
    hNearbyEnemies.m_Size = *(*&v3[55].m_szQuestName[88] + v93);
    v4 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemies);
    v5 = v4;
    pItemContainer = v4;
    if ( v4 == 0 )
      goto LABEL_5;
    pItem = CEntityHandle::operator CEntityInstance *(&v4[25].m_worldGroupId);
    if ( pItem == 0 )
      goto LABEL_5;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    m_eTeam = this->m_eTeam;
    vItemLoc = *AbsOrigin;
    IsLocationVisible = CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, m_eTeam, &vItemLoc, 0.0);
    if ( !IsLocationVisible )
      goto LABEL_5;
    v8 = this->m_eTeam;
    hNearbyHeroes.m_Memory.m_nAllocationCount = 16;
    hNearbyHeroes.m_Size = 0;
    hNearbyHeroes.m_Memory.m_nGrowSize = 0x80000000;
    hNearbyHeroes.m_Memory.m_pMemory = &hNearbyHeroes.m_FixedMemory;
    FindUnitsInRadius(v8, &vItemLoc, 0, 1500.0, &hNearbyHeroes, 3, 1, 0, 0, 0);
    SortEHANDLEVectorByLocation(&hNearbyHeroes, &vItemLoc, 0);
    v9 = 0;
    v10 = 0;
    hNearbyAllies.m_Size = 0;
    hNearbyAllies.m_Memory.m_pMemory = 0;
    hNearbyAllies.m_Memory.m_nAllocationCount = 0;
    hNearbyAllies.m_Memory.m_nGrowSize = 0;
    hNearbyEnemies.m_Size = 0;
    hNearbyEnemies.m_Memory.m_pMemory = 0;
    hNearbyEnemies.m_Memory.m_nAllocationCount = 0;
    hNearbyEnemies.m_Memory.m_nGrowSize = 0;
    if ( hNearbyHeroes.m_Size > 0 )
    {
      while ( 1 )
      {
        v13 = &hNearbyHeroes.m_Memory.m_pMemory[v9];
        v14 = CEntityHandle::operator CEntityInstance *(&hNearbyHeroes.m_Memory.m_pMemory[v9]);
        if ( v14 == 0 || this->m_eTeam != HIBYTE(v14[7].m_CScriptComponent) )
          break;
        m_Size = hNearbyAllies.m_Size;
        if ( hNearbyAllies.m_Size == hNearbyAllies.m_Memory.m_nAllocationCount )
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hNearbyAllies.m_Memory, 1);
        ++hNearbyAllies.m_Size;
        v12 = &hNearbyAllies.m_Memory.m_pMemory[m_Size];
        if ( v12 != 0 )
        {
LABEL_14:
          v12->m_Index = v13->m_Index;
LABEL_15:
          ++v10;
          ++v9;
          if ( hNearbyHeroes.m_Size <= v10 )
            goto LABEL_22;
        }
        else
        {
          ++v10;
          ++v9;
          if ( hNearbyHeroes.m_Size <= v10 )
            goto LABEL_22;
        }
      }
      v11 = hNearbyEnemies.m_Size;
      if ( hNearbyEnemies.m_Size == hNearbyEnemies.m_Memory.m_nAllocationCount )
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hNearbyEnemies.m_Memory, 1);
      ++hNearbyEnemies.m_Size;
      v12 = &hNearbyEnemies.m_Memory.m_pMemory[v11];
      if ( v12 == 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
LABEL_22:
    if ( pItem->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v16 = 0x7FFF;
      v17 = 0x7FFF;
    }
    else
    {
      v16 = pItem->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v17 = v16;
    }
    v18 = (pItem->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v16 & 0x7FFF;
    info.hUnit.m_Index = v18;
    if ( v18 + 2 <= 1
      || (v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9]) == 0
      || (v20 = &v19[v17 & 0x1FF]) == 0
      || v18 != v20->m_EHandle.m_Index
      || v20->m_pInstance == 0
      || (v21 = 1, this->m_eTeam != HIBYTE(v20->m_pInstance[7].m_CScriptComponent)) )
    {
      v21 = 0;
    }
    p_m_pszAbilityName = &pItem->m_pAbilityData->m_pszAbilityName;
    if ( p_m_pszAbilityName == 0 )
    {
      v25 = 0;
      v86 = 0;
      v87 = 0;
      goto LABEL_146;
    }
    v23 = *p_m_pszAbilityName;
    if ( *p_m_pszAbilityName == 0 )
    {
      v86 = 0;
      goto LABEL_170;
    }
    if ( v23 == "item_aegis" )
    {
      v86 = IsLocationVisible;
      goto LABEL_34;
    }
    v86 = strcmp(*p_m_pszAbilityName, "item_aegis") == 0;
    if ( v23 == 0 )
    {
LABEL_170:
      v87 = 0;
LABEL_35:
      v24 = *p_m_pszAbilityName;
      v25 = v87 || v86;
      if ( v23 != 0 )
      {
        if ( v23 == "item_rapier" )
        {
          v85 = IsLocationVisible;
LABEL_40:
          IsLocationVisible = strcmp(v24, "item_gem") == 0;
          goto LABEL_41;
        }
        goto LABEL_37;
      }
LABEL_146:
      v85 = 0;
      if ( p_m_pszAbilityName == 0 )
        goto LABEL_147;
      goto LABEL_38;
    }
    if ( v23 != "item_cheese" )
    {
LABEL_34:
      v87 = strcmp(*p_m_pszAbilityName, "item_cheese") == 0;
      goto LABEL_35;
    }
    v87 = IsLocationVisible;
    v25 = IsLocationVisible;
LABEL_37:
    v85 = strcmp(*p_m_pszAbilityName, "item_rapier") == 0;
LABEL_38:
    v24 = *p_m_pszAbilityName;
    if ( *p_m_pszAbilityName != 0 )
    {
      if ( v24 == "item_gem" )
        goto LABEL_41;
      goto LABEL_40;
    }
LABEL_147:
    IsLocationVisible = 0;
LABEL_41:
    v26 = 0.0;
    if ( g_pGameRules != 0 )
      v26 = *&g_pGameRules[18].m_szQuestName[20];
    v27 = v26 - pItemContainer->m_fCreationTime;
    info.hUnit.m_Index = -1;
    info.hItemContainer.m_Index = -1;
    m_pEntity = pItemContainer->m_pEntity;
    fContainerAge = v27;
    if ( m_pEntity != 0 )
    {
      v29 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v30 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v30 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hItemContainer.m_Index) = v30 | info.hItemContainer.m_Index & 0x8000;
      info.hItemContainer.m_Index = (v29 << 15) | info.hItemContainer.m_Index & 0x7FFF;
    }
    if ( v25 )
    {
      bWantsToPickUp = 1;
      bWantsToDestroy = 0;
      iUrgency = 3 - v87;
    }
    else if ( v85 )
    {
      iUrgency = 3;
      bWantsToPickUp = 1;
      bWantsToDestroy = 0;
    }
    else
    {
      if ( IsLocationVisible )
      {
        v61 = CBaseEntity::GetAbsOrigin(pItemContainer);
        if ( CDOTAGamerules::IsInRangeOfFountain(g_pGameRules, this->m_eTeam, v61) )
        {
          for ( i = 0; ; ++i )
          {
            v63 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
            v64 = DOTACommander();
            p_m_GoodGuys = &v64->m_GoodGuys;
            p_m_BadGuys = &v64->m_BadGuys;
            if ( v63 != 2 )
              p_m_GoodGuys = p_m_BadGuys;
            if ( i >= p_m_GoodGuys->m_BotList.m_Size )
              goto LABEL_76;
            v67 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
            v68 = DOTACommander();
            v69 = &v68->m_GoodGuys;
            v70 = &v68->m_BadGuys;
            if ( v67 != 2 )
              v69 = v70;
            if ( i < v69->m_BotList.m_Size && v69->m_BotList.m_Memory.m_pMemory[i] != 0 )
            {
              v71 = (this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2;
              v72 = DOTACommander();
              v73 = &v72->m_GoodGuys;
              v74 = &v72->m_BadGuys;
              if ( v71 != 2 )
                v73 = v74;
              if ( i < v73->m_BotList.m_Size )
              {
                v75 = v73->m_BotList.m_Memory.m_pMemory[i];
                if ( v75 != 0 && CDOTA_Bot::HasInvisibility(v75, 0) )
                  break;
              }
            }
          }
          v76 = 0;
          v77 = 0;
          if ( hNearbyAllies.m_Size <= 0 )
            goto LABEL_76;
          while ( 1 )
          {
            v78 = CEntityHandle::operator CEntityInstance *(&hNearbyAllies.m_Memory.m_pMemory[v76]);
            if ( v78 != 0 && BYTE3(v78[7]._vptr_IHandleEntity) != 0 && (v78[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              v79 = *&v78[45].m_worldGroupId.m_nHashCode;
              if ( v79 != 0 && CDOTA_Bot::GetTankRating(v79) > 0.5 )
                break;
            }
            ++v77;
            ++v76;
            if ( hNearbyAllies.m_Size <= v77 )
              goto LABEL_76;
          }
        }
      }
      else if ( (*(pItem->_vptr_IHandleEntity + 355))(pItem) != 0
             && v21 == 0
             && (*(pItem->_vptr_IHandleEntity + 352))(pItem) != 0 )
      {
        iUrgency = 1;
        bWantsToPickUp = 0;
        bWantsToDestroy = 1;
        goto LABEL_50;
      }
      iUrgency = 1;
      bWantsToPickUp = 1;
      bWantsToDestroy = 0;
    }
LABEL_50:
    if ( hNearbyAllies.m_Size <= 0 )
      goto LABEL_76;
    v31 = 0;
    pBestBot = 0;
    do
    {
      while ( 1 )
      {
        v32 = CEntityHandle::operator CEntityInstance *(&hNearbyAllies.m_Memory.m_pMemory[v31]);
        if ( v32 == 0 )
          goto LABEL_52;
        if ( BYTE3(v32[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_52;
        if ( (v32[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_52;
        v33 = *&v32[45].m_worldGroupId.m_nHashCode;
        if ( v33 == 0 )
          goto LABEL_52;
        p_m_hUnit = &v33->m_hUnit;
        if ( bWantsToDestroy != 0 )
          goto LABEL_69;
        v35 = CEntityHandle::operator CEntityInstance *(&v33->m_hUnit);
        if ( v35 == 0
          || BYTE3(v35[7]._vptr_IHandleEntity) == 0
          || (v36 = v35, (v35[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
        {
          v36 = 0;
        }
        if ( !CDOTA_BaseNPC_Hero::HasAnyAvailableInventorySpace(v36) )
          goto LABEL_52;
        v37 = CBaseEntity::GetAbsOrigin(v36);
        fDist = fsqrt(((v37->x - vItemLoc.x) * (v37->x - vItemLoc.x)) + ((v37->y - vItemLoc.y) * (v37->y - vItemLoc.y)));
        if ( iUrgency != 1 && hNearbyEnemies.m_Size > 0 )
        {
          v38 = CEntityHandle::operator CEntityInstance *(hNearbyEnemies.m_Memory.m_pMemory);
          v39 = CBaseEntity::GetAbsOrigin(v38);
          if ( fDist > fsqrt(
                         ((v39->x - vItemLoc.x) * (v39->x - vItemLoc.x))
                       + ((v39->y - vItemLoc.y) * (v39->y - vItemLoc.y))) )
            break;
        }
        if ( !v86 && !v85 && !v87 && !IsLocationVisible )
        {
          if ( pItem->m_hOwnerEntity.m_Value.m_Index == -1 )
          {
            v46 = 0x7FFF;
            v47 = 0x7FFF;
          }
          else
          {
            v46 = pItem->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
            v47 = v46;
          }
          v48 = (pItem->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v46 & 0x7FFF;
          m_pInstance = 0;
          if ( (v48 + 2) > 1 )
          {
            v50 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v47 >> 9];
            if ( v50 != 0 )
            {
              v51 = &v50[v47 & 0x1FF];
              if ( v51 != 0 && v48 == v51->m_EHandle.m_Index )
                m_pInstance = v51->m_pInstance;
            }
          }
          if ( v36 != m_pInstance )
            goto LABEL_52;
        }
        if ( CDOTA_BaseNPC_Hero::IsItemSellable(v36, pItem) )
        {
          Inventory = CDOTA_BaseNPC::GetInventory(v36);
          if ( CDOTA_UnitInventory::FindEmptySpaceInInventory(Inventory, 1, 0) == -1 )
            goto LABEL_52;
        }
        m_Value = pItem->m_iPlayerOwnerID.m_Value;
        if ( (*(v36->_vptr_IHandleEntity + 414))(v36) != m_Value )
        {
          v53 = CBaseEntity::GetAbsOrigin(pItemContainer);
          if ( CDOTAGamerules::IsInRangeOfFountain(g_pGameRules, v36->m_iTeamNum.m_Value, v53) )
            goto LABEL_52;
        }
        if ( pBestBot == 0 )
          goto LABEL_67;
        if ( !v85 && !v86 )
        {
          if ( v87 )
            goto LABEL_103;
          goto LABEL_107;
        }
        if ( fContainerAge >= 2.0 )
          goto LABEL_98;
        if ( !pBestBot->m_bHuman )
        {
          if ( v33->m_bHuman )
            goto LABEL_67;
LABEL_98:
          m_iUnitType = pBestBot->m_iUnitType;
          if ( (m_iUnitType & 0x30) == 0 && (v33->m_iUnitType & 0x30) != 0
            || (m_iUnitType & 0xE) != 0 && (v33->m_iUnitType & 0xE) == 0 )
          {
            goto LABEL_67;
          }
          if ( v87 )
          {
LABEL_103:
            v55 = CEntityHandle::operator CEntityInstance *(&pBestBot->m_hUnit);
            if ( v55 != 0 && BYTE3(v55[7]._vptr_IHandleEntity) != 0 )
              v56 = v55;
            else
              v56 = 0;
            v57 = (*(v56->_vptr_IHandleEntity + 156))(v56);
            if ( v57 < (*(v36->_vptr_IHandleEntity + 156))(v36) )
              goto LABEL_67;
          }
LABEL_107:
          if ( IsLocationVisible )
          {
            fDista = CDOTA_Bot::GetTankRating(pBestBot);
            if ( CDOTA_Bot::GetTankRating(v33) <= fDista )
              v33 = pBestBot;
            pBestBot = v33;
          }
          goto LABEL_52;
        }
        if ( v33->m_bHuman )
          goto LABEL_98;
LABEL_52:
        if ( hNearbyAllies.m_Size <= ++v31 )
          goto LABEL_68;
      }
      if ( !v33->m_bHuman )
        goto LABEL_69;
LABEL_67:
      ++v31;
      pBestBot = v33;
    }
    while ( hNearbyAllies.m_Size > v31 );
LABEL_68:
    p_m_hUnit = &pBestBot->m_hUnit;
    if ( pBestBot == 0 )
      goto LABEL_76;
LABEL_69:
    v40 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v40 != 0 && BYTE3(v40[7]._vptr_IHandleEntity) != 0 && (v58 = v40->m_pEntity) != 0 )
    {
      v59 = (v58->m_EHandle.m_Index >> 15) - (v58->m_flags & 1);
      v60 = 0x7FFF;
      if ( v58->m_EHandle.m_Index != -1 )
        v60 = v58->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hUnit.m_Index) = v60 | info.hUnit.m_Index & 0x8000;
      info.hUnit.m_Index = (v59 << 15) | info.hUnit.m_Index & 0x7FFF;
    }
    else
    {
      info.hUnit.m_Index = -1;
    }
    v41 = this->m_ItemPickupInfos.m_Size;
    v42 = this->m_ItemPickupInfos.m_Size;
    if ( v41 == this->m_ItemPickupInfos.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<sItemPickupInfo,int>::Grow(&this->m_ItemPickupInfos.m_Memory, 1);
      v42 = this->m_ItemPickupInfos.m_Size;
    }
    v43 = v41;
    v44 = &this->m_ItemPickupInfos.m_Memory.m_pMemory[v43] == 0;
    v45 = &this->m_ItemPickupInfos.m_Memory.m_pMemory[v43];
    this->m_ItemPickupInfos.m_Size = v42 + 1;
    if ( !v44 )
    {
      v45->hUnit.m_Index = info.hUnit.m_Index;
      v45->hItemContainer.m_Index = info.hItemContainer.m_Index;
      v45->bPickup = bWantsToPickUp;
      v45->iUrgency = iUrgency;
    }
LABEL_76:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemies);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAllies);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyHeroes);
LABEL_5:
    ++nDroppedItemIter;
    v93 += 4;
    v3 = g_pGameRules;
    if ( nDroppedItemIter < *&g_pGameRules[55].m_szQuestName[80] )
      continue;
    break;
  }
LABEL_155:
  if ( VProf_5649 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_TeamCommander::UpdateIncomingStuns  (line 5885, @0x0000000002837670, libserver.so)  // inlines: DOTAGameRules, Element, GetGameTime, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
// callers: CDOTA_TeamCommander::Think
void __fastcall CDOTA_TeamCommander::UpdateIncomingStuns(CDOTA_TeamCommander *const this)
{
  int m_Size; // eax
  int v3; // ebx
  sIncomingStun *m_pMemory; // rsi
  float v5; // xmm1_4
  __int64 v6; // rcx
  int v7; // eax

  m_Size = this->m_IncomingStuns.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    do
    {
      while ( 1 )
      {
        m_pMemory = this->m_IncomingStuns.m_Memory.m_pMemory;
        v5 = 0.0;
        v6 = v3;
        if ( g_pGameRules != 0 )
          v5 = *&g_pGameRules[18].m_szQuestName[20];
        if ( v5 > m_pMemory[v6].fExpireTime )
          break;
        m_Size = this->m_IncomingStuns.m_Size;
        if ( ++v3 >= m_Size )
          return;
      }
      v7 = m_Size - v3 - 1;
      if ( v7 > 0 )
        memmove(&m_pMemory[v6], &m_pMemory[v6 + 1], 8LL * v7);
      m_Size = this->m_IncomingStuns.m_Size - 1;
      this->m_IncomingStuns.m_Size = m_Size;
    }
    while ( v3 < m_Size );
  }
}


// CDOTA_TeamCommander::HasRequestActive  (line 5899, @0x0000000002837730, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CEntityHandle::operator CEntityInstance*
// callers: CDOTA_BotMode_DefendTower_Human::GetDesire, CDOTA_BotMode_Attack::IsValidAttackTarget, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_PushTower_Human::GetDesire, CDOTA_BotMode_Roshan::GetDesire, CDOTA_BotMode_Roshan_Human::GetDesire, CDOTA_BotMode_PushTower::GetDesire, CDOTA_TeamCommander::IsUnitInRoshanList, CDOTA_TeamCommander::UpdateRoshanDesire, CDOTA_TeamCommander::UpdateDefendLaneDesires, CDOTA_TeamCommander::UpdatePushLaneDesires (14 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_TeamCommander::HasRequestActive(
        CDOTA_TeamCommander *const this,
        int iRequestType,
        const CEntityHandle *hEntity,
        int *pCount)
{
  int m_Size; // eax
  sBotHumanRequest *m_pMemory; // rcx
  int v8; // r15d
  const CEntityHandle *p_hEntity; // rbx
  __int64 v10; // r14
  CEntityIdentity *v11; // rdi
  CEntityIdentity *v12; // rdi
  bool result; // al
  CConcreteEntityList *v15; // [rsp+10h] [rbp-40h]
  CEntityInstance *v16; // [rsp+18h] [rbp-38h]

  m_Size = this->m_RequestList.m_Size;
  if ( m_Size <= 0 )
  {
    result = 0;
    v8 = 0;
  }
  else
  {
    m_pMemory = this->m_RequestList.m_Memory.m_pMemory;
    v8 = 0;
    p_hEntity = &m_pMemory->hEntity;
    v15 = CEntityHandle::gm_pEntityList;
    v10 = &m_pMemory[(m_Size - 1) + 1].hEntity;
    do
    {
      while ( 1 )
      {
        if ( p_hEntity[-4].m_Index == iRequestType )
        {
          if ( hEntity->m_Index + 2 <= 1 )
            break;
          v11 = v15->m_pIdentityChunks[(LOWORD(hEntity->m_Index) >> 9) & 0x3F];
          if ( v11 == 0 )
            break;
          v12 = &v11[hEntity->m_Index & 0x1FF];
          if ( v12 == 0 )
            break;
          if ( hEntity->m_Index != v12->m_EHandle.m_Index )
            break;
          if ( v12->m_pInstance == 0 )
            break;
          v16 = CEntityHandle::operator CEntityInstance *(p_hEntity);
          if ( v16 == CEntityHandle::operator CEntityInstance *(hEntity) )
            break;
        }
        p_hEntity += 12;
        if ( p_hEntity == v10 )
          goto LABEL_10;
      }
      p_hEntity += 12;
      ++v8;
    }
    while ( p_hEntity != v10 );
LABEL_10:
    result = v8 > 0;
  }
  if ( pCount != 0 )
    *pCount = v8;
  return result;
}


// CDOTA_TeamCommander::GetLatestRequest  (line 5918, @0x0000000002837840, libserver.so)  // inlines: operator[]
// callers: CDOTA_BotMode_AssembleWithHumans::CalculateDesiredLocation, CDOTA_BotMode_Assemble::GetDesire, CDOTA_BotMode_Assemble::Think
Vector __fastcall CDOTA_TeamCommander::GetLatestRequest(CDOTA_TeamCommander *const this, int iRequestType)
{
  int v2; // edx
  sBotHumanRequest *v3; // rcx
  sBotHumanRequest *v4; // rax
  __int64 v7; // [rsp+0h] [rbp-10h]
  vec_t z; // [rsp+8h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = this->m_RequestList.m_Size - 1;
  if ( v2 < 0 )
  {
LABEL_6:
    z = vec3_origin.z;
    *&result.x = *&vec3_origin.x;
    result.z = z;
    return result;
  }
  v3 = &this->m_RequestList.m_Memory.m_pMemory[v2];
  v4 = v3 - 1;
  if ( v3->iRequestType != iRequestType )
  {
    while ( --v2 != -1 )
    {
      v3 = v4--;
      if ( v4[1].iRequestType == iRequestType )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  v7 = *&v3->vLocation.x;
  *&result.x = v7;
  result.z = v3->vLocation.z;
  return result;
}


// CDOTA_TeamCommander::AreAnyHumansOnTeam  (line 5933, @0x00000000028378d0, libserver.so)  // inlines: GetBotByIndex
// callers: CDOTA_BotMode_Rune::Think, CDOTA_TeamCommander::CLaningSpeech::Think, CDOTA_TeamCommander::OnHeroKill, CDOTA_TeamCommander::OnTeamfightWin, CDOTA_TeamCommander::UpdateCourierBoostUsage, CDOTA_BaseNPC_Hero::GetSituationalItemPurchase, CDOTA_BaseNPC_Hero::UpdateBotDifficulty
bool __fastcall CDOTA_TeamCommander::AreAnyHumansOnTeam(CDOTA_TeamCommander *const this)
{
  int m_Size; // ecx
  __int64 v2; // rdx
  CDOTA_Bot *v3; // rax
  bool result; // al

  m_Size = this->m_BotList.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = this->m_BotList.m_Memory.m_pMemory[v2];
    if ( v3 != 0 )
    {
      result = v3->m_bHuman;
      if ( result )
        break;
    }
    if ( m_Size <= ++v2 )
      return 0;
  }
  return result;
}


// CDOTA_TeamCommander::ShouldBuyWards  (line 5946, @0x0000000002837910, libserver.so)  // inlines: GetBotByIndex
// callers: CDOTA_BaseNPC_Hero::GetSituationalItemPurchase
bool __fastcall CDOTA_TeamCommander::ShouldBuyWards(CDOTA_TeamCommander *const this, CDOTA_Bot *pBot)
{
  int m_Size; // edx
  CDOTA_Bot **m_pMemory; // rdi
  __int64 v4; // rax
  CDOTA_Bot *v5; // rcx
  __int64 v6; // rax
  int m_iUnitType; // r8d
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rax
  int v11; // r8d
  CDOTA_Bot **v13; // rdi
  CDOTA_Bot **v14; // rax

  m_Size = this->m_BotList.m_Size;
  if ( m_Size <= 0 )
    return pBot == 0;
  m_pMemory = this->m_BotList.m_Memory.m_pMemory;
  v4 = 0;
  while ( 1 )
  {
    v5 = m_pMemory[v4];
    if ( !v5->m_bHuman && (v5->m_iUnitType & 4) != 0 )
      break;
    if ( m_Size <= ++v4 )
    {
      v6 = 0;
      while ( 1 )
      {
        v5 = m_pMemory[v6];
        if ( !v5->m_bHuman )
        {
          m_iUnitType = v5->m_iUnitType;
          if ( (m_iUnitType & 0xE) != 0 && (m_iUnitType & 0x30) == 0 )
            break;
        }
        if ( m_Size <= ++v6 )
        {
          v8 = 0;
          while ( 1 )
          {
            v5 = m_pMemory[v8];
            if ( !v5->m_bHuman )
            {
              v9 = v5->m_iUnitType;
              if ( (v9 & 0x40) != 0 && (v9 & 0x30) == 0 )
                break;
            }
            if ( m_Size <= ++v8 )
            {
              v10 = 0;
              while ( 1 )
              {
                v5 = m_pMemory[v10];
                if ( !v5->m_bHuman )
                {
                  v11 = v5->m_iUnitType;
                  if ( (v11 & 0xE) != 0 || (v11 & 0x40) != 0 )
                    break;
                }
                if ( m_Size <= ++v10 )
                {
                  v5 = *m_pMemory;
                  if ( !(*m_pMemory)->m_bHuman )
                    return v5 == pBot;
                  v13 = m_pMemory + 1;
                  v14 = &v13[m_Size - 1];
                  while ( v13 != v14 )
                  {
                    v5 = *v13++;
                    if ( !v5->m_bHuman )
                      return v5 == pBot;
                  }
                  return pBot == 0;
                }
              }
              return v5 == pBot;
            }
          }
          return v5 == pBot;
        }
      }
      return v5 == pBot;
    }
  }
  return v5 == pBot;
}


// CDOTA_TeamCommander::SetRoamingUnit  (line 6025, @0x0000000002837a30, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// callers: CDOTA_BotMode_Roam::OnEnd, CDOTA_BotMode_Roam::OnStart
void __fastcall CDOTA_TeamCommander::SetRoamingUnit(
        CDOTA_TeamCommander *const this,
        CDOTA_BaseNPC *pUnit,
        DOTA_LANE lane)
{
  CEntityIdentity *m_pEntity; // rcx
  int v4; // eax
  __int16 v5; // si
  __int16 m_Index; // cx

  if ( pUnit != 0 && (m_pEntity = pUnit->m_pEntity) != 0 )
  {
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v5 = 0x7FFF;
    else
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    m_Index = this->m_hRoamingUnit.m_Index;
    this->m_RoamTargetLane = lane;
    LOWORD(this->m_hRoamingUnit.m_Index) = v5 | m_Index & 0x8000;
    this->m_hRoamingUnit.m_Index = (v4 << 15) | this->m_hRoamingUnit.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hRoamingUnit.m_Index = -1;
    this->m_RoamTargetLane = lane;
  }
}


// CDOTA_TeamCommander::GetRoamingUnit  (line 6033, @0x0000000002837ac0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_BotMode_Laning::Think
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_TeamCommander::GetRoamingUnit(CDOTA_TeamCommander *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *result; // rax

  m_Index = this->m_hRoamingUnit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRoamingUnit.m_Index) >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[this->m_hRoamingUnit.m_Index & 0x1FF];
  if ( v3 == 0 )
    return 0;
  if ( m_Index != v3->m_EHandle.m_Index )
    return 0;
  result = v3->m_pInstance;
  if ( v3->m_pInstance == 0 || !result->m_bIsDOTANPC )
    return 0;
  return result;
}


// CDOTA_TeamCommander::GetRoamTargetLane  (line 6040, @0x0000000002837b30, libserver.so)
// callers: CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_Roam::GetDesire, CDOTA_BotMode_Laning::Think
DOTA_LANE __fastcall CDOTA_TeamCommander::GetRoamTargetLane(CDOTA_TeamCommander *const this)
{
  return this->m_RoamTargetLane;
}


// CDOTA_TeamCommander::CalculateLaneFronts  (line 6047, @0x000000000284daa0, libserver.so)  // inlines: AddToTail, CDOTABaseNPCCollector, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, CalculateAmountAlongLane, CopyConstruct<CDOTA_BaseNPC*>, Element, ForEachBot<CDOTABaseNPCCollector>, GetAmountAlongLane, GetOpposingTeamNumber, GetTeamNumber, GrowMemory, HasAttackCapability, IsElapsed, IsEnabled, Purge, RemoveAll, ToDOTABaseNPC, operator(), operator[], ~CDOTABaseNPCCollector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope
// calls: CountdownTimer::Now, RandomFloat, CountdownTimer::Start, UnitFilter, CVProfile::ExitScope, CDOTAGamerules::GetNumTowers, CDOTAGamerules::GetTower, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::FindClosestLane, CDOTA_TeamCommander::CalculateAmountAlongLane, CUtlMemory<CDOTA_BaseNPC*, int>::Purge (14 total)
// callers: CDOTA_TeamCommander::Think
// strings: "CDOTA_TeamCommander::CalculateLaneFronts"
void __fastcall CDOTA_TeamCommander::CalculateLaneFronts(CDOTA_TeamCommander *const this)
{
  int m_enabled; // ecx
  float v3; // xmm0_4
  float v4; // xmm1_4
  DOTATeam_t m_eTeam; // eax
  float v6; // xmm0_4
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  CDOTA_BaseNPC *v11; // r12
  __int64 v12; // r14
  int v13; // eax
  CDOTA_BaseNPC **v14; // rax
  int v15; // r12d
  float *v16; // rax
  CDOTA_BaseNPC_Tower *Tower; // rax
  CDOTA_BaseNPC_Tower *v18; // rbx
  DOTATeam_t v19; // eax
  float v20; // xmm0_4
  __int64 v21; // r14
  int i; // r12d
  const Vector *v23; // rax
  __int64 v24; // rbx
  int v25; // eax
  const Vector *AbsOrigin; // rax
  float v27; // xmm0_4
  float *v28; // rax
  bool v29; // [rsp-19h] [rbp-85h]
  _BOOL4 v30; // [rsp-18h] [rbp-84h]
  float v31; // [rsp-14h] [rbp-80h]
  bool v32; // [rsp-14h] [rbp-80h]
  __int64 v33; // [rsp-14h] [rbp-80h]
  float v34; // [rsp-8h] [rbp-74h] BYREF
  float v35; // [rsp-4h] [rbp-70h] BYREF
  DOTA_LANE fAmt; // [rsp+0h] [rbp-6Ch] BYREF
  int fDist; // [rsp+4h] [rbp-68h]
  CDOTABaseNPCCollector roster; // [rsp+Ch] [rbp-60h] BYREF

  if ( this->m_LaneFrontUpdate.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_LaneFrontUpdate) < this->m_LaneFrontUpdate.m_timestamp.m_Value )
  {
    return;
  }
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v29 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_TeamCommander::CalculateLaneFronts", 0, "Bots", 0, 4);
  v31 = RandomFloat(0.80000001, 1.0);
  v3 = (*(*engine + 96LL))(engine);
  CountdownTimer::Start(&this->m_LaneFrontUpdate, v3 * v31, v4);
  m_eTeam = this->m_eTeam;
  if ( m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST )
  {
    this->m_LaneFrontTowersAmounts[0][1] = 0.0;
    this->m_LaneFrontCreepsAmounts[0][1] = 0.0;
    this->m_LaneFrontTowersAmounts[0][2] = 0.0;
    this->m_LaneFrontCreepsAmounts[0][2] = 0.0;
    this->m_LaneFrontTowersAmounts[0][3] = 0.0;
    this->m_LaneFrontCreepsAmounts[0][3] = 0.0;
    goto LABEL_7;
  }
  this->m_LaneFrontTowersAmounts[0][1] = 1.0;
  this->m_LaneFrontCreepsAmounts[0][1] = 1.0;
  this->m_LaneFrontTowersAmounts[0][2] = 1.0;
  this->m_LaneFrontCreepsAmounts[0][2] = 1.0;
  this->m_LaneFrontTowersAmounts[0][3] = 1.0;
  this->m_LaneFrontCreepsAmounts[0][3] = 1.0;
  if ( m_eTeam != DOTATeam_t::DOTA_TEAM_BADGUYS )
  {
LABEL_7:
    v6 = 1.0;
    this->m_LaneFrontTowersAmounts[1][1] = 1.0;
    this->m_LaneFrontCreepsAmounts[1][1] = 1.0;
    this->m_LaneFrontTowersAmounts[1][2] = 1.0;
    this->m_LaneFrontCreepsAmounts[1][2] = 1.0;
    goto LABEL_8;
  }
  this->m_LaneFrontTowersAmounts[1][1] = 0.0;
  v6 = 0.0;
  this->m_LaneFrontCreepsAmounts[1][1] = 0.0;
  this->m_LaneFrontTowersAmounts[1][2] = 0.0;
  this->m_LaneFrontCreepsAmounts[1][2] = 0.0;
LABEL_8:
  roster.m_iTypeFilter = m_eTeam;
  v32 = m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST;
  fDist = 0;
  this->m_LaneFrontTowersAmounts[1][3] = v6;
  m_Head = g_NextBotManager.m_botList.m_Head;
  v30 = m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST;
  this->m_LaneFrontCreepsAmounts[1][3] = v6;
  *&roster.m_who.m_Size = 0;
  roster.m_who.m_Memory.m_pMemory = 0;
  roster.m_who.m_Memory.m_nAllocationCount = 3;
  roster.m_who.m_Memory.m_nGrowSize = 34;
  roster.m_iTeamFilter = 0;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v9 = m_Head;
      v10 = (*(m_pMemory[v9].m_Element->_vptr_INextBotEventResponder + 66))(m_pMemory[v9].m_Element);
      v11 = v10;
      if ( v10 == 0 || *(v10 + 339) == 0 )
        v11 = 0;
      if ( UnitFilter(
             v11,
             roster.m_who.m_Memory.m_nAllocationCount,
             roster.m_who.m_Memory.m_nGrowSize,
             roster.m_iTeamFilter,
             roster.m_iTypeFilter) == 0 )
      {
        v12 = fDist;
        v13 = fDist;
        if ( fDist == LODWORD(roster.m_who.m_Memory.m_pMemory) )
        {
          CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&roster, 1);
          v13 = fDist;
        }
        fDist = v13 + 1;
        v14 = (*&roster.m_who.m_Size + 8 * v12);
        if ( v14 != 0 )
          *v14 = v11;
      }
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v9].m_Next;
    }
    while ( m_Head != 0xFFFF );
    if ( fDist > 0 )
    {
      v21 = 0;
      for ( i = 0; fDist > i; ++i )
      {
        v24 = *(*&roster.m_who.m_Size + v21);
        if ( (*(*v24 + 3264LL))(v24) == 0 || (*(v24 + 2436) & 3) == 0 )
          goto LABEL_37;
        v25 = *(v24 + 2088);
        if ( (v25 & 0x800) != 0 || (v25 & 0x80u) == 0 )
        {
          v35 = 400.0;
          AbsOrigin = CBaseEntity::GetAbsOrigin(v24);
          CDOTA_TeamCommander::FindClosestLane(this, AbsOrigin, 400.0, &fAmt, &v34);
        }
        else
        {
          fAmt = *(v24 + 4504);
          v23 = CBaseEntity::GetAbsOrigin(v24);
          if ( fAmt == DOTA_LANE::DOTA_LANE_NONE )
            goto LABEL_37;
          CDOTA_TeamCommander::CalculateAmountAlongLane(this, fAmt, v23, &v34, &v35);
        }
        if ( fAmt != DOTA_LANE::DOTA_LANE_NONE && v35 < 1000.0 )
        {
          if ( this->m_eTeam == *(v24 + 383) )
          {
            v27 = v34;
            v28 = (this + 16 * v32 + 4 * fAmt);
            if ( v34 <= v28[221] )
              goto LABEL_37;
LABEL_46:
            v28[221] = v27;
            goto LABEL_37;
          }
          v27 = v34;
          v28 = (this + 16 * v30 + 4 * fAmt);
          if ( v28[221] > v34 )
            goto LABEL_46;
        }
LABEL_37:
        v21 += 8;
      }
    }
  }
  v15 = 0;
  this->m_LaneFrontTowersAmounts[0][1] = this->m_LaneFrontCreepsAmounts[0][1];
  this->m_LaneFrontTowersAmounts[0][2] = this->m_LaneFrontCreepsAmounts[0][2];
  v33 = 4LL * v32;
  this->m_LaneFrontTowersAmounts[0][3] = this->m_LaneFrontCreepsAmounts[0][3];
  this->m_LaneFrontTowersAmounts[1][1] = this->m_LaneFrontCreepsAmounts[1][1];
  this->m_LaneFrontTowersAmounts[1][2] = this->m_LaneFrontCreepsAmounts[1][2];
  this->m_LaneFrontTowersAmounts[1][3] = this->m_LaneFrontCreepsAmounts[1][3];
  while ( v15 < CDOTAGamerules::GetNumTowers(g_pGameRules) )
  {
    Tower = CDOTAGamerules::GetTower(g_pGameRules, v15);
    v18 = Tower;
    if ( Tower != 0 && (*(Tower->_vptr_IHandleEntity + 408))(Tower) != 0 )
    {
      v19 = this->m_eTeam;
      v20 = *(&v18->m_iInvulnCount + (v19 != DOTATeam_t::DOTA_TEAM_FIRST) + 3);
      if ( v19 != v18->m_iTeamNum.m_Value )
      {
        v16 = (this + 16 * v30 + 4 * v18->m_Lane);
        if ( v16[229] <= v20 )
          goto LABEL_26;
LABEL_25:
        v16[229] = v20;
        goto LABEL_26;
      }
      v16 = (this + 4 * v33 + 4 * v18->m_Lane);
      if ( v20 > v16[229] )
        goto LABEL_25;
    }
LABEL_26:
    ++v15;
  }
  fDist = 0;
  if ( (HIDWORD(roster.m_who.m_Memory.m_pMemory) & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&roster);
    if ( (HIDWORD(roster.m_who.m_Memory.m_pMemory) & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&roster);
  }
  if ( v29 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_TeamCommander::FindLeastOccupiedLocationInOBB  (line 6153, @0x0000000002837b40, libserver.so)  // inlines: Clamp<float>, FastSqrt, Get, GetBotByIndex, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=
// calls: RandomFloat, CBaseEntity::GetAbsOrigin
// callers: CDOTA_TeamCommander::CalculateLocationAlongLane
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_TeamCommander::FindLeastOccupiedLocationInOBB(
        CDOTA_TeamCommander *const this,
        const Vector *const vBaseLoc,
        const Vector *const vHeight,
        const Vector *const vWidth,
        CDOTA_Bot *pExcludeBot)
{
  __int64 v8; // r13
  int v9; // r15d
  CDOTA_Bot *v10; // rax
  uint32 m_Index; // ecx
  unsigned __int16 v12; // dx
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  float v19; // xmm0_4
  int v24; // [rsp+20h] [rbp-80h]
  float v25; // [rsp+24h] [rbp-7Ch]
  float z; // [rsp+28h] [rbp-78h]
  float v27; // [rsp+2Ch] [rbp-74h]
  float v28; // [rsp+30h] [rbp-70h]
  float fBestTotalDist; // [rsp+34h] [rbp-6Ch]
  float v30; // [rsp+38h] [rbp-68h]
  float v31; // [rsp+38h] [rbp-68h]
  float v32; // [rsp+3Ch] [rbp-64h]
  float v33; // [rsp+3Ch] [rbp-64h]
  float v34; // [rsp+40h] [rbp-60h]
  float v35; // [rsp+44h] [rbp-5Ch]
  float fTotalDist; // [rsp+4Ch] [rbp-54h]
  Vector v37; // 0:^4.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v24 = 10;
  fBestTotalDist = 0.0;
  v37 = vec3_origin;
  do
  {
    v28 = RandomFloat(-1.0, 1.0);
    z = vWidth->z;
    v30 = v28 * vWidth->y;
    v32 = vWidth->x * v28;
    v27 = RandomFloat(-1.0, 1.0);
    v25 = vHeight->z;
    v33 = (v27 * vHeight->x) + v32;
    v31 = (vHeight->y * v27) + v30;
    v35 = vBaseLoc->x + v33;
    v34 = vBaseLoc->y + v31;
    if ( this->m_BotList.m_Size <= 0 )
    {
      fTotalDist = 0.0;
    }
    else
    {
      v8 = 0;
      v9 = 0;
      fTotalDist = 0.0;
      do
      {
        v10 = this->m_BotList.m_Memory.m_pMemory[v8];
        if ( pExcludeBot != v10 )
        {
          m_Index = v10->m_hUnit.m_Index;
          if ( m_Index + 2 <= 1
            || (v12 = v10->m_hUnit.m_Index,
                (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v12 >> 9) & 0x3F]) == 0)
            || (v14 = &v13[v12 & 0x1FF]) == 0
            || m_Index != v14->m_EHandle.m_Index
            || (m_pInstance = v14->m_pInstance, v14->m_pInstance == 0)
            || !m_pInstance->m_bIsDOTANPC )
          {
            m_pInstance = 0;
          }
          AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
          v17.m128_f32[0] = fsqrt(
                              ((v35 - AbsOrigin->x) * (v35 - AbsOrigin->x))
                            + ((v34 - AbsOrigin->y) * (v34 - AbsOrigin->y)));
          if ( v17.m128_f32[0] < 0.0 )
          {
            v19 = 0.0;
          }
          else
          {
            v18 = _mm_cmpge_ss(0x44480000u, v17);
            LODWORD(v19) = _mm_andnot_ps(v18, 0x44480000u).m128_u32[0] | v17.m128_i32[0] & v18.m128_i32[0];
          }
          fTotalDist = v19 + fTotalDist;
        }
        ++v9;
        ++v8;
      }
      while ( v9 < this->m_BotList.m_Size );
    }
    if ( fTotalDist > fBestTotalDist )
    {
      fBestTotalDist = fTotalDist;
      *&v37.x = __PAIR64__(LODWORD(v31), LODWORD(v33));
      v37.z = (v27 * v25) + (v28 * z);
    }
    --v24;
  }
  while ( v24 != 0 );
  result.z = v37.z;
  *&result.x = *&v37.x;
  return result;
}


// CDOTA_TeamCommander::CLaningSpeech::CLaningSpeech  (line 6225, @0x0000000002838790, libserver.so)  // inlines: CEntityHandle, CHandle, OpponentInfo_t, memset
// callers: CDOTA_TeamCommander::CDOTA_TeamCommander
void __fastcall CDOTA_TeamCommander::CLaningSpeech::CLaningSpeech(CDOTA_TeamCommander::CLaningSpeech *const this)
{
  CDOTA_TeamCommander::CLaningSpeech *v1; // rax

  v1 = this;
  do
  {
    v1->m_Opponents[0].hero.m_Index = -1;
    v1 = (v1 + 28);
  }
  while ( v1 != this->m_fLaneMissingCalled );
  this->m_bDisabled = 0;
  *this->m_fLaneMissingCalled = 0;
  *&v1->m_Opponents[0].m_fLastSeen = 0;
}


// CDOTA_TeamCommander::CLaningSpeech::Think  (line 6230, @0x0000000002838b20, libserver.so)  // inlines: CanBeSeenByTeam, DOTAGameRules, DistToSqr, Get, GetBotByIndex, GetEntityIdentity, GetEntryIndex, GetFloat, GetGameFrameTime, GetGameTime, GetHero, GetInstance, GetLaneFrontAmount, GetLaneFrontLocation, GetLaneMissingThreshold, GetLaneMissingTime, GetOpposingTeamNumber, GetTeamNumber, GetUnit, IndexToIdentity, IsEnemyNearALane, IsValid, Length2DSqr, LengthSqr, LookupEntity, SetLaneMissingTime, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[]
// calls: CDOTA_TeamCommander::AreAnyHumansOnTeam, CDOTA_TeamCommander::GetTeamOffensivePower, CDOTA_TeamCommander::GetOpposingTeamOffensivePower, CDOTA_TeamCommander::CalculateLocationAlongLane, CDOTA_TeamCommander::CLaningSpeech::FindOpponentInfo, CEntityHandle::operator CEntityInstance*, CDOTA_TeamCommander::CLaningSpeech::SpeakMissing, CBaseModelEntity::CanBeSeenByTeam
// callers: CDOTA_TeamCommander::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_TeamCommander::CLaningSpeech::Think(
        CDOTA_TeamCommander::CLaningSpeech *const this,
        CDOTA_TeamCommander *const pOuter)
{
  DOTA_LANE v4; // r15d
  Vector *v5; // r13
  __int64 v6; // rax
  DOTA_LANE v7; // esi
  vec_t v8; // xmm1_4
  int m_Size; // eax
  CDOTA_BaseNPC *v10; // r15
  CDOTA_TeamCommander *v11; // r12
  CHandle<CDOTA_BaseNPC_Hero> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t *OpponentInfo; // rbx
  float v19; // xmm0_4
  float v20; // xmm1_4
  __int64 v21; // r14
  int v22; // r13d
  const CEntityHandle *v23; // rdi
  CEntityInstance *v24; // rax
  float *v25; // rax
  float v26; // xmm0_4
  float v27; // xmm0_4
  __int64 v28; // rax
  float v29; // xmm2_4
  DOTA_LANE v30; // ecx
  float v31; // xmm4_4
  int v32; // edx
  float v33; // xmm3_4
  vec_t v34; // xmm0_4
  Vector *v35; // rax
  float v36; // xmm1_4
  char v37; // al
  float v38; // xmm0_4
  float v39; // xmm1_4
  int v40; // xmm0_4
  float v41; // xmm4_4
  float m_fSecondsSeen; // xmm0_4
  float m_fValue; // xmm1_4
  float v44; // xmm4_4
  float frametime; // xmm2_4
  CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t *v46; // rdi
  char v47; // al
  float v48; // xmm1_4
  float v49; // xmm1_4
  CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t *pMissingHero; // [rsp+8h] [rbp-88h]
  CDOTA_TeamCommander::CLaningSpeech *thisa; // [rsp+10h] [rbp-80h]
  float pBotUnitb; // [rsp+18h] [rbp-78h]
  CDOTA_BaseNPC *pBotUnit; // [rsp+18h] [rbp-78h]
  CDOTA_BaseNPC *pBotUnita; // [rsp+18h] [rbp-78h]
  unsigned __int64 v55; // [rsp+20h] [rbp-70h]
  Vector vLaneFronts[4]; // [rsp+30h] [rbp-60h] BYREF

  if ( !this->m_bDisabled
    && g_pGameRules != 0
    && g_pGameRules[19].m_szQuestName[29] == 0
    && pOuter->m_BotList.m_Size > 0
    && dota_speech_missinglane_call_threshold.m_pParent->m_Value.m_fValue > 0.0
    && *&g_pGameRules[6].m_szQuestName[28] == 5 )
  {
    if ( !CDOTA_TeamCommander::AreAnyHumansOnTeam(pOuter)
      || (pBotUnitb = CDOTA_TeamCommander::GetTeamOffensivePower(pOuter, 1),
          (CDOTA_TeamCommander::GetOpposingTeamOffensivePower(pOuter, 1) + pBotUnitb) >= 8000.0) )
    {
      this->m_bDisabled = 1;
      return;
    }
    v4 = DOTA_LANE::DOTA_LANE_NONE;
    v5 = vLaneFronts;
    do
    {
      v6 = v4;
      v7 = v4++;
      ++v5;
      v55 = CDOTA_TeamCommander::CalculateLocationAlongLane(
              pOuter,
              v7,
              pOuter->m_LaneFrontTowersAmounts[pOuter->m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST][v6],
              0.0,
              0.0,
              0).m128i_u64[0];
      v5[-1].z = v8;
      *&v5[-1].x = v55;
    }
    while ( v4 != DOTA_LANE::DOTA_LANE_MAX );
    m_Size = g_HeroList.m_hHeroList.m_Size;
    if ( m_Size > 0 )
    {
      thisa = this;
      v10 = 0;
      v11 = pOuter;
      pMissingHero = 0;
      pBotUnit = (4LL * (m_Size - 1) + 4);
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = (g_HeroList.m_hHeroList.m_Memory.m_pMemory + v10);
          m_Index = v12->m_Index;
          if ( v12->m_Index + 2 <= 1 )
            goto LABEL_15;
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 == 0 )
            goto LABEL_15;
          v16 = &v15[v14 & 0x1FF];
          if ( v16 == 0 )
            goto LABEL_15;
          if ( m_Index != v16->m_EHandle.m_Index )
            goto LABEL_15;
          m_pInstance = v16->m_pInstance;
          if ( v16->m_pInstance == 0
            || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
            || (v11->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST) + 2 != HIBYTE(m_pInstance[7].m_CScriptComponent)
            || LOBYTE(m_pInstance[71].m_pEntity) != 0 )
          {
            goto LABEL_15;
          }
          OpponentInfo = CDOTA_TeamCommander::CLaningSpeech::FindOpponentInfo(thisa, m_pInstance, 1);
          if ( OpponentInfo == 0 )
            return;
          if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
            break;
          v19 = 0.0;
          if ( g_pGameRules != 0 )
            v19 = *&g_pGameRules[18].m_szQuestName[20];
          v10 = (v10 + 4);
          OpponentInfo->m_fLastSeen = v19;
          if ( v10 == pBotUnit )
          {
LABEL_29:
            if ( pMissingHero != 0 )
            {
              v20 = 0.0;
              if ( g_pGameRules != 0 )
                v20 = *&g_pGameRules[18].m_szQuestName[20];
              if ( (v20 - dota_speech_missinglane_call_interval.m_pParent->m_Value.m_fValue) > thisa->m_fLaneMissingCalled[pMissingHero->m_nLastSeenLane]
                && v11->m_BotList.m_Size > 0 )
              {
                v21 = 0;
                v22 = 0;
                do
                {
                  v23 = v11->m_BotList.m_Memory.m_pMemory[v21];
                  if ( v23 != 0 )
                  {
                    v24 = CEntityHandle::operator CEntityInstance *(v23 + 39);
                    if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
                    {
                      pBotUnita = v24;
                      if ( (*(v24->_vptr_IHandleEntity + 408))(v24) != 0 )
                      {
                        v25 = (*(pBotUnita->_vptr_INextBotEventResponder + 73))(&pBotUnita->INextBot);
                        if ( ((((*v25 - pMissingHero->m_vLastSeenLocation.x)
                              * (*v25 - pMissingHero->m_vLastSeenLocation.x))
                             + ((v25[1] - pMissingHero->m_vLastSeenLocation.y)
                              * (v25[1] - pMissingHero->m_vLastSeenLocation.y)))
                            + ((v25[2] - pMissingHero->m_vLastSeenLocation.z)
                             * (v25[2] - pMissingHero->m_vLastSeenLocation.z))) < 4000000.0 )
                        {
                          v26 = 0.0;
                          if ( g_pGameRules != 0 )
                            v26 = *&g_pGameRules[18].m_szQuestName[20];
                          thisa->m_fLaneMissingCalled[pMissingHero->m_nLastSeenLane] = v26;
                          if ( CDOTA_TeamCommander::CLaningSpeech::SpeakMissing(thisa, pBotUnita, pMissingHero) )
                            break;
                        }
                      }
                    }
                  }
                  ++v22;
                  ++v21;
                }
                while ( v22 < v11->m_BotList.m_Size );
              }
            }
            return;
          }
        }
        if ( !CBaseModelEntity::CanBeSeenByTeam(m_pInstance, v11->m_eTeam) )
        {
          v41 = 0.0;
          if ( g_pGameRules != 0 )
            v41 = *&g_pGameRules[18].m_szQuestName[20];
          m_fSecondsSeen = OpponentInfo->m_fSecondsSeen;
          m_fValue = dota_speech_missinglane_call_threshold.m_pParent->m_Value.m_fValue;
          if ( m_fSecondsSeen >= (0.5 * m_fValue) )
          {
            v44 = v41 - OpponentInfo->m_fLastSeen;
            if ( v44 >= m_fValue )
            {
              frametime = 0.0;
              if ( g_pGameRules != 0 && g_pGameRules[19].m_szQuestName[29] == 0 )
                frametime = gpGlobals->frametime;
              v46 = pMissingHero;
              if ( m_fValue > (v44 - frametime) )
                v46 = OpponentInfo;
              pMissingHero = v46;
            }
          }
          if ( g_pGameRules != 0 )
          {
            v47 = g_pGameRules[19].m_szQuestName[29];
            if ( v47 != 0 )
            {
              v48 = 60.0;
              if ( m_fSecondsSeen <= 60.0 )
              {
                v49 = 0.0;
                goto LABEL_76;
              }
LABEL_80:
              OpponentInfo->m_fSecondsSeen = v48;
              goto LABEL_15;
            }
            v48 = 60.0;
            if ( (m_fSecondsSeen - gpGlobals->frametime) > 60.0 )
              goto LABEL_80;
            v49 = gpGlobals->frametime;
LABEL_76:
            if ( (m_fSecondsSeen - v49) < 0.0 )
            {
              v48 = 0.0;
              goto LABEL_80;
            }
            v48 = 0.0;
            if ( v47 == 0 )
              v48 = gpGlobals->frametime;
          }
          else
          {
            v48 = 60.0;
            if ( m_fSecondsSeen > 60.0 )
              goto LABEL_80;
            v48 = 0.0;
            if ( m_fSecondsSeen < 0.0 )
              goto LABEL_80;
          }
          v48 = m_fSecondsSeen - v48;
          goto LABEL_80;
        }
        v27 = 0.0;
        if ( g_pGameRules != 0 )
          v27 = *&g_pGameRules[18].m_szQuestName[20];
        OpponentInfo->m_fLastSeen = v27;
        v28 = (*(m_pInstance[39].m_hPrivateScope.m_hScope + 73))(&m_pInstance[39].m_hPrivateScope);
        v29 = 2250000.0;
        v30 = DOTA_LANE::DOTA_LANE_NONE;
        v31 = *v28;
        v32 = 1;
        OpponentInfo->m_vLastSeenLocation.x = *v28;
        v33 = *(v28 + 4);
        OpponentInfo->m_vLastSeenLocation.y = v33;
        v34 = *(v28 + 8);
        v35 = vLaneFronts;
        OpponentInfo->m_vLastSeenLocation.z = v34;
        do
        {
          if ( v29 > (((v31 - v35[1].x) * (v31 - v35[1].x)) + ((v33 - v35[1].y) * (v33 - v35[1].y))) )
          {
            v30 = v32;
            v29 = ((v31 - v35[1].x) * (v31 - v35[1].x)) + ((v33 - v35[1].y) * (v33 - v35[1].y));
          }
          ++v32;
          ++v35;
        }
        while ( v32 != 4 );
        if ( v30 == DOTA_LANE::DOTA_LANE_NONE )
          goto LABEL_15;
        v36 = OpponentInfo->m_fSecondsSeen;
        if ( g_pGameRules != 0 )
        {
          v37 = g_pGameRules[19].m_szQuestName[29];
          if ( v37 != 0 )
          {
            if ( (v36 + 0.0) > 60.0 )
              goto LABEL_91;
            v38 = 0.0;
          }
          else
          {
            v40 = 1114636288;
            if ( (gpGlobals->frametime + v36) > 60.0 )
              goto LABEL_61;
            v38 = gpGlobals->frametime;
          }
          if ( (v38 + v36) < 0.0 )
          {
            v40 = 0;
            goto LABEL_61;
          }
          if ( v37 != 0 )
            v39 = v36 + 0.0;
          else
            v39 = v36 + gpGlobals->frametime;
        }
        else
        {
          v39 = v36 + 0.0;
          if ( v39 > 60.0 )
          {
LABEL_91:
            v40 = 1114636288;
            goto LABEL_61;
          }
          v40 = 0;
          if ( v39 < 0.0 )
            goto LABEL_61;
        }
        v40 = LODWORD(v39);
LABEL_61:
        LODWORD(OpponentInfo->m_fSecondsSeen) = v40;
        OpponentInfo->m_nLastSeenLane = v30;
LABEL_15:
        v10 = (v10 + 4);
        if ( v10 == pBotUnit )
          goto LABEL_29;
      }
    }
  }
}


// CDOTA_TeamCommander::CLaningSpeech::FindOpponentInfo  (line 6344, @0x0000000002838870, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CDOTA_BaseNPC_Hero*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t::Initialize
// callers: CDOTA_TeamCommander::CLaningSpeech::Think
// globals: CEntityHandle::gm_pEntityList
CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t *__fastcall CDOTA_TeamCommander::CLaningSpeech::FindOpponentInfo(
        CDOTA_TeamCommander::CLaningSpeech *const this,
        CDOTA_BaseNPC_Hero *pOpponent,
        bool bCreateIfMissing)
{
  CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t *result; // rax
  int v4; // ecx
  CDOTA_BaseNPC_Hero *m_pInstance; // r10
  CEntityIdentity *v6; // r9
  CEntityIdentity *v7; // r9
  uint32 m_Index; // ecx
  CDOTA_TeamCommander::CLaningSpeech *v9; // r12
  int v10; // r8d
  CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t *i; // rdx
  unsigned __int16 v12; // r10
  int v13; // eax
  CEntityIdentity *v14; // r9
  CEntityIdentity *v15; // r9

  result = this;
  v4 = 24;
  while ( 1 )
  {
    m_pInstance = 0;
    if ( result->hero.m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(result->hero.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[result->hero.m_Index & 0x1FF];
        if ( v7 != 0 && result->hero.m_Index == v7->m_EHandle.m_Index )
          m_pInstance = v7->m_pInstance;
      }
    }
    if ( pOpponent == m_pInstance )
      break;
    ++result;
    if ( --v4 == 0 )
    {
      if ( !bCreateIfMissing )
        return 0;
      m_Index = this->m_Opponents[0].hero.m_Index;
      v9 = this;
      v10 = 24;
      for ( i = &this->m_Opponents[1]; m_Index + 2 > 1; ++i )
      {
        if ( m_Index == -1 )
        {
          v13 = 63;
          v12 = 0x7FFF;
        }
        else
        {
          v12 = v9->m_Opponents[0].hero.m_Index & 0x7FFF;
          v13 = v12 >> 9;
        }
        v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v13];
        if ( v14 == 0 )
          break;
        v15 = &v14[v12 & 0x1FF];
        if ( v15 == 0 || m_Index != v15->m_EHandle.m_Index || v15->m_pInstance == 0 )
          break;
        if ( --v10 == 0 )
          return 0;
        m_Index = i->hero.m_Index;
        v9 = i;
      }
      CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t::Initialize(v9->m_Opponents, pOpponent);
      return v9->m_Opponents;
    }
  }
  return result;
}


// CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t::Initialize  (line 6372, @0x00000000028387d0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, Zero, operator=
// callers: CDOTA_TeamCommander::CLaningSpeech::FindOpponentInfo
void __fastcall CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t::Initialize(
        CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t *const this,
        CDOTA_BaseNPC_Hero *pHero)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  if ( pHero != 0 && (m_pEntity = pHero->m_pEntity) != 0 )
  {
    v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v4 = 0x7FFF;
    else
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->hero.m_Index) = v4 | this->hero.m_Index & 0x8000;
    this->hero.m_Index = (v3 << 15) | this->hero.m_Index & 0x7FFF;
  }
  else
  {
    this->hero.m_Index = -1;
  }
  this->m_fSecondsSeen = 0.0;
  this->m_fLastSeen = 0.0;
  this->m_nLastSeenLane = DOTA_LANE::DOTA_LANE_NONE;
  this->m_vLastSeenLocation.z = 0.0;
  this->m_vLastSeenLocation.y = 0.0;
  this->m_vLastSeenLocation.x = 0.0;
}


// CDOTA_TeamCommander::CLaningSpeech::SpeakMissing  (line 6382, @0x00000000028389d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, SpeakConcept, String, ToCStr, operator CDOTA_BaseNPC_Hero*, operator CEntityInstance*
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, GetLaneNameFromNumber, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CDOTA_TeamCommander::CLaningSpeech::Think
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_TeamCommander::CLaningSpeech::SpeakMissing(
        CDOTA_TeamCommander::CLaningSpeech *const this,
        CDOTA_BaseNPC *pSpeaker,
        const CDOTA_TeamCommander::CLaningSpeech::OpponentInfo_t *const missing)
{
  uint32 m_Index; // edx
  CEntityIdentity *v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  CEntityIdentity *v9; // rcx
  bool result; // al
  CEntityInstance *m_pInstance; // r14
  const char *m_pAsString; // rdx
  const char *LaneNameFromNumber; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  bool v15; // al
  bool v16; // [rsp+1Ch] [rbp-64h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-60h] BYREF

  m_Index = missing->hero.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(missing->hero.m_Index) >> 9) & 0x3F];
  if ( v6 == 0 )
    return 0;
  v7 = missing->hero.m_Index & 0x1FF;
  v8 = &v6[v7] == 0;
  v9 = &v6[v7];
  result = 0;
  if ( !v8 && m_Index == v9->m_EHandle.m_Index )
  {
    m_pInstance = v9->m_pInstance;
    if ( v9->m_pInstance != 0 )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      m_pAsString = "";
      if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
        m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
      CResponseCriteriaSet::AppendCriteria(&criteria, "target", m_pAsString, 1.0);
      LaneNameFromNumber = GetLaneNameFromNumber(missing->m_nLastSeenLane);
      CResponseCriteriaSet::AppendCriteria(&criteria, "lane", LaneNameFromNumber, 1.0);
      m_pSpeech = pSpeaker->m_Speech.m_pSpeech;
      v15 = m_pSpeech != 0 && CDOTA_Speech::SpeakConcept(m_pSpeech, 29, &criteria, 2, 0, 0, 0, 0);
      v16 = v15;
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      return v16;
    }
  }
  return result;
}


// CDOTA_TeamCommander::BuildDebugString  (line 6399, @0x0000000002840610, libserver.so)  // inlines: Element, Get, GetAction, GetBotByIndex, GetInstance, GetSpecificMode, GetUnit, GetUnitName, String, ToCStr, ToDOTABaseNPC, Top, V_strnistr_fast<int>, operator CBaseEntity*, operator[]
// calls: CUtlString::operator+=, CDOTA_TeamCommander::GetTeamOffensivePower, CFmtStrN<256, false>::CFmtStrN, CEntityHandle::operator CEntityInstance*, _V_strnistr_fast, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::FindClosestLane, CDOTA_Bot::GetTankRating, CBaseEntity::GetHealth, CDOTA_Bot::GetAssignedLane, GetLaneName, CDOTA_Bot::GetAverageBlockValue (25 total)
// callers: dota_bot_dump_state
// strings: "DIRE\n", "RADIANT\n", "Offensive Power: %2.0f/%2.0f, Late Game: %c\n", "Push Lane Desire: %2.2f/%2.2f/%2.2f, %2.2f/%2.2f/%2.2f, %2.2f/%2.2f/%2.2f\n", "Defend Lane Desire: %2.2f/%2.2f/%2.2f, %2.2f/%2.2f/%2.2f, %2.2f/%2.2f/%2.2f\n", "Level %d - %s - %d - Health: %d/%d, Mana: %d/%d\n" (12 total)
void __fastcall CDOTA_TeamCommander::BuildDebugString(
        CDOTA_TeamCommander *const this,
        CUtlString *const debugString,
        const char *pszUnitNameFilter)
{
  const char *v5; // rsi
  int v6; // ebx
  float TeamOffensivePower; // xmm0_4
  ILocalize *v8; // rbx
  __int64 (__fastcall *v9)(ILocalize *, const char *); // r13
  CEntityInstance *v10; // rax
  const char *m_pAsString; // rsi
  __int64 v12; // rax
  CDOTA_Bot *v13; // rbx
  CEntityInstance *v14; // rax
  const CBaseEntity *v15; // rdi
  const Vector *AbsOrigin; // rax
  CEntityInstance *v17; // rax
  CEntityInstance *v18; // rdi
  CEntityInstance *v19; // rax
  const CBaseEntity *v20; // rdi
  const char *v21; // r12
  CEntityInstance *v22; // rax
  const char *v23; // r12
  DOTA_LANE AssignedLane; // eax
  const char *LaneName; // r13
  const char *v26; // rax
  float OffensivePower; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  int TowerAvoidanceCost; // eax
  float StunDuration; // xmm0_4
  int m_Size; // eax
  CDOTA_BotAction *v35; // rdi
  __int64 v36; // rax
  CDOTA_BotAction *v37; // rdi
  const char *v38; // r13
  int v39; // eax
  int v40; // r12d
  const char *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 j; // r12
  CDOTA_BotMode *v45; // rdi
  const char *v46; // rcx
  const char *v47; // rdx
  float v48; // xmm0_4
  int Health; // [rsp+2Ch] [rbp-5A4h]
  int m_iDifficulty; // [rsp+30h] [rbp-5A0h]
  int v51; // [rsp+34h] [rbp-59Ch]
  int v52; // [rsp+38h] [rbp-598h]
  float RawOffensivePower; // [rsp+38h] [rbp-598h]
  int CreepAvoidanceCost; // [rsp+38h] [rbp-598h]
  int v55; // [rsp+3Ch] [rbp-594h]
  float TankRating; // [rsp+3Ch] [rbp-594h]
  int PhysicalEffectAvoidanceCost; // [rsp+3Ch] [rbp-594h]
  __int64 v59; // [rsp+50h] [rbp-580h]
  float fTankRating; // [rsp+58h] [rbp-578h]
  float fTankRatinga; // [rsp+58h] [rbp-578h]
  int i; // [rsp+5Ch] [rbp-574h]
  float rhsa; // [rsp+68h] [rbp-568h]
  const char *rhs; // [rsp+68h] [rbp-568h]
  double rhsb; // [rsp+68h] [rbp-568h]
  DOTA_LANE lane; // [rsp+78h] [rbp-558h] BYREF
  float amt; // [rsp+7Ch] [rbp-554h] BYREF
  CFmtStrN<256,false> v69; // [rsp+80h] [rbp-550h] BYREF
  CFmtStrN<256,false> nameBuffer; // [rsp+190h] [rbp-440h] BYREF
  unsigned __int64 v71; // [rsp+598h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  v5 = "RADIANT\n";
  if ( this->m_eTeam != DOTATeam_t::DOTA_TEAM_FIRST )
    v5 = "DIRE\n";
  CUtlString::operator+=(debugString, v5);
  v6 = -!this->m_bLateGame;
  rhsa = CDOTA_TeamCommander::GetTeamOffensivePower(this, 1);
  TeamOffensivePower = CDOTA_TeamCommander::GetTeamOffensivePower(this, 0);
  CFmtStrN<256,false>::CFmtStrN(
    &nameBuffer,
    "Offensive Power: %2.0f/%2.0f, Late Game: %c\n",
    (v6 & 0xFFFFFFF5) + 89,
    TeamOffensivePower,
    rhsa);
  CUtlString::operator+=(debugString, nameBuffer.m_szBuf);
  CFmtStrN<256,false>::CFmtStrN(
    &nameBuffer,
    "Push Lane Desire: %2.2f/%2.2f/%2.2f, %2.2f/%2.2f/%2.2f, %2.2f/%2.2f/%2.2f\n",
    this->m_fPushLaneDesire[1],
    this->m_fPushLaneRawDesire[1],
    this->m_fPushLaneConvenienceDesire[1],
    this->m_fPushLaneDesire[2],
    this->m_fPushLaneRawDesire[2],
    this->m_fPushLaneConvenienceDesire[2],
    this->m_fPushLaneDesire[3],
    this->m_fPushLaneRawDesire[3],
    this->m_fPushLaneConvenienceDesire[3]);
  CUtlString::operator+=(debugString, nameBuffer.m_szBuf);
  CFmtStrN<256,false>::CFmtStrN(
    &nameBuffer,
    "Defend Lane Desire: %2.2f/%2.2f/%2.2f, %2.2f/%2.2f/%2.2f, %2.2f/%2.2f/%2.2f\n",
    this->m_fDefendLaneDesire[1],
    this->m_fDefendLaneUrgencyDesire[1],
    this->m_fDefendLanePowerDesire[1],
    this->m_fDefendLaneDesire[2],
    this->m_fDefendLaneUrgencyDesire[2],
    this->m_fDefendLanePowerDesire[2],
    this->m_fDefendLaneDesire[3],
    this->m_fDefendLaneUrgencyDesire[3],
    this->m_fDefendLanePowerDesire[3]);
  CUtlString::operator+=(debugString, nameBuffer.m_szBuf);
  if ( this->m_BotList.m_Size > 0 )
  {
    v59 = 0;
    i = 0;
    rhs = v69.m_szBuf;
    do
    {
      v8 = g_pVGuiLocalize;
      v9 = *(*g_pVGuiLocalize + 104LL);
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_BotList.m_Memory.m_pMemory[v59]->m_hUnit);
      if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
        v10 = 0;
      m_pAsString = "";
      if ( v10[70].m_iszPrivateVScripts.u.m_Id != 0 )
        m_pAsString = v10[70].m_iszPrivateVScripts.u.m_pAsString;
      v12 = v9(v8, m_pAsString);
      if ( v12 != 0 )
      {
        (*(*g_pVGuiLocalize + 128LL))(g_pVGuiLocalize, v12, &nameBuffer, 1024);
        if ( pszUnitNameFilter == 0 || _V_strnistr_fast(&nameBuffer, pszUnitNameFilter, 1024) != 0 )
        {
          v13 = 0;
          if ( this->m_BotList.m_Size > i )
            v13 = this->m_BotList.m_Memory.m_pMemory[v59];
          lane = DOTA_LANE::DOTA_LANE_NONE;
          amt = 0.0;
          v14 = CEntityHandle::operator CEntityInstance *(&v13->m_hUnit);
          if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
            v15 = v14;
          else
            v15 = 0;
          AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
          CDOTA_TeamCommander::FindClosestLane(this, AbsOrigin, 9999999.0, &lane, &amt);
          fTankRating = CDOTA_Bot::GetTankRating(v13);
          CFmtStrN<256,false>::CFmtStrN(&v69, "%s\n", &nameBuffer);
          CUtlString::operator+=(debugString, rhs);
          v17 = CEntityHandle::operator CEntityInstance *(&v13->m_hUnit);
          if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
          {
            v18 = v17;
            v51 = *&v17[44].m_worldGroupId.m_nHashCode;
            v52 = *&v17[44].m_iszPrivateVScripts.u.m_Id;
          }
          else
          {
            v18 = 0;
            v51 = COERCE_FLOAT(7496);
            v52 = 0.0;
          }
          v55 = (*(v18->_vptr_IHandleEntity + 156))(v18);
          v19 = CEntityHandle::operator CEntityInstance *(&v13->m_hUnit);
          if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
            v20 = v19;
          else
            v20 = 0;
          Health = CBaseEntity::GetHealth(v20);
          v21 = "Human";
          m_iDifficulty = v13->m_iDifficulty;
          if ( !v13->m_bHuman )
            v21 = "Bot";
          v22 = CEntityHandle::operator CEntityInstance *(&v13->m_hUnit);
          if ( v22 == 0 || BYTE3(v22[7]._vptr_IHandleEntity) == 0 )
            v22 = 0;
          CFmtStrN<256,false>::CFmtStrN(
            &v69,
            "Level %d - %s - %d - Health: %d/%d, Mana: %d/%d\n",
            HIDWORD(v22[44].m_hPrivateScope.m_hScope),
            v21,
            m_iDifficulty,
            Health,
            v55,
            v52,
            v51);
          v23 = rhs;
          CUtlString::operator+=(debugString, rhs);
          AssignedLane = CDOTA_Bot::GetAssignedLane(v13);
          LaneName = GetLaneName(AssignedLane);
          rhsb = amt;
          v26 = GetLaneName(lane);
          CFmtStrN<256,false>::CFmtStrN(&v69, "Current Lane: %s (%2.2f), Assigned Lane: %s\n", v26, LaneName, rhsb);
          rhs = v23;
          CUtlString::operator+=(debugString, v23);
          LODWORD(LaneName) = CDOTA_Bot::GetAverageBlockValue(v13);
          LODWORD(v23) = CDOTA_Bot::GetAverageLifestealValue(v13);
          TankRating = CDOTA_Bot::GetTankRating(v13);
          RawOffensivePower = CDOTA_Bot::GetRawOffensivePower(v13);
          OffensivePower = CDOTA_Bot::GetOffensivePower(v13);
          CFmtStrN<256,false>::CFmtStrN(
            &v69,
            "Power: %2.0f/%2.0f, Tankiness: %2.2f, Lifesteal: %d, Block: %d\n",
            v23,
            LaneName,
            OffensivePower,
            RawOffensivePower,
            TankRating);
          CUtlString::operator+=(debugString, rhs);
          LODWORD(v23) = CDOTA_Bot::GetHeroAvoidanceCost(v13, COERCE_DOUBLE(LODWORD(fTankRating)), v28);
          CreepAvoidanceCost = CDOTA_Bot::GetCreepAvoidanceCost(v13, fTankRating, v29);
          LODWORD(LaneName) = CDOTA_Bot::GetMagicalEffectAvoidanceCost(v13);
          PhysicalEffectAvoidanceCost = CDOTA_Bot::GetPhysicalEffectAvoidanceCost(v13, fTankRating, v30);
          TowerAvoidanceCost = CDOTA_Bot::GetTowerAvoidanceCost(v13, fTankRating, v31);
          CFmtStrN<256,false>::CFmtStrN(
            &v69,
            "Avoidance! Tower: %d, PhysicalEffect: %d, MagicalEffect: %d, Creep: %d, Hero: %d\n",
            TowerAvoidanceCost,
            PhysicalEffectAvoidanceCost,
            LaneName,
            CreepAvoidanceCost,
            v23);
          CUtlString::operator+=(debugString, rhs);
          LODWORD(v23) = -!CDOTA_Bot::HasMinistunOnAttack(v13);
          LODWORD(LaneName) = -!CDOTA_Bot::HasBlink(v13, 1);
          fTankRatinga = CDOTA_Bot::GetSlowDuration(v13, 1);
          StunDuration = CDOTA_Bot::GetStunDuration(v13, 1);
          CFmtStrN<256,false>::CFmtStrN(
            &v69,
            "Stun: %2.2f, Slow: %2.2f, Blink: %c, Ministun: %c\n",
            (LaneName & 0xFFFFFFF5) + 89,
            (v23 & 0xFFFFFFF5) + 89,
            StunDuration,
            fTankRatinga);
          CUtlString::operator+=(debugString, rhs);
          m_Size = v13->m_ActionStack.m_Size;
          v35 = 0;
          if ( m_Size > 0 )
            v35 = v13->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
          v36 = (*(v35->_vptr_CDOTA_BotAction + 3))(v35);
          v37 = 0;
          v38 = v36;
          v39 = v13->m_ActionStack.m_Size;
          if ( v39 > 0 )
            v37 = v13->m_ActionStack.m_Memory.m_pMemory[v39 - 1];
          v40 = (*(v37->_vptr_CDOTA_BotAction + 2))(v37);
          v41 = (*(v13->m_pActiveBotMode->_vptr_CDOTA_BotMode + 13))(v13->m_pActiveBotMode);
          CFmtStrN<256,false>::CFmtStrN(&v69, "Mode: %s, Action: %d - %s\n", v41, v40, v38);
          CUtlString::operator+=(debugString, rhs);
          if ( pszUnitNameFilter != 0 )
          {
            for ( j = 0; j != 26; ++j )
            {
              v45 = v13->m_pBotModes[j];
              v46 = "";
              if ( v45 != 0 )
                v46 = (*(v45->_vptr_CDOTA_BotMode + 14))(v45, v43, v42, "");
              v47 = pszBotModeStrings[j];
              v48 = v13->m_fModeDesires[j];
              CFmtStrN<256,false>::CFmtStrN(&v69, "%s: %1.3f %s\n", v47, v46, v48);
              CUtlString::operator+=(debugString, rhs);
            }
          }
        }
      }
      ++i;
      ++v59;
    }
    while ( i < this->m_BotList.m_Size );
  }
}


// CDOTA_TeamCommander::GetDebugInfo  (line 6453, @0x00000000028391e0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTABotDebugInfo_Bot>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgDOTABotDebugInfo_Bot_Mode>::TypeHandler>, CEntityHandle, CHandle, CopyArray, Element, Get, GetAction, GetBotByIndex, GetDefendLaneDesire, GetExecutionTime, GetFarmLaneDesire, GetInstance, GetModeDesire, GetPushLaneDesire, GetSpecificMode, GetTarget, GetTargetNPC, GetUnit, MoveArray, New, Reserve, ToDOTABaseNPC, ToDOTABaseNPCHero, Top, add_bots, add_modes, add_rune_status, assign, entindex, length, memcpy, mutable_action, operator CBaseEntity*, operator(), operator[], set_action_id, set_action_target, set_active_mode_id, set_desire, set_desire_defend_lane_bot, set_desire_defend_lane_mid, set_desire_defend_lane_top, set_desire_farm_lane_bot, set_desire_farm_lane_mid, set_desire_farm_lane_top, set_desire_farm_roshan, set_desire_push_lane_bot, set_desire_push_lane_mid, set_desire_push_lane_top, set_difficulty, set_execution_time, set_has_action, set_has_action_id, set_has_action_target, set_has_active_mode_id, set_has_desire, set_has_desire_defend_lane_bot, set_has_desire_defend_lane_mid, set_has_desire_defend_lane_top, set_has_desire_farm_lane_bot, set_has_desire_farm_lane_mid, set_has_desire_farm_lane_top, set_has_desire_farm_roshan, set_has_desire_push_lane_bot, set_has_desire_push_lane_mid, set_has_desire_push_lane_top, set_has_difficulty, set_has_execution_time, set_has_hero_id, set_has_mode_id, set_has_move_target_x, set_has_move_target_y, set_has_move_target_z, set_has_player_owner_id, set_has_power_current, set_has_power_max, set_has_target_entity, set_has_target_x, set_has_target_y, set_has_target_z, set_hero_id, set_mode_id, set_move_target_x, set_move_target_y, set_move_target_z, set_player_owner_id, set_power_current, set_power_max, set_target_entity, set_target_x, set_target_y, set_target_z
// calls: CEntityHandle::operator CEntityInstance*, operator new, CMsgDOTABotDebugInfo_Bot::CMsgDOTABotDebugInfo_Bot, CDOTA_Bot::GetOffensivePower, CDOTA_Bot::GetRawOffensivePower, CDOTA_Bot::GetExecutionTime, CBaseEntity::GetAbsOrigin, CMsgDOTABotDebugInfo_Bot_Mode::CMsgDOTABotDebugInfo_Bot_Mode, CEntityInstance::GetEntityIndex, strlen, std::string::assign(char const*,ulong), operator new [] (18 total)
// callers: CDOTAGamerules::UpdateBotDebugData
void __fastcall CDOTA_TeamCommander::GetDebugInfo(CDOTA_TeamCommander *const this, CMsgDOTABotDebugInfo *pInfo)
{
  CDOTA_Bot *v3; // r14
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r12
  CEntityInstance *v6; // r13
  int v7; // edx
  __int64 v8; // rax
  int *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edx
  int m_pEntity; // ecx
  int m_iDifficulty; // eax
  float OffensivePower; // xmm0_4
  float RawOffensivePower; // xmm0_4
  float ExecutionTime; // xmm0_4
  int v19; // r13d
  int v20; // eax
  const CBaseEntity *v21; // rax
  const CBaseEntity *v22; // r12
  float x; // xmm3_4
  float y; // xmm4_4
  float z; // xmm5_4
  int *m_fModeDesires; // r12
  int v27; // eax
  CMsgDOTABotDebugInfo_Bot_Mode *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  int v32; // edx
  int v33; // r13d
  int v34; // xmm0_4
  CEntityInstance *v35; // rax
  int v36; // edx
  CEntityInstance *v37; // rdi
  int32 m_Data; // eax
  float v39; // xmm6_4
  float v40; // xmm7_4
  float v41; // xmm8_4
  CDOTA_BotMode *v42; // r13
  __int64 v43; // rax
  int v44; // esi
  __int64 v45; // rdx
  int m_Size; // eax
  CDOTA_BotAction *v47; // rdi
  int v48; // eax
  CMsgDOTABotDebugInfo_Bot_Action *v49; // r13
  int v50; // r12d
  CDOTA_BotAction *v51; // rdi
  int v52; // eax
  __int64 v53; // rax
  std::string **v54; // r13
  const char *v55; // r12
  size_t v56; // rax
  int v57; // eax
  int v58; // eax
  CDOTA_TeamCommander *p_m_iRuneStatus; // r13
  float v60; // xmm0_4
  float v61; // xmm0_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  float v64; // xmm0_4
  int v65; // edx
  float v66; // xmm0_4
  float v67; // xmm0_4
  int v68; // ecx
  float v69; // xmm0_4
  float m_fRoshanDesire; // xmm0_4
  _DWORD *v71; // rcx
  __int64 v72; // rdx
  int vptr_CDOTA_TeamCommander; // r15d
  int v74; // eax
  int v75; // edx
  _DWORD *v76; // rax
  float v77; // xmm0_4
  float v78; // xmm1_4
  float v79; // xmm2_4
  __int64 v80; // rdx
  float v81; // xmm0_4
  CDOTA_TeamCommander *m_fExecutionTime; // rax
  int v83; // eax
  __int64 iBot; // [rsp+30h] [rbp-60h]
  CDOTA_BotMode **src; // [rsp+48h] [rbp-48h]
  void *srca; // [rsp+48h] [rbp-48h]
  CEntityHandle v89; // [rsp+50h] [rbp-40h] BYREF

  (*(*pInfo + 32LL))(pInfo);
  iBot = 0;
  if ( this->m_BotList.m_Size > 0 )
  {
    do
    {
      v3 = this->m_BotList.m_Memory.m_pMemory[iBot];
      if ( v3 != 0 )
      {
        v4 = CEntityHandle::operator CEntityInstance *(&v3->m_hUnit);
        v5 = v4;
        if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
        {
          v6 = 0;
          if ( (v4[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            v6 = v4;
          v7 = *(pInfo + 9);
          v8 = *(pInfo + 8);
          if ( v8 < v7 )
          {
            v80 = *(pInfo + 3);
            *(pInfo + 8) = v8 + 1;
            v9 = *(v80 + 8 * v8);
          }
          else
          {
            if ( v7 == *(pInfo + 10) )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(pInfo + 1, v7 + 1);
            v9 = operator new(0x60u);
            CMsgDOTABotDebugInfo_Bot::CMsgDOTABotDebugInfo_Bot(v9);
            v10 = *(pInfo + 8);
            v11 = *(pInfo + 3);
            ++*(pInfo + 9);
            *(pInfo + 8) = v10 + 1;
            *(v11 + 8 * v10) = v9;
          }
          v12 = (*(v5->_vptr_IHandleEntity + 414))(v5);
          v13 = v9[4];
          v9[6] = v12;
          v9[4] = v13 | 1;
          if ( v6 != 0 )
            m_pEntity = v6[100].m_pEntity;
          else
            m_pEntity = 0;
          v9[7] = m_pEntity;
          v9[4] = v13 | 3;
          m_iDifficulty = v3->m_iDifficulty;
          v9[4] = v13 | 7;
          v9[8] = m_iDifficulty;
          OffensivePower = CDOTA_Bot::GetOffensivePower(v3);
          v9[4] |= 8u;
          v9[9] = OffensivePower;
          RawOffensivePower = CDOTA_Bot::GetRawOffensivePower(v3);
          v9[4] |= 0x10u;
          v9[10] = RawOffensivePower;
          ExecutionTime = CDOTA_Bot::GetExecutionTime(v3);
          v19 = v9[4];
          v20 = v19;
          BYTE1(v20) = BYTE1(v19) | 2;
          *(v9 + 15) = ExecutionTime * 1000.0;
          v9[4] = v20;
          v89.m_Index = v3->m_hTarget.m_Index;
          v21 = CEntityHandle::operator CEntityInstance *(&v89);
          v22 = v21;
          if ( v21 != 0 && v21->m_bIsDOTANPC )
          {
            x = CBaseEntity::GetAbsOrigin(v21)->x;
            v9[4] |= 0x20u;
            v9[11] = x;
            y = CBaseEntity::GetAbsOrigin(v22)->y;
            v9[4] |= 0x40u;
            v9[12] = y;
            z = CBaseEntity::GetAbsOrigin(v22)->z;
            v9[4] |= 0x80u;
            v9[13] = z;
          }
          else
          {
            v77 = v3->m_vTargetLoc.x;
            v9[4] = v19 | 0x220;
            v9[11] = v77;
            v78 = v3->m_vTargetLoc.y;
            v9[4] = v19 | 0x260;
            v9[12] = v78;
            v79 = v3->m_vTargetLoc.z;
            v9[4] = v19 | 0x2E0;
            v9[13] = v79;
          }
          m_fModeDesires = v3->m_fModeDesires;
          v27 = (*(v3->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v3->m_pActiveBotMode);
          v9[4] |= 0x100u;
          v9[14] = v27;
          src = v3->m_pBotModes;
          do
          {
            v42 = *src;
            if ( *src != 0 )
            {
              v43 = v9[18];
              v44 = v9[19];
              if ( v43 >= v44 )
              {
                if ( v44 == v9[20] )
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v9 + 16), v44 + 1);
                v28 = operator new(0x30u);
                CMsgDOTABotDebugInfo_Bot_Mode::CMsgDOTABotDebugInfo_Bot_Mode(v28);
                v29 = v9[18];
                v30 = *(v9 + 8);
                ++v9[19];
                v9[18] = v29 + 1;
                *(v30 + 8 * v29) = v28;
              }
              else
              {
                v45 = *(v9 + 8);
                v9[18] = v43 + 1;
                v28 = *(v45 + 8 * v43);
              }
              v31 = (*(v42->_vptr_CDOTA_BotMode + 2))(v42);
              v32 = *(v28 + 4);
              *(v28 + 6) = v31;
              v33 = v32 | 3;
              *(v28 + 4) = v32 | 1;
              v34 = *m_fModeDesires;
              *(v28 + 4) = v32 | 3;
              *(v28 + 7) = v34;
              v35 = CEntityHandle::operator CEntityInstance *(&v3->m_hTarget);
              v36 = v33;
              v37 = v35;
              m_Data = -1;
              if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
              {
                m_Data = CEntityInstance::GetEntityIndex(v37).m_Data;
                v36 = *(v28 + 4);
              }
              *(v28 + 8) = m_Data;
              *(v28 + 4) = v36 | 4;
              v39 = v3->m_vTargetLoc.x;
              *(v28 + 4) = v36 | 0xC;
              *(v28 + 9) = v39;
              v40 = v3->m_vTargetLoc.y;
              *(v28 + 4) = v36 | 0x1C;
              *(v28 + 10) = v40;
              v41 = v3->m_vTargetLoc.z;
              *(v28 + 4) = v36 | 0x3C;
              *(v28 + 11) = v41;
            }
            ++src;
            ++m_fModeDesires;
          }
          while ( m_fModeDesires != &v3->m_iPreviousBotModeType );
          m_Size = v3->m_ActionStack.m_Size;
          v47 = 0;
          if ( m_Size > 0 )
            v47 = v3->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
          v48 = (*(v47->_vptr_CDOTA_BotAction + 2))(v47);
          v49 = *(v9 + 11);
          v9[4] |= 0x800u;
          v50 = v48;
          if ( v49 == 0 )
          {
            v49 = operator new(0x28u);
            CMsgDOTABotDebugInfo_Bot_Action::CMsgDOTABotDebugInfo_Bot_Action(v49);
            *(v9 + 11) = v49;
          }
          *(v49 + 4) |= 1u;
          *(v49 + 8) = v50;
          v51 = 0;
          v52 = v3->m_ActionStack.m_Size;
          if ( v52 > 0 )
            v51 = v3->m_ActionStack.m_Memory.m_pMemory[v52 - 1];
          v53 = (*(v51->_vptr_CDOTA_BotAction + 3))(v51);
          v54 = *(v9 + 11);
          v9[4] |= 0x800u;
          v55 = v53;
          if ( v54 == 0 )
          {
            v54 = operator new(0x28u);
            CMsgDOTABotDebugInfo_Bot_Action::CMsgDOTABotDebugInfo_Bot_Action(v54);
            *(v9 + 11) = v54;
          }
          *(v54 + 4) |= 2u;
          v56 = strlen(v55);
          std::string::assign(v54[3], v55, v56);
        }
      }
      v57 = iBot++;
    }
    while ( this->m_BotList.m_Size > v57 + 1 );
  }
  v58 = *(pInfo + 4);
  p_m_iRuneStatus = &this->m_iRuneStatus;
  *(pInfo + 12) = LODWORD(this->m_fPushLaneDesire[1]);
  *(pInfo + 4) = v58 | 2;
  v60 = this->m_fPushLaneDesire[2];
  *(pInfo + 4) = v58 | 6;
  *(pInfo + 13) = v60;
  v61 = this->m_fPushLaneDesire[3];
  *(pInfo + 4) = v58 | 0xE;
  *(pInfo + 14) = v61;
  v62 = this->m_fDefendLaneDesire[1];
  *(pInfo + 4) = v58 | 0x1E;
  *(pInfo + 15) = v62;
  v63 = this->m_fDefendLaneDesire[2];
  *(pInfo + 4) = v58 | 0x3E;
  *(pInfo + 16) = v63;
  v64 = this->m_fDefendLaneDesire[3];
  *(pInfo + 4) = v58 | 0x7E;
  v65 = v58;
  LOBYTE(v65) = v58 | 0xFE;
  *(pInfo + 17) = v64;
  v66 = this->m_fFarmLaneDesire[1];
  *(pInfo + 4) = v65;
  *(pInfo + 18) = v66;
  v67 = this->m_fFarmLaneDesire[2];
  *(pInfo + 4) = v58 | 0x1FE;
  *(pInfo + 19) = v67;
  v68 = v58 | 0x7FE;
  v69 = this->m_fFarmLaneDesire[3];
  *(pInfo + 4) = v58 | 0x3FE;
  *(pInfo + 20) = v69;
  m_fRoshanDesire = this->m_fRoshanDesire;
  *(pInfo + 4) = v58 | 0x7FE;
  *(pInfo + 21) = m_fRoshanDesire;
  if ( &this->m_iRuneStatus != &this->m_fLastSeenRuneTime )
  {
    do
    {
      v72 = *(pInfo + 24);
      vptr_CDOTA_TeamCommander = p_m_iRuneStatus->_vptr_CDOTA_TeamCommander;
      if ( v72 == *(pInfo + 25) )
      {
        srca = *(pInfo + 11);
        v74 = v72 + 1;
        v75 = 2 * v72;
        if ( v74 < v75 )
          v74 = v75;
        if ( v74 < 4 )
          v74 = 4;
        *(pInfo + 25) = v74;
        v76 = operator new[](4LL * v74);
        *(pInfo + 11) = v76;
        v72 = *(pInfo + 24);
        v71 = v76;
        if ( srca != 0 )
        {
          memcpy(v76, srca, 4 * v72);
          operator delete[](srca);
          v71 = *(pInfo + 11);
          v72 = *(pInfo + 24);
        }
      }
      else
      {
        v71 = *(pInfo + 11);
      }
      p_m_iRuneStatus = (p_m_iRuneStatus + 4);
      *(pInfo + 24) = v72 + 1;
      v71[v72] = vptr_CDOTA_TeamCommander;
    }
    while ( &this->m_fLastSeenRuneTime != p_m_iRuneStatus );
    v68 = *(pInfo + 4);
  }
  v81 = 0.0;
  m_fExecutionTime = this->m_fExecutionTime;
  if ( this->m_fExecutionTime != &this->m_iCurExecutionTime )
  {
    do
    {
      v81 = v81 + *&m_fExecutionTime->_vptr_CDOTA_TeamCommander;
      m_fExecutionTime = (m_fExecutionTime + 4);
    }
    while ( &this->m_iCurExecutionTime != m_fExecutionTime );
    v81 = (v81 / 30.0) * 1000.0;
  }
  v83 = v68;
  BYTE1(v83) = BYTE1(v68) | 8;
  *(pInfo + 4) = v83;
  *(pInfo + 26) = v81;
}


// CDOTA_TeamCommander::DrawDebugGrid  (line 6540, @0x0000000002839930, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, CrossProduct, GetFloat, GetGridCountX, GetGridCountY, GetGridHeight, GetGridSizeX, GetLocationFromGrid, HitStaticOnlyByContents, Init, IsGridPassable, LengthSqr, Ray_t, RemapValClamped, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, SetObjectSetMask, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, clamp<float, float>, operator*=, operator+, operator-, operator[]
// calls: DOTACommander, UTIL_GetListenServerHost, CBaseEntity::GetAbsOrigin, NDebugOverlay::Line, CDOTA_Commander::GetLocationFromGrid, CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay, VectorNormalize, CDOTA_TeamCommander::IsGridVisibleToEnemy, CDOTA_Commander::GetGridHeight (13 total)
// callers: CDOTA_Commander::DrawDebug
void __fastcall CDOTA_TeamCommander::DrawDebugGrid(CDOTA_TeamCommander *const this, int iDebugType)
{
  CDOTA_Commander *v3; // rax
  CBasePlayer *ListenServerHost; // rdi
  const Vector *AbsOrigin; // rax
  int v6; // r15d
  int i; // ebx
  float v8; // xmm9_4
  unsigned int v9; // r14d
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  CDOTA_Commander *v13; // rax
  vec_t v14; // xmm1_4
  vec_t y; // xmm2_4
  int v16; // r14d
  float v17; // xmm2_4
  float m_fValue; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  unsigned int v27; // eax
  unsigned int v28; // r12d
  int v29; // r12d
  unsigned int v30; // r12d
  unsigned int v31; // r12d
  unsigned int v32; // r12d
  unsigned int v33; // r12d
  CDOTA_Commander *v34; // rax
  int v35; // eax
  CDOTA_Commander *v36; // rax
  int v37; // ecx
  __int64 j; // rax
  float v39; // xmm3_4
  float v40; // xmm0_4
  bool IsGridVisibleToEnemy; // al
  CDOTA_Commander *v42; // rax
  float GridHeight; // xmm0_4
  float v44; // xmm0_4
  CDOTA_Commander *v45; // rax
  bool IsGridPassable; // al
  int v47; // [rsp+Ch] [rbp-1D4h]
  float v48; // [rsp+10h] [rbp-1D0h]
  float x; // [rsp+14h] [rbp-1CCh]
  float v50; // [rsp+18h] [rbp-1C8h]
  float v51; // [rsp+20h] [rbp-1C0h]
  vec_t v52; // [rsp+20h] [rbp-1C0h]
  float v53; // [rsp+20h] [rbp-1C0h]
  float v54; // [rsp+24h] [rbp-1BCh]
  vec_t v55; // [rsp+28h] [rbp-1B8h]
  float v56; // [rsp+28h] [rbp-1B8h]
  float v57; // [rsp+30h] [rbp-1B0h]
  unsigned int r; // [rsp+38h] [rbp-1A8h]
  float ra; // [rsp+38h] [rbp-1A8h]
  Vector vUp; // [rsp+40h] [rbp-1A0h] BYREF
  Vector vSide; // [rsp+50h] [rbp-190h] BYREF
  Vector origin; // [rsp+60h] [rbp-180h] BYREF
  Vector v64; // [rsp+70h] [rbp-170h]
  CGameQueryAttributes worldFilter; // [rsp+80h] [rbp-160h] BYREF
  Ray_t target; // [rsp+B0h] [rbp-130h] BYREF
  trace_t result; // [rsp+100h] [rbp-E0h] BYREF
  Vector LocationFromGrid; // 0:kr00_12.12

  v3 = DOTACommander();
  x = v3->m_vWorldBounds[1].x;
  v48 = v3->m_vWorldBounds[0].x;
  v47 = v3->m_iGridCount[0];
  if ( (*(*engine + 160LL))(engine) == 0 )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(ListenServerHost);
      v6 = 0;
      v57 = AbsOrigin->x + 0.0;
      v54 = AbsOrigin->y + 1000.0;
      while ( v6 < DOTACommander()->m_iGridCount[0] )
      {
        for ( i = 0; i < DOTACommander()->m_iGridCount[1]; ++i )
        {
          v13 = DOTACommander();
          LocationFromGrid = CDOTA_Commander::GetLocationFromGrid(v13, v6, i);
          v64 = LocationFromGrid;
          v14 = LocationFromGrid.x;
          y = LocationFromGrid.y;
          if ( fabs(LocationFromGrid.x - v57) < 1500.0 && fabs(LocationFromGrid.y - v54) < 1500.0 )
          {
            if ( iDebugType != 0 )
            {
              switch ( iDebugType )
              {
                case 1:
                  v16 = 0;
                  v36 = DOTACommander();
                  v14 = LocationFromGrid.x;
                  y = LocationFromGrid.y;
                  v37 = v6 / 2 * (v36->m_iGridCount[1] / 2) + i / 2;
                  for ( j = 0; j != 24; ++j )
                  {
                    v39 = 0.0;
                    v40 = (this->m_PotentialLocationGrid[this->m_iPotentialLocationBuffer[j]][j].m_Memory.m_pMemory[v37]
                         - 47.0)
                        / 208.0;
                    if ( v40 >= 0.0 )
                    {
                      v39 = 255.0;
                      if ( v40 <= 1.0 )
                        v39 = (v40 * 255.0) + 0.0;
                    }
                    v16 = (v16 + v39);
                  }
                  break;
                case 2:
                  IsGridVisibleToEnemy = CDOTA_TeamCommander::IsGridVisibleToEnemy(this, v6, i, 0.0);
                  v14 = LocationFromGrid.x;
                  y = LocationFromGrid.y;
                  v16 = -IsGridVisibleToEnemy;
                  break;
                case 3:
                  v16 = 255;
                  v42 = DOTACommander();
                  GridHeight = CDOTA_Commander::GetGridHeight(v42, v6, i);
                  v14 = LocationFromGrid.x;
                  v44 = (GridHeight + 100.0) / 500.0;
                  y = LocationFromGrid.y;
                  if ( v44 >= 0.0 )
                  {
                    LOBYTE(v16) = 1;
                    if ( v44 <= 1.0 )
                      v16 = ((v44 * -254.0) + 255.0);
                  }
                  break;
                default:
                  if ( iDebugType != 4
                    || (v45 = DOTACommander(),
                        IsGridPassable = CDOTA_Commander::IsGridPassable(v45, v6, i),
                        v14 = LocationFromGrid.x,
                        y = LocationFromGrid.y,
                        IsGridPassable) )
                  {
                    v16 = 0;
                  }
                  else
                  {
                    v16 = 255;
                  }
                  break;
              }
            }
            else
            {
              v16 = 255;
              v28 = this->m_AvoidanceGrid.m_Memory.m_pMemory[i + v6 * DOTACommander()->m_iGridCount[1]];
              v29 = ((this->m_AvoidanceGrid.m_Memory.m_pMemory[i + v6 * DOTACommander()->m_iGridCount[1]] << 22 >> 31)
                   & 0xC0)
                  + ((v28 >> 1) & 0x80);
              v30 = ((this->m_AvoidanceGrid.m_Memory.m_pMemory[i + v6 * DOTACommander()->m_iGridCount[1]] >> 5) & 0x80)
                  + v29;
              v31 = ((this->m_AvoidanceGrid.m_Memory.m_pMemory[i + v6 * DOTACommander()->m_iGridCount[1]] >> 4) & 0x80)
                  + v30;
              v32 = v31
                  + 4 * (this->m_AvoidanceGrid.m_Memory.m_pMemory[i + v6 * DOTACommander()->m_iGridCount[1]] & 0xF0);
              v33 = 32 * (this->m_AvoidanceGrid.m_Memory.m_pMemory[i + v6 * DOTACommander()->m_iGridCount[1]] & 0xF)
                  + v32;
              v34 = DOTACommander();
              v14 = LocationFromGrid.x;
              y = LocationFromGrid.y;
              v35 = v33 + (this->m_AvoidanceGrid.m_Memory.m_pMemory[i + v6 * v34->m_iGridCount[1]] << 21 >> 31);
              if ( v35 <= 255 )
                v16 = v35;
            }
            v52 = y;
            v55 = v14;
            memset(&result.m_ShapeAttributes, 0, 31);
            result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
            CGameTrace::Init(&result);
            worldFilter.m_nHierarchyId = 0;
            worldFilter.m_nInteractsExclude = 0;
            worldFilter.m_nInteractsAs = 0;
            worldFilter.m_nEntityIdToIgnore = -1;
            worldFilter.m_nCollisionGroup = 3;
            worldFilter.m_nObjectSetMask = 1;
            *(&worldFilter.RnQueryShapeAttr_t + 31) = *(&worldFilter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
            worldFilter.m_nInteractsWith = 28673;
            worldFilter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
            worldFilter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
            v17 = v52;
            v53 = v55;
            v56 = v17;
            m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
            target.m_Delta.y = v17 - v17;
            target.m_Start.x = v53;
            target.m_flRadius = m_fValue;
            target.m_Start.y = v17;
            target.m_Start.w = 0.0;
            memset(&target.m_Delta.w, 0, 36);
            target.m_Delta.x = v53 - v53;
            target.m_Delta.z = -32768.0;
            target.m_IsRay = 1;
            target.m_Start.z = 16384.0;
            target.m_IsSwept = (((target.m_Delta.x * target.m_Delta.x) + (target.m_Delta.y * target.m_Delta.y))
                              + 1073741800.0) != 0.0;
            CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &target, &worldFilter, &result);
            vSide.z = result.plane.normal.x - (0.0 * result.plane.normal.y);
            vUp.z = (0.0 * result.plane.normal.x) - result.plane.normal.y;
            vUp.x = (0.0 * result.plane.normal.y) - (0.0 * result.plane.normal.z);
            vSide.y = (0.0 * result.plane.normal.z) - (0.0 * result.plane.normal.x);
            ra = (-32768.0 * result.fraction) + 16384.0;
            vSide.x = (0.0 * result.plane.normal.y) - result.plane.normal.z;
            vUp.y = result.plane.normal.z - (0.0 * result.plane.normal.x);
            VectorNormalize(&vUp);
            VectorNormalize(&vSide);
            v19 = ra;
            v20 = (((x - v48) / v47) * 0.40000001);
            v21 = vUp.x * v20;
            v22 = vUp.y * v20;
            v23 = vUp.z * v20;
            v24 = vSide.x * v20;
            vUp.x = vUp.x * v20;
            v25 = vSide.y * v20;
            v26 = v20 * vSide.z;
            vUp.y = v22;
            vUp.z = v23;
            vSide.x = v24;
            vSide.y = v25;
            vSide.z = v26;
            if ( (iDebugType & 0xFFFFFFFD) == 1 )
            {
              if ( v16 != 0 )
              {
                v8 = v16 / 255.0;
                if ( v8 < 0.0 )
                {
                  r = 0;
                  v9 = 255;
                }
                else
                {
                  r = 255;
                  if ( v8 <= 1.0 )
                    r = ((255.0 * v8) + 0.0);
                  if ( v8 < 0.0 )
                  {
                    v9 = 255;
                  }
                  else
                  {
                    v9 = 0;
                    if ( v8 <= 1.0 )
                      v9 = ((v8 * -255.0) + 255.0);
                  }
                }
              }
              else
              {
                r = 0;
                v9 = 0;
              }
            }
            else
            {
              v27 = v16;
              v9 = 0;
              r = v27;
            }
            v10 = v21 + v53;
            v11 = v22 + v56;
            v12 = v23 + v19;
            v50 = v53;
            v51 = v19;
            target.m_Start.x = v10 - v24;
            origin.x = v24 + v10;
            target.m_Start.y = v11 - v25;
            origin.y = v25 + v11;
            target.m_Start.z = v12 - v26;
            origin.z = v26 + v12;
            NDebugOverlay::Line(&origin, &target.m_Start, r, v9, 0, 1, 0.01023);
            target.m_Start.x = (v50 - vUp.x) - vSide.x;
            origin.x = (vUp.x + v50) - vSide.x;
            target.m_Start.y = (v56 - vUp.y) - vSide.y;
            origin.y = (vUp.y + v56) - vSide.y;
            target.m_Start.z = (v51 - vUp.z) - vSide.z;
            origin.z = (vUp.z + v51) - vSide.z;
            NDebugOverlay::Line(&origin, &target.m_Start, r, v9, 0, 1, 0.01023);
            origin.x = (v50 - vUp.x) - vSide.x;
            target.m_Start.x = (v50 - vUp.x) + vSide.x;
            target.m_Start.y = (v56 - vUp.y) + vSide.y;
            origin.y = (v56 - vUp.y) - vSide.y;
            origin.z = (v51 - vUp.z) - vSide.z;
            target.m_Start.z = (v51 - vUp.z) + vSide.z;
            NDebugOverlay::Line(&origin, &target.m_Start, r, v9, 0, 1, 0.01023);
            target.m_Start.x = (v50 + vUp.x) + vSide.x;
            origin.x = (v50 - vUp.x) + vSide.x;
            target.m_Start.y = (vUp.y + v56) + vSide.y;
            origin.y = (v56 - vUp.y) + vSide.y;
            origin.z = (v51 - vUp.z) + vSide.z;
            target.m_Start.z = (v51 + vUp.z) + vSide.z;
            NDebugOverlay::Line(&origin, &target.m_Start, r, v9, 0, 1, 0.01023);
          }
        }
        ++v6;
      }
    }
  }
}


// CDOTA_TeamCommander::DrawDebugGridMinimap  (line 6650, @0x000000000283a620, libserver.so)  // inlines: DOTAGameRules, GetGridCountX, GetGridCountY, GetGridHeight, IsGridPassable, NetworkStateChanged, RemapValClamped, Set, SetMinimapDebugGridState, clamp<float, float>, operator=<int>, operator[]
// calls: DOTACommander, CDOTAGamerules::SetMinimapDebugGridData, CDOTAGamerules::NetworkStateChanged, CDOTA_TeamCommander::IsGridVisibleToEnemy, CDOTA_Commander::GetGridHeight, CDOTA_Commander::IsGridPassable, __stack_chk_fail
// callers: CDOTA_Commander::DrawDebug
void __fastcall CDOTA_TeamCommander::DrawDebugGridMinimap(CDOTA_TeamCommander *const this, int iDebugType)
{
  float v2; // xmm2_4
  __int64 v5; // rbx
  CDOTA_Commander *v6; // rax
  float v7; // xmm0_4
  int v8; // r12d
  CDOTA_Commander *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12; // r13d
  CDOTA_Commander *v13; // rax
  int v14; // edx
  int v15; // esi
  uint8 v16; // al
  int v17; // ebx
  CGameRules *v18; // r12
  CDOTA_Commander *v19; // rax
  int v20; // esi
  int v21; // r13d
  __int64 j; // rax
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  int v26; // eax
  char IsGridVisibleToEnemy; // al
  CDOTA_Commander *v28; // rax
  float GridHeight; // xmm0_4
  int v30; // eax
  float v31; // xmm0_4
  CDOTA_Commander *v32; // rax
  bool IsGridPassable; // al
  int i; // [rsp-8h] [rbp-405Ch]
  float v35; // [rsp-4h] [rbp-4058h]
  int x; // [rsp+0h] [rbp-4054h]
  float v37; // [rsp+4h] [rbp-4050h]
  float v38; // [rsp+8h] [rbp-404Ch]
  unsigned int v39; // [rsp+8h] [rbp-404Ch]
  unsigned int v40; // [rsp+8h] [rbp-404Ch]
  unsigned int v41; // [rsp+8h] [rbp-404Ch]
  unsigned int v42; // [rsp+8h] [rbp-404Ch]
  unsigned int v43; // [rsp+8h] [rbp-404Ch]
  unsigned int v44; // [rsp+8h] [rbp-404Ch]
  uint8 v45[8]; // [rsp+Ch] [rbp-4048h] BYREF
  unsigned __int64 v46; // [rsp+4014h] [rbp-40h]

  v2 = 0.0;
  x = 0;
  v46 = __readfsqword(0x28u);
  for ( i = 0; i != 128; ++i )
  {
    v5 = 0;
    v37 = i;
    do
    {
      while ( 1 )
      {
        v38 = v2;
        v6 = DOTACommander();
        v7 = v38;
        if ( v38 <= (0.0078125 * v37) )
          v7 = fminf(1.0, 0.0078125 * v37);
        v8 = ((v7 * (v6->m_iGridCount[0] - 1)) + v38);
        v9 = DOTACommander();
        v2 = v38;
        v10 = v38;
        v11 = v5 * 0.0078125;
        if ( v38 <= v11 )
          v10 = fminf(1.0, v11);
        v12 = ((v10 * (v9->m_iGridCount[1] - 1)) + v38);
        if ( iDebugType != 0 )
          break;
        v35 = v38;
        v39 = (this->m_AvoidanceGrid.m_Memory.m_pMemory[v12 + v8 * DOTACommander()->m_iGridCount[1]] >> 1) & 0x80;
        v40 = v39
            + ((this->m_AvoidanceGrid.m_Memory.m_pMemory[v12 + v8 * DOTACommander()->m_iGridCount[1]] << 22 >> 31) & 0xC0);
        v41 = v40
            + ((this->m_AvoidanceGrid.m_Memory.m_pMemory[v12 + v8 * DOTACommander()->m_iGridCount[1]] >> 5) & 0x80);
        v42 = v41
            + ((this->m_AvoidanceGrid.m_Memory.m_pMemory[v12 + v8 * DOTACommander()->m_iGridCount[1]] >> 4) & 0x80);
        v43 = v42 + 4 * (this->m_AvoidanceGrid.m_Memory.m_pMemory[v12 + v8 * DOTACommander()->m_iGridCount[1]] & 0xF0);
        v44 = v43 + 32 * (this->m_AvoidanceGrid.m_Memory.m_pMemory[v12 + v8 * DOTACommander()->m_iGridCount[1]] & 0xF);
        v13 = DOTACommander();
        v2 = v35;
        v14 = (this->m_AvoidanceGrid.m_Memory.m_pMemory[v13->m_iGridCount[1] * v8 + v12] << 21 >> 31) + v44;
        v15 = x + v5;
        v16 = -1;
        if ( v14 <= 255 )
          v16 = v14;
        ++v5;
        v45[v15] = v16;
        if ( v5 == 128 )
          goto LABEL_17;
      }
      switch ( iDebugType )
      {
        case 1:
          v19 = DOTACommander();
          v2 = v38;
          v20 = 0;
          v21 = v8 / 2 * (v19->m_iGridCount[1] / 2) + v12 / 2;
          for ( j = 0; j != 24; ++j )
          {
            v23 = v38;
            v24 = (this->m_PotentialLocationGrid[this->m_iPotentialLocationBuffer[j]][j].m_Memory.m_pMemory[v21] - 47.0)
                / 208.0;
            if ( v38 <= v24 )
            {
              v23 = 255.0;
              if ( v24 <= 1.0 )
                v23 = (255.0 * v24) + v38;
            }
            v20 = (v20 + v23);
          }
          v25 = v20 / 255.0;
          LOBYTE(v26) = 0;
          if ( v38 <= v25 )
          {
            LOBYTE(v26) = -1;
            if ( v25 <= 1.0 )
              v26 = ((v25 * 255.0) + v38);
          }
          v45[x + v5] = v26;
          break;
        case 2:
          IsGridVisibleToEnemy = CDOTA_TeamCommander::IsGridVisibleToEnemy(this, v8, v12, v38);
          v2 = v38;
          v45[x + v5] = -IsGridVisibleToEnemy;
          break;
        case 3:
          v28 = DOTACommander();
          GridHeight = CDOTA_Commander::GetGridHeight(v28, v8, v12);
          v2 = v38;
          LOBYTE(v30) = -1;
          v31 = (GridHeight + 100.0) / 500.0;
          if ( v38 <= v31 )
          {
            LOBYTE(v30) = 1;
            if ( v31 <= 1.0 )
              v30 = ((v31 * -254.0) + 255.0);
          }
          v45[v5 + x] = v30;
          break;
        case 4:
          v32 = DOTACommander();
          IsGridPassable = CDOTA_Commander::IsGridPassable(v32, v8, v12);
          v2 = v38;
          v45[x + v5] = -!IsGridPassable;
          break;
        default:
          break;
      }
      ++v5;
    }
    while ( v5 != 128 );
LABEL_17:
    x += 128;
  }
  v17 = 1;
  if ( iDebugType <= 3 )
    v17 = 2 - (((1LL << iDebugType) & 0xB) == 0);
  CDOTAGamerules::SetMinimapDebugGridData(g_pGameRules, v45);
  v18 = g_pGameRules;
  if ( v17 != *&g_pGameRules[18].m_szQuestName[48] )
  {
    CDOTAGamerules::NetworkStateChanged(g_pGameRules, 0xA58u, -1);
    *&v18[18].m_szQuestName[48] = v17;
  }
}


// CDOTA_TeamCommander::FlavorTextThink  (line 6722, @0x0000000002866990, libserver.so)
// calls: CDOTA_TeamCommander::GoodLuckFlavorTextThink, CDOTA_TeamCommander::TeamfightFlavorTextThink, CDOTA_TeamCommander::CongratulateFlavorTextThink
// callers: CDOTA_TeamCommander::Think
void __fastcall CDOTA_TeamCommander::FlavorTextThink(CDOTA_TeamCommander *const this)
{
  CDOTA_TeamCommander::GoodLuckFlavorTextThink(this);
  CDOTA_TeamCommander::TeamfightFlavorTextThink(this);
  CDOTA_TeamCommander::CongratulateFlavorTextThink(this);
}


// CDOTA_TeamCommander::GoodLuckFlavorTextThink  (line 6731, @0x00000000028666a0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_TeamCommander::CommanderChatMessageRequest, RandomFloat
// callers: CDOTA_TeamCommander::FlavorTextThink
// strings: "dota_chatwheel_message_GLHF"
void __fastcall CDOTA_TeamCommander::GoodLuckFlavorTextThink(CDOTA_TeamCommander *const this)
{
  float m_fGoodLuckFlavorTextTime; // xmm0_4
  CGameRules *v3; // rax
  float v4; // xmm0_4
  float v5; // [rsp-14h] [rbp-1Ch]

  m_fGoodLuckFlavorTextTime = this->m_fGoodLuckFlavorTextTime;
  if ( m_fGoodLuckFlavorTextTime >= 0.0 )
  {
    v3 = g_pGameRules;
    if ( *&g_pGameRules[6].m_szQuestName[28] == 4 )
    {
      if ( m_fGoodLuckFlavorTextTime == 0.0 )
      {
        v5 = *&g_pGameRules[18].m_szQuestName[20];
        v4 = RandomFloat(5.0, 15.0);
        v3 = g_pGameRules;
        m_fGoodLuckFlavorTextTime = v4 + v5;
        this->m_fGoodLuckFlavorTextTime = m_fGoodLuckFlavorTextTime;
      }
      if ( *&v3[18].m_szQuestName[20] >= m_fGoodLuckFlavorTextTime )
      {
        CDOTA_TeamCommander::CommanderChatMessageRequest(this, "dota_chatwheel_message_GLHF", "", 0, 0);
        this->m_fGoodLuckFlavorTextTime = -1.0;
      }
    }
  }
}


// CDOTA_TeamCommander::TeamfightFlavorTextThink  (line 6753, @0x0000000002866760, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetOpposingTeamCommander, GetOpposingTeamNumber, GetTeamCommander
// calls: CDOTA_TeamCommander::CommanderChatMessageRequest, CDOTA_TeamCommander::CountAliveHeroes, DOTACommander, CDOTA_TeamCommander::OnTeamfightWin
// callers: CDOTA_TeamCommander::FlavorTextThink
// strings: "dota_chatwheel_message_Just_Happened"
void __fastcall CDOTA_TeamCommander::TeamfightFlavorTextThink(CDOTA_TeamCommander *const this)
{
  float m_fTeamfightFlavorTextTime; // xmm0_4
  int v3; // ecx
  int v4; // r13d
  int v5; // eax
  CDOTA_TeamCommander *v6; // rax
  CDOTA_TeamCommander *p_m_BadGuys; // rdi
  float fCurrentGameTime; // [rsp+Ch] [rbp-24h]

  if ( *&g_pGameRules[6].m_szQuestName[28] == 5 )
  {
    if ( *&g_pGameRules[18].m_szQuestName[20] >= (this->m_fLastAliveHeroHistorySnapshotTime + 2.0) )
    {
      fCurrentGameTime = *&g_pGameRules[18].m_szQuestName[20];
      v3 = (this->m_iAliveHeroHistoryIndex + 1) % 5;
      this->m_iAliveHeroHistoryIndex = v3;
      v4 = this->m_iAliveHeroHistory[v3];
      v5 = CDOTA_TeamCommander::CountAliveHeroes(this);
      this->m_iAliveHeroHistory[this->m_iAliveHeroHistoryIndex] = v5;
      this->m_fLastAliveHeroHistorySnapshotTime = fCurrentGameTime;
      if ( v5 == 0 && v4 == 5 )
      {
        v6 = this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST ? &DOTACommander()->m_BadGuys : &DOTACommander()->m_GoodGuys;
        if ( v6 != 0 )
        {
          if ( this->m_eTeam == DOTATeam_t::DOTA_TEAM_FIRST )
            p_m_BadGuys = &DOTACommander()->m_BadGuys;
          else
            p_m_BadGuys = &DOTACommander()->m_GoodGuys;
          CDOTA_TeamCommander::OnTeamfightWin(p_m_BadGuys);
        }
      }
    }
    m_fTeamfightFlavorTextTime = this->m_fTeamfightFlavorTextTime;
    if ( m_fTeamfightFlavorTextTime > 0.0 && *&g_pGameRules[18].m_szQuestName[20] >= m_fTeamfightFlavorTextTime )
    {
      CDOTA_TeamCommander::CommanderChatMessageRequest(this, "dota_chatwheel_message_Just_Happened", "", 1, 0);
      this->m_iAliveHeroHistory[0] = 0;
      this->m_iAliveHeroHistory[1] = 0;
      this->m_fTeamfightFlavorTextTime = 0.0;
      this->m_iAliveHeroHistory[2] = 0;
      this->m_iAliveHeroHistory[3] = 0;
      this->m_iAliveHeroHistory[4] = 0;
    }
  }
}


// CDOTA_TeamCommander::CongratulateFlavorTextThink  (line 6798, @0x0000000002866910, libserver.so)  // inlines: GetGameTime
// calls: CDOTA_TeamCommander::CountAliveHeroes, CDOTA_TeamCommander::CommanderChatMessageRequest
// callers: CDOTA_TeamCommander::FlavorTextThink
// strings: "dota_chatwheel_message_GoodJob"
void __fastcall CDOTA_TeamCommander::CongratulateFlavorTextThink(CDOTA_TeamCommander *const this)
{
  float m_fCongratulateHeroFlavorTextTime; // xmm0_4

  m_fCongratulateHeroFlavorTextTime = this->m_fCongratulateHeroFlavorTextTime;
  if ( m_fCongratulateHeroFlavorTextTime > 0.0
    && *&g_pGameRules[18].m_szQuestName[20] >= m_fCongratulateHeroFlavorTextTime )
  {
    if ( CDOTA_TeamCommander::CountAliveHeroes(this) == 5 )
      CDOTA_TeamCommander::CommanderChatMessageRequest(this, "dota_chatwheel_message_GoodJob", "", 1, 0);
    this->m_fCongratulateHeroFlavorTextTime = 0.0;
  }
}


// CDOTA_TeamCommander::OnTeamfightWin  (line 6817, @0x000000000283adc0, libserver.so)  // inlines: GetGameTime
// calls: CDOTA_TeamCommander::AreAnyHumansOnTeam, CDOTA_TeamCommander::CountAliveHeroes, RandomFloat
// callers: CDOTA_TeamCommander::TeamfightFlavorTextThink
void __fastcall CDOTA_TeamCommander::OnTeamfightWin(CDOTA_TeamCommander *const this)
{
  float v2; // [rsp+Ch] [rbp-14h]

  if ( CDOTA_TeamCommander::AreAnyHumansOnTeam(this) && CDOTA_TeamCommander::CountAliveHeroes(this) == 5 )
  {
    v2 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_fTeamfightFlavorTextTime = RandomFloat(1.0, 4.0) + v2;
  }
}


// CDOTA_TeamCommander::CountAliveHeroes  (line 6831, @0x000000000283abf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_TeamCommander::OnHeroKill, CDOTA_TeamCommander::OnTeamfightWin, CDOTA_TeamCommander::TeamfightFlavorTextThink, CDOTA_TeamCommander::CongratulateFlavorTextThink
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_TeamCommander::CountAliveHeroes(CDOTA_TeamCommander *const this)
{
  int v1; // r13d
  CDOTA_Bot **m_pMemory; // rbx
  CDOTA_Bot **i; // r12
  CDOTA_Bot *v4; // rdx
  uint32 m_Index; // ecx
  unsigned __int16 v6; // si
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdi

  v1 = 0;
  m_pMemory = this->m_BotList.m_Memory.m_pMemory;
  for ( i = &m_pMemory[this->m_BotList.m_Size]; i != m_pMemory; ++m_pMemory )
  {
    while ( 1 )
    {
      v4 = *m_pMemory;
      if ( *m_pMemory != 0 )
      {
        m_Index = v4->m_hUnit.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v6 = v4->m_hUnit.m_Index;
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[v6 & 0x1FF];
            if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
            {
              m_pInstance = v8->m_pInstance;
              if ( v8->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
              {
                break;
              }
            }
          }
        }
      }
      if ( i == ++m_pMemory )
        return v1;
    }
    v1 -= ((*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0) - 1;
  }
  return v1;
}


