// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_connect.h:15
struct NavAdjInfo_t {
	NavEdgeIndex nInEdge;  // +0x14

	// sizeof = 24
};

// src/public/navlib/nav_connect.h:27
class CNavAdjacencyList {
	int m_nAdjAreaCount;  // +0x0

	void CollectAdjacentAreas(CNavArea *);

	// sizeof = 1544
};

// src/public/navlib/nav_connect.h:39
class CNavNeighborIterator {
	enum SearchWhere {
		SEARCH_FLOOR = 0,
		SEARCH_LADDERS = 0x1,
		SEARCH_ELEVATORS = 0x2,
		SEARCH_DONE = 0x3,
	};

	enum {
		LADDER_TOP_AHEAD = 0,
		LADDER_TOP_LEFT = 0x1,
		LADDER_TOP_RIGHT = 0x2,
		LADDER_TOP_BEHIND = 0x3,
		LADDER_TOP_NUM_DIRECTIONS = 0x4,
	};

protected:

	const CNavArea & m_rNavArea;  // +0x18
	int m_nSearchIndex;  // +0x24
	NavEdgeIndex m_nEdgeIndex;  // +0x28

	const CNavConnectVector * m_pFloorList;  // +0x30
	bool m_bLadderUp;  // +0x38

	int m_nLadderTopDir;  // +0x3c
	CNavNeighborIterator(CNavArea &);
	void Reset();
	bool Next();
	SearchWhere GetSearchWhere();
	NavAdjInfo_t & GetCurAdjInfo();

	// sizeof = 64
};
