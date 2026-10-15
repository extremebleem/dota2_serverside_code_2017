// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/isource2engine.h:39
struct SaveRestoreDataHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/engine2/isource2engine.h:64
struct SpawnGroupDesc_t {
	const char * m_pWorldName;  // +0x30
	const char * m_pWorldMountName;  // +0x38
	const char * m_pEntityLumpName;  // +0x40
	const char * m_pEntityFilterName;  // +0x48
	const char * m_pDescriptiveName;  // +0x50
	const char * m_pParentNameFixup;  // +0x58
	const char * m_pLocalNameFixup;  // +0x60
	WorldGroupId_t m_worldGroupId;  // +0x70
	SpawnGroupHandle_t m_hOwner;  // +0x74
	int m_iPriorityLoader;  // +0x78
	float m_flTimeoutInterval;  // +0x80

	const char * m_pSaveFileName;  // +0x88
	bool m_bCreateClientEntitiesOnLaterConnectingClients;  // +0x90
	bool m_bDontSpawnEntities;  // +0x91
	bool m_bBlockUntilLoaded;  // +0x92
	bool m_bLoadStreamingData;  // +0x93
	bool m_bCreateNewSceneWorld;  // +0x94
	bool m_bManualCompletion;  // +0x95
	bool m_bSetActivePostLoad;  // +0x96
	SpawnGroupDesc_t();

	// sizeof = 160
};

// src/public/engine2/isource2engine.h:118
class ISpawnGroup {
	int ()() * * _vptr.ISpawnGroup;  // +0x0
	ISpawnGroup(ISpawnGroup &);
	ISpawnGroup(const ISpawnGroup &);
	ISpawnGroup();
	virtual const char * GetWorldName();
	virtual const char * GetEntityLumpName();
	virtual const char * GetEntityFilterName();
	virtual SpawnGroupHandle_t GetHandle();
	virtual const matrix3x4a_t & GetWorldOffset();
	virtual bool ShouldLoadEntitiesFromSave();
	virtual const char * GetParentNameFixup();
	virtual const char * GetLocalNameFixup();
	virtual SpawnGroupHandle_t GetOwnerSpawnGroup();
	virtual ILoadingSpawnGroup * GetLoadingSpawnGroup();
	virtual void SetLoadingSpawnGroup(ILoadingSpawnGroup *);
	virtual IWorldReference * GetWorldReference();
	virtual CUtlString Describe();
	virtual int GetCreationTick();
	virtual void RequestDeferredUnload(bool);
	virtual int GetDestructionTick();
	virtual bool DontSpawnEntities();
	virtual SpawnGroupHandle_t GetParentSpawnGroup();
	virtual int GetChildSpawnGroupCount();
	virtual void GetSpawnGroupDesc(SpawnGroupDesc_t *);
	virtual void FlagManualCreation();
	virtual bool WasManualCreationFlagged();
	virtual void GetResources(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual void AddChildSpawnGroup(SpawnGroupHandle_t);
	virtual bool SetActivePostLoad();
	virtual bool IsReadyToSpawnEntities();

	// vtable[0] GetWorldName
	// vtable[1] GetEntityLumpName
	// vtable[2] GetEntityFilterName
	// vtable[3] GetHandle
	// vtable[4] GetWorldOffset
	// vtable[5] ShouldLoadEntitiesFromSave
	// vtable[6] GetParentNameFixup
	// vtable[7] GetLocalNameFixup
	// vtable[8] GetOwnerSpawnGroup
	// vtable[9] GetLoadingSpawnGroup
	// vtable[10] SetLoadingSpawnGroup
	// vtable[11] GetWorldReference
	// vtable[12] Describe
	// vtable[13] GetCreationTick
	// vtable[14] RequestDeferredUnload
	// vtable[15] GetDestructionTick
	// vtable[16] DontSpawnEntities
	// vtable[17] GetParentSpawnGroup
	// vtable[18] GetChildSpawnGroupCount
	// vtable[19] GetSpawnGroupDesc
	// vtable[20] FlagManualCreation
	// vtable[21] WasManualCreationFlagged
	// vtable[22] GetResources
	// vtable[23] AddChildSpawnGroup
	// vtable[24] SetActivePostLoad
	// vtable[25] IsReadyToSpawnEntities
	// sizeof = 8
};

// src/public/engine2/isource2engine.h:164
class IGameSpawnGroupMgr {
	int ()() * * _vptr.IGameSpawnGroupMgr;  // +0x0
	IGameSpawnGroupMgr(IGameSpawnGroupMgr &);
	IGameSpawnGroupMgr(const IGameSpawnGroupMgr &);
	~IGameSpawnGroupMgr();
	IGameSpawnGroupMgr();
	virtual void AllocateSpawnGroup(SpawnGroupHandle_t, ISpawnGroup *);
	virtual void ReleaseSpawnGroup(SpawnGroupHandle_t);
	virtual void SpawnGroupInit(SpawnGroupHandle_t, IEntityResourceManifest *, IEntityPrecacheConfiguration *, ISpawnGroupPrerequisiteRegistry *);
	virtual ILoadingSpawnGroup * CreateLoadingSpawnGroup(SpawnGroupHandle_t, bool, bool, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *);
	virtual ILoadingSpawnGroup * CreateLoadingSpawnGroupForSaveFile(SpawnGroupHandle_t, const void *, size_t);
	virtual void SpawnGroupSpawnEntities(SpawnGroupHandle_t);
	virtual void SpawnGroupSaveEntities(SpawnGroupHandle_t);
	virtual void SpawnGroupShutdown(SpawnGroupHandle_t);
	virtual void SetActiveSpawnGroup(SpawnGroupHandle_t);
	virtual void UnloadSpawnGroup(SpawnGroupHandle_t, bool);
	virtual SpawnGroupHandle_t GetParentSpawnGroup(SpawnGroupHandle_t);
	virtual int GetChildSpawnGroupCount(SpawnGroupHandle_t);
	virtual SaveRestoreDataHandle_t SaveGame_Start(const char *, const char *, const char *);
	virtual bool SaveGame_Finalize(SaveRestoreDataHandle_t);
	virtual bool StreamEntitiesToFile(SaveRestoreDataHandle_t);
	virtual const char * SaveGame_GetLastSaveFile();
	virtual bool IsGameReadyToSave();

