// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_pathfind.h:107
class CNavSearchElement {
	uint16 m_nMark;  // +0x0

	void Set(uint16, float, float, CNavArea *);
	CNavSearchElement(uint16, float, float, CNavArea *);

	// sizeof = 16
};

// src/game/server/nav_pathfind.h:107
class CNavSearchElement {
	enum {
		MARK_NONE = 0,
		MARK_MARKED = 0x1,
	};

	uint16 m_nMark;  // +0x0

	void Set(uint16, float, float, CNavArea *);
	CNavSearchElement(uint16, float, float, CNavArea *);

	// sizeof = 16
};

// src/game/server/nav_pathfind.h:135
class CNavSearchHash : public CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> > {
public:

	CNavSearchHash(int);
	~CNavSearchHash();

	// sizeof = 32
};

// src/game/server/nav_pathfind.h:169
struct NavSearchAreaInfo_t {
	const CNavArea * m_pParent;  // +0x0
	const float m_flCostSoFar;  // +0x8
	NavSearchAreaInfo_t(CNavArea *, float);

	// sizeof = 16
};

// src/game/server/nav_pathfind.h:239
class CNavBreadthFirstSearch {
	int ()() * * _vptr.CNavBreadthFirstSearch;  // +0x0
protected:

	uint32 m_nConnectionFlags;  // +0x28

	FuncNavOnSearchArea_t m_funcOnSearchArea;  // +0x30
	int m_nTeamIdForBlockedCheck;  // +0x50

	float (*m_pCostFunc)(const CNavArea &, const CNavArea &, float);  // +0x58
	CNavBreadthFirstSearch(const CNavBreadthFirstSearch &);
	void BreadthFirstSearch(const Vector &, float);
	void BreadthFirstSearch(CNavArea &, float);
	void BreadthFirstSearch(NavAreaVector &, float);
	CNavBreadthFirstSearch(NavHull_t);
	virtual ~CNavBreadthFirstSearch();
	uint32 DefaultConnectionFlags();
	void SetOnAreaSearchFunc(FuncNavOnSearchArea_t &);
	void SetCostFunc(float (*)(const CNavArea &, const CNavArea &, float));
	void SetTeamIdForBlockedCheck(int);
	void SetFlags(uint32);
	void SetFlags(uint32, bool);
	void IterateAdjacentAreas(CNavArea &, const CNavArea *);
	void IncludeInSearch(CNavArea &, CNavArea *);
	void BreadthFirstSearchCore(float);
	void CNavBreadthFirstSearch<CNavSearchHexLattice>(CNavSearchHexLattice &, NavHull_t);
	void CNavBreadthFirstSearch<CPathCostRecorder::DebugDraw() const::BFSAreaCollector_t>(BFSAreaCollector_t &, NavHull_t);
	void CNavBreadthFirstSearch<std::function<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*)> >(function<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*)> &, NavHull_t);
	void CNavBreadthFirstSearch<DrawSelectionSet>(DrawSelectionSet &, NavHull_t);
	void CNavBreadthFirstSearch<ClusterMarker>(ClusterMarker &, NavHull_t);
	void CNavBreadthFirstSearch<BreadthFirstSearchVolumeCollector>(BreadthFirstSearchVolumeCollector &, NavHull_t);
	void CNavBreadthFirstSearch<SelectCollector>(SelectCollector &, NavHull_t);

	// sizeof = 112
};

// src/game/server/nav_pathfind.h:491
struct HexIndex_t {
	int16 m_nX;  // +0x0
	int16 m_nY;  // +0x2
	HexIndex_t(int, int);
	bool operator==(const HexIndex_t &);
	bool operator<(const HexIndex_t &);
	float CalcNormDistSqr();
	HexIndex_t Neighbor(int);

	// sizeof = 4
};

// src/game/server/nav_pathfind.h:537
class CNavHexLattice {
	float m_flLatticeRadius;  // +0xc
	CNavHexLattice(const Vector &, float);
	HexIndex_t CalcHexIndex(const Vector &);
	Vector2D CalcHexPos(HexIndex_t);
	void DebugDrawHex(HexIndex_t, Color, float);

	// sizeof = 16
};

// src/game/server/nav_pathfind.h:581
class CNavSearchHexLattice : public CNavBreadthFirstSearch {
public:

protected:

	FuncNavOnSearchPosSimple_t m_funcOnSearchPos;  // +0x70
	float m_flMaxSearchDist;  // +0xa0

	CNavSearchHexLattice(CNavSearchHexLattice &);
	CNavSearchHexLattice(const CNavSearchHexLattice &);
	CNavSearchHexLattice(FuncNavOnSearchPosSimple_t &, NavHull_t, const Vector &, float, float, bool);
	void DoSearch();
	NavSearchAreaResult_t operator()(CNavArea &, NavSearchAreaInfo_t *);
	void AddHexesForArea(const CNavArea &);
	virtual ~CNavSearchHexLattice();

	// sizeof = 4288
};
