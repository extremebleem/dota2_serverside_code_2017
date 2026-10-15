// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entitysystem.h:49
struct EntityClassIter_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/entity2/entitysystem.h:50
struct EntityComponentTypeIter_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/entity2/entitysystem.h:120
struct PostDataUpdateInfo_t : public EntityNotification_t {
public:

	// sizeof = 16
};

// src/public/entity2/entitysystem.h:129
struct SetInPVSInfo_t {
	bool m_bInPVS;  // +0x8

	// sizeof = 16
};

// src/public/entity2/entitysystem.h:136
struct QueuedSetInPVSInfo_t {
	bool m_bInPVS;  // +0x4
	QueuedSetInPVSInfo_t();

	// sizeof = 8
};

// src/public/entity2/entitysystem.h:145
struct EntityActivation_t : public EntityNotification_t {
public:

	// sizeof = 8
};

// src/public/entity2/entitysystem.h:153
struct EntityDormancyChange_t : public EntityNotification_t {
public:

	// sizeof = 16
};

// src/public/entity2/entitysystem.h:163
struct EntityDeletion_t : public EntityNotification_t {
public:

	// sizeof = 8
};

// src/public/entity2/entitysystem.h:171
struct EntityIOQueuePrioritizedEvent_t {
	static datamap_t m_DataMap;

	float m_flFireTime;  // +0x0
	string_t m_pTarget;  // +0x8
	string_t m_pTargetInput;  // +0x10
	int m_nOutputID;  // +0x20
	CVariant m_variantValue;  // +0x28
	EntityIOQueuePrioritizedEvent_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	~EntityIOQueuePrioritizedEvent_t();

	// sizeof = 72
};

// src/public/entity2/entitysystem.h:229
class IEntityIONotify {
	int ()() * * _vptr.IEntityIONotify;  // +0x0
	IEntityIONotify(IEntityIONotify &);
	IEntityIONotify(const IEntityIONotify &);
	IEntityIONotify();
	virtual void OnEntityIOOutput(CEntityInstance *, CEntityInstance *, EntityIOConnection_t *);
	virtual void OnEntityIOInput(CEntityInstance *, const char *, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	virtual void OnEntityIOConnectionRemoved(CEntityInstance *, CEntityInstance *, EntityIOConnection_t *);

	// vtable[0] OnEntityIOOutput
	// vtable[1] OnEntityIOInput
	// vtable[2] OnEntityIOConnectionRemoved
	// sizeof = 8
};

// src/public/entity2/entitysystem.h:241
class IEntityFindFilter {
	int ()() * * _vptr.IEntityFindFilter;  // +0x0
	IEntityFindFilter(IEntityFindFilter &);
	IEntityFindFilter(const IEntityFindFilter &);
	IEntityFindFilter();
	virtual bool ShouldFindEntity(CEntityInstance *);

	// vtable[0] ShouldFindEntity
	// sizeof = 8
};

// src/public/entity2/entitysystem.h:257
struct EntityInstanceIter_t {
protected:

	EntityInstanceIter_t(IEntityFindFilter *, EntityIterType_t);
	EntityInstanceIter_t(CEntityInstance *, IEntityFindFilter *, EntityIterType_t);
	CEntityInstance * First();
	CEntityInstance * Next();

	// sizeof = 24
};

// src/public/entity2/entitysystem.h:278
struct EntityInstanceByClassIter_t : public EntityInstanceIter_t {
public:

protected:

	const char * m_pSearchString;  // +0x18
	EntityInstanceByClassIter_t(const char *, IEntityFindFilter *, EntityIterType_t);
	EntityInstanceByClassIter_t(string_t, IEntityFindFilter *, EntityIterType_t);
	EntityInstanceByClassIter_t(CEntityInstance *, const char *, IEntityFindFilter *, EntityIterType_t);
	CEntityInstance * First();
	CEntityInstance * Next();
	void Init(const char *);

	// sizeof = 40
};

// src/public/entity2/entitysystem.h:303
struct EntityInstanceByNameIter_t : public EntityInstanceIter_t {
public:

protected:

	const char * m_pSearchString;  // +0x18
	const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > * m_pNameList;  // +0x20
	int m_nCurNameInList;  // +0x28
	int m_nStartingNameListCount;  // +0x2c
	EntityInstanceByNameIter_t(const char *, CEntityInstance *, CEntityInstance *, CEntityInstance *, IEntityFindFilter *, EntityIterType_t);
	EntityInstanceByNameIter_t(string_t, CEntityInstance *, CEntityInstance *, CEntityInstance *, IEntityFindFilter *, EntityIterType_t);
	EntityInstanceByNameIter_t(CEntityInstance *, const char *, CEntityInstance *, CEntityInstance *, CEntityInstance *, IEntityFindFilter *, EntityIterType_t);
	EntityInstanceByNameIter_t(CEntityInstance *, string_t, CEntityInstance *, CEntityInstance *, CEntityInstance *, IEntityFindFilter *, EntityIterType_t);
	CEntityInstance * First();
	CEntityInstance * Next();

