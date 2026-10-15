
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameEventListener::~CGameEventListener  (line 25, @0x0000000001eb3360, libserver.so)  // inlines: StopListeningForAllEvents, ~IGameEventListener2
// callers: CSteamWorksGameStatsUploader::CSteamWorksGameStatsUploader, CBaseDoor::CBaseDoor, CFishPool::CFishPool, CBasePropDoor::CBasePropDoor, CDOTAGameManager::CDOTAGameManager, CDOTABehaviorCompanion::OnStart, CDOTA_BaseNPC_HallofFame::CDOTA_BaseNPC_HallofFame, CNavMeshGameEventListener::CNavMeshGameEventListener
void __fastcall CGameEventListener::~CGameEventListener(CGameEventListener *const this)
{
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( this->m_bRegisteredForEvents )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
}


// CGameEventListener::~CGameEventListener  (line 25, @0x0000000001eb34d0, libserver.so)  // inlines: StopListeningForAllEvents, ~CGameEventListener, ~IGameEventListener2
// calls: operator delete
void __fastcall CGameEventListener::~CGameEventListener(CGameEventListener *const this)
{
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( this->m_bRegisteredForEvents )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  operator delete(this);
}


// CGameEventListener::StopListeningForAllEvents  (line 43, @0x0000000001f2c6b0 libserver.so, @0x000000000199a472 libserver.so)
// callers: CVScriptGameSystem::VScriptTerm, __static_initialization_and_destruction_0
void __fastcall CGameEventListener::StopListeningForAllEvents(CGameEventListener *const this)
{
  if ( gameeventmanager != 0 )
    (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
  this->m_bRegisteredForEvents = 0;
}


