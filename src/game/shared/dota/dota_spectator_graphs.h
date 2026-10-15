// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_spectator_graphs.h:45
class CDOTASpecGraphPlayerData : public CBaseEntity {
	class NetworkVar_m_rgGoldPerMinute {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_rgXPPerMinute {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_nCreatedByPlayerID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CDOTASpecGraphPlayerData ThisClass;

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
	CDOTASpecGraphPlayerData(CDOTASpecGraphPlayerData &);
	CDOTASpecGraphPlayerData(CDOTASpecGraphPlayerData &);
	CDOTASpecGraphPlayerData();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	void PrintStats();
	virtual int UpdateTransmitState();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void UpdateGoldPerMinStats();
	void UpdateXPPerMinStats();
	int GetPlayerID();
	int GetGoldPerMinute(int);
	int GetXPPerMinute(int);
	virtual ~CDOTASpecGraphPlayerData();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[64] UpdateTransmitState
	// vtable[65] ShouldTransmit
	// sizeof = 1296
};

// src/game/shared/dota/dota_spectator_graphs.h:89
struct sPlayerSnapshot {
private:

	int m_nItemID[6];  // +0x0
	float m_fGameTime;  // +0x18
	uint8 unKills;  // +0x1c
	uint8 unDeaths;  // +0x1d
	uint8 unAssists;  // +0x1e
	uint8 unLevel;  // +0x1f

	// sizeof = 32
};

// src/game/shared/dota/dota_spectator_graphs.h:108
class CDOTASpectatorGraphManager : public CAutoGameSystem, public CGameEventListener {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	class NetworkVar_m_rgPlayerGraphData {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_rgRadiantTotalEarnedGold {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_rgDireTotalEarnedGold {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_rgRadiantTotalEarnedXP {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_rgDireTotalEarnedXP {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_rgRadiantNetWorth {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_rgDireNetWorth {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_flTotalEarnedGoldStartTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTotalEarnedGoldEndTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nGoldGraphVersion {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_nPlayerDataCount;  // +0x38

	bool m_bTrackingTeamStats;  // +0x58

	float m_flStartTime;  // +0x5c
	int m_nNextUpdatePlayer;  // +0x60

	int m_event_dota_player_killed;  // +0x948
	int m_event_server_pre_shutdown;  // +0x94c
	int m_event_dota_player_pick_hero;  // +0x950
	typedef CAutoGameSystem BaseClass;
	typedef CDOTASpectatorGraphManager ThisClass;
	CDOTASpectatorGraphManager(const CDOTASpectatorGraphManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTASpectatorGraphManager *);

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CDOTASpectatorGraphManager();
	virtual ~CDOTASpectatorGraphManager();
	virtual void FireGameEvent(IGameEvent *);
	virtual bool Init();
	virtual void Shutdown();
	virtual void GameInit(const EventGameInit_t &);
	CDOTASpecGraphPlayerData * CreateGraphDataForPlayerEnt(EHANDLE);
	void StartTracking();
	void StopTracking();
	float GetStartTime();
	virtual void PreClientUpdate(const EventServerPreClientUpdate_t &);
	void RecordTeamStats();
	void SendTeamTotalEarnedGold();
	void SendTeamTotalEarnedXP();
	void RequestImmediateGraphUpdate(CDOTAPlayer *);
	int GetTotalEarnedTeamGold(int, int);
	int GetTotalEarnedTeamXP(int, int);
	int GetTotalTeamNetWorth(int, int);
	void PrintClientDebug();
	int GetGoldGraphVersion();
	bool IsNetWorthAvailable();
	bool IsGoldEarnedAvailable();
	void RecordHeroInventorySnapshots();
	const CUtlVector<sPlayerSnapshot, CUtlMemory<sPlayerSnapshot, int> > * GetPlayerSnapshotsForPlayerID(int);

private:

	void Reset();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[40] Schema_DynamicBinding
	// vtable[41] FireGameEvent
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[3] GameInit
	// vtable[26] PreClientUpdate
	// sizeof = 2392
};

// src/game/shared/dota/dota_spectator_graphs.h:221
class CDOTASpectatorGraphManagerProxy : public CBaseEntity {
public:

private:

	static CDOTASpectatorGraphManagerProxy * s_pDotaSpectatorGraphProxy;
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
	CDOTASpectatorGraphManagerProxy(CDOTASpectatorGraphManagerProxy &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTASpectatorGraphManagerProxy();
	virtual ~CDOTASpectatorGraphManagerProxy();
	virtual int UpdateTransmitState();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void NotifyNetworkStateChanged();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[64] UpdateTransmitState
	// vtable[65] ShouldTransmit
	// sizeof = 784
};
