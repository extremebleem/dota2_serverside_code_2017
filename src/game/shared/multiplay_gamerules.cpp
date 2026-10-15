
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// __CreateGameRules_CMultiplayRules  (line 39, @0x00000000022a4de0, libserver.so)  // inlines: memset, operator delete, operator new
// calls: CMultiplayRules::CMultiplayRules, _Unwind_Resume
void __cdecl __CreateGameRules_CMultiplayRules()
{
  CMultiplayRules *v0; // rbx

  v0 = (**g_pMemAlloc)(g_pMemAlloc, 200);
  memset(v0, 0, sizeof(CMultiplayRules));
  CMultiplayRules::CMultiplayRules(v0);
}


// MPTimeLimitCallback  (line 50, @0x0000000002285780, libserver.so)  // inlines: GetInt, MultiplayRules
// calls: ConVar::SetValue
// globals: mp_timelimit
void __fastcall MPTimeLimitCallback(IConVar *var, const char *pOldString, double a3, double flOldValue)
{
  if ( mp_timelimit.m_pParent->m_Value.m_nValue < 0 )
    ConVar::SetValue(&mp_timelimit, 0);
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 158))(g_pGameRules, pOldString, a3, flOldValue);
}


// CMultiplayRules::IsMultiplayer  (line 102, @0x0000000002283f70, libserver.so)
bool __fastcall CMultiplayRules::IsMultiplayer(CMultiplayRules *const this)
{
  return 1;
}


// CMultiplayRules::Damage_GetTimeBased  (line 110, @0x0000000002283f80, libserver.so)
// callers: CDOTAGamerules::Damage_GetTimeBased
int __fastcall CMultiplayRules::Damage_GetTimeBased(CMultiplayRules *const this)
{
  return 4161536;
}


// CMultiplayRules::Damage_GetShouldGibCorpse  (line 119, @0x0000000002283f90, libserver.so)
int __fastcall CMultiplayRules::Damage_GetShouldGibCorpse(CMultiplayRules *const this)
{
  return 737;
}


// CMultiplayRules::Damage_GetShowOnHud  (line 128, @0x0000000002283fa0, libserver.so)
int __fastcall CMultiplayRules::Damage_GetShowOnHud(CMultiplayRules *const this)
{
  return 3621128;
}


// CMultiplayRules::Damage_GetNoPhysicsForce  (line 137, @0x0000000002283fb0, libserver.so)
int __fastcall CMultiplayRules::Damage_GetNoPhysicsForce(CMultiplayRules *const this)
{
  return (*(this->_vptr_CGameRules + 27))(this) | 0x1804829;
}


// CMultiplayRules::Damage_GetShouldNotBleed  (line 147, @0x0000000002283fd0, libserver.so)
int __fastcall CMultiplayRules::Damage_GetShouldNotBleed(CMultiplayRules *const this)
{
  return &stru_120000;
}


// CMultiplayRules::Damage_IsTimeBased  (line 158, @0x0000000002283fe0, libserver.so)
// callers: CDOTAGamerules::Damage_IsTimeBased
bool __fastcall CMultiplayRules::Damage_IsTimeBased(CMultiplayRules *const this, int iDmgType)
{
  return (iDmgType & (*(this->_vptr_CGameRules + 27))(this)) != 0;
}


// CMultiplayRules::Damage_ShouldGibCorpse  (line 169, @0x0000000002284000, libserver.so)
bool __fastcall CMultiplayRules::Damage_ShouldGibCorpse(CMultiplayRules *const this, int iDmgType)
{
  return (iDmgType & (*(this->_vptr_CGameRules + 28))(this)) != 0;
}


// CMultiplayRules::Damage_ShowOnHUD  (line 180, @0x0000000002284020, libserver.so)
bool __fastcall CMultiplayRules::Damage_ShowOnHUD(CMultiplayRules *const this, int iDmgType)
{
  return (iDmgType & (*(this->_vptr_CGameRules + 29))(this)) != 0;
}


// CMultiplayRules::Damage_NoPhysicsForce  (line 191, @0x0000000002284040, libserver.so)
bool __fastcall CMultiplayRules::Damage_NoPhysicsForce(CMultiplayRules *const this, int iDmgType)
{
  return (iDmgType & (*(this->_vptr_CGameRules + 30))(this)) != 0;
}


// CMultiplayRules::Damage_ShouldNotBleed  (line 202, @0x0000000002284060, libserver.so)
bool __fastcall CMultiplayRules::Damage_ShouldNotBleed(CMultiplayRules *const this, int iDmgType)
{
  return (iDmgType & (*(this->_vptr_CGameRules + 31))(this)) != 0;
}


// CMultiplayRules::CMultiplayRules  (line 211, @0x00000000022a4b30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetString, Purge, RefreshSkillData, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGameRules::CGameRules, CGameRules::RefreshSkillData, ConVar::SetValue, CMultiplayRules::LoadVoiceCommandScript, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, V_snprintf, __stack_chk_fail, CUtlVectorBase<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, CUtlMemory<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, int> >::RemoveAll, CUtlVectorBase<CMultiplayRules::ResponseRules_t, CUtlMemory<CMultiplayRules::ResponseRules_t, int> >::RemoveAll, CGameRules::~CGameRules, _Unwind_Resume (14 total)
// callers: CSchemaClassBinding<CMultiplayRules>::ConstructInPlace, CSchemaClassBinding<CMultiplayRules>::Allocate, CSchemaClassBinding<CMultiplayRules>::AllocateAndCopyConstruct, __CreateGameRules_CMultiplayRules, CTeamplayRules::CTeamplayRules
// strings: "FCVAR_NEVER_AS_STRING", "SV:  Executing listen server config file\n", "SV:  Executing dedicated server config file\n", "execifexists %s\n"
// globals: nextlevel
void __fastcall CMultiplayRules::CMultiplayRules(CMultiplayRules *const this)
{
  char *m_pszString; // r13
  char szCommand[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v4; // [rsp+108h] [rbp-28h]

  v4 = __readfsqword(0x28u);
  CGameRules::CGameRules(this);
  this->_vptr_CGameRules = &off_4070F50;
  this->m_ResponseRules.m_Size = 0;
  this->m_ResponseRules.m_Memory.m_pMemory = 0;
  this->m_ResponseRules.m_Memory.m_nAllocationCount = 0;
  this->m_ResponseRules.m_Memory.m_nGrowSize = 0;
  this->m_VoiceCommandMenus.m_Size = 0;
  this->m_VoiceCommandMenus.m_Memory.m_pMemory = 0;
  this->m_VoiceCommandMenus.m_Memory.m_nAllocationCount = 0;
  this->m_VoiceCommandMenus.m_Memory.m_nGrowSize = 0;
  CGameRules::RefreshSkillData(this, 1);
  if ( (*(*engine + 160LL))(engine) == 0 )
  {
    m_pszString = "FCVAR_NEVER_AS_STRING";
    if ( (lservercfgfile.m_nFlags & 0x1000) != 0 )
    {
      if ( pszParticleName[0] == 0 )
        goto LABEL_4;
    }
    else
    {
      m_pszString = "";
      if ( lservercfgfile.m_pParent->m_Value.m_pszString != 0 )
        m_pszString = lservercfgfile.m_pParent->m_Value.m_pszString;
      if ( *m_pszString == 0 )
        goto LABEL_4;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(LOG_SERVER, 1, "SV:  Executing listen server config file\n");
    goto LABEL_18;
  }
  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (servercfgfile.m_nFlags & 0x1000) != 0 )
  {
    if ( pszParticleName[0] == 0 )
      goto LABEL_4;
    goto LABEL_16;
  }
  m_pszString = "";
  if ( servercfgfile.m_pParent->m_Value.m_pszString != 0 )
    m_pszString = servercfgfile.m_pParent->m_Value.m_pszString;
  if ( *m_pszString != 0 )
  {
LABEL_16:
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(LOG_SERVER, 1, "SV:  Executing dedicated server config file\n");
LABEL_18:
    V_snprintf(szCommand, 256, "execifexists %s\n", m_pszString);
    (*(*engine + 280LL))(engine, szCommand);
  }
LABEL_4:
  ConVar::SetValue(&nextlevel, "");
  this->m_flIntermissionEndTime = 0.0;
  CMultiplayRules::LoadVoiceCommandScript(this);
}


// CMultiplayRules::Init  (line 262, @0x00000000022a4af0, libserver.so)
// calls: CGameRules::Init
bool __fastcall CMultiplayRules::Init(CMultiplayRules *const this)
{
  (*(this->_vptr_CGameRules + 159))(this);
  return CGameRules::Init(this);
}


// CMultiplayRules::RefreshSkillData  (line 288, @0x00000000022a4b20, libserver.so)
// calls: CGameRules::RefreshSkillData
void __fastcall CMultiplayRules::RefreshSkillData(CMultiplayRules *const this, bool forceUpdate)
{
  CGameRules::RefreshSkillData(this, forceUpdate);
}


// CMultiplayRules::Think  (line 305, @0x00000000022a4e40, libserver.so)  // inlines: GetFloat, curtime
// calls: CGameRules::Think, UTIL_PlayerByIndex
// callers: CTeamplayRules::Think
void __fastcall CMultiplayRules::Think(CMultiplayRules *const this)
{
  float v2; // xmm0_4
  bool v3; // zf
  CEntityIndex v4; // ebx
  CBasePlayer *v5; // rax
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm2_4
  float flTimeLimit; // [rsp+8h] [rbp-28h]
  float m_fValue; // [rsp+Ch] [rbp-24h]

  CGameRules::Think(this);
  if ( g_fGameOver )
  {
    (*(this->_vptr_CGameRules + 163))(this);
    return;
  }
  v2 = 60.0 * mp_timelimit.m_pParent->m_Value.m_fValue;
  m_fValue = fraglimit.m_pParent->m_Value.m_fValue;
  if ( v2 == 0.0 )
  {
    v3 = m_fValue == 0.0;
  }
  else
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
    {
LABEL_9:
      (*(this->_vptr_CGameRules + 164))(this);
      return;
    }
    v3 = m_fValue == 0.0;
  }
  if ( !v3 )
  {
    v4.m_Data = 1;
    if ( gpGlobals->maxClients > 0 )
    {
      while ( 1 )
      {
        v5 = UTIL_PlayerByIndex(v4);
        if ( v5 != 0 && v5->m_iFrags >= m_fValue )
          break;
        if ( gpGlobals->maxClients < ++v4.m_Data )
          return;
      }
      goto LABEL_9;
    }
  }
}


