// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_obstruction.h:23
class CNavObstructionManager : public INavObstructionManager {
public:

protected:

	int m_nLastUpdatedBlockedArea;  // +0x38

	int m_nLastUpdatedAvoidanceObstacleArea;  // +0x78

	CNavObstructionManager(CNavObstructionManager &);
	CNavObstructionManager(const CNavObstructionManager &);
	CNavObstructionManager();
	virtual void Update();
	virtual void DebugDraw();
	virtual void OnNavMeshLoaded();
	virtual void OnNavMeshDestroyed();
	virtual void OnRoundRestart();
	virtual void ResetNavMesh();
	virtual void OnChangeTheNavMesh();
	virtual void RemoveNavArea(CNavArea &);
	virtual void ChangeNavAreaIndex(int, int);
	virtual void RemoveInvalidNavAreas();
	virtual CNavObstacleMgr * GetNavObstacleMgr();
	void BlockArea(CNavArea &, int, const CBaseEntity *);
	void UnblockArea(CNavArea &);
	void UpdateBlockedArea(CNavArea &, bool, int);
	void UpdateOnBreakableBreak(CBaseEntity *);
	void CheckAreaFloor(CNavArea &, const CBaseEntity *);
	void UpdateObstacle(INavObstacle &);
	void RemoveObstacle(INavObstacle &);
	void InitConnectionBlockers();
	virtual bool TestRayToConnectionBlockers(const Ray_t &);
	void UpdatePendingDoorHelpers();
	void AddPendingDoorBlocker(CNavDoorBlocker *);
	void RemovePendingDoorBlocker(CNavDoorBlocker *);
	virtual void OnAreaBlocked(CNavArea &, bool);
	virtual void OnAreaUnblocked(CNavArea &, bool);
	void UpdateBlockedAreas(bool);
	void UpdateAreaBlockedFromNavBlockers(CNavArea &);
	void MarkAreaObstacleToAvoid(CNavArea &, float);
	void OnAvoidanceObstacleEnteredArea(CNavArea &);
	void OnAvoidanceObstacleLeftArea(CNavArea &);
	void UpdateAvoidanceObstacleAreas();
	void UpdateAreaAvoidanceObstacles(CNavArea &);

	// vtable[0] Update
	// vtable[10] DebugDraw
	// vtable[1] OnNavMeshLoaded
	// vtable[2] OnNavMeshDestroyed
	// vtable[4] OnRoundRestart
	// vtable[5] ResetNavMesh
	// vtable[3] OnChangeTheNavMesh
	// vtable[7] RemoveNavArea
	// vtable[8] ChangeNavAreaIndex
	// vtable[6] RemoveInvalidNavAreas
	// vtable[11] GetNavObstacleMgr
	// vtable[9] TestRayToConnectionBlockers
	// vtable[12] OnAreaBlocked
	// vtable[13] OnAreaUnblocked
	// sizeof = 184
};

// src/game/server/nav_obstruction.h:129
class CNavDoorBlocker {
	int m_nFlags;  // +0x0
	EHANDLE m_hBlocker;  // +0x4
	bool m_bPendingAndClosed;  // +0x8

	CNavDoorBlocker();
	~CNavDoorBlocker();
	void UpdateNavBlocking(bool);

	// sizeof = 48
};

// src/game/server/nav_obstruction.h:129
class CNavDoorBlocker {
	enum {
		NBD_BLOCKS_ALL = 0x1,
	};

	int m_nFlags;  // +0x0
	EHANDLE m_hBlocker;  // +0x4
	bool m_bPendingAndClosed;  // +0x8

	CNavDoorBlocker();
	~CNavDoorBlocker();
	void UpdateNavBlocking(bool);

	// sizeof = 48
};

// src/game/server/nav_obstruction.h:163
class CNavObstacleShape {
	CNavObstacleShape();
	CNavObstacleShape(INavObstacle &);
	CNavObstacleShape(const CNavObstacleShape &);
	float GenerateObstacleVerts(Vector2D *);
	void DebugDraw(int, int, int, float);
	CNavObstacleShape & operator=(const CNavObstacleShape &);

