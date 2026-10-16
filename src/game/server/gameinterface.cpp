// Reconstructed from DWARF by pahole; not original source.

// src/game/server/gameinterface.cpp:363
class CUserMessageInstrumentation {
	long int m_iCount;  // +0x0
	long int m_iSize;  // +0x8
	CUserMessageInstrumentation();
	long int GetAverageSize();

	// sizeof = 16
};

// src/game/server/gameinterface.cpp:381
class CNetGraphInfo {
	float m_flHighestIncoming;  // +0x0

	double m_flAverageIncoming;  // +0x8
	float m_flHighestOutgoing;  // +0x10

	double m_flAverageOutgoing;  // +0x18
	long int m_iSamples;  // +0x20
	void Reset();
	float GetAverageIncoming();
	float GetAverageOutgoing();

	// sizeof = 40
};

// src/game/server/gameinterface.cpp:2846
class CSource2GameEntities : public CGameAppSystem<ISource2GameEntities, 0> {
public:

private:

	bool m_bSteadyStateEnabled;  // +0x24

	float m_flSteadyStateChangeTime;  // +0x28
	CSource2GameEntities(CSource2GameEntities &);
	CSource2GameEntities(const CSource2GameEntities &);
	CSource2GameEntities();
	virtual void FreeContainingEntity(CEntityIndex);
	virtual void CheckTransmit(CCheckTransmitInfo * *, int, CBitVec<16384> &, const Entity2Networkable_t * *, const short unsigned int *, int);
	virtual void PrepareForFullUpdate(CEntityIndex);
	virtual bool GetWorldspaceCenter(CEntityIndex, Vector *);
	virtual bool ShouldClientReceiveStringTableUserData(const INetworkStringTable *, int, const CCheckTransmitInfo *);
	virtual void ResetChangeAccessorsSerialNumbersToZero();
	void CheckEntities(CGameCheckTransmitInfo &, int, const Entity2Networkable_t * *, const short unsigned int *, const uint8 *, int, bool);
	virtual ~CSource2GameEntities();

	// vtable[15] FreeContainingEntity
	// vtable[13] CheckTransmit
	// vtable[14] PrepareForFullUpdate
	// vtable[16] GetWorldspaceCenter
	// vtable[17] ShouldClientReceiveStringTableUserData
	// vtable[18] ResetChangeAccessorsSerialNumbersToZero
	// sizeof = 48
};

// src/game/server/gameinterface.cpp:3247
struct TeamSharePVS_t {
	int m_nTeamNumber;  // +0x0

	bool Less(const TeamSharePVS_t &, const TeamSharePVS_t &);

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Steam3Server  (line 324, @0x0000000002230190, libserver.so)
// callers: CSource1GameConfiguration::ShutdownGameSession, CDOTA_OGS_VPROF::OnGameStart, CreateHTTPRequest
// globals: s_Steam3Server
CSteam3ServerGameS1 *__cdecl Steam3Server()
{
  return &s_Steam3Server;
}


// CSteam3ServerGameS1::CSteam3ServerGameS1  (line 332, @0x00000000022301a0, libserver.so)  // inlines: CSteamGameServerAPIContext, Clear
void __fastcall CSteam3ServerGameS1::CSteam3ServerGameS1(CSteam3ServerGameS1 *const this)
{
  this->m_pSteamClient = 0;
  this->m_pSteamGameServer = 0;
  this->m_pSteamGameServerUtils = 0;
  this->m_pSteamGameServerNetworking = 0;
  this->m_pSteamGameServerStats = 0;
  this->m_pSteamHTTP = 0;
  this->m_pSteamInventory = 0;
  this->m_pSteamUGC = 0;
  this->m_pSteamApps = 0;
  this->m_bInitialized = 0;
}


// ClientPutInServerOverride  (line 351, @0x0000000002230200, libserver.so)
// globals: g_pClientPutInServerOverride
void __fastcall ClientPutInServerOverride(ClientPutInServerOverrideFn fn)
{
  g_pClientPutInServerOverride = fn;
}


// IsPressDemoMode  (line 358, @0x0000000002230210, libserver.so)
// callers: CLogicAuto::Think
// globals: g_bPressDemoMode
bool __cdecl IsPressDemoMode()
{
  return g_bPressDemoMode;
}


// CSource2Server::SampleNetDebugInfo  (line 406, @0x0000000002230220, libserver.so)  // inlines: GetBool, GetInt
// callers: CSource2Server::GameFrame
// globals: engine, g_NetGraphInfo
void __fastcall CSource2Server::SampleNetDebugInfo(CSource2Server *const this)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  float v3; // xmm0_4
  float v4; // [rsp-8h] [rbp-1Ch]

  if ( net_debug_to_file.m_pParent->m_Value.m_nValue != 0 )
  {
    v1 = (*(*engine + 240LL))(engine, 1);
    v2 = v1;
    if ( v1 != 0 )
    {
      v4 = 0.0009765625 * (*(*v1 + 128LL))(v1, 1);
      v3 = (*(*v2 + 128LL))(v2, 0) * 0.0009765625;
      if ( v4 > g_NetGraphInfo.m_flHighestIncoming )
        g_NetGraphInfo.m_flHighestIncoming = v4;
      g_NetGraphInfo.m_flAverageIncoming = v4 + g_NetGraphInfo.m_flAverageIncoming;
      if ( v3 > g_NetGraphInfo.m_flHighestOutgoing )
        g_NetGraphInfo.m_flHighestOutgoing = v3;
      ++g_NetGraphInfo.m_iSamples;
      g_NetGraphInfo.m_flAverageOutgoing = v3 + g_NetGraphInfo.m_flAverageOutgoing;
    }
  }
}


// CSource2Server::WriteNetDebugInfo  (line 436, @0x0000000002239230, libserver.so)  // inlines: Element, GetAverageIncoming, GetAverageOutgoing, GetAverageSize, GetBool, GetInt, Reset, operator[]
// calls: Plat_GetLocalTime, V_snprintf, CUtlDict<CUserMessageInstrumentation, int>::RemoveAll, __stack_chk_fail
// callers: CLoopModeGame::DisconnectGame
// strings: "net_debug_%s_%02d%02d%02d-%02d%02d%02d.csv", "wt", "User Message Name,Count,Average Size Written,Total Size Written\n", "%s,%ld,%ld,%ld\n", "Average Incoming,Peak Incoming,Average Outgoing,Peak Outgoing\n", "%2.2f k/s,%2.2f k/s,%2.2f k/s,%2.2f k/s\n"
// globals: filesystem, g_NetGraphInfo, g_UserMessageInstrumentation
void __fastcall CSource2Server::WriteNetDebugInfo(CSource2Server *const this)
{
  __int64 v1; // rax
  __int64 v2; // r13
  __int64 v3; // r12
  unsigned int v4; // ebx
  __m128d v5; // xmm0
  float v6; // xmm2_4
  tm systemTime; // [rsp+20h] [rbp-170h] BYREF
  char umFileName[264]; // [rsp+60h] [rbp-130h] BYREF
  unsigned __int64 v9; // [rsp+168h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( net_debug_to_file.m_pParent->m_Value.m_nValue != 0 )
  {
    Plat_GetLocalTime(&systemTime);
    V_snprintf(
      umFileName,
      260,
      "net_debug_%s_%02d%02d%02d-%02d%02d%02d.csv",
      gpGlobals->mapname,
      (systemTime.tm_year + 1900) % 100,
      systemTime.tm_mon,
      systemTime.tm_wday,
      systemTime.tm_hour,
      systemTime.tm_min,
      systemTime.tm_sec);
    v1 = (*(filesystem->_vptr_IBaseFileSystem + 2))(&filesystem->IBaseFileSystem, umFileName, "wt", 0);
    v2 = v1;
    if ( v1 != 0 )
    {
      v3 = 0;
      v4 = 0;
      (*(filesystem->_vptr_IAppSystem + 34))(
        filesystem,
        v1,
        "User Message Name,Count,Average Size Written,Total Size Written\n");
      if ( g_UserMessageInstrumentation.m_Elements.m_Tree.m_NumElements != 0 )
      {
        do
        {
          if ( &g_UserMessageInstrumentation.m_Elements.m_Tree.m_Elements.m_pMemory[v3] != -24LL )
            (*(filesystem->_vptr_IAppSystem + 34))(
              filesystem,
              v2,
              "%s,%ld,%ld,%ld\n",
              g_UserMessageInstrumentation.m_Elements.m_Tree.m_Elements.m_pMemory[v3].m_Data.key,
              g_UserMessageInstrumentation.m_Elements.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.m_iCount,
              g_UserMessageInstrumentation.m_Elements.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.m_iSize
            / g_UserMessageInstrumentation.m_Elements.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.m_iCount,
              g_UserMessageInstrumentation.m_Elements.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.m_iSize);
          ++v4;
          ++v3;
        }
        while ( v4 < g_UserMessageInstrumentation.m_Elements.m_Tree.m_NumElements );
      }
      (*(filesystem->_vptr_IAppSystem + 34))(filesystem, v2, "\n");
      (*(filesystem->_vptr_IAppSystem + 34))(
        filesystem,
        v2,
        "Average Incoming,Peak Incoming,Average Outgoing,Peak Outgoing\n");
      v5 = *&g_NetGraphInfo.m_flAverageOutgoing;
      v5.m128d_f64[0] = g_NetGraphInfo.m_flAverageOutgoing / SLODWORD(g_NetGraphInfo.m_iSamples);
      v6 = _mm_movedup_pd(v5).m128d_f64[0];
      *v5.m128d_f64 = g_NetGraphInfo.m_flAverageIncoming / SLODWORD(g_NetGraphInfo.m_iSamples);
      (*(filesystem->_vptr_IAppSystem + 34))(
        filesystem,
        v2,
        "%2.2f k/s,%2.2f k/s,%2.2f k/s,%2.2f k/s\n",
        *v5.m128d_f64,
        g_NetGraphInfo.m_flHighestIncoming,
        v6,
        g_NetGraphInfo.m_flHighestOutgoing);
      (*(filesystem->_vptr_IBaseFileSystem + 3))(&filesystem->IBaseFileSystem, v2);
    }
    CUtlDict<CUserMessageInstrumentation,int>::RemoveAll(&g_UserMessageInstrumentation);
    g_NetGraphInfo.m_flHighestIncoming = 0.0;
    g_NetGraphInfo.m_flAverageIncoming = 0.0;
    g_NetGraphInfo.m_flHighestOutgoing = 0.0;
    g_NetGraphInfo.m_flAverageOutgoing = 0.0;
    g_NetGraphInfo.m_iSamples = 0;
  }
}


// UTIL_IsDedicatedServer  (line 512, @0x0000000002230300, libserver.so)
// calls: AppIsDedicatedServer
bool __cdecl UTIL_IsDedicatedServer()
{
  return AppIsDedicatedServer();
}


// UTIL_GetCommandClientIndex  (line 521, @0x0000000002230310, libserver.so)
// callers: UTIL_IsCommandIssuedByServerAdmin
// globals: g_nCommandClientIndex
CEntityIndex __cdecl UTIL_GetCommandClientIndex()
{
  return (g_nCommandClientIndex.m_Data + 1);
}


// UTIL_GetCommandClient  (line 534, @0x0000000002230320, libserver.so)  // inlines: UTIL_GetCommandClientIndex
// calls: UTIL_PlayerByIndex
// callers: CScriptConvarAccessor::GetCommandClient, CScriptConvarAccessor::GetDOTACommandClient, CC_Ent_Autoaim, CC_Ent_CancelPendingEntFires, CC_Ent_FireTarget, CC_GetCommandEnt, CC_Ent_Show_Response_Criteria, CC_Ent_Info, CEntFireAutoCompletionFunctor::CommandCallback, CC_Ent_Create, cast_hull, cast_ray (106 total)
// globals: g_nCommandClientIndex
CBasePlayer *__cdecl UTIL_GetCommandClient()
{
  if ( g_nCommandClientIndex.m_Data + 1 <= 0 )
    return 0;
  else
    return UTIL_PlayerByIndex((g_nCommandClientIndex.m_Data + 1));
}


// __CreateCSource2ServerISource2Server_interface  (line 645, @0x000000000221a6f0, libserver.so)
// globals: s_Source2Server
void *__cdecl __CreateCSource2ServerISource2Server_interface()
{
  return &s_Source2Server;
}


