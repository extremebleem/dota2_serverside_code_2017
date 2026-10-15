// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physconstraint.cpp:40
struct hl_constraint_info_t {
	float massScale[2];  // +0x28
	bool swapped;  // +0x30
	hl_constraint_info_t();

	// sizeof = 56
};

// src/game/server/physconstraint.cpp:55
struct constraint_anchor_t {
	EHANDLE hEntity;  // +0xc
	int parentAttachment;  // +0x10

	string_t name;  // +0x18
	float massScale;  // +0x20
	constraint_anchor_t();

	// sizeof = 40
};

// src/game/server/physconstraint.cpp:67
class CAnchorList : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;
	CAnchorList(CAnchorList &);
	CAnchorList(const CAnchorList &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CAnchorList *);
	CAnchorList();
	virtual void GameShutdown(const EventGameShutdown_t &);
	void AddToList(CBaseEntity *, float);
	constraint_anchor_t * Find(string_t);
	virtual ~CAnchorList();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[4] GameShutdown
	// sizeof = 48
};

// src/game/server/physconstraint.cpp:123
class CConstraintAnchor : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_massScale;  // +0x308
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
	CConstraintAnchor(CConstraintAnchor &);
	CConstraintAnchor(CConstraintAnchor &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CConstraintAnchor();
	virtual void Spawn(const CEntityKeyValues *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CConstraintAnchor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// src/game/server/physconstraint.cpp:216
class CPhysConstraint : public CLogicalEntity {
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

protected:

	HPhysicsJoint m_hJoint;  // +0x308
	string_t m_nameAttach1;  // +0x310
	string_t m_nameAttach2;  // +0x318
	string_t m_breakSound;  // +0x320
	float m_forceLimit;  // +0x328
	float m_torqueLimit;  // +0x32c
	uint32 m_teleportTick;  // +0x330
	float m_minTeleportDistance;  // +0x334
	COutputEvent m_OnBreak;  // +0x338
	typedef CLogicalEntity BaseClass;
	CPhysConstraint(CPhysConstraint &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CPhysConstraint();
	virtual ~CPhysConstraint();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	void ClearStaticFlag(HPhysicsBody);
	virtual void Deactivate();
	void OnBreak(HPhysicsJoint);
	void InputBreak(inputdata_t &);
	void InputOnBreak(inputdata_t &);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputTurnMotorOn(inputdata_t &);
	void InputTurnMotorOff(inputdata_t &);
	void InputEnableLinearConstraint(inputdata_t &);
	void InputDisableLinearConstraint(inputdata_t &);
	void InputEnableAngularConstraint(inputdata_t &);
	void InputDisableAngularConstraint(inputdata_t &);
	void InputSetMotorTorqueFactor(inputdata_t &);
	void InputSetMotorTargetVelocity(inputdata_t &);
	void InputSetMotorTargetAngle(inputdata_t &);
	void InputTurnMotorTargetAngleOff(inputdata_t &);
	void InputTurnMotorTargetAngleOn(inputdata_t &);
	void DrawDebugConstraint();
	virtual void DrawEntityDebugOverlays(uint64);
	void GetBreakParams(constraint_breakableparams_t &, const hl_constraint_info_t &);
	virtual void NotifySystemEvent(CBaseEntity *, notify_system_event_t, const notify_system_event_params_t &);
	virtual void OnConstraintSetup(hl_constraint_info_t &);
	HPhysicsJoint GetPhysConstraint();
	void GetConstraintObjects(hl_constraint_info_t &);
	void SetupTeleportationHandling(hl_constraint_info_t &);
	bool ActivateConstraint();
	virtual HPhysicsJoint CreateConstraint(const hl_constraint_info_t &);
	void SetupBreakForces(HPhysicsJoint, const hl_constraint_info_t &);
	virtual void OnRestore();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[207] Deactivate
	// vtable[14] DrawEntityDebugOverlays
	// vtable[127] NotifySystemEvent
	// vtable[208] OnConstraintSetup
	// vtable[209] CreateConstraint
	// vtable[18] OnRestore
	// sizeof = 848
};

// src/game/server/physconstraint.cpp:824
class CPhysHinge : public CPhysConstraint, public IVPhysicsWatcher {
public:

private:

	static datamap_t m_DataMap;

	float m_hingeFriction;  // +0x398
	float m_systemLoadScale;  // +0x39c
	bool m_bIsAxisLocal;  // +0x3a0

	float m_flMinRotation;  // +0x3a4
	float m_flMaxRotation;  // +0x3a8
	typedef CPhysConstraint BaseClass;

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
	CPhysHinge(CPhysHinge &);
	CPhysHinge(CPhysHinge &);
	CPhysHinge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual HPhysicsJoint CreateConstraint(const hl_constraint_info_t &);
	void InputSetVelocity(inputdata_t &);
	void InputSetHingeFriction(inputdata_t &);
	void InputSetMinLimit(inputdata_t &);
	void InputSetMaxLimit(inputdata_t &);
	virtual void NotifyMotionState(CBaseEntity *, bool);
	virtual void NotifyVPhysicsStateChanged(IPhysicsObject *, CBaseEntity *, bool);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPhysHinge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[209] CreateConstraint
	// vtable[210] NotifyMotionState
	// vtable[211] NotifyVPhysicsStateChanged
	// vtable[34] GetDataDescMap
	// sizeof = 944
};

// src/game/server/physconstraint.cpp:1059
class CPhysHingeAlias_phys_hinge_local : public CPhysHinge {
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
	CPhysHingeAlias_phys_hinge_local(CPhysHingeAlias_phys_hinge_local &);
	CPhysHingeAlias_phys_hinge_local(CPhysHingeAlias_phys_hinge_local &);
	CPhysHingeAlias_phys_hinge_local();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CPhysHingeAlias_phys_hinge_local();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 944
};

// src/game/server/physconstraint.cpp:1266
class CPhysBallSocket : public CPhysConstraint {
public:

private:

	static datamap_t m_DataMap;

	float m_flFriction;  // +0x350
	typedef CPhysConstraint BaseClass;

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
	CPhysBallSocket(CPhysBallSocket &);
	CPhysBallSocket(CPhysBallSocket &);
	CPhysBallSocket();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual HPhysicsJoint CreateConstraint(const hl_constraint_info_t &);
	virtual ~CPhysBallSocket();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[209] CreateConstraint
	// sizeof = 856
};

// src/game/server/physconstraint.cpp:1300
class CPhysSlideConstraint : public CPhysConstraint, public IVPhysicsWatcher {
public:

private:

	static datamap_t m_DataMap;

	float m_slideFriction;  // +0x364
	float m_systemLoadScale;  // +0x368
	typedef CPhysConstraint BaseClass;

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
	CPhysSlideConstraint(CPhysSlideConstraint &);
	CPhysSlideConstraint(CPhysSlideConstraint &);
	CPhysSlideConstraint();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual HPhysicsJoint CreateConstraint(const hl_constraint_info_t &);
	void InputSetVelocity(inputdata_t &);
	virtual void NotifyVPhysicsStateChanged(IPhysicsObject *, CBaseEntity *, bool);
	virtual ~CPhysSlideConstraint();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[209] CreateConstraint
	// vtable[210] NotifyVPhysicsStateChanged
	// sizeof = 880
};

// src/game/server/physconstraint.cpp:1528
class CPhysFixed : public CPhysConstraint {
public:

private:

	static datamap_t m_DataMap;

	float m_flLinearFrequency;  // +0x350
	float m_flLinearDampingRatio;  // +0x354
	float m_flAngularFrequency;  // +0x358
	float m_flAngularDampingRatio;  // +0x35c
	bool m_bEnableLinearConstraint;  // +0x360
	bool m_bEnableAngularConstraint;  // +0x361
	typedef CPhysConstraint BaseClass;

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
	CPhysFixed(CPhysFixed &);
	CPhysFixed(CPhysFixed &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CPhysFixed();
	virtual HPhysicsJoint CreateConstraint(const hl_constraint_info_t &);
	virtual ~CPhysFixed();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[209] CreateConstraint
	// sizeof = 872
};

// src/game/server/physconstraint.cpp:1607
class CPhysPulley : public CPhysConstraint {
public:

private:

	static datamap_t m_DataMap;

	float m_addLength;  // +0x374
	float m_gearRatio;  // +0x378
	typedef CPhysConstraint BaseClass;

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
	CPhysPulley(CPhysPulley &);
	CPhysPulley(CPhysPulley &);
	CPhysPulley();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual HPhysicsJoint CreateConstraint(const hl_constraint_info_t &);
	virtual ~CPhysPulley();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[209] CreateConstraint
	// sizeof = 896
};

// src/game/server/physconstraint.cpp:1671
class CPhysLength : public CPhysConstraint {
public:

private:

	static datamap_t m_DataMap;

	float m_addLength;  // +0x374
	float m_minLength;  // +0x378
	float m_totalLength;  // +0x37c
	typedef CPhysConstraint BaseClass;

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
	CPhysLength(CPhysLength &);
	CPhysLength(CPhysLength &);
	CPhysLength();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual HPhysicsJoint CreateConstraint(const hl_constraint_info_t &);
	virtual ~CPhysLength();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[209] CreateConstraint
	// sizeof = 896
};

// src/game/server/physconstraint.cpp:1726
class CRagdollConstraint : public CPhysConstraint {
public:

private:

	static datamap_t m_DataMap;

	float m_xmin;  // +0x350
	float m_xmax;  // +0x354
	float m_ymin;  // +0x358
	float m_ymax;  // +0x35c
	float m_zmin;  // +0x360
	float m_zmax;  // +0x364
	float m_xfriction;  // +0x368
	float m_yfriction;  // +0x36c
	float m_zfriction;  // +0x370
	typedef CPhysConstraint BaseClass;

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
	CRagdollConstraint(CRagdollConstraint &);
	CRagdollConstraint(CRagdollConstraint &);
	CRagdollConstraint();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual HPhysicsJoint CreateConstraint(const hl_constraint_info_t &);
	virtual ~CRagdollConstraint();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[209] CreateConstraint
	// sizeof = 888
};

// src/game/server/physconstraint.cpp:1822
class CGenericConstraint : public CPhysConstraint {
public:

private:

	static datamap_t m_DataMap;

	float m_flLinearFrequencyX;  // +0x35c
	float m_flLinearFrequencyY;  // +0x360
	float m_flLinearFrequencyZ;  // +0x364
	float m_flLinearDampingRatioX;  // +0x368
	float m_flLinearDampingRatioY;  // +0x36c
	float m_flLinearDampingRatioZ;  // +0x370
	float m_flMaxLinearImpulseX;  // +0x374
	float m_flMaxLinearImpulseY;  // +0x378
	float m_flMaxLinearImpulseZ;  // +0x37c
	float m_flBreakAfterTimeX;  // +0x380
	float m_flBreakAfterTimeY;  // +0x384
	float m_flBreakAfterTimeZ;  // +0x388
	float m_flBreakAfterTimeStartTimeX;  // +0x38c
	float m_flBreakAfterTimeStartTimeY;  // +0x390
	float m_flBreakAfterTimeStartTimeZ;  // +0x394
	float m_flBreakAfterTimeThresholdX;  // +0x398
	float m_flBreakAfterTimeThresholdY;  // +0x39c
	float m_flBreakAfterTimeThresholdZ;  // +0x3a0
	float m_flNotifyForceX;  // +0x3a4
	float m_flNotifyForceY;  // +0x3a8
	float m_flNotifyForceZ;  // +0x3ac
	float m_flNotifyForceMinTimeX;  // +0x3b0
	float m_flNotifyForceMinTimeY;  // +0x3b4
	float m_flNotifyForceMinTimeZ;  // +0x3b8
	float m_flNotifyForceLastTimeX;  // +0x3bc
	float m_flNotifyForceLastTimeY;  // +0x3c0
	float m_flNotifyForceLastTimeZ;  // +0x3c4
	float m_flAngularFrequencyX;  // +0x3d4
	float m_flAngularFrequencyY;  // +0x3d8
	float m_flAngularFrequencyZ;  // +0x3dc
	float m_flAngularDampingRatioX;  // +0x3e0
	float m_flAngularDampingRatioY;  // +0x3e4
	float m_flAngularDampingRatioZ;  // +0x3e8
	float m_flMaxAngularImpulseX;  // +0x3ec
	float m_flMaxAngularImpulseY;  // +0x3f0
	float m_flMaxAngularImpulseZ;  // +0x3f4
	COutputEvent m_NotifyForceReachedX;  // +0x3f8
	COutputEvent m_NotifyForceReachedY;  // +0x410
	COutputEvent m_NotifyForceReachedZ;  // +0x428
	typedef CPhysConstraint BaseClass;

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
	CGenericConstraint(CGenericConstraint &);
	CGenericConstraint(CGenericConstraint &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CGenericConstraint();
	virtual HPhysicsJoint CreateConstraint(const hl_constraint_info_t &);

protected:

	void UpdateThink();
	virtual void OnConstraintSetup(hl_constraint_info_t &);

private:

	void ConditionallyNotifyAxis(float &, float, float, float, COutputEvent &);
	void UpdateBreakAfterTime(float, float, float, float &);
	virtual ~CGenericConstraint();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[209] CreateConstraint
	// vtable[208] OnConstraintSetup
	// sizeof = 1088
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAnchorList::~CAnchorList  (line 67, @0x0000000002308470, libserver.so)  // inlines: Purge, RemoveAll, ~CAnchorList, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<constraint_anchor_t, int>::Purge
void __fastcall CAnchorList::~CAnchorList(CAnchorList *const this)
{
  bool v2; // zf
  CUtlVectorBase<constraint_anchor_t,CUtlMemory<constraint_anchor_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_4078710;
  this->m_list.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_list.m_Memory;
    CUtlMemory<constraint_anchor_t,int>::Purge(&this->m_list.m_Memory);
    if ( (this->m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<constraint_anchor_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CAnchorList::~CAnchorList  (line 67, @0x0000000002308540, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<constraint_anchor_t, int>::Purge
void __fastcall CAnchorList::~CAnchorList(CAnchorList *const this)
{
  bool v2; // zf
  CUtlVectorBase<constraint_anchor_t,CUtlMemory<constraint_anchor_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_4078710;
  this->m_list.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_list.m_Memory;
    CUtlMemory<constraint_anchor_t,int>::Purge(&this->m_list.m_Memory);
    if ( (this->m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<constraint_anchor_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CAnchorList::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 69, @0x0000000002303500, libserver.so)
void __fastcall CAnchorList::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CAnchorList *const this)
{
  ;
}


// CAnchorList::DoesGameSystemReallocate  (line 69, @0x0000000002303510, libserver.so)
// globals: CAnchorList::sm_Factory
bool __fastcall CAnchorList::DoesGameSystemReallocate(const CAnchorList *const this)
{
  return (*(CAnchorList::sm_Factory->_vptr_IGameSystemFactory + 8))(CAnchorList::sm_Factory);
}


// CAnchorList::SetGameSystemGlobalPtrs  (line 69, @0x0000000002303530, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CAnchorList::sm_Factory
void __fastcall CAnchorList::SetGameSystemGlobalPtrs(CAnchorList *const this, void *pValue)
{
  if ( CAnchorList::sm_Factory != 0 )
    (*(CAnchorList::sm_Factory->_vptr_IGameSystemFactory + 7))(CAnchorList::sm_Factory, pValue);
}


// CAnchorList::GameShutdown  (line 75, @0x0000000002308510, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<constraint_anchor_t, int>::Purge
void __fastcall CAnchorList::GameShutdown(CAnchorList *const this, const EventGameShutdown_t *const msg)
{
  bool v2; // zf

  v2 = (this->m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_list.m_Size = 0;
  if ( v2 )
    CUtlMemory<constraint_anchor_t,int>::Purge(&this->m_list.m_Memory);
}


// CAnchorList::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 118, @0x00000000022cdf60, libserver.so)
void __cdecl CAnchorList::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CConstraintAnchor::~CConstraintAnchor  (line 123, @0x00000000023068c0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CConstraintAnchor::~CConstraintAnchor(CConstraintAnchor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CConstraintAnchor::~CConstraintAnchor  (line 123, @0x00000000023068e0, libserver.so)  // inlines: ~CConstraintAnchor, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CConstraintAnchor::~CConstraintAnchor(CConstraintAnchor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CConstraintAnchor::GetEntityClass  (line 125, @0x0000000002303560, libserver.so)
CEntityClass *__cdecl CConstraintAnchor::GetEntityClass()
{
  return g_pEntityCConstraintAnchorClass;
}


// CConstraintAnchor::Schema_DynamicBinding  (line 125, @0x0000000002303570, libserver.so)
// globals: CConstraintAnchor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CConstraintAnchor::Schema_DynamicBinding(const CConstraintAnchor *const this)
{
  return CConstraintAnchor::s_pSchemaBinding;
}


// CConstraintAnchor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 125, @0x0000000002303580, libserver.so)
// globals: CConstraintAnchor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CConstraintAnchor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CConstraintAnchor::CEntityInstanceEntityClass *const this)
{
  return CConstraintAnchor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CConstraintAnchor::CEntityInstanceEntityClass::DestructInstance  (line 125, @0x0000000002303590, libserver.so)  // inlines: Destruct<CConstraintAnchor>
void __fastcall CConstraintAnchor::CEntityInstanceEntityClass::DestructInstance(
        CConstraintAnchor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CConstraintAnchor::CEntityInstanceEntityClass::FreeInstance  (line 125, @0x00000000023035b0, libserver.so)
void __fastcall CConstraintAnchor::CEntityInstanceEntityClass::FreeInstance(
        CConstraintAnchor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CConstraintAnchor::CEntityInstanceEntityClass::CanAllocate  (line 125, @0x00000000023035d0, libserver.so)
bool __fastcall CConstraintAnchor::CEntityInstanceEntityClass::CanAllocate(
        const CConstraintAnchor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CConstraintAnchor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 125, @0x00000000023035e0, libserver.so)
// globals: CConstraintAnchor::s_pSchemaBinding
const ISchemaBinding *__fastcall CConstraintAnchor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CConstraintAnchor::CEntityInstanceEntityClass *const this)
{
  return CConstraintAnchor::s_pSchemaBinding;
}


// CConstraintAnchor::CEntityInstanceEntityClass::AllocateInstance  (line 125, @0x0000000002305a60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CConstraintAnchor::CEntityInstanceEntityClass::AllocateInstance(
        CConstraintAnchor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CConstraintAnchor::CEntityInstanceEntityClass::ConstructInstance  (line 125, @0x00000000023061d0, libserver.so)  // inlines: CConstraintAnchor, CPointEntity, Construct<CConstraintAnchor>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CConstraintAnchor::CEntityInstanceEntityClass::ConstructInstance(
        CConstraintAnchor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 1065353216;
    *p = &off_4078950;
  }
  return p;
}


// CConstraintAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 125, @0x00000000023090d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CConstraintAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CConstraintAnchor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CConstraintAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 125, @0x00000000023090f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CConstraintAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CConstraintAnchor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CConstraintAnchor::GetEntityClassInternal  (line 125, @0x0000000002316c90, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "info_constraint_anchor", "CConstraintAnchor"
// globals: `guard variable for'CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass, CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CConstraintAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CConstraintAnchor::GetEntityClassInfo(void)::g_EntityCConstraintAnchorClassInfo, CConstraintAnchor::GetEntityClassInfo(void)::g_EntityCConstraintAnchorClassInfo
CEntityClass *__cdecl CConstraintAnchor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass) != 0 )
  {
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_designerName.u.m_Id = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass._vptr_CEntityClass = off_3F79390;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_ComponentOffsets.m_Size = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_AllHelpers.m_Size = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_classInputs.m_Size = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_classOutputs.m_Size = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_requiredEHandle.m_Index = -1;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_hNetworkSerializer = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_pBaseClassInfo = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_pClassInfo = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_flags = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_nAllHelpersFlags = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_pScriptClassDesc = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_pInputs = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_nInputCount = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_pOutputs = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_nOutputCount = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_pGameClass = 0;
    CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass._vptr_CEntityClass = off_40788D0;
    __cxa_guard_release(&`guard variable for'CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass);
    __cxa_atexit(
      CConstraintAnchor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass,
      &_dso_handle);
  }
  if ( g_pEntityCConstraintAnchorClass != 0 )
    return &CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass;
  if ( `guard variable for'CConstraintAnchor::GetEntityClassInfo(void)::g_EntityCConstraintAnchorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CConstraintAnchor::GetEntityClassInfo(void)::g_EntityCConstraintAnchorClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CConstraintAnchor::GetEntityClassInfo(void)::g_EntityCConstraintAnchorClassInfo,
      "CConstraintAnchor",
      "info_constraint_anchor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CConstraintAnchor::GetEntityClassInfo(void)::g_EntityCConstraintAnchorClassInfo);
  }
  CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_pClassInfo = &CConstraintAnchor::GetEntityClassInfo(void)::g_EntityCConstraintAnchorClassInfo;
  CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_pBaseClassInfo = CConstraintAnchor::GetEntityClassInfo(void)::g_EntityCConstraintAnchorClassInfo.m_pBaseClassInfo;
  g_pEntityCConstraintAnchorClass = &CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass;
  CConstraintAnchor::GetEntityClassInfo(void)::g_EntityCConstraintAnchorClassInfo.m_pClass = &CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass;
  CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCConstraintAnchorClass->m_pComponentOverrides = 0;
  return &CConstraintAnchor::GetEntityClassInternal(void)::g_EntityCConstraintAnchorClass;
}


// CConstraintAnchor::Spawn  (line 131, @0x0000000002318a40, libserver.so)  // inlines: AddToList, AddToTail, CEntityHandle, CHandle, CUtlSymbolLarge, Construct<constraint_anchor_t>, Element, GetEHandle, GetEntityName, GetEntryIndex, GetParent, GetSerialNumber, GetSkeletonInstance, GrowMemory, Set, constraint_anchor_t, operator=, operator[]
// calls: CPointEntity::Spawn, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetParentAttachmentName, CSkeletonInstance::LookupAttachment, CBaseEntity::GetLocalOrigin, UTIL_Remove, CUtlMemory<constraint_anchor_t, int>::Grow
void __fastcall CConstraintAnchor::Spawn(CConstraintAnchor *const this, const CEntityKeyValues *pKeyValues)
{
  CGameSceneNode *m_pParent; // rdi
  __int64 m_Size; // rbx
  int v5; // r14d
  int v6; // eax
  __int64 v7; // rbx
  constraint_anchor_t *v8; // rax
  constraint_anchor_t *v9; // rbx
  const CSkeletonInstance *v10; // r13
  CUtlStringToken v11; // eax
  CGameSceneNode *v12; // rdi
  CBaseEntity *OwnerEntity; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  const Vector *LocalOrigin; // rax
  vec_t z; // xmm0_4

  CPointEntity::Spawn(this, pKeyValues);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 && CGameSceneNode::GetOwnerEntity(m_pParent) != 0 )
  {
    m_Size = g_AnchorList.m_list.m_Size;
    v5 = _mm_cvtsi128_si32(LODWORD(this->m_massScale));
    v6 = g_AnchorList.m_list.m_Size;
    if ( g_AnchorList.m_list.m_Size == g_AnchorList.m_list.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<constraint_anchor_t,int>::Grow(&g_AnchorList.m_list.m_Memory, 1);
      v6 = g_AnchorList.m_list.m_Size;
    }
    v7 = m_Size;
    g_AnchorList.m_list.m_Size = v6 + 1;
    v8 = &g_AnchorList.m_list.m_Memory.m_pMemory[v7];
    if ( &g_AnchorList.m_list.m_Memory.m_pMemory[v7] != 0 )
    {
      v8->hEntity.m_Index = -1;
      v8->name.u.m_Id = 0;
      v9 = &g_AnchorList.m_list.m_Memory.m_pMemory[v7];
    }
    else
    {
      v9 = 0;
    }
    v9->parentAttachment = 0;
    v10 = (*(this->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_CBodyComponent->m_pSceneNode);
    if ( v10 != 0 )
    {
      v11.m_nHashCode = CBaseEntity::GetParentAttachmentName(this).m_nHashCode;
      v9->parentAttachment = CSkeletonInstance::LookupAttachment(v10, v11);
    }
    v12 = this->m_pGameSceneNode->m_pParent;
    if ( v12 != 0
      && (OwnerEntity = CGameSceneNode::GetOwnerEntity(v12)) != 0
      && (m_pEntity = OwnerEntity->m_pEntity) != 0 )
    {
      v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v16 = 0x7FFF;
      else
        v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v9->hEntity.m_Index) = v16 | v9->hEntity.m_Index & 0x8000;
      v9->hEntity.m_Index = (v15 << 15) | v9->hEntity.m_Index & 0x7FFF;
    }
    else
    {
      v9->hEntity.m_Index = -1;
    }
    v9->name.u.m_Id = this->m_pEntity->m_name.u.m_Id;
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    v9->localOrigin.x = LocalOrigin->x;
    v9->localOrigin.y = LocalOrigin->y;
    z = LocalOrigin->z;
    LODWORD(v9->massScale) = v5;
    v9->localOrigin.z = z;
    UTIL_Remove(this);
  }
}


// CConstraintAnchor::GetDataDescMap  (line 146, @0x00000000022b7930, libserver.so)
// globals: CConstraintAnchor::m_DataMap
datamap_t *__fastcall CConstraintAnchor::GetDataDescMap(CConstraintAnchor *const this)
{
  return &CConstraintAnchor::m_DataMap;
}


// CConstraintAnchor::AddDatadescMetadataKeys  (line 146, @0x00000000022cdf70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CConstraintAnchor::GetEntityClass(void)
void __fastcall CConstraintAnchor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CConstraintAnchor::GetEntityClass);
}


// CConstraintAnchor::GetBaseMap  (line 146, @0x00000000022cdf90, libserver.so)
datamap_t *__cdecl CConstraintAnchor::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CConstraintAnchor>  (line 146, @0x00000000022cdfa0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CConstraintAnchor"
// globals: `guard variable for'DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder, CConstraintAnchor::GetEntityClass(void), CConstraintAnchor::m_DataMap, DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CConstraintAnchor>(CConstraintAnchor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder) != 0 )
  {
    DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder.m_pszBase = "CConstraintAnchor";
    DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::nameHolder,
      &_dso_handle);
  }
  CConstraintAnchor::m_DataMap.dataNumFields = 1;
  CConstraintAnchor::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CConstraintAnchor::m_DataMap.dataDesc = &DataMapInit<CConstraintAnchor>(CConstraintAnchor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CConstraintAnchor::m_DataMap, CConstraintAnchor::GetEntityClass);
  return &CConstraintAnchor::m_DataMap;
}


// PhysTeleportConstrainedEntity  (line 150, @0x00000000022ce070, libserver.so)  // inlines: MatrixAngles, MatrixPosition, operator=
// calls: IPhysicsBody::GetGameData, Msg, CBaseEntity::VPhysicsGetObject, CBaseEntity::GetAbsAngles, AngleMatrix, MatrixInvert, CBaseEntity::EntityToWorldTransform, ConcatTransforms, MatrixAngles
// callers: CPhysConstraint::NotifySystemEvent, CPhysicsSpring::NotifySystemEvent
// strings: "Bogus teleport notification!!\n"
void __fastcall PhysTeleportConstrainedEntity(
        CBaseEntity *pTeleportSource,
        IPhysicsObject *pObject0,
        IPhysicsObject *pObject1,
        const Vector *const prevPosition,
        const QAngle *const prevAngles,
        bool physicsRotate)
{
  CBaseEntity *GameData; // r15
  CBaseEntity *v11; // rax
  IPhysicsObject *Object; // rax
  matrix3x4_t *v13; // rax
  matrix3x4_t *v14; // rax
  QAngle oldAngles; // [rsp+10h] [rbp-120h] BYREF
  QAngle fixupAngles; // [rsp+20h] [rbp-110h] BYREF
  Vector fixupPos; // [rsp+30h] [rbp-100h] BYREF
  matrix3x4_t startCoord; // [rsp+40h] [rbp-F0h] BYREF
  matrix3x4_t startInv; // [rsp+70h] [rbp-C0h] BYREF
  matrix3x4_t endCoord; // [rsp+A0h] [rbp-90h] BYREF
  matrix3x4_t xform; // [rsp+D0h] [rbp-60h] BYREF

  GameData = IPhysicsBody::GetGameData(pObject0);
  v11 = IPhysicsBody::GetGameData(pObject1);
  if ( v11 != 0 && GameData != 0 )
  {
    if ( GameData == pTeleportSource )
    {
      GameData = v11;
    }
    else if ( v11 != pTeleportSource )
    {
      Msg("Bogus teleport notification!!\n");
      return;
    }
    if ( GameData->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS && CBaseEntity::VPhysicsGetObject(GameData) != 0 )
    {
      Object = CBaseEntity::VPhysicsGetObject(GameData);
      if ( (*(*Object + 1512LL))(Object) != 0 )
      {
        oldAngles = *prevAngles;
        if ( !physicsRotate )
          oldAngles = *CBaseEntity::GetAbsAngles(pTeleportSource);
        AngleMatrix(&oldAngles, prevPosition, &startCoord);
        MatrixInvert(&startCoord, &startInv);
        v13 = CBaseEntity::EntityToWorldTransform(pTeleportSource);
        ConcatTransforms(v13, &startInv, &xform);
        v14 = CBaseEntity::EntityToWorldTransform(GameData);
        ConcatTransforms(&xform, v14, &endCoord);
        MatrixAngles(&endCoord, &fixupAngles);
        fixupPos.x = endCoord.m_flMatVal[0][3];
        fixupPos.y = endCoord.m_flMatVal[1][3];
        fixupPos.z = endCoord.m_flMatVal[2][3];
        (*(GameData->_vptr_IHandleEntity + 128))(GameData, &fixupPos, &fixupAngles, 0);
      }
    }
  }
}


// CPhysConstraint::GetEntityClass  (line 218, @0x00000000023035f0, libserver.so)
CEntityClass *__cdecl CPhysConstraint::GetEntityClass()
{
  return g_pEntityCPhysConstraintClass;
}


// CPhysConstraint::Schema_DynamicBinding  (line 218, @0x0000000002303600, libserver.so)
// globals: CPhysConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysConstraint::Schema_DynamicBinding(const CPhysConstraint *const this)
{
  return CPhysConstraint::s_pSchemaBinding;
}


// CPhysConstraint::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 218, @0x0000000002303610, libserver.so)
// globals: CPhysConstraint::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysConstraint::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysConstraint::CEntityInstanceEntityClass *const this)
{
  return CPhysConstraint::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysConstraint::CEntityInstanceEntityClass::AllocateInstance  (line 218, @0x0000000002303620, libserver.so)
void *__fastcall CPhysConstraint::CEntityInstanceEntityClass::AllocateInstance(
        CPhysConstraint::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CPhysConstraint::CEntityInstanceEntityClass::ConstructInstance  (line 218, @0x0000000002303630, libserver.so)
CEntityInstance *__fastcall CPhysConstraint::CEntityInstanceEntityClass::ConstructInstance(
        CPhysConstraint::CEntityInstanceEntityClass *const this,
        void *p)
{
  return p;
}


// CPhysConstraint::CEntityInstanceEntityClass::DestructInstance  (line 218, @0x0000000002303640, libserver.so)
void __fastcall CPhysConstraint::CEntityInstanceEntityClass::DestructInstance(
        CPhysConstraint::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  ;
}


// CPhysConstraint::CEntityInstanceEntityClass::FreeInstance  (line 218, @0x0000000002303650, libserver.so)
void __fastcall CPhysConstraint::CEntityInstanceEntityClass::FreeInstance(
        CPhysConstraint::CEntityInstanceEntityClass *const this,
        void *p)
{
  ;
}


// CPhysConstraint::CEntityInstanceEntityClass::CanAllocate  (line 218, @0x0000000002303660, libserver.so)
bool __fastcall CPhysConstraint::CEntityInstanceEntityClass::CanAllocate(
        const CPhysConstraint::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CPhysConstraint::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 218, @0x0000000002303670, libserver.so)
// globals: CPhysConstraint::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysConstraint::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysConstraint::CEntityInstanceEntityClass *const this)
{
  return CPhysConstraint::s_pSchemaBinding;
}


// CPhysConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 218, @0x0000000002308b30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysConstraint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 218, @0x0000000002308b50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysConstraint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysConstraint::GetEntityClassInfo  (line 218, @0x000000000230da10, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CPhysHinge::GetEntityClassInternal, CGenericConstraint::GetEntityClassInternal, CPhysBallSocket::GetEntityClassInternal, CRagdollConstraint::GetEntityClassInternal, CPhysSlideConstraint::GetEntityClassInternal, CPhysFixed::GetEntityClassInternal, CPhysLength::GetEntityClassInternal, CPhysPulley::GetEntityClassInternal
// strings: "CPhysConstraint", "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo, CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo
CEntityClassInfo *__cdecl CPhysConstraint::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo != 0 )
    return &CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo) == 0 )
    return &CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo;
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
    &CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo,
    "CPhysConstraint",
    0,
    0,
    &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo);
  return &CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo;
}


// CPhysConstraint::GetEntityClassInternal  (line 218, @0x0000000002312ca0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysConstraint", "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass, CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo, CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo (11 total)
CEntityClass *__cdecl CPhysConstraint::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass) != 0 )
  {
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_designerName.u.m_Id = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass._vptr_CEntityClass = off_3F79390;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_ComponentOffsets.m_Size = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_AllHelpers.m_Size = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_classInputs.m_Size = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_classOutputs.m_Size = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_requiredEHandle.m_Index = -1;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_hNetworkSerializer = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_pBaseClassInfo = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_pClassInfo = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_flags = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_nAllHelpersFlags = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_pScriptClassDesc = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_pInputs = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_nInputCount = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_pOutputs = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_nOutputCount = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_pGameClass = 0;
    CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass._vptr_CEntityClass = off_4078FF0;
    __cxa_guard_release(&`guard variable for'CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass);
    __cxa_atexit(
      CPhysConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysConstraintClass != 0 )
    return &CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass;
  if ( `guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo) != 0 )
  {
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
      &CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo,
      "CPhysConstraint",
      0,
      0,
      &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo);
  }
  CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_pClassInfo = &CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo;
  CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_pBaseClassInfo = CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysConstraintClass = &CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass;
  CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo.m_pClass = &CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass;
  CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysConstraintClass->m_pComponentOverrides = 0;
  return &CPhysConstraint::GetEntityClassInternal(void)::g_EntityCPhysConstraintClass;
}


// CPhysConstraint::Deactivate  (line 239, @0x000000000230ef60, libserver.so)  // inlines: ClearStaticFlag
// calls: PhysClearGameFlags
void __fastcall CPhysConstraint::Deactivate(CPhysConstraint *const this)
{
  HPhysicsJoint m_hJoint; // rdi
  IPhysicsObject *v3; // rax
  IPhysicsObject *v4; // rax

  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
  {
    (*(*m_hJoint + 208LL))(m_hJoint);
    v3 = (*(*this->m_hJoint + 120LL))(this->m_hJoint);
    if ( v3 != 0 )
      PhysClearGameFlags(v3, 2u);
    v4 = (*(*this->m_hJoint + 136LL))(this->m_hJoint);
    if ( v4 != 0 )
      PhysClearGameFlags(v4, 2u);
  }
}


// CPhysConstraint::OnBreak  (line 249, @0x0000000002310870, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EmitSound_t, FireOutput, Free, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, VectorAdd, entindex, operator*=, operator=, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CBaseEntity::GetAbsOrigin, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CEntityIOOutput::FireOutputInternal, UTIL_Remove, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume (14 total)
// callers: CPhysConstraint::InputOnBreak, CPhysConstraint::InputBreak
void __fastcall CPhysConstraint::OnBreak(CPhysConstraint *const this, HPhysicsJoint hJoint)
{
  int v3; // xmm1_4
  float v4; // xmm1_4
  Vector *AbsOrigin; // rax
  HPhysicsJoint m_hJoint; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  float v9; // xmm1_4
  __int64 v10; // rax
  __int64 v11; // r15
  double v12; // xmm0_8
  __m128i v13; // xmm1
  int v14; // r15d
  const char *m_pAsString; // rax
  bool v16; // zf
  CEntityIndex v17; // eax
  float v18; // [rsp+8h] [rbp-218h]
  float v19; // [rsp+Ch] [rbp-214h]
  float v20; // [rsp+10h] [rbp-210h]
  float z; // [rsp+14h] [rbp-20Ch]
  unsigned __int64 v22; // [rsp+18h] [rbp-208h]
  Vector origin; // [rsp+20h] [rbp-200h] BYREF
  double v24; // [rsp+30h] [rbp-1F0h]
  float v25; // [rsp+38h] [rbp-1E8h]
  double v26; // [rsp+40h] [rbp-1E0h]
  __int32 v27; // [rsp+48h] [rbp-1D8h]
  EmitSound_t ep; // [rsp+50h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+B0h] [rbp-170h] BYREF
  unsigned __int64 v30; // [rsp+1E8h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  (*(this->_vptr_IHandleEntity + 207))(this, hJoint);
  if ( this->m_breakSound.u.m_Id != 0 )
  {
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    LODWORD(ep.m_pSoundName) = v3;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    *&ep.m_pSoundName = v4;
    CPASAttenuationFilter::Filter(&filter, &ep, 1.25, v4);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    m_hJoint = this->m_hJoint;
    origin = *AbsOrigin;
    v22 = *&origin.x;
    z = origin.z;
    v7 = (*(*m_hJoint + 120LL))(m_hJoint);
    v8 = v7;
    if ( v7 != 0 && (*(*v7 + 1328LL))(v7) != 0x8000 )
    {
      v24 = (*(*v8 + 368LL))(v8);
      v25 = v9;
      z = v9;
      v22 = *&v24;
    }
    v10 = (*(*this->m_hJoint + 136LL))(this->m_hJoint);
    v11 = v10;
    if ( v10 == 0 || (*(*v10 + 1328LL))(v10) == 0x8000 )
    {
      v18 = z;
      v19 = *(&v22 + 1);
      LODWORD(v20) = v22;
    }
    else
    {
      v12 = (*(*v11 + 368LL))(v11);
      *&v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
      v27 = v13.m128i_i32[0];
      v26 = v12;
      v18 = *v13.m128i_i32;
      v20 = *&v12;
      v19 = *(&v12 + 1);
      if ( v8 == 0 || (*(*v8 + 1328LL))(v8) == 0x8000 )
      {
        z = *&v14;
        v22 = __PAIR64__(LODWORD(v19), LODWORD(v20));
      }
    }
    ep.m_bEmitCloseCaption = 1;
    m_pAsString = "";
    ep.m_flVolume = 1.0;
    ep.m_nFlags = 0;
    v16 = this->m_breakSound.u.m_Id == 0;
    ep.m_nPitch = 100;
    ep.m_flSoundTime = 0.0;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_pflSoundDuration = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    origin.x = (*&v22 + v20) * 0.5;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 6;
    origin.y = (*(&v22 + 1) + v19) * 0.5;
    origin.z = (v18 + z) * 0.5;
    if ( !v16 )
      m_pAsString = this->m_breakSound.u.m_pAsString;
    ep.m_pSoundName = m_pAsString;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_STATIC;
    ep.m_pOrigin = &origin;
    v17.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::EmitSound(&filter, v17, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  LODWORD(ep.m_pSoundName) = 0;
  *&ep.m_nChannel = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnBreak, this, this, &ep, 0.0);
  if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
  UTIL_Remove(this);
}


// CPhysConstraint::InputBreak  (line 295, @0x0000000002310d80, libserver.so)
// calls: CPhysConstraint::OnBreak
void __fastcall CPhysConstraint::InputBreak(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  IPhysicsJoint *v2; // rsi
  HPhysicsJoint m_hJoint; // rdi

  v2 = 0;
  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
  {
    (*(*m_hJoint + 208LL))(m_hJoint, 0);
    v2 = this->m_hJoint;
  }
  CPhysConstraint::OnBreak(this, v2);
}


// CPhysConstraint::InputOnBreak  (line 305, @0x0000000002310d60, libserver.so)
// calls: CPhysConstraint::OnBreak
void __fastcall CPhysConstraint::InputOnBreak(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  CPhysConstraint::OnBreak(this, this->m_hJoint);
}


// CPhysConstraint::InputTurnOn  (line 310, @0x000000000230fc40, libserver.so)
// calls: CPhysConstraint::ActivateConstraint
void __fastcall CPhysConstraint::InputTurnOn(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  HPhysicsJoint m_hJoint; // rdi
  __int64 v4; // rax
  __int64 v5; // rax

  if ( (this->m_spawnflags.m_Value & 0x10) != 0 )
    CPhysConstraint::ActivateConstraint(this);
  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0
    && (*(*m_hJoint + 120LL))(m_hJoint, inputdata) != 0
    && (*(*this->m_hJoint + 136LL))(this->m_hJoint) != 0 )
  {
    (*(*this->m_hJoint + 200LL))(this->m_hJoint);
    v4 = (*(*this->m_hJoint + 120LL))(this->m_hJoint);
    (*(*v4 + 856LL))(v4);
    v5 = (*(*this->m_hJoint + 136LL))(this->m_hJoint);
    (*(*v5 + 856LL))(v5);
  }
}


// CPhysConstraint::InputTurnOff  (line 325, @0x0000000002303680, libserver.so)
void __fastcall CPhysConstraint::InputTurnOff(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 207))(this, inputdata);
}


