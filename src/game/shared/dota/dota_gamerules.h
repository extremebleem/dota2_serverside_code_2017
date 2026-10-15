// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_gamerules.h:284
class CDOTAGameEvents : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnDayStarted;  // +0x308
	COutputEvent m_OnNightStarted;  // +0x320
	COutputEvent m_OnRadiantFortDestroyed;  // +0x338
	COutputEvent m_OnDireFortDestroyed;  // +0x350
	COutputEvent m_OnGameEnded;  // +0x368
	COutputEvent m_OnGameStarted;  // +0x380
	typedef CBaseEntity BaseClass;

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
	CDOTAGameEvents(CDOTAGameEvents &);
	CDOTAGameEvents(CDOTAGameEvents &);
	CDOTAGameEvents();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	void SetTimeOfDay(inputdata_t &);
	virtual ~CDOTAGameEvents();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// sizeof = 920
};

// src/game/shared/dota/dota_gamerules.h:305
struct GameChatLogEntry_t {
private:

	int m_nTeam;  // +0x0
	int m_nPlayerID;  // +0x4
	uint32 m_unGameTime;  // +0x10
	GameChatLogEntry_t();

	~GameChatLogEntry_t();
	GameChatLogEntry_t(const GameChatLogEntry_t &);
	GameChatLogEntry_t & operator=(const GameChatLogEntry_t &);

	// sizeof = 24
};

// src/game/shared/dota/dota_gamerules.h:314
struct MapCategoryPosition_t {
	float m_flRadis;  // +0x18
	MapCategoryPosition_t(DOTA_POSITION_CATEGORY, float, Vector, Vector);

	// sizeof = 32
};

// src/game/shared/dota/dota_gamerules.h:329
class CDOTACustomGameEvents : public CDOTAGameEvents {
public:

private:

	static datamap_t m_DataMap;
	typedef CDOTAGameEvents BaseClass;

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
	CDOTACustomGameEvents(CDOTACustomGameEvents &);
	CDOTACustomGameEvents(CDOTACustomGameEvents &);
	CDOTACustomGameEvents();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	void InputSetGameWinner(inputdata_t &);
	void InputLevelAllHeroesUpOnce(inputdata_t &);
	void InputLevelAllHeroesToMax(inputdata_t &);
	void InputLevelAllHeroesToLevel(inputdata_t &);
	void InputSetStashPurchasingDisabled(inputdata_t &);
	void InputSetFogOfWarDisabled(inputdata_t &);
	void InputSetUnseenFogOfWarEnabled(inputdata_t &);
	virtual ~CDOTACustomGameEvents();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 920
};

// src/game/shared/dota/dota_gamerules.h:351
class CDOTAGamerulesProxy : public CGameRulesProxy {
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
	CDOTAGamerulesProxy(CDOTAGamerulesProxy &);
	CDOTAGamerulesProxy(CDOTAGamerulesProxy &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	CDOTAGamerulesProxy();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTAGamerulesProxy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 784
};

// src/game/shared/dota/dota_gamerules.h:462
struct HeroPickRecord_t {
private:

	int nHeroID;  // +0x4
	int nTeam;  // +0x8

	// sizeof = 12
};

// src/game/shared/dota/dota_gamerules.h:470
struct HeroDeathRecord_t {
private:

	int nKillerPlayerID;  // +0x0
	int nVictimPlayerID;  // +0x4
	float fTime;  // +0x8

	// sizeof = 12
};

// src/game/shared/dota/dota_gamerules.h:478
struct KillCountAdjustmentKey_t {
	AccountID_t unAccountID;  // +0x0
	KillCountAdjustmentKey_t();

	// sizeof = 16
};

// src/game/shared/dota/dota_gamerules.h:485
struct KillCountAdjustmentValue_t {
	uint32 unAdjustment;  // +0x0
	KillCountAdjustmentValue_t();

	// sizeof = 4
};

// src/game/shared/dota/dota_gamerules.h:495
struct VictoryPredictionRecord_t {
	AccountID_t unAccountID;  // +0x0

	bool bVictory;  // +0x10
	VictoryPredictionRecord_t();

	// sizeof = 24
};

// src/game/shared/dota/dota_gamerules.h:506
struct PlayerPings_t {
	uint32 unTotalPings;  // +0x0
	uint32 unMaxIntervalPings;  // +0x4
	uint32 unRecentPings;  // +0x8
	RTime32 rtRecentPingIntervalStart;  // +0xc
	float fMostRecentTime;  // +0x18
	bool bMostRecentNormal;  // +0x1c
	PlayerPings_t();
	PlayerPings_t & operator=(PlayerPings_t &);

	// sizeof = 32
};

// src/game/shared/dota/dota_gamerules.h:521
struct PlayerCommunicationStats_t {
	uint32 unTeamChatCount;  // +0x40
	uint32 unAllChatCount;  // +0x44
	uint32 unChatWheelCount;  // +0x48
	uint32 unPauseCount;  // +0x4c
	uint32 unUnpauseCount;  // +0x50
	uint32 unLinesDrawnCount;  // +0x54
	PlayerCommunicationStats_t();
	PlayerCommunicationStats_t & operator=(PlayerCommunicationStats_t &);

	// sizeof = 88
};

// src/game/shared/dota/dota_gamerules.h:537
struct ProjectionAbility_t {
	bool bTrackCasterOnly;  // +0x14

	int nAbilityID;  // +0x18
	float flEndTime;  // +0x1c
	ProjectionAbility_t();
	ProjectionAbility_t(const ProjectionAbility_t &);

	// sizeof = 32
};

// src/game/shared/dota/dota_gamerules.h:552
struct pickban_order_data_t {
	bool bTeam;  // +0x4

	float flTime;  // +0x8

	// sizeof = 12
};

// src/game/shared/dota/dota_gamerules.h:572
class CDOTA_ReconnectInfo {
private:

	uint64 m_playerSteamId;  // +0x0
	int m_iTeam;  // +0x8
	bool m_bWantsRandomHero;  // +0x10
	CDOTA_ReconnectInfo();

	// sizeof = 24
};

// src/game/shared/dota/dota_gamerules.h:584
class CDOTA_ItemStockInfo {
	class NetworkVar_iTeamNumber {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_usItemIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_fStockDuration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_fStockTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_iStockCount {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_iMaxCount {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_fInitialStockDuration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_iPlayerNumber {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CDOTA_ItemStockInfo;  // +0x0
private:

	typedef CDOTA_ItemStockInfo ThisClass;
	~CDOTA_ItemStockInfo();
	CDOTA_ItemStockInfo(CDOTA_ItemStockInfo &);
	CDOTA_ItemStockInfo(const CDOTA_ItemStockInfo &);
	CDOTA_ItemStockInfo();

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CDOTA_ItemStockInfo & operator=(const CDOTA_ItemStockInfo &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 56
};

// src/game/shared/dota/dota_gamerules.h:602
class CHeroesPerPlayer {
	class NetworkVar_m_vecHeroIDs {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	int ()() * * _vptr.CHeroesPerPlayer;  // +0x0
private:

	typedef CHeroesPerPlayer ThisClass;
	~CHeroesPerPlayer();
	CHeroesPerPlayer(CHeroesPerPlayer &);
	CHeroesPerPlayer(const CHeroesPerPlayer &);
	CHeroesPerPlayer();

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CHeroesPerPlayer & operator=(const CHeroesPerPlayer &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 48
};

// src/game/shared/dota/dota_gamerules.h:613
class CHeroStatueLiked {
	class NetworkVar_m_iPlayerIDLiker {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iPlayerIDLiked {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CHeroStatueLiked;  // +0x0
private:

	typedef CHeroStatueLiked ThisClass;
	~CHeroStatueLiked();
	CHeroStatueLiked(CHeroStatueLiked &);
	CHeroStatueLiked(const CHeroStatueLiked &);
	CHeroStatueLiked();

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CHeroStatueLiked & operator=(const CHeroStatueLiked &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 32
};

// src/game/shared/dota/dota_gamerules.h:625
class DOTA_AssassinMinigameNetworkState {
	class NetworkVar_nAssassinState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_nVictimHeroID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.DOTA_AssassinMinigameNetworkState;  // +0x0
private:

	typedef DOTA_AssassinMinigameNetworkState ThisClass;
	~DOTA_AssassinMinigameNetworkState();
	DOTA_AssassinMinigameNetworkState(DOTA_AssassinMinigameNetworkState &);
	DOTA_AssassinMinigameNetworkState(const DOTA_AssassinMinigameNetworkState &);
	DOTA_AssassinMinigameNetworkState & operator=(DOTA_AssassinMinigameNetworkState &);
	DOTA_AssassinMinigameNetworkState & operator=(const DOTA_AssassinMinigameNetworkState &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	DOTA_AssassinMinigameNetworkState();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 16
};

// src/game/shared/dota/dota_gamerules.h:625
class DOTA_AssassinMinigameNetworkState {
	class NetworkVar_nAssassinState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_nVictimHeroID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.DOTA_AssassinMinigameNetworkState;  // +0x0
private:

	DOTA_AssassinMinigameNetworkState(DOTA_AssassinMinigameNetworkState &);
	DOTA_AssassinMinigameNetworkState(const DOTA_AssassinMinigameNetworkState &);
	DOTA_AssassinMinigameNetworkState & operator=(DOTA_AssassinMinigameNetworkState &);
	DOTA_AssassinMinigameNetworkState & operator=(const DOTA_AssassinMinigameNetworkState &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	DOTA_AssassinMinigameNetworkState();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 16
};

// src/game/shared/dota/dota_gamerules.h:646
class CDOTA_AbilityDraftAbilityState {
	class NetworkVar_m_unAbilityIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unPlayerID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unAbilityPlayerSlot {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CDOTA_AbilityDraftAbilityState;  // +0x0
private:

	typedef CDOTA_AbilityDraftAbilityState ThisClass;
	~CDOTA_AbilityDraftAbilityState();
	CDOTA_AbilityDraftAbilityState(CDOTA_AbilityDraftAbilityState &);
	CDOTA_AbilityDraftAbilityState(const CDOTA_AbilityDraftAbilityState &);

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CDOTA_AbilityDraftAbilityState();
	CDOTA_AbilityDraftAbilityState & operator=(const CDOTA_AbilityDraftAbilityState &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 32
};

// src/game/shared/dota/dota_gamerules.h:646
class CDOTA_AbilityDraftAbilityState {
	class NetworkVar_m_unAbilityIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unPlayerID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unAbilityPlayerSlot {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CDOTA_AbilityDraftAbilityState;  // +0x0
private:

	typedef CDOTA_AbilityDraftAbilityState ThisClass;

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CDOTA_AbilityDraftAbilityState();

	// vtable[0] Schema_DynamicBinding
	// sizeof = 32
};

// src/game/shared/dota/dota_gamerules.h:646
class CDOTA_AbilityDraftAbilityState {
	class NetworkVar_m_unAbilityIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unPlayerID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unAbilityPlayerSlot {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CDOTA_AbilityDraftAbilityState;  // +0x0
private:

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CDOTA_AbilityDraftAbilityState();

	// vtable[0] Schema_DynamicBinding
	// sizeof = 32
};

// src/game/shared/dota/dota_gamerules.h:695
class CDOTAGameStateInfo {
	const char * m_pStateName;  // +0x8
	CUtlDelegate<void()> pfnEnterState;  // +0x10
	CUtlDelegate<void()> pfnLeaveState;  // +0x28
	CUtlDelegate<void()> pfnThink;  // +0x40
	CDOTAGameStateInfo();
	CDOTAGameStateInfo(const CDOTAGameStateInfo &);

	// sizeof = 88
};

// src/game/shared/dota/dota_gamerules.h:706
class CDOTAHeroPickStateInfo {
	const char * m_pStateName;  // +0x8
	CUtlDelegate<void()> pfnEnterState;  // +0x10
	CUtlDelegate<void()> pfnLeaveState;  // +0x28
	CUtlDelegate<void()> pfnThink;  // +0x40
	CDOTAHeroPickStateInfo();
	CDOTAHeroPickStateInfo(const CDOTAHeroPickStateInfo &);

	// sizeof = 88
};

// src/game/shared/dota/dota_gamerules.h:717
class CDOTAGamerules : public CTeamplayRules {
	enum SmartSelectRandomHeroFlags {
		SMARTSELECTRANDOMHERO_IMPLMENTED_BOT = 0x1,
		SMARTSELECTRANDOMHERO_EASYMODE_HERO = 0x2,
	};

	class NetworkVar_m_iMiscHeroPickCounter {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hEndGameCinematicEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hOverlayHealthBarUnit {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nOverlayHealthBarType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsInCinematicMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bFreeCourierMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	struct ARDMReconnectInfo_t {
		int m_nPlayerID;  // +0x0
		EHANDLE m_hOldHero;  // +0x4
		EHANDLE m_hHero;  // +0x8
		ARDMReconnectInfo_t();
		ARDMReconnectInfo_t(const ARDMReconnectInfo_t &);

