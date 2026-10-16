// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamerules.cpp:71
class C_CGameRulesProxy_MapInstall {
	C_CGameRulesProxy_MapInstall();

	// sizeof = 1
};

// src/game/shared/gamerules.cpp:90
class CGameRulesGameSystem : public IGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef IGameSystem BaseClass;
	CGameRulesGameSystem(CGameRulesGameSystem &);
	CGameRulesGameSystem(const CGameRulesGameSystem &);
	CGameRulesGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CGameRulesGameSystem *);
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void PostInit();
	virtual void GamePostInit(const EventGamePostInit_t &);
	virtual void BuildGameSessionManifest(const EventBuildGameSessionManifest_t &);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void SpawnGroupPrecache(const EventSpawnGroupPrecache_t &);
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void SaveGame(const EventSaveGame_t &);
	virtual void RestoreGame(const EventRestoreGame_t &);
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void PreClientUpdate(const EventServerPreClientUpdate_t &);
	virtual ~CGameRulesGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[1] PostInit
	// vtable[5] GamePostInit
	// vtable[7] BuildGameSessionManifest
	// vtable[8] GameActivate
	// vtable[12] SpawnGroupPrecache
	// vtable[14] PreSpawnGroupLoad
	// vtable[15] PostSpawnGroupLoad
	// vtable[16] PreSpawnGroupUnload
	// vtable[17] PostSpawnGroupUnload
	// vtable[18] ActiveSpawnGroupChanged
	// vtable[11] GameDeactivate
	// vtable[31] SaveGame
	// vtable[32] RestoreGame
	// vtable[24] FrameUpdatePreEntityThink
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[26] PreClientUpdate
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameRulesProxy::CEntityInstanceEntityClass::InitOptionalTables  (line 67, @0x0000000002273650, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag, ThreadInterlockedExchange, operator=, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CGameRulesProxy::SetupEntClassInputs, CGameRulesProxy::SetupEntClassComponentOverrides, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort (13 total)
// strings: "CGameRulesProxy"
// globals: `guard variable for'CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass, CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CGameRulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo, CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo
bool __cdecl CGameRulesProxy::CEntityInstanceEntityClass::InitOptionalTables()
{
  CGameRulesProxy::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass) != 0 )
  {
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass._vptr_CEntityClass = off_3F79390;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_designerName.u.m_Id = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_ComponentOffsets.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_AllHelpers.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classInputs.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classOutputs.m_Size = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_requiredEHandle.m_Index = -1;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_hNetworkSerializer = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pBaseClassInfo = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pClassInfo = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_flags = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_nAllHelpersFlags = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pScriptClassDesc = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pInputs = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_nInputCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pOutputs = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_nOutputCount = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pGameClass = 0;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass._vptr_CEntityClass = off_3FC5290;
    __cxa_guard_release(&`guard variable for'CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass);
    __cxa_atexit(
      CGameRulesProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass,
      &_dso_handle);
  }
  if ( g_pEntityCGameRulesProxyClass == 0 )
  {
    if ( `guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo,
        "CGameRulesProxy",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo);
    }
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pClassInfo = &CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pBaseClassInfo = CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo.m_pBaseClassInfo;
    g_pEntityCGameRulesProxyClass = &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass;
    CGameRulesProxy::GetEntityClassInfo(void)::g_EntityCGameRulesProxyClassInfo.m_pClass = &CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass;
    CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
    CGameRulesProxy::SetupEntClassInputs(g_pEntityCGameRulesProxyClass);
    CGameRulesProxy::SetupEntClassComponentOverrides(g_pEntityCGameRulesProxyClass);
  }
  CGameRulesProxy::GetEntityClassInternal(void)::g_EntityCGameRulesProxyClass.m_flags |= 4u;
  return 1;
}


// CGameRulesProxy::YouForgotToImplementOrDeclareServerClass  (line 71, @0x0000000002253f50, libserver.so)
int __fastcall CGameRulesProxy::YouForgotToImplementOrDeclareServerClass(CGameRulesProxy *const this)
{
  return 0;
}


// CGameRulesProxy::GetServerClass  (line 71, @0x000000000225d260, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CGameRulesProxy::GetServerClass(CGameRulesProxy *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CGameRulesProxy::UpdateTransmitState  (line 73, @0x00000000022545f0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CGameRulesProxy::UpdateTransmitState(CGameRulesProxy *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CGameRulesGameSystem::~CGameRulesGameSystem  (line 90, @0x000000000227c0b0, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CGameRulesGameSystem::~CGameRulesGameSystem(CGameRulesGameSystem *const this)
{
  this->_vptr_IGameSystem = &off_404FBB0;
  IGameSystem::~IGameSystem(this);
}


// CGameRulesGameSystem::~CGameRulesGameSystem  (line 90, @0x000000000227c0d0, libserver.so)  // inlines: ~CGameRulesGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CGameRulesGameSystem::~CGameRulesGameSystem(CGameRulesGameSystem *const this)
{
  this->_vptr_IGameSystem = &off_404FBB0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CGameRulesGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 92, @0x000000000227ad40, libserver.so)
void __fastcall CGameRulesGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CGameRulesGameSystem *const this)
{
  ;
}


// CGameRulesGameSystem::DoesGameSystemReallocate  (line 92, @0x000000000227ad50, libserver.so)
// globals: CGameRulesGameSystem::sm_Factory
bool __fastcall CGameRulesGameSystem::DoesGameSystemReallocate(const CGameRulesGameSystem *const this)
{
  return (*(CGameRulesGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CGameRulesGameSystem::sm_Factory);
}


// CGameRulesGameSystem::SetGameSystemGlobalPtrs  (line 92, @0x000000000227ad70, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CGameRulesGameSystem::sm_Factory
void __fastcall CGameRulesGameSystem::SetGameSystemGlobalPtrs(CGameRulesGameSystem *const this, void *pValue)
{
  if ( CGameRulesGameSystem::sm_Factory != 0 )
    (*(CGameRulesGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CGameRulesGameSystem::sm_Factory, pValue);
}


// CGameRulesGameSystem::GameInit  (line 95, @0x000000000227ca50, libserver.so)
// calls: InstallGameRules, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "SV", "%s:  CGameRulesGameSystem::GameInit installed game rules\n"
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::GameInit(CGameRulesGameSystem *const this, const EventGameInit_t *const msg)
{
  InstallGameRules(msg->m_pConfig);
  if ( g_pGameRules != 0 )
  {
    (*(g_pGameRules->_vptr_CGameRules + 20))(g_pGameRules);
    (*(g_pGameRules->_vptr_CGameRules + 2))(g_pGameRules, msg);
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(LOG_SERVER, 1, "%s:  CGameRulesGameSystem::GameInit installed game rules\n", "SV");
  }
}


// CGameRulesGameSystem::GameShutdown  (line 109, @0x000000000227bce0, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "SV", "%s:  CGameRulesGameSystem::GameShutdown uninstalled game rules\n"
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::GameShutdown(
        CGameRulesGameSystem *const this,
        const EventGameShutdown_t *const msg)
{
  if ( g_pGameRules != 0 )
  {
    (*(g_pGameRules->_vptr_CGameRules + 12))(g_pGameRules, msg);
    (*(g_pGameRules->_vptr_CGameRules + 21))(g_pGameRules);
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(LOG_SERVER, 1, "%s:  CGameRulesGameSystem::GameShutdown uninstalled game rules\n", "SV");
    if ( g_pGameRules != 0 )
      (*(g_pGameRules->_vptr_CGameRules + 19))(g_pGameRules);
    g_pGameRules = 0;
  }
}


// CGameRulesGameSystem::PostInit  (line 124, @0x000000000227ada0, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::PostInit(CGameRulesGameSystem *const this)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 1))(g_pGameRules);
}


// CGameRulesGameSystem::GamePostInit  (line 132, @0x000000000227add0, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::GamePostInit(
        CGameRulesGameSystem *const this,
        const EventGamePostInit_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 3))(g_pGameRules, msg);
}


