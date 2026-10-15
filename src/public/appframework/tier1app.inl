
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTier1Application::~CTier1Application  (line 29, @0x0000000002339c20, libserver.so)  // inlines: ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~IApplication
void __fastcall CTier1Application::~CTier1Application(CTier1Application *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
}


// CTier1Application::~CTier1Application  (line 29, @0x000000000233ac60, libserver.so)  // inlines: ~CBaseAppSystem, ~CTier0AppSystem, ~CTier1AppSystem, ~CTier1Application, ~IApplication
// calls: operator delete
void __fastcall CTier1Application::~CTier1Application(CTier1Application *const this)
{
  this->_vptr_IAppSystem = &off_408AB70;
  operator delete(this);
}


// CTier1Application::GetDependencies  (line 34, @0x000000000233bcf0, libserver.so)  // inlines: AppSystemInfo_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// strings: "vstdlib", "VEngineCvar007"
// globals: `guard variable for'CTier1Application::GetDependencies(void)::s_pDependencies, CTier1Application::GetDependencies(void)::s_pDependencies
const AppSystemInfo_t *__fastcall CTier1Application::GetDependencies(CTier1Application *const this)
{
  if ( `guard variable for'CTier1Application::GetDependencies(void)::s_pDependencies != 0 )
    return CTier1Application::GetDependencies(void)::s_pDependencies;
  if ( __cxa_guard_acquire(&`guard variable for'CTier1Application::GetDependencies(void)::s_pDependencies) != 0 )
  {
    qword_4B42E90 = 0;
    CTier1Application::GetDependencies(void)::s_pDependencies[0].m_pModuleName = "vstdlib";
    qword_4B42E98 = 0;
    qword_4B42E88 = "VEngineCvar007";
    __cxa_guard_release(&`guard variable for'CTier1Application::GetDependencies(void)::s_pDependencies);
  }
  return CTier1Application::GetDependencies(void)::s_pDependencies;
}


// CTier1Application::SetInitializationPhase  (line 44, @0x000000000233b9b0, libserver.so)
// calls: CAppSystemDict::SetInitializationPhase
void __fastcall CTier1Application::SetInitializationPhase(CTier1Application *const this, int nPhase)
{
  CAppSystemDict::SetInitializationPhase(this->m_pDict, nPhase);
}


// CTier1Application::GetInitializationPhase  (line 49, @0x000000000233b9c0, libserver.so)
// calls: CAppSystemDict::GetInitializationPhase
int __fastcall CTier1Application::GetInitializationPhase(const CTier1Application *const this)
{
  return CAppSystemDict::GetInitializationPhase(this->m_pDict);
}


// CTier1Application::AddSystem  (line 54, @0x000000000233b9d0, libserver.so)
// calls: CAppSystemDict::AddSystem
IAppSystem *__fastcall CTier1Application::AddSystem(
        CTier1Application *const this,
        IAppSystem *pAppSystem,
        const char *pInterfaceName)
{
  return CAppSystemDict::AddSystem(this->m_pDict, pAppSystem, pInterfaceName);
}


// CTier1Application::AddSystemDontLoadStartupManifests  (line 59, @0x0000000002339950, libserver.so)  // inlines: SetStartupManifestsDisabled
IAppSystem *__fastcall CTier1Application::AddSystemDontLoadStartupManifests(
        CTier1Application *const this,
        const char *pDLLName,
        const char *pInterfaceName)
{
  IAppSystem *result; // rax

  ++this->m_pDict->m_nStartupManifestsDisabledCount;
  result = (*(this->_vptr_IAppSystem + 14))(this, pDLLName, pInterfaceName);
  --this->m_pDict->m_nStartupManifestsDisabledCount;
  return result;
}


// CTier1Application::LoadStartupManifestGroup  (line 67, @0x0000000002339980, libserver.so)
void __fastcall CTier1Application::LoadStartupManifestGroup(CTier1Application *const this, const char *pGroupName)
{
  ;
}


// CTier1Application::AddSystem  (line 72, @0x000000000233b9e0, libserver.so)
// calls: CAppSystemDict::AddSystem
IAppSystem *__fastcall CTier1Application::AddSystem(
        CTier1Application *const this,
        const char *pDLLName,
        const char *pInterfaceName)
{
  return CAppSystemDict::AddSystem(this->m_pDict, pDLLName, pInterfaceName, ErrorResponse_t::QUIT_ON_ERROR);
}


// CTier1Application::AddSystem  (line 77, @0x000000000233b9f0, libserver.so)
// calls: CAppSystemDict::AddSystem
IAppSystem *__fastcall CTier1Application::AddSystem(
        CTier1Application *const this,
        PlatModule_t hModule,
        const char *pInterfaceName)
{
  return CAppSystemDict::AddSystem(this->m_pDict, hModule, pInterfaceName, ErrorResponse_t::QUIT_ON_ERROR);
}


// CTier1Application::AddSystems  (line 82, @0x000000000233ba00, libserver.so)
// calls: CAppSystemDict::AddSystems
bool __fastcall CTier1Application::AddSystems(
        CTier1Application *const this,
        int nCount,
        const AppSystemInfo_t *pSystems)
{
  return CAppSystemDict::AddSystems(this->m_pDict, nCount, pSystems);
}


// CTier1Application::FindSystem  (line 87, @0x000000000233ba10, libserver.so)
// calls: CAppSystemDict::FindSystem
void *__fastcall CTier1Application::FindSystem(CTier1Application *const this, const char *pInterfaceName)
{
  return CAppSystemDict::FindSystem(this->m_pDict, pInterfaceName);
}


// CTier1Application::RemoveSystem  (line 92, @0x000000000233ba20, libserver.so)
// calls: CAppSystemDict::RemoveSystem
void __fastcall CTier1Application::RemoveSystem(CTier1Application *const this, IAppSystem *pAppSystem)
{
  CAppSystemDict::RemoveSystem(this->m_pDict, pAppSystem);
}


// CTier1Application::GetGameInfo  (line 97, @0x0000000002339990, libserver.so)
KeyValues *__fastcall CTier1Application::GetGameInfo(CTier1Application *const this)
{
  return this->m_pDict->m_pGameInfo;
}


// CTier1Application::GetLanguage  (line 102, @0x000000000233c3a0, libserver.so)  // inlines: GetLanguage, IsEmpty
// calls: CUtlString::Get
const char *__fastcall CTier1Application::GetLanguage(const CTier1Application *const this, LanguageType_t languageType)
{
  CAppSystemDict *m_pDict; // rax
  const CUtlString *p_m_UILanguage; // rdi
  char *m_pString; // rax
  char *v6; // rdx

  m_pDict = this->m_pDict;
  p_m_UILanguage = &m_pDict->m_UILanguage;
  if ( languageType == LanguageType_t::LanguageType_Audio && (v6 = m_pDict->m_AudioLanguage.m_pString) != 0 && *v6 != 0 )
  {
    p_m_UILanguage = &m_pDict->m_AudioLanguage;
  }
  else
  {
    m_pString = m_pDict->m_UILanguage.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
      return 0;
  }
  return CUtlString::Get(p_m_UILanguage);
}


// CTier1Application::IsInToolsMode  (line 107, @0x00000000023399b0, libserver.so)
bool __fastcall CTier1Application::IsInToolsMode(const CTier1Application *const this)
{
  return this->m_pDict->m_bInToolsMode;
}


// CTier1Application::IsInDeveloperMode  (line 112, @0x00000000023399d0, libserver.so)
bool __fastcall CTier1Application::IsInDeveloperMode(const CTier1Application *const this)
{
  return this->m_pDict->m_bIsInDeveloperMode;
}


// CTier1Application::GetModPath  (line 117, @0x000000000233c330, libserver.so)  // inlines: GetModPath, IsEmpty
// calls: CUtlString::Get
const char *__fastcall CTier1Application::GetModPath(const CTier1Application *const this)
{
  CAppSystemDict *m_pDict; // rdi
  char *m_pString; // rax

  m_pDict = this->m_pDict;
  m_pString = m_pDict->m_ModPath.m_pString;
  if ( m_pString != 0 && *m_pString != 0 )
    return CUtlString::Get(&m_pDict->m_ModPath);
  else
    return 0;
}


// CTier1Application::GetContentPath  (line 122, @0x000000000233b070, libserver.so)  // inlines: GetContentPath, IsEmpty
// calls: CUtlString::Get
const char *__fastcall CTier1Application::GetContentPath(const CTier1Application *const this)
{
  CAppSystemDict *m_pDict; // rdi
  char *m_pString; // rax

  m_pDict = this->m_pDict;
  m_pString = m_pDict->m_ContentPath.m_pString;
  if ( m_pString != 0 && *m_pString != 0 )
    return CUtlString::Get(&m_pDict->m_ContentPath);
  else
    return 0;
}


// CTier1Application::GetModGameSubdir  (line 127, @0x000000000233b0a0, libserver.so)  // inlines: GetModGameSubdir, IsEmpty
// calls: CUtlString::Get
const char *__fastcall CTier1Application::GetModGameSubdir(const CTier1Application *const this)
{
  CAppSystemDict *m_pDict; // rdi
  char *m_pString; // rax

  m_pDict = this->m_pDict;
  m_pString = m_pDict->m_ModSubDir.m_pString;
  if ( m_pString != 0 && *m_pString != 0 )
    return CUtlString::Get(&m_pDict->m_ModSubDir);
  else
    return 0;
}


// CTier1Application::IsConsoleApp  (line 132, @0x00000000023399f0, libserver.so)
bool __fastcall CTier1Application::IsConsoleApp(const CTier1Application *const this)
{
  return this->m_pDict->m_bIsConsoleApp;
}


// CTier1Application::GetExecutablePath  (line 137, @0x000000000233b0d0, libserver.so)  // inlines: GetExecutablePath
// calls: CUtlString::Get
const char *__fastcall CTier1Application::GetExecutablePath(const CTier1Application *const this)
{
  return CUtlString::Get(&this->m_pDict->m_ExecutablePath);
}


// CTier1Application::GetApplicationInfo  (line 142, @0x0000000002339a10, libserver.so)
KeyValues *__fastcall CTier1Application::GetApplicationInfo(CTier1Application *const this)
{
  return this->m_pDict->m_pApplicationInfo;
}


// CTier1Application::GetAppInstance  (line 147, @0x0000000002339a30, libserver.so)
void *__fastcall CTier1Application::GetAppInstance(const CTier1Application *const this)
{
  return this->m_pDict->m_hInstance;
}


// CTier1Application::GetConsoleLogFilename  (line 152, @0x0000000002339a50, libserver.so)
CUtlString __fastcall CTier1Application::GetConsoleLogFilename(__int64 a1, const CTier1Application *const this)
{
  (*(this->m_pDict->_vptr_CAppSystemDict + 3))();
  return a1;
}


// CTier1Application::ChangeLogFileSuffix  (line 157, @0x0000000002339a70, libserver.so)
void __fastcall CTier1Application::ChangeLogFileSuffix(CTier1Application *const this, const char *suffix)
{
  (*(this->m_pDict->_vptr_CAppSystemDict + 4))(this->m_pDict, suffix);
}


// CTier1Application::GetGameMode  (line 163, @0x0000000002339a90, libserver.so)
AppGameMode_t __fastcall CTier1Application::GetGameMode(const CTier1Application *const this)
{
  CAppSystemDict *m_pDict; // rdx
  AppGameMode_t result; // eax

  m_pDict = this->m_pDict;
  result = AppGameMode_t::APPLICATION_IS_NOT_GAME;
  if ( m_pDict->m_bIsGameApp )
    return 2 - !m_pDict->m_bIsDedicatedServer;
  return result;
}


// CTier1Application::MountAddon  (line 171, @0x0000000002339ac0, libserver.so)
void __fastcall CTier1Application::MountAddon(CTier1Application *const this, const char *pAddonName)
{
  ;
}


// CTier1Application::UnmountAddon  (line 175, @0x0000000002339ad0, libserver.so)
void __fastcall CTier1Application::UnmountAddon(CTier1Application *const this, const char *pAddonName)
{
  ;
}


// CTier1Application::GetMountedAddons  (line 179, @0x0000000002339ae0, libserver.so)
void __fastcall CTier1Application::GetMountedAddons(
        CTier1Application *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const mountedAddons)
{
  ;
}


// CTier1Application::GetMountedAddons  (line 183, @0x0000000002339af0, libserver.so)
int __fastcall CTier1Application::GetMountedAddons(
        CTier1Application *const this,
        const char **pOutMountedAddons,
        int nMaxAddons)
{
  return 0;
}


// CTier1Application::GetAddonsDirectory  (line 188, @0x0000000002339b00, libserver.so)
bool __fastcall CTier1Application::GetAddonsDirectory(CTier1Application *const this, char *pszResult, int nChars)
{
  *pszResult = 0;
  return 0;
}


// CTier1Application::GetAddonsContentDirectory  (line 194, @0x0000000002339b10, libserver.so)
bool __fastcall CTier1Application::GetAddonsContentDirectory(
        CTier1Application *const this,
        char *pszResult,
        int nChars)
{
  *pszResult = 0;
  return 0;
}


// CTier1Application::IsFileInAddon  (line 200, @0x0000000002339b20, libserver.so)
bool __fastcall CTier1Application::IsFileInAddon(CTier1Application *const this, const char *pszFilePath)
{
  return 0;
}


// CTier1Application::GetAvailableAddons  (line 205, @0x0000000002339b30, libserver.so)
void __fastcall CTier1Application::GetAvailableAddons(
        CTier1Application *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pResult,
        int nSearchType)
{
  ;
}


// CTier1Application::GetAddonInfo  (line 209, @0x0000000002339b40, libserver.so)
bool __fastcall CTier1Application::GetAddonInfo(
        CTier1Application *const this,
        KeyValues *pResult,
        const char *pAddonName)
{
  return 0;
}


// CTier1Application::IsRunningOnCustomerMachine  (line 214, @0x0000000002339b50, libserver.so)
bool __fastcall CTier1Application::IsRunningOnCustomerMachine(const CTier1Application *const this)
{
  return this->m_pDict->m_bIsRetail;
}


// CTier1Application::IsLowViolence  (line 219, @0x0000000002339b70, libserver.so)
bool __fastcall CTier1Application::IsLowViolence(const CTier1Application *const this)
{
  return this->m_pDict->m_bIsLowViolence;
}


// CTier1Application::SetLowViolence  (line 224, @0x0000000002339b90, libserver.so)  // inlines: SetLowViolence
void __fastcall CTier1Application::SetLowViolence(CTier1Application *const this, bool bLowViolence)
{
  this->m_pDict->m_bIsLowViolence = bLowViolence;
}


// CTier1Application::GetRestrictAddonsTo  (line 229, @0x0000000002339bb0, libserver.so)
const char *__fastcall CTier1Application::GetRestrictAddonsTo(const CTier1Application *const this)
{
  return 0;
}


// CTier1Application::SetAllowAddonChanges  (line 234, @0x0000000002339bc0, libserver.so)
void __fastcall CTier1Application::SetAllowAddonChanges(CTier1Application *const this, bool bAllow)
{
  ;
}


// CTier1Application::SetUGCAddonPathResolver  (line 238, @0x0000000002339bd0, libserver.so)
void __fastcall CTier1Application::SetUGCAddonPathResolver(
        CTier1Application *const this,
        IUGCAddonPathResolver *pResolver)
{
  ;
}


// CTier1Application::GetAddonNameFromID  (line 242, @0x0000000002339be0, libserver.so)  // inlines: CUtlString
CUtlString __fastcall CTier1Application::GetAddonNameFromID(
        _QWORD *a1,
        const CTier1Application *const this,
        uint64 uID)
{
  *a1 = 0;
  return a1;
}


// CTier1Application::GetIDFromAddonName  (line 247, @0x0000000002339bf0, libserver.so)
uint64 __fastcall CTier1Application::GetIDFromAddonName(const CTier1Application *const this, const char *pAddonName)
{
  return 0;
}


// CTier1Application::GetFullAddonPathFromAddonName  (line 252, @0x0000000002339c00, libserver.so)  // inlines: CUtlString
CUtlString __fastcall CTier1Application::GetFullAddonPathFromAddonName(
        _QWORD *a1,
        const CTier1Application *const this,
        const char *pAddonName)
{
  *a1 = 0;
  return a1;
}


// CTier1Application::GetAvailableAddonMaps  (line 257, @0x0000000002339c10, libserver.so)
void __fastcall CTier1Application::GetAvailableAddonMaps(
        CTier1Application *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pResult,
        const char *pszAddonName)
{
  ;
}


// CTier1AppSystemDict::~CTier1AppSystemDict  (line 270, @0x000000000233ba30, libserver.so)
// calls: CAppSystemDict::~CAppSystemDict
void __fastcall CTier1AppSystemDict::~CTier1AppSystemDict(CTier1AppSystemDict *const this)
{
  this->_vptr_CAppSystemDict = off_408C190;
  CAppSystemDict::~CAppSystemDict(this);
}


// CTier1AppSystemDict::~CTier1AppSystemDict  (line 270, @0x000000000233ba50, libserver.so)  // inlines: ~CTier1AppSystemDict
// calls: CAppSystemDict::~CAppSystemDict, operator delete
void __fastcall CTier1AppSystemDict::~CTier1AppSystemDict(CTier1AppSystemDict *const this)
{
  this->_vptr_CAppSystemDict = off_408C190;
  CAppSystemDict::~CAppSystemDict(this);
  operator delete(this);
}


// CTier1AppSystemDict::Init  (line 311, @0x0000000002349cc0, libserver.so)  // inlines: GetBool, Plat_IsInDebugSession
// calls: CAppSystemDict::Init, KeyValues::GetInt, CommandLine, SetAssertionPrompt, Plat_IgnoreContentAsserts, CAppSystemDict::SetInDeveloperMode, MathLib_Init, Plat_DisableIOBuffering, CAppSystemDict::AddSystem, Plat_GetEnv, CTier1AppSystemDict::SetModPath, Plat_GetModuleFilename (17 total)
// callers: CTier2AppSystemDict::Init
// strings: "NoDefaultModPath", "-steam", "-devcontent", "-dev", "-showasserts", "-fpexcept" (12 total)
bool __fastcall CTier1AppSystemDict::Init(CTier1AppSystemDict *const this)
{
  bool v2; // r12
  KeyValues *m_pApplicationInfo; // rdi
  bool m_bIsGameApp; // r13
  __int64 v5; // rax
  char v6; // al
  __int64 v7; // rdi
  char v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  const char *Env; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  char v32; // al
  char pModName[512]; // [rsp+0h] [rbp-830h] BYREF
  char pExecutablePath[512]; // [rsp+200h] [rbp-630h] BYREF
  char pMessage[1024]; // [rsp+400h] [rbp-430h] BYREF
  unsigned __int64 v36; // [rsp+808h] [rbp-28h]

  v36 = __readfsqword(0x28u);
  v2 = CAppSystemDict::Init(this);
  if ( !v2 )
    return v2;
  m_pApplicationInfo = this->m_pApplicationInfo;
  m_bIsGameApp = this->m_bIsGameApp;
  if ( m_pApplicationInfo != 0 )
    m_bIsGameApp = KeyValues::GetInt(m_pApplicationInfo, "NoDefaultModPath", !m_bIsGameApp) == 0;
  if ( this->m_pGameInfo == 0 )
  {
    v25 = CommandLine(m_pApplicationInfo);
    if ( (*(*v25 + 104LL))(v25, "-game", 0, pModName, 512) != 0 )
    {
      CTier1AppSystemDict::SetModPath(this, pModName);
    }
    else if ( m_bIsGameApp )
    {
      Env = Plat_GetEnv("VMOD");
      if ( Env == 0 )
      {
        Plat_GetModuleFilename(pExecutablePath, 512);
        v2 = 0;
        V_sprintf_safe<1024ul>(
          pMessage,
          "Application \"%s\"\n"
          "is running without a known mod!\n"
          "\n"
          "Set the VMOD environment variable or run with -game to set the mod name.\n",
          pExecutablePath);
        Plat_MessageBox("No know mod!", pMessage);
        return v2;
      }
      CTier1AppSystemDict::SetModPath(this, Env);
    }
  }
  v5 = CommandLine(m_pApplicationInfo);
  v6 = (*(*v5 + 32LL))(v5, "-steam");
  v8 = v6;
  if ( this->m_bIsRetail )
  {
    SetAssertionPrompt(1, 0);
    SetAssertionPrompt(0, 0);
    if ( v8 == 0 )
    {
LABEL_7:
      v8 = 1;
      goto LABEL_8;
    }
LABEL_19:
    v21 = CommandLine(v7);
    if ( (*(*v21 + 32LL))(v21, "-showasserts") == 0 )
    {
      v22 = CommandLine(v7);
      (*(*v22 + 24LL))(v22, "-devcontent", 0);
      v24 = CommandLine(v23);
      if ( (*(*v24 + 32LL))(v24, "-dev") == 0 )
      {
LABEL_12:
        v15 = CommandLine(v14);
        if ( (*(*v15 + 32LL))(v15, "-showasserts") == 0 )
          goto LABEL_13;
LABEL_22:
        SetAssertionPrompt(0, 2);
        SetAssertionPrompt(1, 2);
        goto LABEL_13;
      }
LABEL_11:
      CAppSystemDict::SetInDeveloperMode(this, 1);
      goto LABEL_12;
    }
    goto LABEL_7;
  }
  if ( v6 != 0 )
  {
    SetAssertionPrompt(1, 0);
    SetAssertionPrompt(0, 0);
    goto LABEL_19;
  }
LABEL_8:
  v9 = CommandLine(v7);
  if ( (*(*v9 + 24LL))(v9, "-devcontent", 0) != 0 )
  {
    v11 = Plat_IgnoreContentAsserts();
    SetAssertionPrompt(1, v11 == 0 ? 2 : 0);
    SetAssertionPrompt(0, 3);
    CAppSystemDict::SetInDeveloperMode(this, 1);
    v13 = CommandLine(v12);
    if ( (*(*v13 + 32LL))(v13, "-dev") == 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v27 = CommandLine(v10);
  if ( (*(*v27 + 32LL))(v27, "-dev") != 0 )
  {
LABEL_10:
    SetAssertionPrompt(0, 2);
    goto LABEL_11;
  }
  v29 = CommandLine(v28);
  if ( (*(*v29 + 32LL))(v29, "-showasserts") != 0 )
    goto LABEL_22;
  if ( v8 == 0 )
  {
    if ( Plat_IsInTestMode() != 0 )
    {
      v31 = Plat_IgnoreContentAsserts() == 0 ? 2 : 0;
    }
    else
    {
      if ( Plat_IsInDebugSessionRaw(v30) == 0 )
      {
        v32 = Plat_IgnoreContentAsserts();
        SetAssertionPrompt(1, v32 == 0 ? 2 : 0);
        SetAssertionPrompt(0, 3);
        goto LABEL_13;
      }
      v31 = 0;
    }
    SetAssertionPrompt(1, v31);
    SetAssertionPrompt(0, 2);
  }
LABEL_13:
  MathLib_Init();
  v17 = CommandLine(v16);
  (*(*v17 + 24LL))(v17, "-fpexcept", 0);
  v19 = CommandLine(v18);
  if ( (*(*v19 + 24LL))(v19, "-unbufferedio", 0) != 0 )
    Plat_DisableIOBuffering();
  CAppSystemDict::AddSystem(this, "vstdlib", "VStringTokenSystem001", ErrorResponse_t::QUIT_ON_ERROR);
  return v2;
}


// CTier1AppSystemDict::SetModPath  (line 460, @0x000000000233df80, libserver.so)  // inlines: GetExecutablePath, LeafCodeInfo_t, SetGameInfo, V_ComposeFileName<long unsigned int>, V_FixupPathName<long unsigned int>, V_StrSubst<long unsigned int>, V_StripLastDir<long unsigned int>, V_strcpy_safe<512ul>, V_stristr_fast, V_strlen, V_strncpy<int>
// calls: CUtlString::Get, _V_strncpy, V_RemoveDotSlashes, _V_ComposeFileName, Plat_IsDirectory, Plat_FileExists, _V_StripLastDir, V_StripTrailingSlash, V_IsAbsolutePath, LoadGameInfo, KeyValues::~KeyValues, KeyValues::operator delete (29 total)
// callers: CTier1AppSystemDict::Init
// strings: "game/bin", "bin/linuxsteamrt64/libtier0.so", "/content/", "/game/", "Failed to map from %s to game-path\n", "-noexecheck" (12 total)
void __fastcall CTier1AppSystemDict::SetModPath(CTier1AppSystemDict *const this, const char *pModPath)
{
  char *v4; // rbx
  const char *v5; // rax
  char *v6; // r13
  int v7; // edx
  unsigned int v8; // eax
  signed int i; // r13d
  char IsDirectory; // al
  __int64 v11; // rcx
  signed int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rsi
  const char *v15; // rsi
  KeyValues *GameInfo; // r13
  KeyValues *m_pGameInfo; // r12
  const char *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  LeafCodeInfo_t v24; // [rsp+20h] [rbp-A60h] BYREF
  char szGameBaseDirectory[512]; // [rsp+40h] [rbp-A40h] BYREF
  char szConvertedToAbsolute[512]; // [rsp+240h] [rbp-840h] BYREF
  char pRootDir[512]; // [rsp+440h] [rbp-640h] BYREF
  char pRootDirFixed[512]; // [rsp+640h] [rbp-440h] BYREF
  char pExecutablePath[520]; // [rsp+840h] [rbp-240h] BYREF
  unsigned __int64 v30; // [rsp+A48h] [rbp-38h]

  v4 = pRootDirFixed;
  v30 = __readfsqword(0x28u);
  v5 = CUtlString::Get(&this->m_ExecutablePath);
  _V_strncpy(szGameBaseDirectory, v5, 512);
  V_RemoveDotSlashes(szGameBaseDirectory, 47);
  v6 = pRootDirFixed;
  _V_strncpy(pRootDirFixed, szGameBaseDirectory, 512);
  do
  {
    v7 = *v6;
    v6 += 4;
    v8 = ~v7 & (v7 - 16843009) & 0x80808080;
  }
  while ( v8 == 0 );
  if ( (~v7 & (v7 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v8) = (~v7 & (v7 - 16843009) & 0x80808080) >> 16;
    LODWORD(v6) = v6 + 2;
  }
  for ( i = v6 - (__CFADD__(v8, v8) + 3) - pRootDirFixed; ; i = v12 )
  {
    if ( Plat_IsDirectory(pRootDirFixed) == 0 )
      goto LABEL_12;
    _V_ComposeFileName(pRootDirFixed, "game/bin", pExecutablePath, 512);
    IsDirectory = Plat_IsDirectory(pExecutablePath);
    v11 = 512;
    if ( IsDirectory != 0 )
      goto LABEL_30;
    _V_ComposeFileName(pRootDirFixed, "bin/linuxsteamrt64/libtier0.so", pExecutablePath, 512);
    if ( Plat_FileExists(pExecutablePath) != 0 )
    {
      _V_strncpy(szGameBaseDirectory, pRootDirFixed, 512);
      goto LABEL_12;
    }
    if ( _V_StripLastDir(pRootDirFixed, 512) == 0 )
      break;
    V_StripTrailingSlash(pRootDirFixed);
    v12 = strlen(pRootDirFixed);
    if ( i <= v12 )
      break;
  }
  while ( 1 )
  {
LABEL_12:
    if ( V_IsAbsolutePath(pModPath) != 0 )
    {
      v19 = CommandLine(v13, v14);
      if ( (*(*v19 + 32LL))(v19, "-noexecheck") == 0 && !this->m_bNoExeCheck )
      {
        Plat_TranslateSymbolicLinks(pModPath, pRootDir, 512);
        V_StripFilename(pRootDir);
        _V_FixupPathName(v4, 512, pRootDir, 0);
        if ( V_stricmp_fast(v4, szGameBaseDirectory) != 0
          && V_stristr_fast(szGameBaseDirectory, "/softlinks/") == 0
          && V_stristr_fast(szGameBaseDirectory, "\\softlinks\\") == 0 )
        {
          Plat_GetModuleFilename(pExecutablePath, 512);
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v24.m_szFile = "../../public/appframework/tier1app.h";
            v24.m_nLine = 573;
            v24.m_szFunction = "SetModPath";
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v24,
              "Application .exe \"%s\"\n"
              "is in an unsupported path for game \"%s\"!\n"
              "Game base directory \"%s\" doesn't match root dir \"%s\"\n"
              "If you have special characters in your install path this may be confusing the game.\n",
              pExecutablePath,
              pModPath,
              szGameBaseDirectory,
              v4);
          }
          goto LABEL_27;
        }
      }
    }
    else
    {
      v15 = pModPath;
      pModPath = szConvertedToAbsolute;
      _V_ComposeFileName(szGameBaseDirectory, v15, szConvertedToAbsolute, 512);
    }
    GameInfo = LoadGameInfo(pModPath);
    if ( GameInfo != 0 )
      break;
    v4 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v24.m_szFile = "../../public/appframework/tier1app.h";
      v24.m_szFunction = "SetModPath";
      v24.m_nLine = 589;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v24,
        "Application unable to load gameinfo.gi file from directory \"%s\"!\n",
        pModPath);
    }
LABEL_27:
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v22, v23, v20, v21) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_30:
    _V_ComposeFileName(v4, "game", szGameBaseDirectory, v11);
  }
  m_pGameInfo = this->m_pGameInfo;
  if ( m_pGameInfo != 0 )
  {
    KeyValues::~KeyValues(this->m_pGameInfo);
    KeyValues::operator delete(m_pGameInfo);
  }
  this->m_pGameInfo = GameInfo;
  _V_strncpy(v4, pModPath, 512);
  V_FixSlashes(v4, 47);
  CUtlString::operator=(&this->m_ModPath, v4);
  v18 = V_UnqualifiedFileName(pModPath);
  CUtlString::operator=(&this->m_ModSubDir, v18);
  V_FixSlashes(v4, 47);
  if ( _V_StrSubst(v4, "/game/", "/content/", pExecutablePath, 512, 0) == 0 )
    Warning("Failed to map from %s to game-path\n", pModPath);
  V_FixSlashes(pExecutablePath, 47);
  CUtlString::operator=(&this->m_ContentPath, pExecutablePath);
}