// CPhysConstraint::InputTurnMotorOn  (line 330, @0x00000000023036a0, libserver.so)
void __fastcall CPhysConstraint::InputTurnMotorOn(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  HPhysicsJoint m_hJoint; // rdi

  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
    (*(*m_hJoint + 248LL))(m_hJoint, inputdata);
}


// CPhysConstraint::InputTurnMotorOff  (line 338, @0x00000000023036d0, libserver.so)
void __fastcall CPhysConstraint::InputTurnMotorOff(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  HPhysicsJoint m_hJoint; // rdi

  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
    (*(*m_hJoint + 256LL))(m_hJoint, inputdata);
}


// CPhysConstraint::InputEnableLinearConstraint  (line 346, @0x0000000002303700, libserver.so)
void __fastcall CPhysConstraint::InputEnableLinearConstraint(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  HPhysicsJoint m_hJoint; // rdi

  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
    (*(*m_hJoint + 312LL))(m_hJoint, inputdata);
}


// CPhysConstraint::InputDisableLinearConstraint  (line 354, @0x0000000002303730, libserver.so)
void __fastcall CPhysConstraint::InputDisableLinearConstraint(
        CPhysConstraint *const this,
        inputdata_t *const inputdata)
{
  HPhysicsJoint m_hJoint; // rdi

  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
    (*(*m_hJoint + 320LL))(m_hJoint, inputdata);
}


// CPhysConstraint::InputEnableAngularConstraint  (line 362, @0x0000000002303760, libserver.so)
void __fastcall CPhysConstraint::InputEnableAngularConstraint(
        CPhysConstraint *const this,
        inputdata_t *const inputdata)
{
  HPhysicsJoint m_hJoint; // rdi

  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
    (*(*m_hJoint + 368LL))(m_hJoint, inputdata);
}


// CPhysConstraint::InputDisableAngularConstraint  (line 370, @0x0000000002303790, libserver.so)
void __fastcall CPhysConstraint::InputDisableAngularConstraint(
        CPhysConstraint *const this,
        inputdata_t *const inputdata)
{
  HPhysicsJoint m_hJoint; // rdi

  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
    (*(*m_hJoint + 376LL))(m_hJoint, inputdata);
}


// CPhysConstraint::InputSetMotorTorqueFactor  (line 379, @0x00000000023037c0, libserver.so)  // inlines: Float, operator float
void __fastcall CPhysConstraint::InputSetMotorTorqueFactor(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  HPhysicsJoint m_hJoint; // rdi
  void (__fastcall *v5)(HPhysicsJoint, float); // r13
  float v6; // xmm0_4
  float m_float64; // xmm1_4

  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
  {
    v5 = *(*m_hJoint + 288LL);
    (*(*m_hJoint + 488LL))(m_hJoint);
    if ( inputdata->value.m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_float;
    v5(this->m_hJoint, v6 * m_float64);
  }
}


// CPhysConstraint::InputSetMotorTargetVelocity  (line 388, @0x0000000002303840, libserver.so)  // inlines: Float, Vector, operator float
// local variable allocation has failed, the output may be wrong!
void __fastcall CPhysConstraint::InputSetMotorTargetVelocity(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  __int64 v2; // rbp
  HPhysicsJoint m_hJoint; // rdi
  float m_float64; // xmm0_4
  __m128d v5; // xmm0
  float v6; // xmm1_4
  __int64 v7; // [rsp-8h] [rbp-18h] BYREF
  __int128 vTargetVelocity; // [rsp+0h] [rbp-10h] OVERLAPPED

  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
  {
    *(&vTargetVelocity + 1) = v2;
    if ( inputdata->value.m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_float;
    v5.m128d_f64[1] = m_float64;
    v5.m128d_f64[0] = m_float64 * 57.29577951308232;
    v7 = 0;
    v6 = _mm_movedup_pd(v5).m128d_f64[0];
    *&vTargetVelocity = v6;
    (*(*m_hJoint + 272LL))(m_hJoint, &v7);
  }
}


// CPhysConstraint::InputSetMotorTargetAngle  (line 398, @0x00000000023038b0, libserver.so)
void __fastcall CPhysConstraint::InputSetMotorTargetAngle(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  ;
}


// CPhysConstraint::InputTurnMotorTargetAngleOff  (line 410, @0x00000000023038c0, libserver.so)
void __fastcall CPhysConstraint::InputTurnMotorTargetAngleOff(
        CPhysConstraint *const this,
        inputdata_t *const inputdata)
{
  ;
}


// CPhysConstraint::InputTurnMotorTargetAngleOn  (line 422, @0x00000000023038d0, libserver.so)
void __fastcall CPhysConstraint::InputTurnMotorTargetAngleOn(CPhysConstraint *const this, inputdata_t *const inputdata)
{
  ;
}


// CPhysConstraint::DrawEntityDebugOverlays  (line 452, @0x0000000002306f20, libserver.so)  // inlines: DrawDebugConstraint
// calls: CBaseEntity::DrawEntityDebugOverlays
void __fastcall CPhysConstraint::DrawEntityDebugOverlays(CPhysConstraint *const this, uint64 nDebugOverlayBits)
{
  HPhysicsJoint m_hJoint; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  if ( (nDebugOverlayBits & 0x2C) == 0 )
    goto LABEL_2;
  m_hJoint = this->m_hJoint;
  if ( m_hJoint == 0 )
    goto LABEL_2;
  (*(*m_hJoint + 472LL))(m_hJoint, g_pDebugOverlay);
  v5 = (*(*this->m_hJoint + 120LL))(this->m_hJoint);
  if ( v5 != 0 )
    (*(*v5 + 40LL))(v5);
  v6 = (*(*this->m_hJoint + 136LL))(this->m_hJoint);
  if ( v6 != 0 )
  {
    (*(*v6 + 40LL))(v6);
    CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
  }
  else
  {
LABEL_2:
    CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
  }
}


// CPhysConstraint::OnRestore  (line 504, @0x0000000002307140, libserver.so)  // inlines: CUtlDelegate<CPhysConstraint, CPhysConstraint>, Convert<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*), void (detail::GenericClass::*)()>, FastDelegate1<CPhysConstraint, CPhysConstraint>, UtlMakeDelegate<CPhysConstraint, CPhysConstraint, IPhysicsJoint*, void>, bindmemfunc<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*)>
// calls: CBaseEntity::OnRestore
// globals: CPhysConstraint::OnBreak(IPhysicsJoint *)
void __fastcall CPhysConstraint::OnRestore(CPhysConstraint *const this)
{
  HPhysicsJoint m_hJoint; // rdi
  __int64 v3; // rax
  _QWORD v4[6]; // [rsp+0h] [rbp-30h] BYREF

  CBaseEntity::OnRestore(this);
  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 && this->m_forceLimit > 0.0 )
  {
    v3 = *m_hJoint;
    v4[0] = this;
    v4[1] = CPhysConstraint::OnBreak;
    v4[2] = 0;
    (*(v3 + 432))(m_hJoint, v4);
  }
}


// CPhysConstraint::GetDataDescMap  (line 527, @0x00000000022b7940, libserver.so)
// globals: CPhysConstraint::m_DataMap
datamap_t *__fastcall CPhysConstraint::GetDataDescMap(CPhysConstraint *const this)
{
  return &CPhysConstraint::m_DataMap;
}


// CPhysConstraint::AddDatadescMetadataKeys  (line 527, @0x00000000022ce3d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysConstraint::GetEntityClass(void)
void __fastcall CPhysConstraint::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysConstraint::GetEntityClass);
}


// CPhysConstraint::GetBaseMap  (line 527, @0x00000000022ce3f0, libserver.so)
datamap_t *__cdecl CPhysConstraint::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CPhysConstraint>  (line 527, @0x00000000022ce400, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, GetPhysObjSaveRestoreOps
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysConstraint"
// globals: `guard variable for'DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder, `guard variable for'DataMapInit<CPhysConstraint>(CPhysConstraint *)::dataDesc, CPhysConstraint::GetEntityClass(void), CPhysConstraint::m_DataMap, GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited, DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysConstraint>(CPhysConstraint *a1)
{
  PhysInterfaceId_t *p_m_type; // rdx
  PhysInterfaceId_t i; // eax

  if ( `guard variable for'datamap_t * DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder.m_pszBase = "CPhysConstraint";
    DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysConstraint>(CPhysConstraint *)::nameHolder,
      &_dso_handle);
  }
  CPhysConstraint::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysConstraint>(CPhysConstraint *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysConstraint>(CPhysConstraint *)::dataDesc) != 0 )
  {
    if ( !GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited )
    {
      GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited = 1;
      p_m_type = &g_PhysObjSaveRestoreOps[0].m_type;
      for ( i = PhysInterfaceId_t::PIID_UNKNOWN; i != PhysInterfaceId_t::PIID_NUM_TYPES; ++i )
      {
        *p_m_type = i;
        p_m_type += 4;
      }
    }
    DataMapInit<CPhysConstraint>(CPhysConstraint *)::dataDesc[1].pSaveRestoreOps = &g_PhysObjSaveRestoreOps[3];
    DataMapInit<CPhysConstraint>(CPhysConstraint *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysConstraint>(CPhysConstraint *)::dataDesc);
  }
  CPhysConstraint::m_DataMap.dataNumFields = 24;
  CPhysConstraint::m_DataMap.dataDesc = &DataMapInit<CPhysConstraint>(CPhysConstraint *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysConstraint::m_DataMap, CPhysConstraint::GetEntityClass);
  return &CPhysConstraint::m_DataMap;
}


// CPhysConstraint::CPhysConstraint  (line 564, @0x00000000022ce560, libserver.so)  // inlines: CEntityIOOutput, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge
// calls: CBaseEntity::CBaseEntity
// callers: CPhysHinge::CEntityInstanceEntityClass::ConstructInstance, CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::ConstructInstance, CPhysBallSocket::CEntityInstanceEntityClass::ConstructInstance, CPhysSlideConstraint::CEntityInstanceEntityClass::ConstructInstance, CPhysFixed::CEntityInstanceEntityClass::ConstructInstance, CPhysPulley::CEntityInstanceEntityClass::ConstructInstance, CPhysLength::CEntityInstanceEntityClass::ConstructInstance, CRagdollConstraint::CEntityInstanceEntityClass::ConstructInstance, CPhysFixed::CPhysFixed, CGenericConstraint::CGenericConstraint
void __fastcall CPhysConstraint::CPhysConstraint(CPhysConstraint *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_4079070;
  this->m_nameAttach1.u.m_Id = 0;
  this->m_nameAttach2.u.m_Id = 0;
  this->m_breakSound.u.m_Id = 0;
  this->m_OnBreak._vptr_CEntityIOOutput = off_3F7C190;
  this->m_forceLimit = 0.0;
  this->m_torqueLimit = 0.0;
  this->m_teleportTick = -1;
  this->m_minTeleportDistance = 0.0;
}


// CPhysConstraint::~CPhysConstraint  (line 574, @0x00000000022b8cc0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysConstraint::~CPhysConstraint(CPhysConstraint *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysConstraint::~CPhysConstraint  (line 574, @0x00000000022b8ce0, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysConstraint::~CPhysConstraint(CPhysConstraint *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysConstraint::UpdateOnRemove  (line 578, @0x00000000022b9580, libserver.so)
// calls: CBaseEntity::VPhysicsWorld, CBaseEntity::UpdateOnRemove
void __fastcall CPhysConstraint::UpdateOnRemove(CPhysConstraint *const this)
{
  IVPhysics2World *v2; // rax

  (*(this->_vptr_IHandleEntity + 207))(this);
  if ( this->m_hJoint != 0 )
  {
    v2 = CBaseEntity::VPhysicsWorld(this);
    (*(*v2 + 904LL))(v2, this->m_hJoint);
    this->m_hJoint = 0;
  }
  CBaseEntity::UpdateOnRemove(this);
}


// CPhysConstraint::Precache  (line 591, @0x0000000002302860, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound
void __fastcall CPhysConstraint::Precache(CPhysConstraint *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  if ( this->m_breakSound.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_breakSound.u.m_pAsString, pContext);
}


// GetConstraintAttachments  (line 603, @0x00000000022ce5e0, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CBaseEntity*
// calls: __dynamic_cast
// globals: `typeinfo for'CPhysConstraint, CEntityHandle::gm_pEntityList
bool __fastcall GetConstraintAttachments(
        CBaseEntity *pEntity,
        CBaseEntity **pAttachOut,
        IPhysicsObject **pAttachVPhysics)
{
  _QWORD *v5; // rax
  __int64 v6; // rbx
  bool result; // al
  IPhysicsObject *v8; // rax
  int v9; // eax
  CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  IPhysicsObject *v13; // rax
  int v14; // eax
  CBaseEntity *v15; // rcx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx

  if ( pEntity == 0 )
    return 0;
  v5 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CPhysConstraint, 0);
  if ( v5 == 0 )
    return 0;
  v6 = v5[97];
  result = 0;
  if ( v6 != 0 )
  {
    v8 = (*(*v6 + 120LL))(v6);
    *pAttachVPhysics = v8;
    v9 = (*(*v8 + 1328LL))(v8);
    m_pInstance = 0;
    if ( (v9 + 2) > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[v9 & 0x1FF];
        if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
          m_pInstance = v12->m_pInstance;
      }
    }
    *pAttachOut = m_pInstance;
    v13 = (*(*v6 + 136LL))(v6);
    pAttachVPhysics[1] = v13;
    v14 = (*(*v13 + 1328LL))(v13);
    v15 = 0;
    if ( (v14 + 2) > 1 )
    {
      v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v14 >> 9) & 0x3F];
      if ( v16 != 0 )
      {
        v17 = &v16[v14 & 0x1FF];
        if ( v17 != 0 && v14 == v17->m_EHandle.m_Index )
          v15 = v17->m_pInstance;
      }
    }
    pAttachOut[1] = v15;
    return 1;
  }
  return result;
}


