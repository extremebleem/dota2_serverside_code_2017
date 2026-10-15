// Reconstructed from DWARF by pahole; not original source.

// src/game/server/lights.h:18
class CLight : public CPointEntity {
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

	int m_iStyle;  // +0x308
	int m_iDefaultStyle;  // +0x30c
	string_t m_iszPattern;  // +0x310
	char m_iCurrentFade;  // +0x318
	char m_iTargetFade;  // +0x319
	typedef CPointEntity BaseClass;
	CLight(CLight &);
	CLight(CLight &);
	CLight();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void FadeThink();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void TurnOn();
	void TurnOff();
	void Toggle();
	void InputSetPattern(inputdata_t &);
	void InputFadeToPattern(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[108] Use
	// vtable[34] GetDataDescMap
	// sizeof = 800
};
