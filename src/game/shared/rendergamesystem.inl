
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRenderGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 173, @0x0000000001f71ab0, libserver.so)
void __fastcall CRenderGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CRenderGameSystem *const this)
{
  ;
}


// CRenderGameSystem::DoesGameSystemReallocate  (line 173, @0x0000000001f71ac0, libserver.so)
// globals: CRenderGameSystem::sm_Factory
bool __fastcall CRenderGameSystem::DoesGameSystemReallocate(const CRenderGameSystem *const this)
{
  return (*(CRenderGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CRenderGameSystem::sm_Factory);
}


// CRenderGameSystem::SetGameSystemGlobalPtrs  (line 173, @0x0000000001f71ae0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CRenderGameSystem::sm_Factory
void __fastcall CRenderGameSystem::SetGameSystemGlobalPtrs(CRenderGameSystem *const this, void *pValue)
{
  if ( CRenderGameSystem::sm_Factory != 0 )
    (*(CRenderGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CRenderGameSystem::sm_Factory, pValue);
}


