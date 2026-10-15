// Reconstructed from DWARF by pahole; not original source.

// src/tier1/configvalue.cpp:14
struct GlobalConfigInfo_t {
	const char * m_pConfigValueName;  // +0x0

	const void * * m_ppValuePointer;  // +0x50
	GlobalConfigInfo_t();

	// sizeof = 88
};

// src/tier1/configvalue.cpp:24
struct RegistryBlock_t {
	int m_nCount;  // +0x0

	RegistryBlock_t();

	// sizeof = 8816
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_configvalue.cpp  (line 0, @0x0000000001a67000, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_configvalue_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CGlobalConfigValueRegistry::HookUpConfigValue  (line 35, @0x0000000002f6e380, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CGlobalConfigValueRegistry::AddToList, CGlobalConfigValueRegistry::RegisterConfigValues
// strings: "configvalue.cpp", "HookUpConfigValue", "RegisterConfigValue: Unknown error constructing config value \"%s\"!\n"
void __fastcall CGlobalConfigValueRegistry::HookUpConfigValue(
        const char *pConfigValueName,
        ConfigType_t nType,
        ConfigValueType_t nValueType,
        CConfigValueOptions *const opt,
        const void **ppValuePointer)
{
  const void *v7; // rax
  LeafCodeInfo_t v8; // [rsp+0h] [rbp-30h] BYREF

  v7 = (*(*g_pConfigurationSystem + 416LL))(g_pConfigurationSystem, pConfigValueName, nType, nValueType, opt);
  *ppValuePointer = v7;
  if ( v7 == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_6;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors() != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_6:
      v8.m_szFile = "configvalue.cpp";
      v8.m_szFunction = "HookUpConfigValue";
      v8.m_nLine = 39;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v8,
        "RegisterConfigValue: Unknown error constructing config value \"%s\"!\n",
        pConfigValueName);
    }
  }
}


// CGlobalConfigValueRegistry::AddToList  (line 42, @0x0000000002f6e440, libserver.so)  // inlines: CConfigValueOptions, GlobalConfigInfo_t, RegistryBlock_t, V_memset, memset
// calls: operator new, CGlobalConfigValueRegistry::HookUpConfigValue
// globals: CGlobalConfigValueRegistry::sm_bRegistered, s_pConfigRegistry
void __fastcall CGlobalConfigValueRegistry::AddToList(
        const char *pConfigValueName,
        ConfigType_t nType,
        ConfigValueType_t nValueType,
        CConfigValueOptions *const opt,
        const void **ppValuePointer)
{
  RegistryBlock_t *v7; // r14
  __int64 m_nCount; // rax
  int v9; // ecx
  GlobalConfigInfo_t *m_pInfo; // r11
  RegistryBlock_t *v11; // rax
  GlobalConfigInfo_t *p_m_opt; // r9
  GlobalConfigInfo_t *v13; // rcx
  RegistryBlock_t *v14; // rax
  const void **ppValuePointera; // [rsp+0h] [rbp-40h]
  ConfigValueType_t nValueTypea; // [rsp+8h] [rbp-38h]
  ConfigType_t nTypea; // [rsp+Ch] [rbp-34h]

  if ( CGlobalConfigValueRegistry::sm_bRegistered )
  {
    CGlobalConfigValueRegistry::HookUpConfigValue(pConfigValueName, nType, nValueType, opt, ppValuePointer);
  }
  else
  {
    v7 = s_pConfigRegistry;
    if ( s_pConfigRegistry == 0 || (m_nCount = s_pConfigRegistry->m_nCount) == 100 )
    {
      ppValuePointera = ppValuePointer;
      nValueTypea = nValueType;
      nTypea = nType;
      v11 = operator new(0x2270u);
      ppValuePointer = ppValuePointera;
      nValueType = nValueTypea;
      p_m_opt = &v11->m_pInfo[0].m_opt;
      v7 = v11;
      nType = nTypea;
      m_pInfo = v11->m_pInfo;
      do
      {
        memset(p_m_opt, 0, 0x40u);
        v13 = p_m_opt++;
        v13->m_opt.m_memDefaultValue[0] = -1;
      }
      while ( p_m_opt != v11[1].m_pInfo );
      v14 = s_pConfigRegistry;
      v7->m_nCount = 0;
      v9 = 1;
      s_pConfigRegistry = v7;
      v7->m_pNext = v14;
    }
    else
    {
      v9 = m_nCount + 1;
      m_pInfo = &s_pConfigRegistry->m_pInfo[m_nCount];
    }
    v7->m_nCount = v9;
    m_pInfo->m_pConfigValueName = pConfigValueName;
    m_pInfo->m_nType = nType;
    m_pInfo->m_nValueType = nValueType;
    m_pInfo->m_ppValuePointer = ppValuePointer;
    m_pInfo->m_opt.m_singleValueChangeCallback = opt->m_singleValueChangeCallback;
    m_pInfo->m_opt.m_userValueChangeCallback = opt->m_userValueChangeCallback;
    m_pInfo->m_opt.m_pszHelpText = opt->m_pszHelpText;
    m_pInfo->m_opt.m_singleValueCompletionCallback = opt->m_singleValueCompletionCallback;
    m_pInfo->m_opt.m_userCompletionCallback = opt->m_userCompletionCallback;
    *&m_pInfo->m_opt.m_bHasDefaultValue = *&opt->m_bHasDefaultValue;
    *&m_pInfo->m_opt.m_memDefaultValue[1] = *&opt->m_memDefaultValue[1];
    *&m_pInfo->m_opt.m_memDefaultValue[3] = *&opt->m_memDefaultValue[3];
  }
}


// CGlobalConfigValueRegistry::RegisterConfigValues  (line 67, @0x0000000002f6e590, libserver.so)
// calls: CGlobalConfigValueRegistry::HookUpConfigValue, operator delete
// callers: RegisterConfigValues
// globals: CGlobalConfigValueRegistry::sm_bRegistered, s_pConfigRegistry
void __cdecl CGlobalConfigValueRegistry::RegisterConfigValues()
{
  RegistryBlock_t *v0; // r13
  CConfigValueOptions *p_m_opt; // rbx
  int v2; // r12d
  ConfigValueType_t m_nGroup; // edx
  CConfigValueOptions *v4; // rcx
  ConfigType_t v5; // esi
  RegistryBlock_t *m_pNext; // rbx

  if ( !CGlobalConfigValueRegistry::sm_bRegistered && g_pConfigurationSystem != 0 )
  {
    CGlobalConfigValueRegistry::sm_bRegistered = 1;
    v0 = s_pConfigRegistry;
    if ( s_pConfigRegistry != 0 )
    {
      while ( 1 )
      {
        if ( v0->m_nCount > 0 )
        {
          p_m_opt = &v0->m_pInfo[0].m_opt;
          v2 = 0;
          do
          {
            m_nGroup = p_m_opt[-1].m_nGroup;
            v4 = p_m_opt;
            ++v2;
            v5 = p_m_opt[-1].m_memDefaultValue[3];
            p_m_opt = (p_m_opt + 88);
            CGlobalConfigValueRegistry::HookUpConfigValue(
              p_m_opt[-2].m_singleValueCompletionCallback,
              v5,
              m_nGroup,
              v4,
              *&p_m_opt[-1].m_bHasDefaultValue);
          }
          while ( v0->m_nCount > v2 );
        }
        m_pNext = v0->m_pNext;
        operator delete(v0);
        if ( m_pNext == 0 )
          break;
        v0 = m_pNext;
      }
    }
  }
}


// RegisterConfigValues  (line 91, @0x0000000002f6e630, libserver.so)
// calls: CGlobalConfigValueRegistry::RegisterConfigValues
// callers: CTier1AppSystem<IGameConfiguration, 0>::Init, CTier2AppSystem<IGameConfiguration, 0>::Init, CGameConfiguration::Init, CTier1AppSystem<ISource2ServerSerializers, 0>::Init, CTier2AppSystem<ISource2ServerSerializers, 0>::Init, CSource2ServerSerializers::Init, CTier1AppSystem<ISource2Server, 0>::Init, CTier1AppSystem<ISource2GameEntities, 0>::Init, CTier1AppSystem<ISource2GameClients, 0>::Init, CTier2AppSystem<ISource2GameClients, 0>::Init, CTier2AppSystem<ISource2GameEntities, 0>::Init, CTier2AppSystem<ISource2Server, 0>::Init (14 total)
void __cdecl RegisterConfigValues()
{
  CGlobalConfigValueRegistry::RegisterConfigValues();
  (*(*g_pConfigurationSystem + 312LL))(g_pConfigurationSystem);
}


