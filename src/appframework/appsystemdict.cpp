
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_appsystemdict.cpp  (line 0, @0x0000000001a675b0, libserver.so)  // inlines: CSimpleLoggingListener, Color, SetColor, __static_initialization_and_destruction_0
// calls: LoggingSystem_RegisterLoggingChannel
// strings: "Developer", "DeveloperConsole", "DeveloperVerbose"
// globals: UNSPECIFIED_LOGGING_COLOR, LOG_DEVELOPER, LOG_DEVELOPER_CONSOLE, LOG_DEVELOPER_VERBOSE, s_SimpleLoggingListener
void __cdecl GLOBAL__sub_I_appsystemdict_cpp()
{
  LoggingChannelID_t v0; // eax

  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  LOG_DEVELOPER = LoggingSystem_RegisterLoggingChannel("Developer", 0, 0, 2, *&UNSPECIFIED_LOGGING_COLOR);
  LOG_DEVELOPER_CONSOLE = LoggingSystem_RegisterLoggingChannel("DeveloperConsole", 0, 0, 2, *&UNSPECIFIED_LOGGING_COLOR);
  v0 = LoggingSystem_RegisterLoggingChannel("DeveloperVerbose", 0, 0, 2, *&UNSPECIFIED_LOGGING_COLOR);
  s_SimpleLoggingListener.m_bQuietPrintf = 0;
  LOG_DEVELOPER_VERBOSE = v0;
  s_SimpleLoggingListener.m_bQuietDebugger = 0;
  s_SimpleLoggingListener._vptr_ILoggingListener = &off_47C26D0;
}


// CAppSystemDict::CAppSystemDict  (line 74, @0x0000000003068f60, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlStringList, CUtlStringList_Base, CUtlStringMap, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, SetBool, ~CUtlMemory, ~CUtlString, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, Plat_IsRunningOnCustomerMachine, RequireKeyValuesSystem, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, LoggingSystem_CurrentStateIndex, LoggingSystem_PushLoggingState, LoggingSystem_RegisterLoggingListener, Plat_GetModuleFilename, V_StripFilename (23 total)
// strings: "ApplicationInfo", "isgame"
// globals: s_pAppSystemDict, s_SimpleLoggingListener, s_SimpleWindowsLoggingListener
void __fastcall CAppSystemDict::CAppSystemDict(
        CAppSystemDict *const this,
        bool bIsConsoleApp,
        void *hInstance,
        void *hPrevInstance,
        int nCmdShow,
        bool bIsGameApp,
        bool bIsDedicatedServer)
{
  KeyValues *v10; // r13
  CSimpleLoggingListener *v11; // rax
  char pExeName[520]; // [rsp+20h] [rbp-240h] BYREF
  unsigned __int64 v14; // [rsp+228h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  this->_vptr_CAppSystemDict = off_47C2750;  // vptr: CAppSystemDict
  this->m_modules.m_Size = 0;
  this->m_modules.m_Memory.m_pMemory = 0;
  this->m_modules.m_Memory.m_nAllocationCount = 0;
  this->m_modules.m_Memory.m_nGrowSize = 0;
  this->m_Systems.m_Size = 0;
  this->m_Systems.m_Memory.m_pMemory = 0;
  this->m_Systems.m_Memory.m_nAllocationCount = 0;
  this->m_Systems.m_Memory.m_nGrowSize = 0;
  this->m_NonAppSystemFactories.m_Size = 0;
  this->m_NonAppSystemFactories.m_Memory.m_pMemory = 0;
  this->m_NonAppSystemFactories.m_Memory.m_nAllocationCount = 0;
  this->m_NonAppSystemFactories.m_Memory.m_nGrowSize = 0;
  this->m_ModuleSearchPath.m_Size = 0;
  this->m_ModuleSearchPath.m_Memory.m_pMemory = 0;
  this->m_ModuleSearchPath.m_Memory.m_nAllocationCount = 0;
  this->m_ModuleSearchPath.m_Memory.m_nGrowSize = 0;
  this->m_SystemDict.m_Vector.m_Size = 0;
  this->m_SystemDict.m_Vector.m_Memory.m_pMemory = 0;
  this->m_SystemDict.m_Vector.m_Memory.m_nAllocationCount = 32;
  this->m_SystemDict.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize(this, bIsConsoleApp);
  this->m_SystemDict.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                     g_pMemAlloc,
                                                     2LL * this->m_SystemDict.m_Vector.m_Memory.m_nAllocationCount);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_SystemDict.m_SymbolTable, 0, 32, 1);
  this->m_UILanguage.m_pString = 0;
  this->m_AudioLanguage.m_pString = 0;
  this->m_ModPath.m_pString = 0;
  this->m_ExecutablePath.m_pString = 0;
  this->m_ModSubDir.m_pString = 0;
  this->m_ContentPath.m_pString = 0;
  this->m_nAppSystemPhase = 0;
  this->m_bSuppressCOMInitialization = 0;
  this->m_nStartupManifestsDisabledCount = 0;
  this->m_bInvokedPreShutdown = 0;
  this->m_bIsRetail = Plat_IsRunningOnCustomerMachine();
  this->m_pApplication = 0;
  this->m_pGameInfo = 0;
  this->m_bIsConsoleApp = bIsConsoleApp;
  this->m_bIsGameApp = bIsGameApp;
  this->m_bIsDedicatedServer = bIsDedicatedServer;
  s_pAppSystemDict = this;
  RequireKeyValuesSystem();
  v10 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v10, "ApplicationInfo");
  this->m_pApplicationInfo = v10;
  KeyValues::SetInt(v10, "isgame", bIsGameApp);
  v11 = &s_SimpleLoggingListener;
  if ( !bIsConsoleApp )
    v11 = &s_SimpleWindowsLoggingListener;
  this->m_pDefaultLoggingListener = v11;
  this->m_nExpectedShutdownLoggingStateIndex = LoggingSystem_CurrentStateIndex(0);
  LoggingSystem_PushLoggingState(0, 1);
  LoggingSystem_RegisterLoggingListener(this->m_pDefaultLoggingListener);
  this->m_bInToolsMode = 0;
  this->m_bIsInDeveloperMode = 0;
  this->m_hInstance = hInstance;
  Plat_GetModuleFilename(pExeName, 512);
  V_StripFilename(pExeName);
  CUtlString::operator=(&this->m_ExecutablePath, pExeName);
  this->m_bInitialized = 0;
  this->m_bIsLowViolence = 0;
}


