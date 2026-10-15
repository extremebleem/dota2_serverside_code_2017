
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavMeshGameEventListener::~CNavMeshGameEventListener  (line 22, @0x0000000002f06410, libserver.so)  // inlines: StopListeningForAllEvents, ~CGameEventListener, ~IGameEventListener2
void __fastcall CNavMeshGameEventListener::~CNavMeshGameEventListener(CNavMeshGameEventListener *const this)
{
  bool v2; // zf

  this->_vptr_INavMeshGameEventListener = &off_47B09E0;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
}


// CNavMeshGameEventListener::~CNavMeshGameEventListener  (line 22, @0x0000000002f06760, libserver.so)  // inlines: StopListeningForAllEvents, ~CGameEventListener, ~CNavMeshGameEventListener, ~IGameEventListener2
// calls: operator delete
void __fastcall CNavMeshGameEventListener::~CNavMeshGameEventListener(CNavMeshGameEventListener *const this)
{
  bool v2; // zf

  this->_vptr_INavMeshGameEventListener = &off_47B09E0;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  operator delete(this);
}