// CGameRulesGameSystem::BuildGameSessionManifest  (line 142, @0x000000000227ae00, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::BuildGameSessionManifest(
        CGameRulesGameSystem *const this,
        const EventBuildGameSessionManifest_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 15))(g_pGameRules, msg);
}


// CGameRulesGameSystem::GameActivate  (line 151, @0x000000000227c520, libserver.so)
// calls: CreateWorldEntity, CSoundEnt::InitSoundEnt
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::GameActivate(
        CGameRulesGameSystem *const this,
        const EventGameActivate_t *const msg)
{
  CreateWorldEntity();
  CSoundEnt::InitSoundEnt();
  if ( g_pGameRules != 0 )
  {
    (*(g_pGameRules->_vptr_CGameRules + 4))(g_pGameRules, msg);
    (*(g_pGameRules->_vptr_CGameRules + 130))(g_pGameRules);
    (*(g_pGameRules->_vptr_CGameRules + 106))(g_pGameRules);
  }
}


// CGameRulesGameSystem::SpawnGroupPrecache  (line 173, @0x000000000227ae30, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::SpawnGroupPrecache(
        CGameRulesGameSystem *const this,
        const EventSpawnGroupPrecache_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 5))(g_pGameRules, msg);
}


// CGameRulesGameSystem::PreSpawnGroupLoad  (line 181, @0x000000000227ae60, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::PreSpawnGroupLoad(
        CGameRulesGameSystem *const this,
        const EventPreSpawnGroupLoad_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 6))(g_pGameRules, msg);
}


// CGameRulesGameSystem::PostSpawnGroupLoad  (line 189, @0x000000000227ae90, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::PostSpawnGroupLoad(
        CGameRulesGameSystem *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 7))(g_pGameRules, msg);
}


// CGameRulesGameSystem::PreSpawnGroupUnload  (line 197, @0x000000000227aec0, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::PreSpawnGroupUnload(
        CGameRulesGameSystem *const this,
        const EventPreSpawnGroupUnload_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 8))(g_pGameRules, msg);
}


// CGameRulesGameSystem::PostSpawnGroupUnload  (line 205, @0x000000000227aef0, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::PostSpawnGroupUnload(
        CGameRulesGameSystem *const this,
        const EventPostSpawnGroupUnload_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 9))(g_pGameRules, msg);
}


// CGameRulesGameSystem::ActiveSpawnGroupChanged  (line 213, @0x000000000227af20, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::ActiveSpawnGroupChanged(
        CGameRulesGameSystem *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 10))(g_pGameRules, msg);
}


// CGameRulesGameSystem::GameDeactivate  (line 221, @0x000000000227c580, libserver.so)
// calls: CSoundEnt::ShutdownSoundEnt, ShutdownWorldEntity
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::GameDeactivate(
        CGameRulesGameSystem *const this,
        const EventGameDeactivate_t *const msg)
{
  if ( g_pGameRules != 0 )
  {
    (*(g_pGameRules->_vptr_CGameRules + 131))(g_pGameRules);
    (*(g_pGameRules->_vptr_CGameRules + 11))(g_pGameRules, msg);
  }
  CSoundEnt::ShutdownSoundEnt();
  ShutdownWorldEntity();
}


// CGameRulesGameSystem::SaveGame  (line 239, @0x000000000227af50, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::SaveGame(CGameRulesGameSystem *const this, const EventSaveGame_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 13))(g_pGameRules, msg);
}


// CGameRulesGameSystem::RestoreGame  (line 247, @0x000000000227af80, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::RestoreGame(
        CGameRulesGameSystem *const this,
        const EventRestoreGame_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 14))(g_pGameRules, msg);
}


// CGameRulesGameSystem::FrameUpdatePreEntityThink  (line 296, @0x000000000227afb0, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::FrameUpdatePreEntityThink(
        CGameRulesGameSystem *const this,
        const EventServerPreEntityThink_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 16))(g_pGameRules, msg);
}


// CGameRulesGameSystem::FrameUpdatePostEntityThink  (line 304, @0x000000000227afe0, libserver.so)  // inlines: FrameUpdatePostEntityThink
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::FrameUpdatePostEntityThink(
        CGameRulesGameSystem *const this,
        const EventServerPostEntityThink_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 50))(g_pGameRules, msg);
}


// CGameRulesGameSystem::PreClientUpdate  (line 312, @0x000000000227b010, libserver.so)
// globals: g_pGameRules
void __fastcall CGameRulesGameSystem::PreClientUpdate(
        CGameRulesGameSystem *const this,
        const EventServerPreClientUpdate_t *const msg)
{
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 17))(g_pGameRules, msg);
}


// CGameRulesGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 322, @0x0000000002262060, libserver.so)
void __cdecl CGameRulesGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CGameRules::CGameRules  (line 329, @0x0000000002262070, libserver.so)
// calls: GetVoiceGameMgr, CVoiceGameMgr::Init, ClearMultiDamage, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CMultiplayRules::CMultiplayRules, CSingleplayRules::CSingleplayRules
// strings: "SV", "%s:  CGameRules::CGameRules constructed\n"
// globals: g_pGameRules
void __fastcall CGameRules::CGameRules(CGameRules *const this)
{
  int maxClients; // r13d
  IVoiceGameMgrHelper *v3; // r12
  CVoiceGameMgr *VoiceGameMgr; // rax

  this->_vptr_CGameRules = off_404FD70;  // vptr: CGameRules
  g_pGameRules = this;
  maxClients = gpGlobals->maxClients;
  v3 = g_pVoiceGameMgrHelper;
  VoiceGameMgr = GetVoiceGameMgr();
  CVoiceGameMgr::Init(VoiceGameMgr, v3, maxClients);
  ClearMultiDamage();
  this->m_szQuestName[0] = 0;
  this->m_nQuestPhase = 0;
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
    LoggingSystem_Log(LOG_SERVER, 0, "%s:  CGameRules::CGameRules constructed\n", "SV");
}


// CGameRules::BuildGameSessionManifest  (line 347, @0x0000000002255e20, libserver.so)
// calls: PrecacheEffect
// callers: CTeamplayRules::BuildGameSessionManifest
// strings: "ParticleEffectStop"
void __fastcall CGameRules::BuildGameSessionManifest(
        CGameRules *const this,
        const EventBuildGameSessionManifest_t *const msg)
{
  PrecacheEffect("ParticleEffect", 0);
  PrecacheEffect("ParticleEffectStop", 0);
}


