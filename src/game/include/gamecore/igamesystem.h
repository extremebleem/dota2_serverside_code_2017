// Reconstructed from DWARF by pahole; not original source.

// src/game/include/gamecore/igamesystem.h:117
struct GameSystemGenericEventType_t {
	// sizeof = 1
};

// src/game/include/gamecore/igamesystem.h:123
class IGameSystemEventDispatcher {
	int ()() * * _vptr.IGameSystemEventDispatcher;  // +0x0
	IGameSystemEventDispatcher(IGameSystemEventDispatcher &);
	IGameSystemEventDispatcher(const IGameSystemEventDispatcher &);
	IGameSystemEventDispatcher();
	virtual void RegisterListener(GameSystemEventId_t, IGameSystem *);
	virtual void UnregisterListener(IGameSystem *);

	// vtable[0] RegisterListener
	// vtable[1] UnregisterListener
	// sizeof = 8
};

// src/game/include/gamecore/igamesystem.h:162
class IGameSystem {
	struct FactoryInfo_t {
		bool m_bHasBeenAdded;  // +0x8

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.IGameSystem;  // +0x0
private:

	const char * m_pName;  // +0x8

	static IGameSystemEventDispatcher * sm_pEventDispatcher;
	static bool sm_bHasActivated;
	static bool sm_bIsAllocatingGameSystems;
	static bool sm_bIsDeallocatingGameSystems;
	static bool sm_bGameInitFailed;
	static bool sm_bForwardToHost;
	static CUtlStringMap<IGameSystem::FactoryInfo_t, CUtlSymbolTable> sm_GameSystemFactories;
	static CUtlVector<int, CUtlMemory<int, int> > sm_GameSystemSortIndex;
	IGameSystem(const IGameSystem &);
	bool StaticInit();
	void StaticPostInit();
	void StaticShutdown();
	int GetPriority();
	virtual bool Init();
	virtual void PostInit();
	virtual void Shutdown();
	bool ShouldAutoAdd();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void GamePostInit(const EventGamePostInit_t &);
	virtual void GamePreShutdown(const EventGamePreShutdown_t &);
	virtual void BuildGameSessionManifest(const EventBuildGameSessionManifest_t &);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void ClientFullySignedOn(const EventClientFullySignedOn_t &);
	virtual void ClientDisconnect(const EventDisconnect_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void SpawnGroupPrecache(const EventSpawnGroupPrecache_t &);
	virtual void SpawnGroupUncache(const EventSpawnGroupUncache_t &);
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	virtual void PostDataUpdate(const EventClientPostDataUpdate_t &);
	virtual void PreRender(const EventClientPreRender_t &);
	virtual void ClientPreEntityThink(const EventClientPreEntityThink_t &);
	virtual void Update(const EventClientUpdate_t &);
	virtual void PostRender(const EventClientPostRender_t &);
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void PreClientUpdate(const EventServerPreClientUpdate_t &);
	virtual void OnServerGamePostSimulate(const EventServerGamePostSimulate_t &);
	virtual void OnClientGamePostSimulate(const EventClientGamePostSimulate_t &);
	virtual void FrameBoundary(const EventGameFrameBoundary_t &);
	virtual void OutOfGameFrameBoundary(const EventOutOfGameFrameBoundary_t &);
	virtual void SaveGame(const EventSaveGame_t &);
	virtual void RestoreGame(const EventRestoreGame_t &);
	virtual const char * GetName();
	void ForwardCallsToHost(bool);
	void Add(const char *);
	void Add();
	void LoopDestroyAllSystems();
	bool InitAllSystems();
	void ShutdownAllSystems();
	bool LoopInitAllSystems(const GameSessionConfiguration_t &, ILoopModePrerequisiteRegistry *);
	void LoopShutdownAllSystems();
	bool LoopPostInitAllSystems(const GameSessionConfiguration_t &, ILoopModePrerequisiteRegistry *);
	void LoopPreShutdownAllSystems();
	void LoopActivateAllSystems(const EngineLoopState_t &, bool);
	void LoopDeactivateAllSystems(const EngineLoopState_t &, bool);
	bool IsAllocatingGameSystems();

protected:

	void SetGameSystemGlobalPtrImpl(IGameSystem *);
	virtual void SetGameSystemGlobalPtrs(void *);
	virtual void SetName(const char *);
	virtual bool DoesGameSystemReallocate();
	bool IsDeallocatingGameSystems();
	void GameInitFailed();
	void GameInitDestroyGameSystem();
	IGameSystem();
	virtual ~IGameSystem();

private:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	IGameSystem * CreateGameSystem(const char *, FactoryInfo_t &);
	void DestroyGameSystem();
	bool SortLessFunc(const int &, const int &);
	void DispatchEventInternal(GameSystemEventId_t, GameSystemEventFunc_t, const GameSystemGenericEventType_t &);
	void DispatchOutOfGameEventInternal(GameSystemEventId_t, GameSystemEventFunc_t, const GameSystemGenericEventType_t &);
	void DispatchEventReverseOrderInternal(GameSystemEventId_t, GameSystemEventFunc_t, const GameSystemGenericEventType_t &);
	void GameInitDestroyQueuedGameSystems();
	void DispatchEventReverseOrder<EventGameShutdown_t>(const EventGameShutdown_t &);
	void DispatchEvent<EventGamePostInit_t>(const EventGamePostInit_t &);
	void DispatchEventReverseOrder<EventGamePreShutdown_t>(const EventGamePreShutdown_t &);
	void DispatchEventReverseOrder<EventGameDeactivate_t>(const EventGameDeactivate_t &);
	void DispatchEvent<EventGameActivate_t>(const EventGameActivate_t &);
	void DispatchEvent<EventGameInit_t>(const EventGameInit_t &);

	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[5] GamePostInit
	// vtable[6] GamePreShutdown
	// vtable[7] BuildGameSessionManifest
	// vtable[8] GameActivate
	// vtable[9] ClientFullySignedOn
	// vtable[10] ClientDisconnect
	// vtable[11] GameDeactivate
	// vtable[12] SpawnGroupPrecache
	// vtable[13] SpawnGroupUncache
	// vtable[14] PreSpawnGroupLoad
	// vtable[15] PostSpawnGroupLoad
	// vtable[16] PreSpawnGroupUnload
	// vtable[17] PostSpawnGroupUnload
	// vtable[18] ActiveSpawnGroupChanged
	// vtable[19] PostDataUpdate
	// vtable[20] PreRender
	// vtable[21] ClientPreEntityThink
	// vtable[22] Update
	// vtable[23] PostRender
	// vtable[24] FrameUpdatePreEntityThink
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[26] PreClientUpdate
	// vtable[27] OnServerGamePostSimulate
	// vtable[28] OnClientGamePostSimulate
	// vtable[29] FrameBoundary
	// vtable[30] OutOfGameFrameBoundary
	// vtable[31] SaveGame
	// vtable[32] RestoreGame
	// vtable[33] GetName
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[35] SetName
	// vtable[36] DoesGameSystemReallocate
	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:385
class CAutoGameSystem : public IGameSystem {
public:

	CAutoGameSystem(CAutoGameSystem &);
	CAutoGameSystem(const CAutoGameSystem &);
	bool ShouldAutoAdd();

protected:

	CAutoGameSystem();
	virtual ~CAutoGameSystem();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:397
class CDontUseThisGameSystem : public IGameSystem {
public:

	CDontUseThisGameSystem(CDontUseThisGameSystem &);
	CDontUseThisGameSystem(const CDontUseThisGameSystem &);
	CDontUseThisGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual ~CDontUseThisGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:430
struct EventGameInit_t {
	const GameSessionConfiguration_t * m_pConfig;  // +0x0
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:430
struct EventGameInit_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	const GameSessionConfiguration_t * m_pConfig;  // +0x0
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:438
struct EventGameShutdown_t {
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 1
};

// src/game/include/gamecore/igamesystem.h:443
struct EventGamePostInit_t {
	const GameSessionConfiguration_t * m_pConfig;  // +0x0
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:443
struct EventGamePostInit_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	const GameSessionConfiguration_t * m_pConfig;  // +0x0
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:451
struct EventGamePreShutdown_t {
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 1
};

// src/game/include/gamecore/igamesystem.h:456
struct EventBuildGameSessionManifest_t {
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 8
};

// src/game/include/gamecore/igamesystem.h:456
struct EventBuildGameSessionManifest_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 8
};

// src/game/include/gamecore/igamesystem.h:463
struct EventGameActivate_t {
	const EngineLoopState_t * m_pState;  // +0x0
	bool m_bBackgroundMap;  // +0x8
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:463
struct EventGameActivate_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	const EngineLoopState_t * m_pState;  // +0x0
	bool m_bBackgroundMap;  // +0x8
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:471
struct EventGameDeactivate_t {
	const EngineLoopState_t * m_pState;  // +0x0
	bool m_bBackgroundMap;  // +0x8
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:471
struct EventGameDeactivate_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	const EngineLoopState_t * m_pState;  // +0x0
	bool m_bBackgroundMap;  // +0x8
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:479
struct EventClientFullySignedOn_t {
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 1
};

// src/game/include/gamecore/igamesystem.h:484
struct EventClientDisconnect_t {
	int m_nReason;  // +0x0
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 4
};

// src/game/include/gamecore/igamesystem.h:491
struct EventSaveGame_t {
	const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > * m_pEntityList;  // +0x0
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 8
};

// src/game/include/gamecore/igamesystem.h:491
struct EventSaveGame_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > * m_pEntityList;  // +0x0
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 8
};

// src/game/include/gamecore/igamesystem.h:498
struct EventRestoreGame_t {
	const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > * m_pEntityList;  // +0x0
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 8
};

// src/game/include/gamecore/igamesystem.h:498
struct EventRestoreGame_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > * m_pEntityList;  // +0x0
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 8
};

// src/game/include/gamecore/igamesystem.h:505
struct EventActiveSpawnGroupChanged_t {
	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x0

	SpawnGroupHandle_t m_PreviousHandle;  // +0x10
	EventActiveSpawnGroupChanged_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 24
};

// src/game/include/gamecore/igamesystem.h:505
struct EventActiveSpawnGroupChanged_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x0

	SpawnGroupHandle_t m_PreviousHandle;  // +0x10
	EventActiveSpawnGroupChanged_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	~EventActiveSpawnGroupChanged_t();

	// sizeof = 24
};

// src/game/include/gamecore/igamesystem.h:515
struct EventServerPreEntityThink_t {
	bool m_bFirstTick;  // +0x0
	bool m_bLastTick;  // +0x1
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 2
};

// src/game/include/gamecore/igamesystem.h:515
struct EventServerPreEntityThink_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	bool m_bFirstTick;  // +0x0
	bool m_bLastTick;  // +0x1
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 2
};

// src/game/include/gamecore/igamesystem.h:522
struct EventServerPostEntityThink_t {
	bool m_bFirstTick;  // +0x0
	bool m_bLastTick;  // +0x1
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 2
};

// src/game/include/gamecore/igamesystem.h:522
struct EventServerPostEntityThink_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	bool m_bFirstTick;  // +0x0
	bool m_bLastTick;  // +0x1
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 2
};

// src/game/include/gamecore/igamesystem.h:529
struct EventClientPostDataUpdate_t {
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 1
};

// src/game/include/gamecore/igamesystem.h:534
struct EventClientPreEntityThink_t {
	bool m_bFirstTick;  // +0x0
	bool m_bLastTick;  // +0x1
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 2
};

// src/game/include/gamecore/igamesystem.h:541
struct EventClientUpdate_t {
	float m_flFrameTime;  // +0x0
	bool m_bFirstTick;  // +0x4
	bool m_bLastTick;  // +0x5
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 8
};

// src/game/include/gamecore/igamesystem.h:550
struct EventServerPreClientUpdate_t {
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 1
};

// src/game/include/gamecore/igamesystem.h:556
struct EventSpawnGroupPrecache_t {
	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10
	int m_nEntityCount;  // +0x14
	const EntitySpawnInfo_t * m_pEntitiesToSpawn;  // +0x18
	EventSpawnGroupPrecache_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();

	// sizeof = 56
};

// src/game/include/gamecore/igamesystem.h:556
struct EventSpawnGroupPrecache_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10
	int m_nEntityCount;  // +0x14
	const EntitySpawnInfo_t * m_pEntitiesToSpawn;  // +0x18
	EventSpawnGroupPrecache_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();
	~EventSpawnGroupPrecache_t();

	// sizeof = 56
};

// src/game/include/gamecore/igamesystem.h:578
struct EventSpawnGroupUncache_t {
	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10
	EventSpawnGroupUncache_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();

