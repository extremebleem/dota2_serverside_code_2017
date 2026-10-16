// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/loopmodegame.cpp:127
class CLoopModeGameToolHooks : public CUtlSlot {
public:

	CLoopModeGameToolHooks();
	~CLoopModeGameToolHooks();
	GameToolEventHandlerResult_t OnToolSpawnEntity(const SpawnEntityToolEvent_t &, SpawnEntityToolEventResult_t *);
	GameToolEventHandlerResult_t OnToolGetEntityInfo(const ToolEvent_GetEntityInfo_t &, ToolEvent_GetEntityInfoResult_t *);
	void OnToolFireEntityInput(const ToolEvent_FireEntityInput_t &);
	GameToolEventHandlerResult_t OnToolGetEntityInputs(const ToolEvent_GetEntityInputs_t &, ToolEvent_GetEntityInputsResult_t *);
	void OnToolDestroyEntity(const DestroyEntityToolEvent_t &);
	void OnToolDestroyAllEntities(const DestroyAllEntitiesToolEvent_t &);
	void OnToolRestartMap(const RestartMapToolEvent_t &);
	GameToolEventHandlerResult_t OnToolTraceRayServer(const TraceRayServerToolEvent_t &, ToolTraceRayResult_t *);

	// sizeof = 56
};

// src/game/shared/loopmodegame.cpp:185
class GameToolEventToolEvent_GetEntityInfo_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:185
class GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal, 0> BaseClass;
	GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem(GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem &);
	GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem(const GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem &);
	GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem *);
	virtual ~GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:186
class GameToolEventToolEvent_GetEntityInfoResult_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:186
class GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal, 0> BaseClass;
	GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem(GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem &);
	GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem(const GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem &);
	GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem *);
	virtual ~GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:187
class GameToolEventToolEvent_GetEntityInputs_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:187
class GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal, 0> BaseClass;
	GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem(GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem &);
	GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem(const GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem &);
	GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem *);
	virtual ~GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:188
class GameToolEventToolEvent_GetEntityInputsResult_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:188
class GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal, 0> BaseClass;
	GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem(GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem &);
	GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem(const GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem &);
	GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem *);
	virtual ~GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:189
class GameToolEventToolEvent_FireEntityInput_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:189
class GameToolEventToolEvent_FireEntityInput_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal, 0> BaseClass;
	GameToolEventToolEvent_FireEntityInput_tHookupGameSystem(GameToolEventToolEvent_FireEntityInput_tHookupGameSystem &);
	GameToolEventToolEvent_FireEntityInput_tHookupGameSystem(const GameToolEventToolEvent_FireEntityInput_tHookupGameSystem &);
	GameToolEventToolEvent_FireEntityInput_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventToolEvent_FireEntityInput_tHookupGameSystem *);
	virtual ~GameToolEventToolEvent_FireEntityInput_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:190
class GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:190
class GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal, 0> BaseClass;
	GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem(GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem &);
	GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem(const GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem &);
	GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem *);
	virtual ~GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:191
class GameToolEventSpawnEntityToolEvent_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:191
class GameToolEventSpawnEntityToolEvent_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal, 0> BaseClass;
	GameToolEventSpawnEntityToolEvent_tHookupGameSystem(GameToolEventSpawnEntityToolEvent_tHookupGameSystem &);
	GameToolEventSpawnEntityToolEvent_tHookupGameSystem(const GameToolEventSpawnEntityToolEvent_tHookupGameSystem &);
	GameToolEventSpawnEntityToolEvent_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventSpawnEntityToolEvent_tHookupGameSystem *);
	virtual ~GameToolEventSpawnEntityToolEvent_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:192
class GameToolEventDestroyEntityToolEvent_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:192
class GameToolEventDestroyEntityToolEvent_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal, 0> BaseClass;
	GameToolEventDestroyEntityToolEvent_tHookupGameSystem(GameToolEventDestroyEntityToolEvent_tHookupGameSystem &);
	GameToolEventDestroyEntityToolEvent_tHookupGameSystem(const GameToolEventDestroyEntityToolEvent_tHookupGameSystem &);
	GameToolEventDestroyEntityToolEvent_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventDestroyEntityToolEvent_tHookupGameSystem *);
	virtual ~GameToolEventDestroyEntityToolEvent_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:193
class GameToolEventRestartMapToolEvent_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:193
class GameToolEventRestartMapToolEvent_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal, 0> BaseClass;
	GameToolEventRestartMapToolEvent_tHookupGameSystem(GameToolEventRestartMapToolEvent_tHookupGameSystem &);
	GameToolEventRestartMapToolEvent_tHookupGameSystem(const GameToolEventRestartMapToolEvent_tHookupGameSystem &);
	GameToolEventRestartMapToolEvent_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventRestartMapToolEvent_tHookupGameSystem *);
	virtual ~GameToolEventRestartMapToolEvent_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:194
class GameToolEventDestroyAllEntitiesToolEvent_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:194
class GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal, 0> BaseClass;
	GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem(GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem &);
	GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem(const GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem &);
	GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem *);
	virtual ~GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:195
class GameToolEventTraceRayServerToolEvent_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:195
class GameToolEventTraceRayServerToolEvent_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal, 0> BaseClass;
	GameToolEventTraceRayServerToolEvent_tHookupGameSystem(GameToolEventTraceRayServerToolEvent_tHookupGameSystem &);
	GameToolEventTraceRayServerToolEvent_tHookupGameSystem(const GameToolEventTraceRayServerToolEvent_tHookupGameSystem &);
	GameToolEventTraceRayServerToolEvent_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventTraceRayServerToolEvent_tHookupGameSystem *);
	virtual ~GameToolEventTraceRayServerToolEvent_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:196
class GameToolEventToolTraceRayResult_tInternal {
	// sizeof = 1
};

// src/game/shared/loopmodegame.cpp:196
class GameToolEventToolTraceRayResult_tHookupGameSystem : public CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal, 0> {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal, 0> BaseClass;
	GameToolEventToolTraceRayResult_tHookupGameSystem(GameToolEventToolTraceRayResult_tHookupGameSystem &);
	GameToolEventToolTraceRayResult_tHookupGameSystem(const GameToolEventToolTraceRayResult_tHookupGameSystem &);
	GameToolEventToolTraceRayResult_tHookupGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(GameToolEventToolTraceRayResult_tHookupGameSystem *);
	virtual ~GameToolEventToolTraceRayResult_tHookupGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/loopmodegame.cpp:425
class CLoopModeGame : public CLoopModeBase, public ILoopModeGameSharedState {
	enum GameSystemState_t {
		GAME_SYSTEMS_UNALLOCATED = 0,
		GAME_SYSTEMS_ALLOCATED = 0x1,
		GAME_SYSTEMS_INITIALIZED = 0x2,
		GAME_SYSTEMS_POST_INITIALIZED = 0x3,
	};

	class CCommandMemberInitializer_OnPrintSpawnGroupStatus {
	private:

		CCommandMemberInitializer_OnPrintSpawnGroupStatus();
		~CCommandMemberInitializer_OnPrintSpawnGroupStatus();

		// sizeof = 152
	};

public:

private:

	static IRenderingPipeline * sm_pGameRenderingPipeline;
	static IRenderingPipeline * sm_pPostProcessPipeline;
	bool m_bInMainMenu;  // +0xc4
	bool m_bIsInHeadlessMode;  // +0xc5
	bool m_bLoopSuccessfullyActivated;  // +0xc6
	bool m_bBackgroundMap;  // +0xc7
	bool m_bIsLevelTransition;  // +0xc8

	static bool sm_bFirstMapLoaded;
	SpawnGroupHandle_t m_hStartingActiveSpawnGroup;  // +0x3f0

	CLoopModeGame(const CLoopModeGame &);
	virtual void RegisterEventMap(CEventDispatcher<CEventIDManager_Default> *, EventMapRegistrationType_t);
	bool StaticInit(ILoopType *);
	void StaticShutdown();
	virtual bool LoopInit(KeyValues *, ILoopModePrerequisiteRegistry *);
	virtual void LoopShutdown();
	virtual void OnLoopActivate(const EngineLoopState_t &, CEventDispatcher<CEventIDManager_Default> *);
	virtual void OnLoopDeactivate(const EngineLoopState_t &, CEventDispatcher<CEventIDManager_Default> *);
	virtual InputHandlerResult_t HandleInputEvent(const InputEvent_t &, CSplitScreenSlot);
	virtual RHBackColorBuffer_t AddViewsToSceneSystem(const EngineLoopState_t &, float64, float64, const RenderViewport_t &, const RHBackColorBuffer_t &);
	virtual ISource2WorldSession * GetWorldSession();
	virtual ClientServerMode_t GetClientServerMode();
	virtual bool ReceivedServerInfo(const GameSessionConfiguration_t &, ILoopModePrerequisiteRegistry *);
	virtual bool IsInHeadlessMode();
	virtual void SetFadeColor(Vector4D);
	virtual bool IsBackgroundMap();
	virtual bool IsLevelTransition();
	CLoopModeGame();
	virtual ~CLoopModeGame();
	void OnClientPostSimulate(const EventClientPostSimulate_t &);
	void OnClientPauseSimulate(const EventClientPauseSimulate_t &);
	void OnClientPreSimulate(const EventClientPreSimulate_t &);
	void OnClientPreOutput(const EventClientPreOutput_t &);
	void OnClientPostOutput(const EventClientPostOutput_t &);
	void OnClientSimulate(const EventClientSimulate_t &);
	void OnClientSceneSystemThreadStateChange(const EventClientSceneSystemThreadStateChange_t &);
	void OnServerPostSimulate(const EventServerPostSimulate_t &);
	void OnServerSimulate(const EventServerSimulate_t &);
	void OnPostDataUpdate(const EventPostDataUpdate_t &);
	void OnPreDataUpdate(const EventPreDataUpdate_t &);
	void OnFrameBoundary(const EventFrameBoundary_t &);
	void AddModIndependentGameSystems();
	void SetWorldSession(ISource2WorldSession *);
	void GameInitClient();
	void DisconnectGame(ENetworkDisconnectionReason);
	void OnFirstMapLoaded();
	void OnPrintSpawnGroupStatus(const CCommandContext &, const CCommand &);

	// vtable[4] RegisterEventMap
	// vtable[0] LoopInit
	// vtable[1] LoopShutdown
	// vtable[2] OnLoopActivate
	// vtable[3] OnLoopDeactivate
	// vtable[5] HandleInputEvent
	// vtable[6] AddViewsToSceneSystem
	// vtable[7] GetWorldSession
	// vtable[8] GetClientServerMode
	// vtable[9] ReceivedServerInfo
	// vtable[10] IsInHeadlessMode
	// vtable[11] SetFadeColor
	// vtable[12] IsBackgroundMap
	// vtable[13] IsLevelTransition
	// sizeof = 1072
};

// src/game/shared/loopmodegame.cpp:596
class CMapLoadEntityFilter : public ISpawnGroupEntityFilter {
public:

	CMapLoadEntityFilter(CMapLoadEntityFilter &);
	CMapLoadEntityFilter(const CMapLoadEntityFilter &);
	CMapLoadEntityFilter();
	virtual void FilterSpawnGroupEntities(SpawnGroupHandle_t, bool, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > &);
	virtual ~CMapLoadEntityFilter();

	// vtable[2] FilterSpawnGroupEntities
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IsGameActive  (line 122, @0x00000000020b0ca0, libserver.so)
// callers: CSource2Server::PreWorldUpdate, CSource2Server::GameFrame, CDOTA_ParticleManager::CreateParticleEffectInternal
// globals: s_bInLoopModeGame
bool __cdecl IsGameActive()
{
  return s_bInLoopModeGame;
}


// CLoopModeGameToolHooks::CLoopModeGameToolHooks  (line 145, @0x00000000020b0cb0, libserver.so)  // inlines: CCopyableLock, CNetMessagePB, CRedispatchEventWithReturnValue, CThreadFastMutex, CUtlDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks>, CUtlDelegate<CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t> >, CUtlDelegate<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t> >, CUtlDelegate<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t> >, CUtlDelegate<CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t> >, CUtlMemory, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorMT, Convert<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const SpawnEntityToolEvent_t&, SpawnEntityToolEventResult_t*), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const ToolEvent_GetEntityInfo_t&, ToolEvent_GetEntityInfoResult_t*), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const ToolEvent_GetEntityInputs_t&, ToolEvent_GetEntityInputsResult_t*), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const TraceRayServerToolEvent_t&, ToolTraceRayResult_t*), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const DestroyAllEntitiesToolEvent_t&), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const DestroyEntityToolEvent_t&), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const RestartMapToolEvent_t&), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const ToolEvent_FireEntityInput_t&), void (detail::GenericClass::*)()>, Convert<CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, void (CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>::*)(const SpawnEntityToolEvent_t&), void (detail::GenericClass::*)()>, Convert<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, void (CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>::*)(const ToolEvent_GetEntityInfo_t&), void (detail::GenericClass::*)()>, Convert<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, void (CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>::*)(const ToolEvent_GetEntityInputs_t&), void (detail::GenericClass::*)()>, Convert<CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, void (CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>::*)(const TraceRayServerToolEvent_t&), void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<const SpawnEntityToolEvent_t&, SpawnEntityToolEventResult_t*, GameToolEventHandlerResult_t> >, CopyFrom<FastDelegate2<const ToolEvent_GetEntityInfo_t&, ToolEvent_GetEntityInfoResult_t*, GameToolEventHandlerResult_t> >, CopyFrom<FastDelegate2<const ToolEvent_GetEntityInputs_t&, ToolEvent_GetEntityInputsResult_t*, GameToolEventHandlerResult_t> >, CopyFrom<FastDelegate2<const TraceRayServerToolEvent_t&, ToolTraceRayResult_t*, GameToolEventHandlerResult_t> >, FastDelegate1<CLoopModeGameToolHooks, CLoopModeGameToolHooks>, FastDelegate1<CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t> >, FastDelegate1<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t> >, FastDelegate1<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t> >, FastDelegate1<CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t> >, FastDelegate2<CLoopModeGameToolHooks, CLoopModeGameToolHooks>, FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>, FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>, FindOrCreateGameToolEvent<RestartMapToolEvent_t>, FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>, FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>, FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>, FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>, FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>, FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>, FindOrCreateNetMessage<DestroyEntityToolEvent_t>, FindOrCreateNetMessage<RestartMapToolEvent_t>, FindOrCreateNetMessage<SpawnEntityToolEvent_t>, FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>, FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>, FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>, FindOrCreateNetMessage<TraceRayServerToolEvent_t>, RegisterGameToolEventHandler<DestroyAllEntitiesToolEvent_t>, RegisterGameToolEventHandler<DestroyEntityToolEvent_t>, RegisterGameToolEventHandler<RestartMapToolEvent_t>, RegisterGameToolEventHandler<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, RegisterGameToolEventHandler<SpawnEntityToolEvent_t>, RegisterGameToolEventHandler<ToolEvent_FireEntityInput_t>, RegisterGameToolEventHandler<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, RegisterGameToolEventHandler<ToolEvent_GetEntityInfo_t>, RegisterGameToolEventHandler<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, RegisterGameToolEventHandler<ToolEvent_GetEntityInputs_t>, RegisterGameToolEventHandler<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, RegisterGameToolEventHandler<TraceRayServerToolEvent_t>, SetMementoFrom, SpawnEntityToolEventResult_t, ToolEvent_GetEntityInfoResult_t, ToolEvent_GetEntityInputsResult_t, ToolTraceRayResult_t, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const DestroyAllEntitiesToolEvent_t&, void>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const DestroyEntityToolEvent_t&, void>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const RestartMapToolEvent_t&, void>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const SpawnEntityToolEvent_t&, SpawnEntityToolEventResult_t*, GameToolEventHandlerResult_t>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const ToolEvent_FireEntityInput_t&, void>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const ToolEvent_GetEntityInfo_t&, ToolEvent_GetEntityInfoResult_t*, GameToolEventHandlerResult_t>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const ToolEvent_GetEntityInputs_t&, ToolEvent_GetEntityInputsResult_t*, GameToolEventHandlerResult_t>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const TraceRayServerToolEvent_t&, ToolTraceRayResult_t*, GameToolEventHandlerResult_t>, UtlMakeDelegate<CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, const SpawnEntityToolEvent_t&, void>, UtlMakeDelegate<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, const ToolEvent_GetEntityInfo_t&, void>, UtlMakeDelegate<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, const ToolEvent_GetEntityInputs_t&, void>, UtlMakeDelegate<CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, const TraceRayServerToolEvent_t&, void>, bindmemfunc<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const SpawnEntityToolEvent_t&, SpawnEntityToolEventResult_t*)>, bindmemfunc<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const ToolEvent_GetEntityInfo_t&, ToolEvent_GetEntityInfoResult_t*)>, bindmemfunc<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const ToolEvent_GetEntityInputs_t&, ToolEvent_GetEntityInputsResult_t*)>, bindmemfunc<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const TraceRayServerToolEvent_t&, ToolTraceRayResult_t*)>, bindmemfunc<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const DestroyAllEntitiesToolEvent_t&)>, bindmemfunc<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const DestroyEntityToolEvent_t&)>, bindmemfunc<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const RestartMapToolEvent_t&)>, bindmemfunc<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const ToolEvent_FireEntityInput_t&)>, bindmemfunc<CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, void (CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>::*)(const SpawnEntityToolEvent_t&)>, bindmemfunc<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, void (CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>::*)(const ToolEvent_GetEntityInfo_t&)>, bindmemfunc<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, void (CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>::*)(const ToolEvent_GetEntityInputs_t&)>, bindmemfunc<CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, void (CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>::*)(const TraceRayServerToolEvent_t&)>, operator=
// calls: operator new, SpawnEntityToolEventResult::SpawnEntityToolEventResult, ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult, ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult, ToolTraceRayResult::ToolTraceRayResult, operator delete, CUtlSlot::~CUtlSlot, _Unwind_Resume
// callers: CLoopModeGame::OnLoopActivate
// globals: CLoopModeGameToolHooks::OnToolSpawnEntity(SpawnEntityToolEvent_t const&,SpawnEntityToolEventResult_t *), IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>(bool)::s_hEvent, CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t,SpawnEntityToolEventResult_t>::RedispatchGameToolEvent(SpawnEntityToolEvent_t const&), CLoopModeGameToolHooks::OnToolDestroyEntity(DestroyEntityToolEvent_t const&), IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>(bool)::s_hEvent, CLoopModeGameToolHooks::OnToolDestroyAllEntities(DestroyAllEntitiesToolEvent_t const&), IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>(bool)::s_hEvent, CLoopModeGameToolHooks::OnToolRestartMap(RestartMapToolEvent_t const&) (36 total)
void __fastcall CLoopModeGameToolHooks::CLoopModeGameToolHooks(CLoopModeGameToolHooks *const this)
{
  IToolGameSimulationDispatcher *v2; // r15
  SpawnEntityToolEventResult *v3; // r14
  __int64 v4; // rcx
  IToolGameSimulationDispatcher *v5; // r14
  __int64 v6; // rcx
  IToolGameSimulationDispatcher *v7; // r14
  __int64 v8; // rcx
  IToolGameSimulationDispatcher *v9; // r14
  __int64 v10; // rcx
  IToolGameSimulationDispatcher *v11; // r15
  ToolEvent_GetEntityInfoResult *v12; // r14
  __int64 v13; // rcx
  IToolGameSimulationDispatcher *v14; // r15
  ToolEvent_GetEntityInputsResult *v15; // r14
  __int64 v16; // rcx
  IToolGameSimulationDispatcher *v17; // r15
  __int64 v18; // rcx
  IToolGameSimulationDispatcher *v19; // r15
  ToolTraceRayResult *v20; // r12
  __int64 v21; // rcx
  _QWORD v22[4]; // [rsp+10h] [rbp-B0h] BYREF
  _QWORD v23[4]; // [rsp+30h] [rbp-90h] BYREF
  CLoopModeGameToolHooks *v24; // [rsp+50h] [rbp-70h] BYREF
  void *v25; // [rsp+58h] [rbp-68h]
  __int64 v26; // [rsp+60h] [rbp-60h]
  CLoopModeGameToolHooks *v27; // [rsp+70h] [rbp-50h] BYREF
  void *v28; // [rsp+78h] [rbp-48h]
  __int64 v29; // [rsp+80h] [rbp-40h]

  this->m_ConnectedSignallers.m_Size = 0;
  this->m_ConnectedSignallers.m_Memory.m_pMemory = 0;
  this->m_ConnectedSignallers.m_Memory.m_nAllocationCount = 0;
  this->m_ConnectedSignallers.m_Memory.m_nGrowSize = 0;
  this->m_ConnectedSignallers.m_ownerID = 0;
  v2 = g_pToolGameSimulationDispatcher;
  this->m_ConnectedSignallers.m_depth = 0;
  this->m_ConnectedSignallers.Mutex_t.m_ownerID = 0;
  this->m_ConnectedSignallers.Mutex_t.m_depth = 0;
  if ( v2 != 0 )
  {
    v27 = this;
    v28 = CLoopModeGameToolHooks::OnToolSpawnEntity;
    v29 = 0;
    v3 = operator new(0x38u);
    SpawnEntityToolEventResult::SpawnEntityToolEventResult(v3);
    *(v3 + 4) = this;
    *v3 = off_3FF8830;
    *(v3 + 5) = CLoopModeGameToolHooks::OnToolSpawnEntity;
    *(v3 + 6) = 0;
    (*(*v2 + 120LL))(v2, v3, &v27);
    v4 = IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>(bool)::s_hEvent;
    v22[2] = 0;
    v22[1] = CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t,SpawnEntityToolEventResult_t>::RedispatchGameToolEvent;
    v22[0] = v3;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v4 = INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,SpawnEntityToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 40, 0, 0, 1);
        v4 = INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>(bool)::s_hEvent = v4;
    }
    (*(*v2 + 96LL))(v2, this, v22, v4, 0);
    v27 = this;
    v5 = g_pToolGameSimulationDispatcher;
    v6 = IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>(bool)::s_hEvent;
    v28 = CLoopModeGameToolHooks::OnToolDestroyEntity;
    v29 = 0;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v6 = INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,DestroyEntityToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 0, 1);
        v6 = INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>(bool)::s_hEvent = v6;
    }
    (*(*v5 + 96LL))(v5, this, &v27, v6, 0);
    v27 = this;
    v7 = g_pToolGameSimulationDispatcher;
    v8 = IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>(bool)::s_hEvent;
    v28 = CLoopModeGameToolHooks::OnToolDestroyAllEntities;
    v29 = 0;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v8 = INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,DestroyAllEntitiesToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 24, 0, 0, 1);
        v8 = INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>(bool)::s_hEvent = v8;
    }
    (*(*v7 + 96LL))(v7, this, &v27, v8, 0);
    v27 = this;
    v9 = g_pToolGameSimulationDispatcher;
    v10 = IToolGameSimulationBase::FindOrCreateGameToolEvent<RestartMapToolEvent_t>(bool)::s_hEvent;
    v28 = CLoopModeGameToolHooks::OnToolRestartMap;
    v29 = 0;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<RestartMapToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v10 = INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,RestartMapToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 24, 0, 0, 1);
        v10 = INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<RestartMapToolEvent_t>(bool)::s_hEvent = v10;
    }
    (*(*v9 + 96LL))(v9, this, &v27, v10, 0);
    v27 = this;
    v28 = CLoopModeGameToolHooks::OnToolGetEntityInfo;
    v11 = g_pToolGameSimulationDispatcher;
    v29 = 0;
    v12 = operator new(0x60u);
    ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult(v12);
    *(v12 + 9) = this;
    *v12 = off_3FF8DB0;
    *(v12 + 10) = CLoopModeGameToolHooks::OnToolGetEntityInfo;
    *(v12 + 11) = 0;
    (*(*v11 + 120LL))(v11, v12, &v27);
    v13 = IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>(bool)::s_hEvent;
    v23[2] = 0;
    v23[1] = CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t,ToolEvent_GetEntityInfoResult_t>::RedispatchGameToolEvent;
    v23[0] = v12;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>(bool)::s_hEvent == 0 )
    {
      v13 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_GetEntityInfo,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 0, 1);
        v13 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>(bool)::s_hEvent = v13;
    }
    (*(*v11 + 96LL))(v11, this, v23, v13, 0);
    v27 = this;
    v28 = CLoopModeGameToolHooks::OnToolGetEntityInputs;
    v14 = g_pToolGameSimulationDispatcher;
    v29 = 0;
    v15 = operator new(0x48u);
    ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult(v15);
    *(v15 + 6) = this;
    *v15 = off_3FF9030;
    *(v15 + 7) = CLoopModeGameToolHooks::OnToolGetEntityInputs;
    *(v15 + 8) = 0;
    (*(*v14 + 120LL))(v14, v15, &v27);
    v16 = IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>(bool)::s_hEvent;
    v24 = v15;
    v25 = CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t,ToolEvent_GetEntityInputsResult_t>::RedispatchGameToolEvent;
    v26 = 0;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>(bool)::s_hEvent == 0 )
    {
      v16 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_GetEntityInputs,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 0, 1);
        v16 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>(bool)::s_hEvent = v16;
    }
    (*(*v14 + 96LL))(v14, this, &v24, v16, 0);
    v27 = this;
    v17 = g_pToolGameSimulationDispatcher;
    v18 = IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>(bool)::s_hEvent;
    v28 = CLoopModeGameToolHooks::OnToolFireEntityInput;
    v29 = 0;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>(bool)::s_hEvent == 0 )
    {
      v18 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_FireEntityInput,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 48, 0, 0, 1);
        v18 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>(bool)::s_hEvent = v18;
    }
    (*(*v17 + 96LL))(v17, this, &v27, v18, 0);
    v24 = this;
    v25 = CLoopModeGameToolHooks::OnToolTraceRayServer;
    v19 = g_pToolGameSimulationDispatcher;
    v26 = 0;
    v20 = operator new(0x50u);
    ToolTraceRayResult::ToolTraceRayResult(v20);
    *(v20 + 7) = this;
    *v20 = off_3FF85B0;
    *(v20 + 8) = CLoopModeGameToolHooks::OnToolTraceRayServer;
    *(v20 + 9) = 0;
    (*(*v19 + 120LL))(v19, v20, &v24);
    v21 = IToolGameSimulationBase::FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>(bool)::s_hEvent;
    v27 = v20;
    v28 = CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t,ToolTraceRayResult_t>::RedispatchGameToolEvent;
    v29 = 0;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v21 = INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,TraceRayServerToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 40, 0, 0, 1);
        v21 = INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>(bool)::s_hEvent = v21;
    }
    (*(*v19 + 96LL))(v19, this, &v27, v21, 0);
  }
}


