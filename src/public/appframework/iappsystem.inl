
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseAppSystem<ISource2GameEntities>::~CBaseAppSystem  (line 118, @0x0000000002245ce0, libserver.so)  // inlines: ~ISource2GameEntities
void __fastcall CBaseAppSystem<ISource2GameEntities>::~CBaseAppSystem(CBaseAppSystem<ISource2GameEntities> *const this)
{
  this->_vptr_IAppSystem = &off_403F870;
}


// CBaseAppSystem<ISource2GameEntities>::~CBaseAppSystem  (line 118, @0x00000000022466b0, libserver.so)  // inlines: ~CBaseAppSystem, ~ISource2GameEntities
// calls: operator delete
void __fastcall CBaseAppSystem<ISource2GameEntities>::~CBaseAppSystem(CBaseAppSystem<ISource2GameEntities> *const this)
{
  this->_vptr_IAppSystem = &off_403F870;
  operator delete(this);
}


// CBaseAppSystem<IApplication>::~CBaseAppSystem  (line 118, @0x0000000002339920, libserver.so)  // inlines: ~IApplication
void __fastcall CBaseAppSystem<IApplication>::~CBaseAppSystem(CBaseAppSystem<IApplication> *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
}


// CBaseAppSystem<IApplication>::~CBaseAppSystem  (line 118, @0x000000000233ac00, libserver.so)  // inlines: ~CBaseAppSystem, ~IApplication
// calls: operator delete
void __fastcall CBaseAppSystem<IApplication>::~CBaseAppSystem(CBaseAppSystem<IApplication> *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
  operator delete(this);
}


// CBaseAppSystem<IGameConfiguration>::Connect  (line 122, @0x0000000001f03e30, libserver.so)
bool __fastcall CBaseAppSystem<IGameConfiguration>::Connect(
        CBaseAppSystem<IGameConfiguration> *const this,
        CreateInterfaceFn factory)
{
  return 1;
}


// CBaseAppSystem<ISource2ServerSerializers>::Connect  (line 122, @0x00000000020f2160, libserver.so)
bool __fastcall CBaseAppSystem<ISource2ServerSerializers>::Connect(
        CBaseAppSystem<ISource2ServerSerializers> *const this,
        CreateInterfaceFn factory)
{
  return 1;
}


// CBaseAppSystem<ISource2Server>::Connect  (line 122, @0x0000000002245d50, libserver.so)
bool __fastcall CBaseAppSystem<ISource2Server>::Connect(
        CBaseAppSystem<ISource2Server> *const this,
        CreateInterfaceFn factory)
{
  return 1;
}


// CBaseAppSystem<ISource2GameEntities>::Connect  (line 122, @0x0000000002245e60, libserver.so)
bool __fastcall CBaseAppSystem<ISource2GameEntities>::Connect(
        CBaseAppSystem<ISource2GameEntities> *const this,
        CreateInterfaceFn factory)
{
  return 1;
}


// CBaseAppSystem<ISource2GameClients>::Connect  (line 122, @0x0000000002245f90, libserver.so)
bool __fastcall CBaseAppSystem<ISource2GameClients>::Connect(
        CBaseAppSystem<ISource2GameClients> *const this,
        CreateInterfaceFn factory)
{
  return 1;
}


// CBaseAppSystem<IApplication>::Connect  (line 122, @0x000000000233a270, libserver.so)
bool __fastcall CBaseAppSystem<IApplication>::Connect(
        CBaseAppSystem<IApplication> *const this,
        CreateInterfaceFn factory)
{
  return 1;
}


// CBaseAppSystem<IAppSystem>::Connect  (line 122, @0x00000000032174b0, libserver.so)
bool __fastcall CBaseAppSystem<IAppSystem>::Connect(CBaseAppSystem<IAppSystem> *const this, CreateInterfaceFn factory)
{
  return 1;
}


