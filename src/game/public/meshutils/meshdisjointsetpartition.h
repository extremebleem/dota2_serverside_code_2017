// Reconstructed from DWARF by pahole; not original source.

// src/game/public/meshutils/meshdisjointsetpartition.h:18
class CMeshDisjointSetPartition {
	struct Part_t {
		int m_nVertexBegin;  // +0x0
		int m_nVertexCount;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CMeshDisjointSetPartition();
	CMeshDisjointSetPartition(const CMesh &);
	void Purge();
	bool PartitionByJoints(const CMesh &);
	bool PartitionByConnectivity(const CMesh &);
	bool PartitionSinglePiece(const CMesh &);
	int GetPartCount();
	int GetVertexCount(int);
	int GetVertex(int, int);
	void RemapPartVertices(int, const CUtlVector<Vector, CUtlMemory<Vector, int> > &, CUtlVector<Vector, CUtlMemory<Vector, int> > *);
	void Validate(const CMesh &);
	~CMeshDisjointSetPartition();

	// sizeof = 48
};

// src/game/public/meshutils/meshdisjointsetpartition.h:18
class CMeshDisjointSetPartition {
	struct Part_t {
		int m_nVertexBegin;  // +0x0
		int m_nVertexCount;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CMeshDisjointSetPartition();
	CMeshDisjointSetPartition(const CMesh &);
	void Purge();
	bool PartitionByJoints(const CMesh &);
	bool PartitionByConnectivity(const CMesh &);
	bool PartitionSinglePiece(const CMesh &);
	int GetPartCount();
	int GetVertexCount(int);
	int GetVertex(int, int);
	void RemapPartVertices(int, const CUtlVector<Vector, CUtlMemory<Vector, int> > &, CUtlVector<Vector, CUtlMemory<Vector, int> > *);
	void Validate(const CMesh &);

	// sizeof = 48
};

// src/game/public/meshutils/meshdisjointsetpartition.h:47
class CMeshPartition {
protected:

	CMeshPartition();
	bool IsInitialized();
	void Init(CMesh *, CMeshDisjointSetPartition *);
	const CUtlVector<int, CUtlMemory<int, int> > & GetPartTriangles(int);
	int MapMeshVertIndexToPartVertIndex(int);
	void GetPartMesh(int, CMesh *);
	void Validate(CMesh *);

	// sizeof = 64
};
