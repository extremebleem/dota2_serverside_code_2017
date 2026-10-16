
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameConfiguration::CGameConfiguration  (line 31, @0x0000000001f00c50, libserver.so)  // inlines: CTier2AppSystem, CTier3AppSystem, CTier4AppSystem, CUtlMemory, CUtlVector, CUtlVectorBase
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
void __fastcall CGameConfiguration::CGameConfiguration(CGameConfiguration *const this)
{
  this->CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ClientConfig::IAppSystem::_vptr_IAppSystem = off_3FC3870;
  this->m_manualManifests.m_Size = 0;
  this->m_manualManifests.m_Memory.m_pMemory = 0;
  this->m_manualManifests.m_Memory.m_nAllocationCount = 0;
  this->m_manualManifests.m_Memory.m_nGrowSize = 0;
  this->m_nAppSysTier2LibraryConnects = 0;
  this->CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ServerConfig::IAppSystem::_vptr_IAppSystem = off_3FC39E8;
  this->m_pCurrentGameSessionConfigKeyValues = 0;
}


// CGameConfiguration::~CGameConfiguration  (line 39, @0x0000000001f00ca0, libserver.so)  // inlines: Purge, RemoveAll, ~CTier2AppSystem, ~CTier3AppSystem, ~CTier4AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::~KeyValues, KeyValues::operator delete, CUtlMemory<ResourceManifestDesc_t*, int>::Purge
// callers: CDOTAGameConfiguration::~CDOTAGameConfiguration
void __fastcall CGameConfiguration::~CGameConfiguration(CGameConfiguration *const this)
{
  KeyValues *m_pCurrentGameSessionConfigKeyValues; // r12
  bool v3; // zf

  m_pCurrentGameSessionConfigKeyValues = this->m_pCurrentGameSessionConfigKeyValues;
  this->CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ClientConfig::IAppSystem::_vptr_IAppSystem = off_3FC3870;
  this->CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ServerConfig::IAppSystem::_vptr_IAppSystem = off_3FC39E8;
  if ( m_pCurrentGameSessionConfigKeyValues != 0 )
  {
    KeyValues::~KeyValues(m_pCurrentGameSessionConfigKeyValues);
    KeyValues::operator delete(m_pCurrentGameSessionConfigKeyValues);
  }
  v3 = (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_pCurrentGameSessionConfigKeyValues = 0;
  this->CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ClientConfig::IAppSystem::_vptr_IAppSystem = off_3FC32D0;
  this->m_manualManifests.m_Size = 0;
  this->CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ServerConfig::IAppSystem::_vptr_IAppSystem = off_3FC33E0;
  if ( v3 )
  {
    CUtlMemory<ResourceManifestDesc_t *,int>::Purge(&this->m_manualManifests.m_Memory);
    if ( (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ResourceManifestDesc_t *,int>::Purge(&this->m_manualManifests.m_Memory);
  }
}


// CGameConfiguration::Init  (line 49, @0x0000000001f00b90, libserver.so)  // inlines: Init
// calls: MathLib_Init, CommandLine, InitializeCvars, RegisterConfigValues, ConVar_Register
// callers: CSource1GameConfiguration::Init
// strings: "-tickrate"
InitReturnVal_t __fastcall CGameConfiguration::Init(CGameConfiguration *const this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  float v4; // xmm0_4

  MathLib_Init();
  this->m_flTickIntervalOverride = -1.0;
  v2 = CommandLine();
  if ( (*(*v2 + 24LL))(v2, "-tickrate", 0) != 0 )
  {
    v3 = CommandLine();
    v4 = (*(*v3 + 88LL))(v3, "-tickrate", 0);
    if ( v4 > 10.0 )
      this->m_flTickIntervalOverride = 1.0 / v4;
  }
  InitializeCvars();
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CGameConfiguration::QueryInterface  (line 74, @0x0000000001f005f0, libserver.so)
// calls: V_stricmp_fast
// strings: "GameConfigServerV001"
void *__fastcall CGameConfiguration::QueryInterface(CGameConfiguration *const this, const char *pInterfaceName)
{
  int v3; // eax
  void *v4; // rdx

  v3 = V_stricmp_fast("GameConfigServerV001", pInterfaceName);
  v4 = 0;
  if ( v3 == 0 )
    return this;
  return v4;
}


// CGameConfiguration::GetGameDescription  (line 87, @0x0000000001effb20, libserver.so)
// strings: "Default Game Description"
const char *__fastcall CGameConfiguration::GetGameDescription(CGameConfiguration *const this)
{
  return "Default Game Description";
}


// CGameConfiguration::GetNetworkVersion  (line 92, @0x0000000001effb40, libserver.so)
int __fastcall CGameConfiguration::GetNetworkVersion(const CGameConfiguration *const this)
{
  return 1;
}


// CGameConfiguration::ValidateNetworkVersion  (line 97, @0x0000000001effb60, libserver.so)
bool __fastcall CGameConfiguration::ValidateNetworkVersion(const CGameConfiguration *const this, int version)
{
  return 1;
}


// CGameConfiguration::ChangeWorldMountNameByNetworkVersion  (line 102, @0x0000000001effb70, libserver.so)
const char *__fastcall CGameConfiguration::ChangeWorldMountNameByNetworkVersion(
        const CGameConfiguration *const this,
        const char *pWorldName,
        int version)
{
  return pWorldName;
}


// CGameConfiguration::GetHostStateLoopModeInfo  (line 107, @0x0000000001f00630, libserver.so)
// calls: CUtlString::operator=
// strings: "mainmenu"
void __fastcall CGameConfiguration::GetHostStateLoopModeInfo(
        CGameConfiguration *const this,
        HostStateLoopModeType_t type,
        CUtlString *const loopModeName,
        KeyValues **ppLoopModeOptions)
{
  *ppLoopModeOptions = 0;
  if ( type != HostStateLoopModeType_t::HOST_STATE_LOOP_MODE_IDLE )
  {
    if ( type == HostStateLoopModeType_t::HOST_STATE_LOOP_MODE_GAME )
      CUtlString::operator=(loopModeName, "game");
    else
      CUtlString::operator=(loopModeName, "console");
  }
  else
  {
    CUtlString::operator=(loopModeName, "mainmenu");
  }
}


// CGameConfiguration::GetTickInterval  (line 119, @0x0000000001effb80, libserver.so)
float __fastcall CGameConfiguration::GetTickInterval(CGameConfiguration *const this)
{
  __m128 v1; // xmm1
  __m128 v2; // xmm0
  float result; // xmm0_4

  v1.m128_i32[0] = LODWORD(this->m_flTickIntervalOverride);
  v2 = _mm_cmplt_ss(0LL, v1);
  LODWORD(result) = _mm_andnot_ps(v2, 0x3C888889u).m128_u32[0] | v1.m128_i32[0] & v2.m128_i32[0];
  return result;
}


// CGameConfiguration::GetPlayerLimits  (line 124, @0x0000000001effbc0, libserver.so)
void __fastcall CGameConfiguration::GetPlayerLimits(
        CGameConfiguration *const this,
        int *const minplayers,
        int *const maxplayers,
        int *const defaultMaxPlayers,
        bool *const bIsMultiplayer)
{
  *minplayers = 1;
  *maxplayers = 32;
  *defaultMaxPlayers = 32;
  *bIsMultiplayer = 1;
}


// CGameConfiguration::GetMaxSplitscreenPlayers  (line 133, @0x0000000001effbf0, libserver.so)
int __fastcall CGameConfiguration::GetMaxSplitscreenPlayers(CGameConfiguration *const this)
{
  return 2;
}


// CGameConfiguration::GetMaxHumanPlayers  (line 140, @0x0000000001effc10, libserver.so)
int __fastcall CGameConfiguration::GetMaxHumanPlayers(CGameConfiguration *const this)
{
  return -1;
}


// CGameConfiguration::ShouldNotifyLocalClientConnectionStateChanges  (line 145, @0x0000000001effc30, libserver.so)
bool __fastcall CGameConfiguration::ShouldNotifyLocalClientConnectionStateChanges(CGameConfiguration *const this)
{
  return 1;
}


// CGameConfiguration::AllowPlayerToTakeOverBots  (line 150, @0x0000000001effc50, libserver.so)
bool __fastcall CGameConfiguration::AllowPlayerToTakeOverBots(CGameConfiguration *const this)
{
  return 0;
}


// CGameConfiguration::AllowDedicatedServers  (line 155, @0x0000000001effc70, libserver.so)
bool __fastcall CGameConfiguration::AllowDedicatedServers(const CGameConfiguration *const this, EUniverse universe)
{
  return 1;
}


// CGameConfiguration::GetModName  (line 160, @0x0000000001effc90, libserver.so)
const char *__fastcall CGameConfiguration::GetModName(CGameConfiguration *const this)
{
  return (*(g_pApplication->_vptr_IAppSystem + 26))(g_pApplication);
}


// CGameConfiguration::ComputeMaxClients  (line 165, @0x0000000001f00d40, libserver.so)  // inlines: LeafCodeInfo_t, set_has_is_multiplayer, set_has_min_client_limit, set_is_multiplayer, set_max_client_limit, set_max_clients, set_min_client_limit
// calls: CommandLine, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CGameConfiguration::SetupGameSessionConfiguration
// strings: "-maxplayers", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/gamecon, "ComputeMaxClients", "GetPlayerLimits:  min maxplayers %i > max %i", "GetPlayerLimits:  min maxplayers must be >= 1 (%i)", "GetPlayerLimits:  default maxplayers must be >= 1 (%i)" (7 total)
void __fastcall CGameConfiguration::ComputeMaxClients(
        CGameConfiguration *const this,
        GameSessionConfiguration_t *pConfig)
{
  bool v3; // di
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  bool bIsMultiplayer; // [rsp+3h] [rbp-3Dh] BYREF
  int nMinClientLimit; // [rsp+4h] [rbp-3Ch] BYREF
  int nMaxClientLimit; // [rsp+8h] [rbp-38h] BYREF
  int nDefaultClientLimit; // [rsp+Ch] [rbp-34h] BYREF
  LeafCodeInfo_t v17; // [rsp+10h] [rbp-30h] BYREF

  if ( *(pConfig + 26) != 0 )
  {
    v3 = 0;
    v4 = 1;
    v5 = 1;
    v6 = 1;
    goto LABEL_3;
  }
  (*(this->CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ClientConfig::IAppSystem::_vptr_IAppSystem
   + 35))(
    this,
    &nMinClientLimit,
    &nMaxClientLimit,
    &nDefaultClientLimit,
    &bIsMultiplayer);
  if ( nMinClientLimit <= 0 )
    goto LABEL_25;
  if ( nDefaultClientLimit <= 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/gameconfiguration.cpp";
      v17.m_szFunction = "ComputeMaxClients";
      v17.m_nLine = 186;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v17,
        "GetPlayerLimits:  default maxplayers must be >= 1 (%i)",
        nMinClientLimit);
    }
    while ( 1 )
    {
LABEL_22:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v11, v12, v9, v10) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_25:
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v17.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/gameconfiguration.cpp";
        v17.m_szFunction = "ComputeMaxClients";
        v17.m_nLine = 182;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v17,
          "GetPlayerLimits:  min maxplayers must be >= 1 (%i)",
          nMinClientLimit);
      }
    }
  }
  if ( nMinClientLimit > nMaxClientLimit || nDefaultClientLimit > nMaxClientLimit )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/gameconfiguration.cpp";
      v17.m_szFunction = "ComputeMaxClients";
      v17.m_nLine = 191;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v17,
        "GetPlayerLimits:  min maxplayers %i > max %i",
        nMinClientLimit,
        nMaxClientLimit);
    }
    goto LABEL_22;
  }
  if ( nMaxClientLimit > 64 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/gameconfiguration.cpp";
      v17.m_szFunction = "ComputeMaxClients";
      v17.m_nLine = 196;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v17,
        "GetPlayerLimits:  max players limited to %i",
        64);
    }
    goto LABEL_22;
  }
  v8 = CommandLine();
  v4 = (*(*v8 + 88LL))(v8, "-maxplayers", 0xFFFFFFFFLL);
  if ( v4 <= 0 )
  {
    v4 = nDefaultClientLimit;
    v6 = nMinClientLimit;
    v5 = nMaxClientLimit;
  }
  else
  {
    v6 = nMinClientLimit;
    if ( v4 > nMaxClientLimit )
      v4 = nMaxClientLimit;
    v5 = nMinClientLimit;
    if ( v4 >= nMinClientLimit )
      v5 = v4;
  }
  if ( v4 > v5 )
  {
    v3 = bIsMultiplayer;
    v4 = v5;
  }
  else
  {
    v3 = bIsMultiplayer;
    if ( v6 >= v4 )
      v4 = v6;
  }