// CAppSystemDict::~CAppSystemDict  (line 129, @0x0000000003068a50, libserver.so)  // inlines: Clear, Purge, PurgeAndDeleteElements, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CAppSystemDict::Shutdown, LoggingSystem_PopLoggingState, LoggingSystem_CurrentStateIndex, LoggingSystem_ResetCurrentLoggingState, LoggingSystem_RegisterLoggingListener, Warning, CAppSystemDict::FreeSystemEntry, CUtlSymbolTable::RemoveAll, KeyValues::deleteThis, CAppSystemDict::ShutdownSDL, CUtlString::FreeMemoryBlock, CUtlSymbolTable::~CUtlSymbolTable (18 total)
// callers: CTier1AppSystemDict::~CTier1AppSystemDict, CTier2AppSystemDict::~CTier2AppSystemDict, CAppSystemDict::~CAppSystemDict
// strings: "ERROR: Detected mismatched logging state. Expected matching LoggingSystem_PushLoggingStat
// globals: s_pAppSystemDict
void __fastcall CAppSystemDict::~CAppSystemDict(CAppSystemDict *const this)
{
  int m_nExpectedShutdownLoggingStateIndex; // r12d
  int v3; // edx
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  KeyValues *m_pGameInfo; // rdi
  KeyValues *m_pApplicationInfo; // rdi
  IApplication *m_pApplication; // rdi
  bool v10; // zf
  __int64 v11; // r13
  int v12; // r12d
  char *v13; // rsi

  this->_vptr_CAppSystemDict = off_47C2750;  // vptr: CAppSystemDict
  CAppSystemDict::Shutdown(this, 0);
  LoggingSystem_PopLoggingState(0);
  m_nExpectedShutdownLoggingStateIndex = this->m_nExpectedShutdownLoggingStateIndex;
  if ( m_nExpectedShutdownLoggingStateIndex != LoggingSystem_CurrentStateIndex(0) )
  {
    LoggingSystem_ResetCurrentLoggingState();
    LoggingSystem_RegisterLoggingListener(this->m_pDefaultLoggingListener);
    Warning(
      "ERROR: Detected mismatched logging state. Expected matching LoggingSystem_PushLoggingState/LoggingSystem_PopLoggingState.\n");
  }
  v3 = this->m_Systems.m_Size - 1;
  if ( v3 >= 0 )
  {
    v4 = 40LL * v3;
    v5 = 40 * (v3 - v3) - 40;
    do
    {
      v6 = v4;
      v4 -= 40;
      CAppSystemDict::FreeSystemEntry(this, (this->m_Systems.m_Memory.m_pMemory + v6));
    }
    while ( v4 != v5 );
  }
  this->m_Systems.m_Size = 0;
  this->m_SystemDict.m_Vector.m_Size = 0;
  CUtlSymbolTable::RemoveAll(&this->m_SystemDict.m_SymbolTable);
  m_pGameInfo = this->m_pGameInfo;
  if ( m_pGameInfo != 0 )
  {
    KeyValues::deleteThis(m_pGameInfo);
    this->m_pGameInfo = 0;
  }
  m_pApplicationInfo = this->m_pApplicationInfo;
  if ( m_pApplicationInfo != 0 )
  {
    KeyValues::deleteThis(m_pApplicationInfo);
    this->m_pApplicationInfo = 0;
  }
  m_pApplication = this->m_pApplication;
  if ( m_pApplication != 0 )
  {
    (*(m_pApplication->_vptr_IAppSystem + 12))(m_pApplication);
    this->m_pApplication = 0;
  }
  s_pAppSystemDict = 0;
  CAppSystemDict::ShutdownSDL(this);
  if ( !this->m_bSuppressCOMInitialization )
    Plat_ShutdownCOM();
  if ( this->m_ContentPath.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_ContentPath);
  if ( this->m_ModSubDir.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_ModSubDir);
  if ( this->m_ExecutablePath.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_ExecutablePath);
  if ( this->m_ModPath.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_ModPath);
  if ( this->m_AudioLanguage.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_AudioLanguage);
  if ( this->m_UILanguage.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_UILanguage);
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_SystemDict.m_SymbolTable);
  v10 = (this->m_SystemDict.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SystemDict.m_Vector.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<unsigned short,int>::Purge(&this->m_SystemDict.m_Vector.m_Memory);
    if ( (this->m_SystemDict.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned short,int>::Purge(&this->m_SystemDict.m_Vector.m_Memory);
  }
  if ( this->m_ModuleSearchPath.m_Size > 0 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      ++v12;
      v13 = this->m_ModuleSearchPath.m_Memory.m_pMemory[v11++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13);
    }
    while ( v12 < this->m_ModuleSearchPath.m_Size );
  }
  v10 = (this->m_ModuleSearchPath.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ModuleSearchPath.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_ModuleSearchPath.m_Memory);
    if ( (this->m_ModuleSearchPath.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_ModuleSearchPath.m_Memory);
  }
  v10 = (this->m_NonAppSystemFactories.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_NonAppSystemFactories.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<void * (*)(char const*,int *),int>::Purge(&this->m_NonAppSystemFactories.m_Memory);
    if ( (this->m_NonAppSystemFactories.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<void * (*)(char const*,int *),int>::Purge(&this->m_NonAppSystemFactories.m_Memory);
  }
  v10 = (this->m_Systems.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Systems.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<CAppSystemDict::AppSystem_t,int>::Purge(&this->m_Systems.m_Memory);
    if ( (this->m_Systems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAppSystemDict::AppSystem_t,int>::Purge(&this->m_Systems.m_Memory);
  }
  v10 = (this->m_modules.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_modules.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<CAppSystemDict::ModuleInfo_t,int>::Purge(&this->m_modules.m_Memory);
    if ( (this->m_modules.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAppSystemDict::ModuleInfo_t,int>::Purge(&this->m_modules.m_Memory);
  }
}


// CAppSystemDict::~CAppSystemDict  (line 129, @0x0000000003068d90, libserver.so)
// calls: CAppSystemDict::~CAppSystemDict, operator delete
void __fastcall CAppSystemDict::~CAppSystemDict(CAppSystemDict *const this)
{
  CAppSystemDict::~CAppSystemDict(this);
  operator delete(this);
}


// CAppSystemDict::CreateApplication  (line 195, @0x0000000003067e00, libserver.so)  // inlines: CTier1Application
// calls: operator new
IApplication *__fastcall CAppSystemDict::CreateApplication(CAppSystemDict *const this)
{
  IApplication *result; // rax

  result = operator new(0x10u);  // new CTier1Application (size matches)
  result->_vptr_IAppSystem = off_408BFB0;  // vptr: CTier1Application
  result[1]._vptr_IAppSystem = this;
  return result;
}


// CAppSystemDict::Init  (line 204, @0x000000000306b630, libserver.so)
// calls: CAppSystemDict::AddSystem, Plat_InitializeCOM, CAppSystemDict::InitSDL
// callers: CTier1AppSystemDict::Init
// strings: "VApplication001"
bool __fastcall CAppSystemDict::Init(CAppSystemDict *const this)
{
  IApplication *v2; // rax
  bool v3; // zf

  v2 = (*(this->_vptr_CAppSystemDict + 5))(this);
  v3 = !this->m_bSuppressCOMInitialization;
  this->m_pApplication = v2;
  if ( v3 )
    Plat_InitializeCOM();
  if ( !this->m_bIsConsoleApp && !this->m_bIsDedicatedServer && !CAppSystemDict::InitSDL(this, 0xFFFFFFFF)
    || CAppSystemDict::AddSystem(this, this->m_pApplication, "VApplication001") == 0 )
  {
    return 0;
  }
  this->m_bInitialized = 1;
  return 1;
}


// CAppSystemDict::PreShutdown  (line 233, @0x0000000003068030, libserver.so)
// callers: CAppSystemDict::Shutdown
void __fastcall CAppSystemDict::PreShutdown(CAppSystemDict *const this)
{
  int m_Size; // edx
  int v3; // edx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  IAppSystem *m_pSystem; // rdi

  if ( !this->m_bInvokedPreShutdown )
  {
    m_Size = this->m_Systems.m_Size;
    this->m_bInvokedPreShutdown = 1;
    v3 = m_Size - 1;
    if ( v3 >= 0 )
    {
      v4 = 40LL * v3;
      v5 = 40 * (v3 - v3) - 40;
      do
      {
        m_pSystem = this->m_Systems.m_Memory.m_pMemory[v4 / 0x28].m_pSystem;
        v4 -= 40LL;
        (*(m_pSystem->_vptr_IAppSystem + 5))(m_pSystem);
      }
      while ( v4 != v5 );
    }
  }
}


// CAppSystemDict::Shutdown  (line 248, @0x00000000030680a0, libserver.so)  // inlines: operator[]
// calls: CAppSystemDict::PreShutdown
// callers: CAppSystemDict::~CAppSystemDict
void __fastcall CAppSystemDict::Shutdown(CAppSystemDict *const this, int nPhaseToShutdownTo)
{
  int i; // ecx
  int m_Size; // esi
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // rdx
  int v10; // ebx
  __int64 j; // r14
  char *v12; // rax
  IAppSystem *v13; // r14
  __int64 v14; // rax

  CAppSystemDict::PreShutdown(this);
  for ( i = this->m_nAppSystemPhase; nPhaseToShutdownTo <= i; this->m_nAppSystemPhase = i )
  {
    m_Size = this->m_Systems.m_Size;
    v6 = m_Size;
LABEL_3:
    v7 = 40LL * v6 - 40;
    while ( --v6 >= 0 )
    {
      v8 = v7;
      v7 -= 40;
      v9 = this->m_Systems.m_Memory.m_pMemory + v8;
      if ( i == *(v9 + 8) )
      {
        v13 = *(v9 + 2);
        (*(v13->_vptr_IAppSystem + 4))(v13);
        m_Size = this->m_Systems.m_Size;
        v14 = v6;
        do
        {
          if ( m_Size > v6 && this->m_Systems.m_Memory.m_pMemory[v14].m_pSystem == v13 )
            break;
          --v14;
          --v6;
        }
        while ( v6 >= 0 );
        i = this->m_nAppSystemPhase;
        goto LABEL_3;
      }
    }
    v10 = m_Size;
    for ( j = 40LL * m_Size - 40; --v10 >= 0; j -= 40 )
    {
      v12 = this->m_Systems.m_Memory.m_pMemory + j;
      if ( *(v12 + 8) == i )
      {
        (*(**(v12 + 2) + 8LL))(*(v12 + 2));
        i = this->m_nAppSystemPhase;
      }
    }
    --i;
  }
}


// CAppSystemDict::InitSDL  (line 296, @0x00000000030681c0, libserver.so)
// calls: Plat_LoadSDL
// callers: CAppSystemDict::Init
// strings: "SDL_WINDOW_FRAME_USABLE_WHILE_CURSOR_HIDDEN"
bool __fastcall CAppSystemDict::InitSDL(CAppSystemDict *const this, uint32 nFlags)
{
  char v2; // r12
  void (__fastcall **SDL)(_QWORD); // rax
  void (__fastcall *v4)(_QWORD); // rdx
  void (__fastcall **v5)(_QWORD); // rbx
  bool result; // al

  v2 = nFlags;
  SDL = Plat_LoadSDL(this);
  v4 = *SDL;
  v5 = SDL;
  result = 0;
  if ( v4 != 0 )
  {
    v4(v2 & 0x20);
    (v5[6])("SDL_WINDOW_FRAME_USABLE_WHILE_CURSOR_HIDDEN", "0");
    return 1;
  }
  return result;
}


// CAppSystemDict::ShutdownSDL  (line 315, @0x0000000003068200, libserver.so)
// calls: Plat_CheckSDL, Plat_UnloadSDL
// callers: CAppSystemDict::~CAppSystemDict
void __fastcall CAppSystemDict::ShutdownSDL(CAppSystemDict *const this)
{
  __int64 v1; // rax

  v1 = Plat_CheckSDL(this);
  if ( v1 != 0 )
  {
    (*(v1 + 8))();
    Plat_UnloadSDL();
  }
}


// CAppSystemDict::GetBuildType  (line 325, @0x0000000003068230, libserver.so)
AppSystemBuildType_t __fastcall CAppSystemDict::GetBuildType(const CAppSystemDict *const this)
{
  char v1; // r15
  AppSystemBuildType_t v3; // ebx
  int m_Size; // r12d
  __int64 i; // r13
  __int64 v6; // rdi
  AppSystemBuildType_t v7; // eax

  v1 = 0;
  v3 = AppSystemBuildType_t::APP_SYSTEM_BUILD_UNKNOWN;
  m_Size = this->m_Systems.m_Size;
  for ( i = 40LL * m_Size - 40; --m_Size >= 0; i -= 40 )
  {
    v6 = *(&this->m_Systems.m_Memory.m_pMemory->m_pSystem + i);
    v7 = (*(*v6 + 80LL))(v6);
    if ( v7 == AppSystemBuildType_t::APP_SYSTEM_BUILD_DEBUG )
      v1 = 1;
    if ( v3 == AppSystemBuildType_t::APP_SYSTEM_BUILD_UNKNOWN )
    {
      v3 = v7;
    }
    else if ( v3 != v7 )
    {
      v3 = AppSystemBuildType_t::APP_SYSTEM_BUILD_MIXED;
    }
  }
  if ( v3 == AppSystemBuildType_t::APP_SYSTEM_BUILD_MIXED && v1 != 0 )
    return AppSystemBuildType_t::APP_SYSTEM_BUILD_MIXED_DEBUG;
  return v3;
}


// CAppSystemDict::SetInDeveloperMode  (line 360, @0x00000000030682d0, libserver.so)
// calls: LoggingSystem_SetChannelVerbosity
// callers: CTier1AppSystemDict::Init
// globals: LOG_DEVELOPER, LOG_DEVELOPER_CONSOLE
void __fastcall CAppSystemDict::SetInDeveloperMode(CAppSystemDict *const this, bool bInDeveloperMode)
{
  unsigned int v2; // ebx

  this->m_bIsInDeveloperMode = bInDeveloperMode;
  v2 = 2 - !bInDeveloperMode;
  LoggingSystem_SetChannelVerbosity(LOG_DEVELOPER, v2);
  LoggingSystem_SetChannelVerbosity(LOG_DEVELOPER_CONSOLE, v2);
}


// CAppSystemDict::IsInVRMode  (line 374, @0x0000000003068310, libserver.so)
// callers: CTier2AppSystemDict::OnAppSystemLoaded
bool __fastcall CAppSystemDict::IsInVRMode(const CAppSystemDict *const this)
{
  return g_pVr != 0 && (*(*g_pVr + 104LL))(g_pVr);
}


// CAppSystemDict::SetModuleSearchPath  (line 383, @0x0000000003068340, libserver.so)  // inlines: PurgeAndDeleteElements, RemoveAll
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &)
void __fastcall CAppSystemDict::SetModuleSearchPath(CAppSystemDict *const this, const char *pSearchPath)
{
  __int64 v3; // r12
  int v4; // ebx
  char *v5; // rsi

  if ( pSearchPath != 0 && *pSearchPath != 0 )
  {
    V_SplitString(pSearchPath, ";", &this->m_ModuleSearchPath);
  }
  else
  {
    if ( this->m_ModuleSearchPath.m_Size > 0 )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        ++v4;
        v5 = this->m_ModuleSearchPath.m_Memory.m_pMemory[v3++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
      }
      while ( v4 < this->m_ModuleSearchPath.m_Size );
    }
    this->m_ModuleSearchPath.m_Size = 0;
  }
}


// CAppSystemDict::SetInitializationPhase  (line 395, @0x00000000030683c0, libserver.so)
// callers: CTier1Application::SetInitializationPhase
void __fastcall CAppSystemDict::SetInitializationPhase(CAppSystemDict *const this, int nPhase)
{
  this->m_nAppSystemPhase = nPhase;
}


// CAppSystemDict::GetInitializationPhase  (line 402, @0x00000000030683d0, libserver.so)
// callers: CTier1Application::GetInitializationPhase
int __fastcall CAppSystemDict::GetInitializationPhase(const CAppSystemDict *const this)
{
  return this->m_nAppSystemPhase;
}


// CAppSystemDict::AddSystem  (line 411, @0x000000000306b3d0, libserver.so)  // inlines: AddToTail, CUtlVector, CUtlVectorBase, CopyConstruct<CAppSystemDict::AppSystemRequest_t>, Element, Find, GrowMemory, LeafCodeInfo_t, Purge, RemoveAll, memset, operator const UtlSymId_t, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory, CAppSystemDict::LoadSystemAndDependencies, CUtlSymbolTable::Find, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Grow, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CTier1Application::AddSystem, CAppSystemDict::Init
// strings: "appsystemdict.cpp", "AddSystem", "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n(
IAppSystem *__fastcall CAppSystemDict::AddSystem(
        CAppSystemDict *const this,
        IAppSystem *pAppSystem,
        const char *pInterfaceName)
{
  char *p_request; // r13
  int m_Size; // r14d
  int v8; // eax
  CAppSystemDict::AppSystemRequest_t *v9; // rax
  bool v10; // al
  IAppSystem *m_pSystem; // r12
  CAppSystemDict::AppSystem_t *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  CUtlMemory<CAppSystemDict::AppSystemRequest_t,int> *v18; // r13
  IAppSystem *v19; // rax
  const char *m_pInterfaceName; // r9
  CUtlVector<CAppSystemDict::AppSystemRequest_t,CUtlMemory<CAppSystemDict::AppSystemRequest_t,int> > requests; // [rsp+20h] [rbp-90h] BYREF
  CAppSystemDict::AppSystemRequest_t request; // [rsp+40h] [rbp-70h] BYREF

  if ( pAppSystem == 0 )
    return 0;
  p_request = &request;
  if ( (*(pAppSystem->_vptr_IAppSystem + 9))(pAppSystem) != 0 )
  {
    CUtlSymbolTable::Find(&request, &this->m_SystemDict.m_SymbolTable, pInterfaceName);
    if ( LOWORD(request.m_pRequestingModuleName) != 0xFFFF )
    {
      v13 = &this->m_Systems.m_Memory.m_pMemory[this->m_SystemDict.m_Vector.m_Memory.m_pMemory[LOWORD(request.m_pRequestingModuleName)]];
      m_pSystem = v13->m_pSystem;
      if ( m_pSystem == pAppSystem )
        return m_pSystem;
      m_pSystem = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v19 = v13->m_pSystem;
        m_pInterfaceName = v13->m_pInterfaceName;
        request.m_pRequestingModuleName = "appsystemdict.cpp";
        request.m_pModuleName = "AddSystem";
        LODWORD(request.m_pRequestingInterfaceName) = 426;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &request,
          "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n"
          "(Addresses differ: existing '%s' @ '%p' != requested '%s' @ '%p')\n",
          pInterfaceName,
          m_pInterfaceName,
          v19,
          pInterfaceName,
          pAppSystem);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v16, v17, v14, v15) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      goto LABEL_18;
    }
  }
  memset(&request, 0, sizeof(request));
  p_request = &requests;
  request.m_pInterfaceName = pInterfaceName;
  request.m_pSystem = pAppSystem;
  requests.m_Size = 0;
  CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::CUtlMemory(&requests.m_Memory, 0, 64);
  m_Size = requests.m_Size;
  v8 = requests.m_Size;
  if ( requests.m_Size == requests.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Grow(&requests.m_Memory, 1);
    v8 = requests.m_Size;
  }
  requests.m_Size = v8 + 1;
  v9 = &requests.m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
    *v9 = request;
  v10 = CAppSystemDict::LoadSystemAndDependencies(this, &requests, ErrorResponse_t::QUIT_ON_ERROR);
  requests.m_Size = 0;
  m_pSystem = 0;
  if ( v10 )
    m_pSystem = pAppSystem;
  if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_18:
    v18 = (p_request + 8);
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(v18);
    if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(v18);
  }
  return m_pSystem;
}


// CAppSystemDict::AddSystem  (line 448, @0x000000000306b6c0, libserver.so)  // inlines: AddToTail, CUtlVector, CUtlVectorBase, CopyConstruct<CAppSystemDict::AppSystemRequest_t>, Element, Find, GrowMemory, LeafCodeInfo_t, Purge, RemoveAll, memset, operator const UtlSymId_t, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::Find, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory, CAppSystemDict::LoadSystemAndDependencies, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Grow, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "appsystemdict.cpp", "AddSystem", "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n(
// local variable allocation has failed, the output may be wrong!
IAppSystem *__fastcall CAppSystemDict::AddSystem(
        CAppSystemDict *const this,
        CreateInterfaceFn factory,
        const char *pInterfaceName)
{
  CAppSystemDict *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int m_Size; // eax
  CAppSystemDict::AppSystemRequest_t *m_pMemory; // rax
  bool v13; // al
  IAppSystem *m_pSystem; // rbx
  CUtlVector<CAppSystemDict::AppSystemRequest_t,CUtlMemory<CAppSystemDict::AppSystemRequest_t,int> > requests; // [rsp+0h] [rbp-80h] BYREF
  _BYTE v17[56]; // [rsp+20h] [rbp-60h] OVERLAPPED BYREF

  if ( factory == 0 )
    return 0;
  v4 = this;
  CUtlSymbolTable::Find(v17, &this->m_SystemDict.m_SymbolTable, pInterfaceName);
  if ( *v17 != 0xFFFF )
  {
    v6 = &v4->m_Systems.m_Memory.m_pMemory[v4->m_SystemDict.m_Vector.m_Memory.m_pMemory[*v17]];
    if ( *(v6 + 24) != 0 && (*(**(v6 + 16) + 72LL))(*(v6 + 16)) != 0 )
    {
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        *v17 = "appsystemdict.cpp";
        *&v17[16] = "AddSystem";
        *&v17[8] = 460;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          v17,
          "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n(Existing entry.)\n",
          pInterfaceName);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v9, v10, v7, v8) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
  }
  memset(v17, 0, sizeof(v17));
  *&v17[48] = factory;
  *&v17[24] = pInterfaceName;
  requests.m_Size = 0;
  CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::CUtlMemory(&requests.m_Memory, 0, 64);
  m_Size = 0;
  if ( requests.m_Memory.m_nAllocationCount == 0 )
  {
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Grow(&requests.m_Memory, 1);
    m_Size = requests.m_Size;
  }
  requests.m_Size = m_Size + 1;
  m_pMemory = requests.m_Memory.m_pMemory;
  if ( requests.m_Memory.m_pMemory != 0 )
  {
    requests.m_Memory.m_pMemory->m_pRequestingModuleName = *v17;
    m_pMemory->m_pRequestingInterfaceName = *&v17[8];
    m_pMemory->m_pModuleName = *&v17[16];
    m_pMemory->m_pInterfaceName = *&v17[24];
    m_pMemory->m_pSystem = *&v17[32];
    m_pMemory->m_hModule = *&v17[40];
    m_pMemory->m_pModuleFactory = *&v17[48];
  }
  v13 = CAppSystemDict::LoadSystemAndDependencies(v4, &requests, ErrorResponse_t::QUIT_ON_ERROR);
  m_pSystem = 0;
  if ( v13 )
    m_pSystem = requests.m_Memory.m_pMemory->m_pSystem;
  requests.m_Size = 0;
  if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return m_pSystem;
  CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(&requests.m_Memory);
  if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return m_pSystem;
  CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(&requests.m_Memory);
  return m_pSystem;
}


