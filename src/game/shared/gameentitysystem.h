// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gameentitysystem.h:31
class IEntityListener {
	int ()() * * _vptr.IEntityListener;  // +0x0
	~IEntityListener();
	IEntityListener(IEntityListener &);
	IEntityListener(const IEntityListener &);
	IEntityListener();
	virtual void OnEntityCreated(CEntityInstance *);
	virtual void OnEntitySpawned(CEntityInstance *);
	virtual void OnEntityDeleted(CEntityInstance *);
	virtual void OnEntityParentChanged(CEntityInstance *, CEntityInstance *);

	// vtable[0] OnEntityCreated
	// vtable[1] OnEntitySpawned
	// vtable[2] OnEntityDeleted
	// vtable[3] OnEntityParentChanged
	// sizeof = 8
};

// src/game/shared/gameentitysystem.h:47
class ISpawnGroupEntityFilter {
	int ()() * * _vptr.ISpawnGroupEntityFilter;  // +0x0
	ISpawnGroupEntityFilter();
	virtual ~ISpawnGroupEntityFilter();
	virtual void FilterSpawnGroupEntities(SpawnGroupHandle_t, bool, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > &);
	const CEntityKeyValues * FilterSpawnGroupEntity(SpawnGroupHandle_t, bool, const CEntityKeyValues *);

	// vtable[2] FilterSpawnGroupEntities
	// sizeof = 8
};

// src/game/shared/gameentitysystem.h:72
class CSpawnGroupEntityFilterRegistrar {
private:

	const char * m_pName;  // +0x8

	static CSpawnGroupEntityFilterRegistrar * sm_pFirst;
	CSpawnGroupEntityFilterRegistrar(const char *, ISpawnGroupEntityFilter *, SpawnGroupEntityFilterType_t);
	void RegisterSpawnGroupEntityFilters();

	// sizeof = 32
};

// src/game/shared/gameentitysystem.h:96
struct PreSpawnListInfo_t {
	const char * m_pMapData;  // +0x8
	int m_iMapDataLength;  // +0x10

	// sizeof = 24
};

// src/game/shared/gameentitysystem.h:106
struct NameFixupSettings_t {
	const char * m_pParentNameFixup;  // +0x0
	const char * m_pLocalNameFixup;  // +0x8
	NameFixupSettings_t();

	// sizeof = 16
};

// src/game/shared/gameentitysystem.h:147
class CGameEntitySystem : public CEntitySystem {
	struct HierarchicalSpawnInfo_t {
		int m_nDepth;  // +0x0
		int m_nOriginalSpawnOrder;  // +0x4

		// sizeof = 24
	};