// CLoopModeGameToolHooks::~CLoopModeGameToolHooks  (line 164, @0x00000000020b13d0, libserver.so)  // inlines: CAutoLockT, CUtlDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks>, CUtlDelegate<CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t> >, CUtlDelegate<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t> >, CUtlDelegate<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t> >, CUtlDelegate<CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t> >, Convert<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const SpawnEntityToolEvent_t&, SpawnEntityToolEventResult_t*), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const ToolEvent_GetEntityInfo_t&, ToolEvent_GetEntityInfoResult_t*), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const ToolEvent_GetEntityInputs_t&, ToolEvent_GetEntityInputsResult_t*), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const TraceRayServerToolEvent_t&, ToolTraceRayResult_t*), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const DestroyAllEntitiesToolEvent_t&), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const DestroyEntityToolEvent_t&), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const RestartMapToolEvent_t&), void (detail::GenericClass::*)()>, Convert<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const ToolEvent_FireEntityInput_t&), void (detail::GenericClass::*)()>, Convert<CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, void (CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>::*)(const SpawnEntityToolEvent_t&), void (detail::GenericClass::*)()>, Convert<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, void (CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>::*)(const ToolEvent_GetEntityInfo_t&), void (detail::GenericClass::*)()>, Convert<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, void (CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>::*)(const ToolEvent_GetEntityInputs_t&), void (detail::GenericClass::*)()>, Convert<CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, void (CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>::*)(const TraceRayServerToolEvent_t&), void (detail::GenericClass::*)()>, FastDelegate1<CLoopModeGameToolHooks, CLoopModeGameToolHooks>, FastDelegate1<CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t> >, FastDelegate1<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t> >, FastDelegate1<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t> >, FastDelegate1<CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t> >, FastDelegate2<CLoopModeGameToolHooks, CLoopModeGameToolHooks>, FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>, FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>, FindOrCreateGameToolEvent<RestartMapToolEvent_t>, FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>, FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>, FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>, FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>, FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>, FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>, FindOrCreateNetMessage<DestroyEntityToolEvent_t>, FindOrCreateNetMessage<RestartMapToolEvent_t>, FindOrCreateNetMessage<SpawnEntityToolEvent_t>, FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>, FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>, FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>, FindOrCreateNetMessage<TraceRayServerToolEvent_t>, Lock, Purge, RemoveAll, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, UnregisterGameToolEventHandler<DestroyAllEntitiesToolEvent_t>, UnregisterGameToolEventHandler<DestroyEntityToolEvent_t>, UnregisterGameToolEventHandler<RestartMapToolEvent_t>, UnregisterGameToolEventHandler<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, UnregisterGameToolEventHandler<SpawnEntityToolEvent_t>, UnregisterGameToolEventHandler<ToolEvent_FireEntityInput_t>, UnregisterGameToolEventHandler<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, UnregisterGameToolEventHandler<ToolEvent_GetEntityInfo_t>, UnregisterGameToolEventHandler<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, UnregisterGameToolEventHandler<ToolEvent_GetEntityInputs_t>, UnregisterGameToolEventHandler<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, UnregisterGameToolEventHandler<TraceRayServerToolEvent_t>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const DestroyAllEntitiesToolEvent_t&, void>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const DestroyEntityToolEvent_t&, void>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const RestartMapToolEvent_t&, void>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const SpawnEntityToolEvent_t&, SpawnEntityToolEventResult_t*, GameToolEventHandlerResult_t>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const ToolEvent_FireEntityInput_t&, void>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const ToolEvent_GetEntityInfo_t&, ToolEvent_GetEntityInfoResult_t*, GameToolEventHandlerResult_t>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const ToolEvent_GetEntityInputs_t&, ToolEvent_GetEntityInputsResult_t*, GameToolEventHandlerResult_t>, UtlMakeDelegate<CLoopModeGameToolHooks, CLoopModeGameToolHooks, const TraceRayServerToolEvent_t&, ToolTraceRayResult_t*, GameToolEventHandlerResult_t>, UtlMakeDelegate<CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, const SpawnEntityToolEvent_t&, void>, UtlMakeDelegate<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, const ToolEvent_GetEntityInfo_t&, void>, UtlMakeDelegate<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, const ToolEvent_GetEntityInputs_t&, void>, UtlMakeDelegate<CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, const TraceRayServerToolEvent_t&, void>, bindmemfunc<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const SpawnEntityToolEvent_t&, SpawnEntityToolEventResult_t*)>, bindmemfunc<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const ToolEvent_GetEntityInfo_t&, ToolEvent_GetEntityInfoResult_t*)>, bindmemfunc<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const ToolEvent_GetEntityInputs_t&, ToolEvent_GetEntityInputsResult_t*)>, bindmemfunc<CLoopModeGameToolHooks, GameToolEventHandlerResult_t (CLoopModeGameToolHooks::*)(const TraceRayServerToolEvent_t&, ToolTraceRayResult_t*)>, bindmemfunc<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const DestroyAllEntitiesToolEvent_t&)>, bindmemfunc<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const DestroyEntityToolEvent_t&)>, bindmemfunc<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const RestartMapToolEvent_t&)>, bindmemfunc<CLoopModeGameToolHooks, void (CLoopModeGameToolHooks::*)(const ToolEvent_FireEntityInput_t&)>, bindmemfunc<CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>, void (CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>::*)(const SpawnEntityToolEvent_t&)>, bindmemfunc<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>, void (CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>::*)(const ToolEvent_GetEntityInfo_t&)>, bindmemfunc<CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>, void (CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>::*)(const ToolEvent_GetEntityInputs_t&)>, bindmemfunc<CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>, void (CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>::*)(const TraceRayServerToolEvent_t&)>, operator(), ~CAutoLockT, ~CNetMessagePB, ~CRedispatchEventWithReturnValue, ~CUtlMemory, ~CUtlSlot, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorMT, ~SpawnEntityToolEventResult_t, ~ToolEvent_GetEntityInfoResult_t, ~ToolEvent_GetEntityInputsResult_t, ~ToolTraceRayResult_t
// calls: SpawnEntityToolEventResult::~SpawnEntityToolEventResult, operator delete, ToolEvent_GetEntityInfoResult::~ToolEvent_GetEntityInfoResult, ToolEvent_GetEntityInputsResult::~ToolEvent_GetEntityInputsResult, ToolTraceRayResult::~ToolTraceRayResult, ThreadGetCurrentId, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), CUtlMemory<CUtlSignaller_Base*, int>::Purge
// callers: CLoopModeGame::OnLoopDeactivate
// globals: CLoopModeGameToolHooks::OnToolSpawnEntity(SpawnEntityToolEvent_t const&,SpawnEntityToolEventResult_t *), IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>(bool)::s_hEvent, CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t,SpawnEntityToolEventResult_t>::RedispatchGameToolEvent(SpawnEntityToolEvent_t const&), CLoopModeGameToolHooks::OnToolDestroyEntity(DestroyEntityToolEvent_t const&), IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>(bool)::s_hEvent, IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>(bool)::s_hEvent, CLoopModeGameToolHooks::OnToolDestroyAllEntities(DestroyAllEntitiesToolEvent_t const&), IToolGameSimulationBase::FindOrCreateGameToolEvent<RestartMapToolEvent_t>(bool)::s_hEvent (36 total)
void __fastcall CLoopModeGameToolHooks::~CLoopModeGameToolHooks(CLoopModeGameToolHooks *const this)
{
  IToolGameSimulationDispatcher *v2; // r14
  __int64 v3; // rax
  SpawnEntityToolEventResult *v4; // r10
  IToolGameSimulationDispatcher *v5; // r14
  IToolGameSimulationDispatcher *v6; // r14
  IToolGameSimulationDispatcher *v7; // r14
  __int64 v8; // rax
  ToolEvent_GetEntityInfoResult *v9; // r14
  SpawnEntityToolEventResult *v10; // r10
  __int64 v11; // rax
  ToolEvent_GetEntityInputsResult *v12; // r14
  SpawnEntityToolEventResult *v13; // r10
  IToolGameSimulationDispatcher *v14; // r14
  IToolGameSimulationDispatcher *v15; // r14
  __int64 v16; // rax
  ToolTraceRayResult *v17; // r12
  signed __int64 CurrentId; // rsi
  __int64 i; // r12
  CUtlSignaller_Base *v20; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  SpawnEntityToolEventResult *v35; // [rsp+8h] [rbp-78h]
  SpawnEntityToolEventResult *v36; // [rsp+8h] [rbp-78h]
  SpawnEntityToolEventResult *v37; // [rsp+8h] [rbp-78h]
  SpawnEntityToolEventResult *v38; // [rsp+8h] [rbp-78h]
  CLoopModeGameToolHooks *v39; // [rsp+10h] [rbp-70h] BYREF
  GameToolEventHandlerResult_t (__fastcall *v40)(CLoopModeGameToolHooks *const, const SpawnEntityToolEvent_t *const, SpawnEntityToolEventResult_t *); // [rsp+18h] [rbp-68h]
  __int64 v41; // [rsp+20h] [rbp-60h]
  CLoopModeGameToolHooks *v42; // [rsp+30h] [rbp-50h] BYREF
  void *v43; // [rsp+38h] [rbp-48h]
  __int64 v44; // [rsp+40h] [rbp-40h]

  v2 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    v39 = this;
    v40 = CLoopModeGameToolHooks::OnToolSpawnEntity;
    v41 = 0;
    v3 = (*(*g_pToolGameSimulationDispatcher + 128LL))(g_pToolGameSimulationDispatcher, &v39);
    v44 = 0;
    v4 = v3;
    v42 = v3;
    v43 = CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t,SpawnEntityToolEventResult_t>::RedispatchGameToolEvent;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v25 = INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        v38 = v3;
        v34 = (*(*g_pNetworkMessages + 24LL))(
                g_pNetworkMessages,
                0xFFFFFFFFLL,
                &CNetMessagePB<-1,SpawnEntityToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding,
                40,
                0,
                0,
                1);
        v4 = v38;
        INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = v34;
        v25 = v34;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>(bool)::s_hEvent = v25;
    }
    v35 = v4;
    (*(*v2 + 104LL))(v2, this, &v42);
    if ( v35 != 0 )
    {
      *v35 = &off_3FF8770;
      SpawnEntityToolEventResult::~SpawnEntityToolEventResult(v35);
      operator delete(v35);
    }
    v42 = this;
    v5 = g_pToolGameSimulationDispatcher;
    v43 = CLoopModeGameToolHooks::OnToolDestroyEntity;
    v44 = 0;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v26 = INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,DestroyEntityToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 0, 1);
        v26 = INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>(bool)::s_hEvent = v26;
    }
    (*(*v5 + 104LL))(v5, this, &v42);
    v42 = this;
    v44 = 0;
    v6 = g_pToolGameSimulationDispatcher;
    v43 = CLoopModeGameToolHooks::OnToolDestroyAllEntities;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v27 = INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,DestroyAllEntitiesToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 24, 0, 0, 1);
        v27 = INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>(bool)::s_hEvent = v27;
    }
    (*(*v6 + 104LL))(v6, this, &v42);
    v42 = this;
    v44 = 0;
    v7 = g_pToolGameSimulationDispatcher;
    v43 = CLoopModeGameToolHooks::OnToolRestartMap;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<RestartMapToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v28 = INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,RestartMapToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 24, 0, 0, 1);
        v28 = INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<RestartMapToolEvent_t>(bool)::s_hEvent = v28;
    }
    (*(*v7 + 104LL))(v7, this, &v42);
    v40 = CLoopModeGameToolHooks::OnToolGetEntityInfo;
    v41 = 0;
    v39 = this;
    v36 = g_pToolGameSimulationDispatcher;
    v8 = (*(*g_pToolGameSimulationDispatcher + 128LL))(g_pToolGameSimulationDispatcher, &v39);
    v44 = 0;
    v9 = v8;
    v10 = v36;
    v42 = v8;
    v43 = CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t,ToolEvent_GetEntityInfoResult_t>::RedispatchGameToolEvent;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>(bool)::s_hEvent == 0 )
    {
      v29 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        v33 = (*(*g_pNetworkMessages + 24LL))(
                g_pNetworkMessages,
                0xFFFFFFFFLL,
                &CNetMessagePB<-1,ToolEvent_GetEntityInfo,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding,
                32,
                0,
                0,
                1);
        v10 = v36;
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = v33;
        v29 = v33;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>(bool)::s_hEvent = v29;
    }
    (*(*v10 + 104LL))(v10, this, &v42);
    if ( v9 != 0 )
    {
      *v9 = &off_3FF8CF0;
      ToolEvent_GetEntityInfoResult::~ToolEvent_GetEntityInfoResult(v9);
      operator delete(v9);
    }
    v39 = this;
    v40 = CLoopModeGameToolHooks::OnToolGetEntityInputs;
    v41 = 0;
    v37 = g_pToolGameSimulationDispatcher;
    v11 = (*(*g_pToolGameSimulationDispatcher + 128LL))(g_pToolGameSimulationDispatcher, &v39);
    v44 = 0;
    v12 = v11;
    v13 = v37;
    v42 = v11;
    v43 = CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t,ToolEvent_GetEntityInputsResult_t>::RedispatchGameToolEvent;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>(bool)::s_hEvent == 0 )
    {
      v30 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        v32 = (*(*g_pNetworkMessages + 24LL))(
                g_pNetworkMessages,
                0xFFFFFFFFLL,
                &CNetMessagePB<-1,ToolEvent_GetEntityInputs,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding,
                32,
                0,
                0,
                1);
        v13 = v37;
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = v32;
        v30 = v32;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>(bool)::s_hEvent = v30;
    }
    (*(*v13 + 104LL))(v13, this, &v42);
    if ( v12 != 0 )
    {
      *v12 = &off_3FF8F70;
      ToolEvent_GetEntityInputsResult::~ToolEvent_GetEntityInputsResult(v12);
      operator delete(v12);
    }
    v42 = this;
    v14 = g_pToolGameSimulationDispatcher;
    v43 = CLoopModeGameToolHooks::OnToolFireEntityInput;
    v44 = 0;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>(bool)::s_hEvent == 0 )
    {
      v31 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_FireEntityInput,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 48, 0, 0, 1);
        v31 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>(bool)::s_hEvent = v31;
    }
    (*(*v14 + 104LL))(v14, this, &v42);
    v15 = g_pToolGameSimulationDispatcher;
    v40 = CLoopModeGameToolHooks::OnToolTraceRayServer;
    v41 = 0;
    v39 = this;
    v16 = (*(*g_pToolGameSimulationDispatcher + 128LL))(g_pToolGameSimulationDispatcher, &v39);
    v44 = 0;
    v17 = v16;
    v42 = v16;
    v43 = CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t,ToolTraceRayResult_t>::RedispatchGameToolEvent;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v24 = INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,TraceRayServerToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 40, 0, 0, 1);
        v24 = INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>(bool)::s_hEvent = v24;
    }
    (*(*v15 + 104LL))(v15, this, &v42);
    if ( v17 != 0 )
    {
      *v17 = &off_3FF84F0;
      ToolTraceRayResult::~ToolTraceRayResult(v17);
      operator delete(v17);
    }
  }
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_ConnectedSignallers.m_ownerID
    && _InterlockedCompareExchange64(
         &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
         CurrentId,
         0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(
      &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
      CurrentId,
      0);
  }
  else
  {
    ++this->m_ConnectedSignallers.m_depth;
  }
  for ( i = 0; this->m_ConnectedSignallers.m_Size > i; ++i )
  {
    v20 = this->m_ConnectedSignallers.m_Memory.m_pMemory[i];
    pfn = v20->m_SlotDeletionDelegate.m_Closure.m_pFunction.__pfn;
    v22 = (v20->m_SlotDeletionDelegate.m_Closure.m_pthis + v20->m_SlotDeletionDelegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v22 - 1);
    (pfn)(v22, this);
  }
  if ( --this->m_ConnectedSignallers.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>, 0);
  v23 = (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ConnectedSignallers.m_Size = 0;
  if ( v23 )
  {
    CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
    if ( (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
  }
}


// GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 185, @0x00000000020b1ab0, libserver.so)
void __cdecl GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 185, @0x00000000020f1710, libserver.so)
void __fastcall GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::DoesGameSystemReallocate  (line 185, @0x00000000020f1720, libserver.so)
// globals: GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem *const this)
{
  return (*(GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::sm_Factory);
}


// GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 185, @0x00000000020f1740, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem  (line 185, @0x00000000020f5db0, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem(
        GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF91F0;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem  (line 185, @0x00000000020f5dd0, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem(
        GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF91F0;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 186, @0x00000000020b1ac0, libserver.so)
void __cdecl GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 186, @0x00000000020f1770, libserver.so)
void __fastcall GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::DoesGameSystemReallocate  (line 186, @0x00000000020f1780, libserver.so)
// globals: GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem *const this)
{
  return (*(GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::sm_Factory);
}


// GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 186, @0x00000000020f17a0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem  (line 186, @0x00000000020f5d10, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem(
        GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF9510;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem  (line 186, @0x00000000020f5d30, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem(
        GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF9510;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 187, @0x00000000020b1ad0, libserver.so)
void __cdecl GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 187, @0x00000000020f17d0, libserver.so)
void __fastcall GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::DoesGameSystemReallocate  (line 187, @0x00000000020f17e0, libserver.so)
// globals: GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem *const this)
{
  return (*(GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::sm_Factory);
}


// GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 187, @0x00000000020f1800, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem  (line 187, @0x00000000020f5c70, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem(
        GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF9830;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem  (line 187, @0x00000000020f5c90, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem(
        GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF9830;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 188, @0x00000000020b1ae0, libserver.so)
void __cdecl GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 188, @0x00000000020f1830, libserver.so)
void __fastcall GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::DoesGameSystemReallocate  (line 188, @0x00000000020f1840, libserver.so)
// globals: GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem *const this)
{
  return (*(GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::sm_Factory);
}


// GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 188, @0x00000000020f1860, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem  (line 188, @0x00000000020f5bd0, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem(
        GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF9B50;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem  (line 188, @0x00000000020f5bf0, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem::~GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem(
        GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF9B50;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 189, @0x00000000020b1af0, libserver.so)
void __cdecl GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 189, @0x00000000020f1890, libserver.so)
void __fastcall GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventToolEvent_FireEntityInput_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::DoesGameSystemReallocate  (line 189, @0x00000000020f18a0, libserver.so)
// globals: GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventToolEvent_FireEntityInput_tHookupGameSystem *const this)
{
  return (*(GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::sm_Factory);
}


// GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 189, @0x00000000020f18c0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventToolEvent_FireEntityInput_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::~GameToolEventToolEvent_FireEntityInput_tHookupGameSystem  (line 189, @0x00000000020f5b30, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::~GameToolEventToolEvent_FireEntityInput_tHookupGameSystem(
        GameToolEventToolEvent_FireEntityInput_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF9E70;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::~GameToolEventToolEvent_FireEntityInput_tHookupGameSystem  (line 189, @0x00000000020f5b50, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventToolEvent_FireEntityInput_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventToolEvent_FireEntityInput_tHookupGameSystem::~GameToolEventToolEvent_FireEntityInput_tHookupGameSystem(
        GameToolEventToolEvent_FireEntityInput_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF9E70;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 190, @0x00000000020b1b00, libserver.so)
void __cdecl GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 190, @0x00000000020f18f0, libserver.so)
void __fastcall GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::DoesGameSystemReallocate  (line 190, @0x00000000020f1900, libserver.so)
// globals: GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem *const this)
{
  return (*(GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::sm_Factory);
}


// GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 190, @0x00000000020f1920, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::~GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem  (line 190, @0x00000000020f5a90, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::~GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem(
        GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFA190;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::~GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem  (line 190, @0x00000000020f5ab0, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem::~GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem(
        GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFA190;  // vptr: CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventSpawnEntityToolEvent_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 191, @0x00000000020b1b10, libserver.so)
void __cdecl GameToolEventSpawnEntityToolEvent_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventSpawnEntityToolEvent_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 191, @0x00000000020f1950, libserver.so)
void __fastcall GameToolEventSpawnEntityToolEvent_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventSpawnEntityToolEvent_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventSpawnEntityToolEvent_tHookupGameSystem::DoesGameSystemReallocate  (line 191, @0x00000000020f1960, libserver.so)
// globals: GameToolEventSpawnEntityToolEvent_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventSpawnEntityToolEvent_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventSpawnEntityToolEvent_tHookupGameSystem *const this)
{
  return (*(GameToolEventSpawnEntityToolEvent_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventSpawnEntityToolEvent_tHookupGameSystem::sm_Factory);
}


// GameToolEventSpawnEntityToolEvent_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 191, @0x00000000020f1980, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventSpawnEntityToolEvent_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventSpawnEntityToolEvent_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventSpawnEntityToolEvent_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventSpawnEntityToolEvent_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventSpawnEntityToolEvent_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventSpawnEntityToolEvent_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventSpawnEntityToolEvent_tHookupGameSystem::~GameToolEventSpawnEntityToolEvent_tHookupGameSystem  (line 191, @0x00000000020f59f0, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventSpawnEntityToolEvent_tHookupGameSystem::~GameToolEventSpawnEntityToolEvent_tHookupGameSystem(
        GameToolEventSpawnEntityToolEvent_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFA4B0;  // vptr: CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventSpawnEntityToolEvent_tHookupGameSystem::~GameToolEventSpawnEntityToolEvent_tHookupGameSystem  (line 191, @0x00000000020f5a10, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventSpawnEntityToolEvent_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventSpawnEntityToolEvent_tHookupGameSystem::~GameToolEventSpawnEntityToolEvent_tHookupGameSystem(
        GameToolEventSpawnEntityToolEvent_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFA4B0;  // vptr: CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventDestroyEntityToolEvent_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 192, @0x00000000020b1b20, libserver.so)
void __cdecl GameToolEventDestroyEntityToolEvent_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventDestroyEntityToolEvent_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 192, @0x00000000020f19b0, libserver.so)
void __fastcall GameToolEventDestroyEntityToolEvent_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventDestroyEntityToolEvent_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventDestroyEntityToolEvent_tHookupGameSystem::DoesGameSystemReallocate  (line 192, @0x00000000020f19c0, libserver.so)
// globals: GameToolEventDestroyEntityToolEvent_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventDestroyEntityToolEvent_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventDestroyEntityToolEvent_tHookupGameSystem *const this)
{
  return (*(GameToolEventDestroyEntityToolEvent_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventDestroyEntityToolEvent_tHookupGameSystem::sm_Factory);
}


// GameToolEventDestroyEntityToolEvent_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 192, @0x00000000020f19e0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventDestroyEntityToolEvent_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventDestroyEntityToolEvent_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventDestroyEntityToolEvent_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventDestroyEntityToolEvent_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventDestroyEntityToolEvent_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventDestroyEntityToolEvent_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventDestroyEntityToolEvent_tHookupGameSystem::~GameToolEventDestroyEntityToolEvent_tHookupGameSystem  (line 192, @0x00000000020f5950, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventDestroyEntityToolEvent_tHookupGameSystem::~GameToolEventDestroyEntityToolEvent_tHookupGameSystem(
        GameToolEventDestroyEntityToolEvent_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFA7D0;  // vptr: CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventDestroyEntityToolEvent_tHookupGameSystem::~GameToolEventDestroyEntityToolEvent_tHookupGameSystem  (line 192, @0x00000000020f5970, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventDestroyEntityToolEvent_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventDestroyEntityToolEvent_tHookupGameSystem::~GameToolEventDestroyEntityToolEvent_tHookupGameSystem(
        GameToolEventDestroyEntityToolEvent_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFA7D0;  // vptr: CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventRestartMapToolEvent_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 193, @0x00000000020b1b30, libserver.so)
void __cdecl GameToolEventRestartMapToolEvent_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventRestartMapToolEvent_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 193, @0x00000000020f1a10, libserver.so)
void __fastcall GameToolEventRestartMapToolEvent_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventRestartMapToolEvent_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventRestartMapToolEvent_tHookupGameSystem::DoesGameSystemReallocate  (line 193, @0x00000000020f1a20, libserver.so)
// globals: GameToolEventRestartMapToolEvent_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventRestartMapToolEvent_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventRestartMapToolEvent_tHookupGameSystem *const this)
{
  return (*(GameToolEventRestartMapToolEvent_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventRestartMapToolEvent_tHookupGameSystem::sm_Factory);
}


// GameToolEventRestartMapToolEvent_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 193, @0x00000000020f1a40, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventRestartMapToolEvent_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventRestartMapToolEvent_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventRestartMapToolEvent_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventRestartMapToolEvent_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventRestartMapToolEvent_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventRestartMapToolEvent_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventRestartMapToolEvent_tHookupGameSystem::~GameToolEventRestartMapToolEvent_tHookupGameSystem  (line 193, @0x00000000020f58b0, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventRestartMapToolEvent_tHookupGameSystem::~GameToolEventRestartMapToolEvent_tHookupGameSystem(
        GameToolEventRestartMapToolEvent_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFAAF0;  // vptr: CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventRestartMapToolEvent_tHookupGameSystem::~GameToolEventRestartMapToolEvent_tHookupGameSystem  (line 193, @0x00000000020f58d0, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventRestartMapToolEvent_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventRestartMapToolEvent_tHookupGameSystem::~GameToolEventRestartMapToolEvent_tHookupGameSystem(
        GameToolEventRestartMapToolEvent_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFAAF0;  // vptr: CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 194, @0x00000000020b1b40, libserver.so)
void __cdecl GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 194, @0x00000000020f1a70, libserver.so)
void __fastcall GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::DoesGameSystemReallocate  (line 194, @0x00000000020f1a80, libserver.so)
// globals: GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem *const this)
{
  return (*(GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::sm_Factory);
}


// GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 194, @0x00000000020f1aa0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::~GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem  (line 194, @0x00000000020f5810, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::~GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem(
        GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFAE10;  // vptr: CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::~GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem  (line 194, @0x00000000020f5830, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem::~GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem(
        GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFAE10;  // vptr: CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventTraceRayServerToolEvent_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 195, @0x00000000020b1b50, libserver.so)
void __cdecl GameToolEventTraceRayServerToolEvent_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventTraceRayServerToolEvent_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 195, @0x00000000020f1ad0, libserver.so)
void __fastcall GameToolEventTraceRayServerToolEvent_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventTraceRayServerToolEvent_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventTraceRayServerToolEvent_tHookupGameSystem::DoesGameSystemReallocate  (line 195, @0x00000000020f1ae0, libserver.so)
// globals: GameToolEventTraceRayServerToolEvent_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventTraceRayServerToolEvent_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventTraceRayServerToolEvent_tHookupGameSystem *const this)
{
  return (*(GameToolEventTraceRayServerToolEvent_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventTraceRayServerToolEvent_tHookupGameSystem::sm_Factory);
}


// GameToolEventTraceRayServerToolEvent_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 195, @0x00000000020f1b00, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventTraceRayServerToolEvent_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventTraceRayServerToolEvent_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventTraceRayServerToolEvent_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventTraceRayServerToolEvent_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventTraceRayServerToolEvent_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventTraceRayServerToolEvent_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventTraceRayServerToolEvent_tHookupGameSystem::~GameToolEventTraceRayServerToolEvent_tHookupGameSystem  (line 195, @0x00000000020f5770, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventTraceRayServerToolEvent_tHookupGameSystem::~GameToolEventTraceRayServerToolEvent_tHookupGameSystem(
        GameToolEventTraceRayServerToolEvent_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFB130;  // vptr: CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventTraceRayServerToolEvent_tHookupGameSystem::~GameToolEventTraceRayServerToolEvent_tHookupGameSystem  (line 195, @0x00000000020f5790, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventTraceRayServerToolEvent_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventTraceRayServerToolEvent_tHookupGameSystem::~GameToolEventTraceRayServerToolEvent_tHookupGameSystem(
        GameToolEventTraceRayServerToolEvent_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFB130;  // vptr: CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// GameToolEventToolTraceRayResult_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 196, @0x00000000020b1b60, libserver.so)
void __cdecl GameToolEventToolTraceRayResult_tHookupGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GameToolEventToolTraceRayResult_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 196, @0x00000000020f1b30, libserver.so)
void __fastcall GameToolEventToolTraceRayResult_tHookupGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        GameToolEventToolTraceRayResult_tHookupGameSystem *const this)
{
  ;
}


// GameToolEventToolTraceRayResult_tHookupGameSystem::DoesGameSystemReallocate  (line 196, @0x00000000020f1b40, libserver.so)
// globals: GameToolEventToolTraceRayResult_tHookupGameSystem::sm_Factory
bool __fastcall GameToolEventToolTraceRayResult_tHookupGameSystem::DoesGameSystemReallocate(
        const GameToolEventToolTraceRayResult_tHookupGameSystem *const this)
{
  return (*(GameToolEventToolTraceRayResult_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(GameToolEventToolTraceRayResult_tHookupGameSystem::sm_Factory);
}


// GameToolEventToolTraceRayResult_tHookupGameSystem::SetGameSystemGlobalPtrs  (line 196, @0x00000000020f1b60, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: GameToolEventToolTraceRayResult_tHookupGameSystem::sm_Factory
void __fastcall GameToolEventToolTraceRayResult_tHookupGameSystem::SetGameSystemGlobalPtrs(
        GameToolEventToolTraceRayResult_tHookupGameSystem *const this,
        void *pValue)
{
  if ( GameToolEventToolTraceRayResult_tHookupGameSystem::sm_Factory != 0 )
    (*(GameToolEventToolTraceRayResult_tHookupGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      GameToolEventToolTraceRayResult_tHookupGameSystem::sm_Factory,
      pValue);
}


// GameToolEventToolTraceRayResult_tHookupGameSystem::~GameToolEventToolTraceRayResult_tHookupGameSystem  (line 196, @0x00000000020f56d0, libserver.so)  // inlines: ~CStartupHookGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall GameToolEventToolTraceRayResult_tHookupGameSystem::~GameToolEventToolTraceRayResult_tHookupGameSystem(
        GameToolEventToolTraceRayResult_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFB450;  // vptr: CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>
  IGameSystem::~IGameSystem(this);
}


// GameToolEventToolTraceRayResult_tHookupGameSystem::~GameToolEventToolTraceRayResult_tHookupGameSystem  (line 196, @0x00000000020f56f0, libserver.so)  // inlines: ~CStartupHookGameSystem, ~GameToolEventToolTraceRayResult_tHookupGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall GameToolEventToolTraceRayResult_tHookupGameSystem::~GameToolEventToolTraceRayResult_tHookupGameSystem(
        GameToolEventToolTraceRayResult_tHookupGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FFB450;  // vptr: CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal,0>
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CLoopModeGameToolHooks::OnToolFireEntityInput  (line 200, @0x00000000020d20e0, libserver.so)  // inlines: CEntityHandle, CVariantBase, CopyData, Free, FromIndex, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, _M_data, c_str, operator CEntityInstance*, ~CVariantBase
// calls: CEntityInstance::AcceptInput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLoopModeGameToolHooks::OnToolFireEntityInput(
        CLoopModeGameToolHooks *const this,
        const ToolEvent_FireEntityInput_t *const msg)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rdi
  CEntityInstance *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // [rsp-8h] [rbp-28h] BYREF
  CVariant arg; // [rsp+0h] [rbp-20h]

  if ( *(msg + 28) == 0 )
  {
    LODWORD(v7) = *(msg + 6);
    if ( (v7 + 2) > 1 )
    {
      v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F];
      if ( v2 != 0 )
      {
        v3 = &v2[v7 & 0x1FF];
        if ( v3 != 0 && v7 == v3->m_EHandle.m_Index )
        {
          m_pInstance = v3->m_pInstance;
          if ( v3->m_pInstance != 0 )
          {
            v5 = v3->m_pInstance;
            v6 = **(msg + 5);
            arg.m_int = 30;
            v7 = v6;
            CEntityInstance::AcceptInput(m_pInstance, **(msg + 4), v5, v5, &v7, -1);
            if ( (arg.m_uint & 0x10000) != 0 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7);
          }
        }
      }
    }
  }
}


// CLoopModeGameToolHooks::OnToolGetEntityInputs  (line 217, @0x00000000020a1080, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Clear, Clear<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, FromIndex, Get, GetEntityIOInputs, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, Purge, RemoveAll, add_input_list, assign, clear, clear_input_list, length, operator CEntityInstance*, size, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: std::string::_M_mutate(ulong,ulong,ulong), CEntityIdentity::GetEntityIOInputs, google::protobuf::internal::StringTypeHandlerBase::New(void), strlen, std::string::assign(char const*,ulong), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), CUtlMemory<char const*, int>::Purge, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
GameToolEventHandlerResult_t __fastcall CLoopModeGameToolHooks::OnToolGetEntityInputs(
        CLoopModeGameToolHooks *const this,
        const ToolEvent_GetEntityInputs_t *const msg,
        ToolEvent_GetEntityInputsResult_t *pResult)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  __int64 v6; // r13
  int v7; // r12d
  std::string *v8; // rdi
  CEntityInstance *m_pInstance; // rax
  google::protobuf::internal::StringTypeHandlerBase *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  std::string *v16; // r14
  __int64 v17; // rcx
  size_t v18; // rax
  int v19; // esi
  const char *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // [rsp-8h] [rbp-58h] BYREF
  CUtlVector<char const*,CUtlMemory<char const*,int> > inputsList; // [rsp+0h] [rbp-50h] BYREF

  if ( *(msg + 28) != 0 )
    return GameToolEventHandlerResult_t::TOOL_EVENT_IGNORED;
  v23 = *(msg + 6);
  if ( (v23 + 2) > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v23 >> 9) & 0x3F]) != 0
    && (v5 = &v4[v23 & 0x1FF]) != 0
    && v23 == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0) )
  {
    v23 = 0;
    *&inputsList.m_Size = 0;
    inputsList.m_Memory.m_pMemory = 0;
    CEntityIdentity::GetEntityIOInputs(m_pInstance->m_pEntity, &v23);
    if ( v23 > 0 )
    {
      v12 = 0;
      v13 = 8LL * (v23 - 1) + 8;
      do
      {
        v19 = *(pResult + 9);
        v20 = *(*&inputsList.m_Size + v12);
        v21 = *(pResult + 8);
        if ( v21 >= v19 )
        {
          if ( v19 == *(pResult + 10) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(pResult + 1, v19 + 1);
          v14 = google::protobuf::internal::StringTypeHandlerBase::New(v11);
          v15 = *(pResult + 8);
          v16 = v14;
          v17 = *(pResult + 3);
          ++*(pResult + 9);
          *(pResult + 8) = v15 + 1;
          *(v17 + 8 * v15) = v14;
        }
        else
        {
          v22 = *(pResult + 3);
          *(pResult + 8) = v21 + 1;
          v16 = *(v22 + 8 * v21);
        }
        v18 = strlen(v20);
        std::string::assign(v16, v20, v18);
        v12 += 8;
      }
      while ( v12 != v13 );
    }
    v23 = 0;
    if ( (HIDWORD(inputsList.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<char const*,int>::Purge(&inputsList);
      if ( (HIDWORD(inputsList.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<char const*,int>::Purge(&inputsList);
    }
    return GameToolEventHandlerResult_t::TOOL_EVENT_HANDLED;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( v7 < *(pResult + 8) )
    {
      ++v7;
      v8 = *(*(pResult + 3) + v6);
      v6 += 8;
      std::string::_M_mutate(v8, 0, *(v8->_M_dataplus._M_p - 3), 0);
    }
    *(pResult + 8) = 0;
    return GameToolEventHandlerResult_t::TOOL_EVENT_HANDLED;
  }
}


// CLoopModeGameToolHooks::OnToolGetEntityInfo  (line 246, @0x00000000020a00f0, libserver.so)  // inlines: CEntityHandle, FromIndex, Get, GetClassInfo, GetClassNameAsCStr, GetEntityIdentity, GetEntityNameAsCStr, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, String, VectorToCMsgVector, WorldSpaceAABB, assign, length, mutable_maxs, mutable_mins, mutable_origin, operator CEntityInstance*, operator=, set_classname, set_cppclass, set_has_classname, set_has_cppclass, set_has_maxs, set_has_mins, set_has_name, set_has_origin, set_has_x, set_has_y, set_has_z, set_name, set_x, set_y, set_z
// calls: std::string::assign(char const*,ulong), operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume, strlen, CBaseEntity::GetAbsOrigin, CCollisionProperty::CollisionAABBToWorldAABB
// globals: CEntityHandle::gm_pEntityList
GameToolEventHandlerResult_t __fastcall CLoopModeGameToolHooks::OnToolGetEntityInfo(
        CLoopModeGameToolHooks *const this,
        const ToolEvent_GetEntityInfo_t *const msg,
        ToolEvent_GetEntityInfoResult_t *pResult)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  std::string *v6; // rdi
  std::string *v7; // rdi
  CMsgVector *v8; // rax
  vec_t v9; // xmm2_4
  vec_t v10; // xmm1_4
  int v11; // edx
  vec_t v12; // xmm0_4
  vec_t *v13; // rax
  int v14; // edx
  vec_t *v15; // rax
  int v16; // edx
  CMsgVector *v18; // r12
  CMsgVector *v19; // r13
  CMsgVector *v20; // r13
  const CBaseEntity *m_pInstance; // r13
  const char *m_pszCPPClassname; // r12
  size_t v23; // rax
  const char *v24; // rsi
  const char *m_pAsString; // r12
  CEntityIdentity *m_pEntity; // rax
  size_t v27; // rax
  const char *v28; // rsi
  const char *v29; // r12
  CEntityIdentity *v30; // rax
  size_t v31; // rax
  CMsgVector *v32; // r12
  const Vector *AbsOrigin; // rax
  int v34; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  const CCollisionProperty *m_pCollision; // rdi
  vec_t *v38; // rax
  int v39; // edx
  vec_t v40; // xmm0_4
  CMsgVector *v41; // rax
  int v42; // edx
  vec_t v43; // xmm0_4
  const Vector *v44; // rax
  vec_t v45; // xmm1_4
  vec_t v46; // xmm0_4
  CMsgVector *v47; // r12
  CMsgVector *v48; // r12
  vec_t x; // [rsp-8h] [rbp-48h] BYREF
  vec_t v50; // [rsp-4h] [rbp-44h]
  Vector mins; // [rsp+0h] [rbp-40h] BYREF
  vec_t v52; // [rsp+Ch] [rbp-34h]
  Vector maxs; // [rsp+10h] [rbp-30h]

  if ( *(msg + 28) != 0 )
    return GameToolEventHandlerResult_t::TOOL_EVENT_IGNORED;
  mins.z = *(msg + 6);
  if ( (LODWORD(mins.z) + 2) > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(mins.z) >> 9) & 0x3F]) != 0
    && (v5 = &v4[LOWORD(mins.z) & 0x1FF]) != 0
    && LODWORD(mins.z) == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0) )
  {
    m_pszCPPClassname = m_pInstance->m_pEntity->m_pClass->m_pClassInfo->m_pszCPPClassname;
    *(pResult + 4) |= 1u;
    v23 = strlen(m_pszCPPClassname);
    v24 = m_pszCPPClassname;
    m_pAsString = "";
    std::string::assign(*(pResult + 3), v24, v23);
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_name.u.m_pAsString;
    *(pResult + 4) |= 4u;
    v27 = strlen(m_pAsString);
    v28 = m_pAsString;
    v29 = "";
    std::string::assign(*(pResult + 5), v28, v27);
    v30 = m_pInstance->m_pEntity;
    if ( v30->m_designerName.u.m_Id != 0 )
      v29 = v30->m_designerName.u.m_pAsString;
    *(pResult + 4) |= 2u;
    v31 = strlen(v29);
    std::string::assign(*(pResult + 4), v29, v31);
    v32 = *(pResult + 6);
    *(pResult + 4) |= 8u;
    if ( v32 == 0 )
    {
      v32 = operator new(0x28u);
      CMsgVector::CMsgVector(v32);
      *(pResult + 6) = v32;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v34 = *(v32 + 4);
    *(v32 + 6) = LODWORD(AbsOrigin->x);
    *(v32 + 4) = v34 | 1;
    y = AbsOrigin->y;
    *(v32 + 4) = v34 | 3;
    *(v32 + 7) = y;
    z = AbsOrigin->z;
    *(v32 + 4) = v34 | 7;
    *(v32 + 8) = z;
    m_pCollision = m_pInstance->m_pCollision;
    if ( m_pCollision != 0 )
    {
      CCollisionProperty::CollisionAABBToWorldAABB(
        m_pCollision,
        &m_pCollision->m_vecMins.m_Value,
        &m_pCollision->m_vecMaxs.m_Value,
        &x,
        &mins.z);
    }
    else
    {
      v44 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v45 = v44->y;
      v46 = v44->z;
      x = v44->x;
      v50 = v45;
      mins.x = v46;
      mins.z = x;
      v52 = v45;
      maxs.x = v46;
    }
    v38 = *(pResult + 7);
    *(pResult + 4) |= 0x10u;
    if ( v38 == 0 )
    {
      v48 = operator new(0x28u);
      CMsgVector::CMsgVector(v48);
      *(pResult + 7) = v48;
      v38 = v48;
    }
    v39 = *(v38 + 4);
    v38[6] = x;
    v38[7] = v50;
    v40 = mins.x;
    *(v38 + 4) = v39 | 7;
    v38[8] = v40;
    v41 = *(pResult + 8);
    *(pResult + 4) |= 0x20u;
    if ( v41 == 0 )
    {
      v47 = operator new(0x28u);
      CMsgVector::CMsgVector(v47);
      *(pResult + 8) = v47;
      v41 = v47;
    }
    v42 = *(v41 + 4);
    *(v41 + 6) = LODWORD(mins.z);
    *(v41 + 7) = v52;
    v43 = maxs.x;
    *(v41 + 4) = v42 | 7;
    *(v41 + 8) = v43;
    return GameToolEventHandlerResult_t::TOOL_EVENT_HANDLED;
  }
  else
  {
    *(pResult + 4) |= 1u;
    std::string::assign(*(pResult + 3), "", 0);
    v6 = *(pResult + 4);
    *(pResult + 4) |= 2u;
    std::string::assign(v6, "", 0);
    v7 = *(pResult + 5);
    *(pResult + 4) |= 4u;
    std::string::assign(v7, "", 0);
    v8 = *(pResult + 6);
    *(pResult + 4) |= 8u;
    if ( v8 == 0 )
    {
      v18 = operator new(0x28u);
      CMsgVector::CMsgVector(v18);
      *(pResult + 6) = v18;
      v8 = v18;
    }
    v9 = vec3_origin.x;
    v10 = vec3_origin.y;
    v11 = *(v8 + 4) | 7;
    v12 = vec3_origin.z;
    *(v8 + 6) = LODWORD(vec3_origin.x);
    *(v8 + 7) = v10;
    *(v8 + 4) = v11;
    *(v8 + 8) = v12;
    v13 = *(pResult + 7);
    *(pResult + 4) |= 0x10u;
    if ( v13 == 0 )
    {
      v20 = operator new(0x28u);
      CMsgVector::CMsgVector(v20);
      *(pResult + 7) = v20;
      v9 = vec3_origin.x;
      v13 = v20;
      v10 = vec3_origin.y;
      v12 = vec3_origin.z;
    }
    v14 = *(v13 + 4);
    v13[6] = v9;
    v13[7] = v10;
    v13[8] = v12;
    *(v13 + 4) = v14 | 7;
    v15 = *(pResult + 8);
    *(pResult + 4) |= 0x20u;
    if ( v15 == 0 )
    {
      v19 = operator new(0x28u);
      CMsgVector::CMsgVector(v19);
      *(pResult + 8) = v19;
      v9 = vec3_origin.x;
      v15 = v19;
      v10 = vec3_origin.y;
      v12 = vec3_origin.z;
    }
    v16 = *(v15 + 4);
    v15[6] = v9;
    v15[7] = v10;
    v15[8] = v12;
    *(v15 + 4) = v16 | 7;
    return GameToolEventHandlerResult_t::TOOL_EVENT_HANDLED;
  }
}


// CLoopModeGameToolHooks::OnToolSpawnEntity  (line 284, @0x00000000020c2fa0, libserver.so)  // inlines: Base, CEntityHandle, CEntityKeyValuesModifyScope, Element, FindKeyHash, GetEHandle, GetEntryIndex, GetSerialNumber, GetValue, Init, Release, TempString, _M_data, _M_rep, operator[], set_ehandle, set_has_ehandle, size, ~CEntityKeyValuesModifyScope, ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::Unserialize, CEntityKeyValuesModifyScope::Release, CUtlMemory<unsigned char, int>::Purge, Warning, CreateEntityByName, CEntitySystem::QueueSpawnEntity, CEntityKeyValues::~CEntityKeyValues, operator delete (13 total)
// strings: "Tool entity spawn: failed to specify 'classname' entity key value!\n"
// globals: CEntityKeyValues::sm_EmptyVariant
GameToolEventHandlerResult_t __fastcall CLoopModeGameToolHooks::OnToolSpawnEntity(
        CLoopModeGameToolHooks *const this,
        const SpawnEntityToolEvent_t *const msg,
        SpawnEntityToolEventResult_t *pResult)
{
  GameToolEventHandlerResult_t result; // eax
  CEntityKeyValues *v5; // rbx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // dx
  __int64 v8; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rdi
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v14; // r15
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rdx
  __int64 v19; // [rsp-8h] [rbp-98h] BYREF
  CEntityKeyValuesModifyScope_0 modify; // [rsp+0h] [rbp-90h] BYREF

  result = GameToolEventHandlerResult_t::TOOL_EVENT_IGNORED;
  if ( *(msg + 32) == 0 )
  {
    *(pResult + 6) = -1;
    *(pResult + 4) |= 1u;
    CUtlBuffer::CUtlBuffer(&modify.m_pPrevAllocator, **(msg + 3), *(**(msg + 3) - 24LL), 8);
    v5 = operator new(0x70u);
    CEntityKeyValues::CEntityKeyValues(v5);
    v19 = 0;
    modify.m_pKeyValues = 0;
    CEntityKeyValuesModifyScope::BeginModify(&v19, v5);
    if ( CEntityKeyValues::Unserialize(v5, &modify.m_pPrevAllocator) )
    {
      m_nCount = v5->m_keyHashes.m_nCount;
      if ( m_nCount <= 0 )
      {
LABEL_14:
        p_m_value = &CEntityKeyValues::sm_EmptyVariant;
      }
      else
      {
        m_nAllocated = v5->m_keyHashes.m_nAllocated;
        v8 = 0;
        while ( 1 )
        {
          if ( m_nAllocated != 0 )
          {
            m_pElements = (&v5->m_keyHashes.m_nAllocAllocated + 1);
            if ( m_nAllocated > 9 )
              m_pElements = v5->m_keyHashes.m_pElements;
          }
          else
          {
            m_pElements = 0;
          }
          if ( m_pElements[v8] == -971301790 )
            break;
          if ( m_nCount <= ++v8 )
            goto LABEL_14;
        }
        if ( v5->m_keyValues.m_nAllocated != 0 )
          v18 = v5->m_keyValues.m_pElements;
        else
          v18 = 0;
        p_m_value = &v18[v8].m_value;
      }
      m_uint64 = "";
      if ( p_m_value->m_type == 30 )
        m_uint64 = p_m_value->m_uint64;
      if ( *m_uint64 != 0 )
      {
        EntityByName = CreateEntityByName(m_uint64, -1);
        v14 = EntityByName;
        if ( EntityByName != 0 )
        {
          CEntitySystem::QueueSpawnEntity(g_pEntitySystem, EntityByName, v5);
          m_pEntity = v14->m_pEntity;
          v16 = -1;
          if ( m_pEntity != 0 )
          {
            v17 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v16 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
          }
          *(pResult + 4) |= 1u;
          *(pResult + 6) = v16;
        }
      }
      else
      {
        Warning("Tool entity spawn: failed to specify 'classname' entity key value!\n");
      }
    }
    else if ( --v5->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v5);
      operator delete(v5);
    }
    CEntityKeyValuesModifyScope::Release(&v19);
    CUtlMemory<unsigned char,int>::Purge(&modify.m_pPrevAllocator);
    return GameToolEventHandlerResult_t::TOOL_EVENT_HANDLED;
  }
  return result;
}


// CLoopModeGameToolHooks::OnToolDestroyEntity  (line 318, @0x000000000209fc30, libserver.so)  // inlines: CEntityHandle, FromIndex, GetEntryIndex, IndexToIdentity, LookupEntity
// calls: CEntitySystem::QueueDestroyEntity
void __fastcall CLoopModeGameToolHooks::OnToolDestroyEntity(
        CLoopModeGameToolHooks *const this,
        const DestroyEntityToolEvent_t *const msg)
{
  int v2; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rsi

  v2 = *(msg + 6);
  if ( (v2 + 2) > 1 )
  {
    v3 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[(v2 >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[*(msg + 6) & 0x1FF];
      if ( v4 != 0 && v2 == v4->m_EHandle.m_Index )
        CEntitySystem::QueueDestroyEntity(g_pEntitySystem, v4);
    }
  }
}


// CLoopModeGameToolHooks::OnToolDestroyAllEntities  (line 333, @0x000000000209ceb0, libserver.so)  // inlines: GetInstance
// calls: CEntitySystem::QueueDestroyEntity
// callers: CLoopModeGameToolHooks::OnToolRestartMap
void __fastcall CLoopModeGameToolHooks::OnToolDestroyAllEntities(
        CLoopModeGameToolHooks *const this,
        const DestroyAllEntitiesToolEvent_t *const msg)
{
  CEntityIdentity *i; // rbx

  for ( i = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity; i != 0; i = i->m_pNext )
  {
    while ( (*(i->m_pInstance->_vptr_IHandleEntity + 140))(i->m_pInstance, msg) != 0 )
    {
      i = i->m_pNext;
      if ( i == 0 )
        return;
    }
    CEntitySystem::QueueDestroyEntity(g_pEntitySystem, i);
  }
}


// CLoopModeGameToolHooks::OnToolRestartMap  (line 352, @0x00000000020cddb0, libserver.so)  // inlines: Base, CNetMessagePB, CUtlMemory, CUtlVector, CUtlVectorBase, DestroyAllEntitiesToolEvent_t, Element, FindKeyHash, GetValue, Purge, RemoveAll, TempString, operator[], ~CNetMessagePB, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~DestroyAllEntitiesToolEvent_t
// calls: DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent, CLoopModeGameToolHooks::OnToolDestroyAllEntities, CSpawnGroupMgrGameSystem::GetSpawnGroups, CSpawnGroupMgrGameSystem::GetWorldReference, CreateEntityByName, CEntitySystem::QueueSpawnEntity, DestroyAllEntitiesToolEvent::~DestroyAllEntitiesToolEvent, _Unwind_Resume, CUtlMemory<unsigned int, int>::Purge, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase
// globals: g_pLoopModeGameSharedState, CEntityKeyValues::sm_EmptyVariant
void __fastcall CLoopModeGameToolHooks::OnToolRestartMap(
        CLoopModeGameToolHooks *const this,
        const RestartMapToolEvent_t *const msg)
{
  unsigned __int64 v3; // r14
  IWorldReference *WorldReference; // rax
  IWorldReference *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r13
  __int16 *v10; // rcx
  int v11; // edi
  __int16 v12; // si
  __int64 v13; // rax
  __int16 *v14; // rdx
  __int64 v15; // rdx
  CEntityVariant *v16; // rax
  const char *m_uint64; // rdi
  CBaseEntity *EntityByName; // rax
  __int64 v19; // [rsp+18h] [rbp-78h]
  _QWORD v20[4]; // [rsp+20h] [rbp-70h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > list; // [rsp+40h] [rbp-50h] BYREF

  DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent(v20);
  v20[0] = off_3FF8AB0;
  CLoopModeGameToolHooks::OnToolDestroyAllEntities(this, v20);
  if ( g_pLoopModeGameSharedState->GetWorldSession() == 0 )
    goto LABEL_24;
  list.m_Size = 0;
  list.m_Memory.m_pMemory = 0;
  list.m_Memory.m_nAllocationCount = 0;
  list.m_Memory.m_nGrowSize = 0;
  CSpawnGroupMgrGameSystem::GetSpawnGroups(g_pSpawnGroupMgr, &list);
  if ( list.m_Size <= 0 )
    goto LABEL_23;
  v3 = 0;
  v19 = 4LL * (list.m_Size - 1) + 4;
  do
  {
    while ( 1 )
    {
      WorldReference = CSpawnGroupMgrGameSystem::GetWorldReference(g_pSpawnGroupMgr, list.m_Memory.m_pMemory[v3 / 4]);
      v5 = WorldReference;
      if ( WorldReference != 0 && (*(*WorldReference + 16LL))(WorldReference) != 0 )
      {
        v6 = g_pLoopModeGameSharedState->GetWorldSession();
        v7 = (*(*v6 + 152LL))(v6, v5, 0);
        if ( *v7 > 0 )
          break;
      }
LABEL_22:
      v3 += 4LL;
      if ( v3 == v19 )
        goto LABEL_23;
    }
    v8 = 0;
    v9 = 8LL * (*v7 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v10 = *(*(v7 + 8) + v8);
        v11 = *v10;
        if ( v11 <= 0 )
        {
LABEL_25:
          v16 = &CEntityKeyValues::sm_EmptyVariant;
          m_uint64 = "";
          if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
            break;
          goto LABEL_26;
        }
        v12 = v10[1];
        v13 = 0;
        while ( v12 == 0 )
        {
          if ( *(4 * v13) == -971301790 )
            goto LABEL_16;
LABEL_13:
          if ( v11 <= ++v13 )
            goto LABEL_25;
        }
        v14 = v10 + 2;
        if ( v12 > 9 )
          v14 = *(v10 + 1);
        if ( *&v14[2 * v13] != -971301790 )
          goto LABEL_13;
LABEL_16:
        v15 = v10[21] != 0 ? *(v10 + 6) : 0LL;
        v16 = (v15 + 24 * v13);
        m_uint64 = "";
        if ( v16->m_type == 30 )
          break;
LABEL_26:
        if ( asc_32DB004[2] == 0 )
          goto LABEL_27;
LABEL_20:
        EntityByName = CreateEntityByName(m_uint64, -1);
        if ( EntityByName == 0 )
          goto LABEL_27;
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, EntityByName, *(*(v7 + 8) + v8));
        v8 += 8;
        if ( v8 == v9 )
          goto LABEL_22;
      }
      m_uint64 = v16->m_uint64;
      if ( *v16->m_pszString != 0 )
        goto LABEL_20;
LABEL_27:
      v8 += 8;
    }
    while ( v8 != v9 );
    v3 += 4LL;
  }
  while ( v3 != v19 );
LABEL_23:
  list.m_Size = 0;
  if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&list.m_Memory);
    if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&list.m_Memory);
  }
