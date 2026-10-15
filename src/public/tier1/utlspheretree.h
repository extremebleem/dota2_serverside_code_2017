// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlspheretree.h:92
class CUtlSphereTree {
	struct Node {
		Sphere_t bounds;  // +0x0
		int deepIndex;  // +0x10
		int shallowIndex;  // +0x14
		const void * pData;  // +0x18
		int maxDepth;  // +0x20
		Node();

		// sizeof = 40
	};

	struct NodeRef {
	private:

		int nodeIndex;  // +0x0

		NodeRef(int, const CUtlVector<CUtlSphereTree::Node, CUtlMemory<CUtlSphereTree::Node, int> > &);
		Node * Ptr();
		Node * operator->();
		Node & operator*();
		int Index();
		NodeRef Deep();
		NodeRef Shallow();
		bool IsValid();
		bool IsLeaf();
		NodeRef();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class Cut {
		enum CutFlags {
			PARTIAL_INTERSECTIONS = 0x1,
			OR_INTERSECTIONS = 0x2,
		};

		enum CutTestResult {
			CUT_TEST_FAIL = 0,
			CUT_TEST_PASS = 0x1,
			CUT_TEST_PARTIAL = 0x2,
		};

	private:

		const CUtlSphereTree * m_pTree;  // +0x0
		Cut(const CUtlSphereTree *);
		~Cut();
		int GetLeaves(CUtlVector<void*, CUtlMemory<void*, int> > &, int);
		Cut();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CUtlSphereTree;  // +0x0
private:

	int m_FreelistHead;  // +0x20
	int m_NumNodesInTree;  // +0x24
	int m_PrevInsertedNode;  // +0x28
	CUtlSphereTree(const CUtlSphereTree &);
	CUtlSphereTree(int);
	virtual ~CUtlSphereTree();
	void Insert(const void *, const Sphere_t *);
	void Remove(const void *, const Sphere_t *);
	bool UpdateRadius(const void *, const Sphere_t *, float);
	void RemoveAll();
	void Purge();
	int IntersectWithRay(Vector &, Vector &, CUtlVector<void*, CUtlMemory<void*, int> > &, int, Cut *);
	int IntersectWithSphere(const Sphere_t &, bool, CUtlVector<void*, CUtlMemory<void*, int> > &, int, Cut *);
	void CutByPlanes(Cut *, const Cut *, int, Plane_t *, int);
	void MeasureTreeQuality(float &, float &, float &, float &, float);
	void FreelistPush(NodeRef &);
	NodeRef FreelistPop();
	NodeRef Ref(int);
	NodeRef NewNode(const void *, const Sphere_t *);
	NodeRef CopyNode(const NodeRef &);
	void SetNodeChildren(NodeRef &, const NodeRef &, const NodeRef &);
	void FindPathToClosestLeaf_R(NodeRef, const Vector &, float, float &, CUtlVector<int, CUtlMemory<int, int> > &);
	int Remove_R(NodeRef &, const void *, const Sphere_t *);
	bool NodeHasData(const NodeRef &, const void *, const Sphere_t *);
	void RebalanceSubtrees(NodeRef &, bool);
	bool IsSubtreeBalanced(const NodeRef &);
	void ParanoidBalanceCheck_R(const NodeRef &);
	float Cost(const Sphere_t &);
	Sphere_t AddSpheres(const Sphere_t &, const Sphere_t &);
	float ComputePairingCost(const NodeRef &, const NodeRef &, const NodeRef &, const NodeRef *);
	bool UpdateRadius_R(NodeRef, const void *, const Sphere_t *, float);
	void IntersectWithRay_R(const NodeRef &, Vector &, Vector &, CUtlVector<void*, CUtlMemory<void*, int> > &, int &);
	void IntersectWithSphere_R(const NodeRef &, const Sphere_t &, bool, CUtlVector<void*, CUtlMemory<void*, int> > &, int &, float);
	bool SpheresIntersect(const Sphere_t &, const Sphere_t &, float &);
	void CutByPlanes_R(Cut *, const NodeRef &, int, Plane_t *, int);
	CutTestResult CutByPlanes_Test(const NodeRef &, int, Plane_t *, int);
	void GetLeavesUnderNode_R(const NodeRef &, CUtlVector<void*, CUtlMemory<void*, int> > &, int &);
	void MeasureTreeQuality_R(const NodeRef &, int, float &, float &, float, float &, float, float);
	float ComputeRedundancy(const NodeRef &, const NodeRef &);
	float ComputeIntersectionProbability(const NodeRef &, const NodeRef &, float);

	// sizeof = 48
};

// src/public/tier1/utlspheretree.h:92
class CUtlSphereTree {
	struct Node {
		Sphere_t bounds;  // +0x0
		int deepIndex;  // +0x10
		int shallowIndex;  // +0x14
		const void * pData;  // +0x18
		int maxDepth;  // +0x20
		Node();
		Node & operator=(const Node &);

