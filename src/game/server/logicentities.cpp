// Reconstructed from DWARF by pahole; not original source.

// src/game/server/logicentities.cpp:37
class CLogicScript : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;
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
	CLogicScript(CLogicScript &);
	CLogicScript(CLogicScript &);
	CLogicScript();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CLogicScript();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[4] GetScriptDesc
	// vtable[8] Spawn
	// sizeof = 776
};

// src/game/server/logicentities.cpp:120
class CTimerEntity : public CLogicalEntity {
public:

private:

	COutputEvent m_OnTimer;  // +0x308
	COutputEvent m_OnTimerHigh;  // +0x320
	COutputEvent m_OnTimerLow;  // +0x338
	int m_iDisabled;  // +0x350
	float m_flInitialDelay;  // +0x354
	float m_flRefireTime;  // +0x358
	bool m_bUpDownState;  // +0x35c

	int m_iUseRandomTime;  // +0x360
	float m_flLowerRandomBound;  // +0x364
	float m_flUpperRandomBound;  // +0x368

	static datamap_t m_DataMap;
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
	CTimerEntity(CTimerEntity &);
	CTimerEntity(CTimerEntity &);
	CTimerEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	void Toggle();
	void Enable();
	void Disable();
	void FireTimer();
	virtual int DrawDebugTextOverlays(uint64, int);
	void InputToggle(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void InputFireTimer(inputdata_t &);
	void InputRefireTime(inputdata_t &);
	void InputResetTimer(inputdata_t &);
	void InputAddToTimer(inputdata_t &);
	void InputSubtractFromTimer(inputdata_t &);
	void ResetTimer();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTimerEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[117] Think
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 880
};

// src/game/server/logicentities.cpp:495
class CLogicLineToEntity : public CLogicalEntity {
public:

private:

	COutputVector m_Line;  // +0x308

	static datamap_t m_DataMap;

	string_t m_SourceName;  // +0x330
	EHANDLE m_StartEntity;  // +0x338
	EHANDLE m_EndEntity;  // +0x33c
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
	CLogicLineToEntity(CLogicLineToEntity &);
	CLogicLineToEntity(CLogicLineToEntity &);
	CLogicLineToEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Activate(ActivateType_t);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicLineToEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[10] Activate
	// vtable[8] Spawn
	// vtable[117] Think
	// vtable[34] GetDataDescMap
	// sizeof = 832
};

// src/game/server/logicentities.cpp:616
class CMathRemap : public CLogicalEntity {
public:

private:

	float m_flInMin;  // +0x308
	float m_flInMax;  // +0x30c
	float m_flOut1;  // +0x310
	float m_flOut2;  // +0x314
	float m_flOldInValue;  // +0x318
	bool m_bEnabled;  // +0x31c

	COutputFloat m_OutValue;  // +0x320
	COutputEvent m_OnRoseAboveMin;  // +0x340
	COutputEvent m_OnRoseAboveMax;  // +0x358
	COutputEvent m_OnFellBelowMin;  // +0x370
	COutputEvent m_OnFellBelowMax;  // +0x388

	static datamap_t m_DataMap;
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
	CMathRemap(CMathRemap &);
	CMathRemap(CMathRemap &);
	CMathRemap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void InputValue(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CMathRemap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 928
};

// src/game/server/logicentities.cpp:795
class CMathColorBlend : public CLogicalEntity {
public:

private:

protected:

	float m_flInMin;  // +0x308
	float m_flInMax;  // +0x30c
	COutputColor32 m_OutValue;  // +0x318

	static datamap_t m_DataMap;
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
	CMathColorBlend(CMathColorBlend &);
	CMathColorBlend(CMathColorBlend &);
	CMathColorBlend();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void InputValue(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CMathColorBlend();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 824
};

// src/game/server/logicentities.cpp:927
class CEnvGlobal : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	COutputInt m_outCounter;  // +0x308
	string_t m_globalstate;  // +0x328
	int m_triggermode;  // +0x330
	int m_initialstate;  // +0x334
	int m_counter;  // +0x338
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
	CEnvGlobal(CEnvGlobal &);
	CEnvGlobal(CEnvGlobal &);
	CEnvGlobal();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputRemove(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputSetCounter(inputdata_t &);
	void InputAddToCounter(inputdata_t &);
	void InputGetCounter(inputdata_t &);
	virtual int DrawDebugTextOverlays(uint64, int);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvGlobal();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 832
};

// src/game/server/logicentities.cpp:1185
class CMultiSource : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_rgTriggered[32];  // +0x388
	COutputEvent m_OnTrigger;  // +0x408
	int m_iTotal;  // +0x420

	string_t m_globalstate;  // +0x428
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
	CMultiSource(CMultiSource &);
	CMultiSource(CMultiSource &);
	CMultiSource();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual int ObjectCaps();
	virtual bool IsTriggered(CBaseEntity *);
	void Register();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CMultiSource();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[108] Use
	// vtable[19] ObjectCaps
	// vtable[94] IsTriggered
	// vtable[34] GetDataDescMap
	// sizeof = 1072
};

// src/game/server/logicentities.cpp:1347
class CMathCounter : public CLogicalEntity {
public:

private:

	float m_flMin;  // +0x308
	float m_flMax;  // +0x30c
	bool m_bHitMin;  // +0x310
	bool m_bHitMax;  // +0x311
	bool m_bDisabled;  // +0x312

	COutputFloat m_OutValue;  // +0x318
	COutputFloat m_OnGetValue;  // +0x338
	COutputEvent m_OnHitMin;  // +0x358
	COutputEvent m_OnHitMax;  // +0x370
	COutputEvent m_OnChangedFromMin;  // +0x388
	COutputEvent m_OnChangedFromMax;  // +0x3a0

	static datamap_t m_DataMap;
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
	CMathCounter(CMathCounter &);
	CMathCounter(CMathCounter &);
	CMathCounter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual int DrawDebugTextOverlays(uint64, int);
	void UpdateOutValue(CBaseEntity *, float);
	void InputAdd(inputdata_t &);
	void InputDivide(inputdata_t &);
	void InputMultiply(inputdata_t &);
	void InputSetValue(inputdata_t &);
	void InputSetValueNoFire(inputdata_t &);
	void InputSubtract(inputdata_t &);
	void InputSetHitMax(inputdata_t &);
	void InputSetHitMin(inputdata_t &);
	void InputGetValue(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CMathCounter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 952
};

// src/game/server/logicentities.cpp:1735
class CLogicCase : public CLogicalEntity {
public:

private:

	int m_nShuffleCases;  // +0x388
	int m_nLastShuffleCase;  // +0x38c
	unsigned char m_uchShuffleCaseMap[16];  // +0x390
	COutputVariant m_OnDefault;  // +0x520

	static datamap_t m_DataMap;
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
	CLogicCase(CLogicCase &);
	CLogicCase(CLogicCase &);
	CLogicCase();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	int BuildCaseMap(unsigned char *);
	void InputValue(inputdata_t &);
	void InputPickRandom(inputdata_t &);
	void InputPickRandomShuffle(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicCase();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 1352
};

// src/game/server/logicentities.cpp:1940
class CLogicCompare : public CLogicalEntity {
public:

private:

	float m_flInValue;  // +0x308
	float m_flCompareValue;  // +0x30c
	COutputFloat m_OnLessThan;  // +0x310
	COutputFloat m_OnEqualTo;  // +0x330
	COutputFloat m_OnNotEqualTo;  // +0x350
	COutputFloat m_OnGreaterThan;  // +0x370

	static datamap_t m_DataMap;
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
	CLogicCompare(CLogicCompare &);
	CLogicCompare(CLogicCompare &);
	CLogicCompare();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual int DrawDebugTextOverlays(uint64, int);
	void InputSetValue(inputdata_t &);
	void InputSetValueCompare(inputdata_t &);
	void InputSetCompareValue(inputdata_t &);
	void InputCompare(inputdata_t &);
	void DoCompare(CBaseEntity *, float);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicCompare();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 912
};

// src/game/server/logicentities.cpp:2246
class CLogicAutosave : public CLogicalEntity {
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

	bool m_bForceNewLevelUnit;  // +0x308

	int m_minHitPoints;  // +0x30c
	int m_minHitPointsToCommit;  // +0x310
	typedef CLogicalEntity BaseClass;
	CLogicAutosave(CLogicAutosave &);
	CLogicAutosave(CLogicAutosave &);
	CLogicAutosave();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	void InputSave(inputdata_t &);
	void InputSaveDangerous(inputdata_t &);
	void InputSetMinHitpointsThreshold(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicAutosave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 792
};

// src/game/server/logicentities.cpp:2321
class CLogicActiveAutosave : public CLogicAutosave {
public:

private:

	static datamap_t m_DataMap;

	int m_TriggerHitPoints;  // +0x314
	float m_flTimeToTrigger;  // +0x318
	float m_flStartTime;  // +0x31c
	float m_flDangerousTime;  // +0x320
	typedef CLogicAutosave BaseClass;

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
	CLogicActiveAutosave(CLogicActiveAutosave &);
	CLogicActiveAutosave(CLogicActiveAutosave &);
	CLogicActiveAutosave();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void SaveThink();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicActiveAutosave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 808
};

// src/game/server/logicentities.cpp:2438
class CLogicCollisionPair : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_nameAttach1;  // +0x308
	string_t m_nameAttach2;  // +0x310
	bool m_disabled;  // +0x318
	bool m_succeeded;  // +0x319
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
	CLogicCollisionPair(CLogicCollisionPair &);
	CLogicCollisionPair(CLogicCollisionPair &);
	CLogicCollisionPair();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void EnableCollisions(bool);
	virtual void Activate(ActivateType_t);
	void InputDisableCollisions(inputdata_t &);
	void InputEnableCollisions(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicCollisionPair();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[10] Activate
	// vtable[34] GetDataDescMap
	// sizeof = 800
};

// src/game/server/logicentities.cpp:2518
class CLogicBranchList : public CLogicalEntity {
	enum LogicBranchListenerLastState_t {
		LOGIC_BRANCH_LISTENER_NOT_INIT = 0,
		LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
		LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
		LOGIC_BRANCH_LISTENER_MIXED = 0x3,
	};

public:

private:

	COutputEvent m_OnAllTrue;  // +0x3a8
	COutputEvent m_OnAllFalse;  // +0x3c0
	COutputEvent m_OnMixed;  // +0x3d8

	static datamap_t m_DataMap;
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
	CLogicBranchList(CLogicBranchList &);
	CLogicBranchList(CLogicBranchList &);
	CLogicBranchList();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual int DrawDebugTextOverlays(uint64, int);
	void DoTest(CBaseEntity *);
	void Input_OnLogicBranchRemoved(inputdata_t &);
	void Input_OnLogicBranchChanged(inputdata_t &);
	void InputTest(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicBranchList();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 1008
};

// src/game/server/logicentities.cpp:2731
class CLogicGameEvent : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iszEventName;  // +0x308
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
	CLogicGameEvent(CLogicGameEvent &);
	CLogicGameEvent(CLogicGameEvent &);
	CLogicGameEvent();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputFireEvent(inputdata_t &);
	virtual ~CLogicGameEvent();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLogicScript::~CLogicScript  (line 37, @0x00000000022a93d0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicScript::~CLogicScript(CLogicScript *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicScript::~CLogicScript  (line 37, @0x00000000022a93f0, libserver.so)  // inlines: ~CLogicScript, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicScript::~CLogicScript(CLogicScript *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicScript::GetEntityClass  (line 39, @0x00000000022a58b0, libserver.so)
CEntityClass *__cdecl CLogicScript::GetEntityClass()
{
  return g_pEntityCLogicScriptClass;
}


// CLogicScript::Schema_DynamicBinding  (line 39, @0x00000000022a58c0, libserver.so)
// globals: CLogicScript::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicScript::Schema_DynamicBinding(const CLogicScript *const this)
{
  return CLogicScript::s_pSchemaBinding;
}


// CLogicScript::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x00000000022a58d0, libserver.so)
// globals: CLogicScript::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicScript::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicScript::CEntityInstanceEntityClass *const this)
{
  return CLogicScript::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicScript::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x00000000022a58e0, libserver.so)  // inlines: Destruct<CLogicScript>
void __fastcall CLogicScript::CEntityInstanceEntityClass::DestructInstance(
        CLogicScript::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicScript::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x00000000022a5900, libserver.so)
void __fastcall CLogicScript::CEntityInstanceEntityClass::FreeInstance(
        CLogicScript::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicScript::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x00000000022a5920, libserver.so)
bool __fastcall CLogicScript::CEntityInstanceEntityClass::CanAllocate(
        const CLogicScript::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicScript::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x00000000022a5930, libserver.so)
// globals: CLogicScript::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicScript::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicScript::CEntityInstanceEntityClass *const this)
{
  return CLogicScript::s_pSchemaBinding;
}


// CLogicScript::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x00000000022a80c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicScript::CEntityInstanceEntityClass::AllocateInstance(
        CLogicScript::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CLogicScript::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x00000000022a8ba0, libserver.so)  // inlines: CLogicScript, CPointEntity, Construct<CLogicScript>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicScript::CEntityInstanceEntityClass::ConstructInstance(
        CLogicScript::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_405DB90;
  }
  return p;
}


// CLogicScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x00000000022ab090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicScript::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x00000000022ab0b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicScript::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicScript::GetEntityClassInternal  (line 39, @0x00000000022b0e20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CLogicScript>, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_script", "CLogicScript"
// globals: `guard variable for'CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass, CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass, __dso_handle, CLogicScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicScript::GetEntityClassInfo(void)::g_EntityCLogicScriptClassInfo, CLogicScript::GetEntityClassInfo(void)::g_EntityCLogicScriptClassInfo
CEntityClass *__cdecl CLogicScript::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass);
    CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass._vptr_CEntityClass = off_405DB10;
    __cxa_guard_release(&`guard variable for'CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass);
    __cxa_atexit(
      CLogicScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicScriptClass != 0 )
    return &CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass;
  if ( `guard variable for'CLogicScript::GetEntityClassInfo(void)::g_EntityCLogicScriptClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicScript::GetEntityClassInfo(void)::g_EntityCLogicScriptClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicScript::GetEntityClassInfo(void)::g_EntityCLogicScriptClassInfo,
      "CLogicScript",
      "logic_script",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicScript::GetEntityClassInfo(void)::g_EntityCLogicScriptClassInfo);
  }
  CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass.m_pClassInfo = &CLogicScript::GetEntityClassInfo(void)::g_EntityCLogicScriptClassInfo;
  CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass.m_pBaseClassInfo = CLogicScript::GetEntityClassInfo(void)::g_EntityCLogicScriptClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicScriptClass = &CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass;
  CLogicScript::GetEntityClassInfo(void)::g_EntityCLogicScriptClassInfo.m_pClass = &CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass;
  CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass.m_pScriptClassDesc = GetScriptDesc<CLogicScript>(0);
  g_pEntityCLogicScriptClass->m_pComponentOverrides = 0;
  return &CLogicScript::GetEntityClassInternal(void)::g_EntityCLogicScriptClass;
}


// CLogicScript::GetDataDescMap  (line 66, @0x0000000002283b00, libserver.so)
// globals: CLogicScript::m_DataMap
datamap_t *__fastcall CLogicScript::GetDataDescMap(CLogicScript *const this)
{
  return &CLogicScript::m_DataMap;
}


// CLogicScript::AddDatadescMetadataKeys  (line 66, @0x0000000002292560, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicScript::GetEntityClass(void)
void __fastcall CLogicScript::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicScript::GetEntityClass);
}


// CLogicScript::GetBaseMap  (line 66, @0x0000000002292580, libserver.so)
datamap_t *__cdecl CLogicScript::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CLogicScript>  (line 66, @0x0000000002292590, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicScript"
// globals: `guard variable for'DataMapInit<CLogicScript>(CLogicScript *)::nameHolder, CLogicScript::GetEntityClass(void), CLogicScript::m_DataMap, DataMapInit<CLogicScript>(CLogicScript *)::dataDesc, DataMapInit<CLogicScript>(CLogicScript *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicScript>(CLogicScript *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicScript>(CLogicScript *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicScript>(CLogicScript *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicScript>(CLogicScript *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicScript>(CLogicScript *)::nameHolder.m_pszBase = "CLogicScript";
    DataMapInit<CLogicScript>(CLogicScript *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicScript>(CLogicScript *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicScript>(CLogicScript *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicScript>(CLogicScript *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicScript>(CLogicScript *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicScript>(CLogicScript *)::nameHolder,
      &_dso_handle);
  }
  CLogicScript::m_DataMap.dataNumFields = 1;
  CLogicScript::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CLogicScript::m_DataMap.dataDesc = DataMapInit<CLogicScript>(CLogicScript *)::dataDesc;
  AddDatadescMetadataKeys(&CLogicScript::m_DataMap, CLogicScript::GetEntityClass);
  return &CLogicScript::m_DataMap;
}


// GetScriptDesc<CLogicScript>  (line 69, @0x0000000002292660, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ScriptClassDesc_t
// calls: operator new, GetScriptDesc<CBaseEntity>
// callers: CLogicScript::GetScriptDesc, CLogicScript::InitScriptDesc, CLogicScript::GetClassScriptDesc, CLogicScript::GetEntityClassInternal
// strings: "Container for game scripts.", "CLogicScript"
// globals: g_pCLogicScript_ScriptDesc
ScriptClassDesc_t *__fastcall GetScriptDesc<CLogicScript>(CLogicScript *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  ScriptClassDesc_t *Script; // rax
  IScriptInstanceHelper *pHelper; // rcx

  result = g_pCLogicScript_ScriptDesc;
  if ( g_pCLogicScript_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCLogicScript_ScriptDesc = v2;
    v2->m_pszDescription = "Container for game scripts.";
    v2->m_pszScriptName = "CLogicScript";
    v2->m_pszClassname = "CLogicScript";
    Script = GetScriptDesc<CBaseEntity>(0);
    v2->m_pBaseDesc = Script;
    if ( Script != 0 )
    {
      while ( 1 )
      {
        pHelper = Script->pHelper;
        if ( pHelper != 0 )
          break;
        Script = Script->m_pBaseDesc;
        if ( Script == 0 )
          return v2;
      }
      v2->pHelper = pHelper;
      return v2;
    }
    else
    {
      return v2;
    }
  }
  return result;
}


// CLogicScript::GetScriptDesc  (line 69, @0x0000000002292730, libserver.so)
// calls: GetScriptDesc<CLogicScript>
ScriptClassDesc_t *__fastcall CLogicScript::GetScriptDesc(CLogicScript *const this)
{
  return GetScriptDesc<CLogicScript>(this);
}


// CLogicScript::InitScriptDesc  (line 69, @0x0000000002292740, libserver.so)
// calls: GetScriptDesc<CLogicScript>
ScriptClassDesc_t *__cdecl CLogicScript::InitScriptDesc()
{
  return GetScriptDesc<CLogicScript>(0);
}


// CLogicScript::GetClassScriptDesc  (line 69, @0x0000000002292750, libserver.so)
// calls: GetScriptDesc<CLogicScript>
ScriptClassDesc_t *__cdecl CLogicScript::GetClassScriptDesc()
{
  return GetScriptDesc<CLogicScript>(0);
}


// CLogicScript::Spawn  (line 74, @0x000000000229dd00, libserver.so)  // inlines: Base, CVariantBase, Element, EntityToHScript, FindKeyHash, Free, Get, GetPrivateScriptScope, GetPublicScriptScope, GetVM, GetValue, GetValueString, MakeStringToken, SetValue, TempString, ToHScript, operator[], ~CVariantBase
// calls: CEntityKeyValues::HasValue, V_sprintf_safe<256ul>, MurmurHash2LowerCase, CVariantBase<CVariantDefaultAllocator>::Free, CPointEntity::Spawn, RegisterStringToken, CGameEntitySystem::FindEntityByName, CEntityInstance::CreatePublicScriptScope, CEntityInstance::ValidatePrivateScriptScope, _Unwind_Resume, __stack_chk_fail
// strings: "Group%02d", "EntityGroup"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CLogicScript::Spawn(CLogicScript *const this, const CEntityKeyValues *pKeyValues)
{
  int v2; // r13d
  uint32 v4; // eax
  EntityKeyId_t v5; // esi
  int v6; // r12d
  __int64 v7; // r8
  uint32 v8; // edi
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v11; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  CEntityVariant *p_m_value; // rax
  HSCRIPT m_hScope; // rax
  __int64 v16; // rdx
  void (__fastcall *v17)(IScriptVM *, uint64, HSCRIPT *, _QWORD, __int64); // rcx
  HSCRIPT v18; // rsi
  const char *m_uint64; // rdx
  CBaseEntity *EntityByName; // rax
  CEntityInstance *v22; // [rsp+20h] [rbp-170h]
  uint32 v23; // [rsp+20h] [rbp-170h]
  uint32 v24; // [rsp+28h] [rbp-168h]
  ScriptVariant_t entityGroup; // [rsp+30h] [rbp-160h] BYREF
  HSCRIPT v26; // [rsp+40h] [rbp-150h] BYREF
  __int16 v27; // [rsp+48h] [rbp-148h]
  __int16 v28; // [rsp+4Ah] [rbp-146h]
  char pGroupName[256]; // [rsp+50h] [rbp-140h] BYREF
  unsigned __int64 v30; // [rsp+158h] [rbp-38h]

  v2 = 16;
  v30 = __readfsqword(0x28u);
  while ( 1 )
  {
    V_sprintf_safe<256ul>(pGroupName, "Group%02d", v2);
    if ( pGroupName[0] != 0 )
      break;
    if ( CEntityKeyValues::HasValue(pKeyValues, 0) )
      goto LABEL_8;
LABEL_3:
    if ( --v2 == -1 )
      goto LABEL_28;
  }
  v4 = MurmurHash2LowerCase(pGroupName, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v24 = v4;
    RegisterStringToken(v4, pGroupName, 0, 1);
    v5.m_nHashCode = v24;
  }
  else
  {
    v5.m_nHashCode = v4;
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, v5) )
    goto LABEL_3;
LABEL_8:
  entityGroup.m_type = 0;
  entityGroup.m_flags = 0;
  entityGroup.m_uint64 = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, &entityGroup);
  v6 = 0;
  do
  {
    V_sprintf_safe<256ul>(pGroupName, "Group%02d", v6);
    v8 = 0;
    if ( pGroupName[0] != 0 )
    {
      v23 = MurmurHash2LowerCase(pGroupName, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
        RegisterStringToken(v23, pGroupName, 0, 1);
      v8 = v23;
    }
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_30:
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
      if ( CEntityKeyValues::sm_EmptyVariant.m_type != 30 )
        goto LABEL_21;
      goto LABEL_31;
    }
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    v11 = 0;
    v7 = m_nAllocated;
    while ( m_nAllocated == 0 )
    {
      if ( v8 == *(4 * v11) )
        goto LABEL_18;
LABEL_15:
      if ( m_nCount <= ++v11 )
        goto LABEL_30;
    }
    m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( m_nAllocated > 9 )
      m_pElements = pKeyValues->m_keyHashes.m_pElements;
    if ( v8 != m_pElements[v11] )
      goto LABEL_15;
LABEL_18:
    if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
      v13 = pKeyValues->m_keyValues.m_pElements;
    else
      v13 = 0;
    p_m_value = &v13[v11].m_value;
    if ( p_m_value->m_type != 30 )
    {
LABEL_21:
      m_hScope = 0;
      goto LABEL_22;
    }
LABEL_31:
    m_uint64 = p_m_value->m_uint64;
    if ( p_m_value->m_uint64 == 0 )
      goto LABEL_21;
    if ( *m_uint64 == 0 )
      goto LABEL_21;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, m_uint64, this, 0, 0, 0);
    v22 = EntityByName;
    if ( EntityByName == 0 )
      goto LABEL_21;
    m_hScope = EntityByName->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v22, 0);
      m_hScope = v22->m_pEntity->m_hPublicScope.m_hScope;
    }
LABEL_22:
    v16 = *g_pScriptVM;
    v28 = 0;
    v26 = m_hScope;
    v17 = *(v16 + 384);
    v27 = 31;
    v17(g_pScriptVM, entityGroup.m_uint64, &v26, v17, v7);
    if ( (v28 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v26);
    ++v6;
  }
  while ( v6 <= v2 );
  v18 = this->m_hPrivateScope.m_hScope;
  if ( v18 == 0 )
  {
    CEntityInstance::ValidatePrivateScriptScope(this);
    v18 = this->m_hPrivateScope.m_hScope;
  }
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, v18, "EntityGroup", &entityGroup);
  CVariantBase<CVariantDefaultAllocator>::Free(&entityGroup);
LABEL_28:
  CPointEntity::Spawn(this, pKeyValues);
}


// CTimerEntity::~CTimerEntity  (line 120, @0x00000000022a9580, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CTimerEntity::~CTimerEntity(CTimerEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CTimerEntity::~CTimerEntity  (line 120, @0x00000000022a95a0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity, ~CTimerEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CTimerEntity::~CTimerEntity(CTimerEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CTimerEntity::GetEntityClass  (line 122, @0x00000000022a5940, libserver.so)
CEntityClass *__cdecl CTimerEntity::GetEntityClass()
{
  return g_pEntityCTimerEntityClass;
}


// CTimerEntity::Schema_DynamicBinding  (line 122, @0x00000000022a5950, libserver.so)
// globals: CTimerEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTimerEntity::Schema_DynamicBinding(const CTimerEntity *const this)
{
  return CTimerEntity::s_pSchemaBinding;
}


// CTimerEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 122, @0x00000000022a5960, libserver.so)
// globals: CTimerEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTimerEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTimerEntity::CEntityInstanceEntityClass *const this)
{
  return CTimerEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTimerEntity::CEntityInstanceEntityClass::DestructInstance  (line 122, @0x00000000022a5970, libserver.so)  // inlines: Destruct<CTimerEntity>
void __fastcall CTimerEntity::CEntityInstanceEntityClass::DestructInstance(
        CTimerEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTimerEntity::CEntityInstanceEntityClass::FreeInstance  (line 122, @0x00000000022a5990, libserver.so)
void __fastcall CTimerEntity::CEntityInstanceEntityClass::FreeInstance(
        CTimerEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTimerEntity::CEntityInstanceEntityClass::CanAllocate  (line 122, @0x00000000022a59b0, libserver.so)
bool __fastcall CTimerEntity::CEntityInstanceEntityClass::CanAllocate(
        const CTimerEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTimerEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 122, @0x00000000022a59c0, libserver.so)
// globals: CTimerEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CTimerEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTimerEntity::CEntityInstanceEntityClass *const this)
{
  return CTimerEntity::s_pSchemaBinding;
}


// CTimerEntity::CEntityInstanceEntityClass::AllocateInstance  (line 122, @0x00000000022a8100, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTimerEntity::CEntityInstanceEntityClass::AllocateInstance(
        CTimerEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 880);
  memset(v1, 0, 0x370u);
  return v1;
}


// CTimerEntity::CEntityInstanceEntityClass::ConstructInstance  (line 122, @0x00000000022a8bd0, libserver.so)  // inlines: CEntityIOOutput, CLogicalEntity, CServerOnlyEntity, CTimerEntity, Construct<CTimerEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CTimerEntity::CEntityInstanceEntityClass::ConstructInstance(
        CTimerEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_405E2B0;
    *(p + 97) = off_3F7C190;
    *(p + 100) = off_3F7C190;
    *(p + 103) = off_3F7C190;
  }
  return p;
}


// CTimerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 122, @0x00000000022aaa50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTimerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTimerEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTimerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 122, @0x00000000022aaa70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTimerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTimerEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTimerEntity::GetEntityClassInternal  (line 122, @0x00000000022b0f70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_timer", "CTimerEntity"
// globals: `guard variable for'CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass, CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass, __dso_handle, CTimerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTimerEntity::GetEntityClassInfo(void)::g_EntityCTimerEntityClassInfo, CTimerEntity::GetEntityClassInfo(void)::g_EntityCTimerEntityClassInfo
CEntityClass *__cdecl CTimerEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass);
    CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass._vptr_CEntityClass = off_405E230;
    __cxa_guard_release(&`guard variable for'CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass);
    __cxa_atexit(
      CTimerEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCTimerEntityClass != 0 )
    return &CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass;
  if ( `guard variable for'CTimerEntity::GetEntityClassInfo(void)::g_EntityCTimerEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTimerEntity::GetEntityClassInfo(void)::g_EntityCTimerEntityClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTimerEntity::GetEntityClassInfo(void)::g_EntityCTimerEntityClassInfo,
      "CTimerEntity",
      "logic_timer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTimerEntity::GetEntityClassInfo(void)::g_EntityCTimerEntityClassInfo);
  }
  CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass.m_pClassInfo = &CTimerEntity::GetEntityClassInfo(void)::g_EntityCTimerEntityClassInfo;
  CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass.m_pBaseClassInfo = CTimerEntity::GetEntityClassInfo(void)::g_EntityCTimerEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCTimerEntityClass = &CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass;
  CTimerEntity::GetEntityClassInfo(void)::g_EntityCTimerEntityClassInfo.m_pClass = &CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass;
  CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCTimerEntityClass->m_pComponentOverrides = 0;
  return &CTimerEntity::GetEntityClassInternal(void)::g_EntityCTimerEntityClass;
}


// CTimerEntity::GetDataDescMap  (line 170, @0x0000000002283b10, libserver.so)
// globals: CTimerEntity::m_DataMap
datamap_t *__fastcall CTimerEntity::GetDataDescMap(CTimerEntity *const this)
{
  return &CTimerEntity::m_DataMap;
}


