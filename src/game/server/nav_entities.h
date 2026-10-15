// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_entities.h:262
class CTraceFilterWalkableEntities : public CTraceFilterSimple {
public:

private:

	unsigned int m_flags;  // +0x40
	CTraceFilterWalkableEntities(CTraceFilterWalkableEntities &);
	CTraceFilterWalkableEntities(const CTraceFilterWalkableEntities &);
	CTraceFilterWalkableEntities(const CBaseEntity *, int, unsigned int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterWalkableEntities();

	// vtable[2] ShouldHitEntity
	// sizeof = 72
};

// src/game/server/nav_entities.h:286
class CTraceFilterGroundEntities : public CTraceFilterWalkableEntities {
public:

	CTraceFilterGroundEntities(const CBaseEntity *, int, unsigned int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterGroundEntities();

	// vtable[2] ShouldHitEntity
	// sizeof = 72
};

// src/game/server/nav_entities.h:321
class CFuncNavBlocker : public CBaseModelEntity {
	enum BlockageType {
		BT_NONE = 0,
		BT_NAV_ONLY = 0x1,
		BT_NAV_AND_FLOW = 0x2,
	};

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

public:

private:

	static datamap_t m_DataMap;

protected:

private:

	static CUtlLinkedList<CFuncNavBlocker*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>, short unsigned int> > gm_NavBlockers;

	bool m_isBlockingNav[2];  // +0x498

	int m_blockedTeamNumber;  // +0x49c
	bool m_bAffectsFlow;  // +0x4a0
	typedef CBaseModelEntity BaseClass;
	CFuncNavBlocker();
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
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	void InputBlockNav(inputdata_t &);
	void InputUnblockNav(inputdata_t &);
	bool IsBlockingNav(int);
	bool AffectsFlow();
	virtual int DrawDebugTextOverlays(uint64, int);
	void BlockArea(CNavArea &);
	bool operator()(CNavArea *);
	BlockageType CalculateBlocked(bool *, const Vector &, const Vector &);
	void UpdateBlocked();
	void BlockNav();
	void UnblockNav();
	virtual ~CFuncNavBlocker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// vtable[79] DrawDebugTextOverlays
	// sizeof = 1192
};

// src/game/server/nav_entities.h:395
class CFuncNavConnectionBlocker : public CBaseModelEntity {
public:

private:

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
	CFuncNavConnectionBlocker(CFuncNavConnectionBlocker &);
	CFuncNavConnectionBlocker(CFuncNavConnectionBlocker &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CFuncNavConnectionBlocker();
	virtual void Spawn(const CEntityKeyValues *);
	bool CollideWithRay(const Ray_t &);
	virtual ~CFuncNavConnectionBlocker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// sizeof = 1152
};

// src/game/server/nav_entities.h:416
class ForgetNavArea {
	ForgetNavArea(CNavArea *);
	bool operator()(CBasePlayer *);
	bool operator()(CBaseCombatCharacter *);

	// sizeof = 8
};

// src/game/server/nav_entities.h:441
class CNavEntityInterface : public INavEntityInterface {
public:

	CNavEntityInterface();
	virtual void ApplyMarkup(CNavMesh &);
	virtual void OnDestroyArea(CNavArea *);
	virtual void ConnectElevators(CNavMesh &);
	virtual CBaseEntity * FindLadderEntity(const CNavLadder &);
	virtual int FindLadderTeam(const CNavLadder &);

protected:

	void ConnectElevatorToArea(CNavArea &, CFuncElevator *, Extent &);

	// vtable[0] ApplyMarkup
	// vtable[1] OnDestroyArea
	// vtable[4] ConnectElevators
	// vtable[2] FindLadderEntity
	// vtable[3] FindLadderTeam
	// sizeof = 8
};

// src/game/server/nav_entities.h:473
class CNavPhysicsInterface : public INavPhysicsInterface {
public:

	CNavPhysicsInterface();
	virtual void Nav_TraceLine(const Vector &, const Vector &, uint64, const CBaseEntity *, int, trace_t *);
	virtual void Nav_TraceLine(const Vector &, const Vector &, uint64, CTraceFilter *, trace_t *);
	virtual void Nav_TraceHull(const Vector &, const Vector &, const Vector &, const Vector &, uint64, const CBaseEntity *, int, trace_t *);
	virtual void Nav_TraceHull(const Vector &, const Vector &, const Vector &, const Vector &, uint64, CTraceFilter *, trace_t *);
	virtual uint64 Nav_PointContents(const Vector &, uint64);
	virtual bool Nav_CheckAreaOverlappingEntity(const CNavArea &, const CBaseEntity &, bool);
	virtual void Nav_GetEntityWorldSpaceAABB(const CBaseEntity &, Vector *, Vector *);

	// vtable[0] Nav_TraceLine
	// vtable[1] Nav_TraceLine
	// vtable[2] Nav_TraceHull
	// vtable[3] Nav_TraceHull
	// vtable[4] Nav_PointContents
	// vtable[5] Nav_CheckAreaOverlappingEntity
	// vtable[6] Nav_GetEntityWorldSpaceAABB
	// sizeof = 8
};

// src/game/server/nav_entities.h:520
class CZombieBorder : public CServerOnlyPointEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bDisabled;  // +0x308

	typedef CServerOnlyPointEntity BaseClass;

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
	CZombieBorder(CZombieBorder &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CZombieBorder();
	virtual ~CZombieBorder();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	bool IsBehindZombieBorder(const Vector &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 792
};
