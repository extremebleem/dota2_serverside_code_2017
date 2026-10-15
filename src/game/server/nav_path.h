// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_path.h:27
class CPathSegment {
	enum SegmentType {
		PATH_SEG_ON_GROUND = 0,
		PATH_SEG_JUMP_DOWN = 0x1,
		PATH_SEG_DROP_DOWN = 0x2,
		PATH_SEG_JUMP_OVER_GAP = 0x3,
		PATH_SEG_CLIMB_UP = 0x4,
		PATH_SEG_LADDER_UP = 0x5,
		PATH_SEG_LADDER_DOWN = 0x6,
		NUM_SEGMENT_TYPES = 0x7,
	};

	NavEdgeIndex inEdge;  // +0x4

	const CNavLadder * pLadder;  // +0x18
	float flLength;  // +0x30
	float flDistanceFromStart;  // +0x34
	float flCurvature;  // +0x38
	float flPortalHalfWidth;  // +0x48
	bool bAllowOptimize;  // +0x4c

protected:

	int m_nAreaIndex;  // +0x50
	int m_nPrevAreaIndex;  // +0x54
	CPathSegment();
	CNavArea * GetArea();
	const CNavArea * GetArea();
	void SetArea(CNavArea *);
	const CNavArea * GetPrevArea();
	void SetPrevArea(CNavArea *);
	CPathSegment & operator=(const CPathSegment &);

	// sizeof = 88
};

// src/game/server/nav_path.h:27
class CPathSegment {
	enum SegmentType {
		PATH_SEG_ON_GROUND = 0,
		PATH_SEG_JUMP_DOWN = 0x1,
		PATH_SEG_DROP_DOWN = 0x2,
		PATH_SEG_JUMP_OVER_GAP = 0x3,
		PATH_SEG_CLIMB_UP = 0x4,
		PATH_SEG_LADDER_UP = 0x5,
		PATH_SEG_LADDER_DOWN = 0x6,
		NUM_SEGMENT_TYPES = 0x7,
	};

	NavEdgeIndex inEdge;  // +0x4

	const CNavLadder * pLadder;  // +0x18
	float flLength;  // +0x30
	float flDistanceFromStart;  // +0x34
	float flCurvature;  // +0x38
	float flPortalHalfWidth;  // +0x48
	bool bAllowOptimize;  // +0x4c

protected:

	int m_nAreaIndex;  // +0x50
	int m_nPrevAreaIndex;  // +0x54
	CPathSegment();
	CNavArea * GetArea();
	const CNavArea * GetArea();
	void SetArea(CNavArea *);
	const CNavArea * GetPrevArea();
	void SetPrevArea(CNavArea *);

	// sizeof = 88
};

// src/game/server/nav_path.h:105
class CPathData {
	enum SeekType {
		SEEK_ENTIRE_PATH = 0,
		SEEK_AHEAD = 0x1,
		SEEK_BEHIND = 0x2,
	};

	enum MoveCursorType {
		PATH_ABSOLUTE_DISTANCE = 0,
		PATH_RELATIVE_DISTANCE = 0x1,
	};

	enum PathResult_t {
		NO_PATH = 0,
		PATH_COMPLETE_TO_GOAL = 0x1,
		PATH_COMPLETE_TO_NEAREST_AREA = 0x2,
		PATH_PARTIAL = 0x3,
	};

	struct PathCursorData {
		float flCurvature;  // +0x18

		const CPathSegment * pSegmentPrior;  // +0x20
		PathCursorData();

		// sizeof = 40
	};

	enum {
		MAX_PATH_SEGMENTS = 0x100,
	};

	int ()() * * _vptr.CPathData;  // +0x0
protected:

	int m_nSegmentCount;  // +0x5808
	float m_flCursorPos;  // +0x5828

	bool m_bIsCursorDataDirty;  // +0x5858