LABEL_24:
  v20[0] = &off_3FF89F0;
  DestroyAllEntitiesToolEvent::~DestroyAllEntitiesToolEvent(v20);
}


// CLoopModeGameToolHooks::OnToolTraceRayServer  (line 389, @0x00000000020ade10, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, DistTo, FastSqrt, Init, Length, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetInteractsWith, TraceRay, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorSubtract, VectorToCMsgVector, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, mutable_impact, mutable_normal, set_distance, set_ehandle, set_fraction, set_has_distance, set_has_ehandle, set_has_hit, set_has_impact, set_has_normal, set_has_x, set_has_y, set_has_z, set_hit, set_x, set_y, set_z, start
// calls: CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay, operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// globals: g_pPhysicsQuery
GameToolEventHandlerResult_t __fastcall CLoopModeGameToolHooks::OnToolTraceRayServer(
        CLoopModeGameToolHooks *const this,
        const TraceRayServerToolEvent_t *const msg,
        ToolTraceRayResult_t *pResult)
{
  float *containing_type; // rax
  float v6; // xmm4_4
  float v7; // xmm7_4
  float *options; // rax
  float v9; // xmm5_4
  float v10; // xmm6_4
  bool v11; // al
  int v12; // edx
  bool v13; // zf
  CMsgVector *v14; // rax
  int v15; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v18; // rax
  int v19; // eax
  int v21; // edx
  vec_t v22; // xmm0_4
  vec_t v23; // xmm0_4
  CMsgVector *v24; // rax
  int v25; // edx
  vec_t v26; // xmm0_4
  vec_t v27; // xmm0_4
  int v28; // eax
  float fraction; // xmm0_4
  uint32 m_nEntityId; // eax
  CMsgVector *v31; // r12
  CMsgVector *v32; // r12
  CMsgVector *v33; // r12
  CMsgVector *v34; // r12
  float v35; // [rsp+8h] [rbp-168h]
  float v36; // [rsp+Ch] [rbp-164h]
  float v37; // [rsp+10h] [rbp-160h]
  float v38; // [rsp+14h] [rbp-15Ch]
  float v39; // [rsp+18h] [rbp-158h]
  float v40; // [rsp+1Ch] [rbp-154h]
  CGameQueryAttributes attributes; // [rsp+20h] [rbp-150h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-120h] BYREF
  CGameTrace hit; // [rsp+A0h] [rbp-D0h] BYREF

  attributes.m_nHierarchyId = 0;
  attributes.m_nInteractsExclude = 0;
  attributes.m_nInteractsAs = 0;
  attributes.m_nEntityIdToIgnore = -1;
  attributes.m_nCollisionGroup = 3;
  hit.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  *(&attributes.RnQueryShapeAttr_t + 31) = *(&attributes.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  attributes.m_nObjectSetMask = 7;
  attributes.m_nInteractsWith = 4;
  memset(&hit.m_ShapeAttributes, 0, 31);
  CGameTrace::Init(&hit);
  containing_type = *(msg + 3);
  if ( containing_type == 0 )
    containing_type = TraceRayServerToolEvent::default_instance_->containing_type_;
  v6 = containing_type[7];
  v40 = containing_type[8];
  v7 = containing_type[6];
  options = *(msg + 4);
  v39 = v6;
  v38 = v7;
  if ( options == 0 )
    options = TraceRayServerToolEvent::default_instance_->options_;
  v9 = options[7];
  v10 = options[6];
  ray.m_Start.w = 0.0;
  v36 = v9;
  v35 = v10;
  v37 = options[8];
  memset(&ray.m_Delta.w, 0, 40);
  ray.m_Delta.x = v10 - v7;
  ray.m_Delta.y = v9 - v6;
  ray.m_Delta.z = v37 - v40;
  ray.m_IsRay = 1;
  ray.m_Start.x = v7;
  ray.m_Start.y = v6;
  ray.m_Start.z = v40;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v11 = CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &attributes, &hit);
  v12 = *(pResult + 4);
  *(pResult + 32) = v11;
  v13 = !v11;
  v14 = *(pResult + 3);
  *(pResult + 4) = v12 | 1;
  *(pResult + 4) = v12 | 3;
  if ( v13 )
  {
    if ( v14 == 0 )
    {
      v32 = operator new(0x28u);
      CMsgVector::CMsgVector(v32);
      *(pResult + 3) = v32;
      v14 = v32;
    }
    v15 = *(v14 + 4);
    *(v14 + 6) = LODWORD(hit.endpos.x);
    *(v14 + 4) = v15 | 1;
    y = hit.endpos.y;
    *(v14 + 4) = v15 | 3;
    *(v14 + 7) = y;
    z = hit.endpos.z;
    *(v14 + 4) = v15 | 7;
    *(v14 + 8) = z;
    v18 = *(pResult + 5);
    *(pResult + 4) |= 4u;
    if ( v18 == 0 )
    {
      v31 = operator new(0x28u);
      CMsgVector::CMsgVector(v31);
      *(pResult + 5) = v31;
      v18 = v31;
    }
    *(v18 + 6) = 0;
    *(v18 + 7) = 0;
    *(v18 + 8) = 1065353216;
    *(v18 + 4) |= 7u;
    v19 = *(pResult + 4);
    *(pResult + 12) = 1065353216;
    *(pResult + 13) = -1;
    *(pResult + 4) = v19 | 0x38;
    *(pResult + 9) = fsqrt((((v38 - v35) * (v38 - v35)) + ((v39 - v36) * (v39 - v36))) + ((v40 - v37) * (v40 - v37)));
  }
  else
  {
    if ( v14 == 0 )
    {
      v34 = operator new(0x28u);
      CMsgVector::CMsgVector(v34);
      *(pResult + 3) = v34;
      v14 = v34;
    }
    v21 = *(v14 + 4);
    *(v14 + 6) = LODWORD(hit.endpos.x);
    *(v14 + 4) = v21 | 1;
    v22 = hit.endpos.y;
    *(v14 + 4) = v21 | 3;
    *(v14 + 7) = v22;
    v23 = hit.endpos.z;
    *(v14 + 4) = v21 | 7;
    *(v14 + 8) = v23;
    v24 = *(pResult + 5);
    *(pResult + 4) |= 4u;
    if ( v24 == 0 )
    {
      v33 = operator new(0x28u);
      CMsgVector::CMsgVector(v33);
      *(pResult + 5) = v33;
      v24 = v33;
    }
    v25 = *(v24 + 4);
    *(v24 + 6) = LODWORD(hit.plane.normal.x);
    *(v24 + 4) = v25 | 1;
    v26 = hit.plane.normal.y;
    *(v24 + 4) = v25 | 3;
    *(v24 + 7) = v26;
    v27 = hit.plane.normal.z;
    *(v24 + 4) = v25 | 7;
    *(v24 + 8) = v27;
    v28 = *(pResult + 4);
    *(pResult + 9) = LODWORD(hit.plane.dist);
    fraction = hit.fraction;
    *(pResult + 4) = v28 | 0x38;
    m_nEntityId = hit.m_ShapeAttributes.m_nEntityId;
    *(pResult + 12) = fraction;
    *(pResult + 13) = m_nEntityId;
  }
  return GameToolEventHandlerResult_t::TOOL_EVENT_HANDLED;
}