// FindPhysicsAnchor  (line 624, @0x00000000022eba00, libserver.so)  // inlines: CUtlSymbolLarge, FStrEq, Find, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPartCount, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=
// calls: strcmp, FindPhysicsBodyByName, CEntityHandle::operator CEntityInstance*, CBaseEntity::VPhysicsGetAggregate, CBaseAnimating::GetAttachmentBone, CBaseAnimating::GetPhysicsBone, CBaseAnimating::GetAttachment
// callers: CPhysConstraint::GetConstraintObjects
// globals: CEntityHandle::gm_pEntityList
void __fastcall FindPhysicsAnchor(
        string_t name,
        hl_constraint_info_t *const info,
        int index,
        CBaseEntity *pErrorEntity)
{
  const char *v4; // rbx
  int v5; // r13d
  constraint_anchor_t *v6; // r15
  string_t *p_name; // r14
  unsigned __int64 v8; // r12
  const char *v9; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const char *v13; // rdi
  CEntityInstance *v14; // rax
  const CBaseAnimating *v15; // r12
  const CBaseEntity *v16; // rax
  IPhysAggregateInstance *v17; // r13
  int AttachmentBone; // eax
  unsigned int PhysicsBone; // eax
  _DWORD *v20; // rax
  const CBaseEntity *v21; // rax
  IPhysAggregateInstance *Aggregate; // rax
  char *v23; // r14
  double v24; // xmm0_8
  _DWORD *p_x; // rax
  int v26; // xmm1_4
  signed int nListCount; // [rsp+28h] [rbp-58h]
  Vector pos; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h]

  v4 = *name.u.m_pAsString;
  v5 = g_AnchorList.m_list.m_Size - 1;
  if ( g_AnchorList.m_list.m_Size - 1 < 0 )
    goto LABEL_14;
  if ( v4 == 0 )
    v4 = "";
  v6 = &g_AnchorList.m_list.m_Memory.m_pMemory[v5];
  p_name = &v6->name;
  v8 = -40LL * v5 - g_AnchorList.m_list.m_Memory.m_pMemory;
  while ( 1 )
  {
    v9 = *(&p_name->u.m_pAsString + v6 + v8);
    if ( v9 == 0 )
      v9 = "";
    if ( v4 == v9 || strcmp(v9, v4) == 0 )
      break;
    --v5;
    --v6;
    if ( v5 == -1 )
      goto LABEL_14;
  }
  m_Index = v6->hEntity.m_Index;
  if ( m_Index + 2 > 1
    && (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->hEntity.m_Index) >> 9) & 0x3F]) != 0
    && (v12 = &v11[v6->hEntity.m_Index & 0x1FF]) != 0
    && m_Index == v12->m_EHandle.m_Index
    && v12->m_pInstance != 0 )
  {
    info->massScale[index] = v6->massScale;
    if ( v6->parentAttachment > 0
      && (v14 = CEntityHandle::operator CEntityInstance *(&v6->hEntity),
          (v15 = (*(v14->_vptr_IHandleEntity + 43))(v14)) != 0)
      && (v16 = CEntityHandle::operator CEntityInstance *(&v6->hEntity),
          v17 = CBaseEntity::VPhysicsGetAggregate(v16),
          nListCount = (*(v17->_vptr_IPhysAggregateInstance + 9))(v17),
          AttachmentBone = CBaseAnimating::GetAttachmentBone(v15, v6->parentAttachment, 0),
          (PhysicsBone = CBaseAnimating::GetPhysicsBone(v15, AttachmentBone)) < nListCount) )
    {
      v23 = info + 8 * index;
      *(v23 + 3) = (*(v17->_vptr_IPhysAggregateInstance + 10))(v17, PhysicsBone);
      CBaseAnimating::GetAttachment(v15, v6->parentAttachment, &pos);
      v24 = (*(**(v23 + 3) + 1008LL))(*(v23 + 3), &pos);
      HIDWORD(v33) = HIDWORD(v24);
      p_x = &info->anchorPosition[index].x;
      *p_x = LODWORD(v24);
      LODWORD(v24) = HIDWORD(v33);
      p_x[2] = v26;
      p_x[1] = LODWORD(v24);
    }
    else
    {
      v20 = &info->anchorPosition[index].x;
      *v20 = LODWORD(v6->localOrigin.x);
      v20[1] = LODWORD(v6->localOrigin.y);
      v20[2] = LODWORD(v6->localOrigin.z);
      v21 = CEntityHandle::operator CEntityInstance *(&v6->hEntity);
      Aggregate = CBaseEntity::VPhysicsGetAggregate(v21);
      info->hObjects[index] = (*(Aggregate->_vptr_IPhysAggregateInstance + 10))(Aggregate, 0);
    }
  }
  else
  {
LABEL_14:
    v13 = "";
    info->anchorPosition[index] = vec3_origin;
    if ( *name.u.m_Id != 0 )
      v13 = *name.u.m_pAsString;
    info->hObjects[index] = FindPhysicsBodyByName(v13, pErrorEntity);
    info->massScale[index] = 1.0;
  }
}


// CPhysConstraint::OnConstraintSetup  (line 672, @0x00000000022ce840, libserver.so)
// calls: CPhysConstraint::SetupTeleportationHandling
// callers: CGenericConstraint::OnConstraintSetup
void __fastcall CPhysConstraint::OnConstraintSetup(CPhysConstraint *const this, hl_constraint_info_t *const info)
{
  HPhysicsJoint m_hJoint; // rdi
  __int64 v4; // rdx

  if ( info->hObjects[0] != 0 && info->hObjects[1] != 0 )
    CPhysConstraint::SetupTeleportationHandling(this, info);
  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 )
  {
    v4 = *m_hJoint;
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
      (*(v4 + 232))();
    else
      (*(v4 + 224))();
  }
}


// CPhysConstraint::SetupTeleportationHandling  (line 691, @0x00000000022ce730, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CBaseEntity*
// callers: CPhysConstraint::OnConstraintSetup
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysConstraint::SetupTeleportationHandling(
        CPhysConstraint *const this,
        hl_constraint_info_t *const info)
{
  int v4; // eax
  CConcreteEntityList *v5; // rsi
  CEntityIdentity *v6; // rdx
  __int64 v7; // rcx
  CEntityIdentity *v8; // rdx
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  v4 = (*(*info->hObjects[0] + 1328LL))(info->hObjects[0]);
  v5 = CEntityHandle::gm_pEntityList;
  if ( (v4 + 2) > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = v4 & 0x1FF;
      v5 = (8 * v7);
      v8 = &v6[v7];
      if ( v8 != 0 && v4 == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        (*g_pNotify->_vptr_INotify)(g_pNotify, this);
    }
  }
  v9 = (*(*info->hObjects[1] + 1328LL))(info->hObjects[1], v5);
  if ( (v9 + 2) > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[v9 & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
        (*g_pNotify->_vptr_INotify)(g_pNotify, this);
    }
  }
}


// CPhysConstraint::GetConstraintObjects  (line 707, @0x00000000022ebcc0, libserver.so)  // inlines: CUtlSymbolLarge, GetDebugName, String, ToCStr, V_strlen
// calls: FindPhysicsAnchor, CEntityIdentity::GetDebugName, Warning, CPhysicsGameSystem::GetLevelAggregateInstance, strlen
// callers: CPhysConstraint::ActivateConstraint
// strings: "Bogus constraint %s (attaches %s to ENTITY NOT FOUND:%s)\n"
void __fastcall CPhysConstraint::GetConstraintObjects(CPhysConstraint *const this, hl_constraint_info_t *const info)
{
  IPhysicsBody *v4; // rdx
  const char *m_pAsString; // r13
  const char *v6; // r14
  const char *DebugName; // rax
  IPhysAggregateInstance *LevelAggregateInstance; // rax
  IPhysicsBody *v9; // rax
  const char *v10; // r13
  const char *v11; // r14
  const char *v12; // rax
  IPhysAggregateInstance *v13; // rax
  IPhysicsBody *v14; // rax
  string_t name; // [rsp+0h] [rbp-30h] BYREF

  name.u.m_Id = this->m_nameAttach1.u.m_Id;
  FindPhysicsAnchor(&name, info, 0, this);
  name.u.m_Id = this->m_nameAttach2.u.m_Id;
  FindPhysicsAnchor(&name, info, 1, this);
  if ( info->hObjects[0] != 0 )
  {
    if ( info->hObjects[1] == 0 )
    {
      v4 = info->hObjects[0];
      if ( this->m_nameAttach2.u.m_Id != 0 )
      {
        m_pAsString = this->m_nameAttach2.u.m_pAsString;
        if ( strlen(m_pAsString) != 0 )
        {
          v6 = "";
          if ( this->m_nameAttach1.u.m_Id != 0 )
            v6 = this->m_nameAttach1.u.m_pAsString;
          DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
          Warning("Bogus constraint %s (attaches %s to ENTITY NOT FOUND:%s)\n", DebugName, v6, m_pAsString);
          v4 = info->hObjects[0];
        }
      }
      info->hObjects[1] = v4;
      LevelAggregateInstance = CPhysicsGameSystem::GetLevelAggregateInstance(g_pPhysicsGameSystem);
      v9 = (*(LevelAggregateInstance->_vptr_IPhysAggregateInstance + 10))(LevelAggregateInstance, 0);
      info->massScale[1] = 1.0;
      info->hObjects[0] = v9;
      info->massScale[0] = 1.0;
      info->swapped = 1;
    }
  }
  else if ( info->hObjects[1] != 0 )
  {
    if ( this->m_nameAttach1.u.m_Id != 0 )
    {
      v10 = this->m_nameAttach1.u.m_pAsString;
      if ( strlen(v10) != 0 )
      {
        v11 = "";
        if ( this->m_nameAttach2.u.m_Id != 0 )
          v11 = this->m_nameAttach2.u.m_pAsString;
        v12 = CEntityIdentity::GetDebugName(this->m_pEntity);
        Warning(&stru_333F690.m_iInitialTeamNum, v12, v10, v11);
      }
    }
    v13 = CPhysicsGameSystem::GetLevelAggregateInstance(g_pPhysicsGameSystem);
    v14 = (*(v13->_vptr_IPhysAggregateInstance + 10))(v13, 0);
    info->massScale[1] = 1.0;
    info->hObjects[0] = v14;
    info->massScale[0] = 1.0;
  }
}


// CPhysConstraint::Activate  (line 743, @0x00000000022ec000, libserver.so)  // inlines: ActivateConstraint
// calls: CBaseEntity::Activate, UTIL_Remove, CPhysConstraint::ActivateConstraint
void __fastcall CPhysConstraint::Activate(CPhysConstraint *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  if ( (this->m_spawnflags.m_Value & 0x10) == 0
    && ((this->m_pEntity->m_flags & 0x200) != 0 || !CPhysConstraint::ActivateConstraint(this)) )
  {
    UTIL_Remove(this);
  }
}


// CPhysConstraint::ActivateConstraint  (line 764, @0x00000000022ebe90, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, Init, String, ToCStr, hl_constraint_info_t, operator==
// calls: CPhysConstraint::GetConstraintObjects, Warning
// callers: CPhysConstraint::ActivateConstraint, CPhysConstraint::Activate
// strings: "Constraint (%s) attached two non-physical objects (%s and %s)!!!\n"
bool __fastcall CPhysConstraint::ActivateConstraint(CPhysConstraint *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  HPhysicsJoint m_hJoint; // rdi
  IPhysicsBody *v8; // rax
  HPhysicsJoint v9; // rdi
  bool result; // al
  __int64 v11; // r8
  __int64 v12; // r9
  IPhysicsJoint *v13; // rdx
  char *m_Id; // rcx
  const char *m_pAsString; // rdx
  const char *v16; // rsi
  hl_constraint_info_t info; // [rsp+0h] [rbp-50h] BYREF

  memset(&info, 0, 24);
  m_hJoint = this->m_hJoint;
  info.swapped = 0;
  info.massScale[1] = 1.0;
  info.massScale[0] = 1.0;
  if ( m_hJoint != 0 )
  {
    v8 = (*(*m_hJoint + 120LL))(
           m_hJoint,
           v3,
           v1,
           v2,
           v4,
           v5,
           *&info.anchorPosition[0].x,
           *&info.anchorPosition[0].z,
           *&info.anchorPosition[1].y);
    v9 = this->m_hJoint;
    info.hObjects[0] = v8;
    info.hObjects[1] = (*(*v9 + 136LL))(v9);
    (*(this->_vptr_IHandleEntity + 208))(this, &info);
    return 1;
  }
  else
  {
    CPhysConstraint::GetConstraintObjects(this, &info);
    if ( info.hObjects[0] != 0 || info.hObjects[1] != 0 )
    {
      v13 = (*(this->_vptr_IHandleEntity + 209))(this, &info);
      this->m_hJoint = v13;
      result = 0;
      if ( v13 != 0 )
      {
        (*(this->_vptr_IHandleEntity + 208))(this, &info);
        return 1;
      }
    }
    else
    {
      m_Id = "world";
      m_pAsString = this->m_nameAttach1.u.m_pAsString;
      v16 = this->m_pEntity->m_name.u.m_pAsString;
      if ( this->m_nameAttach2.u.m_Id != 0 )
        m_Id = this->m_nameAttach2.u.m_Id;
      if ( m_pAsString == 0 )
        m_pAsString = "";
      if ( v16 == 0 )
        v16 = "";
      Warning(
        "Constraint (%s) attached two non-physical objects (%s and %s)!!!\n",
        v16,
        m_pAsString,
        m_Id,
        v11,
        v12,
        *&info.anchorPosition[0].x,
        *&info.anchorPosition[0].z,
        *&info.anchorPosition[1].y);
      return 0;
    }
  }
  return result;
}


// CPhysConstraint::ActivateConstraint  (line 764, @0x00000000022ebfe0, libserver.so)
// calls: CPhysConstraint::ActivateConstraint
// callers: CPhysConstraint::InputTurnOn
bool __fastcall CPhysConstraint::ActivateConstraint(CPhysConstraint *const this)
{
  return (this->m_pEntity->m_flags & 0x200) == 0 && CPhysConstraint::ActivateConstraint(this);
}


// CPhysConstraint::NotifySystemEvent  (line 802, @0x00000000022ce230, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetAbsOrigin, PhysTeleportConstrainedEntity
void __fastcall CPhysConstraint::NotifySystemEvent(
        CPhysConstraint *const this,
        CBaseEntity *pNotify,
        notify_system_event_t eventType,
        const notify_system_event_params_t *const params)
{
  const Vector *AbsOrigin; // rax
  float v8; // xmm1_4
  HPhysicsJoint m_hJoint; // rdi
  const notify_teleport_params_t *pTeleport; // r13
  bool physicsRotate; // r14
  IPhysicsObject *v12; // r15
  IPhysicsObject *v13; // rax

  if ( eventType == notify_system_event_t::NOTIFY_EVENT_TELEPORT && gpGlobals->tickcount != this->m_teleportTick )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pNotify);
    v8 = params->pTeleport->prevOrigin.z - AbsOrigin->z;
    if ( this->m_minTeleportDistance < fsqrt(
                                         (((params->pTeleport->prevOrigin.x - AbsOrigin->x)
                                         * (params->pTeleport->prevOrigin.x - AbsOrigin->x))
                                        + ((params->pTeleport->prevOrigin.y - AbsOrigin->y)
                                         * (params->pTeleport->prevOrigin.y - AbsOrigin->y)))
                                       + (v8 * v8)) )
    {
      m_hJoint = this->m_hJoint;
      this->m_teleportTick = gpGlobals->tickcount;
      pTeleport = params->pTeleport;
      physicsRotate = pTeleport->physicsRotate;
      v12 = (*(*m_hJoint + 136LL))(m_hJoint);
      v13 = (*(*this->m_hJoint + 120LL))(this->m_hJoint);
      PhysTeleportConstrainedEntity(pNotify, v13, v12, &pTeleport->prevOrigin, &pTeleport->prevAngles, physicsRotate);
    }
  }
}


// CPhysHinge::~CPhysHinge  (line 824, @0x0000000002306af0, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity, ~IVPhysicsWatcher, ~IWatcherCallback
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysHinge::~CPhysHinge(CPhysHinge *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysHinge::~CPhysHinge  (line 824, @0x0000000002306b30, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CPhysHinge, ~CServerOnlyEntity, ~IVPhysicsWatcher, ~IWatcherCallback
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysHinge::~CPhysHinge(CPhysHinge *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysHinge::GetEntityClass  (line 826, @0x00000000023038e0, libserver.so)
CEntityClass *__cdecl CPhysHinge::GetEntityClass()
{
  return g_pEntityCPhysHingeClass;
}


// CPhysHinge::Schema_DynamicBinding  (line 826, @0x00000000023038f0, libserver.so)
// globals: CPhysHinge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysHinge::Schema_DynamicBinding(const CPhysHinge *const this)
{
  return CPhysHinge::s_pSchemaBinding;
}


// CPhysHinge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 826, @0x0000000002303900, libserver.so)
// globals: CPhysHinge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysHinge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysHinge::CEntityInstanceEntityClass *const this)
{
  return CPhysHinge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysHinge::CEntityInstanceEntityClass::DestructInstance  (line 826, @0x0000000002303910, libserver.so)  // inlines: Destruct<CPhysHinge>
void __fastcall CPhysHinge::CEntityInstanceEntityClass::DestructInstance(
        CPhysHinge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysHinge::CEntityInstanceEntityClass::FreeInstance  (line 826, @0x0000000002303930, libserver.so)
void __fastcall CPhysHinge::CEntityInstanceEntityClass::FreeInstance(
        CPhysHinge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysHinge::CEntityInstanceEntityClass::CanAllocate  (line 826, @0x0000000002303950, libserver.so)
bool __fastcall CPhysHinge::CEntityInstanceEntityClass::CanAllocate(
        const CPhysHinge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysHinge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 826, @0x0000000002303960, libserver.so)
// globals: CPhysHinge::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysHinge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysHinge::CEntityInstanceEntityClass *const this)
{
  return CPhysHinge::s_pSchemaBinding;
}


// CPhysHinge::CEntityInstanceEntityClass::AllocateInstance  (line 826, @0x0000000002305aa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysHinge::CEntityInstanceEntityClass::AllocateInstance(
        CPhysHinge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CPhysHinge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 826, @0x0000000002308b80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysHinge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysHinge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysHinge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 826, @0x0000000002308ba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysHinge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysHinge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysHinge::CEntityInstanceEntityClass::ConstructInstance  (line 826, @0x000000000230db10, libserver.so)  // inlines: CPhysHinge, Construct<CPhysHinge>
// calls: CPhysConstraint::CPhysConstraint
CEntityInstance *__fastcall CPhysHinge::CEntityInstanceEntityClass::ConstructInstance(
        CPhysHinge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysConstraint::CPhysConstraint(p);
    *(p + 233) = 0;
    *p = &off_4079EF0;
    *(p + 106) = off_407A5A0;
    *(p + 234) = 0;
  }
  return p;
}


// CPhysHinge::GetEntityClassInfo  (line 826, @0x000000000230dd30, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal, CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::InitOptionalTables
// strings: "phys_hinge", "CPhysHinge", "CPhysConstraint", "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo, CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo, `guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo, CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo
CEntityClassInfo *__cdecl CPhysHinge::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo != 0 )
    return &CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo) == 0 )
    return &CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo;
  if ( `guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo) != 0 )
  {
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
      &CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo,
      "CPhysConstraint",
      0,
      0,
      &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo,
    "CPhysHinge",
    "phys_hinge",
    0,
    &CPhysConstraint::GetEntityClassInfo(void)::g_EntityCPhysConstraintClassInfo);
  __cxa_guard_release(&`guard variable for'CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo);
  return &CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo;
}


// CPhysHinge::GetEntityClassInternal  (line 826, @0x0000000002312950, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysConstraint::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_hinge", "CPhysHinge"
// globals: `guard variable for'CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass, CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysHinge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo, CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo
CEntityClass *__cdecl CPhysHinge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass) != 0 )
  {
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_designerName.u.m_Id = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass._vptr_CEntityClass = off_3F79390;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_ComponentOffsets.m_Size = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_AllHelpers.m_Size = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_classInputs.m_Size = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_classOutputs.m_Size = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_requiredEHandle.m_Index = -1;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_hNetworkSerializer = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_pBaseClassInfo = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_pClassInfo = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_flags = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_nAllHelpersFlags = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_pScriptClassDesc = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_pInputs = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_nInputCount = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_pOutputs = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_nOutputCount = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_pGameClass = 0;
    CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass._vptr_CEntityClass = off_4079710;
    __cxa_guard_release(&`guard variable for'CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass);
    __cxa_atexit(
      CPhysHinge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysHingeClass != 0 )
    return &CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass;
  if ( `guard variable for'CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo) != 0 )
  {
    EntityClassInfo = CPhysConstraint::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo,
      "CPhysHinge",
      "phys_hinge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo);
  }
  CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_pClassInfo = &CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo;
  CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_pBaseClassInfo = CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysHingeClass = &CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass;
  CPhysHinge::GetEntityClassInfo(void)::g_EntityCPhysHingeClassInfo.m_pClass = &CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass;
  CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysHingeClass->m_pComponentOverrides = 0;
  return &CPhysHinge::GetEntityClassInternal(void)::g_EntityCPhysHingeClass;
}


// CPhysHinge::InputSetVelocity  (line 832, @0x0000000002307cc0, libserver.so)  // inlines: DEG2RAD, FastSqrt, Float, Length, Vector, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator float
void __fastcall CPhysHinge::InputSetVelocity(CPhysHinge *const this, inputdata_t *const inputdata)
{
  HPhysicsJoint m_hJoint; // rdi
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // r13d
  int v10; // eax
  float v11; // xmm1_4
  float m_systemLoadScale; // xmm1_4
  float m_float64; // xmm0_4
  HPhysicsJoint v14; // rdi
  void (__fastcall *v15)(HPhysicsJoint, float *); // rax
  float v16; // [rsp+4h] [rbp-7Ch]
  float flLoadscale; // [rsp+8h] [rbp-78h]
  float flLoadscalea; // [rsp+8h] [rbp-78h]
  float flMassLoad; // [rsp+Ch] [rbp-74h]
  float flMassLoada; // [rsp+Ch] [rbp-74h]
  float flMassLoadb; // [rsp+Ch] [rbp-74h]
  float v22[10]; // [rsp+10h] [rbp-70h] BYREF
  float v23; // [rsp+38h] [rbp-48h]
  float v24; // [rsp+3Ch] [rbp-44h]
  float v25; // [rsp+40h] [rbp-40h]

  m_hJoint = this->m_hJoint;
  if ( m_hJoint == 0
    || (*(*m_hJoint + 120LL))(m_hJoint) == 0
    || (*(*this->m_hJoint + 136LL))(this->m_hJoint) == 0
    || (*(*this->m_hJoint + 16LL))(this->m_hJoint) != 3 )
  {
    return;
  }
  v5 = (*(*this->m_hJoint + 120LL))(this->m_hJoint);
  v6 = (*(*this->m_hJoint + 136LL))(this->m_hJoint);
  if ( (*(*v5 + 40LL))(v5) == 2 )
  {
    (*(*v5 + 312LL))(v22, v5);
    v7 = v5;
    v8 = *v5;
    v9 = 1;
    flMassLoad = fsqrt(((v23 * v23) + (v24 * v24)) + (v25 * v25));
    (*(v8 + 856))(v7);
    v10 = (*(*v6 + 40LL))(v6);
    v11 = flMassLoad;
    if ( v10 != 2 )
    {
LABEL_10:
      v16 = v11 / v9;
      goto LABEL_11;
    }
LABEL_18:
    flLoadscalea = v11;
    ++v9;
    (*(*v6 + 312LL))(v22, v6);
    flMassLoadb = flLoadscalea + fsqrt(((v23 * v23) + (v24 * v24)) + (v25 * v25));
    (*(*v6 + 856LL))(v6);
    v11 = flMassLoadb;
    goto LABEL_10;
  }
  if ( (*(*v6 + 40LL))(v6) == 2 )
  {
    v11 = 1.0;
    v9 = 0;
    goto LABEL_18;
  }
  v16 = 1.0;
LABEL_11:
  m_systemLoadScale = this->m_systemLoadScale;
  if ( m_systemLoadScale == 0.0 )
    m_systemLoadScale = 1.0;
  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  v14 = this->m_hJoint;
  flLoadscale = m_systemLoadScale;
  flMassLoada = m_float64;
  v15 = *(*v14 + 272LL);
  v22[2] = m_float64 * 0.017453292;
  v22[0] = 0.0;
  v22[1] = 0.0;
  v15(v14, v22);
  (*(*this->m_hJoint + 288LL))(this->m_hJoint, (fabs(flMassLoada) * flLoadscale) * v16);
}


// CPhysHinge::InputSetHingeFriction  (line 871, @0x0000000002307c40, libserver.so)  // inlines: Float, operator float
void __fastcall CPhysHinge::InputSetHingeFriction(CPhysHinge *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  HPhysicsJoint m_hJoint; // rdi

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  m_hJoint = this->m_hJoint;
  this->m_hingeFriction = m_float64;
  this->m_hinge.hingeAxis.flMotorMaxTorque = m_float64;
  if ( (*(*m_hJoint + 16LL))(m_hJoint) == 3 )
    (*(*this->m_hJoint + 304LL))(this->m_hJoint, this->m_hingeFriction);
}


// CPhysHinge::InputSetMinLimit  (line 883, @0x00000000023072f0, libserver.so)  // inlines: DEG2RAD, Float, operator IPhysicsJoint*, operator float
// calls: CFnPhysicsJoint<IFnPhysicsRevoluteJoint>::CFnPhysicsJoint, __stack_chk_fail
void __fastcall CPhysHinge::InputSetMinLimit(CPhysHinge *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  IPhysicsJoint *m_hJoint; // rsi
  Range_t range; // [rsp+0h] [rbp-40h] BYREF
  CFnPhysicsRevoluteJoint revJoint; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  m_hJoint = this->m_hJoint;
  this->m_flMinRotation = m_float64;
  CFnPhysicsJoint<IFnPhysicsRevoluteJoint>::CFnPhysicsJoint(&revJoint, m_hJoint);
  if ( (*(*revJoint.m_Buffer + 8LL))(&revJoint) != 0 )
  {
    range = COERCE_RANGE_T((*(*revJoint.m_Buffer + 184LL))(&revJoint));
    range.m_flMin = 0.017453292 * this->m_flMinRotation;
    (*(*revJoint.m_Buffer + 176LL))(&revJoint, &range);
  }
}


// CPhysHinge::InputSetMaxLimit  (line 896, @0x0000000002307220, libserver.so)  // inlines: DEG2RAD, Float, operator IPhysicsJoint*, operator float
// calls: CFnPhysicsJoint<IFnPhysicsRevoluteJoint>::CFnPhysicsJoint, __stack_chk_fail
void __fastcall CPhysHinge::InputSetMaxLimit(CPhysHinge *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  IPhysicsJoint *m_hJoint; // rsi
  Range_t range; // [rsp+0h] [rbp-40h] BYREF
  CFnPhysicsRevoluteJoint revJoint; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  m_hJoint = this->m_hJoint;
  this->m_flMaxRotation = m_float64;
  CFnPhysicsJoint<IFnPhysicsRevoluteJoint>::CFnPhysicsJoint(&revJoint, m_hJoint);
  if ( (*(*revJoint.m_Buffer + 8LL))(&revJoint) != 0 )
  {
    range = COERCE_RANGE_T((*(*revJoint.m_Buffer + 184LL))(&revJoint));
    range.m_flMax = 0.017453292 * this->m_flMaxRotation;
    (*(*revJoint.m_Buffer + 176LL))(&revJoint, &range);
  }
}


// CPhysHinge::NotifyMotionState  (line 909, @0x0000000002308130, libserver.so)  // inlines: operator IPhysicsJoint*
// calls: CFnPhysicsJoint<IFnPhysicsRevoluteJoint>::CFnPhysicsJoint, __stack_chk_fail
void __fastcall CPhysHinge::NotifyMotionState(CPhysHinge *const this, CBaseEntity *pEntity, bool bMotionEnabled)
{
  IPhysicsJoint *m_hJoint; // rsi
  CFnPhysicsRevoluteJoint revJoint; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  if ( bMotionEnabled )
  {
    m_hJoint = this->m_hJoint;
    if ( m_hJoint != 0 )
    {
      CFnPhysicsJoint<IFnPhysicsRevoluteJoint>::CFnPhysicsJoint(&revJoint, m_hJoint);
      if ( (*(*revJoint.m_Buffer + 8LL))(&revJoint) != 0 )
        (*(*revJoint.m_Buffer + 144LL))(&revJoint, this->m_hingeFriction);
    }
  }
}


// CPhysHinge::NotifyVPhysicsStateChanged  (line 921, @0x0000000002303970, libserver.so)
void __fastcall CPhysHinge::NotifyVPhysicsStateChanged(
        CPhysHinge *const this,
        IPhysicsObject *pPhysics,
        CBaseEntity *pEntity,
        bool bAwake)
{
  ;
}


// CPhysHinge::GetDataDescMap  (line 1026, @0x00000000022b7950, libserver.so)
// globals: CPhysHinge::m_DataMap
datamap_t *__fastcall CPhysHinge::GetDataDescMap(CPhysHinge *const this)
{
  return &CPhysHinge::m_DataMap;
}


// CPhysHinge::AddDatadescMetadataKeys  (line 1026, @0x00000000022ce900, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysHinge::GetEntityClass(void)
void __fastcall CPhysHinge::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysHinge::GetEntityClass);
}


