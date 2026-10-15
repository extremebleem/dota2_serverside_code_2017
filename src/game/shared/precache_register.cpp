
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPrecacheRegister::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 22, @0x0000000002353800, libserver.so)
void __cdecl CPrecacheRegister::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// InitManifestDesc<PrecacheTest2::CTemplateArg>  (line 26, @0x0000000002353810, libserver.so)  // inlines: ResourceManifestEntry_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "materials/correction/ghost.vtex"
// globals: `guard variable for'InitManifestDesc<PrecacheTest2::CTemplateArg>(PrecacheTest2::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheTest2::CTemplateArg>(PrecacheTest2::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheTest2::CTemplateArg>(PrecacheTest2::CTemplateArg &)::s_Manifest, _ZGRZ16InitManifestDescIN13PrecacheTest212CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1, _ZGRZ16InitManifestDescIN13PrecacheTest212CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0
ResourceManifestDesc_t *__fastcall InitManifestDesc<PrecacheTest2::CTemplateArg>(
        PrecacheTest2::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTest2::CTemplateArg>(PrecacheTest2::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTest2::CTemplateArg>(PrecacheTest2::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    byte_4B462E8 = 0;
    ZGRZ16InitManifestDescIN13PrecacheTest212CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1 = "materials/correction/ghost.vtex";
    ZGRZ16InitManifestDescIN13PrecacheTest212CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0 = &ZGRZ16InitManifestDescIN13PrecacheTest212CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1;
    qword_4B462F0 = 0;
    InitManifestDesc<PrecacheTest2::CTemplateArg>(PrecacheTest2::CTemplateArg &)::s_pManifestEntries._M_array = &ZGRZ16InitManifestDescIN13PrecacheTest212CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0;
    qword_4B462F8 = 0;
    dword_4B46300 = 0;
    qword_4B46318 = 1;
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTest2::CTemplateArg>(PrecacheTest2::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<PrecacheTest2::CTemplateArg>(PrecacheTest2::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<PrecacheTest2::CTemplateArg>(PrecacheTest2::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<PrecacheTest2::CTemplateArg>(PrecacheTest2::CTemplateArg &)::s_Manifest;
}


// InitManifestDesc<PrecacheTest3::CTemplateArg>  (line 32, @0x00000000023538c0, libserver.so)  // inlines: ResourceManifestEntry_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "materials/correction/infected.vtex"
// globals: `guard variable for'InitManifestDesc<PrecacheTest3::CTemplateArg>(PrecacheTest3::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheTest3::CTemplateArg>(PrecacheTest3::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheTest3::CTemplateArg>(PrecacheTest3::CTemplateArg &)::s_Manifest, _ZGRZ16InitManifestDescIN13PrecacheTest312CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries3, _ZGRZ16InitManifestDescIN13PrecacheTest312CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries2
ResourceManifestDesc_t *__fastcall InitManifestDesc<PrecacheTest3::CTemplateArg>(
        PrecacheTest3::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTest3::CTemplateArg>(PrecacheTest3::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTest3::CTemplateArg>(PrecacheTest3::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    byte_4B462A8 = 0;
    ZGRZ16InitManifestDescIN13PrecacheTest312CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries3 = "materials/correction/infected.vtex";
    ZGRZ16InitManifestDescIN13PrecacheTest312CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries2 = &ZGRZ16InitManifestDescIN13PrecacheTest312CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries3;
    qword_4B462B0 = 0;
    InitManifestDesc<PrecacheTest3::CTemplateArg>(PrecacheTest3::CTemplateArg &)::s_pManifestEntries._M_array = &ZGRZ16InitManifestDescIN13PrecacheTest312CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries2;
    qword_4B462B8 = 0;
    dword_4B462C0 = 0;
    qword_4B462D8 = 1;
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTest3::CTemplateArg>(PrecacheTest3::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<PrecacheTest3::CTemplateArg>(PrecacheTest3::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<PrecacheTest3::CTemplateArg>(PrecacheTest3::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<PrecacheTest3::CTemplateArg>(PrecacheTest3::CTemplateArg &)::s_Manifest;
}


// InitManifestDesc<PrecacheTest::CTemplateArg>  (line 38, @0x0000000002353970, libserver.so)  // inlines: ResourceManifestEntry_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "materials/correction/cc_c1_main.vtex", "PrecacheTest2", "precacheTest3.vrnmd", "effects/fleck_wood2.vmat", "entityflame.ventr"
// globals: `guard variable for'InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg &)::s_Manifest, _ZGRZ16InitManifestDescIN12PrecacheTest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries5, _ZGRZ16InitManifestDescIN12PrecacheTest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries4
ResourceManifestDesc_t *__fastcall InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    byte_4B461C8 = 0;
    ZGRZ16InitManifestDescIN12PrecacheTest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries5 = "materials/correction/cc_c1_main.vtex";
    qword_4B461E8 = "PrecacheTest2";
    qword_4B46210 = "precacheTest3.vrnmd";
    qword_4B46238 = "effects/fleck_wood2.vmat";
    qword_4B46260 = "entityflame.ventr";
    ZGRZ16InitManifestDescIN12PrecacheTest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries4 = &ZGRZ16InitManifestDescIN12PrecacheTest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries5;
    qword_4B461D0 = 0;
    InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg &)::s_pManifestEntries._M_array = &ZGRZ16InitManifestDescIN12PrecacheTest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries4;
    qword_4B461D8 = 0;
    dword_4B461E0 = 0;
    qword_4B461F8 = 0;
    qword_4B46200 = 0;
    dword_4B46208 = 0;
    byte_4B461F0 = 1;
    byte_4B46218 = 0;
    qword_4B46220 = 0;
    qword_4B46228 = 0;
    dword_4B46230 = 0;
    byte_4B46240 = 0;
    qword_4B46248 = 0;
    qword_4B46250 = 0;
    dword_4B46258 = 0;
    byte_4B46268 = 0;
    qword_4B46270 = 0;
    qword_4B46278 = 0;
    dword_4B46280 = 0;
    qword_4B46298 = 5;
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<PrecacheTest::CTemplateArg>(PrecacheTest::CTemplateArg &)::s_Manifest;
}


// CPrecacheRegister::GameInit  (line 59, @0x000000000234b9c0, libserver.so)
// calls: COM_TimestampedLog
// strings: "GameInit - PreCache - Start", "GameInit - PreCache - Finish"
void __fastcall CPrecacheRegister::GameInit(CPrecacheRegister *const this, const EventGameInit_t *const msg)
{
  COM_TimestampedLog("GameInit - PreCache - Start", msg);
  COM_TimestampedLog("GameInit - PreCache - Finish");
}


// CPrecacheRegister::GameActivate  (line 67, @0x000000000234ab60, libserver.so)
void __fastcall CPrecacheRegister::GameActivate(CPrecacheRegister *const this, const EventGameActivate_t *const msg)
{
  ;
}


// CPrecacheRegister::GameShutdown  (line 80, @0x000000000234ab70, libserver.so)
void __fastcall CPrecacheRegister::GameShutdown(CPrecacheRegister *const this, const EventGameShutdown_t *const msg)
{
  ;
}


// CPrecacheRegister::LoadNamedManifest  (line 84, @0x0000000002361200, libserver.so)  // inlines: GetCurrentEntityResourceManifest, V_strcat_safe<260ul>, V_strcpy_safe<260ul>
// calls: _V_strncpy, _V_strncat, CFmtStrN<256, false>::CFmtStrN, __stack_chk_fail
void __fastcall CPrecacheRegister::LoadNamedManifest(CPrecacheRegister *const this, const char *pManifestName)
{
  IEntityResourceManifest *m_pCurrentManifest; // r12
  void (__fastcall *v3)(IEntityResourceManifest *, char *); // r14
  char pActualManifestName[272]; // [rsp+0h] [rbp-250h] BYREF
  CFmtStrN<256,false> v5; // [rsp+110h] [rbp-140h] BYREF
  unsigned __int64 v6; // [rsp+228h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  _V_strncpy(pActualManifestName, pManifestName, 260);
  _V_strncat(pActualManifestName, "_server", 260, 0xFFFFFFFFLL);
  m_pCurrentManifest = g_pEntitySystem->m_pCurrentManifest;
  if ( m_pCurrentManifest != 0 )
  {
    v3 = **m_pCurrentManifest;
    CFmtStrN<256,false>::CFmtStrN(&v5, "%s.%s", pActualManifestName, "vrnmd");
    v3(m_pCurrentManifest, v5.m_szBuf);
  }
}