// CLoopModeGame::RegisterEventMap  (line 427, @0x00000000021261b0, libserver.so)
// calls: EventMapRegister
void __fastcall CLoopModeGame::RegisterEventMap(
        CLoopModeGame *const this,
        CEventDispatcher<CEventIDManager_Default> *pEventDispatcher,
        EventMapRegistrationType_t nRegistrationType)
{
  EventMapRegister(pEventDispatcher, this, nRegistrationType, 0);
}


// IsBackgroundMap  (line 518, @0x00000000020b1b70, libserver.so)
// callers: CSource2Server::GetServerGameDLLFlags, CSource2GameEntities::ShouldClientReceiveStringTableUserData, CDOTAGCServerSystem::UpdateGCServerInfo
// globals: g_pLoopModeGameSharedState
bool __cdecl IsBackgroundMap()
{
  return g_pLoopModeGameSharedState != 0
      && (*(g_pLoopModeGameSharedState->_vptr_ILoopModeGameSharedState + 5))(g_pLoopModeGameSharedState);
}


// InitManifestDesc<LoopModeGame::CTemplateArg>  (line 537, @0x00000000020b1ba0, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: __static_initialization_and_destruction_0
// globals: `guard variable for'InitManifestDesc<LoopModeGame::CTemplateArg>(LoopModeGame::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<LoopModeGame::CTemplateArg>(LoopModeGame::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<LoopModeGame::CTemplateArg>(LoopModeGame::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<LoopModeGame::CTemplateArg>(LoopModeGame::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<LoopModeGame::CTemplateArg>(LoopModeGame::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<LoopModeGame::CTemplateArg>(LoopModeGame::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<LoopModeGame::CTemplateArg>(LoopModeGame::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<LoopModeGame::CTemplateArg>(LoopModeGame::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<LoopModeGame::CTemplateArg>(LoopModeGame::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<LoopModeGame::CTemplateArg>(LoopModeGame::CTemplateArg &)::s_Manifest;
}


// EventMapRegister  (line 571, @0x00000000020ef9f0, libserver.so)  // inlines: CCopyableUtlVector, CUtlDelegate<CLoopModeGame, CLoopModeGame>, CUtlMemory, CUtlVector, CUtlVectorBase, Convert<CLoopModeGame, void (CLoopModeGame::*)(const EventFrameBoundary_t&), void (detail::GenericClass::*)()>, Convert<CLoopModeGame, void (CLoopModeGame::*)(const EventServerPostSimulate_t&), void (detail::GenericClass::*)()>, Convert<CLoopModeGame, void (CLoopModeGame::*)(const EventServerSimulate_t&), void (detail::GenericClass::*)()>, Element, FastDelegate1<CLoopModeGame, CLoopModeGame>, Find, GetEventID, IsIdxValid, IsValidIndex, LeftChild, Lock, Node_t, Purge, RegisterEventListener, RemoveAll, RightChild, Schema_StaticBinding, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, UnregisterEventListener, UnregisterEventListener_Abstract, UtlMakeDelegate<CLoopModeGame, CLoopModeGame, const EventFrameBoundary_t&, void>, UtlMakeDelegate<CLoopModeGame, CLoopModeGame, const EventServerPostSimulate_t&, void>, UtlMakeDelegate<CLoopModeGame, CLoopModeGame, const EventServerSimulate_t&, void>, bindmemfunc<CLoopModeGame, void (CLoopModeGame::*)(const EventFrameBoundary_t&)>, bindmemfunc<CLoopModeGame, void (CLoopModeGame::*)(const EventServerPostSimulate_t&)>, bindmemfunc<CLoopModeGame, void (CLoopModeGame::*)(const EventServerSimulate_t&)>, operator(), operator[], ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~Node_t
// calls: EventServerSimulate_t::Schema_VerifyBindingIsRegistered, CEventDispatcher_Identified<CEventIDManager_Default>::RegisterEventListener_Abstract, EventServerPostSimulate_t::Schema_VerifyBindingIsRegistered, EventFrameBoundary_t::Schema_VerifyBindingIsRegistered, ThreadGetCurrentId, CEventDispatcher_Base::UnregisterEventListener_Base, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::Purge, CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CLoopModeGame::RegisterEventMap
// strings: "CLoopModeGame::OnServerSimulate", "CLoopModeGame::OnServerPostSimulate", "CLoopModeGame::OnFrameBoundary"
// globals: CLoopModeGame::OnServerSimulate(EventServerSimulate_t const&), CLoopModeGame::OnServerPostSimulate(EventServerPostSimulate_t const&), CLoopModeGame::OnFrameBoundary(EventFrameBoundary_t const&)
void __fastcall EventMapRegister(
        CEventDispatcher<CEventIDManager_Default> *pEventDispatcher,
        CLoopModeGame *pClass,
        EventMapRegistrationType_t nType,
        int nPriority)
{
  __int64 v6; // rdi
  detail::GenericClass *v7; // r12
  signed __int64 CurrentId; // rsi
  unsigned int m_Root; // r15d
  UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t,unsigned int> *m_pMemory; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  unsigned int v13; // eax
  UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t,unsigned int> *v14; // rax
  __int64 v15; // rdi
  detail::GenericClass *v16; // r12
  signed __int64 v17; // rsi
  unsigned int m_Left; // r15d
  UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t,unsigned int> *v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // r12
  unsigned int v22; // eax
  UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t,unsigned int> *v23; // rax
  __int64 v24; // rdi
  detail::GenericClass *v25; // r12
  signed __int64 v26; // rsi
  unsigned int m_Right; // r15d
  UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t,unsigned int> *v28; // rax
  __int64 v29; // r14
  unsigned __int64 v30; // r12
  unsigned int v31; // eax
  UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*,CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>,unsigned int,bool (*)(const ISchemaBinding* const&,const ISchemaBinding* const&)>::Node_t,unsigned int> *v32; // rdx
  CUtlAbstractDelegate v34; // [rsp+10h] [rbp-70h] BYREF
  CUtlAbstractDelegate delegate; // [rsp+30h] [rbp-50h] BYREF
  int v36; // [rsp+48h] [rbp-38h]
  int v37; // [rsp+4Ch] [rbp-34h]

  if ( nType != EventMapRegistrationType_t::EVENT_MAP_REGISTER )
  {
    EventServerSimulate_t::Schema_VerifyBindingIsRegistered();
    v34.m_pFunction.__delta = 0;
    v7 = EventServerSimulate_t::s_pSchemaBinding;
    v34.m_pFunction.__pfn = CLoopModeGame::OnServerSimulate;
    v34.m_pthis = pClass;
    if ( EventServerSimulate_t::s_pSchemaBinding != 0 )
    {
      CurrentId = ThreadGetCurrentId(v6);
      if ( CurrentId != pEventDispatcher->m_Lock.m_ownerID
        && _InterlockedCompareExchange64(pEventDispatcher, CurrentId, 0) != 0 )
      {
        _mm_pause();
        CThreadFastMutex::Lock(pEventDispatcher, CurrentId, 0);
      }
      else
      {
        ++pEventDispatcher->m_Lock.m_depth;
      }
      m_Root = pEventDispatcher->m_EventListenerMap.m_Tree.m_Root;
      LODWORD(delegate.m_pFunction.__pfn) = 0;
      delegate.m_pFunction.__delta = 0;
      v36 = 0;
      v37 = 0;
      delegate.m_pthis = v7;
      if ( m_Root == -1 )
      {
        v11 = 0xFFFFFFFFLL;
        v13 = 0;
      }
      else
      {
        m_pMemory = pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
        while ( 1 )
        {
          while ( 1 )
          {
            v11 = m_Root;
            v12 = m_Root;
            if ( !pEventDispatcher->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(&delegate, &m_pMemory[v12].m_Data) )
              break;
            m_pMemory = pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
            m_Root = m_pMemory[m_Root].m_Left;
            if ( m_Root == -1 )
              goto LABEL_14;
          }
          if ( !pEventDispatcher->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(
                  &pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v12].m_Data,
                  &delegate) )
            break;
          m_pMemory = pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[v12].m_Right;
          if ( m_Root == -1 )
          {
LABEL_14:
            v11 = 0xFFFFFFFFLL;
            v13 = v37 & 0xC0000000;
            goto LABEL_15;
          }
        }
        v13 = v37 & 0xC0000000;
      }
LABEL_15:
      LODWORD(delegate.m_pFunction.__pfn) = 0;
      if ( v13 == 0 )
      {
        CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&delegate.m_pFunction.__delta);
        if ( (v37 & 0xC0000000) == 0 )
          CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&delegate.m_pFunction.__delta);
      }
      if ( v11 < pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_nAllocationCount
        && pEventDispatcher->m_EventListenerMap.m_Tree.m_LastAlloc.index >= m_Root
        && m_Root != -1 )
      {
        v14 = &pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[m_Root];
        if ( v14->m_Left != m_Root )
          CEventDispatcher_Base::UnregisterEventListener_Base(pEventDispatcher, &v34, &v14->m_Data.elem);
      }
      if ( --pEventDispatcher->m_Lock.m_depth == 0 )
        ThreadInterlockedExchange64(pEventDispatcher, 0);
    }
    EventServerPostSimulate_t::Schema_VerifyBindingIsRegistered();
    v34.m_pFunction.__delta = 0;
    v16 = EventServerPostSimulate_t::s_pSchemaBinding;
    v34.m_pFunction.__pfn = CLoopModeGame::OnServerPostSimulate;
    v34.m_pthis = pClass;
    if ( EventServerPostSimulate_t::s_pSchemaBinding != 0 )
    {
      v17 = ThreadGetCurrentId(v15);
      if ( v17 != pEventDispatcher->m_Lock.m_ownerID && _InterlockedCompareExchange64(pEventDispatcher, v17, 0) != 0 )
      {
        _mm_pause();
        CThreadFastMutex::Lock(pEventDispatcher, v17, 0);
      }
      else
      {
        ++pEventDispatcher->m_Lock.m_depth;
      }
      m_Left = pEventDispatcher->m_EventListenerMap.m_Tree.m_Root;
      LODWORD(delegate.m_pFunction.__pfn) = 0;
      delegate.m_pFunction.__delta = 0;
      v36 = 0;
      v37 = 0;
      delegate.m_pthis = v16;
      if ( m_Left == -1 )
      {
        v20 = 0xFFFFFFFFLL;
        v22 = 0;
      }
      else
      {
        v19 = pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
        while ( 1 )
        {
          while ( 1 )
          {
            v20 = m_Left;
            v21 = m_Left;
            if ( !pEventDispatcher->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(&delegate, &v19[v21].m_Data) )
              break;
            v19 = pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
            m_Left = v19[m_Left].m_Left;
            if ( m_Left == -1 )
              goto LABEL_33;
          }
          if ( !pEventDispatcher->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(
                  &pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v21].m_Data,
                  &delegate) )
            break;
          v19 = pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
          m_Left = v19[v21].m_Right;
          if ( m_Left == -1 )
          {
LABEL_33:
            v20 = 0xFFFFFFFFLL;
            v22 = v37 & 0xC0000000;
            goto LABEL_34;
          }
        }
        v22 = v37 & 0xC0000000;
      }