// CAppSystemDict::AddSystem  (line 480, @0x000000000306b8f0, libserver.so)  // inlines: AddToTail, CUtlVector, CUtlVectorBase, CopyConstruct<CAppSystemDict::AppSystemRequest_t>, Element, Find, GrowMemory, LeafCodeInfo_t, Purge, RemoveAll, memset, operator const UtlSymId_t, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::Find, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory, CAppSystemDict::LoadSystemAndDependencies, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Grow, Warning, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CTier1Application::AddSystem
// strings: "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n(, "appsystemdict.cpp", "AddSystem"
// local variable allocation has failed, the output may be wrong!
IAppSystem *__fastcall CAppSystemDict::AddSystem(
        CAppSystemDict *const this,
        PlatModule_t hModule,
        const char *pInterfaceName,
        ErrorResponse_t errResponse)
{
  CAppSystemDict::AppSystem_t *v8; // rdx
  IAppSystem *m_pSystem; // rbx
  int m_Size; // eax
  CAppSystemDict::AppSystemRequest_t *m_pMemory; // rax
  bool v13; // al
  char IsChannelEnabled; // al
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  CAppSystemDict::AppSystem_t *v18; // rdx
  PlatModule_t m_hModule; // r9
  CAppSystemDict::AppSystem_t *v20; // [rsp+8h] [rbp-98h]
  CUtlVector<CAppSystemDict::AppSystemRequest_t,CUtlMemory<CAppSystemDict::AppSystemRequest_t,int> > requests; // [rsp+10h] [rbp-90h] BYREF
  _BYTE v22[56]; // [rsp+30h] [rbp-70h] OVERLAPPED BYREF

  if ( hModule == 0 )
    return 0;
  CUtlSymbolTable::Find(v22, &this->m_SystemDict.m_SymbolTable, pInterfaceName);
  if ( *v22 != 0xFFFF )
  {
    v8 = &this->m_Systems.m_Memory.m_pMemory[this->m_SystemDict.m_Vector.m_Memory.m_pMemory[*v22]];
    if ( v8->m_hModule != hModule )
    {
      v20 = &this->m_Systems.m_Memory.m_pMemory[this->m_SystemDict.m_Vector.m_Memory.m_pMemory[*v22]];
      if ( (*(v8->m_pSystem->_vptr_IAppSystem + 9))(v8->m_pSystem) != 0 )
      {
        if ( errResponse == ErrorResponse_t::QUIT_ON_ERROR )
        {
          IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4);
          v18 = v20;
          if ( IsChannelEnabled != 0 )
            goto LABEL_23;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v16, v17, v18, v15) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_23:
            m_hModule = v18->m_hModule;
            *v22 = "appsystemdict.cpp";
            *&v22[16] = "AddSystem";
            *&v22[8] = 492;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              v22,
              "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n"
              "(Modules differ: existing '%p' != requested '%p')\n",
              pInterfaceName,
              m_hModule,
              hModule);
          }
        }
        if ( errResponse == ErrorResponse_t::WARN_ON_ERROR )
        {
          m_pSystem = 0;
          Warning(
            "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n"
            "(Modules differ: existing '%p' != requested '%p')\n",
            pInterfaceName,
            v20->m_hModule,
            hModule);
          return m_pSystem;
        }
        return 0;
      }
    }
  }
  memset(v22, 0, sizeof(v22));
  *&v22[40] = hModule;
  *&v22[24] = pInterfaceName;
  requests.m_Size = 0;
  CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::CUtlMemory(&requests.m_Memory, 0, 64);
  m_Size = 0;
  if ( requests.m_Memory.m_nAllocationCount == 0 )
  {
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Grow(&requests.m_Memory, 1);
    m_Size = requests.m_Size;
  }
  requests.m_Size = m_Size + 1;
  m_pMemory = requests.m_Memory.m_pMemory;
  if ( requests.m_Memory.m_pMemory != 0 )
  {
    requests.m_Memory.m_pMemory->m_pRequestingModuleName = *v22;
    m_pMemory->m_pRequestingInterfaceName = *&v22[8];
    m_pMemory->m_pModuleName = *&v22[16];
    m_pMemory->m_pInterfaceName = *&v22[24];
    m_pMemory->m_pSystem = *&v22[32];
    m_pMemory->m_hModule = *&v22[40];
    m_pMemory->m_pModuleFactory = *&v22[48];
  }
  v13 = CAppSystemDict::LoadSystemAndDependencies(this, &requests, errResponse);
  m_pSystem = 0;
  if ( v13 )
    m_pSystem = requests.m_Memory.m_pMemory->m_pSystem;
  requests.m_Size = 0;
  if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(&requests.m_Memory);
    if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(&requests.m_Memory);
  }
  return m_pSystem;
}


// CAppSystemDict::AddSystem  (line 511, @0x000000000306bb80, libserver.so)  // inlines: AddToTail, CUtlVector, CUtlVectorBase, CopyConstruct<CAppSystemDict::AppSystemRequest_t>, Element, Find, GrowMemory, LeafCodeInfo_t, Purge, RemoveAll, V_StripExtension<long unsigned int>, memset, operator const UtlSymId_t, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::Find, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory, CAppSystemDict::LoadSystemAndDependencies, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge, _V_StripExtension, V_stricmp_fast, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Grow, Warning, __stack_chk_fail, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors (15 total)
// callers: CTier1Application::AddSystem, CTier1AppSystemDict::Init, CTier2AppSystemDict::Init
// strings: "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n(, "appsystemdict.cpp", "AddSystem"
// local variable allocation has failed, the output may be wrong!
IAppSystem *__fastcall CAppSystemDict::AddSystem(
        CAppSystemDict *const this,
        const char *pModuleName,
        const char *pInterfaceName,
        ErrorResponse_t errResponse)
{
  CAppSystemDict::AppSystem_t *v7; // r15
  int m_Size; // eax
  CAppSystemDict::AppSystemRequest_t *m_pMemory; // rax
  bool v10; // al
  IAppSystem *m_pSystem; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  const char *m_pModuleName; // r9
  int v18; // ebx
  int v19; // edx
  int v20; // ecx
  int v21; // esi
  int v22; // r8d
  int v23; // r9d
  CUtlVector<CAppSystemDict::AppSystemRequest_t,CUtlMemory<CAppSystemDict::AppSystemRequest_t,int> > requests; // [rsp+20h] [rbp-2A0h] BYREF
  _BYTE v26[56]; // [rsp+40h] [rbp-280h] OVERLAPPED BYREF
  char pModuleBuf[520]; // [rsp+80h] [rbp-240h] BYREF
  unsigned __int64 v28; // [rsp+288h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  if ( pModuleName == 0 )
    return 0;
  CUtlSymbolTable::Find(v26, &this->m_SystemDict.m_SymbolTable, pInterfaceName);
  if ( *v26 != 0xFFFF )
  {
    v7 = &this->m_Systems.m_Memory.m_pMemory[this->m_SystemDict.m_Vector.m_Memory.m_pMemory[*v26]];
    if ( (*(v7->m_pSystem->_vptr_IAppSystem + 9))(v7->m_pSystem) != 0 )
    {
      _V_StripExtension(pModuleName, pModuleBuf, 512);
      if ( V_stricmp_fast(v7->m_pModuleName, pModuleBuf) != 0 )
      {
        if ( errResponse == ErrorResponse_t::QUIT_ON_ERROR )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            m_pModuleName = v7->m_pModuleName;
            *v26 = "appsystemdict.cpp";
            *&v26[8] = 528;
            *&v26[16] = "AddSystem";
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              v26,
              "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n"
              "(Module names differ: existing '%s' != requested '%s')\n",
              pInterfaceName,
              m_pModuleName,
              pModuleBuf);
          }
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v15, v16, v13, v14) != 0 )
            loc_0 = -559038737;
          v18 = Plat_ExitProcess(1);
          CUtlVectorBase<CAppSystemDict::AppSystemRequest_t,CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>>::~CUtlVectorBase(v26);
          Unwind_Resume(v18, v21, v19, v20, v22, v23);
        }
        if ( errResponse == ErrorResponse_t::WARN_ON_ERROR )
        {
          m_pSystem = 0;
          Warning(
            "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n"
            "(Module names differ: existing '%s' != requested '%s')\n",
            pInterfaceName,
            v7->m_pModuleName,
            pModuleBuf);
          return m_pSystem;
        }
        return 0;
      }
    }
  }
  memset(v26, 0, sizeof(v26));
  *&v26[24] = pInterfaceName;
  *&v26[16] = pModuleName;
  requests.m_Size = 0;
  CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::CUtlMemory(&requests.m_Memory, 0, 64);
  m_Size = 0;
  if ( requests.m_Memory.m_nAllocationCount == 0 )
  {
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Grow(&requests.m_Memory, 1);
    m_Size = requests.m_Size;
  }
  requests.m_Size = m_Size + 1;
  m_pMemory = requests.m_Memory.m_pMemory;
  if ( requests.m_Memory.m_pMemory != 0 )
  {
    requests.m_Memory.m_pMemory->m_pRequestingModuleName = *v26;
    m_pMemory->m_pRequestingInterfaceName = *&v26[8];
    m_pMemory->m_pModuleName = *&v26[16];
    m_pMemory->m_pInterfaceName = *&v26[24];
    m_pMemory->m_pSystem = *&v26[32];
    m_pMemory->m_hModule = *&v26[40];
    m_pMemory->m_pModuleFactory = *&v26[48];
  }
  v10 = CAppSystemDict::LoadSystemAndDependencies(this, &requests, errResponse);
  m_pSystem = 0;
  if ( v10 )
    m_pSystem = requests.m_Memory.m_pMemory->m_pSystem;
  requests.m_Size = 0;
  if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(&requests.m_Memory);
    if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(&requests.m_Memory);
  }
  return m_pSystem;
}


// CAppSystemDict::AddSystems  (line 552, @0x000000000306be90, libserver.so)  // inlines: AddToTail, CUtlVector, CUtlVectorBase, CopyConstruct<CAppSystemDict::AppSystemRequest_t>, Element, Find, GrowMemory, LeafCodeInfo_t, Purge, RemoveAll, V_StripExtension<long unsigned int>, memset, operator const UtlSymId_t, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory, CUtlSymbolTable::Find, _V_StripExtension, V_stricmp_fast, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Grow, CAppSystemDict::LoadSystemAndDependencies, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge, CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase (14 total)
// callers: CTier1Application::AddSystems
// strings: "appsystemdict.cpp", "AddSystems", "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n(, "***************** ERROR: Cannot call CAppSystemDict::AddSystems without initializing firs
bool __fastcall CAppSystemDict::AddSystems(CAppSystemDict *const this, int nCount, const AppSystemInfo_t *pSystemList)
{
  CAppSystemDict *v3; // r13
  const CUtlSymbolTable *p_m_SymbolTable; // r15
  __int64 m_Size; // r12
  int v8; // eax
  CAppSystemDict::AppSystemRequest_t *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  const char *v14; // r9
  const char *m_pInterfaceName; // r8
  bool result; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  const AppSystemInfo_t *v21; // [rsp+28h] [rbp-2C8h]
  bool v22; // [rsp+28h] [rbp-2C8h]
  CUtlVector<CAppSystemDict::AppSystemRequest_t,CUtlMemory<CAppSystemDict::AppSystemRequest_t,int> > requests; // [rsp+30h] [rbp-2C0h] BYREF
  LeafCodeInfo_t v24; // [rsp+50h] [rbp-2A0h] BYREF
  CAppSystemDict::AppSystemRequest_t request; // [rsp+70h] [rbp-280h] BYREF
  char pModuleBuf[520]; // [rsp+B0h] [rbp-240h] BYREF
  unsigned __int64 v27; // [rsp+2B8h] [rbp-38h]

  v3 = this;
  v27 = __readfsqword(0x28u);
  if ( !this->m_bInitialized )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      request.m_pRequestingModuleName = "appsystemdict.cpp";
      request.m_pModuleName = "AddSystems";
      LODWORD(request.m_pRequestingInterfaceName) = 557;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &request,
        "***************** ERROR: Cannot call CAppSystemDict::AddSystems without initializing first!\n");
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v19, v20, v17, v18) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
    JUMPOUT(0x306C236);
  }
  requests.m_Size = 0;
  CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::CUtlMemory(&requests.m_Memory, 0, 64);
  memset(&request, 0, sizeof(request));
  if ( nCount > 0 )
  {
    p_m_SymbolTable = &v3->m_SystemDict.m_SymbolTable;
    v21 = &pSystemList[(nCount - 1) + 1];
    while ( 1 )
    {
      CUtlSymbolTable::Find(&v24, p_m_SymbolTable, pSystemList->m_pInterfaceName);
      if ( LOWORD(v24.m_szFile) != 0xFFFF )
      {
        m_Size = &v3->m_Systems.m_Memory.m_pMemory[v3->m_SystemDict.m_Vector.m_Memory.m_pMemory[LOWORD(v24.m_szFile)]];
        if ( (*(**(m_Size + 16) + 72LL))(*(m_Size + 16)) != 0 )
        {
          _V_StripExtension(pSystemList->m_pModuleName, pModuleBuf, 512);
          if ( V_stricmp_fast(*m_Size, pModuleBuf) != 0 )
            break;
        }
      }
      m_Size = requests.m_Size;
      request.m_pModuleName = pSystemList->m_pModuleName;
      request.m_pInterfaceName = pSystemList->m_pInterfaceName;
      v8 = requests.m_Size;
      if ( requests.m_Size == requests.m_Memory.m_nAllocationCount )
        goto LABEL_16;
LABEL_5:
      requests.m_Size = v8 + 1;
      v9 = &requests.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        *v9 = request;
      if ( ++pSystemList == v21 )
        goto LABEL_17;
    }
    v3 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v14 = *m_Size;
      v24.m_szFile = "appsystemdict.cpp";
      m_pInterfaceName = pSystemList->m_pInterfaceName;
      v24.m_nLine = 580;
      v24.m_szFunction = "AddSystems";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v24,
        "AppSystemDict: Attempted to add two different systems with the same interface name %s!\n"
        "(Module names differ: existing '%s' != requested '%s')\n",
        m_pInterfaceName,
        v14,
        pModuleBuf);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v12, v13, v10, v11) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_16:
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Grow(&requests.m_Memory, 1);
    v8 = requests.m_Size;
    goto LABEL_5;
  }
LABEL_17:
  result = CAppSystemDict::LoadSystemAndDependencies(v3, &requests, ErrorResponse_t::QUIT_ON_ERROR);
  requests.m_Size = 0;
  if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    v22 = result;
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(&requests.m_Memory);
    result = v22;
    if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(&requests.m_Memory);
      return v22;
    }
  }
  return result;
}


// CAppSystemDict::FreeSystemEntry  (line 598, @0x00000000030689f0, libserver.so)
// calls: CAppSystemDict::UnloadModule
// callers: CAppSystemDict::~CAppSystemDict, CAppSystemDict::RemoveSystem
void __fastcall CAppSystemDict::FreeSystemEntry(CAppSystemDict *const this, CAppSystemDict::AppSystem_t *pSystemEntry)
{
  _PlatModule_t *m_hModule; // rsi

  m_hModule = pSystemEntry->m_hModule;
  if ( m_hModule != 0 )
    CAppSystemDict::UnloadModule(this, m_hModule);
  if ( pSystemEntry->m_pModuleName != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  if ( pSystemEntry->m_pInterfaceName != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
}


// CAppSystemDict::RemoveSystem  (line 618, @0x0000000003069830, libserver.so)  // inlines: Element, FastRemove, memcpy, operator[]
// calls: CAppSystemDict::FreeSystemEntry, CAppSystemDict::RebuildSystemDictionary
// callers: CTier1Application::RemoveSystem, CAppSystemDict::ReplaceSystem
void __fastcall CAppSystemDict::RemoveSystem(CAppSystemDict *const this, IAppSystem *pAppSystem)
{
  int m_Size; // ecx
  CAppSystemDict::AppSystem_t *m_pMemory; // rsi
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // r14
  int v9; // eax
  int v10; // eax
  CAppSystemDict::AppSystem_t *v11; // rdx
  CAppSystemDict::AppSystem_t *v12; // rax
  const char **v13; // r14

  m_Size = this->m_Systems.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Systems.m_Memory.m_pMemory;
    if ( m_pMemory->m_pSystem == pAppSystem )
    {
      v8 = 0;
      v7 = 0;
LABEL_10:
      (*(pAppSystem->_vptr_IAppSystem + 4))(pAppSystem);
      (*(pAppSystem->_vptr_IAppSystem + 1))(pAppSystem);
      CAppSystemDict::FreeSystemEntry(this, (this->m_Systems.m_Memory.m_pMemory + v8));
      v9 = this->m_Systems.m_Size;
      if ( v9 > 0 )
      {
        v10 = v9 - 1;
        if ( v7 != v10 )
        {
          v11 = this->m_Systems.m_Memory.m_pMemory;
          v12 = &v11[v10];
          v13 = (&v11->m_pModuleName + v8);
          *v13 = v12->m_pModuleName;
          v13[1] = v12->m_pInterfaceName;
          v13[2] = v12->m_pSystem;
          v13[3] = v12->m_hModule;
          v13[4] = *&v12->m_nPhase;
          v10 = this->m_Systems.m_Size - 1;
        }
        this->m_Systems.m_Size = v10;
      }
      CAppSystemDict::RebuildSystemDictionary(this);
    }
    else
    {
      v6 = 1;
      v7 = 0;
      while ( ++v7 != m_Size )
      {
        if ( m_pMemory[v6].m_pSystem == pAppSystem )
        {
          if ( v7 == -1 )
            return;
          v8 = v6 * 40;
          goto LABEL_10;
        }
        ++v6;
      }
    }
  }
}


// CAppSystemDict::RebuildSystemDictionary  (line 651, @0x0000000003069730, libserver.so)  // inlines: AddMultipleToTail, Clear, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, RemoveAll, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::RemoveAll, CUtlSymbolTable::AddString, CUtlMemory<short unsigned int, int>::Grow
// callers: CAppSystemDict::RemoveSystem
void __fastcall CAppSystemDict::RebuildSystemDictionary(CAppSystemDict *const this)
{
  __int64 v2; // r14
  int v3; // ebx
  int m_Size; // r12d
  CAppSystemDict::AppSystem_t *v5; // r13
  IAppSystem *m_pSystem; // rdi
  unsigned __int16 v7; // ax
  int v8; // edx
  int v9; // r9d
  int m_nAllocationCount; // edx
  unsigned __int16 v11; // [rsp+0h] [rbp-60h]
  int v12; // [rsp+4h] [rbp-5Ch]
  CUtlSymbolTable *p_m_SymbolTable; // [rsp+18h] [rbp-48h]
  unsigned __int16 v14[32]; // [rsp+20h] [rbp-40h] BYREF

  v2 = 0;
  v3 = 0;
  this->m_SystemDict.m_Vector.m_Size = 0;
  p_m_SymbolTable = &this->m_SystemDict.m_SymbolTable;
  CUtlSymbolTable::RemoveAll(&this->m_SystemDict.m_SymbolTable);
  m_Size = this->m_Systems.m_Size;
  if ( m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v5 = &this->m_Systems.m_Memory.m_pMemory[v2];
        m_pSystem = v5->m_pSystem;
        if ( m_pSystem != 0 && v5->m_pInterfaceName != 0 && (*(m_pSystem->_vptr_IAppSystem + 9))(m_pSystem) != 0 )
          break;
        ++v3;
        ++v2;
        if ( v3 == m_Size )
          return;
      }
      CUtlSymbolTable::AddString(v14, p_m_SymbolTable, v5->m_pInterfaceName);
      v7 = v14[0];
      v8 = this->m_SystemDict.m_Vector.m_Size;
      if ( v14[0] >= v8 )
      {
        v9 = v14[0] + 1;
        if ( v8 < v9 )
        {
          m_nAllocationCount = this->m_SystemDict.m_Vector.m_Memory.m_nAllocationCount;
          if ( v9 > m_nAllocationCount )
          {
            v11 = v14[0];
            v12 = v14[0] + 1;
            CUtlMemory<unsigned short,int>::Grow(&this->m_SystemDict.m_Vector.m_Memory, v9 - m_nAllocationCount);
            v7 = v11;
            v9 = v12;
          }
          this->m_SystemDict.m_Vector.m_Size = v9;
        }
      }
      ++v2;
      this->m_SystemDict.m_Vector.m_Memory.m_pMemory[v7] = v3++;
    }
    while ( v3 != m_Size );
  }
}


