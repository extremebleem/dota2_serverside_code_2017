// Reconstructed from DWARF by pahole; not original source.

// src/interfaces/interfaces.cpp:202
struct InterfaceGlobals_t {
	const char * m_pInterfaceName;  // +0x0
	void * m_ppGlobal;  // +0x8

	// sizeof = 16
};

// src/interfaces/interfaces.cpp:369
struct ConnectionRegistration_t {
	void * m_ppGlobalStorage;  // +0x0
	int m_nConnectionPhase;  // +0x8

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_interfaces.cpp  (line 0, @0x0000000001a674c0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_interfaces_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CPostConnectCallback::CPostConnectCallback  (line 31, @0x0000000002f902b0, libserver.so)
// callers: _GLOBAL__sub_I_tier2.cpp
// globals: CPostConnectCallback::s_pFirstCallback, CPostConnectCallback::s_nInstallOrder
void __fastcall CPostConnectCallback::CPostConnectCallback(CPostConnectCallback *const this, int nPriority)
{
  CPostConnectCallback *v2; // rax
  int v3; // edx

  this->_vptr_CPostConnectCallback = &off_47BFB00;
  v2 = CPostConnectCallback::s_pFirstCallback;
  this->m_nPriority = nPriority;
  CPostConnectCallback::s_pFirstCallback = this;
  this->m_pNextCallback = v2;
  v3 = CPostConnectCallback::s_nInstallOrder + 1;
  this->m_nInstallOrder = CPostConnectCallback::s_nInstallOrder;
  CPostConnectCallback::s_nInstallOrder = v3;
}


// RegisterInterface  (line 378, @0x0000000002f902f0, libserver.so)
// callers: ConnectInterfaces
// globals: s_nRegistrationCount, s_pConnectionRegistration, s_nConnectionCount
void __fastcall RegisterInterface(CreateInterfaceFn factory, const char *pInterfaceName, void **ppGlobal)
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
      v5->m_nConnectionPhase = s_nConnectionCount;
    }
  }
}


// ReconnectInterface  (line 393, @0x0000000002f90350, libserver.so)
// callers: ConnectInterfaces, ReconnectInterface
// globals: s_nRegistrationCount, s_pConnectionRegistration, s_nConnectionCount
void __fastcall ReconnectInterface(CreateInterfaceFn factory, const char *pInterfaceName, void **ppGlobal)
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
      v9 = s_nConnectionCount;
      v8->m_ppGlobalStorage = ppGlobal;
      v8->m_nConnectionPhase = v9;
    }
  }
}


// CompareConnectFunc  (line 423, @0x0000000002f90270, libserver.so)
int __fastcall CompareConnectFunc(void *context, const void *_left, const void *_right)
{
  __int64 v3; // rcx
  int result; // eax
  __int64 v5; // rdx
  int v6; // edi
  int v7; // edi

  v3 = *_left;
  result = 1;
  v5 = *_right;
  v6 = *(v5 + 16);
  if ( *(*_left + 16LL) <= v6 )
  {
    if ( *(*_left + 16LL) < v6 )
    {
      return -1;
    }
    else
    {
      v7 = *(v5 + 20);
      if ( *(v3 + 20) <= v7 )
        return -(*(v3 + 20) < v7);
    }
  }
  return result;
}