// CSource2Server::GetDependencies  (line 647, @0x000000000221cb30, libserver.so)  // inlines: AppSystemInfo_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// strings: "soundsystem", "SoundSystem001", "SoundOpSystem001", "scenefilecache", "SceneFileCache002", "ResponseRulesCache001" (25 total)
// globals: `guard variable for'CSource2Server::GetDependencies(void)::deps, CSource2Server::GetDependencies(void)::deps
const AppSystemInfo_t *__fastcall CSource2Server::GetDependencies(CSource2Server *const this)
{
  if ( `guard variable for'CSource2Server::GetDependencies(void)::deps != 0 )
    return CSource2Server::GetDependencies(void)::deps;
  if ( __cxa_guard_acquire(&`guard variable for'CSource2Server::GetDependencies(void)::deps) != 0 )
  {
    CSource2Server::GetDependencies(void)::deps[0].m_pModuleName = "soundsystem";
    qword_4B1C2E8 = "SoundSystem001";
    qword_4B1C2F0 = "soundsystem";
    qword_4B1C2F8 = "SoundOpSystem001";
    qword_4B1C300 = "scenefilecache";
    qword_4B1C308 = "SceneFileCache002";
    qword_4B1C310 = "scenefilecache";
    qword_4B1C318 = "ResponseRulesCache001";
    qword_4B1C320 = "particles";
    qword_4B1C328 = "ParticleSystemMgr002";
    qword_4B1C330 = "networksystem";
    qword_4B1C338 = "NetworkSystemVersion001";
    qword_4B1C340 = "host";
    qword_4B1C348 = "PredictionDiffManager001";
    qword_4B1C350 = "host";
    qword_4B1C358 = "DebugDrawQueueManager001";
    qword_4B1C360 = "host";
    qword_4B1C368 = "GameModelInfoServer001";
    qword_4B1C370 = "host";
    qword_4B1C378 = "SaveRestoreDataVersion001";
    qword_4B1C380 = "host";
    qword_4B1C388 = "HostUtils001";
    qword_4B1C390 = "vphysics2";
    qword_4B1C398 = "VPhysics2_Interface_001";
    qword_4B1C3A0 = "engine2";
    qword_4B1C3A8 = "Source2EngineToServer001";
    qword_4B1C3B0 = "engine2";
    qword_4B1C3B8 = "VoiceServer002";
    qword_4B1C3C0 = "engine2";
    qword_4B1C3C8 = "Source2EngineToServerStringTable001";
    qword_4B1C3D0 = "engine2";
    qword_4B1C3D8 = "BlackBoxVersion001";
    qword_4B1C3E0 = "engine2";
    qword_4B1C3E8 = "XboxSystemInterface001";
    qword_4B1C3F0 = "engine2";
    qword_4B1C3F8 = "GameEventSystemServerV001";
    qword_4B1C400 = "engine2";
    qword_4B1C408 = "KeyValueCache001";
    qword_4B1C410 = "host";
    qword_4B1C420 = 0;
    qword_4B1C418 = "DotaMapUtils001";
    qword_4B1C428 = 0;
    __cxa_guard_release(&`guard variable for'CSource2Server::GetDependencies(void)::deps);
  }
  return CSource2Server::GetDependencies(void)::deps;
}


// CSource2Server::QueryInterface  (line 698, @0x000000000221a700, libserver.so)
void *__fastcall CSource2Server::QueryInterface(CSource2Server *const this, const char *pInterfaceName)
{
  return 0;
}


// CSource2Server::Disconnect  (line 703, @0x000000000221ef90, libserver.so)  // inlines: Disconnect
// calls: ConVar_Unregister, DisconnectGameInterfaces, DisconnectTier2ManualManifests, DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CSource2Server::Disconnect(CSource2Server *const this)
{
  int v2; // eax
  bool v3; // zf

  ConVar_Unregister();
  DisconnectGameInterfaces();
  DisconnectTier2ManualManifests(this->m_manualManifests.m_Memory.m_pMemory, this->m_manualManifests.m_Size);
  if ( this->m_nAppSysTier2LibraryConnects > 0 )
  {
    do
    {
      DisconnectTier2Libraries();
      v2 = this->m_nAppSysTier2LibraryConnects - 1;
      v3 = this->m_nAppSysTier2LibraryConnects == 1;
      this->m_nAppSysTier2LibraryConnects = v2;
    }
    while ( v2 >= 0 && !v3 );
  }
  DisconnectTier1Libraries();
}


// CSource2Server::Connect  (line 713, @0x000000000221e8b0, libserver.so)  // inlines: Connect, SetWarningFunc
// calls: COM_TimestampedLog, InstallProtobufLogHandler, ConnectTier1Libraries, ConnectTier2Libraries, ConnectGameInterfaces, CommandLine, AppIsDedicatedServer, CNetworkInitFuncRegistry::ExecuteNetworkInitFuncs, CNetworkVectorChangeCallbackInitFuncRegistry::ExecuteNetworkInitFuncs, CEntity2PostUnserializeHandlerRegistry::ExecuteHandlerInitFuncs, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "ConnectTier1/2/3Libraries - Start", "ConnectTier1/2/3Libraries - Finish", "Source2EngineToServer001", "Factories - Start", "VoiceServer002", "Source2EngineToServerStringTable001" (36 total)
// globals: engine, g_pVoiceServer, networkstringtable, modelinfo, filelogginglistener, filesystem, soundopsystem, scenefilecache (13 total)
bool __fastcall CSource2Server::Connect(CSource2Server *const this, CreateInterfaceFn appSystemFactory)
{
  IVEngineServer2 *v4; // rax
  CGlobalVars *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  CSharedEdictChangeInfo *v9; // rax
  char IsChannelEnabled; // al
  const char *v12; // rdx
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // al
  CreateInterfaceFn v25; // [rsp+8h] [rbp-38h] BYREF
  CreateInterfaceFn v26; // [rsp+10h] [rbp-30h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-28h] BYREF

  COM_TimestampedLog("ConnectTier1/2/3Libraries - Start");
  InstallProtobufLogHandler();
  v25 = appSystemFactory;
  v26 = appSystemFactory;
  pFactoryList = appSystemFactory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&v26, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  ConnectGameInterfaces(&v25, 1, GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY);
  g_pEconSchemaSymbolTable = (*(*g_pHostUtils + 144LL))(g_pHostUtils);
  COM_TimestampedLog("ConnectTier1/2/3Libraries - Finish");
  if ( g_pCVar == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      LoggingSystem_Log(LOG_SERVER, 2, "ERROR: CSource2Server::Connect - 'g_pCVar' is NULL\n");
    return 0;
  }
  v4 = appSystemFactory("Source2EngineToServer001", 0);
  engine = v4;
  if ( v4 == 0 )
  {
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to engine\n";
    if ( IsChannelEnabled != 0 )
LABEL_30:
      LoggingSystem_Log(LOG_SERVER, 2, v12);
    return 0;
  }
  v5 = (*(*v4 + 616LL))(v4);
  gpGlobals = v5;
  if ( v5 != 0 )
    v5->m_pfnWarningFunc = GlobalVarsWarningFunc;
  g_pSource2Engine = g_pEngineServer;
  if ( g_pEngineServer == 0 )
  {
    v13 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - No g_pSource2Engine\n";
    if ( v13 == 0 )
      return 0;
    goto LABEL_30;
  }
  COM_TimestampedLog("Factories - Start");
  g_pVoiceServer = appSystemFactory("VoiceServer002", 0);
  if ( g_pVoiceServer == 0 )
  {
    v15 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to g_pVoiceServer\n";
    if ( v15 == 0 )
      return 0;
    goto LABEL_30;
  }
  networkstringtable = appSystemFactory("Source2EngineToServerStringTable001", 0);
  if ( networkstringtable == 0 )
  {
    v16 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to networkstringtable\n";
    if ( v16 == 0 )
      return 0;
    goto LABEL_30;
  }
  modelinfo = appSystemFactory("GameModelInfoServer001", 0);
  if ( modelinfo == 0 )
  {
    v14 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to modelinfo\n";
    if ( v14 == 0 )
      return 0;
    goto LABEL_30;
  }
  g_pSaveRestoreHostDataMgr = appSystemFactory("SaveRestoreDataVersion001", 0);
  if ( g_pSaveRestoreHostDataMgr == 0 )
  {
    v17 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to saverestore data in host.dll\n";
    if ( v17 == 0 )
      return 0;
    goto LABEL_30;
  }
  filelogginglistener = appSystemFactory("FileLoggingListener001", 0);
  if ( filelogginglistener == 0 )
  {
    v18 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to filelogginglistener\n";
    if ( v18 == 0 )
      return 0;
    goto LABEL_30;
  }
  filesystem = appSystemFactory("VFileSystem017", 0);
  if ( filesystem == 0 )
  {
    v19 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to filesystem\n";
    if ( v19 == 0 )
      return 0;
    goto LABEL_30;
  }
  soundopsystem = appSystemFactory("SoundOpSystem001", 0);
  if ( soundopsystem == 0 )
  {
    v20 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to soundopsystem\n";
    if ( v20 == 0 )
      return 0;
    goto LABEL_30;
  }
  scenefilecache = appSystemFactory("SceneFileCache002", 0);
  if ( scenefilecache == 0 )
  {
    v21 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to scenefilecache\n";
    if ( v21 == 0 )
      return 0;
    goto LABEL_30;
  }
  blackboxrecorder = appSystemFactory("BlackBoxVersion001", 0);
  if ( blackboxrecorder == 0 )
  {
    v22 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to blackboxrecorder\n";
    if ( v22 == 0 )
      return 0;
    goto LABEL_30;
  }
  xboxsystem = appSystemFactory("XboxSystemInterface001", 0);
  if ( xboxsystem == 0 )
  {
    v23 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to xboxsystem\n";
    if ( v23 == 0 )
      return 0;
    goto LABEL_30;
  }
  netsupport = appSystemFactory("INETSUPPORT_001", 0);
  if ( netsupport == 0 )
  {
    v24 = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
    v12 = "ERROR: CSource2Server::Connect - Failed to connect to netsupport\n";
    if ( v24 == 0 )
      return 0;
    goto LABEL_30;
  }
  g_pGameConfiguration = appSystemFactory("GameConfigServerV001", 0);
  if ( g_pGameConfiguration == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    {
      v12 = "ERROR: CSource2Server::Connect - Failed to connect to g_pGameConfiguration\n";
      goto LABEL_30;
    }
    return 0;
  }
  v8 = CommandLine(v6, v7);
  if ( (*(*v8 + 24LL))(v8, "-noscripting", 0) == 0 )
    g_pScriptManager = appSystemFactory("VScriptManager010", 0);
  if ( !AppIsDedicatedServer() && g_pApplication != 0 )
    (*(g_pApplication->_vptr_IAppSystem + 14))(g_pApplication, "client", "DOTA_CLIENT_GCCLIENT");
  if ( g_pGameEventSystem == 0 )
    g_pGameEventSystem = appSystemFactory("GameEventSystemServerV001", 0);
  COM_TimestampedLog("Factories - Finish");
  CNetworkInitFuncRegistry::ExecuteNetworkInitFuncs(NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0);
  CNetworkVectorChangeCallbackInitFuncRegistry::ExecuteNetworkInitFuncs(NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0);
  CEntity2PostUnserializeHandlerRegistry::ExecuteHandlerInitFuncs();
  v9 = (*(*engine + 632LL))(engine);
  this->m_appSystemFactory = appSystemFactory;
  g_pSharedChangeInfo = v9;
  return 1;
}


// CSource2Server::Init  (line 917, @0x00000000022394e0, libserver.so)  // inlines: Init, InitGameSystems, Reset
// calls: RegisterConfigValues, ConVar_Register, SteamAPI_Init, SteamAPI_GetHSteamUser, SteamAPI_GetHSteamPipe, CSteamGameServerAPIContext::Init, CommandLine, COM_TimestampedLog, MathLib_Init, DataDescSchemaInit, CGameEventManager::Init, CEngineServiceRegistry::RegisterEngineServices (21 total)
// strings: "-pressdemo", "MathLib_Init", "gameeventmanager->Init()", "CEngineServiceRegistry::RegisterEngineServices()", "CLoopModeRegistry::RegisterLoopModes()", "sv_maxreplay" (30 total)
// globals: s_SteamGameServerAPIContext, g_pcv_commentary, sv_maxreplay, g_UserMessageInstrumentation, g_NetGraphInfo, g_bPressDemoMode, s_SteamAPIContext
InitReturnVal_t __fastcall CSource2Server::Init(CSource2Server *const this)
{
  unsigned int HSteamUser; // r13d
  unsigned int HSteamPipe; // r12d
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  InitReturnVal_t result; // eax
  void (__fastcall *v7)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *); // r12
  ISaveRestoreBlockHandler *EntitySaveRestoreBlockHandler; // rax
  void (__fastcall *v9)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *); // r12
  ISaveRestoreBlockHandler *PhysSaveRestoreBlockHandler; // rax
  void (__fastcall *v11)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *); // r12
  ISaveRestoreBlockHandler *v12; // rax
  void (__fastcall *v13)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *); // r12
  ISaveRestoreBlockHandler *CommentarySaveRestoreBlockHandler; // rax
  void (__fastcall *v15)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *); // r12
  ISaveRestoreBlockHandler *EventQueueSaveRestoreBlockHandler; // rax
  ISteamClient *Interface; // rax

  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  SteamAPI_Init(this);
  HSteamUser = SteamAPI_GetHSteamUser();
  HSteamPipe = SteamAPI_GetHSteamPipe();
  if ( HSteamPipe != 0 )
  {
    Interface = SteamInternal_CreateInterface("SteamClient017");
    s_SteamAPIContext.m_pSteamClient = Interface;
    if ( Interface != 0 )
    {
      s_SteamAPIContext.m_pSteamUser = (*(*Interface + 40LL))(Interface, HSteamUser, HSteamPipe, "SteamUser019");
      if ( s_SteamAPIContext.m_pSteamUser != 0 )
      {
        s_SteamAPIContext.m_pSteamFriends = (*(*s_SteamAPIContext.m_pSteamClient + 64LL))(
                                              s_SteamAPIContext.m_pSteamClient,
                                              HSteamUser,
                                              HSteamPipe,
                                              "SteamFriends015");
        if ( s_SteamAPIContext.m_pSteamFriends != 0 )
        {
          s_SteamAPIContext.m_pSteamUtils = (*(*s_SteamAPIContext.m_pSteamClient + 72LL))(
                                              s_SteamAPIContext.m_pSteamClient,
                                              HSteamPipe,
                                              "SteamUtils008");
          if ( s_SteamAPIContext.m_pSteamUtils != 0 )
          {
            s_SteamAPIContext.m_pSteamMatchmaking = (*(*s_SteamAPIContext.m_pSteamClient + 80LL))(
                                                      s_SteamAPIContext.m_pSteamClient,
                                                      HSteamUser,
                                                      HSteamPipe,
                                                      "SteamMatchMaking009");
            if ( s_SteamAPIContext.m_pSteamMatchmaking != 0 )
            {
              s_SteamAPIContext.m_pSteamMatchmakingServers = (*(*s_SteamAPIContext.m_pSteamClient + 88LL))(
                                                               s_SteamAPIContext.m_pSteamClient,
                                                               HSteamUser,
                                                               HSteamPipe,
                                                               "SteamMatchMakingServers002");
              if ( s_SteamAPIContext.m_pSteamMatchmakingServers != 0 )
              {
                s_SteamAPIContext.m_pSteamUserStats = (*(*s_SteamAPIContext.m_pSteamClient + 104LL))(
                                                        s_SteamAPIContext.m_pSteamClient,
                                                        HSteamUser,
                                                        HSteamPipe,
                                                        "STEAMUSERSTATS_INTERFACE_VERSION011");
                if ( s_SteamAPIContext.m_pSteamUserStats != 0 )
                {
                  s_SteamAPIContext.m_pSteamApps = (*(*s_SteamAPIContext.m_pSteamClient + 120LL))(
                                                     s_SteamAPIContext.m_pSteamClient,
                                                     HSteamUser,
                                                     HSteamPipe,
                                                     "STEAMAPPS_INTERFACE_VERSION008");
                  if ( s_SteamAPIContext.m_pSteamApps != 0 )
                  {
                    s_SteamAPIContext.m_pSteamNetworking = (*(*s_SteamAPIContext.m_pSteamClient + 128LL))(
                                                             s_SteamAPIContext.m_pSteamClient,
                                                             HSteamUser,
                                                             HSteamPipe,
                                                             "SteamNetworking005");
                    if ( s_SteamAPIContext.m_pSteamNetworking != 0 )
                    {
                      s_SteamAPIContext.m_pSteamRemoteStorage = (*(*s_SteamAPIContext.m_pSteamClient + 136LL))(
                                                                  s_SteamAPIContext.m_pSteamClient,
                                                                  HSteamUser,
                                                                  HSteamPipe,
                                                                  "STEAMREMOTESTORAGE_INTERFACE_VERSION014");
                      if ( s_SteamAPIContext.m_pSteamRemoteStorage != 0 )
                      {
                        s_SteamAPIContext.m_pSteamScreenshots = (*(*s_SteamAPIContext.m_pSteamClient + 144LL))(
                                                                  s_SteamAPIContext.m_pSteamClient,
                                                                  HSteamUser,
                                                                  HSteamPipe,
                                                                  "STEAMSCREENSHOTS_INTERFACE_VERSION003");
                        if ( s_SteamAPIContext.m_pSteamScreenshots != 0 )
                        {
                          s_SteamAPIContext.m_pSteamHTTP = (*(*s_SteamAPIContext.m_pSteamClient + 184LL))(
                                                             s_SteamAPIContext.m_pSteamClient,
                                                             HSteamUser,
                                                             HSteamPipe,
                                                             "STEAMHTTP_INTERFACE_VERSION002");
                          if ( s_SteamAPIContext.m_pSteamHTTP != 0 )
                          {
                            s_SteamAPIContext.m_pSteamUnifiedMessages = (*(*s_SteamAPIContext.m_pSteamClient + 192LL))(
                                                                          s_SteamAPIContext.m_pSteamClient,
                                                                          HSteamUser,
                                                                          HSteamPipe,
                                                                          "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001");
                            if ( s_SteamAPIContext.m_pSteamUnifiedMessages != 0 )
                            {
                              s_SteamAPIContext.m_pController = (*(*s_SteamAPIContext.m_pSteamClient + 200LL))(
                                                                  s_SteamAPIContext.m_pSteamClient,
                                                                  HSteamUser,
                                                                  HSteamPipe,
                                                                  "SteamController005");
                              if ( s_SteamAPIContext.m_pController != 0 )
                              {
                                s_SteamAPIContext.m_pSteamUGC = (*(*s_SteamAPIContext.m_pSteamClient + 208LL))(
                                                                  s_SteamAPIContext.m_pSteamClient,
                                                                  HSteamUser,
                                                                  HSteamPipe,
                                                                  "STEAMUGC_INTERFACE_VERSION009");
                                if ( s_SteamAPIContext.m_pSteamUGC != 0 )
                                {
                                  s_SteamAPIContext.m_pSteamAppList = (*(*s_SteamAPIContext.m_pSteamClient + 216LL))(
                                                                        s_SteamAPIContext.m_pSteamClient,
                                                                        HSteamUser,
                                                                        HSteamPipe,
                                                                        "STEAMAPPLIST_INTERFACE_VERSION001");
                                  if ( s_SteamAPIContext.m_pSteamAppList != 0 )
                                  {
                                    s_SteamAPIContext.m_pSteamMusic = (*(*s_SteamAPIContext.m_pSteamClient + 224LL))(
                                                                        s_SteamAPIContext.m_pSteamClient,
                                                                        HSteamUser,
                                                                        HSteamPipe,
                                                                        "STEAMMUSIC_INTERFACE_VERSION001");
                                    if ( s_SteamAPIContext.m_pSteamMusic != 0 )
                                    {
                                      s_SteamAPIContext.m_pSteamMusicRemote = (*(*s_SteamAPIContext.m_pSteamClient
                                                                               + 232LL))(
                                                                                s_SteamAPIContext.m_pSteamClient,
                                                                                HSteamUser,
                                                                                HSteamPipe,
                                                                                "STEAMMUSICREMOTE_INTERFACE_VERSION001");
                                      if ( s_SteamAPIContext.m_pSteamMusicRemote != 0 )
                                      {
                                        s_SteamAPIContext.m_pSteamHTMLSurface = (*(*s_SteamAPIContext.m_pSteamClient
                                                                                 + 240LL))(
                                                                                  s_SteamAPIContext.m_pSteamClient,
                                                                                  HSteamUser,
                                                                                  HSteamPipe,
                                                                                  "STEAMHTMLSURFACE_INTERFACE_VERSION_003");
                                        if ( s_SteamAPIContext.m_pSteamHTMLSurface != 0 )
                                        {
                                          s_SteamAPIContext.m_pSteamInventory = (*(*s_SteamAPIContext.m_pSteamClient
                                                                                 + 272LL))(
                                                                                  s_SteamAPIContext.m_pSteamClient,
                                                                                  HSteamUser,
                                                                                  HSteamPipe,
                                                                                  "STEAMINVENTORY_INTERFACE_V001");
                                          if ( s_SteamAPIContext.m_pSteamInventory != 0 )
                                            s_SteamAPIContext.m_pSteamVideo = (*(*s_SteamAPIContext.m_pSteamClient
                                                                               + 280LL))(
                                                                                s_SteamAPIContext.m_pSteamClient,
                                                                                HSteamUser,
                                                                                HSteamPipe,
                                                                                "STEAMVIDEO_INTERFACE_V001");
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  CSteamGameServerAPIContext::Init(&s_SteamGameServerAPIContext);
  v5 = CommandLine(v3, v4);
  if ( (*(*v5 + 64LL))(v5, "-pressdemo") != 0 )
    g_bPressDemoMode = 1;
  COM_TimestampedLog("MathLib_Init");
  MathLib_Init();
  DataDescSchemaInit();
  COM_TimestampedLog("gameeventmanager->Init()");
  CGameEventManager::Init(&s_GameEventManager);
  if ( g_pMatchFramework != 0 )
    (*(*g_pMatchFramework + 176LL))(g_pMatchFramework);
  COM_TimestampedLog("CEngineServiceRegistry::RegisterEngineServices()");
  CEngineServiceRegistry::RegisterEngineServices();
  COM_TimestampedLog("CLoopModeRegistry::RegisterLoopModes()");
  CLoopModeRegistry::RegisterLoopModes();
  sv_cheats = (*(*g_pCVar + 144LL))(g_pCVar, "sv_cheats");
  result = InitReturnVal_t::INIT_FAILED;
  if ( sv_cheats != 0 )
  {
    g_pcv_commentary = (*(*g_pCVar + 144LL))(g_pCVar, "commentary");
    sv_maxreplay = (*(*g_pCVar + 144LL))(g_pCVar, "sv_maxreplay");
    COM_TimestampedLog("g_pGameSaveRestoreBlockSet");
    v7 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 9);
    EntitySaveRestoreBlockHandler = GetEntitySaveRestoreBlockHandler();
    v7(g_pGameSaveRestoreBlockSet, EntitySaveRestoreBlockHandler);
    v9 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 9);
    PhysSaveRestoreBlockHandler = GetPhysSaveRestoreBlockHandler();
    v9(g_pGameSaveRestoreBlockSet, PhysSaveRestoreBlockHandler);
    v11 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 9);
    v12 = GetDefaultResponseSystemSaveRestoreBlockHandler();
    v11(g_pGameSaveRestoreBlockSet, v12);
    v13 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 9);
    CommentarySaveRestoreBlockHandler = GetCommentarySaveRestoreBlockHandler();
    v13(g_pGameSaveRestoreBlockSet, CommentarySaveRestoreBlockHandler);
    v15 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 9);
    EventQueueSaveRestoreBlockHandler = GetEventQueueSaveRestoreBlockHandler();
    v15(g_pGameSaveRestoreBlockSet, EventQueueSaveRestoreBlockHandler);
    COM_TimestampedLog("InitGameSystems - Start");
    InvalidateQueryCache();
    (*(*g_pUploadGameStats + 96LL))(g_pUploadGameStats);
    COM_TimestampedLog("InitGameSystems - Finish");
    CUtlDict<CUserMessageInstrumentation,int>::RemoveAll(&g_UserMessageInstrumentation);
    g_NetGraphInfo.m_flHighestIncoming = 0.0;
    g_NetGraphInfo.m_flAverageIncoming = 0.0;
    g_NetGraphInfo.m_flHighestOutgoing = 0.0;
    g_NetGraphInfo.m_flAverageOutgoing = 0.0;
    g_NetGraphInfo.m_iSamples = 0;
    (*(g_pGameMovement->_vptr_IGameMovement + 2))(g_pGameMovement);
    return InitReturnVal_t::INIT_OK;
  }
  return result;
}


// CSource2Server::Shutdown  (line 1013, @0x000000000221c0d0, libserver.so)  // inlines: Clear
// calls: CGameEventManager::Shutdown, GetEventQueueSaveRestoreBlockHandler, GetCommentarySaveRestoreBlockHandler, GetDefaultResponseSystemSaveRestoreBlockHandler, GetPhysSaveRestoreBlockHandler, GetEntitySaveRestoreBlockHandler, CTextStatsMgr::GetStatsFilename, CTextStatsMgr::SetStatsFilename, CTextStatsMgr::WriteFile, CLoopModeRegistry::UnregisterLoopModes, CEngineServiceRegistry::UnregisterEngineServices, ReleaseParticleEffects
// strings: "stats.txt"
// globals: filesystem, s_SteamAPIContext, s_SteamGameServerAPIContext
void __fastcall CSource2Server::Shutdown(CSource2Server *const this)
{
  void (__fastcall *v1)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *); // r12
  ISaveRestoreBlockHandler *EventQueueSaveRestoreBlockHandler; // rax
  void (__fastcall *v3)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *); // r12
  ISaveRestoreBlockHandler *CommentarySaveRestoreBlockHandler; // rax
  void (__fastcall *v5)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *); // r12
  ISaveRestoreBlockHandler *v6; // rax
  void (__fastcall *v7)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *); // r12
  ISaveRestoreBlockHandler *PhysSaveRestoreBlockHandler; // rax
  void (__fastcall *v9)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *); // r12
  ISaveRestoreBlockHandler *EntitySaveRestoreBlockHandler; // rax
  char *StatsFilename; // rax

  CGameEventManager::Shutdown(&s_GameEventManager);
  (*(g_pGameMovement->_vptr_IGameMovement + 3))(g_pGameMovement);
  v1 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 10);
  EventQueueSaveRestoreBlockHandler = GetEventQueueSaveRestoreBlockHandler();
  v1(g_pGameSaveRestoreBlockSet, EventQueueSaveRestoreBlockHandler);
  v3 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 10);
  CommentarySaveRestoreBlockHandler = GetCommentarySaveRestoreBlockHandler();
  v3(g_pGameSaveRestoreBlockSet, CommentarySaveRestoreBlockHandler);
  v5 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 10);
  v6 = GetDefaultResponseSystemSaveRestoreBlockHandler();
  v5(g_pGameSaveRestoreBlockSet, v6);
  v7 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 10);
  PhysSaveRestoreBlockHandler = GetPhysSaveRestoreBlockHandler();
  v7(g_pGameSaveRestoreBlockSet, PhysSaveRestoreBlockHandler);
  v9 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 10);
  EntitySaveRestoreBlockHandler = GetEntitySaveRestoreBlockHandler();
  v9(g_pGameSaveRestoreBlockSet, EntitySaveRestoreBlockHandler);
  StatsFilename = CTextStatsMgr::GetStatsFilename(&g_TextStatsMgr);
  if ( StatsFilename == 0 || *StatsFilename == 0 )
    CTextStatsMgr::SetStatsFilename(&g_TextStatsMgr, "stats.txt");
  CTextStatsMgr::WriteFile(&g_TextStatsMgr, filesystem, 0);
  CLoopModeRegistry::UnregisterLoopModes();
  CEngineServiceRegistry::UnregisterEngineServices();
  ReleaseParticleEffects();
  s_SteamAPIContext.m_pSteamClient = 0;
  s_SteamAPIContext.m_pSteamUser = 0;
  s_SteamAPIContext.m_pSteamFriends = 0;
  s_SteamAPIContext.m_pSteamUtils = 0;
  s_SteamAPIContext.m_pSteamMatchmaking = 0;
  s_SteamAPIContext.m_pSteamUserStats = 0;
  s_SteamAPIContext.m_pSteamApps = 0;
  s_SteamAPIContext.m_pSteamMatchmakingServers = 0;
  s_SteamAPIContext.m_pSteamNetworking = 0;
  s_SteamAPIContext.m_pSteamRemoteStorage = 0;
  s_SteamAPIContext.m_pSteamHTTP = 0;
  s_SteamAPIContext.m_pSteamScreenshots = 0;
  s_SteamAPIContext.m_pSteamMusic = 0;
  s_SteamAPIContext.m_pSteamUnifiedMessages = 0;
  s_SteamAPIContext.m_pController = 0;
  s_SteamAPIContext.m_pSteamUGC = 0;
  s_SteamAPIContext.m_pSteamAppList = 0;
  s_SteamAPIContext.m_pSteamMusicRemote = 0;
  s_SteamAPIContext.m_pSteamHTMLSurface = 0;
  s_SteamAPIContext.m_pSteamInventory = 0;
  s_SteamGameServerAPIContext.m_pSteamClient = 0;
  s_SteamGameServerAPIContext.m_pSteamGameServer = 0;
  s_SteamGameServerAPIContext.m_pSteamGameServerUtils = 0;
  s_SteamGameServerAPIContext.m_pSteamGameServerNetworking = 0;
  s_SteamGameServerAPIContext.m_pSteamGameServerStats = 0;
  s_SteamGameServerAPIContext.m_pSteamHTTP = 0;
  s_SteamGameServerAPIContext.m_pSteamInventory = 0;
  s_SteamGameServerAPIContext.m_pSteamUGC = 0;
  s_SteamGameServerAPIContext.m_pSteamApps = 0;
}


// CSource2Server::WriteSignonMessages  (line 1087, @0x000000000221c840, libserver.so)  // inlines: CNetMessagePB, FindOrCreateNetMessage<Source1LegacyGameEventList_t>, Serialize<Source1LegacyGameEventList_t>, Source1LegacyGameEventList_t, ~CNetMessagePB, ~Source1LegacyGameEventList_t
// calls: CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList, CGameEventManager::WriteEventList, CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList, _Unwind_Resume
// globals: INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEventList_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<205,CMsgSource1LegacyGameEventList,(SignonGroup_t)10,(NetChannelBufType_t)1,true>::s_ProtobufBinding
void __fastcall CSource2Server::WriteSignonMessages(CSource2Server *const this, bf_write *const buf)
{
  __int64 v3; // rdx
  INetworkMessages *v4; // r12
  _QWORD v5[10]; // [rsp+10h] [rbp-50h] BYREF

  CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList(v5);
  v5[0] = off_404C8B0;
  CGameEventManager::WriteEventList(&s_GameEventManager, v5);
  v3 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEventList_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  v4 = g_pNetworkMessages;
  if ( INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEventList_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
  {
    INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEventList_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 205, &CNetMessagePB<205,CMsgSource1LegacyGameEventList,(SignonGroup_t)10,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
    v3 = INetworkMessages::FindOrCreateNetMessage<Source1LegacyGameEventList_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  (*(*v4 + 32LL))(v4, buf, v3, v5);
  v5[0] = &off_404C7F0;
  CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList(v5);
}


// CSource2Server::OnStreamEntitiesFromFileCompleted  (line 1205, @0x000000000221c310, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventRestoreGame_t&)>, DispatchEvent<EventRestoreGame_t>, GetVTableIndex, ~CDontUseThisGameSystem
// calls: IGameSystem::DispatchEventInternal, IGameSystem::~IGameSystem, __cxa_guard_acquire, __cxa_guard_release, _Unwind_Resume
// globals: EventRestoreGame_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(E, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t co
void __fastcall CSource2Server::OnStreamEntitiesFromFileCompleted(
        CSource2Server *const this,
        CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const loadedEntities)
{
  GameSystemEventId_t v2; // edi
  EventRestoreGame_t msg; // [rsp+0h] [rbp-30h] BYREF
  IGameSystem v4; // [rsp+10h] [rbp-20h] BYREF

  msg.m_pEntityList = loadedEntities;
  v2 = EventRestoreGame_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventRestoreGame_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v4._vptr_IGameSystem = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew);
    }
    v4._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew;
    EventRestoreGame_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew
                                                                  + 256))(&v4);
    v4._vptr_IGameSystem = off_3FC3E30;
    IGameSystem::~IGameSystem(&v4);
    v2 = EventRestoreGame_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v2, 0x101uLL, &msg);
}


// CSource2Server::GameServerSteamAPIActivated  (line 1216, @0x0000000002220210, libserver.so)  // inlines: Init
// calls: SteamGameServer_GetHSteamUser, SteamGameServer_GetHSteamPipe, SteamInternal_CreateInterface
// strings: "SteamClient017", "SteamGameServer012", "SteamUtils008", "SteamNetworking005", "SteamGameServerStats001", "STEAMHTTP_INTERFACE_VERSION002" (9 total)
// globals: steamgameserverapicontext
void __fastcall CSource2Server::GameServerSteamAPIActivated(CSource2Server *const this)
{
  CSteamGameServerAPIContext *v1; // rbx
  unsigned int HSteamUser; // r13d
  __int64 v3; // rdi
  unsigned int HSteamPipe; // r12d
  __int64 Interface; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v1 = steamgameserverapicontext;
  HSteamUser = SteamGameServer_GetHSteamUser(this);
  HSteamPipe = SteamGameServer_GetHSteamPipe(v3);
  if ( HSteamPipe != 0 )
  {
    Interface = SteamInternal_CreateInterface("SteamClient017");
    v1->m_pSteamClient = Interface;
    if ( Interface != 0 )
    {
      v6 = (*(*Interface + 48LL))(Interface, HSteamUser, HSteamPipe, "SteamGameServer012");
      v1->m_pSteamGameServer = v6;
      if ( v6 != 0 )
      {
        v7 = (*(*v1->m_pSteamClient + 72LL))(v1->m_pSteamClient, HSteamPipe, "SteamUtils008");
        v1->m_pSteamGameServerUtils = v7;
        if ( v7 != 0 )
        {
          v8 = (*(*v1->m_pSteamClient + 128LL))(v1->m_pSteamClient, HSteamUser, HSteamPipe, "SteamNetworking005");
          v1->m_pSteamGameServerNetworking = v8;
          if ( v8 != 0 )
          {
            v9 = (*(*v1->m_pSteamClient + 112LL))(v1->m_pSteamClient, HSteamUser, HSteamPipe, "SteamGameServerStats001");
            v1->m_pSteamGameServerStats = v9;
            if ( v9 != 0 )
            {
              v10 = (*(*v1->m_pSteamClient + 184LL))(
                      v1->m_pSteamClient,
                      HSteamUser,
                      HSteamPipe,
                      "STEAMHTTP_INTERFACE_VERSION002");
              v1->m_pSteamHTTP = v10;
              if ( v10 != 0 )
              {
                v11 = (*(*v1->m_pSteamClient + 272LL))(
                        v1->m_pSteamClient,
                        HSteamUser,
                        HSteamPipe,
                        "STEAMINVENTORY_INTERFACE_V001");
                v1->m_pSteamInventory = v11;
                if ( v11 != 0 )
                {
                  v12 = (*(*v1->m_pSteamClient + 208LL))(
                          v1->m_pSteamClient,
                          HSteamUser,
                          HSteamPipe,
                          "STEAMUGC_INTERFACE_VERSION009");
                  v1->m_pSteamUGC = v12;
                  if ( v12 != 0 )
                    v1->m_pSteamApps = (*(*v1->m_pSteamClient + 120LL))(
                                         v1->m_pSteamClient,
                                         HSteamUser,
                                         HSteamPipe,
                                         "STEAMAPPS_INTERFACE_VERSION008");
                }
              }
            }
          }
        }
      }
    }
  }
}


// CSource2Server::GameServerSteamAPIDeactivated  (line 1227, @0x000000000221c400, libserver.so)  // inlines: Clear
// calls: DOTAGameManager, CDOTAGameManager::ServerShutdown, GCClientSystem
// globals: steamgameserverapicontext
void __fastcall CSource2Server::GameServerSteamAPIDeactivated(CSource2Server *const this)
{
  CDOTAGameManager *v1; // rax
  CSteamGameServerAPIContext *v2; // rax
  CGCClientSystem *v3; // rax

  v1 = DOTAGameManager();
  CDOTAGameManager::ServerShutdown(v1);
  v2 = steamgameserverapicontext;
  steamgameserverapicontext->m_pSteamClient = 0;
  v2->m_pSteamGameServer = 0;
  v2->m_pSteamGameServerUtils = 0;
  v2->m_pSteamGameServerNetworking = 0;
  v2->m_pSteamGameServerStats = 0;
  v2->m_pSteamHTTP = 0;
  v2->m_pSteamInventory = 0;
  v2->m_pSteamUGC = 0;
  v2->m_pSteamApps = 0;
  v3 = GCClientSystem();
  (*(*v3 + 16LL))(v3);
}


// CSource2Server::GameFrame  (line 1250, @0x0000000002239af0, libserver.so)  // inlines: Add, CDontUseThisGameSystem, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, CheckInitialized, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventServerPostEntityThink_t&)>, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventServerPreEntityThink_t&)>, DispatchEvent<EventServerPostEntityThink_t>, DispatchEvent<EventServerPreEntityThink_t>, EnterScope, ExitScope, GameRules, GetBool, GetDeathTime, GetElapsed, GetInt, GetTimebaseRegister, GetVTableIndex, InTargetThread, IsEnabled, PLAT_CPU_TIME, Reset, ~CDontUseThisGameSystem, ~CMicroProfilerGuard, ~CVProfScope
// calls: IsGameActive, ThreadGetCurrentId, CVProfNode::ExitScope(void), PostAnimDebuggerTickOrFrameEvent, CNetworkTransmitComponent::LatchSettings, CSource2Server::SampleNetDebugInfo, CBaseEntity::IsSimulatingOnAlternateTicks, CGameEntitySystem::CleanupDeleteList, IGameSystem::DispatchEventInternal, GameStartFrame, NavUpdate, CUtlDict<CUserMessageInstrumentation, int>::RemoveAll (33 total)
// strings: "CSource2Server::GameFrame", "Server Game", "autosavedangerousissafe\n"
// globals: engine, EventServerPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex, g_UserMessageInstrumentation, g_NetGraphInfo, EventServerPostEntityThink_t::GetVTableIndex(void)::s_nComputedIndex, g_NetworkPropertyEventMgr, s_Steam3Server, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSys (11 total)
// local variable allocation has failed, the output may be wrong!
void __fastcall CSource2Server::GameFrame(CSource2Server *const this, bool simulating, bool bFirstTick, bool bLastTick)
{
  int m_enabled; // r10d
  bool v7; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  ThreadId_t m_TargetThreadId; // r13
  CVProfNode *m_pParent; // rax
  uint64 v12; // rcx
  GameSystemEventId_t v13; // edi
  GameSystemEventId_t v14; // edi
  unsigned __int64 v15; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  float m_Value; // [rsp+Ch] [rbp-64h]
  float pPlayer; // [rsp+10h] [rbp-60h]
  CBasePlayer *pPlayerb; // [rsp+10h] [rbp-60h]
  float pPlayerc; // [rsp+10h] [rbp-60h]
  CBasePlayer *pPlayera; // [rsp+10h] [rbp-60h]
  __int64 (__fastcall **msg_0)(IGameSystem *__hidden); // [rsp+20h] [rbp-50h] OVERLAPPED BYREF
  __int64 (__fastcall **msg)(IGameSystem *__hidden); // [rsp+30h] [rbp-40h] OVERLAPPED BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v7 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v15 = __rdtsc();
    pPlayerb = g_VProfCurrentProfile.m_TargetThreadId;
    if ( pPlayerb == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CSource2Server::GameFrame" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CSource2Server::GameFrame",
                       0,
                       "Server Game",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v18 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v18->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v15 + __rdtsc();
  }
  if ( !IsGameActive() )
    goto LABEL_3;
  PostAnimDebuggerTickOrFrameEvent(AnimationSnapshotType_t::ANIMATION_SNAPSHOT_SERVER_SIMULATION);
  CNetworkTransmitComponent::LatchSettings();
  CSource2Server::SampleNetDebugInfo(this);
  if ( bLastTick && this->m_fAutoSaveDangerousTime != 0.0 )
  {
    pPlayerc = this->m_fAutoSaveDangerousTime;
    if ( CGlobalVarsBase::curtime(gpGlobals, 0) > pPlayerc )
    {
      pPlayera = UTIL_PlayerByIndex(1);
      if ( pPlayera != 0
        && (pPlayera->m_flDeathTime.m_Value == 0.0
         || (m_Value = pPlayera->m_flDeathTime.m_Value) > CGlobalVarsBase::curtime(gpGlobals, 0))
        && !pPlayera->m_bSinglePlayerGameEnding
        && CBaseEntity::GetHealth(pPlayera) >= this->m_fAutoSaveDangerousMinHealthToCommit )
      {
        (*(*engine + 280LL))(engine, "autosavedangerousissafe\n");
      }
      this->m_fAutoSaveDangerousTime = 0.0;
      this->m_fAutoSaveDangerousMinHealthToCommit = 0.0;
    }
  }
  if ( !s_Steam3Server.m_bInitialized )
  {
    CSteamGameServerAPIContext::Init(&s_Steam3Server);
    s_Steam3Server.m_bInitialized = 1;
    if ( g_pGameRules != 0 )
      (*(g_pGameRules->_vptr_CGameRules + 141))(g_pGameRules);
  }
  g_bIsLogging = (*(*engine + 400LL))(engine);
  if ( CBaseEntity::IsSimulatingOnAlternateTicks() )
  {
    if ( (gpGlobals->tickcount & 1) != 0 )
    {
      UpdateAllClientData();
LABEL_3:
      if ( v7 )
      {
        v9 = __rdtsc();
        if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
        {
          m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
          if ( m_TargetThreadId == ThreadGetCurrentId(v8) )
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
        v12 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v12 - v9 + __rdtsc();
      }
      return;
    }
    pPlayer = gpGlobals->frametime + gpGlobals->frametime;
    gpGlobals->frametime = pPlayer;
  }
  else
  {
    pPlayer = gpGlobals->frametime;
  }
  CGameEntitySystem::CleanupDeleteList(g_pGameEntitySystem);
  v13 = EventServerPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex;
  BYTE1(msg) = bLastTick;
  LOBYTE(msg) = bFirstTick;
  if ( EventServerPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    msg_0 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew);
    }
    msg_0 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew;
    EventServerPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew
                                                                           + 192))(&msg_0);
    msg_0 = off_3FC3E30;
    IGameSystem::~IGameSystem(&msg_0);
    v13 = EventServerPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v13, 0xC1uLL, &msg);
  GameStartFrame();
  if ( TheNavMesh != 0 )
    (*(TheNavMesh->_vptr_CNavMesh + 8))(TheNavMesh);
  NavUpdate();
  (*(*g_pUploadGameStats + 104LL))(g_pUploadGameStats);
  CUtlDict<CUserMessageInstrumentation,int>::RemoveAll(&g_UserMessageInstrumentation);
  g_NetGraphInfo.m_flHighestIncoming = 0.0;
  g_NetGraphInfo.m_flAverageIncoming = 0.0;
  g_NetGraphInfo.m_flHighestOutgoing = 0.0;
  g_NetGraphInfo.m_flAverageOutgoing = 0.0;
  g_NetGraphInfo.m_iSamples = 0;
  UpdateQueryCache();
  if ( sv_server_side_animation.m_pParent->m_Value.m_nValue != 0 )
    CBaseAnimatingController::UpdateGameAnimations();
  Physics_RunThinkFunctions(simulating);
  v14 = EventServerPostEntityThink_t::GetVTableIndex(void)::s_nComputedIndex;
  BYTE1(msg_0) = bLastTick;
  LOBYTE(msg_0) = bFirstTick;
  if ( EventServerPostEntityThink_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    msg = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew);
    }
    msg = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew;
    EventServerPostEntityThink_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew
                                                                            + 200))(&msg);
    msg = off_3FC3E30;
    IGameSystem::~IGameSystem(&msg);
    v14 = EventServerPostEntityThink_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v14, 0xC9uLL, &msg_0);
  if ( ChangeLevel_WasTriggered() )
    ChangeLevel_ChangeLevelNow();
  CEntitySystem::ServiceEntityIOEvents(g_pEntitySystem);
  CGameEntitySystem::CleanupDeleteList(g_pGameEntitySystem);
  UpdateAllClientData();
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 52))(g_pGameRules);
  CTimedEventMgr::FireEvents(&g_NetworkPropertyEventMgr);
  CEntitySystem::ExecuteQueuedOperations(g_pEntitySystem, 0);
  (*(*g_pGameEventSystem + 144LL))(g_pGameEventSystem);
  gpGlobals->frametime = pPlayer;
  if ( v7 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CSource2Server::UpdateWhenNotInGame  (line 1404, @0x000000000221c560, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventOutOfGameFrameBoundary_t&)>, DispatchOutOfGameFrameEvent<EventOutOfGameFrameBoundary_t>, GetVTableIndex, ~CDontUseThisGameSystem
// calls: IGameSystem::DispatchOutOfGameEventInternal, IGameSystem::~IGameSystem, __cxa_guard_acquire, __cxa_guard_release, _Unwind_Resume
// globals: EventOutOfGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameS, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOf
void __fastcall CSource2Server::UpdateWhenNotInGame(CSource2Server *const this, double a2, double dt)
{
  int v3; // edi
  EventOutOfGameFrameBoundary_t msg; // [rsp+0h] [rbp-30h] BYREF
  IGameSystem v5; // [rsp+10h] [rbp-20h] BYREF

  LODWORD(msg.m_flFrameTime) = LODWORD(a2);
  v3 = EventOutOfGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventOutOfGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v5._vptr_IGameSystem = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew);
    }
    v5._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew;
    EventOutOfGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew
                                                                             + 240))(
                                                                              &v5,
                                                                              a2,
                                                                              dt);
    v5._vptr_IGameSystem = off_3FC3E30;
    IGameSystem::~IGameSystem(&v5);
    v3 = EventOutOfGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchOutOfGameEventInternal(v3, &stru_10.m_pIdentityChunks[27] + 1, 0, &msg);
}


// CSource2Server::GetCharacterList  (line 1413, @0x0000000002237280, libserver.so)  // inlines: AddToTail, CUtlString, Construct<CUtlString>, Element, GrowMemory, operator[]
// calls: DOTAGameManager, CDOTAGameManager::GetHighestHeroID, CDOTAGameManager::GetHeroUnitNameByID, CUtlString::operator=, CUtlMemory<CUtlString, int>::Grow
void __fastcall CSource2Server::GetCharacterList(
        CSource2Server *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const characterNames)
{
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> >::CAllocator *p_m_Memory; // r15
  int v4; // ebx
  CDOTAGameManager *v5; // rax
  int HighestHeroID; // r14d
  CDOTAGameManager *v7; // rax
  const char *HeroUnitNameByID; // rax
  const char *v9; // r12
  __int64 m_Size; // rax
  int v11; // edx
  __int64 v12; // rdi
  CUtlString *v13; // rax
  CUtlString *v14; // rdi
  int v15; // [rsp+Ch] [rbp-34h]

  p_m_Memory = &characterNames->m_Memory;
  v4 = 0;
  v5 = DOTAGameManager();
  HighestHeroID = CDOTAGameManager::GetHighestHeroID(v5);
  if ( HighestHeroID >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v7 = DOTAGameManager();
        HeroUnitNameByID = CDOTAGameManager::GetHeroUnitNameByID(v7, v4);
        v9 = HeroUnitNameByID;
        if ( HeroUnitNameByID != 0 && *HeroUnitNameByID != 0 )
          break;
        if ( HighestHeroID < ++v4 )
          return;
      }
      m_Size = characterNames->m_Size;
      v11 = characterNames->m_Size;
      if ( m_Size == characterNames->m_Memory.m_nAllocationCount )
      {
        v15 = characterNames->m_Size;
        CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
        v11 = characterNames->m_Size;
        m_Size = v15;
      }
      v12 = m_Size;
      characterNames->m_Size = v11 + 1;
      v13 = &characterNames->m_Memory.m_pMemory[m_Size];
      if ( v13 != 0 )
      {
        v13->m_pString = 0;
        v14 = &characterNames->m_Memory.m_pMemory[v12];
      }
      else
      {
        v14 = 0;
      }
      ++v4;
      CUtlString::operator=(v14, v9);
    }
    while ( HighestHeroID >= v4 );
  }
}


// CSource2Server::FindUnitDataByModelNameCheckModelModifiers  (line 1430, @0x000000000223b410, libserver.so)  // inlines: GetEntityModel, GetGeneratedUnitCount, GetGeneratedUnitName, GetModifier, GetSlotIndexBySlotType, IsValidIndex, V_isempty, operator[]
// calls: DOTAGameManager, CDOTAGameManager::GetHeroDataByModelName, CDOTAGameManager::GetUnitDataByModelName, ItemSystem, GetAssetModifiers<CEconItemDefinition, CEntityModelModifier>, CUtlString::Get, V_stricmp_fast, DOTAInventoryManager, CDOTAInventoryManager::GetItemSlotsForHero, CDOTAGameManager::GetHeroDataByHeroID, FindUnitNameBySubString, CDOTAGameManager::GetDataForHeroOrUnit
// callers: CSource2Server::GetCharacterNameForModel, CSource2Server::GetDefaultChoreoDirForModel, CSource2Server::GetEconItemNamesForModel, CSource2Server::GetDefaultScaleForModel, CSource2Server::GetEconItemsInfoForModel
KeyValues *__fastcall CSource2Server::FindUnitDataByModelNameCheckModelModifiers(
        CSource2Server *const this,
        const char *pModelName,
        bool bCheckItemModifiers,
        const CEconItemDefinition **ppItemDef,
        bool *pIsUnit)
{
  CDOTAGameManager *v9; // rax
  KeyValues *result; // rax
  CDOTAGameManager *v11; // rax
  __int64 v12; // rdi
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v13; // rax
  const CUtlVector<const CEntityModelModifier*,CUtlMemory<const CEntityModelModifier*,int> > *Asset; // rax
  const CUtlVector<const CEntityModelModifier*,CUtlMemory<const CEntityModelModifier*,int> > *v15; // r15
  int m_Size; // eax
  unsigned __int64 v17; // rbx
  const char *v18; // rax
  CDOTAInventoryManager *v19; // rax
  CDOTAHeroSlots *ItemSlotsForHero; // rax
  __int64 v21; // rdx
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *v22; // rax
  const char *v23; // rax
  CDOTAGameManager *v24; // rax
  const char *UnitNameBySubString; // rbx
  CDOTAGameManager *v26; // rax
  const CEconItemDefinition *pItemDef; // [rsp+8h] [rbp-58h]
  __int64 v28; // [rsp+10h] [rbp-50h]
  CEconItemSystem *v29; // [rsp+18h] [rbp-48h]
  __int64 v30; // [rsp+20h] [rbp-40h]
  int i; // [rsp+28h] [rbp-38h]
  int nHeroID; // [rsp+2Ch] [rbp-34h]

  *ppItemDef = 0;
  *pIsUnit = 0;
  v9 = DOTAGameManager();
  result = CDOTAGameManager::GetHeroDataByModelName(v9, pModelName);
  if ( result == 0 )
  {
    v11 = DOTAGameManager();
    result = CDOTAGameManager::GetUnitDataByModelName(v11, pModelName);
    if ( result != 0 )
      goto LABEL_4;
    if ( bCheckItemModifiers )
    {
      v28 = 0;
      v29 = ItemSystem();
      for ( i = 0; v29->m_itemSchema.m_mapItems.m_nMaxElement > i; ++v28 )
      {
        v13 = &v29->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v28];
        if ( v13->m_iNextNode >= -1 )
        {
          pItemDef = v13->m_elem;
          if ( (*(pItemDef->_vptr_IEconItemDefinition + 16))(v12) == 0 )
          {
            Asset = GetAssetModifiers<CEconItemDefinition,CEntityModelModifier>(pItemDef);
            v15 = Asset;
            if ( Asset != 0 )
            {
              m_Size = Asset->m_Size;
              if ( m_Size > 0 )
              {
                v17 = 0;
                v30 = 8LL * (m_Size - 1) + 8;
                do
                {
                  v18 = CUtlString::Get(&v15->m_Memory.m_pMemory[v17 / 8]->m_strModifier);
                  if ( V_stricmp_fast(v18, pModelName) == 0 )
                  {
                    nHeroID = (*(pItemDef->_vptr_IEconItemDefinition + 9))(pItemDef);
                    if ( nHeroID > 0 )
                    {
                      v19 = DOTAInventoryManager();
                      ItemSlotsForHero = CDOTAInventoryManager::GetItemSlotsForHero(v19, nHeroID);
                      if ( ItemSlotsForHero != 0 )
                      {
                        v21 = 0;
                        while ( LODWORD(pItemDef[1].m_pKVItem) != ItemSlotsForHero->m_nSlotTypes[v21] )
                        {
                          if ( ++v21 == 16 )
                          {
                            LODWORD(v21) = -1;
                            break;
                          }
                        }
                        v22 = ItemSlotsForHero->m_pSlotUnits[v21];
                        if ( v22 != 0 && v22->m_Size > 0 )
                        {
                          v23 = CUtlString::Get(v22->m_Memory.m_pMemory);
                          if ( v23 != 0 && *v23 != 0 )
                          {
                            UnitNameBySubString = FindUnitNameBySubString(v23);
                            v26 = DOTAGameManager();
                            result = CDOTAGameManager::GetDataForHeroOrUnit(v26, UnitNameBySubString);
                            *ppItemDef = pItemDef;
LABEL_4:
                            *pIsUnit = 1;
                            return result;
                          }
                        }
                      }
                      v24 = DOTAGameManager();
                      result = CDOTAGameManager::GetHeroDataByHeroID(v24, nHeroID);
                      if ( result != 0 )
                        return result;
                    }
                  }
                  v17 += 8LL;
                }
                while ( v17 != v30 );
              }
            }
          }
        }
        ++i;
      }
      return 0;
    }
  }
  return result;
}


// CSource2Server::GetCharacterNameForModel  (line 1507, @0x000000000223b610, libserver.so)  // inlines: V_strncpy<int>
// calls: CSource2Server::FindUnitDataByModelNameCheckModelModifiers, KeyValues::GetName, _V_strncpy
void __fastcall CSource2Server::GetCharacterNameForModel(
        CSource2Server *const this,
        const char *pModelName,
        bool bCheckItemModifiers,
        char *pCharacterName,
        int nCharacterNameBufLen)
{
  KeyValues *v7; // rax
  const char *Name; // rax
  bool bIsUnit; // [rsp+7h] [rbp-19h] BYREF
  const CEconItemDefinition *pItemDef; // [rsp+8h] [rbp-18h] BYREF

  *pCharacterName = 0;
  v7 = CSource2Server::FindUnitDataByModelNameCheckModelModifiers(
         this,
         pModelName,
         bCheckItemModifiers,
         &pItemDef,
         &bIsUnit);
  if ( v7 != 0 )
  {
    Name = KeyValues::GetName(v7);
    _V_strncpy(pCharacterName, Name, nCharacterNameBufLen);
  }
}


// CSource2Server::GetModelNameForCharacter  (line 1522, @0x0000000002230530, libserver.so)  // inlines: V_strncpy<int>
// calls: DOTAGameManager, CDOTAGameManager::GetDataForHeroOrUnit, KeyValues::GetString, _V_strncpy, CFmtStrN<256, false>::CFmtStrN, __stack_chk_fail, _Unwind_Resume
// strings: "Model%d"
bool __fastcall CSource2Server::GetModelNameForCharacter(
        CSource2Server *const this,
        const char *pCharacterName,
        int nIndex,
        char *pModelName,
        int nModelNameBufLen)
{
  CDOTAGameManager *v9; // rax
  KeyValues *DataForHeroOrUnit; // rbx
  char *m_szBuf; // rsi
  const char *String; // rax
  CFmtStrN<256,false> v14; // [rsp+0h] [rbp-150h] BYREF
  unsigned __int64 v15; // [rsp+118h] [rbp-38h]

  *pModelName = 0;
  v15 = __readfsqword(0x28u);
  v9 = DOTAGameManager();
  DataForHeroOrUnit = CDOTAGameManager::GetDataForHeroOrUnit(v9, pCharacterName);
  if ( DataForHeroOrUnit == 0 )
    return 0;
  m_szBuf = "Model";
  if ( nIndex != 0 )
  {
    CFmtStrN<256,false>::CFmtStrN(&v14, "Model%d", nIndex);
    m_szBuf = v14.m_szBuf;
  }
  String = KeyValues::GetString(DataForHeroOrUnit, m_szBuf, 0, 0, 0);
  if ( String == 0 )
    return 0;
  _V_strncpy(pModelName, String, nModelNameBufLen);
  return 1;
}


// CSource2Server::GetDefaultChoreoDirForModel  (line 1541, @0x000000000223b660, libserver.so)  // inlines: V_ExtractFilePath<int>
// calls: CSource2Server::FindUnitDataByModelNameCheckModelModifiers, KeyValues::GetString, _V_ExtractFilePath
// strings: "IdleExpression"
void __fastcall CSource2Server::GetDefaultChoreoDirForModel(
        CSource2Server *const this,
        const char *pModelName,
        char *pDefaultVCDDir,
        int nDefaultVCDDirBufLen)
{
  KeyValues *v6; // rax
  const char *String; // rax
  bool bIsUnit; // [rsp+7h] [rbp-19h] BYREF
  const CEconItemDefinition *pItemDef; // [rsp+8h] [rbp-18h] BYREF

  *pDefaultVCDDir = 0;
  v6 = CSource2Server::FindUnitDataByModelNameCheckModelModifiers(this, pModelName, 1, &pItemDef, &bIsUnit);
  if ( v6 != 0 )
  {
    String = KeyValues::GetString(v6, "IdleExpression", "", 0, 0);
    if ( String != 0 && *String != 0 )
      _V_ExtractFilePath(String, pDefaultVCDDir, nDefaultVCDDirBufLen);
  }
}


// CSource2Server::GetEconItemSystem  (line 1561, @0x000000000221c640, libserver.so)
// calls: ItemSystem
IEconItemSystem *__fastcall CSource2Server::GetEconItemSystem(CSource2Server *const this)
{
  return ItemSystem();
}


// CSource2Server::GetEconLoadoutSlotType  (line 1570, @0x000000000221efe0, libserver.so)  // inlines: GetDOTASlotType, _V_strcmp
// calls: strcmp
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings
int __fastcall CSource2Server::GetEconLoadoutSlotType(CSource2Server *const this, const char *pSlotName)
{
  __int64 v3; // rbx

  if ( pSlotName == 0 )
    return -1;
  v3 = 0;
  while ( strcmp(*(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + v3), pSlotName) != 0 )
  {
    if ( ++v3 == 45 )
      return -1;
  }
  return v3;
}


// CSource2Server::GetEconItemNamesForModel  (line 1579, @0x000000000223b6e0, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GetDefinitionName, GetWithNull, GrowMemory, String, V_isempty, operator[], ~CUtlString
// calls: CSource2Server::FindUnitDataByModelNameCheckModelModifiers, KeyValues::GetName, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
void __fastcall CSource2Server::GetEconItemNamesForModel(
        CSource2Server *const this,
        const char *pModelName,
        bool bExcludeItemSets,
        bool bExcludeIndividualItems,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const econItemNames)
{
  KeyValues *v9; // rax
  const char *Name; // rax
  const char *m_pAsString; // rsi
  __int64 m_Size; // r12
  int v13; // eax
  CUtlString *v14; // rbx
  const char *v15; // rax
  bool bIsUnit; // [rsp+Fh] [rbp-31h] BYREF
  CUtlString v17; // [rsp+10h] [rbp-30h] BYREF
  const CEconItemDefinition *pItemDef; // [rsp+18h] [rbp-28h] BYREF

  v9 = CSource2Server::FindUnitDataByModelNameCheckModelModifiers(this, pModelName, 1, &pItemDef, &bIsUnit);
  if ( v9 != 0 )
  {
    Name = KeyValues::GetName(v9);
    if ( Name != 0 && *Name != 0 )
    {
      if ( bIsUnit && pItemDef != 0 )
      {
        m_pAsString = pItemDef->m_symDefinitionName.u.m_pAsString;
        v17.m_pString = 0;
        CUtlString::Set(&v17, m_pAsString);
        m_Size = econItemNames->m_Size;
        v13 = econItemNames->m_Size;
        if ( m_Size == econItemNames->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&econItemNames->m_Memory, 1);
          v13 = econItemNames->m_Size;
        }
        econItemNames->m_Size = v13 + 1;
        v14 = &econItemNames->m_Memory.m_pMemory[m_Size];
        if ( v14 != 0 )
        {
          v14->m_pString = 0;
          v15 = CUtlString::Get(&v17);
          CUtlString::Set(v14, v15);
        }
        if ( v17.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v17);
      }
      else
      {
        (*(this->_vptr_IAppSystem + 49))(this, Name, bExcludeItemSets, bExcludeIndividualItems, econItemNames);
      }
    }
  }
}


// CSource2Server::GetEconItemNamesForCharacter  (line 1603, @0x0000000002237550, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, FirstInorder, GetDefinitionName, GetGeneratedUnitCount, GetGeneratedUnitName, GetSlotIndexBySlotType, GetWithNull, GrowMemory, IsValidIndex, LeftChild, NextInorder, String, operator[], ~CUtlString
// calls: DOTAGameManager, CDOTAGameManager::GetHeroIDByName, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, ItemSystem, CUtlRBTree<CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int>::Node_t, int, CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int>::Node_t, int>, int> >::NextInorder, CEconItemSchema::GetItemDefinition, CEconItemDefinition::HasHeroID, CDOTAGameManager::GetDataForHeroOrUnit, DOTAInventoryManager, CDOTAInventoryManager::GetItemSlotsForHero (15 total)
// strings: "Base Item Set"
void __fastcall CSource2Server::GetEconItemNamesForCharacter(
        CSource2Server *const this,
        const char *pCharacterName,
        bool bExcludeItemSets,
        bool bExcludeIndividualItems,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const econItemNames)
{
  CDOTAGameManager *v8; // rax
  __int64 v9; // r12
  int v10; // eax
  CUtlString *v11; // r12
  const char *v12; // rax
  CEconItemSystem *v13; // rax
  int m_Root; // ecx
  CEconItemSystem *v15; // r13
  UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition*,int>::Node_t,int> *m_pMemory; // rdx
  __int64 v17; // rax
  int m_Left; // r12d
  CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition*,int,bool (*)(const CEconSchemaSymbol&,const CEconSchemaSymbol&)>::ElemType_t elem; // r15
  CEconItemSystem *v20; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  __int64 v22; // rax
  const char *v23; // rax
  __int64 v24; // r15
  CUtlString *v25; // r15
  const char *v26; // rax
  CEconItemSystem *v27; // r14
  __int64 v28; // r13
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v29; // r12d
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v30; // rax
  const CEconItemDefinition *v31; // r15
  const char *v32; // rsi
  __int64 v33; // r15
  int v34; // eax
  CUtlString *v35; // r15
  const char *v36; // rax
  CDOTAGameManager *v37; // rax
  __int64 v38; // r13
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v39; // rax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::ElemType_t m_elem; // r15
  int v41; // r12d
  CDOTAInventoryManager *v42; // rax
  CDOTAHeroSlots *ItemSlotsForHero; // rax
  __int64 v44; // rdx
  char *m_pString; // rax
  CUtlMemory<CUtlString,int> *v46; // r12
  CUtlString *v47; // r14
  const char *v48; // rax
  const char *v49; // rsi
  const char *m_pAsString; // rsi
  __int64 m_Size; // r14
  int v52; // eax
  CUtlString *v53; // [rsp+10h] [rbp-70h]
  CUtlMemory<CUtlString,int> *v54; // [rsp+18h] [rbp-68h]
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t i; // [rsp+28h] [rbp-58h]
  int nHeroIDFromName; // [rsp+30h] [rbp-50h]
  item_definition_index_t iItemIndexb; // [rsp+38h] [rbp-48h]
  __int64 (__fastcall *iItemIndexc)(ILocalize *, __int64); // [rsp+38h] [rbp-48h]
  CEconItemSystem *iItemIndexa; // [rsp+38h] [rbp-48h]
  CUtlString v62; // [rsp+40h] [rbp-40h] BYREF

  v8 = DOTAGameManager();
  nHeroIDFromName = CDOTAGameManager::GetHeroIDByName(v8, pCharacterName);
  if ( nHeroIDFromName < 0 )
  {
    v37 = DOTAGameManager();
    if ( CDOTAGameManager::GetDataForHeroOrUnit(v37, pCharacterName) != 0 )
    {
      iItemIndexa = ItemSystem();
      if ( iItemIndexa->m_itemSchema.m_mapItems.m_nMaxElement > 0 )
      {
        v38 = 0;
        i = 0;
        do
        {
          v39 = &iItemIndexa->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v38];
          if ( v39->m_iNextNode >= -1 )
          {
            m_elem = v39->m_elem;
            if ( (*(m_elem->_vptr_IEconItemDefinition + 16))(m_elem) == 0 )
            {
              v41 = (*(m_elem->_vptr_IEconItemDefinition + 9))(m_elem);
              if ( v41 > 0 )
              {
                v42 = DOTAInventoryManager();
                ItemSlotsForHero = CDOTAInventoryManager::GetItemSlotsForHero(v42, v41);
                if ( ItemSlotsForHero != 0 )
                {
                  v44 = 0;
                  while ( LODWORD(m_elem[1].m_pKVItem) != ItemSlotsForHero->m_nSlotTypes[v44] )
                  {
                    if ( ++v44 == 16 )
                      goto LABEL_45;
                  }
                  v53 = &ItemSlotsForHero->m_szSlotText[v44];
                  m_pString = v53[64].m_pString;
                  if ( m_pString != 0 && *m_pString > 0 )
                  {
                    v46 = 0;
                    v54 = (8LL * (*m_pString - 1) + 8);
                    while ( 1 )
                    {
                      if ( m_pString != 0 )
                        v49 = CUtlString::Get((v46 + *(m_pString + 1)));
                      else
                        v49 = 0;
                      if ( V_stristr_fast(pCharacterName, v49) != 0 )
                      {
                        m_pAsString = m_elem->m_symDefinitionName.u.m_pAsString;
                        v62.m_pString = 0;
                        CUtlString::Set(&v62, m_pAsString);
                        m_Size = econItemNames->m_Size;
                        v52 = econItemNames->m_Size;
                        if ( m_Size == econItemNames->m_Memory.m_nAllocationCount )
                        {
                          CUtlMemory<CUtlString,int>::Grow(&econItemNames->m_Memory, 1);
                          v52 = econItemNames->m_Size;
                        }
                        econItemNames->m_Size = v52 + 1;
                        v47 = &econItemNames->m_Memory.m_pMemory[m_Size];
                        if ( v47 != 0 )
                        {
                          v47->m_pString = 0;
                          v48 = CUtlString::Get(&v62);
                          CUtlString::Set(v47, v48);
                        }
                        if ( v62.m_pString != 0 )
                          CUtlString::FreeMemoryBlock(&v62);
                      }
                      v46 = (v46 + 8);
                      if ( v46 == v54 )
                        break;
                      m_pString = v53[64].m_pString;
                    }
                  }
                }
              }
            }
          }
LABEL_45:
          ++i;
          ++v38;
        }
        while ( iItemIndexa->m_itemSchema.m_mapItems.m_nMaxElement > i );
      }
    }
  }
  else
  {
    if ( !bExcludeIndividualItems )
    {
      v27 = ItemSystem();
      if ( v27->m_itemSchema.m_mapItems.m_nMaxElement > 0 )
      {
        v28 = 0;
        v29 = 0;
        do
        {
          v30 = &v27->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v28];
          if ( v30->m_iNextNode >= -1 )
          {
            v31 = v30->m_elem;
            if ( (*(v31->_vptr_IEconItemDefinition + 16))(v31) == 0
              && CEconItemDefinition::HasHeroID(v31, nHeroIDFromName) )
            {
              v32 = v31->m_symDefinitionName.u.m_pAsString;
              v62.m_pString = 0;
              CUtlString::Set(&v62, v32);
              v33 = econItemNames->m_Size;
              v34 = econItemNames->m_Size;
              if ( v33 == econItemNames->m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CUtlString,int>::Grow(&econItemNames->m_Memory, 1);
                v34 = econItemNames->m_Size;
              }
              econItemNames->m_Size = v34 + 1;
              v35 = &econItemNames->m_Memory.m_pMemory[v33];
              if ( v35 != 0 )
              {
                v35->m_pString = 0;
                v36 = CUtlString::Get(&v62);
                CUtlString::Set(v35, v36);
              }
              if ( v62.m_pString != 0 )
                CUtlString::FreeMemoryBlock(&v62);
            }
          }
          ++v29;
          ++v28;
        }
        while ( v27->m_itemSchema.m_mapItems.m_nMaxElement > v29 );
      }
    }
    if ( !bExcludeItemSets )
    {
      v62.m_pString = 0;
      CUtlString::Set(&v62, "Base Item Set");
      v9 = econItemNames->m_Size;
      v10 = econItemNames->m_Size;
      if ( v9 == econItemNames->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&econItemNames->m_Memory, 1);
        v10 = econItemNames->m_Size;
      }
      econItemNames->m_Size = v10 + 1;
      v11 = &econItemNames->m_Memory.m_pMemory[v9];
      if ( v11 != 0 )
      {
        v11->m_pString = 0;
        v12 = CUtlString::Get(&v62);
        CUtlString::Set(v11, v12);
      }
      if ( v62.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v62);
      v13 = ItemSystem();
      m_Root = v13->m_itemSchema.m_mapItemSets.m_Tree.m_Root;
      v15 = v13;
      if ( m_Root != -1 )
      {
        m_pMemory = v13->m_itemSchema.m_mapItemSets.m_Tree.m_Elements.m_pMemory;
        v17 = m_Root;
        m_Left = m_pMemory[m_Root].m_Left;
        if ( m_Left == -1 )
        {
          m_Left = m_Root;
        }
        else
        {
          while ( 1 )
          {
            v17 = m_Left;
            if ( m_pMemory[m_Left].m_Left == -1 )
              break;
            m_Left = m_pMemory[m_Left].m_Left;
          }
        }
        while ( 1 )
        {
          elem = m_pMemory[v17].m_Data.elem;
          if ( (*(elem->_vptr_IEconItemSetDefinition + 4))(elem) != 0 )
          {
            iItemIndexb.m_Data = (*(elem->_vptr_IEconItemSetDefinition + 5))(elem, 0);
            v20 = ItemSystem();
            ItemDefinition = CEconItemSchema::GetItemDefinition(&v20->m_itemSchema, iItemIndexb, 0);
            if ( ItemDefinition != 0 && CEconItemDefinition::HasHeroID(ItemDefinition, nHeroIDFromName) )
            {
              iItemIndexc = *(*g_pLocalize + 288LL);
              v22 = (*(elem->_vptr_IEconItemSetDefinition + 1))(elem);
              v23 = iItemIndexc(g_pLocalize, v22);
              v62.m_pString = 0;
              CUtlString::Set(&v62, v23);
              v24 = econItemNames->m_Size;
              if ( v24 == econItemNames->m_Memory.m_nAllocationCount )
                CUtlMemory<CUtlString,int>::Grow(&econItemNames->m_Memory, 1);
              ++econItemNames->m_Size;
              v25 = &econItemNames->m_Memory.m_pMemory[v24];
              if ( v25 != 0 )
              {
                v25->m_pString = 0;
                v26 = CUtlString::Get(&v62);
                CUtlString::Set(v25, v26);
              }
              if ( v62.m_pString != 0 )
                CUtlString::FreeMemoryBlock(&v62);
            }
          }
          m_Left = CUtlRBTree<CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int,CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int>,int>>::NextInorder(
                     &v15->m_itemSchema.m_mapItemSets.m_Tree,
                     m_Left);
          if ( m_Left == -1 )
            break;
          m_pMemory = v15->m_itemSchema.m_mapItemSets.m_Tree.m_Elements.m_pMemory;
          v17 = m_Left;
        }
      }
    }
  }
}


// AddInfoForEconItem  (line 1688, @0x000000000223b8a0, libserver.so)  // inlines: AddToTail, CUtlString, Construct<EconAttachedParticleSystemInfo_t>, CopyConstruct<CUtlString>, EconAttachedParticleSystemInfo_t, Element, GetAsset, GetDefinitionName, GetModelName, GetModifier, GetParticleSnapshotName, GetParticleSystemName, GetReplacementName, GetWithNull, GrowMemory, String, operator[], ~CUtlString
// calls: CUtlString::operator=, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, GetAssetModifier<CDOTAItemDefinition, CHeroModelChangeModifier>, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail, GetAssetModifier<CDOTAItemDefinition, CAdditionalWearableModifier>, GetAssetModifiers<CDOTAItemDefinition, CParticleCreateModifier>, GetAssetModifiers<CDOTAItemDefinition, CParticleModifier>, GetAssetModifier<CDOTAItemDefinition, CParticleSnapshotModifier>, V_stricmp_fast (17 total)
// callers: CSource2Server::GetEconItemsInfoForModel, CSource2Server::GetEconItemsInfoForCharacter
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall AddInfoForEconItem(KeyValues *pUnitKV, const CDOTAItemDefinition *pItemDef, EconItemInfo_t *pEconInfo)
{
  unsigned int v5; // ebx
  CUtlString *v6; // r12
  const char *v7; // rax
  const char *v8; // rax
  __int64 m_Size; // r12
  int v10; // eax
  const char *v11; // rax
  const CHeroModelChangeModifier *v12; // rax
  const char *v13; // rax
  const CAdditionalWearableModifier *Asset; // rax
  const char *v15; // rax
  const CUtlVector<const CParticleModifier*,CUtlMemory<const CParticleModifier*,int> > *v16; // r12
  int v17; // eax
  const char *v18; // rbx
  unsigned __int64 v19; // r14
  const CUtlString *v20; // r15
  const char *v21; // rax
  const char *v22; // r15
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // r14
  EconAttachedParticleSystemInfo_t *v26; // rax
  CUtlString *p_m_name; // r14
  const char *v28; // rax
  const char *v29; // rax
  item_definition_index_t v30; // bx
  CEconItemSystem *v31; // rax
  const CDOTAItemDefinition *ItemDefinition; // rax
  CUtlVectorBase<EconAttachedParticleSystemInfo_t,CUtlMemory<EconAttachedParticleSystemInfo_t,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-88h]
  __int64 v34; // [rsp+20h] [rbp-70h]
  const CParticleSnapshotModifier *pSnapshotModifier; // [rsp+28h] [rbp-68h]
  int nModifierCounta; // [rsp+30h] [rbp-60h]
  const CUtlVector<const CParticleCreateModifier*,CUtlMemory<const CParticleCreateModifier*,int> > *pCreateModifiers; // [rsp+38h] [rbp-58h]
  EconItemInfo_t *pEconInfoa; // [rsp+40h] [rbp-50h]
  int nModels; // [rsp+48h] [rbp-48h]
  unsigned __int64 nModelsa; // [rsp+48h] [rbp-48h]
  CUtlString src; // [rsp+50h] [rbp-40h] BYREF

  v5 = 0;
  pEconInfo->m_bReplaceMainModel = 0;
  CUtlString::operator=(&pEconInfo->m_itemName, pItemDef->m_symDefinitionName.u.m_pAsString);
  nModels = (*(pItemDef->_vptr_IEconItemDefinition + 6))(pItemDef);
  if ( nModels > 0 )
  {
    do
    {
      v8 = (*(pItemDef->_vptr_IEconItemDefinition + 7))(pItemDef, v5);
      src.m_pString = 0;
      CUtlString::Set(&src, v8);
      m_Size = pEconInfo->m_modelNames.m_Size;
      v10 = pEconInfo->m_modelNames.m_Size;
      if ( m_Size == pEconInfo->m_modelNames.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pEconInfo->m_modelNames.m_Memory, 1);
        v10 = pEconInfo->m_modelNames.m_Size;
      }
      pEconInfo->m_modelNames.m_Size = v10 + 1;
      v6 = &pEconInfo->m_modelNames.m_Memory.m_pMemory[m_Size];
      if ( v6 != 0 )
      {
        v6->m_pString = 0;
        v7 = CUtlString::Get(&src);
        CUtlString::Set(v6, v7);
      }
      if ( src.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&src);
      ++v5;
    }
    while ( v5 != nModels );
  }
  v11 = (*(pItemDef->_vptr_IEconItemDefinition + 11))(pItemDef);
  CUtlString::operator=(&pEconInfo->m_slotName, v11);
  v12 = GetAssetModifier<CDOTAItemDefinition,CHeroModelChangeModifier>(pItemDef);
  if ( v12 != 0 )
  {
    v13 = CUtlString::Get(&v12->m_strModifier);
    src.m_pString = 0;
    CUtlString::Set(&src, v13);
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(&pEconInfo->m_modelNames, &src);
    if ( src.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&src);
    pEconInfo->m_bReplaceMainModel = 1;
  }
  Asset = GetAssetModifier<CDOTAItemDefinition,CAdditionalWearableModifier>(pItemDef);
  if ( Asset != 0 )
  {
    v15 = CUtlString::Get(&Asset->m_strAsset);
    src.m_pString = 0;
    CUtlString::Set(&src, v15);
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(&pEconInfo->m_modelNames, &src);
    if ( src.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&src);
  }
  pCreateModifiers = GetAssetModifiers<CDOTAItemDefinition,CParticleCreateModifier>(pItemDef);
  v16 = GetAssetModifiers<CDOTAItemDefinition,CParticleModifier>(pItemDef);
  pSnapshotModifier = GetAssetModifier<CDOTAItemDefinition,CParticleSnapshotModifier>(pItemDef);
  if ( pCreateModifiers != 0 || pUnitKV == 0 )
  {
LABEL_18:
    if ( pCreateModifiers != 0 )
      v17 = pCreateModifiers->m_Size;
    else
      v17 = 0;
    if ( v16 != 0 )
      goto LABEL_21;
    goto LABEL_43;
  }
  v30.m_Data = KeyValues::GetInt(pUnitKV, "wearable", INVALID_ITEM_DEF_INDEX.m_Data);
  if ( v30.m_Data != INVALID_ITEM_DEF_INDEX.m_Data )
  {
    v31 = ItemSystem();
    ItemDefinition = CEconItemSchema::GetItemDefinition(&v31->m_itemSchema, v30, 0);
    pCreateModifiers = GetAssetModifiers<CDOTAItemDefinition,CParticleCreateModifier>(ItemDefinition);
    goto LABEL_18;
  }
  v17 = 0;
  pCreateModifiers = 0;
  if ( v16 != 0 )
  {
LABEL_21:
    nModifierCounta = v16->m_Size;
    goto LABEL_22;
  }
LABEL_43:
  nModifierCounta = 0;
LABEL_22:
  if ( v17 > 0 )
  {
    nModelsa = 0;
    pEconInfoa = pEconInfo;
    v34 = 8LL * (v17 - 1) + 8;
    p_m_Memory = &pEconInfo->m_attachedParticleSystems.m_Memory;
    do
    {
      v18 = CUtlString::Get(&pCreateModifiers->m_Memory.m_pMemory[nModelsa / 8]->m_strModifier);
      if ( nModifierCounta <= 0 )
      {
LABEL_37:
        v22 = v18;
      }
      else
      {
        v19 = 0;
        while ( 1 )
        {
          v20 = v16->m_Memory.m_pMemory[v19 / 8];
          v21 = CUtlString::Get(v20 + 1);
          if ( V_stricmp_fast(v18, v21) == 0 )
            break;
          v19 += 8LL;
          if ( v19 == 8LL * (nModifierCounta - 1) + 8 )
            goto LABEL_37;
        }
        v22 = CUtlString::Get(v20 + 2);
      }
      v23 = pEconInfoa->m_attachedParticleSystems.m_Size;
      v24 = pEconInfoa->m_attachedParticleSystems.m_Size;
      if ( v23 == pEconInfoa->m_attachedParticleSystems.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<EconAttachedParticleSystemInfo_t,int>::Grow(p_m_Memory, 1);
        v24 = pEconInfoa->m_attachedParticleSystems.m_Size;
      }
      v25 = v23;
      pEconInfoa->m_attachedParticleSystems.m_Size = v24 + 1;
      v26 = &pEconInfoa->m_attachedParticleSystems.m_Memory.m_pMemory[v25];
      if ( v26 != 0 )
      {
        v26->m_name.m_pString = 0;
        v26->m_controlPointAutoUpdateName.m_pString = 0;
        v26->m_originalSnapshotName.m_pString = 0;
        v26->m_replacementSnapshotName.m_pString = 0;
        p_m_name = &pEconInfoa->m_attachedParticleSystems.m_Memory.m_pMemory[v25].m_name;
      }
      else
      {
        p_m_name = 0;
      }
      CUtlString::operator=(p_m_name + 1, v18);
      CUtlString::operator=(p_m_name, v22);
      if ( pSnapshotModifier != 0 )
      {
        v28 = CUtlString::Get(&pSnapshotModifier->m_strAsset);
        CUtlString::operator=(p_m_name + 2, v28);
        v29 = CUtlString::Get(&pSnapshotModifier->m_strModifier);
        CUtlString::operator=(p_m_name + 3, v29);
      }
      nModelsa += 8LL;
    }
    while ( nModelsa != v34 );
  }
}


// CSource2Server::GetEconItemsInfoForModel  (line 1760, @0x000000000223bcf0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<EconItemInfo_t>, EconItemInfo_t, Element, GrowMemory, V_isempty, operator[]
// calls: CSource2Server::FindUnitDataByModelNameCheckModelModifiers, KeyValues::GetName, AddInfoForEconItem, Warning, CUtlMemory<EconItemInfo_t, int>::Grow
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/gameinter
void __fastcall CSource2Server::GetEconItemsInfoForModel(
        CSource2Server *const this,
        const char *pModelName,
        const char *pEconItemName,
        bool bExcludeItemSets,
        bool bExcludeIndividualItems,
        bool bExcludeStockItemSet,
        CUtlVector<EconItemInfo_t,CUtlMemory<EconItemInfo_t,int> > *const econInfo)
{
  KeyValues *v10; // rax
  KeyValues *v11; // r14
  const char *Name; // rax
  __int64 m_Size; // r12
  int v14; // eax
  EconItemInfo_t *v15; // rdx
  EconItemInfo_t *v16; // rcx
  bool bIsUnit; // [rsp+27h] [rbp-39h] BYREF
  const CEconItemDefinition *pItemDef; // [rsp+28h] [rbp-38h] BYREF

  v10 = CSource2Server::FindUnitDataByModelNameCheckModelModifiers(this, pModelName, 1, &pItemDef, &bIsUnit);
  v11 = v10;
  if ( v10 != 0 && (Name = KeyValues::GetName(v10)) != 0 && *Name != 0 )
  {
    if ( bIsUnit && pItemDef != 0 )
    {
      m_Size = econInfo->m_Size;
      v14 = econInfo->m_Size;
      if ( m_Size == econInfo->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<EconItemInfo_t,int>::Grow(&econInfo->m_Memory, 1);
        v14 = econInfo->m_Size;
      }
      v15 = 0;
      econInfo->m_Size = v14 + 1;
      v16 = &econInfo->m_Memory.m_pMemory[m_Size];
      if ( v16 != 0 )
      {
        v16->m_itemName.m_pString = 0;
        v16->m_modelNames.m_Size = 0;
        v16->m_modelNames.m_Memory.m_pMemory = 0;
        v16->m_modelNames.m_Memory.m_nAllocationCount = 0;
        v16->m_modelNames.m_Memory.m_nGrowSize = 0;
        v16->m_slotName.m_pString = 0;
        v16->m_attachedParticleSystems.m_Size = 0;
        v16->m_attachedParticleSystems.m_Memory.m_pMemory = 0;
        v16->m_attachedParticleSystems.m_Memory.m_nAllocationCount = 0;
        v16->m_attachedParticleSystems.m_Memory.m_nGrowSize = 0;
        v15 = &econInfo->m_Memory.m_pMemory[m_Size];
      }
      AddInfoForEconItem(v11, pItemDef, v15);
    }
    else
    {
      (*(this->_vptr_IAppSystem + 51))(
        this,
        Name,
        pEconItemName,
        bExcludeItemSets,
        bExcludeIndividualItems,
        bExcludeStockItemSet,
        econInfo);
    }
  }
  else
  {
    Warning(
      "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/gameinterface.cpp(1769): Cannot fi"
      "nd a unit that uses model: \"%s\" ",
      pModelName);
  }
}


// CSource2Server::GetEconItemsInfoForCharacter  (line 1784, @0x000000000223be70, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<EconItemInfo_t>, EconItemInfo_t, Element, FirstInorder, GetSlotIndexBySlotType, GrowMemory, LeftChild, NextInorder, V_memset, memset, operator[]
// calls: DOTAGameManager, CDOTAGameManager::GetHeroIDByName, DOTAInventoryManager, CDOTAInventoryManager::GetItemSlotsForHero, V_stricmp_fast, CDOTAInventoryManager::GetBaseItemForHero, AddInfoForEconItem, CUtlMemory<EconItemInfo_t, int>::Grow, CDOTAGameManager::GetDataForHeroOrUnit, ItemSystem, CUtlRBTree<CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int>::Node_t, int, CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int>::Node_t, int>, int> >::NextInorder, CEconItemSchema::GetItemDefinition (13 total)
// strings: "Base Item Set"
void __fastcall CSource2Server::GetEconItemsInfoForCharacter(
        CSource2Server *const this,
        const char *pCharacterName,
        const char *pEconItemName,
        bool bExcludeItemSets,
        bool bExcludeIndividualItems,
        bool bExcludeStockItemSet,
        CUtlVector<EconItemInfo_t,CUtlMemory<EconItemInfo_t,int> > *const econInfo)
{
  CDOTAGameManager *v9; // rax
  int HeroIDByName; // r13d
  CDOTAInventoryManager *v11; // rax
  CDOTAHeroSlots *ItemSlotsForHero; // r15
  int v13; // eax
  const CDOTAItemDefinition **v14; // r14
  __int64 i; // r12
  CDOTAInventoryManager *v16; // rax
  CEconItemView *BaseItemForHero; // rdi
  const CDOTAItemDefinition *v18; // rax
  EconItemInfo_t *v19; // rdx
  EconItemInfo_t *v20; // rax
  const CDOTAItemDefinition *v21; // r13
  __int64 m_Size; // r15
  int v23; // eax
  CDOTAGameManager *v24; // rax
  KeyValues *DataForHeroOrUnit; // r13
  CEconItemSystem *v26; // rax
  __int64 v27; // rax
  const CDOTAItemDefinition *v28; // r12
  __int64 v29; // rdx
  CEconItemSystem *v30; // rax
  __int64 v31; // rax
  const CDOTAItemDefinition *v32; // r12
  __int64 v33; // r14
  EconItemInfo_t *v34; // rdx
  EconItemInfo_t *v35; // rax
  CEconItemSystem *v36; // rax
  int m_Root; // esi
  UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition*,int>::Node_t,int> *m_pMemory; // rcx
  __int64 v39; // rax
  int m_Left; // edx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  const CDOTAItemDefinition *v44; // rcx
  unsigned int v45; // r12d
  CEconItemSystem *v46; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  bool HasHeroID; // al
  __int64 v49; // rdx
  CEconItemSystem *bFoundSet; // [rsp+8h] [rbp-D8h]
  char bFoundSeta; // [rsp+8h] [rbp-D8h]
  unsigned int v53; // [rsp+14h] [rbp-CCh]
  int v54; // [rsp+14h] [rbp-CCh]
  bool bIsStockItemSet; // [rsp+18h] [rbp-C8h]
  __int64 (__fastcall *bIsStockItemSetb)(ILocalize *, __int64); // [rsp+18h] [rbp-C8h]
  const CDOTAItemDefinition *bIsStockItemSeta; // [rsp+18h] [rbp-C8h]
  const CDOTAItemDefinition *pSetItemDefa; // [rsp+20h] [rbp-C0h]
  item_definition_index_t pSetItemDefc; // [rsp+20h] [rbp-C0h]
  const CDOTAItemDefinition *pSetItemDefb; // [rsp+20h] [rbp-C0h]
  const CDOTAItemDefinition *ppItemDefs[16]; // [rsp+30h] [rbp-B0h] BYREF
  char v64; // [rsp+B0h] [rbp-30h] BYREF

  v9 = DOTAGameManager();
  HeroIDByName = CDOTAGameManager::GetHeroIDByName(v9, pCharacterName);
  if ( HeroIDByName >= 0 )
  {
    v11 = DOTAInventoryManager();
    ItemSlotsForHero = CDOTAInventoryManager::GetItemSlotsForHero(v11, HeroIDByName);
    if ( ItemSlotsForHero == 0 )
      return;
    v13 = V_stricmp_fast(pEconItemName, "Base Item Set");
    bIsStockItemSet = v13 == 0;
    if ( v13 != 0 && bExcludeStockItemSet )
    {
      v14 = ppItemDefs;
      memset(ppItemDefs, 0, sizeof(ppItemDefs));
    }
    else
    {
      v14 = ppItemDefs;
      for ( i = 0; i != 16; ++i )
      {
        v16 = DOTAInventoryManager();
        BaseItemForHero = CDOTAInventoryManager::GetBaseItemForHero(v16, HeroIDByName, i);
        v18 = 0;
        if ( BaseItemForHero != 0 )
          v18 = (*(BaseItemForHero->_vptr_IEconItemInterface + 12))(BaseItemForHero);
        ppItemDefs[i] = v18;
      }
      if ( bIsStockItemSet )
      {
        do
        {
LABEL_14:
          v21 = *v14;
          if ( *v14 != 0 )
          {
            m_Size = econInfo->m_Size;
            v23 = econInfo->m_Size;
            if ( m_Size == econInfo->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<EconItemInfo_t,int>::Grow(&econInfo->m_Memory, 1);
              v23 = econInfo->m_Size;
            }
            v19 = 0;
            econInfo->m_Size = v23 + 1;
            v20 = &econInfo->m_Memory.m_pMemory[m_Size];
            if ( v20 != 0 )
            {
              v20->m_itemName.m_pString = 0;
              v20->m_modelNames.m_Size = 0;
              v20->m_modelNames.m_Memory.m_pMemory = 0;
              v20->m_modelNames.m_Memory.m_nAllocationCount = 0;
              v20->m_modelNames.m_Memory.m_nGrowSize = 0;
              v20->m_slotName.m_pString = 0;
              v20->m_attachedParticleSystems.m_Size = 0;
              v20->m_attachedParticleSystems.m_Memory.m_pMemory = 0;
              v20->m_attachedParticleSystems.m_Memory.m_nAllocationCount = 0;
              v20->m_attachedParticleSystems.m_Memory.m_nGrowSize = 0;
              v19 = &econInfo->m_Memory.m_pMemory[m_Size];
            }
            AddInfoForEconItem(0, v21, v19);
          }
          ++v14;
        }
        while ( v14 != &v64 );
        return;
      }
    }
    if ( bExcludeItemSets )
      goto LABEL_22;
    v36 = ItemSystem();
    m_Root = v36->m_itemSchema.m_mapItemSets.m_Tree.m_Root;
    bFoundSet = v36;
    if ( m_Root == -1 )
      goto LABEL_22;
    m_pMemory = v36->m_itemSchema.m_mapItemSets.m_Tree.m_Elements.m_pMemory;
    v39 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left == -1 )
    {
      m_Left = m_Root;
    }
    else
    {
      while ( 1 )
      {
        v39 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
    }
    while ( 1 )
    {
      v53 = m_Left;
      pSetItemDefa = m_pMemory[v39].m_Data.elem;
      bIsStockItemSetb = *(*g_pLocalize + 288LL);
      v41 = (*(pSetItemDefa->_vptr_IEconItemDefinition + 1))(pSetItemDefa);
      v42 = bIsStockItemSetb(g_pLocalize, v41);
      if ( V_stricmp_fast(v42, pEconItemName) == 0 )
        break;
      m_Left = CUtlRBTree<CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int,CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol,CEconItemSetDefinition *,int,bool (*)(CEconSchemaSymbol const&,CEconSchemaSymbol const&)>::Node_t,int>,int>>::NextInorder(
                 &bFoundSet->m_itemSchema.m_mapItemSets.m_Tree,
                 v53);
      if ( m_Left == -1 )
        goto LABEL_22;
      m_pMemory = bFoundSet->m_itemSchema.m_mapItemSets.m_Tree.m_Elements.m_pMemory;
      v39 = m_Left;
    }
    v54 = (*(pSetItemDefa->_vptr_IEconItemDefinition + 4))(pSetItemDefa, v43, v53);
    if ( v54 <= 0 )
      goto LABEL_22;
    v44 = pSetItemDefa;
    v45 = 0;
    bFoundSeta = 0;
    do
    {
      bIsStockItemSeta = v44;
      pSetItemDefc.m_Data = (*(v44->_vptr_IEconItemDefinition + 5))(v44, v45);
      v46 = ItemSystem();
      ItemDefinition = CEconItemSchema::GetItemDefinition(&v46->m_itemSchema, pSetItemDefc, 0);
      v44 = bIsStockItemSeta;
      if ( ItemDefinition != 0 )
      {
        pSetItemDefb = ItemDefinition;
        HasHeroID = CEconItemDefinition::HasHeroID(ItemDefinition, HeroIDByName);
        v44 = bIsStockItemSeta;
        if ( HasHeroID )
        {
          v49 = 0;
          while ( pSetItemDefb->m_nSlotType != ItemSlotsForHero->m_nSlotTypes[v49] )
          {
            if ( ++v49 == 16 )
              goto LABEL_52;
          }
          ppItemDefs[v49] = pSetItemDefb;
          bFoundSeta = 1;
        }
      }
LABEL_52:
      ++v45;
    }
    while ( v45 != v54 );
    if ( bFoundSeta == 0 )
    {
LABEL_22:
      if ( !bExcludeIndividualItems )
      {
        v26 = ItemSystem();
        v27 = (*(v26->m_itemSchema._vptr_IEconItemSchema + 41))(&v26->m_itemSchema, pEconItemName);
        v28 = v27;
        if ( v27 != 0 && (*(*v27 + 128LL))(v27) == 0 )
        {
          v29 = 0;
          while ( v28->m_nSlotType != ItemSlotsForHero->m_nSlotTypes[v29] )
          {
            if ( ++v29 == 16 )
              goto LABEL_14;
          }
          ppItemDefs[v29] = v28;
        }
      }
    }
    goto LABEL_14;
  }
  v24 = DOTAGameManager();
  DataForHeroOrUnit = CDOTAGameManager::GetDataForHeroOrUnit(v24, pCharacterName);
  if ( DataForHeroOrUnit != 0 )
  {
    v30 = ItemSystem();
    v31 = (*(v30->m_itemSchema._vptr_IEconItemSchema + 41))(&v30->m_itemSchema, pEconItemName);
    v32 = v31;
    if ( v31 != 0 && (*(*v31 + 128LL))(v31) == 0 )
    {
      v33 = econInfo->m_Size;
      if ( v33 == econInfo->m_Memory.m_nAllocationCount )
        CUtlMemory<EconItemInfo_t,int>::Grow(&econInfo->m_Memory, 1);
      v34 = 0;
      ++econInfo->m_Size;
      v35 = &econInfo->m_Memory.m_pMemory[v33];
      if ( v35 != 0 )
      {
        v35->m_itemName.m_pString = 0;
        v35->m_modelNames.m_Size = 0;
        v35->m_modelNames.m_Memory.m_pMemory = 0;
        v35->m_modelNames.m_Memory.m_nAllocationCount = 0;
        v35->m_modelNames.m_Memory.m_nGrowSize = 0;
        v35->m_slotName.m_pString = 0;
        v35->m_attachedParticleSystems.m_Size = 0;
        v35->m_attachedParticleSystems.m_Memory.m_pMemory = 0;
        v35->m_attachedParticleSystems.m_Memory.m_nAllocationCount = 0;
        v35->m_attachedParticleSystems.m_Memory.m_nGrowSize = 0;
        v34 = &econInfo->m_Memory.m_pMemory[v33];
      }
      AddInfoForEconItem(DataForHeroOrUnit, v32, v34);
    }
  }
}


// CSource2Server::GetDefaultScaleForModel  (line 1889, @0x000000000223b810, libserver.so)
// calls: CSource2Server::FindUnitDataByModelNameCheckModelModifiers, KeyValues::GetFloat
// strings: "LoadoutScale"
float __fastcall CSource2Server::GetDefaultScaleForModel(
        CSource2Server *const this,
        const char *pModelName,
        bool bCheckLoadoutScale)
{
  KeyValues *v4; // rax
  float v5; // xmm1_4
  float result; // xmm0_4
  KeyValues *pKV; // [rsp+8h] [rbp-28h]
  bool bIsUnit; // [rsp+17h] [rbp-19h] BYREF
  const CEconItemDefinition *pItemDef; // [rsp+18h] [rbp-18h] BYREF

  v4 = CSource2Server::FindUnitDataByModelNameCheckModelModifiers(this, pModelName, 1, &pItemDef, &bIsUnit);
  if ( v4 == 0 )
    return 1.0;
  if ( !bCheckLoadoutScale )
    return KeyValues::GetFloat(v4, "ModelScale", v5);
  pKV = v4;
  result = KeyValues::GetFloat(v4, "LoadoutScale", v5);
  v5 = 0.0;
  v4 = pKV;
  if ( result <= 0.0 )
    return KeyValues::GetFloat(v4, "ModelScale", v5);
  return result;
}


// CSource2Server::GetDefaultScaleForCharacter  (line 1912, @0x000000000221c650, libserver.so)
// calls: DOTAGameManager, CDOTAGameManager::GetDataForHeroOrUnit, KeyValues::GetFloat
// strings: "LoadoutScale"
float __fastcall CSource2Server::GetDefaultScaleForCharacter(
        CSource2Server *const this,
        const char *pCharacterName,
        bool bCheckLoadoutScale)
{
  CDOTAGameManager *v5; // rax
  KeyValues *DataForHeroOrUnit; // rax
  float v7; // xmm1_4
  float result; // xmm0_4
  KeyValues *pKV; // [rsp+8h] [rbp-18h]

  v5 = DOTAGameManager();
  DataForHeroOrUnit = CDOTAGameManager::GetDataForHeroOrUnit(v5, pCharacterName);
  if ( DataForHeroOrUnit == 0 )
    return 1.0;
  if ( !bCheckLoadoutScale )
    return KeyValues::GetFloat(DataForHeroOrUnit, "ModelScale", v7);
  pKV = DataForHeroOrUnit;
  result = KeyValues::GetFloat(DataForHeroOrUnit, "LoadoutScale", v7);
  v7 = 0.0;
  DataForHeroOrUnit = pKV;
  if ( result <= 0.0 )
    return KeyValues::GetFloat(DataForHeroOrUnit, "ModelScale", v7);
  return result;
}


// CSource2Server::GetDefaultControlPointAutoUpdates  (line 1933, @0x000000000223a1d0, libserver.so)  // inlines: AddToTail, CUtlString, Construct<EconControlPointInfo_t>, EconControlPointInfo_t, Element, GrowMemory, String, operator[]
// calls: ItemSystem, CUtlString::operator=, CUtlMemory<EconControlPointInfo_t, int>::Grow
bool __fastcall CSource2Server::GetDefaultControlPointAutoUpdates(
        CSource2Server *const this,
        const char *pParticleSystemName,
        CUtlVector<EconControlPointInfo_t,CUtlMemory<EconControlPointInfo_t,int> > *const autoUpdates)
{
  CEconItemSystem *v5; // rax
  __int64 v6; // rbx
  bool result; // al
  __int64 m_Size; // r12
  bool v9; // r13
  int v10; // eax
  __int64 v11; // r12
  EconControlPointInfo_t *v12; // rax
  EconControlPointInfo_t *v13; // r12
  int v14; // r12d
  __int64 v15; // r14
  int v16; // esi
  EconControlPointInfo_t *v17; // r12
  const char *v18; // rsi
  __int16 *v19; // rax
  int v20; // r12d
  int v21; // esi
  EconControlPointInfo_t *v22; // rsi
  EconControlPointInfo_t *v23; // rcx
  __int16 *v24; // [rsp+0h] [rbp-50h]
  __int64 v25; // [rsp+10h] [rbp-40h]
  __int64 v26; // [rsp+18h] [rbp-38h]

  v5 = ItemSystem();
  v6 = (*(v5->m_itemSchema._vptr_IEconItemSchema + 16))(&v5->m_itemSchema, pParticleSystemName, 0);
  result = 0;
  if ( v6 != 0 )
  {
    m_Size = autoUpdates->m_Size;
    v9 = *(v6 + 64) == 1;
    v10 = autoUpdates->m_Size;
    if ( m_Size == autoUpdates->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<EconControlPointInfo_t,int>::Grow(&autoUpdates->m_Memory, 1);
      v10 = autoUpdates->m_Size;
    }
    autoUpdates->m_Size = v10 + 1;
    v11 = m_Size;
    v25 = v11 * 24;
    v12 = &autoUpdates->m_Memory.m_pMemory[v11];
    if ( v12 != 0 )
    {
      v12->m_attachmentName.m_pString = 0;
      v13 = &autoUpdates->m_Memory.m_pMemory[v11];
    }
    else
    {
      v13 = 0;
    }
    v13->m_nControlPointIndex = 0;
    v13->m_nAttachmentType = *(v6 + 60);
    CUtlString::operator=(&v13->m_attachmentName, "");
    v13->m_bAttachToParent = v9;
    v14 = *(v6 + 72);
    if ( v14 > 0 )
    {
      v15 = 0;
      v26 = 32 * ((v14 - 1) + 1LL);
      do
      {
        v19 = (*(v6 + 80) + v15);
        if ( *v19 != 0 )
        {
          v20 = autoUpdates->m_Size;
          v21 = autoUpdates->m_Size;
          if ( autoUpdates->m_Size == autoUpdates->m_Memory.m_nAllocationCount )
          {
            v24 = (*(v6 + 80) + v15);
            CUtlMemory<EconControlPointInfo_t,int>::Grow(&autoUpdates->m_Memory, 1);
            v21 = autoUpdates->m_Size;
            v19 = v24;
          }
          autoUpdates->m_Size = v21 + 1;
          v22 = &autoUpdates->m_Memory.m_pMemory[v20];
          if ( v22 != 0 )
          {
            v22->m_attachmentName.m_pString = 0;
            v23 = &autoUpdates->m_Memory.m_pMemory[v20];
          }
          else
          {
            v23 = 0;
          }
          v16 = *v19;
          v17 = v23;
        }
        else
        {
          v16 = 0;
          v17 = (autoUpdates->m_Memory.m_pMemory + v25);
        }
        v17->m_nControlPointIndex = v16;
        v17->m_nAttachmentType = *(v19 + 2);
        v18 = "";
        if ( *(v19 + 1) != 0 )
          v18 = *(v19 + 1);
        v15 += 32;
        CUtlString::operator=(&v17->m_attachmentName, v18);
        v17->m_bAttachToParent = v9;
      }
      while ( v15 != v26 );
    }
    return 1;
  }
  return result;
}


// CSource2Server::PreWorldUpdate  (line 1973, @0x000000000221c480, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventServerPreClientUpdate_t&)>, DispatchEvent<EventServerPreClientUpdate_t>, GetVTableIndex, ~CDontUseThisGameSystem
// calls: IsGameActive, IGameSystem::DispatchEventInternal, IGameSystem::~IGameSystem, __cxa_guard_acquire, __cxa_guard_release, _Unwind_Resume
// globals: EventServerPreClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSy, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServer
// local variable allocation has failed, the output may be wrong!
void __fastcall CSource2Server::PreWorldUpdate(CSource2Server *const this, bool simulating)
{
  GameSystemEventId_t v3; // edi
  __int64 (__fastcall **msg)(IGameSystem *__hidden); // [rsp+0h] [rbp-20h] OVERLAPPED BYREF

  if ( IsGameActive() && simulating )
  {
    v3 = EventServerPreClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex;
    if ( EventServerPreClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
    {
      msg = off_3FC3E30;
      if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew == 0
        && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew) != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew);
      }
      msg = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew;
      EventServerPreClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew
                                                                              + 208))(&msg);
      msg = off_3FC3E30;
      IGameSystem::~IGameSystem(&msg);
      v3 = EventServerPreClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex;
    }
    IGameSystem::DispatchEventInternal(v3, 0xD1uLL, &msg);
  }
}


// CSource2Server::GetAllServerClasses  (line 1992, @0x000000000221a710, libserver.so)
// globals: ServerClass::sm_pServerClassHead
ServerClass *__fastcall CSource2Server::GetAllServerClasses(CSource2Server *const this)
{
  return ServerClass::sm_pServerClassHead;
}


// CSource2Server::GameCreateNetworkStringTables  (line 2003, @0x000000000221ade0, libserver.so)  // inlines: Init
// calls: LoggingSystem_IsChannelEnabled, PrecacheEffect, LoggingSystem_Log
// strings: "Forcing S1 g_pNetworkStringTable to use version from engine.dll\n"
// globals: networkstringtable, LOG_SERVER
void __fastcall CSource2Server::GameCreateNetworkStringTables(CSource2Server *const this)
{
  if ( g_pNetworkStringTable != networkstringtable )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      LoggingSystem_Log(LOG_SERVER, 2, "Forcing S1 g_pNetworkStringTable to use version from engine.dll\n");
    g_pNetworkStringTable = networkstringtable;
  }
  g_pGameNetworkStringTables->InitStringTableDefinitions();
  (*(g_pGameNetworkStringTables->_vptr_IGameNetworkStringTables + 2))(g_pGameNetworkStringTables);
  PrecacheEffect("error", 0);
  g_VguiScreenStringOps.m_pStringTable = g_pStringTableVguiScreen;
}


// CSource2Server::GetLevelsFromSaveFile  (line 2023, @0x000000000221a720, libserver.so)  // inlines: GetSaveRestore
void __fastcall CSource2Server::GetLevelsFromSaveFile(
        CSource2Server *const this,
        const char *pSaveGame,
        CUtlVector<CCreateGameServerLoadInfo,CUtlMemory<CCreateGameServerLoadInfo,int> > *const list,
        bool bWipeDirectoryAndExtract,
        SaveFileLevelsType_t_0 saveFileLevelsType)
{
  (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 56LL))(
    *(&stru_1A0B8.r_offset + g_pGameEntitySystem),
    pSaveGame,
    list,
    bWipeDirectoryAndExtract,
    saveFileLevelsType);
}


// CSource2Server::ClearSaveDirectory  (line 2028, @0x000000000221a750, libserver.so)  // inlines: GetSaveRestore
void __fastcall CSource2Server::ClearSaveDirectory(CSource2Server *const this)
{
  (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 80LL))(*(&stru_1A0B8.r_offset + g_pGameEntitySystem));
}


// CSource2Server::ExtractResourcesFromSaveGame  (line 2033, @0x000000000221a770, libserver.so)  // inlines: GetSaveRestore
void __fastcall CSource2Server::ExtractResourcesFromSaveGame(
        const CSource2Server *const this,
        CCompressedResourceManifest *pCompressedManifestOut,
        ILoadingSpawnGroup *pLoadingSpawnGroup)
{
  (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 64LL))(
    *(&stru_1A0B8.r_offset + g_pGameEntitySystem),
    pCompressedManifestOut,
    pLoadingSpawnGroup);
}


// CSource2Server::AppendTransitionResources  (line 2038, @0x000000000221a790, libserver.so)  // inlines: GetSaveRestore
void __fastcall CSource2Server::AppendTransitionResources(
        const CSource2Server *const this,
        CCompressedResourceManifest *pCompressedManifestOut,
        ILoadingSpawnGroup *pLoadingSpawnGroup)
{
  (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 72LL))(
    *(&stru_1A0B8.r_offset + g_pGameEntitySystem),
    pCompressedManifestOut,
    pLoadingSpawnGroup);
}


// CSource2Server::SaveGame_CalcFileName  (line 2043, @0x000000000221ac10, libserver.so)  // inlines: GetSaveRestore, Length, String, V_strlen, V_strncpy<int>, ~CUtlString
// calls: CUtlString::Get, _V_strncpy, strlen, CUtlString::FreeMemoryBlock, _Unwind_Resume
bool __fastcall CSource2Server::SaveGame_CalcFileName(
        const CSource2Server *const this,
        const char *pName,
        char *output,
        int outputStringLength)
{
  const char *v6; // rax
  bool v8; // [rsp+Ch] [rbp-34h]
  CUtlString name; // [rsp+10h] [rbp-30h] BYREF

  (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 104LL))(
    &name,
    *(&stru_1A0B8.r_offset + g_pGameEntitySystem),
    pName);
  v6 = CUtlString::Get(&name);
  _V_strncpy(output, v6, outputStringLength);
  if ( name.m_pString == 0 )
    return 0;
  v8 = strlen(name.m_pString) > 0;
  CUtlString::FreeMemoryBlock(&name);
  return v8;
}


// CSource2Server::OnSaveSessionPersisters  (line 2050, @0x00000000022316a0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetInstance, Purge, String, V_FileBase<long unsigned int>, ~CUtlBuffer, ~CUtlMemory
// calls: _V_FileBase, V_sprintf_safe<260ul>, KeyValues::KeyValues, KeyValues::operator new, KeyValues::AddSubKey, CUtlBuffer::CUtlBuffer, KeyValues::RecursiveSaveToFile, KeyValues::~KeyValues, CUtlMemory<unsigned char, int>::Purge, __stack_chk_fail, _Unwind_Resume, KeyValues::operator delete
// callers: sv_save_session_persisters, CSingleplayRules::PreSpawnGroupUnload
// strings: "save/%s.spe", "persister_entities"
// globals: filesystem
void __fastcall CSource2Server::OnSaveSessionPersisters(CSource2Server *const this)
{
  CEntityIdentity *m_pFirstActiveEntity; // rbx
  char v2; // al
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r14
  KeyValues *v6; // r13
  CUtlBuffer buf; // [rsp+10h] [rbp-2C0h] BYREF
  KeyValues kvData; // [rsp+60h] [rbp-270h] BYREF
  char szMapName[272]; // [rsp+80h] [rbp-250h] BYREF
  char szSaveName[260]; // [rsp+190h] [rbp-140h] BYREF
  unsigned __int64 v11; // [rsp+298h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  _V_FileBase(gpGlobals->mapname, szMapName, 260);
  V_sprintf_safe<260ul>(szSaveName, "save/%s.spe", szMapName);
  KeyValues::KeyValues(&kvData, "persister_entities");
  m_pFirstActiveEntity = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity;
  if ( m_pFirstActiveEntity != 0 )
  {
    v2 = 0;
    do
    {
      m_pInstance = m_pFirstActiveEntity->m_pInstance;
      if ( BYTE1(m_pFirstActiveEntity->m_pInstance[11].m_CScriptComponent) != 0 )
      {
        m_pEntity = m_pInstance->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        v6 = KeyValues::operator new(0x14u);
        KeyValues::KeyValues(v6, m_pAsString);
        (*(m_pInstance->_vptr_IHandleEntity + 76))(m_pInstance, v6, &kvData);
        KeyValues::AddSubKey(&kvData, v6);
        v2 = 1;
      }
      m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
    }
    while ( m_pFirstActiveEntity != 0 );
    if ( v2 != 0 )
    {
      CUtlBuffer::CUtlBuffer(&buf, 0, 0, 1);
      KeyValues::RecursiveSaveToFile(&kvData, &buf, 0, 1);
      (*(filesystem->_vptr_IAppSystem + 27))(filesystem, "save", "MOD");
      (*(filesystem->_vptr_IBaseFileSystem + 15))(&filesystem->IBaseFileSystem, szSaveName, "MOD", &buf);
      if ( (buf.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
    }
  }
  KeyValues::~KeyValues(&kvData);
}


// CSource2Server::OnLoadSessionPersisters  (line 2087, @0x000000000223a3a0, libserver.so)  // inlines: AddKeyValue<char const*>, AddKeyValue<int>, AddKeyValue<long long unsigned int>, AddToTail, Allocate, Base, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyData, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, Element, EntitySpawnerAsyncDesc_t, FastDelegate2, FilterSpawnGroupEntity, FindKeyHash, Free, GetClassInfo, GetInt, IsEmpty, MakeStringToken, OverrideAllocator, Purge, QAngle, QueueContextCallbacks, Release, ReleaseEntitySpawnerEntityVariantAllocator, RemoveAll, SetClassName, SetMementoFrom, SetPtrValue, SetToIdentity, SetValue, SetValue<QAngle>, SetValue<Vector>, SetValue<int>, SetValue<long long unsigned int>, SetWorldTransform, Spawn, SpawnInternal, V_FileBase<long unsigned int>, V_strlen, Vector, _V_strcmp, memcpy, operator!, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: _V_FileBase, V_sprintf_safe<260ul>, KeyValues::~KeyValues, KeyValues::operator delete, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::GetFirstSubKey, KeyValues::GetName, KeyValues::GetNextKey, KeyValues::GetFloat, CEntityKeyValuesModifyScope::BeginModify (44 total)
// callers: CSingleplayRules::PostSpawnGroupLoad
// strings: "save/%s.spe", "persister_entities", "originZ", "originY", "originX", "anglesZ" (11 total)
// globals: engine, CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CSource2Server::OnLoadSessionPersisters(CSource2Server *const this)
{
  KeyValues *m_pkvSessionPersisterEntities; // rbx
  KeyValues *v3; // rbx
  IBaseFileSystem *v4; // rsi
  KeyValues *FirstSubKey; // r15
  float v6; // xmm1_4
  __m128i v7; // xmm0
  vec_t v8; // ebx
  float v9; // xmm1_4
  __m128i v10; // xmm0
  vec_t v11; // r12d
  float v12; // xmm1_4
  float v13; // xmm1_4
  __m128i v14; // xmm0
  vec_t v15; // ebx
  float v16; // xmm1_4
  __m128i v17; // xmm0
  vec_t v18; // r12d
  float v19; // xmm1_4
  vec_t Float; // xmm0_4
  const char *Name; // rbx
  KeyValues *Key; // rax
  KeyValues *i; // rax
  CEntityKeyValues *m_pEntityKeyValues; // r12
  const KeyValues *v25; // rbx
  const char *String; // r14
  const char *v27; // rax
  uint32 v28; // r13d
  const char *v29; // r12
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v31; // cx
  __int64 v32; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v33; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r12
  __int16 v37; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v41; // r13
  uint16 m_flags; // ax
  void *v43; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rax
  bool v45; // zf
  __int16 v46; // ax
  signed int v47; // r13d
  void *v48; // rax
  KeyValues *v49; // r12
  CEntityKeyValues *v50; // rbx
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  CEntityKeyValues *v53; // r12
  CEntityInstance *v54; // r13
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  CEntityInstance *m_pCompletionListener; // r8
  __int64 pfn; // rdx
  CUtlScratchMemoryPool *v58; // rdi
  CEntityKeyValues *v59; // rbx
  CBasePlayer *v61; // rax
  CBaseEntity *v62; // rbx
  __int64 v63; // r13
  unsigned __int64 v64; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v65; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v66; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v67; // rax
  uint16 v68; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // rax
  int v70; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v71; // cx
  __int64 v72; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v73; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v78; // cx
  __int64 v79; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v80; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  int m_nEntitySpawnerDataUseCount; // ecx
  __int64 v85; // r12
  unsigned __int64 v86; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v87; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v88; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v89; // rax
  uint16 v90; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v91; // rax
  __int16 v92; // dx
  __int16 v93; // dx
  __int128 v94; // [rsp+0h] [rbp-400h]
  signed int v95; // [rsp+24h] [rbp-3DCh]
  SpawnGroupHandle_t hSpawnGroup[2]; // [rsp+38h] [rbp-3C8h]
  SpawnGroupHandle_t hSpawnGroupa[2]; // [rsp+38h] [rbp-3C8h]
  SpawnGroupHandle_t hSpawnGroupb; // [rsp+38h] [rbp-3C8h]
  CEntityKeyValues *v99; // [rsp+40h] [rbp-3C0h] BYREF
  CEntityKeyValues *v100; // [rsp+48h] [rbp-3B8h] BYREF
  Vector vOrigin; // [rsp+50h] [rbp-3B0h] BYREF
  QAngle vAngles; // [rsp+60h] [rbp-3A0h] BYREF
  int v103; // [rsp+70h] [rbp-390h] BYREF
  CEntityKeyValues **v104; // [rsp+78h] [rbp-388h] BYREF
  int v105; // [rsp+80h] [rbp-380h]
  int v106; // [rsp+84h] [rbp-37Ch]
  int v107; // [rsp+90h] [rbp-370h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v108; // [rsp+98h] [rbp-368h] BYREF
  __int64 v109[4]; // [rsp+B0h] [rbp-350h] BYREF
  EntitySpawnerAsyncDesc_t<CBaseEntity> spawnerDesc; // [rsp+D0h] [rbp-330h] BYREF
  CEntitySpawnerAsync<CBaseEntity> spawner; // [rsp+100h] [rbp-300h] BYREF
  char szMapName[272]; // [rsp+1B0h] [rbp-250h] BYREF
  char szLoadName[260]; // [rsp+2C0h] [rbp-140h] BYREF
  unsigned __int64 v114; // [rsp+3C8h] [rbp-38h]

  v114 = __readfsqword(0x28u);
  _V_FileBase(gpGlobals->mapname, szMapName, 260);
  V_sprintf_safe<260ul>(szLoadName, "save/%s.spe", szMapName);
  m_pkvSessionPersisterEntities = this->m_pkvSessionPersisterEntities;
  if ( m_pkvSessionPersisterEntities != 0 )
  {
    KeyValues::~KeyValues(this->m_pkvSessionPersisterEntities);
    KeyValues::operator delete(m_pkvSessionPersisterEntities);
  }
  v3 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v3, "persister_entities");
  v4 = 0;
  this->m_pkvSessionPersisterEntities = v3;
  if ( g_pFullFileSystem != 0 )
    v4 = &g_pFullFileSystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(v3, v4, szLoadName, 0, 0) )
  {
    FirstSubKey = KeyValues::GetFirstSubKey(this->m_pkvSessionPersisterEntities);
    if ( FirstSubKey != 0 )
    {
      *(&v94 + 1) = &v104;
      do
      {
        *v7.m128i_i32 = KeyValues::GetFloat(FirstSubKey, "originZ", v6);
        v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
        *v10.m128i_i32 = KeyValues::GetFloat(FirstSubKey, "originY", v9);
        v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
        vOrigin.x = KeyValues::GetFloat(FirstSubKey, "originX", v12);
        vOrigin.y = v11;
        vOrigin.z = v8;
        *v14.m128i_i32 = KeyValues::GetFloat(FirstSubKey, "anglesZ", v13);
        v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
        *v17.m128i_i32 = KeyValues::GetFloat(FirstSubKey, "anglesY", v16);
        v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
        Float = KeyValues::GetFloat(FirstSubKey, "anglesX", v19);
        vAngles.y = v18;
        vAngles.x = Float;
        vAngles.z = v15;
        if ( sv_session_persister_mode.m_pParent->m_Value.m_nValue <= 1
          && strcmp(KeyValues::GetName(FirstSubKey), "info_procedural_spawn_manager") == 0 )
        {
          goto LABEL_11;
        }
        if ( strcmp(KeyValues::GetName(FirstSubKey), "player") == 0 )
        {
          if ( sv_session_persister_mode.m_pParent->m_Value.m_nValue > 2 )
          {
            v61 = UTIL_PlayerByIndex(1);
            v62 = v61;
            if ( v61 != 0 )
            {
              CBaseEntity::SetAbsOrigin(v61, &vOrigin);
              CBaseEntity::SetAbsAngles(v62, &vAngles);
            }
            else
            {
              CBasePlayer::SetSessionPersisterPosAng(&vOrigin, v94);
            }
          }
          goto LABEL_11;
        }
        spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
        spawner.m_modifyScope.m_pKeyValues = 0;
        spawner.m_modifyScope.m_pPrevAllocator = 0;
        CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
        spawner._vptr_CEntitySpawnerBase = off_3FCEC50;
        spawner.m_scriptClassName.m_pString = 0;
        spawner.m_pContext = 0;
        spawner.m_pFilter = 0;
        spawnerDesc.m_behavior = EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP;
        spawnerDesc.m_flTimeoutInterval = 2.0;
        spawnerDesc.m_pContext = 0;
        spawnerDesc.m_pSpawnGroupToWorld = 0;
        spawnerDesc.m_nManifestPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
        spawnerDesc.m_iPriorityLoader = -2;
        spawnerDesc.m_bManualCompletion = 0;
        spawnerDesc.m_worldGroupId.m_nHashCode = 0;
        spawnerDesc.m_hOwnerSpawnGroup = -1;
        CEntitySpawnerAsync<CBaseEntity>::Init(&spawner, &spawnerDesc);
        Name = KeyValues::GetName(FirstSubKey);
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, Name);
        spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, Name, &spawner.m_scriptClassName);
        CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, &vOrigin);
        CEntityKeyValues::SetValue<QAngle>(spawner.m_pEntityKeyValues, -1164387633, &vAngles);
        Key = KeyValues::FindKey(FirstSubKey, "values", 0);
        if ( Key != 0 )
        {
          for ( i = KeyValues::GetFirstSubKey(Key); ; i = KeyValues::GetNextKey(v25) )
          {
            v25 = i;
            if ( i == 0 )
              break;
            String = KeyValues::GetString(i, 0, "", 0, 0);
            v27 = KeyValues::GetName(v25);
            v28 = 0;
            v29 = v27;
            if ( v27 != 0 && *v27 != 0 && (v28 = MurmurHash2LowerCase(v27, 0x31415926u), g_bUpdateStringTokenDatabase) )
            {
              RegisterStringToken(v28, v29, 0, 1);
              m_pEntityKeyValues = spawner.m_pEntityKeyValues;
              if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
                continue;
            }
            else
            {
              m_pEntityKeyValues = spawner.m_pEntityKeyValues;
              if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
                continue;
            }
            m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
            if ( m_nCount <= 0 )
            {
LABEL_35:
              CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
              v37 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
              m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
              if ( m_nAllocated != 0 )
              {
                if ( m_nAllocated <= 9 )
                  m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                else
                  m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
              }
              else
              {
                m_pElements = 0;
              }
              m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = v28;
              *hSpawnGroup = v37;
              CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
              if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
                v40 = m_pEntityKeyValues->m_keyValues.m_pElements;
              else
                v40 = 0;
              v41 = &v40[*hSpawnGroup];
              *hSpawnGroupa = 24LL * *hSpawnGroup;
              m_flags = v41->m_value.m_flags;
              if ( (m_flags & 1) != 0 )
                v41->m_value.m_flags = m_flags & 0xFFFE;
              v41->m_value.m_uint64 = 0;
              v41->m_value.m_type = 30;
              if ( String != 0 )
              {
                v95 = strlen(String) + 1;
                v43 = CEntityVariantAllocator::Allocate(v95);
                v41->m_value.m_uint64 = v43;
                memcpy(v43, String, v95);
                v41->m_value.m_flags |= 1u;
              }
              if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
                v44 = m_pEntityKeyValues->m_keyValues.m_pElements;
              else
                v44 = 0;
              *(&v44->m_pAttributeName + *hSpawnGroupa) = 0;
              continue;
            }
            v31 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
            v32 = 0;
            while ( v31 == 0 )
            {
              if ( v28 == *(4 * v32) )
                goto LABEL_32;
LABEL_29:
              if ( m_nCount <= ++v32 )
                goto LABEL_35;
            }
            v33 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( v31 > 9 )
              v33 = m_pEntityKeyValues->m_keyHashes.m_pElements;
            if ( v28 != v33[v32] )
              goto LABEL_29;
LABEL_32:
            if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            {
              v34 = m_pEntityKeyValues->m_keyValues.m_pElements;
              v35 = v32;
              v36 = &v34[v35];
              if ( v34[v35].m_pAttributeName != 0 )
                goto LABEL_34;
LABEL_48:
              v46 = *(v36 + 10);
              if ( (v46 & 1) != 0 )
                *(v36 + 10) = v46 & 0xFFFE;
              *v36 = 0;
              *(v36 + 8) = 30;
              if ( String != 0 )
              {
                v47 = strlen(String) + 1;
                v48 = CEntityVariantAllocator::Allocate(v47);
                *v36 = v48;
                memcpy(v48, String, v47);
                *(v36 + 10) |= 1u;
              }
            }
            else
            {
              v34 = 0;
              v45 = *(&stru_10.m_Lock.gap0 + 3 * v32) == 0;
              v36 = 24 * v32;
              v35 = v32;
              if ( v45 )
                goto LABEL_48;
LABEL_34:
              Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v34[v35].m_pAttributeName);
            }
          }
        }
        v49 = KeyValues::FindKey(FirstSubKey, "persister_keys", 0);
        if ( v49 == 0 )
          goto LABEL_91;
        v50 = spawner.m_pEntityKeyValues;
        if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
          goto LABEL_54;
        v77 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
        if ( v77 <= 0 )
        {
LABEL_81:
          CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
          LOWORD(v63) = v50->m_keyHashes.m_nCount - 1;
          v64 = v50->m_keyHashes.m_nAllocated;
          if ( v64 != 0 )
          {
            if ( v64 <= 9 )
              v65 = (&v50->m_keyHashes.m_nAllocAllocated + 1);
            else
              v65 = v50->m_keyHashes.m_pElements;
          }
          else
          {
            v65 = 0;
          }
          v63 = v63;
          v65[v63] = 1603493765;
          CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v50->m_keyValues);
          if ( v50->m_keyValues.m_nAllocated != 0 )
            v66 = v50->m_keyValues.m_pElements;
          else
            v66 = 0;
          v67 = &v66[v63];
          v68 = v67->m_value.m_flags;
          if ( (v68 & 1) != 0 )
            v67->m_value.m_flags = v68 & 0xFFFE;
          v67->m_value.m_uint64 = v49;
          v67->m_value.m_type = 33;
          if ( v50->m_keyValues.m_nAllocated != 0 )
            v69 = v50->m_keyValues.m_pElements;
          else
            v69 = 0;
          v69[v63].m_pAttributeName = 0;
          goto LABEL_91;
        }
        v78 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        v79 = 0;
        while ( v78 == 0 )
        {
          if ( *(4 * v79) == 1603493765 )
            goto LABEL_114;
LABEL_111:
          if ( v77 <= ++v79 )
            goto LABEL_81;
        }
        v80 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v78 > 9 )
          v80 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
        if ( v80[v79] != 1603493765 )
          goto LABEL_111;
LABEL_114:
        if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        {
          v81 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
          v82 = 24 * v79;
          v83 = &v81[v79];
          if ( *(v83 + 16) != 0 )
            goto LABEL_116;
LABEL_144:
          v93 = *(v83 + 10);
          if ( (v93 & 1) != 0 )
            *(v83 + 10) = v93 & 0xFFFE;
          *v83 = v49;
          *(v83 + 8) = 33;
        }
        else
        {
          v81 = 0;
          v45 = *(&stru_10.m_Lock.gap0 + 3 * v79) == 0;
          v83 = 24 * v79;
          v82 = v83;
          if ( v45 )
            goto LABEL_144;
LABEL_116:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(&v81->m_pAttributeName + v82));
        }
LABEL_91:
        v50 = spawner.m_pEntityKeyValues;
        if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
          goto LABEL_54;
        v70 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
        if ( v70 <= 0 )
        {
LABEL_128:
          CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
          LOWORD(v85) = v50->m_keyHashes.m_nCount - 1;
          v86 = v50->m_keyHashes.m_nAllocated;
          if ( v86 != 0 )
          {
            if ( v86 <= 9 )
              v87 = (&v50->m_keyHashes.m_nAllocAllocated + 1);
            else
              v87 = v50->m_keyHashes.m_pElements;
          }
          else
          {
            v87 = 0;
          }
          v85 = v85;
          v87[v85] = 45305819;
          CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v50->m_keyValues);
          if ( v50->m_keyValues.m_nAllocated != 0 )
            v88 = v50->m_keyValues.m_pElements;
          else
            v88 = 0;
          v89 = &v88[v85];
          v90 = v89->m_value.m_flags;
          if ( (v90 & 1) != 0 )
            v89->m_value.m_flags = v90 & 0xFFFE;
          v89->m_value.m_uint64 = 0;
          v89->m_value.m_type = 5;
          v89->m_value.m_int = 1;
          if ( v50->m_keyValues.m_nAllocated != 0 )
            v91 = v50->m_keyValues.m_pElements;
          else
            v91 = 0;
          v91[v85].m_pAttributeName = 0;
          v50 = spawner.m_pEntityKeyValues;
          goto LABEL_104;
        }
        v71 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        v72 = 0;
        while ( 2 )
        {
          if ( v71 == 0 )
          {
            if ( *(4 * v72) == 45305819 )
              break;
            goto LABEL_97;
          }
          v73 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v71 > 9 )
            v73 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
          if ( v73[v72] != 45305819 )
          {
LABEL_97:
            if ( v70 <= ++v72 )
              goto LABEL_128;
            continue;
          }
          break;
        }
        if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        {
          v74 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
          v75 = 24 * v72;
          v76 = &v74[v72];
          if ( *(v76 + 16) != 0 )
            goto LABEL_102;
LABEL_139:
          v92 = *(v76 + 10);
          if ( (v92 & 1) != 0 )
            *(v76 + 10) = v92 & 0xFFFE;
          *v76 = 0;
          *(v76 + 8) = 5;
          *v76 = 1;
        }
        else
        {
          v74 = 0;
          v45 = *(&stru_10.m_Lock.gap0 + 3 * v72) == 0;
          v76 = 24 * v72;
          v75 = v76;
          if ( v45 )
            goto LABEL_139;
LABEL_102:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(&v74->m_pAttributeName + v75));
        }
        v50 = spawner.m_pEntityKeyValues;
LABEL_104:
        if ( v50 != 0 )
        {
LABEL_54:
          if ( spawner.m_pEntityClass != 0 )
          {
            HasValue = CEntityKeyValues::HasValue(v50, -971301790);
            m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
            if ( !HasValue && m_pszClassname != 0 )
            {
              CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
              m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
            }
            (*(*engine + 464LL))(engine, spawner.m_hSpawnGroupHandle, m_pszClassname);
            CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
            v53 = spawner.m_pEntityKeyValues;
            if ( spawner.m_pFilter == 0 )
              goto LABEL_156;
            v99 = spawner.m_pEntityKeyValues;
            v104 = &v99;
            v100 = 0;
            v103 = 1;
            v105 = 1;
            v106 = 0x40000000;
            v107 = 0;
            v108.m_pMemory = &v100;
            v108.m_nAllocationCount = 1;
            v108.m_nGrowSize = 0x40000000;
            (*(spawner.m_pFilter->_vptr_ISpawnGroupEntityFilter + 2))(
              spawner.m_pFilter,
              spawner.m_hSpawnGroupHandle,
              spawner.m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY,
              &v103,
              &v107);
            v53 = 0;
            v45 = v107 == 1;
            v107 = 0;
            if ( v45 )
              v53 = v100;
            if ( (v108.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<CEntityKeyValues const*,int>::Purge(&v108);
              if ( (v108.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<CEntityKeyValues const*,int>::Purge(&v108);
            }
            v103 = 0;
            if ( (v106 & 0xC0000000) == 0 )
            {
              CUtlMemory<CEntityKeyValues const*,int>::Purge(*(&v94 + 1));
              if ( (v106 & 0xC0000000) == 0 )
                CUtlMemory<CEntityKeyValues const*,int>::Purge(*(&v94 + 1));
            }
            if ( v53 != 0 )
            {
LABEL_156:
              SetIdentityMatrix(&spawnerDesc);
              v54 = (*(spawner.m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 9))(
                      spawner.m_pLoadingSpawnGroup,
                      spawner.m_hOwnerSpawnGroup,
                      &spawnerDesc,
                      1,
                      v53);
              if ( v54 != 0 )
              {
                m_pContext = spawner.m_pContext;
                for ( hSpawnGroupb = spawner.m_hSpawnGroupHandle; m_pContext != 0; m_pContext = m_pContext->m_pParent )
                {
                  while ( 1 )
                  {
                    pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
                    if ( m_pContext->m_callback.m_Closure.m_pthis == 0 && pfn == 0 )
                      break;
                    v109[0] = m_pContext->m_callback.m_Closure.m_pthis;
                    m_pCompletionListener = m_pContext->m_pCompletionListener;
                    v109[1] = pfn;
                    v109[2] = m_pContext->m_callback.m_Closure.m_pFunction.__delta;
                    CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
                      g_pGameEntitySystem,
                      hSpawnGroupb,
                      v54,
                      v53,
                      m_pCompletionListener,
                      v109);
                    m_pContext = m_pContext->m_pParent;
                    if ( m_pContext == 0 )
                      goto LABEL_71;
                  }
                }
              }
            }
          }
          else
          {
            CEntityKeyValues::HasValue(v50, -971301790);
          }
        }
LABEL_71:
        v58 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
        if ( v58 == &g_pEntitySystem->m_entitySpawnerData )
        {
          m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
          g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
          if ( m_nEntitySpawnerDataUseCount == 1 )
            CUtlScratchMemoryPool::FreeAll(v58);
        }
        if ( spawner.m_pEntityKeyValues != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
          v59 = spawner.m_pEntityKeyValues;
          if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
          {
            CEntityKeyValues::~CEntityKeyValues(v59);
            operator delete(v59);
          }
        }
        if ( spawner.m_scriptClassName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
LABEL_11:
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      }
      while ( FirstSubKey != 0 );
    }
  }
}


// CSource2Server::ClearInstancedBaselineFromServerClasses  (line 2163, @0x000000000221a7b0, libserver.so)
// globals: ServerClass::sm_pServerClassHead
void __fastcall CSource2Server::ClearInstancedBaselineFromServerClasses(CSource2Server *const this)
{
  ServerClass *i; // rax

  for ( i = ServerClass::sm_pServerClassHead; i != 0; i = i->m_pNext )
    i->m_InstanceBaselineIndex = 0xFFFF;
}


// CSource2Server::PreSaveGameLoaded  (line 2287, @0x000000000221a7e0, libserver.so)
void __fastcall CSource2Server::PreSaveGameLoaded(CSource2Server *const this, const char *pSaveName, bool bInGame)
{
  (*(gamestats->_vptr_CBaseGameStats + 32))(gamestats, pSaveName, bInGame);
}


// CSource2Server::ShouldHideFromMasterServer  (line 2295, @0x000000000221a800, libserver.so)
bool __fastcall CSource2Server::ShouldHideFromMasterServer(CSource2Server *const this, bool bServerHasPassword)
{
  return 0;
}


// CSource2Server::GetServerGameDLLFlags  (line 2316, @0x000000000221c6f0, libserver.so)  // inlines: GetBool, GetInt
// calls: IsBackgroundMap
// globals: g_pcv_commentary
uint32 __fastcall CSource2Server::GetServerGameDLLFlags(const CSource2Server *const this)
{
  if ( g_pcv_commentary != 0 && g_pcv_commentary->m_pParent->m_Value.m_nValue != 0
    || IsBackgroundMap()
    || gpGlobals != 0 && gpGlobals->eLoadType == MapLoadType_t::MapLoad_Background )
  {
    return 13;
  }
  else
  {
    return 9;
  }
}


// CSource2Server::PreFatalShutdown  (line 2333, @0x000000000221a810, libserver.so)
void __fastcall CSource2Server::PreFatalShutdown(const CSource2Server *const this)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 143))(g_pGameRules);
}


// CSource2Server::ShouldTimeoutClient  (line 2342, @0x000000000221a840, libserver.so)
bool __fastcall CSource2Server::ShouldTimeoutClient(
        CSource2Server *const this,
        __int64 nUserID,
        double a3,
        float flTimeSinceLastReceived)
{
  return g_pGameRules != 0
      && (*(g_pGameRules->_vptr_CGameRules + 66))(g_pGameRules, nUserID, a3, flTimeSinceLastReceived);
}


// CSource2Server::GetMatchmakingTags  (line 2351, @0x000000000221a870, libserver.so)
void __fastcall CSource2Server::GetMatchmakingTags(CSource2Server *const this, char *buf, size_t bufSize)
{
  ;
}


// CSource2Server::GetMatchmakingGameData  (line 2372, @0x000000000221abc0, libserver.so)  // inlines: V_strlen
// calls: V_snprintf, strlen
// strings: "g:l4d2,"
void __fastcall CSource2Server::GetMatchmakingGameData(CSource2Server *const this, char *buf, size_t bufSize)
{
  char *v4; // rax

  V_snprintf(buf, bufSize, "g:l4d2,");
  if ( buf != 0 )
  {
    v4 = &buf[strlen(buf)];
    if ( buf < v4 )
      *(v4 - 1) = 0;
  }
}


// CSource2Server::ServerHibernationUpdate  (line 2429, @0x000000000221c770, libserver.so)
// calls: GDOTAGCClientSystem, CDOTAGCServerSystem::SetHibernation
void __fastcall CSource2Server::ServerHibernationUpdate(CSource2Server *const this, bool bHibernating)
{
  CDOTAGCServerSystem *v3; // rax

  this->m_bIsHibernating = bHibernating;
  v3 = GDOTAGCClientSystem();
  CDOTAGCServerSystem::SetHibernation(v3, bHibernating);
}


// CSource2Server::GetServerGCLobby  (line 2494, @0x000000000221c740, libserver.so)
// calls: GDOTAGCClientSystem
IServerGCLobby *__fastcall CSource2Server::GetServerGCLobby(CSource2Server *const this)
{
  CDOTAGCServerSystem *v1; // rax

  v1 = GDOTAGCClientSystem();
  if ( v1 != 0 )
    return (v1 + 1592);
  else
    return 0;
}


// CSource2Server::PrintStatus  (line 2510, @0x000000000221a880, libserver.so)
void __fastcall CSource2Server::PrintStatus(
        CSource2Server *const this,
        CEntityIndex nPlayerEntityIndex,
        CUtlString *pOutput)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 45))(g_pGameRules, nPlayerEntityIndex.m_Data, pOutput);
}


// ValidateMOTDFilename  (line 2539, @0x000000000221cac0, libserver.so)  // inlines: GetString, IsValidPath, SetValue, V_strlen, _V_strstr, strstr
// calls: ConVarRef::ConVarRef, strlen, V_IsAbsolutePath, strstr
void __fastcall ValidateMOTDFilename(IConVar *pConVar, const char *oldValue, double a3, float flOldValue)
{
  ConVar *m_pConVarState; // r12
  char *m_pszString; // rbx
  ConVarRef var; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&var, pConVar);
  m_pConVarState = var.m_pConVarState;
  m_pszString = var.m_pConVarState->m_Value.m_pszString;
  if ( m_pszString == 0 || strlen(var.m_pConVarState->m_Value.m_pszString) <= 0 )
    goto LABEL_6;
  if ( V_IsAbsolutePath(m_pszString) != 0 || strstr(m_pszString, "..") != 0 )
  {
    m_pConVarState = var.m_pConVarState;
LABEL_6:
    var.m_pConVar->SetValue(m_pConVarState->m_pszDefaultValue);
  }
}


// LoadMOTDFile  (line 2550, @0x0000000002230350, libserver.so)  // inlines: GetString
// calls: DevMsg(char const*,...), __stack_chk_fail
// callers: CSource2Server::LoadMessageOfTheDay
// strings: "FCVAR_NEVER_AS_STRING", "Invalid file size for %s\n"
// globals: filesystem
void __fastcall LoadMOTDFile(const char *stringname, ConVar *pConvarFilename)
{
  char *m_pszString; // rsi
  unsigned int v5; // r12d
  char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  char *v9; // rsi
  char data[16392]; // [rsp+0h] [rbp-4030h] BYREF
  unsigned __int64 v11; // [rsp+4008h] [rbp-28h]

  m_pszString = "FCVAR_NEVER_AS_STRING";
  v11 = __readfsqword(0x28u);
  if ( (pConvarFilename->m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( pConvarFilename->m_pParent->m_Value.m_pszString != 0 )
      m_pszString = pConvarFilename->m_pParent->m_Value.m_pszString;
  }
  v5 = (*(filesystem->_vptr_IBaseFileSystem + 7))(&filesystem->IBaseFileSystem, m_pszString, "GAME");
  if ( v5 - 1 > 0x3FFD )
  {
    v9 = "FCVAR_NEVER_AS_STRING";
    if ( (pConvarFilename->m_nFlags & 0x1000) == 0 )
    {
      v9 = "";
      if ( pConvarFilename->m_pParent->m_Value.m_pszString != 0 )
        v9 = pConvarFilename->m_pParent->m_Value.m_pszString;
    }
    DevMsg("Invalid file size for %s\n", v9);
  }
  else
  {
    v6 = "FCVAR_NEVER_AS_STRING";
    if ( (pConvarFilename->m_nFlags & 0x1000) == 0 )
    {
      v6 = "";
      if ( pConvarFilename->m_pParent->m_Value.m_pszString != 0 )
        v6 = pConvarFilename->m_pParent->m_Value.m_pszString;
    }
    v7 = (*(filesystem->_vptr_IBaseFileSystem + 2))(&filesystem->IBaseFileSystem, v6, "rb", "GAME");
    v8 = v7;
    if ( v7 != 0 )
    {
      (*filesystem->_vptr_IBaseFileSystem)(&filesystem->IBaseFileSystem, data, v5, v7);
      (*(filesystem->_vptr_IBaseFileSystem + 3))(&filesystem->IBaseFileSystem, v8);
      data[v5] = 0;
      (*(g_pStringTableInfoPanel->_vptr_INetworkStringTable + 8))(g_pStringTableInfoPanel, 1, stringname, v5 + 1, data);
    }
  }
}


// CSource2Server::LoadMessageOfTheDay  (line 2573, @0x00000000022304f0, libserver.so)
// calls: LoadMOTDFile
// strings: "motd", "hostfile"
// globals: motdfile, hostfile
void __fastcall CSource2Server::LoadMessageOfTheDay(CSource2Server *const this)
{
  LoadMOTDFile("motd", &motdfile);
  LoadMOTDFile("hostfile", &hostfile);
}


// CSource2Server::GetEntity2Networkables  (line 2584, @0x000000000221c7a0, libserver.so)
// calls: GetEntity2Networkables
const CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)> *__fastcall CSource2Server::GetEntity2Networkables(
        const CSource2Server *const this)
{
  return GetEntity2Networkables();
}


// CSource2Server::GetEntity2Networkable  (line 2589, @0x000000000221c7b0, libserver.so)
// calls: GetEntity2Networkable
bool __fastcall CSource2Server::GetEntity2Networkable(
        CSource2Server *const this,
        CEntityIndex nEntryIndex,
        Entity2Networkable_t *const info)
{
  return GetEntity2Networkable(nEntryIndex, info);
}


// CSource2Server::SetGlobals  (line 2594, @0x000000000221a8b0, libserver.so)  // inlines: SetWarningFunc
void __fastcall CSource2Server::SetGlobals(CSource2Server *const this, CGlobalVars *pGlobals)
{
  gpGlobals = pGlobals;
  if ( pGlobals != 0 )
    pGlobals->m_pfnWarningFunc = GlobalVarsWarningFunc;
}


// CSource2Server::GetTaggedConVarList  (line 2603, @0x000000000221a8d0, libserver.so)
void __fastcall CSource2Server::GetTaggedConVarList(CSource2Server *const this, KeyValues *pCvarTagList)
{
  if ( pCvarTagList != 0 && g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 46))(g_pGameRules);
}


// CSource2Server::GetActiveWorldName  (line 2612, @0x000000000221c7c0, libserver.so)
// calls: CSpawnGroupMgrGameSystem::GetActiveSpawnGroupHandle, CSpawnGroupMgrGameSystem::GetSpawnGroupWorldName
const char *__fastcall CSource2Server::GetActiveWorldName(const CSource2Server *const this)
{
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax

  if ( g_pSpawnGroupMgr == 0 )
    return "";
  ActiveSpawnGroupHandle = CSpawnGroupMgrGameSystem::GetActiveSpawnGroupHandle(g_pSpawnGroupMgr);
  return CSpawnGroupMgrGameSystem::GetSpawnGroupWorldName(g_pSpawnGroupMgr, ActiveSpawnGroupHandle);
}


// CSource2Server::IsPaused  (line 2622, @0x000000000221a900, libserver.so)
// globals: engine
bool __fastcall CSource2Server::IsPaused(const CSource2Server *const this)
{
  return engine != 0 && (*(*engine + 88LL))(engine);
}


// CSource2Server::GetAnimationActivityList  (line 2631, @0x0000000002237440, libserver.so)  // inlines: ActivityList_HighestIndex, ActivityList_NameForIndex, AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], ~CUtlString
// calls: CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
void __fastcall CSource2Server::GetAnimationActivityList(
        CSource2Server *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const activityList)
{
  unsigned int v2; // r13d
  CUtlString *v4; // r12
  const char *v5; // rax
  int v6; // eax
  const char *v7; // rsi
  __int64 m_Size; // r12
  int v9; // eax
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-48h]
  CUtlString v11; // [rsp+10h] [rbp-40h] BYREF

  v2 = 0;
  p_m_Memory = &activityList->m_Memory;
  while ( 1 )
  {
    v6 = 0;
    if ( g_pAnimationSystem != 0 )
      v6 = (*(*g_pAnimationSystem + 320LL))(g_pAnimationSystem);
    if ( v2 > v6 )
      break;
    v7 = 0;
    if ( g_pAnimationSystem != 0 )
      v7 = (*(*g_pAnimationSystem + 312LL))(g_pAnimationSystem, v2);
    v11.m_pString = 0;
    CUtlString::Set(&v11, v7);
    m_Size = activityList->m_Size;
    v9 = activityList->m_Size;
    if ( m_Size == activityList->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlString,int>::Grow(p_m_Memory, 1);
      v9 = activityList->m_Size;
    }
    activityList->m_Size = v9 + 1;
    v4 = &activityList->m_Memory.m_pMemory[m_Size];
    if ( v4 != 0 )
    {
      v4->m_pString = 0;
      v5 = CUtlString::Get(&v11);
      CUtlString::Set(v4, v5);
    }
    if ( v11.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v11);
    ++v2;
  }
}


// CSource2Server::GetAnimationEventList  (line 2640, @0x0000000002237350, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], ~CUtlString
// calls: EventList_HighestIndex, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, EventList_NameForIndex, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
void __fastcall CSource2Server::GetAnimationEventList(
        CSource2Server *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const eventList)
{
  int32 v2; // r12d
  AnimEventIndex_t v4; // r15d
  CUtlString *v5; // r13
  const char *v6; // rax
  const char *v7; // rax
  __int64 m_Size; // r13
  int v9; // eax
  CUtlString v10; // [rsp+10h] [rbp-40h] BYREF

  v2 = 0;
  v4.m_Data = EventList_HighestIndex().m_Data;
  if ( v4.m_Data >= 0 )
  {
    do
    {
      v7 = EventList_NameForIndex(v2);
      v10.m_pString = 0;
      CUtlString::Set(&v10, v7);
      m_Size = eventList->m_Size;
      v9 = eventList->m_Size;
      if ( m_Size == eventList->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&eventList->m_Memory, 1);
        v9 = eventList->m_Size;
      }
      eventList->m_Size = v9 + 1;
      v5 = &eventList->m_Memory.m_pMemory[m_Size];
      if ( v5 != 0 )
      {
        v5->m_pString = 0;
        v6 = CUtlString::Get(&v10);
        CUtlString::Set(v5, v6);
      }
      if ( v10.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v10);
      ++v2;
    }
    while ( v4.m_Data >= v2 );
  }
}


// CSource2Server::GetNavMeshData  (line 2652, @0x000000000221a930, libserver.so)
bool __fastcall CSource2Server::GetNavMeshData(CSource2Server *const this, CNavData *pNavMeshData)
{
  return TheNavMesh != 0;
}


// CSource2Server::SetNavMeshData  (line 2666, @0x000000000221a950, libserver.so)
void __fastcall CSource2Server::SetNavMeshData(CSource2Server *const this, const CNavData *const navMeshData)
{
  ;
}


// CSource2Server::RegisterNavListener  (line 2676, @0x000000000221c800, libserver.so)
// calls: CNavGameSystem::RegisterNavListener
bool __fastcall CSource2Server::RegisterNavListener(CSource2Server *const this, INavListener *pNavListener)
{
  return CNavGameSystem::RegisterNavListener(pNavListener);
}


// CSource2Server::UnregisterNavListener  (line 2682, @0x000000000221c810, libserver.so)
// calls: CNavGameSystem::UnregisterNavListener
void __fastcall CSource2Server::UnregisterNavListener(CSource2Server *const this, INavListener *pNavListener)
{
  CNavGameSystem::UnregisterNavListener(pNavListener);
}


// CSource2Server::GetSpawnDebugInterface  (line 2688, @0x000000000221a960, libserver.so)
ISpawnDebugInterface *__fastcall CSource2Server::GetSpawnDebugInterface(CSource2Server *const this)
{
  return 0;
}


// CSource2Server::FilterPlayerCounts  (line 2699, @0x000000000221a970, libserver.so)
void __fastcall CSource2Server::FilterPlayerCounts(
        CSource2Server *const this,
        int *pInOutHumans,
        int *pInOutHumansSlots,
        int *pInOutBots)
{
  ;
}


// CSource2Server::OnHostNameChanged  (line 2706, @0x000000000221ce50, libserver.so)  // inlines: CreateEvent
// calls: CGameEventManager::GetEventDescriptor
// strings: "hostname_changed", "hostname"
void __fastcall CSource2Server::OnHostNameChanged(CSource2Server *const this, const char *pHostName)
{
  __int64 v3; // rax
  __int64 v4; // r12

  if ( (*(*g_pNetworkServerService + 200LL))(g_pNetworkServerService) != 0
    && CGameEventManager::GetEventDescriptor(&s_GameEventManager, "hostname_changed", 0) != 0 )
  {
    v3 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hostname_changed", 0, 0);
    v4 = v3;
    if ( v3 != 0 )
    {
      (*(*v3 + 136LL))(v3, "hostname", pHostName);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v4, 0);
    }
  }
}


// CSource2Server::ServerConVarChanged  (line 2725, @0x000000000221a980, libserver.so)  // inlines: CreateEvent
// strings: "server_cvar", "cvarname", "cvarvalue"
void __fastcall CSource2Server::ServerConVarChanged(
        CSource2Server *const this,
        const char *pVarName,
        const char *pValue)
{
  __int64 v5; // rax
  __int64 v6; // rbx

  v5 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "server_cvar", 0, 0);
  v6 = v5;
  if ( v5 != 0 )
  {
    (*(*v5 + 136LL))(v5, "cvarname", pVarName);
    (*(*v6 + 136LL))(v6, "cvarvalue", pValue);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v6, 0);
  }
}


// IsEngineThreaded  (line 2841, @0x0000000002230520, libserver.so)
bool __cdecl IsEngineThreaded()
{
  return 0;
}


// CSource2GameEntities::~CSource2GameEntities  (line 2846, @0x0000000002248a30, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAppSystem, ~CGameAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~CTier2AppSystem, ~CTier3AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ISource2GameEntities
// calls: CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CSource2GameEntities::~CSource2GameEntities(CSource2GameEntities *const this)
{
  bool v2; // zf
  CUtlVectorBase<ResourceManifestDesc_t*,CUtlMemory<ResourceManifestDesc_t*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IAppSystem = off_404E270;  // vptr: CTier2AppSystem<ISource2GameEntities,0>
  this->m_manualManifests.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_manualManifests.m_Memory,
        CUtlMemory<ResourceManifestDesc_t *,int>::Purge(&this->m_manualManifests.m_Memory),
        (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_IAppSystem = &off_403F870;
  }
  else
  {
    CUtlMemory<ResourceManifestDesc_t *,int>::Purge(p_m_Memory);
    this->_vptr_IAppSystem = &off_403F870;
  }
}


// CSource2GameEntities::~CSource2GameEntities  (line 2846, @0x0000000002248bc0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAppSystem, ~CGameAppSystem, ~CSource2GameEntities, ~CTier0AppSystem, ~CTier1AppSystem, ~CTier2AppSystem, ~CTier3AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ISource2GameEntities
// calls: operator delete, CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CSource2GameEntities::~CSource2GameEntities(CSource2GameEntities *const this)
{
  bool v2; // zf
  CUtlVectorBase<ResourceManifestDesc_t*,CUtlMemory<ResourceManifestDesc_t*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IAppSystem = off_404E270;  // vptr: CTier2AppSystem<ISource2GameEntities,0>
  this->m_manualManifests.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_manualManifests.m_Memory;
    CUtlMemory<ResourceManifestDesc_t *,int>::Purge(&this->m_manualManifests.m_Memory);
    if ( (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ResourceManifestDesc_t *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IAppSystem = &off_403F870;
  operator delete(this);
}


// CSource2GameEntities::ResetChangeAccessorsSerialNumbersToZero  (line 2865, @0x0000000002247770, libserver.so)  // inlines: SetChangeInfoSerialNumber
// calls: EntityInstanceIter_t::EntityInstanceIter_t, EntityInstanceIter_t::First, EntityInstanceIter_t::Next
void __fastcall CSource2GameEntities::ResetChangeAccessorsSerialNumbersToZero(CSource2GameEntities *const this)
{
  CEntityInstance *i; // rax
  EntityInstanceIter_t iter; // [rsp+0h] [rbp-30h] BYREF

  EntityInstanceIter_t::EntityInstanceIter_t(&iter, 0, EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
  for ( i = EntityInstanceIter_t::First(&iter); i != 0; i = EntityInstanceIter_t::Next(&iter) )
    WORD1(i[3]._vptr_IHandleEntity) = 0;
}


// __CreateCSource2GameEntitiesISource2GameEntities_interface  (line 2895, @0x000000000221aa10, libserver.so)
// globals: g_Source2GameEntities
void *__cdecl __CreateCSource2GameEntitiesISource2GameEntities_interface()
{
  return &g_Source2GameEntities;
}


// CSource2GameEntities::GetWorldspaceCenter  (line 2916, @0x000000000221f6c0, libserver.so)  // inlines: CM_WorldSpaceCenter, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, VectorAdd, VectorTransform, operator*=, operator=, operator==
// calls: VectorTransform
bool __fastcall CSource2GameEntities::GetWorldspaceCenter(
        const CSource2GameEntities *const this,
        CEntityIndex nEntityIndex,
        Vector *pCenter)
{
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rax
  __int64 v7; // rbx
  float *v8; // r12
  float *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  float *v12; // rax
  __int64 v13; // rsi
  const matrix3x4_t *v14; // rax
  float *v15; // rax
  float in1; // [rsp+10h] [rbp-30h] BYREF
  float v17; // [rsp+14h] [rbp-2Ch]
  float v18; // [rsp+18h] [rbp-28h]

  if ( nEntityIndex.m_Data <= 0x7FFE
    && (v5 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9]) != 0
    && (v6 = &v5[nEntityIndex.m_Data & 0x1FF]) != 0
    && (v6->m_EHandle.m_Index & 0x7FFF) == nEntityIndex.m_Data
    && v6->m_pInstance != 0 )
  {
    v7 = (*(v6->m_pInstance->_vptr_IHandleEntity + 29))(v6->m_pInstance);
    v8 = (*(*v7 + 16LL))(v7);
    v9 = (*(*v7 + 8LL))(v7);
    v10 = (v9[1] + v8[1]) * 0.5;
    v11 = (v9[2] + v8[2]) * 0.5;
    in1 = (*v9 + *v8) * 0.5;
    v17 = v10;
    v18 = v11;
    v12 = (*(*v7 + 40LL))(v7);
    if ( vec3_angle.x == *v12 && vec3_angle.y == v12[1] && vec3_angle.z == v12[2]
      || vec3_origin.x == in1 && vec3_origin.y == v17 && vec3_origin.z == v18 )
    {
      v15 = (*(*v7 + 32LL))(v7, v13, &vec3_angle);
      pCenter->x = in1 + *v15;
      pCenter->y = v17 + v15[1];
      pCenter->z = v18 + v15[2];
    }
    else
    {
      v14 = (*(*v7 + 48LL))(v7);
      VectorTransform(&in1, v14, &pCenter->x);
    }
    return 1;
  }
  else
  {
    *pCenter = vec3_origin;
    return 0;
  }
}


// CSource2GameEntities::ShouldClientReceiveStringTableUserData  (line 2929, @0x000000000221cf00, libserver.so)  // inlines: GameRules
// calls: IsBackgroundMap, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "ShouldClientReceiveStringTableUserData called with NULL GameRules() on table %s, string %
// globals: LOG_SERVER
bool __fastcall CSource2GameEntities::ShouldClientReceiveStringTableUserData(
        CSource2GameEntities *const this,
        const INetworkStringTable *pTable,
        int stringNumber,
        const CCheckTransmitInfo *pInfo)
{
  char IsChannelEnabled; // r12
  const char *v7; // rax

  if ( g_pGameRules != 0 )
    return (*(g_pGameRules->_vptr_CGameRules + 151))(
             g_pGameRules,
             pInfo->m_nClientEntityIndex.m_Data,
             pTable,
             stringNumber);
  if ( IsBackgroundMap() )
    return 1;
  IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
  if ( IsChannelEnabled == 0 )
    return 1;
  v7 = (*(pTable->_vptr_INetworkStringTable + 2))(pTable);
  LoggingSystem_Log(
    LOG_SERVER,
    2,
    "ShouldClientReceiveStringTableUserData called with NULL GameRules() on table %s, string %d\n",
    v7,
    stringNumber);
  return IsChannelEnabled;
}


// CSource2GameEntities::FreeContainingEntity  (line 2942, @0x000000000221f320, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: FreeContainingEntity
void __fastcall CSource2GameEntities::FreeContainingEntity(CSource2GameEntities *const this, CEntityIndex e1)
{
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rax
  __int64 v5; // [rsp-8h] [rbp-8h]

  m_pInstance = 0;
  if ( e1.m_Data <= 0x7FFE
    && (v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[e1.m_Data >> 9]) != 0
    && (v4 = &v3[e1.m_Data & 0x1FF]) != 0 )
  {
    *(&v5 - 8) = v4->m_EHandle.m_Index;
    if ( (*(&v5 - 2) & 0x7FFF) == e1.m_Data )
      m_pInstance = v4->m_pInstance;
    FreeContainingEntity(m_pInstance);
  }
  else
  {
    FreeContainingEntity(0);
  }
}


// CSource2GameEntities::CheckEntities  (line 2947, @0x00000000022319e0, libserver.so)  // inlines: BecomeSteadyStateForPlayer, Bitvec_Set, CEntityHandle, Element, Find, FirstInorder, Get, GetBool, GetComponent<CBodyComponent>, GetEHandle, GetEntryIndex, GetInt, GetParent, GetSerialNumber, Init, IsSteadyStateForPlayer, LeftChild, RightChild, Set, _mm_cmpeq_epi32, _mm_movemask_epi8, _mm_set1_epi32, _mm_set_epi32, operator[]
// calls: CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::NextInorder, CBasePlayer::OnEntitySteadyStateStart, CBodyComponent::GetParent, CNetworkTransmitComponent::RecomputePVSInformation, CBasePlayer::SetPlayerInPVS, CNetworkTransmitComponent::IsInPVS, CGameSceneNode::GetOwnerEntity
// callers: CSource2GameEntities::CheckTransmit
void __fastcall CSource2GameEntities::CheckEntities(
        CSource2GameEntities *const this,
        CGameCheckTransmitInfo *const checkTransmitInfo,
        int nEntityIndices,
        const Entity2Networkable_t **ppNetworkables,
        const unsigned __int16 *pEntityIndices,
        const uint8 *pEntityChangeFlags,
        int nSteadySlotsAvail,
        bool bForceTransmitEnts)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS NUMPAD "+" TO EXPAND]

  v8 = pEntityIndices;
  m_pInfo = checkTransmitInfo->m_pInfo;
  bUseCachedSpawnGroupHandles = 0;
  m_nValue = sv_legacy_alwaystransmit.m_pParent->m_Value.m_nValue;
  pRecipientPlayer = checkTransmitInfo->m_pRecipientPlayer;
  if ( checkTransmitInfo->m_pInfo->m_LoadedSpawnGroups.m_NumElements > 4u )
    goto LABEL_13;
  m_Root = m_pInfo->m_LoadedSpawnGroups.m_Root;
  if ( m_Root == 0xFFFF )
  {
    v16 = 0;
  }
  else
  {
    m_pMemory = m_pInfo->m_LoadedSpawnGroups.m_Elements.m_pMemory;
    v13 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v13 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    v15 = 0;
    while ( 1 )
    {
      v16 = v15 + 1;
      cachedHandles.m128i_i32[v15++] = m_pMemory[v13].m_Data;
      m_Root = CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::NextInorder(
                 &m_pInfo->m_LoadedSpawnGroups,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      v13 = m_Root;
    }
    v8 = pEntityIndices;
    if ( v16 == 4 )
      goto LABEL_12;
  }
  v45 = v16;
  v46 = v16;
  while ( 1 )
  {
    ++v46;
    ++v16;
    cachedHandles.m128i_i32[v45] = 0;
    if ( v46 > 3 )
      break;
    v45 = v16;
  }
LABEL_12:
  bUseCachedSpawnGroupHandles = 1;
  handles128 = _mm_load_si128(&cachedHandles);
LABEL_13:
  if ( nEntityIndices <= 0 )
    return;
  v17 = m_pInfo;
  nEntityIndicesa = (nEntityIndices - 1) + 1LL;
  v18 = 0;
  while ( 1 )
  {
LABEL_15:
    v19 = v8[v18];
    index.m_Data = v19;
    v20 = v19 >> 5;
    if ( ((1 << v19) & v17->m_pTransmitEdict->m_Ints[v20]) != 0 )
      goto LABEL_45;
    pBaseEntitya = pEntityChangeFlags[v18];
    if ( (pBaseEntitya & 8) != 0 )
      goto LABEL_45;
    v21 = ppNetworkables[v18];
    m_SpawnGroupHandle = v21->m_SpawnGroupHandle;
    if ( m_SpawnGroupHandle != 0 )
      break;
LABEL_20:
    m_Data = index.m_Data;
    m_pEntityInstance = v21->m_pEntityInstance;
    if ( (pBaseEntitya & 4) != 0 )
    {
      v25 = 1;
      if ( m_nValue != 0 )
      {
        m_pParentEntity = v21->m_pEntityInstance;
        while ( 1 )
        {
          v27 = 1 << m_Data;
          v28 = m_Data >> 5;
          v17->m_pTransmitEdict->m_Ints[v28] |= 1 << m_Data;
          m_pTransmitAlways = v17->m_pTransmitAlways;
          if ( m_pTransmitAlways != 0 )
            m_pTransmitAlways->m_Ints[v28] |= v27;
          if ( v25 != 0 )
          {
            m_pParentEntity = v21->m_pParentEntity;
          }
          else
          {
            m_pEntity = m_pParentEntity->m_pEntity;
            m_pInstance = m_pEntity->m_pInstance;
            if ( m_pEntity->m_pInstance == 0 )
              goto LABEL_45;
            m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
            if ( m_nBaseOffset == 0xFFFF )
              goto LABEL_45;
            v37 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
            if ( v37 == 0 )
              goto LABEL_45;
            m_pParentEntity = CBodyComponent::GetParent(v37);
          }
          if ( m_pParentEntity == 0 )
            goto LABEL_45;
          v30 = m_pParentEntity->m_pEntity;
          if ( v30 == 0 )
            goto LABEL_51;
          LOWORD(m_Data) = 0x7FFF;
          if ( v30->m_EHandle.m_Index != -1 )
            LOWORD(m_Data) = v30->m_EHandle.m_Index & 0x7FFF;
          if ( ((((v30->m_EHandle.m_Index >> 15) - (v30->m_flags & 1)) << 15) | m_Data & 0x7FFF) == 0xFFFFFFFF )
          {
LABEL_51:
            LODWORD(m_Data) = 0x7FFF;
            v25 = 0;
          }
          else
          {
            LODWORD(m_Data) = m_Data;
            v25 = 0;
          }
        }
      }
      goto LABEL_44;
    }
    v60 = *(v21 + 60) & 1;
    if ( v60 != 0 )
      CBasePlayer::SetPlayerInPVS(pRecipientPlayer, index, 0);
    v31 = pBaseEntitya;
    if ( pBaseEntitya == 0 )
    {
      v31 = (*(m_pEntityInstance->_vptr_IHandleEntity + 65))(m_pEntityInstance, checkTransmitInfo, v20, m_Data);
      if ( (v31 & 4) != 0 )
      {
LABEL_65:
        vptr_IHandleEntity = m_pEntityInstance->_vptr_IHandleEntity;
        v39 = 1;
LABEL_54:
        vptr_IHandleEntity[66](m_pEntityInstance, v17, v39);
        if ( v60 != 0 )
LABEL_55:
          CBasePlayer::SetPlayerInPVS(pRecipientPlayer, index, 1);
        goto LABEL_45;
      }
    }
    if ( (v31 & 0x10) != 0 )
    {
      if ( !this->m_bSteadyStateEnabled || m_pEntityInstance == 0 )
      {
LABEL_52:
        CNetworkTransmitComponent::RecomputePVSInformation(&m_pEntityInstance->m_NetworkTransmitComponent, index);
        if ( !bForceTransmitEnts
          && !CNetworkTransmitComponent::IsInPVS(&m_pEntityInstance->m_NetworkTransmitComponent, checkTransmitInfo) )
        {
          m_pParent = m_pEntityInstance->m_pGameSceneNode->m_pParent;
          if ( m_pParent != 0 )
          {
            pBaseEntityb = m_pEntityInstance;
            OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
          }
          else
          {
            OwnerEntity = 0;
            pBaseEntityb = m_pEntityInstance;
          }
          while ( OwnerEntity != 0 )
          {
            v49 = OwnerEntity->m_pEntity;
            if ( v49 == 0 )
              goto LABEL_89;
            v50 = 0x7FFF;
            if ( v49->m_EHandle.m_Index != -1 )
              v50 = v49->m_EHandle.m_Index & 0x7FFF;
            if ( ((((v49->m_EHandle.m_Index >> 15) - (v49->m_flags & 1)) << 15) | v50 & 0x7FFF) == 0xFFFFFFFF )
            {
LABEL_89:
              v53 = 0x80000000;
              v54 = 1023;
              v51.m_Data = 0x7FFF;
            }
            else
            {
              v51.m_Data = v50;
              v52 = v50 >> 5;
              v53 = 1 << v50;
              v54 = v52;
            }
            if ( (v53 & v17->m_pTransmitEdict->m_Ints[v54]) != 0 )
              goto LABEL_92;
            m_nStateFlags = OwnerEntity->m_NetworkTransmitComponent.m_nStateFlags;
            if ( (m_nStateFlags & 8) != 0 )
              goto LABEL_45;
            if ( (m_nStateFlags & 4) != 0 )
            {
LABEL_92:
              (*(OwnerEntity->_vptr_IHandleEntity + 66))(OwnerEntity, v17, 1);
              if ( v60 == 0 )
                goto LABEL_45;
              goto LABEL_55;
            }
            if ( (OwnerEntity->m_NetworkTransmitComponent.m_nStateFlags & 0x1C) == 0 )
            {
              m_pEntityInstance = pBaseEntityb;
              if ( ((*(OwnerEntity->_vptr_IHandleEntity + 65))(OwnerEntity, checkTransmitInfo) & 4) == 0 )
                goto LABEL_45;
              (*(OwnerEntity->_vptr_IHandleEntity + 66))(OwnerEntity, v17, 1);
              goto LABEL_65;
            }
            if ( (m_nStateFlags & 0x10) != 0 )
            {
              CNetworkTransmitComponent::RecomputePVSInformation(&OwnerEntity->m_NetworkTransmitComponent, v51);
              if ( CNetworkTransmitComponent::IsInPVS(&OwnerEntity->m_NetworkTransmitComponent, checkTransmitInfo) )
              {
                m_pEntityInstance = pBaseEntityb;
                goto LABEL_65;
              }
            }
            v56 = OwnerEntity->m_pGameSceneNode->m_pParent;
            if ( v56 == 0 )
            {
              if ( ++v18 != nEntityIndicesa )
                goto LABEL_15;
              return;
            }
            OwnerEntity = CGameSceneNode::GetOwnerEntity(v56);
          }
          goto LABEL_45;
        }
        vptr_IHandleEntity = m_pEntityInstance->_vptr_IHandleEntity;
        v39 = 0;
        goto LABEL_54;
      }
      v32 = v17->m_nClientEntityIndex.m_Data;
      if ( nSteadySlotsAvail <= 0 || this->m_flSteadyStateChangeTime <= m_pEntityInstance->m_lastNetworkChange )
      {
        p_m_isSteadyState = &m_pEntityInstance->m_isSteadyState;
        goto LABEL_43;
      }
      m_Data = (v32 - 1);
      if ( ((1 << m_Data) & m_pEntityInstance->m_isSteadyState.m_Ints[m_Data >> 5]) == 0 )
      {
        --nSteadySlotsAvail;
        m_pEntityInstance->m_isSteadyState.m_Ints[m_Data >> 5] |= 1 << m_Data;
        CBasePlayer::OnEntitySteadyStateStart(pRecipientPlayer);
        v32 = v17->m_nClientEntityIndex.m_Data;
        p_m_isSteadyState = &m_pEntityInstance->m_isSteadyState;
LABEL_43:
        m_Data = (v32 - 1);
        if ( ((1 << m_Data) & p_m_isSteadyState->m_Ints[m_Data >> 5]) == 0 )
          goto LABEL_52;
      }
LABEL_44:
      (*(m_pEntityInstance->_vptr_IHandleEntity + 66))(m_pEntityInstance, v17, 1, m_Data);
    }
LABEL_45:
    if ( ++v18 == nEntityIndicesa )
      return;
  }
  if ( bUseCachedSpawnGroupHandles )
  {
    if ( _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(m_SpawnGroupHandle), 0), handles128)) == 0 )
      goto LABEL_45;
    goto LABEL_20;
  }
  p_m_SpawnGroupHandle = &v21->m_SpawnGroupHandle;
  m_Right = v17->m_LoadedSpawnGroups.m_Root;
  if ( m_Right == 0xFFFF )
    goto LABEL_45;
  v42 = v17->m_LoadedSpawnGroups.m_Elements.m_pMemory;
  pNetworkable = ppNetworkables[v18];
  v61 = v8;
  do
  {
    while ( 1 )
    {
      v43 = m_Right;
      v44 = m_Right;
      if ( !v17->m_LoadedSpawnGroups.m_LessFunc(p_m_SpawnGroupHandle, &v42[m_Right].m_Data) )
        break;
      v42 = v17->m_LoadedSpawnGroups.m_Elements.m_pMemory;
      m_Right = v42[v43].m_Left;
      if ( m_Right == 0xFFFF )
        goto LABEL_62;
    }
    if ( !v17->m_LoadedSpawnGroups.m_LessFunc(
            &v17->m_LoadedSpawnGroups.m_Elements.m_pMemory[v44].m_Data,
            p_m_SpawnGroupHandle) )
    {
      v21 = pNetworkable;
      v8 = v61;
      goto LABEL_20;
    }
    v42 = v17->m_LoadedSpawnGroups.m_Elements.m_pMemory;
    m_Right = v42[v44].m_Right;
  }
  while ( m_Right != 0xFFFF );
LABEL_62:
  ++v18;
  v8 = v61;
  if ( v18 != nEntityIndicesa )
    goto LABEL_15;
}


// TeamSharePVS_t::Less  (line 3252, @0x000000000224cb70, libserver.so)  // inlines: Element, FirstInorder, LeftChild, operator[]
// calls: CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::NextInorder
bool __fastcall TeamSharePVS_t::Less(const TeamSharePVS_t *const lhs, const TeamSharePVS_t *const rhs)
{
  bool result; // al
  CCheckTransmitInfo *m_pInfo; // rdi
  CCheckTransmitInfo *v4; // r8
  int m_NumElements; // ecx
  int v6; // edx
  __int64 m_Root; // r9
  const CUtlRBTree<unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,short unsigned int>,short unsigned int> > *p_m_LoadedSpawnGroups; // r13
  UtlRBTreeNode_t<unsigned int,short unsigned int> *m_pMemory; // rcx
  unsigned __int16 m_Left; // dx
  __int64 v11; // rdx
  unsigned __int16 v12; // si
  UtlRBTreeNode_t<unsigned int,short unsigned int> *v13; // rbx
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // r15
  unsigned int m_Data; // edx
  UtlRBTreeNode_t<unsigned int,short unsigned int> *v17; // rdi
  unsigned int v18; // eax
  unsigned __int16 Inorder; // ax
  int v20; // r12d
  unsigned __int16 v21; // r14
  unsigned __int16 v22; // ax
  UtlRBTreeNode_t<unsigned int,short unsigned int> *v23; // [rsp+0h] [rbp-40h]
  const CUtlRBTree<unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,short unsigned int>,short unsigned int> > *l; // [rsp+8h] [rbp-38h]

  result = 1;
  if ( lhs->m_nTeamNumber >= rhs->m_nTeamNumber )
  {
    result = 0;
    if ( lhs->m_nTeamNumber <= rhs->m_nTeamNumber )
    {
      m_pInfo = lhs->m_pInfo;
      result = 1;
      v4 = rhs->m_pInfo;
      m_NumElements = m_pInfo->m_LoadedSpawnGroups.m_NumElements;
      v6 = v4->m_LoadedSpawnGroups.m_NumElements;
      if ( m_NumElements >= v6 )
      {
        result = 0;
        if ( m_NumElements <= v6 )
        {
          m_Root = m_pInfo->m_LoadedSpawnGroups.m_Root;
          l = &m_pInfo->m_LoadedSpawnGroups;
          p_m_LoadedSpawnGroups = &v4->m_LoadedSpawnGroups;
          if ( m_Root != 0xFFFF )
          {
            m_pMemory = m_pInfo->m_LoadedSpawnGroups.m_Elements.m_pMemory;
            m_Left = m_pMemory[m_Root].m_Left;
            if ( m_Left != 0xFFFF )
            {
              while ( m_pMemory[m_Left].m_Left != 0xFFFF )
                m_Left = m_pMemory[m_Left].m_Left;
              m_Root = m_Left;
            }
          }
          v11 = v4->m_LoadedSpawnGroups.m_Root;
          result = 0;
          v12 = m_Root;
          if ( v11 != 0xFFFF )
          {
            v13 = v4->m_LoadedSpawnGroups.m_Elements.m_pMemory;
            v14 = v13[v11].m_Left;
            if ( v14 != 0xFFFF )
            {
              while ( v13[v14].m_Left != 0xFFFF )
                v14 = v13[v14].m_Left;
              v11 = v14;
            }
            result = 0;
            if ( m_Root != 0xFFFF )
            {
              v15 = v11;
              if ( v11 != 0xFFFF )
              {
                m_Data = v13[v11].m_Data;
                v17 = m_pInfo->m_LoadedSpawnGroups.m_Elements.m_pMemory;
                v23 = v17;
                if ( v17[m_Root].m_Data < m_Data )
                {
                  return 1;
                }
                else if ( v17[m_Root].m_Data <= m_Data )
                {
                  while ( 1 )
                  {
                    Inorder = CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::NextInorder(
                                l,
                                v12);
                    v20 = Inorder;
                    v21 = Inorder;
                    v22 = CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::NextInorder(
                            p_m_LoadedSpawnGroups,
                            v15);
                    if ( v20 == 0xFFFF )
                      break;
                    v15 = v22;
                    if ( v22 == 0xFFFF )
                      break;
                    v18 = v13[v22].m_Data;
                    if ( v23[v21].m_Data < v18 )
                      return 1;
                    if ( v23[v21].m_Data > v18 )
                      break;
                    v12 = v20;
                  }
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// CSource2GameEntities::CheckTransmit  (line 3293, @0x000000000223c3e0, libserver.so)  // inlines: BitVec_Or<false>, CUtlMemory, CUtlRBTree, Element, Find, FindInsertionPosition, First, GetBool, GetFloat, GetInstance, GetInt, IndexToIdentity, Insert, InsertAt, Instance, IsIdxValid, IsUsed, IsValidIndex, LeftChild, LookupEntityByIndex, LookupEntityByNetworkIndex, Next, Or<CFixedBitVecBase<16384>, CFixedBitVecBase<16384> >, Purge, RemoveAll, ResetDbgInfo, RightChild, SetLeftChild, SetRightChild, ToBasePlayer, operator==, operator[], ~CUtlMemory, ~CUtlRBTree
// calls: CGlobalVarsBase::curtime, memcpy, CSource2GameEntities::CheckEntities, CUtlRBTree<TeamSharePVS_t, short unsigned int, bool (*)(const TeamSharePVS_t&, const TeamSharePVS_t&), CUtlMemory<UtlRBTreeNode_t<TeamSharePVS_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<TeamSharePVS_t, short unsigned int, bool (*)(const TeamSharePVS_t&, const TeamSharePVS_t&), CUtlMemory<UtlRBTreeNode_t<TeamSharePVS_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlMemory<UtlRBTreeNode_t<TeamSharePVS_t, short unsigned int>, short unsigned int>::Purge, __stack_chk_fail, CUtlRBTree<TeamSharePVS_t, short unsigned int, bool (*)(const TeamSharePVS_t&, const TeamSharePVS_t&), CUtlMemory<UtlRBTreeNode_t<TeamSharePVS_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, _Unwind_Resume
// globals: TeamSharePVS_t::Less(TeamSharePVS_t const&,TeamSharePVS_t const&)
void __fastcall CSource2GameEntities::CheckTransmit(
        CSource2GameEntities *const this,
        CCheckTransmitInfo **ppInfoList,
        int nInfoCount,
        CBitVec<16384> *const unionTransmitEdicts,
        const Entity2Networkable_t **ppNetworkables,
        const unsigned __int16 *pEntityIndices,
        int nEntityIndices)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS NUMPAD "+" TO EXPAND]

  thisa = this;
  v54 = __readfsqword(0x28u);
  ppNetworkablesa = ppNetworkables;
  teamTopInfo.m_LessFunc = TeamSharePVS_t::Less;
  teamTopInfo.m_NumElements = 0;
  teamTopInfo.m_Elements.m_pMemory = 0;
  m_nValue = sv_shared_team_pvs.m_pParent->m_Value.m_nValue;
  teamTopInfo.m_Elements.m_nAllocationCount = 0;
  teamTopInfo.m_Root = -1;
  teamTopInfo.m_Elements.m_nGrowSize = 0;
  teamTopInfo.m_FirstFree = -1;
  teamTopInfo.m_LastAlloc.index = -1;
  v11 = sv_force_transmit_ents.m_pParent->m_Value.m_nValue;
  teamTopInfo.m_pElements = 0;
  bSharedTeamPVS = m_nValue != 0;
  v12 = v11 != 0;
  this->m_bSteadyStateEnabled = ent_steadystate_enable.m_pParent->m_Value.m_nValue != 0;
  thisa->m_flSteadyStateChangeTime = CGlobalVarsBase::curtime(gpGlobals, 0)
                                   - ent_steadystate_delay.m_pParent->m_Value.m_fValue;
  v13 = alloca(((nEntityIndices + 31) & 0xFFFFFFF0) + 16LL);
  v14 = 0;
  pChangeFlags = (&ppNetworkablesa & 0xFFFFFFFFFFFFFFEFLL);
  if ( nEntityIndices > 0 )
  {
    v15 = pChangeFlags;
    v16 = ppNetworkablesa;
    do
    {
      v17 = v16[v14++];
      v15[v14 - 1] = *v17->m_pnChangeFlags & 0x1C;
    }
    while ( nEntityIndices > v14 );
  }
  if ( nInfoCount > 0 )
  {
    pInfo = ppInfoList;
    v45 = &ppInfoList[(nInfoCount - 1) + 1];
    checkTransmitInfo = &gameInfo;
    *v43 = v12;
    pCopyFrom = &search;
    do
    {
      m_PVS = pInfo->m_PVS;
      m_Data = m_PVS->m_nClientEntityIndex.m_Data;
      if ( m_Data <= 0x7FFE )
      {
        v19 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[m_Data >> 9];
        if ( v19 != 0 )
        {
          v20 = &v19[m_Data & 0x1FF];
          if ( v20 != 0 )
          {
            LOWORD(v47) = v20->m_EHandle.m_Index;
            if ( (v47 & 0x7FFF) == m_Data )
            {
              m_pInstance = v20->m_pInstance;
              v22 = v20->m_pInstance == 0;
              v23 = v20->m_pInstance;
              v47 = v20->m_pInstance;
              if ( !v22 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v23) != 0 )
              {
                (*(v47->_vptr_IHandleEntity + 372))(v47, checkTransmitInfo, m_PVS);
                m_Root = teamTopInfo.m_Root;
                m_pMemory = teamTopInfo.m_Elements.m_pMemory;
                search.m_nTeamNumber = gameInfo.m_nRecipientCoachedTeamNumber;
                search.m_pInfo = m_PVS;
                while ( m_Root != 0xFFFF )
                {
                  while ( 1 )
                  {
                    v27 = m_Root;
                    if ( teamTopInfo.m_LessFunc(pCopyFrom, &m_pMemory[v27].m_Data) == 0 )
                      break;
                    m_pMemory = teamTopInfo.m_Elements.m_pMemory;
                    m_Root = teamTopInfo.m_Elements.m_pMemory[m_Root].m_Left;
                    if ( m_Root == 0xFFFF )
                      goto LABEL_16;
                  }
                  if ( teamTopInfo.m_LessFunc(&teamTopInfo.m_Elements.m_pMemory[v27].m_Data, pCopyFrom) == 0 )
                    goto LABEL_17;
                  m_pMemory = teamTopInfo.m_Elements.m_pMemory;
                  m_Root = teamTopInfo.m_Elements.m_pMemory[v27].m_Right;
                }
LABEL_16:
                m_Root = 0xFFFF;
LABEL_17:
                if ( !bSharedTeamPVS || m_PVS->m_bFullUpdate || gameInfo.m_bRecipientHLTV || m_Root == 0xFFFF )
                {
                  v32 = (*(v47->_vptr_IHandleEntity + 534))(v47, v24, m_pMemory);
                  if ( !thisa->m_bSteadyStateEnabled )
                    v32 = 0;
                  CSource2GameEntities::CheckEntities(
                    thisa,
                    checkTransmitInfo,
                    nEntityIndices,
                    ppNetworkablesa,
                    pEntityIndices,
                    pChangeFlags,
                    v32,
                    v43[0]);
                  m_pTransmitEdict = m_PVS->m_pTransmitEdict;
                  for ( i = 0; i != -512; --i )
                    unionTransmitEdicts->m_Ints[i + 511] |= m_pTransmitEdict->m_Ints[i + 511];
                  if ( bSharedTeamPVS && !m_PVS->m_bFullUpdate && m_Root == 0xFFFF )
                  {
                    v35 = teamTopInfo.m_Root;
                    if ( teamTopInfo.m_Root != 0xFFFF )
                    {
                      while ( 1 )
                      {
                        if ( teamTopInfo.m_LessFunc(pCopyFrom, &teamTopInfo.m_Elements.m_pMemory[v35].m_Data) != 0 )
                        {
                          m_Left = teamTopInfo.m_Elements.m_pMemory[v35].m_Left;
                          v38 = 1;
                          if ( m_Left == 0xFFFF )
                            goto LABEL_50;
                        }
                        else
                        {
                          m_Left = teamTopInfo.m_Elements.m_pMemory[v35].m_Right;
                          v38 = 0;
                          if ( m_Left == 0xFFFF )
                            goto LABEL_50;
                        }
                        v35 = m_Left;
                      }
                    }
                    v38 = 0;
LABEL_50:
                    v37 = CUtlRBTree<TeamSharePVS_t,unsigned short,bool (*)(TeamSharePVS_t const&,TeamSharePVS_t const&),CUtlMemory<UtlRBTreeNode_t<TeamSharePVS_t,unsigned short>,unsigned short>>::NewNode(
                            &teamTopInfo,
                            pCopyFrom);
                    CUtlRBTree<TeamSharePVS_t,unsigned short,bool (*)(TeamSharePVS_t const&,TeamSharePVS_t const&),CUtlMemory<UtlRBTreeNode_t<TeamSharePVS_t,unsigned short>,unsigned short>>::LinkToParent(
                      &teamTopInfo,
                      v37,
                      v35,
                      v38);
                    ++teamTopInfo.m_NumElements;
                  }
                }
                else
                {
                  memcpy(
                    m_PVS->m_pTransmitEdict,
                    teamTopInfo.m_Elements.m_pMemory[m_Root].m_Data.m_pInfo->m_pTransmitEdict,
                    sizeof(CBitVec<16384>));
                }
              }
            }
          }
        }
      }
      pInfo = (pInfo + 8);
    }
    while ( pInfo != v45 );
  }
  index = teamTopInfo.m_LastAlloc.index;
  if ( teamTopInfo.m_LastAlloc.index != 0xFFFF )
  {
    m_nAllocationCount = teamTopInfo.m_Elements.m_nAllocationCount;
    v30 = 0;
    v31 = 0;
    if ( teamTopInfo.m_Elements.m_nAllocationCount > 0 )
    {
      do
      {
        if ( v31 < m_nAllocationCount && index >= v31 && teamTopInfo.m_Elements.m_pMemory[v30].m_Left != v31 )
        {
          teamTopInfo.m_Elements.m_pMemory[v30].m_Right = teamTopInfo.m_FirstFree;
          teamTopInfo.m_Elements.m_pMemory[v30].m_Left = v31;
          index = teamTopInfo.m_LastAlloc.index;
          teamTopInfo.m_FirstFree = v31;
        }
        if ( index == v31 )
          break;
        m_nAllocationCount = teamTopInfo.m_Elements.m_nAllocationCount;
        if ( (v31 + 1) >= teamTopInfo.m_Elements.m_nAllocationCount )
          break;
        ++v31;
        ++v30;
      }
      while ( v31 != 0xFFFF );
    }
    teamTopInfo.m_Root = -1;
    teamTopInfo.m_NumElements = 0;
  }
  teamTopInfo.m_FirstFree = -1;
  if ( (teamTopInfo.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<TeamSharePVS_t,unsigned short>,unsigned short>::Purge(&teamTopInfo.m_Elements);
    teamTopInfo.m_LastAlloc.index = -1;
    if ( (teamTopInfo.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<TeamSharePVS_t,unsigned short>,unsigned short>::Purge(&teamTopInfo.m_Elements);
  }
}


// CSource2GameEntities::PrepareForFullUpdate  (line 3373, @0x000000000221f390, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
void __fastcall CSource2GameEntities::PrepareForFullUpdate(
        CSource2GameEntities *const this,
        CEntityIndex nPlayerEntityIndex)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rax
  __int64 v4; // [rsp-8h] [rbp-8h]

  if ( nPlayerEntityIndex.m_Data <= 0x7FFE )
  {
    v2 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nPlayerEntityIndex.m_Data >> 9];
    if ( v2 != 0 )
    {
      v3 = &v2[nPlayerEntityIndex.m_Data & 0x1FF];
      if ( v3 != 0 )
      {
        *(&v4 - 8) = v3->m_EHandle.m_Index;
        if ( nPlayerEntityIndex.m_Data == (*(&v4 - 2) & 0x7FFF) && v3->m_pInstance != 0 )
          (*(v3->m_pInstance->_vptr_IHandleEntity + 535))(v3->m_pInstance);
      }
    }
  }
}


// __CreateCSource2GameClientsISource2GameClients_interface  (line 3386, @0x000000000221aa20, libserver.so)
// globals: g_ServerGameClients
void *__cdecl __CreateCSource2GameClientsISource2GameClients_interface()
{
  return &g_ServerGameClients;
}


// CSource2GameClients::ClientConnect  (line 3399, @0x000000000221aa30, libserver.so)
bool __fastcall CSource2GameClients::ClientConnect(
        CSource2GameClients *const this,
        CEntityIndex nEntityIndex,
        uint64 unSteamID,
        const char *pszName,
        const char *pszAddress,
        char *reject,
        int maxrejectlen)
{
  return g_pGameRules == 0
      || (*(g_pGameRules->_vptr_CGameRules + 63))(
           g_pGameRules,
           nEntityIndex.m_Data,
           pszName,
           pszAddress,
           reject,
           maxrejectlen);
}


// CSource2GameClients::ClientActive  (line 3410, @0x0000000002220900, libserver.so)  // inlines: CreateEvent, FirstEnt, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: ClientActive, CGameEntitySystem::NextEnt, CSoundEnvelopeController::GetController, SceneManager_ClientActive
// strings: "player_activate"
// globals: engine
void __fastcall CSource2GameClients::ClientActive(
        CSource2GameClients *const this,
        CEntityIndex nEntityIndex,
        bool bLoadGame,
        bool bFakeClient)
{
  CBaseEntity *v5; // rsi
  CBaseEntity *Ent; // rax
  CBaseEntity *v7; // rbx
  CBasePlayer *m_pInstance; // rbx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rax
  CSoundEnvelopeController *Controller; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  void (__fastcall *v14)(__int64, char *, _QWORD); // r14
  unsigned int v15; // eax

  ClientActive(nEntityIndex, bLoadGame, bFakeClient);
  v5 = 0;
  if ( gpGlobals->eLoadType != MapLoadType_t::MapLoad_LoadGame )
  {
    while ( 1 )
    {
      Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, v5);
      v7 = Ent;
      if ( Ent == 0 )
        break;
      (*(Ent->_vptr_IHandleEntity + 67))(Ent);
      v5 = v7;
    }
  }
  m_pInstance = 0;
  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v9 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[nEntityIndex.m_Data & 0x1FF];
      if ( v10 != 0 && nEntityIndex.m_Data == (v10->m_EHandle.m_Index & 0x7FFF) )
        m_pInstance = v10->m_pInstance;
    }
  }
  Controller = CSoundEnvelopeController::GetController();
  (*(Controller->_vptr_CSoundEnvelopeController + 19))(Controller, m_pInstance);
  SceneManager_ClientActive(m_pInstance);
  v12 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_activate", 0, 0);
  v13 = v12;
  if ( v12 != 0 )
  {
    v14 = *(*v12 + 112LL);
    v15 = (*(*engine + 224LL))(engine, (nEntityIndex.m_Data - 1));
    v14(v13, "userid", v15);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v13, 0);
  }
}


// CSource2GameClients::ClientDisconnect  (line 3442, @0x0000000002220380, libserver.so)  // inlines: CreateEvent, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, NetworkStateChanged, Set, SetMaxSpeed, ToBasePlayer, operator=<float>
// calls: CBaseEntity::PhysicsRemoveTouchedList, CBaseEntity::PhysicsRemoveGroundList, OnSource1GameEventsDisconnectPlayer, FreeContainingEntity, CSoundEnt::ClientSoundIndex, CSoundEnt::SoundPointerForIndex, CSound::Reset, CBaseEntity::RemoveFlag, CBaseEntity::AddFlag
// strings: "player_disconnect", "xuid", "networkid"
void __fastcall CSource2GameClients::ClientDisconnect(
        CSource2GameClients *const this,
        CEntityIndex nEntityIndex,
        int userid,
        ENetworkDisconnectionReason reason,
        const char *pszName,
        uint64 steamid,
        const char *pszNetworkId)
{
  CBaseEntity *v8; // rbx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rax
  CBaseEntity *m_pInstance; // r13
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdx
  void (__fastcall *v16)(__int64, char *, __int64); // r15
  CBaseEntity *v17; // rdi
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rax
  CPlayerSlot v20; // eax
  CSound *v21; // rax

  v8 = 0;
  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v9 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[nEntityIndex.m_Data & 0x1FF];
      if ( v10 != 0 && (v10->m_EHandle.m_Index & 0x7FFF) == nEntityIndex.m_Data )
      {
        m_pInstance = v10->m_pInstance;
        if ( v10->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
          v8 = m_pInstance;
      }
    }
  }
  v12 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_disconnect", 0, 0);
  v13 = v12;
  if ( v12 != 0 )
  {
    (*(*v12 + 112LL))(v12, "userid", userid);
    (*(*v13 + 112LL))(v13, "reason", reason);
    (*(*v13 + 136LL))(v13, "name", pszName);
    (*(*v13 + 120LL))(v13, "xuid", steamid);
    (*(*v13 + 136LL))(v13, "networkid", pszNetworkId);
    v15 = 0xFFFFFFFFLL;
    v16 = *(*v13 + 112LL);
    if ( v8 != 0 )
      v15 = (*(v8->_vptr_IHandleEntity + 393))(v8, v14, 0xFFFFFFFFLL);
    v16(v13, "PlayerID", v15);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v13, 0);
  }
  if ( v8 != 0 )
  {
    if ( !g_fGameOver )
    {
      if ( *&v8[4].m_OnUser1._vptr_CEntityIOOutput != 0.0 )
      {
        (*(v8->_vptr_IHandleEntity + 22))(v8, 3736, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
        LODWORD(v8[4].m_OnUser1._vptr_CEntityIOOutput) = 0;
      }
      v20.m_Data = CSoundEnt::ClientSoundIndex(v8).m_Data;
      v21 = CSoundEnt::SoundPointerForIndex(v20);
      if ( v21 != 0 )
        CSound::Reset(v21);
      CBaseEntity::RemoveFlag(v8, 0x10000);
      CBaseEntity::AddFlag(v8, 0x400000);
      CBaseEntity::AddFlag(v8, 0x8000);
      (*(v8[1].m_NetworkTransmitComponent._vptr_IEventRegisterCallback + 16))(&v8[1].m_NetworkTransmitComponent);
      if ( g_pGameRules != 0 )
      {
        (*(g_pGameRules->_vptr_CGameRules + 65))(g_pGameRules, nEntityIndex.m_Data, reason);
        (*(gamestats->_vptr_CBaseGameStats + 21))(gamestats, v8);
      }
    }
    CBaseEntity::PhysicsRemoveTouchedList(v8);
    CBaseEntity::PhysicsRemoveGroundList(v8);
  }
  OnSource1GameEventsDisconnectPlayer(nEntityIndex);
  v17 = 0;
  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v18 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v18 != 0 )
    {
      v19 = &v18[nEntityIndex.m_Data & 0x1FF];
      if ( v19 != 0 && (v19->m_EHandle.m_Index & 0x7FFF) == nEntityIndex.m_Data )
        v17 = v19->m_pInstance;
    }
  }
  FreeContainingEntity(v17);
}


// CSource2GameClients::ClientPutInServer  (line 3505, @0x0000000002221b00, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToBasePlayer
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CBasePlayer::SetSplitScreenPlayer, operator new, CEntityKeyValues::CEntityKeyValues, CEntitySystem::QueueSpawnEntity, CEntitySystem::ExecuteQueuedCreation, CBaseEntity::AddFlag, CBaseEntity::Instance, ClientPutInServer, operator delete, _Unwind_Resume
// strings: "SV:  ClientPutInServer -- player %d transitioned via saverestore file [%s]\n"
// globals: g_pClientPutInServerOverride, engine
void __fastcall CSource2GameClients::ClientPutInServer(
        CSource2GameClients *const this,
        CEntityIndex nEntityIndex,
        const char *playername,
        bool bFakePlayer)
{
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rax
  CBasePlayer *m_pInstance; // r12
  char v12; // al
  CBasePlayer *v13; // rdx
  bool v14; // r13
  CEntityKeyValues *v15; // r13
  CEntityIndex v16; // eax

  if ( (*(g_pLoopModeGameSharedState->_vptr_ILoopModeGameSharedState + 3))(g_pLoopModeGameSharedState) == 0 )
  {
    if ( nEntityIndex.m_Data <= 0x7FFE
      && (v7 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9]) != 0
      && (v8 = &v7[nEntityIndex.m_Data & 0x1FF]) != 0
      && nEntityIndex.m_Data == (v8->m_EHandle.m_Index & 0x7FFF)
      && v8->m_pInstance != 0
      && (*(v8->m_pInstance->_vptr_IHandleEntity + 140))(v8->m_pInstance) != 0 )
    {
      if ( (*(g_pLoopModeGameSharedState->_vptr_ILoopModeGameSharedState + 6))(g_pLoopModeGameSharedState) != 0 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 1) != 0 )
          LoggingSystem_Log(
            LOG_SAVERESTORE,
            1,
            "SV:  ClientPutInServer -- player %d transitioned via saverestore file [%s]\n",
            nEntityIndex.m_Data,
            playername);
        return;
      }
    }
    else if ( (*(g_pLoopModeGameSharedState->_vptr_ILoopModeGameSharedState + 6))(g_pLoopModeGameSharedState) != 0 )
    {
LABEL_26:
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      return;
    }
    if ( g_pClientPutInServerOverride != 0 )
      g_pClientPutInServerOverride(nEntityIndex, playername);
    else
      ClientPutInServer(nEntityIndex, playername, bFakePlayer);
    if ( nEntityIndex.m_Data <= 0x7FFE )
    {
      v9 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[nEntityIndex.m_Data & 0x1FF];
        if ( v10 != 0 && nEntityIndex.m_Data == (v10->m_EHandle.m_Index & 0x7FFF) )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
          {
            if ( bFakePlayer )
              CBaseEntity::AddFlag(m_pInstance, 256);
            v12 = (*(*engine + 408LL))(engine, nEntityIndex.m_Data);
            v13 = 0;
            v14 = v12;
            if ( v12 != 0 )
            {
              v16.m_Data = (*(*engine + 416LL))(engine, nEntityIndex.m_Data, 0);
              v13 = CBaseEntity::Instance(v16);
            }
            CBasePlayer::SetSplitScreenPlayer(m_pInstance, v14, v13);
            v15 = operator new(0x70u);
            CEntityKeyValues::CEntityKeyValues(v15);
            CEntitySystem::QueueSpawnEntity(g_pEntitySystem, m_pInstance->m_pEntity, v15);
          }
        }
      }
    }
    goto LABEL_26;
  }
}


// CSource2GameClients::ClientFullyConnect  (line 3558, @0x000000000221fb80, libserver.so)  // inlines: CreateEvent, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToBasePlayer
// strings: "player_connect_full"
// globals: engine
void __fastcall CSource2GameClients::ClientFullyConnect(
        CSource2GameClients *const this,
        CEntityIndex nEntityIndex,
        CPlayerSlot nClientIndex)
{
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rax
  CEntityInstance *m_pInstance; // rbx
  CEntityInstance *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, char *, _QWORD); // r15
  unsigned int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64, char *, __int64); // r13

  (*(g_pGameConfiguration->ISource2ServerConfig::IAppSystem::_vptr_IAppSystem + 19))(&g_pGameConfiguration->ISource2ServerConfig);
  if ( nEntityIndex.m_Data <= 0x7FFE
    && (v5 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9]) != 0
    && (v6 = &v5[nEntityIndex.m_Data & 0x1FF]) != 0
    && (v6->m_EHandle.m_Index & 0x7FFF) == nEntityIndex.m_Data
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
  {
    v8 = m_pInstance;
    (*(m_pInstance->_vptr_IHandleEntity + 428))(m_pInstance);
  }
  else
  {
    v8 = 0;
  }
  v9 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_connect_full", 0, 0);
  v10 = v9;
  if ( v9 != 0 )
  {
    v11 = *(*v9 + 112LL);
    v12 = (*(*engine + 224LL))(engine, nClientIndex.m_Data);
    v11(v10, "userid", v12);
    (*(*v10 + 112LL))(v10, "index", nClientIndex.m_Data);
    v14 = 0xFFFFFFFFLL;
    v15 = *(*v10 + 112LL);
    if ( v8 != 0 )
      v14 = (*(v8->_vptr_IHandleEntity + 393))(v8, v13, 0xFFFFFFFFLL);
    v15(v10, "PlayerID", v14);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v10, 0);
  }
}


// CSource2GameClients::ClientCommand  (line 3581, @0x000000000221f570, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToBasePlayer
// calls: ClientCommand
void __fastcall CSource2GameClients::ClientCommand(
        CSource2GameClients *const this,
        CEntityIndex nEntityIndex,
        const CCommand *const args)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rax
  CBasePlayer *m_pInstance; // rbx

  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v4 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v4 != 0 )
    {
      v5 = &v4[nEntityIndex.m_Data & 0x1FF];
      if ( v5 != 0 && (v5->m_EHandle.m_Index & 0x7FFF) == nEntityIndex.m_Data )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
          ClientCommand(m_pInstance, args);
      }
    }
  }
}


// CSource2GameClients::OnClientConnected  (line 3591, @0x000000000221aa70, libserver.so)  // inlines: CreateEvent
// strings: "player_connect", "xuid", "networkid"
void __fastcall CSource2GameClients::OnClientConnected(
        CSource2GameClients *const this,
        CEntityIndex nEntityIndex,
        int userid,
        const char *pszName,
        uint64 steamid,
        const char *pszNetworkId,
        const char *pszIP,
        bool bFakePlayer)
{
  __int64 v11; // rax
  __int64 v12; // r12

  v11 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_connect", 0, 0);
  v12 = v11;
  if ( v11 != 0 )
  {
    (*(*v11 + 112LL))(v11, "userid", userid);
    (*(*v12 + 112LL))(v12, "index", (nEntityIndex.m_Data - 1));
    (*(*v12 + 136LL))(v12, "name", pszName);
    (*(*v12 + 120LL))(v12, "xuid", steamid);
    (*(*v12 + 136LL))(v12, "networkid", pszNetworkId);
    (*(*v12 + 136LL))(v12, "address", pszIP);
    (*(*v12 + 112LL))(v12, "bot", bFakePlayer);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v12, 0);
  }
}


// CSource2GameClients::ClientSettingsChanged  (line 3627, @0x000000000221fd00, libserver.so)  // inlines: GetFloat, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: V_atoi, __cxa_guard_acquire, ConVarRef::IsValid, ConVarRef::ConVarRef, __cxa_guard_release, V_atof, __cxa_guard_abort, _Unwind_Resume
// strings: "cl_updaterate", "cl_interpolate", "cl_predict", "sv_minupdaterate", "cl_predictweapons", "cl_lagcompensation" (9 total)
// globals: engine, `guard variable for'CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_minupdaterate, `guard variable for'CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_maxupdaterate, CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_minupdaterate, CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_maxupdaterate
void __fastcall CSource2GameClients::ClientSettingsChanged(CSource2GameClients *const this, CEntityIndex nEntityIndex)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rax
  CEntityInstance *m_pInstance; // r12
  __int64 v6; // rax
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  IVEngineServer2 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  float v16; // xmm1_4
  __int64 v17; // rax
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float m_pAsString_high; // xmm0_4
  float m_fValue; // xmm1_4
  int v23; // eax
  float flLerpRatio; // [rsp+0h] [rbp-20h]

  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v3 != 0 )
    {
      v4 = &v3[nEntityIndex.m_Data & 0x1FF];
      if ( v4 != 0 && nEntityIndex.m_Data == (v4->m_EHandle.m_Index & 0x7FFF) )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          v6 = (*(*engine + 384LL))(engine, nEntityIndex.m_Data, "cl_updaterate");
          v7 = V_atoi(v6);
          v8 = `guard variable for'CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_minupdaterate == 0;
          HIDWORD(m_pInstance[55].m_iszPrivateVScripts.u.m_pAsString) = v7;
          if ( v8
            && __cxa_guard_acquire(&`guard variable for'CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_minupdaterate) != 0 )
          {
            ConVarRef::ConVarRef(
              &CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_minupdaterate,
              "sv_minupdaterate");
            __cxa_guard_release(&`guard variable for'CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_minupdaterate);
          }
          if ( `guard variable for'CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_maxupdaterate == 0
            && __cxa_guard_acquire(&`guard variable for'CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_maxupdaterate) != 0 )
          {
            ConVarRef::ConVarRef(
              &CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_maxupdaterate,
              "sv_maxupdaterate");
            __cxa_guard_release(&`guard variable for'CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_maxupdaterate);
          }
          if ( ConVarRef::IsValid(&CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_minupdaterate)
            && ConVarRef::IsValid(&CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_maxupdaterate) )
          {
            m_pAsString_high = SHIDWORD(m_pInstance[55].m_iszPrivateVScripts.u.m_pAsString);
            m_fValue = CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_maxupdaterate.m_pConVarState->m_Value.m_fValue;
            if ( m_pAsString_high > m_fValue
              || (m_fValue = CSource2GameClients::ClientSettingsChanged(CEntityIndex)::sv_minupdaterate.m_pConVarState->m_Value.m_fValue) > m_pAsString_high )
            {
              v23 = m_fValue;
            }
            else
            {
              v23 = m_pAsString_high;
            }
            HIDWORD(m_pInstance[55].m_iszPrivateVScripts.u.m_pAsString) = v23;
          }
          v9 = (*(*engine + 384LL))(engine, nEntityIndex.m_Data, "cl_interpolate");
          if ( V_atoi(v9) != 0 )
          {
            v15 = (*(*engine + 384LL))(engine, nEntityIndex.m_Data, "cl_interp_ratio");
            v16 = V_atof(v15);
            if ( v16 == 0.0 )
              v16 = 1.0;
            flLerpRatio = v16;
            v17 = (*(*engine + 384LL))(engine, nEntityIndex.m_Data, "cl_interp");
            v18 = V_atof(v17);
            v19 = sv_client_min_interp_ratio.m_pParent->m_Value.m_fValue;
            if ( v19 == -1.0 )
            {
              v20 = flLerpRatio;
            }
            else
            {
              v20 = sv_client_max_interp_ratio.m_pParent->m_Value.m_fValue;
              if ( flLerpRatio <= v20 )
                v20 = fmaxf(v19, flLerpRatio);
            }
            *&m_pInstance[55].m_worldGroupId.m_nHashCode = fmaxf(
                                                             v18,
                                                             v20
                                                           / SHIDWORD(m_pInstance[55].m_iszPrivateVScripts.u.m_pAsString));
          }
          else
          {
            m_pInstance[55].m_worldGroupId.m_nHashCode = 0;
          }
          v10 = (*(*engine + 384LL))(engine, nEntityIndex.m_Data, "cl_predict");
          if ( V_atoi(v10) != 0 )
          {
            v11 = (*(*engine + 384LL))(engine, nEntityIndex.m_Data, "cl_predictweapons");
            v12 = V_atoi(v11);
            v13 = engine;
            *(&m_pInstance[55].m_worldGroupId + 5) = v12 != 0;
            v14 = (*(*v13 + 384LL))(v13, nEntityIndex.m_Data, "cl_lagcompensation");
            *(&m_pInstance[55].m_worldGroupId + 4) = V_atoi(v14) != 0;
          }
          else
          {
            *(&m_pInstance[55].m_worldGroupId + 5) = 0;
            *(&m_pInstance[55].m_worldGroupId + 4) = 0;
          }
          (*(g_pGameRules->_vptr_CGameRules + 84))(g_pGameRules, m_pInstance);
        }
      }
    }
  }
}


// CSource2GameClients::ClientSetupVisibility  (line 3752, @0x0000000002238d80, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<Vector>, Element, GrowMemory, LeafCodeInfo_t, Next, Purge, RemoveAll, memset, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CBaseEntity::Instance, UTIL_MaybeCacheClientPVS, CBasePlayer::GetFOVDistanceAdjustFactorForNetworking, CPlayerLocalData::UpdateAreaBits, CUtlMemory<Vector, int>::Purge, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlMemory<Vector, int>::Grow, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail (15 total)
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/gameinter, "ClientSetupVisibility", "ClientSetupVisibility: portal number (%d) too large"
// globals: g_AreaPortals
void __fastcall CSource2GameClients::ClientSetupVisibility(
        CSource2GameClients *const this,
        CEntityIndex nViewEntityIndex,
        CEntityIndex nClientEntityIndex,
        vis_info_t *pPVS)
{
  void (__fastcall *v7)(IPVSManager *, _QWORD, vis_info_t *); // r13
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  CBaseEntity *v9; // r15
  int v10; // xmm1_4
  CBaseEntity *v11; // rax
  int v12; // xmm1_4
  void (__fastcall *v13)(IPVSManager *, _QWORD, Vector *, vis_info_t *); // r13
  SpawnGroupHandle_t v14; // eax
  float FOVDistanceAdjustFactorForNetworking; // xmm0_4
  __int64 m_Size; // rbx
  int v17; // eax
  Vector *v18; // rax
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<CFuncAreaPortalBase*,short unsigned int> *m_pMemory; // rax
  int m_portalNumber; // ecx
  __int64 v22; // rbx
  CFuncAreaPortalBase *m_Element; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // r8d
  CBasePlayer *pPlayer; // [rsp+0h] [rbp-110h]
  float fovDistanceAdjustFactor; // [rsp+Ch] [rbp-104h]
  bool bIsOpenOnClient; // [rsp+1Fh] [rbp-F1h] BYREF
  Vector org; // [rsp+20h] [rbp-F0h] BYREF
  LeafCodeInfo_t v33; // [rsp+30h] [rbp-E0h] BYREF
  unsigned __int8 portalBits[32]; // [rsp+50h] [rbp-C0h] BYREF
  CUtlVectorFixedGrowableCompat<Vector,6ul> areaPortalOrigins; // [rsp+70h] [rbp-A0h] BYREF
  unsigned __int64 v36; // [rsp+D8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v7 = *(g_pPVSManager->_vptr_IPVSManager + 8);
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  v7(g_pPVSManager, ActiveSpawnGroupHandle, pPVS);
  if ( nViewEntityIndex.m_Data != 0 )
  {
    v11 = CBaseEntity::Instance(nViewEntityIndex);
    v9 = v11;
    if ( v11 != 0 )
    {
      v33.m_szFile = COERCE_CONST_CHAR_((*(v11->_vptr_IHandleEntity + 164))(v11));
      v33.m_nLine = v12;
      org = *&v33.m_szFile;
      v13 = *(g_pPVSManager->_vptr_IPVSManager + 9);
      v14 = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
      v13(g_pPVSManager, v14, &org, pPVS);
      areaPortalOrigins.m_Size = 0;
      areaPortalOrigins.m_Memory.m_nAllocationCount = 6;
      areaPortalOrigins.m_Memory.m_nGrowSize = 0x80000000;
      areaPortalOrigins.m_Memory.m_pMemory = &areaPortalOrigins.m_FixedMemory;
      pPlayer = CBaseEntity::Instance(nClientEntityIndex);
      if ( pPlayer != 0 )
        goto LABEL_6;
LABEL_31:
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::AddToTail(&areaPortalOrigins, &org);
      pPlayer = 0;
      fovDistanceAdjustFactor = 1.0;
      goto LABEL_10;
    }
  }
  areaPortalOrigins.m_Size = 0;
  areaPortalOrigins.m_Memory.m_nAllocationCount = 6;
  areaPortalOrigins.m_Memory.m_pMemory = &areaPortalOrigins.m_FixedMemory;
  areaPortalOrigins.m_Memory.m_nGrowSize = 0x80000000;
  pPlayer = CBaseEntity::Instance(nClientEntityIndex);
  if ( pPlayer == 0 )
    goto LABEL_31;
  v33.m_szFile = COERCE_CONST_CHAR_((*(pPlayer->_vptr_IHandleEntity + 164))(pPlayer));
  v9 = 0;
  v33.m_nLine = v10;
  org = *&v33.m_szFile;
LABEL_6:
  (*(pPlayer->_vptr_IHandleEntity + 371))(pPlayer, v9, pPVS);
  UTIL_MaybeCacheClientPVS(pPlayer, pPVS);
  FOVDistanceAdjustFactorForNetworking = CBasePlayer::GetFOVDistanceAdjustFactorForNetworking(pPlayer);
  m_Size = areaPortalOrigins.m_Size;
  fovDistanceAdjustFactor = FOVDistanceAdjustFactorForNetworking;
  v17 = areaPortalOrigins.m_Size;
  if ( areaPortalOrigins.m_Size == areaPortalOrigins.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<Vector,int>::Grow(&areaPortalOrigins.m_Memory, 1);
    v17 = areaPortalOrigins.m_Size;
  }
  areaPortalOrigins.m_Size = v17 + 1;
  v18 = &areaPortalOrigins.m_Memory.m_pMemory[m_Size];
  if ( v18 != 0 )
    *v18 = org;
LABEL_10:
  m_Head = g_AreaPortals.m_Head;
  memset(portalBits, 0, 24);
  m_pMemory = g_AreaPortals.m_Memory.m_pMemory;
  if ( g_AreaPortals.m_Head != 0xFFFF )
  {
    while ( 1 )
    {
      v22 = m_Head;
      m_Element = m_pMemory[v22].m_Element;
      bIsOpenOnClient = 1;
      (*(m_Element->_vptr_IHandleEntity + 214))(
        m_Element,
        &areaPortalOrigins,
        &bIsOpenOnClient,
        fovDistanceAdjustFactor);
      if ( m_Element->m_iPortalVersion == 0 )
        break;
      if ( bIsOpenOnClient )
        goto LABEL_13;
LABEL_16:
      m_pMemory = g_AreaPortals.m_Memory.m_pMemory;
      m_Head = g_AreaPortals.m_Memory.m_pMemory[v22].m_Next;
      if ( m_Head == 0xFFFF )
        goto LABEL_20;
    }
    bIsOpenOnClient = 1;
LABEL_13:
    m_portalNumber = m_Element->m_portalNumber;
    if ( m_portalNumber >= 0 )
    {
      if ( m_portalNumber > 0xBF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_30;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v26, v27, v24, v25) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_30:
          v28 = m_Element->m_portalNumber;
          v33.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/gameinterface.cpp";
          v33.m_szFunction = "ClientSetupVisibility";
          v33.m_nLine = 3848;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v33,
            "ClientSetupVisibility: portal number (%d) too large",
            v28);
        }
      }
      portalBits[m_portalNumber >> 3] |= 1 << (m_portalNumber & 7);
    }
    goto LABEL_16;
  }
