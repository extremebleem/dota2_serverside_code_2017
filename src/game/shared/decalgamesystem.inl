
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// PlaceDecalEvent_t::~PlaceDecalEvent_t  (line 18, @0x0000000001ea6800, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent
void __fastcall PlaceDecalEvent_t::~PlaceDecalEvent_t(PlaceDecalEvent_t *const this)
{
  *this = &off_3FB1C30;
  CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent(this);
}


// PlaceDecalEvent_t::~PlaceDecalEvent_t  (line 18, @0x0000000001ea6820, libserver.so)  // inlines: ~CNetMessagePB, ~PlaceDecalEvent_t
// calls: CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent, operator delete
void __fastcall PlaceDecalEvent_t::~PlaceDecalEvent_t(PlaceDecalEvent_t *const this)
{
  *this = &off_3FB1C30;
  CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent(this);
  operator delete(this);
}


// CDecalInfo::~CDecalInfo  (line 57, @0x0000000001f84000, libserver.so)  // inlines: ~CNetMessagePB, ~PlaceDecalEvent_t
// calls: CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent
// callers: CDecalGameSystem::AddDecalAndAssignToSlot, CDecalSaveRestoreBlockHandler::Restore
void __fastcall CDecalInfo::~CDecalInfo(CDecalInfo *const this)
{
  if ( *(this + 4) != 0 )
    (*(*g_pMeshSystem + 144LL))(g_pMeshSystem);
  *(this + 7) = &off_3FB1C30;
  CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent((this + 56));
}


// CDecalGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 167, @0x0000000001f71e40, libserver.so)
void __fastcall CDecalGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDecalGameSystem *const this)
{
  ;
}


// CDecalGameSystem::DoesGameSystemReallocate  (line 167, @0x0000000001f71e50, libserver.so)
// globals: CDecalGameSystem::sm_Factory
bool __fastcall CDecalGameSystem::DoesGameSystemReallocate(const CDecalGameSystem *const this)
{
  return (*(CDecalGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDecalGameSystem::sm_Factory);
}


// CDecalGameSystem::SetGameSystemGlobalPtrs  (line 167, @0x0000000001f71e70, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDecalGameSystem::sm_Factory
void __fastcall CDecalGameSystem::SetGameSystemGlobalPtrs(CDecalGameSystem *const this, void *pValue)
{
  if ( CDecalGameSystem::sm_Factory != 0 )
    (*(CDecalGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CDecalGameSystem::sm_Factory, pValue);
}


