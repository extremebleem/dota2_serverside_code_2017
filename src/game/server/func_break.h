// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_break.h:69
class CBreakable : public CBaseModelEntity, public IBreakableWithPropData, public CDefaultPlayerPickupVPhysics {
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

	static const char * pSpawnObjects[27];
	static datamap_t m_DataMap;

protected:

	EHANDLE m_hBreaker;  // +0x494
private:

	int m_iPrevHealth;  // +0x498

	string_t m_iszGibModel;  // +0x4b0
	string_t m_iszSpawnObject;  // +0x4b8
	int m_ExplosionMagnitude;  // +0x4c0
	float m_flPressureDelay;  // +0x4c4
	int m_iMinHealthDmg;  // +0x4c8
	bool m_bTookPhysicsDamage;  // +0x4cc

	int m_breakableType;  // +0x4d0

	string_t m_iszPropData;  // +0x4d8
	string_t m_iszModelName;  // +0x4e0
protected:

	float m_impactEnergyScale;  // +0x4e8

	COutputEvent m_OnBreak;  // +0x4f0
	COutputFloat m_OnHealthChanged;  // +0x508
	float m_flDmgModBullet;  // +0x528
	float m_flDmgModClub;  // +0x52c
	float m_flDmgModExplosive;  // +0x530
	float m_flDmgModFire;  // +0x534
	string_t m_iszPhysicsDamageTableName;  // +0x538
	string_t m_iszBreakableModel;  // +0x540
	int m_iBreakableSkin;  // +0x548
	int m_iBreakableCount;  // +0x54c
	int m_iMaxBreakableSize;  // +0x550

	string_t m_iszBasePropData;  // +0x558
	int m_iInteractions;  // +0x560
	float m_explodeRadius;  // +0x568
private:

	float m_flLastPhysicsInfluenceTime;  // +0x570
	typedef CBaseModelEntity BaseClass;
	CBreakable(CBreakable &);
	CBreakable(CBreakable &);
	CBreakable();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void ParsePropData();
	virtual bool CreateVPhysics();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	void BreakTouch(CBaseEntity *);
	void DamageSound();
	void Break(CBaseEntity *);
	void InputAddHealth(inputdata_t &);
	void InputBreak(inputdata_t &);
	void InputRemoveHealth(inputdata_t &);
	void InputSetHealth(inputdata_t &);
	void InputSetMass(inputdata_t &);
	virtual bool RejectDamage(const CTakeDamageInfo &);
	virtual void ModifyDamage(CTakeDamageInfo &);
	virtual void ReactToDamage(const CTakeDamageInfo &);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void TraceAttack(const CTakeDamageInfo &, const Vector &, trace_t *);
	bool IsBreakable();
	bool SparkWhenHit();
	virtual const char * DamageDecal(int, int);
	virtual void Die();
	void ResetOnGroundFlags();
	bool Explodable();
	Materials GetMaterialType();
	void MaterialSoundRandom(CEntityIndex, Materials, float);
	const char * MaterialSound(Materials);
	virtual int DrawDebugTextOverlays(uint64, int);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void SetDmgModBullet(float);
	virtual void SetDmgModClub(float);
	virtual void SetDmgModExplosive(float);
	virtual void SetDmgModFire(float);
	virtual float GetDmgModBullet();
	virtual float GetDmgModClub();
	virtual float GetDmgModExplosive();
	virtual float GetDmgModFire();
	virtual void SetExplosiveRadius(float);
	virtual void SetExplosiveDamage(float);
	virtual float GetExplosiveRadius();
	virtual float GetExplosiveDamage();
	virtual void SetPhysicsDamageTable(string_t);
	virtual string_t GetPhysicsDamageTable();
	virtual void SetBreakableModel(string_t);
	virtual string_t GetBreakableModel();
	virtual void SetBreakableSkin(int);
	virtual int GetBreakableSkin();
	virtual void SetBreakableCount(int);
	virtual int GetBreakableCount();
	virtual void SetMaxBreakableSize(int);
	virtual int GetMaxBreakableSize();
	virtual void SetPropDataBlocksLOS(bool);
	virtual void SetPropDataIsAIWalkable(bool);
	virtual void SetBasePropData(string_t);
	virtual string_t GetBasePropData();
	virtual void SetInteraction(propdata_interactions_t);
	virtual bool HasInteraction(propdata_interactions_t);
	virtual void SetPhysicsMode(int);
	virtual int GetPhysicsMode();
	virtual void SetMultiplayerBreakMode(mp_break_t);
	virtual mp_break_t GetMultiplayerBreakMode();
	virtual int GetMinHealthDamage();
	bool UpdateHealth(int, CBaseEntity *);
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual void OnPhysGunDrop(CBasePlayer *, PhysGunDrop_t, int);
	virtual CBasePlayer * HasPhysicsAttacker(float);
	virtual ~CBreakable();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[49] CreateVPhysics
	// vtable[6] Precache
	// vtable[57] VPhysicsCollision
	// vtable[31] RejectDamage
	// vtable[32] ModifyDamage
	// vtable[33] ReactToDamage
	// vtable[90] OnTakeDamage
	// vtable[92] Event_Killed
	// vtable[135] TraceAttack
	// vtable[208] DamageDecal
	// vtable[214] Die
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[215] SetDmgModBullet
	// vtable[216] SetDmgModClub
	// vtable[217] SetDmgModExplosive
	// vtable[218] SetDmgModFire
	// vtable[219] GetDmgModBullet
	// vtable[220] GetDmgModClub
	// vtable[221] GetDmgModExplosive
	// vtable[222] GetDmgModFire
	// vtable[223] SetExplosiveRadius
	// vtable[224] SetExplosiveDamage
	// vtable[225] GetExplosiveRadius
	// vtable[226] GetExplosiveDamage
	// vtable[227] SetPhysicsDamageTable
	// vtable[228] GetPhysicsDamageTable
	// vtable[229] SetBreakableModel
	// vtable[230] GetBreakableModel
	// vtable[231] SetBreakableSkin
	// vtable[232] GetBreakableSkin
	// vtable[233] SetBreakableCount
	// vtable[234] GetBreakableCount
	// vtable[235] SetMaxBreakableSize
	// vtable[236] GetMaxBreakableSize
	// vtable[237] SetPropDataBlocksLOS
	// vtable[238] SetPropDataIsAIWalkable
	// vtable[239] SetBasePropData
	// vtable[240] GetBasePropData
	// vtable[241] SetInteraction
	// vtable[242] HasInteraction
	// vtable[243] SetPhysicsMode
	// vtable[244] GetPhysicsMode
	// vtable[245] SetMultiplayerBreakMode
	// vtable[246] GetMultiplayerBreakMode
	// vtable[247] GetMinHealthDamage
	// vtable[248] OnPhysGunPickup
	// vtable[249] OnPhysGunDrop
	// vtable[190] HasPhysicsAttacker
	// sizeof = 1400
};