// CMultiplayRules::IsDeathmatch  (line 345, @0x0000000002284080, libserver.so)
bool __fastcall CMultiplayRules::IsDeathmatch(CMultiplayRules *const this)
{
  return 1;
}


// CMultiplayRules::IsCoOp  (line 352, @0x0000000002284090, libserver.so)
bool __fastcall CMultiplayRules::IsCoOp(CMultiplayRules *const this)
{
  return 0;
}


// CMultiplayRules::FShouldSwitchWeapon  (line 359, @0x00000000022857d0, libserver.so)
// calls: CBaseCombatCharacter::GetActiveWeapon
bool __fastcall CMultiplayRules::FShouldSwitchWeapon(
        CMultiplayRules *const this,
        CBasePlayer *pPlayer,
        CBaseCombatWeapon *pWeapon)
{
  char v5; // bl
  CBaseCombatWeapon *ActiveWeapon; // rax
  int v8; // ebx
  CBaseCombatWeapon *v9; // rax

  v5 = (*(pPlayer->_vptr_IHandleEntity + 313))(pPlayer, pWeapon);
  if ( v5 != 0 )
  {
    if ( CBaseCombatCharacter::GetActiveWeapon(pPlayer) == 0 )
      return v5;
    if ( (*(pWeapon->_vptr_IHandleEntity + 342))(pWeapon) != 0 )
    {
      ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(pPlayer);
      if ( (*(ActiveWeapon->_vptr_IHandleEntity + 343))(ActiveWeapon) != 0 )
      {
        v8 = (*(pWeapon->_vptr_IHandleEntity + 341))(pWeapon);
        v9 = CBaseCombatCharacter::GetActiveWeapon(pPlayer);
        return v8 > (*(v9->_vptr_IHandleEntity + 341))(v9);
      }
    }
  }
  return 0;
}


// CMultiplayRules::GetNextBestWeapon  (line 397, @0x0000000002289bd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWeapon, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// globals: CEntityHandle::gm_pEntityList
CBaseCombatWeapon *__fastcall CMultiplayRules::GetNextBestWeapon(
        CMultiplayRules *const this,
        CBaseCombatCharacter *pPlayer,
        CBaseCombatWeapon *pCurrentWeapon)
{
  __int64 v6; // r14
  int v7; // r13d
  CHandle<CBaseCombatWeapon> *v8; // rcx
  uint32 m_Index; // eax
  __int16 v10; // si
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CBaseCombatWeapon *m_pInstance; // r15
  CBaseCombatWeapon *pBest; // [rsp+0h] [rbp-40h]
  int iCurrentWeight; // [rsp+Ch] [rbp-34h]

  if ( pCurrentWeapon != 0 )
  {
    if ( (*(pCurrentWeapon->_vptr_IHandleEntity + 343))(pCurrentWeapon) == 0
      || (*(pCurrentWeapon->_vptr_IHandleEntity + 279))(pCurrentWeapon) == 0 )
    {
      return 0;
    }
    iCurrentWeight = (*(pCurrentWeapon->_vptr_IHandleEntity + 341))(pCurrentWeapon);
  }
  else
  {
    iCurrentWeight = -1;
  }
  if ( pPlayer->m_hMyWeapons.m_Vector.m_Size <= 0 )
    return 0;
  v6 = 0;
  v7 = -1;
  pBest = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = &pPlayer->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v6];
      m_Index = v8->m_Index;
      if ( v8->m_Index + 2 <= 1 )
        goto LABEL_9;
      v10 = v8->m_Index;
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
      if ( v11 == 0 )
        goto LABEL_9;
      v12 = &v11[v10 & 0x1FF];
      if ( v12 == 0 )
        goto LABEL_9;
      if ( m_Index != v12->m_EHandle.m_Index )
        goto LABEL_9;
      m_pInstance = v12->m_pInstance;
      if ( v12->m_pInstance == 0
        || pCurrentWeapon != 0 && (*(m_pInstance->_vptr_IHandleEntity + 342))(v12->m_pInstance) == 0 )
      {
        goto LABEL_9;
      }
      if ( (*(m_pInstance->_vptr_IHandleEntity + 341))(m_pInstance) >= 0
        && iCurrentWeight == (*(m_pInstance->_vptr_IHandleEntity + 341))(m_pInstance) )
      {
        break;
      }
      if ( (*(m_pInstance->_vptr_IHandleEntity + 341))(m_pInstance) <= v7
        || pCurrentWeapon == m_pInstance
        || (*(m_pInstance->_vptr_IHandleEntity + 276))(m_pInstance) == 0 )
      {
        goto LABEL_9;
      }
      pBest = m_pInstance;
      v7 = (*(m_pInstance->_vptr_IHandleEntity + 341))(m_pInstance);
      if ( pPlayer->m_hMyWeapons.m_Vector.m_Size <= ++v6 )
        return pBest;
    }
    if ( pCurrentWeapon != m_pInstance )
      break;
    (*(pCurrentWeapon->_vptr_IHandleEntity + 341))(pCurrentWeapon);
LABEL_9:
    if ( pPlayer->m_hMyWeapons.m_Vector.m_Size <= ++v6 )
      return pBest;
  }
  if ( (*(m_pInstance->_vptr_IHandleEntity + 276))(m_pInstance) == 0
    || (*(pPlayer->_vptr_IHandleEntity + 313))(pPlayer, m_pInstance) == 0 )
  {
    goto LABEL_9;
  }
  return m_pInstance;
}


// CMultiplayRules::SwitchToNextBestWeapon  (line 468, @0x00000000022840a0, libserver.so)
bool __fastcall CMultiplayRules::SwitchToNextBestWeapon(
        CMultiplayRules *const this,
        CBaseCombatCharacter *pPlayer,
        CBaseCombatWeapon *pCurrentWeapon)
{
  __int64 v4; // rax

  v4 = (*(this->_vptr_CGameRules + 33))(this, pPlayer, pCurrentWeapon);
  return v4 != 0 && (*(pPlayer->_vptr_IHandleEntity + 310))(pPlayer, v4, 0);
}


// CMultiplayRules::ClientConnected  (line 480, @0x0000000002285870, libserver.so)
// calls: GetVoiceGameMgr, CVoiceGameMgr::ClientConnected
// callers: CDOTAGamerules::ClientConnected
bool __fastcall CMultiplayRules::ClientConnected(
        CMultiplayRules *const this,
        CEntityIndex nEntityIndex,
        const char *pszName,
        const char *pszAddress,
        char *reject,
        int maxrejectlen)
{
  CVoiceGameMgr *VoiceGameMgr; // rax

  VoiceGameMgr = GetVoiceGameMgr();
  CVoiceGameMgr::ClientConnected(VoiceGameMgr, nEntityIndex);
  return 1;
}


// CMultiplayRules::InitHUD  (line 495, @0x00000000022840f0, libserver.so)
// callers: CTeamplayRules::InitHUD
void __fastcall CMultiplayRules::InitHUD(CMultiplayRules *const this, CBasePlayer *pl)
{
  ;
}


// CMultiplayRules::ClientDisconnected  (line 501, @0x0000000002288ce0, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SetConnected, ToBasePlayer
// calls: FireTargets, CBasePlayer::DestroyViewModels, __dynamic_cast
// callers: CTeamplayRules::ClientDisconnected
// strings: "game_playerleave"
void __fastcall CMultiplayRules::ClientDisconnected(
        CMultiplayRules *const this,
        CEntityIndex nEntityIndex,
        ENetworkDisconnectionReason reason)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rax
  CEntityInstance *m_pInstance; // rbx
  __int64 v6; // r12
  void *v7; // rax

  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v3 != 0 )
    {
      v4 = &v3[nEntityIndex.m_Data & 0x1FF];
      if ( v4 != 0 && (v4->m_EHandle.m_Index & 0x7FFF) == nEntityIndex.m_Data )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
        {
          FireTargets("game_playerleave", m_pInstance, m_pInstance, USE_TOGGLE, 0.0);
          (*(m_pInstance->_vptr_IHandleEntity + 400))(m_pInstance, 1);
          CBasePlayer::DestroyViewModels(m_pInstance);
          HIDWORD(m_pInstance[64]._vptr_IHandleEntity) = 2;
          v6 = (*(*engine + 648LL))(engine);
          if ( v6 != 0 )
          {
            v7 = __dynamic_cast(m_pInstance, &`typeinfo for'CBasePlayer, &`typeinfo for'CBaseMultiplayerPlayer, 0);
            (*(*v6 + 144LL))(v6, v7);
          }
        }
      }
    }
  }
}