LABEL_20:
  if ( pPlayer != 0 )
    CPlayerLocalData::UpdateAreaBits(&pPlayer->m_Local, pPlayer, portalBits);
  areaPortalOrigins.m_Size = 0;
  if ( (areaPortalOrigins.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&areaPortalOrigins.m_Memory);
    if ( (areaPortalOrigins.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&areaPortalOrigins.m_Memory);
  }
}


// CSource2GameClients::ProcessUsercmds  (line 3891, @0x00000000022220d0, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, CUserCmd, ChangeAccessorFieldPathIndex_t, EnsureValidValue, EnsureValidValue<float>, HandInfo_t, Init, Reset, Zero, operator=, ~CUserCmd
// calls: HandInfo_t::Reset, CBaseEntity::Instance, Msg, bf_read::SetOverflowFlag, ReadUsercmd, _Unwind_Resume
// strings: "CBasePlayer::ProcessUsercmds: too many cmds %i sent for player %s\n"
void __fastcall CSource2GameClients::ProcessUsercmds(
        CSource2GameClients *const this,
        CEntityIndex nEntityIndex,
        bf_read *buf,
        int numcmds,
        int totalcmds,
        int dropped_packets,
        bool ignore,
        bool paused)
{
  CUserCmd *v8; // rbx
  HandInfo_t *v9; // r12
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *p_m_vFilteredPosition; // r13
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *p_m_FilteredAngles; // r14
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *p_m_vFilteredVelocity; // r15
  char *v13; // rax
  HandInfo_t *v14; // r14
  vec_t x; // xmm0_4
  signed __int64 v16; // r13
  vec_t y; // xmm0_4
  __int64 v18; // r12
  HandInfo_t *v19; // rbx
  CEntityInstance *v20; // rax
  CUserCmd *hmd_controllers_active; // rbx
  vec_t v22; // xmm0_4
  HandInfo_t *v23; // r12
  vec_t z; // xmm0_4
  CBaseEntity *v25; // rax
  CBaseEntity *v26; // rbx
  const char *v27; // rdx
  CUserCmd *v28; // rbx
  int (**vptr_CUserCmd)(...); // rax
  CUserCmd *v30; // rdi
  CUserCmd *v31; // r12
  vec_t v32; // xmm0_4
  HandInfo_t *v33; // r15
  CUserCmd *v34; // r12
  CUserCmd *i; // rdx
  CUserCmd *v36; // r15
  CUserCmd *v37; // rbx
  int (**v38)(...); // rax
  CUserCmd *v39; // rdi
  __int64 v45; // [rsp+28h] [rbp-8A98h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *p_m_Angles; // [rsp+38h] [rbp-8A88h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *p_m_vPosition; // [rsp+40h] [rbp-8A80h]
  CNetworkVarBase<Quaternion,HandInfo_t::NetworkVar_m_FilteredAngularVel> *p_m_FilteredAngularVel; // [rsp+58h] [rbp-8A68h]
  HandInfo_t *v49; // [rsp+60h] [rbp-8A60h]
  HandInfo_t *hmd_controllers_info; // [rsp+68h] [rbp-8A58h]
  CUserCmd cmdNull; // [rsp+70h] [rbp-8A50h] BYREF
  CUserCmd cmds[64]; // [rsp+290h] [rbp-8830h] BYREF
  char v53; // [rsp+8A90h] [rbp-30h] BYREF

  v45 = 63;
  v8 = cmds;
  v49 = -cmds[0].hmd_controllers_info;
  p_m_FilteredAngularVel = &cmds[0].hmd_controllers_info[0].m_FilteredAngularVel;
  do
  {
    v8->_vptr_CUserCmd = off_403F950;  // vptr: CUserCmd
    hmd_controllers_info = v8->hmd_controllers_info;
    v9 = v8->hmd_controllers_info;
    p_m_vPosition = &v8->hmd_controllers_info[0].m_vPosition;
    p_m_Angles = &v8->hmd_controllers_info[0].m_Angles;
    p_m_vFilteredPosition = &v8->hmd_controllers_info[0].m_vFilteredPosition;
    p_m_FilteredAngles = &v8->hmd_controllers_info[0].m_FilteredAngles;
    p_m_vFilteredVelocity = &v8->hmd_controllers_info[0].m_vFilteredVelocity;
    do
    {
      v9->__m_pChainEntity.m_pObj = CEntitySpawnHelper::gm_pCurEntityPtr;
      v13 = v49 + v9;
      *(&v8->hmd_controllers_info[0].__m_PathIndex.m_Value + v13) = -1;
      *(&p_m_vPosition->m_Value.z + v13) = 0.0;
      *(&p_m_vPosition->m_Value.y + v13) = 0.0;
      *(&p_m_vPosition->m_Value.x + v13) = 0.0;
      *(&p_m_Angles->m_Value.x + v13) = 0.0;
      *(&p_m_Angles->m_Value.y + v13) = 0.0;
      *(&p_m_Angles->m_Value.z + v13) = 0.0;
      *(&p_m_vFilteredPosition->m_Value.z + v13) = 0.0;
      *(&p_m_vFilteredPosition->m_Value.y + v13) = 0.0;
      *(&p_m_vFilteredPosition->m_Value.x + v13) = 0.0;
      *(&p_m_FilteredAngles->m_Value.x + v13) = 0.0;
      *(&p_m_FilteredAngles->m_Value.y + v13) = 0.0;
      *(&p_m_FilteredAngles->m_Value.z + v13) = 0.0;
      *(&p_m_vFilteredVelocity->m_Value.z + v13) = 0.0;
      *(&p_m_vFilteredVelocity->m_Value.y + v13) = 0.0;
      *(&p_m_vFilteredVelocity->m_Value.x + v13) = 0.0;
      *(&p_m_FilteredAngularVel->m_Value.x + v13) = 0.0;
      *(&p_m_FilteredAngularVel->m_Value.y + v13) = 0.0;
      *(&p_m_FilteredAngularVel->m_Value.z + v13) = 0.0;
      *(&p_m_FilteredAngularVel->m_Value.w + v13) = 0.0;
      v9->m_flTriggerAnalogValue.m_Value = 0.0;
      v9->m_flGripAnalogValue.m_Value = 0.0;
      v9->m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
      v9->m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
      HandInfo_t::Reset(v9++);
    }
    while ( v9 != &v8->hmd_middle_eye_local );
    v8->command_number = 0;
    v8->tick_count = 0;
    v8->viewangles.x = 0.0;
    v14 = &v8->hmd_controllers_info[1];
    x = vec3_origin.x;
    v16 = v8 - cmds;
    *(&cmds[0].viewangles.y + v16) = 0.0;
    *(&cmds[0].viewangles.z + v16) = 0.0;
    v8->crosshairtrace.x = x;
    y = vec3_origin.y;
    v8->cameraposition[1] = 0;
    v18 = 0;
    v8->forwardmove = 0.0;
    v8->sidemove = 0.0;
    v8->upmove = 0.0;
    v8->buttons = 0;
    v8->impulse = 0;
    v8->weaponselect = 0;
    v8->weaponsubtype = 0;
    v8->random_seed = 0;
    v8->mousedx = 0;
    v8->mousedy = 0;
    v8->hasbeenpredicted = 0;
    v8->cameraposition[0] = 0;
    v8->clickbehavior = 0;
    v8->statspanel = 0;
    v8->shoppanel = 0;
    v8->stats_dropdown = 0;
    v8->stats_dropdown_sort = 0;
    *(&cmds[0].crosshairtrace.y + v16) = y;
    *(&cmds[0].crosshairtrace.z + v16) = vec3_origin.z;
    v8->hmd_active = 0;
    v8->hmd_targeting_mode = 0;
    while ( 1 )
    {
      v8->hmd_controllers_active[v18] = 0;
      HandInfo_t::Reset(hmd_controllers_info);
      if ( ++v18 == 4 )
        break;
      hmd_controllers_info = v14++;
    }
    ++v8;
    --v45;
    v49 = (v49 - 544);
    p_m_FilteredAngularVel += 34;
    *(&cmds[0].hmd_middle_eye_local.x + v16) = 0.0;
    *(&cmds[0].hmd_middle_eye_local.y + v16) = 0.0;
    *(&cmds[0].hmd_middle_eye_local.z + v16) = 0.0;
    *(&cmds[0].hmd_viewangles_local.x + v16) = 0.0;
    *(&cmds[0].hmd_viewangles_local.y + v16) = 0.0;
    *(&cmds[0].hmd_viewangles_local.z + v16) = 0.0;
  }
  while ( v8 != &v53 );
  cmdNull._vptr_CUserCmd = off_403F950;
  v19 = cmdNull.hmd_controllers_info;
  do
  {
    v19->__m_PathIndex.m_Value = -1;
    v19->m_vPosition.m_Value.z = 0.0;
    v19->m_vPosition.m_Value.y = 0.0;
    v20 = CEntitySpawnHelper::gm_pCurEntityPtr;
    v19->m_vPosition.m_Value.x = 0.0;
    v19->m_Angles.m_Value.x = 0.0;
    v19->m_Angles.m_Value.y = 0.0;
    v19->m_Angles.m_Value.z = 0.0;
    v19->__m_pChainEntity.m_pObj = v20;
    v19->m_vFilteredPosition.m_Value.z = 0.0;
    v19->m_vFilteredPosition.m_Value.y = 0.0;
    v19->m_vFilteredPosition.m_Value.x = 0.0;
    v19->m_FilteredAngles.m_Value.x = 0.0;
    v19->m_FilteredAngles.m_Value.y = 0.0;
    v19->m_FilteredAngles.m_Value.z = 0.0;
    v19->m_vFilteredVelocity.m_Value.z = 0.0;
    v19->m_vFilteredVelocity.m_Value.y = 0.0;
    v19->m_vFilteredVelocity.m_Value.x = 0.0;
    v19->m_FilteredAngularVel.m_Value.x = 0.0;
    v19->m_FilteredAngularVel.m_Value.y = 0.0;
    v19->m_FilteredAngularVel.m_Value.z = 0.0;
    v19->m_FilteredAngularVel.m_Value.w = 0.0;
    v19->m_flTriggerAnalogValue.m_Value = 0.0;
    v19->m_flGripAnalogValue.m_Value = 0.0;
    v19->m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
    v19->m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
    HandInfo_t::Reset(v19++);
  }
  while ( v19 != &cmdNull.hmd_middle_eye_local );
  cmdNull.crosshairtrace.x = vec3_origin.x;
  hmd_controllers_active = cmdNull.hmd_controllers_active;
  v22 = vec3_origin.y;
  cmdNull.cameraposition[1] = 0;
  memset(&cmdNull.command_number, 0, 41);
  v23 = cmdNull.hmd_controllers_info;
  cmdNull.crosshairtrace.y = v22;
  z = vec3_origin.z;
  memset(&cmdNull.weaponselect, 0, 17);
  cmdNull.cameraposition[0] = 0;
  cmdNull.clickbehavior = 0;
  cmdNull.statspanel = 0;
  cmdNull.shoppanel = 0;
  cmdNull.stats_dropdown = 0;
  cmdNull.stats_dropdown_sort = 0;
  cmdNull.crosshairtrace.z = z;
  cmdNull.hmd_active = 0;
  cmdNull.hmd_targeting_mode = 0;
  do
  {
    LOBYTE(hmd_controllers_active->_vptr_CUserCmd) = 0;
    HandInfo_t::Reset(v23);
    hmd_controllers_active = (hmd_controllers_active + 1);
    ++v23;
  }
  while ( hmd_controllers_active != &cmdNull.hmd_controllers_active[4] );
  memset(&cmdNull.hmd_middle_eye_local, 0, 24);
  v25 = CBaseEntity::Instance(nEntityIndex);
  v26 = v25;
  if ( v25 != 0 && (*(v25->_vptr_IHandleEntity + 140))(v25) != 0 )
  {
    if ( totalcmds > 0x3E )
    {
      v27 = (*(v26->_vptr_IHandleEntity + 106))(v26);
LABEL_16:
      Msg("CBasePlayer::ProcessUsercmds: too many cmds %i sent for player %s\n", totalcmds, v27);
      bf_read::SetOverflowFlag(buf);
LABEL_17:
      cmdNull._vptr_CUserCmd = off_403F950;
      v28 = &cmds[63];
      do
      {
        vptr_CUserCmd = v28->_vptr_CUserCmd;
        v30 = v28--;
        (*vptr_CUserCmd)(v30);
      }
      while ( v28 != &cmdNull );
      return;
    }
  }
  else
  {
    v27 = "unknown";
    v26 = 0;
    if ( totalcmds > 0x3E )
      goto LABEL_16;
  }
  v31 = cmdNull.hmd_controllers_active;
  cmdNull.crosshairtrace.x = vec3_origin.x;
  cmdNull.crosshairtrace.y = vec3_origin.y;
  v32 = vec3_origin.z;
  v33 = cmdNull.hmd_controllers_info;
  cmdNull.cameraposition[0] = 0;
  memset(&cmdNull.command_number, 0, 41);
  memset(&cmdNull.weaponselect, 0, 17);
  cmdNull.cameraposition[1] = 0;
  cmdNull.clickbehavior = 0;
  cmdNull.statspanel = 0;
  cmdNull.shoppanel = 0;
  cmdNull.stats_dropdown = 0;
  cmdNull.stats_dropdown_sort = 0;
  cmdNull.crosshairtrace.z = v32;
  cmdNull.hmd_active = 0;
  cmdNull.hmd_targeting_mode = 0;
  do
  {
    LOBYTE(v31->_vptr_CUserCmd) = 0;
    HandInfo_t::Reset(v33);
    v31 = (v31 + 1);
    ++v33;
  }
  while ( v31 != &cmdNull.hmd_controllers_active[4] );
  memset(&cmdNull.hmd_middle_eye_local, 0, 24);
  if ( totalcmds > 0 )
  {
    v34 = cmds;
    for ( i = &cmdNull; ; i = v36 )
    {
      v36 = v34;
      ReadUsercmd(buf, v34++, i);
      if ( v34 == &cmds[(totalcmds - 1) + 1] )
        break;
    }
  }
  if ( v26 == 0 || ignore )
    goto LABEL_17;
  (*(v26->_vptr_IHandleEntity + 491))(v26, cmds, numcmds, totalcmds, dropped_packets, paused);
  cmdNull._vptr_CUserCmd = off_403F950;
  v37 = &cmds[63];
  do
  {
    v38 = v37->_vptr_CUserCmd;
    v39 = v37--;
    (*v38)(v39);
  }
  while ( v37 != &cmdNull );
}


