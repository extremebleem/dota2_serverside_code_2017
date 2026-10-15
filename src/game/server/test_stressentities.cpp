
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// MoveToRandomSpot  (line 26, @0x00000000023c9d30, libserver.so)
// calls: UTIL_GetLocalPlayer, CBasePlayer::EyeVectors, GetRandomSpot, UTIL_SetOrigin
CBaseEntity *__fastcall MoveToRandomSpot(CBaseEntity *pEnt)
{
  CBasePlayer *LocalPlayer; // rax
  Vector vForward; // [rsp+0h] [rbp-30h] BYREF
  Vector vecOrigin; // [rsp+10h] [rbp-20h] BYREF

  if ( pEnt != 0 )
  {
    LocalPlayer = UTIL_GetLocalPlayer();
    if ( LocalPlayer != 0 )
    {
      CBasePlayer::EyeVectors(LocalPlayer, &vForward, 0, 0);
      vecOrigin = GetRandomSpot();
      UTIL_SetOrigin(pEnt, &vecOrigin, 0);
    }
  }
  return pEnt;
}


// GetRandomSpot  (line 44, @0x00000000023c9c80, libserver.so)  // inlines: operator=
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CWorldGameSystem::GetWorldInfoForSpawnGroup, RandomFloat
// callers: MoveToRandomSpot
Vector __cdecl GetRandomSpot()
{
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  float x; // [rsp+Ch] [rbp-34h]
  float y; // [rsp+10h] [rbp-30h]
  float vMax; // [rsp+14h] [rbp-2Ch]
  vec_t vMax_4; // [rsp+18h] [rbp-28h]
  float vMax_8; // [rsp+1Ch] [rbp-24h]
  float vMax_8a; // [rsp+1Ch] [rbp-24h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, ActiveSpawnGroupHandle);
  x = WorldInfoForSpawnGroup->m_WorldMins.x;
  y = WorldInfoForSpawnGroup->m_WorldMins.y;
  vMax = WorldInfoForSpawnGroup->m_WorldMaxs.x;
  vMax_8 = WorldInfoForSpawnGroup->m_WorldMaxs.y;
  vMax_4 = RandomFloat(WorldInfoForSpawnGroup->m_WorldMins.z, WorldInfoForSpawnGroup->m_WorldMaxs.z);
  vMax_8a = RandomFloat(y, vMax_8);
  *&result.x = __PAIR64__(LODWORD(vMax_8a), COERCE_UNSIGNED_INT(RandomFloat(x, vMax)));
  result.z = vMax_4;
  return result;
}


