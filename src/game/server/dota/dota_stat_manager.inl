
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDotaStatManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 26, @0x0000000002728520, libserver.so)
void __fastcall CDotaStatManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDotaStatManager *const this)
{
  ;
}


// CDotaStatManager::DoesGameSystemReallocate  (line 26, @0x0000000002728530, libserver.so)
// globals: CDotaStatManager::sm_Factory
bool __fastcall CDotaStatManager::DoesGameSystemReallocate(const CDotaStatManager *const this)
{
  return (*(CDotaStatManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CDotaStatManager::sm_Factory);
}


// CDotaStatManager::SetGameSystemGlobalPtrs  (line 26, @0x0000000002728550, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDotaStatManager::sm_Factory
void __fastcall CDotaStatManager::SetGameSystemGlobalPtrs(CDotaStatManager *const this, void *pValue)
{
  if ( CDotaStatManager::sm_Factory != 0 )
    (*(CDotaStatManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CDotaStatManager::sm_Factory, pValue);
}


