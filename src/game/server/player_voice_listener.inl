
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPlayerVoiceListener::~CPlayerVoiceListener  (line 16, @0x000000000233b620, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CPlayerVoiceListener::~CPlayerVoiceListener(CPlayerVoiceListener *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CPlayerVoiceListener::~CPlayerVoiceListener  (line 16, @0x000000000233b640, libserver.so)  // inlines: ~CAutoGameSystem, ~CPlayerVoiceListener
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CPlayerVoiceListener::~CPlayerVoiceListener(CPlayerVoiceListener *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CPlayerVoiceListener::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 18, @0x0000000002339890, libserver.so)
void __fastcall CPlayerVoiceListener::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CPlayerVoiceListener *const this)
{
  ;
}


// CPlayerVoiceListener::DoesGameSystemReallocate  (line 18, @0x00000000023398a0, libserver.so)
// globals: CPlayerVoiceListener::sm_Factory
bool __fastcall CPlayerVoiceListener::DoesGameSystemReallocate(const CPlayerVoiceListener *const this)
{
  return (*(CPlayerVoiceListener::sm_Factory->_vptr_IGameSystemFactory + 8))(CPlayerVoiceListener::sm_Factory);
}


// CPlayerVoiceListener::SetGameSystemGlobalPtrs  (line 18, @0x00000000023398c0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CPlayerVoiceListener::sm_Factory
void __fastcall CPlayerVoiceListener::SetGameSystemGlobalPtrs(CPlayerVoiceListener *const this, void *pValue)
{
  if ( CPlayerVoiceListener::sm_Factory != 0 )
    (*(CPlayerVoiceListener::sm_Factory->_vptr_IGameSystemFactory + 7))(CPlayerVoiceListener::sm_Factory, pValue);
}


