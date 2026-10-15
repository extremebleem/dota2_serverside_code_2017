// Reconstructed from DWARF by pahole; not original source.

// src/game/server/sceneentity_class.h:31
class CSceneListManager : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	typedef CLogicalEntity BaseClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CSceneListManager(CSceneListManager &);
	CSceneListManager(CSceneListManager &);
	CSceneListManager();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Activate(ActivateType_t);
	void ShutdownList();
	void SceneStarted(CBaseEntity *);
	void AddListManager(CSceneListManager *);
	void RemoveScene(int);
	void InputShutdown(inputdata_t &);
	virtual ~CSceneListManager();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[10] Activate
	// sizeof = 992
};

// src/game/server/sceneentity_class.h:56
class CSceneManager : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct CRestoreSceneSound {
	private:

		char soundname[128];  // +0x4
		float time_in_past;  // +0x88

		CRestoreSceneSound();
		CRestoreSceneSound(const CRestoreSceneSound &);

		// sizeof = 140
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;
	CSceneManager();

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CSceneManager *);
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	void ClearAllScenes();
	void AddSceneEntity(CSceneEntity *);
	void RemoveSceneEntity(CSceneEntity *);
	void QueueRestoredSound(CBaseFlex *, const char *, soundlevel_t, float);
	void OnClientActive(CBasePlayer *);
	void RemoveActorFromScenes(CBaseFlex *, bool, bool, const char *);
	void PauseActorsScenes(CBaseFlex *, bool);
	bool IsInInterruptableScenes(CBaseFlex *);
	void ResumeActorsScenes(CBaseFlex *, bool);
	void QueueActorsScenesToResume(CBaseFlex *, bool);
	bool IsRunningScriptedScene(CBaseFlex *, bool);
	bool IsRunningScriptedSceneAndNotPaused(CBaseFlex *, bool);
	bool IsRunningScriptedSceneWithSpeech(CBaseFlex *, bool);
	bool IsRunningScriptedSceneWithSpeechAndNotPaused(CBaseFlex *, bool);
	virtual ~CSceneManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[24] FrameUpdatePreEntityThink
	// sizeof = 72
};

// src/game/server/sceneentity_class.h:114
class CSceneEntity : public CPointEntity, public IChoreoEventCallback {
	enum {
		SCENE_ACTION_UNKNOWN = 0,
		SCENE_ACTION_CANCEL = 0x1,
		SCENE_ACTION_RESUME = 0x2,
	};

	enum {
		SCENE_BUSYACTOR_DEFAULT = 0,
		SCENE_BUSYACTOR_WAIT = 0x1,
		SCENE_BUSYACTOR_INTERRUPT = 0x2,
		SCENE_BUSYACTOR_INTERRUPT_CANCEL = 0x3,
	};

	struct SpeakEventSound_t {
		float m_flStartTime;  // +0x4
		SpeakEventSound_t();
		SpeakEventSound_t(const SpeakEventSound_t &);

		// sizeof = 8
	};

	class NetworkVar_m_bIsPlayingBack {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bPaused {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bMultiplayer {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flForceClientTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hActorList {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_nSceneStringIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};

public:

private:

	static datamap_t m_DataMap;

	string_t m_iszSceneFile;  // +0x310
	string_t m_iszResumeSceneFile;  // +0x318
	EHANDLE m_hWaitingForThisResumeScene;  // +0x320
	bool m_bWaitingForResumeScene;  // +0x324

	string_t m_iszTarget1;  // +0x328
	string_t m_iszTarget2;  // +0x330
	string_t m_iszTarget3;  // +0x338
	string_t m_iszTarget4;  // +0x340
	string_t m_iszTarget5;  // +0x348
	string_t m_iszTarget6;  // +0x350
	string_t m_iszTarget7;  // +0x358
	string_t m_iszTarget8;  // +0x360
	EHANDLE m_hTarget1;  // +0x368
	EHANDLE m_hTarget2;  // +0x36c
	EHANDLE m_hTarget3;  // +0x370
	EHANDLE m_hTarget4;  // +0x374
	EHANDLE m_hTarget5;  // +0x378
	EHANDLE m_hTarget6;  // +0x37c
	EHANDLE m_hTarget7;  // +0x380
	EHANDLE m_hTarget8;  // +0x384

