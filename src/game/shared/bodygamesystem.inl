
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBodyGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 24, @0x0000000001f71cb0, libserver.so)
void __fastcall CBodyGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CBodyGameSystem *const this)
{
  ;
}


// CBodyGameSystem::DoesGameSystemReallocate  (line 24, @0x0000000001f71cc0, libserver.so)
// globals: CBodyGameSystem::sm_Factory
bool __fastcall CBodyGameSystem::DoesGameSystemReallocate(const CBodyGameSystem *const this)
{
  return (*(CBodyGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CBodyGameSystem::sm_Factory);
}


// CBodyGameSystem::SetGameSystemGlobalPtrs  (line 24, @0x0000000001f71ce0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CBodyGameSystem::sm_Factory
void __fastcall CBodyGameSystem::SetGameSystemGlobalPtrs(CBodyGameSystem *const this, void *pValue)
{
  if ( CBodyGameSystem::sm_Factory != 0 )
    (*(CBodyGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CBodyGameSystem::sm_Factory, pValue);
}


