
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSteamGameServerAPIContext::Init  (line 176, @0x0000000002038070, libserver.so)
// calls: SteamGameServer_GetHSteamUser, SteamGameServer_GetHSteamPipe, SteamInternal_CreateInterface
// callers: CSteamWorksGameStatsUploader::GetInterface, CSource2Server::Init, CSource2Server::GameFrame, CDOTACustomGameCache::StartInstallingUGC, CGCClientSystem::GetSteamUniverse
// strings: "SteamClient017", "SteamGameServer012", "SteamUtils008", "SteamNetworking005", "SteamGameServerStats001", "STEAMHTTP_INTERFACE_VERSION002" (9 total)
bool __fastcall CSteamGameServerAPIContext::Init(CSteamGameServerAPIContext *const this)
{
  unsigned int HSteamUser; // r13d
  unsigned int HSteamPipe; // r12d
  ISteamClient *Interface; // rax
  ISteamGameServer *v6; // rax
  ISteamUtils *v7; // rax
  ISteamNetworking *v8; // rax
  ISteamGameServerStats *v9; // rax
  ISteamHTTP *v10; // rax
  ISteamInventory *v11; // rax
  ISteamUGC *v12; // rax
  ISteamApps *v13; // rax

  HSteamUser = SteamGameServer_GetHSteamUser();
  HSteamPipe = SteamGameServer_GetHSteamPipe();
  if ( HSteamPipe == 0 )
    return 0;
  Interface = SteamInternal_CreateInterface("SteamClient017");
  this->m_pSteamClient = Interface;
  if ( Interface == 0 )
    return 0;
  v6 = (*(*Interface + 48LL))(Interface, HSteamUser, HSteamPipe, "SteamGameServer012");
  this->m_pSteamGameServer = v6;
  if ( v6 == 0 )
    return 0;
  v7 = (*(*this->m_pSteamClient + 72LL))(this->m_pSteamClient, HSteamPipe, "SteamUtils008");
  this->m_pSteamGameServerUtils = v7;
  if ( v7 == 0 )
    return 0;
  v8 = (*(*this->m_pSteamClient + 128LL))(this->m_pSteamClient, HSteamUser, HSteamPipe, "SteamNetworking005");
  this->m_pSteamGameServerNetworking = v8;
  if ( v8 == 0 )
    return 0;
  v9 = (*(*this->m_pSteamClient + 112LL))(this->m_pSteamClient, HSteamUser, HSteamPipe, "SteamGameServerStats001");
  this->m_pSteamGameServerStats = v9;
  if ( v9 == 0 )
    return 0;
  v10 = (*(*this->m_pSteamClient + 184LL))(
          this->m_pSteamClient,
          HSteamUser,
          HSteamPipe,
          "STEAMHTTP_INTERFACE_VERSION002");
  this->m_pSteamHTTP = v10;
  if ( v10 == 0 )
    return 0;
  v11 = (*(*this->m_pSteamClient + 272LL))(
          this->m_pSteamClient,
          HSteamUser,
          HSteamPipe,
          "STEAMINVENTORY_INTERFACE_V001");
  this->m_pSteamInventory = v11;
  if ( v11 == 0 )
    return 0;
  v12 = (*(*this->m_pSteamClient + 208LL))(
          this->m_pSteamClient,
          HSteamUser,
          HSteamPipe,
          "STEAMUGC_INTERFACE_VERSION009");
  this->m_pSteamUGC = v12;
  if ( v12 == 0 )
    return 0;
  v13 = (*(*this->m_pSteamClient + 120LL))(
          this->m_pSteamClient,
          HSteamUser,
          HSteamPipe,
          "STEAMAPPS_INTERFACE_VERSION008");
  this->m_pSteamApps = v13;
  return v13 != 0;
}


