// Reconstructed from DWARF by pahole; not original source.

// src/game/server/info_spawngroupstream.h:16
class CInfoSpawnGroupLandmark : public CPointEntity {
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
	CInfoSpawnGroupLandmark(CInfoSpawnGroupLandmark &);
	CInfoSpawnGroupLandmark(CInfoSpawnGroupLandmark &);
	CInfoSpawnGroupLandmark();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CInfoSpawnGroupLandmark();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// src/game/server/info_spawngroupstream.h:22
class CEntityLumpRequest : public IComputeWorldOriginCallback {
public:

private:

	bool m_bStillPending;  // +0x8
	bool m_bLandmarkLocated;  // +0x9

	SpawnGroupHandle_t m_hSpawnGroup;  // +0xc
	CEntityLumpRequest(CEntityLumpRequest &);
	CEntityLumpRequest(const CEntityLumpRequest &);
	~CEntityLumpRequest();
	CEntityLumpRequest();
	virtual matrix3x4a_t ComputeWorldOrigin(const char *, SpawnGroupHandle_t, IWorld *);
	const char * GetLevelName();
	bool Start(const char *, const char *, float, const char *, SpawnGroupHandle_t);
	const Vector & GetLandmarkOffset();
	void ProcessSpawnGroupLandmarks(CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > &);
	bool IsPending();
	bool IsResidentOrStreaming(SpawnGroupHandle_t);
	SpawnGroupHandle_t GetSpawnGroup();

	// vtable[0] ComputeWorldOrigin
	// sizeof = 56
};

// src/game/server/info_spawngroupstream.h:60
class CInfoSpawnGroupLoadUnload : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnSpawnGroupLoadStarted;  // +0x308
	COutputEvent m_OnSpawnGroupLoadFinished;  // +0x320
	COutputEvent m_OnSpawnGroupUnloadStarted;  // +0x338
	COutputEvent m_OnSpawnGroupUnloadFinished;  // +0x350
	string_t m_iszSpawnGroupName;  // +0x368
	string_t m_iszSpawnGroupFilterName;  // +0x370
	string_t m_iszLandmarkName;  // +0x378
	float m_flTimeoutInterval;  // +0x388
	bool m_bStreamingStarted;  // +0x38c
	bool m_bUnloadingStarted;  // +0x38d

	typedef CLogicalEntity BaseClass;

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
	CInfoSpawnGroupLoadUnload(CInfoSpawnGroupLoadUnload &);
	CInfoSpawnGroupLoadUnload(CInfoSpawnGroupLoadUnload &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CInfoSpawnGroupLoadUnload();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	const char * GetSpawnGroupName();
	const char * GetLandmarkName();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void SpawnGroupLoadingThink();
	void SpawnGroupUnloadingThink();
	virtual void InputStartSpawnGroupLoad(inputdata_t &);
	virtual void InputStartSpawnGroupUnload(inputdata_t &);
	virtual void InputActivateSpawnGroup(inputdata_t &);
	virtual void InputSetSpawnGroup(inputdata_t &);
	virtual ~CInfoSpawnGroupLoadUnload();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[34] GetDataDescMap
	// vtable[207] InputStartSpawnGroupLoad
	// vtable[208] InputStartSpawnGroupUnload
	// vtable[209] InputActivateSpawnGroup
	// vtable[210] InputSetSpawnGroup
	// sizeof = 968
};

// src/game/server/info_spawngroupstream.h:107
class CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load : public CInfoSpawnGroupLoadUnload {
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
	CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load(CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load &);
	CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load(CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load &);
	CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 968
};

// src/game/server/info_spawngroupstream.h:108
class CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload : public CInfoSpawnGroupLoadUnload {
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
	CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload(CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload &);
	CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload(CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload &);
	CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 968
};