// CAppSystemDict::ReplaceSystem  (line 674, @0x000000000306c240, libserver.so)  // inlines: AddToTail, CUtlVector, CUtlVectorBase, CopyConstruct<CAppSystemDict::AppSystemRequest_t>, Element, Find, GrowMemory, LeafCodeInfo_t, Purge, RemoveAll, memset, operator const UtlSymId_t, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::Find, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory, CAppSystemDict::LoadSystemAndDependencies, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge, CAppSystemDict::RemoveSystem, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "appsystemdict.cpp", "ReplaceSystem", "AppSystemDict: Cannot replace interface name %s if it's not a singleton!\n"
IAppSystem *__fastcall CAppSystemDict::ReplaceSystem(
        CAppSystemDict *const this,
        IAppSystem *pAppSystem,
        const char *pInterfaceName,
        bool bShutdownOldSystem)
{
  CAppSystemDict::AppSystemRequest_t *p_request; // r13
  int m_Size; // eax
  CAppSystemDict::AppSystemRequest_t *m_pMemory; // rax
  bool v11; // al
  IAppSystem *v12; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  CAppSystemDict::AppSystem_t *v18; // [rsp+0h] [rbp-A0h]
  IAppSystem *pOldSystem; // [rsp+8h] [rbp-98h]
  CUtlVector<CAppSystemDict::AppSystemRequest_t,CUtlMemory<CAppSystemDict::AppSystemRequest_t,int> > requests; // [rsp+10h] [rbp-90h] BYREF
  CAppSystemDict::AppSystemRequest_t request; // [rsp+30h] [rbp-70h] BYREF

  if ( pAppSystem == 0 )
    return 0;
  if ( (*(pAppSystem->_vptr_IAppSystem + 9))(pAppSystem) == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      request.m_pRequestingModuleName = "appsystemdict.cpp";
      request.m_pModuleName = "ReplaceSystem";
      LODWORD(request.m_pRequestingInterfaceName) = 681;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &request,
        "AppSystemDict: Cannot replace interface name %s if it's not a singleton!\n",
        pInterfaceName);
    }
    goto LABEL_21;
  }
  p_request = &request;
  CUtlSymbolTable::Find(&request, &this->m_SystemDict.m_SymbolTable, pInterfaceName);
  if ( LOWORD(request.m_pRequestingModuleName) != 0xFFFF )
  {
    v18 = &this->m_Systems.m_Memory.m_pMemory[this->m_SystemDict.m_Vector.m_Memory.m_pMemory[LOWORD(request.m_pRequestingModuleName)]];
    pOldSystem = v18->m_pSystem;
    if ( (*(pOldSystem->_vptr_IAppSystem + 9))(pOldSystem) == 0 )
    {
      while ( 1 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          request.m_pRequestingModuleName = "appsystemdict.cpp";
          request.m_pModuleName = "ReplaceSystem";
          LODWORD(request.m_pRequestingInterfaceName) = 694;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            p_request,
            "AppSystemDict: Cannot replace interface name %s if it's not a singleton!\n",
            pInterfaceName);
        }
LABEL_21:
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v16, v17, v14, v15) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
    }
    if ( bShutdownOldSystem )
    {
      CAppSystemDict::RemoveSystem(this, pOldSystem);
    }
    else
    {
      v18->m_bInvisible = 1;
      v18->m_pSystem = 0;
    }
  }
  memset(&request, 0, sizeof(request));
  request.m_pInterfaceName = pInterfaceName;
  request.m_pSystem = pAppSystem;
  requests.m_Size = 0;
  CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::CUtlMemory(&requests.m_Memory, 0, 64);
  m_Size = 0;
  if ( requests.m_Memory.m_nAllocationCount == 0 )
  {
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Grow(&requests.m_Memory, 1);
    m_Size = requests.m_Size;
  }
  requests.m_Size = m_Size + 1;
  m_pMemory = requests.m_Memory.m_pMemory;
  if ( requests.m_Memory.m_pMemory != 0 )
  {
    requests.m_Memory.m_pMemory->m_pRequestingModuleName = request.m_pRequestingModuleName;
    m_pMemory->m_pRequestingInterfaceName = request.m_pRequestingInterfaceName;
    m_pMemory->m_pModuleName = request.m_pModuleName;
    m_pMemory->m_pInterfaceName = request.m_pInterfaceName;
    m_pMemory->m_pSystem = request.m_pSystem;
    m_pMemory->m_hModule = request.m_hModule;
    m_pMemory->m_pModuleFactory = request.m_pModuleFactory;
  }
  v11 = CAppSystemDict::LoadSystemAndDependencies(this, &requests, ErrorResponse_t::QUIT_ON_ERROR);
  requests.m_Size = 0;
  v12 = 0;
  if ( v11 )
    v12 = pAppSystem;
  if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(&requests.m_Memory);
    if ( (requests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Purge(&requests.m_Memory);
  }
  return v12;
}


// CAppSystemDict::FindSystem  (line 729, @0x00000000030683e0, libserver.so)  // inlines: Find, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::Find
// callers: CTier1Application::FindSystem, AppSystemDictCreateInterfaceFn
void *__fastcall CAppSystemDict::FindSystem(CAppSystemDict *const this, const char *pSystemName)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  CAppSystemDict::AppSystem_t *v7; // rax
  void *result; // rax
  int v9; // eax
  unsigned __int64 v10; // rbx
  __int64 v11; // r14
  UtlSymId_t nId[24]; // [rsp+0h] [rbp-30h] BYREF

  CUtlSymbolTable::Find(nId, &this->m_SystemDict.m_SymbolTable, pSystemName);
  if ( nId[0] != 0xFFFF )
    return this->m_Systems.m_Memory.m_pMemory[this->m_SystemDict.m_Vector.m_Memory.m_pMemory[nId[0]]].m_pSystem;
  m_Size = this->m_Systems.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_8:
    v9 = this->m_NonAppSystemFactories.m_Size;
    if ( v9 <= 0 )
    {
      return 0;
    }
    else
    {
      v10 = 0;
      v11 = 8LL * (v9 - 1) + 8;
      while ( 1 )
      {
        result = this->m_NonAppSystemFactories.m_Memory.m_pMemory[v10 / 8](pSystemName, 0);
        if ( result != 0 )
          break;
        v10 += 8LL;
        if ( v10 == v11 )
          return 0;
      }
    }
  }
  else
  {
    v5 = 0;
    v6 = 8 * (5LL * (m_Size - 1) + 5);
    while ( 1 )
    {
      v7 = &this->m_Systems.m_Memory.m_pMemory[v5 / 0x28];
      if ( !v7->m_bInvisible )
      {
        result = (*(v7->m_pSystem->_vptr_IAppSystem + 2))(v7->m_pSystem, pSystemName);
        if ( result != 0 )
          break;
      }
      v5 += 40LL;
      if ( v5 == v6 )
        goto LABEL_8;
    }
  }
  return result;
}


// CAppSystemDict::AddNonAppSystemFactory  (line 768, @0x00000000030693f0, libserver.so)  // inlines: AddToTail, CopyConstruct<void* (*)(char const*, int*)>, Element, GrowMemory, operator[]
// calls: CUtlMemory<void* (*)(char const*, int*), int>::Grow
void __fastcall CAppSystemDict::AddNonAppSystemFactory(CAppSystemDict *const this, CreateInterfaceFn fn)
{
  __int64 m_Size; // r12
  int v5; // eax
  void *(**v6)(const char *, int *); // rax

  m_Size = this->m_NonAppSystemFactories.m_Size;
  v5 = this->m_NonAppSystemFactories.m_Size;
  if ( m_Size == this->m_NonAppSystemFactories.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<void * (*)(char const*,int *),int>::Grow(&this->m_NonAppSystemFactories.m_Memory, 1);
    v5 = this->m_NonAppSystemFactories.m_Size;
  }
  this->m_NonAppSystemFactories.m_Size = v5 + 1;
  v6 = &this->m_NonAppSystemFactories.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = fn;
}


// CAppSystemDict::RemoveNonAppSystemFactory  (line 777, @0x0000000003068530, libserver.so)  // inlines: Element, Find, FindAndRemove, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
void __fastcall CAppSystemDict::RemoveNonAppSystemFactory(CAppSystemDict *const this, CreateInterfaceFn fn)
{
  int m_Size; // ecx
  void *(**m_pMemory)(const char *, int *); // rdi
  void *(**v5)(const char *, int *); // rdx
  int v6; // eax

  m_Size = this->m_NonAppSystemFactories.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_NonAppSystemFactories.m_Memory.m_pMemory;
    if ( *m_pMemory == fn )
    {
      v6 = 0;
LABEL_8:
      if ( m_Size - v6 - 1 > 0 )
      {
        memmove(&m_pMemory[v6], &m_pMemory[v6 + 1], 8LL * (m_Size - v6 - 1));
        m_Size = this->m_NonAppSystemFactories.m_Size;
      }
      this->m_NonAppSystemFactories.m_Size = m_Size - 1;
    }
    else
    {
      v5 = m_pMemory + 1;
      v6 = 0;
      while ( ++v6 != m_Size )
      {
        if ( *v5++ == fn )
        {
          if ( v6 == -1 )
            return;
          goto LABEL_8;
        }
      }
    }
  }
}


// CAppSystemDict::ReconnectSystems  (line 786, @0x00000000030685c0, libserver.so)
// globals: AppSystemDictCreateInterfaceFn(char const*,int *)
void __fastcall CAppSystemDict::ReconnectSystems(CAppSystemDict *const this, const char *pInterfaceName)
{
  __int64 v4; // r12
  int i; // ebx
  IAppSystem *m_pSystem; // rdi

  v4 = 0;
  for ( i = 0; this->m_Systems.m_Size > i; ++i )
  {
    m_pSystem = this->m_Systems.m_Memory.m_pMemory[v4++].m_pSystem;
    (*(m_pSystem->_vptr_IAppSystem + 8))(m_pSystem, AppSystemDictCreateInterfaceFn, pInterfaceName);
  }
}


// CAppSystemDict::ComputeDependencies  (line 800, @0x0000000003068610, libserver.so)  // inlines: Find, GetNumStrings, String, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::String, CUtlSymbolTable::Find, V_stricmp_fast, Warning, CUtlSymbolTable::AddString
// callers: CAppSystemDict::LoadSystemAndDependencies
// strings: "Encountered a circular dependency with library %s!\n"
void __fastcall CAppSystemDict::ComputeDependencies(
        CAppSystemDict *const this,
        CAppSystemDict::LibraryDependencies_t *const depend)
{
  int m_NumElements; // eax
  unsigned __int64 v4; // r13
  CAppSystemDict::InterfaceInfo_t *m_pMemory; // rax
  char *v6; // rax
  CAppSystemDict::InterfaceInfo_t *v7; // rax
  int v8; // edx
  int v9; // r12d
  char *v10; // rbx
  char *v11; // rax
  __int64 v12; // [rsp+0h] [rbp-A0h]
  bool bDone; // [rsp+17h] [rbp-89h]
  UtlSymId_t i; // [rsp+20h] [rbp-80h]
  int nDependentCount; // [rsp+24h] [rbp-7Ch]
  const CUtlSymbolTable *p_m_SymbolTable; // [rsp+28h] [rbp-78h]
  int j; // [rsp+30h] [rbp-70h]
  int v18; // [rsp+34h] [rbp-6Ch]
  __int64 m_Id; // [rsp+38h] [rbp-68h]
  unsigned __int16 v20[8]; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int16 v21[8]; // [rsp+50h] [rbp-50h] BYREF
  CUtlSymbol v22; // [rsp+60h] [rbp-40h] BYREF

  p_m_SymbolTable = &depend->m_SymbolTable;
  do
  {
    m_NumElements = depend->m_SymbolTable.m_Lookup.m_NumElements;
    if ( m_NumElements == 0 )
      return;
    v4 = 0;
    i = 0;
    bDone = 1;
    v12 = 120 * ((m_NumElements - 1) + 1LL);
    do
    {
      m_pMemory = depend->m_Vector.m_Memory.m_pMemory;
      nDependentCount = m_pMemory[v4 / 0x78].m_Dependencies.m_Lookup.m_NumElements;
      if ( m_pMemory[v4 / 0x78].m_Dependencies.m_Lookup.m_NumElements != 0 )
      {
        j = 0;
        while ( 1 )
        {
          v21[0] = j;
          v6 = CUtlSymbolTable::String(&m_pMemory[v4 / 0x78].m_Dependencies, v21);
          CUtlSymbolTable::Find(&v22.m_Id, p_m_SymbolTable, v6);
          if ( v22.m_Id != 0xFFFF )
          {
            v7 = depend->m_Vector.m_Memory.m_pMemory;
            m_Id = v22.m_Id;
            v8 = v7[m_Id].m_Dependencies.m_Lookup.m_NumElements;
            if ( v8 != 0 )
              break;
          }
LABEL_14:
          if ( nDependentCount <= ++j )
            goto LABEL_17;
          m_pMemory = depend->m_Vector.m_Memory.m_pMemory;
        }
        v9 = 0;
        v18 = v8 - 1;
        while ( 1 )
        {
          v22.m_Id = v9;
          v10 = CUtlSymbolTable::String(&v7[m_Id].m_Dependencies, &v22.m_Id);
          CUtlSymbolTable::Find(&v22.m_Id, &depend->m_Vector.m_Memory.m_pMemory[v4 / 0x78].m_Dependencies, v10);
          if ( v22.m_Id != 0xFFFF )
            goto LABEL_9;
          v22.m_Id = i;
          v11 = CUtlSymbolTable::String(p_m_SymbolTable, &v22.m_Id);
          if ( V_stricmp_fast(v10, v11) != 0 )
            break;
          Warning("Encountered a circular dependency with library %s!\n", v10);
          if ( v9 == v18 )
            goto LABEL_14;
LABEL_10:
          v7 = depend->m_Vector.m_Memory.m_pMemory;
          ++v9;
        }
        CUtlSymbolTable::AddString(v20, &depend->m_Vector.m_Memory.m_pMemory[v4 / 0x78].m_Dependencies, v10);
        bDone = 0;
        nDependentCount = depend->m_Vector.m_Memory.m_pMemory[v4 / 0x78].m_Dependencies.m_Lookup.m_NumElements;
LABEL_9:
        if ( v9 == v18 )
          goto LABEL_14;
        goto LABEL_10;
      }
LABEL_17:
      ++i;
      v4 += 120LL;
    }
    while ( v4 != v12 );
  }
  while ( !bDone );
}


