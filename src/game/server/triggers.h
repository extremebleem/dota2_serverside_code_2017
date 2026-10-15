// Reconstructed from DWARF by pahole; not original source.

// src/game/server/triggers.h:23
class CBaseTrigger : public CBaseToggle {
	class NetworkVar_m_bClientSidePredicted {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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

	bool m_bDisabled;  // +0x500

	string_t m_iFilterName;  // +0x508

protected:

	COutputEvent m_OnStartTouch;  // +0x518
	COutputEvent m_OnStartTouchAll;  // +0x530
	COutputEvent m_OnEndTouch;  // +0x548
	COutputEvent m_OnEndTouchAll;  // +0x560
	COutputEvent m_OnTouching;  // +0x578
	COutputEvent m_OnNotTouching;  // +0x590

	static datamap_t m_DataMap;

	typedef CBaseToggle BaseClass;
	CBaseTrigger(CBaseTrigger &);
	CBaseTrigger(CBaseTrigger &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CBaseTrigger();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual int UpdateTransmitState();
	virtual int ObjectCaps();
	virtual void PostClientActive();
	void InitTrigger(const CEntityKeyValues *);
	virtual void Enable();
	virtual void Disable();
	void TouchTest();
	virtual void InputEnable(inputdata_t &);
	virtual void InputDisable(inputdata_t &);
	virtual void InputToggle(inputdata_t &);
	virtual void InputTouchTest(inputdata_t &);
	virtual void InputStartTouch(inputdata_t &);
	virtual void InputEndTouch(inputdata_t &);
	virtual bool UsesFilter();
	virtual bool PassesTriggerFilters(CBaseEntity *);
	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	virtual void OnStartTouchAll(CBaseEntity *);
	virtual void OnEndTouchAll(CBaseEntity *);
	bool IsTouching(CBaseEntity *);
	bool Script_IsTouching(HSCRIPT);
	CBaseEntity * GetTouchedEntityOfType(const char *);
	virtual int DrawDebugTextOverlays(uint64, int);
	void TraceAttack(CBaseEntity *, float, const Vector &, trace_t *, int);
	const CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetTouchingEntities();
	void ScriptEnable();
	void ScriptDisable();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CBaseTrigger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// vtable[19] ObjectCaps
	// vtable[67] PostClientActive
	// vtable[214] Enable
	// vtable[215] Disable
	// vtable[216] InputEnable
	// vtable[217] InputDisable
	// vtable[218] InputToggle
	// vtable[219] InputTouchTest
	// vtable[220] InputStartTouch
	// vtable[221] InputEndTouch
	// vtable[222] UsesFilter
	// vtable[223] PassesTriggerFilters
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// vtable[224] OnStartTouchAll
	// vtable[225] OnEndTouchAll
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// vtable[4] GetScriptDesc
	// sizeof = 1480
};

// src/game/server/triggers.h:125
class CTriggerMultiple : public CBaseTrigger {
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

