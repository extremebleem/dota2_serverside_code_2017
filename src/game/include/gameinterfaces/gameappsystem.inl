
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameAppSystem<ISource2GameEntities, 0>::~CGameAppSystem  (line 24, @0x00000000022489c0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~CTier2AppSystem, ~CTier3AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ISource2GameEntities
// calls: CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CGameAppSystem<ISource2GameEntities,0>::~CGameAppSystem(
        CGameAppSystem<ISource2GameEntities,0> *const this)
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


// CGameAppSystem<ISource2GameEntities, 0>::~CGameAppSystem  (line 24, @0x0000000002248b60, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAppSystem, ~CGameAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~CTier2AppSystem, ~CTier3AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ISource2GameEntities
// calls: operator delete, CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CGameAppSystem<ISource2GameEntities,0>::~CGameAppSystem(
        CGameAppSystem<ISource2GameEntities,0> *const this)
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


// CGameAppSystem<ISource2ServerSerializers, 0>::GetTier  (line 29, @0x00000000020f36f0, libserver.so)
AppSystemTier_t __fastcall CGameAppSystem<ISource2ServerSerializers,0>::GetTier(
        CGameAppSystem<ISource2ServerSerializers,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER5;
}


// CGameAppSystem<ISource2GameClients, 0>::GetTier  (line 29, @0x0000000002245da0, libserver.so)
AppSystemTier_t __fastcall CGameAppSystem<ISource2GameClients,0>::GetTier(
        CGameAppSystem<ISource2GameClients,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER5;
}


// CGameAppSystem<ISource2GameEntities, 0>::GetTier  (line 29, @0x0000000002245e00, libserver.so)
AppSystemTier_t __fastcall CGameAppSystem<ISource2GameEntities,0>::GetTier(
        CGameAppSystem<ISource2GameEntities,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER5;
}


// CGameAppSystem<ISource2Server, 0>::GetTier  (line 29, @0x0000000002245ec0, libserver.so)
AppSystemTier_t __fastcall CGameAppSystem<ISource2Server,0>::GetTier(CGameAppSystem<ISource2Server,0> *const this)
{
  return AppSystemTier_t::APP_SYSTEM_TIER5;
}


// CGameAppSystem<ISource2ServerSerializers, 0>::Connect  (line 34, @0x00000000020fb800, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries, ConnectGameInterfaces
bool __fastcall CGameAppSystem<ISource2ServerSerializers,0>::Connect(
        CGameAppSystem<ISource2ServerSerializers,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn v5; // [rsp+10h] [rbp-20h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  factorya = factory;
  v5 = factory;
  pFactoryList = factory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&v5, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  ConnectGameInterfaces(&factorya, 1, GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY);
  return 1;
}


// CGameAppSystem<ISource2GameEntities, 0>::Connect  (line 34, @0x0000000002248400, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries, ConnectGameInterfaces
bool __fastcall CGameAppSystem<ISource2GameEntities,0>::Connect(
        CGameAppSystem<ISource2GameEntities,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn v5; // [rsp+10h] [rbp-20h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  factorya = factory;
  v5 = factory;
  pFactoryList = factory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&v5, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  ConnectGameInterfaces(&factorya, 1, GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY);
  return 1;
}


// CGameAppSystem<ISource2Server, 0>::Connect  (line 34, @0x0000000002248460, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries, ConnectGameInterfaces
bool __fastcall CGameAppSystem<ISource2Server,0>::Connect(
        CGameAppSystem<ISource2Server,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn v5; // [rsp+10h] [rbp-20h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  factorya = factory;
  v5 = factory;
  pFactoryList = factory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&v5, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  ConnectGameInterfaces(&factorya, 1, GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY);
  return 1;
}


// CGameAppSystem<ISource2GameClients, 0>::Connect  (line 34, @0x00000000022484c0, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries, ConnectGameInterfaces
bool __fastcall CGameAppSystem<ISource2GameClients,0>::Connect(
        CGameAppSystem<ISource2GameClients,0> *const this,
        CreateInterfaceFn factory)
{
  CreateInterfaceFn factorya; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn v5; // [rsp+10h] [rbp-20h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  factorya = factory;
  v5 = factory;
  pFactoryList = factory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&v5, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  ConnectGameInterfaces(&factorya, 1, GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY);
  return 1;
}


