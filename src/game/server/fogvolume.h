// Reconstructed from DWARF by pahole; not original source.

// src/game/server/fogvolume.h:18
class CFogVolume : public CServerOnlyModelEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_fogName;  // +0x480
	string_t m_postProcessName;  // +0x488
	string_t m_colorCorrectionName;  // +0x490
	bool m_bDisabled;  // +0x4a4
	bool m_bInFogVolumesList;  // +0x4a5
	typedef CServerOnlyModelEntity BaseClass;

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
	CFogVolume(CFogVolume &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CFogVolume();
	virtual ~CFogVolume();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	CFogVolume * FindFogVolumeForPosition(const Vector &);
	const char * GetFogControllerName();
	CFogController * GetFogController();
	CPostProcessController * GetPostProcessController();
	CColorCorrection * GetColorCorrectionController();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void AddToGlobalList();
	void RemoveFromGlobalList();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// sizeof = 1192
};
