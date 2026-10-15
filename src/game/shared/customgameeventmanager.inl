
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCustomGameEventManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 18, @0x0000000001f71d10, libserver.so)
void __fastcall CCustomGameEventManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CCustomGameEventManager *const this)
{
  ;
}


// CCustomGameEventManager::DoesGameSystemReallocate  (line 18, @0x0000000001f71d20, libserver.so)
// globals: CCustomGameEventManager::sm_Factory
bool __fastcall CCustomGameEventManager::DoesGameSystemReallocate(const CCustomGameEventManager *const this)
{
  return (*(CCustomGameEventManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CCustomGameEventManager::sm_Factory);
}


// CCustomGameEventManager::SetGameSystemGlobalPtrs  (line 18, @0x0000000001f71d40, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CCustomGameEventManager::sm_Factory
void __fastcall CCustomGameEventManager::SetGameSystemGlobalPtrs(CCustomGameEventManager *const this, void *pValue)
{
  if ( CCustomGameEventManager::sm_Factory != 0 )
    (*(CCustomGameEventManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CCustomGameEventManager::sm_Factory, pValue);
}