// Test_InitRandomEntitySpawner  (line 59, @0x00000000023e2480, libserver.so)  // inlines: AddToTail, CopyConstruct<CStressEntityReg*>, Element, GetListHead, GrowMemory, Purge, RemoveAll, atoi, operator[]
// calls: CUtlMemory<CStressEntityReg*, int>::Grow, strtol, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::SetCount, Msg, CUtlMemory<CStressEntityReg*, int>::Purge
// strings: "Test_InitRandomEntitySpawner: created %d slots.\n"
// globals: g_StressEntityRegs, CStressEntityReg::s_pHead, g_StressEntities
void __fastcall Test_InitRandomEntitySpawner(const CCommandContext *const ctx, const CCommand *const args)
{
  CStressEntityReg *i; // rbx
  CStressEntityReg **v4; // rax
  __int64 m_Size; // r12
  int v6; // eax
  int v7; // ebx

  g_StressEntityRegs.m_Size = 0;
  if ( (g_StressEntityRegs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CStressEntityReg *,int>::Purge(&g_StressEntityRegs.m_Memory);
  for ( i = CStressEntityReg::s_pHead; i != 0; i = i->m_pNext )
  {
    m_Size = g_StressEntityRegs.m_Size;
    v6 = g_StressEntityRegs.m_Size;
    if ( g_StressEntityRegs.m_Size == g_StressEntityRegs.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CStressEntityReg *,int>::Grow(&g_StressEntityRegs.m_Memory, 1);
      v6 = g_StressEntityRegs.m_Size;
    }
    g_StressEntityRegs.m_Size = v6 + 1;
    v4 = &g_StressEntityRegs.m_Memory.m_pMemory[m_Size];
    if ( v4 != 0 )
      *v4 = i;
  }
  v7 = 100;
  if ( args->m_nArgc > 1 )
    v7 = strtol(args->m_ppArgv[1], 0, 10);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&g_StressEntities);
  if ( (g_StressEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&g_StressEntities.m_Memory);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::SetCount(&g_StressEntities, v7);
  Msg("Test_InitRandomEntitySpawner: created %d slots.\n", v7);
}


// Test_SpawnRandomEntities  (line 78, @0x00000000023c13a0, libserver.so)  // inlines: Arg, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LeafCodeInfo_t, LookupEntity, Set, atoi, operator CEntityInstance*, operator=, operator[]
// calls: strtol, RandomInt, UTIL_RemoveImmediate, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/test_stre, "Test_SpawnRandomEntities", "Test_SpawnRandomEntities: not initialized (call Test_InitRandomEntitySpawner frst).", "Test_SpawnRandomEntities <min # entities> <max # entities> missing arguments."
// globals: g_StressEntities, g_StressEntityRegs, CEntityHandle::gm_pEntityList
void __fastcall Test_SpawnRandomEntities(const CCommandContext *const ctx, const CCommand *const args)
{
  unsigned int v3; // eax
  const char *v4; // rdi
  unsigned int v5; // r12d
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // r12d
  int v9; // eax
  CBaseEntity *v10; // rax
  CHandle<CBaseEntity> *v11; // rsi
  CEntityIdentity *m_pEntity; // rcx
  int v13; // edx
  __int16 v14; // ax
  __int64 v15; // r13
  CHandle<CBaseEntity> *v16; // rdx
  __int16 m_Index; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  LeafCodeInfo_t v28; // [rsp+0h] [rbp-40h] BYREF

  if ( args->m_nArgc <= 2 )
    goto LABEL_25;
  if ( g_StressEntities.m_Size == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v28.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/test_stressentities.cpp";
      v28.m_szFunction = "Test_SpawnRandomEntities";
      v28.m_nLine = 87;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v28,
        "Test_SpawnRandomEntities: not initialized (call Test_InitRandomEntitySpawner frst).",
        v24,
        v25);
    }
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v22, v23, v20, v21) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_25:
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v28.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/test_stressentities.cpp";
        v28.m_szFunction = "Test_SpawnRandomEntities";
        v28.m_nLine = 82;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v28,
          "Test_SpawnRandomEntities <min # entities> <max # entities> missing arguments.",
          v26,
          v27);
      }
    }
  }
  v3 = strtol(args->m_ppArgv[1], 0, 10);
  v4 = "";
  v5 = v3;
  if ( args->m_nArgc > 2 )
    v4 = args->m_ppArgv[2];
  v6 = 0;
  v7 = strtol(v4, 0, 10);
  v8 = RandomInt(v5, v7);
  if ( v8 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v15 = RandomInt(0, (g_StressEntities.m_Size - 1));
        v16 = &g_StressEntities.m_Memory.m_pMemory[v15];
        if ( g_StressEntities.m_Memory.m_pMemory[v15].m_Index + 2 > 1 )
        {
          m_Index = v16->m_Index;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[m_Index & 0x1FF];
            if ( v19 != 0
              && g_StressEntities.m_Memory.m_pMemory[v15].m_Index == v19->m_EHandle.m_Index
              && v19->m_pInstance != 0 )
            {
              UTIL_RemoveImmediate(v19->m_pInstance);
            }
          }
        }
        v9 = RandomInt(0, (g_StressEntityRegs.m_Size - 1));
        v10 = g_StressEntityRegs.m_Memory.m_pMemory[v9]->m_pFn();
        v11 = &g_StressEntities.m_Memory.m_pMemory[v15];
        if ( v10 != 0 )
        {
          m_pEntity = v10->m_pEntity;
          if ( m_pEntity != 0 )
            break;
        }
        ++v6;
        v11->m_Index = -1;
        if ( v6 == v8 )
          return;
      }
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      ++v6;
      LOWORD(v11->m_Index) = v14 | v11->m_Index & 0x8000;
      v11->m_Index = (v13 << 15) | v11->m_Index & 0x7FFF;
    }
    while ( v6 != v8 );
  }
}


