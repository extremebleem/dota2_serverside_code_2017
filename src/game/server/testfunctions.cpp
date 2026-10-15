
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Test_CreateEntity  (line 17, @0x00000000023bbfc0, libserver.so)  // inlines: Arg, LeafCodeInfo_t, operator[]
// calls: CreateEntityByName, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/testfunct, "Test_CreateEntity", "Test_CreateEntity( %s ) failed.", "Test_CreateEntity: requires entity classname argument."
void __fastcall Test_CreateEntity(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  LeafCodeInfo_t v9; // [rsp+0h] [rbp-30h] BYREF

  if ( args->m_nArgc <= 1 )
  {
    v2 = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v9.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/testfunctions.cpp";
      v9.m_szFunction = "Test_CreateEntity";
      v9.m_nLine = 21;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v9,
        "Test_CreateEntity: requires entity classname argument.",
        v7,
        v8);
    }
    goto LABEL_6;
  }
  v2 = args->m_ppArgv[1];
  if ( CreateEntityByName(v2, -1) == 0 )
  {
    while ( 1 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v9.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/testfunctions.cpp";
        v9.m_szFunction = "Test_CreateEntity";
        v9.m_nLine = 28;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v9, "Test_CreateEntity( %s ) failed.", v2);
      }
LABEL_6:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
  }
}


// Test_RandomPlayerPosition  (line 33, @0x00000000023bd4d0, libserver.so)  // inlines: ForceOrigin, LeafCodeInfo_t, operator=
// calls: UTIL_GetLocalPlayer, CEntitySystem::GetActiveSpawnGroupHandle, CWorldGameSystem::GetWorldInfoForSpawnGroup, RandomFloat, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/testfunct, "Test_RandomPlayerPosition", "Test_RandomPlayerPosition: no local player entity."
void __fastcall Test_RandomPlayerPosition(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *LocalPlayer; // rbx
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  vec_t v5; // xmm0_4
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  float y; // [rsp+Ch] [rbp-44h]
  float z; // [rsp+10h] [rbp-40h]
  float vecOrigin; // [rsp+14h] [rbp-3Ch]
  float vecOrigin_4; // [rsp+18h] [rbp-38h]
  float vecOrigin_8; // [rsp+1Ch] [rbp-34h]
  float vecOrigin_8a; // [rsp+1Ch] [rbp-34h]
  LeafCodeInfo_t v16; // [rsp+20h] [rbp-30h] BYREF

  LocalPlayer = UTIL_GetLocalPlayer();
  if ( LocalPlayer == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v8, v9, v6, v7) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v16.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/testfunctions.cpp";
      v16.m_szFunction = "Test_RandomPlayerPosition";
      v16.m_nLine = 38;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v16,
        "Test_RandomPlayerPosition: no local player entity.");
    }
  }
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, ActiveSpawnGroupHandle);
  y = WorldInfoForSpawnGroup->m_WorldMins.y;
  z = WorldInfoForSpawnGroup->m_WorldMins.z;
  vecOrigin_8 = WorldInfoForSpawnGroup->m_WorldMaxs.y;
  vecOrigin = WorldInfoForSpawnGroup->m_WorldMaxs.z;
  vecOrigin_4 = RandomFloat(WorldInfoForSpawnGroup->m_WorldMins.x, WorldInfoForSpawnGroup->m_WorldMaxs.x);
  vecOrigin_8a = RandomFloat(y, vecOrigin_8);
  v5 = RandomFloat(z, vecOrigin);
  LocalPlayer->m_bForceOrigin = 1;
  LocalPlayer->m_vForcedOrigin.z = v5;
  LocalPlayer->m_vForcedOrigin.x = vecOrigin_4;
  LocalPlayer->m_vForcedOrigin.y = vecOrigin_8a;
}


