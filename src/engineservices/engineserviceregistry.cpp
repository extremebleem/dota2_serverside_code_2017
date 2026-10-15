
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_engineserviceregistry.cpp  (line 0, @0x0000000001a6a170, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_engineserviceregistry_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CEngineServiceRegistry::CEngineServiceRegistry  (line 25, @0x00000000030dce40, libserver.so)
// globals: CEngineServiceRegistry::sm_pFirst
void __fastcall CEngineServiceRegistry::CEngineServiceRegistry(
        CEngineServiceRegistry *const this,
        const char *pServiceName,
        IEngineService *pService)
{
  CEngineServiceRegistry *v3; // rax

  v3 = CEngineServiceRegistry::sm_pFirst;
  this->m_pService = pService;
  this->m_pServiceName = pServiceName;
  this->m_pNext = v3;
  CEngineServiceRegistry::sm_pFirst = this;
}


// CEngineServiceRegistry::RegisterEngineServices  (line 37, @0x00000000030dce60, libserver.so)
// callers: CSource2Server::Init
// globals: CEngineServiceRegistry::sm_pFirst
void __cdecl CEngineServiceRegistry::RegisterEngineServices()
{
  CEngineServiceRegistry *i; // rbx

  for ( i = CEngineServiceRegistry::sm_pFirst; i != 0; i = i->m_pNext )
    (*(*g_pEngineServiceMgr + 88LL))(g_pEngineServiceMgr, i->m_pServiceName, i->m_pService);
}


// CEngineServiceRegistry::UnregisterEngineServices  (line 48, @0x00000000030dcea0, libserver.so)
// callers: CSource2Server::Shutdown
// globals: CEngineServiceRegistry::sm_pFirst
void __cdecl CEngineServiceRegistry::UnregisterEngineServices()
{
  CEngineServiceRegistry *i; // rbx

  for ( i = CEngineServiceRegistry::sm_pFirst; i != 0; i = i->m_pNext )
    (*(*g_pEngineServiceMgr + 96LL))(g_pEngineServiceMgr, i->m_pServiceName, i->m_pService);
}


