
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLightQueryGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 30, @0x0000000001f71f90, libserver.so)
void __fastcall CLightQueryGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CLightQueryGameSystem *const this)
{
  ;
}


// CLightQueryGameSystem::DoesGameSystemReallocate  (line 30, @0x0000000001f71fa0, libserver.so)
// globals: CLightQueryGameSystem::sm_Factory
bool __fastcall CLightQueryGameSystem::DoesGameSystemReallocate(const CLightQueryGameSystem *const this)
{
  return (*(CLightQueryGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CLightQueryGameSystem::sm_Factory);
}


// CLightQueryGameSystem::SetGameSystemGlobalPtrs  (line 30, @0x0000000001f71fc0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CLightQueryGameSystem::sm_Factory
void __fastcall CLightQueryGameSystem::SetGameSystemGlobalPtrs(CLightQueryGameSystem *const this, void *pValue)
{
  if ( CLightQueryGameSystem::sm_Factory != 0 )
    (*(CLightQueryGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CLightQueryGameSystem::sm_Factory, pValue);
}


// CLightQueryGameSystem::OnClientGamePostSimulate  (line 54, @0x0000000001f84130, libserver.so)
// calls: CLightQueryGameSystem::OnPostSimulate
void __fastcall CLightQueryGameSystem::OnClientGamePostSimulate(
        CLightQueryGameSystem *const this,
        const EventClientGamePostSimulate_t *const msg)
{
  CLightQueryGameSystem::OnPostSimulate(this, msg);
}


// CLightQueryGameSystem::OnServerGamePostSimulate  (line 54, @0x0000000001f84140, libserver.so)
// calls: CLightQueryGameSystem::OnPostSimulate
void __fastcall CLightQueryGameSystem::OnServerGamePostSimulate(
        CLightQueryGameSystem *const this,
        const EventServerGamePostSimulate_t *const msg)
{
  CLightQueryGameSystem::OnPostSimulate(this, msg);
}


