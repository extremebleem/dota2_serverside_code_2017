// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_commander.h:108
struct sIllusionState {
	EHANDLE hHero;  // +0x0
	sIllusionState();

	// sizeof = 8
};

// src/game/server/dota/bot/dota_bot_commander.h:122
class CDOTA_Commander : public IGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct sBotDebugEntity {
		EHANDLE m_DebugEntity;  // +0x4
		sBotDebugEntity();
		sBotDebugEntity(const sBotDebugEntity &);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	bool m_bWasBotGame;  // +0x11

	int m_iGridCount[2];  // +0x1e88
	typedef IGameSystem BaseClass;
	CDOTA_Commander(CDOTA_Commander &);
	CDOTA_Commander(const CDOTA_Commander &);
	CDOTA_Commander();

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_Commander *);
	virtual bool Init();
	virtual void Shutdown();
	virtual void GameInit(const EventGameInit_t &);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	bool IsBotGame();
	const char * GetUnusedBotName();
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	bool HaveAnyBots();
	bool ReplaceDisconnectedWithBots();
	void RegisterUnit(CDOTA_BaseNPC *);
	void UnregisterUnit(CDOTA_BaseNPC *);
	void ChangeUnitTeam(CDOTA_BaseNPC *, int);
	void RegisterAllUnits();
	void SetDebugState(DOTA_BOT_DEBUG_STATE, EHANDLE);
	void ClearDebugState(EHANDLE);
	bool IsDebuggingEntity(DOTA_BOT_DEBUG_STATE, EHANDLE);
	void DrawDebug();
	CDOTA_TeamCommander * GetTeamCommander(int);
	CDOTA_TeamCommander * GetOtherTeamCommander(int);
	void OnSpawn(CDOTA_BaseNPC *);
	void OnDeath(CDOTA_BaseNPC *);
	void OnHeroKill(CDOTA_BaseNPC_Hero *, CDOTA_BaseNPC_Hero *);
	void OnCourierCreated(CDOTA_BaseNPC *);
	void OnDidDamage(CDOTA_BaseNPC *, CDOTA_BaseNPC *, CDOTABaseAbility *, int);
	void OnTakeDamage(CDOTA_BaseNPC *, const CTakeDamageInfo &);
	void OnAttacked(CDOTA_BaseNPC *, const CDOTA_AttackRecord *);
	void OnAbilityCreated(CDOTA_BaseNPC *, CDOTABaseAbility *);
	void OnAbilityExecuted(CDOTA_BaseNPC *, CDOTABaseAbility *, CBaseEntity *);
	void OnItemEquip(CDOTA_BaseNPC *, CDOTA_Item *, bool);
	void OnRunePickup(CDOTA_Item_Rune *);
	void OnRuneSpawn();
	Vector GetLocationFromGrid(int, int);
	void GetGridFromLocation(const Vector &, int *, int *);
	float GetGridSizeX();
	float GetGridSizeY();
	const Vector2D & GetWorldMins();
	const Vector2D & GetWorldMaxs();
	int GetGridCountX();
	int GetGridCountY();
	void UpdatePassabilityGrid();
	bool IsLocationPassable(const Vector &);
	bool IsGridPassable(int, int);
	int GetLocationHeightLevel(const Vector &);
	int GetGridHeightLevel(int, int);
	float GetLocationHeight(const Vector &);
	float GetGridHeight(int, int);
	void HandlePing(int, int, int);
	void RegisterThinker(EHANDLE);
	CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetThinkerList();
	void CleanUpThinkerList();
	void UpdateIllusionStates();
	void ClearIllusionState(CDOTA_BaseNPC_Hero *);
	DOTA_BOT_ILLUSION_STATE GetIllusionState(CDOTA_BaseNPC_Hero *);
	Vector GetWardLocation(DotaBotWardLocation_t);
	void SetBotRunningScript(CDOTA_Bot_Script *);
	void SetTeamRunningScript(DOTATeam_t);
	DOTATeam_t GetTeamRunningScript();
	CDOTA_Bot * GetBotRunningScript();
	CDOTA_BaseNPC * GetNPCRunningScript();
	IScriptVM * GetActiveScriptVM();

private:

	sIllusionState * FindIllusionState(CDOTA_BaseNPC_Hero *);
	bool AreGridNavCellsOfNeighborsPassible(int, int);
	void DoPassabilityGridAnalysis(int, int);
	void UnregisterUnitFromTeam(CDOTA_BaseNPC *, int);
	void ComputeWardLocations();
	virtual ~CDOTA_Commander();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[3] GameInit
	// vtable[18] ActiveSpawnGroupChanged
	// vtable[4] GameShutdown
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 8152
};
