// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physobj.h:49
class CPhysBox : public CBreakable {
	struct RecentlyTouchedEntity_t {
		EHANDLE m_hEntity;  // +0x0
		float m_flExpireTime;  // +0x4
		RecentlyTouchedEntity_t(EHANDLE, float);
		RecentlyTouchedEntity_t(const RecentlyTouchedEntity_t &);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	static datamap_t m_DataMap;

protected:

	int m_damageType;  // +0x574
	float m_massScale;  // +0x578
	int m_damageToEnableMotion;  // +0x57c
	float m_flForceToEnableMotion;  // +0x580
	bool m_bNotSolidToWorld;  // +0x590

	int m_iExploitableByPlayer;  // +0x594
	float m_flTouchOutputPerEntityDelay;  // +0x598

	COutputEvent m_OnDamaged;  // +0x5a0
	COutputEvent m_OnAwakened;  // +0x5b8
	COutputEvent m_OnMotionEnabled;  // +0x5d0
	COutputEvent m_OnPhysGunPickup;  // +0x5e8
	COutputEvent m_OnPhysGunPunt;  // +0x600
	COutputEvent m_OnPhysGunOnlyPickup;  // +0x618
	COutputEvent m_OnPhysGunDrop;  // +0x630
	COutputEvent m_OnPlayerUse;  // +0x648
	COutputEvent m_OnStartTouch;  // +0x660

	typedef CBreakable BaseClass;

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
	CPhysBox(CPhysBox &);
	CPhysBox(CPhysBox &);
	CPhysBox();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool CreateVPhysics();
	void Move(const Vector &);
	virtual int ObjectCaps();
	virtual void UseEx(inputdata_t &);
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual void VPhysicsUpdate(IPhysicsObject *);
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	virtual void StartTouch(CBaseEntity *);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	void EnableMotion();
	virtual bool RejectDamage(const CTakeDamageInfo &);
	virtual void ReactToDamage(const CTakeDamageInfo &);
	bool CanBePickedUpByPhyscannon();
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual void OnPhysGunDrop(CBasePlayer *, PhysGunDrop_t, int);
	virtual bool HasPreferredCarryAnglesForPlayer(CBasePlayer *);
	virtual QAngle PreferredCarryAngles();
	int ExploitableByPlayer();
	void InputWake(inputdata_t &);
	void InputSleep(inputdata_t &);
	void InputEnableMotion(inputdata_t &);
	void InputDisableMotion(inputdata_t &);
	void InputForceDrop(inputdata_t &);
	void InputDisableFloating(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPhysBox();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[49] CreateVPhysics
	// vtable[19] ObjectCaps
	// vtable[109] UseEx
	// vtable[79] DrawDebugTextOverlays
	// vtable[52] VPhysicsUpdate
	// vtable[57] VPhysicsCollision
	// vtable[111] StartTouch
	// vtable[90] OnTakeDamage
	// vtable[31] RejectDamage
	// vtable[33] ReactToDamage
	// vtable[248] OnPhysGunPickup
	// vtable[249] OnPhysGunDrop
	// vtable[250] HasPreferredCarryAnglesForPlayer
	// vtable[251] PreferredCarryAngles
	// vtable[34] GetDataDescMap
	// sizeof = 1688
};

// src/game/server/physobj.h:151
class CPhysExplosion : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bExplodeOnSpawn;  // +0x308

	float m_damage;  // +0x30c
	float m_radius;  // +0x310

	string_t m_targetEntityName;  // +0x318
	float m_flInnerRadius;  // +0x320
	float m_flPushScale;  // +0x324
	COutputEvent m_OnPushedPlayer;  // +0x328
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
	CPhysExplosion(CPhysExplosion &);
	CPhysExplosion(CPhysExplosion &);
	CPhysExplosion();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	void Explode(CBaseEntity *, CBaseEntity *);
	CBaseEntity * FindEntity(CBaseEntity *, CBaseEntity *, CBaseEntity *);
	virtual int DrawDebugTextOverlays(uint64, int);
	void InputExplode(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

private:

	float GetRadius();
	virtual ~CPhysExplosion();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 832
};

// src/game/server/physobj.h:189
class CPhysImpact : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_damage;  // +0x308
	float m_distance;  // +0x30c
	string_t m_directionEntityName;  // +0x310
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
	CPhysImpact(CPhysImpact &);
	CPhysImpact(CPhysImpact &);
	CPhysImpact();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	void InputImpact(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void PointAtEntity();
	virtual ~CPhysImpact();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[34] GetDataDescMap
	// sizeof = 792
};

// src/game/server/physobj.h:214
struct magnetted_objects_t {
private:

	HPhysicsJoint hJoint;  // +0x0
	EHANDLE hEntity;  // +0x8

	static datamap_t m_DataMap;
	magnetted_objects_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	magnetted_objects_t & operator=(const magnetted_objects_t &);

	// sizeof = 16
};

// src/game/server/physobj.h:224
class CPhysMagnet : public CBaseAnimating {
public:

private:

	static datamap_t m_DataMap;

protected:

	COutputEvent m_OnMagnetAttach;  // +0x4c0
	COutputEvent m_OnMagnetDetach;  // +0x4d8
	float m_massScale;  // +0x4f0
	float m_forceLimit;  // +0x4f4
	float m_torqueLimit;  // +0x4f8

	bool m_bActive;  // +0x518
	bool m_bHasHitSomething;  // +0x519

	float m_flTotalMass;  // +0x51c
	float m_flRadius;  // +0x520
	float m_flNextSuckTime;  // +0x524
	int m_iMaxObjectsAttached;  // +0x528
	typedef CBaseAnimating BaseClass;

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
	CPhysMagnet(CPhysMagnet &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CPhysMagnet();
	virtual ~CPhysMagnet();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	virtual void Touch(CBaseEntity *);
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	void DoMagnetSuck(CBaseEntity *);
	bool IsOn();
	int GetNumAttachedObjects();
	float GetTotalMassAttachedObjects();
	CBaseEntity * GetAttachedObject(int);
	void ResetHasHitSomething();
	bool HasHitSomething();
	void InputToggle(inputdata_t &);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputConstraintBroken(inputdata_t &);
	void DetachAll();
	void ConstraintBroken(HPhysicsJoint);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// vtable[112] Touch
	// vtable[57] VPhysicsCollision
	// sizeof = 1328
};
