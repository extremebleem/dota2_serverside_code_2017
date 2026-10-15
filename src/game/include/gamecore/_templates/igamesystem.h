// Reconstructed from DWARF by pahole; not original source.

// src/game/include/gamecore/igamesystem.h:747
class CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager> : public CBaseGameSystemFactory {
public:

protected:

	CGameSystemReallocatingFactory(CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager> &);
	CGameSystemReallocatingFactory(const CGameSystemReallocatingFactory<CServerAchievementManager, CServerAchievementManager> &);
	CGameSystemReallocatingFactory(const char *, CServerAchievementManager * *);
	virtual bool Init();
	virtual void PostInit();
	virtual void Shutdown();
	virtual int GetPriority();
	virtual IGameSystem * CreateGameSystem();
	virtual void DestroyGameSystem(IGameSystem *);
	virtual bool ShouldAutoAdd();
	virtual void SetGlobalPtr(void *);
	virtual bool IsReallocating();
	virtual IGameSystem * GetStaticGameSystem();

	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[6] GetPriority
	// vtable[3] CreateGameSystem
	// vtable[4] DestroyGameSystem
	// vtable[5] ShouldAutoAdd
	// vtable[7] SetGlobalPtr
	// vtable[8] IsReallocating
	// vtable[9] GetStaticGameSystem
	// sizeof = 32
};

// src/game/include/gamecore/igamesystem.h:747
class CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem> : public CBaseGameSystemFactory {
public:

protected:

	CGameSystemReallocatingFactory(CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem> &);
	CGameSystemReallocatingFactory(const CGameSystemReallocatingFactory<CWorldGameSystem, CWorldGameSystem> &);
	CGameSystemReallocatingFactory(const char *, CWorldGameSystem * *);
	virtual bool Init();
	virtual void PostInit();
	virtual void Shutdown();
	virtual int GetPriority();
	virtual IGameSystem * CreateGameSystem();
	virtual void DestroyGameSystem(IGameSystem *);
	virtual bool ShouldAutoAdd();
	virtual void SetGlobalPtr(void *);
	virtual bool IsReallocating();
	virtual IGameSystem * GetStaticGameSystem();

	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[6] GetPriority
	// vtable[3] CreateGameSystem
	// vtable[4] DestroyGameSystem
	// vtable[5] ShouldAutoAdd
	// vtable[7] SetGlobalPtr
	// vtable[8] IsReallocating
	// vtable[9] GetStaticGameSystem
	// sizeof = 32
};

// src/game/include/gamecore/igamesystem.h:747
class CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook> : public CBaseGameSystemFactory {
public:

protected:

	CGameSystemReallocatingFactory(CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook> &);
	CGameSystemReallocatingFactory(const CGameSystemReallocatingFactory<CStepSimulationHook, CStepSimulationHook> &);
	CGameSystemReallocatingFactory(const char *, CStepSimulationHook * *);
	virtual bool Init();
	virtual void PostInit();
	virtual void Shutdown();
	virtual int GetPriority();
	virtual IGameSystem * CreateGameSystem();
	virtual void DestroyGameSystem(IGameSystem *);
	virtual bool ShouldAutoAdd();
	virtual void SetGlobalPtr(void *);
	virtual bool IsReallocating();
	virtual IGameSystem * GetStaticGameSystem();

	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[6] GetPriority
	// vtable[3] CreateGameSystem
	// vtable[4] DestroyGameSystem
	// vtable[5] ShouldAutoAdd
	// vtable[7] SetGlobalPtr
	// vtable[8] IsReallocating
	// vtable[9] GetStaticGameSystem
	// sizeof = 32
};

// src/game/include/gamecore/igamesystem.h:804
class CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager> : public CBaseGameSystemFactory {
public:

private:

	CGameSystemStaticFactory(CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager> &);
	CGameSystemStaticFactory(const CGameSystemStaticFactory<CClientUIDialogManager, CClientUIDialogManager> &);
	CGameSystemStaticFactory(const char *, CClientUIDialogManager * *, CClientUIDialogManager *);
	virtual bool Init();
	virtual void PostInit();
	virtual void Shutdown();
	virtual int GetPriority();
	virtual IGameSystem * CreateGameSystem();
	virtual void DestroyGameSystem(IGameSystem *);
	virtual bool ShouldAutoAdd();
	virtual void SetGlobalPtr(void *);
	virtual bool IsReallocating();
	virtual IGameSystem * GetStaticGameSystem();

	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[6] GetPriority
	// vtable[3] CreateGameSystem
	// vtable[4] DestroyGameSystem
	// vtable[5] ShouldAutoAdd
	// vtable[7] SetGlobalPtr
	// vtable[8] IsReallocating
	// vtable[9] GetStaticGameSystem
	// sizeof = 40
};

