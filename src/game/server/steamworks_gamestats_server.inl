
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSteamWorksGameStatsServer::~CSteamWorksGameStatsServer  (line 16, @0x0000000002037ff0, libserver.so)
// calls: CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader
void __fastcall CSteamWorksGameStatsServer::~CSteamWorksGameStatsServer(CSteamWorksGameStatsServer *const this)
{
  this->_vptr_IGameSystem = off_3FE7610;  // vptr: CSteamWorksGameStatsServer
  this->_vptr_IGameEventListener2 = off_3FE77A0;
  CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader(this);
}


// CSteamWorksGameStatsServer::~CSteamWorksGameStatsServer  (line 16, @0x0000000002038020, libserver.so)  // inlines: ~CSteamWorksGameStatsServer
// calls: CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader, operator delete
void __fastcall CSteamWorksGameStatsServer::~CSteamWorksGameStatsServer(CSteamWorksGameStatsServer *const this)
{
  this->_vptr_IGameSystem = off_3FE7610;  // vptr: CSteamWorksGameStatsServer
  this->_vptr_IGameEventListener2 = off_3FE77A0;
  CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader(this);
  operator delete(this);
}