// CTimerEntity::AddDatadescMetadataKeys  (line 170, @0x0000000002292760, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTimerEntity::GetEntityClass(void)
void __fastcall CTimerEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTimerEntity::GetEntityClass);
}


// CTimerEntity::GetBaseMap  (line 170, @0x0000000002292780, libserver.so)
datamap_t *__cdecl CTimerEntity::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CTimerEntity>  (line 170, @0x0000000002292790, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CTimerEntity"
// globals: `guard variable for'DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder, `guard variable for'DataMapInit<CTimerEntity>(CTimerEntity *)::dataDesc, CTimerEntity::GetEntityClass(void), CTimerEntity::m_DataMap, DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTimerEntity>(CTimerEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder.m_pszBase = "CTimerEntity";
    DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTimerEntity>(CTimerEntity *)::nameHolder,
      &_dso_handle);
  }
  CTimerEntity::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTimerEntity>(CTimerEntity *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTimerEntity>(CTimerEntity *)::dataDesc) != 0 )
  {
    DataMapInit<CTimerEntity>(CTimerEntity *)::dataDesc[16].pSaveRestoreOps = eventFuncs;
    DataMapInit<CTimerEntity>(CTimerEntity *)::dataDesc[17].pSaveRestoreOps = eventFuncs;
    DataMapInit<CTimerEntity>(CTimerEntity *)::dataDesc[18].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTimerEntity>(CTimerEntity *)::dataDesc);
  }
  CTimerEntity::m_DataMap.dataNumFields = 18;
  CTimerEntity::m_DataMap.dataDesc = &DataMapInit<CTimerEntity>(CTimerEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTimerEntity::m_DataMap, CTimerEntity::GetEntityClass);
  return &CTimerEntity::m_DataMap;
}


// CTimerEntity::Spawn  (line 205, @0x00000000022893b0, libserver.so)  // inlines: Disable, Enable, ResetTimer, swap<float>
// calls: CLogicalEntity::Spawn, CBaseEntity::SetNextThink, CTimerEntity::ResetTimer
void __fastcall CTimerEntity::Spawn(CTimerEntity *const this, const CEntityKeyValues *pKeyValues)
{
  float m_flUpperRandomBound; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  __int64 v6; // xmm1_8
  float v7; // xmm0_4
  __int64 m_flRefireTime_low; // xmm1_8

  CLogicalEntity::Spawn(this, pKeyValues);
  if ( this->m_iUseRandomTime != 0 )
  {
    m_flUpperRandomBound = this->m_flUpperRandomBound;
    v4 = fabs(this->m_flLowerRandomBound);
    this->m_flLowerRandomBound = v4;
    v5 = fabs(m_flUpperRandomBound);
    this->m_flUpperRandomBound = v5;
    if ( v4 > v5 )
    {
      this->m_flUpperRandomBound = v4;
      v4 = v5;
      this->m_flLowerRandomBound = v5;
    }
    v6 = 0x80000000LL;
    v7 = -v4;
    if ( v7 > this->m_flInitialDelay )
      this->m_flInitialDelay = v7;
  }
  else
  {
    m_flRefireTime_low = LODWORD(this->m_flRefireTime);
    if ( *&m_flRefireTime_low < 0.0099999998 )
    {
      this->m_flRefireTime = 0.0099999998;
      v6 = 3156465418LL;
    }
    else
    {
      v6 = m_flRefireTime_low ^ 0x80000000LL;
    }
    if ( *&v6 > this->m_flInitialDelay )
      LODWORD(this->m_flInitialDelay) = v6;
  }
  if ( this->m_iDisabled == 0 && (this->m_flRefireTime > 0.0 || this->m_iUseRandomTime != 0) )
  {
    CTimerEntity::ResetTimer(this);
  }
  else
  {
    this->m_iDisabled = 1;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), *&v6, 0);
  }
}


// CTimerEntity::Think  (line 261, @0x000000000229ecb0, libserver.so)  // inlines: FireTimer
// calls: CTimerEntity::FireTimer
void __fastcall CTimerEntity::Think(CTimerEntity *const this)
{
  if ( this->m_iDisabled == 0 )
    CTimerEntity::FireTimer(this);
}


// CTimerEntity::ResetTimer  (line 270, @0x0000000002289250, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink
// callers: CTimerEntity::InputResetTimer, CTimerEntity::InputEnable, CTimerEntity::InputRefireTime, CTimerEntity::Spawn, CTimerEntity::ResetTimer, CTimerEntity::Enable, CTimerEntity::Toggle, CTimerEntity::FireTimer
void __fastcall CTimerEntity::ResetTimer(CTimerEntity *const this)
{
  double v1; // xmm1_8
  double v3; // xmm0_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this->m_iUseRandomTime != 0 )
    this->m_flRefireTime = (*(*random_valve + 8LL))(
                             random_valve,
                             this->m_flLowerRandomBound,
                             this->m_flUpperRandomBound);
  v3 = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v3 = LODWORD(v4->m_flCurrentTime);
  }
  *&v3 = (*&v3 + this->m_flRefireTime) + this->m_flInitialDelay;
  CBaseEntity::SetNextThink(this, v3, v1, 0);
}


// CTimerEntity::ResetTimer  (line 270, @0x00000000022928c0, libserver.so)
// calls: CTimerEntity::ResetTimer
void __fastcall CTimerEntity::ResetTimer(CTimerEntity *const this)
{
  if ( this->m_iDisabled == 0 )
    CTimerEntity::ResetTimer(this);
}


// CTimerEntity::Enable  (line 287, @0x00000000022928e0, libserver.so)  // inlines: ResetTimer
// calls: CTimerEntity::ResetTimer
void __fastcall CTimerEntity::Enable(CTimerEntity *const this)
{
  this->m_iDisabled = 0;
  CTimerEntity::ResetTimer(this);
}


// CTimerEntity::Disable  (line 297, @0x0000000002292900, libserver.so)
// calls: CBaseEntity::SetNextThink
void __fastcall CTimerEntity::Disable(CTimerEntity *const this)
{
  double v1; // xmm1_8

  this->m_iDisabled = 1;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v1, 0);
}


// CTimerEntity::Toggle  (line 306, @0x0000000002292920, libserver.so)  // inlines: Disable, Enable, ResetTimer
// calls: CBaseEntity::SetNextThink, CTimerEntity::ResetTimer
// callers: CTimerEntity::InputToggle
void __fastcall CTimerEntity::Toggle(CTimerEntity *const this)
{
  double v1; // xmm1_8

  if ( this->m_iDisabled != 0 )
  {
    this->m_iDisabled = 0;
    CTimerEntity::ResetTimer(this);
  }
  else
  {
    this->m_iDisabled = 1;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v1, 0);
  }
}


// CTimerEntity::FireTimer  (line 321, @0x000000000229eb20, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ResetTimer, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CTimerEntity::ResetTimer, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CTimerEntity::FireTimer, CTimerEntity::Think, CTimerEntity::InputFireTimer
void __fastcall CTimerEntity::FireTimer(CTimerEntity *const this)
{
  bool v2; // zf
  CVariant v3[2]; // [rsp-20h] [rbp-28h] BYREF

  this->m_flInitialDelay = 0.0;
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    v2 = !this->m_bUpDownState;
    v3[0].m_type = 0;
    v3[0].m_flags = 0;
    v3[0].m_uint64 = 0;
    if ( v2 )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_OnTimerLow, this, this, v3, 0.0);
      if ( (v3[0].m_flags & 1) == 0 )
      {
LABEL_5:
        this->m_bUpDownState ^= 1u;
        goto LABEL_6;
      }
    }
    else
    {
      CEntityIOOutput::FireOutputInternal(&this->m_OnTimerHigh, this, this, v3, 0.0);
      if ( (v3[0].m_flags & 1) == 0 )
        goto LABEL_5;
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v3[0].m_uint64);
    goto LABEL_5;
  }
  v3[0].m_type = 0;
  v3[0].m_flags = 0;
  v3[0].m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnTimer, this, this, v3, 0.0);
  if ( (v3[0].m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v3[0].m_uint64);
LABEL_6:
  if ( this->m_iDisabled == 0 )
    CTimerEntity::ResetTimer(this);
}


// CTimerEntity::FireTimer  (line 321, @0x000000000229ec90, libserver.so)
// calls: CTimerEntity::FireTimer
void __fastcall CTimerEntity::FireTimer(CTimerEntity *const this)
{
  if ( this->m_iDisabled == 0 )
    CTimerEntity::FireTimer(this);
}


// CTimerEntity::InputEnable  (line 360, @0x0000000002289320, libserver.so)  // inlines: Enable, ResetTimer
// calls: CTimerEntity::ResetTimer
void __fastcall CTimerEntity::InputEnable(CTimerEntity *const this, inputdata_t *const inputdata)
{
  this->m_iDisabled = 0;
  CTimerEntity::ResetTimer(this);
}


// CTimerEntity::InputDisable  (line 369, @0x00000000022849d0, libserver.so)  // inlines: Disable
// calls: CBaseEntity::SetNextThink
void __fastcall CTimerEntity::InputDisable(CTimerEntity *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8

  this->m_iDisabled = 1;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
}


// CTimerEntity::InputToggle  (line 377, @0x0000000002292960, libserver.so)
// calls: CTimerEntity::Toggle
void __fastcall CTimerEntity::InputToggle(CTimerEntity *const this, inputdata_t *const inputdata)
{
  CTimerEntity::Toggle(this);
}


// CTimerEntity::InputFireTimer  (line 385, @0x000000000229ecd0, libserver.so)  // inlines: FireTimer
// calls: CTimerEntity::FireTimer
void __fastcall CTimerEntity::InputFireTimer(CTimerEntity *const this, inputdata_t *const inputdata)
{
  if ( this->m_iDisabled == 0 )
    CTimerEntity::FireTimer(this);
}


// CTimerEntity::InputRefireTime  (line 396, @0x0000000002289340, libserver.so)  // inlines: Float, ResetTimer, operator float
// calls: CTimerEntity::ResetTimer
void __fastcall CTimerEntity::InputRefireTime(CTimerEntity *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v3; // xmm1_4
  int m_iDisabled; // r8d

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  v3 = fmaxf(0.0099999998, m_float64);
  if ( v3 != this->m_flRefireTime )
  {
    m_iDisabled = this->m_iDisabled;
    this->m_flRefireTime = v3;
    if ( m_iDisabled == 0 )
      CTimerEntity::ResetTimer(this);
  }
}


// CTimerEntity::InputResetTimer  (line 414, @0x0000000002289300, libserver.so)  // inlines: ResetTimer
// calls: CTimerEntity::ResetTimer
void __fastcall CTimerEntity::InputResetTimer(CTimerEntity *const this, inputdata_t *const inputdata)
{
  if ( this->m_iDisabled == 0 )
    CTimerEntity::ResetTimer(this);
}


// CTimerEntity::InputAddToTimer  (line 428, @0x0000000002285b90, libserver.so)  // inlines: Float, operator float
// calls: CBaseEntity::GetNextThink, CBaseEntity::SetNextThink
void __fastcall CTimerEntity::InputAddToTimer(CTimerEntity *const this, inputdata_t *const inputdata)
{
  double v4; // xmm0_8
  double m_float64; // xmm1_8

  if ( this->m_iDisabled == 0 )
  {
    *&v4 = CBaseEntity::GetNextThink(this, 0);
    if ( inputdata->value.m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      *&m_float64 = inputdata->value.m_uint;
    *&v4 = *&v4 + *&m_float64;
    CBaseEntity::SetNextThink(this, v4, m_float64, 0);
  }
}


// CTimerEntity::InputSubtractFromTimer  (line 444, @0x000000000228a240, libserver.so)  // inlines: Float, curtime, operator float
// calls: CBaseEntity::GetNextThink, CBaseEntity::SetNextThink
void __fastcall CTimerEntity::InputSubtractFromTimer(CTimerEntity *const this, inputdata_t *const inputdata)
{
  double v4; // xmm0_8
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v6; // r13
  int16 m_type; // ax
  double v8; // xmm3_8
  double v9; // xmm1_8
  float m_float64; // xmm2_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc v13; // rax
  unsigned int flNextThink; // [rsp+Ch] [rbp-24h]

  if ( this->m_iDisabled == 0 )
  {
    *&v4 = CBaseEntity::GetNextThink(this, 0);
    m_flCurrentTime = 0.0;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          flNextThink = LODWORD(v4);
          (m_pfnWarningFunc)(1, *&v4, 0.0);
          *&v4 = flNextThink;
        }
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    m_type = inputdata->value.m_type;
    HIDWORD(v8) = HIDWORD(v4);
    *&v8 = *&v4 - m_flCurrentTime;
    v9 = v8;
    if ( m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_float;
    if ( m_float64 >= *&v8 )
    {
      v12 = gpGlobals;
      v4 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v13 = gpGlobals->m_pfnWarningFunc;
          if ( v13 != 0 )
            (v13)(1, 0.0, v8);
        }
        *&v4 = LODWORD(v12->m_flCurrentTime);
      }
    }
    else
    {
      if ( m_type == 34 )
        v9 = inputdata->value.m_float64;
      else
        *&v9 = inputdata->value.m_uint;
      *&v4 = *&v4 - *&v9;
    }
    CBaseEntity::SetNextThink(this, v4, v9, 0);
  }
}


// CTimerEntity::DrawDebugTextOverlays  (line 466, @0x000000000228a9f0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, CBaseEntity::GetNextThink, __stack_chk_fail
// strings: "refire interval: %.2f sec", "      firing in: %.2f sec"
int __fastcall CTimerEntity::DrawDebugTextOverlays(
        CTimerEntity *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v5; // bl
  int v6; // r13d
  int v8; // r14d
  float NextThink; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v11; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float flNextThink; // [rsp+Ch] [rbp-244h]
  char tempstr[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v15; // [rsp+218h] [rbp-38h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v15 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 512, "refire interval: %.2f sec", this->m_flRefireTime);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    v8 = v6 + 1;
    if ( this->m_iDisabled == 0 )
    {
      NextThink = CBaseEntity::GetNextThink(this, 0);
      m_flCurrentTime = 0.0;
      v11 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            flNextThink = NextThink;
            (m_pfnWarningFunc)(1, NextThink, 0.0);
            NextThink = flNextThink;
          }
        }
        m_flCurrentTime = v11->m_flCurrentTime;
      }
      V_snprintf(tempstr, 512, "      firing in: %.2f sec", (NextThink - m_flCurrentTime));
      v8 = v6 + 2;
      CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    }
    return v8;
  }
  return v6;
}


// CLogicLineToEntity::~CLogicLineToEntity  (line 495, @0x00000000022a95d0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicLineToEntity::~CLogicLineToEntity(CLogicLineToEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicLineToEntity::~CLogicLineToEntity  (line 495, @0x00000000022a95f0, libserver.so)  // inlines: ~CLogicLineToEntity, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicLineToEntity::~CLogicLineToEntity(CLogicLineToEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicLineToEntity::GetEntityClass  (line 497, @0x00000000022a59d0, libserver.so)
CEntityClass *__cdecl CLogicLineToEntity::GetEntityClass()
{
  return g_pEntityCLogicLineToEntityClass;
}


// CLogicLineToEntity::Schema_DynamicBinding  (line 497, @0x00000000022a59e0, libserver.so)
// globals: CLogicLineToEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicLineToEntity::Schema_DynamicBinding(
        const CLogicLineToEntity *const this)
{
  return CLogicLineToEntity::s_pSchemaBinding;
}


// CLogicLineToEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 497, @0x00000000022a59f0, libserver.so)
// globals: CLogicLineToEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicLineToEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicLineToEntity::CEntityInstanceEntityClass *const this)
{
  return CLogicLineToEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicLineToEntity::CEntityInstanceEntityClass::DestructInstance  (line 497, @0x00000000022a5a00, libserver.so)  // inlines: Destruct<CLogicLineToEntity>
void __fastcall CLogicLineToEntity::CEntityInstanceEntityClass::DestructInstance(
        CLogicLineToEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicLineToEntity::CEntityInstanceEntityClass::FreeInstance  (line 497, @0x00000000022a5a20, libserver.so)
void __fastcall CLogicLineToEntity::CEntityInstanceEntityClass::FreeInstance(
        CLogicLineToEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicLineToEntity::CEntityInstanceEntityClass::CanAllocate  (line 497, @0x00000000022a5a40, libserver.so)
bool __fastcall CLogicLineToEntity::CEntityInstanceEntityClass::CanAllocate(
        const CLogicLineToEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicLineToEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 497, @0x00000000022a5a50, libserver.so)
// globals: CLogicLineToEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicLineToEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicLineToEntity::CEntityInstanceEntityClass *const this)
{
  return CLogicLineToEntity::s_pSchemaBinding;
}


// CLogicLineToEntity::CEntityInstanceEntityClass::AllocateInstance  (line 497, @0x00000000022a8140, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicLineToEntity::CEntityInstanceEntityClass::AllocateInstance(
        CLogicLineToEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CLogicLineToEntity::CEntityInstanceEntityClass::ConstructInstance  (line 497, @0x00000000022a8c20, libserver.so)  // inlines: CEntityHandle, CEntityOutputTemplate, CHandle, CLogicLineToEntity, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, Construct<CLogicLineToEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicLineToEntity::CEntityInstanceEntityClass::ConstructInstance(
        CLogicLineToEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 102) = 0;
    *p = &off_405E9F0;
    *(p + 97) = off_405E9D0;
    *(p + 206) = -1;
    *(p + 207) = -1;
  }
  return p;
}


// CLogicLineToEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 497, @0x00000000022aaaa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicLineToEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicLineToEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicLineToEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 497, @0x00000000022aaac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicLineToEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicLineToEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicLineToEntity::GetEntityClassInternal  (line 497, @0x00000000022b10c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_lineto", "CLogicLineToEntity"
// globals: `guard variable for'CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass, CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass, __dso_handle, CLogicLineToEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicLineToEntity::GetEntityClassInfo(void)::g_EntityCLogicLineToEntityClassInfo, CLogicLineToEntity::GetEntityClassInfo(void)::g_EntityCLogicLineToEntityClassInfo
CEntityClass *__cdecl CLogicLineToEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass);
    CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass._vptr_CEntityClass = off_405E950;
    __cxa_guard_release(&`guard variable for'CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass);
    __cxa_atexit(
      CLogicLineToEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicLineToEntityClass != 0 )
    return &CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass;
  if ( `guard variable for'CLogicLineToEntity::GetEntityClassInfo(void)::g_EntityCLogicLineToEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicLineToEntity::GetEntityClassInfo(void)::g_EntityCLogicLineToEntityClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicLineToEntity::GetEntityClassInfo(void)::g_EntityCLogicLineToEntityClassInfo,
      "CLogicLineToEntity",
      "logic_lineto",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicLineToEntity::GetEntityClassInfo(void)::g_EntityCLogicLineToEntityClassInfo);
  }
  CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass.m_pClassInfo = &CLogicLineToEntity::GetEntityClassInfo(void)::g_EntityCLogicLineToEntityClassInfo;
  CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass.m_pBaseClassInfo = CLogicLineToEntity::GetEntityClassInfo(void)::g_EntityCLogicLineToEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicLineToEntityClass = &CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass;
  CLogicLineToEntity::GetEntityClassInfo(void)::g_EntityCLogicLineToEntityClassInfo.m_pClass = &CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass;
  CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicLineToEntityClass->m_pComponentOverrides = 0;
  return &CLogicLineToEntity::GetEntityClassInternal(void)::g_EntityCLogicLineToEntityClass;
}


// CLogicLineToEntity::GetDataDescMap  (line 516, @0x0000000002283b20, libserver.so)
// globals: CLogicLineToEntity::m_DataMap
datamap_t *__fastcall CLogicLineToEntity::GetDataDescMap(CLogicLineToEntity *const this)
{
  return &CLogicLineToEntity::m_DataMap;
}


// CLogicLineToEntity::AddDatadescMetadataKeys  (line 516, @0x0000000002292970, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicLineToEntity::GetEntityClass(void)
void __fastcall CLogicLineToEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicLineToEntity::GetEntityClass);
}


// CLogicLineToEntity::GetBaseMap  (line 516, @0x0000000002292990, libserver.so)
datamap_t *__cdecl CLogicLineToEntity::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicLineToEntity>  (line 516, @0x00000000022929a0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicLineToEntity"
// globals: `guard variable for'DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder, `guard variable for'DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::dataDesc, CLogicLineToEntity::GetEntityClass(void), CLogicLineToEntity::m_DataMap, DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder.m_pszBase = "CLogicLineToEntity";
    DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::nameHolder,
      &_dso_handle);
  }
  CLogicLineToEntity::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::dataDesc) != 0 )
  {
    DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::dataDesc[4].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::dataDesc);
  }
  CLogicLineToEntity::m_DataMap.dataNumFields = 4;
  CLogicLineToEntity::m_DataMap.dataDesc = &DataMapInit<CLogicLineToEntity>(CLogicLineToEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicLineToEntity::m_DataMap, CLogicLineToEntity::GetEntityClass);
  return &CLogicLineToEntity::m_DataMap;
}


// CLogicLineToEntity::Activate  (line 534, @0x000000000228a600, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator!=, operator=, operator==<CBaseEntity>
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, Warning
// strings: "logic_lineto - Source not found or source with no origin!\n", "logic_lineto - Target not found or target with no origin!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicLineToEntity::Activate(CLogicLineToEntity *const this, ActivateType_t activateType)
{
  CEntityIdentity *v3; // rax
  __int16 v4; // si
  int v5; // edx
  UtlSymLargeId_t m_Id; // rdx
  int v7; // edx
  __int16 v8; // cx
  CBaseEntity *v9; // rax
  CConcreteEntityList *v10; // rsi
  CEntityIdentity *v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  __int64 v16; // rcx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  int v19; // eax
  __int16 v20; // cx
  CBaseEntity *EntityByName; // rax
  CConcreteEntityList *v22; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v24; // eax
  __int16 v25; // cx
  uint32 v26; // eax
  CEntityIdentity *v27; // rdx
  __int64 v28; // rcx
  CEntityIdentity *v29; // rdx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  if ( this->m_target.u.m_Id == 0 )
  {
    if ( this != 0 )
      goto LABEL_3;
    goto LABEL_34;
  }
  iszName.u.m_Id = this->m_target.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( EntityByName == 0 || (m_pEntity = EntityByName->m_pEntity) == 0 )
  {
    this->m_EndEntity.m_Index = -1;
    goto LABEL_33;
  }
  v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v25 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v22 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_EndEntity.m_Index) = v25 | this->m_EndEntity.m_Index & 0x8000;
  v26 = (v24 << 15) | this->m_EndEntity.m_Index & 0x7FFF;
  this->m_EndEntity.m_Index = v26;
  if ( v26 + 2 <= 1
    || (v27 = v22->m_pIdentityChunks[(LOWORD(this->m_EndEntity.m_Index) >> 9) & 0x3F]) == 0
    || (v28 = this->m_EndEntity.m_Index & 0x1FF, v22 = (8 * v28), (v29 = &v27[v28]) == 0)
    || v29->m_EHandle.m_Index != v26
    || v29->m_pInstance == 0 )
  {
LABEL_33:
    Warning("logic_lineto - Target not found or target with no origin!\n", v22);
    if ( this != 0 )
    {
LABEL_3:
      v3 = this->m_pEntity;
      if ( v3 != 0 )
      {
        v4 = 0x7FFF;
        v5 = (v3->m_EHandle.m_Index >> 15) - (v3->m_flags & 1);
        if ( v3->m_EHandle.m_Index != -1 )
          v4 = v3->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_EndEntity.m_Index) = v4 | this->m_EndEntity.m_Index & 0x8000;
        this->m_EndEntity.m_Index = (v5 << 15) | this->m_EndEntity.m_Index & 0x7FFF;
        m_Id = this->m_SourceName.u.m_Id;
        if ( m_Id == 0 )
          goto LABEL_7;
        goto LABEL_12;
      }
    }
LABEL_34:
    this->m_EndEntity.m_Index = -1;
  }
  m_Id = this->m_SourceName.u.m_Id;
  if ( m_Id == 0 )
  {
    if ( this != 0 )
    {
      v3 = this->m_pEntity;
LABEL_7:
      if ( v3 != 0 )
      {
        v7 = (v3->m_EHandle.m_Index >> 15) - (v3->m_flags & 1);
        if ( v3->m_EHandle.m_Index == -1 )
          v8 = 0x7FFF;
        else
          v8 = v3->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_StartEntity.m_Index) = v8 | this->m_StartEntity.m_Index & 0x8000;
        this->m_StartEntity.m_Index = (v7 << 15) | this->m_StartEntity.m_Index & 0x7FFF;
        return;
      }
    }
LABEL_39:
    this->m_StartEntity.m_Index = -1;
    return;
  }
LABEL_12:
  iszName.u.m_Id = m_Id;
  v9 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( v9 != 0 && (v11 = v9->m_pEntity) != 0 )
  {
    v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
    v13 = 0x7FFF;
    if ( v11->m_EHandle.m_Index != -1 )
      v13 = v11->m_EHandle.m_Index & 0x7FFF;
    v10 = CEntityHandle::gm_pEntityList;
    LOWORD(this->m_StartEntity.m_Index) = v13 | this->m_StartEntity.m_Index & 0x8000;
    v14 = (v12 << 15) | this->m_StartEntity.m_Index & 0x7FFF;
    this->m_StartEntity.m_Index = v14;
    if ( v14 + 2 > 1 )
    {
      v15 = v10->m_pIdentityChunks[(LOWORD(this->m_StartEntity.m_Index) >> 9) & 0x3F];
      if ( v15 != 0 )
      {
        v16 = this->m_StartEntity.m_Index & 0x1FF;
        v10 = (8 * v16);
        v17 = &v15[v16];
        if ( v17 != 0 && v14 == v17->m_EHandle.m_Index && v17->m_pInstance != 0 )
          return;
      }
    }
  }
  else
  {
    this->m_StartEntity.m_Index = -1;
  }
  Warning("logic_lineto - Source not found or source with no origin!\n", v10);
  if ( this == 0 )
    goto LABEL_39;
  v18 = this->m_pEntity;
  if ( v18 == 0 )
    goto LABEL_39;
  v19 = (v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1);
  if ( v18->m_EHandle.m_Index == -1 )
    v20 = 0x7FFF;
  else
    v20 = v18->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_StartEntity.m_Index) = v20 | this->m_StartEntity.m_Index & 0x8000;
  this->m_StartEntity.m_Index = (v19 << 15) | this->m_StartEntity.m_Index & 0x7FFF;
}


// CLogicLineToEntity::Spawn  (line 579, @0x00000000022891d0, libserver.so)  // inlines: curtime
// calls: CLogicalEntity::Spawn, CBaseEntity::SetNextThink
void __fastcall CLogicLineToEntity::Spawn(CLogicLineToEntity *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CLogicalEntity::Spawn(this, pKeyValues);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v4->m_flCurrentTime + 0.0099999998)), v3, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1008981770), v3, 0);
  }
}


// CLogicLineToEntity::Think  (line 590, @0x000000000229e1b0, libserver.so)  // inlines: CVariantBase, CopyData<Vector>, FireOutput<Vector>, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, VectorSubtract, curtime, operator CEntityInstance*, operator=, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::SetNextThink, CBaseEntity::GetAbsOrigin, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicLineToEntity::Think(CLogicLineToEntity *const this)
{
  const CBaseEntity *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  double v11; // xmm1_8
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc v13; // rax
  __int64 v14; // xmm0_8
  const CBaseEntity *v15; // rdi
  const Vector *AbsOrigin; // r12
  const Vector *v17; // rax
  vec_t v18; // xmm0_4
  vec_t v19; // xmm1_4
  vec_t v20; // xmm2_4
  CGlobalVars *v21; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_pInstance = 0;
  m_Index = this->m_EndEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_EndEntity.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_EndEntity.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  v6 = this->m_StartEntity.m_Index;
  if ( v6 + 2 > 1
    && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_StartEntity.m_Index) >> 9) & 0x3F]) != 0
    && (v8 = &v7[this->m_StartEntity.m_Index & 0x1FF]) != 0
    && v6 == v8->m_EHandle.m_Index
    && (v15 = v8->m_pInstance, m_pInstance != 0)
    && v15 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
    v17 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v18 = v17->z - AbsOrigin->z;
    v19 = v17->y - AbsOrigin->y;
    v20 = v17->x - AbsOrigin->x;
    value.m_flags = 0;
    this->m_Line.m_Value.z = v18;
    this->m_Line.m_Value.y = v19;
    this->m_Line.m_Value.x = v20;
    value.m_type = 3;
    value.m_uint64 = &this->m_Line.m_Value;
    CEntityIOOutput::FireOutputInternal(&this->m_Line, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    v21 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v14) = 0;
      *&v14 = v21->m_flCurrentTime + 0.0099999998;
    }
    else
    {
      v14 = 1008981770;
    }
  }
  else
  {
    value.m_type = 3;
    value.m_flags = 0;
    y = vec3_origin.y;
    x = vec3_origin.x;
    this->m_Line.m_Value.z = vec3_origin.z;
    this->m_Line.m_Value.y = y;
    this->m_Line.m_Value.x = x;
    value.m_uint64 = &this->m_Line.m_Value;
    CEntityIOOutput::FireOutputInternal(&this->m_Line, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
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
      *&v14 = v12->m_flCurrentTime + 10.0;
    }
    else
    {
      v14 = 1092616192;
    }
  }
  CBaseEntity::SetNextThink(this, *&v14, v11, 0);
}


