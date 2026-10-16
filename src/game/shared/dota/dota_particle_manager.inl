
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_ParticleManagerSystem::~CDOTA_ParticleManagerSystem  (line 189, @0x00000000026a0850, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CDOTA_ParticleManagerSystem::~CDOTA_ParticleManagerSystem(CDOTA_ParticleManagerSystem *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTA_ParticleManagerSystem::~CDOTA_ParticleManagerSystem  (line 189, @0x00000000026a0870, libserver.so)  // inlines: ~CAutoGameSystem, ~CDOTA_ParticleManagerSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CDOTA_ParticleManagerSystem::~CDOTA_ParticleManagerSystem(CDOTA_ParticleManagerSystem *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_ParticleManagerSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 191, @0x000000000269ce50, libserver.so)
void __fastcall CDOTA_ParticleManagerSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_ParticleManagerSystem *const this)
{
  ;
}


// CDOTA_ParticleManagerSystem::DoesGameSystemReallocate  (line 191, @0x000000000269ce60, libserver.so)
// globals: CDOTA_ParticleManagerSystem::sm_Factory
bool __fastcall CDOTA_ParticleManagerSystem::DoesGameSystemReallocate(const CDOTA_ParticleManagerSystem *const this)
{
  return (*(CDOTA_ParticleManagerSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_ParticleManagerSystem::sm_Factory);
}


// CDOTA_ParticleManagerSystem::SetGameSystemGlobalPtrs  (line 191, @0x000000000269ce80, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_ParticleManagerSystem::sm_Factory
void __fastcall CDOTA_ParticleManagerSystem::SetGameSystemGlobalPtrs(
        CDOTA_ParticleManagerSystem *const this,
        void *pValue)
{
  if ( CDOTA_ParticleManagerSystem::sm_Factory != 0 )
    (*(CDOTA_ParticleManagerSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDOTA_ParticleManagerSystem::sm_Factory,
      pValue);
}


// CDOTA_ParticleManagerSystem::GameInit  (line 194, @0x00000000026bc7d0, libserver.so)
// calls: operator new, CDOTA_ParticleManager::CDOTA_ParticleManager, operator delete, _Unwind_Resume
void __fastcall CDOTA_ParticleManagerSystem::GameInit(
        CDOTA_ParticleManagerSystem *const this,
        const EventGameInit_t *const msg)
{
  CDOTA_ParticleManager *v3; // rbx

  v3 = operator new(0x38u);
  CDOTA_ParticleManager::CDOTA_ParticleManager(v3);
  this->m_pDOTAParticleManager = v3;
}


// CDOTA_ParticleManagerSystem::GameShutdown  (line 199, @0x00000000026bc790, libserver.so)
// calls: CDOTA_ParticleManager::~CDOTA_ParticleManager, operator delete
void __fastcall CDOTA_ParticleManagerSystem::GameShutdown(
        CDOTA_ParticleManagerSystem *const this,
        const EventGameShutdown_t *const msg)
{
  CDOTA_ParticleManager *m_pDOTAParticleManager; // rbx

  m_pDOTAParticleManager = this->m_pDOTAParticleManager;
  if ( m_pDOTAParticleManager != 0 )
  {
    CDOTA_ParticleManager::~CDOTA_ParticleManager(this->m_pDOTAParticleManager);
    operator delete(m_pDOTAParticleManager);
  }
  this->m_pDOTAParticleManager = 0;
}


