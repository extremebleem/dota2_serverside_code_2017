// Reconstructed from DWARF by pahole; not original source.

// src/game/server/logicentities.h:17
class CLogicBranch : public CLogicalEntity {
	enum LogicBranchFire_t {
		LOGIC_BRANCH_FIRE = 0,
		LOGIC_BRANCH_NO_FIRE = 0x1,
	};

public:

private:

	bool m_bInValue;  // +0x308

	COutputEvent m_OnTrue;  // +0x328
	COutputEvent m_OnFalse;  // +0x340

	static datamap_t m_DataMap;
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
	CLogicBranch(CLogicBranch &);
	CLogicBranch(CLogicBranch &);
	CLogicBranch();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void UpdateOnRemove();
	void AddLogicBranchListener(CBaseEntity *);
	bool GetLogicBranchState();
	virtual int DrawDebugTextOverlays(uint64, int);
	void InputSetValue(inputdata_t &);
	void InputSetValueTest(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputToggleTest(inputdata_t &);
	void InputTest(inputdata_t &);
	void UpdateValue(bool, CBaseEntity *, LogicBranchFire_t);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicBranch();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[11] UpdateOnRemove
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 856
};