// CMathRemap::~CMathRemap  (line 616, @0x00000000022a9620, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CMathRemap::~CMathRemap(CMathRemap *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CMathRemap::~CMathRemap  (line 616, @0x00000000022a9640, libserver.so)  // inlines: ~CLogicalEntity, ~CMathRemap, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CMathRemap::~CMathRemap(CMathRemap *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CMathRemap::GetEntityClass  (line 618, @0x00000000022a5a60, libserver.so)
CEntityClass *__cdecl CMathRemap::GetEntityClass()
{
  return g_pEntityCMathRemapClass;
}


// CMathRemap::Schema_DynamicBinding  (line 618, @0x00000000022a5a70, libserver.so)
// globals: CMathRemap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMathRemap::Schema_DynamicBinding(const CMathRemap *const this)
{
  return CMathRemap::s_pSchemaBinding;
}


// CMathRemap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 618, @0x00000000022a5a80, libserver.so)
// globals: CMathRemap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMathRemap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMathRemap::CEntityInstanceEntityClass *const this)
{
  return CMathRemap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMathRemap::CEntityInstanceEntityClass::DestructInstance  (line 618, @0x00000000022a5a90, libserver.so)  // inlines: Destruct<CMathRemap>
void __fastcall CMathRemap::CEntityInstanceEntityClass::DestructInstance(
        CMathRemap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMathRemap::CEntityInstanceEntityClass::FreeInstance  (line 618, @0x00000000022a5ab0, libserver.so)
void __fastcall CMathRemap::CEntityInstanceEntityClass::FreeInstance(
        CMathRemap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMathRemap::CEntityInstanceEntityClass::CanAllocate  (line 618, @0x00000000022a5ad0, libserver.so)
bool __fastcall CMathRemap::CEntityInstanceEntityClass::CanAllocate(
        const CMathRemap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMathRemap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 618, @0x00000000022a5ae0, libserver.so)
// globals: CMathRemap::s_pSchemaBinding
const ISchemaBinding *__fastcall CMathRemap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMathRemap::CEntityInstanceEntityClass *const this)
{
  return CMathRemap::s_pSchemaBinding;
}


// CMathRemap::CEntityInstanceEntityClass::AllocateInstance  (line 618, @0x00000000022a8180, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMathRemap::CEntityInstanceEntityClass::AllocateInstance(
        CMathRemap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CMathRemap::CEntityInstanceEntityClass::ConstructInstance  (line 618, @0x00000000022a8c80, libserver.so)  // inlines: CEntityIOOutput, CEntityOutputTemplate, CLogicalEntity, CMathRemap, CServerOnlyEntity, Construct<CMathRemap>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CMathRemap::CEntityInstanceEntityClass::ConstructInstance(
        CMathRemap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_405F110;
    *(p + 100) = off_3FD2290;
    *(p + 104) = off_3F7C190;
    *(p + 107) = off_3F7C190;
    *(p + 110) = off_3F7C190;
    *(p + 113) = off_3F7C190;
  }
  return p;
}


// CMathRemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 618, @0x00000000022aaaf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMathRemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMathRemap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMathRemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 618, @0x00000000022aab10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMathRemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMathRemap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMathRemap::GetEntityClassInternal  (line 618, @0x00000000022b1210, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "math_remap", "CMathRemap"
// globals: `guard variable for'CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass, CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass, __dso_handle, CMathRemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMathRemap::GetEntityClassInfo(void)::g_EntityCMathRemapClassInfo, CMathRemap::GetEntityClassInfo(void)::g_EntityCMathRemapClassInfo
CEntityClass *__cdecl CMathRemap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass);
    CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass._vptr_CEntityClass = off_405F090;
    __cxa_guard_release(&`guard variable for'CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass);
    __cxa_atexit(
      CMathRemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass,
      &_dso_handle);
  }
  if ( g_pEntityCMathRemapClass != 0 )
    return &CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass;
  if ( `guard variable for'CMathRemap::GetEntityClassInfo(void)::g_EntityCMathRemapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMathRemap::GetEntityClassInfo(void)::g_EntityCMathRemapClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMathRemap::GetEntityClassInfo(void)::g_EntityCMathRemapClassInfo,
      "CMathRemap",
      "math_remap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMathRemap::GetEntityClassInfo(void)::g_EntityCMathRemapClassInfo);
  }
  CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass.m_pClassInfo = &CMathRemap::GetEntityClassInfo(void)::g_EntityCMathRemapClassInfo;
  CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass.m_pBaseClassInfo = CMathRemap::GetEntityClassInfo(void)::g_EntityCMathRemapClassInfo.m_pBaseClassInfo;
  g_pEntityCMathRemapClass = &CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass;
  CMathRemap::GetEntityClassInfo(void)::g_EntityCMathRemapClassInfo.m_pClass = &CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass;
  CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCMathRemapClass->m_pComponentOverrides = 0;
  return &CMathRemap::GetEntityClassInternal(void)::g_EntityCMathRemapClass;
}


// CMathRemap::GetDataDescMap  (line 652, @0x0000000002283b30, libserver.so)
// globals: CMathRemap::m_DataMap
datamap_t *__fastcall CMathRemap::GetDataDescMap(CMathRemap *const this)
{
  return &CMathRemap::m_DataMap;
}


// CMathRemap::AddDatadescMetadataKeys  (line 652, @0x0000000002292ac0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMathRemap::GetEntityClass(void)
void __fastcall CMathRemap::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMathRemap::GetEntityClass);
}


// CMathRemap::GetBaseMap  (line 652, @0x0000000002292ae0, libserver.so)
datamap_t *__cdecl CMathRemap::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CMathRemap>  (line 652, @0x0000000002292af0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CMathRemap"
// globals: `guard variable for'DataMapInit<CMathRemap>(CMathRemap *)::nameHolder, `guard variable for'DataMapInit<CMathRemap>(CMathRemap *)::dataDesc, CMathRemap::GetEntityClass(void), CMathRemap::m_DataMap, DataMapInit<CMathRemap>(CMathRemap *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMathRemap>(CMathRemap *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMathRemap>(CMathRemap *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMathRemap>(CMathRemap *)::nameHolder) != 0 )
  {
    DataMapInit<CMathRemap>(CMathRemap *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMathRemap>(CMathRemap *)::nameHolder.m_pszBase = "CMathRemap";
    DataMapInit<CMathRemap>(CMathRemap *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMathRemap>(CMathRemap *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMathRemap>(CMathRemap *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMathRemap>(CMathRemap *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMathRemap>(CMathRemap *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMathRemap>(CMathRemap *)::nameHolder,
      &_dso_handle);
  }
  CMathRemap::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CMathRemap>(CMathRemap *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMathRemap>(CMathRemap *)::dataDesc) != 0 )
  {
    DataMapInit<CMathRemap>(CMathRemap *)::dataDesc[2].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMathRemap>(CMathRemap *)::dataDesc[3].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMathRemap>(CMathRemap *)::dataDesc[4].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMathRemap>(CMathRemap *)::dataDesc[5].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMathRemap>(CMathRemap *)::dataDesc[6].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMathRemap>(CMathRemap *)::dataDesc);
  }
  CMathRemap::m_DataMap.dataNumFields = 14;
  CMathRemap::m_DataMap.dataDesc = &DataMapInit<CMathRemap>(CMathRemap *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMathRemap::m_DataMap, CMathRemap::GetEntityClass);
  return &CMathRemap::m_DataMap;
}


// CMathRemap::Spawn  (line 682, @0x00000000022849f0, libserver.so)
// calls: CLogicalEntity::Spawn
void __fastcall CMathRemap::Spawn(CMathRemap *const this, const CEntityKeyValues *pKeyValues)
{
  float m_flInMin; // xmm1_4
  float m_flInMax; // xmm0_4

  CLogicalEntity::Spawn(this, pKeyValues);
  m_flInMin = this->m_flInMin;
  m_flInMax = this->m_flInMax;
  if ( m_flInMin == m_flInMax )
  {
    this->m_flInMin = 0.0;
    this->m_flInMax = 1.0;
LABEL_3:
    this->m_bEnabled = 1;
    return;
  }
  if ( m_flInMin <= m_flInMax )
    goto LABEL_3;
  this->m_flInMin = m_flInMax;
  this->m_flInMax = m_flInMin;
  this->m_bEnabled = 1;
}


// CMathRemap::InputEnable  (line 711, @0x0000000002283b40, libserver.so)
void __fastcall CMathRemap::InputEnable(CMathRemap *const this, inputdata_t *const inputdata)
{
  this->m_bEnabled = 1;
}


// CMathRemap::InputDisable  (line 719, @0x0000000002283b50, libserver.so)
void __fastcall CMathRemap::InputDisable(CMathRemap *const this, inputdata_t *const inputdata)
{
  this->m_bEnabled = 0;
}


// CMathRemap::InputValue  (line 727, @0x000000000229f6b0, libserver.so)  // inlines: CVariantBase, FireOutput, FireOutput<float>, Float, Free, Set, operator float, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CMathRemap::InputValue(CMathRemap *const this, inputdata_t *const inputdata)
{
  float m_flInMin; // xmm0_4
  float m_flInMax; // xmm1_4
  float m_flOldInValue; // xmm2_4
  CBaseEntity *v7; // rdx
  bool v8; // zf
  unsigned int m_Value; // eax
  float m_flOut1; // xmm2_4
  float m_flOut2; // xmm0_4
  CBaseEntity *pActivator; // rsi
  CBaseEntity *v13; // rdx
  CBaseEntity *pCaller; // rdx
  CBaseEntity *v15; // rdx
  float m_float64; // [rsp+Ch] [rbp-34h]
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  m_flInMin = this->m_flInMin;
  if ( m_float64 < m_flInMin || (m_flInMax = this->m_flInMax) < m_float64 )
  {
    if ( m_flInMin > m_float64 )
    {
      if ( this->m_flOldInValue < m_flInMin )
        goto LABEL_22;
      pCaller = inputdata->pCaller;
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnFellBelowMin, this, pCaller, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_22;
      goto LABEL_34;
    }
    m_flInMax = this->m_flInMax;
    if ( m_flInMax < this->m_flOldInValue )
      goto LABEL_11;
    v15 = inputdata->pCaller;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnRoseAboveMax, this, v15, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      goto LABEL_34;
  }
  else
  {
    m_flOldInValue = this->m_flOldInValue;
    if ( m_flInMin <= m_flOldInValue )
    {
      if ( m_flOldInValue <= m_flInMax )
        goto LABEL_11;
      v7 = inputdata->pCaller;
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnFellBelowMax, this, v7, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_22;
      goto LABEL_34;
    }
    v13 = inputdata->pCaller;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnRoseAboveMin, this, v13, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
LABEL_34:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
LABEL_22:
  m_flInMax = this->m_flInMax;
LABEL_11:
  this->m_flOldInValue = m_float64;
  if ( m_float64 > m_flInMax )
  {
    v8 = m_flInMax == m_float64;
  }
  else
  {
    if ( this->m_flInMin > m_float64 )
      goto LABEL_14;
    v8 = 1;
  }
  if ( !v8 )
  {
LABEL_14:
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 1) != 0 )
      return;
    goto LABEL_15;
  }
  m_Value = this->m_spawnflags.m_Value;
LABEL_15:
  m_flOut1 = this->m_flOut1;
  m_flOut2 = (((m_float64 - this->m_flInMin) * (this->m_flOut2 - m_flOut1)) / (m_flInMax - this->m_flInMin)) + m_flOut1;
  if ( (m_Value & 2) != 0 )
  {
    if ( m_flOut2 <= this->m_flOut2 )
      m_flOut2 = fmaxf(m_flOut1, m_flOut2);
    else
      m_flOut2 = this->m_flOut2;
  }
  if ( this->m_bEnabled )
  {
    pActivator = inputdata->pActivator;
    this->m_OutValue.m_Value = m_flOut2;
    value.m_flags = 0;
    value.m_float = m_flOut2;
    value.m_type = 1;
    CEntityIOOutput::FireOutputInternal(&this->m_OutValue, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
}


// CMathColorBlend::~CMathColorBlend  (line 795, @0x00000000022a9670, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CMathColorBlend::~CMathColorBlend(CMathColorBlend *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CMathColorBlend::~CMathColorBlend  (line 795, @0x00000000022a9690, libserver.so)  // inlines: ~CLogicalEntity, ~CMathColorBlend, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CMathColorBlend::~CMathColorBlend(CMathColorBlend *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CMathColorBlend::GetEntityClass  (line 797, @0x00000000022a5af0, libserver.so)
CEntityClass *__cdecl CMathColorBlend::GetEntityClass()
{
  return g_pEntityCMathColorBlendClass;
}


// CMathColorBlend::Schema_DynamicBinding  (line 797, @0x00000000022a5b00, libserver.so)
// globals: CMathColorBlend::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMathColorBlend::Schema_DynamicBinding(const CMathColorBlend *const this)
{
  return CMathColorBlend::s_pSchemaBinding;
}


// CMathColorBlend::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 797, @0x00000000022a5b10, libserver.so)
// globals: CMathColorBlend::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMathColorBlend::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMathColorBlend::CEntityInstanceEntityClass *const this)
{
  return CMathColorBlend::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMathColorBlend::CEntityInstanceEntityClass::DestructInstance  (line 797, @0x00000000022a5b20, libserver.so)  // inlines: Destruct<CMathColorBlend>
void __fastcall CMathColorBlend::CEntityInstanceEntityClass::DestructInstance(
        CMathColorBlend::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMathColorBlend::CEntityInstanceEntityClass::FreeInstance  (line 797, @0x00000000022a5b40, libserver.so)
void __fastcall CMathColorBlend::CEntityInstanceEntityClass::FreeInstance(
        CMathColorBlend::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMathColorBlend::CEntityInstanceEntityClass::CanAllocate  (line 797, @0x00000000022a5b60, libserver.so)
bool __fastcall CMathColorBlend::CEntityInstanceEntityClass::CanAllocate(
        const CMathColorBlend::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMathColorBlend::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 797, @0x00000000022a5b70, libserver.so)
// globals: CMathColorBlend::s_pSchemaBinding
const ISchemaBinding *__fastcall CMathColorBlend::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMathColorBlend::CEntityInstanceEntityClass *const this)
{
  return CMathColorBlend::s_pSchemaBinding;
}


// CMathColorBlend::CEntityInstanceEntityClass::AllocateInstance  (line 797, @0x00000000022a81c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMathColorBlend::CEntityInstanceEntityClass::AllocateInstance(
        CMathColorBlend::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 824);
  memset(v1, 0, 0x338u);
  return v1;
}


// CMathColorBlend::CEntityInstanceEntityClass::ConstructInstance  (line 797, @0x00000000022a8ce0, libserver.so)  // inlines: CEntityOutputTemplate, CLogicalEntity, CMathColorBlend, CServerOnlyEntity, Color, Construct<CMathColorBlend>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CMathColorBlend::CEntityInstanceEntityClass::ConstructInstance(
        CMathColorBlend::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 196) = 0;
    *p = &off_405F850;
    *(p + 197) = 0;
    *(p + 99) = off_405F830;
    *(p + 204) = 0;
  }
  return p;
}


// CMathColorBlend::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 797, @0x00000000022aab40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMathColorBlend::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMathColorBlend::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMathColorBlend::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 797, @0x00000000022aab60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMathColorBlend::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMathColorBlend::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMathColorBlend::GetEntityClassInternal  (line 797, @0x00000000022b1360, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "math_colorblend", "CMathColorBlend"
// globals: `guard variable for'CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass, CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass, __dso_handle, CMathColorBlend::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMathColorBlend::GetEntityClassInfo(void)::g_EntityCMathColorBlendClassInfo, CMathColorBlend::GetEntityClassInfo(void)::g_EntityCMathColorBlendClassInfo
CEntityClass *__cdecl CMathColorBlend::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass);
    CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass._vptr_CEntityClass = off_405F7B0;
    __cxa_guard_release(&`guard variable for'CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass);
    __cxa_atexit(
      CMathColorBlend::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass,
      &_dso_handle);
  }
  if ( g_pEntityCMathColorBlendClass != 0 )
    return &CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass;
  if ( `guard variable for'CMathColorBlend::GetEntityClassInfo(void)::g_EntityCMathColorBlendClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMathColorBlend::GetEntityClassInfo(void)::g_EntityCMathColorBlendClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMathColorBlend::GetEntityClassInfo(void)::g_EntityCMathColorBlendClassInfo,
      "CMathColorBlend",
      "math_colorblend",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMathColorBlend::GetEntityClassInfo(void)::g_EntityCMathColorBlendClassInfo);
  }
  CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass.m_pClassInfo = &CMathColorBlend::GetEntityClassInfo(void)::g_EntityCMathColorBlendClassInfo;
  CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass.m_pBaseClassInfo = CMathColorBlend::GetEntityClassInfo(void)::g_EntityCMathColorBlendClassInfo.m_pBaseClassInfo;
  g_pEntityCMathColorBlendClass = &CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass;
  CMathColorBlend::GetEntityClassInfo(void)::g_EntityCMathColorBlendClassInfo.m_pClass = &CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass;
  CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCMathColorBlendClass->m_pComponentOverrides = 0;
  return &CMathColorBlend::GetEntityClassInternal(void)::g_EntityCMathColorBlendClass;
}


// CMathColorBlend::GetDataDescMap  (line 818, @0x0000000002283b60, libserver.so)
// globals: CMathColorBlend::m_DataMap
datamap_t *__fastcall CMathColorBlend::GetDataDescMap(CMathColorBlend *const this)
{
  return &CMathColorBlend::m_DataMap;
}


// CMathColorBlend::AddDatadescMetadataKeys  (line 818, @0x0000000002292c30, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMathColorBlend::GetEntityClass(void)
void __fastcall CMathColorBlend::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMathColorBlend::GetEntityClass);
}


// CMathColorBlend::GetBaseMap  (line 818, @0x0000000002292c50, libserver.so)
datamap_t *__cdecl CMathColorBlend::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CMathColorBlend>  (line 818, @0x0000000002292c60, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CMathColorBlend"
// globals: `guard variable for'DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder, `guard variable for'DataMapInit<CMathColorBlend>(CMathColorBlend *)::dataDesc, CMathColorBlend::GetEntityClass(void), CMathColorBlend::m_DataMap, DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMathColorBlend>(CMathColorBlend *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder) != 0 )
  {
    DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder.m_pszBase = "CMathColorBlend";
    DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMathColorBlend>(CMathColorBlend *)::nameHolder,
      &_dso_handle);
  }
  CMathColorBlend::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CMathColorBlend>(CMathColorBlend *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMathColorBlend>(CMathColorBlend *)::dataDesc) != 0 )
  {
    DataMapInit<CMathColorBlend>(CMathColorBlend *)::dataDesc[2].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMathColorBlend>(CMathColorBlend *)::dataDesc);
  }
  CMathColorBlend::m_DataMap.dataNumFields = 6;
  CMathColorBlend::m_DataMap.dataDesc = &DataMapInit<CMathColorBlend>(CMathColorBlend *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMathColorBlend::m_DataMap, CMathColorBlend::GetEntityClass);
  return &CMathColorBlend::m_DataMap;
}


// CMathColorBlend::Spawn  (line 837, @0x0000000002284a60, libserver.so)
// calls: CLogicalEntity::Spawn
void __fastcall CMathColorBlend::Spawn(CMathColorBlend *const this, const CEntityKeyValues *pKeyValues)
{
  float m_flInMin; // xmm1_4
  float m_flInMax; // xmm0_4

  CLogicalEntity::Spawn(this, pKeyValues);
  m_flInMin = this->m_flInMin;
  m_flInMax = this->m_flInMax;
  if ( m_flInMin == m_flInMax )
  {
    this->m_flInMin = 0.0;
    this->m_flInMax = 1.0;
  }
  else if ( m_flInMin > m_flInMax )
  {
    this->m_flInMin = m_flInMax;
    this->m_flInMax = m_flInMin;
  }
}


// CMathColorBlend::InputValue  (line 865, @0x000000000229db30, libserver.so)  // inlines: CVariantBase, Color, FireOutput<Color>, Float, Free, Set, SetAlpha, SetBlue, SetGreen, SetRawColor, SetRed, operator float, operator=, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CMathColorBlend::InputValue(CMathColorBlend *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float m_flInMax; // xmm1_4
  float m_flInMin; // xmm2_4
  float v5; // xmm0_4
  int v6; // r8d
  float v7; // xmm2_4
  CBaseEntity *pActivator; // rsi
  float v9; // xmm1_4
  unsigned __int16 v10; // ax
  float v11; // xmm0_4
  int v12; // eax
  int v13; // eax
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  m_flInMax = this->m_flInMax;
  if ( m_float64 > m_flInMax )
  {
    m_flInMin = this->m_flInMax;
  }
  else
  {
    m_flInMin = this->m_flInMin;
    if ( m_flInMin > m_float64 )
      goto LABEL_5;
    m_flInMin = m_float64;
  }
  if ( m_flInMin != m_float64 )
  {
LABEL_5:
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
      return;
  }
  v5 = this->m_flInMin;
  v6 = this->m_OutColor1._color[3];
  v7 = m_flInMin - v5;
  pActivator = inputdata->pActivator;
  v9 = m_flInMax - v5;
  LOBYTE(v10) = (this->m_OutColor1._color[0] + (((this->m_OutColor2._color[0] - this->m_OutColor1._color[0]) * v7) / v9));
  HIBYTE(v10) = (this->m_OutColor1._color[1] + (((this->m_OutColor2._color[1] - this->m_OutColor1._color[1]) * v7) / v9));
  v11 = ((this->m_OutColor2._color[3] - v6) * v7) / v9;
  v12 = ((this->m_OutColor1._color[2] + (((this->m_OutColor2._color[2] - this->m_OutColor1._color[2]) * v7) / v9)) << 16)
      | v10;
  value.m_flags = 0;
  v13 = ((v6 + v11) << 24) | v12;
  value.m_type = 9;
  this->m_OutValue.m_Value = v13;
  value.m_int = v13;
  CEntityIOOutput::FireOutputInternal(&this->m_OutValue, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CC_Global_Set  (line 893, @0x0000000002284cd0, libserver.so)  // inlines: Arg, atoi, operator[]
// calls: Msg, strtol, GlobalEntity_GetIndex, GlobalEntity_SetState, GlobalEntity_Add
// strings: "Usage: global_set <globalname> <state>: Sets the state of the given env_global (0 = OFF, 
void __fastcall CC_Global_Set(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  const char *v3; // rdi
  GLOBALESTATE v4; // r12
  int Index; // eax

  if ( args->m_nArgc <= 1 )
  {
    v2 = "";
    v3 = "";
  }
  else
  {
    v2 = args->m_ppArgv[1];
    if ( args->m_nArgc == 2 )
    {
      v3 = "";
    }
    else
    {
      v3 = args->m_ppArgv[2];
      if ( v3 == 0 )
      {
LABEL_4:
        Msg(
          "Usage: global_set <globalname> <state>: Sets the state of the given env_global (0 = OFF, 1 = ON, 2 = DEAD).\n");
        return;
      }
    }
    if ( v2 == 0 )
      goto LABEL_4;
  }
  v4 = strtol(v3, 0, 10);
  Index = GlobalEntity_GetIndex(v2);
  if ( Index < 0 )
    GlobalEntity_Add(v2, gpGlobals->mapname, v4);
  else
    GlobalEntity_SetState(Index, v4);
}


// CEnvGlobal::~CEnvGlobal  (line 927, @0x00000000022a96c0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvGlobal::~CEnvGlobal(CEnvGlobal *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvGlobal::~CEnvGlobal  (line 927, @0x00000000022a96e0, libserver.so)  // inlines: ~CEnvGlobal, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvGlobal::~CEnvGlobal(CEnvGlobal *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvGlobal::GetEntityClass  (line 929, @0x00000000022a5b80, libserver.so)
CEntityClass *__cdecl CEnvGlobal::GetEntityClass()
{
  return g_pEntityCEnvGlobalClass;
}


// CEnvGlobal::Schema_DynamicBinding  (line 929, @0x00000000022a5b90, libserver.so)
// globals: CEnvGlobal::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvGlobal::Schema_DynamicBinding(const CEnvGlobal *const this)
{
  return CEnvGlobal::s_pSchemaBinding;
}


// CEnvGlobal::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 929, @0x00000000022a5ba0, libserver.so)
// globals: CEnvGlobal::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvGlobal::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvGlobal::CEntityInstanceEntityClass *const this)
{
  return CEnvGlobal::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvGlobal::CEntityInstanceEntityClass::DestructInstance  (line 929, @0x00000000022a5bb0, libserver.so)  // inlines: Destruct<CEnvGlobal>
void __fastcall CEnvGlobal::CEntityInstanceEntityClass::DestructInstance(
        CEnvGlobal::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvGlobal::CEntityInstanceEntityClass::FreeInstance  (line 929, @0x00000000022a5bd0, libserver.so)
void __fastcall CEnvGlobal::CEntityInstanceEntityClass::FreeInstance(
        CEnvGlobal::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvGlobal::CEntityInstanceEntityClass::CanAllocate  (line 929, @0x00000000022a5bf0, libserver.so)
bool __fastcall CEnvGlobal::CEntityInstanceEntityClass::CanAllocate(
        const CEnvGlobal::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvGlobal::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 929, @0x00000000022a5c00, libserver.so)
// globals: CEnvGlobal::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvGlobal::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvGlobal::CEntityInstanceEntityClass *const this)
{
  return CEnvGlobal::s_pSchemaBinding;
}


// CEnvGlobal::CEntityInstanceEntityClass::AllocateInstance  (line 929, @0x00000000022a8200, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvGlobal::CEntityInstanceEntityClass::AllocateInstance(
        CEnvGlobal::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CEnvGlobal::CEntityInstanceEntityClass::ConstructInstance  (line 929, @0x00000000022a8d40, libserver.so)  // inlines: CEntityOutputTemplate, CEnvGlobal, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, Construct<CEnvGlobal>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvGlobal::CEntityInstanceEntityClass::ConstructInstance(
        CEnvGlobal::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 101) = 0;
    *p = &off_405FF70;
    *(p + 97) = off_405CAB0;
  }
  return p;
}


// CEnvGlobal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 929, @0x00000000022aab90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvGlobal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvGlobal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvGlobal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 929, @0x00000000022aabb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvGlobal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvGlobal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvGlobal::GetEntityClassInternal  (line 929, @0x00000000022b14b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "env_global", "CEnvGlobal"
// globals: `guard variable for'CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass, CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass, __dso_handle, CEnvGlobal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvGlobal::GetEntityClassInfo(void)::g_EntityCEnvGlobalClassInfo, CEnvGlobal::GetEntityClassInfo(void)::g_EntityCEnvGlobalClassInfo
CEntityClass *__cdecl CEnvGlobal::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass);
    CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass._vptr_CEntityClass = off_405FEF0;
    __cxa_guard_release(&`guard variable for'CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass);
    __cxa_atexit(
      CEnvGlobal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvGlobalClass != 0 )
    return &CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass;
  if ( `guard variable for'CEnvGlobal::GetEntityClassInfo(void)::g_EntityCEnvGlobalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvGlobal::GetEntityClassInfo(void)::g_EntityCEnvGlobalClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvGlobal::GetEntityClassInfo(void)::g_EntityCEnvGlobalClassInfo,
      "CEnvGlobal",
      "env_global",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvGlobal::GetEntityClassInfo(void)::g_EntityCEnvGlobalClassInfo);
  }
  CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass.m_pClassInfo = &CEnvGlobal::GetEntityClassInfo(void)::g_EntityCEnvGlobalClassInfo;
  CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass.m_pBaseClassInfo = CEnvGlobal::GetEntityClassInfo(void)::g_EntityCEnvGlobalClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvGlobalClass = &CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass;
  CEnvGlobal::GetEntityClassInfo(void)::g_EntityCEnvGlobalClassInfo.m_pClass = &CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass;
  CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvGlobalClass->m_pComponentOverrides = 0;
  return &CEnvGlobal::GetEntityClassInternal(void)::g_EntityCEnvGlobalClass;
}


// CEnvGlobal::GetDataDescMap  (line 956, @0x0000000002283b70, libserver.so)
// globals: CEnvGlobal::m_DataMap
datamap_t *__fastcall CEnvGlobal::GetDataDescMap(CEnvGlobal *const this)
{
  return &CEnvGlobal::m_DataMap;
}


// CEnvGlobal::AddDatadescMetadataKeys  (line 956, @0x0000000002292d80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvGlobal::GetEntityClass(void)
void __fastcall CEnvGlobal::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvGlobal::GetEntityClass);
}


// CEnvGlobal::GetBaseMap  (line 956, @0x0000000002292da0, libserver.so)
datamap_t *__cdecl CEnvGlobal::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CEnvGlobal>  (line 956, @0x0000000002292db0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CEnvGlobal"
// globals: `guard variable for'DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder, `guard variable for'DataMapInit<CEnvGlobal>(CEnvGlobal *)::dataDesc, CEnvGlobal::GetEntityClass(void), CEnvGlobal::m_DataMap, DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvGlobal>(CEnvGlobal *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder.m_pszBase = "CEnvGlobal";
    DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvGlobal>(CEnvGlobal *)::nameHolder,
      &_dso_handle);
  }
  CEnvGlobal::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvGlobal>(CEnvGlobal *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvGlobal>(CEnvGlobal *)::dataDesc) != 0 )
  {
    DataMapInit<CEnvGlobal>(CEnvGlobal *)::dataDesc[12].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvGlobal>(CEnvGlobal *)::dataDesc);
  }
  CEnvGlobal::m_DataMap.dataNumFields = 12;
  CEnvGlobal::m_DataMap.dataDesc = &DataMapInit<CEnvGlobal>(CEnvGlobal *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvGlobal::m_DataMap, CEnvGlobal::GetEntityClass);
  return &CEnvGlobal::m_DataMap;
}


