
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSteamWorksGameStatsServer::CSteamWorksGameStatsServer  (line 37, @0x0000000002037880, libserver.so)
// calls: CSteamWorksGameStatsUploader::CSteamWorksGameStatsUploader, CSteamWorksGameStatsUploader::Reset, CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader, _Unwind_Resume
// callers: CDOTASteamWorksGameStatsServer::CDOTASteamWorksGameStatsServer, _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "steamworks_sessionid_server", "CSteamWorksGameStatsServer"
void __fastcall CSteamWorksGameStatsServer::CSteamWorksGameStatsServer(CSteamWorksGameStatsServer *const this)
{
  CSteamWorksGameStatsUploader::CSteamWorksGameStatsUploader(
    this,
    "CSteamWorksGameStatsServer",
    "steamworks_sessionid_server");
  this->_vptr_IGameSystem = off_3FE7610;  // vptr: CSteamWorksGameStatsServer
  this->_vptr_IGameEventListener2 = off_3FE77A0;
  CSteamWorksGameStatsUploader::Reset(this);
}


// CSteamWorksGameStatsServer::AddSessionIDsToTable  (line 42, @0x0000000002036c30, libserver.so)  // inlines: entindex
// calls: CSteamWorksGameStatsUploader::WriteInt64ToTable, UTIL_PlayerByUserId, CEntityInstance::GetEntityIndex, V_atoui64
// strings: "ServerSessionID", "steamworks_sessionid_client"
void __fastcall CSteamWorksGameStatsServer::AddSessionIDsToTable(
        CSteamWorksGameStatsServer *const this,
        int iTableID,
        int iClientPlayerID)
{
  uint64 v3; // r12
  CBasePlayer *v5; // rax
  __int64 (__fastcall *v6)(IVEngineServer2 *, _QWORD, const char *); // r14
  CEntityIndex v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  uint64 v12; // rax

  v3 = iTableID;
  if ( iClientPlayerID <= 0x40 )
  {
    v5 = UTIL_PlayerByUserId(iClientPlayerID);
    if ( v5 != 0 )
    {
      v6 = *(*engine + 384LL);
      v7.m_Data = CEntityInstance::GetEntityIndex(v5).m_Data;
      v8 = v6(engine, v7.m_Data, "steamworks_sessionid_client");
      v12 = V_atoui64(v8, v11, v9, v10);
      CSteamWorksGameStatsUploader::WriteInt64ToTable(this, v12, v3, "SessionID");
    }
  }
  CSteamWorksGameStatsUploader::WriteInt64ToTable(this, this->m_SessionID, v3, "ServerSessionID");
}


// CSteamWorksGameStatsServer::WriteSessionRow  (line 62, @0x0000000002036db0, libserver.so)
// calls: CSteamWorksGameStatsUploader::GetInterface, CSteamWorksGameStatsUploader::WriteSessionRow
// strings: "ServerSessionID", "ServerIP", "ServerName", "StartMap"
void __fastcall CSteamWorksGameStatsServer::WriteSessionRow(CSteamWorksGameStatsServer *const this)
{
  ISteamGameStats *Interface; // rax

  Interface = CSteamWorksGameStatsUploader::GetInterface(this);
  this->m_SteamWorksInterface = Interface;
  if ( Interface != 0 )
  {
    (*(*Interface + 88LL))(Interface, this->m_SessionID, "ServerSessionID", this->m_SessionID);
    CSteamWorksGameStatsUploader::WriteSessionRow(this);
    (*(*this->m_SteamWorksInterface + 24LL))(
      this->m_SteamWorksInterface,
      this->m_SessionID,
      "ServerIP",
      this->m_pzServerIP);
    (*(*this->m_SteamWorksInterface + 24LL))(
      this->m_SteamWorksInterface,
      this->m_SessionID,
      "ServerName",
      this->m_pzHostName);
    (*(*this->m_SteamWorksInterface + 24LL))(
      this->m_SteamWorksInterface,
      this->m_SessionID,
      "StartMap",
      this->m_pzMapStart);
  }
}


// CSteamWorksGameStatsServer::GetGameStatsAccountType  (line 83, @0x0000000002035a80, libserver.so)
EGameStatsAccountType __fastcall CSteamWorksGameStatsServer::GetGameStatsAccountType(
        CSteamWorksGameStatsServer *const this)
{
  return (*(*engine + 160LL))(engine) == 0 ? 1 : 3;
}


