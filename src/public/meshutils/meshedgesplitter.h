// Reconstructed from DWARF by pahole; not original source.

// src/public/meshutils/meshedgesplitter.h:19
class CMeshEdgeSplitter {
	struct HalfEdge_t {
		unsigned int m_nVert[2];  // +0x0
		HalfEdge_t();
		HalfEdge_t(uint, uint);
		bool operator<(const HalfEdge_t &);
		bool operator==(const HalfEdge_t &);
		bool operator!=(const HalfEdge_t &);
		const HalfEdge_t GetReverse();

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct HalfEdgeData_t {
		uint m_nTri;  // +0x0
		uint m_nOppositeVert;  // +0x4
		HalfEdgeData_t();
		HalfEdgeData_t(uint, uint);

		// sizeof = 8
	};

	struct HalfEdgeWithLength_t {
		float m_flLengthSqr;  // +0x0
		HalfEdgeIndex_t m_nIndex;  // +0x4

		// sizeof = 8
	};
	typedef IndexType_t HalfEdgeIndex_t;

	class HewlFunctor_t {
		typedef HalfEdgeWithLength_t T;
		bool operator()(const T &, const T &, bool (*)(const T &, const T &));
		/* tag__fprintf: const_type tag not supported! */;

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	typedef CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (*)(const CMeshEdgeSplitter::HalfEdge_t&, const CMeshEdgeSplitter::HalfEdge_t&)> HalfEdgeMap;

	HalfEdgeMap m_hePri;  // +0x0
	HalfEdgeMap m_heSec;  // +0x30
	float m_flSplitLenSqr;  // +0x60

protected:

	uint m_nAllocatedIndices;  // +0x90
	uint m_nAllocatedVertices;  // +0x94
	bool m_bNonManifold;  // +0x98
	CMeshEdgeSplitter(CMesh *);
	void SplitLongEdges(float);
	void AddToSplitLists(HalfEdgeIndex_t);
	uint NewVertex();
	uint NewInterpolatedVertex(uint, uint);
	uint NewInterpolatedVertex(HalfEdge_t);
	float * GetVertex(uint);
	uint NewTri();
	uint NewTri(uint, uint, uint);
	uint32 * GetTri(uint);
	void ClearSplitLists();
	int GetOppositeVertIt(HalfEdge_t, const uint32 *);
	void SplitEdge(HalfEdgeMap &, HalfEdgeIndex_t, uint);
	void ReplaceHalfEdgeTri(HalfEdge_t, uint, const HalfEdgeData_t &);
	/* tag__fprintf: const_type tag not supported! */;
	HalfEdgeIndex_t FindHalfEdge(const HalfEdgeMap &, HalfEdge_t, uint);
	/* tag__fprintf: const_type tag not supported! */;
	void Validate();
	int GetTri(HalfEdge_t);
	const HalfEdge_t GetPrimaryHalfEdgeFromIterator(HalfEdgeIndex_t);
	const Vector GetVert(uint);
	void SplitEdge(HalfEdgeIndex_t);
	bool IsBorderVertex(uint);
	bool IsBorderVertex(uint, const HalfEdgeMap &, const HalfEdgeMap &);
	bool HasBorderEdges();
	HalfEdgeIndex_t FindFirstPrimaryHalfEdgeOfVertex(uint);
	HalfEdgeIndex_t FindNextPrimaryHalfEdge(HalfEdgeIndex_t);
	HalfEdgeIndex_t GetInvalidPrimaryHalfEdge();
	float GetMinPrimaryHalfEdgeAngle(float);
	float GetMinSecondaryHalfEdgeAngle(float);
	float GetMinHalfEdgeAngle(const HalfEdgeMap &, const HalfEdgeMap &, float);
	float GetPrimaryHalfEdgeAngle(HalfEdgeIndex_t, float);
	float GetSecondaryHalfEdgeAngle(HalfEdgeIndex_t, float);
	float GetHalfEdgeAngle(const HalfEdgeMap &, const HalfEdgeMap &, HalfEdgeIndex_t, float);
	bool IsNonManifold();
	void AddHalfEdge(uint, uint, uint, uint, uint);
	void ConstructHalfEdges();
	~CMeshEdgeSplitter();

