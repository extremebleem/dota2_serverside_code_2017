
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SetGCClientSystem  (line 35, @0x0000000002e71d00, libserver.so)
// callers: CDOTAGCServerSystem::CDOTAGCServerSystem, CDOTAGCServerSystem::~CDOTAGCServerSystem
// globals: s_pCGCGameSpecificClientSystem
void __fastcall SetGCClientSystem(CGCClientSystem *pGCClientSystem)
{
  s_pCGCGameSpecificClientSystem = pGCClientSystem;
}


// GCClientSystem  (line 40, @0x0000000002e71d10, libserver.so)
// callers: CSource2Server::GameServerSteamAPIDeactivated, CDOTAChallengeSystem::ClientMsg_ChallengeReroll, CSource2GameClients::HLTVClientFullyConnect, CDOTAGamerules::UpdateFanfareCount, CDOTAGamerules::SERVER_RequestPCBangAdditionalItems, CDOTAGamerules::UpdateAndDisplayPlayerBoosterState, TournamentItemEvent, PerformDOTASaveGame, CDOTAGamerules::BroadcastItemDropBonusStatus, CDOTAGamerules::State_Think_WAIT_FOR_PLAYERS_TO_LOAD, CDOTAGamerules::State_Enter_POST_GAME, GetFrostyBoostAmount (46 total)
// globals: s_pCGCGameSpecificClientSystem
CGCClientSystem *__cdecl GCClientSystem()
{
  return s_pCGCGameSpecificClientSystem;
}


// CGCClientSystem::CGCClientSystem  (line 49, @0x0000000002ea0d70, libserver.so)  // inlines: CCallback, CCallbackBase, CCallbackImpl, Register, SetGameserverFlag, ~CAutoGameSystem, ~CCallbackImpl
// calls: GCSDK::CGCClient::CGCClient, SteamAPI_RegisterCallback, IGameSystem::~IGameSystem, _Unwind_Resume, SteamAPI_UnregisterCallback, GCSDK::CGCClient::~CGCClient
// callers: CDOTAGCServerSystem::CDOTAGCServerSystem
// globals: CGCClientSystem::OnLogonSuccess(SteamServersConnected_t *)
void __fastcall CGCClientSystem::CGCClientSystem(CGCClientSystem *const this)
{
  *this = off_47AAB70;
  GCSDK::CGCClient::CGCClient((this + 24), 1);
  *(this + 389) = 0;
  *(this + 193) = off_47A6D90;
  *(this + 1552) = 2;
  *(this + 197) = 0;
  *(this + 195) = this;
  *(this + 196) = CGCClientSystem::OnLogonSuccess;
  SteamAPI_RegisterCallback(this + 1544, 101);
  *(this + 16) = 0;
}


