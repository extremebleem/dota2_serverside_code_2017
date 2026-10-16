
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTier2AppSystem<ISource2GameEntities, 0>::~CTier2AppSystem  (line 41, @0x0000000002248880, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ISource2GameEntities
// calls: CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CTier2AppSystem<ISource2GameEntities,0>::~CTier2AppSystem(
        CTier2AppSystem<ISource2GameEntities,0> *const this)
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


// CTier2AppSystem<ISource2GameEntities, 0>::~CTier2AppSystem  (line 41, @0x0000000002248aa0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~CTier2AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ISource2GameEntities
// calls: operator delete, CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CTier2AppSystem<ISource2GameEntities,0>::~CTier2AppSystem(
        CTier2AppSystem<ISource2GameEntities,0> *const this)
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


// CTier2AppSystem<IGameConfiguration, 0>::Connect  (line 51, @0x0000000001f03fd0, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries
bool __fastcall CTier2AppSystem<IGameConfiguration,0>::Connect(
        CTier2AppSystem<IGameConfiguration,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  factorya = factory;
  pFactoryList = factory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  return 1;
}


// CTier2AppSystem<ISource2ServerSerializers, 0>::Connect  (line 51, @0x00000000020f6480, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries
bool __fastcall CTier2AppSystem<ISource2ServerSerializers,0>::Connect(
        CTier2AppSystem<ISource2ServerSerializers,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  factorya = factory;
  pFactoryList = factory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  return 1;
}


// CTier2AppSystem<ISource2Server, 0>::Connect  (line 51, @0x0000000002247cc0, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries
bool __fastcall CTier2AppSystem<ISource2Server,0>::Connect(
        CTier2AppSystem<ISource2Server,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  factorya = factory;
  pFactoryList = factory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  return 1;
}


// CTier2AppSystem<ISource2GameEntities, 0>::Connect  (line 51, @0x0000000002247d30, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries
bool __fastcall CTier2AppSystem<ISource2GameEntities,0>::Connect(
        CTier2AppSystem<ISource2GameEntities,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  factorya = factory;
  pFactoryList = factory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  return 1;
}


// CTier2AppSystem<ISource2GameClients, 0>::Connect  (line 51, @0x0000000002247da0, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries
bool __fastcall CTier2AppSystem<ISource2GameClients,0>::Connect(
        CTier2AppSystem<ISource2GameClients,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  factorya = factory;
  pFactoryList = factory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  return 1;
}


// CTier2AppSystem<IGameConfiguration, 0>::Reconnect  (line 61, @0x0000000001f04130, libserver.so)  // inlines: Reconnect
// calls: ReconnectInterface, ConnectTier2Libraries
void __fastcall CTier2AppSystem<IGameConfiguration,0>::Reconnect(
        CTier2AppSystem<IGameConfiguration,0> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-18h] BYREF

  factorya = factory;
  ReconnectInterface(factory, pInterfaceName);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppSysTier2LibraryConnects;
}


// CTier2AppSystem<ISource2ServerSerializers, 0>::Reconnect  (line 61, @0x00000000020f7010, libserver.so)  // inlines: Reconnect
// calls: ReconnectInterface, ConnectTier2Libraries
void __fastcall CTier2AppSystem<ISource2ServerSerializers,0>::Reconnect(
        CTier2AppSystem<ISource2ServerSerializers,0> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-18h] BYREF

  factorya = factory;
  ReconnectInterface(factory, pInterfaceName);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppSysTier2LibraryConnects;
}


// CTier2AppSystem<ISource2GameEntities, 0>::Reconnect  (line 61, @0x0000000002247ef0, libserver.so)  // inlines: Reconnect
// calls: ReconnectInterface, ConnectTier2Libraries
void __fastcall CTier2AppSystem<ISource2GameEntities,0>::Reconnect(
        CTier2AppSystem<ISource2GameEntities,0> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-18h] BYREF

  factorya = factory;
  ReconnectInterface(factory, pInterfaceName);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppSysTier2LibraryConnects;
}


