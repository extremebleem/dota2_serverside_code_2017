// Reconstructed from DWARF by pahole; not original source.

// src/game/server/pathcorner.h:10
class CPathCorner : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_flWait;  // +0x308
	float m_flRadius;  // +0x30c
	COutputEvent m_OnPass;  // +0x310
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
	CPathCorner(CPathCorner &);
	CPathCorner(CPathCorner &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	CPathCorner();
	virtual float GetDelay();
	virtual float GetAutoAimRadius();
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual void DrawEntityDebugOverlays(uint64);
	void InputSetNextPathCorner(inputdata_t &);
	void InputInPass(inputdata_t &);
	CUtlSymbolLarge GetMoveActivityName();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPathCorner();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[95] GetDelay
	// vtable[86] GetAutoAimRadius
	// vtable[79] DrawDebugTextOverlays
	// vtable[14] DrawEntityDebugOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 816
};
