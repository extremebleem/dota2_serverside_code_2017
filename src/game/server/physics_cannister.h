// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physics_cannister.h:18
class CThrustController : public IMotionEvent {
public:

private:

	static datamap_t m_DataMap;

	AngularImpulse m_torqueVector;  // +0x14
	float m_thrust;  // +0x20
	CThrustController(CThrustController &);
	CThrustController(const CThrustController &);
	~CThrustController();
	CThrustController();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual simresult_e Simulate(IPhysicsMotionController *, IPhysicsObject *, float, Vector &, AngularImpulse &);
	void CalcThrust(const Vector &, const Vector &, IPhysicsObject *);
	CThrustController & operator=(const CThrustController &);

	// vtable[1] Schema_DynamicBinding
	// vtable[0] Simulate
	// sizeof = 40
};

// src/game/server/physics_cannister.h:45
class CPhysicsCannister : public CBaseCombatCharacter, public CDefaultPlayerPickupVPhysics {
public:

private:

	static datamap_t m_DataMap;

	bool m_active;  // +0x7a8

	float m_thrustTime;  // +0x7ac
	float m_damage;  // +0x7b0
	float m_damageRadius;  // +0x7b4
	float m_activateTime;  // +0x7b8

	string_t m_gasSound;  // +0x7c0
	bool m_bFired;  // +0x7c8

	COutputEvent m_onActivate;  // +0x7d0
	COutputEvent m_OnAwakened;  // +0x7e8
	float m_flLastPhysicsInfluenceTime;  // +0x804
	EHANDLE m_hLauncher;  // +0x808
	typedef CBaseCombatCharacter BaseClass;

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
	CPhysicsCannister(CPhysicsCannister &);
	CPhysicsCannister();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CPhysicsCannister();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnRestore();
	virtual bool CreateVPhysics();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void VPhysicsUpdate(IPhysicsObject *);
	virtual QAngle PreferredCarryAngles();
	virtual bool HasPreferredCarryAnglesForPlayer(CBasePlayer *);
	void InputActivate(inputdata_t &);
	void InputDeactivate(inputdata_t &);
	void InputExplode(inputdata_t &);
	void InputWake(inputdata_t &);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual int ObjectCaps();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void CannisterActivate(CBaseEntity *, const Vector &);
	void CannisterFire(CBaseEntity *);
	void Deactivate();
	void Explode(CBaseEntity *);
	void ExplodeTouch(CBaseEntity *);
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	virtual bool IsAlive();
	virtual void TraceAttack(const CTakeDamageInfo &, const Vector &, trace_t *);
	void ShutdownJet();
	void BeginShutdownThink();
	virtual bool OnAttemptPhysGunPickup(CBasePlayer *, PhysGunPickup_t);
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual void OnPhysGunDrop(CBasePlayer *, PhysGunDrop_t, int);
	virtual CBasePlayer * HasPhysicsAttacker(float);
	virtual bool ShouldPuntUseLaunchForces(PhysGunForce_t);
	virtual AngularImpulse PhysGunLaunchAngularImpulse();
	virtual Vector PhysGunLaunchVelocity(const Vector &, float);

protected:

	void SetPhysicsAttacker(CBasePlayer *, float);

private:

	Vector CalcLocalThrust(const Vector &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[18] OnRestore
	// vtable[49] CreateVPhysics
	// vtable[34] GetDataDescMap
	// vtable[52] VPhysicsUpdate
	// vtable[370] PreferredCarryAngles
	// vtable[371] HasPreferredCarryAnglesForPlayer
	// vtable[90] OnTakeDamage
	// vtable[19] ObjectCaps
	// vtable[108] Use
	// vtable[57] VPhysicsCollision
	// vtable[372] IsAlive
	// vtable[135] TraceAttack
	// vtable[373] OnAttemptPhysGunPickup
	// vtable[374] OnPhysGunPickup
	// vtable[375] OnPhysGunDrop
	// vtable[190] HasPhysicsAttacker
	// vtable[376] ShouldPuntUseLaunchForces
	// vtable[377] PhysGunLaunchAngularImpulse
	// vtable[378] PhysGunLaunchVelocity
	// sizeof = 2064
};