LABEL_34:
      LODWORD(delegate.m_pFunction.__pfn) = 0;
      if ( v22 == 0 )
      {
        CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&delegate.m_pFunction.__delta);
        if ( (v37 & 0xC0000000) == 0 )
          CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&delegate.m_pFunction.__delta);
      }
      if ( pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_nAllocationCount > v20
        && m_Left <= pEventDispatcher->m_EventListenerMap.m_Tree.m_LastAlloc.index
        && m_Left != -1 )
      {
        v23 = &pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[m_Left];
        if ( m_Left != v23->m_Left )
          CEventDispatcher_Base::UnregisterEventListener_Base(pEventDispatcher, &v34, &v23->m_Data.elem);
      }
      if ( --pEventDispatcher->m_Lock.m_depth == 0 )
        ThreadInterlockedExchange64(pEventDispatcher, 0);
    }
    EventFrameBoundary_t::Schema_VerifyBindingIsRegistered();
    v34.m_pFunction.__delta = 0;
    v25 = EventFrameBoundary_t::s_pSchemaBinding;
    v34.m_pFunction.__pfn = CLoopModeGame::OnFrameBoundary;
    v34.m_pthis = pClass;
    if ( EventFrameBoundary_t::s_pSchemaBinding != 0 )
    {
      v26 = ThreadGetCurrentId(v24);
      if ( v26 != pEventDispatcher->m_Lock.m_ownerID && _InterlockedCompareExchange64(pEventDispatcher, v26, 0) != 0 )
      {
        _mm_pause();
        CThreadFastMutex::Lock(pEventDispatcher, v26, 0);
      }
      else
      {
        ++pEventDispatcher->m_Lock.m_depth;
      }
      m_Right = pEventDispatcher->m_EventListenerMap.m_Tree.m_Root;
      LODWORD(delegate.m_pFunction.__pfn) = 0;
      delegate.m_pFunction.__delta = 0;
      v36 = 0;
      v37 = 0;
      delegate.m_pthis = v25;
      if ( m_Right == -1 )
      {
        v29 = 0xFFFFFFFFLL;
        v31 = 0;
      }
      else
      {
        v28 = pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
        while ( 1 )
        {
          while ( 1 )
          {
            v29 = m_Right;
            v30 = m_Right;
            if ( !pEventDispatcher->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(&delegate, &v28[v30].m_Data) )
              break;
            v28 = pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
            m_Right = v28[m_Right].m_Left;
            if ( m_Right == -1 )
              goto LABEL_52;
          }
          if ( !pEventDispatcher->m_EventListenerMap.m_Tree.m_LessFunc.m_LessFunc(
                  &pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[v30].m_Data,
                  &delegate) )
            break;
          v28 = pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory;
          m_Right = v28[v30].m_Right;
          if ( m_Right == -1 )
          {
LABEL_52:
            v29 = 0xFFFFFFFFLL;
            v31 = v37 & 0xC0000000;
            goto LABEL_53;
          }
        }
        v31 = v37 & 0xC0000000;
      }
LABEL_53:
      LODWORD(delegate.m_pFunction.__pfn) = 0;
      if ( v31 == 0 )
      {
        CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&delegate.m_pFunction.__delta);
        if ( (v37 & 0xC0000000) == 0 )
          CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t,int>::Purge(&delegate.m_pFunction.__delta);
      }
      if ( v29 < pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_nAllocationCount
        && m_Right <= pEventDispatcher->m_EventListenerMap.m_Tree.m_LastAlloc.index
        && m_Right != -1 )
      {
        v32 = &pEventDispatcher->m_EventListenerMap.m_Tree.m_Elements.m_pMemory[m_Right];
        if ( m_Right != v32->m_Left )
          CEventDispatcher_Base::UnregisterEventListener_Base(pEventDispatcher, &v34, &v32->m_Data.elem);
      }
      if ( --pEventDispatcher->m_Lock.m_depth == 0 )
        ThreadInterlockedExchange64(pEventDispatcher, 0);
    }
  }
  else
  {
    EventServerSimulate_t::Schema_VerifyBindingIsRegistered();
    delegate.m_pFunction.__delta = 0;
    delegate.m_pFunction.__pfn = CLoopModeGame::OnServerSimulate;
    delegate.m_pthis = pClass;
    CEventDispatcher_Identified<CEventIDManager_Default>::RegisterEventListener_Abstract(
      pEventDispatcher,
      &delegate,
      1u,
      1,
      EventServerSimulate_t::s_pSchemaBinding,
      nPriority,
      "CLoopModeGame::OnServerSimulate");
    EventServerPostSimulate_t::Schema_VerifyBindingIsRegistered();
    delegate.m_pFunction.__delta = 0;
    delegate.m_pthis = pClass;
    delegate.m_pFunction.__pfn = CLoopModeGame::OnServerPostSimulate;
    CEventDispatcher_Identified<CEventIDManager_Default>::RegisterEventListener_Abstract(
      pEventDispatcher,
      &delegate,
      1u,
      1,
      EventServerPostSimulate_t::s_pSchemaBinding,
      nPriority,
      "CLoopModeGame::OnServerPostSimulate");
    EventFrameBoundary_t::Schema_VerifyBindingIsRegistered();
    delegate.m_pFunction.__delta = 0;
    delegate.m_pthis = pClass;
    delegate.m_pFunction.__pfn = CLoopModeGame::OnFrameBoundary;
    CEventDispatcher_Identified<CEventIDManager_Default>::RegisterEventListener_Abstract(
      pEventDispatcher,
      &delegate,
      1u,
      1,
      EventFrameBoundary_t::s_pSchemaBinding,
      nPriority,
      "CLoopModeGame::OnFrameBoundary");
  }
}


// CMapLoadEntityFilter::~CMapLoadEntityFilter  (line 596, @0x00000000020f21b0, libserver.so)  // inlines: ~ISpawnGroupEntityFilter
void __fastcall CMapLoadEntityFilter::~CMapLoadEntityFilter(CMapLoadEntityFilter *const this)
{
  this->_vptr_ISpawnGroupEntityFilter = off_3FCAF10;  // vptr: ISpawnGroupEntityFilter
}


// CMapLoadEntityFilter::~CMapLoadEntityFilter  (line 596, @0x00000000020f4c20, libserver.so)  // inlines: ~CMapLoadEntityFilter, ~ISpawnGroupEntityFilter
// calls: operator delete
void __fastcall CMapLoadEntityFilter::~CMapLoadEntityFilter(CMapLoadEntityFilter *const this)
{
  this->_vptr_ISpawnGroupEntityFilter = off_3FCAF10;  // vptr: ISpawnGroupEntityFilter
  operator delete(this);
}


// CMapLoadEntityFilter::FilterSpawnGroupEntities  (line 599, @0x0000000002114360, libserver.so)  // inlines: AddToTail, AssignTo, Base, CopyConstruct<const CEntityKeyValues*>, Element, FindKeyHash, GetValue, GetValue<bool>, GrowMemory, TempString, _V_strcmp, operator[]
// calls: Warning, VariantFieldTypeName, CUtlMemory<const CEntityKeyValues*, int>::Grow
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n"
// globals: jpt_21144B4, CEntityKeyValues::sm_EmptyVariant
void __fastcall CMapLoadEntityFilter::FilterSpawnGroupEntities(
        CMapLoadEntityFilter *const this,
        SpawnGroupHandle_t h,
        bool bIsPrecaching,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pInKeyValues,
        CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *const outKeyValues)
{
  CUtlVectorBase<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> >::CAllocator *p_m_Memory; // r9
  unsigned __int64 v7; // r12
  __int64 v8; // r14
  const CEntityKeyValues *v9; // rbx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v12; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // rdx
  CEntityVariant *p_m_value; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v16; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v18; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rdx
  CEntityVariant *v20; // rdx
  int16 m_type; // ax
  __int64 m_Size; // rax
  int v23; // edx
  const CEntityKeyValues **v24; // rax
  char m_char; // al
  const char *v26; // rax
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *v27; // [rsp+8h] [rbp-48h]
  CUtlVectorBase<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> >::CAllocator *v28; // [rsp+10h] [rbp-40h]
  CUtlVectorBase<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> >::CAllocator *v29; // [rsp+10h] [rbp-40h]
  int v30; // [rsp+10h] [rbp-40h]
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *v31; // [rsp+18h] [rbp-38h]
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *v32; // [rsp+18h] [rbp-38h]
  CUtlVectorBase<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> >::CAllocator *v33; // [rsp+18h] [rbp-38h]

  if ( pInKeyValues == 0 || pInKeyValues->m_Size <= 0 )
    return;
  p_m_Memory = &outKeyValues->m_Memory;
  v7 = 0;
  v8 = 8LL * (pInKeyValues->m_Size - 1) + 8;
  do
  {
    v9 = pInKeyValues->m_Memory.m_pMemory[v7 / 8];
    m_nCount = v9->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_28:
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
      if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
        goto LABEL_15;
      goto LABEL_29;
    }
    m_nAllocated = v9->m_keyHashes.m_nAllocated;
    v12 = 0;
    while ( m_nAllocated == 0 )
    {
      if ( *(4 * v12) == -971301790 )
        goto LABEL_12;
LABEL_9:
      if ( m_nCount <= ++v12 )
        goto LABEL_28;
    }
    m_pElements = (&v9->m_keyHashes.m_nAllocAllocated + 1);
    if ( m_nAllocated > 9 )
      m_pElements = v9->m_keyHashes.m_pElements;
    if ( m_pElements[v12] != -971301790 )
      goto LABEL_9;
LABEL_12:
    if ( v9->m_keyValues.m_nAllocated != 0 )
      v14 = v9->m_keyValues.m_pElements;
    else
      v14 = 0;
    p_m_value = &v14[v12].m_value;
    if ( p_m_value->m_type == 30 )
    {
LABEL_15:
      if ( *p_m_value->m_pszString != 0 )
        goto LABEL_16;
      goto LABEL_30;
    }
LABEL_29:
    if ( asc_32DB004[2] != 0 )
    {
LABEL_16:
      if ( m_nCount > 0 )
      {
        v16 = v9->m_keyHashes.m_nAllocated;
        for ( i = 0; m_nCount > i; ++i )
        {
          if ( v16 != 0 )
          {
            v18 = (&v9->m_keyHashes.m_nAllocAllocated + 1);
            if ( v16 > 9 )
              v18 = v9->m_keyHashes.m_pElements;
            if ( v18[i] == 1210602050 )
            {
LABEL_24:
              if ( v9->m_keyValues.m_nAllocated != 0 )
                v19 = v9->m_keyValues.m_pElements;
              else
                v19 = 0;
              v20 = &v19[i].m_value;
              m_type = v20->m_type;
              if ( m_type != 0 )
                goto LABEL_27;
              goto LABEL_33;
            }
          }
          else if ( *(4 * i) == 1210602050 )
          {
            goto LABEL_24;
          }
        }
      }
      v20 = &CEntityKeyValues::sm_EmptyVariant;
      m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
      if ( m_type != 0 )
      {
LABEL_27:
        switch ( m_type )
        {
          case 1:
            m_char = v20->m_float != 0.0;
            goto LABEL_39;
          case 5:
          case 37:
            m_char = v20->m_int != 0;
            goto LABEL_39;
          case 6:
            m_char = v20->m_char;
            goto LABEL_39;
          case 26:
          case 33:
            m_char = v20->m_uint64 != 0;
            goto LABEL_39;
          case 30:
            if ( strcmp(v20->m_pszString, "0") == 0
              || strcmp(v20->m_pszString, "false") == 0
              || strcmp(v20->m_pszString, "no") == 0 )
            {
              break;
            }
            if ( strcmp(v20->m_pszString, "1") == 0
              || strcmp(v20->m_pszString, "true") == 0
              || strcmp(v20->m_pszString, "yes") == 0 )
            {
              goto LABEL_30;
            }
            v28 = p_m_Memory;
            v31 = outKeyValues;
            Warning("Invalid conversion : CString '%s' to bool\n", v20->m_pszString);
            outKeyValues = v31;
            p_m_Memory = v28;
            break;
          case 34:
            m_char = v20->m_float64 != 0.0;
LABEL_39:
            if ( m_char == 0 )
              break;
            goto LABEL_30;
          default:
            v29 = p_m_Memory;
            v32 = outKeyValues;
            v26 = VariantFieldTypeName(m_type);
            Warning("No conversion from %s to bool now\n", v26);
            p_m_Memory = v29;
            outKeyValues = v32;
            break;
        }
      }
LABEL_33:
      m_Size = outKeyValues->m_Size;
      v23 = outKeyValues->m_Size;
      if ( m_Size == outKeyValues->m_Memory.m_nAllocationCount )
      {
        v27 = outKeyValues;
        v30 = outKeyValues->m_Size;
        v33 = p_m_Memory;
        CUtlMemory<CEntityKeyValues const*,int>::Grow(p_m_Memory, 1);
        outKeyValues = v27;
        m_Size = v30;
        p_m_Memory = v33;
        v23 = v27->m_Size;
      }
      outKeyValues->m_Size = v23 + 1;
      v24 = &outKeyValues->m_Memory.m_pMemory[m_Size];
      if ( v24 != 0 )
        *v24 = v9;
    }
LABEL_30:
    v7 += 8LL;
  }
  while ( v7 != v8 );
}


