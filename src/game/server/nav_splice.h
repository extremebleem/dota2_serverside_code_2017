// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_splice.h:19
class CNavEdge {
protected:

	NavEdgeIndex m_nEdge;  // +0x8
	CNavEdge();
	CNavEdge(CNavArea &);
	CNavEdge(CNavArea &, int);
	bool IsValid();
	void First();
	void NextCW();
	void NextCCW();
	bool IsLast();
	bool operator==(const CNavEdge &);
	bool operator!=(const CNavEdge &);
	CNavArea * GetArea();
	const CNavArea * GetArea();
	int GetEdgeNum();
	NavDirType GetEdgeDir();
	void GetVertsCW(Vector *, Vector *);

	// sizeof = 16
};

// src/game/server/nav_splice.h:118
class CNavSplice {
	struct ExpansionConnection {
		int m_nIndexA;  // +0x0
		int m_nIndexB;  // +0x4
		ExpansionConnection(int, int);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	NavEdgeVector m_HotEdges;  // +0x10
	NavEdgeVector m_PerimeterEdges;  // +0x28
	NavAreaVector m_BlockedAreas;  // +0x48
	NavAreaVector m_ExpansionAreas;  // +0x60
	NavAreaVector m_ExpansionAreaSources;  // +0x78
	CNavSplice();
	void InitMeshes(CNavMesh *, CNavMesh *);
	void AddHotEdge(const CNavEdge &);
	void DrawHotEdges();
	bool ValidateHotEdges();
	void CalcPerimeter();
	void DrawPerimeter();
	void BlockBackgroundMesh();
	bool ExpandSpliceMesh();
	CNavEdge FindNeighborInHotEdge(const CNavEdge &);
	CNavEdge NextEdge(const CNavEdge &);
	bool ExpandSpliceMeshIncremental();
	void ExpandSpliceMeshTransferCrossConnetions(int, int, NavDirType);
	void ExpandSpliceMeshCopyCrossConnetions(int, int, NavDirType);
	void ExpandSpliceMeshTrimCrossConnetions(int, NavDirType);
	~CNavSplice();

	// sizeof = 216
};