	float m_flCurrentTime;  // +0x390
	float m_flFrameTime;  // +0x394
	bool m_bCancelAtNextInterrupt;  // +0x398

	float m_fPitch;  // +0x39c
	bool m_bAutomated;  // +0x3a0

	int m_nAutomatedAction;  // +0x3a4
	float m_flAutomationDelay;  // +0x3a8
	float m_flAutomationTime;  // +0x3ac
	bool m_bPausedViaInput;  // +0x3b0
	bool m_bWaitingForActor;  // +0x3b1
	bool m_bWaitingForInterrupt;  // +0x3b2
	bool m_bInterruptedActorsScenes;  // +0x3b3
	bool m_bBreakOnNonIdle;  // +0x3b4

	bool m_bSceneMissing;  // +0x3e8

	static const ConVar * m_pcvSndMixahead;
	COutputEvent m_OnStart;  // +0x400
	COutputEvent m_OnCompletion;  // +0x418
	COutputEvent m_OnCanceled;  // +0x430
	COutputEvent m_OnTrigger1;  // +0x448
	COutputEvent m_OnTrigger2;  // +0x460
	COutputEvent m_OnTrigger3;  // +0x478
	COutputEvent m_OnTrigger4;  // +0x490
	COutputEvent m_OnTrigger5;  // +0x4a8
	COutputEvent m_OnTrigger6;  // +0x4c0
	COutputEvent m_OnTrigger7;  // +0x4d8
	COutputEvent m_OnTrigger8;  // +0x4f0
	COutputEvent m_OnTrigger9;  // +0x508
	COutputEvent m_OnTrigger10;  // +0x520
	COutputEvent m_OnTrigger11;  // +0x538
	COutputEvent m_OnTrigger12;  // +0x550
	COutputEvent m_OnTrigger13;  // +0x568
	COutputEvent m_OnTrigger14;  // +0x580
	COutputEvent m_OnTrigger15;  // +0x598
	COutputEvent m_OnTrigger16;  // +0x5b0
	int m_nInterruptCount;  // +0x5c8
	bool m_bInterrupted;  // +0x5cc

	bool m_bCompletedEarly;  // +0x5d4
	bool m_bInterruptSceneFinished;  // +0x5d5

	bool m_bRestoring;  // +0x608
	bool m_bGenerated;  // +0x609