LABEL_3:
  v7 = *(pConfig + 4);
  *(pConfig + 7) = v6;
  *(pConfig + 8) = v5;
  *(pConfig + 9) = v4;
  *(pConfig + 24) = v3;
  *(pConfig + 4) = v7 | 0x71;
}


// CGameConfiguration::SetupGameSessionConfiguration  (line 222, @0x0000000001f01c10, libserver.so)  // inlines: GetBool, SetKeyValues, assign, clear, length, mutable_data, set_gamemode, set_has_data, set_has_gamemode, set_has_is_background_map, set_has_is_loadsavegame, set_has_is_localonly, set_has_is_multiplayer, set_has_is_transition, set_has_landmarkname, set_has_max_clients, set_has_previouslevel, set_has_s1_mapname, set_has_savegamename, set_has_tick_interval, set_is_background_map, set_is_headless, set_is_loadsavegame, set_is_localonly, set_is_multiplayer, set_is_transition, set_landmarkname, set_max_clients, set_previouslevel, set_s1_mapname, set_savegamename, set_tick_interval, size, ~CUtlBuffer, ~CUtlMemory
// calls: KeyValues::GetString, KeyValues::GetInt, strlen, std::string::assign(char const*,ulong), KeyValues::MakeCopy, KeyValues::deleteThis, CUtlBuffer::CUtlBuffer, KeyValues::WriteAsBinary, CUtlMemory<unsigned char, int>::Purge, CGameConfiguration::ComputeMaxClients, std::string::_M_mutate(ulong,ulong,ulong), _Unwind_Resume
// callers: CDOTAGameConfiguration::SetupGameSessionConfiguration
// strings: "levelname", "savegame", "landmarkname", "previouslevel", "map_background", "headless" (7 total)
bool __fastcall CGameConfiguration::SetupGameSessionConfiguration(
        CGameConfiguration *const this,
        KeyValues *pKeyValues,
        GameSessionConfiguration_t *pGameSessionConfig)
{
  const char *String; // r15
  const char *v7; // r14
  size_t v8; // rax
  float v9; // xmm0_4
  std::string *v10; // rdi
  int v11; // eax
  bool v12; // dl
  int v13; // eax
  size_t v14; // rax
  int v15; // eax
  KeyValues *Copy; // rax
  KeyValues *v17; // rdi
  KeyValues *v18; // r12
  unsigned __int64 m_Put; // rdx
  __int64 v20; // rax
  char v21; // al
  int v22; // edx
  int v23; // edx
  int v25; // eax
  size_t v26; // rax
  size_t v27; // rax
  const char *pPreviousLevel; // [rsp+8h] [rbp-98h]
  bool bIsLocalOnly; // [rsp+15h] [rbp-8Bh]
  bool bIsHeadless; // [rsp+16h] [rbp-8Ah]
  bool bIsBackgroundMap; // [rsp+17h] [rbp-89h]
  const char *pWorldName; // [rsp+18h] [rbp-88h]
  CUtlBuffer buffer; // [rsp+20h] [rbp-80h] BYREF

  pWorldName = KeyValues::GetString(pKeyValues, "levelname", "", 0, 0);
  String = KeyValues::GetString(pKeyValues, "savegame", "", 0, 0);
  v7 = KeyValues::GetString(pKeyValues, "landmarkname", "", 0, 0);
  pPreviousLevel = KeyValues::GetString(pKeyValues, "previouslevel", "", 0, 0);
  bIsBackgroundMap = KeyValues::GetInt(pKeyValues, "map_background", 0) != 0;
  bIsHeadless = KeyValues::GetInt(pKeyValues, "headless", 0) != 0;
  bIsLocalOnly = KeyValues::GetInt(pKeyValues, "localonly", 0) != 0;
  *(pGameSessionConfig + 4) |= 0x400u;
  v8 = strlen(pWorldName);
  std::string::assign(*(pGameSessionConfig + 7), pWorldName, v8);
  v9 = (*(this->CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ClientConfig::IAppSystem::_vptr_IAppSystem
        + 34))(this);
  v10 = *(pGameSessionConfig + 8);
  v11 = *(pGameSessionConfig + 4) | 0x880;
  *(pGameSessionConfig + 20) = v9;
  *(pGameSessionConfig + 4) = v11;
  std::string::assign(v10, "deathmatch", 0xAu);
  v12 = String != 0 && *String != 0;
  v13 = *(pGameSessionConfig + 4);
  *(pGameSessionConfig + 25) = v12;
  *(pGameSessionConfig + 4) = v13 | 0x202;
  v14 = strlen(String);
  std::string::assign(*(pGameSessionConfig + 6), String, v14);
  v15 = *(pGameSessionConfig + 4) | 0x400C;
  *(pGameSessionConfig + 26) = bIsBackgroundMap;
  *(pGameSessionConfig + 4) = v15;
  *(pGameSessionConfig + 27) = bIsHeadless;
  *(pGameSessionConfig + 84) = bIsLocalOnly;
  Copy = KeyValues::MakeCopy(pKeyValues);
  v17 = *(pGameSessionConfig + 14);
  v18 = Copy;
  if ( v17 != 0 )
  {
    KeyValues::deleteThis(v17);
    *(pGameSessionConfig + 14) = 0;
  }
  if ( v18 != 0 )
  {
    *(pGameSessionConfig + 14) = v18;
    CUtlBuffer::CUtlBuffer(&buffer, 0, 0, 0);
    KeyValues::WriteAsBinary(*(pGameSessionConfig + 14), &buffer);
    m_Put = buffer.m_Put;
    *(pGameSessionConfig + 4) |= 0x2000u;
    std::string::assign(*(pGameSessionConfig + 11), buffer.m_Memory.m_pMemory, m_Put);
    CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
  }
  else
  {
    *(pGameSessionConfig + 4) |= 0x2000u;
    std::string::_M_mutate(*(pGameSessionConfig + 11), 0, *(**(pGameSessionConfig + 11) - 24LL), 0);
  }
  if ( v7 != 0 && *v7 != 0 )
  {
    v25 = *(pGameSessionConfig + 4);
    *(pGameSessionConfig + 85) = 1;
    *(pGameSessionConfig + 4) = v25 | 0x18000;
    v26 = strlen(pPreviousLevel);
    std::string::assign(*(pGameSessionConfig + 12), pPreviousLevel, v26);
    *(pGameSessionConfig + 4) |= 0x20000u;
    v27 = strlen(v7);
    std::string::assign(*(pGameSessionConfig + 13), v7, v27);
  }
  else
  {
    *(pGameSessionConfig + 4) |= 0x8000u;
    *(pGameSessionConfig + 85) = 0;
  }
  CGameConfiguration::ComputeMaxClients(this, pGameSessionConfig);
  if ( *(pGameSessionConfig + 24) == 0 )
  {
    if ( g_pMatchFramework == 0 )
    {
      v23 = *(pGameSessionConfig + 4);
      goto LABEL_13;
    }
    v20 = (*(*g_pMatchFramework + 112LL))(g_pMatchFramework);
    v21 = (*(*v20 + 24LL))(v20);
    v22 = *(pGameSessionConfig + 4);
    *(pGameSessionConfig + 24) = v21;
    v23 = v22 | 1;
    *(pGameSessionConfig + 4) = v23;
    if ( v21 == 0 )
    {
LABEL_13:
      *(pGameSessionConfig + 9) = 1;
      *(pGameSessionConfig + 4) = v23 | 0x40;
    }
  }
  return 1;
}


