
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEventLog::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 23, @0x000000000220e270, libserver.so)
void __fastcall CEventLog::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CEventLog *const this)
{
  ;
}


// CEventLog::DoesGameSystemReallocate  (line 23, @0x000000000220e290, libserver.so)
// globals: CEventLog::sm_Factory
bool __fastcall CEventLog::DoesGameSystemReallocate(const CEventLog *const this)
{
  return (*(CEventLog::sm_Factory->_vptr_IGameSystemFactory + 8))(CEventLog::sm_Factory);
}


// CEventLog::SetGameSystemGlobalPtrs  (line 23, @0x000000000220e2c0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CEventLog::sm_Factory
void __fastcall CEventLog::SetGameSystemGlobalPtrs(CEventLog *const this, void *pValue)
{
  if ( CEventLog::sm_Factory != 0 )
    (*(CEventLog::sm_Factory->_vptr_IGameSystemFactory + 7))(CEventLog::sm_Factory, pValue);
}