// CEnvGlobal::Precache  (line 982, @0x00000000022a42b0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache
void __fastcall CEnvGlobal::Precache(CEnvGlobal *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
}


// CEnvGlobal::Spawn  (line 995, @0x00000000022882e0, libserver.so)  // inlines: CUtlSymbolLarge, GlobalEntity_GetIndex, GlobalEntity_IsInTable, GlobalEntity_SetCounter, IsNullString, IsValid, String, ToCStr, operator!
// calls: CLogicalEntity::Spawn, GlobalEntity_GetIndex, UTIL_Remove, GlobalEntity_SetCounter, GlobalEntity_Add
void __fastcall CEnvGlobal::Spawn(CEnvGlobal *const this, const CEntityKeyValues *pKeyValues)
{
  const char *m_pAsString; // rdi
  int m_counter; // r12d
  const char *v5; // rdi
  int Index; // eax
  const char *v7; // rdi

  CLogicalEntity::Spawn(this, pKeyValues);
  m_pAsString = this->m_globalstate.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
    {
      if ( GlobalEntity_GetIndex(m_pAsString) < 0 )
      {
        v7 = "";
        if ( this->m_globalstate.u.m_Id != 0 )
          v7 = this->m_globalstate.u.m_pAsString;
        GlobalEntity_Add(v7, gpGlobals->mapname, this->m_initialstate);
      }
      m_counter = this->m_counter;
      if ( m_counter != 0 )
      {
        v5 = "";
        if ( this->m_globalstate.u.m_Id != 0 )
          v5 = this->m_globalstate.u.m_pAsString;
        Index = GlobalEntity_GetIndex(v5);
        GlobalEntity_SetCounter(Index, m_counter);
      }
    }
  }
  else
  {
    UTIL_Remove(this);
  }
}


// CEnvGlobal::InputTurnOn  (line 1023, @0x0000000002288670, libserver.so)  // inlines: CUtlSymbolLarge, GlobalEntity_GetIndex, GlobalEntity_IsInTable, GlobalEntity_SetState, String, ToCStr
// calls: GlobalEntity_GetIndex, GlobalEntity_Add, GlobalEntity_SetState
void __fastcall CEnvGlobal::InputTurnOn(CEnvGlobal *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rax
  const char *v4; // rdi
  const char *v5; // rdi
  int Index; // eax

  m_pAsString = this->m_globalstate.u.m_pAsString;
  if ( m_pAsString == 0 )
    m_pAsString = "";
  if ( GlobalEntity_GetIndex(m_pAsString) >= 0 )
  {
    v5 = this->m_globalstate.u.m_pAsString;
    if ( v5 == 0 )
      v5 = "";
    Index = GlobalEntity_GetIndex(v5);
    GlobalEntity_SetState(Index, GLOBALESTATE::GLOBAL_ON);
  }
  else
  {
    v4 = this->m_globalstate.u.m_pAsString;
    if ( v4 == 0 )
      v4 = "";
    GlobalEntity_Add(v4, gpGlobals->mapname, GLOBALESTATE::GLOBAL_ON);
  }
}


// CEnvGlobal::InputTurnOff  (line 1039, @0x0000000002288700, libserver.so)  // inlines: CUtlSymbolLarge, GlobalEntity_GetIndex, GlobalEntity_IsInTable, GlobalEntity_SetState, String, ToCStr
// calls: GlobalEntity_GetIndex, GlobalEntity_Add, GlobalEntity_SetState
void __fastcall CEnvGlobal::InputTurnOff(CEnvGlobal *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rax
  const char *v4; // rdi
  const char *v5; // rdi
  int Index; // eax

  m_pAsString = this->m_globalstate.u.m_pAsString;
  if ( m_pAsString == 0 )
    m_pAsString = "";
  if ( GlobalEntity_GetIndex(m_pAsString) >= 0 )
  {
    v5 = this->m_globalstate.u.m_pAsString;
    if ( v5 == 0 )
      v5 = "";
    Index = GlobalEntity_GetIndex(v5);
    GlobalEntity_SetState(Index, GLOBALESTATE::GLOBAL_OFF);
  }
  else
  {
    v4 = this->m_globalstate.u.m_pAsString;
    if ( v4 == 0 )
      v4 = "";
    GlobalEntity_Add(v4, gpGlobals->mapname, GLOBALESTATE::GLOBAL_OFF);
  }
}


// CEnvGlobal::InputRemove  (line 1055, @0x00000000022885e0, libserver.so)  // inlines: CUtlSymbolLarge, GlobalEntity_GetIndex, GlobalEntity_IsInTable, GlobalEntity_SetState, String, ToCStr
// calls: GlobalEntity_GetIndex, GlobalEntity_Add, GlobalEntity_SetState
void __fastcall CEnvGlobal::InputRemove(CEnvGlobal *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rax
  const char *v4; // rdi
  const char *v5; // rdi
  int Index; // eax

  m_pAsString = this->m_globalstate.u.m_pAsString;
  if ( m_pAsString == 0 )
    m_pAsString = "";
  if ( GlobalEntity_GetIndex(m_pAsString) >= 0 )
  {
    v5 = this->m_globalstate.u.m_pAsString;
    if ( v5 == 0 )
      v5 = "";
    Index = GlobalEntity_GetIndex(v5);
    GlobalEntity_SetState(Index, GLOBALESTATE::GLOBAL_DEAD);
  }
  else
  {
    v4 = this->m_globalstate.u.m_pAsString;
    if ( v4 == 0 )
      v4 = "";
    GlobalEntity_Add(v4, gpGlobals->mapname, GLOBALESTATE::GLOBAL_DEAD);
  }
}


// CEnvGlobal::InputSetCounter  (line 1070, @0x0000000002284d80, libserver.so)  // inlines: CUtlSymbolLarge, GlobalEntity_GetIndex, GlobalEntity_IsInTable, GlobalEntity_SetCounter, Int, String, ToCStr, operator int
// calls: GlobalEntity_GetIndex, GlobalEntity_SetCounter, GlobalEntity_Add
void __fastcall CEnvGlobal::InputSetCounter(CEnvGlobal *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rax
  int16 m_type; // ax
  int m_float; // r12d
  const char *v7; // rdi
  int Index; // eax
  const char *mapname; // rsi

  m_pAsString = this->m_globalstate.u.m_pAsString;
  if ( m_pAsString == 0 )
    m_pAsString = "";
  if ( GlobalEntity_GetIndex(m_pAsString) < 0 )
  {
    mapname = gpGlobals->mapname;
    if ( this->m_globalstate.u.m_Id != 0 )
      GlobalEntity_Add(this->m_globalstate.u.m_pAsString, mapname, GLOBALESTATE::GLOBAL_ON);
    else
      GlobalEntity_Add("", mapname, GLOBALESTATE::GLOBAL_ON);
    m_type = inputdata->value.m_type;
    if ( m_type != 1 )
      goto LABEL_5;
LABEL_13:
    m_float = inputdata->value.m_float;
    goto LABEL_7;
  }
  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
    goto LABEL_13;
LABEL_5:
  if ( m_type == 34 )
    m_float = inputdata->value.m_float64;
  else
    m_float = inputdata->value.m_int;
LABEL_7:
  v7 = "";
  if ( this->m_globalstate.u.m_Id != 0 )
    v7 = this->m_globalstate.u.m_pAsString;
  Index = GlobalEntity_GetIndex(v7);
  GlobalEntity_SetCounter(Index, m_float);
}


// CEnvGlobal::InputAddToCounter  (line 1083, @0x0000000002284e70, libserver.so)  // inlines: CUtlSymbolLarge, GlobalEntity_AddToCounter, GlobalEntity_GetIndex, GlobalEntity_IsInTable, Int, String, ToCStr, operator int
// calls: GlobalEntity_GetIndex, GlobalEntity_AddToCounter, GlobalEntity_Add
void __fastcall CEnvGlobal::InputAddToCounter(CEnvGlobal *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rax
  int16 m_type; // ax
  int m_float; // r12d
  const char *v7; // rdi
  int Index; // eax
  const char *mapname; // rsi

  m_pAsString = this->m_globalstate.u.m_pAsString;
  if ( m_pAsString == 0 )
    m_pAsString = "";
  if ( GlobalEntity_GetIndex(m_pAsString) < 0 )
  {
    mapname = gpGlobals->mapname;
    if ( this->m_globalstate.u.m_Id != 0 )
      GlobalEntity_Add(this->m_globalstate.u.m_pAsString, mapname, GLOBALESTATE::GLOBAL_ON);
    else
      GlobalEntity_Add("", mapname, GLOBALESTATE::GLOBAL_ON);
    m_type = inputdata->value.m_type;
    if ( m_type != 1 )
      goto LABEL_5;
LABEL_13:
    m_float = inputdata->value.m_float;
    goto LABEL_7;
  }
  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
    goto LABEL_13;
LABEL_5:
  if ( m_type == 34 )
    m_float = inputdata->value.m_float64;
  else
    m_float = inputdata->value.m_int;
LABEL_7:
  v7 = "";
  if ( this->m_globalstate.u.m_Id != 0 )
    v7 = this->m_globalstate.u.m_pAsString;
  Index = GlobalEntity_GetIndex(v7);
  GlobalEntity_AddToCounter(Index, m_float);
}


// CEnvGlobal::InputGetCounter  (line 1096, @0x000000000229e4a0, libserver.so)  // inlines: CUtlSymbolLarge, CVariantBase, FireOutput<int>, Free, GlobalEntity_GetCounter, GlobalEntity_GetIndex, GlobalEntity_IsInTable, Set, String, ToCStr, ~CVariantBase
// calls: GlobalEntity_GetIndex, GlobalEntity_GetCounter, CEntityIOOutput::FireOutputInternal, GlobalEntity_Add, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CEnvGlobal::InputGetCounter(CEnvGlobal *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rax
  const char *v5; // rdi
  CBaseEntity *pActivator; // r13
  int Index; // eax
  int Counter; // eax
  const char *mapname; // rsi
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_pAsString = this->m_globalstate.u.m_pAsString;
  if ( m_pAsString == 0 )
    m_pAsString = "";
  if ( GlobalEntity_GetIndex(m_pAsString) < 0 )
  {
    mapname = gpGlobals->mapname;
    if ( this->m_globalstate.u.m_Id != 0 )
      GlobalEntity_Add(this->m_globalstate.u.m_pAsString, mapname, GLOBALESTATE::GLOBAL_ON);
    else
      GlobalEntity_Add("", mapname, GLOBALESTATE::GLOBAL_ON);
  }
  v5 = "";
  pActivator = inputdata->pActivator;
  if ( this->m_globalstate.u.m_Id != 0 )
    v5 = this->m_globalstate.u.m_pAsString;
  Index = GlobalEntity_GetIndex(v5);
  Counter = GlobalEntity_GetCounter(Index);
  value.m_type = 5;
  value.m_flags = 0;
  this->m_outCounter.m_Value = Counter;
  value.m_int = Counter;
  CEntityIOOutput::FireOutputInternal(&this->m_outCounter, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CEnvGlobal::InputToggle  (line 1110, @0x0000000002288490, libserver.so)  // inlines: CUtlSymbolLarge, GlobalEntity_GetIndex, GlobalEntity_GetState, GlobalEntity_IsInTable, GlobalEntity_SetState, String, ToCStr
// calls: GlobalEntity_GetIndex, GlobalEntity_GetState, GlobalEntity_Add, GlobalEntity_SetState
void __fastcall CEnvGlobal::InputToggle(CEnvGlobal *const this, inputdata_t *const inputdata)
{
  UtlSymLargeId_t m_Id; // rdx
  const char *v4; // rdi
  int Index; // eax
  GLOBALESTATE State; // al
  GLOBALESTATE v7; // r13
  const char *m_pAsString; // rax
  const char *v9; // rdi
  const char *v10; // rdi
  int v11; // eax

  m_Id = this->m_globalstate.u.m_Id;
  v4 = "";
  if ( m_Id != 0 )
    v4 = m_Id;
  Index = GlobalEntity_GetIndex(v4);
  State = GlobalEntity_GetState(Index);
  if ( State == GLOBALESTATE::GLOBAL_ON )
  {
    v7 = GLOBALESTATE::GLOBAL_OFF;
  }
  else
  {
    v7 = GLOBALESTATE::GLOBAL_ON;
    if ( State != GLOBALESTATE::GLOBAL_OFF )
      return;
  }
  m_pAsString = this->m_globalstate.u.m_pAsString;
  if ( m_pAsString == 0 )
    m_pAsString = "";
  if ( GlobalEntity_GetIndex(m_pAsString) >= 0 )
  {
    v10 = this->m_globalstate.u.m_pAsString;
    if ( v10 == 0 )
      v10 = "";
    v11 = GlobalEntity_GetIndex(v10);
    GlobalEntity_SetState(v11, v7);
  }
  else
  {
    v9 = this->m_globalstate.u.m_pAsString;
    if ( v9 == 0 )
      v9 = "";
    GlobalEntity_Add(v9, gpGlobals->mapname, v7);
  }
}


// CEnvGlobal::DrawDebugTextOverlays  (line 1144, @0x0000000002284b40, libserver.so)  // inlines: CUtlSymbolLarge, GlobalEntity_GetIndex, GlobalEntity_GetState, String, ToCStr, V_strncpy<long unsigned int>
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, GlobalEntity_GetIndex, GlobalEntity_GetState, _V_strncpy, __stack_chk_fail
// strings: "State: %s", "Value: OFF", "Value: DEAD", "Value: ON"
int __fastcall CEnvGlobal::DrawDebugTextOverlays(
        CEnvGlobal *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  const char *m_pAsString; // rcx
  int v8; // r14d
  const char *v9; // rdi
  int Index; // eax
  GLOBALESTATE State; // al
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v14; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v14 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    m_pAsString = "";
    if ( this->m_globalstate.u.m_Id != 0 )
      m_pAsString = this->m_globalstate.u.m_pAsString;
    V_snprintf(tempstr, 512, "State: %s", m_pAsString);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    v8 = v6 + 1;
    v9 = "";
    if ( this->m_globalstate.u.m_Id != 0 )
      v9 = this->m_globalstate.u.m_pAsString;
    Index = GlobalEntity_GetIndex(v9);
    State = GlobalEntity_GetState(Index);
    switch ( State )
    {
      case GLOBALESTATE::GLOBAL_ON:
        _V_strncpy(tempstr, "Value: ON", 512);
        break;
      case GLOBALESTATE::GLOBAL_DEAD:
        _V_strncpy(tempstr, "Value: DEAD", 512);
        break;
      case GLOBALESTATE::GLOBAL_OFF:
        _V_strncpy(tempstr, "Value: OFF", 512);
        break;
      default:
        break;
    }
    v6 += 2;
    CBaseEntity::EntityText(this, v8, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CMultiSource::~CMultiSource  (line 1185, @0x00000000022a9710, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CMultiSource::~CMultiSource(CMultiSource *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CMultiSource::~CMultiSource  (line 1185, @0x00000000022a9730, libserver.so)  // inlines: ~CLogicalEntity, ~CMultiSource, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CMultiSource::~CMultiSource(CMultiSource *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CMultiSource::GetEntityClass  (line 1187, @0x00000000022a5c10, libserver.so)
CEntityClass *__cdecl CMultiSource::GetEntityClass()
{
  return g_pEntityCMultiSourceClass;
}


// CMultiSource::Schema_DynamicBinding  (line 1187, @0x00000000022a5c20, libserver.so)
// globals: CMultiSource::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMultiSource::Schema_DynamicBinding(const CMultiSource *const this)
{
  return CMultiSource::s_pSchemaBinding;
}


// CMultiSource::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1187, @0x00000000022a5c30, libserver.so)
// globals: CMultiSource::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMultiSource::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMultiSource::CEntityInstanceEntityClass *const this)
{
  return CMultiSource::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMultiSource::CEntityInstanceEntityClass::DestructInstance  (line 1187, @0x00000000022a5c40, libserver.so)  // inlines: Destruct<CMultiSource>
void __fastcall CMultiSource::CEntityInstanceEntityClass::DestructInstance(
        CMultiSource::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMultiSource::CEntityInstanceEntityClass::FreeInstance  (line 1187, @0x00000000022a5c60, libserver.so)
void __fastcall CMultiSource::CEntityInstanceEntityClass::FreeInstance(
        CMultiSource::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMultiSource::CEntityInstanceEntityClass::CanAllocate  (line 1187, @0x00000000022a5c80, libserver.so)
bool __fastcall CMultiSource::CEntityInstanceEntityClass::CanAllocate(
        const CMultiSource::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMultiSource::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1187, @0x00000000022a5c90, libserver.so)
// globals: CMultiSource::s_pSchemaBinding
const ISchemaBinding *__fastcall CMultiSource::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMultiSource::CEntityInstanceEntityClass *const this)
{
  return CMultiSource::s_pSchemaBinding;
}


// CMultiSource::CEntityInstanceEntityClass::AllocateInstance  (line 1187, @0x00000000022a8240, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMultiSource::CEntityInstanceEntityClass::AllocateInstance(
        CMultiSource::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1072);
  memset(v1, 0, 0x430u);
  return v1;
}


// CMultiSource::CEntityInstanceEntityClass::ConstructInstance  (line 1187, @0x00000000022aa290, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CLogicalEntity, CMultiSource, CServerOnlyEntity, CUtlSymbolLarge, Construct<CMultiSource>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CMultiSource::CEntityInstanceEntityClass::ConstructInstance(
        CMultiSource::CEntityInstanceEntityClass *const this,
        void *p)
{
  _DWORD *v3; // rdx

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4060690;
    v3 = p + 776;
    do
      *v3++ = -1;
    while ( v3 != (p + 904) );
    *(p + 133) = 0;
    *(p + 129) = off_3F7C190;
  }
  return p;
}


// CMultiSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1187, @0x00000000022aabe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMultiSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMultiSource::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMultiSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1187, @0x00000000022aac00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMultiSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMultiSource::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMultiSource::GetEntityClassInternal  (line 1187, @0x00000000022b1600, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "multisource", "CMultiSource"
// globals: `guard variable for'CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass, CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass, __dso_handle, CMultiSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMultiSource::GetEntityClassInfo(void)::g_EntityCMultiSourceClassInfo, CMultiSource::GetEntityClassInfo(void)::g_EntityCMultiSourceClassInfo
CEntityClass *__cdecl CMultiSource::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass);
    CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass._vptr_CEntityClass = off_4060610;
    __cxa_guard_release(&`guard variable for'CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass);
    __cxa_atexit(
      CMultiSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass,
      &_dso_handle);
  }
  if ( g_pEntityCMultiSourceClass != 0 )
    return &CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass;
  if ( `guard variable for'CMultiSource::GetEntityClassInfo(void)::g_EntityCMultiSourceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMultiSource::GetEntityClassInfo(void)::g_EntityCMultiSourceClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMultiSource::GetEntityClassInfo(void)::g_EntityCMultiSourceClassInfo,
      "CMultiSource",
      "multisource",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMultiSource::GetEntityClassInfo(void)::g_EntityCMultiSourceClassInfo);
  }
  CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass.m_pClassInfo = &CMultiSource::GetEntityClassInfo(void)::g_EntityCMultiSourceClassInfo;
  CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass.m_pBaseClassInfo = CMultiSource::GetEntityClassInfo(void)::g_EntityCMultiSourceClassInfo.m_pBaseClassInfo;
  g_pEntityCMultiSourceClass = &CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass;
  CMultiSource::GetEntityClassInfo(void)::g_EntityCMultiSourceClassInfo.m_pClass = &CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass;
  CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCMultiSourceClass->m_pComponentOverrides = 0;
  return &CMultiSource::GetEntityClassInternal(void)::g_EntityCMultiSourceClass;
}


// CMultiSource::ObjectCaps  (line 1192, @0x00000000022a8f40, libserver.so)  // inlines: ObjectCaps
// calls: CBaseEntity::ObjectCaps
int __fastcall CMultiSource::ObjectCaps(CMultiSource *const this)
{
  int v1; // eax

  v1 = CBaseEntity::ObjectCaps(this);
  LOBYTE(v1) = v1 & 0x7F;
  return v1 | 0x10000000;
}


// CMultiSource::GetDataDescMap  (line 1207, @0x0000000002283b80, libserver.so)
// globals: CMultiSource::m_DataMap
datamap_t *__fastcall CMultiSource::GetDataDescMap(CMultiSource *const this)
{
  return &CMultiSource::m_DataMap;
}


// CMultiSource::AddDatadescMetadataKeys  (line 1207, @0x0000000002292ed0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMultiSource::GetEntityClass(void)
void __fastcall CMultiSource::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMultiSource::GetEntityClass);
}


// CMultiSource::GetBaseMap  (line 1207, @0x0000000002292ef0, libserver.so)
datamap_t *__cdecl CMultiSource::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CMultiSource>  (line 1207, @0x00000000022a09d0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CMultiSource"
// globals: `guard variable for'DataMapInit<CMultiSource>(CMultiSource *)::nameHolder, `guard variable for'DataMapInit<CMultiSource>(CMultiSource *)::dataDesc, CMultiSource::GetEntityClass(void), CMultiSource::m_DataMap, DataMapInit<CMultiSource>(CMultiSource *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMultiSource>(CMultiSource *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CMultiSource>(CMultiSource *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMultiSource>(CMultiSource *)::nameHolder) != 0 )
  {
    DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_pszBase = "CMultiSource";
    DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMultiSource>(CMultiSource *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMultiSource>(CMultiSource *)::nameHolder,
      &_dso_handle);
  }
  CMultiSource::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CMultiSource>(CMultiSource *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMultiSource>(CMultiSource *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_nLenBase + 9);
    strcpy(stpcpy(v2, DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_pszBase), "Register");
    m_Size = DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Size == DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CMultiSource>(CMultiSource *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CMultiSource>(CMultiSource *)::dataDesc[5].fieldName = v2;
    DataMapInit<CMultiSource>(CMultiSource *)::dataDesc[6].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMultiSource>(CMultiSource *)::dataDesc);
  }
  CMultiSource::m_DataMap.dataNumFields = 6;
  CMultiSource::m_DataMap.dataDesc = &DataMapInit<CMultiSource>(CMultiSource *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMultiSource::m_DataMap, CMultiSource::GetEntityClass);
  return &CMultiSource::m_DataMap;
}


// CMultiSource::Spawn  (line 1229, @0x00000000022899d0, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator|=<int>
// calls: CLogicalEntity::Spawn, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
// globals: CMultiSource::Register(void)
void __fastcall CMultiSource::Spawn(CMultiSource *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  double v5; // xmm0_8
  unsigned int v6; // r12d
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CLogicalEntity::Spawn(this, pKeyValues);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v5) = 0;
    *&v5 = v4->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v5 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v5, v3, 0);
  v6 = this->m_spawnflags.m_Value | 1;
  if ( this->m_spawnflags.m_Value != v6 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v6;
  }
  CBaseEntity::ThinkSet(this, CMultiSource::Register, 0.0, 0, 0);
}


// CMultiSource::Use  (line 1246, @0x000000000229d5a0, libserver.so)  // inlines: Get, GetClassNameAsCStr, GetClassname, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, operator CEntityInstance*, operator==
// calls: Warning, CEntityIdentity::GetDebugName, DevMsg, CEntityIOOutput::FireOutput
// strings: "MultiSrc: Used by non member %s.\n", "Multisource %s enabled (%d inputs)\n", "<logical entity>"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CMultiSource::Use(
        CMultiSource *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE a4,
        double value)
{
  int v5; // ecx
  CHandle<CBaseEntity> *m_rgEntities; // rax
  int m_iTotal; // edi
  CBaseEntity *m_pInstance; // r10
  CEntityIdentity *v11; // r9
  CEntityIdentity *v12; // r9
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  int v15; // r13d
  const char *DebugName; // rax

  v5 = 0;
  m_rgEntities = this->m_rgEntities;
  m_iTotal = this->m_iTotal;
  do
  {
    if ( v5 >= m_iTotal )
      break;
    ++v5;
    m_pInstance = 0;
    if ( m_rgEntities->m_Index + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_rgEntities->m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[m_rgEntities->m_Index & 0x1FF];
        if ( v12 != 0 && m_rgEntities->m_Index == v12->m_EHandle.m_Index )
          m_pInstance = v12->m_pInstance;
      }
    }
    ++m_rgEntities;
  }
  while ( pCaller != m_pInstance );
  if ( v5 <= m_iTotal )
  {
    this->m_rgEntities[v5 + 31].m_Index ^= 1u;
    if ( (*(this->_vptr_IHandleEntity + 94))(this, pActivator, value) != 0 )
    {
      v15 = this->m_iTotal;
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      DevMsg(2, "Multisource %s enabled (%d inputs)\n", DebugName, v15);
      CEntityIOOutput::FireOutput(&this->m_OnTrigger, pActivator, this);
    }
  }
  else
  {
    if ( pCaller != 0 )
    {
      m_pEntity = pCaller->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    }
    else
    {
      m_pAsString = "<logical entity>";
    }
    Warning("MultiSrc: Used by non member %s.\n", m_pAsString);
  }
}


// CMultiSource::IsTriggered  (line 1280, @0x0000000002288410, libserver.so)  // inlines: GlobalEntity_GetIndex, GlobalEntity_GetState, IsNullString, IsValid, operator!
// calls: GlobalEntity_GetIndex, GlobalEntity_GetState
bool __fastcall CMultiSource::IsTriggered(CMultiSource *const this, CBaseEntity *a2)
{
  bool result; // al
  int m_iTotal; // ecx
  int *v4; // rdx
  int v5; // eax
  const char *m_pAsString; // rdi
  int Index; // eax

  result = 0;
  if ( (this->m_spawnflags.m_Value & 1) == 0 )
  {
    m_iTotal = this->m_iTotal;
    if ( m_iTotal <= 0 )
    {
      if ( m_iTotal != 0 )
        return result;
    }
    else
    {
      if ( this->m_rgTriggered[0] == 0 )
        return result;
      v4 = &this->m_rgTriggered[1];
      v5 = 0;
      while ( ++v5 != m_iTotal )
      {
        if ( *v4++ == 0 )
          return 0;
      }
    }
    m_pAsString = this->m_globalstate.u.m_pAsString;
    result = 1;
    if ( m_pAsString != 0 )
    {
      Index = GlobalEntity_GetIndex(m_pAsString);
      return GlobalEntity_GetState(Index) == GLOBALESTATE::GLOBAL_ON;
    }
  }
  return result;
}


// CMultiSource::Register  (line 1309, @0x00000000022879a0, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntityName, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, memset, operator&=<int>, operator=
// calls: CBaseEntity::ThinkSet, CGameEntitySystem::FindEntityByTarget, CGameEntitySystem::FindEntityByClassname
// strings: "multi_manager"
void __fastcall CMultiSource::Register(CMultiSource *const this)
{
  const char *m_pAsString; // rdx
  CBaseEntity *i; // rax
  float *v4; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v6; // ecx
  __int16 v7; // di
  const char *v8; // rdx
  __int64 m_iTotal; // rdx
  CBaseEntity *j; // r12
  unsigned __int8 (__fastcall *v11)(CBaseEntity *, UtlSymLargeId_t *); // rax
  __int64 v12; // rax
  float *v13; // rcx
  CEntityIdentity *v14; // rax
  int v15; // edx
  __int16 v16; // si
  unsigned int v17; // r12d
  UtlSymLargeId_t v18[6]; // [rsp+0h] [rbp-30h] BYREF

  this->m_iTotal = 0;
  memset(this->m_rgEntities, 0, sizeof(this->m_rgEntities));
  CBaseEntity::ThinkSet(this, CBaseEntity::SUB_DoNothing, 0.0, 0, 0);
  m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
  if ( m_pAsString == 0 )
    m_pAsString = "";
  for ( i = CGameEntitySystem::FindEntityByTarget(g_pGameEntitySystem, 0, m_pAsString);
        i != 0;
        i = CGameEntitySystem::FindEntityByTarget(g_pGameEntitySystem, i, v8) )
  {
    m_iTotal = this->m_iTotal;
    if ( m_iTotal > 31 )
      break;
    this->m_iTotal = m_iTotal + 1;
    v4 = &this->m_flLocalTime + m_iTotal;
    m_pEntity = i->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      *(v4 + 4) = v7 | v4[2] & 0x8000;
      *(v4 + 2) = (v6 << 15) | v4[2] & 0x7FFF;
    }
    else
    {
      v4[2] = NAN;
    }
    v8 = this->m_pEntity->m_name.u.m_pAsString;
    if ( v8 == 0 )
      v8 = "";
  }
  for ( j = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "multi_manager");
        j != 0 && this->m_iTotal <= 31;
        j = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, j, "multi_manager") )
  {
    v11 = *(j->_vptr_IHandleEntity + 99);
    v18[0] = this->m_pEntity->m_name.u.m_Id;
    if ( v11(j, v18) != 0 )
    {
      v12 = this->m_iTotal;
      this->m_iTotal = v12 + 1;
      v13 = &this->m_flLocalTime + v12;
      v14 = j->m_pEntity;
      if ( v14 != 0 )
      {
        v15 = (v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1);
        v16 = 0x7FFF;
        if ( v14->m_EHandle.m_Index != -1 )
          v16 = v14->m_EHandle.m_Index & 0x7FFF;
        *(v13 + 4) = v16 | v13[2] & 0x8000;
        *(v13 + 2) = (v15 << 15) | v13[2] & 0x7FFF;
      }
      else
      {
        v13[2] = NAN;
      }
    }
  }
  v17 = this->m_spawnflags.m_Value & 0xFFFFFFFE;
  if ( this->m_spawnflags.m_Value != v17 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v17;
  }
}