// CGameConfiguration::InitGameSession  (line 271, @0x0000000001f01f50, libserver.so)  // inlines: GetKeyValues, IndexToIdentity, IsInList, IsUsed, LeafCodeInfo_t, PreservePlayerNetworkables, Unlink, _M_data, _M_rep, size, ~CUtlBuffer, ~CUtlMemory
// calls: LoggingSystem_IsChannelEnabled, CEntitySystem::ClearEntityIOEvents, KeyValues::~KeyValues, KeyValues::operator delete, KeyValues::MakeCopy, LoggingSystem_Log, CUtlBuffer::CUtlBuffer, CUtlBuffer::Put, KeyValues::operator new, KeyValues::KeyValues, KeyValues::ReadAsBinary, CUtlMemory<unsigned char, int>::Purge (16 total)
// callers: CSource1GameConfiguration::InitGameSession
// strings: "SV:  PreservePlayerNetworkables(%d)\n", "Base_CmdKeyValues", "../../public/entity2/concreteentitylist.h", "PreservePlayerNetworkables", "PreservePlayerNetworkables called but slot %d is in use!!!\n"
bool __fastcall CGameConfiguration::InitGameSession(
        CGameConfiguration *const this,
        const GameSessionConfiguration_t *const gameSessionConfig)
{
  int v4; // r13d
  int v5; // esi
  CEntitySystem *v6; // rdi
  CEntityIdentity *v7; // rax
  CEntityIdentity *m_pPrev; // rdx
  CEntityIdentity *m_pNext; // rdx
  KeyValues *m_pCurrentGameSessionConfigKeyValues; // r13
  const KeyValues *v11; // r13
  KeyValues *v13; // r13
  __int64 v14; // r13
  KeyValues *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  KeyValues *v20; // r13
  CUtlBuffer buffer; // [rsp+10h] [rbp-70h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
    LoggingSystem_Log(LOG_SERVER, 0, "SV:  PreservePlayerNetworkables(%d)\n", *(gameSessionConfig + 9));
  v4 = 0;
  v5 = *(gameSessionConfig + 9);
  v6 = g_pEntitySystem;
  g_pEntitySystem->m_EntityList.m_nMaxPlayers = v5;
  if ( v5 >= 0 )
  {
    do
    {
      if ( (v4 >> 9) <= 0x3F )
      {
        v7 = v6->m_EntityList.m_pIdentityChunks[v4 >> 9];
        if ( v7 != 0 )
        {
          v7 += v4 & 0x1FF;
          if ( v7 != 0 && (v7->m_EHandle.m_Index & 0x7FFF) == v4 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_30;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v18, v19, v16, v17) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_30:
              buffer.m_Memory.m_pMemory = "../../public/entity2/concreteentitylist.h";
              *&buffer.m_Get = "PreservePlayerNetworkables";
              buffer.m_Memory.m_nAllocationCount = 687;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &buffer,
                "PreservePlayerNetworkables called but slot %d is in use!!!\n",
                v4);
            }
          }
        }
      }
      else
      {
        v7 = 0;
      }
      m_pPrev = v7->m_pPrev;
      if ( v7 != m_pPrev )
      {
        if ( m_pPrev != 0 )
          m_pPrev->m_pNext = v7->m_pNext;
        else
          v6->m_EntityList.m_freeNetworkableList.m_pHead = v7->m_pNext;
        m_pNext = v7->m_pNext;
        if ( m_pNext != 0 )
          m_pNext->m_pPrev = v7->m_pPrev;
        else
          v6->m_EntityList.m_freeNetworkableList.m_pTail = v7->m_pPrev;
        v7->m_pPrev = v7;
        v7->m_pNext = v7;
      }
      ++v4;
    }
    while ( v5 >= v4 );
  }
  CEntitySystem::ClearEntityIOEvents(v6);
  m_pCurrentGameSessionConfigKeyValues = this->m_pCurrentGameSessionConfigKeyValues;
  if ( m_pCurrentGameSessionConfigKeyValues != 0 )
  {
    KeyValues::~KeyValues(this->m_pCurrentGameSessionConfigKeyValues);
    KeyValues::operator delete(m_pCurrentGameSessionConfigKeyValues);
  }
  v11 = *(gameSessionConfig + 14);
  if ( v11 == 0 )
  {
    CUtlBuffer::CUtlBuffer(&buffer, 0, 0, 0);
    CUtlBuffer::Put(&buffer, **(gameSessionConfig + 11), *(**(gameSessionConfig + 11) - 24LL));
    v13 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v13, "Base_CmdKeyValues");
    *(gameSessionConfig + 14) = v13;
    KeyValues::ReadAsBinary(v13, &buffer);
    v14 = *(gameSessionConfig + 14);
    CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
    if ( v14 == 0 )
    {
      v15 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v15, "");
      this->m_pCurrentGameSessionConfigKeyValues = v15;
      return 1;
    }
    v11 = *(gameSessionConfig + 14);
    if ( v11 == 0 )
    {
      CUtlBuffer::CUtlBuffer(&buffer, 0, 0, 0);
      CUtlBuffer::Put(&buffer, **(gameSessionConfig + 11), *(**(gameSessionConfig + 11) - 24LL));
      v20 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v20, "Base_CmdKeyValues");
      *(gameSessionConfig + 14) = v20;
      KeyValues::ReadAsBinary(v20, &buffer);
      v11 = *(gameSessionConfig + 14);
      CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
    }
  }
  this->m_pCurrentGameSessionConfigKeyValues = KeyValues::MakeCopy(v11);
  return 1;
}


