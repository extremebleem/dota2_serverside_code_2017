// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/vertexkdtree.h:8
class CVertexKDNode {
	unsigned int m_nChildren[2];  // +0x0
	int32 m_nAxis;  // +0x8
	float m_flSplit;  // +0xc
	bool IsLeaf();
	void InitAsSplit(float, int, int);
	int GetLeafVertCount();
	int GetLeafVertStart();
	void InitAsLeaf(int, int);

	// sizeof = 16
};

// src/game/public/tier1/vertexkdtree.h:35
class CVertexKDTree {
private:

	CVertexKDTree();
	void BuildMidpoint(const float *, int, int);
	void FindVertsInBox(CUtlVectorFixedGrowable<float const*, 64ul> &, const Vector &, const Vector &, int);
	void FindVertsInBox(CUtlVectorFixed<float const*, 64ul> &, const Vector &, const Vector &, int);
	int FindMidpointIndex(int, int, int, float);
	void ComputeBounds(Vector *, Vector *, int, int);
	int BuildNode(int, int);
	~CVertexKDTree();

	// sizeof = 48
};
