// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_team_commander.h:27
struct sIncomingStun {
	EHANDLE hTarget;  // +0x0
	float fExpireTime;  // +0x4
	sIncomingStun();

	// sizeof = 8
};

// src/game/server/dota/bot/dota_bot_team_commander.h:33
struct sBotHumanRequest {
	int iRequestType;  // +0x0
	EHANDLE hEntity;  // +0x10

	sBotHumanRequest();

	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_team_commander.h:64
struct sHealthTime {
	float fHealth;  // +0x0
	float fTime;  // +0x4
	sHealthTime(float, float);

	// sizeof = 8
};

// src/game/server/dota/bot/dota_bot_team_commander.h:72
struct sCreepHealthInfo {
	EHANDLE hCreep;  // +0x0

	sCreepHealthInfo();
	~sCreepHealthInfo();

	// sizeof = 544
};

// src/game/server/dota/bot/dota_bot_team_commander.h:86
struct sItemPickupInfo {
	EHANDLE hUnit;  // +0x0
	EHANDLE hItemContainer;  // +0x4
	bool bPickup;  // +0x8

	int iUrgency;  // +0xc
	sItemPickupInfo();

	// sizeof = 16
};

// src/game/server/dota/bot/dota_bot_team_commander.h:108
class CAvoidanceQuery {
	int m_nRawAvoidance;  // +0x0
	CAvoidanceQuery(int);
	bool InTowerAvoidance();
	bool InInnerTowerAvoidance();
	bool InFountainAvoidance();
	bool InEffectAvoidance(bool);
	int NumCreepAvoidance();
	int NumHeroAvoidance();

	// sizeof = 4
};

// src/game/server/dota/bot/dota_bot_team_commander.h:130
class CDOTA_TeamCommander {
	enum TeamCommanderUnitList_t {
		UNIT_LIST_ALL = 0,
		UNIT_LIST_ALLIES = 0x1,
		UNIT_LIST_ALLIED_HEROES = 0x2,
		UNIT_LIST_ALLIED_CREEPS = 0x3,
		UNIT_LIST_ALLIED_WARDS = 0x4,
		UNIT_LIST_ENEMIES = 0x5,
		UNIT_LIST_ENEMY_HEROES = 0x6,
		UNIT_LIST_ENEMY_CREEPS = 0x7,
		UNIT_LIST_ENEMY_WARDS = 0x8,
		UNIT_LIST_NEUTRAL_CREEPS = 0x9,
		UNIT_LIST_THINKERS = 0xa,
	};

	struct CLaningSpeech {
		struct OpponentInfo_t {
			float m_fSecondsSeen;  // +0x4
			float m_fLastSeen;  // +0x8
			OpponentInfo_t();
			bool IsValid();
			void Invalidate();
			void Initialize(CDOTA_BaseNPC_Hero *);

			// sizeof = 28
		};
		/* tag__fprintf: const_type tag not supported! */;

	private:

		float m_fLaneMissingCalled[4];  // +0x2a0
		bool m_bDisabled;  // +0x2b0
		void Think(CDOTA_TeamCommander *);
		float GetLaneMissingTime(DOTA_LANE);
		void SetLaneMissingTime(DOTA_LANE, float);
		float GetLaneMissingThreshold();
		CLaningSpeech();
		OpponentInfo_t * FindOpponentInfo(CDOTA_BaseNPC_Hero *, bool);
		bool SpeakMissing(CDOTA_BaseNPC *, const OpponentInfo_t &);

		// sizeof = 692
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CDOTA_TeamCommander;  // +0x0
private:

	int m_nLastUnitsCollectTick;  // +0x10

	bool m_bLateGame;  // +0x360

	float m_LaneLengths[4];  // +0x364
	float m_LaneFrontCreepsAmounts[2][4];  // +0x374
	float m_LaneFrontTowersAmounts[2][4];  // +0x394