// CGameConfiguration::ShutdownGameSession  (line 299, @0x0000000001f006c0, libserver.so)
// calls: KeyValues::~KeyValues, KeyValues::operator delete
void __fastcall CGameConfiguration::ShutdownGameSession(CGameConfiguration *const this)
{
  KeyValues *m_pCurrentGameSessionConfigKeyValues; // rbx

  m_pCurrentGameSessionConfigKeyValues = this->m_pCurrentGameSessionConfigKeyValues;
  if ( m_pCurrentGameSessionConfigKeyValues != 0 )
  {
    KeyValues::~KeyValues(this->m_pCurrentGameSessionConfigKeyValues);
    KeyValues::operator delete(m_pCurrentGameSessionConfigKeyValues);
  }
  this->m_pCurrentGameSessionConfigKeyValues = 0;
}


// CGameConfiguration::ShouldPreserveEntityForRespawn  (line 306, @0x0000000001f00710, libserver.so)
// calls: V_stricmp_fast
// strings: "worldent", "soundent"
bool __fastcall CGameConfiguration::ShouldPreserveEntityForRespawn(
        CGameConfiguration *const this,
        const char *pClassName)
{
  return V_stricmp_fast(pClassName, "player") == 0
      || V_stricmp_fast(pClassName, "worldent") == 0
      || V_stricmp_fast(pClassName, "soundent") == 0
      || V_stricmp_fast(pClassName, "player_manager") == 0;
}