// CAppSystemDict::DictSortLessFunc  (line 847, @0x0000000003069920, libserver.so)  // inlines: AddMultipleToTail, Construct<CAppSystemDict::InterfaceInfo_t>, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, InterfaceInfo_t, LeafCodeInfo_t, String, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::String, CUtlSymbolTable::AddString, CUtlSymbolTable::Find, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::Grow, CUtlSymbolTable::CUtlSymbolTable, LoggingSystem_IsChannelEnabled, CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[], LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CAppSystemDict::SortDependentLibraries
// strings: "appsystemdict.cpp", "DictSortLessFunc", "AppSystemDict: Interface '%s' (tier %d) depends on interface '%s' (tier %d) but is in a l
bool __fastcall CAppSystemDict::DictSortLessFunc(
        CAppSystemDict::LibraryDependencies_t *const depend,
        const int *const left,
        const int *const right)
{
  CUtlSymbolTable *p_m_SymbolTable; // r13
  char *v6; // r15
  char *v7; // r14
  int m_szFile_low; // r9d
  __int64 m_Size; // r8
  int v10; // eax
  CAppSystemDict::InterfaceInfo_t *m_pMemory; // rax
  int v12; // r9d
  __int64 v13; // r8
  int v14; // eax
  CAppSystemDict::InterfaceInfo_t *v15; // rax
  unsigned __int16 v16; // r13
  __int64 v17; // r8
  int v18; // eax
  CAppSystemDict::InterfaceInfo_t *v19; // rax
  int m_nAllocationCount; // edx
  int v22; // r10d
  __int64 v23; // r8
  unsigned __int16 m_szFile; // r15
  __int64 v25; // r8
  int v26; // eax
  CAppSystemDict::InterfaceInfo_t *v27; // rax
  AppSystemTier_t m_Tier; // r15d
  unsigned __int16 v29; // r14
  __int64 v30; // r12
  int v31; // r13d
  CAppSystemDict::InterfaceInfo_t *v32; // rax
  int v33; // edx
  int v34; // r10d
  __int64 v35; // r8
  int v36; // edx
  int v37; // r10d
  __int64 v38; // r8
  int v39; // edx
  int v40; // r10d
  __int64 v41; // r8
  int v42; // edx
  int v43; // r13d
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  AppSystemTier_t v49; // r13d
  AppSystemTier_t v50; // r9d
  int v51; // [rsp+18h] [rbp-68h]
  __int64 v52; // [rsp+18h] [rbp-68h]
  int v53; // [rsp+18h] [rbp-68h]
  __int64 v54; // [rsp+18h] [rbp-68h]
  int v55; // [rsp+18h] [rbp-68h]
  int v56; // [rsp+18h] [rbp-68h]
  int v57; // [rsp+18h] [rbp-68h]
  int v58; // [rsp+20h] [rbp-60h]
  int v59; // [rsp+20h] [rbp-60h]
  int v60; // [rsp+20h] [rbp-60h]
  __int64 v61; // [rsp+20h] [rbp-60h]
  int v62; // [rsp+20h] [rbp-60h]
  int v63; // [rsp+20h] [rbp-60h]
  int v64; // [rsp+20h] [rbp-60h]
  __int64 v65; // [rsp+20h] [rbp-60h]
  int v66; // [rsp+28h] [rbp-58h]
  int v67; // [rsp+28h] [rbp-58h]
  int v68; // [rsp+28h] [rbp-58h]
  AppSystemTier_t v69; // [rsp+2Ch] [rbp-54h]
  int v70; // [rsp+2Ch] [rbp-54h]
  int v71; // [rsp+2Ch] [rbp-54h]
  int v72; // [rsp+2Ch] [rbp-54h]
  int v73; // [rsp+2Ch] [rbp-54h]
  int v74; // [rsp+2Ch] [rbp-54h]
  int v75; // [rsp+2Ch] [rbp-54h]
  int v76; // [rsp+2Ch] [rbp-54h]
  LeafCodeInfo_t id[3]; // [rsp+30h] [rbp-50h] BYREF

  p_m_SymbolTable = &depend->m_SymbolTable;
  LOWORD(id[0].m_szFile) = *left;
  v6 = CUtlSymbolTable::String(&depend->m_SymbolTable, id);
  LOWORD(id[0].m_szFile) = *right;
  v7 = CUtlSymbolTable::String(p_m_SymbolTable, id);
  CUtlSymbolTable::AddString(id, p_m_SymbolTable, v7);
  m_szFile_low = LOWORD(id[0].m_szFile);
  m_Size = depend->m_Vector.m_Size;
  if ( LOWORD(id[0].m_szFile) < m_Size
    || (v10 = LOWORD(id[0].m_szFile) + 1, m_Size >= v10)
    || (v66 = v10 - m_Size, v10 == m_Size) )
  {
    m_pMemory = depend->m_Vector.m_Memory.m_pMemory;
  }
  else
  {
    m_nAllocationCount = depend->m_Vector.m_Memory.m_nAllocationCount;
    if ( v10 > m_nAllocationCount )
    {
      v51 = depend->m_Vector.m_Size;
      v58 = LOWORD(id[0].m_szFile);
      v70 = LOWORD(id[0].m_szFile) + 1;
      CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>::Grow(&depend->m_Vector.m_Memory, v10 - m_nAllocationCount);
      m_Size = v51;
      m_szFile_low = v58;
      v10 = v70;
    }
    depend->m_Vector.m_Size = v10;
    m_pMemory = depend->m_Vector.m_Memory.m_pMemory;
    if ( v66 > 0 )
    {
      v22 = 0;
      v23 = 120 * m_Size;
      do
      {
        if ( (m_pMemory + v23) != 0 )
        {
          v52 = v23;
          v59 = v22;
          v71 = m_szFile_low;
          CUtlSymbolTable::CUtlSymbolTable((&m_pMemory->m_Dependencies + v23), 0, 16, 0);
          m_pMemory = depend->m_Vector.m_Memory.m_pMemory;
          v23 = v52;
          v22 = v59;
          m_szFile_low = v71;
        }
        ++v22;
        v23 += 120;
      }
      while ( v66 > v22 );
    }
  }
  CUtlSymbolTable::Find(id, &m_pMemory[m_szFile_low].m_Dependencies, v6);
  if ( LOWORD(id[0].m_szFile) == 0xFFFF )
  {
    CUtlSymbolTable::AddString(id, p_m_SymbolTable, v6);
    m_szFile = id[0].m_szFile;
    v25 = depend->m_Vector.m_Size;
    if ( LOWORD(id[0].m_szFile) < v25 || (v26 = LOWORD(id[0].m_szFile) + 1, v25 >= v26) || (v53 = v26 - v25, v26 == v25) )
    {
      v27 = depend->m_Vector.m_Memory.m_pMemory;
    }
    else
    {
      v39 = depend->m_Vector.m_Memory.m_nAllocationCount;
      if ( v26 > v39 )
      {
        v64 = depend->m_Vector.m_Size;
        v75 = LOWORD(id[0].m_szFile) + 1;
        CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>::Grow(&depend->m_Vector.m_Memory, v26 - v39);
        v25 = v64;
        v26 = v75;
      }
      depend->m_Vector.m_Size = v26;
      v27 = depend->m_Vector.m_Memory.m_pMemory;
      if ( v53 > 0 )
      {
        v40 = 0;
        v41 = 120 * v25;
        do
        {
          if ( (v27 + v41) != 0 )
          {
            v65 = v41;
            v76 = v40;
            CUtlSymbolTable::CUtlSymbolTable((&v27->m_Dependencies + v41), 0, 16, 0);
            v27 = depend->m_Vector.m_Memory.m_pMemory;
            v41 = v65;
            v40 = v76;
          }
          ++v40;
          v41 += 120;
        }
        while ( v53 > v40 );
      }
    }
    m_Tier = v27[m_szFile].m_Tier;
    CUtlSymbolTable::AddString(id, p_m_SymbolTable, v7);
    v29 = id[0].m_szFile;
    v30 = depend->m_Vector.m_Size;
    if ( LOWORD(id[0].m_szFile) < v30 || (v31 = LOWORD(id[0].m_szFile) + 1, v30 >= v31) || (v72 = v31 - v30, v31 == v30) )
    {
      v32 = depend->m_Vector.m_Memory.m_pMemory;
    }
    else
    {
      v42 = depend->m_Vector.m_Memory.m_nAllocationCount;
      if ( v31 > v42 )
        CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>::Grow(&depend->m_Vector.m_Memory, v31 - v42);
      depend->m_Vector.m_Size = v31;
      v32 = depend->m_Vector.m_Memory.m_pMemory;
      if ( v72 > 0 )
      {
        v43 = 0;
        v44 = v30;
        do
        {
          if ( &v32[v44] != 0 )
          {
            CUtlSymbolTable::CUtlSymbolTable(&v32[v44].m_Dependencies, 0, 16, 0);
            v32 = depend->m_Vector.m_Memory.m_pMemory;
          }
          ++v43;
          ++v44;
        }
        while ( v72 > v43 );
      }
    }
    return m_Tier < v32[v29].m_Tier;
  }
  else
  {
    CUtlSymbolTable::AddString(id, p_m_SymbolTable, v7);
    v12 = LOWORD(id[0].m_szFile);
    v13 = depend->m_Vector.m_Size;
    if ( LOWORD(id[0].m_szFile) < v13 || (v14 = LOWORD(id[0].m_szFile) + 1, v13 >= v14) || (v67 = v14 - v13, v14 == v13) )
    {
      v15 = depend->m_Vector.m_Memory.m_pMemory;
    }
    else
    {
      v33 = depend->m_Vector.m_Memory.m_nAllocationCount;
      if ( v14 > v33 )
      {
        v57 = depend->m_Vector.m_Size;
        v63 = LOWORD(id[0].m_szFile);
        v74 = LOWORD(id[0].m_szFile) + 1;
        CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>::Grow(&depend->m_Vector.m_Memory, v14 - v33);
        v13 = v57;
        v12 = v63;
        v14 = v74;
      }
      depend->m_Vector.m_Size = v14;
      v15 = depend->m_Vector.m_Memory.m_pMemory;
      if ( v67 > 0 )
      {
        v34 = 0;
        v35 = 120 * v13;
        do
        {
          if ( (v15 + v35) != 0 )
          {
            v54 = v35;
            v60 = v34;
            v73 = v12;
            CUtlSymbolTable::CUtlSymbolTable((&v15->m_Dependencies + v35), 0, 16, 0);
            v15 = depend->m_Vector.m_Memory.m_pMemory;
            v35 = v54;
            v34 = v60;
            v12 = v73;
          }
          ++v34;
          v35 += 120;
        }
        while ( v67 > v34 );
      }
    }
    v69 = v15[v12].m_Tier;
    CUtlSymbolTable::AddString(id, p_m_SymbolTable, v6);
    v16 = id[0].m_szFile;
    v17 = depend->m_Vector.m_Size;
    if ( LOWORD(id[0].m_szFile) < v17 || (v18 = LOWORD(id[0].m_szFile) + 1, v17 >= v18) || (v68 = v18 - v17, v18 == v17) )
    {
      v19 = depend->m_Vector.m_Memory.m_pMemory;
    }
    else
    {
      v36 = depend->m_Vector.m_Memory.m_nAllocationCount;
      if ( v18 > v36 )
      {
        v56 = depend->m_Vector.m_Size;
        v62 = LOWORD(id[0].m_szFile) + 1;
        CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>::Grow(&depend->m_Vector.m_Memory, v18 - v36);
        v17 = v56;
        v18 = v62;
      }
      depend->m_Vector.m_Size = v18;
      v19 = depend->m_Vector.m_Memory.m_pMemory;
      if ( v68 > 0 )
      {
        v37 = 0;
        v38 = 120 * v17;
        do
        {
          if ( (v19 + v38) != 0 )
          {
            v55 = v37;
            v61 = v38;
            CUtlSymbolTable::CUtlSymbolTable((&v19->m_Dependencies + v38), 0, 16, 0);
            v19 = depend->m_Vector.m_Memory.m_pMemory;
            v37 = v55;
            v38 = v61;
          }
          ++v37;
          v38 += 120;
        }
        while ( v68 > v37 );
      }
    }
    if ( v69 < v19[v16].m_Tier )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v49 = CUtlStringMap<CAppSystemDict::InterfaceInfo_t,CUtlSymbolTable>::operator[](depend, v6)->m_Tier;
        v50 = CUtlStringMap<CAppSystemDict::InterfaceInfo_t,CUtlSymbolTable>::operator[](depend, v7)->m_Tier;
        id[0].m_szFile = "appsystemdict.cpp";
        id[0].m_szFunction = "DictSortLessFunc";
        id[0].m_nLine = 857;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          id,
          "AppSystemDict: Interface '%s' (tier %d) depends on interface '%s' (tier %d) but is in a lower tier!\n",
          v7,
          v50,
          v6,
          v49);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v47, v48, v45, v46) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
      JUMPOUT(0x3069F02);
    }
    return 1;
  }
}


