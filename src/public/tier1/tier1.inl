
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTier1AppSystem<ISource2GameEntities, 0>::~CTier1AppSystem  (line 32, @0x0000000002245d00, libserver.so)  // inlines: ~CBaseAppSystem, ~CTier0AppSystem, ~ISource2GameEntities
void __fastcall CTier1AppSystem<ISource2GameEntities,0>::~CTier1AppSystem(
        CTier1AppSystem<ISource2GameEntities,0> *const this)
{
  this->_vptr_IAppSystem = &off_403F870;
}


// CTier1AppSystem<ISource2GameEntities, 0>::~CTier1AppSystem  (line 32, @0x00000000022466f0, libserver.so)  // inlines: ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~ISource2GameEntities
// calls: operator delete
void __fastcall CTier1AppSystem<ISource2GameEntities,0>::~CTier1AppSystem(
        CTier1AppSystem<ISource2GameEntities,0> *const this)
{
  this->_vptr_IAppSystem = &off_403F870;
  operator delete(this);
}


// CTier1AppSystem<IApplication, 0>::~CTier1AppSystem  (line 32, @0x0000000002339940, libserver.so)  // inlines: ~CBaseAppSystem, ~CTier0AppSystem, ~IApplication
void __fastcall CTier1AppSystem<IApplication,0>::~CTier1AppSystem(CTier1AppSystem<IApplication,0> *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
}


// CTier1AppSystem<IApplication, 0>::~CTier1AppSystem  (line 32, @0x000000000233ac40, libserver.so)  // inlines: ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~IApplication
// calls: operator delete
void __fastcall CTier1AppSystem<IApplication,0>::~CTier1AppSystem(CTier1AppSystem<IApplication,0> *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
  operator delete(this);
}


// CTier1AppSystem<IGameConfiguration, 0>::Connect  (line 37, @0x0000000001f03f90, libserver.so)
// calls: ConnectTier1Libraries
bool __fastcall CTier1AppSystem<IGameConfiguration,0>::Connect(
        CTier1AppSystem<IGameConfiguration,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-8h] BYREF

  factorya = factory;
  ConnectTier1Libraries(&factorya, 1);
  return 1;
}


// CTier1AppSystem<ISource2ServerSerializers, 0>::Connect  (line 37, @0x00000000020f6450, libserver.so)
// calls: ConnectTier1Libraries
bool __fastcall CTier1AppSystem<ISource2ServerSerializers,0>::Connect(
        CTier1AppSystem<ISource2ServerSerializers,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-8h] BYREF

  factorya = factory;
  ConnectTier1Libraries(&factorya, 1);
  return 1;
}


// CTier1AppSystem<ISource2Server, 0>::Connect  (line 37, @0x0000000002247c90, libserver.so)
// calls: ConnectTier1Libraries
bool __fastcall CTier1AppSystem<ISource2Server,0>::Connect(
        CTier1AppSystem<ISource2Server,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-8h] BYREF

  factorya = factory;
  ConnectTier1Libraries(&factorya, 1);
  return 1;
}


// CTier1AppSystem<ISource2GameEntities, 0>::Connect  (line 37, @0x0000000002247d00, libserver.so)
// calls: ConnectTier1Libraries
bool __fastcall CTier1AppSystem<ISource2GameEntities,0>::Connect(
        CTier1AppSystem<ISource2GameEntities,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-8h] BYREF

  factorya = factory;
  ConnectTier1Libraries(&factorya, 1);
  return 1;
}


// CTier1AppSystem<ISource2GameClients, 0>::Connect  (line 37, @0x0000000002247d70, libserver.so)
// calls: ConnectTier1Libraries
bool __fastcall CTier1AppSystem<ISource2GameClients,0>::Connect(
        CTier1AppSystem<ISource2GameClients,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-8h] BYREF

  factorya = factory;
  ConnectTier1Libraries(&factorya, 1);
  return 1;
}


// CTier1AppSystem<IApplication, 0>::Connect  (line 37, @0x000000000233bae0, libserver.so)
// calls: ConnectTier1Libraries
bool __fastcall CTier1AppSystem<IApplication,0>::Connect(
        CTier1AppSystem<IApplication,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-8h] BYREF

  factorya = factory;
  ConnectTier1Libraries(&factorya, 1);
  return 1;
}


// CTier1AppSystem<IGameConfiguration, 0>::Disconnect  (line 46, @0x0000000001f04020, libserver.so)
// calls: DisconnectTier1Libraries
void __fastcall CTier1AppSystem<IGameConfiguration,0>::Disconnect(CTier1AppSystem<IGameConfiguration,0> *const this)
{
  DisconnectTier1Libraries();
}


// CTier1AppSystem<ISource2ServerSerializers, 0>::Disconnect  (line 46, @0x00000000020f6f40, libserver.so)
// calls: DisconnectTier1Libraries
void __fastcall CTier1AppSystem<ISource2ServerSerializers,0>::Disconnect(
        CTier1AppSystem<ISource2ServerSerializers,0> *const this)
{
  DisconnectTier1Libraries();
}


// CTier1AppSystem<ISource2Server, 0>::Disconnect  (line 46, @0x0000000002247ba0, libserver.so)
// calls: DisconnectTier1Libraries
void __fastcall CTier1AppSystem<ISource2Server,0>::Disconnect(CTier1AppSystem<ISource2Server,0> *const this)
{
  DisconnectTier1Libraries();
}


// CTier1AppSystem<ISource2GameEntities, 0>::Disconnect  (line 46, @0x0000000002247bb0, libserver.so)
// calls: DisconnectTier1Libraries
void __fastcall CTier1AppSystem<ISource2GameEntities,0>::Disconnect(
        CTier1AppSystem<ISource2GameEntities,0> *const this)
{
  DisconnectTier1Libraries();
}


