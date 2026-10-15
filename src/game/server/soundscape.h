// Reconstructed from DWARF by pahole; not original source.

// src/game/server/soundscape.h:17
struct ss_update_t {
	float currentDistance;  // +0x1c
	int traceCount;  // +0x20
	bool bInRange;  // +0x24
	ss_update_t();

	// sizeof = 40
};

// src/game/server/soundscape.h:27
class CEnvSoundscape : public CServerOnlyEntity {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnPlay;  // +0x308
	float m_flRadius;  // +0x320

	string_t m_soundscapeName;  // +0x328
	int m_soundscapeIndex;  // +0x330
	int m_soundscapeEntityListId;  // +0x334
	bool m_bDisabled;  // +0x37c
	typedef CServerOnlyEntity BaseClass;

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
	CEnvSoundscape(CEnvSoundscape &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CEnvSoundscape();
	virtual ~CEnvSoundscape();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	void UpdateForPlayer(ss_update_t &);
	void WriteAudioParamsTo(audioparams_t &);
	bool InRangeOfPlayer(CBasePlayer *);
	virtual void DrawEntityDebugOverlays(uint64);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void InputToggleEnabled(inputdata_t &);
	string_t GetSoundscapeName();
	void RecomputeSoundscapeIndex();
	void SetEntityListId(int);
	bool IsEnabled();
	void Disable();
	void Enable();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[14] DrawEntityDebugOverlays
	// sizeof = 896
};

// src/game/server/soundscape.h:77
class CEnvSoundscapeProxy : public CEnvSoundscape {
public:

private:

	static datamap_t m_DataMap;

	string_t m_MainSoundscapeName;  // +0x380
	typedef CEnvSoundscape BaseClass;

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
	CEnvSoundscapeProxy(CEnvSoundscapeProxy &);
	CEnvSoundscapeProxy(CEnvSoundscapeProxy &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CEnvSoundscapeProxy();
	virtual void Activate(ActivateType_t);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CEnvSoundscapeProxy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[10] Activate
	// vtable[6] Precache
	// sizeof = 904
};

// src/game/server/soundscape.h:95
class CEnvSoundscapeTriggerable : public CEnvSoundscape {
public:

private:

	static datamap_t m_DataMap;
	typedef CEnvSoundscape BaseClass;

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
	CEnvSoundscapeTriggerable(CEnvSoundscapeTriggerable &);
	CEnvSoundscapeTriggerable(CEnvSoundscapeTriggerable &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CEnvSoundscapeTriggerable();
	virtual void Think();
	void DelegateStartTouch(CBaseEntity *);
	void DelegateEndTouch(CBaseEntity *);
	virtual ~CEnvSoundscapeTriggerable();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[117] Think
	// sizeof = 896
};
