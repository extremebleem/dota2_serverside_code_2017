// Reconstructed from DWARF by pahole; not original source.

// src/game/gameinterfaces/gameinterfaces.cpp:30
struct InterfaceGlobals_t {
	const char * m_pInterfaceName;  // +0x0
	void * m_ppGlobal;  // +0x8

	// sizeof = 24
};

// src/game/gameinterfaces/gameinterfaces.cpp:48
struct ClientServerAliasGlobals_t {
	void * m_ppGlobal;  // +0x0
	void * m_ppServerGlobal;  // +0x8
	void * m_ppClientGlobal;  // +0x10

	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_gameinterfaces.cpp  (line 0, @0x0000000001a6acd0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_gameinterfaces_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// RegisterGameInterface  (line 84, @0x000000000312e170, libserver.so)
// callers: ConnectGameInterfaces
// globals: s_nRegistrationCount, s_pConnectionRegistration, s_nGameConnectionCount
void __fastcall RegisterGameInterface(CreateInterfaceFn factory, const char *pInterfaceName, void **ppGlobal)
{
  void *v3; // rax
  __int64 v4; // rax
  ConnectionRegistration_t *v5; // rax

  if ( *ppGlobal == 0 )
  {
    v3 = factory(pInterfaceName, 0);
    *ppGlobal = v3;
    if ( v3 != 0 )
    {
      v4 = s_nRegistrationCount++;
      v5 = &s_pConnectionRegistration[v4];
      v5->m_ppGlobalStorage = ppGlobal;
      v5->m_nConnectionPhase = s_nGameConnectionCount;
    }
  }
}


// ReconnectGameInterface  (line 99, @0x000000000312e1d0, libserver.so)
// callers: ConnectGameInterfaces, ReconnectGameInterface
// globals: s_nRegistrationCount, s_pConnectionRegistration, s_nGameConnectionCount
void __fastcall ReconnectGameInterface(CreateInterfaceFn factory, const char *pInterfaceName, void **ppGlobal)
{
  void *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  char v7; // si
  ConnectionRegistration_t *v8; // r9
  int v9; // eax

  v4 = factory(pInterfaceName, 0);
  v5 = s_nRegistrationCount;
  *ppGlobal = v4;
  if ( v5 <= 0 )
    goto LABEL_7;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( s_pConnectionRegistration[v6].m_ppGlobalStorage == ppGlobal )
      v7 = 1;
    ++v6;
  }
  while ( v6 != (v5 - 1) + 1LL );
  if ( v7 == 0 )
  {
LABEL_7:
    if ( v4 != 0 )
    {
      s_nRegistrationCount = v5 + 1;
      v8 = &s_pConnectionRegistration[v5];
      v9 = s_nGameConnectionCount;
      v8->m_ppGlobalStorage = ppGlobal;
      v8->m_nConnectionPhase = v9;
    }
  }
}


// UpdateAliases  (line 128, @0x000000000312e260, libserver.so)
// callers: ConnectGameInterfaces, DisconnectGameInterfaces, ReconnectGameInterface
// globals: g_pGameResourceService, g_pNetworkStringTable
void __fastcall UpdateAliases(GameInterfaceConnectionMode_t mode)
{
  if ( mode == GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY )
  {
    g_pGameResourceService = g_pGameResourceServiceServer;
    g_pNetworkStringTable = g_pNetworkStringTableServer;
  }
  else if ( mode == GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_CLIENT_ONLY )
  {
    g_pGameResourceService = g_pGameResourceServiceClient;
    g_pNetworkStringTable = g_pNetworkStringTableClient;
  }
}


// ConnectGameInterfaces  (line 159, @0x000000000312e2c0, libserver.so)  // inlines: LeafCodeInfo_t
// calls: ReconnectGameInterface, UpdateAliases, RegisterGameInterface, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CGameAppSystem<ISource2ServerSerializers, 0>::Connect, CSource2ServerSerializers::Connect, CGameAppSystem<ISource2GameEntities, 0>::Connect, CGameAppSystem<ISource2Server, 0>::Connect, CGameAppSystem<ISource2GameClients, 0>::Connect, CSource2Server::Connect
// strings: "gameinterfaces.cpp", "ConnectGameInterfaces", "APPSYSTEM: In ConnectGameInterfaces(), s_nRegistrationCount is %d!\n", "APPSYSTEM: In ConnectGameInterfaces(), tried to use different connection modes!\n"
// globals: s_mode, s_nRegistrationCount, g_pInterfaceGlobals, s_nGameConnectionCount
void __fastcall ConnectGameInterfaces(
        CreateInterfaceFn *pFactoryList,
        int nFactoryCount,
        GameInterfaceConnectionMode_t mode)
{
  CreateInterfaceFn *v4; // r14
  CreateInterfaceFn *v5; // r15
  const InterfaceGlobals_t *v6; // rbx
  void **m_ppGlobal; // rdx
  CreateInterfaceFn *v8; // r14
  CreateInterfaceFn *v9; // r15
  const InterfaceGlobals_t *v10; // rbx
  void **v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  LeafCodeInfo_t v18; // [rsp+0h] [rbp-50h] BYREF

  if ( s_mode != 0 && s_mode != mode )
    goto LABEL_26;
  s_mode = mode;
  if ( s_nRegistrationCount < 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v18.m_nLine = 169;
      v18.m_szFile = "gameinterfaces.cpp";
      v18.m_szFunction = "ConnectGameInterfaces";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v18,
        "APPSYSTEM: In ConnectGameInterfaces(), s_nRegistrationCount is %d!\n",
        s_nRegistrationCount);
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_26:
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v18.m_szFile = "gameinterfaces.cpp";
        v18.m_szFunction = "ConnectGameInterfaces";
        v18.m_nLine = 163;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v18,
          "APPSYSTEM: In ConnectGameInterfaces(), tried to use different connection modes!\n",
          v16,
          v17);
      }
    }
  }
  if ( s_nRegistrationCount != 0 )
  {
    if ( nFactoryCount > 0 )
    {
      v4 = pFactoryList;
      v5 = &pFactoryList[(nFactoryCount - 1) + 1];
      do
      {
        v6 = g_pInterfaceGlobals;
        do
        {
          while ( (mode & v6->m_mode) == 0 )
          {
            if ( ++v6 == &unk_47C5228 )
              goto LABEL_11;
          }
          m_ppGlobal = v6->m_ppGlobal;
          ++v6;
          ReconnectGameInterface(*v4, v6[-1].m_pInterfaceName, m_ppGlobal);
        }
        while ( v6 != &unk_47C5228 );
LABEL_11:
        ++v4;
      }
      while ( v4 != v5 );
    }
  }
  else if ( nFactoryCount > 0 )
  {
    v8 = pFactoryList;
    v9 = &pFactoryList[(nFactoryCount - 1) + 1];
    do
    {
      v10 = g_pInterfaceGlobals;
      do
      {
        while ( (mode & v10->m_mode) == 0 )
        {
          if ( ++v10 == &unk_47C5228 )
            goto LABEL_19;
        }
        v11 = v10->m_ppGlobal;
        ++v10;
        RegisterGameInterface(*v8, v10[-1].m_pInterfaceName, v11);
      }
      while ( v10 != &unk_47C5228 );
LABEL_19:
      ++v8;
    }
    while ( v8 != v9 );
  }
  UpdateAliases(mode);
  ++s_nGameConnectionCount;
}