	// sizeof = 56
};

// src/public/entity2/entitysystem.h:411
class CEntitySystem : public IEntityResourceManifestBuilder {
	enum EQueueDestroyFlags_t {
		QDE_NONNETWORKABLE = 0x1,
		QDE_NETWORKABLE = 0x2,
		QDE_EVERYTHING = 0x3,
	};

	struct CreationInfo_t {
		const CEntityKeyValues * m_pKeyValues;  // +0x10
		bool m_bNeedsUnserialization;  // +0x18
		CreationInfo_t();
		CEntityInstance * GetEntity();
		CEntityIdentity * GetEntityIdentity();

		// sizeof = 32
	};

	struct ComponentFieldUnserializerInfo_t {
		ClassIntrospectionHandle_t m_pClass;  // +0x8
		const char * m_pKeyPrefix;  // +0x10
		FieldIntrospectionHandle_t m_pField;  // +0x18
		int m_nFieldOffset;  // +0x28

		CUtlMap<CUtlStringToken, CUtlString, int, bool (*)(const CUtlStringToken&, const CUtlStringToken&)> * m_pTokenCollisionTest;  // +0x30
		int m_nFirstArrayIndex;  // +0x38
		bool m_bIsWorldSpaceOrientation;  // +0x3c
		bool m_bIsWorldSpace;  // +0x3d
		bool m_bIsRemoved;  // +0x3e

		ComponentFieldUnserializerInfo_t();
		~ComponentFieldUnserializerInfo_t();

		// sizeof = 88
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	static datamap_t m_DataMap;

	static const int k_FixedQueuedEntities = 50;
	static CUtlStringMap<CUtlAbstractDelegate, CUtlSymbolTable> s_PostUnserializeHandlers;
protected:

private:

	static int s_nInitCount;

	char * m_pszName;  // +0xcc0
	CUtlMap<char const*, CEntityClass*, short unsigned int, bool (*)(char const* const&, char const* const&)> m_ClassesByName;  // +0xcc8
	CUtlMap<char const*, CEntityClass*, short unsigned int, bool (*)(char const* const&, char const* const&)> m_ClassesByDesignName;  // +0xcf0
	CUtlMap<char const*, CEntityComponentHelper*, short unsigned int, bool (*)(char const* const&, char const* const&)> m_ComponentTypesByName;  // +0xd18
	CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> >*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)> m_EntityByNameMap;  // +0xd40

	int m_iEventListCount;  // +0xdf0

	bool m_bPerformDeletionPostCreation;  // +0xe00
	bool m_bPerformDeallocationPostCreation;  // +0xe01
	bool m_bInvokePostDataUpdates;  // +0xe02
	bool m_bAutoExecuteQueuedDeletion;  // +0xe03
	bool m_bProfilingResourceSystem;  // +0xe04

	int m_nQueueSetInPVSCallsDepth;  // +0xe08
	int m_nQueuedCreationDepth;  // +0xe10
	int m_nQueuedDestructionDepth;  // +0xe14
	int m_nDestroyImmediateSuppressCount;  // +0xe18
	int m_nAutoDeletionSuppressCount;  // +0xe1c
	int m_nEntitySpawnerDataUseCount;  // +0xe20
	float m_flChangeCallbackMsecLimit;  // +0xe24
	bool m_bInRestoreActivation;  // +0xe28

	CUtlVector<CUtlDelegate<void(bool)>, CUtlMemory<CUtlDelegate<void(bool)>, int> > m_creationDelegates;  // +0xea8
	PostSpawnDelegate_t m_postSpawnDelegate;  // +0xec0

	string_t_table m_pooledStrings;  // +0x1eb0
	bool m_bProcessingQueuedActivatesAndPostDataUpdates;  // +0x19f20

	SpawnGroupHandle_t m_ActiveSpawnGroupHandle;  // +0x19f24

