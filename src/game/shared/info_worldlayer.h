// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/info_worldlayer.h:26
class CInfoWorldLayer : public CBaseEntity {
	class NetworkVar_m_worldName {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_layerName {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bWorldLayerVisible {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bEntitiesSpawned {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_pOutputOnEntitiesSpawned;  // +0x308
	bool m_bCreateAsChildSpawnGroup;  // +0x332

	SpawnGroupHandle_t m_hLayerSpawnGroup;  // +0x334
	typedef CBaseEntity BaseClass;
	typedef CInfoWorldLayer ThisClass;

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
	CInfoWorldLayer(CInfoWorldLayer &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CInfoWorldLayer();
	virtual ~CInfoWorldLayer();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > * GetEntityLumpForLayer(bool);
	void DeleteLayerSpawnGroup();
	void SpawnLayerEntityLump();
	void SpawnGroupCreationComplete(SpawnGroupHandle_t, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	void SetLayerVisibility(bool);
	void ShowWorldLayer(inputdata_t &);
	void HideWorldLayer(inputdata_t &);
	void SpawnEntities(inputdata_t &);
	void DestroyEntities(inputdata_t &);
	void ShowWorldLayerAndSpawnEntities(inputdata_t &);
	void HideWorldLayerAndDestroyEntities(inputdata_t &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// sizeof = 824
};
