// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_tutorial.h:27
struct NPCSpeechData_t {
	const char * pszNPCName;  // +0x0
	const char * pszNPCNameSound;  // +0x8
	float flLifetime;  // +0x10
	float flInitialDelay;  // +0x14
	float flStartAt;  // +0x18
	bool bFindNearestFriendly;  // +0x1c
	bool bAllowMovement;  // +0x1d
	bool bShouldFacePlayer;  // +0x1e

	NPCSpeechData_t();
	~NPCSpeechData_t();
	NPCSpeechData_t(const NPCSpeechData_t &);

	// sizeof = 80
};

// src/game/server/dota/dota_tutorial.h:41
struct ReactiveTipDescription_t {
	const char * pszInternalName;  // +0x0
	const char * pszTipEvent;  // +0x8
	const char * pszTipMapIOEvent;  // +0x10
	const char * pszTipRemoveOnMapIOEvent;  // +0x18
	const char * pszTipName;  // +0x20
	const char * pszRemoveOnEvent;  // +0x28
	const char * pszRemoveOnAbility;  // +0x30

	int nRepeatCount;  // +0x88
	int nRequiredProgress;  // +0x8c
	int nCurrentProgress;  // +0x90

	bool bForceRemove;  // +0xb0
	ReactiveTipDescription_t();
	~ReactiveTipDescription_t();
	ReactiveTipDescription_t(const ReactiveTipDescription_t &);

	// sizeof = 184
};

// src/game/server/dota/dota_tutorial.h:58
struct PingData_t {
	float m_flTime;  // +0x0
	float m_flPos[3];  // +0x4
	int m_iPlayer;  // +0x14
	float m_flRepeatTime;  // +0x18
	PingData_t();

	// sizeof = 28
};

// src/game/server/dota/dota_tutorial.h:67
struct QuestLogEntry_t {
	const char * pszNPCName;  // +0x0
	const char * pszNPCSpeech;  // +0x8
	bool bIsQuest;  // +0x10

	int nQuestType;  // +0x14

	// sizeof = 24
};

// src/game/server/dota/dota_tutorial.h:78
class CDotaTutorialNetworker : public CBaseEntity {
	class NetworkVar_m_nTutorialState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nTaskProgress {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nTaskSteps {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nTaskSecondsRemianing {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nUIState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nShopState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_TargetLocation {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_SpeechBubbles {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};
	typedef CDotaTutorialNetworker ThisClass;

	class NetworkVar_m_nLocationID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_GuideStr {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_QuickBuyStr {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

public:

private:

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
	CDotaTutorialNetworker(CDotaTutorialNetworker &);
	CDotaTutorialNetworker(CDotaTutorialNetworker &);
	CDotaTutorialNetworker();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UpdateOnRemove();
	virtual int UpdateTransmitState();
	void SetItemGuide(const char *);
	void SetQuickBuy(const char *);
	virtual ~CDotaTutorialNetworker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[64] UpdateTransmitState
	// sizeof = 2576
};

// src/game/server/dota/dota_tutorial.h:108
class CDOTA_Tutorial : public IGameSystem, public CGameEventListener {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_nConvarTrackerID;  // +0x1c

	int m_nPrevShopPanel;  // +0x90
	bool m_bIsExperienced;  // +0x94
	bool m_bCleanupTutorialPostLevel;  // +0x95

	int m_nLocationID;  // +0x98

	EHANDLE m_hRoq;  // +0xf0
	char m_szFinishText[512];  // +0xf4

	bool m_bTutorialUseFullHeroPool;  // +0x310