// CGCClientSystem::~CGCClientSystem  (line 64, @0x0000000002ea0e50, libserver.so)  // inlines: ~CAutoGameSystem, ~CCallback, ~CCallbackImpl
// calls: SteamAPI_UnregisterCallback, GCSDK::CGCClient::~CGCClient, IGameSystem::~IGameSystem
// callers: CDOTAGCServerSystem::CDOTAGCServerSystem, CDOTAGCServerSystem::~CDOTAGCServerSystem, CGCClientSystem::~CGCClientSystem
void __fastcall CGCClientSystem::~CGCClientSystem(CGCClientSystem *const this)
{
  bool v2; // zf

  *this = off_47AAB70;
  v2 = (*(this + 1552) & 1) == 0;
  *(this + 193) = &off_47A5F50;
  if ( !v2 )
    SteamAPI_UnregisterCallback(this + 1544);
  GCSDK::CGCClient::~CGCClient((this + 24));
  *this = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CGCClientSystem::~CGCClientSystem  (line 64, @0x0000000002ea0eb0, libserver.so)
// calls: CGCClientSystem::~CGCClientSystem, operator delete
void __fastcall CGCClientSystem::~CGCClientSystem(CGCClientSystem *const this)
{
  CGCClientSystem::~CGCClientSystem(this);
  operator delete(this);
}


// CGCClientSystem::BSendMessage  (line 70, @0x0000000002e71d20, libserver.so)
// calls: GCSDK::CGCClient::BSendMessage
bool __fastcall CGCClientSystem::BSendMessage(
        CGCClientSystem *const this,
        uint32 unMsgType,
        const uint8 *pubData,
        uint32 cubData)
{
  return GCSDK::CGCClient::BSendMessage((this + 24), unMsgType, pubData, cubData);
}


// CGCClientSystem::BSendMessage  (line 77, @0x0000000002e71d30, libserver.so)
// calls: GCSDK::CGCClient::BSendMessage
bool __fastcall CGCClientSystem::BSendMessage(CGCClientSystem *const this, const GCSDK::CGCMsgBase *const msg)
{
  return GCSDK::CGCClient::BSendMessage((this + 24), msg);
}


// CGCClientSystem::BSendMessage  (line 84, @0x0000000002e71d40, libserver.so)
// calls: GCSDK::CGCClient::BSendMessage
// callers: TournamentItemEvent, SendFrostivusTimeElapsedToGC, CDOTAInGamePredictionGameSystem::PostPredictionResults, RequestIngameEventDataFromGC, CIngameEvent_FM2015::OnGameStarted, SendFrostyPointsMessageToGC, CDOTAInGamePredictionGameSystem::SelectInGamePredictions, CDOTAInGamePredictionGameSystem::FrameUpdatePostEntityThink, CDOTAInGamePredictionGameSystem::FireGameEvent, CDOTA_PlayerResource::FlushPlayerResourceRequests, CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg, CDOTAGCServerSystem::SendLoadFailure (23 total)
bool __fastcall CGCClientSystem::BSendMessage(CGCClientSystem *const this, const GCSDK::CProtoBufMsgBase *const msg)
{
  return GCSDK::CGCClient::BSendMessage((this + 24), msg);
}


// CGCClientSystem::GetSOCache  (line 91, @0x0000000002e71d50, libserver.so)
// calls: GCSDK::CGCClient::FindSOCache
// callers: CDOTAGamerules::UpdateAndDisplayPlayerBoosterState, CDOTAGamerules::BroadcastItemDropBonusStatus, GetFrostyBoostAmount, GetGoldFrostyBoostAmount, CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges, GetDOTAPlayerChallenge, GetDOTAPlayerQuestChallenge
GCSDK::CGCClientSharedObjectCache *__fastcall CGCClientSystem::GetSOCache(
        CGCClientSystem *const this,
        GCSDK::SOID_t soid)
{
  return GCSDK::CGCClient::FindSOCache((this + 24), soid);
}


// CGCClientSystem::GetSOCache  (line 96, @0x0000000002e71d60, libserver.so)
// calls: GCSDK::CGCClient::FindSOCache
const GCSDK::CGCClientSharedObjectCache *__fastcall CGCClientSystem::GetSOCache(
        const CGCClientSystem *const this,
        GCSDK::SOID_t soid)
{
  return GCSDK::CGCClient::FindSOCache((this + 24), soid);
}


// CGCClientSystem::FindOrAddSOCache  (line 102, @0x0000000002e71d70, libserver.so)
// calls: GCSDK::CGCClient::FindOrAddSOCache
GCSDK::CGCClientSharedObjectCache *__fastcall CGCClientSystem::FindOrAddSOCache(
        CGCClientSystem *const this,
        GCSDK::SOID_t soid)
{
  return GCSDK::CGCClient::FindOrAddSOCache((this + 24), soid);
}


// CGCClientSystem::Init  (line 108, @0x0000000002e69620, libserver.so)
bool __fastcall CGCClientSystem::Init(CGCClientSystem *const this)
{
  return 1;
}


// CGCClientSystem::PostInit  (line 114, @0x0000000002e69630, libserver.so)
void __fastcall CGCClientSystem::PostInit(CGCClientSystem *const this)
{
  ;
}


// CGCClientSystem::OnLogonSuccess  (line 125, @0x0000000002e71e90, libserver.so)
// calls: CGCClientSystem::SetupGC
void __fastcall CGCClientSystem::OnLogonSuccess(CGCClientSystem *const this, SteamServersConnected_t *pLogonSuccess)
{
  CGCClientSystem::SetupGC(this);
}


// CGCClientSystem::Shutdown  (line 134, @0x0000000002e69d90, libserver.so)
// calls: GCSDK::CGCClient::Uninit
// callers: CDOTAGCServerSystem::Shutdown
void __fastcall CGCClientSystem::Shutdown(CGCClientSystem *const this)
{
  GCSDK::CGCClient::Uninit((this + 24));
  *(this + 16) = 0;
}


// dev_simulate_gcdown  (line 143, @0x0000000002e69db0, libserver.so)  // inlines: GCClientSystem, GetSimulateGCConnectionFailure
// calls: V_atoi, GCSDK::CGCClient::SetSimulateGCConnectionFailure
// globals: s_pCGCGameSpecificClientSystem
void __fastcall dev_simulate_gcdown(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax

  if ( args->m_nArgc <= 1 )
  {
    GCSDK::CGCClient::SetSimulateGCConnectionFailure(
      (s_pCGCGameSpecificClientSystem + 24),
      *(s_pCGCGameSpecificClientSystem + 1337));
  }
  else
  {
    v2 = V_atoi(args->m_ppArgv[1]);
    GCSDK::CGCClient::SetSimulateGCConnectionFailure((s_pCGCGameSpecificClientSystem + 24), v2 != 0);
  }
}


// CGCClientSystem::SetupGC  (line 159, @0x0000000002e71d80, libserver.so)  // inlines: GetBool, GetInt, GetString
// calls: CommandLine, InventoryManager, GCSDK::CGCClient::SetGCSecretKey, GCSDK::CGCClient::SetSimulateGCConnectionFailure
// callers: CGCClientSystem::OnLogonSuccess
// strings: "+dev_simulate_gcdown", "FCVAR_NEVER_AS_STRING"
void __fastcall CGCClientSystem::SetupGC(CGCClientSystem *const this)
{
  __int64 v2; // rax
  char *m_pszString; // rsi

  if ( *(this + 16) != 0 )
    return;
  v2 = CommandLine(this);
  if ( (*(*v2 + 64LL))(v2, "+dev_simulate_gcdown") != 0 )
    GCSDK::CGCClient::SetSimulateGCConnectionFailure((this + 24), 1);
  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (gc_secret_key.m_nFlags & 0x1000) != 0 )
  {
    if ( pszParticleName[0] == 0 )
      goto LABEL_7;
  }
  else
  {
    m_pszString = "";
    if ( gc_secret_key.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = gc_secret_key.m_pParent->m_Value.m_pszString;
    if ( *m_pszString == 0 )
      goto LABEL_7;
  }
  GCSDK::CGCClient::SetGCSecretKey((this + 24), m_pszString);
LABEL_7:
  (*(*this + 328LL))(this, m_pszString);
  if ( InventoryManager() != 0 && items_game_use_gc_copy.m_pParent->m_Value.m_nValue != 0 )
    InventoryManager();
  (*(*this + 320LL))(this);
  (*(*this + 336LL))(this);
  if ( InventoryManager() != 0 )
    InventoryManager();
}


// CGCClientSystem::InitGC  (line 209, @0x0000000002e6c0d0, libserver.so)  // inlines: GetBuildVersionForGCMessage, Init, SteamGameServerClient
// calls: SteamGameServer_GetHSteamPipe, SteamGameServer_GetHSteamUser, GCSDK::CGCClient::BInit, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, SteamInternal_CreateInterface
// strings: "CGCClientSystem - failed to init GCClient!\n", "CGCClientSystem - no ISteamClient interface!\n", "SteamClient017", "SteamGameServer012", "SteamUtils008", "SteamNetworking005" (11 total)
// globals: SteamGameServerInternal_ModuleContext(void)::ctx
void __fastcall CGCClientSystem::InitGC(CGCClientSystem *const this)
{
  __int64 v2; // rdi
  ISteamClient *m_pSteamClient; // r12
  HSteamUser v4; // r14d
  __int64 v5; // rdi
  HSteamPipe v6; // r13d
  uint32 v7; // esi
  bool v8; // al
  const char *v9; // rdx
  __int64 v10; // rdi
  char IsChannelEnabled; // al
  unsigned int HSteamUser; // r13d
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned int HSteamPipe; // r12d
  __int64 v16; // rdi
  uint32 v17; // eax
  ISteamClient *Interface; // rax

  if ( SteamGameServer_GetHSteamPipe(this) == 0 )
    goto LABEL_9;
  m_pSteamClient = SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient;
  if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient == 0 )
  {
    HSteamUser = SteamGameServer_GetHSteamUser(v2);
    HSteamPipe = SteamGameServer_GetHSteamPipe(v13);
    if ( HSteamPipe == 0 )
      goto LABEL_13;
    Interface = SteamInternal_CreateInterface("SteamClient017");
    SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient = Interface;
    if ( Interface != 0 )
    {
      SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServer = (*(*Interface + 48LL))(
                                                                              Interface,
                                                                              HSteamUser,
                                                                              HSteamPipe,
                                                                              "SteamGameServer012");
      if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServer != 0 )
      {
        SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerUtils = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                    + 72LL))(
                                                                                     SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                     HSteamPipe,
                                                                                     "SteamUtils008");
        if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerUtils != 0 )
        {
          SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerNetworking = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                           + 128LL))(
                                                                                            SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                            HSteamUser,
                                                                                            HSteamPipe,
                                                                                            "SteamNetworking005");
          if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerNetworking != 0 )
          {
            SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerStats = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                        + 112LL))(
                                                                                         SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                         HSteamUser,
                                                                                         HSteamPipe,
                                                                                         "SteamGameServerStats001");
            if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamGameServerStats != 0 )
            {
              SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamHTTP = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                               + 184LL))(
                                                                                SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                HSteamUser,
                                                                                HSteamPipe,
                                                                                "STEAMHTTP_INTERFACE_VERSION002");
              if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamHTTP != 0 )
              {
                SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamInventory = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                      + 272LL))(
                                                                                       SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                       HSteamUser,
                                                                                       HSteamPipe,
                                                                                       "STEAMINVENTORY_INTERFACE_V001");
                if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamInventory != 0 )
                {
                  SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamUGC = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                  + 208LL))(
                                                                                   SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                   HSteamUser,
                                                                                   HSteamPipe,
                                                                                   "STEAMUGC_INTERFACE_VERSION009");
                  if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamUGC != 0 )
                    SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamApps = (*(*SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient
                                                                                     + 120LL))(
                                                                                      SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient,
                                                                                      HSteamUser,
                                                                                      HSteamPipe,
                                                                                      "STEAMAPPS_INTERFACE_VERSION008");
                }
              }
            }
          }
        }
      }