// CPhysHinge::GetBaseMap  (line 1026, @0x00000000022ce920, libserver.so)
// globals: CPhysConstraint::m_DataMap
datamap_t *__cdecl CPhysHinge::GetBaseMap()
{
  return &CPhysConstraint::m_DataMap;
}


// DataMapInit<CPhysHinge>  (line 1026, @0x00000000022ce930, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysHinge"
// globals: `guard variable for'DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder, CPhysConstraint::m_DataMap, CPhysHinge::GetEntityClass(void), CPhysHinge::m_DataMap, DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysHinge>(CPhysHinge *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder.m_pszBase = "CPhysHinge";
    DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysHinge>(CPhysHinge *)::nameHolder,
      &_dso_handle);
  }
  CPhysHinge::m_DataMap.dataNumFields = 12;
  CPhysHinge::m_DataMap.baseMap = &CPhysConstraint::m_DataMap;
  CPhysHinge::m_DataMap.dataDesc = &DataMapInit<CPhysHinge>(CPhysHinge *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysHinge::m_DataMap, CPhysHinge::GetEntityClass);
  return &CPhysHinge::m_DataMap;
}


// CPhysHingeAlias_phys_hinge_local::Schema_DynamicBinding  (line 1059, @0x0000000002303990, libserver.so)
// globals: CPhysHingeAlias_phys_hinge_local::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysHingeAlias_phys_hinge_local::Schema_DynamicBinding(
        const CPhysHingeAlias_phys_hinge_local *const this)
{
  return CPhysHingeAlias_phys_hinge_local::s_pSchemaBinding;
}


// CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1059, @0x00000000023039a0, libserver.so)
// globals: CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass *const this)
{
  return CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::DestructInstance  (line 1059, @0x00000000023039b0, libserver.so)  // inlines: Destruct<CPhysHingeAlias_phys_hinge_local>
void __fastcall CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::DestructInstance(
        CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::FreeInstance  (line 1059, @0x00000000023039d0, libserver.so)
void __fastcall CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::FreeInstance(
        CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::CanAllocate  (line 1059, @0x00000000023039f0, libserver.so)
bool __fastcall CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::CanAllocate(
        const CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1059, @0x0000000002303a00, libserver.so)
// globals: CPhysHingeAlias_phys_hinge_local::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass *const this)
{
  return CPhysHingeAlias_phys_hinge_local::s_pSchemaBinding;
}


// CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::AllocateInstance  (line 1059, @0x0000000002305ae0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::AllocateInstance(
        CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CPhysHingeAlias_phys_hinge_local::~CPhysHingeAlias_phys_hinge_local  (line 1059, @0x0000000002306b80, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CPhysHinge, ~CServerOnlyEntity, ~IVPhysicsWatcher, ~IWatcherCallback
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysHingeAlias_phys_hinge_local::~CPhysHingeAlias_phys_hinge_local(
        CPhysHingeAlias_phys_hinge_local *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysHingeAlias_phys_hinge_local::~CPhysHingeAlias_phys_hinge_local  (line 1059, @0x0000000002306bc0, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CPhysHinge, ~CPhysHingeAlias_phys_hinge_local, ~CServerOnlyEntity, ~IVPhysicsWatcher, ~IWatcherCallback
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysHingeAlias_phys_hinge_local::~CPhysHingeAlias_phys_hinge_local(
        CPhysHingeAlias_phys_hinge_local *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1059, @0x0000000002308bd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1059, @0x0000000002308bf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::ConstructInstance  (line 1059, @0x000000000230db60, libserver.so)  // inlines: CPhysHinge, CPhysHingeAlias_phys_hinge_local, Construct<CPhysHingeAlias_phys_hinge_local>
// calls: CPhysConstraint::CPhysConstraint
CEntityInstance *__fastcall CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::ConstructInstance(
        CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysConstraint::CPhysConstraint(p);
    *(p + 233) = 0;
    *p = &off_4079810;
    *(p + 234) = 0;
    *(p + 106) = off_4079EC0;
  }
  return p;
}


// CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal  (line 1059, @0x0000000002317330, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysHinge::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_hinge_local", "CPhysHingeAlias_phys_hinge_local"
// globals: `guard variable for'CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass, CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysHingeAlias_phys_hinge_local::GetEntityClassInfo(void)::g_EntityCPhysHingeAlias_phys_hinge_localClassInfo, CPhysHingeAlias_phys_hinge_local::GetEntityClassInfo(void)::g_EntityCPhysHingeAlias_phys_hinge_localClassInfo
CEntityClass *__cdecl CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass) != 0 )
  {
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_designerName.u.m_Id = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass._vptr_CEntityClass = off_3F79390;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_ComponentOffsets.m_Size = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_AllHelpers.m_Size = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_classInputs.m_Size = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_classOutputs.m_Size = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_requiredEHandle.m_Index = -1;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_hNetworkSerializer = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_pBaseClassInfo = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_pClassInfo = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_flags = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_nAllHelpersFlags = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_pScriptClassDesc = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_pInputs = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_nInputCount = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_pOutputs = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_nOutputCount = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_pGameClass = 0;
    CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass._vptr_CEntityClass = off_4079790;
    __cxa_guard_release(&`guard variable for'CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass);
    __cxa_atexit(
      CPhysHingeAlias_phys_hinge_local::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysHingeAlias_phys_hinge_localClass != 0 )
    return &CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass;
  if ( `guard variable for'CPhysHingeAlias_phys_hinge_local::GetEntityClassInfo(void)::g_EntityCPhysHingeAlias_phys_hinge_localClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysHingeAlias_phys_hinge_local::GetEntityClassInfo(void)::g_EntityCPhysHingeAlias_phys_hinge_localClassInfo) != 0 )
  {
    EntityClassInfo = CPhysHinge::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysHingeAlias_phys_hinge_local::GetEntityClassInfo(void)::g_EntityCPhysHingeAlias_phys_hinge_localClassInfo,
      "CPhysHingeAlias_phys_hinge_local",
      "phys_hinge_local",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysHingeAlias_phys_hinge_local::GetEntityClassInfo(void)::g_EntityCPhysHingeAlias_phys_hinge_localClassInfo);
  }
  CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_pClassInfo = &CPhysHingeAlias_phys_hinge_local::GetEntityClassInfo(void)::g_EntityCPhysHingeAlias_phys_hinge_localClassInfo;
  CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_pBaseClassInfo = CPhysHingeAlias_phys_hinge_local::GetEntityClassInfo(void)::g_EntityCPhysHingeAlias_phys_hinge_localClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysHingeAlias_phys_hinge_localClass = &CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass;
  CPhysHingeAlias_phys_hinge_local::GetEntityClassInfo(void)::g_EntityCPhysHingeAlias_phys_hinge_localClassInfo.m_pClass = &CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass;
  CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysHingeAlias_phys_hinge_localClass->m_pComponentOverrides = 0;
  return &CPhysHingeAlias_phys_hinge_local::GetEntityClassInternal(void)::g_EntityCPhysHingeAlias_phys_hinge_localClass;
}


// CPhysHinge::Spawn  (line 1061, @0x00000000022c5540, libserver.so)  // inlines: Base, Defaults, Element, FindKeyHash, GetDebugName, GetValue, GetValueString, SetAxisLimits, SetAxisMotor, TempString, TransformPointEntityToWorld, Vector, VectorAdd, VectorSubtract, VectorTransform, operator-, operator=, operator==, operator[]
// calls: CLogicalEntity::Spawn, V_stricmp_fast, sscanf, CBaseEntity::GetAbsOrigin, VectorNormalize, UTIL_SnapDirectionToAxis, CBaseEntity::GetAbsAngles, CBaseEntity::EntityToWorldTransform, VectorTransform, CEntityIdentity::GetDebugName, Warning, UTIL_Remove
// strings: "phys_hinge_local", "%f %f %f, %f %f %f", "CPhysHinge '%s' does not have a valid axis helper, and self-destructed!\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CPhysHinge::Spawn(CPhysHinge *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  uint64 m_uint64; // rdi
  CEntityVariant *p_m_value; // rax
  bool v11; // al
  int v12; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v13; // cx
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  CEntityVariant *v17; // rax
  const char *v18; // rdi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v19; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v21; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rdx
  CEntityVariant *v23; // rax
  const char *v24; // rdi
  const Vector *v25; // rax
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  vec_t v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  vec_t v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  const QAngle *AbsAngles; // rax
  const matrix3x4_t *v36; // rax
  const QAngle *v37; // rax
  const matrix3x4_t *v38; // rax
  float x; // xmm5_4
  float y; // xmm4_4
  float z; // xmm3_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  vec_t v44; // xmm5_4
  const Vector *v45; // rax
  const Vector *AbsOrigin; // rax
  const char *DebugName; // rax
  Vector v1; // [rsp+10h] [rbp-60h] BYREF
  Vector v2; // [rsp+20h] [rbp-50h] BYREF
  Vector v1world; // [rsp+30h] [rbp-40h] BYREF
  Vector v1_0; // [rsp+40h] [rbp-30h] BYREF

  CLogicalEntity::Spawn(this, pKeyValues);
  this->m_hinge.hingeAxis.flMinRotation = 0.0;
  this->m_hinge.hingeAxis.flMaxRotation = 0.0;
  this->m_hinge.hingeAxis.flMotorTargetAngSpeed = 0.0;
  this->m_hinge.hingeAxis.flMotorMaxTorque = 0.0;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -971301790 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -971301790 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  m_uint64 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_12:
    m_uint64 = p_m_value->m_uint64;
LABEL_14:
  v11 = V_stricmp_fast(m_uint64, "phys_hinge_local") == 0;
  this->m_bIsAxisLocal = v11;
  v12 = pKeyValues->m_keyHashes.m_nCount;
  if ( v11 )
  {
    if ( v12 > 0 )
    {
      v19 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; v12 > i; ++i )
      {
        if ( v19 != 0 )
        {
          v21 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v19 > 9 )
            v21 = pKeyValues->m_keyHashes.m_pElements;
          if ( v21[i] == 1259366474 )
          {
LABEL_35:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v22 = pKeyValues->m_keyValues.m_pElements;
            else
              v22 = 0;
            v23 = &v22[i].m_value;
            v24 = "";
            if ( v23->m_type == 30 )
LABEL_38:
              v24 = v23->m_uint64;
LABEL_44:
            v1.x = 0.0;
            v1.y = 0.0;
            v1.z = 0.0;
            v2.x = 0.0;
            v2.y = 0.0;
            v2.z = 0.0;
            sscanf(v24, "%f %f %f, %f %f %f", &v1, &v1.y, &v1.z, &v2, &v2.y, &v2.z);
            v1world.x = 0.0;
            v1world.y = 0.0;
            v1world.z = 0.0;
            v1_0.x = 0.0;
            v1_0.y = 0.0;
            v1_0.z = 0.0;
            AbsAngles = CBaseEntity::GetAbsAngles(this);
            if ( vec3_angle.x == AbsAngles->x && vec3_angle.y == AbsAngles->y && vec3_angle.z == AbsAngles->z )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(this);
              v1world.x = v1.x + AbsOrigin->x;
              v1world.y = v1.y + AbsOrigin->y;
              v1world.z = v1.z + AbsOrigin->z;
            }
            else
            {
              v36 = CBaseEntity::EntityToWorldTransform(this);
              VectorTransform(&v1.x, v36, &v1world.x);
            }
            v37 = CBaseEntity::GetAbsAngles(this);
            if ( vec3_angle.x == v37->x && vec3_angle.y == v37->y && vec3_angle.z == v37->z )
            {
              v45 = CBaseEntity::GetAbsOrigin(this);
              y = v2.y + v45->y;
              z = v2.z + v45->z;
              x = v2.x + v45->x;
            }
            else
            {
              v38 = CBaseEntity::EntityToWorldTransform(this);
              VectorTransform(&v2.x, v38, &v1_0.x);
              x = v1_0.x;
              y = v1_0.y;
              z = v1_0.z;
            }
            v42 = v1world.y;
            v43 = v1world.z;
            v44 = x - v1world.x;
            this->m_hinge.worldPosition = v1world;
            this->m_hinge.worldAxisDirection.x = v44;
            this->m_hinge.worldAxisDirection.y = y - v42;
            this->m_hinge.worldAxisDirection.z = z - v43;
            goto LABEL_41;
          }
        }
        else if ( *(4 * i) == 1259366474 )
        {
          goto LABEL_35;
        }
      }
    }
    v23 = &CEntityKeyValues::sm_EmptyVariant;
    v24 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_38;
    goto LABEL_44;
  }
  if ( v12 <= 0 )
  {
LABEL_39:
    v17 = &CEntityKeyValues::sm_EmptyVariant;
    v18 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_26;
    goto LABEL_40;
  }
  v13 = pKeyValues->m_keyHashes.m_nAllocated;
  v14 = 0;
  while ( 2 )
  {
    if ( v13 == 0 )
    {
      if ( *(4 * v14) == 1259366474 )
        break;
      goto LABEL_20;
    }
    v15 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v13 > 9 )
      v15 = pKeyValues->m_keyHashes.m_pElements;
    if ( v15[v14] != 1259366474 )
    {
LABEL_20:
      if ( v12 <= ++v14 )
        goto LABEL_39;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v16 = pKeyValues->m_keyValues.m_pElements;
  else
    v16 = 0;
  v17 = &v16[v14].m_value;
  v18 = "";
  if ( v17->m_type == 30 )
LABEL_26:
    v18 = v17->m_uint64;
LABEL_40:
  v1_0.x = 0.0;
  v1_0.y = 0.0;
  v1_0.z = 0.0;
  sscanf(v18, "%f %f %f", &v1_0, &v1_0.y, &v1_0.z);
  v25 = CBaseEntity::GetAbsOrigin(this);
  v26 = v1_0.y;
  v27 = v25->x;
  this->m_hinge.worldPosition.x = v25->x;
  v28 = v25->y;
  this->m_hinge.worldPosition.y = v28;
  v29 = v26 - v28;
  v30 = v1_0.z;
  v31 = v25->z;
  this->m_hinge.worldPosition.z = v31;
  v32 = v30 - v31;
  v33 = v1_0.x;
  this->m_hinge.worldAxisDirection.y = v29;
  this->m_hinge.worldAxisDirection.z = v32;
  this->m_hinge.worldAxisDirection.x = v33 - v27;
LABEL_41:
  if ( VectorNormalize(&this->m_hinge.worldAxisDirection) <= 1.0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    Warning("CPhysHinge '%s' does not have a valid axis helper, and self-destructed!\n", DebugName);
    UTIL_Remove(this);
  }
  else
  {
    UTIL_SnapDirectionToAxis(&this->m_hinge.worldAxisDirection, v34);
  }
}


// CPhysHinge::CreateConstraint  (line 1110, @0x00000000022c3850, libserver.so)  // inlines: BuildBasis, CUtlAbstractDelegate, CUtlDelegate, CUtlDelegate<CPhysConstraint, CPhysConstraint>, ClosurePtr, Convert<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*), void (detail::GenericClass::*)()>, CrossProduct, Defaults, FastDelegate1, FastDelegate1<CPhysConstraint, CPhysConstraint>, GetBreakParams, InitXYZ, MatrixQuaternion, Normalized, PhysicsJointDesc_t, PhysicsRevoluteJointDesc_t, QuaternionConjugate, SetAxis, SetPivot, SetupBreakForces, ToQuaternion, UtlMakeDelegate<CPhysConstraint, CPhysConstraint, IPhysicsJoint*, void>, VectorPerp, bindmemfunc<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*)>, operator*, operator=
// calls: VectorNormalize, MatrixQuaternion, QuaternionConjugate, CBaseEntity::VPhysicsWorld, sqrtf
// globals: CPhysConstraint::OnBreak(IPhysicsJoint *)
HPhysicsJoint __fastcall CPhysHinge::CreateConstraint(CPhysHinge *const this, const hl_constraint_info_t *const info)
{
  constraint_hingeparams_t *p_m_hinge; // r13
  unsigned int m_Value; // eax
  float m_forceLimit; // xmm0_4
  vec_t z; // ecx
  float v7; // xmm0_4
  IPhysicsBody *v8; // rdi
  __int64 v9; // rdx
  float v10; // xmm1_4
  double v11; // xmm0_8
  __int64 v12; // rax
  vec_t v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm8_4
  float v22; // xmm1_4
  float v23; // xmm6_4
  float v24; // xmm8_4
  vec_t v25; // xmm0_4
  vec_t y; // xmm6_4
  __int64 v27; // xmm1_8
  __int64 v28; // xmm1_8
  float m_flMaxRotation; // xmm1_4
  float m_flMinRotation; // xmm0_4
  IVPhysics2World *v31; // rax
  __int64 v32; // rax
  IPhysicsJoint *v33; // r12
  void (__fastcall *v34)(IPhysicsJoint *, matrix3x4_t *); // rax
  float v36; // xmm4_4
  float m_torqueLimit; // [rsp+20h] [rbp-100h]
  Quaternion q; // [rsp+30h] [rbp-F0h] BYREF
  matrix3x4_t vec; // [rsp+40h] [rbp-E0h] BYREF
  PhysicsRevoluteJointDesc_t desc; // [rsp+70h] [rbp-B0h] BYREF
  Quaternion v41; // 0:^10.16

  p_m_hinge = &this->m_hinge;
  this->m_hinge.constraint.bodyMassScale[0] = 1.0;
  this->m_hinge.constraint.bodyMassScale[1] = 1.0;
  m_Value = this->m_spawnflags.m_Value;
  m_forceLimit = this->m_forceLimit;
  this->m_hinge.constraint.strength = 1.0;
  desc.m_nType = PhysicsJointType_t::REVOLUTE_JOINT;
  this->m_hinge.constraint.forceLimit = m_forceLimit;
  this->m_hinge.constraint.torqueLimit = this->m_torqueLimit;
  z = vec3_origin.z;
  this->m_hinge.constraint.isActive = ((m_Value >> 2) ^ 1) & 1;
  this->m_hinge.constraint.bodyMassScale[0] = info->massScale[0];
  v7 = info->massScale[1];
  desc.m_vLocalOrigin1.z = z;
  this->m_hinge.constraint.bodyMassScale[1] = v7;
  this->m_hinge.hingeAxis.flMinRotation = this->m_flMinRotation;
  this->m_hinge.hingeAxis.flMaxRotation = this->m_flMaxRotation;
  v8 = info->hObjects[0];
  desc.m_pBody2 = info->hObjects[1];
  desc.m_pBody1 = v8;
  *&desc.m_vLocalOrigin1.x = *&vec3_origin.x;
  v9 = *&quat_identity.z;
  *&desc.m_qLocalBasis1.x = *&quat_identity.x;
  *&desc.m_qLocalBasis1.z = v9;
  desc.m_vLocalOrigin2.z = z;
  *&desc.m_qLocalBasis2.z = v9;
  *&desc.m_vLocalOrigin2.x = *&vec3_origin.x;
  *&desc.m_qLocalBasis2.x = *&quat_identity.x;
  desc.m_bEnableCollision = 0;
  memset(&desc.m_flFriction, 0, 37);
  desc.m_flMinAngle = 0.0;
  desc.m_flMaxAngle = 0.0;
  desc.m_bEnableMotor = 0;
  desc.m_flTargetVelocity = 0.0;
  desc.m_flMaxTorque = 0.0;
  *&vec.m_flMatVal[0][0] = (*(*v8 + 1008LL))(v8, p_m_hinge);
  vec.m_flMatVal[0][2] = v10;
  desc.m_vLocalOrigin1 = *&vec.m_flMatVal[0][0];
  v11 = (*(*desc.m_pBody2 + 1008LL))(desc.m_pBody2, p_m_hinge);
  v12 = *&this->m_hinge.worldAxisDirection.x;
  desc.m_vLocalOrigin2.z = v13;
  *&desc.m_vLocalOrigin2.x = v11;
  *&vec.m_flMatVal[0][0] = v12;
  vec.m_flMatVal[0][2] = this->m_hinge.worldAxisDirection.z;
  VectorNormalize(&vec);
  v14 = vec.m_flMatVal[0][0];
  v15 = vec.m_flMatVal[0][1];
  v16 = vec.m_flMatVal[0][2];
  if ( fabs(vec.m_flMatVal[0][0]) >= 0.57735002 )
  {
    v36 = fsqrt((vec.m_flMatVal[0][0] * vec.m_flMatVal[0][0]) + (vec.m_flMatVal[0][1] * vec.m_flMatVal[0][1]));
    v19 = -vec.m_flMatVal[0][0] / v36;
    v20 = vec.m_flMatVal[0][1] / v36;
    v18 = 0.0;
  }
  else
  {
    v17 = fsqrt((vec.m_flMatVal[0][1] * vec.m_flMatVal[0][1]) + (vec.m_flMatVal[0][2] * vec.m_flMatVal[0][2]));
    v18 = -vec.m_flMatVal[0][1] / v17;
    v19 = vec.m_flMatVal[0][2] / v17;
    v20 = 0.0;
  }
  v21 = vec.m_flMatVal[0][1] * v18;
  vec.m_flMatVal[1][2] = vec.m_flMatVal[0][1];
  *&vec.m_flMatVal[0][1] = __PAIR64__(LODWORD(vec.m_flMatVal[0][0]), LODWORD(v20));
  v22 = v15 * v20;
  vec.m_flMatVal[1][1] = v19;
  *&vec.m_flMatVal[2][1] = __PAIR64__(LODWORD(v16), LODWORD(v18));
  v23 = (v16 * v19) - v21;
  v24 = v16 * v20;
  v25 = vec3_origin.z;
  vec.m_flMatVal[0][0] = v23;
  vec.m_flMatVal[2][3] = v25;
  vec.m_flMatVal[0][3] = vec3_origin.x;
  vec.m_flMatVal[1][0] = (v14 * v18) - v24;
  y = vec3_origin.y;
  vec.m_flMatVal[2][0] = v22 - (v14 * v19);
  vec.m_flMatVal[1][3] = y;
  MatrixQuaternion(&vec, &q);
  v41 = q;
  *&vec.m_flMatVal[0][0] = (*(*desc.m_pBody1 + 384LL))(desc.m_pBody1);
  *&vec.m_flMatVal[0][2] = v27;
  QuaternionConjugate(&vec, &q);
  desc.m_qLocalBasis1.x = (((q.x * v41.w) + (q.y * v41.z)) - (q.z * v41.y)) + (q.w * v41.x);
  desc.m_qLocalBasis1.y = (((v41.z * -q.x) + (q.y * v41.w)) + (q.z * v41.x)) + (q.w * v41.y);
  desc.m_qLocalBasis1.z = (((q.x * v41.y) - (q.y * v41.x)) + (q.z * v41.w)) + (q.w * v41.z);
  desc.m_qLocalBasis1.w = (((-q.x * v41.x) - (q.y * v41.y)) - (q.z * v41.z)) + (q.w * v41.w);
  *&vec.m_flMatVal[0][0] = (*(*desc.m_pBody2 + 384LL))(desc.m_pBody2);
  *&vec.m_flMatVal[0][2] = v28;
  QuaternionConjugate(&vec, &q);
  desc.m_qLocalBasis2.x = (((q.x * v41.w) + (q.y * v41.z)) - (q.z * v41.y)) + (q.w * v41.x);
  desc.m_qLocalBasis2.y = (((v41.z * -q.x) + (q.y * v41.w)) + (q.z * v41.x)) + (q.w * v41.y);
  m_flMaxRotation = this->m_flMaxRotation;
  desc.m_qLocalBasis2.z = (((q.x * v41.y) - (q.y * v41.x)) + (q.z * v41.w)) + (q.w * v41.z);
  desc.m_flFriction = this->m_hingeFriction;
  m_flMinRotation = this->m_flMinRotation;
  desc.m_qLocalBasis2.w = (((v41.x * -q.x) - (v41.y * q.y)) - (v41.z * q.z)) + (v41.w * q.w);
  if ( m_flMinRotation != 0.0 || m_flMaxRotation != 0.0 )
  {
    desc.m_bEnableLimit = 1;
    desc.m_flMinAngle = m_flMinRotation;
    desc.m_flMaxAngle = m_flMaxRotation;
  }
  v31 = CBaseEntity::VPhysicsWorld(this);
  v32 = (*(*v31 + 840LL))(v31, &desc);
  v33 = v32;
  if ( this->m_forceLimit > 0.0 || this->m_torqueLimit > 0.0 )
  {
    m_torqueLimit = this->m_torqueLimit;
    (*(*v32 + 352LL))(v32);
    (*(*v33 + 400LL))(v33, m_torqueLimit);
    v34 = *(*v33 + 432LL);
    *&vec.m_flMatVal[0][2] = CPhysConstraint::OnBreak;
    *&vec.m_flMatVal[1][0] = 0;
    *&vec.m_flMatVal[0][0] = this;
    v34(v33, &vec);
  }
  return v33;
}


// CPhysBallSocket::~CPhysBallSocket  (line 1266, @0x0000000002306c10, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysBallSocket::~CPhysBallSocket(CPhysBallSocket *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysBallSocket::~CPhysBallSocket  (line 1266, @0x0000000002306c30, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysBallSocket, ~CPhysConstraint, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysBallSocket::~CPhysBallSocket(CPhysBallSocket *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysBallSocket::GetEntityClass  (line 1268, @0x0000000002303a10, libserver.so)
CEntityClass *__cdecl CPhysBallSocket::GetEntityClass()
{
  return g_pEntityCPhysBallSocketClass;
}


// CPhysBallSocket::Schema_DynamicBinding  (line 1268, @0x0000000002303a20, libserver.so)
// globals: CPhysBallSocket::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysBallSocket::Schema_DynamicBinding(const CPhysBallSocket *const this)
{
  return CPhysBallSocket::s_pSchemaBinding;
}


// CPhysBallSocket::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1268, @0x0000000002303a30, libserver.so)
// globals: CPhysBallSocket::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysBallSocket::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysBallSocket::CEntityInstanceEntityClass *const this)
{
  return CPhysBallSocket::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysBallSocket::CEntityInstanceEntityClass::DestructInstance  (line 1268, @0x0000000002303a40, libserver.so)  // inlines: Destruct<CPhysBallSocket>
void __fastcall CPhysBallSocket::CEntityInstanceEntityClass::DestructInstance(
        CPhysBallSocket::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysBallSocket::CEntityInstanceEntityClass::FreeInstance  (line 1268, @0x0000000002303a60, libserver.so)
void __fastcall CPhysBallSocket::CEntityInstanceEntityClass::FreeInstance(
        CPhysBallSocket::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysBallSocket::CEntityInstanceEntityClass::CanAllocate  (line 1268, @0x0000000002303a80, libserver.so)
bool __fastcall CPhysBallSocket::CEntityInstanceEntityClass::CanAllocate(
        const CPhysBallSocket::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysBallSocket::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1268, @0x0000000002303a90, libserver.so)
// globals: CPhysBallSocket::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysBallSocket::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysBallSocket::CEntityInstanceEntityClass *const this)
{
  return CPhysBallSocket::s_pSchemaBinding;
}


// CPhysBallSocket::CEntityInstanceEntityClass::AllocateInstance  (line 1268, @0x0000000002305b20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysBallSocket::CEntityInstanceEntityClass::AllocateInstance(
        CPhysBallSocket::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 856);
  memset(v1, 0, 0x358u);
  return v1;
}


// CPhysBallSocket::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1268, @0x0000000002308c20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysBallSocket::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysBallSocket::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysBallSocket::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1268, @0x0000000002308c40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysBallSocket::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysBallSocket::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysBallSocket::CEntityInstanceEntityClass::ConstructInstance  (line 1268, @0x000000000230dbb0, libserver.so)  // inlines: CPhysBallSocket, Construct<CPhysBallSocket>
// calls: CPhysConstraint::CPhysConstraint
CEntityInstance *__fastcall CPhysBallSocket::CEntityInstanceEntityClass::ConstructInstance(
        CPhysBallSocket::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysConstraint::CPhysConstraint(p);
    *(p + 212) = 0;
    *p = &off_407A650;
  }
  return p;
}


// CPhysBallSocket::GetEntityClassInternal  (line 1268, @0x0000000002313aa0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysConstraint::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_ballsocket", "CPhysBallSocket"
// globals: `guard variable for'CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass, CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysBallSocket::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysBallSocket::GetEntityClassInfo(void)::g_EntityCPhysBallSocketClassInfo, CPhysBallSocket::GetEntityClassInfo(void)::g_EntityCPhysBallSocketClassInfo
CEntityClass *__cdecl CPhysBallSocket::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass) != 0 )
  {
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_designerName.u.m_Id = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass._vptr_CEntityClass = off_3F79390;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_ComponentOffsets.m_Size = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_AllHelpers.m_Size = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_classInputs.m_Size = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_classOutputs.m_Size = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_requiredEHandle.m_Index = -1;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_hNetworkSerializer = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_pBaseClassInfo = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_pClassInfo = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_flags = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_nAllHelpersFlags = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_pScriptClassDesc = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_pInputs = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_nInputCount = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_pOutputs = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_nOutputCount = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_pGameClass = 0;
    CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass._vptr_CEntityClass = off_407A5D0;
    __cxa_guard_release(&`guard variable for'CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass);
    __cxa_atexit(
      CPhysBallSocket::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysBallSocketClass != 0 )
    return &CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass;
  if ( `guard variable for'CPhysBallSocket::GetEntityClassInfo(void)::g_EntityCPhysBallSocketClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysBallSocket::GetEntityClassInfo(void)::g_EntityCPhysBallSocketClassInfo) != 0 )
  {
    EntityClassInfo = CPhysConstraint::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysBallSocket::GetEntityClassInfo(void)::g_EntityCPhysBallSocketClassInfo,
      "CPhysBallSocket",
      "phys_ballsocket",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysBallSocket::GetEntityClassInfo(void)::g_EntityCPhysBallSocketClassInfo);
  }
  CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_pClassInfo = &CPhysBallSocket::GetEntityClassInfo(void)::g_EntityCPhysBallSocketClassInfo;
  CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_pBaseClassInfo = CPhysBallSocket::GetEntityClassInfo(void)::g_EntityCPhysBallSocketClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysBallSocketClass = &CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass;
  CPhysBallSocket::GetEntityClassInfo(void)::g_EntityCPhysBallSocketClassInfo.m_pClass = &CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass;
  CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysBallSocketClass->m_pComponentOverrides = 0;
  return &CPhysBallSocket::GetEntityClassInternal(void)::g_EntityCPhysBallSocketClass;
}