	float m_fNextPotentialLocationTick[24];  // +0x3d0
	int m_iPotentialLocationBuffer[24];  // +0x430
	EHANDLE m_hRoamingUnit;  // +0x910
	float m_fPushLaneDesire[4];  // +0xab8
	float m_fPushLaneRawDesire[4];  // +0xac8
	float m_fPushLaneConvenienceDesire[4];  // +0xad8
	float m_fDefendLaneDesire[4];  // +0xae8
	float m_fDefendLaneUrgencyDesire[4];  // +0xaf8
	float m_fDefendLanePowerDesire[4];  // +0xb08
	float m_fFarmLaneDesire[4];  // +0xb18
	int m_iLastSeenRoshanHealth;  // +0xb28
	float m_fRoshanDesire;  // +0xb2c
	float m_fRoamDesire;  // +0xc20
	float m_fRoamOffensivePowerFactor;  // +0xc24
	float m_fRoamDistanceFactor;  // +0xc28
	float m_fRoamPositionFactor;  // +0xc2c
	EHANDLE m_hRoamTarget;  // +0xc30
	float m_fHeroSelectionTimes[24];  // +0xc40

	bool m_bCreatedLobbyBots;  // +0xe30

	float m_fGoodLuckFlavorTextTime;  // +0xe34
	float m_fTeamfightFlavorTextTime;  // +0xe38
	float m_fCongratulateHeroFlavorTextTime;  // +0xe3c
	float m_fLastAliveHeroHistorySnapshotTime;  // +0xe40
	int m_iAliveHeroHistoryIndex;  // +0xe44
	int m_iAliveHeroHistory[5];  // +0xe48

	HSCRIPT m_hHeroSelectionScriptScope;  // +0xe70
	HSCRIPT m_hTeamLevelDesiresScriptScope;  // +0xe78
	float m_fExecutionTime[30];  // +0xe80
	int m_iCurExecutionTime;  // +0xef8

	~CDOTA_TeamCommander();
	CDOTA_TeamCommander(CDOTA_TeamCommander &);
	CDOTA_TeamCommander(const CDOTA_TeamCommander &);
	CDOTA_TeamCommander();