// CBaseAppSystem<IGameConfiguration>::Disconnect  (line 123, @0x0000000001f03e50, libserver.so)
void __fastcall CBaseAppSystem<IGameConfiguration>::Disconnect(CBaseAppSystem<IGameConfiguration> *const this)
{
  ;
}


// CBaseAppSystem<ISource2ServerSerializers>::Disconnect  (line 123, @0x00000000020f3760, libserver.so)
void __fastcall CBaseAppSystem<ISource2ServerSerializers>::Disconnect(
        CBaseAppSystem<ISource2ServerSerializers> *const this)
{
  ;
}


// CBaseAppSystem<ISource2Server>::Disconnect  (line 123, @0x0000000002245d40, libserver.so)
void __fastcall CBaseAppSystem<ISource2Server>::Disconnect(CBaseAppSystem<ISource2Server> *const this)
{
  ;
}


// CBaseAppSystem<ISource2GameEntities>::Disconnect  (line 123, @0x0000000002245e70, libserver.so)
void __fastcall CBaseAppSystem<ISource2GameEntities>::Disconnect(CBaseAppSystem<ISource2GameEntities> *const this)
{
  ;
}


// CBaseAppSystem<ISource2GameClients>::Disconnect  (line 123, @0x0000000002245fa0, libserver.so)
void __fastcall CBaseAppSystem<ISource2GameClients>::Disconnect(CBaseAppSystem<ISource2GameClients> *const this)
{
  ;
}


// CBaseAppSystem<IApplication>::Disconnect  (line 123, @0x000000000233a280, libserver.so)
void __fastcall CBaseAppSystem<IApplication>::Disconnect(CBaseAppSystem<IApplication> *const this)
{
  ;
}


// CBaseAppSystem<IAppSystem>::Disconnect  (line 123, @0x00000000032174c0, libserver.so)
void __fastcall CBaseAppSystem<IAppSystem>::Disconnect(CBaseAppSystem<IAppSystem> *const this)
{
  ;
}


// CBaseAppSystem<IGameConfiguration>::QueryInterface  (line 127, @0x0000000001f03db0, libserver.so)
void *__fastcall CBaseAppSystem<IGameConfiguration>::QueryInterface(
        CBaseAppSystem<IGameConfiguration> *const this,
        const char *pInterfaceName)
{
  return 0;
}


// CBaseAppSystem<ISource2ServerSerializers>::QueryInterface  (line 127, @0x00000000020f36d0, libserver.so)
void *__fastcall CBaseAppSystem<ISource2ServerSerializers>::QueryInterface(
        CBaseAppSystem<ISource2ServerSerializers> *const this,
        const char *pInterfaceName)
{
  return 0;
}


// CBaseAppSystem<ISource2GameClients>::QueryInterface  (line 127, @0x0000000002245d70, libserver.so)
void *__fastcall CBaseAppSystem<ISource2GameClients>::QueryInterface(
        CBaseAppSystem<ISource2GameClients> *const this,
        const char *pInterfaceName)
{
  return 0;
}


// CBaseAppSystem<ISource2GameEntities>::QueryInterface  (line 127, @0x0000000002245dd0, libserver.so)
void *__fastcall CBaseAppSystem<ISource2GameEntities>::QueryInterface(
        CBaseAppSystem<ISource2GameEntities> *const this,
        const char *pInterfaceName)
{
  return 0;
}


// CBaseAppSystem<ISource2Server>::QueryInterface  (line 127, @0x0000000002245ef0, libserver.so)
void *__fastcall CBaseAppSystem<ISource2Server>::QueryInterface(
        CBaseAppSystem<ISource2Server> *const this,
        const char *pInterfaceName)
{
  return 0;
}


// CBaseAppSystem<IApplication>::QueryInterface  (line 127, @0x000000000233a8d0, libserver.so)
void *__fastcall CBaseAppSystem<IApplication>::QueryInterface(
        CBaseAppSystem<IApplication> *const this,
        const char *pInterfaceName)
{
  return 0;
}