// CGameRules::CanHaveAmmo  (line 393, @0x0000000002256fb0, libserver.so)
// calls: GetAmmoDef, CBaseCombatCharacter::GetAmmoCount
bool __fastcall CGameRules::CanHaveAmmo(CGameRules *const this, CBaseCombatCharacter *pPlayer, int iAmmoIndex)
{
  bool result; // al
  CAmmoDef *AmmoDef; // rax
  int v7; // r13d

  result = 0;
  if ( iAmmoIndex >= 0 )
  {
    AmmoDef = GetAmmoDef();
    v7 = AmmoDef->MaxCarry(iAmmoIndex, pPlayer);
    return v7 > CBaseCombatCharacter::GetAmmoCount(pPlayer, iAmmoIndex);
  }
  return result;
}


// CGameRules::CanHaveAmmo  (line 411, @0x0000000002255e50, libserver.so)
// calls: GetAmmoDef, CAmmoDef::Index
bool __fastcall CGameRules::CanHaveAmmo(CGameRules *const this, CBaseCombatCharacter *pPlayer, const char *szName)
{
  bool (__fastcall *v6)(CGameRules *const, CBaseCombatCharacter *, _QWORD); // r14
  CAmmoDef *AmmoDef; // rax
  unsigned int v8; // eax

  v6 = *(this->_vptr_CGameRules + 102);
  AmmoDef = GetAmmoDef();
  v8 = CAmmoDef::Index(AmmoDef, szName);
  return v6(this, pPlayer, v8);
}


// CGameRules::GetPlayerSpawnSpot  (line 418, @0x0000000002255ea0, libserver.so)  // inlines: VectorAdd, operator+
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetLocalOrigin, CBaseEntity::SetAbsVelocity, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles, CBasePlayer::SnapEyeAngles
// callers: CMultiplayRules::GetPlayerSpawnSpot
CBaseEntity *__fastcall CGameRules::GetPlayerSpawnSpot(CGameRules *const this, CBasePlayer *pPlayer)
{
  const CBaseEntity *v3; // rax
  CBaseEntity *v4; // r12
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  const QAngle *LocalAngles; // rax
  const QAngle *v9; // rax
  Vector vOrigin; // [rsp+0h] [rbp-20h] BYREF

  v3 = (*(pPlayer->_vptr_IHandleEntity + 456))(pPlayer);
  v4 = v3;
  if ( v3 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v6 = AbsOrigin->z + 1.0;
    v7 = AbsOrigin->x + 0.0;
    vOrigin.y = AbsOrigin->y + 0.0;
    vOrigin.z = v6;
    vOrigin.x = v7;
    CBaseEntity::SetLocalOrigin(pPlayer, &vOrigin);
    CBaseEntity::SetAbsVelocity(pPlayer, &vec3_origin);
    LocalAngles = CBaseEntity::GetLocalAngles(v4);
    CBaseEntity::SetLocalAngles(pPlayer, LocalAngles);
    v9 = CBaseEntity::GetLocalAngles(v4);
    CBasePlayer::SnapEyeAngles(pPlayer, v9);
  }
  return v4;
}


// CGameRules::IsSpawnPointValid  (line 436, @0x000000000226d220, libserver.so)  // inlines: ConvertToExternalMemory, NextEntity, Purge, Purge_FixedGrowable, RemoveAll, ~CEntitySphereQuery, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CBaseEntity::GetAbsOrigin, CEntitySphereQuery::CEntitySphereQuery, CEntitySphereQuery::GetCurrentEntity, CUtlMemory<COverlapHit, int>::Purge, __stack_chk_fail, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume
bool __fastcall CGameRules::IsSpawnPointValid(CGameRules *const this, CBaseEntity *pSpot, CBasePlayer *pPlayer)
{
  char v5; // r14
  const Vector *AbsOrigin; // rax
  float v8; // xmm1_4
  CBaseEntity *CurrentEntity; // rax
  CBasePlayer *v10; // rbx
  uint32 v11; // eax
  uint32 v12; // eax
  CEntitySphereQuery sphere; // [rsp+0h] [rbp-1050h] BYREF
  unsigned __int64 v14; // [rsp+1028h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  v5 = (*(pSpot->_vptr_IHandleEntity + 94))(pSpot, pPlayer);
  if ( v5 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pSpot);
    CEntitySphereQuery::CEntitySphereQuery(&sphere, AbsOrigin, 128.0, v8);
    while ( 1 )
    {
      CurrentEntity = CEntitySphereQuery::GetCurrentEntity(&sphere);
      v10 = CurrentEntity;
      if ( CurrentEntity == 0 )
        break;
      if ( (*(CurrentEntity->_vptr_IHandleEntity + 140))(CurrentEntity) != 0 && pPlayer != v10 )
      {
        sphere.m_results.m_list.m_Size = 0;
        v11 = sphere.m_results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
        if ( sphere.m_results.m_list.m_Memory.m_nAllocationCount < 0
          || sphere.m_results.m_list.m_Memory.m_pMemory == &sphere.m_results.m_list.m_Memory.m_FixedMemory )
        {
          if ( v11 == 0 )
            CUtlMemory<COverlapHit,int>::Purge(&sphere.m_results.m_list.m_Memory);
        }
        else if ( sphere.m_results.m_list.m_Memory.m_pMemory != 0 && v11 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        }
        return 0;
      }
      ++sphere.m_listIndex;
    }
    sphere.m_results.m_list.m_Size = 0;
    v12 = sphere.m_results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
    if ( sphere.m_results.m_list.m_Memory.m_nAllocationCount < 0
      || sphere.m_results.m_list.m_Memory.m_pMemory == &sphere.m_results.m_list.m_Memory.m_FixedMemory )
    {
      if ( v12 == 0 )
        CUtlMemory<COverlapHit,int>::Purge(&sphere.m_results.m_list.m_Memory);
    }
    else if ( sphere.m_results.m_list.m_Memory.m_pMemory != 0 && v12 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
  }
  return v5;
}


// CGameRules::CanHavePlayerItem  (line 457, @0x0000000002253f60, libserver.so)
// callers: CMultiplayRules::CanHavePlayerItem
bool __fastcall CGameRules::CanHavePlayerItem(CGameRules *const this, CBasePlayer *pPlayer, CBaseCombatWeapon *pWeapon)
{
  return 1;
}


// CGameRules::RefreshSkillData  (line 488, @0x0000000002253f70, libserver.so)
// callers: CMultiplayRules::RefreshSkillData, CMultiplayRules::CMultiplayRules
void __fastcall CGameRules::RefreshSkillData(CGameRules *const this, bool forceUpdate)
{
  ;
}


