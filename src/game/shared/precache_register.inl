
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPrecacheRegister::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 24, @0x00000000023704e0, libserver.so)
void __fastcall CPrecacheRegister::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CPrecacheRegister *const this)
{
  ;
}


// CPrecacheRegister::DoesGameSystemReallocate  (line 24, @0x00000000023704f0, libserver.so)
// globals: CPrecacheRegister::sm_Factory
bool __fastcall CPrecacheRegister::DoesGameSystemReallocate(const CPrecacheRegister *const this)
{
  return (*(CPrecacheRegister::sm_Factory->_vptr_IGameSystemFactory + 8))(CPrecacheRegister::sm_Factory);
}


// CPrecacheRegister::SetGameSystemGlobalPtrs  (line 24, @0x0000000002370510, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CPrecacheRegister::sm_Factory
void __fastcall CPrecacheRegister::SetGameSystemGlobalPtrs(CPrecacheRegister *const this, void *pValue)
{
  if ( CPrecacheRegister::sm_Factory != 0 )
    (*(CPrecacheRegister::sm_Factory->_vptr_IGameSystemFactory + 7))(CPrecacheRegister::sm_Factory, pValue);
}


// CPrecacheRegister::~CPrecacheRegister  (line 36, @0x0000000002372c20, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CPrecacheRegister::~CPrecacheRegister(CPrecacheRegister *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CPrecacheRegister::~CPrecacheRegister  (line 36, @0x0000000002372c40, libserver.so)  // inlines: ~CAutoGameSystem, ~CPrecacheRegister
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CPrecacheRegister::~CPrecacheRegister(CPrecacheRegister *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