// CPhysBallSocket::GetDataDescMap  (line 1277, @0x00000000022b7960, libserver.so)
// globals: CPhysBallSocket::m_DataMap
datamap_t *__fastcall CPhysBallSocket::GetDataDescMap(CPhysBallSocket *const this)
{
  return &CPhysBallSocket::m_DataMap;
}


// CPhysBallSocket::AddDatadescMetadataKeys  (line 1277, @0x00000000022cea00, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysBallSocket::GetEntityClass(void)
void __fastcall CPhysBallSocket::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysBallSocket::GetEntityClass);
}


// CPhysBallSocket::GetBaseMap  (line 1277, @0x00000000022cea20, libserver.so)
// globals: CPhysConstraint::m_DataMap
datamap_t *__cdecl CPhysBallSocket::GetBaseMap()
{
  return &CPhysConstraint::m_DataMap;
}


// DataMapInit<CPhysBallSocket>  (line 1277, @0x00000000022cea30, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysBallSocket"
// globals: `guard variable for'DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder, CPhysConstraint::m_DataMap, CPhysBallSocket::GetEntityClass(void), CPhysBallSocket::m_DataMap, DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysBallSocket>(CPhysBallSocket *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder.m_pszBase = "CPhysBallSocket";
    DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::nameHolder,
      &_dso_handle);
  }
  CPhysBallSocket::m_DataMap.dataNumFields = 1;
  CPhysBallSocket::m_DataMap.baseMap = &CPhysConstraint::m_DataMap;
  CPhysBallSocket::m_DataMap.dataDesc = &DataMapInit<CPhysBallSocket>(CPhysBallSocket *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysBallSocket::m_DataMap, CPhysBallSocket::GetEntityClass);
  return &CPhysBallSocket::m_DataMap;
}


// CPhysBallSocket::CreateConstraint  (line 1282, @0x00000000022bf5a0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, CUtlDelegate<CPhysConstraint, CPhysConstraint>, ClosurePtr, Convert<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*), void (detail::GenericClass::*)()>, FastDelegate1, FastDelegate1<CPhysConstraint, CPhysConstraint>, GetBreakParams, InitWithCurrentObjectState, PhysicsJointDesc_t, PhysicsSphericalJointDesc_t, SetPivot, SetupBreakForces, UtlMakeDelegate<CPhysConstraint, CPhysConstraint, IPhysicsJoint*, void>, Vector, bindmemfunc<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*)>, operator=
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::VPhysicsWorld
// globals: CPhysConstraint::OnBreak(IPhysicsJoint *)
HPhysicsJoint __fastcall CPhysBallSocket::CreateConstraint(
        CPhysBallSocket *const this,
        const hl_constraint_info_t *const info)
{
  const Vector *AbsOrigin; // rax
  IPhysicsBody *v5; // rdi
  const Vector *v6; // r14
  IPhysicsBody *v7; // r13
  int v8; // xmm1_4
  IPhysicsBody *v9; // rax
  IPhysicsBody *v10; // rdx
  vec_t z; // ecx
  __int64 v12; // rdx
  const Vector *v13; // r12
  vec_t v14; // xmm1_4
  vec_t v15; // xmm1_4
  IVPhysics2World *v16; // rax
  __int64 v17; // rax
  IPhysicsJoint *v18; // r12
  void (__fastcall *v19)(IPhysicsJoint *, double *); // rax
  float m_torqueLimit; // [rsp+Ch] [rbp-D4h]
  double v22; // [rsp+10h] [rbp-D0h] BYREF
  void (__fastcall *v23)(CPhysConstraint *const, HPhysicsJoint); // [rsp+18h] [rbp-C8h]
  __int64 v24; // [rsp+20h] [rbp-C0h]
  PhysicsSphericalJointDesc_t desc; // [rsp+30h] [rbp-B0h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v5 = info->hObjects[0];
  v6 = AbsOrigin;
  v7 = info->hObjects[1];
  if ( v5 != 0 )
  {
    *&desc.m_nType = (*(*v5 + 1008LL))(v5, AbsOrigin);
    LODWORD(desc.m_pBody1) = v8;
  }
  if ( v7 != 0 )
    *&desc.m_nType = (*(*v7 + 1008LL))(v7, v6);
  v9 = info->hObjects[1];
  v10 = info->hObjects[0];
  memset(&desc.m_flFriction, 0, 37);
  desc.m_pBody2 = v9;
  desc.m_pBody1 = v10;
  desc.m_vTargetVelocity.x = 0.0;
  desc.m_vTargetVelocity.y = 0.0;
  z = vec3_origin.z;
  desc.m_vTargetVelocity.z = 0.0;
  desc.m_flMaxTorque = 0.0;
  desc.m_bEnableCollision = 0;
  desc.m_vLocalOrigin1.z = z;
  desc.m_vLocalOrigin2.z = z;
  v12 = *&quat_identity.z;
  *&desc.m_vLocalOrigin1.x = *&vec3_origin.x;
  *&desc.m_vLocalOrigin2.x = *&vec3_origin.x;
  desc.m_nType = PhysicsJointType_t::SPHERICAL_JOINT;
  *&desc.m_qLocalBasis1.z = v12;
  *&desc.m_qLocalBasis2.z = v12;
  *&desc.m_qLocalBasis1.x = *&quat_identity.x;
  *&desc.m_qLocalBasis2.x = *&quat_identity.x;
  v13 = CBaseEntity::GetAbsOrigin(this);
  v22 = (*(*desc.m_pBody1 + 1008LL))(desc.m_pBody1, v13);
  *&v23 = v14;
  desc.m_vLocalOrigin1.z = v14;
  *&desc.m_vLocalOrigin1.x = v22;
  v22 = (*(*desc.m_pBody2 + 1008LL))(desc.m_pBody2, v13);
  *&v23 = v15;
  desc.m_vLocalOrigin2.z = v15;
  *&desc.m_vLocalOrigin2.x = v22;
  desc.m_flFriction = this->m_flFriction;
  v16 = CBaseEntity::VPhysicsWorld(this);
  v17 = (*(*v16 + 832LL))(v16, &desc);
  v18 = v17;
  if ( this->m_forceLimit > 0.0 || this->m_torqueLimit > 0.0 )
  {
    m_torqueLimit = this->m_torqueLimit;
    (*(*v17 + 352LL))(v17);
    (*(*v18 + 400LL))(v18, m_torqueLimit);
    v19 = *(*v18 + 432LL);
    v23 = CPhysConstraint::OnBreak;
    v24 = 0;
    v22 = *&this;
    v19(v18, &v22);
  }
  return v18;
}


// CPhysSlideConstraint::~CPhysSlideConstraint  (line 1300, @0x0000000002306c60, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity, ~IVPhysicsWatcher, ~IWatcherCallback
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysSlideConstraint::~CPhysSlideConstraint(CPhysSlideConstraint *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysSlideConstraint::~CPhysSlideConstraint  (line 1300, @0x0000000002306ca0, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CPhysSlideConstraint, ~CServerOnlyEntity, ~IVPhysicsWatcher, ~IWatcherCallback
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysSlideConstraint::~CPhysSlideConstraint(CPhysSlideConstraint *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysSlideConstraint::GetEntityClass  (line 1302, @0x0000000002303aa0, libserver.so)
CEntityClass *__cdecl CPhysSlideConstraint::GetEntityClass()
{
  return g_pEntityCPhysSlideConstraintClass;
}


// CPhysSlideConstraint::Schema_DynamicBinding  (line 1302, @0x0000000002303ab0, libserver.so)
// globals: CPhysSlideConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysSlideConstraint::Schema_DynamicBinding(
        const CPhysSlideConstraint *const this)
{
  return CPhysSlideConstraint::s_pSchemaBinding;
}


// CPhysSlideConstraint::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1302, @0x0000000002303ac0, libserver.so)
// globals: CPhysSlideConstraint::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysSlideConstraint::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysSlideConstraint::CEntityInstanceEntityClass *const this)
{
  return CPhysSlideConstraint::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysSlideConstraint::CEntityInstanceEntityClass::DestructInstance  (line 1302, @0x0000000002303ad0, libserver.so)  // inlines: Destruct<CPhysSlideConstraint>
void __fastcall CPhysSlideConstraint::CEntityInstanceEntityClass::DestructInstance(
        CPhysSlideConstraint::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysSlideConstraint::CEntityInstanceEntityClass::FreeInstance  (line 1302, @0x0000000002303af0, libserver.so)
void __fastcall CPhysSlideConstraint::CEntityInstanceEntityClass::FreeInstance(
        CPhysSlideConstraint::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysSlideConstraint::CEntityInstanceEntityClass::CanAllocate  (line 1302, @0x0000000002303b10, libserver.so)
bool __fastcall CPhysSlideConstraint::CEntityInstanceEntityClass::CanAllocate(
        const CPhysSlideConstraint::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysSlideConstraint::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1302, @0x0000000002303b20, libserver.so)
// globals: CPhysSlideConstraint::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysSlideConstraint::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysSlideConstraint::CEntityInstanceEntityClass *const this)
{
  return CPhysSlideConstraint::s_pSchemaBinding;
}


// CPhysSlideConstraint::CEntityInstanceEntityClass::AllocateInstance  (line 1302, @0x0000000002305b60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysSlideConstraint::CEntityInstanceEntityClass::AllocateInstance(
        CPhysSlideConstraint::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 880);
  memset(v1, 0, 0x370u);
  return v1;
}


// CPhysSlideConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1302, @0x0000000002308c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysSlideConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysSlideConstraint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysSlideConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1302, @0x0000000002308c90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysSlideConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysSlideConstraint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysSlideConstraint::CEntityInstanceEntityClass::ConstructInstance  (line 1302, @0x000000000230dbf0, libserver.so)  // inlines: CPhysSlideConstraint, Construct<CPhysSlideConstraint>
// calls: CPhysConstraint::CPhysConstraint
CEntityInstance *__fastcall CPhysSlideConstraint::CEntityInstanceEntityClass::ConstructInstance(
        CPhysSlideConstraint::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysConstraint::CPhysConstraint(p);
    *p = &off_407AD70;
    *(p + 106) = off_407B418;
  }
  return p;
}


// CPhysSlideConstraint::GetEntityClassInternal  (line 1302, @0x00000000023158b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysConstraint::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_slideconstraint", "CPhysSlideConstraint"
// globals: `guard variable for'CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass, CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysSlideConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysSlideConstraint::GetEntityClassInfo(void)::g_EntityCPhysSlideConstraintClassInfo, CPhysSlideConstraint::GetEntityClassInfo(void)::g_EntityCPhysSlideConstraintClassInfo
CEntityClass *__cdecl CPhysSlideConstraint::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass) != 0 )
  {
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_designerName.u.m_Id = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass._vptr_CEntityClass = off_3F79390;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_ComponentOffsets.m_Size = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_AllHelpers.m_Size = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_classInputs.m_Size = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_classOutputs.m_Size = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_requiredEHandle.m_Index = -1;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_hNetworkSerializer = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_pBaseClassInfo = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_pClassInfo = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_flags = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_nAllHelpersFlags = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_pScriptClassDesc = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_pInputs = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_nInputCount = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_pOutputs = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_nOutputCount = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_pGameClass = 0;
    CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass._vptr_CEntityClass = off_407ACF0;
    __cxa_guard_release(&`guard variable for'CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass);
    __cxa_atexit(
      CPhysSlideConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysSlideConstraintClass != 0 )
    return &CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass;
  if ( `guard variable for'CPhysSlideConstraint::GetEntityClassInfo(void)::g_EntityCPhysSlideConstraintClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysSlideConstraint::GetEntityClassInfo(void)::g_EntityCPhysSlideConstraintClassInfo) != 0 )
  {
    EntityClassInfo = CPhysConstraint::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysSlideConstraint::GetEntityClassInfo(void)::g_EntityCPhysSlideConstraintClassInfo,
      "CPhysSlideConstraint",
      "phys_slideconstraint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysSlideConstraint::GetEntityClassInfo(void)::g_EntityCPhysSlideConstraintClassInfo);
  }
  CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_pClassInfo = &CPhysSlideConstraint::GetEntityClassInfo(void)::g_EntityCPhysSlideConstraintClassInfo;
  CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_pBaseClassInfo = CPhysSlideConstraint::GetEntityClassInfo(void)::g_EntityCPhysSlideConstraintClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysSlideConstraintClass = &CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass;
  CPhysSlideConstraint::GetEntityClassInfo(void)::g_EntityCPhysSlideConstraintClassInfo.m_pClass = &CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass;
  CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysSlideConstraintClass->m_pComponentOverrides = 0;
  return &CPhysSlideConstraint::GetEntityClassInternal(void)::g_EntityCPhysSlideConstraintClass;
}


// CPhysSlideConstraint::InputSetVelocity  (line 1307, @0x0000000002307f40, libserver.so)  // inlines: Float, Vector, operator float
void __fastcall CPhysSlideConstraint::InputSetVelocity(CPhysSlideConstraint *const this, inputdata_t *const inputdata)
{
  HPhysicsJoint m_hJoint; // rdi
  int v5; // r14d
  __int64 v6; // r13
  __int64 v7; // r12
  float m_systemLoadScale; // xmm1_4
  HPhysicsJoint v9; // rdi
  __int64 v10; // rax
  float flLoadscale; // [rsp+4h] [rbp-3Ch]
  float m_float64; // [rsp+8h] [rbp-38h]
  float flMassLoad; // [rsp+Ch] [rbp-34h]
  _DWORD v14[12]; // [rsp+10h] [rbp-30h] BYREF

  m_hJoint = this->m_hJoint;
  if ( m_hJoint != 0 && (*(*m_hJoint + 120LL))(m_hJoint) != 0 && (*(*this->m_hJoint + 136LL))(this->m_hJoint) != 0 )
  {
    if ( inputdata->value.m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_float;
    v5 = 0;
    v6 = (*(*this->m_hJoint + 120LL))(this->m_hJoint);
    v7 = (*(*this->m_hJoint + 136LL))(this->m_hJoint);
    flMassLoad = 1.0;
    if ( (*(*v6 + 40LL))(v6) == 2 )
    {
      LOBYTE(v5) = 1;
      flMassLoad = (*(*v6 + 208LL))(v6);
      (*(*v6 + 856LL))(v6);
    }
    if ( (*(*v7 + 40LL))(v7) == 2 )
    {
      flMassLoad = (*(*v7 + 208LL))(v7) + flMassLoad;
      (*(*v7 + 856LL))(v7);
      if ( v5 == 1 )
        flMassLoad = flMassLoad * 0.5;
    }
    m_systemLoadScale = this->m_systemLoadScale;
    if ( m_systemLoadScale == 0.0 )
      m_systemLoadScale = 1.0;
    flLoadscale = m_systemLoadScale;
    (*(*this->m_hJoint + 248LL))(this->m_hJoint);
    v9 = this->m_hJoint;
    v10 = *v9;
    *&v14[2] = m_float64;
    v14[0] = 0;
    v14[1] = 0;
    (*(v10 + 272))(v9, v14);
    (*(*this->m_hJoint + 288LL))(this->m_hJoint, (fabs(m_float64) * flLoadscale) * flMassLoad);
  }
}


// CPhysSlideConstraint::NotifyVPhysicsStateChanged  (line 1341, @0x0000000002303b30, libserver.so)
void __fastcall CPhysSlideConstraint::NotifyVPhysicsStateChanged(
        CPhysSlideConstraint *const this,
        IPhysicsObject *pPhysics,
        CBaseEntity *pEntity,
        bool bAwake)
{
  ;
}


// CPhysSlideConstraint::GetDataDescMap  (line 1411, @0x00000000022b7970, libserver.so)
// globals: CPhysSlideConstraint::m_DataMap
datamap_t *__fastcall CPhysSlideConstraint::GetDataDescMap(CPhysSlideConstraint *const this)
{
  return &CPhysSlideConstraint::m_DataMap;
}


// CPhysSlideConstraint::AddDatadescMetadataKeys  (line 1411, @0x00000000022ceb00, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysSlideConstraint::GetEntityClass(void)
void __fastcall CPhysSlideConstraint::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysSlideConstraint::GetEntityClass);
}


// CPhysSlideConstraint::GetBaseMap  (line 1411, @0x00000000022ceb20, libserver.so)
// globals: CPhysConstraint::m_DataMap
datamap_t *__cdecl CPhysSlideConstraint::GetBaseMap()
{
  return &CPhysConstraint::m_DataMap;
}


// DataMapInit<CPhysSlideConstraint>  (line 1411, @0x00000000022ceb30, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysSlideConstraint"
// globals: `guard variable for'DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder, CPhysConstraint::m_DataMap, CPhysSlideConstraint::GetEntityClass(void), CPhysSlideConstraint::m_DataMap, DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder.m_pszBase = "CPhysSlideConstraint";
    DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::nameHolder,
      &_dso_handle);
  }
  CPhysSlideConstraint::m_DataMap.dataNumFields = 4;
  CPhysSlideConstraint::m_DataMap.baseMap = &CPhysConstraint::m_DataMap;
  CPhysSlideConstraint::m_DataMap.dataDesc = &DataMapInit<CPhysSlideConstraint>(CPhysSlideConstraint *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysSlideConstraint::m_DataMap, CPhysSlideConstraint::GetEntityClass);
  return &CPhysSlideConstraint::m_DataMap;
}


// CPhysSlideConstraint::CreateConstraint  (line 1425, @0x00000000022bf9b0, libserver.so)  // inlines: BuildObjectRelativeXform, CUtlDelegate<CPhysConstraint, CPhysConstraint>, Convert<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*), void (detail::GenericClass::*)()>, Defaults, DotProduct, FastDelegate1<CPhysConstraint, CPhysConstraint>, GetBreakParams, Init, InitWithCurrentObjectState, SetupBreakForces, UtlMakeDelegate<CPhysConstraint, CPhysConstraint, IPhysicsJoint*, void>, V_swap<float>, VectorIRotate, VectorSubtract, bindmemfunc<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*)>, operator-, operator=
// calls: SetIdentityMatrix, CBaseEntity::GetAbsOrigin, VectorNormalize, UTIL_SnapDirectionToAxis, MatrixInvert, ConcatTransforms, VectorIRotate, CBaseEntity::VPhysicsWorld
// globals: CPhysConstraint::OnBreak(IPhysicsJoint *)
// local variable allocation has failed, the output may be wrong!
HPhysicsJoint __fastcall CPhysSlideConstraint::CreateConstraint(
        CPhysSlideConstraint *const this,
        const hl_constraint_info_t *const info)
{
  float m_forceLimit; // xmm0_4
  unsigned int m_Value; // eax
  float m_torqueLimit; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  const Vector *AbsOrigin; // rax
  vec_t v10; // xmm2_4
  vec_t v11; // xmm0_4
  float v12; // xmm1_4
  IPhysicsBody *v13; // r15
  bool v14; // zf
  IVPhysics2World *v15; // rax
  __int64 v16; // rax
  IPhysicsJoint *v17; // r12
  void (__fastcall *v18)(IPhysicsJoint *, __int128 *); // rax
  int v20; // xmm1_4
  const Vector *v21; // rax
  float v22; // xmm1_4
  float v23; // xmm5_4
  float v24; // xmm0_4
  IPhysicsBody *v25; // [rsp+8h] [rbp-158h]
  float in1; // [rsp+18h] [rbp-148h]
  __int128 v27; // [rsp+20h] [rbp-140h] BYREF
  __int64 v28; // [rsp+30h] [rbp-130h]
  __int64 v29; // [rsp+38h] [rbp-128h]
  __int64 v30; // [rsp+40h] [rbp-120h]
  __int64 v31; // [rsp+48h] [rbp-118h]
  Vector axisDirection; // [rsp+50h] [rbp-110h] BYREF
  matrix3x4_t out; // [rsp+60h] [rbp-100h] BYREF
  __int128 position; // [rsp+90h] [rbp-D0h] OVERLAPPED BYREF
  __int64 v35; // [rsp+A0h] [rbp-C0h]
  __int64 v36; // [rsp+A8h] [rbp-B8h]
  __int64 v37; // [rsp+B0h] [rbp-B0h]
  __int64 v38; // [rsp+B8h] [rbp-A8h]
  constraint_slidingparams_t slidingParams; // [rsp+C0h] [rbp-A0h] BYREF

  SetIdentityMatrix(&slidingParams.attachedRefXform);
  m_forceLimit = this->m_forceLimit;
  m_Value = this->m_spawnflags.m_Value;
  slidingParams.vSlideAxisRef.x = 0.0;
  slidingParams.constraintParams.forceLimit = m_forceLimit;
  m_torqueLimit = this->m_torqueLimit;
  slidingParams.vSlideAxisRef.y = 0.0;
  slidingParams.constraintParams.torqueLimit = m_torqueLimit;
  v7 = info->massScale[0];
  slidingParams.vSlideAxisRef.z = 0.0;
  slidingParams.constraintParams.bodyMassScale[0] = v7;
  v8 = info->massScale[1];
  slidingParams.flLimitMax = 0.0;
  slidingParams.constraintParams.bodyMassScale[1] = v8;
  slidingParams.flLimitMin = 0.0;
  slidingParams.flMotorMaxForce = 0.0;
  slidingParams.flMotorTargetSpeed = 0.0;
  slidingParams.constraintParams.strength = 1.0;
  slidingParams.constraintParams.isActive = ((m_Value >> 2) ^ 1) & 1;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v10 = this->m_axisEnd.x - AbsOrigin->x;
  v11 = this->m_axisEnd.z - AbsOrigin->z;
  axisDirection.y = this->m_axisEnd.y - AbsOrigin->y;
  axisDirection.x = v10;
  axisDirection.z = v11;
  VectorNormalize(&axisDirection);
  UTIL_SnapDirectionToAxis(&axisDirection, v12);
  v13 = info->hObjects[0];
  v25 = info->hObjects[1];
  if ( v13 != 0 )
  {
    (*(*v13 + 416LL))(&position, v13);
    MatrixInvert(&position, &out);
  }
  else
  {
    SetIdentityMatrix(&out);
  }
  if ( v25 != 0 )
  {
    (*(*v25 + 416LL))(&v27, v25);
    position = v27;
    v35 = v28;
    v36 = v29;
    v37 = v30;
    v38 = v31;
  }
  else
  {
    SetIdentityMatrix(&position);
  }
  ConcatTransforms(&out, &position, &slidingParams.attachedRefXform);
  slidingParams.vSlideAxisRef = axisDirection;
  if ( v13 != 0 )
  {
    (*(*v13 + 416LL))(&position, v13);
    VectorIRotate(&axisDirection.x, &position, &slidingParams.vSlideAxisRef.x);
  }
  v14 = (this->m_spawnflags.m_Value & 2) == 0;
  slidingParams.flMotorMaxForce = this->m_slideFriction;
  if ( !v14 )
  {
    *&position = (*(*info->hObjects[1] + 368LL))(info->hObjects[1]);
    DWORD2(position) = v20;
    v21 = CBaseEntity::GetAbsOrigin(this);
    v22 = ((v21->x * axisDirection.x) + (v21->y * axisDirection.y)) + (v21->z * axisDirection.z);
    v23 = ((this->m_axisEnd.x * axisDirection.x) + (this->m_axisEnd.y * axisDirection.y))
        + (this->m_axisEnd.z * axisDirection.z);
    if ( v22 > v23 )
    {
      v23 = ((v21->x * axisDirection.x) + (v21->y * axisDirection.y)) + (v21->z * axisDirection.z);
      v22 = ((this->m_axisEnd.x * axisDirection.x) + (this->m_axisEnd.y * axisDirection.y))
          + (this->m_axisEnd.z * axisDirection.z);
    }
    v24 = ((axisDirection.x * *&position) + (axisDirection.y * *(&position + 1))) + (axisDirection.z * *(&position + 2));
    if ( v22 > v24 )
      v22 = ((axisDirection.x * *&position) + (axisDirection.y * *(&position + 1)))
          + (axisDirection.z * *(&position + 2));
    else
      v23 = fmaxf(v24, v23);
    slidingParams.flLimitMin = v22 - v24;
    slidingParams.flLimitMax = v23 - v24;
  }
  v15 = CBaseEntity::VPhysicsWorld(this);
  v16 = (*(*v15 + 336LL))(v15, info->hObjects[0], info->hObjects[1], &slidingParams);
  v17 = v16;
  if ( this->m_forceLimit > 0.0 || this->m_torqueLimit > 0.0 )
  {
    in1 = this->m_torqueLimit;
    (*(*v16 + 352LL))(v16);
    (*(*v17 + 400LL))(v17, in1);
    v18 = *(*v17 + 432LL);
    *(&position + 1) = CPhysConstraint::OnBreak;
    v35 = 0;
    *&position = this;
    v18(v17, &position);
  }
  return v17;
}