// CMultiplayRules::FlPlayerFallDamage  (line 525, @0x0000000002287d20, libserver.so)  // inlines: GetFloat, NetworkStateChanged, Set, operator-=<int>
float __fastcall CMultiplayRules::FlPlayerFallDamage(CMultiplayRules *const this, CBasePlayer *pPlayer)
{
  float m_Value; // xmm0_4
  float v5; // [rsp-1Ch] [rbp-1Ch]

  if ( falldamage.m_pParent->m_Value.m_fValue != 1 )
    return 10.0;
  m_Value = pPlayer->m_Local.m_flFallVelocity.m_Value;
  if ( m_Value != (m_Value - 580.0) )
  {
    v5 = pPlayer->m_Local.m_flFallVelocity.m_Value - 580.0;
    (*(pPlayer->m_Local._vptr_CPlayerLocalData + 2))(&pPlayer->m_Local, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    pPlayer->m_Local.m_flFallVelocity.m_Value = v5;
    m_Value = v5;
  }
  return (m_Value * 50.0) / 444.0;
}


// CMultiplayRules::AllowDamage  (line 544, @0x0000000002284100, libserver.so)
bool __fastcall CMultiplayRules::AllowDamage(
        CMultiplayRules *const this,
        CBaseEntity *pVictim,
        const CTakeDamageInfo *const info)
{
  return 1;
}


// CMultiplayRules::FPlayerCanTakeDamage  (line 551, @0x0000000002284110, libserver.so)
// callers: CTeamplayRules::FPlayerCanTakeDamage
bool __fastcall CMultiplayRules::FPlayerCanTakeDamage(
        CMultiplayRules *const this,
        CBasePlayer *pPlayer,
        CBaseEntity *pAttacker)
{
  return 1;
}


// CMultiplayRules::PlayerThink  (line 558, @0x0000000002284120, libserver.so)
void __fastcall CMultiplayRules::PlayerThink(CMultiplayRules *const this, CBasePlayer *pPlayer)
{
  if ( g_fGameOver )
  {
    pPlayer->m_afButtonPressed = 0;
    pPlayer->m_nButtons = 0;
    pPlayer->m_afButtonReleased = 0;
  }
}


// CMultiplayRules::PlayerSpawn  (line 571, @0x0000000002284f60, libserver.so)
// calls: CGameEntitySystem::FindEntityByClassname
// strings: "game_player_equip"
void __fastcall CMultiplayRules::PlayerSpawn(CMultiplayRules *const this, CBasePlayer *pPlayer)
{
  CBaseEntity *EntityByClassname; // rbx

  EntityByClassname = 0;
  (*(pPlayer->_vptr_IHandleEntity + 511))(pPlayer, 1);
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(
                          g_pGameEntitySystem,
                          EntityByClassname,
                          "game_player_equip");
    if ( EntityByClassname == 0 )
      break;
    (*(EntityByClassname->_vptr_IHandleEntity + 112))(EntityByClassname, pPlayer);
  }
}


// CMultiplayRules::FPlayerCanRespawn  (line 589, @0x0000000002284160, libserver.so)
bool __fastcall CMultiplayRules::FPlayerCanRespawn(CMultiplayRules *const this, CBasePlayer *pPlayer)
{
  return 1;
}


// CMultiplayRules::FlPlayerSpawnTime  (line 596, @0x0000000002288c30, libserver.so)  // inlines: curtime
float __fastcall CMultiplayRules::FlPlayerSpawnTime(CMultiplayRules *const this, CBasePlayer *pPlayer)
{
  float result; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  result = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, pPlayer, 0.0);
    }
    return v3->m_flCurrentTime;
  }
  return result;
}


// CMultiplayRules::AllowAutoTargetCrosshair  (line 601, @0x0000000002284170, libserver.so)  // inlines: GetInt
bool __fastcall CMultiplayRules::AllowAutoTargetCrosshair(CMultiplayRules *const this)
{
  return aimcrosshair.m_pParent->m_Value.m_nValue != 0;
}


// CMultiplayRules::IPointsForKill  (line 610, @0x0000000002284190, libserver.so)
int __fastcall CMultiplayRules::IPointsForKill(
        CMultiplayRules *const this,
        CBasePlayer *pAttacker,
        CBasePlayer *pKilled)
{
  return 1;
}


// CMultiplayRules::GetDeathScorer  (line 618, @0x000000000229b160, libserver.so)
// calls: __dynamic_cast
// callers: CMultiplayRules::GetDeathScorer
// globals: `typeinfo for'IScorer
CBasePlayer *__fastcall CMultiplayRules::GetDeathScorer(
        CMultiplayRules *const this,
        CBaseEntity *pKiller,
        CBaseEntity *pInflictor)
{
  __int64 (__fastcall ***v5)(_QWORD); // rax
  CBasePlayer *result; // rax
  CBasePlayer *(__fastcall ***v7)(_QWORD); // rax

  if ( pKiller == 0 )
    return 0;
  if ( (*(pKiller->_vptr_IHandleEntity + 47))(pKiller) == 1 )
    return pKiller;
  v5 = __dynamic_cast(pKiller, &`typeinfo for'CBaseEntity, &`typeinfo for'IScorer, -2);
  if ( v5 == 0 || (result = (**v5)(v5)) == 0 )
  {
    if ( pInflictor != 0 )
    {
      v7 = __dynamic_cast(pInflictor, &`typeinfo for'CBaseEntity, &`typeinfo for'IScorer, -2);
      if ( v7 != 0 )
        return (**v7)(v7);
    }
    return 0;
  }
  return result;
}


// CMultiplayRules::GetDeathScorer  (line 650, @0x000000000229b230, libserver.so)
// calls: CMultiplayRules::GetDeathScorer
CBasePlayer *__fastcall CMultiplayRules::GetDeathScorer(
        CMultiplayRules *const this,
        CBaseEntity *pKiller,
        CBaseEntity *pInflictor,
        CBaseEntity *pVictim)
{
  return CMultiplayRules::GetDeathScorer(this, pKiller, pInflictor);
}


// CMultiplayRules::PlayerKilled  (line 659, @0x000000000228a090, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IncrementDeathCount, IncrementFragCount, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: FireTargets, CBasePlayer::AllowImmediateDecalPainting
// callers: CTeamplayRules::PlayerKilled
// strings: "game_playerdie", "game_playerkill"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CMultiplayRules::PlayerKilled(
        CMultiplayRules *const this,
        CBasePlayer *pVictim,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  uint32 v10; // eax
  CEntityInstance *v11; // rsi
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  CBasePlayer *v14; // r12
  int v15; // eax
  int (**vptr_CGameRules)(...); // rax
  int v17; // eax
  int v18; // eax

  (*(this->_vptr_CGameRules + 87))(this);
  m_Index = info->m_hInflictor.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[info->m_hInflictor.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  v10 = info->m_hAttacker.m_Index;
  v11 = 0;
  if ( v10 + 2 > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[info->m_hAttacker.m_Index & 0x1FF];
      if ( v13 != 0 && v10 == v13->m_EHandle.m_Index )
        v11 = v13->m_pInstance;
    }
  }
  v14 = (*(this->_vptr_CGameRules + 156))(this, v11, m_pInstance, pVictim);
  v15 = pVictim->m_iDeaths + 1;
  pVictim->m_iDeaths = v15;
  pVictim->m_pl.deaths = v15;
  FireTargets("game_playerdie", pVictim, pVictim, USE_TOGGLE, 0.0);
  vptr_CGameRules = this->_vptr_CGameRules;
  if ( pVictim == v14 || v14 == 0 )
  {
    if ( vptr_CGameRules[161](this) != 0 )
    {
      v18 = pVictim->m_iFrags - 1;
      pVictim->m_iFrags = v18;
      pVictim->m_pl.frags = v18;
    }
  }
  else
  {
    v17 = v14->m_iFrags + (vptr_CGameRules[85])(this, v14, pVictim);
    v14->m_iFrags = v17;
    v14->m_pl.frags = v17;
    CBasePlayer::AllowImmediateDecalPainting(v14);
    FireTargets("game_playerkill", v14, v14, USE_TOGGLE, 0.0);
  }
}


// CMultiplayRules::DeathNotice  (line 712, @0x000000000228a370, libserver.so)  // inlines: CreateEvent, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, GetUserID, IndexToIdentity, IsValid, LookupEntity, entindex, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityInstance::GetEntityIndex, CBaseCombatCharacter::GetActiveWeapon
// callers: CTeamplayRules::DeathNotice
// strings: "player_death", "customkill"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CMultiplayRules::DeathNotice(
        CMultiplayRules *const this,
        CBasePlayer *pVictim,
        const CTakeDamageInfo *const info)
{
  const CBaseCombatCharacter *m_pInstance; // r13
  uint32 m_Index; // eax
  unsigned __int16 v8; // si
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  uint32 v11; // eax
  CEntityInstance *v12; // rsi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  const CEntityInstance *v15; // rax
  CEntityIndex v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rbx
  CEntityIndex v20; // eax
  unsigned int v21; // eax
  CEntityIndex v22; // eax
  CBaseCombatWeapon *ActiveWeapon; // rax
  CBasePlayer *pScorer; // [rsp+8h] [rbp-38h]
  CBasePlayer *pScorerb; // [rsp+8h] [rbp-38h]
  CBasePlayer *pScorera; // [rsp+8h] [rbp-38h]

  m_pInstance = 0;
  m_Index = info->m_hInflictor.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = info->m_hInflictor.m_Index;
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[v8 & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  v11 = info->m_hAttacker.m_Index;
  v12 = 0;
  if ( v11 + 2 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[info->m_hAttacker.m_Index & 0x1FF];
      if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
        v12 = v14->m_pInstance;
    }
  }
  v15 = (*(this->_vptr_CGameRules + 156))(this, v12, m_pInstance, pVictim);
  if ( info->m_iDamageCustom != 0 )
  {
    pScorera = v15;
    (*(this->_vptr_CGameRules + 88))(this, info);
    if ( pScorera != 0 )
    {
      v22.m_Data = CEntityInstance::GetEntityIndex(pScorera).m_Data;
      v17 = (*(*engine + 224LL))(engine, (v22.m_Data - 1));
      goto LABEL_15;
    }
LABEL_17:
    v17 = 0;
    goto LABEL_15;
  }
  if ( v15 == 0 )
    goto LABEL_17;
  pScorer = v15;
  v16.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
  v17 = (*(*engine + 224LL))(engine, (v16.m_Data - 1));
  if ( m_pInstance != 0 && pScorer == m_pInstance && CBaseCombatCharacter::GetActiveWeapon(m_pInstance) != 0 )
  {
    ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(m_pInstance);
    (*(ActiveWeapon->_vptr_IHandleEntity + 328))(ActiveWeapon);
  }
LABEL_15:
  v18 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_death", 0, 0);
  v19 = v18;
  if ( v18 != 0 )
  {
    pScorerb = *(*v18 + 112LL);
    v20.m_Data = CEntityInstance::GetEntityIndex(pVictim).m_Data;
    v21 = (*(*engine + 224LL))(engine, (v20.m_Data - 1));
    (pScorerb)(v19, "userid", v21);
    (*(*v19 + 112LL))(v19, "attacker", v17);
    (*(*v19 + 112LL))(v19, "customkill", info->m_iDamageCustom);
    (*(*v19 + 112LL))(v19, "priority", 7);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v19, 0);
  }
}