// CMathCounter::~CMathCounter  (line 1347, @0x00000000022a9760, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CMathCounter::~CMathCounter(CMathCounter *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CMathCounter::~CMathCounter  (line 1347, @0x00000000022a9780, libserver.so)  // inlines: ~CLogicalEntity, ~CMathCounter, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CMathCounter::~CMathCounter(CMathCounter *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CMathCounter::GetEntityClass  (line 1349, @0x00000000022a5ca0, libserver.so)
CEntityClass *__cdecl CMathCounter::GetEntityClass()
{
  return g_pEntityCMathCounterClass;
}


// CMathCounter::Schema_DynamicBinding  (line 1349, @0x00000000022a5cb0, libserver.so)
// globals: CMathCounter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMathCounter::Schema_DynamicBinding(const CMathCounter *const this)
{
  return CMathCounter::s_pSchemaBinding;
}


// CMathCounter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1349, @0x00000000022a5cc0, libserver.so)
// globals: CMathCounter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMathCounter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMathCounter::CEntityInstanceEntityClass *const this)
{
  return CMathCounter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMathCounter::CEntityInstanceEntityClass::DestructInstance  (line 1349, @0x00000000022a5cd0, libserver.so)  // inlines: Destruct<CMathCounter>
void __fastcall CMathCounter::CEntityInstanceEntityClass::DestructInstance(
        CMathCounter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMathCounter::CEntityInstanceEntityClass::FreeInstance  (line 1349, @0x00000000022a5cf0, libserver.so)
void __fastcall CMathCounter::CEntityInstanceEntityClass::FreeInstance(
        CMathCounter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMathCounter::CEntityInstanceEntityClass::CanAllocate  (line 1349, @0x00000000022a5d10, libserver.so)
bool __fastcall CMathCounter::CEntityInstanceEntityClass::CanAllocate(
        const CMathCounter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMathCounter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1349, @0x00000000022a5d20, libserver.so)
// globals: CMathCounter::s_pSchemaBinding
const ISchemaBinding *__fastcall CMathCounter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMathCounter::CEntityInstanceEntityClass *const this)
{
  return CMathCounter::s_pSchemaBinding;
}


// CMathCounter::CEntityInstanceEntityClass::AllocateInstance  (line 1349, @0x00000000022a8280, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMathCounter::CEntityInstanceEntityClass::AllocateInstance(
        CMathCounter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CMathCounter::CEntityInstanceEntityClass::ConstructInstance  (line 1349, @0x00000000022aa450, libserver.so)  // inlines: CEntityIOOutput, CEntityOutputTemplate, CLogicalEntity, CMathCounter, CServerOnlyEntity, Construct<CMathCounter>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CMathCounter::CEntityInstanceEntityClass::ConstructInstance(
        CMathCounter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4060DB0;
    *(p + 99) = off_3FD2290;
    *(p + 103) = off_3FD2290;
    *(p + 107) = off_3F7C190;
    *(p + 110) = off_3F7C190;
    *(p + 113) = off_3F7C190;
    *(p + 116) = off_3F7C190;
  }
  return p;
}


// CMathCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1349, @0x00000000022aac30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMathCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMathCounter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMathCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1349, @0x00000000022aac50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMathCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMathCounter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMathCounter::GetEntityClassInternal  (line 1349, @0x00000000022b1750, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "math_counter", "CMathCounter"
// globals: `guard variable for'CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass, CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass, __dso_handle, CMathCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMathCounter::GetEntityClassInfo(void)::g_EntityCMathCounterClassInfo, CMathCounter::GetEntityClassInfo(void)::g_EntityCMathCounterClassInfo
CEntityClass *__cdecl CMathCounter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass);
    CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass._vptr_CEntityClass = off_4060D30;
    __cxa_guard_release(&`guard variable for'CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass);
    __cxa_atexit(
      CMathCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass,
      &_dso_handle);
  }
  if ( g_pEntityCMathCounterClass != 0 )
    return &CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass;
  if ( `guard variable for'CMathCounter::GetEntityClassInfo(void)::g_EntityCMathCounterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMathCounter::GetEntityClassInfo(void)::g_EntityCMathCounterClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMathCounter::GetEntityClassInfo(void)::g_EntityCMathCounterClassInfo,
      "CMathCounter",
      "math_counter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMathCounter::GetEntityClassInfo(void)::g_EntityCMathCounterClassInfo);
  }
  CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass.m_pClassInfo = &CMathCounter::GetEntityClassInfo(void)::g_EntityCMathCounterClassInfo;
  CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass.m_pBaseClassInfo = CMathCounter::GetEntityClassInfo(void)::g_EntityCMathCounterClassInfo.m_pBaseClassInfo;
  g_pEntityCMathCounterClass = &CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass;
  CMathCounter::GetEntityClassInfo(void)::g_EntityCMathCounterClassInfo.m_pClass = &CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass;
  CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCMathCounterClass->m_pComponentOverrides = 0;
  return &CMathCounter::GetEntityClassInternal(void)::g_EntityCMathCounterClass;
}


// CMathCounter::GetDataDescMap  (line 1392, @0x0000000002283b90, libserver.so)
// globals: CMathCounter::m_DataMap
datamap_t *__fastcall CMathCounter::GetDataDescMap(CMathCounter *const this)
{
  return &CMathCounter::m_DataMap;
}


// CMathCounter::AddDatadescMetadataKeys  (line 1392, @0x0000000002292f00, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMathCounter::GetEntityClass(void)
void __fastcall CMathCounter::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMathCounter::GetEntityClass);
}


// CMathCounter::GetBaseMap  (line 1392, @0x0000000002292f20, libserver.so)
datamap_t *__cdecl CMathCounter::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CMathCounter>  (line 1392, @0x0000000002292f30, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CMathCounter"
// globals: `guard variable for'DataMapInit<CMathCounter>(CMathCounter *)::nameHolder, `guard variable for'DataMapInit<CMathCounter>(CMathCounter *)::dataDesc, CMathCounter::GetEntityClass(void), CMathCounter::m_DataMap, DataMapInit<CMathCounter>(CMathCounter *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMathCounter>(CMathCounter *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMathCounter>(CMathCounter *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMathCounter>(CMathCounter *)::nameHolder) != 0 )
  {
    DataMapInit<CMathCounter>(CMathCounter *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMathCounter>(CMathCounter *)::nameHolder.m_pszBase = "CMathCounter";
    DataMapInit<CMathCounter>(CMathCounter *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMathCounter>(CMathCounter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMathCounter>(CMathCounter *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMathCounter>(CMathCounter *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMathCounter>(CMathCounter *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMathCounter>(CMathCounter *)::nameHolder,
      &_dso_handle);
  }
  CMathCounter::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CMathCounter>(CMathCounter *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMathCounter>(CMathCounter *)::dataDesc) != 0 )
  {
    DataMapInit<CMathCounter>(CMathCounter *)::dataDesc[17].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMathCounter>(CMathCounter *)::dataDesc[18].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMathCounter>(CMathCounter *)::dataDesc[19].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMathCounter>(CMathCounter *)::dataDesc[20].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMathCounter>(CMathCounter *)::dataDesc[21].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMathCounter>(CMathCounter *)::dataDesc[22].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMathCounter>(CMathCounter *)::dataDesc);
  }
  CMathCounter::m_DataMap.dataNumFields = 22;
  CMathCounter::m_DataMap.dataDesc = &DataMapInit<CMathCounter>(CMathCounter *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMathCounter::m_DataMap, CMathCounter::GetEntityClass);
  return &CMathCounter::m_DataMap;
}


// CMathCounter::Spawn  (line 1434, @0x000000000228b280, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, Init, Min<long long unsigned int>, Min<unsigned int>, atoi, operator[]
// calls: CLogicalEntity::Spawn, CEntityKeyValues::HasValue, strtol, VariantFieldTypeName, Warning
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_228B3CE
void __fastcall CMathCounter::Spawn(CMathCounter *const this, const CEntityKeyValues *pKeyValues)
{
  float m_flMin; // xmm2_4
  float m_flMax; // xmm1_4
  float v6; // xmm0_4
  float m_Value; // xmm2_4
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v10; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  float m_int; // xmm0_4
  const char *v16; // rax
  uint64 m_uint64; // rdx
  const char *v18; // rax

  CLogicalEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, -1823827836) )
    goto LABEL_2;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_24:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_25;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v10 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v10) == -1823827836 )
      goto LABEL_21;
LABEL_18:
    if ( m_nCount <= ++v10 )
      goto LABEL_24;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v10] != -1823827836 )
    goto LABEL_18;
LABEL_21:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v12 = pKeyValues->m_keyValues.m_pElements;
  else
    v12 = 0;
  p_m_value = &v12[v10].m_value;
LABEL_25:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      m_int = 0.0;
      break;
    case 1:
      LODWORD(v16) = p_m_value->m_float;
      goto LABEL_32;
    case 5:
      m_int = p_m_value->m_int;
      break;
    case 6:
      m_int = p_m_value->m_char;
      break;
    case 26:
      if ( p_m_value->m_int64 > 0x7FFFFFFF )
        goto LABEL_29;
      LODWORD(m_uint64) = 0x80000000;
      if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
        m_uint64 = p_m_value->m_uint64;
      m_int = m_uint64;
      break;
    case 30:
      m_int = strtol(p_m_value->m_pszString, 0, 10);
      break;
    case 33:
      v16 = p_m_value->m_uint64;
      if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
        goto LABEL_32;
      goto LABEL_29;
    case 34:
      m_int = p_m_value->m_float64;
      break;
    case 37:
      LODWORD(v16) = p_m_value->m_int;
      if ( p_m_value->m_int <= 0x7FFFFFFEu )
LABEL_32:
        m_int = v16;
      else
LABEL_29:
        m_int = 2147483600.0;
      break;
    default:
      v18 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to int now\n", v18);
      m_int = 0.0;
      break;
  }
  this->m_OutValue.m_Value = m_int;
LABEL_2:
  m_flMin = this->m_flMin;
  m_flMax = this->m_flMax;
  if ( m_flMin <= m_flMax )
  {
    v6 = this->m_flMax;
    m_flMax = this->m_flMin;
  }
  else
  {
    this->m_flMax = m_flMin;
    v6 = m_flMin;
    this->m_flMin = m_flMax;
  }
  if ( m_flMax == 0.0 )
  {
    if ( v6 != 0.0 )
    {
      m_Value = this->m_OutValue.m_Value;
      if ( m_Value <= v6 )
        goto LABEL_12;
      goto LABEL_6;
    }
  }
  else
  {
    m_Value = this->m_OutValue.m_Value;
    if ( m_Value <= v6 )
LABEL_12:
      v6 = fmaxf(m_flMax, m_Value);
LABEL_6:
    this->m_OutValue.m_Value = v6;
  }
}


// CMathCounter::DrawDebugTextOverlays  (line 1471, @0x0000000002284770, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "    min value: %f", "    max value: %f", "current value: %f", "Enabled.", "*DISABLED*"
int __fastcall CMathCounter::DrawDebugTextOverlays(
        CMathCounter *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  int v8; // r14d
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v10; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v10 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 512, "    min value: %f", this->m_flMin);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "    max value: %f", this->m_flMax);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "current value: %f", this->m_OutValue.m_Value);
    CBaseEntity::EntityText(this, v6 + 2, tempstr, 0.0, 255, 255, 255, 255);
    v8 = v6 + 3;
    if ( this->m_bDisabled )
      V_snprintf(tempstr, 512, "*DISABLED*");
    else
      V_snprintf(tempstr, 512, "Enabled.");
    v6 += 4;
    CBaseEntity::EntityText(this, v8, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CMathCounter::InputSetHitMax  (line 1509, @0x000000000229fd80, libserver.so)  // inlines: Float, operator float
// calls: CMathCounter::UpdateOutValue
void __fastcall CMathCounter::InputSetHitMax(CMathCounter *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float m_flMin; // xmm1_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  m_flMin = this->m_flMin;
  this->m_flMax = m_float64;
  if ( m_flMin > m_float64 )
    this->m_flMin = m_float64;
  CMathCounter::UpdateOutValue(this, inputdata->pActivator, this->m_OutValue.m_Value, m_flMin);
}


// CMathCounter::InputSetHitMin  (line 1519, @0x000000000229fdd0, libserver.so)  // inlines: Float, operator float
// calls: CMathCounter::UpdateOutValue
void __fastcall CMathCounter::InputSetHitMin(CMathCounter *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4
  bool v4; // cf
  bool v5; // zf

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  v4 = m_float64 < this->m_flMax;
  v5 = m_float64 == this->m_flMax;
  this->m_flMin = m_float64;
  if ( !v4 && !v5 )
    this->m_flMax = m_float64;
  CMathCounter::UpdateOutValue(this, inputdata->pActivator, this->m_OutValue.m_Value, v2);
}


// CMathCounter::InputAdd  (line 1534, @0x000000000229fe20, libserver.so)  // inlines: Float, GetDebugName, operator float
// calls: CMathCounter::UpdateOutValue, CEntityIdentity::GetDebugName, DevMsg(char const*,...)
// strings: "Math Counter %s ignoring ADD because it is disabled\n"
void __fastcall CMathCounter::InputAdd(CMathCounter *const this, inputdata_t *const inputdata)
{
  float m_Value; // xmm1_4
  float m_float64; // xmm0_4
  const char *DebugName; // rax

  if ( this->m_bDisabled )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg("Math Counter %s ignoring ADD because it is disabled\n", DebugName);
  }
  else
  {
    m_Value = this->m_OutValue.m_Value;
    if ( inputdata->value.m_type == 34 )
    {
      m_float64 = inputdata->value.m_float64;
      CMathCounter::UpdateOutValue(this, inputdata->pActivator, m_float64 + m_Value, m_Value);
    }
    else
    {
      CMathCounter::UpdateOutValue(this, inputdata->pActivator, inputdata->value.m_float + m_Value, m_Value);
    }
  }
}


// CMathCounter::InputDivide  (line 1551, @0x000000000229fe90, libserver.so)  // inlines: Float, GetDebugName, operator float
// calls: CMathCounter::UpdateOutValue, DevMsg, CEntityIdentity::GetDebugName, DevMsg(char const*,...)
// strings: "LEVEL DESIGN ERROR: Divide by zero in math_value\n", "Math Counter %s ignoring DIVIDE because it is disabled\n"
void __fastcall CMathCounter::InputDivide(CMathCounter *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  float m_float64; // xmm0_4
  float m_float; // xmm1_4
  float v7; // xmm1_4
  const char *DebugName; // rax

  if ( this->m_bDisabled )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg("Math Counter %s ignoring DIVIDE because it is disabled\n", DebugName);
  }
  else
  {
    m_type = inputdata->value.m_type;
    if ( m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_float;
    if ( m_float64 == 0.0 )
    {
      DevMsg(1, "LEVEL DESIGN ERROR: Divide by zero in math_value\n");
      CMathCounter::UpdateOutValue(this, inputdata->pActivator, this->m_OutValue.m_Value, v7);
    }
    else
    {
      if ( m_type == 34 )
        m_float = inputdata->value.m_float64;
      else
        m_float = inputdata->value.m_float;
      CMathCounter::UpdateOutValue(this, inputdata->pActivator, this->m_OutValue.m_Value / m_float, m_float);
    }
  }
}


// CMathCounter::InputMultiply  (line 1576, @0x000000000229ff60, libserver.so)  // inlines: Float, GetDebugName, operator float
// calls: CMathCounter::UpdateOutValue, CEntityIdentity::GetDebugName, DevMsg(char const*,...)
// strings: "Math Counter %s ignoring MULTIPLY because it is disabled\n"
void __fastcall CMathCounter::InputMultiply(CMathCounter *const this, inputdata_t *const inputdata)
{
  float m_Value; // xmm1_4
  float m_float64; // xmm0_4
  const char *DebugName; // rax

  if ( this->m_bDisabled )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg("Math Counter %s ignoring MULTIPLY because it is disabled\n", DebugName);
  }
  else
  {
    m_Value = this->m_OutValue.m_Value;
    if ( inputdata->value.m_type == 34 )
    {
      m_float64 = inputdata->value.m_float64;
      CMathCounter::UpdateOutValue(this, inputdata->pActivator, m_float64 * m_Value, m_Value);
    }
    else
    {
      CMathCounter::UpdateOutValue(this, inputdata->pActivator, inputdata->value.m_float * m_Value, m_Value);
    }
  }
}


// CMathCounter::InputSetValue  (line 1593, @0x000000000229ffd0, libserver.so)  // inlines: Float, GetDebugName, operator float
// calls: CMathCounter::UpdateOutValue, CEntityIdentity::GetDebugName, DevMsg(char const*,...)
// strings: "Math Counter %s ignoring SETVALUE because it is disabled\n"
void __fastcall CMathCounter::InputSetValue(CMathCounter *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4
  const char *DebugName; // rax

  if ( this->m_bDisabled )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg("Math Counter %s ignoring SETVALUE because it is disabled\n", DebugName);
  }
  else if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CMathCounter::UpdateOutValue(this, inputdata->pActivator, m_float64, v2);
  }
  else
  {
    CMathCounter::UpdateOutValue(this, inputdata->pActivator, inputdata->value.m_float, v2);
  }
}


// CMathCounter::InputSetValueNoFire  (line 1609, @0x00000000022869f0, libserver.so)  // inlines: Float, GetDebugName, Init, operator float
// calls: CEntityIdentity::GetDebugName, DevMsg(char const*,...)
// strings: "Math Counter %s ignoring SETVALUENOFIRE because it is disabled\n"
void __fastcall CMathCounter::InputSetValueNoFire(CMathCounter *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float m_flMin; // xmm2_4
  float v4; // xmm1_4
  float m_flMax; // xmm3_4
  const char *DebugName; // rax

  if ( !this->m_bDisabled )
  {
    if ( inputdata->value.m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_float;
    m_flMin = this->m_flMin;
    if ( m_flMin == 0.0 )
    {
      m_flMax = this->m_flMax;
      if ( m_flMax == 0.0 )
        goto LABEL_7;
      v4 = this->m_flMax;
      if ( m_float64 > m_flMax )
        goto LABEL_11;
    }
    else
    {
      v4 = this->m_flMax;
      if ( m_float64 > v4 )
      {
LABEL_11:
        this->m_OutValue.m_Value = v4;
        return;
      }
    }
    m_float64 = fmaxf(m_flMin, m_float64);
LABEL_7:
    this->m_OutValue.m_Value = m_float64;
    return;
  }
  DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
  DevMsg("Math Counter %s ignoring SETVALUENOFIRE because it is disabled\n", DebugName);
}


// CMathCounter::InputSubtract  (line 1632, @0x00000000022a0030, libserver.so)  // inlines: Float, GetDebugName, operator float
// calls: CMathCounter::UpdateOutValue, CEntityIdentity::GetDebugName, DevMsg(char const*,...)
// strings: "Math Counter %s ignoring SUBTRACT because it is disabled\n"
void __fastcall CMathCounter::InputSubtract(CMathCounter *const this, inputdata_t *const inputdata)
{
  float m_Value; // xmm0_4
  float m_float64; // xmm1_4
  const char *DebugName; // rax

  if ( this->m_bDisabled )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg("Math Counter %s ignoring SUBTRACT because it is disabled\n", DebugName);
  }
  else
  {
    m_Value = this->m_OutValue.m_Value;
    if ( inputdata->value.m_type == 34 )
    {
      m_float64 = inputdata->value.m_float64;
      CMathCounter::UpdateOutValue(this, inputdata->pActivator, m_Value - m_float64, m_float64);
    }
    else
    {
      CMathCounter::UpdateOutValue(
        this,
        inputdata->pActivator,
        m_Value - inputdata->value.m_float,
        inputdata->value.m_float);
    }
  }
}


// CMathCounter::InputGetValue  (line 1647, @0x000000000229e5c0, libserver.so)  // inlines: CVariantBase, FireOutput<float>, Free, Set, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CMathCounter::InputGetValue(CMathCounter *const this, inputdata_t *const inputdata)
{
  COutputFloat *p_m_OnGetValue; // rdi
  CBaseEntity *pCaller; // rdx
  CBaseEntity *pActivator; // rsi
  int m_Value_low; // xmm0_4
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  p_m_OnGetValue = &this->m_OnGetValue;
  value.m_type = 1;
  pCaller = inputdata->pCaller;
  value.m_flags = 0;
  pActivator = inputdata->pActivator;
  m_Value_low = LODWORD(p_m_OnGetValue[-1].m_Value);
  LODWORD(p_m_OnGetValue->m_Value) = m_Value_low;
  value.m_int = m_Value_low;
  CEntityIOOutput::FireOutputInternal(p_m_OnGetValue, pActivator, pCaller, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CMathCounter::InputEnable  (line 1655, @0x0000000002283ba0, libserver.so)
void __fastcall CMathCounter::InputEnable(CMathCounter *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 0;
}


// CMathCounter::InputDisable  (line 1662, @0x0000000002283bb0, libserver.so)
void __fastcall CMathCounter::InputDisable(CMathCounter *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 1;
}


// CMathCounter::UpdateOutValue  (line 1671, @0x000000000229fa60, libserver.so)  // inlines: CVariantBase, FireOutput, FireOutput<float>, Free, Set, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CMathCounter::InputSetHitMax, CMathCounter::InputSetHitMin, CMathCounter::InputAdd, CMathCounter::InputDivide, CMathCounter::InputMultiply, CMathCounter::InputSetValue, CMathCounter::InputSubtract
// local variable allocation has failed, the output may be wrong!
void __fastcall CMathCounter::UpdateOutValue(
        CMathCounter *const this,
        CBaseEntity *pActivator,
        float a3,
        float fNewValue)
{
  float m_flMin; // xmm0_4
  float m_flMax; // xmm1_4
  float v8; // xmm0_4
  __int64 v10; // [rsp-4h] [rbp-38h] OVERLAPPED BYREF
  __int16 v11; // [rsp+4h] [rbp-30h]
  __int16 v12; // [rsp+6h] [rbp-2Eh]

  m_flMin = this->m_flMin;
  m_flMax = this->m_flMax;
  if ( m_flMin == 0.0 && m_flMax == 0.0 )
  {
    v8 = a3;
    goto LABEL_9;
  }
  if ( a3 >= m_flMax )
  {
    if ( this->m_bHitMax )
    {
      if ( m_flMin >= a3 )
        goto LABEL_6;
LABEL_27:
      if ( m_flMin == this->m_OutValue.m_Value )
      {
        v11 = 0;
        v12 = 0;
        v10 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnChangedFromMin, pActivator, this, &v10, 0.0);
        if ( (v12 & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
      }
      this->m_bHitMin = 0;
      goto LABEL_7;
    }
    this->m_bHitMax = 1;
    v11 = 0;
    v10 = 0;
    v12 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnHitMax, pActivator, this, &v10, 0.0);
    if ( (v12 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
    m_flMin = this->m_flMin;
  }
  else
  {
    if ( m_flMax == this->m_OutValue.m_Value )
    {
      v11 = 0;
      v12 = 0;
      v10 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnChangedFromMax, pActivator, this, &v10, 0.0);
      if ( (v12 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
      m_flMin = this->m_flMin;
    }
    this->m_bHitMax = 0;
  }
  if ( m_flMin < a3 )
    goto LABEL_27;
LABEL_6:
  if ( !this->m_bHitMin )
  {
    this->m_bHitMin = 1;
    v11 = 0;
    v12 = 0;
    v10 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnHitMin, pActivator, this, &v10, 0.0);
    if ( (v12 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
  }
LABEL_7:
  v8 = this->m_flMax;
  if ( a3 <= v8 )
    v8 = fmaxf(this->m_flMin, a3);
LABEL_9:
  this->m_OutValue.m_Value = v8;
  v11 = 1;
  *&v10 = v8;
  v12 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OutValue, pActivator, this, &v10, 0.0);
  if ( (v12 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
}


// CLogicCase::~CLogicCase  (line 1735, @0x00000000022aa5a0, libserver.so)  // inlines: Free, ~CEntityOutputTemplate, ~CLogicalEntity, ~CServerOnlyEntity, ~CVariantBase
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicCase::~CLogicCase(CLogicCase *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_40614D0;
  v2 = (this->m_OnDefault.m_Value.m_flags & 1) == 0;
  this->m_OnDefault._vptr_CEntityIOOutput = &off_4058510;
  if ( !v2 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_OnDefault.m_Value.m_uint64);
    this->m_OnDefault.m_Value.m_flags &= ~1u;
  }
  this->m_OnDefault.m_Value.m_type = 0;
  this->m_OnDefault.m_Value.m_uint64 = 0;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicCase::~CLogicCase  (line 1735, @0x00000000022aa8d0, libserver.so)  // inlines: Free, ~CEntityOutputTemplate, ~CLogicCase, ~CLogicalEntity, ~CServerOnlyEntity, ~CVariantBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicCase::~CLogicCase(CLogicCase *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_40614D0;
  v2 = (this->m_OnDefault.m_Value.m_flags & 1) == 0;
  this->m_OnDefault._vptr_CEntityIOOutput = &off_4058510;
  if ( !v2 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_OnDefault.m_Value.m_uint64);
    this->m_OnDefault.m_Value.m_flags &= ~1u;
  }
  this->m_OnDefault.m_Value.m_type = 0;
  this->m_OnDefault.m_Value.m_uint64 = 0;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicCase::GetEntityClass  (line 1737, @0x00000000022a5d30, libserver.so)
CEntityClass *__cdecl CLogicCase::GetEntityClass()
{
  return g_pEntityCLogicCaseClass;
}


// CLogicCase::Schema_DynamicBinding  (line 1737, @0x00000000022a5d40, libserver.so)
// globals: CLogicCase::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicCase::Schema_DynamicBinding(const CLogicCase *const this)
{
  return CLogicCase::s_pSchemaBinding;
}


// CLogicCase::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1737, @0x00000000022a5d50, libserver.so)
// globals: CLogicCase::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicCase::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicCase::CEntityInstanceEntityClass *const this)
{
  return CLogicCase::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicCase::CEntityInstanceEntityClass::DestructInstance  (line 1737, @0x00000000022a5d60, libserver.so)  // inlines: Destruct<CLogicCase>
void __fastcall CLogicCase::CEntityInstanceEntityClass::DestructInstance(
        CLogicCase::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicCase::CEntityInstanceEntityClass::FreeInstance  (line 1737, @0x00000000022a5d80, libserver.so)
void __fastcall CLogicCase::CEntityInstanceEntityClass::FreeInstance(
        CLogicCase::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicCase::CEntityInstanceEntityClass::CanAllocate  (line 1737, @0x00000000022a5da0, libserver.so)
bool __fastcall CLogicCase::CEntityInstanceEntityClass::CanAllocate(
        const CLogicCase::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicCase::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1737, @0x00000000022a5db0, libserver.so)
// globals: CLogicCase::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicCase::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicCase::CEntityInstanceEntityClass *const this)
{
  return CLogicCase::s_pSchemaBinding;
}


// CLogicCase::CEntityInstanceEntityClass::AllocateInstance  (line 1737, @0x00000000022a82c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicCase::CEntityInstanceEntityClass::AllocateInstance(
        CLogicCase::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1352);
  memset(v1, 0, 0x548u);
  return v1;
}


// CLogicCase::CEntityInstanceEntityClass::ConstructInstance  (line 1737, @0x00000000022aa3a0, libserver.so)  // inlines: CEntityIOOutput, CEntityOutputTemplate, CLogicCase, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, CVariantBase, Construct<CLogicCase>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicCase::CEntityInstanceEntityClass::ConstructInstance(
        CLogicCase::CEntityInstanceEntityClass *const this,
        void *p)
{
  _QWORD *v3; // rdx
  char *v4; // rdx

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40614D0;
    v3 = p + 776;
    do
      *v3++ = 0;
    while ( v3 != (p + 904) );
    v4 = p + 928;
    do
    {
      v4 += 24;
      *(v4 - 3) = off_3F7C190;
    }
    while ( v4 != p + 1312 );
    *(p + 167) = 0;
    *(p + 164) = &off_4058510;
    *(p + 672) = 0;
    *(p + 673) = 0;
  }
  return p;
}


// CLogicCase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1737, @0x00000000022aac80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicCase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicCase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicCase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1737, @0x00000000022aaca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicCase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicCase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicCase::GetEntityClassInternal  (line 1737, @0x00000000022b18a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_case", "CLogicCase"
// globals: `guard variable for'CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass, CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass, __dso_handle, CLogicCase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicCase::GetEntityClassInfo(void)::g_EntityCLogicCaseClassInfo, CLogicCase::GetEntityClassInfo(void)::g_EntityCLogicCaseClassInfo
CEntityClass *__cdecl CLogicCase::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass);
    CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass._vptr_CEntityClass = off_4061450;
    __cxa_guard_release(&`guard variable for'CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass);
    __cxa_atexit(
      CLogicCase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicCaseClass != 0 )
    return &CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass;
  if ( `guard variable for'CLogicCase::GetEntityClassInfo(void)::g_EntityCLogicCaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicCase::GetEntityClassInfo(void)::g_EntityCLogicCaseClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicCase::GetEntityClassInfo(void)::g_EntityCLogicCaseClassInfo,
      "CLogicCase",
      "logic_case",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicCase::GetEntityClassInfo(void)::g_EntityCLogicCaseClassInfo);
  }
  CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass.m_pClassInfo = &CLogicCase::GetEntityClassInfo(void)::g_EntityCLogicCaseClassInfo;
  CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass.m_pBaseClassInfo = CLogicCase::GetEntityClassInfo(void)::g_EntityCLogicCaseClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicCaseClass = &CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass;
  CLogicCase::GetEntityClassInfo(void)::g_EntityCLogicCaseClassInfo.m_pClass = &CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass;
  CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicCaseClass->m_pComponentOverrides = 0;
  return &CLogicCase::GetEntityClassInternal(void)::g_EntityCLogicCaseClass;
}


// CLogicCase::GetDataDescMap  (line 1764, @0x0000000002283bc0, libserver.so)
// globals: CLogicCase::m_DataMap
datamap_t *__fastcall CLogicCase::GetDataDescMap(CLogicCase *const this)
{
  return &CLogicCase::m_DataMap;
}


// CLogicCase::AddDatadescMetadataKeys  (line 1764, @0x0000000002293070, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicCase::GetEntityClass(void)
void __fastcall CLogicCase::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicCase::GetEntityClass);
}