LABEL_13:
      m_pSteamClient = SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient;
      v4 = SteamGameServer_GetHSteamUser(v14);
      v6 = SteamGameServer_GetHSteamPipe(v16);
      v17 = (*(*engine + 712LL))(engine);
      if ( m_pSteamClient != 0 )
      {
        v7 = v17;
        goto LABEL_4;
      }
LABEL_10:
      IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 2);
      v9 = "CGCClientSystem - no ISteamClient interface!\n";
      if ( IsChannelEnabled != 0 )
        goto LABEL_8;
      return;
    }
LABEL_9:
    SteamGameServer_GetHSteamUser(v2);
    SteamGameServer_GetHSteamPipe(v10);
    (*(*engine + 712LL))(engine);
    goto LABEL_10;
  }
  v4 = SteamGameServer_GetHSteamUser(v2);
  v6 = SteamGameServer_GetHSteamPipe(v5);
  v7 = (*(*engine + 712LL))(engine);
LABEL_4:
  v8 = GCSDK::CGCClient::BInit((this + 24), v7, m_pSteamClient, v4, v6);
  *(this + 16) = v8;
  if ( !v8 && LoggingSystem_IsChannelEnabled(LOG_GCCLIENT, 2) != 0 )
  {
    v9 = "CGCClientSystem - failed to init GCClient!\n";
LABEL_8:
    LoggingSystem_Log(LOG_GCCLIENT, 2, v9);
  }
}


