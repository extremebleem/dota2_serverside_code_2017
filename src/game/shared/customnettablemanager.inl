
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCustomNetTableManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 27, @0x0000000002455f40, libserver.so)
void __fastcall CCustomNetTableManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CCustomNetTableManager *const this)
{
  ;
}


// CCustomNetTableManager::DoesGameSystemReallocate  (line 27, @0x0000000002455f50, libserver.so)
// globals: CCustomNetTableManager::sm_Factory
bool __fastcall CCustomNetTableManager::DoesGameSystemReallocate(const CCustomNetTableManager *const this)
{
  return (*(CCustomNetTableManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CCustomNetTableManager::sm_Factory);
}


// CCustomNetTableManager::SetGameSystemGlobalPtrs  (line 27, @0x0000000002455f70, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CCustomNetTableManager::sm_Factory
void __fastcall CCustomNetTableManager::SetGameSystemGlobalPtrs(CCustomNetTableManager *const this, void *pValue)
{
  if ( CCustomNetTableManager::sm_Factory != 0 )
    (*(CCustomNetTableManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CCustomNetTableManager::sm_Factory, pValue);
}


