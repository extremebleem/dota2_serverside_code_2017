// Reconstructed from DWARF by pahole; not original source.

// src/game/server/logic_playerproxy.h:12
class CLogicPlayerProxy : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_PlayerHasAmmo;  // +0x308
	COutputEvent m_PlayerHasNoAmmo;  // +0x320
	COutputEvent m_PlayerDied;  // +0x338
	COutputInt m_RequestedPlayerHealth;  // +0x350
	EHANDLE m_hPlayer;  // +0x370
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
	CLogicPlayerProxy(CLogicPlayerProxy &);
	CLogicPlayerProxy(CLogicPlayerProxy &);
	CLogicPlayerProxy();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputRequestPlayerHealth(inputdata_t &);
	void InputSetPlayerHealth(inputdata_t &);
	void InputRequestAmmoState(inputdata_t &);
	void InputEnableCappedPhysicsDamage(inputdata_t &);
	void InputDisableCappedPhysicsDamage(inputdata_t &);
	virtual void Activate(ActivateType_t);
	virtual bool PassesDamageFilter(const CTakeDamageInfo &);
	virtual ~CLogicPlayerProxy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[10] Activate
	// vtable[88] PassesDamageFilter
	// sizeof = 888
};
