// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/spawngroupmgrgamesystem.h:25
struct SpawnGroupConnectionInfo_t {
	int m_nSpawnGroupCacheMarker;  // +0x8

	int m_nClusterForLandmark;  // +0x44
	bool m_bForwardLink;  // +0x4c
	SpawnGroupConnectionInfo_t();
	CMapSpawnGroup * GetSpawnGroup();

	// sizeof = 80
};

// src/game/shared/spawngroupmgrgamesystem.h:67
class CMapSpawnGroup {
	bool m_bSpawnGroupPrecacheDispatched;  // +0x8
	bool m_bSpawnGroupLoadDispatched;  // +0x9

private:

	static int s_nSpawnGroupCacheMarker;
	CMapSpawnGroup();
	~CMapSpawnGroup();
	void Init(ISpawnGroup *);
	const char * GetName();
	const matrix3x4a_t & GetWorldOffset();
	const char * GetEntityFilterName();
	CUtlString Describe();
	SpawnGroupHandle_t GetSpawnGroupHandle();
	SpawnGroupHandle_t GetOwnerSpawnGroup();
	WorldGroupId_t GetWorldGroupId();
	const char * GetEntityLumpName();
	const char * GetWorldName();
	const char * GetParentNameFixup();
	const char * GetLocalNameFixup();
	void GetSpawnGroupDesc(SpawnGroupDesc_t *);
	int GetCreationTick();
	int GetDestructionTick();
	bool HasWorldGeometry();
	bool DontSpawnEntities();
	bool IsActiveSpawnGroup();
	bool IsFullyLoaded();
	bool IsReadyToSpawnEntities();
	void SpawnLoadingEntities(CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > *);
	void SetLoadingSpawnGroup(ILoadingSpawnGroup *);
	void OnSpawnGroupPrecache();
	void OnSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	void ReleaseLoadingEntities();
	void AddChildSpawnGroup(SpawnGroupHandle_t);
	void SetPVS(IPVS *);
	IPVS * GetPVS();
	int GetConnectionCount();
	const SpawnGroupConnectionInfo_t * GetConnection(int);
	const SpawnGroupConnectionInfo_t * FindConnectionByLandmarkName(const char *);
	const SpawnGroupConnectionInfo_t * FindConnectionByLandmarkStringToken(const CUtlStringToken &);

	// sizeof = 48
};

// src/game/shared/spawngroupmgrgamesystem.h:146
class CSpawnGroupMgrGameSystem : public IGameSpawnGroupMgr, public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	class CCommandMemberInitializer_OnSpawnGroupActivate {
	private:

		CCommandMemberInitializer_OnSpawnGroupActivate();
		~CCommandMemberInitializer_OnSpawnGroupActivate();

