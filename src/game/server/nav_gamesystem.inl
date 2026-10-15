
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 23, @0x0000000002f04ba0, libserver.so)
void __fastcall CNavGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CNavGameSystem *const this)
{
  ;
}


// CNavGameSystem::DoesGameSystemReallocate  (line 23, @0x0000000002f04bb0, libserver.so)
// globals: CNavGameSystem::sm_Factory
bool __fastcall CNavGameSystem::DoesGameSystemReallocate(const CNavGameSystem *const this)
{
  return (*(CNavGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CNavGameSystem::sm_Factory);
}


// CNavGameSystem::SetGameSystemGlobalPtrs  (line 23, @0x0000000002f04bd0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CNavGameSystem::sm_Factory
void __fastcall CNavGameSystem::SetGameSystemGlobalPtrs(CNavGameSystem *const this, void *pValue)
{
  if ( CNavGameSystem::sm_Factory != 0 )
    (*(CNavGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CNavGameSystem::sm_Factory, pValue);
}


// CNavGameSystem::DoesModRequirePrecaching  (line 56, @0x0000000002f04c00, libserver.so)
bool __fastcall CNavGameSystem::DoesModRequirePrecaching(CNavGameSystem *const this)
{
  return 0;
}


// CNavGameSystem::PrecacheModSpecificNavRelatedResources  (line 59, @0x0000000002f04c10, libserver.so)
void __fastcall CNavGameSystem::PrecacheModSpecificNavRelatedResources(
        CNavGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pManifest,
        const CNavPrecacheInfo *const rPrecacheInfo)
{
  ;
}


