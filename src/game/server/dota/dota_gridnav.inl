
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGridNav::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 164, @0x00000000025525b0, libserver.so)
void __fastcall CGridNav::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CGridNav *const this)
{
  ;
}


// CGridNav::DoesGameSystemReallocate  (line 164, @0x00000000025525c0, libserver.so)
// globals: CGridNav::sm_Factory
bool __fastcall CGridNav::DoesGameSystemReallocate(const CGridNav *const this)
{
  return (*(CGridNav::sm_Factory->_vptr_IGameSystemFactory + 8))(CGridNav::sm_Factory);
}


// CGridNav::SetGameSystemGlobalPtrs  (line 164, @0x00000000025525e0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CGridNav::sm_Factory
void __fastcall CGridNav::SetGameSystemGlobalPtrs(CGridNav *const this, void *pValue)
{
  if ( CGridNav::sm_Factory != 0 )
    (*(CGridNav::sm_Factory->_vptr_IGameSystemFactory + 7))(CGridNav::sm_Factory, pValue);
}


// CGridNav::FrameUpdatePostEntityThink  (line 219, @0x0000000002555b40, libserver.so)
// calls: C2DGridObstructionManager::FrameUpdatePostEntityThink
void __fastcall CGridNav::FrameUpdatePostEntityThink(
        CGridNav *const this,
        const EventServerPostEntityThink_t *const msg)
{
  C2DGridObstructionManager::FrameUpdatePostEntityThink(&this->m_ObstructionManager, msg);
}


