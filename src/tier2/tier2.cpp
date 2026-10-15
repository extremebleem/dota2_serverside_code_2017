// Reconstructed from DWARF by pahole; not original source.

// src/tier2/tier2.cpp:82
class CSchemaInstallCallback : public CPostConnectCallback {
public:

	CSchemaInstallCallback(CSchemaInstallCallback &);
	CSchemaInstallCallback(const CSchemaInstallCallback &);
	CSchemaInstallCallback();
	virtual PostConnectCallbackRetVal_t OnConnect();

	// vtable[0] OnConnect
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_tier2.cpp  (line 0, @0x0000000001a6abb0, libserver.so)  // inlines: CSchemaInstallCallback, Color, SetColor, __static_initialization_and_destruction_0
// calls: LoggingSystem_RegisterLoggingChannel, CPostConnectCallback::CPostConnectCallback
// strings: "VScript", "VScriptDbg"
// globals: UNSPECIFIED_LOGGING_COLOR, LOG_VSCRIPT, s_SchemaInstallCallback, LOG_VSCRIPT_DBG
void __cdecl GLOBAL__sub_I_tier2_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  LOG_VSCRIPT = LoggingSystem_RegisterLoggingChannel("VScript", 0, 0, 2, 4293832693LL);
  LOG_VSCRIPT_DBG = LoggingSystem_RegisterLoggingChannel("VScriptDbg", 0, 0, 2, 4290803182LL);
  CPostConnectCallback::CPostConnectCallback(&s_SchemaInstallCallback, 0x7FFFFFFF);
  s_SchemaInstallCallback._vptr_CPostConnectCallback = &off_47C4FE0;
}


// RegisterTier2Manifests  (line 49, @0x000000000312d690, libserver.so)
// calls: CManifestRegistrar::RegisterAll
// callers: ConnectTier2Libraries
// globals: s_bResourceFCRegistered, s_nResourceFCRegisteredCount, g_nResourceFrameCount
void __cdecl RegisterTier2Manifests()
{
  if ( g_pResourceManifestRegistry != 0 )
  {
    if ( !s_bResourceFCRegistered )
    {
      (**g_pResourceManifestRegistry)(g_pResourceManifestRegistry, &g_nResourceFrameCount);
      s_bResourceFCRegistered = 1;
    }
    CManifestRegistrar::RegisterAll();
    ++s_nResourceFCRegisteredCount;
  }
  else
  {
    ++s_nResourceFCRegisteredCount;
  }
}


