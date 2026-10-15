
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_OGS_VPROF::~CDOTA_OGS_VPROF  (line 34, @0x000000000262ed80, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CDOTA_OGS_VPROF::~CDOTA_OGS_VPROF(CDOTA_OGS_VPROF *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTA_OGS_VPROF::~CDOTA_OGS_VPROF  (line 34, @0x000000000262eda0, libserver.so)  // inlines: ~CAutoGameSystem, ~CDOTA_OGS_VPROF
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CDOTA_OGS_VPROF::~CDOTA_OGS_VPROF(CDOTA_OGS_VPROF *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_OGS_VPROF::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 36, @0x0000000002628c90, libserver.so)
void __fastcall CDOTA_OGS_VPROF::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTA_OGS_VPROF *const this)
{
  ;
}


// CDOTA_OGS_VPROF::DoesGameSystemReallocate  (line 36, @0x0000000002628ca0, libserver.so)
// globals: CDOTA_OGS_VPROF::sm_Factory
bool __fastcall CDOTA_OGS_VPROF::DoesGameSystemReallocate(const CDOTA_OGS_VPROF *const this)
{
  return (*(CDOTA_OGS_VPROF::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_OGS_VPROF::sm_Factory);
}


// CDOTA_OGS_VPROF::SetGameSystemGlobalPtrs  (line 36, @0x0000000002628cc0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_OGS_VPROF::sm_Factory
void __fastcall CDOTA_OGS_VPROF::SetGameSystemGlobalPtrs(CDOTA_OGS_VPROF *const this, void *pValue)
{
  if ( CDOTA_OGS_VPROF::sm_Factory != 0 )
    (*(CDOTA_OGS_VPROF::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_OGS_VPROF::sm_Factory, pValue);
}


