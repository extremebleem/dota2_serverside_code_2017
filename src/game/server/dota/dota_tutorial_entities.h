// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_tutorial_entities.h:14
class CDotaTutorialNPCBlocker : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iOtherBlockerName;  // +0x310
	EHANDLE m_hOtherBlocker;  // +0x318
	bool m_bEndPoint;  // +0x31c
	bool m_bEnabled;  // +0x31d
	bool m_bStartDisabled;  // +0x31e
	bool m_bHidden;  // +0x31f
	typedef CBaseEntity BaseClass;

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
	CDotaTutorialNPCBlocker(CDotaTutorialNPCBlocker &);
	CDotaTutorialNPCBlocker(CDotaTutorialNPCBlocker &);
	CDotaTutorialNPCBlocker();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	virtual void Activate(ActivateType_t);
	void SetOtherBlocker(CBaseEntity *);
	void SetEnabled(bool);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void InputToggle(inputdata_t &);
	virtual ~CDotaTutorialNPCBlocker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// vtable[10] Activate
	// sizeof = 800
};
