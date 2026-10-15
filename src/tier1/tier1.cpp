
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_tier1.cpp  (line 0, @0x0000000001a672f0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_tier1_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// ConnectTier1Libraries  (line 21, @0x0000000002f82760, libserver.so)
// calls: ConnectInterfaces
// callers: CTier1AppSystem<IGameConfiguration, 0>::Connect, CTier2AppSystem<IGameConfiguration, 0>::Connect, CTier1AppSystem<ISource2ServerSerializers, 0>::Connect, CTier2AppSystem<ISource2ServerSerializers, 0>::Connect, CGameAppSystem<ISource2ServerSerializers, 0>::Connect, CSource2ServerSerializers::Connect, CTier1AppSystem<ISource2Server, 0>::Connect, CTier2AppSystem<ISource2Server, 0>::Connect, CTier1AppSystem<ISource2GameEntities, 0>::Connect, CTier2AppSystem<ISource2GameEntities, 0>::Connect, CTier1AppSystem<ISource2GameClients, 0>::Connect, CTier2AppSystem<ISource2GameClients, 0>::Connect (18 total)
void __fastcall ConnectTier1Libraries(CreateInterfaceFn *pFactoryList, int nFactoryCount)
{
  ConnectInterfaces(pFactoryList, nFactoryCount);
}


// DisconnectTier1Libraries  (line 26, @0x0000000002f82770, libserver.so)
// calls: DisconnectInterfaces
// callers: CTier1AppSystem<IGameConfiguration, 0>::Disconnect, CTier2AppSystem<IGameConfiguration, 0>::Disconnect, CTier1AppSystem<ISource2ServerSerializers, 0>::Disconnect, CTier2AppSystem<ISource2ServerSerializers, 0>::Disconnect, CGameAppSystem<ISource2ServerSerializers, 0>::Disconnect, CTier1AppSystem<ISource2Server, 0>::Disconnect, CTier1AppSystem<ISource2GameEntities, 0>::Disconnect, CTier1AppSystem<ISource2GameClients, 0>::Disconnect, CTier2AppSystem<ISource2Server, 0>::Disconnect, CTier2AppSystem<ISource2GameEntities, 0>::Disconnect, CTier2AppSystem<ISource2GameClients, 0>::Disconnect, CGameAppSystem<ISource2GameClients, 0>::Disconnect (17 total)
void __cdecl DisconnectTier1Libraries()
{
  DisconnectInterfaces();
}