// CLogicCase::GetBaseMap  (line 1764, @0x0000000002293090, libserver.so)
datamap_t *__cdecl CLogicCase::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicCase>  (line 1764, @0x00000000022930a0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicCase"
// globals: `guard variable for'DataMapInit<CLogicCase>(CLogicCase *)::nameHolder, `guard variable for'DataMapInit<CLogicCase>(CLogicCase *)::dataDesc, CLogicCase::GetEntityClass(void), CLogicCase::m_DataMap, DataMapInit<CLogicCase>(CLogicCase *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicCase>(CLogicCase *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicCase>(CLogicCase *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicCase>(CLogicCase *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicCase>(CLogicCase *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicCase>(CLogicCase *)::nameHolder.m_pszBase = "CLogicCase";
    DataMapInit<CLogicCase>(CLogicCase *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicCase>(CLogicCase *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicCase>(CLogicCase *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicCase>(CLogicCase *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicCase>(CLogicCase *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicCase>(CLogicCase *)::nameHolder,
      &_dso_handle);
  }
  CLogicCase::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLogicCase>(CLogicCase *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicCase>(CLogicCase *)::dataDesc) != 0 )
  {
    DataMapInit<CLogicCase>(CLogicCase *)::dataDesc[1].fieldSize = 16;
    DataMapInit<CLogicCase>(CLogicCase *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicCase>(CLogicCase *)::dataDesc);
  }
  CLogicCase::m_DataMap.dataNumFields = 9;
  CLogicCase::m_DataMap.dataDesc = &DataMapInit<CLogicCase>(CLogicCase *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicCase::m_DataMap, CLogicCase::GetEntityClass);
  return &CLogicCase::m_DataMap;
}


// CLogicCase::Spawn  (line 1790, @0x0000000002284ac0, libserver.so)
// calls: CLogicalEntity::Spawn
void __fastcall CLogicCase::Spawn(CLogicCase *const this, const CEntityKeyValues *pKeyValues)
{
  CLogicalEntity::Spawn(this, pKeyValues);
  this->m_nLastShuffleCase = -1;
}


// CLogicCase::InputValue  (line 1804, @0x00000000022a00a0, libserver.so)  // inlines: AssignTo, CVariantBase, FireOutput, FireOutput<CVariantBase<CVariantDefaultAllocator> >, Free, Set, TempString, ToString, operator=, ~CVariantBase
// calls: V_stricmp_fast, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CEntityIOOutput::FireOutputInternal, V_snprintf, VariantFieldTypeName, Warning, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_22A00DC, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CLogicCase::InputValue(CLogicCase *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  const char *m_pszString; // r15
  __int64 v6; // rbx
  CBaseEntity *pActivator; // r15
  CBaseEntity *v8; // rsi
  const char *v9; // rax
  double m_float; // xmm0_8
  const char *v11; // rcx
  CVariant value; // [rsp+10h] [rbp-40h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_15;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_17;
      case 3:
      case 39:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        break;
      case 4:
      case 27:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_19;
      case 6:
        v11 = "true";
        if ( inputdata->value.m_char == 0 )
          v11 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v11);
        goto LABEL_23;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_19;
      case 9:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        break;
      case 25:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_23;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_23:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_17:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_19:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_15:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  v6 = 0;
  while ( this->m_nCase[v6].u.m_Id == 0 || V_stricmp_fast(this->m_nCase[v6].u.m_Id, m_pszString) != 0 )
  {
    if ( ++v6 == 16 )
    {
      pActivator = inputdata->pActivator;
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(
        &inputdata->value,
        &this->m_OnDefault.m_Value);
      CEntityIOOutput::FireOutputInternal(&this->m_OnDefault, pActivator, this, &this->m_OnDefault.m_Value, 0.0);
      return;
    }
  }
  v8 = inputdata->pActivator;
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnCase[v6], v8, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CLogicCase::BuildCaseMap  (line 1827, @0x00000000022931d0, libserver.so)  // inlines: GetOutputConnectionCount, memset
// callers: CLogicCase::InputPickRandomShuffle, CLogicCase::InputPickRandom
int __fastcall CLogicCase::BuildCaseMap(CLogicCase *const this, unsigned __int8 *puchCaseMap)
{
  EntityIOConnection_t **p_m_pConnections; // rcx
  int v3; // edx
  int result; // eax
  __int64 v5; // rdi

  p_m_pConnections = &this->m_OnCase[0].m_pConnections;
  v3 = 0;
  *puchCaseMap = 0;
  result = 0;
  *(puchCaseMap + 1) = 0;
  do
  {
    if ( *p_m_pConnections != 0 )
    {
      v5 = result++;
      puchCaseMap[v5] = v3;
    }
    ++v3;
    p_m_pConnections += 3;
  }
  while ( v3 != 16 );
  return result;
}


// CLogicCase::InputPickRandom  (line 1848, @0x000000000229ee90, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetDebugName, ~CVariantBase
// calls: CLogicCase::BuildCaseMap, CEntityIdentity::GetDebugName, DevMsg, CEntityIOOutput::FireOutputInternal, __stack_chk_fail, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "Firing PickRandom input on logic_case %s with no cases set up\n"
void __fastcall CLogicCase::InputPickRandom(CLogicCase *const this, inputdata_t *const inputdata)
{
  int v4; // eax
  __int64 v5; // rax
  const char *DebugName; // rax
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int8 uchCaseMap[24]; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  v4 = CLogicCase::BuildCaseMap(this, uchCaseMap);
  if ( v4 <= 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg(1, "Firing PickRandom input on logic_case %s with no cases set up\n", DebugName);
  }
  else
  {
    v5 = uchCaseMap[(*(*random_valve + 16LL))(random_valve, 0, (v4 - 1))];
    if ( v5 <= 15 )
    {
      pActivator = inputdata->pActivator;
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnCase[v5], pActivator, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
  }
}


// CLogicCase::InputPickRandomShuffle  (line 1878, @0x000000000229ecf0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetDebugName, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CLogicCase::BuildCaseMap, CEntityIdentity::GetDebugName, DevMsg, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "Firing PickRandom input on logic_case %s with no cases set up\n"
void __fastcall CLogicCase::InputPickRandomShuffle(CLogicCase *const this, inputdata_t *const inputdata)
{
  int m_nShuffleCases; // eax
  __int64 v5; // r14
  unsigned int v6; // r13d
  int v7; // eax
  CBaseEntity *pCaller; // rdx
  CBaseEntity *pActivator; // rsi
  int m_nLastShuffleCase; // edi
  __int64 v11; // rcx
  unsigned __int8 v12; // dl
  const char *DebugName; // rax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_nShuffleCases = this->m_nShuffleCases;
  if ( m_nShuffleCases != 0
    || (m_nShuffleCases = CLogicCase::BuildCaseMap(this, this->m_uchShuffleCaseMap),
        this->m_nShuffleCases = m_nShuffleCases,
        m_nShuffleCases <= 1) )
  {
    if ( m_nShuffleCases <= 0 )
    {
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      DevMsg(1, "Firing PickRandom input on logic_case %s with no cases set up\n", DebugName);
      return;
    }
  }
  else
  {
    m_nLastShuffleCase = this->m_nLastShuffleCase;
    if ( m_nLastShuffleCase != -1 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = this->m_uchShuffleCaseMap[v11];
        if ( m_nLastShuffleCase == v12 )
          break;
        if ( m_nShuffleCases <= ++v11 )
          goto LABEL_3;
      }
      this->m_uchShuffleCaseMap[v11] = this->m_uchShuffleCaseMap[--m_nShuffleCases];
      this->m_uchShuffleCaseMap[m_nShuffleCases] = v12;
    }
  }
LABEL_3:
  v5 = (*(*random_valve + 16LL))(random_valve, 0, (m_nShuffleCases - 1));
  v6 = this->m_uchShuffleCaseMap[v5];
  if ( v6 <= 0xF )
  {
    pCaller = inputdata->pCaller;
    value.m_uint64 = 0;
    pActivator = inputdata->pActivator;
    value.m_flags = 0;
    value.m_type = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnCase[v6], pActivator, pCaller, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  v7 = this->m_nShuffleCases - 1;
  this->m_uchShuffleCaseMap[v5] = this->m_uchShuffleCaseMap[v7];
  this->m_nShuffleCases = v7;
  this->m_nLastShuffleCase = v6;
}


// CLogicCompare::~CLogicCompare  (line 1940, @0x00000000022a97b0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicCompare::~CLogicCompare(CLogicCompare *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicCompare::~CLogicCompare  (line 1940, @0x00000000022a97d0, libserver.so)  // inlines: ~CLogicCompare, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicCompare::~CLogicCompare(CLogicCompare *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicCompare::GetEntityClass  (line 1942, @0x00000000022a5dc0, libserver.so)
CEntityClass *__cdecl CLogicCompare::GetEntityClass()
{
  return g_pEntityCLogicCompareClass;
}


// CLogicCompare::Schema_DynamicBinding  (line 1942, @0x00000000022a5dd0, libserver.so)
// globals: CLogicCompare::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicCompare::Schema_DynamicBinding(const CLogicCompare *const this)
{
  return CLogicCompare::s_pSchemaBinding;
}


// CLogicCompare::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1942, @0x00000000022a5de0, libserver.so)
// globals: CLogicCompare::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicCompare::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicCompare::CEntityInstanceEntityClass *const this)
{
  return CLogicCompare::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicCompare::CEntityInstanceEntityClass::DestructInstance  (line 1942, @0x00000000022a5df0, libserver.so)  // inlines: Destruct<CLogicCompare>
void __fastcall CLogicCompare::CEntityInstanceEntityClass::DestructInstance(
        CLogicCompare::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicCompare::CEntityInstanceEntityClass::FreeInstance  (line 1942, @0x00000000022a5e10, libserver.so)
void __fastcall CLogicCompare::CEntityInstanceEntityClass::FreeInstance(
        CLogicCompare::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicCompare::CEntityInstanceEntityClass::CanAllocate  (line 1942, @0x00000000022a5e30, libserver.so)
bool __fastcall CLogicCompare::CEntityInstanceEntityClass::CanAllocate(
        const CLogicCompare::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicCompare::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1942, @0x00000000022a5e40, libserver.so)
// globals: CLogicCompare::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicCompare::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicCompare::CEntityInstanceEntityClass *const this)
{
  return CLogicCompare::s_pSchemaBinding;
}


// CLogicCompare::CEntityInstanceEntityClass::AllocateInstance  (line 1942, @0x00000000022a8300, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicCompare::CEntityInstanceEntityClass::AllocateInstance(
        CLogicCompare::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CLogicCompare::CEntityInstanceEntityClass::ConstructInstance  (line 1942, @0x00000000022aa4c0, libserver.so)  // inlines: CEntityOutputTemplate, CLogicCompare, CLogicalEntity, CServerOnlyEntity, Construct<CLogicCompare>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicCompare::CEntityInstanceEntityClass::ConstructInstance(
        CLogicCompare::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4061BF0;
    *(p + 98) = off_3FD2290;
    *(p + 102) = off_3FD2290;
    *(p + 106) = off_3FD2290;
    *(p + 110) = off_3FD2290;
  }
  return p;
}


// CLogicCompare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1942, @0x00000000022aacd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicCompare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicCompare::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicCompare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1942, @0x00000000022aacf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicCompare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicCompare::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicCompare::GetEntityClassInternal  (line 1942, @0x00000000022b19f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_compare", "CLogicCompare"
// globals: `guard variable for'CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass, CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass, __dso_handle, CLogicCompare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicCompare::GetEntityClassInfo(void)::g_EntityCLogicCompareClassInfo, CLogicCompare::GetEntityClassInfo(void)::g_EntityCLogicCompareClassInfo
CEntityClass *__cdecl CLogicCompare::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass);
    CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass._vptr_CEntityClass = off_4061B70;
    __cxa_guard_release(&`guard variable for'CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass);
    __cxa_atexit(
      CLogicCompare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicCompareClass != 0 )
    return &CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass;
  if ( `guard variable for'CLogicCompare::GetEntityClassInfo(void)::g_EntityCLogicCompareClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicCompare::GetEntityClassInfo(void)::g_EntityCLogicCompareClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicCompare::GetEntityClassInfo(void)::g_EntityCLogicCompareClassInfo,
      "CLogicCompare",
      "logic_compare",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicCompare::GetEntityClassInfo(void)::g_EntityCLogicCompareClassInfo);
  }
  CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass.m_pClassInfo = &CLogicCompare::GetEntityClassInfo(void)::g_EntityCLogicCompareClassInfo;
  CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass.m_pBaseClassInfo = CLogicCompare::GetEntityClassInfo(void)::g_EntityCLogicCompareClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicCompareClass = &CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass;
  CLogicCompare::GetEntityClassInfo(void)::g_EntityCLogicCompareClassInfo.m_pClass = &CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass;
  CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicCompareClass->m_pComponentOverrides = 0;
  return &CLogicCompare::GetEntityClassInternal(void)::g_EntityCLogicCompareClass;
}


// CLogicCompare::GetDataDescMap  (line 1969, @0x0000000002283bd0, libserver.so)
// globals: CLogicCompare::m_DataMap
datamap_t *__fastcall CLogicCompare::GetDataDescMap(CLogicCompare *const this)
{
  return &CLogicCompare::m_DataMap;
}


// CLogicCompare::AddDatadescMetadataKeys  (line 1969, @0x0000000002293210, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicCompare::GetEntityClass(void)
void __fastcall CLogicCompare::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicCompare::GetEntityClass);
}


// CLogicCompare::GetBaseMap  (line 1969, @0x0000000002293230, libserver.so)
datamap_t *__cdecl CLogicCompare::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicCompare>  (line 1969, @0x0000000002293240, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicCompare"
// globals: `guard variable for'DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder, `guard variable for'DataMapInit<CLogicCompare>(CLogicCompare *)::dataDesc, CLogicCompare::GetEntityClass(void), CLogicCompare::m_DataMap, DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicCompare>(CLogicCompare *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder.m_pszBase = "CLogicCompare";
    DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicCompare>(CLogicCompare *)::nameHolder,
      &_dso_handle);
  }
  CLogicCompare::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLogicCompare>(CLogicCompare *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicCompare>(CLogicCompare *)::dataDesc) != 0 )
  {
    DataMapInit<CLogicCompare>(CLogicCompare *)::dataDesc[7].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicCompare>(CLogicCompare *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicCompare>(CLogicCompare *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicCompare>(CLogicCompare *)::dataDesc[10].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicCompare>(CLogicCompare *)::dataDesc);
  }
  CLogicCompare::m_DataMap.dataNumFields = 10;
  CLogicCompare::m_DataMap.dataDesc = &DataMapInit<CLogicCompare>(CLogicCompare *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicCompare::m_DataMap, CLogicCompare::GetEntityClass);
  return &CLogicCompare::m_DataMap;
}


// CLogicCompare::InputSetValue  (line 1995, @0x0000000002283be0, libserver.so)  // inlines: Float, operator float
void __fastcall CLogicCompare::InputSetValue(CLogicCompare *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flInValue = m_float64;
}


// CLogicCompare::InputSetValueCompare  (line 2004, @0x000000000229e860, libserver.so)  // inlines: Float, operator float
// calls: CLogicCompare::DoCompare
void __fastcall CLogicCompare::InputSetValueCompare(CLogicCompare *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  __m128i m_uint; // xmm0

  if ( inputdata->value.m_type == 34 )
    m_uint = _mm_cvtpd_ps(inputdata->value.m_uint64);
  else
    m_uint = inputdata->value.m_uint;
  LODWORD(this->m_flInValue) = m_uint.m128i_i32[0];
  CLogicCompare::DoCompare(this, inputdata->pActivator, m_uint, v2);
}


// CLogicCompare::InputSetCompareValue  (line 2013, @0x0000000002283c20, libserver.so)  // inlines: Float, operator float
void __fastcall CLogicCompare::InputSetCompareValue(CLogicCompare *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flCompareValue = m_float64;
}


// CLogicCompare::InputCompare  (line 2021, @0x000000000229e8a0, libserver.so)
// calls: CLogicCompare::DoCompare
void __fastcall CLogicCompare::InputCompare(CLogicCompare *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4

  CLogicCompare::DoCompare(this, inputdata->pActivator, LODWORD(this->m_flInValue), v2);
}


// CLogicCompare::DoCompare  (line 2032, @0x000000000229e640, libserver.so)  // inlines: CVariantBase, FireOutput<float>, Free, Set, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CLogicCompare::InputSetValueCompare, CLogicCompare::InputCompare
void __fastcall CLogicCompare::DoCompare(
        CLogicCompare *const this,
        CBaseEntity *pActivator,
        __m128i a3,
        float flInValue)
{
  float v4; // r14d
  int v7; // xmm3_4
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  if ( *a3.m128i_i32 != this->m_flCompareValue )
  {
    this->m_OnNotEqualTo.m_Value = v4;
    value.m_type = 1;
    value.m_float = v4;
    value.m_flags = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnNotEqualTo, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      v7 = LODWORD(v4);
      if ( v4 <= this->m_flCompareValue )
      {
LABEL_4:
        this->m_OnLessThan.m_Value = v4;
        value.m_type = 1;
        value.m_flags = 0;
        value.m_float = v4;
        CEntityIOOutput::FireOutputInternal(&this->m_OnLessThan, pActivator, this, &value, 0.0);
        if ( (value.m_flags & 1) == 0 )
          return;
        goto LABEL_5;
      }
    }
    else
    {
      v7 = LODWORD(v4);
      if ( v4 <= this->m_flCompareValue )
        goto LABEL_4;
    }
    this->m_OnGreaterThan.m_Value = v4;
    value.m_type = 1;
    value.m_flags = 0;
    value.m_int = v7;
    CEntityIOOutput::FireOutputInternal(&this->m_OnGreaterThan, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) == 0 )
      return;
LABEL_5:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    return;
  }
  LODWORD(this->m_OnEqualTo.m_Value) = a3.m128i_i32[0];
  value.m_type = 1;
  value.m_int = a3.m128i_i32[0];
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnEqualTo, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CLogicCompare::DrawDebugTextOverlays  (line 2057, @0x0000000002284450, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "    Initial Value: %f", "    Compare Value: %f"
int __fastcall CLogicCompare::DrawDebugTextOverlays(
        CLogicCompare *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v5; // bl
  int v6; // r13d
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 512, "    Initial Value: %f", this->m_flInValue);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "    Compare Value: %f", this->m_flCompareValue);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    v6 += 2;
  }
  return v6;
}


// CLogicBranch::GetDataDescMap  (line 2083, @0x0000000002283c60, libserver.so)
// globals: CLogicBranch::m_DataMap
datamap_t *__fastcall CLogicBranch::GetDataDescMap(CLogicBranch *const this)
{
  return &CLogicBranch::m_DataMap;
}


// CLogicBranch::AddDatadescMetadataKeys  (line 2083, @0x0000000002293370, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicBranch::GetEntityClass(void)
void __fastcall CLogicBranch::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicBranch::GetEntityClass);
}


// CLogicBranch::GetBaseMap  (line 2083, @0x0000000002293390, libserver.so)
datamap_t *__cdecl CLogicBranch::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicBranch>  (line 2083, @0x00000000022933a0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicBranch"
// globals: `guard variable for'DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder, `guard variable for'DataMapInit<CLogicBranch>(CLogicBranch *)::dataDesc, CLogicBranch::GetEntityClass(void), CLogicBranch::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<, DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CLogicBranch>(CLogicBranch *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder.m_pszBase = "CLogicBranch";
    DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicBranch>(CLogicBranch *)::nameHolder,
      &_dso_handle);
  }
  CLogicBranch::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLogicBranch>(CLogicBranch *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicBranch>(CLogicBranch *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
    }
    DataMapInit<CLogicBranch>(CLogicBranch *)::dataDesc[2].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    DataMapInit<CLogicBranch>(CLogicBranch *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicBranch>(CLogicBranch *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicBranch>(CLogicBranch *)::dataDesc);
  }
  CLogicBranch::m_DataMap.dataNumFields = 9;
  CLogicBranch::m_DataMap.dataDesc = &DataMapInit<CLogicBranch>(CLogicBranch *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicBranch::m_DataMap, CLogicBranch::GetEntityClass);
  return &CLogicBranch::m_DataMap;
}


// CLogicBranch::UpdateOnRemove  (line 2106, @0x0000000002288f20, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: CServerEventQueue::AddEvent, CBaseEntity::UpdateOnRemove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicBranch::UpdateOnRemove(CLogicBranch *const this)
{
  __int64 i; // r12
  CHandle<CBaseEntity> *v3; // rdx
  uint32 m_Index; // eax
  __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  for ( i = 0; this->m_Listeners.m_Size > i; ++i )
  {
    v3 = &this->m_Listeners.m_Memory.m_pMemory[i];
    m_Index = v3->m_Index;
    if ( v3->m_Index + 2 > 1 )
    {
      v5 = v3->m_Index;
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[v5 & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
          CServerEventQueue::AddEvent(&g_EventQueue, this, "_OnLogicBranchRemoved", 0.0, this, this, 0);
      }
    }
  }
  CBaseEntity::UpdateOnRemove(this);
}


// CLogicBranch::InputSetValue  (line 2125, @0x000000000229d830, libserver.so)
// calls: CLogicBranch::UpdateValue
void __fastcall CLogicBranch::InputSetValue(CLogicBranch *const this, inputdata_t *const inputdata)
{
  CLogicBranch::UpdateValue(
    this,
    inputdata->value.m_char,
    inputdata->pActivator,
    CLogicBranch::LogicBranchFire_t::LOGIC_BRANCH_NO_FIRE);
}


// CLogicBranch::InputSetValueTest  (line 2135, @0x000000000229d850, libserver.so)
// calls: CLogicBranch::UpdateValue
void __fastcall CLogicBranch::InputSetValueTest(CLogicBranch *const this, inputdata_t *const inputdata)
{
  CLogicBranch::UpdateValue(
    this,
    inputdata->value.m_char,
    inputdata->pActivator,
    CLogicBranch::LogicBranchFire_t::LOGIC_BRANCH_FIRE);
}


// CLogicBranch::InputToggle  (line 2144, @0x000000000229d870, libserver.so)
// calls: CLogicBranch::UpdateValue
void __fastcall CLogicBranch::InputToggle(CLogicBranch *const this, inputdata_t *const inputdata)
{
  CLogicBranch::UpdateValue(
    this,
    !this->m_bInValue,
    inputdata->pActivator,
    CLogicBranch::LogicBranchFire_t::LOGIC_BRANCH_NO_FIRE);
}


// CLogicBranch::InputToggleTest  (line 2154, @0x000000000229d8a0, libserver.so)
// calls: CLogicBranch::UpdateValue
void __fastcall CLogicBranch::InputToggleTest(CLogicBranch *const this, inputdata_t *const inputdata)
{
  CLogicBranch::UpdateValue(
    this,
    !this->m_bInValue,
    inputdata->pActivator,
    CLogicBranch::LogicBranchFire_t::LOGIC_BRANCH_FIRE);
}


// CLogicBranch::InputTest  (line 2163, @0x000000000229d8c0, libserver.so)
// calls: CLogicBranch::UpdateValue
void __fastcall CLogicBranch::InputTest(CLogicBranch *const this, inputdata_t *const inputdata)
{
  CLogicBranch::UpdateValue(
    this,
    this->m_bInValue,
    inputdata->pActivator,
    CLogicBranch::LogicBranchFire_t::LOGIC_BRANCH_FIRE);
}


// CLogicBranch::UpdateValue  (line 2174, @0x000000000229d700, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: CServerEventQueue::AddEvent, CEntityIOOutput::FireOutput
// callers: CLogicBranch::InputSetValue, CLogicBranch::InputSetValueTest, CLogicBranch::InputToggle, CLogicBranch::InputToggleTest, CLogicBranch::InputTest
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicBranch::UpdateValue(
        CLogicBranch *const this,
        bool bNewValue,
        CBaseEntity *pActivator,
        CLogicBranch::LogicBranchFire_t eFire)
{
  int m_Size; // eax
  __int64 v8; // r13
  int v9; // r12d
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  COutputEvent *p_m_OnTrue; // rdi

  if ( this->m_bInValue != bNewValue )
  {
    m_Size = this->m_Listeners.m_Size;
    this->m_bInValue = bNewValue;
    if ( m_Size > 0 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = &this->m_Listeners.m_Memory.m_pMemory[v8];
        m_Index = v10->m_Index;
        if ( v10->m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index && v14->m_pInstance != 0 )
              CServerEventQueue::AddEvent(&g_EventQueue, v14->m_pInstance, "_OnLogicBranchChanged", 0.0, this, this, 0);
          }
        }
        ++v9;
        ++v8;
      }
      while ( this->m_Listeners.m_Size > v9 );
    }
  }
  if ( eFire == CLogicBranch::LogicBranchFire_t::LOGIC_BRANCH_FIRE )
  {
    p_m_OnTrue = &this->m_OnTrue;
    if ( !this->m_bInValue )
      p_m_OnTrue = &this->m_OnFalse;
    CEntityIOOutput::FireOutput(p_m_OnTrue, pActivator, this);
  }
}


// CLogicBranch::GetLogicBranchState  (line 2207, @0x0000000002293520, libserver.so)
bool __fastcall CLogicBranch::GetLogicBranchState(CLogicBranch *const this)
{
  return this->m_bInValue;
}


// CLogicBranch::AddLogicBranchListener  (line 2215, @0x00000000022a0f20, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CLogicBranchList::Activate
void __fastcall CLogicBranch::AddLogicBranchListener(CLogicBranch *const this, CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  __int64 m_Size; // r12
  int v10; // eax
  CHandle<CBaseEntity> *v11; // rax
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-20h] BYREF

  src.m_Index = -1;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    }
  }
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_Listeners, &src) == -1 )
  {
    src.m_Index = -1;
    if ( pEntity != 0 )
    {
      v6 = pEntity->m_pEntity;
      if ( v6 != 0 )
      {
        v7 = (v6->m_EHandle.m_Index >> 15) - (v6->m_flags & 1);
        v8 = 0x7FFF;
        if ( v6->m_EHandle.m_Index != -1 )
          v8 = v6->m_EHandle.m_Index & 0x7FFF;
        LOWORD(src.m_Index) = v8 | src.m_Index & 0x8000;
        src.m_Index = (v7 << 15) | src.m_Index & 0x7FFF;
      }
    }
    m_Size = this->m_Listeners.m_Size;
    v10 = this->m_Listeners.m_Size;
    if ( m_Size == this->m_Listeners.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_Listeners.m_Memory, 1);
      v10 = this->m_Listeners.m_Size;
    }
    this->m_Listeners.m_Size = v10 + 1;
    v11 = &this->m_Listeners.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
      v11->m_Index = src.m_Index;
  }
}