// CAppSystemDict::SortDependentLibraries  (line 869, @0x0000000003069f10, libserver.so)  // inlines: AddMultipleToTail, Construct<CAppSystemDict::InterfaceInfo_t>, EnsureCount, GetNumStrings, GrowMemory, GrowVector, InsertMultipleBefore, InterfaceInfo_t, String, V_swap<int>, operator const UtlSymId_t, operator[]
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CAppSystemDict::DictSortLessFunc, CUtlSymbolTable::String, CUtlSymbolTable::AddString, CUtlSymbolTable::Find, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::Grow, CUtlSymbolTable::CUtlSymbolTable
// callers: CAppSystemDict::LoadSystemAndDependencies
void __fastcall CAppSystemDict::SortDependentLibraries(
        CAppSystemDict *const this,
        CAppSystemDict::LibraryDependencies_t *const depend,
        CUtlVector<int,CUtlMemory<int,int> > *pOutIndicies)
{
  int m_NumElements; // ebx
  __int64 v6; // rax
  int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // r15
  int *m_pMemory; // rdx
  int v11; // esi
  CUtlSymbol *p_id; // r12
  __int64 v13; // rbx
  int *v14; // rax
  __int64 v15; // r13
  int v16; // edx
  char *v17; // rax
  UtlSymId_t m_Id; // r10
  __int64 m_Size; // rax
  int v20; // edx
  CAppSystemDict::InterfaceInfo_t *v21; // rdx
  int *v22; // rax
  int *v23; // rbx
  int *v24; // rax
  int v25; // edx
  int m_nAllocationCount; // ecx
  int v27; // r13d
  __int64 v28; // r12
  int v29; // ebx
  CUtlVectorBase<CAppSystemDict::InterfaceInfo_t,CUtlMemory<CAppSystemDict::InterfaceInfo_t,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-88h]
  int v31; // [rsp+10h] [rbp-80h]
  CUtlSymbol *v32; // [rsp+10h] [rbp-80h]
  int v33; // [rsp+18h] [rbp-78h]
  __int64 v34; // [rsp+18h] [rbp-78h]
  CAppSystemDict::LibraryDependencies_t *dependa; // [rsp+20h] [rbp-70h]
  UtlSymId_t v36; // [rsp+28h] [rbp-68h]
  UtlSymId_t v37; // [rsp+28h] [rbp-68h]
  bool bDone; // [rsp+2Fh] [rbp-61h]
  UtlSymId_t nRightb; // [rsp+30h] [rbp-60h]
  int nRight; // [rsp+30h] [rbp-60h]
  __int64 nRighta; // [rsp+30h] [rbp-60h]
  char *pLeftInterface; // [rsp+38h] [rbp-58h]
  int nCount; // [rsp+40h] [rbp-50h]
  CUtlSymbolTable *nCounta; // [rsp+40h] [rbp-50h]
  __int64 bChanged; // [rsp+48h] [rbp-48h]
  char bChangeda; // [rsp+48h] [rbp-48h]
  CUtlSymbol id; // [rsp+50h] [rbp-40h] BYREF

  m_NumElements = depend->m_SymbolTable.m_Lookup.m_NumElements;
  nCount = m_NumElements;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(pOutIndicies, m_NumElements);
  if ( m_NumElements != 0 )
  {
    v6 = 0;
    do
    {
      pOutIndicies->m_Memory.m_pMemory[v6] = v6;
      ++v6;
    }
    while ( m_NumElements > v6 );
    if ( m_NumElements > 1 )
    {
      do
      {
        v8 = 1;
        v7 = 1;
        bChangeda = 0;
        do
        {
          v9 = 0;
          do
          {
            if ( CAppSystemDict::DictSortLessFunc(
                   depend,
                   &pOutIndicies->m_Memory.m_pMemory[v8],
                   &pOutIndicies->m_Memory.m_pMemory[v9]) )
            {
              m_pMemory = pOutIndicies->m_Memory.m_pMemory;
              bChangeda = 1;
              v11 = m_pMemory[v8];
              m_pMemory[v8] = m_pMemory[v9];
              pOutIndicies->m_Memory.m_pMemory[v9] = v11;
            }
            ++v9;
          }
          while ( v7 > v9 );
          ++v7;
          ++v8;
        }
        while ( v7 < nCount );
      }
      while ( bChangeda != 0 );
    }
  }
  bChanged = 4LL * (nCount - 2) + 4;
  if ( nCount > 1 )
  {
    dependa = depend;
    nCounta = &depend->m_SymbolTable;
    p_m_Memory = &depend->m_Vector.m_Memory;
    p_id = &id;
    do
    {
      v13 = 0;
      bDone = 1;
      while ( 1 )
      {
        v14 = pOutIndicies->m_Memory.m_pMemory;
        v15 = v13 + 4;
        v16 = *(v14 + v13 + 4);
        if ( *(v14 + v13) >= v16 )
        {
          id.m_Id = *(v14 + v13);
          nRightb = v16;
          pLeftInterface = CUtlSymbolTable::String(nCounta, &p_id->m_Id);
          id.m_Id = nRightb;
          v17 = CUtlSymbolTable::String(nCounta, &p_id->m_Id);
          CUtlSymbolTable::AddString(&p_id->m_Id, nCounta, v17);
          m_Id = id.m_Id;
          m_Size = dependa->m_Vector.m_Size;
          if ( id.m_Id < m_Size || (v20 = id.m_Id + 1, m_Size >= v20) || (nRight = v20 - m_Size, v20 == m_Size) )
          {
            v21 = dependa->m_Vector.m_Memory.m_pMemory;
          }
          else
          {
            m_nAllocationCount = dependa->m_Vector.m_Memory.m_nAllocationCount;
            if ( v20 > m_nAllocationCount )
            {
              v31 = dependa->m_Vector.m_Size;
              v36 = id.m_Id;
              v33 = id.m_Id + 1;
              CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>::Grow(p_m_Memory, v20 - m_nAllocationCount);
              m_Size = v31;
              m_Id = v36;
              v20 = v33;
            }
            dependa->m_Vector.m_Size = v20;
            v21 = dependa->m_Vector.m_Memory.m_pMemory;
            if ( nRight > 0 )
            {
              v34 = v13 + 4;
              v27 = nRight;
              v32 = p_id;
              v28 = m_Size;
              nRighta = v13;
              v29 = 0;
              v37 = m_Id;
              do
              {
                if ( &v21[v28] != 0 )
                {
                  CUtlSymbolTable::CUtlSymbolTable(&v21[v28].m_Dependencies, 0, 16, 0);
                  v21 = dependa->m_Vector.m_Memory.m_pMemory;
                }
                ++v29;
                ++v28;
              }
              while ( v27 > v29 );
              v15 = v34;
              m_Id = v37;
              v13 = nRighta;
              p_id = v32;
            }
          }
          CUtlSymbolTable::Find(&p_id->m_Id, &v21[m_Id].m_Dependencies, pLeftInterface);
          if ( id.m_Id == 0xFFFF )
            break;
        }
        if ( v15 == bChanged )
          goto LABEL_24;
LABEL_17:
        v13 = v15;
      }
      v22 = pOutIndicies->m_Memory.m_pMemory;
      bDone = 0;
      v23 = (v22 + v13);
      v24 = (v22 + v15);
      v25 = *v24;
      *v24 = *v23;
      *v23 = v25;
      if ( v15 != bChanged )
        goto LABEL_17;
LABEL_24:
      ;
    }
    while ( !bDone );
  }
}


// CAppSystemDict::GenerateModuleFullPath  (line 931, @0x0000000003068830, libserver.so)  // inlines: V_ComposeFileName<long unsigned int>, V_DefaultExtension<int>, V_FixupPathName<int>, V_StripExtension<int>, V_strncat<int>, V_strncpy<int>
// calls: _V_strncpy, _V_strncat, _V_ComposeFileName, _V_FixupPathName, _V_StripExtension, _V_DefaultExtension, __stack_chk_fail
// callers: CAppSystemDict::LoadModuleInPath
void __fastcall CAppSystemDict::GenerateModuleFullPath(
        CAppSystemDict *const this,
        const char *pBasePath,
        const char *pModuleName,
        char *pOutName,
        int nOutNameLen)
{
  char pFullPath[512]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v10; // [rsp+208h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  _V_strncpy(pOutName, "lib", nOutNameLen);
  _V_strncat(pOutName, pModuleName, nOutNameLen, 0xFFFFFFFFLL);
  _V_ComposeFileName(pBasePath, pOutName, pFullPath, 512);
  _V_FixupPathName(pOutName, nOutNameLen, pFullPath, 0);
  _V_StripExtension(pOutName, pOutName, nOutNameLen);
  _V_strncat(pOutName, "", nOutNameLen, 0xFFFFFFFFLL);
  _V_DefaultExtension(pOutName, ".so", nOutNameLen);
}


// CAppSystemDict::LoadModuleInPath  (line 948, @0x0000000003069450, libserver.so)  // inlines: AddToTail, End, GetMillisecondsF, GrowMemory, MemAlloc_StrDupFunc, Sample, Start, V_StripExtension<long unsigned int>, V_strncpy<long unsigned int>, operator[], strcpy
// calls: _V_StripExtension, RemapBundledModuleName, _V_strncpy, V_stricmp_fast, Plat_RelativeTicks, CUtlString::Get, CAppSystemDict::GenerateModuleFullPath, Plat_FileExists, Plat_LoadModuleRaw, strcpy, Plat_TickDiffMilliSecF, COM_TimestampedLog (15 total)
// callers: CAppSystemDict::LoadSystemAndDependencies
// strings: "CAppSystemDict::LoadModuleInPath( %-23s ) %8.3f msec"
PlatModule_t __fastcall CAppSystemDict::LoadModuleInPath(
        CAppSystemDict *const this,
        const char *pModuleName,
        int *pLoadError)
{
  int *p_nLocalErr; // r13
  const char *v6; // rax
  int m_Size; // eax
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __int64 v11; // rax
  const char *v12; // rax
  int v13; // eax
  unsigned __int64 v14; // r15
  __int64 v15; // r12
  int v16; // eax
  CAppSystemDict::ModuleInfo_t *m_pMemory; // rdx
  _PlatModule_t *v18; // rcx
  __int64 v19; // rax
  CAppSystemDict::ModuleInfo_t *v20; // r12
  char *v21; // rax
  __int64 v22; // rax
  double v23; // xmm0_8
  _PlatModule_t *Module; // rax
  CRelativeTickTimer timer; // [rsp+8h] [rbp-378h]
  const char *pRemap; // [rsp+10h] [rbp-370h]
  __int64 v27; // [rsp+18h] [rbp-368h]
  int nLocalErr; // [rsp+24h] [rbp-35Ch] BYREF
  PlatModule_t hModule; // [rsp+28h] [rbp-358h] BYREF
  char pModuleBuf[272]; // [rsp+30h] [rbp-350h] BYREF
  char pFullPathFixed[520]; // [rsp+140h] [rbp-240h] BYREF
  unsigned __int64 v32; // [rsp+348h] [rbp-38h]

  p_nLocalErr = pLoadError;
  v32 = __readfsqword(0x28u);
  if ( pLoadError == 0 )
    p_nLocalErr = &nLocalErr;
  *p_nLocalErr = 0;
  _V_StripExtension(pModuleName, pModuleBuf, 260);
  v6 = RemapBundledModuleName(pModuleName);
  pRemap = v6;
  if ( pModuleName != v6 )
    _V_strncpy(pModuleBuf, v6, 260);
  m_Size = this->m_modules.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_10:
    v11 = Plat_RelativeTicks();
    hModule = 0;
    timer.m_Duration.m_Int64 = v11;
    v12 = CUtlString::Get(&this->m_ExecutablePath);
    CAppSystemDict::GenerateModuleFullPath(this, v12, pModuleBuf, pFullPathFixed, 512);
    if ( Plat_FileExists(pFullPathFixed) == 0 )
    {
      v13 = this->m_ModuleSearchPath.m_Size;
      if ( v13 <= 0 )
      {
LABEL_17:
        Module = Plat_LoadModule(pRemap, p_nLocalErr);
        v15 = this->m_modules.m_Size;
        hModule = Module;
        v16 = v15;
        if ( v15 != this->m_modules.m_Memory.m_nAllocationCount )
          goto LABEL_16;
        goto LABEL_18;
      }
      v14 = 0;
      v27 = 8LL * (v13 - 1) + 8;
      while ( 1 )
      {
        CAppSystemDict::GenerateModuleFullPath(
          this,
          this->m_ModuleSearchPath.m_Memory.m_pMemory[v14 / 8],
          pModuleBuf,
          pFullPathFixed,
          512);
        if ( Plat_FileExists(pFullPathFixed) != 0 )
          break;
        v14 += 8LL;
        if ( v14 == v27 )
          goto LABEL_17;
      }
    }
    *p_nLocalErr = Plat_LoadModuleRaw(pFullPathFixed, &hModule);
    v15 = this->m_modules.m_Size;
    v16 = this->m_modules.m_Size;
    if ( v15 != this->m_modules.m_Memory.m_nAllocationCount )
    {
LABEL_16:
      m_pMemory = this->m_modules.m_Memory.m_pMemory;
      this->m_modules.m_Size = v16 + 1;
      v18 = hModule;
      v19 = v15;
      m_pMemory[v19].m_nRefCount = 1;
      this->m_modules.m_Memory.m_pMemory[v19].m_hModule = v18;
      v20 = &this->m_modules.m_Memory.m_pMemory[v15];
      v21 = (**g_pMemAlloc)(g_pMemAlloc, strlen(pModuleBuf) + 1);
      v20->m_pModuleName = strcpy(v21, pModuleBuf);
      v22 = Plat_RelativeTicks();
      Plat_TickDiffMilliSecF(0, v22 - timer.m_Duration.m_Int64);
      COM_TimestampedLog("CAppSystemDict::LoadModuleInPath( %-23s ) %8.3f msec", pRemap, v23);
      return hModule;
    }
LABEL_18:
    CUtlMemory<CAppSystemDict::ModuleInfo_t,int>::Grow(&this->m_modules.m_Memory, 1);
    v16 = this->m_modules.m_Size;
    goto LABEL_16;
  }
  v8 = 0;
  v9 = 8 * (3LL * (m_Size - 1) + 3);
  while ( V_stricmp_fast(pModuleBuf, this->m_modules.m_Memory.m_pMemory[v8 / 0x18].m_pModuleName) != 0 )
  {
    v8 += 24LL;
    if ( v8 == v9 )
      goto LABEL_10;
  }
  ++this->m_modules.m_Memory.m_pMemory[v8 / 0x18].m_nRefCount;
  return this->m_modules.m_Memory.m_pMemory[v8 / 0x18].m_hModule;
}


// CAppSystemDict::UnloadModule  (line 1025, @0x0000000003068910, libserver.so)  // inlines: Element, FastRemove, memcpy, operator[]
// calls: Plat_UnloadModule
// callers: CAppSystemDict::FreeSystemEntry
void __fastcall CAppSystemDict::UnloadModule(CAppSystemDict *const this, PlatModule_t hModule)
{
  int m_Size; // ecx
  CAppSystemDict::ModuleInfo_t *m_pMemory; // rdx
  int v5; // ebx
  signed __int64 v6; // r12
  CAppSystemDict::ModuleInfo_t *v7; // rax
  CAppSystemDict::ModuleInfo_t *v8; // r8
  CAppSystemDict::ModuleInfo_t *v9; // r12
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  CAppSystemDict::ModuleInfo_t *v14; // rdx
  CAppSystemDict::ModuleInfo_t *v15; // rax
  char **v16; // r12

  m_Size = this->m_modules.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_modules.m_Memory.m_pMemory;
    v5 = 0;
    v6 = 0;
    v7 = m_pMemory + 1;
    v8 = m_pMemory;
    if ( m_pMemory->m_hModule == hModule )
    {
LABEL_7:
      v10 = v8->m_nRefCount - 1;
      v11 = v8->m_nRefCount == 1;
      v8->m_nRefCount = v10;
      if ( v10 < 0 || v11 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(&this->m_modules.m_Memory.m_pMemory->m_pModuleName + v6));
        Plat_UnloadModule(*(&this->m_modules.m_Memory.m_pMemory->m_hModule + v6));
        v12 = this->m_modules.m_Size;
        if ( v12 > 0 )
        {
          v13 = v12 - 1;
          if ( v5 != v13 )
          {
            v14 = this->m_modules.m_Memory.m_pMemory;
            v15 = &v14[v13];
            v16 = (&v14->m_pModuleName + v6);
            *v16 = v15->m_pModuleName;
            v16[1] = v15->m_hModule;
            v16[2] = *&v15->m_nRefCount;
            v13 = this->m_modules.m_Size - 1;
          }
          this->m_modules.m_Size = v13;
        }
      }
    }
    else
    {
      while ( ++v5 != m_Size )
      {
        v9 = v7;
        v8 = v7++;
        v6 = v9 - m_pMemory;
        if ( v7[-1].m_hModule == hModule )
          goto LABEL_7;
      }
    }
  }
}


