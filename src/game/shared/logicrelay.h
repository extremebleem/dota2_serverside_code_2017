// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/logicrelay.h:15
class CLogicRelay : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnTrigger;  // +0x308
	COutputEvent m_OnSpawn;  // +0x320
	bool m_bDisabled;  // +0x338
	bool m_bWaitForRefire;  // +0x339
	bool m_bTriggerOnce;  // +0x33a
	bool m_bFastRetrigger;  // +0x33b
	bool m_bPassthoughCaller;  // +0x33c
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
	CLogicRelay(CLogicRelay &);
	CLogicRelay(CLogicRelay &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CLogicRelay();
	virtual void Activate(ActivateType_t);
	virtual void Think();
	void InputEnable(inputdata_t &);
	void InputEnableRefire(inputdata_t &);
	void InputDisable(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputTrigger(inputdata_t &);
	void InputCancelPending(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicRelay();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[10] Activate
	// vtable[117] Think
	// vtable[34] GetDataDescMap
	// sizeof = 832
};
