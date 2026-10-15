
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IGameSystem::Init  (line 173, @0x0000000001b4fe40, libserver.so)
bool __fastcall IGameSystem::Init(IGameSystem *const this)
{
  return 1;
}


// IGameSystem::PostInit  (line 174, @0x0000000001b4fe50, libserver.so)
void __fastcall IGameSystem::PostInit(IGameSystem *const this)
{
  ;
}


// IGameSystem::Shutdown  (line 175, @0x0000000001b4fe60, libserver.so)
void __fastcall IGameSystem::Shutdown(IGameSystem *const this)
{
  ;
}


// IGameSystem::GameInit  (line 184, @0x0000000001b4fe70, libserver.so)
void __fastcall IGameSystem::GameInit(IGameSystem *const this, const EventGameInit_t *const msg)
{
  ;
}


// IGameSystem::GameShutdown  (line 188, @0x0000000001b4fe80, libserver.so)
void __fastcall IGameSystem::GameShutdown(IGameSystem *const this, const EventGameShutdown_t *const msg)
{
  ;
}


// IGameSystem::GamePostInit  (line 191, @0x0000000001b4fe90, libserver.so)
void __fastcall IGameSystem::GamePostInit(IGameSystem *const this, const EventGamePostInit_t *const msg)
{
  ;
}


// IGameSystem::GamePreShutdown  (line 194, @0x0000000001b4fea0, libserver.so)
void __fastcall IGameSystem::GamePreShutdown(IGameSystem *const this, const EventGamePreShutdown_t *const msg)
{
  ;
}


// IGameSystem::BuildGameSessionManifest  (line 197, @0x0000000001b4feb0, libserver.so)
void __fastcall IGameSystem::BuildGameSessionManifest(
        IGameSystem *const this,
        const EventBuildGameSessionManifest_t *const msg)
{
  ;
}


// IGameSystem::GameActivate  (line 200, @0x0000000001b4fec0, libserver.so)
void __fastcall IGameSystem::GameActivate(IGameSystem *const this, const EventGameActivate_t *const msg)
{
  ;
}


// IGameSystem::ClientFullySignedOn  (line 203, @0x0000000001b4fed0, libserver.so)
void __fastcall IGameSystem::ClientFullySignedOn(IGameSystem *const this, const EventClientFullySignedOn_t *const msg)
{
  ;
}


// IGameSystem::ClientDisconnect  (line 207, @0x0000000001b4fee0, libserver.so)
void __fastcall IGameSystem::ClientDisconnect(IGameSystem *const this, const EventDisconnect_t *const msg)
{
  ;
}


// IGameSystem::GameDeactivate  (line 210, @0x0000000001b4fef0, libserver.so)
void __fastcall IGameSystem::GameDeactivate(IGameSystem *const this, const EventGameDeactivate_t *const msg)
{
  ;
}


// IGameSystem::SpawnGroupPrecache  (line 213, @0x0000000001b4ff00, libserver.so)
void __fastcall IGameSystem::SpawnGroupPrecache(IGameSystem *const this, const EventSpawnGroupPrecache_t *const msg)
{
  ;
}


// IGameSystem::SpawnGroupUncache  (line 217, @0x0000000001b4ff10, libserver.so)
void __fastcall IGameSystem::SpawnGroupUncache(IGameSystem *const this, const EventSpawnGroupUncache_t *const msg)
{
  ;
}


// IGameSystem::PreSpawnGroupLoad  (line 222, @0x0000000001b4ff20, libserver.so)
void __fastcall IGameSystem::PreSpawnGroupLoad(IGameSystem *const this, const EventPreSpawnGroupLoad_t *const msg)
{
  ;
}


// IGameSystem::PostSpawnGroupLoad  (line 223, @0x0000000001b4ff30, libserver.so)
void __fastcall IGameSystem::PostSpawnGroupLoad(IGameSystem *const this, const EventPostSpawnGroupLoad_t *const msg)
{
  ;
}


// IGameSystem::PreSpawnGroupUnload  (line 227, @0x0000000001b4ff40, libserver.so)
void __fastcall IGameSystem::PreSpawnGroupUnload(IGameSystem *const this, const EventPreSpawnGroupUnload_t *const msg)
{
  ;
}


// IGameSystem::PostSpawnGroupUnload  (line 228, @0x0000000001b4ff50, libserver.so)
void __fastcall IGameSystem::PostSpawnGroupUnload(
        IGameSystem *const this,
        const EventPostSpawnGroupUnload_t *const msg)
{
  ;
}


// IGameSystem::ActiveSpawnGroupChanged  (line 230, @0x0000000001b4ff60, libserver.so)
void __fastcall IGameSystem::ActiveSpawnGroupChanged(
        IGameSystem *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  ;
}


// IGameSystem::PostDataUpdate  (line 232, @0x0000000001b4ff70, libserver.so)
void __fastcall IGameSystem::PostDataUpdate(IGameSystem *const this, const EventClientPostDataUpdate_t *const msg)
{
  ;
}


// IGameSystem::PreRender  (line 233, @0x0000000001b4ff80, libserver.so)
void __fastcall IGameSystem::PreRender(IGameSystem *const this, const EventClientPreRender_t *const msg)
{
  ;
}


// IGameSystem::ClientPreEntityThink  (line 234, @0x0000000001b4ff90, libserver.so)
void __fastcall IGameSystem::ClientPreEntityThink(
        IGameSystem *const this,
        const EventClientPreEntityThink_t *const msg)
{
  ;
}


// IGameSystem::Update  (line 235, @0x0000000001b4ffa0, libserver.so)
void __fastcall IGameSystem::Update(IGameSystem *const this, const EventClientUpdate_t *const msg)
{
  ;
}


// IGameSystem::PostRender  (line 236, @0x0000000001b4ffb0, libserver.so)
void __fastcall IGameSystem::PostRender(IGameSystem *const this, const EventClientPostRender_t *const msg)
{
  ;
}


// IGameSystem::FrameUpdatePreEntityThink  (line 237, @0x0000000001b4ffc0, libserver.so)
void __fastcall IGameSystem::FrameUpdatePreEntityThink(
        IGameSystem *const this,
        const EventServerPreEntityThink_t *const msg)
{
  ;
}


// IGameSystem::FrameUpdatePostEntityThink  (line 238, @0x0000000001b4ffd0, libserver.so)
void __fastcall IGameSystem::FrameUpdatePostEntityThink(
        IGameSystem *const this,
        const EventServerPostEntityThink_t *const msg)
{
  ;
}


// IGameSystem::PreClientUpdate  (line 239, @0x0000000001b4ffe0, libserver.so)
void __fastcall IGameSystem::PreClientUpdate(IGameSystem *const this, const EventServerPreClientUpdate_t *const msg)
{
  ;
}


// IGameSystem::OnServerGamePostSimulate  (line 242, @0x0000000001b4fff0, libserver.so)
void __fastcall IGameSystem::OnServerGamePostSimulate(
        IGameSystem *const this,
        const EventServerGamePostSimulate_t *const msg)
{
  ;
}


// IGameSystem::OnClientGamePostSimulate  (line 243, @0x0000000001b50000, libserver.so)
void __fastcall IGameSystem::OnClientGamePostSimulate(
        IGameSystem *const this,
        const EventClientGamePostSimulate_t *const msg)
{
  ;
}


// IGameSystem::FrameBoundary  (line 246, @0x0000000001b50010, libserver.so)
void __fastcall IGameSystem::FrameBoundary(IGameSystem *const this, const EventGameFrameBoundary_t *const msg)
{
  ;
}


// IGameSystem::OutOfGameFrameBoundary  (line 249, @0x0000000001b50020, libserver.so)
void __fastcall IGameSystem::OutOfGameFrameBoundary(
        IGameSystem *const this,
        const EventOutOfGameFrameBoundary_t *const msg)
{
  ;
}


// IGameSystem::SaveGame  (line 252, @0x0000000001b50030, libserver.so)
void __fastcall IGameSystem::SaveGame(IGameSystem *const this, const EventSaveGame_t *const msg)
{
  ;
}


// IGameSystem::RestoreGame  (line 253, @0x0000000001b50040, libserver.so)
void __fastcall IGameSystem::RestoreGame(IGameSystem *const this, const EventRestoreGame_t *const msg)
{
  ;
}


// IGameSystem::GetName  (line 257, @0x0000000001b50050, libserver.so)
const char *__fastcall IGameSystem::GetName(const IGameSystem *const this)
{
  return this->m_pName;
}


// IGameSystem::SetGameSystemGlobalPtrs  (line 326, @0x0000000001b50060, libserver.so)
void __fastcall IGameSystem::SetGameSystemGlobalPtrs(IGameSystem *const this, void *pValue)
{
  ;
}


// IGameSystem::SetName  (line 329, @0x0000000001b50070, libserver.so)
void __fastcall IGameSystem::SetName(IGameSystem *const this, const char *pName)
{
  this->m_pName = pName;
}


// IGameSystem::DoesGameSystemReallocate  (line 331, @0x0000000001b50080, libserver.so)
bool __fastcall IGameSystem::DoesGameSystemReallocate(const IGameSystem *const this)
{
  return 0;
}


// CAutoGameSystem::~CAutoGameSystem  (line 385, @0x0000000001b50bb0, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CAutoGameSystem::~CAutoGameSystem(CAutoGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CAutoGameSystem::~CAutoGameSystem  (line 385, @0x0000000001b50bd0, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CAutoGameSystem::~CAutoGameSystem(CAutoGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDontUseThisGameSystem::~CDontUseThisGameSystem  (line 397, @0x0000000001f03d00, libserver.so)  // inlines: ~IGameSystem
void __fastcall CDontUseThisGameSystem::~CDontUseThisGameSystem(CDontUseThisGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FC4070;
}


// CDontUseThisGameSystem::~CDontUseThisGameSystem  (line 397, @0x0000000001f03eb0, libserver.so)  // inlines: ~CDontUseThisGameSystem, ~IGameSystem
// calls: operator delete
void __fastcall CDontUseThisGameSystem::~CDontUseThisGameSystem(CDontUseThisGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FC4070;
  operator delete(this);
}


// CDontUseThisGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 400, @0x0000000001f03cd0, libserver.so)
void __fastcall CDontUseThisGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDontUseThisGameSystem *const this)
{
  ;
}


// EventSpawnGroupPrecache_t::~EventSpawnGroupPrecache_t  (line 556, @0x0000000001f84290, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CSpawnGroupMgrGameSystem::SpawnGroupInit
void __fastcall EventSpawnGroupPrecache_t::~EventSpawnGroupPrecache_t(EventSpawnGroupPrecache_t *const this)
{
  if ( this->m_EntityLumpName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_EntityLumpName);
  if ( this->m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroupName);
}


// EventSpawnGroupUncache_t::~EventSpawnGroupUncache_t  (line 578, @0x0000000001f84350, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown
void __fastcall EventSpawnGroupUncache_t::~EventSpawnGroupUncache_t(EventSpawnGroupUncache_t *const this)
{
  if ( this->m_EntityLumpName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_EntityLumpName);
  if ( this->m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroupName);
}


// EventPreSpawnGroupLoad_t::~EventPreSpawnGroupLoad_t  (line 594, @0x0000000001f842d0, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities
void __fastcall EventPreSpawnGroupLoad_t::~EventPreSpawnGroupLoad_t(EventPreSpawnGroupLoad_t *const this)
{
  if ( this->m_EntityLumpName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_EntityLumpName);
  if ( this->m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroupName);
}


