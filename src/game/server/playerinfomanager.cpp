
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPlayerInfoManager::GetPlayerInfo  (line 22, @0x00000000023203f0, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
IPlayerInfo *__fastcall CPlayerInfoManager::GetPlayerInfo(CPlayerInfoManager *const this, CEntityIndex nEntityIndex)
{
  IPlayerInfo *result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rdx
  IPlayerInfo *m_pInstance; // rdx
  __int64 v6; // [rsp-8h] [rbp-8h]

  result = 0;
  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v3 != 0 )
    {
      v4 = &v3[nEntityIndex.m_Data & 0x1FF];
      if ( v4 != 0 )
      {
        *(&v6 - 8) = v4->m_EHandle.m_Index;
        if ( nEntityIndex.m_Data == (*(&v6 - 2) & 0x7FFF) )
        {
          m_pInstance = v4->m_pInstance;
          if ( m_pInstance != 0 )
            return m_pInstance + 512;
        }
      }
    }
  }
  return result;
}


// CPlayerInfoManager::GetGlobalVars  (line 35, @0x000000000231ebf0, libserver.so)
CGlobalVars *__fastcall CPlayerInfoManager::GetGlobalVars(CPlayerInfoManager *const this)
{
  return gpGlobals;
}


// CPluginBotManager::GetBotController  (line 40, @0x0000000002320470, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
IBotController *__fastcall CPluginBotManager::GetBotController(CPluginBotManager *const this, CEntityIndex nBotIndex)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rax
  IBotController *m_pInstance; // rbx
  char v5; // dl
  IBotController *result; // rax

  if ( nBotIndex.m_Data > 0x7FFE )
    return 0;
  v2 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nBotIndex.m_Data >> 9];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[nBotIndex.m_Data & 0x1FF];
  if ( v3 == 0 )
    return 0;
  if ( nBotIndex.m_Data != (v3->m_EHandle.m_Index & 0x7FFF) )
    return 0;
  m_pInstance = v3->m_pInstance;
  if ( v3->m_pInstance == 0 )
    return 0;
  v5 = (*(m_pInstance->_vptr_IBotController + 521))(m_pInstance);
  result = m_pInstance + 511;
  if ( v5 == 0 )
    return 0;
  return result;
}


// CPluginBotManager::CreateBot  (line 53, @0x0000000002320510, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, entindex
// calls: CBaseEntity::ClearFlags, CBaseEntity::AddFlag, DispatchSpawn, CEntityInstance::GetEntityIndex, Msg
// strings: "Failed to create Bot.\n"
CEntityIndex __fastcall CPluginBotManager::CreateBot(CPluginBotManager *const this, const char *botname)
{
  int v2; // eax
  CBaseEntity *m_pInstance; // rbx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rdx

  v2 = (*(*engine + 376LL))(engine, botname);
  if ( v2 == -1 )
  {
    Msg("Failed to create Bot.\n");
    return 0;
  }
  else
  {
    m_pInstance = 0;
    if ( v2 <= 0x7FFE )
    {
      v4 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
      if ( v4 != 0 )
      {
        v5 = &v4[v2 & 0x1FF];
        if ( v5 != 0 && (v5->m_EHandle.m_Index & 0x7FFF) == v2 )
          m_pInstance = v5->m_pInstance;
      }
    }
    CBaseEntity::ClearFlags(m_pInstance);
    CBaseEntity::AddFlag(m_pInstance, 384);
    (*(m_pInstance->_vptr_IHandleEntity + 70))(m_pInstance, 0);
    (*(m_pInstance->_vptr_IHandleEntity + 400))(m_pInstance, 1);
    DispatchSpawn(m_pInstance, 0);
    return CEntityInstance::GetEntityIndex(m_pInstance);
  }
}


