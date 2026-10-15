// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_tree.h:16
class CDOTA_MapTree : public CDOTA_BinaryObject, public CDOTA_Tree {
public:

private:

	static datamap_t m_DataMap;
	typedef CDOTA_BinaryObject BaseClass;

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
	CDOTA_MapTree(CDOTA_MapTree &);
	CDOTA_MapTree(CDOTA_MapTree &);
	CDOTA_MapTree();
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
	virtual void UpdateOnRemove();
	virtual void SetActive(bool, int);
	virtual CBaseEntity * GetEntity();
	virtual void CutDown(int, int);
	void CutDownEx(float, int);
	virtual const char * GetObstructionName();
	void GrowBack();
	void InputGrowBack(inputdata_t &);
	void InputCutDown(inputdata_t &);
	void InputCutDownForever(inputdata_t &);
	void Script_CutDown(int);
	void Script_CutDownRegrowAfter(float, int);
	float DefaultRegrowTime();
	bool Script_IsStanding();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_MapTree();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[207] SetActive
	// vtable[208] GetEntity
	// vtable[209] CutDown
	// vtable[210] GetObstructionName
	// vtable[4] GetScriptDesc
	// sizeof = 816
};