// IsExplosionTraceBlocked  (line 521, @0x0000000002262120, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CEntityIdentity::ClassMatches
// callers: CGameRules::RadiusDamage
// strings: "prop_door_rotating_physics", "prop_door_rotating", "func_door", "func_door_rotating"
bool __fastcall IsExplosionTraceBlocked(trace_t *ptr, CBaseEntity *pTargetEntity)
{
  CBaseEntity *m_pEnt; // rax
  CBaseEntity *v5; // rax
  CBaseEntity *v6; // rax

  if ( ptr->m_ShapeAttributes.m_nEntityId == 0x8000 )
    return 1;
  m_pEnt = ptr->m_pEnt;
  if ( m_pEnt != 0 )
  {
    if ( m_pEnt->m_MoveType.m_Value == MoveType_t::MOVETYPE_PUSH )
    {
      if ( CEntityIdentity::ClassMatches(m_pEnt->m_pEntity, "prop_door_rotating") )
        return 1;
      v5 = ptr->m_pEnt;
      if ( v5 != 0 )
      {
        if ( CEntityIdentity::ClassMatches(v5->m_pEntity, "func_door") )
          return 1;
        v6 = ptr->m_pEnt;
        if ( v6 != 0 && CEntityIdentity::ClassMatches(v6->m_pEntity, "func_door_rotating") )
          return 1;
      }
    }
    else if ( m_pEnt != pTargetEntity && CEntityIdentity::ClassMatches(m_pEnt->m_pEntity, "prop_door_rotating_physics") )
    {
      return 1;
    }
  }
  return 0;
}