// CSource2GameClients::PostClientMessagesSent_DEPRECIATED  (line 3949, @0x000000000221ab90, libserver.so)
void __fastcall CSource2GameClients::PostClientMessagesSent_DEPRECIATED(CSource2GameClients *const this)
{
  ;
}


// CSource2GameClients::SetCommandClient  (line 3954, @0x000000000221aba0, libserver.so)
// globals: g_nCommandClientIndex
void __fastcall CSource2GameClients::SetCommandClient(CSource2GameClients *const this, CPlayerSlot index)
{
  g_nCommandClientIndex.m_Data = index.m_Data;
}


// CSource2GameClients::ClientEarPosition  (line 3962, @0x000000000221f410, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, operator=
void __fastcall CSource2GameClients::ClientEarPosition(
        CSource2GameClients *const this,
        CEntityIndex nEntityIndex,
        Vector *pEarOrigin)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rax
  double v6; // xmm0_8
  vec_t v7; // xmm1_4

  if ( nEntityIndex.m_Data <= 0x7FFE
    && (v4 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9]) != 0
    && (v5 = &v4[nEntityIndex.m_Data & 0x1FF]) != 0
    && nEntityIndex.m_Data == (v5->m_EHandle.m_Index & 0x7FFF)
    && v5->m_pInstance != 0 )
  {
    v6 = (*(v5->m_pInstance->_vptr_IHandleEntity + 167))(v5->m_pInstance);
    pEarOrigin->z = v7;
    *&pEarOrigin->x = v6;
  }
  else
  {
    *pEarOrigin = vec3_origin;
  }
}


