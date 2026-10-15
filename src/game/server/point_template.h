// Reconstructed from DWARF by pahole; not original source.

// src/game/server/point_template.h:47
class CPointTemplate : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iszWorldName;  // +0x308
	string_t m_iszSource2EntityLumpName;  // +0x310
	string_t m_iszEntityFilterName;  // +0x318
	float m_flTimeoutInterval;  // +0x320
	bool m_bAsynchronouslySpawnEntities;  // +0x324

	COutputEvent m_pOutputOnSpawned;  // +0x328
	HSCRIPT m_ScriptSpawnCallback;  // +0x378
	HSCRIPT m_ScriptCallbackScope;  // +0x380
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
	CPointTemplate(CPointTemplate &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CPointTemplate();
	virtual ~CPointTemplate();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	bool CreateInstance(const Vector &, const QAngle &, CBaseEntity *, SpawnGroupCompletionDelegate_t);
	HSCRIPT ScriptGetSpawnedEntities();
	void ScriptSetSpawnCallback(HSCRIPT, HSCRIPT);
	void ScriptForceSpawn();
	void ScriptDeleteCreatedSpawnGroups();
	const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > * GetEntityLumpForTemplate(bool);
	const char * GetEntityLumpName();
	void ResetCreationCallbackCounts();
	void CreationComplete(SpawnGroupHandle_t, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	void ListenForSpawnGroupToFinish(SpawnGroupHandle_t);
	void AddCreatedSpawnGroupHandle(SpawnGroupHandle_t);
	string_t GetWorldName();
	string_t GetSource2EntityLumpName();
	string_t GetEntityFilterName();
	virtual PointTemplateOwnerSpawnGroupType_t GetDesiredSpawnGroupType();
	bool GetAsynchronouslySpawnEntities();
	PointTemplateClientOnlyEntityBehavior_t GetClientOnlyEntityBehavior();

protected:

	virtual bool ForcePrecacheSpawnGroupLump();

private:

	void InputForceSpawn(inputdata_t &);
	void InputDeleteCreatedSpawnGroups(inputdata_t &);
	void ForceSpawn();
	void DeleteCreatedSpawnGroups();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// vtable[207] GetDesiredSpawnGroupType
	// vtable[208] ForcePrecacheSpawnGroupLump
	// vtable[4] GetScriptDesc
	// sizeof = 904
};