		// sizeof = 40
	};

	struct NodeRef {
	private:

		int nodeIndex;  // +0x0

		NodeRef(int, const CUtlVector<CUtlSphereTree::Node, CUtlMemory<CUtlSphereTree::Node, int> > &);
		Node * Ptr();
		Node * operator->();
		Node & operator*();
		int Index();
		NodeRef Deep();
		NodeRef Shallow();
		bool IsValid();
		bool IsLeaf();
		NodeRef();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	class Cut {
		enum CutFlags {
			PARTIAL_INTERSECTIONS = 0x1,
			OR_INTERSECTIONS = 0x2,
		};

		enum CutTestResult {
			CUT_TEST_FAIL = 0,
			CUT_TEST_PASS = 0x1,
			CUT_TEST_PARTIAL = 0x2,
		};

	private:

		const CUtlSphereTree * m_pTree;  // +0x0
		Cut(const CUtlSphereTree *);
		~Cut();
		int GetLeaves(CUtlVector<void*, CUtlMemory<void*, int> > &, int);
		Cut();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CUtlSphereTree;  // +0x0
private:

	int m_FreelistHead;  // +0x20
	int m_NumNodesInTree;  // +0x24
	int m_PrevInsertedNode;  // +0x28
	CUtlSphereTree(const CUtlSphereTree &);
	CUtlSphereTree(int);
	virtual ~CUtlSphereTree();
	void Insert(const void *, const Sphere_t *);
	void Remove(const void *, const Sphere_t *);
	bool UpdateRadius(const void *, const Sphere_t *, float);
	void RemoveAll();
	void Purge();
	int IntersectWithRay(Vector &, Vector &, CUtlVector<void*, CUtlMemory<void*, int> > &, int, Cut *);
	int IntersectWithSphere(const Sphere_t &, bool, CUtlVector<void*, CUtlMemory<void*, int> > &, int, Cut *);
	void CutByPlanes(Cut *, const Cut *, int, Plane_t *, int);
	void MeasureTreeQuality(float &, float &, float &, float &, float);
	void FreelistPush(NodeRef &);
	NodeRef FreelistPop();
	NodeRef Ref(int);
	NodeRef NewNode(const void *, const Sphere_t *);
	NodeRef CopyNode(const NodeRef &);
	void SetNodeChildren(NodeRef &, const NodeRef &, const NodeRef &);
	void FindPathToClosestLeaf_R(NodeRef, const Vector &, float, float &, CUtlVector<int, CUtlMemory<int, int> > &);
	int Remove_R(NodeRef &, const void *, const Sphere_t *);
	bool NodeHasData(const NodeRef &, const void *, const Sphere_t *);
	void RebalanceSubtrees(NodeRef &, bool);
	bool IsSubtreeBalanced(const NodeRef &);
	void ParanoidBalanceCheck_R(const NodeRef &);
	float Cost(const Sphere_t &);
	Sphere_t AddSpheres(const Sphere_t &, const Sphere_t &);
	float ComputePairingCost(const NodeRef &, const NodeRef &, const NodeRef &, const NodeRef *);
	bool UpdateRadius_R(NodeRef, const void *, const Sphere_t *, float);
	void IntersectWithRay_R(const NodeRef &, Vector &, Vector &, CUtlVector<void*, CUtlMemory<void*, int> > &, int &);
	void IntersectWithSphere_R(const NodeRef &, const Sphere_t &, bool, CUtlVector<void*, CUtlMemory<void*, int> > &, int &, float);
	bool SpheresIntersect(const Sphere_t &, const Sphere_t &, float &);
	void CutByPlanes_R(Cut *, const NodeRef &, int, Plane_t *, int);
	CutTestResult CutByPlanes_Test(const NodeRef &, int, Plane_t *, int);
	void GetLeavesUnderNode_R(const NodeRef &, CUtlVector<void*, CUtlMemory<void*, int> > &, int &);
	void MeasureTreeQuality_R(const NodeRef &, int, float &, float &, float, float &, float, float);
	float ComputeRedundancy(const NodeRef &, const NodeRef &);
	float ComputeIntersectionProbability(const NodeRef &, const NodeRef &, float);

	// sizeof = 48
};
