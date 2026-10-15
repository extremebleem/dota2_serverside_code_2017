
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Commander::CDOTA_Commander  (line 122, @0x0000000002814490, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTA_TeamCommander::CDOTA_TeamCommander, IGameSystem::~IGameSystem, _Unwind_Resume, CDOTA_TeamCommander::~CDOTA_TeamCommander
// callers: _GLOBAL__sub_I__unity_bot_01.cpp
void __fastcall CDOTA_Commander::CDOTA_Commander(CDOTA_Commander *const this)
{
  this->_vptr_IGameSystem = &off_42B7390;
  CDOTA_TeamCommander::CDOTA_TeamCommander(&this->m_GoodGuys);
  CDOTA_TeamCommander::CDOTA_TeamCommander(&this->m_BadGuys);
  this->m_PassabilityGrid.m_Size = 0;
  this->m_PassabilityGrid.m_Memory.m_pMemory = 0;
  this->m_PassabilityGrid.m_Memory.m_nAllocationCount = 0;
  this->m_PassabilityGrid.m_Memory.m_nGrowSize = 0;
  this->m_HeightGrid.m_Size = 0;
  this->m_HeightGrid.m_Memory.m_pMemory = 0;
  this->m_HeightGrid.m_Memory.m_nAllocationCount = 0;
  this->m_HeightGrid.m_Memory.m_nGrowSize = 0;
  this->m_DebugEntities.m_Size = 0;
  this->m_DebugEntities.m_Memory.m_pMemory = 0;
  this->m_DebugEntities.m_Memory.m_nAllocationCount = 0;
  this->m_DebugEntities.m_Memory.m_nGrowSize = 0;
  this->m_Thinkers.m_Size = 0;
  this->m_Thinkers.m_Memory.m_pMemory = 0;
  this->m_Thinkers.m_Memory.m_nAllocationCount = 0;
  this->m_Thinkers.m_Memory.m_nGrowSize = 0;
  this->m_IllusionStates.m_Size = 0;
  this->m_IllusionStates.m_Memory.m_pMemory = 0;
  this->m_IllusionStates.m_Memory.m_nAllocationCount = 0;
  this->m_IllusionStates.m_Memory.m_nGrowSize = 0;
}


// CDOTA_Commander::~CDOTA_Commander  (line 122, @0x0000000002815060, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<sIllusionState, CUtlMemory<sIllusionState, int> >::RemoveAll, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlVectorBase<CDOTA_Commander::sBotDebugEntity, CUtlMemory<CDOTA_Commander::sBotDebugEntity, int> >::RemoveAll, CDOTA_TeamCommander::~CDOTA_TeamCommander, IGameSystem::~IGameSystem, CUtlMemory<sIllusionState, int>::Purge, CUtlMemory<CDOTA_Commander::sBotDebugEntity, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<bool, int>::Purge, CUtlMemory<float, int>::Purge
void __fastcall CDOTA_Commander::~CDOTA_Commander(CDOTA_Commander *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = &off_42B7390;
  CUtlVectorBase<sIllusionState,CUtlMemory<sIllusionState,int>>::RemoveAll(&this->m_IllusionStates);
  if ( (this->m_IllusionStates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<sIllusionState,int>::Purge(&this->m_IllusionStates.m_Memory);
    if ( (this->m_IllusionStates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sIllusionState,int>::Purge(&this->m_IllusionStates.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Thinkers);
  if ( (this->m_Thinkers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Thinkers.m_Memory);
    if ( (this->m_Thinkers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Thinkers.m_Memory);
  }
  CUtlVectorBase<CDOTA_Commander::sBotDebugEntity,CUtlMemory<CDOTA_Commander::sBotDebugEntity,int>>::RemoveAll(&this->m_DebugEntities);
  if ( (this->m_DebugEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Commander::sBotDebugEntity,int>::Purge(&this->m_DebugEntities.m_Memory);
    if ( (this->m_DebugEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Commander::sBotDebugEntity,int>::Purge(&this->m_DebugEntities.m_Memory);
  }
  v2 = (this->m_HeightGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_HeightGrid.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<float,int>::Purge(&this->m_HeightGrid.m_Memory);
    if ( (this->m_HeightGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(&this->m_HeightGrid.m_Memory);
  }
  v2 = (this->m_PassabilityGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PassabilityGrid.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<bool,int>::Purge(&this->m_PassabilityGrid.m_Memory);
    if ( (this->m_PassabilityGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<bool,int>::Purge(&this->m_PassabilityGrid.m_Memory);
  }
  CDOTA_TeamCommander::~CDOTA_TeamCommander(&this->m_BadGuys);
  CDOTA_TeamCommander::~CDOTA_TeamCommander(&this->m_GoodGuys);
  IGameSystem::~IGameSystem(this);
}


// CDOTA_Commander::~CDOTA_Commander  (line 122, @0x0000000002815210, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Commander, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<sIllusionState, CUtlMemory<sIllusionState, int> >::RemoveAll, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlVectorBase<CDOTA_Commander::sBotDebugEntity, CUtlMemory<CDOTA_Commander::sBotDebugEntity, int> >::RemoveAll, CDOTA_TeamCommander::~CDOTA_TeamCommander, IGameSystem::~IGameSystem, operator delete, CUtlMemory<sIllusionState, int>::Purge, CUtlMemory<CDOTA_Commander::sBotDebugEntity, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<bool, int>::Purge, CUtlMemory<float, int>::Purge
void __fastcall CDOTA_Commander::~CDOTA_Commander(CDOTA_Commander *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = &off_42B7390;
  CUtlVectorBase<sIllusionState,CUtlMemory<sIllusionState,int>>::RemoveAll(&this->m_IllusionStates);
  if ( (this->m_IllusionStates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<sIllusionState,int>::Purge(&this->m_IllusionStates.m_Memory);
    if ( (this->m_IllusionStates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sIllusionState,int>::Purge(&this->m_IllusionStates.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Thinkers);
  if ( (this->m_Thinkers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Thinkers.m_Memory);
    if ( (this->m_Thinkers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Thinkers.m_Memory);
  }
  CUtlVectorBase<CDOTA_Commander::sBotDebugEntity,CUtlMemory<CDOTA_Commander::sBotDebugEntity,int>>::RemoveAll(&this->m_DebugEntities);
  if ( (this->m_DebugEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Commander::sBotDebugEntity,int>::Purge(&this->m_DebugEntities.m_Memory);
    if ( (this->m_DebugEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Commander::sBotDebugEntity,int>::Purge(&this->m_DebugEntities.m_Memory);
  }
  v2 = (this->m_HeightGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_HeightGrid.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<float,int>::Purge(&this->m_HeightGrid.m_Memory);
    if ( (this->m_HeightGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(&this->m_HeightGrid.m_Memory);
  }
  v2 = (this->m_PassabilityGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PassabilityGrid.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<bool,int>::Purge(&this->m_PassabilityGrid.m_Memory);
    if ( (this->m_PassabilityGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<bool,int>::Purge(&this->m_PassabilityGrid.m_Memory);
  }
  CDOTA_TeamCommander::~CDOTA_TeamCommander(&this->m_BadGuys);
  CDOTA_TeamCommander::~CDOTA_TeamCommander(&this->m_GoodGuys);
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_Commander::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 124, @0x0000000002811b00, libserver.so)
void __fastcall CDOTA_Commander::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTA_Commander *const this)
{
  ;
}


// CDOTA_Commander::DoesGameSystemReallocate  (line 124, @0x0000000002811b10, libserver.so)
// globals: CDOTA_Commander::sm_Factory
bool __fastcall CDOTA_Commander::DoesGameSystemReallocate(const CDOTA_Commander *const this)
{
  return (*(CDOTA_Commander::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_Commander::sm_Factory);
}


// CDOTA_Commander::SetGameSystemGlobalPtrs  (line 124, @0x0000000002811b30, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_Commander::sm_Factory
void __fastcall CDOTA_Commander::SetGameSystemGlobalPtrs(CDOTA_Commander *const this, void *pValue)
{
  if ( CDOTA_Commander::sm_Factory != 0 )
    (*(CDOTA_Commander::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_Commander::sm_Factory, pValue);
}