// CMultiplayRules::FlWeaponRespawnTime  (line 792, @0x0000000002289fd0, libserver.so)  // inlines: GetInt, curtime
float __fastcall CMultiplayRules::FlWeaponRespawnTime(CMultiplayRules *const this, CBaseCombatWeapon *pWeapon)
{
  CGlobalVars *v2; // rbx
  float result; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc v6; // rax

  if ( weaponstay.m_pParent->m_Value.m_nValue <= 0 || ((*(pWeapon->_vptr_IHandleEntity + 344))(pWeapon) & 8) != 0 )
  {
    v2 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, pWeapon);
      }
      return v2->m_flCurrentTime + 20.0;
    }
    else
    {
      return 20.0;
    }
  }
  else
  {
    result = 0.0;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v6 = gpGlobals->m_pfnWarningFunc;
        if ( v6 != 0 )
          (v6)(1, 0.0);
      }
      return v5->m_flCurrentTime + 0.0;
    }
  }
  return result;
}


// CMultiplayRules::FlWeaponTryRespawn  (line 815, @0x0000000002285970, libserver.so)
// calls: CGameEntitySystem::NumberOfEntities
float __fastcall CMultiplayRules::FlWeaponTryRespawn(CMultiplayRules *const this, CBaseCombatWeapon *pWeapon)
{
  float result; // xmm0_4
  int v5; // eax

  if ( pWeapon == 0 || ((*(pWeapon->_vptr_IHandleEntity + 344))(pWeapon) & 8) == 0 )
    return 0.0;
  v5 = CGameEntitySystem::NumberOfEntities(g_pGameEntitySystem, 0);
  result = 0.0;
  if ( v5 >= gpGlobals->maxEntities - 100 )
    return (*(this->_vptr_CGameRules + 93))(this, pWeapon, 0.0);
  return result;
}


// CMultiplayRules::VecWeaponRespawnSpot  (line 833, @0x00000000022843c0, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall CMultiplayRules::VecWeaponRespawnSpot(CMultiplayRules *const this, CBaseCombatWeapon *pWeapon)
{
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsOrigin = CBaseEntity::GetAbsOrigin(pWeapon);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CMultiplayRules::WeaponShouldRespawn  (line 842, @0x00000000022841a0, libserver.so)  // inlines: HasSpawnFlags
int __fastcall CMultiplayRules::WeaponShouldRespawn(CMultiplayRules *const this, CBaseCombatWeapon *pWeapon)
{
  return 2 - ((pWeapon->m_spawnflags.m_Value & 0x40000000) == 0);
}


// CMultiplayRules::CanHavePlayerItem  (line 856, @0x00000000022a4fa0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetWeapon, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CGameRules::CanHavePlayerItem
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CMultiplayRules::CanHavePlayerItem(
        CMultiplayRules *const this,
        CBasePlayer *pPlayer,
        CBaseCombatWeapon *pItem)
{
  int m_Size; // edx
  CHandle<CBaseCombatWeapon> *m_pMemory; // rax
  __int64 v8; // rdx
  CEntityIdentity *v9; // r8
  CEntityIdentity *v10; // r8

  if ( weaponstay.m_pParent->m_Value.m_nValue <= 0 )
    return CGameRules::CanHavePlayerItem(this, pPlayer, pItem);
  if ( ((*(pItem->_vptr_IHandleEntity + 344))(pItem) & 8) != 0 )
    return CGameRules::CanHavePlayerItem(this, pPlayer, pItem);
  m_Size = pPlayer->m_hMyWeapons.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return CGameRules::CanHavePlayerItem(this, pPlayer, pItem);
  m_pMemory = pPlayer->m_hMyWeapons.m_Vector.m_Memory.m_pMemory;
  v8 = &m_pMemory[m_Size - 1 + 1];
  while ( 1 )
  {
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[m_pMemory->m_Index & 0x1FF];
        if ( v10 != 0 && m_pMemory->m_Index == v10->m_EHandle.m_Index && pItem == v10->m_pInstance )
          break;
      }
    }
    if ( ++m_pMemory == v8 )
      return CGameRules::CanHavePlayerItem(this, pPlayer, pItem);
  }
  return 0;
}


// CMultiplayRules::CanHaveItem  (line 878, @0x00000000022841c0, libserver.so)
bool __fastcall CMultiplayRules::CanHaveItem(CMultiplayRules *const this, CBasePlayer *pPlayer, CItem *pItem)
{
  return 1;
}


// CMultiplayRules::PlayerGotItem  (line 885, @0x00000000022841d0, libserver.so)
void __fastcall CMultiplayRules::PlayerGotItem(CMultiplayRules *const this, CBasePlayer *pPlayer, CItem *pItem)
{
  ;
}


// CMultiplayRules::ItemShouldRespawn  (line 891, @0x00000000022841e0, libserver.so)  // inlines: HasSpawnFlags
int __fastcall CMultiplayRules::ItemShouldRespawn(CMultiplayRules *const this, CItem *pItem)
{
  return 6 - ((pItem->m_spawnflags.m_Value & 0x40000000) == 0);
}


// CMultiplayRules::FlItemRespawnTime  (line 905, @0x0000000002288c80, libserver.so)  // inlines: curtime
float __fastcall CMultiplayRules::FlItemRespawnTime(CMultiplayRules *const this, CItem *pItem)
{
  CGlobalVars *v2; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v2 = gpGlobals;
  if ( gpGlobals == 0 )
    return 30.0;
  if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      (m_pfnWarningFunc)(1, pItem);
  }
  return v2->m_flCurrentTime + 30.0;
}