// CGameRules::RadiusDamage  (line 552, @0x0000000002273a00, libserver.so)  // inlines: AddToTail, CEntityHandle, CGameTrace, CHandle, ClassMatches, ConvertToExternalMemory, CopyConstruct<CHandle<CBaseEntity> >, DistToSqr, Element, EnableInteractsWith, FClassnameIs, FastSqrt, Get, GetAttacker, GetBool, GetClassNameAsCStr, GetClassname, GetDamageForce, GetDamagePosition, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetHandleEntity, GetInflictor, GetInstance, GetInt, GetOwnerEntity, GetSerialNumber, GrowMemory, IndexToIdentity, Init, IsValid, Length, LengthSqr, LookupEntity, NextEntity, Purge, Purge_FixedGrowable, Ray_t, RemoveAll, RnCollisionAttr_t, Set, SetDamage, SetDamageForce, SetDamagePosition, SetRadius, Square<float>, String, ToBaseCombatCharacter, ToBasePlayer, TraceRay, UTIL_PointContents, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=, operator==, operator[], ~CEntitySphereQuery, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGameTrace::Init, CGamePhysicsQueryInterface::GetPointContents, CEntitySphereQuery::CEntitySphereQuery, CEntitySphereQuery::GetCurrentEntity, CBaseEntity::GetDamageOptions, CEntityHandle::operator CEntityInstance*, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CTakeDamageInfo::CTakeDamageInfo, VectorNormalize, CBaseEntity::TakeDamage, CBaseEntity::TraceAttackToTriggers (29 total)
// strings: "weapon_smg1"
// globals: gamestats, CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CGameRules::RadiusDamage(
        CGameRules *const this,
        const CTakeDamageInfo *const info,
        const Vector *const vecSrcIn,
        float flRadius,
        int iClassIgnore,
        CBaseEntity *pEntityIgnore,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pvecDamagedEntities)
{
  uint64 v10; // r15
  float v11; // xmm1_4
  CBaseEntity *CurrentEntity; // rax
  CBaseEntity *v13; // rbx
  double v14; // xmm0_8
  vec_t v15; // xmm1_4
  const CBaseEntity *v16; // rsi
  float m_fValue; // xmm3_4
  uint32 v18; // eax
  float v19; // xmm7_4
  CEntityInstance *v20; // rax
  float v21; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  int v23; // edx
  __int16 v24; // cx
  int m_Size; // eax
  vec_t *p_m_Index; // rax
  CEntityInstance *v27; // rax
  const CBaseCombatCharacter *v28; // rbx
  CBaseCombatWeapon *ActiveWeapon; // rax
  void (__fastcall *v30)(CBaseGameStats *, const CBaseCombatCharacter *, bool, const char *, const CTakeDamageInfo *const); // rbx
  CEntityIdentity *v31; // rax
  const char *m_pAsString; // rcx
  unsigned __int16 v33; // dx
  int v34; // esi
  uint32 v35; // eax
  CEntityIdentity *v36; // rcx
  CEntityIdentity *v37; // rdx
  const CBaseEntity *v38; // rax
  IPhysicsObject *Object; // rax
  double v40; // xmm0_8
  const CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // esi
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v44; // rdx
  CEntityIdentity *v45; // rax
  ConVar *m_pParent; // rax
  const CBaseEntity *v47; // rax
  float falloff; // [rsp+1Ch] [rbp-1274h]
  EHANDLE *p_m_hInflictor; // [rsp+30h] [rbp-1260h]
  float bIsPrimaryc; // [rsp+48h] [rbp-1248h]
  float bIsPrimary; // [rsp+48h] [rbp-1248h]
  int bIsPrimarya; // [rsp+48h] [rbp-1248h]
  bool bIsPrimaryb; // [rsp+48h] [rbp-1248h]
  float pBlockingEntityd; // [rsp+50h] [rbp-1240h]
  float pBlockingEntity; // [rsp+50h] [rbp-1240h]
  EHANDLE *pBlockingEntitya; // [rsp+50h] [rbp-1240h]
  const CBaseCombatCharacter *pBlockingEntityb; // [rsp+50h] [rbp-1240h]
  const CBaseEntity *pBlockingEntityc; // [rsp+50h] [rbp-1240h]
  float inputInfo; // [rsp+58h] [rbp-1238h]
  Vector vecSpot; // [rsp+70h] [rbp-1220h] BYREF
  Vector vecSrc; // [rsp+80h] [rbp-1210h] BYREF
  Vector vecToTarget; // [rsp+90h] [rbp-1200h] BYREF
  Vector vecUp; // [rsp+A0h] [rbp-11F0h] BYREF
  __int128 vecDeflect; // [rsp+B0h] [rbp-11E0h] OVERLAPPED BYREF
  CTakeDamageInfo adjustedInfo; // [rsp+F0h] [rbp-11A0h] BYREF
  trace_t tr; // [rsp+180h] [rbp-1110h] BYREF
  CEntitySphereQuery sphere; // [rsp+230h] [rbp-1060h] BYREF
  unsigned __int64 v72; // [rsp+1258h] [rbp-38h]

  v72 = __readfsqword(0x28u);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  vecSrc = *vecSrcIn;
  if ( flRadius == 0.0 )
    falloff = 1.0;
  else
    falloff = info->m_flDamage / flRadius;
  v10 = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &vecSrc, 0x1C000u) & 0x1C000;
  vecSrc.z = vecSrc.z + 1.0;
  CEntitySphereQuery::CEntitySphereQuery(&sphere, &vecSrc, flRadius, v11);
  while ( 1 )
  {
    CurrentEntity = CEntitySphereQuery::GetCurrentEntity(&sphere);
    v13 = CurrentEntity;
    if ( CurrentEntity == 0 )
      break;
    if ( CurrentEntity == pEntityIgnore || CBaseEntity::GetDamageOptions(CurrentEntity) == DamageOptions_t::DAMAGE_NO )
      goto LABEL_12;
    if ( iClassIgnore != 0 )
    {
      if ( (*(v13->_vptr_IHandleEntity + 47))(v13) == iClassIgnore )
        goto LABEL_12;
      if ( v10 == 0 )
        goto LABEL_9;
LABEL_16:
      if ( v13->m_nWaterLevel.m_Value != 0 )
        goto LABEL_10;
      ++sphere.m_listIndex;
    }
    else
    {
      if ( v10 != 0 )
        goto LABEL_16;
LABEL_9:
      if ( v13->m_nWaterLevel.m_Value == 3 )
        goto LABEL_12;
LABEL_10:
      v14 = (*(v13->_vptr_IHandleEntity + 169))(v13, &vecSrc, 0);
      vecUp.z = v15;
      *&vecUp.x = v14;
      vecSpot.z = v15;
      inputInfo = v15;
      *&vecSpot.x = v14;
      bIsPrimaryc = *&v14;
      pBlockingEntityd = *(&v14 + 1);
      p_m_hInflictor = &info->m_hInflictor;
      v16 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
      m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      adjustedInfo.m_vecDamageForce.z = bIsPrimaryc - vecSrc.x;
      adjustedInfo.m_vecDamageForce.y = 0.0;
      *&adjustedInfo.m_hWeapon.m_Index = m_fValue;
      adjustedInfo.m_vecDamagePosition.x = pBlockingEntityd - vecSrc.y;
      memset(&adjustedInfo.m_vecDamagePosition.z, 0, 36);
      adjustedInfo.m_vecDamagePosition.y = inputInfo - vecSrc.z;
      LOBYTE(adjustedInfo.m_flDamage) = 1;
      *&adjustedInfo._vptr_CTakeDamageInfo = vecSrc;
      BYTE1(adjustedInfo.m_flDamage) = (((adjustedInfo.m_vecDamageForce.z * adjustedInfo.m_vecDamageForce.z)
                                       + (adjustedInfo.m_vecDamagePosition.x * adjustedInfo.m_vecDamagePosition.x))
                                      + (adjustedInfo.m_vecDamagePosition.y * adjustedInfo.m_vecDamagePosition.y)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&vecDeflect, v16, 4, 0);
      *(&vecDeflect + 1) |= 0x185001uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &adjustedInfo, &vecDeflect, &tr);
      if ( old_radius_damage.m_pParent->m_Value.m_nValue != 0 )
      {
        if ( tr.fraction == 1.0 || v13 == tr.m_pEnt )
          goto LABEL_25;
        goto LABEL_12;
      }
      if ( tr.fraction == 1.0 )
        goto LABEL_25;
      if ( IsExplosionTraceBlocked(&tr, v13) )
      {
        if ( (*(this->_vptr_CGameRules + 72))(this, v13) == 0
          || ((((vecSpot.x - vecSrc.x) * (vecSpot.x - vecSrc.x)) + ((vecSpot.y - vecSrc.y) * (vecSpot.y - vecSrc.y)))
            + ((vecSpot.z - vecSrc.z) * (vecSpot.z - vecSrc.z))) > ((0.5 * flRadius) * (0.5 * flRadius)) )
        {
          goto LABEL_12;
        }
        vecToTarget.y = vecSpot.y - tr.endpos.y;
        vecToTarget.z = vecSpot.z - tr.endpos.z;
        vecToTarget.x = vecSpot.x - tr.endpos.x;
        VectorNormalize(&vecToTarget);
        CrossProduct(&vecToTarget, &tr.plane.normal, &vecUp);
        CrossProduct(&tr.plane.normal, &vecUp, &vecDeflect);
        VectorNormalize(&vecDeflect);
        m_pInstance = 0;
        m_Index = info->m_hInflictor.m_Index;
        if ( m_Index + 2 > 1 )
        {
          m_Index_low = LOWORD(info->m_hInflictor.m_Index);
          v44 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
          if ( v44 != 0 )
          {
            v45 = &v44[m_Index_low & 0x1FF];
            if ( v45 != 0 && m_Index == v45->m_EHandle.m_Index )
              m_pInstance = v45->m_pInstance;
          }
        }
        m_pParent = phys_traceline_radius.m_pParent;
        *(&adjustedInfo._vptr_CTakeDamageInfo + 1) = (16.0 * *(&vecDeflect + 1)) + tr.endpos.y;
        adjustedInfo.m_vecDamageForce.x = (16.0 * *(&vecDeflect + 2)) + tr.endpos.z;
        *&adjustedInfo._vptr_CTakeDamageInfo = (16.0 * *&vecDeflect) + tr.endpos.x;
        UTIL_TraceSphere(&tr.endpos, &adjustedInfo, m_pParent->m_Value.m_fValue, 0x185001u, m_pInstance, 4, &tr);
        v47 = CEntityHandle::operator CEntityInstance *(p_m_hInflictor);
        UTIL_TraceSphere(
          &tr.endpos,
          &vecSpot,
          phys_traceline_radius.m_pParent->m_Value.m_fValue,
          0x185001u,
          v47,
          4,
          &tr);
        if ( tr.fraction != 1.0 && tr.m_ShapeAttributes.m_nEntityId == 0x8000 )
          goto LABEL_12;
      }
      pBlockingEntityc = tr.m_pEnt;
      if ( tr.m_pEnt == 0
        || v13 == tr.m_pEnt
        || (tr.m_pEnt->m_hOwnerEntity.m_Value.m_Index == -1
          ? (v33 = 0x7FFF, v34 = 0x7FFF)
          : (v33 = tr.m_pEnt->m_hOwnerEntity.m_Value.m_Index & 0x7FFF, v34 = v33),
            (v35 = (tr.m_pEnt->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v33 & 0x7FFF,
             LODWORD(adjustedInfo._vptr_CTakeDamageInfo) = v35,
             v35 + 2 > 1)
         && (v36 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v34 >> 9]) != 0
         && (v37 = &v36[v34 & 0x1FF]) != 0
         && v35 == v37->m_EHandle.m_Index
         && v13 == v37->m_pInstance) )
      {
LABEL_25:
        bIsPrimary = 0.0;
        goto LABEL_26;
      }
      v38 = CEntityHandle::operator CEntityInstance *(p_m_hInflictor);
      UTIL_TraceSphere(&vecSrc, &vecSpot, phys_traceline_radius.m_pParent->m_Value.m_fValue, 1u, v38, 4, &tr);
      if ( tr.fraction == 1.0 )
      {
        if ( CBaseEntity::VPhysicsGetObject(pBlockingEntityc) != 0 )
        {
          Object = CBaseEntity::VPhysicsGetObject(pBlockingEntityc);
          v40 = (*(*Object + 208LL))(Object);
          bIsPrimary = *&v40 / 350.0;
          if ( (*&v40 / 350.0) >= 1.0 )
            goto LABEL_12;
        }
        else
        {
          bIsPrimary = 0.25;
        }
LABEL_26:
        pBlockingEntity = info->m_flDamage
                        - (fsqrt(
                             (((vecSrc.x - tr.endpos.x) * (vecSrc.x - tr.endpos.x))
                            + ((vecSrc.y - tr.endpos.y) * (vecSrc.y - tr.endpos.y)))
                           + ((vecSrc.z - tr.endpos.z) * (vecSrc.z - tr.endpos.z)))
                         * falloff);
        if ( pBlockingEntity <= 0.0 )
          goto LABEL_12;
        if ( tr.startsolid )
        {
          tr.endpos = vecSrc;
          tr.fraction = 0.0;
        }
        CTakeDamageInfo::CTakeDamageInfo(&adjustedInfo, info);
        adjustedInfo.m_flRadius = flRadius;
        v19 = pBlockingEntity - (bIsPrimary * pBlockingEntity);
        pBlockingEntitya = &info->m_hAttacker;
        adjustedInfo.m_flDamage = v19;
        v20 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
        if ( v20 != 0 && (*(v20->_vptr_IHandleEntity + 140))(v20) != 0 && v13->m_bIsNPC )
          CTakeDamageInfo::AdjustPlayerDamageInflictedForSkillLevel(&adjustedInfo);
        *(&vecDeflect + 1) = vecSpot.y - vecSrc.y;
        *(&vecDeflect + 2) = vecSpot.z - vecSrc.z;
        *&vecDeflect = vecSpot.x - vecSrc.x;
        VectorNormalize(&vecDeflect);
        if ( vec3_origin.x == adjustedInfo.m_vecDamagePosition.x
          && adjustedInfo.m_vecDamagePosition.y == vec3_origin.y
          && adjustedInfo.m_vecDamagePosition.z == vec3_origin.z
          || vec3_origin.x == adjustedInfo.m_vecDamageForce.x
          && adjustedInfo.m_vecDamageForce.y == vec3_origin.y
          && adjustedInfo.m_vecDamageForce.z == vec3_origin.z )
        {
          if ( (adjustedInfo.m_bitsDamageType & 0x800) == 0 )
            CalculateExplosiveDamageForce(&adjustedInfo, &vecDeflect, &vecSrc, 1.0);
        }
        else
        {
          v21 = fsqrt(
                  ((adjustedInfo.m_vecDamageForce.x * adjustedInfo.m_vecDamageForce.x)
                 + (adjustedInfo.m_vecDamageForce.y * adjustedInfo.m_vecDamageForce.y))
                + (adjustedInfo.m_vecDamageForce.z * adjustedInfo.m_vecDamageForce.z))
              * falloff;
          adjustedInfo.m_vecDamageForce.z = *(&vecDeflect + 2) * v21;
          adjustedInfo.m_vecDamageForce.y = *(&vecDeflect + 1) * v21;
          adjustedInfo.m_vecDamagePosition = vecSrc;
          adjustedInfo.m_vecDamageForce.x = v21 * *&vecDeflect;
        }
        if ( tr.fraction != 1.0 && v13 == tr.m_pEnt )
        {
          ClearMultiDamage();
          CBaseEntity::DispatchTraceAttack(v13, &adjustedInfo, &vecDeflect, &tr);
          ApplyMultiDamage();
        }
        else
        {
          CBaseEntity::TakeDamage(v13, &adjustedInfo);
        }
        if ( pvecDamagedEntities != 0 )
        {
          vecUp.x = NAN;
          m_pEntity = v13->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v24 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(vecUp.x) = v24 | LOWORD(vecUp.x) & 0x8000;
            LODWORD(vecUp.x) = (v23 << 15) | LOWORD(vecUp.x) & 0x7FFF;
          }
          m_Size = pvecDamagedEntities->m_Size;
          bIsPrimarya = pvecDamagedEntities->m_Size;
          if ( pvecDamagedEntities->m_Size == pvecDamagedEntities->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&pvecDamagedEntities->m_Memory, 1);
            m_Size = pvecDamagedEntities->m_Size;
          }
          pvecDamagedEntities->m_Size = m_Size + 1;
          p_m_Index = &pvecDamagedEntities->m_Memory.m_pMemory[bIsPrimarya].m_Index;
          if ( p_m_Index != 0 )
            *p_m_Index = vecUp.x;
        }
        CBaseEntity::TraceAttackToTriggers(v13, &adjustedInfo, &vecSrc, &tr.endpos, &vecDeflect);
        v27 = CEntityHandle::operator CEntityInstance *(pBlockingEntitya);
        if ( v27 != 0
          && (*(v27->_vptr_IHandleEntity + 140))(v27) != 0
          && tr.m_pEnt != 0
          && (*(tr.m_pEnt->_vptr_IHandleEntity + 147))(tr.m_pEnt) != 0 )
        {
          v28 = CEntityHandle::operator CEntityInstance *(pBlockingEntitya);
          if ( v28 != 0 )
          {
            if ( (*(v28->_vptr_IHandleEntity + 140))(v28) == 0 )
              v28 = 0;
            pBlockingEntityb = v28;
            ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(v28);
          }
          else
          {
            pBlockingEntityb = 0;
            ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(0);
          }
          if ( ActiveWeapon != 0 )
          {
            bIsPrimaryb = !CEntityIdentity::ClassMatches(ActiveWeapon->m_pEntity, "weapon_smg1");
            v30 = *(gamestats->_vptr_CBaseGameStats + 30);
            v31 = CBaseCombatCharacter::GetActiveWeapon(pBlockingEntityb)->m_pEntity;
            m_pAsString = "";
            if ( v31->m_designerName.u.m_Id != 0 )
              m_pAsString = v31->m_designerName.u.m_pAsString;
            v30(gamestats, pBlockingEntityb, bIsPrimaryb, m_pAsString, info);
          }
          else
          {
            (*(gamestats->_vptr_CBaseGameStats + 30))(gamestats, pBlockingEntityb, 1, "NULL", info);
          }
        }
        CTakeDamageInfo::~CTakeDamageInfo(&adjustedInfo);
        ++sphere.m_listIndex;
      }
      else
      {
LABEL_12:
        ++sphere.m_listIndex;
      }
    }
  }
  sphere.m_results.m_list.m_Size = 0;
  v18 = sphere.m_results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( sphere.m_results.m_list.m_Memory.m_nAllocationCount < 0
    || sphere.m_results.m_list.m_Memory.m_pMemory == &sphere.m_results.m_list.m_Memory.m_FixedMemory )
  {
    if ( v18 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&sphere.m_results.m_list.m_Memory);
  }
  else if ( sphere.m_results.m_list.m_Memory.m_pMemory != 0 && v18 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CGameRules::ClientCommand  (line 799, @0x0000000002257000, libserver.so)
// calls: GetVoiceGameMgr, CVoiceGameMgr::ClientCommand
// callers: CMultiplayRules::ClientCommand
bool __fastcall CGameRules::ClientCommand(CGameRules *const this, CBaseEntity *pEdict, const CCommand *const args)
{
  CVoiceGameMgr *VoiceGameMgr; // rax

  if ( (*(pEdict->_vptr_IHandleEntity + 140))(pEdict) == 0 )
    return 0;
  VoiceGameMgr = GetVoiceGameMgr();
  return CVoiceGameMgr::ClientCommand(VoiceGameMgr, pEdict, args);
}


// CGameRules::FrameUpdatePostEntityThink  (line 811, @0x00000000022621d0, libserver.so)
void __fastcall CGameRules::FrameUpdatePostEntityThink(
        CGameRules *const this,
        const EventServerPostEntityThink_t *const msg)
{
  (*(this->_vptr_CGameRules + 50))(this, msg);
}


// CGameRules::Think  (line 817, @0x00000000022621f0, libserver.so)
// calls: GetVoiceGameMgr, CVoiceGameMgr::Update
// callers: CMultiplayRules::Think, CSingleplayRules::Think
void __fastcall CGameRules::Think(CGameRules *const this)
{
  CVoiceGameMgr *VoiceGameMgr; // rax
  double v2; // xmm1_8

  VoiceGameMgr = GetVoiceGameMgr();
  CVoiceGameMgr::Update(VoiceGameMgr, v2);
}


// CGameRules::EndGameFrame  (line 830, @0x0000000002259f90, libserver.so)  // inlines: Get, GetAttacker, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, GetTarget, IndexToIdentity, IsClear, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityIdentity::GetDebugName, Warning, ApplyMultiDamage
// strings: "Unapplied multidamage left in the system:\nTarget: %s\nInflictor: %s\nAttacker: %s\nDamag
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGameRules::EndGameFrame(CGameRules *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  uint32 v4; // eax
  CEntityInstance *m_pInstance; // rsi
  double m_flDamage; // r14
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const char *DebugName; // rax
  uint32 v10; // edx
  CEntityInstance *v11; // rcx
  const char *v12; // r12
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  const char *v15; // rax
  uint32 v16; // esi
  CEntityInstance *v17; // rdx
  const char *v18; // r13
  CEntityIdentity *v19; // rax
  CEntityIdentity *v20; // rax
  const char *v21; // rax

  m_Index = g_MultiDamage.m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_MultiDamage.m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[g_MultiDamage.m_hTarget.m_Index & 0x1FF];
      if ( v3 != 0 && m_Index == v3->m_EHandle.m_Index && v3->m_pInstance != 0 )
      {
        v4 = g_MultiDamage.m_hAttacker.m_Index;
        m_pInstance = 0;
        m_flDamage = g_MultiDamage.m_flDamage;
        if ( v4 + 2 > 1 )
        {
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_MultiDamage.m_hAttacker.m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[g_MultiDamage.m_hAttacker.m_Index & 0x1FF];
            if ( v8 != 0 && v4 == v8->m_EHandle.m_Index )
              m_pInstance = v8->m_pInstance;
          }
        }
        DebugName = CEntityIdentity::GetDebugName(m_pInstance->m_pEntity);
        v10 = g_MultiDamage.m_hInflictor.m_Index;
        v11 = 0;
        v12 = DebugName;
        if ( v10 + 2 > 1 )
        {
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_MultiDamage.m_hInflictor.m_Index) >> 9)
                                                               & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[g_MultiDamage.m_hInflictor.m_Index & 0x1FF];
            if ( v14 != 0 && v10 == v14->m_EHandle.m_Index )
              v11 = v14->m_pInstance;
          }
        }
        v15 = CEntityIdentity::GetDebugName(v11->m_pEntity);
        v16 = g_MultiDamage.m_hTarget.m_Index;
        v17 = 0;
        v18 = v15;
        if ( v16 + 2 > 1 )
        {
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_MultiDamage.m_hTarget.m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[g_MultiDamage.m_hTarget.m_Index & 0x1FF];
            if ( v20 != 0 && v16 == v20->m_EHandle.m_Index )
              v17 = v20->m_pInstance;
          }
        }
        v21 = CEntityIdentity::GetDebugName(v17->m_pEntity);
        Warning(
          "Unapplied multidamage left in the system:\nTarget: %s\nInflictor: %s\nAttacker: %s\nDamage: %.2f\n",
          v21,
          v18,
          v12,
          m_flDamage);
        ApplyMultiDamage();
      }
    }
  }
}