// CGCClientSystem::GetSteamUniverse  (line 254, @0x0000000002e71ea0, libserver.so)  // inlines: SteamGameServerClient
// calls: SteamGameServer_GetHSteamPipe, CSteamGameServerAPIContext::Init
// strings: "SteamUtils008"
// globals: CGCClientSystem::GetSteamUniverse(void)::s_eUniverse, SteamGameServerInternal_ModuleContext(void)::ctx
EUniverse __fastcall CGCClientSystem::GetSteamUniverse(const CGCClientSystem *const this)
{
  EUniverse result; // eax
  __int64 v2; // rdi
  __int64 v3; // rdi
  ISteamClient *m_pSteamClient; // rbx
  __int64 (__fastcall *v5)(ISteamClient *, _QWORD, const char *); // r12
  unsigned int HSteamPipe; // eax
  __int64 v7; // rax

  result = CGCClientSystem::GetSteamUniverse(void)const::s_eUniverse;
  if ( CGCClientSystem::GetSteamUniverse(void)const::s_eUniverse == EUniverse::k_EUniverseInvalid )
  {
    if ( SteamGameServer_GetHSteamPipe(this) != 0 )
    {
      if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient != 0 )
        return EUniverse::k_EUniversePublic;
      CSteamGameServerAPIContext::Init(&SteamGameServerInternal_ModuleContext(void)::ctx);
      if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient != 0 )
        return EUniverse::k_EUniversePublic;
    }
    if ( SteamGameServer_GetHSteamPipe(v2) != 0 )
    {
      m_pSteamClient = SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient;
      if ( SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient == 0 )
      {
        CSteamGameServerAPIContext::Init(&SteamGameServerInternal_ModuleContext(void)::ctx);
        m_pSteamClient = SteamGameServerInternal_ModuleContext(void)::ctx.m_pSteamClient;
      }
    }
    else
    {
      m_pSteamClient = 0;
    }
    v5 = *(*m_pSteamClient + 72LL);
    HSteamPipe = SteamGameServer_GetHSteamPipe(v3);
    v7 = v5(m_pSteamClient, HSteamPipe, "SteamUtils008");
    if ( v7 == 0 )
    {
      return EUniverse::k_EUniversePublic;
    }
    else
    {
      result = (*(*v7 + 16LL))(v7);
      CGCClientSystem::GetSteamUniverse(void)const::s_eUniverse = result;
    }
  }
  return result;
}


// CGCClientSystem::OutOfGameFrameBoundary  (line 279, @0x0000000002e69640, libserver.so)
void __fastcall CGCClientSystem::OutOfGameFrameBoundary(
        CGCClientSystem *const this,
        const EventOutOfGameFrameBoundary_t *const msg)
{
  __int64 v2; // rax
  EventGameFrameBoundary_t updateMsg; // [rsp+0h] [rbp-10h] BYREF

  v2 = *this;
  updateMsg.m_flFrameTime = msg->m_flFrameTime;
  (*(v2 + 232))(this, &updateMsg);
}