	// sizeof = 48
};

// src/game/server/nav_obstruction.h:182
class CNavObstacleEdge {
	bool m_bBeingMerged;  // +0x8

	CNavObstacleEdge();
	void Validate();
	~CNavObstacleEdge();

	// sizeof = 176
};

// src/game/server/nav_obstruction.h:201
class CNavObstacle {
	bool m_bDirty;  // +0x0

	float m_flZ;  // +0x330
	CNavObstacle(const CNavObstacleShape &);
	void InitEdgesFromShape();
	bool IsOverlappingPoint(const Vector2D &);
	void Validate();
	float DistSqrFromCache();
	void InvalidateCache();
	void DebugDraw();
	~CNavObstacle();

	// sizeof = 824
};

// src/game/server/nav_obstruction.h:310
class CNavObstacleMgr {
	class CNavObstacleSplitNode {
		uint32 m_nAreaIndex;  // +0x0

		CNavObstacleSplitNode(uint32, CNavObstacleSplitNode *);
		void SplitLeafNode(CNavObstacleEdge &, int, CNavArea * *);
		void MergeLeafNode();
		void Validate(bool);

		// sizeof = 48
	};

	class CNavObstacleSplitForest {
		struct SplitNodeRoot_t {
			bool m_bDirty;  // +0x8
			SplitNodeRoot_t(CNavObstacleSplitNode *);

			// sizeof = 16
		};
		/* tag__fprintf: const_type tag not supported! */;
		CNavObstacleSplitForest();
		CNavObstacleSplitNode * AddTree(CNavArea &);
		void SplitLeafNode(CNavObstacleSplitNode &, CNavObstacleEdge &, int, CNavArea * *);
		void MergeLeafNode(CNavObstacleSplitNode &);
		void MarkRootsClean();
		void MarkNodeDirty(CNavObstacleSplitNode &);
		void GatherObstaclesForDirtyRoots(ObstacleVector &);
		void GatherObstaclesForNodeRecursive(CNavObstacleSplitNode &, ObstacleVector &);
		void Validate();
		void DebugPrint();
		void DebugPrintRecursive(CNavObstacleSplitNode &, int);
		~CNavObstacleSplitForest();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;
	typedef CUtlVectorFixedGrowable<CNavObstacle*, 16ul> ObstacleVector;

	class CNavAreaSet {
	protected:

		CNavAreaSet();
		void Insert(CNavArea &);
		bool Find(CNavArea &);
		void RemoveAll();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	static float ms_flMoveThreshold;

	typedef CUtlVectorFixedGrowable<CNavObstacleEdge*, 64ul> ObstacleEdgeVector;
	CNavObstacleMgr();
	~CNavObstacleMgr();
	void Update();
	void DebugDraw();
	void ResetNavMesh();
	void OnNavMeshDestroyed();
	void OnChangeTheNavMesh();
	void ChangeNavAreaIndex(int, int);
	void UpdateObstacle(INavObstacle &);
	void RemoveObstacle(const INavObstacle &);
	void Validate();
	CNavObstacleSplitNode * FindSplitNodeForArea(const CNavArea &);
	CNavObstacleSplitNode * FindSplitNodeForArea(uint32);
	void InsertSplitNodeForArea(const CNavArea &, CNavObstacleSplitNode &);
	void MergeAllObstacles();
	void UpdateObstacle(int32, const CNavObstacleShape &);
	void RemoveObstacle(int32);
	void SplitObstacle(CNavObstacle &);
	void MergeObstacle(CNavObstacle &);
	void SplitEdge(CNavObstacle &, int);
	void MergeEdgeRecursive(CNavObstacleEdge &, ObstacleEdgeVector &);
	void MergeLeafNode(CNavObstacleSplitNode &);
	void UpdateBlocked();
	void UpdateBlockedRecurse(CNavObstacleSplitNode &, ObstacleVector &);
	void DrawIntersectingAreas(const CNavObstacle &);
	void DebugDrawNodeRecurse(CNavObstacleSplitNode &);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 120
};
