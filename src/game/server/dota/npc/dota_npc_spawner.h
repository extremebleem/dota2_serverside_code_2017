// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_spawner.h:14
class CDOTA_NPCSpawner : public CPointEntity {
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

protected:

	string_t m_szNPCScriptName;  // +0x308
	string_t m_szNPCName;  // +0x310
	string_t m_szNPCFirstWaypoint;  // +0x318

	int m_iTeam;  // +0x350
	int m_iUpgradeMelee;  // +0x354
	int m_iUpgradeRange;  // +0x358
	int m_iMeleeCount;  // +0x35c
	int m_iSiegeCount;  // +0x360
	int m_iRangeCount;  // +0x364
	int m_iWaves;  // +0x368

	typedef CPointEntity BaseClass;
	CDOTA_NPCSpawner(CDOTA_NPCSpawner &);
	CDOTA_NPCSpawner(CDOTA_NPCSpawner &);
	CDOTA_NPCSpawner();
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
	virtual void Think();
	void InitSpawner(int, int, int);
	void UpgradeCreep(CDOTA_BaseNPC *);
	void PrepForNextSpawn(float);
	void OnSpawnNextCreepSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	void SpawnNextCreep();
	void ReleaseCreeps();

private:

	void SpawnUnitFromScript(const char *, CDotaNPCSpawnerContext *);
	virtual ~CDOTA_NPCSpawner();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[117] Think
	// sizeof = 904
};

// src/game/server/dota/npc/dota_npc_spawner.h:56
struct sNeutralCreepInfo {
	int iCount;  // +0x0

	const char * pszClassNames[8][5];  // +0x8

	// sizeof = 328
};

// src/game/server/dota/npc/dota_npc_spawner.h:62
class CDOTA_NeutralSpawner : public CPointEntity {
	class NetworkVar_m_Type {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	bool m_bGameStarted;  // +0x308
	bool m_bFirstSpawn;  // +0x309

	int m_iNextSpawnType;  // +0x328
	int m_iPreviousSpawnType;  // +0x32c
	int m_iTotalToSpawn;  // +0x330
	int m_iForcedSpawnType;  // +0x334
	int m_iNumBatchesToSpawn;  // +0x338
	bool m_bLimitedBatches;  // +0x33c

	int m_iStackingCreditPlayerID;  // +0x340
	float m_fInternalSpawnTimerTime;  // +0x344

	bool m_bSeenClearedByTeam[2];  // +0x3a8

	string_t m_szVolumeName;  // +0x3b0
	COutputEvent m_OnSpawnerExhausted;  // +0x3d0
	int m_PullType;  // +0x3ec
	typedef CPointEntity BaseClass;

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
	CDOTA_NeutralSpawner(CDOTA_NeutralSpawner &);
	CDOTA_NeutralSpawner(CDOTA_NeutralSpawner &);
	CDOTA_NeutralSpawner();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Think();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	bool IsCampCleared();
	bool IsKnownToBeClearedByTeam(int);
	bool IsCreepInCamp(CDOTA_BaseNPC *);
	void SelectSpawnType();
	void OnCreatePendingUnitsSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	void CreatePendingUnits();
	void SpawnNextBatch(bool);
	DOTA_NEUTRAL_TYPE GetType();
	DOTA_NEUTRAL_PULL_TYPE GetPullType();
	const sNeutralCreepInfo & GetCreepInfo();
	virtual ~CDOTA_NeutralSpawner();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[117] Think
	// vtable[65] ShouldTransmit
	// sizeof = 1008
};

// src/game/server/dota/npc/dota_npc_spawner.h:131
class CDOTA_RoshanSpawner : public CPointEntity {
public:

private:

	bool m_bIsRoshanAlive;  // +0x308
	bool m_bSpawnRequested;  // +0x309

	EHANDLE m_hRoshan;  // +0x30c
	float m_fRoshanKillTime;  // +0x310
	int m_nSentRoshReclaim;  // +0x314
	int m_nSentRoshRespawn;  // +0x318
	float m_fRoshanRespawnDuration;  // +0x31c
	int m_iSpawnCount;  // +0x320
	int m_nFXIndex;  // +0x324
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
	CDOTA_RoshanSpawner(CDOTA_RoshanSpawner &);
	CDOTA_RoshanSpawner(CDOTA_RoshanSpawner &);
	CDOTA_RoshanSpawner();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void RoshanThink();
	virtual int UpdateTransmitState();
	CDOTA_Item * FindAegis(bool);
	void OnRoshanSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	int GetRoshanSpawnCount();
	float GetRoshanRespawnTimeSeconds();
	virtual ~CDOTA_RoshanSpawner();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[207] RoshanThink
	// vtable[64] UpdateTransmitState
	// sizeof = 808
};

// src/game/server/dota/npc/dota_npc_spawner.h:163
class CDOTA_ScriptedSpawner : public CPointEntity, public CGameEventListener {
	struct scripted_moveto_t {
	private:

		EHANDLE hMoveToTarget;  // +0x0
		EHANDLE hGivenToNPC;  // +0x4
		scripted_moveto_t();

		scripted_moveto_t & operator=(const scripted_moveto_t &);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	static datamap_t m_DataMap;

	string_t m_szNPCFirstWaypoint;  // +0x318
	int m_nNPCType;  // +0x320
	bool m_bAllowRelaxation;  // +0x324
	bool m_bPlayPostVictoryAnims;  // +0x325
	bool m_bDisableAutoAttack;  // +0x326
	bool m_bAutomaticallyRespawn;  // +0x327
	bool m_bInvulnerable;  // +0x328
	bool m_bAllowHeroTargets;  // +0x329

	int m_nActivityOverride;  // +0x32c
	float m_flDuration;  // +0x330
	bool m_bAnimationFireOnce;  // +0x334

	COutputEvent m_OnAllUnitsKilled;  // +0x350
	COutputEvent m_OnUnitKilled;  // +0x368
	COutputEvent m_OnHealthLow;  // +0x380
	EHANDLE m_hSpawnpoint;  // +0x3b0

	string_t m_szCustomNPCName;  // +0x3b8
	typedef CPointEntity BaseClass;

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
	CDOTA_ScriptedSpawner(CDOTA_ScriptedSpawner &);
	CDOTA_ScriptedSpawner(CDOTA_ScriptedSpawner &);
	CDOTA_ScriptedSpawner();
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
	virtual void FireGameEvent(IGameEvent *);
	bool AllowRelaxation();
	bool PlayPostVictoryAnims();
	CBaseEntity * GetCurrentMoveToTarget(CDOTA_BaseNPC *);
	bool AllowAutoAttack();
	void SetNPCWaypoint(CBaseEntity *);
	void SetNPCAnimation(int);
	int GetActivityOverride();
	void SetNPCAnimationFireOnce(bool);
	bool HasAnimationFireOnce();
	bool AllowHeroTargets();
	virtual void InputSpawnNPC(inputdata_t &);
	virtual void InputSetNPCType(inputdata_t &);
	virtual void InputSetNPCTeam(inputdata_t &);
	virtual void InputRemoveAllSpawnedUnits(inputdata_t &);
	virtual void InputSetNPCWaypoint(inputdata_t &);
	virtual void InputSetAllowRelaxation(inputdata_t &);
	virtual void InputSetAllowAutoAttack(inputdata_t &);
	virtual void InputSetAutomaticallyRespawn(inputdata_t &);
	virtual void InputSetPlayPostVictoryAnimation(inputdata_t &);
	virtual void InputFireTutorialAdvanceEvent(inputdata_t &);
	virtual void InputSetSpawnPoint(inputdata_t &);
	virtual void InputSetCompanion(inputdata_t &);
	virtual void InputSetCompanionAttack(inputdata_t &);
	virtual void InputTeleportToWaypoint(inputdata_t &);
	virtual void InputSetInvulnerable(inputdata_t &);
	virtual void InputSetHealth(inputdata_t &);
	virtual void InputForceIdle(inputdata_t &);
	virtual void InputForceCreepAttack(inputdata_t &);
	virtual void InputUseAbility(inputdata_t &);
	virtual void InputSetDuration(inputdata_t &);
	virtual void InputSetAllowHeroTargets(inputdata_t &);
	virtual void InputSetCustomNPCName(inputdata_t &);
	CBaseEntity * GetFirstNPC();
	bool IsNPCInSpawnedUnitList(CBaseEntity *);
	void OnNPCHealthLow();
	void SetupNPCWaypoint();
	void OnSpawnNPCsSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	void SpawnNPCs(int);
	void OnSpawnTutorialHeroSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	void SpawnTutorialHero();
	void SpawnObserverWard();
	void AddUnitToList(CDOTA_BaseNPC *);
	virtual ~CDOTA_ScriptedSpawner();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[207] FireGameEvent
	// vtable[208] InputSpawnNPC
	// vtable[209] InputSetNPCType
	// vtable[210] InputSetNPCTeam
	// vtable[211] InputRemoveAllSpawnedUnits
	// vtable[212] InputSetNPCWaypoint
	// vtable[213] InputSetAllowRelaxation
	// vtable[214] InputSetAllowAutoAttack
	// vtable[215] InputSetAutomaticallyRespawn
	// vtable[216] InputSetPlayPostVictoryAnimation
	// vtable[217] InputFireTutorialAdvanceEvent
	// vtable[218] InputSetSpawnPoint
	// vtable[219] InputSetCompanion
	// vtable[220] InputSetCompanionAttack
	// vtable[221] InputTeleportToWaypoint
	// vtable[222] InputSetInvulnerable
	// vtable[223] InputSetHealth
	// vtable[224] InputForceIdle
	// vtable[225] InputForceCreepAttack
	// vtable[226] InputUseAbility
	// vtable[227] InputSetDuration
	// vtable[228] InputSetAllowHeroTargets
	// vtable[229] InputSetCustomNPCName
	// sizeof = 960
};
