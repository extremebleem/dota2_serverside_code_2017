// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_fog_of_war.h:23
class CFoWBlockerEntity : public CBaseEntity {
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
	CFoWBlockerEntity(CFoWBlockerEntity &);
	CFoWBlockerEntity(CFoWBlockerEntity &);
	CFoWBlockerEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CFoWBlockerEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// sizeof = 776
};

// src/game/shared/dota/dota_fog_of_war.h:30
class CFoWRevealerEntity : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	unsigned int m_unViewerTeam;  // +0x308
	int m_nVisionRange;  // +0x30c
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
	CFoWRevealerEntity(CFoWRevealerEntity &);
	CFoWRevealerEntity(CFoWRevealerEntity &);
	CFoWRevealerEntity();
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
	virtual ~CFoWRevealerEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 784
};

// src/game/shared/dota/dota_fog_of_war.h:48
class CDOTAFogOfWarSystem : public IGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct SpawnGroupFowSize_t {
		SpawnGroupFowSize_t();

		// sizeof = 24
	};

	struct SpawnGroupFoWInfo_t {
		int m_nRefCount;  // +0x438
		SpawnGroupFoWInfo_t();
		~SpawnGroupFoWInfo_t();

		// sizeof = 1112
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	float m_flDefaultHeightLevels[4];  // +0x14
	bool m_bDefaultHeightLevelsValid;  // +0x24

	typedef IGameSystem BaseClass;
	CDOTAFogOfWarSystem(CDOTAFogOfWarSystem &);
	CDOTAFogOfWarSystem(const CDOTAFogOfWarSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAFogOfWarSystem *);
	CFoW * GetFoW(WorldGroupId_t);
	virtual void GameInit(const EventGameInit_t &);
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	CDOTAFogOfWarSystem();
	bool HasFoW(WorldGroupId_t);
	void EnableFogOfWar(bool);
	void AddFOWEntity(CBaseModelEntity *);
	bool RemoveFOWEntity(CBaseModelEntity *);
	void BlindViewer(CBaseModelEntity *);
	bool GetFoWSizeForSpawnGroup(SpawnGroupHandle_t, Vector *, Vector *);
	int AddTempViewer(FoWViewerType_t, int, const Vector &, float, float, bool);
	void AddTempViewer(CBaseModelEntity *, int, float, float);
	void RemoveTempViewer(int, int);
	void SetDebugVisibility(bool);
	void EnableDebugFlags(unsigned int);
	void DisableDebugFlags(unsigned int);
	int FindHeightLevelForEntity(CBaseModelEntity *);
	int FindHeightLevel(const Vector &);
	bool CanBeSeenByTeam(CBaseModelEntity *, int);
	bool IsLocationVisible(int, const Vector &, float);
	unsigned int GetTeamMapping(int);

private:

	void SetDebugInfo(SpawnGroupFoWInfo_t *);
	void ComputeFOWBoundsForSpawnGroup(const EventPreSpawnGroupLoad_t &, Vector *, Vector *);
	void ReadHeightLevels();
	void UpdateFogOfWar(SpawnGroupFoWInfo_t *);
	SpawnGroupFoWInfo_t * GetFowInfoForWorldGroupId(WorldGroupId_t);
	void SetVerticalLevelsForSpawnGroup(SpawnGroupFoWInfo_t *, SpawnGroupHandle_t);
	virtual ~CDOTAFogOfWarSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[14] PreSpawnGroupLoad
	// vtable[17] PostSpawnGroupUnload
	// vtable[4] GameShutdown
	// vtable[18] ActiveSpawnGroupChanged
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 104
};