	void Init(DOTATeam_t);
	void Shutdown();
	void GameInit(const EventGameInit_t &);
	void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	void GameShutdown(const EventGameShutdown_t &);
	void Think();
	void AccumulateExecutionTime(float);
	void ClearExecutionTime();
	float GetExecutionTime();
	DOTATeam_t GetTeamNumber();
	DOTATeam_t GetOpposingTeamNumber();
	CDOTA_TeamCommander * GetOpposingTeamCommander();
	const CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetCouriers();
	bool IsBotDisabled(EHANDLE);
	int GetRequestedBotDifficulty(int);
	void RegisterUnit(CDOTA_BaseNPC *);
	void UnregisterUnit(CDOTA_BaseNPC *);
	int NumBots();
	CDOTA_Bot * GetBotByIndex(int);
	CDOTA_Bot * GetBotByPlayerID(int);
	void MakeHeroSelection(int);
	void SelectHero(int, const char *);
	float GetTeamOffensivePower(bool);
	float GetOpposingTeamOffensivePower(bool);
	bool IsInLateGame();
	CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetUnitList(TeamCommanderUnitList_t);
	void RemoveFromUnitsLists(EHANDLE);
	void OnSpawn(CDOTA_BaseNPC *);
	void OnDeath(CDOTA_BaseNPC *);
	void OnHeroKill(CDOTA_BaseNPC_Hero *, CDOTA_BaseNPC_Hero *);
	void OnCourierCreated(CDOTA_BaseNPC *);
	void OnRunePickup(CDOTA_Item_Rune *);
	void OnRuneSpawn();
	void ChatMessageRequest(CDOTAPlayer *, const char *, const char *, bool, bool);
	void CommanderChatMessageRequest(const char *, const char *, bool, bool);
	Vector GetLocationFromGrid(int, int);
	void GetGridFromLocation(const Vector &, int *, int *);
	float GetGridSizeX();
	float GetGridSizeY();
	int GetGridCountX();
	int GetGridCountY();
	bool IsLocationVisibleToEnemy(const Vector &, float);
	bool IsGridVisibleToEnemy(int, int, float);
	bool IsLocationPassable(const Vector &);
	bool IsGridPassable(int, int);
	int GetLocationHeightLevel(const Vector &);
	int GetGridHeightLevel(int, int);
	float GetLocationHeight(const Vector &);
	float GetGridHeight(int, int);
	bool IsUnitPotentiallyNearby(const Vector &, CDOTA_BaseNPC *, float);
	int GetPotentialDamage(CDOTA_BaseNPC *, float, const Vector &);
	int GetUnitPotentialValue(const Vector &, CDOTA_BaseNPC *, float);
	void GetPotentialLocationValues(const Vector &, float, int *);
	float GetNearbyEnemyOffensivePower(const Vector &, float);
	float GetNearbyAlliedOffensivePower(const Vector &, float);
	int GetRawAvoidanceForLocation(const Vector &);
	int GetRawAvoidanceForGrid(int, int);
	CAvoidanceQuery GetAvoidanceQuery(int, int);
	bool InTowerAvoidanceLocation(const Vector &);
	bool InTowerAvoidanceGrid(int, int);
	bool InInnerTowerAvoidanceLocation(const Vector &);
	bool InInnerTowerAvoidanceGrid(int, int);
	bool InFountainAvoidanceLocation(const Vector &);
	bool InFountainAvoidanceGrid(int, int);
	bool InEffectAvoidanceLocation(const Vector &, bool);
	bool InEffectAvoidanceGrid(int, int, bool);
	int NumCreepAvoidanceLocation(const Vector &);
	int NumCreepAvoidanceGrid(int, int);
	int NumHeroAvoidanceLocation(const Vector &);
	int NumHeroAvoidanceGrid(int, int);
	void FindCurrentLane(CDOTA_BaseNPC *, DOTA_LANE *, float *);
	void CalculateAmountAlongLane(DOTA_LANE, const Vector &, float *, float *);
	Vector CalculateLocationAlongLane(DOTA_LANE, float, float, float, CDOTA_Bot *);
	void FindClosestLane(const Vector &, float, DOTA_LANE *, float *);
	float GetLaneFrontAmount(int, DOTA_LANE, bool);
	Vector GetLaneFrontLocation(int, DOTA_LANE, float, float);
	float LaneDistanceToAmount(DOTA_LANE, float);
	float LaneAmountToDistance(DOTA_LANE, float);
	CDOTA_BaseNPC_Building * GetLeadBuildingInLane(DOTA_LANE);
	int GetLeadBuildingInLaneTier(DOTA_LANE);
	EHANDLE GetLaneNode(DOTA_LANE, int);
	Vector GetBaseLocation();
	bool IsInBase(const Vector &);
	bool IsLaneBeingDefended(DOTA_LANE);
	bool IsLaneBeingPushed(DOTA_LANE);
	bool IsLaneBeingFarmed(DOTA_LANE, CDOTA_Bot *);
	bool IsOurLanePushedIntoBase(DOTA_LANE);
	void UpdateLaneAssignments();
	float GetPushLaneDesire(DOTA_LANE);
	bool IsUnitInPushLaneList(DOTA_LANE, EHANDLE);
	float GetRawDefendLaneDesire(DOTA_LANE);
	float GetDefendLaneDesire(DOTA_LANE);
	bool IsUnitInDefendLaneList(DOTA_LANE, EHANDLE);
	float GetFarmLaneDesire(DOTA_LANE);
	float GetRoamDesire();
	EHANDLE GetRoamTarget();
	Vector GetRoamLocation();
	bool IsUnitInRoamList(EHANDLE);
	float GetRoshanDesire();
	bool IsUnitInRoshanList(EHANDLE);
	CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetRoshanList();
	CUtlVector<sItemPickupInfo, CUtlMemory<sItemPickupInfo, int> > & GetItemInfoArray();
	void DoCreepHealthAnalysis(const Vector &, float, CUtlVector<sCreepHealthInfo, CUtlMemory<sCreepHealthInfo, int> > *);
	void SetIncomingStun(CDOTA_BaseNPC *, float);
	bool HasIncomingStun(CDOTA_Bot *, CDOTA_BaseNPC *);
	bool IsMovementImpaired(CDOTA_Bot *, CDOTA_BaseNPC *);
	void SetRuneDibs(int, CDOTA_Bot *, float);
	CDOTA_Bot * GetRuneDibsBot(int);
	float GetRuneDibsDesire(int);
	int GetRuneType(int);
	DOTA_RUNE_STATUS GetRuneStatus(int);
	float GetRuneTimeSinceSeen(int);
	void CreateHumanRequest(int, const Vector &, bool, float);
	void CreateHumanRequest(int, EHANDLE, bool, float);
	bool HasRequestActive(int, EHANDLE, int *);
	Vector GetLatestRequest(int);
	bool AreAnyHumansOnTeam();
	bool ShouldBuyWards(CDOTA_Bot *);
	void SetRoamingUnit(CDOTA_BaseNPC *, DOTA_LANE);
	CDOTA_BaseNPC * GetRoamingUnit();
	DOTA_LANE GetRoamTargetLane();
	void DrawDebugGrid(int);
	void DrawDebugGridMinimap(int);
	void BuildDebugString(CUtlString &, const char *);
	void ReloadScripts();
	IScriptVM * GetScriptVM();
	bool IsUsingBotScript();
	const char * GetScriptDirectory();
	void GetDebugInfo(CMsgDOTABotDebugInfo *);
	void UpdateUnitLists();
	void UpdatePotentialLocationGrid();
	void UpdateAvoidanceGrid();
	void UpdateIncomingStuns();
	void UpdateRuneVision();
	void UpdateRequests();
	void UpdateHeroSelections();
	void UpdateDisabledBots();
	void UpdateGlyphUsage();
	void UpdateCourierBoostUsage();
	void UpdatePushLaneDesires();
	void UpdateDefendLaneDesires();
	void UpdateFarmLaneDesires();
	void UpdateRoamDesire();
	void UpdateRoshanDesire();
	void UpdateItemsDesire();
	void FlavorTextThink();
	void GoodLuckFlavorTextThink();
	void TeamfightFlavorTextThink();
	void CongratulateFlavorTextThink();
	void OnTeamfightWin();
	void CalculateLaneFronts();
	Vector FindLeastOccupiedLocationInOBB(const Vector &, const Vector &, const Vector &, CDOTA_Bot *);
	int CountAliveHeroes();
	void InitScripting(const char *);
	void ShutdownScripting();
	bool LoadScript(const char *, const char *, HSCRIPT *, bool);
	void ClearScriptModules();
	void LoadHeroSelectionScript(bool);
	void LoadTeamLevelDesiresScript(bool);
	bool RunScriptFunction(const char *, HSCRIPT, ScriptVariant_t *, ScriptVariant_t *);
	bool DoBotScriptHeroSelection();
	bool DoBotScriptLaneAssignments();
	bool DoBotScriptUpdatePushLaneDesires();
	bool DoBotScriptUpdateDefendLaneDesires();
	bool DoBotScriptUpdateFarmLaneDesires();
	bool DoBotScriptUpdateRoamDesire();
	bool DoBotScriptUpdateRoshanDesire();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	void OnBotScriptDetails(SteamUGCQueryCompleted_t *, bool);

	// vtable[0] GetScriptDesc
	// sizeof = 3888
};