// CAppSystemDict::LoadSystemAndDependencies  (line 1047, @0x000000000306a1c0, libserver.so)  // inlines: AddMultipleToTail, AddString, AddToTail, CUtlMemory, CUtlStringMap, CUtlVector, CUtlVectorBase, Construct<CAppSystemDict::InterfaceInfo_t>, CopyConstruct<CAppSystemDict::AppSystemRequest_t>, Defined, Destruct<CAppSystemDict::InterfaceInfo_t>, Element, End, EnsureCount, GetMillisecondsF, GrowMemory, GrowVector, InsertMultipleBefore, InterfaceInfo_t, LeafCodeInfo_t, MemAlloc_StrDupFunc, Purge, RemoveAll, Sample, Start, V_StripExtension<long unsigned int>, memset, operator const UtlSymId_t, operator[], strcpy, ~CUtlMemory, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase, ~InterfaceInfo_t
// calls: CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, AppSystemDictCreateInterfaceFn, CUtlSymbolTable::Find, CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[], CUtlSymbolTable::AddString, CUtlSymbolTable::~CUtlSymbolTable, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Grow, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::Grow, CAppSystemDict::ComputeDependencies, CAppSystemDict::SortDependentLibraries, _V_StripExtension (33 total)
// callers: CAppSystemDict::AddSystem, CAppSystemDict::AddSystems, CAppSystemDict::ReplaceSystem
// strings: "CAppSystemDict::Connect( %-32s ) %8.3f msec", "CAppSystemDict::Init   ( %-32s ) %8.3f msec", "AppSystemDict: Error in Init() of interface '%s'!\n", "AppSystemDict: Error in Connect() of interface '%s'!\n", "appsystemdict.cpp", "LoadSystemAndDependencies" (17 total)
// globals: AppSystemDictCreateInterfaceFn(char const*,int *)
bool __fastcall CAppSystemDict::LoadSystemAndDependencies(
        CAppSystemDict *const this,
        CUtlVector<CAppSystemDict::AppSystemRequest_t,CUtlMemory<CAppSystemDict::AppSystemRequest_t,int> > *const requests,
        ErrorResponse_t errResponse)
{
  __int64 v4; // r14
  CAppSystemDict::AppSystemRequest_t *v5; // r12
  IAppSystem *InterfaceFn; // rax
  IAppSystem *m_pSystem; // r15
  __int64 (__fastcall *m_pModuleFactory)(const char *, int *); // rax
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // edx
  CAppSystemDict::InterfaceInfo_t *v12; // r13
  __int64 v13; // rax
  const char **v14; // r12
  const char *j; // r13
  CAppSystemDict::InterfaceInfo_t *m_pMemory; // rax
  __int64 m_Size; // r13
  bool v18; // zf
  CAppSystemDict::AppSystemRequest_t *v19; // rax
  int v20; // edx
  CAppSystemDict::AppSystemRequest_t *v21; // r13
  int v22; // r15d
  __int64 v23; // rcx
  __int64 v24; // r15
  bool v25; // r12
  int v26; // eax
  __int64 v27; // rbx
  unsigned __int64 v28; // r13
  __int64 v29; // rdi
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // eax
  int v34; // r13d
  const char *v35; // r15
  char *v36; // rax
  const char *v37; // r14
  size_t v38; // rax
  char *v39; // rax
  int v40; // eax
  CAppSystemDict::AppSystem_t *v41; // r12
  CAppSystemDict::InterfaceInfo_t *v42; // rbx
  int m_nAppSystemPhase; // eax
  const char *v44; // rdi
  __int64 m_pRequestingModuleName_low; // rbx
  int v46; // eax
  int v47; // r12d
  int m_nAllocationCount; // eax
  int v49; // r15d
  __int64 v50; // rbx
  __int64 v51; // rax
  double v52; // xmm0_8
  IAppSystem *v53; // r12
  __int64 v54; // r13
  PlatModule_t m_hModule; // rdi
  char v56; // dl
  unsigned __int64 v57; // rbx
  IAppSystem *v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rax
  double v61; // xmm0_8
  IAppSystem *v62; // r12
  __int64 v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rsi
  int v68; // ebx
  int v69; // edx
  int v70; // ecx
  int v71; // esi
  int v72; // r8d
  int v73; // r9d
  PlatModule_t ModuleInPath; // rax
  const char *v75; // r8
  const char *v76; // rcx
  const char *v77; // rsi
  const char *v78; // rdx
  const char *v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  const char *v84; // r8
  const char *v85; // rsi
  const char *v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdi
  __int64 v90; // rsi
  const char *v91; // r9
  const char *v92; // r8
  const char *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rsi
  const char *v98; // rax
  const char *v99; // r8
  const char *v100; // r9
  const char *v101; // rdx
  const char *v102; // rcx
  const char *v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdi
  __int64 v107; // rsi
  const char *m_pRequestingInterfaceName; // rax
  const char *m_pInterfaceName; // r8
  const char *v110; // r9
  const char *m_pModuleName; // rdx
  __int64 v112; // [rsp+0h] [rbp-3D0h]
  int i_0; // [rsp+48h] [rbp-388h]
  int v115; // [rsp+58h] [rbp-378h]
  PlatModule_t hModule; // [rsp+60h] [rbp-370h]
  int hModulea; // [rsp+60h] [rbp-370h]
  int hModuleb; // [rsp+60h] [rbp-370h]
  const char *pModuleName; // [rsp+68h] [rbp-368h]
  unsigned __int16 pModuleNamea; // [rsp+68h] [rbp-368h]
  const char *pModuleNameb; // [rsp+68h] [rbp-368h]
  int i; // [rsp+70h] [rbp-360h]
  unsigned __int16 v124[8]; // [rsp+80h] [rbp-350h] BYREF
  unsigned __int16 v125[8]; // [rsp+90h] [rbp-340h] BYREF
  unsigned __int16 v126[8]; // [rsp+A0h] [rbp-330h] BYREF
  int nLoadError[4]; // [rsp+B0h] [rbp-320h] BYREF
  int retval; // [rsp+C0h] [rbp-310h] BYREF
  CUtlMemory<int,int> v129; // [rsp+C8h] [rbp-308h] BYREF
  CAppSystemDict::AppSystemRequest_t depRequest; // [rsp+E0h] [rbp-2F0h] BYREF
  CAppSystemDict::LibraryDependencies_t dependencies; // [rsp+120h] [rbp-2B0h] BYREF
  char pModuleBuf[520]; // [rsp+190h] [rbp-240h] BYREF
  unsigned __int64 v133; // [rsp+398h] [rbp-38h]

  v133 = __readfsqword(0x28u);
  dependencies.m_Vector.m_Size = 0;
  dependencies.m_Vector.m_Memory.m_pMemory = 0;
  dependencies.m_Vector.m_Memory.m_nAllocationCount = 32;
  dependencies.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize(this, requests);
  dependencies.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 3840);
  CUtlSymbolTable::CUtlSymbolTable(&dependencies.m_SymbolTable, 0, 32, 1);
  if ( requests->m_Size > 0 )
  {
    v4 = 0;
    i = 0;
    while ( 1 )
    {
      v5 = &requests->m_Memory.m_pMemory[v4];
      InterfaceFn = AppSystemDictCreateInterfaceFn(v5->m_pInterfaceName, 0);
      if ( InterfaceFn != 0 )
        goto LABEL_3;
      CUtlSymbolTable::Find(nLoadError, &dependencies.m_SymbolTable, v5->m_pInterfaceName);
      if ( LOWORD(nLoadError[0]) != 0xFFFF )
        break;
      nLoadError[0] = 0;
      m_pSystem = v5->m_pSystem;
      if ( m_pSystem != 0 )
      {
        pModuleName = 0;
        hModule = 0;
      }
      else
      {
        hModule = 0;
        m_pModuleFactory = v5->m_pModuleFactory;
        pModuleName = 0;
        if ( m_pModuleFactory == 0 )
        {
          m_hModule = v5->m_hModule;
          if ( m_hModule != 0 )
          {
            m_pModuleFactory = Plat_GetModuleInterfaceFactory(m_hModule, nLoadError);
            v56 = 0;
            pModuleName = 0;
            hModule = v5->m_hModule;
          }
          else
          {
            ModuleInPath = CAppSystemDict::LoadModuleInPath(this, v5->m_pModuleName, nLoadError);
            hModule = ModuleInPath;
            pModuleName = v5->m_pModuleName;
            if ( ModuleInPath == 0 )
              goto LABEL_116;
            m_pModuleFactory = Plat_GetModuleInterfaceFactory(ModuleInPath, nLoadError);
            v56 = 1;
          }
          if ( m_pModuleFactory == 0 )
          {
            if ( v56 == 0 )
            {
              if ( errResponse == ErrorResponse_t::QUIT_ON_ERROR )
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                {
                  m_pRequestingInterfaceName = "application";
                  m_pInterfaceName = v5->m_pInterfaceName;
                  v110 = "<unknown>";
                  if ( v5->m_pRequestingInterfaceName != 0 )
                    m_pRequestingInterfaceName = v5->m_pRequestingInterfaceName;
                  m_pModuleName = v5->m_pModuleName;
                  depRequest.m_pRequestingModuleName = "appsystemdict.cpp";
                  LODWORD(depRequest.m_pRequestingInterfaceName) = 1153;
                  depRequest.m_pModuleName = "LoadSystemAndDependencies";
                  if ( m_pModuleName != 0 )
                    v110 = m_pModuleName;
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &depRequest,
                    "CAppSystemDict:Unable to load interface factory %s from %s (Dependency of %s), error %d\n",
                    m_pInterfaceName,
                    v110,
                    m_pRequestingInterfaceName,
                    nLoadError[0]);
                }
                if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v106, v107, v104, v105) != 0 )
                  loc_0 = -559038737;
                Plat_ExitProcess(1);
                JUMPOUT(0x306B3CE);
              }
              if ( errResponse == ErrorResponse_t::WARN_ON_ERROR )
              {
                v102 = "application";
                v103 = "<unknown>";
                if ( v5->m_pRequestingInterfaceName != 0 )
                  v102 = v5->m_pRequestingInterfaceName;
                if ( v5->m_pModuleName != 0 )
                  v103 = v5->m_pModuleName;
                Warning(
                  "CAppSystemDict:Unable to load interface factory %s from %s (Dependency of %s), error %d\n",
                  v5->m_pInterfaceName,
                  v103,
                  v102,
                  nLoadError[0]);
              }
              goto LABEL_82;
            }
LABEL_116:
            if ( this->m_bIsConsoleApp )
              goto LABEL_133;
            if ( errResponse == ErrorResponse_t::QUIT_ON_ERROR )
            {
              if ( nLoadError[0] == 12 )
              {
                v85 = "The system ran out of memory while loading the game.";
                v86 = "#AppFramework_OutOfMemory";
              }
              else
              {
                if ( g_pFullFileSystem != 0 )
                  (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 0, 0);
                v85 = "A game file appears to be missing or corrupted.  In the Steam client go to the game's properties. "
                      " In the 'Local Files' tab select 'Verify Integrity of Game Cache' to have Steam double-check the g"
                      "ame's installation.";
                v86 = "#AppFramework_InvalidLocalFiles";
              }
              if ( g_pLocalize != 0 )
                (*(*g_pLocalize + 320LL))(g_pLocalize, "#General_UnableToStartGame", v86);
              else
                Plat_MessageBox("Unable to Start Game", v85);
              do
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                {
                  v91 = "application";
                  v92 = "<unknown>";
                  if ( v5->m_pRequestingInterfaceName != 0 )
                    v91 = v5->m_pRequestingInterfaceName;
                  v93 = v5->m_pModuleName;
                  LODWORD(depRequest.m_pRequestingInterfaceName) = 1146;
                  if ( v93 != 0 )
                    v92 = v93;
                  depRequest.m_pRequestingModuleName = "appsystemdict.cpp";
                  depRequest.m_pModuleName = "LoadSystemAndDependencies";
                  LODWORD(v112) = nLoadError[0];
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &depRequest,
                    "CAppSystemDict:Unable to load module %s (Dependency of %s), error %d\n",
                    v92,
                    v91,
                    v112);
                }
                if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v89, v90, v87, v88) != 0 )
                  loc_0 = -559038737;
                Plat_ExitProcess(1);
LABEL_133:
                ;
              }
              while ( errResponse == ErrorResponse_t::QUIT_ON_ERROR );
            }
            if ( errResponse == ErrorResponse_t::WARN_ON_ERROR )
            {
              v78 = "application";
              v76 = nLoadError[0];
              v77 = "<unknown>";
              v79 = "CAppSystemDict:Unable to load module %s (Dependency of %s), error %d\n";
              if ( v5->m_pRequestingInterfaceName != 0 )
                v78 = v5->m_pRequestingInterfaceName;
              if ( v5->m_pModuleName != 0 )
                v77 = v5->m_pModuleName;
              goto LABEL_110;
            }
            goto LABEL_82;
          }
        }
        v9 = m_pModuleFactory(v5->m_pInterfaceName, &retval);
        m_pSystem = v9;
        if ( retval != 0 || v9 == 0 )
        {
          if ( errResponse == ErrorResponse_t::QUIT_ON_ERROR )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              v98 = "application";
              v99 = v5->m_pInterfaceName;
              v100 = "<unknown>";
              if ( v5->m_pRequestingInterfaceName != 0 )
                v98 = v5->m_pRequestingInterfaceName;
              v101 = v5->m_pModuleName;
              depRequest.m_pRequestingModuleName = "appsystemdict.cpp";
              depRequest.m_pModuleName = "LoadSystemAndDependencies";
              LODWORD(depRequest.m_pRequestingInterfaceName) = 1164;
              if ( v101 != 0 )
                v100 = v101;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &depRequest,
                "CAppSystemDict:Unable to create interface %s from %s (Dependency of %s)\n",
                v99,
                v100,
                v98);
            }
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v96, v97, v94, v95) != 0 )
              loc_0 = -559038737;
            v68 = Plat_ExitProcess(1);
            goto LABEL_101;
          }
          if ( errResponse == ErrorResponse_t::WARN_ON_ERROR )
          {
            v76 = "application";
            v77 = v5->m_pInterfaceName;
            v78 = "<unknown>";
            v79 = "CAppSystemDict:Unable to create interface %s from %s (Dependency of %s)\n";
            if ( v5->m_pRequestingInterfaceName != 0 )
              v76 = v5->m_pRequestingInterfaceName;
            if ( v5->m_pModuleName != 0 )
              v78 = v5->m_pModuleName;
LABEL_110:
            Warning(v79, v77, v78, v76);
          }
LABEL_82:
          v25 = 0;
          goto LABEL_38;
        }
      }
      v5->m_pSystem = m_pSystem;
      CUtlSymbolTable::AddString(v125, &dependencies.m_SymbolTable, v5->m_pInterfaceName);
      v10 = v125[0];
      if ( v125[0] >= dependencies.m_Vector.m_Size )
      {
        v11 = v125[0] + 1;
        if ( dependencies.m_Vector.m_Size < v11 )
        {
          CUtlVectorBase<CAppSystemDict::InterfaceInfo_t,CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>>::InsertMultipleBefore(
            &dependencies.m_Vector,
            dependencies.m_Vector.m_Size,
            v11 - dependencies.m_Vector.m_Size);
          v10 = v125[0];
        }
      }
      v12 = &dependencies.m_Vector.m_Memory.m_pMemory[v10];
      v12->m_Tier = (*(m_pSystem->_vptr_IAppSystem + 7))(m_pSystem);
      v12->m_pSystem = m_pSystem;
      v12->m_hModule = hModule;
      v12->m_pModuleName = pModuleName;
      v12->m_pInterfaceName = v5->m_pInterfaceName;
      v13 = (*(m_pSystem->_vptr_IAppSystem + 6))(m_pSystem);
      v14 = v13;
      if ( v13 != 0 )
      {
        for ( j = *(v13 + 8); j != 0 && *j != 0; j = v14[1] )
        {
          CUtlSymbolTable::AddString(
            v126,
            &dependencies.m_SymbolTable,
            requests->m_Memory.m_pMemory[v4].m_pInterfaceName);
          pModuleNamea = v126[0];
          hModulea = dependencies.m_Vector.m_Size;
          if ( v126[0] < dependencies.m_Vector.m_Size )
            goto LABEL_19;
          v22 = v126[0] + 1;
          if ( dependencies.m_Vector.m_Size >= v22 )
            goto LABEL_19;
          v115 = v22 - dependencies.m_Vector.m_Size;
          if ( v22 == dependencies.m_Vector.m_Size )
            goto LABEL_19;
          if ( v22 > dependencies.m_Vector.m_Memory.m_nAllocationCount )
            CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>::Grow(
              &dependencies.m_Vector.m_Memory,
              v22 - dependencies.m_Vector.m_Memory.m_nAllocationCount);
          dependencies.m_Vector.m_Size = v22;
          if ( v115 <= 0 )
          {
LABEL_19:
            m_pMemory = dependencies.m_Vector.m_Memory.m_pMemory;
          }
          else
          {
            v23 = hModulea;
            hModuleb = 0;
            m_pMemory = dependencies.m_Vector.m_Memory.m_pMemory;
            v24 = v23;
            do
            {
              if ( &m_pMemory[v24] != 0 )
              {
                CUtlSymbolTable::CUtlSymbolTable(&m_pMemory[v24].m_Dependencies, 0, 16, 0);
                m_pMemory = dependencies.m_Vector.m_Memory.m_pMemory;
              }
              ++hModuleb;
              ++v24;
            }
            while ( v115 > hModuleb );
          }
          CUtlSymbolTable::AddString(v124, &m_pMemory[pModuleNamea].m_Dependencies, j);
          m_Size = requests->m_Size;
          memset(&depRequest, 0, sizeof(depRequest));
          v18 = m_Size == requests->m_Memory.m_nAllocationCount;
          depRequest.m_pModuleName = *v14;
          depRequest.m_pInterfaceName = v14[1];
          v19 = requests->m_Memory.m_pMemory;
          depRequest.m_pRequestingInterfaceName = v19[v4].m_pInterfaceName;
          depRequest.m_pRequestingModuleName = v19[v4].m_pModuleName;
          v20 = m_Size;
          if ( v18 )
          {
            CUtlMemory<CAppSystemDict::AppSystemRequest_t,int>::Grow(&requests->m_Memory, 1);
            v20 = requests->m_Size;
            v19 = requests->m_Memory.m_pMemory;
          }
          requests->m_Size = v20 + 1;
          v21 = &v19[m_Size];
          if ( v21 != 0 )
            *v21 = depRequest;
          v14 += 2;
        }
      }
