// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_wearable.h:31
class CEconWearable : public CEconEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bAlwaysAllow;  // +0x6a0
	typedef CEconEntity BaseClass;

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
	CEconWearable(CEconWearable &);
	CEconWearable(CEconWearable &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CEconWearable();
	virtual bool IsWearable();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void GiveTo(CBaseEntity *);
	virtual void RemoveFrom(CBaseEntity *);
	virtual bool CanEquip(CBaseEntity *);
	virtual void Equip(CBaseCombatCharacter *);
	virtual void UnEquip(CBaseCombatCharacter *);
	virtual void OnWearerDeath();
	virtual int GetDropType();
	void SetAlwaysAllow(bool);
	bool AlwaysAllow();
	virtual void OnNewModel(HModel, HModel);
	virtual void OwnerModelChanged(bool);
	bool SelectAutoStyle(const CAutoStyleCriteria &);
	bool SetStyleOverride(style_index_t);
	void UpdateWearableBodyGroups(CBaseCombatCharacter *);
	virtual ~CEconWearable();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[271] IsWearable
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[262] GiveTo
	// vtable[272] RemoveFrom
	// vtable[273] CanEquip
	// vtable[274] Equip
	// vtable[275] UnEquip
	// vtable[276] OnWearerDeath
	// vtable[277] GetDropType
	// vtable[39] OnNewModel
	// vtable[278] OwnerModelChanged
	// sizeof = 1704
};

// src/game/shared/econ/econ_wearable.h:92
class CTFWearableItem : public CEconWearable {
public:

private:

	static datamap_t m_DataMap;
	typedef CEconWearable BaseClass;

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
	CTFWearableItem(CTFWearableItem &);
	CTFWearableItem(CTFWearableItem &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CTFWearableItem();
	virtual ~CTFWearableItem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// sizeof = 1704
};