// CLoopModeGame::CLoopModeGame  (line 626, @0x00000000020c3200, libserver.so)  // inlines: CCommandMemberInitializer_OnPrintSpawnGroupStatus, CConCommandMemberAccessor, CLoopModeBase, CRenderAttributes, CUtlAttributeList, CUtlAttributeListChunk, CUtlIntrusiveList, CUtlString, CWeakHandle, Clear, ConstantBufferAttr_t, FromUntypedHandleUnchecked, Init, ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>, ReleaseValueFromAttribute<CUtlString>, SetOwner, StaticInvalidHandle, StoreAlignedIntSIMD<(ESIMDLevel)20u>, TextureAttrForStorage_t, Vector4D, _mm_store_ps, memset, operator=, ~CCommandMemberInitializer_OnPrintSpawnGroupStatus, ~CUtlString
// calls: ConCommand::ConCommand, LoggingSystem_IsChannelEnabled, CUtlString::Clear, LoggingSystem_Log, CRenderAttributes::~CRenderAttributes, CConCommandMemberAccessor<CLoopModeGame>::~CConCommandMemberAccessor, _Unwind_Resume, CUtlString::FreeMemoryBlock, CUtlAttributeList<void*, 4, void*>::~CUtlAttributeList, CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::~CUtlAttributeList, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t>::~CUtlAttributeList, CUtlAttributeList<int, 8, int>::~CUtlAttributeList (14 total)
// callers: CLoopModeFactory<CLoopModeGame>::CreateLoopMode
// strings: "Show status of all spawn groups.", "SV", "%s:  CLoopModeGame constructed\n"
// globals: CLoopModeGame::OnPrintSpawnGroupStatus(CCommandContext const&,CCommand const&), g_pLoopModeGameSharedState
void __fastcall CLoopModeGame::CLoopModeGame(CLoopModeGame *const this)
{
  CLoopModeGame *m_pViewGameAttrs; // rax
  CLoopModeGame *p_m_matrix4x4Attrs; // rax
  CLoopModeGame *p_m_intAttrs; // rax
  CRenderAttributes::TextureAttrForStorage_t *m_FixedValues; // rdx
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t> *p_m_textureAttrs; // r15
  CLoopModeGame *v7; // rax
  __int64 v8; // rax
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t> *v9; // rax
  CRenderAttributes::ConstantBufferAttr_t *v10; // rdx
  CLoopModeGame *v11; // rax
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t> *p_m_constantBufferAttrs; // rax
  CLoopModeGame *p_m_ptrAttrs; // rax
  __int64 v14; // r12
  CUtlString *v15; // r14
  CLoopModeGame *p_m_stringAttrs; // r15
  vec_t x; // xmm0_4
  __int64 v18; // rdi
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4

  this->_vptr_ILoopMode = &off_3FFB8D0;
  this->m_pRequiredManifests = 0;
  this->_vptr_ILoopModeGameSharedState = off_3FFB960;
  ConCommand::ConCommand(
    &this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor,
    &stru_32DB07A.m_dirtyScales.m_Memory.m_pMemory + 2,
    &this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.ICommandCallback,
    "Show status of all spawn groups.",
    0,
    0);
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FFB770;
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FFB818;
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FFB830;
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.m_Func.__pfn = CLoopModeGame::OnPrintSpawnGroupStatus;
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  this->m_pWorldSession = 0;
  this->m_Mode = ClientServerMode_t::CLIENTSERVERMODE_NONE;
  this->m_bInMainMenu = 0;
  this->m_bIsInHeadlessMode = 0;
  this->m_bLoopSuccessfullyActivated = 0;
  this->m_bBackgroundMap = 0;
  this->m_bIsLevelTransition = 0;
  *this->m_pViewGameAttrs[0].m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_pViewGameAttrs[0].m_vec4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  if ( this->m_pViewGameAttrs != this->m_pViewGameAttrs[0].m_vec4Attrs.m_fixedStorage.m_FixedValues )
  {
    m_pViewGameAttrs = this->m_pViewGameAttrs;
    do
    {
      m_pViewGameAttrs->CLoopModeBase = Four_Zeros;
      m_pViewGameAttrs = (m_pViewGameAttrs + 16);
    }
    while ( this->m_pViewGameAttrs[0].m_vec4Attrs.m_fixedStorage.m_FixedValues != m_pViewGameAttrs );
  }
  this->m_pViewGameAttrs[0].m_vec4Attrs.m_pParent = 0;
  this->m_pViewGameAttrs[0].m_vec4Attrs.m_pOverflow.m_pHead = 0;
  *this->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  if ( &this->m_pViewGameAttrs[0].m_matrix4x4Attrs != this->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_FixedValues )
  {
    p_m_matrix4x4Attrs = &this->m_pViewGameAttrs[0].m_matrix4x4Attrs;
    do
    {
      p_m_matrix4x4Attrs->CLoopModeBase = Four_Zeros;
      p_m_matrix4x4Attrs = (p_m_matrix4x4Attrs + 16);
    }
    while ( this->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_FixedValues != p_m_matrix4x4Attrs );
  }
  this->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_pParent = 0;
  this->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_pOverflow.m_pHead = 0;
  *this->m_pViewGameAttrs[0].m_intAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_pViewGameAttrs[0].m_intAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  *this->m_pViewGameAttrs[0].m_intAttrs.m_fixedStorage.m_nFixedKeys[1].m_i32 = 0;
  *&this->m_pViewGameAttrs[0].m_intAttrs.m_fixedStorage.m_nFixedKeys[1].m_i32[2] = 0;
  if ( &this->m_pViewGameAttrs[0].m_intAttrs != this->m_pViewGameAttrs[0].m_intAttrs.m_fixedStorage.m_FixedValues )
  {
    p_m_intAttrs = &this->m_pViewGameAttrs[0].m_intAttrs;
    do
    {
      p_m_intAttrs->CLoopModeBase = Four_Zeros;
      p_m_intAttrs = (p_m_intAttrs + 16);
    }
    while ( this->m_pViewGameAttrs[0].m_intAttrs.m_fixedStorage.m_FixedValues != p_m_intAttrs );
  }
  m_FixedValues = this->m_pViewGameAttrs[0].m_textureAttrs.m_fixedStorage.m_FixedValues;
  this->m_pViewGameAttrs[0].m_intAttrs.m_pParent = 0;
  this->m_pViewGameAttrs[0].m_intAttrs.m_pOverflow.m_pHead = 0;
  p_m_textureAttrs = &this->m_pViewGameAttrs[0].m_textureAttrs;
  v7 = this->m_pViewGameAttrs[0].m_textureAttrs.m_fixedStorage.m_FixedValues;
  do
  {
    v7->_vptr_ILoopMode = 0;
    v7 = (v7 + 16);
    *(&v7[-1].m_pToolHooks + 2) = -1;
  }
  while ( v7 != &this->m_pViewGameAttrs[0].m_textureAttrs.m_pParent );
  *this->m_pViewGameAttrs[0].m_textureAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  v8 = 0;
  *&this->m_pViewGameAttrs[0].m_textureAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  do
  {
    if ( p_m_textureAttrs->m_fixedStorage.m_nFixedKeys[0].m_i32[v8] != 0 )
      this->m_pViewGameAttrs[0].m_textureAttrs.m_fixedStorage.m_FixedValues[v8].texture.m_pBinding = 0;
    ++v8;
  }
  while ( v8 != 4 );
  if ( p_m_textureAttrs != m_FixedValues )
  {
    v9 = &this->m_pViewGameAttrs[0].m_textureAttrs;
    do
    {
      v9->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
      v9 = (v9 + 16);
    }
    while ( m_FixedValues != v9 );
  }
  this->m_pViewGameAttrs[0].m_textureAttrs.m_pParent = 0;
  v10 = this->m_pViewGameAttrs[0].m_constantBufferAttrs.m_fixedStorage.m_FixedValues;
  this->m_pViewGameAttrs[0].m_textureAttrs.m_pOverflow.m_pHead = 0;
  v11 = this->m_pViewGameAttrs[0].m_constantBufferAttrs.m_fixedStorage.m_FixedValues;
  do
  {
    v11->_vptr_ILoopMode = 0;
    v11 = (v11 + 16);
    *(&v11[-1].m_pToolHooks + 2) = 0;
  }
  while ( v11 != &this->m_pViewGameAttrs[0].m_constantBufferAttrs.m_pParent );
  *this->m_pViewGameAttrs[0].m_constantBufferAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_pViewGameAttrs[0].m_constantBufferAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  if ( &this->m_pViewGameAttrs[0].m_constantBufferAttrs != v10 )
  {
    p_m_constantBufferAttrs = &this->m_pViewGameAttrs[0].m_constantBufferAttrs;
    do
    {
      p_m_constantBufferAttrs->m_fixedStorage.m_nFixedKeys[0] = Four_Zeros;
      p_m_constantBufferAttrs = (p_m_constantBufferAttrs + 16);
    }
    while ( v10 != p_m_constantBufferAttrs );
  }
  this->m_pViewGameAttrs[0].m_constantBufferAttrs.m_pParent = 0;
  this->m_pViewGameAttrs[0].m_constantBufferAttrs.m_pOverflow.m_pHead = 0;
  *this->m_pViewGameAttrs[0].m_ptrAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_pViewGameAttrs[0].m_ptrAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  if ( &this->m_pViewGameAttrs[0].m_ptrAttrs != this->m_pViewGameAttrs[0].m_ptrAttrs.m_fixedStorage.m_FixedValues )
  {
    p_m_ptrAttrs = &this->m_pViewGameAttrs[0].m_ptrAttrs;
    do
    {
      p_m_ptrAttrs->CLoopModeBase = Four_Zeros;
      p_m_ptrAttrs = (p_m_ptrAttrs + 16);
    }
    while ( this->m_pViewGameAttrs[0].m_ptrAttrs.m_fixedStorage.m_FixedValues != p_m_ptrAttrs );
  }
  v14 = 0;
  this->m_pViewGameAttrs[0].m_ptrAttrs.m_pParent = 0;
  this->m_pViewGameAttrs[0].m_ptrAttrs.m_pOverflow.m_pHead = 0;
  v15 = this->m_pViewGameAttrs[0].m_stringAttrs.m_fixedStorage.m_FixedValues;
  this->m_pViewGameAttrs[0].m_stringAttrs.m_fixedStorage.m_FixedValues[0].m_pString = 0;
  this->m_pViewGameAttrs[0].m_stringAttrs.m_fixedStorage.m_FixedValues[1].m_pString = 0;
  this->m_pViewGameAttrs[0].m_stringAttrs.m_fixedStorage.m_FixedValues[2].m_pString = 0;
  this->m_pViewGameAttrs[0].m_stringAttrs.m_fixedStorage.m_FixedValues[3].m_pString = 0;
  *this->m_pViewGameAttrs[0].m_stringAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32 = 0;
  *&this->m_pViewGameAttrs[0].m_stringAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[2] = 0;
  do
  {
    if ( this->m_pViewGameAttrs[0].m_stringAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32[v14] != 0 )
      CUtlString::Clear(v15);
    ++v14;
    ++v15;
  }
  while ( v14 != 4 );
  p_m_stringAttrs = &this->m_pViewGameAttrs[0].m_stringAttrs;
  do
  {
    p_m_stringAttrs->CLoopModeBase = Four_Zeros;
    p_m_stringAttrs = (p_m_stringAttrs + 16);
  }
  while ( this->m_pViewGameAttrs[0].m_stringAttrs.m_fixedStorage.m_FixedValues != p_m_stringAttrs );
  this->m_pViewGameAttrs[0].m_stringAttrs.m_pParent = 0;
  this->m_pViewGameAttrs[0].m_stringAttrs.m_pOverflow.m_pHead = 0;
  this->m_pViewGameAttrs[0].m_pParent = 0;
  this->m_hStartingActiveSpawnGroup = 0;
  this->m_pClientWorldSessionManifest = 0;
  x = vec4_origin.x;
  this->m_pGameInstance = 0;
  v18 = LOG_SERVER;
  this->m_vFadeColor.x = x;
  y = vec4_origin.y;
  this->m_nGameSystemState = CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_UNALLOCATED;
  this->m_vFadeColor.y = y;
  z = vec4_origin.z;
  this->m_pToolHooks = 0;
  this->m_vFadeColor.z = z;
  this->m_vFadeColor.w = vec4_origin.w;
  if ( LoggingSystem_IsChannelEnabled(v18, 0) != 0 )
    LoggingSystem_Log(LOG_SERVER, 0, "%s:  CLoopModeGame constructed\n", "SV");
  g_pLoopModeGameSharedState = &this->ILoopModeGameSharedState;
}


// CLoopModeGame::~CLoopModeGame  (line 632, @0x00000000020a09f0, libserver.so)  // inlines: Clear, ClearButLeaveParentPointerAlone, Init, Purge, ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>, ReleaseValueFromAttribute<CUtlString>, StoreAlignedIntSIMD<(ESIMDLevel)20u>, _mm_store_ps, operator=, ~CCommandMemberInitializer_OnPrintSpawnGroupStatus, ~CConCommandMemberAccessor, ~CRenderAttributes, ~CUtlAttributeList, ~CUtlAttributeListChunk, ~CUtlString, ~OverflowChunk_t
// calls: LoggingSystem_IsChannelEnabled, CUtlString::FreeMemoryBlock, operator delete, CUtlString::Clear, ConCommandBase::Shutdown, ConCommand::~ConCommand, LoggingSystem_Log
// callers: CLoopModeGame::~CLoopModeGame
// strings: "--CLoopModeGame::~CLoopModeGame", "SV", "%s:  CLoopModeGame destructed\n"
// globals: g_pLoopModeGameSharedState
void __fastcall CLoopModeGame::~CLoopModeGame(CLoopModeGame *const this)
{
  ISource2WorldSession *m_pWorldSession; // rdi
  CResourceManifestPrerequisite *m_pClientWorldSessionManifest; // rdi
  signed __int64 v4; // r15
  CUtlString *i; // r14
  CUtlString *v6; // r15
  CUtlString *v7; // rbx
  CUtlString *p_m_constantBufferAttrs; // r12
  CRenderAttributes::TextureAttrForStorage_t *v9; // r14
  fltx4_0 *v10; // rax
  CUtlAttributeList<void*,4,void*>::OverflowChunk_t *v11; // rdi
  CUtlAttributeList<void*,4,void*>::OverflowChunk_t *m_pNext; // rbx
  fltx4_0 *p_m_pParent; // rax
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t>::OverflowChunk_t *v14; // rdi
  CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4,CRenderAttributes::ConstantBufferAttr_t>::OverflowChunk_t *v15; // rbx
  fltx4_0 *j; // rax
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t *v17; // rdi
  CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t *v18; // rbx
  __int64 v19; // rdx
  fltx4_0 *v20; // rax
  CUtlAttributeList<int,8,int>::OverflowChunk_t *v21; // rdi
  CUtlAttributeList<int,8,int>::OverflowChunk_t *v22; // rbx
  fltx4_0 *v23; // rax
  CUtlAttributeList<VMatrix,4,VMatrix>::OverflowChunk_t *v24; // rdi
  CUtlAttributeList<VMatrix,4,VMatrix>::OverflowChunk_t *v25; // rbx
  fltx4_0 *p_m_Callbacks; // rax
  CUtlAttributeList<Vector4D,4,Vector4D>::OverflowChunk_t *v27; // rdi
  CUtlAttributeList<Vector4D,4,Vector4D>::OverflowChunk_t *v28; // rbx
  SpawnGroupHandle_t *p_m_hStartingActiveSpawnGroup; // [rsp+48h] [rbp-98h]
  CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t,4,CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t> *v31; // [rsp+50h] [rbp-90h]
  CUtlIntrusiveList<CUtlAttributeList<VMatrix,4>::OverflowChunk_t> *v32; // [rsp+58h] [rbp-88h]
  CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t,4>::OverflowChunk_t> *v33; // [rsp+60h] [rbp-80h]
  CUtlIntrusiveList<CUtlAttributeList<Vector4D,4>::OverflowChunk_t> *v34; // [rsp+68h] [rbp-78h]
  CUtlIntrusiveList<CUtlAttributeList<int,8>::OverflowChunk_t> *v35; // [rsp+70h] [rbp-70h]
  CUtlIntrusiveList<CUtlAttributeList<void*,4>::OverflowChunk_t> *v36; // [rsp+78h] [rbp-68h]
  __int64 v37; // [rsp+80h] [rbp-60h]
  SpawnGroupHandle_t *v38; // [rsp+88h] [rbp-58h]
  CUtlIntrusiveList<CUtlAttributeList<CUtlString,4>::OverflowChunk_t> *p_m_pOverflow; // [rsp+90h] [rbp-50h]
  CLoopModeGame *v40; // [rsp+A0h] [rbp-40h]
  CUtlAttributeList<CUtlString,4,CUtlString>::OverflowChunk_t *m_pString; // [rsp+A8h] [rbp-38h]
  fltx4_0 *v42; // [rsp+A8h] [rbp-38h]

  this->_vptr_ILoopMode = &off_3FFB8D0;
  this->_vptr_ILoopModeGameSharedState = off_3FFB960;
  m_pWorldSession = this->m_pWorldSession;
  g_pLoopModeGameSharedState = 0;
  if ( m_pWorldSession != 0 )
  {
    (*(*m_pWorldSession + 8LL))(m_pWorldSession, "--CLoopModeGame::~CLoopModeGame");
    this->m_pWorldSession = 0;
  }
  m_pClientWorldSessionManifest = this->m_pClientWorldSessionManifest;
  if ( m_pClientWorldSessionManifest != 0 )
  {
    (*(m_pClientWorldSessionManifest->_vptr_IPrerequisite + 3))(m_pClientWorldSessionManifest);
    this->m_pClientWorldSessionManifest = 0;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
    LoggingSystem_Log(LOG_SERVER, 0, "%s:  CLoopModeGame destructed\n", "SV");
  p_m_hStartingActiveSpawnGroup = &this->m_hStartingActiveSpawnGroup;
  v38 = &this->m_hStartingActiveSpawnGroup;
  p_m_pOverflow = &this->m_pViewGameAttrs[0].m_stringAttrs.m_pOverflow;
  v36 = &this->m_pViewGameAttrs[0].m_ptrAttrs.m_pOverflow;
  v33 = &this->m_pViewGameAttrs[0].m_constantBufferAttrs.m_pOverflow;
  v31 = &this->m_pViewGameAttrs[0].m_textureAttrs.m_pOverflow;
  v37 = -&this->m_pViewGameAttrs[0].m_stringAttrs.m_pParent;
  v35 = &this->m_pViewGameAttrs[0].m_intAttrs.m_pOverflow;
  v32 = &this->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_pOverflow;
  v34 = &this->m_pViewGameAttrs[0].m_vec4Attrs.m_pOverflow;
  while ( 1 )
  {
    v40 = (v38 - 200);
    v4 = (v38 - 200) - p_m_hStartingActiveSpawnGroup;
    if ( *(&p_m_pOverflow->m_pHead + v38 - p_m_hStartingActiveSpawnGroup) != 0 )
    {
      for ( i = *(&p_m_pOverflow->m_pHead + v38 - p_m_hStartingActiveSpawnGroup); ; i = m_pString )
      {
        v6 = i + 8;
        m_pString = i->m_pString;
        do
        {
          --v6;
          if ( v6->m_pString != 0 )
            CUtlString::FreeMemoryBlock(v6);
        }
        while ( &i[4] != v6 );
        operator delete(i);
        *(&p_m_pOverflow->m_pHead + v38 - p_m_hStartingActiveSpawnGroup) = m_pString;
        if ( m_pString == 0 )
          break;
      }
      v4 = (v38 - 200) - p_m_hStartingActiveSpawnGroup;
    }
    v7 = &v40->m_pViewGameAttrs[0].m_textureAttrs.m_fixedStorage.m_FixedValues[3];
    v42 = &v40->m_pViewGameAttrs[0].m_textureAttrs.m_fixedStorage.m_FixedValues[3];
    p_m_constantBufferAttrs = &v40->m_pViewGameAttrs[0].m_constantBufferAttrs;
    v9 = &v40->m_pViewGameAttrs[0].m_textureAttrs.m_fixedStorage.m_FixedValues[2];
    do
    {
      if ( LODWORD(v9->texture.m_pBinding) != 0 )
        CUtlString::Clear(v7);
      ++v7;
      v9 = (v9 + 4);
    }
    while ( v7 != p_m_constantBufferAttrs );
    v10 = &v40->m_pViewGameAttrs[0].m_textureAttrs.m_fixedStorage.m_FixedValues[2];
    if ( &v40->m_pViewGameAttrs[0].m_textureAttrs.m_fixedStorage.m_FixedValues[2] != v42 )
    {
      do
        *v10++ = Four_Zeros;
      while ( v42 != v10 );
    }
    *(this + v4 + 1776) = 0;
    do
    {
      if ( *(v40->m_pViewGameAttrs[0].m_constantBufferAttrs.m_fixedStorage.m_nFixedKeys[0].m_i32
           + --p_m_constantBufferAttrs
           + v37) != 0 )
        CUtlString::FreeMemoryBlock(p_m_constantBufferAttrs);
    }
    while ( p_m_constantBufferAttrs != v42 );
    v11 = *(&v36[100].m_pHead + v4);
    if ( v11 != 0 )
    {
      while ( 1 )
      {
        m_pNext = v11->m_pNext;
        operator delete(v11);
        *(&v36[100].m_pHead + v4) = m_pNext;
        if ( m_pNext == 0 )
          break;
        v11 = m_pNext;
      }
    }
    p_m_pParent = &v40->m_pViewGameAttrs[0].m_intAttrs.m_pParent;
    if ( &v40->m_pViewGameAttrs[0].m_textureAttrs != &v40->m_pViewGameAttrs[0].m_intAttrs.m_pParent )
    {
      do
        *p_m_pParent++ = Four_Zeros;
      while ( &v40->m_pViewGameAttrs[0].m_textureAttrs != p_m_pParent );
    }
    *(this + v4 + 1712) = 0;
    v14 = *(&v33[100].m_pHead + v4);
    if ( v14 != 0 )
    {
      while ( 1 )
      {
        v15 = v14->m_pNext;
        operator delete(v14);
        *(&v33[100].m_pHead + v4) = v15;
        if ( v15 == 0 )
          break;
        v14 = v15;
      }
    }
    for ( j = v40->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_FixedValues[3].m[3];
          &v40->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_pParent != j;
          ++j )
    {
      *j = Four_Zeros;
    }
    *(this + v4 + 1648) = 0;
    v17 = *(&v31[100].m_pHead + v4);
    if ( v17 != 0 )
    {
      while ( 1 )
      {
        v18 = v17->m_pNext;
        operator delete(v17);
        *(&v31[100].m_pHead + v4) = v18;
        if ( v18 == 0 )
          break;
        v17 = v18;
      }
    }
    v19 = 0;
    v20 = v40->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_FixedValues[2].m[1];
    do
    {
      if ( v20->m128_i32[v19] != 0 )
        *&v38[v19 * 4 - 80] = 0;
      ++v19;
    }
    while ( v19 != 4 );
    for ( ; v40->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_FixedValues[2].m[2] != v20; ++v20 )
      *v20 = Four_Zeros;
    *(this + v4 + 1552) = 0;
    v21 = *(&v35[100].m_pHead + v4);
    if ( v21 != 0 )
    {
      while ( 1 )
      {
        v22 = v21->m_pNext;
        operator delete(v21);
        *(&v35[100].m_pHead + v4) = v22;
        if ( v22 == 0 )
          break;
        v21 = v22;
      }
    }
    v23 = &v40->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_FixedValues[1];
    if ( v40->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_FixedValues[1].m[2] != &v40->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_FixedValues[1] )
    {
      do
        *v23++ = Four_Zeros;
      while ( v40->m_pViewGameAttrs[0].m_matrix4x4Attrs.m_fixedStorage.m_FixedValues[1].m[2] != v23 );
    }
    *(this + v4 + 1456) = 0;
    v24 = *(&v32[100].m_pHead + v4);
    if ( v24 != 0 )
    {
      while ( 1 )
      {
        v25 = v24->m_pNext;
        operator delete(v24);
        *(&v32[100].m_pHead + v4) = v25;
        if ( v25 == 0 )
          break;
        v24 = v25;
      }
    }
    p_m_Callbacks = &v40->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.m_Callbacks;
    if ( &v40->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.m_Callbacks.m_Memory.m_nAllocationCount != &v40->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.m_Callbacks )
    {
      do
        *p_m_Callbacks++ = Four_Zeros;
      while ( &v40->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.m_Callbacks.m_Memory.m_nAllocationCount != p_m_Callbacks );
    }
    *(this + v4 + 1376) = 0;
    v27 = *(&v34[100].m_pHead + v4);
    if ( v27 != 0 )
    {
      while ( 1 )
      {
        v28 = v27->m_pNext;
        operator delete(v27);
        *(&v34[100].m_pHead + v4) = v28;
        if ( v28 == 0 )
          break;
        v27 = v28;
      }
    }
    v37 += 800;
    v40->CLoopModeBase = Four_Zeros;
    v40->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor.m_fnCompletionCallback = 0;
    if ( this->m_pViewGameAttrs == v40 )
      break;
    v38 -= 200;
  }
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FFB770;
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FFB818;
  this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FFB830;
  ConCommandBase::Shutdown(&this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnPrintSpawnGroupStatus_register.m_ConCommandAccessor);
}


// CLoopModeGame::~CLoopModeGame  (line 632, @0x00000000020a1060, libserver.so)
// calls: CLoopModeGame::~CLoopModeGame, operator delete
void __fastcall CLoopModeGame::~CLoopModeGame(CLoopModeGame *const this)
{
  CLoopModeGame::~CLoopModeGame(this);
  operator delete(this);
}


// CLoopModeGame::StaticInit  (line 656, @0x00000000020b1bf0, libserver.so)
// calls: COM_TimestampedLog, IGameSystem::InitAllSystems, CBaseTempEntity::StaticInitTempEnts
// callers: CLoopModeFactory<CLoopModeGame>::Init
// strings: "CLoopModeGame::StaticInit-start", "CLoopModeGame::InitAllSystems()", "CBaseTempEntity::StaticInitTempEnts()", "CLoopModeGame::StaticInit-finish"
bool __fastcall CLoopModeGame::StaticInit(ILoopType *pEngineLoop)
{
  bool inited; // bl

  COM_TimestampedLog("CLoopModeGame::StaticInit-start");
  COM_TimestampedLog("CLoopModeGame::InitAllSystems()");
  inited = IGameSystem::InitAllSystems();
  if ( inited )
  {
    COM_TimestampedLog("CBaseTempEntity::StaticInitTempEnts()");
    CBaseTempEntity::StaticInitTempEnts();
    COM_TimestampedLog("CLoopModeGame::StaticInit-finish");
  }
  return inited;
}


// CLoopModeGame::StaticShutdown  (line 680, @0x00000000020b1c50, libserver.so)
// calls: CBaseTempEntity::StaticShutdownTempEnts, IGameSystem::ShutdownAllSystems
void __cdecl CLoopModeGame::StaticShutdown()
{
  CBaseTempEntity::StaticShutdownTempEnts();
  IGameSystem::ShutdownAllSystems();
}


// CLoopModeGame::AddModIndependentGameSystems  (line 691, @0x00000000020b1c60, libserver.so)
// calls: IGameSystem::Add, SoundEmitterSystem, HLTVDirectorSystem
// callers: CLoopModeGame::ReceivedServerInfo, CLoopModeGame::LoopInit
// strings: "GameRulesGameSystem", "BodyGameSystem", "PhysicsGameSystem", "PhysicsGameSystemS1", "LightQueryGameSystem"
void __fastcall CLoopModeGame::AddModIndependentGameSystems(CLoopModeGame *const this)
{
  IGameSystem *v1; // rax
  IGameSystem *v2; // rax

  IGameSystem::Add("GameRulesGameSystem");
  IGameSystem::Add("BodyGameSystem");
  IGameSystem::Add("PhysicsGameSystem");
  IGameSystem::Add("PhysicsGameSystemS1");
  IGameSystem::Add("LightQueryGameSystem");
  v1 = SoundEmitterSystem();
  IGameSystem::Add(v1);
  v2 = HLTVDirectorSystem();
  IGameSystem::Add(v2);
}


// CLoopModeGame::LoopInit  (line 736, @0x00000000020df710, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CAllowPrecacheScopeGuard, CBaseCmdKeyValues, CCreateGameServerLoadInfo, CUtlMemory, CUtlString, CUtlStringToken, CUtlVector, CUtlVectorBase, Construct<CCreateGameServerLoadInfo>, CopyConstruct<HResourceManifest__*>, Destruct<CCreateGameServerLoadInfo>, Element, GameSessionConfiguration_t, GetBool, GrowMemory, LeafCodeInfo_t, Length, LoadResourceManifestGroup, LoadResourceManifestNamed, LoopInit, Purge, RemoveAll, SetKeyValues, SetRestoreActivation, SetToIdentity, SpawnGroupDesc_t, String, V_strlen, assign, clear, length, mutable_data, operator char const*, operator[], set_has_data, set_has_server_ip_address, set_server_ip_address, size, ~CAllowPrecacheScopeGuard, ~CCreateGameServerLoadInfo, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~GameSessionConfiguration_t
// calls: KeyValues::GetString, V_stricmp_fast, IGameSystem::ForwardCallsToHost, CUtlString::Set, KeyValues::GetInt, CUtlString::FreeMemoryBlock, SetIdentityMatrix, strlen, CUtlString::Get, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors (34 total)
// strings: "listenserver", "levelname", "savegame", "loadmap", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/loopmodeg, "LoopInit" (18 total)
bool __fastcall CLoopModeGame::LoopInit(
        CLoopModeGame *const this,
        KeyValues *pKeyValues,
        ILoopModePrerequisiteRegistry *pRegistry)
{
  CLoopModeGame *v3; // r12
  KeyValues *v4; // rbx
  const char *String; // r13
  _BOOL8 v6; // rdi
  unsigned int v7; // r15d
  const char *v8; // rax
  const char *v9; // rax
  int Int; // r14d
  bool v12; // r14
  bool v13; // zf
  __int64 v14; // rax
  const char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  const char *v20; // rax
  int v21; // eax
  CCreateGameServerLoadInfo *m_pMemory; // r14
  CUtlString *p_m_SpawnGroupName; // r15
  const char *v24; // rcx
  CResourceManifestPrerequisite *v25; // rax
  ISource2WorldSession *v26; // r14
  __int64 v27; // rdx
  int v28; // edx
  const char *v29; // rax
  const char *v30; // r14
  size_t v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r14
  int v37; // eax
  __int64 v38; // r15
  CCreateGameServerLoadInfo *v39; // r14
  CCreateGameServerLoadInfo *v40; // r15
  SpawnGroupHandle_t v41; // eax
  INetworkServerService *v42; // rdi
  CResourceManifestPrerequisite *m_pRequiredManifests; // rbx
  __int64 v44; // r15
  __int64 m_Size; // r13
  int v46; // eax
  __int64 *v47; // rax
  CResourceManifestPrerequisite *v48; // rbx
  __int64 v49; // r13
  __int64 v50; // r12
  int v51; // eax
  __int64 *v52; // rax
  int v53; // ebx
  __int64 i; // r12
  CUtlString *v55; // r14
  const char *v56; // rax
  bool IsPrecacheAllowed; // r14
  void (__fastcall *v58)(ISource2Server *, const char *, CUtlVector<CCreateGameServerLoadInfo,CUtlMemory<CCreateGameServerLoadInfo,int> > *, _QWORD, _QWORD); // [rsp+10h] [rbp-210h]
  const char *v59; // [rsp+10h] [rbp-210h]
  bool v60; // [rsp+20h] [rbp-200h]
  void (__fastcall *bWipeDirectoryAndExtract)(INetworkServerService *, LeafCodeInfo_t *, __int64, ISource2WorldSession *, const char *); // [rsp+30h] [rbp-1F0h]
  CUtlString sWorldName; // [rsp+50h] [rbp-1D0h] BYREF
  CUtlString sSaveGameName; // [rsp+60h] [rbp-1C0h] BYREF
  CUtlVector<CCreateGameServerLoadInfo,CUtlMemory<CCreateGameServerLoadInfo,int> > list; // [rsp+70h] [rbp-1B0h] BYREF
  LeafCodeInfo_t v66; // [rsp+90h] [rbp-190h] BYREF
  LeafCodeInfo_t v67; // [rsp+B0h] [rbp-170h] BYREF
  bool v68; // [rsp+C9h] [rbp-157h]
  bool v69; // [rsp+CAh] [rbp-156h]
  bool v70; // [rsp+CBh] [rbp-155h]
  std::string *v71; // [rsp+F8h] [rbp-128h]
  bool v72; // [rsp+105h] [rbp-11Bh]
  std::string *v73; // [rsp+108h] [rbp-118h]
  __int64 v74; // [rsp+120h] [rbp-100h]
  SpawnGroupDesc_t desc; // [rsp+130h] [rbp-F0h] BYREF
  netadr_t v76; // [rsp+1D0h] [rbp-50h] BYREF
  unsigned __int64 v77; // [rsp+1E8h] [rbp-38h]

  v3 = this;
  v4 = pKeyValues;
  v77 = __readfsqword(0x28u);
  this->m_bLoopSuccessfullyActivated = 0;
  if ( pKeyValues != 0 )
  {
    String = KeyValues::GetString(pKeyValues, "mode", "", 0, 0);
    if ( V_stricmp_fast(String, "listenserver") != 0 )
      goto LABEL_21;
    LOBYTE(v6) = 1;
    LOBYTE(bWipeDirectoryAndExtract) = 1;
    v7 = 1;
    v3->m_Mode = ClientServerMode_t::CLIENTSERVERMODE_LISTENSERVER;
    while ( 1 )
    {
      IGameSystem::ForwardCallsToHost(v6);
      v8 = KeyValues::GetString(v4, "levelname", "", 0, 0);
      sWorldName.m_pString = 0;
      CUtlString::Set(&sWorldName, v8);
      v9 = KeyValues::GetString(v4, "savegame", "", 0, 0);
      sSaveGameName.m_pString = 0;
      CUtlString::Set(&sSaveGameName, v9);
      String = KeyValues::GetInt(v4, "loadmap", 0);
      Int = KeyValues::GetInt(v4, "changelevel", 0);
      LOBYTE(String) = String == 0;
      v3->m_bInMainMenu = String;
      if ( String != 0 )
        break;
      desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
      desc.m_bDontSpawnEntities = 0;
      list.m_Size = 0;
      list.m_Memory.m_pMemory = 0;
      list.m_Memory.m_nAllocationCount = 0;
      list.m_Memory.m_nGrowSize = 0;
      memset(&desc.m_pWorldName, 0, 72);
      desc.m_iPriorityLoader = -2;
      desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
      desc.m_flTimeoutInterval = 0.0;
      desc.m_pSaveFileName = 0;
      desc.m_bBlockUntilLoaded = 0;
      desc.m_bLoadStreamingData = 1;
      desc.m_bCreateNewSceneWorld = 0;
      desc.m_bManualCompletion = 0;
      desc.m_bSetActivePostLoad = 0;
      SetIdentityMatrix(&desc.m_vecWorldOffset);
      desc.m_bCreateClientEntitiesOnLaterConnectingClients = 1;
      v12 = Int != 0;
      desc.m_flTimeoutInterval = 90.0;
      v13 = v3->m_Mode == ClientServerMode_t::CLIENTSERVERMODE_CLIENT;
      v60 = v12;
      *&desc.m_vecWorldOffset.m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
      *&desc.m_vecWorldOffset.m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
      *&desc.m_vecWorldOffset.m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
      v14 = *&g_MatrixIdentity.m_flMatVal[2][2];
      *&desc.m_vecWorldOffset.m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
      *&desc.m_vecWorldOffset.m_flMatVal[2][2] = v14;
      if ( !v13 )
      {
        if ( sSaveGameName.m_pString != 0 && strlen(sSaveGameName.m_pString) > 0 )
        {
          if ( !v12 )
          {
            v58 = *(g_pSource2Server->_vptr_IAppSystem + 18);
            v15 = CUtlString::Get(&sSaveGameName);
            v58(g_pSource2Server, v15, &list, v7, 0);
            goto LABEL_15;
          }
          goto LABEL_42;
        }
        desc.m_pWorldName = CUtlString::Get(&sWorldName);
        desc.m_pEntityFilterName = "mapload";
      }
      while ( 1 )
      {
        v25 = operator new(0x28u);  // new CResourceManifestPrerequisite (size matches)
        v25->m_nRefCount = 0;
        v25->_vptr_IPrerequisite = off_3FCABD0;  // vptr: CResourceManifestPrerequisite
        v25->m_hResourceManifests.m_Size = 0;
        v25->m_hResourceManifests.m_Memory.m_pMemory = 0;
        v25->m_hResourceManifests.m_Memory.m_nAllocationCount = 0;
        v25->m_hResourceManifests.m_Memory.m_nGrowSize = 0;
        v3->m_pRequiredManifests = v25;
        (*(v25->_vptr_IPrerequisite + 2))(v25);
        (**pRegistry)(pRegistry, v3->m_pRequiredManifests);
        (*(*g_pNetworkService + 192LL))(g_pNetworkService);
        if ( bWipeDirectoryAndExtract == 0 )
          goto LABEL_50;
        v26 = (*(*g_pSource2Engine + 104LL))(g_pSource2Engine, "defaultSession", v3->m_pRequiredManifests);
        CLoopModeGame::SetWorldSession(v3, v26);
        (*(*v26 + 8LL))(v26, "--CLoopModeGame::LoopInit");
        CSVCMsg_GameSessionConfiguration::CSVCMsg_GameSessionConfiguration(&v67);
        LODWORD(v67.m_szFunction) |= 0x2000u;
        v74 = 0;
        v67.m_szFile = &off_3FF8270;
        std::string::_M_mutate(v73, 0, *(v73->_M_dataplus._M_p - 3), 0);
        v67.m_szFile = off_3FF8330;
        if ( (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 20))(
               g_pGameConfiguration,
               v4,
               &v67) == 0 )
          goto LABEL_79;
        v3->m_bIsInHeadlessMode = v70;
        v3->m_bBackgroundMap = v69;
        v3->m_bIsLevelTransition = v72;
        if ( g_pEntitySystem != 0 )
          g_pEntitySystem->m_bInRestoreActivation = v68;
        bWipeDirectoryAndExtract = *(*g_pNetworkServerService + 216LL);
        v59 = CUtlString::Get(&sWorldName);
        v27 = (*(*engine + 136LL))(engine);
        bWipeDirectoryAndExtract(g_pNetworkServerService, &v67, v27, v26, v59);
        *&v76.type = (*(*g_pNetworkServerService + 304LL))(g_pNetworkServerService);
        *&v76.port = v28;
        v29 = netadr_t::ToString(&v76, 0);
        LODWORD(v67.m_szFunction) |= 0x1000u;
        v30 = v29;
        v31 = strlen(v29);
        std::string::assign(v71, v30, v31);
        v3->m_nGameSystemState = CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_ALLOCATED;
        CLoopModeGame::AddModIndependentGameSystems(v3);
        if ( (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 21))(
               g_pGameConfiguration,
               &v67) != 0 )
        {
          IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
          CBaseEntity::SetAllowPrecache(1);
          v3->m_nGameSystemState = CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_INITIALIZED;
          if ( IGameSystem::LoopInitAllSystems(&v67, pRegistry)
            && (v3->m_nGameSystemState = CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_POST_INITIALIZED,
                IGameSystem::LoopPostInitAllSystems(&v67, pRegistry))
            && (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 25))(
                 g_pGameConfiguration,
                 &v67,
                 pRegistry) != 0 )
          {
            CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
            (*(*g_pNetworkServerService + 224LL))(g_pNetworkServerService, g_pSpawnGroupMgr);
            v41 = (*(*engine + 456LL))(engine, &desc);
            v42 = g_pNetworkServerService;
            v3->m_hStartingActiveSpawnGroup = v41;
            (*(*v42 + 232LL))(v42, &v67, "GameSessionManifest", pRegistry, v60);
            v67.m_szFile = off_3FF8330;
            CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration>::~CBaseCmdKeyValues(&v67);
LABEL_50:
            m_pRequiredManifests = v3->m_pRequiredManifests;
            v44 = (*(*g_pResourceSystem + 176LL))(
                    g_pResourceSystem,
                    "LoopModeGameStartup",
                    0,
                    "CLoopModeGame::LoopInit",
                    0xFFFFFFFFLL);
            if ( v44 != 0 )
            {
              m_Size = m_pRequiredManifests->m_hResourceManifests.m_Size;
              v46 = m_pRequiredManifests->m_hResourceManifests.m_Size;
              if ( m_Size == m_pRequiredManifests->m_hResourceManifests.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<HResourceManifest__ *,int>::Grow(&m_pRequiredManifests->m_hResourceManifests.m_Memory, 1);
                v46 = m_pRequiredManifests->m_hResourceManifests.m_Size;
              }
              m_pRequiredManifests->m_hResourceManifests.m_Size = v46 + 1;
              v47 = &m_pRequiredManifests->m_hResourceManifests.m_Memory.m_pMemory[m_Size];
              if ( v47 != 0 )
                *v47 = v44;
            }
            v48 = v3->m_pRequiredManifests;
            v49 = (*(*g_pResourceSystem + 184LL))(
                    g_pResourceSystem,
                    "LoopModeGame_server",
                    0,
                    "CLoopModeGame::LoopInit",
                    0xFFFFFFFFLL);
            if ( v49 != 0 )
            {
              v50 = v48->m_hResourceManifests.m_Size;
              v51 = v48->m_hResourceManifests.m_Size;
              if ( v50 == v48->m_hResourceManifests.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<HResourceManifest__ *,int>::Grow(&v48->m_hResourceManifests.m_Memory, 1);
                v51 = v48->m_hResourceManifests.m_Size;
              }
              v48->m_hResourceManifests.m_Size = v51 + 1;
              v52 = &v48->m_hResourceManifests.m_Memory.m_pMemory[v50];
              if ( v52 != 0 )
                *v52 = v49;
            }
            LOBYTE(String) = 1;
          }
          else
          {
            CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
LABEL_79:
            v67.m_szFile = off_3FF8330;
            CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration>::~CBaseCmdKeyValues(&v67);
          }
          v53 = list.m_Size;
          for ( i = 80LL * list.m_Size - 80; --v53 >= 0; i -= 80 )
          {
            v55 = (list.m_Memory.m_pMemory + i);
            if ( *(&list.m_Memory.m_pMemory->m_SpawnGroupSaveFileName.m_pString + i) != 0 )
              CUtlString::FreeMemoryBlock(v55 + 8);
            if ( v55[7].m_pString != 0 )
              CUtlString::FreeMemoryBlock(v55 + 7);
            if ( v55[6].m_pString != 0 )
              CUtlString::FreeMemoryBlock(v55 + 6);
          }
          list.m_Size = 0;
          if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CCreateGameServerLoadInfo,int>::Purge(&list.m_Memory);
            if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CCreateGameServerLoadInfo,int>::Purge(&list.m_Memory);
          }
          goto LABEL_5;
        }
        v4 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v66.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/loopmodegame.cpp";
          v66.m_szFunction = "LoopInit";
          v66.m_nLine = 887;
          LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v66, "LevelInitWorld failed!\n");
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_42:
        v36 = list.m_Size;
        v37 = list.m_Size;
        if ( list.m_Size == list.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CCreateGameServerLoadInfo,int>::Grow(&list.m_Memory, 1);
          v37 = list.m_Size;
        }
        v38 = v36;
        list.m_Size = v37 + 1;
        v39 = &list.m_Memory.m_pMemory[v36];
        if ( v39 != 0 )
        {
          v39->m_SpawnGroupName.m_pString = 0;
          v39->m_SpawnGroupFilterName.m_pString = 0;
          v39->m_SpawnGroupSaveFileName.m_pString = 0;
          v39->m_bStreamEntitiesFromSaveFile = 0;
          v39->m_bIsClientSideSpawnGroup = 0;
          SetIdentityMatrix(&v39->m_vecWorldOrigin);
          v40 = &list.m_Memory.m_pMemory[v38];
        }
        else
        {
          v40 = 0;
        }
        CUtlString::operator=(&v40->m_SpawnGroupName, &sWorldName);
        CUtlString::operator=(&v40->m_SpawnGroupSaveFileName, &sSaveGameName);
        v40->m_bStreamEntitiesFromSaveFile = 1;
        v40->m_bIsClientSideSpawnGroup = 0;
