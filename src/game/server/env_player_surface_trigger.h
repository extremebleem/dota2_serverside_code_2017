// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_player_surface_trigger.h:19
class CEnvPlayerSurfaceTrigger : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_iTargetGameMaterial;  // +0x308
	int m_iCurrentGameMaterial;  // +0x30c
	bool m_bDisabled;  // +0x310

	COutputEvent m_OnSurfaceChangedToTarget;  // +0x318
	COutputEvent m_OnSurfaceChangedFromTarget;  // +0x330
	typedef CPointEntity BaseClass;

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
	CEnvPlayerSurfaceTrigger(CEnvPlayerSurfaceTrigger &);
	CEnvPlayerSurfaceTrigger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvPlayerSurfaceTrigger();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnRestore();
	void SetPlayerSurface(CBasePlayer *, char);
	void UpdateMaterialThink();
	void PlayerSurfaceChanged(CBasePlayer *, char);
	void InputDisable(inputdata_t &);
	void InputEnable(inputdata_t &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[18] OnRestore
	// sizeof = 840
};