// CPhysFixed::~CPhysFixed  (line 1528, @0x0000000002306cf0, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysFixed::~CPhysFixed(CPhysFixed *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysFixed::~CPhysFixed  (line 1528, @0x0000000002306d10, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CPhysFixed, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysFixed::~CPhysFixed(CPhysFixed *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysFixed::GetEntityClass  (line 1530, @0x0000000002303b50, libserver.so)
CEntityClass *__cdecl CPhysFixed::GetEntityClass()
{
  return g_pEntityCPhysFixedClass;
}


// CPhysFixed::Schema_DynamicBinding  (line 1530, @0x0000000002303b60, libserver.so)
// globals: CPhysFixed::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysFixed::Schema_DynamicBinding(const CPhysFixed *const this)
{
  return CPhysFixed::s_pSchemaBinding;
}


// CPhysFixed::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1530, @0x0000000002303b70, libserver.so)
// globals: CPhysFixed::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysFixed::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysFixed::CEntityInstanceEntityClass *const this)
{
  return CPhysFixed::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysFixed::CEntityInstanceEntityClass::DestructInstance  (line 1530, @0x0000000002303b80, libserver.so)  // inlines: Destruct<CPhysFixed>
void __fastcall CPhysFixed::CEntityInstanceEntityClass::DestructInstance(
        CPhysFixed::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysFixed::CEntityInstanceEntityClass::FreeInstance  (line 1530, @0x0000000002303ba0, libserver.so)
void __fastcall CPhysFixed::CEntityInstanceEntityClass::FreeInstance(
        CPhysFixed::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysFixed::CEntityInstanceEntityClass::CanAllocate  (line 1530, @0x0000000002303bc0, libserver.so)
bool __fastcall CPhysFixed::CEntityInstanceEntityClass::CanAllocate(
        const CPhysFixed::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysFixed::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1530, @0x0000000002303bd0, libserver.so)
// globals: CPhysFixed::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysFixed::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysFixed::CEntityInstanceEntityClass *const this)
{
  return CPhysFixed::s_pSchemaBinding;
}


// CPhysFixed::CEntityInstanceEntityClass::AllocateInstance  (line 1530, @0x0000000002305ba0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysFixed::CEntityInstanceEntityClass::AllocateInstance(
        CPhysFixed::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 872);
  memset(v1, 0, 0x368u);
  return v1;
}


// CPhysFixed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1530, @0x0000000002308cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysFixed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysFixed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysFixed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1530, @0x0000000002308ce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysFixed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysFixed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysFixed::CEntityInstanceEntityClass::ConstructInstance  (line 1530, @0x000000000230dc30, libserver.so)  // inlines: CPhysFixed, Construct<CPhysFixed>
// calls: CPhysConstraint::CPhysConstraint
CEntityInstance *__fastcall CPhysFixed::CEntityInstanceEntityClass::ConstructInstance(
        CPhysFixed::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysConstraint::CPhysConstraint(p);
    *(p + 212) = 0;
    *p = &off_407B4D0;
    *(p + 213) = 0;
    *(p + 214) = 0;
    *(p + 215) = 0;
    *(p + 864) = 1;
    *(p + 865) = 1;
  }
  return p;
}


// CPhysFixed::GetEntityClassInternal  (line 1530, @0x00000000023165f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysConstraint::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_constraint", "CPhysFixed"
// globals: `guard variable for'CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass, CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysFixed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysFixed::GetEntityClassInfo(void)::g_EntityCPhysFixedClassInfo, CPhysFixed::GetEntityClassInfo(void)::g_EntityCPhysFixedClassInfo
CEntityClass *__cdecl CPhysFixed::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass) != 0 )
  {
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_designerName.u.m_Id = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass._vptr_CEntityClass = off_3F79390;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_ComponentOffsets.m_Size = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_AllHelpers.m_Size = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_classInputs.m_Size = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_classOutputs.m_Size = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_requiredEHandle.m_Index = -1;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_hNetworkSerializer = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_pBaseClassInfo = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_pClassInfo = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_flags = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_nAllHelpersFlags = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_pScriptClassDesc = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_pInputs = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_nInputCount = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_pOutputs = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_nOutputCount = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_pGameClass = 0;
    CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass._vptr_CEntityClass = off_407B450;
    __cxa_guard_release(&`guard variable for'CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass);
    __cxa_atexit(
      CPhysFixed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysFixedClass != 0 )
    return &CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass;
  if ( `guard variable for'CPhysFixed::GetEntityClassInfo(void)::g_EntityCPhysFixedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysFixed::GetEntityClassInfo(void)::g_EntityCPhysFixedClassInfo) != 0 )
  {
    EntityClassInfo = CPhysConstraint::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysFixed::GetEntityClassInfo(void)::g_EntityCPhysFixedClassInfo,
      "CPhysFixed",
      "phys_constraint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysFixed::GetEntityClassInfo(void)::g_EntityCPhysFixedClassInfo);
  }
  CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_pClassInfo = &CPhysFixed::GetEntityClassInfo(void)::g_EntityCPhysFixedClassInfo;
  CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_pBaseClassInfo = CPhysFixed::GetEntityClassInfo(void)::g_EntityCPhysFixedClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysFixedClass = &CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass;
  CPhysFixed::GetEntityClassInfo(void)::g_EntityCPhysFixedClassInfo.m_pClass = &CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass;
  CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysFixedClass->m_pComponentOverrides = 0;
  return &CPhysFixed::GetEntityClassInternal(void)::g_EntityCPhysFixedClass;
}


// CPhysFixed::GetDataDescMap  (line 1547, @0x00000000022b7980, libserver.so)
// globals: CPhysFixed::m_DataMap
datamap_t *__fastcall CPhysFixed::GetDataDescMap(CPhysFixed *const this)
{
  return &CPhysFixed::m_DataMap;
}


// CPhysFixed::AddDatadescMetadataKeys  (line 1547, @0x00000000022cec00, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysFixed::GetEntityClass(void)
void __fastcall CPhysFixed::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysFixed::GetEntityClass);
}


// CPhysFixed::GetBaseMap  (line 1547, @0x00000000022cec20, libserver.so)
// globals: CPhysConstraint::m_DataMap
datamap_t *__cdecl CPhysFixed::GetBaseMap()
{
  return &CPhysConstraint::m_DataMap;
}


// DataMapInit<CPhysFixed>  (line 1547, @0x00000000022cec30, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysFixed"
// globals: `guard variable for'DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder, CPhysConstraint::m_DataMap, CPhysFixed::GetEntityClass(void), CPhysFixed::m_DataMap, DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysFixed>(CPhysFixed *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder.m_pszBase = "CPhysFixed";
    DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysFixed>(CPhysFixed *)::nameHolder,
      &_dso_handle);
  }
  CPhysFixed::m_DataMap.dataNumFields = 6;
  CPhysFixed::m_DataMap.baseMap = &CPhysConstraint::m_DataMap;
  CPhysFixed::m_DataMap.dataDesc = &DataMapInit<CPhysFixed>(CPhysFixed *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysFixed::m_DataMap, CPhysFixed::GetEntityClass);
  return &CPhysFixed::m_DataMap;
}


// CPhysFixed::CPhysFixed  (line 1557, @0x00000000022ced00, libserver.so)
// calls: CPhysConstraint::CPhysConstraint
void __fastcall CPhysFixed::CPhysFixed(CPhysFixed *const this)
{
  CPhysConstraint::CPhysConstraint(this);
  this->_vptr_IHandleEntity = &off_407B4D0;
  this->m_flLinearFrequency = 0.0;
  this->m_flLinearDampingRatio = 0.0;
  this->m_flAngularFrequency = 0.0;
  this->m_flAngularDampingRatio = 0.0;
  this->m_bEnableLinearConstraint = 1;
  this->m_bEnableAngularConstraint = 1;
}


// CPhysFixed::CreateConstraint  (line 1567, @0x00000000022c0630, libserver.so)  // inlines: BuildObjectRelativeXform, CUtlAbstractDelegate, CUtlDelegate, CUtlDelegate<CPhysConstraint, CPhysConstraint>, ClosurePtr, Convert<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*), void (detail::GenericClass::*)()>, Defaults, FastDelegate1, FastDelegate1<CPhysConstraint, CPhysConstraint>, GetBreakParams, Init, InitWithCurrentObjectState, PhysSetGameFlags, PhysicsJointDesc_t, PhysicsWeldJointDesc_t, Quaternion, QuaternionConjugate, RadianEuler, SetBasis, SetPivot, SetupBreakForces, UtlMakeDelegate<CPhysConstraint, CPhysConstraint, IPhysicsJoint*, void>, bindmemfunc<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*)>, operator*, operator=
// calls: SetIdentityMatrix, MatrixInvert, ConcatTransforms, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, AngleQuaternion, QuaternionConjugate, CBaseEntity::VPhysicsWorld
// globals: CPhysConstraint::OnBreak(IPhysicsJoint *)
HPhysicsJoint __fastcall CPhysFixed::CreateConstraint(CPhysFixed *const this, const hl_constraint_info_t *const info)
{
  IPhysicsBody *v4; // rsi
  IPhysicsBody *v5; // rdx
  float m_forceLimit; // xmm0_4
  unsigned int m_Value; // eax
  IPhysicsBody *v8; // rdi
  float v9; // xmm0_4
  IPhysicsBody *v10; // rax
  IPhysicsBody *v11; // rdx
  __int64 v12; // rdx
  const Vector *AbsOrigin; // r14
  float v14; // xmm1_4
  float v15; // xmm1_4
  const QAngle *AbsAngles; // rax
  unsigned int v17; // xmm2_4
  unsigned int v18; // xmm0_4
  __int64 v19; // xmm1_8
  __int64 v20; // xmm1_8
  IVPhysics2World *v21; // rax
  __int64 v22; // rax
  IPhysicsJoint *v23; // r12
  void (__fastcall *v24)(IPhysicsJoint *, matrix3x4_t *); // rax
  IPhysicsBody *v26; // r15
  unsigned __int16 v27; // ax
  IPhysicsBody *v28; // [rsp+0h] [rbp-1A0h]
  float m_torqueLimit; // [rsp+0h] [rbp-1A0h]
  _QWORD v30[6]; // [rsp+10h] [rbp-190h] BYREF
  Quaternion outQuat; // [rsp+40h] [rbp-160h] BYREF
  Quaternion q; // [rsp+50h] [rbp-150h] BYREF
  matrix3x4_t out; // [rsp+60h] [rbp-140h] BYREF
  constraint_fixedparams_t fixedParams; // [rsp+90h] [rbp-110h] BYREF
  PhysicsWeldJointDesc_t desc; // [rsp+E0h] [rbp-C0h] BYREF

  SetIdentityMatrix(&fixedParams.attachedRefXform);
  v4 = info->hObjects[0];
  fixedParams.constraint.isActive = 1;
  fixedParams.constraint.forceLimit = 0.0;
  v5 = info->hObjects[1];
  fixedParams.constraint.torqueLimit = 0.0;
  fixedParams.constraint.strength = 1.0;
  fixedParams.constraint.bodyMassScale[0] = 1.0;
  fixedParams.constraint.bodyMassScale[1] = 1.0;
  v28 = v5;
  if ( v4 != 0 )
  {
    (*(*v4 + 416LL))(&desc);
    MatrixInvert(&desc, &out);
  }
  else
  {
    SetIdentityMatrix(&out);
  }
  if ( v28 != 0 )
  {
    (*(*v28 + 416LL))(v30, v28);
    qmemcpy(&desc, v30, 48);
  }
  else
  {
    SetIdentityMatrix(&desc);
  }
  ConcatTransforms(&out, &desc, &fixedParams.attachedRefXform);
  m_forceLimit = this->m_forceLimit;
  fixedParams.constraint.strength = 1.0;
  m_Value = this->m_spawnflags.m_Value;
  fixedParams.constraint.forceLimit = m_forceLimit;
  v8 = info->hObjects[0];
  fixedParams.constraint.torqueLimit = this->m_torqueLimit;
  fixedParams.constraint.bodyMassScale[0] = info->massScale[0];
  v9 = info->massScale[1];
  fixedParams.constraint.isActive = ((m_Value >> 2) ^ 1) & 1;
  fixedParams.constraint.bodyMassScale[1] = v9;
  if ( (*(*v8 + 1328LL))(v8) == 0x8000 )
  {
    v26 = info->hObjects[1];
    v27 = (*(*v26 + 1296LL))(v26);
    (*(*v26 + 1304LL))(v26, v27 | 2u);
  }
  v10 = info->hObjects[1];
  desc.m_bEnableCollision = 0;
  v11 = info->hObjects[0];
  memset(&desc.m_flFriction, 0, 60);
  desc.m_nType = PhysicsJointType_t::WELD_JOINT;
  desc.m_pBody2 = v10;
  desc.m_pBody1 = v11;
  desc.m_vLocalOrigin1.z = vec3_origin.z;
  desc.m_vLocalOrigin2.z = desc.m_vLocalOrigin1.z;
  v12 = *&quat_identity.z;
  *&desc.m_vLocalOrigin1.x = *&vec3_origin.x;
  *&desc.m_vLocalOrigin2.x = *&vec3_origin.x;
  *&desc.m_qLocalBasis1.z = v12;
  *&desc.m_qLocalBasis2.z = v12;
  *&desc.m_qLocalBasis1.x = *&quat_identity.x;
  *&desc.m_qLocalBasis2.x = *&quat_identity.x;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  *&out.m_flMatVal[0][0] = (*(*desc.m_pBody1 + 1008LL))(desc.m_pBody1, AbsOrigin);
  out.m_flMatVal[0][2] = v14;
  desc.m_vLocalOrigin1 = *&out.m_flMatVal[0][0];
  *&out.m_flMatVal[0][0] = (*(*desc.m_pBody2 + 1008LL))(desc.m_pBody2, AbsOrigin);
  out.m_flMatVal[0][2] = v15;
  desc.m_vLocalOrigin2 = *&out.m_flMatVal[0][0];
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  *&v17 = AbsAngles->x * 0.017453292;
  *&v18 = 0.017453292 * AbsAngles->z;
  out.m_flMatVal[0][2] = AbsAngles->y * 0.017453292;
  *&out.m_flMatVal[0][0] = __PAIR64__(v17, v18);
  AngleQuaternion(&out, &outQuat);
  *&out.m_flMatVal[0][0] = (*(*desc.m_pBody1 + 384LL))(desc.m_pBody1);
  *&out.m_flMatVal[0][2] = v19;
  QuaternionConjugate(&out, &q);
  desc.m_qLocalBasis1.x = (((q.x * outQuat.w) + (q.y * outQuat.z)) - (q.z * outQuat.y)) + (q.w * outQuat.x);
  desc.m_qLocalBasis1.y = (((outQuat.z * -q.x) + (q.y * outQuat.w)) + (q.z * outQuat.x)) + (q.w * outQuat.y);
  desc.m_qLocalBasis1.z = (((q.x * outQuat.y) - (q.y * outQuat.x)) + (q.z * outQuat.w)) + (q.w * outQuat.z);
  desc.m_qLocalBasis1.w = (((outQuat.x * -q.x) - (outQuat.y * q.y)) - (outQuat.z * q.z)) + (outQuat.w * q.w);
  *&out.m_flMatVal[0][0] = (*(*desc.m_pBody2 + 384LL))(desc.m_pBody2);
  *&out.m_flMatVal[0][2] = v20;
  QuaternionConjugate(&out, &q);
  desc.m_qLocalBasis2.x = (((q.x * outQuat.w) + (q.y * outQuat.z)) - (q.z * outQuat.y)) + (q.w * outQuat.x);
  desc.m_qLocalBasis2.y = (((outQuat.z * -q.x) + (q.y * outQuat.w)) + (q.z * outQuat.x)) + (q.w * outQuat.y);
  desc.m_qLocalBasis2.z = (((q.x * outQuat.y) - (q.y * outQuat.x)) + (q.z * outQuat.w)) + (q.w * outQuat.z);
  desc.m_qLocalBasis2.w = (((-q.x * outQuat.x) - (outQuat.y * q.y)) - (outQuat.z * q.z)) + (outQuat.w * q.w);
  desc.m_flLinearFrequency = this->m_flLinearFrequency;
  desc.m_flLinearDampingRatio = this->m_flLinearDampingRatio;
  desc.m_flAngularFrequency = this->m_flAngularFrequency;
  desc.m_flAngularDampingRatio = this->m_flAngularDampingRatio;
  v21 = CBaseEntity::VPhysicsWorld(this);
  v22 = (*(*v21 + 864LL))(v21, &desc);
  v23 = v22;
  if ( !this->m_bEnableLinearConstraint )
    (*(*v22 + 320LL))(v22);
  if ( !this->m_bEnableAngularConstraint )
    (*(*v23 + 376LL))(v23);
  if ( this->m_forceLimit > 0.0 || this->m_torqueLimit > 0.0 )
  {
    m_torqueLimit = this->m_torqueLimit;
    (*(*v23 + 352LL))(v23);
    (*(*v23 + 400LL))(v23, m_torqueLimit);
    v24 = *(*v23 + 432LL);
    *&out.m_flMatVal[0][2] = CPhysConstraint::OnBreak;
    *&out.m_flMatVal[1][0] = 0;
    *&out.m_flMatVal[0][0] = this;
    v24(v23, &out);
  }
  return v23;
}


// CPhysPulley::~CPhysPulley  (line 1607, @0x0000000002306d40, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysPulley::~CPhysPulley(CPhysPulley *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysPulley::~CPhysPulley  (line 1607, @0x0000000002306d60, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CPhysPulley, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysPulley::~CPhysPulley(CPhysPulley *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysPulley::GetEntityClass  (line 1609, @0x0000000002303be0, libserver.so)
CEntityClass *__cdecl CPhysPulley::GetEntityClass()
{
  return g_pEntityCPhysPulleyClass;
}


// CPhysPulley::Schema_DynamicBinding  (line 1609, @0x0000000002303bf0, libserver.so)
// globals: CPhysPulley::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysPulley::Schema_DynamicBinding(const CPhysPulley *const this)
{
  return CPhysPulley::s_pSchemaBinding;
}


// CPhysPulley::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1609, @0x0000000002303c00, libserver.so)
// globals: CPhysPulley::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysPulley::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysPulley::CEntityInstanceEntityClass *const this)
{
  return CPhysPulley::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysPulley::CEntityInstanceEntityClass::DestructInstance  (line 1609, @0x0000000002303c10, libserver.so)  // inlines: Destruct<CPhysPulley>
void __fastcall CPhysPulley::CEntityInstanceEntityClass::DestructInstance(
        CPhysPulley::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysPulley::CEntityInstanceEntityClass::FreeInstance  (line 1609, @0x0000000002303c30, libserver.so)
void __fastcall CPhysPulley::CEntityInstanceEntityClass::FreeInstance(
        CPhysPulley::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysPulley::CEntityInstanceEntityClass::CanAllocate  (line 1609, @0x0000000002303c50, libserver.so)
bool __fastcall CPhysPulley::CEntityInstanceEntityClass::CanAllocate(
        const CPhysPulley::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysPulley::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1609, @0x0000000002303c60, libserver.so)
// globals: CPhysPulley::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysPulley::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysPulley::CEntityInstanceEntityClass *const this)
{
  return CPhysPulley::s_pSchemaBinding;
}


// CPhysPulley::CEntityInstanceEntityClass::AllocateInstance  (line 1609, @0x0000000002305be0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysPulley::CEntityInstanceEntityClass::AllocateInstance(
        CPhysPulley::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 896);
  memset(v1, 0, 0x380u);
  return v1;
}


// CPhysPulley::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1609, @0x0000000002308d10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysPulley::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysPulley::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysPulley::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1609, @0x0000000002308d30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysPulley::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysPulley::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysPulley::CEntityInstanceEntityClass::ConstructInstance  (line 1609, @0x000000000230dca0, libserver.so)  // inlines: CPhysPulley, Construct<CPhysPulley>
// calls: CPhysConstraint::CPhysConstraint
CEntityInstance *__fastcall CPhysPulley::CEntityInstanceEntityClass::ConstructInstance(
        CPhysPulley::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysConstraint::CPhysConstraint(p);
    *p = &off_407BBF0;
  }
  return p;
}


// CPhysPulley::GetEntityClassInternal  (line 1609, @0x0000000002318070, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysConstraint::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_pulleyconstraint", "CPhysPulley"
// globals: `guard variable for'CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass, CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysPulley::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysPulley::GetEntityClassInfo(void)::g_EntityCPhysPulleyClassInfo, CPhysPulley::GetEntityClassInfo(void)::g_EntityCPhysPulleyClassInfo
CEntityClass *__cdecl CPhysPulley::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass) != 0 )
  {
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_designerName.u.m_Id = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass._vptr_CEntityClass = off_3F79390;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_ComponentOffsets.m_Size = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_AllHelpers.m_Size = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_classInputs.m_Size = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_classOutputs.m_Size = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_requiredEHandle.m_Index = -1;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_hNetworkSerializer = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_pBaseClassInfo = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_pClassInfo = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_flags = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_nAllHelpersFlags = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_pScriptClassDesc = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_pInputs = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_nInputCount = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_pOutputs = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_nOutputCount = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_pGameClass = 0;
    CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass._vptr_CEntityClass = off_407BB70;
    __cxa_guard_release(&`guard variable for'CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass);
    __cxa_atexit(
      CPhysPulley::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysPulleyClass != 0 )
    return &CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass;
  if ( `guard variable for'CPhysPulley::GetEntityClassInfo(void)::g_EntityCPhysPulleyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysPulley::GetEntityClassInfo(void)::g_EntityCPhysPulleyClassInfo) != 0 )
  {
    EntityClassInfo = CPhysConstraint::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysPulley::GetEntityClassInfo(void)::g_EntityCPhysPulleyClassInfo,
      "CPhysPulley",
      "phys_pulleyconstraint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysPulley::GetEntityClassInfo(void)::g_EntityCPhysPulleyClassInfo);
  }
  CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_pClassInfo = &CPhysPulley::GetEntityClassInfo(void)::g_EntityCPhysPulleyClassInfo;
  CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_pBaseClassInfo = CPhysPulley::GetEntityClassInfo(void)::g_EntityCPhysPulleyClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysPulleyClass = &CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass;
  CPhysPulley::GetEntityClassInfo(void)::g_EntityCPhysPulleyClassInfo.m_pClass = &CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass;
  CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysPulleyClass->m_pComponentOverrides = 0;
  return &CPhysPulley::GetEntityClassInternal(void)::g_EntityCPhysPulleyClass;
}


// CPhysPulley::GetDataDescMap  (line 1622, @0x00000000022b7990, libserver.so)
// globals: CPhysPulley::m_DataMap
datamap_t *__fastcall CPhysPulley::GetDataDescMap(CPhysPulley *const this)
{
  return &CPhysPulley::m_DataMap;
}


// CPhysPulley::AddDatadescMetadataKeys  (line 1622, @0x00000000022ced60, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysPulley::GetEntityClass(void)
void __fastcall CPhysPulley::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysPulley::GetEntityClass);
}


// CPhysPulley::GetBaseMap  (line 1622, @0x00000000022ced80, libserver.so)
// globals: CPhysConstraint::m_DataMap
datamap_t *__cdecl CPhysPulley::GetBaseMap()
{
  return &CPhysConstraint::m_DataMap;
}


// DataMapInit<CPhysPulley>  (line 1622, @0x00000000022ced90, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysPulley"
// globals: `guard variable for'DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder, CPhysConstraint::m_DataMap, CPhysPulley::GetEntityClass(void), CPhysPulley::m_DataMap, DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysPulley>(CPhysPulley *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder.m_pszBase = "CPhysPulley";
    DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysPulley>(CPhysPulley *)::nameHolder,
      &_dso_handle);
  }
  CPhysPulley::m_DataMap.dataNumFields = 4;
  CPhysPulley::m_DataMap.baseMap = &CPhysConstraint::m_DataMap;
  CPhysPulley::m_DataMap.dataDesc = &DataMapInit<CPhysPulley>(CPhysPulley *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysPulley::m_DataMap, CPhysPulley::GetEntityClass);
  return &CPhysPulley::m_DataMap;
}


// CPhysPulley::CreateConstraint  (line 1632, @0x00000000022b9960, libserver.so)  // inlines: Defaults, FastSqrt, GetBreakParams, HasSpawnFlags, Init, Length, VectorLength, VectorSubtract, VectorTransform, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorTransform, CBaseEntity::VPhysicsWorld
HPhysicsJoint __fastcall CPhysPulley::CreateConstraint(CPhysPulley *const this, const hl_constraint_info_t *const info)
{
  const Vector *AbsOrigin; // rax
  IPhysicsBody *v5; // rsi
  const hl_constraint_info_t *v6; // rdx
  __int64 i; // rax
  vec_t x; // xmm0_4
  vec_t z; // xmm1_4
  float m_gearRatio; // xmm2_4
  float m_forceLimit; // xmm0_4
  unsigned int m_Value; // edx
  IVPhysics2World *v13; // rax
  Vector world[2]; // [rsp+10h] [rbp-D0h] BYREF
  matrix3x4_t in2; // [rsp+30h] [rbp-B0h] BYREF
  constraint_pulleyparams_t pulleyParams; // [rsp+60h] [rbp-80h] BYREF

  pulleyParams.constraint.forceLimit = 0.0;
  pulleyParams.constraint.torqueLimit = 0.0;
  pulleyParams.constraint.strength = 1.0;
  pulleyParams.constraint.bodyMassScale[0] = 1.0;
  pulleyParams.constraint.bodyMassScale[1] = 1.0;
  pulleyParams.constraint.isActive = 1;
  pulleyParams.totalLength = 1.0;
  pulleyParams.gearRatio = 1.0;
  memset(pulleyParams.pulleyPosition, 0, 48);
  pulleyParams.isRigid = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v5 = info->hObjects[0];
  pulleyParams.pulleyPosition[0] = *AbsOrigin;
  pulleyParams.pulleyPosition[1] = this->m_position2;
  (*(*v5 + 416LL))(&in2);
  VectorTransform(info, &in2, &world[0].x);
  (*(*info->hObjects[1] + 416LL))(&in2);
  VectorTransform(&info->anchorPosition[1].x, &in2, &world[1].x);
  v6 = info;
  for ( i = 0; ; v6 = (info + i * 12) )
  {
    x = v6->anchorPosition[0].x;
    pulleyParams.objectPosition[i].x = v6->anchorPosition[0].x;
    pulleyParams.objectPosition[i].y = v6->anchorPosition[0].y;
    z = v6->anchorPosition[0].z;
    this->m_offset[i].x = x;
    pulleyParams.objectPosition[i].z = z;
    this->m_offset[i].y = v6->anchorPosition[0].y;
    this->m_offset[i++].z = v6->anchorPosition[0].z;
    if ( i == 2 )
      break;
  }
  m_gearRatio = this->m_gearRatio;
  pulleyParams.totalLength = (this->m_addLength
                            + fsqrt(
                                (((world[0].x - pulleyParams.pulleyPosition[0].x)
                                * (world[0].x - pulleyParams.pulleyPosition[0].x))
                               + ((world[0].y - pulleyParams.pulleyPosition[0].y)
                                * (world[0].y - pulleyParams.pulleyPosition[0].y)))
                              + ((world[0].z - pulleyParams.pulleyPosition[0].z)
                               * (world[0].z - pulleyParams.pulleyPosition[0].z))))
                           + (fsqrt(
                                (((world[1].x - pulleyParams.pulleyPosition[1].x)
                                * (world[1].x - pulleyParams.pulleyPosition[1].x))
                               + ((world[1].y - pulleyParams.pulleyPosition[1].y)
                                * (world[1].y - pulleyParams.pulleyPosition[1].y)))
                              + ((world[1].z - pulleyParams.pulleyPosition[1].z)
                               * (world[1].z - pulleyParams.pulleyPosition[1].z)))
                            * m_gearRatio);
  if ( m_gearRatio != 0.0 )
    pulleyParams.gearRatio = m_gearRatio;
  m_forceLimit = this->m_forceLimit;
  pulleyParams.constraint.strength = 1.0;
  m_Value = this->m_spawnflags.m_Value;
  pulleyParams.constraint.forceLimit = m_forceLimit;
  pulleyParams.constraint.torqueLimit = this->m_torqueLimit;
  *pulleyParams.constraint.bodyMassScale = *info->massScale;
  pulleyParams.constraint.isActive = ((m_Value >> 2) ^ 1) & 1;
  if ( (m_Value & 2) != 0 )
    pulleyParams.isRigid = 1;
  v13 = CBaseEntity::VPhysicsWorld(this);
  return (*(*v13 + 320LL))(v13, info->hObjects[0], info->hObjects[1], &pulleyParams);
}