// EventPostSpawnGroupLoad_t::~EventPostSpawnGroupLoad_t  (line 610, @0x0000000001f89bb0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CUtlString::FreeMemoryBlock, CUtlMemory<CEntityHandle, int>::Purge
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities
void __fastcall EventPostSpawnGroupLoad_t::~EventPostSpawnGroupLoad_t(EventPostSpawnGroupLoad_t *const this)
{
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&this->m_EntityList);
  if ( (this->m_EntityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityHandle,int>::Purge(&this->m_EntityList.m_Memory);
    if ( (this->m_EntityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(&this->m_EntityList.m_Memory);
  }
  if ( this->m_EntityLumpName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_EntityLumpName);
  if ( this->m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroupName);
}


// EventPreSpawnGroupUnload_t::~EventPreSpawnGroupUnload_t  (line 627, @0x0000000001f89c20, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CEntityHandle, CUtlMemory<CEntityHandle, int> >::RemoveAll, CUtlString::FreeMemoryBlock, CUtlMemory<CEntityHandle, int>::Purge
// callers: CSpawnGroupMgrGameSystem::SpawnGroupShutdown
void __fastcall EventPreSpawnGroupUnload_t::~EventPreSpawnGroupUnload_t(EventPreSpawnGroupUnload_t *const this)
{
  CUtlVectorBase<CEntityHandle,CUtlMemory<CEntityHandle,int>>::RemoveAll(&this->m_EntityList);
  if ( (this->m_EntityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityHandle,int>::Purge(&this->m_EntityList.m_Memory);
    if ( (this->m_EntityList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(&this->m_EntityList.m_Memory);
  }
  if ( this->m_EntityLumpName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_EntityLumpName);
  if ( this->m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroupName);
}


// EventPostSpawnGroupUnload_t::~EventPostSpawnGroupUnload_t  (line 644, @0x0000000001f84310, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown
void __fastcall EventPostSpawnGroupUnload_t::~EventPostSpawnGroupUnload_t(EventPostSpawnGroupUnload_t *const this)
{
  if ( this->m_EntityLumpName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_EntityLumpName);
  if ( this->m_SpawnGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_SpawnGroupName);
}


// CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::Init  (line 751, @0x0000000001eb3160, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager>::Init(
        CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::Init  (line 751, @0x0000000001f72550, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem>::Init(
        CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook>::Init  (line 751, @0x0000000001f726e0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook>::Init(
        CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::Init  (line 751, @0x0000000001f727c0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem>::Init(
        CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::Init  (line 751, @0x0000000001f728a0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem>::Init(
        CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>::Init  (line 751, @0x0000000001f72980, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook>::Init(
        CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::Init  (line 751, @0x0000000001f72b50, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem>::Init(
        CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CNotifyManager, INotify>::Init  (line 751, @0x0000000001f73050, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CNotifyManager,INotify>::Init(
        CGameSystemReallocatingFactory<CNotifyManager,INotify> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>::Init  (line 751, @0x0000000001f73130, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem>::Init(
        CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>::Init  (line 751, @0x0000000001f73210, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager>::Init(
        CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::Init  (line 751, @0x0000000001f732f0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem>::Init(
        CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::Init  (line 751, @0x0000000001f733d0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem>::Init(
        CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::Init  (line 751, @0x0000000001f737d0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem>::Init(
        CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>::Init  (line 751, @0x0000000001f738b0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager>::Init(
        CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::Init  (line 751, @0x0000000001f73b40, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::Init  (line 751, @0x0000000001f89070, libserver.so)  // inlines: StaticInit
// calls: CPhysicsGameSystem::InitializeStandardCollisionNames
bool __fastcall CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem>::Init(
        CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> *const this)
{
  CPhysicsGameSystem::InitializeStandardCollisionNames();
  return 1;
}


// CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::Init  (line 751, @0x00000000020564f0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached>::Init(
        CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPropData, CPropData>::Init  (line 751, @0x00000000020565d0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPropData,CPropData>::Init(
        CGameSystemReallocatingFactory<CPropData,CPropData> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>::Init  (line 751, @0x000000000208f1a0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem>::Init(
        CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>::Init  (line 751, @0x000000000208f3e0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem>::Init(
        CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>::Init  (line 751, @0x00000000020f34d0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem>::Init(
        CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>::Init  (line 751, @0x00000000020f3850, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem>::Init(
        CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>::Init  (line 751, @0x00000000020f3930, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem>::Init(
        CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>::Init  (line 751, @0x00000000020fdfa0, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_InitFunc.m_Closure.m_pFunction.__pfn & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_InitFunc.m_Closure.m_pFunction.__pfn + *v2 - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::Init  (line 751, @0x00000000020fdfd0, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::Init  (line 751, @0x00000000020fe000, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::Init  (line 751, @0x00000000020fe030, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::Init  (line 751, @0x00000000020fe060, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHookupGameSystem>::Init  (line 751, @0x00000000020fe090, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::Init  (line 751, @0x00000000020fe0c0, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::Init  (line 751, @0x00000000020fe0f0, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHookupGameSystem>::Init  (line 751, @0x00000000020fe120, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::Init  (line 751, @0x00000000020fe150, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::Init  (line 751, @0x00000000020fe180, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::Init  (line 751, @0x00000000020fe1b0, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::Init  (line 751, @0x00000000020fe1e0, libserver.so)  // inlines: StaticInit, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_InitFunc
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::Init(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_InitFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_InitFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  return (pfn)(v2);
}


// CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::Init  (line 751, @0x0000000002125910, libserver.so)
// calls: CSource2EntitySystem::StaticInit
bool __fastcall CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem>::Init(
        CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> *const this)
{
  return CSource2EntitySystem::StaticInit();
}


// CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>::Init  (line 751, @0x00000000021b1850, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem>::Init(
        CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>::Init  (line 751, @0x00000000021b1980, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem>::Init(
        CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>::Init  (line 751, @0x00000000021b1b70, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem>::Init(
        CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::Init  (line 751, @0x000000000227b7c0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector>::Init(
        CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>::Init  (line 751, @0x000000000227bbc0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem>::Init(
        CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>::Init  (line 751, @0x00000000022a7040, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager>::Init(
        CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>::Init  (line 751, @0x0000000002304bf0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook>::Init(
        CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>::Init  (line 751, @0x0000000002371730, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager>::Init(
        CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPVSManager, IPVSManager>::Init  (line 751, @0x0000000002371860, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPVSManager,IPVSManager>::Init(
        CGameSystemReallocatingFactory<CPVSManager,IPVSManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::Init  (line 751, @0x0000000002371ed0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem>::Init(
        CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>::Init  (line 751, @0x0000000002371fb0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister>::Init(
        CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::Init  (line 751, @0x00000000023a9a40, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem>::Init(
        CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSceneManager, CSceneManager>::Init  (line 751, @0x00000000023aa290, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSceneManager,CSceneManager>::Init(
        CGameSystemReallocatingFactory<CSceneManager,CSceneManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CCheckClient, CCheckClient>::Init  (line 751, @0x0000000002410650, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CCheckClient,CCheckClient>::Init(
        CGameSystemReallocatingFactory<CCheckClient,CCheckClient> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>::Init  (line 751, @0x0000000002553f20, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem>::Init(
        CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::Init  (line 751, @0x0000000002554490, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog>::Init(
        CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::Init  (line 751, @0x00000000025d41b0, libserver.so)
// calls: CDOTAInGamePredictionGameSystem::StaticInit
bool __fastcall CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem>::Init(
        CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem> *const this)
{
  return CDOTAInGamePredictionGameSystem::StaticInit();
}


// CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>::Init  (line 751, @0x000000000262d5a0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList>::Init(
        CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>::Init  (line 751, @0x000000000269eb60, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem>::Init(
        CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::Init  (line 751, @0x00000000027ced30, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem>::Init(
        CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>::Init  (line 751, @0x00000000027cf040, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache>::Init(
        CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::Init  (line 751, @0x0000000002f05300, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem>::Init(
        CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::PostInit  (line 752, @0x0000000001eb3170, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager>::PostInit(
        CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::PostInit  (line 752, @0x0000000001f72560, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook>::PostInit  (line 752, @0x0000000001f726f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook>::PostInit(
        CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::PostInit  (line 752, @0x0000000001f727d0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::PostInit  (line 752, @0x0000000001f728b0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>::PostInit  (line 752, @0x0000000001f72990, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook>::PostInit(
        CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::PostInit  (line 752, @0x0000000001f72a60, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::PostInit  (line 752, @0x0000000001f72b60, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::PostInit  (line 752, @0x0000000001f72c80, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CNotifyManager, INotify>::PostInit  (line 752, @0x0000000001f73060, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CNotifyManager,INotify>::PostInit(
        CGameSystemReallocatingFactory<CNotifyManager,INotify> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>::PostInit  (line 752, @0x0000000001f73140, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>::PostInit  (line 752, @0x0000000001f73220, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager>::PostInit(
        CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::PostInit  (line 752, @0x0000000001f73300, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::PostInit  (line 752, @0x0000000001f733e0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::PostInit  (line 752, @0x0000000001f737e0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>::PostInit  (line 752, @0x0000000001f738c0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager>::PostInit(
        CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::PostInit  (line 752, @0x0000000002056500, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached>::PostInit(
        CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPropData, CPropData>::PostInit  (line 752, @0x00000000020565e0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPropData,CPropData>::PostInit(
        CGameSystemReallocatingFactory<CPropData,CPropData> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>::PostInit  (line 752, @0x000000000208f1b0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>::PostInit  (line 752, @0x000000000208f3f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem>::PostInit(
        CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f2600, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f26c0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f2780, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f2840, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f2900, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f29c0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f2a80, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f2b40, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f2c00, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f2cc0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f2db0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::PostInit  (line 752, @0x00000000020f2e70, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>::PostInit  (line 752, @0x00000000020f3410, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem>::PostInit(
        CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>::PostInit  (line 752, @0x00000000020f34e0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::PostInit  (line 752, @0x00000000020f3790, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem>::PostInit(
        CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>::PostInit  (line 752, @0x00000000020f3860, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem>::PostInit(
        CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>::PostInit  (line 752, @0x00000000020f3940, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>::PostInit  (line 752, @0x00000000021b1860, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem>::PostInit(
        CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>::PostInit  (line 752, @0x00000000021b1990, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem>::PostInit(
        CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>::PostInit  (line 752, @0x00000000021b1b80, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::PostInit  (line 752, @0x000000000227b7d0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector>::PostInit(
        CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>::PostInit  (line 752, @0x000000000227bbd0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>::PostInit  (line 752, @0x00000000022a7050, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager>::PostInit(
        CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>::PostInit  (line 752, @0x0000000002304c00, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook>::PostInit(
        CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>::PostInit  (line 752, @0x0000000002371740, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager>::PostInit(
        CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPVSManager, IPVSManager>::PostInit  (line 752, @0x0000000002371870, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPVSManager,IPVSManager>::PostInit(
        CGameSystemReallocatingFactory<CPVSManager,IPVSManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::PostInit  (line 752, @0x0000000002371ee0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>::PostInit  (line 752, @0x0000000002371fc0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister>::PostInit(
        CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::PostInit  (line 752, @0x00000000023a9a50, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem>::PostInit(
        CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSceneManager, CSceneManager>::PostInit  (line 752, @0x00000000023aa2a0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSceneManager,CSceneManager>::PostInit(
        CGameSystemReallocatingFactory<CSceneManager,CSceneManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CCheckClient, CCheckClient>::PostInit  (line 752, @0x0000000002410660, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CCheckClient,CCheckClient>::PostInit(
        CGameSystemReallocatingFactory<CCheckClient,CCheckClient> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>::PostInit  (line 752, @0x0000000002553f30, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::PostInit  (line 752, @0x00000000025544a0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog>::PostInit(
        CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::PostInit  (line 752, @0x00000000025c6790, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>::PostInit  (line 752, @0x000000000262d5b0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList>::PostInit(
        CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>::PostInit  (line 752, @0x000000000269eb70, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem>::PostInit(
        CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::PostInit  (line 752, @0x00000000027ced40, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>::PostInit  (line 752, @0x00000000027cf050, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache>::PostInit(
        CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::PostInit  (line 752, @0x0000000002f05310, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem>::PostInit(
        CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::Shutdown  (line 753, @0x0000000001eb3180, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager>::Shutdown(
        CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::Shutdown  (line 753, @0x0000000001f72570, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook>::Shutdown  (line 753, @0x0000000001f72700, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook>::Shutdown(
        CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::Shutdown  (line 753, @0x0000000001f727e0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::Shutdown  (line 753, @0x0000000001f728c0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>::Shutdown  (line 753, @0x0000000001f729a0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook>::Shutdown(
        CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::Shutdown  (line 753, @0x0000000001f72a70, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::Shutdown  (line 753, @0x0000000001f72c90, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CNotifyManager, INotify>::Shutdown  (line 753, @0x0000000001f73070, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CNotifyManager,INotify>::Shutdown(
        CGameSystemReallocatingFactory<CNotifyManager,INotify> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>::Shutdown  (line 753, @0x0000000001f73150, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>::Shutdown  (line 753, @0x0000000001f73230, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager>::Shutdown(
        CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::Shutdown  (line 753, @0x0000000001f73310, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::Shutdown  (line 753, @0x0000000001f733f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::Shutdown  (line 753, @0x0000000001f737f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>::Shutdown  (line 753, @0x0000000001f738d0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager>::Shutdown(
        CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::Shutdown  (line 753, @0x0000000001f77ed0, libserver.so)  // inlines: Purge, RemoveAll, StaticShutdown
// calls: CUtlMemory<RenderAttrGatherInfo_t, int>::Purge
// globals: CRenderGameSystem::ms_entityRenderAttrGatherTable
void __fastcall CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> *const this)
{
  CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Size = 0;
  if ( (CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<RenderAttrGatherInfo_t,int>::Purge(&CRenderGameSystem::ms_entityRenderAttrGatherTable.m_Memory);
}


// CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::Shutdown  (line 753, @0x0000000002056510, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached>::Shutdown(
        CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPropData, CPropData>::Shutdown  (line 753, @0x00000000020565f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPropData,CPropData>::Shutdown(
        CGameSystemReallocatingFactory<CPropData,CPropData> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>::Shutdown  (line 753, @0x000000000208f1c0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>::Shutdown  (line 753, @0x000000000208f400, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem>::Shutdown(
        CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020f2cd0, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>::Shutdown  (line 753, @0x00000000020f34f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>::Shutdown  (line 753, @0x00000000020f3870, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem>::Shutdown(
        CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>::Shutdown  (line 753, @0x00000000020f3950, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fc860, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fc890, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fc8c0, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fc8f0, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>::Shutdown  (line 753, @0x00000000020fc920, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fc950, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fc980, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fc9b0, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fc9e0, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fca10, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fca40, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::Shutdown  (line 753, @0x00000000020fca70, libserver.so)  // inlines: StaticShutdown, operator()
// globals: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_ShutdownFunc
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn;
  v2 = (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pthis
      + CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__delta);
  if ( (CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
      & 1) != 0 )
    pfn = *(CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::sm_ShutdownFunc.m_Closure.m_pFunction.__pfn
          + *v2
          - 1);
  pfn(v2);
}


// CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::Shutdown  (line 753, @0x0000000002111f70, libserver.so)
// calls: CSource2EntitySystem::StaticShutdown
void __fastcall CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem>::Shutdown(
        CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> *const this)
{
  CSource2EntitySystem::StaticShutdown();
}


// CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>::Shutdown  (line 753, @0x00000000021b1870, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem>::Shutdown(
        CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>::Shutdown  (line 753, @0x00000000021b19a0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem>::Shutdown(
        CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>::Shutdown  (line 753, @0x00000000021b1b90, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::Shutdown  (line 753, @0x000000000227b7e0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector>::Shutdown(
        CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>::Shutdown  (line 753, @0x000000000227bbe0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>::Shutdown  (line 753, @0x00000000022a7060, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager>::Shutdown(
        CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>::Shutdown  (line 753, @0x0000000002304c10, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook>::Shutdown(
        CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>::Shutdown  (line 753, @0x0000000002371750, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager>::Shutdown(
        CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPVSManager, IPVSManager>::Shutdown  (line 753, @0x0000000002371880, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPVSManager,IPVSManager>::Shutdown(
        CGameSystemReallocatingFactory<CPVSManager,IPVSManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::Shutdown  (line 753, @0x0000000002371ef0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>::Shutdown  (line 753, @0x0000000002371fd0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister>::Shutdown(
        CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::Shutdown  (line 753, @0x00000000023a9a60, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem>::Shutdown(
        CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CSceneManager, CSceneManager>::Shutdown  (line 753, @0x00000000023aa2b0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSceneManager,CSceneManager>::Shutdown(
        CGameSystemReallocatingFactory<CSceneManager,CSceneManager> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CCheckClient, CCheckClient>::Shutdown  (line 753, @0x0000000002410670, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CCheckClient,CCheckClient>::Shutdown(
        CGameSystemReallocatingFactory<CCheckClient,CCheckClient> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>::Shutdown  (line 753, @0x0000000002553f40, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::Shutdown  (line 753, @0x00000000025544b0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog>::Shutdown(
        CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::Shutdown  (line 753, @0x00000000025c67a0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>::Shutdown  (line 753, @0x000000000262d5c0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList>::Shutdown(
        CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>::Shutdown  (line 753, @0x000000000269eb80, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem>::Shutdown(
        CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::Shutdown  (line 753, @0x00000000027ced50, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>::Shutdown  (line 753, @0x00000000027cf060, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache>::Shutdown(
        CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::Shutdown  (line 753, @0x0000000002f05320, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem>::Shutdown(
        CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> *const this)
{
  ;
}


// CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::GetPriority  (line 754, @0x0000000001eb31f0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager>::GetPriority(
        const CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::GetPriority  (line 754, @0x0000000001f725e0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> *const this)
{
  return 17408;
}


// CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook>::GetPriority  (line 754, @0x0000000001f72770, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook>::GetPriority(
        const CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::GetPriority  (line 754, @0x0000000001f72850, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::GetPriority  (line 754, @0x0000000001f72930, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>::GetPriority  (line 754, @0x0000000001f72a10, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook>::GetPriority(
        const CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::GetPriority  (line 754, @0x0000000001f72b00, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::GetPriority  (line 754, @0x0000000001f72bd0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::GetPriority  (line 754, @0x0000000001f72d00, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CNotifyManager, INotify>::GetPriority  (line 754, @0x0000000001f730e0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CNotifyManager,INotify>::GetPriority(
        const CGameSystemReallocatingFactory<CNotifyManager,INotify> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>::GetPriority  (line 754, @0x0000000001f731c0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>::GetPriority  (line 754, @0x0000000001f732a0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager>::GetPriority(
        const CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::GetPriority  (line 754, @0x0000000001f73380, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> *const this)
{
  return -16383;
}


// CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::GetPriority  (line 754, @0x0000000001f73460, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::GetPriority  (line 754, @0x0000000001f73860, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>::GetPriority  (line 754, @0x0000000001f73940, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager>::GetPriority(
        const CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::GetPriority  (line 754, @0x0000000002056580, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached>::GetPriority(
        const CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPropData, CPropData>::GetPriority  (line 754, @0x0000000002056660, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CPropData,CPropData>::GetPriority(
        const CGameSystemReallocatingFactory<CPropData,CPropData> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>::GetPriority  (line 754, @0x000000000208f230, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>::GetPriority  (line 754, @0x000000000208f470, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f2670, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f2730, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f27f0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f28b0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f2970, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f2a30, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f2af0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f2bb0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f2c70, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f2d60, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f2e20, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::GetPriority  (line 754, @0x00000000020f2ee0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>::GetPriority  (line 754, @0x00000000020f3480, libserver.so)
int __fastcall CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> *const this)
{
  return 17408;
}


// CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>::GetPriority  (line 754, @0x00000000020f3560, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::GetPriority  (line 754, @0x00000000020f3800, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem>::GetPriority(
        const CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> *const this)
{
  return -16384;
}


// CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>::GetPriority  (line 754, @0x00000000020f38e0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>::GetPriority  (line 754, @0x00000000020f39c0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> *const this)
{
  return -16384;
}


// CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>::GetPriority  (line 754, @0x00000000021b18e0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem>::GetPriority(
        const CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>::GetPriority  (line 754, @0x00000000021b1a10, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>::GetPriority  (line 754, @0x00000000021b1c00, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::GetPriority  (line 754, @0x000000000227b850, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector>::GetPriority(
        const CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>::GetPriority  (line 754, @0x000000000227bc50, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>::GetPriority  (line 754, @0x00000000022a70d0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager>::GetPriority(
        const CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>::GetPriority  (line 754, @0x0000000002304c80, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook>::GetPriority(
        const CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>::GetPriority  (line 754, @0x00000000023717c0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager>::GetPriority(
        const CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPVSManager, IPVSManager>::GetPriority  (line 754, @0x00000000023718f0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CPVSManager,IPVSManager>::GetPriority(
        const CGameSystemReallocatingFactory<CPVSManager,IPVSManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::GetPriority  (line 754, @0x0000000002371f60, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>::GetPriority  (line 754, @0x0000000002372040, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister>::GetPriority(
        const CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::GetPriority  (line 754, @0x00000000023a9ad0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSceneManager, CSceneManager>::GetPriority  (line 754, @0x00000000023aa320, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CSceneManager,CSceneManager>::GetPriority(
        const CGameSystemReallocatingFactory<CSceneManager,CSceneManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CCheckClient, CCheckClient>::GetPriority  (line 754, @0x00000000024106e0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CCheckClient,CCheckClient>::GetPriority(
        const CGameSystemReallocatingFactory<CCheckClient,CCheckClient> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>::GetPriority  (line 754, @0x0000000002553fb0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::GetPriority  (line 754, @0x0000000002554520, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog>::GetPriority(
        const CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::GetPriority  (line 754, @0x00000000025c6810, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>::GetPriority  (line 754, @0x000000000262d630, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList>::GetPriority(
        const CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>::GetPriority  (line 754, @0x000000000269ebf0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::GetPriority  (line 754, @0x00000000027cedc0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem> *const this)
{
  return 17406;
}


// CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>::GetPriority  (line 754, @0x00000000027cf0d0, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache>::GetPriority(
        const CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::GetPriority  (line 754, @0x0000000002f05390, libserver.so)
int __fastcall CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem>::GetPriority(
        const CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::CreateGameSystem  (line 758, @0x0000000001eb3660, libserver.so)  // inlines: Construct<CServerAchievementManager>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CServerAchievementManager::CServerAchievementManager
IGameSystem *__fastcall CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager>::CreateGameSystem(
        CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager> *const this)
{
  CServerAchievementManager *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 360);
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CServerAchievementManager));
    CServerAchievementManager::CServerAchievementManager(v1);
  }
  (*(v1->_vptr_IGameSystem + 34))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook>::CreateGameSystem  (line 758, @0x0000000001f73e50, libserver.so)  // inlines: CStepSimulationHook, Construct<CStepSimulationHook>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook>::CreateGameSystem(
        CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FCE9B0;
    v2->_vptr_IGameSystem = off_3FCE9B0;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>::CreateGameSystem  (line 758, @0x0000000001f73ec0, libserver.so)  // inlines: CSimThinkHook, Construct<CSimThinkHook>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook>::CreateGameSystem(
        CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FCE310;
    v2->_vptr_IGameSystem = off_3FCE310;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::CreateGameSystem  (line 758, @0x0000000001f73f30, libserver.so)  // inlines: Construct<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FCDF10;
    v2->_vptr_IGameSystem = off_3FCDF10;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>::CreateGameSystem  (line 758, @0x0000000001f73fa0, libserver.so)  // inlines: CEntityHandle, CLightQueryGameSystem, Construct<CLightQueryGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> *const this)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
  {
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 0;
    v3 = off_3FCC9F0;
    *v2 = off_3FCC9F0;
    *(v2 + 5) = -1;
    *(v2 + 6) = -1;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>::CreateGameSystem  (line 758, @0x0000000001f774e0, libserver.so)  // inlines: CAimTargetManager, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CAimTargetManager>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager>::CreateGameSystem(
        CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> *const this)
{
  IGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 56);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x38u);
    v1->_vptr_IGameSystem = off_3FCB610;
    v1[1]._vptr_IGameSystem = off_3FCB778;
    v2 = off_3FCB610;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>::CreateGameSystem  (line 758, @0x0000000001f77560, libserver.so)  // inlines: CEntityTouchManager, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CEntityTouchManager>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager>::CreateGameSystem(
        CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager> *const this)
{
  IGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 56);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x38u);
    v1->_vptr_IGameSystem = off_3FCC7B0;
    v1[1]._vptr_IGameSystem = &off_3FCC910;
    v2 = off_3FCC7B0;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CNotifyManager, INotify>::CreateGameSystem  (line 758, @0x0000000001f775e0, libserver.so)  // inlines: CNotifyManager, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CNotifyManager>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CNotifyManager,INotify>::CreateGameSystem(
        CGameSystemReallocatingFactory<CNotifyManager,INotify> *const this)
{
  IGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 64);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x40u);
    v1->_vptr_IGameSystem = off_3FCCBB0;
    v1[1]._vptr_IGameSystem = off_3FCCD38;
    v1[1].m_pName = &off_3FCCD70;
    v2 = off_3FCCBB0;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::CreateGameSystem  (line 758, @0x0000000001f83fa0, libserver.so)  // inlines: Construct<CBodyGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CBodyGameSystem::CBodyGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> *const this)
{
  CBodyGameSystem *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CBodyGameSystem));
    CBodyGameSystem::CBodyGameSystem(v1);
  }
  (*(v1->_vptr_IGameSystem + 34))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::CreateGameSystem  (line 758, @0x0000000001f84440, libserver.so)  // inlines: Construct<CWorldGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CWorldGameSystem::CWorldGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> *const this)
{
  CWorldGameSystem *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 160);
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CWorldGameSystem));
    CWorldGameSystem::CWorldGameSystem(v1);
  }
  (*(v1->_vptr_IGameSystem + 34))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::CreateGameSystem  (line 758, @0x0000000001f92d00, libserver.so)  // inlines: Construct<CSoundOpGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: memset, CSoundOpGameSystem::CSoundOpGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem> *const this)
{
  CSoundOpGameSystem *v1; // rax
  CSoundOpGameSystem *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  v2 = v1;
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CSoundOpGameSystem));
    CSoundOpGameSystem::CSoundOpGameSystem(v2);
  }
  (*(v2->_vptr_IGameSystem + 34))(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::CreateGameSystem  (line 758, @0x0000000001f95970, libserver.so)  // inlines: Construct<CEntityDebugGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: memset, CEntityDebugGameSystem::CEntityDebugGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> *const this)
{
  CEntityDebugGameSystem *v1; // rax
  CEntityDebugGameSystem *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 680);
  v2 = v1;
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CEntityDebugGameSystem));
    CEntityDebugGameSystem::CEntityDebugGameSystem(v2);
  }
  (*(v2->_vptr_IGameSystem + 34))(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::CreateGameSystem  (line 758, @0x0000000001f96470, libserver.so)  // inlines: Construct<CPhysicsGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CPhysicsGameSystem::CPhysicsGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> *const this)
{
  CPhysicsGameSystem *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 368);
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CPhysicsGameSystem));
    CPhysicsGameSystem::CPhysicsGameSystem(v1);
  }
  (*(v1->_vptr_IGameSystem + 34))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::CreateGameSystem  (line 758, @0x0000000001f97f20, libserver.so)  // inlines: Construct<CSpawnGroupMgrGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: memset, CSpawnGroupMgrGameSystem::CSpawnGroupMgrGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> *const this)
{
  CSpawnGroupMgrGameSystem *v1; // rax
  CSpawnGroupMgrGameSystem *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 904);
  v2 = v1;
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CSpawnGroupMgrGameSystem));
    CSpawnGroupMgrGameSystem::CSpawnGroupMgrGameSystem(v2);
  }
  (*(v2->_vptr_IGameSpawnGroupMgr + 19))(v2, v2);
  return &v2->CAutoGameSystem;
}


// CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::CreateGameSystem  (line 758, @0x0000000001fa5180, libserver.so)  // inlines: Construct<CDecalGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: memset, CDecalGameSystem::CDecalGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem> *const this)
{
  CDecalGameSystem *v1; // rax
  CDecalGameSystem *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1376);
  v2 = v1;
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CDecalGameSystem));
    CDecalGameSystem::CDecalGameSystem(v2);
  }
  (*(v2->_vptr_IGameSystem + 34))(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::CreateGameSystem  (line 758, @0x0000000001fa5230, libserver.so)  // inlines: Construct<CRenderGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: memset, CRenderGameSystem::CRenderGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> *const this)
{
  CRenderGameSystem *v1; // rax
  CRenderGameSystem *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1984);
  v2 = v1;
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CRenderGameSystem));
    CRenderGameSystem::CRenderGameSystem(v2);
  }
  (*(v2->_vptr_IGameSystem + 34))(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CPropData, CPropData>::CreateGameSystem  (line 758, @0x0000000002056fd0, libserver.so)  // inlines: Construct<CPropData>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CPropData::CPropData
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPropData,CPropData>::CreateGameSystem(
        CGameSystemReallocatingFactory<CPropData,CPropData> *const this)
{
  CPropData *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 64);
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CPropData));
    CPropData::CPropData(v1);
  }
  (*(v1->_vptr_IGameSystem + 34))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::CreateGameSystem  (line 758, @0x0000000002058510, libserver.so)  // inlines: CBreakModelsPrecached, CUtlStringMap, CUtlVector, CUtlVectorBase, Construct<CBreakModelsPrecached>, MemAlloc_InlineCallocMemsetFunc, memset, ~CAutoGameSystem, ~CUtlVector
// calls: CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t, int>::CUtlMemory, CUtlSymbolTable::CUtlSymbolTable, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlVectorBase<CBreakModelsPrecached::BreakModelInfo_t, CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t, int> >::~CUtlVectorBase
IGameSystem *__fastcall CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached>::CreateGameSystem(
        CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached> *const this)
{
  __int64 v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 128);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x80u);
    *v1 = off_3FEB830;
    CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t,int>::CUtlMemory((v1 + 32), 0, 32);
    CUtlSymbolTable::CUtlSymbolTable((v1 + 48), 0, 32, 1);
  }
  (*(*v1 + 272LL))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>::CreateGameSystem  (line 758, @0x000000000208faa0, libserver.so)  // inlines: CDebugOverlayGameSystem, Construct<CDebugOverlayGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> *const this)
{
  IGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 72);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x48u);
    LOBYTE(v1[4]._vptr_IGameSystem) = 1;
    v1->_vptr_IGameSystem = off_3FF0F70;
    v1[1]._vptr_IGameSystem = off_3FF10F8;
    v1[1].m_pName = &off_3FF1130;
    v2 = off_3FF0F70;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>::CreateGameSystem  (line 758, @0x00000000020926c0, libserver.so)  // inlines: CScenePrecacheSystem, CUtlMap, CUtlRBTree, Construct<CScenePrecacheSystem>, MemAlloc_InlineCallocMemsetFunc, ResetDbgInfo, memset
// globals: CDefOps<int>::LessFunc(int const&,int const&)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> *const this)
{
  IGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 64);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x40u);
    v1->_vptr_IGameSystem = off_3FECE50;
    v1[1].m_pName = CDefOps<int>::LessFunc;
    LOWORD(v1[3]._vptr_IGameSystem) = -1;
    WORD2(v1[3]._vptr_IGameSystem) = -1;
    HIWORD(v1[3]._vptr_IGameSystem) = -1;
    v2 = off_3FECE50;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f4ef0, libserver.so)  // inlines: Construct<GameToolEventToolTraceRayResult_tHookupGameSystem>, GameToolEventToolTraceRayResult_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FFB5B0;
    v2->_vptr_IGameSystem = off_3FFB5B0;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f4f60, libserver.so)  // inlines: Construct<GameToolEventTraceRayServerToolEvent_tHookupGameSystem>, GameToolEventTraceRayServerToolEvent_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FFB290;
    v2->_vptr_IGameSystem = off_3FFB290;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f4fd0, libserver.so)  // inlines: Construct<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FFAF70;
    v2->_vptr_IGameSystem = off_3FFAF70;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f5040, libserver.so)  // inlines: Construct<GameToolEventRestartMapToolEvent_tHookupGameSystem>, GameToolEventRestartMapToolEvent_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FFAC50;
    v2->_vptr_IGameSystem = off_3FFAC50;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f50b0, libserver.so)  // inlines: Construct<GameToolEventDestroyEntityToolEvent_tHookupGameSystem>, GameToolEventDestroyEntityToolEvent_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FFA930;
    v2->_vptr_IGameSystem = off_3FFA930;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f5120, libserver.so)  // inlines: Construct<GameToolEventSpawnEntityToolEvent_tHookupGameSystem>, GameToolEventSpawnEntityToolEvent_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FFA610;
    v2->_vptr_IGameSystem = off_3FFA610;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f5190, libserver.so)  // inlines: Construct<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FFA2F0;
    v2->_vptr_IGameSystem = off_3FFA2F0;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f5200, libserver.so)  // inlines: Construct<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FF9FD0;
    v2->_vptr_IGameSystem = off_3FF9FD0;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f5270, libserver.so)  // inlines: Construct<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FF9CB0;
    v2->_vptr_IGameSystem = off_3FF9CB0;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f52e0, libserver.so)  // inlines: Construct<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FF9990;
    v2->_vptr_IGameSystem = off_3FF9990;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f5350, libserver.so)  // inlines: Construct<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FF9670;
    v2->_vptr_IGameSystem = off_3FF9670;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f53c0, libserver.so)  // inlines: Construct<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FF9350;
    v2->_vptr_IGameSystem = off_3FF9350;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>::CreateGameSystem  (line 758, @0x00000000020f5430, libserver.so)  // inlines: Construct<GameEvent_RegisterHookupGameSystem>, GameEvent_RegisterHookupGameSystem, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FF7650;
    v2->_vptr_IGameSystem = off_3FF7650;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::CreateGameSystem  (line 758, @0x00000000020f54a0, libserver.so)  // inlines: CSource2EntitySystem, Construct<CSource2EntitySystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FF6950;
    v2->_vptr_IGameSystem = off_3FF6950;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>::CreateGameSystem  (line 758, @0x00000000020f5510, libserver.so)  // inlines: CRespawnAllEntitiesSystem, Construct<CRespawnAllEntitiesSystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_3FF6710;
    v2->_vptr_IGameSystem = off_3FF6710;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>::CreateGameSystem  (line 758, @0x00000000020fb410, libserver.so)  // inlines: CSpawnGroupCompletionCallbackGameSystem, Construct<CSpawnGroupCompletionCallbackGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> *const this)
{
  IGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 56);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x38u);
    v2 = off_3FF6450;
    v1->_vptr_IGameSystem = off_3FF6450;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>::CreateGameSystem  (line 758, @0x00000000020fb860, libserver.so)  // inlines: CEntityIndex, CServerSideClient_GameEventLegacyProxy, CSource1LegacyGameEventGameSystem, Construct<CSource1LegacyGameEventGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> *const this)
{
  IGameSystem *v1; // rax
  IGameSystem *v2; // rbx
  IGameSystem *v3; // rdx
  IGameSystem *v4; // rcx
  const char **p_m_pName; // rcx
  int i; // edx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1128);
  v2 = v1;
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x468u);
    v2->_vptr_IGameSystem = off_3FF7330;
    v3 = v2 + 5;
    do
    {
      v4 = v3++;
      v3[-1]._vptr_IGameSystem = off_3FF72F0;
      LODWORD(v4->m_pName) = -1;
    }
    while ( v3 != &v2[70] );
    LOBYTE(v2[70]._vptr_IGameSystem) = 0;
    p_m_pName = &v2[5].m_pName;
    for ( i = 0; i != 65; *(p_m_pName - 4) = i )
    {
      ++i;
      p_m_pName += 2;
    }
  }
  (*(v2->_vptr_IGameSystem + 34))(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>::CreateGameSystem  (line 758, @0x00000000021b2180, libserver.so)  // inlines: CColorCorrectionSystem, CEntityHandle, CHandle, Construct<CColorCorrectionSystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> *const this)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
  {
    v1[1] = 0;
    v1[3] = 0;
    *v1 = off_4010DB0;
    v1[2] = off_4010F08;
    v3 = off_4010DB0;
    *(v2 + 7) = -1;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>::CreateGameSystem  (line 758, @0x00000000021b2200, libserver.so)  // inlines: CClientPrecacheGameSystem, Construct<CClientPrecacheGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_4010210;
    v2->_vptr_IGameSystem = off_4010210;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>::CreateGameSystem  (line 758, @0x00000000021b3b00, libserver.so)  // inlines: CCommentarySystem, CEntityHandle, CHandle, Construct<CCommentarySystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> *const this)
{
  IGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 128);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x80u);
    v2 = off_4012830;
    LODWORD(v1[7]._vptr_IGameSystem) = -1;
    v1->_vptr_IGameSystem = off_4012830;
    HIDWORD(v1[7]._vptr_IGameSystem) = -1;
    LODWORD(v1[7].m_pName) = -1;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>::CreateGameSystem  (line 758, @0x000000000227bf30, libserver.so)  // inlines: CGameRulesGameSystem, Construct<CGameRulesGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = &off_404FBB0;
    v2->_vptr_IGameSystem = &off_404FBB0;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::CreateGameSystem  (line 758, @0x000000000227e210, libserver.so)  // inlines: Construct<CHLTVDirector>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: memset, CHLTVDirector::CHLTVDirector
IGameSystem *__fastcall CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector>::CreateGameSystem(
        CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> *const this)
{
  CHLTVDirector *v1; // rax
  CHLTVDirector *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1208);
  v2 = v1;
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CHLTVDirector));
    CHLTVDirector::CHLTVDirector(v2);
  }
  (*(v2->_vptr_IGameEventListener2 + 5))(v2, v2);
  return &v2->IGameSystem;
}


// CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>::CreateGameSystem  (line 758, @0x00000000022b5dd0, libserver.so)  // inlines: CCustomLinkedList, CMarkupManager, CUtlHashtable, CUtlLinkedList, CUtlStableHashtable, Construct<CMarkupManager>, ConstructList, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager>::CreateGameSystem(
        CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> *const this)
{
  IGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 128);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x80u);
    v2 = off_406D050;
    WORD1(v1[5]._vptr_IGameSystem) = -1;
    v1->_vptr_IGameSystem = off_406D050;
    HIDWORD(v1[2].m_pName) = 32;
    LOWORD(v1[4].m_pName) = -1;
    WORD1(v1[4].m_pName) = -1;
    WORD2(v1[4].m_pName) = -1;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>::CreateGameSystem  (line 758, @0x00000000023083c0, libserver.so)  // inlines: CPhysicsHook, Construct<CPhysicsHook>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook>::CreateGameSystem(
        CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook> *const this)
{
  IGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x30u);
    v2 = off_407E610;
    v1->_vptr_IGameSystem = off_407E610;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>::CreateGameSystem  (line 758, @0x00000000023729d0, libserver.so)  // inlines: CRagdollLowViolenceManager, Construct<CRagdollLowViolenceManager>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager>::CreateGameSystem(
        CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_40A34B0;
    v2->_vptr_IGameSystem = off_40A34B0;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CPVSManager, IPVSManager>::CreateGameSystem  (line 758, @0x0000000002372a40, libserver.so)  // inlines: CPVSManager, Construct<CPVSManager>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPVSManager,IPVSManager>::CreateGameSystem(
        CGameSystemReallocatingFactory<CPVSManager,IPVSManager> *const this)
{
  IGameSystem *v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
  {
    v1->m_pName = 0;
    v1[1].m_pName = 0;
    v1->_vptr_IGameSystem = off_40A27F0;
    v1[1]._vptr_IGameSystem = &off_40A29D0;
    v3 = off_40A27F0;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>::CreateGameSystem  (line 758, @0x0000000002372ac0, libserver.so)  // inlines: CPrecacheRegister, Construct<CPrecacheRegister>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister>::CreateGameSystem(
        CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
  {
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    v3 = off_4096790;
    v2->_vptr_IGameSystem = off_4096790;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::CreateGameSystem  (line 758, @0x000000000237ffe0, libserver.so)  // inlines: CPrecacheGameSystem, CUtlStringMap, CUtlVector, CUtlVectorBase, Construct<CPrecacheGameSystem>, MemAlloc_InlineCallocMemsetFunc, Purge, RemoveAll, memset, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >*, int>::CUtlMemory, CUtlSymbolTable::CUtlSymbolTable, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >*, int>::Purge
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem> *const this)
{
  __int64 v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 184);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0xB8u);
    *v1 = off_40968F0;
    CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *,int>::CUtlMemory((v1 + 88), 0, 32);
    CUtlSymbolTable::CUtlSymbolTable((v1 + 104), 0, 32, 1);
  }
  (*(*v1 + 272LL))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CSceneManager, CSceneManager>::CreateGameSystem  (line 758, @0x00000000023afc40, libserver.so)  // inlines: CSceneManager, Construct<CSceneManager>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSceneManager,CSceneManager>::CreateGameSystem(
        CGameSystemReallocatingFactory<CSceneManager,CSceneManager> *const this)
{
  IGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 72);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x48u);
    v2 = off_40A7D30;
    v1->_vptr_IGameSystem = off_40A7D30;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::CreateGameSystem  (line 758, @0x00000000023b2ca0, libserver.so)  // inlines: Construct<CSoundscapeSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CSoundscapeSystem::CSoundscapeSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> *const this)
{
  CSoundscapeSystem *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 200);
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CSoundscapeSystem));
    CSoundscapeSystem::CSoundscapeSystem(v1);
  }
  (*(v1->_vptr_IGameSystem + 34))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CCheckClient, CCheckClient>::CreateGameSystem  (line 758, @0x00000000024107f0, libserver.so)  // inlines: CCheckClient, Construct<CCheckClient>, Init, MemAlloc_InlineCallocMemsetFunc, memset, vis_info_t
// calls: memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CCheckClient,CCheckClient>::CreateGameSystem(
        CGameSystemReallocatingFactory<CCheckClient,CCheckClient> *const this)
{
  IGameSystem *v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2136);
  v2 = v1;
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x858u);
    LODWORD(v2[66]._vptr_IGameSystem) = 1024;
    v2->_vptr_IGameSystem = off_40D0590;
    v2[65].m_pName = &v2[1]._vptr_IGameSystem + 1;
    v2[131]._vptr_IGameSystem = &v2[67];
    v3 = off_40D0590;
    LODWORD(v2[131].m_pName) = 1024;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>::CreateGameSystem  (line 758, @0x0000000002555510, libserver.so)  // inlines: CDOTA_AutoSaveGameSystem, Construct<CDOTA_AutoSaveGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem> *const this)
{
  IGameSystem *v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(CDOTA_AutoSaveGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
  {
    v1->m_pName = 0;
    v1[1]._vptr_IGameSystem = 0;
    v1[1].m_pName = 0;
    v3 = &off_40FBCD0;
    v2->_vptr_IGameSystem = &off_40FBCD0;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::CreateGameSystem  (line 758, @0x0000000002557fb0, libserver.so)  // inlines: CDOTAEventLog, Construct<CDOTAEventLog>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CEventLog::CEventLog
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog>::CreateGameSystem(
        CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog> *const this)
{
  __int64 v1; // rax
  IGameSystem *v2; // rbx
  void (__fastcall **v3)(CDOTAEventLog *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 40);
  v2 = v1;
  if ( v1 != 0 )
  {
    *v1 = 0;
    *(v1 + 8) = 0;
    *(v1 + 16) = 0;
    *(v1 + 24) = 0;
    *(v1 + 32) = 0;
    CEventLog::CEventLog(v1);
    v2->_vptr_IGameSystem = off_40F69D0;
    v2[1]._vptr_IGameSystem = off_40F6A48;
    v3 = off_40F69D0;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[5])(v2, v2);
  return v2 + 1;
}


// CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::CreateGameSystem  (line 758, @0x00000000025cfdd0, libserver.so)  // inlines: Construct<CDOTAInGamePredictionGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CDOTAInGamePredictionGameSystem::CDOTAInGamePredictionGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem> *const this)
{
  CDOTAInGamePredictionGameSystem *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 80);
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CDOTAInGamePredictionGameSystem));
    CDOTAInGamePredictionGameSystem::CDOTAInGamePredictionGameSystem(v1);
  }
  (*(v1->_vptr_IGameSystem + 34))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>::CreateGameSystem  (line 758, @0x0000000002634150, libserver.so)  // inlines: CDOTA_ActiveModifiersList, Construct<CDOTA_ActiveModifiersList>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList>::CreateGameSystem(
        CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList> *const this)
{
  IGameSystem *v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 744);
  v2 = v1;
  if ( v1 != 0 )
  {
    memset(v1, 0, 0x2E8u);
    v3 = off_412D110;
    v2->_vptr_IGameSystem = off_412D110;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>::CreateGameSystem  (line 758, @0x00000000026a0600, libserver.so)  // inlines: CDOTA_QuestSystem, Construct<CDOTA_QuestSystem>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem> *const this)
{
  IGameSystem *v1; // rax
  IGameSystem *v2; // rbx
  __int64 (__fastcall **v3)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
  {
    v1->m_pName = 0;
    v1[1].m_pName = 0;
    v1->_vptr_IGameSystem = off_4174890;
    v1[1]._vptr_IGameSystem = off_41749E8;
    v3 = off_4174890;
  }
  else
  {
    v3 = loc_0;
  }
  (v3[34])(v2, v2);
  return v2;
}


// CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::CreateGameSystem  (line 758, @0x00000000027d0890, libserver.so)  // inlines: CDOTAVScriptGameSystem, Construct<CDOTAVScriptGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CVScriptGameSystem::CVScriptGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem> *const this)
{
  CVScriptGameSystem *v1; // rbx
  __int64 (__fastcall **v2)(IGameSystem *__hidden); // rax

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 144);
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CVScriptGameSystem));
    CVScriptGameSystem::CVScriptGameSystem(v1);
    v1->_vptr_IGameSystem = off_42B49D0;
    v1->_vptr_IVScriptGameSystem = off_42B4BB0;
    v2 = off_42B49D0;
  }
  else
  {
    v2 = loc_0;
  }
  (v2[34])(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>::CreateGameSystem  (line 758, @0x00000000027d5da0, libserver.so)  // inlines: CDOTA_UnitFilterCache, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_UnitFilterCache>, MemAlloc_InlineCallocMemsetFunc, memset
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache>::CreateGameSystem(
        CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache> *const this)
{
  IGameSystem *v1; // rbx
  const char **p_m_pName; // r8
  IGameSystem *v3; // rdx
  IGameSystem *v4; // rcx
  signed __int64 v5; // rcx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 176);
  if ( v1 != 0 )
  {
    memset(v1, 0, 0xB0u);
    v1->_vptr_IGameSystem = off_42B4430;
    p_m_pName = &v1[2].m_pName;
    v3 = (v1 + 40);
    v1[1]._vptr_IGameSystem = &off_42B4588;
    do
    {
      LODWORD(v3[-1].m_pName) = 0;
      v4 = v3;
      v3 = (v3 + 24);
      v5 = v4 - &v1[2];
      *(p_m_pName + v5 - 8) = 0;
      *(p_m_pName + v5) = 0;
      *(p_m_pName + v5 + 4) = 0;
    }
    while ( v3 != &v1[11].m_pName );
  }
  (*(v1->_vptr_IGameSystem + 34))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::CreateGameSystem  (line 758, @0x0000000002f0a030, libserver.so)  // inlines: Construct<CNavGameSystem>, MemAlloc_InlineCallocMemsetFunc, memset
// calls: CNavGameSystem::CNavGameSystem
IGameSystem *__fastcall CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem>::CreateGameSystem(
        CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> *const this)
{
  CNavGameSystem *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 72);
  if ( v1 != 0 )
  {
    memset(v1, 0, sizeof(CNavGameSystem));
    CNavGameSystem::CNavGameSystem(v1);
  }
  (*(v1->_vptr_IGameSystem + 34))(v1, v1);
  return v1;
}


// CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::DestroyGameSystem  (line 766, @0x0000000001eb3190, libserver.so)  // inlines: Destruct<CServerAchievementManager>
void __fastcall CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::DestroyGameSystem  (line 766, @0x0000000001f72580, libserver.so)  // inlines: Destruct<CWorldGameSystem>
void __fastcall CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook>::DestroyGameSystem  (line 766, @0x0000000001f72710, libserver.so)  // inlines: Destruct<CStepSimulationHook>
void __fastcall CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::DestroyGameSystem  (line 766, @0x0000000001f727f0, libserver.so)  // inlines: Destruct<CSpawnGroupMgrGameSystem>
void __fastcall CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  char *p_m_pName; // rbx

  p_m_pName = 0;
  if ( pGameSystem != 0 )
    p_m_pName = &pGameSystem[-1].m_pName;
  (*(*p_m_pName + 152LL))(p_m_pName, 0);
  (*(*p_m_pName + 192LL))(p_m_pName);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p_m_pName);
}


// CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::DestroyGameSystem  (line 766, @0x0000000001f728d0, libserver.so)  // inlines: Destruct<CSoundOpGameSystem>
void __fastcall CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>::DestroyGameSystem  (line 766, @0x0000000001f729b0, libserver.so)  // inlines: Destruct<CSimThinkHook>
void __fastcall CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x0000000001f72aa0, libserver.so)  // inlines: Destruct<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::DestroyGameSystem  (line 766, @0x0000000001f72b70, libserver.so)  // inlines: Destruct<CRenderGameSystem>
void __fastcall CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::DestroyGameSystem  (line 766, @0x0000000001f72ca0, libserver.so)  // inlines: Destruct<CPhysicsGameSystem>
void __fastcall CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CNotifyManager, INotify>::DestroyGameSystem  (line 766, @0x0000000001f73080, libserver.so)  // inlines: Destruct<CNotifyManager>
void __fastcall CGameSystemReallocatingFactory<CNotifyManager,INotify>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CNotifyManager,INotify> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>::DestroyGameSystem  (line 766, @0x0000000001f73160, libserver.so)  // inlines: Destruct<CLightQueryGameSystem>
void __fastcall CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>::DestroyGameSystem  (line 766, @0x0000000001f73240, libserver.so)  // inlines: Destruct<CEntityTouchManager>
void __fastcall CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::DestroyGameSystem  (line 766, @0x0000000001f73320, libserver.so)  // inlines: Destruct<CEntityDebugGameSystem>
void __fastcall CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::DestroyGameSystem  (line 766, @0x0000000001f73400, libserver.so)  // inlines: Destruct<CDecalGameSystem>
void __fastcall CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::DestroyGameSystem  (line 766, @0x0000000001f73800, libserver.so)  // inlines: Destruct<CBodyGameSystem>
void __fastcall CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>::DestroyGameSystem  (line 766, @0x0000000001f738e0, libserver.so)  // inlines: Destruct<CAimTargetManager>
void __fastcall CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::DestroyGameSystem  (line 766, @0x0000000002056520, libserver.so)  // inlines: Destruct<CBreakModelsPrecached>
void __fastcall CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CPropData, CPropData>::DestroyGameSystem  (line 766, @0x0000000002056600, libserver.so)  // inlines: Destruct<CPropData>
void __fastcall CGameSystemReallocatingFactory<CPropData,CPropData>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CPropData,CPropData> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>::DestroyGameSystem  (line 766, @0x000000000208f1d0, libserver.so)  // inlines: Destruct<CDebugOverlayGameSystem>
void __fastcall CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>::DestroyGameSystem  (line 766, @0x000000000208f410, libserver.so)  // inlines: Destruct<CScenePrecacheSystem>
void __fastcall CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f2610, libserver.so)  // inlines: Destruct<GameToolEventToolTraceRayResult_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f26d0, libserver.so)  // inlines: Destruct<GameToolEventTraceRayServerToolEvent_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f2790, libserver.so)  // inlines: Destruct<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f2850, libserver.so)  // inlines: Destruct<GameToolEventRestartMapToolEvent_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f2910, libserver.so)  // inlines: Destruct<GameToolEventDestroyEntityToolEvent_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f29d0, libserver.so)  // inlines: Destruct<GameToolEventSpawnEntityToolEvent_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f2a90, libserver.so)  // inlines: Destruct<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f2b50, libserver.so)  // inlines: Destruct<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f2c10, libserver.so)  // inlines: Destruct<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f2d00, libserver.so)  // inlines: Destruct<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f2dc0, libserver.so)  // inlines: Destruct<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f2e80, libserver.so)  // inlines: Destruct<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f3420, libserver.so)  // inlines: Destruct<GameEvent_RegisterHookupGameSystem>
void __fastcall CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f3500, libserver.so)  // inlines: Destruct<CSource1LegacyGameEventGameSystem>
void __fastcall CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::DestroyGameSystem  (line 766, @0x00000000020f37a0, libserver.so)  // inlines: Destruct<CSource2EntitySystem>
void __fastcall CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>::DestroyGameSystem  (line 766, @0x00000000020f3880, libserver.so)  // inlines: Destruct<CRespawnAllEntitiesSystem>
void __fastcall CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>::DestroyGameSystem  (line 766, @0x00000000020f3960, libserver.so)  // inlines: Destruct<CSpawnGroupCompletionCallbackGameSystem>
void __fastcall CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>::DestroyGameSystem  (line 766, @0x00000000021b1880, libserver.so)  // inlines: Destruct<CCommentarySystem>
void __fastcall CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>::DestroyGameSystem  (line 766, @0x00000000021b19b0, libserver.so)  // inlines: Destruct<CColorCorrectionSystem>
void __fastcall CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>::DestroyGameSystem  (line 766, @0x00000000021b1ba0, libserver.so)  // inlines: Destruct<CClientPrecacheGameSystem>
void __fastcall CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::DestroyGameSystem  (line 766, @0x000000000227b7f0, libserver.so)  // inlines: Destruct<CHLTVDirector>
void __fastcall CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> *const this,
        IGameSystem *pGameSystem)
{
  IGameSystem *v2; // rbx

  v2 = 0;
  if ( pGameSystem != 0 )
    v2 = pGameSystem - 1;
  (*(v2->_vptr_IGameSystem + 5))(v2, 0);
  (*v2->_vptr_IGameSystem)(v2);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
}


// CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>::DestroyGameSystem  (line 766, @0x000000000227bbf0, libserver.so)  // inlines: Destruct<CGameRulesGameSystem>
void __fastcall CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>::DestroyGameSystem  (line 766, @0x00000000022a7070, libserver.so)  // inlines: Destruct<CMarkupManager>
void __fastcall CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>::DestroyGameSystem  (line 766, @0x0000000002304c20, libserver.so)  // inlines: Destruct<CPhysicsHook>
void __fastcall CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>::DestroyGameSystem  (line 766, @0x0000000002371760, libserver.so)  // inlines: Destruct<CRagdollLowViolenceManager>
void __fastcall CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CPVSManager, IPVSManager>::DestroyGameSystem  (line 766, @0x0000000002371890, libserver.so)  // inlines: Destruct<CPVSManager>
void __fastcall CGameSystemReallocatingFactory<CPVSManager,IPVSManager>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CPVSManager,IPVSManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::DestroyGameSystem  (line 766, @0x0000000002371f00, libserver.so)  // inlines: Destruct<CPrecacheGameSystem>
void __fastcall CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>::DestroyGameSystem  (line 766, @0x0000000002371fe0, libserver.so)  // inlines: Destruct<CPrecacheRegister>
void __fastcall CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::DestroyGameSystem  (line 766, @0x00000000023a9a70, libserver.so)  // inlines: Destruct<CSoundscapeSystem>
void __fastcall CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CSceneManager, CSceneManager>::DestroyGameSystem  (line 766, @0x00000000023aa2c0, libserver.so)  // inlines: Destruct<CSceneManager>
void __fastcall CGameSystemReallocatingFactory<CSceneManager,CSceneManager>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CSceneManager,CSceneManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CCheckClient, CCheckClient>::DestroyGameSystem  (line 766, @0x0000000002410680, libserver.so)  // inlines: Destruct<CCheckClient>
void __fastcall CGameSystemReallocatingFactory<CCheckClient,CCheckClient>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CCheckClient,CCheckClient> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>::DestroyGameSystem  (line 766, @0x0000000002553f50, libserver.so)  // inlines: Destruct<CDOTA_AutoSaveGameSystem>
void __fastcall CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::DestroyGameSystem  (line 766, @0x00000000025544c0, libserver.so)  // inlines: Destruct<CDOTAEventLog>
void __fastcall CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog> *const this,
        IGameSystem *pGameSystem)
{
  IGameSystem *v2; // rbx

  v2 = 0;
  if ( pGameSystem != 0 )
    v2 = pGameSystem - 1;
  (*(v2->_vptr_IGameSystem + 5))(v2, 0);
  (*v2->_vptr_IGameSystem)(v2);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
}


// CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::DestroyGameSystem  (line 766, @0x00000000025c67b0, libserver.so)  // inlines: Destruct<CDOTAInGamePredictionGameSystem>
void __fastcall CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>::DestroyGameSystem  (line 766, @0x000000000262d5d0, libserver.so)  // inlines: Destruct<CDOTA_ActiveModifiersList>
void __fastcall CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>::DestroyGameSystem  (line 766, @0x000000000269eb90, libserver.so)  // inlines: Destruct<CDOTA_QuestSystem>
void __fastcall CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::DestroyGameSystem  (line 766, @0x00000000027ced60, libserver.so)  // inlines: Destruct<CDOTAVScriptGameSystem>
void __fastcall CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>::DestroyGameSystem  (line 766, @0x00000000027cf070, libserver.so)  // inlines: Destruct<CDOTA_UnitFilterCache>
void __fastcall CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::DestroyGameSystem  (line 766, @0x0000000002f05330, libserver.so)  // inlines: Destruct<CNavGameSystem>
void __fastcall CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem>::DestroyGameSystem(
        CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(pGameSystem->_vptr_IGameSystem + 34))(pGameSystem, 0);
  (*(pGameSystem->_vptr_IGameSystem + 37))(pGameSystem);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pGameSystem);
}


// CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::ShouldAutoAdd  (line 775, @0x0000000001eb31e0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::ShouldAutoAdd  (line 775, @0x0000000001f725d0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook>::ShouldAutoAdd  (line 775, @0x0000000001f72760, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::ShouldAutoAdd  (line 775, @0x0000000001f72840, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::ShouldAutoAdd  (line 775, @0x0000000001f72920, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>::ShouldAutoAdd  (line 775, @0x0000000001f72a00, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x0000000001f72af0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::ShouldAutoAdd  (line 775, @0x0000000001f72bc0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::ShouldAutoAdd  (line 775, @0x0000000001f72cf0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CNotifyManager, INotify>::ShouldAutoAdd  (line 775, @0x0000000001f730d0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CNotifyManager,INotify>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CNotifyManager,INotify> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>::ShouldAutoAdd  (line 775, @0x0000000001f731b0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>::ShouldAutoAdd  (line 775, @0x0000000001f73290, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::ShouldAutoAdd  (line 775, @0x0000000001f73370, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::ShouldAutoAdd  (line 775, @0x0000000001f73450, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::ShouldAutoAdd  (line 775, @0x0000000001f73850, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>::ShouldAutoAdd  (line 775, @0x0000000001f73930, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::ShouldAutoAdd  (line 775, @0x0000000002056570, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPropData, CPropData>::ShouldAutoAdd  (line 775, @0x0000000002056650, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPropData,CPropData>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CPropData,CPropData> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>::ShouldAutoAdd  (line 775, @0x000000000208f220, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>::ShouldAutoAdd  (line 775, @0x000000000208f460, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f2660, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f2720, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f27e0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f28a0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f2960, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f2a20, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f2ae0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f2ba0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f2c60, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f2d50, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f2e10, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f2ed0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f3470, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f3550, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::ShouldAutoAdd  (line 775, @0x00000000020f37f0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>::ShouldAutoAdd  (line 775, @0x00000000020f38d0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>::ShouldAutoAdd  (line 775, @0x00000000020f39b0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>::ShouldAutoAdd  (line 775, @0x00000000021b18d0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>::ShouldAutoAdd  (line 775, @0x00000000021b1a00, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>::ShouldAutoAdd  (line 775, @0x00000000021b1bf0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::ShouldAutoAdd  (line 775, @0x000000000227b840, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>::ShouldAutoAdd  (line 775, @0x000000000227bc40, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>::ShouldAutoAdd  (line 775, @0x00000000022a70c0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>::ShouldAutoAdd  (line 775, @0x0000000002304c70, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>::ShouldAutoAdd  (line 775, @0x00000000023717b0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPVSManager, IPVSManager>::ShouldAutoAdd  (line 775, @0x00000000023718e0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPVSManager,IPVSManager>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CPVSManager,IPVSManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::ShouldAutoAdd  (line 775, @0x0000000002371f50, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>::ShouldAutoAdd  (line 775, @0x0000000002372030, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::ShouldAutoAdd  (line 775, @0x00000000023a9ac0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSceneManager, CSceneManager>::ShouldAutoAdd  (line 775, @0x00000000023aa310, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSceneManager,CSceneManager>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CSceneManager,CSceneManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CCheckClient, CCheckClient>::ShouldAutoAdd  (line 775, @0x00000000024106d0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CCheckClient,CCheckClient>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CCheckClient,CCheckClient> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>::ShouldAutoAdd  (line 775, @0x0000000002553fa0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::ShouldAutoAdd  (line 775, @0x0000000002554510, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::ShouldAutoAdd  (line 775, @0x00000000025c6800, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>::ShouldAutoAdd  (line 775, @0x000000000262d620, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>::ShouldAutoAdd  (line 775, @0x000000000269ebe0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::ShouldAutoAdd  (line 775, @0x00000000027cedb0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>::ShouldAutoAdd  (line 775, @0x00000000027cf0c0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::ShouldAutoAdd  (line 775, @0x0000000002f05380, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem>::ShouldAutoAdd(
        const CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::SetGlobalPtr  (line 780, @0x0000000001eb3200, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager> *const this,
        void *pValue)
{
  CServerAchievementManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::SetGlobalPtr  (line 780, @0x0000000001f725f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> *const this,
        void *pValue)
{
  CWorldGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook>::SetGlobalPtr  (line 780, @0x0000000001f72780, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook> *const this,
        void *pValue)
{
  CStepSimulationHook **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::SetGlobalPtr  (line 780, @0x0000000001f72860, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> *const this,
        void *pValue)
{
  CSpawnGroupMgrGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::SetGlobalPtr  (line 780, @0x0000000001f72940, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem> *const this,
        void *pValue)
{
  CSoundOpGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>::SetGlobalPtr  (line 780, @0x0000000001f72a20, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook> *const this,
        void *pValue)
{
  CSimThinkHook **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x0000000001f72b10, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::SetGlobalPtr  (line 780, @0x0000000001f72be0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> *const this,
        void *pValue)
{
  CRenderGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::SetGlobalPtr  (line 780, @0x0000000001f72d10, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> *const this,
        void *pValue)
{
  CPhysicsGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CNotifyManager, INotify>::SetGlobalPtr  (line 780, @0x0000000001f730f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CNotifyManager,INotify>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CNotifyManager,INotify> *const this,
        void *pValue)
{
  INotify **m_ppGlobalPointer; // rdx
  INotify *v3; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
  {
    v3 = 0;
    if ( pValue != 0 )
      v3 = (pValue + 16);
    *m_ppGlobalPointer = v3;
  }
}


// CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>::SetGlobalPtr  (line 780, @0x0000000001f731d0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> *const this,
        void *pValue)
{
  CLightQueryGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>::SetGlobalPtr  (line 780, @0x0000000001f732b0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager> *const this,
        void *pValue)
{
  CEntityTouchManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::SetGlobalPtr  (line 780, @0x0000000001f73390, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> *const this,
        void *pValue)
{
  CEntityDebugGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::SetGlobalPtr  (line 780, @0x0000000001f73470, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem> *const this,
        void *pValue)
{
  CDecalGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::SetGlobalPtr  (line 780, @0x0000000001f73870, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> *const this,
        void *pValue)
{
  CBodyGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>::SetGlobalPtr  (line 780, @0x0000000001f73950, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> *const this,
        void *pValue)
{
  CAimTargetManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::SetGlobalPtr  (line 780, @0x0000000002056590, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached> *const this,
        void *pValue)
{
  CBreakModelsPrecached **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CPropData, CPropData>::SetGlobalPtr  (line 780, @0x0000000002056670, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPropData,CPropData>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CPropData,CPropData> *const this,
        void *pValue)
{
  CPropData **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>::SetGlobalPtr  (line 780, @0x000000000208f240, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> *const this,
        void *pValue)
{
  CDebugOverlayGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>::SetGlobalPtr  (line 780, @0x000000000208f480, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> *const this,
        void *pValue)
{
  CScenePrecacheSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2680, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventToolTraceRayResult_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2740, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventTraceRayServerToolEvent_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2800, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f28c0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventRestartMapToolEvent_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2980, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventDestroyEntityToolEvent_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2a40, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventSpawnEntityToolEvent_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2b00, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2bc0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventToolEvent_FireEntityInput_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2c80, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2d70, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2e30, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f2ef0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem> *const this,
        void *pValue)
{
  GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f3490, libserver.so)
void __fastcall CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> *const this,
        void *pValue)
{
  GameEvent_RegisterHookupGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f3570, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> *const this,
        void *pValue)
{
  CSource1LegacyGameEventGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::SetGlobalPtr  (line 780, @0x00000000020f3810, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> *const this,
        void *pValue)
{
  CSource2EntitySystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>::SetGlobalPtr  (line 780, @0x00000000020f38f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem> *const this,
        void *pValue)
{
  CRespawnAllEntitiesSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>::SetGlobalPtr  (line 780, @0x00000000020f39d0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> *const this,
        void *pValue)
{
  CSpawnGroupCompletionCallbackGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>::SetGlobalPtr  (line 780, @0x00000000021b18f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> *const this,
        void *pValue)
{
  CCommentarySystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>::SetGlobalPtr  (line 780, @0x00000000021b1a20, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> *const this,
        void *pValue)
{
  CColorCorrectionSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>::SetGlobalPtr  (line 780, @0x00000000021b1c10, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem> *const this,
        void *pValue)
{
  CClientPrecacheGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::SetGlobalPtr  (line 780, @0x000000000227b860, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> *const this,
        void *pValue)
{
  CHLTVDirector **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>::SetGlobalPtr  (line 780, @0x000000000227bc60, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> *const this,
        void *pValue)
{
  CGameRulesGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>::SetGlobalPtr  (line 780, @0x00000000022a70e0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> *const this,
        void *pValue)
{
  CMarkupManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>::SetGlobalPtr  (line 780, @0x0000000002304c90, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook> *const this,
        void *pValue)
{
  CPhysicsHook **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>::SetGlobalPtr  (line 780, @0x00000000023717d0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> *const this,
        void *pValue)
{
  CRagdollLowViolenceManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CPVSManager, IPVSManager>::SetGlobalPtr  (line 780, @0x0000000002371900, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPVSManager,IPVSManager>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CPVSManager,IPVSManager> *const this,
        void *pValue)
{
  IPVSManager **m_ppGlobalPointer; // rdx
  IPVSManager *v3; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
  {
    v3 = 0;
    if ( pValue != 0 )
      v3 = (pValue + 16);
    *m_ppGlobalPointer = v3;
  }
}


// CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::SetGlobalPtr  (line 780, @0x0000000002371f70, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem> *const this,
        void *pValue)
{
  CPrecacheGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>::SetGlobalPtr  (line 780, @0x0000000002372050, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> *const this,
        void *pValue)
{
  CPrecacheRegister **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::SetGlobalPtr  (line 780, @0x00000000023a9ae0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> *const this,
        void *pValue)
{
  CSoundscapeSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CSceneManager, CSceneManager>::SetGlobalPtr  (line 780, @0x00000000023aa330, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CSceneManager,CSceneManager>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CSceneManager,CSceneManager> *const this,
        void *pValue)
{
  CSceneManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CCheckClient, CCheckClient>::SetGlobalPtr  (line 780, @0x00000000024106f0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CCheckClient,CCheckClient>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CCheckClient,CCheckClient> *const this,
        void *pValue)
{
  CCheckClient **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>::SetGlobalPtr  (line 780, @0x0000000002553fc0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem> *const this,
        void *pValue)
{
  CDOTA_AutoSaveGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::SetGlobalPtr  (line 780, @0x0000000002554530, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog> *const this,
        void *pValue)
{
  CDOTAEventLog **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::SetGlobalPtr  (line 780, @0x00000000025c6820, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem> *const this,
        void *pValue)
{
  CDOTAInGamePredictionGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>::SetGlobalPtr  (line 780, @0x000000000262d640, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList> *const this,
        void *pValue)
{
  CDOTA_ActiveModifiersList **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>::SetGlobalPtr  (line 780, @0x000000000269ec00, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem> *const this,
        void *pValue)
{
  CDOTA_QuestSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::SetGlobalPtr  (line 780, @0x00000000027cedd0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem> *const this,
        void *pValue)
{
  CDOTAVScriptGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>::SetGlobalPtr  (line 780, @0x00000000027cf0e0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache> *const this,
        void *pValue)
{
  CDOTA_UnitFilterCache **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::SetGlobalPtr  (line 780, @0x0000000002f053a0, libserver.so)
void __fastcall CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem>::SetGlobalPtr(
        CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> *const this,
        void *pValue)
{
  CNavGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::IsReallocating  (line 788, @0x0000000001eb3220, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager>::IsReallocating(
        const CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::IsReallocating  (line 788, @0x0000000001f72610, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook>::IsReallocating  (line 788, @0x0000000001f727a0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook>::IsReallocating(
        const CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::IsReallocating  (line 788, @0x0000000001f72880, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::IsReallocating  (line 788, @0x0000000001f72960, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>::IsReallocating  (line 788, @0x0000000001f72a40, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook>::IsReallocating(
        const CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::IsReallocating  (line 788, @0x0000000001f72b30, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::IsReallocating  (line 788, @0x0000000001f72c00, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::IsReallocating  (line 788, @0x0000000001f72d30, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CNotifyManager, INotify>::IsReallocating  (line 788, @0x0000000001f73110, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CNotifyManager,INotify>::IsReallocating(
        const CGameSystemReallocatingFactory<CNotifyManager,INotify> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>::IsReallocating  (line 788, @0x0000000001f731f0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>::IsReallocating  (line 788, @0x0000000001f732d0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager>::IsReallocating(
        const CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::IsReallocating  (line 788, @0x0000000001f733b0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::IsReallocating  (line 788, @0x0000000001f73490, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::IsReallocating  (line 788, @0x0000000001f73890, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>::IsReallocating  (line 788, @0x0000000001f73970, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager>::IsReallocating(
        const CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::IsReallocating  (line 788, @0x00000000020565b0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached>::IsReallocating(
        const CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPropData, CPropData>::IsReallocating  (line 788, @0x0000000002056690, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPropData,CPropData>::IsReallocating(
        const CGameSystemReallocatingFactory<CPropData,CPropData> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>::IsReallocating  (line 788, @0x000000000208f260, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>::IsReallocating  (line 788, @0x000000000208f4a0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f26a0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f2760, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f2820, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f28e0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f29a0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f2a60, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f2b20, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f2be0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f2ca0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f2d90, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f2e50, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f2f10, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>::IsReallocating  (line 788, @0x00000000020f34b0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>::IsReallocating  (line 788, @0x00000000020f3590, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::IsReallocating  (line 788, @0x00000000020f3830, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>::IsReallocating  (line 788, @0x00000000020f3910, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>::IsReallocating  (line 788, @0x00000000020f39f0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>::IsReallocating  (line 788, @0x00000000021b1910, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>::IsReallocating  (line 788, @0x00000000021b1a40, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>::IsReallocating  (line 788, @0x00000000021b1c30, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::IsReallocating  (line 788, @0x000000000227b880, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector>::IsReallocating(
        const CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>::IsReallocating  (line 788, @0x000000000227bc80, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>::IsReallocating  (line 788, @0x00000000022a7100, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager>::IsReallocating(
        const CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>::IsReallocating  (line 788, @0x0000000002304cb0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook>::IsReallocating(
        const CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>::IsReallocating  (line 788, @0x00000000023717f0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager>::IsReallocating(
        const CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPVSManager, IPVSManager>::IsReallocating  (line 788, @0x0000000002371920, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPVSManager,IPVSManager>::IsReallocating(
        const CGameSystemReallocatingFactory<CPVSManager,IPVSManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::IsReallocating  (line 788, @0x0000000002371f90, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>::IsReallocating  (line 788, @0x0000000002372070, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister>::IsReallocating(
        const CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::IsReallocating  (line 788, @0x00000000023a9b00, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CSceneManager, CSceneManager>::IsReallocating  (line 788, @0x00000000023aa350, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CSceneManager,CSceneManager>::IsReallocating(
        const CGameSystemReallocatingFactory<CSceneManager,CSceneManager> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CCheckClient, CCheckClient>::IsReallocating  (line 788, @0x0000000002410710, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CCheckClient,CCheckClient>::IsReallocating(
        const CGameSystemReallocatingFactory<CCheckClient,CCheckClient> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>::IsReallocating  (line 788, @0x0000000002553fe0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::IsReallocating  (line 788, @0x0000000002554550, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog>::IsReallocating(
        const CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::IsReallocating  (line 788, @0x00000000025c6840, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>::IsReallocating  (line 788, @0x000000000262d660, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList>::IsReallocating(
        const CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>::IsReallocating  (line 788, @0x000000000269ec20, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::IsReallocating  (line 788, @0x00000000027cedf0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>::IsReallocating  (line 788, @0x00000000027cf100, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache>::IsReallocating(
        const CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::IsReallocating  (line 788, @0x0000000002f053c0, libserver.so)
bool __fastcall CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem>::IsReallocating(
        const CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> *const this)
{
  return 1;
}


// CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager>::GetStaticGameSystem  (line 793, @0x0000000001eb3230, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CServerAchievementManager,CServerAchievementManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem>::GetStaticGameSystem  (line 793, @0x0000000001f72620, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook>::GetStaticGameSystem  (line 793, @0x0000000001f727b0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CStepSimulationHook,CStepSimulationHook> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>::GetStaticGameSystem  (line 793, @0x0000000001f72890, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::GetStaticGameSystem  (line 793, @0x0000000001f72970, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CSoundOpGameSystem,CSoundOpGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>::GetStaticGameSystem  (line 793, @0x0000000001f72a50, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CSimThinkHook,CSimThinkHook> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x0000000001f72b40, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>::GetStaticGameSystem  (line 793, @0x0000000001f72c10, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::GetStaticGameSystem  (line 793, @0x0000000001f72d40, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CNotifyManager, INotify>::GetStaticGameSystem  (line 793, @0x0000000001f73120, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CNotifyManager,INotify>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CNotifyManager,INotify> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>::GetStaticGameSystem  (line 793, @0x0000000001f73200, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>::GetStaticGameSystem  (line 793, @0x0000000001f732e0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CEntityTouchManager,CEntityTouchManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::GetStaticGameSystem  (line 793, @0x0000000001f733c0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::GetStaticGameSystem  (line 793, @0x0000000001f734a0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CDecalGameSystem,CDecalGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>::GetStaticGameSystem  (line 793, @0x0000000001f738a0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>::GetStaticGameSystem  (line 793, @0x0000000001f73980, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>::GetStaticGameSystem  (line 793, @0x00000000020565c0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CBreakModelsPrecached,CBreakModelsPrecached> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPropData, CPropData>::GetStaticGameSystem  (line 793, @0x00000000020566a0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPropData,CPropData>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CPropData,CPropData> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>::GetStaticGameSystem  (line 793, @0x000000000208f270, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>::GetStaticGameSystem  (line 793, @0x000000000208f4b0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f26b0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem,GameToolEventToolTraceRayResult_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f2770, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem,GameToolEventTraceRayServerToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f2830, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem,GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f28f0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem,GameToolEventRestartMapToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f29b0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem,GameToolEventDestroyEntityToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f2a70, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem,GameToolEventSpawnEntityToolEvent_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f2b30, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem,GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f2bf0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem,GameToolEventToolEvent_FireEntityInput_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f2cb0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f2da0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem,GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f2e60, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f2f20, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem,GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f34c0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f35a0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::GetStaticGameSystem  (line 793, @0x00000000020f3840, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>::GetStaticGameSystem  (line 793, @0x00000000020f3920, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem,CRespawnAllEntitiesSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>::GetStaticGameSystem  (line 793, @0x00000000020f3a00, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>::GetStaticGameSystem  (line 793, @0x00000000021b1920, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>::GetStaticGameSystem  (line 793, @0x00000000021b1a50, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>::GetStaticGameSystem  (line 793, @0x00000000021b1c40, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CClientPrecacheGameSystem,CClientPrecacheGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>::GetStaticGameSystem  (line 793, @0x000000000227b890, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>::GetStaticGameSystem  (line 793, @0x000000000227bc90, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>::GetStaticGameSystem  (line 793, @0x00000000022a7110, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>::GetStaticGameSystem  (line 793, @0x0000000002304cc0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CPhysicsHook,CPhysicsHook> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>::GetStaticGameSystem  (line 793, @0x0000000002371800, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPVSManager, IPVSManager>::GetStaticGameSystem  (line 793, @0x0000000002371930, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPVSManager,IPVSManager>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CPVSManager,IPVSManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>::GetStaticGameSystem  (line 793, @0x0000000002371fa0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CPrecacheGameSystem,CPrecacheGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>::GetStaticGameSystem  (line 793, @0x0000000002372080, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>::GetStaticGameSystem  (line 793, @0x00000000023a9b10, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CSceneManager, CSceneManager>::GetStaticGameSystem  (line 793, @0x00000000023aa360, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CSceneManager,CSceneManager>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CSceneManager,CSceneManager> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CCheckClient, CCheckClient>::GetStaticGameSystem  (line 793, @0x0000000002410720, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CCheckClient,CCheckClient>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CCheckClient,CCheckClient> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>::GetStaticGameSystem  (line 793, @0x0000000002553ff0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem,CDOTA_AutoSaveGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>::GetStaticGameSystem  (line 793, @0x0000000002554560, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CDOTAEventLog,CDOTAEventLog> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::GetStaticGameSystem  (line 793, @0x00000000025c6850, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem,CDOTAInGamePredictionGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>::GetStaticGameSystem  (line 793, @0x000000000262d670, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList,CDOTA_ActiveModifiersList> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>::GetStaticGameSystem  (line 793, @0x000000000269ec30, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CDOTA_QuestSystem,CDOTA_QuestSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::GetStaticGameSystem  (line 793, @0x00000000027cee00, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CDOTAVScriptGameSystem,CDOTAVScriptGameSystem> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>::GetStaticGameSystem  (line 793, @0x00000000027cf110, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CDOTA_UnitFilterCache,CDOTA_UnitFilterCache> *const this)
{
  return 0;
}


// CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>::GetStaticGameSystem  (line 793, @0x0000000002f053d0, libserver.so)
IGameSystem *__fastcall CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem>::GetStaticGameSystem(
        CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager>::Init  (line 813, @0x0000000001b508c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager>::Init(
        CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CFogSystem, CFogSystem>::Init  (line 813, @0x0000000001eeb600, libserver.so)
bool __fastcall CGameSystemStaticFactory<CFogSystem,CFogSystem>::Init(
        CGameSystemStaticFactory<CFogSystem,CFogSystem> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem>::Init  (line 813, @0x0000000001efd0c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem>::Init(
        CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>::Init  (line 813, @0x0000000001f736c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager>::Init(
        CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>::Init  (line 813, @0x000000000208f2b0, libserver.so)  // inlines: SetCriteriaSymbolTable, StaticInit
bool __fastcall CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem>::Init(
        CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> *const this)
{
  CUtlSymbolTable *v2; // rax
  CDefaultResponseSystem *m_pActualGlobal; // rdi

  v2 = (*(*responserulesfilecache + 104LL))(responserulesfilecache);
  m_pActualGlobal = this->m_pActualGlobal;
  CResponseCriteriaSet::sm_pCriteriaSymbols = v2;
  return (*m_pActualGlobal->_vptr_IGameSystem)(m_pActualGlobal);
}


// CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>::Init  (line 813, @0x0000000002139af0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser>::Init(
        CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CWeaponList, CWeaponList>::Init  (line 813, @0x000000000217aa20, libserver.so)
bool __fastcall CGameSystemStaticFactory<CWeaponList,CWeaponList>::Init(
        CGameSystemStaticFactory<CWeaponList,CWeaponList> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>::Init  (line 813, @0x000000000217ab30, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache>::Init(
        CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>::Init  (line 813, @0x000000000217ac40, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships>::Init(
        CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>::Init  (line 813, @0x000000000217ae40, libserver.so)
bool __fastcall CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager>::Init(
        CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>::Init  (line 813, @0x00000000021b1600, libserver.so)
bool __fastcall CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor>::Init(
        CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>::Init  (line 813, @0x00000000021b1a60, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList>::Init(
        CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>::Init  (line 813, @0x00000000021e00c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem>::Init(
        CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> *const this)
{
  return (*(this->m_pActualGlobal->_vptr_IDecalEmitterSystem + 6))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CGameTimescale, CGameTimescale>::Init  (line 813, @0x0000000002246030, libserver.so)
bool __fastcall CGameSystemStaticFactory<CGameTimescale,CGameTimescale>::Init(
        CGameSystemStaticFactory<CGameTimescale,CGameTimescale> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CGlobalState, CGlobalState>::Init  (line 813, @0x000000000227b900, libserver.so)
bool __fastcall CGameSystemStaticFactory<CGlobalState,CGlobalState>::Init(
        CGameSystemStaticFactory<CGlobalState,CGlobalState> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>::Init  (line 813, @0x000000000227bab0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver>::Init(
        CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CAnchorList, CAnchorList>::Init  (line 813, @0x0000000002305040, libserver.so)
bool __fastcall CGameSystemStaticFactory<CAnchorList,CAnchorList>::Init(
        CGameSystemStaticFactory<CAnchorList,CAnchorList> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>::Init  (line 813, @0x0000000002305550, libserver.so)
bool __fastcall CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem>::Init(
        CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>::Init  (line 813, @0x000000000233a960, libserver.so)
bool __fastcall CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener>::Init(
        CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>::Init  (line 813, @0x000000000233aa70, libserver.so)
bool __fastcall CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager>::Init(
        CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>::Init  (line 813, @0x0000000002371620, libserver.so)
bool __fastcall CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement>::Init(
        CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>::Init  (line 813, @0x0000000002372090, libserver.so)
bool __fastcall CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem>::Init(
        CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>::Init  (line 813, @0x00000000023a9d10, libserver.so)
bool __fastcall CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp>::Init(
        CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(&this->m_pActualGlobal->CAutoGameSystem);
}


// CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>::Init  (line 813, @0x00000000023a9e90, libserver.so)
bool __fastcall CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem>::Init(
        CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>::Init  (line 813, @0x00000000023aa040, libserver.so)
bool __fastcall CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager>::Init(
        CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>::Init  (line 813, @0x00000000023e77b0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager>::Init(
        CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>::Init  (line 813, @0x0000000002456980, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager>::Init(
        CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>::Init  (line 813, @0x0000000002456a90, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations>::Init(
        CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>::Init  (line 813, @0x0000000002456bf0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer>::Init(
        CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>::Init  (line 813, @0x0000000002456da0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager>::Init(
        CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>::Init  (line 813, @0x00000000024982f0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager>::Init(
        CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>::Init  (line 813, @0x0000000002498810, libserver.so)
bool __fastcall CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record>::Init(
        CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>::Init  (line 813, @0x0000000002498920, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog>::Init(
        CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>::Init  (line 813, @0x0000000002498a30, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer>::Init(
        CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>::Init  (line 813, @0x0000000002498b40, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer>::Init(
        CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>::Init  (line 813, @0x0000000002498c50, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem>::Init(
        CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>::Init  (line 813, @0x0000000002498df0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem>::Init(
        CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CGridNav, CGridNav>::Init  (line 813, @0x0000000002553790, libserver.so)
bool __fastcall CGameSystemStaticFactory<CGridNav,CGridNav>::Init(
        CGameSystemStaticFactory<CGridNav,CGridNav> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>::Init  (line 813, @0x00000000025540e0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager>::Init(
        CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>::Init  (line 813, @0x0000000002554380, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem>::Init(
        CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>::Init  (line 813, @0x00000000025c6ab0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector>::Init(
        CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector> *const this)
{
  return (*(this->m_pActualGlobal->_vptr_IGameEventListener2 + 20))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>::Init  (line 813, @0x000000000262c010, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF>::Init(
        CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>::Init  (line 813, @0x000000000262c120, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer>::Init(
        CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>::Init  (line 813, @0x000000000269ec90, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager>::Init(
        CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>::Init  (line 813, @0x000000000269f270, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem>::Init(
        CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>::Init  (line 813, @0x0000000002728cc0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial>::Init(
        CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>::Init  (line 813, @0x0000000002729090, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager>::Init(
        CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>::Init  (line 813, @0x0000000002729380, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager>::Init(
        CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>::Init  (line 813, @0x00000000027cee10, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem>::Init(
        CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>::Init  (line 813, @0x00000000027cef30, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder>::Init(
        CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>::Init  (line 813, @0x00000000027cf250, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems>::Init(
        CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>::Init  (line 813, @0x00000000028120b0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander>::Init(
        CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>::Init  (line 813, @0x0000000002968ef0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList>::Init(
        CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>::Init  (line 813, @0x00000000029a7e30, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache>::Init(
        CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>::Init  (line 813, @0x00000000029a8110, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem>::Init(
        CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem> *const this)
{
  return (**this->m_pActualGlobal)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>::Init  (line 813, @0x0000000002abe160, libserver.so)
bool __fastcall CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker>::Init(
        CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>::Init  (line 813, @0x0000000002e0cc50, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager>::Init(
        CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CItemGeneration, CItemGeneration>::Init  (line 813, @0x0000000002e4f3d0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CItemGeneration,CItemGeneration>::Init(
        CGameSystemStaticFactory<CItemGeneration,CItemGeneration> *const this)
{
  return (*this->m_pActualGlobal->_vptr_IGameSystem)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>::Init  (line 813, @0x0000000002e4f6d0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager>::Init(
        CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager> *const this)
{
  return (**this->m_pActualGlobal)(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager>::PostInit  (line 821, @0x0000000001b508e0, libserver.so)
void __fastcall CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager>::PostInit(
        CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CFogSystem, CFogSystem>::PostInit  (line 821, @0x0000000001eeb620, libserver.so)
void __fastcall CGameSystemStaticFactory<CFogSystem,CFogSystem>::PostInit(
        CGameSystemStaticFactory<CFogSystem,CFogSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem>::PostInit  (line 821, @0x0000000001efd0e0, libserver.so)
void __fastcall CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem>::PostInit(
        CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>::PostInit  (line 821, @0x0000000001f736e0, libserver.so)
void __fastcall CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager>::PostInit(
        CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>::PostInit  (line 821, @0x000000000208f2f0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem>::PostInit(
        CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>::PostInit  (line 821, @0x0000000002139b10, libserver.so)
void __fastcall CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser>::PostInit(
        CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CWeaponList, CWeaponList>::PostInit  (line 821, @0x000000000217aa40, libserver.so)
void __fastcall CGameSystemStaticFactory<CWeaponList,CWeaponList>::PostInit(
        CGameSystemStaticFactory<CWeaponList,CWeaponList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>::PostInit  (line 821, @0x000000000217ab50, libserver.so)
void __fastcall CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache>::PostInit(
        CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>::PostInit  (line 821, @0x000000000217ac60, libserver.so)
void __fastcall CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships>::PostInit(
        CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>::PostInit  (line 821, @0x000000000217ae60, libserver.so)
void __fastcall CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager>::PostInit(
        CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>::PostInit  (line 821, @0x00000000021b1620, libserver.so)
void __fastcall CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor>::PostInit(
        CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>::PostInit  (line 821, @0x00000000021b1a80, libserver.so)
void __fastcall CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList>::PostInit(
        CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>::PostInit  (line 821, @0x00000000021e00e0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem>::PostInit(
        CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(&this->m_pActualGlobal->CAutoGameSystem);
}


// CGameSystemStaticFactory<CGameTimescale, CGameTimescale>::PostInit  (line 821, @0x0000000002246050, libserver.so)
void __fastcall CGameSystemStaticFactory<CGameTimescale,CGameTimescale>::PostInit(
        CGameSystemStaticFactory<CGameTimescale,CGameTimescale> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CGlobalState, CGlobalState>::PostInit  (line 821, @0x000000000227b920, libserver.so)
void __fastcall CGameSystemStaticFactory<CGlobalState,CGlobalState>::PostInit(
        CGameSystemStaticFactory<CGlobalState,CGlobalState> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>::PostInit  (line 821, @0x000000000227bad0, libserver.so)
void __fastcall CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver>::PostInit(
        CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CAnchorList, CAnchorList>::PostInit  (line 821, @0x0000000002305060, libserver.so)
void __fastcall CGameSystemStaticFactory<CAnchorList,CAnchorList>::PostInit(
        CGameSystemStaticFactory<CAnchorList,CAnchorList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>::PostInit  (line 821, @0x0000000002305570, libserver.so)
void __fastcall CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem>::PostInit(
        CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>::PostInit  (line 821, @0x000000000233a980, libserver.so)
void __fastcall CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener>::PostInit(
        CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>::PostInit  (line 821, @0x000000000233aa90, libserver.so)
void __fastcall CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager>::PostInit(
        CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>::PostInit  (line 821, @0x0000000002371640, libserver.so)
void __fastcall CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement>::PostInit(
        CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>::PostInit  (line 821, @0x00000000023720b0, libserver.so)
void __fastcall CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem>::PostInit(
        CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>::PostInit  (line 821, @0x00000000023a9d30, libserver.so)
void __fastcall CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp>::PostInit(
        CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(&this->m_pActualGlobal->CAutoGameSystem);
}


// CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>::PostInit  (line 821, @0x00000000023a9eb0, libserver.so)
void __fastcall CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem>::PostInit(
        CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>::PostInit  (line 821, @0x00000000023aa060, libserver.so)
void __fastcall CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager>::PostInit(
        CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>::PostInit  (line 821, @0x00000000023e77d0, libserver.so)
void __fastcall CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager>::PostInit(
        CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>::PostInit  (line 821, @0x00000000024569a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager>::PostInit(
        CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>::PostInit  (line 821, @0x0000000002456ab0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations>::PostInit(
        CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>::PostInit  (line 821, @0x0000000002456c10, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer>::PostInit(
        CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>::PostInit  (line 821, @0x0000000002456dc0, libserver.so)
void __fastcall CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager>::PostInit(
        CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>::PostInit  (line 821, @0x0000000002498310, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager>::PostInit(
        CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>::PostInit  (line 821, @0x0000000002498830, libserver.so)
void __fastcall CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record>::PostInit(
        CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>::PostInit  (line 821, @0x0000000002498940, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog>::PostInit(
        CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>::PostInit  (line 821, @0x0000000002498a50, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer>::PostInit(
        CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>::PostInit  (line 821, @0x0000000002498b60, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer>::PostInit(
        CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>::PostInit  (line 821, @0x0000000002498c70, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem>::PostInit(
        CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>::PostInit  (line 821, @0x0000000002498e10, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem>::PostInit(
        CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CGridNav, CGridNav>::PostInit  (line 821, @0x00000000025537b0, libserver.so)
void __fastcall CGameSystemStaticFactory<CGridNav,CGridNav>::PostInit(
        CGameSystemStaticFactory<CGridNav,CGridNav> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>::PostInit  (line 821, @0x0000000002554100, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager>::PostInit(
        CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>::PostInit  (line 821, @0x00000000025543a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem>::PostInit(
        CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>::PostInit  (line 821, @0x00000000025c6ad0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector>::PostInit(
        CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(&this->m_pActualGlobal->IGameSystem);
}


// CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>::PostInit  (line 821, @0x000000000262c030, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF>::PostInit(
        CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>::PostInit  (line 821, @0x000000000262c140, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer>::PostInit(
        CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>::PostInit  (line 821, @0x000000000269ecb0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager>::PostInit(
        CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>::PostInit  (line 821, @0x000000000269f290, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem>::PostInit(
        CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>::PostInit  (line 821, @0x0000000002728ce0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial>::PostInit(
        CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>::PostInit  (line 821, @0x00000000027290b0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager>::PostInit(
        CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>::PostInit  (line 821, @0x00000000027293a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager>::PostInit(
        CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>::PostInit  (line 821, @0x00000000027cee30, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem>::PostInit(
        CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>::PostInit  (line 821, @0x00000000027cef50, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder>::PostInit(
        CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>::PostInit  (line 821, @0x00000000027cf270, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems>::PostInit(
        CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>::PostInit  (line 821, @0x00000000028120d0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander>::PostInit(
        CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>::PostInit  (line 821, @0x0000000002968f10, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList>::PostInit(
        CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>::PostInit  (line 821, @0x00000000029a7e50, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache>::PostInit(
        CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>::PostInit  (line 821, @0x00000000029a8130, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem>::PostInit(
        CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem> *const this)
{
  (*(*this->m_pActualGlobal + 8LL))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>::PostInit  (line 821, @0x0000000002abe180, libserver.so)
void __fastcall CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker>::PostInit(
        CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>::PostInit  (line 821, @0x0000000002e0cc70, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager>::PostInit(
        CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CItemGeneration, CItemGeneration>::PostInit  (line 821, @0x0000000002e4f3f0, libserver.so)
void __fastcall CGameSystemStaticFactory<CItemGeneration,CItemGeneration>::PostInit(
        CGameSystemStaticFactory<CItemGeneration,CItemGeneration> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 1))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>::PostInit  (line 821, @0x0000000002e4f6f0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager>::PostInit(
        CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager> *const this)
{
  (*(*this->m_pActualGlobal + 8LL))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager>::Shutdown  (line 828, @0x0000000001b50900, libserver.so)
void __fastcall CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager>::Shutdown(
        CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CFogSystem, CFogSystem>::Shutdown  (line 828, @0x0000000001eeb640, libserver.so)
void __fastcall CGameSystemStaticFactory<CFogSystem,CFogSystem>::Shutdown(
        CGameSystemStaticFactory<CFogSystem,CFogSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem>::Shutdown  (line 828, @0x0000000001efd100, libserver.so)
void __fastcall CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem>::Shutdown(
        CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>::Shutdown  (line 828, @0x0000000001f73700, libserver.so)
void __fastcall CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager>::Shutdown(
        CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>::Shutdown  (line 828, @0x000000000208f310, libserver.so)
void __fastcall CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem>::Shutdown(
        CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>::Shutdown  (line 828, @0x0000000002139b30, libserver.so)
void __fastcall CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser>::Shutdown(
        CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CWeaponList, CWeaponList>::Shutdown  (line 828, @0x000000000217aa60, libserver.so)
void __fastcall CGameSystemStaticFactory<CWeaponList,CWeaponList>::Shutdown(
        CGameSystemStaticFactory<CWeaponList,CWeaponList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>::Shutdown  (line 828, @0x000000000217ab70, libserver.so)
void __fastcall CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache>::Shutdown(
        CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>::Shutdown  (line 828, @0x000000000217ac80, libserver.so)
void __fastcall CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships>::Shutdown(
        CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>::Shutdown  (line 828, @0x000000000217ae80, libserver.so)
void __fastcall CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager>::Shutdown(
        CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>::Shutdown  (line 828, @0x00000000021b1640, libserver.so)
void __fastcall CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor>::Shutdown(
        CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>::Shutdown  (line 828, @0x00000000021b1aa0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList>::Shutdown(
        CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>::Shutdown  (line 828, @0x00000000021e0100, libserver.so)
void __fastcall CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem>::Shutdown(
        CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IDecalEmitterSystem + 7))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CGameTimescale, CGameTimescale>::Shutdown  (line 828, @0x0000000002246070, libserver.so)
void __fastcall CGameSystemStaticFactory<CGameTimescale,CGameTimescale>::Shutdown(
        CGameSystemStaticFactory<CGameTimescale,CGameTimescale> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CGlobalState, CGlobalState>::Shutdown  (line 828, @0x000000000227b940, libserver.so)
void __fastcall CGameSystemStaticFactory<CGlobalState,CGlobalState>::Shutdown(
        CGameSystemStaticFactory<CGlobalState,CGlobalState> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>::Shutdown  (line 828, @0x000000000227baf0, libserver.so)
void __fastcall CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver>::Shutdown(
        CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CAnchorList, CAnchorList>::Shutdown  (line 828, @0x0000000002305080, libserver.so)
void __fastcall CGameSystemStaticFactory<CAnchorList,CAnchorList>::Shutdown(
        CGameSystemStaticFactory<CAnchorList,CAnchorList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>::Shutdown  (line 828, @0x0000000002305590, libserver.so)
void __fastcall CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem>::Shutdown(
        CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>::Shutdown  (line 828, @0x000000000233a9a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener>::Shutdown(
        CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>::Shutdown  (line 828, @0x000000000233aab0, libserver.so)
void __fastcall CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager>::Shutdown(
        CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>::Shutdown  (line 828, @0x0000000002371660, libserver.so)
void __fastcall CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement>::Shutdown(
        CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>::Shutdown  (line 828, @0x00000000023720d0, libserver.so)
void __fastcall CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem>::Shutdown(
        CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>::Shutdown  (line 828, @0x00000000023a9d50, libserver.so)
void __fastcall CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp>::Shutdown(
        CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(&this->m_pActualGlobal->CAutoGameSystem);
}


// CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>::Shutdown  (line 828, @0x00000000023a9ed0, libserver.so)
void __fastcall CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem>::Shutdown(
        CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>::Shutdown  (line 828, @0x00000000023aa080, libserver.so)
void __fastcall CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager>::Shutdown(
        CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>::Shutdown  (line 828, @0x00000000023e77f0, libserver.so)
void __fastcall CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager>::Shutdown(
        CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>::Shutdown  (line 828, @0x00000000024569c0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager>::Shutdown(
        CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>::Shutdown  (line 828, @0x0000000002456ad0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations>::Shutdown(
        CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>::Shutdown  (line 828, @0x0000000002456c30, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer>::Shutdown(
        CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>::Shutdown  (line 828, @0x0000000002456de0, libserver.so)
void __fastcall CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager>::Shutdown(
        CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>::Shutdown  (line 828, @0x0000000002498330, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager>::Shutdown(
        CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>::Shutdown  (line 828, @0x0000000002498850, libserver.so)
void __fastcall CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record>::Shutdown(
        CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>::Shutdown  (line 828, @0x0000000002498960, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog>::Shutdown(
        CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>::Shutdown  (line 828, @0x0000000002498a70, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer>::Shutdown(
        CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>::Shutdown  (line 828, @0x0000000002498b80, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer>::Shutdown(
        CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>::Shutdown  (line 828, @0x0000000002498c90, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem>::Shutdown(
        CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>::Shutdown  (line 828, @0x0000000002498e30, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem>::Shutdown(
        CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CGridNav, CGridNav>::Shutdown  (line 828, @0x00000000025537d0, libserver.so)
void __fastcall CGameSystemStaticFactory<CGridNav,CGridNav>::Shutdown(
        CGameSystemStaticFactory<CGridNav,CGridNav> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>::Shutdown  (line 828, @0x0000000002554120, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager>::Shutdown(
        CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>::Shutdown  (line 828, @0x00000000025543c0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem>::Shutdown(
        CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>::Shutdown  (line 828, @0x00000000025c6af0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector>::Shutdown(
        CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameEventListener2 + 21))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>::Shutdown  (line 828, @0x000000000262c050, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF>::Shutdown(
        CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>::Shutdown  (line 828, @0x000000000262c160, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer>::Shutdown(
        CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>::Shutdown  (line 828, @0x000000000269ecd0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager>::Shutdown(
        CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>::Shutdown  (line 828, @0x000000000269f2b0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem>::Shutdown(
        CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>::Shutdown  (line 828, @0x0000000002728d00, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial>::Shutdown(
        CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>::Shutdown  (line 828, @0x00000000027290d0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager>::Shutdown(
        CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>::Shutdown  (line 828, @0x00000000027293c0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager>::Shutdown(
        CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>::Shutdown  (line 828, @0x00000000027cee50, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem>::Shutdown(
        CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>::Shutdown  (line 828, @0x00000000027cef70, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder>::Shutdown(
        CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>::Shutdown  (line 828, @0x00000000027cf290, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems>::Shutdown(
        CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>::Shutdown  (line 828, @0x00000000028120f0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander>::Shutdown(
        CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>::Shutdown  (line 828, @0x0000000002968f30, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList>::Shutdown(
        CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>::Shutdown  (line 828, @0x00000000029a7e70, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache>::Shutdown(
        CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>::Shutdown  (line 828, @0x00000000029a8150, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem>::Shutdown(
        CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem> *const this)
{
  (*(*this->m_pActualGlobal + 16LL))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>::Shutdown  (line 828, @0x0000000002abe1a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker>::Shutdown(
        CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>::Shutdown  (line 828, @0x0000000002e0cc90, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager>::Shutdown(
        CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CItemGeneration, CItemGeneration>::Shutdown  (line 828, @0x0000000002e4f410, libserver.so)
void __fastcall CGameSystemStaticFactory<CItemGeneration,CItemGeneration>::Shutdown(
        CGameSystemStaticFactory<CItemGeneration,CItemGeneration> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 2))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>::Shutdown  (line 828, @0x0000000002e4f710, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager>::Shutdown(
        CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager> *const this)
{
  (*(*this->m_pActualGlobal + 16LL))(this->m_pActualGlobal);
}


// CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager>::GetPriority  (line 835, @0x0000000001b50980, libserver.so)
int __fastcall CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager>::GetPriority(
        const CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CFogSystem, CFogSystem>::GetPriority  (line 835, @0x0000000001eeb6c0, libserver.so)
int __fastcall CGameSystemStaticFactory<CFogSystem,CFogSystem>::GetPriority(
        const CGameSystemStaticFactory<CFogSystem,CFogSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem>::GetPriority  (line 835, @0x0000000001efd180, libserver.so)
int __fastcall CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem>::GetPriority(
        const CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>::GetPriority  (line 835, @0x0000000001f73780, libserver.so)
int __fastcall CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager>::GetPriority(
        const CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>::GetPriority  (line 835, @0x000000000208f390, libserver.so)
int __fastcall CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem>::GetPriority(
        const CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>::GetPriority  (line 835, @0x0000000002139bb0, libserver.so)
int __fastcall CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser>::GetPriority(
        const CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CWeaponList, CWeaponList>::GetPriority  (line 835, @0x000000000217aae0, libserver.so)
int __fastcall CGameSystemStaticFactory<CWeaponList,CWeaponList>::GetPriority(
        const CGameSystemStaticFactory<CWeaponList,CWeaponList> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>::GetPriority  (line 835, @0x000000000217abf0, libserver.so)
int __fastcall CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache>::GetPriority(
        const CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>::GetPriority  (line 835, @0x000000000217ad00, libserver.so)
int __fastcall CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships>::GetPriority(
        const CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>::GetPriority  (line 835, @0x000000000217af00, libserver.so)
int __fastcall CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager>::GetPriority(
        const CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>::GetPriority  (line 835, @0x00000000021b16c0, libserver.so)
int __fastcall CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor>::GetPriority(
        const CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>::GetPriority  (line 835, @0x00000000021b1b20, libserver.so)
int __fastcall CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList>::GetPriority(
        const CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>::GetPriority  (line 835, @0x00000000021e0190, libserver.so)
int __fastcall CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem>::GetPriority(
        const CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CGameTimescale, CGameTimescale>::GetPriority  (line 835, @0x00000000022460f0, libserver.so)
int __fastcall CGameSystemStaticFactory<CGameTimescale,CGameTimescale>::GetPriority(
        const CGameSystemStaticFactory<CGameTimescale,CGameTimescale> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CGlobalState, CGlobalState>::GetPriority  (line 835, @0x000000000227b9c0, libserver.so)
int __fastcall CGameSystemStaticFactory<CGlobalState,CGlobalState>::GetPriority(
        const CGameSystemStaticFactory<CGlobalState,CGlobalState> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>::GetPriority  (line 835, @0x000000000227bb70, libserver.so)
int __fastcall CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver>::GetPriority(
        const CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> *const this)
{
  return -16384;
}


// CGameSystemStaticFactory<CAnchorList, CAnchorList>::GetPriority  (line 835, @0x0000000002305100, libserver.so)
int __fastcall CGameSystemStaticFactory<CAnchorList,CAnchorList>::GetPriority(
        const CGameSystemStaticFactory<CAnchorList,CAnchorList> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>::GetPriority  (line 835, @0x0000000002305610, libserver.so)
int __fastcall CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem>::GetPriority(
        const CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>::GetPriority  (line 835, @0x000000000233aa20, libserver.so)
int __fastcall CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener>::GetPriority(
        const CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>::GetPriority  (line 835, @0x000000000233ab30, libserver.so)
int __fastcall CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager>::GetPriority(
        const CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>::GetPriority  (line 835, @0x00000000023716e0, libserver.so)
int __fastcall CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement>::GetPriority(
        const CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>::GetPriority  (line 835, @0x0000000002372150, libserver.so)
int __fastcall CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem>::GetPriority(
        const CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>::GetPriority  (line 835, @0x00000000023a9de0, libserver.so)
int __fastcall CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp>::GetPriority(
        const CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>::GetPriority  (line 835, @0x00000000023a9f50, libserver.so)
int __fastcall CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem>::GetPriority(
        const CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>::GetPriority  (line 835, @0x00000000023aa100, libserver.so)
int __fastcall CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager>::GetPriority(
        const CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>::GetPriority  (line 835, @0x00000000023e7870, libserver.so)
int __fastcall CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager>::GetPriority(
        const CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>::GetPriority  (line 835, @0x0000000002456a40, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>::GetPriority  (line 835, @0x0000000002456b50, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>::GetPriority  (line 835, @0x0000000002456cb0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>::GetPriority  (line 835, @0x0000000002456e60, libserver.so)
int __fastcall CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager>::GetPriority(
        const CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>::GetPriority  (line 835, @0x00000000024983b0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager> *const this)
{
  return -1;
}


// CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>::GetPriority  (line 835, @0x00000000024988d0, libserver.so)
int __fastcall CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record>::GetPriority(
        const CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>::GetPriority  (line 835, @0x00000000024989e0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>::GetPriority  (line 835, @0x0000000002498af0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>::GetPriority  (line 835, @0x0000000002498c00, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>::GetPriority  (line 835, @0x0000000002498d10, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem>::GetPriority(
        const CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem> *const this)
{
  return -1;
}


// CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>::GetPriority  (line 835, @0x0000000002498eb0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CGridNav, CGridNav>::GetPriority  (line 835, @0x0000000002553850, libserver.so)
int __fastcall CGameSystemStaticFactory<CGridNav,CGridNav>::GetPriority(
        const CGameSystemStaticFactory<CGridNav,CGridNav> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>::GetPriority  (line 835, @0x00000000025541a0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager>::GetPriority(
        const CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>::GetPriority  (line 835, @0x0000000002554440, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem>::GetPriority(
        const CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>::GetPriority  (line 835, @0x00000000025c6b80, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector>::GetPriority(
        const CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>::GetPriority  (line 835, @0x000000000262c0d0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>::GetPriority  (line 835, @0x000000000262c1e0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer>::GetPriority(
        const CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>::GetPriority  (line 835, @0x000000000269ed50, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>::GetPriority  (line 835, @0x000000000269f330, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>::GetPriority  (line 835, @0x0000000002728d80, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>::GetPriority  (line 835, @0x0000000002729150, libserver.so)
int __fastcall CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager>::GetPriority(
        const CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>::GetPriority  (line 835, @0x0000000002729440, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager>::GetPriority(
        const CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>::GetPriority  (line 835, @0x00000000027ceed0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem>::GetPriority(
        const CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>::GetPriority  (line 835, @0x00000000027ceff0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>::GetPriority  (line 835, @0x00000000027cf310, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>::GetPriority  (line 835, @0x0000000002812170, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>::GetPriority  (line 835, @0x0000000002968fb0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList>::GetPriority(
        const CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>::GetPriority  (line 835, @0x00000000029a7ef0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache>::GetPriority(
        const CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>::GetPriority  (line 835, @0x00000000029a81d0, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem>::GetPriority(
        const CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>::GetPriority  (line 835, @0x0000000002abe220, libserver.so)
int __fastcall CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker>::GetPriority(
        const CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>::GetPriority  (line 835, @0x0000000002e0cd10, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager>::GetPriority(
        const CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CItemGeneration, CItemGeneration>::GetPriority  (line 835, @0x0000000002e4f490, libserver.so)
int __fastcall CGameSystemStaticFactory<CItemGeneration,CItemGeneration>::GetPriority(
        const CGameSystemStaticFactory<CItemGeneration,CItemGeneration> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>::GetPriority  (line 835, @0x0000000002e4f790, libserver.so)
int __fastcall CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager>::GetPriority(
        const CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager>::CreateGameSystem  (line 839, @0x0000000001b50920, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager>::CreateGameSystem(
        CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CFogSystem, CFogSystem>::CreateGameSystem  (line 839, @0x0000000001eeb660, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CFogSystem,CFogSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CFogSystem,CFogSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem>::CreateGameSystem  (line 839, @0x0000000001efd120, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>::CreateGameSystem  (line 839, @0x0000000001f73720, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager>::CreateGameSystem(
        CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>::CreateGameSystem  (line 839, @0x000000000208f330, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>::CreateGameSystem  (line 839, @0x0000000002139b50, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser>::CreateGameSystem(
        CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CWeaponList, CWeaponList>::CreateGameSystem  (line 839, @0x000000000217aa80, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CWeaponList,CWeaponList>::CreateGameSystem(
        CGameSystemStaticFactory<CWeaponList,CWeaponList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>::CreateGameSystem  (line 839, @0x000000000217ab90, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache>::CreateGameSystem(
        CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>::CreateGameSystem  (line 839, @0x000000000217aca0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships>::CreateGameSystem(
        CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>::CreateGameSystem  (line 839, @0x000000000217aea0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager>::CreateGameSystem(
        CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>::CreateGameSystem  (line 839, @0x00000000021b1660, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor>::CreateGameSystem(
        CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>::CreateGameSystem  (line 839, @0x00000000021b1ac0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList>::CreateGameSystem(
        CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>::CreateGameSystem  (line 839, @0x00000000021e0120, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> *const this)
{
  CDecalEmitterSystem *m_pActualGlobal; // rax

  (*(this->m_pActualGlobal->_vptr_IDecalEmitterSystem + 5))(this->m_pActualGlobal, this->m_pActualGlobal);
  m_pActualGlobal = this->m_pActualGlobal;
  if ( m_pActualGlobal != 0 )
    return &m_pActualGlobal->CAutoGameSystem;
  else
    return 0;
}


// CGameSystemStaticFactory<CGameTimescale, CGameTimescale>::CreateGameSystem  (line 839, @0x0000000002246090, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CGameTimescale,CGameTimescale>::CreateGameSystem(
        CGameSystemStaticFactory<CGameTimescale,CGameTimescale> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CGlobalState, CGlobalState>::CreateGameSystem  (line 839, @0x000000000227b960, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CGlobalState,CGlobalState>::CreateGameSystem(
        CGameSystemStaticFactory<CGlobalState,CGlobalState> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>::CreateGameSystem  (line 839, @0x000000000227bb10, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver>::CreateGameSystem(
        CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CAnchorList, CAnchorList>::CreateGameSystem  (line 839, @0x00000000023050a0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CAnchorList,CAnchorList>::CreateGameSystem(
        CGameSystemStaticFactory<CAnchorList,CAnchorList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>::CreateGameSystem  (line 839, @0x00000000023055b0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>::CreateGameSystem  (line 839, @0x000000000233a9c0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener>::CreateGameSystem(
        CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>::CreateGameSystem  (line 839, @0x000000000233aad0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager>::CreateGameSystem(
        CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>::CreateGameSystem  (line 839, @0x0000000002371680, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement>::CreateGameSystem(
        CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>::CreateGameSystem  (line 839, @0x00000000023720f0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>::CreateGameSystem  (line 839, @0x00000000023a9d70, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp>::CreateGameSystem(
        CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> *const this)
{
  CSoundControllerImp *m_pActualGlobal; // rax

  (*(this->m_pActualGlobal->_vptr_CSoundEnvelopeController + 26))(this->m_pActualGlobal, this->m_pActualGlobal);
  m_pActualGlobal = this->m_pActualGlobal;
  if ( m_pActualGlobal != 0 )
    return &m_pActualGlobal->CAutoGameSystem;
  else
    return 0;
}


// CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>::CreateGameSystem  (line 839, @0x00000000023a9ef0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>::CreateGameSystem  (line 839, @0x00000000023aa0a0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager>::CreateGameSystem(
        CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>::CreateGameSystem  (line 839, @0x00000000023e7810, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager>::CreateGameSystem(
        CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>::CreateGameSystem  (line 839, @0x00000000024569e0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>::CreateGameSystem  (line 839, @0x0000000002456af0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>::CreateGameSystem  (line 839, @0x0000000002456c50, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>::CreateGameSystem  (line 839, @0x0000000002456e00, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager>::CreateGameSystem(
        CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>::CreateGameSystem  (line 839, @0x0000000002498350, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>::CreateGameSystem  (line 839, @0x0000000002498870, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record>::CreateGameSystem(
        CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>::CreateGameSystem  (line 839, @0x0000000002498980, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>::CreateGameSystem  (line 839, @0x0000000002498a90, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>::CreateGameSystem  (line 839, @0x0000000002498ba0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>::CreateGameSystem  (line 839, @0x0000000002498cb0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>::CreateGameSystem  (line 839, @0x0000000002498e50, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CGridNav, CGridNav>::CreateGameSystem  (line 839, @0x00000000025537f0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CGridNav,CGridNav>::CreateGameSystem(
        CGameSystemStaticFactory<CGridNav,CGridNav> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>::CreateGameSystem  (line 839, @0x0000000002554140, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>::CreateGameSystem  (line 839, @0x00000000025543e0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>::CreateGameSystem  (line 839, @0x00000000025c6b10, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector> *const this)
{
  CDOTAHLTVDirector *m_pActualGlobal; // rax

  (*(this->m_pActualGlobal->_vptr_IGameEventListener2 + 5))(this->m_pActualGlobal, this->m_pActualGlobal);
  m_pActualGlobal = this->m_pActualGlobal;
  if ( m_pActualGlobal != 0 )
    return &m_pActualGlobal->IGameSystem;
  else
    return 0;
}


// CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>::CreateGameSystem  (line 839, @0x000000000262c070, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>::CreateGameSystem  (line 839, @0x000000000262c180, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>::CreateGameSystem  (line 839, @0x000000000269ecf0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>::CreateGameSystem  (line 839, @0x000000000269f2d0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>::CreateGameSystem  (line 839, @0x0000000002728d20, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>::CreateGameSystem  (line 839, @0x00000000027290f0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager>::CreateGameSystem(
        CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>::CreateGameSystem  (line 839, @0x00000000027293e0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>::CreateGameSystem  (line 839, @0x00000000027cee70, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>::CreateGameSystem  (line 839, @0x00000000027cef90, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>::CreateGameSystem  (line 839, @0x00000000027cf2b0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>::CreateGameSystem  (line 839, @0x0000000002812110, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>::CreateGameSystem  (line 839, @0x0000000002968f50, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>::CreateGameSystem  (line 839, @0x00000000029a7e90, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>::CreateGameSystem  (line 839, @0x00000000029a8170, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem> *const this)
{
  (*(*this->m_pActualGlobal + 272LL))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>::CreateGameSystem  (line 839, @0x0000000002abe1c0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker>::CreateGameSystem(
        CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>::CreateGameSystem  (line 839, @0x0000000002e0ccb0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CItemGeneration, CItemGeneration>::CreateGameSystem  (line 839, @0x0000000002e4f430, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CItemGeneration,CItemGeneration>::CreateGameSystem(
        CGameSystemStaticFactory<CItemGeneration,CItemGeneration> *const this)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>::CreateGameSystem  (line 839, @0x0000000002e4f730, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager>::CreateGameSystem(
        CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager> *const this)
{
  (*(*this->m_pActualGlobal + 272LL))(this->m_pActualGlobal, this->m_pActualGlobal);
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager>::DestroyGameSystem  (line 849, @0x0000000001b50950, libserver.so)
void __fastcall CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CFogSystem, CFogSystem>::DestroyGameSystem  (line 849, @0x0000000001eeb690, libserver.so)
void __fastcall CGameSystemStaticFactory<CFogSystem,CFogSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CFogSystem,CFogSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem>::DestroyGameSystem  (line 849, @0x0000000001efd150, libserver.so)
void __fastcall CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>::DestroyGameSystem  (line 849, @0x0000000001f73750, libserver.so)
void __fastcall CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>::DestroyGameSystem  (line 849, @0x000000000208f360, libserver.so)
void __fastcall CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>::DestroyGameSystem  (line 849, @0x0000000002139b80, libserver.so)
void __fastcall CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser>::DestroyGameSystem(
        CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CWeaponList, CWeaponList>::DestroyGameSystem  (line 849, @0x000000000217aab0, libserver.so)
void __fastcall CGameSystemStaticFactory<CWeaponList,CWeaponList>::DestroyGameSystem(
        CGameSystemStaticFactory<CWeaponList,CWeaponList> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>::DestroyGameSystem  (line 849, @0x000000000217abc0, libserver.so)
void __fastcall CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache>::DestroyGameSystem(
        CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>::DestroyGameSystem  (line 849, @0x000000000217acd0, libserver.so)
void __fastcall CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships>::DestroyGameSystem(
        CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>::DestroyGameSystem  (line 849, @0x000000000217aed0, libserver.so)
void __fastcall CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>::DestroyGameSystem  (line 849, @0x00000000021b1690, libserver.so)
void __fastcall CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor>::DestroyGameSystem(
        CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>::DestroyGameSystem  (line 849, @0x00000000021b1af0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList>::DestroyGameSystem(
        CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>::DestroyGameSystem  (line 849, @0x00000000021e0160, libserver.so)
void __fastcall CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IDecalEmitterSystem + 5))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CGameTimescale, CGameTimescale>::DestroyGameSystem  (line 849, @0x00000000022460c0, libserver.so)
void __fastcall CGameSystemStaticFactory<CGameTimescale,CGameTimescale>::DestroyGameSystem(
        CGameSystemStaticFactory<CGameTimescale,CGameTimescale> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CGlobalState, CGlobalState>::DestroyGameSystem  (line 849, @0x000000000227b990, libserver.so)
void __fastcall CGameSystemStaticFactory<CGlobalState,CGlobalState>::DestroyGameSystem(
        CGameSystemStaticFactory<CGlobalState,CGlobalState> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>::DestroyGameSystem  (line 849, @0x000000000227bb40, libserver.so)
void __fastcall CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver>::DestroyGameSystem(
        CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CAnchorList, CAnchorList>::DestroyGameSystem  (line 849, @0x00000000023050d0, libserver.so)
void __fastcall CGameSystemStaticFactory<CAnchorList,CAnchorList>::DestroyGameSystem(
        CGameSystemStaticFactory<CAnchorList,CAnchorList> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>::DestroyGameSystem  (line 849, @0x00000000023055e0, libserver.so)
void __fastcall CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>::DestroyGameSystem  (line 849, @0x000000000233a9f0, libserver.so)
void __fastcall CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener>::DestroyGameSystem(
        CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>::DestroyGameSystem  (line 849, @0x000000000233ab00, libserver.so)
void __fastcall CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>::DestroyGameSystem  (line 849, @0x00000000023716b0, libserver.so)
void __fastcall CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement>::DestroyGameSystem(
        CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>::DestroyGameSystem  (line 849, @0x0000000002372120, libserver.so)
void __fastcall CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>::DestroyGameSystem  (line 849, @0x00000000023a9db0, libserver.so)
void __fastcall CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp>::DestroyGameSystem(
        CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_CSoundEnvelopeController + 26))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>::DestroyGameSystem  (line 849, @0x00000000023a9f20, libserver.so)
void __fastcall CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>::DestroyGameSystem  (line 849, @0x00000000023aa0d0, libserver.so)
void __fastcall CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>::DestroyGameSystem  (line 849, @0x00000000023e7840, libserver.so)
void __fastcall CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>::DestroyGameSystem  (line 849, @0x0000000002456a10, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>::DestroyGameSystem  (line 849, @0x0000000002456b20, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>::DestroyGameSystem  (line 849, @0x0000000002456c80, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>::DestroyGameSystem  (line 849, @0x0000000002456e30, libserver.so)
void __fastcall CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>::DestroyGameSystem  (line 849, @0x0000000002498380, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>::DestroyGameSystem  (line 849, @0x00000000024988a0, libserver.so)
void __fastcall CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record>::DestroyGameSystem(
        CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>::DestroyGameSystem  (line 849, @0x00000000024989b0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>::DestroyGameSystem  (line 849, @0x0000000002498ac0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>::DestroyGameSystem  (line 849, @0x0000000002498bd0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>::DestroyGameSystem  (line 849, @0x0000000002498ce0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>::DestroyGameSystem  (line 849, @0x0000000002498e80, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CGridNav, CGridNav>::DestroyGameSystem  (line 849, @0x0000000002553820, libserver.so)
void __fastcall CGameSystemStaticFactory<CGridNav,CGridNav>::DestroyGameSystem(
        CGameSystemStaticFactory<CGridNav,CGridNav> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>::DestroyGameSystem  (line 849, @0x0000000002554170, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>::DestroyGameSystem  (line 849, @0x0000000002554410, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>::DestroyGameSystem  (line 849, @0x00000000025c6b50, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameEventListener2 + 5))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>::DestroyGameSystem  (line 849, @0x000000000262c0a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>::DestroyGameSystem  (line 849, @0x000000000262c1b0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>::DestroyGameSystem  (line 849, @0x000000000269ed20, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>::DestroyGameSystem  (line 849, @0x000000000269f300, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>::DestroyGameSystem  (line 849, @0x0000000002728d50, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>::DestroyGameSystem  (line 849, @0x0000000002729120, libserver.so)
void __fastcall CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>::DestroyGameSystem  (line 849, @0x0000000002729410, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>::DestroyGameSystem  (line 849, @0x00000000027ceea0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>::DestroyGameSystem  (line 849, @0x00000000027cefc0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>::DestroyGameSystem  (line 849, @0x00000000027cf2e0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>::DestroyGameSystem  (line 849, @0x0000000002812140, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>::DestroyGameSystem  (line 849, @0x0000000002968f80, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>::DestroyGameSystem  (line 849, @0x00000000029a7ec0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>::DestroyGameSystem  (line 849, @0x00000000029a81a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem> *const this,
        IGameSystem *pGameSystem)
{
  (*(*this->m_pActualGlobal + 272LL))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>::DestroyGameSystem  (line 849, @0x0000000002abe1f0, libserver.so)
void __fastcall CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker>::DestroyGameSystem(
        CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>::DestroyGameSystem  (line 849, @0x0000000002e0cce0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CItemGeneration, CItemGeneration>::DestroyGameSystem  (line 849, @0x0000000002e4f460, libserver.so)
void __fastcall CGameSystemStaticFactory<CItemGeneration,CItemGeneration>::DestroyGameSystem(
        CGameSystemStaticFactory<CItemGeneration,CItemGeneration> *const this,
        IGameSystem *pGameSystem)
{
  (*(this->m_pActualGlobal->_vptr_IGameSystem + 34))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>::DestroyGameSystem  (line 849, @0x0000000002e4f760, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager>::DestroyGameSystem(
        CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager> *const this,
        IGameSystem *pGameSystem)
{
  (*(*this->m_pActualGlobal + 272LL))(this->m_pActualGlobal, 0);
}


// CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager>::ShouldAutoAdd  (line 858, @0x0000000001b50970, libserver.so)
bool __fastcall CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CFogSystem, CFogSystem>::ShouldAutoAdd  (line 858, @0x0000000001eeb6b0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CFogSystem,CFogSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CFogSystem,CFogSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem>::ShouldAutoAdd  (line 858, @0x0000000001efd170, libserver.so)
bool __fastcall CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>::ShouldAutoAdd  (line 858, @0x0000000001f73770, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>::ShouldAutoAdd  (line 858, @0x000000000208f380, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>::ShouldAutoAdd  (line 858, @0x0000000002139ba0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CWeaponList, CWeaponList>::ShouldAutoAdd  (line 858, @0x000000000217aad0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CWeaponList,CWeaponList>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CWeaponList,CWeaponList> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>::ShouldAutoAdd  (line 858, @0x000000000217abe0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>::ShouldAutoAdd  (line 858, @0x000000000217acf0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>::ShouldAutoAdd  (line 858, @0x000000000217aef0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>::ShouldAutoAdd  (line 858, @0x00000000021b16b0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>::ShouldAutoAdd  (line 858, @0x00000000021b1b10, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>::ShouldAutoAdd  (line 858, @0x00000000021e0180, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CGameTimescale, CGameTimescale>::ShouldAutoAdd  (line 858, @0x00000000022460e0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CGameTimescale,CGameTimescale>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CGameTimescale,CGameTimescale> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CGlobalState, CGlobalState>::ShouldAutoAdd  (line 858, @0x000000000227b9b0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CGlobalState,CGlobalState>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CGlobalState,CGlobalState> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>::ShouldAutoAdd  (line 858, @0x000000000227bb60, libserver.so)
bool __fastcall CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CAnchorList, CAnchorList>::ShouldAutoAdd  (line 858, @0x00000000023050f0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CAnchorList,CAnchorList>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CAnchorList,CAnchorList> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>::ShouldAutoAdd  (line 858, @0x0000000002305600, libserver.so)
bool __fastcall CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>::ShouldAutoAdd  (line 858, @0x000000000233aa10, libserver.so)
bool __fastcall CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>::ShouldAutoAdd  (line 858, @0x000000000233ab20, libserver.so)
bool __fastcall CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>::ShouldAutoAdd  (line 858, @0x00000000023716d0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>::ShouldAutoAdd  (line 858, @0x0000000002372140, libserver.so)
bool __fastcall CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>::ShouldAutoAdd  (line 858, @0x00000000023a9dd0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>::ShouldAutoAdd  (line 858, @0x00000000023a9f40, libserver.so)
bool __fastcall CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>::ShouldAutoAdd  (line 858, @0x00000000023aa0f0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>::ShouldAutoAdd  (line 858, @0x00000000023e7860, libserver.so)
bool __fastcall CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>::ShouldAutoAdd  (line 858, @0x0000000002456a30, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>::ShouldAutoAdd  (line 858, @0x0000000002456b40, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>::ShouldAutoAdd  (line 858, @0x0000000002456ca0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>::ShouldAutoAdd  (line 858, @0x0000000002456e50, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>::ShouldAutoAdd  (line 858, @0x00000000024983a0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>::ShouldAutoAdd  (line 858, @0x00000000024988c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record>::ShouldAutoAdd(
        const CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>::ShouldAutoAdd  (line 858, @0x00000000024989d0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>::ShouldAutoAdd  (line 858, @0x0000000002498ae0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>::ShouldAutoAdd  (line 858, @0x0000000002498bf0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>::ShouldAutoAdd  (line 858, @0x0000000002498d00, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>::ShouldAutoAdd  (line 858, @0x0000000002498ea0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CGridNav, CGridNav>::ShouldAutoAdd  (line 858, @0x0000000002553840, libserver.so)
bool __fastcall CGameSystemStaticFactory<CGridNav,CGridNav>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CGridNav,CGridNav> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>::ShouldAutoAdd  (line 858, @0x0000000002554190, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>::ShouldAutoAdd  (line 858, @0x0000000002554430, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>::ShouldAutoAdd  (line 858, @0x00000000025c6b70, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>::ShouldAutoAdd  (line 858, @0x000000000262c0c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>::ShouldAutoAdd  (line 858, @0x000000000262c1d0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>::ShouldAutoAdd  (line 858, @0x000000000269ed40, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>::ShouldAutoAdd  (line 858, @0x000000000269f320, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>::ShouldAutoAdd  (line 858, @0x0000000002728d70, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>::ShouldAutoAdd  (line 858, @0x0000000002729140, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>::ShouldAutoAdd  (line 858, @0x0000000002729430, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>::ShouldAutoAdd  (line 858, @0x00000000027ceec0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>::ShouldAutoAdd  (line 858, @0x00000000027cefe0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>::ShouldAutoAdd  (line 858, @0x00000000027cf300, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>::ShouldAutoAdd  (line 858, @0x0000000002812160, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>::ShouldAutoAdd  (line 858, @0x0000000002968fa0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>::ShouldAutoAdd  (line 858, @0x00000000029a7ee0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>::ShouldAutoAdd  (line 858, @0x00000000029a81c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>::ShouldAutoAdd  (line 858, @0x0000000002abe210, libserver.so)
bool __fastcall CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>::ShouldAutoAdd  (line 858, @0x0000000002e0cd00, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CItemGeneration, CItemGeneration>::ShouldAutoAdd  (line 858, @0x0000000002e4f480, libserver.so)
bool __fastcall CGameSystemStaticFactory<CItemGeneration,CItemGeneration>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CItemGeneration,CItemGeneration> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>::ShouldAutoAdd  (line 858, @0x0000000002e4f780, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager>::ShouldAutoAdd(
        const CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager> *const this)
{
  return 1;
}


// CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager>::SetGlobalPtr  (line 860, @0x0000000001b50990, libserver.so)
void __fastcall CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> *const this,
        void *pValue)
{
  CClientUIDialogManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CFogSystem, CFogSystem>::SetGlobalPtr  (line 860, @0x0000000001eeb6d0, libserver.so)
void __fastcall CGameSystemStaticFactory<CFogSystem,CFogSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CFogSystem,CFogSystem> *const this,
        void *pValue)
{
  CFogSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem>::SetGlobalPtr  (line 860, @0x0000000001efd190, libserver.so)
void __fastcall CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> *const this,
        void *pValue)
{
  CResourcePrecacherGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>::SetGlobalPtr  (line 860, @0x0000000001f73790, libserver.so)
void __fastcall CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> *const this,
        void *pValue)
{
  CCustomGameEventManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>::SetGlobalPtr  (line 860, @0x000000000208f3a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> *const this,
        void *pValue)
{
  IResponseSystem **m_ppGlobalPointer; // rdx
  IResponseSystem *v3; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
  {
    v3 = 0;
    if ( pValue != 0 )
      v3 = (pValue + 16);
    *m_ppGlobalPointer = v3;
  }
}


// CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>::SetGlobalPtr  (line 860, @0x0000000002139bc0, libserver.so)
void __fastcall CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser>::SetGlobalPtr(
        CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser> *const this,
        void *pValue)
{
  CWeaponScriptParser **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CWeaponList, CWeaponList>::SetGlobalPtr  (line 860, @0x000000000217aaf0, libserver.so)
void __fastcall CGameSystemStaticFactory<CWeaponList,CWeaponList>::SetGlobalPtr(
        CGameSystemStaticFactory<CWeaponList,CWeaponList> *const this,
        void *pValue)
{
  CWeaponList **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>::SetGlobalPtr  (line 860, @0x000000000217ac00, libserver.so)
void __fastcall CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache>::SetGlobalPtr(
        CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache> *const this,
        void *pValue)
{
  CCombatCharVisCache **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>::SetGlobalPtr  (line 860, @0x000000000217ad10, libserver.so)
void __fastcall CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships>::SetGlobalPtr(
        CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships> *const this,
        void *pValue)
{
  CCleanupDefaultRelationships **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>::SetGlobalPtr  (line 860, @0x000000000217af10, libserver.so)
void __fastcall CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> *const this,
        void *pValue)
{
  CResponseQueueManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>::SetGlobalPtr  (line 860, @0x00000000021b16d0, libserver.so)
void __fastcall CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor>::SetGlobalPtr(
        CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> *const this,
        void *pValue)
{
  CVisibilityMonitor **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>::SetGlobalPtr  (line 860, @0x00000000021b1b30, libserver.so)
void __fastcall CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList>::SetGlobalPtr(
        CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> *const this,
        void *pValue)
{
  CDirtySpatialPartitionEntityList **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>::SetGlobalPtr  (line 860, @0x00000000021e01a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> *const this,
        void *pValue)
{
  IDecalEmitterSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CGameTimescale, CGameTimescale>::SetGlobalPtr  (line 860, @0x0000000002246100, libserver.so)
void __fastcall CGameSystemStaticFactory<CGameTimescale,CGameTimescale>::SetGlobalPtr(
        CGameSystemStaticFactory<CGameTimescale,CGameTimescale> *const this,
        void *pValue)
{
  CGameTimescale **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CGlobalState, CGlobalState>::SetGlobalPtr  (line 860, @0x000000000227b9d0, libserver.so)
void __fastcall CGameSystemStaticFactory<CGlobalState,CGlobalState>::SetGlobalPtr(
        CGameSystemStaticFactory<CGlobalState,CGlobalState> *const this,
        void *pValue)
{
  CGlobalState **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>::SetGlobalPtr  (line 860, @0x000000000227bb80, libserver.so)
void __fastcall CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver>::SetGlobalPtr(
        CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> *const this,
        void *pValue)
{
  CBaseGameStats_Driver **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CAnchorList, CAnchorList>::SetGlobalPtr  (line 860, @0x0000000002305110, libserver.so)
void __fastcall CGameSystemStaticFactory<CAnchorList,CAnchorList>::SetGlobalPtr(
        CGameSystemStaticFactory<CAnchorList,CAnchorList> *const this,
        void *pValue)
{
  CAnchorList **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>::SetGlobalPtr  (line 860, @0x0000000002305620, libserver.so)
void __fastcall CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> *const this,
        void *pValue)
{
  CParticleSystemQueryGameSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>::SetGlobalPtr  (line 860, @0x000000000233aa30, libserver.so)
void __fastcall CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener>::SetGlobalPtr(
        CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> *const this,
        void *pValue)
{
  CPlayerVoiceListener **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>::SetGlobalPtr  (line 860, @0x000000000233ab40, libserver.so)
void __fastcall CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> *const this,
        void *pValue)
{
  ILagCompensationManager **m_ppGlobalPointer; // rdx
  ILagCompensationManager *v3; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
  {
    v3 = 0;
    if ( pValue != 0 )
      v3 = (pValue + 16);
    *m_ppGlobalPointer = v3;
  }
}


// CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>::SetGlobalPtr  (line 860, @0x00000000023716f0, libserver.so)
void __fastcall CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement>::SetGlobalPtr(
        CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> *const this,
        void *pValue)
{
  CRagdollLRURetirement **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>::SetGlobalPtr  (line 860, @0x0000000002372160, libserver.so)
void __fastcall CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem> *const this,
        void *pValue)
{
  CPostProcessSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>::SetGlobalPtr  (line 860, @0x00000000023a9df0, libserver.so)
void __fastcall CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp>::SetGlobalPtr(
        CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> *const this,
        void *pValue)
{
  CSoundControllerImp **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>::SetGlobalPtr  (line 860, @0x00000000023a9f60, libserver.so)
void __fastcall CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> *const this,
        void *pValue)
{
  CSoundEmitterSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>::SetGlobalPtr  (line 860, @0x00000000023aa110, libserver.so)
void __fastcall CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> *const this,
        void *pValue)
{
  CFlexSceneFileManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>::SetGlobalPtr  (line 860, @0x00000000023e7880, libserver.so)
void __fastcall CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager> *const this,
        void *pValue)
{
  CTrackedControllerManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>::SetGlobalPtr  (line 860, @0x0000000002456a50, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager> *const this,
        void *pValue)
{
  CDOTA_AttackRecordManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>::SetGlobalPtr  (line 860, @0x0000000002456b60, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations> *const this,
        void *pValue)
{
  CDOTA_AbilityAnimations **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>::SetGlobalPtr  (line 860, @0x0000000002456cc0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer> *const this,
        void *pValue)
{
  CDOTA_ActionDelayer **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>::SetGlobalPtr  (line 860, @0x0000000002456e70, libserver.so)
void __fastcall CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager> *const this,
        void *pValue)
{
  CCustomNetTableManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>::SetGlobalPtr  (line 860, @0x00000000024983c0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager> *const this,
        void *pValue)
{
  CDOTA_CustomUIManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>::SetGlobalPtr  (line 860, @0x00000000024988e0, libserver.so)
void __fastcall CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record>::SetGlobalPtr(
        CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record> *const this,
        void *pValue)
{
  DOTA_CombatLog_Record **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>::SetGlobalPtr  (line 860, @0x00000000024989f0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog> *const this,
        void *pValue)
{
  CDOTA_CombatLog **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>::SetGlobalPtr  (line 860, @0x0000000002498b00, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer> *const this,
        void *pValue)
{
  CDOTA_RealtimeCombatAnalyzer **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>::SetGlobalPtr  (line 860, @0x0000000002498c10, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer> *const this,
        void *pValue)
{
  CDOTA_CombatAnalyzer **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>::SetGlobalPtr  (line 860, @0x0000000002498d20, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem> *const this,
        void *pValue)
{
  CDOTAChallengeSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>::SetGlobalPtr  (line 860, @0x0000000002498ec0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem> *const this,
        void *pValue)
{
  CDOTA_BinaryObjectSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CGridNav, CGridNav>::SetGlobalPtr  (line 860, @0x0000000002553860, libserver.so)
void __fastcall CGameSystemStaticFactory<CGridNav,CGridNav>::SetGlobalPtr(
        CGameSystemStaticFactory<CGridNav,CGridNav> *const this,
        void *pValue)
{
  CGridNav **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>::SetGlobalPtr  (line 860, @0x00000000025541b0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager> *const this,
        void *pValue)
{
  CDOTAGameManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>::SetGlobalPtr  (line 860, @0x0000000002554450, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem> *const this,
        void *pValue)
{
  CDOTAFogOfWarSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>::SetGlobalPtr  (line 860, @0x00000000025c6b90, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector> *const this,
        void *pValue)
{
  CDOTAHLTVDirector **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>::SetGlobalPtr  (line 860, @0x000000000262c0e0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF> *const this,
        void *pValue)
{
  CDOTA_OGS_VPROF **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>::SetGlobalPtr  (line 860, @0x000000000262c1f0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer> *const this,
        void *pValue)
{
  CDOTASteamWorksGameStatsServer **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>::SetGlobalPtr  (line 860, @0x000000000269ed60, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager> *const this,
        void *pValue)
{
  CDOTA_ProjectileManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>::SetGlobalPtr  (line 860, @0x000000000269f340, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem> *const this,
        void *pValue)
{
  CDOTA_ParticleManagerSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>::SetGlobalPtr  (line 860, @0x0000000002728d90, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial> *const this,
        void *pValue)
{
  CDOTA_Tutorial **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>::SetGlobalPtr  (line 860, @0x0000000002729160, libserver.so)
void __fastcall CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager> *const this,
        void *pValue)
{
  CDotaStatManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>::SetGlobalPtr  (line 860, @0x0000000002729450, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager> *const this,
        void *pValue)
{
  CDOTASpectatorGraphManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>::SetGlobalPtr  (line 860, @0x00000000027ceee0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem> *const this,
        void *pValue)
{
  CDOTAVoteSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>::SetGlobalPtr  (line 860, @0x00000000027cf000, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder> *const this,
        void *pValue)
{
  CDOTA_Grinder **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>::SetGlobalPtr  (line 860, @0x00000000027cf320, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems> *const this,
        void *pValue)
{
  CDOTA_AutoCombinableItems **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>::SetGlobalPtr  (line 860, @0x0000000002812180, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander> *const this,
        void *pValue)
{
  CDOTA_Commander **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>::SetGlobalPtr  (line 860, @0x0000000002968fc0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList> *const this,
        void *pValue)
{
  CDOTAHeroList **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>::SetGlobalPtr  (line 860, @0x00000000029a7f00, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache> *const this,
        void *pValue)
{
  CDOTACustomGameCache **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>::SetGlobalPtr  (line 860, @0x00000000029a81e0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem> *const this,
        void *pValue)
{
  CDOTAGCServerSystem **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>::SetGlobalPtr  (line 860, @0x0000000002abe230, libserver.so)
void __fastcall CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker>::SetGlobalPtr(
        CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker> *const this,
        void *pValue)
{
  CAnnouncerSharedThinker **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>::SetGlobalPtr  (line 860, @0x0000000002e0cd20, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager> *const this,
        void *pValue)
{
  CDOTA_TeleportTimerManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CItemGeneration, CItemGeneration>::SetGlobalPtr  (line 860, @0x0000000002e4f4a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CItemGeneration,CItemGeneration>::SetGlobalPtr(
        CGameSystemStaticFactory<CItemGeneration,CItemGeneration> *const this,
        void *pValue)
{
  CItemGeneration **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>::SetGlobalPtr  (line 860, @0x0000000002e4f7a0, libserver.so)
void __fastcall CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager>::SetGlobalPtr(
        CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager> *const this,
        void *pValue)
{
  CDOTAInventoryManager **m_ppGlobalPointer; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
    *m_ppGlobalPointer = pValue;
}


// CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager>::IsReallocating  (line 868, @0x0000000001b509b0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager>::IsReallocating(
        const CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CFogSystem, CFogSystem>::IsReallocating  (line 868, @0x0000000001eeb6f0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CFogSystem,CFogSystem>::IsReallocating(
        const CGameSystemStaticFactory<CFogSystem,CFogSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem>::IsReallocating  (line 868, @0x0000000001efd1b0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem>::IsReallocating(
        const CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>::IsReallocating  (line 868, @0x0000000001f737b0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager>::IsReallocating(
        const CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>::IsReallocating  (line 868, @0x000000000208f3c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem>::IsReallocating(
        const CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>::IsReallocating  (line 868, @0x0000000002139be0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser>::IsReallocating(
        const CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CWeaponList, CWeaponList>::IsReallocating  (line 868, @0x000000000217ab10, libserver.so)
bool __fastcall CGameSystemStaticFactory<CWeaponList,CWeaponList>::IsReallocating(
        const CGameSystemStaticFactory<CWeaponList,CWeaponList> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>::IsReallocating  (line 868, @0x000000000217ac20, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache>::IsReallocating(
        const CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>::IsReallocating  (line 868, @0x000000000217ad30, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships>::IsReallocating(
        const CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>::IsReallocating  (line 868, @0x000000000217af30, libserver.so)
bool __fastcall CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager>::IsReallocating(
        const CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>::IsReallocating  (line 868, @0x00000000021b16f0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor>::IsReallocating(
        const CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>::IsReallocating  (line 868, @0x00000000021b1b50, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList>::IsReallocating(
        const CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>::IsReallocating  (line 868, @0x00000000021e01c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem>::IsReallocating(
        const CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CGameTimescale, CGameTimescale>::IsReallocating  (line 868, @0x0000000002246120, libserver.so)
bool __fastcall CGameSystemStaticFactory<CGameTimescale,CGameTimescale>::IsReallocating(
        const CGameSystemStaticFactory<CGameTimescale,CGameTimescale> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CGlobalState, CGlobalState>::IsReallocating  (line 868, @0x000000000227b9f0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CGlobalState,CGlobalState>::IsReallocating(
        const CGameSystemStaticFactory<CGlobalState,CGlobalState> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>::IsReallocating  (line 868, @0x000000000227bba0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver>::IsReallocating(
        const CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CAnchorList, CAnchorList>::IsReallocating  (line 868, @0x0000000002305130, libserver.so)
bool __fastcall CGameSystemStaticFactory<CAnchorList,CAnchorList>::IsReallocating(
        const CGameSystemStaticFactory<CAnchorList,CAnchorList> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>::IsReallocating  (line 868, @0x0000000002305640, libserver.so)
bool __fastcall CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem>::IsReallocating(
        const CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>::IsReallocating  (line 868, @0x000000000233aa50, libserver.so)
bool __fastcall CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener>::IsReallocating(
        const CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>::IsReallocating  (line 868, @0x000000000233ab60, libserver.so)
bool __fastcall CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager>::IsReallocating(
        const CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>::IsReallocating  (line 868, @0x0000000002371710, libserver.so)
bool __fastcall CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement>::IsReallocating(
        const CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>::IsReallocating  (line 868, @0x0000000002372180, libserver.so)
bool __fastcall CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem>::IsReallocating(
        const CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>::IsReallocating  (line 868, @0x00000000023a9e10, libserver.so)
bool __fastcall CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp>::IsReallocating(
        const CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>::IsReallocating  (line 868, @0x00000000023a9f80, libserver.so)
bool __fastcall CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem>::IsReallocating(
        const CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>::IsReallocating  (line 868, @0x00000000023aa130, libserver.so)
bool __fastcall CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager>::IsReallocating(
        const CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>::IsReallocating  (line 868, @0x00000000023e78a0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager>::IsReallocating(
        const CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>::IsReallocating  (line 868, @0x0000000002456a70, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>::IsReallocating  (line 868, @0x0000000002456b80, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>::IsReallocating  (line 868, @0x0000000002456ce0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>::IsReallocating  (line 868, @0x0000000002456e90, libserver.so)
bool __fastcall CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager>::IsReallocating(
        const CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>::IsReallocating  (line 868, @0x00000000024983e0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>::IsReallocating  (line 868, @0x0000000002498900, libserver.so)
bool __fastcall CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record>::IsReallocating(
        const CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>::IsReallocating  (line 868, @0x0000000002498a10, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>::IsReallocating  (line 868, @0x0000000002498b20, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>::IsReallocating  (line 868, @0x0000000002498c30, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>::IsReallocating  (line 868, @0x0000000002498d40, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem>::IsReallocating(
        const CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>::IsReallocating  (line 868, @0x0000000002498ee0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CGridNav, CGridNav>::IsReallocating  (line 868, @0x0000000002553880, libserver.so)
bool __fastcall CGameSystemStaticFactory<CGridNav,CGridNav>::IsReallocating(
        const CGameSystemStaticFactory<CGridNav,CGridNav> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>::IsReallocating  (line 868, @0x00000000025541d0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager>::IsReallocating(
        const CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>::IsReallocating  (line 868, @0x0000000002554470, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem>::IsReallocating(
        const CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>::IsReallocating  (line 868, @0x00000000025c6bb0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector>::IsReallocating(
        const CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>::IsReallocating  (line 868, @0x000000000262c100, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>::IsReallocating  (line 868, @0x000000000262c210, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer>::IsReallocating(
        const CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>::IsReallocating  (line 868, @0x000000000269ed80, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>::IsReallocating  (line 868, @0x000000000269f360, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>::IsReallocating  (line 868, @0x0000000002728db0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>::IsReallocating  (line 868, @0x0000000002729180, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager>::IsReallocating(
        const CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>::IsReallocating  (line 868, @0x0000000002729470, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager>::IsReallocating(
        const CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>::IsReallocating  (line 868, @0x00000000027cef00, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem>::IsReallocating(
        const CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>::IsReallocating  (line 868, @0x00000000027cf020, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>::IsReallocating  (line 868, @0x00000000027cf340, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>::IsReallocating  (line 868, @0x00000000028121a0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>::IsReallocating  (line 868, @0x0000000002968fe0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList>::IsReallocating(
        const CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>::IsReallocating  (line 868, @0x00000000029a7f20, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache>::IsReallocating(
        const CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>::IsReallocating  (line 868, @0x00000000029a8200, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem>::IsReallocating(
        const CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>::IsReallocating  (line 868, @0x0000000002abe250, libserver.so)
bool __fastcall CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker>::IsReallocating(
        const CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>::IsReallocating  (line 868, @0x0000000002e0cd40, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager>::IsReallocating(
        const CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CItemGeneration, CItemGeneration>::IsReallocating  (line 868, @0x0000000002e4f4c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CItemGeneration,CItemGeneration>::IsReallocating(
        const CGameSystemStaticFactory<CItemGeneration,CItemGeneration> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>::IsReallocating  (line 868, @0x0000000002e4f7c0, libserver.so)
bool __fastcall CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager>::IsReallocating(
        const CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager> *const this)
{
  return 0;
}


// CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager>::GetStaticGameSystem  (line 873, @0x0000000001b509c0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CFogSystem, CFogSystem>::GetStaticGameSystem  (line 873, @0x0000000001eeb700, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CFogSystem,CFogSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CFogSystem,CFogSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem>::GetStaticGameSystem  (line 873, @0x0000000001efd1c0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>::GetStaticGameSystem  (line 873, @0x0000000001f737c0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>::GetStaticGameSystem  (line 873, @0x000000000208f3d0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>::GetStaticGameSystem  (line 873, @0x0000000002139bf0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser>::GetStaticGameSystem(
        CGameSystemStaticFactory<CWeaponScriptParser,CWeaponScriptParser> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CWeaponList, CWeaponList>::GetStaticGameSystem  (line 873, @0x000000000217ab20, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CWeaponList,CWeaponList>::GetStaticGameSystem(
        CGameSystemStaticFactory<CWeaponList,CWeaponList> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>::GetStaticGameSystem  (line 873, @0x000000000217ac30, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache>::GetStaticGameSystem(
        CGameSystemStaticFactory<CCombatCharVisCache,CCombatCharVisCache> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>::GetStaticGameSystem  (line 873, @0x000000000217ad40, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships>::GetStaticGameSystem(
        CGameSystemStaticFactory<CCleanupDefaultRelationships,CCleanupDefaultRelationships> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>::GetStaticGameSystem  (line 873, @0x000000000217af40, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>::GetStaticGameSystem  (line 873, @0x00000000021b1700, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor>::GetStaticGameSystem(
        CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>::GetStaticGameSystem  (line 873, @0x00000000021b1b60, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>::GetStaticGameSystem  (line 873, @0x00000000021e01d0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> *const this)
{
  CDecalEmitterSystem *m_pActualGlobal; // rax

  m_pActualGlobal = this->m_pActualGlobal;
  if ( m_pActualGlobal != 0 )
    return &m_pActualGlobal->CAutoGameSystem;
  else
    return 0;
}


// CGameSystemStaticFactory<CGameTimescale, CGameTimescale>::GetStaticGameSystem  (line 873, @0x0000000002246130, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CGameTimescale,CGameTimescale>::GetStaticGameSystem(
        CGameSystemStaticFactory<CGameTimescale,CGameTimescale> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CGlobalState, CGlobalState>::GetStaticGameSystem  (line 873, @0x000000000227ba00, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CGlobalState,CGlobalState>::GetStaticGameSystem(
        CGameSystemStaticFactory<CGlobalState,CGlobalState> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>::GetStaticGameSystem  (line 873, @0x000000000227bbb0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver>::GetStaticGameSystem(
        CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CAnchorList, CAnchorList>::GetStaticGameSystem  (line 873, @0x0000000002305140, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CAnchorList,CAnchorList>::GetStaticGameSystem(
        CGameSystemStaticFactory<CAnchorList,CAnchorList> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>::GetStaticGameSystem  (line 873, @0x0000000002305650, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>::GetStaticGameSystem  (line 873, @0x000000000233aa60, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener>::GetStaticGameSystem(
        CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>::GetStaticGameSystem  (line 873, @0x000000000233ab70, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>::GetStaticGameSystem  (line 873, @0x0000000002371720, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement>::GetStaticGameSystem(
        CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>::GetStaticGameSystem  (line 873, @0x0000000002372190, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CPostProcessSystem,CPostProcessSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>::GetStaticGameSystem  (line 873, @0x00000000023a9e20, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp>::GetStaticGameSystem(
        CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> *const this)
{
  CSoundControllerImp *m_pActualGlobal; // rax

  m_pActualGlobal = this->m_pActualGlobal;
  if ( m_pActualGlobal != 0 )
    return &m_pActualGlobal->CAutoGameSystem;
  else
    return 0;
}


// CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>::GetStaticGameSystem  (line 873, @0x00000000023a9f90, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>::GetStaticGameSystem  (line 873, @0x00000000023aa140, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>::GetStaticGameSystem  (line 873, @0x00000000023e78b0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CTrackedControllerManager,CTrackedControllerManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>::GetStaticGameSystem  (line 873, @0x0000000002456a80, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_AttackRecordManager,CDOTA_AttackRecordManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>::GetStaticGameSystem  (line 873, @0x0000000002456b90, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_AbilityAnimations,CDOTA_AbilityAnimations> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>::GetStaticGameSystem  (line 873, @0x0000000002456cf0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_ActionDelayer,CDOTA_ActionDelayer> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>::GetStaticGameSystem  (line 873, @0x0000000002456ea0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CCustomNetTableManager,CCustomNetTableManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>::GetStaticGameSystem  (line 873, @0x00000000024983f0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_CustomUIManager,CDOTA_CustomUIManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>::GetStaticGameSystem  (line 873, @0x0000000002498910, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record>::GetStaticGameSystem(
        CGameSystemStaticFactory<DOTA_CombatLog_Record,DOTA_CombatLog_Record> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>::GetStaticGameSystem  (line 873, @0x0000000002498a20, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_CombatLog,CDOTA_CombatLog> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>::GetStaticGameSystem  (line 873, @0x0000000002498b30, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer,CDOTA_RealtimeCombatAnalyzer> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>::GetStaticGameSystem  (line 873, @0x0000000002498c40, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_CombatAnalyzer,CDOTA_CombatAnalyzer> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>::GetStaticGameSystem  (line 873, @0x0000000002498d50, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTAChallengeSystem,CDOTAChallengeSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>::GetStaticGameSystem  (line 873, @0x0000000002498ef0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_BinaryObjectSystem,CDOTA_BinaryObjectSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CGridNav, CGridNav>::GetStaticGameSystem  (line 873, @0x0000000002553890, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CGridNav,CGridNav>::GetStaticGameSystem(
        CGameSystemStaticFactory<CGridNav,CGridNav> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>::GetStaticGameSystem  (line 873, @0x00000000025541e0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTAGameManager,CDOTAGameManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>::GetStaticGameSystem  (line 873, @0x0000000002554480, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTAFogOfWarSystem,CDOTAFogOfWarSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>::GetStaticGameSystem  (line 873, @0x00000000025c6bc0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTAHLTVDirector,CDOTAHLTVDirector> *const this)
{
  CDOTAHLTVDirector *m_pActualGlobal; // rax

  m_pActualGlobal = this->m_pActualGlobal;
  if ( m_pActualGlobal != 0 )
    return &m_pActualGlobal->IGameSystem;
  else
    return 0;
}


// CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>::GetStaticGameSystem  (line 873, @0x000000000262c110, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_OGS_VPROF,CDOTA_OGS_VPROF> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>::GetStaticGameSystem  (line 873, @0x000000000262c220, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer,CDOTASteamWorksGameStatsServer> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>::GetStaticGameSystem  (line 873, @0x000000000269ed90, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_ProjectileManager,CDOTA_ProjectileManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>::GetStaticGameSystem  (line 873, @0x000000000269f370, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_ParticleManagerSystem,CDOTA_ParticleManagerSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>::GetStaticGameSystem  (line 873, @0x0000000002728dc0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_Tutorial,CDOTA_Tutorial> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>::GetStaticGameSystem  (line 873, @0x0000000002729190, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDotaStatManager,CDotaStatManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>::GetStaticGameSystem  (line 873, @0x0000000002729480, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTASpectatorGraphManager,CDOTASpectatorGraphManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>::GetStaticGameSystem  (line 873, @0x00000000027cef10, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTAVoteSystem,CDOTAVoteSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>::GetStaticGameSystem  (line 873, @0x00000000027cf030, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_Grinder,CDOTA_Grinder> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>::GetStaticGameSystem  (line 873, @0x00000000027cf350, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_AutoCombinableItems,CDOTA_AutoCombinableItems> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>::GetStaticGameSystem  (line 873, @0x00000000028121b0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_Commander,CDOTA_Commander> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>::GetStaticGameSystem  (line 873, @0x0000000002968ff0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTAHeroList,CDOTAHeroList> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>::GetStaticGameSystem  (line 873, @0x00000000029a7f30, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTACustomGameCache,CDOTACustomGameCache> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>::GetStaticGameSystem  (line 873, @0x00000000029a8210, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTAGCServerSystem,CDOTAGCServerSystem> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>::GetStaticGameSystem  (line 873, @0x0000000002abe260, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker>::GetStaticGameSystem(
        CGameSystemStaticFactory<CAnnouncerSharedThinker,CAnnouncerSharedThinker> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>::GetStaticGameSystem  (line 873, @0x0000000002e0cd50, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTA_TeleportTimerManager,CDOTA_TeleportTimerManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CItemGeneration, CItemGeneration>::GetStaticGameSystem  (line 873, @0x0000000002e4f4d0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CItemGeneration,CItemGeneration>::GetStaticGameSystem(
        CGameSystemStaticFactory<CItemGeneration,CItemGeneration> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>::GetStaticGameSystem  (line 873, @0x0000000002e4f7d0, libserver.so)
IGameSystem *__fastcall CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager>::GetStaticGameSystem(
        CGameSystemStaticFactory<CDOTAInventoryManager,CDOTAInventoryManager> *const this)
{
  return this->m_pActualGlobal;
}


// CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem>::Init  (line 887, @0x0000000001f72630, libserver.so)
bool __fastcall CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem>::Init(
        CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> *const this)
{
  return 0;
}


// CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem>::PostInit  (line 888, @0x0000000001f72640, libserver.so)
void __fastcall CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem>::PostInit(
        CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> *const this)
{
  ;
}


// CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem>::Shutdown  (line 889, @0x0000000001f72650, libserver.so)
void __fastcall CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem>::Shutdown(
        CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> *const this)
{
  ;
}


// CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem>::GetPriority  (line 890, @0x0000000001f72690, libserver.so)
int __fastcall CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem>::GetPriority(
        const CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> *const this)
{
  return 0;
}


// CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem>::CreateGameSystem  (line 891, @0x0000000001f72660, libserver.so)
IGameSystem *__fastcall CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem>::CreateGameSystem(
        CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> *const this)
{
  return 0;
}


// CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem>::DestroyGameSystem  (line 892, @0x0000000001f72670, libserver.so)
void __fastcall CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem>::DestroyGameSystem(
        CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> *const this,
        IGameSystem *pGameSystem)
{
  ;
}


// CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem>::ShouldAutoAdd  (line 893, @0x0000000001f72680, libserver.so)
bool __fastcall CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem>::ShouldAutoAdd(
        const CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> *const this)
{
  return 0;
}


// CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem>::SetGlobalPtr  (line 894, @0x0000000001f726a0, libserver.so)
void __fastcall CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem>::SetGlobalPtr(
        CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> *const this,
        void *pValue)
{
  IVScriptGameSystem **m_ppGlobalPointer; // rdx
  IVScriptGameSystem *v3; // rax

  m_ppGlobalPointer = this->m_ppGlobalPointer;
  if ( m_ppGlobalPointer != 0 )
  {
    v3 = 0;
    if ( pValue != 0 )
      v3 = (pValue + 16);
    *m_ppGlobalPointer = v3;
  }
}


// CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem>::IsReallocating  (line 902, @0x0000000001f726c0, libserver.so)
bool __fastcall CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem>::IsReallocating(
        const CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> *const this)
{
  return 0;
}


// CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem>::GetStaticGameSystem  (line 907, @0x0000000001f726d0, libserver.so)
IGameSystem *__fastcall CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem>::GetStaticGameSystem(
        CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> *const this)
{
  return 0;
}


// CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x0000000001f740e0, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FCDDB0;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x0000000001f74100, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FCDDB0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5680, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFB450;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f56a0, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFB450;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5720, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFB130;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5740, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFB130;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f57c0, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFAE10;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f57e0, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFAE10;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5860, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFAAF0;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5880, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFAAF0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5900, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFA7D0;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5920, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFA7D0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f59a0, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFA4B0;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f59c0, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFA4B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5a40, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFA190;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5a60, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FFA190;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5ae0, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FF9E70;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5b00, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FF9E70;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5b80, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FF9B50;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5ba0, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FF9B50;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5c20, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FF9830;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5c40, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FF9830;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5cc0, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FF9510;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5ce0, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FF9510;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5d60, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FF91F0;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal, 0>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5d80, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0> *const this)
{
  this->_vptr_IGameSystem = off_3FF91F0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStartupHookGameSystem<GameEvent_RegisterInternal, 17408>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5e00, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameEvent_RegisterInternal,17408> *const this)
{
  this->_vptr_IGameSystem = off_3FF74F0;
  IGameSystem::~IGameSystem(this);
}


// CStartupHookGameSystem<GameEvent_RegisterInternal, 17408>::~CStartupHookGameSystem  (line 1048, @0x00000000020f5e20, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStartupHookGameSystem<GameEvent_RegisterInternal,17408>::~CStartupHookGameSystem(
        CStartupHookGameSystem<GameEvent_RegisterInternal,17408> *const this)
{
  this->_vptr_IGameSystem = off_3FF74F0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