	// sizeof = 160
};

// src/public/meshutils/meshedgesplitter.h:19
class CMeshEdgeSplitter {
	struct HalfEdge_t {
		unsigned int m_nVert[2];  // +0x0
		HalfEdge_t();
		HalfEdge_t(uint, uint);
		bool operator<(const HalfEdge_t &);
		bool operator==(const HalfEdge_t &);
		bool operator!=(const HalfEdge_t &);
		const HalfEdge_t GetReverse();

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct HalfEdgeData_t {
		uint m_nTri;  // +0x0
		uint m_nOppositeVert;  // +0x4
		HalfEdgeData_t();
		HalfEdgeData_t(uint, uint);

		// sizeof = 8
	};

	struct HalfEdgeWithLength_t {
		float m_flLengthSqr;  // +0x0
		HalfEdgeIndex_t m_nIndex;  // +0x4

		// sizeof = 8
	};
	typedef IndexType_t HalfEdgeIndex_t;

	class HewlFunctor_t {
		typedef HalfEdgeWithLength_t T;
		bool operator()(const T &, const T &, bool (*)(const T &, const T &));
		/* tag__fprintf: const_type tag not supported! */;

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	typedef CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (*)(const CMeshEdgeSplitter::HalfEdge_t&, const CMeshEdgeSplitter::HalfEdge_t&)> HalfEdgeMap;

	HalfEdgeMap m_hePri;  // +0x0
	HalfEdgeMap m_heSec;  // +0x30
	float m_flSplitLenSqr;  // +0x60

protected:

	uint m_nAllocatedIndices;  // +0x90
	uint m_nAllocatedVertices;  // +0x94
	bool m_bNonManifold;  // +0x98
	CMeshEdgeSplitter(CMesh *);
	void SplitLongEdges(float);
	void AddToSplitLists(HalfEdgeIndex_t);
	uint NewVertex();
	uint NewInterpolatedVertex(uint, uint);
	uint NewInterpolatedVertex(HalfEdge_t);
	float * GetVertex(uint);
	uint NewTri();
	uint NewTri(uint, uint, uint);
	uint32 * GetTri(uint);
	void ClearSplitLists();
	int GetOppositeVertIt(HalfEdge_t, const uint32 *);
	void SplitEdge(HalfEdgeMap &, HalfEdgeIndex_t, uint);
	void ReplaceHalfEdgeTri(HalfEdge_t, uint, const HalfEdgeData_t &);
	/* tag__fprintf: const_type tag not supported! */;
	HalfEdgeIndex_t FindHalfEdge(const HalfEdgeMap &, HalfEdge_t, uint);
	/* tag__fprintf: const_type tag not supported! */;
	void Validate();
	int GetTri(HalfEdge_t);
	const HalfEdge_t GetPrimaryHalfEdgeFromIterator(HalfEdgeIndex_t);
	const Vector GetVert(uint);
	void SplitEdge(HalfEdgeIndex_t);
	bool IsBorderVertex(uint);
	bool IsBorderVertex(uint, const HalfEdgeMap &, const HalfEdgeMap &);
	bool HasBorderEdges();
	HalfEdgeIndex_t FindFirstPrimaryHalfEdgeOfVertex(uint);
	HalfEdgeIndex_t FindNextPrimaryHalfEdge(HalfEdgeIndex_t);
	HalfEdgeIndex_t GetInvalidPrimaryHalfEdge();
	float GetMinPrimaryHalfEdgeAngle(float);
	float GetMinSecondaryHalfEdgeAngle(float);
	float GetMinHalfEdgeAngle(const HalfEdgeMap &, const HalfEdgeMap &, float);
	float GetPrimaryHalfEdgeAngle(HalfEdgeIndex_t, float);
	float GetSecondaryHalfEdgeAngle(HalfEdgeIndex_t, float);
	float GetHalfEdgeAngle(const HalfEdgeMap &, const HalfEdgeMap &, HalfEdgeIndex_t, float);
	bool IsNonManifold();
	void AddHalfEdge(uint, uint, uint, uint, uint);
	void ConstructHalfEdges();

	// sizeof = 160
};