// CLogicBranch::DrawDebugTextOverlays  (line 2226, @0x0000000002284580, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Branch value: %s"
int __fastcall CLogicBranch::DrawDebugTextOverlays(
        CLogicBranch *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v5; // r12
  int v6; // ebx
  const char *v7; // rcx
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v10; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v10 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    v7 = "TRUE";
    if ( !this->m_bInValue )
      v7 = "FALSE";
    V_snprintf(tempstr, 512, "Branch value: %s", v7);
    CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CLogicAutosave::~CLogicAutosave  (line 2246, @0x00000000022a9800, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicAutosave::~CLogicAutosave(CLogicAutosave *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicAutosave::~CLogicAutosave  (line 2246, @0x00000000022a9820, libserver.so)  // inlines: ~CLogicAutosave, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicAutosave::~CLogicAutosave(CLogicAutosave *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicAutosave::GetEntityClass  (line 2248, @0x00000000022a5e50, libserver.so)
CEntityClass *__cdecl CLogicAutosave::GetEntityClass()
{
  return g_pEntityCLogicAutosaveClass;
}


// CLogicAutosave::Schema_DynamicBinding  (line 2248, @0x00000000022a5e60, libserver.so)
// globals: CLogicAutosave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicAutosave::Schema_DynamicBinding(const CLogicAutosave *const this)
{
  return CLogicAutosave::s_pSchemaBinding;
}


// CLogicAutosave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2248, @0x00000000022a5e70, libserver.so)
// globals: CLogicAutosave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicAutosave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicAutosave::CEntityInstanceEntityClass *const this)
{
  return CLogicAutosave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicAutosave::CEntityInstanceEntityClass::DestructInstance  (line 2248, @0x00000000022a5e80, libserver.so)  // inlines: Destruct<CLogicAutosave>
void __fastcall CLogicAutosave::CEntityInstanceEntityClass::DestructInstance(
        CLogicAutosave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicAutosave::CEntityInstanceEntityClass::FreeInstance  (line 2248, @0x00000000022a5ea0, libserver.so)
void __fastcall CLogicAutosave::CEntityInstanceEntityClass::FreeInstance(
        CLogicAutosave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicAutosave::CEntityInstanceEntityClass::CanAllocate  (line 2248, @0x00000000022a5ec0, libserver.so)
bool __fastcall CLogicAutosave::CEntityInstanceEntityClass::CanAllocate(
        const CLogicAutosave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicAutosave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2248, @0x00000000022a5ed0, libserver.so)
// globals: CLogicAutosave::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicAutosave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicAutosave::CEntityInstanceEntityClass *const this)
{
  return CLogicAutosave::s_pSchemaBinding;
}


// CLogicAutosave::CEntityInstanceEntityClass::AllocateInstance  (line 2248, @0x00000000022a8340, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicAutosave::CEntityInstanceEntityClass::AllocateInstance(
        CLogicAutosave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CLogicAutosave::CEntityInstanceEntityClass::ConstructInstance  (line 2248, @0x00000000022a8d90, libserver.so)  // inlines: CLogicAutosave, CLogicalEntity, CServerOnlyEntity, Construct<CLogicAutosave>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicAutosave::CEntityInstanceEntityClass::ConstructInstance(
        CLogicAutosave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40629B0;
  }
  return p;
}


// CLogicAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2248, @0x00000000022aad20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicAutosave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2248, @0x00000000022aad40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicAutosave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicAutosave::GetEntityClassInfo  (line 2248, @0x00000000022b1b40, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CLogicActiveAutosave::GetEntityClassInternal
// strings: "logic_autosave", "CLogicAutosave", "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo, CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo
CEntityClassInfo *__cdecl CLogicAutosave::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo != 0 )
    return &CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo) == 0 )
    return &CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo;
  if ( `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo,
        "CServerOnlyEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo,
      "CLogicalEntity",
      0,
      0,
      &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo,
    "CLogicAutosave",
    "logic_autosave",
    0,
    &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo);
  return &CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo;
}


// CLogicAutosave::GetEntityClassInternal  (line 2248, @0x00000000022b1c50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_autosave", "CLogicAutosave"
// globals: `guard variable for'CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass, CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass, __dso_handle, CLogicAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo, CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo
CEntityClass *__cdecl CLogicAutosave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass);
    CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass._vptr_CEntityClass = off_4062930;
    __cxa_guard_release(&`guard variable for'CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass);
    __cxa_atexit(
      CLogicAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicAutosaveClass != 0 )
    return &CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass;
  if ( `guard variable for'CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo,
      "CLogicAutosave",
      "logic_autosave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo);
  }
  CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass.m_pClassInfo = &CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo;
  CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass.m_pBaseClassInfo = CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicAutosaveClass = &CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass;
  CLogicAutosave::GetEntityClassInfo(void)::g_EntityCLogicAutosaveClassInfo.m_pClass = &CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass;
  CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicAutosaveClass->m_pComponentOverrides = 0;
  return &CLogicAutosave::GetEntityClassInternal(void)::g_EntityCLogicAutosaveClass;
}


// CLogicAutosave::GetDataDescMap  (line 2262, @0x0000000002283c70, libserver.so)
// globals: CLogicAutosave::m_DataMap
datamap_t *__fastcall CLogicAutosave::GetDataDescMap(CLogicAutosave *const this)
{
  return &CLogicAutosave::m_DataMap;
}


// CLogicAutosave::AddDatadescMetadataKeys  (line 2262, @0x0000000002293530, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicAutosave::GetEntityClass(void)
void __fastcall CLogicAutosave::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicAutosave::GetEntityClass);
}


// CLogicAutosave::GetBaseMap  (line 2262, @0x0000000002293550, libserver.so)
datamap_t *__cdecl CLogicAutosave::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicAutosave>  (line 2262, @0x0000000002293560, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicAutosave"
// globals: `guard variable for'DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder, CLogicAutosave::GetEntityClass(void), CLogicAutosave::m_DataMap, DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicAutosave>(CLogicAutosave *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder.m_pszBase = "CLogicAutosave";
    DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicAutosave>(CLogicAutosave *)::nameHolder,
      &_dso_handle);
  }
  CLogicAutosave::m_DataMap.dataNumFields = 6;
  CLogicAutosave::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  CLogicAutosave::m_DataMap.dataDesc = &DataMapInit<CLogicAutosave>(CLogicAutosave *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicAutosave::m_DataMap, CLogicAutosave::GetEntityClass);
  return &CLogicAutosave::m_DataMap;
}


// CLogicAutosave::InputSave  (line 2275, @0x0000000002283c80, libserver.so)  // inlines: GetSaveRestore
// callers: CLogicActiveAutosave::SaveThink
// strings: "save autosave\n"
void __fastcall CLogicAutosave::InputSave(CLogicAutosave *const this, inputdata_t *const inputdata)
{
  if ( this->m_bForceNewLevelUnit )
    (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 80LL))(*(&stru_1A0B8.r_offset + g_pGameEntitySystem), inputdata);
  (*(*engine + 280LL))(engine, "save autosave\n");
}


// CLogicAutosave::InputSaveDangerous  (line 2288, @0x000000000228ab80, libserver.so)  // inlines: Float, GetDeathTime, GetSaveRestore, curtime, operator float
// calls: UTIL_PlayerByIndex, CBaseEntity::GetHealth
// callers: CLogicActiveAutosave::SaveThink
// strings: "autosavedangerous\n", "autosavedangerousissafe\n"
void __fastcall CLogicAutosave::InputSaveDangerous(CLogicAutosave *const this, inputdata_t *const inputdata)
{
  CBasePlayer *v4; // rax
  double v5; // xmm2_8
  CBasePlayer *v6; // r13
  float m_fAutoSaveDangerousTime; // xmm0_4
  float m_flCurrentTime; // xmm0_4
  CSource2Server *v9; // r15
  CGlobalVars *v10; // r13
  CSource2Server *v11; // rax
  float m_float64; // xmm1_4
  double v13; // xmm1_8
  CGlobalVars *v14; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  double v16; // xmm0_8
  double v17; // xmm3_8
  FnGlobalVarsWarningFunc v18; // rax
  CGlobalVars *v19; // r15
  FnGlobalVarsWarningFunc v20; // rax
  float v21; // [rsp+Ch] [rbp-34h]
  float m_Value; // [rsp+Ch] [rbp-34h]

  v4 = UTIL_PlayerByIndex(1);
  v5 = 0.0;
  v6 = v4;
  m_fAutoSaveDangerousTime = g_pSource2ServerInternal->m_fAutoSaveDangerousTime;
  if ( m_fAutoSaveDangerousTime != 0.0 )
  {
    v13 = 0.0;
    v14 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v21 = g_pSource2ServerInternal->m_fAutoSaveDangerousTime;
          (m_pfnWarningFunc)(1, m_fAutoSaveDangerousTime, 0.0);
          m_fAutoSaveDangerousTime = v21;
        }
      }
      *&v13 = LODWORD(v14->m_flCurrentTime);
    }
    if ( m_fAutoSaveDangerousTime >= *&v13 )
    {
      *&v16 = LODWORD(v6->m_flDeathTime.m_Value);
      v17 = 0.0;
      if ( *&v16 == 0.0 )
        goto LABEL_19;
      v19 = gpGlobals;
      v13 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v20 = gpGlobals->m_pfnWarningFunc;
          if ( v20 != 0 )
          {
            m_Value = v6->m_flDeathTime.m_Value;
            (v20)(1, *&v16, 0.0, v5, 0.0);
            *&v16 = LODWORD(m_Value);
          }
        }
        *&v13 = LODWORD(v19->m_flCurrentTime);
      }
      if ( *&v16 > *&v13 )
LABEL_19:
        (*(*engine + 280LL))(engine, "autosavedangerousissafe\n", v16, v13, v5, v17);
    }
  }
  if ( this->m_bForceNewLevelUnit )
    (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 80LL))(*(&stru_1A0B8.r_offset + g_pGameEntitySystem));
  if ( CBaseEntity::GetHealth(v6) >= this->m_minHitPoints )
  {
    (*(*engine + 280LL))(engine, "autosavedangerous\n");
    m_flCurrentTime = 0.0;
    v9 = g_pSource2ServerInternal;
    v10 = gpGlobals;
    v11 = g_pSource2ServerInternal;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v18 = gpGlobals->m_pfnWarningFunc;
        if ( v18 != 0 )
          (v18)(1, 0.0);
        v11 = g_pSource2ServerInternal;
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    if ( inputdata->value.m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_float;
    v9->m_fAutoSaveDangerousTime = m_flCurrentTime + m_float64;
    v11->m_fAutoSaveDangerousMinHealthToCommit = this->m_minHitPointsToCommit;
  }
}


// CLogicActiveAutosave::~CLogicActiveAutosave  (line 2321, @0x00000000022a9850, libserver.so)  // inlines: ~CLogicAutosave, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicActiveAutosave::~CLogicActiveAutosave(CLogicActiveAutosave *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicActiveAutosave::~CLogicActiveAutosave  (line 2321, @0x00000000022a9870, libserver.so)  // inlines: ~CLogicActiveAutosave, ~CLogicAutosave, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicActiveAutosave::~CLogicActiveAutosave(CLogicActiveAutosave *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicActiveAutosave::GetEntityClass  (line 2323, @0x00000000022a5ee0, libserver.so)
CEntityClass *__cdecl CLogicActiveAutosave::GetEntityClass()
{
  return g_pEntityCLogicActiveAutosaveClass;
}


// CLogicActiveAutosave::Schema_DynamicBinding  (line 2323, @0x00000000022a5ef0, libserver.so)
// globals: CLogicActiveAutosave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicActiveAutosave::Schema_DynamicBinding(
        const CLogicActiveAutosave *const this)
{
  return CLogicActiveAutosave::s_pSchemaBinding;
}


// CLogicActiveAutosave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2323, @0x00000000022a5f00, libserver.so)
// globals: CLogicActiveAutosave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicActiveAutosave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicActiveAutosave::CEntityInstanceEntityClass *const this)
{
  return CLogicActiveAutosave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicActiveAutosave::CEntityInstanceEntityClass::DestructInstance  (line 2323, @0x00000000022a5f10, libserver.so)  // inlines: Destruct<CLogicActiveAutosave>
void __fastcall CLogicActiveAutosave::CEntityInstanceEntityClass::DestructInstance(
        CLogicActiveAutosave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicActiveAutosave::CEntityInstanceEntityClass::FreeInstance  (line 2323, @0x00000000022a5f30, libserver.so)
void __fastcall CLogicActiveAutosave::CEntityInstanceEntityClass::FreeInstance(
        CLogicActiveAutosave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicActiveAutosave::CEntityInstanceEntityClass::CanAllocate  (line 2323, @0x00000000022a5f50, libserver.so)
bool __fastcall CLogicActiveAutosave::CEntityInstanceEntityClass::CanAllocate(
        const CLogicActiveAutosave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicActiveAutosave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2323, @0x00000000022a5f60, libserver.so)
// globals: CLogicActiveAutosave::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicActiveAutosave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicActiveAutosave::CEntityInstanceEntityClass *const this)
{
  return CLogicActiveAutosave::s_pSchemaBinding;
}


// CLogicActiveAutosave::CEntityInstanceEntityClass::AllocateInstance  (line 2323, @0x00000000022a8380, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicActiveAutosave::CEntityInstanceEntityClass::AllocateInstance(
        CLogicActiveAutosave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CLogicActiveAutosave::CEntityInstanceEntityClass::ConstructInstance  (line 2323, @0x00000000022a8dc0, libserver.so)  // inlines: CLogicActiveAutosave, CLogicAutosave, CLogicalEntity, CServerOnlyEntity, Construct<CLogicActiveAutosave>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicActiveAutosave::CEntityInstanceEntityClass::ConstructInstance(
        CLogicActiveAutosave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40630D0;
  }
  return p;
}


// CLogicActiveAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2323, @0x00000000022aad70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicActiveAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicActiveAutosave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicActiveAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2323, @0x00000000022aad90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicActiveAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicActiveAutosave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicActiveAutosave::GetEntityClassInternal  (line 2323, @0x00000000022b1da0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicAutosave::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_active_autosave", "CLogicActiveAutosave"
// globals: `guard variable for'CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass, CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass, __dso_handle, CLogicActiveAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicActiveAutosave::GetEntityClassInfo(void)::g_EntityCLogicActiveAutosaveClassInfo, CLogicActiveAutosave::GetEntityClassInfo(void)::g_EntityCLogicActiveAutosaveClassInfo
CEntityClass *__cdecl CLogicActiveAutosave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass);
    CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass._vptr_CEntityClass = off_4063050;
    __cxa_guard_release(&`guard variable for'CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass);
    __cxa_atexit(
      CLogicActiveAutosave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicActiveAutosaveClass != 0 )
    return &CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass;
  if ( `guard variable for'CLogicActiveAutosave::GetEntityClassInfo(void)::g_EntityCLogicActiveAutosaveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicActiveAutosave::GetEntityClassInfo(void)::g_EntityCLogicActiveAutosaveClassInfo) != 0 )
  {
    EntityClassInfo = CLogicAutosave::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicActiveAutosave::GetEntityClassInfo(void)::g_EntityCLogicActiveAutosaveClassInfo,
      "CLogicActiveAutosave",
      "logic_active_autosave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicActiveAutosave::GetEntityClassInfo(void)::g_EntityCLogicActiveAutosaveClassInfo);
  }
  CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass.m_pClassInfo = &CLogicActiveAutosave::GetEntityClassInfo(void)::g_EntityCLogicActiveAutosaveClassInfo;
  CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass.m_pBaseClassInfo = CLogicActiveAutosave::GetEntityClassInfo(void)::g_EntityCLogicActiveAutosaveClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicActiveAutosaveClass = &CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass;
  CLogicActiveAutosave::GetEntityClassInfo(void)::g_EntityCLogicActiveAutosaveClassInfo.m_pClass = &CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass;
  CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicActiveAutosaveClass->m_pComponentOverrides = 0;
  return &CLogicActiveAutosave::GetEntityClassInternal(void)::g_EntityCLogicActiveAutosaveClass;
}


// CLogicActiveAutosave::InputEnable  (line 2325, @0x00000000022ab680, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CLogicActiveAutosave::SaveThink(void)
void __fastcall CLogicActiveAutosave::InputEnable(CLogicActiveAutosave *const this, inputdata_t *const inputdata)
{
  double v3; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  this->m_flStartTime = -1.0;
  CBaseEntity::ThinkSet(this, CLogicActiveAutosave::SaveThink, 0.0, 0, 0);
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


// CLogicActiveAutosave::InputDisable  (line 2332, @0x00000000022a9f20, libserver.so)
// calls: CBaseEntity::ThinkSet
void __fastcall CLogicActiveAutosave::InputDisable(CLogicActiveAutosave *const this, inputdata_t *const inputdata)
{
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CLogicActiveAutosave::SaveThink  (line 2337, @0x00000000022b5290, libserver.so)  // inlines: CUtlSymbolLarge, CVariantBase, Free, GetEntityName, SetFloat, curtime, entindex, inputdata_t, operator=, ~CVariantBase, ~inputdata_t
// calls: UTIL_GetLocalPlayer, CBaseEntity::GetHealth, CBaseEntity::SetNextThink, CEntityInstance::GetEntityIndex, DevMsg, CLogicAutosave::InputSave, CLogicAutosave::InputSaveDangerous, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "logic_active_autosave (%s, %d) triggered\n"
void __fastcall CLogicActiveAutosave::SaveThink(CLogicActiveAutosave *const this)
{
  CBasePlayer *LocalPlayer; // rax
  double v3; // xmm0_8
  float m_flTimeToTrigger; // xmm1_4
  float m_flCurrentTime; // xmm2_4
  CGlobalVars *v6; // r13
  FnGlobalVarsWarningFunc v7; // rax
  float m_flStartTime; // xmm0_4
  CGlobalVars *v9; // r12
  CGlobalVars *v10; // rax
  __int64 v11; // xmm1_8
  double v12; // xmm0_8
  void (__fastcall *v13)(__int64, double); // rax
  CEntityIndex v14; // ecx
  const char *m_pAsString; // rdx
  float m_flDangerousTime; // r13d
  bool v17; // zf
  CGlobalVars *v18; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  unsigned int thinkInterval; // [rsp+Ch] [rbp-54h]
  inputdata_t inputdata; // [rsp+10h] [rbp-50h] BYREF

  LocalPlayer = UTIL_GetLocalPlayer();
  if ( LocalPlayer == 0 )
  {
    m_flStartTime = this->m_flStartTime;
    v9 = gpGlobals;
    v10 = gpGlobals;
    goto LABEL_13;
  }
  if ( this->m_flStartTime < 0.0 )
  {
    if ( CBaseEntity::GetHealth(LocalPlayer) > this->m_minHitPoints )
      goto LABEL_22;
    v10 = gpGlobals;
    v18 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v9 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        v9 = gpGlobals;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v9 = gpGlobals;
          v10 = gpGlobals;
        }
      }
      m_flStartTime = v18->m_flCurrentTime;
    }
    else
    {
      v9 = 0;
      m_flStartTime = 0.0;
    }
    this->m_flStartTime = m_flStartTime;
LABEL_13:
    v11 = 1056964608;
    if ( m_flStartTime >= 0.0 )
      goto LABEL_14;
    goto LABEL_32;
  }
  if ( CBaseEntity::GetHealth(LocalPlayer) >= this->m_TriggerHitPoints )
  {
    inputdata.value.m_type = 0;
    inputdata.value.m_flags = 0;
    inputdata.value.m_uint64 = 0;
    v14.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    DevMsg(2, "logic_active_autosave (%s, %d) triggered\n", m_pAsString, v14.m_Data);
    m_flDangerousTime = this->m_flDangerousTime;
    if ( m_flDangerousTime == 0.0 )
    {
      CLogicAutosave::InputSave(this, &inputdata);
    }
    else
    {
      inputdata.value.m_type = 1;
      inputdata.value.m_uint64 = LODWORD(m_flDangerousTime);
      CLogicAutosave::InputSaveDangerous(this, &inputdata);
    }
    v17 = (inputdata.value.m_flags & 1) == 0;
    m_flStartTime = -1.0;
    this->m_flStartTime = -1.0;
    if ( !v17 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, inputdata.value.m_uint64);
LABEL_22:
      m_flStartTime = this->m_flStartTime;
    }
    v9 = gpGlobals;
    v10 = gpGlobals;
    goto LABEL_13;
  }
  m_flTimeToTrigger = this->m_flTimeToTrigger;
  if ( m_flTimeToTrigger <= 0.0 )
  {
    m_flStartTime = this->m_flStartTime;
LABEL_12:
    v9 = gpGlobals;
    v10 = gpGlobals;
    goto LABEL_13;
  }
  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v7 = gpGlobals->m_pfnWarningFunc;
      if ( v7 != 0 )
      {
        (v7)(1, v3, m_flTimeToTrigger, 0.0);
        m_flTimeToTrigger = this->m_flTimeToTrigger;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  m_flStartTime = this->m_flStartTime;
  if ( (m_flCurrentTime - m_flStartTime) <= m_flTimeToTrigger )
    goto LABEL_12;
  this->m_flStartTime = -1.0;
  v9 = gpGlobals;
  v10 = gpGlobals;
LABEL_32:
  v11 = 1065353216;
LABEL_14:
  v12 = 0.0;
  if ( v10 != 0 )
  {
    if ( !v9->m_bEnableAssertions && !v9->m_bInSimulation )
    {
      v13 = v9->m_pfnWarningFunc;
      if ( v13 != 0 )
      {
        thinkInterval = v11;
        v13(1, 0.0);
        v11 = thinkInterval;
      }
    }
    *&v12 = LODWORD(v9->m_flCurrentTime);
  }
  *&v12 = *&v12 + *&v11;
  CBaseEntity::SetNextThink(this, v12, *&v11, 0);
}


// CLogicActiveAutosave::GetDataDescMap  (line 2385, @0x0000000002283cd0, libserver.so)
// globals: CLogicActiveAutosave::m_DataMap
datamap_t *__fastcall CLogicActiveAutosave::GetDataDescMap(CLogicActiveAutosave *const this)
{
  return &CLogicActiveAutosave::m_DataMap;
}


// CLogicActiveAutosave::AddDatadescMetadataKeys  (line 2385, @0x0000000002293630, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicActiveAutosave::GetEntityClass(void)
void __fastcall CLogicActiveAutosave::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicActiveAutosave::GetEntityClass);
}


// CLogicActiveAutosave::GetBaseMap  (line 2385, @0x0000000002293650, libserver.so)
// globals: CLogicAutosave::m_DataMap
datamap_t *__cdecl CLogicActiveAutosave::GetBaseMap()
{
  return &CLogicAutosave::m_DataMap;
}


// DataMapInit<CLogicActiveAutosave>  (line 2385, @0x00000000022a03f0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicActiveAutosave"
// globals: `guard variable for'DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder, `guard variable for'DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::dataDesc, CLogicAutosave::m_DataMap, CLogicActiveAutosave::GetEntityClass(void), CLogicActiveAutosave::m_DataMap, DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_pszBase = "CLogicActiveAutosave";
    DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder,
      &_dso_handle);
  }
  CLogicActiveAutosave::m_DataMap.baseMap = &CLogicAutosave::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_pszBase), "SaveThink");
    m_Size = DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Size == DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::dataDesc[5].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::dataDesc);
  }
  CLogicActiveAutosave::m_DataMap.dataNumFields = 7;
  CLogicActiveAutosave::m_DataMap.dataDesc = &DataMapInit<CLogicActiveAutosave>(CLogicActiveAutosave *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicActiveAutosave::m_DataMap, CLogicActiveAutosave::GetEntityClass);
  return &CLogicActiveAutosave::m_DataMap;
}


// CLogicAutosave::InputSetMinHitpointsThreshold  (line 2399, @0x0000000002283ce0, libserver.so)  // inlines: Int, operator int
void __fastcall CLogicAutosave::InputSetMinHitpointsThreshold(CLogicAutosave *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float64; // eax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    this->m_minHitPoints = inputdata->value.m_float;
  }
  else
  {
    if ( m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_int;
    this->m_minHitPoints = m_float64;
  }
}


// FindPhysicsEntityByNameOrWorld  (line 2411, @0x0000000002293660, libserver.so)  // inlines: CEntityHandle, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, String, ToCStr, operator CBaseEntity*
// calls: FindPhysicsBodyByName, DevWarning(char const*,...), GetWorldEntity
// callers: CLogicCollisionPair::Activate, CLogicCollisionPair::InputEnableCollisions, CLogicCollisionPair::InputDisableCollisions
// strings: "%s: can't find physics body for %s\n"
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall FindPhysicsEntityByNameOrWorld(string_t name, CBaseEntity *pSearchingEntity)
{
  HPhysicsBody PhysicsBodyByName; // rax
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const char *v8; // rdx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  CBaseEntity *result; // rax

  if ( *name.u.m_Id == 0 )
    return GetWorldEntity();
  PhysicsBodyByName = FindPhysicsBodyByName(*name.u.m_pAsString, pSearchingEntity);
  if ( PhysicsBodyByName == 0
    || ((v5 = (*(*PhysicsBodyByName + 1328LL))(PhysicsBodyByName)) + 2) <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) == 0
    || (v7 = &v6[v5 & 0x1FF]) == 0
    || v5 != v7->m_EHandle.m_Index
    || (result = v7->m_pInstance, v7->m_pInstance == 0) )
  {
    v8 = "";
    if ( *name.u.m_Id != 0 )
      v8 = *name.u.m_pAsString;
    m_pEntity = pSearchingEntity->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    DevWarning("%s: can't find physics body for %s\n", m_pAsString, v8);
    return GetWorldEntity();
  }
  return result;
}


// CLogicCollisionPair::~CLogicCollisionPair  (line 2438, @0x00000000022a98a0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicCollisionPair::~CLogicCollisionPair(CLogicCollisionPair *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicCollisionPair::~CLogicCollisionPair  (line 2438, @0x00000000022a98c0, libserver.so)  // inlines: ~CLogicCollisionPair, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicCollisionPair::~CLogicCollisionPair(CLogicCollisionPair *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicCollisionPair::GetEntityClass  (line 2440, @0x00000000022a5f70, libserver.so)
CEntityClass *__cdecl CLogicCollisionPair::GetEntityClass()
{
  return g_pEntityCLogicCollisionPairClass;
}


// CLogicCollisionPair::Schema_DynamicBinding  (line 2440, @0x00000000022a5f80, libserver.so)
// globals: CLogicCollisionPair::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicCollisionPair::Schema_DynamicBinding(
        const CLogicCollisionPair *const this)
{
  return CLogicCollisionPair::s_pSchemaBinding;
}


// CLogicCollisionPair::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2440, @0x00000000022a5f90, libserver.so)
// globals: CLogicCollisionPair::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicCollisionPair::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicCollisionPair::CEntityInstanceEntityClass *const this)
{
  return CLogicCollisionPair::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicCollisionPair::CEntityInstanceEntityClass::DestructInstance  (line 2440, @0x00000000022a5fa0, libserver.so)  // inlines: Destruct<CLogicCollisionPair>
void __fastcall CLogicCollisionPair::CEntityInstanceEntityClass::DestructInstance(
        CLogicCollisionPair::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicCollisionPair::CEntityInstanceEntityClass::FreeInstance  (line 2440, @0x00000000022a5fc0, libserver.so)
void __fastcall CLogicCollisionPair::CEntityInstanceEntityClass::FreeInstance(
        CLogicCollisionPair::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicCollisionPair::CEntityInstanceEntityClass::CanAllocate  (line 2440, @0x00000000022a5fe0, libserver.so)
bool __fastcall CLogicCollisionPair::CEntityInstanceEntityClass::CanAllocate(
        const CLogicCollisionPair::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicCollisionPair::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2440, @0x00000000022a5ff0, libserver.so)
// globals: CLogicCollisionPair::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicCollisionPair::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicCollisionPair::CEntityInstanceEntityClass *const this)
{
  return CLogicCollisionPair::s_pSchemaBinding;
}


// CLogicCollisionPair::CEntityInstanceEntityClass::AllocateInstance  (line 2440, @0x00000000022a83c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicCollisionPair::CEntityInstanceEntityClass::AllocateInstance(
        CLogicCollisionPair::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CLogicCollisionPair::CEntityInstanceEntityClass::ConstructInstance  (line 2440, @0x00000000022a8df0, libserver.so)  // inlines: CLogicCollisionPair, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, Construct<CLogicCollisionPair>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicCollisionPair::CEntityInstanceEntityClass::ConstructInstance(
        CLogicCollisionPair::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_40637F0;
    *(p + 98) = 0;
  }
  return p;
}


// CLogicCollisionPair::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2440, @0x00000000022aadc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicCollisionPair::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicCollisionPair::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicCollisionPair::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2440, @0x00000000022aade0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicCollisionPair::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicCollisionPair::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicCollisionPair::GetEntityClassInternal  (line 2440, @0x00000000022b20e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_collision_pair", "CLogicCollisionPair"
// globals: `guard variable for'CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass, CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass, __dso_handle, CLogicCollisionPair::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicCollisionPair::GetEntityClassInfo(void)::g_EntityCLogicCollisionPairClassInfo, CLogicCollisionPair::GetEntityClassInfo(void)::g_EntityCLogicCollisionPairClassInfo
CEntityClass *__cdecl CLogicCollisionPair::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass);
    CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass._vptr_CEntityClass = off_4063770;
    __cxa_guard_release(&`guard variable for'CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass);
    __cxa_atexit(
      CLogicCollisionPair::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicCollisionPairClass != 0 )
    return &CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass;
  if ( `guard variable for'CLogicCollisionPair::GetEntityClassInfo(void)::g_EntityCLogicCollisionPairClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicCollisionPair::GetEntityClassInfo(void)::g_EntityCLogicCollisionPairClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicCollisionPair::GetEntityClassInfo(void)::g_EntityCLogicCollisionPairClassInfo,
      "CLogicCollisionPair",
      "logic_collision_pair",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicCollisionPair::GetEntityClassInfo(void)::g_EntityCLogicCollisionPairClassInfo);
  }
  CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass.m_pClassInfo = &CLogicCollisionPair::GetEntityClassInfo(void)::g_EntityCLogicCollisionPairClassInfo;
  CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass.m_pBaseClassInfo = CLogicCollisionPair::GetEntityClassInfo(void)::g_EntityCLogicCollisionPairClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicCollisionPairClass = &CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass;
  CLogicCollisionPair::GetEntityClassInfo(void)::g_EntityCLogicCollisionPairClassInfo.m_pClass = &CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass;
  CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicCollisionPairClass->m_pComponentOverrides = 0;
  return &CLogicCollisionPair::GetEntityClassInternal(void)::g_EntityCLogicCollisionPairClass;
}


// CLogicCollisionPair::Activate  (line 2468, @0x00000000022b1ef0, libserver.so)  // inlines: CUtlSymbolLarge, EnableCollisions
// calls: CBaseEntity::Activate, FindPhysicsEntityByNameOrWorld, PhysDisableEntityCollisions
void __fastcall CLogicCollisionPair::Activate(CLogicCollisionPair *const this, ActivateType_t activateType)
{
  CBaseEntity *PhysicsEntityByNameOrWorld; // r14
  CBaseEntity *v5; // rax
  string_t name; // [rsp+0h] [rbp-30h] BYREF

  if ( this->m_disabled )
  {
    name.u.m_Id = this->m_nameAttach1.u.m_Id;
    PhysicsEntityByNameOrWorld = FindPhysicsEntityByNameOrWorld(&name, this);
    name.u.m_Id = this->m_nameAttach2.u.m_Id;
    v5 = FindPhysicsEntityByNameOrWorld(&name, this);
    if ( PhysicsEntityByNameOrWorld != 0 && v5 != 0 && PhysicsEntityByNameOrWorld != v5 )
    {
      this->m_disabled = 1;
      this->m_succeeded = 1;
      PhysDisableEntityCollisions(PhysicsEntityByNameOrWorld, v5);
    }
    else
    {
      this->m_succeeded = 0;
    }
  }
  CBaseEntity::Activate(this, activateType);
}