// CGameRules::WeaponTraceEntity  (line 849, @0x0000000002255f50, libserver.so)
// calls: UTIL_TraceEntity
void __fastcall CGameRules::WeaponTraceEntity(
        CGameRules *const this,
        CBaseEntity *pEntity,
        const Vector *const vecStart,
        const Vector *const vecEnd,
        uint64 mask,
        trace_t *ptr)
{
  UTIL_TraceEntity(pEntity, vecStart, vecEnd, mask, ptr);
}


// CGameRules::CreateStandardEntities  (line 855, @0x0000000002253f80, libserver.so)
void __fastcall CGameRules::CreateStandardEntities(CGameRules *const this)
{
  ;
}


// CGameRules::DestroyStandardEntities  (line 862, @0x0000000002253f90, libserver.so)
void __fastcall CGameRules::DestroyStandardEntities(CGameRules *const this)
{
  ;
}


// CGameRules::MarkAchievement  (line 875, @0x0000000002253fa0, libserver.so)
// globals: gamestats
void __fastcall CGameRules::MarkAchievement(
        CGameRules *const this,
        IRecipientFilter *const filter,
        const char *pchAchievementName)
{
  __int64 v4; // rax

  (*(gamestats->_vptr_CBaseGameStats + 36))(gamestats, &vec3_origin, 1.0);
  v4 = (*(*engine + 648LL))(engine);
  if ( v4 != 0 )
    (*(*v4 + 56LL))(v4, pchAchievementName, 0);
}