LABEL_15:
        if ( list.m_Size != 1 )
          break;
        m_pMemory = list.m_Memory.m_pMemory;
        p_m_SpawnGroupName = &list.m_Memory.m_pMemory->m_SpawnGroupName;
        if ( sWorldName.m_pString == 0 || strlen(sWorldName.m_pString) == 0 )
        {
          CUtlString::operator=(&sWorldName, p_m_SpawnGroupName);
          v56 = CUtlString::Get(&sWorldName);
          KeyValues::SetString(v4, "levelname", v56);
        }
        desc.m_pWorldName = CUtlString::Get(p_m_SpawnGroupName);
        desc.m_pSaveFileName = CUtlString::Get(&m_pMemory->m_SpawnGroupSaveFileName);
        if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
        {
          v24 = "transitioning";
          if ( !v60 )
            v24 = "loading";
          LoggingSystem_Log(
            LOG_SAVERESTORE,
            0,
            "%s %s.HL%s from save file on %s\n",
            v24,
            desc.m_pSaveFileName,
            "1",
            "server");
        }
      }
      v4 = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v3 = list.m_Size;
        v20 = CUtlString::Get(&sSaveGameName);
        v67.m_nLine = 819;
        v67.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/loopmodegame.cpp";
        v67.m_szFunction = "LoopInit";
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v67,
          "CLoopModeGame::LoopInit:  save file '%s' expected to have a single entry [%d]",
          v20,
          v3);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v18, v19, v16, v17) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_21:
      if ( V_stricmp_fast(String, "dedicated") != 0 )
      {
        v21 = V_stricmp_fast(String, "remoteclient");
        LOBYTE(v6) = v21;
        if ( v21 != 0 )
        {
          v7 = v3->m_Mode & 1;
          LOBYTE(bWipeDirectoryAndExtract) = v3->m_Mode & 1;
          v6 = v3->m_Mode != ClientServerMode_t::CLIENTSERVERMODE_CLIENT;
        }
        else
        {
          v3->m_Mode = ClientServerMode_t::CLIENTSERVERMODE_CLIENT;
          v7 = 0;
          LOBYTE(bWipeDirectoryAndExtract) = 0;
        }
      }
      else
      {
        LOBYTE(v6) = 1;
        LOBYTE(bWipeDirectoryAndExtract) = 1;
        v7 = 1;
        v3->m_Mode = ClientServerMode_t::CLIENTSERVERMODE_SERVER;
      }
    }
LABEL_5:
    if ( sSaveGameName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&sSaveGameName);
    if ( sWorldName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&sWorldName);
  }
  else
  {
    LOBYTE(String) = 0;
  }
  return String;
}


// CLoopModeGame::LoopShutdown  (line 955, @0x00000000020b2670, libserver.so)  // inlines: LoopShutdown
// calls: CLoopModeGame::DisconnectGame, CLoopModeGame::SetWorldSession, IGameSystem::LoopShutdownAllSystems, IGameSystem::LoopDestroyAllSystems, IGameSystem::LoopPreShutdownAllSystems
// globals: g_pGameEntitySystem
void __fastcall CLoopModeGame::LoopShutdown(CLoopModeGame *const this)
{
  CResourceManifestPrerequisite *m_pRequiredManifests; // rdi
  CLoopModeGame::GameSystemState_t m_nGameSystemState; // eax

  if ( this->m_bLoopSuccessfullyActivated )
  {
    if ( this->m_bInMainMenu )
      goto LABEL_3;
  }
  else
  {
    (*(g_pGameEntitySystem->_vptr_IEntityResourceManifestBuilder + 12))(g_pGameEntitySystem, 0);
    CLoopModeGame::DisconnectGame(this, ENetworkDisconnectionReason::NETWORK_DISCONNECT_LOOPSHUTDOWN);
    if ( this->m_bInMainMenu )
      goto LABEL_3;
  }
  CLoopModeGame::SetWorldSession(this, 0);
  if ( this->m_nGameSystemState > CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_INITIALIZED )
    IGameSystem::LoopPreShutdownAllSystems();
  (*(g_pGameEntitySystem->_vptr_IEntityResourceManifestBuilder + 12))(g_pGameEntitySystem, 0);
  m_nGameSystemState = this->m_nGameSystemState;
  if ( m_nGameSystemState > CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_ALLOCATED )
  {
    IGameSystem::LoopShutdownAllSystems();
    m_nGameSystemState = this->m_nGameSystemState;
  }
  if ( m_nGameSystemState > CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_UNALLOCATED )
    IGameSystem::LoopDestroyAllSystems();
  this->m_nGameSystemState = CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_UNALLOCATED;
  (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 22))(g_pGameConfiguration);
LABEL_3:
  m_pRequiredManifests = this->m_pRequiredManifests;
  if ( m_pRequiredManifests != 0 )
  {
    (*(m_pRequiredManifests->_vptr_IPrerequisite + 3))(m_pRequiredManifests);
    this->m_pRequiredManifests = 0;
  }
}


// CLoopModeGame::IsBackgroundMap  (line 1017, @0x000000000209c650, libserver.so)
bool __fastcall CLoopModeGame::IsBackgroundMap(const CLoopModeGame *const this)
{
  return this->m_bBackgroundMap;
}


// CLoopModeGame::OnLoopActivate  (line 1025, @0x00000000020b28b0, libserver.so)  // inlines: GetInt, SetRestoreActivation
// calls: IGameSystem::LoopActivateAllSystems, CEntitySystem::ExecuteQueuedOperations, CSpawnGroupMgrGameSystem::ExecuteQueuedSpawnEntityCalls, operator new, CLoopModeGameToolHooks::CLoopModeGameToolHooks, ConVar::SetValue, CLoopModeGame::OnFirstMapLoaded, operator delete, _Unwind_Resume
// globals: s_bInLoopModeGame, CLoopModeGame::sm_bFirstMapLoaded
void __fastcall CLoopModeGame::OnLoopActivate(
        CLoopModeGame *const this,
        const EngineLoopState_t *const state,
        CEventDispatcher<CEventIDManager_Default> *pEventDispatcher)
{
  INetworkGameServer *v6; // rax
  ISource2WorldSession *m_pWorldSession; // rdi
  char v8; // al
  INetworkGameServer *m_pGameInstance; // rdi
  CLoopModeGameToolHooks *v10; // r13
  CEntitySystem *v11; // rax

  v6 = (*(*g_pNetworkServerService + 192LL))(g_pNetworkServerService);
  this->m_pGameInstance = v6;
  if ( v6 != 0 )
    (*(*v6 + 64LL))(v6);
  m_pWorldSession = this->m_pWorldSession;
  if ( m_pWorldSession != 0 )
    (*(*m_pWorldSession + 32LL))(m_pWorldSession, state, pEventDispatcher, 1);
  v8 = (*(this->_vptr_ILoopMode + 12))(this);
  IGameSystem::LoopActivateAllSystems(state, v8);
  s_bInLoopModeGame = 1;
  CEntitySystem::ExecuteQueuedOperations(g_pEntitySystem, 0);
  if ( this->m_pWorldSession != 0 )
  {
    CSpawnGroupMgrGameSystem::ExecuteQueuedSpawnEntityCalls(g_pSpawnGroupMgr);
    (*(g_pSpawnGroupMgr->_vptr_IGameSpawnGroupMgr + 8))(g_pSpawnGroupMgr, this->m_hStartingActiveSpawnGroup);
    m_pGameInstance = this->m_pGameInstance;
    if ( m_pGameInstance != 0 )
      (*(*m_pGameInstance + 264LL))(m_pGameInstance);
    if ( g_pDeveloper->m_pParent->m_Value.m_nValue == 0 )
      ConVar::SetValue(&think_limit, 0);
  }
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    v10 = operator new(0x38u);
    CLoopModeGameToolHooks::CLoopModeGameToolHooks(v10);
    this->m_pToolHooks = v10;
  }
  if ( g_pToolFramework2 != 0 )
    (*(*g_pToolFramework2 + 432LL))(g_pToolFramework2, 1);
  v11 = g_pEntitySystem;
  this->m_bLoopSuccessfullyActivated = 1;
  if ( v11 != 0 )
    v11->m_bInRestoreActivation = 0;
  if ( !CLoopModeGame::sm_bFirstMapLoaded )
  {
    CLoopModeGame::sm_bFirstMapLoaded = 1;
    CLoopModeGame::OnFirstMapLoaded(this);
  }
}