	// sizeof = 24
};

// src/game/include/gamecore/igamesystem.h:578
struct EventSpawnGroupUncache_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10
	EventSpawnGroupUncache_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();
	~EventSpawnGroupUncache_t();

	// sizeof = 24
};

// src/game/include/gamecore/igamesystem.h:594
struct EventPreSpawnGroupLoad_t {
	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10
	EventPreSpawnGroupLoad_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();

	// sizeof = 24
};

// src/game/include/gamecore/igamesystem.h:594
struct EventPreSpawnGroupLoad_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10
	EventPreSpawnGroupLoad_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();
	~EventPreSpawnGroupLoad_t();

	// sizeof = 24
};

// src/game/include/gamecore/igamesystem.h:610
struct EventPostSpawnGroupLoad_t {
	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10

	EventPostSpawnGroupLoad_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();

	// sizeof = 48
};

// src/game/include/gamecore/igamesystem.h:610
struct EventPostSpawnGroupLoad_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10

	EventPostSpawnGroupLoad_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();
	~EventPostSpawnGroupLoad_t();

	// sizeof = 48
};

// src/game/include/gamecore/igamesystem.h:627
struct EventPreSpawnGroupUnload_t {
	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10

	EventPreSpawnGroupUnload_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();

	// sizeof = 48
};

