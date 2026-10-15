
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTrackedControllerManager::~CTrackedControllerManager  (line 174, @0x00000000023e8e00, libserver.so)  // inlines: ~CAutoGameSystem, ~CThreadMutex
// calls: pthread_mutex_destroy, IGameSystem::~IGameSystem
void __fastcall CTrackedControllerManager::~CTrackedControllerManager(CTrackedControllerManager *const this)
{
  CThreadMutex *p_m_mutex; // rdi

  p_m_mutex = &this->m_mutex;
  *p_m_mutex[-1].m_Attr.__size = off_40B9490;
  pthread_mutex_destroy(&p_m_mutex->m_Mutex);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CTrackedControllerManager::~CTrackedControllerManager  (line 174, @0x00000000023e8e40, libserver.so)  // inlines: ~CAutoGameSystem, ~CThreadMutex, ~CTrackedControllerManager
// calls: pthread_mutex_destroy, IGameSystem::~IGameSystem, operator delete
void __fastcall CTrackedControllerManager::~CTrackedControllerManager(CTrackedControllerManager *const this)
{
  CThreadMutex *p_m_mutex; // rdi

  p_m_mutex = &this->m_mutex;
  *p_m_mutex[-1].m_Attr.__size = off_40B9490;
  pthread_mutex_destroy(&p_m_mutex->m_Mutex);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CTrackedControllerManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 176, @0x00000000023e51c0, libserver.so)
void __fastcall CTrackedControllerManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CTrackedControllerManager *const this)
{
  ;
}


// CTrackedControllerManager::DoesGameSystemReallocate  (line 176, @0x00000000023e51d0, libserver.so)
// globals: CTrackedControllerManager::sm_Factory
bool __fastcall CTrackedControllerManager::DoesGameSystemReallocate(const CTrackedControllerManager *const this)
{
  return (*(CTrackedControllerManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CTrackedControllerManager::sm_Factory);
}


// CTrackedControllerManager::SetGameSystemGlobalPtrs  (line 176, @0x00000000023e51f0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CTrackedControllerManager::sm_Factory
void __fastcall CTrackedControllerManager::SetGameSystemGlobalPtrs(CTrackedControllerManager *const this, void *pValue)
{
  if ( CTrackedControllerManager::sm_Factory != 0 )
    (*(CTrackedControllerManager::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CTrackedControllerManager::sm_Factory,
      pValue);
}


