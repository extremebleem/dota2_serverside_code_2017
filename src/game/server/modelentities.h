// Reconstructed from DWARF by pahole; not original source.

// src/game/server/modelentities.h:23
class CFuncBrush : public CBaseModelEntity {
	enum BrushSolidities_e {
		BRUSHSOLID_TOGGLE = 0,
		BRUSHSOLID_NEVER = 0x1,
		BRUSHSOLID_ALWAYS = 0x2,
	};

public:

private:

protected:

	int m_iDisabled;  // +0x484
	bool m_bSolidBsp;  // +0x488

	string_t m_iszExcludedClass;  // +0x490
	bool m_bInvertExclusion;  // +0x498
	bool m_bScriptedMovement;  // +0x499

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
	CFuncBrush(CFuncBrush &);
	CFuncBrush(CFuncBrush &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CFuncBrush();
	string_t GetExcludedClass();
	bool GetInvertExclusion();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool CreateVPhysics();
	virtual int ObjectCaps();
	virtual int DrawDebugTextOverlays(uint64, int);
	void TurnOff();
	void TurnOn();
	void InputTurnOff(inputdata_t &);
	void InputTurnOn(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputSetExcluded(inputdata_t &);
	void InputSetInvert(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool IsOn();
	virtual ~CFuncBrush();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[49] CreateVPhysics
	// vtable[19] ObjectCaps
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[214] IsOn
	// sizeof = 1184
};