	CPathData(const CPathData &);
	CPathData();
	virtual ~CPathData();
	bool IsValid();
	virtual void InvalidatePath();
	virtual void OnPathChanged();
	float GetLength();
	Vector GetPositionAlongPath(float, const CPathSegment *);
	Vector GetClosestPosition(const Vector &, const CPathSegment *, float);
	Vector GetStartPosition();
	Vector GetEndPosition();
	float GetPathAge();
	bool MoveCursor(float, MoveCursorType);
	float GetCursorPosition();
	void MoveCursorToClosestPosition(const Vector &, SeekType, float);
	const PathCursorData & GetCursorData();
	/* tag__fprintf: const_type tag not supported! */;
	virtual void Draw(const CPathSegment *, float);
	virtual void DrawInterpolated(float, float);
	const CPathSegment * FirstSegment();
	const CPathSegment * NextSegment(const CPathSegment *);
	const CPathSegment * PriorSegment(const CPathSegment *);
	const CPathSegment * LastSegment();
	int GetNumSegments();
	const CPathSegment * GetSegment(int);
	CPathSegment * GetSegment(int);
	PathResult_t GetPathResultStatus();
	void RemoveSegments(int, int);
	void InsertSegment(const CPathSegment &, int);

	// vtable[2] InvalidatePath
	// vtable[3] OnPathChanged
	// vtable[4] Draw
	// vtable[5] DrawInterpolated
	// sizeof = 22640
};

// src/game/server/nav_path.h:210
struct PathCapabilities_t {
	const CBaseCombatCharacter * m_pPathingEntity;  // +0x0
	bool m_bIsDebugging;  // +0x8

	const CPathCostBase * m_pPathCost;  // +0x10
	float m_flMoverStepHeight;  // +0x18
	float m_flMoverCrouchHullHeight;  // +0x1c
	NavHull_t GetNavHull();
	float GetNavHullRadiusOrDefault();
	PathCapabilities_t();
	PathCapabilities_t(const INextBot &, const CPathCostBase &);
	PathCapabilities_t(const CAI_BaseNPC &, const CPathCostBase &);

	// sizeof = 32
};

// src/game/server/nav_path.h:238
class IPathFollower {
	int ()() * * _vptr.IPathFollower;  // +0x0
	IPathFollower(IPathFollower &);
	IPathFollower(const IPathFollower &);
	IPathFollower();
	virtual void OnPathInvalidated();
	virtual void OnPathChanged();
	virtual void SetNotifyPathTarget(bool);

	// vtable[0] OnPathInvalidated
	// vtable[1] OnPathChanged
	// vtable[2] SetNotifyPathTarget
	// sizeof = 8
};

// src/game/server/nav_path.h:251
class CPath : public CPathData {
public:

protected:

	const CUtlDelegate<bool(const CNavArea&)> * m_pPartialPathDelegate;  // +0x5870

	float m_flMaxPathLength;  // +0x5898
	bool m_bIncludeGoalIfPathFails;  // +0x589c
	bool m_bIncludeGoalIfOffMesh;  // +0x589d

	bool m_bAllowPartialPaths;  // +0x58b8

