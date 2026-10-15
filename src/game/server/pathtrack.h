// Reconstructed from DWARF by pahole; not original source.

// src/game/server/pathtrack.h:41
class CPathTrack : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_flRadius;  // +0x320
	float m_length;  // +0x324
	string_t m_altName;  // +0x328
	int m_nIterVal;  // +0x330
	COutputEvent m_OnPass;  // +0x338

	static int s_nCurrIterVal;
	static bool s_bIsIterating;
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
	CPathTrack(CPathTrack &);
	CPathTrack(CPathTrack &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CPathTrack();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void DrawEntityDebugOverlays(uint64);
	void ToggleAlternatePath();
	void EnableAlternatePath();
	void DisableAlternatePath();
	bool HasAlternathPath();
	void TogglePath();
	void EnablePath();
	void DisablePath();
	CPathTrack * ValidPath(int);
	CPathTrack * GetNextInDir(bool);
	CPathTrack * GetNext();
	CPathTrack * GetPrevious();
	CPathTrack * Nearest(const Vector &);
	CPathTrack * LookAhead(Vector &, float, int, CPathTrack * *);
	TrackOrientationType_t GetOrientationType();
	QAngle GetOrientation(bool);
	float GetRadius();
	void BeginIteration();
	void EndIteration();
	void Visit();
	bool HasBeenVisited();
	void Project(CPathTrack *, CPathTrack *, Vector &, float);
	void SetPrevious(CPathTrack *);
	void Link();
	CPathTrack * Instance(CEntityIndex);
	void InputPass(inputdata_t &);
	void InputToggleAlternatePath(inputdata_t &);
	void InputEnableAlternatePath(inputdata_t &);
	void InputDisableAlternatePath(inputdata_t &);
	void InputTogglePath(inputdata_t &);
	void InputEnablePath(inputdata_t &);
	void InputDisablePath(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPathTrack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[14] DrawEntityDebugOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 848
};