	bool m_bLastHitHelperAllowed;  // +0x318
	typedef IGameSystem BaseClass;
	CDOTA_Tutorial(CDOTA_Tutorial &);
	CDOTA_Tutorial(const CDOTA_Tutorial &);
	CDOTA_Tutorial();

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_Tutorial *);
	virtual bool Init();
	virtual void Shutdown();
	virtual void SpawnGroupPrecache(const EventSpawnGroupPrecache_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	void InitializeTutorial();
	void StartTutorialMode();
	void SetTutorialConvar(const char *, const char *);
	void EnablePlayerOffscreenTip(bool);
	void EnableCreepAggroViz(bool);
	void EnableTowerAggroViz(bool);
	void SetWhiteListEnabled(bool);
	void AddShopWhitelistItem(const char *);
	void RemoveShopWhitelistItem(const char *);
	bool IsItemInWhiteList(const char *);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void FireGameEvent(IGameEvent *);
	bool HandleReactiveTipEvent(IGameEvent *);
	void OnPlayerFullyJoined();
	void OnEnterPreGame();
	void UpdateTutorialState();
	CDOTAPlayer * GetHumanPlayer();
	void SetLessonTo(const char *);
	const char * GetCurrentLesson();
	void ResetReactiveTip(ReactiveTipDescription_t &);
	bool ParseReactiveTip(KeyValues *, ReactiveTipDescription_t &);
	bool ParseNPCSpeech(KeyValues *, NPCSpeechData_t &);
	void ParseHeroLevelup(KeyValues *);
	void ParseHighlightHud(KeyValues *);
	void UpgradePlayerAbility(const char *);
	void SelectPlayerTeam(const char *);
	int GetPlayerTeam();
	void SelectHero(const char *);
	void MoveHero(Vector);
	void OnTutorialChangeHeroSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	void ChangeHero(const char *);
	void SetHeroLevel(int);
	void SetHeroControllable(bool);
	void SetShopOpen(bool);
	void AddTaskLocation(Vector);
	void AddCameraTaskLocation(Vector);
	void AddTimerTask(float);
	void IncrementTaskProgress();
	void CreateLocationTask(Vector);
	void ForceGameStart();
	void GivePlayerItem(const char *);
	void SetPlayerGold(int, bool);
	void EnsurePlayerLevel(int);
	void AddBot(const char *, bool);
	bool AddBotWithSettings(KeyValues *);
	bool AddBotWithSettings(const char *, const char *, const char *, bool);
	bool AddBotWithSettings_Script(const char *, const char *, const char *, bool);
	void OnAddHeroAndBotControllerSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	void AddHeroAndBotController(const char *, bool, CEntityInstance *, const CUtlDelegate<void(CDOTA_BaseNPC*, const CEntityKeyValues*)> &);
	void HealPlayer();
	void HealNPC(const char *);
	void HideNPC(const char *);
	void RevealNPC(const char *);
	void SetPlayerMovementAllowed(bool);
	void StartNPCSpeech(NPCSpeechData_t &);
	void StartNPCVO(NPCSpeechData_t &, CBaseEntity *, CBaseEntity *);
	void StopNPCSpeech(const char *);
	void AddQuestLogEntry(NPCSpeechData_t &, int);
	void AddQuestLogEntry(CDotaQuest *);
	void AddQuest(const char *, int, const char *, const char *);
	void PrintDebugQuestLog();
	CBaseEntity * GetNPCByName(const char *, bool);
	void SetNPCSleep(const char *, bool);
	void OnQuestComplete(const CDotaQuest *);
	void StartNPCAnimation(KeyValues *);
	void StopNPCAnimation(const char *);
	void CompleteQuest(const char *);
	bool GetUseFullHeroPool();
	void SetUseFullHeroPool(bool);
	void ActivatePermanentGlyph();
	void MurderAllCreeps();
	const char * FindLastHitChallengeRival();
	void BeginLastHitChallenge(DOTA_LANE, bool);
	void ActivateLastHitHelper(bool);
	void ForceGoodWin();
	void FinishTutorial();
	void CreateTutorialQuestReward();
	void CreateTutorialOpponent();
	void ClearAllTasks();
	void HandleTutorialEvent(const char *);
	void HandleMapIOEvent(const char *);
	void LoadLessonKeys(const char *);
	void FindLessonKey(const char *);
	void FindNextLesson();
	void ParseLessonKeys();
	int CalculateScore();
	void HeroTriggerTouched(const char *);
	void OnNPCAwaken();
	bool ReactiveTipFired(int);
	void FindRoquelairePerches();
	CBaseEntity * GetNearestRoquelairePerch();
	void SetExperienced(bool);
	void PostTutorialCleanup();
	void SetTowersInLaneInvulnerable(const char *);
	void SetTowersInLaneVulnerable(const char *);
	bool ValidTeleportTarget(CBaseEntity *);
	bool ValidTeleportLocation(const Vector &);
	void SetTimeFrozen(bool);
	bool GetTimeFrozen();
	void SetTutorialState(DOTATutorial_State_t);
	DOTATutorial_State_t GetTutorialState();
	void SetTaskProgress(int);
	int GetTaskProgress();
	void SetTaskSteps(int);
	int GetTaskSteps();
	void SetTaskSecondsRemaining(int);
	int GetTaskSecondsRemaining();
	void SetTutorialUI(int);
	void SetShopState(int);
	void SetTargetLocation(Vector);
	Vector GetTargetLocation();
	void SetTargetEntity(CBaseEntity *);
	CBaseEntity * GetTargetEntity();
	const char * GetSpeechBubbleSpeech(int);
	CBaseEntity * GetSpeechBubbleNPC(int);
	float GetSpeechLifetime(int);
	void SetSpeechBubble(int, CBaseEntity *, const char *, float, bool, bool);
	void SetItemGuide(const char *);
	void SetQuickBuy(const char *);
	void SetLocationID(int);
	int GetLocationID();
	void SetRoquelaire(CDOTA_BaseNPC *);
	virtual ~CDOTA_Tutorial();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[12] SpawnGroupPrecache
	// vtable[16] PreSpawnGroupUnload
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[40] FireGameEvent
	// sizeof = 800
};