// AppIsDedicatedServer  (line 75, @0x000000000312d6f0, libserver.so)  // inlines: IsDedicatedServer
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: SendToConsole, Script_GetListenServerHost, CLoopModeGame::SetWorldSession, CEntFireAutoCompletionFunctor::CommandCallback, Host_Say, CSource2Server::Connect, UTIL_IsDedicatedServer, UTIL_GetListenServerHost, UTIL_IsCommandIssuedByServerAdmin, CDOTAGamerules::State_Enter_DISCONNECT, CDOTAGamerules::ClientMsg_FreeInventory, dota_state_disconnect (26 total)
// globals: `guard variable for'AppIsDedicatedServer(void)::s_bIsDedicatedServer, AppIsDedicatedServer(void)::s_bIsDedicatedServer
bool __cdecl AppIsDedicatedServer()
{
  bool v1; // al

  if ( `guard variable for'AppIsDedicatedServer(void)::s_bIsDedicatedServer != 0 )
    return AppIsDedicatedServer(void)::s_bIsDedicatedServer;
  if ( __cxa_guard_acquire(&`guard variable for'AppIsDedicatedServer(void)::s_bIsDedicatedServer) != 0 )
  {
    v1 = g_pApplication != 0 && (*(g_pApplication->_vptr_IAppSystem + 33))(g_pApplication) == 2;
    AppIsDedicatedServer(void)::s_bIsDedicatedServer = v1;
    __cxa_guard_release(&`guard variable for'AppIsDedicatedServer(void)::s_bIsDedicatedServer);
  }
  return AppIsDedicatedServer(void)::s_bIsDedicatedServer;
}


// CSchemaInstallCallback::OnConnect  (line 88, @0x000000000312d800, libserver.so)
// calls: InstallModuleSchemaBindings_SuppressVerification
PostConnectCallbackRetVal_t __fastcall CSchemaInstallCallback::OnConnect(CSchemaInstallCallback *const this)
{
  if ( g_pSchemaSystem == 0 )
    return PostConnectCallbackRetVal_t::POST_CONNECT_CALLBACK_CALL_ON_RECONNECT;
  if ( (*(*g_pSchemaSystem + 168LL))(g_pSchemaSystem) == 0 )
    return PostConnectCallbackRetVal_t::POST_CONNECT_CALLBACK_CALL_ON_RECONNECT;
  InstallModuleSchemaBindings_SuppressVerification();
  return PostConnectCallbackRetVal_t::POST_CONNECT_CALLBACK_DONE;
}


// ConnectTier2Libraries  (line 104, @0x000000000312d780, libserver.so)
// calls: RegisterTier2Manifests
// callers: CTier2AppSystem<IGameConfiguration, 0>::Connect, CTier2AppSystem<IGameConfiguration, 0>::Reconnect, CTier2AppSystem<ISource2ServerSerializers, 0>::Connect, CTier2AppSystem<ISource2ServerSerializers, 0>::Reconnect, CGameAppSystem<ISource2ServerSerializers, 0>::Reconnect, CGameAppSystem<ISource2ServerSerializers, 0>::Connect, CSource2ServerSerializers::Connect, CTier2AppSystem<ISource2Server, 0>::Connect, CTier2AppSystem<ISource2GameEntities, 0>::Connect, CTier2AppSystem<ISource2GameClients, 0>::Connect, CTier2AppSystem<ISource2GameEntities, 0>::Reconnect, CTier2AppSystem<ISource2Server, 0>::Reconnect (23 total)
void __fastcall ConnectTier2Libraries(CreateInterfaceFn *pFactoryList, int nFactoryCount)
{
  RegisterTier2Manifests();
}


// DisconnectTier2Libraries  (line 109, @0x000000000312d790, libserver.so)
// calls: CManifestRegistrar::UnregisterAll
// callers: CTier2AppSystem<IGameConfiguration, 0>::Disconnect, CTier2AppSystem<ISource2ServerSerializers, 0>::Disconnect, CGameAppSystem<ISource2ServerSerializers, 0>::Disconnect, CTier2AppSystem<ISource2Server, 0>::Disconnect, CTier2AppSystem<ISource2GameEntities, 0>::Disconnect, CTier2AppSystem<ISource2GameClients, 0>::Disconnect, CGameAppSystem<ISource2GameClients, 0>::Disconnect, CGameAppSystem<ISource2GameEntities, 0>::Disconnect, CGameAppSystem<ISource2Server, 0>::Disconnect, CSource2Server::Disconnect, CTier2Application::Disconnect, CTier2AppSystemDict::~CTier2AppSystemDict
// globals: s_nResourceFCRegisteredCount, s_bResourceFCRegistered, g_nResourceFrameCount
void __cdecl DisconnectTier2Libraries()
{
  if ( --s_nResourceFCRegisteredCount == 0 && g_pResourceManifestRegistry != 0 )
  {
    CManifestRegistrar::UnregisterAll();
    if ( s_bResourceFCRegistered )
    {
      (*(*g_pResourceManifestRegistry + 8LL))(g_pResourceManifestRegistry, &g_nResourceFrameCount);
      s_bResourceFCRegistered = 0;
    }
  }
}


// DisconnectTier2ManualManifests  (line 132, @0x000000000312d7f0, libserver.so)
// calls: CManifestRegistrar::UnregisterManifests
// callers: CTier2AppSystem<IGameConfiguration, 0>::Disconnect, CTier2AppSystem<ISource2ServerSerializers, 0>::Disconnect, CGameAppSystem<ISource2ServerSerializers, 0>::Disconnect, CTier2AppSystem<ISource2Server, 0>::Disconnect, CTier2AppSystem<ISource2GameEntities, 0>::Disconnect, CTier2AppSystem<ISource2GameClients, 0>::Disconnect, CGameAppSystem<ISource2GameClients, 0>::Disconnect, CGameAppSystem<ISource2GameEntities, 0>::Disconnect, CGameAppSystem<ISource2Server, 0>::Disconnect, CSource2Server::Disconnect
void __fastcall DisconnectTier2ManualManifests(ResourceManifestDesc_t **pManifests, int nManifests)
{
  CManifestRegistrar::UnregisterManifests(pManifests, nManifests);
}


