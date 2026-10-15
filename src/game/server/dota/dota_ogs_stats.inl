
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_OGS::~CDOTA_OGS  (line 30, @0x0000000002631430, libserver.so)  // inlines: ~CCallback, ~CCallbackImpl
// calls: SteamAPI_UnregisterCallback
void __fastcall CDOTA_OGS::~CDOTA_OGS(CDOTA_OGS *const this)
{
  bool v2; // zf

  this->m_CallbackGSClientDeny._vptr_CCallbackBase = &off_40F5C90;
  if ( (this->m_CallbackGSClientDeny.m_nCallbackFlags & 1) != 0 )
    SteamAPI_UnregisterCallback(&this->m_CallbackGSClientDeny);
  v2 = (this->m_CallbackGSClientKick.m_nCallbackFlags & 1) == 0;
  this->m_CallbackGSClientKick._vptr_CCallbackBase = &off_3FB31D0;
  if ( !v2 )
    SteamAPI_UnregisterCallback(this);
}


// CDOTASteamWorksGameStatsServer::~CDOTASteamWorksGameStatsServer  (line 62, @0x0000000002631490, libserver.so)  // inlines: ~CSteamWorksGameStatsServer
// calls: CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader
void __fastcall CDOTASteamWorksGameStatsServer::~CDOTASteamWorksGameStatsServer(
        CDOTASteamWorksGameStatsServer *const this)
{
  this->_vptr_IGameSystem = off_3FE7610;
  this->_vptr_IGameEventListener2 = off_3FE77A0;
  CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader(this);
}


// CDOTASteamWorksGameStatsServer::~CDOTASteamWorksGameStatsServer  (line 62, @0x00000000026314d0, libserver.so)  // inlines: ~CDOTASteamWorksGameStatsServer, ~CSteamWorksGameStatsServer
// calls: CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader, operator delete
void __fastcall CDOTASteamWorksGameStatsServer::~CDOTASteamWorksGameStatsServer(
        CDOTASteamWorksGameStatsServer *const this)
{
  this->_vptr_IGameSystem = off_3FE7610;
  this->_vptr_IGameEventListener2 = off_3FE77A0;
  CSteamWorksGameStatsUploader::~CSteamWorksGameStatsUploader(this);
  operator delete(this);
}


// CDOTASteamWorksGameStatsServer::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 64, @0x0000000002628c30, libserver.so)
void __fastcall CDOTASteamWorksGameStatsServer::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTASteamWorksGameStatsServer *const this)
{
  ;
}


// CDOTASteamWorksGameStatsServer::DoesGameSystemReallocate  (line 64, @0x0000000002628c40, libserver.so)
// globals: CDOTASteamWorksGameStatsServer::sm_Factory
bool __fastcall CDOTASteamWorksGameStatsServer::DoesGameSystemReallocate(
        const CDOTASteamWorksGameStatsServer *const this)
{
  return (*(CDOTASteamWorksGameStatsServer::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTASteamWorksGameStatsServer::sm_Factory);
}


// CDOTASteamWorksGameStatsServer::SetGameSystemGlobalPtrs  (line 64, @0x0000000002628c60, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTASteamWorksGameStatsServer::sm_Factory
void __fastcall CDOTASteamWorksGameStatsServer::SetGameSystemGlobalPtrs(
        CDOTASteamWorksGameStatsServer *const this,
        void *pValue)
{
  if ( CDOTASteamWorksGameStatsServer::sm_Factory != 0 )
    (*(CDOTASteamWorksGameStatsServer::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDOTASteamWorksGameStatsServer::sm_Factory,
      pValue);
}