// CMultiplayRules::VecItemRespawnSpot  (line 914, @0x00000000022843f0, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall CMultiplayRules::VecItemRespawnSpot(CMultiplayRules *const this, CItem *pItem)
{
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsOrigin = CBaseEntity::GetAbsOrigin(pItem);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CMultiplayRules::VecItemRespawnAngles  (line 922, @0x0000000002284420, libserver.so)
// calls: CBaseEntity::GetAbsAngles
QAngle __fastcall CMultiplayRules::VecItemRespawnAngles(CMultiplayRules *const this, CItem *pItem)
{
  const QAngle *AbsAngles; // rax
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsAngles = CBaseEntity::GetAbsAngles(pItem);
  *&result.x = *&AbsAngles->x;
  result.z = AbsAngles->z;
  return result;
}


// CMultiplayRules::PlayerGotAmmo  (line 929, @0x0000000002284200, libserver.so)
void __fastcall CMultiplayRules::PlayerGotAmmo(
        CMultiplayRules *const this,
        CBaseCombatCharacter *pPlayer,
        char *szName,
        int iCount)
{
  ;
}


// CMultiplayRules::IsAllowedToSpawn  (line 935, @0x0000000002284210, libserver.so)
bool __fastcall CMultiplayRules::IsAllowedToSpawn(CMultiplayRules *const this, CBaseEntity *pEntity)
{
  return 1;
}


// CMultiplayRules::FlHealthChargerRechargeTime  (line 946, @0x0000000002284220, libserver.so)
float __fastcall CMultiplayRules::FlHealthChargerRechargeTime(CMultiplayRules *const this)
{
  return 60.0;
}


// CMultiplayRules::FlHEVChargerRechargeTime  (line 952, @0x0000000002284230, libserver.so)
float __fastcall CMultiplayRules::FlHEVChargerRechargeTime(CMultiplayRules *const this)
{
  return 30.0;
}


// CMultiplayRules::DeadPlayerWeapons  (line 959, @0x0000000002284240, libserver.so)
int __fastcall CMultiplayRules::DeadPlayerWeapons(CMultiplayRules *const this, CBasePlayer *pPlayer)
{
  return 8;
}


// CMultiplayRules::DeadPlayerAmmo  (line 966, @0x0000000002284250, libserver.so)
int __fastcall CMultiplayRules::DeadPlayerAmmo(CMultiplayRules *const this, CBasePlayer *pPlayer)
{
  return 11;
}


// CMultiplayRules::GetPlayerSpawnSpot  (line 971, @0x00000000022a5090, libserver.so)
// calls: CGameRules::GetPlayerSpawnSpot
CBaseEntity *__fastcall CMultiplayRules::GetPlayerSpawnSpot(CMultiplayRules *const this, CBasePlayer *pPlayer)
{
  return CGameRules::GetPlayerSpawnSpot(this, pPlayer);
}


// CMultiplayRules::PlayerCanHearChat  (line 989, @0x0000000002284260, libserver.so)
bool __fastcall CMultiplayRules::PlayerCanHearChat(
        CMultiplayRules *const this,
        CBasePlayer *pListener,
        CBasePlayer *pSpeaker,
        int nCustomModRules)
{
  return (*(this->_vptr_CGameRules + 114))(this, pListener, pSpeaker, nCustomModRules) == 1;
}


// CMultiplayRules::PlayerRelationship  (line 994, @0x0000000002284280, libserver.so)
int __fastcall CMultiplayRules::PlayerRelationship(
        CMultiplayRules *const this,
        CBaseEntity *pPlayer,
        CBaseEntity *pTarget)
{
  return 0;
}


// CMultiplayRules::PlayFootstepSounds  (line 1000, @0x0000000002285a70, libserver.so)  // inlines: FastSqrt, GetAbsVelocity, GetInt, Length2D, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CBaseEntity::CalcAbsoluteVelocity
bool __fastcall CMultiplayRules::PlayFootstepSounds(CMultiplayRules *const this, CBasePlayer *pl)
{
  bool result; // al
  CBasePlayer *v3; // [rsp-8h] [rbp-10h]

  result = 0;
  if ( footsteps.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( pl->m_MoveType.m_Value == MoveType_t::MOVETYPE_LADDER )
    {
      return 1;
    }
    else
    {
      if ( (pl->m_iEFlags & 0x1000) != 0 )
      {
        v3 = pl;
        CBaseEntity::CalcAbsoluteVelocity(pl);
        pl = v3;
      }
      return fsqrt(
               (pl->m_vecAbsVelocity.m_Value.x * pl->m_vecAbsVelocity.m_Value.x)
             + (pl->m_vecAbsVelocity.m_Value.y * pl->m_vecAbsVelocity.m_Value.y)) > 220.0;
    }
  }
  return result;
}


// CMultiplayRules::FAllowFlashlight  (line 1011, @0x0000000002284290, libserver.so)  // inlines: GetInt
bool __fastcall CMultiplayRules::FAllowFlashlight(CMultiplayRules *const this)
{
  return flashlight.m_pParent->m_Value.m_nValue != 0;
}


// CMultiplayRules::FAllowNPCs  (line 1018, @0x00000000022842b0, libserver.so)
bool __fastcall CMultiplayRules::FAllowNPCs(CMultiplayRules *const this)
{
  return 1;
}


// CMultiplayRules::GoToIntermission  (line 1027, @0x000000000228adc0, libserver.so)  // inlines: GetInt, curtime
// calls: UTIL_PlayerByIndex
// strings: "scores"
void __fastcall CMultiplayRules::GoToIntermission(CMultiplayRules *const this)
{
  float m_flCurrentTime; // xmm1_4
  float m_nValue; // xmm0_4
  CGlobalVars *v4; // rbx
  CEntityIndex v5; // ebx
  CBasePlayer *v6; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v8; // [rsp-8h] [rbp-1Ch]

  if ( !g_fGameOver )
  {
    m_flCurrentTime = 0.0;
    g_fGameOver = 1;
    m_nValue = mp_chattime.m_pParent->m_Value.m_nValue;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v8 = mp_chattime.m_pParent->m_Value.m_nValue;
          (m_pfnWarningFunc)(1, m_nValue, 0.0);
          m_nValue = v8;
        }
      }
      m_flCurrentTime = v4->m_flCurrentTime;
    }
    v5.m_Data = 1;
    this->m_flIntermissionEndTime = m_nValue + m_flCurrentTime;
    do
    {
      v6 = UTIL_PlayerByIndex(v5);
      if ( v6 != 0 )
        (*(v6->_vptr_IHandleEntity + 378))(v6, "scores", 1, 0);
      ++v5.m_Data;
    }
    while ( v5.m_Data != 66 );
  }
}


// StripChar  (line 1049, @0x000000000229b240, libserver.so)  // inlines: _V_strcpy, strchr, strcpy
// calls: strcpy, strchr
// callers: CMultiplayRules::GetNextLevelName
void __fastcall StripChar(char *szBuffer, const char cWhiteSpace)
{
  int v3; // ebx
  char *v4; // rax

  v3 = cWhiteSpace;
  while ( 1 )
  {
    v4 = strchr(szBuffer, v3);
    if ( v4 == 0 )
      break;
    strcpy(v4, v4 + 1);
  }
}