// CallPostConnect  (line 439, @0x0000000002f903e0, libserver.so)
// calls: V_qsort_s, __stack_chk_fail
// callers: ConnectInterfaces, ReconnectInterface
// globals: CPostConnectCallback::s_nInstallOrder, CPostConnectCallback::s_pFirstCallback, CompareConnectFunc(void *,void const*,void const*)
void __cdecl CallPostConnect()
{
  int v0; // r13d
  CPostConnectCallback *v1; // rdx
  void *v2; // rsp
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  CPostConnectCallback *v6; // r12
  CPostConnectCallback *v7; // rax
  int v8; // edx
  _BYTE v9[32]; // [rsp+10h] [rbp-20h] BYREF

  v0 = CPostConnectCallback::s_nInstallOrder;
  if ( CPostConnectCallback::s_nInstallOrder != 0 )
  {
    v1 = CPostConnectCallback::s_pFirstCallback;
    v2 = alloca(((8LL * CPostConnectCallback::s_nInstallOrder + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    v3 = v9 & 0xFFFFFFFFFFFFFFEFLL;
    if ( CPostConnectCallback::s_nInstallOrder <= 0 )
    {
      V_qsort_s(v9 & 0xFFFFFFFFFFFFFFEFLL, CPostConnectCallback::s_nInstallOrder, 8, CompareConnectFunc, 0);
      CPostConnectCallback::s_nInstallOrder = 0;
      CPostConnectCallback::s_pFirstCallback = 0;
    }
    else
    {
      v4 = 0;
      do
      {
        *(v3 + 8 * v4++) = v1;
        v1 = v1->m_pNextCallback;
      }
      while ( v0 > v4 );
      v5 = 0;
      V_qsort_s(v9 & 0xFFFFFFFFFFFFFFEFLL, v0, 8, CompareConnectFunc, 0);
      CPostConnectCallback::s_nInstallOrder = 0;
      CPostConnectCallback::s_pFirstCallback = 0;
      do
      {
        v6 = *(v3 + 8 * v5);
        if ( v6->OnConnect() == 1 )
        {
          v7 = CPostConnectCallback::s_pFirstCallback;
          CPostConnectCallback::s_pFirstCallback = v6;
          v6->m_pNextCallback = v7;
          v8 = CPostConnectCallback::s_nInstallOrder + 1;
          v6->m_nInstallOrder = CPostConnectCallback::s_nInstallOrder;
          CPostConnectCallback::s_nInstallOrder = v8;
        }
        ++v5;
      }
      while ( v0 > v5 );
    }
  }
}


// ConnectInterfaces  (line 474, @0x0000000002f90540, libserver.so)  // inlines: LeafCodeInfo_t
// calls: ReconnectInterface, CallPostConnect, RegisterInterface, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: ConnectTier1Libraries
// strings: "ConnectInterfaces", "APPSYSTEM: In ConnectInterfaces(), s_nRegistrationCount is %d!\n"
// globals: s_nRegistrationCount, s_nConnectionCount
void __fastcall ConnectInterfaces(CreateInterfaceFn *pFactoryList, int nFactoryCount)
{
  CreateInterfaceFn *v2; // r12
  CreateInterfaceFn *v3; // r14
  void **p_m_ppGlobal; // rbx
  const char *v5; // rsi
  CreateInterfaceFn *v6; // r12
  CreateInterfaceFn *v7; // r14
  void **v8; // rbx
  const char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  LeafCodeInfo_t v14; // [rsp+0h] [rbp-40h] BYREF

  if ( s_nRegistrationCount < 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v14.m_nLine = 478;
      v14.m_szFile = "interfaces.cpp";
      v14.m_szFunction = "ConnectInterfaces";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v14,
        "APPSYSTEM: In ConnectInterfaces(), s_nRegistrationCount is %d!\n",
        s_nRegistrationCount);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v12, v13, v10, v11) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
    JUMPOUT(0x2F90677);
  }
  if ( s_nRegistrationCount != 0 )
  {
    if ( nFactoryCount > 0 )
    {
      v2 = pFactoryList;
      v3 = &pFactoryList[(nFactoryCount - 1) + 1];
      do
      {
        p_m_ppGlobal = &g_pInterfaceGlobals[0].m_ppGlobal;
        do
        {
          v5 = *(p_m_ppGlobal - 1);
          p_m_ppGlobal += 2;
          ReconnectInterface(*v2, v5, *(p_m_ppGlobal - 2));
        }
        while ( p_m_ppGlobal != &off_47BFAE8 );
        ++v2;
      }
      while ( v2 != v3 );
    }
  }
  else if ( nFactoryCount > 0 )
  {
    v6 = pFactoryList;
    v7 = &pFactoryList[(nFactoryCount - 1) + 1];
    do
    {
      v8 = &g_pInterfaceGlobals[0].m_ppGlobal;
      do
      {
        v9 = *(v8 - 1);
        v8 += 2;
        RegisterInterface(*v6, v9, *(v8 - 2));
      }
      while ( v8 != &off_47BFAE8 );
      ++v6;
    }
    while ( v6 != v7 );
  }
  ++s_nConnectionCount;
  CallPostConnect();
}


// DisconnectInterfaces  (line 506, @0x0000000002f90680, libserver.so)
// callers: DisconnectTier1Libraries
// globals: s_nConnectionCount, s_nRegistrationCount
void __cdecl DisconnectInterfaces()
{
  int v0; // edx
  int *p_m_nConnectionPhase; // rax
  int *v2; // rcx
  _QWORD *v3; // rsi

  v0 = --s_nConnectionCount;
  if ( s_nConnectionCount >= 0 && s_nRegistrationCount > 0 )
  {
    p_m_nConnectionPhase = &s_pConnectionRegistration[0].m_nConnectionPhase;
    v2 = &s_pConnectionRegistration[(s_nRegistrationCount - 1) + 1].m_nConnectionPhase;
    do
    {
      while ( v0 != *p_m_nConnectionPhase )
      {
        p_m_nConnectionPhase += 4;
        if ( p_m_nConnectionPhase == v2 )
          return;
      }
      v3 = *(p_m_nConnectionPhase - 1);
      p_m_nConnectionPhase += 4;
      *v3 = 0;
    }
    while ( p_m_nConnectionPhase != v2 );
  }
}


// ReconnectInterface  (line 526, @0x0000000002f906f0, libserver.so)
// calls: strcmp, ReconnectInterface, CallPostConnect
// callers: CBaseAppSystem<IGameConfiguration>::Reconnect, CTier2AppSystem<IGameConfiguration, 0>::Reconnect, CBaseAppSystem<ISource2ServerSerializers>::Reconnect, CTier2AppSystem<ISource2ServerSerializers, 0>::Reconnect, CGameAppSystem<ISource2ServerSerializers, 0>::Reconnect, CBaseAppSystem<ISource2GameEntities>::Reconnect, CTier2AppSystem<ISource2GameEntities, 0>::Reconnect, CBaseAppSystem<ISource2Server>::Reconnect, CTier2AppSystem<ISource2Server, 0>::Reconnect, CBaseAppSystem<ISource2GameClients>::Reconnect, CTier2AppSystem<ISource2GameClients, 0>::Reconnect, CGameAppSystem<ISource2GameClients, 0>::Reconnect (17 total)
// globals: `typeinfo for'CPostConnectCallback, g_pInterfaceGlobals
void __fastcall ReconnectInterface(CreateInterfaceFn factory, const char *pInterfaceName)
{
  const InterfaceGlobals_t_0 *v4; // rbx
  const char *m_pInterfaceName; // r12
  const char *v6; // rsi

  v4 = g_pInterfaceGlobals;
  do
  {
    if ( pInterfaceName != 0 )
    {
      m_pInterfaceName = v4->m_pInterfaceName;
      if ( strcmp(v4->m_pInterfaceName, pInterfaceName) != 0 )
        goto LABEL_5;
      v6 = m_pInterfaceName;
    }
    else
    {
      v6 = v4->m_pInterfaceName;
    }
    ReconnectInterface(factory, v6, v4->m_ppGlobal);
LABEL_5:
    ++v4;
  }
  while ( v4 != &`typeinfo for'CPostConnectCallback );
  CallPostConnect();
}


