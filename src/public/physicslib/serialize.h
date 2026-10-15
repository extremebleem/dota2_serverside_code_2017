// Reconstructed from DWARF by pahole; not original source.

// src/public/physicslib/serialize.h:45
struct RnSphere_t {
private:

	float32 m_flRadius;  // +0xc
	RnSphere_t();

	AABB_t GetBbox();
	AABB_t GetBbox(const CTransform &);
	int GetTriangulation(Vector *);
	void GetTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> > &, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &);
	void GetTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> > &, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &, int, int);
	float GetVolume();
	Vector ComputeOrthographicAreas();

	// sizeof = 16
};

// src/public/physicslib/serialize.h:88
struct RnCapsule_t {
private:

	float32 m_flRadius;  // +0x18
	RnCapsule_t();

	AABB_t GetBbox();
	AABB_t GetBbox(const CTransform &);
	int GetTriangulation(Vector *);
	void GetTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> > &, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &);
	void GetTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> > &, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &, int, int);
	float GetVolume();
	Vector ComputeOrthographicAreas();

	// sizeof = 28
};

// src/public/physicslib/serialize.h:158
struct RnPlane_t {
private:

	float32 m_flOffset;  // +0xc

	RnPlane_t();
	RnPlane_t(const Vector &, float);
	RnPlane_t(const Vector &, const Vector &);
	float Distance(const Vector &);
	bool IsValid();
	bool operator==(const RnPlane_t &);

	// sizeof = 16
};

// src/public/physicslib/serialize.h:185
struct RnHalfEdge_t {
private:

	uint8 m_nNext;  // +0x0
	uint8 m_nTwin;  // +0x1
	uint8 m_nOrigin;  // +0x2
	uint8 m_nFace;  // +0x3

	// sizeof = 4
};

// src/public/physicslib/serialize.h:196
struct RnFace_t {
private:

	uint8 m_nEdge;  // +0x0

	// sizeof = 1
};

// src/public/physicslib/serialize.h:219
struct RnHull_t {
private:

	float m_flMaxAngularRadius;  // +0xc
	float m_flVolume;  // +0x6c
	float m_flMaxMotionRadius;  // +0x70
	float m_flMinMotionThickness;  // +0x74
	uint32 m_nFlags;  // +0x90
	RnHull_t();

	int GetVertexCount();
	const Vector GetVertex(int);
	int GetPlaneCount();
	const RnPlane_t & GetPlane(int);
	const Vector & GetPlaneNormal(int);
	int GetEdgeCount();
	const RnHalfEdge_t * GetEdge(int);
	int GetFaceCount();
	const RnFace_t * GetFace(int);
	float GetVolume();
	Vector GetMassCenter();
	matrix3x4_t GetInertia();
	Vector GetCentroid();
	const Vector ComputeFaceCentroid(int);
	void Transform(const matrix3x4_t &);
	AABB_t GetBbox(float);
	AABB_t GetBbox(const CTransform &, float);
	int GetTriangulation(Vector *);
	void GetTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> > &, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &, float);
	int GetMemory();
	uintp GetRuntimeSize();
	void Validate();

	// sizeof = 148
};

// src/public/physicslib/serialize.h:292
struct RnHullTriangle_t : public RnHull_t {
public:

	RnHullTriangle_t();
	void Init(const Vector &, const Vector &, const Vector &);

	// sizeof = 244
};

// src/public/physicslib/serialize.h:340
struct RnHullBox_t : public RnHull_t {
public:

	RnHullBox_t();
	void Init(const Vector &, const Vector &);

	// sizeof = 444
};

// src/public/physicslib/serialize.h:432
struct RnTriangle_t {
private:

	int m_nIndex[3];  // +0x0

	// sizeof = 12
};

// src/public/physicslib/serialize.h:441
struct RnNode_t {
private:

	uint32 m_nChildren;  // +0xc
	uint32 m_nTriangleOffset;  // +0x1c
	RnNode_t();

	bool IsLeaf();
	RnNode_t * GetLeftChild();
	const RnNode_t * GetLeftChild();
	RnNode_t * GetRightChild();
	const RnNode_t * GetRightChild();
	uint GetAxis();
	uint GetChildOffset();
	uint GetType();
	uint GetTriangleCount();
	uint GetTriangleOffset();
	void SetTriangleOffset(uint32);
	void SetLeaf(uint, uint);
	void SetNode(uint, uint);
	int GetHeight();

	// sizeof = 32
};

// src/public/physicslib/serialize.h:482
struct RnMesh_t {
private:

	RnMesh_t();

	RnNode_t * GetRoot();
	const RnNode_t * GetRoot();
	int GetVertexCount();
	const Vector & GetVertex(int);
	int GetTriangleCount();
	const RnTriangle_t * GetTriangle(int);
	int GetMaterialCount();
	uint8 GetMaterial(int);
	const Vector ComputeTriangleUnitNormal(const Vector &, int);
	const Vector ComputeTriangleCentroid(int);
	const Vector ComputeTriangleIncenter(int);
	int GetHeight();
	int GetMemory();
	AABB_t GetBbox();
	int GetTriangulation(Vector *);
	void GetTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> > &, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &, const Vector &);
	float GetVolume();
	uintp GetRuntimeSize();
	void Validate();

	// sizeof = 68
};

// src/public/physicslib/serialize.h:528
struct RnShapeDesc_t {
private:

	uint32 m_nCollisionAttributeIndex;  // +0x0
	uint32 m_nSurfacePropertyIndex;  // +0x4

	// sizeof = 8
};

// src/public/physicslib/serialize.h:537
struct RnSphereDesc_t : public RnShapeDesc_t {
public:

private:

	RnSphereDesc_t();

	// sizeof = 24
};

// src/public/physicslib/serialize.h:545
struct RnCapsuleDesc_t : public RnShapeDesc_t {
public:

private:

	RnCapsuleDesc_t();

	// sizeof = 36
};

// src/public/physicslib/serialize.h:553
struct RnHullDesc_t : public RnShapeDesc_t {
public:

private:

	RnHullDesc_t();

	// sizeof = 156
};

// src/public/physicslib/serialize.h:561
struct RnMeshDesc_t : public RnShapeDesc_t {
public:

private:

	RnMeshDesc_t();

	// sizeof = 76
};

// src/public/physicslib/serialize.h:724
struct RnSoftbodyParticle_t {
private:

	float32 m_flMassInv;  // +0x0

	// sizeof = 4
};

// src/public/physicslib/serialize.h:731
struct RnSoftbodySpring_t {
private:

	short unsigned int m_nParticle[2];  // +0x0
	float32 m_flLength;  // +0x4

	// sizeof = 8
};

// src/public/physicslib/serialize.h:739
struct RnSoftbodyCapsule_t {
private:

	float32 m_flRadius;  // +0x18
	short unsigned int m_nParticle[2];  // +0x1c
	RnSoftbodyCapsule_t();

	// sizeof = 32
};