// CMultiplayRules::GetNextLevelName  (line 1059, @0x00000000022a05b0, libserver.so)  // inlines: AddToTail, CopyConstruct<char*>, Element, GetString, GrowMemory, PurgeAndDeleteElements, Remove, RemoveAll, ShiftElementsLeft, V_memmove, V_strncmp<int>, V_strncpy<int>, memmove, operator[]
// calls: UTIL_LoadFileForMe, _V_strncpy, RandomInt, operator new [], V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), V_snprintf, Warning, operator delete [], memmove, StripChar, _V_strncmp, UTIL_FreeFile (14 total)
// strings: "FCVAR_NEVER_AS_STRING", "Invalid map '%s' included in map cycle file. Ignored.\n", "//"
// globals: CMultiplayRules::m_nMapCycleTimeStamp, CMultiplayRules::m_MapList, CMultiplayRules::m_nMapCycleindex
void __fastcall CMultiplayRules::GetNextLevelName(
        CMultiplayRules *const this,
        char *pszNextMap,
        int bufsize,
        bool bRandom)
{
  char *m_pszString; // r12
  int v6; // eax
  __int64 v7; // r14
  int v8; // r13d
  char *v9; // rsi
  int m_Size; // eax
  int v11; // eax
  char *v12; // r12
  __int64 v13; // rbx
  int v14; // eax
  char **v15; // rax
  char *v16; // r12
  __int64 v17; // rbx
  int v18; // eax
  char **v19; // rdx
  int v20; // r12d
  char *v21; // rdi
  int v22; // eax
  int v23; // eax
  uint8 *aFileList; // [rsp+8h] [rbp-168h]
  int nFileLength; // [rsp+2Ch] [rbp-144h] BYREF
  char szWarningMessage[264]; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v29; // [rsp+138h] [rbp-38h]

  m_pszString = "FCVAR_NEVER_AS_STRING";
  v29 = __readfsqword(0x28u);
  if ( (mapcyclefile.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( mapcyclefile.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = mapcyclefile.m_pParent->m_Value.m_pszString;
  }
  v6 = (*(filesystem->_vptr_IAppSystem + 95))(filesystem, m_pszString, "GAME");
  if ( v6 != 0 )
  {
    if ( CMultiplayRules::m_nMapCycleTimeStamp == v6 )
      goto LABEL_11;
    CMultiplayRules::m_nMapCycleTimeStamp = v6;
    CMultiplayRules::m_nMapCycleindex = 0;
    if ( CMultiplayRules::m_MapList.m_Size > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        ++v8;
        v9 = CMultiplayRules::m_MapList.m_Memory.m_pMemory[v7++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
      }
      while ( v8 < CMultiplayRules::m_MapList.m_Size );
    }
    CMultiplayRules::m_MapList.m_Size = 0;
    aFileList = UTIL_LoadFileForMe(m_pszString, &nFileLength);
    if ( aFileList == 0 || nFileLength == 0 )
      goto LABEL_11;
    V_SplitString(aFileList, "\n", &CMultiplayRules::m_MapList);
    if ( CMultiplayRules::m_MapList.m_Size <= 0 )
    {
LABEL_37:
      UTIL_FreeFile(aFileList);
LABEL_11:
      m_Size = CMultiplayRules::m_MapList.m_Size;
      goto LABEL_12;
    }
    v20 = 0;
    while ( 1 )
    {
      StripChar(CMultiplayRules::m_MapList.m_Memory.m_pMemory[v20], 13);
      StripChar(CMultiplayRules::m_MapList.m_Memory.m_pMemory[v20], 32);
      if ( (*(*engine + 152LL))(engine, CMultiplayRules::m_MapList.m_Memory.m_pMemory[v20]) == 0 )
        break;
      if ( _V_strncmp(CMultiplayRules::m_MapList.m_Memory.m_pMemory[v20], "//", 2) == 0 )
        goto LABEL_28;
      v23 = CMultiplayRules::m_MapList.m_Size;
LABEL_33:
      if ( ++v20 >= v23 )
        goto LABEL_37;
    }
    V_snprintf(
      szWarningMessage,
      260,
      "Invalid map '%s' included in map cycle file. Ignored.\n",
      CMultiplayRules::m_MapList.m_Memory.m_pMemory[v20]);
    Warning("%s", szWarningMessage);
LABEL_28:
    v21 = CMultiplayRules::m_MapList.m_Memory.m_pMemory[v20];
    if ( v21 != 0 )
      operator delete[](v21);
    v22 = CMultiplayRules::m_MapList.m_Size;
    if ( CMultiplayRules::m_MapList.m_Size - v20 - 1 > 0 )
    {
      memmove(
        &CMultiplayRules::m_MapList.m_Memory.m_pMemory[v20],
        &CMultiplayRules::m_MapList.m_Memory.m_pMemory[v20 + 1],
        8LL * (CMultiplayRules::m_MapList.m_Size - v20 - 1));
      v22 = CMultiplayRules::m_MapList.m_Size;
    }
    v23 = v22 - 1;
    --v20;
    CMultiplayRules::m_MapList.m_Size = v23;
    goto LABEL_33;
  }
  v16 = operator new[](0x20u);
  _V_strncpy(v16, gpGlobals->mapname, 32);
  v17 = CMultiplayRules::m_MapList.m_Size;
  v18 = CMultiplayRules::m_MapList.m_Size;
  if ( CMultiplayRules::m_MapList.m_Size == CMultiplayRules::m_MapList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<char *,int>::Grow(&CMultiplayRules::m_MapList.m_Memory, 1);
    v18 = CMultiplayRules::m_MapList.m_Size;
  }
  m_Size = v18 + 1;
  CMultiplayRules::m_MapList.m_Size = m_Size;
  v19 = &CMultiplayRules::m_MapList.m_Memory.m_pMemory[v17];
  if ( v19 != 0 )
  {
    *v19 = v16;
    m_Size = CMultiplayRules::m_MapList.m_Size;
  }
LABEL_12:
  if ( m_Size == 0 )
  {
    v12 = operator new[](0x20u);
    _V_strncpy(v12, gpGlobals->mapname, 32);
    v13 = CMultiplayRules::m_MapList.m_Size;
    v14 = CMultiplayRules::m_MapList.m_Size;
    if ( CMultiplayRules::m_MapList.m_Size == CMultiplayRules::m_MapList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&CMultiplayRules::m_MapList.m_Memory, 1);
      v14 = CMultiplayRules::m_MapList.m_Size;
    }
    CMultiplayRules::m_MapList.m_Size = v14 + 1;
    v15 = &CMultiplayRules::m_MapList.m_Memory.m_pMemory[v13];
    if ( v15 != 0 )
      *v15 = v12;
  }
  if ( bRandom )
  {
    v11 = RandomInt(0, (CMultiplayRules::m_MapList.m_Size - 1));
    CMultiplayRules::m_nMapCycleindex = v11;
  }
  else
  {
    v11 = CMultiplayRules::m_nMapCycleindex;
  }
  _V_strncpy(pszNextMap, CMultiplayRules::m_MapList.m_Memory.m_pMemory[v11], bufsize);
}


// CMultiplayRules::ChangeLevel  (line 1144, @0x0000000002288170, libserver.so)  // inlines: GetString, IncrementMapCycleIndex, V_strncpy<long unsigned int>
// calls: _V_strncpy, Msg, __stack_chk_fail
// strings: "FCVAR_NEVER_AS_STRING", "CHANGE LEVEL: %s\n"
// globals: CMultiplayRules::m_nMapCycleindex, CMultiplayRules::m_MapList
void __fastcall CMultiplayRules::ChangeLevel(CMultiplayRules *const this)
{
  char *m_pszString; // rax
  char *v3; // rsi
  char *v4; // rsi
  double v5; // xmm0_8
  char szNextMap[40]; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (nextlevel.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( nextlevel.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = nextlevel.m_pParent->m_Value.m_pszString;
  }
  if ( *m_pszString == 0 )
    goto LABEL_14;
  v3 = "FCVAR_NEVER_AS_STRING";
  if ( (nextlevel.m_nFlags & 0x1000) == 0 )
  {
    v3 = "";
    if ( nextlevel.m_pParent->m_Value.m_pszString != 0 )
      v3 = nextlevel.m_pParent->m_Value.m_pszString;
  }
  if ( (*(*engine + 152LL))(engine, v3) != 0 )
  {
    v4 = "FCVAR_NEVER_AS_STRING";
    if ( (nextlevel.m_nFlags & 0x1000) == 0 )
    {
      v4 = "";
      if ( nextlevel.m_pParent->m_Value.m_pszString != 0 )
        v4 = nextlevel.m_pParent->m_Value.m_pszString;
    }
    _V_strncpy(szNextMap, v4, 32);
  }
  else
  {
LABEL_14:
    (*(this->_vptr_CGameRules + 162))(this, szNextMap, 32, 0);
    if ( ++CMultiplayRules::m_nMapCycleindex >= CMultiplayRules::m_MapList.m_Size )
      CMultiplayRules::m_nMapCycleindex = 0;
  }
  g_fGameOver = 1;
  *&v5 = Msg("CHANGE LEVEL: %s\n", szNextMap).m128_u64[0];
  (*(*engine + 144LL))(engine, szNextMap, 0, v5);
}


// CMultiplayRules::LoadVoiceCommandScript  (line 1169, @0x00000000022a15c0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CUtlVector<VoiceCommandMenuItem_t> >, CopyConstruct<VoiceCommandMenuItem_t>, Element, GrowMemory, V_strncpy<long unsigned int>, operator[]
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::deleteThis, KeyValues::GetFirstSubKey, Warning, KeyValues::GetNextKey, KeyValues::GetString, GetMPConceptIndexFromString, KeyValues::GetInt, _V_strncpy, CUtlMemory<VoiceCommandMenuItem_t, int>::Grow (16 total)
// callers: CMultiplayRules::CMultiplayRules
// strings: "VoiceCommands", "scripts/voicecommands.txt", "Trying to load more than 9 menu items in voicecommands.txt, extras ignored", "show_subtitle", "distance_check_subtitle", "Voicecommand script attempting to use unknown concept. Need to define new concepts in cod
void __fastcall CMultiplayRules::LoadVoiceCommandScript(CMultiplayRules *const this)
{
  IBaseFileSystem *v2; // rsi
  __int64 m_Size; // rbx
  int v4; // eax
  __int64 v5; // r14
  CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int> > *v6; // rax
  int v7; // r12d
  KeyValues *FirstSubKey; // rbx
  const char *String; // rax
  int MPConceptIndexFromString; // r9d
  const char *v11; // rax
  CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int> > *v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  VoiceCommandMenuItem_t *v15; // rax
  const char *v16; // rax
  KeyValues *pKV; // [rsp+10h] [rbp-A0h]
  int v18; // [rsp+1Ch] [rbp-94h]
  CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int> > *iConcept; // [rsp+20h] [rbp-90h]
  const KeyValues *menu; // [rsp+28h] [rbp-88h]
  VoiceCommandMenuItem_t item; // [rsp+30h] [rbp-80h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  pKV = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(pKV, "VoiceCommands");
  v2 = 0;
  if ( filesystem != 0 )
    v2 = &filesystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(pKV, v2, "scripts/voicecommands.txt", "GAME", 0) )
  {
    menu = KeyValues::GetFirstSubKey(pKV);
    if ( menu != 0 )
    {
      while ( 1 )
      {
        m_Size = this->m_VoiceCommandMenus.m_Size;
        v4 = this->m_VoiceCommandMenus.m_Size;
        if ( m_Size == this->m_VoiceCommandMenus.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int>>,int>::Grow(
            &this->m_VoiceCommandMenus.m_Memory,
            1);
          v4 = this->m_VoiceCommandMenus.m_Size;
        }
        v5 = m_Size;
        this->m_VoiceCommandMenus.m_Size = v4 + 1;
        v6 = &this->m_VoiceCommandMenus.m_Memory.m_pMemory[m_Size];
        if ( v6 != 0 )
        {
          v6->m_Size = 0;
          v6->m_Memory.m_pMemory = 0;
          v6->m_Memory.m_nAllocationCount = 0;
          v6->m_Memory.m_nGrowSize = 0;
        }
        v7 = 0;
        FirstSubKey = KeyValues::GetFirstSubKey(menu);
        if ( FirstSubKey != 0 )
          break;
LABEL_21:
        menu = KeyValues::GetNextKey(menu);
        if ( menu == 0 )
          goto LABEL_4;
      }
      while ( 1 )
      {
        while ( ++v7 > 9 )
        {
          Warning("Trying to load more than 9 menu items in voicecommands.txt, extras ignored");
LABEL_13:
          FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          if ( FirstSubKey == 0 )
            goto LABEL_21;
        }
        String = KeyValues::GetString(FirstSubKey, "concept", "", 0, 0);
        MPConceptIndexFromString = GetMPConceptIndexFromString(String);
        if ( MPConceptIndexFromString == -1 )
        {
          v16 = KeyValues::GetString(FirstSubKey, "concept", "", 0, 0);
          Warning(
            "Voicecommand script attempting to use unknown concept. Need to define new concepts in code. ( %s )\n",
            v16);
          MPConceptIndexFromString = -1;
        }
        item.m_iConcept = MPConceptIndexFromString;
        item.m_bShowSubtitle = KeyValues::GetInt(FirstSubKey, "show_subtitle", 0) > 0;
        item.m_bDistanceBasedSubtitle = KeyValues::GetInt(FirstSubKey, "distance_check_subtitle", 0) > 0;
        v11 = KeyValues::GetString(FirstSubKey, "activity", "", 0, 0);
        _V_strncpy(item.m_szGestureActivity, v11, 64);
        v12 = &this->m_VoiceCommandMenus.m_Memory.m_pMemory[v5];
        v13 = v12->m_Size;
        v14 = v12->m_Size;
        if ( v13 == v12->m_Memory.m_nAllocationCount )
        {
          v18 = v12->m_Size;
          iConcept = &this->m_VoiceCommandMenus.m_Memory.m_pMemory[v5];
          CUtlMemory<VoiceCommandMenuItem_t,int>::Grow(&v12->m_Memory, 1);
          v12 = iConcept;
          v13 = v18;
          v14 = iConcept->m_Size;
        }
        v12->m_Size = v14 + 1;
        v15 = &v12->m_Memory.m_pMemory[v13];
        if ( v15 == 0 )
          goto LABEL_13;
        *v15 = item;
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          goto LABEL_21;
      }
    }
  }
LABEL_4:
  KeyValues::deleteThis(pKV);
}


// CMultiplayRules::IncrementMapCycleIndex  (line 1220, @0x000000000229b270, libserver.so)
// globals: CMultiplayRules::m_nMapCycleindex, CMultiplayRules::m_MapList
void __fastcall CMultiplayRules::IncrementMapCycleIndex(CMultiplayRules *const this)
{
  if ( ++CMultiplayRules::m_nMapCycleindex >= CMultiplayRules::m_MapList.m_Size )
    CMultiplayRules::m_nMapCycleindex = 0;
}


// CMultiplayRules::ClientCommand  (line 1229, @0x00000000022a50a0, libserver.so)  // inlines: Arg, CreateEvent, FStrEq, GetUserID, ToBasePlayer, _V_strcmp, atoi, entindex, operator[]
// calls: UTIL_GetAchievementEventMask, CEntityInstance::GetEntityIndex, strtol, __dynamic_cast, CGameRules::ClientCommand
// callers: CTeamplayRules::ClientCommand
// strings: "voicemenu", "achievement_earned", "achievement"
bool __fastcall CMultiplayRules::ClientCommand(
        CMultiplayRules *const this,
        CBaseEntity *pEdict,
        const CCommand *const args)
{
  char v6; // al
  CBaseEntity *v7; // r8
  __int64 m_nArgc; // rdx
  char *v9; // rax
  const char *v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  const char *v13; // rsi
  const char *v14; // rdi
  bool v15; // zf
  char v16; // r13
  int AchievementEventMask; // r14d
  CEntityIndex v18; // eax
  int v19; // eax
  const char *v20; // rdi
  int v21; // r15d
  int v22; // eax
  const char *v23; // rdi
  unsigned int v24; // r14d
  int v25; // r15d
  void *v27; // rbx
  unsigned int v28; // eax
  const char *v29; // rdi
  unsigned int v30; // r14d
  unsigned int v31; // eax
  int (**vptr_CGameRules)(...); // r8
  CMultiplayRules *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r12
  CEntityIndex v36; // eax
  void (__fastcall *v37)(__int64, char *, _QWORD); // [rsp+8h] [rbp-38h]

  if ( pEdict != 0 )
  {
    v6 = (*(pEdict->_vptr_IHandleEntity + 140))(pEdict);
    v7 = 0;
    if ( v6 != 0 )
      v7 = pEdict;
  }
  else
  {
    v7 = 0;
  }
  m_nArgc = args->m_nArgc;
  if ( m_nArgc > 0 )
  {
    v9 = args->m_ppArgv[0];
    v10 = "voicemenu";
    v11 = v9 == "voicemenu";
    if ( v9 == "voicemenu" )
      goto LABEL_37;
    v12 = 10;
    v13 = args->m_ppArgv[0];
    do
    {
      if ( v12 == 0 )
        break;
      v11 = *v13++ == *v10++;
      --v12;
    }
    while ( v11 );
    if ( v11 )
    {
LABEL_37:
      if ( m_nArgc > 2 && v7 != 0 )
      {
        v27 = __dynamic_cast(v7, &`typeinfo for'CBasePlayer, &`typeinfo for'CBaseMultiplayerPlayer, 0);
        if ( v27 != 0 )
        {
          v28 = strtol(args->m_ppArgv[1], 0, 10);
          v29 = "";
          v30 = v28;
          if ( args->m_nArgc > 2 )
            v29 = args->m_ppArgv[2];
          v31 = strtol(v29, 0, 10);
          vptr_CGameRules = this->_vptr_CGameRules;
          v33 = this;
          v16 = 1;
          vptr_CGameRules[157](v33, v27, v30, v31);
          return v16;
        }
      }
      return 1;
    }
    v14 = "achievement_earned";
    v15 = v9 == "achievement_earned";
    if ( v9 == "achievement_earned" )
      goto LABEL_21;
    v12 = 19;
    v13 = args->m_ppArgv[0];
    do
    {
      if ( v12 == 0 )
        break;
      v15 = *v13++ == *v14++;
      --v12;
    }
    while ( v15 );
    if ( v15 )
    {
LABEL_21:
      if ( pEdict != 0 )
      {
        v16 = (*(pEdict->_vptr_IHandleEntity + 500))(pEdict, v13, m_nArgc, v12, v7);
        if ( v16 != 0 )
        {
          AchievementEventMask = UTIL_GetAchievementEventMask();
          v18.m_Data = CEntityInstance::GetEntityIndex(pEdict).m_Data;
          v19 = (*(*engine + 224LL))(engine, (v18.m_Data - 1));
          v20 = "";
          v21 = v19;
          if ( args->m_nArgc > 1 )
            v20 = args->m_ppArgv[1];
          v22 = strtol(v20, 0, 10);
          v23 = "";
          v24 = v22 ^ AchievementEventMask;
          v25 = v22 ^ v21;
          if ( args->m_nArgc > 2 )
            v23 = args->m_ppArgv[2];
          if ( v25 == strtol(v23, 0, 10) )
          {
            v34 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "achievement_earned", 0, 0);
            v35 = v34;
            if ( v34 != 0 )
            {
              v37 = *(*v34 + 112LL);
              v36.m_Data = CEntityInstance::GetEntityIndex(pEdict).m_Data;
              v37(v35, "player", v36.m_Data);
              (*(*v35 + 112LL))(v35, "achievement", v24);
              (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v35, 0);
            }
            (*(pEdict->_vptr_IHandleEntity + 554))(pEdict, v24);
            return v16;
          }
        }
      }
      return 1;
    }
  }
  return CGameRules::ClientCommand(this, pEdict, args);
}


// CMultiplayRules::VoiceCommand  (line 1284, @0x00000000022a46f0, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CUserMessagePB, CUserMessageVoiceSubtitle_t, Element, FastSqrt, FindGameEvent<CUserMessageVoiceSubtitle_t>, FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>, Length2D, PostEvent<CUserMessageVoiceSubtitle_t>, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator-, operator[], set_has_item, set_has_player, set_item, set_menu, set_player, ~CEventPosterBase, ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageVoiceSubtitle_t
// calls: CMultiplayer_Expresser::AllowMultipleScenes, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CRecipientFilter::GetRecipientCount, CRecipientFilter::GetRecipientIndex, UTIL_PlayerByIndex, CRecipientFilter::RemoveRecipientByPlayerIndex, CRecipientFilter::AddAllPlayers, CBaseEntity::GetTeam, CRecipientFilter::RemoveRecipientsNotOnTeam, CUserMessageVoiceSubtitle::CUserMessageVoiceSubtitle, CEntityInstance::GetEntityIndex (18 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>(bool)::s_hEvent
VoiceCommandMenuItem_t *__fastcall CMultiplayRules::VoiceCommand(
        CMultiplayRules *const this,
        CBaseMultiplayerPlayer *pPlayer,
        int iMenu,
        int iItem)
{
  CUtlVector<VoiceCommandMenuItem_t,CUtlMemory<VoiceCommandMenuItem_t,int> > *v6; // rax
  int v7; // xmm1_4
  int v8; // ebx
  CEntityIndex v9; // r14d
  CBaseMultiplayerPlayer *v10; // rax
  CBaseMultiplayerPlayer *v11; // r13
  int v12; // xmm1_4
  CTeam *Team; // rax
  int v14; // eax
  IGameEventSystem *v15; // r14
  void (__fastcall *v16)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r13
  CMultiplayer_Expresser *pExpresser; // [rsp+18h] [rbp-2A8h]
  VoiceCommandMenuItem_t *pItem; // [rsp+20h] [rbp-2A0h]
  CRecipientFilter *iItemb; // [rsp+28h] [rbp-298h]
  __int64 iMenub; // [rsp+30h] [rbp-290h]
  unsigned int v23; // [rsp+38h] [rbp-288h]
  double v24; // [rsp+40h] [rbp-280h]
  CRecipientFilter *origin; // [rsp+50h] [rbp-270h] BYREF
  _QWORD origin_8[2]; // [rsp+58h] [rbp-268h] BYREF
  int v27; // [rsp+68h] [rbp-258h]
  CEntityIndex v28; // [rsp+70h] [rbp-250h]
  int v29; // [rsp+74h] [rbp-24Ch]
  int v30; // [rsp+78h] [rbp-248h]
  unsigned int v31; // [rsp+80h] [rbp-240h]
  char szResponse[192]; // [rsp+90h] [rbp-230h] BYREF
  CRecipientFilter filter; // [rsp+150h] [rbp-170h] BYREF
  unsigned __int64 v34; // [rsp+288h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  if ( pPlayer == 0 )
    return 0;
  if ( iMenu < 0 )
    return 0;
  if ( iMenu >= this->m_VoiceCommandMenus.m_Size )
    return 0;
  if ( iItem < 0 )
    return 0;
  v6 = &this->m_VoiceCommandMenus.m_Memory.m_pMemory[iMenu];
  if ( iItem >= v6->m_Size )
    return 0;
  pItem = &v6->m_Memory.m_pMemory[iItem];
  if ( (*(pPlayer->_vptr_IHandleEntity + 551))(pPlayer) == 0 )
    return 0;
  pExpresser = (*(pPlayer->_vptr_IHandleEntity + 555))(pPlayer);
  CMultiplayer_Expresser::AllowMultipleScenes(pExpresser);
  if ( (*(pPlayer->_vptr_IHandleEntity + 550))(pPlayer, pItem->m_iConcept, 0, szResponse, 192, 0) != 0 )
  {
    if ( pItem->m_bShowSubtitle )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      if ( pItem->m_bDistanceBasedSubtitle )
      {
        origin = COERCE_CRECIPIENTFILTER_((*(pPlayer->_vptr_IHandleEntity + 62))(pPlayer));
        LODWORD(origin_8[0]) = v7;
        CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
        v8 = CRecipientFilter::GetRecipientCount(&filter) - 1;
        if ( v8 >= 0 )
        {
          do
          {
            v9.m_Data = CRecipientFilter::GetRecipientIndex(&filter, v8).m_Data;
            v10 = UTIL_PlayerByIndex(v9);
            v11 = v10;
            if ( pPlayer != v10 && v10 != 0 )
            {
              origin = COERCE_CRECIPIENTFILTER_((*(pPlayer->_vptr_IHandleEntity + 62))(pPlayer));
              LODWORD(origin_8[0]) = v12;
              v24 = (*(v11->_vptr_IHandleEntity + 62))(v11);
              if ( fsqrt(
                     ((*&v24 - *&origin) * (*&v24 - *&origin))
                   + ((*(&v24 + 1) - *(&origin + 1)) * (*(&v24 + 1) - *(&origin + 1)))) > 1900.0 )
                CRecipientFilter::RemoveRecipientByPlayerIndex(&filter, v9.m_Data);
            }
            --v8;
          }
          while ( v8 != -1 );
        }
      }
      else
      {
        CRecipientFilter::AddAllPlayers(&filter);
      }
      if ( (*(pPlayer->_vptr_IHandleEntity + 552))(pPlayer) == 0 )
      {
        Team = CBaseEntity::GetTeam(pPlayer);
        CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, Team);
      }
      origin = &filter;
      CUserMessageVoiceSubtitle::CUserMessageVoiceSubtitle(origin_8);
      v31 = 0;
      origin_8[0] = off_4058750;
      v28.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
      v29 = iMenu;
      v14 = iItem;
      v27 |= 7u;
      iItemb = origin;
      v30 = v14;
      iMenub = IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>(bool)::s_hEvent;
      v15 = g_pGameEventSystem;
      v23 = v31;
      v16 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>(bool)::s_hEvent);
      v16(v15, v23, 0, iItemb, iMenub, origin_8, 40);
      origin_8[0] = &off_40585D0;
      CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle(origin_8);
      CRecipientFilter::~CRecipientFilter(&filter);
    }
    (*(pPlayer->_vptr_IHandleEntity + 553))(pPlayer, szResponse);
  }
  else
  {
    pItem = 0;
  }
  CMultiplayer_Expresser::DisallowMultipleScenes(pExpresser);
  return pItem;
}