// CSource2GameClients::IsPlayerAlive  (line 3977, @0x000000000221f2a0, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
bool __fastcall CSource2GameClients::IsPlayerAlive(CSource2GameClients *const this, CEntityIndex nEntityIndex)
{
  bool result; // al
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rdx
  __int64 v6; // [rsp-8h] [rbp-8h]

  result = 0;
  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v3 != 0 )
    {
      v4 = &v3[nEntityIndex.m_Data & 0x1FF];
      if ( v4 != 0 )
      {
        *(&v6 - 8) = v4->m_EHandle.m_Index;
        if ( nEntityIndex.m_Data == (*(&v6 - 2) & 0x7FFF) )
        {
          m_pInstance = v4->m_pInstance;
          if ( m_pInstance != 0 )
            return LOBYTE(m_pInstance[52].m_iszPrivateVScripts.u.m_Id) ^ 1;
        }
      }
    }
  }
  return result;
}


// CSource2GameClients::GetPlayerScore  (line 3986, @0x000000000221f220, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
int __fastcall CSource2GameClients::GetPlayerScore(CSource2GameClients *const this, CEntityIndex nEntityIndex)
{
  int result; // eax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rdx
  __int64 v6; // [rsp-8h] [rbp-8h]

  result = 0;
  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v3 != 0 )
    {
      v4 = &v3[nEntityIndex.m_Data & 0x1FF];
      if ( v4 != 0 )
      {
        *(&v6 - 8) = v4->m_EHandle.m_Index;
        if ( nEntityIndex.m_Data == (*(&v6 - 2) & 0x7FFF) )
        {
          m_pInstance = v4->m_pInstance;
          if ( m_pInstance != 0 )
            return m_pInstance[53].m_hPrivateScope.m_hScope;
        }
      }
    }
  }
  return result;
}


