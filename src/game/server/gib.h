// Reconstructed from DWARF by pahole; not original source.

// src/game/server/gib.h:30
class CGib : public CBaseAnimating, public CDefaultPlayerPickupVPhysics {
public:

private:

	static datamap_t m_DataMap;

	int m_cBloodDecals;  // +0x4c8
	int m_material;  // +0x4cc
	float m_lifeTime;  // +0x4d0
	bool m_bForceRemove;  // +0x4d4

	float m_flLastPhysicsInfluenceTime;  // +0x4dc
	int m_bloodColor;  // +0x4e0
	EHANDLE m_hSprite;  // +0x4e4
	EHANDLE m_hFlame;  // +0x4e8
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
	CGib(CGib &);
	CGib(CGib &);
	CGib();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void Init();
	void Init(float);
	void InitGib(CBaseEntity *, float, float);
	void BounceGibTouch(CBaseEntity *);
	void StickyGibTouch(CBaseEntity *);
	void WaitTillLand();
	void DieThink();
	void LimitVelocity();
	virtual bool SUB_AllowedToFade();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual int ObjectCaps();
	void SpawnHeadGib(CBaseEntity *);
	void SpawnRandomGibs(CBaseEntity *, int, GibType_e);
	void SpawnStickyGibs(CBaseEntity *, Vector, int);
	void SpawnSpecificGibs(CBaseEntity *, int, float, float, const char *, float);
	void SetPhysicsAttacker(CBasePlayer *, float);
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual void OnPhysGunDrop(CBasePlayer *, PhysGunDrop_t, int);
	virtual CBasePlayer * HasPhysicsAttacker(float);
	void SetSprite(CBaseEntity *);
	CBaseEntity * GetSprite();
	void SetFlame(CBaseEntity *);
	CBaseEntity * GetFlame();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void SetBloodColor(int);
	void AdjustVelocityBasedOnHealth(int, Vector &);
	virtual ~CGib();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[210] SUB_AllowedToFade
	// vtable[108] Use
	// vtable[19] ObjectCaps
	// vtable[251] OnPhysGunPickup
	// vtable[252] OnPhysGunDrop
	// vtable[190] HasPhysicsAttacker
	// vtable[34] GetDataDescMap
	// sizeof = 1264
};

// src/game/server/gib.h:107
class CRagGib : public CBaseAnimating {
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
	CRagGib(CRagGib &);
	CRagGib(CRagGib &);
	CRagGib();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void Init(const char *, const Vector &, const Vector &, float);
	virtual ~CRagGib();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1216
};