// CLoopModeGame::OnLoopDeactivate  (line 1150, @0x00000000020b2750, libserver.so)
// calls: IGameSystem::LoopDeactivateAllSystems, CLoopModeGame::DisconnectGame, CEntitySystem::SetActiveSpawnGroupHandle, CLoopModeGameToolHooks::~CLoopModeGameToolHooks, operator delete
// globals: s_bInLoopModeGame, g_pGameNetworkStringTables
void __fastcall CLoopModeGame::OnLoopDeactivate(
        CLoopModeGame *const this,
        const EngineLoopState_t *const state,
        CEventDispatcher<CEventIDManager_Default> *pEventDispatcher)
{
  char v6; // al
  bool v7; // r14
  CLoopModeGameToolHooks *m_pToolHooks; // r14
  INetworkGameServer *m_pGameInstance; // rdi
  ISource2WorldSession *m_pWorldSession; // rdi

  v6 = (*(this->_vptr_ILoopMode + 12))(this);
  s_bInLoopModeGame = 0;
  v7 = v6;
  if ( g_pToolFramework2 != 0 )
    (*(*g_pToolFramework2 + 440LL))(g_pToolFramework2, 1);
  IGameSystem::LoopDeactivateAllSystems(state, v7);
  CLoopModeGame::DisconnectGame(this, ENetworkDisconnectionReason::NETWORK_DISCONNECT_LOOPDEACTIVATE);
  if ( g_pEntitySystem != 0 )
  {
    (*(g_pEntitySystem->_vptr_IEntityResourceManifestBuilder + 12))(g_pEntitySystem, 0);
    CEntitySystem::SetActiveSpawnGroupHandle(g_pEntitySystem, 0);
  }
  m_pToolHooks = this->m_pToolHooks;
  if ( m_pToolHooks != 0 )
  {
    CLoopModeGameToolHooks::~CLoopModeGameToolHooks(this->m_pToolHooks);
    operator delete(m_pToolHooks);
  }
  m_pGameInstance = this->m_pGameInstance;
  this->m_pToolHooks = 0;
  if ( m_pGameInstance != 0 )
  {
    (*(*m_pGameInstance + 32LL))(m_pGameInstance, 0);
    (*(*this->m_pGameInstance + 72LL))(this->m_pGameInstance);
    this->m_pGameInstance = 0;
  }
  m_pWorldSession = this->m_pWorldSession;
  if ( m_pWorldSession != 0 )
    (*(*m_pWorldSession + 40LL))(m_pWorldSession, state, pEventDispatcher, 1);
  (*(g_pGameNetworkStringTables->_vptr_IGameNetworkStringTables + 1))(g_pGameNetworkStringTables);
}


// CLoopModeGame::IsInHeadlessMode  (line 1228, @0x000000000209c670, libserver.so)
bool __fastcall CLoopModeGame::IsInHeadlessMode(const CLoopModeGame *const this)
{
  return this->m_bIsInHeadlessMode;
}


// CLoopModeGame::SetFadeColor  (line 1233, @0x000000000209c690, libserver.so)  // inlines: operator=
void __fastcall CLoopModeGame::SetFadeColor(CLoopModeGame *const this, Vector4D vColorNormalized, Vector4D *a3)
{
  this->m_vFadeColor = *a3;
}


// CLoopModeGame::IsLevelTransition  (line 1238, @0x000000000209c6e0, libserver.so)
bool __fastcall CLoopModeGame::IsLevelTransition(const CLoopModeGame *const this)
{
  return this->m_bIsLevelTransition;
}


// CLoopModeGame::GameInitClient  (line 1248, @0x00000000020b1cc0, libserver.so)
void __fastcall CLoopModeGame::GameInitClient(CLoopModeGame *const this)
{
  ;
}


// CLoopModeGame::ReceivedServerInfo  (line 1281, @0x00000000020b1d50, libserver.so)  // inlines: SetRestoreActivation
// calls: CLoopModeGame::SetWorldSession, CLoopModeGame::AddModIndependentGameSystems, IGameSystem::LoopInitAllSystems, IGameSystem::LoopPostInitAllSystems, operator new
// strings: "defaultSession", "--CLoopModeGame::ReceivedServerInfo"
bool __fastcall CLoopModeGame::ReceivedServerInfo(
        CLoopModeGame *const this,
        const GameSessionConfiguration_t *const config,
        ILoopModePrerequisiteRegistry *pRegistry)
{
  ISource2WorldSession *v6; // r13
  char v8; // al
  CResourceManifestPrerequisite *v9; // rax
  bool v10; // [rsp+Ch] [rbp-24h]

  if ( this->m_pClientWorldSessionManifest == 0 )
  {
    v9 = operator new(0x28u);  // new CResourceManifestPrerequisite (size matches)
    v9->_vptr_IPrerequisite = off_3FCABD0;  // vptr: CResourceManifestPrerequisite
    v9->m_nRefCount = 0;
    v9->m_hResourceManifests.m_Size = 0;
    v9->m_hResourceManifests.m_Memory.m_pMemory = 0;
    v9->m_hResourceManifests.m_Memory.m_nAllocationCount = 0;
    v9->m_hResourceManifests.m_Memory.m_nGrowSize = 0;
    this->m_pClientWorldSessionManifest = v9;
    (*(v9->_vptr_IPrerequisite + 2))(v9);
  }
  v6 = (*(*g_pSource2Engine + 104LL))(g_pSource2Engine, "defaultSession");
  CLoopModeGame::SetWorldSession(this, v6);
  (*(*v6 + 8LL))(v6, "--CLoopModeGame::ReceivedServerInfo");
  this->m_bIsInHeadlessMode = *(config + 27);
  this->m_bIsLevelTransition = *(config + 85);
  this->m_bBackgroundMap = *(config + 26);
  if ( g_pEntitySystem != 0 )
    g_pEntitySystem->m_bInRestoreActivation = *(config + 25);
  this->m_nGameSystemState = CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_ALLOCATED;
  CLoopModeGame::AddModIndependentGameSystems(this);
  if ( (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 21))(g_pGameConfiguration, config) == 0 )
    return 0;
  this->m_nGameSystemState = CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_INITIALIZED;
  if ( !IGameSystem::LoopInitAllSystems(config, pRegistry) )
    return 0;
  this->m_nGameSystemState = CLoopModeGame::GameSystemState_t::GAME_SYSTEMS_POST_INITIALIZED;
  if ( !IGameSystem::LoopPostInitAllSystems(config, pRegistry) )
    return 0;
  v8 = (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 25))(
         g_pGameConfiguration,
         config,
         pRegistry);
  if ( v8 == 0 )
    return 0;
  v10 = v8;
  (**pRegistry)(pRegistry, this->m_pClientWorldSessionManifest);
  (*(*g_pNetworkClientService + 208LL))(g_pNetworkClientService, g_pSpawnGroupMgr);
  return v10;
}


// CLoopModeGame::GetWorldSession  (line 1334, @0x000000000209c700, libserver.so)
ISource2WorldSession *__fastcall CLoopModeGame::GetWorldSession(const CLoopModeGame *const this)
{
  return this->m_pWorldSession;
}


// CLoopModeGame::SetWorldSession  (line 1339, @0x00000000020b1cd0, libserver.so)
// calls: AppIsDedicatedServer
// callers: CLoopModeGame::ReceivedServerInfo, CLoopModeGame::LoopShutdown, CLoopModeGame::LoopInit
// strings: "--CLoopModeGame::SetWorldSession", "++CLoopModeGame::SetWorldSession"
void __fastcall CLoopModeGame::SetWorldSession(CLoopModeGame *const this, ISource2WorldSession *pWorldSession)
{
  ISource2WorldSession *m_pWorldSession; // rdi

  m_pWorldSession = this->m_pWorldSession;
  if ( m_pWorldSession != pWorldSession )
  {
    if ( m_pWorldSession != 0 )
      (*(*m_pWorldSession + 8LL))(m_pWorldSession, "--CLoopModeGame::SetWorldSession");
    this->m_pWorldSession = pWorldSession;
    if ( pWorldSession != 0 )
    {
      (**pWorldSession)(pWorldSession, "++CLoopModeGame::SetWorldSession");
      if ( !AppIsDedicatedServer() )
        (*(*this->m_pWorldSession + 264LL))(this->m_pWorldSession, 0);
    }
  }
}


// CLoopModeGame::GetClientServerMode  (line 1370, @0x000000000209c720, libserver.so)
ClientServerMode_t __fastcall CLoopModeGame::GetClientServerMode(const CLoopModeGame *const this)
{
  return this->m_Mode;
}


// CLoopModeGame::HandleInputEvent  (line 1379, @0x000000000209c740, libserver.so)
InputHandlerResult_t __fastcall CLoopModeGame::HandleInputEvent(
        CLoopModeGame *const this,
        const InputEvent_t *const event,
        CSplitScreenSlot nSplitScreenPlayerSlot)
{
  return InputHandlerResult_t::IHR_INPUT_IGNORED;
}


// CLoopModeGame::AddViewsToSceneSystem  (line 1393, @0x00000000020a0590, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, InTargetThread, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume, std::terminate(void)
// strings: "AddViewsToSceneSystem", "Client Rendering"
ISceneView *__fastcall CLoopModeGame::AddViewsToSceneSystem(
        CLoopModeGame *const this,
        const EngineLoopState_t *const state,
        float64 flRenderTime,
        float64 flRealTime,
        const RenderViewport_t *const viewport,
        const RHBackColorBuffer_t *const backColorBuffer)
{
  ISceneView *m_pView; // r13
  ThreadId_t m_TargetThreadId; // r14
  unsigned __int64 v10; // r13
  _BOOL8 m_fAtRoot; // rdi
  uint64 m_numCalls; // rsi
  unsigned __int64 m_numTimeBaseTicks; // rcx
  unsigned __int64 v14; // r14
  ThreadId_t v15; // r15
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax

  if ( g_VProfCurrentProfile.m_enabled == 0 )
    return backColorBuffer->m_pView;
  m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
  v10 = __rdtsc();
  if ( m_TargetThreadId == ThreadGetCurrentId(this) )
  {
    m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
    if ( m_pCurNode->m_pszName != "AddViewsToSceneSystem" )
    {
      m_pCurNode = CVProfNode::GetSubNode(
                     g_VProfCurrentProfile.m_pCurNode,
                     "AddViewsToSceneSystem",
                     0,
                     "Client Rendering",
                     4);
      g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
    }
    v18 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
    v18->m_BudgetFlags |= 4u;
    CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
    g_VProfCurrentProfile.m_fAtRoot = 0;
    m_fAtRoot = 0;
  }
  else
  {
    m_fAtRoot = g_VProfCurrentProfile.m_fAtRoot;
  }
  m_numCalls = g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls + 1;
  m_numTimeBaseTicks = __rdtsc() + g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks - v10;
  g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks;
  g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls = m_numCalls;
  m_pView = backColorBuffer->m_pView;
  v14 = __rdtsc();
  if ( !m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
  {
    v15 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v15 == ThreadGetCurrentId(m_fAtRoot) )
    {
      if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
      {
        m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
        if ( m_pParent != 0 )
          g_VProfCurrentProfile.m_pCurNode = m_pParent;
        else
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
      }
      else
      {
        m_pParent = g_VProfCurrentProfile.m_pCurNode;
      }
      m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      m_numCalls = g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
    }
    else
    {
      m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      m_numCalls = g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    }
  }
  g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls = m_numCalls + 1;
  g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v14 + __rdtsc();
  return m_pView;
}


// CLoopModeGame::OnPreDataUpdate  (line 1524, @0x00000000020b1f20, libserver.so)  // inlines: GetInstance, IndexToIdentity, IsUsed, LeafCodeInfo_t, LookupEntityByIndex
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/loopmodeg, "OnPreDataUpdate", "OnPreDataUpdate: missing ent %d"
void __fastcall CLoopModeGame::OnPreDataUpdate(CLoopModeGame *const this, const EventPreDataUpdate_t *const msg)
{
  int m_nEntityIndex; // eax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // r8d
  LeafCodeInfo_t v11; // [rsp+10h] [rbp-30h] BYREF

  m_nEntityIndex = msg->m_nEntityIndex;
  if ( msg->m_nEntityIndex > 0x7FFEu
    || (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_nEntityIndex >> 9]) == 0
    || (v5 = &v4[m_nEntityIndex & 0x1FF]) == 0
    || m_nEntityIndex != (v5->m_EHandle.m_Index & 0x7FFF) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v8, v9, v6, v7) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_10:
      v10 = msg->m_nEntityIndex;
      v11.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/loopmodegame.cpp";
      v11.m_szFunction = "OnPreDataUpdate";
      v11.m_nLine = 1528;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v11, "OnPreDataUpdate: missing ent %d", v10);
    }
  }
  (*(v5->m_pInstance->_vptr_IHandleEntity + 13))(v5->m_pInstance, msg->m_UpdateType);
}


// CLoopModeGame::OnPostDataUpdate  (line 1534, @0x00000000020b2020, libserver.so)  // inlines: Add, CDontUseThisGameSystem, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventClientPostDataUpdate_t&)>, DispatchEvent<EventClientPostDataUpdate_t>, EnterScope, ExitScope, GetElapsed, GetRaw, GetTimebaseRegister, GetVTableIndex, InTargetThread, IndexToIdentity, IsEnabled, IsUsed, LookupEntityByIndex, PLAT_CPU_TIME, ~CDontUseThisGameSystem, ~CMicroProfilerGuard, ~CVProfScope
// calls: CEntitySystem::QueuePostDataUpdates, CEntitySystem::ExecuteQueuedOperations, IGameSystem::DispatchEventInternal, ThreadGetCurrentId, CVProfNode::ExitScope(void), IGameSystem::~IGameSystem, __cxa_guard_acquire, __cxa_guard_release, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CVProfile::ExitScope, _Unwind_Resume (14 total)
// strings: "PostDataUpdate", "Networking"
// globals: EventClientPostDataUpdate_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSys, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientP
void __fastcall CLoopModeGame::OnPostDataUpdate(CLoopModeGame *const this, const EventPostDataUpdate_t *const msg)
{
  int m_enabled; // r10d
  bool v4; // r14
  int m_nCount; // esi
  void *v6; // rsp
  PostDataUpdateInfo_t *v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // edi
  CEntityIdentity *v10; // r9
  CEntityIdentity *v11; // r8
  PostDataUpdateCall_t *v12; // rsi
  int m_Data; // ecx
  GameSystemEventId_t v14; // edi
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  ThreadId_t v17; // r12
  uint64 v18; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v20; // r12
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v24; // rax
  _BYTE v25[15]; // [rsp+10h] [rbp-60h] BYREF
  EventClientPostDataUpdate_t updateMsg; // [rsp+1Fh] [rbp-51h] BYREF
  IGameSystem v27; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v4 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v20 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "PostDataUpdate" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "PostDataUpdate", 0, "Networking", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v24 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v24->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v20 + __rdtsc();
  }
  m_nCount = msg->m_nCount;
  v6 = alloca(16LL * msg->m_nCount + 32);
  v7 = (v25 & 0xFFFFFFFFFFFFFFEFLL);
  if ( msg->m_nCount > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v12 = &msg->m_pUpdates[v8 / 8];
      m_Data = v12->m_iEnt.m_Data;
      if ( v12->m_iEnt.m_Data > 0x7FFEu
        || (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_Data >> 9]) == 0
        || (v11 = &v10[m_Data & 0x1FF]) == 0
        || m_Data != (v11->m_EHandle.m_Index & 0x7FFF) )
      {
        v11 = 0;
      }
      v7[v8 / 8].m_pEntity = v11;
      ++v9;
      *(&stru_8.gap0 + 2 * v8 + (v25 & 0xFFFFFFFFFFFFFFEFLL)) = v12->m_UpdateType;
      v8 += 8LL;
      m_nCount = msg->m_nCount;
    }
    while ( msg->m_nCount > v9 );
  }
  CEntitySystem::QueuePostDataUpdates(g_pEntitySystem, m_nCount, v7);
  CEntitySystem::ExecuteQueuedOperations(g_pEntitySystem, 0);
  (*(*g_pGameEventSystem + 144LL))(g_pGameEventSystem);
  v14 = EventClientPostDataUpdate_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventClientPostDataUpdate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v27._vptr_IGameSystem = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew);
    }
    v27._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew;
    EventClientPostDataUpdate_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew
                                                                           + 152))(&v27);
    v27._vptr_IGameSystem = off_3FC3E30;
    IGameSystem::~IGameSystem(&v27);
    v14 = EventClientPostDataUpdate_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v14, 0x99uLL, &updateMsg);
  if ( v4 )
  {
    v16 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v17 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v17 == ThreadGetCurrentId(v15) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v18 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v18 - v16 + __rdtsc();
  }
}


// CLoopModeGame::OnServerSimulate  (line 1578, @0x000000000209cf10, libserver.so)
// calls: CEntitySystem::ExecuteQueuedOperations
void __fastcall CLoopModeGame::OnServerSimulate(CLoopModeGame *const this, const EventServerSimulate_t *const msg)
{
  CEntitySystem::ExecuteQueuedOperations(g_pEntitySystem, 0);
}


// CLoopModeGame::OnServerPostSimulate  (line 1584, @0x000000000209cde0, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventServerGamePostSimulate_t&)>, DispatchEvent<EventServerGamePostSimulate_t>, GetVTableIndex, ~CDontUseThisGameSystem
// calls: IGameSystem::DispatchEventInternal, IGameSystem::~IGameSystem, __cxa_guard_acquire, __cxa_guard_release, _Unwind_Resume
// globals: EventServerGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameS, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServe
void __fastcall CLoopModeGame::OnServerPostSimulate(
        CLoopModeGame *const this,
        const EventServerPostSimulate_t *const msg)
{
  GameSystemEventId_t v3; // edi
  IGameSystem v4; // [rsp+0h] [rbp-20h] BYREF

  v3 = EventServerGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventServerGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v4._vptr_IGameSystem = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew);
    }
    v4._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew;
    EventServerGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew
                                                                             + 216))(&v4);
    v4._vptr_IGameSystem = off_3FC3E30;
    IGameSystem::~IGameSystem(&v4);
    v3 = EventServerGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v3, 0xD9uLL, msg);
}


// CLoopModeGame::OnPrintSpawnGroupStatus  (line 1591, @0x000000000209c750, libserver.so)
void __fastcall CLoopModeGame::OnPrintSpawnGroupStatus(
        CLoopModeGame *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  (*(*g_pNetworkServerService + 264LL))(g_pNetworkServerService, ctx, args);
}


// PostAnimDebuggerTickOrFrameEvent  (line 1600, @0x00000000020b2400, libserver.so)
// calls: operator new [], Plat_FloatTime, Plat_GetClockStart
// callers: CSource2Server::GameFrame
void __fastcall PostAnimDebuggerTickOrFrameEvent(AnimationSnapshotType_t type)
{
  float *v2; // rbx
  double v3; // xmm0_8
  __m128d v4; // xmm0
  float v5; // xmm1_4
  __int64 ClockStart; // rax
  double v7; // xmm0_8

  if ( (*(*g_pAnimationSystem + 264LL))(g_pAnimationSystem) != -1 )
  {
    v2 = operator new[](0x10u);
    v4.m128d_f64[0] = Plat_FloatTime(v3);
    v5 = _mm_movedup_pd(v4).m128d_f64[0];
    v2[2] = v5;
    ClockStart = Plat_GetClockStart();
    if ( ClockStart < 0 )
      v7 = (ClockStart & 1 | (ClockStart >> 1)) + (ClockStart & 1 | (ClockStart >> 1));
    else
      v7 = ClockStart;
    *v2 = v7;
    *(v2 + 3) = type;
    (*(*g_pVConComm + 128LL))(g_pVConComm, 1095652422, 1, 16, v2);
  }
}


// CLoopModeGame::OnClientPauseSimulate  (line 1613, @0x00000000020b24b0, libserver.so)
void __fastcall CLoopModeGame::OnClientPauseSimulate(
        CLoopModeGame *const this,
        const EventClientPauseSimulate_t *const msg)
{
  ;
}


// CLoopModeGame::OnClientPreSimulate  (line 1621, @0x00000000020b24c0, libserver.so)
void __fastcall CLoopModeGame::OnClientPreSimulate(
        CLoopModeGame *const this,
        const EventClientPreSimulate_t *const msg)
{
  ;
}


// CLoopModeGame::OnClientPostSimulate  (line 1636, @0x00000000020b24d0, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventClientGamePostSimulate_t&)>, DispatchEvent<EventClientGamePostSimulate_t>, GetVTableIndex, ~CDontUseThisGameSystem
// calls: IGameSystem::DispatchEventInternal, IGameSystem::~IGameSystem, __cxa_guard_acquire, __cxa_guard_release, _Unwind_Resume
// globals: EventClientGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameS, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClien
void __fastcall CLoopModeGame::OnClientPostSimulate(
        CLoopModeGame *const this,
        const EventClientPostSimulate_t *const msg)
{
  GameSystemEventId_t v3; // edi
  IGameSystem v4; // [rsp+0h] [rbp-20h] BYREF

  v3 = EventClientGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventClientGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v4._vptr_IGameSystem = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew);
    }
    v4._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew;
    EventClientGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew
                                                                             + 224))(&v4);
    v4._vptr_IGameSystem = off_3FC3E30;
    IGameSystem::~IGameSystem(&v4);
    v3 = EventClientGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v3, 0xE1uLL, msg);
}


// CLoopModeGame::OnClientSimulate  (line 1651, @0x00000000020b25a0, libserver.so)
void __fastcall CLoopModeGame::OnClientSimulate(CLoopModeGame *const this, const EventClientSimulate_t *const msg)
{
  ;
}


// CLoopModeGame::OnClientSceneSystemThreadStateChange  (line 1733, @0x00000000020b25b0, libserver.so)
void __fastcall CLoopModeGame::OnClientSceneSystemThreadStateChange(
        CLoopModeGame *const this,
        const EventClientSceneSystemThreadStateChange_t *const msg)
{
  ;
}


// CLoopModeGame::OnClientPreOutput  (line 1747, @0x00000000020b25c0, libserver.so)
void __fastcall CLoopModeGame::OnClientPreOutput(CLoopModeGame *const this, const EventClientPreOutput_t *const msg)
{
  ;
}


// CLoopModeGame::OnClientPostOutput  (line 1754, @0x00000000020b25d0, libserver.so)
void __fastcall CLoopModeGame::OnClientPostOutput(CLoopModeGame *const this, const EventClientPostOutput_t *const msg)
{
  ;
}


// CLoopModeGame::OnFrameBoundary  (line 1761, @0x000000000209d300, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGameFrameBoundary_t&)>, DispatchEvent<EventGameFrameBoundary_t>, GetVTableIndex, ~CDontUseThisGameSystem
// calls: CEntitySystem::PerformPreRenderCleanup, IGameSystem::DispatchEventInternal, IGameSystem::~IGameSystem, __cxa_guard_acquire, __cxa_guard_release, _Unwind_Resume
// globals: EventGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameB
void __fastcall CLoopModeGame::OnFrameBoundary(CLoopModeGame *const this, const EventFrameBoundary_t *const msg)
{
  GameSystemEventId_t v3; // edi
  IGameSystem v4; // [rsp+0h] [rbp-20h] BYREF

  CEntitySystem::PerformPreRenderCleanup(g_pEntitySystem);
  v3 = EventGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v4._vptr_IGameSystem = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew);
    }
    v4._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew;
    EventGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew
                                                                        + 232))(&v4);
    v4._vptr_IGameSystem = off_3FC3E30;
    IGameSystem::~IGameSystem(&v4);
    v3 = EventGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v3, 0xE9uLL, msg);
}


// CLoopModeGame::DisconnectGame  (line 1770, @0x00000000020b25e0, libserver.so)  // inlines: CreateEvent
// calls: CSource2Server::WriteNetDebugInfo
// callers: CLoopModeGame::LoopShutdown, CLoopModeGame::OnLoopDeactivate
// strings: "server_shutdown", "quit"
// globals: gameeventmanager
void __fastcall CLoopModeGame::DisconnectGame(CLoopModeGame *const this, ENetworkDisconnectionReason nReason)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  CSource2Server::WriteNetDebugInfo(g_pSource2ServerInternal);
  (*(*g_pNetworkServerService + 256LL))(g_pNetworkServerService, nReason);
  v3 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "server_shutdown", 0, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*v3 + 136LL))(v3, "reason", "quit");
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v4, 0);
  }
}


// CLoopModeGame::OnFirstMapLoaded  (line 1796, @0x00000000020b2860, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CLoopModeGame::OnLoopActivate
// strings: "SV", "%s:  CLoopModeGame::OnFirstMapLoaded\n"
void __fastcall CLoopModeGame::OnFirstMapLoaded(CLoopModeGame *const this)
{
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
    LoggingSystem_Log(LOG_SERVER, 0, "%s:  CLoopModeGame::OnFirstMapLoaded\n", "SV");
}