		// sizeof = 152
	};

	class CCommandMemberInitializer_OnSpawnGroupLoad {
	private:

		CCommandMemberInitializer_OnSpawnGroupLoad();
		~CCommandMemberInitializer_OnSpawnGroupLoad();

		// sizeof = 152
	};

	class CCommandMemberInitializer_OnSpawnGroupUnload {
	private:

		CCommandMemberInitializer_OnSpawnGroupUnload();
		~CCommandMemberInitializer_OnSpawnGroupUnload();

		// sizeof = 152
	};

	class CCommandMemberInitializer_OnSpawnGroupSave {
	private:

		CCommandMemberInitializer_OnSpawnGroupSave();
		~CCommandMemberInitializer_OnSpawnGroupSave();

		// sizeof = 152
	};

	class CCommandMemberInitializer_OnSpawnGroupList {
	private:

		CCommandMemberInitializer_OnSpawnGroupList();
		~CCommandMemberInitializer_OnSpawnGroupList();

		// sizeof = 152
	};

	struct UnloadRequestQueueItem_t {
		SpawnGroupHandle_t m_hSpawnGroup;  // +0x0
		bool m_bSaveEntities;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	bool m_bQueueSpawnEntitiesCalls;  // +0x330

	CUtlMap<unsigned int, CMapSpawnGroup*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_SpawnGroups;  // +0x338

	typedef CAutoGameSystem BaseClass;
	CSpawnGroupMgrGameSystem(CSpawnGroupMgrGameSystem &);
	CSpawnGroupMgrGameSystem(const CSpawnGroupMgrGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CSpawnGroupMgrGameSystem *);
	CSpawnGroupMgrGameSystem();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void FrameBoundary(const EventGameFrameBoundary_t &);
	virtual void AllocateSpawnGroup(SpawnGroupHandle_t, ISpawnGroup *);
	virtual void ReleaseSpawnGroup(SpawnGroupHandle_t);
	virtual void SpawnGroupInit(SpawnGroupHandle_t, IEntityResourceManifest *, IEntityPrecacheConfiguration *, ISpawnGroupPrerequisiteRegistry *);
	virtual ILoadingSpawnGroup * CreateLoadingSpawnGroup(SpawnGroupHandle_t, bool, bool, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *);
	virtual ILoadingSpawnGroup * CreateLoadingSpawnGroupForSaveFile(SpawnGroupHandle_t, const void *, size_t);
	virtual void SpawnGroupSpawnEntities(SpawnGroupHandle_t);
	virtual void SpawnGroupShutdown(SpawnGroupHandle_t);
	virtual void SpawnGroupSaveEntities(SpawnGroupHandle_t);
	virtual void SetActiveSpawnGroup(SpawnGroupHandle_t);
	virtual void UnloadSpawnGroup(SpawnGroupHandle_t, bool);
	virtual SpawnGroupHandle_t GetParentSpawnGroup(SpawnGroupHandle_t);
	virtual int GetChildSpawnGroupCount(SpawnGroupHandle_t);
	virtual SaveRestoreDataHandle_t SaveGame_Start(const char *, const char *, const char *);
	virtual bool SaveGame_Finalize(SaveRestoreDataHandle_t);
	virtual bool StreamEntitiesToFile(SaveRestoreDataHandle_t);
	virtual const char * SaveGame_GetLastSaveFile();
	virtual bool IsGameReadyToSave();
	void AddChildSpawnGroup(SpawnGroupHandle_t, SpawnGroupHandle_t);
	void SetLoadingSpawnGroup(SpawnGroupHandle_t, ILoadingSpawnGroup *);
	const char * GetSpawnGroupName(SpawnGroupHandle_t);
	const char * GetSpawnGroupEntityFilterName(SpawnGroupHandle_t);
	const char * GetSpawnGroupEntityLumpName(SpawnGroupHandle_t);
	const char * GetSpawnGroupWorldName(SpawnGroupHandle_t);
	bool SpawnGroupHasWorldGeometry(SpawnGroupHandle_t);
	bool GetSpawnGroupDesc(SpawnGroupHandle_t, SpawnGroupDesc_t *);
	bool FlagManualCreation(SpawnGroupHandle_t);
	bool WasManualCreationFlagged(SpawnGroupHandle_t);
	bool IsReadyToSpawnEntities(SpawnGroupHandle_t);
	const matrix3x4a_t & GetSpawnGroupWorldOffset(SpawnGroupHandle_t);
	SpawnGroupHandle_t FindSpawnGroupByName(const char *);
	void GetEntitiesBySpawnGroup(SpawnGroupHandle_t, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	const char * GetSpawnGroupParentNameFixup(SpawnGroupHandle_t);
	const char * GetSpawnGroupLocalNameFixup(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetActiveSpawnGroupHandle();
	void GetSpawnGroups(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &);
	IWorldReference * GetWorldReference(SpawnGroupHandle_t);
	WorldGroupId_t GetWorldGroupId(SpawnGroupHandle_t);
	void GetLoadingSpawnGroupEntityKeys(SpawnGroupHandle_t, CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > &);
	void AddChildSpawnGroup(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetOwnerSpawnGroup(SpawnGroupHandle_t);
	void SynchronizeAndBlockUntilLoaded(SpawnGroupHandle_t);
	void ExecuteQueuedSpawnEntityCalls();
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	bool IsSpawnGroupFullyLoaded(SpawnGroupHandle_t);

private:

	CMapSpawnGroup * Get(SpawnGroupHandle_t);
	const CMapSpawnGroup * Get(SpawnGroupHandle_t);
	CMapSpawnGroup * FindByName(const char *);
	void SpawnGroupActuallySpawnEntities(SpawnGroupHandle_t);
	void SpawnGroupActuallyShutdown(SpawnGroupHandle_t, bool);
	void SpawnGroupActuallyLoadAdjacentEntities(SpawnGroupHandle_t);
	void SpawnGroupBuildStreamInfo(SpawnGroupHandle_t, SaveStreamInfo_t *);
	const char * GetMapName();
	void OnSpawnGroupActivate(const CCommandContext &, const CCommand &);
	void SpawnGroupActivate_CompletionFunc(const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void OnSpawnGroupLoad(const CCommandContext &, const CCommand &);
	void SpawnGroupLoad_CompletionFunc(const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void OnSpawnGroupUnload(const CCommandContext &, const CCommand &);
	void SpawnGroupUnload_CompletionFunc(const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void OnSpawnGroupSave(const CCommandContext &, const CCommand &);
	void SpawnGroupSave_CompletionFunc(const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void OnSpawnGroupList(const CCommandContext &, const CCommand &);
	virtual ~CSpawnGroupMgrGameSystem();

	// vtable[17] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[18] DoesGameSystemReallocate
	// vtable[19] SetGameSystemGlobalPtrs
	// vtable[20] GameInit
	// vtable[21] GameShutdown
	// vtable[22] FrameBoundary
	// vtable[0] AllocateSpawnGroup
	// vtable[1] ReleaseSpawnGroup
	// vtable[2] SpawnGroupInit
	// vtable[3] CreateLoadingSpawnGroup
	// vtable[4] CreateLoadingSpawnGroupForSaveFile
	// vtable[5] SpawnGroupSpawnEntities
	// vtable[7] SpawnGroupShutdown
	// vtable[6] SpawnGroupSaveEntities
	// vtable[8] SetActiveSpawnGroup
	// vtable[9] UnloadSpawnGroup
	// vtable[10] GetParentSpawnGroup
	// vtable[11] GetChildSpawnGroupCount
	// vtable[12] SaveGame_Start
	// vtable[13] SaveGame_Finalize
	// vtable[14] StreamEntitiesToFile
	// vtable[15] SaveGame_GetLastSaveFile
	// vtable[16] IsGameReadyToSave
	// vtable[23] PreSpawnGroupLoad
	// sizeof = 904
};
