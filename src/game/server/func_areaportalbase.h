// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_areaportalbase.h:18
class CFuncAreaPortalBase : public CBaseModelEntity {
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

	static datamap_t m_DataMap;

	int m_portalNumber;  // +0x480
	int m_iPortalVersion;  // +0x484
	short unsigned int m_AreaPortalsElement;  // +0x488
	typedef CBaseModelEntity BaseClass;
	CFuncAreaPortalBase(CFuncAreaPortalBase &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CFuncAreaPortalBase();
	virtual ~CFuncAreaPortalBase();
	virtual int ObjectCaps();
	virtual bool UpdateVisibility(const CUtlVector<Vector, CUtlMemory<Vector, int> > &, float, bool &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[19] ObjectCaps
	// vtable[214] UpdateVisibility
	// sizeof = 1168
};
