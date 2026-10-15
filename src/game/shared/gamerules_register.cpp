
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameRulesRegister::CGameRulesRegister  (line 20, @0x0000000002262240, libserver.so)
// callers: _GLOBAL__sub_I__unity_base_07.cpp, _GLOBAL__sub_I__unity_base_12.cpp, _GLOBAL__sub_I__unity_dota_03.cpp
// globals: CGameRulesRegister::s_pHead
void __fastcall CGameRulesRegister::CGameRulesRegister(
        CGameRulesRegister *const this,
        const char *pClassName,
        CGameRulesRegister::CreateGameRulesFn fn)
{
  CGameRulesRegister *v3; // rax

  this->m_pClassName = pClassName;
  v3 = CGameRulesRegister::s_pHead;
  this->m_pFn = fn;
  CGameRulesRegister::s_pHead = this;
  this->m_pNext = v3;
}


// CGameRulesRegister::CreateGameRules  (line 29, @0x0000000002262260, libserver.so)
void __fastcall CGameRulesRegister::CreateGameRules(CGameRulesRegister *const this)
{
  this->m_pFn();
}


// CGameRulesRegister::FindByName  (line 34, @0x0000000002262270, libserver.so)
// calls: V_stricmp_fast
// callers: CreateGameRulesObject
// globals: CGameRulesRegister::s_pHead
CGameRulesRegister *__fastcall CGameRulesRegister::FindByName(const char *pName)
{
  CGameRulesRegister *v2; // rbx

  v2 = CGameRulesRegister::s_pHead;
  if ( CGameRulesRegister::s_pHead == 0 )
    return 0;
  while ( V_stricmp_fast(pName, v2->m_pClassName) != 0 )
  {
    v2 = v2->m_pNext;
    if ( v2 == 0 )
      return 0;
  }
  return v2;
}


// CreateGameRulesObject  (line 49, @0x00000000022622c0, libserver.so)  // inlines: CreateGameRules, LeafCodeInfo_t
// calls: CGameRulesRegister::FindByName, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: InstallGameRules
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gamerules, "CreateGameRulesObject", "InitGameRules: game rules entity (%s) not created", "InitGameRules: missing gamerules class '%s' on the server"
// globals: g_pGameRules
void __fastcall CreateGameRulesObject(const char *pClassName)
{
  CGameRulesRegister *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( g_pGameRules != 0 )
  {
    (*(g_pGameRules->_vptr_CGameRules + 19))(g_pGameRules);
    g_pGameRules = 0;
  }
  v2 = CGameRulesRegister::FindByName(pClassName);
  if ( v2 == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v7.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gamerules_register.cpp";
      v7.m_szFunction = "CreateGameRulesObject";
      v7.m_nLine = 62;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v7,
        "InitGameRules: missing gamerules class '%s' on the server",
        pClassName);
    }
    goto LABEL_8;
  }
  v2->m_pFn();
  if ( g_pGameRules == 0 )
  {
    while ( 1 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v7.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gamerules_register.cpp";
        v7.m_szFunction = "CreateGameRulesObject";
        v7.m_nLine = 67;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v7,
          "InitGameRules: game rules entity (%s) not created",
          pClassName);
      }
LABEL_8:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
  }
  (*(g_pGameRules->_vptr_CGameRules + 137))(g_pGameRules);
}