// CTier1AppSystem<ISource2GameClients, 0>::Disconnect  (line 46, @0x0000000002247bc0, libserver.so)
// calls: DisconnectTier1Libraries
void __fastcall CTier1AppSystem<ISource2GameClients,0>::Disconnect(CTier1AppSystem<ISource2GameClients,0> *const this)
{
  DisconnectTier1Libraries();
}


// CTier1AppSystem<IApplication, 0>::Disconnect  (line 46, @0x000000000233bba0, libserver.so)
// calls: DisconnectTier1Libraries
void __fastcall CTier1AppSystem<IApplication,0>::Disconnect(CTier1AppSystem<IApplication,0> *const this)
{
  DisconnectTier1Libraries();
}


// CTier1AppSystem<IGameConfiguration, 0>::Init  (line 52, @0x0000000001f03ef0, libserver.so)
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier1AppSystem<IGameConfiguration,0>::Init(
        CTier1AppSystem<IGameConfiguration,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier1AppSystem<ISource2ServerSerializers, 0>::Init  (line 52, @0x00000000020f6410, libserver.so)
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier1AppSystem<ISource2ServerSerializers,0>::Init(
        CTier1AppSystem<ISource2ServerSerializers,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier1AppSystem<ISource2Server, 0>::Init  (line 52, @0x0000000002247ae0, libserver.so)
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier1AppSystem<ISource2Server,0>::Init(CTier1AppSystem<ISource2Server,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier1AppSystem<ISource2GameEntities, 0>::Init  (line 52, @0x0000000002247b20, libserver.so)
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier1AppSystem<ISource2GameEntities,0>::Init(
        CTier1AppSystem<ISource2GameEntities,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier1AppSystem<ISource2GameClients, 0>::Init  (line 52, @0x0000000002247b60, libserver.so)
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier1AppSystem<ISource2GameClients,0>::Init(
        CTier1AppSystem<ISource2GameClients,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier1AppSystem<IApplication, 0>::Init  (line 52, @0x000000000233bbf0, libserver.so)
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier1AppSystem<IApplication,0>::Init(CTier1AppSystem<IApplication,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier1AppSystem<IGameConfiguration, 0>::Shutdown  (line 69, @0x0000000001f04090, libserver.so)
// calls: ConVar_Unregister
void __fastcall CTier1AppSystem<IGameConfiguration,0>::Shutdown(CTier1AppSystem<IGameConfiguration,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier1AppSystem<ISource2ServerSerializers, 0>::Shutdown  (line 69, @0x00000000020f6fa0, libserver.so)
// calls: ConVar_Unregister
void __fastcall CTier1AppSystem<ISource2ServerSerializers,0>::Shutdown(
        CTier1AppSystem<ISource2ServerSerializers,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier1AppSystem<ISource2GameEntities, 0>::Shutdown  (line 69, @0x0000000002247650, libserver.so)
// calls: ConVar_Unregister
void __fastcall CTier1AppSystem<ISource2GameEntities,0>::Shutdown(CTier1AppSystem<ISource2GameEntities,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier1AppSystem<ISource2Server, 0>::Shutdown  (line 69, @0x00000000022476b0, libserver.so)
// calls: ConVar_Unregister
void __fastcall CTier1AppSystem<ISource2Server,0>::Shutdown(CTier1AppSystem<ISource2Server,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier1AppSystem<ISource2GameClients, 0>::Shutdown  (line 69, @0x0000000002247710, libserver.so)
// calls: ConVar_Unregister
void __fastcall CTier1AppSystem<ISource2GameClients,0>::Shutdown(CTier1AppSystem<ISource2GameClients,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier1AppSystem<IApplication, 0>::Shutdown  (line 69, @0x000000000233bc30, libserver.so)
// calls: ConVar_Unregister
void __fastcall CTier1AppSystem<IApplication,0>::Shutdown(CTier1AppSystem<IApplication,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier1AppSystem<IGameConfiguration, 0>::GetTier  (line 78, @0x0000000001f03e10, libserver.so)
AppSystemTier_t __fastcall CTier1AppSystem<IGameConfiguration,0>::GetTier(
        CTier1AppSystem<IGameConfiguration,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER1;
}


// CTier1AppSystem<ISource2ServerSerializers, 0>::GetTier  (line 78, @0x00000000020f3750, libserver.so)
AppSystemTier_t __fastcall CTier1AppSystem<ISource2ServerSerializers,0>::GetTier(
        CTier1AppSystem<ISource2ServerSerializers,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER1;
}


// CTier1AppSystem<ISource2GameEntities, 0>::GetTier  (line 78, @0x0000000002245e50, libserver.so)
AppSystemTier_t __fastcall CTier1AppSystem<ISource2GameEntities,0>::GetTier(
        CTier1AppSystem<ISource2GameEntities,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER1;
}


// CTier1AppSystem<ISource2Server, 0>::GetTier  (line 78, @0x0000000002245f30, libserver.so)
AppSystemTier_t __fastcall CTier1AppSystem<ISource2Server,0>::GetTier(CTier1AppSystem<ISource2Server,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER1;
}


// CTier1AppSystem<ISource2GameClients, 0>::GetTier  (line 78, @0x0000000002245f80, libserver.so)
AppSystemTier_t __fastcall CTier1AppSystem<ISource2GameClients,0>::GetTier(
        CTier1AppSystem<ISource2GameClients,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER1;
}


// CTier1AppSystem<IApplication, 0>::GetTier  (line 78, @0x000000000233a8f0, libserver.so)
AppSystemTier_t __fastcall CTier1AppSystem<IApplication,0>::GetTier(CTier1AppSystem<IApplication,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER1;
}