		// sizeof = 12
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NetworkVar_m_unFanfareGoodGuys {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unFanfareBadGuys {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	enum {
		DOTA_FANFARE_UPDATE_RATE = 0x5,
	};

	class NetworkVar_m_nGameState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nHeroPickState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flStateTransitionTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flOverride_dota_hero_selection_time {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flOverride_dota_pregame_time {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flOverride_dota_postgame_time {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flOverride_dota_strategy_time {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flOverride_dota_team_showcase_duration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flOverride_dota_rune_spawn_time {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iGameMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hGameModeEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flHeroPickStateTransitionTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iPlayerIDsInControl {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bSameHeroSelectionEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUseCustomHeroXPValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUseBaseGoldBountyOnHeroes {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUseUniversalShopMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bHideKillMessageHeaders {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flHeroMinimapIconScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flCreepMinimapIconScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flRuneMinimapIconScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_CustomVictoryMessage {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_flCustomGameEndDelay {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flCustomGameSetupAutoLaunchDelay {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flCustomGameSetupTimeout {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flCustomVictoryMessageDuration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCustomGameSetupAutoLaunchEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCustomGameTeamSelectionLocked {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iCMModePickBanOrder {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iCDModePickBanOrder {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iPauseTeam {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nGGTeam {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flGGEndsAtTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bWhiteListEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bItemWhiteList {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_nLastHitUIMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bHUDTimerTutorialMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fExtraTimeRemaining {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_bHeroRespawnEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsRandomingEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iCaptainPlayerIDs {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_BannedHeroes {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_SelectedHeroes {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iActiveTeam {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iStartingTeam {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iPenaltyLevelRadiant {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iPenaltyLevelDire {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bTier3TowerDestroyed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nSeriesType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nRadiantSeriesWins {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nDireSeriesWins {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecAvailableHerosPerPlayerID {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};
	typedef CDOTAGamerules ThisClass;

	class NetworkVar_m_vecLockedHerosByPlayerID {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_flPreGameStartTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flGameStartTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flGameEndTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flGameLoadTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iCustomGameScore {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_nCustomGameDifficulty {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fGoodGlyphCooldown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fBadGlyphCooldown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flGlyphCooldowns {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_fGoodRadarCooldown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fBadRadarCooldown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flRadarCooldowns {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_bIsNightstalkerNight {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsTemporaryNight {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nRiverType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecItemStockInfo {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_nGameWinner {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unMatchID64 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bMatchSignoutComplete {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hSideShop1 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hSideShop2 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hSecretShop1 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hSecretShop2 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hTeamFountains {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hTeamForts {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hTeamShops {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hAnnouncerGood {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hAnnouncerBad {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hAnnouncerSpectator {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hAnnouncerGood_KillingSpree {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hAnnouncerBad_KillingSpree {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hAnnouncerSpectator_KillingSpree {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fGameTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iNetTimeOfDay {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nLoadedPlayers {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nExpectedPlayers {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iMinimapDebugGridState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iFoWFrameNumber {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsStableMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bGamePaused {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_BotDebugPushLane {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_BotDebugDefendLane {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_BotDebugFarmLane {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_BotDebugRoam {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hBotDebugRoamTarget {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_BotDebugRoshan {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_nRoshanRespawnPhase {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flRoshanRespawnPhaseEndTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_AbilityDraftAbilities {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_nAbilityDraftPlayerTracker {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nAbilityDraftRoundNumber {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nAbilityDraftAdvanceSteps {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nAbilityDraftPhase {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nAbilityDraftHeroesChosen {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_nAllDraftPhase {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAllDraftRadiantFirst {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAllowOverrideVPK {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nARDMHeroesRemaining {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	enum EWaitingForPlayersState {
		EWFPS_Loading = 0,
		EWFPS_Success = 0x1,
		EWFPS_Failed = 0x2,
	};

	struct gamestatetransitions_t {
		float curtime;  // +0x0
		float realtime;  // +0x4

		// sizeof = 12
	};

	class NetworkVar_m_lobbyType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_lobbyLeagueID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_lobbyGameName {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_vecHeroStatueLiked {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_CustomGameTeamMaxPlayers {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_vecIngameEvents {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_NeutralSpawnBoxes {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	bool m_bIsInClientSideCinematicMode;  // +0x349

	int m_nStartingGold;  // +0x34c
	int m_nGoldPerTick;  // +0x350
	float m_flGoldTickTime;  // +0x354
	float m_flFanfareTime;  // +0x378
	int m_iFOWDefeatedTempViewer;  // +0x37c
	bool m_bInitTournament;  // +0x380
	bool m_bIsTournament;  // +0x381

	float m_flOverride_dota_tree_regrow_time;  // +0x3a8

	bool m_bRDFirstThink;  // +0x560
	bool m_RDMessageSent[64];  // +0x561

	bool m_bHasSwapped[64];  // +0x5c0

	int m_CustomGameForceSelectHero[24];  // +0x748
	float m_flGoldTime;  // +0x7a8
	float m_flXPTime;  // +0x7ac
	float m_flCreepSpawntime;  // +0x7b0
	float m_flAnnounceStartTime;  // +0x7b4
	int m_iGoodTomeCount;  // +0x7b8
	int m_iBadTomeCount;  // +0x7bc
	bool m_bEnemyModifiersEnabled;  // +0x7dc

	int m_iWaves;  // +0x7e0
	int m_iCreepUpgradeState;  // +0x7e4

	float m_flGoldRedistributeTime;  // +0x870
	int m_nGoldToRedistribute[2];  // +0x874
	float m_flNextPreGameThink;  // +0x87c
	float m_flNextAllDraftGoldThink;  // +0x880

	double m_flTimeEnteredState;  // +0x888
	uint32 m_unRiverAccountID;  // +0x890

	uint64 m_ulRiverItemID;  // +0x898

	class NetworkVar_m_AssassinMiniGameNetData : public DOTA_AssassinMinigameNetworkState {
	public:

		NetworkVar_m_AssassinMiniGameNetData(NetworkVar_m_AssassinMiniGameNetData &);
		NetworkVar_m_AssassinMiniGameNetData(const NetworkVar_m_AssassinMiniGameNetData &);
		~NetworkVar_m_AssassinMiniGameNetData();
		NetworkVar_m_AssassinMiniGameNetData();
		void CopyFrom(const DOTA_AssassinMinigameNetworkState &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 16
	};

	float m_fTimeOfDay;  // +0xa40

	float m_fPauseRawTime;  // +0xad8
	float m_fPauseCurTime;  // +0xadc
	float m_fUnpauseRawTime;  // +0xae0
	float m_fUnpauseCurTime;  // +0xae4
	bool m_bGameTimeFrozen;  // +0xae8

	bool m_bUseAlternateABRules;  // +0xaf8
	bool m_bLobbyIsAssociatedWithGame;  // +0xaf9

	int m_nARDMHeroesPrecached;  // +0xc38
	float m_fLastARDMPrecache;  // +0xc3c

	bool m_bAbilityDraftCurrentPlayerHasPicked;  // +0xc50

	KillCountAdjustmentMap_t m_mapKillCountAdjustments;  // +0x1da8
	VictoryPredictionVector_t m_vecVictoryPredictions;  // +0x1de8
	int m_iPreviousRune;  // +0x1ec0
	int m_iAllStarMatchReady;  // +0x1ec4
	float m_fNextRuneSpawnTime;  // +0x1ec8
	bool m_bFirstRune;  // +0x1ecc

	float m_fNextSnapshotTime;  // +0x1ed0
	EHANDLE m_hRoshanSpawner;  // +0x1ed4
	int m_iPreviousSpectators;  // +0x1ed8
	bool m_bTeammateEvaluationMatch;  // +0x1edc

	int m_rgAssignedPlayerID[24];  // +0x1ee0
	uint32 m_nMaxSpectators;  // +0x1f40

	EHANDLE m_hGameEvents;  // +0x1f78

	bool m_bUseLenientAFK[2];  // +0x22c8
	bool m_bFirstBlood;  // +0x22ca

	int m_nFirstBloodTime;  // +0x22cc

	int m_nAnnounceHeroPickRadiantPlayerID;  // +0x22e8
	int m_nAnnounceHeroPickDirePlayerID;  // +0x22ec
	int m_nRecordBalanceTime;  // +0x22f0

	bool m_bTeamHasAbandonedPlayer[10];  // +0x2800
	bool m_bLobbyHasLeaverDetected;  // +0x280a
	bool m_bGameIsForcedSafeToLeave;  // +0x280b
	bool m_bLobbyHasDicardMatchResults;  // +0x280c

	unsigned int m_nTeamRoshanKills[10];  // +0x2810
	int m_iGameEndReason;  // +0x2838
	float m_flPauseTime;  // +0x283c
	int m_pausingPlayerId;  // +0x2840
	int m_unpausingPlayerId;  // +0x2844
	int m_nPausesRemaining[64];  // +0x2848
	float m_nLastPauseTime[64];  // +0x2948
	bool m_bNotifiedPlayerLeaverStatus[64];  // +0x2a48
	bool m_bUploadedReplay;  // +0x2a88

	float m_flLobbyWaitTime;  // +0x2a8c
	bool m_bGameWasLoaded;  // +0x2a90

	int m_nLoadPauseFrameCount;  // +0x2a94

	double m_flStateFallbackTransitionTime;  // +0x2aa0

	static int s_GameStateTransitionsIndex;
	static CUtlArray<CDOTAGamerules::gamestatetransitions_t, 16ul> s_GameStateTransitions;
	bool m_bFatalErrorAbortGame;  // +0x4138
	bool m_bFillEmptySlotsWithBots;  // +0x4139

	SpawnGroupHandle_t m_dotaMapSpawnGroup;  // +0x413c

	CUtlMap<unsigned int, KeyValues*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_mapCustomGameAccountRecords;  // +0x42e8
	double m_flTimeWaitStartCustomGameAccountRecords;  // +0x4310
	HSCRIPT m_hCustomGameAccountRecordSaveFunction;  // +0x4318
	HSCRIPT m_hCustomGameAccountRecordSaveContext;  // +0x4320
	typedef ThisClass ThisClass_m_AssassinMiniGameNetData;
	CDOTAGamerules(const CDOTAGamerules &);
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);

	CDOTAGamerules();
	virtual ~CDOTAGamerules();
	virtual bool Damage_IsTimeBased(int);
	virtual int Damage_GetTimeBased();
	virtual bool ShouldCollide(int, int);
	virtual void Shutdown();
	virtual void PreFatalShutdown();
	virtual bool PlayerCanHearChat(CBasePlayer *, CBasePlayer *, int);
	virtual bool Damage_NoPhysicsForce(int);
	uint32 GetFanfareForTeam(int);
	void SetFanfareForTeam(int, uint32);
	bool IsTournamentGame();
	void PrecacheResources(IEntityResourceManifest *);
	void PrecacheResourcesFromKeys(KeyValues *, IEntityResourceManifest *);
	bool IsInBotMode();
	bool IsCustomGame();
	bool IsEventGame();
	bool IsAddOnGame();
	bool IsTowerBackdoorProtectionEnabled();
	bool IsBotThinkingEnabled();
	bool IsCustomGame_HeroDemoOrWorkshopTest();
	virtual bool FAllowNPCs();
	bool IsWhiteListEnabled();
	void SetWhiteListEnabled(bool);
	int GetLastHitUIMode();
	void SetLastHitUIMode(int);
	bool IsHUDTimerTutorialMode();
	void SetHUDTimerTutorialMode(bool);
	const CDOTALobby * GetLobbyForGame();
	virtual void CreateStandardEntities();
	virtual void DestroyStandardEntities();
	virtual const char * GetChatFormat(bool, CBasePlayer *, int);
	virtual void OnPlayerChatted(CBasePlayer *, int, const char *, const char *);
	void AddEventToChatLog(int, const char *);
	void OnGGCallMade(int, bool);
	void OnCancelGG(int);
	int GetNumChatLogEntries();
	const GameChatLogEntry_t & GetChatLogEntry(int);
	virtual bool ClientConnected(CEntityIndex, const char *, const char *, char *, int);
	virtual void ClientDisconnected(CEntityIndex, ENetworkDisconnectionReason);
	void UpdateAutomaticSurrender();
	void CheckIdleAndDisconnectedPlayers();
	void OnGCObjectUpdated(SOID_t, const CSharedObject *);
	void SERVER_RequestPCBangAdditionalItems();
	void OnLobbyUpdated(const CDOTALobby *);
	void StartCreateHeroStatues();
	void LogSteamKick(CSteamID &, int);
	void Steam_OnGSClientKick(GSClientKick_t *);
	void Steam_OnGSClientDeny(GSClientDeny_t *);
	void CreateDemoPlayers(int, int);
	void CreateTutorialOpponent();
	void CreateTutorialQuestRewared();
	virtual bool ShouldTimeoutClient(int, float);
	bool AllHumanPlayers();
	int GetTeamScore(int);
	int NumHumanPlayers();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void BuildGameSessionManifest(const EventBuildGameSessionManifest_t &);
	virtual void SpawnGroupPrecache(const EventSpawnGroupPrecache_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	void BuildPositionList();
	DOTA_POSITION_CATEGORY CategorizePosition(Vector);
	bool IsInRangeOfFountain(CDOTA_BaseNPC *);
	bool IsInRangeOfFountain(int, const Vector &);
	int TeamOfNearestFountain(const Vector &);
	float GetRangeToShop(CDOTA_BaseNPC *, DOTA_SHOP_TYPE, bool);
	CDOTA_BaseNPC * GetAnnouncer(int);
	CDOTA_BaseNPC * GetAnnouncer_KillingSpree(int);
	void QueueConceptForAllAnnouncers(int, float, CResponseCriteriaSet *, int, bool);
	void QueueConceptForAllAnnouncers_KillingSpree(int, float, CResponseCriteriaSet *, int, bool);
	void QueueConceptForAnnouncer(CDOTA_BaseNPC *, int, int, float, CResponseCriteriaSet *, int, bool);
	CDOTA_BaseNPC * GetFountain(int);
	CBaseEntity * GetHomeShop(int);
	CBaseEntity * GetShop(int, DOTA_SHOP_TYPE);
	void Glyph(int);
	float GetGlyphCooldown(int);
	void SetGlyphCooldown(int, float);
	void Radar(CDOTA_BaseNPC *, const Vector &);
	float GetRadarCooldown(int);
	void SetRadarCooldown(int, float);
	int GetTomeCount(int);
	void IncrementTomeCount(int);
	float GetTimeOfDay();
	bool IsDaytime();
	bool IsNightstalkerNight();
	bool IsTemporaryNight();
	void SetTimeOfDay(float);
	bool GetUseAlternateABRules();
	void SetGamePaused(bool, int, float, float);
	bool IsGamePaused();
	float GetGameTime();
	float GetGameFrameTime();
	bool IsGameTimeFrozen();
	void SetGameTimeFrozen(bool);
	float GetDOTATime(bool, bool, float);
	float GameTimeToDOTATime(float, bool, bool);
	float Script_GetDOTATime(bool, bool);
	float GetPreGameStartTime();
	float GetGameStartTime();
	float GetGameEndTime();
	void SetCustomGameScore(int, int);
	void SetCustomGameDifficulty(int);
	void SetOverlayHealthBarUnit(CDOTA_BaseNPC *, int);
	void Script_SetOverlayHealthBarUnit(HSCRIPT, int);
	void Script_FinishCustomGameSetup();
	void Script_SetCustomGameSetupTimeout(float);
	void Script_SetCustomGameTeamMaxPlayers(int, int);
	int Script_GetCustomGameTeamMaxPlayers(int);
	const char * Script_GetGameSessionConfigValue(const char *, const char *);
	bool Script_PlayerHasCustomGameHostPrivileges(HSCRIPT);
	KeyValues * GetEventMetadataCustomTable();
	bool Script_SetEventMetadataCustomTable(HSCRIPT);
	int GetCustomGameScore(int);
	int GetCustomGameDifficulty();
	CDOTA_BaseNPC * GetOverlayHealthBarUnit();
	int GetOverlayHealthBarType();
	int GetCustomGameTeamMaxPlayers(int);
	void PrepareSpawners(float);
	void SetFirstTowerState();
	int GetStartingGold();
	void SetStartingGold(int);
	int GetGoldPerTick();
	void SetGoldPerTick(int);
	float GetGoldTickTime();
	void SetGoldTickTime(float);
	void DeliverGoldToPlayers();
	void DistributeAbandonedPlayerGold();
	void AddCreepUpgradeState(int);
	void UpdateRunes();
	void SpawnRune(bool);
	EHANDLE GetRuneSpawner(int);
	EHANDLE GetBountyRuneSpawner(int);
	float GetNextRuneSpawnTime();
	void SetNextRuneSpawnTime(float);
	float GetLastRuneSpawnTime();
	CBaseEntity * GetActiveRune_Powerup();
	CBaseEntity * GetActiveRune_Bounty(int);
	void ForceGameStart();
	void ForceCreepSpawn();
	bool GetCreepUpgradeState(int);
	int GetGameWinner();
	void SetLeagueID(uint32);
	void SetLobbyType(LobbyType);
	void SetLobbyGameName(const char *);
	void SetMatchSignoutComplete(bool);
	void SetUseAlternateABRules(bool);
	LobbyType GetLobbyType();
	MatchID_t GetMatchID();
	uint32 GetLeagueID();
	const char * GetLobbyGameName();
	bool GetMatchSignoutComplete();
	bool DidMatchSignoutTimeOut();
	float GetTimeRemainingInHeroSelection(float);
	float GetPreGameDuration();
	float GetTimeElapsedInHeroSelectionAllDraft();
	void AddMinimapDebugPoint(int, const Vector &, const Color &, int, float, int);
	void AddMinimapDebugPoint_Script(int, const Vector &, int, int, int, int, float);
	void AddMinimapDebugPointForTeam_Script(int, const Vector &, int, int, int, int, float, int);
	void SetMinimapDebugGridData(uint8 *);
	void SetMinimapDebugGridState(int);
	void UpdateBotDebugData();
	void SetFoWFrameNumber(int);
	int GetFoWFrameNumber();
	bool HasATier3TowerBeenDestroyed();
	bool IsCheatMode();
	bool Script_IsCheatMode();
	bool ShouldFillEmptySlotsWithBots();
	void AddTeamCompToCriteria(int, CResponseCriteriaSet *);
	void SetTier3TowerDestroyed(bool);
	void SetHasSwapped(int);
	bool HasSwapped(int);
	int SelectSmartRandomHero(int, int, CUtlArray<int, 24ul> *, bool);
	void GetSmartRandomHeroList(int, int, CUtlVector<int, CUtlMemory<int, int> > *, CUtlArray<int, 24ul> *, bool);
	bool CanPlayersSwap(int, int);
	bool IsHeroAvailableToPlayer(int, int);
	bool IsHeroUnavailableToPlayer(int, KeyValues *);
	void SetGameMode(int);
	int GetGameMode();
	bool IsAllPick();
	bool IsAllDraftVariation();
	bool IsRebornHeroPickingEnabled();
	CDOTABaseGameMode * GetGameModeEntity();
	void SetGameModeEntity(CDOTABaseGameMode *);
	void SetGameEventsEntity(CDOTAGameEvents *);
	HSCRIPT GetGameModeEntity_Script();
	void SetAssassinMiniGameNetData(int, int);
	void SetRiverType(int);
	void SetRiverItem(uint32, uint64);
	int GetAssassinMiniGameState();
	int GetAssassinMiniGameVictimHeroID();
	int GetRiverType();
	DOTA_HeroPickState HeroPickState_Get();
	CDOTAHeroPickStateInfo * HeroPickState_LookupInfo(DOTA_HeroPickState);
	void HeroPickState_Transition(DOTA_HeroPickState);
	void HeroPickState_Enter(DOTA_HeroPickState);
	void HeroPickState_Leave();
	void HeroPickState_Think();
	bool HeroPickState_IsPlayerIDInControl(int);
	void HeroPickState_ClearControl();
	void HeroPickState_SetAllControl();
	void HeroPickState_SetIsPlayerIDInControl(int, bool);
	bool AutoAssignCaptains();
	void HeroPickState_Enter_AP_SELECT();
	void HeroPickState_Think_AP_SELECT();
	void HeroPickState_Enter_SELECT_PENALTY();
	void HeroPickState_Think_SELECT_PENALTY();
	void HeroPickState_Enter_SD_SELECT();
	void HeroPickState_Think_SD_SELECT();
	void HeroPickState_Enter_INTRO_SELECT();
	void HeroPickState_Think_INTRO_SELECT();
	void HeroPickState_Enter_CM_INTRO();
	void HeroPickState_CM_AdvanceCMState();
	int HeroPickState_CM_GetPhaseForState(DOTA_HeroPickState);
	float HeroPickState_CM_GetStateTime(DOTA_HeroPickState);
	void HeroPickState_Enter_CM_CAPTAINPICK();
	void HeroPickState_Think_CM_CAPTAINPICK();
	void HeroPickState_Leave_CM_CAPTAINPICK();
	void HeroPickState_Enter_CM_BAN();
	void HeroPickState_Think_CM_BAN();
	void HeroPickState_Enter_CM_SELECT();
	void HeroPickState_Think_CM_SELECT();
	void HeroPickState_Enter_CM_PICK();
	void HeroPickState_Think_CM_PICK();
	void HeroPickState_Leave_CM_PICK();
	void HeroPickState_Enter_AR_SELECT();
	void HeroPickState_Think_AR_SELECT();
	void HeroPickState_Enter_CD_INTRO();
	void HeroPickState_CD_AdvanceCDState();
	int HeroPickState_CD_GetPhaseForState(DOTA_HeroPickState);
	void HeroPickState_Enter_CD_CAPTAINPICK();
	void HeroPickState_Think_CD_CAPTAINPICK();
	void HeroPickState_Leave_CD_CAPTAINPICK();
	void HeroPickState_Enter_CD_BAN();
	void HeroPickState_Think_CD_BAN();
	void HeroPickState_Enter_CD_SELECT();
	void HeroPickState_Think_CD_SELECT();
	void HeroPickState_Enter_CD_PICK();
	void HeroPickState_Think_CD_PICK();
	void HeroPickState_Leave_CD_PICK();
	void HeroPickState_Enter_BD_SELECT();
	void HeroPickState_Think_BD_SELECT();
	void HeroPickState_Enter_FH_SELECT();
	void HeroPickState_Think_FH_SELECT();
	void HeroPickState_Enter_Ability_Draft_SELECT();
	void HeroPickState_Think_Ability_Draft_SELECT();
	void HeroPickState_Enter_ARDM_SELECT();
	void HeroPickState_Think_ARDM_SELECT();
	void ARDMSelectHero(int);
	void HeroPickState_Enter_ALL_DRAFT_SELECT();
	void HeroPickState_Think_ALL_DRAFT_SELECT();
	void AllDraftGetDataForPhase(int, bool, int *, int *, int *, int *);
	bool AllDraftIsPhaseRadiantPick(int, bool);
	void AllDraftRunLatePenalties();
	int AllDraftGetRandomedPlayer();
	void HeroPickState_Enter_CUSTOMGAME_SELECT();
	void HeroPickState_Think_CUSTOMGAME_SELECT();
	bool State_IsGameOver();
	bool State_HasGameplayStarted();
	bool State_IsBeforePostGame();
	bool State_IsBeforeHeroSelection();
	bool State_IsBeforeStrategyTime();
	bool State_IsBeforePreGame();
	bool State_IsBeforeGameInProgress();
	bool State_IsBeforeTeamShowcase();
	bool State_IsAfterInitState();
	bool State_IsAfterWaitingForPlayers();
	bool State_IsAfterHeroSelection();
	bool State_IsAfterPreGame();
	bool State_IsAfterGameInProgress();
	bool State_IsAfterPostGame();
	DOTA_GameState State_Get();
	int Script_State_Get();
	CDOTAGameStateInfo * State_LookupInfo(DOTA_GameState);
	void State_Transition(DOTA_GameState);
	void State_Enter(DOTA_GameState);
	void State_Leave();
	void State_Think();
	void State_Enter_INIT();
	void State_Leave_INIT();
	void State_Think_INIT();
	void State_Enter_WAIT_FOR_PLAYERS_TO_LOAD();
	void State_Leave_WAIT_FOR_PLAYERS_TO_LOAD();
	void State_Think_WAIT_FOR_PLAYERS_TO_LOAD();
	void State_Enter_CUSTOM_GAME_SETUP();
	void State_Leave_CUSTOM_GAME_SETUP();
	void State_Think_CUSTOM_GAME_SETUP();
	void State_ClientThink_CUSTOM_GAME_SETUP();
	void State_Enter_HERO_SELECTION();
	void State_Leave_HERO_SELECTION();
	void State_Think_HERO_SELECTION();
	void State_Enter_STRATEGY_TIME();
	void State_Leave_STRATEGY_TIME();
	void State_Think_STRATEGY_TIME();
	void State_Enter_TEAM_SHOWCASE();
	void State_Leave_TEAM_SHOWCASE();
	void State_Think_TEAM_SHOWCASE();
	void State_Enter_WAIT_FOR_MAP_TO_LOAD();
	void State_Leave_WAIT_FOR_MAP_TO_LOAD();
	void State_Think_WAIT_FOR_MAP_TO_LOAD();
	void State_Enter_PRE_GAME();
	void State_Think_PRE_GAME();
	void State_Enter_GAME_IN_PROGRESS();
	void State_Think_GAME_IN_PROGRESS();
	void State_Enter_POST_GAME();
	void State_Think_POST_GAME();
	void State_Enter_DISCONNECT();
	void State_Think_DISCONNECT();
	float State_GetTransitionTime();
	float GetHeroSelectionTime();
	float GetPregameTime();
	float GetPostgameTime();
	float GetStrategyTime();
	float GetShowcaseTime();
	float GetRuneSpawnTime();
	float GetTreeRegrowTime();
	CDOTA_BaseNPC * GetGoodGuysFountain();
	CDOTA_BaseNPC * GetBadGuysFountain();
	void PlayGameStartAnnouncement();
	int GetItemStockCount(int, const char *, int);
	int GetItemStockCount(int, short unsigned int, int);
	float GetItemStockTime(int, const char *, int);
	float GetItemStockTime(int, short unsigned int, int);
	float GetItemStockDuration(int, const char *, int);
	float GetItemStockDuration(int, short unsigned int, int);
	void SetLoadTime(float);
	void SetLoadedGameTime(float);
	float GetLoadTime();
	bool IsInCinematicMode();
	void SetInCinematicMode(bool);
	void SetStableMode(bool);
	bool Rules_DisableCreepSpawning();
	bool Rules_DisableAFKChecks();
	bool Rules_DisableAllAI();
	bool Rules_ShouldUploadMatchStats();
	bool Rules_ShouldTimeAdvance();
	void CreateItemStockInfo(int, const char *, int, int, float, float, int);
	void RemoveItemStockInfo(int, const char *, int);
	void StartItemRestockTimers();
	void ReduceItemStock(int, const char *, int);
	void IncreaseItemStock(int, const char *, int, int);
	void SaveStockInformation(KeyValues *);
	void LoadStockInformation(KeyValues *);
	void SetupStockInformation();
	void AddItemToWhiteList(const char *);
	void RemoveItemFromWhiteList(const char *);
	float UpdateAndDisplayPlayerBoosterState();
	void SetupRepick();
	void BroadcastItemDropBonusStatus();
	int GetSeriesType();
	int GetRadiantSeriesWins();
	int GetDireSeriesWins();
	int GetAllDraftPhase();
	bool GetAllDraftRadiantFirst();
	bool HasAllDraftBanned(int);
	int GetAllDraftBannedHero(int);
	int GetLoadedPlayers();
	int GetExpectedPlayers();
	bool IsFreeCourierMode();
	bool IsItemInWhiteList(const char *);
	int CM_GetActiveTeamNumber();
	int CM_GetStartingTeamNumber();
	bool CM_IsInBanPhase();
	bool CM_IsInSelectPhase();
	float CM_GetBonusTimeRemainingInHeroSelection(int);
	float CM_GetPhaseTimeRemaining();
	int CM_GetCaptain(int);
	void CM_SetCaptain(int, int);
	int CM_GetBannedHeroID(int, int);
	int CM_GetSelectedHeroID(int, int);
	bool CM_IsBannedHero(const char *);
	bool CM_IsSelectedHero(int, const char *);
	int CM_GetPenaltyLevel(int);
	bool CD_IsBannedHero(const char *);
	bool CD_IsSelectedHero(int, const char *);
	void CM_AddBannedHero(const char *);
	void CM_AddSelectedHero(const char *);
	bool AD_IsHeroBanned(int);
	void AD_GetBannedHeroesArray(CUtlVector<int, CUtlMemory<int, int> > &);
	void AD_AddBannedHero(const char *, int);
	bool IsCM();
	bool IsCD();
	void RegisterPetInGlobalList(CDOTA_BaseNPC_Pet *);
	void RemovePetFromGlobalList(CDOTA_BaseNPC_Pet *);
	void CM_SetupTest();
	void UpdateFanfareCount(float);
	void SetEnemyModifiersEnabled(bool);
	bool GetEnemyModifiersEnabled();
	const CUtlVector<HeroPickRecord_t, CUtlMemory<HeroPickRecord_t, int> > * GetCMPickRecord();
	void AddHeroDeath(int, int, float);
	const CUtlVector<HeroDeathRecord_t, CUtlMemory<HeroDeathRecord_t, int> > * GetDeathRecord();
	void QueueKillEaterEventForSignout(AccountID_t, itemid_t, kill_eater_event_t, uint32);
	const KillCountAdjustmentMap_t & GetKillEaterEventsForSignout();
	void QueueVictoryPredictionEventForSignout(AccountID_t, itemid_t, bool);
	const VictoryPredictionVector_t & GetVictoryPredictionsForSignout();
	void Playtesting_UpdateAddOnKeyValues();
	void SetTreeRegrowTime(float);
	void SetHeroSelectionTime(float);
	void SetPreGameTime(float);
	void SetPostGameTime(float);
	void SetStrategyTime(float);
	void SetShowcaseTime(float);
	void SetRuneSpawnTime(float);
	void SetSameHeroSelectionEnabled(bool);
	void SetUseCustomHeroXPValues(bool);
	void SetUseBaseGoldBountyOnHeroes(bool);
	void SetUseUniversalShopMode(bool);
	void SetHideKillMessageHeaders(bool);
	void SetCustomVictoryMessage(const char *);
	void SetCustomGameEndDelay(float);
	void SetCustomVictoryMessageDuration(float);
	void ResetSelectedHeroes();
	void ResetToHeroSelection();
	void ResetToInit();
	void Defeated();
	void ResetDefeated();
	int GetNianTotalDamageTaken();
	bool ExecutePing(CDOTAPlayer *, float, float, int, bool, int);
	float GetGameEndDelay();
	int GetTeamPause();
	int GetCMModePickBanOrder();
	int GetCDModePickBanOrder();
	int GetGGTeam();
	float GetGGEndsAtTime();
	bool IsHeroRespawnEnabled();
	void SetHeroRespawnEnabled(bool);
	bool IsSameHeroSelectionEnabled();
	bool UseUniversalShopMode();
	bool UseCustomHeroXPValues();
	bool UseBaseGoldBountyOnHeroes();
	bool HideKillMessageHeaders();
	const char * GetCustomVictoryMessage();
	int GetFowTeamCount();
	float GetHeroMinimapIconScale();
	void SetHeroMinimapIconScale(float);
	float GetCreepMinimapIconScale();
	void SetCreepMinimapIconScale(float);
	float GetRuneMinimapIconScale();
	void SetRuneMinimapIconScale(float);
	bool IsRandomingEnabled();
	void SetMatchID(MatchID_t);
	bool HasLikedHeroStatue(int, int);
	void OnDemoHero(CEntityIndex, const CDOTAClientMsg_DemoHero_t &);
	void PrecacheMapSpecificResources(IEntityResourceManifest *, SpawnGroupHandle_t, const char *);
	void TutorialEnterHeroSelection();
	void PrecacheGameModeResources(IEntityResourceManifest *);
	bool ForceBotPlay();
	void PrecacheNextARDMHeroForPlayer(int);
	void OnARDMDuringMatchSpawnComplete(CDOTA_BaseNPC *, const CEntityKeyValues *);
	void AddARDMReconnectInfo(ARDMReconnectInfo_t);
	void SetRoshanSpawnPhase(ERoshanSpawnPhase, float);
	ERoshanSpawnPhase GetRoshanSpawnPhase();
	float GetRoshanSpawnPhaseEndTime();
	int GetNumTowerNames();
	const char * GetTowerName(int);
	int GetNumBarracksNames();
	const char * GetBarracksName(int);
	int GetNumShrineNames();
	const char * GetShrineName(int);
	int GetOffset_m_AssassinMiniGameNetData();
	bool ShouldStreamDotaMap();
	bool ClientMsg_MapPing(CEntityIndex, const CDOTAClientMsg_MapPing_t &);
	bool ClientMsg_MapLine(CEntityIndex, const CDOTAClientMsg_MapLine_t &);
	bool ClientMsg_AspectRatio(CEntityIndex, const CDOTAClientMsg_AspectRatio_t &);
	bool ClientMsg_UnitsAutoAttackMode(CEntityIndex, const CDOTAClientMsg_UnitsAutoAttackMode_t &);
	bool ClientMsg_SearchString(CEntityIndex, const CDOTAClientMsg_SearchString_t &);
	bool ClientMsg_Pause(CEntityIndex, const CDOTAClientMsg_Pause_t &);
	bool ClientMsg_ShopViewMode(CEntityIndex, const CDOTAClientMsg_ShopViewMode_t &);
	bool ClientMsg_SetUnitShareFlag(CEntityIndex, const CDOTAClientMsg_SetUnitShareFlag_t &);
	bool ClientMsg_SwapRequest(CEntityIndex, const CDOTAClientMsg_SwapRequest_t &);
	bool ClientMsg_SwapAccept(CEntityIndex, const CDOTAClientMsg_SwapAccept_t &);
	bool ClientMsg_WorldLine(CEntityIndex, const CDOTAClientMsg_WorldLine_t &);
	bool ClientMsg_RequestGraphUpdate(CEntityIndex, const CDOTAClientMsg_RequestGraphUpdate_t &);
	bool ClientMsg_ChatWheel(CEntityIndex, const CDOTAClientMsg_ChatWheel_t &);
	bool ClientMsg_ItemAlert(CEntityIndex, const CDOTAClientMsg_ItemAlert_t &);
	bool ClientMsg_EnemyItemAlert(CEntityIndex, const CDOTAClientMsg_EnemyItemAlert_t &);
	bool ClientMsg_ModifierAlert(CEntityIndex, const CDOTAClientMsg_ModifierAlert_t &);
	bool ClientMsg_ClickedBuff(CEntityIndex, const CDOTAClientMsg_ClickedBuff_t &);
	bool ClientMsg_HPManaAlert(CEntityIndex, const CDOTAClientMsg_HPManaAlert_t &);
	bool ClientMsg_GlyphAlert(CEntityIndex, const CDOTAClientMsg_GlyphAlert_t &);
	bool ClientMsg_WillPurchaseAlert(CEntityIndex, const CDOTAClientMsg_WillPurchaseAlert_t &);
	bool ClientMsg_SendStatPopup(CEntityIndex, const CDOTAClientMsg_SendStatPopup_t &);
	bool ClientMsg_BeginLastHitChallenge(CEntityIndex, const CDOTAClientMsg_BeginLastHitChallenge_t &);
	bool ClientMsg_UpdateQuickBuy(CEntityIndex, const CDOTAClientMsg_UpdateQuickBuy_t &);
	bool ClientMsg_PlayerShowCase(CEntityIndex, const CDOTAClientMsg_PlayerShowCase_t &);
	bool ClientMsg_CameraZoomAmount(CEntityIndex, const CDOTAClientMsg_CameraZoomAmount_t &);
	bool ClientMsg_TeleportRequiresHalt(CEntityIndex, const CDOTAClientMsg_TeleportRequiresHalt_t &);
	bool ClientMsg_BroadcasterUsingCamerman(CEntityIndex, const CDOTAClientMsg_BroadcasterUsingCameraman_t &);
	bool ClientMsg_BroadcasterUsingAssistedCameraOperator(CEntityIndex, const CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t &);
	bool ClientMsg_FreeInventory(CEntityIndex, const CDOTAClientMsg_FreeInventory_t &);
	bool ClientMsg_BuyBackStateAlert(CEntityIndex, const CDOTAClientMsg_BuyBackStateAlert_t &);
	bool ClientMsg_FillEmptySlotsWithBots(CEntityIndex, const CDOTAClientMsg_FillEmptySlotsWithBots_t &);
	bool ClientMsg_QuickBuyAlert(CEntityIndex, const CDOTAClientMsg_QuickBuyAlert_t &);
	bool ClientMsg_HeroStatueLike(CEntityIndex, const CDOTAClientMsg_HeroStatueLike_t &);
	bool ClientMsg_DemoHero(CEntityIndex, const CDOTAClientMsg_DemoHero_t &);
	bool ClientMsg_ExecuteOrders(CEntityIndex, const CDOTAClientMsg_ExecuteOrders_t &);
	bool ClientMsg_XPAlert(CEntityIndex, const CDOTAClientMsg_XPAlert_t &);
	bool ClientMsg_MatchMetadata(CEntityIndex, const CDOTAClientMsg_MatchMetadata_t &);
	bool ClientMsg_QuestStatus(CEntityIndex, const CDOTAClientMsg_QuestStatus_t &);
	bool ClientMsg_SpecialAbility(CEntityIndex, const CDOTAClientMsg_SpecialAbility_t &);
	bool ClientMsg_ToggleAutoattack(CEntityIndex, const CDOTAClientMsg_ToggleAutoattack_t &);
	bool ClientMsg_KillcamDamageTaken(CEntityIndex, const CDOTAClientMsg_KillcamDamageTaken_t &);
	bool ClientMsg_SetEnemyStartingPosition(CEntityIndex, const CDOTAClientMsg_SetEnemyStartingPosition_t &);
	bool ClientMsg_SetDesiredWardPlacement(CEntityIndex, const CDOTAClientMsg_SetDesiredWardPlacement_t &);
	bool ClientMsg_RollDice(CEntityIndex, const CDOTAClientMsg_RollDice_t &);
	bool ClientMsg_FlipCoin(CEntityIndex, const CDOTAClientMsg_FlipCoin_t &);
	virtual void Think();
	virtual bool ClientCommand(CBaseEntity *, const CCommand &);
	virtual void PlayerSpawn(CBasePlayer *);
	virtual void InitDefaultAIRelationships();
	virtual const char * AIClassText(int);
	virtual const char * GetGameDescription();
	virtual void PrintStatus(CEntityIndex, CUtlString *);
	bool CheckReconnectAssignHero(CDOTA_BaseNPC *, int);
	int GetNumTowers();
	CDOTA_BaseNPC_Tower * GetTower(int);
	int GetNumTeamTowers(int);
	CDOTA_BaseNPC_Tower * GetTeamTower(int, int);
	uint32 GetTowerStatus(int);
	int GetNumTeamBarracks(int);
	CDOTA_BaseNPC_Building * GetTeamBarracks(int, int);
	uint32 GetBarracksStatus(int);
	int GetNumTeamShrines(int);
	CDOTA_BaseNPC_Building * GetTeamShrine(int, int);
	bool GetTeamHasAbandonedPlayer(int);
	int GetRealPlayerCount();
	void OnTowerDestroyed(CDOTA_BaseNPC_Tower *);
	CDOTA_BaseNPC_Building * GetFort(int);
	virtual void PlayerThink(CBasePlayer *);
	void SetGameWinner(int);
	bool GetLenientAFK(int);
	void SetLenientAFK(bool, int);
	bool IsFirstBloodActive();
	void SetFirstBloodActive(bool);
	int GetFirstBloodTime();
	void SetFirstBloodTime(int);
	bool IsFirstRuneSpawn();
	void SetFirstRuneSpawn(bool);
	void BeginTemporaryNight(float);
	void BeginNightstalkerNight(float);
	void BeginRiverColor(float);
	void SetViewportPanelStateForAll(const char *, bool);
	void ApplyGamesSettings(KeyValues *);
	void WriteGameState();
	void DeleteGameState();
	void SetLastUsedAbility(CDOTABaseAbility *);
	const char * GetLastUsedAbility(int);
	const char * GetLastUsedActiveAbility(int);
	float GetAutoSurrenderTime(int);
	void RegisterEnemyCreepInBase(CDOTA_BaseNPC_Creep_Lane *);
	bool AreEnemyCreepsInBase(int);
	CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetEnemyCreepsInBase(int);
	CDOTAGameEvents * GetGameEvents();
	int GetGameEndReason();
	EHANDLE GetRoshan();
	void AddRoshanKill(int);
	uint GetRoshanKillCount(int);
	void AddDroppedItem(EHANDLE);
	void RemoveDroppedItem(EHANDLE);
	int NumDroppedItems();
	EHANDLE GetDroppedItem(int);
	HSCRIPT Script_GetDroppedItem(int);
	void AddWard(EHANDLE);
	void RemoveWard(EHANDLE);
	int NumWards();
	EHANDLE GetWard(int);
	void OnNumSpectatorsChanged(int);
	uint32 GetPeakSimultaneousSpectators();
	virtual bool ShouldPlayerReceiveStringTableUserData(CEntityIndex, const INetworkStringTable *, int);
	void MakeTeamLose(int);
	bool ShouldAnnounceHeroSelection(int);
	bool IsPointInBadResultPosition(const Vector &);
	bool DoesRayIntersectBadResultPosition(const Ray_t &);
	bool IsPointInRoshanPosition(const Vector &);
	bool DoesRayIntersectRoshanPosition(const Ray_t &);
	bool SwapPlayers(CDOTAPlayer *, CDOTAPlayer *, bool);
	void SendCustomMessage(const char *, int, int);
	void SendCustomMessageToTeam(const char *, int, int, int);
	void SetSafeToLeave(bool);
	void ABILITYDRAFT_AssignRandomAbilityToPlayerID(int);
	void ABILITYDRAFT_ExtractAbilitiesFromHero(KeyValues *);
	void CheckUploadReplay();
	void NotifyLeaverStatus(const CDOTALobby *, const CDOTALobbyMember *, int);
	void FatalErrorAbortOnNextThink();
	void FinalizePlayerCommunicationSummary(int);
	const PlayerCommunicationStats_t * GetPlayerCommunicationSummary(int);
	void RecordPing(PlayerPings_t &, float, float, int);
	void PingIntervalFinished(PlayerPings_t &);
	bool IsPingOnTeammate(CDOTAPlayer &, int, int);
	void InternalCreateIngameEvent(EEvent);
	void SendProjectionAbilityMessage(CDOTA_BaseNPC *, Vector, bool, int, float, bool, CDOTA_BaseNPC *);
	void SendProjectionAbilityEndChannelMessage(CDOTA_BaseNPC *, int);
	void SendProjection_CustomEvent(EProjectionEvent, int);
	bool CalcNumLoadingPlayersAndFailure();
	void WaitForPlayersSuccess();
	void WaitForPlayersFailure();
	float GetWaitingForPlayersBonusPresentationTime();
	const CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetNeutralSpawners(DOTATeam_t);
	const CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetAncientSpawners(DOTATeam_t);
	SpawnGroupHandle_t GetStreamingDotaMapSpawnGroup();
	bool MakeRandomHeroSelection(int, bool, int, bool);
	CDOTAGamerules & operator=(CDOTAGamerules &);
	void CheckPendingProjectionAbilities();
	void SendProjectionAbilityMessageInternal(ProjectionAbility_t &);
	bool IsProjectionAbilityVisibleByEnemy(ProjectionAbility_t &);
	void SpawnPlayerHeroes();
	void BeginStreamingDotaMap();
	void FinalizeHeroSelections();
	virtual int DefaultFOV();
	void FillOutHardcodedEmoteRules();
	void SetCustomGameAccountRecordSaveFunction(HSCRIPT, HSCRIPT);
	ScriptVariant_t GetPlayerCustomGameAccountRecord(int);
	void SaveLocalCustomGameAccountRecords();
	bool BUsingLocalCustomGameAccountRecords();
	void OnPlayerTeamChanged();
	void CustomGameSetup_SetRemainingTime(float);
	void CustomGameSetup_SetAutoLaunchDelay(float);
	void CustomGameSetup_SetAutoLaunchEnabled(bool);
	void CustomGameSetup_SetTeamAssignmentLocked(bool);
	void CustomGameSetup_SelectTeam(CDOTAPlayer *, int);
	bool CustomGameSetup_GetAutoLaunchEnabled();
	bool CustomGameSetup_GetTeamAssignmentLocked();
	bool PlayerHasCustomGameHostPrivileges(CDOTAPlayer *);
	CIngameEvent_Base * GetIngameEventByID(EEvent);
	CIngameEvent_Base * GetFirstIngameEvent();
	CIngameEvent_WM2017 * GetCurrentIngameEvent();
	void GetIngameEvents(CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *);
	void IngameEvents_OnHeroKill(CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	void IngameEvents_AddResultToSignout(const CDOTALobby *, CProtoBufMsg<CMsgGameMatchSignOut> *);
	void IngameEvents_PlayerSelectedHero(unsigned int);
	void IngameEvents_PlayersSwapped(unsigned int, unsigned int);
	void IngameEvents_SpawnerReleaseCreeps(int, Vector, string_t);
	float IngameEvents_OnWaitingForPlayers(const CDOTALobby *);
	void IngameEvents_OnGameStarted();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[22] Damage_IsTimeBased
	// vtable[27] Damage_GetTimeBased
	// vtable[180] ShouldCollide
	// vtable[21] Shutdown
	// vtable[143] PreFatalShutdown
	// vtable[115] PlayerCanHearChat
	// vtable[25] Damage_NoPhysicsForce
	// vtable[127] FAllowNPCs
	// vtable[130] CreateStandardEntities
	// vtable[131] DestroyStandardEntities
	// vtable[134] GetChatFormat
	// vtable[117] OnPlayerChatted
	// vtable[63] ClientConnected
	// vtable[65] ClientDisconnected
	// vtable[66] ShouldTimeoutClient
	// vtable[2] GameInit
	// vtable[12] GameShutdown
	// vtable[4] GameActivate
	// vtable[15] BuildGameSessionManifest
	// vtable[5] SpawnGroupPrecache
	// vtable[7] PostSpawnGroupLoad
	// vtable[11] GameDeactivate
	// vtable[8] PreSpawnGroupUnload
	// vtable[50] Think
	// vtable[83] ClientCommand
	// vtable[76] PlayerSpawn
	// vtable[106] InitDefaultAIRelationships
	// vtable[107] AIClassText
	// vtable[62] GetGameDescription
	// vtable[45] PrintStatus
	// vtable[77] PlayerThink
	// vtable[151] ShouldPlayerReceiveStringTableUserData
	// vtable[35] DefaultFOV
	// sizeof = 17264
};

// src/game/shared/dota/dota_gamerules.h:2357
class CDOTA_DisplacementVisibility : public CBaseEntity {
	class NetworkVar_m_HiddenDisplacement {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CBaseEntity BaseClass;
	typedef CDOTA_DisplacementVisibility ThisClass;

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
	CDOTA_DisplacementVisibility(CDOTA_DisplacementVisibility &);
	CDOTA_DisplacementVisibility(CDOTA_DisplacementVisibility &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_DisplacementVisibility();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputHideDisplacement(inputdata_t &);
	virtual int UpdateTransmitState();
	virtual ~CDOTA_DisplacementVisibility();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[64] UpdateTransmitState
	// sizeof = 784
};

// src/game/shared/dota/dota_gamerules.h:2484
class CDOTAGameConfiguration : public CSource1GameConfiguration {
public:

	CDOTAGameConfiguration(CDOTAGameConfiguration &);
	CDOTAGameConfiguration(const CDOTAGameConfiguration &);
	CDOTAGameConfiguration();
	virtual void GetPlayerLimits(int &, int &, int &, bool &);
	virtual CEntityInstance * FindProceduralEntity(const char *);
	virtual void GetHostStateLoopModeInfo(HostStateLoopModeType_t, CUtlString &, KeyValues * *);
	virtual bool SetupGameSessionConfiguration(KeyValues *, GameSessionConfiguration_t *);
	virtual bool InitGameSession(const GameSessionConfiguration_t &);
	virtual bool LoopPostInitAllGameSystems(const GameSessionConfiguration_t &, ILoopModePrerequisiteRegistry *);
	virtual void AllocateScratchRenderTargets(SwapChainHandle_t, const RenderDeviceInfo_t &, RenderMultisampleType_t);
	virtual CUtlStringToken GetDesiredRenderingPipeline();
	virtual void RegisterGameActivities();
	virtual const char * GetGameDescription();
	virtual int GetNetworkVersion();
	virtual bool ValidateNetworkVersion(int);
	virtual float GetTickInterval();
	virtual void OnClientFullyConnect(CEntityIndex);
	virtual void ExecuteURL(int, const URLArgument_t *);
	virtual void GetBugReportLaunchURLParameters(KeyValues *);
	virtual InitReturnVal_t Init();
	virtual void Shutdown();
	virtual void GetStringTableDefs(CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	virtual bool AllowDedicatedServers(EUniverse);
	virtual bool IsUserMessage(int);
	virtual void GetConVarPrefixesToResetToDefaults(CUtlString &);
	virtual const char * ChangeWorldMountNameByNetworkVersion(const char *, int);
	~CDOTAGameConfiguration();

	// vtable[35] GetPlayerLimits
	// vtable[19] FindProceduralEntity
	// vtable[40] GetHostStateLoopModeInfo
	// vtable[20] SetupGameSessionConfiguration
	// vtable[21] InitGameSession
	// vtable[25] LoopPostInitAllGameSystems
	// vtable[12] AllocateScratchRenderTargets
	// vtable[13] GetDesiredRenderingPipeline
	// vtable[26] RegisterGameActivities
	// vtable[32] GetGameDescription
	// vtable[33] GetNetworkVersion
	// vtable[16] ValidateNetworkVersion
	// vtable[34] GetTickInterval
	// vtable[39] OnClientFullyConnect
	// vtable[44] ExecuteURL
	// vtable[28] GetBugReportLaunchURLParameters
	// vtable[3] Init
	// vtable[4] Shutdown
	// vtable[29] GetStringTableDefs
	// vtable[41] AllowDedicatedServers
	// vtable[30] IsUserMessage
	// vtable[42] GetConVarPrefixesToResetToDefaults
	// vtable[17] ChangeWorldMountNameByNetworkVersion
	// sizeof = 56
};