// DisconnectGameInterfaces  (line 203, @0x000000000312e4b0, libserver.so)
// calls: UpdateAliases
// callers: CGameAppSystem<ISource2ServerSerializers, 0>::Disconnect, CGameAppSystem<ISource2GameClients, 0>::Disconnect, CGameAppSystem<ISource2GameEntities, 0>::Disconnect, CGameAppSystem<ISource2Server, 0>::Disconnect, CSource2Server::Disconnect
// globals: s_nGameConnectionCount, s_nRegistrationCount, s_mode
void __cdecl DisconnectGameInterfaces()
{
  int v0; // edx
  int *p_m_nConnectionPhase; // rax
  int *v2; // rcx
  _QWORD *v3; // rsi

  v0 = --s_nGameConnectionCount;
  if ( s_nGameConnectionCount >= 0 )
  {
    if ( s_nRegistrationCount > 0 )
    {
      p_m_nConnectionPhase = &s_pConnectionRegistration[0].m_nConnectionPhase;
      v2 = &s_pConnectionRegistration[(s_nRegistrationCount - 1) + 1].m_nConnectionPhase;
      do
      {
        while ( v0 != *p_m_nConnectionPhase )
        {
          p_m_nConnectionPhase += 4;
          if ( p_m_nConnectionPhase == v2 )
            goto LABEL_7;
        }
        v3 = *(p_m_nConnectionPhase - 1);
        p_m_nConnectionPhase += 4;
        *v3 = 0;
      }
      while ( p_m_nConnectionPhase != v2 );
    }
LABEL_7:
    UpdateAliases(s_mode);
  }
}


// ReconnectGameInterface  (line 225, @0x000000000312e530, libserver.so)  // inlines: LeafCodeInfo_t
// calls: strcmp, ReconnectGameInterface, UpdateAliases, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CGameAppSystem<ISource2ServerSerializers, 0>::Reconnect, CGameAppSystem<ISource2GameClients, 0>::Reconnect, CGameAppSystem<ISource2Server, 0>::Reconnect, CGameAppSystem<ISource2GameEntities, 0>::Reconnect
// strings: "gameinterfaces.cpp", "ReconnectGameInterface", "APPSYSTEM: In ReconnectGameInterface(), tried to use different connection modes!\n"
// globals: s_mode, g_pInterfaceGlobals
void __fastcall ReconnectGameInterface(
        CreateInterfaceFn factory,
        const char *pInterfaceName,
        GameInterfaceConnectionMode_t mode)
{
  const InterfaceGlobals_t *v6; // rbx
  void **m_ppGlobal; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  LeafCodeInfo_t v14; // [rsp+0h] [rbp-50h] BYREF

  if ( s_mode != 0 && s_mode != mode )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v14.m_szFile = "gameinterfaces.cpp";
      v14.m_szFunction = "ReconnectGameInterface";
      v14.m_nLine = 229;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v14,
        "APPSYSTEM: In ReconnectGameInterface(), tried to use different connection modes!\n",
        v12,
        v13);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v10, v11, v8, v9) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
    JUMPOUT(0x312E632);
  }
  s_mode = mode;
  v6 = g_pInterfaceGlobals;
  do
  {
    while ( pInterfaceName != 0 && strcmp(v6->m_pInterfaceName, pInterfaceName) != 0 || (mode & v6->m_mode) == 0 )
    {
      if ( ++v6 == &unk_47C5228 )
        goto LABEL_9;
    }
    m_ppGlobal = v6->m_ppGlobal;
    ++v6;
    ReconnectGameInterface(factory, v6[-1].m_pInterfaceName, m_ppGlobal);
  }
  while ( v6 != &unk_47C5228 );
LABEL_9:
  UpdateAliases(mode);
}