	struct SpawnGroupEntityFilterInfo_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int m_iMaxNetworkedEntIndex;  // +0x1a060
	int m_iNetworkedEntCount;  // +0x1a064
	int m_iNonNetworkedSavedEntCount;  // +0x1a068
	int m_iNumEdicts;  // +0x1a06c
	CGameEntitySystem(const CGameEntitySystem &);
	CGameEntitySystem();
	virtual ~CGameEntitySystem();
	CEntityIdentity * FirstEntInfo();
	CEntityIdentity * NextEntInfo(CEntityIdentity *);
	CEntityIdentity * GetEntInfoPtr(const CBaseHandle &);
	IHandleEntity * LookupEntity(const CEntityHandle &);
	IHandleEntity * LookupEntityByNetworkIndex(CEntityIndex);
	CEntityHandle GetNetworkableHandle(CEntityIndex);
	CBaseEntity * GetBaseEntity(CEntityHandle);
	CEntityHandle EntIndexToHandle(CEntityIndex);
	CEntityIndex HandleToEntIndex(CEntityHandle);
	bool IsHandleValid(CEntityHandle);
	int NumberOfEntities(bool);
	void AddListenerEntity(IEntityListener *);
	void RemoveListenerEntity(IEntityListener *);
	void NotifyCreateEntity(CBaseEntity *);
	void NotifySpawn(CBaseEntity *);
	void NotifyRemoveEntity(CBaseEntity *);
	CBaseEntity * NextEnt(CBaseEntity *);
	CBaseEntity * FirstEnt();
	void PrecacheSpawnGroupEntities(SpawnGroupHandle_t, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, const matrix3x4a_t &, const char *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	ILoadingSpawnGroup * CreateSpawnGroupEntities(SpawnGroupHandle_t, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, const matrix3x4a_t &, const char *, CreateSpawnGroupType_t, const NameFixupSettings_t *, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > *);
	ILoadingSpawnGroup * CreateSpawnGroupEntitiesFromSaveRestoreData(SpawnGroupHandle_t, const matrix3x4a_t &, CreateSpawnGroupType_t, const void *, size_t, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > *);
	ILoadingSpawnGroup * CreateLoadingSpawnGroup();
	void SpawnLoadingEntities(ILoadingSpawnGroup *, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > *);
	SpawnGroupCompletionDelegateHandle_t ListenForSpawnGroupToFinish(SpawnGroupHandle_t, CBaseEntity *, SpawnGroupCompletionDelegate_t);
	SpawnGroupCompletionDelegateHandle_t ListenForEntityInSpawnGroupToFinish(SpawnGroupHandle_t, CEntityInstance *, const CEntityKeyValues *, CEntityInstance *, SpawnGroupEntitySpawnCompletionDelegate_t);
	void RemoveSpawnGroupListener(SpawnGroupCompletionDelegateHandle_t);
	void RegisterSpawnGroupEntityFilter(const char *, ISpawnGroupEntityFilter *, SpawnGroupEntityFilterType_t);
	ISpawnGroupEntityFilter * RemoveSpawnGroupEntityFilter(const char *);
	ISpawnGroupEntityFilter * GetSpawnGroupEntityFilter(const char *);
	const char * GetSpawnGroupEntityFilterName(ISpawnGroupEntityFilter *);
	void SetSaveRestore(IEntity2SaveRestore *);
	IEntity2SaveRestore * GetSaveRestore();
	ISpawnGroupEntityFilter * FindSpawnGroupFilter(const char *);
	virtual void BuildResourceManifest(const char *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(SpawnGroupHandle_t, int, const EntitySpawnInfo_t *, const matrix3x4a_t &, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(SpawnGroupHandle_t, int, const CEntityKeyValues * *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(SpawnGroupHandle_t, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, const char *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(EntityResourceManifestCreationCallback_t, void *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifestForEntity(const char *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void InvokePrecacheCallback(ResourceHandle_t, const EntitySpawnInfo_t &, IEntityPrecacheConfiguration *, IEntityResourceManifest *, SecondaryPrecacheMemberCallback_t);
	virtual void LockResourceManifest(bool, CEntityResourceManifestLock &);
	bool IsEntityPtr(void *);
	CBaseEntity * FindEntityInSphere(CBaseEntity *, const Vector &, float);
	CBaseEntity * FindEntityByTarget(CBaseEntity *, const char *);
	CBaseEntity * FindEntityByModel(CBaseEntity *, const char *);
	CBaseEntity * FindEntityByModelWithin(CBaseEntity *, const char *, const Vector &, float);
	CBaseEntity * FindEntityByNameNearest(const char *, const Vector &, float, CBaseEntity *, CBaseEntity *, CBaseEntity *);
	CBaseEntity * FindEntityByNameWithin(CBaseEntity *, const char *, const Vector &, float, CBaseEntity *, CBaseEntity *, CBaseEntity *);
	CBaseEntity * FindEntityByClassnameNearest(const char *, const Vector &, float);
	CBaseEntity * FindEntityByClassnameNearest2D(const char *, const Vector &, float);
	CBaseEntity * FindEntityByClassnameWithin(CBaseEntity *, const char *, const Vector &, float);
	CEntityInstance * FindEntityInheritingFromWithin(CEntityInstance *, const CSchemaClassBindingBase *, const Vector &, float);
	CBaseEntity * FindEntityByClassnameWithin(CBaseEntity *, const char *, const Vector &, const Vector &);
	CBaseEntity * FindEntityGeneric(CBaseEntity *, const char *, CBaseEntity *, CBaseEntity *, CBaseEntity *);
	CBaseEntity * FindEntityGenericWithin(CBaseEntity *, const char *, const Vector &, float, CBaseEntity *, CBaseEntity *, CBaseEntity *);
	CBaseEntity * FindEntityGenericNearest(const char *, const Vector &, float, CBaseEntity *, CBaseEntity *, CBaseEntity *);
	CBaseEntity * FindEntityNearestFacing(const Vector &, const Vector &, float);
	CBaseEntity * FindEntityClassNearestFacing(const Vector &, const Vector &, float, char *);
	CBaseEntity * FindEntityInheritingFromNearestFacing(const Vector &, const Vector &, float, const CSchemaClassBindingBase *);
	virtual CEntityInstance * FindEntityProcedural(const char *, CEntityInstance *, CEntityInstance *, CEntityInstance *);
	CBaseEntity * FindEntityProcedural(const char *, CBaseEntity *, CBaseEntity *, CBaseEntity *);
	CBaseEntity * FindEntityByClassnameNearestFast(string_t, const Vector &, float);
	CBaseEntity * FindEntityByClassname(CBaseEntity *, const char *);
	CBaseEntity * FindEntityByClassnameFast(CBaseEntity *, string_t);
	CBaseEntity * FindEntityByName(CBaseEntity *, const char *, CBaseEntity *, CBaseEntity *, CBaseEntity *, IEntityFindFilter *);
	CBaseEntity * FindEntityByName(CBaseEntity *, string_t, CBaseEntity *, CBaseEntity *, CBaseEntity *, IEntityFindFilter *);
	CBaseEntity * FindEntityByNameFast(CBaseEntity *, string_t);
	CEntityIndex GetHighestEntityIndex();
	void CleanupDeleteList();
	CBaseEntity * GetEnt(CEntityIndex);
	CBaseEntity * GetBaseEntity(CEntityIndex);
	ICollideable * GetCollideable(CEntityIndex);
	CBaseEntity * GetBaseEntityFromHandle(CEntityHandle);
	virtual void ClearEntityDatabase(ClearEntityDatabaseMode_t);
	void HandlePointPrefab(SpawnGroupHandle_t, ILoadingSpawnGroup *, const matrix3x4a_t &, const CEntityKeyValues *);

protected:

	virtual void OnAddEntity(CEntityInstance *, CEntityHandle);
	virtual void OnRemoveEntity(CEntityInstance *, CEntityHandle);
	virtual void OnEntityParentChanged(CEntityInstance *, CEntityInstance *);
	virtual WorldGroupId_t GetSpawnGroupWorldId(SpawnGroupHandle_t);
	virtual void Spawn(int, const EntitySpawnInfo_t *);
	virtual void Activate(int, const EntityActivation_t *, ActivateType_t);
	virtual void PostDataUpdate(int, const PostDataUpdateInfo_t *);
	virtual void OnSetDormant(int, const EntityDormancyChange_t *, bool);
	virtual void UpdateOnRemove(int, const EntityDeletion_t *);
	void RecomputeMaxNetworkedEntIndex();
	bool CompareSpawnOrder(const HierarchicalSpawnInfo_t &, const HierarchicalSpawnInfo_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int ComputeSpawnHierarchyDepth_r(const CEntityKeyValues *, int, EntitySpawnInfo_t *);
	void ComputeHierarchyInfo(int, EntitySpawnInfo_t *, HierarchicalSpawnInfo_t *);
	void UniqueifyEntityNames(const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, const NameFixupSettings_t *, CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *);
	void ExtractClientServerSpecificEntities(CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, const CEntityKeyValues * *, int);
	void SortEntities(int, EntitySpawnInfo_t *, int *, int *);

	// vtable[3] BuildResourceManifest
	// vtable[0] BuildResourceManifest
	// vtable[1] BuildResourceManifest
	// vtable[2] BuildResourceManifest
	// vtable[4] BuildResourceManifest
	// vtable[5] BuildResourceManifestForEntity
	// vtable[6] InvokePrecacheCallback
	// vtable[9] LockResourceManifest
	// vtable[13] FindEntityProcedural
	// vtable[12] ClearEntityDatabase
	// vtable[15] OnAddEntity
	// vtable[16] OnRemoveEntity
	// vtable[14] OnEntityParentChanged
	// vtable[17] GetSpawnGroupWorldId
	// vtable[18] Spawn
	// vtable[19] Activate
	// vtable[20] PostDataUpdate
	// vtable[21] OnSetDormant
	// vtable[22] UpdateOnRemove

	// sizeof = 106688
};

// src/game/shared/gameentitysystem.h:488
class CForceSpawnGroupHandleScopeGuard {
private:

	SpawnGroupHandle_t m_SaveHandle;  // +0x0
	CForceSpawnGroupHandleScopeGuard(SpawnGroupHandle_t);
	~CForceSpawnGroupHandleScopeGuard();

	// sizeof = 4
};

// src/game/shared/gameentitysystem.h:541
class CBaseEntityClassList {
	CBaseEntityClassList();
	~CBaseEntityClassList();

	// sizeof = 8
};