// CGameRules::DoFindClientInPVS  (line 893, @0x0000000002255f70, libserver.so)
// calls: UTIL_FindClientInPVSGuts
CBaseEntity *__fastcall CGameRules::DoFindClientInPVS(
        CGameRules *const this,
        CBaseEntity *pEdict,
        const vis_info_t *checkpvs)
{
  return UTIL_FindClientInPVSGuts(pEdict, checkpvs);
}


// CGameRules::~CGameRules  (line 905, @0x0000000002256f00, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CGameRules::~CGameRules, CMultiplayRules::~CMultiplayRules, CMultiplayRules::CMultiplayRules, CSingleplayRules::~CSingleplayRules, CTeamplayRules::~CTeamplayRules, CDOTAGamerules::~CDOTAGamerules
// strings: "SV", "%s:  CGameRules::CGameRules destructed\n"
// globals: g_pGameRules
void __fastcall CGameRules::~CGameRules(CGameRules *const this)
{
  this->_vptr_CGameRules = off_404FD70;  // vptr: CGameRules
  g_pGameRules = 0;
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    LoggingSystem_Log(LOG_SERVER, 1, "%s:  CGameRules::CGameRules destructed\n", "SV");
}


// CGameRules::~CGameRules  (line 905, @0x0000000002256f70, libserver.so)
// calls: CGameRules::~CGameRules, operator delete
void __fastcall CGameRules::~CGameRules(CGameRules *const this)
{
  CGameRules::~CGameRules(this);
  operator delete(this);
}


// CGameRules::Init  (line 913, @0x0000000002254010, libserver.so)
// callers: CMultiplayRules::Init
bool __fastcall CGameRules::Init(CGameRules *const this)
{
  (*(this->_vptr_CGameRules + 49))(this, 1);
  return 1;
}


// CGameRules::SwitchToNextBestWeapon  (line 922, @0x0000000002254030, libserver.so)
bool __fastcall CGameRules::SwitchToNextBestWeapon(
        CGameRules *const this,
        CBaseCombatCharacter *pPlayer,
        CBaseCombatWeapon *pCurrentWeapon)
{
  return 0;
}


// CGameRules::GetNextBestWeapon  (line 927, @0x0000000002254040, libserver.so)
CBaseCombatWeapon *__fastcall CGameRules::GetNextBestWeapon(
        CGameRules *const this,
        CBaseCombatCharacter *pPlayer,
        CBaseCombatWeapon *pCurrentWeapon)
{
  return 0;
}