// CLogicCollisionPair::InputDisableCollisions  (line 2477, @0x00000000022b2040, libserver.so)  // inlines: CUtlSymbolLarge, EnableCollisions
// calls: FindPhysicsEntityByNameOrWorld, PhysDisableEntityCollisions
void __fastcall CLogicCollisionPair::InputDisableCollisions(
        CLogicCollisionPair *const this,
        inputdata_t *const inputdata)
{
  CBaseEntity *PhysicsEntityByNameOrWorld; // r13
  CBaseEntity *v4; // rax
  string_t name; // [rsp+0h] [rbp-30h] BYREF

  if ( !this->m_succeeded || !this->m_disabled )
  {
    name.u.m_Id = this->m_nameAttach1.u.m_Id;
    PhysicsEntityByNameOrWorld = FindPhysicsEntityByNameOrWorld(&name, this);
    name.u.m_Id = this->m_nameAttach2.u.m_Id;
    v4 = FindPhysicsEntityByNameOrWorld(&name, this);
    if ( PhysicsEntityByNameOrWorld != 0 && v4 != 0 && PhysicsEntityByNameOrWorld != v4 )
    {
      this->m_disabled = 1;
      this->m_succeeded = 1;
      PhysDisableEntityCollisions(PhysicsEntityByNameOrWorld, v4);
    }
    else
    {
      this->m_succeeded = 0;
    }
  }
}


// CLogicCollisionPair::InputEnableCollisions  (line 2484, @0x00000000022b1fa0, libserver.so)  // inlines: CUtlSymbolLarge, EnableCollisions
// calls: FindPhysicsEntityByNameOrWorld, PhysEnableEntityCollisions
void __fastcall CLogicCollisionPair::InputEnableCollisions(
        CLogicCollisionPair *const this,
        inputdata_t *const inputdata)
{
  CBaseEntity *PhysicsEntityByNameOrWorld; // r13
  CBaseEntity *v4; // rax
  string_t name; // [rsp+0h] [rbp-30h] BYREF

  if ( !this->m_succeeded || this->m_disabled )
  {
    name.u.m_Id = this->m_nameAttach1.u.m_Id;
    PhysicsEntityByNameOrWorld = FindPhysicsEntityByNameOrWorld(&name, this);
    name.u.m_Id = this->m_nameAttach2.u.m_Id;
    v4 = FindPhysicsEntityByNameOrWorld(&name, this);
    if ( PhysicsEntityByNameOrWorld != 0 && v4 != 0 && PhysicsEntityByNameOrWorld != v4 )
    {
      this->m_disabled = 0;
      this->m_succeeded = 1;
      PhysEnableEntityCollisions(PhysicsEntityByNameOrWorld, v4);
    }
    else
    {
      this->m_succeeded = 0;
    }
  }
}


// CLogicCollisionPair::GetDataDescMap  (line 2502, @0x0000000002283d30, libserver.so)
// globals: CLogicCollisionPair::m_DataMap
datamap_t *__fastcall CLogicCollisionPair::GetDataDescMap(CLogicCollisionPair *const this)
{
  return &CLogicCollisionPair::m_DataMap;
}


// CLogicCollisionPair::AddDatadescMetadataKeys  (line 2502, @0x0000000002293750, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicCollisionPair::GetEntityClass(void)
void __fastcall CLogicCollisionPair::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicCollisionPair::GetEntityClass);
}


// CLogicCollisionPair::GetBaseMap  (line 2502, @0x0000000002293770, libserver.so)
datamap_t *__cdecl CLogicCollisionPair::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicCollisionPair>  (line 2502, @0x0000000002293780, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicCollisionPair"
// globals: `guard variable for'DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder, CLogicCollisionPair::GetEntityClass(void), CLogicCollisionPair::m_DataMap, DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder.m_pszBase = "CLogicCollisionPair";
    DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::nameHolder,
      &_dso_handle);
  }
  CLogicCollisionPair::m_DataMap.dataNumFields = 6;
  CLogicCollisionPair::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  CLogicCollisionPair::m_DataMap.dataDesc = &DataMapInit<CLogicCollisionPair>(CLogicCollisionPair *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicCollisionPair::m_DataMap, CLogicCollisionPair::GetEntityClass);
  return &CLogicCollisionPair::m_DataMap;
}


// CLogicBranchList::~CLogicBranchList  (line 2518, @0x00000000022aa620, libserver.so)  // inlines: Purge, RemoveAll, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CLogicBranchList::~CLogicBranchList(CLogicBranchList *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_LogicBranchList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4063F10;
  this->m_LogicBranchList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LogicBranchList.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_LogicBranchList.m_Memory);
    if ( (this->m_LogicBranchList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicBranchList::~CLogicBranchList  (line 2518, @0x00000000022aa7d0, libserver.so)  // inlines: Purge, RemoveAll, ~CLogicBranchList, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CLogicBranchList::~CLogicBranchList(CLogicBranchList *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_LogicBranchList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4063F10;
  this->m_LogicBranchList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LogicBranchList.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_LogicBranchList.m_Memory);
    if ( (this->m_LogicBranchList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicBranchList::GetEntityClass  (line 2520, @0x00000000022a6000, libserver.so)
CEntityClass *__cdecl CLogicBranchList::GetEntityClass()
{
  return g_pEntityCLogicBranchListClass;
}


// CLogicBranchList::Schema_DynamicBinding  (line 2520, @0x00000000022a6010, libserver.so)
// globals: CLogicBranchList::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicBranchList::Schema_DynamicBinding(const CLogicBranchList *const this)
{
  return CLogicBranchList::s_pSchemaBinding;
}


// CLogicBranchList::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2520, @0x00000000022a6020, libserver.so)
// globals: CLogicBranchList::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicBranchList::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicBranchList::CEntityInstanceEntityClass *const this)
{
  return CLogicBranchList::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicBranchList::CEntityInstanceEntityClass::DestructInstance  (line 2520, @0x00000000022a6030, libserver.so)  // inlines: Destruct<CLogicBranchList>
void __fastcall CLogicBranchList::CEntityInstanceEntityClass::DestructInstance(
        CLogicBranchList::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicBranchList::CEntityInstanceEntityClass::FreeInstance  (line 2520, @0x00000000022a6050, libserver.so)
void __fastcall CLogicBranchList::CEntityInstanceEntityClass::FreeInstance(
        CLogicBranchList::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicBranchList::CEntityInstanceEntityClass::CanAllocate  (line 2520, @0x00000000022a6070, libserver.so)
bool __fastcall CLogicBranchList::CEntityInstanceEntityClass::CanAllocate(
        const CLogicBranchList::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicBranchList::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2520, @0x00000000022a6080, libserver.so)
// globals: CLogicBranchList::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicBranchList::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicBranchList::CEntityInstanceEntityClass *const this)
{
  return CLogicBranchList::s_pSchemaBinding;
}


// CLogicBranchList::CEntityInstanceEntityClass::AllocateInstance  (line 2520, @0x00000000022a8400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicBranchList::CEntityInstanceEntityClass::AllocateInstance(
        CLogicBranchList::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CLogicBranchList::CEntityInstanceEntityClass::ConstructInstance  (line 2520, @0x00000000022aa300, libserver.so)  // inlines: CEntityIOOutput, CLogicBranchList, CLogicalEntity, CServerOnlyEntity, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CLogicBranchList>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicBranchList::CEntityInstanceEntityClass::ConstructInstance(
        CLogicBranchList::CEntityInstanceEntityClass *const this,
        void *p)
{
  _QWORD *v3; // rdx

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4063F10;
    v3 = p + 776;
    do
      *v3++ = 0;
    while ( v3 != (p + 904) );
    *(p + 226) = 0;
    *(p + 114) = 0;
    *(p + 230) = 0;
    *(p + 231) = 0;
    *(p + 117) = off_3F7C190;
    *(p + 120) = off_3F7C190;
    *(p + 123) = off_3F7C190;
  }
  return p;
}


// CLogicBranchList::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2520, @0x00000000022aae10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicBranchList::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicBranchList::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicBranchList::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2520, @0x00000000022aae30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicBranchList::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicBranchList::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicBranchList::GetEntityClassInternal  (line 2520, @0x00000000022b2230, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_branch_listener", "CLogicBranchList"
// globals: `guard variable for'CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass, CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass, __dso_handle, CLogicBranchList::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicBranchList::GetEntityClassInfo(void)::g_EntityCLogicBranchListClassInfo, CLogicBranchList::GetEntityClassInfo(void)::g_EntityCLogicBranchListClassInfo
CEntityClass *__cdecl CLogicBranchList::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass);
    CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass._vptr_CEntityClass = off_4063E90;
    __cxa_guard_release(&`guard variable for'CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass);
    __cxa_atexit(
      CLogicBranchList::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicBranchListClass != 0 )
    return &CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass;
  if ( `guard variable for'CLogicBranchList::GetEntityClassInfo(void)::g_EntityCLogicBranchListClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicBranchList::GetEntityClassInfo(void)::g_EntityCLogicBranchListClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicBranchList::GetEntityClassInfo(void)::g_EntityCLogicBranchListClassInfo,
      "CLogicBranchList",
      "logic_branch_listener",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicBranchList::GetEntityClassInfo(void)::g_EntityCLogicBranchListClassInfo);
  }
  CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass.m_pClassInfo = &CLogicBranchList::GetEntityClassInfo(void)::g_EntityCLogicBranchListClassInfo;
  CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass.m_pBaseClassInfo = CLogicBranchList::GetEntityClassInfo(void)::g_EntityCLogicBranchListClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicBranchListClass = &CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass;
  CLogicBranchList::GetEntityClassInfo(void)::g_EntityCLogicBranchListClassInfo.m_pClass = &CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass;
  CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicBranchListClass->m_pComponentOverrides = 0;
  return &CLogicBranchList::GetEntityClassInternal(void)::g_EntityCLogicBranchListClass;
}


// CLogicBranchList::GetDataDescMap  (line 2557, @0x0000000002283d40, libserver.so)
// globals: CLogicBranchList::m_DataMap
datamap_t *__fastcall CLogicBranchList::GetDataDescMap(CLogicBranchList *const this)
{
  return &CLogicBranchList::m_DataMap;
}


// CLogicBranchList::AddDatadescMetadataKeys  (line 2557, @0x0000000002293850, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicBranchList::GetEntityClass(void)
void __fastcall CLogicBranchList::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicBranchList::GetEntityClass);
}


// CLogicBranchList::GetBaseMap  (line 2557, @0x0000000002293870, libserver.so)
datamap_t *__cdecl CLogicBranchList::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicBranchList>  (line 2557, @0x0000000002293880, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicBranchList"
// globals: `guard variable for'DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder, `guard variable for'DataMapInit<CLogicBranchList>(CLogicBranchList *)::dataDesc, CLogicBranchList::GetEntityClass(void), CLogicBranchList::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<, DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CLogicBranchList>(CLogicBranchList *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder.m_pszBase = "CLogicBranchList";
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicBranchList>(CLogicBranchList *)::nameHolder,
      &_dso_handle);
  }
  CLogicBranchList::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLogicBranchList>(CLogicBranchList *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicBranchList>(CLogicBranchList *)::dataDesc) != 0 )
  {
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::dataDesc[1].fieldSize = 16;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
    }
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::dataDesc[2].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::dataDesc[7].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicBranchList>(CLogicBranchList *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicBranchList>(CLogicBranchList *)::dataDesc);
  }
  CLogicBranchList::m_DataMap.dataNumFields = 9;
  CLogicBranchList::m_DataMap.dataDesc = &DataMapInit<CLogicBranchList>(CLogicBranchList *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicBranchList::m_DataMap, CLogicBranchList::GetEntityClass);
  return &CLogicBranchList::m_DataMap;
}


// CLogicBranchList::Spawn  (line 2582, @0x0000000002284af0, libserver.so)
// calls: CLogicalEntity::Spawn
void __fastcall CLogicBranchList::Spawn(CLogicBranchList *const this, const CEntityKeyValues *pKeyValues)
{
  CLogicalEntity::Spawn(this, pKeyValues);
}


// CLogicBranchList::Activate  (line 2591, @0x00000000022a1070, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, ClassMatches, CopyConstruct<CHandle<CBaseEntity> >, Element, FClassnameIs, GetDebugName, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, String, ToCStr, operator[]
// calls: CGameEntitySystem::FindEntityGeneric, CEntityIdentity::ClassMatches, CLogicBranch::AddLogicBranchListener, CEntityIdentity::GetDebugName, DevWarning(char const*,...), CBaseEntity::Activate, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// strings: "logic_branch", "logic_branchlist %s refers to entity %s, which is not a logic_branch\n"
void __fastcall CLogicBranchList::Activate(CLogicBranchList *const this, ActivateType_t activateType)
{
  CLogicBranchList *v2; // r12
  CLogicBranch *v4; // r15
  const char *m_pAsString; // rdx
  CBaseEntity *EntityGeneric; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v8; // cx
  int m_Size; // r14d
  int v10; // edx
  CHandle<CBaseEntity> *v11; // rax
  const char *DebugName; // r14
  const char *v13; // rax
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-50h]
  uint32 *p_m_nStateFlags; // [rsp+18h] [rbp-48h]
  int v17; // [rsp+20h] [rbp-40h]

  v2 = this;
  p_m_nStateFlags = &this->m_NetworkTransmitComponent.m_nStateFlags;
  p_m_Memory = &this->m_LogicBranchList.m_Memory;
  do
  {
    v4 = 0;
    while ( 1 )
    {
      m_pAsString = "";
      if ( v2->m_nLogicBranchNames[0].u.m_Id != 0 )
        m_pAsString = v2->m_nLogicBranchNames[0].u.m_pAsString;
      EntityGeneric = CGameEntitySystem::FindEntityGeneric(g_pGameEntitySystem, v4, m_pAsString, this, 0, 0);
      v4 = EntityGeneric;
      if ( EntityGeneric == 0 )
        break;
      if ( CEntityIdentity::ClassMatches(EntityGeneric->m_pEntity, "logic_branch") )
      {
        CLogicBranch::AddLogicBranchListener(v4, this);
        m_pEntity = v4->m_pEntity;
        v17 = -1;
        if ( m_pEntity != 0 )
        {
          v8 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v17 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
        }
        m_Size = this->m_LogicBranchList.m_Size;
        v10 = m_Size;
        if ( m_Size == this->m_LogicBranchList.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(p_m_Memory, 1);
          v10 = this->m_LogicBranchList.m_Size;
        }
        this->m_LogicBranchList.m_Size = v10 + 1;
        v11 = &this->m_LogicBranchList.m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          v11->m_Index = v17;
      }
      else
      {
        DebugName = CEntityIdentity::GetDebugName(v4->m_pEntity);
        v13 = CEntityIdentity::GetDebugName(this->m_pEntity);
        DevWarning("logic_branchlist %s refers to entity %s, which is not a logic_branch\n", v13, DebugName);
      }
    }
    v2 = (v2 + 8);
  }
  while ( v2 != p_m_nStateFlags );
  CBaseEntity::Activate(this, activateType);
}


// CLogicBranchList::Input_OnLogicBranchRemoved  (line 2619, @0x000000000229da30, libserver.so)  // inlines: CEntityHandle, CHandle, Element, FastRemove, GetEHandle, GetEntryIndex, GetSerialNumber, Set, memcpy, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CLogicBranchList::DoTest
void __fastcall CLogicBranchList::Input_OnLogicBranchRemoved(
        CLogicBranchList *const this,
        inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // r12
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  int v7; // eax
  int m_Size; // edx
  int v9; // edx
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-30h] BYREF

  src.m_Index = -1;
  pActivator = inputdata->pActivator;
  if ( inputdata->pActivator != 0 )
  {
    m_pEntity = pActivator->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
  }
  v7 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_LogicBranchList, &src);
  if ( v7 != -1 )
  {
    m_Size = this->m_LogicBranchList.m_Size;
    if ( m_Size > 0 )
    {
      v9 = m_Size - 1;
      if ( v7 != v9 )
      {
        this->m_LogicBranchList.m_Memory.m_pMemory[v7].m_Index = this->m_LogicBranchList.m_Memory.m_pMemory[v9].m_Index;
        v9 = this->m_LogicBranchList.m_Size - 1;
      }
      this->m_LogicBranchList.m_Size = v9;
      pActivator = inputdata->pActivator;
    }
  }
  CLogicBranchList::DoTest(this, pActivator);
}


// CLogicBranchList::Input_OnLogicBranchChanged  (line 2635, @0x000000000229db00, libserver.so)
// calls: CLogicBranchList::DoTest
void __fastcall CLogicBranchList::Input_OnLogicBranchChanged(
        CLogicBranchList *const this,
        inputdata_t *const inputdata)
{
  CLogicBranchList::DoTest(this, inputdata->pActivator);
}


// CLogicBranchList::InputTest  (line 2645, @0x000000000229db10, libserver.so)
// calls: CLogicBranchList::DoTest
void __fastcall CLogicBranchList::InputTest(CLogicBranchList *const this, inputdata_t *const inputdata)
{
  this->m_eLastState = CLogicBranchList::LogicBranchListenerLastState_t::LOGIC_BRANCH_LISTENER_NOT_INIT;
  CLogicBranchList::DoTest(this, inputdata->pActivator);
}


// CLogicBranchList::DoTest  (line 2656, @0x000000000229d8e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CEntityIOOutput::FireOutput
// callers: CLogicBranchList::Input_OnLogicBranchRemoved, CLogicBranchList::Input_OnLogicBranchChanged, CLogicBranchList::InputTest
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicBranchList::DoTest(CLogicBranchList *const this, CBaseEntity *pActivator)
{
  int m_Size; // edx
  CHandle<CBaseEntity> *m_pMemory; // r8
  char v5; // cl
  char v6; // r11
  CHandle<CBaseEntity> *v7; // rax
  __int64 v8; // rdx
  uint32 m_Index; // r9d
  __int16 v10; // r10
  CEntityIdentity *v11; // r8
  CEntityIdentity *v12; // r8

  m_Size = this->m_LogicBranchList.m_Size;
  if ( m_Size <= 0 )
    goto LABEL_23;
  m_pMemory = this->m_LogicBranchList.m_Memory.m_pMemory;
  v5 = 0;
  v6 = 0;
  v7 = m_pMemory + 1;
  v8 = &m_pMemory[m_Size - 1 + 1];
  while ( 1 )
  {
    m_Index = m_pMemory->m_Index;
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v10 = m_pMemory->m_Index;
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[v10 & 0x1FF];
        if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
          break;
      }
    }
    v5 = 1;
    m_pMemory = v7;
    if ( v7 == v8 )
      goto LABEL_14;
LABEL_4:
    ++v7;
  }
  if ( LOBYTE(v12->m_pInstance[16].m_pEntity) != 0 )
    v6 = 1;
  else
    v5 = 1;
  m_pMemory = v7;
  if ( v7 != v8 )
    goto LABEL_4;
LABEL_14:
  if ( v5 != 1 && v6 != 0 )
  {
    if ( this->m_eLastState != CLogicBranchList::LogicBranchListenerLastState_t::LOGIC_BRANCH_LISTENER_ALL_TRUE )
    {
      CEntityIOOutput::FireOutput(&this->m_OnAllTrue, pActivator, this);
      this->m_eLastState = CLogicBranchList::LogicBranchListenerLastState_t::LOGIC_BRANCH_LISTENER_ALL_TRUE;
    }
    return;
  }
  if ( v6 != 1 && v5 != 0 )
  {
    if ( this->m_eLastState != CLogicBranchList::LogicBranchListenerLastState_t::LOGIC_BRANCH_LISTENER_ALL_FALSE )
    {
      CEntityIOOutput::FireOutput(&this->m_OnAllFalse, pActivator, this);
      this->m_eLastState = CLogicBranchList::LogicBranchListenerLastState_t::LOGIC_BRANCH_LISTENER_ALL_FALSE;
    }
    return;
  }
LABEL_23:
  if ( this->m_eLastState != CLogicBranchList::LogicBranchListenerLastState_t::LOGIC_BRANCH_LISTENER_MIXED )
  {
    CEntityIOOutput::FireOutput(&this->m_OnMixed, pActivator, this);
    this->m_eLastState = CLogicBranchList::LogicBranchListenerLastState_t::LOGIC_BRANCH_LISTENER_MIXED;
  }
}


// CLogicBranchList::DrawDebugTextOverlays  (line 2704, @0x0000000002289dd0, libserver.so)  // inlines: CUtlSymbolLarge, Element, Get, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Branch (%s): %s"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CLogicBranchList::DrawDebugTextOverlays(
        CLogicBranchList *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  __int64 v7; // r15
  int v8; // r14d
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // rax
  bool v15; // zf
  CEntityIdentity *m_pEntity; // rax
  char *v17; // r8
  const char *m_pAsString; // rcx
  char tempstr[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v21; // [rsp+218h] [rbp-38h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v21 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 && this->m_LogicBranchList.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = &this->m_LogicBranchList.m_Memory.m_pMemory[v7];
      m_Index = v9->m_Index;
      if ( v9->m_Index + 2 > 1 )
      {
        v11 = v9->m_Index;
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[v11 & 0x1FF];
          if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
          {
            m_pInstance = v13->m_pInstance;
            if ( v13->m_pInstance != 0 )
            {
              v15 = LOBYTE(m_pInstance[16].m_pEntity) == 0;
              m_pEntity = m_pInstance->m_pEntity;
              v17 = "TRUE";
              if ( v15 )
                v17 = "FALSE";
              m_pAsString = m_pEntity->m_name.u.m_pAsString;
              if ( m_pAsString == 0 )
                m_pAsString = "";
              V_snprintf(tempstr, 512, "Branch (%s): %s", m_pAsString, v17);
              CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
            }
          }
        }
      }
      ++v8;
      ++v7;
    }
    while ( this->m_LogicBranchList.m_Size > v8 );
  }
  return v6;
}


// CLogicGameEvent::~CLogicGameEvent  (line 2731, @0x00000000022a98f0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicGameEvent::~CLogicGameEvent(CLogicGameEvent *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicGameEvent::~CLogicGameEvent  (line 2731, @0x00000000022a9910, libserver.so)  // inlines: ~CLogicGameEvent, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicGameEvent::~CLogicGameEvent(CLogicGameEvent *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicGameEvent::GetEntityClass  (line 2733, @0x00000000022a6090, libserver.so)
CEntityClass *__cdecl CLogicGameEvent::GetEntityClass()
{
  return g_pEntityCLogicGameEventClass;
}


// CLogicGameEvent::Schema_DynamicBinding  (line 2733, @0x00000000022a60a0, libserver.so)
// globals: CLogicGameEvent::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicGameEvent::Schema_DynamicBinding(const CLogicGameEvent *const this)
{
  return CLogicGameEvent::s_pSchemaBinding;
}


// CLogicGameEvent::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2733, @0x00000000022a60b0, libserver.so)
// globals: CLogicGameEvent::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicGameEvent::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicGameEvent::CEntityInstanceEntityClass *const this)
{
  return CLogicGameEvent::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicGameEvent::CEntityInstanceEntityClass::DestructInstance  (line 2733, @0x00000000022a60c0, libserver.so)  // inlines: Destruct<CLogicGameEvent>
void __fastcall CLogicGameEvent::CEntityInstanceEntityClass::DestructInstance(
        CLogicGameEvent::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicGameEvent::CEntityInstanceEntityClass::FreeInstance  (line 2733, @0x00000000022a60e0, libserver.so)
void __fastcall CLogicGameEvent::CEntityInstanceEntityClass::FreeInstance(
        CLogicGameEvent::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicGameEvent::CEntityInstanceEntityClass::CanAllocate  (line 2733, @0x00000000022a6100, libserver.so)
bool __fastcall CLogicGameEvent::CEntityInstanceEntityClass::CanAllocate(
        const CLogicGameEvent::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicGameEvent::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2733, @0x00000000022a6110, libserver.so)
// globals: CLogicGameEvent::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicGameEvent::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicGameEvent::CEntityInstanceEntityClass *const this)
{
  return CLogicGameEvent::s_pSchemaBinding;
}


// CLogicGameEvent::CEntityInstanceEntityClass::AllocateInstance  (line 2733, @0x00000000022a8440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicGameEvent::CEntityInstanceEntityClass::AllocateInstance(
        CLogicGameEvent::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CLogicGameEvent::CEntityInstanceEntityClass::ConstructInstance  (line 2733, @0x00000000022a8e40, libserver.so)  // inlines: CLogicGameEvent, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, Construct<CLogicGameEvent>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicGameEvent::CEntityInstanceEntityClass::ConstructInstance(
        CLogicGameEvent::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_4064630;
  }
  return p;
}


// CLogicGameEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2733, @0x00000000022aae60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicGameEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicGameEvent::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicGameEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2733, @0x00000000022aae80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicGameEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicGameEvent::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicGameEvent::GetEntityClassInternal  (line 2733, @0x00000000022b2380, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_game_event", "CLogicGameEvent"
// globals: `guard variable for'CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass, CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass, __dso_handle, CLogicGameEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicGameEvent::GetEntityClassInfo(void)::g_EntityCLogicGameEventClassInfo, CLogicGameEvent::GetEntityClassInfo(void)::g_EntityCLogicGameEventClassInfo
CEntityClass *__cdecl CLogicGameEvent::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass);
    CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass._vptr_CEntityClass = off_40645B0;
    __cxa_guard_release(&`guard variable for'CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass);
    __cxa_atexit(
      CLogicGameEvent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicGameEventClass != 0 )
    return &CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass;
  if ( `guard variable for'CLogicGameEvent::GetEntityClassInfo(void)::g_EntityCLogicGameEventClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicGameEvent::GetEntityClassInfo(void)::g_EntityCLogicGameEventClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicGameEvent::GetEntityClassInfo(void)::g_EntityCLogicGameEventClassInfo,
      "CLogicGameEvent",
      "logic_game_event",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicGameEvent::GetEntityClassInfo(void)::g_EntityCLogicGameEventClassInfo);
  }
  CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass.m_pClassInfo = &CLogicGameEvent::GetEntityClassInfo(void)::g_EntityCLogicGameEventClassInfo;
  CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass.m_pBaseClassInfo = CLogicGameEvent::GetEntityClassInfo(void)::g_EntityCLogicGameEventClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicGameEventClass = &CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass;
  CLogicGameEvent::GetEntityClassInfo(void)::g_EntityCLogicGameEventClassInfo.m_pClass = &CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass;
  CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicGameEventClass->m_pComponentOverrides = 0;
  return &CLogicGameEvent::GetEntityClassInternal(void)::g_EntityCLogicGameEventClass;
}


// CLogicGameEvent::GetDataDescMap  (line 2744, @0x0000000002283d50, libserver.so)
// globals: CLogicGameEvent::m_DataMap
datamap_t *__fastcall CLogicGameEvent::GetDataDescMap(CLogicGameEvent *const this)
{
  return &CLogicGameEvent::m_DataMap;
}


// CLogicGameEvent::AddDatadescMetadataKeys  (line 2744, @0x0000000002293a10, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicGameEvent::GetEntityClass(void)
void __fastcall CLogicGameEvent::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicGameEvent::GetEntityClass);
}


// CLogicGameEvent::GetBaseMap  (line 2744, @0x0000000002293a30, libserver.so)
datamap_t *__cdecl CLogicGameEvent::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicGameEvent>  (line 2744, @0x0000000002293a40, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicGameEvent"
// globals: `guard variable for'DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder, CLogicGameEvent::GetEntityClass(void), CLogicGameEvent::m_DataMap, DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicGameEvent>(CLogicGameEvent *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder.m_pszBase = "CLogicGameEvent";
    DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::nameHolder,
      &_dso_handle);
  }
  CLogicGameEvent::m_DataMap.dataNumFields = 2;
  CLogicGameEvent::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  CLogicGameEvent::m_DataMap.dataDesc = &DataMapInit<CLogicGameEvent>(CLogicGameEvent *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicGameEvent::m_DataMap, CLogicGameEvent::GetEntityClass);
  return &CLogicGameEvent::m_DataMap;
}


// CLogicGameEvent::InputFireEvent  (line 2757, @0x0000000002288fe0, libserver.so)  // inlines: CreateEvent, GetUserID, String, ToBasePlayer, ToCStr, entindex
// calls: CEntityInstance::GetEntityIndex
void __fastcall CLogicGameEvent::InputFireEvent(CLogicGameEvent *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rsi
  __int64 v5; // r12
  CBaseEntity *pActivator; // rbx
  void (__fastcall *v7)(__int64, char *, _QWORD); // r14
  CEntityIndex v8; // eax
  unsigned int v9; // eax

  m_pAsString = "";
  if ( this->m_iszEventName.u.m_Id != 0 )
    m_pAsString = this->m_iszEventName.u.m_pAsString;
  v5 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, m_pAsString, 0, 0);
  if ( v5 != 0 )
  {
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
    {
      pActivator = inputdata->pActivator;
      if ( inputdata->pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) != 0 )
      {
        v7 = *(*v5 + 112LL);
        v8.m_Data = CEntityInstance::GetEntityIndex(pActivator).m_Data;
        v9 = (*(*engine + 224LL))(engine, (v8.m_Data - 1));
        v7(v5, "userid", v9);
      }
    }
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v5, 0);
  }
}