// CBaseAppSystem<IAppSystem>::QueryInterface  (line 127, @0x00000000032174d0, libserver.so)
void *__fastcall CBaseAppSystem<IAppSystem>::QueryInterface(
        CBaseAppSystem<IAppSystem> *const this,
        const char *pInterfaceName)
{
  return 0;
}


// CBaseAppSystem<IGameConfiguration>::Init  (line 130, @0x0000000001f03ce0, libserver.so)
InitReturnVal_t __fastcall CBaseAppSystem<IGameConfiguration>::Init(CBaseAppSystem<IGameConfiguration> *const this)
{
  return InitReturnVal_t::INIT_OK;
}


// CBaseAppSystem<ISource2ServerSerializers>::Init  (line 130, @0x00000000020f2150, libserver.so)
InitReturnVal_t __fastcall CBaseAppSystem<ISource2ServerSerializers>::Init(
        CBaseAppSystem<ISource2ServerSerializers> *const this)
{
  return InitReturnVal_t::INIT_OK;
}


// CBaseAppSystem<ISource2Server>::Init  (line 130, @0x0000000002245d30, libserver.so)
InitReturnVal_t __fastcall CBaseAppSystem<ISource2Server>::Init(CBaseAppSystem<ISource2Server> *const this)
{
  return InitReturnVal_t::INIT_OK;
}


// CBaseAppSystem<ISource2GameEntities>::Init  (line 130, @0x0000000002245e80, libserver.so)
InitReturnVal_t __fastcall CBaseAppSystem<ISource2GameEntities>::Init(CBaseAppSystem<ISource2GameEntities> *const this)
{
  return InitReturnVal_t::INIT_OK;
}


// CBaseAppSystem<ISource2GameClients>::Init  (line 130, @0x0000000002245fb0, libserver.so)
InitReturnVal_t __fastcall CBaseAppSystem<ISource2GameClients>::Init(CBaseAppSystem<ISource2GameClients> *const this)
{
  return InitReturnVal_t::INIT_OK;
}


// CBaseAppSystem<IApplication>::Init  (line 130, @0x000000000233a930, libserver.so)
InitReturnVal_t __fastcall CBaseAppSystem<IApplication>::Init(CBaseAppSystem<IApplication> *const this)
{
  return InitReturnVal_t::INIT_OK;
}


// CBaseAppSystem<IAppSystem>::Init  (line 130, @0x00000000032174e0, libserver.so)
InitReturnVal_t __fastcall CBaseAppSystem<IAppSystem>::Init(CBaseAppSystem<IAppSystem> *const this)
{
  return InitReturnVal_t::INIT_OK;
}


// CBaseAppSystem<IGameConfiguration>::Shutdown  (line 131, @0x0000000001f03e70, libserver.so)
void __fastcall CBaseAppSystem<IGameConfiguration>::Shutdown(CBaseAppSystem<IGameConfiguration> *const this)
{
  ;
}


// CBaseAppSystem<ISource2ServerSerializers>::Shutdown  (line 131, @0x00000000020f3770, libserver.so)
void __fastcall CBaseAppSystem<ISource2ServerSerializers>::Shutdown(
        CBaseAppSystem<ISource2ServerSerializers> *const this)
{
  ;
}


// CBaseAppSystem<ISource2GameEntities>::Shutdown  (line 131, @0x0000000002245e90, libserver.so)
void __fastcall CBaseAppSystem<ISource2GameEntities>::Shutdown(CBaseAppSystem<ISource2GameEntities> *const this)
{
  ;
}


// CBaseAppSystem<ISource2Server>::Shutdown  (line 131, @0x0000000002245f40, libserver.so)
void __fastcall CBaseAppSystem<ISource2Server>::Shutdown(CBaseAppSystem<ISource2Server> *const this)
{
  ;
}


// CBaseAppSystem<ISource2GameClients>::Shutdown  (line 131, @0x0000000002245fc0, libserver.so)
void __fastcall CBaseAppSystem<ISource2GameClients>::Shutdown(CBaseAppSystem<ISource2GameClients> *const this)
{
  ;
}