// CSource2GameClients::GetBugReportInfo  (line 4001, @0x00000000022206f0, libserver.so)  // inlines: CUtlSymbolLarge, GetClassNameAsCStr, GetClassname, GetEntityName, String, ToCStr, curtime, entindex
// calls: UTIL_PlayerByIndex, CBaseEntity::GetModelName, CEntityInstance::GetEntityIndex, V_snprintf, GetRecentNPCSpeech
// strings: "Picker %i/%s - ent %s model %s\n", "%sRecent NPC speech:\n", "%s   time: %6.3f   sound name: %s   scene: %s\n", "%sCurrent time: %6.3f\n"
void __fastcall CSource2GameClients::GetBugReportInfo(CSource2GameClients *const this, char *buf, int buflen)
{
  CBasePlayer *v5; // rax
  const CBaseEntity *v6; // rax
  const CEntityInstance *v7; // r12
  CEntityIdentity *m_pEntity; // rax
  const char *v9; // rdx
  const char *v10; // r8
  const char *m_pAsString; // r9
  CEntityIndex v12; // eax
  char *name; // r12
  CGlobalVars *v14; // r12
  double m_flCurrentTime; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *v17; // [rsp+8h] [rbp-CE8h]
  const char *v18; // [rsp+10h] [rbp-CE0h]
  const char *numa; // [rsp+18h] [rbp-CD8h]
  int num; // [rsp+18h] [rbp-CD8h]
  recentNPCSpeech_t speech[5]; // [rsp+20h] [rbp-CD0h] BYREF

  *buf = 0;
  if ( gpGlobals->maxClients == 1 )
  {
    if ( UTIL_PlayerByIndex(1) != 0 )
    {
      v5 = UTIL_PlayerByIndex(1);
      v6 = (*(v5->_vptr_IHandleEntity + 531))(v5);
      v7 = v6;
      if ( v6 != 0 )
      {
        CBaseEntity::GetModelName(speech, v6);
        m_pEntity = v7->m_pEntity;
        v9 = "";
        v10 = "";
        m_pAsString = m_pEntity->m_name.u.m_pAsString;
        if ( *&speech[0].time != 0 )
          v9 = *&speech[0].time;
        if ( m_pAsString == 0 )
          m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          v10 = m_pEntity->m_designerName.u.m_pAsString;
        v17 = v10;
        v18 = v9;
        numa = m_pAsString;
        v12.m_Data = CEntityInstance::GetEntityIndex(v7).m_Data;
        V_snprintf(buf, buflen, "Picker %i/%s - ent %s model %s\n", v12.m_Data, v17, numa, v18);
      }
    }
    num = GetRecentNPCSpeech(speech);
    if ( num > 0 )
    {
      V_snprintf(buf, buflen, "%sRecent NPC speech:\n", buf);
      name = speech[0].name;
      do
      {
        V_snprintf(buf, buflen, "%s   time: %6.3f   sound name: %s   scene: %s\n", buf, *(name - 1), name, name + 512);
        name += 644;
      }
      while ( name != speech[(num - 1) + 1].name );
      v14 = gpGlobals;
      m_flCurrentTime = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            (m_pfnWarningFunc)(1, 0.0);
        }
        m_flCurrentTime = v14->m_flCurrentTime;
      }
      V_snprintf(buf, buflen, "%sCurrent time: %6.3f\n", buf, m_flCurrentTime);
    }
  }
}