	COutputEvent m_OnTrigger;  // +0x5c8
	typedef CBaseTrigger BaseClass;
	CTriggerMultiple(CTriggerMultiple &);
	CTriggerMultiple(CTriggerMultiple &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CTriggerMultiple();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void MultiTouch(CBaseEntity *);
	void MultiWaitOver();
	void ActivateMultiTrigger(CBaseEntity *);
	virtual bool PassesTriggerFilters(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerMultiple();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[223] PassesTriggerFilters
	// vtable[34] GetDataDescMap
	// sizeof = 1504
};

// src/game/server/triggers.h:173
class CTriggerSndSosOpvar : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;

	float m_flCenterSize;  // +0x5ec
	float m_flWait;  // +0x5f0

	string_t m_opvarName;  // +0x5f8
	string_t m_stackName;  // +0x600
	string_t m_operatorName;  // +0x608
	bool m_bVolIs2D;  // +0x610
	char m_opvarNameChar[256];  // +0x611
	char m_stackNameChar[256];  // +0x711
	char m_operatorNameChar[256];  // +0x811

	float m_flNormCenterSize;  // +0x920
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
	CTriggerSndSosOpvar(CTriggerSndSosOpvar &);
	CTriggerSndSosOpvar(CTriggerSndSosOpvar &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CTriggerSndSosOpvar();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void SndSOSTriggerOpvarTouch(CBaseEntity *);
	void SndSosTriggerOpvarActivate(CBaseEntity *);
	void SndSosTriggerOpvarWaitOver();
	virtual void EndTouch(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

private:

	void HandleTouchingEntities(CBaseEntity *);
	float CalcOpvarValue(Vector);
	virtual ~CTriggerSndSosOpvar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[113] EndTouch
	// vtable[34] GetDataDescMap
	// sizeof = 2344
};

// src/game/server/triggers.h:219
class CTriggerHurt : public CBaseTrigger {
	enum {
		DAMAGEMODEL_NORMAL = 0,
		DAMAGEMODEL_DOUBLE_FORGIVENESS = 0x1,
	};

public:

private:

	static datamap_t m_DataMap;

	float m_flOriginalDamage;  // +0x5c4
	float m_flDamage;  // +0x5c8
	float m_flDamageCap;  // +0x5cc
	float m_flLastDmgTime;  // +0x5d0
	float m_flDmgResetTime;  // +0x5d4
	int m_bitsDamageInflict;  // +0x5d8
	int m_damageModel;  // +0x5dc
	bool m_bNoDmgForce;  // +0x5e0

	bool m_thinkAlways;  // +0x5f0

	float m_hurtThinkPeriod;  // +0x5f4
	COutputEvent m_OnHurt;  // +0x5f8
	COutputEvent m_OnHurtPlayer;  // +0x610
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
	CTriggerHurt(CTriggerHurt &);
	CTriggerHurt(CTriggerHurt &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CTriggerHurt();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void RadiationThink();
	void HurtThink();
	virtual void Touch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	bool HurtEntity(CBaseEntity *, float);
	int HurtAllTouchers(float);
	void NavThink();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerHurt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[112] Touch
	// vtable[113] EndTouch
	// vtable[34] GetDataDescMap
	// sizeof = 1600
};

// src/game/server/triggers.h:279
class CTriggerHurtGhost : public CTriggerHurt {
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
	CTriggerHurtGhost(CTriggerHurtGhost &);
	CTriggerHurtGhost(CTriggerHurtGhost &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CTriggerHurtGhost();
	virtual ~CTriggerHurtGhost();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1600
};

// src/game/server/triggers.h:291
class CTriggerCallback : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;

	struct {
		void (*__pfn)(CBaseEntity *, CBaseEntity *);  // +0x5c8
		long int __delta;  // +0x5d0
	} m_pfnCallback;
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
	CTriggerCallback(CTriggerCallback &);
	CTriggerCallback(CTriggerCallback &);
	CTriggerCallback();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void StartTouch(CBaseEntity *);
	CTriggerCallback * Create(const Vector &, const QAngle &, const Vector &, const Vector &, CBaseEntity *, class );
	virtual ~CTriggerCallback();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[111] StartTouch
	// sizeof = 1496
};

// src/game/server/triggers.h:334
class CTriggerCamera : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	EHANDLE m_hPlayer;  // +0x308
	EHANDLE m_hTarget;  // +0x30c
	string_t m_sPath;  // +0x318
	float m_flWait;  // +0x320
	float m_flReturnTime;  // +0x324
	float m_flStopTime;  // +0x328
	float m_moveDistance;  // +0x32c
	float m_targetSpeed;  // +0x330
	float m_initialSpeed;  // +0x334
	float m_acceleration;  // +0x338
	float m_deceleration;  // +0x33c
	int m_state;  // +0x340
	float m_fov;  // +0x350
	float m_fovSpeed;  // +0x354
	string_t m_iszTargetAttachment;  // +0x358
	int m_iAttachmentIndex;  // +0x360
	bool m_bSnapToGoal;  // +0x364

	int m_nPlayerButtons;  // +0x368

	COutputEvent m_OnEndFollow;  // +0x370
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
	CTriggerCamera(CTriggerCamera &);
	CTriggerCamera(CTriggerCamera &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CTriggerCamera();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void Enable();
	void Disable();
	void SetPlayer(CBaseEntity *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void FollowTarget();
	void Move();
	void StartCameraShot(const char *, CBaseEntity *, CBaseEntity *, CBaseEntity *, float);
	int ScriptGetFov();
	void ScriptSetFov(int, float);
	void ScriptScreenFade(int, int, int, int, float, float, int);
	virtual int UpdateTransmitState();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual ~CTriggerCamera();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[108] Use
	// vtable[64] UpdateTransmitState
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 904
};
