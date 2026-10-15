// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseprop.h:26
class CBaseProp : public CBaseAnimating {
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
	typedef CBaseAnimating BaseClass;
	CBaseProp(CBaseProp &);
	CBaseProp(CBaseProp &);
	CBaseProp();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	void CalculateBlockLOS();
	int ParsePropData();
	virtual void DrawEntityDebugOverlays(uint64);
	void ForceStartGlowing();
	void ForceStopGlowing();
	void SetGlowOverrideColor(const Vector &);
	void SetGlowRange(int);
	virtual bool IsAlive();
	virtual bool OverridePropdata();
	virtual ~CBaseProp();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[14] DrawEntityDebugOverlays
	// vtable[251] IsAlive
	// vtable[252] OverridePropdata
	// sizeof = 1216
};