	static CPathCostRecorder * m_pLastFailedPath;
	CPath(CPath &);
	CPath(const CPath &);
	CPath();
	void SetOptimizer(CPathOptimizer *);
	void SetJumpPostProcess(CNavPathJumpProcess *);
	virtual void SetPathFollower(IPathFollower *);
	void SetMaxPathLength(float);
	void SetIncludeGoalIfPathFails(bool);
	void SetIncludeGoalIfOffMesh(bool);
	void SetAllowPartialPaths(bool);
	virtual void OnPathChanged();
	const CPathCostRecorder * GetLastFailedPath();
	bool ComputePathTrivial(const Vector &, const Vector &, NavHull_t);
	bool ComputePathPosToPos(const PathCapabilities_t &, const Vector &, const Vector &, const CPathCostBase &);
	bool ComputePathCore(const PathCapabilities_t &, const Vector &, CNavArea &, const Vector &, const CNavArea *, int, const CPathCostBase &);
	bool ComputePathWithOpenGoalCore(const PathCapabilities_t &, const CPathCostBase &, const PathOpenGoalSelectorFunc &);
	bool ComputePathToEntityCore(const PathCapabilities_t &, const CBaseEntity &, const CPathCostBase &);
	bool ComputePathToPosCore(const PathCapabilities_t &, const Vector &, const CPathCostBase &);
	bool ComputePathPosToPosCore(const PathCapabilities_t &, const Vector &, const Vector &, const CPathCostBase &);
	bool ComputePathMultiGoalCore(const PathCapabilities_t &, const Vector *, int, const CPathCostBase &);
	bool ComputePathInDirectionCore(const PathCapabilities_t &, const Vector &, const CPathCostBase &);
	bool ComputePathTrivialCore(const Vector &, const Vector &, NavHull_t);
	void GetStartAreaAndPos(const PathCapabilities_t &, CNavArea * *, Vector *);
	virtual Vector ComputeAreaCrossing(const CNavArea &, const Vector &, const CNavArea &, NavEdgeIndex, NavEdgeIndex, CNavOrientedPortal *);
	CNavArea * GetNearestNavAreaAndGroundHeight(const Vector &, NavHull_t, float *);
	virtual bool FinishComputePathWrapper(bool);
	bool AssemblePrecomputedPath(const Vector &, CNavArea *, const Vector &, CNavArea &, const CPathCostBase &, bool, bool);
	bool AssembleAndPostProcessPrecomputedPath(const Vector &, CNavArea *, const Vector &, CNavArea &, const CPathCostBase &, bool);
	void FinishAndPostProcessPath(const Vector &, const Vector &, CNavArea &, bool, const CPathCostBase &);
	bool ComputePathDetails(const Vector &, int);
	void ComputeSpecialSegments();
	void Optimize(const CPathCostBase &);
	void PostProcess();
	void StartRecordLastFailedPath(const CPathCostBase &, const CBaseCombatCharacter *, CNavArea *, const Vector &, CNavArea *, const Vector &);
	void EndRecordLastFailedPath();
	virtual ~CPath();

	// vtable[6] SetPathFollower
	// vtable[3] OnPathChanged
	// vtable[7] ComputeAreaCrossing
	// vtable[8] FinishComputePathWrapper
	// sizeof = 22720
};

// src/game/server/nav_path.h:455
class CPathCostRecorder : public CPathCostBase {
	struct AreaTransition_t {
		const CNavArea * m_pAreaFrom;  // +0x0
		const CNavArea * m_pAreaTo;  // +0x8
		float m_flCost;  // +0x10
		AreaTransition_t();
		AreaTransition_t(const CNavArea *, const CNavArea *, float);

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

	const CPathCostBase * m_pPathCost;  // +0x18
	EHANDLE m_hPathingEntity;  // +0x20

	CPathCostRecorder(CPathCostRecorder &);
	CPathCostRecorder(const CPathCostRecorder &);
	CPathCostRecorder();
	void StartRecord(const CPathCostBase &, const CBaseCombatCharacter *, CNavArea *, const Vector &, CNavArea *, const Vector &);
	void StopRecord();
	virtual bool IsNeighborReachable(const CNavArea &, const CNavArea &);
	virtual bool AllowPathOptimization(const CNavArea &, const CNavArea &);
	virtual bool IsToAreaTraversable(const CNavArea &, const CNavArea &);
	virtual void CalcCostFloorAreas(PathCostResult_t &, const CNavArea &, const CNavArea &, NavEdgeIndex, NavEdgeIndex, const Vector *);
	virtual void CalcCostLadder(PathCostResult_t &, const CNavArea &, const CNavArea &, const CNavLadder &);
	virtual void CalcCostElevator(PathCostResult_t &, const CNavArea &, const CNavArea &, const IHandleEntity &);
	void DebugDraw();
	virtual ~CPathCostRecorder();

	// vtable[3] IsNeighborReachable
	// vtable[4] AllowPathOptimization
	// vtable[2] IsToAreaTraversable
	// vtable[5] CalcCostFloorAreas
	// vtable[6] CalcCostLadder
	// vtable[7] CalcCostElevator
	// sizeof = 160
};