// CBaseAppSystem<IApplication>::Shutdown  (line 131, @0x000000000233a940, libserver.so)
void __fastcall CBaseAppSystem<IApplication>::Shutdown(CBaseAppSystem<IApplication> *const this)
{
  ;
}


// CBaseAppSystem<IAppSystem>::Shutdown  (line 131, @0x00000000032174f0, libserver.so)
void __fastcall CBaseAppSystem<IAppSystem>::Shutdown(CBaseAppSystem<IAppSystem> *const this)
{
  ;
}


// CBaseAppSystem<IGameConfiguration>::PreShutdown  (line 134, @0x0000000001f03d10, libserver.so)
void __fastcall CBaseAppSystem<IGameConfiguration>::PreShutdown(CBaseAppSystem<IGameConfiguration> *const this)
{
  ;
}


// CBaseAppSystem<ISource2ServerSerializers>::PreShutdown  (line 134, @0x00000000020f36e0, libserver.so)
void __fastcall CBaseAppSystem<ISource2ServerSerializers>::PreShutdown(
        CBaseAppSystem<ISource2ServerSerializers> *const this)
{
  ;
}


// CBaseAppSystem<ISource2GameClients>::PreShutdown  (line 134, @0x0000000002245d80, libserver.so)
void __fastcall CBaseAppSystem<ISource2GameClients>::PreShutdown(CBaseAppSystem<ISource2GameClients> *const this)
{
  ;
}


// CBaseAppSystem<ISource2GameEntities>::PreShutdown  (line 134, @0x0000000002245de0, libserver.so)
void __fastcall CBaseAppSystem<ISource2GameEntities>::PreShutdown(CBaseAppSystem<ISource2GameEntities> *const this)
{
  ;
}


// CBaseAppSystem<ISource2Server>::PreShutdown  (line 134, @0x0000000002245eb0, libserver.so)
void __fastcall CBaseAppSystem<ISource2Server>::PreShutdown(CBaseAppSystem<ISource2Server> *const this)
{
  ;
}


// CBaseAppSystem<IApplication>::PreShutdown  (line 134, @0x000000000233a8e0, libserver.so)
void __fastcall CBaseAppSystem<IApplication>::PreShutdown(CBaseAppSystem<IApplication> *const this)
{
  ;
}


// CBaseAppSystem<IAppSystem>::PreShutdown  (line 134, @0x0000000003217500, libserver.so)
void __fastcall CBaseAppSystem<IAppSystem>::PreShutdown(CBaseAppSystem<IAppSystem> *const this)
{
  ;
}


// CBaseAppSystem<IGameConfiguration>::GetDependencies  (line 136, @0x0000000001f03d30, libserver.so)
const AppSystemInfo_t *__fastcall CBaseAppSystem<IGameConfiguration>::GetDependencies(
        CBaseAppSystem<IGameConfiguration> *const this)
{
  return 0;
}


// CBaseAppSystem<ISource2ServerSerializers>::GetDependencies  (line 136, @0x00000000020f3720, libserver.so)
const AppSystemInfo_t *__fastcall CBaseAppSystem<ISource2ServerSerializers>::GetDependencies(
        CBaseAppSystem<ISource2ServerSerializers> *const this)
{
  return 0;
}


// CBaseAppSystem<ISource2GameClients>::GetDependencies  (line 136, @0x0000000002245d90, libserver.so)
const AppSystemInfo_t *__fastcall CBaseAppSystem<ISource2GameClients>::GetDependencies(
        CBaseAppSystem<ISource2GameClients> *const this)
{
  return 0;
}


// CBaseAppSystem<ISource2GameEntities>::GetDependencies  (line 136, @0x0000000002245df0, libserver.so)
const AppSystemInfo_t *__fastcall CBaseAppSystem<ISource2GameEntities>::GetDependencies(
        CBaseAppSystem<ISource2GameEntities> *const this)
{
  return 0;
}


