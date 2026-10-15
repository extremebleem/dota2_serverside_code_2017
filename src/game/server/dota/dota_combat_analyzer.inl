
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_CombatAnalyzer::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 43, @0x00000000024975a0, libserver.so)
void __fastcall CDOTA_CombatAnalyzer::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_CombatAnalyzer *const this)
{
  ;
}


// CDOTA_CombatAnalyzer::DoesGameSystemReallocate  (line 43, @0x00000000024975b0, libserver.so)
// globals: CDOTA_CombatAnalyzer::sm_Factory
bool __fastcall CDOTA_CombatAnalyzer::DoesGameSystemReallocate(const CDOTA_CombatAnalyzer *const this)
{
  return (*(CDOTA_CombatAnalyzer::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_CombatAnalyzer::sm_Factory);
}


// CDOTA_CombatAnalyzer::SetGameSystemGlobalPtrs  (line 43, @0x00000000024975d0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_CombatAnalyzer::sm_Factory
void __fastcall CDOTA_CombatAnalyzer::SetGameSystemGlobalPtrs(CDOTA_CombatAnalyzer *const this, void *pValue)
{
  if ( CDOTA_CombatAnalyzer::sm_Factory != 0 )
    (*(CDOTA_CombatAnalyzer::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_CombatAnalyzer::sm_Factory, pValue);
}


// CDOTA_RealtimeCombatAnalyzer::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 268, @0x0000000002497600, libserver.so)
void __fastcall CDOTA_RealtimeCombatAnalyzer::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_RealtimeCombatAnalyzer *const this)
{
  ;
}


// CDOTA_RealtimeCombatAnalyzer::DoesGameSystemReallocate  (line 268, @0x0000000002497610, libserver.so)
// globals: CDOTA_RealtimeCombatAnalyzer::sm_Factory
bool __fastcall CDOTA_RealtimeCombatAnalyzer::DoesGameSystemReallocate(const CDOTA_RealtimeCombatAnalyzer *const this)
{
  return (*(CDOTA_RealtimeCombatAnalyzer::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_RealtimeCombatAnalyzer::sm_Factory);
}


// CDOTA_RealtimeCombatAnalyzer::SetGameSystemGlobalPtrs  (line 268, @0x000000000249b1d0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_CombatAnalyzer::sm_Factory, CDOTA_RealtimeCombatAnalyzer::sm_Factory
void __fastcall CDOTA_RealtimeCombatAnalyzer::SetGameSystemGlobalPtrs(
        CDOTA_RealtimeCombatAnalyzer *const this,
        void *pValue)
{
  if ( CDOTA_CombatAnalyzer::sm_Factory != 0 )
    (*(CDOTA_CombatAnalyzer::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_CombatAnalyzer::sm_Factory);
  if ( CDOTA_RealtimeCombatAnalyzer::sm_Factory != 0 )
    (*(CDOTA_RealtimeCombatAnalyzer::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDOTA_RealtimeCombatAnalyzer::sm_Factory,
      pValue);
}