// CGCClientSystem::FrameBoundary  (line 289, @0x0000000002e71fc0, libserver.so)
// calls: CGCClientSystem::GCThink
// callers: CDOTAGCServerSystem::FrameBoundary
void __fastcall CGCClientSystem::FrameBoundary(CGCClientSystem *const this, const EventGameFrameBoundary_t *const msg)
{
  float v2; // xmm1_4

  CGCClientSystem::GCThink(this, msg->m_flFrameTime, v2);
}


// CGCClientSystem::GCThink  (line 296, @0x0000000002e71f50, libserver.so)
// calls: GCSDK::CGCClient::BMainLoop
// callers: CGCClientSystem::FrameBoundary
void __fastcall CGCClientSystem::GCThink(CGCClientSystem *const this, float a2, float flFrameTime)
{
  float v3; // xmm0_4

  if ( *(this + 16) != 0 )
  {
    v3 = a2 * 1000000.0;
    if ( v3 >= 9.223372e18 )
      GCSDK::CGCClient::BMainLoop((this + 24), 0x3E8u, (v3 - 9.223372e18) ^ 0x8000000000000000LL);
    else
      GCSDK::CGCClient::BMainLoop((this + 24), 0x3E8u, v3);
  }
}


// GetBuildVersionForGCMessage  (line 305, @0x0000000002e71fd0, libserver.so)
int __cdecl GetBuildVersionForGCMessage()
{
  return (*(*engine + 712LL))(engine);
}