// CBaseAppSystem<ISource2Server>::GetDependencies  (line 136, @0x0000000002245f00, libserver.so)
const AppSystemInfo_t *__fastcall CBaseAppSystem<ISource2Server>::GetDependencies(
        CBaseAppSystem<ISource2Server> *const this)
{
  return 0;
}


// CBaseAppSystem<IApplication>::GetDependencies  (line 136, @0x000000000233a920, libserver.so)
const AppSystemInfo_t *__fastcall CBaseAppSystem<IApplication>::GetDependencies(
        CBaseAppSystem<IApplication> *const this)
{
  return 0;
}


// CBaseAppSystem<IAppSystem>::GetDependencies  (line 136, @0x0000000003217510, libserver.so)
const AppSystemInfo_t *__fastcall CBaseAppSystem<IAppSystem>::GetDependencies(CBaseAppSystem<IAppSystem> *const this)
{
  return 0;
}


// CBaseAppSystem<IGameConfiguration>::GetTier  (line 137, @0x0000000001f03e90, libserver.so)
AppSystemTier_t __fastcall CBaseAppSystem<IGameConfiguration>::GetTier(CBaseAppSystem<IGameConfiguration> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER_OTHER;
}


// CBaseAppSystem<ISource2ServerSerializers>::GetTier  (line 137, @0x00000000020f3780, libserver.so)
AppSystemTier_t __fastcall CBaseAppSystem<ISource2ServerSerializers>::GetTier(
        CBaseAppSystem<ISource2ServerSerializers> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER_OTHER;
}


// CBaseAppSystem<ISource2GameEntities>::GetTier  (line 137, @0x0000000002245ea0, libserver.so)
AppSystemTier_t __fastcall CBaseAppSystem<ISource2GameEntities>::GetTier(
        CBaseAppSystem<ISource2GameEntities> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER_OTHER;
}


// CBaseAppSystem<ISource2Server>::GetTier  (line 137, @0x0000000002245f50, libserver.so)
AppSystemTier_t __fastcall CBaseAppSystem<ISource2Server>::GetTier(CBaseAppSystem<ISource2Server> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER_OTHER;
}


// CBaseAppSystem<ISource2GameClients>::GetTier  (line 137, @0x0000000002245fd0, libserver.so)
AppSystemTier_t __fastcall CBaseAppSystem<ISource2GameClients>::GetTier(
        CBaseAppSystem<ISource2GameClients> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER_OTHER;
}


// CBaseAppSystem<IApplication>::GetTier  (line 137, @0x000000000233a950, libserver.so)
AppSystemTier_t __fastcall CBaseAppSystem<IApplication>::GetTier(CBaseAppSystem<IApplication> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER_OTHER;
}


// CBaseAppSystem<IAppSystem>::GetTier  (line 137, @0x0000000003217620, libserver.so)
AppSystemTier_t __fastcall CBaseAppSystem<IAppSystem>::GetTier(CBaseAppSystem<IAppSystem> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER_OTHER;
}


// CBaseAppSystem<IGameConfiguration>::Reconnect  (line 139, @0x0000000001f04110, libserver.so)
// calls: ReconnectInterface
void __fastcall CBaseAppSystem<IGameConfiguration>::Reconnect(
        CBaseAppSystem<IGameConfiguration> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  ReconnectInterface(factory, pInterfaceName);
}


// CBaseAppSystem<ISource2ServerSerializers>::Reconnect  (line 139, @0x00000000020f7000, libserver.so)
// calls: ReconnectInterface
void __fastcall CBaseAppSystem<ISource2ServerSerializers>::Reconnect(
        CBaseAppSystem<ISource2ServerSerializers> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  ReconnectInterface(factory, pInterfaceName);
}


// CBaseAppSystem<ISource2GameEntities>::Reconnect  (line 139, @0x0000000002247ee0, libserver.so)
// calls: ReconnectInterface
void __fastcall CBaseAppSystem<ISource2GameEntities>::Reconnect(
        CBaseAppSystem<ISource2GameEntities> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  ReconnectInterface(factory, pInterfaceName);
}