// src/game/include/gamecore/igamesystem.h:804
class CGameSystemStaticFactory<CFogSystem, CFogSystem> : public CBaseGameSystemFactory {
public:

private:

	CGameSystemStaticFactory(CGameSystemStaticFactory<CFogSystem, CFogSystem> &);
	CGameSystemStaticFactory(const CGameSystemStaticFactory<CFogSystem, CFogSystem> &);
	CGameSystemStaticFactory(const char *, CFogSystem * *, CFogSystem *);
	virtual bool Init();
	virtual void PostInit();
	virtual void Shutdown();
	virtual int GetPriority();
	virtual IGameSystem * CreateGameSystem();
	virtual void DestroyGameSystem(IGameSystem *);
	virtual bool ShouldAutoAdd();
	virtual void SetGlobalPtr(void *);
	virtual bool IsReallocating();
	virtual IGameSystem * GetStaticGameSystem();

	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[6] GetPriority
	// vtable[3] CreateGameSystem
	// vtable[4] DestroyGameSystem
	// vtable[5] ShouldAutoAdd
	// vtable[7] SetGlobalPtr
	// vtable[8] IsReallocating
	// vtable[9] GetStaticGameSystem
	// sizeof = 40
};

// src/game/include/gamecore/igamesystem.h:804
class CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem> : public CBaseGameSystemFactory {
public:

private:

	CGameSystemStaticFactory(CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem> &);
	CGameSystemStaticFactory(const CGameSystemStaticFactory<CResourcePrecacherGameSystem, CResourcePrecacherGameSystem> &);
	CGameSystemStaticFactory(const char *, CResourcePrecacherGameSystem * *, CResourcePrecacherGameSystem *);
	virtual bool Init();
	virtual void PostInit();
	virtual void Shutdown();
	virtual int GetPriority();
	virtual IGameSystem * CreateGameSystem();
	virtual void DestroyGameSystem(IGameSystem *);
	virtual bool ShouldAutoAdd();
	virtual void SetGlobalPtr(void *);
	virtual bool IsReallocating();
	virtual IGameSystem * GetStaticGameSystem();

	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[6] GetPriority
	// vtable[3] CreateGameSystem
	// vtable[4] DestroyGameSystem
	// vtable[5] ShouldAutoAdd
	// vtable[7] SetGlobalPtr
	// vtable[8] IsReallocating
	// vtable[9] GetStaticGameSystem
	// sizeof = 40
};

// src/game/include/gamecore/igamesystem.h:883
class CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem> : public IGameSystemFactory {
public:

protected:

	CGameSystemAbstractFactory(CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem> &);
	CGameSystemAbstractFactory(const CGameSystemAbstractFactory<CVScriptGameSystem, IVScriptGameSystem> &);
	CGameSystemAbstractFactory(IVScriptGameSystem * *);
	virtual bool Init();
	virtual void PostInit();
	virtual void Shutdown();
	virtual int GetPriority();
	virtual IGameSystem * CreateGameSystem();
	virtual void DestroyGameSystem(IGameSystem *);
	virtual bool ShouldAutoAdd();
	virtual void SetGlobalPtr(void *);
	virtual bool IsReallocating();
	virtual IGameSystem * GetStaticGameSystem();

	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[6] GetPriority
	// vtable[3] CreateGameSystem
	// vtable[4] DestroyGameSystem
	// vtable[5] ShouldAutoAdd
	// vtable[7] SetGlobalPtr
	// vtable[8] IsReallocating
	// vtable[9] GetStaticGameSystem
	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:1048
class CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal, 0> : public IGameSystem {
public:

private:

	static CUtlDelegate<bool()> sm_InitFunc;
	static CUtlDelegate<void()> sm_ShutdownFunc;
	CStartupHookGameSystem(CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal, 0> &);
	CStartupHookGameSystem(const CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal, 0> &);
	CStartupHookGameSystem();
	bool StaticInit();
	void StaticShutdown();
	int GetPriority();
	virtual ~CStartupHookGameSystem();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:1048
class CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal, 0> : public IGameSystem {
public:

private:

	static CUtlDelegate<bool()> sm_InitFunc;
	static CUtlDelegate<void()> sm_ShutdownFunc;
	CStartupHookGameSystem(CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal, 0> &);
	CStartupHookGameSystem(const CStartupHookGameSystem<GameToolEventToolTraceRayResult_tInternal, 0> &);
	CStartupHookGameSystem();
	bool StaticInit();
	void StaticShutdown();
	int GetPriority();
	virtual ~CStartupHookGameSystem();

	// sizeof = 16
};

// src/game/include/gamecore/igamesystem.h:1048
class CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal, 0> : public IGameSystem {
public:

private:

	static CUtlDelegate<bool()> sm_InitFunc;
	static CUtlDelegate<void()> sm_ShutdownFunc;
	CStartupHookGameSystem(CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal, 0> &);
	CStartupHookGameSystem(const CStartupHookGameSystem<GameToolEventTraceRayServerToolEvent_tInternal, 0> &);
	CStartupHookGameSystem();
	bool StaticInit();
	void StaticShutdown();
	int GetPriority();
	virtual ~CStartupHookGameSystem();

	// sizeof = 16
};

// CGameSystemReallocatingFactory: 56 more instantiations (full list in INDEX.tsv)
//   CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem, CSpawnGroupMgrGameSystem>
//   CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>
//   CGameSystemReallocatingFactory<CSimThinkHook, CSimThinkHook>
//   CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, GameToolEventToolEvent
//   CGameSystemReallocatingFactory<CRenderGameSystem, CRenderGameSystem>
//   CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>
//   CGameSystemReallocatingFactory<CNotifyManager, INotify>
//   CGameSystemReallocatingFactory<CLightQueryGameSystem, CLightQueryGameSystem>
//   CGameSystemReallocatingFactory<CEntityTouchManager, CEntityTouchManager>
//   CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>
//   CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>
//   CGameSystemReallocatingFactory<CBodyGameSystem, CBodyGameSystem>
//   CGameSystemReallocatingFactory<CAimTargetManager, CAimTargetManager>
//   CGameSystemReallocatingFactory<CBreakModelsPrecached, CBreakModelsPrecached>
//   CGameSystemReallocatingFactory<CPropData, CPropData>
//   CGameSystemReallocatingFactory<CDebugOverlayGameSystem, CDebugOverlayGameSystem>
//   CGameSystemReallocatingFactory<CScenePrecacheSystem, CScenePrecacheSystem>
//   CGameSystemReallocatingFactory<GameToolEventToolTraceRayResult_tHookupGameSystem, GameToolEventToolTraceRayResult_tHooku
//   CGameSystemReallocatingFactory<GameToolEventTraceRayServerToolEvent_tHookupGameSystem, GameToolEventTraceRayServerToolEv
//   CGameSystemReallocatingFactory<GameToolEventDestroyAllEntitiesToolEvent_tHookupGameSystem, GameToolEventDestroyAllEntiti
//   CGameSystemReallocatingFactory<GameToolEventRestartMapToolEvent_tHookupGameSystem, GameToolEventRestartMapToolEvent_tHoo
//   CGameSystemReallocatingFactory<GameToolEventDestroyEntityToolEvent_tHookupGameSystem, GameToolEventDestroyEntityToolEven
//   CGameSystemReallocatingFactory<GameToolEventSpawnEntityToolEvent_tHookupGameSystem, GameToolEventSpawnEntityToolEvent_tH
//   CGameSystemReallocatingFactory<GameToolEventToolEvent_SFMToolActiveStateChanged_tHookupGameSystem, GameToolEventToolEven
//   CGameSystemReallocatingFactory<GameToolEventToolEvent_FireEntityInput_tHookupGameSystem, GameToolEventToolEvent_FireEnti
//   CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputsResult_tHookupGameSystem, GameToolEventToolEvent_Ge
//   CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInputs_tHookupGameSystem, GameToolEventToolEvent_GetEntit
//   CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfoResult_tHookupGameSystem, GameToolEventToolEvent_GetE
//   CGameSystemReallocatingFactory<GameToolEventToolEvent_GetEntityInfo_tHookupGameSystem, GameToolEventToolEvent_GetEntityI
//   CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem, GameEvent_RegisterHookupGameSystem>
//   CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>
//   CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>
//   CGameSystemReallocatingFactory<CRespawnAllEntitiesSystem, CRespawnAllEntitiesSystem>
//   CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem, CSpawnGroupCompletionCallbackGameSystem>
//   CGameSystemReallocatingFactory<CCommentarySystem, CCommentarySystem>
//   CGameSystemReallocatingFactory<CColorCorrectionSystem, CColorCorrectionSystem>
//   CGameSystemReallocatingFactory<CClientPrecacheGameSystem, CClientPrecacheGameSystem>
//   CGameSystemReallocatingFactory<CHLTVDirector, CHLTVDirector>
//   CGameSystemReallocatingFactory<CGameRulesGameSystem, CGameRulesGameSystem>
//   CGameSystemReallocatingFactory<CMarkupManager, CMarkupManager>
//   CGameSystemReallocatingFactory<CPhysicsHook, CPhysicsHook>
//   CGameSystemReallocatingFactory<CRagdollLowViolenceManager, CRagdollLowViolenceManager>
//   CGameSystemReallocatingFactory<CPVSManager, IPVSManager>
//   CGameSystemReallocatingFactory<CPrecacheGameSystem, CPrecacheGameSystem>
//   CGameSystemReallocatingFactory<CPrecacheRegister, CPrecacheRegister>
//   CGameSystemReallocatingFactory<CSoundscapeSystem, CSoundscapeSystem>
//   CGameSystemReallocatingFactory<CSceneManager, CSceneManager>
//   CGameSystemReallocatingFactory<CCheckClient, CCheckClient>
//   CGameSystemReallocatingFactory<CDOTA_AutoSaveGameSystem, CDOTA_AutoSaveGameSystem>
//   CGameSystemReallocatingFactory<CDOTAEventLog, CDOTAEventLog>
//   CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>
//   CGameSystemReallocatingFactory<CDOTA_ActiveModifiersList, CDOTA_ActiveModifiersList>
//   CGameSystemReallocatingFactory<CDOTA_QuestSystem, CDOTA_QuestSystem>
//   CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>
//   CGameSystemReallocatingFactory<CDOTA_UnitFilterCache, CDOTA_UnitFilterCache>
//   CGameSystemReallocatingFactory<CNavGameSystem, CNavGameSystem>

// CGameSystemStaticFactory: 56 more instantiations (full list in INDEX.tsv)
//   CGameSystemStaticFactory<CCustomGameEventManager, CCustomGameEventManager>
//   CGameSystemStaticFactory<CDefaultResponseSystem, IResponseSystem>
//   CGameSystemStaticFactory<CWeaponScriptParser, CWeaponScriptParser>
//   CGameSystemStaticFactory<CWeaponList, CWeaponList>
//   CGameSystemStaticFactory<CCombatCharVisCache, CCombatCharVisCache>
//   CGameSystemStaticFactory<CCleanupDefaultRelationships, CCleanupDefaultRelationships>
//   CGameSystemStaticFactory<CResponseQueueManager, CResponseQueueManager>
//   CGameSystemStaticFactory<CVisibilityMonitor, CVisibilityMonitor>
//   CGameSystemStaticFactory<CDirtySpatialPartitionEntityList, CDirtySpatialPartitionEntityList>
//   CGameSystemStaticFactory<CDecalEmitterSystem, IDecalEmitterSystem>
//   CGameSystemStaticFactory<CGameTimescale, CGameTimescale>
//   CGameSystemStaticFactory<CGlobalState, CGlobalState>
//   CGameSystemStaticFactory<CBaseGameStats_Driver, CBaseGameStats_Driver>
//   CGameSystemStaticFactory<CAnchorList, CAnchorList>
//   CGameSystemStaticFactory<CParticleSystemQueryGameSystem, CParticleSystemQueryGameSystem>
//   CGameSystemStaticFactory<CPlayerVoiceListener, CPlayerVoiceListener>
//   CGameSystemStaticFactory<CLagCompensationManager, ILagCompensationManager>
//   CGameSystemStaticFactory<CRagdollLRURetirement, CRagdollLRURetirement>
//   CGameSystemStaticFactory<CPostProcessSystem, CPostProcessSystem>
//   CGameSystemStaticFactory<CSoundControllerImp, CSoundControllerImp>
//   CGameSystemStaticFactory<CSoundEmitterSystem, CSoundEmitterSystem>
//   CGameSystemStaticFactory<CFlexSceneFileManager, CFlexSceneFileManager>
//   CGameSystemStaticFactory<CTrackedControllerManager, CTrackedControllerManager>
//   CGameSystemStaticFactory<CDOTA_AttackRecordManager, CDOTA_AttackRecordManager>
//   CGameSystemStaticFactory<CDOTA_AbilityAnimations, CDOTA_AbilityAnimations>
//   CGameSystemStaticFactory<CDOTA_ActionDelayer, CDOTA_ActionDelayer>
//   CGameSystemStaticFactory<CCustomNetTableManager, CCustomNetTableManager>
//   CGameSystemStaticFactory<CDOTA_CustomUIManager, CDOTA_CustomUIManager>
//   CGameSystemStaticFactory<DOTA_CombatLog_Record, DOTA_CombatLog_Record>
//   CGameSystemStaticFactory<CDOTA_CombatLog, CDOTA_CombatLog>
//   CGameSystemStaticFactory<CDOTA_RealtimeCombatAnalyzer, CDOTA_RealtimeCombatAnalyzer>
//   CGameSystemStaticFactory<CDOTA_CombatAnalyzer, CDOTA_CombatAnalyzer>
//   CGameSystemStaticFactory<CDOTAChallengeSystem, CDOTAChallengeSystem>
//   CGameSystemStaticFactory<CDOTA_BinaryObjectSystem, CDOTA_BinaryObjectSystem>
//   CGameSystemStaticFactory<CGridNav, CGridNav>
//   CGameSystemStaticFactory<CDOTAGameManager, CDOTAGameManager>
//   CGameSystemStaticFactory<CDOTAFogOfWarSystem, CDOTAFogOfWarSystem>
//   CGameSystemStaticFactory<CDOTAHLTVDirector, CDOTAHLTVDirector>
//   CGameSystemStaticFactory<CDOTA_OGS_VPROF, CDOTA_OGS_VPROF>
//   CGameSystemStaticFactory<CDOTASteamWorksGameStatsServer, CDOTASteamWorksGameStatsServer>
//   CGameSystemStaticFactory<CDOTA_ProjectileManager, CDOTA_ProjectileManager>
//   CGameSystemStaticFactory<CDOTA_ParticleManagerSystem, CDOTA_ParticleManagerSystem>
//   CGameSystemStaticFactory<CDOTA_Tutorial, CDOTA_Tutorial>
//   CGameSystemStaticFactory<CDotaStatManager, CDotaStatManager>
//   CGameSystemStaticFactory<CDOTASpectatorGraphManager, CDOTASpectatorGraphManager>
//   CGameSystemStaticFactory<CDOTAVoteSystem, CDOTAVoteSystem>
//   CGameSystemStaticFactory<CDOTA_Grinder, CDOTA_Grinder>
//   CGameSystemStaticFactory<CDOTA_AutoCombinableItems, CDOTA_AutoCombinableItems>
//   CGameSystemStaticFactory<CDOTA_Commander, CDOTA_Commander>
//   CGameSystemStaticFactory<CDOTAHeroList, CDOTAHeroList>
//   CGameSystemStaticFactory<CDOTACustomGameCache, CDOTACustomGameCache>
//   CGameSystemStaticFactory<CDOTAGCServerSystem, CDOTAGCServerSystem>
//   CGameSystemStaticFactory<CAnnouncerSharedThinker, CAnnouncerSharedThinker>
//   CGameSystemStaticFactory<CDOTA_TeleportTimerManager, CDOTA_TeleportTimerManager>
//   CGameSystemStaticFactory<CItemGeneration, CItemGeneration>
//   CGameSystemStaticFactory<CDOTAInventoryManager, CDOTAInventoryManager>

// CStartupHookGameSystem: 11 more instantiations (full list in INDEX.tsv)
//   CStartupHookGameSystem<GameToolEventDestroyAllEntitiesToolEvent_tInternal, 0>
//   CStartupHookGameSystem<GameToolEventRestartMapToolEvent_tInternal, 0>
//   CStartupHookGameSystem<GameToolEventDestroyEntityToolEvent_tInternal, 0>
//   CStartupHookGameSystem<GameToolEventSpawnEntityToolEvent_tInternal, 0>
//   CStartupHookGameSystem<GameToolEventToolEvent_SFMToolActiveStateChanged_tInternal, 0>
//   CStartupHookGameSystem<GameToolEventToolEvent_FireEntityInput_tInternal, 0>
//   CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputsResult_tInternal, 0>
//   CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInputs_tInternal, 0>
//   CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfoResult_tInternal, 0>
//   CStartupHookGameSystem<GameToolEventToolEvent_GetEntityInfo_tInternal, 0>
//   CStartupHookGameSystem<GameEvent_RegisterInternal, 17408>