// CGameRules::ShouldCollide  (line 932, @0x0000000002262230, libserver.so)
// calls: ShouldGroupsCollide
// callers: FilterSimpleShouldHitEntity, CPushBlockerEnum::ShouldHitEntity, CTraceFilterDoor::ShouldHitEntity, CDOTAGamerules::ShouldCollide
bool __fastcall CGameRules::ShouldCollide(const CGameRules *const this, int nCollisionGroup0, int nCollisionGroup1)
{
  return ShouldGroupsCollide(nCollisionGroup0, nCollisionGroup1);
}


// CGameRules::InitializeGameSpecificCollisionGroups  (line 938, @0x0000000002254050, libserver.so)
void __fastcall CGameRules::InitializeGameSpecificCollisionGroups(
        CGameRules *const this,
        IPhysIntersectionController *pIntersections)
{
  ;
}


// CGameRules::GetViewVectors  (line 943, @0x0000000002254060, libserver.so)
// globals: g_DefaultViewVectors
const CViewVectors *__fastcall CGameRules::GetViewVectors(const CGameRules *const this)
{
  return &g_DefaultViewVectors;
}


// CGameRules::GetPlayerForActivator  (line 948, @0x0000000002254610, libserver.so)
// calls: __dynamic_cast
CBasePlayer *__fastcall CGameRules::GetPlayerForActivator(CGameRules *const this, CBaseEntity *pActivator)
{
  if ( pActivator != 0 )
    return __dynamic_cast(pActivator, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0);
  else
    return 0;
}


// CGameRules::CanUnloadSpawnGroup  (line 950, @0x0000000002255f80, libserver.so)
// calls: CSpawnGroupMgrGameSystem::GetActiveSpawnGroupHandle
bool __fastcall CGameRules::CanUnloadSpawnGroup(CGameRules *const this, SpawnGroupHandle_t handle)
{
  return CSpawnGroupMgrGameSystem::GetActiveSpawnGroupHandle(g_pSpawnGroupMgr) != handle;
}


// CGameRules::GetAmmoDamage  (line 969, @0x0000000002255fb0, libserver.so)
// calls: GetAmmoDef, CAmmoDef::NPCDamage, CAmmoDef::PlrDamage
float __fastcall CGameRules::GetAmmoDamage(
        CGameRules *const this,
        CBaseEntity *pAttacker,
        CBaseEntity *pVictim,
        int nAmmoType)
{
  CAmmoDef *AmmoDef; // r12

  AmmoDef = GetAmmoDef();
  if ( (*(pAttacker->_vptr_IHandleEntity + 140))(pAttacker) != 0 )
    return CAmmoDef::PlrDamage(AmmoDef, nAmmoType);
  else
    return CAmmoDef::NPCDamage(AmmoDef, nAmmoType);
}


// CGameRules::GetChatPrefix  (line 987, @0x00000000022571f0, libserver.so)  // inlines: ToDOTAPlayer
// calls: CDOTAPlayer::IsACoach
// strings: "*DEAD*(TEAM)", "*DEAD*"
const char *__fastcall CGameRules::GetChatPrefix(CGameRules *const this, bool bTeamOnly, CBasePlayer *pPlayer)
{
  char v5; // al
  CDOTAPlayer *v6; // rdi
  bool IsACoach; // dl
  const char *result; // rax

  if ( pPlayer == 0 || (*(pPlayer->_vptr_IHandleEntity + 139))(pPlayer) != 0 )
    return "";
  v5 = (*(pPlayer->_vptr_IHandleEntity + 140))(pPlayer);
  v6 = 0;
  if ( v5 != 0 )
    v6 = pPlayer;
  IsACoach = CDOTAPlayer::IsACoach(v6);
  result = "";
  if ( !IsACoach )
  {
    result = "*DEAD*(TEAM)";
    if ( !bTeamOnly )
      return "*DEAD*";
  }
  return result;
}


// CGameRules::ClientSettingsChanged  (line 1005, @0x0000000002279c30, libserver.so)  // inlines: CreateEvent, GetUserID, _M_data, _V_strcmp, atoi, c_str, entindex
// calls: CMsgPlayerInfo::CMsgPlayerInfo, CEntityInstance::GetEntityIndex, strtol, CBasePlayer::SetDefaultFOV, CMsgPlayerInfo::~CMsgPlayerInfo, strcmp, V_snprintf, UTIL_ClientPrintAll, CBasePlayer::SetPlayerName, __stack_chk_fail, _Unwind_Resume
// strings: "fov_desired", "%s changed name to %s\n", "player_changename", "oldname", "newname"
void __fastcall CGameRules::ClientSettingsChanged(CGameRules *const this, CBasePlayer *pPlayer)
{
  unsigned __int8 (__fastcall *v3)(IVEngineServer2 *, _QWORD, _BYTE *); // r14
  CEntityIndex v4; // eax
  const char *v5; // rax
  const char *v6; // r14
  __int64 (__fastcall *v7)(IVEngineServer2 *, _QWORD, const char *); // r14
  CEntityIndex v8; // eax
  const char *v9; // rax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // r15
  CEntityIndex v15; // eax
  __int64 v16; // rdx
  void (__fastcall *v17)(__int64, char *, __int64); // [rsp+0h] [rbp-190h]
  char *s2; // [rsp+8h] [rbp-188h]
  _BYTE v19[24]; // [rsp+10h] [rbp-180h] BYREF
  char **v20; // [rsp+28h] [rbp-168h]
  char text[264]; // [rsp+50h] [rbp-140h] BYREF
  unsigned __int64 v22; // [rsp+158h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  CMsgPlayerInfo::CMsgPlayerInfo(v19);
  v3 = *(*engine + 656LL);
  v4.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
  if ( v3(engine, v4.m_Data, v19) != 0 )
  {
    s2 = *v20;
    v5 = (*(pPlayer->_vptr_IHandleEntity + 106))(pPlayer);
    v6 = v5;
    if ( *v5 != 0 && strcmp(v5, s2) != 0 )
    {
      V_snprintf(text, 256, "%s changed name to %s\n", v6, s2);
      UTIL_ClientPrintAll(3, text, 0, 0, 0, 0);
      v13 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_changename", 0, 0);
      v14 = v13;
      if ( v13 != 0 )
      {
        v17 = *(*v13 + 112LL);
        v15.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
        v16 = (*(*engine + 224LL))(engine, (v15.m_Data - 1));
        v17(v14, "userid", v16);
        (*(*v14 + 136LL))(v14, "oldname", v6);
        (*(*v14 + 136LL))(v14, "newname", s2);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v14, 0);
      }
      CBasePlayer::SetPlayerName(pPlayer, s2);
    }
  }
  v7 = *(*engine + 384LL);
  v8.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
  v9 = v7(engine, v8.m_Data, "fov_desired");
  if ( v9 != 0 )
  {
    v10 = strtol(v9, 0, 10);
    v11 = 1;
    v12 = 90;
    if ( v10 > 0 )
      v11 = v10;
    if ( v11 <= 90 )
      v12 = v11;
    CBasePlayer::SetDefaultFOV(pPlayer, v12);
  }
  CMsgPlayerInfo::~CMsgPlayerInfo(v19);
}