// CBaseAppSystem<ISource2Server>::Reconnect  (line 139, @0x0000000002247f30, libserver.so)
// calls: ReconnectInterface
void __fastcall CBaseAppSystem<ISource2Server>::Reconnect(
        CBaseAppSystem<ISource2Server> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  ReconnectInterface(factory, pInterfaceName);
}


// CBaseAppSystem<ISource2GameClients>::Reconnect  (line 139, @0x0000000002247f80, libserver.so)
// calls: ReconnectInterface
void __fastcall CBaseAppSystem<ISource2GameClients>::Reconnect(
        CBaseAppSystem<ISource2GameClients> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  ReconnectInterface(factory, pInterfaceName);
}


// CBaseAppSystem<IApplication>::Reconnect  (line 139, @0x000000000233bb50, libserver.so)
// calls: ReconnectInterface
void __fastcall CBaseAppSystem<IApplication>::Reconnect(
        CBaseAppSystem<IApplication> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  ReconnectInterface(factory, pInterfaceName);
}


// CBaseAppSystem<IAppSystem>::Reconnect  (line 139, @0x0000000003218180, libserver.so)
// calls: ReconnectInterface
void __fastcall CBaseAppSystem<IAppSystem>::Reconnect(
        CBaseAppSystem<IAppSystem> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  ReconnectInterface(factory, pInterfaceName);
}


// CBaseAppSystem<IGameConfiguration>::IsSingleton  (line 145, @0x0000000001f03d70, libserver.so)
bool __fastcall CBaseAppSystem<IGameConfiguration>::IsSingleton(CBaseAppSystem<IGameConfiguration> *const this)
{
  return 1;
}


// CBaseAppSystem<ISource2ServerSerializers>::IsSingleton  (line 145, @0x00000000020f3700, libserver.so)
bool __fastcall CBaseAppSystem<ISource2ServerSerializers>::IsSingleton(
        CBaseAppSystem<ISource2ServerSerializers> *const this)
{
  return 1;
}


// CBaseAppSystem<ISource2GameClients>::IsSingleton  (line 145, @0x0000000002245db0, libserver.so)
bool __fastcall CBaseAppSystem<ISource2GameClients>::IsSingleton(CBaseAppSystem<ISource2GameClients> *const this)
{
  return 1;
}


// CBaseAppSystem<ISource2GameEntities>::IsSingleton  (line 145, @0x0000000002245e10, libserver.so)
bool __fastcall CBaseAppSystem<ISource2GameEntities>::IsSingleton(CBaseAppSystem<ISource2GameEntities> *const this)
{
  return 1;
}


// CBaseAppSystem<ISource2Server>::IsSingleton  (line 145, @0x0000000002245ed0, libserver.so)
bool __fastcall CBaseAppSystem<ISource2Server>::IsSingleton(CBaseAppSystem<ISource2Server> *const this)
{
  return 1;
}


// CBaseAppSystem<IApplication>::IsSingleton  (line 145, @0x000000000233a900, libserver.so)
bool __fastcall CBaseAppSystem<IApplication>::IsSingleton(CBaseAppSystem<IApplication> *const this)
{
  return 1;
}


// CBaseAppSystem<IAppSystem>::IsSingleton  (line 145, @0x0000000003217520, libserver.so)
bool __fastcall CBaseAppSystem<IAppSystem>::IsSingleton(CBaseAppSystem<IAppSystem> *const this)
{
  return 1;
}


// CBaseAppSystem<IGameConfiguration>::GetBuildType  (line 147, @0x0000000001f03d90, libserver.so)
AppSystemBuildType_t __fastcall CBaseAppSystem<IGameConfiguration>::GetBuildType(
        CBaseAppSystem<IGameConfiguration> *const this)
{
  return AppSystemBuildType_t::APP_SYSTEM_BUILD_RETAIL;
}