// CSource2GameClients::ClientVoice  (line 4092, @0x000000000221f620, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: PlayerVoiceListener, CPlayerVoiceListener::AddPlayerSpeakTime
void __fastcall CSource2GameClients::ClientVoice(CSource2GameClients *const this, CEntityIndex nEntityIndex)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rax
  CBasePlayer *m_pInstance; // rbx
  CPlayerVoiceListener *v5; // rax

  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v2 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v2 != 0 )
    {
      v3 = &v2[nEntityIndex.m_Data & 0x1FF];
      if ( v3 != 0 && nEntityIndex.m_Data == (v3->m_EHandle.m_Index & 0x7FFF) )
      {
        m_pInstance = v3->m_pInstance;
        if ( v3->m_pInstance != 0 )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 537))(m_pInstance);
          v5 = PlayerVoiceListener();
          CPlayerVoiceListener::AddPlayerSpeakTime(v5, m_pInstance);
        }
      }
    }
  }
}


// CSource2GameClients::NetworkIDValidated  (line 4107, @0x000000000221abb0, libserver.so)
void __fastcall CSource2GameClients::NetworkIDValidated(
        CSource2GameClients *const this,
        const char *pszUserName,
        const char *pszNetworkID)
{
  ;
}


// CSource2GameClients::ClientCommandKeyValues  (line 4130, @0x000000000221f4e0, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
void __fastcall CSource2GameClients::ClientCommandKeyValues(
        CSource2GameClients *const this,
        CEntityIndex nPlayerEntity,
        KeyValues *pKeyValues)
{
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rax
  __int64 v5; // [rsp-8h] [rbp-8h]

  if ( nPlayerEntity.m_Data <= 0x7FFE )
  {
    v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nPlayerEntity.m_Data >> 9];
    if ( v3 != 0 )
    {
      v4 = &v3[nPlayerEntity.m_Data & 0x1FF];
      if ( v4 != 0 )
      {
        *(&v5 - 8) = v4->m_EHandle.m_Index;
        if ( nPlayerEntity.m_Data == (*(&v5 - 2) & 0x7FFF) && v4->m_pInstance != 0 && pKeyValues != 0 )
          (*(g_pGameRules->_vptr_CGameRules + 43))(g_pGameRules);
      }
    }
  }
}


