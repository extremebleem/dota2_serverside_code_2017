// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/navtypes.h:86
class CNavGenParams {
	bool m_useProjectDefaults;  // +0x0

	float m_flTileSize;  // +0x4
	float m_flCellSize;  // +0x8
	float m_flCellHeight;  // +0xc
	int m_nRegionMinSize;  // +0x10
	int m_nRegionMergeSize;  // +0x14
	float m_flDetailSampleDist;  // +0x18
	float m_flDetailSampleMaxError;  // +0x1c
	int m_nEdgeMaxLen;  // +0x20
	float m_flEdgeMaxError;  // +0x24
	int m_nVertsPerPoly;  // +0x28
	int m_nAgentNumHulls;  // +0x2c
	float m_flAgentRadius[3];  // +0x30
	float m_flAgentHeight[3];  // +0x3c
	float m_flAgentMaxClimb;  // +0x48
	int m_nAgentMaxSlope;  // +0x4c
	float m_flAgentMaxJumpDownDist;  // +0x50
	float m_flAgentMaxJumpHorizDist1;  // +0x54
	float m_flAgentMaxJumpUpDist;  // +0x58
protected:

	static CNavGenParams ms_NavGenParamsDefault;

	static bool ms_bDefaultsLoaded;
	void Save(CUtlBuffer &);
	void Load(int, CUtlBuffer &);
	bool operator==(const CNavGenParams &);
	const CNavGenParams & GetNavGenParamsToUse();
	const CNavGenParams & GetNavGenParamsDefault();
	void LoadDefaultsFromGameInfo(KeyValues *);

	// sizeof = 92
};

// src/public/navlib/navtypes.h:515
class INavEditor {
	enum EditModeType {
		NORMAL = 0,
		PLACE_PAINTING = 0x1,
		CREATING_AREA = 0x2,
		CREATING_LADDER = 0x3,
		DRAG_SELECTING = 0x4,
		SHIFTING_XY = 0x5,
		SHIFTING_Z = 0x6,
	};

	int ()() * * _vptr.INavEditor;  // +0x0
	~INavEditor();
	INavEditor(INavEditor &);
	INavEditor(const INavEditor &);
	INavEditor();
	virtual void OnNavMeshDestroy();
	virtual void Update();
	virtual void Reset(bool, bool);
	virtual void RemoveInvalid();
	virtual EditModeType GetEditMode();
	virtual void ClearAreas();
	virtual void ClearLadders();
	virtual void ClearMarks();

	// vtable[0] OnNavMeshDestroy
	// vtable[1] Update
	// vtable[2] Reset
	// vtable[3] RemoveInvalid
	// vtable[4] GetEditMode
	// vtable[5] ClearAreas
	// vtable[6] ClearLadders
	// vtable[7] ClearMarks
	// sizeof = 8
};

// src/public/navlib/navtypes.h:546
class INavMeshGameEventListener {
	int ()() * * _vptr.INavMeshGameEventListener;  // +0x0
	INavMeshGameEventListener(INavMeshGameEventListener &);
	INavMeshGameEventListener(const INavMeshGameEventListener &);
	~INavMeshGameEventListener();
	INavMeshGameEventListener();
	virtual void OnNavMeshDestroy();

	// vtable[0] OnNavMeshDestroy
	// sizeof = 8
};

// src/public/navlib/navtypes.h:557
class INavPhysicsInterface {
	int ()() * * _vptr.INavPhysicsInterface;  // +0x0
	INavPhysicsInterface(INavPhysicsInterface &);
	INavPhysicsInterface(const INavPhysicsInterface &);
	INavPhysicsInterface();
	virtual void Nav_TraceLine(const Vector &, const Vector &, uint64, const CBaseEntity *, int, CGameTrace *);
	virtual void Nav_TraceLine(const Vector &, const Vector &, uint64, CTraceFilter *, trace_t *);
	virtual void Nav_TraceHull(const Vector &, const Vector &, const Vector &, const Vector &, uint64, const CBaseEntity *, int, trace_t *);
	virtual void Nav_TraceHull(const Vector &, const Vector &, const Vector &, const Vector &, uint64, CTraceFilter *, CGameTrace *);
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

// src/public/navlib/navtypes.h:587
class INavObstructionManager {
	int ()() * * _vptr.INavObstructionManager;  // +0x0
	INavObstructionManager(INavObstructionManager &);
	INavObstructionManager(const INavObstructionManager &);
	INavObstructionManager();
	virtual void Update();
	virtual void OnNavMeshLoaded();
	virtual void OnNavMeshDestroyed();
	virtual void OnChangeTheNavMesh();
	virtual void OnRoundRestart();
	virtual void ResetNavMesh();
	virtual void RemoveInvalidNavAreas();
	virtual void RemoveNavArea(CNavArea &);
	virtual void ChangeNavAreaIndex(int, int);
	virtual bool TestRayToConnectionBlockers(const Ray_t &);

	// vtable[0] Update
	// vtable[1] OnNavMeshLoaded
	// vtable[2] OnNavMeshDestroyed
	// vtable[3] OnChangeTheNavMesh
	// vtable[4] OnRoundRestart
	// vtable[5] ResetNavMesh
	// vtable[6] RemoveInvalidNavAreas
	// vtable[7] RemoveNavArea
	// vtable[8] ChangeNavAreaIndex
	// vtable[9] TestRayToConnectionBlockers
	// sizeof = 8
};

// src/public/navlib/navtypes.h:612
class INavEntityInterface {
	int ()() * * _vptr.INavEntityInterface;  // +0x0
	INavEntityInterface(INavEntityInterface &);
	INavEntityInterface(const INavEntityInterface &);
	INavEntityInterface();
	virtual void ApplyMarkup(CNavMesh &);
	virtual void OnDestroyArea(CNavArea *);
	virtual IHandleEntity * FindLadderEntity(const CNavLadder &);
	virtual int FindLadderTeam(const CNavLadder &);
	virtual void ConnectElevators(CNavMesh &);

	// vtable[0] ApplyMarkup
	// vtable[1] OnDestroyArea
	// vtable[2] FindLadderEntity
	// vtable[3] FindLadderTeam
	// vtable[4] ConnectElevators
	// sizeof = 8
};