// CGameConfiguration::LoopPostInitAllGameSystems  (line 312, @0x0000000001effcb0, libserver.so)
// callers: CDOTAGameConfiguration::LoopPostInitAllGameSystems
bool __fastcall CGameConfiguration::LoopPostInitAllGameSystems(
        CGameConfiguration *const this,
        const GameSessionConfiguration_t *const config,
        ILoopModePrerequisiteRegistry *pRegistry)
{
  return 1;
}


// CGameConfiguration::AllocateScratchRenderTargets  (line 319, @0x0000000001effcc0, libserver.so)  // inlines: SceneScratchRenderTargetInfo_t
// decompilation failed: call analysis failed

// CGameConfiguration::GetDesiredRenderingPipeline  (line 411, @0x0000000001f00530, libserver.so)
CUtlStringToken __fastcall CGameConfiguration::GetDesiredRenderingPipeline(CGameConfiguration *const this)
{
  return 452843218;
}


// CGameConfiguration::ExecuteURL  (line 417, @0x0000000001f02290, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Clear, Construct<URLArgument_t>, Destruct<URLArgument_t>, Element, GrowMemory, Purge, RemoveAll, URLArgument_t, V_strlen, operator[], ~CUtlBuffer, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~URLArgument_t
// calls: CUtlBuffer::CUtlBuffer, strlen, CUtlBuffer::Put, V_URLDecode, CUtlString::operator=, CUtlMemory<unsigned char, int>::Purge, CUtlString::FreeMemoryBlock, CUtlBuffer::AddNullTermination, CUtlMemory<URLArgument_t, int>::Grow, CUtlMemory<URLArgument_t, int>::Purge, CUtlVectorBase<URLArgument_t, CUtlMemory<URLArgument_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CGameConfiguration::ExecuteURL(CGameConfiguration *const this, const char *pURL)
{
  int v3; // eax
  int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // rsi
  char v7; // cl
  int v8; // eax
  char v9; // al
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  URLArgument_t *v13; // rdx
  URLArgument_t *v14; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // r12d
  __int64 i; // r13
  CUtlString *v19; // rbx
  int m_Size; // eax
  __int64 v21; // r15
  URLArgument_t *v22; // rax
  URLArgument_t *v23; // r15
  int v24; // eax
  int v25; // eax
  int nURLLen; // [rsp+24h] [rbp-FCh]
  CUtlVector<URLArgument_t,CUtlMemory<URLArgument_t,int> > urlArguments; // [rsp+30h] [rbp-F0h] BYREF
  CUtlBuffer bufParamName; // [rsp+50h] [rbp-D0h] BYREF
  CUtlBuffer bufParamValue; // [rsp+A0h] [rbp-80h] BYREF

  urlArguments.m_Size = 0;
  urlArguments.m_Memory.m_pMemory = 0;
  urlArguments.m_Memory.m_nAllocationCount = 0;
  urlArguments.m_Memory.m_nGrowSize = 0;
  CUtlBuffer::CUtlBuffer(&bufParamName, 0, 64, 0);
  CUtlBuffer::CUtlBuffer(&bufParamValue, 0, 128, 0);
  if ( pURL != 0 )
  {
    v3 = strlen(pURL);
    nURLLen = v3;
    if ( v3 != 0 )
    {
      if ( *pURL == 63 )
      {
        ++pURL;
        nURLLen = v3 - 1;
      }
      if ( nURLLen > 0 )
      {
        if ( pURL[nURLLen - 1] != 47 || (--nURLLen, nURLLen != 0) )
        {
          v4 = 1;
          v5 = 0;
          v6 = 0;
          v7 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              v9 = pURL[v5];
              if ( v9 == 61 )
                break;
              if ( v9 == 38 )
              {
                if ( v7 != 0 )
                {
                  CUtlBuffer::Put(&bufParamValue, &pURL[v6], v5 - v6);
                  m_Size = urlArguments.m_Size;
                  if ( urlArguments.m_Size == urlArguments.m_Memory.m_nAllocationCount )
                  {
                    CUtlMemory<URLArgument_t,int>::Grow(&urlArguments.m_Memory, 1);
                    m_Size = urlArguments.m_Size;
                  }
                  v21 = urlArguments.m_Size;
                  urlArguments.m_Size = m_Size + 1;
                  v22 = &urlArguments.m_Memory.m_pMemory[v21];
                  if ( &urlArguments.m_Memory.m_pMemory[v21] != 0 )
                  {
                    v22->m_name.m_pString = 0;
                    v22->m_value.m_pString = 0;
                    v23 = &urlArguments.m_Memory.m_pMemory[v21];
                  }
                  else
                  {
                    v23 = 0;
                  }
                  v24 = V_URLDecode(
                          bufParamName.m_Memory.m_pMemory,
                          bufParamName.m_Put,
                          bufParamName.m_Memory.m_pMemory,
                          bufParamName.m_Put);
                  bufParamName.m_Memory.m_pMemory[v24] = 0;
                  CUtlString::operator=(&v23->m_name, bufParamName.m_Memory.m_pMemory);
                  v25 = V_URLDecode(
                          bufParamValue.m_Memory.m_pMemory,
                          bufParamValue.m_Put,
                          bufParamValue.m_Memory.m_pMemory,
                          bufParamValue.m_Put);
                  bufParamValue.m_Memory.m_pMemory[v25] = 0;
                  CUtlString::operator=(&v23->m_value, bufParamValue.m_Memory.m_pMemory);
                }
                bufParamName.m_Get = 0;
                bufParamName.m_Error = 0;
                bufParamName.m_Put = 0;
                bufParamName.m_nOffset = 0;
                bufParamName.m_nMaxPut = -1;
                CUtlBuffer::AddNullTermination(&bufParamName);
                bufParamValue.m_Get = 0;
                bufParamValue.m_Put = 0;
                bufParamValue.m_Error = 0;
                bufParamValue.m_nOffset = 0;
                bufParamValue.m_nMaxPut = -1;
                CUtlBuffer::AddNullTermination(&bufParamValue);
                v6 = v4;
                v8 = v4;
                v7 = 0;
                goto LABEL_10;
              }
LABEL_9:
              v8 = v4;
LABEL_10:
              ++v5;
              ++v4;
              if ( nURLLen <= v8 )
                goto LABEL_14;
            }
            if ( v7 != 0 )
              goto LABEL_9;
            CUtlBuffer::Put(&bufParamName, &pURL[v6], v5 - v6);
            v10 = v4;
            v6 = v4;
            ++v5;
            ++v4;
            v7 = 1;
            if ( nURLLen <= v10 )
            {
LABEL_14:
              if ( v7 != 0 )
              {
                CUtlBuffer::Put(&bufParamValue, &pURL[v6], nURLLen - v6);
                v11 = urlArguments.m_Size;
                v12 = urlArguments.m_Size;
                if ( urlArguments.m_Size == urlArguments.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<URLArgument_t,int>::Grow(&urlArguments.m_Memory, 1);
                  v12 = urlArguments.m_Size;
                }
                urlArguments.m_Size = v12 + 1;
                v13 = &urlArguments.m_Memory.m_pMemory[v11];
                if ( v13 != 0 )
                {
                  v13->m_name.m_pString = 0;
                  v13->m_value.m_pString = 0;
                  v14 = &urlArguments.m_Memory.m_pMemory[v11];
                }
                else
                {
                  v14 = 0;
                }
                v15 = V_URLDecode(
                        bufParamName.m_Memory.m_pMemory,
                        bufParamName.m_Put,
                        bufParamName.m_Memory.m_pMemory,
                        bufParamName.m_Put);
                bufParamName.m_Memory.m_pMemory[v15] = 0;
                CUtlString::operator=(&v14->m_name, bufParamName.m_Memory.m_pMemory);
                v16 = V_URLDecode(
                        bufParamValue.m_Memory.m_pMemory,
                        bufParamValue.m_Put,
                        bufParamValue.m_Memory.m_pMemory,
                        bufParamValue.m_Put);
                bufParamValue.m_Memory.m_pMemory[v16] = 0;
                CUtlString::operator=(&v14->m_value, bufParamValue.m_Memory.m_pMemory);
              }
              break;
            }
          }
        }
      }
    }
  }
  if ( urlArguments.m_Size > 0 )
    (*(this->CTier4AppSystem<IGameConfiguration,0>::CTier3AppSystem<IGameConfiguration,0>::CTier2AppSystem<IGameConfiguration,0>::CTier1AppSystem<IGameConfiguration,0>::CTier0AppSystem<IGameConfiguration>::CBaseAppSystem<IGameConfiguration>::IGameConfiguration::ISource2ClientConfig::IAppSystem::_vptr_IAppSystem
     + 44))(
      this,
      urlArguments.m_Size,
      urlArguments.m_Memory.m_pMemory);
  CUtlMemory<unsigned char,int>::Purge(&bufParamValue.m_Memory);
  CUtlMemory<unsigned char,int>::Purge(&bufParamName.m_Memory);
  v17 = urlArguments.m_Size;
  for ( i = 16LL * urlArguments.m_Size - 16; --v17 >= 0; i -= 16 )
  {
    v19 = (&urlArguments.m_Memory.m_pMemory->m_name + i);
    if ( *(&urlArguments.m_Memory.m_pMemory->m_value.m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock(v19 + 1);
    if ( v19->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v19);
  }
  if ( (urlArguments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<URLArgument_t,int>::Purge(&urlArguments.m_Memory);
    if ( (urlArguments.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<URLArgument_t,int>::Purge(&urlArguments.m_Memory);
  }
}


// CGameConfiguration::ExecuteURL  (line 498, @0x0000000001f00540, libserver.so)
// callers: CDOTAGameConfiguration::ExecuteURL
void __fastcall CGameConfiguration::ExecuteURL(
        CGameConfiguration *const this,
        int nURLArgCount,
        const URLArgument_t *pURLArgs)
{
  ;
}


// CGameConfiguration::GetBugReportLaunchURLParameters  (line 528, @0x0000000001f00550, libserver.so)
// callers: CDOTAGameConfiguration::GetBugReportLaunchURLParameters
void __fastcall CGameConfiguration::GetBugReportLaunchURLParameters(CGameConfiguration *const this, KeyValues *pArgsKV)
{
  ;
}


// CGameConfiguration::GetStringTableDefs  (line 532, @0x0000000001f00700, libserver.so)
// calls: CEntityIdentity::GetStringTableDefs
// callers: CSource1GameConfiguration::GetStringTableDefs
void __fastcall CGameConfiguration::GetStringTableDefs(
        CGameConfiguration *const this,
        CUtlVector<StringTableDef_t,CUtlMemory<StringTableDef_t,int> > *const list)
{
  CEntityIdentity::GetStringTableDefs(1, list);
}


// CGameConfiguration::IsUserMessage  (line 537, @0x0000000001f00560, libserver.so)
// callers: CSource1GameConfiguration::IsUserMessage
bool __fastcall CGameConfiguration::IsUserMessage(const CGameConfiguration *const this, int nMessageId)
{
  return 0;
}


// CGameConfiguration::GetConVarPrefixesToResetToDefaults  (line 543, @0x0000000001f00690, libserver.so)
// calls: CUtlString::operator+=
// callers: CDOTAGameConfiguration::GetConVarPrefixesToResetToDefaults
// strings: ";sv_pausable;sv_cheats"
void __fastcall CGameConfiguration::GetConVarPrefixesToResetToDefaults(
        const CGameConfiguration *const this,
        CUtlString *const sSemicolonDelimitedPrefixList)
{
  CUtlString::operator+=(sSemicolonDelimitedPrefixList, ";sv_pausable;sv_cheats");
}


// CGameConfiguration::AllowSaveRestore  (line 548, @0x0000000001f00570, libserver.so)
bool __fastcall CGameConfiguration::AllowSaveRestore(const CGameConfiguration *const this)
{
  return 0;
}


