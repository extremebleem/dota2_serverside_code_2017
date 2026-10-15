
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CItemGeneration::~CItemGeneration  (line 25, @0x0000000002e4fde0, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CItemGeneration::~CItemGeneration(CItemGeneration *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CItemGeneration::~CItemGeneration  (line 25, @0x0000000002e4fe00, libserver.so)  // inlines: ~CAutoGameSystem, ~CItemGeneration
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CItemGeneration::~CItemGeneration(CItemGeneration *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CItemGeneration::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 27, @0x0000000002e4f040, libserver.so)
void __fastcall CItemGeneration::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CItemGeneration *const this)
{
  ;
}


// CItemGeneration::DoesGameSystemReallocate  (line 27, @0x0000000002e4f050, libserver.so)
// globals: CItemGeneration::sm_Factory
bool __fastcall CItemGeneration::DoesGameSystemReallocate(const CItemGeneration *const this)
{
  return (*(CItemGeneration::sm_Factory->_vptr_IGameSystemFactory + 8))(CItemGeneration::sm_Factory);
}


// CItemGeneration::SetGameSystemGlobalPtrs  (line 27, @0x0000000002e4f070, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CItemGeneration::sm_Factory
void __fastcall CItemGeneration::SetGameSystemGlobalPtrs(CItemGeneration *const this, void *pValue)
{
  if ( CItemGeneration::sm_Factory != 0 )
    (*(CItemGeneration::sm_Factory->_vptr_IGameSystemFactory + 7))(CItemGeneration::sm_Factory, pValue);
}