// CSource2GameClients::GetHLTVDirector  (line 4207, @0x000000000221c820, libserver.so)
// calls: HLTVDirector
IHLTVDirector *__fastcall CSource2GameClients::GetHLTVDirector(const CSource2GameClients *const this)
{
  CHLTVDirector *v1; // rax

  v1 = HLTVDirector();
  if ( v1 != 0 )
    return &v1->IHLTVDirector;
  else
    return 0;
}


// CSource2GameClients::StartHLTVServer  (line 4212, @0x0000000002220a50, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToBasePlayer
// calls: HLTVDirector, GetLegacyGameEventListener, CGameEventManager::AddListener, CGameEventManager::GetEventDescriptor, DevMsg(char const*,...)
// strings: "CHLTVServer::StartMaster: game event %s not found.\n"
void __fastcall CSource2GameClients::StartHLTVServer(
        CSource2GameClients *const this,
        CEntityIndex nMasterClientEntityIndex)
{
  IHLTVDirector *v3; // rbx
  CHLTVDirector *v4; // rax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rax
  CEntityInstance *m_pInstance; // r13
  IGameEventListener2 *LegacyGameEventListener; // r14
  const char **v9; // rax
  const char *v10; // rbx
  const char **v11; // r12
  CGameEventDescriptor *EventDescriptor; // rax

  v3 = 0;
  v4 = HLTVDirector();
  if ( v4 != 0 )
    v3 = &v4->IHLTVDirector;
  if ( nMasterClientEntityIndex.m_Data <= 0x7FFE )
  {
    v5 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nMasterClientEntityIndex.m_Data >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[nMasterClientEntityIndex.m_Data & 0x1FF];
      if ( v6 != 0 && (v6->m_EHandle.m_Index & 0x7FFF) == nMasterClientEntityIndex.m_Data )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
          BYTE1(m_pInstance[52].m_iszPrivateVScripts.u.m_Id) = 1;
      }
    }
  }
  LegacyGameEventListener = GetLegacyGameEventListener(nMasterClientEntityIndex);
  v9 = (*(v3->_vptr_IHLTVDirector + 9))(v3);
  v10 = *v9;
  if ( *v9 != 0 )
  {
    v11 = v9 + 1;
    do
    {
      while ( 1 )
      {
        EventDescriptor = CGameEventManager::GetEventDescriptor(&s_GameEventManager, v10, 0);
        if ( EventDescriptor == 0 )
          break;
        ++v11;
        CGameEventManager::AddListener(&s_GameEventManager, LegacyGameEventListener, EventDescriptor, 2);
        v10 = *(v11 - 1);
        if ( v10 == 0 )
          return;
      }
      ++v11;
      DevMsg("CHLTVServer::StartMaster: game event %s not found.\n", v10);
      v10 = *(v11 - 1);
    }
    while ( v10 != 0 );
  }
}


// CSource2GameClients::SendHLTVStatusMessage  (line 4251, @0x000000000221c920, libserver.so)  // inlines: CNetMessagePB, CSVCMsg_HLTVStatus_t, FindOrCreateNetMessage<CSVCMsg_HLTVStatus_t>, assign, length, set_clients, set_has_clients, set_has_master, set_has_proxies, set_master, set_proxies, set_slots, ~CNetMessagePB, ~CSVCMsg_HLTVStatus_t
// calls: CSVCMsg_HLTVStatus::CSVCMsg_HLTVStatus, strlen, std::string::assign(char const*,ulong), CSVCMsg_HLTVStatus::~CSVCMsg_HLTVStatus, HLTVDirector, CHLTVDirector::BroadcastEventInternal, _Unwind_Resume
// strings: "hltv_status", "hltv_message", "SourceTV reconnecting ..."
// globals: INetworkMessages::FindOrCreateNetMessage<CSVCMsg_HLTVStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<62,CSVCMsg_HLTVStatus,(SignonGroup_t)0,(NetChannelBufType_t)1,true>::s_ProtobufBinding
void __fastcall CSource2GameClients::SendHLTVStatusMessage(
        CSource2GameClients *const this,
        IHLTVServer *pServer,
        bool bIsMasterProxy,
        bool bIsConnected,
        const char *pchAddress,
        int nProxies,
        int nSlots,
        int nClients)
{
  size_t v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  IGameEvent *v14; // rbx
  CHLTVDirector *v15; // rax
  _QWORD v16[2]; // [rsp+10h] [rbp-50h] BYREF
  int v17; // [rsp+20h] [rbp-40h]
  std::string *v18; // [rsp+28h] [rbp-38h]
  int v19; // [rsp+30h] [rbp-30h]
  int v20; // [rsp+34h] [rbp-2Ch]
  int v21; // [rsp+38h] [rbp-28h]

  if ( bIsMasterProxy || bIsConnected )
  {
    CSVCMsg_HLTVStatus::CSVCMsg_HLTVStatus(v16);
    v17 |= 1u;
    v16[0] = off_403FAB0;
    v11 = strlen(pchAddress);
    std::string::assign(v18, pchAddress, v11);
    v21 = nProxies;
    v19 = nClients;
    v17 |= 0xEu;
    v20 = nSlots;
    v12 = INetworkMessages::FindOrCreateNetMessage<CSVCMsg_HLTVStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    if ( INetworkMessages::FindOrCreateNetMessage<CSVCMsg_HLTVStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
    {
      INetworkMessages::FindOrCreateNetMessage<CSVCMsg_HLTVStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 62, &CNetMessagePB<62,CSVCMsg_HLTVStatus,(SignonGroup_t)0,(NetChannelBufType_t)1,true>::s_ProtobufBinding, 48, 0, 1, 0);
      v12 = INetworkMessages::FindOrCreateNetMessage<CSVCMsg_HLTVStatus_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    }
    (*(pServer->_vptr_IBaseInterface + 12))(
      pServer,
      "hltv_status",
      v12,
      v16,
      &CNetMessagePB<62,CSVCMsg_HLTVStatus,(SignonGroup_t)0,(NetChannelBufType_t)1,true>::s_ProtobufBinding);
    v16[0] = &off_403F9F0;
    CSVCMsg_HLTVStatus::~CSVCMsg_HLTVStatus(v16);
  }
  else
  {
    v13 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "hltv_message", 1, 0);
    v14 = v13;
    if ( v13 != 0 )
    {
      (*(*v13 + 136LL))(v13, "text", "SourceTV reconnecting ...");
      v15 = HLTVDirector();
      CHLTVDirector::BroadcastEventInternal(v15, v14, pServer);
      (*(gameeventmanager->_vptr_IBaseInterface + 11))(gameeventmanager, v14);
    }
  }
}


