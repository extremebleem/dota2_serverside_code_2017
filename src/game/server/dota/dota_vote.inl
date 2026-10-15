
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAVoteSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 24, @0x00000000027ce960, libserver.so)
void __fastcall CDOTAVoteSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTAVoteSystem *const this)
{
  ;
}


// CDOTAVoteSystem::DoesGameSystemReallocate  (line 24, @0x00000000027ce970, libserver.so)
// globals: CDOTAVoteSystem::sm_Factory
bool __fastcall CDOTAVoteSystem::DoesGameSystemReallocate(const CDOTAVoteSystem *const this)
{
  return (*(CDOTAVoteSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAVoteSystem::sm_Factory);
}


// CDOTAVoteSystem::SetGameSystemGlobalPtrs  (line 24, @0x00000000027ce990, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAVoteSystem::sm_Factory
void __fastcall CDOTAVoteSystem::SetGameSystemGlobalPtrs(CDOTAVoteSystem *const this, void *pValue)
{
  if ( CDOTAVoteSystem::sm_Factory != 0 )
    (*(CDOTAVoteSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTAVoteSystem::sm_Factory, pValue);
}


