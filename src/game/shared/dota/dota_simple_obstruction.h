// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_simple_obstruction.h:24
class CDOTA_SimpleObstruction : public CBaseEntity, public CObstructionObject {
	class NetworkVar_m_bEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bBlockFoW {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	uint32 m_nOccluderIndex;  // +0x320
	bool m_bBlockingGridNav;  // +0x324
	typedef CBaseEntity BaseClass;
	typedef CDOTA_SimpleObstruction ThisClass;

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
	CDOTA_SimpleObstruction(CDOTA_SimpleObstruction &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_SimpleObstruction();
	virtual ~CDOTA_SimpleObstruction();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UpdateOnRemove();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputToggle(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	bool IsEnabled();
	void SetEnabled(bool, bool);
	virtual float GetObstructionRadius();
	virtual float GetObstructionCollisionPadding();
	virtual ObstructionRelationshipClass_t GetObstructionRelationshipClass();
	virtual ObstructionQuerySetClass_t GetObstructionQuerySetClass();
	virtual CBaseEntity * GetObstructionBaseEntity();
	virtual const char * GetObstructionName();
	virtual ObstructionType_t GetObstructionType();
	void SetGridNavBlocked(bool);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[34] GetDataDescMap
	// vtable[207] GetObstructionRadius
	// vtable[208] GetObstructionCollisionPadding
	// vtable[209] GetObstructionRelationshipClass
	// vtable[210] GetObstructionQuerySetClass
	// vtable[211] GetObstructionBaseEntity
	// vtable[212] GetObstructionName
	// vtable[213] GetObstructionType
	// vtable[4] GetScriptDesc
	// sizeof = 808
};