// CTier2AppSystem<ISource2Server, 0>::Reconnect  (line 61, @0x0000000002247f40, libserver.so)  // inlines: Reconnect
// calls: ReconnectInterface, ConnectTier2Libraries
void __fastcall CTier2AppSystem<ISource2Server,0>::Reconnect(
        CTier2AppSystem<ISource2Server,0> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-18h] BYREF

  factorya = factory;
  ReconnectInterface(factory, pInterfaceName);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppSysTier2LibraryConnects;
}


// CTier2AppSystem<ISource2GameClients, 0>::Reconnect  (line 61, @0x0000000002247f90, libserver.so)  // inlines: Reconnect
// calls: ReconnectInterface, ConnectTier2Libraries
void __fastcall CTier2AppSystem<ISource2GameClients,0>::Reconnect(
        CTier2AppSystem<ISource2GameClients,0> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-18h] BYREF

  factorya = factory;
  ReconnectInterface(factory, pInterfaceName);
  ConnectTier2Libraries(&factorya, 1);
  ++this->m_nAppSysTier2LibraryConnects;
}


// CTier2AppSystem<IGameConfiguration, 0>::Init  (line 68, @0x0000000001f04360, libserver.so)  // inlines: Init
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier2AppSystem<IGameConfiguration,0>::Init(
        CTier2AppSystem<IGameConfiguration,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier2AppSystem<ISource2ServerSerializers, 0>::Init  (line 68, @0x00000000020fbbe0, libserver.so)  // inlines: Init
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier2AppSystem<ISource2ServerSerializers,0>::Init(
        CTier2AppSystem<ISource2ServerSerializers,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier2AppSystem<ISource2GameClients, 0>::Init  (line 68, @0x0000000002248520, libserver.so)  // inlines: Init
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier2AppSystem<ISource2GameClients,0>::Init(
        CTier2AppSystem<ISource2GameClients,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier2AppSystem<ISource2GameEntities, 0>::Init  (line 68, @0x0000000002248560, libserver.so)  // inlines: Init
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier2AppSystem<ISource2GameEntities,0>::Init(
        CTier2AppSystem<ISource2GameEntities,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier2AppSystem<ISource2Server, 0>::Init  (line 68, @0x00000000022485a0, libserver.so)  // inlines: Init
// calls: RegisterConfigValues, ConVar_Register
InitReturnVal_t __fastcall CTier2AppSystem<ISource2Server,0>::Init(CTier2AppSystem<ISource2Server,0> *const this)
{
  if ( g_pConfigurationSystem != 0 )
    RegisterConfigValues();
  if ( g_pCVar != 0 )
    ConVar_Register(0, 0);
  return InitReturnVal_t::INIT_OK;
}


// CTier2AppSystem<IGameConfiguration, 0>::GetTier  (line 77, @0x0000000001f03df0, libserver.so)
AppSystemTier_t __fastcall CTier2AppSystem<IGameConfiguration,0>::GetTier(
        CTier2AppSystem<IGameConfiguration,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER2;
}


// CTier2AppSystem<ISource2ServerSerializers, 0>::GetTier  (line 77, @0x00000000020f3740, libserver.so)
AppSystemTier_t __fastcall CTier2AppSystem<ISource2ServerSerializers,0>::GetTier(
        CTier2AppSystem<ISource2ServerSerializers,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER2;
}


// CTier2AppSystem<ISource2GameEntities, 0>::GetTier  (line 77, @0x0000000002245e40, libserver.so)
AppSystemTier_t __fastcall CTier2AppSystem<ISource2GameEntities,0>::GetTier(
        CTier2AppSystem<ISource2GameEntities,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER2;
}


// CTier2AppSystem<ISource2Server, 0>::GetTier  (line 77, @0x0000000002245f20, libserver.so)
AppSystemTier_t __fastcall CTier2AppSystem<ISource2Server,0>::GetTier(CTier2AppSystem<ISource2Server,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER2;
}


// CTier2AppSystem<ISource2GameClients, 0>::GetTier  (line 77, @0x0000000002245f70, libserver.so)
AppSystemTier_t __fastcall CTier2AppSystem<ISource2GameClients,0>::GetTier(
        CTier2AppSystem<ISource2GameClients,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER2;
}


// CTier2AppSystem<IGameConfiguration, 0>::Shutdown  (line 82, @0x0000000001f040d0, libserver.so)  // inlines: Shutdown
// calls: ConVar_Unregister
void __fastcall CTier2AppSystem<IGameConfiguration,0>::Shutdown(CTier2AppSystem<IGameConfiguration,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier2AppSystem<ISource2ServerSerializers, 0>::Shutdown  (line 82, @0x00000000020f6fd0, libserver.so)  // inlines: Shutdown
// calls: ConVar_Unregister
void __fastcall CTier2AppSystem<ISource2ServerSerializers,0>::Shutdown(
        CTier2AppSystem<ISource2ServerSerializers,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier2AppSystem<ISource2GameEntities, 0>::Shutdown  (line 82, @0x0000000002247680, libserver.so)  // inlines: Shutdown
// calls: ConVar_Unregister
void __fastcall CTier2AppSystem<ISource2GameEntities,0>::Shutdown(CTier2AppSystem<ISource2GameEntities,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier2AppSystem<ISource2Server, 0>::Shutdown  (line 82, @0x00000000022476e0, libserver.so)  // inlines: Shutdown
// calls: ConVar_Unregister
void __fastcall CTier2AppSystem<ISource2Server,0>::Shutdown(CTier2AppSystem<ISource2Server,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier2AppSystem<ISource2GameClients, 0>::Shutdown  (line 82, @0x0000000002247740, libserver.so)  // inlines: Shutdown
// calls: ConVar_Unregister
void __fastcall CTier2AppSystem<ISource2GameClients,0>::Shutdown(CTier2AppSystem<ISource2GameClients,0> *const this)
{
  if ( g_pCVar != 0 )
    ConVar_Unregister();
}


// CTier2AppSystem<IGameConfiguration, 0>::Disconnect  (line 87, @0x0000000001f04040, libserver.so)  // inlines: Disconnect
// calls: DisconnectTier2ManualManifests, DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CTier2AppSystem<IGameConfiguration,0>::Disconnect(CTier2AppSystem<IGameConfiguration,0> *const this)
{
  int v2; // eax
  bool v3; // zf

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


// CTier2AppSystem<ISource2ServerSerializers, 0>::Disconnect  (line 87, @0x00000000020f6f50, libserver.so)  // inlines: Disconnect
// calls: DisconnectTier2ManualManifests, DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CTier2AppSystem<ISource2ServerSerializers,0>::Disconnect(
        CTier2AppSystem<ISource2ServerSerializers,0> *const this)
{
  int v2; // eax
  bool v3; // zf

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


// CTier2AppSystem<ISource2Server, 0>::Disconnect  (line 87, @0x0000000002247bd0, libserver.so)  // inlines: Disconnect
// calls: DisconnectTier2ManualManifests, DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CTier2AppSystem<ISource2Server,0>::Disconnect(CTier2AppSystem<ISource2Server,0> *const this)
{
  int v2; // eax
  bool v3; // zf

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


// CTier2AppSystem<ISource2GameEntities, 0>::Disconnect  (line 87, @0x0000000002247c10, libserver.so)  // inlines: Disconnect
// calls: DisconnectTier2ManualManifests, DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CTier2AppSystem<ISource2GameEntities,0>::Disconnect(
        CTier2AppSystem<ISource2GameEntities,0> *const this)
{
  int v2; // eax
  bool v3; // zf

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


// CTier2AppSystem<ISource2GameClients, 0>::Disconnect  (line 87, @0x0000000002247c50, libserver.so)  // inlines: Disconnect
// calls: DisconnectTier2ManualManifests, DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CTier2AppSystem<ISource2GameClients,0>::Disconnect(CTier2AppSystem<ISource2GameClients,0> *const this)
{
  int v2; // eax
  bool v3; // zf

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