LABEL_4:
      ++i;
      ++v4;
      if ( requests->m_Size <= i )
        goto LABEL_37;
    }
    InterfaceFn = CUtlStringMap<CAppSystemDict::InterfaceInfo_t,CUtlSymbolTable>::operator[](
                    &dependencies,
                    v5->m_pInterfaceName)->m_pSystem;
LABEL_3:
    v5->m_pSystem = InterfaceFn;
    goto LABEL_4;
  }
LABEL_37:
  v25 = 1;
  if ( dependencies.m_SymbolTable.m_Lookup.m_NumElements == 0 )
    goto LABEL_38;
  CAppSystemDict::ComputeDependencies(this, &dependencies);
  retval = 0;
  v33 = requests->m_Size;
  v129.m_pMemory = 0;
  v129.m_nGrowSize = 0;
  v129.m_nAllocationCount = v33;
  if ( v33 != 0 )
  {
    CMemAllocSystemInitialize(v31, v32);
    v129.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v129.m_nAllocationCount);
  }
  CAppSystemDict::SortDependentLibraries(this, &dependencies, &retval);
  v34 = this->m_Systems.m_Size;
  i_0 = v34;
  if ( retval <= 0 )
  {
    v49 = this->m_Systems.m_Size;
    goto LABEL_84;
  }
  v35 = 0;
  pModuleNameb = (4LL * (retval - 1) + 4);
  while ( 1 )
  {
    v40 = v34;
    if ( v34 == this->m_Systems.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CAppSystemDict::AppSystem_t,int>::Grow(&this->m_Systems.m_Memory, 1);
      v40 = this->m_Systems.m_Size;
    }
    this->m_Systems.m_Size = v40 + 1;
    v41 = &this->m_Systems.m_Memory.m_pMemory[v34];
    v42 = &dependencies.m_Vector.m_Memory.m_pMemory[*(v129.m_pMemory + v35)];
    v41->m_pSystem = v42->m_pSystem;
    v41->m_hModule = v42->m_hModule;
    m_nAppSystemPhase = this->m_nAppSystemPhase;
    v41->m_bInvisible = 0;
    v41->m_nPhase = m_nAppSystemPhase;
    v44 = v42->m_pModuleName;
    if ( v44 != 0 )
    {
      _V_StripExtension(v44, pModuleBuf, 512);
      v36 = (**g_pMemAlloc)(g_pMemAlloc, strlen(pModuleBuf) + 1);
      v41->m_pModuleName = strcpy(v36, pModuleBuf);
      v37 = v42->m_pInterfaceName;
      if ( v37 != 0 )
        goto LABEL_48;
    }
    else
    {
      v41->m_pModuleName = 0;
      v37 = v42->m_pInterfaceName;
      if ( v37 != 0 )
      {
LABEL_48:
        v38 = strlen(v37);
        v39 = (**g_pMemAlloc)(g_pMemAlloc, v38 + 1);
        v41->m_pInterfaceName = strcpy(v39, v37);
        goto LABEL_49;
      }
    }
    v41->m_pInterfaceName = 0;
LABEL_49:
    if ( (*(v41->m_pSystem->_vptr_IAppSystem + 9))(v41->m_pSystem) != 0 )
    {
      CUtlSymbolTable::AddString(&depRequest, &this->m_SystemDict.m_SymbolTable, v42->m_pInterfaceName);
      m_pRequestingModuleName_low = LOWORD(depRequest.m_pRequestingModuleName);
      v46 = this->m_SystemDict.m_Vector.m_Size;
      if ( LOWORD(depRequest.m_pRequestingModuleName) >= v46 )
      {
        v47 = LOWORD(depRequest.m_pRequestingModuleName) + 1;
        if ( v46 < v47 )
        {
          m_nAllocationCount = this->m_SystemDict.m_Vector.m_Memory.m_nAllocationCount;
          if ( v47 > m_nAllocationCount )
            CUtlMemory<unsigned short,int>::Grow(&this->m_SystemDict.m_Vector.m_Memory, v47 - m_nAllocationCount);
          this->m_SystemDict.m_Vector.m_Size = v47;
        }
      }
      this->m_SystemDict.m_Vector.m_Memory.m_pMemory[m_pRequestingModuleName_low] = v34;
    }
    v35 += 4;
    if ( v35 == pModuleNameb )
      break;
    v34 = this->m_Systems.m_Size;
  }
  v49 = this->m_Systems.m_Size;
  if ( i_0 < v49 )
  {
    v50 = i_0;
    while ( 1 )
    {
      v53 = this->m_Systems.m_Memory.m_pMemory[v50].m_pSystem;
      v54 = Plat_RelativeTicks();
      if ( v53->Connect(AppSystemDictCreateInterfaceFn) == 0 )
        break;
      v51 = Plat_RelativeTicks();
      Plat_TickDiffMilliSecF(0, v51 - v54);
      COM_TimestampedLog(
        "CAppSystemDict::Connect( %-32s ) %8.3f msec",
        this->m_Systems.m_Memory.m_pMemory[v50++].m_pInterfaceName,
        v52);
      if ( v50 == i_0 + (v49 - 1 - i_0) + 1 )
        goto LABEL_84;
    }
    if ( errResponse != ErrorResponse_t::QUIT_ON_ERROR )
    {
      if ( errResponse == ErrorResponse_t::WARN_ON_ERROR )
        Warning(
          "AppSystemDict: Error in Connect() of interface '%s'!\n",
          this->m_Systems.m_Memory.m_pMemory[v50].m_pInterfaceName);
      goto LABEL_70;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v75 = this->m_Systems.m_Memory.m_pMemory[v50].m_pInterfaceName;
      LODWORD(depRequest.m_pRequestingInterfaceName) = 1269;
      depRequest.m_pRequestingModuleName = "appsystemdict.cpp";
      depRequest.m_pModuleName = "LoadSystemAndDependencies";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &depRequest,
        "AppSystemDict: Error in Connect() of interface '%s'!\n",
        v75);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v66, v67, v64, v65) != 0 )
      loc_0 = -559038737;
LABEL_100:
    v68 = Plat_ExitProcess(1);
    retval = 0;
    if ( (v129.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&v129);
      if ( (v129.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&v129);
    }
LABEL_101:
    CUtlSymbolTable::~CUtlSymbolTable(&dependencies.m_SymbolTable);
    CUtlVectorBase<CAppSystemDict::InterfaceInfo_t,CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>>::~CUtlVectorBase(&dependencies.m_Vector);
    Unwind_Resume(v68, v71, v69, v70, v72, v73);
  }
LABEL_84:
  if ( i_0 > 0 )
  {
    v57 = 0;
    do
    {
      v58 = this->m_Systems.m_Memory.m_pMemory[v57 / 0x28].m_pSystem;
      (*(v58->_vptr_IAppSystem + 8))(v58, AppSystemDictCreateInterfaceFn, 0);
      v57 += 40LL;
    }
    while ( v57 != 8 * (5LL * (i_0 - 1) + 5) );
  }
  if ( i_0 >= v49 )
  {
LABEL_95:
    (*(this->_vptr_CAppSystemDict + 6))(this);
    v25 = 1;
  }
  else
  {
    v59 = i_0;
    while ( 1 )
    {
      v62 = this->m_Systems.m_Memory.m_pMemory[v59].m_pSystem;
      v63 = Plat_RelativeTicks();
      if ( (*(v62->_vptr_IAppSystem + 3))(v62) != 1 )
        break;
      v60 = Plat_RelativeTicks();
      Plat_TickDiffMilliSecF(0, v60 - v63);
      COM_TimestampedLog(
        "CAppSystemDict::Init   ( %-32s ) %8.3f msec",
        this->m_Systems.m_Memory.m_pMemory[v59++].m_pInterfaceName,
        v61);
      if ( v59 == i_0 + (~i_0 + v49) + 1 )
        goto LABEL_95;
    }
    if ( errResponse == ErrorResponse_t::QUIT_ON_ERROR )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v84 = this->m_Systems.m_Memory.m_pMemory[v59].m_pInterfaceName;
        LODWORD(depRequest.m_pRequestingInterfaceName) = 1293;
        depRequest.m_pRequestingModuleName = "appsystemdict.cpp";
        depRequest.m_pModuleName = "LoadSystemAndDependencies";
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &depRequest,
          "AppSystemDict: Error in Init() of interface '%s'!\n",
          v84);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v82, v83, v80, v81) != 0 )
        loc_0 = -559038737;
      goto LABEL_100;
    }
    if ( errResponse == ErrorResponse_t::WARN_ON_ERROR )
      Warning(
        "AppSystemDict: Error in Init() of interface '%s'!\n",
        this->m_Systems.m_Memory.m_pMemory[v59].m_pInterfaceName);
LABEL_70:
    v25 = 0;
  }
  retval = 0;
  if ( (v129.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&v129);
    if ( (v129.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&v129);
  }
LABEL_38:
  CUtlSymbolTable::~CUtlSymbolTable(&dependencies.m_SymbolTable);
  v26 = dependencies.m_Vector.m_Size - 1;
  if ( dependencies.m_Vector.m_Size - 1 >= 0 )
  {
    v27 = 120LL * v26;
    v28 = 120 * (v26 - v26) - 120;
    do
    {
      v29 = v27;
      v27 -= 120;
      CUtlSymbolTable::~CUtlSymbolTable((&dependencies.m_Vector.m_Memory.m_pMemory->m_Dependencies + v29));
    }
    while ( v27 != v28 );
  }
  dependencies.m_Vector.m_Size = 0;
  if ( (dependencies.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>::Purge(&dependencies.m_Vector.m_Memory);
    if ( (dependencies.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAppSystemDict::InterfaceInfo_t,int>::Purge(&dependencies.m_Vector.m_Memory);
  }
  return v25;
}


// CAppSystemDict::CreateAppWindow  (line 1311, @0x0000000003068db0, libserver.so)
// calls: Plat_CreateWindow, Plat_GetDefaultMonitorIndex, Plat_GetDesktopBounds, Plat_SetActiveWindow, CommandLine
// strings: "-x", "-y"
// local variable allocation has failed, the output may be wrong!
PlatWindow_t __fastcall CAppSystemDict::CreateAppWindow(
        CAppSystemDict *const this,
        const char *pTitle,
        int nPlatWindowFlags,
        int x,
        int y,
        int w,
        int h)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PlatWindow_t result; // rax
  unsigned int DefaultMonitorIndex; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // eax
  PlatWindow_t hWnd; // [rsp+8h] [rbp-48h]
  int wa; // [rsp+14h] [rbp-3Ch] BYREF
  __int64 ya; // [rsp+18h] [rbp-38h] OVERLAPPED BYREF
  int nDesktopX; // [rsp+20h] [rbp-30h] BYREF
  int nDesktopY; // [rsp+24h] [rbp-2Ch] BYREF
  int nIgnoreWidth; // [rsp+28h] [rbp-28h] BYREF
  int nIgnoreHeight[9]; // [rsp+2Ch] [rbp-24h] BYREF

  v9 = nPlatWindowFlags;
  HIDWORD(ya) = x;
  if ( (nPlatWindowFlags & 0xC0) != 0 )
    v9 = nPlatWindowFlags & 0xFFFFFFFC;
  LODWORD(ya) = y;
  wa = w;
  if ( (v9 & 0x40) != 0 )
  {
    ya = 0;
    DefaultMonitorIndex = Plat_GetDefaultMonitorIndex();
    Plat_GetDesktopBounds(DefaultMonitorIndex, &ya + 4, &ya, &nIgnoreWidth, nIgnoreHeight);
    v11 = ya;
    v10 = HIDWORD(ya);
  }
  else if ( (v9 & 0x80u) != 0 )
  {
    v14 = Plat_GetDefaultMonitorIndex();
    Plat_GetDesktopBounds(v14, &ya + 4, &ya, &wa, &h);
    v11 = ya;
    v10 = HIDWORD(ya);
  }
  else
  {
    v10 = HIDWORD(ya);
    v11 = ya;
    if ( ya == -1 )
    {
      v15 = Plat_GetDefaultMonitorIndex();
      Plat_GetDesktopBounds(v15, &nDesktopX, &nDesktopY, &nIgnoreWidth, nIgnoreHeight);
      HIDWORD(ya) = nDesktopX + (nIgnoreWidth - wa) / 2;
      LODWORD(ya) = nDesktopY + (nIgnoreHeight[0] - h) / 2;
      v17 = CommandLine(v16);
      HIDWORD(ya) = (*(*v17 + 88LL))(v17, "-x", HIDWORD(ya));
      v19 = CommandLine(v18);
      v20 = (*(*v19 + 88LL))(v19, "-y", ya);
      v10 = HIDWORD(ya);
      v11 = v20;
      LODWORD(ya) = v20;
    }
  }
  result = Plat_CreateWindow(this->m_hInstance, pTitle, v10, v11, wa, h, v9);
  if ( result == 0 )
    return 0;
  if ( (v9 & 0x10) != 0 )
  {
    hWnd = result;
    Plat_SetActiveWindow(result);
    return hWnd;
  }
  return result;
}


// AppSystemDictCreateInterfaceFn  (line 1367, @0x00000000030684f0, libserver.so)
// calls: CAppSystemDict::FindSystem
// callers: CAppSystemDict::LoadSystemAndDependencies
// globals: s_pAppSystemDict
void *__fastcall AppSystemDictCreateInterfaceFn(const char *pName, int *pReturnCode)
{
  void *result; // rax

  result = CAppSystemDict::FindSystem(s_pAppSystemDict, pName);
  if ( pReturnCode != 0 )
    *pReturnCode = result == 0;
  return result;
}


// CAppSystemDict::GetFactory  (line 1381, @0x0000000003068f50, libserver.so)
// callers: CTier2AppSystemDict::Init
// globals: AppSystemDictCreateInterfaceFn(char const*,int *)
CreateInterfaceFn __fastcall CAppSystemDict::GetFactory(CAppSystemDict *const this)
{
  return AppSystemDictCreateInterfaceFn;
}


