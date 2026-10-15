// Reconstructed from DWARF by pahole; not original source.

// src/game/public/navlib/nav_gen_common.h:199
class CNavGenPolyBase<4ul> {
	int32 m_nVertex;  // +0x0
	int m_aVertexIndices[4];  // +0x4
	bool m_bRemoved;  // +0x14

	double m_flMinX;  // +0x18
	double m_flMaxX;  // +0x20
	double m_flMinY;  // +0x28
	double m_flMaxY;  // +0x30
	double m_flMinZ;  // +0x38
	double m_flMaxZ;  // +0x40
	NavGenPolyFlag_t m_nFlags;  // +0x48
	uint32 m_dbgDrawFlags;  // +0x4c
private:

	uint8 m_nGenInfo;  // +0x68
	CNavGenPolyBase();
	~CNavGenPolyBase();
	void Reverse();
	const VecDouble3 & Normal();
	void SetNormal(const VecDouble3 &);
	bool operator<(const CNavGenPolyBase<4ul> &);
	uint32 GetDebugDrawVal();
	void SetDebugDrawVal(uint32);
	VecDouble3 Center(const CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &);
	VecDouble3 GetVert(int, const CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &);
	VecDouble3 GetVertXY(int, CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &);
	int GetPrevVert(int);
	int GetNextVert(int);
	VecDouble3 GetNextVert(int, CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &);
	void SetVertIdx(int, int);
	int GetVertIdx(int);
	int GetVertFromVertIdx(int);
	bool HasVertIdx(int);
	VecDouble3 GetEdge(int, const CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &);
	VecDouble3 GetEdgeNorm(int, const CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &);
	double EdgeLength(CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &, int);
	uint8 GetGenInfo();
	void SetGenInfo(uint8);

	// sizeof = 112
};
