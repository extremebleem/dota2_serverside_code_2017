
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTACustomGameCache::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 33, @0x00000000029a7570, libserver.so)
void __fastcall CDOTACustomGameCache::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTACustomGameCache *const this)
{
  ;
}


// CDOTACustomGameCache::DoesGameSystemReallocate  (line 33, @0x00000000029a7580, libserver.so)
// globals: CDOTACustomGameCache::sm_Factory
bool __fastcall CDOTACustomGameCache::DoesGameSystemReallocate(const CDOTACustomGameCache *const this)
{
  return (*(CDOTACustomGameCache::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTACustomGameCache::sm_Factory);
}


// CDOTACustomGameCache::SetGameSystemGlobalPtrs  (line 33, @0x00000000029a75a0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTACustomGameCache::sm_Factory
void __fastcall CDOTACustomGameCache::SetGameSystemGlobalPtrs(CDOTACustomGameCache *const this, void *pValue)
{
  if ( CDOTACustomGameCache::sm_Factory != 0 )
    (*(CDOTACustomGameCache::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTACustomGameCache::sm_Factory, pValue);
}