	string_t m_iszSoundName;  // +0x610
	EHANDLE m_hActivator;  // +0x61c
	int m_BusyActor;  // +0x620
	int m_iPlayerDeathBehavior;  // +0x624
	EHANDLE m_hCamera;  // +0x630
	typedef CPointEntity BaseClass;
	typedef CSceneEntity ThisClass;
	CSceneEntity(CSceneEntity &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	CSceneEntity();
	virtual ~CSceneEntity();
	virtual void StartEvent(float, CChoreoScene *, CChoreoEvent *);
	virtual void EndEvent(float, CChoreoScene *, CChoreoEvent *);
	virtual void ProcessEvent(float, CChoreoScene *, CChoreoEvent *);
	virtual bool CheckEvent(float, CChoreoScene *, CChoreoEvent *);
	virtual int UpdateTransmitState();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void SetRecipientFilter(IRecipientFilter *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	virtual void OnRestore();
	virtual void OnLoaded();
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual void OnSceneFinished(bool, bool);
	virtual void DoThink(float);
	virtual void PauseThink();
	bool IsPlayingBack();
	bool IsPaused();
	bool IsMultiplayer();
	bool IsInterruptable();
	virtual void ClearInterrupt();
	virtual void CheckInterruptCompletion();
	virtual bool InterruptThisScene(CSceneEntity *);
	void RequestCompletionNotification(CSceneEntity *);
	virtual void NotifyOfCompletion(CSceneEntity *);
	void AddListManager(CSceneListManager *);
	void ClearActivatorTargets();
	void SetBreakOnNonIdle(bool);
	bool ShouldBreakOnNonIdle();
	void InputStartPlayback(inputdata_t &);
	void InputPausePlayback(inputdata_t &);
	void InputResumePlayback(inputdata_t &);
	void InputCancelPlayback(inputdata_t &);
	void InputCancelAtNextInterrupt(inputdata_t &);
	void InputPitchShiftPlayback(inputdata_t &);
	void InputTriggerEvent(inputdata_t &);
	void InputInterjectResponse(inputdata_t &);
	void InputStopWaitingForActor(inputdata_t &);
	virtual void StartPlayback();
	virtual void PausePlayback();
	virtual void ResumePlayback();
	virtual void CancelPlayback();
	virtual void PitchShiftPlayback(float);
	virtual void QueueResumePlayback();
	bool ValidScene();
	CChoreoScene * LoadScene(const char *, IChoreoEventCallback *);
	void UnloadScene();
	bool SpeakEventSoundLessFunc(const SpeakEventSound_t &, const SpeakEventSound_t &);
	bool GetSoundNameForPlayer(CChoreoEvent *, CBasePlayer *, char *, size_t);
	void BuildSortedSpeakEventSoundsPrefetchList(CChoreoScene *, CUtlSymbolTable &, CUtlRBTree<CSceneEntity::SpeakEventSound_t, short unsigned int, bool (*)(const CSceneEntity::SpeakEventSound_t&, const CS, float);
	void PrefetchSpeakEventSounds(CUtlSymbolTable &, CUtlRBTree<CSceneEntity::SpeakEventSound_t, short unsigned int, bool (*)(const CSceneEntity::SpeakEventSound_t&, const CS);
	virtual void DispatchStartExpression(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchEndExpression(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartFlexAnimation(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchEndFlexAnimation(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartGesture(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchEndGesture(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartLookAt(CChoreoScene *, CBaseFlex *, CBaseEntity *, CChoreoEvent *);
	virtual void DispatchEndLookAt(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartMoveTo(CChoreoScene *, CBaseFlex *, CBaseEntity *, CChoreoEvent *);
	virtual void DispatchEndMoveTo(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartSpeak(CChoreoScene *, CBaseFlex *, CChoreoEvent *, soundlevel_t);
	virtual void DispatchEndSpeak(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartFace(CChoreoScene *, CBaseFlex *, CBaseEntity *, CChoreoEvent *);
	virtual void DispatchEndFace(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartSequence(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchEndSequence(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartSubScene(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartInterrupt(CChoreoScene *, CChoreoEvent *);
	virtual void DispatchEndInterrupt(CChoreoScene *, CChoreoEvent *);
	virtual void DispatchStartGeneric(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchEndGeneric(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartPermitResponses(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchEndPermitResponses(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchProcessLoop(CChoreoScene *, CChoreoEvent *);
	virtual void DispatchPauseScene(CChoreoScene *, const char *);
	virtual void DispatchStopPoint(CChoreoScene *, const char *);
	virtual float EstimateLength();
	void CancelIfSceneInvolvesActor(CBaseEntity *);
	bool InvolvesActor(CBaseEntity *);
	void GenerateSoundScene(CBaseFlex *, const char *);
	virtual float GetPostSpeakDelay();
	bool HasUnplayedSpeech();
	bool HasFlexAnimation();
	void SetCurrentTime(float, bool);
	void InputScriptPlayerDeath(inputdata_t &);
	void AddBroadcastTeamTarget(int);
	void RemoveBroadcastTeamTarget(int);
	virtual CBaseFlex * FindNamedActor(int);
	virtual CBaseFlex * FindNamedActor(CChoreoActor *);
	virtual CBaseFlex * FindNamedActor(const char *);
	virtual CBaseEntity * FindNamedEntity(const char *, CBaseEntity *, bool, bool);
	CBaseEntity * FindNamedTarget(string_t, bool);
	virtual CBaseEntity * FindNamedEntityClosest(const char *, CBaseEntity *, bool, bool, const char *);
	void ScriptStartPlayback(HSCRIPT);
	void ScriptCancelPlayback();
	HSCRIPT ScriptFindNamedEntity(const char *);
	bool ScriptLoadSceneFromString(const char *, const char *);
	HSCRIPT ScriptFindCamera();

private:

	void SetRestoring(bool);
	virtual void Think();
	void ClearSceneEvents(CChoreoScene *, bool);
	void ClearSchedules(CChoreoScene *);
	float GetSoundSystemLatency();
	void PrecacheScene(CChoreoScene *);
	CChoreoScene * GenerateSceneForSound(CBaseFlex *, const char *);
	bool CheckActors();
	void PrefetchAnimBlocks(CChoreoScene *);
	bool ShouldNetwork();
	void SetBackground(bool);
	bool IsBackground();
	virtual CTriggerCamera * FindCamera();
	virtual void SetCamera(CTriggerCamera *);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[4] GetScriptDesc
	// vtable[207] StartEvent
	// vtable[208] EndEvent
	// vtable[209] ProcessEvent
	// vtable[210] CheckEvent
	// vtable[64] UpdateTransmitState
	// vtable[65] ShouldTransmit
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[18] OnRestore
	// vtable[211] OnLoaded
	// vtable[79] DrawDebugTextOverlays
	// vtable[212] OnSceneFinished
	// vtable[213] DoThink
	// vtable[214] PauseThink
	// vtable[215] ClearInterrupt
	// vtable[216] CheckInterruptCompletion
	// vtable[217] InterruptThisScene
	// vtable[218] NotifyOfCompletion
	// vtable[219] StartPlayback
	// vtable[220] PausePlayback
	// vtable[221] ResumePlayback
	// vtable[222] CancelPlayback
	// vtable[223] PitchShiftPlayback
	// vtable[224] QueueResumePlayback
	// vtable[225] DispatchStartExpression
	// vtable[226] DispatchEndExpression
	// vtable[227] DispatchStartFlexAnimation
	// vtable[228] DispatchEndFlexAnimation
	// vtable[229] DispatchStartGesture
	// vtable[230] DispatchEndGesture
	// vtable[231] DispatchStartLookAt
	// vtable[232] DispatchEndLookAt
	// vtable[233] DispatchStartMoveTo
	// vtable[234] DispatchEndMoveTo
	// vtable[235] DispatchStartSpeak
	// vtable[236] DispatchEndSpeak
	// vtable[237] DispatchStartFace
	// vtable[238] DispatchEndFace
	// vtable[239] DispatchStartSequence
	// vtable[240] DispatchEndSequence
	// vtable[241] DispatchStartSubScene
	// vtable[242] DispatchStartInterrupt
	// vtable[243] DispatchEndInterrupt
	// vtable[244] DispatchStartGeneric
	// vtable[245] DispatchEndGeneric
	// vtable[246] DispatchStartPermitResponses
	// vtable[247] DispatchEndPermitResponses
	// vtable[248] DispatchProcessLoop
	// vtable[249] DispatchPauseScene
	// vtable[250] DispatchStopPoint
	// vtable[251] EstimateLength
	// vtable[252] GetPostSpeakDelay
	// vtable[253] FindNamedActor
	// vtable[254] FindNamedActor
	// vtable[255] FindNamedActor
	// vtable[256] FindNamedEntity
	// vtable[257] FindNamedEntityClosest
	// vtable[117] Think
	// vtable[258] FindCamera
	// vtable[259] SetCamera
	// sizeof = 1592
};