// CGCClientSystem::SaveSerializedSOCache  (line 356, @0x0000000002ea0ed0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_Cache>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_Cache_Version>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_TypeCache>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, FindTypeCache, GetObject, New, SerializeCacheToMsg, add_caches, add_objects, add_type_caches, add_versions, set_file_version, set_gc_socache_file_version, set_has_file_version, set_has_gc_socache_file_version, set_has_id, set_has_service, set_has_service_id, set_has_type, set_has_version, set_id, set_service, set_service_id, set_type, set_version, ~CUtlBuffer, ~CUtlMemory
// calls: GCSDK::CGCClient::GetVersionsForSOCache, CMsgSerializedSOCache::CMsgSerializedSOCache, operator new, CMsgSerializedSOCache_Cache::CMsgSerializedSOCache_Cache, CMsgSerializedSOCache_Cache_Version::CMsgSerializedSOCache_Cache_Version, GCSDK::CSharedObjectCache::FindBaseTypeCache, CMsgSerializedSOCache::ByteSize, operator new [], CMsgSerializedSOCache::SerializeWithCachedSizesToArray, CUtlBuffer::CUtlBuffer, CUtlBuffer::SetExternalBuffer, operator delete [] (19 total)
void __fastcall CGCClientSystem::SaveSerializedSOCache(
        CGCClientSystem *const this,
        const GCSDK::CGCClientSharedObjectCache *pSOCache,
        uint32 unGCFileVersion,
        const char *pszFilename)
{
  const GCSDK::CGCClient::VecVersions_t *VersionsForSOCache; // r13
  __int64 current_size; // rax
  int *v8; // rbx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // r12
  int i; // r14d
  CMsgSerializedSOCache_Cache_Version *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  uint64 m_nVersion; // rdx
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rdx
  int v22; // r13d
  const GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax
  google::protobuf::internal::StringTypeHandlerBase *v24; // rdi
  const GCSDK::CSharedObjectTypeCache *v25; // r15
  int m_Size; // r14d
  size_t v27; // r13
  google::protobuf::uint8 *v28; // rax
  google::protobuf::uint8 *v29; // rbx
  __int64 v30; // rdx
  int v31; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rdx
  int total_size; // eax
  int v36; // edx
  unsigned __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  void **elements; // rcx
  __int64 v42; // rsi
  __int64 v43; // rax
  int allocated_size; // edx
  void **v45; // rdx
  __int64 v46; // rax
  int v47; // [rsp+1Ch] [rbp-E4h]
  google::protobuf::internal::RepeatedPtrFieldBase *v48; // [rsp+20h] [rbp-E0h]
  _BYTE v51[16]; // [rsp+40h] [rbp-C0h] BYREF
  int v52; // [rsp+50h] [rbp-B0h]
  google::protobuf::internal::RepeatedPtrFieldBase v53; // [rsp+58h] [rbp-A8h] BYREF
  int v54; // [rsp+70h] [rbp-90h]
  uint32 unGCFileVersiona; // [rsp+74h] [rbp-8Ch]
  CUtlBuffer buf; // [rsp+80h] [rbp-80h] BYREF
  GCSDK::SOID_t v57; // 0:rsi.8,8:rdx.8

  if ( pSOCache != 0 )
  {
    v57.m_id = (*(pSOCache->_vptr_CSharedObjectCache + 2))(pSOCache);
    VersionsForSOCache = GCSDK::CGCClient::GetVersionsForSOCache((this + 24), v57);
    if ( VersionsForSOCache != 0 )
    {
      CMsgSerializedSOCache::CMsgSerializedSOCache(v51);
      v54 = 4;
      unGCFileVersiona = unGCFileVersion;
      v52 |= 5u;
      current_size = v53.current_size_;
      if ( v53.current_size_ < v53.allocated_size_ )
      {
        ++v53.current_size_;
        v8 = v53.elements_[current_size];
      }
      else
      {
        if ( v53.allocated_size_ == v53.total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v53, v53.allocated_size_ + 1);
        v8 = operator new(0x58u);
        CMsgSerializedSOCache_Cache::CMsgSerializedSOCache_Cache(v8);
        v9 = v53.current_size_;
        ++v53.allocated_size_;
        ++v53.current_size_;
        v53.elements_[v9] = v8;
      }
      (*(pSOCache->_vptr_CSharedObjectCache + 2))(pSOCache);
      v8[4] |= 1u;
      v8[20] = v10;
      v11 = (*(pSOCache->_vptr_CSharedObjectCache + 2))(pSOCache);
      v8[4] |= 2u;
      *(v8 + 3) = v11;
      v12 = 0;
      for ( i = 0; i < VersionsForSOCache->m_Size; *(v14 + 3) = m_nVersion )
      {
        v19 = v8[10];
        v20 = v8[11];
        if ( v19 >= v20 )
        {
          if ( v20 == v8[12] )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v8 + 8), v20 + 1);
          v14 = operator new(0x28u);
          CMsgSerializedSOCache_Cache_Version::CMsgSerializedSOCache_Cache_Version(v14);
          v15 = v8[10];
          v16 = *(v8 + 4);
          ++v8[11];
          v8[10] = v15 + 1;
          *(v16 + 8 * v15) = v14;
        }
        else
        {
          v21 = *(v8 + 4);
          v8[10] = v19 + 1;
          v14 = *(v21 + 8 * v19);
        }
        ++i;
        v17 = *(v14 + 4);
        *(v14 + 8) = VersionsForSOCache->m_Memory.m_pMemory[v12].m_nService;
        *(v14 + 4) = v17 | 1;
        m_nVersion = VersionsForSOCache->m_Memory.m_pMemory[v12].m_nVersion;
        *(v14 + 4) = v17 | 3;
        ++v12;
      }
      if ( GCSDK::CSharedObject::sm_vecFactories.m_Size > 0 )
      {
        v48 = 0;
        v47 = 0;
        do
        {
          v22 = *(&GCSDK::CSharedObject::sm_vecFactories.m_Memory.m_pMemory->m_nID + v48);
          BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(pSOCache, v22);
          v25 = BaseTypeCache;
          if ( BaseTypeCache != 0 )
          {
            m_Size = BaseTypeCache->m_vecObjects.m_Size;
            if ( m_Size != 0 )
            {
              v30 = v8[16];
              v31 = v8[17];
              if ( v30 < v31 )
              {
                v46 = *(v8 + 7);
                v8[16] = v30 + 1;
                v32 = *(v46 + 8 * v30);
              }
              else
              {
                if ( v31 == v8[18] )
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v8 + 14), v31 + 1);
                v32 = operator new(0x38u);
                CMsgSerializedSOCache_TypeCache::CMsgSerializedSOCache_TypeCache(v32);
                v33 = v8[16];
                v34 = *(v8 + 7);
                ++v8[17];
                v8[16] = v33 + 1;
                *(v34 + 8 * v33) = v32;
              }
              total_size = v32->total_size_;
              LODWORD(v32[2].elements_) = v22;
              v32->total_size_ = total_size | 1;
              v36 = *(&v25->m_nTypeID + 1);
              v32->total_size_ = total_size | 5;
              HIDWORD(v32[2].elements_) = v36;
              if ( m_Size > 0 )
              {
                v37 = 0;
                v38 = 8LL * (m_Size - 1) + 8;
                do
                {
                  v43 = v32[1].current_size_;
                  allocated_size = v32[1].allocated_size_;
                  if ( v43 >= allocated_size )
                  {
                    if ( allocated_size == v32[1].total_size_ )
                      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v32 + 1, allocated_size + 1);
                    v39 = google::protobuf::internal::StringTypeHandlerBase::New(v24);
                    v40 = v32[1].current_size_;
                    elements = v32[1].elements_;
                    ++v32[1].allocated_size_;
                    v32[1].current_size_ = v40 + 1;
                    v42 = v39;
                    elements[v40] = v39;
                  }
                  else
                  {
                    v45 = v32[1].elements_;
                    v32[1].current_size_ = v43 + 1;
                    v42 = v45[v43];
                  }
                  (*(v25->m_vecObjects.m_Memory.m_pMemory[v37 / 8]->_vptr_CSharedObject + 8))(
                    v25->m_vecObjects.m_Memory.m_pMemory[v37 / 8],
                    v42);
                  v37 += 8LL;
                }
                while ( v37 != v38 );
              }
            }
          }
          ++v47;
          v48 += 2;
        }
        while ( v47 < GCSDK::CSharedObject::sm_vecFactories.m_Size );
      }
      v27 = CMsgSerializedSOCache::ByteSize(v51);
      v28 = operator new[](v27);
      v29 = v28;
      if ( v28 != 0 )
      {
        CMsgSerializedSOCache::SerializeWithCachedSizesToArray(v51, v28);
        CUtlBuffer::CUtlBuffer(&buf, 0, 0, 0);
        CUtlBuffer::SetExternalBuffer(&buf, v29, v27, v27, 0);
        (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 15))(&g_pFullFileSystem->IBaseFileSystem, pszFilename, 0, &buf);
        operator delete[](v29);
        CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
        CMsgSerializedSOCache::~CMsgSerializedSOCache(v51);
      }
      else
      {
        CMsgSerializedSOCache::~CMsgSerializedSOCache(v51);
      }
    }
  }
}