// Test_RandomizeInPVS  (line 109, @0x00000000023c09f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsEffectActive, IsValid, LeafCodeInfo_t, LookupEntity, MarkPVSInformationDirty, RemoveEffects, atoi, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: strtol, RandomInt, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::AddEffects, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/test_stre, "Test_RandomizeInPVS", "Test_RandomizeInPVS <percentage chance to change>"
// globals: g_StressEntities, CEntityHandle::gm_pEntityList
void __fastcall Test_RandomizeInPVS(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v2; // r12
  int v3; // ebx
  int v4; // r13d
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CBaseEntity *m_pInstance; // r14
  unsigned int m_Value; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  LeafCodeInfo_t v17; // [rsp+0h] [rbp-40h] BYREF

  if ( args->m_nArgc <= 1 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/test_stressentities.cpp";
      v17.m_szFunction = "Test_RandomizeInPVS";
      v17.m_nLine = 113;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v17,
        "Test_RandomizeInPVS <percentage chance to change>",
        v15,
        v16);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
    JUMPOUT(0x23C0B85);
  }
  v2 = 0;
  v3 = 0;
  v4 = strtol(args->m_ppArgv[1], 0, 10);
  if ( g_StressEntities.m_Size > 0 )
  {
    while ( 1 )
    {
      m_Index = g_StressEntities.m_Memory.m_pMemory[v2].m_Index;
      if ( m_Index + 2 <= 1 )
        goto LABEL_4;
      m_Index_low = LOWORD(g_StressEntities.m_Memory.m_pMemory[v2].m_Index);
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
      if ( v7 == 0 )
        goto LABEL_4;
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 == 0 )
        goto LABEL_4;
      if ( m_Index != v8->m_EHandle.m_Index )
        goto LABEL_4;
      m_pInstance = v8->m_pInstance;
      if ( v8->m_pInstance == 0 || RandomInt(0, 100) >= v4 )
        goto LABEL_4;
      m_Value = m_pInstance->m_fEffects.m_Value;
      if ( (m_Value & 0x20) != 0 )
      {
        ++v3;
        ++v2;
        (*(m_pInstance->_vptr_IHandleEntity + 188))(m_pInstance, m_Value & 0xFFFFFFDF);
        m_pInstance->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
        CBaseEntity::DispatchUpdateTransmitState(m_pInstance);
        if ( g_StressEntities.m_Size <= v3 )
          return;
      }
      else
      {
        CBaseEntity::AddEffects(m_pInstance, 32);
LABEL_4:
        ++v3;
        ++v2;
        if ( g_StressEntities.m_Size <= v3 )
          return;
      }
    }
  }
}


// Test_RemoveAllRandomEntities  (line 135, @0x00000000023c0da0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: UTIL_Remove
// globals: g_StressEntities, CEntityHandle::gm_pEntityList
void __fastcall Test_RemoveAllRandomEntities(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v2; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  v2 = 0;
  for ( i = 0; g_StressEntities.m_Size > i; ++v2 )
  {
    while ( 1 )
    {
      v4 = &g_StressEntities.m_Memory.m_pMemory[v2];
      m_Index = g_StressEntities.m_Memory.m_pMemory[v2].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
            break;
        }
      }
      ++i;
      ++v2;
      if ( g_StressEntities.m_Size <= i )
        return;
    }
    UTIL_Remove(v8->m_pInstance);
    ++i;
  }
}


