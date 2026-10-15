
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_CustomUIManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 39, @0x0000000002498080, libserver.so)
void __fastcall CDOTA_CustomUIManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_CustomUIManager *const this)
{
  ;
}


// CDOTA_CustomUIManager::DoesGameSystemReallocate  (line 39, @0x0000000002498090, libserver.so)
// globals: CDOTA_CustomUIManager::sm_Factory
bool __fastcall CDOTA_CustomUIManager::DoesGameSystemReallocate(const CDOTA_CustomUIManager *const this)
{
  return (*(CDOTA_CustomUIManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_CustomUIManager::sm_Factory);
}


// CDOTA_CustomUIManager::SetGameSystemGlobalPtrs  (line 39, @0x00000000024980b0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_CustomUIManager::sm_Factory
void __fastcall CDOTA_CustomUIManager::SetGameSystemGlobalPtrs(CDOTA_CustomUIManager *const this, void *pValue)
{
  if ( CDOTA_CustomUIManager::sm_Factory != 0 )
    (*(CDOTA_CustomUIManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_CustomUIManager::sm_Factory, pValue);
}