// CGCClientSystem::LoadSerializedSOCache  (line 387, @0x0000000002ea13a0, libserver.so)  // inlines: BIsRegisteredTypeID, FindOrAddSOCache, Get, Get<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_Cache>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_Cache_Version>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_TypeCache>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, GetSOCache, SetInitialized, _M_data, _M_rep, caches, objects, operator!=, size, type_caches, versions, ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, CMsgSerializedSOCache::CMsgSerializedSOCache, google::protobuf::MessageLite::ParseFromArray(void const*,int), CMsgSerializedSOCache::~CMsgSerializedSOCache, CUtlMemory<unsigned char, int>::Purge, GCSDK::CSharedObject::FindSharedObjectInfo, GCSDK::CGCClient::FindSOCache, GCSDK::CGCClient::FindOrAddSOCache, GCSDK::CGCClient::SetSOCacheVersion, GCSDK::CGCClientSharedObjectCache::CreateTypeCache, GCSDK::CSharedObject::Create, CUtlBuffer::SetExternalBuffer (14 total)
GCSDK::CGCClientSharedObjectCache *__fastcall CGCClientSystem::LoadSerializedSOCache(
        CGCClientSystem *const this,
        const char *pszFilename,
        GCSDK::SOID_t soidCacheID)
{
  GCSDK::CGCClientSharedObjectCache *v4; // r13
  int v6; // eax
  __int64 v7; // rbx
  int v8; // r12d
  __int64 v9; // r13
  int v10; // edx
  __int64 v11; // r12
  int v12; // ebx
  GCSDK::CGCClientSharedObjectCache *v13; // rax
  __int64 v14; // rbx
  int i; // r12d
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r12
  GCSDK::CSharedObject *v19; // rbx
  int v20; // eax
  __int64 v21; // [rsp+10h] [rbp-160h]
  GCSDK::CGCClientSharedObjectTypeCache *TypeCache; // [rsp+18h] [rbp-158h]
  __int64 owner; // [rsp+20h] [rbp-150h]
  GCSDK::CGCClient *v24; // [rsp+28h] [rbp-148h]
  __int64 v25; // [rsp+30h] [rbp-140h]
  int nCurrCache; // [rsp+3Ch] [rbp-134h]
  int nCurrCachea; // [rsp+3Ch] [rbp-134h]
  const std::string *strObj; // [rsp+40h] [rbp-130h]
  int32 strObja; // [rsp+40h] [rbp-130h]
  const std::string *strObjb; // [rsp+40h] [rbp-130h]
  GCSDK::SOID_t::Type_t msgType; // [rsp+48h] [rbp-128h]
  const CMsgSerializedSOCache_TypeCache *msgTypea; // [rsp+48h] [rbp-128h]
  GCSDK::SOID_t ID; // [rsp+58h] [rbp-118h] BYREF
  __int64 v35; // [rsp+78h] [rbp-F8h]
  int v36; // [rsp+80h] [rbp-F0h]
  int v37; // [rsp+90h] [rbp-E0h]
  int v38; // [rsp+94h] [rbp-DCh]
  CUtlBuffer diskFile; // [rsp+A0h] [rbp-D0h] BYREF
  CUtlBuffer buf; // [rsp+F0h] [rbp-80h] BYREF
  GCSDK::SOID_t v41; // 0:rsi.8,8:rdx.8
  GCSDK::SOID_t v42; // 0:rsi.8,8:rdx.8
  GCSDK::SOID_t v43; // 0:rsi.8,8:rdx.8

  ID.m_id = soidCacheID.m_id;
  msgType = soidCacheID.m_type;
  CUtlBuffer::CUtlBuffer(&diskFile, 0, 0, 0);
  if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
         &g_pFullFileSystem->IBaseFileSystem,
         pszFilename,
         0,
         &diskFile,
         0,
         0,
         0) == 0 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  CMsgSerializedSOCache::CMsgSerializedSOCache(&ID.m_type);
  if ( google::protobuf::MessageLite::ParseFromArray(&ID.m_type, diskFile.m_Memory.m_pMemory, diskFile.m_Put) != 0
    && v37 == 4 )
  {
    v6 = v36;
    if ( v36 <= 0 )
    {
LABEL_16:
      v10 = v38;
      if ( v38 == 0 )
        v10 = 1;
      strObja = v10;
      if ( v6 > 0 )
      {
        v11 = 0;
        v12 = 0;
        owner = msgType;
        v24 = (this + 24);
        while ( 1 )
        {
          v25 = *(v35 + v11);
          if ( *(v25 + 80) == msgType && *(v25 + 24) == ID.m_id )
          {
            *&v41.m_type = msgType;
            v41.m_id = ID.m_id;
            if ( GCSDK::CGCClient::FindSOCache(v24, v41) == 0 )
            {
              *&v42.m_type = msgType;
              v42.m_id = ID.m_id;
              v13 = GCSDK::CGCClient::FindOrAddSOCache(v24, v42);
              v4 = v13;
              if ( v13 != 0 )
                break;
            }
          }
          ++v12;
          v11 += 8;
          if ( v12 >= v36 )
            goto LABEL_4;
        }
        v13->m_bInitialized = 1;
        v14 = 0;
        for ( i = 0; i < *(v25 + 40); v14 += 8 )
        {
          GCSDK::CGCClient::SetSOCacheVersion(
            v24,
            v4,
            *(*(*(v25 + 32) + v14) + 32LL),
            *(*(*(v25 + 32) + v14) + 24LL),
            strObja);
          ++i;
        }
        v21 = 0;
        if ( *(v25 + 64) > 0 )
        {
          do
          {
            v16 = *(*(v25 + 56) + 8 * v21);
            v17 = v16;
            msgTypea = v16;
            nCurrCachea = *(v16 + 48);
            TypeCache = GCSDK::CGCClientSharedObjectCache::CreateTypeCache(v4, nCurrCachea, *(v16 + 52));
            if ( *(v17 + 32) > 0 )
            {
              v18 = 0;
              do
              {
                strObjb = *(*(msgTypea + 3) + 8 * v18);
                v19 = GCSDK::CSharedObject::Create(nCurrCachea);
                if ( v19 != 0 )
                {
                  CUtlBuffer::CUtlBuffer(&buf, 0, 0, 0);
                  CUtlBuffer::SetExternalBuffer(
                    &buf,
                    strObjb->_M_dataplus._M_p,
                    *(strObjb->_M_dataplus._M_p - 3),
                    *(strObjb->_M_dataplus._M_p - 3),
                    0);
                  (*(v19->_vptr_CSharedObject + 3))(v19, &buf);
                  (*(TypeCache->_vptr_CSharedObjectTypeCache + 3))(TypeCache, v19);
                  *&v43.m_type = owner;
                  v43.m_id = ID.m_id;
                  GCSDK::CGCClient::DispatchSOCreated(v24, v43, v19, GCSDK::ESOCacheEvent::eSOCacheEvent_Subscribed);
                  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
                }
                ++v18;
              }
              while ( *(msgTypea + 8) > v18 );
            }
            v20 = v21++;
          }
          while ( *(v25 + 64) > v20 + 1 );
        }
        goto LABEL_5;
      }
    }
    else
    {
      strObj = 0;
      nCurrCache = 0;
      while ( 1 )
      {
        v7 = 0;
        v8 = 0;
        v9 = *(&strObj->_M_dataplus._M_p + v35);
        if ( *(v9 + 64) > 0 )
          break;
LABEL_15:
        ++nCurrCache;
        ++strObj;
        if ( nCurrCache >= v6 )
          goto LABEL_16;
      }
      while ( GCSDK::CSharedObject::FindSharedObjectInfo(*(*(*(v9 + 56) + v7) + 48LL)) != 0 )
      {
        ++v8;
        v7 += 8;
        if ( v8 >= *(v9 + 64) )
        {
          v6 = v36;
          goto LABEL_15;
        }
      }
    }
  }
LABEL_4:
  v4 = 0;
LABEL_5:
  CMsgSerializedSOCache::~CMsgSerializedSOCache(&ID.m_type);
LABEL_6:
  CUtlMemory<unsigned char,int>::Purge(&diskFile.m_Memory);
  return v4;
}