	// vtable[0] AllocateSpawnGroup
	// vtable[1] ReleaseSpawnGroup
	// vtable[2] SpawnGroupInit
	// vtable[3] CreateLoadingSpawnGroup
	// vtable[4] CreateLoadingSpawnGroupForSaveFile
	// vtable[5] SpawnGroupSpawnEntities
	// vtable[6] SpawnGroupSaveEntities
	// vtable[7] SpawnGroupShutdown
	// vtable[8] SetActiveSpawnGroup
	// vtable[9] UnloadSpawnGroup
	// vtable[10] GetParentSpawnGroup
	// vtable[11] GetChildSpawnGroupCount
	// vtable[12] SaveGame_Start
	// vtable[13] SaveGame_Finalize
	// vtable[14] StreamEntitiesToFile
	// vtable[15] SaveGame_GetLastSaveFile
	// vtable[16] IsGameReadyToSave
	// sizeof = 8
};

// src/public/engine2/isource2engine.h:197
class ILoadingSpawnGroup {
	int ()() * * _vptr.ILoadingSpawnGroup;  // +0x0
	~ILoadingSpawnGroup();
	ILoadingSpawnGroup(ILoadingSpawnGroup &);
	ILoadingSpawnGroup(const ILoadingSpawnGroup &);
	ILoadingSpawnGroup();
	virtual int EntityCount();
	virtual const EntitySpawnInfo_t * GetEntities();
	virtual bool ShouldLoadEntitiesFromSave();
	virtual const CUtlBuffer & GetSaveRestoreFileData();
	virtual void SetLevelTransitionPreviousMap(const char *, const char *);
	virtual bool IsLevelTransition();
	virtual const char * GetLevelTransitionPreviousMap();
	virtual const char * GetLevelTransitionLandmarkName();
	virtual CUtlScratchMemoryPool * GetEntityKeyValuesAllocator();
	virtual CEntityInstance * CreateEntityToSpawn(SpawnGroupHandle_t, const matrix3x4a_t &, int, const CEntityKeyValues *);
	virtual void SpawnEntities();
	virtual void Release();

	// vtable[0] EntityCount
	// vtable[1] GetEntities
	// vtable[2] ShouldLoadEntitiesFromSave
	// vtable[3] GetSaveRestoreFileData
	// vtable[4] SetLevelTransitionPreviousMap
	// vtable[5] IsLevelTransition
	// vtable[6] GetLevelTransitionPreviousMap
	// vtable[7] GetLevelTransitionLandmarkName
	// vtable[8] GetEntityKeyValuesAllocator
	// vtable[9] CreateEntityToSpawn
	// vtable[10] SpawnEntities
	// vtable[11] Release
	// sizeof = 8
};