// CPhysLength::~CPhysLength  (line 1671, @0x0000000002306d90, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysLength::~CPhysLength(CPhysLength *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysLength::~CPhysLength  (line 1671, @0x0000000002306db0, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CPhysLength, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysLength::~CPhysLength(CPhysLength *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysLength::GetEntityClass  (line 1673, @0x0000000002303c70, libserver.so)
CEntityClass *__cdecl CPhysLength::GetEntityClass()
{
  return g_pEntityCPhysLengthClass;
}


// CPhysLength::Schema_DynamicBinding  (line 1673, @0x0000000002303c80, libserver.so)
// globals: CPhysLength::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysLength::Schema_DynamicBinding(const CPhysLength *const this)
{
  return CPhysLength::s_pSchemaBinding;
}


// CPhysLength::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1673, @0x0000000002303c90, libserver.so)
// globals: CPhysLength::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysLength::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysLength::CEntityInstanceEntityClass *const this)
{
  return CPhysLength::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysLength::CEntityInstanceEntityClass::DestructInstance  (line 1673, @0x0000000002303ca0, libserver.so)  // inlines: Destruct<CPhysLength>
void __fastcall CPhysLength::CEntityInstanceEntityClass::DestructInstance(
        CPhysLength::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysLength::CEntityInstanceEntityClass::FreeInstance  (line 1673, @0x0000000002303cc0, libserver.so)
void __fastcall CPhysLength::CEntityInstanceEntityClass::FreeInstance(
        CPhysLength::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysLength::CEntityInstanceEntityClass::CanAllocate  (line 1673, @0x0000000002303ce0, libserver.so)
bool __fastcall CPhysLength::CEntityInstanceEntityClass::CanAllocate(
        const CPhysLength::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysLength::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1673, @0x0000000002303cf0, libserver.so)
// globals: CPhysLength::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysLength::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysLength::CEntityInstanceEntityClass *const this)
{
  return CPhysLength::s_pSchemaBinding;
}


// CPhysLength::CEntityInstanceEntityClass::AllocateInstance  (line 1673, @0x0000000002305c20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysLength::CEntityInstanceEntityClass::AllocateInstance(
        CPhysLength::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 896);
  memset(v1, 0, 0x380u);
  return v1;
}


// CPhysLength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1673, @0x0000000002308d60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysLength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysLength::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysLength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1673, @0x0000000002308d80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysLength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysLength::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysLength::CEntityInstanceEntityClass::ConstructInstance  (line 1673, @0x000000000230dcd0, libserver.so)  // inlines: CPhysLength, Construct<CPhysLength>
// calls: CPhysConstraint::CPhysConstraint
CEntityInstance *__fastcall CPhysLength::CEntityInstanceEntityClass::ConstructInstance(
        CPhysLength::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysConstraint::CPhysConstraint(p);
    *p = &off_407C310;
  }
  return p;
}


// CPhysLength::GetEntityClassInternal  (line 1673, @0x00000000023179d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysConstraint::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_lengthconstraint", "CPhysLength"
// globals: `guard variable for'CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass, CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysLength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysLength::GetEntityClassInfo(void)::g_EntityCPhysLengthClassInfo, CPhysLength::GetEntityClassInfo(void)::g_EntityCPhysLengthClassInfo
CEntityClass *__cdecl CPhysLength::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass) != 0 )
  {
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_designerName.u.m_Id = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass._vptr_CEntityClass = off_3F79390;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_ComponentOffsets.m_Size = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_AllHelpers.m_Size = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_classInputs.m_Size = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_classOutputs.m_Size = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_requiredEHandle.m_Index = -1;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_hNetworkSerializer = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_pBaseClassInfo = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_pClassInfo = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_flags = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_nAllHelpersFlags = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_pScriptClassDesc = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_pInputs = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_nInputCount = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_pOutputs = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_nOutputCount = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_pGameClass = 0;
    CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass._vptr_CEntityClass = off_407C290;
    __cxa_guard_release(&`guard variable for'CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass);
    __cxa_atexit(
      CPhysLength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysLengthClass != 0 )
    return &CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass;
  if ( `guard variable for'CPhysLength::GetEntityClassInfo(void)::g_EntityCPhysLengthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysLength::GetEntityClassInfo(void)::g_EntityCPhysLengthClassInfo) != 0 )
  {
    EntityClassInfo = CPhysConstraint::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysLength::GetEntityClassInfo(void)::g_EntityCPhysLengthClassInfo,
      "CPhysLength",
      "phys_lengthconstraint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysLength::GetEntityClassInfo(void)::g_EntityCPhysLengthClassInfo);
  }
  CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_pClassInfo = &CPhysLength::GetEntityClassInfo(void)::g_EntityCPhysLengthClassInfo;
  CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_pBaseClassInfo = CPhysLength::GetEntityClassInfo(void)::g_EntityCPhysLengthClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysLengthClass = &CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass;
  CPhysLength::GetEntityClassInfo(void)::g_EntityCPhysLengthClassInfo.m_pClass = &CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass;
  CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysLengthClass->m_pComponentOverrides = 0;
  return &CPhysLength::GetEntityClassInternal(void)::g_EntityCPhysLengthClass;
}


// CPhysLength::GetDataDescMap  (line 1687, @0x00000000022b79a0, libserver.so)
// globals: CPhysLength::m_DataMap
datamap_t *__fastcall CPhysLength::GetDataDescMap(CPhysLength *const this)
{
  return &CPhysLength::m_DataMap;
}


// CPhysLength::AddDatadescMetadataKeys  (line 1687, @0x00000000022cee60, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysLength::GetEntityClass(void)
void __fastcall CPhysLength::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysLength::GetEntityClass);
}


// CPhysLength::GetBaseMap  (line 1687, @0x00000000022cee80, libserver.so)
// globals: CPhysConstraint::m_DataMap
datamap_t *__cdecl CPhysLength::GetBaseMap()
{
  return &CPhysConstraint::m_DataMap;
}


// DataMapInit<CPhysLength>  (line 1687, @0x00000000022cee90, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysLength"
// globals: `guard variable for'DataMapInit<CPhysLength>(CPhysLength *)::nameHolder, CPhysConstraint::m_DataMap, CPhysLength::GetEntityClass(void), CPhysLength::m_DataMap, DataMapInit<CPhysLength>(CPhysLength *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysLength>(CPhysLength *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysLength>(CPhysLength *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysLength>(CPhysLength *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysLength>(CPhysLength *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysLength>(CPhysLength *)::nameHolder.m_pszBase = "CPhysLength";
    DataMapInit<CPhysLength>(CPhysLength *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysLength>(CPhysLength *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysLength>(CPhysLength *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysLength>(CPhysLength *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysLength>(CPhysLength *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysLength>(CPhysLength *)::nameHolder,
      &_dso_handle);
  }
  CPhysLength::m_DataMap.dataNumFields = 5;
  CPhysLength::m_DataMap.baseMap = &CPhysConstraint::m_DataMap;
  CPhysLength::m_DataMap.dataDesc = &DataMapInit<CPhysLength>(CPhysLength *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysLength::m_DataMap, CPhysLength::GetEntityClass);
  return &CPhysLength::m_DataMap;
}


// CPhysLength::CreateConstraint  (line 1696, @0x00000000022b9630, libserver.so)  // inlines: Defaults, FastSqrt, GetBreakParams, HasSpawnFlags, Init, InitWorldspace, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::VPhysicsWorld
HPhysicsJoint __fastcall CPhysLength::CreateConstraint(CPhysLength *const this, const hl_constraint_info_t *const info)
{
  const Vector *AbsOrigin; // rax
  _BOOL8 swapped; // rdx
  IPhysicsBody *v6; // rdi
  IPhysicsBody *v7; // r15
  __int64 v8; // rcx
  _BOOL8 v9; // rdx
  Vector *v10; // r14
  Vector *v11; // r13
  vec_t v12; // xmm1_4
  double v13; // xmm0_8
  vec_t v14; // xmm1_4
  float x; // xmm3_4
  float y; // xmm2_4
  vec_t v17; // xmm5_4
  vec_t v18; // xmm4_4
  float z; // xmm6_4
  unsigned int m_Value; // eax
  float v21; // xmm0_4
  float v22; // xmm0_4
  vec_t v23; // xmm0_4
  vec_t v24; // xmm0_4
  float m_forceLimit; // xmm0_4
  IVPhysics2World *v26; // rax
  double v28; // [rsp+10h] [rbp-A0h]
  Vector position[2]; // [rsp+20h] [rbp-90h] BYREF
  constraint_lengthparams_t lengthParams; // [rsp+40h] [rbp-70h] BYREF

  lengthParams.constraint.forceLimit = 0.0;
  lengthParams.constraint.torqueLimit = 0.0;
  lengthParams.constraint.strength = 1.0;
  lengthParams.constraint.bodyMassScale[0] = 1.0;
  lengthParams.constraint.bodyMassScale[1] = 1.0;
  lengthParams.constraint.isActive = 1;
  memset(lengthParams.objectPosition, 0, sizeof(lengthParams.objectPosition));
  lengthParams.totalLength = 1.0;
  lengthParams.minLength = 0.0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  swapped = info->swapped;
  v6 = info->hObjects[0];
  position[0].x = AbsOrigin->x;
  v7 = info->hObjects[1];
  position[0].y = AbsOrigin->y;
  position[0].z = AbsOrigin->z;
  v8 = swapped ^ 1u;
  v9 = swapped;
  position[1] = this->m_vecAttach;
  v10 = &position[v8];
  v11 = &position[v9];
  if ( v6 != 0 )
  {
    v28 = (*(*v6 + 1008LL))(v6, &position[v9]);
    lengthParams.objectPosition[0].z = v12;
    *&lengthParams.objectPosition[0].x = v28;
    if ( v7 != 0 )
    {
LABEL_3:
      v13 = (*(*v7 + 1008LL))(v7, v10);
      x = v10->x;
      y = v10->y;
      v17 = *&v13;
      v18 = *(&v13 + 1);
      lengthParams.objectPosition[1].z = v14;
      z = v10->z;
      *&lengthParams.objectPosition[1].x = v13;
      goto LABEL_4;
    }
  }
  else
  {
    lengthParams.objectPosition[0] = *v11;
    if ( v7 != 0 )
      goto LABEL_3;
  }
  v18 = v10->y;
  v14 = v10->z;
  lengthParams.objectPosition[1].x = v10->x;
  v17 = lengthParams.objectPosition[1].x;
  x = lengthParams.objectPosition[1].x;
  lengthParams.objectPosition[1].y = v18;
  y = v18;
  lengthParams.objectPosition[1].z = v14;
  z = v14;
LABEL_4:
  m_Value = this->m_spawnflags.m_Value;
  v21 = (((v11->x - x) * (v11->x - x)) + ((v11->y - y) * (v11->y - y))) + ((v11->z - z) * (v11->z - z));
  lengthParams.minLength = this->m_minLength;
  v22 = fsqrt(v21) + this->m_addLength;
  lengthParams.totalLength = v22;
  this->m_totalLength = v22;
  if ( (m_Value & 2) != 0 )
    lengthParams.minLength = v22;
  v23 = lengthParams.objectPosition[0].x;
  this->m_offset[1].x = v17;
  this->m_offset[1].y = v18;
  this->m_offset[0].x = v23;
  v24 = lengthParams.objectPosition[0].y;
  this->m_offset[1].z = v14;
  this->m_offset[0].y = v24;
  lengthParams.constraint.strength = 1.0;
  this->m_offset[0].z = lengthParams.objectPosition[0].z;
  m_forceLimit = this->m_forceLimit;
  lengthParams.constraint.isActive = ((m_Value >> 2) ^ 1) & 1;
  lengthParams.constraint.forceLimit = m_forceLimit;
  lengthParams.constraint.torqueLimit = this->m_torqueLimit;
  *lengthParams.constraint.bodyMassScale = *info->massScale;
  v26 = CBaseEntity::VPhysicsWorld(this);
  return (*(*v26 + 328LL))(v26, info->hObjects[0], info->hObjects[1], &lengthParams);
}


// CRagdollConstraint::~CRagdollConstraint  (line 1726, @0x0000000002306de0, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CRagdollConstraint::~CRagdollConstraint(CRagdollConstraint *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CRagdollConstraint::~CRagdollConstraint  (line 1726, @0x0000000002306e00, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CRagdollConstraint, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CRagdollConstraint::~CRagdollConstraint(CRagdollConstraint *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CRagdollConstraint::GetEntityClass  (line 1728, @0x0000000002303d00, libserver.so)
CEntityClass *__cdecl CRagdollConstraint::GetEntityClass()
{
  return g_pEntityCRagdollConstraintClass;
}


// CRagdollConstraint::Schema_DynamicBinding  (line 1728, @0x0000000002303d10, libserver.so)
// globals: CRagdollConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagdollConstraint::Schema_DynamicBinding(
        const CRagdollConstraint *const this)
{
  return CRagdollConstraint::s_pSchemaBinding;
}


// CRagdollConstraint::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1728, @0x0000000002303d20, libserver.so)
// globals: CRagdollConstraint::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagdollConstraint::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRagdollConstraint::CEntityInstanceEntityClass *const this)
{
  return CRagdollConstraint::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRagdollConstraint::CEntityInstanceEntityClass::DestructInstance  (line 1728, @0x0000000002303d30, libserver.so)  // inlines: Destruct<CRagdollConstraint>
void __fastcall CRagdollConstraint::CEntityInstanceEntityClass::DestructInstance(
        CRagdollConstraint::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRagdollConstraint::CEntityInstanceEntityClass::FreeInstance  (line 1728, @0x0000000002303d50, libserver.so)
void __fastcall CRagdollConstraint::CEntityInstanceEntityClass::FreeInstance(
        CRagdollConstraint::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRagdollConstraint::CEntityInstanceEntityClass::CanAllocate  (line 1728, @0x0000000002303d70, libserver.so)
bool __fastcall CRagdollConstraint::CEntityInstanceEntityClass::CanAllocate(
        const CRagdollConstraint::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRagdollConstraint::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1728, @0x0000000002303d80, libserver.so)
// globals: CRagdollConstraint::s_pSchemaBinding
const ISchemaBinding *__fastcall CRagdollConstraint::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRagdollConstraint::CEntityInstanceEntityClass *const this)
{
  return CRagdollConstraint::s_pSchemaBinding;
}


// CRagdollConstraint::CEntityInstanceEntityClass::AllocateInstance  (line 1728, @0x0000000002305c60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRagdollConstraint::CEntityInstanceEntityClass::AllocateInstance(
        CRagdollConstraint::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 888);
  memset(v1, 0, 0x378u);
  return v1;
}


// CRagdollConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1728, @0x0000000002308db0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRagdollConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollConstraint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CRagdollConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1728, @0x0000000002308dd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRagdollConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollConstraint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRagdollConstraint::CEntityInstanceEntityClass::ConstructInstance  (line 1728, @0x000000000230dd00, libserver.so)  // inlines: CRagdollConstraint, Construct<CRagdollConstraint>
// calls: CPhysConstraint::CPhysConstraint
CEntityInstance *__fastcall CRagdollConstraint::CEntityInstanceEntityClass::ConstructInstance(
        CRagdollConstraint::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysConstraint::CPhysConstraint(p);
    *p = &off_407CA30;
  }
  return p;
}


// CRagdollConstraint::GetEntityClassInternal  (line 1728, @0x0000000002315560, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysConstraint::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_ragdollconstraint", "CRagdollConstraint"
// globals: `guard variable for'CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass, CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CRagdollConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRagdollConstraint::GetEntityClassInfo(void)::g_EntityCRagdollConstraintClassInfo, CRagdollConstraint::GetEntityClassInfo(void)::g_EntityCRagdollConstraintClassInfo
CEntityClass *__cdecl CRagdollConstraint::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass) != 0 )
  {
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_designerName.u.m_Id = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass._vptr_CEntityClass = off_3F79390;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_ComponentOffsets.m_Size = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_AllHelpers.m_Size = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_atomicFields,
      4);
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_classInputs.m_Size = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_classInputs.m_Memory.m_pMemory = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_classOutputs.m_Size = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_requiredEHandle.m_Index = -1;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_hNetworkSerializer = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_pBaseClassInfo = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_pClassInfo = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_flags = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_nAllHelpersFlags = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_pScriptClassDesc = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_pInputs = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_nInputCount = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_pOutputs = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_nOutputCount = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_pGameClass = 0;
    CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass._vptr_CEntityClass = off_407C9B0;
    __cxa_guard_release(&`guard variable for'CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass);
    __cxa_atexit(
      CRagdollConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass,
      &_dso_handle);
  }
  if ( g_pEntityCRagdollConstraintClass != 0 )
    return &CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass;
  if ( `guard variable for'CRagdollConstraint::GetEntityClassInfo(void)::g_EntityCRagdollConstraintClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollConstraint::GetEntityClassInfo(void)::g_EntityCRagdollConstraintClassInfo) != 0 )
  {
    EntityClassInfo = CPhysConstraint::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRagdollConstraint::GetEntityClassInfo(void)::g_EntityCRagdollConstraintClassInfo,
      "CRagdollConstraint",
      "phys_ragdollconstraint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRagdollConstraint::GetEntityClassInfo(void)::g_EntityCRagdollConstraintClassInfo);
  }
  CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_pClassInfo = &CRagdollConstraint::GetEntityClassInfo(void)::g_EntityCRagdollConstraintClassInfo;
  CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_pBaseClassInfo = CRagdollConstraint::GetEntityClassInfo(void)::g_EntityCRagdollConstraintClassInfo.m_pBaseClassInfo;
  g_pEntityCRagdollConstraintClass = &CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass;
  CRagdollConstraint::GetEntityClassInfo(void)::g_EntityCRagdollConstraintClassInfo.m_pClass = &CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass;
  CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCRagdollConstraintClass->m_pComponentOverrides = 0;
  return &CRagdollConstraint::GetEntityClassInternal(void)::g_EntityCRagdollConstraintClass;
}


// CRagdollConstraint::GetDataDescMap  (line 1757, @0x00000000022b79b0, libserver.so)
// globals: CRagdollConstraint::m_DataMap
datamap_t *__fastcall CRagdollConstraint::GetDataDescMap(CRagdollConstraint *const this)
{
  return &CRagdollConstraint::m_DataMap;
}


// CRagdollConstraint::AddDatadescMetadataKeys  (line 1757, @0x00000000022cef60, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRagdollConstraint::GetEntityClass(void)
void __fastcall CRagdollConstraint::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRagdollConstraint::GetEntityClass);
}


// CRagdollConstraint::GetBaseMap  (line 1757, @0x00000000022cef80, libserver.so)
// globals: CPhysConstraint::m_DataMap
datamap_t *__cdecl CRagdollConstraint::GetBaseMap()
{
  return &CPhysConstraint::m_DataMap;
}


// DataMapInit<CRagdollConstraint>  (line 1757, @0x00000000022cef90, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CRagdollConstraint"
// globals: `guard variable for'DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder, CPhysConstraint::m_DataMap, CRagdollConstraint::GetEntityClass(void), CRagdollConstraint::m_DataMap, DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRagdollConstraint>(CRagdollConstraint *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder) != 0 )
  {
    DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder.m_pszBase = "CRagdollConstraint";
    DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::nameHolder,
      &_dso_handle);
  }
  CRagdollConstraint::m_DataMap.dataNumFields = 9;
  CRagdollConstraint::m_DataMap.baseMap = &CPhysConstraint::m_DataMap;
  CRagdollConstraint::m_DataMap.dataDesc = &DataMapInit<CRagdollConstraint>(CRagdollConstraint *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRagdollConstraint::m_DataMap, CRagdollConstraint::GetEntityClass);
  return &CRagdollConstraint::m_DataMap;
}


// CRagdollConstraint::CreateConstraint  (line 1772, @0x00000000022be0b0, libserver.so)  // inlines: Defaults, HasSpawnFlags, SetAxisLimits, SetAxisMotor
// calls: SetIdentityMatrix, MatrixInvert, CBaseEntity::EntityToWorldTransform, ConcatTransforms, CBaseEntity::VPhysicsWorld
HPhysicsJoint __fastcall CRagdollConstraint::CreateConstraint(
        CRagdollConstraint *const this,
        const hl_constraint_info_t *const info)
{
  IPhysicsBody *v4; // rsi
  matrix3x4_t *v5; // rax
  IPhysicsBody *v6; // rsi
  matrix3x4_t *v7; // rax
  float m_xmax; // xmm0_4
  unsigned int m_Value; // eax
  float m_xfriction; // xmm0_4
  float m_xmin; // xmm1_4
  float m_ymax; // xmm0_4
  float m_ymin; // xmm1_4
  float m_yfriction; // xmm0_4
  float m_zmin; // xmm1_4
  float m_zmax; // xmm0_4
  float m_zfriction; // xmm0_4
  IVPhysics2World *v18; // r14
  HPhysicsJoint (__fastcall *v19)(IVPhysics2World *, IPhysicsBody *, IPhysicsBody *, matrix3x4_t *, constraint_ragdollparams_t *); // r15
  matrix3x4_t *v20; // rax
  matrix3x4_t entityToWorld; // [rsp+10h] [rbp-150h] BYREF
  matrix3x4_t worldToEntity; // [rsp+40h] [rbp-120h] BYREF
  constraint_ragdollparams_t ragdollParams; // [rsp+70h] [rbp-F0h] BYREF

  ragdollParams.constraint.isActive = 1;
  ragdollParams.constraint.forceLimit = 0.0;
  ragdollParams.constraint.torqueLimit = 0.0;
  ragdollParams.constraint.strength = 1.0;
  ragdollParams.constraint.bodyMassScale[0] = 1.0;
  ragdollParams.constraint.bodyMassScale[1] = 1.0;
  ragdollParams.isActive = 1;
  SetIdentityMatrix(&ragdollParams.constraintToReference);
  SetIdentityMatrix(&ragdollParams.constraintToAttached);
  v4 = info->hObjects[0];
  ragdollParams.parentIndex = -1;
  ragdollParams.childIndex = -1;
  memset(ragdollParams.axes, 0, 49);
  ragdollParams.useClockwiseRotations = 0;
  if ( v4 != 0 )
  {
    (*(*v4 + 416LL))(&entityToWorld);
    MatrixInvert(&entityToWorld, &worldToEntity);
    v5 = CBaseEntity::EntityToWorldTransform(this);
    ConcatTransforms(&worldToEntity, v5, &ragdollParams.constraintToReference);
    v6 = info->hObjects[1];
    if ( v6 != 0 )
    {
LABEL_3:
      (*(*v6 + 416LL))(&entityToWorld);
      MatrixInvert(&entityToWorld, &worldToEntity);
      v7 = CBaseEntity::EntityToWorldTransform(this);
      ConcatTransforms(&worldToEntity, v7, &ragdollParams.constraintToAttached);
      goto LABEL_4;
    }
  }
  else
  {
    SetIdentityMatrix(&ragdollParams.constraintToReference);
    v6 = info->hObjects[1];
    if ( v6 != 0 )
      goto LABEL_3;
  }
  SetIdentityMatrix(&ragdollParams.constraintToAttached);
LABEL_4:
  m_xmax = this->m_xmax;
  ragdollParams.axes[0].flMotorTargetAngSpeed = 0.0;
  m_Value = this->m_spawnflags.m_Value;
  ragdollParams.axes[1].flMotorTargetAngSpeed = 0.0;
  ragdollParams.axes[0].flMaxRotation = m_xmax;
  m_xfriction = this->m_xfriction;
  m_xmin = this->m_xmin;
  ragdollParams.axes[2].flMotorTargetAngSpeed = 0.0;
  ragdollParams.axes[0].flMotorMaxTorque = m_xfriction;
  m_ymax = this->m_ymax;
  ragdollParams.axes[0].flMinRotation = m_xmin;
  m_ymin = this->m_ymin;
  ragdollParams.axes[1].flMaxRotation = m_ymax;
  m_yfriction = this->m_yfriction;
  ragdollParams.axes[1].flMinRotation = m_ymin;
  m_zmin = this->m_zmin;
  ragdollParams.axes[1].flMotorMaxTorque = m_yfriction;
  m_zmax = this->m_zmax;
  ragdollParams.onlyAngularLimits = (m_Value & 2) != 0;
  ragdollParams.axes[2].flMaxRotation = m_zmax;
  m_zfriction = this->m_zfriction;
  ragdollParams.axes[2].flMinRotation = m_zmin;
  ragdollParams.axes[2].flMotorMaxTorque = m_zfriction;
  if ( (m_Value & 4) != 0 )
    ragdollParams.isActive = 0;
  v18 = CBaseEntity::VPhysicsWorld(this);
  v19 = *(*v18 + 312LL);
  v20 = CBaseEntity::EntityToWorldTransform(this);
  return v19(v18, info->hObjects[0], info->hObjects[1], v20, &ragdollParams);
}


// CGenericConstraint::~CGenericConstraint  (line 1822, @0x0000000002306e30, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CGenericConstraint::~CGenericConstraint(CGenericConstraint *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CGenericConstraint::~CGenericConstraint  (line 1822, @0x0000000002306e50, libserver.so)  // inlines: ~CGenericConstraint, ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CGenericConstraint::~CGenericConstraint(CGenericConstraint *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CGenericConstraint::GetEntityClass  (line 1824, @0x0000000002303d90, libserver.so)
CEntityClass *__cdecl CGenericConstraint::GetEntityClass()
{
  return g_pEntityCGenericConstraintClass;
}


