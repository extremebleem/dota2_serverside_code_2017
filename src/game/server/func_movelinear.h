// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_movelinear.h:17
class CFuncMoveLinear : public CBaseToggle {
public:

private:

	static datamap_t m_DataMap;

	bool m_bMoveDirIsLocal;  // +0x50c

	string_t m_soundStart;  // +0x510
	string_t m_soundStop;  // +0x518
	string_t m_currentSound;  // +0x520
	float m_flBlockDamage;  // +0x528
	float m_flStartPosition;  // +0x52c
	float m_flMoveDistance;  // +0x530

	COutputEvent m_OnFullyOpen;  // +0x540
	COutputEvent m_OnFullyClosed;  // +0x558
	typedef CBaseToggle BaseClass;

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
	CFuncMoveLinear(CFuncMoveLinear &);
	CFuncMoveLinear(CFuncMoveLinear &);
	CFuncMoveLinear();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool CreateVPhysics();
	virtual bool ShouldSavePhysics();
	void MoveTo(Vector, float);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual void MoveDone();
	void StopMoveSound();
	virtual void Blocked(CBaseEntity *);
	void SetPosition(float);
	virtual int DrawDebugTextOverlays(uint64, int);
	void InputOpen(inputdata_t &);
	void InputClose(inputdata_t &);
	void InputSetPosition(inputdata_t &);
	void InputResetPosition(inputdata_t &);
	void InputTeleportToTarget(inputdata_t &);
	void InputSetSpeed(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CFuncMoveLinear();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[49] CreateVPhysics
	// vtable[48] ShouldSavePhysics
	// vtable[108] Use
	// vtable[118] MoveDone
	// vtable[115] Blocked
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 1392
};