// CGameAppSystem<ISource2ServerSerializers, 0>::Disconnect  (line 43, @0x00000000020fbd50, libserver.so)  // inlines: Disconnect
// calls: DisconnectGameInterfaces, DisconnectTier2ManualManifests, DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CGameAppSystem<ISource2ServerSerializers,0>::Disconnect(
        CGameAppSystem<ISource2ServerSerializers,0> *const this)
{
  int v2; // eax
  bool v3; // zf

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


// CGameAppSystem<ISource2GameClients, 0>::Disconnect  (line 43, @0x0000000002248650, libserver.so)  // inlines: Disconnect
// calls: DisconnectGameInterfaces, DisconnectTier2ManualManifests, DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CGameAppSystem<ISource2GameClients,0>::Disconnect(CGameAppSystem<ISource2GameClients,0> *const this)
{
  int v2; // eax
  bool v3; // zf

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


// CGameAppSystem<ISource2GameEntities, 0>::Disconnect  (line 43, @0x00000000022486a0, libserver.so)  // inlines: Disconnect
// calls: DisconnectGameInterfaces, DisconnectTier2ManualManifests, DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CGameAppSystem<ISource2GameEntities,0>::Disconnect(CGameAppSystem<ISource2GameEntities,0> *const this)
{
  int v2; // eax
  bool v3; // zf

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


// CGameAppSystem<ISource2Server, 0>::Disconnect  (line 43, @0x00000000022487d0, libserver.so)  // inlines: Disconnect
// calls: DisconnectGameInterfaces, DisconnectTier2ManualManifests, DisconnectTier2Libraries, DisconnectTier1Libraries
void __fastcall CGameAppSystem<ISource2Server,0>::Disconnect(CGameAppSystem<ISource2Server,0> *const this)
{
  int v2; // eax
  bool v3; // zf

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


// CGameAppSystem<ISource2ServerSerializers, 0>::Reconnect  (line 49, @0x00000000020fb620, libserver.so)  // inlines: Reconnect
// calls: ReconnectInterface, ConnectTier2Libraries, ReconnectGameInterface
void __fastcall CGameAppSystem<ISource2ServerSerializers,0>::Reconnect(
        CGameAppSystem<ISource2ServerSerializers,0> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CreateInterfaceFn pFactoryList; // [rsp+8h] [rbp-28h] BYREF

  pFactoryList = factory;
  ReconnectInterface(factory, pInterfaceName);
  ConnectTier2Libraries(&pFactoryList, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  ReconnectGameInterface(factory, pInterfaceName, GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY);
}


// CGameAppSystem<ISource2GameClients, 0>::Reconnect  (line 49, @0x00000000022482e0, libserver.so)  // inlines: Reconnect
// calls: ReconnectInterface, ConnectTier2Libraries, ReconnectGameInterface
void __fastcall CGameAppSystem<ISource2GameClients,0>::Reconnect(
        CGameAppSystem<ISource2GameClients,0> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CreateInterfaceFn pFactoryList; // [rsp+8h] [rbp-28h] BYREF

  pFactoryList = factory;
  ReconnectInterface(factory, pInterfaceName);
  ConnectTier2Libraries(&pFactoryList, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  ReconnectGameInterface(factory, pInterfaceName, GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY);
}


// CGameAppSystem<ISource2Server, 0>::Reconnect  (line 49, @0x0000000002248340, libserver.so)  // inlines: Reconnect
// calls: ReconnectInterface, ConnectTier2Libraries, ReconnectGameInterface
void __fastcall CGameAppSystem<ISource2Server,0>::Reconnect(
        CGameAppSystem<ISource2Server,0> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CreateInterfaceFn pFactoryList; // [rsp+8h] [rbp-28h] BYREF

  pFactoryList = factory;
  ReconnectInterface(factory, pInterfaceName);
  ConnectTier2Libraries(&pFactoryList, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  ReconnectGameInterface(factory, pInterfaceName, GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY);
}


// CGameAppSystem<ISource2GameEntities, 0>::Reconnect  (line 49, @0x00000000022483a0, libserver.so)  // inlines: Reconnect
// calls: ReconnectInterface, ConnectTier2Libraries, ReconnectGameInterface
void __fastcall CGameAppSystem<ISource2GameEntities,0>::Reconnect(
        CGameAppSystem<ISource2GameEntities,0> *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CreateInterfaceFn pFactoryList; // [rsp+8h] [rbp-28h] BYREF

  pFactoryList = factory;
  ReconnectInterface(factory, pInterfaceName);
  ConnectTier2Libraries(&pFactoryList, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  ReconnectGameInterface(factory, pInterfaceName, GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY);
}