// CMultiplayRules::IsLoadingBugBaitReport  (line 1370, @0x000000000229b2a0, libserver.so)  // inlines: GetBool, GetInt
// calls: CommandLine
// strings: "-bugbait"
bool __fastcall CMultiplayRules::IsLoadingBugBaitReport(CMultiplayRules *const this)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  bool result; // al
  __int64 v4; // rax

  result = (*(*engine + 160LL))(engine) == 0
        && (v4 = CommandLine(v1, v2), (*(*v4 + 24LL))(v4, "-bugbait", 0) != 0)
        && sv_cheats->m_pParent->m_Value.m_nValue != 0;
  return result;
}


// CMultiplayRules::HaveAllPlayersSpeakConceptIfAllowed  (line 1375, @0x000000000229b300, libserver.so)  // inlines: ToBaseMultiplayerPlayer
// calls: UTIL_PlayerByIndex
void __fastcall CMultiplayRules::HaveAllPlayersSpeakConceptIfAllowed(CMultiplayRules *const this, int iConcept)
{
  int v3; // ebx
  CBasePlayer *v4; // rax
  CBasePlayer *v5; // r12

  v3 = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      v4 = UTIL_PlayerByIndex(v3);
      v5 = v4;
      if ( v4 != 0 && (*(v4->_vptr_IHandleEntity + 140))(v4) != 0 )
        (*(v5->_vptr_IHandleEntity + 550))(v5, iConcept, 0, 0, 0, 0);
      ++v3;
    }
    while ( gpGlobals->maxClients >= v3 );
  }
}