// CBaseAppSystem<ISource2ServerSerializers>::GetBuildType  (line 147, @0x00000000020f3710, libserver.so)
AppSystemBuildType_t __fastcall CBaseAppSystem<ISource2ServerSerializers>::GetBuildType(
        CBaseAppSystem<ISource2ServerSerializers> *const this)
{
  return AppSystemBuildType_t::APP_SYSTEM_BUILD_RETAIL;
}


// CBaseAppSystem<ISource2GameClients>::GetBuildType  (line 147, @0x0000000002245dc0, libserver.so)
AppSystemBuildType_t __fastcall CBaseAppSystem<ISource2GameClients>::GetBuildType(
        CBaseAppSystem<ISource2GameClients> *const this)
{
  return AppSystemBuildType_t::APP_SYSTEM_BUILD_RETAIL;
}


// CBaseAppSystem<ISource2GameEntities>::GetBuildType  (line 147, @0x0000000002245e20, libserver.so)
AppSystemBuildType_t __fastcall CBaseAppSystem<ISource2GameEntities>::GetBuildType(
        CBaseAppSystem<ISource2GameEntities> *const this)
{
  return AppSystemBuildType_t::APP_SYSTEM_BUILD_RETAIL;
}


// CBaseAppSystem<ISource2Server>::GetBuildType  (line 147, @0x0000000002245ee0, libserver.so)
AppSystemBuildType_t __fastcall CBaseAppSystem<ISource2Server>::GetBuildType(
        CBaseAppSystem<ISource2Server> *const this)
{
  return AppSystemBuildType_t::APP_SYSTEM_BUILD_RETAIL;
}


// CBaseAppSystem<IApplication>::GetBuildType  (line 147, @0x000000000233a910, libserver.so)
AppSystemBuildType_t __fastcall CBaseAppSystem<IApplication>::GetBuildType(CBaseAppSystem<IApplication> *const this)
{
  return AppSystemBuildType_t::APP_SYSTEM_BUILD_RETAIL;
}


// CBaseAppSystem<IAppSystem>::GetBuildType  (line 147, @0x0000000003217530, libserver.so)
AppSystemBuildType_t __fastcall CBaseAppSystem<IAppSystem>::GetBuildType(CBaseAppSystem<IAppSystem> *const this)
{
  return AppSystemBuildType_t::APP_SYSTEM_BUILD_RETAIL;
}


// CTier0AppSystem<ISource2GameEntities>::~CTier0AppSystem  (line 164, @0x0000000002245cf0, libserver.so)  // inlines: ~CBaseAppSystem, ~ISource2GameEntities
void __fastcall CTier0AppSystem<ISource2GameEntities>::~CTier0AppSystem(
        CTier0AppSystem<ISource2GameEntities> *const this)
{
  this->_vptr_IAppSystem = &off_403F870;
}


// CTier0AppSystem<ISource2GameEntities>::~CTier0AppSystem  (line 164, @0x00000000022466d0, libserver.so)  // inlines: ~CBaseAppSystem, ~CTier0AppSystem, ~ISource2GameEntities
// calls: operator delete
void __fastcall CTier0AppSystem<ISource2GameEntities>::~CTier0AppSystem(
        CTier0AppSystem<ISource2GameEntities> *const this)
{
  this->_vptr_IAppSystem = &off_403F870;
  operator delete(this);
}


// CTier0AppSystem<IApplication>::~CTier0AppSystem  (line 164, @0x0000000002339930, libserver.so)  // inlines: ~CBaseAppSystem, ~IApplication
void __fastcall CTier0AppSystem<IApplication>::~CTier0AppSystem(CTier0AppSystem<IApplication> *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
}


// CTier0AppSystem<IApplication>::~CTier0AppSystem  (line 164, @0x000000000233ac20, libserver.so)  // inlines: ~CBaseAppSystem, ~CTier0AppSystem, ~IApplication
// calls: operator delete
void __fastcall CTier0AppSystem<IApplication>::~CTier0AppSystem(CTier0AppSystem<IApplication> *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
  operator delete(this);
}