	CEntitySystem(const CEntitySystem &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual void BuildResourceManifest(SpawnGroupHandle_t, int, const CEntityKeyValues * *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(SpawnGroupHandle_t, int, const EntitySpawnInfo_t *, const matrix3x4a_t &, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(SpawnGroupHandle_t, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, const char *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(const char *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(EntityResourceManifestCreationCallback_t, void *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifestForEntity(const char *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void InvokePrecacheCallback(ResourceHandle_t, const EntitySpawnInfo_t &, IEntityPrecacheConfiguration *, IEntityResourceManifest *, SecondaryPrecacheMemberCallback_t);
	virtual void LockResourceManifest(bool, CEntityResourceManifestLock &);
	virtual void AddRefKeyValues(const CEntityKeyValues *);
	virtual void ReleaseKeyValues(const CEntityKeyValues *);
	CEntitySystem();
	virtual ~CEntitySystem();
	const char * GetName();
	void CreateEntitySystem(const char *, EntitySystemType_t, IEntityIONotify *, NetworkSerializationMode_t, bool);
	void DestroyEntitySystem();
	void Init(const char *, EntitySystemType_t, IEntityIONotify *, NetworkSerializationMode_t, bool);
	void Shutdown();
	int RegisterComponentType(CEntityComponentHelper *);
	void UnregisterComponentType(CEntityComponentHelper *);
	int NumComponentTypes();
	void SetGlobals(CGlobalVarsBase *);
	IEntityIONotify * GetEntityIONotify();
	CEntityClass * FindClassByName(const char *, CUtlString *);
	CEntityClass * FindClassByDesignName(const char *, CUtlString *);
	CEntityClass * IterClassesStart(EntityClassIter_t *);
	CEntityClass * IterClassesNext(EntityClassIter_t *);
	void IterClassesEnd(EntityClassIter_t *);
	CEntityComponentHelper * FindComponentTypeByName(const char *);
	CEntityComponentHelper * FindComponentTypeByRuntimeIndex(int);
	CEntityComponentHelper * IterComponentTypesStart(EntityComponentTypeIter_t *);
	CEntityComponentHelper * IterComponentTypesNext(EntityComponentTypeIter_t *);
	void IterComponentTypesEnd(EntityComponentTypeIter_t *);
	CEntityInstance * CreateEntity(SpawnGroupHandle_t, CEntityClass *, const char *, EntityNetworkingMode_t, CEntityIndex, int, const V_uuid_t *, bool);
	CEntityInstance * CreateEntity(SpawnGroupHandle_t, const char *, EntityNetworkingMode_t, CEntityIndex, int, const V_uuid_t *, bool);
	void QueueDestroyEntity(CEntityIdentity *);
	void QueueDestroyEntity(CEntityInstance *);
	void EnableAutoDeletionExecution(bool);
	void SuppressAutoDeletionExecution(bool);
	void SuppressDestroyImmediate(bool);
	void DestroyEntityImmediate(CEntityIdentity *);
	void DestroyEntityImmediate(CEntityInstance *);
	void QueueSpawnEntity(CEntityIdentity *, const CEntityKeyValues *);
	void QueueSpawnEntity(CEntityInstance *, const CEntityKeyValues *);
	void QueuePostDataUpdates(int, PostDataUpdateInfo_t *);
	bool IsProcessingQueuedActivatesAndPostDataUpdates();
	CConcreteEntityList & GetEntityList();
	const CConcreteEntityList & GetEntityList();
	const CEntityInstance * FindEntityById(const V_uuid_t &);
	int Save(ISave &);
	int Restore(IRestore &);
	void AddEntityIOEvent(EntityIOTargetType_t, const char *, const char *, CEntityInstance *, CEntityInstance *, const CVariant &, float, int);
	void AddEntityIOEvent(CEntityInstance *, const char *, CEntityInstance *, CEntityInstance *, float, int);
	void AddEntityIOEvent(CEntityInstance *, const char *, CEntityInstance *, CEntityInstance *, const CVariant &, float, int);
	void AddEntityIOEvent(EntityIOTargetType_t, string_t, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, float, int);
	void AddEntityIOEvent(EHANDLE2, string_t, CEntityInstance *, CEntityInstance *, const CVariant &, float, int);
	void ServiceEntityIOEvents();
	void CancelEntityIOEvents(CEntityInstance *);
	void ClearEntityIOEvents();
	void InstallCreationWrapperCallbacks(CreationWrapperDelegate_t);
	void InstallPostSpawnCallback(PostSpawnDelegate_t);
	void RemoveCreationWrapperCallbacks();
	void RemovePostSpawnCallback();
	void InitGlobalContainedFlags(CEntityClass *);
	void BuildEntityClassTables(CEntityClass *);
	void BuildEntityNetworking(NetworkSerializationMode_t, CUtlVector<CEntityClass*, CUtlMemory<CEntityClass*, int> > &);
	void QueueDestroyAllEntities(EQueueDestroyFlags_t);
	bool HasEntitiesOfType(EQueueDestroyFlags_t);
	virtual void ClearEntityDatabase(ClearEntityDatabaseMode_t);
	void ExecuteQueuedCreation();
	void ExecuteQueuedDeletion(bool);
	void ExecuteQueuedDeallocation();
	void ExecuteQueuedOperations(bool);
	bool HasQueuedEntitySpawns();
	bool HasQueuedEntityDeletions();
	void SetInPVS(int, const SetInPVSInfo_t *);
	void SetInPVS(CEntityInstance *, bool);
	void ForceSetInPVSCallsIntoQueue(bool);
	bool IsForcingSetInPVSCallsIntoQueue();
	IScriptVM * GetVM();
	void LoadEntityScriptClasses();
	CCallQueue * GetPostActivateCallQueue();
	CNetworkFieldChangedEventQueue * GetNetworkFieldChangeCallbackQueue();
	string_t AllocPooledString(const char *);
	string_t FindPooledString(const char *);
	int UniqueEntityNameCount();
	CEntityInstance * FindFirstEntityByName(const char *);
	CEntityInstance * FindFirstEntityByName(string_t);
	CEntityHandle FindFirstEntityHandleByName(const char *);
	CEntityInstance * FindEntityInheritingFrom(CEntityInstance *, const CSchemaClassBindingBase *);
	CEntityInstance * FindEntityByOutputTarget(CEntityInstance *, string_t);
	virtual CEntityInstance * FindEntityProcedural(const char *, CEntityInstance *, CEntityInstance *, CEntityInstance *);
	IEntityResourceManifest * GetCurrentEntityResourceManifest();
	void RegisterPostUnserializeHandler(const char *, CUtlAbstractDelegate);
	void SetActiveSpawnGroupHandle(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetActiveSpawnGroupHandle();
	const matrix3x4a_t & GetSpawnOriginOffset();
	void SetSpawnOriginOffset(const matrix3x4a_t &);
	void PerformPreRenderCleanup();
	void CleanUpAttributeObjectPool();
	void AddDataAccessor(EntityDataObjectType_t, IEntityDataInstantiator *);
	void * CreateDataObject(EntityDataObjectType_t, CEntityInstance *);
	void DestroyDataObject(EntityDataObjectType_t, CEntityInstance *);
	void * GetDataObject(EntityDataObjectType_t, const CEntityInstance *);
	CUtlScratchMemoryPool * AcquireEntitySpawnerEntityVariantAllocator();
	void ReleaseEntitySpawnerEntityVariantAllocator(CUtlScratchMemoryPool *);
	bool IsKeyUsedByScriptClass(const char *, EntityKeyId_t);
	virtual void OnEntityParentChanged(CEntityInstance *, CEntityInstance *);
	void SetChangeCallbackLimitMsecs(float);
	void SetChangeCallbackTimeLimitSpewFunc(IFieldChangeLimitSpew *);
	void SetRestoreActivation(bool);

protected:

	virtual void OnAddEntity(CEntityInstance *, CEntityHandle);
	virtual void OnRemoveEntity(CEntityInstance *, CEntityHandle);
	virtual WorldGroupId_t GetSpawnGroupWorldId(SpawnGroupHandle_t);
	virtual void Spawn(int, const EntitySpawnInfo_t *);
	virtual void Activate(int, const EntityActivation_t *, ActivateType_t);
	virtual void PostDataUpdate(int, const PostDataUpdateInfo_t *);
	virtual void OnSetDormant(int, const EntityDormancyChange_t *, bool);
	virtual void UpdateOnRemove(int, const EntityDeletion_t *);

private:

	void PostCreateEntitySystem(const char *, EntitySystemType_t, IEntityIONotify *, NetworkSerializationMode_t, bool);
	int RegisterEntityClass(CEntityClass *);
	void RegisterAliasEntityClass(CEntityClass *);
	void UnregisterEntityClass(CEntityClass *);
	void PrecacheEntity(SpawnGroupHandle_t, const CEntityKeyValues *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	void HelperExecuteQueuedSpawn(CUtlVectorFixedGrowable<CEntityHandle, 50ul> &);
	void ActivateEntity(CEntityIdentity *, ActivateType_t);
	void ExecuteQueuedActivates(CUtlVectorFixedGrowable<CEntityHandle, 50ul> &);
	void ExecuteQueuedPostDataUpdateAndActivates(CUtlVectorFixedGrowable<CEntityHandle, 50ul> &);
	CEntityIdentity * AllocateEntityIdentity(bool, CEntityIndex, int, const V_uuid_t *, bool, bool);
	void DeallocateEntityIdentity(CEntityIdentity *, bool);
	bool DoConstructEntity(CEntityIdentity *, const char *);
	void DoDestructEntity(CEntityInstance *, bool);
	void BuildTablesRecursive(CEntityClass *, bool *, ClassIntrospectionHandle_t, size_t, int &, ComponentHelper_t *);
	bool BuildComponentRecursive(CEntityClass *, bool *, const char *, size_t, int &, ComponentHelper_t *, bool *, int);
	void FreeAllPooledStrings();
	void AddEntityToNameMap(CEntityIdentity *);
	void RemoveEntityFromNameMap(CEntityIdentity *);
	CEntityIdentity * TransferEntityIntoStagingDatabase(CEntityIdentity *);
	void OnAddEntityToDatabase(CEntityIdentity *);
	void OnRemoveEntityFromDatabase(CEntityIdentity *);
	void AddEntityIOEvent(EntityIOQueuePrioritizedEvent_t *);
	void RemoveEntityIOEvent(EntityIOQueuePrioritizedEvent_t *);
	void BuildComponentUnserializers();
	void BuildComponentUnserializer(const char *, ClassIntrospectionHandle_t, uint32, bool, ComponentUnserializerClassInfo_t *, CUtlMap<CUtlStringToken, CUtlString, int, bool (*)(const CUtlStringToken&, const CUtlStringToken&)> &);
	void AddComponentFieldUnserializer(const ComponentFieldUnserializerInfo_t &);
	/* tag__fprintf: const_type tag not supported! */;
	void AddComponentProceduralKeys(const char *, ClassIntrospectionHandle_t, bool, ComponentUnserializerClassInfo_t *, CUtlMap<CUtlStringToken, CUtlString, int, bool (*)(const CUtlStringToken&, const CUtlStringToken&)> &);
	void AddKeyToUnserialize(const ComponentFieldUnserializerInfo_t &, const char *, const char *, CSchemaType *, uint32, EntityKeyTransformType_t, bool);
	void UpdateDatabaseForDormancy(CConcreteEntityList &, int, EntityDormancyChange_t *);
	void UpdateDormancyFlags(int, EntityDormancyChange_t *);
	void QueueSetInPVS(int, const SetInPVSInfo_t *);
	void ExecuteQueuedSetInPVS();
	const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > * FindEntitiesByNameExact(const char *);
	const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > * FindEntitiesByNameExact(string_t);
	const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > * FindEntitiesByName(string_t, CEntityInstance *, CEntityInstance *, CEntityInstance *, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > *);
	bool IsServerEntitySystem();
	CEntityInstance * AllocateForPrecache(const CEntityKeyValues *);
	void DeallocateForPrecache(CEntityInstance *);
	bool UnserializeForPrecache(CEntityIdentity *, const CEntityKeyValues *);
	bool IsValidDataObjectType(EntityDataObjectType_t);
	bool FindPostUnserializeHandler(const char *, CUtlAbstractDelegate *);
	CEntityComponentHelper * HelperElementToHelper<CEntityClass::ComponentHelper_t>(ComponentHelper_t *);
	void SortHelpersByPriority<CEntityClass::ComponentHelper_t>(int, ComponentHelper_t *);

	// vtable[1] BuildResourceManifest
	// vtable[0] BuildResourceManifest
	// vtable[2] BuildResourceManifest
	// vtable[3] BuildResourceManifest
	// vtable[4] BuildResourceManifest
	// vtable[5] BuildResourceManifestForEntity
	// vtable[6] InvokePrecacheCallback
	// vtable[9] LockResourceManifest
	// vtable[7] AddRefKeyValues
	// vtable[8] ReleaseKeyValues
	// vtable[12] ClearEntityDatabase
	// vtable[13] FindEntityProcedural
	// vtable[14] OnEntityParentChanged
	// vtable[15] OnAddEntity
	// vtable[16] OnRemoveEntity
	// vtable[17] GetSpawnGroupWorldId
	// vtable[18] Spawn
	// vtable[19] Activate
	// vtable[20] PostDataUpdate
	// vtable[21] OnSetDormant
	// vtable[22] UpdateOnRemove
	// sizeof = 106592
};

// src/public/entity2/entitysystem.h:900
class CEntitySpawnHelperScopeGuard {
	CEntitySpawnHelperScopeGuard(CEntityInstance *);
	~CEntitySpawnHelperScopeGuard();

	// sizeof = 1
};