// src/game/include/gamecore/igamesystem.h:627
struct EventPreSpawnGroupUnload_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10

	EventPreSpawnGroupUnload_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();
	~EventPreSpawnGroupUnload_t();

	// sizeof = 48
};

// src/game/include/gamecore/igamesystem.h:644
struct EventPostSpawnGroupUnload_t {
	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10
	EventPostSpawnGroupUnload_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();

	// sizeof = 24
};

// src/game/include/gamecore/igamesystem.h:644
struct EventPostSpawnGroupUnload_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10
	EventPostSpawnGroupUnload_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();
	bool SpawnGroupHasWorldGeomemtry();
	~EventPostSpawnGroupUnload_t();

	// sizeof = 24
};

// src/game/include/gamecore/igamesystem.h:659
struct EventClientPreRender_t {
	float m_flFrameTime;  // +0x0
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 4
};

// src/game/include/gamecore/igamesystem.h:666
struct EventClientPostRender_t {
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 1
};

// src/game/include/gamecore/igamesystem.h:671
struct EventServerGamePostSimulate_t : public EventServerPostSimulate_t {
public:

	EventServerGamePostSimulate_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 48
};

// src/game/include/gamecore/igamesystem.h:671
struct EventServerGamePostSimulate_t : public EventServerPostSimulate_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

