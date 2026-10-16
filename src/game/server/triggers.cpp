// Reconstructed from DWARF by pahole; not original source.

// src/game/server/triggers.cpp:135
class C_CBaseTrigger_MapInstall {
	C_CBaseTrigger_MapInstall();

	// sizeof = 1
};

// src/game/server/triggers.cpp:660
class CTriggerRemove : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnRemove;  // +0x5c8
	typedef CBaseTrigger BaseClass;

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
	CTriggerRemove(CTriggerRemove &);
	CTriggerRemove(CTriggerRemove &);
	CTriggerRemove();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Touch(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerRemove();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[112] Touch
	// vtable[34] GetDataDescMap
	// sizeof = 1504
};

// src/game/server/triggers.cpp:749
class CScriptTriggerHurt : public CTriggerHurt {
public:

private:

	static datamap_t m_DataMap;

	typedef CTriggerHurt BaseClass;

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
	CScriptTriggerHurt(CScriptTriggerHurt &);
	CScriptTriggerHurt(CScriptTriggerHurt &);
	CScriptTriggerHurt();
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
	virtual ~CScriptTriggerHurt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 1616
};

// src/game/server/triggers.cpp:1280
class CScriptTriggerMultiple : public CTriggerMultiple {
public:

private:

	static datamap_t m_DataMap;

	typedef CTriggerMultiple BaseClass;

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
	CScriptTriggerMultiple(CScriptTriggerMultiple &);
	CScriptTriggerMultiple(CScriptTriggerMultiple &);
	CScriptTriggerMultiple();
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
	virtual ~CScriptTriggerMultiple();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 1520
};

// src/game/server/triggers.cpp:1695
class CTriggerOnce : public CTriggerMultiple {
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
	typedef CTriggerMultiple BaseClass;
	CTriggerOnce(CTriggerOnce &);
	CTriggerOnce(CTriggerOnce &);
	CTriggerOnce();
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
	virtual ~CTriggerOnce();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 1504
};

// src/game/server/triggers.cpp:1717
class CScriptTriggerOnce : public CTriggerOnce {
public:

private:

	static datamap_t m_DataMap;

	typedef CTriggerOnce BaseClass;

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
	CScriptTriggerOnce(CScriptTriggerOnce &);
	CScriptTriggerOnce(CScriptTriggerOnce &);
	CScriptTriggerOnce();
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
	virtual ~CScriptTriggerOnce();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 1520
};

// src/game/server/triggers.cpp:1745
class CTriggerLook : public CTriggerOnce {
public:

private:

protected:

	EHANDLE m_hLookTarget;  // +0x5e0
	float m_flFieldOfView;  // +0x5e4
	float m_flLookTime;  // +0x5e8
	float m_flLookTimeTotal;  // +0x5ec
	float m_flLookTimeLast;  // +0x5f0
	float m_flTimeoutDuration;  // +0x5f4
	bool m_bTimeoutFired;  // +0x5f8
	bool m_bIsLooking;  // +0x5f9
	bool m_b2DFOV;  // +0x5fa

	EHANDLE m_hActivator;  // +0x5fc
	bool m_bTestOcclusion;  // +0x600

	static datamap_t m_DataMap;

private:

	COutputEvent m_OnTimeout;  // +0x608
	COutputEvent m_OnStartLook;  // +0x620
	COutputEvent m_OnEndLook;  // +0x638
	typedef CTriggerOnce BaseClass;

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
	CTriggerLook(CTriggerLook &);
	CTriggerLook(CTriggerLook &);
	CTriggerLook();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Touch(CBaseEntity *);
	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	virtual int DrawDebugTextOverlays(uint64, int);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

private:

	void Trigger(CBaseEntity *, bool);
	void TimeoutThink();
	virtual ~CTriggerLook();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[112] Touch
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 1616
};

// src/game/server/triggers.cpp:2050
class CTriggerVolume : public CBaseModelEntity {
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
	CTriggerVolume(CTriggerVolume &);
	CTriggerVolume(CTriggerVolume &);
	CTriggerVolume();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual int ObjectCaps();
	virtual ~CTriggerVolume();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[19] ObjectCaps
	// sizeof = 1152
};

// src/game/server/triggers.cpp:2097
class CChangeLevel : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnChangeLevel;  // +0x5d8
	typedef CBaseTrigger BaseClass;

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
	CChangeLevel(CChangeLevel &);
	CChangeLevel(CChangeLevel &);
	CChangeLevel();
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
	virtual void Activate(ActivateType_t);
	int ChangeList(CSaveRestoreData *, levellist_t *, int);
	void TouchChangeLevel(CBaseEntity *);
	void ChangeLevelNow(CBaseEntity *);
	bool IsEntityInTransition(CBaseEntity *);
	void NotifyEntitiesOutOfTransition();
	void WarnAboutActiveLead();
	CBaseEntity * FindLandmark(const char *);
	int AddTransitionToList(levellist_t *, int, const char *, const char *, CEntityInstance *);
	int InTransitionVolume(CBaseEntity *, const char *);
	int BuildChangeLevelList(levellist_t *, int);
	void BuildEntityTransitionList(CBaseEntity *, const char *, CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMe);
	void MaybeAddEntityToTransitionList(CBaseEntity *, int, CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMe);
	void AddDependentEntities(CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMe);
	int ComputeEntitySaveFlags(CBaseEntity *);
	virtual ~CChangeLevel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// sizeof = 1520
};

// src/game/server/triggers.cpp:3009
class CTriggerPush : public CBaseTrigger {
public:

private:

	bool m_bPushDirIsLocal;  // +0x5d0

	static datamap_t m_DataMap;

	bool m_bTriggerOnStartTouch;  // +0x5d1

	float m_flAlternateTicksFix;  // +0x5d4
	float m_flPushSpeed;  // +0x5d8
	typedef CBaseTrigger BaseClass;

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
	CTriggerPush(CTriggerPush &);
	CTriggerPush(CTriggerPush &);
	CTriggerPush();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void StartTouch(CBaseEntity *);
	virtual void Touch(CBaseEntity *);
	void Untouch(CBaseEntity *);
	virtual void DrawEntityDebugOverlays(uint64);
	bool IsPushable(CBaseEntity *);
	void InputSetPushDirection(inputdata_t &);
	void InputSetPushSpeed(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerPush();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[111] StartTouch
	// vtable[112] Touch
	// vtable[14] DrawEntityDebugOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 1504
};

// src/game/server/triggers.cpp:3057
class CScriptTriggerPush : public CTriggerPush {
public:

private:

	static datamap_t m_DataMap;

	typedef CTriggerPush BaseClass;

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
	CScriptTriggerPush(CScriptTriggerPush &);
	CScriptTriggerPush(CScriptTriggerPush &);
	CScriptTriggerPush();
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
	virtual ~CScriptTriggerPush();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 1512
};

// src/game/server/triggers.cpp:3304
class CTriggerTeleport : public CBaseTrigger {
public:

private:

protected:

	string_t m_iLandmark;  // +0x5c8

	static datamap_t m_DataMap;
	typedef CBaseTrigger BaseClass;

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
	CTriggerTeleport(CTriggerTeleport &);
	CTriggerTeleport(CTriggerTeleport &);
	CTriggerTeleport();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Touch(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerTeleport();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[112] Touch
	// vtable[34] GetDataDescMap
	// sizeof = 1488
};

// src/game/server/triggers.cpp:3403
class CInfoTeleportDestination : public CPointEntity {
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
	CInfoTeleportDestination(CInfoTeleportDestination &);
	CInfoTeleportDestination(CInfoTeleportDestination &);
	CInfoTeleportDestination();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CInfoTeleportDestination();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// src/game/server/triggers.cpp:3409
class CTriggerToggleSave : public CBaseTrigger {
public:

private:

protected:

	bool m_bDisabled;  // +0x5c1

	static datamap_t m_DataMap;
	typedef CBaseTrigger BaseClass;

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
	CTriggerToggleSave(CTriggerToggleSave &);
	CTriggerToggleSave(CTriggerToggleSave &);
	CTriggerToggleSave();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Touch(CBaseEntity *);
	virtual void InputEnable(inputdata_t &);
	virtual void InputDisable(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerToggleSave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[112] Touch
	// vtable[216] InputEnable
	// vtable[217] InputDisable
	// vtable[34] GetDataDescMap
	// sizeof = 1480
};

// src/game/server/triggers.cpp:3481
class CTriggerSave : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;

	bool m_bForceNewLevelUnit;  // +0x5c1

	float m_fDangerousTimer;  // +0x5c4
	int m_minHitPoints;  // +0x5c8
	typedef CBaseTrigger BaseClass;

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
	CTriggerSave(CTriggerSave &);
	CTriggerSave(CTriggerSave &);
	CTriggerSave();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Touch(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerSave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[112] Touch
	// vtable[34] GetDataDescMap
	// sizeof = 1488
};

// src/game/server/triggers.cpp:3571
class CTriggerGravity : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;
	typedef CBaseTrigger BaseClass;

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
	CTriggerGravity(CTriggerGravity &);
	CTriggerGravity(CTriggerGravity &);
	CTriggerGravity();
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
	void GravityTouch(CBaseEntity *);
	virtual ~CTriggerGravity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 1480
};

// src/game/server/triggers.cpp:3607
class CAI_ChangeTarget : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iszNewTarget;  // +0x308
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
	CAI_ChangeTarget(CAI_ChangeTarget &);
	CAI_ChangeTarget(CAI_ChangeTarget &);
	CAI_ChangeTarget();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void InputActivate(inputdata_t &);
	virtual int ObjectCaps();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CAI_ChangeTarget();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[19] ObjectCaps
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// src/game/server/triggers.cpp:3654
class CAI_ChangeHintGroup : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_iSearchType;  // +0x308

	string_t m_strSearchName;  // +0x310
	string_t m_strNewHintGroup;  // +0x318
	float m_flRadius;  // +0x320
	bool m_bHintGroupNavLimiting;  // +0x324
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
	CAI_ChangeHintGroup(CAI_ChangeHintGroup &);
	CAI_ChangeHintGroup(CAI_ChangeHintGroup &);
	CAI_ChangeHintGroup();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual int ObjectCaps();
	void InputActivate(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CAI_BaseNPC * FindQualifiedNPC(CAI_BaseNPC *, CBaseEntity *, CBaseEntity *);
	virtual ~CAI_ChangeHintGroup();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[19] ObjectCaps
	// vtable[34] GetDataDescMap
	// sizeof = 808
};

// src/game/server/triggers.cpp:3806
class C_CTriggerCamera_MapInstall {
	C_CTriggerCamera_MapInstall();

	// sizeof = 1
};

// src/game/server/triggers.cpp:4317
class CTriggerProximity : public CBaseTrigger {
public:

private:

protected:

	EHANDLE m_hMeasureTarget;  // +0x5c4
	string_t m_iszMeasureTarget;  // +0x5c8
	float m_fRadius;  // +0x5d0
	int m_nTouchers;  // +0x5d4
	COutputFloat m_NearestEntityDistance;  // +0x5d8

	static datamap_t m_DataMap;
	typedef CBaseTrigger BaseClass;

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
	CTriggerProximity(CTriggerProximity &);
	CTriggerProximity(CTriggerProximity &);
	CTriggerProximity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	void MeasureThink();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerProximity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// vtable[34] GetDataDescMap
	// sizeof = 1528
};

// src/game/server/triggers.cpp:4363
class CLogicProximity : public CPointEntity {
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
	CLogicProximity(CLogicProximity &);
	CLogicProximity(CLogicProximity &);
	CLogicProximity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CLogicProximity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// src/game/server/triggers.cpp:4505
class CTriggerImpact : public CTriggerMultiple {
public:

private:

	static datamap_t m_DataMap;

	float m_flMagnitude;  // +0x5e0
	float m_flNoise;  // +0x5e4
	float m_flViewkick;  // +0x5e8

	COutputVector m_pOutputForce;  // +0x5f0
	typedef CTriggerMultiple BaseClass;

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
	CTriggerImpact(CTriggerImpact &);
	CTriggerImpact(CTriggerImpact &);
	CTriggerImpact();
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
	virtual void StartTouch(CBaseEntity *);
	void InputSetMagnitude(inputdata_t &);
	void InputImpact(inputdata_t &);
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual ~CTriggerImpact();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[111] StartTouch
	// vtable[79] DrawDebugTextOverlays
	// sizeof = 1560
};

// src/game/server/triggers.cpp:4638
class CTriggerPlayerMovement : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;
	typedef CBaseTrigger BaseClass;

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
	CTriggerPlayerMovement(CTriggerPlayerMovement &);
	CTriggerPlayerMovement(CTriggerPlayerMovement &);
	CTriggerPlayerMovement();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerPlayerMovement();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// vtable[34] GetDataDescMap
	// sizeof = 1480
};

// src/game/server/triggers.cpp:4651
class C_CTriggerPlayerMovement_MapInstall {
	C_CTriggerPlayerMovement_MapInstall();

	// sizeof = 1
};

// src/game/server/triggers.cpp:4751
class CServerRagdollTrigger : public CBaseTrigger {
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
	CServerRagdollTrigger(CServerRagdollTrigger &);
	CServerRagdollTrigger(CServerRagdollTrigger &);
	CServerRagdollTrigger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CServerRagdollTrigger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// vtable[8] Spawn
	// sizeof = 1480
};

// src/game/server/triggers.cpp:5031
class CTriggerActiveWeaponDetect : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnTouchedActiveWeapon;  // +0x5c8
	string_t m_iszWeaponClassName;  // +0x5e0
	typedef CBaseTrigger BaseClass;

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
	CTriggerActiveWeaponDetect(CTriggerActiveWeaponDetect &);
	CTriggerActiveWeaponDetect(CTriggerActiveWeaponDetect &);
	CTriggerActiveWeaponDetect();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual bool PassesTriggerFilters(CBaseEntity *);
	virtual void StartTouch(CBaseEntity *);
	void ActiveWeaponThink();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerActiveWeaponDetect();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[223] PassesTriggerFilters
	// vtable[111] StartTouch
	// vtable[34] GetDataDescMap
	// sizeof = 1512
};

// src/game/server/triggers.cpp:5278
class CPostProcessingVolume : public CBaseTrigger {
	class NetworkVar_m_hPostSettings {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFadeTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bMaster {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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
	CPostProcessingVolume(CPostProcessingVolume &);
	CPostProcessingVolume(CPostProcessingVolume &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CPostProcessingVolume();

protected:

	virtual int UpdateTransmitState();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool PassesTriggerFilters(CBaseEntity *);
	virtual ~CPostProcessingVolume();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[64] UpdateTransmitState
	// vtable[8] Spawn
	// vtable[223] PassesTriggerFilters
	// sizeof = 1496
};

// src/game/server/triggers.cpp:5305
class C_CPostProcessingVolume_MapInstall {
	C_CPostProcessingVolume_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// FixUpHMDPlayer  (line 82, @0x00000000023cf790, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHMDAvatar, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// callers: CBaseTrigger::PassesTriggerFilters, CTriggerLook::Touch, CTriggerLook::EndTouch, CTriggerHurt::HurtEntity, CTriggerLook::StartTouch
CBaseEntity *__fastcall FixUpHMDPlayer(CBaseEntity *pOther)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // edx
  CBaseEntity *result; // rax
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  char v8; // dl
  unsigned __int16 v9; // dx
  int v10; // esi
  int v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx

  if ( (*(pOther->_vptr_IHandleEntity + 142))(pOther) != 0 )
  {
    if ( pOther->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v2 = 0x7FFF;
      v3 = 0x7FFF;
    }
    else
    {
      v2 = pOther->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v3 = v2;
    }
    v4 = (pOther->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
    result = 0;
    if ( v4 + 2 > 1 )
    {
      v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
      if ( v6 != 0 )
      {
        v7 = &v6[v3 & 0x1FF];
        if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
          return v7->m_pInstance;
      }
    }
  }
  else
  {
    v8 = (*(pOther->_vptr_IHandleEntity + 140))(pOther);
    result = pOther;
    if ( v8 != 0 )
    {
      if ( HIDWORD(pOther[4].m_hPrivateScope.m_hScope) == -1 )
      {
        v9 = 0x7FFF;
        v10 = 0x7FFF;
      }
      else
      {
        v9 = WORD2(pOther[4].m_hPrivateScope.m_hScope) & 0x7FFF;
        v10 = v9;
      }
      v11 = (HIDWORD(pOther[4].m_hPrivateScope.m_hScope) >> 15 << 15) | v9 & 0x7FFF;
      if ( (v11 + 2) <= 1 )
        return pOther;
      v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
      if ( v12 == 0 )
        return pOther;
      v13 = &v12[v10 & 0x1FF];
      if ( v13 == 0 )
        return pOther;
      if ( v11 != v13->m_EHandle.m_Index )
        return pOther;
      result = 0;
      if ( v13->m_pInstance == 0 )
        return pOther;
    }
  }
  return result;
}


// CBaseTrigger::GetDataDescMap  (line 106, @0x00000000023bb210, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__fastcall CBaseTrigger::GetDataDescMap(CBaseTrigger *const this)
{
  return &CBaseTrigger::m_DataMap;
}


// CBaseTrigger::AddDatadescMetadataKeys  (line 106, @0x00000000023cfae0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseTrigger::GetEntityClass(void)
void __fastcall CBaseTrigger::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseTrigger::GetEntityClass);
}


// CBaseTrigger::GetBaseMap  (line 106, @0x00000000023cfb00, libserver.so)
// globals: CBaseToggle::m_DataMap
datamap_t *__cdecl CBaseTrigger::GetBaseMap()
{
  return &CBaseToggle::m_DataMap;
}


// DataMapInit<CBaseTrigger>  (line 106, @0x00000000023cfb10, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CBaseTrigger"
// globals: `guard variable for'DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder, `guard variable for'DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc, CBaseToggle::m_DataMap, CBaseTrigger::GetEntityClass(void), CBaseTrigger::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<, DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder (10 total)
datamap_t *__fastcall DataMapInit<CBaseTrigger>(CBaseTrigger *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder.m_pszBase = "CBaseTrigger";
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseTrigger>(CBaseTrigger *)::nameHolder,
      &_dso_handle);
  }
  CBaseTrigger::m_DataMap.baseMap = &CBaseToggle::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
    }
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc[4].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc[12].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc[13].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc[14].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc[15].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc[16].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc);
  }
  CBaseTrigger::m_DataMap.dataNumFields = 17;
  CBaseTrigger::m_DataMap.dataDesc = &DataMapInit<CBaseTrigger>(CBaseTrigger *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseTrigger::m_DataMap, CBaseTrigger::GetEntityClass);
  return &CBaseTrigger::m_DataMap;
}


// CBaseTrigger::YouForgotToImplementOrDeclareServerClass  (line 135, @0x00000000023bb220, libserver.so)
int __fastcall CBaseTrigger::YouForgotToImplementOrDeclareServerClass(CBaseTrigger *const this)
{
  return 0;
}


// CBaseTrigger::GetServerClass  (line 135, @0x00000000023c2e40, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseTrigger::GetServerClass(CBaseTrigger *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CBaseTrigger::CBaseTrigger  (line 138, @0x00000000023cfca0, libserver.so)  // inlines: AddEFlags, CBaseToggle, CEntityHandle, CEntityIOOutput, CHandle, CNetworkVarBase, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, EnsureValidValue<bool>
// calls: CBaseModelEntity::CBaseModelEntity
// callers: CBaseTrigger::CEntityInstanceEntityClass::ConstructInstance, CTonemapTrigger::CEntityInstanceEntityClass::ConstructInstance, CFogTrigger::CEntityInstanceEntityClass::ConstructInstance, CTriggerCallback::CEntityInstanceEntityClass::ConstructInstance, CTriggerSndSosOpvar::CEntityInstanceEntityClass::ConstructInstance, CTriggerHurt::CEntityInstanceEntityClass::ConstructInstance, CTriggerHurtGhost::CEntityInstanceEntityClass::ConstructInstance, CColorCorrectionVolume::CColorCorrectionVolume, CTriggerSoundscape::CTriggerSoundscape, CTriggerRemove::CEntityInstanceEntityClass::ConstructInstance, CScriptTriggerMultiple::CEntityInstanceEntityClass::ConstructInstance, CTriggerOnce::CEntityInstanceEntityClass::ConstructInstance (33 total)
void __fastcall CBaseTrigger::CBaseTrigger(CBaseTrigger *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->m_hActivator.m_Index = -1;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  this->m_sMaster.u.m_Id = 0;
  this->m_bAlwaysFireBlockedOutputs = 0;
  this->m_iFilterName.u.m_Id = 0;
  this->m_hFilter.m_Index = -1;
  this->m_OnStartTouch._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnStartTouchAll._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnEndTouch._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnEndTouchAll._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTouching._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnNotTouching._vptr_CEntityIOOutput = off_3F7C190;
  this->m_hTouchingEntities.m_Size = 0;
  this->m_hTouchingEntities.m_Memory.m_pMemory = 0;
  this->m_hTouchingEntities.m_Memory.m_nAllocationCount = 0;
  this->m_hTouchingEntities.m_Memory.m_nGrowSize = 0;
  this->m_bClientSidePredicted.m_Value = 0;
  this->m_iEFlags |= 0x40000u;
}


// CBaseTrigger::UpdateTransmitState  (line 145, @0x00000000023bd6a0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CBaseTrigger::UpdateTransmitState(CBaseTrigger *const this)
{
  if ( (this->m_fEffects.m_Value & 0x20) != 0 )
    return CBaseEntity::SetTransmitState(this, 8);
  else
    return CBaseEntity::SetTransmitState(this, 4);
}


// CBaseTrigger::InputEnable  (line 153, @0x00000000023bb230, libserver.so)
void __fastcall CBaseTrigger::InputEnable(CBaseTrigger *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 214))(this, inputdata);
}


// CBaseTrigger::InputDisable  (line 162, @0x00000000023bb250, libserver.so)
void __fastcall CBaseTrigger::InputDisable(CBaseTrigger *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 215))(this, inputdata);
}


// CBaseTrigger::InputTouchTest  (line 167, @0x00000000023d92d0, libserver.so)
// calls: CBaseTrigger::TouchTest
void __fastcall CBaseTrigger::InputTouchTest(CBaseTrigger *const this, inputdata_t *const inputdata)
{
  CBaseTrigger::TouchTest(this);
}


// CBaseTrigger::ScriptEnable  (line 176, @0x00000000023cfd60, libserver.so)
void __fastcall CBaseTrigger::ScriptEnable(CBaseTrigger *const this)
{
  (*(this->_vptr_IHandleEntity + 214))(this);
}


// CBaseTrigger::ScriptDisable  (line 185, @0x00000000023cfd80, libserver.so)
void __fastcall CBaseTrigger::ScriptDisable(CBaseTrigger *const this)
{
  (*(this->_vptr_IHandleEntity + 215))(this);
}


// CBaseTrigger::Spawn  (line 193, @0x00000000023c0540, libserver.so)  // inlines: AddSpawnFlags, HasSpawnFlags, NetworkStateChanged, Set, operator|=<int>
// calls: CCollisionProperty::EnableInteractsExcludeMask, CBaseEntity::Spawn
// callers: CTonemapTrigger::Spawn, CFogTrigger::Spawn, CColorCorrectionVolume::Spawn, CTriggerSoundscape::Spawn, CTriggerCallback::Spawn, CTriggerRemove::Spawn, CTriggerHurt::Spawn, CTriggerSndSosOpvar::Spawn, CTriggerMultiple::Spawn, CTriggerPush::Spawn, CTriggerTeleport::Spawn, CTriggerToggleSave::Spawn (23 total)
void __fastcall CBaseTrigger::Spawn(CBaseTrigger *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned int m_Value; // eax
  unsigned int v5; // r12d
  unsigned int v6; // r12d
  unsigned int v7; // r12d

  CCollisionProperty::EnableInteractsExcludeMask(&this->m_Collision, 0x10000030u);
  CBaseEntity::Spawn(this, pKeyValues);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x810) != 0 )
  {
    v5 = m_Value | 2;
    if ( m_Value != (m_Value | 2) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v5;
      m_Value = v5;
    }
  }
  if ( (m_Value & 0x20) != 0 )
  {
    v7 = m_Value | 1;
    if ( m_Value != (m_Value | 1) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v7;
      m_Value = v7;
    }
  }
  if ( (m_Value & 0x200) != 0 )
  {
    v6 = m_Value | 1;
    if ( m_Value != (m_Value | 1) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v6;
    }
  }
}


// CBaseTrigger::Enable  (line 226, @0x00000000023bb7b0, libserver.so)
// calls: CBaseEntity::PhysicsTouchTriggers
void __fastcall CBaseTrigger::Enable(CBaseTrigger *const this)
{
  this->m_bDisabled = 0;
  if ( (*(this->m_Collision._vptr_ICollideable + 15))() != 0 )
    CBaseEntity::PhysicsTouchTriggers(this, 0);
}


// CBaseTrigger::Activate  (line 239, @0x00000000023bbce0, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator!=, operator=
// calls: CBaseModelEntity::Activate, CGameEntitySystem::FindEntityByName, __dynamic_cast
// callers: CTriggerSoundscape::Activate, CTriggerPush::Activate, CTriggerProximity::Activate, CChangeLevel::Activate
void __fastcall CBaseTrigger::Activate(CBaseTrigger *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  if ( this->m_iFilterName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iFilterName.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0
      && (v5 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseFilter, 0)) != 0
      && (v6 = v5[1]) != 0 )
    {
      v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
      v8 = 0x7FFF;
      if ( *(v6 + 16) != -1 )
        v8 = *(v6 + 16) & 0x7FFF;
      LOWORD(this->m_hFilter.m_Index) = v8 | this->m_hFilter.m_Index & 0x8000;
      this->m_hFilter.m_Index = (v7 << 15) | this->m_hFilter.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hFilter.m_Index = -1;
    }
  }
  CBaseModelEntity::Activate(this, activateType);
}


// CBaseTrigger::PostClientActive  (line 254, @0x00000000023bb770, libserver.so)
// calls: CBaseEntity::PostClientActive, CBaseEntity::PhysicsTouchTriggers
void __fastcall CBaseTrigger::PostClientActive(CBaseTrigger *const this)
{
  CBaseEntity::PostClientActive(this);
  if ( !this->m_bDisabled )
    CBaseEntity::PhysicsTouchTriggers(this, 0);
}


// CBaseTrigger::Disable  (line 267, @0x00000000023bb7f0, libserver.so)
// calls: CBaseEntity::PhysicsTouchTriggers
void __fastcall CBaseTrigger::Disable(CBaseTrigger *const this)
{
  this->m_bDisabled = 1;
  if ( (*(this->m_Collision._vptr_ICollideable + 16))() != 0 )
    CBaseEntity::PhysicsTouchTriggers(this, 0);
}


// CBaseTrigger::TouchTest  (line 279, @0x00000000023d91f0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBaseTrigger::InputTouchTest
void __fastcall CBaseTrigger::TouchTest(CBaseTrigger *const this)
{
  int m_Size; // r11d
  CVariant v2[2]; // [rsp-28h] [rbp-28h] BYREF

  if ( !this->m_bDisabled )
  {
    m_Size = this->m_hTouchingEntities.m_Size;
    v2[0].m_type = 0;
    v2[0].m_flags = 0;
    v2[0].m_uint64 = 0;
    if ( m_Size == 0 )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_OnNotTouching, this, this, v2, 0.0);
      if ( (v2[0].m_flags & 1) == 0 )
        return;
      goto LABEL_4;
    }
    CEntityIOOutput::FireOutputInternal(&this->m_OnTouching, this, this, v2, 0.0);
    if ( (v2[0].m_flags & 1) != 0 )
LABEL_4:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2[0].m_uint64);
  }
}


// CBaseTrigger::DrawDebugTextOverlays  (line 300, @0x00000000023bc680, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: CBaseEntity::DrawDebugTextOverlays, _V_strncpy, CBaseEntity::EntityText, CBaseEntity::VPhysicsGetAggregate, __stack_chk_fail
// callers: CTriggerLook::DrawDebugTextOverlays, CTriggerImpact::DrawDebugTextOverlays
// strings: "State: Disabled", "State: Enabled"
int __fastcall CBaseTrigger::DrawDebugTextOverlays(
        CBaseTrigger *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v5; // bl
  int v6; // r13d
  int v8; // esi
  IPhysAggregateInstance *Aggregate; // rax
  AABB_t bbox; // [rsp+20h] [rbp-150h] BYREF
  char tempstr[264]; // [rsp+40h] [rbp-130h] BYREF
  unsigned __int64 v12; // [rsp+148h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v12 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    if ( (*(this->m_Collision._vptr_ICollideable + 14))(&this->m_Collision) != 0 )
      _V_strncpy(tempstr, "State: Enabled", 255);
    else
      _V_strncpy(tempstr, "State: Disabled", 255);
    v8 = v6++;
    CBaseEntity::EntityText(this, v8, tempstr, 0.0, 255, 255, 255, 255);
    Aggregate = CBaseEntity::VPhysicsGetAggregate(this);
    (*(Aggregate->_vptr_IPhysAggregateInstance + 43))(Aggregate, &bbox);
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 46))(
      debugoverlay,
      &vec3_origin,
      &bbox,
      &bbox.m_vMaxBounds,
      &vec3_angle,
      255,
      0.0102300001308322,
      0,
      0,
      10);
  }
  return v6;
}


// CBaseTrigger::InitTrigger  (line 332, @0x00000000023d60c0, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CWeakHandle, Compare, DisableInteractsWith, EnableInteractsAs, EnableInteractsWith, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetBool, GetForModify, GetInt, Init, NetworkStateChanged, Purge, Release, Set, VPhysicsCollisionAttribute_t, operator=, ~CCollisionAttributeWriter
// calls: CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::GetModel, CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::AddEffects, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, VPhysicsCollisionAttribute_t::Compare, _Unwind_Resume
// callers: CTonemapTrigger::Spawn, CFogTrigger::Spawn, CTriggerSoundscape::Spawn, CTriggerRemove::Spawn, CTriggerHurt::Spawn, CTriggerSndSosOpvar::Spawn, CTriggerMultiple::Spawn, CTriggerPush::Spawn, CTriggerTeleport::Spawn, CTriggerToggleSave::Spawn, CTriggerSave::Spawn, CTriggerGravity::Spawn (21 total)
void __fastcall CBaseTrigger::InitTrigger(CBaseTrigger *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  unsigned __int64 m_Value; // rax
  unsigned __int64 v5; // rax
  CCollisionProperty *m_pCollisionProp; // rax
  unsigned int v7; // edx
  int (**vptr_ICollideable)(...); // rax
  int (**vptr_IAppSystem)(...); // rax
  IPhysAggregateInstance *v10; // rax
  __int64 v11; // rax
  CCollisionProperty *v12; // rbx
  HModel hModel; // [rsp+0h] [rbp-70h] BYREF
  const ResourceBindingBase_t *m_pBinding; // [rsp+10h] [rbp-60h] BYREF
  CCollisionAttributeWriter<RnCollisionAttr_t> writer; // [rsp+20h] [rbp-50h] BYREF

  p_m_Collision = &this->m_Collision;
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
  writer.m_pCollisionProp = p_m_Collision;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  if ( m_Value != 0 )
    writer.m_OriginalState.m_nInteractsAs.m_Value = m_Value;
  v5 = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
  if ( v5 != 0 )
  {
    writer.m_OriginalState.m_nInteractsWith.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
    v5 = writer.m_OriginalState.m_nInteractsExclude.m_Value;
  }
  if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != v5 )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nInteractsExclude.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
  }
  if ( writer.m_OriginalState.m_nEntityId.m_Value != this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nEntityId.m_Value = this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value;
  }
  if ( writer.m_OriginalState.m_nHierarchyId.m_Value != this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nHierarchyId.m_Value = this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionGroup.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionGroup.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionFunctionMask.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      39,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionFunctionMask.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  }
  m_pCollisionProp = writer.m_pCollisionProp;
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value |= 4u;
  v7 = this->m_spawnflags.m_Value;
  if ( (v7 & 0x400) != 0 )
  {
    m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= 0x100000u;
    v7 = this->m_spawnflags.m_Value;
  }
  if ( phys_optimize.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( (v7 & 0x40) != 0 )
      m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= 0x20000u;
    else
      m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value &= ~0x20000uLL;
    v7 = this->m_spawnflags.m_Value;
    if ( (v7 & 8) != 0 )
    {
      m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= 0x200000u;
      v7 = this->m_spawnflags.m_Value;
    }
  }
  else if ( (v7 & 0x48) != 0 )
  {
    m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= 0x20000u;
    v7 = this->m_spawnflags.m_Value;
  }
  if ( (v7 & 1) != 0 )
  {
    m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= 0x40000u;
    v7 = this->m_spawnflags.m_Value;
  }
  if ( (v7 & 2) != 0 )
    m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= 0x80000u;
  vptr_ICollideable = this->m_Collision._vptr_ICollideable;
  if ( this->m_bDisabled )
    vptr_ICollideable[16](p_m_Collision);
  else
    vptr_ICollideable[15](p_m_Collision);
  CBaseEntity::GetModel(&hModel, this);
  vptr_IAppSystem = modelinfo->_vptr_IAppSystem;
  m_pBinding = hModel.m_pBinding;
  if ( vptr_IAppSystem[14](modelinfo, &m_pBinding) != 0 )
  {
    v10 = CCollisionProperty::SetupPhysicsFromUnscaledModel(
            p_m_Collision,
            VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
            2,
            0);
    if ( v10 != 0 )
      (*(v10->_vptr_IPhysAggregateInstance + 55))(v10, 0xFFFFFFFFLL);
  }
  else
  {
    v11 = (*(this->m_Collision._vptr_ICollideable + 12))(p_m_Collision);
    if ( v11 != 0 )
      (*(*v11 + 344LL))(v11, 0xFFFFFFFFLL);
  }
  if ( showtriggers.m_pParent->m_Value.m_nValue == 0 )
    CBaseEntity::AddEffects(this, 32);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  if ( !writer.m_bReleased )
  {
    v12 = writer.m_pCollisionProp;
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v12->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(v12->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v12->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v12->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(v12->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v12->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v12->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(v12->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v12->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v12->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(v12->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v12->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v12->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(v12->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v12->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v12->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(v12->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v12->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CBaseTrigger::PassesTriggerFilters  (line 419, @0x00000000023cf930, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, HasSpawnFlags, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: FixUpHMDPlayer, CBaseFilter::PassesFilter
// callers: CTriggerMultiple::PassesTriggerFilters
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseTrigger::PassesTriggerFilters(CBaseTrigger *const this, CBaseEntity *pOther)
{
  CBaseEntity *fixed; // rbx
  unsigned int m_Value; // eax
  char v5; // al
  unsigned int v6; // edx
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  CEntityIdentity *v12; // rcx
  __int64 v13; // rax

  fixed = FixUpHMDPlayer(pOther);
  if ( fixed == 0 )
    return 0;
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x40) == 0
    && ((m_Value & 1) == 0 || SLOBYTE(fixed->m_fFlags.m_Value) >= 0)
    && ((m_Value & 2) == 0 || (fixed->m_fFlags.m_Value & 0x2000) == 0)
    && ((m_Value & 8) == 0 || fixed->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS) )
  {
    return 0;
  }
  v5 = (*(fixed->_vptr_IHandleEntity + 140))(fixed);
  v6 = this->m_spawnflags.m_Value;
  if ( (v6 & 0x20) != 0 )
  {
    if ( v5 != 0 )
    {
      if ( (*(fixed->_vptr_IHandleEntity + 346))(fixed) == 0 )
        return 0;
      v13 = (*(fixed->_vptr_IHandleEntity + 347))(fixed);
      if ( v13 == 0 || (*(*v13 + 128LL))(v13) != 0 )
        return 0;
      if ( (this->m_spawnflags.m_Value & 0x200) == 0 )
        goto LABEL_13;
LABEL_12:
      if ( (*(fixed->_vptr_IHandleEntity + 346))(fixed) == 0 )
        goto LABEL_13;
      return 0;
    }
  }
  else if ( (v6 & 0x200) != 0 && v5 != 0 )
  {
    goto LABEL_12;
  }
LABEL_13:
  m_Index = this->m_hFilter.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1;
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hFilter.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    return 1;
  v10 = this->m_hFilter.m_Index & 0x1FF;
  v11 = &v9[v10] == 0;
  v12 = &v9[v10];
  result = 1;
  if ( !v11 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
    return CBaseFilter::PassesFilter(v12->m_pInstance, this, fixed);
  return result;
}


// CBaseTrigger::InputStartTouch  (line 491, @0x00000000023bb270, libserver.so)
void __fastcall CBaseTrigger::InputStartTouch(CBaseTrigger *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 111))(this, inputdata->pCaller);
}


// CBaseTrigger::InputEndTouch  (line 500, @0x00000000023bb290, libserver.so)
void __fastcall CBaseTrigger::InputEndTouch(CBaseTrigger *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 113))(this, inputdata->pCaller);
}


// CBaseTrigger::OnStartTouchAll  (line 510, @0x00000000023d9030, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseTrigger::OnStartTouchAll(CBaseTrigger *const this, CBaseEntity *pOther)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  value.m_uint64 = 0;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnStartTouchAll, pOther, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CBaseTrigger::OnEndTouchAll  (line 519, @0x00000000023d90a0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseTrigger::OnEndTouchAll(CBaseTrigger *const this, CBaseEntity *pOther)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  value.m_uint64 = 0;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnEndTouchAll, pOther, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CBaseTrigger::StartTouch  (line 529, @0x00000000023e1af0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CVariantBase, CopyConstruct<CHandle<CBaseEntity> >, Element, FireOutput, Free, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator=, operator[], ~CVariantBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CEntityIOOutput::FireOutputInternal, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CFogTrigger::StartTouch, CTonemapTrigger::StartTouch, CTriggerSoundscape::StartTouch, CTriggerLook::StartTouch, CTriggerPush::StartTouch, CTriggerProximity::StartTouch, CServerRagdollTrigger::StartTouch, CTriggerCallback::StartTouch, CTriggerActiveWeaponDetect::StartTouch
void __fastcall CBaseTrigger::StartTouch(CBaseTrigger *const this, CBaseEntity *pOther)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  char v6; // r14
  __int64 m_Size; // r13
  int v8; // eax
  EHANDLE *v9; // rax
  EHANDLE hOther; // [rsp+0h] [rbp-40h] BYREF
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0 )
  {
    hOther.m_Index = -1;
    if ( pOther != 0 )
    {
      m_pEntity = pOther->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v5 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hOther.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
      }
    }
    v6 = 0;
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
           &this->m_hTouchingEntities,
           &hOther) == -1 )
    {
      m_Size = this->m_hTouchingEntities.m_Size;
      v8 = this->m_hTouchingEntities.m_Size;
      if ( m_Size == this->m_hTouchingEntities.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hTouchingEntities.m_Memory, 1);
        v8 = this->m_hTouchingEntities.m_Size;
      }
      this->m_hTouchingEntities.m_Size = v8 + 1;
      v9 = &this->m_hTouchingEntities.m_Memory.m_pMemory[m_Size];
      v6 = 1;
      if ( v9 != 0 )
        v9->m_Index = hOther.m_Index;
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnStartTouch, pOther, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      if ( v6 == 0 )
        return;
    }
    else if ( v6 == 0 )
    {
      return;
    }
    if ( this->m_hTouchingEntities.m_Size == 1 )
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnStartTouchAll, pOther, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
  }
}


// CBaseTrigger::EndTouch  (line 557, @0x00000000023dd400, libserver.so)  // inlines: CEntityHandle, CHandle, CVariantBase, FindAndRemove, FireOutput, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator!, operator=, ~CVariantBase
// calls: CBaseTrigger::IsTouching, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CFogTrigger::EndTouch, CTonemapTrigger::EndTouch, CTriggerSoundscape::EndTouch, CTriggerLook::EndTouch, CTriggerProximity::EndTouch, CServerRagdollTrigger::EndTouch, CTriggerHurt::EndTouch, CTriggerSndSosOpvar::EndTouch
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CBaseTrigger::EndTouch(CBaseTrigger *const this, CBaseEntity *pOther)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  int v6; // eax
  int v7; // r8d
  int v8; // r15d
  __int64 v9; // rdx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  int v12; // [rsp+4h] [rbp-4Ch]
  __int64 v13; // [rsp+8h] [rbp-48h]
  __int64 hOther; // [rsp+10h] [rbp-40h] OVERLAPPED BYREF
  __int16 v15; // [rsp+18h] [rbp-38h]
  __int16 v16; // [rsp+1Ah] [rbp-36h]

  if ( CBaseTrigger::IsTouching(this, pOther) )
  {
    LODWORD(hOther) = -1;
    if ( pOther != 0 )
    {
      m_pEntity = pOther->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v5 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(hOther) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
      }
    }
    v6 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
           &this->m_hTouchingEntities,
           &hOther);
    if ( v6 != -1 )
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&this->m_hTouchingEntities, v6);
    v15 = 0;
    v16 = 0;
    hOther = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnEndTouch, pOther, this, &hOther, 0.0);
    if ( (v16 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, hOther);
    v7 = 0;
    v8 = this->m_hTouchingEntities.m_Size - 1;
    v9 = 4LL * v8;
    if ( v8 < 0 )
      goto LABEL_20;
    do
    {
      LODWORD(hOther) = *(&this->m_hTouchingEntities.m_Memory.m_pMemory->m_Index + v9);
      if ( (hOther + 2) > 1
        && (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hOther >> 9) & 0x3F]) != 0
        && (v11 = &v10[hOther & 0x1FF]) != 0
        && hOther == v11->m_EHandle.m_Index
        && v11->m_pInstance != 0 )
      {
        v7 = 1;
      }
      else
      {
        v12 = v7;
        v13 = v9;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
          &this->m_hTouchingEntities,
          v8);
        v9 = v13;
        v7 = v12;
      }
      --v8;
      v9 -= 4;
    }
    while ( v8 != -1 );
    if ( v7 == 0 )
    {
LABEL_20:
      v15 = 0;
      v16 = 0;
      hOther = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnEndTouchAll, pOther, this, &hOther, 0.0);
      if ( (v16 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, hOther);
    }
  }
}


// CBaseTrigger::IsTouching  (line 604, @0x00000000023d5fd0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find
// callers: CBaseTrigger::Script_IsTouching, CBaseTrigger::EndTouch, CDOTA_BaseNPC::CanAttackBoss, CDOTA_Item_Ward_Dispenser::CastFilterResult
bool __fastcall CBaseTrigger::IsTouching(CBaseTrigger *const this, CBaseEntity *pOther)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  EHANDLE hOther; // [rsp+0h] [rbp-10h] BYREF

  hOther.m_Index = -1;
  if ( pOther != 0 )
  {
    m_pEntity = pOther->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hOther.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  return CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
           &this->m_hTouchingEntities,
           &hOther) != -1;
}


// CBaseTrigger::Script_IsTouching  (line 613, @0x00000000023d6050, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CBaseTrigger::IsTouching
bool __fastcall CBaseTrigger::Script_IsTouching(CBaseTrigger *const this, HSCRIPT hEnt)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v6; // rax
  bool result; // al

  result = hEnt != 0
        && (v4 = *(*g_pScriptVM + 208LL),
            Script = GetScriptDesc<CEntityInstance>(0),
            (v6 = v4(g_pScriptVM, hEnt, Script)) != 0)
        && CBaseTrigger::IsTouching(this, v6);
  return result;
}


// CBaseTrigger::GetTouchedEntityOfType  (line 625, @0x00000000023cfda0, libserver.so)  // inlines: ClassMatches, FClassnameIs, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CEntityIdentity::ClassMatches
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CBaseTrigger::GetTouchedEntityOfType(CBaseTrigger *const this, const char *sClassName)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CBaseEntity *m_pInstance; // r15

  m_Size = this->m_hTouchingEntities.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v5 = 0;
  v6 = 4LL * (m_Size - 1) + 4;
  while ( 1 )
  {
    v7 = &this->m_hTouchingEntities.m_Memory.m_pMemory[v5 / 4];
    m_Index = v7->m_Index;
    if ( v7->m_Index + 2 > 1 )
    {
      v9 = v7->m_Index;
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[v9 & 0x1FF];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( v11->m_pInstance != 0 && CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, sClassName) )
            break;
        }
      }
    }
    v5 += 4LL;
    if ( v5 == v6 )
      return 0;
  }
  return m_pInstance;
}


// CBaseTrigger::InputToggle  (line 641, @0x00000000023bc9a0, libserver.so)  // inlines: IsTriggerCollisionGroup
// calls: CCollisionProperty::IsTriggerCollisionGroup, CCollisionProperty::RemoveTriggerCollisionGroup, CBaseEntity::PhysicsTouchTriggers, CCollisionProperty::SetTriggerCollisionGroup
void __fastcall CBaseTrigger::InputToggle(CBaseTrigger *const this, inputdata_t *const inputdata)
{
  CCollisionProperty *m_pCollision; // rdi

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 && CCollisionProperty::IsTriggerCollisionGroup(m_pCollision) )
  {
    CCollisionProperty::RemoveTriggerCollisionGroup(&this->m_Collision);
    CBaseEntity::PhysicsTouchTriggers(this, 0);
  }
  else
  {
    CCollisionProperty::SetTriggerCollisionGroup(&this->m_Collision);
    CBaseEntity::PhysicsTouchTriggers(this, 0);
  }
}


// CTriggerRemove::~CTriggerRemove  (line 660, @0x00000000023f63f0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerRemove::~CTriggerRemove(CTriggerRemove *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerRemove::~CTriggerRemove  (line 660, @0x00000000023f6a80, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerRemove, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerRemove::~CTriggerRemove(CTriggerRemove *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerRemove::GetEntityClass  (line 662, @0x00000000023e5ec0, libserver.so)
CEntityClass *__cdecl CTriggerRemove::GetEntityClass()
{
  return g_pEntityCTriggerRemoveClass;
}


// CTriggerRemove::Schema_DynamicBinding  (line 662, @0x00000000023e5ed0, libserver.so)
// globals: CTriggerRemove::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerRemove::Schema_DynamicBinding(const CTriggerRemove *const this)
{
  return CTriggerRemove::s_pSchemaBinding;
}


// CTriggerRemove::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 662, @0x00000000023e5ee0, libserver.so)
// globals: CTriggerRemove::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerRemove::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerRemove::CEntityInstanceEntityClass *const this)
{
  return CTriggerRemove::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerRemove::CEntityInstanceEntityClass::DestructInstance  (line 662, @0x00000000023e5ef0, libserver.so)  // inlines: Destruct<CTriggerRemove>
void __fastcall CTriggerRemove::CEntityInstanceEntityClass::DestructInstance(
        CTriggerRemove::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerRemove::CEntityInstanceEntityClass::FreeInstance  (line 662, @0x00000000023e5f10, libserver.so)
void __fastcall CTriggerRemove::CEntityInstanceEntityClass::FreeInstance(
        CTriggerRemove::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerRemove::CEntityInstanceEntityClass::CanAllocate  (line 662, @0x00000000023e5f30, libserver.so)
bool __fastcall CTriggerRemove::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerRemove::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerRemove::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 662, @0x00000000023e5f40, libserver.so)
// globals: CTriggerRemove::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerRemove::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerRemove::CEntityInstanceEntityClass *const this)
{
  return CTriggerRemove::s_pSchemaBinding;
}


// CTriggerRemove::CEntityInstanceEntityClass::AllocateInstance  (line 662, @0x00000000023e82b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerRemove::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerRemove::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1504);
  memset(v1, 0, 0x5E0u);
  return v1;
}


// CTriggerRemove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 662, @0x00000000023ea1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerRemove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerRemove::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerRemove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 662, @0x00000000023ea210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerRemove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerRemove::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerRemove::CEntityInstanceEntityClass::ConstructInstance  (line 662, @0x00000000023f1320, libserver.so)  // inlines: CEntityIOOutput, CTriggerRemove, Construct<CTriggerRemove>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerRemove::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerRemove::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_40BE950;
    *(p + 185) = off_3F7C190;
  }
  return p;
}


// CTriggerRemove::GetEntityClassInternal  (line 662, @0x00000000023f17c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_remove", "CTriggerRemove"
// globals: `guard variable for'CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass, CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass, __dso_handle, CTriggerRemove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerRemove::GetEntityClassInfo(void)::g_EntityCTriggerRemoveClassInfo, CTriggerRemove::GetEntityClassInfo(void)::g_EntityCTriggerRemoveClassInfo
CEntityClass *__cdecl CTriggerRemove::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass);
    CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass._vptr_CEntityClass = off_40BE8D0;
    __cxa_guard_release(&`guard variable for'CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass);
    __cxa_atexit(
      CTriggerRemove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerRemoveClass != 0 )
    return &CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass;
  if ( `guard variable for'CTriggerRemove::GetEntityClassInfo(void)::g_EntityCTriggerRemoveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerRemove::GetEntityClassInfo(void)::g_EntityCTriggerRemoveClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerRemove::GetEntityClassInfo(void)::g_EntityCTriggerRemoveClassInfo,
      "CTriggerRemove",
      "trigger_remove",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerRemove::GetEntityClassInfo(void)::g_EntityCTriggerRemoveClassInfo);
  }
  CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass.m_pClassInfo = &CTriggerRemove::GetEntityClassInfo(void)::g_EntityCTriggerRemoveClassInfo;
  CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass.m_pBaseClassInfo = CTriggerRemove::GetEntityClassInfo(void)::g_EntityCTriggerRemoveClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerRemoveClass = &CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass;
  CTriggerRemove::GetEntityClassInfo(void)::g_EntityCTriggerRemoveClassInfo.m_pClass = &CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass;
  CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerRemoveClass->m_pComponentOverrides = 0;
  return &CTriggerRemove::GetEntityClassInternal(void)::g_EntityCTriggerRemoveClass;
}


// CTriggerRemove::GetDataDescMap  (line 674, @0x00000000023bb2b0, libserver.so)
// globals: CTriggerRemove::m_DataMap
datamap_t *__fastcall CTriggerRemove::GetDataDescMap(CTriggerRemove *const this)
{
  return &CTriggerRemove::m_DataMap;
}


// CTriggerRemove::AddDatadescMetadataKeys  (line 674, @0x00000000023cfe80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerRemove::GetEntityClass(void)
void __fastcall CTriggerRemove::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerRemove::GetEntityClass);
}


// CTriggerRemove::GetBaseMap  (line 674, @0x00000000023cfea0, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerRemove::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerRemove>  (line 674, @0x00000000023cfeb0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerRemove"
// globals: `guard variable for'DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder, `guard variable for'DataMapInit<CTriggerRemove>(CTriggerRemove *)::dataDesc, CBaseTrigger::m_DataMap, CTriggerRemove::GetEntityClass(void), CTriggerRemove::m_DataMap, DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerRemove>(CTriggerRemove *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder.m_pszBase = "CTriggerRemove";
    DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerRemove>(CTriggerRemove *)::nameHolder,
      &_dso_handle);
  }
  CTriggerRemove::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerRemove>(CTriggerRemove *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerRemove>(CTriggerRemove *)::dataDesc) != 0 )
  {
    DataMapInit<CTriggerRemove>(CTriggerRemove *)::dataDesc[1].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerRemove>(CTriggerRemove *)::dataDesc);
  }
  CTriggerRemove::m_DataMap.dataNumFields = 1;
  CTriggerRemove::m_DataMap.dataDesc = &DataMapInit<CTriggerRemove>(CTriggerRemove *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerRemove::m_DataMap, CTriggerRemove::GetEntityClass);
  return &CTriggerRemove::m_DataMap;
}


// CTriggerRemove::Spawn  (line 686, @0x00000000023d6530, libserver.so)
// calls: CCollisionProperty::EnableTouchPersistsNotification, CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
void __fastcall CTriggerRemove::Spawn(CTriggerRemove *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CTriggerRemove::Touch  (line 699, @0x00000000023bb9e0, libserver.so)
// calls: UTIL_Remove
void __fastcall CTriggerRemove::Touch(CTriggerRemove *const this, CBaseEntity *pOther)
{
  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0 )
    UTIL_Remove(pOther);
}


// CTriggerHurt::GetDataDescMap  (line 709, @0x00000000023bb2c0, libserver.so)
// globals: CTriggerHurt::m_DataMap
datamap_t *__fastcall CTriggerHurt::GetDataDescMap(CTriggerHurt *const this)
{
  return &CTriggerHurt::m_DataMap;
}


// CTriggerHurt::AddDatadescMetadataKeys  (line 709, @0x00000000023cffd0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerHurt::GetEntityClass(void)
void __fastcall CTriggerHurt::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerHurt::GetEntityClass);
}


// CTriggerHurt::GetBaseMap  (line 709, @0x00000000023cfff0, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerHurt::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerHurt>  (line 709, @0x00000000023df2f0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, CopyConstruct<char*>, Element, GenerateName, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerHurt"
// globals: `guard variable for'DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder, `guard variable for'DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc, CBaseTrigger::m_DataMap, CTriggerHurt::GetEntityClass(void), CTriggerHurt::m_DataMap, DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory< (10 total)
datamap_t *__fastcall DataMapInit<CTriggerHurt>(CTriggerHurt *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax
  char *v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  char **v13; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_pszBase = "CTriggerHurt";
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder,
      &_dso_handle);
  }
  CTriggerHurt::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_nLenBase + 15);
    strcpy(stpcpy(v2, DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_pszBase), "RadiationThink");
    m_Size = DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc[1].fieldName = v2;
    v6 = operator new[](DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v6, DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_pszBase), "HurtThink");
    v7 = DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc[2].fieldName = v6;
    v10 = operator new[](DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_nLenBase + 9);
    strcpy(stpcpy(v10, DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_pszBase), "NavThink");
    v11 = DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CTriggerHurt>(CTriggerHurt *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc[3].fieldName = v10;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
    }
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc[14].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc[16].pSaveRestoreOps = eventFuncs;
    DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc[17].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc);
  }
  CTriggerHurt::m_DataMap.dataNumFields = 18;
  CTriggerHurt::m_DataMap.dataDesc = &DataMapInit<CTriggerHurt>(CTriggerHurt *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerHurt::m_DataMap, CTriggerHurt::GetEntityClass);
  return &CTriggerHurt::m_DataMap;
}


// CScriptTriggerHurt::~CScriptTriggerHurt  (line 749, @0x00000000023f7130, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerHurt, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CScriptTriggerHurt::~CScriptTriggerHurt(CScriptTriggerHurt *const this)
{
  this->_vptr_IHandleEntity = &off_40BF810;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hurtEntities);
  if ( (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hurtEntities.m_Memory);
    if ( (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hurtEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CScriptTriggerHurt::~CScriptTriggerHurt  (line 749, @0x00000000023f75a0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CScriptTriggerHurt, ~CTriggerHurt, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CScriptTriggerHurt::~CScriptTriggerHurt(CScriptTriggerHurt *const this)
{
  this->_vptr_IHandleEntity = &off_40BF810;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hurtEntities);
  if ( (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hurtEntities.m_Memory);
    if ( (this->m_hurtEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hurtEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CScriptTriggerHurt::GetEntityClass  (line 751, @0x00000000023e5f50, libserver.so)
CEntityClass *__cdecl CScriptTriggerHurt::GetEntityClass()
{
  return g_pEntityCScriptTriggerHurtClass;
}


// CScriptTriggerHurt::Schema_DynamicBinding  (line 751, @0x00000000023e5f60, libserver.so)
// globals: CScriptTriggerHurt::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptTriggerHurt::Schema_DynamicBinding(
        const CScriptTriggerHurt *const this)
{
  return CScriptTriggerHurt::s_pSchemaBinding;
}


// CScriptTriggerHurt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 751, @0x00000000023e5f70, libserver.so)
// globals: CScriptTriggerHurt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptTriggerHurt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CScriptTriggerHurt::CEntityInstanceEntityClass *const this)
{
  return CScriptTriggerHurt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CScriptTriggerHurt::CEntityInstanceEntityClass::DestructInstance  (line 751, @0x00000000023e5f80, libserver.so)  // inlines: Destruct<CScriptTriggerHurt>
void __fastcall CScriptTriggerHurt::CEntityInstanceEntityClass::DestructInstance(
        CScriptTriggerHurt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CScriptTriggerHurt::CEntityInstanceEntityClass::FreeInstance  (line 751, @0x00000000023e5fa0, libserver.so)
void __fastcall CScriptTriggerHurt::CEntityInstanceEntityClass::FreeInstance(
        CScriptTriggerHurt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CScriptTriggerHurt::CEntityInstanceEntityClass::CanAllocate  (line 751, @0x00000000023e5fc0, libserver.so)
bool __fastcall CScriptTriggerHurt::CEntityInstanceEntityClass::CanAllocate(
        const CScriptTriggerHurt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CScriptTriggerHurt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 751, @0x00000000023e5fd0, libserver.so)
// globals: CScriptTriggerHurt::s_pSchemaBinding
const ISchemaBinding *__fastcall CScriptTriggerHurt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CScriptTriggerHurt::CEntityInstanceEntityClass *const this)
{
  return CScriptTriggerHurt::s_pSchemaBinding;
}


// CScriptTriggerHurt::CEntityInstanceEntityClass::AllocateInstance  (line 751, @0x00000000023e82f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CScriptTriggerHurt::CEntityInstanceEntityClass::AllocateInstance(
        CScriptTriggerHurt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1616);
  memset(v1, 0, 0x650u);
  return v1;
}


// CScriptTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 751, @0x00000000023ea1a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CScriptTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptTriggerHurt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CScriptTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 751, @0x00000000023ea1c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CScriptTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptTriggerHurt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CScriptTriggerHurt::GetEntityClassInternal  (line 751, @0x00000000023f1910, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseTrigger::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "script_trigger_hurt", "CScriptTriggerHurt", "CTriggerHurt"
// globals: `guard variable for'CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass, CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass, __dso_handle, CScriptTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CScriptTriggerHurt::GetEntityClassInfo(void)::g_EntityCScriptTriggerHurtClassInfo, CScriptTriggerHurt::GetEntityClassInfo(void)::g_EntityCScriptTriggerHurtClassInfo, `guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo, CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo
CEntityClass *__cdecl CScriptTriggerHurt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass) != 0 )
  {
    CEntityClass::CEntityClass(&CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass);
    CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass._vptr_CEntityClass = off_40BF070;
    __cxa_guard_release(&`guard variable for'CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass);
    __cxa_atexit(
      CScriptTriggerHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass,
      &_dso_handle);
  }
  if ( g_pEntityCScriptTriggerHurtClass != 0 )
    return &CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass;
  if ( `guard variable for'CScriptTriggerHurt::GetEntityClassInfo(void)::g_EntityCScriptTriggerHurtClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptTriggerHurt::GetEntityClassInfo(void)::g_EntityCScriptTriggerHurtClassInfo) != 0 )
  {
    if ( `guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo) != 0 )
    {
      EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo,
        "CTriggerHurt",
        "trigger_hurt",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CScriptTriggerHurt::GetEntityClassInfo(void)::g_EntityCScriptTriggerHurtClassInfo,
      "CScriptTriggerHurt",
      "script_trigger_hurt",
      0,
      &CTriggerHurt::GetEntityClassInfo(void)::g_EntityCTriggerHurtClassInfo);
    __cxa_guard_release(&`guard variable for'CScriptTriggerHurt::GetEntityClassInfo(void)::g_EntityCScriptTriggerHurtClassInfo);
  }
  CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass.m_pClassInfo = &CScriptTriggerHurt::GetEntityClassInfo(void)::g_EntityCScriptTriggerHurtClassInfo;
  CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass.m_pBaseClassInfo = CScriptTriggerHurt::GetEntityClassInfo(void)::g_EntityCScriptTriggerHurtClassInfo.m_pBaseClassInfo;
  g_pEntityCScriptTriggerHurtClass = &CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass;
  CScriptTriggerHurt::GetEntityClassInfo(void)::g_EntityCScriptTriggerHurtClassInfo.m_pClass = &CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass;
  CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCScriptTriggerHurtClass->m_pComponentOverrides = 0;
  return &CScriptTriggerHurt::GetEntityClassInternal(void)::g_EntityCScriptTriggerHurtClass;
}


// CScriptTriggerHurt::CEntityInstanceEntityClass::ConstructInstance  (line 751, @0x00000000023f5bb0, libserver.so)  // inlines: CEntityIOOutput, CScriptTriggerHurt, CTriggerHurt, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CScriptTriggerHurt>, Zero
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CScriptTriggerHurt::CEntityInstanceEntityClass::ConstructInstance(
        CScriptTriggerHurt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 394) = 0;
    *(p + 191) = off_3F7C190;
    *(p + 194) = off_3F7C190;
    *(p + 198) = 0;
    *(p + 398) = 0;
    *(p + 399) = 0;
    *(p + 371) = 1101004800;
    *(p + 379) = 0;
    *(p + 378) = 0;
    *(p + 377) = 0;
    *p = &off_40BF0F0;
  }
  return p;
}


// CScriptTriggerHurt::Spawn  (line 754, @0x00000000023f5c50, libserver.so)  // inlines: operator-
// calls: CCollisionProperty::SetupPhysicsFromUnscaledOBB, CTriggerHurt::Spawn
void __fastcall CScriptTriggerHurt::Spawn(CScriptTriggerHurt *const this, const CEntityKeyValues *pKeyValues)
{
  float y; // xmm2_4
  float x; // xmm3_4
  Vector vMins; // [rsp+0h] [rbp-20h] BYREF

  y = this->m_vExtent.y;
  x = this->m_vExtent.x;
  vMins.z = -this->m_vExtent.z;
  vMins.y = -y;
  vMins.x = -x;
  CCollisionProperty::SetupPhysicsFromUnscaledOBB(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    2,
    &vMins,
    &this->m_vExtent);
  CTriggerHurt::Spawn(this, pKeyValues);
}


// CScriptTriggerHurt::GetDataDescMap  (line 763, @0x00000000023bb2d0, libserver.so)
// globals: CScriptTriggerHurt::m_DataMap
datamap_t *__fastcall CScriptTriggerHurt::GetDataDescMap(CScriptTriggerHurt *const this)
{
  return &CScriptTriggerHurt::m_DataMap;
}


// CScriptTriggerHurt::AddDatadescMetadataKeys  (line 763, @0x00000000023d0000, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CScriptTriggerHurt::GetEntityClass(void)
void __fastcall CScriptTriggerHurt::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CScriptTriggerHurt::GetEntityClass);
}


// CScriptTriggerHurt::GetBaseMap  (line 763, @0x00000000023d0020, libserver.so)
// globals: CTriggerHurt::m_DataMap
datamap_t *__cdecl CScriptTriggerHurt::GetBaseMap()
{
  return &CTriggerHurt::m_DataMap;
}


// DataMapInit<CScriptTriggerHurt>  (line 763, @0x00000000023d0030, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CScriptTriggerHurt"
// globals: `guard variable for'DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder, CTriggerHurt::m_DataMap, CScriptTriggerHurt::GetEntityClass(void), CScriptTriggerHurt::m_DataMap, DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder) != 0 )
  {
    DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder.m_pszBase = "CScriptTriggerHurt";
    DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::nameHolder,
      &_dso_handle);
  }
  CScriptTriggerHurt::m_DataMap.dataNumFields = 1;
  CScriptTriggerHurt::m_DataMap.baseMap = &CTriggerHurt::m_DataMap;
  CScriptTriggerHurt::m_DataMap.dataDesc = &DataMapInit<CScriptTriggerHurt>(CScriptTriggerHurt *)::dataDesc[1];
  AddDatadescMetadataKeys(&CScriptTriggerHurt::m_DataMap, CScriptTriggerHurt::GetEntityClass);
  return &CScriptTriggerHurt::m_DataMap;
}


// CTriggerHurt::Spawn  (line 771, @0x00000000023d6570, libserver.so)  // inlines: curtime
// calls: CBaseTrigger::Spawn, CCollisionProperty::EnableTouchPersistsNotification, CBaseTrigger::InitTrigger, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
// callers: CScriptTriggerHurt::Spawn
// globals: CTriggerHurt::NavThink(void), CTriggerHurt::RadiationThink(void)
void __fastcall CTriggerHurt::Spawn(CTriggerHurt *const this, const CEntityKeyValues *pKeyValues)
{
  double v4; // xmm1_8
  float v5; // xmm0_4
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc v7; // rax
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v10; // xmm0_8
  double v11; // xmm1_8
  float m_flCurrentTime; // [rsp+Ch] [rbp-14h]

  CBaseTrigger::Spawn(this, pKeyValues);
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CBaseTrigger::InitTrigger(this, pKeyValues);
  this->m_flOriginalDamage = this->m_flDamage;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v4, 0);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  if ( (this->m_bitsDamageInflict & 0x40000) != 0 )
  {
    CBaseEntity::ThinkSet(this, CTriggerHurt::RadiationThink, 0.0, 0, 0);
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v10 = (*(*random_valve + 8LL))(random_valve, 0.0, 0.5);
    *&v10 = *&v10 + m_flCurrentTime;
    CBaseEntity::SetNextThink(this, v10, v11, 0);
  }
  if ( TheNavMesh != 0 )
  {
    v5 = 0.0;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v7 = gpGlobals->m_pfnWarningFunc;
        if ( v7 != 0 )
          (v7)(1, 0.0);
      }
      v5 = v6->m_flCurrentTime;
    }
    CBaseEntity::ThinkSet(this, CTriggerHurt::NavThink, v5, -953315441, 0);
  }
}


// CTriggerHurt::NavThink  (line 798, @0x00000000023e2200, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Extent, Init, NavAreaCollector, Purge, RemoveAll, WorldSpaceAABB, curtime, operator+=, operator-=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NavAreaCollector
// calls: CBaseEntity::ThinkSet, CCollisionProperty::CollisionAABBToWorldAABB, CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>, CUtlMemory<CNavArea*, int>::Purge, _Unwind_Resume
// globals: CTriggerHurt::NavThink(void)
void __fastcall CTriggerHurt::NavThink(CTriggerHurt *const this)
{
  CGlobalVars *v2; // rbx
  float v3; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  bool v5; // zf
  Extent extent; // [rsp+0h] [rbp-50h] BYREF
  NavAreaCollector overlap; // [rsp+20h] [rbp-30h] BYREF

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v3 = v2->m_flCurrentTime + 5.0;
  }
  else
  {
    v3 = 5.0;
  }
  CBaseEntity::ThinkSet(this, CTriggerHurt::NavThink, v3, -953315441, 0);
  if ( !this->m_bDisabled )
  {
    overlap.m_Areas.m_Size = 0;
    overlap.m_bCheckForDuplicates = 0;
    overlap.m_Areas.m_Memory.m_pMemory = 0;
    overlap.m_Areas.m_Memory.m_nAllocationCount = 0;
    overlap.m_Areas.m_Memory.m_nGrowSize = 0;
    extent.lo.x = 3.4028235e38;
    extent.lo.y = 3.4028235e38;
    extent.lo.z = 3.4028235e38;
    extent.hi.x = -3.4028235e38;
    extent.hi.y = -3.4028235e38;
    extent.hi.z = -3.4028235e38;
    CCollisionProperty::CollisionAABBToWorldAABB(
      &this->m_Collision,
      &this->m_Collision.m_vecMins.m_Value,
      &this->m_Collision.m_vecMaxs.m_Value,
      &extent.lo,
      &extent.hi);
    v5 = (this->m_bitsDamageInflict & 8) == 0;
    extent.lo.z = extent.lo.z - 71.0;
    if ( !v5 )
    {
      extent.lo.x = extent.lo.x - 16.0;
      extent.lo.y = extent.lo.y - 16.0;
      extent.hi.x = extent.hi.x + 16.0;
      extent.hi.y = extent.hi.y + 16.0;
      extent.hi.z = extent.hi.z + 0.0;
    }
    CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(TheNavMesh, &overlap, &extent);
    overlap.m_Areas.m_Size = 0;
    if ( (overlap.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CNavArea *,int>::Purge(&overlap.m_Areas.m_Memory);
      if ( (overlap.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CNavArea *,int>::Purge(&overlap.m_Areas.m_Memory);
    }
  }
}


// CTriggerHurt::RadiationThink  (line 836, @0x00000000023e18f0, libserver.so)  // inlines: curtime
// calls: UTIL_FindClientInPVS, CCollisionProperty::CalcDistanceFromPoint, CBasePlayer::NotifyNearbyRadiationSource, CTriggerHurt::HurtAllTouchers, CBaseEntity::SetNextThink
void __fastcall CTriggerHurt::RadiationThink(CTriggerHurt *const this)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r14
  CBaseEntity *ClientInPVS; // rax
  double v4; // xmm1_8
  CBasePlayer *v5; // r12
  vec_t v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v10; // r12
  float v11; // xmm0_4
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc v13; // rax
  double v14; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  Vector vecSurroundMins; // [rsp+0h] [rbp-50h] BYREF
  Vector vecSurroundMaxs; // [rsp+10h] [rbp-40h] BYREF
  Vector vecWorldPt; // [rsp+20h] [rbp-30h] BYREF

  p_m_Collision = &this->m_Collision;
  (*(this->m_Collision._vptr_ICollideable + 10))(&this->m_Collision, &vecSurroundMins, &vecSurroundMaxs);
  ClientInPVS = UTIL_FindClientInPVS(&vecSurroundMins, &vecSurroundMaxs);
  v5 = ClientInPVS;
  if ( ClientInPVS != 0 )
  {
    *&vecWorldPt.x = (*(ClientInPVS->_vptr_IHandleEntity + 62))(ClientInPVS);
    vecWorldPt.z = v6;
    v7 = CCollisionProperty::CalcDistanceFromPoint(p_m_Collision, &vecWorldPt);
    CBasePlayer::NotifyNearbyRadiationSource(v5, v7 * 3.0, v8);
  }
  m_flCurrentTime = 0.0;
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v10->m_flCurrentTime;
  }
  v11 = m_flCurrentTime - this->m_flLastDmgTime;
  if ( v11 >= 0.5 )
    CTriggerHurt::HurtAllTouchers(this, v11, v4);
  v12 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v13 = gpGlobals->m_pfnWarningFunc;
      if ( v13 != 0 )
        v13(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v14) = 0;
    *&v14 = v12->m_flCurrentTime + 0.25;
  }
  else
  {
    *&v14 = 1048576000;
  }
  CBaseEntity::SetNextThink(this, v14, v4, 0);
}


// CTriggerHurt::HurtEntity  (line 866, @0x00000000023e1060, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CVariantBase, CalcNearestPoint, CollisionToWorldSpace, CopyConstruct<CHandle<CBaseEntity> >, Element, FireOutput, Free, GetEHandle, GetEntryIndex, GetSerialNumber, GetVM, GrowMemory, IsBoundsDefinedInEntitySpace, Set, SetDamageForce, SetDamagePosition, VectorMA, VectorSubtract, VectorTransform, WorldSpaceCenter, operator!=, operator-, operator=, operator==, operator[], ~CTakeDamageInfo, ~CVariantBase
// calls: FixUpHMDPlayer, CBaseEntity::GetDamageOptions, CCollisionProperty::CalcNearestPoint, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CEntityIOOutput::FireOutputInternal, GuessDamageForce, VectorTransform, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CBaseEntity::GetAbsOrigin, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CTriggerHurt::EndTouch, CTriggerHurt::HurtAllTouchers
__int64 __fastcall CTriggerHurt::HurtEntity(CTriggerHurt *const this, CBaseEntity *pOther, double a3, float flDamage)
{
  unsigned int v6; // r12d
  CBaseEntity *fixed; // rax
  CBaseEntity *v9; // r13
  double v10; // xmm0_8
  bool v11; // zf
  vec_t v12; // xmm1_4
  float *v13; // rax
  double v14; // xmm0_8
  float *v15; // rax
  float x; // xmm1_4
  float y; // xmm2_4
  float z; // xmm0_4
  const CCollisionProperty *m_pCollision; // rdi
  char v20; // al
  CEntityIdentity *m_pEntity; // rax
  int v22; // edx
  __int16 v23; // cx
  __int64 m_Size; // r13
  int v25; // eax
  CHandle<CBaseEntity> *v26; // rax
  vec_t v27; // xmm1_4
  vec_t v28; // xmm0_4
  const matrix3x4_t *v29; // rax
  float v30; // [rsp+8h] [rbp-E8h]
  float flDamagea; // [rsp+Ch] [rbp-E4h]
  Vector vecCenter; // [rsp+10h] [rbp-E0h] BYREF
  Vector vecDamagePos; // [rsp+20h] [rbp-D0h] BYREF
  Vector vecForceDir; // [rsp+30h] [rbp-C0h] BYREF
  CTakeDamageInfo info; // [rsp+40h] [rbp-B0h] BYREF

  flDamagea = *&a3;
  v6 = (*(this->_vptr_IHandleEntity + 223))(this, a3, flDamage);
  if ( v6 == 0 )
    return 0;
  fixed = FixUpHMDPlayer(pOther);
  v9 = fixed;
  if ( fixed == 0 || CBaseEntity::GetDamageOptions(fixed) == DamageOptions_t::DAMAGE_NO )
    return 0;
  if ( flDamagea < 0.0 )
  {
    (*(v9->_vptr_IHandleEntity + 91))(v9, this->m_bitsDamageInflict, COERCE_DOUBLE(LODWORD(flDamagea) ^ 0x80000000LL));
    goto LABEL_18;
  }
  v10 = (*(this->m_Collision._vptr_ICollideable + 19))(&this->m_Collision);
  v11 = (this->m_Collision.m_nSolidType.m_Value & 0xFD) == 0;
  *&info._vptr_CTakeDamageInfo = v10;
  info.m_vecDamageForce.x = v12;
  if ( v11
    || (v13 = (*(this->m_Collision._vptr_ICollideable + 5))(&this->m_Collision),
        *&v14 = LODWORD(vec3_angle.x),
        vec3_angle.x == *v13)
    && (*&v14 = LODWORD(vec3_angle.y), *&v14 == v13[1])
    && (*&v14 = LODWORD(vec3_angle.z), *&v14 == v13[2]) )
  {
    v30 = (*(this->m_Collision._vptr_ICollideable + 27))(&this->m_Collision);
    v15 = (*(this->m_Collision._vptr_ICollideable + 4))(&this->m_Collision);
    x = (*&info._vptr_CTakeDamageInfo * v30) + *v15;
    y = (*(&info._vptr_CTakeDamageInfo + 1) * v30) + v15[1];
    z = (v30 * info.m_vecDamageForce.x) + v15[2];
  }
  else
  {
    v29 = (*(this->m_Collision._vptr_ICollideable + 6))(&this->m_Collision, v14);
    VectorTransform(&info, v29, &vecForceDir.x);
    z = vecForceDir.z;
    y = vecForceDir.y;
    x = vecForceDir.x;
  }
  m_pCollision = v9->m_pCollision;
  vecCenter.x = x;
  vecCenter.y = y;
  vecCenter.z = z;
  if ( m_pCollision != 0 )
    CCollisionProperty::CalcNearestPoint(m_pCollision, &vecCenter, &vecDamagePos);
  else
    vecDamagePos = *CBaseEntity::GetAbsOrigin(v9);
  CTakeDamageInfo::CTakeDamageInfo(&info, this, this, flDamagea, this->m_bitsDamageInflict, 0);
  v11 = !this->m_bNoDmgForce;
  info.m_vecDamagePosition = vecDamagePos;
  if ( !v11 )
  {
    info.m_vecDamageForce = vec3_origin;
    goto LABEL_16;
  }
  if ( this->m_vDamageForce.x == vec3_origin.x && this->m_vDamageForce.y == vec3_origin.y )
  {
    if ( this->m_vDamageForce.z == vec3_origin.z )
    {
      vecForceDir.x = vecDamagePos.x - vecCenter.x;
      vecForceDir.y = vecDamagePos.y - vecCenter.y;
      vecForceDir.z = vecDamagePos.z - vecCenter.z;
      GuessDamageForce(&info, &vecForceDir, &vecDamagePos, 1.0);
      goto LABEL_16;
    }
    v28 = this->m_vDamageForce.z;
    v27 = this->m_vDamageForce.y;
  }
  else
  {
    v27 = this->m_vDamageForce.y;
    v28 = this->m_vDamageForce.z;
  }
  info.m_vecDamageForce.x = this->m_vDamageForce.x;
  info.m_vecDamageForce.y = v27;
  info.m_vecDamageForce.z = v28;
LABEL_16:
  CBaseEntity::TakeDamage(v9, &info);
  info._vptr_CTakeDamageInfo = off_3FC92D0;
  if ( info.m_hScriptInstance != 0 )
    (*(*g_pScriptVM + 136LL))(g_pScriptVM);
LABEL_18:
  v20 = (*(v9->_vptr_IHandleEntity + 140))(v9);
  info.m_vecDamageForce.x = 0.0;
  info._vptr_CTakeDamageInfo = 0;
  if ( v20 == 0 )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnHurt, v9, this, &info, 0.0);
    if ( (BYTE2(info.m_vecDamageForce.x) & 1) == 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  CEntityIOOutput::FireOutputInternal(&this->m_OnHurtPlayer, v9, this, &info, 0.0);
  if ( (BYTE2(info.m_vecDamageForce.x) & 1) != 0 )
LABEL_20:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, info._vptr_CTakeDamageInfo);
LABEL_21:
  LODWORD(info._vptr_CTakeDamageInfo) = -1;
  m_pEntity = v9->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v23 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info._vptr_CTakeDamageInfo) = v23 | info._vptr_CTakeDamageInfo & 0x8000;
    LODWORD(info._vptr_CTakeDamageInfo) = (v22 << 15) | info._vptr_CTakeDamageInfo & 0x7FFF;
  }
  m_Size = this->m_hurtEntities.m_Size;
  v25 = this->m_hurtEntities.m_Size;
  if ( m_Size == this->m_hurtEntities.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hurtEntities.m_Memory, 1);
    v25 = this->m_hurtEntities.m_Size;
  }
  this->m_hurtEntities.m_Size = v25 + 1;
  v26 = &this->m_hurtEntities.m_Memory.m_pMemory[m_Size];
  if ( v26 != 0 )
    v26->m_Index = info._vptr_CTakeDamageInfo;
  return v6;
}


// CTriggerHurt::HurtThink  (line 928, @0x00000000023e1a40, libserver.so)  // inlines: curtime
// calls: CTriggerHurt::HurtAllTouchers, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
void __fastcall CTriggerHurt::HurtThink(CTriggerHurt *const this)
{
  double v1; // xmm1_8
  double v3; // xmm0_8
  double v4; // xmm1_8
  CGlobalVars *v5; // r12
  double v6; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( CTriggerHurt::HurtAllTouchers(this, 0.5, v1) <= 0 )
  {
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  }
  else
  {
    v4 = 0.0;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v3, 0.0);
      }
      *&v4 = LODWORD(v5->m_flCurrentTime);
    }
    *&v6 = 1056964608;
    if ( this->m_thinkAlways )
      v6 = 0.0;
    *&v6 = *&v6 + *&v4;
    CBaseEntity::SetNextThink(this, v6, v4, 0);
  }
}


// CTriggerHurt::EndTouch  (line 943, @0x00000000023e1630, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, HasElement, Set, operator=
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CBaseTrigger::EndTouch, CTriggerHurt::HurtEntity
void __fastcall CTriggerHurt::EndTouch(CTriggerHurt *const this, CBaseEntity *pOther)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  float v6; // xmm1_4
  EHANDLE hOther; // [rsp+0h] [rbp-20h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0 )
  {
    hOther.m_Index = -1;
    if ( pOther != 0 )
    {
      m_pEntity = pOther->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v5 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hOther.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
      }
    }
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_hurtEntities, &hOther) < 0 )
      CTriggerHurt::HurtEntity(this, pOther, COERCE_DOUBLE(COERCE_UNSIGNED_INT(0.5 * this->m_flDamage)), v6);
  }
  CBaseTrigger::EndTouch(this, pOther);
}


// CTriggerHurt::HurtAllTouchers  (line 968, @0x00000000023e16f0, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CEntityInstance*, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CTriggerHurt::HurtEntity, CGlobalVarsBase::curtime
// callers: CTriggerHurt::RadiationThink, CTriggerHurt::HurtThink
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CTriggerHurt::HurtAllTouchers(CTriggerHurt *const this, float a2, double dt)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v5; // rbx
  float v6; // xmm1_4
  __int64 v7; // rbx
  unsigned int v8; // r13d
  CHandle<CBaseEntity> *v9; // rax
  uint32 m_Index; // edx
  __int16 v11; // cx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flDamageCap; // xmm1_4
  float v17; // xmm0_4
  float fldmg; // [rsp+Ch] [rbp-24h]

  fldmg = this->m_flDamage;
  if ( this->m_damageModel != 1 )
    fldmg = a2 * this->m_flDamage;
  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0, dt);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  this->m_flLastDmgTime = m_flCurrentTime;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hurtEntities);
  if ( this->m_hTouchingEntities.m_Size <= 0 )
  {
    if ( this->m_damageModel != 1 )
      return 0;
    goto LABEL_25;
  }
  v7 = 0;
  v8 = 0;
  do
  {
    v9 = &this->m_hTouchingEntities.m_Memory.m_pMemory[v7];
    m_Index = v9->m_Index;
    if ( v9->m_Index + 2 > 1 )
    {
      v11 = v9->m_Index;
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[v11 & 0x1FF];
        if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
          v8 -= (CTriggerHurt::HurtEntity(this, v13->m_pInstance, COERCE_DOUBLE(LODWORD(fldmg)), v6) == 0) - 1;
      }
    }
    ++v7;
  }
  while ( v7 < this->m_hTouchingEntities.m_Size );
  if ( this->m_damageModel != 1 )
    return v8;
  if ( v8 == 0 )
  {
LABEL_25:
    if ( CGlobalVarsBase::curtime(gpGlobals, 0) > this->m_flDmgResetTime )
    {
      v8 = 0;
      this->m_flDamage = this->m_flOriginalDamage;
      return v8;
    }
    return 0;
  }
  m_flDamageCap = this->m_flDamageCap;
  v17 = this->m_flDamage + this->m_flDamage;
  this->m_flDamage = v17;
  if ( v17 > m_flDamageCap )
    this->m_flDamage = m_flDamageCap;
  this->m_flDmgResetTime = CGlobalVarsBase::curtime(gpGlobals, 0) + 3.0;
  return v8;
}


// CTriggerHurt::Touch  (line 1032, @0x00000000023c1630, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CTriggerHurt::HurtThink(void)
void __fastcall CTriggerHurt::Touch(CTriggerHurt *const this, CBaseEntity *pOther)
{
  double v3; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this->m_think.__pfn == 0 )
  {
    CBaseEntity::ThinkSet(this, CTriggerHurt::HurtThink, 0.0, 0, 0);
    v4 = 0.0;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v4 = LODWORD(v5->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v4, v3, 0);
  }
}


// CTriggerSndSosOpvar::GetDataDescMap  (line 1048, @0x00000000023bb2e0, libserver.so)
// globals: CTriggerSndSosOpvar::m_DataMap
datamap_t *__fastcall CTriggerSndSosOpvar::GetDataDescMap(CTriggerSndSosOpvar *const this)
{
  return &CTriggerSndSosOpvar::m_DataMap;
}


// CTriggerSndSosOpvar::AddDatadescMetadataKeys  (line 1048, @0x00000000023d0100, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerSndSosOpvar::GetEntityClass(void)
void __fastcall CTriggerSndSosOpvar::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerSndSosOpvar::GetEntityClass);
}


// CTriggerSndSosOpvar::GetBaseMap  (line 1048, @0x00000000023d0120, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerSndSosOpvar::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerSndSosOpvar>  (line 1048, @0x00000000023dee00, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerSndSosOpvar"
// globals: `guard variable for'DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder, `guard variable for'DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::dataDesc, CBaseTrigger::m_DataMap, CTriggerSndSosOpvar::GetEntityClass(void), CTriggerSndSosOpvar::m_DataMap, DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_pszBase = "CTriggerSndSosOpvar";
    DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder,
      &_dso_handle);
  }
  CTriggerSndSosOpvar::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_nLenBase + 24);
    strcpy(
      stpcpy(v2, DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_pszBase),
      "SndSOSTriggerOpvarTouch");
    m_Size = DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::dataDesc[7].fieldName = v2;
    v6 = operator new[](DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_nLenBase + 27);
    strcpy(
      stpcpy(v6, DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_pszBase),
      "SndSosTriggerOpvarWaitOver");
    v7 = DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Memory,
        1);
      v8 = DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::dataDesc[8].fieldName = v6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::dataDesc);
  }
  CTriggerSndSosOpvar::m_DataMap.dataNumFields = 15;
  CTriggerSndSosOpvar::m_DataMap.dataDesc = &DataMapInit<CTriggerSndSosOpvar>(CTriggerSndSosOpvar *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerSndSosOpvar::m_DataMap, CTriggerSndSosOpvar::GetEntityClass);
  return &CTriggerSndSosOpvar::m_DataMap;
}


// CTriggerSndSosOpvar::Spawn  (line 1070, @0x00000000023d66f0, libserver.so)  // inlines: DistTo, FastSqrt, Length, String, ToCStr, V_strcpy_safe<256ul>, Vector, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator=
// calls: CCollisionProperty::EnableTouchPersistsNotification, CBaseTrigger::Spawn, CBaseTrigger::InitTrigger, CBaseEntity::GetAbsOrigin, CCollisionProperty::WorldToNormalizedSpace, CBaseEntity::GetAbsAngles, sincos, _V_strncpy
// globals: CTriggerSndSosOpvar::SndSOSTriggerOpvarTouch(CBaseEntity *)
void __fastcall CTriggerSndSosOpvar::Spawn(CTriggerSndSosOpvar *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  const QAngle *AbsAngles; // rax
  __m128d v6; // xmm0
  __m128d v7; // xmm1
  vec_t v8; // xmm5_4
  vec_t v9; // xmm4_4
  const char *m_pAsString; // rsi
  bool v11; // zf
  const char *v12; // rsi
  const char *v13; // rsi
  double m_flCenterSize; // [rsp+8h] [rbp-58h]
  double cosx; // [rsp+10h] [rbp-50h] BYREF
  double sinx; // [rsp+18h] [rbp-48h] BYREF
  Vector vecNormCenter; // [rsp+20h] [rbp-40h] BYREF
  Vector vecRadius; // [rsp+30h] [rbp-30h] BYREF

  p_m_Collision = &this->m_Collision;
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CBaseTrigger::Spawn(this, pKeyValues);
  if ( this->m_flWait <= 0.0 )
    this->m_flWait = 0.2;
  CBaseTrigger::InitTrigger(this, pKeyValues);
  this->m_pfnTouch.__pfn = CTriggerSndSosOpvar::SndSOSTriggerOpvarTouch;
  this->m_pfnTouch.__delta = 0;
  this->m_flPosition = *CBaseEntity::GetAbsOrigin(this);
  CCollisionProperty::WorldToNormalizedSpace(p_m_Collision, &this->m_flPosition, &this->m_VecNormPos);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  m_flCenterSize = this->m_flCenterSize;
  sincos(AbsAngles->y, &sinx, &cosx);
  v6 = _mm_cvtps_pd(LODWORD(this->m_flPosition.y));
  vecRadius.z = this->m_flPosition.z;
  v6.m128d_f64[0] = v6.m128d_f64[0] + sinx * m_flCenterSize;
  v7 = _mm_cvtps_pd(LODWORD(this->m_flPosition.x));
  v7.m128d_f64[0] = v7.m128d_f64[0] + m_flCenterSize * cosx;
  v8 = _mm_movedup_pd(v6).m128d_f64[0];
  vecRadius.y = v8;
  v9 = _mm_movedup_pd(v7).m128d_f64[0];
  vecRadius.x = v9;
  CCollisionProperty::WorldToNormalizedSpace(p_m_Collision, &vecRadius, &vecNormCenter);
  m_pAsString = "";
  v11 = this->m_opvarName.u.m_Id == 0;
  this->m_flNormCenterSize = fsqrt(
                               (((vecNormCenter.x - this->m_VecNormPos.x) * (vecNormCenter.x - this->m_VecNormPos.x))
                              + ((vecNormCenter.y - this->m_VecNormPos.y) * (vecNormCenter.y - this->m_VecNormPos.y)))
                             + ((vecNormCenter.z - this->m_VecNormPos.z) * (vecNormCenter.z - this->m_VecNormPos.z)));
  if ( !v11 )
    m_pAsString = this->m_opvarName.u.m_pAsString;
  _V_strncpy(this->m_opvarNameChar, m_pAsString, 256);
  v12 = "";
  if ( this->m_stackName.u.m_Id != 0 )
    v12 = this->m_stackName.u.m_pAsString;
  _V_strncpy(this->m_stackNameChar, v12, 256);
  v13 = "";
  if ( this->m_operatorName.u.m_Id != 0 )
    v13 = this->m_operatorName.u.m_pAsString;
  _V_strncpy(this->m_operatorNameChar, v13, 256);
}


// CTriggerSndSosOpvar::SndSosTriggerOpvarActivate  (line 1108, @0x00000000023e4650, libserver.so)  // inlines: curtime
// calls: CBaseEntity::GetNextThink, CTriggerSndSosOpvar::HandleTouchingEntities, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CTriggerSndSosOpvar::SndSOSTriggerOpvarTouch
// globals: CTriggerSndSosOpvar::SndSosTriggerOpvarWaitOver(void), CBaseEntity::SUB_Remove(void)
void __fastcall CTriggerSndSosOpvar::SndSosTriggerOpvarActivate(
        CTriggerSndSosOpvar *const this,
        CBaseEntity *pActivator)
{
  float NextThink; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v8; // xmm1_8
  double v9; // xmm1_8
  CGlobalVars *v10; // rbx
  double v11; // xmm0_8
  FnGlobalVarsWarningFunc v12; // rax
  CGlobalVars *v13; // rbx
  void (__fastcall *v14)(__int64); // rax
  double v15; // xmm0_8
  float v16; // [rsp+Ch] [rbp-24h]

  NextThink = CBaseEntity::GetNextThink(this, 0);
  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v16 = NextThink;
        (m_pfnWarningFunc)(1, NextThink, 0.0);
        NextThink = v16;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( NextThink <= m_flCurrentTime )
  {
    CTriggerSndSosOpvar::HandleTouchingEntities(this, pActivator);
    if ( this->m_flWait <= 0.0 )
    {
      this->m_pfnTouch.__pfn = 0;
      v13 = gpGlobals;
      this->m_pfnTouch.__delta = 0;
      if ( v13 != 0 )
      {
        if ( !v13->m_bEnableAssertions && !v13->m_bInSimulation )
        {
          v14 = v13->m_pfnWarningFunc;
          if ( v14 != 0 )
            v14(1);
        }
        HIDWORD(v15) = 0;
        *&v15 = v13->m_flCurrentTime + 0.1;
      }
      else
      {
        *&v15 = 1036831949;
      }
      CBaseEntity::SetNextThink(this, v15, v8, 0);
      CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
    }
    else
    {
      CBaseEntity::ThinkSet(this, CTriggerSndSosOpvar::SndSosTriggerOpvarWaitOver, 0.0, 0, 0);
      v10 = gpGlobals;
      v11 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v12 = gpGlobals->m_pfnWarningFunc;
          if ( v12 != 0 )
            (v12)(1, 0.0);
        }
        *&v11 = LODWORD(v10->m_flCurrentTime);
      }
      *&v11 = *&v11 + this->m_flWait;
      CBaseEntity::SetNextThink(this, v11, v9, 0);
    }
  }
}


// CTriggerSndSosOpvar::SndSosTriggerOpvarWaitOver  (line 1130, @0x00000000023bb8c0, libserver.so)
// calls: CBaseEntity::ThinkSet
void __fastcall CTriggerSndSosOpvar::SndSosTriggerOpvarWaitOver(CTriggerSndSosOpvar *const this)
{
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CTriggerSndSosOpvar::SndSOSTriggerOpvarTouch  (line 1135, @0x00000000023e47f0, libserver.so)
// calls: CTriggerSndSosOpvar::SndSosTriggerOpvarActivate
void __fastcall CTriggerSndSosOpvar::SndSOSTriggerOpvarTouch(CTriggerSndSosOpvar *const this, CBaseEntity *pActivator)
{
  CTriggerSndSosOpvar::SndSosTriggerOpvarActivate(this, pActivator);
}


// CTriggerSndSosOpvar::EndTouch  (line 1140, @0x00000000023e3e90, libserver.so)  // inlines: AllocateData, CEntityHandle, CHandle, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, Get, GetDataPtr, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, Set, V_memcpy, memcpy, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CSosFieldData, ~CSosFieldDataFloat
// calls: CBaseTrigger::EndTouch, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CSoundOpGameSystem::SetLibraryStackField, operator delete [], CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerSndSosOpvar::EndTouch(CTriggerSndSosOpvar *const this, CBaseEntity *pDeactivator)
{
  int v3; // ebx
  __int64 v4; // r12
  const CEntityInstance *m_pInstance; // r15
  CHandle<CBaseEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  _DWORD *p_m_pData; // rax
  CSosFieldData src; // [rsp+30h] [rbp-190h] BYREF
  CRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v17; // [rsp+188h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  CBaseTrigger::EndTouch(this, pDeactivator);
  v3 = this->m_hTouchingPlayers.m_Size - 1;
  if ( v3 >= 0 )
  {
    v4 = v3;
    while ( 1 )
    {
      v6 = &this->m_hTouchingPlayers.m_Memory.m_pMemory[v4];
      m_Index = v6->m_Index;
      if ( v6->m_Index + 2 > 1
        && (v8 = v6->m_Index,
            (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F]) != 0)
        && (v10 = &v9[v8 & 0x1FF]) != 0
        && m_Index == v10->m_EHandle.m_Index )
      {
        m_pInstance = v10->m_pInstance;
        *&src.m_fieldDataType = -1;
        if ( m_pInstance != 0 )
        {
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v13 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            *&src.m_fieldDataType = v13 | *&src.m_fieldDataType & 0x8000;
            *&src.m_fieldDataType = (v12 << 15) | *&src.m_fieldDataType & 0x7FFF;
          }
          goto LABEL_5;
        }
      }
      else
      {
        *&src.m_fieldDataType = -1;
      }
      m_pInstance = 0;
LABEL_5:
      if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
             &this->m_hTouchingEntities,
             &src) == -1 )
      {
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&this->m_hTouchingPlayers, v3);
        CRecipientFilter::CRecipientFilter(&filter);
        CRecipientFilter::AddRecipient(&filter, m_pInstance);
        src.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
        src.m_nAllocSize = 0;
        src.m_pData = 0;
        src.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
        src.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
        if ( src.m_nAllocSize <= 3 )
        {
          src.m_nAllocSize = 4;
LABEL_26:
          p_m_pData = &src.m_pData;
LABEL_19:
          *p_m_pData = 0;
          goto LABEL_20;
        }
        if ( src.m_nAllocSize <= 8 )
          goto LABEL_26;
        p_m_pData = src.m_pData;
        if ( src.m_pData != 0 )
          goto LABEL_19;
LABEL_20:
        CSoundOpGameSystem::SetLibraryStackField(
          g_pSoundOpGameSystem,
          &filter,
          this->m_stackNameChar,
          this->m_operatorNameChar,
          this->m_opvarNameChar,
          &src,
          0);
        if ( src.m_nAllocSize > 8 && src.m_pData != 0 )
          operator delete[](src.m_pData);
        --v3;
        --v4;
        CRecipientFilter::~CRecipientFilter(&filter);
        if ( v3 == -1 )
          return;
      }
      else
      {
        --v3;
        --v4;
        if ( v3 == -1 )
          return;
      }
    }
  }
}


// CTriggerSndSosOpvar::CalcOpvarValue  (line 1159, @0x00000000023d0130, libserver.so)  // inlines: DistTo, FastSqrt, Length, Min<float>, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CCollisionProperty::WorldToNormalizedSpace
// callers: CTriggerSndSosOpvar::HandleTouchingEntities
float __fastcall CTriggerSndSosOpvar::CalcOpvarValue(CTriggerSndSosOpvar *const this, double a2, vec_t a3)
{
  bool m_bVolIs2D; // al
  float v5; // xmm6_4
  float z; // xmm3_4
  float result; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  Vector vecPlayerPosa; // [rsp+10h] [rbp-30h] BYREF
  Vector vecPlayerNorm; // [rsp+20h] [rbp-20h] BYREF

  *&vecPlayerPosa.x = a2;
  vecPlayerPosa.z = a3;
  CCollisionProperty::WorldToNormalizedSpace(&this->m_Collision, &vecPlayerPosa, &vecPlayerNorm);
  m_bVolIs2D = this->m_bVolIs2D;
  if ( m_bVolIs2D )
  {
    z = this->m_VecNormPos.z;
    v5 = z;
  }
  else
  {
    v5 = this->m_VecNormPos.z;
    z = vecPlayerNorm.z;
  }
  result = 1.0;
  v8 = fminf(fminf(vecPlayerNorm.x, 1.0 - vecPlayerNorm.x), fminf(vecPlayerNorm.y, 1.0 - vecPlayerNorm.y));
  if ( !m_bVolIs2D )
    v8 = fminf(v8, fminf(z, 1.0 - z));
  v9 = fsqrt(
         (((vecPlayerNorm.x - this->m_VecNormPos.x) * (vecPlayerNorm.x - this->m_VecNormPos.x))
        + ((vecPlayerNorm.y - this->m_VecNormPos.y) * (vecPlayerNorm.y - this->m_VecNormPos.y)))
       + ((z - v5) * (z - v5)))
     - this->m_flNormCenterSize;
  if ( v9 > 0.0 )
    return fmaxf(0.0, v8 / (v9 + v8));
  return result;
}


// CTriggerSndSosOpvar::HandleTouchingEntities  (line 1208, @0x00000000023e41a0, libserver.so)  // inlines: AddToTail, AllocateData, CEntityHandle, CHandle, CSosFieldData, CSosFieldDataFloat, ClearData, CopyConstruct<CHandle<CBaseEntity> >, CopyData, Element, Get, GetBool, GetDataPtr, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, GrowMemory, IndexToIdentity, Init, IsValid, LookupEntity, Set, ToBasePlayer, V_memcpy, memcpy, operator CEntityInstance*, operator[], ~CSosFieldData, ~CSosFieldDataFloat
// calls: CBaseEntity::GetAbsOrigin, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CTriggerSndSosOpvar::CalcOpvarValue, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CSoundOpGameSystem::SetLibraryStackField, operator delete [], NDebugOverlay::Line, NDebugOverlay::Sphere, NDebugOverlay::EntityBounds, CRecipientFilter::~CRecipientFilter, CUtlMemory<CHandle<CBaseEntity>, int>::Grow (15 total)
// callers: CTriggerSndSosOpvar::SndSosTriggerOpvarActivate
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerSndSosOpvar::HandleTouchingEntities(CTriggerSndSosOpvar *const this, CBaseEntity *pActivator)
{
  __int64 v3; // r13
  int v4; // r12d
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const CBaseEntity *m_pInstance; // r14
  const Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  float *m_pData; // rax
  __int64 m_Size; // rax
  int v17; // edx
  CHandle<CBaseEntity> *v18; // rax
  CEntityIdentity *v19; // rdx
  int v20; // eax
  __int16 v21; // cx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hTouchingPlayers; // [rsp+10h] [rbp-1C0h]
  float flOpvar; // [rsp+2Ch] [rbp-1A4h]
  int flOpvara; // [rsp+2Ch] [rbp-1A4h]
  Vector vecPlayerPos; // [rsp+30h] [rbp-1A0h] BYREF
  CSosFieldData v26; // [rsp+40h] [rbp-190h] BYREF
  CRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v28; // [rsp+198h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  if ( this != -1448LL && this->m_hTouchingEntities.m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    p_m_hTouchingPlayers = &this->m_hTouchingPlayers;
    while ( 1 )
    {
      v5 = &this->m_hTouchingEntities.m_Memory.m_pMemory[v3];
      m_Index = v5->m_Index;
      if ( v5->m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 140))(v9->m_pInstance) != 0
              && (*(this->_vptr_IHandleEntity + 223))(this, m_pInstance) != 0 )
            {
              break;
            }
          }
        }
      }
LABEL_4:
      ++v4;
      ++v3;
      if ( this->m_hTouchingEntities.m_Size <= v4 )
        return;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    *&vecPlayerPos.x = *&AbsOrigin->x;
    *&AbsOrigin = AbsOrigin->z;
    *&v26.m_fieldDataType = -1;
    LODWORD(vecPlayerPos.z) = AbsOrigin;
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      *&v26.m_fieldDataType = v14 | *&v26.m_fieldDataType & 0x8000;
      *&v26.m_fieldDataType = (v13 << 15) | *&v26.m_fieldDataType & 0x7FFF;
    }
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(p_m_hTouchingPlayers, &v26) == -1 )
    {
      if ( (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
      {
        *&v26.m_fieldDataType = -1;
        v19 = m_pInstance->m_pEntity;
        if ( v19 != 0 )
        {
          v20 = (v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1);
          v21 = 0x7FFF;
          if ( v19->m_EHandle.m_Index != -1 )
            v21 = v19->m_EHandle.m_Index & 0x7FFF;
          *&v26.m_fieldDataType = v21 | *&v26.m_fieldDataType & 0x8000;
          *&v26.m_fieldDataType = (v20 << 15) | *&v26.m_fieldDataType & 0x7FFF;
        }
      }
      else
      {
        *&v26.m_fieldDataType = -1;
      }
      m_Size = this->m_hTouchingPlayers.m_Size;
      v17 = this->m_hTouchingPlayers.m_Size;
      if ( m_Size == this->m_hTouchingPlayers.m_Memory.m_nAllocationCount )
      {
        flOpvara = this->m_hTouchingPlayers.m_Size;
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hTouchingPlayers.m_Memory, 1);
        v17 = this->m_hTouchingPlayers.m_Size;
        m_Size = flOpvara;
      }
      this->m_hTouchingPlayers.m_Size = v17 + 1;
      v18 = &this->m_hTouchingPlayers.m_Memory.m_pMemory[m_Size];
      if ( v18 != 0 )
        v18->m_Index = *&v26.m_fieldDataType;
    }
    flOpvar = CTriggerSndSosOpvar::CalcOpvarValue(this, *&vecPlayerPos.x, vecPlayerPos.z);
    CRecipientFilter::CRecipientFilter(&filter);
    CRecipientFilter::AddRecipient(&filter, m_pInstance);
    v26.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    v26.m_nAllocSize = 0;
    v26.m_pData = 0;
    v26.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    v26.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    if ( v26.m_nAllocSize <= 3 )
    {
      v26.m_nAllocSize = 4;
    }
    else if ( v26.m_nAllocSize > 8 )
    {
      m_pData = v26.m_pData;
      if ( v26.m_pData == 0 )
        goto LABEL_21;
      goto LABEL_20;
    }
    m_pData = &v26.m_pData;
LABEL_20:
    *m_pData = flOpvar;
LABEL_21:
    CSoundOpGameSystem::SetLibraryStackField(
      g_pSoundOpGameSystem,
      &filter,
      this->m_stackNameChar,
      this->m_operatorNameChar,
      this->m_opvarNameChar,
      &v26,
      0);
    if ( v26.m_nAllocSize > 8 && v26.m_pData != 0 )
      operator delete[](v26.m_pData);
    if ( snd_sos_debug_trigger_opvar.m_pParent->m_Value.m_nValue != 0 )
    {
      NDebugOverlay::Line(&vecPlayerPos, &this->m_flPosition, 0x96u, 0, 0xFFu, 1, this->m_flWait);
      NDebugOverlay::Sphere(
        &this->m_flPosition,
        COERCE_DOUBLE(LODWORD(this->m_flCenterSize)),
        0x96u,
        0,
        0xFFu,
        1,
        this->m_flWait);
      NDebugOverlay::EntityBounds(this, 0, 255, 0, 20, this->m_flWait);
    }
    CRecipientFilter::~CRecipientFilter(&filter);
    goto LABEL_4;
  }
}


// CTriggerMultiple::GetDataDescMap  (line 1249, @0x00000000023bb2f0, libserver.so)
// globals: CTriggerMultiple::m_DataMap
datamap_t *__fastcall CTriggerMultiple::GetDataDescMap(CTriggerMultiple *const this)
{
  return &CTriggerMultiple::m_DataMap;
}


// CTriggerMultiple::AddDatadescMetadataKeys  (line 1249, @0x00000000023d0230, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerMultiple::GetEntityClass(void)
void __fastcall CTriggerMultiple::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerMultiple::GetEntityClass);
}


// CTriggerMultiple::GetBaseMap  (line 1249, @0x00000000023d0250, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerMultiple::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerMultiple>  (line 1249, @0x00000000023df080, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerMultiple"
// globals: `guard variable for'DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder, `guard variable for'DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::dataDesc, CBaseTrigger::m_DataMap, CTriggerMultiple::GetEntityClass(void), CTriggerMultiple::m_DataMap, DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerMultiple>(CTriggerMultiple *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_pszBase = "CTriggerMultiple";
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder,
      &_dso_handle);
  }
  CTriggerMultiple::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_pszBase), "MultiTouch");
    m_Size = DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::dataDesc[1].fieldName = v2;
    v6 = operator new[](DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_nLenBase + 14);
    strcpy(stpcpy(v6, DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_pszBase), "MultiWaitOver");
    v7 = DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::dataDesc[2].fieldName = v6;
    DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::dataDesc[3].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::dataDesc);
  }
  CTriggerMultiple::m_DataMap.dataNumFields = 3;
  CTriggerMultiple::m_DataMap.dataDesc = &DataMapInit<CTriggerMultiple>(CTriggerMultiple *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerMultiple::m_DataMap, CTriggerMultiple::GetEntityClass);
  return &CTriggerMultiple::m_DataMap;
}


// CScriptTriggerMultiple::~CScriptTriggerMultiple  (line 1280, @0x00000000023f6310, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerMultiple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CScriptTriggerMultiple::~CScriptTriggerMultiple(CScriptTriggerMultiple *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CScriptTriggerMultiple::~CScriptTriggerMultiple  (line 1280, @0x00000000023f6f00, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CScriptTriggerMultiple, ~CTriggerMultiple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CScriptTriggerMultiple::~CScriptTriggerMultiple(CScriptTriggerMultiple *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CScriptTriggerMultiple::GetEntityClass  (line 1282, @0x00000000023e5fe0, libserver.so)
CEntityClass *__cdecl CScriptTriggerMultiple::GetEntityClass()
{
  return g_pEntityCScriptTriggerMultipleClass;
}


// CScriptTriggerMultiple::Schema_DynamicBinding  (line 1282, @0x00000000023e5ff0, libserver.so)
// globals: CScriptTriggerMultiple::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptTriggerMultiple::Schema_DynamicBinding(
        const CScriptTriggerMultiple *const this)
{
  return CScriptTriggerMultiple::s_pSchemaBinding;
}


// CScriptTriggerMultiple::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1282, @0x00000000023e6000, libserver.so)
// globals: CScriptTriggerMultiple::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptTriggerMultiple::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CScriptTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  return CScriptTriggerMultiple::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CScriptTriggerMultiple::CEntityInstanceEntityClass::DestructInstance  (line 1282, @0x00000000023e6010, libserver.so)  // inlines: Destruct<CScriptTriggerMultiple>
void __fastcall CScriptTriggerMultiple::CEntityInstanceEntityClass::DestructInstance(
        CScriptTriggerMultiple::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CScriptTriggerMultiple::CEntityInstanceEntityClass::FreeInstance  (line 1282, @0x00000000023e6030, libserver.so)
void __fastcall CScriptTriggerMultiple::CEntityInstanceEntityClass::FreeInstance(
        CScriptTriggerMultiple::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CScriptTriggerMultiple::CEntityInstanceEntityClass::CanAllocate  (line 1282, @0x00000000023e6050, libserver.so)
bool __fastcall CScriptTriggerMultiple::CEntityInstanceEntityClass::CanAllocate(
        const CScriptTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CScriptTriggerMultiple::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1282, @0x00000000023e6060, libserver.so)
// globals: CScriptTriggerMultiple::s_pSchemaBinding
const ISchemaBinding *__fastcall CScriptTriggerMultiple::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CScriptTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  return CScriptTriggerMultiple::s_pSchemaBinding;
}


// CScriptTriggerMultiple::CEntityInstanceEntityClass::AllocateInstance  (line 1282, @0x00000000023e8330, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CScriptTriggerMultiple::CEntityInstanceEntityClass::AllocateInstance(
        CScriptTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1520);
  memset(v1, 0, 0x5F0u);
  return v1;
}


// CScriptTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1282, @0x00000000023ea010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CScriptTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CScriptTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1282, @0x00000000023ea030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CScriptTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptTriggerMultiple::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CScriptTriggerMultiple::CEntityInstanceEntityClass::ConstructInstance  (line 1282, @0x00000000023f1360, libserver.so)  // inlines: CEntityIOOutput, CScriptTriggerMultiple, CTriggerMultiple, Construct<CScriptTriggerMultiple>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CScriptTriggerMultiple::CEntityInstanceEntityClass::ConstructInstance(
        CScriptTriggerMultiple::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 185) = off_3F7C190;
    *p = &off_40C06D0;
  }
  return p;
}


// CScriptTriggerMultiple::GetEntityClassInternal  (line 1282, @0x00000000023f1aa0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CTriggerMultiple::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "script_trigger_multiple", "CScriptTriggerMultiple"
// globals: `guard variable for'CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass, CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass, __dso_handle, CScriptTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CScriptTriggerMultiple::GetEntityClassInfo(void)::g_EntityCScriptTriggerMultipleClassInfo, CScriptTriggerMultiple::GetEntityClassInfo(void)::g_EntityCScriptTriggerMultipleClassInfo
CEntityClass *__cdecl CScriptTriggerMultiple::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass);
    CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass._vptr_CEntityClass = off_40C0650;
    __cxa_guard_release(&`guard variable for'CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass);
    __cxa_atexit(
      CScriptTriggerMultiple::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass,
      &_dso_handle);
  }
  if ( g_pEntityCScriptTriggerMultipleClass != 0 )
    return &CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass;
  if ( `guard variable for'CScriptTriggerMultiple::GetEntityClassInfo(void)::g_EntityCScriptTriggerMultipleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptTriggerMultiple::GetEntityClassInfo(void)::g_EntityCScriptTriggerMultipleClassInfo) != 0 )
  {
    EntityClassInfo = CTriggerMultiple::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CScriptTriggerMultiple::GetEntityClassInfo(void)::g_EntityCScriptTriggerMultipleClassInfo,
      "CScriptTriggerMultiple",
      "script_trigger_multiple",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CScriptTriggerMultiple::GetEntityClassInfo(void)::g_EntityCScriptTriggerMultipleClassInfo);
  }
  CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass.m_pClassInfo = &CScriptTriggerMultiple::GetEntityClassInfo(void)::g_EntityCScriptTriggerMultipleClassInfo;
  CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass.m_pBaseClassInfo = CScriptTriggerMultiple::GetEntityClassInfo(void)::g_EntityCScriptTriggerMultipleClassInfo.m_pBaseClassInfo;
  g_pEntityCScriptTriggerMultipleClass = &CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass;
  CScriptTriggerMultiple::GetEntityClassInfo(void)::g_EntityCScriptTriggerMultipleClassInfo.m_pClass = &CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass;
  CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCScriptTriggerMultipleClass->m_pComponentOverrides = 0;
  return &CScriptTriggerMultiple::GetEntityClassInternal(void)::g_EntityCScriptTriggerMultipleClass;
}


// CScriptTriggerMultiple::Spawn  (line 1285, @0x00000000023f5cd0, libserver.so)  // inlines: operator-
// calls: CCollisionProperty::SetupPhysicsFromUnscaledOBB, CTriggerMultiple::Spawn
void __fastcall CScriptTriggerMultiple::Spawn(CScriptTriggerMultiple *const this, const CEntityKeyValues *pKeyValues)
{
  float y; // xmm2_4
  float x; // xmm3_4
  Vector vMins; // [rsp+0h] [rbp-20h] BYREF

  y = this->m_vExtent.y;
  x = this->m_vExtent.x;
  vMins.z = -this->m_vExtent.z;
  vMins.y = -y;
  vMins.x = -x;
  CCollisionProperty::SetupPhysicsFromUnscaledOBB(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    2,
    &vMins,
    &this->m_vExtent);
  CTriggerMultiple::Spawn(this, pKeyValues);
}


// CScriptTriggerMultiple::GetDataDescMap  (line 1294, @0x00000000023bb300, libserver.so)
// globals: CScriptTriggerMultiple::m_DataMap
datamap_t *__fastcall CScriptTriggerMultiple::GetDataDescMap(CScriptTriggerMultiple *const this)
{
  return &CScriptTriggerMultiple::m_DataMap;
}


// CScriptTriggerMultiple::AddDatadescMetadataKeys  (line 1294, @0x00000000023d0260, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CScriptTriggerMultiple::GetEntityClass(void)
void __fastcall CScriptTriggerMultiple::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CScriptTriggerMultiple::GetEntityClass);
}


// CScriptTriggerMultiple::GetBaseMap  (line 1294, @0x00000000023d0280, libserver.so)
// globals: CTriggerMultiple::m_DataMap
datamap_t *__cdecl CScriptTriggerMultiple::GetBaseMap()
{
  return &CTriggerMultiple::m_DataMap;
}


// DataMapInit<CScriptTriggerMultiple>  (line 1294, @0x00000000023d0290, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CScriptTriggerMultiple"
// globals: `guard variable for'DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder, CTriggerMultiple::m_DataMap, CScriptTriggerMultiple::GetEntityClass(void), CScriptTriggerMultiple::m_DataMap, DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder) != 0 )
  {
    DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder.m_pszBase = "CScriptTriggerMultiple";
    DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::nameHolder,
      &_dso_handle);
  }
  CScriptTriggerMultiple::m_DataMap.dataNumFields = 1;
  CScriptTriggerMultiple::m_DataMap.baseMap = &CTriggerMultiple::m_DataMap;
  CScriptTriggerMultiple::m_DataMap.dataDesc = &DataMapInit<CScriptTriggerMultiple>(CScriptTriggerMultiple *)::dataDesc[1];
  AddDatadescMetadataKeys(&CScriptTriggerMultiple::m_DataMap, CScriptTriggerMultiple::GetEntityClass);
  return &CScriptTriggerMultiple::m_DataMap;
}


// CTriggerMultiple::CTriggerMultiple  (line 1301, @0x00000000023d0360, libserver.so)  // inlines: CEntityIOOutput
// calls: CBaseTrigger::CBaseTrigger
// callers: CTriggerMultiple::CEntityInstanceEntityClass::ConstructInstance, CDOTA_HeroTrigger::CEntityInstanceEntityClass::ConstructInstance, CTriggerDota::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CTriggerMultiple::CTriggerMultiple(CTriggerMultiple *const this)
{
  CBaseTrigger::CBaseTrigger(this);
  this->_vptr_IHandleEntity = &off_40C0DF0;
  this->m_OnTrigger._vptr_CEntityIOOutput = off_3F7C190;
}


// CTriggerMultiple::Spawn  (line 1313, @0x00000000023d6920, libserver.so)
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
// callers: CScriptTriggerMultiple::Spawn, CTriggerOnce::Spawn, CScriptTriggerOnce::Spawn, CTriggerLook::Spawn, CTriggerImpact::Spawn, CTriggerDota::Spawn, CDOTA_HeroTrigger::Spawn
// globals: CTriggerMultiple::MultiTouch(CBaseEntity *)
void __fastcall CTriggerMultiple::Spawn(CTriggerMultiple *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
  if ( this->m_flWait == 0.0 )
    this->m_flWait = 0.2;
  this->m_pfnTouch.__delta = 0;
  this->m_pfnTouch.__pfn = CTriggerMultiple::MultiTouch;
}


// CTriggerMultiple::MultiTouch  (line 1456, @0x00000000023db140, libserver.so)
// calls: CTriggerMultiple::ActivateMultiTrigger
void __fastcall CTriggerMultiple::MultiTouch(CTriggerMultiple *const this, CBaseEntity *pOther)
{
  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0 )
    CTriggerMultiple::ActivateMultiTrigger(this, pOther);
}


// CTriggerMultiple::ActivateMultiTrigger  (line 1584, @0x00000000023dae50, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, curtime, operator CEntityInstance*, operator=, ~CVariantBase
// calls: CBaseEntity::GetNextThink, CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CTriggerMultiple::MultiTouch, CDOTA_HeroTrigger::ActivateMultiTrigger
// globals: CEntityHandle::gm_pEntityList, CTriggerMultiple::MultiWaitOver(void), CBaseEntity::SUB_Remove(void)
void __fastcall CTriggerMultiple::ActivateMultiTrigger(CTriggerMultiple *const this, CBaseEntity *pActivator)
{
  float NextThink; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v6; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  CConcreteEntityList *v10; // rsi
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v14; // rdx
  double v15; // xmm1_8
  double v16; // xmm1_8
  CGlobalVars *v17; // r12
  double v18; // xmm0_8
  FnGlobalVarsWarningFunc v19; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v21; // r12
  void (__fastcall *v22)(__int64); // rax
  double v23; // xmm0_8
  float v24; // [rsp+Ch] [rbp-34h]
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  NextThink = CBaseEntity::GetNextThink(this, 0);
  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v24 = NextThink;
        (m_pfnWarningFunc)(1, NextThink, 0.0);
        NextThink = v24;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( NextThink <= m_flCurrentTime )
  {
    if ( pActivator != 0 && (m_pEntity = pActivator->m_pEntity) != 0 )
    {
      v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v10 = CEntityHandle::gm_pEntityList;
      LOWORD(this->m_hActivator.m_Index) = v9 | this->m_hActivator.m_Index & 0x8000;
      v11 = (v8 << 15) | this->m_hActivator.m_Index & 0x7FFF;
      this->m_hActivator.m_Index = v11;
      if ( v11 + 2 > 1 && (v12 = v10->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F]) != 0 )
      {
        m_pInstance = 0;
        v14 = &v12[this->m_hActivator.m_Index & 0x1FF];
        if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
          m_pInstance = v14->m_pInstance;
      }
      else
      {
        m_pInstance = 0;
      }
    }
    else
    {
      this->m_hActivator.m_Index = -1;
      m_pInstance = 0;
    }
    value.m_uint64 = 0;
    value.m_type = 0;
    value.m_flags = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_flWait <= 0.0 )
    {
      this->m_pfnTouch.__pfn = 0;
      v21 = gpGlobals;
      this->m_pfnTouch.__delta = 0;
      if ( v21 != 0 )
      {
        if ( !v21->m_bEnableAssertions && !v21->m_bInSimulation )
        {
          v22 = v21->m_pfnWarningFunc;
          if ( v22 != 0 )
            v22(1);
        }
        HIDWORD(v23) = 0;
        *&v23 = v21->m_flCurrentTime + 0.1;
      }
      else
      {
        *&v23 = 1036831949;
      }
      CBaseEntity::SetNextThink(this, v23, v15, 0);
      CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
    }
    else
    {
      CBaseEntity::ThinkSet(this, CTriggerMultiple::MultiWaitOver, 0.0, 0, 0);
      v17 = gpGlobals;
      v18 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v19 = gpGlobals->m_pfnWarningFunc;
          if ( v19 != 0 )
            (v19)(1, 0.0);
        }
        *&v18 = LODWORD(v17->m_flCurrentTime);
      }
      *&v18 = *&v18 + this->m_flWait;
      CBaseEntity::SetNextThink(this, v18, v16, 0);
    }
  }
}


// CTriggerMultiple::PassesTriggerFilters  (line 1612, @0x00000000023cfad0, libserver.so)
// calls: CBaseTrigger::PassesTriggerFilters
bool __fastcall CTriggerMultiple::PassesTriggerFilters(CTriggerMultiple *const this, CBaseEntity *pOther)
{
  return CBaseTrigger::PassesTriggerFilters(this, pOther);
}


// CTriggerMultiple::MultiWaitOver  (line 1687, @0x00000000023bb8e0, libserver.so)
// calls: CBaseEntity::ThinkSet
void __fastcall CTriggerMultiple::MultiWaitOver(CTriggerMultiple *const this)
{
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CTriggerOnce::~CTriggerOnce  (line 1695, @0x00000000023f62a0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerMultiple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerOnce::~CTriggerOnce(CTriggerOnce *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerOnce::~CTriggerOnce  (line 1695, @0x00000000023f6e00, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerMultiple, ~CTriggerOnce, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerOnce::~CTriggerOnce(CTriggerOnce *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerOnce::GetEntityClass  (line 1697, @0x00000000023e6070, libserver.so)
CEntityClass *__cdecl CTriggerOnce::GetEntityClass()
{
  return g_pEntityCTriggerOnceClass;
}


// CTriggerOnce::Schema_DynamicBinding  (line 1697, @0x00000000023e6080, libserver.so)
// globals: CTriggerOnce::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerOnce::Schema_DynamicBinding(const CTriggerOnce *const this)
{
  return CTriggerOnce::s_pSchemaBinding;
}


// CTriggerOnce::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1697, @0x00000000023e6090, libserver.so)
// globals: CTriggerOnce::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerOnce::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerOnce::CEntityInstanceEntityClass *const this)
{
  return CTriggerOnce::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerOnce::CEntityInstanceEntityClass::DestructInstance  (line 1697, @0x00000000023e60a0, libserver.so)  // inlines: Destruct<CTriggerOnce>
void __fastcall CTriggerOnce::CEntityInstanceEntityClass::DestructInstance(
        CTriggerOnce::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerOnce::CEntityInstanceEntityClass::FreeInstance  (line 1697, @0x00000000023e60c0, libserver.so)
void __fastcall CTriggerOnce::CEntityInstanceEntityClass::FreeInstance(
        CTriggerOnce::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerOnce::CEntityInstanceEntityClass::CanAllocate  (line 1697, @0x00000000023e60e0, libserver.so)
bool __fastcall CTriggerOnce::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerOnce::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerOnce::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1697, @0x00000000023e60f0, libserver.so)
// globals: CTriggerOnce::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerOnce::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerOnce::CEntityInstanceEntityClass *const this)
{
  return CTriggerOnce::s_pSchemaBinding;
}


// CTriggerOnce::CEntityInstanceEntityClass::AllocateInstance  (line 1697, @0x00000000023e8370, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerOnce::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerOnce::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1504);
  memset(v1, 0, 0x5E0u);
  return v1;
}


// CTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1697, @0x00000000023ea060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerOnce::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1697, @0x00000000023ea080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerOnce::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerOnce::CEntityInstanceEntityClass::ConstructInstance  (line 1697, @0x00000000023f13a0, libserver.so)  // inlines: CEntityIOOutput, CTriggerMultiple, CTriggerOnce, Construct<CTriggerOnce>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerOnce::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerOnce::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 185) = off_3F7C190;
    *p = &off_40C1590;
  }
  return p;
}


// CTriggerOnce::GetEntityClassInfo  (line 1697, @0x00000000023f1bf0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseTrigger::GetEntityClassInfo
// callers: CScriptTriggerOnce::GetEntityClassInternal, CTriggerLook::GetEntityClassInternal
// strings: "CTriggerOnce", "CTriggerMultiple"
// globals: `guard variable for'CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo, CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo, `guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo, CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo
CEntityClassInfo *__cdecl CTriggerOnce::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo != 0 )
    return &CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo) == 0 )
    return &CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo;
  if ( `guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo,
      "CTriggerMultiple",
      "trigger_multiple",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo,
    "CTriggerOnce",
    "trigger_once",
    0,
    &CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo);
  __cxa_guard_release(&`guard variable for'CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo);
  return &CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo;
}


// CTriggerOnce::GetEntityClassInternal  (line 1697, @0x00000000023f1cc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseTrigger::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerOnce", "CTriggerMultiple"
// globals: `guard variable for'CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass, CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass, __dso_handle, CTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo, CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo, `guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo, CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo
CEntityClass *__cdecl CTriggerOnce::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass);
    CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass._vptr_CEntityClass = off_40C1510;
    __cxa_guard_release(&`guard variable for'CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass);
    __cxa_atexit(
      CTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerOnceClass != 0 )
    return &CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass;
  if ( `guard variable for'CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo) != 0 )
  {
    if ( `guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo,
        "CTriggerMultiple",
        "trigger_multiple",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo,
      "CTriggerOnce",
      "trigger_once",
      0,
      &CTriggerMultiple::GetEntityClassInfo(void)::g_EntityCTriggerMultipleClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo);
  }
  CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass.m_pClassInfo = &CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo;
  CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass.m_pBaseClassInfo = CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerOnceClass = &CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass;
  CTriggerOnce::GetEntityClassInfo(void)::g_EntityCTriggerOnceClassInfo.m_pClass = &CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass;
  CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerOnceClass->m_pComponentOverrides = 0;
  return &CTriggerOnce::GetEntityClassInternal(void)::g_EntityCTriggerOnceClass;
}


// CTriggerOnce::Spawn  (line 1704, @0x00000000023d6980, libserver.so)
// calls: CTriggerMultiple::Spawn
void __fastcall CTriggerOnce::Spawn(CTriggerOnce *const this, const CEntityKeyValues *pKeyValues)
{
  CTriggerMultiple::Spawn(this, pKeyValues);
  this->m_flWait = -1.0;
}


// CTriggerOnce::GetDataDescMap  (line 1711, @0x00000000023bb310, libserver.so)
// globals: CTriggerOnce::m_DataMap
datamap_t *__fastcall CTriggerOnce::GetDataDescMap(CTriggerOnce *const this)
{
  return &CTriggerOnce::m_DataMap;
}


// CTriggerOnce::AddDatadescMetadataKeys  (line 1711, @0x00000000023d0390, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerOnce::GetEntityClass(void)
void __fastcall CTriggerOnce::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerOnce::GetEntityClass);
}


// CTriggerOnce::GetBaseMap  (line 1711, @0x00000000023d03b0, libserver.so)
// globals: CTriggerMultiple::m_DataMap
datamap_t *__cdecl CTriggerOnce::GetBaseMap()
{
  return &CTriggerMultiple::m_DataMap;
}


// DataMapInit<CTriggerOnce>  (line 1711, @0x00000000023d03c0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerOnce"
// globals: `guard variable for'DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder, CTriggerMultiple::m_DataMap, CTriggerOnce::GetEntityClass(void), DataMapInit<CTriggerOnce>(CTriggerOnce *)::dataDesc, CTriggerOnce::m_DataMap, DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerOnce>(CTriggerOnce *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder.m_pszBase = "CTriggerOnce";
    DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerOnce>(CTriggerOnce *)::nameHolder,
      &_dso_handle);
  }
  CTriggerOnce::m_DataMap.dataNumFields = 1;
  CTriggerOnce::m_DataMap.baseMap = &CTriggerMultiple::m_DataMap;
  CTriggerOnce::m_DataMap.dataDesc = DataMapInit<CTriggerOnce>(CTriggerOnce *)::dataDesc;
  AddDatadescMetadataKeys(&CTriggerOnce::m_DataMap, CTriggerOnce::GetEntityClass);
  return &CTriggerOnce::m_DataMap;
}


// CScriptTriggerOnce::~CScriptTriggerOnce  (line 1717, @0x00000000023f6690, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerMultiple, ~CTriggerOnce, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CScriptTriggerOnce::~CScriptTriggerOnce(CScriptTriggerOnce *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CScriptTriggerOnce::~CScriptTriggerOnce  (line 1717, @0x00000000023f7000, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CScriptTriggerOnce, ~CTriggerMultiple, ~CTriggerOnce, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CScriptTriggerOnce::~CScriptTriggerOnce(CScriptTriggerOnce *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CScriptTriggerOnce::GetEntityClass  (line 1719, @0x00000000023e6100, libserver.so)
CEntityClass *__cdecl CScriptTriggerOnce::GetEntityClass()
{
  return g_pEntityCScriptTriggerOnceClass;
}


// CScriptTriggerOnce::Schema_DynamicBinding  (line 1719, @0x00000000023e6110, libserver.so)
// globals: CScriptTriggerOnce::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptTriggerOnce::Schema_DynamicBinding(
        const CScriptTriggerOnce *const this)
{
  return CScriptTriggerOnce::s_pSchemaBinding;
}


// CScriptTriggerOnce::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1719, @0x00000000023e6120, libserver.so)
// globals: CScriptTriggerOnce::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptTriggerOnce::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CScriptTriggerOnce::CEntityInstanceEntityClass *const this)
{
  return CScriptTriggerOnce::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CScriptTriggerOnce::CEntityInstanceEntityClass::DestructInstance  (line 1719, @0x00000000023e6130, libserver.so)  // inlines: Destruct<CScriptTriggerOnce>
void __fastcall CScriptTriggerOnce::CEntityInstanceEntityClass::DestructInstance(
        CScriptTriggerOnce::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CScriptTriggerOnce::CEntityInstanceEntityClass::FreeInstance  (line 1719, @0x00000000023e6150, libserver.so)
void __fastcall CScriptTriggerOnce::CEntityInstanceEntityClass::FreeInstance(
        CScriptTriggerOnce::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CScriptTriggerOnce::CEntityInstanceEntityClass::CanAllocate  (line 1719, @0x00000000023e6170, libserver.so)
bool __fastcall CScriptTriggerOnce::CEntityInstanceEntityClass::CanAllocate(
        const CScriptTriggerOnce::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CScriptTriggerOnce::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1719, @0x00000000023e6180, libserver.so)
// globals: CScriptTriggerOnce::s_pSchemaBinding
const ISchemaBinding *__fastcall CScriptTriggerOnce::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CScriptTriggerOnce::CEntityInstanceEntityClass *const this)
{
  return CScriptTriggerOnce::s_pSchemaBinding;
}


// CScriptTriggerOnce::CEntityInstanceEntityClass::AllocateInstance  (line 1719, @0x00000000023e83b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CScriptTriggerOnce::CEntityInstanceEntityClass::AllocateInstance(
        CScriptTriggerOnce::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1520);
  memset(v1, 0, 0x5F0u);
  return v1;
}


// CScriptTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1719, @0x00000000023ea0b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CScriptTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptTriggerOnce::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CScriptTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1719, @0x00000000023ea0d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CScriptTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptTriggerOnce::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CScriptTriggerOnce::CEntityInstanceEntityClass::ConstructInstance  (line 1719, @0x00000000023f13e0, libserver.so)  // inlines: CEntityIOOutput, CScriptTriggerOnce, CTriggerMultiple, CTriggerOnce, Construct<CScriptTriggerOnce>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CScriptTriggerOnce::CEntityInstanceEntityClass::ConstructInstance(
        CScriptTriggerOnce::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 185) = off_3F7C190;
    *p = &off_40C1D30;
  }
  return p;
}


// CScriptTriggerOnce::GetEntityClassInternal  (line 1719, @0x00000000023f1e50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CTriggerOnce::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "script_trigger_once", "CScriptTriggerOnce"
// globals: `guard variable for'CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass, CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass, __dso_handle, CScriptTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CScriptTriggerOnce::GetEntityClassInfo(void)::g_EntityCScriptTriggerOnceClassInfo, CScriptTriggerOnce::GetEntityClassInfo(void)::g_EntityCScriptTriggerOnceClassInfo
CEntityClass *__cdecl CScriptTriggerOnce::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass);
    CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass._vptr_CEntityClass = off_40C1CB0;
    __cxa_guard_release(&`guard variable for'CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass);
    __cxa_atexit(
      CScriptTriggerOnce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass,
      &_dso_handle);
  }
  if ( g_pEntityCScriptTriggerOnceClass != 0 )
    return &CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass;
  if ( `guard variable for'CScriptTriggerOnce::GetEntityClassInfo(void)::g_EntityCScriptTriggerOnceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptTriggerOnce::GetEntityClassInfo(void)::g_EntityCScriptTriggerOnceClassInfo) != 0 )
  {
    EntityClassInfo = CTriggerOnce::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CScriptTriggerOnce::GetEntityClassInfo(void)::g_EntityCScriptTriggerOnceClassInfo,
      "CScriptTriggerOnce",
      "script_trigger_once",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CScriptTriggerOnce::GetEntityClassInfo(void)::g_EntityCScriptTriggerOnceClassInfo);
  }
  CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass.m_pClassInfo = &CScriptTriggerOnce::GetEntityClassInfo(void)::g_EntityCScriptTriggerOnceClassInfo;
  CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass.m_pBaseClassInfo = CScriptTriggerOnce::GetEntityClassInfo(void)::g_EntityCScriptTriggerOnceClassInfo.m_pBaseClassInfo;
  g_pEntityCScriptTriggerOnceClass = &CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass;
  CScriptTriggerOnce::GetEntityClassInfo(void)::g_EntityCScriptTriggerOnceClassInfo.m_pClass = &CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass;
  CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCScriptTriggerOnceClass->m_pComponentOverrides = 0;
  return &CScriptTriggerOnce::GetEntityClassInternal(void)::g_EntityCScriptTriggerOnceClass;
}


// CScriptTriggerOnce::Spawn  (line 1722, @0x00000000023f5d50, libserver.so)  // inlines: Spawn, operator-
// calls: CCollisionProperty::SetupPhysicsFromUnscaledOBB, CTriggerMultiple::Spawn
void __fastcall CScriptTriggerOnce::Spawn(CScriptTriggerOnce *const this, const CEntityKeyValues *pKeyValues)
{
  float y; // xmm2_4
  float x; // xmm3_4
  Vector vMins; // [rsp+0h] [rbp-20h] BYREF

  y = this->m_vExtent.y;
  x = this->m_vExtent.x;
  vMins.z = -this->m_vExtent.z;
  vMins.y = -y;
  vMins.x = -x;
  CCollisionProperty::SetupPhysicsFromUnscaledOBB(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    2,
    &vMins,
    &this->m_vExtent);
  CTriggerMultiple::Spawn(this, pKeyValues);
  this->m_flWait = -1.0;
}


// CScriptTriggerOnce::GetDataDescMap  (line 1731, @0x00000000023bb320, libserver.so)
// globals: CScriptTriggerOnce::m_DataMap
datamap_t *__fastcall CScriptTriggerOnce::GetDataDescMap(CScriptTriggerOnce *const this)
{
  return &CScriptTriggerOnce::m_DataMap;
}


// CScriptTriggerOnce::AddDatadescMetadataKeys  (line 1731, @0x00000000023d0490, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CScriptTriggerOnce::GetEntityClass(void)
void __fastcall CScriptTriggerOnce::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CScriptTriggerOnce::GetEntityClass);
}


// CScriptTriggerOnce::GetBaseMap  (line 1731, @0x00000000023d04b0, libserver.so)
// globals: CTriggerOnce::m_DataMap
datamap_t *__cdecl CScriptTriggerOnce::GetBaseMap()
{
  return &CTriggerOnce::m_DataMap;
}


// DataMapInit<CScriptTriggerOnce>  (line 1731, @0x00000000023d04c0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CScriptTriggerOnce"
// globals: `guard variable for'DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder, CTriggerOnce::m_DataMap, CScriptTriggerOnce::GetEntityClass(void), CScriptTriggerOnce::m_DataMap, DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder) != 0 )
  {
    DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder.m_pszBase = "CScriptTriggerOnce";
    DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::nameHolder,
      &_dso_handle);
  }
  CScriptTriggerOnce::m_DataMap.dataNumFields = 1;
  CScriptTriggerOnce::m_DataMap.baseMap = &CTriggerOnce::m_DataMap;
  CScriptTriggerOnce::m_DataMap.dataDesc = &DataMapInit<CScriptTriggerOnce>(CScriptTriggerOnce *)::dataDesc[1];
  AddDatadescMetadataKeys(&CScriptTriggerOnce::m_DataMap, CScriptTriggerOnce::GetEntityClass);
  return &CScriptTriggerOnce::m_DataMap;
}


// CTriggerLook::~CTriggerLook  (line 1745, @0x00000000023f6620, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerMultiple, ~CTriggerOnce, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerLook::~CTriggerLook(CTriggerLook *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerLook::~CTriggerLook  (line 1745, @0x00000000023f6f80, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerLook, ~CTriggerMultiple, ~CTriggerOnce, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerLook::~CTriggerLook(CTriggerLook *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerLook::GetEntityClass  (line 1747, @0x00000000023e6190, libserver.so)
CEntityClass *__cdecl CTriggerLook::GetEntityClass()
{
  return g_pEntityCTriggerLookClass;
}


// CTriggerLook::Schema_DynamicBinding  (line 1747, @0x00000000023e61a0, libserver.so)
// globals: CTriggerLook::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerLook::Schema_DynamicBinding(const CTriggerLook *const this)
{
  return CTriggerLook::s_pSchemaBinding;
}


// CTriggerLook::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1747, @0x00000000023e61b0, libserver.so)
// globals: CTriggerLook::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerLook::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerLook::CEntityInstanceEntityClass *const this)
{
  return CTriggerLook::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerLook::CEntityInstanceEntityClass::DestructInstance  (line 1747, @0x00000000023e61c0, libserver.so)  // inlines: Destruct<CTriggerLook>
void __fastcall CTriggerLook::CEntityInstanceEntityClass::DestructInstance(
        CTriggerLook::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerLook::CEntityInstanceEntityClass::FreeInstance  (line 1747, @0x00000000023e61e0, libserver.so)
void __fastcall CTriggerLook::CEntityInstanceEntityClass::FreeInstance(
        CTriggerLook::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerLook::CEntityInstanceEntityClass::CanAllocate  (line 1747, @0x00000000023e6200, libserver.so)
bool __fastcall CTriggerLook::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerLook::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerLook::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1747, @0x00000000023e6210, libserver.so)
// globals: CTriggerLook::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerLook::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerLook::CEntityInstanceEntityClass *const this)
{
  return CTriggerLook::s_pSchemaBinding;
}


// CTriggerLook::CEntityInstanceEntityClass::AllocateInstance  (line 1747, @0x00000000023e83f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerLook::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerLook::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1616);
  memset(v1, 0, 0x650u);
  return v1;
}


// CTriggerLook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1747, @0x00000000023ea100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerLook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerLook::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerLook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1747, @0x00000000023ea120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerLook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerLook::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerLook::CEntityInstanceEntityClass::ConstructInstance  (line 1747, @0x00000000023f1420, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CTriggerLook, CTriggerMultiple, CTriggerOnce, Construct<CTriggerLook>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerLook::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerLook::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 376) = -1;
    *(p + 185) = off_3F7C190;
    *p = &off_40C24D0;
    *(p + 383) = -1;
    *(p + 193) = off_3F7C190;
    *(p + 196) = off_3F7C190;
    *(p + 199) = off_3F7C190;
  }
  return p;
}


// CTriggerLook::GetEntityClassInternal  (line 1747, @0x00000000023f1fa0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CTriggerOnce::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_look", "CTriggerLook"
// globals: `guard variable for'CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass, CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass, __dso_handle, CTriggerLook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerLook::GetEntityClassInfo(void)::g_EntityCTriggerLookClassInfo, CTriggerLook::GetEntityClassInfo(void)::g_EntityCTriggerLookClassInfo
CEntityClass *__cdecl CTriggerLook::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass);
    CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass._vptr_CEntityClass = off_40C2450;
    __cxa_guard_release(&`guard variable for'CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass);
    __cxa_atexit(
      CTriggerLook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerLookClass != 0 )
    return &CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass;
  if ( `guard variable for'CTriggerLook::GetEntityClassInfo(void)::g_EntityCTriggerLookClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerLook::GetEntityClassInfo(void)::g_EntityCTriggerLookClassInfo) != 0 )
  {
    EntityClassInfo = CTriggerOnce::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerLook::GetEntityClassInfo(void)::g_EntityCTriggerLookClassInfo,
      "CTriggerLook",
      "trigger_look",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerLook::GetEntityClassInfo(void)::g_EntityCTriggerLookClassInfo);
  }
  CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass.m_pClassInfo = &CTriggerLook::GetEntityClassInfo(void)::g_EntityCTriggerLookClassInfo;
  CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass.m_pBaseClassInfo = CTriggerLook::GetEntityClassInfo(void)::g_EntityCTriggerLookClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerLookClass = &CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass;
  CTriggerLook::GetEntityClassInfo(void)::g_EntityCTriggerLookClassInfo.m_pClass = &CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass;
  CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerLookClass->m_pComponentOverrides = 0;
  return &CTriggerLook::GetEntityClassInternal(void)::g_EntityCTriggerLookClass;
}


// CTriggerLook::GetDataDescMap  (line 1780, @0x00000000023bb330, libserver.so)
// globals: CTriggerLook::m_DataMap
datamap_t *__fastcall CTriggerLook::GetDataDescMap(CTriggerLook *const this)
{
  return &CTriggerLook::m_DataMap;
}


// CTriggerLook::AddDatadescMetadataKeys  (line 1780, @0x00000000023d0590, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerLook::GetEntityClass(void)
void __fastcall CTriggerLook::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerLook::GetEntityClass);
}


// CTriggerLook::GetBaseMap  (line 1780, @0x00000000023d05b0, libserver.so)
// globals: CTriggerOnce::m_DataMap
datamap_t *__cdecl CTriggerLook::GetBaseMap()
{
  return &CTriggerOnce::m_DataMap;
}


// DataMapInit<CTriggerLook>  (line 1780, @0x00000000023de9e0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerLook"
// globals: `guard variable for'DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder, `guard variable for'DataMapInit<CTriggerLook>(CTriggerLook *)::dataDesc, CTriggerOnce::m_DataMap, CTriggerLook::GetEntityClass(void), CTriggerLook::m_DataMap, DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerLook>(CTriggerLook *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_pszBase = "CTriggerLook";
    DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder,
      &_dso_handle);
  }
  CTriggerLook::m_DataMap.baseMap = &CTriggerOnce::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerLook>(CTriggerLook *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerLook>(CTriggerLook *)::dataDesc) != 0 )
  {
    DataMapInit<CTriggerLook>(CTriggerLook *)::dataDesc[10].pSaveRestoreOps = eventFuncs;
    DataMapInit<CTriggerLook>(CTriggerLook *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    DataMapInit<CTriggerLook>(CTriggerLook *)::dataDesc[12].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v2, DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_pszBase), "TimeoutThink");
    m_Size = DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTriggerLook>(CTriggerLook *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTriggerLook>(CTriggerLook *)::dataDesc[13].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerLook>(CTriggerLook *)::dataDesc);
  }
  CTriggerLook::m_DataMap.dataNumFields = 15;
  CTriggerLook::m_DataMap.dataDesc = &DataMapInit<CTriggerLook>(CTriggerLook *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerLook::m_DataMap, CTriggerLook::GetEntityClass);
  return &CTriggerLook::m_DataMap;
}


// CTriggerLook::Spawn  (line 1808, @0x00000000023d69b0, libserver.so)  // inlines: Set, Spawn, operator=
// calls: CCollisionProperty::EnableTouchPersistsNotification, CTriggerMultiple::Spawn
void __fastcall CTriggerLook::Spawn(CTriggerLook *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // rdi

  this->m_bTimeoutFired = 0;
  p_m_Collision = &this->m_Collision;
  p_m_Collision[3].m_vCapsuleCenter2.m_Value.z = NAN;
  HIDWORD(p_m_Collision[4]._vptr_ICollideable) = -1082130432;
  BYTE1(p_m_Collision[4].m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t) = 0;
  CCollisionProperty::EnableTouchPersistsNotification(p_m_Collision);
  CTriggerMultiple::Spawn(this, pKeyValues);
  this->m_flWait = -1.0;
}


// CTriggerLook::StartTouch  (line 1824, @0x00000000023e1ce0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime, operator=
// calls: CBaseTrigger::StartTouch, FixUpHMDPlayer, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CTriggerLook::TimeoutThink(void)
void __fastcall CTriggerLook::StartTouch(CTriggerLook *const this, CBaseEntity *pOther)
{
  CBaseEntity *fixed; // rax
  CBaseEntity *v5; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  double v9; // xmm1_8
  double v10; // xmm0_8
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseTrigger::StartTouch(this, pOther);
  fixed = FixUpHMDPlayer(pOther);
  v5 = fixed;
  if ( fixed != 0 && (*(fixed->_vptr_IHandleEntity + 140))(fixed) != 0 && this->m_flTimeoutDuration != 0.0 )
  {
    this->m_bTimeoutFired = 0;
    m_pEntity = v5->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hActivator.m_Index) = v8 | this->m_hActivator.m_Index & 0x8000;
      this->m_hActivator.m_Index = (v7 << 15) | this->m_hActivator.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hActivator.m_Index = -1;
    }
    CBaseEntity::ThinkSet(this, CTriggerLook::TimeoutThink, 0.0, 0, 0);
    v10 = 0.0;
    v11 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v10 = LODWORD(v11->m_flCurrentTime);
    }
    *&v10 = *&v10 + this->m_flTimeoutDuration;
    CBaseEntity::SetNextThink(this, v10, v9, 0);
  }
}


// CTriggerLook::TimeoutThink  (line 1845, @0x00000000023dc9b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CTriggerLook::Trigger
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerLook::TimeoutThink(CTriggerLook *const this)
{
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hActivator.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hActivator.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        m_pInstance = v4->m_pInstance;
    }
  }
  CTriggerLook::Trigger(this, m_pInstance, 1);
}


// CTriggerLook::EndTouch  (line 1854, @0x00000000023dd640, libserver.so)
// calls: CBaseTrigger::EndTouch, FixUpHMDPlayer, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CTriggerLook::EndTouch(CTriggerLook *const this, CBaseEntity *pOther)
{
  CBaseEntity *fixed; // rax
  double v5; // xmm1_8

  CBaseTrigger::EndTouch(this, pOther);
  fixed = FixUpHMDPlayer(pOther);
  if ( fixed != 0 && (*(fixed->_vptr_IHandleEntity + 140))(fixed) != 0 )
  {
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v5, 0);
    this->m_bIsLooking = 0;
    this->m_flLookTimeTotal = -1.0;
  }
}


// CTriggerLook::Touch  (line 1876, @0x00000000023dca20, libserver.so)  // inlines: CGameTrace, CVariantBase, DotProduct, EnableInteractsWith, FireOutput, Free, Get, GetAbsVelocity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator CEntityInstance*, operator-, operator->, operator=, operator==, operator==<CBaseEntity>, ~CVariantBase
// calls: CBaseEntity::GetNextTarget, CEntityHandle::operator CEntityInstance*, VectorNormalize, CBaseEntity::GetAbsOrigin, FixUpHMDPlayer, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CGlobalVarsBase::curtime, CTriggerLook::Trigger, CEntityIOOutput::FireOutputInternal, CBaseEntity::CalcAbsoluteVelocity (14 total)
// callers: CTriggerLook::Touch
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerLook::Touch(CTriggerLook *const this, CBaseEntity *pOther)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CBaseEntity *NextTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  float y; // xmm1_4
  float z; // xmm2_4
  double v13; // xmm0_8
  double v14; // xmm0_8
  uint32 v15; // eax
  const CBaseEntity *m_pInstance; // rdi
  vec_t v17; // xmm1_4
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  const Vector *AbsOrigin; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  vec_t v23; // xmm1_4
  vec_t v24; // xmm1_4
  float m_fValue; // xmm1_4
  float m_flLookTimeTotal; // xmm0_4
  float v27; // xmm0_4
  CGlobalVars *v28; // rdi
  float v29; // [rsp+8h] [rbp-1A8h]
  float v30; // [rsp+Ch] [rbp-1A4h]
  float v31; // [rsp+10h] [rbp-1A0h]
  float v32; // [rsp+14h] [rbp-19Ch]
  float x; // [rsp+18h] [rbp-198h]
  float v34; // [rsp+1Ch] [rbp-194h]
  Vector vLookDir; // [rsp+20h] [rbp-190h] BYREF
  Vector vecOtherEye; // [rsp+30h] [rbp-180h]
  Vector vTargetDir; // [rsp+40h] [rbp-170h] BYREF
  CTraceFilterSimple v38; // [rsp+50h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+90h] [rbp-120h] BYREF
  trace_t tr; // [rsp+E0h] [rbp-D0h] BYREF

  m_Index = this->m_hLookTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLookTarget.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hLookTarget.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
        goto LABEL_15;
    }
  }
  NextTarget = CBaseEntity::GetNextTarget(this);
  if ( NextTarget != 0 && (m_pEntity = NextTarget->m_pEntity) != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v10 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hLookTarget.m_Index) = v10 | this->m_hLookTarget.m_Index & 0x8000;
    this->m_hLookTarget.m_Index = (v9 << 15) | this->m_hLookTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hLookTarget.m_Index = -1;
  }
  if ( CEntityHandle::operator CEntityInstance *(&this->m_hLookTarget) != 0 )
  {
LABEL_15:
    if ( (*(this->_vptr_IHandleEntity + 223))(this, pOther) != 0 )
    {
      if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) == 0 )
        pOther = FixUpHMDPlayer(pOther);
      if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
      {
        if ( (this->m_spawnflags.m_Value & 0x100) != 0 )
        {
          if ( (pOther->m_iEFlags & 0x1000) != 0 )
            CBaseEntity::CalcAbsoluteVelocity(pOther);
          y = pOther->m_vecAbsVelocity.m_Value.y;
          z = pOther->m_vecAbsVelocity.m_Value.z;
          vLookDir.x = pOther->m_vecAbsVelocity.m_Value.x;
          vLookDir.y = y;
          vLookDir.z = z;
          if ( vLookDir.x == vec3_origin.x
            && y == vec3_origin.y
            && z == vec3_origin.z
            && (*(pOther->_vptr_IHandleEntity + 346))(pOther) != 0 )
          {
            v21 = (*(pOther->_vptr_IHandleEntity + 347))(pOther);
            v22 = (*(*v21 + 72LL))(v21);
            *&tr.startpos.x = (*(*v22 + 1376LL))(v22);
            tr.startpos.z = v23;
            vLookDir = tr.startpos;
          }
          *&v13 = VectorNormalize(&vLookDir);
        }
        else
        {
          *&tr.startpos.x = (*(pOther->_vptr_IHandleEntity + 277))(pOther);
          tr.startpos.z = v24;
          vLookDir = tr.startpos;
          *&v13 = LODWORD(tr.startpos.y);
        }
        v14 = (*(pOther->_vptr_IHandleEntity + 164))(pOther, v13);
        v15 = this->m_hLookTarget.m_Index;
        m_pInstance = 0;
        *&vecOtherEye.x = v14;
        vecOtherEye.z = v17;
        if ( v15 + 2 > 1 )
        {
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLookTarget.m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[this->m_hLookTarget.m_Index & 0x1FF];
            if ( v19 != 0 && v15 == v19->m_EHandle.m_Index )
              m_pInstance = v19->m_pInstance;
          }
        }
        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
        x = vecOtherEye.x;
        v30 = AbsOrigin->x;
        v29 = AbsOrigin->y;
        v34 = AbsOrigin->z;
        v32 = vecOtherEye.y;
        vTargetDir.x = AbsOrigin->x - vecOtherEye.x;
        v31 = vecOtherEye.z;
        vTargetDir.y = v29 - vecOtherEye.y;
        vTargetDir.z = v34 - vecOtherEye.z;
        VectorNormalize(&vTargetDir);
        if ( this->m_b2DFOV )
        {
          vLookDir.z = 0.0;
          VectorNormalize(&vLookDir);
          vTargetDir.z = 0.0;
          VectorNormalize(&vTargetDir);
        }
        if ( this->m_bTestOcclusion )
        {
          memset(&tr.m_ShapeAttributes, 0, 31);
          tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
          CGameTrace::Init(&tr);
          ray.m_Start.w = 0.0;
          memset(&ray.m_Delta.w, 0, 36);
          m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
          ray.m_Delta.y = v32 - v29;
          ray.m_flRadius = m_fValue;
          ray.m_Delta.z = v31 - v34;
          ray.m_Delta.x = x - v30;
          ray.m_Start.x = v30;
          ray.m_Start.y = v29;
          ray.m_Start.z = v34;
          ray.m_IsRay = 1;
          ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                         + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
          CTraceFilterSimple::CTraceFilterSimple(&v38, pOther, 4, 0);
          v38.m_attr.m_nInteractsWith |= 0x4081uLL;
          CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v38, &tr);
          if ( (((vLookDir.x * vTargetDir.x) + (vLookDir.y * vTargetDir.y)) + (vLookDir.z * vTargetDir.z)) <= this->m_flFieldOfView
            || tr.fraction != 1.0 )
          {
            goto LABEL_30;
          }
        }
        else if ( (((vLookDir.x * vTargetDir.x) + (vLookDir.y * vTargetDir.y)) + (vLookDir.z * vTargetDir.z)) <= this->m_flFieldOfView )
        {
LABEL_30:
          if ( this->m_bIsLooking )
          {
            tr.startpos.z = 0.0;
            *&tr.startpos.x = 0;
            CEntityIOOutput::FireOutputInternal(&this->m_OnEndLook, pOther, this, &tr, 0.0);
            if ( (BYTE2(tr.startpos.z) & 1) != 0 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&tr.startpos.x);
            this->m_bIsLooking = 0;
          }
          this->m_flLookTimeTotal = -1.0;
          return;
        }
        if ( this->m_flLookTimeTotal == -1.0 )
        {
          this->m_flLookTimeLast = CGlobalVarsBase::curtime(gpGlobals, 0);
          m_flLookTimeTotal = 0.0;
          this->m_flLookTimeTotal = 0.0;
        }
        else
        {
          v27 = CGlobalVarsBase::curtime(gpGlobals, 0);
          v28 = gpGlobals;
          this->m_flLookTimeTotal = (v27 - this->m_flLookTimeLast) + this->m_flLookTimeTotal;
          this->m_flLookTimeLast = CGlobalVarsBase::curtime(v28, 0);
          m_flLookTimeTotal = this->m_flLookTimeTotal;
        }
        if ( m_flLookTimeTotal >= this->m_flLookTime )
          CTriggerLook::Trigger(this, pOther, 0);
      }
    }
  }
}


// CTriggerLook::Touch  (line 1876, @0x00000000023dd1f0, libserver.so)
// calls: CTriggerLook::Touch
void __fastcall CTriggerLook::Touch(CTriggerLook *const this, CBaseEntity *pOther)
{
  if ( !this->m_bTimeoutFired )
    CTriggerLook::Touch(this, pOther);
}


// CTriggerLook::Trigger  (line 1990, @0x00000000023dc790, libserver.so)  // inlines: CVariantBase, FireOutput, Free, curtime, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CTriggerLook::TimeoutThink, CTriggerLook::Touch
// globals: CBaseEntity::SUB_Remove(void)
void __fastcall CTriggerLook::Trigger(CTriggerLook *const this, CBaseEntity *pActivator, bool bTimeout)
{
  bool v5; // zf
  double v6; // xmm1_8
  double v7; // xmm1_8
  double v8; // xmm0_8
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  if ( bTimeout )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnTimeout, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    v5 = SLOBYTE(this->m_spawnflags.m_Value) >= 0;
    this->m_bTimeoutFired = 1;
    if ( v5 )
      return;
LABEL_10:
    CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
    v8 = 0.0;
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v8 = LODWORD(v9->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v8, v7, 0);
    return;
  }
  CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  v5 = !this->m_bIsLooking;
  this->m_flLookTimeTotal = -1.0;
  if ( v5 )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnStartLook, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    this->m_bIsLooking = 1;
  }
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v6, 0);
  if ( SLOBYTE(this->m_spawnflags.m_Value) < 0 )
    goto LABEL_10;
}


// CTriggerLook::DrawDebugTextOverlays  (line 2029, @0x00000000023bc7f0, libserver.so)
// calls: CBaseTrigger::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Time:   %3.2f"
int __fastcall CTriggerLook::DrawDebugTextOverlays(
        CTriggerLook *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // ebx
  int v7; // esi
  char tempstr[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v10; // [rsp+118h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v10 = __readfsqword(0x28u);
  v6 = CBaseTrigger::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 255, "Time:   %3.2f", (this->m_flLookTime - fmaxf(0.0, this->m_flLookTimeTotal)));
    v7 = v6++;
    CBaseEntity::EntityText(this, v7, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CTriggerVolume::~CTriggerVolume  (line 2050, @0x00000000023e9400, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CTriggerVolume::~CTriggerVolume(CTriggerVolume *const this)
{
  this->_vptr_IHandleEntity = &off_40C2C70;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerVolume::~CTriggerVolume  (line 2050, @0x00000000023e9420, libserver.so)  // inlines: ~CTriggerVolume
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CTriggerVolume::~CTriggerVolume(CTriggerVolume *const this)
{
  this->_vptr_IHandleEntity = &off_40C2C70;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerVolume::Schema_DynamicBinding  (line 2053, @0x00000000023e6220, libserver.so)
// globals: CTriggerVolume::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerVolume::Schema_DynamicBinding(const CTriggerVolume *const this)
{
  return CTriggerVolume::s_pSchemaBinding;
}


// CTriggerVolume::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2053, @0x00000000023e6230, libserver.so)
// globals: CTriggerVolume::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerVolume::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerVolume::CEntityInstanceEntityClass *const this)
{
  return CTriggerVolume::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerVolume::CEntityInstanceEntityClass::DestructInstance  (line 2053, @0x00000000023e6240, libserver.so)  // inlines: Destruct<CTriggerVolume>
void __fastcall CTriggerVolume::CEntityInstanceEntityClass::DestructInstance(
        CTriggerVolume::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerVolume::CEntityInstanceEntityClass::FreeInstance  (line 2053, @0x00000000023e6260, libserver.so)
void __fastcall CTriggerVolume::CEntityInstanceEntityClass::FreeInstance(
        CTriggerVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerVolume::CEntityInstanceEntityClass::CanAllocate  (line 2053, @0x00000000023e6280, libserver.so)
bool __fastcall CTriggerVolume::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerVolume::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2053, @0x00000000023e6290, libserver.so)
// globals: CTriggerVolume::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerVolume::CEntityInstanceEntityClass *const this)
{
  return CTriggerVolume::s_pSchemaBinding;
}


// CTriggerVolume::CEntityInstanceEntityClass::AllocateInstance  (line 2053, @0x00000000023e8430, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerVolume::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerVolume::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CTriggerVolume::CEntityInstanceEntityClass::ConstructInstance  (line 2053, @0x00000000023e8db0, libserver.so)  // inlines: CTriggerVolume, Construct<CTriggerVolume>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CTriggerVolume::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_40C2C70;
  }
  return p;
}


// CTriggerVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2053, @0x00000000023ea920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2053, @0x00000000023ea940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerVolume::GetEntityClassInternal  (line 2053, @0x00000000023f20f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_transition", "CTriggerVolume"
// globals: `guard variable for'CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass, CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass, __dso_handle, CTriggerVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerVolume::GetEntityClassInfo(void)::g_EntityCTriggerVolumeClassInfo, CTriggerVolume::GetEntityClassInfo(void)::g_EntityCTriggerVolumeClassInfo
CEntityClass *__cdecl CTriggerVolume::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass);
    CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass._vptr_CEntityClass = off_40C2BF0;
    __cxa_guard_release(&`guard variable for'CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass);
    __cxa_atexit(
      CTriggerVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerVolumeClass != 0 )
    return &CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass;
  if ( `guard variable for'CTriggerVolume::GetEntityClassInfo(void)::g_EntityCTriggerVolumeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerVolume::GetEntityClassInfo(void)::g_EntityCTriggerVolumeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerVolume::GetEntityClassInfo(void)::g_EntityCTriggerVolumeClassInfo,
      "CTriggerVolume",
      "trigger_transition",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerVolume::GetEntityClassInfo(void)::g_EntityCTriggerVolumeClassInfo);
  }
  CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass.m_pClassInfo = &CTriggerVolume::GetEntityClassInfo(void)::g_EntityCTriggerVolumeClassInfo;
  CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass.m_pBaseClassInfo = CTriggerVolume::GetEntityClassInfo(void)::g_EntityCTriggerVolumeClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerVolumeClass = &CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass;
  CTriggerVolume::GetEntityClassInfo(void)::g_EntityCTriggerVolumeClassInfo.m_pClass = &CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass;
  CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCTriggerVolumeClass->m_pComponentOverrides = 0;
  return &CTriggerVolume::GetEntityClassInternal(void)::g_EntityCTriggerVolumeClass;
}


// CTriggerVolume::ObjectCaps  (line 2058, @0x00000000023e8bb0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CTriggerVolume::ObjectCaps(CTriggerVolume *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CTriggerVolume::Precache  (line 2061, @0x00000000023e3cd0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, GetModelNameFromKeyValues, CBaseEntity::PrecacheModel
void __fastcall CTriggerVolume::Precache(CTriggerVolume *const this, const CEntityPrecacheContext *pContext)
{
  const char *ModelNameFromKeyValues; // rax

  CEntityInstance::Precache(this, pContext);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pContext->m_pKeyValues, "");
  CBaseEntity::PrecacheModel(ModelNameFromKeyValues, pContext);
}


// CTriggerVolume::Spawn  (line 2068, @0x00000000023bca00, libserver.so)  // inlines: GetInt, SetSolid
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, GetModelNameFromKeyValues, CBaseModelEntity::SetModel, CBaseEntity::AddEffects
void __fastcall CTriggerVolume::Spawn(CTriggerVolume *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  const char *ModelNameFromKeyValues; // rax

  p_m_Collision = &this->m_Collision;
  CBaseEntity::Spawn(this, pKeyValues);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 1);
  (*(this->m_Collision._vptr_ICollideable + 16))(p_m_Collision);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "");
  CBaseModelEntity::SetModel(this, ModelNameFromKeyValues);
  if ( showtriggers.m_pParent->m_Value.m_nValue == 0 )
    CBaseEntity::AddEffects(this, 32);
}


// CChangeLevel::~CChangeLevel  (line 2097, @0x00000000023f7080, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CChangeLevel::~CChangeLevel(CChangeLevel *const this)
{
  bool v2; // zf

  v2 = this->m_sLandmarkName.m_pString == 0;
  this->_vptr_IHandleEntity = &off_40C33B0;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_sLandmarkName);
  if ( this->m_sMapName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sMapName);
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CChangeLevel::~CChangeLevel  (line 2097, @0x00000000023f7370, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CChangeLevel, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CChangeLevel::~CChangeLevel(CChangeLevel *const this)
{
  bool v2; // zf

  v2 = this->m_sLandmarkName.m_pString == 0;
  this->_vptr_IHandleEntity = &off_40C33B0;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_sLandmarkName);
  if ( this->m_sMapName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sMapName);
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CChangeLevel::GetEntityClass  (line 2100, @0x00000000023e62a0, libserver.so)
CEntityClass *__cdecl CChangeLevel::GetEntityClass()
{
  return g_pEntityCChangeLevelClass;
}


// CChangeLevel::Schema_DynamicBinding  (line 2100, @0x00000000023e62b0, libserver.so)
// globals: CChangeLevel::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CChangeLevel::Schema_DynamicBinding(const CChangeLevel *const this)
{
  return CChangeLevel::s_pSchemaBinding;
}


// CChangeLevel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2100, @0x00000000023e62c0, libserver.so)
// globals: CChangeLevel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CChangeLevel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CChangeLevel::CEntityInstanceEntityClass *const this)
{
  return CChangeLevel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CChangeLevel::CEntityInstanceEntityClass::DestructInstance  (line 2100, @0x00000000023e62d0, libserver.so)  // inlines: Destruct<CChangeLevel>
void __fastcall CChangeLevel::CEntityInstanceEntityClass::DestructInstance(
        CChangeLevel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CChangeLevel::CEntityInstanceEntityClass::FreeInstance  (line 2100, @0x00000000023e62f0, libserver.so)
void __fastcall CChangeLevel::CEntityInstanceEntityClass::FreeInstance(
        CChangeLevel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CChangeLevel::CEntityInstanceEntityClass::CanAllocate  (line 2100, @0x00000000023e6310, libserver.so)
bool __fastcall CChangeLevel::CEntityInstanceEntityClass::CanAllocate(
        const CChangeLevel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CChangeLevel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2100, @0x00000000023e6320, libserver.so)
// globals: CChangeLevel::s_pSchemaBinding
const ISchemaBinding *__fastcall CChangeLevel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CChangeLevel::CEntityInstanceEntityClass *const this)
{
  return CChangeLevel::s_pSchemaBinding;
}


// CChangeLevel::CEntityInstanceEntityClass::AllocateInstance  (line 2100, @0x00000000023e8470, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CChangeLevel::CEntityInstanceEntityClass::AllocateInstance(
        CChangeLevel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1520);
  memset(v1, 0, 0x5F0u);
  return v1;
}


// CChangeLevel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2100, @0x00000000023ea240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CChangeLevel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CChangeLevel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CChangeLevel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2100, @0x00000000023ea260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CChangeLevel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CChangeLevel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CChangeLevel::CEntityInstanceEntityClass::ConstructInstance  (line 2100, @0x00000000023f14e0, libserver.so)  // inlines: CChangeLevel, CEntityIOOutput, CUtlString, Construct<CChangeLevel>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CChangeLevel::CEntityInstanceEntityClass::ConstructInstance(
        CChangeLevel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 185) = 0;
    *p = &off_40C33B0;
    *(p + 186) = 0;
    *(p + 187) = off_3F7C190;
  }
  return p;
}


// CChangeLevel::GetEntityClassInternal  (line 2100, @0x00000000023f2240, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_changelevel", "CChangeLevel"
// globals: `guard variable for'CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass, CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass, __dso_handle, CChangeLevel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CChangeLevel::GetEntityClassInfo(void)::g_EntityCChangeLevelClassInfo, CChangeLevel::GetEntityClassInfo(void)::g_EntityCChangeLevelClassInfo
CEntityClass *__cdecl CChangeLevel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass) != 0 )
  {
    CEntityClass::CEntityClass(&CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass);
    CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass._vptr_CEntityClass = off_40C3330;
    __cxa_guard_release(&`guard variable for'CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass);
    __cxa_atexit(
      CChangeLevel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass,
      &_dso_handle);
  }
  if ( g_pEntityCChangeLevelClass != 0 )
    return &CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass;
  if ( `guard variable for'CChangeLevel::GetEntityClassInfo(void)::g_EntityCChangeLevelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CChangeLevel::GetEntityClassInfo(void)::g_EntityCChangeLevelClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CChangeLevel::GetEntityClassInfo(void)::g_EntityCChangeLevelClassInfo,
      "CChangeLevel",
      "trigger_changelevel",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CChangeLevel::GetEntityClassInfo(void)::g_EntityCChangeLevelClassInfo);
  }
  CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass.m_pClassInfo = &CChangeLevel::GetEntityClassInfo(void)::g_EntityCChangeLevelClassInfo;
  CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass.m_pBaseClassInfo = CChangeLevel::GetEntityClassInfo(void)::g_EntityCChangeLevelClassInfo.m_pBaseClassInfo;
  g_pEntityCChangeLevelClass = &CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass;
  CChangeLevel::GetEntityClassInfo(void)::g_EntityCChangeLevelClassInfo.m_pClass = &CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass;
  CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCChangeLevelClass->m_pComponentOverrides = 0;
  return &CChangeLevel::GetEntityClassInternal(void)::g_EntityCChangeLevelClass;
}


// CChangeLevel::GetDataDescMap  (line 2165, @0x00000000023bb340, libserver.so)
// globals: CChangeLevel::m_DataMap
datamap_t *__fastcall CChangeLevel::GetDataDescMap(CChangeLevel *const this)
{
  return &CChangeLevel::m_DataMap;
}


// CChangeLevel::AddDatadescMetadataKeys  (line 2165, @0x00000000023d05c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CChangeLevel::GetEntityClass(void)
void __fastcall CChangeLevel::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CChangeLevel::GetEntityClass);
}


// CChangeLevel::GetBaseMap  (line 2165, @0x00000000023d05e0, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CChangeLevel::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CChangeLevel>  (line 2165, @0x00000000023de470, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CChangeLevel"
// globals: `guard variable for'DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder, `guard variable for'DataMapInit<CChangeLevel>(CChangeLevel *)::dataDesc, CBaseTrigger::m_DataMap, CChangeLevel::GetEntityClass(void), CChangeLevel::m_DataMap, DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CChangeLevel>(CChangeLevel *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder) != 0 )
  {
    DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_pszBase = "CChangeLevel";
    DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder,
      &_dso_handle);
  }
  CChangeLevel::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CChangeLevel>(CChangeLevel *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CChangeLevel>(CChangeLevel *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_nLenBase + 17);
    strcpy(stpcpy(v2, DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_pszBase), "TouchChangeLevel");
    m_Size = DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Size == DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CChangeLevel>(CChangeLevel *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CChangeLevel>(CChangeLevel *)::dataDesc[3].fieldName = v2;
    DataMapInit<CChangeLevel>(CChangeLevel *)::dataDesc[4].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CChangeLevel>(CChangeLevel *)::dataDesc);
  }
  CChangeLevel::m_DataMap.dataNumFields = 4;
  CChangeLevel::m_DataMap.dataDesc = &DataMapInit<CChangeLevel>(CChangeLevel *)::dataDesc[1];
  AddDatadescMetadataKeys(&CChangeLevel::m_DataMap, CChangeLevel::GetEntityClass);
  return &CChangeLevel::m_DataMap;
}


// CChangeLevel::Spawn  (line 2188, @0x00000000023d6e40, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, IsEmpty, String, TempString, operator[]
// calls: CBaseTrigger::Spawn, CEntityKeyValues::HasValue, CBaseTrigger::InitTrigger, CCollisionProperty::EnableTouchPersistsNotification, CUtlString::Get, Msg, CUtlString::operator=
// strings: "trigger_changelevel to %s doesn't have a landmark", "a trigger_changelevel doesn't have a map"
// globals: CChangeLevel::TouchChangeLevel(CBaseEntity *), CEntityKeyValues::sm_EmptyVariant
void __fastcall CChangeLevel::Spawn(CChangeLevel *const this, const CEntityKeyValues *pKeyValues)
{
  char *m_pString; // rax
  char *v5; // rax
  const char *v6; // rax
  int v7; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v8; // cx
  __int64 v9; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v10; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rdx
  const char *v12; // rsi
  CEntityVariant *v13; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v16; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rsi

  CBaseTrigger::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1930427940) )
    goto LABEL_2;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_38:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_35;
    goto LABEL_39;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v16 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v16) == 1930427940 )
      goto LABEL_32;
LABEL_29:
    if ( m_nCount <= ++v16 )
      goto LABEL_38;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v16] != 1930427940 )
    goto LABEL_29;
LABEL_32:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v18 = pKeyValues->m_keyValues.m_pElements;
  else
    v18 = 0;
  p_m_value = &v18[v16].m_value;
  m_uint64 = "";
  if ( p_m_value->m_type == 30 )
LABEL_35:
    m_uint64 = p_m_value->m_uint64;
LABEL_39:
  CUtlString::operator=(&this->m_sMapName, m_uint64);
LABEL_2:
  if ( !CEntityKeyValues::HasValue(pKeyValues, -863459013) )
    goto LABEL_3;
  v7 = pKeyValues->m_keyHashes.m_nCount;
  if ( v7 <= 0 )
  {
LABEL_36:
    v13 = &CEntityKeyValues::sm_EmptyVariant;
    v12 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_23;
    goto LABEL_37;
  }
  v8 = pKeyValues->m_keyHashes.m_nAllocated;
  v9 = 0;
  while ( 2 )
  {
    if ( v8 == 0 )
    {
      if ( *(4 * v9) == -863459013 )
        break;
      goto LABEL_17;
    }
    v10 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v8 > 9 )
      v10 = pKeyValues->m_keyHashes.m_pElements;
    if ( v10[v9] != -863459013 )
    {
LABEL_17:
      if ( v7 <= ++v9 )
        goto LABEL_36;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v11 = pKeyValues->m_keyValues.m_pElements;
  else
    v11 = 0;
  v12 = 0;
  v13 = &v11[v9].m_value;
  if ( v13->m_type == 30 )
LABEL_23:
    v12 = v13->m_uint64;
LABEL_37:
  CUtlString::operator=(&this->m_sLandmarkName, v12);
LABEL_3:
  m_pString = this->m_sMapName.m_pString;
  if ( m_pString == 0 || *m_pString == 0 )
    Msg("a trigger_changelevel doesn't have a map");
  v5 = this->m_sLandmarkName.m_pString;
  if ( v5 == 0 || *v5 == 0 )
  {
    v6 = CUtlString::Get(&this->m_sMapName);
    Msg("trigger_changelevel to %s doesn't have a landmark", v6);
  }
  CBaseTrigger::InitTrigger(this, pKeyValues);
  if ( (this->m_spawnflags.m_Value & 2) == 0 )
  {
    CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
    this->m_pfnTouch.__delta = 0;
    this->m_pfnTouch.__pfn = CChangeLevel::TouchChangeLevel;
  }
}


// CChangeLevel::Activate  (line 2318, @0x00000000023d0690, libserver.so)  // inlines: GetInt, GetSpawnGroupHandle, SetCollisionGroup, String, operator char const*
// calls: CBaseTrigger::Activate, CUtlString::Get, CChangeLevel::FindLandmark, CBaseEntity::GetAbsOrigin, CGameEntitySystem::FindEntityByClassname, Warning, CCollisionProperty::SetCollisionGroup, CCollisionProperty::DisableTouchEvents
// strings: "trigger_transition", "Map has no trigger_transition volumes for landmark %s\n", "trigger_changelevel to map %s has a landmark embedded in solid!\nThis will break level tr
void __fastcall CChangeLevel::Activate(CChangeLevel *const this, ActivateType_t activateType)
{
  const char *v3; // rax
  CBaseEntity *Landmark; // rax
  int (__fastcall *v5)(IPVSManager *, __int64, const Vector *); // r14
  const Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int64 m_hSpawnGroup; // rsi
  const char *v9; // rax
  const char *v10; // rax

  CBaseTrigger::Activate(this, activateType);
  if ( gpGlobals->eLoadType == MapLoadType_t::MapLoad_NewGame && (this->m_spawnflags.m_Value & 4) != 0 )
  {
    CCollisionProperty::SetCollisionGroup(&this->m_Collision, 4);
    (*(this->m_Collision._vptr_ICollideable + 17))(&this->m_Collision);
    CCollisionProperty::DisableTouchEvents(&this->m_Collision);
    this->m_pfnTouch.__pfn = 0;
    this->m_pfnTouch.__delta = 0;
  }
  else
  {
    v3 = CUtlString::Get(&this->m_sLandmarkName);
    Landmark = CChangeLevel::FindLandmark(v3);
    if ( Landmark != 0 )
    {
      v5 = *(g_pPVSManager->_vptr_IPVSManager + 4);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Landmark);
      m_pEntity = this->m_pEntity;
      if ( m_pEntity != 0 )
        m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
      else
        m_hSpawnGroup = 0;
      if ( v5(g_pPVSManager, m_hSpawnGroup, AbsOrigin) < 0 )
      {
        v10 = CUtlString::Get(&this->m_sMapName);
        Warning(
          "trigger_changelevel to map %s has a landmark embedded in solid!\nThis will break level transitions!\n",
          v10);
      }
      if ( g_debug_transitions.m_pParent->m_Value.m_nValue != 0
        && CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "trigger_transition") == 0 )
      {
        v9 = CUtlString::Get(&this->m_sLandmarkName);
        Warning("Map has no trigger_transition volumes for landmark %s\n", v9);
      }
    }
  }
}


// CChangeLevel::FindLandmark  (line 2363, @0x00000000023d05f0, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CEntityIdentity::ClassMatches, CGameEntitySystem::FindEntityByName, Warning
// callers: CChangeLevel::Activate, CChangeLevel::IsEntityInTransition, CChangeLevel::BuildChangeLevelList, CChangeLevel::ChangeLevelNow
// strings: "info_landmark", "Can't find landmark %s\n"
CBaseEntity *__fastcall CChangeLevel::FindLandmark(const char *pLandmarkName)
{
  CBaseEntity *i; // rax
  CBaseEntity *v3; // rbx

  for ( i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pLandmarkName, 0, 0, 0, 0);
        ;
        i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v3, pLandmarkName, 0, 0, 0, 0) )
  {
    v3 = i;
    if ( i == 0 )
    {
      Warning("Can't find landmark %s\n", pLandmarkName);
      return 0;
    }
    if ( CEntityIdentity::ClassMatches(i->m_pEntity, "info_landmark") )
      break;
  }
  return v3;
}


// CChangeLevel::IsEntityInTransition  (line 2385, @0x00000000023d0e50, libserver.so)  // inlines: GetSpawnGroupHandle, Init, WorldSpaceSurroundingBounds, operator char const*, operator=, vis_info_t
// calls: CUtlString::Get, CChangeLevel::InTransitionVolume, CChangeLevel::FindLandmark, CBaseEntity::GetAbsOrigin, __stack_chk_fail
// callers: CChangeLevel::NotifyEntitiesOutOfTransition
bool __fastcall CChangeLevel::IsEntityInTransition(CChangeLevel *const this, CBaseEntity *pEntity)
{
  CUtlString *p_m_sLandmarkName; // r12
  const char *v5; // rax
  const char *v7; // rax
  CBaseEntity *Landmark; // rax
  __int64 (__fastcall *v9)(IPVSManager *, __int64, const Vector *); // r14
  const Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int64 m_hSpawnGroup; // rsi
  unsigned int v13; // eax
  CEntityIdentity *v14; // rcx
  __int64 v15; // rsi
  CCollisionProperty *m_pCollision; // rdi
  CEntityIdentity *v17; // rax
  __int64 v18; // rsi
  const Vector *v19; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  Vector vecSurroundMins; // [rsp+0h] [rbp-480h] BYREF
  Vector vecSurroundMaxs; // [rsp+10h] [rbp-470h] BYREF
  vis_info_t infopvs; // [rsp+20h] [rbp-460h] BYREF
  unsigned __int8 pvs[1024]; // [rsp+40h] [rbp-440h] BYREF
  unsigned __int64 v26; // [rsp+448h] [rbp-38h]

  p_m_sLandmarkName = &this->m_sLandmarkName;
  v26 = __readfsqword(0x28u);
  v5 = CUtlString::Get(&this->m_sLandmarkName);
  if ( CChangeLevel::InTransitionVolume(pEntity, v5) == 0 )
    return 0;
  v7 = CUtlString::Get(p_m_sLandmarkName);
  Landmark = CChangeLevel::FindLandmark(v7);
  if ( Landmark == 0 )
    return 0;
  infopvs.m_uVisBitsBufSize = 1024;
  infopvs.m_flVisibleRadius = 0.0;
  infopvs.m_pVisBits = pvs;
  infopvs.m_SpawnGroupHandle = 0;
  v9 = *(g_pPVSManager->_vptr_IPVSManager + 4);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Landmark);
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
    m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
  else
    m_hSpawnGroup = 0;
  v13 = v9(g_pPVSManager, m_hSpawnGroup, AbsOrigin);
  v14 = this->m_pEntity;
  if ( v14 != 0 )
    v15 = v14->m_hSpawnGroup;
  else
    v15 = 0;
  (*(g_pPVSManager->_vptr_IPVSManager + 5))(g_pPVSManager, v15, v13, &infopvs);
  m_pCollision = pEntity->m_pCollision;
  if ( m_pCollision != 0 )
  {
    (*(m_pCollision->_vptr_ICollideable + 10))(m_pCollision, &vecSurroundMins, &vecSurroundMaxs);
  }
  else
  {
    v19 = CBaseEntity::GetAbsOrigin(pEntity);
    y = v19->y;
    z = v19->z;
    vecSurroundMins.x = v19->x;
    vecSurroundMins.y = y;
    vecSurroundMins.z = z;
    vecSurroundMaxs = vecSurroundMins;
  }
  v17 = this->m_pEntity;
  if ( v17 != 0 )
    v18 = v17->m_hSpawnGroup;
  else
    v18 = 0;
  return (*(g_pPVSManager->_vptr_IPVSManager + 7))(g_pPVSManager, v18, &vecSurroundMins, &vecSurroundMaxs, &infopvs);
}


// CChangeLevel::NotifyEntitiesOutOfTransition  (line 2412, @0x00000000023d77b0, libserver.so)  // inlines: CVariantBase, FirstEnt, Free, ~CVariantBase
// calls: CEntityInstance::AcceptInput, CGameEntitySystem::NextEnt, CChangeLevel::IsEntityInTransition, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CChangeLevel::ChangeLevelNow
// strings: "OutsideTransition", "InsideTransition"
void __fastcall CChangeLevel::NotifyEntitiesOutOfTransition(CChangeLevel *const this)
{
  CBaseEntity *i; // rsi
  CBaseEntity *Ent; // rax
  CBaseEntity *v4; // rbx
  variant_t emptyVariant; // [rsp+0h] [rbp-30h] BYREF

  for ( i = 0; ; i = v4 )
  {
    Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i);
    v4 = Ent;
    if ( Ent == 0 )
      break;
    if ( ((*(Ent->_vptr_IHandleEntity + 19))(Ent) & 0x200) != 0 )
    {
      emptyVariant.m_uint64 = 0;
      emptyVariant.m_type = 0;
      emptyVariant.m_flags = 0;
      if ( ((*(v4->_vptr_IHandleEntity + 19))(v4) & 0x180) != 0 && CChangeLevel::IsEntityInTransition(this, v4) )
        CEntityInstance::AcceptInput(v4, "InsideTransition", this, this, &emptyVariant, 0);
      else
        CEntityInstance::AcceptInput(v4, "OutsideTransition", this, this, &emptyVariant, 0);
      if ( (emptyVariant.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
    }
  }
}


// CChangeLevel::WarnAboutActiveLead  (line 2439, @0x00000000023d0810, libserver.so)
void __fastcall CChangeLevel::WarnAboutActiveLead(CChangeLevel *const this)
{
  ;
}


// CChangeLevel::ChangeLevelNow  (line 2466, @0x00000000023e4c90, libserver.so)  // inlines: BuildChangeList, CEntityHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CVariantBase, FireOutput, Free, GetEHandle, GetEntryIndex, GetInt, GetSaveRestore, GetSerialNumber, Purge, RemoveAll, Set, String, levellist_t, operator char const*, operator=, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~levellist_t
// calls: CUtlString::Get, CChangeLevel::FindLandmark, CUtlString::Clear, CUtlString::operator=, CEntityIOOutput::FireOutputInternal, CChangeLevel::NotifyEntitiesOutOfTransition, CGameEntitySystem::CleanupDeleteList, CUtlString::FreeMemoryBlock, Msg, CGlobalVarsBase::curtime, CChangeLevel::ChangeList, CCollisionProperty::DisableTouchPersistsNotification (15 total)
// callers: ChangeLevel_ChangeLevelNow
// strings: "CHANGE LEVEL: %s %s\n"
// globals: st_sNextSpot, g_iDebuggingTransition, st_sNextMap
void __fastcall CChangeLevel::ChangeLevelNow(CChangeLevel *const this, CBaseEntity *pActivator)
{
  levellist_t *v3; // rax
  const char *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  void (__fastcall *v9)(CGameRules *, const char *); // r13
  const char *v10; // rax
  void (__fastcall *v11)(IVEngineServer2 *, const char *, const char *); // r13
  const char *v12; // r14
  const char *v13; // rax
  levellist_t *v14; // rbx
  const char *v15; // r14
  const char *v16; // rax
  __int64 v17; // r14
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD, _QWORD, float); // r15
  float v19; // xmm0_4
  __int64 v20; // rax
  CSaveRestoreData *v21; // r14
  int v22; // eax
  ISaveRestoreBlockSet *v23; // rdi
  levellist_t *v24; // rbx
  unsigned int tickcount; // [rsp+Ch] [rbp-254h]
  CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > list; // [rsp+10h] [rbp-250h] BYREF
  levellist_t levels[16]; // [rsp+30h] [rbp-230h] BYREF
  char v28; // [rsp+230h] [rbp-30h] BYREF

  v3 = levels;
  do
  {
    v3->m_sMapName.m_pString = 0;
    ++v3;
    v3[-1].m_sLandmarkName.m_pString = 0;
    v3[-1].m_hEntLandmark.m_Index = -1;
  }
  while ( v3 != &v28 );
  v5 = CUtlString::Get(&this->m_sLandmarkName);
  if ( CChangeLevel::FindLandmark(v5) != 0 )
  {
    g_iDebuggingTransition = 0;
    CUtlString::Clear(&st_sNextSpot);
    CUtlString::operator=(&st_sNextSpot, &this->m_sLandmarkName);
    CUtlString::operator=(&st_sNextMap, &this->m_sMapName);
    if ( pActivator != 0 && (m_pEntity = pActivator->m_pEntity) != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hActivator.m_Index) = v8 | this->m_hActivator.m_Index & 0x8000;
      this->m_hActivator.m_Index = (v7 << 15) | this->m_hActivator.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hActivator.m_Index = -1;
    }
    LODWORD(list.m_Memory.m_pMemory) = 0;
    *&list.m_Size = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnChangeLevel, pActivator, this, &list, 0.0);
    if ( (BYTE2(list.m_Memory.m_pMemory) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&list.m_Size);
    CChangeLevel::NotifyEntitiesOutOfTransition(this);
    if ( g_debug_transitions.m_pParent->m_Value.m_nValue != 0
      && (v15 = CUtlString::Get(&st_sNextSpot),
          v16 = CUtlString::Get(&st_sNextMap),
          Msg("CHANGE LEVEL: %s %s\n", v16, v15),
          g_debug_transitions.m_pParent->m_Value.m_nValue != 0) )
    {
      v17 = *(&stru_1A0B8.r_offset + g_pGameEntitySystem);
      v18 = *(*v17 + 112LL);
      tickcount = gpGlobals->tickcount;
      v19 = CGlobalVarsBase::curtime(gpGlobals, 0);
      v20 = v18(v17, 0, 0, tickcount, v19);
      v21 = v20;
      if ( v20 != 0 )
      {
        list.m_Size = 0;
        list.m_Memory.m_pMemory = 0;
        list.m_Memory.m_nAllocationCount = 0;
        list.m_Memory.m_nGrowSize = 0;
        (*(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 1))(g_pGameSaveRestoreBlockSet, v20, &list);
        v22 = CChangeLevel::ChangeList(v21, v21->m_levelInfo.m_levelList, 16);
        v23 = g_pGameSaveRestoreBlockSet;
        v21->m_levelInfo.m_nConnectionCount = v22;
        (*(v23->_vptr_ISaveRestoreBlockHandler + 4))(v23, &list);
        (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 120LL))(*(&stru_1A0B8.r_offset + g_pGameEntitySystem), v21);
        list.m_Size = 0;
        if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CEntityHandle,int>::Purge(&list.m_Memory);
          if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEntityHandle,int>::Purge(&list.m_Memory);
        }
      }
      CCollisionProperty::DisableTouchPersistsNotification(&this->m_Collision);
      this->m_pfnTouch.__pfn = 0;
      this->m_pfnTouch.__delta = 0;
    }
    else
    {
      v9 = *(g_pGameRules->_vptr_CGameRules + 47);
      v10 = CUtlString::Get(&st_sNextMap);
      v9(g_pGameRules, v10);
      v11 = *(*engine + 144LL);
      v12 = CUtlString::Get(&st_sNextSpot);
      v13 = CUtlString::Get(&st_sNextMap);
      v11(engine, v13, v12);
      CGameEntitySystem::CleanupDeleteList(g_pGameEntitySystem);
    }
    v14 = &levels[15];
    do
    {
      if ( v14->m_sLandmarkName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v14->m_sLandmarkName);
      if ( v14->m_sMapName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v14->m_sMapName);
      --v14;
    }
    while ( v14 != &list );
  }
  else
  {
    v24 = &levels[15];
    do
    {
      if ( v24->m_sLandmarkName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v24->m_sLandmarkName);
      if ( v24->m_sMapName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v24->m_sMapName);
      --v24;
    }
    while ( v24 != &list );
  }
}


// CChangeLevel::TouchChangeLevel  (line 2578, @0x00000000023bfc50, libserver.so)  // inlines: GetAbsVelocity, GetEHandle, GetEntryIndex, GetSerialNumber, Set, String, ToBasePlayer, operator=
// calls: CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::SetAbsVelocity, CBaseEntity::AddFlag, CUtlString::Get, DevMsg(char const*,...)
// strings: "In level transition: %s %s\n"
// globals: g_pTriggeredChangeLevel, g_hChangeLevelActivator
void __fastcall CChangeLevel::TouchChangeLevel(CChangeLevel *const this, CBaseEntity *pOther)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx
  const char *v7; // rbx
  const char *v8; // rax
  Vector vecVelocity; // [rsp+0h] [rbp-30h] BYREF

  if ( pOther != 0 && (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
  {
    if ( BYTE6(pOther[5].m_iszResponseContext.u.m_pAsString) != 0 )
    {
      if ( (pOther->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(pOther);
      vecVelocity = pOther->m_vecAbsVelocity;
      vecVelocity.x = vecVelocity.x * 0.5;
      vecVelocity.y = 0.5 * vecVelocity.y;
      CBaseEntity::SetAbsVelocity(pOther, &vecVelocity);
      CBaseEntity::AddFlag(pOther, 32);
    }
    else if ( g_pVr != 0 && (*(*g_pVr + 104LL))(g_pVr) != 0 && (*(*g_pVr + 112LL))(g_pVr) != 0
           || (*(pOther->_vptr_IHandleEntity + 346))(pOther) != 0
           || pOther->m_MoveType.m_Value != MoveType_t::MOVETYPE_NOCLIP )
    {
      m_pEntity = pOther->m_pEntity;
      g_pTriggeredChangeLevel = this;
      if ( m_pEntity != 0 )
      {
        v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v6 = 0x7FFF;
        else
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(g_hChangeLevelActivator.m_Index) = v6 | g_hChangeLevelActivator.m_Index & 0x8000;
        g_hChangeLevelActivator.m_Index = (v5 << 15) | g_hChangeLevelActivator.m_Index & 0x7FFF;
      }
      else
      {
        g_hChangeLevelActivator.m_Index = -1;
      }
    }
    else
    {
      v7 = CUtlString::Get(&this->m_sLandmarkName);
      v8 = CUtlString::Get(&this->m_sMapName);
      DevMsg("In level transition: %s %s\n", v8, v7);
    }
  }
}


// CChangeLevel::AddTransitionToList  (line 2619, @0x00000000023d0820, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator=, operator==
// calls: V_stricmp_fast, CUtlString::IsEqual_CaseSensitive, CUtlString::operator=, CUtlString::FixSlashes, CUtlString::ToLowerFast, CBaseEntity::GetAbsOrigin
// callers: CChangeLevel::BuildChangeLevelList
// globals: CEntityHandle::gm_pEntityList
int __fastcall CChangeLevel::AddTransitionToList(
        levellist_t *pLevelList,
        int listCount,
        const char *pMapName,
        const char *pLandmarkName,
        CEntityInstance *pentLandmark)
{
  __int64 v5; // r13
  const char *v10; // rcx
  levellist_t *v11; // rbx
  CEntityHandle *p_m_hEntLandmark; // r10
  levellist_t *v13; // rdx
  int v14; // eax
  CEntityIdentity *v15; // r8
  CEntityIdentity *v16; // r8
  bool IsEqual_CaseSensitive; // al
  levellist_t *v18; // r12
  CEntityIdentity *m_pEntity; // rax
  int v20; // edx
  __int16 v21; // cx
  CEntityHandle *v22; // [rsp+8h] [rbp-48h]
  const char *v23; // [rsp+10h] [rbp-40h]
  const char *pLandmarkNameb; // [rsp+18h] [rbp-38h]
  const char *pLandmarkNamec; // [rsp+18h] [rbp-38h]

  v5 = listCount;
  if ( pLevelList == 0
    || pMapName == 0
    || pLandmarkName == 0
    || pentLandmark == 0
    || V_stricmp_fast(pMapName, gpGlobals->mapname) == 0 )
  {
    return 0;
  }
  v10 = pLandmarkName;
  if ( v5 > 0 )
  {
    v11 = pLevelList;
    p_m_hEntLandmark = &pLevelList->m_hEntLandmark;
    v13 = &pLevelList[(v5 - 1) + 1];
    do
    {
      v14 = *(&p_m_hEntLandmark->m_Index + v11 - pLevelList);
      if ( (v14 + 2) > 1 )
      {
        v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_hEntLandmark.m_Index) >> 9) & 0x3F];
        if ( v15 != 0 )
        {
          v16 = &v15[v11->m_hEntLandmark.m_Index & 0x1FF];
          if ( v16 != 0 && v14 == v16->m_EHandle.m_Index && pentLandmark == v16->m_pInstance )
          {
            v22 = p_m_hEntLandmark;
            v23 = v10;
            pLandmarkNameb = v13;
            IsEqual_CaseSensitive = CUtlString::IsEqual_CaseSensitive(&v11->m_sMapName, pMapName);
            v13 = pLandmarkNameb;
            v10 = v23;
            p_m_hEntLandmark = v22;
            if ( IsEqual_CaseSensitive )
              return 0;
          }
        }
      }
      ++v11;
    }
    while ( v11 != v13 );
  }
  pLandmarkNamec = v10;
  v18 = &pLevelList[v5];
  CUtlString::operator=(&v18->m_sMapName, pMapName);
  CUtlString::FixSlashes(&v18->m_sMapName, 47);
  CUtlString::ToLowerFast(&v18->m_sMapName);
  CUtlString::operator=(&v18->m_sLandmarkName, pLandmarkNamec);
  m_pEntity = pentLandmark->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v21 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v18->m_hEntLandmark.m_Index) = v21 | v18->m_hEntLandmark.m_Index & 0x8000;
    v18->m_hEntLandmark.m_Index = (v20 << 15) | v18->m_hEntLandmark.m_Index & 0x7FFF;
  }
  else
  {
    v18->m_hEntLandmark.m_Index = -1;
  }
  v18->m_vecLandmarkOrigin = *CBaseEntity::GetAbsOrigin(pentLandmark);
  return 1;
}


// BuildChangeList  (line 2651, @0x00000000023e4c80, libserver.so)
// calls: CChangeLevel::ChangeList
// callers: CEntity2SaveRestore::LoadAdjacentEnts, CEntity2SaveRestore::StreamEntitiesToFile
int __fastcall BuildChangeList(CSaveRestoreData *pSaveData, levellist_t *pLevelList, int maxList)
{
  return CChangeLevel::ChangeList(pSaveData, pLevelList, maxList);
}


// CChangeLevel::InTransitionVolume  (line 2698, @0x00000000023d0a20, libserver.so)  // inlines: CGameTrace, ClassMatches, FClassnameIs, GetSolid, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TestEntityTriggerIntersection_Accurate, VectorAdd, VectorAligned, VectorSubtract, WorldAlignMaxs, WorldAlignMins, operator*=
// calls: CBaseEntity::GetRootMoveParent, CGameEntitySystem::FindEntityByName, CEntityIdentity::ClassMatches, CBaseEntity::Intersects, CGamePhysicsQueryInterface::CheckOverlap, CGameTrace::Init, CBaseEntity::GetAbsOrigin, CGamePhysicsQueryInterface::ClipRayToEntity
// callers: CChangeLevel::IsEntityInTransition, CChangeLevel::BuildEntityTransitionList
// strings: "trigger_transition"
int __fastcall CChangeLevel::InTransitionVolume(CBaseEntity *pEntity, const char *pVolumeName)
{
  char v4; // dh
  int result; // eax
  CBaseEntity *RootMoveParent; // r13
  CBaseEntity *EntityByName; // rbx
  int v8; // r15d
  CCollisionProperty *m_pCollision; // rdi
  char v10; // al
  CCollisionProperty *v11; // rdi
  __int64 v12; // rax
  CCollisionProperty *v13; // rdi
  const Vector *v14; // r15
  const Vector *v15; // rcx
  const Vector *v16; // rax
  float v17; // xmm0_4
  float v18; // xmm0_4
  float z; // xmm3_4
  float *p_x; // [rsp+8h] [rbp-148h]
  const Vector *AbsOrigin; // [rsp+10h] [rbp-140h]
  Ray_t ray; // [rsp+20h] [rbp-130h] BYREF
  CGameTrace_2 v23; // [rsp+70h] [rbp-E0h] BYREF

  v4 = (*(pEntity->_vptr_IHandleEntity + 19))(pEntity) >> 8;
  result = 2;
  if ( (v4 & 1) == 0 )
  {
    RootMoveParent = CBaseEntity::GetRootMoveParent(pEntity);
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pVolumeName, 0, 0, 0, 0);
    if ( EntityByName != 0 )
    {
      v8 = 1;
      while ( 1 )
      {
        if ( CEntityIdentity::ClassMatches(EntityByName->m_pEntity, "trigger_transition") )
        {
          if ( CBaseEntity::Intersects(EntityByName, RootMoveParent) )
          {
            m_pCollision = RootMoveParent->m_pCollision;
            if ( m_pCollision == 0 )
              return 2;
            v10 = (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision);
            if ( v10 == 2 )
            {
              memset(&v23.m_ShapeAttributes, 0, 31);
              v23.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
              CGameTrace::Init(&v23);
              v11 = RootMoveParent->m_pCollision;
              if ( v11 != 0 )
              {
                v12 = (*(v11->_vptr_ICollideable + 2))(v11);
                v13 = RootMoveParent->m_pCollision;
                v14 = v12;
                if ( v13 != 0 )
                  v15 = (*(v13->_vptr_ICollideable + 1))(v13);
                else
                  v15 = &vec3_origin;
              }
              else
              {
                v14 = &vec3_origin;
                v15 = &vec3_origin;
              }
              p_x = &v15->x;
              AbsOrigin = CBaseEntity::GetAbsOrigin(RootMoveParent);
              v16 = CBaseEntity::GetAbsOrigin(RootMoveParent);
              ray.m_Start.w = 0.0;
              ray.m_Delta.w = 0.0;
              ray.m_StartOffset.w = 0.0;
              ray.m_Extents.w = 0.0;
              ray.m_flRadius = 0.0;
              ray.m_Delta.x = AbsOrigin->x - v16->x;
              ray.m_Delta.y = AbsOrigin->y - v16->y;
              ray.m_Delta.z = AbsOrigin->z - v16->z;
              ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                             + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
              ray.m_Extents.x = v14->x - *p_x;
              ray.m_Extents.y = v14->y - p_x[1];
              v17 = v14->z - p_x[2];
              ray.m_Extents.x = ray.m_Extents.x * 0.5;
              ray.m_Extents.y = ray.m_Extents.y * 0.5;
              ray.m_Extents.z = v17 * 0.5;
              ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
                           + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
              ray.m_StartOffset.x = *p_x + v14->x;
              ray.m_StartOffset.y = p_x[1] + v14->y;
              v18 = p_x[2] + v14->z;
              ray.m_StartOffset.x = ray.m_StartOffset.x * 0.5;
              ray.m_StartOffset.y = ray.m_StartOffset.y * 0.5;
              ray.m_StartOffset.z = v18 * 0.5;
              ray.m_Start.x = v16->x + ray.m_StartOffset.x;
              ray.m_Start.y = v16->y + ray.m_StartOffset.y;
              z = v16->z;
              ray.m_StartOffset.x = -ray.m_StartOffset.x;
              ray.m_StartOffset.y = -ray.m_StartOffset.y;
              ray.m_StartOffset.z = -(v18 * 0.5);
              ray.m_Start.z = z + (v18 * 0.5);
              CGamePhysicsQueryInterface::ClipRayToEntity(
                g_pPhysicsQuery,
                &ray,
                0xFFFFFFFFFFFFFFFFLL,
                EntityByName,
                &v23);
              if ( v23.startsolid )
                return 2;
              v8 = 0;
              goto LABEL_13;
            }
            if ( v10 != 6 && v10 != 1
              || CGamePhysicsQueryInterface::CheckOverlap(g_pPhysicsQuery, EntityByName, RootMoveParent) )
            {
              return 2;
            }
          }
          v8 = 0;
        }
LABEL_13:
        EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, EntityByName, pVolumeName, 0, 0, 0, 0);
        if ( EntityByName == 0 )
          return v8;
      }
    }
    return 1;
  }
  return result;
}


// CChangeLevel::BuildChangeLevelList  (line 2729, @0x00000000023d1030, libserver.so)  // inlines: operator char const*
// calls: CGameEntitySystem::FindEntityByClassname, __dynamic_cast, CUtlString::Get, CChangeLevel::FindLandmark, CChangeLevel::AddTransitionToList
// callers: CChangeLevel::ChangeList
// strings: "trigger_changelevel"
// globals: `typeinfo for'CChangeLevel
int __fastcall CChangeLevel::BuildChangeLevelList(levellist_t *pLevelList, int maxList)
{
  int v2; // r12d
  CBaseEntity *i; // rbx
  const CUtlString *v4; // rax
  const CUtlString *v5; // r13
  const CUtlString *v6; // r15
  const char *v7; // rax
  CBaseEntity *Landmark; // r14
  const char *v9; // r15
  const char *v10; // rax

  v2 = 0;
  for ( i = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "trigger_changelevel");
        i != 0;
        i = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, i, "trigger_changelevel") )
  {
    v4 = __dynamic_cast(i, &`typeinfo for'CBaseEntity, &`typeinfo for'CChangeLevel, 0);
    v5 = v4;
    if ( v4 != 0 )
    {
      v6 = v4 + 186;
      v7 = CUtlString::Get(v4 + 186);
      Landmark = CChangeLevel::FindLandmark(v7);
      if ( Landmark != 0 )
      {
        v9 = CUtlString::Get(v6);
        v10 = CUtlString::Get(v5 + 185);
        if ( CChangeLevel::AddTransitionToList(pLevelList, v2, v10, v9, Landmark) != 0 && ++v2 >= maxList )
          break;
      }
    }
  }
  return v2;
}


// CChangeLevel::ComputeEntitySaveFlags  (line 2770, @0x00000000023d1120, libserver.so)  // inlines: CEntityHandle, CUtlString, GetClassNameAsCStr, GetClassname, GetDebugName, GetEHandle, GetEntryIndex, GetSerialNumber, Init, String, ~CUtlString
// calls: CUtlString::TrimRight, LoggingSystem_IsChannelEnabled, CUtlString::FreeMemoryBlock, CUtlString::operator+=, Msg, CUtlString::Get, CEntityIdentity::GetDebugName, LoggingSystem_Log, _Unwind_Resume
// callers: CChangeLevel::BuildEntityTransitionList
// strings: "\t\r\n ", "global ", "moveable ", "IGNORED due to being marked \"Dont save\".\n", "WILL TRANSITION", "SV" (9 total)
// globals: g_iDebuggingTransition
int __fastcall CChangeLevel::ComputeEntitySaveFlags(CBaseEntity *pEntity)
{
  int v2; // eax
  int v3; // r14d
  int v4; // ebx
  const char *v6; // r15
  char *v7; // r14
  const char *v8; // rax
  CEntityIdentity *v9; // rdx
  const char *v10; // r9
  unsigned __int16 v11; // si
  __int64 v12; // r8
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi
  CUtlString desc; // [rsp+30h] [rbp-40h] BYREF

  if ( g_iDebuggingTransition == 2 )
  {
    DebugName = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
    m_pEntity = pEntity->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    Msg("Trying %s (%s): ", m_pAsString, DebugName);
  }
  v2 = (*(pEntity->_vptr_IHandleEntity + 19))(pEntity);
  if ( v2 >= 0 )
  {
    v3 = (v2 & 0x80) != 0 ? 0x20000000 : 0;
    v4 = v3;
    if ( pEntity->m_iGlobalname.u.m_Id != 0 && SLOBYTE(pEntity->m_pEntity->m_flags) >= 0 )
    {
      v3 |= 0x10000000u;
      v4 = v3;
    }
    else if ( g_iDebuggingTransition == 2 && v3 == 0 )
    {
      Msg("IGNORED, no across_transition flag & no globalname\n");
      desc.m_pString = 0;
      goto LABEL_6;
    }
    desc.m_pString = 0;
    if ( (v3 & 0x20000000) != 0 )
    {
      CUtlString::operator+=(&desc, "moveable ");
      if ( (v3 & 0x10000000) == 0 )
        goto LABEL_7;
      goto LABEL_11;
    }
LABEL_6:
    if ( (v3 & 0x10000000) == 0 )
    {
LABEL_7:
      CUtlString::TrimRight(&desc, "\t\r\n ");
      if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
      {
        v6 = CUtlString::Get(&desc);
        v7 = "WILL TRANSITION";
        if ( v4 == 0 )
          v7 = "NO";
        v8 = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
        v9 = pEntity->m_pEntity;
        v10 = "";
        if ( v9->m_designerName.u.m_Id != 0 )
          v10 = v9->m_designerName.u.m_pAsString;
        v11 = 0x7FFF;
        if ( v9->m_EHandle.m_Index != -1 )
          v11 = v9->m_EHandle.m_Index & 0x7FFF;
        v12 = 0x7FFF;
        if ( ((((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v11 & 0x7FFF) != 0xFFFFFFFF )
          v12 = v11;
        LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  changelevel trying %d %s (%s) %s %s\n", "SV", v12, v10, v8, v7, v6);
      }
      if ( desc.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&desc);
      return v4;
    }
LABEL_11:
    CUtlString::operator+=(&desc, "global ");
    goto LABEL_7;
  }
  v4 = 0;
  if ( g_iDebuggingTransition == 2 )
    Msg("IGNORED due to being marked \"Dont save\".\n");
  return v4;
}


// CChangeLevel::BuildEntityTransitionList  (line 2862, @0x00000000023e3480, libserver.so)  // inlines: CUtlKeyValuePair<CBaseEntity*, int>, Construct<CUtlKeyValuePair<CBaseEntity*, int>, CBaseEntity*, int>, DoInsert<CBaseEntity*>, DoLookup<CBaseEntity*>, Find, GetClassNameAsCStr, GetClassname, GetDebugName, GetInstance, GetInt, IndexToIdentity, Insert, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, MaybeAddEntityToTransitionList, NameMatches, String, ToBasePlayer, operator(), operator[]
// calls: UTIL_EntitiesInPVS, CChangeLevel::ComputeEntitySaveFlags, CChangeLevel::InTransitionVolume, Msg, CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::DoInsertUnconstructed, CEntityIdentity::GetDebugName, CBaseEntity::SetDebugBits, CBasePlayer::GetViewModel, CUtlString::Get, CEntityIdentity::NameMatches, CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::DoLookup<CBaseEntity*>
// callers: CChangeLevel::ChangeList
// strings: "IGNORED, outside transition volume.\n", "ADDED %s (%s) to transition.\n", "ADDED.\n"
// globals: g_iDebuggingTransition, st_sNextSpot
void __fastcall CChangeLevel::BuildEntityTransitionList(
        CBaseEntity *pLandmarkEntity,
        const char *pLandmarkName,
        CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> > *const entityList)
{
  CEntityIdentity *v6; // rax
  CBasePlayer *m_pInstance; // rbx
  CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> >::handle_t *v8; // rcx
  CBaseEntity *v9; // rbx
  CBaseEntity *v10; // rax
  int v11; // r12d
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // r12d
  CUtlHashtableEntry<CBaseEntity*,int> *v15; // rax
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi
  int i; // r12d
  CBaseViewModel *ViewModel; // rax
  CBaseEntity *v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // r8d
  CUtlHashtableEntry<CBaseEntity*,int> *v25; // rax
  const char *v26; // rax
  const char *v27; // rsi
  CEntityIdentity *v28; // rdi
  CBaseEntity *v29; // rcx
  unsigned int v30; // edx
  unsigned int v31; // eax
  CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> >::handle_t *v32; // rcx
  CUtlHashtableEntry<CBaseEntity*,int> *v33; // rax
  const char *v34; // rax
  CEntityIdentity *v35; // rcx
  const char *v36; // rsi
  const char *v37; // rax
  int v38; // eax
  int v39; // eax
  unsigned int v40; // [rsp+4h] [rbp-3Ch]
  CBaseEntity *pVM; // [rsp+8h] [rbp-38h]
  CBaseEntity *pVMa; // [rsp+8h] [rbp-38h]
  unsigned int pVMb; // [rsp+8h] [rbp-38h]

  if ( g_debug_transitions.m_pParent->m_Value.m_nValue != 0
    && (v37 = CUtlString::Get(&st_sNextSpot), CEntityIdentity::NameMatches(pLandmarkEntity->m_pEntity, v37)) )
  {
    g_iDebuggingTransition = g_debug_transitions.m_pParent->m_Value.m_nValue;
    CBaseEntity::SetDebugBits(pLandmarkEntity, 0xEu);
  }
  else
  {
    g_iDebuggingTransition = 0;
  }
  v6 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[0];
  if ( v6 != 0 && v6 != -120LL && (v6[1].m_EHandle.m_Index & 0x7FFF) == 1 )
  {
    m_pInstance = v6[1].m_pInstance;
    if ( m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
    {
      v12 = 33 * (((4097 * m_pInstance + 2127912214) >> 19) ^ (4097 * m_pInstance + 2127912214) ^ 0xC761C23C);
      v13 = 9 * ((v12 - 369570787) ^ ((v12 + 374761393) << 9)) - 42973499;
      v14 = HIWORD(v13) ^ v13 ^ 0xB55A4F09;
      if ( entityList->m_nUsed == 0
        || CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoLookup<CBaseEntity *>(
             entityList,
             m_pInstance,
             v14,
             v8) == -1 )
      {
        v15 = &entityList->m_table.m_pMemory[CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoInsertUnconstructed(
                                               entityList,
                                               v14,
                                               1)];
        if ( v15 != -4LL )
        {
          *v15->data = m_pInstance;
          v15->data[2] = 0x20000000;
        }
        if ( g_iDebuggingTransition != 0 )
        {
          if ( g_iDebuggingTransition == 2 )
          {
            Msg("ADDED.\n");
          }
          else
          {
            DebugName = CEntityIdentity::GetDebugName(m_pInstance->m_pEntity);
            m_pEntity = m_pInstance->m_pEntity;
            m_pAsString = "";
            if ( m_pEntity->m_designerName.u.m_Id != 0 )
              m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
            Msg("ADDED %s (%s) to transition.\n", m_pAsString, DebugName);
          }
          CBaseEntity::SetDebugBits(m_pInstance, 6u);
        }
      }
      for ( i = 0; i != 2; ++i )
      {
        ViewModel = CBasePlayer::GetViewModel(m_pInstance, i);
        v21 = ViewModel;
        if ( ViewModel != 0 )
        {
          v22 = 33 * (((4097 * ViewModel + 2127912214) >> 19) ^ (4097 * ViewModel + 2127912214) ^ 0xC761C23C);
          v23 = 9 * ((v22 - 369570787) ^ ((v22 + 374761393) << 9)) - 42973499;
          v24 = HIWORD(v23) ^ v23 ^ 0xB55A4F09;
          if ( entityList->m_nUsed == 0
            || (v40 = HIWORD(v23) ^ v23 ^ 0xB55A4F09,
                pVMa = v21,
                v38 = CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoLookup<CBaseEntity *>(
                        entityList,
                        v21,
                        v24,
                        v21),
                v21 = pVMa,
                v24 = v40,
                v38 == -1) )
          {
            pVM = v21;
            v25 = &entityList->m_table.m_pMemory[CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoInsertUnconstructed(
                                                   entityList,
                                                   v24,
                                                   1)];
            if ( v25 != -4LL )
            {
              *v25->data = pVM;
              v25->data[2] = 0x20000000;
            }
            if ( g_iDebuggingTransition != 0 )
            {
              if ( g_iDebuggingTransition == 2 )
              {
                Msg("ADDED.\n");
                v29 = pVM;
              }
              else
              {
                v26 = CEntityIdentity::GetDebugName(pVM->m_pEntity);
                v27 = "";
                v28 = pVM->m_pEntity;
                if ( v28->m_designerName.u.m_Id != 0 )
                  v27 = v28->m_designerName.u.m_pAsString;
                Msg("ADDED %s (%s) to transition.\n", v27, v26);
                v29 = pVM;
              }
              CBaseEntity::SetDebugBits(v29, 6u);
            }
          }
        }
      }
    }
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = UTIL_EntitiesInPVS(pLandmarkEntity, v9);
    v9 = v10;
    if ( v10 == 0 )
      break;
    v11 = CChangeLevel::ComputeEntitySaveFlags(v10);
    if ( v11 != 0 )
    {
      if ( CChangeLevel::InTransitionVolume(v9, pLandmarkName) != 0 )
      {
        v30 = 33 * (((4097 * v9 + 2127912214) >> 19) ^ (4097 * v9 + 2127912214) ^ 0xC761C23C);
        v31 = 9 * ((v30 - 369570787) ^ ((v30 + 374761393) << 9)) - 42973499;
        v32 = (HIWORD(v31) ^ v31 ^ 0xB55A4F09);
        if ( entityList->m_nUsed == 0
          || (pVMb = HIWORD(v31) ^ v31 ^ 0xB55A4F09,
              v39 = CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoLookup<CBaseEntity *>(
                      entityList,
                      v9,
                      v32,
                      v32),
              LODWORD(v32) = pVMb,
              v39 == -1) )
        {
          v33 = &entityList->m_table.m_pMemory[CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoInsertUnconstructed(
                                                 entityList,
                                                 v32,
                                                 1)];
          if ( v33 != -4LL )
          {
            *v33->data = v9;
            v33->data[2] = v11;
          }
          if ( g_iDebuggingTransition != 0 )
          {
            if ( g_iDebuggingTransition == 2 )
            {
              Msg("ADDED.\n");
            }
            else
            {
              v34 = CEntityIdentity::GetDebugName(v9->m_pEntity);
              v35 = v9->m_pEntity;
              v36 = "";
              if ( v35->m_designerName.u.m_Id != 0 )
                v36 = v35->m_designerName.u.m_pAsString;
              Msg("ADDED %s (%s) to transition.\n", v36, v34);
            }
            CBaseEntity::SetDebugBits(v9, 6u);
          }
        }
      }
      else if ( g_iDebuggingTransition == 2 )
      {
        Msg("IGNORED, outside transition volume.\n");
      }
    }
  }
}


// CChangeLevel::AddDependentEntities  (line 2934, @0x00000000023d13d0, libserver.so)  // inlines: FirstHandle, GetEntryIndex, Key, NextHandle, Set, V_memset, memset, operator[]
// calls: memset, __stack_chk_fail
void __fastcall CChangeLevel::AddDependentEntities(
        CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> > *const entityList)
{
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<CBaseEntity*,int> *m_pMemory; // rsi
  CUtlHashtableEntry<CBaseEntity*,int> *v4; // rdx
  int v5; // eax
  __int64 v6; // r13
  unsigned __int64 v7; // rdx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  CUtlHashtableEntry<CBaseEntity*,int> *v11; // rdx
  int v12; // r15d
  _DWORD v13[4]; // [rsp+10h] [rbp-1050h] BYREF
  char pEntitiesSaved[4104]; // [rsp+20h] [rbp-1040h] BYREF
  unsigned __int64 v15; // [rsp+1028h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  memset(pEntitiesSaved, 0, 0x1000u);
  m_nAllocationCount = entityList->m_table.m_nAllocationCount;
  m_pMemory = entityList->m_table.m_pMemory;
  if ( m_nAllocationCount > 0 )
  {
    v4 = m_pMemory + 1;
    v5 = 0;
    if ( m_pMemory->flags_and_hash >= 0 )
    {
      v12 = 0;
      goto LABEL_9;
    }
    while ( ++v5 != m_nAllocationCount )
    {
      ++v4;
      if ( v4[-1].flags_and_hash >= 0 )
      {
        if ( v5 != -1 )
        {
          v12 = v5;
LABEL_9:
          while ( 1 )
          {
            v6 = v12;
            (*(**m_pMemory[v6].data + 24LL))(v13);
            if ( v13[0] == -1 )
            {
              LOBYTE(v8) = 0x80;
              v7 = 4095;
            }
            else
            {
              v7 = LOWORD(v13[0]) << 49 >> 52;
              v8 = 1 << (v13[0] & 7);
            }
            pEntitiesSaved[v7] |= v8;
            v9 = v12 + 1;
            v10 = entityList->m_table.m_nAllocationCount;
            m_pMemory = entityList->m_table.m_pMemory;
            if ( v12 + 1 >= v10 )
              break;
            v11 = &m_pMemory[v9 + 1];
            if ( m_pMemory[v6 + 1].flags_and_hash < 0 )
            {
              while ( ++v9 != v10 )
              {
                ++v11;
                if ( v11[-1].flags_and_hash >= 0 )
                  goto LABEL_17;
              }
              return;
            }
LABEL_17:
            v12 = v9;
            if ( v9 == -1 )
              return;
          }
        }
        return;
      }
    }
  }
}


// CChangeLevel::ChangeList  (line 2965, @0x00000000023e4960, libserver.so)  // inlines: CUtlHashtable, CUtlMemory, FirstHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Key, LookupEntity, MarkInvalid, NextHandle, Purge, RemoveAll, operator CEntityInstance*, operator char const*, operator[], ~CUtlHashtable, ~CUtlMemory
// calls: CChangeLevel::BuildChangeLevelList, CGameSaveRestoreInfo::NumEntities, CSave::CSave, CUtlString::Get, CChangeLevel::BuildEntityTransitionList, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int>::Purge, CSave::~CSave, CSave::EntityIndex, CSave::EntityFlagsSet, CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::~CUtlHashtable, _Unwind_Resume
// callers: BuildChangeList, CChangeLevel::ChangeLevelNow
// globals: CEntityHandle::gm_pEntityList
int __fastcall CChangeLevel::ChangeList(CSaveRestoreData *pSaveData, levellist_t *pLevelList, int maxList)
{
  CBaseEntity *m_pInstance; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rdx
  const char *v8; // rax
  int m_nAllocationCount; // edx
  CUtlHashtableEntry<CBaseEntity*,int> *m_pMemory; // rcx
  CUtlHashtableEntry<CBaseEntity*,int> *v11; // rax
  int v12; // ebx
  int m_nUsed; // eax
  int v14; // edx
  CUtlHashtableEntry<CBaseEntity*,int> *v15; // rcx
  __int64 v17; // r12
  CUtlHashtableEntry<CBaseEntity*,int> *v18; // rcx
  int v19; // r14d
  int v20; // eax
  CUtlHashtableEntry<CBaseEntity*,int> *v21; // rax
  levellist_t *v23; // [rsp+20h] [rbp-B0h]
  int count; // [rsp+28h] [rbp-A8h]
  int i; // [rsp+2Ch] [rbp-A4h]
  CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> > entityList; // [rsp+30h] [rbp-A0h] BYREF
  CSave saveHelper; // [rsp+50h] [rbp-80h] BYREF

  count = CChangeLevel::BuildChangeLevelList(pLevelList, maxList);
  if ( pSaveData != 0 && CGameSaveRestoreInfo::NumEntities(&pSaveData->CGameSaveRestoreInfo) != 0 )
  {
    CSave::CSave(&saveHelper, pSaveData);
    if ( count > 0 )
    {
      i = 0;
      v23 = pLevelList;
      do
      {
        m_pInstance = 0;
        memset(&entityList, 0, 20);
        entityList.m_bSizeLocked = 0;
        entityList.m_nMinSize = 32;
        m_Index = v23->m_hEntLandmark.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_hEntLandmark.m_Index) >> 9) & 0x3F];
          if ( v6 != 0 )
          {
            v7 = &v6[v23->m_hEntLandmark.m_Index & 0x1FF];
            if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
              m_pInstance = v7->m_pInstance;
          }
        }
        v8 = CUtlString::Get(&v23->m_sLandmarkName);
        CChangeLevel::BuildEntityTransitionList(m_pInstance, v8, &entityList);
        m_nAllocationCount = entityList.m_table.m_nAllocationCount;
        m_pMemory = entityList.m_table.m_pMemory;
        if ( entityList.m_table.m_nAllocationCount > 0 )
        {
          v11 = entityList.m_table.m_pMemory + 1;
          v12 = 0;
          if ( entityList.m_table.m_pMemory->flags_and_hash >= 0 )
          {
            v12 = 0;
            goto LABEL_28;
          }
          while ( ++v12 != entityList.m_table.m_nAllocationCount )
          {
            ++v11;
            if ( v11[-1].flags_and_hash >= 0 )
            {
LABEL_27:
              while ( v12 != -1 )
              {
LABEL_28:
                v17 = v12;
                v18 = &m_pMemory[v17];
                v19 = (1 << i) | v18->data[2];
                v20 = CSave::EntityIndex(&saveHelper, *v18->data);
                CSave::EntityFlagsSet(&saveHelper, v20, v19);
                m_nAllocationCount = entityList.m_table.m_nAllocationCount;
                ++v12;
                m_pMemory = entityList.m_table.m_pMemory;
                if ( v12 >= entityList.m_table.m_nAllocationCount )
                  goto LABEL_15;
                v21 = &entityList.m_table.m_pMemory[v12 + 1];
                if ( entityList.m_table.m_pMemory[v17 + 1].flags_and_hash < 0 )
                {
                  while ( ++v12 != entityList.m_table.m_nAllocationCount )
                  {
                    ++v21;
                    if ( v21[-1].flags_and_hash >= 0 )
                      goto LABEL_27;
                  }
                  goto LABEL_15;
                }
              }
              break;
            }
          }
        }
LABEL_15:
        m_nUsed = entityList.m_nUsed;
        if ( entityList.m_nUsed != 0 )
        {
          v14 = m_nAllocationCount - 1;
          if ( v14 >= 0 )
          {
            v15 = &entityList.m_table.m_pMemory[v14];
            do
            {
              if ( v15->flags_and_hash >= 0 )
              {
                --m_nUsed;
                v15->flags_and_hash = 0x80000000;
                if ( m_nUsed == 0 )
                  break;
              }
              --v14;
              --v15;
            }
            while ( v14 != -1 );
          }
          entityList.m_nUsed = 0;
        }
        if ( (entityList.m_table.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>::Purge(&entityList.m_table);
        ++i;
        ++v23;
      }
      while ( i != count );
    }
    CSave::~CSave(&saveHelper);
  }
  return count;
}


// CTriggerPush::~CTriggerPush  (line 3009, @0x00000000023f6540, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerPush::~CTriggerPush(CTriggerPush *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerPush::~CTriggerPush  (line 3009, @0x00000000023f6c00, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerPush, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerPush::~CTriggerPush(CTriggerPush *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerPush::GetEntityClass  (line 3011, @0x00000000023e6330, libserver.so)
CEntityClass *__cdecl CTriggerPush::GetEntityClass()
{
  return g_pEntityCTriggerPushClass;
}


// CTriggerPush::Schema_DynamicBinding  (line 3011, @0x00000000023e6340, libserver.so)
// globals: CTriggerPush::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerPush::Schema_DynamicBinding(const CTriggerPush *const this)
{
  return CTriggerPush::s_pSchemaBinding;
}


// CTriggerPush::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3011, @0x00000000023e6350, libserver.so)
// globals: CTriggerPush::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerPush::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerPush::CEntityInstanceEntityClass *const this)
{
  return CTriggerPush::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerPush::CEntityInstanceEntityClass::DestructInstance  (line 3011, @0x00000000023e6360, libserver.so)  // inlines: Destruct<CTriggerPush>
void __fastcall CTriggerPush::CEntityInstanceEntityClass::DestructInstance(
        CTriggerPush::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerPush::CEntityInstanceEntityClass::FreeInstance  (line 3011, @0x00000000023e6380, libserver.so)
void __fastcall CTriggerPush::CEntityInstanceEntityClass::FreeInstance(
        CTriggerPush::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerPush::CEntityInstanceEntityClass::CanAllocate  (line 3011, @0x00000000023e63a0, libserver.so)
bool __fastcall CTriggerPush::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerPush::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerPush::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3011, @0x00000000023e63b0, libserver.so)
// globals: CTriggerPush::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerPush::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerPush::CEntityInstanceEntityClass *const this)
{
  return CTriggerPush::s_pSchemaBinding;
}


// CTriggerPush::CEntityInstanceEntityClass::AllocateInstance  (line 3011, @0x00000000023e84b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerPush::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerPush::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1504);
  memset(v1, 0, 0x5E0u);
  return v1;
}


// CTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3011, @0x00000000023ea290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerPush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3011, @0x00000000023ea2b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerPush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerPush::CEntityInstanceEntityClass::ConstructInstance  (line 3011, @0x00000000023f1540, libserver.so)  // inlines: CTriggerPush, Construct<CTriggerPush>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerPush::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerPush::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_40C42F0;
  }
  return p;
}


// CTriggerPush::GetEntityClassInfo  (line 3011, @0x00000000023f2390, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CScriptTriggerPush::GetEntityClassInternal
// strings: "CTriggerPush", "CBaseTrigger", "CBaseToggle"
// globals: `guard variable for'CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo, CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo, `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClassInfo *__cdecl CTriggerPush::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo != 0 )
    return &CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo) == 0 )
    return &CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo;
  if ( `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
        "CBaseToggle",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo,
      "CBaseTrigger",
      "trigger",
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo,
    "CTriggerPush",
    "trigger_push",
    0,
    &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
  __cxa_guard_release(&`guard variable for'CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo);
  return &CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo;
}


// CTriggerPush::GetEntityClassInternal  (line 3011, @0x00000000023f24a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerPush"
// globals: `guard variable for'CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass, CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass, __dso_handle, CTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo, CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo
CEntityClass *__cdecl CTriggerPush::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass);
    CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass._vptr_CEntityClass = off_40C3AD0;
    __cxa_guard_release(&`guard variable for'CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass);
    __cxa_atexit(
      CTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerPushClass != 0 )
    return &CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass;
  if ( `guard variable for'CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo,
      "CTriggerPush",
      "trigger_push",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo);
  }
  CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass.m_pClassInfo = &CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo;
  CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass.m_pBaseClassInfo = CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerPushClass = &CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass;
  CTriggerPush::GetEntityClassInfo(void)::g_EntityCTriggerPushClassInfo.m_pClass = &CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass;
  CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerPushClass->m_pComponentOverrides = 0;
  return &CTriggerPush::GetEntityClassInternal(void)::g_EntityCTriggerPushClass;
}


// CTriggerPush::GetDataDescMap  (line 3038, @0x00000000023bb350, libserver.so)
// globals: CTriggerPush::m_DataMap
datamap_t *__fastcall CTriggerPush::GetDataDescMap(CTriggerPush *const this)
{
  return &CTriggerPush::m_DataMap;
}


// CTriggerPush::AddDatadescMetadataKeys  (line 3038, @0x00000000023d1560, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerPush::GetEntityClass(void)
void __fastcall CTriggerPush::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerPush::GetEntityClass);
}


// CTriggerPush::GetBaseMap  (line 3038, @0x00000000023d1580, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerPush::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerPush>  (line 3038, @0x00000000023d1590, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerPush"
// globals: `guard variable for'DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder, CBaseTrigger::m_DataMap, CTriggerPush::GetEntityClass(void), CTriggerPush::m_DataMap, DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerPush>(CTriggerPush *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder.m_pszBase = "CTriggerPush";
    DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerPush>(CTriggerPush *)::nameHolder,
      &_dso_handle);
  }
  CTriggerPush::m_DataMap.dataNumFields = 7;
  CTriggerPush::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  CTriggerPush::m_DataMap.dataDesc = &DataMapInit<CTriggerPush>(CTriggerPush *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerPush::m_DataMap, CTriggerPush::GetEntityClass);
  return &CTriggerPush::m_DataMap;
}


// CScriptTriggerPush::~CScriptTriggerPush  (line 3057, @0x00000000023f5f90, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerPush, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CScriptTriggerPush::~CScriptTriggerPush(CScriptTriggerPush *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CScriptTriggerPush::~CScriptTriggerPush  (line 3057, @0x00000000023f6e80, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CScriptTriggerPush, ~CTriggerPush, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CScriptTriggerPush::~CScriptTriggerPush(CScriptTriggerPush *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CScriptTriggerPush::GetEntityClass  (line 3059, @0x00000000023e63c0, libserver.so)
CEntityClass *__cdecl CScriptTriggerPush::GetEntityClass()
{
  return g_pEntityCScriptTriggerPushClass;
}


// CScriptTriggerPush::Schema_DynamicBinding  (line 3059, @0x00000000023e63d0, libserver.so)
// globals: CScriptTriggerPush::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptTriggerPush::Schema_DynamicBinding(
        const CScriptTriggerPush *const this)
{
  return CScriptTriggerPush::s_pSchemaBinding;
}


// CScriptTriggerPush::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3059, @0x00000000023e63e0, libserver.so)
// globals: CScriptTriggerPush::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptTriggerPush::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CScriptTriggerPush::CEntityInstanceEntityClass *const this)
{
  return CScriptTriggerPush::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CScriptTriggerPush::CEntityInstanceEntityClass::DestructInstance  (line 3059, @0x00000000023e63f0, libserver.so)  // inlines: Destruct<CScriptTriggerPush>
void __fastcall CScriptTriggerPush::CEntityInstanceEntityClass::DestructInstance(
        CScriptTriggerPush::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CScriptTriggerPush::CEntityInstanceEntityClass::FreeInstance  (line 3059, @0x00000000023e6410, libserver.so)
void __fastcall CScriptTriggerPush::CEntityInstanceEntityClass::FreeInstance(
        CScriptTriggerPush::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CScriptTriggerPush::CEntityInstanceEntityClass::CanAllocate  (line 3059, @0x00000000023e6430, libserver.so)
bool __fastcall CScriptTriggerPush::CEntityInstanceEntityClass::CanAllocate(
        const CScriptTriggerPush::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CScriptTriggerPush::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3059, @0x00000000023e6440, libserver.so)
// globals: CScriptTriggerPush::s_pSchemaBinding
const ISchemaBinding *__fastcall CScriptTriggerPush::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CScriptTriggerPush::CEntityInstanceEntityClass *const this)
{
  return CScriptTriggerPush::s_pSchemaBinding;
}


// CScriptTriggerPush::CEntityInstanceEntityClass::AllocateInstance  (line 3059, @0x00000000023e84f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CScriptTriggerPush::CEntityInstanceEntityClass::AllocateInstance(
        CScriptTriggerPush::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1512);
  memset(v1, 0, 0x5E8u);
  return v1;
}


// CScriptTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3059, @0x00000000023ea2e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CScriptTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptTriggerPush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CScriptTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3059, @0x00000000023ea300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CScriptTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptTriggerPush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CScriptTriggerPush::CEntityInstanceEntityClass::ConstructInstance  (line 3059, @0x00000000023f1570, libserver.so)  // inlines: CScriptTriggerPush, CTriggerPush, Construct<CScriptTriggerPush>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CScriptTriggerPush::CEntityInstanceEntityClass::ConstructInstance(
        CScriptTriggerPush::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_40C3BD0;
  }
  return p;
}


// CScriptTriggerPush::GetEntityClassInternal  (line 3059, @0x00000000023f25f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CTriggerPush::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "script_trigger_push", "CScriptTriggerPush"
// globals: `guard variable for'CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass, CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass, __dso_handle, CScriptTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CScriptTriggerPush::GetEntityClassInfo(void)::g_EntityCScriptTriggerPushClassInfo, CScriptTriggerPush::GetEntityClassInfo(void)::g_EntityCScriptTriggerPushClassInfo
CEntityClass *__cdecl CScriptTriggerPush::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass) != 0 )
  {
    CEntityClass::CEntityClass(&CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass);
    CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass._vptr_CEntityClass = off_40C3B50;
    __cxa_guard_release(&`guard variable for'CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass);
    __cxa_atexit(
      CScriptTriggerPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass,
      &_dso_handle);
  }
  if ( g_pEntityCScriptTriggerPushClass != 0 )
    return &CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass;
  if ( `guard variable for'CScriptTriggerPush::GetEntityClassInfo(void)::g_EntityCScriptTriggerPushClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptTriggerPush::GetEntityClassInfo(void)::g_EntityCScriptTriggerPushClassInfo) != 0 )
  {
    EntityClassInfo = CTriggerPush::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CScriptTriggerPush::GetEntityClassInfo(void)::g_EntityCScriptTriggerPushClassInfo,
      "CScriptTriggerPush",
      "script_trigger_push",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CScriptTriggerPush::GetEntityClassInfo(void)::g_EntityCScriptTriggerPushClassInfo);
  }
  CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass.m_pClassInfo = &CScriptTriggerPush::GetEntityClassInfo(void)::g_EntityCScriptTriggerPushClassInfo;
  CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass.m_pBaseClassInfo = CScriptTriggerPush::GetEntityClassInfo(void)::g_EntityCScriptTriggerPushClassInfo.m_pBaseClassInfo;
  g_pEntityCScriptTriggerPushClass = &CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass;
  CScriptTriggerPush::GetEntityClassInfo(void)::g_EntityCScriptTriggerPushClassInfo.m_pClass = &CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass;
  CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCScriptTriggerPushClass->m_pComponentOverrides = 0;
  return &CScriptTriggerPush::GetEntityClassInternal(void)::g_EntityCScriptTriggerPushClass;
}


// CScriptTriggerPush::Spawn  (line 3062, @0x00000000023f5de0, libserver.so)  // inlines: operator-
// calls: CCollisionProperty::SetupPhysicsFromUnscaledOBB, CTriggerPush::Spawn
void __fastcall CScriptTriggerPush::Spawn(CScriptTriggerPush *const this, const CEntityKeyValues *pKeyValues)
{
  float y; // xmm2_4
  float x; // xmm3_4
  Vector vMins; // [rsp+0h] [rbp-20h] BYREF

  y = this->m_vExtent.y;
  x = this->m_vExtent.x;
  vMins.z = -this->m_vExtent.z;
  vMins.y = -y;
  vMins.x = -x;
  CCollisionProperty::SetupPhysicsFromUnscaledOBB(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    2,
    &vMins,
    &this->m_vExtent);
  CTriggerPush::Spawn(this, pKeyValues);
}


// CScriptTriggerPush::GetDataDescMap  (line 3071, @0x00000000023bb360, libserver.so)
// globals: CScriptTriggerPush::m_DataMap
datamap_t *__fastcall CScriptTriggerPush::GetDataDescMap(CScriptTriggerPush *const this)
{
  return &CScriptTriggerPush::m_DataMap;
}


// CScriptTriggerPush::AddDatadescMetadataKeys  (line 3071, @0x00000000023d1660, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CScriptTriggerPush::GetEntityClass(void)
void __fastcall CScriptTriggerPush::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CScriptTriggerPush::GetEntityClass);
}


// CScriptTriggerPush::GetBaseMap  (line 3071, @0x00000000023d1680, libserver.so)
// globals: CTriggerPush::m_DataMap
datamap_t *__cdecl CScriptTriggerPush::GetBaseMap()
{
  return &CTriggerPush::m_DataMap;
}


// DataMapInit<CScriptTriggerPush>  (line 3071, @0x00000000023d1690, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CScriptTriggerPush"
// globals: `guard variable for'DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder, CTriggerPush::m_DataMap, CScriptTriggerPush::GetEntityClass(void), CScriptTriggerPush::m_DataMap, DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder) != 0 )
  {
    DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder.m_pszBase = "CScriptTriggerPush";
    DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::nameHolder,
      &_dso_handle);
  }
  CScriptTriggerPush::m_DataMap.dataNumFields = 1;
  CScriptTriggerPush::m_DataMap.baseMap = &CTriggerPush::m_DataMap;
  CScriptTriggerPush::m_DataMap.dataDesc = &DataMapInit<CScriptTriggerPush>(CScriptTriggerPush *)::dataDesc[1];
  AddDatadescMetadataKeys(&CScriptTriggerPush::m_DataMap, CScriptTriggerPush::GetEntityClass);
  return &CScriptTriggerPush::m_DataMap;
}


// CTriggerPush::Spawn  (line 3079, @0x00000000023d6a70, libserver.so)  // inlines: QAngle, VectorIRotate, operator=
// calls: AngleVectors, CCollisionProperty::EnableTouchPersistsNotification, CBaseTrigger::Spawn, CBaseTrigger::InitTrigger, CBaseEntity::EntityToWorldTransform, VectorIRotate
// callers: CScriptTriggerPush::Spawn
void __fastcall CTriggerPush::Spawn(CTriggerPush *const this, const CEntityKeyValues *pKeyValues)
{
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  matrix3x4_t *v6; // rax
  Vector vecAbsDir; // [rsp+0h] [rbp-40h] BYREF
  QAngle angPushDir; // [rsp+10h] [rbp-30h] BYREF

  y = this->m_vecPushDir.y;
  x = this->m_vecPushDir.x;
  angPushDir.z = this->m_vecPushDir.z;
  angPushDir.y = y;
  angPushDir.x = x;
  AngleVectors(&angPushDir, &vecAbsDir, 0, 0);
  if ( this->m_bPushDirIsLocal )
  {
    this->m_vecPushDir = vecAbsDir;
  }
  else
  {
    v6 = CBaseEntity::EntityToWorldTransform(this);
    VectorIRotate(&vecAbsDir.x, v6, &this->m_vecPushDir.x);
  }
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
  if ( this->m_flSpeed == 0.0 )
    this->m_flSpeed = 100.0;
}


// CTriggerPush::Activate  (line 3110, @0x00000000023bcaa0, libserver.so)  // inlines: GetBool, GetInt
// calls: ConVarRef::ConVarRef, CBaseTrigger::Activate
// strings: "sv_alternateticks"
void __fastcall CTriggerPush::Activate(CTriggerPush *const this, ActivateType_t activateType)
{
  float m_flAlternateTicksFix; // xmm0_4
  ConVarRef sv_alternateticks; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&sv_alternateticks, "sv_alternateticks");
  m_flAlternateTicksFix = this->m_flAlternateTicksFix;
  if ( m_flAlternateTicksFix == 0.0 || sv_alternateticks.m_pConVarState->m_Value.m_nValue == 0 )
    this->m_flPushSpeed = this->m_flSpeed;
  else
    this->m_flPushSpeed = m_flAlternateTicksFix * this->m_flSpeed;
  CBaseTrigger::Activate(this, activateType);
}


// CTriggerPush::IsPushable  (line 3131, @0x00000000023d1760, libserver.so)  // inlines: GetMoveType, IsSolid
// calls: CBaseEntity::GetMoveParent
// callers: CTriggerPush::Touch, CTriggerPush::StartTouch
bool __fastcall CTriggerPush::IsPushable(CTriggerPush *const this, CBaseEntity *pOther)
{
  CCollisionProperty *m_pCollision; // rbx
  MoveType_t m_Value; // al
  bool result; // al

  m_pCollision = pOther->m_pCollision;
  if ( m_pCollision == 0
    || (*((*(m_pCollision->_vptr_ICollideable + 13))(pOther->m_pCollision) + 31) & 1) == 0
    && (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) == 0 )
  {
    return 0;
  }
  if ( m_pCollision->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
    return 0;
  m_Value = pOther->m_MoveType.m_Value;
  if ( m_Value == MoveType_t::MOVETYPE_PUSH || m_Value == MoveType_t::MOVETYPE_NONE )
    return 0;
  result = (*(this->_vptr_IHandleEntity + 223))(this, pOther);
  if ( result )
    return CBaseEntity::GetMoveParent(pOther) == 0;
  return result;
}


// CTriggerPush::StartTouch  (line 3150, @0x00000000023e1e10, libserver.so)  // inlines: VectorMultiply, VectorRotate, operator*
// calls: CBaseTrigger::StartTouch, CTriggerPush::IsPushable, CBaseEntity::EntityToWorldTransform, VectorRotate, CBaseEntity::ApplyAbsVelocityImpulse, CBaseEntity::SetGroundEntity
void __fastcall CTriggerPush::StartTouch(CTriggerPush *const this, CBaseEntity *pOther)
{
  matrix3x4_t *v4; // rax
  float m_flPushSpeed; // xmm0_4
  Vector vecAbsDir; // [rsp+0h] [rbp-30h] BYREF
  Vector vImpulse; // [rsp+10h] [rbp-20h] BYREF

  CBaseTrigger::StartTouch(this, pOther);
  if ( CTriggerPush::IsPushable(this, pOther) && this->m_bTriggerOnStartTouch )
  {
    v4 = CBaseEntity::EntityToWorldTransform(this);
    VectorRotate(&this->m_vecPushDir.x, v4, &vecAbsDir.x);
    m_flPushSpeed = this->m_flPushSpeed;
    vImpulse.y = vecAbsDir.y * m_flPushSpeed;
    vImpulse.z = vecAbsDir.z * m_flPushSpeed;
    vImpulse.x = m_flPushSpeed * vecAbsDir.x;
    CBaseEntity::ApplyAbsVelocityImpulse(pOther, &vImpulse);
    if ( vecAbsDir.z > 0.0 )
      CBaseEntity::SetGroundEntity(pOther, 0);
  }
}


// CTriggerPush::Touch  (line 3174, @0x00000000023d1800, libserver.so)  // inlines: GetFlags, HasSpawnFlags, NetworkStateChanged, Set, SetBaseVelocity, VectorAdd, VectorMultiply, VectorRotate, operator!=, operator*, operator*=, operator+, operator=
// calls: CTriggerPush::IsPushable, CBaseEntity::EntityToWorldTransform, VectorRotate, CBaseEntity::SetGroundEntity, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CBaseEntity::AddFlag, CBaseEntity::ApplyAbsVelocityImpulse, UTIL_Remove, CBaseEntity::VPhysicsGetObject
void __fastcall CTriggerPush::Touch(CTriggerPush *const this, CBaseEntity *pOther)
{
  matrix3x4_t *v4; // rax
  unsigned int m_Value; // eax
  MoveType_t v6; // dl
  unsigned int v7; // eax
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  const Vector *AbsOrigin; // rax
  float m_flPushSpeed; // xmm0_4
  IPhysicsObject **v14; // r15
  int v15; // eax
  IPhysicsObject **v16; // r14
  float v17; // xmm0_4
  __int64 v18; // rdi
  float frametime; // xmm3_4
  float v20; // xmm0_4
  __int64 v21; // rdi
  float v22; // xmm0_4
  IPhysicsObject *Object; // rax
  float v24; // xmm0_4
  void (__fastcall *v25)(IPhysicsObject *, IPhysicsObject **); // rdx
  float v26; // xmm3_4
  float v27; // [rsp+4h] [rbp-205Ch]
  vec_t v28; // [rsp+4h] [rbp-205Ch]
  float v29; // [rsp+8h] [rbp-2058h]
  vec_t v30; // [rsp+8h] [rbp-2058h]
  float v31; // [rsp+Ch] [rbp-2054h]
  vec_t v32; // [rsp+Ch] [rbp-2054h]
  Vector vecAbsDir; // [rsp+10h] [rbp-2050h] BYREF
  Vector force; // [rsp+20h] [rbp-2040h] BYREF
  IPhysicsObject *ppPhysObjs[1024]; // [rsp+30h] [rbp-2030h] BYREF

  if ( CTriggerPush::IsPushable(this, pOther) && !this->m_bTriggerOnStartTouch )
  {
    v4 = CBaseEntity::EntityToWorldTransform(this);
    VectorRotate(&this->m_vecPushDir.x, v4, &vecAbsDir.x);
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 0x80u) != 0 )
    {
      m_flPushSpeed = this->m_flPushSpeed;
      *(ppPhysObjs + 1) = vecAbsDir.y * m_flPushSpeed;
      *&ppPhysObjs[1] = vecAbsDir.z * m_flPushSpeed;
      *ppPhysObjs = m_flPushSpeed * vecAbsDir.x;
      CBaseEntity::ApplyAbsVelocityImpulse(pOther, ppPhysObjs);
      if ( vecAbsDir.z > 0.0 )
        CBaseEntity::SetGroundEntity(pOther, 0);
      UTIL_Remove(this);
    }
    else
    {
      v6 = pOther->m_MoveType.m_Value;
      if ( v6 == MoveType_t::MOVETYPE_VPHYSICS )
      {
        if ( (m_Value & 0x1000) != 0 )
        {
          v14 = ppPhysObjs;
          v15 = (*(pOther->_vptr_IHandleEntity + 53))(pOther, ppPhysObjs, 1024);
          if ( v15 > 0 )
          {
            v16 = &ppPhysObjs[(v15 - 1) + 1];
            do
            {
              v17 = this->m_flPushSpeed;
              v18 = *v14++;
              frametime = gpGlobals->frametime;
              force.z = ((vecAbsDir.z * v17) * 100.0) * frametime;
              force.y = ((vecAbsDir.y * v17) * 100.0) * frametime;
              force.x = ((v17 * vecAbsDir.x) * 100.0) * frametime;
              v20 = (*(*v18 + 208LL))(v18);
              v21 = *(v14 - 1);
              v22 = v20 / 100.0;
              force.x = force.x * v22;
              force.y = force.y * v22;
              force.z = v22 * force.z;
              (*(*v21 + 1776LL))(v21, &force);
            }
            while ( v14 != v16 );
          }
        }
        else
        {
          Object = CBaseEntity::VPhysicsGetObject(pOther);
          if ( Object != 0 )
          {
            v24 = this->m_flPushSpeed;
            v25 = *(*Object + 1776LL);
            v26 = gpGlobals->frametime;
            *(ppPhysObjs + 1) = ((vecAbsDir.y * v24) * 100.0) * v26;
            *&ppPhysObjs[1] = ((vecAbsDir.z * v24) * 100.0) * v26;
            *ppPhysObjs = ((v24 * vecAbsDir.x) * 100.0) * v26;
            v25(Object, ppPhysObjs);
          }
        }
      }
      else
      {
        if ( v6 > MoveType_t::MOVETYPE_VPHYSICS )
        {
          if ( v6 <= MoveType_t::MOVETYPE_NOCLIP )
            return;
        }
        else if ( v6 == MoveType_t::MOVETYPE_NONE )
        {
          return;
        }
        v7 = pOther->m_fFlags.m_Value;
        v8 = this->m_flPushSpeed;
        v9 = vecAbsDir.x * v8;
        v10 = vecAbsDir.y * v8;
        v11 = v8 * vecAbsDir.z;
        if ( (v7 & 0x800000) != 0 )
        {
          v9 = v9 + pOther->m_vecBaseVelocity.m_Value.x;
          v10 = v10 + pOther->m_vecBaseVelocity.m_Value.y;
          v11 = v11 + pOther->m_vecBaseVelocity.m_Value.z;
        }
        if ( v11 > 0.0 && (v7 & 1) != 0 )
        {
          v27 = v11;
          v29 = v10;
          v31 = v9;
          CBaseEntity::SetGroundEntity(pOther, 0);
          AbsOrigin = CBaseEntity::GetAbsOrigin(pOther);
          ppPhysObjs[0] = *&AbsOrigin->x;
          *&ppPhysObjs[1] = AbsOrigin->z + 1.0;
          CBaseEntity::SetAbsOrigin(pOther, ppPhysObjs);
          v9 = v31;
          v10 = v29;
          v11 = v27;
        }
        if ( v9 != pOther->m_vecBaseVelocity.m_Value.x
          || v10 != pOther->m_vecBaseVelocity.m_Value.y
          || v11 != pOther->m_vecBaseVelocity.m_Value.z )
        {
          v28 = v11;
          v30 = v10;
          v32 = v9;
          (*(pOther->_vptr_IHandleEntity + 22))(pOther, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          pOther->m_vecBaseVelocity.m_Value.x = v32;
          pOther->m_vecBaseVelocity.m_Value.y = v30;
          pOther->m_vecBaseVelocity.m_Value.z = v28;
        }
        CBaseEntity::AddFlag(pOther, 0x800000);
      }
    }
  }
}


// CTriggerPush::InputSetPushDirection  (line 3266, @0x00000000023c1ad0, libserver.so)  // inlines: AssignTo, QAngle, VariantFieldTypeName, Vector3D, VectorIRotate, operator=
// calls: AngleVectors, CBaseEntity::EntityToWorldTransform, VectorIRotate, V_sscanf, Warning
// strings: "No free conversion of %s variant to Vector right now\n", "js_raw_args", "js_array", "js_object", "js_value", "hscript_lightbinding" (20 total)
// globals: jpt_23C1C05
void __fastcall CTriggerPush::InputSetPushDirection(CTriggerPush *const this, inputdata_t *const inputdata)
{
  Vector *p_m_vecPushDir; // r13
  int16 m_type; // ax
  const char *m_pszString; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  matrix3x4_t *v9; // rax
  const char *v10; // rsi
  Vector vecAbsDir; // [rsp+0h] [rbp-40h] BYREF
  QAngle angPushDir; // [rsp+10h] [rbp-30h] BYREF

  p_m_vecPushDir = &this->m_vecPushDir;
  m_type = inputdata->value.m_type;
  if ( m_type == 3 )
    goto LABEL_5;
  if ( m_type <= 3 )
  {
    if ( m_type != 0 )
      goto LABEL_14;
LABEL_9:
    m_pszString = &vec3_origin;
    goto LABEL_6;
  }
  if ( m_type == 30 )
  {
    if ( V_sscanf(inputdata->value.m_uint64, "%g %g %g", p_m_vecPushDir, &this->m_vecPushDir.y, &this->m_vecPushDir.z) == 3 )
    {
LABEL_12:
      z = this->m_vecPushDir.z;
      y = this->m_vecPushDir.y;
      x = this->m_vecPushDir.x;
      goto LABEL_7;
    }
    goto LABEL_9;
  }
  if ( m_type != 39 )
  {
LABEL_14:
    switch ( m_type )
    {
      case 1:
        v10 = "float";
        break;
      case 4:
        v10 = "quaternion";
        break;
      case 5:
        v10 = "integer";
        break;
      case 6:
        v10 = "boolean";
        break;
      case 8:
        v10 = "character";
        break;
      case 9:
        v10 = "color";
        break;
      case 13:
        v10 = "ehandle";
        break;
      case 25:
        v10 = "vector2d";
        break;
      case 26:
        v10 = "int64";
        break;
      case 27:
        v10 = "vector4d";
        break;
      case 28:
        v10 = "resourcehandle";
        break;
      case 31:
        v10 = "hscript";
        break;
      case 32:
        v10 = "variant";
        break;
      case 33:
        v10 = "uint64";
        break;
      case 34:
        v10 = "float64";
        break;
      case 37:
        v10 = "unsigned";
        break;
      case 38:
        v10 = "utlstringtoken";
        break;
      case 48:
        v10 = "hscript_lightbinding";
        break;
      case 49:
        v10 = "js_value";
        break;
      case 50:
        v10 = "js_object";
        break;
      case 51:
        v10 = "js_array";
        break;
      case 52:
        v10 = "js_raw_args";
        break;
      default:
        v10 = "unknown_variant_type";
        break;
    }
    Warning("No free conversion of %s variant to Vector right now\n", v10);
    goto LABEL_12;
  }
LABEL_5:
  m_pszString = inputdata->value.m_pszString;
LABEL_6:
  x = *m_pszString;
  this->m_vecPushDir.x = *m_pszString;
  y = *(m_pszString + 1);
  this->m_vecPushDir.y = y;
  z = *(m_pszString + 2);
  this->m_vecPushDir.z = z;
LABEL_7:
  angPushDir.x = x;
  angPushDir.y = y;
  angPushDir.z = z;
  AngleVectors(&angPushDir, &vecAbsDir, 0, 0);
  v9 = CBaseEntity::EntityToWorldTransform(this);
  VectorIRotate(&vecAbsDir.x, v9, &p_m_vecPushDir->x);
}


// CTriggerPush::InputSetPushSpeed  (line 3279, @0x00000000023bb370, libserver.so)  // inlines: Float, operator float
void __fastcall CTriggerPush::InputSetPushSpeed(CTriggerPush *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flPushSpeed = m_float64;
}


// CTriggerPush::DrawEntityDebugOverlays  (line 3286, @0x00000000023bcd20, libserver.so)  // inlines: VectorAdd, VectorMultiply, VectorRotate, operator*, operator+
// calls: CBaseEntity::DrawEntityDebugOverlays, CBaseEntity::EntityToWorldTransform, VectorRotate, NDebugOverlay::VertArrow
void __fastcall CTriggerPush::DrawEntityDebugOverlays(CTriggerPush *const this, uint64 nDebugOverlayBits)
{
  char v2; // r12
  matrix3x4_t *v4; // rax
  __m128i x_low; // xmm3
  float v6; // r12d
  int (**vptr_IHandleEntity)(...); // rax
  float v8; // xmm1_4
  vec_t v9; // xmm1_4
  float v10; // [rsp+8h] [rbp-58h]
  float v11; // [rsp+Ch] [rbp-54h]
  Vector vecAbsDir; // [rsp+10h] [rbp-50h] BYREF
  Vector startPos; // [rsp+20h] [rbp-40h] BYREF
  double v14; // [rsp+30h] [rbp-30h]
  float v15; // [rsp+38h] [rbp-28h]
  Vector endPos; // [rsp+40h] [rbp-20h] BYREF

  v2 = nDebugOverlayBits;
  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
  if ( (v2 & 4) != 0 )
  {
    v4 = CBaseEntity::EntityToWorldTransform(this);
    VectorRotate(&this->m_vecPushDir.x, v4, &vecAbsDir.x);
    x_low = LODWORD(vecAbsDir.x);
    *x_low.m128i_i32 = vecAbsDir.x * 100.0;
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v10 = vecAbsDir.y * 100.0;
    v11 = 100.0 * vecAbsDir.z;
    v14 = (*(this->_vptr_IHandleEntity + 62))(this);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    v15 = v8;
    endPos.x = v6 + *&v14;
    endPos.y = v10 + *(&v14 + 1);
    endPos.z = v8 + v11;
    *&startPos.x = (vptr_IHandleEntity[62])(this);
    startPos.z = v9;
    NDebugOverlay::VertArrow(&startPos, &endPos, 10.0, 0xFFu, 0, 0xFFu, 0, 0.1, 1);
  }
}


// CTriggerTeleport::~CTriggerTeleport  (line 3304, @0x00000000023f6380, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerTeleport::~CTriggerTeleport(CTriggerTeleport *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerTeleport::~CTriggerTeleport  (line 3304, @0x00000000023f6780, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerTeleport, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerTeleport::~CTriggerTeleport(CTriggerTeleport *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerTeleport::GetEntityClass  (line 3306, @0x00000000023e6450, libserver.so)
CEntityClass *__cdecl CTriggerTeleport::GetEntityClass()
{
  return g_pEntityCTriggerTeleportClass;
}


// CTriggerTeleport::Schema_DynamicBinding  (line 3306, @0x00000000023e6460, libserver.so)
// globals: CTriggerTeleport::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerTeleport::Schema_DynamicBinding(const CTriggerTeleport *const this)
{
  return CTriggerTeleport::s_pSchemaBinding;
}


// CTriggerTeleport::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3306, @0x00000000023e6470, libserver.so)
// globals: CTriggerTeleport::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerTeleport::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerTeleport::CEntityInstanceEntityClass *const this)
{
  return CTriggerTeleport::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerTeleport::CEntityInstanceEntityClass::DestructInstance  (line 3306, @0x00000000023e6480, libserver.so)  // inlines: Destruct<CTriggerTeleport>
void __fastcall CTriggerTeleport::CEntityInstanceEntityClass::DestructInstance(
        CTriggerTeleport::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerTeleport::CEntityInstanceEntityClass::FreeInstance  (line 3306, @0x00000000023e64a0, libserver.so)
void __fastcall CTriggerTeleport::CEntityInstanceEntityClass::FreeInstance(
        CTriggerTeleport::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerTeleport::CEntityInstanceEntityClass::CanAllocate  (line 3306, @0x00000000023e64c0, libserver.so)
bool __fastcall CTriggerTeleport::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerTeleport::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerTeleport::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3306, @0x00000000023e64d0, libserver.so)
// globals: CTriggerTeleport::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerTeleport::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerTeleport::CEntityInstanceEntityClass *const this)
{
  return CTriggerTeleport::s_pSchemaBinding;
}


// CTriggerTeleport::CEntityInstanceEntityClass::AllocateInstance  (line 3306, @0x00000000023e8530, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerTeleport::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerTeleport::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1488);
  memset(v1, 0, 0x5D0u);
  return v1;
}


// CTriggerTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3306, @0x00000000023ea330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerTeleport::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3306, @0x00000000023ea350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerTeleport::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerTeleport::CEntityInstanceEntityClass::ConstructInstance  (line 3306, @0x00000000023f15a0, libserver.so)  // inlines: CTriggerTeleport, CUtlSymbolLarge, Construct<CTriggerTeleport>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerTeleport::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerTeleport::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 185) = 0;
    *p = &off_40C4A90;
  }
  return p;
}


// CTriggerTeleport::GetEntityClassInternal  (line 3306, @0x00000000023f2740, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_teleport", "CTriggerTeleport"
// globals: `guard variable for'CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass, CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass, __dso_handle, CTriggerTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerTeleport::GetEntityClassInfo(void)::g_EntityCTriggerTeleportClassInfo, CTriggerTeleport::GetEntityClassInfo(void)::g_EntityCTriggerTeleportClassInfo
CEntityClass *__cdecl CTriggerTeleport::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass);
    CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass._vptr_CEntityClass = off_40C4A10;
    __cxa_guard_release(&`guard variable for'CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass);
    __cxa_atexit(
      CTriggerTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerTeleportClass != 0 )
    return &CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass;
  if ( `guard variable for'CTriggerTeleport::GetEntityClassInfo(void)::g_EntityCTriggerTeleportClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerTeleport::GetEntityClassInfo(void)::g_EntityCTriggerTeleportClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerTeleport::GetEntityClassInfo(void)::g_EntityCTriggerTeleportClassInfo,
      "CTriggerTeleport",
      "trigger_teleport",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerTeleport::GetEntityClassInfo(void)::g_EntityCTriggerTeleportClassInfo);
  }
  CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass.m_pClassInfo = &CTriggerTeleport::GetEntityClassInfo(void)::g_EntityCTriggerTeleportClassInfo;
  CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass.m_pBaseClassInfo = CTriggerTeleport::GetEntityClassInfo(void)::g_EntityCTriggerTeleportClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerTeleportClass = &CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass;
  CTriggerTeleport::GetEntityClassInfo(void)::g_EntityCTriggerTeleportClassInfo.m_pClass = &CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass;
  CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerTeleportClass->m_pComponentOverrides = 0;
  return &CTriggerTeleport::GetEntityClassInternal(void)::g_EntityCTriggerTeleportClass;
}


// CTriggerTeleport::GetDataDescMap  (line 3317, @0x00000000023bb3b0, libserver.so)
// globals: CTriggerTeleport::m_DataMap
datamap_t *__fastcall CTriggerTeleport::GetDataDescMap(CTriggerTeleport *const this)
{
  return &CTriggerTeleport::m_DataMap;
}


// CTriggerTeleport::AddDatadescMetadataKeys  (line 3317, @0x00000000023d1ca0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerTeleport::GetEntityClass(void)
void __fastcall CTriggerTeleport::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerTeleport::GetEntityClass);
}


// CTriggerTeleport::GetBaseMap  (line 3317, @0x00000000023d1cc0, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerTeleport::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerTeleport>  (line 3317, @0x00000000023d1cd0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerTeleport"
// globals: `guard variable for'DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder, CBaseTrigger::m_DataMap, CTriggerTeleport::GetEntityClass(void), CTriggerTeleport::m_DataMap, DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerTeleport>(CTriggerTeleport *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder.m_pszBase = "CTriggerTeleport";
    DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::nameHolder,
      &_dso_handle);
  }
  CTriggerTeleport::m_DataMap.dataNumFields = 1;
  CTriggerTeleport::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  CTriggerTeleport::m_DataMap.dataDesc = &DataMapInit<CTriggerTeleport>(CTriggerTeleport *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerTeleport::m_DataMap, CTriggerTeleport::GetEntityClass);
  return &CTriggerTeleport::m_DataMap;
}


// CTriggerTeleport::Spawn  (line 3325, @0x00000000023d6b60, libserver.so)
// calls: CCollisionProperty::EnableTouchPersistsNotification, CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
void __fastcall CTriggerTeleport::Spawn(CTriggerTeleport *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CTriggerTeleport::Touch  (line 3344, @0x00000000023bcb20, libserver.so)  // inlines: CUtlSymbolLarge, VectorSubtract, WorldAlignMins, operator!=, operator+=, operator-
// calls: CGameEntitySystem::FindEntityByName, CBaseEntity::SetGroundEntity, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles
void __fastcall CTriggerTeleport::Touch(CTriggerTeleport *const this, CBaseEntity *pOther)
{
  const CBaseEntity *EntityByName; // r14
  CCollisionProperty *m_pCollision; // rdi
  const Vector *v6; // rax
  const QAngle *AbsAngles; // rax
  float v8; // xmm0_4
  float v9; // xmm2_4
  const QAngle *v10; // rdx
  float v11; // xmm1_4
  const CBaseEntity *v12; // rax
  const Vector *AbsOrigin; // rbx
  const Vector *v14; // rax
  Vector *v15; // rax
  int (**vptr_IHandleEntity)(...); // r8
  float v17; // [rsp+14h] [rbp-4Ch]
  float v18; // [rsp+18h] [rbp-48h]
  float v19; // [rsp+1Ch] [rbp-44h]
  Vector tmp; // [rsp+20h] [rbp-40h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0 )
  {
    *&tmp.x = this->m_target.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &tmp, this, pOther, pOther, 0);
    if ( EntityByName != 0 )
    {
      if ( this->m_iLandmark.u.m_Id != 0
        && (*&tmp.x = this->m_iLandmark.u.m_Id,
            (v12 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &tmp, this, pOther, pOther, 0)) != 0) )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
        v14 = CBaseEntity::GetAbsOrigin(pOther);
        v17 = v14->x - AbsOrigin->x;
        v18 = v14->y - AbsOrigin->y;
        v19 = v14->z - AbsOrigin->z;
        CBaseEntity::SetGroundEntity(pOther, 0);
        v15 = CBaseEntity::GetAbsOrigin(EntityByName);
        v9 = v19;
        v8 = v18;
        v11 = v17;
        tmp = *v15;
        v10 = 0;
      }
      else
      {
        CBaseEntity::SetGroundEntity(pOther, 0);
        tmp = *CBaseEntity::GetAbsOrigin(EntityByName);
        if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
        {
          m_pCollision = pOther->m_pCollision;
          if ( m_pCollision != 0 )
            v6 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
          else
            v6 = &vec3_origin;
          tmp.z = tmp.z - v6->z;
        }
        if ( (this->m_spawnflags.m_Value & 0x20) != 0 )
        {
          v8 = 0.0;
          v10 = 0;
          v9 = 0.0;
        }
        else
        {
          AbsAngles = CBaseEntity::GetAbsAngles(EntityByName);
          v8 = 0.0;
          v9 = 0.0;
          v10 = AbsAngles;
        }
        v11 = 0.0;
      }
      vptr_IHandleEntity = pOther->_vptr_IHandleEntity;
      tmp.x = v11 + tmp.x;
      tmp.y = v8 + tmp.y;
      tmp.z = v9 + tmp.z;
      vptr_IHandleEntity[128](pOther, &tmp, v10, 0);
    }
  }
}


// CInfoTeleportDestination::Schema_DynamicBinding  (line 3403, @0x00000000023e64e0, libserver.so)
// globals: CInfoTeleportDestination::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoTeleportDestination::Schema_DynamicBinding(
        const CInfoTeleportDestination *const this)
{
  return CInfoTeleportDestination::s_pSchemaBinding;
}


// CInfoTeleportDestination::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3403, @0x00000000023e64f0, libserver.so)
// globals: CInfoTeleportDestination::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoTeleportDestination::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoTeleportDestination::CEntityInstanceEntityClass *const this)
{
  return CInfoTeleportDestination::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoTeleportDestination::CEntityInstanceEntityClass::DestructInstance  (line 3403, @0x00000000023e6500, libserver.so)  // inlines: Destruct<CInfoTeleportDestination>
void __fastcall CInfoTeleportDestination::CEntityInstanceEntityClass::DestructInstance(
        CInfoTeleportDestination::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoTeleportDestination::CEntityInstanceEntityClass::FreeInstance  (line 3403, @0x00000000023e6520, libserver.so)
void __fastcall CInfoTeleportDestination::CEntityInstanceEntityClass::FreeInstance(
        CInfoTeleportDestination::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoTeleportDestination::CEntityInstanceEntityClass::CanAllocate  (line 3403, @0x00000000023e6540, libserver.so)
bool __fastcall CInfoTeleportDestination::CEntityInstanceEntityClass::CanAllocate(
        const CInfoTeleportDestination::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoTeleportDestination::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3403, @0x00000000023e6550, libserver.so)
// globals: CInfoTeleportDestination::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoTeleportDestination::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoTeleportDestination::CEntityInstanceEntityClass *const this)
{
  return CInfoTeleportDestination::s_pSchemaBinding;
}


// CInfoTeleportDestination::CEntityInstanceEntityClass::AllocateInstance  (line 3403, @0x00000000023e8570, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoTeleportDestination::CEntityInstanceEntityClass::AllocateInstance(
        CInfoTeleportDestination::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoTeleportDestination::CEntityInstanceEntityClass::ConstructInstance  (line 3403, @0x00000000023e89e0, libserver.so)  // inlines: CInfoTeleportDestination, CPointEntity, Construct<CInfoTeleportDestination>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoTeleportDestination::CEntityInstanceEntityClass::ConstructInstance(
        CInfoTeleportDestination::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40C5230;
  }
  return p;
}


// CInfoTeleportDestination::~CInfoTeleportDestination  (line 3403, @0x00000000023e8f80, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoTeleportDestination::~CInfoTeleportDestination(CInfoTeleportDestination *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoTeleportDestination::~CInfoTeleportDestination  (line 3403, @0x00000000023e8fa0, libserver.so)  // inlines: ~CInfoTeleportDestination, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoTeleportDestination::~CInfoTeleportDestination(CInfoTeleportDestination *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoTeleportDestination::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3403, @0x00000000023e9f20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoTeleportDestination::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoTeleportDestination::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoTeleportDestination::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3403, @0x00000000023e9f40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoTeleportDestination::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoTeleportDestination::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoTeleportDestination::GetEntityClassInternal  (line 3403, @0x00000000023f2890, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "info_teleport_destination", "CInfoTeleportDestination"
// globals: `guard variable for'CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass, CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass, __dso_handle, CInfoTeleportDestination::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoTeleportDestination::GetEntityClassInfo(void)::g_EntityCInfoTeleportDestinationClassInfo, CInfoTeleportDestination::GetEntityClassInfo(void)::g_EntityCInfoTeleportDestinationClassInfo
CEntityClass *__cdecl CInfoTeleportDestination::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass);
    CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass._vptr_CEntityClass = off_40C51B0;
    __cxa_guard_release(&`guard variable for'CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass);
    __cxa_atexit(
      CInfoTeleportDestination::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoTeleportDestinationClass != 0 )
    return &CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass;
  if ( `guard variable for'CInfoTeleportDestination::GetEntityClassInfo(void)::g_EntityCInfoTeleportDestinationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoTeleportDestination::GetEntityClassInfo(void)::g_EntityCInfoTeleportDestinationClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoTeleportDestination::GetEntityClassInfo(void)::g_EntityCInfoTeleportDestinationClassInfo,
      "CInfoTeleportDestination",
      "info_teleport_destination",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoTeleportDestination::GetEntityClassInfo(void)::g_EntityCInfoTeleportDestinationClassInfo);
  }
  CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass.m_pClassInfo = &CInfoTeleportDestination::GetEntityClassInfo(void)::g_EntityCInfoTeleportDestinationClassInfo;
  CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass.m_pBaseClassInfo = CInfoTeleportDestination::GetEntityClassInfo(void)::g_EntityCInfoTeleportDestinationClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoTeleportDestinationClass = &CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass;
  CInfoTeleportDestination::GetEntityClassInfo(void)::g_EntityCInfoTeleportDestinationClassInfo.m_pClass = &CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass;
  CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoTeleportDestinationClass->m_pComponentOverrides = 0;
  return &CInfoTeleportDestination::GetEntityClassInternal(void)::g_EntityCInfoTeleportDestinationClass;
}


// CTriggerToggleSave::~CTriggerToggleSave  (line 3409, @0x00000000023f6000, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerToggleSave::~CTriggerToggleSave(CTriggerToggleSave *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerToggleSave::~CTriggerToggleSave  (line 3409, @0x00000000023f6b80, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerToggleSave, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerToggleSave::~CTriggerToggleSave(CTriggerToggleSave *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerToggleSave::GetEntityClass  (line 3411, @0x00000000023e6560, libserver.so)
CEntityClass *__cdecl CTriggerToggleSave::GetEntityClass()
{
  return g_pEntityCTriggerToggleSaveClass;
}


// CTriggerToggleSave::Schema_DynamicBinding  (line 3411, @0x00000000023e6570, libserver.so)
// globals: CTriggerToggleSave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerToggleSave::Schema_DynamicBinding(
        const CTriggerToggleSave *const this)
{
  return CTriggerToggleSave::s_pSchemaBinding;
}


// CTriggerToggleSave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3411, @0x00000000023e6580, libserver.so)
// globals: CTriggerToggleSave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerToggleSave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerToggleSave::CEntityInstanceEntityClass *const this)
{
  return CTriggerToggleSave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerToggleSave::CEntityInstanceEntityClass::DestructInstance  (line 3411, @0x00000000023e6590, libserver.so)  // inlines: Destruct<CTriggerToggleSave>
void __fastcall CTriggerToggleSave::CEntityInstanceEntityClass::DestructInstance(
        CTriggerToggleSave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerToggleSave::CEntityInstanceEntityClass::FreeInstance  (line 3411, @0x00000000023e65b0, libserver.so)
void __fastcall CTriggerToggleSave::CEntityInstanceEntityClass::FreeInstance(
        CTriggerToggleSave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerToggleSave::CEntityInstanceEntityClass::CanAllocate  (line 3411, @0x00000000023e65d0, libserver.so)
bool __fastcall CTriggerToggleSave::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerToggleSave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerToggleSave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3411, @0x00000000023e65e0, libserver.so)
// globals: CTriggerToggleSave::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerToggleSave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerToggleSave::CEntityInstanceEntityClass *const this)
{
  return CTriggerToggleSave::s_pSchemaBinding;
}


// CTriggerToggleSave::CEntityInstanceEntityClass::AllocateInstance  (line 3411, @0x00000000023e85b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerToggleSave::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerToggleSave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1480);
  memset(v1, 0, 0x5C8u);
  return v1;
}


// CTriggerToggleSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3411, @0x00000000023ea380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerToggleSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerToggleSave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerToggleSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3411, @0x00000000023ea3a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerToggleSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerToggleSave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerToggleSave::CEntityInstanceEntityClass::ConstructInstance  (line 3411, @0x00000000023f15e0, libserver.so)  // inlines: CTriggerToggleSave, Construct<CTriggerToggleSave>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerToggleSave::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerToggleSave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_40C5950;
  }
  return p;
}


// CTriggerToggleSave::GetEntityClassInternal  (line 3411, @0x00000000023f29e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_togglesave", "CTriggerToggleSave"
// globals: `guard variable for'CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass, CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass, __dso_handle, CTriggerToggleSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerToggleSave::GetEntityClassInfo(void)::g_EntityCTriggerToggleSaveClassInfo, CTriggerToggleSave::GetEntityClassInfo(void)::g_EntityCTriggerToggleSaveClassInfo
CEntityClass *__cdecl CTriggerToggleSave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass);
    CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass._vptr_CEntityClass = off_40C58D0;
    __cxa_guard_release(&`guard variable for'CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass);
    __cxa_atexit(
      CTriggerToggleSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerToggleSaveClass != 0 )
    return &CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass;
  if ( `guard variable for'CTriggerToggleSave::GetEntityClassInfo(void)::g_EntityCTriggerToggleSaveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerToggleSave::GetEntityClassInfo(void)::g_EntityCTriggerToggleSaveClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerToggleSave::GetEntityClassInfo(void)::g_EntityCTriggerToggleSaveClassInfo,
      "CTriggerToggleSave",
      "trigger_togglesave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerToggleSave::GetEntityClassInfo(void)::g_EntityCTriggerToggleSaveClassInfo);
  }
  CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass.m_pClassInfo = &CTriggerToggleSave::GetEntityClassInfo(void)::g_EntityCTriggerToggleSaveClassInfo;
  CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass.m_pBaseClassInfo = CTriggerToggleSave::GetEntityClassInfo(void)::g_EntityCTriggerToggleSaveClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerToggleSaveClass = &CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass;
  CTriggerToggleSave::GetEntityClassInfo(void)::g_EntityCTriggerToggleSaveClassInfo.m_pClass = &CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass;
  CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerToggleSaveClass->m_pComponentOverrides = 0;
  return &CTriggerToggleSave::GetEntityClassInternal(void)::g_EntityCTriggerToggleSaveClass;
}


// CTriggerToggleSave::InputEnable  (line 3418, @0x00000000023e65f0, libserver.so)
void __fastcall CTriggerToggleSave::InputEnable(CTriggerToggleSave *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 0;
}


// CTriggerToggleSave::InputDisable  (line 3423, @0x00000000023e6600, libserver.so)
void __fastcall CTriggerToggleSave::InputDisable(CTriggerToggleSave *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 1;
}


// CTriggerToggleSave::GetDataDescMap  (line 3433, @0x00000000023bb3c0, libserver.so)
// globals: CTriggerToggleSave::m_DataMap
datamap_t *__fastcall CTriggerToggleSave::GetDataDescMap(CTriggerToggleSave *const this)
{
  return &CTriggerToggleSave::m_DataMap;
}


// CTriggerToggleSave::AddDatadescMetadataKeys  (line 3433, @0x00000000023d1da0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerToggleSave::GetEntityClass(void)
void __fastcall CTriggerToggleSave::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerToggleSave::GetEntityClass);
}


// CTriggerToggleSave::GetBaseMap  (line 3433, @0x00000000023d1dc0, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerToggleSave::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerToggleSave>  (line 3433, @0x00000000023d1dd0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerToggleSave"
// globals: `guard variable for'DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder, CBaseTrigger::m_DataMap, CTriggerToggleSave::GetEntityClass(void), CTriggerToggleSave::m_DataMap, DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder.m_pszBase = "CTriggerToggleSave";
    DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::nameHolder,
      &_dso_handle);
  }
  CTriggerToggleSave::m_DataMap.dataNumFields = 3;
  CTriggerToggleSave::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  CTriggerToggleSave::m_DataMap.dataDesc = &DataMapInit<CTriggerToggleSave>(CTriggerToggleSave *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerToggleSave::m_DataMap, CTriggerToggleSave::GetEntityClass);
  return &CTriggerToggleSave::m_DataMap;
}


// CTriggerToggleSave::Spawn  (line 3444, @0x00000000023d6ba0, libserver.so)
// calls: CCollisionProperty::EnableTouchPersistsNotification, CBaseTrigger::Spawn, CBaseTrigger::InitTrigger, UTIL_Remove
void __fastcall CTriggerToggleSave::Spawn(CTriggerToggleSave *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CBaseTrigger::Spawn(this, pKeyValues);
  if ( (*(g_pGameRules->_vptr_CGameRules + 59))(g_pGameRules) != 0 )
    UTIL_Remove(this);
  else
    CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CTriggerToggleSave::Touch  (line 3463, @0x00000000023bd1e0, libserver.so)
void __fastcall CTriggerToggleSave::Touch(CTriggerToggleSave *const this, CBaseEntity *pOther)
{
  if ( !this->m_bDisabled && (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
  {
    this->m_bDisabled = 1;
    (*(*engine + 280LL))(engine, "autosave\n");
  }
}


// CTriggerSave::~CTriggerSave  (line 3481, @0x00000000023f6070, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerSave::~CTriggerSave(CTriggerSave *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerSave::~CTriggerSave  (line 3481, @0x00000000023f6c80, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerSave, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerSave::~CTriggerSave(CTriggerSave *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerSave::GetEntityClass  (line 3483, @0x00000000023e6610, libserver.so)
CEntityClass *__cdecl CTriggerSave::GetEntityClass()
{
  return g_pEntityCTriggerSaveClass;
}


// CTriggerSave::Schema_DynamicBinding  (line 3483, @0x00000000023e6620, libserver.so)
// globals: CTriggerSave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerSave::Schema_DynamicBinding(const CTriggerSave *const this)
{
  return CTriggerSave::s_pSchemaBinding;
}


// CTriggerSave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3483, @0x00000000023e6630, libserver.so)
// globals: CTriggerSave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerSave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerSave::CEntityInstanceEntityClass *const this)
{
  return CTriggerSave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerSave::CEntityInstanceEntityClass::DestructInstance  (line 3483, @0x00000000023e6640, libserver.so)  // inlines: Destruct<CTriggerSave>
void __fastcall CTriggerSave::CEntityInstanceEntityClass::DestructInstance(
        CTriggerSave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerSave::CEntityInstanceEntityClass::FreeInstance  (line 3483, @0x00000000023e6660, libserver.so)
void __fastcall CTriggerSave::CEntityInstanceEntityClass::FreeInstance(
        CTriggerSave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerSave::CEntityInstanceEntityClass::CanAllocate  (line 3483, @0x00000000023e6680, libserver.so)
bool __fastcall CTriggerSave::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerSave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerSave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3483, @0x00000000023e6690, libserver.so)
// globals: CTriggerSave::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerSave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerSave::CEntityInstanceEntityClass *const this)
{
  return CTriggerSave::s_pSchemaBinding;
}


// CTriggerSave::CEntityInstanceEntityClass::AllocateInstance  (line 3483, @0x00000000023e85f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerSave::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerSave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1488);
  memset(v1, 0, 0x5D0u);
  return v1;
}


// CTriggerSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3483, @0x00000000023ea3d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerSave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3483, @0x00000000023ea3f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerSave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerSave::CEntityInstanceEntityClass::ConstructInstance  (line 3483, @0x00000000023f1610, libserver.so)  // inlines: CTriggerSave, Construct<CTriggerSave>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerSave::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerSave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_40C60F0;
  }
  return p;
}


// CTriggerSave::GetEntityClassInternal  (line 3483, @0x00000000023f2b30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_autosave", "CTriggerSave"
// globals: `guard variable for'CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass, CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass, __dso_handle, CTriggerSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerSave::GetEntityClassInfo(void)::g_EntityCTriggerSaveClassInfo, CTriggerSave::GetEntityClassInfo(void)::g_EntityCTriggerSaveClassInfo
CEntityClass *__cdecl CTriggerSave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass);
    CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass._vptr_CEntityClass = off_40C6070;
    __cxa_guard_release(&`guard variable for'CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass);
    __cxa_atexit(
      CTriggerSave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerSaveClass != 0 )
    return &CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass;
  if ( `guard variable for'CTriggerSave::GetEntityClassInfo(void)::g_EntityCTriggerSaveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerSave::GetEntityClassInfo(void)::g_EntityCTriggerSaveClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerSave::GetEntityClassInfo(void)::g_EntityCTriggerSaveClassInfo,
      "CTriggerSave",
      "trigger_autosave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerSave::GetEntityClassInfo(void)::g_EntityCTriggerSaveClassInfo);
  }
  CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass.m_pClassInfo = &CTriggerSave::GetEntityClassInfo(void)::g_EntityCTriggerSaveClassInfo;
  CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass.m_pBaseClassInfo = CTriggerSave::GetEntityClassInfo(void)::g_EntityCTriggerSaveClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerSaveClass = &CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass;
  CTriggerSave::GetEntityClassInfo(void)::g_EntityCTriggerSaveClassInfo.m_pClass = &CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass;
  CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerSaveClass->m_pComponentOverrides = 0;
  return &CTriggerSave::GetEntityClassInternal(void)::g_EntityCTriggerSaveClass;
}


// CTriggerSave::GetDataDescMap  (line 3496, @0x00000000023bb3d0, libserver.so)
// globals: CTriggerSave::m_DataMap
datamap_t *__fastcall CTriggerSave::GetDataDescMap(CTriggerSave *const this)
{
  return &CTriggerSave::m_DataMap;
}


// CTriggerSave::AddDatadescMetadataKeys  (line 3496, @0x00000000023d1ea0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerSave::GetEntityClass(void)
void __fastcall CTriggerSave::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerSave::GetEntityClass);
}


// CTriggerSave::GetBaseMap  (line 3496, @0x00000000023d1ec0, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerSave::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerSave>  (line 3496, @0x00000000023d1ed0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerSave"
// globals: `guard variable for'DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder, CBaseTrigger::m_DataMap, CTriggerSave::GetEntityClass(void), CTriggerSave::m_DataMap, DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerSave>(CTriggerSave *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder.m_pszBase = "CTriggerSave";
    DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerSave>(CTriggerSave *)::nameHolder,
      &_dso_handle);
  }
  CTriggerSave::m_DataMap.dataNumFields = 3;
  CTriggerSave::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  CTriggerSave::m_DataMap.dataDesc = &DataMapInit<CTriggerSave>(CTriggerSave *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerSave::m_DataMap, CTriggerSave::GetEntityClass);
  return &CTriggerSave::m_DataMap;
}


// CTriggerSave::Spawn  (line 3507, @0x00000000023d6c00, libserver.so)
// calls: CCollisionProperty::EnableTouchPersistsNotification, CBaseTrigger::Spawn, CBaseTrigger::InitTrigger, UTIL_Remove
void __fastcall CTriggerSave::Spawn(CTriggerSave *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CBaseTrigger::Spawn(this, pKeyValues);
  if ( (*(g_pGameRules->_vptr_CGameRules + 59))(g_pGameRules) != 0 )
    UTIL_Remove(this);
  else
    CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CTriggerSave::Touch  (line 3525, @0x00000000023c23a0, libserver.so)  // inlines: GetDeathTime, GetSaveRestore
// calls: UTIL_Remove, UTIL_PlayerByIndex, CBaseEntity::GetHealth, CGlobalVarsBase::curtime
// strings: "autosavedangerous\n", "save autosave\n", "autosavedangerousissafe\n"
void __fastcall CTriggerSave::Touch(CTriggerSave *const this, CBaseEntity *pOther)
{
  double v3; // xmm0_8
  double v4; // xmm1_8
  double v5; // xmm2_8
  CBasePlayer *v6; // rax
  CSource2Server *v7; // r12
  CBasePlayer *v8; // rax
  float m_fAutoSaveDangerousTime; // [rsp+Ch] [rbp-14h]
  float m_Value; // [rsp+Ch] [rbp-14h]

  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) == 0 )
    return;
  if ( this->m_fDangerousTimer == 0.0 )
  {
    if ( !this->m_bForceNewLevelUnit )
      goto LABEL_5;
  }
  else
  {
    if ( g_pSource2ServerInternal->m_fAutoSaveDangerousTime != 0.0 )
    {
      m_fAutoSaveDangerousTime = g_pSource2ServerInternal->m_fAutoSaveDangerousTime;
      if ( m_fAutoSaveDangerousTime >= CGlobalVarsBase::curtime(gpGlobals, 0) )
      {
        v8 = UTIL_PlayerByIndex(1);
        if ( v8->m_flDeathTime.m_Value == 0.0
          || (m_Value = v8->m_flDeathTime.m_Value) > CGlobalVarsBase::curtime(gpGlobals, 0) )
        {
          (*(*engine + 280LL))(engine, "autosavedangerousissafe\n");
        }
      }
    }
    if ( !this->m_bForceNewLevelUnit )
      goto LABEL_5;
  }
  (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 80LL))(*(&stru_1A0B8.r_offset + g_pGameEntitySystem));
LABEL_5:
  UTIL_Remove(this);
  if ( this->m_fDangerousTimer == 0.0 )
  {
    (*(*engine + 280LL))(engine, "save autosave\n", v3, v4, v5, 0.0);
  }
  else
  {
    v6 = UTIL_PlayerByIndex(1);
    if ( v6 != 0 && CBaseEntity::GetHealth(v6) >= this->m_minHitPoints )
    {
      (*(*engine + 280LL))(engine, "autosavedangerous\n");
      v7 = g_pSource2ServerInternal;
      v7->m_fAutoSaveDangerousTime = CGlobalVarsBase::curtime(gpGlobals, 0) + this->m_fDangerousTimer;
    }
  }
}


// CTriggerGravity::~CTriggerGravity  (line 3571, @0x00000000023f60e0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerGravity::~CTriggerGravity(CTriggerGravity *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerGravity::~CTriggerGravity  (line 3571, @0x00000000023f6b00, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerGravity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerGravity::~CTriggerGravity(CTriggerGravity *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerGravity::GetEntityClass  (line 3573, @0x00000000023e66a0, libserver.so)
CEntityClass *__cdecl CTriggerGravity::GetEntityClass()
{
  return g_pEntityCTriggerGravityClass;
}


// CTriggerGravity::Schema_DynamicBinding  (line 3573, @0x00000000023e66b0, libserver.so)
// globals: CTriggerGravity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerGravity::Schema_DynamicBinding(const CTriggerGravity *const this)
{
  return CTriggerGravity::s_pSchemaBinding;
}


// CTriggerGravity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3573, @0x00000000023e66c0, libserver.so)
// globals: CTriggerGravity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerGravity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerGravity::CEntityInstanceEntityClass *const this)
{
  return CTriggerGravity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerGravity::CEntityInstanceEntityClass::DestructInstance  (line 3573, @0x00000000023e66d0, libserver.so)  // inlines: Destruct<CTriggerGravity>
void __fastcall CTriggerGravity::CEntityInstanceEntityClass::DestructInstance(
        CTriggerGravity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerGravity::CEntityInstanceEntityClass::FreeInstance  (line 3573, @0x00000000023e66f0, libserver.so)
void __fastcall CTriggerGravity::CEntityInstanceEntityClass::FreeInstance(
        CTriggerGravity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerGravity::CEntityInstanceEntityClass::CanAllocate  (line 3573, @0x00000000023e6710, libserver.so)
bool __fastcall CTriggerGravity::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerGravity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerGravity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3573, @0x00000000023e6720, libserver.so)
// globals: CTriggerGravity::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerGravity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerGravity::CEntityInstanceEntityClass *const this)
{
  return CTriggerGravity::s_pSchemaBinding;
}


// CTriggerGravity::CEntityInstanceEntityClass::AllocateInstance  (line 3573, @0x00000000023e8630, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerGravity::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerGravity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1480);
  memset(v1, 0, 0x5C8u);
  return v1;
}


// CTriggerGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3573, @0x00000000023ea420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerGravity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3573, @0x00000000023ea440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerGravity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerGravity::CEntityInstanceEntityClass::ConstructInstance  (line 3573, @0x00000000023f1640, libserver.so)  // inlines: CTriggerGravity, Construct<CTriggerGravity>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerGravity::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerGravity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_40C6890;
  }
  return p;
}


// CTriggerGravity::GetEntityClassInternal  (line 3573, @0x00000000023f2c80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_gravity", "CTriggerGravity"
// globals: `guard variable for'CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass, CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass, __dso_handle, CTriggerGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerGravity::GetEntityClassInfo(void)::g_EntityCTriggerGravityClassInfo, CTriggerGravity::GetEntityClassInfo(void)::g_EntityCTriggerGravityClassInfo
CEntityClass *__cdecl CTriggerGravity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass);
    CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass._vptr_CEntityClass = off_40C6810;
    __cxa_guard_release(&`guard variable for'CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass);
    __cxa_atexit(
      CTriggerGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerGravityClass != 0 )
    return &CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass;
  if ( `guard variable for'CTriggerGravity::GetEntityClassInfo(void)::g_EntityCTriggerGravityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerGravity::GetEntityClassInfo(void)::g_EntityCTriggerGravityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerGravity::GetEntityClassInfo(void)::g_EntityCTriggerGravityClassInfo,
      "CTriggerGravity",
      "trigger_gravity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerGravity::GetEntityClassInfo(void)::g_EntityCTriggerGravityClassInfo);
  }
  CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass.m_pClassInfo = &CTriggerGravity::GetEntityClassInfo(void)::g_EntityCTriggerGravityClassInfo;
  CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass.m_pBaseClassInfo = CTriggerGravity::GetEntityClassInfo(void)::g_EntityCTriggerGravityClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerGravityClass = &CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass;
  CTriggerGravity::GetEntityClassInfo(void)::g_EntityCTriggerGravityClassInfo.m_pClass = &CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass;
  CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerGravityClass->m_pComponentOverrides = 0;
  return &CTriggerGravity::GetEntityClassInternal(void)::g_EntityCTriggerGravityClass;
}


// CTriggerGravity::GetDataDescMap  (line 3581, @0x00000000023bb3e0, libserver.so)
// globals: CTriggerGravity::m_DataMap
datamap_t *__fastcall CTriggerGravity::GetDataDescMap(CTriggerGravity *const this)
{
  return &CTriggerGravity::m_DataMap;
}


// CTriggerGravity::AddDatadescMetadataKeys  (line 3581, @0x00000000023d1fa0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerGravity::GetEntityClass(void)
void __fastcall CTriggerGravity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerGravity::GetEntityClass);
}


// CTriggerGravity::GetBaseMap  (line 3581, @0x00000000023d1fc0, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerGravity::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerGravity>  (line 3581, @0x00000000023de820, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerGravity"
// globals: `guard variable for'DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder, `guard variable for'DataMapInit<CTriggerGravity>(CTriggerGravity *)::dataDesc, CBaseTrigger::m_DataMap, CTriggerGravity::GetEntityClass(void), CTriggerGravity::m_DataMap, DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerGravity>(CTriggerGravity *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_pszBase = "CTriggerGravity";
    DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder,
      &_dso_handle);
  }
  CTriggerGravity::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerGravity>(CTriggerGravity *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerGravity>(CTriggerGravity *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v2, DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_pszBase), "GravityTouch");
    m_Size = DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTriggerGravity>(CTriggerGravity *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTriggerGravity>(CTriggerGravity *)::dataDesc[1].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerGravity>(CTriggerGravity *)::dataDesc);
  }
  CTriggerGravity::m_DataMap.dataNumFields = 1;
  CTriggerGravity::m_DataMap.dataDesc = &DataMapInit<CTriggerGravity>(CTriggerGravity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerGravity::m_DataMap, CTriggerGravity::GetEntityClass);
  return &CTriggerGravity::m_DataMap;
}


// CTriggerGravity::Spawn  (line 3588, @0x00000000023d6c60, libserver.so)
// calls: CCollisionProperty::EnableTouchPersistsNotification, CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
// globals: CTriggerGravity::GravityTouch(CBaseEntity *)
void __fastcall CTriggerGravity::Spawn(CTriggerGravity *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
  this->m_pfnTouch.__delta = 0;
  this->m_pfnTouch.__pfn = CTriggerGravity::GravityTouch;
}


// CTriggerGravity::GravityTouch  (line 3596, @0x00000000023bb3f0, libserver.so)  // inlines: SetGravity
void __fastcall CTriggerGravity::GravityTouch(CTriggerGravity *const this, CBaseEntity *pOther)
{
  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
    pOther->m_flGravity = this->m_flGravity;
}


// CAI_ChangeTarget::~CAI_ChangeTarget  (line 3607, @0x00000000023e9160, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CAI_ChangeTarget::~CAI_ChangeTarget(CAI_ChangeTarget *const this)
{
  this->_vptr_IHandleEntity = &off_40C7030;
  CBaseEntity::~CBaseEntity(this);
}


// CAI_ChangeTarget::~CAI_ChangeTarget  (line 3607, @0x00000000023e9180, libserver.so)  // inlines: ~CAI_ChangeTarget
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CAI_ChangeTarget::~CAI_ChangeTarget(CAI_ChangeTarget *const this)
{
  this->_vptr_IHandleEntity = &off_40C7030;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CAI_ChangeTarget::GetEntityClass  (line 3609, @0x00000000023e6730, libserver.so)
CEntityClass *__cdecl CAI_ChangeTarget::GetEntityClass()
{
  return g_pEntityCAI_ChangeTargetClass;
}


// CAI_ChangeTarget::Schema_DynamicBinding  (line 3609, @0x00000000023e6740, libserver.so)
// globals: CAI_ChangeTarget::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAI_ChangeTarget::Schema_DynamicBinding(const CAI_ChangeTarget *const this)
{
  return CAI_ChangeTarget::s_pSchemaBinding;
}


// CAI_ChangeTarget::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3609, @0x00000000023e6750, libserver.so)
// globals: CAI_ChangeTarget::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAI_ChangeTarget::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CAI_ChangeTarget::CEntityInstanceEntityClass *const this)
{
  return CAI_ChangeTarget::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CAI_ChangeTarget::CEntityInstanceEntityClass::DestructInstance  (line 3609, @0x00000000023e6760, libserver.so)  // inlines: Destruct<CAI_ChangeTarget>
void __fastcall CAI_ChangeTarget::CEntityInstanceEntityClass::DestructInstance(
        CAI_ChangeTarget::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CAI_ChangeTarget::CEntityInstanceEntityClass::FreeInstance  (line 3609, @0x00000000023e6780, libserver.so)
void __fastcall CAI_ChangeTarget::CEntityInstanceEntityClass::FreeInstance(
        CAI_ChangeTarget::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CAI_ChangeTarget::CEntityInstanceEntityClass::CanAllocate  (line 3609, @0x00000000023e67a0, libserver.so)
bool __fastcall CAI_ChangeTarget::CEntityInstanceEntityClass::CanAllocate(
        const CAI_ChangeTarget::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CAI_ChangeTarget::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3609, @0x00000000023e67b0, libserver.so)
// globals: CAI_ChangeTarget::s_pSchemaBinding
const ISchemaBinding *__fastcall CAI_ChangeTarget::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CAI_ChangeTarget::CEntityInstanceEntityClass *const this)
{
  return CAI_ChangeTarget::s_pSchemaBinding;
}


// CAI_ChangeTarget::CEntityInstanceEntityClass::AllocateInstance  (line 3609, @0x00000000023e8670, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CAI_ChangeTarget::CEntityInstanceEntityClass::AllocateInstance(
        CAI_ChangeTarget::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CAI_ChangeTarget::CEntityInstanceEntityClass::ConstructInstance  (line 3609, @0x00000000023e8a10, libserver.so)  // inlines: CAI_ChangeTarget, CUtlSymbolLarge, Construct<CAI_ChangeTarget>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CAI_ChangeTarget::CEntityInstanceEntityClass::ConstructInstance(
        CAI_ChangeTarget::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_40C7030;
  }
  return p;
}


// CAI_ChangeTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3609, @0x00000000023eaa60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CAI_ChangeTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAI_ChangeTarget::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CAI_ChangeTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3609, @0x00000000023eaa80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CAI_ChangeTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAI_ChangeTarget::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CAI_ChangeTarget::GetEntityClassInternal  (line 3609, @0x00000000023f2dd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "ai_changetarget", "CAI_ChangeTarget"
// globals: `guard variable for'CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass, CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass, __dso_handle, CAI_ChangeTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CAI_ChangeTarget::GetEntityClassInfo(void)::g_EntityCAI_ChangeTargetClassInfo, CAI_ChangeTarget::GetEntityClassInfo(void)::g_EntityCAI_ChangeTargetClassInfo
CEntityClass *__cdecl CAI_ChangeTarget::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass == 0
    && __cxa_guard_acquire(&`guard variable for'CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass) != 0 )
  {
    CEntityClass::CEntityClass(&CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass);
    CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass._vptr_CEntityClass = off_40C6FB0;
    __cxa_guard_release(&`guard variable for'CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass);
    __cxa_atexit(
      CAI_ChangeTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass,
      &_dso_handle);
  }
  if ( g_pEntityCAI_ChangeTargetClass != 0 )
    return &CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass;
  if ( `guard variable for'CAI_ChangeTarget::GetEntityClassInfo(void)::g_EntityCAI_ChangeTargetClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CAI_ChangeTarget::GetEntityClassInfo(void)::g_EntityCAI_ChangeTargetClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CAI_ChangeTarget::GetEntityClassInfo(void)::g_EntityCAI_ChangeTargetClassInfo,
      "CAI_ChangeTarget",
      "ai_changetarget",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CAI_ChangeTarget::GetEntityClassInfo(void)::g_EntityCAI_ChangeTargetClassInfo);
  }
  CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass.m_pClassInfo = &CAI_ChangeTarget::GetEntityClassInfo(void)::g_EntityCAI_ChangeTargetClassInfo;
  CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass.m_pBaseClassInfo = CAI_ChangeTarget::GetEntityClassInfo(void)::g_EntityCAI_ChangeTargetClassInfo.m_pBaseClassInfo;
  g_pEntityCAI_ChangeTargetClass = &CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass;
  CAI_ChangeTarget::GetEntityClassInfo(void)::g_EntityCAI_ChangeTargetClassInfo.m_pClass = &CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass;
  CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCAI_ChangeTargetClass->m_pComponentOverrides = 0;
  return &CAI_ChangeTarget::GetEntityClassInternal(void)::g_EntityCAI_ChangeTargetClass;
}


// CAI_ChangeTarget::ObjectCaps  (line 3615, @0x00000000023e8bc0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CAI_ChangeTarget::ObjectCaps(CAI_ChangeTarget *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CAI_ChangeTarget::GetDataDescMap  (line 3623, @0x00000000023bb430, libserver.so)
// globals: CAI_ChangeTarget::m_DataMap
datamap_t *__fastcall CAI_ChangeTarget::GetDataDescMap(CAI_ChangeTarget *const this)
{
  return &CAI_ChangeTarget::m_DataMap;
}


// CAI_ChangeTarget::AddDatadescMetadataKeys  (line 3623, @0x00000000023d1fd0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CAI_ChangeTarget::GetEntityClass(void)
void __fastcall CAI_ChangeTarget::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CAI_ChangeTarget::GetEntityClass);
}


// CAI_ChangeTarget::GetBaseMap  (line 3623, @0x00000000023d1ff0, libserver.so)
datamap_t *__cdecl CAI_ChangeTarget::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CAI_ChangeTarget>  (line 3623, @0x00000000023d2000, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CAI_ChangeTarget"
// globals: `guard variable for'DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder, CAI_ChangeTarget::GetEntityClass(void), CAI_ChangeTarget::m_DataMap, DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder) != 0 )
  {
    DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder.m_pszBase = "CAI_ChangeTarget";
    DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::nameHolder,
      &_dso_handle);
  }
  CAI_ChangeTarget::m_DataMap.dataNumFields = 2;
  CAI_ChangeTarget::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CAI_ChangeTarget::m_DataMap.dataDesc = &DataMapInit<CAI_ChangeTarget>(CAI_ChangeTarget *)::dataDesc[1];
  AddDatadescMetadataKeys(&CAI_ChangeTarget::m_DataMap, CAI_ChangeTarget::GetEntityClass);
  return &CAI_ChangeTarget::m_DataMap;
}


// CAI_ChangeTarget::InputActivate  (line 3633, @0x00000000023bbc60, libserver.so)  // inlines: CUtlSymbolLarge, operator=
// calls: CGameEntitySystem::FindEntityByName
void __fastcall CAI_ChangeTarget::InputActivate(CAI_ChangeTarget *const this, inputdata_t *const inputdata)
{
  CBaseEntity *i; // rax
  CBaseEntity *pCaller; // r9
  CBaseEntity *pActivator; // r8
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  for ( i = 0; ; i->m_target.u.m_Id = this->m_iszNewTarget.u.m_Id )
  {
    pCaller = inputdata->pCaller;
    pActivator = inputdata->pActivator;
    iszName.u.m_Id = this->m_target.u.m_Id;
    i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, i, &iszName, this, pActivator, pCaller, 0);
    if ( i == 0 )
      break;
  }
}


// CAI_ChangeHintGroup::~CAI_ChangeHintGroup  (line 3654, @0x00000000023e91b0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CAI_ChangeHintGroup::~CAI_ChangeHintGroup(CAI_ChangeHintGroup *const this)
{
  this->_vptr_IHandleEntity = &off_40C7750;
  CBaseEntity::~CBaseEntity(this);
}


// CAI_ChangeHintGroup::~CAI_ChangeHintGroup  (line 3654, @0x00000000023e91d0, libserver.so)  // inlines: ~CAI_ChangeHintGroup
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CAI_ChangeHintGroup::~CAI_ChangeHintGroup(CAI_ChangeHintGroup *const this)
{
  this->_vptr_IHandleEntity = &off_40C7750;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CAI_ChangeHintGroup::GetEntityClass  (line 3656, @0x00000000023e67c0, libserver.so)
CEntityClass *__cdecl CAI_ChangeHintGroup::GetEntityClass()
{
  return g_pEntityCAI_ChangeHintGroupClass;
}


// CAI_ChangeHintGroup::Schema_DynamicBinding  (line 3656, @0x00000000023e67d0, libserver.so)
// globals: CAI_ChangeHintGroup::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAI_ChangeHintGroup::Schema_DynamicBinding(
        const CAI_ChangeHintGroup *const this)
{
  return CAI_ChangeHintGroup::s_pSchemaBinding;
}


// CAI_ChangeHintGroup::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3656, @0x00000000023e67e0, libserver.so)
// globals: CAI_ChangeHintGroup::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAI_ChangeHintGroup::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CAI_ChangeHintGroup::CEntityInstanceEntityClass *const this)
{
  return CAI_ChangeHintGroup::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CAI_ChangeHintGroup::CEntityInstanceEntityClass::DestructInstance  (line 3656, @0x00000000023e67f0, libserver.so)  // inlines: Destruct<CAI_ChangeHintGroup>
void __fastcall CAI_ChangeHintGroup::CEntityInstanceEntityClass::DestructInstance(
        CAI_ChangeHintGroup::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CAI_ChangeHintGroup::CEntityInstanceEntityClass::FreeInstance  (line 3656, @0x00000000023e6810, libserver.so)
void __fastcall CAI_ChangeHintGroup::CEntityInstanceEntityClass::FreeInstance(
        CAI_ChangeHintGroup::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CAI_ChangeHintGroup::CEntityInstanceEntityClass::CanAllocate  (line 3656, @0x00000000023e6830, libserver.so)
bool __fastcall CAI_ChangeHintGroup::CEntityInstanceEntityClass::CanAllocate(
        const CAI_ChangeHintGroup::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CAI_ChangeHintGroup::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3656, @0x00000000023e6840, libserver.so)
// globals: CAI_ChangeHintGroup::s_pSchemaBinding
const ISchemaBinding *__fastcall CAI_ChangeHintGroup::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CAI_ChangeHintGroup::CEntityInstanceEntityClass *const this)
{
  return CAI_ChangeHintGroup::s_pSchemaBinding;
}


// CAI_ChangeHintGroup::CEntityInstanceEntityClass::AllocateInstance  (line 3656, @0x00000000023e86b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CAI_ChangeHintGroup::CEntityInstanceEntityClass::AllocateInstance(
        CAI_ChangeHintGroup::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CAI_ChangeHintGroup::CEntityInstanceEntityClass::ConstructInstance  (line 3656, @0x00000000023e8a50, libserver.so)  // inlines: CAI_ChangeHintGroup, CUtlSymbolLarge, Construct<CAI_ChangeHintGroup>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CAI_ChangeHintGroup::CEntityInstanceEntityClass::ConstructInstance(
        CAI_ChangeHintGroup::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_40C7750;
    *(p + 99) = 0;
  }
  return p;
}


// CAI_ChangeHintGroup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3656, @0x00000000023eaab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CAI_ChangeHintGroup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAI_ChangeHintGroup::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CAI_ChangeHintGroup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3656, @0x00000000023eaad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CAI_ChangeHintGroup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAI_ChangeHintGroup::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CAI_ChangeHintGroup::GetEntityClassInternal  (line 3656, @0x00000000023f2f20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "ai_changehintgroup", "CAI_ChangeHintGroup"
// globals: `guard variable for'CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass, CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass, __dso_handle, CAI_ChangeHintGroup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CAI_ChangeHintGroup::GetEntityClassInfo(void)::g_EntityCAI_ChangeHintGroupClassInfo, CAI_ChangeHintGroup::GetEntityClassInfo(void)::g_EntityCAI_ChangeHintGroupClassInfo
CEntityClass *__cdecl CAI_ChangeHintGroup::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass == 0
    && __cxa_guard_acquire(&`guard variable for'CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass) != 0 )
  {
    CEntityClass::CEntityClass(&CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass);
    CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass._vptr_CEntityClass = off_40C76D0;
    __cxa_guard_release(&`guard variable for'CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass);
    __cxa_atexit(
      CAI_ChangeHintGroup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass,
      &_dso_handle);
  }
  if ( g_pEntityCAI_ChangeHintGroupClass != 0 )
    return &CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass;
  if ( `guard variable for'CAI_ChangeHintGroup::GetEntityClassInfo(void)::g_EntityCAI_ChangeHintGroupClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CAI_ChangeHintGroup::GetEntityClassInfo(void)::g_EntityCAI_ChangeHintGroupClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CAI_ChangeHintGroup::GetEntityClassInfo(void)::g_EntityCAI_ChangeHintGroupClassInfo,
      "CAI_ChangeHintGroup",
      "ai_changehintgroup",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CAI_ChangeHintGroup::GetEntityClassInfo(void)::g_EntityCAI_ChangeHintGroupClassInfo);
  }
  CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass.m_pClassInfo = &CAI_ChangeHintGroup::GetEntityClassInfo(void)::g_EntityCAI_ChangeHintGroupClassInfo;
  CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass.m_pBaseClassInfo = CAI_ChangeHintGroup::GetEntityClassInfo(void)::g_EntityCAI_ChangeHintGroupClassInfo.m_pBaseClassInfo;
  g_pEntityCAI_ChangeHintGroupClass = &CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass;
  CAI_ChangeHintGroup::GetEntityClassInfo(void)::g_EntityCAI_ChangeHintGroupClassInfo.m_pClass = &CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass;
  CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCAI_ChangeHintGroupClass->m_pComponentOverrides = 0;
  return &CAI_ChangeHintGroup::GetEntityClassInternal(void)::g_EntityCAI_ChangeHintGroupClass;
}


// CAI_ChangeHintGroup::ObjectCaps  (line 3659, @0x00000000023e8bd0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CAI_ChangeHintGroup::ObjectCaps(CAI_ChangeHintGroup *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CAI_ChangeHintGroup::GetDataDescMap  (line 3675, @0x00000000023bb440, libserver.so)
// globals: CAI_ChangeHintGroup::m_DataMap
datamap_t *__fastcall CAI_ChangeHintGroup::GetDataDescMap(CAI_ChangeHintGroup *const this)
{
  return &CAI_ChangeHintGroup::m_DataMap;
}


// CAI_ChangeHintGroup::AddDatadescMetadataKeys  (line 3675, @0x00000000023d20d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CAI_ChangeHintGroup::GetEntityClass(void)
void __fastcall CAI_ChangeHintGroup::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CAI_ChangeHintGroup::GetEntityClass);
}


// CAI_ChangeHintGroup::GetBaseMap  (line 3675, @0x00000000023d20f0, libserver.so)
datamap_t *__cdecl CAI_ChangeHintGroup::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CAI_ChangeHintGroup>  (line 3675, @0x00000000023d2100, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CAI_ChangeHintGroup"
// globals: `guard variable for'DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder, CAI_ChangeHintGroup::GetEntityClass(void), CAI_ChangeHintGroup::m_DataMap, DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder) != 0 )
  {
    DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder.m_pszBase = "CAI_ChangeHintGroup";
    DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::nameHolder,
      &_dso_handle);
  }
  CAI_ChangeHintGroup::m_DataMap.dataNumFields = 6;
  CAI_ChangeHintGroup::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CAI_ChangeHintGroup::m_DataMap.dataDesc = &DataMapInit<CAI_ChangeHintGroup>(CAI_ChangeHintGroup *)::dataDesc[1];
  AddDatadescMetadataKeys(&CAI_ChangeHintGroup::m_DataMap, CAI_ChangeHintGroup::GetEntityClass);
  return &CAI_ChangeHintGroup::m_DataMap;
}


// CAI_ChangeHintGroup::FindQualifiedNPC  (line 3687, @0x00000000023d21d0, libserver.so)
CAI_BaseNPC *__fastcall CAI_ChangeHintGroup::FindQualifiedNPC(
        CAI_ChangeHintGroup *const this,
        CAI_BaseNPC *pPrev,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  return 0;
}


// CAI_ChangeHintGroup::InputActivate  (line 3732, @0x00000000023bb5a0, libserver.so)
// calls: Warning
// strings: "BaseNPCs and hint groups do not exist in this mod.\n"
void __fastcall CAI_ChangeHintGroup::InputActivate(CAI_ChangeHintGroup *const this, inputdata_t *const inputdata)
{
  Warning("BaseNPCs and hint groups do not exist in this mod.\n", inputdata);
}


// CTriggerCamera::GetDataDescMap  (line 3764, @0x00000000023bb450, libserver.so)
// globals: CTriggerCamera::m_DataMap
datamap_t *__fastcall CTriggerCamera::GetDataDescMap(CTriggerCamera *const this)
{
  return &CTriggerCamera::m_DataMap;
}


// CTriggerCamera::AddDatadescMetadataKeys  (line 3764, @0x00000000023d21e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerCamera::GetEntityClass(void)
void __fastcall CTriggerCamera::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerCamera::GetEntityClass);
}


// CTriggerCamera::GetBaseMap  (line 3764, @0x00000000023d2200, libserver.so)
datamap_t *__cdecl CTriggerCamera::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CTriggerCamera>  (line 3764, @0x00000000023ddf20, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerCamera"
// globals: `guard variable for'DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder, `guard variable for'DataMapInit<CTriggerCamera>(CTriggerCamera *)::dataDesc, CTriggerCamera::GetEntityClass(void), CTriggerCamera::m_DataMap, DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerCamera>(CTriggerCamera *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_pszBase = "CTriggerCamera";
    DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder,
      &_dso_handle);
  }
  CTriggerCamera::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerCamera>(CTriggerCamera *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerCamera>(CTriggerCamera *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v2, DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_pszBase), "FollowTarget");
    m_Size = DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTriggerCamera>(CTriggerCamera *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTriggerCamera>(CTriggerCamera *)::dataDesc[24].fieldName = v2;
    DataMapInit<CTriggerCamera>(CTriggerCamera *)::dataDesc[25].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerCamera>(CTriggerCamera *)::dataDesc);
  }
  CTriggerCamera::m_DataMap.dataNumFields = 25;
  CTriggerCamera::m_DataMap.dataDesc = &DataMapInit<CTriggerCamera>(CTriggerCamera *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerCamera::m_DataMap, CTriggerCamera::GetEntityClass);
  return &CTriggerCamera::m_DataMap;
}


// CTriggerCamera::YouForgotToImplementOrDeclareServerClass  (line 3806, @0x00000000023bb460, libserver.so)
int __fastcall CTriggerCamera::YouForgotToImplementOrDeclareServerClass(CTriggerCamera *const this)
{
  return 0;
}


// CTriggerCamera::GetServerClass  (line 3806, @0x00000000023c2dc0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CTriggerCamera::GetServerClass(CTriggerCamera *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CTriggerCamera::CTriggerCamera  (line 3812, @0x00000000023d2210, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CUtlSymbolLarge
// calls: CBaseEntity::CBaseEntity
// callers: CTriggerCamera::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CTriggerCamera::CTriggerCamera(CTriggerCamera *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_hPlayer.m_Index = -1;
  this->_vptr_IHandleEntity = &off_40C7DF0;
  this->m_hTarget.m_Index = -1;
  this->m_sPath.u.m_Id = 0;
  this->m_iszTargetAttachment.u.m_Id = 0;
  this->m_OnEndFollow._vptr_CEntityIOOutput = off_3F7C190;
  this->m_fov = 90.0;
  this->m_fovSpeed = 1.0;
}


// CTriggerCamera::Spawn  (line 3821, @0x00000000023bb840, libserver.so)
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CTriggerCamera::Spawn(CTriggerCamera *const this, const CEntityKeyValues *pKeyValues)
{
  float m_flSpeed; // xmm0_4

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NOCLIP, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  m_flSpeed = this->m_flSpeed;
  this->m_state = 0;
  this->m_initialSpeed = m_flSpeed;
  if ( this->m_acceleration == 0.0 )
    this->m_acceleration = 500.0;
  if ( this->m_deceleration == 0.0 )
    this->m_deceleration = 500.0;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CTriggerCamera::UpdateTransmitState  (line 3840, @0x00000000023bd240, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CTriggerCamera::UpdateTransmitState(CTriggerCamera *const this)
{
  if ( this->m_state == 1 )
    return CBaseEntity::SetTransmitState(this, 4);
  else
    return CBaseEntity::SetTransmitState(this, 8);
}


// CTriggerCamera::InputEnable  (line 3857, @0x00000000023da390, libserver.so)  // inlines: AssignTo, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, TempString, ToString, operator CEntityInstance*, operator!, operator=
// calls: CTriggerCamera::Enable, CGameEntitySystem::FindEntityByName, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_23DA3D0, CEntityHandle::gm_pEntityList, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CTriggerCamera::InputEnable(CTriggerCamera *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  char *v5; // rdx
  char v6; // al
  uint32 m_Index; // eax
  unsigned int v8; // edx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  const char *v18; // rax
  const char *m_pszString; // rcx
  const char *v20; // rdx
  double m_float; // xmm0_8

  this->m_hPlayer.m_Index = -1;
  m_type = inputdata->value.m_type;
  if ( m_type != 30 )
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_24;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_30;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        v5 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        v5 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_32;
      case 6:
        m_pszString = "true";
        v20 = "%s";
        if ( inputdata->value.m_char == 0 )
          m_pszString = "false";
        goto LABEL_27;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_32;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        v5 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        v5 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_28;
      case 33:
        m_pszString = inputdata->value.m_pszString;
        v20 = "%llu";
LABEL_27:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v20, m_pszString);
LABEL_28:
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        v5 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_30:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        v5 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_32:
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        v5 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      default:
        v18 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v18);
LABEL_24:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        goto LABEL_5;
    }
  }
  v5 = inputdata->value.m_pszString;
  v6 = *v5;
LABEL_4:
  if ( v6 == 0 )
  {
LABEL_5:
    m_Index = this->m_hPlayer.m_Index;
    v8 = m_Index + 2;
    goto LABEL_6;
  }
  EntityByName = CGameEntitySystem::FindEntityByName(
                   g_pGameEntitySystem,
                   0,
                   v5,
                   this,
                   inputdata->pActivator,
                   inputdata->pCaller,
                   0);
  if ( EntityByName != 0 )
  {
    m_pEntity = EntityByName->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v17 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hPlayer.m_Index) = v17 | this->m_hPlayer.m_Index & 0x8000;
      m_Index = (v16 << 15) | this->m_hPlayer.m_Index & 0x7FFF;
      this->m_hPlayer.m_Index = m_Index;
      v8 = m_Index + 2;
LABEL_6:
      if ( v8 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[this->m_hPlayer.m_Index & 0x1FF];
          if ( v10 != 0 && v10->m_EHandle.m_Index == m_Index && v10->m_pInstance != 0 )
            goto LABEL_15;
        }
      }
      goto LABEL_10;
    }
  }
  this->m_hPlayer.m_Index = -1;
LABEL_10:
  if ( inputdata->pActivator != 0 && (v11 = inputdata->pActivator->m_pEntity) != 0 )
  {
    v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
    if ( v11->m_EHandle.m_Index == -1 )
      v13 = 0x7FFF;
    else
      v13 = v11->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPlayer.m_Index) = v13 | this->m_hPlayer.m_Index & 0x8000;
    this->m_hPlayer.m_Index = (v12 << 15) | this->m_hPlayer.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPlayer.m_Index = -1;
  }
LABEL_15:
  CTriggerCamera::Enable(this);
}


// CTriggerCamera::InputDisable  (line 3878, @0x00000000023d9510, libserver.so)
// calls: CTriggerCamera::Disable
void __fastcall CTriggerCamera::InputDisable(CTriggerCamera *const this, inputdata_t *const inputdata)
{
  CTriggerCamera::Disable(this);
}


// CTriggerCamera::Enable  (line 3886, @0x00000000023d99d0, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, ClassMatches, FClassnameIs, Get, GetAbsVelocity, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntityName, GetEntryIndex, GetFOVOwner, GetHandleEntity, GetInstance, GetSerialNumber, HasSpawnFlags, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, QAngle, Set, String, ToBasePlayer, ToCStr, curtime, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator!, operator!=, operator->, operator=, operator=<bool>
// calls: UTIL_GetLocalPlayer, CBasePlayer::SetFOV, CBasePlayer::EnableControl, CEntityHandle::operator CEntityInstance*, UTIL_SetOrigin, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles, CBaseEntity::SetAbsVelocity, CBasePlayer::SetViewEntity, CTriggerCamera::Move, CBaseEntity::DispatchUpdateTransmitState, CGameEntitySystem::FindEntityByName (22 total)
// callers: CTriggerCamera::InputEnable, CTriggerCamera::Use
// strings: "%s could not find attachment %s on target %s.\n", "%s tried to target an attachment (%s) on target %s, which has no model.\n", "point_viewcontrol_multiplayer", "point_viewcontrol"
// globals: CEntityHandle::gm_pEntityList, CTriggerCamera::FollowTarget(void)
void __fastcall CTriggerCamera::Enable(CTriggerCamera *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBasePlayer *LocalPlayer; // rax
  CConcreteEntityList *v6; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  uint32 v10; // edx
  unsigned int v11; // eax
  CEntityIdentity *v12; // rax
  __int64 v13; // rcx
  CEntityIdentity *v14; // rax
  CBaseEntity *m_pInstance; // r13
  CBaseEntity *v16; // r12
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v18; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  unsigned int m_Value; // eax
  float m_initialSpeed; // xmm0_4
  unsigned __int16 v22; // dx
  int v23; // esi
  int v24; // eax
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  int v28; // eax
  __int16 v29; // cx
  uint32 v30; // eax
  CEntityIdentity *v31; // rdx
  __int64 v32; // rcx
  CEntityIdentity *v33; // rdx
  CGlobalVars *v34; // r13
  float v35; // xmm0_4
  FnGlobalVarsWarningFunc v36; // rax
  CBaseEntity *m_pPath; // rdi
  float m_flSpeed; // xmm0_4
  CEntityInstance *v39; // rax
  vec_t v40; // xmm1_4
  const CBaseEntity *v41; // rax
  const CBaseEntity *v42; // rax
  vec_t x; // xmm0_4
  CEntityInstance *v44; // rax
  uint32 v45; // eax
  CEntityIdentity *v46; // rdx
  CEntityIdentity *v47; // rdx
  CBaseEntity *NextTarget; // rax
  bool v49; // zf
  CEntityInstance *v50; // rax
  const char *m_pAsString; // rsi
  CEntityInstance *v52; // rax
  const CBaseAnimating *v53; // rax
  AttachmentHandle_t v54; // al
  CEntityInstance *v55; // rax
  const char *v56; // rdx
  const char *v57; // rcx
  CEntityIdentity *v58; // rax
  const char *v59; // rsi
  uint32 v60; // eax
  CEntityInstance *v61; // rcx
  CEntityIdentity *v62; // rdx
  CEntityIdentity *v63; // rdx
  const char *v64; // rdx
  const char *v65; // rcx
  CEntityIdentity *v66; // rax
  const char *v67; // rsi
  CCollisionProperty *m_pCollision; // rdi
  double v69; // xmm1_8
  CGlobalVars *v70; // r12
  double v71; // xmm0_8
  FnGlobalVarsWarningFunc v72; // rax
  unsigned __int16 v73; // dx
  int v74; // esi
  int v75; // eax
  CEntityIdentity *v76; // rdx
  CEntityIdentity *v77; // rdx
  vec_t pAttachmentName; // [rsp+8h] [rbp-48h]
  char *pAttachmentNamea; // [rsp+8h] [rbp-48h]
  char *pAttachmentNameb; // [rsp+8h] [rbp-48h]
  Vector vecOrigin; // [rsp+10h] [rbp-40h] BYREF

  this->m_state = 1;
  m_Index = this->m_hPlayer.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hPlayer.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0
    && (*(v4->m_pInstance->_vptr_IHandleEntity + 140))(v4->m_pInstance) != 0 )
  {
    v10 = this->m_hPlayer.m_Index;
    v11 = v10 + 2;
  }
  else
  {
    LocalPlayer = UTIL_GetLocalPlayer();
    if ( LocalPlayer == 0 || (m_pEntity = LocalPlayer->m_pEntity) == 0 )
    {
      this->m_hPlayer.m_Index = -1;
LABEL_14:
      m_pInstance = 0;
      v16 = 0;
      goto LABEL_15;
    }
    v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v9 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPlayer.m_Index) = v9 | this->m_hPlayer.m_Index & 0x8000;
    v10 = (v8 << 15) | this->m_hPlayer.m_Index & 0x7FFF;
    this->m_hPlayer.m_Index = v10;
    v11 = v10 + 2;
  }
  v6 = CEntityHandle::gm_pEntityList;
  if ( v11 <= 1 )
    goto LABEL_14;
  v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
  if ( v12 == 0 )
    goto LABEL_14;
  v13 = this->m_hPlayer.m_Index & 0x1FF;
  v6 = (8 * v13);
  v14 = &v12[v13];
  if ( v14 == 0 )
    goto LABEL_14;
  if ( v14->m_EHandle.m_Index != v10 )
    goto LABEL_14;
  m_pInstance = v14->m_pInstance;
  if ( v14->m_pInstance == 0 )
    goto LABEL_14;
  v16 = 0;
  if ( (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
    v16 = m_pInstance;
  if ( (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
    this->m_nPlayerButtons = v16[3].m_pfnTouch.__pfn;
  this->m_nOldTakeDamage = CBaseEntity::GetDamageOptions(m_pInstance);
  CBaseEntity::SetDamageOptions(m_pInstance, DamageOptions_t::DAMAGE_NO);
  if ( (this->m_spawnflags.m_Value & 0x20) != 0 )
  {
    m_pCollision = m_pInstance->m_pCollision;
    if ( m_pCollision != 0 )
      (*(m_pCollision->_vptr_ICollideable + 16))(m_pCollision);
  }
LABEL_15:
  m_flCurrentTime = 0.0;
  v18 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v6, 0.0);
    }
    m_flCurrentTime = v18->m_flCurrentTime;
  }
  m_Value = this->m_spawnflags.m_Value;
  this->m_flReturnTime = m_flCurrentTime + this->m_flWait;
  m_initialSpeed = this->m_initialSpeed;
  this->m_flSpeed = m_initialSpeed;
  this->m_targetSpeed = m_initialSpeed;
  if ( (m_Value & 0x10) != 0 )
    this->m_bSnapToGoal = 1;
  if ( (m_Value & 0x80u) != 0 && v16 != 0 )
  {
    if ( HIDWORD(v16[3].m_vecVelocity.m_pStateChanged) == -1 )
    {
      v22 = 0x7FFF;
      v23 = 0x7FFF;
    }
    else
    {
      v22 = WORD2(v16[3].m_vecVelocity.m_pStateChanged) & 0x7FFF;
      v23 = v22;
    }
    v24 = (HIDWORD(v16[3].m_vecVelocity.m_pStateChanged) >> 15 << 15) | v22 & 0x7FFF;
    LODWORD(vecOrigin.x) = v24;
    if ( (v24 + 2) > 1 )
    {
      v25 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v23 >> 9];
      if ( v25 != 0 )
      {
        v26 = &v25[v23 & 0x1FF];
        if ( v26 != 0 && v24 == v26->m_EHandle.m_Index && v26->m_pInstance != 0 )
        {
          if ( CEntityIdentity::ClassMatches(v26->m_pInstance->m_pEntity, "point_viewcontrol_multiplayer")
            || (HIDWORD(v16[3].m_vecVelocity.m_pStateChanged) == -1
              ? (v73 = 0x7FFF, v74 = 0x7FFF)
              : (v73 = WORD2(v16[3].m_vecVelocity.m_pStateChanged) & 0x7FFF, v74 = v73),
                (v75 = (HIDWORD(v16[3].m_vecVelocity.m_pStateChanged) >> 15 << 15) | v73 & 0x7FFF,
                 LODWORD(vecOrigin.x) = v75,
                 (v75 + 2) > 1)
             && (v76 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v74 >> 9]) != 0
             && (v77 = &v76[v74 & 0x1FF]) != 0
             && v75 == v77->m_EHandle.m_Index
             && v77->m_pInstance != 0
             && CEntityIdentity::ClassMatches(v77->m_pInstance->m_pEntity, "point_viewcontrol")) )
          {
            CBasePlayer::ClearZoomOwner(v16);
          }
        }
      }
    }
    CBasePlayer::SetFOV(v16, this, this->m_fov, LODWORD(this->m_fovSpeed), 0);
    m_Value = this->m_spawnflags.m_Value;
  }
  if ( (m_Value & 2) == 0 )
  {
    NextTarget = CBaseEntity::GetNextTarget(this);
    if ( NextTarget != 0 )
    {
      v27 = NextTarget->m_pEntity;
      if ( v27 != 0 )
        goto LABEL_35;
    }
LABEL_72:
    this->m_hTarget.m_Index = -1;
    goto LABEL_41;
  }
  if ( m_pInstance == 0 )
    goto LABEL_72;
  v27 = m_pInstance->m_pEntity;
  if ( v27 == 0 )
    goto LABEL_72;
LABEL_35:
  v28 = (v27->m_EHandle.m_Index >> 15) - (v27->m_flags & 1);
  v29 = 0x7FFF;
  if ( v27->m_EHandle.m_Index != -1 )
    v29 = v27->m_EHandle.m_Index & 0x7FFF;
  v6 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_hTarget.m_Index) = v29 | this->m_hTarget.m_Index & 0x8000;
  v30 = (v28 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  this->m_hTarget.m_Index = v30;
  if ( v30 + 2 > 1 )
  {
    v31 = v6->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v31 != 0 )
    {
      v32 = this->m_hTarget.m_Index & 0x1FF;
      v6 = (8 * v32);
      v33 = &v31[v32];
      if ( v33 != 0 && v33->m_EHandle.m_Index == v30 )
      {
        v49 = this->m_iszTargetAttachment.u.m_Id == 0;
        this->m_iAttachmentIndex = 0;
        if ( !v49 )
        {
          v50 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
          if ( (*(v50->_vptr_IHandleEntity + 43))(v50) != 0 )
          {
            m_pAsString = "";
            if ( this->m_iszTargetAttachment.u.m_Id != 0 )
              m_pAsString = this->m_iszTargetAttachment.u.m_pAsString;
            pAttachmentNameb = m_pAsString;
            v52 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
            v53 = (*(v52->_vptr_IHandleEntity + 43))(v52);
            v54 = CBaseAnimating::LookupAttachment(v53, pAttachmentNameb);
            this->m_iAttachmentIndex = v54;
            if ( v54 == 0 )
            {
              v55 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
              v56 = "";
              v57 = v55->m_pEntity->m_name.u.m_pAsString;
              if ( v57 == 0 )
                v57 = "";
              if ( this->m_iszTargetAttachment.u.m_Id != 0 )
                v56 = this->m_iszTargetAttachment.u.m_pAsString;
              v58 = this->m_pEntity;
              v59 = "";
              if ( v58->m_designerName.u.m_Id != 0 )
                v59 = v58->m_designerName.u.m_pAsString;
              Warning("%s could not find attachment %s on target %s.\n", v59, v56, v57);
            }
          }
          else
          {
            v60 = this->m_hTarget.m_Index;
            v61 = 0;
            if ( v60 + 2 > 1 )
            {
              v62 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
              if ( v62 != 0 )
              {
                v63 = &v62[this->m_hTarget.m_Index & 0x1FF];
                if ( v63 != 0 && v60 == v63->m_EHandle.m_Index )
                  v61 = v63->m_pInstance;
              }
            }
            v64 = "";
            v65 = v61->m_pEntity->m_name.u.m_pAsString;
            if ( v65 == 0 )
              v65 = "";
            if ( this->m_iszTargetAttachment.u.m_Id != 0 )
              v64 = this->m_iszTargetAttachment.u.m_pAsString;
            v66 = this->m_pEntity;
            v67 = "";
            if ( v66->m_designerName.u.m_Id != 0 )
              v67 = v66->m_designerName.u.m_pAsString;
            Warning("%s tried to target an attachment (%s) on target %s, which has no model.\n", v67, v64, v65);
          }
        }
      }
    }
  }
LABEL_41:
  if ( v16 != 0 && (this->m_spawnflags.m_Value & 4) != 0 )
    CBasePlayer::EnableControl(v16, 0);
  if ( this->m_sPath.u.m_Id != 0 )
  {
    *&vecOrigin.x = this->m_sPath.u.m_Id;
    this->m_pPath = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &vecOrigin, this, m_pInstance, 0, 0);
  }
  else
  {
    this->m_pPath = 0;
  }
  v34 = gpGlobals;
  v35 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v36 = gpGlobals->m_pfnWarningFunc;
      if ( v36 != 0 )
        (v36)(1, v6, 0.0);
    }
    v35 = v34->m_flCurrentTime;
  }
  m_pPath = this->m_pPath;
  this->m_flStopTime = v35;
  if ( m_pPath != 0 )
  {
    m_flSpeed = m_pPath->m_flSpeed;
    if ( m_flSpeed != 0.0 )
      this->m_targetSpeed = m_flSpeed;
    this->m_flStopTime = (*(m_pPath->_vptr_IHandleEntity + 95))(m_pPath, v6) + this->m_flStopTime;
  }
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    v39 = CEntityHandle::operator CEntityInstance *(&this->m_hPlayer);
    *&vecOrigin.x = (*(v39->_vptr_IHandleEntity + 164))(v39);
    vecOrigin.z = v40;
    UTIL_SetOrigin(this, &vecOrigin, 0);
    v41 = CEntityHandle::operator CEntityInstance *(&this->m_hPlayer);
    pAttachmentName = CBaseEntity::GetLocalAngles(v41)->y;
    v42 = CEntityHandle::operator CEntityInstance *(&this->m_hPlayer);
    x = CBaseEntity::GetLocalAngles(v42)->x;
    vecOrigin.z = 0.0;
    vecOrigin.y = pAttachmentName;
    vecOrigin.x = x;
    CBaseEntity::SetLocalAngles(this, &vecOrigin);
    v44 = CEntityHandle::operator CEntityInstance *(&this->m_hPlayer);
    if ( (BYTE5(v44[11].m_CScriptComponent) & 0x10) != 0 )
    {
      pAttachmentNamea = v44;
      CBaseEntity::CalcAbsoluteVelocity(v44);
      v44 = pAttachmentNamea;
    }
    CBaseEntity::SetAbsVelocity(this, (&v44[9].m_pEntity + 4));
  }
  else
  {
    CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  }
  if ( v16 != 0 )
  {
    CBasePlayer::SetViewEntity(v16, this);
    if ( LOBYTE(v16[2].m_vecVelocity.m_vecY.m_nEncoder) != 0 )
    {
      (*(v16[2].m_target.u.m_Id + 16))(&v16[2].m_target, 136, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      LOBYTE(v16[2].m_vecVelocity.m_vecY.m_nEncoder) = 0;
    }
  }
  v45 = this->m_hTarget.m_Index;
  if ( v45 + 2 > 1 )
  {
    v46 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v46 != 0 )
    {
      v47 = &v46[this->m_hTarget.m_Index & 0x1FF];
      if ( v47 != 0 && v45 == v47->m_EHandle.m_Index )
      {
        CBaseEntity::ThinkSet(this, CTriggerCamera::FollowTarget, 0.0, 0, 0);
        v70 = gpGlobals;
        v71 = 0.0;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v72 = gpGlobals->m_pfnWarningFunc;
            if ( v72 != 0 )
              (v72)(1, 0.0);
          }
          *&v71 = LODWORD(v70->m_flCurrentTime);
        }
        CBaseEntity::SetNextThink(this, v71, v69, 0);
      }
    }
  }
  this->m_moveDistance = 0.0;
  CTriggerCamera::Move(this);
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CTriggerCamera::Disable  (line 4053, @0x00000000023d92e0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, curtime, operator CEntityInstance*, operator bool, operator=<bool>, ~CVariantBase
// calls: CBaseEntity::ThinkSet, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::DispatchUpdateTransmitState, CBasePlayer::SetViewEntity, CBasePlayer::EnableControl, CBaseEntity::SetDamageOptions, CBasePlayer::SetFOV, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CTriggerCamera::InputDisable, CTriggerCamera::Move, CTriggerCamera::Use, CTriggerCamera::FollowTarget
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerCamera::Disable(CTriggerCamera *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBasePlayer *m_pInstance; // r12
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  m_Index = this->m_hPlayer.m_Index;
  v3 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = this->m_hPlayer.m_Index & 0x1FF;
      v3 = (8 * v5);
      v6 = &v4[v5];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( (*(v6->m_pInstance->_vptr_IHandleEntity + 139))(v6->m_pInstance) != 0 )
        {
          if ( (this->m_spawnflags.m_Value & 0x20) != 0 )
            (*(m_pInstance->m_Collision._vptr_ICollideable + 17))(&m_pInstance->m_Collision);
          CBasePlayer::SetViewEntity(m_pInstance, 0);
          CBasePlayer::EnableControl(m_pInstance, 1);
          if ( !m_pInstance->m_Local.m_bDrawViewmodel.m_Value )
          {
            (*(m_pInstance->m_Local._vptr_CPlayerLocalData + 2))(&m_pInstance->m_Local, 136, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            m_pInstance->m_Local.m_bDrawViewmodel.m_Value = 1;
          }
        }
        if ( SLOBYTE(this->m_spawnflags.m_Value) < 0 )
          CBasePlayer::SetFOV(m_pInstance, this, 0, LODWORD(this->m_fovSpeed), 0);
        CBaseEntity::SetDamageOptions(m_pInstance, this->m_nOldTakeDamage);
      }
    }
  }
  m_flCurrentTime = 0.0;
  this->m_state = 0;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v3, 0.0);
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  this->m_flReturnTime = m_flCurrentTime;
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnEndFollow, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CTriggerCamera::Use  (line 4093, @0x00000000023da810, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CBaseEntity::ShouldToggle, CTriggerCamera::Enable, CTriggerCamera::Disable
void __fastcall CTriggerCamera::Use(
        CTriggerCamera *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx

  if ( CBaseEntity::ShouldToggle(this, useType, this->m_state) != 0 )
  {
    if ( this->m_state != 0 )
    {
      CTriggerCamera::Disable(this);
    }
    else
    {
      if ( pActivator != 0 && (m_pEntity = pActivator->m_pEntity) != 0 )
      {
        v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v9 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hPlayer.m_Index) = v9 | this->m_hPlayer.m_Index & 0x8000;
        this->m_hPlayer.m_Index = (v8 << 15) | this->m_hPlayer.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hPlayer.m_Index = -1;
      }
      CTriggerCamera::Enable(this);
    }
  }
}


// CTriggerCamera::FollowTarget  (line 4113, @0x00000000023da8e0, libserver.so)  // inlines: FastSqrt, Get, GetAbsVelocity, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, Length, LookupEntity, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator CEntityInstance*, operator bool, operator*, operator-, operator->, operator=, operator==<CBaseEntity>
// calls: CTriggerCamera::Disable, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, CBaseEntity::SetAbsVelocity, CBaseEntity::SetNextThink, CTriggerCamera::Move, CEntityHandle::operator CEntityInstance*, CBaseAnimating::GetAttachment, CBaseEntity::GetAbsOrigin, VectorAngles, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles (14 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerCamera::FollowTarget(CTriggerCamera *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  float m_flCurrentTime; // xmm1_4
  float m_flReturnTime; // xmm0_4
  CGlobalVars *v10; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int m_iAttachmentIndex; // r13d
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  QAngle *AbsAngles; // rax
  bool v17; // zf
  __int64 v18; // xmm1_8
  vec_t v19; // xmm1_4
  vec_t v20; // xmm0_4
  CGlobalVars *v21; // r12
  double v22; // xmm0_8
  FnGlobalVarsWarningFunc v23; // rax
  CEntityInstance *v24; // rax
  const CBaseAnimating *v25; // rax
  const Vector *AbsOrigin; // rax
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm2_4
  float y; // xmm0_4
  float v31; // xmm0_4
  const QAngle *LocalAngles; // rax
  float v33; // xmm0_4
  float v34; // xmm1_4
  float frametime; // xmm2_4
  const Vector *v36; // rax
  uint32 v37; // ecx
  float *p_x; // r13
  CEntityIdentity *v39; // rax
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v41; // rax
  const Vector *v42; // rax
  float dx_0; // [rsp+8h] [rbp-58h]
  float v44; // [rsp+Ch] [rbp-54h]
  float x; // [rsp+Ch] [rbp-54h]
  float v46; // [rsp+Ch] [rbp-54h]
  QAngle vecGoal; // [rsp+10h] [rbp-50h] BYREF
  QAngle angles; // [rsp+20h] [rbp-40h] BYREF
  QAngle vecAngVel; // [rsp+30h] [rbp-30h] BYREF

  m_Index = this->m_hPlayer.m_Index;
  if ( m_Index + 2 <= 1 )
    return;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return;
  v4 = &v3[this->m_hPlayer.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index || v4->m_pInstance == 0 )
    return;
  v5 = this->m_hTarget.m_Index;
  if ( v5 + 2 <= 1 )
    goto LABEL_11;
  v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v6 == 0 )
    goto LABEL_11;
  v7 = &v6[this->m_hTarget.m_Index & 0x1FF];
  if ( v7 == 0 || v5 != v7->m_EHandle.m_Index || v7->m_pInstance == 0 )
    goto LABEL_11;
  if ( (this->m_spawnflags.m_Value & 8) != 0 )
  {
    m_iAttachmentIndex = this->m_iAttachmentIndex;
    if ( m_iAttachmentIndex == 0 )
      goto LABEL_22;
LABEL_43:
    v24 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    v25 = (*(v24->_vptr_IHandleEntity + 43))(v24);
    CBaseAnimating::GetAttachment(v25, m_iAttachmentIndex, &angles);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v27 = angles.y - AbsOrigin->y;
    v28 = angles.z - AbsOrigin->z;
    v29 = angles.x - AbsOrigin->x;
    goto LABEL_44;
  }
  m_flCurrentTime = 0.0;
  m_flReturnTime = this->m_flReturnTime;
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v44 = this->m_flReturnTime;
        (m_pfnWarningFunc)(1, m_flReturnTime, 0.0);
        m_flReturnTime = v44;
      }
    }
    m_flCurrentTime = v10->m_flCurrentTime;
  }
  if ( m_flCurrentTime > m_flReturnTime )
  {
LABEL_11:
    CTriggerCamera::Disable(this);
    return;
  }
  m_iAttachmentIndex = this->m_iAttachmentIndex;
  if ( m_iAttachmentIndex != 0 )
    goto LABEL_43;
LABEL_22:
  v13 = this->m_hTarget.m_Index;
  if ( v13 + 2 > 1 )
  {
    v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v14 != 0 )
    {
      v15 = &v14[this->m_hTarget.m_Index & 0x1FF];
      if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
      {
        v36 = CBaseEntity::GetAbsOrigin(this);
        v37 = this->m_hTarget.m_Index;
        p_x = &v36->x;
        if ( v37 + 2 > 1
          && (v39 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0 )
        {
          m_pInstance = 0;
          v41 = &v39[this->m_hTarget.m_Index & 0x1FF];
          if ( v41 != 0 && v37 == v41->m_EHandle.m_Index )
            m_pInstance = v41->m_pInstance;
        }
        else
        {
          m_pInstance = 0;
        }
        v42 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v27 = v42->y - p_x[1];
        v28 = v42->z - p_x[2];
        v29 = v42->x - *p_x;
LABEL_44:
        vecAngVel.x = v29;
        vecAngVel.y = v27;
        vecAngVel.z = v28;
        VectorAngles(&vecAngVel, &vecGoal);
        if ( this->m_bSnapToGoal )
          goto LABEL_27;
LABEL_45:
        angles = *CBaseEntity::GetLocalAngles(this);
        y = angles.y;
        if ( angles.y > 360.0 )
        {
          y = angles.y - 360.0;
          angles.y = angles.y - 360.0;
        }
        if ( y < 0.0 )
          angles.y = y + 360.0;
        CBaseEntity::SetLocalAngles(this, &angles);
        x = vecGoal.x;
        v31 = x - CBaseEntity::GetLocalAngles(this)->x;
        v46 = vecGoal.y;
        dx_0 = v31;
        LocalAngles = CBaseEntity::GetLocalAngles(this);
        v33 = dx_0;
        v34 = v46 - LocalAngles->y;
        if ( dx_0 < -180.0 )
          v33 = dx_0 + 360.0;
        if ( v33 > 180.0 )
          v33 = v33 - 360.0;
        if ( v34 < -180.0 )
          v34 = v34 + 360.0;
        if ( v34 > 180.0 )
          v34 = v34 - 360.0;
        frametime = gpGlobals->frametime;
        vecAngVel.z = this->m_vecAngVelocity.z;
        vecAngVel.x = (v33 * 40.0) * frametime;
        vecAngVel.y = (v34 * 40.0) * frametime;
        CBaseEntity::SetLocalAngularVelocity(this, &vecAngVel);
        goto LABEL_28;
      }
    }
  }
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  v17 = !this->m_bSnapToGoal;
  vecGoal = *AbsAngles;
  if ( v17 )
    goto LABEL_45;
LABEL_27:
  CBaseEntity::SetAbsAngles(this, &vecGoal);
  this->m_bSnapToGoal = 0;
LABEL_28:
  if ( (this->m_spawnflags.m_Value & 4) == 0 )
  {
    if ( (this->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(this);
    v19 = this->m_vecAbsVelocity.m_Value.z * 0.80000001;
    v20 = 0.80000001 * this->m_vecAbsVelocity.m_Value.x;
    vecAngVel.y = this->m_vecAbsVelocity.m_Value.y * 0.80000001;
    vecAngVel.z = v19;
    vecAngVel.x = v20;
    CBaseEntity::SetAbsVelocity(this, &vecAngVel);
    if ( (this->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(this);
    v18 = 1092616192;
    if ( fsqrt(
           ((this->m_vecAbsVelocity.m_Value.x * this->m_vecAbsVelocity.m_Value.x)
          + (this->m_vecAbsVelocity.m_Value.y * this->m_vecAbsVelocity.m_Value.y))
         + (this->m_vecAbsVelocity.m_Value.z * this->m_vecAbsVelocity.m_Value.z)) < 10.0 )
      CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  }
  v21 = gpGlobals;
  v22 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v23 = gpGlobals->m_pfnWarningFunc;
      if ( v23 != 0 )
        (v23)(1, 0.0);
    }
    *&v22 = LODWORD(v21->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v22, *&v18, 0);
  CTriggerCamera::Move(this);
}


// CTriggerCamera::StartCameraShot  (line 4202, @0x00000000023d78c0, libserver.so)  // inlines: CVariantBase, Call<char const*, HSCRIPT__*, HSCRIPT__*, HSCRIPT__*, float>, CopyData, EntityToHScript, Free, Get, GetPublicScriptScope, GetVM, ToHScript, operator=, ~CVariantBase
// calls: CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CSceneEntity::StartEvent
// strings: "ScriptStartCameraShot"
void __fastcall CTriggerCamera::StartCameraShot(
        CTriggerCamera *const this,
        const char *pszShotType,
        CBaseEntity *pSceneEntity,
        CBaseEntity *pActor1,
        CBaseEntity *pActor2,
        float duration)
{
  HSCRIPT m_hScope; // r13
  HSCRIPT v8; // r14
  HSCRIPT v9; // r15
  _BYTE *v10; // rdx
  const char **v11; // rax
  HSCRIPT v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r12
  const char **v15; // r12
  CBaseEntity *pActor1a; // [rsp+8h] [rbp-A8h]
  CBaseEntity *pSceneEntitya; // [rsp+10h] [rbp-A0h]
  CBaseEntity *pSceneEntityb; // [rsp+10h] [rbp-A0h]
  CBaseEntity *pActor2c; // [rsp+18h] [rbp-98h]
  CBaseEntity *pActor2b; // [rsp+18h] [rbp-98h]
  const char *v24; // [rsp+30h] [rbp-80h] BYREF
  __int16 v25; // [rsp+38h] [rbp-78h]
  __int16 v26; // [rsp+3Ah] [rbp-76h]
  HSCRIPT v27; // [rsp+40h] [rbp-70h]
  __int16 v28; // [rsp+48h] [rbp-68h]
  __int16 v29; // [rsp+4Ah] [rbp-66h]
  HSCRIPT v30; // [rsp+50h] [rbp-60h]
  __int16 v31; // [rsp+58h] [rbp-58h]
  __int16 v32; // [rsp+5Ah] [rbp-56h]
  HSCRIPT v33; // [rsp+60h] [rbp-50h]
  __int16 v34; // [rsp+68h] [rbp-48h]
  __int16 v35; // [rsp+6Ah] [rbp-46h]
  __int64 v36; // [rsp+70h] [rbp-40h]
  __int16 v37; // [rsp+78h] [rbp-38h]
  __int16 v38; // [rsp+7Ah] [rbp-36h]
  _BYTE v39[48]; // [rsp+80h] [rbp-30h] BYREF

  if ( this->m_hPrivateScope.m_hScope != 0 )
  {
    m_hScope = 0;
    if ( pActor2 != 0 )
    {
      m_hScope = pActor2->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        pActor1a = pActor1;
        pSceneEntitya = pSceneEntity;
        CEntityInstance::CreatePublicScriptScope(pActor2, 0);
        pSceneEntity = pSceneEntitya;
        pActor1 = pActor1a;
        m_hScope = pActor2->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    v8 = 0;
    if ( pActor1 != 0 )
    {
      v8 = pActor1->m_pEntity->m_hPublicScope.m_hScope;
      if ( v8 == 0 )
      {
        pSceneEntityb = pSceneEntity;
        pActor2b = pActor1;
        CEntityInstance::CreatePublicScriptScope(pActor1, 0);
        pSceneEntity = pSceneEntityb;
        v8 = pActor2b->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    v9 = 0;
    if ( pSceneEntity != 0 )
    {
      v9 = pSceneEntity->m_pEntity->m_hPublicScope.m_hScope;
      if ( v9 == 0 )
      {
        pActor2c = pSceneEntity;
        CEntityInstance::CreatePublicScriptScope(pSceneEntity, 0);
        v9 = pActor2c->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    v10 = v39;
    v11 = &v24;
    do
    {
      *v11 = 0;
      *(v11 + 4) = 0;
      v11 += 2;
      *(v11 - 3) = 0;
    }
    while ( v11 != v39 );
    if ( (v26 & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v24, v39);
      v26 &= ~1u;
    }
    v25 = 30;
    v24 = pszShotType;
    if ( (v29 & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v27, v10);
      v29 &= ~1u;
    }
    v27 = v9;
    v28 = 31;
    if ( (v32 & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v30, v10);
      v32 &= ~1u;
    }
    v30 = v8;
    v31 = 31;
    if ( (v35 & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v33, v10);
      v35 &= ~1u;
    }
    v33 = m_hScope;
    v34 = 31;
    if ( (v38 & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v36, v10);
      v38 &= ~1u;
    }
    v36 = 0;
    v37 = 1;
    v12 = this->m_hPrivateScope.m_hScope;
    *&v36 = duration;
    v13 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "ScriptStartCameraShot", v12, 1);
    v14 = v13;
    if ( v13 != 0 )
    {
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v13, &v24, 5, 0, 0, 1);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v14);
    }
    v15 = v39;
    do
    {
      v15 -= 2;
      if ( (*(v15 + 10) & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v15);
        *(v15 + 5) &= ~1u;
      }
      *v15 = 0;
      *(v15 + 4) = 0;
    }
    while ( v15 != &v24 );
  }
}


// CTriggerCamera::Move  (line 4218, @0x00000000023d9520, libserver.so)  // inlines: Approach, CVariantBase, Free, GetAbsVelocity, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToBasePlayer, UTIL_Approach, VectorAdd, VectorMultiply, VectorSubtract, curtime, operator CEntityInstance*, operator bool, operator*, operator+, operator-, operator=, ~CVariantBase
// calls: CBaseEntity::SetAbsVelocity, CBaseEntity::CalcAbsoluteVelocity, CEntityInstance::AcceptInput, CBaseEntity::GetNextTarget, CBaseEntity::GetLocalOrigin, VectorNormalize, CTriggerCamera::Disable, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CTriggerCamera::Enable, CTriggerCamera::FollowTarget
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerCamera::Move(CTriggerCamera *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBaseEntity *m_pPath; // rdi
  CGlobalVars *v6; // r12
  float v7; // xmm0_4
  float m_flStopTime; // xmm1_4
  CGlobalVars *v9; // rax
  float m_flCurrentTime; // xmm0_4
  float m_targetSpeed; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  void (__fastcall *v25)(__int64); // rax
  CBaseEntity *NextTarget; // rax
  float m_flSpeed; // xmm0_4
  const Vector *LocalOrigin; // r12
  const Vector *v29; // rax
  vec_t v30; // xmm0_4
  vec_t v31; // xmm2_4
  float v32; // xmm0_4
  CGlobalVars *v33; // r12
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  CEntityInstance *m_pInstance; // r12
  CScriptComponent::Storage_t m_CScriptComponent; // rax
  float v37; // [rsp+8h] [rbp-38h]
  float fractionb; // [rsp+Ch] [rbp-34h]
  float fractiona; // [rsp+Ch] [rbp-34h]
  float fraction; // [rsp+Ch] [rbp-34h]
  variant_t emptyVariant; // [rsp+10h] [rbp-30h] BYREF

  if ( (this->m_spawnflags.m_Value & 0x40) != 0 )
  {
    m_Index = this->m_hPlayer.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hPlayer.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v4->m_pInstance) != 0 )
          {
            m_CScriptComponent = m_pInstance[53].m_CScriptComponent;
            if ( this->m_nPlayerButtons != m_CScriptComponent && m_CScriptComponent != 0 )
            {
              CTriggerCamera::Disable(this);
              return;
            }
            this->m_nPlayerButtons = m_CScriptComponent;
          }
        }
      }
    }
  }
  m_pPath = this->m_pPath;
  if ( m_pPath != 0 )
  {
    v6 = gpGlobals;
    v7 = this->m_moveDistance - (this->m_flSpeed * gpGlobals->frametime);
    this->m_moveDistance = v7;
    if ( v7 <= 0.0 )
    {
      emptyVariant.m_type = 0;
      emptyVariant.m_uint64 = 0;
      emptyVariant.m_flags = 0;
      CEntityInstance::AcceptInput(m_pPath, "InPass", this, this, &emptyVariant, 0);
      NextTarget = CBaseEntity::GetNextTarget(this->m_pPath);
      this->m_pPath = NextTarget;
      if ( NextTarget != 0 )
      {
        m_flSpeed = NextTarget->m_flSpeed;
        if ( m_flSpeed != 0.0 )
          this->m_targetSpeed = m_flSpeed;
        LocalOrigin = CBaseEntity::GetLocalOrigin(this);
        v29 = CBaseEntity::GetLocalOrigin(this->m_pPath);
        v30 = v29->z - LocalOrigin->z;
        v31 = v29->x - LocalOrigin->x;
        this->m_vecMoveDir.y = v29->y - LocalOrigin->y;
        this->m_vecMoveDir.z = v30;
        this->m_vecMoveDir.x = v31;
        v32 = VectorNormalize(&this->m_vecMoveDir);
        v33 = gpGlobals;
        this->m_moveDistance = v32;
        if ( v33 != 0 )
        {
          if ( !v33->m_bEnableAssertions && !v33->m_bInSimulation )
          {
            m_pfnWarningFunc = v33->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              m_pfnWarningFunc(1);
          }
          fraction = v33->m_flCurrentTime;
        }
        else
        {
          fraction = 0.0;
        }
        this->m_flStopTime = (*(this->m_pPath->_vptr_IHandleEntity + 95))(this->m_pPath) + fraction;
      }
      else
      {
        CBaseEntity::SetAbsVelocity(this, &vec3_origin);
      }
      if ( (emptyVariant.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
      v6 = gpGlobals;
    }
    m_flStopTime = this->m_flStopTime;
    if ( v6 != 0 )
    {
      v9 = v6;
      if ( !v6->m_bEnableAssertions && !v6->m_bInSimulation )
      {
        v25 = v6->m_pfnWarningFunc;
        if ( v25 != 0 )
        {
          fractionb = this->m_flStopTime;
          v25(1);
          v9 = gpGlobals;
          m_flStopTime = fractionb;
        }
        else
        {
          v9 = v6;
        }
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    else
    {
      v9 = 0;
      m_flCurrentTime = 0.0;
    }
    if ( m_flStopTime > m_flCurrentTime )
    {
      v23 = this->m_flSpeed;
      v24 = this->m_deceleration * v9->frametime;
      if ( (0.0 - v23) <= v24 )
      {
        if ( -v24 <= (0.0 - v23) )
          m_targetSpeed = 0.0;
        else
          m_targetSpeed = v23 - v24;
      }
      else
      {
        m_targetSpeed = v23 + v24;
      }
    }
    else
    {
      m_targetSpeed = this->m_targetSpeed;
      v12 = this->m_flSpeed;
      v13 = this->m_acceleration * v9->frametime;
      if ( (m_targetSpeed - v12) <= v13 )
      {
        if ( -v13 > (m_targetSpeed - v12) )
          m_targetSpeed = v12 - v13;
      }
      else
      {
        m_targetSpeed = v13 + v12;
      }
    }
    this->m_flSpeed = m_targetSpeed;
    v14 = v9->frametime + v9->frametime;
    v15 = 1.0 - v14;
    if ( (this->m_iEFlags & 0x1000) != 0 )
    {
      v37 = 1.0 - v14;
      fractiona = v9->frametime + v9->frametime;
      CBaseEntity::CalcAbsoluteVelocity(this);
      v15 = v37;
      v14 = fractiona;
    }
    v16 = this->m_flSpeed;
    v17 = this->m_vecMoveDir.y * v16;
    v18 = (this->m_vecMoveDir.z * v16) * v14;
    v19 = (v16 * this->m_vecMoveDir.x) * v14;
    v20 = (this->m_vecAbsVelocity.m_Value.y * v15) + (v17 * v14);
    v21 = this->m_vecAbsVelocity.m_Value.z * v15;
    v22 = v15 * this->m_vecAbsVelocity.m_Value.x;
    *(&emptyVariant.m_pszString + 1) = v20;
    *&emptyVariant.m_type = v21 + v18;
    emptyVariant.m_float = v22 + v19;
    CBaseEntity::SetAbsVelocity(this, &emptyVariant);
  }
}


// CTriggerProximity::~CTriggerProximity  (line 4317, @0x00000000023f6150, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerProximity::~CTriggerProximity(CTriggerProximity *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerProximity::~CTriggerProximity  (line 4317, @0x00000000023f6980, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerProximity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerProximity::~CTriggerProximity(CTriggerProximity *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerProximity::GetEntityClass  (line 4319, @0x00000000023e6850, libserver.so)
CEntityClass *__cdecl CTriggerProximity::GetEntityClass()
{
  return g_pEntityCTriggerProximityClass;
}


// CTriggerProximity::Schema_DynamicBinding  (line 4319, @0x00000000023e6860, libserver.so)
// globals: CTriggerProximity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerProximity::Schema_DynamicBinding(const CTriggerProximity *const this)
{
  return CTriggerProximity::s_pSchemaBinding;
}


// CTriggerProximity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 4319, @0x00000000023e6870, libserver.so)
// globals: CTriggerProximity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerProximity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerProximity::CEntityInstanceEntityClass *const this)
{
  return CTriggerProximity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerProximity::CEntityInstanceEntityClass::DestructInstance  (line 4319, @0x00000000023e6880, libserver.so)  // inlines: Destruct<CTriggerProximity>
void __fastcall CTriggerProximity::CEntityInstanceEntityClass::DestructInstance(
        CTriggerProximity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerProximity::CEntityInstanceEntityClass::FreeInstance  (line 4319, @0x00000000023e68a0, libserver.so)
void __fastcall CTriggerProximity::CEntityInstanceEntityClass::FreeInstance(
        CTriggerProximity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerProximity::CEntityInstanceEntityClass::CanAllocate  (line 4319, @0x00000000023e68c0, libserver.so)
bool __fastcall CTriggerProximity::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerProximity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerProximity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 4319, @0x00000000023e68d0, libserver.so)
// globals: CTriggerProximity::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerProximity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerProximity::CEntityInstanceEntityClass *const this)
{
  return CTriggerProximity::s_pSchemaBinding;
}


// CTriggerProximity::CEntityInstanceEntityClass::AllocateInstance  (line 4319, @0x00000000023e86f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerProximity::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerProximity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1528);
  memset(v1, 0, 0x5F8u);
  return v1;
}


// CTriggerProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4319, @0x00000000023ea470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerProximity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4319, @0x00000000023ea490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerProximity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerProximity::CEntityInstanceEntityClass::ConstructInstance  (line 4319, @0x00000000023f1670, libserver.so)  // inlines: CEntityHandle, CEntityOutputTemplate, CHandle, CTriggerProximity, CUtlSymbolLarge, Construct<CTriggerProximity>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerProximity::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerProximity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 369) = -1;
    *p = &off_40C8C30;
    *(p + 185) = 0;
    *(p + 187) = off_3FD2290;
  }
  return p;
}


// CTriggerProximity::GetEntityClassInternal  (line 4319, @0x00000000023f3070, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_proximity", "CTriggerProximity"
// globals: `guard variable for'CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass, CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass, __dso_handle, CTriggerProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerProximity::GetEntityClassInfo(void)::g_EntityCTriggerProximityClassInfo, CTriggerProximity::GetEntityClassInfo(void)::g_EntityCTriggerProximityClassInfo
CEntityClass *__cdecl CTriggerProximity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass);
    CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass._vptr_CEntityClass = off_40C8490;
    __cxa_guard_release(&`guard variable for'CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass);
    __cxa_atexit(
      CTriggerProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerProximityClass != 0 )
    return &CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass;
  if ( `guard variable for'CTriggerProximity::GetEntityClassInfo(void)::g_EntityCTriggerProximityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerProximity::GetEntityClassInfo(void)::g_EntityCTriggerProximityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerProximity::GetEntityClassInfo(void)::g_EntityCTriggerProximityClassInfo,
      "CTriggerProximity",
      "trigger_proximity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerProximity::GetEntityClassInfo(void)::g_EntityCTriggerProximityClassInfo);
  }
  CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass.m_pClassInfo = &CTriggerProximity::GetEntityClassInfo(void)::g_EntityCTriggerProximityClassInfo;
  CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass.m_pBaseClassInfo = CTriggerProximity::GetEntityClassInfo(void)::g_EntityCTriggerProximityClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerProximityClass = &CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass;
  CTriggerProximity::GetEntityClassInfo(void)::g_EntityCTriggerProximityClassInfo.m_pClass = &CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass;
  CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerProximityClass->m_pComponentOverrides = 0;
  return &CTriggerProximity::GetEntityClassInternal(void)::g_EntityCTriggerProximityClass;
}


// CTriggerProximity::GetDataDescMap  (line 4345, @0x00000000023bb470, libserver.so)
// globals: CTriggerProximity::m_DataMap
datamap_t *__fastcall CTriggerProximity::GetDataDescMap(CTriggerProximity *const this)
{
  return &CTriggerProximity::m_DataMap;
}


// CTriggerProximity::AddDatadescMetadataKeys  (line 4345, @0x00000000023d2280, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerProximity::GetEntityClass(void)
void __fastcall CTriggerProximity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerProximity::GetEntityClass);
}


// CTriggerProximity::GetBaseMap  (line 4345, @0x00000000023d22a0, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerProximity::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerProximity>  (line 4345, @0x00000000023de650, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerProximity"
// globals: `guard variable for'DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder, `guard variable for'DataMapInit<CTriggerProximity>(CTriggerProximity *)::dataDesc, CBaseTrigger::m_DataMap, CTriggerProximity::GetEntityClass(void), CTriggerProximity::m_DataMap, DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerProximity>(CTriggerProximity *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_pszBase = "CTriggerProximity";
    DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder,
      &_dso_handle);
  }
  CTriggerProximity::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerProximity>(CTriggerProximity *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerProximity>(CTriggerProximity *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v2, DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_pszBase), "MeasureThink");
    m_Size = DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTriggerProximity>(CTriggerProximity *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTriggerProximity>(CTriggerProximity *)::dataDesc[1].fieldName = v2;
    DataMapInit<CTriggerProximity>(CTriggerProximity *)::dataDesc[6].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerProximity>(CTriggerProximity *)::dataDesc);
  }
  CTriggerProximity::m_DataMap.dataNumFields = 6;
  CTriggerProximity::m_DataMap.dataDesc = &DataMapInit<CTriggerProximity>(CTriggerProximity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerProximity::m_DataMap, CTriggerProximity::GetEntityClass);
  return &CTriggerProximity::m_DataMap;
}


// CLogicProximity::Schema_DynamicBinding  (line 4363, @0x00000000023e68e0, libserver.so)
// globals: CLogicProximity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicProximity::Schema_DynamicBinding(const CLogicProximity *const this)
{
  return CLogicProximity::s_pSchemaBinding;
}


// CLogicProximity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 4363, @0x00000000023e68f0, libserver.so)
// globals: CLogicProximity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicProximity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicProximity::CEntityInstanceEntityClass *const this)
{
  return CLogicProximity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicProximity::CEntityInstanceEntityClass::DestructInstance  (line 4363, @0x00000000023e6900, libserver.so)  // inlines: Destruct<CLogicProximity>
void __fastcall CLogicProximity::CEntityInstanceEntityClass::DestructInstance(
        CLogicProximity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicProximity::CEntityInstanceEntityClass::FreeInstance  (line 4363, @0x00000000023e6920, libserver.so)
void __fastcall CLogicProximity::CEntityInstanceEntityClass::FreeInstance(
        CLogicProximity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicProximity::CEntityInstanceEntityClass::CanAllocate  (line 4363, @0x00000000023e6940, libserver.so)
bool __fastcall CLogicProximity::CEntityInstanceEntityClass::CanAllocate(
        const CLogicProximity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicProximity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 4363, @0x00000000023e6950, libserver.so)
// globals: CLogicProximity::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicProximity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicProximity::CEntityInstanceEntityClass *const this)
{
  return CLogicProximity::s_pSchemaBinding;
}


// CLogicProximity::CEntityInstanceEntityClass::AllocateInstance  (line 4363, @0x00000000023e8730, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicProximity::CEntityInstanceEntityClass::AllocateInstance(
        CLogicProximity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CLogicProximity::CEntityInstanceEntityClass::ConstructInstance  (line 4363, @0x00000000023e8aa0, libserver.so)  // inlines: CLogicProximity, CPointEntity, Construct<CLogicProximity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicProximity::CEntityInstanceEntityClass::ConstructInstance(
        CLogicProximity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40C8590;
  }
  return p;
}


// CLogicProximity::~CLogicProximity  (line 4363, @0x00000000023e8fd0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicProximity::~CLogicProximity(CLogicProximity *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicProximity::~CLogicProximity  (line 4363, @0x00000000023e8ff0, libserver.so)  // inlines: ~CLogicProximity, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicProximity::~CLogicProximity(CLogicProximity *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4363, @0x00000000023e9f70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicProximity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4363, @0x00000000023e9f90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicProximity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicProximity::GetEntityClassInternal  (line 4363, @0x00000000023f31c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "logic_proximity", "CLogicProximity"
// globals: `guard variable for'CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass, CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass, __dso_handle, CLogicProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicProximity::GetEntityClassInfo(void)::g_EntityCLogicProximityClassInfo, CLogicProximity::GetEntityClassInfo(void)::g_EntityCLogicProximityClassInfo
CEntityClass *__cdecl CLogicProximity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass);
    CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass._vptr_CEntityClass = off_40C8510;
    __cxa_guard_release(&`guard variable for'CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass);
    __cxa_atexit(
      CLogicProximity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicProximityClass != 0 )
    return &CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass;
  if ( `guard variable for'CLogicProximity::GetEntityClassInfo(void)::g_EntityCLogicProximityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicProximity::GetEntityClassInfo(void)::g_EntityCLogicProximityClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicProximity::GetEntityClassInfo(void)::g_EntityCLogicProximityClassInfo,
      "CLogicProximity",
      "logic_proximity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicProximity::GetEntityClassInfo(void)::g_EntityCLogicProximityClassInfo);
  }
  CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass.m_pClassInfo = &CLogicProximity::GetEntityClassInfo(void)::g_EntityCLogicProximityClassInfo;
  CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass.m_pBaseClassInfo = CLogicProximity::GetEntityClassInfo(void)::g_EntityCLogicProximityClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicProximityClass = &CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass;
  CLogicProximity::GetEntityClassInfo(void)::g_EntityCLogicProximityClassInfo.m_pClass = &CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass;
  CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicProximityClass->m_pComponentOverrides = 0;
  return &CLogicProximity::GetEntityClassInternal(void)::g_EntityCLogicProximityClass;
}


// CTriggerProximity::Spawn  (line 4369, @0x00000000023d6cb0, libserver.so)
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
void __fastcall CTriggerProximity::Spawn(CTriggerProximity *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseTrigger::Spawn(this, pKeyValues);
  if ( this->m_fRadius == 0.0 )
    this->m_fRadius = 32.0;
  CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CTriggerProximity::Activate  (line 4387, @0x00000000023c0ee0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator=, operator==<CBaseEntity>
// calls: CBaseTrigger::Activate, CGameEntitySystem::FindEntityByName, Warning
// strings: "TriggerProximity - Missing measure target or measure target with no origin!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerProximity::Activate(CTriggerProximity *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  CConcreteEntityList *v4; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rdx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseTrigger::Activate(this, activateType);
  iszName.u.m_Id = this->m_iszMeasureTarget.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( EntityByName == 0 || (m_pEntity = EntityByName->m_pEntity) == 0 )
  {
    this->m_hMeasureTarget.m_Index = -1;
LABEL_9:
    Warning("TriggerProximity - Missing measure target or measure target with no origin!\n", v4);
    return;
  }
  v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v7 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v4 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_hMeasureTarget.m_Index) = v7 | this->m_hMeasureTarget.m_Index & 0x8000;
  v8 = (v6 << 15) | this->m_hMeasureTarget.m_Index & 0x7FFF;
  this->m_hMeasureTarget.m_Index = v8;
  if ( v8 + 2 <= 1 )
    goto LABEL_9;
  v9 = v4->m_pIdentityChunks[(LOWORD(this->m_hMeasureTarget.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    goto LABEL_9;
  v10 = this->m_hMeasureTarget.m_Index & 0x1FF;
  v4 = (8 * v10);
  v11 = &v9[v10];
  if ( v11 == 0 || v8 != v11->m_EHandle.m_Index || v11->m_pInstance == 0 )
    goto LABEL_9;
}


// CTriggerProximity::StartTouch  (line 4407, @0x00000000023e1ed0, libserver.so)  // inlines: curtime
// calls: CBaseTrigger::StartTouch, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CTriggerProximity::MeasureThink(void)
void __fastcall CTriggerProximity::StartTouch(CTriggerProximity *const this, CBaseEntity *pOther)
{
  double v4; // xmm1_8
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseTrigger::StartTouch(this, pOther);
  if ( (*(this->_vptr_IHandleEntity + 223))(this, pOther) != 0 )
  {
    ++this->m_nTouchers;
    CBaseEntity::ThinkSet(this, CTriggerProximity::MeasureThink, 0.0, 0, 0);
    v5 = 0.0;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v5 = LODWORD(v6->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v5, v4, 0);
  }
}


// CTriggerProximity::EndTouch  (line 4426, @0x00000000023dd6c0, libserver.so)
// calls: CBaseTrigger::EndTouch, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CTriggerProximity::EndTouch(CTriggerProximity *const this, CBaseEntity *pOther)
{
  double v5; // xmm1_8

  CBaseTrigger::EndTouch(this, pOther);
  if ( (*(this->_vptr_IHandleEntity + 223))(this, pOther) != 0 && this->m_nTouchers-- == 1 )
  {
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v5, 0);
  }
}


// CTriggerProximity::MeasureThink  (line 4448, @0x00000000023d8d20, libserver.so)  // inlines: CVariantBase, Element, FastSqrt, FireOutput<float>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, Set, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator CEntityInstance*, operator-, operator->, operator==<CBaseEntity>, operator[], ~CVariantBase
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::GetLocalOrigin, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerProximity::MeasureThink(CTriggerProximity *const this)
{
  double v1; // xmm1_8
  uint32 m_Index; // eax
  CConcreteEntityList *v4; // rsi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  double v7; // xmm1_8
  float m_fRadius; // xmm0_4
  __int64 v9; // r12
  CEntityInstance *v10; // r13
  CHandle<CBaseEntity> *v11; // rdx
  uint32 v12; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  __int64 v15; // rcx
  CEntityIdentity *v16; // rdx
  const CBaseEntity *m_pInstance; // r14
  uint32 v18; // eax
  const CBaseEntity *v19; // rdi
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  const Vector *LocalOrigin; // r15
  const Vector *v23; // rax
  float v24; // xmm0_4
  double v25; // xmm0_8
  CGlobalVars *v26; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float fMinDistance; // [rsp+Ch] [rbp-44h]
  CVariant value; // [rsp+10h] [rbp-40h] BYREF

  m_Index = this->m_hMeasureTarget.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1
    && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hMeasureTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v6 = &v5[this->m_hMeasureTarget.m_Index & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && v6->m_pInstance != 0 )
  {
    m_fRadius = this->m_fRadius;
    v9 = 0;
    v10 = 0;
    fMinDistance = m_fRadius + 100.0;
    if ( this->m_hTouchingEntities.m_Size > 0 )
    {
      while ( 1 )
      {
        v11 = &this->m_hTouchingEntities.m_Memory.m_pMemory[v9];
        v12 = v11->m_Index;
        if ( v11->m_Index + 2 > 1 )
        {
          v13 = v11->m_Index;
          v14 = v4->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = v13 & 0x1FF;
            v4 = (8 * v15);
            v16 = &v14[v15];
            if ( v16 != 0 && v12 == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0 && (*(this->_vptr_IHandleEntity + 223))(this, v16->m_pInstance) != 0 )
              {
                v18 = this->m_hMeasureTarget.m_Index;
                v19 = 0;
                if ( v18 + 2 > 1 )
                {
                  v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hMeasureTarget.m_Index) >> 9)
                                                                       & 0x3F];
                  if ( v20 != 0 )
                  {
                    v21 = &v20[this->m_hMeasureTarget.m_Index & 0x1FF];
                    if ( v21 != 0 && v18 == v21->m_EHandle.m_Index )
                      v19 = v21->m_pInstance;
                  }
                }
                LocalOrigin = CBaseEntity::GetLocalOrigin(v19);
                v23 = CBaseEntity::GetLocalOrigin(m_pInstance);
                *&v1 = LODWORD(v23->z);
                *&v1 = (*&v1 - LocalOrigin->z) * (*&v1 - LocalOrigin->z);
                v24 = fsqrt(
                        (((v23->x - LocalOrigin->x) * (v23->x - LocalOrigin->x))
                       + ((v23->y - LocalOrigin->y) * (v23->y - LocalOrigin->y)))
                      + *&v1);
                if ( fMinDistance > v24 )
                {
                  v10 = &m_pInstance->CGameEntity;
                  fMinDistance = v24;
                }
              }
            }
          }
        }
        if ( this->m_hTouchingEntities.m_Size <= ++v9 )
          break;
        v4 = CEntityHandle::gm_pEntityList;
      }
      m_fRadius = this->m_fRadius;
    }
    if ( m_fRadius >= fMinDistance && (fMinDistance / m_fRadius) != this->m_NearestEntityDistance.m_Value )
    {
      this->m_NearestEntityDistance.m_Value = fMinDistance / m_fRadius;
      value.m_float = fMinDistance / m_fRadius;
      value.m_type = 1;
      value.m_flags = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_NearestEntityDistance, v10, this, &value, 0.0);
      CVariantBase<CVariantDefaultAllocator>::Free(&value);
    }
    v25 = 0.0;
    v26 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v4, 0.0);
      }
      *&v25 = LODWORD(v26->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v25, v1, 0);
  }
  else
  {
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v7, 0);
  }
}


// CTriggerImpact::~CTriggerImpact  (line 4505, @0x00000000023f6460, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerMultiple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerImpact::~CTriggerImpact(CTriggerImpact *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerImpact::~CTriggerImpact  (line 4505, @0x00000000023f6d80, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerImpact, ~CTriggerMultiple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerImpact::~CTriggerImpact(CTriggerImpact *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerImpact::GetEntityClass  (line 4507, @0x00000000023e6960, libserver.so)
CEntityClass *__cdecl CTriggerImpact::GetEntityClass()
{
  return g_pEntityCTriggerImpactClass;
}


// CTriggerImpact::Schema_DynamicBinding  (line 4507, @0x00000000023e6970, libserver.so)
// globals: CTriggerImpact::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerImpact::Schema_DynamicBinding(const CTriggerImpact *const this)
{
  return CTriggerImpact::s_pSchemaBinding;
}


// CTriggerImpact::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 4507, @0x00000000023e6980, libserver.so)
// globals: CTriggerImpact::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerImpact::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerImpact::CEntityInstanceEntityClass *const this)
{
  return CTriggerImpact::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerImpact::CEntityInstanceEntityClass::DestructInstance  (line 4507, @0x00000000023e6990, libserver.so)  // inlines: Destruct<CTriggerImpact>
void __fastcall CTriggerImpact::CEntityInstanceEntityClass::DestructInstance(
        CTriggerImpact::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerImpact::CEntityInstanceEntityClass::FreeInstance  (line 4507, @0x00000000023e69b0, libserver.so)
void __fastcall CTriggerImpact::CEntityInstanceEntityClass::FreeInstance(
        CTriggerImpact::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerImpact::CEntityInstanceEntityClass::CanAllocate  (line 4507, @0x00000000023e69d0, libserver.so)
bool __fastcall CTriggerImpact::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerImpact::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerImpact::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 4507, @0x00000000023e69e0, libserver.so)
// globals: CTriggerImpact::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerImpact::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerImpact::CEntityInstanceEntityClass *const this)
{
  return CTriggerImpact::s_pSchemaBinding;
}


// CTriggerImpact::CEntityInstanceEntityClass::AllocateInstance  (line 4507, @0x00000000023e8770, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerImpact::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerImpact::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1560);
  memset(v1, 0, 0x618u);
  return v1;
}


// CTriggerImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4507, @0x00000000023ea150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerImpact::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4507, @0x00000000023ea170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerImpact::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerImpact::CEntityInstanceEntityClass::ConstructInstance  (line 4507, @0x00000000023f1490, libserver.so)  // inlines: CEntityIOOutput, CEntityOutputTemplate, CTriggerImpact, CTriggerMultiple, Construct<CTriggerImpact>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerImpact::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerImpact::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 185) = off_3F7C190;
    *p = &off_40C93D0;
    *(p + 190) = off_405E9D0;
  }
  return p;
}


// CTriggerImpact::GetEntityClassInternal  (line 4507, @0x00000000023f3310, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CTriggerMultiple::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_impact", "CTriggerImpact"
// globals: `guard variable for'CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass, CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass, __dso_handle, CTriggerImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerImpact::GetEntityClassInfo(void)::g_EntityCTriggerImpactClassInfo, CTriggerImpact::GetEntityClassInfo(void)::g_EntityCTriggerImpactClassInfo
CEntityClass *__cdecl CTriggerImpact::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass);
    CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass._vptr_CEntityClass = off_40C9350;
    __cxa_guard_release(&`guard variable for'CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass);
    __cxa_atexit(
      CTriggerImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerImpactClass != 0 )
    return &CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass;
  if ( `guard variable for'CTriggerImpact::GetEntityClassInfo(void)::g_EntityCTriggerImpactClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerImpact::GetEntityClassInfo(void)::g_EntityCTriggerImpactClassInfo) != 0 )
  {
    EntityClassInfo = CTriggerMultiple::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerImpact::GetEntityClassInfo(void)::g_EntityCTriggerImpactClassInfo,
      "CTriggerImpact",
      "trigger_impact",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerImpact::GetEntityClassInfo(void)::g_EntityCTriggerImpactClassInfo);
  }
  CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass.m_pClassInfo = &CTriggerImpact::GetEntityClassInfo(void)::g_EntityCTriggerImpactClassInfo;
  CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass.m_pBaseClassInfo = CTriggerImpact::GetEntityClassInfo(void)::g_EntityCTriggerImpactClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerImpactClass = &CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass;
  CTriggerImpact::GetEntityClassInfo(void)::g_EntityCTriggerImpactClassInfo.m_pClass = &CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass;
  CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerImpactClass->m_pComponentOverrides = 0;
  return &CTriggerImpact::GetEntityClassInternal(void)::g_EntityCTriggerImpactClass;
}


// CTriggerImpact::GetDataDescMap  (line 4530, @0x00000000023bb480, libserver.so)
// globals: CTriggerImpact::m_DataMap
datamap_t *__fastcall CTriggerImpact::GetDataDescMap(CTriggerImpact *const this)
{
  return &CTriggerImpact::m_DataMap;
}


// CTriggerImpact::AddDatadescMetadataKeys  (line 4530, @0x00000000023d22b0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerImpact::GetEntityClass(void)
void __fastcall CTriggerImpact::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerImpact::GetEntityClass);
}


// CTriggerImpact::GetBaseMap  (line 4530, @0x00000000023d22d0, libserver.so)
// globals: CTriggerMultiple::m_DataMap
datamap_t *__cdecl CTriggerImpact::GetBaseMap()
{
  return &CTriggerMultiple::m_DataMap;
}


// DataMapInit<CTriggerImpact>  (line 4530, @0x00000000023de0f0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerImpact"
// globals: `guard variable for'DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder, `guard variable for'DataMapInit<CTriggerImpact>(CTriggerImpact *)::dataDesc, CTriggerMultiple::m_DataMap, CTriggerImpact::GetEntityClass(void), CTriggerImpact::m_DataMap, DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerImpact>(CTriggerImpact *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_pszBase = "CTriggerImpact";
    DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder,
      &_dso_handle);
  }
  CTriggerImpact::m_DataMap.baseMap = &CTriggerMultiple::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerImpact>(CTriggerImpact *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerImpact>(CTriggerImpact *)::dataDesc) != 0 )
  {
    DataMapInit<CTriggerImpact>(CTriggerImpact *)::dataDesc[6].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_nLenBase + 8);
    *stpcpy(v2, DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_pszBase) = 0x656C6261736944LL;
    m_Size = DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTriggerImpact>(CTriggerImpact *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTriggerImpact>(CTriggerImpact *)::dataDesc[7].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerImpact>(CTriggerImpact *)::dataDesc);
  }
  CTriggerImpact::m_DataMap.dataNumFields = 7;
  CTriggerImpact::m_DataMap.dataDesc = &DataMapInit<CTriggerImpact>(CTriggerImpact *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerImpact::m_DataMap, CTriggerImpact::GetEntityClass);
  return &CTriggerImpact::m_DataMap;
}


// CTriggerImpact::Spawn  (line 4553, @0x00000000023d6a10, libserver.so)
// calls: CTriggerMultiple::Spawn
void __fastcall CTriggerImpact::Spawn(CTriggerImpact *const this, const CEntityKeyValues *pKeyValues)
{
  float v2; // xmm0_4
  float m_flNoise; // xmm2_4
  float v4; // xmm1_4
  float m_flViewkick; // xmm1_4

  v2 = 1.0;
  m_flNoise = this->m_flNoise;
  v4 = 1.0;
  if ( m_flNoise <= 1.0 )
    v4 = fmaxf(0.0, m_flNoise);
  this->m_flNoise = v4;
  m_flViewkick = this->m_flViewkick;
  if ( m_flViewkick <= 1.0 )
    v2 = fmaxf(0.0, m_flViewkick);
  this->m_flViewkick = v2;
  this->m_bDisabled = 1;
  CTriggerMultiple::Spawn(this, pKeyValues);
}


// CTriggerImpact::InputImpact  (line 4568, @0x00000000023d8bd0, libserver.so)  // inlines: CVariantBase, CopyData<Vector>, FireOutput<Vector>, Free, Set, VectorMultiply, curtime, operator*, operator=, ~CVariantBase
// calls: CBaseEntity::GetLocalAngles, AngleVectors, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CTriggerImpact::InputImpact(CTriggerImpact *const this, inputdata_t *const inputdata)
{
  const QAngle *LocalAngles; // rax
  float m_flMagnitude; // xmm0_4
  CBaseEntity *pActivator; // rsi
  vec_t v7; // xmm2_4
  CBaseEntity *pCaller; // rdx
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  double v11; // xmm1_8
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v14; // xmm0_8
  Vector vDir; // [rsp+0h] [rbp-30h] BYREF
  CVariant value; // [rsp+10h] [rbp-20h] BYREF

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  AngleVectors(LocalAngles, &vDir, 0, 0);
  m_flMagnitude = this->m_flMagnitude;
  value.m_flags = 0;
  pActivator = inputdata->pActivator;
  value.m_type = 3;
  v7 = vDir.y * m_flMagnitude;
  value.m_uint64 = &this->m_pOutputForce.m_Value;
  pCaller = inputdata->pCaller;
  v9 = vDir.z * m_flMagnitude;
  v10 = m_flMagnitude * vDir.x;
  this->m_pOutputForce.m_Value.y = v7;
  this->m_pOutputForce.m_Value.z = v9;
  this->m_pOutputForce.m_Value.x = v10;
  CEntityIOOutput::FireOutputInternal(&this->m_pOutputForce, pActivator, pCaller, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  (*(this->_vptr_IHandleEntity + 214))(this);
  v12 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v14) = 0;
    *&v14 = v12->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v14 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v14, v11, 0);
  CBaseEntity::ThinkSet(this, 0x6B9uLL, 0.0, 0, 0);
}


// CTriggerImpact::StartTouch  (line 4585, @0x00000000023bce20, libserver.so)  // inlines: QAngle, RandomVector, VectorMultiply, operator*, operator+=
// calls: CBaseEntity::VPhysicsGetObject, CBaseEntity::GetLocalAngles, AngleVectors, Vector::Random, CBaseEntity::ViewPunch
void __fastcall CTriggerImpact::StartTouch(CTriggerImpact *const this, CBaseEntity *pOther)
{
  const QAngle *LocalAngles; // rax
  vec_t v5; // xmm2_4
  IPhysicsObject *Object; // rax
  float m_flMagnitude; // xmm0_4
  void (__fastcall *v8)(IPhysicsObject *, Vector *); // rdx
  const QAngle *v9; // rax
  float m_flViewkick; // xmm0_4
  float v11; // xmm0_4
  Vector vDir; // [rsp+0h] [rbp-40h] BYREF
  Vector v13; // [rsp+10h] [rbp-30h] BYREF

  if ( pOther != 0 && CBaseEntity::VPhysicsGetObject(pOther) != 0 )
  {
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    AngleVectors(LocalAngles, &vDir, 0, 0);
    Vector::Random(&v13, this->m_flNoise, v5);
    vDir.x = vDir.x + v13.x;
    vDir.y = v13.y + vDir.y;
    vDir.z = v13.z + vDir.z;
    Object = CBaseEntity::VPhysicsGetObject(pOther);
    m_flMagnitude = this->m_flMagnitude;
    v8 = *(*Object + 1776LL);
    v13.y = vDir.y * m_flMagnitude;
    v13.z = vDir.z * m_flMagnitude;
    v13.x = m_flMagnitude * vDir.x;
    v8(Object, &v13);
  }
  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 && fabs(this->m_flMagnitude) > 0.0 )
  {
    v9 = CBaseEntity::GetLocalAngles(this);
    AngleVectors(v9, &vDir, 0, 0);
    m_flViewkick = this->m_flViewkick;
    v13.y = 0.0;
    v11 = (-m_flViewkick * this->m_flMagnitude) * 0.1;
    v13.z = vDir.x * v11;
    v13.x = v11 * vDir.y;
    CBaseEntity::ViewPunch(pOther, &v13);
  }
}


// CTriggerImpact::InputSetMagnitude  (line 4611, @0x00000000023bb490, libserver.so)  // inlines: Float, operator float
void __fastcall CTriggerImpact::InputSetMagnitude(CTriggerImpact *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flMagnitude = m_float64;
}


// CTriggerImpact::DrawDebugTextOverlays  (line 4621, @0x00000000023bc8d0, libserver.so)
// calls: CBaseTrigger::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Magnitude: %3.2f"
int __fastcall CTriggerImpact::DrawDebugTextOverlays(
        CTriggerImpact *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v4; // r13
  char v5; // bl
  int v6; // r12d
  char tempstr[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v9; // [rsp+118h] [rbp-28h]

  v4 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  v6 = CBaseTrigger::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v4 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 255, "Magnitude: %3.2f", this->m_flMagnitude);
    CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CTriggerPlayerMovement::~CTriggerPlayerMovement  (line 4638, @0x00000000023f61c0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerPlayerMovement::~CTriggerPlayerMovement(CTriggerPlayerMovement *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerPlayerMovement::~CTriggerPlayerMovement  (line 4638, @0x00000000023f6a00, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerPlayerMovement, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerPlayerMovement::~CTriggerPlayerMovement(CTriggerPlayerMovement *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerPlayerMovement::GetEntityClass  (line 4640, @0x00000000023e69f0, libserver.so)
CEntityClass *__cdecl CTriggerPlayerMovement::GetEntityClass()
{
  return g_pEntityCTriggerPlayerMovementClass;
}


// CTriggerPlayerMovement::Schema_DynamicBinding  (line 4640, @0x00000000023e6a00, libserver.so)
// globals: CTriggerPlayerMovement::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerPlayerMovement::Schema_DynamicBinding(
        const CTriggerPlayerMovement *const this)
{
  return CTriggerPlayerMovement::s_pSchemaBinding;
}


// CTriggerPlayerMovement::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 4640, @0x00000000023e6a10, libserver.so)
// globals: CTriggerPlayerMovement::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerPlayerMovement::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerPlayerMovement::CEntityInstanceEntityClass *const this)
{
  return CTriggerPlayerMovement::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerPlayerMovement::CEntityInstanceEntityClass::DestructInstance  (line 4640, @0x00000000023e6a20, libserver.so)  // inlines: Destruct<CTriggerPlayerMovement>
void __fastcall CTriggerPlayerMovement::CEntityInstanceEntityClass::DestructInstance(
        CTriggerPlayerMovement::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerPlayerMovement::CEntityInstanceEntityClass::FreeInstance  (line 4640, @0x00000000023e6a40, libserver.so)
void __fastcall CTriggerPlayerMovement::CEntityInstanceEntityClass::FreeInstance(
        CTriggerPlayerMovement::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerPlayerMovement::CEntityInstanceEntityClass::CanAllocate  (line 4640, @0x00000000023e6a60, libserver.so)
bool __fastcall CTriggerPlayerMovement::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerPlayerMovement::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerPlayerMovement::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 4640, @0x00000000023e6a70, libserver.so)
// globals: CTriggerPlayerMovement::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerPlayerMovement::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerPlayerMovement::CEntityInstanceEntityClass *const this)
{
  return CTriggerPlayerMovement::s_pSchemaBinding;
}


// CTriggerPlayerMovement::CEntityInstanceEntityClass::AllocateInstance  (line 4640, @0x00000000023e87b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerPlayerMovement::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerPlayerMovement::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1480);
  memset(v1, 0, 0x5C8u);
  return v1;
}


// CTriggerPlayerMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4640, @0x00000000023ea4c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerPlayerMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerPlayerMovement::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerPlayerMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4640, @0x00000000023ea4e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerPlayerMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerPlayerMovement::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerPlayerMovement::CEntityInstanceEntityClass::ConstructInstance  (line 4640, @0x00000000023f16c0, libserver.so)  // inlines: CTriggerPlayerMovement, Construct<CTriggerPlayerMovement>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerPlayerMovement::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerPlayerMovement::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_40C9B70;
  }
  return p;
}


// CTriggerPlayerMovement::GetEntityClassInternal  (line 4640, @0x00000000023f3460, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_playermovement", "CTriggerPlayerMovement"
// globals: `guard variable for'CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass, CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass, __dso_handle, CTriggerPlayerMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerPlayerMovement::GetEntityClassInfo(void)::g_EntityCTriggerPlayerMovementClassInfo, CTriggerPlayerMovement::GetEntityClassInfo(void)::g_EntityCTriggerPlayerMovementClassInfo
CEntityClass *__cdecl CTriggerPlayerMovement::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass);
    CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass._vptr_CEntityClass = off_40C9AF0;
    __cxa_guard_release(&`guard variable for'CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass);
    __cxa_atexit(
      CTriggerPlayerMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerPlayerMovementClass != 0 )
    return &CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass;
  if ( `guard variable for'CTriggerPlayerMovement::GetEntityClassInfo(void)::g_EntityCTriggerPlayerMovementClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerPlayerMovement::GetEntityClassInfo(void)::g_EntityCTriggerPlayerMovementClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerPlayerMovement::GetEntityClassInfo(void)::g_EntityCTriggerPlayerMovementClassInfo,
      "CTriggerPlayerMovement",
      "trigger_playermovement",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerPlayerMovement::GetEntityClassInfo(void)::g_EntityCTriggerPlayerMovementClassInfo);
  }
  CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass.m_pClassInfo = &CTriggerPlayerMovement::GetEntityClassInfo(void)::g_EntityCTriggerPlayerMovementClassInfo;
  CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass.m_pBaseClassInfo = CTriggerPlayerMovement::GetEntityClassInfo(void)::g_EntityCTriggerPlayerMovementClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerPlayerMovementClass = &CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass;
  CTriggerPlayerMovement::GetEntityClassInfo(void)::g_EntityCTriggerPlayerMovementClassInfo.m_pClass = &CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass;
  CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerPlayerMovementClass->m_pComponentOverrides = 0;
  return &CTriggerPlayerMovement::GetEntityClassInternal(void)::g_EntityCTriggerPlayerMovementClass;
}


// CTriggerPlayerMovement::YouForgotToImplementOrDeclareServerClass  (line 4651, @0x00000000023bb4d0, libserver.so)
int __fastcall CTriggerPlayerMovement::YouForgotToImplementOrDeclareServerClass(CTriggerPlayerMovement *const this)
{
  return 0;
}


// CTriggerPlayerMovement::GetServerClass  (line 4651, @0x00000000023c2ec0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CTriggerPlayerMovement::GetServerClass(CTriggerPlayerMovement *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CTriggerPlayerMovement::GetDataDescMap  (line 4654, @0x00000000023bb4e0, libserver.so)
// globals: CTriggerPlayerMovement::m_DataMap
datamap_t *__fastcall CTriggerPlayerMovement::GetDataDescMap(CTriggerPlayerMovement *const this)
{
  return &CTriggerPlayerMovement::m_DataMap;
}


// CTriggerPlayerMovement::AddDatadescMetadataKeys  (line 4654, @0x00000000023d22e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerPlayerMovement::GetEntityClass(void)
void __fastcall CTriggerPlayerMovement::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerPlayerMovement::GetEntityClass);
}


// CTriggerPlayerMovement::GetBaseMap  (line 4654, @0x00000000023d2300, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerPlayerMovement::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerPlayerMovement>  (line 4654, @0x00000000023d2310, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerPlayerMovement"
// globals: `guard variable for'DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder, CBaseTrigger::m_DataMap, CTriggerPlayerMovement::GetEntityClass(void), DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::dataDesc, CTriggerPlayerMovement::m_DataMap, DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder.m_pszBase = "CTriggerPlayerMovement";
    DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::nameHolder,
      &_dso_handle);
  }
  CTriggerPlayerMovement::m_DataMap.dataNumFields = 1;
  CTriggerPlayerMovement::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  CTriggerPlayerMovement::m_DataMap.dataDesc = DataMapInit<CTriggerPlayerMovement>(CTriggerPlayerMovement *)::dataDesc;
  AddDatadescMetadataKeys(&CTriggerPlayerMovement::m_DataMap, CTriggerPlayerMovement::GetEntityClass);
  return &CTriggerPlayerMovement::m_DataMap;
}


// CTriggerPlayerMovement::Spawn  (line 4660, @0x00000000023d6cf0, libserver.so)  // inlines: AddSpawnFlags, NetworkStateChanged, RemoveSpawnFlags, Set, operator&=<int>, operator|=<int>
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger, DevMsg(char const*,...)
// strings: "*** trigger_playermovement using obsolete spawnflag. Remove and reset with new value for 
void __fastcall CTriggerPlayerMovement::Spawn(CTriggerPlayerMovement *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned int v4; // r13d
  unsigned int v5; // r14d

  if ( (this->m_spawnflags.m_Value & 0x10) != 0 )
  {
    DevMsg(
      "*** trigger_playermovement using obsolete spawnflag. Remove and reset with new value for \"Disable auto player movement\"\n");
    v4 = this->m_spawnflags.m_Value & 0xFFFFFFEF;
    if ( this->m_spawnflags.m_Value != v4 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v4;
    }
    v5 = v4;
    LOBYTE(v5) = v4 | 0x80;
    if ( v5 != v4 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v5;
    }
  }
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CTriggerPlayerMovement::StartTouch  (line 4688, @0x00000000023c0030, libserver.so)  // inlines: HasSpawnFlags, NetworkStateChanged, Set, ToBasePlayer, operator=<bool>
// calls: CBasePlayer::DisableButtons, CBasePlayer::ForceButtons
void __fastcall CTriggerPlayerMovement::StartTouch(CTriggerPlayerMovement *const this, CBaseEntity *pOther)
{
  unsigned int m_Value; // eax

  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0
    && pOther != 0
    && (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
  {
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 0x800) != 0 )
    {
      CBasePlayer::ForceButtons(pOther, 4u);
      m_Value = this->m_spawnflags.m_Value;
    }
    if ( (m_Value & 0x1000) != 0 )
    {
      CBasePlayer::ForceButtons(pOther, 0x10000u);
      m_Value = this->m_spawnflags.m_Value;
    }
    if ( (m_Value & 0x2000) != 0 )
    {
      CBasePlayer::DisableButtons(pOther, 2u);
      m_Value = this->m_spawnflags.m_Value;
    }
    if ( (m_Value & 0x80u) != 0 && LOBYTE(pOther[2].m_vecVelocity.m_vecZ.m_nEncoder) != 0 )
    {
      (*(pOther[2].m_target.u.m_Id + 16))(&pOther[2].m_target, 144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      LOBYTE(pOther[2].m_vecVelocity.m_vecZ.m_nEncoder) = 0;
    }
  }
}


// CTriggerPlayerMovement::EndTouch  (line 4720, @0x00000000023c0110, libserver.so)  // inlines: HasSpawnFlags, NetworkStateChanged, Set, ToBasePlayer, operator=<bool>
// calls: CBasePlayer::EnableButtons, CBasePlayer::UnforceButtons
void __fastcall CTriggerPlayerMovement::EndTouch(CTriggerPlayerMovement *const this, CBaseEntity *pOther)
{
  unsigned int m_Value; // eax

  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0
    && pOther != 0
    && (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
  {
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 0x800) != 0 )
    {
      CBasePlayer::UnforceButtons(pOther, 4u);
      m_Value = this->m_spawnflags.m_Value;
    }
    if ( (m_Value & 0x1000) != 0 )
    {
      CBasePlayer::UnforceButtons(pOther, 0x10000u);
      m_Value = this->m_spawnflags.m_Value;
    }
    if ( (m_Value & 0x2000) != 0 )
    {
      CBasePlayer::EnableButtons(pOther, 2u);
      m_Value = this->m_spawnflags.m_Value;
    }
    if ( (m_Value & 0x80u) != 0 && LOBYTE(pOther[2].m_vecVelocity.m_vecZ.m_nEncoder) != 1 )
    {
      (*(pOther[2].m_target.u.m_Id + 16))(&pOther[2].m_target, 144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      LOBYTE(pOther[2].m_vecVelocity.m_vecZ.m_nEncoder) = 1;
    }
  }
}


// CServerRagdollTrigger::~CServerRagdollTrigger  (line 4751, @0x00000000023f6230, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CServerRagdollTrigger::~CServerRagdollTrigger(CServerRagdollTrigger *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CServerRagdollTrigger::~CServerRagdollTrigger  (line 4751, @0x00000000023f6700, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CServerRagdollTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CServerRagdollTrigger::~CServerRagdollTrigger(CServerRagdollTrigger *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CServerRagdollTrigger::Schema_DynamicBinding  (line 4753, @0x00000000023e6a80, libserver.so)
// globals: CServerRagdollTrigger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CServerRagdollTrigger::Schema_DynamicBinding(
        const CServerRagdollTrigger *const this)
{
  return CServerRagdollTrigger::s_pSchemaBinding;
}


// CServerRagdollTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 4753, @0x00000000023e6a90, libserver.so)
// globals: CServerRagdollTrigger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CServerRagdollTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CServerRagdollTrigger::CEntityInstanceEntityClass *const this)
{
  return CServerRagdollTrigger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CServerRagdollTrigger::CEntityInstanceEntityClass::DestructInstance  (line 4753, @0x00000000023e6aa0, libserver.so)  // inlines: Destruct<CServerRagdollTrigger>
void __fastcall CServerRagdollTrigger::CEntityInstanceEntityClass::DestructInstance(
        CServerRagdollTrigger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CServerRagdollTrigger::CEntityInstanceEntityClass::FreeInstance  (line 4753, @0x00000000023e6ac0, libserver.so)
void __fastcall CServerRagdollTrigger::CEntityInstanceEntityClass::FreeInstance(
        CServerRagdollTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CServerRagdollTrigger::CEntityInstanceEntityClass::CanAllocate  (line 4753, @0x00000000023e6ae0, libserver.so)
bool __fastcall CServerRagdollTrigger::CEntityInstanceEntityClass::CanAllocate(
        const CServerRagdollTrigger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CServerRagdollTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 4753, @0x00000000023e6af0, libserver.so)
// globals: CServerRagdollTrigger::s_pSchemaBinding
const ISchemaBinding *__fastcall CServerRagdollTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CServerRagdollTrigger::CEntityInstanceEntityClass *const this)
{
  return CServerRagdollTrigger::s_pSchemaBinding;
}


// CServerRagdollTrigger::CEntityInstanceEntityClass::AllocateInstance  (line 4753, @0x00000000023e87f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CServerRagdollTrigger::CEntityInstanceEntityClass::AllocateInstance(
        CServerRagdollTrigger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1480);
  memset(v1, 0, 0x5C8u);
  return v1;
}


// CServerRagdollTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4753, @0x00000000023ea510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CServerRagdollTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CServerRagdollTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CServerRagdollTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4753, @0x00000000023ea530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CServerRagdollTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CServerRagdollTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CServerRagdollTrigger::CEntityInstanceEntityClass::ConstructInstance  (line 4753, @0x00000000023f16f0, libserver.so)  // inlines: CServerRagdollTrigger, Construct<CServerRagdollTrigger>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CServerRagdollTrigger::CEntityInstanceEntityClass::ConstructInstance(
        CServerRagdollTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_40CA310;
  }
  return p;
}


// CServerRagdollTrigger::GetEntityClassInternal  (line 4753, @0x00000000023f35b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_serverragdoll", "CServerRagdollTrigger"
// globals: `guard variable for'CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass, CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass, __dso_handle, CServerRagdollTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CServerRagdollTrigger::GetEntityClassInfo(void)::g_EntityCServerRagdollTriggerClassInfo, CServerRagdollTrigger::GetEntityClassInfo(void)::g_EntityCServerRagdollTriggerClassInfo
CEntityClass *__cdecl CServerRagdollTrigger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass);
    CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass._vptr_CEntityClass = off_40CA290;
    __cxa_guard_release(&`guard variable for'CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass);
    __cxa_atexit(
      CServerRagdollTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCServerRagdollTriggerClass != 0 )
    return &CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass;
  if ( `guard variable for'CServerRagdollTrigger::GetEntityClassInfo(void)::g_EntityCServerRagdollTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CServerRagdollTrigger::GetEntityClassInfo(void)::g_EntityCServerRagdollTriggerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CServerRagdollTrigger::GetEntityClassInfo(void)::g_EntityCServerRagdollTriggerClassInfo,
      "CServerRagdollTrigger",
      "trigger_serverragdoll",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CServerRagdollTrigger::GetEntityClassInfo(void)::g_EntityCServerRagdollTriggerClassInfo);
  }
  CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass.m_pClassInfo = &CServerRagdollTrigger::GetEntityClassInfo(void)::g_EntityCServerRagdollTriggerClassInfo;
  CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass.m_pBaseClassInfo = CServerRagdollTrigger::GetEntityClassInfo(void)::g_EntityCServerRagdollTriggerClassInfo.m_pBaseClassInfo;
  g_pEntityCServerRagdollTriggerClass = &CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass;
  CServerRagdollTrigger::GetEntityClassInfo(void)::g_EntityCServerRagdollTriggerClassInfo.m_pClass = &CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass;
  CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCServerRagdollTriggerClass->m_pComponentOverrides = 0;
  return &CServerRagdollTrigger::GetEntityClassInternal(void)::g_EntityCServerRagdollTriggerClass;
}


// CServerRagdollTrigger::Spawn  (line 4762, @0x00000000023d6db0, libserver.so)
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
void __fastcall CServerRagdollTrigger::Spawn(CServerRagdollTrigger *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CServerRagdollTrigger::StartTouch  (line 4769, @0x00000000023e1f70, libserver.so)
// calls: CBaseTrigger::StartTouch
void __fastcall CServerRagdollTrigger::StartTouch(CServerRagdollTrigger *const this, CBaseEntity *pOther)
{
  __int64 v3; // rax

  CBaseTrigger::StartTouch(this, pOther);
  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) == 0 )
  {
    v3 = (*(pOther->_vptr_IHandleEntity + 147))(pOther);
    if ( v3 != 0 )
      *(v3 + 1353) = 1;
  }
}


// CServerRagdollTrigger::EndTouch  (line 4784, @0x00000000023dd730, libserver.so)
// calls: CBaseTrigger::EndTouch
void __fastcall CServerRagdollTrigger::EndTouch(CServerRagdollTrigger *const this, CBaseEntity *pOther)
{
  __int64 v3; // rax

  CBaseTrigger::EndTouch(this, pOther);
  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) == 0 )
  {
    v3 = (*(pOther->_vptr_IHandleEntity + 147))(pOther);
    if ( v3 != 0 )
      *(v3 + 1353) = 0;
  }
}


// CTriggerCallback::Spawn  (line 4866, @0x00000000023c0630, libserver.so)  // inlines: AddSpawnFlags, NetworkStateChanged, Set, operator|=<int>
// calls: CBaseTrigger::Spawn, CCollisionProperty::SetupPhysicsFromUnscaledOBB
void __fastcall CTriggerCallback::Spawn(CTriggerCallback *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  const Vector *v4; // r13
  const Vector *v5; // rax
  unsigned int v6; // r12d

  p_m_Collision = &this->m_Collision;
  CBaseTrigger::Spawn(this, pKeyValues);
  v4 = (*(this->m_Collision._vptr_ICollideable + 2))(p_m_Collision);
  v5 = (*(this->m_Collision._vptr_ICollideable + 1))(p_m_Collision);
  CCollisionProperty::SetupPhysicsFromUnscaledOBB(
    p_m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED,
    2,
    v5,
    v4);
  v6 = this->m_spawnflags.m_Value | 0xB;
  if ( this->m_spawnflags.m_Value != v6 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v6;
  }
}


// CTriggerCallback::StartTouch  (line 4879, @0x00000000023e1fc0, libserver.so)  // inlines: GetParent
// calls: CBaseEntity::VPhysicsGetObject, CGameSceneNode::GetOwnerEntity, CBaseTrigger::StartTouch
void __fastcall CTriggerCallback::StartTouch(CTriggerCallback *const this, CBaseEntity *pOther)
{
  IPhysicsObject *Object; // rax
  CGameSceneNode *m_pParent; // rdi
  void (*pfn)(CBaseEntity *, CBaseEntity *); // rdx
  CGameSceneNode *v7; // rdi
  CBaseEntity *OwnerEntity; // rax
  CBaseEntity *v9; // rax

  if ( CBaseEntity::VPhysicsGetObject(pOther) == 0
    || (Object = CBaseEntity::VPhysicsGetObject(pOther), ((*(*Object + 1296LL))(Object) & 4) == 0) )
  {
    if ( (*(this->_vptr_IHandleEntity + 223))(this, pOther) != 0 )
    {
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 && CGameSceneNode::GetOwnerEntity(m_pParent) != 0 )
      {
        pfn = this->m_pfnCallback.__pfn;
        if ( pfn != 0 )
        {
          v7 = this->m_pGameSceneNode->m_pParent;
          OwnerEntity = 0;
          if ( v7 != 0 )
          {
            OwnerEntity = CGameSceneNode::GetOwnerEntity(v7);
            pfn = this->m_pfnCallback.__pfn;
          }
          v9 = (OwnerEntity + this->m_pfnCallback.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(v9->_vptr_IHandleEntity + pfn - 1);
          pfn(v9, pOther);
        }
      }
      CBaseTrigger::StartTouch(this, pOther);
    }
  }
}


// CTriggerCallback::GetDataDescMap  (line 4901, @0x00000000023bb4f0, libserver.so)
// globals: CTriggerCallback::m_DataMap
datamap_t *__fastcall CTriggerCallback::GetDataDescMap(CTriggerCallback *const this)
{
  return &CTriggerCallback::m_DataMap;
}


// CTriggerCallback::AddDatadescMetadataKeys  (line 4901, @0x00000000023d23e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerCallback::GetEntityClass(void)
void __fastcall CTriggerCallback::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerCallback::GetEntityClass);
}


// CTriggerCallback::GetBaseMap  (line 4901, @0x00000000023d2400, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerCallback::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerCallback>  (line 4901, @0x00000000023d2410, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerCallback"
// globals: `guard variable for'DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder, CBaseTrigger::m_DataMap, CTriggerCallback::GetEntityClass(void), DataMapInit<CTriggerCallback>(CTriggerCallback *)::dataDesc, CTriggerCallback::m_DataMap, DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerCallback>(CTriggerCallback *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder.m_pszBase = "CTriggerCallback";
    DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerCallback>(CTriggerCallback *)::nameHolder,
      &_dso_handle);
  }
  CTriggerCallback::m_DataMap.dataNumFields = 1;
  CTriggerCallback::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  CTriggerCallback::m_DataMap.dataDesc = DataMapInit<CTriggerCallback>(CTriggerCallback *)::dataDesc;
  AddDatadescMetadataKeys(&CTriggerCallback::m_DataMap, CTriggerCallback::GetEntityClass);
  return &CTriggerCallback::m_DataMap;
}


// CTriggerActiveWeaponDetect::~CTriggerActiveWeaponDetect  (line 5031, @0x00000000023f64d0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerActiveWeaponDetect::~CTriggerActiveWeaponDetect(CTriggerActiveWeaponDetect *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerActiveWeaponDetect::~CTriggerActiveWeaponDetect  (line 5031, @0x00000000023f6900, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CTriggerActiveWeaponDetect, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerActiveWeaponDetect::~CTriggerActiveWeaponDetect(CTriggerActiveWeaponDetect *const this)
{
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerActiveWeaponDetect::GetEntityClass  (line 5033, @0x00000000023e6b00, libserver.so)
CEntityClass *__cdecl CTriggerActiveWeaponDetect::GetEntityClass()
{
  return g_pEntityCTriggerActiveWeaponDetectClass;
}


// CTriggerActiveWeaponDetect::Schema_DynamicBinding  (line 5033, @0x00000000023e6b10, libserver.so)
// globals: CTriggerActiveWeaponDetect::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerActiveWeaponDetect::Schema_DynamicBinding(
        const CTriggerActiveWeaponDetect *const this)
{
  return CTriggerActiveWeaponDetect::s_pSchemaBinding;
}


// CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 5033, @0x00000000023e6b20, libserver.so)
// globals: CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerActiveWeaponDetect::CEntityInstanceEntityClass *const this)
{
  return CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::DestructInstance  (line 5033, @0x00000000023e6b30, libserver.so)  // inlines: Destruct<CTriggerActiveWeaponDetect>
void __fastcall CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::DestructInstance(
        CTriggerActiveWeaponDetect::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::FreeInstance  (line 5033, @0x00000000023e6b50, libserver.so)
void __fastcall CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::FreeInstance(
        CTriggerActiveWeaponDetect::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::CanAllocate  (line 5033, @0x00000000023e6b70, libserver.so)
bool __fastcall CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerActiveWeaponDetect::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 5033, @0x00000000023e6b80, libserver.so)
// globals: CTriggerActiveWeaponDetect::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerActiveWeaponDetect::CEntityInstanceEntityClass *const this)
{
  return CTriggerActiveWeaponDetect::s_pSchemaBinding;
}


// CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::AllocateInstance  (line 5033, @0x00000000023e8830, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerActiveWeaponDetect::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1512);
  memset(v1, 0, 0x5E8u);
  return v1;
}


// CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5033, @0x00000000023ea560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerActiveWeaponDetect::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5033, @0x00000000023ea580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerActiveWeaponDetect::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::ConstructInstance  (line 5033, @0x00000000023f1720, libserver.so)  // inlines: CEntityIOOutput, CTriggerActiveWeaponDetect, CUtlSymbolLarge, Construct<CTriggerActiveWeaponDetect>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerActiveWeaponDetect::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 188) = 0;
    *p = &off_40CB1D0;
    *(p + 185) = off_3F7C190;
  }
  return p;
}


// CTriggerActiveWeaponDetect::GetEntityClassInternal  (line 5033, @0x00000000023f3700, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "trigger_active_weapon_detect", "CTriggerActiveWeaponDetect"
// globals: `guard variable for'CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass, CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass, __dso_handle, CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerActiveWeaponDetect::GetEntityClassInfo(void)::g_EntityCTriggerActiveWeaponDetectClassInfo, CTriggerActiveWeaponDetect::GetEntityClassInfo(void)::g_EntityCTriggerActiveWeaponDetectClassInfo
CEntityClass *__cdecl CTriggerActiveWeaponDetect::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass);
    CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass._vptr_CEntityClass = off_40CB150;
    __cxa_guard_release(&`guard variable for'CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass);
    __cxa_atexit(
      CTriggerActiveWeaponDetect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerActiveWeaponDetectClass != 0 )
    return &CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass;
  if ( `guard variable for'CTriggerActiveWeaponDetect::GetEntityClassInfo(void)::g_EntityCTriggerActiveWeaponDetectClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerActiveWeaponDetect::GetEntityClassInfo(void)::g_EntityCTriggerActiveWeaponDetectClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerActiveWeaponDetect::GetEntityClassInfo(void)::g_EntityCTriggerActiveWeaponDetectClassInfo,
      "CTriggerActiveWeaponDetect",
      "trigger_active_weapon_detect",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerActiveWeaponDetect::GetEntityClassInfo(void)::g_EntityCTriggerActiveWeaponDetectClassInfo);
  }
  CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass.m_pClassInfo = &CTriggerActiveWeaponDetect::GetEntityClassInfo(void)::g_EntityCTriggerActiveWeaponDetectClassInfo;
  CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass.m_pBaseClassInfo = CTriggerActiveWeaponDetect::GetEntityClassInfo(void)::g_EntityCTriggerActiveWeaponDetectClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerActiveWeaponDetectClass = &CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass;
  CTriggerActiveWeaponDetect::GetEntityClassInfo(void)::g_EntityCTriggerActiveWeaponDetectClassInfo.m_pClass = &CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass;
  CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerActiveWeaponDetectClass->m_pComponentOverrides = 0;
  return &CTriggerActiveWeaponDetect::GetEntityClassInternal(void)::g_EntityCTriggerActiveWeaponDetectClass;
}


// CTriggerActiveWeaponDetect::PassesTriggerFilters  (line 5038, @0x00000000023e6b90, libserver.so)
bool __fastcall CTriggerActiveWeaponDetect::PassesTriggerFilters(
        CTriggerActiveWeaponDetect *const this,
        CBaseEntity *pOther)
{
  return pOther != 0 && (*(pOther->_vptr_IHandleEntity + 140))(pOther);
}


// CTriggerActiveWeaponDetect::GetDataDescMap  (line 5055, @0x00000000023bb500, libserver.so)
// globals: CTriggerActiveWeaponDetect::m_DataMap
datamap_t *__fastcall CTriggerActiveWeaponDetect::GetDataDescMap(CTriggerActiveWeaponDetect *const this)
{
  return &CTriggerActiveWeaponDetect::m_DataMap;
}


// CTriggerActiveWeaponDetect::AddDatadescMetadataKeys  (line 5055, @0x00000000023d24e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerActiveWeaponDetect::GetEntityClass(void)
void __fastcall CTriggerActiveWeaponDetect::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerActiveWeaponDetect::GetEntityClass);
}


// CTriggerActiveWeaponDetect::GetBaseMap  (line 5055, @0x00000000023d2500, libserver.so)
// globals: CBaseTrigger::m_DataMap
datamap_t *__cdecl CTriggerActiveWeaponDetect::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerActiveWeaponDetect>  (line 5055, @0x00000000023ddb90, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTriggerActiveWeaponDetect"
// globals: `guard variable for'DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder, `guard variable for'DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::dataDesc, CBaseTrigger::m_DataMap, CTriggerActiveWeaponDetect::GetEntityClass(void), CTriggerActiveWeaponDetect::m_DataMap, DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_pszBase = "CTriggerActiveWeaponDetect";
    DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_nLenBase = 26;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder,
      &_dso_handle);
  }
  CTriggerActiveWeaponDetect::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_nLenBase + 18);
    strcpy(
      stpcpy(v2, DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_pszBase),
      "ActiveWeaponThink");
    m_Size = DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::dataDesc[2].fieldName = v2;
    DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::dataDesc[3].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::dataDesc);
  }
  CTriggerActiveWeaponDetect::m_DataMap.dataNumFields = 3;
  CTriggerActiveWeaponDetect::m_DataMap.dataDesc = &DataMapInit<CTriggerActiveWeaponDetect>(CTriggerActiveWeaponDetect *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerActiveWeaponDetect::m_DataMap, CTriggerActiveWeaponDetect::GetEntityClass);
  return &CTriggerActiveWeaponDetect::m_DataMap;
}


// CTriggerActiveWeaponDetect::Spawn  (line 5066, @0x00000000023d6de0, libserver.so)
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
void __fastcall CTriggerActiveWeaponDetect::Spawn(
        CTriggerActiveWeaponDetect *const this,
        const CEntityKeyValues *pKeyValues)
{
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CTriggerActiveWeaponDetect::StartTouch  (line 5073, @0x00000000023e2090, libserver.so)  // inlines: curtime
// calls: CBaseTrigger::StartTouch, CBaseEntity::ThinkSet
// globals: CTriggerActiveWeaponDetect::ActiveWeaponThink(void)
void __fastcall CTriggerActiveWeaponDetect::StartTouch(CTriggerActiveWeaponDetect *const this, CBaseEntity *pOther)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseTrigger::StartTouch(this, pOther);
  if ( this->m_hTouchingEntities.m_Size > 0 )
  {
    m_flCurrentTime = 0.0;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v4->m_flCurrentTime;
    }
    CBaseEntity::ThinkSet(this, CTriggerActiveWeaponDetect::ActiveWeaponThink, m_flCurrentTime, -2086363405, 0);
  }
}


// CTriggerActiveWeaponDetect::ActiveWeaponThink  (line 5085, @0x00000000023dd210, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToBasePlayer, ToCStr, _V_strcmp, curtime, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CVariantBase
// calls: CBaseCombatCharacter::GetActiveWeapon, strcmp, CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList, CTriggerActiveWeaponDetect::ActiveWeaponThink(void)
void __fastcall CTriggerActiveWeaponDetect::ActiveWeaponThink(CTriggerActiveWeaponDetect *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CConcreteEntityList *v5; // rsi
  CHandle<CBaseEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rdx
  CBaseCombatCharacter *m_pInstance; // r15
  CBaseCombatCharacter *v13; // r14
  CBaseCombatWeapon *ActiveWeapon; // rax
  const char *m_pAsString; // rsi
  CEntityIdentity *m_pEntity; // rax
  const char *v17; // rdi
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v19; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  COutputEvent *p_m_OnTouchedActiveWeapon; // [rsp+0h] [rbp-50h]
  CVariant v22; // [rsp+10h] [rbp-40h] BYREF

  m_Size = this->m_hTouchingEntities.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 4LL * (m_Size - 1) + 4;
    p_m_OnTouchedActiveWeapon = &this->m_OnTouchedActiveWeapon;
    do
    {
      while ( 1 )
      {
        v5 = CEntityHandle::gm_pEntityList;
        v6 = &this->m_hTouchingEntities.m_Memory.m_pMemory[v3 / 4];
        m_Index = v6->m_Index;
        if ( v6->m_Index + 2 > 1 )
        {
          v8 = v6->m_Index;
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = v8 & 0x1FF;
            v5 = (8 * v10);
            v11 = &v9[v10];
            if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
            {
              m_pInstance = v11->m_pInstance;
              if ( v11->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v11->m_pInstance) != 0 )
              {
                v13 = 0;
                if ( (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0 )
                  v13 = m_pInstance;
                ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(v13);
                if ( ActiveWeapon != 0 )
                {
                  m_pAsString = this->m_iszWeaponClassName.u.m_pAsString;
                  m_pEntity = ActiveWeapon->m_pEntity;
                  if ( m_pAsString == 0 )
                    m_pAsString = "";
                  v17 = m_pEntity->m_designerName.u.m_pAsString;
                  if ( v17 == 0 )
                    v17 = "";
                  if ( strcmp(v17, m_pAsString) == 0 )
                  {
                    v22.m_type = 0;
                    v22.m_uint64 = 0;
                    v22.m_flags = 0;
                    CEntityIOOutput::FireOutputInternal(p_m_OnTouchedActiveWeapon, v13, this, &v22, 0.0);
                    if ( (v22.m_flags & 1) != 0 )
                      break;
                  }
                }
              }
            }
          }
        }
        v3 += 4LL;
        if ( v3 == v4 )
          goto LABEL_20;
      }
      v3 += 4LL;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v22.m_uint64);
    }
    while ( v3 != v4 );
LABEL_20:
    m_flCurrentTime = 0.0;
    v19 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v5, 0.0);
      }
      m_flCurrentTime = v19->m_flCurrentTime;
    }
    CBaseEntity::ThinkSet(this, CTriggerActiveWeaponDetect::ActiveWeaponThink, m_flCurrentTime, -2086363405, 0);
  }
}


// CPostProcessingVolume::~CPostProcessingVolume  (line 5278, @0x00000000023f7b20, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CNetworkVarBase, ~CStrongHandle, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Shutdown, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CPostProcessingVolume::~CPostProcessingVolume(CPostProcessingVolume *const this)
{
  this->_vptr_IHandleEntity = &off_40CB970;
  CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Shutdown(&this->m_hPostSettings.m_Value);
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPostProcessingVolume::~CPostProcessingVolume  (line 5278, @0x00000000023f7bb0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CNetworkVarBase, ~CPostProcessingVolume, ~CStrongHandle, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Shutdown, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CPostProcessingVolume::~CPostProcessingVolume(CPostProcessingVolume *const this)
{
  this->_vptr_IHandleEntity = &off_40CB970;
  CStrongHandle<InfoForResourceTypeCPostProcessingResource>::Shutdown(&this->m_hPostSettings.m_Value);
  this->_vptr_IHandleEntity = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPostProcessingVolume::Schema_DynamicBinding  (line 5280, @0x00000000023e6bc0, libserver.so)
// globals: CPostProcessingVolume::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPostProcessingVolume::Schema_DynamicBinding(
        const CPostProcessingVolume *const this)
{
  return CPostProcessingVolume::s_pSchemaBinding;
}


// CPostProcessingVolume::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 5280, @0x00000000023e6bd0, libserver.so)
// globals: CPostProcessingVolume::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPostProcessingVolume::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPostProcessingVolume::CEntityInstanceEntityClass *const this)
{
  return CPostProcessingVolume::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPostProcessingVolume::CEntityInstanceEntityClass::DestructInstance  (line 5280, @0x00000000023e6be0, libserver.so)  // inlines: Destruct<CPostProcessingVolume>
void __fastcall CPostProcessingVolume::CEntityInstanceEntityClass::DestructInstance(
        CPostProcessingVolume::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPostProcessingVolume::CEntityInstanceEntityClass::FreeInstance  (line 5280, @0x00000000023e6c00, libserver.so)
void __fastcall CPostProcessingVolume::CEntityInstanceEntityClass::FreeInstance(
        CPostProcessingVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPostProcessingVolume::CEntityInstanceEntityClass::CanAllocate  (line 5280, @0x00000000023e6c20, libserver.so)
bool __fastcall CPostProcessingVolume::CEntityInstanceEntityClass::CanAllocate(
        const CPostProcessingVolume::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPostProcessingVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 5280, @0x00000000023e6c30, libserver.so)
// globals: CPostProcessingVolume::s_pSchemaBinding
const ISchemaBinding *__fastcall CPostProcessingVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPostProcessingVolume::CEntityInstanceEntityClass *const this)
{
  return CPostProcessingVolume::s_pSchemaBinding;
}


// CPostProcessingVolume::CEntityInstanceEntityClass::AllocateInstance  (line 5280, @0x00000000023e8870, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPostProcessingVolume::CEntityInstanceEntityClass::AllocateInstance(
        CPostProcessingVolume::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1496);
  memset(v1, 0, 0x5D8u);
  return v1;
}


// CPostProcessingVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5280, @0x00000000023ea5b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPostProcessingVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPostProcessingVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPostProcessingVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 5280, @0x00000000023ea5d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPostProcessingVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPostProcessingVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPostProcessingVolume::CEntityInstanceEntityClass::ConstructInstance  (line 5280, @0x00000000023f1770, libserver.so)  // inlines: CNetworkVarBase, CPostProcessingVolume, CStrongHandle, Construct<CPostProcessingVolume>, EnsureValidValue<bool>, EnsureValidValue<float>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CPostProcessingVolume::CEntityInstanceEntityClass::ConstructInstance(
        CPostProcessingVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *(p + 185) = 0;
    *p = &off_40CB970;
    *(p + 372) = 0;
    *(p + 1492) = 0;
  }
  return p;
}


// CPostProcessingVolume::GetEntityClassInternal  (line 5280, @0x00000000023f3850, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "post_processing_volume", "CPostProcessingVolume"
// globals: `guard variable for'CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass, CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass, __dso_handle, CPostProcessingVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPostProcessingVolume::GetEntityClassInfo(void)::g_EntityCPostProcessingVolumeClassInfo, CPostProcessingVolume::GetEntityClassInfo(void)::g_EntityCPostProcessingVolumeClassInfo
CEntityClass *__cdecl CPostProcessingVolume::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass);
    CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass._vptr_CEntityClass = off_40CB8F0;
    __cxa_guard_release(&`guard variable for'CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass);
    __cxa_atexit(
      CPostProcessingVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass,
      &_dso_handle);
  }
  if ( g_pEntityCPostProcessingVolumeClass != 0 )
    return &CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass;
  if ( `guard variable for'CPostProcessingVolume::GetEntityClassInfo(void)::g_EntityCPostProcessingVolumeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPostProcessingVolume::GetEntityClassInfo(void)::g_EntityCPostProcessingVolumeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPostProcessingVolume::GetEntityClassInfo(void)::g_EntityCPostProcessingVolumeClassInfo,
      "CPostProcessingVolume",
      "post_processing_volume",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPostProcessingVolume::GetEntityClassInfo(void)::g_EntityCPostProcessingVolumeClassInfo);
  }
  CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass.m_pClassInfo = &CPostProcessingVolume::GetEntityClassInfo(void)::g_EntityCPostProcessingVolumeClassInfo;
  CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass.m_pBaseClassInfo = CPostProcessingVolume::GetEntityClassInfo(void)::g_EntityCPostProcessingVolumeClassInfo.m_pBaseClassInfo;
  g_pEntityCPostProcessingVolumeClass = &CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass;
  CPostProcessingVolume::GetEntityClassInfo(void)::g_EntityCPostProcessingVolumeClassInfo.m_pClass = &CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass;
  CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCPostProcessingVolumeClass->m_pComponentOverrides = 0;
  return &CPostProcessingVolume::GetEntityClassInternal(void)::g_EntityCPostProcessingVolumeClass;
}


// CPostProcessingVolume::PassesTriggerFilters  (line 5291, @0x00000000023e6c40, libserver.so)
bool __fastcall CPostProcessingVolume::PassesTriggerFilters(CPostProcessingVolume *const this, CBaseEntity *pOther)
{
  return pOther != 0 && (*(pOther->_vptr_IHandleEntity + 140))(pOther);
}


// CPostProcessingVolume::YouForgotToImplementOrDeclareServerClass  (line 5305, @0x00000000023bb510, libserver.so)
int __fastcall CPostProcessingVolume::YouForgotToImplementOrDeclareServerClass(CPostProcessingVolume *const this)
{
  return 0;
}


// CPostProcessingVolume::GetServerClass  (line 5305, @0x00000000023c3080, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPostProcessingVolume::GetServerClass(CPostProcessingVolume *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CPostProcessingVolume::CPostProcessingVolume  (line 5309, @0x00000000023d2510, libserver.so)  // inlines: CNetworkVarBase, CStrongHandle, EnsureValidValue<bool>, EnsureValidValue<float>
// calls: CBaseTrigger::CBaseTrigger
void __fastcall CPostProcessingVolume::CPostProcessingVolume(CPostProcessingVolume *const this)
{
  CBaseTrigger::CBaseTrigger(this);
  this->m_hPostSettings.m_Value.m_pBinding = 0;
  this->_vptr_IHandleEntity = &off_40CB970;
  this->m_flFadeTime.m_Value = 0.0;
  this->m_bMaster.m_Value = 0;
}


// CPostProcessingVolume::Spawn  (line 5315, @0x00000000023d6e10, libserver.so)
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger, CBaseEntity::SetTransmitState
void __fastcall CPostProcessingVolume::Spawn(CPostProcessingVolume *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
  CBaseEntity::SetTransmitState(this, 4);
}


// CPostProcessingVolume::UpdateTransmitState  (line 5323, @0x00000000023bb740, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPostProcessingVolume::UpdateTransmitState(CPostProcessingVolume *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// showtriggers_toggle  (line 5343, @0x00000000023bcfc0, libserver.so)  // inlines: Arg, ClassMatches, FClassnameIs, FirstEnt, IsTriggerClass, operator[]
// calls: CGameEntitySystem::NextEnt, CBaseEntity::ClearDebugBits, __dynamic_cast, CEntityIdentity::ClassMatches, CBaseEntity::GetDebugBits, CBaseEntity::SetDebugBits
// globals: `typeinfo for'CBaseTrigger
void __fastcall showtriggers_toggle(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *i; // rbx
  const char *v4; // rsi

  for ( i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
        i != 0;
        i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i) )
  {
    if ( __dynamic_cast(i, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseTrigger, 0) != 0
      && (args->m_nArgc <= 1
       || (v4 = args->m_ppArgv[1]) == 0
       || *v4 == 0
       || CEntityIdentity::ClassMatches(i->m_pEntity, v4)) )
    {
      if ( (CBaseEntity::GetDebugBits(i) & 0x2000) != 0 )
        CBaseEntity::ClearDebugBits(i, 0x2000u);
      else
        CBaseEntity::SetDebugBits(i, 0x2000u);
    }
  }
}


// ChangeLevel_WasTriggered  (line 5383, @0x00000000023d2550, libserver.so)
// callers: CSource2Server::GameFrame
// globals: g_pTriggeredChangeLevel
bool __cdecl ChangeLevel_WasTriggered()
{
  return g_pTriggeredChangeLevel != 0;
}


// ChangeLevel_ChangeLevelNow  (line 5393, @0x00000000023e5130, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CChangeLevel::ChangeLevelNow
// callers: CSource2Server::GameFrame
// globals: g_hChangeLevelActivator, CEntityHandle::gm_pEntityList, g_pTriggeredChangeLevel
void __cdecl ChangeLevel_ChangeLevelNow()
{
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rdx

  m_pInstance = 0;
  if ( g_hChangeLevelActivator.m_Index + 2 > 1 )
  {
    v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hChangeLevelActivator.m_Index) >> 9) & 0x3F];
    if ( v1 != 0 )
    {
      v2 = &v1[g_hChangeLevelActivator.m_Index & 0x1FF];
      if ( v2 != 0 && g_hChangeLevelActivator.m_Index == v2->m_EHandle.m_Index )
        m_pInstance = v2->m_pInstance;
    }
  }
  CChangeLevel::ChangeLevelNow(g_pTriggeredChangeLevel, m_pInstance);
  g_pTriggeredChangeLevel = 0;
}


