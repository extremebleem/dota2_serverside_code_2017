// Reconstructed from DWARF by pahole; not original source.

// src/game/server/markup_volume.h:20
class CMarkupVolume : public CBaseModelEntity {
public:

private:

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
	CMarkupVolume(CMarkupVolume &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CMarkupVolume();
	virtual ~CMarkupVolume();
	void GetOBBBounds(Vector *, Vector *, matrix3x4_t *);
	bool ContainsPoint(const Vector &);
	bool OverlapsExtent(const Extent &);
	bool OverlapsMarkupVolume(const CMarkupVolume *);

protected:

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	/* tag__fprintf: const_type tag not supported! */;
	CRenderComponent * GetComponent<CRenderComponent>(CRenderComponent *);
	CRenderComponent * GetComponent<CRenderComponent>();

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 1152
};

// src/game/server/markup_volume.h:49
class CMarkupVolumeTagged : public CMarkupVolume {
public:

private:

	static datamap_t m_DataMap;

	bool m_bIsGroup;  // +0x4b0
	bool m_bGroupByPrefab;  // +0x4b1
	bool m_bGroupByVolume;  // +0x4b2
	bool m_bGroupOtherGroups;  // +0x4b3
	bool m_bIsInGroup;  // +0x4b4
	typedef CMarkupVolume BaseClass;

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
	CMarkupVolumeTagged(CMarkupVolumeTagged &);
	CMarkupVolumeTagged(CMarkupVolumeTagged &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CMarkupVolumeTagged();
	virtual int DrawDebugTextOverlays(uint64, int);
	bool HasTag(const char *);
	void Search_HasTag(CUtlVector<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> > *, const char *);
	void Search_HasClass(CUtlVector<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> > *, const char *);
	void Search_OverlapsPoint(CUtlVector<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> > *, const Vector &);
	void Search_OverlapsExtent(CUtlVector<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> > *, const Extent &);
	void Search_OverlapsPoint_HasTag(CUtlVector<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> > *, const Vector &, const char *);
	void Search_OverlapsExtent_HasTag(CUtlVector<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> > *, const Extent &, const char *);
	void Search_General(CUtlVector<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> > *, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char *, const CMarkupVolumeTagged *);
	ScriptVariant_t Script_Search(ScriptVariant_t, const char *, ScriptVariant_t);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	void Search(CUtlVector<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> > *, const CUtlVector<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> > *, const CUtlVector<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> > *);
	bool Search_MatchList(const CMarkupVolumeTagged &, const CUtlVector<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> > &, bool);
	bool Search_Match(const CMarkupVolumeTagged &, const MarkupSearchQuery_t &);
	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CMarkupVolumeTagged();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[79] DrawDebugTextOverlays
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[4] GetScriptDesc
	// sizeof = 1208
};
