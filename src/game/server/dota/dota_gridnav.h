// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_gridnav.h:58
class CGridNavNode {
	enum ListIDOffsets {
		NO_LIST = 0,
		OPEN_LIST = 0x1,
		CLOSED_LIST = 0x2,
	};

	union {
		int m_nHeapIndex;  // +0x0
	};

	int m_nListID;  // +0x0

	union {
		int m_nHeapIndex;  // +0x10
	};
	int m_nHeuristic;  // +0x18
	int m_nCost;  // +0x1c
	bool m_bIsPortal;  // +0x20

	static int sm_nListIDBase;
	CGridNavNode(bool);

	// sizeof = 40
};

// src/game/server/dota/dota_gridnav.h:92
class CGridNavCell : public CGridNavNode {
public:

private:

	int m_nGridPosX;  // +0x24
	int m_nGridPosY;  // +0x28
	int ComputeStepCost(const CGridNavCell &);
	CGridNavCell();

	// sizeof = 48
};

// src/game/server/dota/dota_gridnav.h:109
class CGridNavSectorPortalConnection {
	int m_nCost;  // +0x0
	unsigned char m_nWhichEdge;  // +0x4
	unsigned char m_nPortalID;  // +0x5

	// sizeof = 8
};

// src/game/server/dota/dota_gridnav.h:120
class CGridNavSectorPortal : public CGridNavNode {
public:

	int m_nRegionID;  // +0x24
	unsigned char m_nStartIndex;  // +0x48
	unsigned char m_nEndIndex;  // +0x49
	CGridNavSectorPortal();
	void GetMidpointXY(int &, int &, int, int, int, int, int);
	~CGridNavSectorPortal();

	// sizeof = 80
};

// src/game/server/dota/dota_gridnav.h:139
class CGridNavSector {
private:

	int m_nSectorX;  // +0x60
	int m_nSectorY;  // +0x64
	int m_nBaseRegionID;  // +0x68
	bool m_bDirty;  // +0x6c
	void Build();
	CGridNavSectorPortal * GetPortal(int, int, int);
	CGridNavSector();
	~CGridNavSector();

	// sizeof = 112
};

// src/game/server/dota/dota_gridnav.h:162
class CGridNav : public CGridNavBase {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	bool m_bLoaded;  // +0x110
	bool m_bSectorsInitialized;  // +0x111

	int m_nSectorWidth;  // +0x114
	int m_nSectorHeight;  // +0x118

	typedef CAutoGameSystem BaseClass;
	CGridNav(const CGridNav &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CGridNav *);
	CGridNav();
	virtual ~CGridNav();
	virtual bool Init();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void SpawnGroupPrecache(const EventSpawnGroupPrecache_t &);
	virtual void PreClientUpdate(const EventServerPreClientUpdate_t &);
	bool IsLoaded();
	PathResult BuildPath(int, int, int, int, GridNavDirectionVec_t &, bool, CDOTA_BaseNPC *, float, int, bool *);
	bool IsEnclosed(int, int, CDOTA_BaseNPC *);
	bool CanFindPath(Vector, Vector);
	float FindPathLength(Vector, Vector);
	void GetSectorEdges(int &, int &, int &, int &, int, int);
	void SetSimpleObstructionBlocked(CDOTA_SimpleObstruction *, bool);
	void SetTreeBlocked(CDOTA_Tree *, bool);
	void SetPositionBlocked(const Vector &, bool);
	void SetPositionBlocked2x2(const Vector &, bool);
	bool IsNearbyTree(Vector, float, bool);
	bool GetNearbyTrees(Vector, float, bool, GridNavTreeStackVec_t &);
	void DestroyTreesAroundPoint(Vector, float, bool, int);
	void Script_DestroyTreesAroundPoint(Vector, float, bool);
	void RegrowAllTrees();
	void GetStandingTreesAroundPoint(Vector, float, bool, CUtlVector<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> > &);
	void GetAllTreesAroundPoint(Vector, float, bool, CUtlVector<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> > &);
	ScriptVariant_t Script_GetAllTreesAroundPoint(Vector, float, bool);
	void ResolveNPCPositions(Vector, float, bool);
	const CGridNavCell & GetCell(int, int);
	CGridNavCell & GetCell(int, int);
	void UpdateSectors();
	void BuildSector(CGridNavSector &);
	void GetNPCsInRange(CDOTA_BaseNPC *, float, CUtlVector<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> > &);
	void PrepareObstructionManager(float, uint, uint, ObstructionRelationshipClass_t, float);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	bool CheckForCollisions(float, float, CollisionResultList_t *, EHANDLE, bool);
	bool CheckForCollisions(const Vector &, CollisionResultList_t *, EHANDLE, bool);
	bool CheckForCollisionsWithLine(const Vector &, const Vector &, CollisionResultList_t *, EHANDLE, uint);
	Vector2D AdvanceAroundObstruction(const Vector2D &, const ObstructionRecord_t *, bool);

private:

	CGridNavCell & GetCell(int);
	CGridNavSector & GetSector(int, int);
	GridNavDirection OppositeDirection(GridNavDirection);
	void FloodFillRegion(CGridNavSector &, CGridNavSectorPortal &, int, int, int, int, int, int, int);
	int ComputePortalConnectionCost(int, int, int, int, int, int, int, int);
	void ShowGridNavSectors();
	void ShowObjectObstructions();
	void ShowHeightMap(bool);
	void UpdateDebugSceneObjects(CCallQueue &);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[3] GameInit
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// vtable[12] SpawnGroupPrecache
	// vtable[26] PreClientUpdate
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 304
};
