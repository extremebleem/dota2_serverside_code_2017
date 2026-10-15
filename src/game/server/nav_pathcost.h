// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_pathcost.h:20
struct PathCostResult_t {
	float m_flSegmentCost;  // +0x0
	PathCostResult_t();
	void Reset();

	// sizeof = 16
};

// src/game/server/nav_pathcost.h:43
class CPathCostBase {
	int ()() * * _vptr.CPathCostBase;  // +0x0
protected:

	CPathCostBase(const CPathCostBase &);
	CPathCostBase(NavHull_t);
	virtual ~CPathCostBase();
	NavHull_t GetNavHull();
	void SetNavHull(NavHull_t);
	virtual bool IsToAreaTraversable(const CNavArea &, const CNavArea &);
	virtual bool IsNeighborReachable(const CNavArea &, const CNavArea &);
	virtual bool AllowPathOptimization(const CNavArea &, const CNavArea &);
	void TraverseCost(PathCostResult_t &, const CNavArea &, const NavAdjInfo_t &, const Vector *);
	void StartAreaCost(PathCostResult_t &, const CNavArea &, const Vector &);
	virtual void CalcCostFloorAreas(PathCostResult_t &, const CNavArea &, const CNavArea &, NavEdgeIndex, NavEdgeIndex, const Vector *);
	virtual void CalcCostLadder(PathCostResult_t &, const CNavArea &, const CNavArea &, const CNavLadder &);
	virtual void CalcCostElevator(PathCostResult_t &, const CNavArea &, const CNavArea &, const IHandleEntity &);

	// vtable[2] IsToAreaTraversable
	// vtable[3] IsNeighborReachable
	// vtable[4] AllowPathOptimization
	// vtable[5] CalcCostFloorAreas
	// vtable[6] CalcCostLadder
	// vtable[7] CalcCostElevator
	// sizeof = 24
};

// src/game/server/nav_pathcost.h:139
class CNavShortestPathCost : public CPathCostBase {
public:

	CNavShortestPathCost(CNavShortestPathCost &);
	CNavShortestPathCost(const CNavShortestPathCost &);
	CNavShortestPathCost(NavHull_t);
	virtual bool IsNeighborReachable(const CNavArea &, const CNavArea &);
	virtual bool AllowPathOptimization(const CNavArea &, const CNavArea &);

protected:

	virtual float FloorAreaCost(const CNavArea &, const CNavArea &, float, float);
	virtual float LadderCost(const CNavLadder &, const CNavArea &, const CNavArea &);
	virtual float ElevatorCost(const IHandleEntity &, const CNavArea &, const CNavArea &);
	void GetPosOnToArea(const CNavArea &, Vector &, const CNavArea &, NavEdgeIndex, NavEdgeIndex, const Vector *, Vector *);
	virtual void CalcCostFloorAreas(PathCostResult_t &, const CNavArea &, const CNavArea &, NavEdgeIndex, NavEdgeIndex, const Vector *);
	virtual void CalcCostLadder(PathCostResult_t &, const CNavArea &, const CNavArea &, const CNavLadder &);
	virtual void CalcCostElevator(PathCostResult_t &, const CNavArea &, const CNavArea &, const IHandleEntity &);
	virtual ~CNavShortestPathCost();

	// vtable[3] IsNeighborReachable
	// vtable[4] AllowPathOptimization
	// vtable[8] FloorAreaCost
	// vtable[9] LadderCost
	// vtable[10] ElevatorCost
	// vtable[5] CalcCostFloorAreas
	// vtable[6] CalcCostLadder
	// vtable[7] CalcCostElevator
	// sizeof = 24
};

// src/game/server/nav_pathcost.h:267
class CNavPathCostCore : public CNavShortestPathCost {
public:

protected:

	bool m_bAllowLadders;  // +0x20
	bool m_bRequiresBidirectional;  // +0x21

	float m_flAvoidanceAreaCost;  // +0x24
	float m_flAvoidanceAreaDistScale;  // +0x28
	float m_flMaxDropDown;  // +0x2c
	float m_flMaxClimbUp;  // +0x30
	CNavPathCostCore(NavHull_t);
	void SetRequiresBidirectional(bool);
	void SetAvoidanceAreaCost(float);
	void SetAvoidanceAreaDistScale(float);
	void SetMaxDropDown(float);
	void SetMaxClimbUp(float);
	virtual bool AllowPathOptimization(const CNavArea &, const CNavArea &);
	virtual float LadderCost(const CNavLadder &, const CNavArea &, const CNavArea &);
	virtual float FloorAreaCost(const CNavArea &, const CNavArea &, float, float);
	bool AttributesAllowed(CNavAttribute);
	virtual bool IsToAreaTraversable(const CNavArea &, const CNavArea &);
	virtual ~CNavPathCostCore();

	// vtable[4] AllowPathOptimization
	// vtable[9] LadderCost
	// vtable[8] FloorAreaCost
	// vtable[2] IsToAreaTraversable
	// sizeof = 56
};

// src/game/server/nav_pathcost.h:372
class CNavPathCostFilter : public CPathCostBase {
public:

protected:

	const const CPathCostBase & m_rWrappedCost;  // +0x18
	CNavPathCostFilter(CNavPathCostFilter &);
	CNavPathCostFilter(const CNavPathCostFilter &);
	CNavPathCostFilter(const CPathCostBase &);
	virtual bool IsToAreaTraversableByFilter(const CNavArea &, const CNavArea &);
	virtual bool IsToAreaTraversable(const CNavArea &, const CNavArea &);
	virtual bool IsNeighborReachable(const CNavArea &, const CNavArea &);
	virtual bool AllowPathOptimization(const CNavArea &, const CNavArea &);
	virtual void CalcCostFloorAreas(PathCostResult_t &, const CNavArea &, const CNavArea &, NavEdgeIndex, NavEdgeIndex, const Vector *);
	virtual void CalcCostLadder(PathCostResult_t &, const CNavArea &, const CNavArea &, const CNavLadder &);
	virtual void CalcCostElevator(PathCostResult_t &, const CNavArea &, const CNavArea &, const IHandleEntity &);
	virtual ~CNavPathCostFilter();

	// vtable[8] IsToAreaTraversableByFilter
	// vtable[2] IsToAreaTraversable
	// vtable[3] IsNeighborReachable
	// vtable[4] AllowPathOptimization
	// vtable[5] CalcCostFloorAreas
	// vtable[6] CalcCostLadder
	// vtable[7] CalcCostElevator
	// sizeof = 32
};

// src/game/server/nav_pathcost.h:428
class CNavPathCostFilterVolume : public CNavPathCostFilter {
public:

protected:

	const CNavVolume * m_pNavVolume;  // +0x20
	CNavPathCostFilterVolume(const CPathCostBase &, const CNavVolume *);
	const CNavVolume * GetNavVolume();
	void SetNavVolume(const CNavVolume *);
	virtual bool IsToAreaTraversableByFilter(const CNavArea &, const CNavArea &);
	virtual ~CNavPathCostFilterVolume();

	// vtable[8] IsToAreaTraversableByFilter
	// sizeof = 40
};

// src/game/server/nav_pathcost.h:458
class CNavTestRayParams {
	float m_flBeneathLimit;  // +0x0
	float m_flAboveLimit;  // +0x4
	float m_flMaxStepUp;  // +0x8
	float m_flMaxStepDown;  // +0xc
	const CPathCostBase * m_pPathCost;  // +0x10
	bool m_bOnlyOptimizable;  // +0x18
	CNavTestRayParams();
	CNavTestRayParams(const CPathCostBase *);

	// sizeof = 32
};