public:

	EventServerGamePostSimulate_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 48
};

// src/game/include/gamecore/igamesystem.h:676
struct EventClientGamePostSimulate_t : public EventClientPostSimulate_t {
public:

	EventClientGamePostSimulate_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 48
};

// src/game/include/gamecore/igamesystem.h:676
struct EventClientGamePostSimulate_t : public EventClientPostSimulate_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

public:

	EventClientGamePostSimulate_t();
	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 48
};

// src/game/include/gamecore/igamesystem.h:681
struct EventGameFrameBoundary_t : public EventFrameBoundary_t {
public:

	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 4
};

// src/game/include/gamecore/igamesystem.h:681
struct EventGameFrameBoundary_t : public EventFrameBoundary_t {
	enum {
		IN_GAME_EVENT = 0x1,
	};

public:

	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 4
};

// src/game/include/gamecore/igamesystem.h:686
struct EventOutOfGameFrameBoundary_t : public EventFrameBoundary_t {
public:

	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 4
};

// src/game/include/gamecore/igamesystem.h:686
struct EventOutOfGameFrameBoundary_t : public EventFrameBoundary_t {
	enum {
		IN_GAME_EVENT = 0,
	};

public:

	GameSystemEventId_t GetVTableIndex();
	GameSystemEventFunc_t GetEventFunc();
	const char * GetDispatchName();

	// sizeof = 4
};

// src/game/include/gamecore/igamesystem.h:709
class IGameSystemFactory {
	int ()() * * _vptr.IGameSystemFactory;  // +0x0
	IGameSystemFactory(IGameSystemFactory &);
	IGameSystemFactory(const IGameSystemFactory &);
	IGameSystemFactory();
	virtual bool Init();
	virtual void PostInit();
	virtual void Shutdown();
	virtual IGameSystem * CreateGameSystem();
	virtual void DestroyGameSystem(IGameSystem *);
	virtual bool ShouldAutoAdd();
	virtual int GetPriority();
	virtual void SetGlobalPtr(void *);
	virtual bool IsReallocating();
	virtual IGameSystem * GetStaticGameSystem();

	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[3] CreateGameSystem
	// vtable[4] DestroyGameSystem
	// vtable[5] ShouldAutoAdd
	// vtable[6] GetPriority
	// vtable[7] SetGlobalPtr
	// vtable[8] IsReallocating
	// vtable[9] GetStaticGameSystem
	// sizeof = 8
};

// src/game/include/gamecore/igamesystem.h:728
class CBaseGameSystemFactory : public IGameSystemFactory {
public:

private:

	static CBaseGameSystemFactory * sm_pFirst;
	const char * m_pName;  // +0x10
	CBaseGameSystemFactory(CBaseGameSystemFactory &);
	CBaseGameSystemFactory(const CBaseGameSystemFactory &);
	CBaseGameSystemFactory(const char *);
	CBaseGameSystemFactory();

	// sizeof = 24
};