// CGenericConstraint::Schema_DynamicBinding  (line 1824, @0x0000000002303da0, libserver.so)
// globals: CGenericConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGenericConstraint::Schema_DynamicBinding(
        const CGenericConstraint *const this)
{
  return CGenericConstraint::s_pSchemaBinding;
}


// CGenericConstraint::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1824, @0x0000000002303db0, libserver.so)
// globals: CGenericConstraint::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGenericConstraint::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGenericConstraint::CEntityInstanceEntityClass *const this)
{
  return CGenericConstraint::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGenericConstraint::CEntityInstanceEntityClass::DestructInstance  (line 1824, @0x0000000002303dc0, libserver.so)  // inlines: Destruct<CGenericConstraint>
void __fastcall CGenericConstraint::CEntityInstanceEntityClass::DestructInstance(
        CGenericConstraint::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGenericConstraint::CEntityInstanceEntityClass::FreeInstance  (line 1824, @0x0000000002303de0, libserver.so)
void __fastcall CGenericConstraint::CEntityInstanceEntityClass::FreeInstance(
        CGenericConstraint::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGenericConstraint::CEntityInstanceEntityClass::CanAllocate  (line 1824, @0x0000000002303e00, libserver.so)
bool __fastcall CGenericConstraint::CEntityInstanceEntityClass::CanAllocate(
        const CGenericConstraint::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGenericConstraint::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1824, @0x0000000002303e10, libserver.so)
// globals: CGenericConstraint::s_pSchemaBinding
const ISchemaBinding *__fastcall CGenericConstraint::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGenericConstraint::CEntityInstanceEntityClass *const this)
{
  return CGenericConstraint::s_pSchemaBinding;
}


// CGenericConstraint::CEntityInstanceEntityClass::AllocateInstance  (line 1824, @0x0000000002305ca0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGenericConstraint::CEntityInstanceEntityClass::AllocateInstance(
        CGenericConstraint::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1088);
  memset(v1, 0, 0x440u);
  return v1;
}


// CGenericConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1824, @0x0000000002308e00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGenericConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGenericConstraint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CGenericConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1824, @0x0000000002308e20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGenericConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGenericConstraint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGenericConstraint::CEntityInstanceEntityClass::ConstructInstance  (line 1824, @0x000000000230de80, libserver.so)  // inlines: Construct<CGenericConstraint>
// calls: CGenericConstraint::CGenericConstraint
CEntityInstance *__fastcall CGenericConstraint::CEntityInstanceEntityClass::ConstructInstance(
        CGenericConstraint::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CGenericConstraint::CGenericConstraint(p);
  return p;
}


// CGenericConstraint::GetEntityClassInternal  (line 1824, @0x0000000002313400, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysConstraint::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_genericconstraint", "CGenericConstraint"
// globals: `guard variable for'CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass, CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CGenericConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGenericConstraint::GetEntityClassInfo(void)::g_EntityCGenericConstraintClassInfo, CGenericConstraint::GetEntityClassInfo(void)::g_EntityCGenericConstraintClassInfo
CEntityClass *__cdecl CGenericConstraint::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass) != 0 )
  {
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_designerName.u.m_Id = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass._vptr_CEntityClass = off_3F79390;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_ComponentOffsets.m_Size = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_AllHelpers.m_Size = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_atomicFields,
      4);
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_classInputs.m_Size = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_classInputs.m_Memory.m_pMemory = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_classOutputs.m_Size = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_requiredEHandle.m_Index = -1;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_hNetworkSerializer = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_pBaseClassInfo = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_pClassInfo = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_flags = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_nAllHelpersFlags = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_pScriptClassDesc = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_pInputs = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_nInputCount = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_pOutputs = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_nOutputCount = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_pGameClass = 0;
    CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass._vptr_CEntityClass = off_407D0D0;
    __cxa_guard_release(&`guard variable for'CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass);
    __cxa_atexit(
      CGenericConstraint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass,
      &_dso_handle);
  }
  if ( g_pEntityCGenericConstraintClass != 0 )
    return &CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass;
  if ( `guard variable for'CGenericConstraint::GetEntityClassInfo(void)::g_EntityCGenericConstraintClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGenericConstraint::GetEntityClassInfo(void)::g_EntityCGenericConstraintClassInfo) != 0 )
  {
    EntityClassInfo = CPhysConstraint::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGenericConstraint::GetEntityClassInfo(void)::g_EntityCGenericConstraintClassInfo,
      "CGenericConstraint",
      "phys_genericconstraint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGenericConstraint::GetEntityClassInfo(void)::g_EntityCGenericConstraintClassInfo);
  }
  CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_pClassInfo = &CGenericConstraint::GetEntityClassInfo(void)::g_EntityCGenericConstraintClassInfo;
  CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_pBaseClassInfo = CGenericConstraint::GetEntityClassInfo(void)::g_EntityCGenericConstraintClassInfo.m_pBaseClassInfo;
  g_pEntityCGenericConstraintClass = &CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass;
  CGenericConstraint::GetEntityClassInfo(void)::g_EntityCGenericConstraintClassInfo.m_pClass = &CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass;
  CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCGenericConstraintClass->m_pComponentOverrides = 0;
  return &CGenericConstraint::GetEntityClassInternal(void)::g_EntityCGenericConstraintClass;
}


// CGenericConstraint::GetDataDescMap  (line 1904, @0x00000000022b79c0, libserver.so)
// globals: CGenericConstraint::m_DataMap
datamap_t *__fastcall CGenericConstraint::GetDataDescMap(CGenericConstraint *const this)
{
  return &CGenericConstraint::m_DataMap;
}


// CGenericConstraint::AddDatadescMetadataKeys  (line 1904, @0x00000000022cf060, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGenericConstraint::GetEntityClass(void)
void __fastcall CGenericConstraint::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGenericConstraint::GetEntityClass);
}


// CGenericConstraint::GetBaseMap  (line 1904, @0x00000000022cf080, libserver.so)
// globals: CPhysConstraint::m_DataMap
datamap_t *__cdecl CGenericConstraint::GetBaseMap()
{
  return &CPhysConstraint::m_DataMap;
}


// DataMapInit<CGenericConstraint>  (line 1904, @0x00000000022f3950, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CGenericConstraint"
// globals: `guard variable for'DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder, `guard variable for'DataMapInit<CGenericConstraint>(CGenericConstraint *)::dataDesc, CPhysConstraint::m_DataMap, CGenericConstraint::GetEntityClass(void), CGenericConstraint::m_DataMap, DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGenericConstraint>(CGenericConstraint *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder) != 0 )
  {
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_pszBase = "CGenericConstraint";
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder,
      &_dso_handle);
  }
  CGenericConstraint::m_DataMap.baseMap = &CPhysConstraint::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CGenericConstraint>(CGenericConstraint *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGenericConstraint>(CGenericConstraint *)::dataDesc) != 0 )
  {
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::dataDesc[45].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::dataDesc[46].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::dataDesc[47].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v2, DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_pszBase), "UpdateThink");
    m_Size = DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Size == DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CGenericConstraint>(CGenericConstraint *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CGenericConstraint>(CGenericConstraint *)::dataDesc[48].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGenericConstraint>(CGenericConstraint *)::dataDesc);
  }
  CGenericConstraint::m_DataMap.dataNumFields = 48;
  CGenericConstraint::m_DataMap.dataDesc = &DataMapInit<CGenericConstraint>(CGenericConstraint *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGenericConstraint::m_DataMap, CGenericConstraint::GetEntityClass);
  return &CGenericConstraint::m_DataMap;
}


// CGenericConstraint::CGenericConstraint  (line 1975, @0x00000000022cf090, libserver.so)  // inlines: CEntityIOOutput, curtime, ~CLogicalEntity, ~CPhysConstraint, ~CServerOnlyEntity
// calls: CPhysConstraint::CPhysConstraint, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CGenericConstraint::CEntityInstanceEntityClass::ConstructInstance
// globals: CGenericConstraint::UpdateThink(void)
void __fastcall CGenericConstraint::CGenericConstraint(CGenericConstraint *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  double v4; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CPhysConstraint::CPhysConstraint(this);
  this->_vptr_IHandleEntity = &off_407D150;
  this->m_nLinearMotionX = JointMotion_t::JOINT_MOTION_FREE;
  this->m_nLinearMotionY = JointMotion_t::JOINT_MOTION_FREE;
  this->m_nLinearMotionZ = JointMotion_t::JOINT_MOTION_FREE;
  this->m_flLinearFrequencyX = 0.0;
  this->m_flLinearFrequencyY = 0.0;
  this->m_flLinearFrequencyZ = 0.0;
  this->m_flLinearDampingRatioX = 0.0;
  this->m_flLinearDampingRatioY = 0.0;
  this->m_flLinearDampingRatioZ = 0.0;
  this->m_flMaxLinearImpulseX = 0.0;
  this->m_flMaxLinearImpulseY = 0.0;
  this->m_flMaxLinearImpulseZ = 0.0;
  this->m_flBreakAfterTimeX = 0.0;
  this->m_flBreakAfterTimeY = 0.0;
  this->m_flBreakAfterTimeZ = 0.0;
  this->m_flBreakAfterTimeStartTimeX = 0.0;
  this->m_flBreakAfterTimeStartTimeY = 0.0;
  this->m_flBreakAfterTimeStartTimeZ = 0.0;
  this->m_flBreakAfterTimeThresholdX = 0.0;
  this->m_flBreakAfterTimeThresholdY = 0.0;
  this->m_flBreakAfterTimeThresholdZ = 0.0;
  this->m_flNotifyForceX = 0.0;
  this->m_flNotifyForceY = 0.0;
  this->m_flNotifyForceZ = 0.0;
  this->m_flNotifyForceMinTimeX = 0.0;
  this->m_flNotifyForceMinTimeY = 0.0;
  this->m_flNotifyForceMinTimeZ = 0.0;
  this->m_flNotifyForceLastTimeX = 0.0;
  this->m_flNotifyForceLastTimeY = 0.0;
  this->m_flNotifyForceLastTimeZ = 0.0;
  this->m_nAngularMotionX = JointMotion_t::JOINT_MOTION_FREE;
  this->m_nAngularMotionY = JointMotion_t::JOINT_MOTION_FREE;
  this->m_nAngularMotionZ = JointMotion_t::JOINT_MOTION_FREE;
  this->m_flAngularFrequencyX = 0.0;
  this->m_flAngularFrequencyY = 0.0;
  this->m_flAngularFrequencyZ = 0.0;
  this->m_flAngularDampingRatioX = 0.0;
  this->m_flAngularDampingRatioY = 0.0;
  this->m_flAngularDampingRatioZ = 0.0;
  this->m_flMaxAngularImpulseX = 0.0;
  this->m_flMaxAngularImpulseY = 0.0;
  this->m_flMaxAngularImpulseZ = 0.0;
  this->m_NotifyForceReachedX._vptr_CEntityIOOutput = off_3F7C190;
  this->m_NotifyForceReachedY._vptr_CEntityIOOutput = off_3F7C190;
  this->m_NotifyForceReachedZ._vptr_CEntityIOOutput = off_3F7C190;
  CBaseEntity::ThinkSet(this, CGenericConstraint::UpdateThink, 0.0, 0, 0);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    *&v4 = LODWORD(v3->m_flCurrentTime);
  }
  else
  {
    v4 = 0.0;
  }
  CBaseEntity::SetNextThink(this, v4, v2, 0);
}


// CGenericConstraint::ConditionallyNotifyAxis  (line 1981, @0x00000000022f21b0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, curtime, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CGenericConstraint::UpdateThink
void __fastcall CGenericConstraint::ConditionallyNotifyAxis(
        CGenericConstraint *const this,
        float *const flNotifyLastTime,
        double flNotifyMinTime,
        float flImpulse,
        double flNotifyImpulseThreshold,
        COutputEvent *const outputEvent)
{
  float v6; // xmm3_4
  CGlobalVars *v9; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm1_4
  float v12; // xmm1_4
  CGlobalVars *v13; // r13
  FnGlobalVarsWarningFunc v14; // rax
  unsigned int v15; // [rsp-8h] [rbp-44h]
  float *v16; // [rsp-4h] [rbp-40h]
  float *v17; // [rsp-4h] [rbp-40h]
  float *flNotifyLastTimea; // [rsp+4h] [rbp-38h] BYREF
  __int16 v19; // [rsp+Ch] [rbp-30h]
  __int16 v20; // [rsp+Eh] [rbp-2Eh]

  v6 = 0.0;
  if ( *&flNotifyMinTime > 0.0 && *&flNotifyImpulseThreshold > 0.0 && flImpulse > *&flNotifyImpulseThreshold )
  {
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v15 = LODWORD(flNotifyMinTime);
          v16 = flNotifyLastTime;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          flNotifyLastTime = v16;
          v6 = 0.0;
          *&flNotifyMinTime = v15;
        }
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v12 = m_flCurrentTime - *flNotifyLastTime;
    if ( v12 > *&flNotifyMinTime )
    {
      v13 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v14 = gpGlobals->m_pfnWarningFunc;
          if ( v14 != 0 )
          {
            v17 = flNotifyLastTime;
            (v14)(1, flNotifyMinTime, v12, flNotifyImpulseThreshold, 0.0);
            flNotifyLastTime = v17;
          }
        }
        v6 = v13->m_flCurrentTime;
      }
      *flNotifyLastTime = v6;
      v20 = 0;
      v19 = 0;
      flNotifyLastTimea = 0;
      CEntityIOOutput::FireOutputInternal(outputEvent, this, this, &flNotifyLastTimea, 0.0);
      if ( (v20 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, flNotifyLastTimea);
    }
  }
}


// CGenericConstraint::UpdateBreakAfterTime  (line 1995, @0x00000000022cf300, libserver.so)  // inlines: curtime
// callers: CGenericConstraint::UpdateThink
void __fastcall CGenericConstraint::UpdateBreakAfterTime(
        CGenericConstraint *const this,
        float a2,
        const float flBreakAfterTime,
        const float flCurrentForce,
        const float flBreakAfterTimeThreshold,
        float *const flBreakTimerStartTime)
{
  float m_flCurrentTime; // xmm3_4
  float v8; // xmm1_4
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc v10; // rax
  CGlobalVars *v11; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float *v13; // [rsp-28h] [rbp-28h]
  float v14; // [rsp-20h] [rbp-20h]
  float *v15; // [rsp-20h] [rbp-20h]

  m_flCurrentTime = 0.0;
  if ( a2 != 0.0 && flCurrentForce != 0.0 && this->m_hJoint != 0 )
  {
    if ( (flBreakAfterTime - flCurrentForce) <= -1.0 )
    {
LABEL_21:
      *flBreakTimerStartTime = m_flCurrentTime;
      return;
    }
    v8 = *flBreakTimerStartTime;
    if ( v8 == 0.0 )
    {
      v11 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            v15 = flBreakTimerStartTime;
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            flBreakTimerStartTime = v15;
          }
        }
        m_flCurrentTime = v11->m_flCurrentTime;
      }
      goto LABEL_21;
    }
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v10 = gpGlobals->m_pfnWarningFunc;
        if ( v10 != 0 )
        {
          v13 = flBreakTimerStartTime;
          v14 = a2;
          v10(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          a2 = v14;
          v8 = *v13;
        }
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    if ( (m_flCurrentTime - v8) >= a2 )
      (*(*this->m_hJoint + 424LL))(this->m_hJoint);
  }
}


// CGenericConstraint::UpdateThink  (line 2021, @0x00000000022f2300, libserver.so)  // inlines: curtime
// calls: CGenericConstraint::ConditionallyNotifyAxis, CGenericConstraint::UpdateBreakAfterTime, CBaseEntity::SetNextThink
void __fastcall CGenericConstraint::UpdateThink(CGenericConstraint *const this)
{
  __m128i v2; // xmm0
  float v3; // r14d
  __m128i v4; // xmm0
  float v5; // r15d
  __m128i v6; // xmm0
  float v7; // r12d
  float v8; // xmm3_4
  float v9; // xmm3_4
  float v10; // xmm3_4
  double v11; // xmm1_8
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v14; // xmm0_8

  *v2.m128i_i64 = (*(*this->m_hJoint + 336LL))(this->m_hJoint, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  *v4.m128i_i64 = (*(*this->m_hJoint + 336LL))(this->m_hJoint, 1);
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  *v6.m128i_i64 = (*(*this->m_hJoint + 336LL))(this->m_hJoint, 2);
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  CGenericConstraint::ConditionallyNotifyAxis(
    this,
    &this->m_flNotifyForceLastTimeX,
    COERCE_DOUBLE(LODWORD(this->m_flNotifyForceMinTimeX)),
    v3,
    COERCE_DOUBLE(LODWORD(this->m_flNotifyForceX)),
    &this->m_NotifyForceReachedX);
  CGenericConstraint::ConditionallyNotifyAxis(
    this,
    &this->m_flNotifyForceLastTimeY,
    COERCE_DOUBLE(LODWORD(this->m_flNotifyForceMinTimeY)),
    v5,
    COERCE_DOUBLE(LODWORD(this->m_flNotifyForceY)),
    &this->m_NotifyForceReachedY);
  CGenericConstraint::ConditionallyNotifyAxis(
    this,
    &this->m_flNotifyForceLastTimeZ,
    COERCE_DOUBLE(LODWORD(this->m_flNotifyForceMinTimeZ)),
    v7,
    COERCE_DOUBLE(LODWORD(this->m_flNotifyForceZ)),
    &this->m_NotifyForceReachedZ);
  CGenericConstraint::UpdateBreakAfterTime(
    this,
    this->m_flBreakAfterTimeX,
    v3,
    this->m_flBreakAfterTimeThresholdX,
    v8,
    &this->m_flBreakAfterTimeStartTimeX);
  CGenericConstraint::UpdateBreakAfterTime(
    this,
    this->m_flBreakAfterTimeY,
    v5,
    this->m_flBreakAfterTimeThresholdY,
    v9,
    &this->m_flBreakAfterTimeStartTimeY);
  CGenericConstraint::UpdateBreakAfterTime(
    this,
    this->m_flBreakAfterTimeZ,
    v7,
    this->m_flBreakAfterTimeThresholdZ,
    v10,
    &this->m_flBreakAfterTimeStartTimeZ);
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
}


// CGenericConstraint::OnConstraintSetup  (line 2038, @0x00000000022ce8b0, libserver.so)  // inlines: CUtlDelegate<CPhysConstraint, CGenericConstraint>, Convert<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*), void (detail::GenericClass::*)()>, FastDelegate1<CPhysConstraint, CGenericConstraint>, UtlMakeDelegate<CPhysConstraint, CGenericConstraint, IPhysicsJoint*, void>, bindmemfunc<CPhysConstraint, void (CPhysConstraint::*)(IPhysicsJoint*)>
// calls: CPhysConstraint::OnConstraintSetup
// globals: CPhysConstraint::OnBreak(IPhysicsJoint *)
void __fastcall CGenericConstraint::OnConstraintSetup(CGenericConstraint *const this, hl_constraint_info_t *const info)
{
  HPhysicsJoint m_hJoint; // rdi
  __int64 v4; // rax
  _QWORD v5[6]; // [rsp+0h] [rbp-30h] BYREF

  CPhysConstraint::OnConstraintSetup(this, info);
  m_hJoint = this->m_hJoint;
  v4 = *m_hJoint;
  v5[0] = this;
  v5[1] = CPhysConstraint::OnBreak;
  v5[2] = 0;
  (*(v4 + 432))(m_hJoint, v5);
}


// CGenericConstraint::CreateConstraint  (line 2045, @0x00000000022bebc0, libserver.so)  // inlines: CTransform, CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, FastDelegate1, MatrixTransform, PhysicsGenericJointDesc_t, PhysicsJointDesc_t, SetLocalFrame1, SetLocalFrame2, ToCTransform, VectorAligned, operator=
// calls: MatrixInvert, CBaseEntity::EntityToWorldTransform, ConcatTransforms, MatrixTransform, CBaseEntity::VPhysicsWorld
HPhysicsJoint __fastcall CGenericConstraint::CreateConstraint(
        CGenericConstraint *const this,
        const hl_constraint_info_t *const info)
{
  IPhysicsBody *v4; // r14
  matrix3x4_t *v5; // rax
  IPhysicsBody *v6; // r13
  matrix3x4_t *v7; // rax
  vec_t z; // ecx
  __int64 v9; // rdx
  _DWORD *v10; // rax
  JointMotion_t m_nAngularMotionX; // eax
  JointMotion_t m_nAngularMotionY; // eax
  JointMotion_t m_nAngularMotionZ; // eax
  JointMotion_t m_nLinearMotionX; // eax
  float m_flLinearDampingRatioX; // xmm0_4
  JointMotion_t m_nLinearMotionY; // eax
  float m_flLinearDampingRatioZ; // xmm0_4
  JointMotion_t m_nLinearMotionZ; // eax
  float m_flLinearFrequencyX; // xmm0_4
  IVPhysics2World *v20; // rax
  CTransform out; // [rsp+10h] [rbp-250h] BYREF
  matrix3x4_t entityToWorld1; // [rsp+30h] [rbp-230h] BYREF
  matrix3x4_t worldToEntity1; // [rsp+60h] [rbp-200h] BYREF
  matrix3x4_t localFrame1; // [rsp+90h] [rbp-1D0h] BYREF
  matrix3x4_t entityToWorld2; // [rsp+C0h] [rbp-1A0h] BYREF
  matrix3x4_t worldToEntity2; // [rsp+F0h] [rbp-170h] BYREF
  matrix3x4_t localFrame2; // [rsp+120h] [rbp-140h] BYREF
  int v29; // [rsp+150h] [rbp-110h] BYREF
  IPhysicsBody *v30; // [rsp+158h] [rbp-108h]
  HPhysicsBody pBody2; // [rsp+160h] [rbp-100h]
  Vector v32; // [rsp+168h] [rbp-F8h]
  QuaternionAligned m_orientation; // [rsp+174h] [rbp-ECh]
  __int64 v34; // [rsp+184h] [rbp-DCh]
  vec_t v35; // [rsp+18Ch] [rbp-D4h]
  __int64 v36; // [rsp+190h] [rbp-D0h]
  __int64 v37; // [rsp+198h] [rbp-C8h]
  char v38; // [rsp+1A0h] [rbp-C0h]
  int v39; // [rsp+1A4h] [rbp-BCh]
  int v40; // [rsp+1A8h] [rbp-B8h]
  int v41; // [rsp+1ACh] [rbp-B4h]
  __int64 v42; // [rsp+1B0h] [rbp-B0h]
  __int64 v43; // [rsp+1B8h] [rbp-A8h]
  __int64 v44; // [rsp+1C0h] [rbp-A0h]
  JointMotion_t v45; // [rsp+1C8h] [rbp-98h]
  JointMotion_t v46; // [rsp+1CCh] [rbp-94h]
  JointMotion_t v47; // [rsp+1D0h] [rbp-90h]
  float v48; // [rsp+1D4h] [rbp-8Ch]
  float m_flLinearFrequencyY; // [rsp+1D8h] [rbp-88h]
  float m_flLinearFrequencyZ; // [rsp+1DCh] [rbp-84h]
  _DWORD v51[3]; // [rsp+1E0h] [rbp-80h] BYREF
  _DWORD v52[29]; // [rsp+1ECh] [rbp-74h] BYREF

  v4 = info->hObjects[0];
  (*(*v4 + 416LL))(&entityToWorld1, v4);
  MatrixInvert(&entityToWorld1, &worldToEntity1);
  v5 = CBaseEntity::EntityToWorldTransform(this);
  ConcatTransforms(&worldToEntity1, v5, &localFrame1);
  v6 = info->hObjects[1];
  (*(*v6 + 416LL))(&entityToWorld2, v6);
  MatrixInvert(&entityToWorld2, &worldToEntity2);
  v7 = CBaseEntity::EntityToWorldTransform(this);
  ConcatTransforms(&worldToEntity2, v7, &localFrame2);
  pBody2 = v6;
  v30 = v4;
  v29 = 13;
  v38 = 0;
  v39 = 0;
  z = vec3_origin.z;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v32.z = z;
  v35 = z;
  v9 = *&quat_identity.z;
  *&v32.x = *&vec3_origin.x;
  v34 = *&vec3_origin.x;
  v43 = 0;
  v44 = 0;
  *&m_orientation.z = v9;
  *&m_orientation.x = *&quat_identity.x;
  v36 = *&quat_identity.x;
  v10 = v51;
  v37 = v9;
  do
  {
    *(v10 - 6) = 0;
    *(++v10 - 4) = 0;
    *(v10 - 1) = 0;
    v10[2] = 0;
    v10[5] = 0;
    v10[8] = 0;
    v10[11] = 0;
    v10[14] = 0;
  }
  while ( v10 != v52 );
  out.m_vPosition.w = 0.0;
  MatrixTransform(&localFrame1, &out);
  out.m_vPosition.w = 0.0;
  v32 = out.m_vPosition.Vector;
  m_orientation = out.m_orientation;
  MatrixTransform(&localFrame2, &out);
  m_nAngularMotionX = this->m_nAngularMotionX;
  v34 = *&out.m_vPosition.x;
  v52[3] = m_nAngularMotionX;
  m_nAngularMotionY = this->m_nAngularMotionY;
  v35 = out.m_vPosition.z;
  v52[4] = m_nAngularMotionY;
  m_nAngularMotionZ = this->m_nAngularMotionZ;
  v36 = *&out.m_orientation.x;
  v52[5] = m_nAngularMotionZ;
  m_nLinearMotionX = this->m_nLinearMotionX;
  v37 = *&out.m_orientation.z;
  m_flLinearDampingRatioX = this->m_flLinearDampingRatioX;
  v45 = m_nLinearMotionX;
  m_nLinearMotionY = this->m_nLinearMotionY;
  *v51 = m_flLinearDampingRatioX;
  v51[1] = LODWORD(this->m_flLinearDampingRatioY);
  m_flLinearDampingRatioZ = this->m_flLinearDampingRatioZ;
  v46 = m_nLinearMotionY;
  m_nLinearMotionZ = this->m_nLinearMotionZ;
  *&v51[2] = m_flLinearDampingRatioZ;
  m_flLinearFrequencyX = this->m_flLinearFrequencyX;
  v47 = m_nLinearMotionZ;
  v48 = m_flLinearFrequencyX;
  m_flLinearFrequencyY = this->m_flLinearFrequencyY;
  m_flLinearFrequencyZ = this->m_flLinearFrequencyZ;
  v52[0] = LODWORD(this->m_flMaxLinearImpulseX);
  v52[1] = LODWORD(this->m_flMaxLinearImpulseY);
  v52[2] = LODWORD(this->m_flMaxLinearImpulseZ);
  v52[9] = LODWORD(this->m_flAngularDampingRatioX);
  v52[10] = LODWORD(this->m_flAngularDampingRatioY);
  v52[11] = LODWORD(this->m_flAngularDampingRatioZ);
  v52[6] = LODWORD(this->m_flAngularFrequencyX);
  v52[7] = LODWORD(this->m_flAngularFrequencyY);
  v52[8] = LODWORD(this->m_flAngularFrequencyZ);
  v52[12] = LODWORD(this->m_flMaxAngularImpulseX);
  v52[13] = LODWORD(this->m_flMaxAngularImpulseY);
  v52[14] = LODWORD(this->m_flMaxAngularImpulseZ);
  v20 = CBaseEntity::VPhysicsWorld(this);
  return (*(*v20 + 872LL))(v20, &v29);
}


// ConstraintSoundInfo::~ConstraintSoundInfo  (line 2372, @0x00000000022cf430, libserver.so)
// callers: CSchemaClassBinding<ConstraintSoundInfo>::Deallocate, CSchemaClassBinding<ConstraintSoundInfo>::DestructInPlace
void __fastcall ConstraintSoundInfo::~ConstraintSoundInfo(ConstraintSoundInfo *const this)
{
  this->_vptr_ConstraintSoundInfo = &off_3FDE980;
}


