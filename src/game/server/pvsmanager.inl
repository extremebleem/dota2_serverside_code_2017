
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPVSManager::~CPVSManager  (line 71, @0x0000000002372cc0, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CPVSManager::~CPVSManager(CPVSManager *const this)
{
  this->_vptr_IPVSManager = &off_40A29D0;
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CPVSManager::~CPVSManager  (line 71, @0x0000000002372ce0, libserver.so)  // inlines: ~CAutoGameSystem, ~CPVSManager
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CPVSManager::~CPVSManager(CPVSManager *const this)
{
  this->_vptr_IPVSManager = &off_40A29D0;
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CPVSManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 73, @0x00000000023711b0, libserver.so)
void __fastcall CPVSManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CPVSManager *const this)
{
  ;
}


// CPVSManager::DoesGameSystemReallocate  (line 73, @0x00000000023711c0, libserver.so)
// globals: CPVSManager::sm_Factory
bool __fastcall CPVSManager::DoesGameSystemReallocate(const CPVSManager *const this)
{
  return (*(CPVSManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CPVSManager::sm_Factory);
}


// CPVSManager::SetGameSystemGlobalPtrs  (line 73, @0x00000000023711e0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CPVSManager::sm_Factory
void __fastcall CPVSManager::SetGameSystemGlobalPtrs(CPVSManager *const this, void *pValue)
{
  if ( CPVSManager::sm_Factory != 0 )
    (*(CPVSManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CPVSManager::sm_Factory, pValue);
}


