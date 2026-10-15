// Reconstructed from DWARF by pahole; not original source.

// src/game/server/item_generic.h:23
class CItemGenericTriggerHelper : public CBaseModelEntity {
public:

private:

	static datamap_t m_DataMap;

	typedef CBaseModelEntity BaseClass;

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
	CItemGenericTriggerHelper(CItemGenericTriggerHelper &);
	CItemGenericTriggerHelper(CItemGenericTriggerHelper &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CItemGenericTriggerHelper();
	void InitTriggerHelper(CItemGeneric *, float);
	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	void ItemGenericTriggerHelperTouch(CBaseEntity *);
	virtual ~CItemGenericTriggerHelper();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// sizeof = 1160
};

// src/game/server/item_generic.h:46
class CItemGeneric : public CItem {
public:

private:

	static datamap_t m_DataMap;

	bool m_bHasTriggerRadius;  // +0x528
	bool m_bHasPickupRadius;  // +0x529

	float m_flPickupRadiusSqr;  // +0x52c
	float m_flTriggerRadiusSqr;  // +0x530
	float m_flLastPickupCheck;  // +0x534
	bool m_bPlayerCounterListenerAdded;  // +0x538
	bool m_bPlayerInTriggerRadius;  // +0x539

	HParticleSystemDefinitionStrong m_hSpawnParticleEffect;  // +0x540
	string_t m_pAmbientSoundEffect;  // +0x548
	bool m_bAutoStartAmbientSound;  // +0x550

	string_t m_pSpawnScriptFunction;  // +0x558
	HParticleSystemDefinitionStrong m_hPickupParticleEffect;  // +0x560
	string_t m_pPickupSoundEffect;  // +0x568
	string_t m_pPickupScriptFunction;  // +0x570
	HParticleSystemDefinitionStrong m_hTimeoutParticleEffect;  // +0x578
	string_t m_pTimeoutSoundEffect;  // +0x580
	string_t m_pTimeoutScriptFunction;  // +0x588
	string_t m_pPickupFilterName;  // +0x590

	COutputEvent m_OnPickup;  // +0x5a0
	COutputEvent m_OnTimeout;  // +0x5b8
	COutputEvent m_OnTriggerStartTouch;  // +0x5d0
	COutputEvent m_OnTriggerTouch;  // +0x5e8
	COutputEvent m_OnTriggerEndTouch;  // +0x600
	string_t m_pAllowPickupScriptFunction;  // +0x618
	float m_flPickupRadius;  // +0x620
	float m_flTriggerRadius;  // +0x624
	bool m_bPhysStartAsleep;  // +0x628

	string_t m_pTriggerSoundEffect;  // +0x630
	bool m_bGlowWhenInTrigger;  // +0x638
	bool m_bUseable;  // +0x63d

	typedef CItem BaseClass;

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
	CItemGeneric(CItemGeneric &);
	CItemGeneric(CItemGeneric &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CItemGeneric();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	virtual void PostClientActive();
	virtual void UpdateOnRemove();
	virtual bool VPhysicsIsFlesh();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual UsePriorityType GetUsePriority(CBaseEntity *);
	virtual UseType GetUseType(CBaseEntity *);
	virtual int ObjectCaps();
	virtual void Touch(CBaseEntity *);
	void InputStartAmbientSound(inputdata_t &);
	void InputStopAmbientSound(inputdata_t &);
	void InputToggleAmbientSound(inputdata_t &);
	void InputStartGlowing(inputdata_t &);
	void InputStopGlowing(inputdata_t &);
	void InputSetGlowOverride(inputdata_t &);
	void InputSetGlowRange(inputdata_t &);
	void OnHelperStartTrigger(CBaseEntity *);
	void OnHelperTrigger(CBaseEntity *);
	void OnHelperEndTrigger(CBaseEntity *);
	void ItemGenericTouch(CBaseEntity *);
	void StartAmbientSound();
	void StopAmbientSound();
	void AutoRemoveThink();
	void DoPickup(CBaseEntity *);
	bool AllowPickup(CBaseEntity *);
	bool ConsiderForPickup(CBaseEntity *);
	void UpdateDerivedGlowState();
	void AddPlayerCounterListener();
	virtual void SetupTouchFunction();
	virtual ~CItemGeneric();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[67] PostClientActive
	// vtable[11] UpdateOnRemove
	// vtable[54] VPhysicsIsFlesh
	// vtable[108] Use
	// vtable[107] GetUsePriority
	// vtable[71] GetUseType
	// vtable[19] ObjectCaps
	// vtable[112] Touch
	// vtable[258] SetupTouchFunction
	// sizeof = 1608
};
