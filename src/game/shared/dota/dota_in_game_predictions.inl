
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAInGamePredictionGameSystem::~CDOTAInGamePredictionGameSystem  (line 36, @0x00000000025d4260, libserver.so)  // inlines: Purge, StopListeningForAllEvents, ~CAutoGameSystem, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlVectorBase<CDOTAInGamePredictionGameSystem::PredictionInfo_t, CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t, int>::Purge
void __fastcall CDOTAInGamePredictionGameSystem::~CDOTAInGamePredictionGameSystem(
        CDOTAInGamePredictionGameSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_41078F0;  // vptr: CDOTAInGamePredictionGameSystem
  this->_vptr_IGameEventListener2 = off_4107A48;
  CUtlVectorBase<CDOTAInGamePredictionGameSystem::PredictionInfo_t,CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t,int>>::RemoveAll(&this->m_activePredictions);
  if ( (this->m_activePredictions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t,int>::Purge(&this->m_activePredictions.m_Memory);
    if ( (this->m_activePredictions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t,int>::Purge(&this->m_activePredictions.m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTAInGamePredictionGameSystem::~CDOTAInGamePredictionGameSystem  (line 36, @0x00000000025d4320, libserver.so)  // inlines: Purge, StopListeningForAllEvents, ~CAutoGameSystem, ~CDOTAInGamePredictionGameSystem, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlVectorBase<CDOTAInGamePredictionGameSystem::PredictionInfo_t, CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t, int>::Purge
void __fastcall CDOTAInGamePredictionGameSystem::~CDOTAInGamePredictionGameSystem(
        CDOTAInGamePredictionGameSystem *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_41078F0;  // vptr: CDOTAInGamePredictionGameSystem
  this->_vptr_IGameEventListener2 = off_4107A48;
  CUtlVectorBase<CDOTAInGamePredictionGameSystem::PredictionInfo_t,CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t,int>>::RemoveAll(&this->m_activePredictions);
  if ( (this->m_activePredictions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t,int>::Purge(&this->m_activePredictions.m_Memory);
    if ( (this->m_activePredictions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t,int>::Purge(&this->m_activePredictions.m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTAInGamePredictionGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 38, @0x00000000025c55e0, libserver.so)
void __fastcall CDOTAInGamePredictionGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTAInGamePredictionGameSystem *const this)
{
  ;
}


// CDOTAInGamePredictionGameSystem::DoesGameSystemReallocate  (line 38, @0x00000000025c55f0, libserver.so)
// globals: CDOTAInGamePredictionGameSystem::sm_Factory
bool __fastcall CDOTAInGamePredictionGameSystem::DoesGameSystemReallocate(
        const CDOTAInGamePredictionGameSystem *const this)
{
  return (*(CDOTAInGamePredictionGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAInGamePredictionGameSystem::sm_Factory);
}


// CDOTAInGamePredictionGameSystem::SetGameSystemGlobalPtrs  (line 38, @0x00000000025c5610, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAInGamePredictionGameSystem::sm_Factory
void __fastcall CDOTAInGamePredictionGameSystem::SetGameSystemGlobalPtrs(
        CDOTAInGamePredictionGameSystem *const this,
        void *pValue)
{
  if ( CDOTAInGamePredictionGameSystem::sm_Factory != 0 )
    (*(CDOTAInGamePredictionGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDOTAInGamePredictionGameSystem::sm_Factory,
      pValue);
}


