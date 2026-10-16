
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameTimescale::~CGameTimescale  (line 25, @0x0000000002246c90, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CGameTimescale::~CGameTimescale(CGameTimescale *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CGameTimescale::~CGameTimescale  (line 25, @0x0000000002246cb0, libserver.so)  // inlines: ~CAutoGameSystem, ~CGameTimescale
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CGameTimescale::~CGameTimescale(CGameTimescale *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CGameTimescale::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 27, @0x0000000002245b30, libserver.so)
void __fastcall CGameTimescale::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CGameTimescale *const this)
{
  ;
}


// CGameTimescale::DoesGameSystemReallocate  (line 27, @0x0000000002245b40, libserver.so)
// globals: CGameTimescale::sm_Factory
bool __fastcall CGameTimescale::DoesGameSystemReallocate(const CGameTimescale *const this)
{
  return (*(CGameTimescale::sm_Factory->_vptr_IGameSystemFactory + 8))(CGameTimescale::sm_Factory);
}


// CGameTimescale::SetGameSystemGlobalPtrs  (line 27, @0x0000000002245b60, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CGameTimescale::sm_Factory
void __fastcall CGameTimescale::SetGameSystemGlobalPtrs(CGameTimescale *const this, void *pValue)
{
  if ( CGameTimescale::sm_Factory != 0 )
    (*(CGameTimescale::sm_Factory->_vptr_IGameSystemFactory + 7))(CGameTimescale::sm_Factory, pValue);
}


