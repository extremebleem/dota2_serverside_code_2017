
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAGCServerSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 32, @0x00000000029a73e0, libserver.so)
void __fastcall CDOTAGCServerSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTAGCServerSystem *const this)
{
  ;
}


// CDOTAGCServerSystem::DoesGameSystemReallocate  (line 32, @0x00000000029a73f0, libserver.so)
// globals: CDOTAGCServerSystem::sm_Factory
bool __fastcall CDOTAGCServerSystem::DoesGameSystemReallocate(const CDOTAGCServerSystem *const this)
{
  return (*(CDOTAGCServerSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAGCServerSystem::sm_Factory);
}


// CDOTAGCServerSystem::SetGameSystemGlobalPtrs  (line 32, @0x00000000029a7410, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAGCServerSystem::sm_Factory
void __fastcall CDOTAGCServerSystem::SetGameSystemGlobalPtrs(CDOTAGCServerSystem *const this, void *pValue)
{
  if ( CDOTAGCServerSystem::sm_Factory != 0 )
    (*(CDOTAGCServerSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTAGCServerSystem::sm_Factory, pValue);
}


// CGCJobUploadSaveGame::~CGCJobUploadSaveGame  (line 288, @0x00000000029aa0b0, libserver.so)  // inlines: ~AutoDelete, ~CGCClientJob
// calls: KeyValues::~KeyValues, KeyValues::operator delete, GCSDK::CJob::~CJob
void __fastcall CGCJobUploadSaveGame::~CGCJobUploadSaveGame(CGCJobUploadSaveGame *const this)
{
  KeyValues *v2; // r12

  v2 = *(&this->m_cHeartbeatsBeforeTimeout + 1);
  this->_vptr_CJob = off_43048D0;
  if ( v2 != 0 )
  {
    KeyValues::~KeyValues(v2);
    KeyValues::operator delete(v2);
  }
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// CGCJobUploadSaveGame::~CGCJobUploadSaveGame  (line 288, @0x00000000029aa100, libserver.so)  // inlines: ~AutoDelete, ~CGCClientJob, ~CGCJobUploadSaveGame
// calls: KeyValues::~KeyValues, KeyValues::operator delete, GCSDK::CJob::~CJob, operator delete
void __fastcall CGCJobUploadSaveGame::~CGCJobUploadSaveGame(CGCJobUploadSaveGame *const this)
{
  KeyValues *v2; // r12

  v2 = *(&this->m_cHeartbeatsBeforeTimeout + 1);
  this->_vptr_CJob = off_43048D0;
  if ( v2 != 0 )
  {
    KeyValues::~KeyValues(v2);
    KeyValues::operator delete(v2);
  }
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


// CGCJobLoadSaveGame::~CGCJobLoadSaveGame  (line 307, @0x00000000029a8620, libserver.so)  // inlines: ~CGCClientJob
// calls: GCSDK::CJob::~CJob
void __fastcall CGCJobLoadSaveGame::~CGCJobLoadSaveGame(CGCJobLoadSaveGame *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
}


// CGCJobLoadSaveGame::~CGCJobLoadSaveGame  (line 307, @0x00000000029a8640, libserver.so)  // inlines: ~CGCClientJob, ~CGCJobLoadSaveGame
// calls: GCSDK::CJob::~CJob, operator delete
void __fastcall CGCJobLoadSaveGame::~CGCJobLoadSaveGame(CGCJobLoadSaveGame *const this)
{
  this->_vptr_CJob = off_40DB690;
  GCSDK::CJob::~CJob(this);
  operator delete(this);
}


