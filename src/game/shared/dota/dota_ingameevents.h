// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_ingameevents.h:55
class CIngameEvent_FM2015 : public CIngameEvent_Base {
	class NetworkVar_m_CompendiumCoinWager {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_CompendiumCoinWagerResults {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_flWagerTimer {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flWagerEndTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flBonusWagerRate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CIngameEvent_FM2015 ThisClass;

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
	CIngameEvent_FM2015(CIngameEvent_FM2015 &);
	CIngameEvent_FM2015(CIngameEvent_FM2015 &);
	CIngameEvent_FM2015();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CIngameEvent_FM2015 * Create();
	virtual bool IsActive();
	virtual bool IsComplete();
	virtual EEvent GetEventID();
	virtual EEvent GetEventPointID();
	virtual bool ChallengesEnabled();
	int GetPlayerCompendiumCoinMaxWager(int);
	int GetPlayerCompendiumCoinFinalWager(int);
	int GetPlayerCompendiumCoinFinalMatchResult(int);
	int GetPlayerCompendiumCoinPotentialWinnings(int, bool);
	int GetPlayerCompendiumCoinWagerWinnings(int);
	int GetTeamWagerPool(int, int *);
	int GetHousePoolContribution();
	virtual void OnPreGameStarted();
	virtual void OnGameStarted();
	void PreWagerTimeThink();
	virtual void GoActive();
	virtual void UpdateOnRemove();
	virtual void AddResultToSignout(const CDOTALobby *, CProtoBufMsg<CMsgGameMatchSignOut> *);
	bool ClientMsg_SetPlayerCoinWager(CEntityIndex, const CDOTAClientMsg_CoinWager_t &);
	void SetPlayerCompendiumCoinWagerWinnings(int, int);
	void DoEndGameCoinWagerCalculations();
	bool GetPlayerWagerPct(int, double *, uint32 *);
	virtual ~CIngameEvent_FM2015();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[209] IsActive
	// vtable[210] IsComplete
	// vtable[207] GetEventID
	// vtable[208] GetEventPointID
	// vtable[211] ChallengesEnabled
	// vtable[221] OnPreGameStarted
	// vtable[222] OnGameStarted
	// vtable[212] GoActive
	// vtable[11] UpdateOnRemove
	// vtable[215] AddResultToSignout
	// sizeof = 4808
};

// src/game/shared/dota/dota_ingameevents.h:125
class CIngameEvent_WM2016 : public CIngameEvent_Base {
	class NetworkVar_m_SubChallenges {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};
	typedef CIngameEvent_WM2016 ThisClass;

	class NetworkVar_m_CompendiumCoinWager {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_CompendiumCoinWagerResults {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_CompendiumTippedPlayers {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_flWagerTimer {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flWagerEndTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	bool m_bHasTipped[10];  // +0x12a0

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
	CIngameEvent_WM2016(CIngameEvent_WM2016 &);
	CIngameEvent_WM2016(CIngameEvent_WM2016 &);
	CIngameEvent_WM2016();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	CIngameEvent_WM2016 * Create();
	virtual bool IsActive();
	virtual bool IsComplete();
	virtual EEvent GetEventID();
	virtual EEvent GetEventPointID();
	virtual bool ChallengesEnabled();
	void PreWagerTimeThink();
	virtual void OnPreGameStarted();
	float GetWagerTimer();
	int GetWagerAmount(int);
	int GetWagerSizeAmount(int, int);
	int GetWagerWinnings(int);
	int GetAvailableWagerTokens(int);
	int GetMaxWagerTokens(int);
	int GetTippedPlayerID(int);
	int GetTotalTipsForPlayerID(int);
	virtual void UpdateOnRemove();
	virtual void GoActive();
	void DoEndGameCoinWagerCalculations();
	bool ClientMsg_SetPlayerCoinWager(CEntityIndex, const CDOTAClientMsg_CoinWager_t &);
	bool ClientMsg_DoEventPointsTip(CEntityIndex, const CDOTAClientMsg_EventPointsTip_t &);
	bool GiveTip(int, int);
	void TipValidated(AccountID_t, AccountID_t, int);
	virtual void AddResultToSignout(const CDOTALobby *, CProtoBufMsg<CMsgGameMatchSignOut> *);
	void SpoofWager(int, int);
	void SpoofTip(int, int);
	void FakeTip(int, int);
	virtual void OnQueryProgressChanged(int, int);
	virtual void PlayerSelectedHero(unsigned int);
	void GenerateWeeklyAndDailyChallenges(int);
	void GetSubChallengesForPlayer(int, CUtlVector<const CDOTASubChallengeInfo*, CUtlMemory<const CDOTASubChallengeInfo*, int> > *);
	virtual ~CIngameEvent_WM2016();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[209] IsActive
	// vtable[210] IsComplete
	// vtable[207] GetEventID
	// vtable[208] GetEventPointID
	// vtable[211] ChallengesEnabled
	// vtable[221] OnPreGameStarted
	// vtable[11] UpdateOnRemove
	// vtable[212] GoActive
	// vtable[215] AddResultToSignout
	// vtable[223] OnQueryProgressChanged
	// vtable[218] PlayerSelectedHero
	// sizeof = 4912
};

// src/game/shared/dota/dota_ingameevents.h:214
class CIngameEvent_TI6 : public CIngameEvent_WM2016 {
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
	CIngameEvent_TI6(CIngameEvent_TI6 &);
	CIngameEvent_TI6(CIngameEvent_TI6 &);
	CIngameEvent_TI6();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CIngameEvent_TI6 * Create();
	virtual EEvent GetEventID();
	virtual EEvent GetEventPointID();
	virtual ~CIngameEvent_TI6();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[207] GetEventID
	// vtable[208] GetEventPointID
	// sizeof = 4912
};

// src/game/shared/dota/dota_ingameevents.h:230
class CIngameEvent_FM2016 : public CIngameEvent_WM2016 {
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
	CIngameEvent_FM2016(CIngameEvent_FM2016 &);
	CIngameEvent_FM2016(CIngameEvent_FM2016 &);
	CIngameEvent_FM2016();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CIngameEvent_FM2016 * Create();
	virtual EEvent GetEventID();
	virtual EEvent GetEventPointID();
	virtual ~CIngameEvent_FM2016();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[207] GetEventID
	// vtable[208] GetEventPointID
	// sizeof = 4912
};

// src/game/shared/dota/dota_ingameevents.h:246
class CIngameEvent_WM2017 : public CIngameEvent_WM2016 {
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
	CIngameEvent_WM2017(CIngameEvent_WM2017 &);
	CIngameEvent_WM2017(CIngameEvent_WM2017 &);
	CIngameEvent_WM2017();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CIngameEvent_WM2017 * Create();
	virtual EEvent GetEventID();
	virtual EEvent GetEventPointID();
	virtual ~CIngameEvent_WM2017();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[207] GetEventID
	// vtable[208] GetEventPointID
	// sizeof = 4912
};
