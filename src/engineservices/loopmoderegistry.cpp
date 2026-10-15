
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_loopmoderegistry.cpp  (line 0, @0x0000000001a6a140, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_loopmoderegistry_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CLoopModeRegistry::CLoopModeRegistry  (line 25, @0x00000000030dcd70, libserver.so)
// callers: __static_initialization_and_destruction_0
// globals: CLoopModeRegistry::sm_pFirst
void __fastcall CLoopModeRegistry::CLoopModeRegistry(
        CLoopModeRegistry *const this,
        const char *pLoopModeName,
        ILoopModeFactory *pLoopModeFactory,
        void **ppGlobalPointer)
{
  CLoopModeRegistry *v4; // rax

  v4 = CLoopModeRegistry::sm_pFirst;
  this->m_pLoopModeFactory = pLoopModeFactory;
  this->m_pLoopModeName = pLoopModeName;
  this->m_ppGlobalPointer = ppGlobalPointer;
  this->m_pNext = v4;
  CLoopModeRegistry::sm_pFirst = this;
}


// CLoopModeRegistry::RegisterLoopModes  (line 38, @0x00000000030dcda0, libserver.so)
// callers: CSource2Server::Init
// globals: CLoopModeRegistry::sm_pFirst
void __cdecl CLoopModeRegistry::RegisterLoopModes()
{
  CLoopModeRegistry *i; // rbx

  for ( i = CLoopModeRegistry::sm_pFirst; i != 0; i = i->m_pNext )
    (*(*g_pEngineServiceMgr + 104LL))(
      g_pEngineServiceMgr,
      i->m_pLoopModeName,
      i->m_pLoopModeFactory,
      i->m_ppGlobalPointer);
}


// CLoopModeRegistry::UnregisterLoopModes  (line 49, @0x00000000030dcdf0, libserver.so)
// callers: CSource2Server::Shutdown
// globals: CLoopModeRegistry::sm_pFirst
void __cdecl CLoopModeRegistry::UnregisterLoopModes()
{
  CLoopModeRegistry *i; // rbx

  for ( i = CLoopModeRegistry::sm_pFirst; i != 0; i = i->m_pNext )
    (*(*g_pEngineServiceMgr + 112LL))(
      g_pEngineServiceMgr,
      i->m_pLoopModeName,
      i->m_pLoopModeFactory,
      i->m_ppGlobalPointer);
}


