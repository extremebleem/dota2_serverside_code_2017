// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_wards.h:20
class CDOTA_NPC_Observer_Ward : public CDOTA_BaseNPC_Additive {
public:

private:

	static datamap_t m_DataMap;

protected:

	int m_iDuration;  // +0x1198
	typedef CDOTA_BaseNPC_Additive BaseClass;

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
	CDOTA_NPC_Observer_Ward(CDOTA_NPC_Observer_Ward &);
	CDOTA_NPC_Observer_Ward(CDOTA_NPC_Observer_Ward &);
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
	CDOTA_NPC_Observer_Ward();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void PostSpawn();
	virtual void OnDying();
	virtual bool WantsToSaveWithLifetime();
	virtual void CalculateActivityModifiers(Activity);
	virtual const char * GetPortraitActivityModifier();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	void SetDuration(int);
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);

private:

	virtual CEconItemView * ComputeOverriddenGeneratingItem(const CEntityKeyValues *);
	virtual ~CDOTA_NPC_Observer_Ward();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[92] Event_Killed
	// vtable[490] PostSpawn
	// vtable[469] OnDying
	// vtable[468] WantsToSaveWithLifetime
	// vtable[442] CalculateActivityModifiers
	// vtable[491] GetPortraitActivityModifier
	// vtable[466] OnSaveState
	// vtable[467] OnLoadState
	// vtable[65] ShouldTransmit
	// vtable[486] ComputeOverriddenGeneratingItem
	// sizeof = 4512
};

// src/game/shared/dota/items/dota_item_wards.h:72
class CDOTA_NPC_Observer_Ward_TrueSight : public CDOTA_NPC_Observer_Ward {
public:

private:

	static datamap_t m_DataMap;

	int m_iTrueSight;  // +0x119c
	typedef CDOTA_NPC_Observer_Ward BaseClass;

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
	CDOTA_NPC_Observer_Ward_TrueSight(CDOTA_NPC_Observer_Ward_TrueSight &);
	CDOTA_NPC_Observer_Ward_TrueSight(CDOTA_NPC_Observer_Ward_TrueSight &);
	CDOTA_NPC_Observer_Ward_TrueSight();
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
	virtual void PostSpawn();
	virtual void OnDying();
	virtual void CalculateActivityModifiers(Activity);
	virtual const char * GetPortraitActivityModifier();
	virtual ~CDOTA_NPC_Observer_Ward_TrueSight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[490] PostSpawn
	// vtable[469] OnDying
	// vtable[442] CalculateActivityModifiers
	// vtable[491] GetPortraitActivityModifier
	// sizeof = 4520
};

// src/game/shared/dota/items/dota_item_wards.h:92
class CDOTA_NoWardTrigger : public CBaseTrigger {
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
	CDOTA_NoWardTrigger(CDOTA_NoWardTrigger &);
	CDOTA_NoWardTrigger(CDOTA_NoWardTrigger &);
	CDOTA_NoWardTrigger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_NoWardTrigger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// sizeof = 1480
};
