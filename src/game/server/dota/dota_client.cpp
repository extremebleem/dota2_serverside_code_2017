
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ClientPutInServer  (line 43, @0x000000000246c1f0, libserver.so)
// calls: CDOTAPlayer::CreatePlayer, CBasePlayer::SetPlayerName
// callers: CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, CSource2GameClients::ClientPutInServer
void __fastcall ClientPutInServer(CEntityIndex nEntIndex, const char *playername, bool bFakePlayer)
{
  CDOTAPlayer *Player; // rax

  Player = CDOTAPlayer::CreatePlayer("player", nEntIndex);
  CBasePlayer::SetPlayerName(Player, playername);
}


// ClientActive  (line 54, @0x000000000246c220, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: DOTAInventoryManager, CInventoryManager::RegisterNonLocalPlayerInventory, __dynamic_cast
// callers: CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, CSource2GameClients::ClientActive
void __fastcall ClientActive(CEntityIndex nEntIndex, bool bLoadGame, bool bFakePlayer)
{
  const CSteamID *v4; // r12
  CInventoryManager *v5; // rax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rax
  void *v8; // rax

  if ( !bFakePlayer && steamgameserverapicontext->m_pSteamGameServer != 0 )
  {
    v4 = (*(*engine + 544LL))(engine, nEntIndex.m_Data);
    if ( v4 != 0 )
    {
      v5 = DOTAInventoryManager();
      CInventoryManager::RegisterNonLocalPlayerInventory(v5, v4, 1);
    }
  }
  if ( nEntIndex.m_Data <= 0x7FFE )
  {
    v6 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntIndex.m_Data >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[nEntIndex.m_Data & 0x1FF];
      if ( v7 != 0 && nEntIndex.m_Data == (v7->m_EHandle.m_Index & 0x7FFF) && v7->m_pInstance != 0 )
      {
        v8 = __dynamic_cast(v7->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTAPlayer, 0);
        if ( v8 != 0 )
          (*(*v8 + 3008LL))(v8);
      }
    }
  }
}


// GetGameDescription  (line 92, @0x000000000246c310, libserver.so)
// strings: "Dota 2"
const char *__cdecl GetGameDescription()
{
  if ( g_pGameRules != 0 )
    return (*(g_pGameRules->_vptr_CGameRules + 62))(g_pGameRules);
  else
    return "Dota 2";
}


// FindEntity  (line 107, @0x000000000246c340, libserver.so)  // inlines: FStrEq, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
CBaseEntity *__fastcall FindEntity(CEntityIndex pEdict, char *classname)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rax
  __int64 v5; // [rsp-8h] [rbp-8h]

  if ( classname != "" && *classname != 0 )
    return 0;
  if ( pEdict.m_Data > 0x7FFE )
    return 0;
  v2 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[pEdict.m_Data >> 9];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[pEdict.m_Data & 0x1FF];
  if ( v3 == 0 )
    return 0;
  *(&v5 - 8) = v3->m_EHandle.m_Index;
  if ( pEdict.m_Data == (*(&v5 - 2) & 0x7FFF) && v3->m_pInstance != 0 )
    return (*(v3->m_pInstance->_vptr_IHandleEntity + 530))(v3->m_pInstance);
  else
    return 0;
}


// InitManifestDesc<ClientGamePrecache_server::CTemplateArg>  (line 124, @0x000000000246c3d0, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// globals: `guard variable for'InitManifestDesc<ClientGamePrecache_server::CTemplateArg>(ClientGamePrecache_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<ClientGamePrecache_server::CTemplateArg>(ClientGamePrecache_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<ClientGamePrecache_server::CTemplateArg>(ClientGamePrecache_server::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<ClientGamePrecache_server::CTemplateArg>(
        ClientGamePrecache_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<ClientGamePrecache_server::CTemplateArg>(ClientGamePrecache_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<ClientGamePrecache_server::CTemplateArg>(ClientGamePrecache_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<ClientGamePrecache_server::CTemplateArg>(ClientGamePrecache_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<ClientGamePrecache_server::CTemplateArg>(ClientGamePrecache_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<ClientGamePrecache_server::CTemplateArg>(ClientGamePrecache_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<ClientGamePrecache_server::CTemplateArg>(ClientGamePrecache_server::CTemplateArg &)::s_Manifest;
}


// ClientGamePrecache  (line 130, @0x000000000246c420, libserver.so)
// callers: CClientPrecacheGameSystem::BuildGameSessionManifest
void __fastcall ClientGamePrecache(IEntityResourceManifest *pManifest)
{
  ;
}


// respawn  (line 136, @0x000000000246c430, libserver.so)
// callers: CBasePlayer::PlayerDeathThink
// strings: "reload\n"
void __fastcall respawn(CBaseEntity *pEdict, bool fCopyCorpse)
{
  if ( (*(g_pGameRules->_vptr_CGameRules + 61))(g_pGameRules) != 0
    || (*(g_pGameRules->_vptr_CGameRules + 59))(g_pGameRules) != 0 )
  {
    if ( fCopyCorpse )
      (*(pEdict->_vptr_IHandleEntity + 455))(pEdict);
  }
  else
  {
    (*(*engine + 280LL))(engine, "reload\n");
  }
}


// GameStartFrame  (line 160, @0x000000000246c4d0, libserver.so)  // inlines: GetInt
// callers: CSource2Server::GameFrame
void __cdecl GameStartFrame()
{
  if ( !g_fGameOver )
    gpGlobals->teamplay = teamplay.m_pParent->m_Value.m_nValue != 0;
}


