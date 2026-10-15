
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CHLTVDirector::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 46, @0x000000000227aa10, libserver.so)
void __fastcall CHLTVDirector::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CHLTVDirector *const this)
{
  ;
}


// CHLTVDirector::DoesGameSystemReallocate  (line 46, @0x000000000227aa30, libserver.so)
// globals: CHLTVDirector::sm_Factory
bool __fastcall CHLTVDirector::DoesGameSystemReallocate(const CHLTVDirector *const this)
{
  return (*(CHLTVDirector::sm_Factory->_vptr_IGameSystemFactory + 8))(CHLTVDirector::sm_Factory);
}


// CHLTVDirector::SetGameSystemGlobalPtrs  (line 46, @0x000000000227aa60, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CHLTVDirector::sm_Factory
void __fastcall CHLTVDirector::SetGameSystemGlobalPtrs(CHLTVDirector *const this, void *pValue)
{
  if ( CHLTVDirector::sm_Factory != 0 )
    (*(CHLTVDirector::sm_Factory->_vptr_IGameSystemFactory + 7))(CHLTVDirector::sm_Factory, pValue);
}


// CHLTVDirector::GetDirectorCameraEventId  (line 65, @0x000000000227aaa0, libserver.so)
int __fastcall CHLTVDirector::GetDirectorCameraEventId(CHLTVDirector *const this)
{
  return -1;
}


// CHLTVDirector::GetFixedCameraEntityName  (line 83, @0x000000000227aac0, libserver.so)
// strings: "point_viewcontrol"
const char *__fastcall CHLTVDirector::GetFixedCameraEntityName(CHLTVDirector *const this)
{
  return "point_viewcontrol";
}


// CHLTVDirector::NewEventNotification  (line 108, @0x000000000227aad0, libserver.so)
void __fastcall CHLTVDirector::NewEventNotification(CHLTVDirector *const this, CHLTVGameEvent *event)
{
  ;
}