// CMultiplayRules::GetTaggedConVarList  (line 1389, @0x00000000022858a0, libserver.so)
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetString, KeyValues::AddSubKey, KeyValues::operator delete, _Unwind_Resume
// strings: "sv_gravity"
void __fastcall CMultiplayRules::GetTaggedConVarList(CMultiplayRules *const this, KeyValues *pCvarTagList)
{
  KeyValues *v3; // rbx

  v3 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v3, "sv_gravity");
  KeyValues::SetString(v3, "convar", "sv_gravity");
  KeyValues::SetString(v3, "tag", "gravity");
  KeyValues::AddSubKey(pCvarTagList, v3);
}


// CSameTeamGroup::Less  (line 1445, @0x000000000229b380, libserver.so)
bool __fastcall CSameTeamGroup::Less(const CSameTeamGroup *const p1, const CSameTeamGroup *const p2)
{
  return p1->m_nScore > p2->m_nScore;
}


// CSameTeamGroup::CSameTeamGroup  (line 1451, @0x000000000229b390, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
void __fastcall CSameTeamGroup::CSameTeamGroup(CSameTeamGroup *const this)
{
  this->_vptr_CSameTeamGroup = &off_4058810;
  this->m_Players.m_Size = 0;
  this->m_Players.m_Memory.m_pMemory = 0;
  this->m_Players.m_Memory.m_nAllocationCount = 0;
  this->m_Players.m_Memory.m_nGrowSize = 0;
  this->m_nScore = 0x80000000;
}


// CSameTeamGroup::CSameTeamGroup  (line 1456, @0x00000000022a41e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CBasePlayer*, CUtlMemory<CBasePlayer*, int> >::SetCount, _Unwind_Resume, CUtlMemory<CBasePlayer*, int>::Purge
void __fastcall CSameTeamGroup::CSameTeamGroup(CSameTeamGroup *const this, const CSameTeamGroup *const src)
{
  CUtlVector<CBasePlayer*,CUtlMemory<CBasePlayer*,int> > *p_m_Players; // rdi
  int m_Size; // r13d
  unsigned __int64 v6; // rax

  p_m_Players = &this->m_Players;
  *&p_m_Players[-1].m_Memory.m_nAllocationCount = &off_4058810;
  p_m_Players->m_Size = 0;
  p_m_Players->m_Memory.m_pMemory = 0;
  p_m_Players->m_Memory.m_nAllocationCount = 0;
  p_m_Players->m_Memory.m_nGrowSize = 0;
  p_m_Players[1].m_Size = src->m_nScore;
  if ( p_m_Players != &src->m_Players )
  {
    m_Size = src->m_Players.m_Size;
    CUtlVectorBase<CBasePlayer *,CUtlMemory<CBasePlayer *,int>>::SetCount(p_m_Players, m_Size);
    if ( m_Size > 0 )
    {
      v6 = 0;
      do
      {
        this->m_Players.m_Memory.m_pMemory[v6 / 8] = src->m_Players.m_Memory.m_pMemory[v6 / 8];
        v6 += 8LL;
      }
      while ( v6 != 8LL * (m_Size - 1) + 8 );
    }
  }
}


// CSameTeamGroup::Score  (line 1462, @0x000000000229b3d0, libserver.so)
int __fastcall CSameTeamGroup::Score(const CSameTeamGroup *const this)
{
  return this->m_nScore;
}


// CSameTeamGroup::GetPlayer  (line 1467, @0x000000000229b3e0, libserver.so)  // inlines: operator[]
CBasePlayer *__fastcall CSameTeamGroup::GetPlayer(CSameTeamGroup *const this, int idx)
{
  return this->m_Players.m_Memory.m_pMemory[idx];
}


// CSameTeamGroup::Count  (line 1472, @0x000000000229b400, libserver.so)
int __fastcall CSameTeamGroup::Count(const CSameTeamGroup *const this)
{
  return this->m_Players.m_Size;
}


